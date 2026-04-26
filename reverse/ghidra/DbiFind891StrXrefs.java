// For a fixed list of 891-new strings, find:
//  - the literal VA
//  - all references TO that VA
//  - the containing function for each reference
// Output: /opt/aimeld-proj/re/analysis/xrefs_891_newstrings.tsv

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.listing.Program;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;

import java.io.BufferedWriter;
import java.io.FileWriter;
import java.util.*;

public class DbiFind891StrXrefs extends GhidraScript {
    static final String[] TARGETS = {
        "ActivityLog",
        "HideUnknownUsers",
        "Patch21Names",
        "PatchMasterKeyGeneration",
        "ReadMT",
        "SMR Main",
        "%ld%s",
        "chgrp",
        "mkdir",
        "rmdir",
        "statvfs",
        "scp -%sf",
        "MKD %s",
        "PBSZ %d",
        "Schannel",
        "CP874",
        "EUCJP",
        "ISO-8859-",
        "OS/400",
        "RTSP/",
    };

    @Override
    public void run() throws Exception {
        Program p = currentProgram;
        String outDir = "/opt/aimeld-proj/re/analysis";

        // Map string -> address, from the defined-data listing
        Map<String, Address> found = new LinkedHashMap<>();
        Listing listing = p.getListing();
        var dit = listing.getDefinedData(true);
        while (dit.hasNext()) {
            Data d = dit.next();
            String tn = d.getDataType().getName().toLowerCase();
            if (!(tn.contains("string") || tn.contains("char"))) continue;
            Object v = d.getValue();
            if (v == null) continue;
            String s = String.valueOf(v);
            for (String t : TARGETS) {
                if (s.equals(t) && !found.containsKey(t)) {
                    found.put(t, d.getAddress());
                }
            }
        }
        println("Strings located: " + found.size() + " / " + TARGETS.length);
        for (var e : found.entrySet()) {
            println("  " + e.getKey() + " @ " + e.getValue());
        }

        BufferedWriter w = new BufferedWriter(new FileWriter(outDir + "/xrefs_891_newstrings.tsv"));
        w.write("string\tstring_va\tref_from\tfunc_va\tfunc_name\tfunc_size\n");
        for (var e : found.entrySet()) {
            String s = e.getKey();
            Address sa = e.getValue();
            ReferenceIterator rit = p.getReferenceManager().getReferencesTo(sa);
            int count = 0;
            while (rit.hasNext()) {
                Reference r = rit.next();
                Address fa = r.getFromAddress();
                Function fn = p.getFunctionManager().getFunctionContaining(fa);
                String fname = fn != null ? fn.getName() : "?";
                Address fva = fn != null ? fn.getEntryPoint() : null;
                long fsz = fn != null ? fn.getBody().getNumAddresses() : 0;
                w.write(s.replace("\t", " ") + "\t" + sa + "\t" + fa + "\t"
                        + (fva != null ? fva.toString() : "?") + "\t"
                        + fname + "\t" + fsz + "\n");
                count++;
            }
            println("  " + s + " xrefs=" + count);
        }
        w.close();
    }
}
