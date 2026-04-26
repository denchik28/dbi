#include "saves.h"
#include "log.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <sys/stat.h>
#include <dirent.h>
#include <time.h>
#include <minizip/zip.h>
#include <minizip/unzip.h>

static void resolve_title(uint64_t app_id, char *out, size_t outsz) {
    NsApplicationControlData *ctrl = calloc(1, sizeof *ctrl);
    if (!ctrl) { snprintf(out, outsz, "(oom)"); return; }
    u64 actual = 0;
    Result r = nsGetApplicationControlData(NsApplicationControlSource_Storage,
                                           app_id, ctrl, sizeof *ctrl, &actual);
    if (R_SUCCEEDED(r) && actual >= sizeof(NacpStruct)) {
        NacpLanguageEntry *lang = NULL;
        if (R_SUCCEEDED(nacpGetLanguageEntry(&ctrl->nacp, &lang)) && lang)
            snprintf(out, outsz, "%.*s",
                     (int)(outsz - 1), lang->name);
        else
            snprintf(out, outsz, "(no NACP lang)");
    } else {
        snprintf(out, outsz, "(NACP unavailable)");
    }
    free(ctrl);
}

Result saves_collect(saves_list_t *out, size_t max) {
    memset(out, 0, sizeof *out);
    out->cap   = max;
    out->items = calloc(max, sizeof(saves_entry_t));
    if (!out->items) return MAKERESULT(Module_Libnx, LibnxError_HeapAllocFailed);

    Result rc = fsInitialize();
    if (R_FAILED(rc)) { free(out->items); out->items = NULL; return rc; }

    FsSaveDataFilter filter = {0};
    FsSaveDataInfoReader reader;
    rc = fsOpenSaveDataInfoReaderWithFilter(&reader,
                                            FsSaveDataSpaceId_User, &filter);
    if (R_FAILED(rc)) {
        rc = fsOpenSaveDataInfoReader(&reader, FsSaveDataSpaceId_User);
    }
    if (R_FAILED(rc)) { fsExit(); return rc; }

    rc = nsInitialize();
    bool ns_up = R_SUCCEEDED(rc);

    FsSaveDataInfo info;
    while (out->count < max) {
        s64 total = 0;
        Result r = fsSaveDataInfoReaderRead(&reader, &info, 1, &total);
        if (R_FAILED(r) || total == 0) break;
        if (info.save_data_type != FsSaveDataType_Account &&
            info.save_data_type != FsSaveDataType_Device  &&
            info.save_data_type != FsSaveDataType_Bcat) continue;

        saves_entry_t *e = &out->items[out->count++];
        e->save_id   = info.save_data_id;
        e->app_id    = info.application_id;
        e->uid_low   = info.uid.uid[0];
        e->uid_high  = info.uid.uid[1];
        e->size      = info.size;
        e->save_type = info.save_data_type;
        e->rank      = info.save_data_rank;
        if (ns_up && info.application_id)
            resolve_title(info.application_id, e->title, sizeof e->title);
        else
            snprintf(e->title, sizeof e->title, "(device save)");
    }
    fsSaveDataInfoReaderClose(&reader);
    if (ns_up) nsExit();
    fsExit();
    return 0;
}

void saves_free(saves_list_t *lst) {
    if (!lst) return;
    free(lst->items);
    lst->items = NULL;
    lst->count = 0;
    lst->cap   = 0;
}

/* Recursive copy of a devoptab subtree from `src_dir` to `dst_dir`.
 * Creates `dst_dir` if missing. Accumulates file count and byte totals
 * via the out params. Any I/O error returns the errno-derived Result
 * (MAKERESULT(Module_Libnx, errno)) but still leaves partial output. */
static Result copy_tree(const char *src_dir, const char *dst_dir,
                        uint64_t *files, uint64_t *bytes) {
    mkdir(dst_dir, 0777);

    DIR *d = opendir(src_dir);
    if (!d) return MAKERESULT(Module_Libnx, LibnxError_NotFound);

    Result rc_first = 0;
    struct dirent *e;
    while ((e = readdir(d)) != NULL) {
        if (e->d_name[0] == '.' &&
            (e->d_name[1] == 0 || (e->d_name[1] == '.' && e->d_name[2] == 0)))
            continue;

        char sp[512], dp[512];
        snprintf(sp, sizeof sp, "%s/%s", src_dir, e->d_name);
        snprintf(dp, sizeof dp, "%s/%s", dst_dir, e->d_name);

        struct stat st;
        if (stat(sp, &st) != 0) continue;

        if (S_ISDIR(st.st_mode)) {
            Result r = copy_tree(sp, dp, files, bytes);
            if (R_FAILED(r) && R_SUCCEEDED(rc_first)) rc_first = r;
            continue;
        }

        FILE *fi = fopen(sp, "rb");
        if (!fi) { if (R_SUCCEEDED(rc_first)) rc_first = MAKERESULT(Module_Libnx, 1); continue; }
        FILE *fo = fopen(dp, "wb");
        if (!fo) { fclose(fi); if (R_SUCCEEDED(rc_first)) rc_first = MAKERESULT(Module_Libnx, 2); continue; }

        static u8 buf[64 * 1024];
        size_t n;
        while ((n = fread(buf, 1, sizeof buf, fi)) > 0) {
            size_t w = fwrite(buf, 1, n, fo);
            if (w != n) { if (R_SUCCEEDED(rc_first)) rc_first = MAKERESULT(Module_Libnx, 3); break; }
            *bytes += w;
        }
        fclose(fo);
        fclose(fi);
        (*files)++;
    }
    closedir(d);
    return rc_first;
}

/* Build every directory along `folder` (e.g. "sdmc:/a/b/c"), ignoring the
 * "sdmc:" prefix. mkdir() on existing dirs returns EEXIST which we ignore. */
static void ensure_folder_chain(const char *folder) {
    char tmp[256];
    snprintf(tmp, sizeof tmp, "%s", folder);
    char *root = strchr(tmp, ':');
    char *start = root ? root + 2 : tmp + 1;  /* skip "sdmc:/" */
    for (char *p = start; *p; p++) {
        if (*p == '/') { *p = 0; mkdir(tmp, 0777); *p = '/'; }
    }
    mkdir(tmp, 0777);
}

static const char *saves_folder_or_default(const char *folder) {
    return (folder && *folder) ? folder : "sdmc:/switch/DBI/saves";
}

Result saves_export(uint64_t app_id, uint64_t uid_lo, uint64_t uid_hi,
                    const char *saves_folder,
                    uint64_t *files_copied, uint64_t *bytes_copied,
                    char *err, size_t errsz) {
    *files_copied = *bytes_copied = 0;
    if (err && errsz) err[0] = 0;

    Result rc = fsInitialize();
    if (R_FAILED(rc)) {
        if (err) snprintf(err, errsz, "fsInitialize 0x%08x", rc);
        return rc;
    }

    AccountUid uid = { { uid_lo, uid_hi } };
    FsFileSystem fs;
    rc = fsOpen_SaveData(&fs, app_id, uid);
    if (R_FAILED(rc)) {
        if (err) snprintf(err, errsz, "fsOpen_SaveData 0x%08x", rc);
        fsExit();
        return rc;
    }

    /* Unique mount name per export so concurrent exports don't collide. */
    char mnt[32];
    snprintf(mnt, sizeof mnt, "save%llx", (unsigned long long)app_id);
    if (fsdevMountDevice(mnt, fs) == -1) {
        if (err) snprintf(err, errsz, "fsdevMount failed");
        fsFsClose(&fs);
        fsExit();
        return MAKERESULT(Module_Libnx, LibnxError_IoError);
    }

    const char *folder = saves_folder_or_default(saves_folder);
    char dst[256];
    snprintf(dst, sizeof dst,
             "%s/%016llx_%016llx%016llx",
             folder,
             (unsigned long long)app_id,
             (unsigned long long)uid_hi,
             (unsigned long long)uid_lo);
    ensure_folder_chain(folder);

    char src[64];
    snprintf(src, sizeof src, "%s:/", mnt);
    rc = copy_tree(src, dst, files_copied, bytes_copied);

    fsdevUnmountDevice(mnt);
    fsExit();
    return rc;
}

/* -- ZIP export ----------------------------------------------------------- */

/* Recursively feed each regular file at `src_dir` into the open `zf`,
 * naming entries relative to `arc_prefix` (starts empty, grows as we
 * descend). Tracks running file/byte totals in files and bytes. */
static Result zip_tree(const char *src_dir, const char *arc_prefix,
                       zipFile zf, uint64_t *files, uint64_t *bytes) {
    DIR *d = opendir(src_dir);
    if (!d) return MAKERESULT(Module_Libnx, LibnxError_NotFound);

    Result rc_first = 0;
    struct dirent *e;
    while ((e = readdir(d)) != NULL) {
        if (e->d_name[0] == '.' &&
            (e->d_name[1] == 0 || (e->d_name[1] == '.' && e->d_name[2] == 0)))
            continue;

        char sp[512], arc[512];
        snprintf(sp, sizeof sp, "%s/%s", src_dir, e->d_name);
        if (arc_prefix[0])
            snprintf(arc, sizeof arc, "%s/%s", arc_prefix, e->d_name);
        else
            snprintf(arc, sizeof arc, "%s", e->d_name);

        struct stat st;
        if (stat(sp, &st) != 0) continue;

        if (S_ISDIR(st.st_mode)) {
            Result r = zip_tree(sp, arc, zf, files, bytes);
            if (R_FAILED(r) && R_SUCCEEDED(rc_first)) rc_first = r;
            continue;
        }

        /* mtime → DOS date/time for the ZIP entry */
        zip_fileinfo zi;
        memset(&zi, 0, sizeof zi);
        struct tm *tm = localtime(&st.st_mtime);
        if (tm) {
            zi.tmz_date.tm_sec   = tm->tm_sec;
            zi.tmz_date.tm_min   = tm->tm_min;
            zi.tmz_date.tm_hour  = tm->tm_hour;
            zi.tmz_date.tm_mday  = tm->tm_mday;
            zi.tmz_date.tm_mon   = tm->tm_mon;
            zi.tmz_date.tm_year  = tm->tm_year + 1900;
        }

        /* ZIP64 flag set because save data can exceed 4 GB on some titles. */
        int zrc = zipOpenNewFileInZip64(zf, arc, &zi, NULL, 0, NULL, 0, NULL,
                                        Z_DEFLATED, Z_DEFAULT_COMPRESSION, 1);
        if (zrc != ZIP_OK) {
            if (R_SUCCEEDED(rc_first)) rc_first = MAKERESULT(Module_Libnx, 4);
            continue;
        }

        FILE *fi = fopen(sp, "rb");
        if (!fi) {
            zipCloseFileInZip(zf);
            if (R_SUCCEEDED(rc_first)) rc_first = MAKERESULT(Module_Libnx, 1);
            continue;
        }

        static u8 buf[64 * 1024];
        size_t n;
        bool write_ok = true;
        while ((n = fread(buf, 1, sizeof buf, fi)) > 0) {
            if (zipWriteInFileInZip(zf, buf, (unsigned)n) != ZIP_OK) {
                write_ok = false;
                if (R_SUCCEEDED(rc_first)) rc_first = MAKERESULT(Module_Libnx, 5);
                break;
            }
            *bytes += n;
        }
        fclose(fi);
        zipCloseFileInZip(zf);
        if (write_ok) (*files)++;
    }
    closedir(d);
    return rc_first;
}

/* Format the 128-bit Switch AccountUid as a canonical RFC-4122 UUID
 * (`xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx`, big-endian). Upstream DBI writes
 * this into `.dbi_save_info.ini` under `[Account] UserId`. */
static void format_uid_uuid(uint64_t uid_hi, uint64_t uid_lo, char *out, size_t outsz) {
    uint32_t a = (uint32_t)(uid_hi >> 32);
    uint16_t b = (uint16_t)(uid_hi >> 16);
    uint16_t c = (uint16_t)(uid_hi);
    uint16_t d = (uint16_t)(uid_lo >> 48);
    uint64_t e = uid_lo & 0xFFFFFFFFFFFFULL;
    snprintf(out, outsz, "%08x-%04x-%04x-%04x-%012llx",
             a, b, c, d, (unsigned long long)e);
}

/* Write the `.dbi_save_info.ini` sibling file (FINDINGS.md Part 20 schema).
 * Upstream restores key off the `[General]`, `[Account]` and `[Space]`
 * sections; the file layout is a sibling to the `.zip`, both named after
 * `{TitleId}_{UserId}_{idx}.{ext}`. `saves_folder_ini` is written verbatim
 * into the `SavesFolder=` line (trailing '/' appended if missing). */
static Result write_save_info_ini(const char *ini_path,
                                  const char *saves_folder_ini,
                                  uint64_t app_id,
                                  uint64_t uid_hi, uint64_t uid_lo) {
    FILE *f = fopen(ini_path, "wb");
    if (!f) return MAKERESULT(Module_Libnx, LibnxError_IoError);

    char title[128];
    resolve_title(app_id, title, sizeof title);

    time_t now_raw = time(NULL);
    struct tm now_tm;
    localtime_r(&now_raw, &now_tm);
    char date_buf[32];
    strftime(date_buf, sizeof date_buf, "%Y-%m-%d %H:%M:%S", &now_tm);

    char uid_buf[48];
    format_uid_uuid(uid_hi, uid_lo, uid_buf, sizeof uid_buf);

    const char *folder = saves_folder_ini && *saves_folder_ini
                       ? saves_folder_ini : "sdmc:/switch/DBI/saves";
    char folder_slash[256];
    size_t n = strlen(folder);
    if (n && folder[n - 1] == '/')
        snprintf(folder_slash, sizeof folder_slash, "%s", folder);
    else
        snprintf(folder_slash, sizeof folder_slash, "%s/", folder);

    fprintf(f, "[General]\n");
    fprintf(f, "TitleId      = 0x%016llx\n", (unsigned long long)app_id);
    fprintf(f, "TitleName    = %s\n",        title);
    fprintf(f, "BackupDate   = %s\n",        date_buf);
    fprintf(f, "SavesFolder  = %s\n",        folder_slash);
    fprintf(f, "\n[Account]\n");
    fprintf(f, "UserId = %s\n", uid_buf);
    fprintf(f, "\n[Space]\n");
    /* FsSaveDataSpaceId_User == 1. SdUser (=4) would apply for SD-backed
     * saves; we don't enumerate those yet so hardcode 1. */
    fprintf(f, "SaveDataSpaceId = 1\n");

    if (fclose(f) != 0) return MAKERESULT(Module_Libnx, LibnxError_IoError);
    return 0;
}

Result saves_export_zip(uint64_t app_id, uint64_t uid_lo, uint64_t uid_hi,
                        const char *saves_folder,
                        uint64_t *files_copied, uint64_t *bytes_copied,
                        char *err, size_t errsz) {
    *files_copied = *bytes_copied = 0;
    if (err && errsz) err[0] = 0;

    Result rc = fsInitialize();
    if (R_FAILED(rc)) {
        if (err) snprintf(err, errsz, "fsInitialize 0x%08x", rc);
        return rc;
    }

    AccountUid uid = { { uid_lo, uid_hi } };
    FsFileSystem fs;
    rc = fsOpen_SaveData(&fs, app_id, uid);
    if (R_FAILED(rc)) {
        if (err) snprintf(err, errsz, "fsOpen_SaveData 0x%08x", rc);
        fsExit();
        return rc;
    }

    char mnt[32];
    snprintf(mnt, sizeof mnt, "save%llx", (unsigned long long)app_id);
    if (fsdevMountDevice(mnt, fs) == -1) {
        if (err) snprintf(err, errsz, "fsdevMount failed");
        fsFsClose(&fs);
        fsExit();
        return MAKERESULT(Module_Libnx, LibnxError_IoError);
    }

    const char *folder = saves_folder_or_default(saves_folder);
    ensure_folder_chain(folder);

    char zip_path[256];
    snprintf(zip_path, sizeof zip_path,
             "%s/%016llx_%016llx%016llx.zip",
             folder,
             (unsigned long long)app_id,
             (unsigned long long)uid_hi,
             (unsigned long long)uid_lo);

    zipFile zf = zipOpen(zip_path, APPEND_STATUS_CREATE);
    if (!zf) {
        if (err) snprintf(err, errsz, "zipOpen failed: %s", zip_path);
        fsdevUnmountDevice(mnt); fsExit();
        return MAKERESULT(Module_Libnx, LibnxError_IoError);
    }

    char src[64];
    snprintf(src, sizeof src, "%s:/", mnt);
    rc = zip_tree(src, "", zf, files_copied, bytes_copied);

    if (zipClose(zf, "dbi-fork save backup") != ZIP_OK && R_SUCCEEDED(rc))
        rc = MAKERESULT(Module_Libnx, 6);

    fsdevUnmountDevice(mnt);
    fsExit();

    /* Sibling `.dbi_save_info.ini` — upstream restore expects this. Path is
     * the zip's path with the `.zip` suffix swapped for `.dbi_save_info.ini`. */
    if (R_SUCCEEDED(rc)) {
        char ini_path[256];
        snprintf(ini_path, sizeof ini_path,
                 "%s/%016llx_%016llx%016llx.dbi_save_info.ini",
                 folder,
                 (unsigned long long)app_id,
                 (unsigned long long)uid_hi,
                 (unsigned long long)uid_lo);
        Result ini_rc = write_save_info_ini(ini_path, folder,
                                            app_id, uid_hi, uid_lo);
        if (R_FAILED(ini_rc)) {
            log_linef("saves: ini write failed 0x%x at %s", ini_rc, ini_path);
            if (err && errsz) snprintf(err, errsz, "ini write 0x%x", ini_rc);
            rc = ini_rc;
        }
    }

    log_linef("saves: zip %s files=%llu raw_bytes=%llu rc=0x%x",
              zip_path, (unsigned long long)*files_copied,
              (unsigned long long)*bytes_copied, rc);
    return rc;
}

/* -- ZIP restore ---------------------------------------------------------- */

/* Make each parent directory of a mounted-save path (`<mnt>:/a/b/c`). The
 * `<mnt>:/` prefix is always there so we start the walk past the colon. */
static void ensure_save_parent_dir(const char *path) {
    char tmp[512];
    snprintf(tmp, sizeof tmp, "%s", path);
    char *slash = strrchr(tmp, '/');
    if (!slash) return;
    *slash = 0;
    char *root = strchr(tmp, ':');
    char *start = root ? root + 2 : tmp + 1;  /* skip "<mnt>:/" */
    for (char *p = start; *p; p++) {
        if (*p == '/') {
            *p = 0;
            mkdir(tmp, 0777);
            *p = '/';
        }
    }
    mkdir(tmp, 0777);
}

Result saves_restore_zip(uint64_t app_id, uint64_t uid_lo, uint64_t uid_hi,
                         const char *saves_folder,
                         uint64_t *files_restored, uint64_t *bytes_restored,
                         char *err, size_t errsz) {
    *files_restored = *bytes_restored = 0;
    if (err && errsz) err[0] = 0;

    const char *folder = saves_folder_or_default(saves_folder);
    char zip_path[256];
    snprintf(zip_path, sizeof zip_path,
             "%s/%016llx_%016llx%016llx.zip",
             folder,
             (unsigned long long)app_id,
             (unsigned long long)uid_hi,
             (unsigned long long)uid_lo);

    unzFile uf = unzOpen64(zip_path);
    if (!uf) {
        if (err) snprintf(err, errsz, "no backup at %s", zip_path);
        return MAKERESULT(Module_Libnx, LibnxError_NotFound);
    }

    Result rc = fsInitialize();
    if (R_FAILED(rc)) {
        unzClose(uf);
        if (err) snprintf(err, errsz, "fsInitialize 0x%08x", rc);
        return rc;
    }

    AccountUid uid = { { uid_lo, uid_hi } };
    FsFileSystem fs;
    rc = fsOpen_SaveData(&fs, app_id, uid);
    if (R_FAILED(rc)) {
        unzClose(uf);
        if (err) snprintf(err, errsz, "fsOpen_SaveData 0x%08x (launch title once first)", rc);
        fsExit();
        return rc;
    }

    char mnt[32];
    snprintf(mnt, sizeof mnt, "rst%llx", (unsigned long long)app_id);
    if (fsdevMountDevice(mnt, fs) == -1) {
        if (err) snprintf(err, errsz, "fsdevMount failed");
        fsFsClose(&fs);
        unzClose(uf);
        fsExit();
        return MAKERESULT(Module_Libnx, LibnxError_IoError);
    }

    Result rc_first = 0;
    int zrc = unzGoToFirstFile(uf);
    while (zrc == UNZ_OK) {
        char entry[512];
        unz_file_info64 info;
        if (unzGetCurrentFileInfo64(uf, &info, entry, sizeof entry,
                                    NULL, 0, NULL, 0) != UNZ_OK) break;

        /* Skip directory entries (trailing slash) and the metadata sidecar
         * if it's ever embedded inside the zip by accident. */
        size_t elen = strlen(entry);
        if (elen == 0 || entry[elen - 1] == '/') {
            zrc = unzGoToNextFile(uf);
            continue;
        }

        char dst[640];
        snprintf(dst, sizeof dst, "%s:/%s", mnt, entry);
        ensure_save_parent_dir(dst);

        if (unzOpenCurrentFile(uf) != UNZ_OK) {
            if (R_SUCCEEDED(rc_first)) rc_first = MAKERESULT(Module_Libnx, 7);
            zrc = unzGoToNextFile(uf);
            continue;
        }
        FILE *fo = fopen(dst, "wb");
        if (!fo) {
            unzCloseCurrentFile(uf);
            if (R_SUCCEEDED(rc_first)) rc_first = MAKERESULT(Module_Libnx, 8);
            zrc = unzGoToNextFile(uf);
            continue;
        }

        static u8 rbuf[64 * 1024];
        int n;
        bool ok = true;
        while ((n = unzReadCurrentFile(uf, rbuf, sizeof rbuf)) > 0) {
            if (fwrite(rbuf, 1, (size_t)n, fo) != (size_t)n) {
                ok = false;
                if (R_SUCCEEDED(rc_first)) rc_first = MAKERESULT(Module_Libnx, 9);
                break;
            }
            *bytes_restored += (uint64_t)n;
        }
        if (n < 0) {
            ok = false;
            if (R_SUCCEEDED(rc_first)) rc_first = MAKERESULT(Module_Libnx, 10);
        }
        fclose(fo);
        unzCloseCurrentFile(uf);
        if (ok) (*files_restored)++;
        zrc = unzGoToNextFile(uf);
    }
    unzClose(uf);

    /* Persist the mutations before the save is visible to the title. */
    if (R_SUCCEEDED(rc_first)) {
        int cc = fsdevCommitDevice(mnt);
        if (cc < 0) rc_first = MAKERESULT(Module_Libnx, 11);
    }

    fsdevUnmountDevice(mnt);
    fsExit();

    log_linef("saves: restore %s files=%llu raw_bytes=%llu rc=0x%x",
              zip_path, (unsigned long long)*files_restored,
              (unsigned long long)*bytes_restored, rc_first);
    return rc_first;
}
