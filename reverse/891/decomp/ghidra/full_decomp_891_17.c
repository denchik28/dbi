// ===== FUN_710074b0d0 @ 710074b0d0 (size=200) =====

ulong FUN_710074b0d0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0x800000004;
  *(undefined4 *)(plVar2 + 3) = param_4;
  *(undefined4 *)((long)plVar2 + 0x1c) = 0;
  plVar2[2] = 0x49434653;
  uVar3 = FUN_710076d0c0();
  if ((int)uVar3 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar4 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar4 = (long *)((long)plVar2 + 0xc);
      }
      lVar6 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar4 = plVar2 + 1;
      lVar6 = 0;
    }
    uVar5 = (long)plVar4 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar3 = 0x5f59;
    if (((*(int *)((long)plVar2 + uVar5) == 0x4f434653) &&
        (uVar1 = *(uint *)((long)plVar2 + uVar5 + 8), uVar3 = (ulong)uVar1, uVar1 == 0)) &&
       (param_3 != (undefined4 *)0x0)) {
      *param_3 = *(undefined4 *)((long)plVar2 + uVar5 + 0x10);
    }
  }
  return uVar3;
}



// ===== FUN_710074b1a0 @ 710074b1a0 (size=716) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_710074b1a0(int param_1)

{
  bool bVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong local_c8;
  undefined1 auStack_c0 [56];
  ulong local_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  FUN_7100749670(0x7100d16b28);
  iVar3 = _DAT_7100d16b2c + 1;
  bVar1 = _DAT_7100d16b2c == 0;
  _DAT_7100d16b2c = iVar3;
  if (bVar1) {
    plVar6 = (long *)FUN_7100769b80();
    if (param_1 == 1) {
      iVar3 = FUN_710075e590(&DAT_7100d16b50,0x31753a636361);
LAB_710074b264:
      if (iVar3 == 0) {
        local_c8 = 0;
        local_8 = 0;
        local_88 = 0;
        lStack_80 = 0;
        lStack_78 = 0;
        uStack_70 = 0;
        local_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        local_48 = 0;
        uStack_40 = 0;
        uStack_38 = 0;
        uStack_30 = 0;
        local_28 = 0;
        uStack_20 = 0;
        uStack_18 = 0;
        uStack_10 = 0;
        iVar3 = FUN_710074d950(auStack_c0,2);
        if (iVar3 == 0) {
          iVar3 = FUN_710074d830(auStack_c0,&local_c8);
          if ((iVar3 == 0) && (0x87 < local_c8)) {
            iVar3 = FUN_710074d930(auStack_c0,0,&local_88,0x88);
            FUN_710074d6d0(auStack_c0);
            if ((iVar3 == 0) && ((local_88 & 0xffffffffff) == 0x1c79497ca)) {
              _DAT_7100d16b40 = lStack_80;
              _DAT_7100d16b48 = lStack_78;
              DAT_7100d16b30 = 1;
              if (plVar6 != (long *)0x0) {
                iVar3 = 0;
                *plVar6 = lStack_80;
                plVar6[1] = lStack_78;
                goto LAB_710074b22c;
              }
              goto LAB_710074b1d4;
            }
          }
          else {
            FUN_710074d6d0(auStack_c0);
          }
        }
        if (plVar6 != (long *)0x0) {
          _DAT_7100d16b40 = *plVar6;
          _DAT_7100d16b48 = plVar6[1];
          if (_DAT_7100d16b48 != 0 || _DAT_7100d16b40 != 0) {
            iVar3 = 0;
            DAT_7100d16b30 = 1;
            goto LAB_710074b22c;
          }
        }
        goto LAB_710074b1d4;
      }
    }
    else {
      if (param_1 == 2) {
        iVar3 = FUN_710075e590(&DAT_7100d16b50,0x75733a636361);
        goto LAB_710074b264;
      }
      if (param_1 == 0) {
        iVar3 = FUN_710075e590(&DAT_7100d16b50,0x30753a636361);
        if (iVar3 == 0) {
          uVar4 = FUN_7100769b90();
          uVar5 = 0x8c;
          if (uVar4 < 0x60000) {
            uVar5 = 100;
          }
          plVar2 = (long *)tpidrro_el0;
          *(undefined4 *)(plVar2 + 5) = uVar5;
          *(undefined4 *)((long)plVar2 + 0x2c) = 0;
          uVar5 = _DAT_7100d16b50;
          *plVar2 = -0x7ffffff5fffffffc;
          plVar2[6] = 0;
          *(undefined4 *)(plVar2 + 1) = 1;
          plVar2[4] = 0x49434653;
          iVar3 = FUN_710076d0c0(uVar5);
          if (iVar3 == 0) {
            if (*plVar2 < 0) {
              uVar4 = *(uint *)(plVar2 + 1);
              plVar7 = (long *)((long)plVar2 + 0x14);
              if ((uVar4 & 1) == 0) {
                plVar7 = (long *)((long)plVar2 + 0xc);
              }
              lVar9 = (((ulong)(uVar4 >> 1) & 0xf) + ((ulong)(uVar4 >> 5) & 0xf)) * 4;
            }
            else {
              plVar7 = plVar2 + 1;
              lVar9 = 0;
            }
            uVar8 = (long)plVar7 +
                    ((lVar9 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf &
                    0xfffffffffffffff0;
            if (*(int *)((long)plVar2 + uVar8) == 0x4f434653) {
              iVar3 = *(int *)((long)plVar2 + uVar8 + 8);
              goto LAB_710074b264;
            }
            iVar3 = 0x5f59;
          }
        }
      }
      else {
        iVar3 = 0x1759;
      }
    }
    FUN_710074b050();
    _DAT_7100d16b2c = _DAT_7100d16b2c + -1;
  }
  else {
LAB_710074b1d4:
    iVar3 = 0;
  }
LAB_710074b22c:
  FUN_7100749740(0x7100d16b28);
  return iVar3;
}



// ===== FUN_710074b470 @ 710074b470 (size=72) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710074b470(void)

{
  FUN_7100749670();
  if (_DAT_7100d16b2c != 0) {
    _DAT_7100d16b2c = _DAT_7100d16b2c + -1;
    if (_DAT_7100d16b2c == 0) {
      FUN_710074b050();
    }
  }
  FUN_7100749740(0x7100d16b28);
  return;
}



// ===== FUN_710074b4c0 @ 710074b4c0 (size=12) =====

undefined1 * FUN_710074b4c0(void)

{
  return &DAT_7100d16b50;
}



// ===== FUN_710074b4d0 @ 710074b4d0 (size=28) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710074b4d0(undefined8 param_1)

{
  FUN_710074b0d0(_DAT_7100d16b50,_DAT_7100d16b58,param_1,0);
  return;
}



// ===== FUN_710074b4f0 @ 710074b4f0 (size=360) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_710074b4f0(undefined8 param_1,uint param_2,uint *param_3)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long local_80 [16];
  
  plVar6 = (long *)tpidrro_el0;
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 0;
  local_80[4] = 0;
  local_80[5] = 0;
  local_80[6] = 0;
  local_80[7] = 0;
  local_80[8] = 0;
  local_80[9] = 0;
  local_80[10] = 0;
  local_80[0xb] = 0;
  local_80[0xc] = 0;
  local_80[0xd] = 0;
  local_80[0xe] = 0;
  local_80[0xf] = 0;
  *plVar6 = 0xc0900000004;
  *(int *)((long)plVar6 + 0x2c) = (int)local_80;
  plVar6[2] = 0x49434653;
  plVar6[3] = 2;
  *(short *)(plVar6 + 6) = (short)((ulong)local_80 >> 0x20);
  *(undefined2 *)(plVar6 + 5) = 0x80;
  *(undefined2 *)((long)plVar6 + 0x32) = 0x80;
  iVar1 = FUN_710076d0c0(_DAT_7100d16b50);
  if (iVar1 == 0) {
    if (*plVar6 < 0) {
      uVar4 = *(uint *)(plVar6 + 1);
      plVar2 = (long *)((long)plVar6 + 0x14);
      if ((uVar4 & 1) == 0) {
        plVar2 = (long *)((long)plVar6 + 0xc);
      }
      lVar5 = (((ulong)(uVar4 >> 1) & 0xf) + ((ulong)(uVar4 >> 5) & 0xf)) * 4;
    }
    else {
      plVar2 = plVar6 + 1;
      lVar5 = 0;
    }
    iVar1 = 0x5f59;
    uVar3 = (long)plVar2 + ((lVar5 + (ulong)((uint)*plVar6 >> 0x10 & 0xf) * 8) - (long)plVar6) + 0xf
            & 0xfffffffffffffff0;
    if ((*(int *)((long)plVar6 + uVar3) == 0x4f434653) &&
       (iVar1 = *(int *)((long)plVar6 + uVar3 + 8), iVar1 == 0)) {
      uVar4 = 0;
      plVar6 = local_80;
      do {
        if ((*plVar6 == 0) && (plVar6[1] == 0)) break;
        uVar4 = uVar4 + 1;
        plVar6 = plVar6 + 2;
      } while (uVar4 != 8);
      if ((int)param_2 < (int)uVar4) {
        uVar4 = param_2;
      }
      FUN_710080f900(param_1,local_80,
                     -(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar4 << 4);
      iVar1 = 0;
      *param_3 = uVar4;
    }
  }
  return iVar1;
}



// ===== FUN_710074b660 @ 710074b660 (size=268) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710074b660(int *param_1,long param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  undefined2 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  
  uVar3 = _DAT_7100d16b5c;
  plVar2 = (long *)tpidrro_el0;
  plVar2[4] = param_2;
  plVar2[5] = param_3;
  *plVar2 = 0xc00000004;
  plVar2[2] = 0x49434653;
  plVar2[3] = 5;
  uVar4 = FUN_710076d0c0(_DAT_7100d16b50);
  if ((int)uVar4 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      lVar5 = (long)plVar2 + 0x14;
      if ((uVar1 & 1) == 0) {
        lVar5 = (long)plVar2 + 0xc;
      }
      plVar7 = (long *)(lVar5 + ((ulong)(uVar1 >> 1) & 0xf) * 4);
      lVar5 = ((ulong)(uVar1 >> 5) & 0xf) << 2;
    }
    else {
      plVar7 = plVar2 + 1;
      lVar5 = 0;
    }
    uVar4 = 0x5f59;
    uVar6 = (long)plVar7 + ((lVar5 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    if ((*(int *)((long)plVar2 + uVar6) == 0x4f434653) &&
       (uVar1 = *(uint *)((long)plVar2 + uVar6 + 8), uVar4 = (ulong)uVar1, uVar1 == 0)) {
      if ((int)*plVar7 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        return uVar4;
      }
      *param_1 = (int)*plVar7;
      *(undefined2 *)(param_1 + 3) = uVar3;
      param_1[1] = 1;
      param_1[2] = 0;
    }
  }
  return uVar4;
}



// ===== FUN_710074b770 @ 710074b770 (size=100) =====

void FUN_710074b770(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)((long)param_1 + 4) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  puVar1 = (undefined8 *)tpidrro_el0;
  *puVar1 = 2;
  FUN_710076d0c0(*(undefined4 *)param_1);
  if (*(int *)((long)param_1 + 4) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  FUN_710076d060(*(undefined4 *)param_1);
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// ===== FUN_710074b7e0 @ 710074b7e0 (size=460) =====

ulong FUN_710074b7e0(int *param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (*param_1 == 0) {
    return 0x1159;
  }
  if (param_2 == 0) {
    plVar2 = (long *)tpidrro_el0;
    *plVar2 = 0x800000004;
    plVar2[2] = 0x49434653;
    plVar2[3] = 1;
    uVar3 = FUN_710076d0c0();
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar5 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar5 = (long *)((long)plVar2 + 0xc);
      }
      lVar6 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar5 = plVar2 + 1;
      lVar6 = 0;
    }
    uVar3 = (long)plVar5 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    if (*(int *)((long)plVar2 + uVar3) != 0x4f434653) {
      return 0x5f59;
    }
    uVar1 = *(uint *)((long)plVar2 + uVar3 + 8);
    if (uVar1 != 0) {
      return (ulong)uVar1;
    }
    if (param_3 != (undefined8 *)0x0) {
      uVar10 = *(undefined8 *)((long)plVar2 + uVar3 + 0x18);
      uVar9 = *(undefined8 *)((long)plVar2 + uVar3 + 0x10);
      uVar8 = *(undefined8 *)((long)plVar2 + uVar3 + 0x28);
      uVar7 = *(undefined8 *)((long)plVar2 + uVar3 + 0x20);
      uVar11 = *(undefined8 *)((long)plVar2 + uVar3 + 0x38);
      uVar4 = *(undefined8 *)((long)plVar2 + uVar3 + 0x40);
      param_3[4] = *(undefined8 *)((long)plVar2 + uVar3 + 0x30);
      param_3[5] = uVar11;
      param_3[1] = uVar10;
      *param_3 = uVar9;
      param_3[3] = uVar8;
      param_3[2] = uVar7;
      param_3[6] = uVar4;
      return 0;
    }
  }
  else {
    plVar2 = (long *)tpidrro_el0;
    *(int *)(plVar2 + 5) = (int)param_2;
    *plVar2 = 0xc0800000004;
    *(short *)((long)plVar2 + 0x2c) = (short)((ulong)param_2 >> 0x20);
    plVar2[2] = 0x49434653;
    plVar2[3] = 0;
    *(undefined2 *)((long)plVar2 + 0x2e) = 0x80;
    uVar3 = FUN_710076d0c0();
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar5 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar5 = (long *)((long)plVar2 + 0xc);
      }
      lVar6 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar5 = plVar2 + 1;
      lVar6 = 0;
    }
    uVar3 = (long)plVar5 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    if (*(int *)((long)plVar2 + uVar3) != 0x4f434653) {
      return 0x5f59;
    }
    uVar1 = *(uint *)((long)plVar2 + uVar3 + 8);
    if (uVar1 != 0) {
      return (ulong)uVar1;
    }
    if (param_3 != (undefined8 *)0x0) {
      uVar10 = *(undefined8 *)((long)plVar2 + uVar3 + 0x18);
      uVar9 = *(undefined8 *)((long)plVar2 + uVar3 + 0x10);
      uVar8 = *(undefined8 *)((long)plVar2 + uVar3 + 0x28);
      uVar7 = *(undefined8 *)((long)plVar2 + uVar3 + 0x20);
      uVar11 = *(undefined8 *)((long)plVar2 + uVar3 + 0x38);
      uVar4 = *(undefined8 *)((long)plVar2 + uVar3 + 0x40);
      param_3[4] = *(undefined8 *)((long)plVar2 + uVar3 + 0x30);
      param_3[5] = uVar11;
      param_3[1] = uVar10;
      *param_3 = uVar9;
      param_3[3] = uVar8;
      param_3[2] = uVar7;
      param_3[6] = uVar4;
    }
  }
  return 0;
}



// ===== FUN_710074b9b0 @ 710074b9b0 (size=24) =====

void FUN_710074b9b0(void)

{
  do {
    FUN_710076d024(86400000000000);
  } while( true );
}



// ===== FUN_710074b9d0 @ 710074b9d0 (size=264) =====

ulong FUN_710074b9d0(undefined4 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  
  plVar6 = (long *)tpidrro_el0;
  uVar1 = *param_1;
  uVar5 = *(undefined2 *)(param_1 + 3);
  uVar2 = param_1[2];
  *(undefined4 *)(plVar6 + 5) = param_3;
  *(undefined4 *)((long)plVar6 + 0x2c) = 0;
  *plVar6 = 0xc00000004;
  *(undefined4 *)(plVar6 + 2) = 0x100001;
  *(undefined4 *)((long)plVar6 + 0x14) = uVar2;
  plVar6[3] = 0;
  plVar6[4] = 0x49434653;
  uVar7 = FUN_710076d0c0(uVar1);
  if ((int)uVar7 == 0) {
    if (*plVar6 < 0) {
      uVar3 = *(uint *)(plVar6 + 1);
      plVar8 = (long *)((long)plVar6 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar8 = (long *)((long)plVar6 + 0xc);
      }
      lVar10 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar8 = plVar6 + 1;
      lVar10 = 0;
    }
    uVar9 = (long)plVar8 +
            ((lVar10 + (ulong)((uint)*plVar6 >> 0x10 & 0xf) * 8) - (long)plVar6) + 0xf &
            0xfffffffffffffff0;
    uVar7 = 0x5f59;
    if ((*(int *)((long)plVar6 + uVar9 + 0x10) == 0x4f434653) &&
       (uVar3 = *(uint *)((long)plVar6 + uVar9 + 0x18), uVar7 = (ulong)uVar3, uVar3 == 0)) {
      iVar4 = *(int *)((long)plVar6 + uVar9 + 0x20);
      if (iVar4 == 0) {
        *param_2 = 0;
        param_2[1] = 0;
        return uVar7;
      }
      *(undefined4 *)param_2 = uVar1;
      *(undefined4 *)((long)param_2 + 4) = 0;
      *(int *)(param_2 + 1) = iVar4;
      *(undefined2 *)((long)param_2 + 0xc) = uVar5;
    }
  }
  return uVar7;
}



// ===== FUN_710074bae0 @ 710074bae0 (size=204) =====

ulong FUN_710074bae0(undefined4 *param_1,undefined1 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  uVar1 = param_1[2];
  plVar3 = (long *)tpidrro_el0;
  *plVar3 = 0xd00000004;
  *(undefined4 *)(plVar3 + 5) = param_3;
  *(undefined4 *)((long)plVar3 + 0x2c) = 0;
  *(undefined4 *)(plVar3 + 2) = 0x110001;
  *(undefined4 *)((long)plVar3 + 0x14) = uVar1;
  *(undefined1 *)(plVar3 + 6) = param_2;
  plVar3[3] = 0;
  plVar3[4] = 0x49434653;
  uVar4 = FUN_710076d0c0(*param_1);
  if ((int)uVar4 == 0) {
    if (*plVar3 < 0) {
      uVar2 = *(uint *)(plVar3 + 1);
      plVar5 = (long *)((long)plVar3 + 0x14);
      if ((uVar2 & 1) == 0) {
        plVar5 = (long *)((long)plVar3 + 0xc);
      }
      lVar7 = (((ulong)(uVar2 >> 1) & 0xf) + ((ulong)(uVar2 >> 5) & 0xf)) * 4;
    }
    else {
      plVar5 = plVar3 + 1;
      lVar7 = 0;
    }
    uVar6 = (long)plVar5 + ((lVar7 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf
            & 0xfffffffffffffff0;
    uVar4 = 0x5f59;
    if (*(int *)((long)plVar3 + uVar6 + 0x10) == 0x4f434653) {
      uVar4 = (ulong)*(uint *)((long)plVar3 + uVar6 + 0x18);
    }
  }
  return uVar4;
}



// ===== FUN_710074bbb0 @ 710074bbb0 (size=208) =====

ulong FUN_710074bbb0(undefined4 *param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  uVar1 = param_1[2];
  plVar3 = (long *)tpidrro_el0;
  *plVar3 = 0xd00000004;
  *(undefined4 *)(plVar3 + 5) = param_3;
  *(undefined4 *)((long)plVar3 + 0x2c) = 0;
  *(undefined4 *)(plVar3 + 2) = 0x100101;
  *(undefined4 *)((long)plVar3 + 0x14) = uVar1;
  plVar3[3] = 0;
  plVar3[4] = 0x49434653;
  *(undefined4 *)(plVar3 + 6) = *(undefined4 *)(param_2 + 8);
  uVar4 = FUN_710076d0c0(*param_1);
  if ((int)uVar4 == 0) {
    if (*plVar3 < 0) {
      uVar2 = *(uint *)(plVar3 + 1);
      plVar5 = (long *)((long)plVar3 + 0x14);
      if ((uVar2 & 1) == 0) {
        plVar5 = (long *)((long)plVar3 + 0xc);
      }
      lVar7 = (((ulong)(uVar2 >> 1) & 0xf) + ((ulong)(uVar2 >> 5) & 0xf)) * 4;
    }
    else {
      plVar5 = plVar3 + 1;
      lVar7 = 0;
    }
    uVar6 = (long)plVar5 + ((lVar7 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf
            & 0xfffffffffffffff0;
    uVar4 = 0x5f59;
    if (*(int *)((long)plVar3 + uVar6 + 0x10) == 0x4f434653) {
      uVar4 = (ulong)*(uint *)((long)plVar3 + uVar6 + 0x18);
    }
  }
  return uVar4;
}



// ===== FUN_710074bc80 @ 710074bc80 (size=204) =====

ulong FUN_710074bc80(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  uVar1 = param_1[2];
  plVar3 = (long *)tpidrro_el0;
  *plVar3 = 0xd00000004;
  *(undefined4 *)(plVar3 + 5) = param_3;
  *(undefined4 *)((long)plVar3 + 0x2c) = 0;
  *(undefined4 *)(plVar3 + 2) = 0x140001;
  *(undefined4 *)((long)plVar3 + 0x14) = uVar1;
  *(undefined4 *)(plVar3 + 6) = param_2;
  plVar3[3] = 0;
  plVar3[4] = 0x49434653;
  uVar4 = FUN_710076d0c0(*param_1);
  if ((int)uVar4 == 0) {
    if (*plVar3 < 0) {
      uVar2 = *(uint *)(plVar3 + 1);
      plVar5 = (long *)((long)plVar3 + 0x14);
      if ((uVar2 & 1) == 0) {
        plVar5 = (long *)((long)plVar3 + 0xc);
      }
      lVar7 = (((ulong)(uVar2 >> 1) & 0xf) + ((ulong)(uVar2 >> 5) & 0xf)) * 4;
    }
    else {
      plVar5 = plVar3 + 1;
      lVar7 = 0;
    }
    uVar6 = (long)plVar5 + ((lVar7 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf
            & 0xfffffffffffffff0;
    uVar4 = 0x5f59;
    if (*(int *)((long)plVar3 + uVar6 + 0x10) == 0x4f434653) {
      uVar4 = (ulong)*(uint *)((long)plVar3 + uVar6 + 0x18);
    }
  }
  return uVar4;
}



// ===== FUN_710074bd50 @ 710074bd50 (size=204) =====

ulong FUN_710074bd50(undefined4 *param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  uVar1 = param_1[2];
  plVar3 = (long *)tpidrro_el0;
  *plVar3 = 0xe00000004;
  *(undefined4 *)(plVar3 + 5) = param_3;
  *(undefined4 *)((long)plVar3 + 0x2c) = 0;
  *(undefined4 *)(plVar3 + 2) = 0x180001;
  *(undefined4 *)((long)plVar3 + 0x14) = uVar1;
  plVar3[6] = param_2;
  plVar3[3] = 0;
  plVar3[4] = 0x49434653;
  uVar4 = FUN_710076d0c0(*param_1);
  if ((int)uVar4 == 0) {
    if (*plVar3 < 0) {
      uVar2 = *(uint *)(plVar3 + 1);
      plVar5 = (long *)((long)plVar3 + 0x14);
      if ((uVar2 & 1) == 0) {
        plVar5 = (long *)((long)plVar3 + 0xc);
      }
      lVar7 = (((ulong)(uVar2 >> 1) & 0xf) + ((ulong)(uVar2 >> 5) & 0xf)) * 4;
    }
    else {
      plVar5 = plVar3 + 1;
      lVar7 = 0;
    }
    uVar6 = (long)plVar5 + ((lVar7 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf
            & 0xfffffffffffffff0;
    uVar4 = 0x5f59;
    if (*(int *)((long)plVar3 + uVar6 + 0x10) == 0x4f434653) {
      uVar4 = (ulong)*(uint *)((long)plVar3 + uVar6 + 0x18);
    }
  }
  return uVar4;
}



// ===== FUN_710074be20 @ 710074be20 (size=284) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710074be20(undefined8 *param_1,ulong param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  
  uVar6 = _DAT_7100d16cfc;
  uVar5 = _DAT_7100d16cf8;
  uVar4 = _DAT_7100d16cf0;
  plVar3 = (long *)tpidrro_el0;
  *plVar3 = 0xe00000004;
  plVar3[5] = 0;
  plVar3[6] = param_2 & 0xffffffff | param_3 << 0x20;
  *(undefined4 *)(plVar3 + 2) = 0x180001;
  *(undefined4 *)((long)plVar3 + 0x14) = uVar5;
  plVar3[3] = 0;
  plVar3[4] = 0x49434653;
  uVar7 = FUN_710076d0c0(uVar4);
  if ((int)uVar7 == 0) {
    if (*plVar3 < 0) {
      uVar1 = *(uint *)(plVar3 + 1);
      plVar9 = (long *)((long)plVar3 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar9 = (long *)((long)plVar3 + 0xc);
      }
      lVar8 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar9 = plVar3 + 1;
      lVar8 = 0;
    }
    uVar7 = 0x5f59;
    uVar10 = (long)plVar9 +
             ((lVar8 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf &
             0xfffffffffffffff0;
    if ((*(int *)((long)plVar3 + uVar10 + 0x10) == 0x4f434653) &&
       (uVar1 = *(uint *)((long)plVar3 + uVar10 + 0x18), uVar7 = (ulong)uVar1, uVar1 == 0)) {
      iVar2 = *(int *)((long)plVar3 + uVar10 + 0x20);
      if (iVar2 == 0) {
        *param_1 = 0;
        param_1[1] = 0;
        return uVar7;
      }
      *(undefined4 *)param_1 = uVar4;
      *(undefined4 *)((long)param_1 + 4) = 0;
      *(int *)(param_1 + 1) = iVar2;
      *(undefined2 *)((long)param_1 + 0xc) = uVar6;
    }
  }
  return uVar7;
}



// ===== FUN_710074bf40 @ 710074bf40 (size=276) =====

ulong FUN_710074bf40(undefined4 *param_1,undefined8 *param_2,long param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  
  plVar6 = (long *)tpidrro_el0;
  uVar1 = *param_1;
  uVar2 = param_1[2];
  uVar5 = *(undefined2 *)(param_1 + 3);
  *(undefined4 *)(plVar6 + 5) = param_4;
  *(undefined4 *)((long)plVar6 + 0x2c) = 0;
  plVar6[6] = param_3;
  *plVar6 = 0xe00000004;
  *(undefined4 *)(plVar6 + 2) = 0x180001;
  *(undefined4 *)((long)plVar6 + 0x14) = uVar2;
  plVar6[3] = 0;
  plVar6[4] = 0x49434653;
  uVar7 = FUN_710076d0c0(*param_1);
  if ((int)uVar7 == 0) {
    if (*plVar6 < 0) {
      uVar3 = *(uint *)(plVar6 + 1);
      plVar8 = (long *)((long)plVar6 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar8 = (long *)((long)plVar6 + 0xc);
      }
      lVar10 = (((ulong)(uVar3 >> 5) & 0xf) + ((ulong)(uVar3 >> 1) & 0xf)) * 4;
    }
    else {
      plVar8 = plVar6 + 1;
      lVar10 = 0;
    }
    uVar9 = (long)plVar8 +
            ((lVar10 + (ulong)((uint)*plVar6 >> 0x10 & 0xf) * 8) - (long)plVar6) + 0xf &
            0xfffffffffffffff0;
    uVar7 = 0x5f59;
    if ((*(int *)((long)plVar6 + uVar9 + 0x10) == 0x4f434653) &&
       (uVar3 = *(uint *)((long)plVar6 + uVar9 + 0x18), uVar7 = (ulong)uVar3, uVar3 == 0)) {
      iVar4 = *(int *)((long)plVar6 + uVar9 + 0x20);
      if (iVar4 == 0) {
        *param_2 = 0;
        param_2[1] = 0;
        return uVar7;
      }
      *(undefined4 *)param_2 = uVar1;
      *(undefined4 *)((long)param_2 + 4) = 0;
      *(int *)(param_2 + 1) = iVar4;
      *(undefined2 *)((long)param_2 + 0xc) = uVar5;
    }
  }
  return uVar7;
}



// ===== FUN_710074c060 @ 710074c060 (size=288) =====

ulong FUN_710074c060(undefined4 *param_1,undefined8 *param_2,undefined4 param_3,long param_4,
                    undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  
  plVar6 = (long *)tpidrro_el0;
  uVar1 = *param_1;
  uVar2 = param_1[2];
  uVar5 = *(undefined2 *)(param_1 + 3);
  *(undefined4 *)(plVar6 + 5) = param_5;
  *(undefined4 *)((long)plVar6 + 0x2c) = 0;
  plVar6[6] = param_4;
  *plVar6 = -0x7ffffff1fffffffc;
  *(undefined4 *)(plVar6 + 2) = 0x180001;
  *(undefined4 *)((long)plVar6 + 0x14) = uVar2;
  *(undefined4 *)(plVar6 + 1) = 2;
  *(undefined4 *)((long)plVar6 + 0xc) = param_3;
  plVar6[3] = 0;
  plVar6[4] = 0x49434653;
  uVar7 = FUN_710076d0c0(*param_1);
  if ((int)uVar7 == 0) {
    if (*plVar6 < 0) {
      uVar3 = *(uint *)(plVar6 + 1);
      plVar8 = (long *)((long)plVar6 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar8 = (long *)((long)plVar6 + 0xc);
      }
      lVar10 = (((ulong)(uVar3 >> 5) & 0xf) + ((ulong)(uVar3 >> 1) & 0xf)) * 4;
    }
    else {
      plVar8 = plVar6 + 1;
      lVar10 = 0;
    }
    uVar9 = (long)plVar8 +
            ((lVar10 + (ulong)((uint)*plVar6 >> 0x10 & 0xf) * 8) - (long)plVar6) + 0xf &
            0xfffffffffffffff0;
    uVar7 = 0x5f59;
    if ((*(int *)((long)plVar6 + uVar9 + 0x10) == 0x4f434653) &&
       (uVar3 = *(uint *)((long)plVar6 + uVar9 + 0x18), uVar7 = (ulong)uVar3, uVar3 == 0)) {
      iVar4 = *(int *)((long)plVar6 + uVar9 + 0x20);
      if (iVar4 == 0) {
        *param_2 = 0;
        param_2[1] = 0;
        return uVar7;
      }
      *(undefined4 *)param_2 = uVar1;
      *(undefined4 *)((long)param_2 + 4) = 0;
      *(int *)(param_2 + 1) = iVar4;
      *(undefined2 *)((long)param_2 + 0xc) = uVar5;
    }
  }
  return uVar7;
}



// ===== FUN_710074c180 @ 710074c180 (size=212) =====

ulong FUN_710074c180(undefined4 *param_1,long param_2,long param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  uVar1 = param_1[2];
  plVar3 = (long *)tpidrro_el0;
  *plVar3 = 0xf00000004;
  *(undefined4 *)(plVar3 + 5) = param_4;
  *(undefined4 *)((long)plVar3 + 0x2c) = 0;
  *(undefined4 *)(plVar3 + 2) = 0x180101;
  *(undefined4 *)((long)plVar3 + 0x14) = uVar1;
  plVar3[3] = 0;
  plVar3[4] = 0x49434653;
  uVar1 = *(undefined4 *)(param_3 + 8);
  plVar3[6] = param_2;
  *(undefined4 *)(plVar3 + 7) = uVar1;
  uVar4 = FUN_710076d0c0(*param_1);
  if ((int)uVar4 == 0) {
    if (*plVar3 < 0) {
      uVar2 = *(uint *)(plVar3 + 1);
      plVar5 = (long *)((long)plVar3 + 0x14);
      if ((uVar2 & 1) == 0) {
        plVar5 = (long *)((long)plVar3 + 0xc);
      }
      lVar7 = (((ulong)(uVar2 >> 5) & 0xf) + ((ulong)(uVar2 >> 1) & 0xf)) * 4;
    }
    else {
      plVar5 = plVar3 + 1;
      lVar7 = 0;
    }
    uVar6 = (long)plVar5 + ((lVar7 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf
            & 0xfffffffffffffff0;
    uVar4 = 0x5f59;
    if (*(int *)((long)plVar3 + uVar6 + 0x10) == 0x4f434653) {
      uVar4 = (ulong)*(uint *)((long)plVar3 + uVar6 + 0x18);
    }
  }
  return uVar4;
}



// ===== FUN_710074c260 @ 710074c260 (size=300) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710074c260(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  
  uVar6 = _DAT_7100d16d84;
  uVar5 = _DAT_7100d16d80;
  plVar3 = (long *)tpidrro_el0;
  plVar3[8] = 0;
  uVar4 = _DAT_7100d16d78;
  *plVar3 = -0x7ffffff1fffffffc;
  *(undefined4 *)(plVar3 + 7) = param_1;
  *(undefined4 *)((long)plVar3 + 0x3c) = 0;
  *(undefined4 *)(plVar3 + 1) = 3;
  *(undefined4 *)((long)plVar3 + 0x14) = 0xffff8001;
  *(undefined4 *)(plVar3 + 4) = 0x180001;
  *(undefined4 *)((long)plVar3 + 0x24) = uVar5;
  plVar3[5] = 0;
  plVar3[6] = 0x49434653;
  uVar7 = FUN_710076d0c0(uVar4);
  if ((int)uVar7 == 0) {
    if (*plVar3 < 0) {
      uVar1 = *(uint *)(plVar3 + 1);
      plVar8 = (long *)((long)plVar3 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar8 = (long *)((long)plVar3 + 0xc);
      }
      lVar10 = (((ulong)(uVar1 >> 5) & 0xf) + ((ulong)(uVar1 >> 1) & 0xf)) * 4;
    }
    else {
      plVar8 = plVar3 + 1;
      lVar10 = 0;
    }
    uVar9 = (long)plVar8 +
            ((lVar10 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf &
            0xfffffffffffffff0;
    uVar7 = 0x5f59;
    if ((*(int *)((long)plVar3 + uVar9 + 0x10) == 0x4f434653) &&
       (uVar1 = *(uint *)((long)plVar3 + uVar9 + 0x18), uVar7 = (ulong)uVar1, uVar1 == 0)) {
      iVar2 = *(int *)((long)plVar3 + uVar9 + 0x20);
      if (iVar2 == 0) {
        _DAT_7100d16d68 = 0;
        _DAT_7100d16d70 = 0;
        return uVar7;
      }
      _DAT_7100d16d68 = (ulong)uVar4;
      _DAT_7100d16d70 = CONCAT24(uVar6,iVar2);
    }
  }
  return uVar7;
}



// ===== FUN_710074c390 @ 710074c390 (size=328) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710074c390(undefined8 param_1)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  
  uVar5 = _DAT_7100d16d84;
  uVar4 = _DAT_7100d16d80;
  uVar3 = _DAT_7100d16d78;
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = -0x7ffffff1ffeffffc;
  uVar9 = (uint)((ulong)param_1 >> 0x20);
  *(undefined4 *)(plVar2 + 1) = 3;
  *(undefined4 *)(plVar2 + 6) = 0x180001;
  *(undefined4 *)((long)plVar2 + 0x34) = uVar4;
  *(undefined8 *)((long)plVar2 + 0x14) = 0x80ffff8001;
  *(int *)((long)plVar2 + 0x1c) = (int)param_1;
  *(uint *)(plVar2 + 4) = uVar9 << 0x1c | (uVar9 >> 4 & 0x3fffff) << 2;
  plVar2[7] = 0;
  plVar2[8] = 0x49434653;
  plVar2[9] = 0xc9;
  plVar2[10] = 0;
  uVar6 = FUN_710076d0c0(uVar3);
  if ((int)uVar6 == 0) {
    if (*plVar2 < 0) {
      uVar9 = *(uint *)(plVar2 + 1);
      plVar7 = (long *)((long)plVar2 + 0x14);
      if ((uVar9 & 1) == 0) {
        plVar7 = (long *)((long)plVar2 + 0xc);
      }
      lVar10 = (((ulong)(uVar9 >> 5) & 0xf) + ((ulong)(uVar9 >> 1) & 0xf)) * 4;
    }
    else {
      plVar7 = plVar2 + 1;
      lVar10 = 0;
    }
    uVar8 = (long)plVar7 +
            ((lVar10 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf &
            0xfffffffffffffff0;
    uVar6 = 0x5f59;
    if ((*(int *)((long)plVar2 + uVar8 + 0x10) == 0x4f434653) &&
       (uVar9 = *(uint *)((long)plVar2 + uVar8 + 0x18), uVar6 = (ulong)uVar9, uVar9 == 0)) {
      iVar1 = *(int *)((long)plVar2 + uVar8 + 0x20);
      if (iVar1 == 0) {
        _DAT_7100d16d68 = 0;
        _DAT_7100d16d70 = 0;
        return uVar6;
      }
      _DAT_7100d16d68 = (ulong)uVar3;
      _DAT_7100d16d70 = CONCAT24(uVar5,iVar1);
    }
  }
  return uVar6;
}



// ===== FUN_710074c4e0 @ 710074c4e0 (size=248) =====

int FUN_710074c4e0(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  
  plVar4 = (long *)tpidrro_el0;
  uVar1 = *param_1;
  uVar2 = param_1[2];
  *(undefined4 *)(plVar4 + 5) = param_4;
  *(undefined4 *)((long)plVar4 + 0x2c) = 0;
  *plVar4 = 0xc00000004;
  *(undefined4 *)(plVar4 + 2) = 0x100001;
  *(undefined4 *)((long)plVar4 + 0x14) = uVar2;
  plVar4[3] = 0;
  plVar4[4] = 0x49434653;
  iVar5 = FUN_710076d0c0(uVar1);
  if (iVar5 == 0) {
    if (*plVar4 < 0) {
      uVar3 = *(uint *)(plVar4 + 1);
      plVar7 = (long *)((long)plVar4 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar7 = (long *)((long)plVar4 + 0xc);
      }
      lVar8 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar7 = plVar4 + 1;
      lVar8 = 0;
    }
    iVar5 = 0x5f59;
    uVar6 = (long)plVar7 + ((lVar8 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf
            & 0xfffffffffffffff0;
    if ((*(int *)((long)plVar4 + uVar6 + 0x10) == 0x4f434653) &&
       (iVar5 = *(int *)((long)plVar4 + uVar6 + 0x18), iVar5 == 0)) {
      FUN_7100749590(param_2,(int)*plVar7,param_3);
    }
  }
  return iVar5;
}



// ===== FUN_710074c5e0 @ 710074c5e0 (size=644) =====

int FUN_710074c5e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  ulong param_5)

{
  uint uVar1;
  undefined2 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  ushort local_4;
  
  iVar5 = FUN_710074b9d0(param_1,&local_10,0);
  if (iVar5 != 0) {
    return iVar5;
  }
  puVar3 = (undefined8 *)tpidrro_el0;
  uVar10 = (undefined4)param_3;
  uVar2 = (undefined2)param_4;
  uVar9 = (uint)((ulong)param_3 >> 0x20);
  uVar1 = (uint)(param_4 >> 0x20);
  if ((param_5 & 1) == 0) {
    *puVar3 = 0xc0f01000004;
    *(undefined4 *)(puVar3 + 4) = 0x180001;
    *(undefined4 *)((long)puVar3 + 0x24) = local_8;
    puVar3[5] = 0;
    puVar3[6] = 0x49434653;
    puVar3[7] = 0xb;
    if (local_4 == 0 || local_4 < param_4) {
      *(int *)(puVar3 + 1) = (int)param_4;
      *(undefined4 *)((long)puVar3 + 0xc) = uVar10;
      *(undefined2 *)((long)puVar3 + 0x4c) = 0;
      puVar3[10] = 0;
      *(uint *)(puVar3 + 2) = (uVar9 >> 4 & 0x3fffff) << 2 | (uVar1 & 0xf) << 0x18 | uVar9 << 0x1c;
    }
    else {
      puVar3[1] = 0;
      *(undefined4 *)(puVar3 + 2) = 0;
      *(undefined2 *)((long)puVar3 + 0x4c) = uVar2;
      *(undefined4 *)(puVar3 + 10) = uVar10;
      *(short *)((long)puVar3 + 0x54) = (short)((ulong)param_3 >> 0x20);
      *(undefined2 *)((long)puVar3 + 0x56) = uVar2;
    }
  }
  else {
    *puVar3 = 0xe00110004;
    *(undefined4 *)(puVar3 + 4) = 0x180001;
    *(undefined4 *)((long)puVar3 + 0x24) = local_8;
    puVar3[5] = 0;
    puVar3[6] = 0x49434653;
    puVar3[7] = 10;
    if (local_4 == 0 || local_4 < param_4) {
      *(int *)(puVar3 + 2) = (int)param_4;
      *(undefined4 *)((long)puVar3 + 0x14) = uVar10;
      puVar3[1] = 0;
      *(uint *)(puVar3 + 3) = (uVar9 >> 4 & 0x3fffff) << 2 | (uVar1 & 0xf) << 0x18 | uVar9 << 0x1c;
    }
    else {
      *(undefined2 *)((long)puVar3 + 10) = uVar2;
      *(undefined4 *)((long)puVar3 + 0xc) = uVar10;
      puVar3[2] = 0;
      *(undefined4 *)(puVar3 + 3) = 0;
      *(ushort *)(puVar3 + 1) = (ushort)((uVar9 & 0xf) << 0xc) | (ushort)((uVar9 >> 4 & 0x3f) << 6);
    }
  }
  puVar3[8] = param_2;
  iVar5 = FUN_710076d0c0(local_10);
  if (iVar5 == 0) {
    plVar4 = (long *)tpidrro_el0;
    if (*plVar4 < 0) {
      uVar1 = *(uint *)(plVar4 + 1);
      plVar6 = (long *)((long)plVar4 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar6 = (long *)((long)plVar4 + 0xc);
      }
      lVar8 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar4 + 1;
      lVar8 = 0;
    }
    iVar5 = 0x5f59;
    uVar7 = (long)plVar6 + ((lVar8 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf
            & 0xfffffffffffffff0;
    if (*(int *)((long)plVar4 + uVar7 + 0x10) == 0x4f434653) {
      iVar5 = *(int *)((long)plVar4 + uVar7 + 0x18);
    }
  }
  if (local_c != 0) {
    puVar3 = (undefined8 *)tpidrro_el0;
    *puVar3 = 2;
    FUN_710076d0c0(local_10);
    FUN_710076d060(local_10);
    return iVar5;
  }
  puVar3 = (undefined8 *)tpidrro_el0;
  *puVar3 = 0x800000004;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined1 *)(puVar3 + 2) = 2;
  *(undefined4 *)((long)puVar3 + 0x14) = local_8;
  FUN_710076d0c0(local_10);
  return iVar5;
}



// ===== FUN_710074c870 @ 710074c870 (size=300) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710074c870(undefined8 *param_1,undefined4 param_2,long param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  
  uVar6 = _DAT_7100d16cfc;
  plVar3 = (long *)tpidrro_el0;
  plVar3[7] = param_3;
  uVar5 = _DAT_7100d16cf8;
  uVar4 = _DAT_7100d16cf0;
  *plVar3 = -0x7fffffeffffffffc;
  *(undefined4 *)(plVar3 + 1) = 2;
  *(undefined4 *)((long)plVar3 + 0xc) = param_2;
  *(undefined4 *)(plVar3 + 2) = 0x200001;
  *(undefined4 *)((long)plVar3 + 0x14) = uVar5;
  plVar3[3] = 0;
  plVar3[4] = 0x49434653;
  plVar3[5] = 0xb;
  plVar3[6] = param_4 & 0xff;
  uVar7 = FUN_710076d0c0(uVar4);
  if ((int)uVar7 == 0) {
    if (*plVar3 < 0) {
      uVar1 = *(uint *)(plVar3 + 1);
      plVar9 = (long *)((long)plVar3 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar9 = (long *)((long)plVar3 + 0xc);
      }
      lVar8 = (((ulong)(uVar1 >> 5) & 0xf) + ((ulong)(uVar1 >> 1) & 0xf)) * 4;
    }
    else {
      plVar9 = plVar3 + 1;
      lVar8 = 0;
    }
    uVar7 = 0x5f59;
    uVar10 = (long)plVar9 +
             ((lVar8 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf &
             0xfffffffffffffff0;
    if ((*(int *)((long)plVar3 + uVar10 + 0x10) == 0x4f434653) &&
       (uVar1 = *(uint *)((long)plVar3 + uVar10 + 0x18), uVar7 = (ulong)uVar1, uVar1 == 0)) {
      iVar2 = *(int *)((long)plVar3 + uVar10 + 0x20);
      if (iVar2 == 0) {
        *param_1 = 0;
        param_1[1] = 0;
        return uVar7;
      }
      *(undefined4 *)param_1 = uVar4;
      *(undefined4 *)((long)param_1 + 4) = 0;
      *(int *)(param_1 + 1) = iVar2;
      *(undefined2 *)((long)param_1 + 0xc) = uVar6;
    }
  }
  return uVar7;
}



// ===== FUN_710074c9a0 @ 710074c9a0 (size=212) =====

ulong FUN_710074c9a0(undefined8 param_1,undefined4 param_2,undefined1 *param_3,undefined4 param_4)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0xc00000004;
  *(undefined4 *)(plVar2 + 5) = param_4;
  *(undefined4 *)((long)plVar2 + 0x2c) = 0;
  *(undefined4 *)(plVar2 + 2) = 0x100001;
  *(undefined4 *)((long)plVar2 + 0x14) = param_2;
  plVar2[3] = 0;
  plVar2[4] = 0x49434653;
  uVar3 = FUN_710076d0c0();
  if ((int)uVar3 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar4 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar4 = (long *)((long)plVar2 + 0xc);
      }
      lVar6 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar4 = plVar2 + 1;
      lVar6 = 0;
    }
    uVar5 = (long)plVar4 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar3 = 0x5f59;
    if (((*(int *)((long)plVar2 + uVar5 + 0x10) == 0x4f434653) &&
        (uVar1 = *(uint *)((long)plVar2 + uVar5 + 0x18), uVar3 = (ulong)uVar1, uVar1 == 0)) &&
       (param_3 != (undefined1 *)0x0)) {
      *param_3 = *(undefined1 *)((long)plVar2 + uVar5 + 0x20);
    }
  }
  return uVar3;
}



// ===== FUN_710074ca80 @ 710074ca80 (size=212) =====

ulong FUN_710074ca80(undefined8 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0xc00000004;
  *(undefined4 *)(plVar2 + 5) = param_4;
  *(undefined4 *)((long)plVar2 + 0x2c) = 0;
  *(undefined4 *)(plVar2 + 2) = 0x100001;
  *(undefined4 *)((long)plVar2 + 0x14) = param_2;
  plVar2[3] = 0;
  plVar2[4] = 0x49434653;
  uVar3 = FUN_710076d0c0();
  if ((int)uVar3 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar4 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar4 = (long *)((long)plVar2 + 0xc);
      }
      lVar6 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar4 = plVar2 + 1;
      lVar6 = 0;
    }
    uVar5 = (long)plVar4 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar3 = 0x5f59;
    if (((*(int *)((long)plVar2 + uVar5 + 0x10) == 0x4f434653) &&
        (uVar1 = *(uint *)((long)plVar2 + uVar5 + 0x18), uVar3 = (ulong)uVar1, uVar1 == 0)) &&
       (param_3 != (undefined4 *)0x0)) {
      *param_3 = *(undefined4 *)((long)plVar2 + uVar5 + 0x20);
    }
  }
  return uVar3;
}



// ===== FUN_710074cb60 @ 710074cb60 (size=212) =====

ulong FUN_710074cb60(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0xc00000004;
  *(undefined4 *)(plVar2 + 5) = param_4;
  *(undefined4 *)((long)plVar2 + 0x2c) = 0;
  *(undefined4 *)(plVar2 + 2) = 0x100001;
  *(undefined4 *)((long)plVar2 + 0x14) = param_2;
  plVar2[3] = 0;
  plVar2[4] = 0x49434653;
  uVar3 = FUN_710076d0c0();
  if ((int)uVar3 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar4 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar4 = (long *)((long)plVar2 + 0xc);
      }
      lVar6 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar4 = plVar2 + 1;
      lVar6 = 0;
    }
    uVar5 = (long)plVar4 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar3 = 0x5f59;
    if (((*(int *)((long)plVar2 + uVar5 + 0x10) == 0x4f434653) &&
        (uVar1 = *(uint *)((long)plVar2 + uVar5 + 0x18), uVar3 = (ulong)uVar1, uVar1 == 0)) &&
       (param_3 != (undefined8 *)0x0)) {
      *param_3 = *(undefined8 *)((long)plVar2 + uVar5 + 0x20);
    }
  }
  return uVar3;
}



// ===== FUN_710074cc40 @ 710074cc40 (size=192) =====

ulong FUN_710074cc40(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0xc00000004;
  *(undefined4 *)(plVar2 + 5) = param_3;
  *(undefined4 *)((long)plVar2 + 0x2c) = 0;
  *(undefined4 *)(plVar2 + 2) = 0x100001;
  *(undefined4 *)((long)plVar2 + 0x14) = param_2;
  plVar2[3] = 0;
  plVar2[4] = 0x49434653;
  uVar3 = FUN_710076d0c0();
  if ((int)uVar3 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar4 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar4 = (long *)((long)plVar2 + 0xc);
      }
      lVar6 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar4 = plVar2 + 1;
      lVar6 = 0;
    }
    uVar5 = (long)plVar4 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar3 = 0x5f59;
    if (*(int *)((long)plVar2 + uVar5 + 0x10) == 0x4f434653) {
      uVar3 = (ulong)*(uint *)((long)plVar2 + uVar5 + 0x18);
    }
  }
  return uVar3;
}



// ===== FUN_710074cd10 @ 710074cd10 (size=12) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_710074cd10(void)

{
  return _DAT_7100d16bc4;
}



// ===== FUN_710074cd20 @ 710074cd20 (size=440) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710074cd20(uint param_1)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  long *plVar5;
  undefined1 uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  bool bStack_5;
  
  uVar3 = _DAT_7100d16cd8;
  iVar2 = _DAT_7100d16cd0;
  if (DAT_7100af387c != 0) {
    return 0x1159;
  }
  if (param_1 < 4) {
    bStack_5 = false;
    if (param_1 == 0 || param_1 == 3) {
      bStack_5 = param_1 == 3;
      uVar9 = 1;
      uVar6 = 0;
      uVar10 = 0;
    }
    else if (param_1 == 1) {
      uVar9 = 0;
      uVar6 = 1;
      uVar10 = 1;
    }
    else {
      uVar9 = 1;
      uVar6 = 0;
      uVar10 = 1;
    }
    plVar1 = (long *)tpidrro_el0;
    *plVar1 = 0xd00000004;
    *(undefined1 *)(plVar1 + 6) = uVar10;
    *(undefined4 *)(plVar1 + 2) = 0x130001;
    *(undefined4 *)((long)plVar1 + 0x14) = uVar3;
    *(undefined1 *)((long)plVar1 + 0x31) = uVar6;
    plVar1[3] = 0;
    plVar1[4] = 0x49434653;
    plVar1[5] = 0xd;
    *(undefined1 *)((long)plVar1 + 0x32) = uVar9;
    uVar4 = FUN_710076d0c0(iVar2);
    uVar7 = (ulong)uVar4;
    if (uVar4 == 0) {
      if (*plVar1 < 0) {
        uVar4 = *(uint *)(plVar1 + 1);
        plVar5 = (long *)((long)plVar1 + 0x14);
        if ((uVar4 & 1) == 0) {
          plVar5 = (long *)((long)plVar1 + 0xc);
        }
        lVar8 = (((ulong)(uVar4 >> 1) & 0xf) + ((ulong)(uVar4 >> 5) & 0xf)) * 4;
      }
      else {
        plVar5 = plVar1 + 1;
        lVar8 = 0;
      }
      uVar7 = (long)plVar5 +
              ((lVar8 + (ulong)((uint)*plVar1 >> 0x10 & 0xf) * 8) - (long)plVar1) + 0xf &
              0xfffffffffffffff0;
      if (*(int *)((long)plVar1 + uVar7 + 0x10) == 0x4f434653) {
        uVar4 = *(uint *)((long)plVar1 + uVar7 + 0x18);
        uVar7 = (ulong)uVar4;
        if (uVar4 == 0) {
          uVar4 = FUN_7100769b90();
          uVar7 = 0;
          if (0x1ffff < uVar4) {
            if (_DAT_7100d16cd0 != 0) {
              uVar7 = FUN_710074bae0(&DAT_7100d16cd0,bStack_5,0x10);
              return uVar7;
            }
            uVar7 = 0x1159;
          }
        }
      }
      else {
        uVar7 = 0x5f59;
      }
    }
    return uVar7;
  }
  return 0x1759;
}



// ===== FUN_710074cee0 @ 710074cee0 (size=92) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_710074cee0(undefined4 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_7100769b90();
  if (0x6ffff < uVar1) {
    uVar2 = FUN_710074bc80(&DAT_7100d16ce0,param_1,0x42);
    if ((int)uVar2 == 0) {
      _DAT_7100d16bc0 = param_1;
    }
    return uVar2;
  }
  return 0x4b59;
}



// ===== FUN_710074cf40 @ 710074cf40 (size=44) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_710074cf40(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (_DAT_7100d16cd0 != 0) {
    uVar1 = FUN_710074cb60(_DAT_7100d16cd0,_DAT_7100d16cd8,param_1,0x28);
    return uVar1;
  }
  return 0x1159;
}



// ===== FUN_710074cf70 @ 710074cf70 (size=12) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_710074cf70(void)

{
  return _DAT_7100d16c78;
}



// ===== FUN_710074cf80 @ 710074cf80 (size=312) =====

int FUN_710074cf80(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  
  param_1[10] = param_2;
  *(undefined1 *)(param_1 + 0xe) = param_3;
  iVar3 = FUN_710074c4e0(param_1,param_1 + 4,0,0);
  if (((iVar3 == 0) && (uVar4 = FUN_7100769b90(), 0x1ffff < uVar4)) && (param_1[10] == 3)) {
    lVar5 = FUN_710074cf70();
    uVar1 = param_1[2];
    plVar2 = (long *)tpidrro_el0;
    *plVar2 = -0x7ffffff1fffffffc;
    *(undefined4 *)(plVar2 + 1) = 1;
    *(undefined4 *)(plVar2 + 4) = 0x180001;
    *(undefined4 *)((long)plVar2 + 0x24) = uVar1;
    plVar2[5] = 0;
    plVar2[6] = 0x49434653;
    plVar2[7] = 0xa0;
    plVar2[8] = lVar5;
    iVar3 = FUN_710076d0c0(*param_1);
    if (iVar3 == 0) {
      if (*plVar2 < 0) {
        uVar4 = *(uint *)(plVar2 + 1);
        plVar6 = (long *)((long)plVar2 + 0x14);
        if ((uVar4 & 1) == 0) {
          plVar6 = (long *)((long)plVar2 + 0xc);
        }
        lVar5 = (((ulong)(uVar4 >> 1) & 0xf) + ((ulong)(uVar4 >> 5) & 0xf)) * 4;
      }
      else {
        plVar6 = plVar2 + 1;
        lVar5 = 0;
      }
      iVar3 = 0x5f59;
      uVar7 = (long)plVar6 +
              ((lVar5 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf &
              0xfffffffffffffff0;
      if ((*(int *)((long)plVar2 + uVar7 + 0x10) == 0x4f434653) &&
         (iVar3 = *(int *)((long)plVar2 + uVar7 + 0x18), iVar3 == 0)) {
        *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)((long)plVar2 + uVar7 + 0x20);
      }
    }
  }
  return iVar3;
}



// ===== FUN_710074d0c0 @ 710074d0c0 (size=164) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710074d0c0(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if ((((_DAT_7100d16bc8 != 0) ||
       (iVar1 = FUN_710074c4e0(&DAT_7100d16cd0,&DAT_7100d16bc8,0,9), iVar1 == 0)) &&
      (iVar1 = FUN_71007495a0(&DAT_7100d16bc8,0xffffffffffffffff), iVar1 == 0)) &&
     (iVar1 = FUN_710074be20(param_1,param_2,param_3), iVar1 == 0)) {
    FUN_710074cf80(param_1,param_3,0);
    return;
  }
  return;
}



// ===== FUN_710074d170 @ 710074d170 (size=176) =====

void FUN_710074d170(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  FUN_7100749610((long)param_1 + 0x1c);
  FUN_7100749610(param_1 + 2);
  if (*(int *)((long)param_1 + 4) == 0) {
    uVar2 = *(undefined4 *)(param_1 + 1);
    puVar3 = (undefined8 *)tpidrro_el0;
    *puVar3 = 0x800000004;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined1 *)(puVar3 + 2) = 2;
    *(undefined4 *)((long)puVar3 + 0x14) = uVar2;
    FUN_710076d0c0(*(undefined4 *)param_1);
    iVar1 = *(int *)((long)param_1 + 4);
  }
  else {
    puVar3 = (undefined8 *)tpidrro_el0;
    *puVar3 = 2;
    FUN_710076d0c0(*(undefined4 *)param_1);
    iVar1 = *(int *)((long)param_1 + 4);
  }
  if (iVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    return;
  }
  FUN_710076d060(*(undefined4 *)param_1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



// ===== FUN_710074d220 @ 710074d220 (size=160) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_710074d220(int *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    return 0x1159;
  }
  if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
    if ((_DAT_7100d16bc8 == 0) &&
       (uVar1 = FUN_710074c4e0(&DAT_7100d16cd0,&DAT_7100d16bc8,0,9), (int)uVar1 != 0)) {
      return uVar1;
    }
    uVar1 = FUN_71007495a0(&DAT_7100d16bc8,0xffffffffffffffff);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_710074cc40(*param_1,param_1[2],10);
    return uVar1;
  }
  uVar1 = FUN_710074cc40(*param_1,param_1[2],10);
  return uVar1;
}



// ===== FUN_710074d2c0 @ 710074d2c0 (size=132) =====

void FUN_710074d2c0(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  
  FUN_71007495a0(param_1 + 4,0xffffffffffffffff);
  uVar4 = FUN_710074cc40(*param_1,param_1[2],0x1e);
  uVar2 = (uint)uVar4;
  if (uVar2 != 0) {
    if ((uVar2 & 0x1ff) == 0x80) {
      uVar1 = (uint)(uVar4 >> 9) & 0x1fff;
      uVar2 = 1;
      if (uVar1 != 0x16) {
        uVar3 = 2;
        if (0x1d < uVar1 - 0x14) {
          uVar3 = 10;
        }
        param_1[0xf] = uVar3;
        return;
      }
    }
    else {
      uVar2 = 10;
    }
  }
  param_1[0xf] = uVar2;
  return;
}



// ===== FUN_710074d350 @ 710074d350 (size=8) =====

undefined4 FUN_710074d350(long param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



// ===== FUN_710074d360 @ 710074d360 (size=112) =====

int FUN_710074d360(long param_1,long *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = FUN_710074c4e0();
    if (param_2 != (long *)0x0 && iVar1 == 0) {
      *param_2 = param_1 + 0x1c;
    }
    return iVar1;
  }
  if (param_2 != (long *)0x0) {
    *param_2 = param_1 + 0x1c;
  }
  return 0;
}



// ===== FUN_710074d3d0 @ 710074d3d0 (size=136) =====

bool FUN_710074d3d0(long param_1)

{
  int iVar1;
  int local_2c;
  undefined4 *local_28;
  uint local_20 [2];
  undefined4 local_18;
  uint local_10;
  undefined4 local_8;
  
  local_2c = 0;
  local_28 = (undefined4 *)0x0;
  iVar1 = FUN_710074d360(param_1,&local_28);
  if (iVar1 != 0) {
    return false;
  }
  local_18 = *local_28;
  local_20[0] = (uint)*(byte *)(local_28 + 2);
  local_8 = *(undefined4 *)(param_1 + 0x10);
  local_10 = (uint)*(byte *)(param_1 + 0x18);
  iVar1 = FUN_710074a9b0(&local_2c,local_20,2,0xffffffffffffffff);
  return iVar1 == 0 && local_2c == 0;
}



// ===== FUN_710074d460 @ 710074d460 (size=40) =====

undefined8 FUN_710074d460(int *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    param_2[6] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    uVar1 = FUN_710074b9d0(param_1,param_2,0x65);
    return uVar1;
  }
  return 0x1159;
}



// ===== FUN_710074d490 @ 710074d490 (size=40) =====

undefined8 FUN_710074d490(int *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    param_2[6] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    uVar1 = FUN_710074b9d0(param_1,param_2,0x68);
    return uVar1;
  }
  return 0x1159;
}



// ===== FUN_710074d4c0 @ 710074d4c0 (size=36) =====

undefined8 FUN_710074d4c0(int *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_710074cb60(*param_1,param_1[2],param_2,0x78);
    return uVar1;
  }
  return 0x1159;
}



// ===== FUN_710074d4f0 @ 710074d4f0 (size=40) =====

void FUN_710074d4f0(undefined8 *param_1,undefined8 param_2)

{
  param_1[6] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_710074bf40(&DAT_7100d16cf0,param_1,param_2,10);
  return;
}



// ===== FUN_710074d520 @ 710074d520 (size=176) =====

int FUN_710074d520(undefined8 *param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = param_1 + 2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if (param_2 == 0) {
    iVar2 = FUN_710076d290(puVar1,param_3,0);
  }
  else {
    iVar2 = FUN_710076d340(puVar1,param_2,param_3,0);
  }
  if (iVar2 == 0) {
    iVar2 = FUN_710074c870(param_1,*(undefined4 *)(param_1 + 2),param_1[3],param_4);
    if (iVar2 != 0) {
      FUN_710076d3e0(puVar1);
      return iVar2;
    }
  }
  return iVar2;
}



// ===== FUN_710074d5d0 @ 710074d5d0 (size=92) =====

undefined8 FUN_710074d5d0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_7100769b90();
  if (0x1ffff < uVar1) {
    uVar2 = FUN_710074c060(&DAT_7100d16cf0,param_1,param_3,param_2,0xc);
    return uVar2;
  }
  return 0x4b59;
}



// ===== FUN_710074d630 @ 710074d630 (size=156) =====

int FUN_710074d630(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = param_1 + 2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if (param_2 == 0) {
    iVar2 = FUN_710076d290(puVar1,param_3,0);
  }
  else {
    iVar2 = FUN_710076d340(puVar1,param_2,param_3,0);
  }
  if (iVar2 == 0) {
    iVar2 = FUN_710074d5d0(param_1,param_1[3],*(undefined4 *)(param_1 + 2));
    if (iVar2 != 0) {
      FUN_710076d3e0(puVar1);
      return iVar2;
    }
  }
  return iVar2;
}



// ===== FUN_710074d6d0 @ 710074d6d0 (size=144) =====

void FUN_710074d6d0(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)((long)param_1 + 4) == 0) {
    uVar2 = *(undefined4 *)(param_1 + 1);
    puVar3 = (undefined8 *)tpidrro_el0;
    *puVar3 = 0x800000004;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined1 *)(puVar3 + 2) = 2;
    *(undefined4 *)((long)puVar3 + 0x14) = uVar2;
    FUN_710076d0c0(*(undefined4 *)param_1);
    iVar1 = *(int *)((long)param_1 + 4);
  }
  else {
    puVar3 = (undefined8 *)tpidrro_el0;
    *puVar3 = 2;
    FUN_710076d0c0(*(undefined4 *)param_1);
    iVar1 = *(int *)((long)param_1 + 4);
  }
  if (iVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  FUN_710076d060(*(undefined4 *)param_1);
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// ===== FUN_710074d760 @ 710074d760 (size=92) =====

undefined4 FUN_710074d760(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((*param_1 != 0) && (*param_2 != 0)) {
    uVar1 = FUN_710074bbb0(param_1,param_2,100);
    FUN_710074d6d0(param_2);
    return uVar1;
  }
  return 0x1159;
}



// ===== FUN_710074d7c0 @ 710074d7c0 (size=92) =====

undefined4 FUN_710074d7c0(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((*param_1 != 0) && (*param_2 != 0)) {
    uVar1 = FUN_710074bbb0(param_1,param_2,0x67);
    FUN_710074d6d0(param_2);
    return uVar1;
  }
  return 0x1159;
}



// ===== FUN_710074d820 @ 710074d820 (size=8) =====

void FUN_710074d820(long param_1)

{
  FUN_710076d3e0(param_1 + 0x10);
  return;
}



// ===== FUN_710074d830 @ 710074d830 (size=224) =====

int FUN_710074d830(int *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  if (*param_1 == 0) {
    return 0x1159;
  }
  iVar2 = FUN_710074b9d0(param_1,&local_10,0);
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar2 = FUN_710074cb60(local_10,local_8,param_2);
  if (local_c != 0) {
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 2;
    FUN_710076d0c0(local_10);
    FUN_710076d060(local_10);
    return iVar2;
  }
  puVar1 = (undefined8 *)tpidrro_el0;
  *puVar1 = 0x800000004;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 2) = 2;
  *(undefined4 *)((long)puVar1 + 0x14) = local_8;
  FUN_710076d0c0(local_10);
  return iVar2;
}



// ===== FUN_710074d910 @ 710074d910 (size=24) =====

undefined8 FUN_710074d910(int *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_710074c5e0();
    return uVar1;
  }
  return 0x1159;
}



// ===== FUN_710074d930 @ 710074d930 (size=24) =====

undefined8 FUN_710074d930(int *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_710074c5e0();
    return uVar1;
  }
  return 0x1159;
}



// ===== FUN_710074d950 @ 710074d950 (size=340) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710074d950(undefined8 *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  
  if (_DAT_7100d16d78 == 0) {
    return 0x1159;
  }
  if ((DAT_7100af387c & 0xfffffffb) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    uVar6 = _DAT_7100d16d4c;
    param_1[4] = 0;
    param_1[5] = 0;
    uVar5 = _DAT_7100d16d48;
    param_1[6] = 0;
    uVar4 = _DAT_7100d16d40;
    plVar3 = (long *)tpidrro_el0;
    *plVar3 = 0xd00000004;
    *(undefined4 *)(plVar3 + 6) = param_2;
    *(undefined4 *)(plVar3 + 2) = 0x140001;
    *(undefined4 *)((long)plVar3 + 0x14) = uVar5;
    plVar3[3] = 0;
    plVar3[4] = 0x49434653;
    plVar3[5] = 1;
    uVar7 = FUN_710076d0c0(uVar4);
    if ((int)uVar7 == 0) {
      if (*plVar3 < 0) {
        uVar1 = *(uint *)(plVar3 + 1);
        plVar8 = (long *)((long)plVar3 + 0x14);
        if ((uVar1 & 1) == 0) {
          plVar8 = (long *)((long)plVar3 + 0xc);
        }
        lVar10 = (((ulong)(uVar1 >> 5) & 0xf) + ((ulong)(uVar1 >> 1) & 0xf)) * 4;
      }
      else {
        plVar8 = plVar3 + 1;
        lVar10 = 0;
      }
      uVar9 = (long)plVar8 +
              ((lVar10 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf &
              0xfffffffffffffff0;
      uVar7 = 0x5f59;
      if ((*(int *)((long)plVar3 + uVar9 + 0x10) == 0x4f434653) &&
         (uVar1 = *(uint *)((long)plVar3 + uVar9 + 0x18), uVar7 = (ulong)uVar1, uVar1 == 0)) {
        iVar2 = *(int *)((long)plVar3 + uVar9 + 0x20);
        if (iVar2 == 0) {
          *param_1 = 0;
          param_1[1] = 0;
        }
        else {
          *(undefined4 *)param_1 = uVar4;
          *(undefined4 *)((long)param_1 + 4) = 0;
          *(int *)(param_1 + 1) = iVar2;
          *(undefined2 *)((long)param_1 + 0xc) = uVar6;
        }
      }
    }
    return uVar7;
  }
  return 0x1159;
}



// ===== FUN_710074dab0 @ 710074dab0 (size=412) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_710074dab0(undefined8 param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int local_38 [14];
  
  piVar3 = local_38;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[6] = 0;
  local_38[7] = 0;
  local_38[8] = 0;
  local_38[9] = 0;
  local_38[10] = 0;
  local_38[0xb] = 0;
  local_38[0xc] = 0;
  local_38[0xd] = 0;
  uVar1 = FUN_7100769b90();
  if (uVar1 < 0x50000) {
    if (_DAT_7100d16d78 == 0) {
      return 0x1159;
    }
    if ((DAT_7100af387c & 0xfffffffb) != 0) {
      return 0x1159;
    }
  }
  else {
    if (_DAT_7100d16d78 == 0) {
      return 0x1159;
    }
    if ((DAT_7100af387c & 0xfffffffb) != 0) {
      if (DAT_7100af387c != 2) {
        return 0x1159;
      }
      if (param_2 == (int *)0x0) {
        FUN_7100769b90();
        iVar2 = FUN_710074d4f0(piVar3,0);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      else {
        if (*param_2 == 0) {
          return 0x1159;
        }
        FUN_7100769b90();
        piVar3 = param_2;
      }
      iVar2 = FUN_710074c180(&DAT_7100d16d10,param_1,piVar3,0x5a);
      goto LAB_710074db44;
    }
  }
  if (param_2 == (int *)0x0) {
    uVar1 = FUN_7100769b90();
    if (0x3ffff < uVar1) {
      uVar1 = FUN_7100769b90();
      if (0x3ffff < uVar1) {
        iVar2 = FUN_710074bd50(&DAT_7100d16d40,param_1,0xc);
        return iVar2;
      }
      iVar2 = FUN_710074c180(&DAT_7100d16d40,param_1,0,10);
      return iVar2;
    }
    iVar2 = FUN_710074d4f0(piVar3,0);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  else {
    if (*param_2 == 0) {
      return 0x1159;
    }
    FUN_7100769b90();
    piVar3 = param_2;
  }
  FUN_7100769b90();
  iVar2 = FUN_710074c180(&DAT_7100d16d40,param_1,piVar3,10);
LAB_710074db44:
  FUN_710074d6d0(piVar3);
  return iVar2;
}



// ===== FUN_710074dc50 @ 710074dc50 (size=144) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710074dc50(byte *param_1)

{
  int iVar1;
  byte local_1;
  
  if ((DAT_7100af387c != 0) || ((DAT_7100d16c68 & 1) != 0)) {
    return;
  }
  DAT_7100d16c68 = 1;
  local_1 = 0;
  iVar1 = FUN_710074c9a0(_DAT_7100d16d40,_DAT_7100d16d48,&local_1,0x28);
  if (iVar1 == 0 && param_1 != (byte *)0x0) {
    *param_1 = local_1 & 1;
    return;
  }
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_71007697d0(0x3159);
}



// ===== FUN_710074dd30 @ 710074dd30 (size=120) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_710074dd30(undefined1 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (((_DAT_7100d16d40 != 0) && (DAT_7100af387c == 0)) && (_DAT_7100d16c20 != 0)) {
    uVar1 = FUN_7100769b90();
    if (0x2ffff < uVar1) {
      uVar2 = FUN_710074bc80(&DAT_7100d16d40,param_1,0x43);
      return uVar2;
    }
    return 0x4b59;
  }
  return 0x1159;
}



// ===== FUN_710074ddb0 @ 710074ddb0 (size=2772) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710074ddb0(void)

{
  bool bVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  
  if ((DAT_7100d16d64 & 1) == 0) {
    if (_DAT_7100d16c20 == 2) {
      FUN_710074dd30(0);
    }
    if (DAT_7100af387c == 0) {
      FUN_710074cd20(1);
    }
    if (_DAT_7100d16bc0 != 0) {
      FUN_710074cee0(0);
    }
  }
  uVar5 = FUN_7100769a20();
  uVar4 = _DAT_7100d16d60;
  if (((((uVar5 & 1) != 0) && (_DAT_7100d16d88 == 0)) || (_DAT_7100d16d88 == 1)) &&
     ((DAT_7100af387c < 5 && ((0x15UL >> ((ulong)DAT_7100af387c & 0x3f) & 1) != 0)))) {
    if ((DAT_7100d16d64 & 1) == 0) {
      DAT_7100d16d64 = 1;
      DAT_7100d16d65 = 1;
      FUN_7100769ae0(FUN_710074f540);
      return;
    }
    if ((DAT_7100af387c & 0xfffffffb) == 0) {
      if (_DAT_7100d16cd0 == 0) {
        _DAT_7100d16d60 = 0x1159;
        uVar4 = _DAT_7100d16d60;
      }
      else {
        _DAT_7100d16d60 =
             FUN_710074cc40(_DAT_7100d16cd0 & 0xffffffff,_DAT_7100d16cd8 & 0xffffffff,0);
        uVar4 = _DAT_7100d16d60;
        if (DAT_7100af387c == 2) goto LAB_710074de1c;
      }
    }
    else {
LAB_710074de1c:
      uVar4 = 0x1159;
      if (_DAT_7100d16d10 != 0) {
        uVar4 = FUN_710074cc40(_DAT_7100d16d10 & 0xffffffff,_DAT_7100d16d18 & 0xffffffff,10);
      }
    }
  }
  _DAT_7100d16d60 = uVar4;
  if ((DAT_7100d16b68 & 1) != 0) {
    if ((_DAT_7100d16b78 & 1) != 0) {
      FUN_710074d170(&DAT_7100d16b80);
    }
    DAT_7100d16b68 = 0;
    _DAT_7100d16b70 = 0;
    _DAT_7100d16b78 = 0;
    _DAT_7100d16b80 = 0;
    uRam0000007100d16b88 = 0;
    _DAT_7100d16b90 = 0;
    uRam0000007100d16b98 = 0;
    _DAT_7100d16ba0 = 0;
    uRam0000007100d16ba8 = 0;
    _DAT_7100d16bb0 = 0;
    uRam0000007100d16bb8 = 0;
  }
  FUN_7100749610(&DAT_7100d16bc8);
  FUN_7100749610(0x7100d16c80);
  if ((DAT_7100d16bd4 & 1) != 0) {
    FUN_7100749610(0x7100d16be8);
    DAT_7100d16bd4 = 0;
  }
  if (_DAT_7100d16c94 == 0) {
    iVar3 = _DAT_7100d16c98;
    if (_DAT_7100d16c98 != 0) {
      puVar2 = (undefined8 *)tpidrro_el0;
      *puVar2 = 0x800000004;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(undefined1 *)(puVar2 + 2) = 2;
      *(int *)((long)puVar2 + 0x14) = iVar3;
      FUN_710076d0c0(_DAT_7100d16c90 & 0xffffffff);
      if (_DAT_7100d16c94 != 0) goto LAB_710074e1dc;
    }
LAB_710074def8:
    if (_DAT_7100d16ca4 == 0) goto LAB_710074e1fc;
LAB_710074df10:
    _DAT_7100d16c98 = 0;
    _DAT_7100d16c90 = 0;
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 2;
    FUN_710076d0c0(_DAT_7100d16ca0 & 0xffffffff);
joined_r0x00710074e234:
    if (_DAT_7100d16ca4 == 0) goto LAB_710074df30;
    FUN_710076d060(_DAT_7100d16ca0 & 0xffffffff);
    if (_DAT_7100d16cb4 != 0) goto LAB_710074df48;
LAB_710074e258:
    _DAT_7100d16ca8 = 0;
    _DAT_7100d16ca0 = 0;
    iVar3 = _DAT_7100d16cb8;
    if (_DAT_7100d16cb8 != 0) {
      puVar2 = (undefined8 *)tpidrro_el0;
      *puVar2 = 0x800000004;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(undefined1 *)(puVar2 + 2) = 2;
      *(int *)((long)puVar2 + 0x14) = iVar3;
      FUN_710076d0c0(_DAT_7100d16cb0 & 0xffffffff);
      goto joined_r0x00710074df64;
    }
LAB_710074df68:
    if (_DAT_7100d16cc4 == 0) goto LAB_710074e2b4;
LAB_710074df80:
    _DAT_7100d16cb8 = 0;
    _DAT_7100d16cb0 = 0;
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 2;
    FUN_710076d0c0(_DAT_7100d16cc0 & 0xffffffff);
joined_r0x00710074df9c:
    if (_DAT_7100d16cc4 == 0) goto LAB_710074dfa0;
    FUN_710076d060(_DAT_7100d16cc0 & 0xffffffff);
    if (_DAT_7100d16cd4 == 0) goto LAB_710074e30c;
LAB_710074dfb4:
    _DAT_7100d16cc8 = 0;
    _DAT_7100d16cc0 = 0;
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 2;
    FUN_710076d0c0(_DAT_7100d16cd0 & 0xffffffff);
joined_r0x00710074dfd0:
    if (_DAT_7100d16cd4 == 0) goto LAB_710074dfd4;
    FUN_710076d060(_DAT_7100d16cd0 & 0xffffffff);
    if (_DAT_7100d16ce4 == 0) goto LAB_710074e368;
LAB_710074dfec:
    _DAT_7100d16cd8 = 0;
    _DAT_7100d16cd0 = 0;
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 2;
    FUN_710076d0c0(_DAT_7100d16ce0 & 0xffffffff);
joined_r0x00710074e008:
    if (_DAT_7100d16ce4 == 0) goto LAB_710074e00c;
    FUN_710076d060(_DAT_7100d16ce0 & 0xffffffff);
    if (_DAT_7100d16cf4 == 0) goto LAB_710074e3c4;
LAB_710074e024:
    _DAT_7100d16ce8 = 0;
    _DAT_7100d16ce0 = 0;
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 2;
    FUN_710076d0c0(_DAT_7100d16cf0 & 0xffffffff);
joined_r0x00710074e040:
    if (_DAT_7100d16cf4 == 0) goto LAB_710074e044;
    FUN_710076d060(_DAT_7100d16cf0 & 0xffffffff);
    if (DAT_7100af387c == 1) goto LAB_710074e41c;
LAB_710074e058:
    _DAT_7100d16cf8 = 0;
    _DAT_7100d16cf0 = 0;
joined_r0x00710074e05c:
    if (DAT_7100af387c == 2) {
      _DAT_7100d16d04 = (int)(_DAT_7100d16d00 >> 0x20);
      if (_DAT_7100d16d04 == 0) {
        iVar3 = _DAT_7100d16d08;
        if (_DAT_7100d16d08 != 0) {
          puVar2 = (undefined8 *)tpidrro_el0;
          puVar2[2] = 0;
          puVar2[3] = 0;
          *puVar2 = 0x800000004;
          *(undefined1 *)(puVar2 + 2) = 2;
          *(int *)((long)puVar2 + 0x14) = iVar3;
          goto LAB_710074e47c;
        }
      }
      else {
        puVar2 = (undefined8 *)tpidrro_el0;
        *puVar2 = 2;
LAB_710074e47c:
        FUN_710076d0c0(_DAT_7100d16d00 & 0xffffffff);
        if (_DAT_7100d16d04 != 0) {
          FUN_710076d060(_DAT_7100d16d00 & 0xffffffff);
        }
      }
      _DAT_7100d16d00 = 0;
      _DAT_7100d16d08 = 0;
      if (_DAT_7100d16d14 == 0) {
        iVar3 = _DAT_7100d16d18;
        if (_DAT_7100d16d18 != 0) {
          puVar2 = (undefined8 *)tpidrro_el0;
          *puVar2 = 0x800000004;
          puVar2[2] = 0;
          puVar2[3] = 0;
          *(undefined1 *)(puVar2 + 2) = 2;
          *(int *)((long)puVar2 + 0x14) = iVar3;
          goto LAB_710074e4b4;
        }
      }
      else {
        puVar2 = (undefined8 *)tpidrro_el0;
        *puVar2 = 2;
LAB_710074e4b4:
        FUN_710076d0c0(_DAT_7100d16d10 & 0xffffffff);
        if (_DAT_7100d16d14 != 0) {
          FUN_710076d060(_DAT_7100d16d10 & 0xffffffff);
        }
      }
      _DAT_7100d16d10 = 0;
      _DAT_7100d16d18 = 0;
    }
    if (DAT_7100af387c - 1 < 3) goto LAB_710074e4e0;
    _DAT_7100d16d44 = (int)(_DAT_7100d16d40 >> 0x20);
    bVar1 = _DAT_7100d16d44 == 0;
    if (bVar1) goto LAB_710074e528;
LAB_710074e07c:
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 2;
    FUN_710076d0c0(_DAT_7100d16d40 & 0xffffffff);
joined_r0x00710074e560:
    if (_DAT_7100d16d44 == 0) goto LAB_710074e09c;
    FUN_710076d060(_DAT_7100d16d40 & 0xffffffff);
    if (_DAT_7100d16d54 == 0) goto LAB_710074e584;
LAB_710074e0b4:
    _DAT_7100d16d48 = 0;
    _DAT_7100d16d40 = 0;
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 2;
    FUN_710076d0c0(_DAT_7100d16d50 & 0xffffffff);
joined_r0x00710074e5bc:
    if (_DAT_7100d16d54 == 0) goto LAB_710074e0d4;
    FUN_710076d060(_DAT_7100d16d50 & 0xffffffff);
    if (_DAT_7100d16d6c == 0) goto LAB_710074e5e0;
LAB_710074e0ec:
    _DAT_7100d16d58 = 0;
    _DAT_7100d16d50 = 0;
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 2;
    FUN_710076d0c0(_DAT_7100d16d68 & 0xffffffff);
joined_r0x00710074e618:
    if (_DAT_7100d16d6c == 0) goto LAB_710074e10c;
    FUN_710076d060(_DAT_7100d16d68 & 0xffffffff);
    if (_DAT_7100d16d7c == 0) goto LAB_710074e63c;
LAB_710074e124:
    _DAT_7100d16d70 = 0;
    _DAT_7100d16d68 = 0;
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 2;
    FUN_710076d0c0(_DAT_7100d16d78 & 0xffffffff);
  }
  else {
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 2;
    FUN_710076d0c0(_DAT_7100d16c90 & 0xffffffff);
    if (_DAT_7100d16c94 == 0) goto LAB_710074def8;
LAB_710074e1dc:
    FUN_710076d060(_DAT_7100d16c90 & 0xffffffff);
    if (_DAT_7100d16ca4 != 0) goto LAB_710074df10;
LAB_710074e1fc:
    _DAT_7100d16c98 = 0;
    _DAT_7100d16c90 = 0;
    iVar3 = _DAT_7100d16ca8;
    if (_DAT_7100d16ca8 != 0) {
      puVar2 = (undefined8 *)tpidrro_el0;
      *puVar2 = 0x800000004;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(undefined1 *)(puVar2 + 2) = 2;
      *(int *)((long)puVar2 + 0x14) = iVar3;
      FUN_710076d0c0(_DAT_7100d16ca0 & 0xffffffff);
      goto joined_r0x00710074e234;
    }
LAB_710074df30:
    if (_DAT_7100d16cb4 == 0) goto LAB_710074e258;
LAB_710074df48:
    _DAT_7100d16ca8 = 0;
    _DAT_7100d16ca0 = 0;
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 2;
    FUN_710076d0c0(_DAT_7100d16cb0 & 0xffffffff);
joined_r0x00710074df64:
    if (_DAT_7100d16cb4 == 0) goto LAB_710074df68;
    FUN_710076d060(_DAT_7100d16cb0 & 0xffffffff);
    if (_DAT_7100d16cc4 != 0) goto LAB_710074df80;
LAB_710074e2b4:
    _DAT_7100d16cb8 = 0;
    _DAT_7100d16cb0 = 0;
    iVar3 = _DAT_7100d16cc8;
    if (_DAT_7100d16cc8 != 0) {
      puVar2 = (undefined8 *)tpidrro_el0;
      *puVar2 = 0x800000004;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(undefined1 *)(puVar2 + 2) = 2;
      *(int *)((long)puVar2 + 0x14) = iVar3;
      FUN_710076d0c0(_DAT_7100d16cc0 & 0xffffffff);
      goto joined_r0x00710074df9c;
    }
LAB_710074dfa0:
    if (_DAT_7100d16cd4 != 0) goto LAB_710074dfb4;
LAB_710074e30c:
    _DAT_7100d16cc8 = 0;
    _DAT_7100d16cc0 = 0;
    iVar3 = _DAT_7100d16cd8;
    if (_DAT_7100d16cd8 != 0) {
      puVar2 = (undefined8 *)tpidrro_el0;
      *puVar2 = 0x800000004;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(undefined1 *)(puVar2 + 2) = 2;
      *(int *)((long)puVar2 + 0x14) = iVar3;
      FUN_710076d0c0(_DAT_7100d16cd0 & 0xffffffff);
      goto joined_r0x00710074dfd0;
    }
LAB_710074dfd4:
    if (_DAT_7100d16ce4 != 0) goto LAB_710074dfec;
LAB_710074e368:
    _DAT_7100d16cd8 = 0;
    _DAT_7100d16cd0 = 0;
    iVar3 = _DAT_7100d16ce8;
    if (_DAT_7100d16ce8 != 0) {
      puVar2 = (undefined8 *)tpidrro_el0;
      *puVar2 = 0x800000004;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(undefined1 *)(puVar2 + 2) = 2;
      *(int *)((long)puVar2 + 0x14) = iVar3;
      FUN_710076d0c0(_DAT_7100d16ce0 & 0xffffffff);
      goto joined_r0x00710074e008;
    }
LAB_710074e00c:
    if (_DAT_7100d16cf4 != 0) goto LAB_710074e024;
LAB_710074e3c4:
    _DAT_7100d16ce8 = 0;
    _DAT_7100d16ce0 = 0;
    iVar3 = _DAT_7100d16cf8;
    if (_DAT_7100d16cf8 != 0) {
      puVar2 = (undefined8 *)tpidrro_el0;
      *puVar2 = 0x800000004;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(undefined1 *)(puVar2 + 2) = 2;
      *(int *)((long)puVar2 + 0x14) = iVar3;
      FUN_710076d0c0(_DAT_7100d16cf0 & 0xffffffff);
      goto joined_r0x00710074e040;
    }
LAB_710074e044:
    if (DAT_7100af387c != 1) goto LAB_710074e058;
LAB_710074e41c:
    _DAT_7100d16cf8 = 0;
    _DAT_7100d16cf0 = 0;
    if (_DAT_7100d16d24 != 0) {
      puVar2 = (undefined8 *)tpidrro_el0;
      *puVar2 = 2;
LAB_710074e438:
      FUN_710076d0c0(_DAT_7100d16d20 & 0xffffffff);
      if (_DAT_7100d16d24 != 0) {
        FUN_710076d060(_DAT_7100d16d20 & 0xffffffff);
      }
      _DAT_7100d16d20 = 0;
      _DAT_7100d16d28 = 0;
      goto joined_r0x00710074e05c;
    }
    iVar3 = _DAT_7100d16d28;
    if (_DAT_7100d16d28 != 0) {
      puVar2 = (undefined8 *)tpidrro_el0;
      *puVar2 = 0x800000004;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(undefined1 *)(puVar2 + 2) = 2;
      *(int *)((long)puVar2 + 0x14) = iVar3;
      goto LAB_710074e438;
    }
    _DAT_7100d16d20 = 0;
    _DAT_7100d16d28 = 0;
LAB_710074e4e0:
    if (_DAT_7100d16d34 == 0) {
      iVar3 = _DAT_7100d16d38;
      if (_DAT_7100d16d38 != 0) {
        puVar2 = (undefined8 *)tpidrro_el0;
        *puVar2 = 0x800000004;
        puVar2[2] = 0;
        puVar2[3] = 0;
        *(undefined1 *)(puVar2 + 2) = 2;
        *(int *)((long)puVar2 + 0x14) = iVar3;
        FUN_710076d0c0(_DAT_7100d16d30 & 0xffffffff);
        goto joined_r0x00710074e72c;
      }
    }
    else {
      puVar2 = (undefined8 *)tpidrro_el0;
      *puVar2 = 2;
      FUN_710076d0c0(_DAT_7100d16d30 & 0xffffffff);
joined_r0x00710074e72c:
      if (_DAT_7100d16d34 != 0) {
        FUN_710076d060(_DAT_7100d16d30 & 0xffffffff);
      }
    }
    _DAT_7100d16d30 = 0;
    _DAT_7100d16d38 = 0;
    if (_DAT_7100d16d44 != 0) goto LAB_710074e07c;
LAB_710074e528:
    iVar3 = _DAT_7100d16d48;
    if (_DAT_7100d16d48 != 0) {
      puVar2 = (undefined8 *)tpidrro_el0;
      *puVar2 = 0x800000004;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(undefined1 *)(puVar2 + 2) = 2;
      *(int *)((long)puVar2 + 0x14) = iVar3;
      FUN_710076d0c0(_DAT_7100d16d40 & 0xffffffff);
      goto joined_r0x00710074e560;
    }
LAB_710074e09c:
    if (_DAT_7100d16d54 != 0) goto LAB_710074e0b4;
LAB_710074e584:
    _DAT_7100d16d48 = 0;
    _DAT_7100d16d40 = 0;
    iVar3 = _DAT_7100d16d58;
    if (_DAT_7100d16d58 != 0) {
      puVar2 = (undefined8 *)tpidrro_el0;
      *puVar2 = 0x800000004;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(undefined1 *)(puVar2 + 2) = 2;
      *(int *)((long)puVar2 + 0x14) = iVar3;
      FUN_710076d0c0(_DAT_7100d16d50 & 0xffffffff);
      goto joined_r0x00710074e5bc;
    }
LAB_710074e0d4:
    if (_DAT_7100d16d6c != 0) goto LAB_710074e0ec;
LAB_710074e5e0:
    _DAT_7100d16d58 = 0;
    _DAT_7100d16d50 = 0;
    iVar3 = _DAT_7100d16d70;
    if (_DAT_7100d16d70 != 0) {
      puVar2 = (undefined8 *)tpidrro_el0;
      *puVar2 = 0x800000004;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(undefined1 *)(puVar2 + 2) = 2;
      *(int *)((long)puVar2 + 0x14) = iVar3;
      FUN_710076d0c0(_DAT_7100d16d68 & 0xffffffff);
      goto joined_r0x00710074e618;
    }
LAB_710074e10c:
    if (_DAT_7100d16d7c != 0) goto LAB_710074e124;
LAB_710074e63c:
    _DAT_7100d16d70 = 0;
    _DAT_7100d16d68 = 0;
    iVar3 = _DAT_7100d16d80;
    if (_DAT_7100d16d80 == 0) goto joined_r0x00710074e15c;
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 0x800000004;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 2) = 2;
    *(int *)((long)puVar2 + 0x14) = iVar3;
    FUN_710076d0c0(_DAT_7100d16d78 & 0xffffffff);
  }
  if (_DAT_7100d16d7c != 0) {
    FUN_710076d060(_DAT_7100d16d78 & 0xffffffff);
  }
joined_r0x00710074e15c:
  if (_DAT_7100d16c20 == 0) {
    _DAT_7100d16d80 = 0;
    _DAT_7100d16d78 = 0;
    _DAT_7100d16c78 = 0;
  }
  else {
    _DAT_7100d16d80 = 0;
    _DAT_7100d16d78 = 0;
    _DAT_7100d16c78 = 0;
    FUN_710076d3e0(0x7100d16c28);
  }
  _DAT_7100d16c20 = 0;
  if ((DAT_7100d16bf4 & 1) != 0) {
    FUN_710076d3e0(0x7100d16bf8);
    DAT_7100d16bf4 = 0;
  }
  if (DAT_7100af387c != 0) {
    return;
  }
  FUN_710076d9d0();
  return;
}



// ===== FUN_710074e890 @ 710074e890 (size=72) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710074e890(void)

{
  FUN_7100749670();
  if (_DAT_7100d16b64 != 0) {
    _DAT_7100d16b64 = _DAT_7100d16b64 + -1;
    if (_DAT_7100d16b64 == 0) {
      FUN_710074ddb0();
    }
  }
  FUN_7100749740(0x7100d16b60);
  return;
}



// ===== FUN_710074e8e0 @ 710074e8e0 (size=64) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_710074e8e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  if ((_DAT_7100d16d10 != 0) && (DAT_7100af387c == 2)) {
    uVar1 = FUN_710074cb60(_DAT_7100d16d10,_DAT_7100d16d18,param_1,0xb);
    return uVar1;
  }
  return 0x1159;
}



// ===== FUN_710074e920 @ 710074e920 (size=3092) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

uint FUN_710074e920(void)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined8 local_8;
  
  FUN_7100749670(0x7100d16b60);
  iVar5 = _DAT_7100d16b64 + 1;
  bVar4 = _DAT_7100d16b64 != 0;
  _DAT_7100d16b64 = iVar5;
  if (bVar4) goto LAB_710074ebb0;
  if ((DAT_7100d16d65 & 1) != 0) {
    DAT_7100d16d65 = 0;
    goto LAB_710074ebb0;
  }
  if (DAT_7100af387c == 0xfffffffe) goto LAB_710074ebb0;
  if (DAT_7100af387c - 1 < 0xfffffffe) {
LAB_710074ec18:
    DAT_7100d16d64 = 0;
    _DAT_7100d16c78 = 0;
    DAT_7100d16c68 = 0;
    _DAT_7100d16c20 = 0;
    uRam0000007100d16bb8 = 0;
    _DAT_7100d16bb0 = 0;
    uRam0000007100d16ba8 = 0;
    _DAT_7100d16ba0 = 0;
    uRam0000007100d16b98 = 0;
    _DAT_7100d16b90 = 0;
    uRam0000007100d16b88 = 0;
    _DAT_7100d16b80 = 0;
    _DAT_7100d16b78 = 0;
    _DAT_7100d16b70 = 0;
    DAT_7100d16b68 = 0;
    uVar6 = FUN_710075e590(&DAT_7100d16d78,0x454174656c707061);
  }
  else {
    iVar5 = FUN_710076d830();
    if (iVar5 != 0) {
      uVar6 = 0x5759;
      goto LAB_710074ee30;
    }
    _DAT_7100d16c78 = 0;
    DAT_7100d16c68 = 0;
    DAT_7100d16d64 = 0;
    _DAT_7100d16c20 = 0;
    DAT_7100d16b68 = 0;
    _DAT_7100d16b70 = 0;
    _DAT_7100d16b78 = 0;
    _DAT_7100d16b80 = 0;
    uRam0000007100d16b88 = 0;
    _DAT_7100d16b90 = 0;
    uRam0000007100d16b98 = 0;
    _DAT_7100d16ba0 = 0;
    uRam0000007100d16ba8 = 0;
    _DAT_7100d16bb0 = 0;
    uRam0000007100d16bb8 = 0;
    if (DAT_7100af387c != 0) {
      if (DAT_7100af387c != 0xffffffff) goto LAB_710074ec18;
      DAT_7100af387c = 0;
    }
    uVar6 = FUN_710075e590(&DAT_7100d16d78,0x454f74656c707061);
  }
  uVar8 = _DAT_7100d16d78;
  if (uVar6 == 0) {
    if (_DAT_7100d16d7c == 0) {
      plVar1 = (long *)tpidrro_el0;
      *plVar1 = 0x900000005;
      *(undefined4 *)(plVar1 + 4) = 0;
      plVar1[2] = 0x49434653;
      plVar1[3] = 4;
      uVar6 = FUN_710076d0c0(uVar8);
      if (uVar6 == 0) {
        if (*plVar1 < 0) {
          uVar6 = *(uint *)(plVar1 + 1);
          lVar13 = (long)plVar1 + 0x14;
          if ((uVar6 & 1) == 0) {
            lVar13 = (long)plVar1 + 0xc;
          }
          plVar11 = (long *)(lVar13 + ((ulong)(uVar6 >> 1) & 0xf) * 4);
          lVar13 = ((ulong)(uVar6 >> 5) & 0xf) << 2;
        }
        else {
          plVar11 = plVar1 + 1;
          lVar13 = 0;
        }
        uVar9 = (long)plVar11 +
                ((lVar13 + (ulong)((uint)*plVar1 >> 0x10 & 0xf) * 8) - (long)plVar1) + 0xf &
                0xfffffffffffffff0;
        if (*(int *)((long)plVar1 + uVar9) != 0x4f434653) goto LAB_710074ec40;
        uVar6 = *(uint *)((long)plVar1 + uVar9 + 8);
        if (uVar6 == 0) {
          _DAT_7100d16d78 = (undefined4)*plVar11;
          _DAT_7100d16d7c = 1;
          goto LAB_710074eab8;
        }
      }
    }
    else {
LAB_710074eab8:
      uVar8 = _DAT_7100d16d78;
      plVar1 = (long *)tpidrro_el0;
      *plVar1 = 0x800000005;
      plVar1[2] = 0x49434653;
      plVar1[3] = 0;
      uVar6 = FUN_710076d0c0(uVar8);
      uVar9 = DAT_7100af3870;
      if (uVar6 == 0) {
        if (*plVar1 < 0) {
          uVar6 = *(uint *)(plVar1 + 1);
          plVar11 = (long *)((long)plVar1 + 0x14);
          if ((uVar6 & 1) == 0) {
            plVar11 = (long *)((long)plVar1 + 0xc);
          }
          lVar13 = (((ulong)(uVar6 >> 1) & 0xf) + ((ulong)(uVar6 >> 5) & 0xf)) * 4;
        }
        else {
          plVar11 = plVar1 + 1;
          lVar13 = 0;
        }
        uVar10 = (long)plVar11 +
                 ((lVar13 + (ulong)((uint)*plVar1 >> 0x10 & 0xf) * 8) - (long)plVar1) + 0xf &
                 0xfffffffffffffff0;
        if (*(int *)((long)plVar1 + uVar10) == 0x4f434653) {
          uVar6 = *(uint *)((long)plVar1 + uVar10 + 8);
          if (uVar6 == 0) {
            _DAT_7100d16d80 = *(undefined4 *)((long)plVar1 + uVar10 + 0x10);
            if (DAT_7100af387c == 2) {
              lVar13 = cntpct_el0;
            }
            else {
              if (4 < DAT_7100af387c) {
LAB_710074f36c:
                    /* WARNING: Subroutine does not return */
                FUN_71007697d0(0x2d59);
              }
              lVar13 = 0;
            }
            if (DAT_7100af387c == 2) {
              puVar14 = (undefined1 *)0x0;
              goto LAB_710074ef2c;
            }
            uVar8 = (&DAT_71009c5660)[DAT_7100af387c];
            puVar14 = (undefined1 *)0x0;
LAB_710074eb80:
            uVar6 = FUN_710074c260(uVar8);
            do {
              if ((uVar6 & 0x3fffff) != 0x19280) {
                if (uVar6 != 0) break;
                uVar6 = FUN_7100769b90();
                if (uVar6 < 0x70000) {
LAB_710074ee8c:
                  if (DAT_7100af387c != 2) goto LAB_710074f0c0;
LAB_710074ee98:
                  uVar6 = FUN_710074b9d0(&DAT_7100d16d68,&DAT_7100d16d10,0x14);
                  if ((uVar6 != 0) ||
                     (uVar6 = FUN_710074b9d0(&DAT_7100d16d68,&DAT_7100d16d00,10), uVar6 != 0))
                  break;
                }
                else {
                  if (DAT_7100af387c - 1 < 3) {
                    uVar8 = 0x15;
                    if (DAT_7100af387c == 1) {
                      uVar8 = 0x17;
                    }
                    uVar6 = FUN_710074b9d0(&DAT_7100d16d68,&DAT_7100d16d50,uVar8);
                    if (uVar6 == 0) goto LAB_710074ee8c;
                    break;
                  }
LAB_710074f0c0:
                  uVar6 = FUN_710074b9d0(&DAT_7100d16d68,&DAT_7100d16d40,0x14);
                  if ((uVar6 != 0) ||
                     ((DAT_7100af387c == 1 &&
                      ((uVar6 = FUN_710074b9d0(&DAT_7100d16d68,&DAT_7100d16d30,0x15), uVar6 != 0 ||
                       (uVar6 = FUN_710074b9d0(&DAT_7100d16d68,&DAT_7100d16d20,0x16), uVar6 != 0))))
                     )) break;
                  if (DAT_7100af387c == 2) goto LAB_710074ee98;
                }
                uVar6 = FUN_7100769b90();
                if (((0xeffff < uVar6) &&
                    (((DAT_7100af387c == 2 &&
                      (uVar6 = FUN_710074b9d0(&DAT_7100d16d68,&DAT_7100d16d40,0x16), uVar6 != 0)) ||
                     ((DAT_7100af387c - 2 < 2 &&
                      (uVar6 = FUN_710074b9d0(&DAT_7100d16d68,&DAT_7100d16d30,0x17), uVar6 != 0)))))
                    ) || ((((uVar6 = FUN_710074b9d0(&DAT_7100d16d68,&DAT_7100d16cf0,0xb), uVar6 != 0
                            || (uVar6 = FUN_710074b9d0(&DAT_7100d16d68,&DAT_7100d16ce0,0),
                               uVar6 != 0)) ||
                           (uVar6 = FUN_710074b9d0(&DAT_7100d16d68,&DAT_7100d16cd0,1), uVar6 != 0))
                          || (uVar6 = FUN_710074b9d0(&DAT_7100d16d68,&DAT_7100d16cc0,2), uVar6 != 0)
                          ))) break;
                if (_DAT_7100d16cc0 == 0) {
                  uVar6 = 0x1159;
                  break;
                }
                uVar6 = FUN_710074cb60(_DAT_7100d16cc0,_DAT_7100d16cc8,&DAT_7100d16c78,1);
                if (((uVar6 != 0) ||
                    (uVar6 = FUN_710074b9d0(&DAT_7100d16d68,&DAT_7100d16cb0,3), uVar6 != 0)) ||
                   (uVar6 = FUN_710074b9d0(&DAT_7100d16d68,&DAT_7100d16ca0,4), uVar6 != 0)) break;
                uVar6 = FUN_710074b9d0(&DAT_7100d16d68,&DAT_7100d16c90,1000);
                if ((_DAT_7100d16cd0 == 0) || (uVar7 = FUN_7100769b90(), uVar7 < 0x60000))
                goto LAB_710074ecb0;
                goto LAB_710074ec6c;
              }
              FUN_710076d024(100000000);
              if (DAT_7100af387c == 2) {
                lVar2 = cntpct_el0;
                if (uVar9 <= (ulong)((lVar2 - lVar13) * 0x271) / 0xc) {
                    /* WARNING: Subroutine does not return */
                  FUN_71007697d0(0x6359);
                }
LAB_710074ef2c:
                uVar6 = FUN_7100769b90();
                if (uVar6 < 0x30000) {
                  uVar8 = 200;
                  goto LAB_710074eef4;
                }
                puVar14 = &DAT_7100d16d98;
              }
              else {
                if (4 < DAT_7100af387c) goto LAB_710074f36c;
                uVar8 = (&DAT_71009c5660)[DAT_7100af387c];
LAB_710074eef4:
                if (puVar14 == (undefined1 *)0x0) goto LAB_710074eb80;
              }
              uVar6 = FUN_710074c390(puVar14);
            } while( true );
          }
        }
        else {
LAB_710074ec40:
          uVar6 = 0x5f59;
        }
      }
    }
  }
  if ((_DAT_7100d16cd0 == 0) || (uVar7 = FUN_7100769b90(), uVar7 < 0x60000)) goto LAB_710074ee30;
LAB_710074ec6c:
  iVar5 = FUN_710074c4e0(&DAT_7100d16cd0,0x7100d16be8,1,0x5b);
  if (iVar5 == 0) {
    _DAT_7100d16be0 = cntpct_el0;
    _DAT_7100d16bd8 = 0;
    DAT_7100d16bd4 = 1;
  }
LAB_710074ecb0:
  if ((uVar6 != 0) || (uVar6 = FUN_710074c4e0(&DAT_7100d16ce0,0x7100d16c80,0,0), uVar6 != 0))
  goto LAB_710074ee30;
  if (DAT_7100af387c == 0) {
    if (_DAT_7100d16ce0 != 0) {
      uVar6 = FUN_710074c9a0(_DAT_7100d16ce0,_DAT_7100d16ce8,&DAT_7100d16c69,9);
      if (uVar6 != 0) goto LAB_710074ee30;
      if (DAT_7100d16c69 != '\x01') {
        do {
          FUN_71007495a0(0x7100d16c80,0xffffffffffffffff);
          if (_DAT_7100d16ce0 == 0) goto LAB_710074f09c;
          uVar7 = FUN_710074ca80(_DAT_7100d16ce0,_DAT_7100d16ce8,&local_8,1);
          if (uVar7 == 0) {
            if ((int)local_8 == 0xf) {
              if (_DAT_7100d16ce0 == 0) goto LAB_710074f09c;
              uVar6 = FUN_710074c9a0(_DAT_7100d16ce0,_DAT_7100d16ce8,&DAT_7100d16c69,9);
              if (uVar6 != 0) goto LAB_710074ee30;
            }
          }
          else {
            uVar6 = uVar7;
            if ((uVar7 & 0x3fffff) != 0x680) goto LAB_710074ee30;
          }
        } while (DAT_7100d16c69 != '\x01');
        uVar6 = uVar7;
        if (uVar7 != 0) goto LAB_710074ee30;
      }
      if (_DAT_7100d16cc0 != 0) {
        uVar6 = FUN_710074cc40(_DAT_7100d16cc0,_DAT_7100d16cc8,10);
        if ((uVar6 != 0) || (uVar6 = FUN_710074cd20(), uVar6 != 0)) goto LAB_710074ee30;
        goto LAB_710074ecf0;
      }
    }
  }
  else {
LAB_710074ecf0:
    if ((DAT_7100af3878 & 1) != 0) {
      FUN_710074dc50(0);
    }
    if (_DAT_7100d16ce0 != 0) {
      uVar6 = FUN_710074c9a0(_DAT_7100d16ce0,_DAT_7100d16ce8,&DAT_7100d16c70,5);
      if (uVar6 != 0) goto LAB_710074ee30;
      if (_DAT_7100d16ce0 != 0) {
        uVar6 = FUN_710074ca80(_DAT_7100d16ce0,_DAT_7100d16ce8,0x7100d16c6c,6);
        if (uVar6 != 0) goto LAB_710074ee30;
        if (DAT_7100af387c != 0) {
          if (_DAT_7100d16ce0 == 0) goto LAB_710074f09c;
          uVar6 = FUN_710074c9a0(_DAT_7100d16ce0,_DAT_7100d16ce8,&DAT_7100d16c69,9);
          if (uVar6 != 0) goto LAB_710074ee30;
        }
        if (_DAT_7100d16cd0 != 0) {
          uVar6 = FUN_710074bae0(&DAT_7100d16cd0,1,0xb);
          if (uVar6 != 0) goto LAB_710074ee30;
          if (_DAT_7100d16cd0 != 0) {
            uVar6 = FUN_710074bae0(&DAT_7100d16cd0,1,0xc);
            if (uVar6 != 0) goto LAB_710074ee30;
            if (DAT_7100af387c == 0) {
              lVar13 = 0;
              do {
                if ((*(int *)(&DAT_7100d16d90 + lVar13 * 4) != 0) &&
                   (uVar6 = FUN_710076da20(lVar13), uVar6 != 0)) goto LAB_710074ee30;
                bVar4 = lVar13 != 1;
                lVar13 = 1;
              } while (bVar4);
            }
            if (((DAT_7100af387c != 2) ||
                (iVar5 = FUN_710074e8e0(&DAT_7100d16b70), uVar3 = _DAT_7100d16d08,
                uVar8 = _DAT_7100d16d00, iVar5 != 0)) || (DAT_7100af387c != 2)) goto LAB_710074ebb0;
            plVar1 = (long *)tpidrro_el0;
            *plVar1 = 0xc00000004;
            plVar1[5] = 0;
            *(undefined4 *)(plVar1 + 2) = 0x100001;
            *(undefined4 *)((long)plVar1 + 0x14) = uVar3;
            plVar1[3] = 0;
            plVar1[4] = 0x49434653;
            iVar5 = FUN_710076d0c0(uVar8);
            if (iVar5 != 0) goto LAB_710074ebb0;
            if (*plVar1 < 0) {
              uVar6 = *(uint *)(plVar1 + 1);
              uVar7 = uVar6 >> 1 & 0xf;
              uVar12 = uVar6 >> 5 & 0xf;
              plVar11 = (long *)((long)plVar1 + 0x14);
              if ((uVar6 & 1) == 0) {
                plVar11 = (long *)((long)plVar1 + 0xc);
              }
            }
            else {
              uVar12 = 0;
              uVar7 = 0;
              plVar11 = plVar1 + 1;
            }
            uVar9 = (long)plVar11 +
                    (((ulong)((uint)*plVar1 >> 0x10 & 0xf) * 8 + (ulong)(uVar12 + uVar7) * 4) -
                    (long)plVar1) + 0xf & 0xfffffffffffffff0;
            if ((*(int *)((long)plVar1 + uVar9 + 0x10) != 0x4f434653) ||
               (*(int *)((long)plVar1 + uVar9 + 0x18) != 0)) goto LAB_710074ebb0;
            bVar4 = *(char *)((long)plVar1 + uVar9 + 0x20) != '\0';
            _DAT_7100d16b78 = CONCAT71(DAT_7100d16b78_1,bVar4);
            if (bVar4) {
              if (DAT_7100af387c != 2) goto LAB_710074ebb0;
              local_8 = 0;
              _DAT_7100d16b80 = 0;
              uRam0000007100d16b88 = 0;
              _DAT_7100d16b90 = 0;
              uRam0000007100d16b98 = 0;
              _DAT_7100d16ba0 = 0;
              uRam0000007100d16ba8 = 0;
              _DAT_7100d16bb0 = 0;
              uRam0000007100d16bb8 = 0;
              iVar5 = FUN_710074b9d0(&DAT_7100d16d00,&DAT_7100d16b80,0xb);
              if ((iVar5 == 0) && (iVar5 = FUN_710074d4c0(&DAT_7100d16b80,&local_8), iVar5 == 0)) {
                iVar5 = FUN_710074cf80(&DAT_7100d16b80,local_8._4_4_,0);
                if (iVar5 == 0) goto LAB_710074f464;
              }
              FUN_710074d170(&DAT_7100d16b80);
            }
            else {
LAB_710074f464:
              DAT_7100d16b68 = 1;
            }
LAB_710074ebb0:
            FUN_7100749740(0x7100d16b60);
            return 0;
          }
        }
      }
    }
  }
LAB_710074f09c:
  uVar6 = 0x1159;
LAB_710074ee30:
  FUN_710074ddb0();
  _DAT_7100d16b64 = _DAT_7100d16b64 + -1;
  FUN_7100749740(0x7100d16b60);
  return uVar6;
}



// ===== FUN_710074f540 @ 710074f540 (size=40) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710074f540(void)

{
  code *pcVar1;
  
  FUN_710074e920();
  FUN_710074e890();
  if (_DAT_7100d16d60 == 0) {
    FUN_710074b9b0();
  }
  FUN_710076cff8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x710074f564);
  (*pcVar1)();
}



// ===== FUN_710074f570 @ 710074f570 (size=12) =====

undefined1 FUN_710074f570(void)

{
  return DAT_7100d16c70;
}



// ===== FUN_710074f8b0 @ 710074f8b0 (size=276) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710074f8b0(undefined8 param_1,ulong param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  
  iVar7 = _DAT_7100d16e28;
  uVar6 = _DAT_7100d16e20;
  puVar4 = (undefined8 *)tpidrro_el0;
  if (_DAT_7100d16e28 == 0) {
    puVar10 = puVar4 + 2;
    *puVar4 = 0xc00000004;
  }
  else {
    puVar10 = puVar4 + 4;
    puVar4[3] = 0;
    *puVar4 = 0x1000000004;
    *(undefined4 *)(puVar4 + 2) = 0x200001;
    *(int *)((long)puVar4 + 0x14) = iVar7;
  }
  *(undefined4 *)(puVar10 + 1) = param_3;
  *(undefined4 *)((long)puVar10 + 0xc) = 0;
  puVar10[2] = param_2 & 0xffffffff;
  puVar10[3] = param_1;
  *puVar10 = 0x49434653;
  uVar8 = FUN_710076d0c0(uVar6);
  if ((int)uVar8 == 0) {
    plVar5 = (long *)tpidrro_el0;
    if (*plVar5 < 0) {
      uVar3 = *(uint *)(plVar5 + 1);
      plVar9 = (long *)((long)plVar5 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar9 = (long *)((long)plVar5 + 0xc);
      }
      lVar11 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar9 = plVar5 + 1;
      lVar11 = 0;
    }
    piVar1 = (int *)((long)plVar5 +
                    ((long)plVar9 +
                     ((lVar11 + (ulong)((uint)*plVar5 >> 0x10 & 0xf) * 8) - (long)plVar5) + 0xf &
                    0xfffffffffffffff0));
    piVar2 = piVar1 + 4;
    if (iVar7 == 0) {
      piVar2 = piVar1;
    }
    uVar8 = 0x5f59;
    if (*piVar2 == 0x4f434653) {
      uVar8 = (ulong)(uint)piVar2[2];
    }
  }
  return uVar8;
}



// ===== FUN_710074f9d0 @ 710074f9d0 (size=168) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710074f9d0(void)

{
  undefined8 *puVar1;
  int iVar2;
  
  if (_DAT_7100d16e24 == 0) {
    iVar2 = _DAT_7100d16e28;
    if (_DAT_7100d16e28 == 0) {
      _DAT_7100d16e20 = 0;
      _DAT_7100d16e28 = 0;
      return;
    }
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 0x800000004;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 2) = 2;
    *(int *)((long)puVar1 + 0x14) = iVar2;
    FUN_710076d0c0(_DAT_7100d16e20 & 0xffffffff);
  }
  else {
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 2;
    FUN_710076d0c0(_DAT_7100d16e20 & 0xffffffff);
  }
  if (_DAT_7100d16e24 == 0) {
    _DAT_7100d16e20 = 0;
    _DAT_7100d16e28 = 0;
    return;
  }
  FUN_710076d060(_DAT_7100d16e20 & 0xffffffff);
  _DAT_7100d16e20 = 0;
  _DAT_7100d16e28 = 0;
  return;
}



// ===== FUN_710074fa80 @ 710074fa80 (size=568) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

int FUN_710074fa80(void)

{
  bool bVar1;
  long *plVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  
  FUN_7100749670(0x7100d16e18);
  iVar5 = _DAT_7100d16e1c + 1;
  bVar1 = _DAT_7100d16e1c != 0;
  _DAT_7100d16e1c = iVar5;
  if (bVar1) goto LAB_710074faac;
  uVar4 = FUN_7100769b90();
  if (uVar4 < 0x60000) {
    iVar5 = 0x4b59;
    goto LAB_710074fc34;
  }
  iVar5 = FUN_710075e590(&DAT_7100d16e20,0x6d7661);
  uVar3 = _DAT_7100d16e20;
  if (iVar5 != 0) goto LAB_710074fc34;
  if (_DAT_7100d16e24 == 0) {
    plVar2 = (long *)tpidrro_el0;
    *plVar2 = 0x900000005;
    *(undefined4 *)(plVar2 + 4) = 0;
    plVar2[2] = 0x49434653;
    plVar2[3] = 4;
    iVar5 = FUN_710076d0c0(uVar3);
    if (iVar5 != 0) goto LAB_710074fc34;
    if (*plVar2 < 0) {
      uVar4 = *(uint *)(plVar2 + 1);
      lVar8 = (long)plVar2 + 0x14;
      if ((uVar4 & 1) == 0) {
        lVar8 = (long)plVar2 + 0xc;
      }
      plVar7 = (long *)(lVar8 + ((ulong)(uVar4 >> 1) & 0xf) * 4);
      lVar8 = ((ulong)(uVar4 >> 5) & 0xf) << 2;
    }
    else {
      plVar7 = plVar2 + 1;
      lVar8 = 0;
    }
    uVar6 = (long)plVar7 + ((lVar8 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    if (*(int *)((long)plVar2 + uVar6) == 0x4f434653) {
      iVar5 = *(int *)((long)plVar2 + uVar6 + 8);
      if (iVar5 != 0) goto LAB_710074fc34;
      _DAT_7100d16e20 = (undefined4)*plVar7;
      _DAT_7100d16e24 = 1;
      goto LAB_710074fba0;
    }
  }
  else {
LAB_710074fba0:
    uVar3 = _DAT_7100d16e20;
    plVar2 = (long *)tpidrro_el0;
    *plVar2 = 0x800000005;
    plVar2[2] = 0x49434653;
    plVar2[3] = 0;
    iVar5 = FUN_710076d0c0(uVar3);
    if (iVar5 != 0) goto LAB_710074fc34;
    if (*plVar2 < 0) {
      uVar4 = *(uint *)(plVar2 + 1);
      plVar7 = (long *)((long)plVar2 + 0x14);
      if ((uVar4 & 1) == 0) {
        plVar7 = (long *)((long)plVar2 + 0xc);
      }
      lVar8 = (((ulong)(uVar4 >> 1) & 0xf) + ((ulong)(uVar4 >> 5) & 0xf)) * 4;
    }
    else {
      plVar7 = plVar2 + 1;
      lVar8 = 0;
    }
    uVar6 = (long)plVar7 + ((lVar8 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    if (*(int *)((long)plVar2 + uVar6) == 0x4f434653) {
      iVar5 = *(int *)((long)plVar2 + uVar6 + 8);
      if (iVar5 == 0) {
        _DAT_7100d16e28 = *(undefined4 *)((long)plVar2 + uVar6 + 0x10);
LAB_710074faac:
        FUN_7100749740(0x7100d16e18);
        return 0;
      }
      goto LAB_710074fc34;
    }
  }
  iVar5 = 0x5f59;
LAB_710074fc34:
  FUN_710074f9d0();
  _DAT_7100d16e1c = _DAT_7100d16e1c + -1;
  FUN_7100749740(0x7100d16e18);
  return iVar5;
}



// ===== FUN_710074fcc0 @ 710074fcc0 (size=72) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710074fcc0(void)

{
  FUN_7100749670();
  if (_DAT_7100d16e1c != 0) {
    _DAT_7100d16e1c = _DAT_7100d16e1c + -1;
    if (_DAT_7100d16e1c == 0) {
      FUN_710074f9d0();
    }
  }
  FUN_7100749740(0x7100d16e18);
  return;
}



// ===== FUN_710074fd10 @ 710074fd10 (size=424) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710074fd10(int *param_1)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  undefined2 uVar8;
  ulong uVar9;
  uint uVar10;
  undefined8 *puVar11;
  long lVar12;
  
  uVar8 = _DAT_7100d16e2c;
  iVar3 = _DAT_7100d16e28;
  iVar7 = _DAT_7100d16e20;
  puVar4 = (undefined8 *)tpidrro_el0;
  if (_DAT_7100d16e28 == 0) {
    puVar11 = puVar4 + 2;
    *puVar4 = 0x800000004;
  }
  else {
    puVar11 = puVar4 + 4;
    puVar4[3] = 0;
    *puVar4 = 0xc00000004;
    *(undefined4 *)(puVar4 + 2) = 0x100001;
    *(int *)((long)puVar4 + 0x14) = iVar3;
  }
  *puVar11 = 0x49434653;
  puVar11[1] = 0x67;
  uVar9 = FUN_710076d0c0(iVar7);
  if ((int)uVar9 == 0) {
    plVar5 = (long *)tpidrro_el0;
    uVar10 = (uint)*plVar5 >> 0x10 & 0xf;
    if (*plVar5 < 0) {
      uVar2 = *(uint *)(plVar5 + 1);
      lVar12 = (long)plVar5 + 0x14;
      if ((uVar2 & 1) == 0) {
        lVar12 = (long)plVar5 + 0xc;
      }
      plVar1 = (long *)(lVar12 + ((ulong)(uVar2 >> 1) & 0xf) * 4);
      lVar12 = (long)plVar1 + ((((ulong)(uVar2 >> 5) & 0xf) * 4 + (ulong)uVar10 * 8) - (long)plVar5)
      ;
    }
    else {
      plVar1 = plVar5 + 1;
      lVar12 = (long)plVar1 + ((ulong)uVar10 * 8 - (long)plVar5);
    }
    uVar6 = lVar12 + 0xfU & 0xfffffffffffffff0;
    if (iVar3 == 0) {
      if (*(int *)((long)plVar5 + uVar6) != 0x4f434653) {
        return 0x5f59;
      }
      uVar10 = *(uint *)((long)plVar5 + uVar6 + 8);
      if (uVar10 != 0) {
LAB_710074fe90:
        return (ulong)uVar10;
      }
      if ((int)*plVar1 == 0) {
LAB_710074fea4:
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        return uVar9;
      }
      *param_1 = (int)*plVar1;
      *(undefined2 *)(param_1 + 3) = uVar8;
      param_1[1] = 1;
      param_1[2] = 0;
    }
    else {
      if (*(int *)((long)plVar5 + uVar6 + 0x10) != 0x4f434653) {
        return 0x5f59;
      }
      uVar10 = *(uint *)((long)plVar5 + uVar6 + 0x18);
      if (uVar10 != 0) goto LAB_710074fe90;
      iVar3 = *(int *)((long)plVar5 + uVar6 + 0x20);
      if (iVar3 == 0) goto LAB_710074fea4;
      *param_1 = iVar7;
      param_1[1] = 0;
      param_1[2] = iVar3;
      *(undefined2 *)(param_1 + 3) = uVar8;
    }
  }
  return uVar9;
}



// ===== FUN_710074fec0 @ 710074fec0 (size=8) =====

void FUN_710074fec0(undefined8 param_1,undefined8 param_2)

{
  FUN_710074f8b0(param_1,param_2,0xca);
  return;
}



// ===== FUN_710074fed0 @ 710074fed0 (size=8) =====

void FUN_710074fed0(undefined8 param_1,undefined8 param_2)

{
  FUN_710074f8b0(param_1,param_2,1000);
  return;
}



// ===== FUN_710074fee0 @ 710074fee0 (size=324) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710074fee0(undefined8 param_1,long param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  
  iVar7 = _DAT_7100d16e28;
  uVar6 = _DAT_7100d16e20;
  puVar4 = (undefined8 *)tpidrro_el0;
  if (_DAT_7100d16e28 == 0) {
    puVar11 = puVar4 + 4;
    *puVar4 = 0x801000004;
  }
  else {
    puVar4[5] = 0;
    *puVar4 = 0xc01000004;
    *(undefined4 *)(puVar4 + 4) = 0x100001;
    *(int *)((long)puVar4 + 0x24) = iVar7;
    puVar11 = puVar4 + 6;
  }
  *puVar11 = 0x49434653;
  puVar11[1] = 0x3e9;
  uVar3 = (uint)((ulong)param_1 >> 0x20);
  *(int *)(puVar4 + 1) = (int)(param_2 << 4);
  *(int *)((long)puVar4 + 0xc) = (int)param_1;
  *(uint *)(puVar4 + 2) =
       (uVar3 >> 4 & 0x3fffff) << 2 | ((uint)((ulong)(param_2 << 4) >> 0x20) & 0xf) << 0x18 |
       uVar3 << 0x1c;
  uVar8 = FUN_710076d0c0(uVar6);
  if ((int)uVar8 == 0) {
    plVar5 = (long *)tpidrro_el0;
    if (*plVar5 < 0) {
      uVar3 = *(uint *)(plVar5 + 1);
      plVar9 = (long *)((long)plVar5 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar9 = (long *)((long)plVar5 + 0xc);
      }
      lVar10 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar9 = plVar5 + 1;
      lVar10 = 0;
    }
    piVar1 = (int *)((long)plVar5 +
                    ((long)plVar9 +
                     ((lVar10 + (ulong)((uint)*plVar5 >> 0x10 & 0xf) * 8) - (long)plVar5) + 0xf &
                    0xfffffffffffffff0));
    piVar2 = piVar1 + 4;
    if (iVar7 == 0) {
      piVar2 = piVar1;
    }
    uVar8 = 0x5f59;
    if (((*piVar2 == 0x4f434653) && (uVar8 = (ulong)(uint)piVar2[2], piVar2[2] == 0)) &&
       (param_3 != (int *)0x0)) {
      *param_3 = piVar2[4];
    }
  }
  return uVar8;
}



// ===== FUN_7100750030 @ 7100750030 (size=324) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100750030(undefined8 param_1,long param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  
  iVar7 = _DAT_7100d16e28;
  uVar6 = _DAT_7100d16e20;
  puVar4 = (undefined8 *)tpidrro_el0;
  if (_DAT_7100d16e28 == 0) {
    puVar11 = puVar4 + 4;
    *puVar4 = 0x801000004;
  }
  else {
    puVar4[5] = 0;
    *puVar4 = 0xc01000004;
    *(undefined4 *)(puVar4 + 4) = 0x100001;
    *(int *)((long)puVar4 + 0x24) = iVar7;
    puVar11 = puVar4 + 6;
  }
  *puVar11 = 0x49434653;
  puVar11[1] = 0x3ea;
  uVar3 = (uint)((ulong)param_1 >> 0x20);
  *(int *)(puVar4 + 1) = (int)(param_2 << 4);
  *(int *)((long)puVar4 + 0xc) = (int)param_1;
  *(uint *)(puVar4 + 2) =
       (uVar3 >> 4 & 0x3fffff) << 2 | ((uint)((ulong)(param_2 << 4) >> 0x20) & 0xf) << 0x18 |
       uVar3 << 0x1c;
  uVar8 = FUN_710076d0c0(uVar6);
  if ((int)uVar8 == 0) {
    plVar5 = (long *)tpidrro_el0;
    if (*plVar5 < 0) {
      uVar3 = *(uint *)(plVar5 + 1);
      plVar9 = (long *)((long)plVar5 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar9 = (long *)((long)plVar5 + 0xc);
      }
      lVar10 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar9 = plVar5 + 1;
      lVar10 = 0;
    }
    piVar1 = (int *)((long)plVar5 +
                    ((long)plVar9 +
                     ((lVar10 + (ulong)((uint)*plVar5 >> 0x10 & 0xf) * 8) - (long)plVar5) + 0xf &
                    0xfffffffffffffff0));
    piVar2 = piVar1 + 4;
    if (iVar7 == 0) {
      piVar2 = piVar1;
    }
    uVar8 = 0x5f59;
    if (((*piVar2 == 0x4f434653) && (uVar8 = (ulong)(uint)piVar2[2], piVar2[2] == 0)) &&
       (param_3 != (int *)0x0)) {
      *param_3 = piVar2[4];
    }
  }
  return uVar8;
}



// ===== FUN_7100750180 @ 7100750180 (size=148) =====

void FUN_7100750180(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (*(int *)((long)param_1 + 4) == 0) {
    iVar1 = *(int *)(param_1 + 1);
    if (iVar1 == 0) goto LAB_71007501b4;
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 0x800000004;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 2) = 2;
    *(int *)((long)puVar2 + 0x14) = iVar1;
    FUN_710076d0c0(*(undefined4 *)param_1);
    iVar1 = *(int *)((long)param_1 + 4);
  }
  else {
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 2;
    FUN_710076d0c0(*(undefined4 *)param_1);
    iVar1 = *(int *)((long)param_1 + 4);
  }
  if (iVar1 != 0) {
    FUN_710076d060(*(undefined4 *)param_1);
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
LAB_71007501b4:
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// ===== FUN_7100750220 @ 7100750220 (size=244) =====

ulong FUN_7100750220(undefined4 *param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar5 = (undefined8 *)tpidrro_el0;
  iVar3 = param_1[2];
  if (iVar3 == 0) {
    puVar9 = puVar5 + 2;
    *puVar5 = 0xa00000004;
  }
  else {
    puVar9 = puVar5 + 4;
    puVar5[3] = 0;
    *puVar5 = 0xe00000004;
    *(undefined4 *)(puVar5 + 2) = 0x180001;
    *(int *)((long)puVar5 + 0x14) = iVar3;
  }
  puVar9[2] = param_2;
  *puVar9 = 0x49434653;
  puVar9[1] = 0;
  uVar7 = FUN_710076d0c0(*param_1);
  if ((int)uVar7 == 0) {
    plVar6 = (long *)tpidrro_el0;
    if (*plVar6 < 0) {
      uVar4 = *(uint *)(plVar6 + 1);
      plVar8 = (long *)((long)plVar6 + 0x14);
      if ((uVar4 & 1) == 0) {
        plVar8 = (long *)((long)plVar6 + 0xc);
      }
      lVar10 = (((ulong)(uVar4 >> 1) & 0xf) + ((ulong)(uVar4 >> 5) & 0xf)) * 4;
    }
    else {
      plVar8 = plVar6 + 1;
      lVar10 = 0;
    }
    piVar1 = (int *)((long)plVar6 +
                    ((long)plVar8 +
                     ((lVar10 + (ulong)((uint)*plVar6 >> 0x10 & 0xf) * 8) - (long)plVar6) + 0xf &
                    0xfffffffffffffff0));
    piVar2 = piVar1 + 4;
    if (iVar3 == 0) {
      piVar2 = piVar1;
    }
    uVar7 = 0x5f59;
    if (*piVar2 == 0x4f434653) {
      uVar7 = (ulong)(uint)piVar2[2];
    }
  }
  return uVar7;
}



// ===== FUN_7100750320 @ 7100750320 (size=292) =====

ulong FUN_7100750320(undefined4 *param_1,undefined8 param_2,ulong param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  
  lVar10 = (param_3 & 0xffffffff) << 4;
  puVar6 = (undefined8 *)tpidrro_el0;
  uVar3 = *param_1;
  iVar4 = param_1[2];
  if (iVar4 == 0) {
    puVar11 = puVar6 + 4;
    *puVar6 = 0x800100004;
  }
  else {
    puVar6[5] = 0;
    puVar11 = puVar6 + 6;
    *puVar6 = 0xc00100004;
    *(undefined4 *)(puVar6 + 4) = 0x100001;
    *(int *)((long)puVar6 + 0x24) = iVar4;
  }
  *puVar11 = 0x49434653;
  puVar11[1] = 1;
  uVar5 = (uint)((ulong)param_2 >> 0x20);
  *(int *)(puVar6 + 1) = (int)lVar10;
  *(int *)((long)puVar6 + 0xc) = (int)param_2;
  *(uint *)(puVar6 + 2) =
       (int)((ulong)lVar10 >> 0x20) << 0x18 | (uVar5 >> 4 & 0x3fffff) << 2 | uVar5 << 0x1c;
  uVar8 = FUN_710076d0c0(uVar3);
  if ((int)uVar8 == 0) {
    plVar7 = (long *)tpidrro_el0;
    if (*plVar7 < 0) {
      uVar5 = *(uint *)(plVar7 + 1);
      plVar9 = (long *)((long)plVar7 + 0x14);
      if ((uVar5 & 1) == 0) {
        plVar9 = (long *)((long)plVar7 + 0xc);
      }
      lVar10 = (((ulong)(uVar5 >> 1) & 0xf) + ((ulong)(uVar5 >> 5) & 0xf)) * 4;
    }
    else {
      plVar9 = plVar7 + 1;
      lVar10 = 0;
    }
    piVar1 = (int *)((long)plVar7 +
                    ((long)plVar9 +
                     ((lVar10 + (ulong)((uint)*plVar7 >> 0x10 & 0xf) * 8) - (long)plVar7) + 0xf &
                    0xfffffffffffffff0));
    piVar2 = piVar1 + 4;
    if (iVar4 == 0) {
      piVar2 = piVar1;
    }
    uVar8 = 0x5f59;
    if (*piVar2 == 0x4f434653) {
      uVar8 = (ulong)(uint)piVar2[2];
    }
  }
  return uVar8;
}



// ===== FUN_7100750450 @ 7100750450 (size=248) =====

ulong FUN_7100750450(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  
  puVar6 = (undefined8 *)tpidrro_el0;
  uVar3 = *param_1;
  iVar4 = param_1[2];
  if (iVar4 == 0) {
    puVar10 = puVar6 + 2;
    *puVar6 = 0x800000004;
  }
  else {
    puVar10 = puVar6 + 4;
    puVar6[3] = 0;
    *puVar6 = 0xc00000004;
    *(undefined4 *)(puVar6 + 2) = 0x100001;
    *(int *)((long)puVar6 + 0x14) = iVar4;
  }
  *puVar10 = 0x49434653;
  puVar10[1] = 2;
  uVar8 = FUN_710076d0c0(uVar3);
  if ((int)uVar8 == 0) {
    plVar7 = (long *)tpidrro_el0;
    if (*plVar7 < 0) {
      uVar5 = *(uint *)(plVar7 + 1);
      plVar9 = (long *)((long)plVar7 + 0x14);
      if ((uVar5 & 1) == 0) {
        plVar9 = (long *)((long)plVar7 + 0xc);
      }
      lVar11 = (((ulong)(uVar5 >> 1) & 0xf) + ((ulong)(uVar5 >> 5) & 0xf)) * 4;
    }
    else {
      plVar9 = plVar7 + 1;
      lVar11 = 0;
    }
    piVar1 = (int *)((long)plVar7 +
                    ((long)plVar9 +
                     ((lVar11 + (ulong)((uint)*plVar7 >> 0x10 & 0xf) * 8) - (long)plVar7) + 0xf &
                    0xfffffffffffffff0));
    piVar2 = piVar1 + 4;
    if (iVar4 == 0) {
      piVar2 = piVar1;
    }
    uVar8 = 0x5f59;
    if (*piVar2 == 0x4f434653) {
      uVar8 = (ulong)(uint)piVar2[2];
    }
  }
  return uVar8;
}



// ===== FUN_7100750720 @ 7100750720 (size=208) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100750720(undefined1 param_1,undefined8 *param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0x900000004;
  *(undefined1 *)(plVar2 + 4) = param_1;
  plVar2[2] = 0x49434653;
  plVar2[3] = 0;
  uVar3 = FUN_710076d0c0(_DAT_7100d16e48);
  if ((int)uVar3 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar4 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar4 = (long *)((long)plVar2 + 0xc);
      }
      lVar6 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar4 = plVar2 + 1;
      lVar6 = 0;
    }
    uVar5 = (long)plVar4 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar3 = 0x5f59;
    if (((*(int *)((long)plVar2 + uVar5) == 0x4f434653) &&
        (uVar1 = *(uint *)((long)plVar2 + uVar5 + 8), uVar3 = (ulong)uVar1, uVar1 == 0)) &&
       (param_2 != (undefined8 *)0x0)) {
      *param_2 = *(undefined8 *)((long)plVar2 + uVar5 + 0x10);
    }
  }
  return uVar3;
}



// ===== FUN_71007507f0 @ 71007507f0 (size=252) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_71007507f0(undefined1 param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0x901000004;
  *(int *)(plVar2 + 1) = (int)(param_4 << 5);
  *(int *)((long)plVar2 + 0xc) = (int)param_3;
  plVar2[4] = 0x49434653;
  plVar2[5] = 1;
  uVar1 = (uint)((ulong)param_3 >> 0x20);
  *(undefined1 *)(plVar2 + 6) = param_1;
  uVar3 = _DAT_7100d16e48;
  *(uint *)(plVar2 + 2) =
       (uVar1 >> 4 & 0x3fffff) << 2 | ((uint)((ulong)(param_4 << 5) >> 0x20) & 0xf) << 0x18 |
       uVar1 << 0x1c;
  uVar4 = FUN_710076d0c0(uVar3);
  if ((int)uVar4 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar5 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar5 = (long *)((long)plVar2 + 0xc);
      }
      lVar7 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar5 = plVar2 + 1;
      lVar7 = 0;
    }
    uVar6 = (long)plVar5 + ((lVar7 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar4 = 0x5f59;
    if (((*(int *)((long)plVar2 + uVar6) == 0x4f434653) &&
        (uVar1 = *(uint *)((long)plVar2 + uVar6 + 8), uVar4 = (ulong)uVar1, uVar1 == 0)) &&
       (param_2 != (undefined8 *)0x0)) {
      *param_2 = *(undefined8 *)((long)plVar2 + uVar6 + 0x10);
    }
  }
  return uVar4;
}



// ===== FUN_71007508f0 @ 71007508f0 (size=260) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_71007508f0(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0xe01000004;
  *(int *)(plVar2 + 1) = (int)param_4;
  *(int *)((long)plVar2 + 0xc) = (int)param_3;
  plVar2[4] = 0x49434653;
  plVar2[5] = 2;
  uVar1 = (uint)((ulong)param_3 >> 0x20);
  *(uint *)(plVar2 + 2) =
       (uVar1 >> 4 & 0x3fffff) << 2 | ((uint)((ulong)param_4 >> 0x20) & 0xf) << 0x18 | uVar1 << 0x1c
  ;
  lVar7 = param_1[1];
  lVar3 = param_1[2];
  plVar2[6] = *param_1;
  plVar2[7] = lVar7;
  plVar2[8] = lVar3;
  uVar4 = FUN_710076d0c0(_DAT_7100d16e48);
  if ((int)uVar4 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar5 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar5 = (long *)((long)plVar2 + 0xc);
      }
      lVar7 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar5 = plVar2 + 1;
      lVar7 = 0;
    }
    uVar6 = (long)plVar5 + ((lVar7 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar4 = 0x5f59;
    if (((*(int *)((long)plVar2 + uVar6) == 0x4f434653) &&
        (uVar1 = *(uint *)((long)plVar2 + uVar6 + 8), uVar4 = (ulong)uVar1, uVar1 == 0)) &&
       (param_2 != (undefined8 *)0x0)) {
      *param_2 = *(undefined8 *)((long)plVar2 + uVar6 + 0x10);
    }
  }
  return uVar4;
}



// ===== FUN_7100750a00 @ 7100750a00 (size=204) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100750a00(long *param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0xe00000004;
  plVar2[2] = 0x49434653;
  plVar2[3] = 3;
  lVar7 = param_1[1];
  lVar3 = param_1[2];
  plVar2[4] = *param_1;
  plVar2[5] = lVar7;
  plVar2[6] = lVar3;
  uVar4 = FUN_710076d0c0(_DAT_7100d16e48);
  if ((int)uVar4 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar5 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar5 = (long *)((long)plVar2 + 0xc);
      }
      lVar7 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar5 = plVar2 + 1;
      lVar7 = 0;
    }
    uVar6 = (long)plVar5 + ((lVar7 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar4 = 0x5f59;
    if (*(int *)((long)plVar2 + uVar6) == 0x4f434653) {
      uVar4 = (ulong)*(uint *)((long)plVar2 + uVar6 + 8);
    }
  }
  return uVar4;
}



// ===== FUN_7100750ad0 @ 7100750ad0 (size=260) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100750ad0(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0xe01000004;
  *(int *)(plVar2 + 1) = (int)param_4;
  *(int *)((long)plVar2 + 0xc) = (int)param_3;
  plVar2[4] = 0x49434653;
  plVar2[5] = 8;
  uVar1 = (uint)((ulong)param_3 >> 0x20);
  *(uint *)(plVar2 + 2) =
       (uVar1 >> 4 & 0x3fffff) << 2 | ((uint)((ulong)param_4 >> 0x20) & 0xf) << 0x18 | uVar1 << 0x1c
  ;
  lVar7 = param_1[1];
  lVar3 = param_1[2];
  plVar2[6] = *param_1;
  plVar2[7] = lVar7;
  plVar2[8] = lVar3;
  uVar4 = FUN_710076d0c0(_DAT_7100d16e48);
  if ((int)uVar4 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar5 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar5 = (long *)((long)plVar2 + 0xc);
      }
      lVar7 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar5 = plVar2 + 1;
      lVar7 = 0;
    }
    uVar6 = (long)plVar5 + ((lVar7 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar4 = 0x5f59;
    if (((*(int *)((long)plVar2 + uVar6) == 0x4f434653) &&
        (uVar1 = *(uint *)((long)plVar2 + uVar6 + 8), uVar4 = (ulong)uVar1, uVar1 == 0)) &&
       (param_2 != (undefined8 *)0x0)) {
      *param_2 = *(undefined8 *)((long)plVar2 + uVar6 + 0x10);
    }
  }
  return uVar4;
}



// ===== FUN_7100750be0 @ 7100750be0 (size=532) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100750be0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined2 uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar3 = FUN_7100769b90();
  if (uVar3 < 0x40000) {
    return 0x4b59;
  }
  if (_DAT_7100d16e38 == 0) {
    lVar4 = FUN_710074cf70();
    uVar2 = _DAT_7100d16e54;
    plVar1 = (long *)tpidrro_el0;
    *plVar1 = -0x7ffffff5fffffffc;
    plVar1[6] = lVar4;
    *(undefined4 *)(plVar1 + 1) = 1;
    plVar1[4] = 0x49434653;
    plVar1[5] = 0xea62;
    uVar5 = FUN_710076d0c0(_DAT_7100d16e48);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if (*plVar1 < 0) {
      uVar3 = *(uint *)(plVar1 + 1);
      lVar4 = (long)plVar1 + 0x14;
      if ((uVar3 & 1) == 0) {
        lVar4 = (long)plVar1 + 0xc;
      }
      plVar7 = (long *)(lVar4 + ((ulong)(uVar3 >> 1) & 0xf) * 4);
      lVar4 = ((ulong)(uVar3 >> 5) & 0xf) << 2;
    }
    else {
      plVar7 = plVar1 + 1;
      lVar4 = 0;
    }
    uVar5 = (long)plVar7 + ((lVar4 + (ulong)((uint)*plVar1 >> 0x10 & 0xf) * 8) - (long)plVar1) + 0xf
            & 0xfffffffffffffff0;
    if (*(int *)((long)plVar1 + uVar5) != 0x4f434653) {
      return 0x5f59;
    }
    uVar3 = *(uint *)((long)plVar1 + uVar5 + 8);
    if (uVar3 != 0) {
      return (ulong)uVar3;
    }
    _DAT_7100d16e38 = (int)*plVar7;
    if (_DAT_7100d16e38 == 0) {
      _DAT_7100d16e38 = 0;
      _DAT_7100d16e3c = 0;
      _DAT_7100d16e40 = 0;
      _DAT_7100d16e44 = 0;
      uRam0000007100d16e46 = 0;
    }
    else {
      _DAT_7100d16e3c = 1;
      _DAT_7100d16e40 = 0;
      _DAT_7100d16e44 = uVar2;
    }
  }
  plVar1 = (long *)tpidrro_el0;
  *plVar1 = 0xe00000004;
  plVar1[2] = 0x49434653;
  plVar1[3] = 0x7d1;
  lVar4 = param_2[1];
  lVar6 = param_2[2];
  plVar1[4] = *param_2;
  plVar1[5] = lVar4;
  plVar1[6] = lVar6;
  uVar5 = FUN_710076d0c0();
  if ((int)uVar5 == 0) {
    if (*plVar1 < 0) {
      uVar3 = *(uint *)(plVar1 + 1);
      plVar7 = (long *)((long)plVar1 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar7 = (long *)((long)plVar1 + 0xc);
      }
      lVar4 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar7 = plVar1 + 1;
      lVar4 = 0;
    }
    uVar8 = (long)plVar7 + ((lVar4 + (ulong)((uint)*plVar1 >> 0x10 & 0xf) * 8) - (long)plVar1) + 0xf
            & 0xfffffffffffffff0;
    if (*(int *)((long)plVar1 + uVar8) != 0x4f434653) {
      return 0x5f59;
    }
    uVar3 = *(uint *)((long)plVar1 + uVar8 + 8);
    uVar5 = (ulong)uVar3;
    if ((uVar3 == 0) && (param_1 != (undefined8 *)0x0)) {
      *param_1 = *(undefined8 *)((long)plVar1 + uVar8 + 0x10);
    }
  }
  return uVar5;
}



// ===== FUN_7100750e00 @ 7100750e00 (size=248) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100750e00(long param_1)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  uVar3 = FUN_7100769b90();
  iVar2 = _DAT_7100d16e38;
  if (0x3ffff < uVar3) {
    uVar4 = 0x1159;
    if (_DAT_7100d16e38 != 0) {
      plVar1 = (long *)tpidrro_el0;
      *plVar1 = 0xa00000004;
      plVar1[4] = param_1;
      plVar1[2] = 0x49434653;
      plVar1[3] = 0x7d2;
      uVar4 = FUN_710076d0c0(iVar2);
      if ((int)uVar4 == 0) {
        if (*plVar1 < 0) {
          uVar3 = *(uint *)(plVar1 + 1);
          plVar5 = (long *)((long)plVar1 + 0x14);
          if ((uVar3 & 1) == 0) {
            plVar5 = (long *)((long)plVar1 + 0xc);
          }
          lVar7 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
        }
        else {
          plVar5 = plVar1 + 1;
          lVar7 = 0;
        }
        uVar6 = (long)plVar5 +
                ((lVar7 + (ulong)((uint)*plVar1 >> 0x10 & 0xf) * 8) - (long)plVar1) + 0xf &
                0xfffffffffffffff0;
        uVar4 = 0x5f59;
        if (*(int *)((long)plVar1 + uVar6) == 0x4f434653) {
          uVar4 = (ulong)*(uint *)((long)plVar1 + uVar6 + 8);
        }
      }
    }
    return uVar4;
  }
  return 0x4b59;
}



// ===== FUN_7100750f00 @ 7100750f00 (size=268) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100750f00(long param_1,undefined8 *param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  uVar3 = FUN_7100769b90();
  iVar2 = _DAT_7100d16e38;
  if (0x3ffff < uVar3) {
    uVar4 = 0x1159;
    if (_DAT_7100d16e38 != 0) {
      plVar1 = (long *)tpidrro_el0;
      *plVar1 = 0xa00000004;
      plVar1[4] = param_1;
      plVar1[2] = 0x49434653;
      plVar1[3] = 0x7d3;
      uVar4 = FUN_710076d0c0(iVar2);
      if ((int)uVar4 == 0) {
        if (*plVar1 < 0) {
          uVar3 = *(uint *)(plVar1 + 1);
          plVar5 = (long *)((long)plVar1 + 0x14);
          if ((uVar3 & 1) == 0) {
            plVar5 = (long *)((long)plVar1 + 0xc);
          }
          lVar7 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
        }
        else {
          plVar5 = plVar1 + 1;
          lVar7 = 0;
        }
        uVar6 = (long)plVar5 +
                ((lVar7 + (ulong)((uint)*plVar1 >> 0x10 & 0xf) * 8) - (long)plVar1) + 0xf &
                0xfffffffffffffff0;
        uVar4 = 0x5f59;
        if (((*(int *)((long)plVar1 + uVar6) == 0x4f434653) &&
            (uVar3 = *(uint *)((long)plVar1 + uVar6 + 8), uVar4 = (ulong)uVar3, uVar3 == 0)) &&
           (param_2 != (undefined8 *)0x0)) {
          *param_2 = *(undefined8 *)((long)plVar1 + uVar6 + 0x10);
        }
      }
    }
    return uVar4;
  }
  return 0x4b59;
}



// ===== FUN_7100751010 @ 7100751010 (size=340) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100751010(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 *param_5)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  uVar3 = FUN_7100769b90();
  iVar2 = _DAT_7100d16e38;
  if (0x3ffff < uVar3) {
    uVar4 = 0x1159;
    if (_DAT_7100d16e38 != 0) {
      plVar1 = (long *)tpidrro_el0;
      *plVar1 = 0xc01000004;
      *(int *)(plVar1 + 1) = (int)param_4;
      *(int *)((long)plVar1 + 0xc) = (int)param_3;
      plVar1[4] = 0x49434653;
      plVar1[5] = 0x7d4;
      uVar3 = (uint)((ulong)param_3 >> 0x20);
      plVar1[6] = param_1;
      plVar1[7] = param_2;
      *(uint *)(plVar1 + 2) =
           (uVar3 >> 4 & 0x3fffff) << 2 | ((uint)((ulong)param_4 >> 0x20) & 0xf) << 0x18 |
           uVar3 << 0x1c;
      uVar4 = FUN_710076d0c0(iVar2);
      if ((int)uVar4 == 0) {
        if (*plVar1 < 0) {
          uVar3 = *(uint *)(plVar1 + 1);
          plVar5 = (long *)((long)plVar1 + 0x14);
          if ((uVar3 & 1) == 0) {
            plVar5 = (long *)((long)plVar1 + 0xc);
          }
          lVar7 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
        }
        else {
          plVar5 = plVar1 + 1;
          lVar7 = 0;
        }
        uVar6 = (long)plVar5 +
                ((lVar7 + (ulong)((uint)*plVar1 >> 0x10 & 0xf) * 8) - (long)plVar1) + 0xf &
                0xfffffffffffffff0;
        uVar4 = 0x5f59;
        if (((*(int *)((long)plVar1 + uVar6) == 0x4f434653) &&
            (uVar3 = *(uint *)((long)plVar1 + uVar6 + 8), uVar4 = (ulong)uVar3, uVar3 == 0)) &&
           (param_5 != (undefined8 *)0x0)) {
          *param_5 = *(undefined8 *)((long)plVar1 + uVar6 + 0x10);
        }
      }
    }
    return uVar4;
  }
  return 0x4b59;
}



// ===== FUN_7100751170 @ 7100751170 (size=120) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_7100751170(void)

{
  undefined8 *puVar1;
  
  if (_DAT_7100d16e64 == 0) {
    _DAT_7100d16e60 = 0;
    _DAT_7100d16e68 = 0;
    return;
  }
  puVar1 = (undefined8 *)tpidrro_el0;
  *puVar1 = 2;
  FUN_710076d0c0(_DAT_7100d16e60 & 0xffffffff);
  if (_DAT_7100d16e64 == 0) {
    _DAT_7100d16e60 = 0;
    _DAT_7100d16e68 = 0;
    return;
  }
  FUN_710076d060(_DAT_7100d16e60 & 0xffffffff);
  _DAT_7100d16e60 = 0;
  _DAT_7100d16e68 = 0;
  return;
}



// ===== FUN_71007511f0 @ 71007511f0 (size=156) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_71007511f0(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = 0;
  FUN_7100749670(0x7100d16e58);
  iVar1 = _DAT_7100d16e5c + 1;
  bVar2 = _DAT_7100d16e5c == 0;
  _DAT_7100d16e5c = iVar1;
  if (bVar2) {
    iVar3 = FUN_710075e590(&DAT_7100d16e60,0x676e727363);
    if (iVar3 != 0) {
      FUN_7100751170();
      _DAT_7100d16e5c = _DAT_7100d16e5c + -1;
      FUN_7100749740(0x7100d16e58);
      return iVar3;
    }
  }
  FUN_7100749740(0x7100d16e58);
  return iVar3;
}



// ===== FUN_7100751290 @ 7100751290 (size=72) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100751290(void)

{
  FUN_7100749670();
  if (_DAT_7100d16e5c != 0) {
    _DAT_7100d16e5c = _DAT_7100d16e5c + -1;
    if (_DAT_7100d16e5c == 0) {
      FUN_7100751170();
    }
  }
  FUN_7100749740(0x7100d16e58);
  return;
}



// ===== FUN_71007512e0 @ 71007512e0 (size=220) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_71007512e0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0x801000004;
  *(int *)(plVar2 + 1) = (int)param_2;
  *(int *)((long)plVar2 + 0xc) = (int)param_1;
  plVar2[4] = 0x49434653;
  plVar2[5] = 0;
  uVar1 = (uint)((ulong)param_1 >> 0x20);
  *(uint *)(plVar2 + 2) =
       (uVar1 >> 4 & 0x3fffff) << 2 | ((uint)((ulong)param_2 >> 0x20) & 0xf) << 0x18 | uVar1 << 0x1c
  ;
  uVar3 = FUN_710076d0c0(_DAT_7100d16e60);
  if ((int)uVar3 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar4 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar4 = (long *)((long)plVar2 + 0xc);
      }
      lVar6 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar4 = plVar2 + 1;
      lVar6 = 0;
    }
    uVar5 = (long)plVar4 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar3 = 0x5f59;
    if (*(int *)((long)plVar2 + uVar5) == 0x4f434653) {
      uVar3 = (ulong)*(uint *)((long)plVar2 + uVar5 + 8);
    }
  }
  return uVar3;
}



// ===== FUN_71007513c0 @ 71007513c0 (size=180) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71007513c0(void)

{
  undefined8 *puVar1;
  int iVar2;
  
  FUN_710076d5b0(0x7100d16e80);
  if (_DAT_7100d16edc == 0) {
    iVar2 = _DAT_7100d16ee0;
    if (_DAT_7100d16ee0 == 0) {
      _DAT_7100d16ed8 = 0;
      _DAT_7100d16ee0 = 0;
      return;
    }
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 0x800000004;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 2) = 2;
    *(int *)((long)puVar1 + 0x14) = iVar2;
    FUN_710076d0c0(_DAT_7100d16ed8 & 0xffffffff);
  }
  else {
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 2;
    FUN_710076d0c0(_DAT_7100d16ed8 & 0xffffffff);
  }
  if (_DAT_7100d16edc == 0) {
    _DAT_7100d16ed8 = 0;
    _DAT_7100d16ee0 = 0;
    return;
  }
  FUN_710076d060(_DAT_7100d16ed8 & 0xffffffff);
  _DAT_7100d16ed8 = 0;
  _DAT_7100d16ee0 = 0;
  return;
}



// ===== FUN_7100751480 @ 7100751480 (size=448) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100751480(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  long *plVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined4 *puVar12;
  long *plVar13;
  undefined2 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [12];
  
  iVar7 = *param_1;
  if (iVar7 == _DAT_7100d16ed8) {
    uVar9 = FUN_710076d640(0x7100d16e80);
    iVar17 = (int)uVar9;
    uVar6 = 0xc;
    auVar18 = FUN_710076d158(uVar9,*(undefined4 *)((long)iVar17 * 4 + 0x7100d16e80));
    iVar10 = auVar18._8_4_;
    iVar15 = *(int *)(auVar18._0_8_ + 0x2e7e4);
    iVar7 = *param_1;
    iVar16 = param_1[2];
    puVar11 = (undefined2 *)tpidrro_el0;
  }
  else {
    iVar16 = param_1[2];
    iVar17 = -1;
    auVar18 = FUN_710076d158(_DAT_7100d16ed8,0);
    iVar10 = auVar18._8_4_;
    iVar15 = *(int *)(auVar18._0_8_ + 0x2e7e4);
    puVar11 = (undefined2 *)tpidrro_el0;
    uVar6 = 0xc;
    if (iVar16 == 0) {
      uVar6 = 8;
    }
  }
  bVar5 = iVar15 != 0;
  puVar11[1] = 0;
  uVar14 = 4;
  if (bVar5) {
    uVar14 = 6;
  }
  *puVar11 = uVar14;
  *(undefined4 *)(puVar11 + 2) = uVar6;
  if (iVar16 == 0) {
    puVar12 = (undefined4 *)(puVar11 + 8);
  }
  else {
    *(undefined4 *)(puVar11 + 0xc) = 0;
    *(int *)(puVar11 + 0xe) = iVar15;
    puVar12 = (undefined4 *)(puVar11 + 0x10);
    iVar15 = 0;
    *(undefined4 *)(puVar11 + 8) = 0x100001;
    *(int *)(puVar11 + 10) = iVar16;
  }
  puVar12[2] = param_2;
  puVar12[3] = iVar15;
  *puVar12 = 0x49434653;
  puVar12[1] = (uint)bVar5;
  if (iVar10 != 0) {
    iVar7 = iVar10;
  }
  iVar7 = FUN_710076d0c0(iVar7);
  if (iVar7 == 0) {
    plVar4 = (long *)tpidrro_el0;
    if (*plVar4 < 0) {
      uVar3 = *(uint *)(plVar4 + 1);
      plVar13 = (long *)((long)plVar4 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar13 = (long *)((long)plVar4 + 0xc);
      }
      lVar8 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar13 = plVar4 + 1;
      lVar8 = 0;
    }
    piVar1 = (int *)((long)plVar4 +
                    ((long)plVar13 +
                     ((lVar8 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
                    0xfffffffffffffff0));
    iVar7 = 0x5f59;
    piVar2 = piVar1 + 4;
    if (iVar16 == 0) {
      piVar2 = piVar1;
    }
    if (*piVar2 == 0x4f434653) {
      iVar7 = piVar2[2];
    }
  }
  if (iVar17 != -1) {
    FUN_710076d6f0(0x7100d16e80,iVar17);
  }
  return iVar7;
}



// ===== FUN_7100751640 @ 7100751640 (size=480) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100751640(int *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  long *plVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  long *plVar12;
  undefined2 *puVar13;
  undefined2 uVar14;
  int iVar15;
  int extraout_w8;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [12];
  
  if (*param_1 == _DAT_7100d16ed8) {
    uVar10 = FUN_710076d640(0x7100d16e80);
    iVar17 = (int)uVar10;
    uVar6 = 0xc;
    auVar18 = FUN_710076d158(uVar10,*(undefined4 *)((long)iVar17 * 4 + 0x7100d16e80));
    iVar11 = auVar18._8_4_;
    iVar7 = *param_1;
    iVar16 = param_1[2];
    puVar13 = (undefined2 *)tpidrro_el0;
    iVar15 = *(int *)(auVar18._0_8_ + 0x2e7e4);
  }
  else {
    iVar16 = param_1[2];
    iVar17 = -1;
    auVar18 = FUN_710076d158(_DAT_7100d16ed8,0);
    iVar11 = auVar18._8_4_;
    iVar15 = *(int *)(auVar18._0_8_ + 0x2e7e4);
    puVar13 = (undefined2 *)tpidrro_el0;
    uVar6 = 0xc;
    iVar7 = extraout_w8;
    if (iVar16 == 0) {
      uVar6 = 8;
    }
  }
  bVar5 = iVar15 != 0;
  *(undefined4 *)(puVar13 + 2) = uVar6;
  uVar14 = 4;
  if (bVar5) {
    uVar14 = 6;
  }
  *puVar13 = uVar14;
  puVar13[1] = 1;
  puVar8 = (undefined4 *)(puVar13 + 8);
  if (iVar16 != 0) {
    *(undefined4 *)(puVar13 + 0xc) = 0;
    *(int *)(puVar13 + 0xe) = iVar15;
    iVar15 = 0;
    *(undefined4 *)(puVar13 + 8) = 0x100001;
    *(int *)(puVar13 + 10) = iVar16;
    puVar8 = (undefined4 *)(puVar13 + 0x10);
  }
  puVar8[2] = param_3;
  puVar8[3] = iVar15;
  uVar3 = (uint)((ulong)param_2 >> 0x20);
  *puVar8 = 0x49434653;
  puVar8[1] = (uint)bVar5;
  if (iVar11 != 0) {
    iVar7 = iVar11;
  }
  *(uint *)(puVar13 + 4) = (uVar3 >> 4 & 0x3f) << 6 | 0x3010000 | (uVar3 & 0xf) << 0xc;
  *(int *)(puVar13 + 6) = (int)param_2;
  iVar7 = FUN_710076d0c0(iVar7);
  if (iVar7 == 0) {
    plVar4 = (long *)tpidrro_el0;
    if (*plVar4 < 0) {
      uVar3 = *(uint *)(plVar4 + 1);
      plVar12 = (long *)((long)plVar4 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar12 = (long *)((long)plVar4 + 0xc);
      }
      lVar9 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar12 = plVar4 + 1;
      lVar9 = 0;
    }
    piVar1 = (int *)((long)plVar4 +
                    ((long)plVar12 +
                     ((lVar9 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
                    0xfffffffffffffff0));
    iVar7 = 0x5f59;
    piVar2 = piVar1 + 4;
    if (iVar16 == 0) {
      piVar2 = piVar1;
    }
    if (*piVar2 == 0x4f434653) {
      iVar7 = piVar2[2];
    }
  }
  if (iVar17 != -1) {
    FUN_710076d6f0(0x7100d16e80,iVar17);
  }
  return iVar7;
}



// ===== FUN_7100751820 @ 7100751820 (size=504) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100751820(int *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  long *plVar4;
  bool bVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined4 *puVar11;
  int iVar12;
  long *plVar13;
  undefined2 *puVar14;
  int extraout_w8;
  int extraout_w9;
  int iVar15;
  int extraout_w9_00;
  int iVar16;
  
  if (*param_1 == _DAT_7100d16ed8) {
    iVar9 = FUN_710076d640(0x7100d16e80);
    uVar7 = 0xc;
    lVar10 = FUN_710076d158();
    iVar8 = *param_1;
    iVar16 = param_1[2];
    puVar14 = (undefined2 *)tpidrro_el0;
    iVar12 = *(int *)(lVar10 + 0x2e7e4);
    iVar15 = extraout_w9_00;
  }
  else {
    iVar16 = param_1[2];
    iVar9 = -1;
    lVar10 = FUN_710076d158();
    iVar12 = *(int *)(lVar10 + 0x2e7e4);
    puVar14 = (undefined2 *)tpidrro_el0;
    uVar7 = 0xc;
    iVar15 = extraout_w9;
    iVar8 = extraout_w8;
    if (iVar16 == 0) {
      uVar7 = 8;
    }
  }
  bVar5 = iVar12 != 0;
  *(undefined4 *)(puVar14 + 2) = uVar7;
  uVar6 = 4;
  if (bVar5) {
    uVar6 = 6;
  }
  *puVar14 = uVar6;
  puVar14[1] = 2;
  puVar11 = (undefined4 *)(puVar14 + 0x10);
  if (iVar16 != 0) {
    *(undefined4 *)(puVar14 + 0x14) = 0;
    *(int *)(puVar14 + 0x16) = iVar12;
    iVar12 = 0;
    *(undefined4 *)(puVar14 + 0x10) = 0x100001;
    *(int *)(puVar14 + 0x12) = iVar16;
    puVar11 = (undefined4 *)(puVar14 + 0x18);
  }
  puVar11[2] = param_4;
  puVar11[3] = iVar12;
  *puVar11 = 0x49434653;
  puVar11[1] = (uint)bVar5;
  uVar3 = (uint)((ulong)param_2 >> 0x20);
  if (iVar15 != 0) {
    iVar8 = iVar15;
  }
  *(uint *)(puVar14 + 4) = (uVar3 >> 4 & 0x3f) << 6 | 0x3010000 | (uVar3 & 0xf) << 0xc;
  *(int *)(puVar14 + 6) = (int)param_2;
  uVar3 = (uint)((ulong)param_3 >> 0x20);
  *(uint *)(puVar14 + 8) = (uVar3 >> 4 & 0x3f) << 6 | 0x3010001 | (uVar3 & 0xf) << 0xc;
  *(int *)(puVar14 + 10) = (int)param_3;
  iVar8 = FUN_710076d0c0(iVar8);
  if (iVar8 == 0) {
    plVar4 = (long *)tpidrro_el0;
    if (*plVar4 < 0) {
      uVar3 = *(uint *)(plVar4 + 1);
      plVar13 = (long *)((long)plVar4 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar13 = (long *)((long)plVar4 + 0xc);
      }
      lVar10 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar13 = plVar4 + 1;
      lVar10 = 0;
    }
    piVar1 = (int *)((long)plVar4 +
                    ((long)plVar13 +
                     ((lVar10 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
                    0xfffffffffffffff0));
    iVar8 = 0x5f59;
    piVar2 = piVar1 + 4;
    if (iVar16 == 0) {
      piVar2 = piVar1;
    }
    if (*piVar2 == 0x4f434653) {
      iVar8 = piVar2[2];
    }
  }
  if (iVar9 != -1) {
    FUN_710076d6f0(0x7100d16e80,iVar9);
  }
  return iVar8;
}



// ===== FUN_7100751a20 @ 7100751a20 (size=652) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100751a20(uint *param_1,undefined8 param_2,undefined4 param_3,uint *param_4,
                  undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  uint *puVar9;
  undefined2 uVar10;
  undefined4 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  undefined4 extraout_w8;
  uint *extraout_x9;
  uint *extraout_x9_00;
  ulong uVar14;
  ulong extraout_x10;
  uint uVar15;
  uint uVar16;
  undefined2 uVar17;
  
  uVar16 = *param_1;
  if (uVar16 == _DAT_7100d16ed8) {
    iVar7 = FUN_710076d640(0x7100d16e80);
    puVar12 = (undefined2 *)tpidrro_el0;
    lVar8 = FUN_710076d158(0xd);
    iVar13 = *(int *)(lVar8 + 0x2e7e4);
    uVar17 = (undefined2)extraout_x9_00[3];
    uVar16 = *extraout_x9_00;
    uVar15 = extraout_x9_00[2];
    puVar9 = extraout_x9_00;
    uVar14 = extraout_x10;
    uVar5 = extraout_w8;
  }
  else {
    lVar8 = FUN_710076d158();
    uVar15 = extraout_x9[2];
    uVar14 = 0;
    iVar7 = -1;
    iVar13 = *(int *)(lVar8 + 0x2e7e4);
    puVar12 = (undefined2 *)tpidrro_el0;
    uVar17 = (undefined2)extraout_x9[3];
    uVar5 = 0xd;
    puVar9 = extraout_x9;
    if (uVar15 == 0) {
      uVar5 = 9;
    }
  }
  bVar4 = iVar13 != 0;
  *(undefined4 *)(puVar12 + 2) = uVar5;
  uVar10 = 4;
  if (bVar4) {
    uVar10 = 6;
  }
  *puVar12 = uVar10;
  puVar11 = (undefined4 *)(puVar12 + 8);
  puVar12[1] = 1;
  if (uVar15 != 0) {
    *(undefined4 *)(puVar12 + 0xc) = 0;
    *(int *)(puVar12 + 0xe) = iVar13;
    puVar11 = (undefined4 *)(puVar12 + 0x10);
    iVar13 = 0;
    *(undefined4 *)(puVar12 + 8) = 0x140001;
    *(uint *)(puVar12 + 10) = uVar15;
  }
  puVar11[2] = param_5;
  puVar11[3] = iVar13;
  uVar2 = (uint)((ulong)param_2 >> 0x20);
  *puVar11 = 0x49434653;
  puVar11[1] = (uint)bVar4;
  *(uint *)(puVar12 + 4) = (uVar2 >> 4 & 0x3f) << 6 | 0x3010000 | (uVar2 & 0xf) << 0xc;
  *(int *)(puVar12 + 6) = (int)param_2;
  puVar11[4] = param_3;
  if ((int)uVar14 == 0) {
    uVar14 = (ulong)*puVar9;
  }
  iVar6 = FUN_710076d0c0(uVar14 & 0xffffffff);
  iVar13 = iVar6;
  if (iVar6 != 0) goto LAB_7100751b80;
  plVar3 = (long *)tpidrro_el0;
  uVar2 = (uint)*plVar3 >> 0x10 & 0xf;
  if (*plVar3 < 0) {
    uVar1 = *(uint *)(plVar3 + 1);
    lVar8 = (long)plVar3 + 0x14;
    if ((uVar1 & 1) == 0) {
      lVar8 = (long)plVar3 + 0xc;
    }
    puVar9 = (uint *)(lVar8 + ((ulong)(uVar1 >> 1) & 0xf) * 4);
    uVar14 = (long)puVar9 +
             ((((ulong)(uVar1 >> 5) & 0xf) * 4 + (ulong)uVar2 * 8) - (long)plVar3) + 0xf &
             0xfffffffffffffff0;
    lVar8 = (long)plVar3 + uVar14;
    if (uVar15 == 0) goto LAB_7100751bf8;
LAB_7100751b4c:
    if (*(int *)(lVar8 + 0x10) != 0x4f434653) {
LAB_7100751c8c:
      iVar13 = 0x5f59;
      goto LAB_7100751b80;
    }
    iVar13 = *(int *)(lVar8 + 0x18);
    if (iVar13 != 0) goto LAB_7100751b80;
    uVar15 = *(uint *)(lVar8 + 0x20);
    if (uVar15 != 0) {
      *param_4 = uVar16;
      param_4[1] = 0;
      param_4[2] = uVar15;
      *(undefined2 *)(param_4 + 3) = uVar17;
      iVar13 = iVar6;
      goto LAB_7100751b80;
    }
  }
  else {
    puVar9 = (uint *)(plVar3 + 1);
    uVar14 = (long)puVar9 + ((ulong)uVar2 * 8 - (long)plVar3) + 0xf & 0xfffffffffffffff0;
    lVar8 = (long)plVar3 + uVar14;
    if (uVar15 != 0) goto LAB_7100751b4c;
LAB_7100751bf8:
    if (*(int *)((long)plVar3 + uVar14) != 0x4f434653) goto LAB_7100751c8c;
    iVar13 = *(int *)(lVar8 + 8);
    if (iVar13 != 0) goto LAB_7100751b80;
    if (*puVar9 != 0) {
      *param_4 = *puVar9;
      *(undefined2 *)(param_4 + 3) = uVar17;
      param_4[1] = 1;
      param_4[2] = 0;
      iVar13 = iVar6;
      goto LAB_7100751b80;
    }
  }
  param_4[0] = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  param_4[3] = 0;
  iVar13 = iVar6;
LAB_7100751b80:
  if (iVar7 != -1) {
    FUN_710076d6f0(0x7100d16e80,iVar7);
  }
  return iVar13;
}



// ===== FUN_7100751cb0 @ 7100751cb0 (size=508) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100751cb0(int *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  long *plVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  undefined2 uVar12;
  long *plVar13;
  undefined2 *puVar14;
  int iVar15;
  int extraout_w8;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [12];
  
  if (*param_1 == _DAT_7100d16ed8) {
    uVar10 = FUN_710076d640(0x7100d16e80);
    iVar17 = (int)uVar10;
    uVar6 = 0xc;
    auVar18 = FUN_710076d158(uVar10,*(undefined4 *)((long)iVar17 * 4 + 0x7100d16e80));
    iVar11 = auVar18._8_4_;
    iVar7 = *param_1;
    iVar16 = param_1[2];
    puVar14 = (undefined2 *)tpidrro_el0;
    iVar15 = *(int *)(auVar18._0_8_ + 0x2e7e4);
  }
  else {
    iVar16 = param_1[2];
    iVar17 = -1;
    auVar18 = FUN_710076d158(_DAT_7100d16ed8,0);
    iVar11 = auVar18._8_4_;
    iVar15 = *(int *)(auVar18._0_8_ + 0x2e7e4);
    puVar14 = (undefined2 *)tpidrro_el0;
    uVar6 = 0xc;
    iVar7 = extraout_w8;
    if (iVar16 == 0) {
      uVar6 = 8;
    }
  }
  bVar5 = iVar15 != 0;
  *(undefined4 *)(puVar14 + 2) = uVar6;
  uVar12 = 4;
  if (bVar5) {
    uVar12 = 6;
  }
  *puVar14 = uVar12;
  puVar14[1] = 1;
  puVar8 = (undefined4 *)(puVar14 + 8);
  if (iVar16 != 0) {
    *(undefined4 *)(puVar14 + 0xc) = 0;
    *(int *)(puVar14 + 0xe) = iVar15;
    iVar15 = 0;
    *(undefined4 *)(puVar14 + 8) = 0x100001;
    *(int *)(puVar14 + 10) = iVar16;
    puVar8 = (undefined4 *)(puVar14 + 0x10);
  }
  puVar8[2] = param_4;
  puVar8[3] = iVar15;
  uVar3 = (uint)((ulong)param_2 >> 0x20);
  *puVar8 = 0x49434653;
  puVar8[1] = (uint)bVar5;
  if (iVar11 != 0) {
    iVar7 = iVar11;
  }
  *(uint *)(puVar14 + 4) = (uVar3 >> 4 & 0x3f) << 6 | 0x3010000 | (uVar3 & 0xf) << 0xc;
  *(int *)(puVar14 + 6) = (int)param_2;
  iVar7 = FUN_710076d0c0(iVar7);
  if (iVar7 == 0) {
    plVar4 = (long *)tpidrro_el0;
    if (*plVar4 < 0) {
      uVar3 = *(uint *)(plVar4 + 1);
      plVar13 = (long *)((long)plVar4 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar13 = (long *)((long)plVar4 + 0xc);
      }
      lVar9 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar13 = plVar4 + 1;
      lVar9 = 0;
    }
    piVar1 = (int *)((long)plVar4 +
                    ((long)plVar13 +
                     ((lVar9 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
                    0xfffffffffffffff0));
    iVar7 = 0x5f59;
    piVar2 = piVar1 + 4;
    if (iVar16 == 0) {
      piVar2 = piVar1;
    }
    if (((*piVar2 == 0x4f434653) && (iVar7 = piVar2[2], iVar7 == 0)) &&
       (param_3 != (undefined8 *)0x0)) {
      *param_3 = *(undefined8 *)(piVar2 + 4);
    }
  }
  if (iVar17 != -1) {
    FUN_710076d6f0(0x7100d16e80,iVar17);
  }
  return iVar7;
}



// ===== FUN_7100751eb0 @ 7100751eb0 (size=500) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100751eb0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  long *plVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  long *plVar10;
  undefined2 *puVar11;
  undefined2 uVar12;
  undefined4 *puVar13;
  ulong uVar14;
  ulong extraout_x8;
  uint *extraout_x9;
  uint *puVar15;
  uint *extraout_x9_00;
  uint uVar16;
  int iVar17;
  undefined1 auVar18 [12];
  
  if (*param_1 == _DAT_7100d16ed8) {
    uVar8 = FUN_710076d640(0x7100d16e80);
    iVar17 = (int)uVar8;
    puVar11 = (undefined2 *)tpidrro_el0;
    auVar18 = FUN_710076d158(*(undefined4 *)((long)iVar17 * 4 + 0x7100d16e80),uVar8,0xe);
    uVar9 = auVar18._8_4_;
    iVar6 = *(int *)(auVar18._0_8_ + 0x2e7e4);
    uVar16 = extraout_x9_00[2];
    uVar14 = extraout_x8;
    puVar15 = extraout_x9_00;
  }
  else {
    lVar7 = FUN_710076d158();
    uVar16 = extraout_x9[2];
    uVar14 = 0;
    iVar17 = -1;
    iVar6 = *(int *)(lVar7 + 0x2e7e4);
    puVar11 = (undefined2 *)tpidrro_el0;
    uVar9 = 0xe;
    puVar15 = extraout_x9;
    if (uVar16 == 0) {
      uVar9 = 10;
    }
  }
  bVar5 = iVar6 != 0;
  *(undefined4 *)(puVar11 + 2) = uVar9;
  uVar12 = 4;
  if (bVar5) {
    uVar12 = 6;
  }
  *puVar11 = uVar12;
  puVar11[1] = 0x100;
  puVar13 = (undefined4 *)(puVar11 + 0x10);
  if (uVar16 != 0) {
    *(undefined4 *)(puVar11 + 0x14) = 0;
    *(int *)(puVar11 + 0x16) = iVar6;
    puVar13 = (undefined4 *)(puVar11 + 0x18);
    iVar6 = 0;
    *(undefined4 *)(puVar11 + 0x10) = 0x180001;
    *(uint *)(puVar11 + 0x12) = uVar16;
  }
  puVar13[2] = param_5;
  puVar13[3] = iVar6;
  uVar3 = (uint)((ulong)param_2 >> 0x20);
  *puVar13 = 0x49434653;
  puVar13[1] = (uint)bVar5;
  *(int *)(puVar11 + 4) = (int)param_3;
  *(int *)(puVar11 + 6) = (int)param_2;
  *(uint *)(puVar11 + 8) =
       (uVar3 >> 4 & 0x3fffff) << 2 | ((uint)((ulong)param_3 >> 0x20) & 0xf) << 0x18 | uVar3 << 0x1c
  ;
  *(undefined8 *)(puVar13 + 4) = param_4;
  if ((int)uVar14 == 0) {
    uVar14 = (ulong)*puVar15;
  }
  iVar6 = FUN_710076d0c0(uVar14 & 0xffffffff);
  if (iVar6 == 0) {
    plVar4 = (long *)tpidrro_el0;
    if (*plVar4 < 0) {
      uVar3 = *(uint *)(plVar4 + 1);
      plVar10 = (long *)((long)plVar4 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar10 = (long *)((long)plVar4 + 0xc);
      }
      lVar7 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar10 = plVar4 + 1;
      lVar7 = 0;
    }
    piVar1 = (int *)((long)plVar4 +
                    ((long)plVar10 +
                     ((lVar7 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
                    0xfffffffffffffff0));
    iVar6 = 0x5f59;
    piVar2 = piVar1 + 4;
    if (uVar16 == 0) {
      piVar2 = piVar1;
    }
    if (*piVar2 == 0x4f434653) {
      iVar6 = piVar2[2];
    }
  }
  if (iVar17 != -1) {
    FUN_710076d6f0(0x7100d16e80,iVar17);
  }
  return iVar6;
}



// ===== FUN_71007520b0 @ 71007520b0 (size=248) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71007520b0(int *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (_DAT_7100d16ed8 == *param_1) {
    iVar3 = FUN_710076d640(0x7100d16e80);
    iVar1 = param_1[2];
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 0x800000004;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 2) = 2;
    *(int *)((long)puVar2 + 0x14) = iVar1;
    FUN_710076d0c0(*(undefined4 *)((long)iVar3 * 4 + 0x7100d16e80));
    FUN_710076d6f0(0x7100d16e80,iVar3);
    return;
  }
  if (param_1[1] == 0) {
    iVar1 = param_1[2];
    if (iVar1 == 0) goto LAB_71007520f4;
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 0x800000004;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 2) = 2;
    *(int *)((long)puVar2 + 0x14) = iVar1;
    FUN_710076d0c0();
    iVar1 = param_1[1];
  }
  else {
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 2;
    FUN_710076d0c0();
    iVar1 = param_1[1];
  }
  if (iVar1 != 0) {
    FUN_710076d060(*param_1);
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
LAB_71007520f4:
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// ===== FUN_71007521b0 @ 71007521b0 (size=468) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_71007521b0(int *param_1,undefined1 *param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  long *plVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  long *plVar11;
  undefined2 *puVar12;
  undefined4 *puVar13;
  undefined2 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [12];
  
  iVar7 = *param_1;
  if (iVar7 == _DAT_7100d16ed8) {
    uVar9 = FUN_710076d640(0x7100d16e80);
    iVar17 = (int)uVar9;
    uVar6 = 0xc;
    auVar18 = FUN_710076d158(uVar9,*(undefined4 *)((long)iVar17 * 4 + 0x7100d16e80));
    iVar10 = auVar18._8_4_;
    iVar15 = *(int *)(auVar18._0_8_ + 0x2e7e4);
    iVar7 = *param_1;
    iVar16 = param_1[2];
    puVar12 = (undefined2 *)tpidrro_el0;
  }
  else {
    iVar16 = param_1[2];
    iVar17 = -1;
    auVar18 = FUN_710076d158(_DAT_7100d16ed8,0);
    iVar10 = auVar18._8_4_;
    iVar15 = *(int *)(auVar18._0_8_ + 0x2e7e4);
    puVar12 = (undefined2 *)tpidrro_el0;
    uVar6 = 0xc;
    if (iVar16 == 0) {
      uVar6 = 8;
    }
  }
  bVar5 = iVar15 != 0;
  puVar12[1] = 0;
  uVar14 = 4;
  if (bVar5) {
    uVar14 = 6;
  }
  *puVar12 = uVar14;
  *(undefined4 *)(puVar12 + 2) = uVar6;
  if (iVar16 == 0) {
    puVar13 = (undefined4 *)(puVar12 + 8);
  }
  else {
    *(undefined4 *)(puVar12 + 0xc) = 0;
    *(int *)(puVar12 + 0xe) = iVar15;
    puVar13 = (undefined4 *)(puVar12 + 0x10);
    iVar15 = 0;
    *(undefined4 *)(puVar12 + 8) = 0x100001;
    *(int *)(puVar12 + 10) = iVar16;
  }
  puVar13[2] = param_3;
  puVar13[3] = iVar15;
  *puVar13 = 0x49434653;
  puVar13[1] = (uint)bVar5;
  if (iVar10 != 0) {
    iVar7 = iVar10;
  }
  iVar7 = FUN_710076d0c0(iVar7);
  if (iVar7 == 0) {
    plVar4 = (long *)tpidrro_el0;
    if (*plVar4 < 0) {
      uVar3 = *(uint *)(plVar4 + 1);
      plVar11 = (long *)((long)plVar4 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar11 = (long *)((long)plVar4 + 0xc);
      }
      lVar8 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar11 = plVar4 + 1;
      lVar8 = 0;
    }
    piVar1 = (int *)((long)plVar4 +
                    ((long)plVar11 +
                     ((lVar8 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
                    0xfffffffffffffff0));
    iVar7 = 0x5f59;
    piVar2 = piVar1 + 4;
    if (iVar16 == 0) {
      piVar2 = piVar1;
    }
    if ((*piVar2 == 0x4f434653) && (iVar7 = piVar2[2], iVar7 == 0)) {
      *param_2 = (char)piVar2[4];
    }
  }
  if (iVar17 != -1) {
    FUN_710076d6f0(0x7100d16e80,iVar17);
  }
  return iVar7;
}



// ===== FUN_7100752390 @ 7100752390 (size=380) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100752390(int *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined1 auVar14 [12];
  
  uVar9 = FUN_710076d640(0x7100d16e80);
  auVar14 = FUN_710076d158(uVar9,*(undefined4 *)((long)(int)uVar9 * 4 + 0x7100d16e80));
  uVar6 = _DAT_7100d16ee4;
  uVar5 = _DAT_7100d16ee0;
  iVar4 = _DAT_7100d16ed8;
  iVar8 = *(int *)(auVar14._0_8_ + 0x2e7e4);
  plVar3 = (long *)tpidrro_el0;
  uVar7 = 4;
  if (iVar8 != 0) {
    uVar7 = 6;
  }
  *(undefined2 *)plVar3 = uVar7;
  *(undefined2 *)((long)plVar3 + 2) = 0;
  *(undefined4 *)((long)plVar3 + 4) = 0xc;
  *(undefined4 *)(plVar3 + 3) = 0;
  *(int *)((long)plVar3 + 0x1c) = iVar8;
  *(undefined4 *)(plVar3 + 2) = 0x100001;
  *(undefined4 *)((long)plVar3 + 0x14) = uVar5;
  *(undefined4 *)(plVar3 + 5) = param_2;
  *(undefined4 *)((long)plVar3 + 0x2c) = 0;
  *(undefined4 *)(plVar3 + 4) = 0x49434653;
  *(uint *)((long)plVar3 + 0x24) = (uint)(iVar8 != 0);
  iVar8 = auVar14._8_4_;
  if (auVar14._8_4_ == 0) {
    iVar8 = iVar4;
  }
  iVar8 = FUN_710076d0c0(iVar8);
  if (iVar8 == 0) {
    if (*plVar3 < 0) {
      uVar2 = *(uint *)(plVar3 + 1);
      plVar12 = (long *)((long)plVar3 + 0x14);
      if ((uVar2 & 1) == 0) {
        plVar12 = (long *)((long)plVar3 + 0xc);
      }
      lVar10 = ((ulong)(uVar2 >> 1) & 0xf) << 2;
      lVar11 = ((ulong)(uVar2 >> 5) & 0xf) << 2;
    }
    else {
      plVar12 = plVar3 + 1;
      lVar11 = 0;
      lVar10 = 0;
    }
    uVar13 = (long)plVar12 +
             ((lVar10 + lVar11 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf &
             0xfffffffffffffff0;
    iVar8 = 0x5f59;
    if ((*(int *)((long)plVar3 + uVar13 + 0x10) == 0x4f434653) &&
       (iVar8 = *(int *)((long)plVar3 + uVar13 + 0x18), iVar8 == 0)) {
      iVar1 = *(int *)((long)plVar3 + uVar13 + 0x20);
      if (iVar1 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
      }
      else {
        *param_1 = iVar4;
        param_1[1] = 0;
        param_1[2] = iVar1;
        *(undefined2 *)(param_1 + 3) = uVar6;
      }
    }
  }
  FUN_710076d6f0(0x7100d16e80,uVar9 & 0xffffffff);
  return iVar8;
}



// ===== FUN_7100752510 @ 7100752510 (size=760) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100752510(void)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  long *plVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  
  FUN_7100749670(0x7100d16e70);
  iVar6 = _DAT_7100d16e74 + 1;
  bVar1 = _DAT_7100d16e74 != 0;
  _DAT_7100d16e74 = iVar6;
  if (bVar1) goto LAB_7100752540;
  iVar6 = FUN_710075e590(&DAT_7100d16ed8,0x7672732d707366);
  uVar5 = _DAT_7100d16ed8;
  if (iVar6 != 0) goto LAB_7100752758;
  if (_DAT_7100d16edc == 0) {
    plVar4 = (long *)tpidrro_el0;
    *plVar4 = 0x900000005;
    *(undefined4 *)(plVar4 + 4) = 0;
    plVar4[2] = 0x49434653;
    plVar4[3] = 4;
    iVar6 = FUN_710076d0c0(uVar5);
    if (iVar6 != 0) goto LAB_7100752758;
    if (*plVar4 < 0) {
      uVar3 = *(uint *)(plVar4 + 1);
      lVar9 = (long)plVar4 + 0x14;
      if ((uVar3 & 1) == 0) {
        lVar9 = (long)plVar4 + 0xc;
      }
      plVar8 = (long *)(lVar9 + ((ulong)(uVar3 >> 1) & 0xf) * 4);
      lVar9 = ((ulong)(uVar3 >> 5) & 0xf) << 2;
    }
    else {
      plVar8 = plVar4 + 1;
      lVar9 = 0;
    }
    uVar7 = (long)plVar8 + ((lVar9 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf
            & 0xfffffffffffffff0;
    if (*(int *)((long)plVar4 + uVar7) == 0x4f434653) {
      iVar6 = *(int *)((long)plVar4 + uVar7 + 8);
      if (iVar6 != 0) goto LAB_7100752758;
      _DAT_7100d16ed8 = (undefined4)*plVar8;
      _DAT_7100d16edc = 1;
      goto LAB_7100752620;
    }
  }
  else {
LAB_7100752620:
    uVar5 = _DAT_7100d16ed8;
    plVar4 = (long *)tpidrro_el0;
    *plVar4 = 0x800000005;
    plVar4[2] = 0x49434653;
    plVar4[3] = 0;
    iVar6 = FUN_710076d0c0(uVar5);
    uVar5 = _DAT_7100d16ed8;
    if (iVar6 != 0) goto LAB_7100752758;
    if (*plVar4 < 0) {
      uVar3 = *(uint *)(plVar4 + 1);
      plVar8 = (long *)((long)plVar4 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar8 = (long *)((long)plVar4 + 0xc);
      }
      lVar9 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar8 = plVar4 + 1;
      lVar9 = 0;
    }
    uVar7 = (long)plVar8 + ((lVar9 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf
            & 0xfffffffffffffff0;
    if (*(int *)((long)plVar4 + uVar7) == 0x4f434653) {
      iVar6 = *(int *)((long)plVar4 + uVar7 + 8);
      if (iVar6 != 0) goto LAB_7100752758;
      uVar2 = *(undefined4 *)((long)plVar4 + uVar7 + 0x10);
      plVar4 = (long *)tpidrro_el0;
      _DAT_7100d16ee0 = uVar2;
      *plVar4 = -0x7ffffff1fffffffc;
      *(undefined4 *)(plVar4 + 1) = 1;
      *(undefined4 *)(plVar4 + 4) = 0x180001;
      *(undefined4 *)((long)plVar4 + 0x24) = uVar2;
      plVar4[5] = 0;
      plVar4[6] = 0x49434653;
      plVar4[7] = 1;
      plVar4[8] = 0;
      iVar6 = FUN_710076d0c0(uVar5);
      if (iVar6 != 0) goto LAB_7100752758;
      if (*plVar4 < 0) {
        uVar3 = *(uint *)(plVar4 + 1);
        plVar8 = (long *)((long)plVar4 + 0x14);
        if ((uVar3 & 1) == 0) {
          plVar8 = (long *)((long)plVar4 + 0xc);
        }
        lVar9 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
      }
      else {
        plVar8 = plVar4 + 1;
        lVar9 = 0;
      }
      uVar7 = (long)plVar8 +
              ((lVar9 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
              0xfffffffffffffff0;
      if (*(int *)((long)plVar4 + uVar7 + 0x10) == 0x4f434653) {
        iVar6 = *(int *)((long)plVar4 + uVar7 + 0x18);
        if (iVar6 == 0) {
          iVar6 = FUN_710076d420(0x7100d16e80,_DAT_7100d16ed8,DAT_7100af3880);
          if (iVar6 == 0) {
LAB_7100752540:
            FUN_7100749740(0x7100d16e70);
            return 0;
          }
        }
        goto LAB_7100752758;
      }
    }
  }
  iVar6 = 0x5f59;
LAB_7100752758:
  FUN_71007513c0();
  _DAT_7100d16e74 = _DAT_7100d16e74 + -1;
  FUN_7100749740(0x7100d16e70);
  return iVar6;
}



// ===== FUN_7100752810 @ 7100752810 (size=72) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100752810(void)

{
  FUN_7100749670();
  if (_DAT_7100d16e74 != 0) {
    _DAT_7100d16e74 = _DAT_7100d16e74 + -1;
    if (_DAT_7100d16e74 == 0) {
      FUN_71007513c0();
    }
  }
  FUN_7100749740(0x7100d16e70);
  return;
}



// ===== FUN_7100752860 @ 7100752860 (size=12) =====

undefined1 * FUN_7100752860(void)

{
  return &DAT_7100d16ed8;
}



// ===== FUN_7100752a40 @ 7100752a40 (size=380) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100752a40(int *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined1 auVar13 [12];
  
  uVar9 = FUN_710076d640(0x7100d16e80);
  auVar13 = FUN_710076d158(uVar9,*(undefined4 *)((long)(int)uVar9 * 4 + 0x7100d16e80));
  uVar6 = _DAT_7100d16ee4;
  iVar8 = *(int *)(auVar13._0_8_ + 0x2e7e4);
  plVar3 = (long *)tpidrro_el0;
  *(undefined4 *)(plVar3 + 6) = param_2;
  uVar5 = _DAT_7100d16ee0;
  iVar4 = _DAT_7100d16ed8;
  uVar7 = 4;
  if (iVar8 != 0) {
    uVar7 = 6;
  }
  *(undefined2 *)plVar3 = uVar7;
  *(undefined4 *)(plVar3 + 3) = 0;
  *(int *)((long)plVar3 + 0x1c) = iVar8;
  *(undefined4 *)((long)plVar3 + 4) = 0xd;
  *(undefined2 *)((long)plVar3 + 2) = 0;
  *(undefined4 *)(plVar3 + 2) = 0x140001;
  *(undefined4 *)((long)plVar3 + 0x14) = uVar5;
  *(undefined4 *)(plVar3 + 4) = 0x49434653;
  *(uint *)((long)plVar3 + 0x24) = (uint)(iVar8 != 0);
  plVar3[5] = 0xc;
  iVar8 = auVar13._8_4_;
  if (auVar13._8_4_ == 0) {
    iVar8 = iVar4;
  }
  iVar8 = FUN_710076d0c0(iVar8);
  if (iVar8 == 0) {
    if (*plVar3 < 0) {
      uVar2 = *(uint *)(plVar3 + 1);
      plVar11 = (long *)((long)plVar3 + 0x14);
      if ((uVar2 & 1) == 0) {
        plVar11 = (long *)((long)plVar3 + 0xc);
      }
      lVar10 = (((ulong)(uVar2 >> 1) & 0xf) + ((ulong)(uVar2 >> 5) & 0xf)) * 4;
    }
    else {
      plVar11 = plVar3 + 1;
      lVar10 = 0;
    }
    iVar8 = 0x5f59;
    uVar12 = (long)plVar11 +
             ((lVar10 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf &
             0xfffffffffffffff0;
    if ((*(int *)((long)plVar3 + uVar12 + 0x10) == 0x4f434653) &&
       (iVar8 = *(int *)((long)plVar3 + uVar12 + 0x18), iVar8 == 0)) {
      iVar1 = *(int *)((long)plVar3 + uVar12 + 0x20);
      if (iVar1 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
      }
      else {
        *param_1 = iVar4;
        param_1[1] = 0;
        param_1[2] = iVar1;
        *(undefined2 *)(param_1 + 3) = uVar6;
      }
    }
  }
  FUN_710076d6f0(0x7100d16e80,uVar9 & 0xffffffff);
  return iVar8;
}



// ===== FUN_7100752bc0 @ 7100752bc0 (size=8) =====

void FUN_7100752bc0(undefined8 param_1)

{
  FUN_7100752390(param_1,0x12);
  return;
}



// ===== FUN_7100752bd0 @ 7100752bd0 (size=400) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100752bd0(long *param_1,long *param_2,long *param_3)

{
  undefined2 uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  undefined2 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined1 auVar30 [12];
  
  lVar16 = param_1[1];
  lVar14 = *param_1;
  lVar20 = param_1[3];
  lVar18 = param_1[2];
  lVar24 = param_1[5];
  lVar22 = param_1[4];
  lVar26 = param_1[6];
  lVar28 = param_1[7];
  lVar17 = param_2[1];
  lVar15 = *param_2;
  lVar21 = param_2[3];
  lVar19 = param_2[2];
  lVar25 = param_2[5];
  lVar23 = param_2[4];
  lVar27 = param_2[6];
  lVar29 = param_2[7];
  lVar11 = *param_3;
  lVar2 = param_3[1];
  iVar6 = FUN_710076d640(0x7100d16e80);
  lVar10 = 0x7100d16000;
  uVar13 = 6;
  uVar12 = _DAT_7100d16ee0;
  auVar30 = FUN_710076d158(&DAT_7100d16ed8,*(undefined4 *)((long)iVar6 * 4 + 0x7100d16e80));
  iVar3 = *(int *)(auVar30._0_8_ + 0x2e7e4);
  plVar5 = (long *)tpidrro_el0;
  iVar7 = *(int *)(lVar10 + 0xed8);
  *(undefined2 *)((long)plVar5 + 2) = 0;
  uVar1 = 4;
  if (iVar3 != 0) {
    uVar1 = uVar13;
  }
  *(undefined2 *)plVar5 = uVar1;
  *(undefined4 *)(plVar5 + 3) = 0;
  *(int *)((long)plVar5 + 0x1c) = iVar3;
  if (auVar30._8_4_ != 0) {
    iVar7 = auVar30._8_4_;
  }
  *(undefined4 *)((long)plVar5 + 4) = 0x30;
  *(undefined4 *)(plVar5 + 2) = 0xa00001;
  *(undefined4 *)((long)plVar5 + 0x14) = uVar12;
  *(undefined4 *)(plVar5 + 4) = 0x49434653;
  *(uint *)((long)plVar5 + 0x24) = (uint)(iVar3 != 0);
  plVar5[0xe] = lVar15;
  plVar5[0xf] = lVar17;
  plVar5[0x11] = lVar21;
  plVar5[0x10] = lVar19;
  plVar5[0xb] = lVar24;
  plVar5[10] = lVar22;
  plVar5[0xd] = lVar28;
  plVar5[0xc] = lVar26;
  plVar5[7] = lVar16;
  plVar5[6] = lVar14;
  plVar5[9] = lVar20;
  plVar5[8] = lVar18;
  plVar5[5] = 0x16;
  plVar5[0x16] = lVar11;
  plVar5[0x17] = lVar2;
  plVar5[0x13] = lVar25;
  plVar5[0x12] = lVar23;
  plVar5[0x15] = lVar29;
  plVar5[0x14] = lVar27;
  iVar7 = FUN_710076d0c0(iVar7);
  if (iVar7 == 0) {
    if (*plVar5 < 0) {
      uVar4 = *(uint *)(plVar5 + 1);
      plVar8 = (long *)((long)plVar5 + 0x14);
      if ((uVar4 & 1) == 0) {
        plVar8 = (long *)((long)plVar5 + 0xc);
      }
      lVar11 = (((ulong)(uVar4 >> 1) & 0xf) + ((ulong)(uVar4 >> 5) & 0xf)) * 4;
    }
    else {
      plVar8 = plVar5 + 1;
      lVar11 = 0;
    }
    iVar7 = 0x5f59;
    uVar9 = (long)plVar8 +
            ((lVar11 + (ulong)((uint)*plVar5 >> 0x10 & 0xf) * 8) - (long)plVar5) + 0xf &
            0xfffffffffffffff0;
    if (*(int *)((long)plVar5 + uVar9 + 0x10) == 0x4f434653) {
      iVar7 = *(int *)((long)plVar5 + uVar9 + 0x18);
    }
  }
  FUN_710076d6f0(0x7100d16e80,iVar6);
  return iVar7;
}



// ===== FUN_7100752d60 @ 7100752d60 (size=392) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100752d60(ulong param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined2 uVar10;
  int iVar11;
  undefined4 extraout_w8;
  undefined2 extraout_w9;
  
  uVar3 = FUN_7100769b90();
  iVar5 = 0x4b59;
  if (0x1ffff < uVar3) {
    iVar4 = FUN_710076d640(0x7100d16e80);
    uVar10 = 4;
    iVar11 = *(int *)((long)iVar4 * 4 + 0x7100d16e80);
    lVar9 = 0x7100d16000;
    lVar6 = FUN_710076d158(_DAT_7100d16ee0);
    iVar1 = *(int *)(lVar6 + 0x2e7e4);
    iVar5 = *(int *)(lVar9 + 0xed8);
    plVar2 = (long *)tpidrro_el0;
    *(undefined2 *)((long)plVar2 + 2) = 0;
    if (iVar1 != 0) {
      uVar10 = extraout_w9;
    }
    *(undefined2 *)plVar2 = uVar10;
    *(undefined4 *)(plVar2 + 3) = 0;
    *(int *)((long)plVar2 + 0x1c) = iVar1;
    plVar2[7] = param_2;
    if (iVar11 != 0) {
      iVar5 = iVar11;
    }
    *(undefined4 *)((long)plVar2 + 4) = 0x10;
    *(undefined4 *)(plVar2 + 2) = 0x200001;
    *(undefined4 *)((long)plVar2 + 0x14) = extraout_w8;
    *(undefined4 *)(plVar2 + 4) = 0x49434653;
    *(uint *)((long)plVar2 + 0x24) = (uint)(iVar1 != 0);
    plVar2[5] = 0x19;
    plVar2[6] = param_1 & 0xff;
    iVar5 = FUN_710076d0c0(iVar5);
    if (iVar5 == 0) {
      if (*plVar2 < 0) {
        uVar3 = *(uint *)(plVar2 + 1);
        plVar7 = (long *)((long)plVar2 + 0x14);
        if ((uVar3 & 1) == 0) {
          plVar7 = (long *)((long)plVar2 + 0xc);
        }
        lVar6 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
      }
      else {
        plVar7 = plVar2 + 1;
        lVar6 = 0;
      }
      iVar5 = 0x5f59;
      uVar8 = (long)plVar7 +
              ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf &
              0xfffffffffffffff0;
      if (*(int *)((long)plVar2 + uVar8 + 0x10) == 0x4f434653) {
        iVar5 = *(int *)((long)plVar2 + uVar8 + 0x18);
      }
    }
    FUN_710076d6f0(0x7100d16e80,iVar4);
  }
  return iVar5;
}



// ===== FUN_7100752ef0 @ 7100752ef0 (size=388) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100752ef0(int *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined1 auVar13 [12];
  
  uVar1 = *param_2;
  uVar9 = FUN_710076d640(0x7100d16e80);
  auVar13 = FUN_710076d158(uVar9,*(undefined4 *)((long)(int)uVar9 * 4 + 0x7100d16e80));
  uVar6 = _DAT_7100d16ee4;
  uVar5 = _DAT_7100d16ee0;
  iVar4 = _DAT_7100d16ed8;
  iVar8 = *(int *)(auVar13._0_8_ + 0x2e7e4);
  plVar3 = (long *)tpidrro_el0;
  uVar7 = 4;
  if (iVar8 != 0) {
    uVar7 = 6;
  }
  *(undefined2 *)plVar3 = uVar7;
  *(undefined4 *)(plVar3 + 3) = 0;
  *(int *)((long)plVar3 + 0x1c) = iVar8;
  *(undefined4 *)((long)plVar3 + 4) = 0xe;
  *(undefined2 *)((long)plVar3 + 2) = 0;
  *(undefined4 *)(plVar3 + 2) = 0x180001;
  *(undefined4 *)((long)plVar3 + 0x14) = uVar5;
  *(undefined4 *)(plVar3 + 4) = 0x49434653;
  *(uint *)((long)plVar3 + 0x24) = (uint)(iVar8 != 0);
  plVar3[5] = 0x1f;
  plVar3[6] = (ulong)uVar1 | param_3 << 0x20;
  iVar8 = auVar13._8_4_;
  if (auVar13._8_4_ == 0) {
    iVar8 = iVar4;
  }
  iVar8 = FUN_710076d0c0(iVar8);
  if (iVar8 == 0) {
    if (*plVar3 < 0) {
      uVar1 = *(uint *)(plVar3 + 1);
      plVar11 = (long *)((long)plVar3 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar11 = (long *)((long)plVar3 + 0xc);
      }
      lVar10 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar11 = plVar3 + 1;
      lVar10 = 0;
    }
    iVar8 = 0x5f59;
    uVar12 = (long)plVar11 +
             ((lVar10 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf &
             0xfffffffffffffff0;
    if ((*(int *)((long)plVar3 + uVar12 + 0x10) == 0x4f434653) &&
       (iVar8 = *(int *)((long)plVar3 + uVar12 + 0x18), iVar8 == 0)) {
      iVar2 = *(int *)((long)plVar3 + uVar12 + 0x20);
      if (iVar2 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
      }
      else {
        *param_1 = iVar4;
        param_1[1] = 0;
        param_1[2] = iVar2;
        *(undefined2 *)(param_1 + 3) = uVar6;
      }
    }
  }
  FUN_710076d6f0(0x7100d16e80,uVar9 & 0xffffffff);
  return iVar8;
}



// ===== FUN_7100753080 @ 7100753080 (size=424) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100753080(byte param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined2 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined2 extraout_w8;
  
  uVar3 = FUN_7100769b90();
  iVar5 = 0x4b59;
  if (0x2ffff < uVar3) {
    iVar4 = FUN_710076d640(0x7100d16e80);
    uVar10 = 4;
    iVar11 = *(int *)((long)iVar4 * 4 + 0x7100d16e80);
    lVar9 = 0x7100d16000;
    uVar12 = _DAT_7100d16ee0;
    lVar6 = FUN_710076d158(6);
    iVar1 = *(int *)(lVar6 + 0x2e7e4);
    iVar5 = *(int *)(lVar9 + 0xed8);
    plVar2 = (long *)tpidrro_el0;
    *(undefined2 *)((long)plVar2 + 2) = 0;
    if (iVar1 != 0) {
      uVar10 = extraout_w8;
    }
    *(undefined2 *)plVar2 = uVar10;
    *(undefined4 *)(plVar2 + 3) = 0;
    *(int *)((long)plVar2 + 0x1c) = iVar1;
    if (iVar11 != 0) {
      iVar5 = iVar11;
    }
    *(undefined4 *)((long)plVar2 + 4) = 0x14;
    *(undefined4 *)(plVar2 + 2) = 0x300001;
    *(undefined4 *)((long)plVar2 + 0x14) = uVar12;
    *(undefined4 *)(plVar2 + 4) = 0x49434653;
    *(uint *)((long)plVar2 + 0x24) = (uint)(iVar1 != 0);
    plVar2[5] = 0x20;
    plVar2[6] = (ulong)param_1;
    plVar2[7] = param_2;
    plVar2[9] = param_4;
    plVar2[8] = param_3;
    iVar5 = FUN_710076d0c0(iVar5);
    if (iVar5 == 0) {
      if (*plVar2 < 0) {
        uVar3 = *(uint *)(plVar2 + 1);
        plVar7 = (long *)((long)plVar2 + 0x14);
        if ((uVar3 & 1) == 0) {
          plVar7 = (long *)((long)plVar2 + 0xc);
        }
        lVar6 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
      }
      else {
        plVar7 = plVar2 + 1;
        lVar6 = 0;
      }
      iVar5 = 0x5f59;
      uVar8 = (long)plVar7 +
              ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf &
              0xfffffffffffffff0;
      if (*(int *)((long)plVar2 + uVar8 + 0x10) == 0x4f434653) {
        iVar5 = *(int *)((long)plVar2 + uVar8 + 0x18);
      }
    }
    FUN_710076d6f0(0x7100d16e80,iVar4);
  }
  return iVar5;
}



// ===== FUN_7100753230 @ 7100753230 (size=440) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100753230(int *param_1,byte param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 auVar20 [12];
  
  lVar13 = param_3[1];
  lVar10 = *param_3;
  lVar15 = param_3[3];
  lVar14 = param_3[2];
  lVar17 = param_3[5];
  lVar16 = param_3[4];
  lVar18 = param_3[6];
  lVar19 = param_3[7];
  uVar9 = FUN_710076d640(0x7100d16e80);
  auVar20 = FUN_710076d158(uVar9,*(undefined4 *)((long)(int)uVar9 * 4 + 0x7100d16e80));
  uVar6 = _DAT_7100d16ee4;
  uVar5 = _DAT_7100d16ee0;
  iVar4 = _DAT_7100d16ed8;
  iVar8 = *(int *)(auVar20._0_8_ + 0x2e7e4);
  plVar3 = (long *)tpidrro_el0;
  uVar7 = 4;
  if (iVar8 != 0) {
    uVar7 = 6;
  }
  *(undefined2 *)plVar3 = uVar7;
  *(undefined4 *)(plVar3 + 3) = 0;
  *(int *)((long)plVar3 + 0x1c) = iVar8;
  *(undefined4 *)((long)plVar3 + 4) = 0x1e;
  *(undefined2 *)((long)plVar3 + 2) = 0;
  *(undefined4 *)(plVar3 + 2) = 0x580001;
  *(undefined4 *)((long)plVar3 + 0x14) = uVar5;
  *(undefined4 *)(plVar3 + 4) = 0x49434653;
  *(uint *)((long)plVar3 + 0x24) = (uint)(iVar8 != 0);
  plVar3[5] = 0x33;
  iVar8 = auVar20._8_4_;
  if (auVar20._8_4_ == 0) {
    iVar8 = iVar4;
  }
  plVar3[7] = lVar10;
  plVar3[6] = (ulong)param_2;
  plVar3[0xc] = lVar17;
  plVar3[0xd] = lVar18;
  plVar3[9] = lVar14;
  plVar3[8] = lVar13;
  plVar3[0xb] = lVar16;
  plVar3[10] = lVar15;
  plVar3[0xe] = lVar19;
  iVar8 = FUN_710076d0c0(iVar8);
  if (iVar8 == 0) {
    if (*plVar3 < 0) {
      uVar2 = *(uint *)(plVar3 + 1);
      plVar11 = (long *)((long)plVar3 + 0x14);
      if ((uVar2 & 1) == 0) {
        plVar11 = (long *)((long)plVar3 + 0xc);
      }
      lVar10 = (((ulong)(uVar2 >> 1) & 0xf) + ((ulong)(uVar2 >> 5) & 0xf)) * 4;
    }
    else {
      plVar11 = plVar3 + 1;
      lVar10 = 0;
    }
    iVar8 = 0x5f59;
    uVar12 = (long)plVar11 +
             ((lVar10 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf &
             0xfffffffffffffff0;
    if ((*(int *)((long)plVar3 + uVar12 + 0x10) == 0x4f434653) &&
       (iVar8 = *(int *)((long)plVar3 + uVar12 + 0x18), iVar8 == 0)) {
      iVar1 = *(int *)((long)plVar3 + uVar12 + 0x20);
      if (iVar1 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
      }
      else {
        *param_1 = iVar4;
        param_1[1] = 0;
        param_1[2] = iVar1;
        *(undefined2 *)(param_1 + 3) = uVar6;
      }
    }
  }
  FUN_710076d6f0(0x7100d16e80,uVar9 & 0xffffffff);
  return iVar8;
}



// ===== FUN_71007533f0 @ 71007533f0 (size=492) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_71007533f0(int *param_1,byte param_2,long *param_3)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 auVar20 [12];
  
  uVar7 = FUN_7100769b90();
  iVar8 = 0x4b59;
  if (0x1ffff < uVar7) {
    lVar13 = param_3[1];
    lVar12 = *param_3;
    lVar15 = param_3[3];
    lVar14 = param_3[2];
    lVar17 = param_3[5];
    lVar16 = param_3[4];
    lVar18 = param_3[6];
    lVar19 = param_3[7];
    uVar9 = FUN_710076d640(0x7100d16e80);
    lVar10 = 0x7100d16e80;
    auVar20 = FUN_710076d158(uVar9,uVar9 & 0xffffffff);
    uVar5 = _DAT_7100d16ee4;
    uVar4 = _DAT_7100d16ee0;
    iVar3 = _DAT_7100d16ed8;
    iVar1 = *(int *)(auVar20._0_8_ + 0x2e7e4);
    iVar8 = *(int *)(lVar10 + (long)auVar20._8_4_ * 4);
    uVar6 = 4;
    if (iVar1 != 0) {
      uVar6 = 6;
    }
    plVar2 = (long *)tpidrro_el0;
    *(undefined2 *)plVar2 = uVar6;
    *(undefined4 *)(plVar2 + 3) = 0;
    *(int *)((long)plVar2 + 0x1c) = iVar1;
    *(undefined4 *)((long)plVar2 + 4) = 0x1e;
    *(undefined2 *)((long)plVar2 + 2) = 0;
    *(undefined4 *)(plVar2 + 2) = 0x580001;
    *(undefined4 *)((long)plVar2 + 0x14) = uVar4;
    *(undefined4 *)(plVar2 + 4) = 0x49434653;
    *(uint *)((long)plVar2 + 0x24) = (uint)(iVar1 != 0);
    plVar2[5] = 0x35;
    if (iVar8 == 0) {
      iVar8 = iVar3;
    }
    plVar2[7] = lVar12;
    plVar2[6] = (ulong)param_2;
    plVar2[0xc] = lVar17;
    plVar2[0xd] = lVar18;
    plVar2[9] = lVar14;
    plVar2[8] = lVar13;
    plVar2[0xb] = lVar16;
    plVar2[10] = lVar15;
    plVar2[0xe] = lVar19;
    iVar8 = FUN_710076d0c0(iVar8);
    if (iVar8 == 0) {
      if (*plVar2 < 0) {
        uVar7 = *(uint *)(plVar2 + 1);
        plVar11 = (long *)((long)plVar2 + 0x14);
        if ((uVar7 & 1) == 0) {
          plVar11 = (long *)((long)plVar2 + 0xc);
        }
        lVar10 = (((ulong)(uVar7 >> 1) & 0xf) + ((ulong)(uVar7 >> 5) & 0xf)) * 4;
      }
      else {
        plVar11 = plVar2 + 1;
        lVar10 = 0;
      }
      uVar9 = (long)plVar11 +
              ((lVar10 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf &
              0xfffffffffffffff0;
      iVar8 = 0x5f59;
      if ((*(int *)((long)plVar2 + uVar9 + 0x10) == 0x4f434653) &&
         (iVar8 = *(int *)((long)plVar2 + uVar9 + 0x18), iVar8 == 0)) {
        iVar1 = *(int *)((long)plVar2 + uVar9 + 0x20);
        if (iVar1 == 0) {
          param_1[0] = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1[3] = 0;
        }
        else {
          *param_1 = iVar3;
          param_1[1] = 0;
          param_1[2] = iVar1;
          *(undefined2 *)(param_1 + 3) = uVar5;
        }
      }
    }
    FUN_710076d6f0(0x7100d16e80,auVar20._8_4_);
  }
  return iVar8;
}



// ===== FUN_71007535e0 @ 71007535e0 (size=452) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_71007535e0(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined2 uVar10;
  int iVar11;
  undefined4 extraout_w8;
  undefined2 extraout_w9;
  
  uVar3 = FUN_7100769b90();
  if (0x2ffff < uVar3) {
    iVar4 = FUN_710076d640(0x7100d16e80);
    uVar10 = 4;
    iVar11 = *(int *)((long)iVar4 * 4 + 0x7100d16e80);
    lVar9 = 0x7100d16000;
    lVar6 = FUN_710076d158(_DAT_7100d16ee0);
    iVar1 = *(int *)(lVar6 + 0x2e7e4);
    iVar5 = *(int *)(lVar9 + 0xed8);
    plVar2 = (long *)tpidrro_el0;
    plVar2[9] = param_4;
    if (iVar1 != 0) {
      uVar10 = extraout_w9;
    }
    *(undefined2 *)plVar2 = uVar10;
    *(undefined4 *)(plVar2 + 5) = 0;
    *(int *)((long)plVar2 + 0x2c) = iVar1;
    if (iVar11 != 0) {
      iVar5 = iVar11;
    }
    *(undefined2 *)((long)plVar2 + 2) = 0x100;
    *(undefined4 *)(plVar2 + 4) = 0x200001;
    *(undefined4 *)((long)plVar2 + 0x24) = extraout_w8;
    *(undefined4 *)((long)plVar2 + 4) = 0x10;
    *(int *)(plVar2 + 1) = (int)param_2;
    *(undefined4 *)(plVar2 + 6) = 0x49434653;
    *(uint *)((long)plVar2 + 0x34) = (uint)(iVar1 != 0);
    plVar2[7] = 0x39;
    plVar2[8] = param_3 & 0xff;
    uVar3 = (uint)((ulong)param_1 >> 0x20);
    *(int *)((long)plVar2 + 0xc) = (int)param_1;
    *(uint *)(plVar2 + 2) =
         (uVar3 >> 4 & 0x3fffff) << 2 | ((uint)((ulong)param_2 >> 0x20) & 0xf) << 0x18 |
         uVar3 << 0x1c;
    iVar5 = FUN_710076d0c0(iVar5);
    if (iVar5 == 0) {
      if (*plVar2 < 0) {
        uVar3 = *(uint *)(plVar2 + 1);
        plVar7 = (long *)((long)plVar2 + 0x14);
        if ((uVar3 & 1) == 0) {
          plVar7 = (long *)((long)plVar2 + 0xc);
        }
        lVar6 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
      }
      else {
        plVar7 = plVar2 + 1;
        lVar6 = 0;
      }
      iVar5 = 0x5f59;
      uVar8 = (long)plVar7 +
              ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf &
              0xfffffffffffffff0;
      if (*(int *)((long)plVar2 + uVar8 + 0x10) == 0x4f434653) {
        iVar5 = *(int *)((long)plVar2 + uVar8 + 0x18);
      }
    }
    FUN_710076d6f0(0x7100d16e80,iVar4);
    return iVar5;
  }
  return 0x4b59;
}



// ===== FUN_71007537b0 @ 71007537b0 (size=412) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_71007537b0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined1 auVar12 [12];
  
  if (param_2 != -1) {
    uVar9 = FUN_710076d640(0x7100d16e80);
    lVar10 = 0x7100d16e80;
    auVar12 = FUN_710076d158(uVar9,uVar9 & 0xffffffff);
    uVar6 = _DAT_7100d16ee4;
    uVar5 = _DAT_7100d16ee0;
    iVar4 = _DAT_7100d16ed8;
    iVar1 = *(int *)(auVar12._0_8_ + 0x2e7e4);
    iVar2 = *(int *)(lVar10 + (long)auVar12._8_4_ * 4);
    uVar7 = 4;
    if (iVar1 != 0) {
      uVar7 = 6;
    }
    plVar3 = (long *)tpidrro_el0;
    *(undefined2 *)plVar3 = uVar7;
    *(undefined4 *)(plVar3 + 3) = 0;
    *(int *)((long)plVar3 + 0x1c) = iVar1;
    *(undefined4 *)((long)plVar3 + 4) = 0xd;
    *(undefined2 *)((long)plVar3 + 2) = 0;
    *(undefined4 *)(plVar3 + 2) = 0x110001;
    *(undefined4 *)((long)plVar3 + 0x14) = uVar5;
    *(undefined4 *)(plVar3 + 4) = 0x49434653;
    *(uint *)((long)plVar3 + 0x24) = (uint)(iVar1 != 0);
    plVar3[5] = 0x3d;
    if (iVar2 == 0) {
      iVar2 = iVar4;
    }
    *(char *)(plVar3 + 6) = (char)param_2;
    uVar8 = FUN_710076d0c0(iVar2);
    if (uVar8 == 0) {
      if (*plVar3 < 0) {
        uVar8 = *(uint *)(plVar3 + 1);
        plVar11 = (long *)((long)plVar3 + 0x14);
        if ((uVar8 & 1) == 0) {
          plVar11 = (long *)((long)plVar3 + 0xc);
        }
        lVar10 = (((ulong)(uVar8 >> 1) & 0xf) + ((ulong)(uVar8 >> 5) & 0xf)) * 4;
      }
      else {
        plVar11 = plVar3 + 1;
        lVar10 = 0;
      }
      uVar9 = (long)plVar11 +
              ((lVar10 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf &
              0xfffffffffffffff0;
      uVar8 = 0x5f59;
      if ((*(int *)((long)plVar3 + uVar9 + 0x10) == 0x4f434653) &&
         (uVar8 = *(uint *)((long)plVar3 + uVar9 + 0x18), uVar8 == 0)) {
        iVar2 = *(int *)((long)plVar3 + uVar9 + 0x20);
        if (iVar2 == 0) {
          param_1[0] = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1[3] = 0;
        }
        else {
          *param_1 = iVar4;
          param_1[1] = 0;
          param_1[2] = iVar2;
          *(undefined2 *)(param_1 + 3) = uVar6;
        }
      }
    }
    FUN_710076d6f0(0x7100d16e80,auVar12._8_4_);
    return (ulong)uVar8;
  }
  uVar9 = FUN_7100752390(param_1,0x3c);
  return uVar9;
}



// ===== FUN_7100753950 @ 7100753950 (size=380) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100753950(int *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined1 auVar13 [12];
  
  uVar9 = FUN_710076d640(0x7100d16e80);
  auVar13 = FUN_710076d158(uVar9,*(undefined4 *)((long)(int)uVar9 * 4 + 0x7100d16e80));
  uVar6 = _DAT_7100d16ee4;
  iVar8 = *(int *)(auVar13._0_8_ + 0x2e7e4);
  plVar3 = (long *)tpidrro_el0;
  *(undefined4 *)(plVar3 + 6) = param_2;
  uVar5 = _DAT_7100d16ee0;
  iVar4 = _DAT_7100d16ed8;
  uVar7 = 4;
  if (iVar8 != 0) {
    uVar7 = 6;
  }
  *(undefined2 *)plVar3 = uVar7;
  *(undefined4 *)(plVar3 + 3) = 0;
  *(int *)((long)plVar3 + 0x1c) = iVar8;
  *(undefined4 *)((long)plVar3 + 4) = 0xd;
  *(undefined2 *)((long)plVar3 + 2) = 0;
  *(undefined4 *)(plVar3 + 2) = 0x140001;
  *(undefined4 *)((long)plVar3 + 0x14) = uVar5;
  *(undefined4 *)(plVar3 + 4) = 0x49434653;
  *(uint *)((long)plVar3 + 0x24) = (uint)(iVar8 != 0);
  plVar3[5] = 0x6e;
  iVar8 = auVar13._8_4_;
  if (auVar13._8_4_ == 0) {
    iVar8 = iVar4;
  }
  iVar8 = FUN_710076d0c0(iVar8);
  if (iVar8 == 0) {
    if (*plVar3 < 0) {
      uVar2 = *(uint *)(plVar3 + 1);
      plVar11 = (long *)((long)plVar3 + 0x14);
      if ((uVar2 & 1) == 0) {
        plVar11 = (long *)((long)plVar3 + 0xc);
      }
      lVar10 = (((ulong)(uVar2 >> 1) & 0xf) + ((ulong)(uVar2 >> 5) & 0xf)) * 4;
    }
    else {
      plVar11 = plVar3 + 1;
      lVar10 = 0;
    }
    iVar8 = 0x5f59;
    uVar12 = (long)plVar11 +
             ((lVar10 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf &
             0xfffffffffffffff0;
    if ((*(int *)((long)plVar3 + uVar12 + 0x10) == 0x4f434653) &&
       (iVar8 = *(int *)((long)plVar3 + uVar12 + 0x18), iVar8 == 0)) {
      iVar1 = *(int *)((long)plVar3 + uVar12 + 0x20);
      if (iVar1 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
      }
      else {
        *param_1 = iVar4;
        param_1[1] = 0;
        param_1[2] = iVar1;
        *(undefined2 *)(param_1 + 3) = uVar6;
      }
    }
  }
  FUN_710076d6f0(0x7100d16e80,uVar9 & 0xffffffff);
  return iVar8;
}



// ===== FUN_7100753ad0 @ 7100753ad0 (size=8) =====

void FUN_7100753ad0(undefined8 param_1)

{
  FUN_7100752390(param_1,400);
  return;
}



// ===== FUN_7100753ae0 @ 7100753ae0 (size=492) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100753ae0(int *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  long *plVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  undefined2 *puVar12;
  undefined2 uVar13;
  undefined4 *puVar14;
  undefined4 extraout_w8;
  uint *extraout_x9;
  uint *puVar15;
  uint *extraout_x9_00;
  uint uVar16;
  int iVar17;
  undefined1 auVar18 [16];
  
  param_4 = param_4 & 0xffffffff;
  if (*param_1 == _DAT_7100d16ed8) {
    uVar9 = FUN_710076d640(0x7100d16e80);
    iVar17 = (int)uVar9;
    puVar12 = (undefined2 *)tpidrro_el0;
    auVar18 = FUN_710076d158(0x10,uVar9,*(undefined4 *)((long)iVar17 * 4 + 0x7100d16e80));
    uVar10 = auVar18._8_8_;
    iVar7 = *(int *)(auVar18._0_8_ + 0x2e7e4);
    uVar16 = extraout_x9_00[2];
    puVar15 = extraout_x9_00;
    uVar6 = extraout_w8;
  }
  else {
    uVar16 = param_1[2];
    iVar17 = -1;
    auVar18 = FUN_710076d158(_DAT_7100d16ed8,0);
    uVar10 = auVar18._8_8_;
    iVar7 = *(int *)(auVar18._0_8_ + 0x2e7e4);
    puVar12 = (undefined2 *)tpidrro_el0;
    uVar6 = 0x10;
    puVar15 = extraout_x9;
    if (uVar16 == 0) {
      uVar6 = 0xc;
    }
  }
  bVar5 = iVar7 != 0;
  *(undefined4 *)(puVar12 + 2) = uVar6;
  uVar13 = 4;
  if (bVar5) {
    uVar13 = 6;
  }
  *puVar12 = uVar13;
  puVar14 = (undefined4 *)(puVar12 + 8);
  puVar12[1] = 1;
  if (uVar16 != 0) {
    *(undefined4 *)(puVar12 + 0xc) = 0;
    *(int *)(puVar12 + 0xe) = iVar7;
    puVar14 = (undefined4 *)(puVar12 + 0x10);
    iVar7 = 0;
    *(undefined4 *)(puVar12 + 8) = 0x200001;
    *(uint *)(puVar12 + 10) = uVar16;
  }
  puVar14[2] = 0;
  puVar14[3] = iVar7;
  uVar3 = (uint)((ulong)param_2 >> 0x20);
  *puVar14 = 0x49434653;
  puVar14[1] = (uint)bVar5;
  *(uint *)(puVar12 + 4) = (uVar3 >> 4 & 0x3f) << 6 | 0x3010000 | (uVar3 & 0xf) << 0xc;
  *(int *)(puVar12 + 6) = (int)param_2;
  *(ulong *)(puVar14 + 4) = param_4;
  *(undefined8 *)(puVar14 + 6) = param_3;
  if ((int)uVar10 == 0) {
    uVar10 = (ulong)*puVar15;
  }
  iVar7 = FUN_710076d0c0(uVar10 & 0xffffffff);
  if (iVar7 == 0) {
    plVar4 = (long *)tpidrro_el0;
    if (*plVar4 < 0) {
      uVar3 = *(uint *)(plVar4 + 1);
      plVar11 = (long *)((long)plVar4 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar11 = (long *)((long)plVar4 + 0xc);
      }
      lVar8 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar11 = plVar4 + 1;
      lVar8 = 0;
    }
    piVar1 = (int *)((long)plVar4 +
                    ((long)plVar11 +
                     ((lVar8 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
                    0xfffffffffffffff0));
    iVar7 = 0x5f59;
    piVar2 = piVar1 + 4;
    if (uVar16 == 0) {
      piVar2 = piVar1;
    }
    if (*piVar2 == 0x4f434653) {
      iVar7 = piVar2[2];
    }
  }
  if (iVar17 != -1) {
    FUN_710076d6f0(0x7100d16e80,iVar17);
  }
  return iVar7;
}



// ===== FUN_7100753cd0 @ 7100753cd0 (size=8) =====

void FUN_7100753cd0(undefined8 param_1,undefined8 param_2)

{
  FUN_7100751640(param_1,param_2,1);
  return;
}



// ===== FUN_7100753ce0 @ 7100753ce0 (size=8) =====

void FUN_7100753ce0(undefined8 param_1,undefined8 param_2)

{
  FUN_7100751640(param_1,param_2,2);
  return;
}



// ===== FUN_7100753cf0 @ 7100753cf0 (size=8) =====

void FUN_7100753cf0(undefined8 param_1,undefined8 param_2)

{
  FUN_7100751640(param_1,param_2,3);
  return;
}



// ===== FUN_7100753d00 @ 7100753d00 (size=8) =====

void FUN_7100753d00(undefined8 param_1,undefined8 param_2)

{
  FUN_7100751640(param_1,param_2,4);
  return;
}



// ===== FUN_7100753d10 @ 7100753d10 (size=8) =====

void FUN_7100753d10(void)

{
  FUN_7100751820();
  return;
}



// ===== FUN_7100753d20 @ 7100753d20 (size=8) =====

void FUN_7100753d20(void)

{
  FUN_7100751820();
  return;
}



// ===== FUN_7100753d30 @ 7100753d30 (size=496) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100753d30(int *param_1,undefined8 param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  long *plVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  undefined2 uVar12;
  undefined2 *puVar13;
  long *plVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [12];
  
  iVar7 = *param_1;
  if (iVar7 == _DAT_7100d16ed8) {
    uVar10 = FUN_710076d640(0x7100d16e80);
    iVar17 = (int)uVar10;
    uVar6 = 0xc;
    auVar18 = FUN_710076d158(uVar10,*(undefined4 *)((long)iVar17 * 4 + 0x7100d16e80));
    iVar11 = auVar18._8_4_;
    iVar7 = *param_1;
    iVar16 = param_1[2];
    puVar13 = (undefined2 *)tpidrro_el0;
    iVar15 = *(int *)(auVar18._0_8_ + 0x2e7e4);
  }
  else {
    iVar16 = param_1[2];
    iVar17 = -1;
    auVar18 = FUN_710076d158(_DAT_7100d16ed8,0);
    iVar11 = auVar18._8_4_;
    iVar15 = *(int *)(auVar18._0_8_ + 0x2e7e4);
    puVar13 = (undefined2 *)tpidrro_el0;
    uVar6 = 0xc;
    if (iVar16 == 0) {
      uVar6 = 8;
    }
  }
  bVar5 = iVar15 != 0;
  *(undefined4 *)(puVar13 + 2) = uVar6;
  uVar12 = 4;
  if (bVar5) {
    uVar12 = 6;
  }
  *puVar13 = uVar12;
  puVar13[1] = 1;
  puVar8 = (undefined4 *)(puVar13 + 8);
  if (iVar16 != 0) {
    *(undefined4 *)(puVar13 + 0xc) = 0;
    *(int *)(puVar13 + 0xe) = iVar15;
    iVar15 = 0;
    *(undefined4 *)(puVar13 + 8) = 0x100001;
    *(int *)(puVar13 + 10) = iVar16;
    puVar8 = (undefined4 *)(puVar13 + 0x10);
  }
  *puVar8 = 0x49434653;
  puVar8[1] = (uint)bVar5;
  puVar8[2] = 7;
  puVar8[3] = iVar15;
  uVar3 = (uint)((ulong)param_2 >> 0x20);
  if (iVar11 != 0) {
    iVar7 = iVar11;
  }
  *(uint *)(puVar13 + 4) = (uVar3 >> 4 & 0x3f) << 6 | 0x3010000 | (uVar3 & 0xf) << 0xc;
  *(int *)(puVar13 + 6) = (int)param_2;
  iVar7 = FUN_710076d0c0(iVar7);
  if (iVar7 == 0) {
    plVar4 = (long *)tpidrro_el0;
    if (*plVar4 < 0) {
      uVar3 = *(uint *)(plVar4 + 1);
      plVar14 = (long *)((long)plVar4 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar14 = (long *)((long)plVar4 + 0xc);
      }
      lVar9 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar14 = plVar4 + 1;
      lVar9 = 0;
    }
    piVar1 = (int *)((long)plVar4 +
                    ((long)plVar14 +
                     ((lVar9 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
                    0xfffffffffffffff0));
    iVar7 = 0x5f59;
    piVar2 = piVar1 + 4;
    if (iVar16 == 0) {
      piVar2 = piVar1;
    }
    if (((*piVar2 == 0x4f434653) && (iVar7 = piVar2[2], iVar7 == 0)) && (param_3 != (int *)0x0)) {
      *param_3 = piVar2[4];
    }
  }
  if (iVar17 != -1) {
    FUN_710076d6f0(0x7100d16e80,iVar17);
  }
  return iVar7;
}



// ===== FUN_7100753f20 @ 7100753f20 (size=8) =====

void FUN_7100753f20(void)

{
  FUN_7100751a20();
  return;
}



// ===== FUN_7100753f30 @ 7100753f30 (size=8) =====

void FUN_7100753f30(void)

{
  FUN_7100751a20();
  return;
}



// ===== FUN_7100753f40 @ 7100753f40 (size=8) =====

void FUN_7100753f40(undefined8 param_1)

{
  FUN_7100751480(param_1,10);
  return;
}



// ===== FUN_7100753f50 @ 7100753f50 (size=8) =====

void FUN_7100753f50(void)

{
  FUN_7100751cb0();
  return;
}



// ===== FUN_7100753f60 @ 7100753f60 (size=8) =====

void FUN_7100753f60(void)

{
  FUN_7100751cb0();
  return;
}



// ===== FUN_7100753f70 @ 7100753f70 (size=76) =====

undefined8 FUN_7100753f70(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_7100769b90();
  if (0x2ffff < uVar1) {
    uVar2 = FUN_7100751640(param_1,param_2,0xd);
    return uVar2;
  }
  return 0x4b59;
}



// ===== FUN_7100753fc0 @ 7100753fc0 (size=560) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100753fc0(int *param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  int *piVar2;
  long *plVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  undefined2 *puVar13;
  int iVar14;
  long *plVar15;
  undefined2 uVar16;
  int iVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [12];
  
  uVar5 = FUN_7100769b90();
  if (uVar5 < 0x30000) {
    return 0x4b59;
  }
  iVar7 = *param_1;
  if (iVar7 == _DAT_7100d16ed8) {
    uVar11 = FUN_710076d640(0x7100d16e80);
    iVar8 = (int)uVar11;
    auVar20 = FUN_710076d158(uVar11,*(undefined4 *)((long)iVar8 * 4 + 0x7100d16e80));
    iVar12 = auVar20._8_4_;
    uVar6 = 0xc;
    iVar14 = *(int *)(auVar20._0_8_ + 0x2e7e4);
    puVar13 = (undefined2 *)tpidrro_el0;
    iVar7 = *param_1;
    iVar17 = param_1[2];
  }
  else {
    iVar17 = param_1[2];
    iVar8 = -1;
    auVar20 = FUN_710076d158(_DAT_7100d16ed8,0);
    iVar12 = auVar20._8_4_;
    iVar14 = *(int *)(auVar20._0_8_ + 0x2e7e4);
    puVar13 = (undefined2 *)tpidrro_el0;
    uVar6 = 0xc;
    if (iVar17 == 0) {
      uVar6 = 8;
    }
  }
  bVar4 = iVar14 != 0;
  *(undefined4 *)(puVar13 + 2) = uVar6;
  uVar16 = 4;
  if (bVar4) {
    uVar16 = 6;
  }
  *puVar13 = uVar16;
  puVar13[1] = 1;
  puVar9 = (undefined4 *)(puVar13 + 8);
  if (iVar17 != 0) {
    *(undefined4 *)(puVar13 + 0xc) = 0;
    *(int *)(puVar13 + 0xe) = iVar14;
    iVar14 = 0;
    *(undefined4 *)(puVar13 + 8) = 0x100001;
    *(int *)(puVar13 + 10) = iVar17;
    puVar9 = (undefined4 *)(puVar13 + 0x10);
  }
  *puVar9 = 0x49434653;
  puVar9[1] = (uint)bVar4;
  puVar9[2] = 0xe;
  puVar9[3] = iVar14;
  uVar5 = (uint)((ulong)param_2 >> 0x20);
  if (iVar12 != 0) {
    iVar7 = iVar12;
  }
  *(uint *)(puVar13 + 4) = (uVar5 >> 4 & 0x3f) << 6 | 0x3010000 | (uVar5 & 0xf) << 0xc;
  *(int *)(puVar13 + 6) = (int)param_2;
  iVar7 = FUN_710076d0c0(iVar7);
  if (iVar7 == 0) {
    plVar3 = (long *)tpidrro_el0;
    if (*plVar3 < 0) {
      uVar5 = *(uint *)(plVar3 + 1);
      plVar15 = (long *)((long)plVar3 + 0x14);
      if ((uVar5 & 1) == 0) {
        plVar15 = (long *)((long)plVar3 + 0xc);
      }
      lVar10 = (((ulong)(uVar5 >> 1) & 0xf) + ((ulong)(uVar5 >> 5) & 0xf)) * 4;
    }
    else {
      plVar15 = plVar3 + 1;
      lVar10 = 0;
    }
    iVar7 = 0x5f59;
    piVar1 = (int *)((long)plVar3 +
                    ((long)plVar15 +
                     ((lVar10 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf &
                    0xfffffffffffffff0));
    piVar2 = piVar1 + 4;
    if (iVar17 == 0) {
      piVar2 = piVar1;
    }
    if (((*piVar2 == 0x4f434653) && (iVar7 = piVar2[2], iVar7 == 0)) &&
       (param_3 != (undefined8 *)0x0)) {
      uVar19 = *(undefined8 *)(piVar2 + 6);
      uVar18 = *(undefined8 *)(piVar2 + 10);
      uVar11 = *(undefined8 *)(piVar2 + 8);
      *param_3 = *(undefined8 *)(piVar2 + 4);
      param_3[1] = uVar19;
      param_3[3] = uVar18;
      param_3[2] = uVar11;
    }
  }
  if (iVar8 != -1) {
    FUN_710076d6f0(0x7100d16e80,iVar8);
    return iVar7;
  }
  return iVar7;
}



// ===== FUN_71007541f0 @ 71007541f0 (size=652) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_71007541f0(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  bool bVar6;
  undefined2 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  ulong uVar12;
  int iVar13;
  long *plVar14;
  undefined2 *puVar15;
  ulong uVar16;
  long lVar17;
  undefined1 auVar18 [12];
  
  uVar8 = FUN_7100769b90();
  if (uVar8 < 0x40000) {
    return 0x4b59;
  }
  if (*param_1 == _DAT_7100d16ed8) {
    uVar12 = FUN_710076d640(0x7100d16e80);
    uVar16 = (ulong)*(uint *)((long)(int)uVar12 * 4 + 0x7100d16e80);
    auVar18 = FUN_710076d158(uVar12,uVar12 & 0xffffffff);
    iVar13 = auVar18._8_4_;
    uVar9 = 0xd;
    iVar10 = *(int *)(auVar18._0_8_ + 0x2e7e4);
    puVar15 = (undefined2 *)tpidrro_el0;
    uVar8 = param_1[2];
  }
  else {
    uVar8 = param_1[2];
    uVar16 = 0;
    auVar18 = FUN_710076d158(_DAT_7100d16ed8,0xffffffff);
    iVar13 = auVar18._8_4_;
    iVar10 = *(int *)(auVar18._0_8_ + 0x2e7e4);
    puVar15 = (undefined2 *)tpidrro_el0;
    uVar9 = 0xd;
    if (uVar8 == 0) {
      uVar9 = 9;
    }
  }
  bVar6 = iVar10 != 0;
  *(undefined4 *)(puVar15 + 2) = uVar9;
  uVar7 = 4;
  if (bVar6) {
    uVar7 = 6;
  }
  *puVar15 = uVar7;
  puVar15[1] = 0x111;
  puVar11 = (undefined4 *)(puVar15 + 0x18);
  if (uVar8 != 0) {
    *(undefined4 *)(puVar15 + 0x1c) = 0;
    *(int *)(puVar15 + 0x1e) = iVar10;
    iVar10 = 0;
    *(undefined4 *)(puVar15 + 0x18) = 0x140001;
    *(uint *)(puVar15 + 0x1a) = uVar8;
    puVar11 = (undefined4 *)(puVar15 + 0x20);
  }
  *puVar11 = 0x49434653;
  puVar11[1] = (uint)bVar6;
  puVar11[2] = 0xf;
  puVar11[3] = iVar10;
  uVar3 = (uint)((ulong)param_6 >> 0x20);
  *(int *)(puVar15 + 8) = (int)param_5;
  *(int *)(puVar15 + 10) = (int)param_4;
  *(uint *)(puVar15 + 4) = (uVar3 >> 4 & 0x3f) << 6 | 0x3010000 | (uVar3 & 0xf) << 0xc;
  *(int *)(puVar15 + 6) = (int)param_6;
  uVar3 = (uint)((ulong)param_4 >> 0x20);
  uVar5 = (uint)((ulong)param_2 >> 0x20);
  *(uint *)(puVar15 + 0xc) =
       (uVar3 >> 4 & 0x3fffff) << 2 | 1 | ((uint)((ulong)param_5 >> 0x20) & 0xf) << 0x18 |
       uVar3 << 0x1c;
  *(int *)(puVar15 + 0xe) = (int)param_3;
  *(int *)(puVar15 + 0x10) = (int)param_2;
  *(uint *)(puVar15 + 0x12) =
       (uVar5 >> 4 & 0x3fffff) << 2 | 1 | ((uint)((ulong)param_3 >> 0x20) & 0xf) << 0x18 |
       uVar5 << 0x1c;
  puVar11[4] = param_7;
  if ((int)uVar16 == 0) {
    uVar16 = (ulong)*param_1;
  }
  iVar10 = FUN_710076d0c0(uVar16 & 0xffffffff);
  if (iVar10 == 0) {
    plVar4 = (long *)tpidrro_el0;
    if (*plVar4 < 0) {
      uVar3 = *(uint *)(plVar4 + 1);
      plVar14 = (long *)((long)plVar4 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar14 = (long *)((long)plVar4 + 0xc);
      }
      lVar17 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar14 = plVar4 + 1;
      lVar17 = 0;
    }
    iVar10 = 0x5f59;
    piVar1 = (int *)((long)plVar4 +
                    ((long)plVar14 +
                     ((lVar17 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
                    0xfffffffffffffff0));
    piVar2 = piVar1 + 4;
    if (uVar8 == 0) {
      piVar2 = piVar1;
    }
    if (*piVar2 == 0x4f434653) {
      iVar10 = piVar2[2];
    }
  }
  if (iVar13 != -1) {
    FUN_710076d6f0(0x7100d16e80);
    return iVar10;
  }
  return iVar10;
}



// ===== FUN_7100754480 @ 7100754480 (size=28) =====

void FUN_7100754480(undefined8 param_1,undefined8 param_2)

{
  FUN_71007541f0(param_1,0,0,0,0,param_2,0);
  return;
}



// ===== thunk_FUN_71007520b0 @ 71007544a0 (size=4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_71007520b0(int *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (_DAT_7100d16ed8 == *param_1) {
    iVar3 = FUN_710076d640(0x7100d16e80);
    iVar1 = param_1[2];
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 0x800000004;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 2) = 2;
    *(int *)((long)puVar2 + 0x14) = iVar1;
    FUN_710076d0c0(*(undefined4 *)((long)iVar3 * 4 + 0x7100d16e80));
    FUN_710076d6f0(0x7100d16e80,iVar3);
    return;
  }
  if (param_1[1] == 0) {
    iVar1 = param_1[2];
    if (iVar1 == 0) goto LAB_71007520f4;
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 0x800000004;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 2) = 2;
    *(int *)((long)puVar2 + 0x14) = iVar1;
    FUN_710076d0c0();
    iVar1 = param_1[1];
  }
  else {
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 2;
    FUN_710076d0c0();
    iVar1 = param_1[1];
  }
  if (iVar1 != 0) {
    FUN_710076d060(*param_1);
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
LAB_71007520f4:
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// ===== FUN_71007544b0 @ 71007544b0 (size=532) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_71007544b0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,undefined8 *param_6)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  long *plVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined2 *puVar12;
  undefined2 uVar13;
  undefined4 *puVar14;
  ulong uVar15;
  uint *extraout_x8;
  uint *puVar16;
  uint *extraout_x8_00;
  uint uVar17;
  int iVar18;
  undefined1 auVar19 [12];
  
  uVar11 = param_4;
  if (*param_1 == _DAT_7100d16ed8) {
    uVar8 = FUN_710076d640(0x7100d16e80);
    iVar18 = (int)uVar8;
    puVar12 = (undefined2 *)tpidrro_el0;
    uVar15 = (ulong)*(uint *)((long)iVar18 * 4 + 0x7100d16e80);
    auVar19 = FUN_710076d158(param_1,uVar8,0x12);
    uVar9 = auVar19._8_4_;
    iVar6 = *(int *)(auVar19._0_8_ + 0x2e7e4);
    uVar17 = extraout_x8_00[2];
    puVar16 = extraout_x8_00;
  }
  else {
    lVar7 = FUN_710076d158();
    uVar17 = extraout_x8[2];
    uVar15 = 0;
    iVar18 = -1;
    iVar6 = *(int *)(lVar7 + 0x2e7e4);
    puVar12 = (undefined2 *)tpidrro_el0;
    uVar9 = 0x12;
    puVar16 = extraout_x8;
    if (uVar17 == 0) {
      uVar9 = 0xe;
    }
  }
  bVar5 = iVar6 != 0;
  *(undefined4 *)(puVar12 + 2) = uVar9;
  uVar13 = 4;
  if (bVar5) {
    uVar13 = 6;
  }
  *puVar12 = uVar13;
  puVar14 = (undefined4 *)(puVar12 + 0x10);
  puVar12[1] = 0x100;
  if (uVar17 != 0) {
    *(undefined4 *)(puVar12 + 0x14) = 0;
    *(int *)(puVar12 + 0x16) = iVar6;
    puVar14 = (undefined4 *)(puVar12 + 0x18);
    iVar6 = 0;
    *(undefined4 *)(puVar12 + 0x10) = 0x280001;
    *(uint *)(puVar12 + 0x12) = uVar17;
  }
  puVar14[2] = 0;
  puVar14[3] = iVar6;
  *puVar14 = 0x49434653;
  puVar14[1] = (uint)bVar5;
  uVar3 = (uint)((ulong)param_3 >> 0x20);
  *(int *)(puVar12 + 4) = (int)uVar11;
  *(int *)(puVar12 + 6) = (int)param_3;
  *(uint *)(puVar12 + 8) =
       (uVar3 >> 4 & 0x3fffff) << 2 | 1 | ((uint)((ulong)uVar11 >> 0x20) & 0xf) << 0x18 |
       uVar3 << 0x1c;
  *(ulong *)(puVar14 + 4) = (ulong)param_5;
  *(undefined8 *)(puVar14 + 6) = param_2;
  *(undefined8 *)(puVar14 + 8) = param_4;
  if ((int)uVar15 == 0) {
    uVar15 = (ulong)*puVar16;
  }
  iVar6 = FUN_710076d0c0(uVar15 & 0xffffffff);
  if (iVar6 == 0) {
    plVar4 = (long *)tpidrro_el0;
    if (*plVar4 < 0) {
      uVar3 = *(uint *)(plVar4 + 1);
      plVar10 = (long *)((long)plVar4 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar10 = (long *)((long)plVar4 + 0xc);
      }
      lVar7 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar10 = plVar4 + 1;
      lVar7 = 0;
    }
    piVar1 = (int *)((long)plVar4 +
                    ((long)plVar10 +
                     ((lVar7 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
                    0xfffffffffffffff0));
    iVar6 = 0x5f59;
    piVar2 = piVar1 + 4;
    if (uVar17 == 0) {
      piVar2 = piVar1;
    }
    if (((*piVar2 == 0x4f434653) && (iVar6 = piVar2[2], iVar6 == 0)) &&
       (param_6 != (undefined8 *)0x0)) {
      *param_6 = *(undefined8 *)(piVar2 + 4);
    }
  }
  if (iVar18 != -1) {
    FUN_710076d6f0(0x7100d16e80,iVar18);
  }
  return iVar6;
}



// ===== FUN_71007546d0 @ 71007546d0 (size=504) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_71007546d0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  long *plVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined2 *puVar12;
  undefined2 uVar13;
  undefined4 *puVar14;
  ulong uVar15;
  uint *extraout_x8;
  uint *puVar16;
  uint *extraout_x8_00;
  uint uVar17;
  int iVar18;
  undefined1 auVar19 [12];
  
  uVar11 = param_4;
  if (*param_1 == _DAT_7100d16ed8) {
    uVar8 = FUN_710076d640(0x7100d16e80);
    iVar18 = (int)uVar8;
    puVar12 = (undefined2 *)tpidrro_el0;
    uVar15 = (ulong)*(uint *)((long)iVar18 * 4 + 0x7100d16e80);
    auVar19 = FUN_710076d158(param_1,uVar8,0x12);
    uVar9 = auVar19._8_4_;
    iVar6 = *(int *)(auVar19._0_8_ + 0x2e7e4);
    uVar17 = extraout_x8_00[2];
    puVar16 = extraout_x8_00;
  }
  else {
    lVar7 = FUN_710076d158();
    uVar17 = extraout_x8[2];
    uVar15 = 0;
    iVar18 = -1;
    iVar6 = *(int *)(lVar7 + 0x2e7e4);
    puVar12 = (undefined2 *)tpidrro_el0;
    uVar9 = 0x12;
    puVar16 = extraout_x8;
    if (uVar17 == 0) {
      uVar9 = 0xe;
    }
  }
  bVar5 = iVar6 != 0;
  *(undefined4 *)(puVar12 + 2) = uVar9;
  uVar13 = 4;
  if (bVar5) {
    uVar13 = 6;
  }
  *puVar12 = uVar13;
  puVar14 = (undefined4 *)(puVar12 + 0x10);
  puVar12[1] = 0x10;
  if (uVar17 != 0) {
    *(undefined4 *)(puVar12 + 0x14) = 0;
    *(int *)(puVar12 + 0x16) = iVar6;
    puVar14 = (undefined4 *)(puVar12 + 0x18);
    iVar6 = 0;
    *(undefined4 *)(puVar12 + 0x10) = 0x280001;
    *(uint *)(puVar12 + 0x12) = uVar17;
  }
  *puVar14 = 0x49434653;
  puVar14[1] = (uint)bVar5;
  uVar3 = (uint)((ulong)param_3 >> 0x20);
  puVar14[2] = 1;
  puVar14[3] = iVar6;
  *(int *)(puVar12 + 4) = (int)uVar11;
  *(int *)(puVar12 + 6) = (int)param_3;
  *(uint *)(puVar12 + 8) =
       (uVar3 >> 4 & 0x3fffff) << 2 | 1 | ((uint)((ulong)uVar11 >> 0x20) & 0xf) << 0x18 |
       uVar3 << 0x1c;
  *(ulong *)(puVar14 + 4) = (ulong)param_5;
  *(undefined8 *)(puVar14 + 6) = param_2;
  *(undefined8 *)(puVar14 + 8) = param_4;
  if ((int)uVar15 == 0) {
    uVar15 = (ulong)*puVar16;
  }
  iVar6 = FUN_710076d0c0(uVar15 & 0xffffffff);
  if (iVar6 == 0) {
    plVar4 = (long *)tpidrro_el0;
    if (*plVar4 < 0) {
      uVar3 = *(uint *)(plVar4 + 1);
      plVar10 = (long *)((long)plVar4 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar10 = (long *)((long)plVar4 + 0xc);
      }
      lVar7 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar10 = plVar4 + 1;
      lVar7 = 0;
    }
    piVar1 = (int *)((long)plVar4 +
                    ((long)plVar10 +
                     ((lVar7 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
                    0xfffffffffffffff0));
    iVar6 = 0x5f59;
    piVar2 = piVar1 + 4;
    if (uVar17 == 0) {
      piVar2 = piVar1;
    }
    if (*piVar2 == 0x4f434653) {
      iVar6 = piVar2[2];
    }
  }
  if (iVar18 != -1) {
    FUN_710076d6f0(0x7100d16e80,iVar18);
  }
  return iVar6;
}



// ===== FUN_71007548d0 @ 71007548d0 (size=8) =====

void FUN_71007548d0(undefined8 param_1)

{
  FUN_7100751480(param_1,2);
  return;
}



// ===== FUN_71007548e0 @ 71007548e0 (size=448) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_71007548e0(int *param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  long *plVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined4 *puVar10;
  long *plVar11;
  undefined2 *puVar12;
  undefined2 uVar13;
  ulong uVar14;
  uint *extraout_x8;
  uint *puVar15;
  uint *extraout_x8_00;
  uint uVar16;
  
  if (*param_1 == _DAT_7100d16ed8) {
    iVar8 = FUN_710076d640(0x7100d16e80);
    uVar6 = 0xe;
    puVar12 = (undefined2 *)tpidrro_el0;
    uVar14 = (ulong)*(uint *)((long)iVar8 * 4 + 0x7100d16e80);
    lVar9 = FUN_710076d158(param_1);
    iVar7 = *(int *)(lVar9 + 0x2e7e4);
    uVar16 = extraout_x8_00[2];
    puVar15 = extraout_x8_00;
  }
  else {
    uVar16 = param_1[2];
    uVar14 = 0;
    iVar8 = -1;
    lVar9 = FUN_710076d158();
    iVar7 = *(int *)(lVar9 + 0x2e7e4);
    puVar12 = (undefined2 *)tpidrro_el0;
    uVar6 = 0xe;
    puVar15 = extraout_x8;
    if (uVar16 == 0) {
      uVar6 = 10;
    }
  }
  bVar5 = iVar7 != 0;
  puVar12[1] = 0;
  uVar13 = 4;
  if (bVar5) {
    uVar13 = 6;
  }
  *puVar12 = uVar13;
  *(undefined4 *)(puVar12 + 2) = uVar6;
  if (uVar16 == 0) {
    puVar10 = (undefined4 *)(puVar12 + 8);
  }
  else {
    *(undefined4 *)(puVar12 + 0xc) = 0;
    *(int *)(puVar12 + 0xe) = iVar7;
    puVar10 = (undefined4 *)(puVar12 + 0x10);
    iVar7 = 0;
    *(undefined4 *)(puVar12 + 8) = 0x180001;
    *(uint *)(puVar12 + 10) = uVar16;
  }
  *(undefined8 *)(puVar10 + 4) = param_2;
  *puVar10 = 0x49434653;
  puVar10[1] = (uint)bVar5;
  puVar10[2] = 3;
  puVar10[3] = iVar7;
  if ((int)uVar14 == 0) {
    uVar14 = (ulong)*puVar15;
  }
  iVar7 = FUN_710076d0c0(uVar14 & 0xffffffff);
  if (iVar7 == 0) {
    plVar4 = (long *)tpidrro_el0;
    if (*plVar4 < 0) {
      uVar3 = *(uint *)(plVar4 + 1);
      plVar11 = (long *)((long)plVar4 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar11 = (long *)((long)plVar4 + 0xc);
      }
      lVar9 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar11 = plVar4 + 1;
      lVar9 = 0;
    }
    piVar1 = (int *)((long)plVar4 +
                    ((long)plVar11 +
                     ((lVar9 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
                    0xfffffffffffffff0));
    iVar7 = 0x5f59;
    piVar2 = piVar1 + 4;
    if (uVar16 == 0) {
      piVar2 = piVar1;
    }
    if (*piVar2 == 0x4f434653) {
      iVar7 = piVar2[2];
    }
  }
  if (iVar8 != -1) {
    FUN_710076d6f0(0x7100d16e80,iVar8);
  }
  return iVar7;
}



// ===== FUN_7100754aa0 @ 7100754aa0 (size=468) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100754aa0(int *param_1,undefined8 *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  long *plVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined4 *puVar12;
  long *plVar13;
  undefined2 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [12];
  
  iVar7 = *param_1;
  if (iVar7 == _DAT_7100d16ed8) {
    uVar9 = FUN_710076d640(0x7100d16e80);
    iVar17 = (int)uVar9;
    uVar6 = 0xc;
    auVar18 = FUN_710076d158(uVar9,*(undefined4 *)((long)iVar17 * 4 + 0x7100d16e80));
    iVar10 = auVar18._8_4_;
    iVar15 = *(int *)(auVar18._0_8_ + 0x2e7e4);
    iVar7 = *param_1;
    iVar16 = param_1[2];
    puVar11 = (undefined2 *)tpidrro_el0;
  }
  else {
    iVar16 = param_1[2];
    iVar17 = -1;
    auVar18 = FUN_710076d158(_DAT_7100d16ed8,0);
    iVar10 = auVar18._8_4_;
    iVar15 = *(int *)(auVar18._0_8_ + 0x2e7e4);
    puVar11 = (undefined2 *)tpidrro_el0;
    uVar6 = 0xc;
    if (iVar16 == 0) {
      uVar6 = 8;
    }
  }
  bVar5 = iVar15 != 0;
  puVar11[1] = 0;
  uVar14 = 4;
  if (bVar5) {
    uVar14 = 6;
  }
  *puVar11 = uVar14;
  *(undefined4 *)(puVar11 + 2) = uVar6;
  if (iVar16 == 0) {
    puVar12 = (undefined4 *)(puVar11 + 8);
  }
  else {
    *(undefined4 *)(puVar11 + 0xc) = 0;
    *(int *)(puVar11 + 0xe) = iVar15;
    puVar12 = (undefined4 *)(puVar11 + 0x10);
    iVar15 = 0;
    *(undefined4 *)(puVar11 + 8) = 0x100001;
    *(int *)(puVar11 + 10) = iVar16;
  }
  *puVar12 = 0x49434653;
  puVar12[1] = (uint)bVar5;
  puVar12[2] = 4;
  puVar12[3] = iVar15;
  if (iVar10 != 0) {
    iVar7 = iVar10;
  }
  iVar7 = FUN_710076d0c0(iVar7);
  if (iVar7 == 0) {
    plVar4 = (long *)tpidrro_el0;
    if (*plVar4 < 0) {
      uVar3 = *(uint *)(plVar4 + 1);
      plVar13 = (long *)((long)plVar4 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar13 = (long *)((long)plVar4 + 0xc);
      }
      lVar8 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar13 = plVar4 + 1;
      lVar8 = 0;
    }
    piVar1 = (int *)((long)plVar4 +
                    ((long)plVar13 +
                     ((lVar8 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
                    0xfffffffffffffff0));
    iVar7 = 0x5f59;
    piVar2 = piVar1 + 4;
    if (iVar16 == 0) {
      piVar2 = piVar1;
    }
    if (((*piVar2 == 0x4f434653) && (iVar7 = piVar2[2], iVar7 == 0)) &&
       (param_2 != (undefined8 *)0x0)) {
      *param_2 = *(undefined8 *)(piVar2 + 4);
    }
  }
  if (iVar17 != -1) {
    FUN_710076d6f0(0x7100d16e80,iVar17);
  }
  return iVar7;
}



// ===== thunk_FUN_71007520b0 @ 7100754c80 (size=4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_71007520b0(int *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (_DAT_7100d16ed8 == *param_1) {
    iVar3 = FUN_710076d640(0x7100d16e80);
    iVar1 = param_1[2];
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 0x800000004;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 2) = 2;
    *(int *)((long)puVar2 + 0x14) = iVar1;
    FUN_710076d0c0(*(undefined4 *)((long)iVar3 * 4 + 0x7100d16e80));
    FUN_710076d6f0(0x7100d16e80,iVar3);
    return;
  }
  if (param_1[1] == 0) {
    iVar1 = param_1[2];
    if (iVar1 == 0) goto LAB_71007520f4;
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 0x800000004;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 2) = 2;
    *(int *)((long)puVar2 + 0x14) = iVar1;
    FUN_710076d0c0();
    iVar1 = param_1[1];
  }
  else {
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 2;
    FUN_710076d0c0();
    iVar1 = param_1[1];
  }
  if (iVar1 != 0) {
    FUN_710076d060(*param_1);
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
LAB_71007520f4:
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// ===== thunk_FUN_71007520b0 @ 7100754c90 (size=4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_71007520b0(int *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (_DAT_7100d16ed8 == *param_1) {
    iVar3 = FUN_710076d640(0x7100d16e80);
    iVar1 = param_1[2];
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 0x800000004;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 2) = 2;
    *(int *)((long)puVar2 + 0x14) = iVar1;
    FUN_710076d0c0(*(undefined4 *)((long)iVar3 * 4 + 0x7100d16e80));
    FUN_710076d6f0(0x7100d16e80,iVar3);
    return;
  }
  if (param_1[1] == 0) {
    iVar1 = param_1[2];
    if (iVar1 == 0) goto LAB_71007520f4;
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 0x800000004;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 2) = 2;
    *(int *)((long)puVar2 + 0x14) = iVar1;
    FUN_710076d0c0();
    iVar1 = param_1[1];
  }
  else {
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 2;
    FUN_710076d0c0();
    iVar1 = param_1[1];
  }
  if (iVar1 != 0) {
    FUN_710076d060(*param_1);
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
LAB_71007520f4:
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// ===== FUN_7100754ca0 @ 7100754ca0 (size=516) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100754ca0(int *param_1,undefined8 *param_2,long param_3,undefined8 param_4)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  long *plVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  long *plVar12;
  undefined2 uVar13;
  undefined2 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [12];
  
  iVar7 = *param_1;
  if (iVar7 == _DAT_7100d16ed8) {
    uVar9 = FUN_710076d640(0x7100d16e80);
    iVar17 = (int)uVar9;
    puVar14 = (undefined2 *)tpidrro_el0;
    iVar15 = *(int *)((long)iVar17 * 4 + 0x7100d16e80);
    auVar18 = FUN_710076d158(uVar9,0xc);
    uVar10 = auVar18._8_4_;
    iVar6 = *(int *)(auVar18._0_8_ + 0x2e7e4);
    iVar7 = *param_1;
    iVar16 = param_1[2];
  }
  else {
    lVar8 = FUN_710076d158();
    iVar16 = param_1[2];
    iVar15 = 0;
    iVar17 = -1;
    iVar6 = *(int *)(lVar8 + 0x2e7e4);
    puVar14 = (undefined2 *)tpidrro_el0;
    uVar10 = 0xc;
    if (iVar16 == 0) {
      uVar10 = 8;
    }
  }
  bVar5 = iVar6 != 0;
  *(undefined4 *)(puVar14 + 2) = uVar10;
  puVar11 = (undefined4 *)(puVar14 + 0x10);
  uVar13 = 4;
  if (bVar5) {
    uVar13 = 6;
  }
  *puVar14 = uVar13;
  puVar14[1] = 0x100;
  if (iVar16 != 0) {
    *(undefined4 *)(puVar14 + 0x14) = 0;
    *(int *)(puVar14 + 0x16) = iVar6;
    iVar6 = 0;
    *(undefined4 *)(puVar14 + 0x10) = 0x100001;
    *(int *)(puVar14 + 0x12) = iVar16;
    puVar11 = (undefined4 *)(puVar14 + 0x18);
  }
  puVar11[2] = 0;
  puVar11[3] = iVar6;
  if (iVar15 != 0) {
    iVar7 = iVar15;
  }
  *puVar11 = 0x49434653;
  puVar11[1] = (uint)bVar5;
  uVar3 = (uint)((ulong)param_4 >> 0x20);
  *(int *)(puVar14 + 4) = (int)(param_3 * 0x310);
  *(int *)(puVar14 + 6) = (int)param_4;
  *(uint *)(puVar14 + 8) =
       (uVar3 >> 4 & 0x3fffff) << 2 | ((uint)((ulong)(param_3 * 0x310) >> 0x20) & 0xf) << 0x18 |
       uVar3 << 0x1c;
  iVar7 = FUN_710076d0c0(iVar7);
  if (iVar7 == 0) {
    plVar4 = (long *)tpidrro_el0;
    if (*plVar4 < 0) {
      uVar3 = *(uint *)(plVar4 + 1);
      plVar12 = (long *)((long)plVar4 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar12 = (long *)((long)plVar4 + 0xc);
      }
      lVar8 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar12 = plVar4 + 1;
      lVar8 = 0;
    }
    piVar1 = (int *)((long)plVar4 +
                    ((long)plVar12 +
                     ((lVar8 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
                    0xfffffffffffffff0));
    iVar7 = 0x5f59;
    piVar2 = piVar1 + 4;
    if (iVar16 == 0) {
      piVar2 = piVar1;
    }
    if (((*piVar2 == 0x4f434653) && (iVar7 = piVar2[2], iVar7 == 0)) &&
       (param_2 != (undefined8 *)0x0)) {
      *param_2 = *(undefined8 *)(piVar2 + 4);
    }
  }
  if (iVar17 != -1) {
    FUN_710076d6f0(0x7100d16e80,iVar17);
  }
  return iVar7;
}



// ===== FUN_7100754eb0 @ 7100754eb0 (size=468) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100754eb0(int *param_1,undefined8 *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  long *plVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined4 *puVar12;
  long *plVar13;
  undefined2 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [12];
  
  iVar7 = *param_1;
  if (iVar7 == _DAT_7100d16ed8) {
    uVar9 = FUN_710076d640(0x7100d16e80);
    iVar17 = (int)uVar9;
    uVar6 = 0xc;
    auVar18 = FUN_710076d158(uVar9,*(undefined4 *)((long)iVar17 * 4 + 0x7100d16e80));
    iVar10 = auVar18._8_4_;
    iVar15 = *(int *)(auVar18._0_8_ + 0x2e7e4);
    iVar7 = *param_1;
    iVar16 = param_1[2];
    puVar11 = (undefined2 *)tpidrro_el0;
  }
  else {
    iVar16 = param_1[2];
    iVar17 = -1;
    auVar18 = FUN_710076d158(_DAT_7100d16ed8,0);
    iVar10 = auVar18._8_4_;
    iVar15 = *(int *)(auVar18._0_8_ + 0x2e7e4);
    puVar11 = (undefined2 *)tpidrro_el0;
    uVar6 = 0xc;
    if (iVar16 == 0) {
      uVar6 = 8;
    }
  }
  bVar5 = iVar15 != 0;
  puVar11[1] = 0;
  uVar14 = 4;
  if (bVar5) {
    uVar14 = 6;
  }
  *puVar11 = uVar14;
  *(undefined4 *)(puVar11 + 2) = uVar6;
  if (iVar16 == 0) {
    puVar12 = (undefined4 *)(puVar11 + 8);
  }
  else {
    *(undefined4 *)(puVar11 + 0xc) = 0;
    *(int *)(puVar11 + 0xe) = iVar15;
    puVar12 = (undefined4 *)(puVar11 + 0x10);
    iVar15 = 0;
    *(undefined4 *)(puVar11 + 8) = 0x100001;
    *(int *)(puVar11 + 10) = iVar16;
  }
  *puVar12 = 0x49434653;
  puVar12[1] = (uint)bVar5;
  puVar12[2] = 1;
  puVar12[3] = iVar15;
  if (iVar10 != 0) {
    iVar7 = iVar10;
  }
  iVar7 = FUN_710076d0c0(iVar7);
  if (iVar7 == 0) {
    plVar4 = (long *)tpidrro_el0;
    if (*plVar4 < 0) {
      uVar3 = *(uint *)(plVar4 + 1);
      plVar13 = (long *)((long)plVar4 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar13 = (long *)((long)plVar4 + 0xc);
      }
      lVar8 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar13 = plVar4 + 1;
      lVar8 = 0;
    }
    piVar1 = (int *)((long)plVar4 +
                    ((long)plVar13 +
                     ((lVar8 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
                    0xfffffffffffffff0));
    iVar7 = 0x5f59;
    piVar2 = piVar1 + 4;
    if (iVar16 == 0) {
      piVar2 = piVar1;
    }
    if (((*piVar2 == 0x4f434653) && (iVar7 = piVar2[2], iVar7 == 0)) &&
       (param_2 != (undefined8 *)0x0)) {
      *param_2 = *(undefined8 *)(piVar2 + 4);
    }
  }
  if (iVar17 != -1) {
    FUN_710076d6f0(0x7100d16e80,iVar17);
  }
  return iVar7;
}



// ===== FUN_7100755090 @ 7100755090 (size=488) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100755090(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  long *plVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  long *plVar10;
  undefined2 *puVar11;
  undefined2 uVar12;
  undefined4 *puVar13;
  ulong uVar14;
  ulong extraout_x9;
  uint *extraout_x10;
  uint *puVar15;
  uint *extraout_x10_00;
  uint uVar16;
  int iVar17;
  undefined1 auVar18 [12];
  
  if (*param_1 == _DAT_7100d16ed8) {
    uVar8 = FUN_710076d640(0x7100d16e80);
    iVar17 = (int)uVar8;
    puVar11 = (undefined2 *)tpidrro_el0;
    auVar18 = FUN_710076d158(uVar8,0x10);
    uVar9 = auVar18._8_4_;
    iVar6 = *(int *)(auVar18._0_8_ + 0x2e7e4);
    uVar16 = extraout_x10_00[2];
    uVar14 = extraout_x9;
    puVar15 = extraout_x10_00;
  }
  else {
    lVar7 = FUN_710076d158();
    uVar16 = extraout_x10[2];
    uVar14 = 0;
    iVar17 = -1;
    iVar6 = *(int *)(lVar7 + 0x2e7e4);
    puVar11 = (undefined2 *)tpidrro_el0;
    uVar9 = 0x10;
    puVar15 = extraout_x10;
    if (uVar16 == 0) {
      uVar9 = 0xc;
    }
  }
  bVar5 = iVar6 != 0;
  *(undefined4 *)(puVar11 + 2) = uVar9;
  uVar12 = 4;
  if (bVar5) {
    uVar12 = 6;
  }
  *puVar11 = uVar12;
  puVar13 = (undefined4 *)(puVar11 + 0x10);
  puVar11[1] = 0x100;
  if (uVar16 != 0) {
    *(undefined4 *)(puVar11 + 0x14) = 0;
    *(int *)(puVar11 + 0x16) = iVar6;
    puVar13 = (undefined4 *)(puVar11 + 0x18);
    iVar6 = 0;
    *(undefined4 *)(puVar11 + 0x10) = 0x200001;
    *(uint *)(puVar11 + 0x12) = uVar16;
  }
  puVar13[2] = 0;
  puVar13[3] = iVar6;
  *puVar13 = 0x49434653;
  puVar13[1] = (uint)bVar5;
  uVar3 = (uint)((ulong)param_3 >> 0x20);
  *(int *)(puVar11 + 4) = (int)param_4;
  *(int *)(puVar11 + 6) = (int)param_3;
  *(uint *)(puVar11 + 8) =
       (uVar3 >> 4 & 0x3fffff) << 2 | 1 | ((uint)((ulong)param_4 >> 0x20) & 0xf) << 0x18 |
       uVar3 << 0x1c;
  *(undefined8 *)(puVar13 + 4) = param_2;
  *(undefined8 *)(puVar13 + 6) = param_4;
  if ((int)uVar14 == 0) {
    uVar14 = (ulong)*puVar15;
  }
  iVar6 = FUN_710076d0c0(uVar14 & 0xffffffff);
  if (iVar6 == 0) {
    plVar4 = (long *)tpidrro_el0;
    if (*plVar4 < 0) {
      uVar3 = *(uint *)(plVar4 + 1);
      plVar10 = (long *)((long)plVar4 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar10 = (long *)((long)plVar4 + 0xc);
      }
      lVar7 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar10 = plVar4 + 1;
      lVar7 = 0;
    }
    piVar1 = (int *)((long)plVar4 +
                    ((long)plVar10 +
                     ((lVar7 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
                    0xfffffffffffffff0));
    iVar6 = 0x5f59;
    piVar2 = piVar1 + 4;
    if (uVar16 == 0) {
      piVar2 = piVar1;
    }
    if (*piVar2 == 0x4f434653) {
      iVar6 = piVar2[2];
    }
  }
  if (iVar17 != -1) {
    FUN_710076d6f0(0x7100d16e80,iVar17);
  }
  return iVar6;
}



// ===== thunk_FUN_7100754aa0 @ 7100755280 (size=4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int thunk_FUN_7100754aa0(int *param_1,undefined8 *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  long *plVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined4 *puVar12;
  long *plVar13;
  undefined2 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [12];
  
  iVar7 = *param_1;
  if (iVar7 == _DAT_7100d16ed8) {
    uVar9 = FUN_710076d640(0x7100d16e80);
    iVar17 = (int)uVar9;
    uVar6 = 0xc;
    auVar18 = FUN_710076d158(uVar9,*(undefined4 *)((long)iVar17 * 4 + 0x7100d16e80));
    iVar10 = auVar18._8_4_;
    iVar15 = *(int *)(auVar18._0_8_ + 0x2e7e4);
    iVar7 = *param_1;
    iVar16 = param_1[2];
    puVar11 = (undefined2 *)tpidrro_el0;
  }
  else {
    iVar16 = param_1[2];
    iVar17 = -1;
    auVar18 = FUN_710076d158(_DAT_7100d16ed8,0);
    iVar10 = auVar18._8_4_;
    iVar15 = *(int *)(auVar18._0_8_ + 0x2e7e4);
    puVar11 = (undefined2 *)tpidrro_el0;
    uVar6 = 0xc;
    if (iVar16 == 0) {
      uVar6 = 8;
    }
  }
  bVar5 = iVar15 != 0;
  puVar11[1] = 0;
  uVar14 = 4;
  if (bVar5) {
    uVar14 = 6;
  }
  *puVar11 = uVar14;
  *(undefined4 *)(puVar11 + 2) = uVar6;
  if (iVar16 == 0) {
    puVar12 = (undefined4 *)(puVar11 + 8);
  }
  else {
    *(undefined4 *)(puVar11 + 0xc) = 0;
    *(int *)(puVar11 + 0xe) = iVar15;
    puVar12 = (undefined4 *)(puVar11 + 0x10);
    iVar15 = 0;
    *(undefined4 *)(puVar11 + 8) = 0x100001;
    *(int *)(puVar11 + 10) = iVar16;
  }
  *puVar12 = 0x49434653;
  puVar12[1] = (uint)bVar5;
  puVar12[2] = 4;
  puVar12[3] = iVar15;
  if (iVar10 != 0) {
    iVar7 = iVar10;
  }
  iVar7 = FUN_710076d0c0(iVar7);
  if (iVar7 == 0) {
    plVar4 = (long *)tpidrro_el0;
    if (*plVar4 < 0) {
      uVar3 = *(uint *)(plVar4 + 1);
      plVar13 = (long *)((long)plVar4 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar13 = (long *)((long)plVar4 + 0xc);
      }
      lVar8 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar13 = plVar4 + 1;
      lVar8 = 0;
    }
    piVar1 = (int *)((long)plVar4 +
                    ((long)plVar13 +
                     ((lVar8 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
                    0xfffffffffffffff0));
    iVar7 = 0x5f59;
    piVar2 = piVar1 + 4;
    if (iVar16 == 0) {
      piVar2 = piVar1;
    }
    if (((*piVar2 == 0x4f434653) && (iVar7 = piVar2[2], iVar7 == 0)) &&
       (param_2 != (undefined8 *)0x0)) {
      *param_2 = *(undefined8 *)(piVar2 + 4);
    }
  }
  if (iVar17 != -1) {
    FUN_710076d6f0(0x7100d16e80,iVar17);
  }
  return iVar7;
}



// ===== thunk_FUN_71007520b0 @ 7100755290 (size=4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_71007520b0(int *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (_DAT_7100d16ed8 == *param_1) {
    iVar3 = FUN_710076d640(0x7100d16e80);
    iVar1 = param_1[2];
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 0x800000004;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 2) = 2;
    *(int *)((long)puVar2 + 0x14) = iVar1;
    FUN_710076d0c0(*(undefined4 *)((long)iVar3 * 4 + 0x7100d16e80));
    FUN_710076d6f0(0x7100d16e80,iVar3);
    return;
  }
  if (param_1[1] == 0) {
    iVar1 = param_1[2];
    if (iVar1 == 0) goto LAB_71007520f4;
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 0x800000004;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 2) = 2;
    *(int *)((long)puVar2 + 0x14) = iVar1;
    FUN_710076d0c0();
    iVar1 = param_1[1];
  }
  else {
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 2;
    FUN_710076d0c0();
    iVar1 = param_1[1];
  }
  if (iVar1 != 0) {
    FUN_710076d060(*param_1);
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
LAB_71007520f4:
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// ===== FUN_71007552a0 @ 71007552a0 (size=516) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_71007552a0(int *param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  long *plVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  long *plVar12;
  undefined2 uVar13;
  undefined2 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [12];
  
  iVar7 = *param_1;
  if (iVar7 == _DAT_7100d16ed8) {
    uVar9 = FUN_710076d640(0x7100d16e80);
    iVar17 = (int)uVar9;
    iVar15 = *(int *)((long)iVar17 * 4 + 0x7100d16e80);
    auVar18 = FUN_710076d158(uVar9,0xc);
    uVar10 = auVar18._8_4_;
    iVar7 = *param_1;
    iVar16 = param_1[2];
    puVar14 = (undefined2 *)tpidrro_el0;
    iVar6 = *(int *)(auVar18._0_8_ + 0x2e7e4);
  }
  else {
    lVar8 = FUN_710076d158();
    iVar16 = param_1[2];
    iVar15 = 0;
    iVar17 = -1;
    iVar6 = *(int *)(lVar8 + 0x2e7e4);
    puVar14 = (undefined2 *)tpidrro_el0;
    uVar10 = 0xc;
    if (iVar16 == 0) {
      uVar10 = 8;
    }
  }
  bVar5 = iVar6 != 0;
  uVar13 = 4;
  if (bVar5) {
    uVar13 = 6;
  }
  *puVar14 = uVar13;
  *(undefined4 *)(puVar14 + 2) = uVar10;
  puVar11 = (undefined4 *)(puVar14 + 0x10);
  puVar14[1] = 0x100;
  if (iVar16 != 0) {
    *(undefined4 *)(puVar14 + 0x14) = 0;
    *(int *)(puVar14 + 0x16) = iVar6;
    iVar6 = 0;
    *(undefined4 *)(puVar14 + 0x10) = 0x100001;
    *(int *)(puVar14 + 0x12) = iVar16;
    puVar11 = (undefined4 *)(puVar14 + 0x18);
  }
  puVar11[2] = 0;
  puVar11[3] = iVar6;
  if (iVar15 != 0) {
    iVar7 = iVar15;
  }
  *puVar11 = 0x49434653;
  puVar11[1] = (uint)bVar5;
  uVar3 = (uint)((ulong)param_2 >> 0x20);
  *(int *)(puVar14 + 4) = (int)(param_3 * 0x60);
  *(int *)(puVar14 + 6) = (int)param_2;
  *(uint *)(puVar14 + 8) =
       (uVar3 >> 4 & 0x3fffff) << 2 | ((uint)((ulong)(param_3 * 0x60) >> 0x20) & 0xf) << 0x18 |
       uVar3 << 0x1c;
  iVar7 = FUN_710076d0c0(iVar7);
  if (iVar7 == 0) {
    plVar4 = (long *)tpidrro_el0;
    if (*plVar4 < 0) {
      uVar3 = *(uint *)(plVar4 + 1);
      plVar12 = (long *)((long)plVar4 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar12 = (long *)((long)plVar4 + 0xc);
      }
      lVar8 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar12 = plVar4 + 1;
      lVar8 = 0;
    }
    piVar1 = (int *)((long)plVar4 +
                    ((long)plVar12 +
                     ((lVar8 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
                    0xfffffffffffffff0));
    iVar7 = 0x5f59;
    piVar2 = piVar1 + 4;
    if (iVar16 == 0) {
      piVar2 = piVar1;
    }
    if (((*piVar2 == 0x4f434653) && (iVar7 = piVar2[2], iVar7 == 0)) &&
       (param_4 != (undefined8 *)0x0)) {
      *param_4 = *(undefined8 *)(piVar2 + 4);
    }
  }
  if (iVar17 != -1) {
    FUN_710076d6f0(0x7100d16e80,iVar17);
  }
  return iVar7;
}



// ===== thunk_FUN_71007520b0 @ 71007554b0 (size=4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_71007520b0(int *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (_DAT_7100d16ed8 == *param_1) {
    iVar3 = FUN_710076d640(0x7100d16e80);
    iVar1 = param_1[2];
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 0x800000004;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 2) = 2;
    *(int *)((long)puVar2 + 0x14) = iVar1;
    FUN_710076d0c0(*(undefined4 *)((long)iVar3 * 4 + 0x7100d16e80));
    FUN_710076d6f0(0x7100d16e80,iVar3);
    return;
  }
  if (param_1[1] == 0) {
    iVar1 = param_1[2];
    if (iVar1 == 0) goto LAB_71007520f4;
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 0x800000004;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 2) = 2;
    *(int *)((long)puVar2 + 0x14) = iVar1;
    FUN_710076d0c0();
    iVar1 = param_1[1];
  }
  else {
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 2;
    FUN_710076d0c0();
    iVar1 = param_1[1];
  }
  if (iVar1 != 0) {
    FUN_710076d060(*param_1);
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
LAB_71007520f4:
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// ===== FUN_71007554c0 @ 71007554c0 (size=84) =====

undefined8
FUN_71007554c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_7100769b90();
  if (0x1ffff < uVar1) {
    uVar2 = FUN_7100751eb0(param_1,param_2,param_3,param_4,2);
    return uVar2;
  }
  return 0x4b59;
}



// ===== FUN_7100755520 @ 7100755520 (size=68) =====

void FUN_7100755520(undefined4 param_1,byte *param_2)

{
  int iVar1;
  byte local_1;
  
  local_1 = 0;
  iVar1 = FUN_71007521b0(param_1,&local_1,200);
  if (iVar1 == 0 && param_2 != (byte *)0x0) {
    *param_2 = local_1 & 1;
  }
  return;
}



// ===== FUN_7100755570 @ 7100755570 (size=468) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100755570(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  long *plVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined4 *puVar12;
  long *plVar13;
  undefined2 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [12];
  
  iVar7 = *param_1;
  if (iVar7 == _DAT_7100d16ed8) {
    uVar9 = FUN_710076d640(0x7100d16e80);
    iVar17 = (int)uVar9;
    uVar6 = 0xc;
    auVar18 = FUN_710076d158(uVar9,*(undefined4 *)((long)iVar17 * 4 + 0x7100d16e80));
    iVar10 = auVar18._8_4_;
    iVar15 = *(int *)(auVar18._0_8_ + 0x2e7e4);
    iVar7 = *param_1;
    iVar16 = param_1[2];
    puVar11 = (undefined2 *)tpidrro_el0;
  }
  else {
    iVar16 = param_1[2];
    iVar17 = -1;
    auVar18 = FUN_710076d158(_DAT_7100d16ed8,0);
    iVar10 = auVar18._8_4_;
    iVar15 = *(int *)(auVar18._0_8_ + 0x2e7e4);
    puVar11 = (undefined2 *)tpidrro_el0;
    uVar6 = 0xc;
    if (iVar16 == 0) {
      uVar6 = 8;
    }
  }
  bVar5 = iVar15 != 0;
  puVar11[1] = 0;
  uVar14 = 4;
  if (bVar5) {
    uVar14 = 6;
  }
  *puVar11 = uVar14;
  *(undefined4 *)(puVar11 + 2) = uVar6;
  if (iVar16 == 0) {
    puVar12 = (undefined4 *)(puVar11 + 8);
  }
  else {
    *(undefined4 *)(puVar11 + 0xc) = 0;
    *(int *)(puVar11 + 0xe) = iVar15;
    puVar12 = (undefined4 *)(puVar11 + 0x10);
    iVar15 = 0;
    *(undefined4 *)(puVar11 + 8) = 0x100001;
    *(int *)(puVar11 + 10) = iVar16;
  }
  *puVar12 = 0x49434653;
  puVar12[1] = (uint)bVar5;
  puVar12[2] = 0xca;
  puVar12[3] = iVar15;
  if (iVar10 != 0) {
    iVar7 = iVar10;
  }
  iVar7 = FUN_710076d0c0(iVar7);
  if (iVar7 == 0) {
    plVar4 = (long *)tpidrro_el0;
    if (*plVar4 < 0) {
      uVar3 = *(uint *)(plVar4 + 1);
      plVar13 = (long *)((long)plVar4 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar13 = (long *)((long)plVar4 + 0xc);
      }
      lVar8 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar13 = plVar4 + 1;
      lVar8 = 0;
    }
    piVar1 = (int *)((long)plVar4 +
                    ((long)plVar13 +
                     ((lVar8 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
                    0xfffffffffffffff0));
    iVar7 = 0x5f59;
    piVar2 = piVar1 + 4;
    if (iVar16 == 0) {
      piVar2 = piVar1;
    }
    if (((*piVar2 == 0x4f434653) && (iVar7 = piVar2[2], iVar7 == 0)) && (param_2 != (int *)0x0)) {
      *param_2 = piVar2[4];
    }
  }
  if (iVar17 != -1) {
    FUN_710076d6f0(0x7100d16e80,iVar17);
  }
  return iVar7;
}



// ===== thunk_FUN_71007520b0 @ 7100755750 (size=4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_71007520b0(int *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (_DAT_7100d16ed8 == *param_1) {
    iVar3 = FUN_710076d640(0x7100d16e80);
    iVar1 = param_1[2];
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 0x800000004;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 2) = 2;
    *(int *)((long)puVar2 + 0x14) = iVar1;
    FUN_710076d0c0(*(undefined4 *)((long)iVar3 * 4 + 0x7100d16e80));
    FUN_710076d6f0(0x7100d16e80,iVar3);
    return;
  }
  if (param_1[1] == 0) {
    iVar1 = param_1[2];
    if (iVar1 == 0) goto LAB_71007520f4;
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 0x800000004;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 2) = 2;
    *(int *)((long)puVar2 + 0x14) = iVar1;
    FUN_710076d0c0();
    iVar1 = param_1[1];
  }
  else {
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 2;
    FUN_710076d0c0();
    iVar1 = param_1[1];
  }
  if (iVar1 != 0) {
    FUN_710076d060(*param_1);
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
LAB_71007520f4:
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// ===== FUN_7100755760 @ 7100755760 (size=300) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_7100755760(void)

{
  undefined8 *puVar1;
  
  if (_DAT_7100d16ef0 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_71007697d0(0x6159);
  }
  if (_DAT_7100d16f1c != 0) {
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 2;
    FUN_710076d0c0(_DAT_7100d16f18 & 0xffffffff);
    if (_DAT_7100d16f1c != 0) {
      FUN_710076d060(_DAT_7100d16f18 & 0xffffffff);
    }
  }
  _DAT_7100d16f18 = 0;
  _DAT_7100d16f20 = 0;
  FUN_710076d240(0x7100d16ef8);
  if (_DAT_7100d16f2c != 0) {
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 2;
    FUN_710076d0c0(_DAT_7100d16f28 & 0xffffffff);
    if (_DAT_7100d16f2c != 0) {
      FUN_710076d060(_DAT_7100d16f28 & 0xffffffff);
    }
  }
  _DAT_7100d16f28 = 0;
  _DAT_7100d16f30 = 0;
  if (_DAT_7100d16f3c != 0) {
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 2;
    FUN_710076d0c0(_DAT_7100d16f38 & 0xffffffff);
    if (_DAT_7100d16f3c != 0) {
      FUN_710076d060(_DAT_7100d16f38 & 0xffffffff);
      _DAT_7100d16f38 = 0;
      _DAT_7100d16f40 = 0;
      return;
    }
  }
  _DAT_7100d16f38 = 0;
  _DAT_7100d16f40 = 0;
  return;
}



// ===== FUN_7100755890 @ 7100755890 (size=212) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100755890(undefined4 param_1)

{
  uint uVar1;
  long *plVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  plVar2 = (long *)tpidrro_el0;
  lVar4 = FUN_710074cf70();
  plVar2[6] = lVar4;
  *(undefined4 *)(plVar2 + 5) = param_1;
  *(undefined4 *)((long)plVar2 + 0x2c) = 0;
  uVar3 = _DAT_7100d16f38;
  *plVar2 = -0x7ffffff5fffffffc;
  *(undefined4 *)(plVar2 + 1) = 1;
  plVar2[4] = 0x49434653;
  uVar5 = FUN_710076d0c0(uVar3);
  if ((int)uVar5 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar6 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar6 = (long *)((long)plVar2 + 0xc);
      }
      lVar4 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar2 + 1;
      lVar4 = 0;
    }
    uVar7 = (long)plVar6 + ((lVar4 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar5 = 0x5f59;
    if (*(int *)((long)plVar2 + uVar7) == 0x4f434653) {
      uVar5 = (ulong)*(uint *)((long)plVar2 + uVar7 + 8);
    }
  }
  return uVar5;
}



// ===== FUN_7100755970 @ 7100755970 (size=224) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100755970(ulong param_1,undefined4 param_2)

{
  uint uVar1;
  long *plVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  plVar2 = (long *)tpidrro_el0;
  lVar4 = FUN_710074cf70();
  plVar2[6] = param_1 & 0xffffffff;
  plVar2[7] = lVar4;
  *(undefined4 *)(plVar2 + 5) = param_2;
  *(undefined4 *)((long)plVar2 + 0x2c) = 0;
  uVar3 = _DAT_7100d16f38;
  *plVar2 = -0x7ffffff3fffffffc;
  *(undefined4 *)(plVar2 + 1) = 1;
  plVar2[4] = 0x49434653;
  uVar5 = FUN_710076d0c0(uVar3);
  if ((int)uVar5 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar6 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar6 = (long *)((long)plVar2 + 0xc);
      }
      lVar4 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar2 + 1;
      lVar4 = 0;
    }
    uVar7 = (long)plVar6 + ((lVar4 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar5 = 0x5f59;
    if (*(int *)((long)plVar2 + uVar7) == 0x4f434653) {
      uVar5 = (ulong)*(uint *)((long)plVar2 + uVar7 + 8);
    }
  }
  return uVar5;
}



// ===== FUN_7100755a50 @ 7100755a50 (size=404) =====

ulong FUN_7100755a50(long param_1,long param_2,ulong param_3,long param_4,long param_5,long param_6,
                    ulong param_7,ulong param_8)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  iVar3 = (int)*(undefined8 *)(param_1 + 0x18);
  if (iVar3 < 0) {
    return 0;
  }
  uVar8 = (long)iVar3;
  if (param_8 < (ulong)(long)iVar3) {
    iVar3 = (int)param_8;
    uVar8 = param_8;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  if (iVar3 != 0) {
    iVar4 = 0;
    do {
      while( true ) {
        uVar8 = (long)iVar4 + (long)(int)uVar5 + ((param_3 + 1) - (long)iVar3);
        uVar1 = 0;
        if (param_3 != 0) {
          uVar1 = uVar8 / param_3;
        }
        plVar7 = (long *)(param_2 +
                         (uVar8 - uVar1 * param_3 & 0xffffffff) * (param_4 + param_7 & 0xffffffff));
        lVar6 = *plVar7;
        lVar2 = FUN_710080f900(param_6 + (ulong)((iVar3 - iVar4) - 1) * (param_7 & 0xffffffff),
                               (long)plVar7 + param_4,param_7);
        if ((lVar6 != *plVar7) ||
           ((0 < iVar4 &&
            (*(long *)(lVar2 + param_5) -
             *(long *)(param_6 + param_5 + (ulong)(uint)(iVar3 - iVar4) * (param_7 & 0xffffffff)) !=
             1)))) break;
        iVar4 = iVar4 + 1;
        if (iVar3 <= iVar4) {
          return (long)iVar3;
        }
      }
      iVar4 = (int)*(undefined8 *)(param_1 + 0x18);
      if (iVar4 < iVar3) {
        iVar4 = iVar3;
      }
      uVar8 = (long)iVar4;
      if (param_8 < (ulong)(long)iVar4) {
        uVar8 = param_8;
      }
      iVar3 = (int)uVar8;
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      iVar4 = 0;
      uVar8 = (ulong)iVar3;
    } while (0 < iVar3);
  }
  return uVar8;
}



// ===== FUN_7100755bf0 @ 7100755bf0 (size=620) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100755bf0(void)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  undefined2 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  
  FUN_7100749670(0x7100d16ee8);
  iVar5 = _DAT_7100d16eec + 1;
  bVar1 = _DAT_7100d16eec != 0;
  _DAT_7100d16eec = iVar5;
  if (bVar1) {
LAB_7100755c1c:
    FUN_7100749740(0x7100d16ee8);
    return 0;
  }
  iVar5 = FUN_710075e590(&DAT_7100d16f38,0x646968);
  if (iVar5 == 0) {
    lVar6 = FUN_710074cf70();
    uVar4 = _DAT_7100d16f44;
    plVar3 = (long *)tpidrro_el0;
    *plVar3 = -0x7ffffff5fffffffc;
    plVar3[6] = lVar6;
    *(undefined4 *)(plVar3 + 1) = 1;
    plVar3[4] = 0x49434653;
    plVar3[5] = 0;
    iVar5 = FUN_710076d0c0(_DAT_7100d16f38);
    if (iVar5 == 0) {
      if (*plVar3 < 0) {
        uVar2 = *(uint *)(plVar3 + 1);
        lVar6 = (long)plVar3 + 0x14;
        if ((uVar2 & 1) == 0) {
          lVar6 = (long)plVar3 + 0xc;
        }
        plVar8 = (long *)(lVar6 + ((ulong)(uVar2 >> 1) & 0xf) * 4);
        lVar6 = ((ulong)(uVar2 >> 5) & 0xf) << 2;
      }
      else {
        plVar8 = plVar3 + 1;
        lVar6 = 0;
      }
      uVar7 = (long)plVar8 +
              ((lVar6 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf &
              0xfffffffffffffff0;
      if (*(int *)((long)plVar3 + uVar7) == 0x4f434653) {
        iVar5 = *(int *)((long)plVar3 + uVar7 + 8);
        if (iVar5 != 0) goto LAB_7100755c5c;
        _DAT_7100d16f28 = (int)*plVar8;
        bVar1 = _DAT_7100d16f28 == 0;
        if (bVar1) {
          _DAT_7100d16f28 = 0;
          _DAT_7100d16f34 = 0;
          uRam0000007100d16f36 = 0;
        }
        else {
          _DAT_7100d16f34 = uVar4;
        }
        _DAT_7100d16f30 = 0;
        _DAT_7100d16f2c = (uint)!bVar1;
        plVar3 = (long *)tpidrro_el0;
        *plVar3 = 0x800000004;
        plVar3[2] = 0x49434653;
        plVar3[3] = 0;
        iVar5 = FUN_710076d0c0();
        if (iVar5 != 0) goto LAB_7100755c5c;
        if (*plVar3 < 0) {
          uVar2 = *(uint *)(plVar3 + 1);
          plVar8 = (long *)((long)plVar3 + 0x14);
          if ((uVar2 & 1) == 0) {
            plVar8 = (long *)((long)plVar3 + 0xc);
          }
          lVar6 = (((ulong)(uVar2 >> 1) & 0xf) + ((ulong)(uVar2 >> 5) & 0xf)) * 4;
        }
        else {
          plVar8 = plVar3 + 1;
          lVar6 = 0;
        }
        uVar7 = (long)plVar8 +
                ((lVar6 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf &
                0xfffffffffffffff0;
        if (*(int *)((long)plVar3 + uVar7) == 0x4f434653) {
          iVar5 = *(int *)((long)plVar3 + uVar7 + 8);
          if (iVar5 == 0) {
            FUN_710076d170(0x7100d16ef8,(int)*plVar8,0x40000,1);
            iVar5 = FUN_710076d190(0x7100d16ef8);
            if (iVar5 == 0) goto LAB_7100755c1c;
          }
          goto LAB_7100755c5c;
        }
      }
      iVar5 = 0x5f59;
    }
  }
LAB_7100755c5c:
  FUN_7100755760();
  _DAT_7100d16eec = _DAT_7100d16eec + -1;
  FUN_7100749740(0x7100d16ee8);
  return iVar5;
}



// ===== FUN_7100755e60 @ 7100755e60 (size=72) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100755e60(void)

{
  FUN_7100749670();
  if (_DAT_7100d16eec != 0) {
    _DAT_7100d16eec = _DAT_7100d16eec + -1;
    if (_DAT_7100d16eec == 0) {
      FUN_7100755760();
    }
  }
  FUN_7100749740(0x7100d16ee8);
  return;
}



// ===== FUN_7100756060 @ 7100756060 (size=132) =====

void FUN_7100756060(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = FUN_7100769b90();
  if (uVar2 < 0x50000) {
    iVar4 = FUN_7100755890(0x67);
  }
  else {
    uVar2 = FUN_7100769b90();
    uVar3 = FUN_7100769b90();
    cVar1 = '\x03';
    if (uVar3 < 0x80000) {
      cVar1 = (0x5ffff < uVar2) + '\x01';
    }
    uVar2 = FUN_7100769b90();
    if (0x11ffff < uVar2) {
      cVar1 = '\x05';
    }
    iVar4 = FUN_7100755970(cVar1,0x6d);
  }
  if (iVar4 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_71007697d0();
}



// ===== FUN_7100756660 @ 7100756660 (size=8) =====

void FUN_7100756660(undefined8 param_1)

{
  FUN_7100755970(param_1,100);
  return;
}



// ===== FUN_7100756670 @ 7100756670 (size=256) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100756670(undefined8 param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  plVar2 = (long *)tpidrro_el0;
  lVar4 = FUN_710074cf70();
  plVar2[6] = lVar4;
  *(int *)(plVar2 + 3) = (int)param_1;
  *plVar2 = -0x7ffffff5fffefffc;
  *(undefined4 *)(plVar2 + 1) = 1;
  plVar2[4] = 0x49434653;
  plVar2[5] = 0x66;
  uVar3 = _DAT_7100d16f38;
  uVar1 = (uint)((ulong)param_1 >> 0x20);
  *(ushort *)((long)plVar2 + 0x14) =
       (ushort)((uVar1 & 0xf) << 0xc) | (ushort)((uVar1 >> 4 & 0x3f) << 6);
  *(short *)((long)plVar2 + 0x16) = (short)(param_2 << 2);
  uVar5 = FUN_710076d0c0(uVar3);
  if ((int)uVar5 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar6 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar6 = (long *)((long)plVar2 + 0xc);
      }
      lVar4 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar2 + 1;
      lVar4 = 0;
    }
    uVar7 = (long)plVar6 + ((lVar4 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar5 = 0x5f59;
    if (*(int *)((long)plVar2 + uVar7) == 0x4f434653) {
      uVar5 = (ulong)*(uint *)((long)plVar2 + uVar7 + 8);
    }
  }
  return uVar5;
}



// ===== FUN_7100756770 @ 7100756770 (size=120) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_7100756770(void)

{
  undefined8 *puVar1;
  
  if (_DAT_7100d16f54 == 0) {
    _DAT_7100d16f50 = 0;
    _DAT_7100d16f58 = 0;
    return;
  }
  puVar1 = (undefined8 *)tpidrro_el0;
  *puVar1 = 2;
  FUN_710076d0c0(_DAT_7100d16f50 & 0xffffffff);
  if (_DAT_7100d16f54 == 0) {
    _DAT_7100d16f50 = 0;
    _DAT_7100d16f58 = 0;
    return;
  }
  FUN_710076d060(_DAT_7100d16f50 & 0xffffffff);
  _DAT_7100d16f50 = 0;
  _DAT_7100d16f58 = 0;
  return;
}



// ===== FUN_71007567f0 @ 71007567f0 (size=152) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_71007567f0(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = 0;
  FUN_7100749670(0x7100d16f48);
  iVar1 = _DAT_7100d16f4c + 1;
  bVar2 = _DAT_7100d16f4c == 0;
  _DAT_7100d16f4c = iVar1;
  if (bVar2) {
    iVar3 = FUN_710075e590(&DAT_7100d16f50,0x633269);
    if (iVar3 != 0) {
      FUN_7100756770();
      _DAT_7100d16f4c = _DAT_7100d16f4c + -1;
      FUN_7100749740(0x7100d16f48);
      return iVar3;
    }
  }
  FUN_7100749740(0x7100d16f48);
  return iVar3;
}



// ===== FUN_7100756890 @ 7100756890 (size=72) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100756890(void)

{
  FUN_7100749670();
  if (_DAT_7100d16f4c != 0) {
    _DAT_7100d16f4c = _DAT_7100d16f4c + -1;
    if (_DAT_7100d16f4c == 0) {
      FUN_7100756770();
    }
  }
  FUN_7100749740(0x7100d16f48);
  return;
}



// ===== FUN_71007568e0 @ 71007568e0 (size=260) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_71007568e0(int *param_1,undefined4 param_2)

{
  uint uVar1;
  long *plVar2;
  undefined2 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  
  uVar3 = _DAT_7100d16f5c;
  plVar2 = (long *)tpidrro_el0;
  *(undefined4 *)(plVar2 + 4) = param_2;
  *plVar2 = 0x900000004;
  plVar2[2] = 0x49434653;
  plVar2[3] = 1;
  uVar4 = FUN_710076d0c0(_DAT_7100d16f50);
  if ((int)uVar4 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      lVar5 = (long)plVar2 + 0x14;
      if ((uVar1 & 1) == 0) {
        lVar5 = (long)plVar2 + 0xc;
      }
      plVar7 = (long *)(lVar5 + ((ulong)(uVar1 >> 1) & 0xf) * 4);
      lVar5 = ((ulong)(uVar1 >> 5) & 0xf) << 2;
    }
    else {
      plVar7 = plVar2 + 1;
      lVar5 = 0;
    }
    uVar4 = 0x5f59;
    uVar6 = (long)plVar7 + ((lVar5 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    if ((*(int *)((long)plVar2 + uVar6) == 0x4f434653) &&
       (uVar1 = *(uint *)((long)plVar2 + uVar6 + 8), uVar4 = (ulong)uVar1, uVar1 == 0)) {
      if ((int)*plVar7 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        return uVar4;
      }
      *param_1 = (int)*plVar7;
      *(undefined2 *)(param_1 + 3) = uVar3;
      param_1[1] = 1;
      param_1[2] = 0;
    }
  }
  return uVar4;
}



// ===== FUN_71007569f0 @ 71007569f0 (size=312) =====

ulong FUN_71007569f0(undefined4 *param_1,undefined8 param_2,ulong param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  uVar8 = (uint)((ulong)param_2 >> 0x20);
  uVar3 = uVar8 & 0xf;
  puVar1 = (undefined8 *)tpidrro_el0;
  uVar8 = uVar8 >> 4;
  if (*(ushort *)(param_1 + 3) == 0 || *(ushort *)(param_1 + 3) < param_3) {
    uVar13 = (undefined4)param_2;
    uVar14 = (undefined4)param_3;
    uVar10 = (uint)(param_3 >> 0x20) & 0xf;
    uVar8 = uVar8 & 0x3fffff;
    uVar12 = 0;
    param_3 = 0;
    param_2 = 0;
    uVar11 = 0;
    uVar9 = uVar3;
  }
  else {
    uVar12 = uVar8 & 0x3f;
    uVar14 = 0;
    uVar13 = 0;
    uVar8 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar11 = uVar3;
  }
  *(int *)((long)puVar1 + 0xc) = (int)param_2;
  *(undefined4 *)(puVar1 + 2) = uVar14;
  *(short *)((long)puVar1 + 10) = (short)param_3;
  puVar1[4] = 0x49434653;
  puVar1[5] = 10;
  *(ushort *)(puVar1 + 1) = (ushort)(uVar12 << 6) | (ushort)(uVar11 << 0xc);
  *puVar1 = 0x900110004;
  *(undefined4 *)((long)puVar1 + 0x14) = uVar13;
  *(uint *)(puVar1 + 3) = uVar8 << 2 | uVar10 << 0x18 | uVar9 << 0x1c;
  *(undefined4 *)(puVar1 + 6) = param_4;
  uVar4 = FUN_710076d0c0(*param_1);
  if ((int)uVar4 == 0) {
    plVar2 = (long *)tpidrro_el0;
    if (*plVar2 < 0) {
      uVar8 = *(uint *)(plVar2 + 1);
      plVar5 = (long *)((long)plVar2 + 0x14);
      if ((uVar8 & 1) == 0) {
        plVar5 = (long *)((long)plVar2 + 0xc);
      }
      lVar7 = (((ulong)(uVar8 >> 1) & 0xf) + ((ulong)(uVar8 >> 5) & 0xf)) * 4;
    }
    else {
      plVar5 = plVar2 + 1;
      lVar7 = 0;
    }
    uVar6 = (long)plVar5 + ((lVar7 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar4 = 0x5f59;
    if (*(int *)((long)plVar2 + uVar6) == 0x4f434653) {
      uVar4 = (ulong)*(uint *)((long)plVar2 + uVar6 + 8);
    }
  }
  return uVar4;
}



// ===== FUN_7100756b30 @ 7100756b30 (size=300) =====

ulong FUN_7100756b30(undefined4 *param_1,undefined8 param_2,ulong param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  uVar10 = (undefined2)((ulong)param_2 >> 0x20);
  puVar1 = (undefined8 *)tpidrro_el0;
  if (*(ushort *)(param_1 + 3) == 0 || *(ushort *)(param_1 + 3) < param_3) {
    uVar11 = (undefined4)param_2;
    uVar12 = (undefined4)param_3;
    uVar7 = (uint)((ulong)param_2 >> 0x20);
    uVar9 = uVar7 >> 4 & 0x3fffff;
    uVar8 = (uint)(param_3 >> 0x20) & 0xf;
    uVar7 = uVar7 & 0xf;
    param_2 = 0;
    uVar10 = 0;
    param_3 = 0;
  }
  else {
    uVar12 = 0;
    uVar11 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
  }
  *(int *)((long)puVar1 + 0x3c) = (int)param_2;
  *(undefined4 *)(puVar1 + 1) = uVar12;
  *(undefined4 *)((long)puVar1 + 0xc) = uVar11;
  *(undefined4 *)(puVar1 + 6) = param_4;
  *puVar1 = 0xc0a01000004;
  *(short *)(puVar1 + 7) = (short)param_3;
  puVar1[4] = 0x49434653;
  puVar1[5] = 0xb;
  uVar11 = *param_1;
  *(uint *)(puVar1 + 2) = uVar9 << 2 | uVar8 << 0x18 | uVar7 << 0x1c;
  *(undefined2 *)(puVar1 + 8) = uVar10;
  *(short *)((long)puVar1 + 0x42) = (short)param_3;
  uVar3 = FUN_710076d0c0(uVar11);
  if ((int)uVar3 == 0) {
    plVar2 = (long *)tpidrro_el0;
    if (*plVar2 < 0) {
      uVar7 = *(uint *)(plVar2 + 1);
      plVar4 = (long *)((long)plVar2 + 0x14);
      if ((uVar7 & 1) == 0) {
        plVar4 = (long *)((long)plVar2 + 0xc);
      }
      lVar6 = (((ulong)(uVar7 >> 1) & 0xf) + ((ulong)(uVar7 >> 5) & 0xf)) * 4;
    }
    else {
      plVar4 = plVar2 + 1;
      lVar6 = 0;
    }
    uVar5 = (long)plVar4 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar3 = 0x5f59;
    if (*(int *)((long)plVar2 + uVar5) == 0x4f434653) {
      uVar3 = (ulong)*(uint *)((long)plVar2 + uVar5 + 8);
    }
  }
  return uVar3;
}



// ===== FUN_7100756c60 @ 7100756c60 (size=100) =====

void FUN_7100756c60(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)((long)param_1 + 4) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  puVar1 = (undefined8 *)tpidrro_el0;
  *puVar1 = 2;
  FUN_710076d0c0(*(undefined4 *)param_1);
  if (*(int *)((long)param_1 + 4) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  FUN_710076d060(*(undefined4 *)param_1);
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// ===== FUN_7100756cd0 @ 7100756cd0 (size=188) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100756cd0(undefined4 param_1)

{
  uint uVar1;
  long *plVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  plVar2 = (long *)tpidrro_el0;
  *(undefined4 *)(plVar2 + 3) = param_1;
  *(undefined4 *)((long)plVar2 + 0x1c) = 0;
  uVar3 = _DAT_7100d16f68;
  *plVar2 = 0x800000004;
  plVar2[2] = 0x49434653;
  uVar4 = FUN_710076d0c0(uVar3);
  if ((int)uVar4 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar5 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar5 = (long *)((long)plVar2 + 0xc);
      }
      lVar7 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar5 = plVar2 + 1;
      lVar7 = 0;
    }
    uVar6 = (long)plVar5 + ((lVar7 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar4 = 0x5f59;
    if (*(int *)((long)plVar2 + uVar6) == 0x4f434653) {
      uVar4 = (ulong)*(uint *)((long)plVar2 + uVar6 + 8);
    }
  }
  return uVar4;
}



// ===== FUN_7100756d90 @ 7100756d90 (size=192) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100756d90(long param_1,undefined4 param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0xa00000004;
  plVar2[4] = param_1;
  plVar2[2] = 0x49434653;
  *(undefined4 *)(plVar2 + 3) = param_2;
  *(undefined4 *)((long)plVar2 + 0x1c) = 0;
  uVar3 = FUN_710076d0c0(_DAT_7100d16f68);
  if ((int)uVar3 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar4 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar4 = (long *)((long)plVar2 + 0xc);
      }
      lVar6 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar4 = plVar2 + 1;
      lVar6 = 0;
    }
    uVar5 = (long)plVar4 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar3 = 0x5f59;
    if (*(int *)((long)plVar2 + uVar5) == 0x4f434653) {
      uVar3 = (ulong)*(uint *)((long)plVar2 + uVar5 + 8);
    }
  }
  return uVar3;
}



// ===== FUN_7100756e50 @ 7100756e50 (size=120) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_7100756e50(void)

{
  undefined8 *puVar1;
  
  if (_DAT_7100d16f6c == 0) {
    _DAT_7100d16f68 = 0;
    _DAT_7100d16f70 = 0;
    return;
  }
  puVar1 = (undefined8 *)tpidrro_el0;
  *puVar1 = 2;
  FUN_710076d0c0(_DAT_7100d16f68 & 0xffffffff);
  if (_DAT_7100d16f6c == 0) {
    _DAT_7100d16f68 = 0;
    _DAT_7100d16f70 = 0;
    return;
  }
  FUN_710076d060(_DAT_7100d16f68 & 0xffffffff);
  _DAT_7100d16f68 = 0;
  _DAT_7100d16f70 = 0;
  return;
}



// ===== FUN_7100756ed0 @ 7100756ed0 (size=212) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100756ed0(byte *param_1,undefined4 param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0x800000004;
  *(undefined4 *)(plVar2 + 3) = param_2;
  *(undefined4 *)((long)plVar2 + 0x1c) = 0;
  plVar2[2] = 0x49434653;
  uVar3 = FUN_710076d0c0(_DAT_7100d16f68);
  if ((int)uVar3 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar5 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar5 = (long *)((long)plVar2 + 0xc);
      }
      lVar4 = (((ulong)(uVar1 >> 5) & 0xf) + ((ulong)(uVar1 >> 1) & 0xf)) * 4;
    }
    else {
      plVar5 = plVar2 + 1;
      lVar4 = 0;
    }
    uVar3 = 0x5f59;
    uVar6 = (long)plVar5 + ((lVar4 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    if (((*(int *)((long)plVar2 + uVar6) == 0x4f434653) &&
        (uVar1 = *(uint *)((long)plVar2 + uVar6 + 8), uVar3 = (ulong)uVar1, uVar1 == 0)) &&
       (param_1 != (byte *)0x0)) {
      *param_1 = *(byte *)((long)plVar2 + uVar6 + 0x10) & 1;
    }
  }
  return uVar3;
}



// ===== FUN_7100756fb0 @ 7100756fb0 (size=152) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100756fb0(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = 0;
  FUN_7100749670(0x7100d16f60);
  iVar1 = _DAT_7100d16f64 + 1;
  bVar2 = _DAT_7100d16f64 == 0;
  _DAT_7100d16f64 = iVar1;
  if (bVar2) {
    iVar3 = FUN_710075e590(&DAT_7100d16f68,0x6c626c);
    if (iVar3 != 0) {
      FUN_7100756e50();
      _DAT_7100d16f64 = _DAT_7100d16f64 + -1;
      FUN_7100749740(0x7100d16f60);
      return iVar3;
    }
  }
  FUN_7100749740(0x7100d16f60);
  return iVar3;
}



// ===== FUN_7100757050 @ 7100757050 (size=72) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100757050(void)

{
  FUN_7100749670();
  if (_DAT_7100d16f64 != 0) {
    _DAT_7100d16f64 = _DAT_7100d16f64 + -1;
    if (_DAT_7100d16f64 == 0) {
      FUN_7100756e50();
    }
  }
  FUN_7100749740(0x7100d16f60);
  return;
}



// ===== FUN_71007570a0 @ 71007570a0 (size=8) =====

void FUN_71007570a0(undefined8 param_1)

{
  FUN_7100756d90(param_1,6);
  return;
}



// ===== FUN_71007570b0 @ 71007570b0 (size=8) =====

void FUN_71007570b0(undefined8 param_1)

{
  FUN_7100756d90(param_1,7);
  return;
}



// ===== FUN_71007570c0 @ 71007570c0 (size=208) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_71007570c0(undefined4 *param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0x800000004;
  plVar2[2] = 0x49434653;
  plVar2[3] = 8;
  uVar3 = FUN_710076d0c0(_DAT_7100d16f68);
  if ((int)uVar3 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar5 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar5 = (long *)((long)plVar2 + 0xc);
      }
      lVar4 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar5 = plVar2 + 1;
      lVar4 = 0;
    }
    uVar3 = 0x5f59;
    uVar6 = (long)plVar5 + ((lVar4 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    if (((*(int *)((long)plVar2 + uVar6) == 0x4f434653) &&
        (uVar1 = *(uint *)((long)plVar2 + uVar6 + 8), uVar3 = (ulong)uVar1, uVar1 == 0)) &&
       (param_1 != (undefined4 *)0x0)) {
      *param_1 = *(undefined4 *)((long)plVar2 + uVar6 + 0x10);
    }
  }
  return uVar3;
}



// ===== FUN_7100757190 @ 7100757190 (size=8) =====

void FUN_7100757190(void)

{
  FUN_7100756cd0(9);
  return;
}



// ===== FUN_71007571a0 @ 71007571a0 (size=8) =====

void FUN_71007571a0(void)

{
  FUN_7100756cd0(10);
  return;
}



// ===== FUN_71007571b0 @ 71007571b0 (size=8) =====

void FUN_71007571b0(undefined8 param_1)

{
  FUN_7100756ed0(param_1,0xb);
  return;
}



// ===== FUN_71007571c0 @ 71007571c0 (size=308) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71007571c0(void)

{
  undefined8 *puVar1;
  int iVar2;
  
  if (_DAT_7100d16fdc == 0) {
    iVar2 = _DAT_7100d16fe0;
    if (_DAT_7100d16fe0 == 0) goto LAB_71007571fc;
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 0x800000004;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 2) = 2;
    *(int *)((long)puVar1 + 0x14) = iVar2;
    FUN_710076d0c0(_DAT_7100d16fd8 & 0xffffffff);
  }
  else {
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 2;
    FUN_710076d0c0(_DAT_7100d16fd8 & 0xffffffff);
  }
  if (_DAT_7100d16fdc != 0) {
    FUN_710076d060(_DAT_7100d16fd8 & 0xffffffff);
  }
LAB_71007571fc:
  _DAT_7100d16fd8 = 0;
  _DAT_7100d16fe0 = 0;
  FUN_710076d5b0(0x7100d16f80);
  if (_DAT_7100d16ffc == 0) {
    iVar2 = _DAT_7100d17000;
    if (_DAT_7100d17000 == 0) {
      _DAT_7100d16ff8 = 0;
      _DAT_7100d17000 = 0;
      return;
    }
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 0x800000004;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 2) = 2;
    *(int *)((long)puVar1 + 0x14) = iVar2;
    FUN_710076d0c0(_DAT_7100d16ff8 & 0xffffffff);
  }
  else {
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 2;
    FUN_710076d0c0(_DAT_7100d16ff8 & 0xffffffff);
  }
  if (_DAT_7100d16ffc == 0) {
    _DAT_7100d16ff8 = 0;
    _DAT_7100d17000 = 0;
    return;
  }
  FUN_710076d060(_DAT_7100d16ff8 & 0xffffffff);
  _DAT_7100d16ff8 = 0;
  _DAT_7100d17000 = 0;
  return;
}



// ===== FUN_7100757300 @ 7100757300 (size=400) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100757300(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  ulong *puVar12;
  ulong *puVar13;
  
  if (_DAT_7100d16fe8 == _DAT_7100d16ff8) {
    iVar7 = FUN_710076d640(0x7100d16f80);
    puVar12 = (ulong *)tpidrro_el0;
    uVar10 = 0xc;
    iVar6 = *(int *)((long)iVar7 * 4 + 0x7100d16f80);
  }
  else {
    iVar6 = 0;
    iVar7 = -1;
    puVar12 = (ulong *)tpidrro_el0;
    uVar9 = 0xc;
    if (_DAT_7100d16ff0 == 0) {
      uVar9 = 8;
    }
    uVar10 = (ulong)uVar9;
  }
  iVar5 = _DAT_7100d16ff0;
  iVar2 = _DAT_7100d16fe8;
  *puVar12 = uVar10 << 0x20 | 4;
  if (iVar5 == 0) {
    puVar13 = puVar12 + 2;
  }
  else {
    puVar12[3] = 0;
    puVar13 = puVar12 + 4;
    *(undefined4 *)(puVar12 + 2) = 0x100001;
    *(int *)((long)puVar12 + 0x14) = iVar5;
  }
  *(undefined4 *)(puVar13 + 1) = param_1;
  *(undefined4 *)((long)puVar13 + 0xc) = 0;
  if (iVar6 != 0) {
    iVar2 = iVar6;
  }
  *puVar13 = 0x49434653;
  iVar6 = FUN_710076d0c0(iVar2);
  if (iVar6 == 0) {
    plVar4 = (long *)tpidrro_el0;
    if (*plVar4 < 0) {
      uVar9 = *(uint *)(plVar4 + 1);
      plVar11 = (long *)((long)plVar4 + 0x14);
      if ((uVar9 & 1) == 0) {
        plVar11 = (long *)((long)plVar4 + 0xc);
      }
      lVar8 = (((ulong)(uVar9 >> 1) & 0xf) + ((ulong)(uVar9 >> 5) & 0xf)) * 4;
    }
    else {
      plVar11 = plVar4 + 1;
      lVar8 = 0;
    }
    piVar1 = (int *)((long)plVar4 +
                    ((long)plVar11 +
                     ((lVar8 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
                    0xfffffffffffffff0));
    iVar6 = 0x5f59;
    piVar3 = piVar1 + 4;
    if (iVar5 == 0) {
      piVar3 = piVar1;
    }
    if (*piVar3 == 0x4f434653) {
      iVar6 = piVar3[2];
    }
  }
  if (iVar7 != -1) {
    FUN_710076d6f0(0x7100d16f80,iVar7);
  }
  return iVar6;
}



// ===== FUN_7100757490 @ 7100757490 (size=292) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100757490(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  
  iVar7 = _DAT_7100d16fe0;
  uVar6 = _DAT_7100d16fd8;
  puVar4 = (undefined8 *)tpidrro_el0;
  if (_DAT_7100d16fe0 == 0) {
    puVar9 = puVar4 + 2;
    *puVar4 = 0x800000004;
  }
  else {
    puVar9 = puVar4 + 4;
    puVar4[3] = 0;
    *puVar4 = 0xc00000004;
    *(undefined4 *)(puVar4 + 2) = 0x100001;
    *(int *)((long)puVar4 + 0x14) = iVar7;
  }
  *(undefined4 *)(puVar9 + 1) = param_2;
  *(undefined4 *)((long)puVar9 + 0xc) = 0;
  *puVar9 = 0x49434653;
  iVar8 = FUN_710076d0c0(uVar6);
  if (iVar8 == 0) {
    plVar5 = (long *)tpidrro_el0;
    if (*plVar5 < 0) {
      uVar3 = *(uint *)(plVar5 + 1);
      plVar11 = (long *)((long)plVar5 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar11 = (long *)((long)plVar5 + 0xc);
      }
      lVar10 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar11 = plVar5 + 1;
      lVar10 = 0;
    }
    iVar8 = 0x5f59;
    piVar1 = (int *)((long)plVar5 +
                    ((long)plVar11 +
                     ((lVar10 + (ulong)((uint)*plVar5 >> 0x10 & 0xf) * 8) - (long)plVar5) + 0xf &
                    0xfffffffffffffff0));
    piVar2 = piVar1 + 4;
    if (iVar7 == 0) {
      piVar2 = piVar1;
    }
    if (*piVar2 == 0x4f434653) {
      iVar8 = piVar2[2];
      if (iVar8 == 0) {
        FUN_7100749590(param_1,(int)*plVar11,0);
        iVar8 = 0;
      }
    }
  }
  return iVar8;
}



// ===== FUN_71007575c0 @ 71007575c0 (size=1652) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

ulong FUN_71007575c0(int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  undefined2 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  long *plVar14;
  ulong *puVar15;
  int *piVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  uint *puVar20;
  long lVar21;
  ulong uVar22;
  char *pcVar23;
  undefined8 uVar24;
  undefined8 local_10;
  undefined8 local_8;
  
  FUN_7100749670(0x7100d16f78);
  iVar12 = _DAT_7100d16f7c + 1;
  bVar2 = _DAT_7100d16f7c == 0;
  _DAT_7100d16f7c = iVar12;
  if (bVar2) {
    local_10 = 0;
    local_8 = 0;
    if (param_1 == 0) {
      pcVar23 = "lp2p:app";
LAB_7100757640:
      uVar11 = FUN_7100769b90();
      if (uVar11 < 0x90100) {
        uVar22 = 0x4b59;
      }
      else {
        uVar24 = *(undefined8 *)pcVar23;
        uVar13 = FUN_710075e590(&DAT_7100d16ff8,uVar24);
        uVar11 = _DAT_7100d16ff8;
        uVar22 = uVar13 & 0xffffffff;
        if ((int)uVar13 == 0) {
          if (_DAT_7100d16ffc == 0) {
            plVar4 = (long *)tpidrro_el0;
            *plVar4 = 0x900000005;
            *(undefined4 *)(plVar4 + 4) = 0;
            plVar4[2] = 0x49434653;
            plVar4[3] = 4;
            uVar13 = FUN_710076d0c0(uVar11);
            uVar22 = uVar13 & 0xffffffff;
            if ((int)uVar13 == 0) {
              if (*plVar4 < 0) {
                uVar11 = *(uint *)(plVar4 + 1);
                lVar17 = (long)plVar4 + 0x14;
                if ((uVar11 & 1) == 0) {
                  lVar17 = (long)plVar4 + 0xc;
                }
                puVar20 = (uint *)(lVar17 + ((ulong)(uVar11 >> 1) & 0xf) * 4);
                lVar17 = ((ulong)(uVar11 >> 5) & 0xf) << 2;
              }
              else {
                puVar20 = (uint *)(plVar4 + 1);
                lVar17 = 0;
              }
              uVar22 = (long)puVar20 +
                       ((lVar17 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
                       0xfffffffffffffff0;
              if (*(int *)((long)plVar4 + uVar22) != 0x4f434653) goto LAB_7100757988;
              uVar11 = *(uint *)((long)plVar4 + uVar22 + 8);
              uVar22 = (ulong)uVar11;
              if (uVar11 == 0) {
                _DAT_7100d16ff8 = *puVar20;
                _DAT_7100d16ffc = 1;
                goto LAB_7100757720;
              }
            }
          }
          else {
LAB_7100757720:
            uVar11 = _DAT_7100d16ff8;
            plVar4 = (long *)tpidrro_el0;
            *plVar4 = 0x800000005;
            plVar4[2] = 0x49434653;
            plVar4[3] = 0;
            uVar13 = FUN_710076d0c0(uVar11);
            uVar22 = uVar13 & 0xffffffff;
            if ((int)uVar13 == 0) {
              if (*plVar4 < 0) {
                uVar11 = *(uint *)(plVar4 + 1);
                plVar14 = (long *)((long)plVar4 + 0x14);
                if ((uVar11 & 1) == 0) {
                  plVar14 = (long *)((long)plVar4 + 0xc);
                }
                lVar17 = (((ulong)(uVar11 >> 5) & 0xf) + ((ulong)(uVar11 >> 1) & 0xf)) * 4;
              }
              else {
                plVar14 = plVar4 + 1;
                lVar17 = 0;
              }
              uVar13 = (long)plVar14 +
                       ((lVar17 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
                       0xfffffffffffffff0;
              if (*(int *)((long)plVar4 + uVar13) == 0x4f434653) {
                uVar11 = *(uint *)((long)plVar4 + uVar13 + 8);
                uVar22 = (ulong)uVar11;
                if (uVar11 == 0) {
                  _DAT_7100d17000 = *(undefined4 *)((long)plVar4 + uVar13 + 0x10);
                  uVar13 = FUN_710076d420(0x7100d16f80,_DAT_7100d16ff8,4);
                  uVar22 = uVar13 & 0xffffffff;
                  if ((int)uVar13 == 0) {
                    iVar12 = FUN_710076d640(0x7100d16f80);
                    plVar4 = (long *)tpidrro_el0;
                    uVar11 = *(uint *)((long)iVar12 * 4 + 0x7100d16f80);
                    plVar4[7] = 0;
                    uVar7 = _DAT_7100d17004;
                    plVar4[8] = 1;
                    plVar4[9] = 0;
                    uVar9 = _DAT_7100d17000;
                    uVar8 = _DAT_7100d16ff8;
                    if (uVar11 == 0) {
                      uVar11 = _DAT_7100d16ff8;
                    }
                    *plVar4 = -0x7fffffeffffffffc;
                    *(undefined4 *)(plVar4 + 1) = 1;
                    *(undefined4 *)(plVar4 + 4) = 0x200001;
                    *(undefined4 *)((long)plVar4 + 0x24) = uVar9;
                    plVar4[5] = 0;
                    plVar4[6] = 0x49434653;
                    uVar13 = FUN_710076d0c0(uVar11);
                    uVar22 = uVar13 & 0xffffffff;
                    if ((int)uVar13 == 0) {
                      if (*plVar4 < 0) {
                        uVar11 = *(uint *)(plVar4 + 1);
                        plVar14 = (long *)((long)plVar4 + 0x14);
                        if ((uVar11 & 1) == 0) {
                          plVar14 = (long *)((long)plVar4 + 0xc);
                        }
                        lVar17 = ((ulong)(uVar11 >> 1) & 0xf) << 2;
                        lVar21 = ((ulong)(uVar11 >> 5) & 0xf) << 2;
                      }
                      else {
                        plVar14 = plVar4 + 1;
                        lVar21 = 0;
                        lVar17 = 0;
                      }
                      uVar13 = (long)plVar14 +
                               ((lVar17 + lVar21 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) -
                               (long)plVar4) + 0xf & 0xfffffffffffffff0;
                      if (*(int *)((long)plVar4 + uVar13 + 0x10) == 0x4f434653) {
                        uVar11 = *(uint *)((long)plVar4 + uVar13 + 0x18);
                        uVar22 = (ulong)uVar11;
                        if (uVar11 == 0) {
                          iVar3 = *(int *)((long)plVar4 + uVar13 + 0x20);
                          if (iVar3 == 0) {
                            _DAT_7100d16fe8 = 0;
                            _DAT_7100d16ff0 = 0;
                            FUN_710076d6f0(0x7100d16f80,iVar12);
                          }
                          else {
                            _DAT_7100d16fe8 = (ulong)uVar8;
                            _DAT_7100d16ff0 = CONCAT24(uVar7,iVar3);
                            FUN_710076d6f0(0x7100d16f80,iVar12);
                          }
                          uVar22 = FUN_710075e590(&local_10,uVar24);
                          uVar13 = uVar22 & 0xffffffff;
                          if ((int)uVar22 == 0) {
                            iVar10 = (int)local_8;
                            puVar6 = (ulong *)tpidrro_el0;
                            uVar7 = local_8._4_2_;
                            iVar3 = (int)local_10;
                            iVar12 = 0x20;
                            if ((int)local_8 == 0) {
                              iVar12 = 0x10;
                            }
                            *puVar6 = (ulong)(iVar12 + 0x1bU >> 2) << 0x20 | 0x8000000000000004;
                            *(undefined4 *)(puVar6 + 1) = 1;
                            if ((int)local_8 != 0) {
                              puVar6[5] = 0;
                              puVar15 = puVar6 + 6;
                              *(undefined4 *)(puVar6 + 4) = 0x180001;
                              *(int *)((long)puVar6 + 0x24) = (int)local_8;
                            }
                            else {
                              puVar15 = puVar6 + 4;
                            }
                            *puVar15 = 0x49434653;
                            puVar15[1] = 8;
                            puVar15[2] = 0;
                            uVar11 = FUN_710076d0c0(local_10 & 0xffffffff);
                            uVar22 = (ulong)local_10._4_4_;
                            uVar13 = (ulong)uVar11;
                            if (uVar11 != 0) {
LAB_71007579f8:
                              uVar22 = uVar13;
                              if (local_10._4_4_ != 0) goto LAB_71007579fc;
                              goto LAB_7100757924;
                            }
                            plVar4 = (long *)tpidrro_el0;
                            if (*plVar4 < 0) {
                              uVar11 = *(uint *)(plVar4 + 1);
                              uVar13 = (ulong)(uVar11 >> 1) & 0xf;
                              uVar18 = (ulong)(uVar11 >> 5) & 0xf;
                              plVar14 = (long *)((long)plVar4 + 0x14);
                              if ((uVar11 & 1) == 0) {
                                plVar14 = (long *)((long)plVar4 + 0xc);
                              }
                            }
                            else {
                              uVar18 = 0;
                              plVar14 = plVar4 + 1;
                            }
                            piVar1 = (int *)((long)plVar14 + uVar13 * 4);
                            piVar16 = (int *)((long)plVar4 +
                                             ((long)piVar1 +
                                              (((ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8 +
                                               uVar18 * 4) - (long)plVar4) + 0xf &
                                             0xfffffffffffffff0));
                            if (iVar10 == 0) {
                              piVar19 = (int *)0x0;
                            }
                            else {
                              piVar19 = piVar16 + 8;
                              piVar16 = piVar16 + 4;
                            }
                            if (*piVar16 != 0x4f434653) {
                              if (local_10._4_4_ != 0) {
                                uVar13 = 0x5f59;
                                goto LAB_71007579fc;
                              }
                              if ((int)local_8 == 0) goto LAB_7100757988;
                              uVar22 = 0x5f59;
                              goto LAB_7100757930;
                            }
                            uVar13 = (ulong)(uint)piVar16[2];
                            if (piVar16[2] != 0) goto LAB_71007579f8;
                            if (iVar10 == 0) {
                              _DAT_7100d16fd8 = *piVar1;
                              if (_DAT_7100d16fd8 != 0) {
                                _DAT_7100d16fdc = 1;
                                goto joined_r0x007100757be8;
                              }
                              _DAT_7100d16fd8 = 0;
                              _DAT_7100d16fe0 = 0;
                              _DAT_7100d16fe4 = 0;
                              uRam0000007100d16fe6 = 0;
                              iVar3 = _DAT_7100d16fd8;
                              uVar7 = _DAT_7100d16fe4;
joined_r0x007100757c2c:
                              _DAT_7100d16fdc = 0;
                              _DAT_7100d16fd8 = iVar3;
                              _DAT_7100d16fe4 = uVar7;
                            }
                            else {
                              _DAT_7100d16fe0 = *piVar19;
                              if (_DAT_7100d16fe0 != 0) goto joined_r0x007100757c2c;
                              _DAT_7100d16fd8 = 0;
                              _DAT_7100d16fdc = 0;
                              _DAT_7100d16fe4 = 0;
                              uRam0000007100d16fe6 = 0;
                              uVar7 = _DAT_7100d16fe4;
joined_r0x007100757be8:
                              _DAT_7100d16fe0 = 0;
                              _DAT_7100d16fe4 = uVar7;
                            }
                            if (local_10._4_4_ != 0) goto LAB_71007579fc;
                            if ((int)local_8 == 0) goto LAB_710075796c;
LAB_7100757930:
                            puVar5 = (undefined8 *)tpidrro_el0;
                            *puVar5 = 0x800000004;
                            puVar5[2] = 0;
                            puVar5[3] = 0;
                            *(undefined1 *)(puVar5 + 2) = 2;
                            *(int *)((long)puVar5 + 0x14) = (int)local_8;
                          }
                          else {
                            uVar22 = uVar13;
                            if (local_10._4_4_ == 0) {
LAB_7100757924:
                              if ((int)local_8 == 0) goto LAB_7100757608;
                              goto LAB_7100757930;
                            }
LAB_71007579fc:
                            puVar5 = (undefined8 *)tpidrro_el0;
                            *puVar5 = 2;
                            uVar22 = uVar13;
                          }
                          FUN_710076d0c0(local_10 & 0xffffffff);
                          if (local_10._4_4_ != 0) {
                            FUN_710076d060(local_10 & 0xffffffff);
                          }
                          if ((int)uVar22 == 0) goto LAB_710075796c;
                        }
                        else {
                          FUN_710076d6f0(0x7100d16f80,iVar12);
                        }
                      }
                      else {
                        FUN_710076d6f0(0x7100d16f80,iVar12);
                        uVar22 = 0x5f59;
                      }
                    }
                    else {
                      FUN_710076d6f0(0x7100d16f80,iVar12);
                    }
                  }
                }
              }
              else {
LAB_7100757988:
                uVar22 = 0x5f59;
              }
            }
          }
        }
      }
    }
    else {
      uVar22 = 0x1759;
      if (param_1 == 1) {
        pcVar23 = "lp2p:sys";
        goto LAB_7100757640;
      }
    }
LAB_7100757608:
    FUN_71007571c0();
    _DAT_7100d16f7c = _DAT_7100d16f7c + -1;
  }
  else {
LAB_710075796c:
    uVar22 = 0;
  }
  FUN_7100749740(0x7100d16f78);
  return uVar22;
}



// ===== FUN_7100757c40 @ 7100757c40 (size=72) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100757c40(void)

{
  FUN_7100749670();
  if (_DAT_7100d16f7c != 0) {
    _DAT_7100d16f7c = _DAT_7100d16f7c + -1;
    if (_DAT_7100d16f7c == 0) {
      FUN_71007571c0();
    }
  }
  FUN_7100749740(0x7100d16f78);
  return;
}



// ===== FUN_7100757c90 @ 7100757c90 (size=80) =====

void FUN_7100757c90(long param_1)

{
  FUN_7100808340(param_1,0,0x200);
  *(undefined2 *)(param_1 + 0x3f) = 0x101;
  *(undefined1 *)(param_1 + 0x80) = 1;
  *(undefined1 *)(param_1 + 0x82) = 2;
  *(undefined2 *)(param_1 + 0x88) = 0x301;
  *(undefined1 *)(param_1 + 0x8d) = 0x5a;
  return;
}



// ===== FUN_7100757ce0 @ 7100757ce0 (size=44) =====

void FUN_7100757ce0(long param_1,undefined8 param_2)

{
  FUN_710081f760(param_1 + 0x1e,param_2,0x20);
  *(undefined1 *)(param_1 + 0x3e) = 0;
  return;
}



// ===== FUN_7100757d10 @ 7100757d10 (size=64) =====

void FUN_7100757d10(long param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  
  *(char *)(param_1 + 0x3f) = (char)param_3;
  if (param_3 != 0) {
    lVar1 = 1;
    iVar2 = 0;
    do {
      *(undefined1 *)(param_1 + iVar2 + 0x40) = *(undefined1 *)(param_2 + -1 + lVar1);
      if (lVar1 == param_3) {
        return;
      }
      iVar2 = (int)(char)lVar1;
      lVar1 = lVar1 + 1;
    } while (lVar1 != 0x41);
  }
  return;
}



// ===== FUN_7100757d50 @ 7100757d50 (size=128) =====

undefined8 FUN_7100757d50(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = FUN_7100769b90();
  if (0xaffff < uVar1) {
    *(undefined1 *)(param_1 + 0x1c0) = 1;
    uVar2 = FUN_710081ce00(param_2);
    if (0x3f < uVar2) {
      uVar2 = 0x3f;
    }
    *(undefined8 *)(param_1 + 0x1e1) = 0;
    *(undefined8 *)(param_1 + 0x1e9) = 0;
    *(undefined8 *)(param_1 + 0x1c1) = 0;
    *(undefined8 *)(param_1 + 0x1c9) = 0;
    *(undefined8 *)(param_1 + 0x1d1) = 0;
    *(undefined8 *)(param_1 + 0x1d9) = 0;
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    FUN_710080f900((undefined8 *)(param_1 + 0x1c1),param_2,uVar2);
    return 0;
  }
  return 0x4b59;
}



// ===== FUN_7100757dd0 @ 7100757dd0 (size=508) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100757dd0(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  long *plVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  undefined4 uVar12;
  long *plVar13;
  ulong *puVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined2 uVar20;
  ulong *puVar21;
  
  if (_DAT_7100d16fe8 == _DAT_7100d16ff8) {
    iVar9 = FUN_710076d640(0x7100d16f80);
    uVar15 = 0xc;
    iVar8 = *(int *)((long)iVar9 * 4 + 0x7100d16f80);
    puVar14 = (ulong *)tpidrro_el0;
  }
  else {
    iVar8 = 0;
    iVar9 = -1;
    puVar14 = (ulong *)tpidrro_el0;
    uVar11 = 0xc;
    if (_DAT_7100d16ff0 == 0) {
      uVar11 = 8;
    }
    uVar15 = (ulong)uVar11;
  }
  uVar7 = _DAT_7100d16ff4;
  iVar6 = _DAT_7100d16ff0;
  iVar2 = _DAT_7100d16fe8;
  puVar21 = puVar14 + 4;
  *puVar14 = uVar15 << 0x20 | 0x110004;
  if (iVar6 != 0) {
    puVar14[5] = 0;
    puVar21 = puVar14 + 6;
    *(undefined4 *)(puVar14 + 4) = 0x100001;
    *(int *)((long)puVar14 + 0x24) = iVar6;
  }
  uVar12 = (undefined4)param_1;
  uVar11 = (uint)((ulong)param_1 >> 0x20);
  uVar5 = uVar11 & 0xf;
  uVar11 = uVar11 >> 4;
  if (uVar7 < 0x200) {
    uVar11 = uVar11 & 0x3fffff;
    uVar18 = 0;
    uVar20 = 0;
    param_1 = 0;
    uVar19 = 0x200;
    uVar17 = 0;
    uVar16 = uVar5;
  }
  else {
    uVar18 = uVar11 & 0x3f;
    uVar20 = 0x200;
    uVar19 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar16 = 0;
    uVar17 = uVar5;
  }
  if (iVar8 != 0) {
    iVar2 = iVar8;
  }
  *puVar21 = 0x49434653;
  puVar21[1] = 0x300;
  *(int *)((long)puVar14 + 0xc) = (int)param_1;
  *(undefined4 *)(puVar14 + 2) = uVar19;
  *(ushort *)(puVar14 + 1) = (ushort)(uVar18 << 6) | (ushort)(uVar17 << 0xc);
  *(undefined2 *)((long)puVar14 + 10) = uVar20;
  *(undefined4 *)((long)puVar14 + 0x14) = uVar12;
  *(uint *)(puVar14 + 3) = uVar11 << 2 | uVar16 << 0x1c;
  iVar8 = FUN_710076d0c0(iVar2);
  if (iVar8 == 0) {
    plVar4 = (long *)tpidrro_el0;
    if (*plVar4 < 0) {
      uVar11 = *(uint *)(plVar4 + 1);
      plVar13 = (long *)((long)plVar4 + 0x14);
      if ((uVar11 & 1) == 0) {
        plVar13 = (long *)((long)plVar4 + 0xc);
      }
      lVar10 = (((ulong)(uVar11 >> 1) & 0xf) + ((ulong)(uVar11 >> 5) & 0xf)) * 4;
    }
    else {
      plVar13 = plVar4 + 1;
      lVar10 = 0;
    }
    piVar1 = (int *)((long)plVar4 +
                    ((long)plVar13 +
                     ((lVar10 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
                    0xfffffffffffffff0));
    iVar8 = 0x5f59;
    piVar3 = piVar1 + 4;
    if (iVar6 == 0) {
      piVar3 = piVar1;
    }
    if (*piVar3 == 0x4f434653) {
      iVar8 = piVar3[2];
    }
  }
  if (iVar9 != -1) {
    FUN_710076d6f0(0x7100d16f80,iVar9);
  }
  return iVar8;
}



// ===== FUN_7100757fd0 @ 7100757fd0 (size=8) =====

void FUN_7100757fd0(void)

{
  FUN_7100757300(0x308);
  return;
}



// ===== FUN_7100757fe0 @ 7100757fe0 (size=412) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100757fe0(undefined8 param_1)

{
  undefined2 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  int iVar9;
  ushort uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  uVar10 = _DAT_7100d16fe4;
  iVar9 = _DAT_7100d16fe0;
  uVar8 = _DAT_7100d16fd8;
  puVar4 = (undefined8 *)tpidrro_el0;
  if (_DAT_7100d16fe0 == 0) {
    puVar6 = puVar4 + 4;
    *puVar4 = 0xc0901000004;
    puVar7 = puVar4 + 7;
    puVar1 = (undefined2 *)((long)puVar4 + 0x34);
  }
  else {
    *puVar4 = 0xc0d01000004;
    puVar6 = puVar4 + 6;
    puVar7 = puVar4 + 9;
    *(undefined4 *)(puVar4 + 4) = 0x100001;
    *(int *)((long)puVar4 + 0x24) = iVar9;
    puVar4[5] = 0;
    puVar1 = (undefined2 *)((long)puVar4 + 0x44);
  }
  if (uVar10 < 0x200) {
    uVar18 = (undefined4)param_1;
    uVar14 = (uint)((ulong)param_1 >> 0x20);
    uVar15 = uVar14 >> 4 & 0x3fffff;
    uVar14 = uVar14 & 0xf;
    param_1 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar19 = 0x200;
  }
  else {
    uVar16 = (undefined2)((ulong)param_1 >> 0x20);
    uVar17 = 0x200;
    uVar19 = 0;
    uVar18 = 0;
    uVar15 = 0;
    uVar14 = 0;
  }
  *puVar6 = 0x49434653;
  puVar6[1] = 0x120;
  *(int *)puVar7 = (int)param_1;
  *(undefined2 *)((long)puVar7 + 4) = uVar16;
  *(undefined2 *)((long)puVar7 + 6) = uVar17;
  *puVar1 = uVar17;
  *(undefined4 *)(puVar4 + 1) = uVar19;
  *(undefined4 *)((long)puVar4 + 0xc) = uVar18;
  *(uint *)(puVar4 + 2) = uVar15 << 2 | uVar14 << 0x1c;
  uVar11 = FUN_710076d0c0(uVar8);
  if ((int)uVar11 == 0) {
    plVar5 = (long *)tpidrro_el0;
    if (*plVar5 < 0) {
      uVar14 = *(uint *)(plVar5 + 1);
      plVar12 = (long *)((long)plVar5 + 0x14);
      if ((uVar14 & 1) == 0) {
        plVar12 = (long *)((long)plVar5 + 0xc);
      }
      lVar13 = (((ulong)(uVar14 >> 1) & 0xf) + ((ulong)(uVar14 >> 5) & 0xf)) * 4;
    }
    else {
      plVar12 = plVar5 + 1;
      lVar13 = 0;
    }
    piVar2 = (int *)((long)plVar5 +
                    ((long)plVar12 +
                     ((lVar13 + (ulong)((uint)*plVar5 >> 0x10 & 0xf) * 8) - (long)plVar5) + 0xf &
                    0xfffffffffffffff0));
    piVar3 = piVar2 + 4;
    if (iVar9 == 0) {
      piVar3 = piVar2;
    }
    uVar11 = 0x5f59;
    if (*piVar3 == 0x4f434653) {
      uVar11 = (ulong)(uint)piVar3[2];
    }
  }
  return uVar11;
}



// ===== FUN_7100758180 @ 7100758180 (size=288) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100758180(undefined8 param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  
  iVar7 = _DAT_7100d16fe0;
  uVar6 = _DAT_7100d16fd8;
  puVar4 = (undefined8 *)tpidrro_el0;
  if (_DAT_7100d16fe0 == 0) {
    puVar10 = puVar4 + 2;
    puVar11 = puVar4 + 5;
    *puVar4 = 0xc0800000004;
  }
  else {
    puVar10 = puVar4 + 4;
    puVar11 = puVar4 + 7;
    *puVar4 = 0xc0c00000004;
    puVar4[3] = 0;
    *(undefined4 *)(puVar4 + 2) = 0x100001;
    *(int *)((long)puVar4 + 0x14) = iVar7;
  }
  *puVar10 = 0x49434653;
  puVar10[1] = 0x138;
  *(int *)puVar11 = (int)param_1;
  *(short *)((long)puVar11 + 4) = (short)((ulong)param_1 >> 0x20);
  *(undefined2 *)((long)puVar11 + 6) = 0x100;
  uVar8 = FUN_710076d0c0(uVar6);
  if ((int)uVar8 == 0) {
    plVar5 = (long *)tpidrro_el0;
    if (*plVar5 < 0) {
      uVar3 = *(uint *)(plVar5 + 1);
      plVar9 = (long *)((long)plVar5 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar9 = (long *)((long)plVar5 + 0xc);
      }
      lVar12 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar9 = plVar5 + 1;
      lVar12 = 0;
    }
    piVar1 = (int *)((long)plVar5 +
                    ((long)plVar9 +
                     ((lVar12 + (ulong)((uint)*plVar5 >> 0x10 & 0xf) * 8) - (long)plVar5) + 0xf &
                    0xfffffffffffffff0));
    piVar2 = piVar1 + 4;
    if (iVar7 == 0) {
      piVar2 = piVar1;
    }
    uVar8 = 0x5f59;
    if (*piVar2 == 0x4f434653) {
      uVar8 = (ulong)(uint)piVar2[2];
    }
  }
  return uVar8;
}



// ===== FUN_71007582a0 @ 71007582a0 (size=8) =====

void FUN_71007582a0(undefined8 param_1)

{
  FUN_7100757490(param_1,0x148);
  return;
}



// ===== FUN_71007582b0 @ 71007582b0 (size=260) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_71007582b0(int *param_1,undefined1 param_2,undefined4 param_3)

{
  uint uVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  
  uVar4 = _DAT_7100d1701c;
  plVar2 = (long *)tpidrro_el0;
  *(undefined4 *)(plVar2 + 3) = param_3;
  *(undefined4 *)((long)plVar2 + 0x1c) = 0;
  uVar3 = _DAT_7100d17010;
  *plVar2 = 0x900000004;
  *(undefined1 *)(plVar2 + 4) = param_2;
  plVar2[2] = 0x49434653;
  uVar5 = FUN_710076d0c0(uVar3);
  if ((int)uVar5 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      lVar6 = (long)plVar2 + 0x14;
      if ((uVar1 & 1) == 0) {
        lVar6 = (long)plVar2 + 0xc;
      }
      plVar8 = (long *)(lVar6 + ((ulong)(uVar1 >> 1) & 0xf) * 4);
      lVar6 = ((ulong)(uVar1 >> 5) & 0xf) << 2;
    }
    else {
      plVar8 = plVar2 + 1;
      lVar6 = 0;
    }
    uVar5 = 0x5f59;
    uVar7 = (long)plVar8 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    if ((*(int *)((long)plVar2 + uVar7) == 0x4f434653) &&
       (uVar1 = *(uint *)((long)plVar2 + uVar7 + 8), uVar5 = (ulong)uVar1, uVar1 == 0)) {
      if ((int)*plVar8 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        return uVar5;
      }
      *param_1 = (int)*plVar8;
      *(undefined2 *)(param_1 + 3) = uVar4;
      param_1[1] = 1;
      param_1[2] = 0;
    }
  }
  return uVar5;
}



// ===== FUN_71007583c0 @ 71007583c0 (size=192) =====

ulong FUN_71007583c0(undefined4 *param_1,long *param_2,undefined4 param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0xc00000004;
  *(undefined4 *)(plVar2 + 3) = param_3;
  *(undefined4 *)((long)plVar2 + 0x1c) = 0;
  plVar2[2] = 0x49434653;
  lVar6 = param_2[1];
  plVar2[4] = *param_2;
  plVar2[5] = lVar6;
  uVar3 = FUN_710076d0c0(*param_1);
  if ((int)uVar3 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar4 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar4 = (long *)((long)plVar2 + 0xc);
      }
      lVar6 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar4 = plVar2 + 1;
      lVar6 = 0;
    }
    uVar5 = (long)plVar4 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar3 = 0x5f59;
    if (*(int *)((long)plVar2 + uVar5) == 0x4f434653) {
      uVar3 = (ulong)*(uint *)((long)plVar2 + uVar5 + 8);
    }
  }
  return uVar3;
}



// ===== FUN_7100758480 @ 7100758480 (size=212) =====

ulong FUN_7100758480(undefined4 *param_1,long *param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0xc00000004;
  *(undefined4 *)(plVar2 + 3) = param_4;
  *(undefined4 *)((long)plVar2 + 0x1c) = 0;
  plVar2[2] = 0x49434653;
  lVar6 = param_2[1];
  plVar2[4] = *param_2;
  plVar2[5] = lVar6;
  uVar3 = FUN_710076d0c0(*param_1);
  if ((int)uVar3 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar4 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar4 = (long *)((long)plVar2 + 0xc);
      }
      lVar6 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar4 = plVar2 + 1;
      lVar6 = 0;
    }
    uVar5 = (long)plVar4 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar3 = 0x5f59;
    if (((*(int *)((long)plVar2 + uVar5) == 0x4f434653) &&
        (uVar1 = *(uint *)((long)plVar2 + uVar5 + 8), uVar3 = (ulong)uVar1, uVar1 == 0)) &&
       (param_3 != (undefined8 *)0x0)) {
      *param_3 = *(undefined8 *)((long)plVar2 + uVar5 + 0x10);
    }
  }
  return uVar3;
}



// ===== FUN_7100758560 @ 7100758560 (size=120) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_7100758560(void)

{
  undefined8 *puVar1;
  
  if (_DAT_7100d17014 == 0) {
    _DAT_7100d17010 = 0;
    _DAT_7100d17018 = 0;
    return;
  }
  puVar1 = (undefined8 *)tpidrro_el0;
  *puVar1 = 2;
  FUN_710076d0c0(_DAT_7100d17010 & 0xffffffff);
  if (_DAT_7100d17014 == 0) {
    _DAT_7100d17010 = 0;
    _DAT_7100d17018 = 0;
    return;
  }
  FUN_710076d060(_DAT_7100d17010 & 0xffffffff);
  _DAT_7100d17010 = 0;
  _DAT_7100d17018 = 0;
  return;
}



// ===== FUN_71007585e0 @ 71007585e0 (size=180) =====

ulong FUN_71007585e0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0x800000004;
  *(undefined4 *)(plVar2 + 3) = param_3;
  *(undefined4 *)((long)plVar2 + 0x1c) = 0;
  plVar2[2] = 0x49434653;
  uVar3 = FUN_710076d0c0();
  if ((int)uVar3 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar4 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar4 = (long *)((long)plVar2 + 0xc);
      }
      lVar6 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar4 = plVar2 + 1;
      lVar6 = 0;
    }
    uVar5 = (long)plVar4 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar3 = 0x5f59;
    if (*(int *)((long)plVar2 + uVar5) == 0x4f434653) {
      uVar3 = (ulong)*(uint *)((long)plVar2 + uVar5 + 8);
    }
  }
  return uVar3;
}



// ===== FUN_71007586a0 @ 71007586a0 (size=152) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_71007586a0(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = 0;
  FUN_7100749670(0x7100d17008);
  iVar1 = _DAT_7100d1700c + 1;
  bVar2 = _DAT_7100d1700c == 0;
  _DAT_7100d1700c = iVar1;
  if (bVar2) {
    iVar3 = FUN_710075e590(&DAT_7100d17010,0x6d636e);
    if (iVar3 != 0) {
      FUN_7100758560();
      _DAT_7100d1700c = _DAT_7100d1700c + -1;
      FUN_7100749740(0x7100d17008);
      return iVar3;
    }
  }
  FUN_7100749740(0x7100d17008);
  return iVar3;
}



// ===== FUN_7100758790 @ 7100758790 (size=8) =====

void FUN_7100758790(undefined8 param_1,undefined8 param_2)

{
  FUN_71007582b0(param_1,param_2,4);
  return;
}



// ===== FUN_71007587a0 @ 71007587a0 (size=8) =====

void FUN_71007587a0(undefined8 param_1,undefined8 param_2)

{
  FUN_71007582b0(param_1,param_2,5);
  return;
}



// ===== FUN_71007587b0 @ 71007587b0 (size=100) =====

void FUN_71007587b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)((long)param_1 + 4) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  puVar1 = (undefined8 *)tpidrro_el0;
  *puVar1 = 2;
  FUN_710076d0c0(*(undefined4 *)param_1);
  if (*(int *)((long)param_1 + 4) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  FUN_710076d060(*(undefined4 *)param_1);
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// ===== FUN_7100758820 @ 7100758820 (size=200) =====

ulong FUN_7100758820(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  plVar4 = (long *)tpidrro_el0;
  uVar2 = *param_1;
  *plVar4 = 0x800000004;
  plVar4[2] = 0x49434653;
  plVar4[3] = 0;
  uVar5 = FUN_710076d0c0(uVar2);
  if ((int)uVar5 == 0) {
    if (*plVar4 < 0) {
      uVar3 = *(uint *)(plVar4 + 1);
      plVar6 = (long *)((long)plVar4 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar6 = (long *)((long)plVar4 + 0xc);
      }
      lVar8 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar4 + 1;
      lVar8 = 0;
    }
    uVar7 = (long)plVar6 + ((lVar8 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf
            & 0xfffffffffffffff0;
    uVar5 = 0x5f59;
    if (((*(int *)((long)plVar4 + uVar7) == 0x4f434653) &&
        (uVar3 = *(uint *)((long)plVar4 + uVar7 + 8), uVar5 = (ulong)uVar3, uVar3 == 0)) &&
       (param_2 != (undefined8 *)0x0)) {
      uVar1 = *(undefined8 *)((long)plVar4 + uVar7 + 0x18);
      *param_2 = *(undefined8 *)((long)plVar4 + uVar7 + 0x10);
      param_2[1] = uVar1;
    }
  }
  return uVar5;
}



// ===== FUN_71007588f0 @ 71007588f0 (size=268) =====

ulong FUN_71007588f0(undefined4 *param_1,long *param_2,long *param_3,long param_4)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  uVar2 = FUN_7100769b90();
  if (uVar2 < 0x100000) {
    lVar7 = param_2[1];
    lVar6 = *param_2;
    lVar9 = param_3[1];
    lVar8 = *param_3;
  }
  else {
    lVar7 = param_3[1];
    lVar6 = *param_3;
    lVar9 = param_2[1];
    lVar8 = *param_2;
  }
  plVar1 = (long *)tpidrro_el0;
  *plVar1 = 0x1200000004;
  plVar1[5] = lVar7;
  plVar1[4] = lVar6;
  plVar1[7] = lVar9;
  plVar1[6] = lVar8;
  plVar1[2] = 0x49434653;
  plVar1[3] = 1;
  plVar1[8] = param_4;
  uVar3 = FUN_710076d0c0(*param_1);
  if ((int)uVar3 == 0) {
    if (*plVar1 < 0) {
      uVar2 = *(uint *)(plVar1 + 1);
      plVar4 = (long *)((long)plVar1 + 0x14);
      if ((uVar2 & 1) == 0) {
        plVar4 = (long *)((long)plVar1 + 0xc);
      }
      lVar6 = (((ulong)(uVar2 >> 1) & 0xf) + ((ulong)(uVar2 >> 5) & 0xf)) * 4;
    }
    else {
      plVar4 = plVar1 + 1;
      lVar6 = 0;
    }
    uVar5 = (long)plVar4 + ((lVar6 + (ulong)((uint)*plVar1 >> 0x10 & 0xf) * 8) - (long)plVar1) + 0xf
            & 0xfffffffffffffff0;
    uVar3 = 0x5f59;
    if (*(int *)((long)plVar1 + uVar5) == 0x4f434653) {
      uVar3 = (ulong)*(uint *)((long)plVar1 + uVar5 + 8);
    }
  }
  return uVar3;
}



// ===== FUN_7100758a00 @ 7100758a00 (size=8) =====

void FUN_7100758a00(undefined8 param_1,undefined8 param_2)

{
  FUN_71007583c0(param_1,param_2,2);
  return;
}



// ===== FUN_7100758a10 @ 7100758a10 (size=216) =====

ulong FUN_7100758a10(undefined4 *param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0xc00000004;
  plVar2[2] = 0x49434653;
  plVar2[3] = 3;
  lVar6 = param_3[1];
  plVar2[4] = *param_3;
  plVar2[5] = lVar6;
  uVar3 = FUN_710076d0c0(*param_1);
  if ((int)uVar3 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar4 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar4 = (long *)((long)plVar2 + 0xc);
      }
      lVar6 = (((ulong)(uVar1 >> 5) & 0xf) + ((ulong)(uVar1 >> 1) & 0xf)) * 4;
    }
    else {
      plVar4 = plVar2 + 1;
      lVar6 = 0;
    }
    uVar5 = (long)plVar4 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar3 = 0x5f59;
    if (((*(int *)((long)plVar2 + uVar5) == 0x4f434653) &&
        (uVar1 = *(uint *)((long)plVar2 + uVar5 + 8), uVar3 = (ulong)uVar1, uVar1 == 0)) &&
       (param_2 != (byte *)0x0)) {
      *param_2 = *(byte *)((long)plVar2 + uVar5 + 0x10) & 1;
    }
  }
  return uVar3;
}



// ===== FUN_7100758af0 @ 7100758af0 (size=240) =====

ulong FUN_7100758af0(undefined4 *param_1,long *param_2,long param_3,undefined8 param_4,
                    undefined8 param_5)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  lVar8 = *param_2;
  lVar1 = param_2[1];
  plVar4 = (long *)tpidrro_el0;
  *plVar4 = 0xe00100004;
  plVar4[4] = 0x49434653;
  plVar4[5] = 4;
  uVar3 = (uint)((ulong)param_4 >> 0x20);
  *(int *)(plVar4 + 1) = (int)param_5;
  *(int *)((long)plVar4 + 0xc) = (int)param_4;
  plVar4[6] = lVar8;
  plVar4[7] = lVar1;
  plVar4[8] = param_3;
  uVar2 = *param_1;
  *(uint *)(plVar4 + 2) =
       (uVar3 >> 4 & 0x3fffff) << 2 | ((uint)((ulong)param_5 >> 0x20) & 0xf) << 0x18 | uVar3 << 0x1c
  ;
  uVar5 = FUN_710076d0c0(uVar2);
  if ((int)uVar5 == 0) {
    if (*plVar4 < 0) {
      uVar3 = *(uint *)(plVar4 + 1);
      plVar6 = (long *)((long)plVar4 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar6 = (long *)((long)plVar4 + 0xc);
      }
      lVar8 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar4 + 1;
      lVar8 = 0;
    }
    uVar7 = (long)plVar6 + ((lVar8 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf
            & 0xfffffffffffffff0;
    uVar5 = 0x5f59;
    if (*(int *)((long)plVar4 + uVar7) == 0x4f434653) {
      uVar5 = (ulong)*(uint *)((long)plVar4 + uVar7 + 8);
    }
  }
  return uVar5;
}



// ===== FUN_7100758be0 @ 7100758be0 (size=252) =====

ulong FUN_7100758be0(undefined4 *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  uVar2 = FUN_7100769b90();
  if (uVar2 < 0x100000) {
    lVar9 = param_2[1];
    lVar8 = *param_2;
    lVar7 = param_3[1];
    lVar6 = *param_3;
  }
  else {
    lVar9 = param_3[1];
    lVar8 = *param_3;
    lVar7 = param_2[1];
    lVar6 = *param_2;
  }
  plVar1 = (long *)tpidrro_el0;
  *plVar1 = 0x1000000004;
  plVar1[5] = lVar9;
  plVar1[4] = lVar8;
  plVar1[7] = lVar7;
  plVar1[6] = lVar6;
  plVar1[2] = 0x49434653;
  plVar1[3] = 5;
  uVar3 = FUN_710076d0c0(*param_1);
  if ((int)uVar3 == 0) {
    if (*plVar1 < 0) {
      uVar2 = *(uint *)(plVar1 + 1);
      plVar4 = (long *)((long)plVar1 + 0x14);
      if ((uVar2 & 1) == 0) {
        plVar4 = (long *)((long)plVar1 + 0xc);
      }
      lVar6 = (((ulong)(uVar2 >> 1) & 0xf) + ((ulong)(uVar2 >> 5) & 0xf)) * 4;
    }
    else {
      plVar4 = plVar1 + 1;
      lVar6 = 0;
    }
    uVar5 = (long)plVar4 + ((lVar6 + (ulong)((uint)*plVar1 >> 0x10 & 0xf) * 8) - (long)plVar1) + 0xf
            & 0xfffffffffffffff0;
    uVar3 = 0x5f59;
    if (*(int *)((long)plVar1 + uVar5) == 0x4f434653) {
      uVar3 = (ulong)*(uint *)((long)plVar1 + uVar5 + 8);
    }
  }
  return uVar3;
}



// ===== FUN_7100758ce0 @ 7100758ce0 (size=8) =====

void FUN_7100758ce0(undefined8 param_1,undefined8 param_2)

{
  FUN_71007583c0(param_1,param_2,6);
  return;
}



// ===== FUN_7100758cf0 @ 7100758cf0 (size=216) =====

ulong FUN_7100758cf0(undefined4 *param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0xc00000004;
  plVar2[2] = 0x49434653;
  plVar2[3] = 7;
  lVar6 = param_3[1];
  plVar2[4] = *param_3;
  plVar2[5] = lVar6;
  uVar3 = FUN_710076d0c0(*param_1);
  if ((int)uVar3 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar4 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar4 = (long *)((long)plVar2 + 0xc);
      }
      lVar6 = (((ulong)(uVar1 >> 5) & 0xf) + ((ulong)(uVar1 >> 1) & 0xf)) * 4;
    }
    else {
      plVar4 = plVar2 + 1;
      lVar6 = 0;
    }
    uVar5 = (long)plVar4 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar3 = 0x5f59;
    if (((*(int *)((long)plVar2 + uVar5) == 0x4f434653) &&
        (uVar1 = *(uint *)((long)plVar2 + uVar5 + 8), uVar3 = (ulong)uVar1, uVar1 == 0)) &&
       (param_2 != (byte *)0x0)) {
      *param_2 = *(byte *)((long)plVar2 + uVar5 + 0x10) & 1;
    }
  }
  return uVar3;
}



// ===== FUN_7100758dd0 @ 7100758dd0 (size=16) =====

void FUN_7100758dd0(undefined4 *param_1)

{
  FUN_71007585e0(*param_1,param_1[2],10);
  return;
}



// ===== FUN_7100758de0 @ 7100758de0 (size=204) =====

ulong FUN_7100758de0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0x800000004;
  plVar2[2] = 0x49434653;
  plVar2[3] = 0xc;
  uVar3 = FUN_710076d0c0(*param_1);
  if ((int)uVar3 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar4 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar4 = (long *)((long)plVar2 + 0xc);
      }
      lVar6 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar4 = plVar2 + 1;
      lVar6 = 0;
    }
    uVar5 = (long)plVar4 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar3 = 0x5f59;
    if (((*(int *)((long)plVar2 + uVar5) == 0x4f434653) &&
        (uVar1 = *(uint *)((long)plVar2 + uVar5 + 8), uVar3 = (ulong)uVar1, uVar1 == 0)) &&
       (param_2 != (undefined4 *)0x0)) {
      *param_2 = *(undefined4 *)((long)plVar2 + uVar5 + 0x10);
    }
  }
  return uVar3;
}



// ===== FUN_7100758eb0 @ 7100758eb0 (size=248) =====

ulong FUN_7100758eb0(undefined4 *param_1,undefined8 param_2,ulong param_3,undefined4 *param_4,
                    undefined4 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = (param_3 & 0xffffffff) << 4;
  plVar3 = (long *)tpidrro_el0;
  *plVar3 = 0x901000004;
  *(int *)(plVar3 + 1) = (int)lVar7;
  *(int *)((long)plVar3 + 0xc) = (int)param_2;
  plVar3[4] = 0x49434653;
  plVar3[5] = 0xd;
  uVar2 = (uint)((ulong)param_2 >> 0x20);
  *(undefined4 *)(plVar3 + 6) = param_5;
  uVar1 = *param_1;
  *(uint *)(plVar3 + 2) =
       (uVar2 >> 4 & 0x3fffff) << 2 | (int)((ulong)lVar7 >> 0x20) << 0x18 | uVar2 << 0x1c;
  uVar4 = FUN_710076d0c0(uVar1);
  if ((int)uVar4 == 0) {
    if (*plVar3 < 0) {
      uVar2 = *(uint *)(plVar3 + 1);
      plVar5 = (long *)((long)plVar3 + 0x14);
      if ((uVar2 & 1) == 0) {
        plVar5 = (long *)((long)plVar3 + 0xc);
      }
      lVar7 = (((ulong)(uVar2 >> 1) & 0xf) + ((ulong)(uVar2 >> 5) & 0xf)) * 4;
    }
    else {
      plVar5 = plVar3 + 1;
      lVar7 = 0;
    }
    uVar6 = (long)plVar5 + ((lVar7 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf
            & 0xfffffffffffffff0;
    uVar4 = 0x5f59;
    if (((*(int *)((long)plVar3 + uVar6) == 0x4f434653) &&
        (uVar2 = *(uint *)((long)plVar3 + uVar6 + 8), uVar4 = (ulong)uVar2, uVar2 == 0)) &&
       (param_4 != (undefined4 *)0x0)) {
      *param_4 = *(undefined4 *)((long)plVar3 + uVar6 + 0x10);
    }
  }
  return uVar4;
}



// ===== FUN_7100758fb0 @ 7100758fb0 (size=20) =====

void FUN_7100758fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_7100758480(param_1,param_3,param_2,0xe);
  return;
}



// ===== FUN_7100758fd0 @ 7100758fd0 (size=316) =====

ulong FUN_7100758fd0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                    long param_5)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  uVar4 = FUN_7100769b90();
  if (0x1ffff < uVar4) {
    lVar8 = *param_4;
    lVar1 = param_4[1];
    plVar3 = (long *)tpidrro_el0;
    *plVar3 = 0xe01000004;
    plVar3[4] = 0x49434653;
    plVar3[5] = 0x12;
    uVar4 = (uint)((ulong)param_2 >> 0x20);
    *(int *)(plVar3 + 1) = (int)param_3;
    *(int *)((long)plVar3 + 0xc) = (int)param_2;
    plVar3[6] = lVar8;
    plVar3[7] = lVar1;
    plVar3[8] = param_5;
    uVar2 = *param_1;
    *(uint *)(plVar3 + 2) =
         (uVar4 >> 4 & 0x3fffff) << 2 | ((uint)((ulong)param_3 >> 0x20) & 0xf) << 0x18 |
         uVar4 << 0x1c;
    uVar5 = FUN_710076d0c0(uVar2);
    if ((int)uVar5 == 0) {
      if (*plVar3 < 0) {
        uVar4 = *(uint *)(plVar3 + 1);
        plVar6 = (long *)((long)plVar3 + 0x14);
        if ((uVar4 & 1) == 0) {
          plVar6 = (long *)((long)plVar3 + 0xc);
        }
        lVar8 = (((ulong)(uVar4 >> 1) & 0xf) + ((ulong)(uVar4 >> 5) & 0xf)) * 4;
      }
      else {
        plVar6 = plVar3 + 1;
        lVar8 = 0;
      }
      uVar7 = (long)plVar6 +
              ((lVar8 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf &
              0xfffffffffffffff0;
      uVar5 = 0x5f59;
      if (*(int *)((long)plVar3 + uVar7) == 0x4f434653) {
        uVar5 = (ulong)*(uint *)((long)plVar3 + uVar7 + 8);
      }
    }
    return uVar5;
  }
  return 0x4b59;
}



// ===== FUN_7100759110 @ 7100759110 (size=468) =====

ulong FUN_7100759110(undefined4 *param_1,undefined8 *param_2,long *param_3,undefined1 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  
  uVar4 = FUN_7100769b90();
  if (uVar4 < 0x20000) {
    return 0x4b59;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  lVar8 = *param_3;
  lVar1 = param_3[1];
  uVar4 = FUN_7100769b90();
  plVar3 = (long *)tpidrro_el0;
  *plVar3 = 0xd00000004;
  plVar3[2] = 0x49434653;
  plVar3[3] = 0x14;
  *(undefined1 *)(plVar3 + 6) = param_4;
  plVar3[4] = lVar8;
  plVar3[5] = lVar1;
  if (uVar4 < 0x30000) {
    uVar5 = FUN_710076d0c0(*param_1);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if (*plVar3 < 0) {
      uVar4 = *(uint *)(plVar3 + 1);
      plVar6 = (long *)((long)plVar3 + 0x14);
      if ((uVar4 & 1) == 0) {
        plVar6 = (long *)((long)plVar3 + 0xc);
      }
      lVar8 = (((ulong)(uVar4 >> 1) & 0xf) + ((ulong)(uVar4 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar3 + 1;
      lVar8 = 0;
    }
    uVar5 = (long)plVar6 + ((lVar8 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf
            & 0xfffffffffffffff0;
    if (*(int *)((long)plVar3 + uVar5) == 0x4f434653) {
      uVar4 = *(uint *)((long)plVar3 + uVar5 + 8);
      if (uVar4 != 0) {
        return (ulong)uVar4;
      }
      uVar2 = *(undefined8 *)((long)plVar3 + uVar5 + 0x18);
      *param_2 = *(undefined8 *)((long)plVar3 + uVar5 + 0x10);
      param_2[1] = uVar2;
      return (ulong)uVar4;
    }
  }
  else {
    uVar5 = FUN_710076d0c0(*param_1);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if (*plVar3 < 0) {
      uVar4 = *(uint *)(plVar3 + 1);
      plVar6 = (long *)((long)plVar3 + 0x14);
      if ((uVar4 & 1) == 0) {
        plVar6 = (long *)((long)plVar3 + 0xc);
      }
      lVar8 = (((ulong)(uVar4 >> 1) & 0xf) + ((ulong)(uVar4 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar3 + 1;
      lVar8 = 0;
    }
    uVar5 = (long)plVar6 + ((lVar8 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf
            & 0xfffffffffffffff0;
    if (*(int *)((long)plVar3 + uVar5) == 0x4f434653) {
      uVar4 = *(uint *)((long)plVar3 + uVar5 + 8);
      if (uVar4 != 0) {
        return (ulong)uVar4;
      }
      uVar2 = *(undefined8 *)((long)plVar3 + uVar5 + 0x18);
      uVar7 = *(undefined8 *)((long)plVar3 + uVar5 + 0x20);
      *param_2 = *(undefined8 *)((long)plVar3 + uVar5 + 0x10);
      param_2[1] = uVar2;
      param_2[2] = uVar7;
      return (ulong)uVar4;
    }
  }
  return 0x5f59;
}



// ===== FUN_71007592f0 @ 71007592f0 (size=72) =====

undefined8 FUN_71007592f0(undefined4 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_7100769b90();
  if (0x2ffff < uVar1) {
    uVar2 = FUN_71007585e0(*param_1,param_1[2],0x18);
    return uVar2;
  }
  return 0x4b59;
}



// ===== FUN_7100759340 @ 7100759340 (size=100) =====

void FUN_7100759340(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)((long)param_1 + 4) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  puVar1 = (undefined8 *)tpidrro_el0;
  *puVar1 = 2;
  FUN_710076d0c0(*(undefined4 *)param_1);
  if (*(int *)((long)param_1 + 4) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  FUN_710076d060(*(undefined4 *)param_1);
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// ===== FUN_71007593b0 @ 71007593b0 (size=224) =====

ulong FUN_71007593b0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0xc00100004;
  *(int *)(plVar2 + 1) = (int)param_4;
  *(int *)((long)plVar2 + 0xc) = (int)param_3;
  plVar2[4] = 0x49434653;
  plVar2[5] = 0;
  uVar1 = (uint)((ulong)param_3 >> 0x20);
  *(uint *)(plVar2 + 2) =
       (uVar1 >> 4 & 0x3fffff) << 2 | ((uint)((ulong)param_4 >> 0x20) & 0xf) << 0x18 | uVar1 << 0x1c
  ;
  lVar6 = param_2[1];
  plVar2[6] = *param_2;
  plVar2[7] = lVar6;
  uVar3 = FUN_710076d0c0(*param_1);
  if ((int)uVar3 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar4 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar4 = (long *)((long)plVar2 + 0xc);
      }
      lVar6 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar4 = plVar2 + 1;
      lVar6 = 0;
    }
    uVar5 = (long)plVar4 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar3 = 0x5f59;
    if (*(int *)((long)plVar2 + uVar5) == 0x4f434653) {
      uVar3 = (ulong)*(uint *)((long)plVar2 + uVar5 + 8);
    }
  }
  return uVar3;
}



// ===== FUN_7100759490 @ 7100759490 (size=248) =====

ulong FUN_7100759490(undefined4 *param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                    undefined8 param_5)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0xc01000004;
  *(int *)(plVar2 + 1) = (int)param_5;
  *(int *)((long)plVar2 + 0xc) = (int)param_4;
  plVar2[4] = 0x49434653;
  plVar2[5] = 1;
  uVar1 = (uint)((ulong)param_4 >> 0x20);
  *(uint *)(plVar2 + 2) =
       (uVar1 >> 4 & 0x3fffff) << 2 | ((uint)((ulong)param_5 >> 0x20) & 0xf) << 0x18 | uVar1 << 0x1c
  ;
  lVar6 = param_2[1];
  plVar2[6] = *param_2;
  plVar2[7] = lVar6;
  uVar3 = FUN_710076d0c0(*param_1);
  if ((int)uVar3 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar4 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar4 = (long *)((long)plVar2 + 0xc);
      }
      lVar6 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar4 = plVar2 + 1;
      lVar6 = 0;
    }
    uVar5 = (long)plVar4 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar3 = 0x5f59;
    if (((*(int *)((long)plVar2 + uVar5) == 0x4f434653) &&
        (uVar1 = *(uint *)((long)plVar2 + uVar5 + 8), uVar3 = (ulong)uVar1, uVar1 == 0)) &&
       (param_3 != (undefined8 *)0x0)) {
      *param_3 = *(undefined8 *)((long)plVar2 + uVar5 + 0x10);
    }
  }
  return uVar3;
}



// ===== FUN_7100759590 @ 7100759590 (size=192) =====

ulong FUN_7100759590(undefined4 *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0xc00000004;
  plVar2[2] = 0x49434653;
  plVar2[3] = 2;
  lVar6 = param_2[1];
  plVar2[4] = *param_2;
  plVar2[5] = lVar6;
  uVar3 = FUN_710076d0c0(*param_1);
  if ((int)uVar3 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar4 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar4 = (long *)((long)plVar2 + 0xc);
      }
      lVar6 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar4 = plVar2 + 1;
      lVar6 = 0;
    }
    uVar5 = (long)plVar4 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar3 = 0x5f59;
    if (*(int *)((long)plVar2 + uVar5) == 0x4f434653) {
      uVar3 = (ulong)*(uint *)((long)plVar2 + uVar5 + 8);
    }
  }
  return uVar3;
}



// ===== FUN_7100759650 @ 7100759650 (size=244) =====

ulong FUN_7100759650(undefined4 *param_1,undefined8 *param_2,long *param_3,byte param_4)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  plVar4 = (long *)tpidrro_el0;
  lVar8 = *param_3;
  lVar1 = param_3[1];
  *plVar4 = 0xe00000004;
  plVar4[2] = 0x49434653;
  plVar4[3] = 3;
  plVar4[4] = (ulong)param_4;
  plVar4[5] = lVar8;
  plVar4[6] = lVar1;
  uVar5 = FUN_710076d0c0(*param_1);
  if ((int)uVar5 == 0) {
    if (*plVar4 < 0) {
      uVar3 = *(uint *)(plVar4 + 1);
      plVar6 = (long *)((long)plVar4 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar6 = (long *)((long)plVar4 + 0xc);
      }
      lVar8 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar4 + 1;
      lVar8 = 0;
    }
    uVar7 = (long)plVar6 + ((lVar8 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf
            & 0xfffffffffffffff0;
    uVar5 = 0x5f59;
    if (((*(int *)((long)plVar4 + uVar7) == 0x4f434653) &&
        (uVar3 = *(uint *)((long)plVar4 + uVar7 + 8), uVar5 = (ulong)uVar3, uVar3 == 0)) &&
       (param_2 != (undefined8 *)0x0)) {
      uVar2 = *(undefined8 *)((long)plVar4 + uVar7 + 0x18);
      *param_2 = *(undefined8 *)((long)plVar4 + uVar7 + 0x10);
      param_2[1] = uVar2;
    }
  }
  return uVar5;
}



// ===== FUN_7100759750 @ 7100759750 (size=276) =====

ulong FUN_7100759750(undefined4 *param_1,undefined4 *param_2,undefined8 param_3,int param_4,
                    long *param_5,uint param_6)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  plVar3 = (long *)tpidrro_el0;
  lVar7 = *param_5;
  lVar1 = param_5[1];
  *plVar3 = 0xe01000004;
  plVar3[4] = 0x49434653;
  plVar3[5] = 4;
  uVar2 = (uint)((ulong)param_3 >> 0x20);
  *(int *)(plVar3 + 1) = (int)((long)param_4 * 0x18);
  *(int *)((long)plVar3 + 0xc) = (int)param_3;
  *(uint *)(plVar3 + 2) =
       (uVar2 >> 4 & 0x3fffff) << 2 | ((uint)((ulong)((long)param_4 * 0x18) >> 0x20) & 0xf) << 0x18
       | uVar2 << 0x1c;
  plVar3[8] = lVar1;
  plVar3[6] = (ulong)param_6;
  plVar3[7] = lVar7;
  uVar4 = FUN_710076d0c0(*param_1);
  if ((int)uVar4 == 0) {
    if (*plVar3 < 0) {
      uVar2 = *(uint *)(plVar3 + 1);
      plVar5 = (long *)((long)plVar3 + 0x14);
      if ((uVar2 & 1) == 0) {
        plVar5 = (long *)((long)plVar3 + 0xc);
      }
      lVar7 = (((ulong)(uVar2 >> 1) & 0xf) + ((ulong)(uVar2 >> 5) & 0xf)) * 4;
    }
    else {
      plVar5 = plVar3 + 1;
      lVar7 = 0;
    }
    uVar6 = (long)plVar5 + ((lVar7 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf
            & 0xfffffffffffffff0;
    uVar4 = 0x5f59;
    if (((*(int *)((long)plVar3 + uVar6) == 0x4f434653) &&
        (uVar2 = *(uint *)((long)plVar3 + uVar6 + 8), uVar4 = (ulong)uVar2, uVar2 == 0)) &&
       (param_2 != (undefined4 *)0x0)) {
      *param_2 = *(undefined4 *)((long)plVar3 + uVar6 + 0x10);
    }
  }
  return uVar4;
}



// ===== FUN_7100759870 @ 7100759870 (size=308) =====

ulong FUN_7100759870(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4,
                    ulong param_5,undefined1 param_6,long param_7,long param_8,long param_9,
                    undefined1 param_10)

{
  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = (param_5 & 0xffffffff) << 4;
  plVar3 = (long *)tpidrro_el0;
  *(int *)(plVar3 + 1) = (int)lVar8;
  *(int *)((long)plVar3 + 0xc) = (int)param_4;
  *plVar3 = 0x1001000004;
  plVar3[4] = 0x49434653;
  plVar3[5] = 5;
  uVar2 = (uint)((ulong)param_4 >> 0x20);
  plVar3[6] = (ulong)CONCAT11(param_10,param_6);
  plVar3[7] = param_7;
  plVar3[9] = param_9;
  plVar3[8] = param_8;
  uVar1 = *param_1;
  *(uint *)(plVar3 + 2) =
       (uVar2 >> 4 & 0x3fffff) << 2 | (int)((ulong)lVar8 >> 0x20) << 0x18 | uVar2 << 0x1c;
  uVar4 = FUN_710076d0c0(uVar1);
  if ((int)uVar4 == 0) {
    if (*plVar3 < 0) {
      uVar2 = *(uint *)(plVar3 + 1);
      plVar5 = (long *)((long)plVar3 + 0x14);
      if ((uVar2 & 1) == 0) {
        plVar5 = (long *)((long)plVar3 + 0xc);
      }
      lVar8 = (((ulong)(uVar2 >> 1) & 0xf) + ((ulong)(uVar2 >> 5) & 0xf)) * 4;
    }
    else {
      plVar5 = plVar3 + 1;
      lVar8 = 0;
    }
    uVar6 = (long)plVar5 + ((lVar8 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf
            & 0xfffffffffffffff0;
    uVar4 = 0x5f59;
    if ((*(int *)((long)plVar3 + uVar6) == 0x4f434653) &&
       (uVar2 = *(uint *)((long)plVar3 + uVar6 + 8), uVar4 = (ulong)uVar2, uVar2 == 0)) {
      uVar7 = *(undefined8 *)((long)plVar3 + uVar6 + 0x10);
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = (int)uVar7;
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = (int)((ulong)uVar7 >> 0x20);
      }
    }
  }
  return uVar4;
}



// ===== FUN_71007599b0 @ 71007599b0 (size=276) =====

ulong FUN_71007599b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4,
                    int param_5,undefined4 param_6)

{
  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  
  plVar3 = (long *)tpidrro_el0;
  *(undefined4 *)(plVar3 + 6) = param_6;
  *plVar3 = 0x901000004;
  *(int *)(plVar3 + 1) = (int)((long)param_5 * 0x18);
  *(int *)((long)plVar3 + 0xc) = (int)param_4;
  plVar3[4] = 0x49434653;
  plVar3[5] = 7;
  uVar2 = (uint)((ulong)param_4 >> 0x20);
  uVar1 = *param_1;
  *(uint *)(plVar3 + 2) =
       (uVar2 >> 4 & 0x3fffff) << 2 | ((uint)((ulong)((long)param_5 * 0x18) >> 0x20) & 0xf) << 0x18
       | uVar2 << 0x1c;
  uVar4 = FUN_710076d0c0(uVar1);
  if ((int)uVar4 == 0) {
    if (*plVar3 < 0) {
      uVar2 = *(uint *)(plVar3 + 1);
      plVar5 = (long *)((long)plVar3 + 0x14);
      if ((uVar2 & 1) == 0) {
        plVar5 = (long *)((long)plVar3 + 0xc);
      }
      lVar8 = (((ulong)(uVar2 >> 1) & 0xf) + ((ulong)(uVar2 >> 5) & 0xf)) * 4;
    }
    else {
      plVar5 = plVar3 + 1;
      lVar8 = 0;
    }
    uVar6 = (long)plVar5 + ((lVar8 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf
            & 0xfffffffffffffff0;
    uVar4 = 0x5f59;
    if ((*(int *)((long)plVar3 + uVar6) == 0x4f434653) &&
       (uVar2 = *(uint *)((long)plVar3 + uVar6 + 8), uVar4 = (ulong)uVar2, uVar2 == 0)) {
      uVar7 = *(undefined8 *)((long)plVar3 + uVar6 + 0x10);
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = (int)uVar7;
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = (int)((ulong)uVar7 >> 0x20);
      }
    }
  }
  return uVar4;
}



// ===== FUN_7100759ad0 @ 7100759ad0 (size=212) =====

ulong FUN_7100759ad0(undefined4 *param_1,undefined8 *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0xc00000004;
  plVar2[2] = 0x49434653;
  plVar2[3] = 10;
  lVar6 = param_3[1];
  plVar2[4] = *param_3;
  plVar2[5] = lVar6;
  uVar3 = FUN_710076d0c0(*param_1);
  if ((int)uVar3 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar4 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar4 = (long *)((long)plVar2 + 0xc);
      }
      lVar6 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar4 = plVar2 + 1;
      lVar6 = 0;
    }
    uVar5 = (long)plVar4 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar3 = 0x5f59;
    if (((*(int *)((long)plVar2 + uVar5) == 0x4f434653) &&
        (uVar1 = *(uint *)((long)plVar2 + uVar5 + 8), uVar3 = (ulong)uVar1, uVar1 == 0)) &&
       (param_2 != (undefined8 *)0x0)) {
      *param_2 = *(undefined8 *)((long)plVar2 + uVar5 + 0x10);
    }
  }
  return uVar3;
}



// ===== FUN_7100759bb0 @ 7100759bb0 (size=16) =====

void FUN_7100759bb0(undefined4 *param_1)

{
  FUN_71007585e0(*param_1,param_1[2],0xf);
  return;
}



// ===== FUN_7100759bc0 @ 7100759bc0 (size=316) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100759bc0(void)

{
  undefined8 *puVar1;
  int iVar2;
  
  if (_DAT_7100d1702c == 0) {
    iVar2 = _DAT_7100d17030;
    if (_DAT_7100d17030 != 0) {
      puVar1 = (undefined8 *)tpidrro_el0;
      *puVar1 = 0x800000004;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *(undefined1 *)(puVar1 + 2) = 2;
      *(int *)((long)puVar1 + 0x14) = iVar2;
      FUN_710076d0c0(_DAT_7100d17028 & 0xffffffff);
      goto joined_r0x007100759c80;
    }
  }
  else {
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 2;
    FUN_710076d0c0(_DAT_7100d17028 & 0xffffffff);
joined_r0x007100759c80:
    if (_DAT_7100d1702c != 0) {
      FUN_710076d060(_DAT_7100d17028 & 0xffffffff);
      goto joined_r0x007100759ca0;
    }
  }
joined_r0x007100759ca0:
  if (_DAT_7100d1703c == 0) {
    _DAT_7100d17030 = 0;
    _DAT_7100d17028 = 0;
    iVar2 = _DAT_7100d17040;
    if (_DAT_7100d17040 == 0) {
      _DAT_7100d17028 = 0;
      _DAT_7100d17030 = 0;
      _DAT_7100d17038 = 0;
      _DAT_7100d17040 = 0;
      return;
    }
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 0x800000004;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 2) = 2;
    *(int *)((long)puVar1 + 0x14) = iVar2;
    FUN_710076d0c0(_DAT_7100d17038 & 0xffffffff);
  }
  else {
    _DAT_7100d17030 = 0;
    _DAT_7100d17028 = 0;
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 2;
    FUN_710076d0c0(_DAT_7100d17038 & 0xffffffff);
  }
  if (_DAT_7100d1703c != 0) {
    FUN_710076d060(_DAT_7100d17038 & 0xffffffff);
    _DAT_7100d17038 = 0;
    _DAT_7100d17040 = 0;
    return;
  }
  _DAT_7100d17038 = 0;
  _DAT_7100d17040 = 0;
  return;
}



// ===== FUN_7100759d00 @ 7100759d00 (size=304) =====

void FUN_7100759d00(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  FUN_7100808340(param_2,0,400);
  uVar3 = *(undefined8 *)((long)param_1 + 0xca);
  *param_2 = *(undefined8 *)((long)param_1 + 0xc2);
  param_2[1] = uVar3;
  uVar7 = *(undefined8 *)((long)param_1 + 0xea);
  uVar6 = *(undefined8 *)((long)param_1 + 0xe2);
  uVar5 = *(undefined8 *)((long)param_1 + 0xfa);
  uVar4 = *(undefined8 *)((long)param_1 + 0xf2);
  uVar3 = *(undefined8 *)((long)param_1 + 0xd2);
  uVar8 = *(undefined8 *)((long)param_1 + 0x101);
  uVar9 = *(undefined8 *)((long)param_1 + 0x109);
  param_2[3] = *(undefined8 *)((long)param_1 + 0xda);
  param_2[2] = uVar3;
  param_2[5] = uVar7;
  param_2[4] = uVar6;
  param_2[7] = uVar5;
  param_2[6] = uVar4;
  *(undefined8 *)((long)param_2 + 0x3f) = uVar8;
  *(undefined8 *)((long)param_2 + 0x47) = uVar9;
  *(uint *)(param_2 + 10) = (uint)*(byte *)((long)param_1 + 0x112);
  *(uint *)((long)param_2 + 0x54) = (uint)*(byte *)((long)param_1 + 0x113);
  *(undefined1 *)(param_2 + 0xb) = *(undefined1 *)((long)param_1 + 0x114);
  *(undefined1 *)((long)param_2 + 0x59) = *(undefined1 *)((long)param_1 + 0x115);
  bVar2 = *(byte *)((long)param_1 + 0x116);
  *(byte *)((long)param_2 + 0x5c) = bVar2;
  if (bVar2 < 0x21) {
    if (bVar2 == 0) goto LAB_7100759da0;
  }
  else {
    bVar2 = 0x20;
    *(undefined1 *)((long)param_2 + 0x5c) = 0x20;
  }
  FUN_710080f900((long)param_2 + 0x5d,(long)param_1 + 0x117,bVar2);
LAB_7100759da0:
  *(undefined1 *)((long)param_2 + 0x7e) = *(undefined1 *)((long)param_1 + 0x137);
  *(uint *)(param_2 + 0x10) = (uint)*(byte *)(param_1 + 0x27);
  *(uint *)((long)param_2 + 0x84) = (uint)*(byte *)((long)param_1 + 0x139);
  uVar3 = *(undefined8 *)((long)param_1 + 0x13a);
  uVar7 = *(undefined8 *)((long)param_1 + 0x152);
  uVar6 = *(undefined8 *)((long)param_1 + 0x14a);
  uVar5 = *(undefined8 *)((long)param_1 + 0x162);
  uVar4 = *(undefined8 *)((long)param_1 + 0x15a);
  uVar8 = *(undefined8 *)((long)param_1 + 0x16a);
  uVar9 = *(undefined8 *)((long)param_1 + 0x172);
  uVar1 = *(undefined1 *)((long)param_1 + 0x17a);
  param_2[0x12] = *(undefined8 *)((long)param_1 + 0x142);
  param_2[0x11] = uVar3;
  param_2[0x14] = uVar7;
  param_2[0x13] = uVar6;
  param_2[0x16] = uVar5;
  param_2[0x15] = uVar4;
  param_2[0x17] = uVar8;
  param_2[0x18] = uVar9;
  *(undefined1 *)(param_2 + 0x19) = uVar1;
  uVar3 = *param_1;
  uVar7 = param_1[3];
  uVar6 = param_1[2];
  uVar5 = param_1[5];
  uVar4 = param_1[4];
  uVar11 = param_1[7];
  uVar10 = param_1[6];
  uVar9 = param_1[9];
  uVar8 = param_1[8];
  uVar12 = param_1[10];
  uVar13 = param_1[0xb];
  *(undefined8 *)((long)param_2 + 0xd4) = param_1[1];
  *(undefined8 *)((long)param_2 + 0xcc) = uVar3;
  *(undefined8 *)((long)param_2 + 0xe4) = uVar7;
  *(undefined8 *)((long)param_2 + 0xdc) = uVar6;
  *(undefined8 *)((long)param_2 + 0xf4) = uVar5;
  *(undefined8 *)((long)param_2 + 0xec) = uVar4;
  *(undefined8 *)((long)param_2 + 0x104) = uVar11;
  *(undefined8 *)((long)param_2 + 0xfc) = uVar10;
  *(undefined8 *)((long)param_2 + 0x114) = uVar9;
  *(undefined8 *)((long)param_2 + 0x10c) = uVar8;
  *(undefined8 *)((long)param_2 + 0x11c) = uVar12;
  *(undefined8 *)((long)param_2 + 0x124) = uVar13;
  uVar5 = param_1[0xc];
  uVar4 = param_1[0xf];
  uVar3 = param_1[0xe];
  uVar12 = param_1[0x14];
  uVar13 = param_1[0x15];
  uVar11 = param_1[0x17];
  uVar10 = param_1[0x16];
  uVar9 = param_1[0x11];
  uVar8 = param_1[0x10];
  uVar7 = param_1[0x13];
  uVar6 = param_1[0x12];
  *(undefined8 *)((long)param_2 + 0x134) = param_1[0xd];
  *(undefined8 *)((long)param_2 + 300) = uVar5;
  *(undefined8 *)((long)param_2 + 0x144) = uVar4;
  *(undefined8 *)((long)param_2 + 0x13c) = uVar3;
  *(undefined8 *)((long)param_2 + 0x154) = uVar9;
  *(undefined8 *)((long)param_2 + 0x14c) = uVar8;
  *(undefined8 *)((long)param_2 + 0x164) = uVar7;
  *(undefined8 *)((long)param_2 + 0x15c) = uVar6;
  *(undefined8 *)((long)param_2 + 0x16c) = uVar12;
  *(undefined8 *)((long)param_2 + 0x174) = uVar13;
  *(undefined8 *)((long)param_2 + 0x184) = uVar11;
  *(undefined8 *)((long)param_2 + 0x17c) = uVar10;
  *(undefined2 *)((long)param_2 + 0x18c) = *(undefined2 *)(param_1 + 0x18);
  return;
}



// ===== FUN_7100759e30 @ 7100759e30 (size=232) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100759e30(byte *param_1,undefined4 param_2)

{
  uint uVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar4 = _DAT_7100d17030;
  uVar3 = _DAT_7100d17028;
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0xc00000004;
  *(undefined4 *)(plVar2 + 5) = param_2;
  *(undefined4 *)((long)plVar2 + 0x2c) = 0;
  *(undefined4 *)(plVar2 + 2) = 0x100001;
  *(undefined4 *)((long)plVar2 + 0x14) = uVar4;
  plVar2[3] = 0;
  plVar2[4] = 0x49434653;
  uVar5 = FUN_710076d0c0(uVar3);
  if ((int)uVar5 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar7 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar7 = (long *)((long)plVar2 + 0xc);
      }
      lVar6 = (((ulong)(uVar1 >> 5) & 0xf) + ((ulong)(uVar1 >> 1) & 0xf)) * 4;
    }
    else {
      plVar7 = plVar2 + 1;
      lVar6 = 0;
    }
    uVar5 = 0x5f59;
    uVar8 = (long)plVar7 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    if (((*(int *)((long)plVar2 + uVar8 + 0x10) == 0x4f434653) &&
        (uVar1 = *(uint *)((long)plVar2 + uVar8 + 0x18), uVar5 = (ulong)uVar1, uVar1 == 0)) &&
       (param_1 != (byte *)0x0)) {
      *param_1 = *(byte *)((long)plVar2 + uVar8 + 0x20) & 1;
    }
  }
  return uVar5;
}



// ===== FUN_7100759f20 @ 7100759f20 (size=968) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100759f20(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  uint *puVar12;
  
  FUN_7100749670(0x7100d17020);
  iVar8 = _DAT_7100d17024 + 1;
  bVar1 = _DAT_7100d17024 != 0;
  _DAT_7100d17024 = iVar8;
  if (bVar1) {
LAB_710075a1c0:
    iVar8 = 0;
    goto LAB_7100759f88;
  }
  _DAT_7100d17048 = param_1;
  if (param_1 == 1) {
    iVar8 = FUN_710075e590(&DAT_7100d17038,0x733a6d66696e);
LAB_7100759fc0:
    uVar3 = _DAT_7100d17038;
    if (iVar8 == 0) {
      if (_DAT_7100d1703c == 0) {
        plVar4 = (long *)tpidrro_el0;
        *plVar4 = 0x900000005;
        *(undefined4 *)(plVar4 + 4) = 0;
        plVar4[2] = 0x49434653;
        plVar4[3] = 4;
        iVar8 = FUN_710076d0c0(uVar3);
        if (iVar8 == 0) {
          if (*plVar4 < 0) {
            uVar3 = *(uint *)(plVar4 + 1);
            lVar11 = (long)plVar4 + 0x14;
            if ((uVar3 & 1) == 0) {
              lVar11 = (long)plVar4 + 0xc;
            }
            puVar12 = (uint *)(lVar11 + ((ulong)(uVar3 >> 1) & 0xf) * 4);
            lVar11 = ((ulong)(uVar3 >> 5) & 0xf) << 2;
          }
          else {
            puVar12 = (uint *)(plVar4 + 1);
            lVar11 = 0;
          }
          uVar9 = (long)puVar12 +
                  ((lVar11 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
                  0xfffffffffffffff0;
          if (*(int *)((long)plVar4 + uVar9) != 0x4f434653) goto LAB_710075a238;
          iVar8 = *(int *)((long)plVar4 + uVar9 + 8);
          if (iVar8 == 0) {
            _DAT_7100d17038 = *puVar12;
            _DAT_7100d1703c = 1;
            goto LAB_710075a068;
          }
        }
      }
      else {
LAB_710075a068:
        uVar3 = _DAT_7100d17038;
        plVar4 = (long *)tpidrro_el0;
        *plVar4 = 0x800000005;
        plVar4[2] = 0x49434653;
        plVar4[3] = 0;
        iVar8 = FUN_710076d0c0(uVar3);
        if (iVar8 == 0) {
          if (*plVar4 < 0) {
            uVar3 = *(uint *)(plVar4 + 1);
            plVar10 = (long *)((long)plVar4 + 0x14);
            if ((uVar3 & 1) == 0) {
              plVar10 = (long *)((long)plVar4 + 0xc);
            }
            lVar11 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
          }
          else {
            plVar10 = plVar4 + 1;
            lVar11 = 0;
          }
          uVar9 = (long)plVar10 +
                  ((lVar11 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
                  0xfffffffffffffff0;
          if (*(int *)((long)plVar4 + uVar9) == 0x4f434653) {
            iVar8 = *(int *)((long)plVar4 + uVar9 + 8);
            if (iVar8 == 0) {
              _DAT_7100d17040 = *(undefined4 *)((long)plVar4 + uVar9 + 0x10);
              uVar7 = FUN_7100769b90();
              uVar6 = _DAT_7100d17044;
              uVar5 = _DAT_7100d17040;
              uVar3 = _DAT_7100d17038;
              plVar4 = (long *)tpidrro_el0;
              if (uVar7 < 0x30000) {
                *plVar4 = 0xc00000004;
                *(undefined4 *)(plVar4 + 2) = 0x100001;
                *(undefined4 *)((long)plVar4 + 0x14) = uVar5;
                plVar4[3] = 0;
                plVar4[4] = 0x49434653;
                plVar4[5] = 4;
                iVar8 = FUN_710076d0c0(uVar3);
              }
              else {
                *plVar4 = -0x7ffffff1fffffffc;
                *(undefined4 *)(plVar4 + 1) = 1;
                *(undefined4 *)(plVar4 + 4) = 0x180001;
                *(undefined4 *)((long)plVar4 + 0x24) = uVar5;
                plVar4[5] = 0;
                plVar4[6] = 0x49434653;
                plVar4[7] = 5;
                plVar4[8] = 0;
                iVar8 = FUN_710076d0c0(uVar3);
              }
              if (iVar8 == 0) {
                if (*plVar4 < 0) {
                  uVar7 = *(uint *)(plVar4 + 1);
                  plVar10 = (long *)((long)plVar4 + 0x14);
                  if ((uVar7 & 1) == 0) {
                    plVar10 = (long *)((long)plVar4 + 0xc);
                  }
                  lVar11 = (((ulong)(uVar7 >> 1) & 0xf) + ((ulong)(uVar7 >> 5) & 0xf)) * 4;
                }
                else {
                  plVar10 = plVar4 + 1;
                  lVar11 = 0;
                }
                uVar9 = (long)plVar10 +
                        ((lVar11 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
                        0xfffffffffffffff0;
                if (*(int *)((long)plVar4 + uVar9 + 0x10) != 0x4f434653) goto LAB_710075a238;
                iVar8 = *(int *)((long)plVar4 + uVar9 + 0x18);
                if (iVar8 == 0) {
                  iVar2 = *(int *)((long)plVar4 + uVar9 + 0x20);
                  if (iVar2 != 0) {
                    iVar8 = 0;
                    _DAT_7100d17028 = (ulong)uVar3;
                    uVar9 = (ulong)_DAT_7100d17030 >> 0x30;
                    DAT_7100d17030_6 = (undefined2)uVar9;
                    _DAT_7100d17030 = CONCAT24(uVar6,iVar2);
                    goto LAB_7100759f88;
                  }
                  _DAT_7100d17028 = 0;
                  _DAT_7100d17030 = 0;
                  goto LAB_710075a1c0;
                }
              }
            }
          }
          else {
LAB_710075a238:
            iVar8 = 0x5f59;
          }
        }
      }
    }
  }
  else {
    if (param_1 == 2) {
      iVar8 = FUN_710075e590(&DAT_7100d17038,0x613a6d66696e);
      goto LAB_7100759fc0;
    }
    if (param_1 == 0) {
      iVar8 = FUN_710075e590(&DAT_7100d17038,0x753a6d66696e);
      goto LAB_7100759fc0;
    }
    iVar8 = 0x1759;
  }
  FUN_7100759bc0();
  _DAT_7100d17024 = _DAT_7100d17024 + -1;
LAB_7100759f88:
  FUN_7100749740(0x7100d17020);
  return iVar8;
}



// ===== FUN_710075a2f0 @ 710075a2f0 (size=72) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710075a2f0(void)

{
  FUN_7100749670();
  if (_DAT_7100d17024 != 0) {
    _DAT_7100d17024 = _DAT_7100d17024 + -1;
    if (_DAT_7100d17024 == 0) {
      FUN_7100759bc0();
    }
  }
  FUN_7100749740(0x7100d17020);
  return;
}



// ===== FUN_710075a340 @ 710075a340 (size=12) =====

undefined1 * FUN_710075a340(void)

{
  return &DAT_7100d17028;
}



// ===== FUN_710075a350 @ 710075a350 (size=296) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_710075a350(undefined8 param_1)

{
  uint uVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_180 [384];
  
  plVar2 = (long *)tpidrro_el0;
  FUN_7100808340(auStack_180,0,0x17c);
  *(int *)(plVar2 + 7) = (int)auStack_180;
  uVar4 = _DAT_7100d17030;
  uVar3 = _DAT_7100d17028;
  *plVar2 = 0xc0c00000004;
  *(undefined2 *)((long)plVar2 + 0x3e) = 0x17c;
  *(undefined4 *)(plVar2 + 2) = 0x100001;
  *(undefined4 *)((long)plVar2 + 0x14) = uVar4;
  plVar2[3] = 0;
  plVar2[4] = 0x49434653;
  plVar2[5] = 5;
  *(short *)((long)plVar2 + 0x3c) = (short)((ulong)auStack_180 >> 0x20);
  iVar5 = FUN_710076d0c0(uVar3);
  if (iVar5 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar6 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar6 = (long *)((long)plVar2 + 0xc);
      }
      lVar8 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar2 + 1;
      lVar8 = 0;
    }
    iVar5 = 0x5f59;
    uVar7 = (long)plVar6 + ((lVar8 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    if (*(int *)((long)plVar2 + uVar7 + 0x10) == 0x4f434653) {
      iVar5 = *(int *)((long)plVar2 + uVar7 + 0x18);
      if (iVar5 == 0) {
        FUN_7100759d00(auStack_180,param_1);
        iVar5 = 0;
      }
    }
  }
  return iVar5;
}



// ===== FUN_710075a480 @ 710075a480 (size=232) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710075a480(undefined4 *param_1)

{
  uint uVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar4 = _DAT_7100d17030;
  uVar3 = _DAT_7100d17028;
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0xc00000004;
  *(undefined4 *)(plVar2 + 2) = 0x100001;
  *(undefined4 *)((long)plVar2 + 0x14) = uVar4;
  plVar2[3] = 0;
  plVar2[4] = 0x49434653;
  plVar2[5] = 0xc;
  uVar5 = FUN_710076d0c0(uVar3);
  if ((int)uVar5 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar7 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar7 = (long *)((long)plVar2 + 0xc);
      }
      lVar6 = (((ulong)(uVar1 >> 5) & 0xf) + ((ulong)(uVar1 >> 1) & 0xf)) * 4;
    }
    else {
      plVar7 = plVar2 + 1;
      lVar6 = 0;
    }
    uVar5 = 0x5f59;
    uVar8 = (long)plVar7 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    if (((*(int *)((long)plVar2 + uVar8 + 0x10) == 0x4f434653) &&
        (uVar1 = *(uint *)((long)plVar2 + uVar8 + 0x18), uVar5 = (ulong)uVar1, uVar1 == 0)) &&
       (param_1 != (undefined4 *)0x0)) {
      *param_1 = *(undefined4 *)((long)plVar2 + uVar8 + 0x20);
    }
  }
  return uVar5;
}



// ===== FUN_710075a580 @ 710075a580 (size=272) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710075a580(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  
  uVar6 = _DAT_7100d17030;
  uVar5 = _DAT_7100d17028;
  plVar4 = (long *)tpidrro_el0;
  *plVar4 = 0xc00000004;
  *(undefined4 *)(plVar4 + 2) = 0x100001;
  *(undefined4 *)((long)plVar4 + 0x14) = uVar6;
  plVar4[3] = 0;
  plVar4[4] = 0x49434653;
  plVar4[5] = 0x12;
  uVar7 = FUN_710076d0c0(uVar5);
  if ((int)uVar7 == 0) {
    if (*plVar4 < 0) {
      uVar1 = *(uint *)(plVar4 + 1);
      plVar9 = (long *)((long)plVar4 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar9 = (long *)((long)plVar4 + 0xc);
      }
      lVar8 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar9 = plVar4 + 1;
      lVar8 = 0;
    }
    uVar7 = 0x5f59;
    uVar10 = (long)plVar9 +
             ((lVar8 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
             0xfffffffffffffff0;
    if ((*(int *)((long)plVar4 + uVar10 + 0x10) == 0x4f434653) &&
       (uVar1 = *(uint *)((long)plVar4 + uVar10 + 0x18), uVar7 = (ulong)uVar1, uVar1 == 0)) {
      bVar2 = *(byte *)((long)plVar4 + uVar10 + 0x21);
      bVar3 = *(byte *)((long)plVar4 + uVar10 + 0x22);
      if (param_1 != (uint *)0x0) {
        *param_1 = (uint)*(byte *)((long)plVar4 + uVar10 + 0x20);
      }
      if (param_2 != (uint *)0x0) {
        *param_2 = (uint)bVar2;
      }
      if (param_3 != (uint *)0x0) {
        *param_3 = (uint)bVar3;
      }
    }
  }
  return uVar7;
}



// ===== FUN_710075a690 @ 710075a690 (size=208) =====

ulong FUN_710075a690(undefined4 *param_1,long param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0xa00000004;
  *(undefined4 *)(plVar2 + 3) = param_4;
  *(undefined4 *)((long)plVar2 + 0x1c) = 0;
  plVar2[2] = 0x49434653;
  plVar2[4] = param_2;
  uVar3 = FUN_710076d0c0(*param_1);
  if ((int)uVar3 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar4 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar4 = (long *)((long)plVar2 + 0xc);
      }
      lVar6 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar4 = plVar2 + 1;
      lVar6 = 0;
    }
    uVar5 = (long)plVar4 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar3 = 0x5f59;
    if (((*(int *)((long)plVar2 + uVar5) == 0x4f434653) &&
        (uVar1 = *(uint *)((long)plVar2 + uVar5 + 8), uVar3 = (ulong)uVar1, uVar1 == 0)) &&
       (param_3 != (undefined8 *)0x0)) {
      *param_3 = *(undefined8 *)((long)plVar2 + uVar5 + 0x10);
    }
  }
  return uVar3;
}



// ===== FUN_710075a760 @ 710075a760 (size=200) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_710075a760(void)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = FUN_7100769b90();
  if (uVar2 < 0x30000) {
    if (_DAT_7100d17084 != 0) {
      puVar1 = (undefined8 *)tpidrro_el0;
      *puVar1 = 2;
      FUN_710076d0c0(_DAT_7100d17080 & 0xffffffff);
      if (_DAT_7100d17084 != 0) {
        FUN_710076d060(_DAT_7100d17080 & 0xffffffff);
      }
    }
    _DAT_7100d17080 = 0;
    _DAT_7100d17088 = 0;
    return;
  }
  if (_DAT_7100d17074 != 0) {
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 2;
    FUN_710076d0c0(_DAT_7100d17070 & 0xffffffff);
    if (_DAT_7100d17074 != 0) {
      FUN_710076d060(_DAT_7100d17070 & 0xffffffff);
    }
  }
  _DAT_7100d17070 = 0;
  _DAT_7100d17078 = 0;
  return;
}



// ===== FUN_710075a830 @ 710075a830 (size=120) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_710075a830(void)

{
  undefined8 *puVar1;
  
  if (_DAT_7100d17064 == 0) {
    _DAT_7100d17060 = 0;
    _DAT_7100d17068 = 0;
    return;
  }
  puVar1 = (undefined8 *)tpidrro_el0;
  *puVar1 = 2;
  FUN_710076d0c0(_DAT_7100d17060 & 0xffffffff);
  if (_DAT_7100d17064 == 0) {
    _DAT_7100d17060 = 0;
    _DAT_7100d17068 = 0;
    return;
  }
  FUN_710076d060(_DAT_7100d17060 & 0xffffffff);
  _DAT_7100d17060 = 0;
  _DAT_7100d17068 = 0;
  return;
}



// ===== FUN_710075a8b0 @ 710075a8b0 (size=180) =====

ulong FUN_710075a8b0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0x800000004;
  *(undefined4 *)(plVar2 + 3) = param_3;
  *(undefined4 *)((long)plVar2 + 0x1c) = 0;
  plVar2[2] = 0x49434653;
  uVar3 = FUN_710076d0c0();
  if ((int)uVar3 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar4 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar4 = (long *)((long)plVar2 + 0xc);
      }
      lVar6 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar4 = plVar2 + 1;
      lVar6 = 0;
    }
    uVar5 = (long)plVar4 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar3 = 0x5f59;
    if (*(int *)((long)plVar2 + uVar5) == 0x4f434653) {
      uVar3 = (ulong)*(uint *)((long)plVar2 + uVar5 + 8);
    }
  }
  return uVar3;
}



// ===== FUN_710075a970 @ 710075a970 (size=244) =====

ulong FUN_710075a970(undefined8 param_1,undefined8 param_2,undefined2 param_3,int *param_4,
                    undefined4 param_5)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0x800000004;
  *(undefined4 *)(plVar2 + 3) = param_5;
  *(undefined4 *)((long)plVar2 + 0x1c) = 0;
  plVar2[2] = 0x49434653;
  uVar3 = FUN_710076d0c0();
  if ((int)uVar3 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      lVar5 = (long)plVar2 + 0x14;
      if ((uVar1 & 1) == 0) {
        lVar5 = (long)plVar2 + 0xc;
      }
      plVar6 = (long *)(lVar5 + ((ulong)(uVar1 >> 1) & 0xf) * 4);
      lVar5 = ((ulong)(uVar1 >> 5) & 0xf) << 2;
    }
    else {
      plVar6 = plVar2 + 1;
      lVar5 = 0;
    }
    uVar4 = (long)plVar6 + ((lVar5 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar3 = 0x5f59;
    if ((*(int *)((long)plVar2 + uVar4) == 0x4f434653) &&
       (uVar1 = *(uint *)((long)plVar2 + uVar4 + 8), uVar3 = (ulong)uVar1, uVar1 == 0)) {
      if ((int)*plVar6 == 0) {
        param_4[0] = 0;
        param_4[1] = 0;
        param_4[2] = 0;
        param_4[3] = 0;
        return uVar3;
      }
      *param_4 = (int)*plVar6;
      *(undefined2 *)(param_4 + 3) = param_3;
      param_4[1] = 1;
      param_4[2] = 0;
    }
  }
  return uVar3;
}



// ===== FUN_710075aa70 @ 710075aa70 (size=644) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_710075aa70(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  int iVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  
  FUN_7100749670(0x7100d17058);
  iVar6 = _DAT_7100d1705c + 1;
  iVar3 = 0;
  bVar1 = _DAT_7100d1705c == 0;
  _DAT_7100d1705c = iVar6;
  if (bVar1) {
    uVar2 = FUN_7100769b90();
    if (uVar2 < 0x30000) {
      iVar3 = FUN_710075e590(&DAT_7100d17080,0x6d613a736e);
      if (iVar3 == 0) {
        FUN_7100749740(0x7100d17058);
        return 0;
      }
    }
    else {
      ppuVar5 = &PTR_DAT_7100ae6b78;
      iVar6 = 5;
      do {
        if (iVar6 == 4) {
          uVar2 = FUN_7100769b90();
          if (uVar2 < 0xb0000) {
            ppuVar5 = ppuVar5 + -1;
            iVar6 = 3;
            goto LAB_710075aaf4;
          }
          puVar4 = *ppuVar5;
          iVar3 = FUN_710081ce00(puVar4);
LAB_710075abc0:
          uVar14 = *puVar4;
          if (iVar3 == 1) {
            uVar13 = 0;
            uVar7 = 0;
            uVar11 = 0;
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
            uVar12 = 0;
          }
          else {
            uVar12 = puVar4[1];
            if (iVar3 == 2) {
              uVar13 = 0;
              uVar7 = 0;
              uVar11 = 0;
              uVar10 = 0;
              uVar9 = 0;
              uVar8 = 0;
            }
            else {
              uVar8 = puVar4[2];
              if (iVar3 == 3) {
                uVar13 = 0;
                uVar7 = 0;
                uVar11 = 0;
                uVar10 = 0;
                uVar9 = 0;
              }
              else {
                uVar9 = puVar4[3];
                if (iVar3 == 4) {
                  uVar13 = 0;
                  uVar7 = 0;
                  uVar11 = 0;
                  uVar10 = 0;
                }
                else {
                  uVar10 = puVar4[4];
                  if (iVar3 == 5) {
                    uVar13 = 0;
                    uVar7 = 0;
                    uVar11 = 0;
                  }
                  else {
                    uVar11 = puVar4[5];
                    if (iVar3 == 6) {
                      uVar13 = 0;
                      uVar7 = 0;
                    }
                    else {
                      uVar13 = 0;
                      uVar7 = puVar4[6];
                      if (iVar3 != 7) {
                        uVar13 = puVar4[7];
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
LAB_710075aaf4:
          puVar4 = *ppuVar5;
          iVar3 = FUN_710081ce00(puVar4);
          if (iVar3 != 0) goto LAB_710075abc0;
          uVar13 = 0;
          uVar7 = 0;
          uVar11 = 0;
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar12 = 0;
          uVar14 = 0;
        }
        iVar3 = FUN_710075e590(&DAT_7100d17070,
                               CONCAT17(uVar13,CONCAT16(uVar7,CONCAT15(uVar11,CONCAT14(uVar10,
                                                  CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar12,
                                                  uVar14))))))));
        if (iVar3 == 0) goto LAB_710075aaa4;
        iVar6 = iVar6 + -1;
        ppuVar5 = ppuVar5 + -1;
      } while (iVar6 != -1);
    }
    FUN_710075a760();
    _DAT_7100d1705c = _DAT_7100d1705c + -1;
    FUN_7100749740(0x7100d17058);
    return iVar3;
  }
LAB_710075aaa4:
  FUN_7100749740(0x7100d17058);
  return iVar3;
}



// ===== FUN_710075ad50 @ 710075ad50 (size=92) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_710075ad50(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_7100769b90();
  if (0x500ff < uVar1) {
    uVar2 = FUN_710075a970(_DAT_7100d17070,_DAT_7100d17078,_DAT_7100d1707c,param_1,0x1f35);
    return uVar2;
  }
  return 0x4b59;
}



// ===== FUN_710075adb0 @ 710075adb0 (size=88) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_710075adb0(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_7100769b90();
  if (0x3ffff < uVar1) {
    uVar2 = FUN_710075a970(_DAT_7100d17070,_DAT_7100d17078,_DAT_7100d1707c,param_1,0x1f39);
    return uVar2;
  }
  return 0x4b59;
}



// ===== FUN_710075ae10 @ 710075ae10 (size=88) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_710075ae10(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_7100769b90();
  if (0x2ffff < uVar1) {
    uVar2 = FUN_710075a970(_DAT_7100d17070,_DAT_7100d17078,_DAT_7100d1707c,param_1,0x1f3c);
    return uVar2;
  }
  return 0x4b59;
}



// ===== FUN_710075ae70 @ 710075ae70 (size=88) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_710075ae70(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_7100769b90();
  if (0x2ffff < uVar1) {
    uVar2 = FUN_710075a970(_DAT_7100d17070,_DAT_7100d17078,_DAT_7100d1707c,param_1,0x1f3e);
    return uVar2;
  }
  return 0x4b59;
}



// ===== FUN_710075aed0 @ 710075aed0 (size=516) =====

int FUN_710075aed0(byte param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong *param_5)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 local_20;
  undefined8 uStack_18;
  byte local_10;
  undefined4 uStack_f;
  undefined2 uStack_b;
  undefined1 uStack_9;
  long local_8;
  
  local_20 = 0;
  uStack_18 = 0;
  uVar2 = FUN_7100769b90();
  if (uVar2 < 0x50100) {
    uVar2 = FUN_7100769b90();
    if (0x2ffff < uVar2) {
      iVar3 = FUN_710075ae10(&local_20);
      uVar4 = 400;
      goto LAB_710075af28;
    }
    puVar8 = (undefined8 *)&DAT_7100d17080;
    local_10 = param_1;
    uVar4 = 400;
    uStack_f = 0;
    uStack_b = 0;
    uStack_9 = 0;
    local_8 = param_2;
LAB_710075af94:
    uStack_9 = 0;
    uStack_b = 0;
    uStack_f = 0;
    plVar1 = (long *)tpidrro_el0;
    *plVar1 = 0xc01000004;
    *(undefined4 *)(plVar1 + 5) = uVar4;
    *(undefined4 *)((long)plVar1 + 0x2c) = 0;
    uVar2 = (uint)((ulong)param_3 >> 0x20);
    *(int *)(plVar1 + 1) = (int)param_4;
    *(int *)((long)plVar1 + 0xc) = (int)param_3;
    plVar1[4] = 0x49434653;
    *(uint *)(plVar1 + 2) =
         (uVar2 >> 4 & 0x3fffff) << 2 | ((uint)((ulong)param_4 >> 0x20) & 0xf) << 0x18 |
         uVar2 << 0x1c;
    plVar1[6] = (ulong)param_1;
    plVar1[7] = param_2;
    local_10 = param_1;
    local_8 = param_2;
    iVar3 = FUN_710076d0c0(*(undefined4 *)puVar8);
    if (iVar3 == 0) {
      if (*plVar1 < 0) {
        uVar2 = *(uint *)(plVar1 + 1);
        plVar5 = (long *)((long)plVar1 + 0x14);
        if ((uVar2 & 1) == 0) {
          plVar5 = (long *)((long)plVar1 + 0xc);
        }
        lVar7 = (((ulong)(uVar2 >> 5) & 0xf) + ((ulong)(uVar2 >> 1) & 0xf)) * 4;
      }
      else {
        plVar5 = plVar1 + 1;
        lVar7 = 0;
      }
      iVar3 = 0x5f59;
      uVar6 = (long)plVar5 +
              ((lVar7 + (ulong)((uint)*plVar1 >> 0x10 & 0xf) * 8) - (long)plVar1) + 0xf &
              0xfffffffffffffff0;
      if (((*(int *)((long)plVar1 + uVar6) == 0x4f434653) &&
          (iVar3 = *(int *)((long)plVar1 + uVar6 + 8), iVar3 == 0)) && (param_5 != (ulong *)0x0)) {
        *param_5 = (ulong)*(uint *)((long)plVar1 + uVar6 + 0x10);
        goto joined_r0x00710075b050;
      }
    }
  }
  else {
    iVar3 = FUN_710075ad50(&local_20);
    uVar4 = 0;
LAB_710075af28:
    puVar8 = &local_20;
    local_10 = param_1;
    uStack_f = 0;
    uStack_b = 0;
    uStack_9 = 0;
    local_8 = param_2;
    if (iVar3 == 0) goto LAB_710075af94;
  }
joined_r0x00710075b050:
  if (local_20._4_4_ != 0) {
    puVar8 = (undefined8 *)tpidrro_el0;
    *puVar8 = 2;
    FUN_710076d0c0(local_20 & 0xffffffff);
    if (local_20._4_4_ != 0) {
      FUN_710076d060(local_20 & 0xffffffff);
      return iVar3;
    }
  }
  return iVar3;
}



// ===== FUN_710075b0e0 @ 710075b0e0 (size=424) =====

int FUN_710075b0e0(undefined8 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_10 = 0;
  uStack_8 = 0;
  uVar3 = FUN_7100769b90();
  if (uVar3 < 0x30000) {
    puVar5 = (undefined8 *)&DAT_7100d17080;
  }
  else {
    puVar5 = &local_10;
    iVar4 = FUN_710075ae10(puVar5);
    if (iVar4 != 0) goto LAB_710075b1d4;
  }
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0x901000004;
  *(int *)(plVar2 + 1) = (int)((long)param_2 * 0x18);
  *(int *)((long)plVar2 + 0xc) = (int)param_1;
  plVar2[4] = 0x49434653;
  plVar2[5] = 0;
  uVar3 = (uint)((ulong)param_1 >> 0x20);
  *(undefined4 *)(plVar2 + 6) = param_3;
  uVar1 = *(undefined4 *)puVar5;
  *(uint *)(plVar2 + 2) =
       (uVar3 >> 4 & 0x3fffff) << 2 | ((uint)((ulong)((long)param_2 * 0x18) >> 0x20) & 0xf) << 0x18
       | uVar3 << 0x1c;
  iVar4 = FUN_710076d0c0(uVar1);
  if (iVar4 == 0) {
    if (*plVar2 < 0) {
      uVar3 = *(uint *)(plVar2 + 1);
      plVar6 = (long *)((long)plVar2 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar6 = (long *)((long)plVar2 + 0xc);
      }
      lVar8 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar2 + 1;
      lVar8 = 0;
    }
    iVar4 = 0x5f59;
    uVar7 = (long)plVar6 + ((lVar8 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    if (((*(int *)((long)plVar2 + uVar7) == 0x4f434653) &&
        (iVar4 = *(int *)((long)plVar2 + uVar7 + 8), iVar4 == 0)) && (param_4 != (undefined4 *)0x0))
    {
      *param_4 = *(undefined4 *)((long)plVar2 + uVar7 + 0x10);
    }
  }
LAB_710075b1d4:
  if (local_10._4_4_ != 0) {
    puVar5 = (undefined8 *)tpidrro_el0;
    *puVar5 = 2;
    FUN_710076d0c0(local_10 & 0xffffffff);
    if (local_10._4_4_ != 0) {
      FUN_710076d060(local_10 & 0xffffffff);
      return iVar4;
    }
  }
  return iVar4;
}



// ===== FUN_710075b290 @ 710075b290 (size=384) =====

int FUN_710075b290(long param_1,undefined8 *param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_10 = 0;
  uStack_8 = 0;
  uVar2 = FUN_7100769b90();
  puVar6 = (undefined8 *)&DAT_7100d17080;
  if (0x2ffff < uVar2) {
    iVar3 = FUN_710075ae70(&local_10);
    puVar6 = &local_10;
    if (iVar3 != 0) {
      goto joined_r0x00710075b3a8;
    }
  }
  plVar1 = (long *)tpidrro_el0;
  *plVar1 = 0xa00000004;
  plVar1[4] = param_1;
  plVar1[2] = 0x49434653;
  plVar1[3] = 0xb;
  iVar3 = FUN_710076d0c0(*(undefined4 *)puVar6);
  if (iVar3 == 0) {
    if (*plVar1 < 0) {
      uVar2 = *(uint *)(plVar1 + 1);
      plVar4 = (long *)((long)plVar1 + 0x14);
      if ((uVar2 & 1) == 0) {
        plVar4 = (long *)((long)plVar1 + 0xc);
      }
      lVar7 = (((ulong)(uVar2 >> 1) & 0xf) + ((ulong)(uVar2 >> 5) & 0xf)) * 4;
    }
    else {
      plVar4 = plVar1 + 1;
      lVar7 = 0;
    }
    iVar3 = 0x5f59;
    uVar5 = (long)plVar4 + ((lVar7 + (ulong)((uint)*plVar1 >> 0x10 & 0xf) * 8) - (long)plVar1) + 0xf
            & 0xfffffffffffffff0;
    if (((*(int *)((long)plVar1 + uVar5) == 0x4f434653) &&
        (iVar3 = *(int *)((long)plVar1 + uVar5 + 8), iVar3 == 0)) && (param_2 != (undefined8 *)0x0))
    {
      uVar10 = *(undefined8 *)((long)plVar1 + uVar5 + 0x10);
      uVar9 = *(undefined8 *)((long)plVar1 + uVar5 + 0x28);
      uVar8 = *(undefined8 *)((long)plVar1 + uVar5 + 0x20);
      uVar14 = *(undefined8 *)((long)plVar1 + uVar5 + 0x38);
      uVar13 = *(undefined8 *)((long)plVar1 + uVar5 + 0x30);
      uVar12 = *(undefined8 *)((long)plVar1 + uVar5 + 0x48);
      uVar11 = *(undefined8 *)((long)plVar1 + uVar5 + 0x40);
      uVar18 = *(undefined8 *)((long)plVar1 + uVar5 + 0x58);
      uVar17 = *(undefined8 *)((long)plVar1 + uVar5 + 0x50);
      uVar16 = *(undefined8 *)((long)plVar1 + uVar5 + 0x68);
      uVar15 = *(undefined8 *)((long)plVar1 + uVar5 + 0x60);
      uVar21 = *(undefined8 *)((long)plVar1 + uVar5 + 0x70);
      uVar22 = *(undefined8 *)((long)plVar1 + uVar5 + 0x78);
      uVar20 = *(undefined8 *)((long)plVar1 + uVar5 + 0x88);
      uVar19 = *(undefined8 *)((long)plVar1 + uVar5 + 0x80);
      param_2[1] = *(undefined8 *)((long)plVar1 + uVar5 + 0x18);
      *param_2 = uVar10;
      param_2[3] = uVar9;
      param_2[2] = uVar8;
      param_2[5] = uVar14;
      param_2[4] = uVar13;
      param_2[7] = uVar12;
      param_2[6] = uVar11;
      param_2[9] = uVar18;
      param_2[8] = uVar17;
      param_2[0xb] = uVar16;
      param_2[10] = uVar15;
      param_2[0xc] = uVar21;
      param_2[0xd] = uVar22;
      param_2[0xf] = uVar20;
      param_2[0xe] = uVar19;
    }
  }
joined_r0x00710075b3a8:
  if (local_10._4_4_ != 0) {
    puVar6 = (undefined8 *)tpidrro_el0;
    *puVar6 = 2;
    FUN_710076d0c0(local_10 & 0xffffffff);
    if (local_10._4_4_ != 0) {
      FUN_710076d060(local_10 & 0xffffffff);
      return iVar3;
    }
  }
  return iVar3;
}



// ===== FUN_710075b410 @ 710075b410 (size=200) =====

int FUN_710075b410(undefined4 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_10 = 0;
  uStack_8 = 0;
  uVar1 = FUN_7100769b90();
  if (uVar1 < 0x30000) {
    puVar3 = (undefined8 *)&DAT_7100d17080;
  }
  else {
    puVar3 = &local_10;
    iVar2 = FUN_710075ae70(puVar3);
    if (iVar2 != 0) {
      goto joined_r0x00710075b488;
    }
  }
  iVar2 = FUN_710075a690(puVar3,param_1,param_2,0x2f);
joined_r0x00710075b488:
  if (local_10._4_4_ != 0) {
    puVar3 = (undefined8 *)tpidrro_el0;
    *puVar3 = 2;
    FUN_710076d0c0(local_10 & 0xffffffff);
    if (local_10._4_4_ != 0) {
      FUN_710076d060(local_10 & 0xffffffff);
      return iVar2;
    }
  }
  return iVar2;
}



// ===== FUN_710075b4e0 @ 710075b4e0 (size=200) =====

int FUN_710075b4e0(undefined4 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_10 = 0;
  uStack_8 = 0;
  uVar1 = FUN_7100769b90();
  if (uVar1 < 0x30000) {
    puVar3 = (undefined8 *)&DAT_7100d17080;
  }
  else {
    puVar3 = &local_10;
    iVar2 = FUN_710075ae70(puVar3);
    if (iVar2 != 0) {
      goto joined_r0x00710075b558;
    }
  }
  iVar2 = FUN_710075a690(puVar3,param_1,param_2,0x30);
joined_r0x00710075b558:
  if (local_10._4_4_ != 0) {
    puVar3 = (undefined8 *)tpidrro_el0;
    *puVar3 = 2;
    FUN_710076d0c0(local_10 & 0xffffffff);
    if (local_10._4_4_ != 0) {
      FUN_710076d060(local_10 & 0xffffffff);
      return iVar2;
    }
  }
  return iVar2;
}



// ===== FUN_710075b5b0 @ 710075b5b0 (size=372) =====

int FUN_710075b5b0(long param_1,undefined4 *param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 local_10;
  undefined8 uStack_8;
  
  uVar2 = FUN_7100769b90();
  if (uVar2 < 0x20000) {
    return 0x4b59;
  }
  local_10 = 0;
  uStack_8 = 0;
  uVar2 = FUN_7100769b90();
  puVar6 = (undefined8 *)&DAT_7100d17080;
  if (0x2ffff < uVar2) {
    puVar6 = &local_10;
    iVar3 = FUN_710075ae70(puVar6);
    if (iVar3 != 0) goto LAB_710075b68c;
  }
  plVar1 = (long *)tpidrro_el0;
  *plVar1 = 0xa00000004;
  plVar1[4] = param_1;
  plVar1[2] = 0x49434653;
  plVar1[3] = 600;
  iVar3 = FUN_710076d0c0(*(undefined4 *)puVar6);
  if (iVar3 == 0) {
    if (*plVar1 < 0) {
      uVar2 = *(uint *)(plVar1 + 1);
      plVar4 = (long *)((long)plVar1 + 0x14);
      if ((uVar2 & 1) == 0) {
        plVar4 = (long *)((long)plVar1 + 0xc);
      }
      lVar7 = (((ulong)(uVar2 >> 1) & 0xf) + ((ulong)(uVar2 >> 5) & 0xf)) * 4;
    }
    else {
      plVar4 = plVar1 + 1;
      lVar7 = 0;
    }
    iVar3 = 0x5f59;
    uVar5 = (long)plVar4 + ((lVar7 + (ulong)((uint)*plVar1 >> 0x10 & 0xf) * 8) - (long)plVar1) + 0xf
            & 0xfffffffffffffff0;
    if (((*(int *)((long)plVar1 + uVar5) == 0x4f434653) &&
        (iVar3 = *(int *)((long)plVar1 + uVar5 + 8), iVar3 == 0)) && (param_2 != (undefined4 *)0x0))
    {
      *param_2 = *(undefined4 *)((long)plVar1 + uVar5 + 0x10);
    }
  }
LAB_710075b68c:
  if (local_10._4_4_ != 0) {
    puVar6 = (undefined8 *)tpidrro_el0;
    *puVar6 = 2;
    FUN_710076d0c0(local_10 & 0xffffffff);
    if (local_10._4_4_ != 0) {
      FUN_710076d060(local_10 & 0xffffffff);
    }
  }
  return iVar3;
}



// ===== FUN_710075b730 @ 710075b730 (size=156) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_710075b730(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = 0;
  FUN_7100749670(0x7100d17050);
  iVar1 = _DAT_7100d17054 + 1;
  bVar2 = _DAT_7100d17054 == 0;
  _DAT_7100d17054 = iVar1;
  if (bVar2) {
    iVar3 = FUN_710075e590(&DAT_7100d17060,0x75733a736e);
    if (iVar3 != 0) {
      FUN_710075a830();
      _DAT_7100d17054 = _DAT_7100d17054 + -1;
      FUN_7100749740(0x7100d17050);
      return iVar3;
    }
  }
  FUN_7100749740(0x7100d17050);
  return iVar3;
}



// ===== FUN_710075b7d0 @ 710075b7d0 (size=72) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710075b7d0(void)

{
  FUN_7100749670();
  if (_DAT_7100d17054 != 0) {
    _DAT_7100d17054 = _DAT_7100d17054 + -1;
    if (_DAT_7100d17054 == 0) {
      FUN_710075a830();
    }
  }
  FUN_7100749740(0x7100d17050);
  return;
}



// ===== FUN_710075b820 @ 710075b820 (size=64) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_710075b820(void)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_7100769b90();
  if (0x3ffff < uVar1) {
    uVar2 = FUN_710075a8b0(_DAT_7100d17060,_DAT_7100d17068,0x10);
    return uVar2;
  }
  return 0x4b59;
}



// ===== FUN_710075b860 @ 710075b860 (size=316) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710075b860(void)

{
  undefined8 *puVar1;
  int iVar2;
  
  if (_DAT_7100d1709c == 0) {
    iVar2 = _DAT_7100d170a0;
    if (_DAT_7100d170a0 != 0) {
      puVar1 = (undefined8 *)tpidrro_el0;
      *puVar1 = 0x800000004;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *(undefined1 *)(puVar1 + 2) = 2;
      *(int *)((long)puVar1 + 0x14) = iVar2;
      FUN_710076d0c0(_DAT_7100d17098 & 0xffffffff);
      goto joined_r0x00710075b920;
    }
  }
  else {
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 2;
    FUN_710076d0c0(_DAT_7100d17098 & 0xffffffff);
joined_r0x00710075b920:
    if (_DAT_7100d1709c != 0) {
      FUN_710076d060(_DAT_7100d17098 & 0xffffffff);
      goto joined_r0x00710075b940;
    }
  }
joined_r0x00710075b940:
  if (_DAT_7100d170ac == 0) {
    _DAT_7100d170a0 = 0;
    _DAT_7100d17098 = 0;
    iVar2 = _DAT_7100d170b0;
    if (_DAT_7100d170b0 == 0) {
      _DAT_7100d17098 = 0;
      _DAT_7100d170a0 = 0;
      _DAT_7100d170a8 = 0;
      _DAT_7100d170b0 = 0;
      return;
    }
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 0x800000004;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 2) = 2;
    *(int *)((long)puVar1 + 0x14) = iVar2;
    FUN_710076d0c0(_DAT_7100d170a8 & 0xffffffff);
  }
  else {
    _DAT_7100d170a0 = 0;
    _DAT_7100d17098 = 0;
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 2;
    FUN_710076d0c0(_DAT_7100d170a8 & 0xffffffff);
  }
  if (_DAT_7100d170ac != 0) {
    FUN_710076d060(_DAT_7100d170a8 & 0xffffffff);
    _DAT_7100d170a8 = 0;
    _DAT_7100d170b0 = 0;
    return;
  }
  _DAT_7100d170a8 = 0;
  _DAT_7100d170b0 = 0;
  return;
}



// ===== FUN_710075b9a0 @ 710075b9a0 (size=212) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710075b9a0(undefined4 param_1)

{
  uint uVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  uVar4 = _DAT_7100d170a0;
  uVar3 = _DAT_7100d17098;
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0xc00000004;
  *(undefined4 *)(plVar2 + 5) = param_1;
  *(undefined4 *)((long)plVar2 + 0x2c) = 0;
  *(undefined4 *)(plVar2 + 2) = 0x100001;
  *(undefined4 *)((long)plVar2 + 0x14) = uVar4;
  plVar2[3] = 0;
  plVar2[4] = 0x49434653;
  uVar5 = FUN_710076d0c0(uVar3);
  if ((int)uVar5 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar6 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar6 = (long *)((long)plVar2 + 0xc);
      }
      lVar8 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar2 + 1;
      lVar8 = 0;
    }
    uVar7 = (long)plVar6 + ((lVar8 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar5 = 0x5f59;
    if (*(int *)((long)plVar2 + uVar7 + 0x10) == 0x4f434653) {
      uVar5 = (ulong)*(uint *)((long)plVar2 + uVar7 + 0x18);
    }
  }
  return uVar5;
}



// ===== FUN_710075ba80 @ 710075ba80 (size=968) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_710075ba80(void)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  undefined2 uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  uint *puVar12;
  
  FUN_7100749670(0x7100d17090);
  iVar8 = _DAT_7100d17094 + 1;
  bVar1 = _DAT_7100d17094 != 0;
  _DAT_7100d17094 = iVar8;
  if (bVar1) goto LAB_710075baac;
  uVar7 = FUN_7100769b90();
  iVar8 = FUN_710075e590(&DAT_7100d170a8,0x613a6c746370);
  if (((iVar8 != 0) && (iVar8 = FUN_710075e590(&DAT_7100d170a8,0x733a6c746370), iVar8 != 0)) &&
     (iVar8 = FUN_710075e590(&DAT_7100d170a8,0x723a6c746370), iVar8 != 0)) {
    iVar8 = FUN_710075e590(&DAT_7100d170a8,0x6c746370);
    if (iVar8 != 0) goto LAB_710075bd24;
  }
  uVar3 = _DAT_7100d170a8;
  if (_DAT_7100d170ac == 0) {
    plVar5 = (long *)tpidrro_el0;
    *plVar5 = 0x900000005;
    *(undefined4 *)(plVar5 + 4) = 0;
    plVar5[2] = 0x49434653;
    plVar5[3] = 4;
    iVar8 = FUN_710076d0c0(uVar3);
    if (iVar8 != 0) goto LAB_710075bd24;
    if (*plVar5 < 0) {
      uVar3 = *(uint *)(plVar5 + 1);
      lVar11 = (long)plVar5 + 0x14;
      if ((uVar3 & 1) == 0) {
        lVar11 = (long)plVar5 + 0xc;
      }
      puVar12 = (uint *)(lVar11 + ((ulong)(uVar3 >> 1) & 0xf) * 4);
      lVar11 = ((ulong)(uVar3 >> 5) & 0xf) << 2;
    }
    else {
      puVar12 = (uint *)(plVar5 + 1);
      lVar11 = 0;
    }
    uVar9 = (long)puVar12 +
            ((lVar11 + (ulong)((uint)*plVar5 >> 0x10 & 0xf) * 8) - (long)plVar5) + 0xf &
            0xfffffffffffffff0;
    if (*(int *)((long)plVar5 + uVar9) == 0x4f434653) {
      iVar8 = *(int *)((long)plVar5 + uVar9 + 8);
      if (iVar8 != 0) goto LAB_710075bd24;
      _DAT_7100d170a8 = *puVar12;
      _DAT_7100d170ac = 1;
      goto LAB_710075bb04;
    }
  }
  else {
LAB_710075bb04:
    uVar3 = _DAT_7100d170a8;
    plVar5 = (long *)tpidrro_el0;
    *plVar5 = 0x800000005;
    plVar5[2] = 0x49434653;
    plVar5[3] = 0;
    iVar8 = FUN_710076d0c0(uVar3);
    uVar6 = _DAT_7100d170b4;
    uVar3 = _DAT_7100d170a8;
    if (iVar8 != 0) goto LAB_710075bd24;
    if (*plVar5 < 0) {
      uVar4 = *(uint *)(plVar5 + 1);
      plVar10 = (long *)((long)plVar5 + 0x14);
      if ((uVar4 & 1) == 0) {
        plVar10 = (long *)((long)plVar5 + 0xc);
      }
      lVar11 = (((ulong)(uVar4 >> 5) & 0xf) + ((ulong)(uVar4 >> 1) & 0xf)) * 4;
    }
    else {
      plVar10 = plVar5 + 1;
      lVar11 = 0;
    }
    uVar9 = (long)plVar10 +
            ((lVar11 + (ulong)((uint)*plVar5 >> 0x10 & 0xf) * 8) - (long)plVar5) + 0xf &
            0xfffffffffffffff0;
    if (*(int *)((long)plVar5 + uVar9) == 0x4f434653) {
      iVar8 = *(int *)((long)plVar5 + uVar9 + 8);
      if (iVar8 != 0) goto LAB_710075bd24;
      uVar2 = *(undefined4 *)((long)plVar5 + uVar9 + 0x10);
      plVar5 = (long *)tpidrro_el0;
      _DAT_7100d170b0 = uVar2;
      *plVar5 = -0x7ffffff1fffffffc;
      plVar5[8] = 0;
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)(plVar5 + 4) = 0x180001;
      *(undefined4 *)((long)plVar5 + 0x24) = uVar2;
      plVar5[5] = 0;
      plVar5[6] = 0x49434653;
      *(uint *)(plVar5 + 7) = (uint)(0x3ffff < uVar7);
      *(undefined4 *)((long)plVar5 + 0x3c) = 0;
      iVar8 = FUN_710076d0c0(uVar3);
      if (iVar8 != 0) goto LAB_710075bd24;
      if (*plVar5 < 0) {
        uVar4 = *(uint *)(plVar5 + 1);
        plVar10 = (long *)((long)plVar5 + 0x14);
        if ((uVar4 & 1) == 0) {
          plVar10 = (long *)((long)plVar5 + 0xc);
        }
        lVar11 = (((ulong)(uVar4 >> 5) & 0xf) + ((ulong)(uVar4 >> 1) & 0xf)) * 4;
      }
      else {
        plVar10 = plVar5 + 1;
        lVar11 = 0;
      }
      uVar9 = (long)plVar10 +
              ((lVar11 + (ulong)((uint)*plVar5 >> 0x10 & 0xf) * 8) - (long)plVar5) + 0xf &
              0xfffffffffffffff0;
      if (*(int *)((long)plVar5 + uVar9 + 0x10) == 0x4f434653) {
        iVar8 = *(int *)((long)plVar5 + uVar9 + 0x18);
        if (iVar8 == 0) {
          iVar8 = *(int *)((long)plVar5 + uVar9 + 0x20);
          if (iVar8 == 0) {
            _DAT_7100d17098 = 0;
            _DAT_7100d170a0 = 0;
          }
          else {
            _DAT_7100d17098 = (ulong)uVar3;
            _DAT_7100d170a0 = CONCAT24(uVar6,iVar8);
          }
          if (0x3ffff < uVar7) {
            iVar8 = FUN_710075b9a0(1);
            if (iVar8 != 0) goto LAB_710075bd24;
          }
LAB_710075baac:
          FUN_7100749740(0x7100d17090);
          return 0;
        }
        goto LAB_710075bd24;
      }
    }
  }
  iVar8 = 0x5f59;
LAB_710075bd24:
  FUN_710075b860();
  _DAT_7100d17094 = _DAT_7100d17094 + -1;
  FUN_7100749740(0x7100d17090);
  return iVar8;
}



// ===== FUN_710075be50 @ 710075be50 (size=72) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710075be50(void)

{
  FUN_7100749670();
  if (_DAT_7100d17094 != 0) {
    _DAT_7100d17094 = _DAT_7100d17094 + -1;
    if (_DAT_7100d17094 == 0) {
      FUN_710075b860();
    }
  }
  FUN_7100749740(0x7100d17090);
  return;
}



// ===== FUN_710075bea0 @ 710075bea0 (size=12) =====

undefined1 * FUN_710075bea0(void)

{
  return &DAT_7100d17098;
}



// ===== FUN_710075beb0 @ 710075beb0 (size=256) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710075beb0(undefined4 param_1,undefined8 param_2,long param_3,int param_4,
                    undefined4 *param_5,undefined4 param_6)

{
  uint uVar1;
  long *plVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0x901000004;
  *(int *)(plVar2 + 1) = (int)(param_4 * param_3);
  *(int *)((long)plVar2 + 0xc) = (int)param_2;
  plVar2[4] = 0x49434653;
  uVar1 = (uint)((ulong)param_2 >> 0x20);
  *(undefined4 *)(plVar2 + 6) = param_1;
  *(undefined4 *)(plVar2 + 5) = param_6;
  *(undefined4 *)((long)plVar2 + 0x2c) = 0;
  uVar3 = _DAT_7100d170c0;
  *(uint *)(plVar2 + 2) =
       (uVar1 >> 4 & 0x3fffff) << 2 | ((uint)((ulong)(param_4 * param_3) >> 0x20) & 0xf) << 0x18 |
       uVar1 << 0x1c;
  uVar4 = FUN_710076d0c0(uVar3);
  if ((int)uVar4 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar5 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar5 = (long *)((long)plVar2 + 0xc);
      }
      lVar7 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar5 = plVar2 + 1;
      lVar7 = 0;
    }
    uVar6 = (long)plVar5 + ((lVar7 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar4 = 0x5f59;
    if (((*(int *)((long)plVar2 + uVar6) == 0x4f434653) &&
        (uVar1 = *(uint *)((long)plVar2 + uVar6 + 8), uVar4 = (ulong)uVar1, uVar1 == 0)) &&
       (param_5 != (undefined4 *)0x0)) {
      *param_5 = *(undefined4 *)((long)plVar2 + uVar6 + 0x10);
    }
  }
  return uVar4;
}



// ===== FUN_710075bfb0 @ 710075bfb0 (size=120) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_710075bfb0(void)

{
  undefined8 *puVar1;
  
  if (_DAT_7100d170c4 == 0) {
    _DAT_7100d170c0 = 0;
    _DAT_7100d170c8 = 0;
    return;
  }
  puVar1 = (undefined8 *)tpidrro_el0;
  *puVar1 = 2;
  FUN_710076d0c0(_DAT_7100d170c0 & 0xffffffff);
  if (_DAT_7100d170c4 == 0) {
    _DAT_7100d170c0 = 0;
    _DAT_7100d170c8 = 0;
    return;
  }
  FUN_710076d060(_DAT_7100d170c0 & 0xffffffff);
  _DAT_7100d170c0 = 0;
  _DAT_7100d170c8 = 0;
  return;
}



// ===== FUN_710075c030 @ 710075c030 (size=132) =====

void FUN_710075c030(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  
  param_2[8] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  uVar1 = *(uint *)((long)param_1 + 0xc);
  *param_2 = *param_1;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
  param_2[2] = (ulong)uVar1 * 0x3c + 0x386bf200;
  param_2[3] = (ulong)*(uint *)(param_1 + 2) * 0x3c + 0x386bf200;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)((long)param_1 + 0x14);
  param_2[5] = (ulong)*(uint *)(param_1 + 3) * 0x3c + 0x386bf200;
  param_2[6] = (ulong)*(uint *)((long)param_1 + 0x1c) * 0x3c + 0x386bf200;
  uVar1 = *(uint *)(param_1 + 4);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)((long)param_1 + 0x24);
  param_2[7] = (ulong)uVar1 * 60000000000;
  return;
}



// ===== FUN_710075c0c0 @ 710075c0c0 (size=160) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_710075c0c0(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = 0;
  FUN_7100749670(0x7100d170b8);
  iVar1 = _DAT_7100d170bc + 1;
  bVar2 = _DAT_7100d170bc == 0;
  _DAT_7100d170bc = iVar1;
  if (bVar2) {
    iVar3 = FUN_710075e590(&DAT_7100d170c0,0x7972713a6d6470);
    if (iVar3 != 0) {
      FUN_710075bfb0();
      _DAT_7100d170bc = _DAT_7100d170bc + -1;
      FUN_7100749740(0x7100d170b8);
      return iVar3;
    }
  }
  FUN_7100749740(0x7100d170b8);
  return iVar3;
}



// ===== FUN_710075c160 @ 710075c160 (size=72) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710075c160(void)

{
  FUN_7100749670();
  if (_DAT_7100d170bc != 0) {
    _DAT_7100d170bc = _DAT_7100d170bc + -1;
    if (_DAT_7100d170bc == 0) {
      FUN_710075bfb0();
    }
  }
  FUN_7100749740(0x7100d170b8);
  return;
}



// ===== FUN_710075c1b0 @ 710075c1b0 (size=708) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710075c1b0(long param_1,byte param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  uVar3 = FUN_7100769b90();
  if (uVar3 < 0xa0000) {
    plVar1 = (long *)tpidrro_el0;
    *plVar1 = 0xa00000004;
    plVar1[4] = param_1;
    plVar1[2] = 0x49434653;
    plVar1[3] = 4;
    uVar5 = FUN_710076d0c0(_DAT_7100d170c0);
    uVar9 = uVar5 & 0xffffffff;
    if ((int)uVar5 != 0) goto LAB_710075c284;
    if (*plVar1 < 0) {
      uVar3 = *(uint *)(plVar1 + 1);
      plVar6 = (long *)((long)plVar1 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar6 = (long *)((long)plVar1 + 0xc);
      }
      lVar8 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar1 + 1;
      lVar8 = 0;
    }
    uVar5 = (long)plVar6 + ((lVar8 + (ulong)((uint)*plVar1 >> 0x10 & 0xf) * 8) - (long)plVar1) + 0xf
            & 0xfffffffffffffff0;
    if (*(int *)((long)plVar1 + uVar5) == 0x4f434653) {
      uVar3 = *(uint *)((long)plVar1 + uVar5 + 8);
      uVar9 = (ulong)uVar3;
      if (uVar3 == 0) {
        local_28 = *(undefined8 *)((long)plVar1 + uVar5 + 0x10);
        uStack_20 = *(undefined8 *)((long)plVar1 + uVar5 + 0x18);
        uStack_10 = *(undefined8 *)((long)plVar1 + uVar5 + 0x28);
        uStack_18 = *(undefined8 *)((long)plVar1 + uVar5 + 0x20);
        local_8 = *(undefined8 *)((long)plVar1 + uVar5 + 0x30);
        FUN_710075c030(&local_28,param_3);
      }
      goto LAB_710075c284;
    }
  }
  else {
    uVar3 = FUN_7100769b90();
    uVar2 = _DAT_7100d170c0;
    plVar1 = (long *)tpidrro_el0;
    *plVar1 = 0xc00000004;
    plVar1[4] = (ulong)param_2;
    plVar1[5] = param_1;
    plVar1[2] = 0x49434653;
    plVar1[3] = 4;
    if (uVar3 < 0x100000) {
      iVar4 = FUN_710076d0c0(uVar2);
      if (iVar4 == 0) {
        if (*plVar1 < 0) {
          uVar3 = *(uint *)(plVar1 + 1);
          plVar6 = (long *)((long)plVar1 + 0x14);
          if ((uVar3 & 1) == 0) {
            plVar6 = (long *)((long)plVar1 + 0xc);
          }
          lVar8 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
        }
        else {
          plVar6 = plVar1 + 1;
          lVar8 = 0;
        }
        uVar5 = (long)plVar6 +
                ((lVar8 + (ulong)((uint)*plVar1 >> 0x10 & 0xf) * 8) - (long)plVar1) + 0xf &
                0xfffffffffffffff0;
        if ((*(int *)((long)plVar1 + uVar5) == 0x4f434653) &&
           (*(int *)((long)plVar1 + uVar5 + 8) == 0)) {
          local_28 = *(undefined8 *)((long)plVar1 + uVar5 + 0x10);
          uStack_20 = *(undefined8 *)((long)plVar1 + uVar5 + 0x18);
          uStack_10 = *(undefined8 *)((long)plVar1 + uVar5 + 0x28);
          uStack_18 = *(undefined8 *)((long)plVar1 + uVar5 + 0x20);
          local_8 = *(undefined8 *)((long)plVar1 + uVar5 + 0x30);
          FUN_710075c030(&local_28,param_3);
        }
      }
      return 0;
    }
    uVar5 = FUN_710076d0c0(uVar2);
    uVar9 = uVar5 & 0xffffffff;
    if ((int)uVar5 != 0) goto LAB_710075c284;
    if (*plVar1 < 0) {
      uVar3 = *(uint *)(plVar1 + 1);
      plVar6 = (long *)((long)plVar1 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar6 = (long *)((long)plVar1 + 0xc);
      }
      lVar8 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar1 + 1;
      lVar8 = 0;
    }
    uVar5 = (long)plVar6 + ((lVar8 + (ulong)((uint)*plVar1 >> 0x10 & 0xf) * 8) - (long)plVar1) + 0xf
            & 0xfffffffffffffff0;
    if (*(int *)((long)plVar1 + uVar5) == 0x4f434653) {
      uVar3 = *(uint *)((long)plVar1 + uVar5 + 8);
      uVar9 = (ulong)uVar3;
      if (uVar3 == 0) {
        if (param_3 == (undefined8 *)0x0) {
          return 0;
        }
        uVar12 = *(undefined8 *)((long)plVar1 + uVar5 + 0x10);
        uVar11 = *(undefined8 *)((long)plVar1 + uVar5 + 0x28);
        uVar10 = *(undefined8 *)((long)plVar1 + uVar5 + 0x20);
        uVar15 = *(undefined8 *)((long)plVar1 + uVar5 + 0x30);
        uVar16 = *(undefined8 *)((long)plVar1 + uVar5 + 0x38);
        uVar14 = *(undefined8 *)((long)plVar1 + uVar5 + 0x48);
        uVar13 = *(undefined8 *)((long)plVar1 + uVar5 + 0x40);
        uVar7 = *(undefined8 *)((long)plVar1 + uVar5 + 0x50);
        param_3[1] = *(undefined8 *)((long)plVar1 + uVar5 + 0x18);
        *param_3 = uVar12;
        param_3[3] = uVar11;
        param_3[2] = uVar10;
        param_3[4] = uVar15;
        param_3[5] = uVar16;
        param_3[7] = uVar14;
        param_3[6] = uVar13;
        param_3[8] = uVar7;
        return 0;
      }
      goto LAB_710075c284;
    }
  }
  uVar9 = 0x5f59;
LAB_710075c284:
  return uVar9 & 0xffffffff;
}



// ===== FUN_710075c480 @ 710075c480 (size=20) =====

void FUN_710075c480(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_710075beb0(param_1,param_2,0x38,param_3,param_4,8);
  return;
}



// ===== FUN_710075c4a0 @ 710075c4a0 (size=264) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710075c4a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  undefined4 local_10;
  undefined4 uStack_c;
  
  plVar3 = (long *)tpidrro_el0;
  *plVar3 = 0x800000004;
  plVar3[2] = 0x49434653;
  plVar3[3] = 9;
  uVar4 = FUN_710076d0c0(_DAT_7100d170c0);
  if ((int)uVar4 == 0) {
    if (*plVar3 < 0) {
      uVar1 = *(uint *)(plVar3 + 1);
      plVar7 = (long *)((long)plVar3 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar7 = (long *)((long)plVar3 + 0xc);
      }
      lVar5 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar7 = plVar3 + 1;
      lVar5 = 0;
    }
    uVar4 = 0x5f59;
    uVar8 = (long)plVar7 + ((lVar5 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf
            & 0xfffffffffffffff0;
    if ((*(int *)((long)plVar3 + uVar8) == 0x4f434653) &&
       (uVar1 = *(uint *)((long)plVar3 + uVar8 + 8), uVar4 = (ulong)uVar1, uVar1 == 0)) {
      uVar6 = *(undefined8 *)((long)plVar3 + uVar8 + 0x10);
      uVar2 = *(undefined4 *)((long)plVar3 + uVar8 + 0x18);
      if (param_1 != (undefined4 *)0x0) {
        local_10 = (undefined4)uVar6;
        *param_1 = local_10;
      }
      if (param_2 != (undefined4 *)0x0) {
        uStack_c = (undefined4)((ulong)uVar6 >> 0x20);
        *param_2 = uStack_c;
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = uVar2;
      }
    }
  }
  return uVar4;
}



// ===== FUN_710075c5b0 @ 710075c5b0 (size=208) =====

ulong FUN_710075c5b0(undefined8 *param_1,long param_2,undefined4 *param_3,undefined4 param_4)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0xa00000004;
  *(undefined4 *)(plVar2 + 3) = param_4;
  *(undefined4 *)((long)plVar2 + 0x1c) = 0;
  plVar2[2] = 0x49434653;
  plVar2[4] = param_2;
  uVar3 = FUN_710076d0c0(*param_3);
  if ((int)uVar3 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar5 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar5 = (long *)((long)plVar2 + 0xc);
      }
      lVar4 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar5 = plVar2 + 1;
      lVar4 = 0;
    }
    uVar3 = 0x5f59;
    uVar6 = (long)plVar5 + ((lVar4 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    if (((*(int *)((long)plVar2 + uVar6) == 0x4f434653) &&
        (uVar1 = *(uint *)((long)plVar2 + uVar6 + 8), uVar3 = (ulong)uVar1, uVar1 == 0)) &&
       (param_1 != (undefined8 *)0x0)) {
      *param_1 = *(undefined8 *)((long)plVar2 + uVar6 + 0x10);
    }
  }
  return uVar3;
}



// ===== FUN_710075c680 @ 710075c680 (size=120) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_710075c680(void)

{
  undefined8 *puVar1;
  
  if (_DAT_7100d170dc == 0) {
    _DAT_7100d170d8 = 0;
    _DAT_7100d170e0 = 0;
    return;
  }
  puVar1 = (undefined8 *)tpidrro_el0;
  *puVar1 = 2;
  FUN_710076d0c0(_DAT_7100d170d8 & 0xffffffff);
  if (_DAT_7100d170dc == 0) {
    _DAT_7100d170d8 = 0;
    _DAT_7100d170e0 = 0;
    return;
  }
  FUN_710076d060(_DAT_7100d170d8 & 0xffffffff);
  _DAT_7100d170d8 = 0;
  _DAT_7100d170e0 = 0;
  return;
}



// ===== FUN_710075c7a0 @ 710075c7a0 (size=72) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710075c7a0(void)

{
  FUN_7100749670();
  if (_DAT_7100d170d4 != 0) {
    _DAT_7100d170d4 = _DAT_7100d170d4 + -1;
    if (_DAT_7100d170d4 == 0) {
      FUN_710075c680();
    }
  }
  FUN_7100749740(0x7100d170d0);
  return;
}



// ===== FUN_710075c7f0 @ 710075c7f0 (size=68) =====

void FUN_710075c7f0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_7100769b90();
  FUN_710075c5b0(param_1,param_2,&DAT_7100d170d8,(uVar1 < 0x50000) + '\x02');
  return;
}



// ===== FUN_710075c840 @ 710075c840 (size=120) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_710075c840(void)

{
  undefined8 *puVar1;
  
  if (_DAT_7100d170f4 == 0) {
    _DAT_7100d170f0 = 0;
    _DAT_7100d170f8 = 0;
    return;
  }
  puVar1 = (undefined8 *)tpidrro_el0;
  *puVar1 = 2;
  FUN_710076d0c0(_DAT_7100d170f0 & 0xffffffff);
  if (_DAT_7100d170f4 == 0) {
    _DAT_7100d170f0 = 0;
    _DAT_7100d170f8 = 0;
    return;
  }
  FUN_710076d060(_DAT_7100d170f0 & 0xffffffff);
  _DAT_7100d170f0 = 0;
  _DAT_7100d170f8 = 0;
  return;
}



// ===== FUN_710075c8c0 @ 710075c8c0 (size=208) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710075c8c0(undefined8 *param_1,undefined4 param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0x800000004;
  *(undefined4 *)(plVar2 + 3) = param_2;
  *(undefined4 *)((long)plVar2 + 0x1c) = 0;
  plVar2[2] = 0x49434653;
  uVar3 = FUN_710076d0c0(_DAT_7100d170f0);
  if ((int)uVar3 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar5 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar5 = (long *)((long)plVar2 + 0xc);
      }
      lVar4 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar5 = plVar2 + 1;
      lVar4 = 0;
    }
    uVar3 = 0x5f59;
    uVar6 = (long)plVar5 + ((lVar4 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    if (((*(int *)((long)plVar2 + uVar6) == 0x4f434653) &&
        (uVar1 = *(uint *)((long)plVar2 + uVar6 + 8), uVar3 = (ulong)uVar1, uVar1 == 0)) &&
       (param_1 != (undefined8 *)0x0)) {
      *param_1 = *(undefined8 *)((long)plVar2 + uVar6 + 0x10);
    }
  }
  return uVar3;
}



// ===== FUN_710075c990 @ 710075c990 (size=208) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710075c990(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0x800000004;
  *(undefined4 *)(plVar2 + 3) = param_2;
  *(undefined4 *)((long)plVar2 + 0x1c) = 0;
  plVar2[2] = 0x49434653;
  uVar3 = FUN_710076d0c0(_DAT_7100d170f0);
  if ((int)uVar3 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar5 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar5 = (long *)((long)plVar2 + 0xc);
      }
      lVar4 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar5 = plVar2 + 1;
      lVar4 = 0;
    }
    uVar3 = 0x5f59;
    uVar6 = (long)plVar5 + ((lVar4 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    if (((*(int *)((long)plVar2 + uVar6) == 0x4f434653) &&
        (uVar1 = *(uint *)((long)plVar2 + uVar6 + 8), uVar3 = (ulong)uVar1, uVar1 == 0)) &&
       (param_1 != (undefined4 *)0x0)) {
      *param_1 = *(undefined4 *)((long)plVar2 + uVar6 + 0x10);
    }
  }
  return uVar3;
}



// ===== FUN_710075ca60 @ 710075ca60 (size=212) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710075ca60(byte *param_1,undefined4 param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0x800000004;
  *(undefined4 *)(plVar2 + 3) = param_2;
  *(undefined4 *)((long)plVar2 + 0x1c) = 0;
  plVar2[2] = 0x49434653;
  uVar3 = FUN_710076d0c0(_DAT_7100d170f0);
  if ((int)uVar3 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar5 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar5 = (long *)((long)plVar2 + 0xc);
      }
      lVar4 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar5 = plVar2 + 1;
      lVar4 = 0;
    }
    uVar3 = 0x5f59;
    uVar6 = (long)plVar5 + ((lVar4 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    if (((*(int *)((long)plVar2 + uVar6) == 0x4f434653) &&
        (uVar1 = *(uint *)((long)plVar2 + uVar6 + 8), uVar3 = (ulong)uVar1, uVar1 == 0)) &&
       (param_1 != (byte *)0x0)) {
      *param_1 = *(byte *)((long)plVar2 + uVar6 + 0x10) & 1;
    }
  }
  return uVar3;
}



// ===== FUN_710075cb40 @ 710075cb40 (size=152) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_710075cb40(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = 0;
  FUN_7100749670(0x7100d170e8);
  iVar1 = _DAT_7100d170ec + 1;
  bVar2 = _DAT_7100d170ec == 0;
  _DAT_7100d170ec = iVar1;
  if (bVar2) {
    iVar3 = FUN_710075e590(&DAT_7100d170f0,0x6d7370);
    if (iVar3 != 0) {
      FUN_710075c840();
      _DAT_7100d170ec = _DAT_7100d170ec + -1;
      FUN_7100749740(0x7100d170e8);
      return iVar3;
    }
  }
  FUN_7100749740(0x7100d170e8);
  return iVar3;
}



// ===== FUN_710075cc30 @ 710075cc30 (size=12) =====

undefined1 * FUN_710075cc30(void)

{
  return &DAT_7100d170f0;
}



// ===== FUN_710075cc40 @ 710075cc40 (size=8) =====

void FUN_710075cc40(undefined8 param_1)

{
  FUN_710075c990(param_1,0);
  return;
}



// ===== FUN_710075cc50 @ 710075cc50 (size=8) =====

void FUN_710075cc50(undefined8 param_1)

{
  FUN_710075c990(param_1,1);
  return;
}



// ===== FUN_710075cc60 @ 710075cc60 (size=60) =====

void FUN_710075cc60(undefined4 *param_1)

{
  int iVar1;
  undefined4 local_4;
  
  iVar1 = FUN_710075c990(&local_4,0xc);
  if (iVar1 == 0 && param_1 != (undefined4 *)0x0) {
    *param_1 = local_4;
  }
  return;
}



// ===== FUN_710075cca0 @ 710075cca0 (size=8) =====

void FUN_710075cca0(undefined8 param_1)

{
  FUN_710075c8c0(param_1,0xd);
  return;
}



// ===== FUN_710075ccb0 @ 710075ccb0 (size=8) =====

void FUN_710075ccb0(undefined8 param_1)

{
  FUN_710075ca60(param_1,0xe);
  return;
}



// ===== FUN_710075ccc0 @ 710075ccc0 (size=8) =====

void FUN_710075ccc0(undefined8 param_1)

{
  FUN_710075c8c0(param_1,0xf);
  return;
}



// ===== FUN_710075ccd0 @ 710075ccd0 (size=208) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710075ccd0(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *(int *)(plVar2 + 5) = (int)param_1;
  *plVar2 = 0xc0800000004;
  *(short *)((long)plVar2 + 0x2c) = (short)((ulong)param_1 >> 0x20);
  plVar2[2] = 0x49434653;
  *(undefined2 *)((long)plVar2 + 0x2e) = 0x100;
  *(undefined4 *)(plVar2 + 3) = param_2;
  *(undefined4 *)((long)plVar2 + 0x1c) = 0;
  uVar3 = FUN_710076d0c0(_DAT_7100d17338);
  if ((int)uVar3 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar4 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar4 = (long *)((long)plVar2 + 0xc);
      }
      lVar6 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar4 = plVar2 + 1;
      lVar6 = 0;
    }
    uVar5 = (long)plVar4 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar3 = 0x5f59;
    if (*(int *)((long)plVar2 + uVar5) == 0x4f434653) {
      uVar3 = (ulong)*(uint *)((long)plVar2 + uVar5 + 8);
    }
  }
  return uVar3;
}



// ===== FUN_710075cda0 @ 710075cda0 (size=120) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_710075cda0(void)

{
  undefined8 *puVar1;
  
  if (_DAT_7100d1734c == 0) {
    _DAT_7100d17348 = 0;
    _DAT_7100d17350 = 0;
    return;
  }
  puVar1 = (undefined8 *)tpidrro_el0;
  *puVar1 = 2;
  FUN_710076d0c0(_DAT_7100d17348 & 0xffffffff);
  if (_DAT_7100d1734c == 0) {
    _DAT_7100d17348 = 0;
    _DAT_7100d17350 = 0;
    return;
  }
  FUN_710076d060(_DAT_7100d17348 & 0xffffffff);
  _DAT_7100d17348 = 0;
  _DAT_7100d17350 = 0;
  return;
}



// ===== FUN_710075ce20 @ 710075ce20 (size=120) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_710075ce20(void)

{
  undefined8 *puVar1;
  
  if (_DAT_7100d1733c == 0) {
    _DAT_7100d17338 = 0;
    _DAT_7100d17340 = 0;
    return;
  }
  puVar1 = (undefined8 *)tpidrro_el0;
  *puVar1 = 2;
  FUN_710076d0c0(_DAT_7100d17338 & 0xffffffff);
  if (_DAT_7100d1733c == 0) {
    _DAT_7100d17338 = 0;
    _DAT_7100d17340 = 0;
    return;
  }
  FUN_710076d060(_DAT_7100d17338 & 0xffffffff);
  _DAT_7100d17338 = 0;
  _DAT_7100d17340 = 0;
  return;
}



// ===== FUN_710075cea0 @ 710075cea0 (size=120) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_710075cea0(void)

{
  undefined8 *puVar1;
  
  if (_DAT_7100d1732c == 0) {
    _DAT_7100d17328 = 0;
    _DAT_7100d17330 = 0;
    return;
  }
  puVar1 = (undefined8 *)tpidrro_el0;
  *puVar1 = 2;
  FUN_710076d0c0(_DAT_7100d17328 & 0xffffffff);
  if (_DAT_7100d1732c == 0) {
    _DAT_7100d17328 = 0;
    _DAT_7100d17330 = 0;
    return;
  }
  FUN_710076d060(_DAT_7100d17328 & 0xffffffff);
  _DAT_7100d17328 = 0;
  _DAT_7100d17330 = 0;
  return;
}



// ===== FUN_710075cf20 @ 710075cf20 (size=208) =====

ulong FUN_710075cf20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                    undefined4 param_5)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0x801000004;
  *(undefined4 *)(plVar2 + 1) = param_4;
  *(int *)((long)plVar2 + 0xc) = (int)param_3;
  plVar2[4] = 0x49434653;
  uVar1 = (uint)((ulong)param_3 >> 0x20);
  *(undefined4 *)(plVar2 + 5) = param_5;
  *(undefined4 *)((long)plVar2 + 0x2c) = 0;
  *(uint *)(plVar2 + 2) = uVar1 << 0x1c | (uVar1 >> 4 & 0x3fffff) << 2;
  uVar3 = FUN_710076d0c0();
  if ((int)uVar3 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar4 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar4 = (long *)((long)plVar2 + 0xc);
      }
      lVar6 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar4 = plVar2 + 1;
      lVar6 = 0;
    }
    uVar5 = (long)plVar4 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar3 = 0x5f59;
    if (*(int *)((long)plVar2 + uVar5) == 0x4f434653) {
      uVar3 = (ulong)*(uint *)((long)plVar2 + uVar5 + 8);
    }
  }
  return uVar3;
}



// ===== FUN_710075cff0 @ 710075cff0 (size=200) =====

ulong FUN_710075cff0(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined4 param_4)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0x800000004;
  *(undefined4 *)(plVar2 + 3) = param_4;
  *(undefined4 *)((long)plVar2 + 0x1c) = 0;
  plVar2[2] = 0x49434653;
  uVar3 = FUN_710076d0c0();
  if ((int)uVar3 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar4 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar4 = (long *)((long)plVar2 + 0xc);
      }
      lVar6 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar4 = plVar2 + 1;
      lVar6 = 0;
    }
    uVar5 = (long)plVar4 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar3 = 0x5f59;
    if (((*(int *)((long)plVar2 + uVar5) == 0x4f434653) &&
        (uVar1 = *(uint *)((long)plVar2 + uVar5 + 8), uVar3 = (ulong)uVar1, uVar1 == 0)) &&
       (param_3 != (undefined1 *)0x0)) {
      *param_3 = *(undefined1 *)((long)plVar2 + uVar5 + 0x10);
    }
  }
  return uVar3;
}



// ===== FUN_710075d0c0 @ 710075d0c0 (size=200) =====

ulong FUN_710075d0c0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0x800000004;
  *(undefined4 *)(plVar2 + 3) = param_4;
  *(undefined4 *)((long)plVar2 + 0x1c) = 0;
  plVar2[2] = 0x49434653;
  uVar3 = FUN_710076d0c0();
  if ((int)uVar3 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar4 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar4 = (long *)((long)plVar2 + 0xc);
      }
      lVar6 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar4 = plVar2 + 1;
      lVar6 = 0;
    }
    uVar5 = (long)plVar4 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar3 = 0x5f59;
    if (((*(int *)((long)plVar2 + uVar5) == 0x4f434653) &&
        (uVar1 = *(uint *)((long)plVar2 + uVar5 + 8), uVar3 = (ulong)uVar1, uVar1 == 0)) &&
       (param_3 != (undefined4 *)0x0)) {
      *param_3 = *(undefined4 *)((long)plVar2 + uVar5 + 0x10);
    }
  }
  return uVar3;
}



// ===== FUN_710075d190 @ 710075d190 (size=200) =====

ulong FUN_710075d190(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0x800000004;
  *(undefined4 *)(plVar2 + 3) = param_4;
  *(undefined4 *)((long)plVar2 + 0x1c) = 0;
  plVar2[2] = 0x49434653;
  uVar3 = FUN_710076d0c0();
  if ((int)uVar3 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar4 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar4 = (long *)((long)plVar2 + 0xc);
      }
      lVar6 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar4 = plVar2 + 1;
      lVar6 = 0;
    }
    uVar5 = (long)plVar4 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar3 = 0x5f59;
    if (((*(int *)((long)plVar2 + uVar5) == 0x4f434653) &&
        (uVar1 = *(uint *)((long)plVar2 + uVar5 + 8), uVar3 = (ulong)uVar1, uVar1 == 0)) &&
       (param_3 != (undefined8 *)0x0)) {
      *param_3 = *(undefined8 *)((long)plVar2 + uVar5 + 0x10);
    }
  }
  return uVar3;
}



// ===== FUN_710075d260 @ 710075d260 (size=160) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_710075d260(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = 0;
  FUN_7100749670(0x7100d17110);
  iVar1 = _DAT_7100d17114 + 1;
  bVar2 = _DAT_7100d17114 == 0;
  _DAT_7100d17114 = iVar1;
  if (bVar2) {
    DAT_7100d17320 = 0;
    iVar3 = FUN_710075e590(&DAT_7100d17348,0x746573);
    if (iVar3 != 0) {
      FUN_710075cda0();
      _DAT_7100d17114 = _DAT_7100d17114 + -1;
      FUN_7100749740(0x7100d17110);
      return iVar3;
    }
  }
  FUN_7100749740(0x7100d17110);
  return iVar3;
}



// ===== FUN_710075d300 @ 710075d300 (size=72) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710075d300(void)

{
  FUN_7100749670();
  if (_DAT_7100d17114 != 0) {
    _DAT_7100d17114 = _DAT_7100d17114 + -1;
    if (_DAT_7100d17114 == 0) {
      FUN_710075cda0();
    }
  }
  FUN_7100749740(0x7100d17110);
  return;
}



// ===== FUN_710075d350 @ 710075d350 (size=160) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_710075d350(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = 0;
  FUN_7100749670(0x7100d17108);
  iVar1 = _DAT_7100d1710c + 1;
  bVar2 = _DAT_7100d1710c == 0;
  _DAT_7100d1710c = iVar1;
  if (bVar2) {
    iVar3 = FUN_710075e590(&DAT_7100d17338,0x7379733a746573);
    if (iVar3 != 0) {
      FUN_710075ce20();
      _DAT_7100d1710c = _DAT_7100d1710c + -1;
      FUN_7100749740(0x7100d17108);
      return iVar3;
    }
  }
  FUN_7100749740(0x7100d17108);
  return iVar3;
}



// ===== FUN_710075d3f0 @ 710075d3f0 (size=72) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710075d3f0(void)

{
  FUN_7100749670();
  if (_DAT_7100d1710c != 0) {
    _DAT_7100d1710c = _DAT_7100d1710c + -1;
    if (_DAT_7100d1710c == 0) {
      FUN_710075ce20();
    }
  }
  FUN_7100749740(0x7100d17108);
  return;
}



// ===== FUN_710075d440 @ 710075d440 (size=160) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_710075d440(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = 0;
  FUN_7100749670(0x7100d17100);
  iVar1 = _DAT_7100d17104 + 1;
  bVar2 = _DAT_7100d17104 == 0;
  _DAT_7100d17104 = iVar1;
  if (bVar2) {
    iVar3 = FUN_710075e590(&DAT_7100d17328,0x6c61633a746573);
    if (iVar3 != 0) {
      FUN_710075cea0();
      _DAT_7100d17104 = _DAT_7100d17104 + -1;
      FUN_7100749740(0x7100d17100);
      return iVar3;
    }
  }
  FUN_7100749740(0x7100d17100);
  return iVar3;
}



// ===== FUN_710075d4e0 @ 710075d4e0 (size=72) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710075d4e0(void)

{
  FUN_7100749670();
  if (_DAT_7100d17104 != 0) {
    _DAT_7100d17104 = _DAT_7100d17104 + -1;
    if (_DAT_7100d17104 == 0) {
      FUN_710075cea0();
    }
  }
  FUN_7100749740(0x7100d17100);
  return;
}



// ===== FUN_710075d530 @ 710075d530 (size=28) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710075d530(undefined8 param_1)

{
  FUN_710075d190(_DAT_7100d17348,_DAT_7100d17350,param_1,0);
  return;
}



// ===== thunk_FUN_710075d530 @ 710075d550 (size=4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_710075d530(undefined8 param_1)

{
  FUN_710075d190(_DAT_7100d17348,_DAT_7100d17350,param_1,0);
  return;
}



// ===== FUN_710075d560 @ 710075d560 (size=112) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710075d560(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_7100769b90();
  uVar3 = 3;
  if (0x3ffff < uVar1) {
    uVar3 = 6;
  }
  iVar2 = FUN_710075d0c0(_DAT_7100d17348,_DAT_7100d17350,param_1,uVar3);
  if ((iVar2 == 0 && param_1 != (int *)0x0) && (*param_1 < 0)) {
    *param_1 = 0;
    return;
  }
  return;
}



// ===== FUN_710075d5d0 @ 710075d5d0 (size=372) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710075d5d0(undefined4 *param_1,undefined8 param_2,ulong param_3)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  int local_4;
  
  uVar4 = FUN_7100769b90();
  if (uVar4 < 0x40000) {
    local_4 = 0;
    uVar5 = FUN_710075d560(&local_4);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    uVar5 = (long)local_4;
    if (param_3 < (ulong)(long)local_4) {
      uVar5 = param_3;
    }
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 0xc0900000004;
    *(int *)((long)puVar2 + 0x2c) = (int)param_2;
    puVar2[2] = 0x49434653;
    puVar2[3] = 1;
    uVar1 = (undefined2)((int)uVar5 << 3);
    *(undefined2 *)(puVar2 + 5) = uVar1;
    *(short *)(puVar2 + 6) = (short)((ulong)param_2 >> 0x20);
    *(undefined2 *)((long)puVar2 + 0x32) = uVar1;
  }
  else {
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 0x801000004;
    puVar2[4] = 0x49434653;
    puVar2[5] = 5;
    uVar4 = (uint)((ulong)param_2 >> 0x20);
    *(int *)(puVar2 + 1) = (int)(param_3 << 3);
    *(int *)((long)puVar2 + 0xc) = (int)param_2;
    *(uint *)(puVar2 + 2) =
         (uVar4 >> 4 & 0x3fffff) << 2 | ((uint)((param_3 << 3) >> 0x20) & 0xf) << 0x18 |
         uVar4 << 0x1c;
  }
  uVar5 = FUN_710076d0c0(_DAT_7100d17348);
  if ((int)uVar5 == 0) {
    plVar3 = (long *)tpidrro_el0;
    if (*plVar3 < 0) {
      uVar4 = *(uint *)(plVar3 + 1);
      plVar6 = (long *)((long)plVar3 + 0x14);
      if ((uVar4 & 1) == 0) {
        plVar6 = (long *)((long)plVar3 + 0xc);
      }
      lVar8 = (((ulong)(uVar4 >> 5) & 0xf) + ((ulong)(uVar4 >> 1) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar3 + 1;
      lVar8 = 0;
    }
    uVar7 = (long)plVar6 + ((lVar8 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf
            & 0xfffffffffffffff0;
    uVar5 = 0x5f59;
    if (((*(int *)((long)plVar3 + uVar7) == 0x4f434653) &&
        (uVar4 = *(uint *)((long)plVar3 + uVar7 + 8), uVar5 = (ulong)uVar4, uVar4 == 0)) &&
       (param_1 != (undefined4 *)0x0)) {
      *param_1 = *(undefined4 *)((long)plVar3 + uVar7 + 0x10);
    }
  }
  return uVar5;
}



// ===== FUN_710075d750 @ 710075d750 (size=264) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_710075d750(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((DAT_7100d17320 & 1) == 0) {
    uVar2 = FUN_710075d5d0(&DAT_7100d17118,0x7100d17120,0x40);
    if ((int)uVar2 == 0) {
      if (_DAT_7100d17118 < 0) {
        _DAT_7100d17118 = 0;
      }
      else {
        DAT_7100d17320 = 1;
        if (0 < _DAT_7100d17118) {
          lVar1 = 0;
          do {
            if (*(long *)(lVar1 * 8 + 0x7100d17120) == param_1) {
              *param_2 = (int)lVar1;
              return 0;
            }
            lVar1 = lVar1 + 1;
          } while (_DAT_7100d17118 != lVar1);
        }
      }
      DAT_7100d17320 = 1;
      uVar2 = 0x1759;
    }
    return uVar2;
  }
  if (_DAT_7100d17118 < 1) {
    return 0x1759;
  }
  lVar1 = 0;
  if (lRam0000007100d17120 != param_1) {
    do {
      lVar1 = lVar1 + 1;
      if (_DAT_7100d17118 == lVar1) {
        return 0x1759;
      }
    } while (*(long *)(lVar1 * 8 + 0x7100d17120) != param_1);
  }
  *param_2 = (int)lVar1;
  return 0;
}



// ===== FUN_710075d860 @ 710075d860 (size=80) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710075d860(undefined4 *param_1)

{
  int iVar1;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = FUN_710075d0c0(_DAT_7100d17348,_DAT_7100d17350,&local_4,4);
  if (iVar1 == 0 && param_1 != (undefined4 *)0x0) {
    *param_1 = local_4;
  }
  return;
}



// ===== FUN_710075d8b0 @ 710075d8b0 (size=92) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_710075d8b0(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_7100769b90();
  if (0xa00ff < uVar1) {
    uVar2 = FUN_710075cf20(_DAT_7100d17348,_DAT_7100d17350,param_1,0x80,0xb);
    return uVar2;
  }
  return 0x4b59;
}



// ===== FUN_710075d910 @ 710075d910 (size=72) =====

void FUN_710075d910(undefined8 param_1)

{
  uint uVar1;
  
  uVar1 = FUN_7100769b90();
  if (0x2ffff < uVar1) {
    FUN_710075ccd0(param_1,4);
    return;
  }
  FUN_710075ccd0(param_1,3);
  return;
}



// ===== FUN_710075d960 @ 710075d960 (size=84) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710075d960(byte *param_1)

{
  int iVar1;
  byte local_1;
  
  local_1 = 0;
  iVar1 = FUN_710075cff0(_DAT_7100d17338,_DAT_7100d17340,&local_1,0x3c);
  if (iVar1 == 0 && param_1 != (byte *)0x0) {
    *param_1 = local_1 & 1;
  }
  return;
}



// ===== FUN_710075d9c0 @ 710075d9c0 (size=216) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710075d9c0(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  plVar3 = (long *)tpidrro_el0;
  *plVar3 = 0x800000004;
  plVar3[2] = 0x49434653;
  plVar3[3] = 0x44;
  uVar4 = FUN_710076d0c0(_DAT_7100d17338);
  if ((int)uVar4 == 0) {
    if (*plVar3 < 0) {
      uVar2 = *(uint *)(plVar3 + 1);
      plVar6 = (long *)((long)plVar3 + 0x14);
      if ((uVar2 & 1) == 0) {
        plVar6 = (long *)((long)plVar3 + 0xc);
      }
      lVar5 = (((ulong)(uVar2 >> 1) & 0xf) + ((ulong)(uVar2 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar3 + 1;
      lVar5 = 0;
    }
    uVar4 = 0x5f59;
    uVar7 = (long)plVar6 + ((lVar5 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf
            & 0xfffffffffffffff0;
    if (((*(int *)((long)plVar3 + uVar7) == 0x4f434653) &&
        (uVar2 = *(uint *)((long)plVar3 + uVar7 + 8), uVar4 = (ulong)uVar2, uVar2 == 0)) &&
       (param_1 != (undefined8 *)0x0)) {
      uVar1 = *(undefined8 *)((long)plVar3 + uVar7 + 0x18);
      uVar8 = *(undefined8 *)((long)plVar3 + uVar7 + 0x20);
      *param_1 = *(undefined8 *)((long)plVar3 + uVar7 + 0x10);
      param_1[1] = uVar1;
      param_1[2] = uVar8;
    }
  }
  return uVar4;
}



// ===== FUN_710075daa0 @ 710075daa0 (size=216) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710075daa0(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  plVar3 = (long *)tpidrro_el0;
  *plVar3 = 0x800000004;
  plVar3[2] = 0x49434653;
  plVar3[3] = 0x56;
  uVar4 = FUN_710076d0c0(_DAT_7100d17338);
  if ((int)uVar4 == 0) {
    if (*plVar3 < 0) {
      uVar2 = *(uint *)(plVar3 + 1);
      plVar6 = (long *)((long)plVar3 + 0x14);
      if ((uVar2 & 1) == 0) {
        plVar6 = (long *)((long)plVar3 + 0xc);
      }
      lVar5 = (((ulong)(uVar2 >> 1) & 0xf) + ((ulong)(uVar2 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar3 + 1;
      lVar5 = 0;
    }
    uVar4 = 0x5f59;
    uVar7 = (long)plVar6 + ((lVar5 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf
            & 0xfffffffffffffff0;
    if (((*(int *)((long)plVar3 + uVar7) == 0x4f434653) &&
        (uVar2 = *(uint *)((long)plVar3 + uVar7 + 8), uVar4 = (ulong)uVar2, uVar2 == 0)) &&
       (param_1 != (undefined8 *)0x0)) {
      uVar1 = *(undefined8 *)((long)plVar3 + uVar7 + 0x18);
      uVar8 = *(undefined8 *)((long)plVar3 + uVar7 + 0x20);
      *param_1 = *(undefined8 *)((long)plVar3 + uVar7 + 0x10);
      param_1[1] = uVar1;
      param_1[2] = uVar8;
    }
  }
  return uVar4;
}



// ===== FUN_710075db80 @ 710075db80 (size=212) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710075db80(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  
  plVar3 = (long *)tpidrro_el0;
  *plVar3 = 0x800000004;
  plVar3[2] = 0x49434653;
  plVar3[3] = 0;
  uVar4 = FUN_710076d0c0(_DAT_7100d17328);
  if ((int)uVar4 == 0) {
    if (*plVar3 < 0) {
      uVar1 = *(uint *)(plVar3 + 1);
      plVar6 = (long *)((long)plVar3 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar6 = (long *)((long)plVar3 + 0xc);
      }
      lVar5 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar3 + 1;
      lVar5 = 0;
    }
    uVar4 = 0x5f59;
    uVar7 = (long)plVar6 + ((lVar5 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf
            & 0xfffffffffffffff0;
    if (((*(int *)((long)plVar3 + uVar7) == 0x4f434653) &&
        (uVar1 = *(uint *)((long)plVar3 + uVar7 + 8), uVar4 = (ulong)uVar1, uVar1 == 0)) &&
       (param_1 != (undefined4 *)0x0)) {
      uVar2 = *(undefined4 *)((long)plVar3 + uVar7 + 0x10);
      *(undefined2 *)(param_1 + 1) = *(undefined2 *)((long)plVar3 + uVar7 + 0x14);
      *param_1 = uVar2;
    }
  }
  return uVar4;
}



// ===== FUN_710075dc60 @ 710075dc60 (size=216) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710075dc60(undefined8 *param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0x800000004;
  plVar2[2] = 0x49434653;
  plVar2[3] = 1;
  uVar3 = FUN_710076d0c0(_DAT_7100d17328);
  if ((int)uVar3 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar4 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar4 = (long *)((long)plVar2 + 0xc);
      }
      lVar6 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar4 = plVar2 + 1;
      lVar6 = 0;
    }
    uVar5 = (long)plVar4 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar3 = 0x5f59;
    if (((*(int *)((long)plVar2 + uVar5) == 0x4f434653) &&
        (uVar1 = *(uint *)((long)plVar2 + uVar5 + 8), uVar3 = (ulong)uVar1, uVar1 == 0)) &&
       (param_1 != (undefined8 *)0x0)) {
      uVar7 = *(undefined8 *)((long)plVar2 + uVar5 + 0x10);
      uVar8 = *(undefined8 *)((long)plVar2 + uVar5 + 0x1e);
      uVar9 = *(undefined8 *)((long)plVar2 + uVar5 + 0x26);
      param_1[1] = *(undefined8 *)((long)plVar2 + uVar5 + 0x18);
      *param_1 = uVar7;
      *(undefined8 *)((long)param_1 + 0xe) = uVar8;
      *(undefined8 *)((long)param_1 + 0x16) = uVar9;
    }
  }
  return uVar3;
}



// ===== FUN_710075dd40 @ 710075dd40 (size=216) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710075dd40(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  
  plVar3 = (long *)tpidrro_el0;
  *plVar3 = 0x800000004;
  plVar3[2] = 0x49434653;
  plVar3[3] = 6;
  uVar4 = FUN_710076d0c0(_DAT_7100d17328);
  if ((int)uVar4 == 0) {
    if (*plVar3 < 0) {
      uVar1 = *(uint *)(plVar3 + 1);
      plVar6 = (long *)((long)plVar3 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar6 = (long *)((long)plVar3 + 0xc);
      }
      lVar5 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar3 + 1;
      lVar5 = 0;
    }
    uVar4 = 0x5f59;
    uVar7 = (long)plVar6 + ((lVar5 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf
            & 0xfffffffffffffff0;
    if (((*(int *)((long)plVar3 + uVar7) == 0x4f434653) &&
        (uVar1 = *(uint *)((long)plVar3 + uVar7 + 8), uVar4 = (ulong)uVar1, uVar1 == 0)) &&
       (param_1 != (undefined4 *)0x0)) {
      uVar2 = *(undefined4 *)((long)plVar3 + uVar7 + 0x10);
      *(undefined2 *)(param_1 + 1) = *(undefined2 *)((long)plVar3 + uVar7 + 0x14);
      *param_1 = uVar2;
    }
  }
  return uVar4;
}



// ===== FUN_710075de20 @ 710075de20 (size=216) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710075de20(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  plVar3 = (long *)tpidrro_el0;
  *plVar3 = 0x800000004;
  plVar3[2] = 0x49434653;
  plVar3[3] = 9;
  uVar4 = FUN_710076d0c0(_DAT_7100d17328);
  if ((int)uVar4 == 0) {
    if (*plVar3 < 0) {
      uVar2 = *(uint *)(plVar3 + 1);
      plVar6 = (long *)((long)plVar3 + 0x14);
      if ((uVar2 & 1) == 0) {
        plVar6 = (long *)((long)plVar3 + 0xc);
      }
      lVar5 = (((ulong)(uVar2 >> 1) & 0xf) + ((ulong)(uVar2 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar3 + 1;
      lVar5 = 0;
    }
    uVar4 = 0x5f59;
    uVar7 = (long)plVar6 + ((lVar5 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf
            & 0xfffffffffffffff0;
    if (((*(int *)((long)plVar3 + uVar7) == 0x4f434653) &&
        (uVar2 = *(uint *)((long)plVar3 + uVar7 + 8), uVar4 = (ulong)uVar2, uVar2 == 0)) &&
       (param_1 != (undefined8 *)0x0)) {
      uVar1 = *(undefined8 *)((long)plVar3 + uVar7 + 0x18);
      uVar8 = *(undefined8 *)((long)plVar3 + uVar7 + 0x20);
      *param_1 = *(undefined8 *)((long)plVar3 + uVar7 + 0x10);
      param_1[1] = uVar1;
      param_1[2] = uVar8;
    }
  }
  return uVar4;
}



// ===== FUN_710075df00 @ 710075df00 (size=216) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710075df00(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  plVar3 = (long *)tpidrro_el0;
  *plVar3 = 0x800000004;
  plVar3[2] = 0x49434653;
  plVar3[3] = 0xc;
  uVar4 = FUN_710076d0c0(_DAT_7100d17328);
  if ((int)uVar4 == 0) {
    if (*plVar3 < 0) {
      uVar2 = *(uint *)(plVar3 + 1);
      plVar6 = (long *)((long)plVar3 + 0x14);
      if ((uVar2 & 1) == 0) {
        plVar6 = (long *)((long)plVar3 + 0xc);
      }
      lVar5 = (((ulong)(uVar2 >> 1) & 0xf) + ((ulong)(uVar2 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar3 + 1;
      lVar5 = 0;
    }
    uVar4 = 0x5f59;
    uVar7 = (long)plVar6 + ((lVar5 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf
            & 0xfffffffffffffff0;
    if (((*(int *)((long)plVar3 + uVar7) == 0x4f434653) &&
        (uVar2 = *(uint *)((long)plVar3 + uVar7 + 8), uVar4 = (ulong)uVar2, uVar2 == 0)) &&
       (param_1 != (undefined8 *)0x0)) {
      uVar1 = *(undefined8 *)((long)plVar3 + uVar7 + 0x18);
      uVar8 = *(undefined8 *)((long)plVar3 + uVar7 + 0x20);
      *param_1 = *(undefined8 *)((long)plVar3 + uVar7 + 0x10);
      param_1[1] = uVar1;
      param_1[2] = uVar8;
    }
  }
  return uVar4;
}



// ===== FUN_710075e000 @ 710075e000 (size=84) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_710075e000(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_7100769b90();
  if (0x3ffff < uVar1) {
    uVar2 = FUN_710075d0c0(_DAT_7100d17328,_DAT_7100d17330,param_1,0x17);
    return uVar2;
  }
  return 0x4b59;
}



// ===== FUN_710075e060 @ 710075e060 (size=84) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_710075e060(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_7100769b90();
  if (0x5ffff < uVar1) {
    uVar2 = FUN_710075cff0(_DAT_7100d17328,_DAT_7100d17330,param_1,0x29);
    return uVar2;
  }
  return 0x4b59;
}



// ===== FUN_710075e0c0 @ 710075e0c0 (size=204) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710075e0c0(undefined4 param_1)

{
  uint uVar1;
  long *plVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  plVar2 = (long *)tpidrro_el0;
  *(undefined4 *)(plVar2 + 5) = param_1;
  *(undefined4 *)((long)plVar2 + 0x2c) = 0;
  uVar3 = _DAT_7100d174e8;
  *plVar2 = -0x7ffffff5fffffffc;
  plVar2[6] = 0;
  *(undefined4 *)(plVar2 + 1) = 1;
  plVar2[4] = 0x49434653;
  uVar4 = FUN_710076d0c0(uVar3);
  if ((int)uVar4 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar5 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar5 = (long *)((long)plVar2 + 0xc);
      }
      lVar7 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar5 = plVar2 + 1;
      lVar7 = 0;
    }
    uVar6 = (long)plVar5 + ((lVar7 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar4 = 0x5f59;
    if (*(int *)((long)plVar2 + uVar6) == 0x4f434653) {
      uVar4 = (ulong)*(uint *)((long)plVar2 + uVar6 + 8);
    }
  }
  return uVar4;
}



// ===== FUN_710075e190 @ 710075e190 (size=120) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_710075e190(void)

{
  undefined8 *puVar1;
  
  if (_DAT_7100d174ec == 0) {
    _DAT_7100d174e8 = 0;
    _DAT_7100d174f0 = 0;
    return;
  }
  puVar1 = (undefined8 *)tpidrro_el0;
  *puVar1 = 2;
  FUN_710076d0c0(_DAT_7100d174e8 & 0xffffffff);
  if (_DAT_7100d174ec == 0) {
    _DAT_7100d174e8 = 0;
    _DAT_7100d174f0 = 0;
    return;
  }
  FUN_710076d060(_DAT_7100d174e8 & 0xffffffff);
  _DAT_7100d174e8 = 0;
  _DAT_7100d174f0 = 0;
  return;
}



// ===== FUN_710075e210 @ 710075e210 (size=72) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710075e210(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  
  if (_DAT_7100d17360 != 0x20) {
    lVar1 = _DAT_7100d17360 * 0xc;
    _DAT_7100d17360 = _DAT_7100d17360 + 1;
    *(undefined8 *)(&DAT_7100d17368 + lVar1) = param_1;
    *(undefined4 *)(lVar1 + 0x7100d17370) = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_71007697d0(0x2159);
}



// ===== FUN_710075e260 @ 710075e260 (size=84) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_710075e260(long param_1)

{
  long lVar1;
  long *plVar2;
  
  if (_DAT_7100d17360 != 0) {
    plVar2 = (long *)&DAT_7100d17368;
    lVar1 = 0;
    do {
      if (param_1 == *plVar2) {
        return *(undefined4 *)(lVar1 * 0xc + 0x7100d17370);
      }
      lVar1 = lVar1 + 1;
      plVar2 = (long *)((long)plVar2 + 0xc);
    } while (lVar1 != _DAT_7100d17360);
  }
  return 0;
}



// ===== FUN_710075e2c0 @ 710075e2c0 (size=428) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_710075e2c0(void)

{
  bool bVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined4 local_4;
  
  FUN_7100749670(0x7100d17358);
  iVar4 = _DAT_7100d1735c + 1;
  bVar1 = _DAT_7100d1735c != 0;
  _DAT_7100d1735c = iVar4;
  if (bVar1) {
LAB_710075e2f0:
    FUN_7100749740(0x7100d17358);
    return 0;
  }
  uVar3 = FUN_710076d0ac(&local_4,&DAT_7100854998);
  while ((uVar3 & 0x3fffff) == 0xf201) {
    FUN_710076d024(50000000);
    uVar3 = FUN_710076d0ac(&local_4,&DAT_7100854998);
  }
  if (uVar3 == 0) {
    _DAT_7100d174f4 = 0;
    _DAT_7100d174ec = 1;
    plVar2 = (long *)tpidrro_el0;
    _DAT_7100d174e8 = local_4;
    *plVar2 = 0x800000005;
    plVar2[2] = 0x49434653;
    plVar2[3] = 3;
    iVar4 = FUN_710076d0c0();
    if (iVar4 == 0) {
      if (*plVar2 < 0) {
        uVar3 = *(uint *)(plVar2 + 1);
        plVar5 = (long *)((long)plVar2 + 0x14);
        if ((uVar3 & 1) == 0) {
          plVar5 = (long *)((long)plVar2 + 0xc);
        }
        lVar7 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
      }
      else {
        plVar5 = plVar2 + 1;
        lVar7 = 0;
      }
      uVar6 = (long)plVar5 +
              ((lVar7 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf &
              0xfffffffffffffff0;
      if ((*(int *)((long)plVar2 + uVar6) == 0x4f434653) &&
         (*(int *)((long)plVar2 + uVar6 + 8) == 0)) {
        _DAT_7100d174f4 = *(undefined2 *)((long)plVar2 + uVar6 + 0x10);
      }
    }
    uVar3 = FUN_710075e0c0(0);
    if (uVar3 == 0) goto LAB_710075e2f0;
  }
  FUN_710075e190();
  _DAT_7100d1735c = _DAT_7100d1735c + -1;
  FUN_7100749740(0x7100d17358);
  return uVar3;
}



// ===== FUN_710075e470 @ 710075e470 (size=72) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710075e470(void)

{
  FUN_7100749670();
  if (_DAT_7100d1735c != 0) {
    _DAT_7100d1735c = _DAT_7100d1735c + -1;
    if (_DAT_7100d1735c == 0) {
      FUN_710075e190();
    }
  }
  FUN_7100749740(0x7100d17358);
  return;
}



// ===== FUN_710075e4c0 @ 710075e4c0 (size=208) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710075e4c0(undefined4 *param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0xa00000004;
  plVar2[4] = param_2;
  plVar2[2] = 0x49434653;
  plVar2[3] = 1;
  uVar3 = FUN_710076d0c0(_DAT_7100d174e8);
  if ((int)uVar3 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      lVar4 = (long)plVar2 + 0x14;
      if ((uVar1 & 1) == 0) {
        lVar4 = (long)plVar2 + 0xc;
      }
      plVar6 = (long *)(lVar4 + ((ulong)(uVar1 >> 1) & 0xf) * 4);
      lVar4 = ((ulong)(uVar1 >> 5) & 0xf) << 2;
    }
    else {
      plVar6 = plVar2 + 1;
      lVar4 = 0;
    }
    uVar3 = 0x5f59;
    uVar5 = (long)plVar6 + ((lVar4 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    if ((*(int *)((long)plVar2 + uVar5) == 0x4f434653) &&
       (uVar1 = *(uint *)((long)plVar2 + uVar5 + 8), uVar3 = (ulong)uVar1, uVar1 == 0)) {
      *param_1 = (int)*plVar6;
    }
  }
  return uVar3;
}



// ===== FUN_710075e590 @ 710075e590 (size=288) =====

undefined8 FUN_710075e590(int *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined2 uVar2;
  long *plVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  int local_4;
  
  local_4 = FUN_710075e260(param_2);
  if (local_4 == 0) {
    uVar5 = FUN_710075e4c0(&local_4,param_2);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    iVar8 = 1;
  }
  else {
    iVar8 = 0;
  }
  *param_1 = local_4;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  plVar3 = (long *)tpidrro_el0;
  *plVar3 = 0x800000005;
  plVar3[2] = 0x49434653;
  plVar3[3] = 3;
  iVar4 = FUN_710076d0c0();
  if (iVar4 == 0) {
    if (*plVar3 < 0) {
      uVar1 = *(uint *)(plVar3 + 1);
      plVar6 = (long *)((long)plVar3 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar6 = (long *)((long)plVar3 + 0xc);
      }
      lVar9 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar3 + 1;
      lVar9 = 0;
    }
    uVar7 = (long)plVar6 + ((lVar9 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf
            & 0xfffffffffffffff0;
    if ((*(int *)((long)plVar3 + uVar7) == 0x4f434653) && (*(int *)((long)plVar3 + uVar7 + 8) == 0))
    {
      uVar2 = *(undefined2 *)((long)plVar3 + uVar7 + 0x10);
      param_1[1] = iVar8;
      *(undefined2 *)(param_1 + 3) = uVar2;
      return 0;
    }
  }
  param_1[1] = iVar8;
  return 0;
}



// ===== FUN_710075e9b0 @ 710075e9b0 (size=356) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710075e9b0(undefined4 param_1,undefined8 *param_2)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  
  uVar2 = FUN_7100769b90();
  if (uVar2 < 0x40000) {
    puVar6 = (undefined4 *)&DAT_7100d17558;
  }
  else if ((_DAT_7100d17558 == 0) && (uVar2 = FUN_7100769b90(), 0x3ffff < uVar2)) {
    puVar6 = (undefined4 *)&DAT_7100d17508;
    if (((_DAT_7100d17508 == 0) && (puVar6 = (undefined4 *)&DAT_7100d17518, _DAT_7100d17518 == 0))
       && (puVar6 = (undefined4 *)&DAT_7100d17528, _DAT_7100d17528 == 0)) {
      puVar6 = (undefined4 *)&DAT_7100d17548;
      if (_DAT_7100d17538 != 0) {
        puVar6 = (undefined4 *)&DAT_7100d17538;
      }
    }
  }
  else {
    puVar6 = (undefined4 *)&DAT_7100d17558;
  }
  plVar1 = (long *)tpidrro_el0;
  *plVar1 = 0x900000004;
  *(undefined4 *)(plVar1 + 4) = param_1;
  plVar1[2] = 0x49434653;
  plVar1[3] = 0;
  uVar3 = FUN_710076d0c0(*puVar6);
  if ((int)uVar3 == 0) {
    if (*plVar1 < 0) {
      uVar2 = *(uint *)(plVar1 + 1);
      plVar4 = (long *)((long)plVar1 + 0x14);
      if ((uVar2 & 1) == 0) {
        plVar4 = (long *)((long)plVar1 + 0xc);
      }
      lVar7 = (((ulong)(uVar2 >> 1) & 0xf) + ((ulong)(uVar2 >> 5) & 0xf)) * 4;
    }
    else {
      plVar4 = plVar1 + 1;
      lVar7 = 0;
    }
    uVar5 = (long)plVar4 + ((lVar7 + (ulong)((uint)*plVar1 >> 0x10 & 0xf) * 8) - (long)plVar1) + 0xf
            & 0xfffffffffffffff0;
    uVar3 = 0x5f59;
    if (((*(int *)((long)plVar1 + uVar5) == 0x4f434653) &&
        (uVar2 = *(uint *)((long)plVar1 + uVar5 + 8), uVar3 = (ulong)uVar2, uVar2 == 0)) &&
       (param_2 != (undefined8 *)0x0)) {
      *param_2 = *(undefined8 *)((long)plVar1 + uVar5 + 0x10);
    }
  }
  return uVar3;
}



// ===== FUN_710075ece0 @ 710075ece0 (size=336) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710075ece0(long *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  uint uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  
  lVar9 = *param_1;
  lVar1 = param_1[1];
  uVar4 = FUN_7100769b90();
  if (uVar4 < 0x40000) {
    puVar5 = (undefined4 *)&DAT_7100d17558;
  }
  else {
    puVar5 = (undefined4 *)&DAT_7100d17508;
    if (((_DAT_7100d17508 == 0) && (puVar5 = (undefined4 *)&DAT_7100d17518, _DAT_7100d17518 == 0))
       && (puVar5 = (undefined4 *)&DAT_7100d17528, _DAT_7100d17528 == 0)) {
      puVar5 = (undefined4 *)&DAT_7100d17548;
      if (_DAT_7100d17538 != 0) {
        puVar5 = (undefined4 *)&DAT_7100d17538;
      }
    }
  }
  plVar3 = (long *)tpidrro_el0;
  *plVar3 = 0xe00000004;
  plVar3[2] = 0x49434653;
  plVar3[3] = 2;
  plVar3[4] = lVar9;
  plVar3[5] = lVar1;
  plVar3[6] = CONCAT44(param_3,param_2);
  uVar6 = FUN_710076d0c0(*puVar5);
  if ((int)uVar6 == 0) {
    if (*plVar3 < 0) {
      uVar4 = *(uint *)(plVar3 + 1);
      plVar7 = (long *)((long)plVar3 + 0x14);
      if ((uVar4 & 1) == 0) {
        plVar7 = (long *)((long)plVar3 + 0xc);
      }
      lVar9 = (((ulong)(uVar4 >> 1) & 0xf) + ((ulong)(uVar4 >> 5) & 0xf)) * 4;
    }
    else {
      plVar7 = plVar3 + 1;
      lVar9 = 0;
    }
    uVar8 = (long)plVar7 + ((lVar9 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf
            & 0xfffffffffffffff0;
    uVar6 = 0x5f59;
    if (((*(int *)((long)plVar3 + uVar8) == 0x4f434653) &&
        (uVar4 = *(uint *)((long)plVar3 + uVar8 + 8), uVar6 = (ulong)uVar4, uVar4 == 0)) &&
       (param_4 != (undefined8 *)0x0)) {
      uVar2 = *(undefined8 *)((long)plVar3 + uVar8 + 0x18);
      *param_4 = *(undefined8 *)((long)plVar3 + uVar8 + 0x10);
      param_4[1] = uVar2;
    }
  }
  return uVar6;
}



// ===== FUN_710075ee30 @ 710075ee30 (size=336) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710075ee30(long *param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  
  lVar10 = *param_1;
  lVar2 = param_1[1];
  lVar1 = *param_2;
  lVar3 = param_2[1];
  uVar5 = FUN_7100769b90();
  if (uVar5 < 0x40000) {
    puVar6 = (undefined4 *)&DAT_7100d17558;
  }
  else {
    puVar6 = (undefined4 *)&DAT_7100d17508;
    if (((_DAT_7100d17508 == 0) && (puVar6 = (undefined4 *)&DAT_7100d17518, _DAT_7100d17518 == 0))
       && (puVar6 = (undefined4 *)&DAT_7100d17528, _DAT_7100d17528 == 0)) {
      puVar6 = (undefined4 *)&DAT_7100d17548;
      if (_DAT_7100d17538 != 0) {
        puVar6 = (undefined4 *)&DAT_7100d17538;
      }
    }
  }
  plVar4 = (long *)tpidrro_el0;
  *plVar4 = 0x1100000004;
  plVar4[2] = 0x49434653;
  plVar4[3] = 3;
  plVar4[4] = lVar10;
  plVar4[5] = lVar2;
  *(undefined4 *)(plVar4 + 8) = param_3;
  plVar4[6] = lVar1;
  plVar4[7] = lVar3;
  uVar7 = FUN_710076d0c0(*puVar6);
  if ((int)uVar7 == 0) {
    if (*plVar4 < 0) {
      uVar5 = *(uint *)(plVar4 + 1);
      plVar8 = (long *)((long)plVar4 + 0x14);
      if ((uVar5 & 1) == 0) {
        plVar8 = (long *)((long)plVar4 + 0xc);
      }
      lVar10 = (((ulong)(uVar5 >> 1) & 0xf) + ((ulong)(uVar5 >> 5) & 0xf)) * 4;
    }
    else {
      plVar8 = plVar4 + 1;
      lVar10 = 0;
    }
    uVar9 = (long)plVar8 +
            ((lVar10 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
            0xfffffffffffffff0;
    uVar7 = 0x5f59;
    if (*(int *)((long)plVar4 + uVar9) == 0x4f434653) {
      uVar7 = (ulong)*(uint *)((long)plVar4 + uVar9 + 8);
    }
  }
  return uVar7;
}



// ===== FUN_710075ef80 @ 710075ef80 (size=336) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710075ef80(long *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  uint uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  
  lVar11 = *param_1;
  lVar2 = param_1[1];
  lVar1 = *param_2;
  lVar3 = param_2[1];
  uVar6 = FUN_7100769b90();
  if (uVar6 < 0x40000) {
    puVar7 = (undefined4 *)&DAT_7100d17558;
  }
  else {
    puVar7 = (undefined4 *)&DAT_7100d17508;
    if (((_DAT_7100d17508 == 0) && (puVar7 = (undefined4 *)&DAT_7100d17518, _DAT_7100d17518 == 0))
       && (puVar7 = (undefined4 *)&DAT_7100d17528, _DAT_7100d17528 == 0)) {
      puVar7 = (undefined4 *)&DAT_7100d17548;
      if (_DAT_7100d17538 != 0) {
        puVar7 = (undefined4 *)&DAT_7100d17538;
      }
    }
  }
  plVar5 = (long *)tpidrro_el0;
  *plVar5 = 0x1000000004;
  plVar5[2] = 0x49434653;
  plVar5[3] = 4;
  plVar5[4] = lVar11;
  plVar5[5] = lVar2;
  plVar5[7] = lVar3;
  plVar5[6] = lVar1;
  uVar8 = FUN_710076d0c0(*puVar7);
  if ((int)uVar8 == 0) {
    if (*plVar5 < 0) {
      uVar6 = *(uint *)(plVar5 + 1);
      plVar9 = (long *)((long)plVar5 + 0x14);
      if ((uVar6 & 1) == 0) {
        plVar9 = (long *)((long)plVar5 + 0xc);
      }
      lVar11 = (((ulong)(uVar6 >> 1) & 0xf) + ((ulong)(uVar6 >> 5) & 0xf)) * 4;
    }
    else {
      plVar9 = plVar5 + 1;
      lVar11 = 0;
    }
    uVar10 = (long)plVar9 +
             ((lVar11 + (ulong)((uint)*plVar5 >> 0x10 & 0xf) * 8) - (long)plVar5) + 0xf &
             0xfffffffffffffff0;
    uVar8 = 0x5f59;
    if (((*(int *)((long)plVar5 + uVar10) == 0x4f434653) &&
        (uVar6 = *(uint *)((long)plVar5 + uVar10 + 8), uVar8 = (ulong)uVar6, uVar6 == 0)) &&
       (param_3 != (undefined8 *)0x0)) {
      uVar4 = *(undefined8 *)((long)plVar5 + uVar10 + 0x18);
      *param_3 = *(undefined8 *)((long)plVar5 + uVar10 + 0x10);
      param_3[1] = uVar4;
    }
  }
  return uVar8;
}



// ===== FUN_710075f0d0 @ 710075f0d0 (size=372) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710075f0d0(undefined8 param_1,undefined2 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  
  uVar3 = FUN_7100769b90();
  if (uVar3 < 0x40000) {
    puVar8 = (undefined4 *)&DAT_7100d17558;
  }
  else {
    puVar8 = (undefined4 *)&DAT_7100d17508;
    if (((_DAT_7100d17508 == 0) && (puVar8 = (undefined4 *)&DAT_7100d17518, _DAT_7100d17518 == 0))
       && (puVar8 = (undefined4 *)&DAT_7100d17528, _DAT_7100d17528 == 0)) {
      puVar8 = (undefined4 *)&DAT_7100d17548;
      if (_DAT_7100d17538 != 0) {
        puVar8 = (undefined4 *)&DAT_7100d17538;
      }
    }
  }
  plVar2 = (long *)tpidrro_el0;
  plVar2[2] = 0x49434653;
  plVar2[3] = 0x10;
  uVar3 = (uint)((ulong)param_1 >> 0x20);
  *plVar2 = 0x900010004;
  *(undefined2 *)((long)plVar2 + 10) = param_2;
  *(int *)((long)plVar2 + 0xc) = (int)param_1;
  *(undefined4 *)(plVar2 + 4) = param_3;
  *(ushort *)(plVar2 + 1) = (ushort)((uVar3 & 0xf) << 0xc) | (ushort)((uVar3 >> 4 & 0x3f) << 6);
  uVar4 = FUN_710076d0c0(*puVar8);
  if ((int)uVar4 == 0) {
    if (*plVar2 < 0) {
      uVar3 = *(uint *)(plVar2 + 1);
      plVar5 = (long *)((long)plVar2 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar5 = (long *)((long)plVar2 + 0xc);
      }
      lVar7 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar5 = plVar2 + 1;
      lVar7 = 0;
    }
    uVar6 = (long)plVar5 + ((lVar7 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar4 = 0x5f59;
    if (((*(int *)((long)plVar2 + uVar6) == 0x4f434653) &&
        (uVar3 = *(uint *)((long)plVar2 + uVar6 + 8), uVar4 = (ulong)uVar3, uVar3 == 0)) &&
       (param_4 != (undefined8 *)0x0)) {
      uVar1 = *(undefined8 *)((long)plVar2 + uVar6 + 0x18);
      *param_4 = *(undefined8 *)((long)plVar2 + uVar6 + 0x10);
      param_4[1] = uVar1;
    }
  }
  return uVar4;
}



// ===== FUN_710075f250 @ 710075f250 (size=328) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710075f250(undefined4 *param_1)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = FUN_7100769b90();
  if (uVar2 < 0x20000) {
    return 0x4b59;
  }
  uVar2 = FUN_7100769b90();
  iVar3 = _DAT_7100d17558;
  if ((((0x3ffff < uVar2) && (iVar3 = _DAT_7100d17508, _DAT_7100d17508 == 0)) &&
      (iVar3 = _DAT_7100d17518, _DAT_7100d17518 == 0)) &&
     ((iVar3 = _DAT_7100d17528, _DAT_7100d17528 == 0 &&
      (iVar3 = _DAT_7100d17548, _DAT_7100d17538 != 0)))) {
    iVar3 = _DAT_7100d17538;
  }
  plVar1 = (long *)tpidrro_el0;
  *plVar1 = 0x800000004;
  plVar1[2] = 0x49434653;
  plVar1[3] = 0x15;
  uVar4 = FUN_710076d0c0(iVar3);
  if ((int)uVar4 == 0) {
    if (*plVar1 < 0) {
      uVar2 = *(uint *)(plVar1 + 1);
      plVar6 = (long *)((long)plVar1 + 0x14);
      if ((uVar2 & 1) == 0) {
        plVar6 = (long *)((long)plVar1 + 0xc);
      }
      lVar5 = (((ulong)(uVar2 >> 1) & 0xf) + ((ulong)(uVar2 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar1 + 1;
      lVar5 = 0;
    }
    uVar4 = 0x5f59;
    uVar7 = (long)plVar6 + ((lVar5 + (ulong)((uint)*plVar1 >> 0x10 & 0xf) * 8) - (long)plVar1) + 0xf
            & 0xfffffffffffffff0;
    if (((*(int *)((long)plVar1 + uVar7) == 0x4f434653) &&
        (uVar2 = *(uint *)((long)plVar1 + uVar7 + 8), uVar4 = (ulong)uVar2, uVar2 == 0)) &&
       (param_1 != (undefined4 *)0x0)) {
      *param_1 = *(undefined4 *)((long)plVar1 + uVar7 + 0x10);
    }
  }
  return uVar4;
}



// ===== FUN_710075f3a0 @ 710075f3a0 (size=336) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710075f3a0(undefined4 param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  
  uVar2 = FUN_7100769b90();
  if (uVar2 < 0x20000) {
    return 0x4b59;
  }
  uVar2 = FUN_7100769b90();
  if (uVar2 < 0x40000) {
    puVar6 = (undefined4 *)&DAT_7100d17558;
  }
  else {
    puVar6 = (undefined4 *)&DAT_7100d17508;
    if (((_DAT_7100d17508 == 0) && (puVar6 = (undefined4 *)&DAT_7100d17518, _DAT_7100d17518 == 0))
       && (puVar6 = (undefined4 *)&DAT_7100d17528, _DAT_7100d17528 == 0)) {
      puVar6 = (undefined4 *)&DAT_7100d17548;
      if (_DAT_7100d17538 != 0) {
        puVar6 = (undefined4 *)&DAT_7100d17538;
      }
    }
  }
  plVar1 = (long *)tpidrro_el0;
  *plVar1 = 0x900000004;
  *(undefined4 *)(plVar1 + 4) = param_1;
  plVar1[2] = 0x49434653;
  plVar1[3] = 0x16;
  uVar3 = FUN_710076d0c0(*puVar6);
  if ((int)uVar3 == 0) {
    if (*plVar1 < 0) {
      uVar2 = *(uint *)(plVar1 + 1);
      plVar4 = (long *)((long)plVar1 + 0x14);
      if ((uVar2 & 1) == 0) {
        plVar4 = (long *)((long)plVar1 + 0xc);
      }
      lVar7 = (((ulong)(uVar2 >> 1) & 0xf) + ((ulong)(uVar2 >> 5) & 0xf)) * 4;
    }
    else {
      plVar4 = plVar1 + 1;
      lVar7 = 0;
    }
    uVar5 = (long)plVar4 + ((lVar7 + (ulong)((uint)*plVar1 >> 0x10 & 0xf) * 8) - (long)plVar1) + 0xf
            & 0xfffffffffffffff0;
    uVar3 = 0x5f59;
    if (*(int *)((long)plVar1 + uVar5) == 0x4f434653) {
      uVar3 = (ulong)*(uint *)((long)plVar1 + uVar5 + 8);
    }
  }
  return uVar3;
}



// ===== FUN_710075f4f0 @ 710075f4f0 (size=180) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710075f4f0(void)

{
  undefined8 *puVar1;
  int iVar2;
  
  FUN_710076d5b0(0x7100d17580);
  if (_DAT_7100d175dc == 0) {
    iVar2 = _DAT_7100d175e0;
    if (_DAT_7100d175e0 == 0) {
      _DAT_7100d175d8 = 0;
      _DAT_7100d175e0 = 0;
      return;
    }
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 0x800000004;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 2) = 2;
    *(int *)((long)puVar1 + 0x14) = iVar2;
    FUN_710076d0c0(_DAT_7100d175d8 & 0xffffffff);
  }
  else {
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 2;
    FUN_710076d0c0(_DAT_7100d175d8 & 0xffffffff);
  }
  if (_DAT_7100d175dc == 0) {
    _DAT_7100d175d8 = 0;
    _DAT_7100d175e0 = 0;
    return;
  }
  FUN_710076d060(_DAT_7100d175d8 & 0xffffffff);
  _DAT_7100d175d8 = 0;
  _DAT_7100d175e0 = 0;
  return;
}



// ===== FUN_710075f5b0 @ 710075f5b0 (size=416) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_710075f5b0(int *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  int iVar13;
  
  iVar5 = *param_1;
  if (iVar5 == _DAT_7100d175d8) {
    iVar6 = FUN_710076d640(0x7100d17580);
    puVar11 = (ulong *)tpidrro_el0;
    iVar4 = *(int *)((long)iVar6 * 4 + 0x7100d17580);
    iVar5 = *param_1;
    iVar13 = param_1[2];
    uVar10 = 0xc;
  }
  else {
    iVar13 = param_1[2];
    iVar4 = 0;
    iVar6 = -1;
    puVar11 = (ulong *)tpidrro_el0;
    uVar8 = 0xc;
    if (iVar13 == 0) {
      uVar8 = 8;
    }
    uVar10 = (ulong)uVar8;
  }
  *puVar11 = uVar10 << 0x20 | 4;
  if (iVar13 == 0) {
    puVar12 = puVar11 + 2;
  }
  else {
    puVar11[3] = 0;
    puVar12 = puVar11 + 4;
    *(undefined4 *)(puVar11 + 2) = 0x100001;
    *(int *)((long)puVar11 + 0x14) = iVar13;
  }
  *(undefined4 *)(puVar12 + 1) = param_3;
  *(undefined4 *)((long)puVar12 + 0xc) = 0;
  if (iVar4 != 0) {
    iVar5 = iVar4;
  }
  *puVar12 = 0x49434653;
  iVar5 = FUN_710076d0c0(iVar5);
  if (iVar5 == 0) {
    plVar3 = (long *)tpidrro_el0;
    if (*plVar3 < 0) {
      uVar8 = *(uint *)(plVar3 + 1);
      plVar9 = (long *)((long)plVar3 + 0x14);
      if ((uVar8 & 1) == 0) {
        plVar9 = (long *)((long)plVar3 + 0xc);
      }
      lVar7 = (((ulong)(uVar8 >> 1) & 0xf) + ((ulong)(uVar8 >> 5) & 0xf)) * 4;
    }
    else {
      plVar9 = plVar3 + 1;
      lVar7 = 0;
    }
    piVar1 = (int *)((long)plVar3 +
                    ((long)plVar9 +
                     ((lVar7 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf &
                    0xfffffffffffffff0));
    iVar5 = 0x5f59;
    piVar2 = piVar1 + 4;
    if (iVar13 == 0) {
      piVar2 = piVar1;
    }
    if (((*piVar2 == 0x4f434653) && (iVar5 = piVar2[2], iVar5 == 0)) && (param_2 != (int *)0x0)) {
      *param_2 = piVar2[4];
    }
  }
  if (iVar6 != -1) {
    FUN_710076d6f0(0x7100d17580,iVar6);
  }
  return iVar5;
}



// ===== FUN_710075f750 @ 710075f750 (size=392) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_710075f750(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  ulong *puVar11;
  ulong *puVar12;
  int iVar13;
  
  iVar5 = *param_1;
  if (iVar5 == _DAT_7100d175d8) {
    iVar6 = FUN_710076d640(0x7100d17580);
    puVar11 = (ulong *)tpidrro_el0;
    iVar4 = *(int *)((long)iVar6 * 4 + 0x7100d17580);
    iVar5 = *param_1;
    iVar13 = param_1[2];
    uVar9 = 0xc;
  }
  else {
    iVar13 = param_1[2];
    iVar4 = 0;
    iVar6 = -1;
    puVar11 = (ulong *)tpidrro_el0;
    uVar8 = 0xc;
    if (iVar13 == 0) {
      uVar8 = 8;
    }
    uVar9 = (ulong)uVar8;
  }
  *puVar11 = uVar9 << 0x20 | 4;
  if (iVar13 == 0) {
    puVar12 = puVar11 + 2;
  }
  else {
    puVar11[3] = 0;
    puVar12 = puVar11 + 4;
    *(undefined4 *)(puVar11 + 2) = 0x100001;
    *(int *)((long)puVar11 + 0x14) = iVar13;
  }
  *(undefined4 *)(puVar12 + 1) = param_2;
  *(undefined4 *)((long)puVar12 + 0xc) = 0;
  if (iVar4 != 0) {
    iVar5 = iVar4;
  }
  *puVar12 = 0x49434653;
  iVar5 = FUN_710076d0c0(iVar5);
  if (iVar5 == 0) {
    plVar3 = (long *)tpidrro_el0;
    if (*plVar3 < 0) {
      uVar8 = *(uint *)(plVar3 + 1);
      plVar10 = (long *)((long)plVar3 + 0x14);
      if ((uVar8 & 1) == 0) {
        plVar10 = (long *)((long)plVar3 + 0xc);
      }
      lVar7 = (((ulong)(uVar8 >> 1) & 0xf) + ((ulong)(uVar8 >> 5) & 0xf)) * 4;
    }
    else {
      plVar10 = plVar3 + 1;
      lVar7 = 0;
    }
    piVar1 = (int *)((long)plVar3 +
                    ((long)plVar10 +
                     ((lVar7 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf &
                    0xfffffffffffffff0));
    iVar5 = 0x5f59;
    piVar2 = piVar1 + 4;
    if (iVar13 == 0) {
      piVar2 = piVar1;
    }
    if (*piVar2 == 0x4f434653) {
      iVar5 = piVar2[2];
    }
  }
  if (iVar6 != -1) {
    FUN_710076d6f0(0x7100d17580,iVar6);
  }
  return iVar5;
}



// ===== FUN_710075f8e0 @ 710075f8e0 (size=432) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_710075f8e0(int *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  ulong *puVar9;
  long *plVar10;
  ulong *puVar11;
  ulong uVar12;
  int iVar13;
  
  iVar5 = *param_1;
  if (iVar5 == _DAT_7100d175d8) {
    iVar6 = FUN_710076d640(0x7100d17580);
    uVar12 = 0xc;
    iVar4 = *(int *)((long)iVar6 * 4 + 0x7100d17580);
    iVar5 = *param_1;
    iVar13 = param_1[2];
    puVar11 = (ulong *)tpidrro_el0;
  }
  else {
    iVar13 = param_1[2];
    iVar4 = 0;
    iVar6 = -1;
    puVar11 = (ulong *)tpidrro_el0;
    uVar8 = 0xc;
    if (iVar13 == 0) {
      uVar8 = 8;
    }
    uVar12 = (ulong)uVar8;
  }
  puVar9 = puVar11 + 4;
  *puVar11 = uVar12 << 0x20 | 0x100004;
  if (iVar13 != 0) {
    puVar11[5] = 0;
    *(undefined4 *)(puVar11 + 4) = 0x100001;
    *(int *)((long)puVar11 + 0x24) = iVar13;
    puVar9 = puVar11 + 6;
  }
  *(undefined4 *)(puVar9 + 1) = param_4;
  *(undefined4 *)((long)puVar9 + 0xc) = 0;
  uVar8 = (uint)((ulong)param_2 >> 0x20);
  if (iVar4 != 0) {
    iVar5 = iVar4;
  }
  *puVar9 = 0x49434653;
  *(int *)(puVar11 + 1) = (int)param_3;
  *(int *)((long)puVar11 + 0xc) = (int)param_2;
  *(uint *)(puVar11 + 2) =
       (int)((ulong)param_3 >> 0x20) << 0x18 | (uVar8 >> 4 & 0x3fffff) << 2 | uVar8 << 0x1c;
  iVar5 = FUN_710076d0c0(iVar5);
  if (iVar5 == 0) {
    plVar3 = (long *)tpidrro_el0;
    if (*plVar3 < 0) {
      uVar8 = *(uint *)(plVar3 + 1);
      plVar10 = (long *)((long)plVar3 + 0x14);
      if ((uVar8 & 1) == 0) {
        plVar10 = (long *)((long)plVar3 + 0xc);
      }
      lVar7 = (((ulong)(uVar8 >> 1) & 0xf) + ((ulong)(uVar8 >> 5) & 0xf)) * 4;
    }
    else {
      plVar10 = plVar3 + 1;
      lVar7 = 0;
    }
    piVar1 = (int *)((long)plVar3 +
                    ((long)plVar10 +
                     ((lVar7 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf &
                    0xfffffffffffffff0));
    iVar5 = 0x5f59;
    piVar2 = piVar1 + 4;
    if (iVar13 == 0) {
      piVar2 = piVar1;
    }
    if (*piVar2 == 0x4f434653) {
      iVar5 = piVar2[2];
    }
  }
  if (iVar6 != -1) {
    FUN_710076d6f0(0x7100d17580,iVar6);
  }
  return iVar5;
}



// ===== FUN_710075fa90 @ 710075fa90 (size=396) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_710075fa90(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  int iVar10;
  
  if (*param_1 == _DAT_7100d175d8) {
    iVar6 = FUN_710076d640(0x7100d17580);
    puVar9 = (undefined8 *)tpidrro_el0;
    iVar5 = *(int *)((long)iVar6 * 4 + 0x7100d17580);
    iVar10 = param_1[2];
LAB_710075fb8c:
    *(undefined4 *)(puVar9 + 5) = param_3;
    *(undefined4 *)((long)puVar9 + 0x2c) = 0;
    *(undefined4 *)(puVar9 + 6) = param_2;
    *puVar9 = 0xd00000004;
    *(undefined4 *)(puVar9 + 2) = 0x140001;
    *(int *)((long)puVar9 + 0x14) = iVar10;
    puVar9[3] = 0;
    puVar9[4] = 0x49434653;
    if (iVar5 != 0) goto LAB_710075faec;
  }
  else {
    iVar10 = param_1[2];
    puVar9 = (undefined8 *)tpidrro_el0;
    if (iVar10 != 0) {
      iVar6 = -1;
      iVar5 = 0;
      goto LAB_710075fb8c;
    }
    iVar6 = -1;
    *(undefined4 *)(puVar9 + 3) = param_3;
    *(undefined4 *)((long)puVar9 + 0x1c) = 0;
    *(undefined4 *)(puVar9 + 4) = param_2;
    *puVar9 = 0x900000004;
    puVar9[2] = 0x49434653;
  }
  iVar5 = *param_1;
LAB_710075faec:
  iVar5 = FUN_710076d0c0(iVar5);
  if (iVar5 == 0) {
    plVar4 = (long *)tpidrro_el0;
    if (*plVar4 < 0) {
      uVar3 = *(uint *)(plVar4 + 1);
      plVar8 = (long *)((long)plVar4 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar8 = (long *)((long)plVar4 + 0xc);
      }
      lVar7 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar8 = plVar4 + 1;
      lVar7 = 0;
    }
    piVar1 = (int *)((long)plVar4 +
                    ((long)plVar8 +
                     ((lVar7 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
                    0xfffffffffffffff0));
    iVar5 = 0x5f59;
    piVar2 = piVar1 + 4;
    if (iVar10 == 0) {
      piVar2 = piVar1;
    }
    if (*piVar2 == 0x4f434653) {
      iVar5 = piVar2[2];
    }
  }
  if (iVar6 != -1) {
    FUN_710076d6f0(0x7100d17580,iVar6);
  }
  return iVar5;
}



// ===== FUN_710075fc20 @ 710075fc20 (size=452) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_710075fc20(int *param_1,undefined8 param_2,undefined4 param_3,int *param_4,
                  undefined4 param_5)

{
  int *piVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  ulong *puVar9;
  long *plVar10;
  ulong uVar11;
  ulong *puVar12;
  int iVar13;
  
  iVar5 = *param_1;
  if (iVar5 == _DAT_7100d175d8) {
    iVar6 = FUN_710076d640(0x7100d17580);
    uVar11 = 0xc;
    iVar4 = *(int *)((long)iVar6 * 4 + 0x7100d17580);
    iVar5 = *param_1;
    iVar13 = param_1[2];
    puVar12 = (ulong *)tpidrro_el0;
  }
  else {
    iVar13 = param_1[2];
    iVar4 = 0;
    iVar6 = -1;
    puVar12 = (ulong *)tpidrro_el0;
    uVar8 = 0xc;
    if (iVar13 == 0) {
      uVar8 = 8;
    }
    uVar11 = (ulong)uVar8;
  }
  puVar9 = puVar12 + 4;
  *puVar12 = uVar11 << 0x20 | 0x1000004;
  if (iVar13 != 0) {
    puVar12[5] = 0;
    *(undefined4 *)(puVar12 + 4) = 0x100001;
    *(int *)((long)puVar12 + 0x24) = iVar13;
    puVar9 = puVar12 + 6;
  }
  *(undefined4 *)(puVar9 + 1) = param_5;
  *(undefined4 *)((long)puVar9 + 0xc) = 0;
  if (iVar4 != 0) {
    iVar5 = iVar4;
  }
  *puVar9 = 0x49434653;
  *(undefined4 *)(puVar12 + 1) = param_3;
  *(int *)((long)puVar12 + 0xc) = (int)param_2;
  uVar8 = (uint)((ulong)param_2 >> 0x20);
  *(uint *)(puVar12 + 2) = uVar8 << 0x1c | (uVar8 >> 4 & 0x3fffff) << 2;
  iVar5 = FUN_710076d0c0(iVar5);
  if (iVar5 == 0) {
    plVar3 = (long *)tpidrro_el0;
    if (*plVar3 < 0) {
      uVar8 = *(uint *)(plVar3 + 1);
      plVar10 = (long *)((long)plVar3 + 0x14);
      if ((uVar8 & 1) == 0) {
        plVar10 = (long *)((long)plVar3 + 0xc);
      }
      lVar7 = (((ulong)(uVar8 >> 1) & 0xf) + ((ulong)(uVar8 >> 5) & 0xf)) * 4;
    }
    else {
      plVar10 = plVar3 + 1;
      lVar7 = 0;
    }
    piVar1 = (int *)((long)plVar3 +
                    ((long)plVar10 +
                     ((lVar7 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf &
                    0xfffffffffffffff0));
    iVar5 = 0x5f59;
    piVar2 = piVar1 + 4;
    if (iVar13 == 0) {
      piVar2 = piVar1;
    }
    if (((*piVar2 == 0x4f434653) && (iVar5 = piVar2[2], iVar5 == 0)) && (param_4 != (int *)0x0)) {
      *param_4 = piVar2[4];
    }
  }
  if (iVar6 != -1) {
    FUN_710076d6f0(0x7100d17580,iVar6);
  }
  return iVar5;
}



// ===== FUN_710075fdf0 @ 710075fdf0 (size=556) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_710075fdf0(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  int *piVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  ulong *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong *puVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  
  iVar4 = *param_1;
  if (iVar4 == _DAT_7100d175d8) {
    iVar5 = FUN_710076d640(0x7100d17580);
    uVar9 = 0xc;
    iVar12 = *(int *)((long)iVar5 * 4 + 0x7100d17580);
    iVar4 = *param_1;
    iVar13 = param_1[2];
    puVar11 = (ulong *)tpidrro_el0;
  }
  else {
    iVar13 = param_1[2];
    iVar12 = 0;
    iVar5 = -1;
    puVar11 = (ulong *)tpidrro_el0;
    uVar7 = 0xc;
    if (iVar13 == 0) {
      uVar7 = 8;
    }
    uVar9 = (ulong)uVar7;
  }
  puVar8 = puVar11 + 4;
  *puVar11 = uVar9 << 0x20 | 0x1000004;
  if (iVar13 != 0) {
    puVar11[5] = 0;
    *(undefined4 *)(puVar11 + 4) = 0x100001;
    *(int *)((long)puVar11 + 0x24) = iVar13;
    puVar8 = puVar11 + 6;
  }
  *(undefined4 *)(puVar8 + 1) = param_6;
  *(undefined4 *)((long)puVar8 + 0xc) = 0;
  if (iVar12 != 0) {
    iVar4 = iVar12;
  }
  *puVar8 = 0x49434653;
  uVar7 = (uint)((ulong)param_4 >> 0x20);
  *(int *)(puVar11 + 1) = (int)param_5;
  *(int *)((long)puVar11 + 0xc) = (int)param_4;
  *(uint *)(puVar11 + 2) =
       (int)((ulong)param_5 >> 0x20) << 0x18 | (uVar7 >> 4 & 0x3fffff) << 2 | uVar7 << 0x1c;
  iVar4 = FUN_710076d0c0(iVar4);
  if (iVar4 == 0) {
    plVar3 = (long *)tpidrro_el0;
    if (*plVar3 < 0) {
      uVar7 = *(uint *)(plVar3 + 1);
      plVar10 = (long *)((long)plVar3 + 0x14);
      if ((uVar7 & 1) == 0) {
        plVar10 = (long *)((long)plVar3 + 0xc);
      }
      lVar6 = (((ulong)(uVar7 >> 1) & 0xf) + ((ulong)(uVar7 >> 5) & 0xf)) * 4;
    }
    else {
      plVar10 = plVar3 + 1;
      lVar6 = 0;
    }
    piVar1 = (int *)((long)plVar3 +
                    ((long)plVar10 +
                     ((lVar6 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf &
                    0xfffffffffffffff0));
    piVar2 = piVar1 + 4;
    if (iVar13 == 0) {
      piVar2 = piVar1;
    }
    if (*piVar2 != 0x4f434653) {
      if (iVar5 != -1) {
        FUN_710076d6f0(0x7100d17580,iVar5);
      }
      return 0x5f59;
    }
    iVar4 = piVar2[2];
    if (iVar4 == 0) {
      uVar14 = *(undefined8 *)(piVar2 + 4);
      if (iVar5 != -1) {
        FUN_710076d6f0(0x7100d17580,iVar5);
      }
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = (int)uVar14;
      }
      if (param_3 == (undefined4 *)0x0) {
        return 0;
      }
      *param_3 = (int)((ulong)uVar14 >> 0x20);
      return 0;
    }
  }
  if (iVar5 == -1) {
    return iVar4;
  }
  FUN_710076d6f0(0x7100d17580,iVar5);
  return iVar4;
}



// ===== FUN_7100760020 @ 7100760020 (size=416) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100760020(int *param_1,byte param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  int iVar10;
  
  if (*param_1 == _DAT_7100d175d8) {
    iVar6 = FUN_710076d640(0x7100d17580);
    puVar9 = (undefined8 *)tpidrro_el0;
    iVar5 = *(int *)((long)iVar6 * 4 + 0x7100d17580);
    iVar10 = param_1[2];
LAB_710076012c:
    *(undefined4 *)(puVar9 + 5) = param_4;
    *(undefined4 *)((long)puVar9 + 0x2c) = 0;
    *puVar9 = 0xe00000004;
    *(undefined4 *)(puVar9 + 2) = 0x180001;
    *(int *)((long)puVar9 + 0x14) = iVar10;
    puVar9[3] = 0;
    puVar9[4] = 0x49434653;
    puVar9[6] = CONCAT44(param_3,(uint)param_2);
    if (iVar5 != 0) goto LAB_710076008c;
  }
  else {
    iVar10 = param_1[2];
    puVar9 = (undefined8 *)tpidrro_el0;
    if (iVar10 != 0) {
      iVar6 = -1;
      iVar5 = 0;
      goto LAB_710076012c;
    }
    *(undefined4 *)(puVar9 + 3) = param_4;
    *(undefined4 *)((long)puVar9 + 0x1c) = 0;
    iVar6 = -1;
    *puVar9 = 0xa00000004;
    puVar9[2] = 0x49434653;
    puVar9[4] = CONCAT44(param_3,(uint)param_2);
  }
  iVar5 = *param_1;
LAB_710076008c:
  iVar5 = FUN_710076d0c0(iVar5);
  if (iVar5 == 0) {
    plVar4 = (long *)tpidrro_el0;
    if (*plVar4 < 0) {
      uVar3 = *(uint *)(plVar4 + 1);
      plVar8 = (long *)((long)plVar4 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar8 = (long *)((long)plVar4 + 0xc);
      }
      lVar7 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar8 = plVar4 + 1;
      lVar7 = 0;
    }
    piVar1 = (int *)((long)plVar4 +
                    ((long)plVar8 +
                     ((lVar7 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
                    0xfffffffffffffff0));
    iVar5 = 0x5f59;
    piVar2 = piVar1 + 4;
    if (iVar10 == 0) {
      piVar2 = piVar1;
    }
    if (*piVar2 == 0x4f434653) {
      iVar5 = piVar2[2];
    }
  }
  if (iVar6 != -1) {
    FUN_710076d6f0(0x7100d17580,iVar6);
  }
  return iVar5;
}



// ===== FUN_71007601c0 @ 71007601c0 (size=248) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71007601c0(int *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (_DAT_7100d175d8 == *param_1) {
    iVar3 = FUN_710076d640(0x7100d17580);
    iVar1 = param_1[2];
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 0x800000004;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 2) = 2;
    *(int *)((long)puVar2 + 0x14) = iVar1;
    FUN_710076d0c0(*(undefined4 *)((long)iVar3 * 4 + 0x7100d17580));
    FUN_710076d6f0(0x7100d17580,iVar3);
    return;
  }
  if (param_1[1] == 0) {
    iVar1 = param_1[2];
    if (iVar1 == 0) goto LAB_7100760204;
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 0x800000004;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 2) = 2;
    *(int *)((long)puVar2 + 0x14) = iVar1;
    FUN_710076d0c0();
    iVar1 = param_1[1];
  }
  else {
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 2;
    FUN_710076d0c0();
    iVar1 = param_1[1];
  }
  if (iVar1 != 0) {
    FUN_710076d060(*param_1);
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
LAB_7100760204:
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// ===== FUN_71007602c0 @ 71007602c0 (size=1028) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

int FUN_71007602c0(uint param_1)

{
  bool bVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined4 uVar10;
  long lVar11;
  
  FUN_7100749670(0x7100d17568);
  iVar5 = _DAT_7100d1756c + 1;
  bVar1 = _DAT_7100d1756c != 0;
  _DAT_7100d1756c = iVar5;
  if (bVar1) goto LAB_710076057c;
  if (4 < param_1) {
    iVar5 = 0x1759;
    goto LAB_71007605ac;
  }
  if (_DAT_7100d17570 == 1) {
    uVar6 = FUN_7100769b90();
    if (uVar6 < 0xf0000) {
      _DAT_7100d17570 = 0;
      goto LAB_7100760310;
    }
    lVar11 = 0x73;
    lVar9 = 0x3a;
  }
  else {
LAB_7100760310:
    lVar11 = 0;
    lVar9 = 0;
  }
  iVar5 = FUN_710075e590(&DAT_7100d175d8,lVar9 << 0x18 | 0x6c7373U | lVar11 << 0x20);
  uVar10 = _DAT_7100d175d8;
  if (iVar5 == 0) {
    if (_DAT_7100d175dc == 0) {
      plVar2 = (long *)tpidrro_el0;
      *plVar2 = 0x900000005;
      *(undefined4 *)(plVar2 + 4) = 0;
      plVar2[2] = 0x49434653;
      plVar2[3] = 4;
      iVar5 = FUN_710076d0c0(uVar10);
      if (iVar5 == 0) {
        if (*plVar2 < 0) {
          uVar6 = *(uint *)(plVar2 + 1);
          lVar9 = (long)plVar2 + 0x14;
          if ((uVar6 & 1) == 0) {
            lVar9 = (long)plVar2 + 0xc;
          }
          plVar8 = (long *)(lVar9 + ((ulong)(uVar6 >> 1) & 0xf) * 4);
          lVar9 = ((ulong)(uVar6 >> 5) & 0xf) << 2;
        }
        else {
          plVar8 = plVar2 + 1;
          lVar9 = 0;
        }
        uVar7 = (long)plVar8 +
                ((lVar9 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf &
                0xfffffffffffffff0;
        if (*(int *)((long)plVar2 + uVar7) != 0x4f434653) goto LAB_7100760684;
        iVar5 = *(int *)((long)plVar2 + uVar7 + 8);
        if (iVar5 == 0) {
          _DAT_7100d175d8 = (undefined4)*plVar8;
          _DAT_7100d175dc = 1;
          goto LAB_71007603f0;
        }
      }
      goto LAB_710076059c;
    }
LAB_71007603f0:
    uVar10 = _DAT_7100d175d8;
    plVar2 = (long *)tpidrro_el0;
    *plVar2 = 0x800000005;
    plVar2[2] = 0x49434653;
    plVar2[3] = 0;
    iVar5 = FUN_710076d0c0(uVar10);
    if (iVar5 != 0) goto LAB_710076059c;
    if (*plVar2 < 0) {
      uVar6 = *(uint *)(plVar2 + 1);
      plVar8 = (long *)((long)plVar2 + 0x14);
      if ((uVar6 & 1) == 0) {
        plVar8 = (long *)((long)plVar2 + 0xc);
      }
      lVar9 = (((ulong)(uVar6 >> 1) & 0xf) + ((ulong)(uVar6 >> 5) & 0xf)) * 4;
    }
    else {
      plVar8 = plVar2 + 1;
      lVar9 = 0;
    }
    uVar7 = (long)plVar8 + ((lVar9 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    if (*(int *)((long)plVar2 + uVar7) != 0x4f434653) {
LAB_7100760684:
      uVar6 = FUN_7100769b90();
      if (0x2ffff < uVar6) goto LAB_7100760490;
      goto LAB_7100760694;
    }
    iVar5 = *(int *)((long)plVar2 + uVar7 + 8);
    if (iVar5 != 0) goto LAB_710076059c;
    _DAT_7100d175e0 = *(undefined4 *)((long)plVar2 + uVar7 + 0x10);
    uVar6 = FUN_7100769b90();
    if (0x2ffff < uVar6) goto LAB_7100760490;
  }
  else {
LAB_710076059c:
    uVar6 = FUN_7100769b90();
    if (uVar6 < 0x30000) goto LAB_71007605ac;
LAB_7100760490:
    uVar6 = FUN_7100769b90();
    if (uVar6 < 0x50000) {
      uVar6 = FUN_7100769b90();
      if (0x5ffff < uVar6) goto LAB_71007604b0;
      uVar10 = 1;
    }
    else {
      uVar6 = FUN_7100769b90();
      if (uVar6 < 0x60000) {
        uVar10 = 2;
      }
      else {
LAB_71007604b0:
        uVar10 = 3;
      }
    }
    uVar4 = _DAT_7100d175e0;
    uVar3 = _DAT_7100d175d8;
    plVar2 = (long *)tpidrro_el0;
    *plVar2 = 0xd00000004;
    *(undefined4 *)(plVar2 + 6) = uVar10;
    *(undefined4 *)(plVar2 + 2) = 0x140001;
    *(undefined4 *)((long)plVar2 + 0x14) = uVar4;
    plVar2[3] = 0;
    plVar2[4] = 0x49434653;
    plVar2[5] = 5;
    iVar5 = FUN_710076d0c0(uVar3);
    if (iVar5 != 0) goto LAB_71007605ac;
    if (*plVar2 < 0) {
      uVar6 = *(uint *)(plVar2 + 1);
      plVar8 = (long *)((long)plVar2 + 0x14);
      if ((uVar6 & 1) == 0) {
        plVar8 = (long *)((long)plVar2 + 0xc);
      }
      lVar9 = (((ulong)(uVar6 >> 1) & 0xf) + ((ulong)(uVar6 >> 5) & 0xf)) * 4;
    }
    else {
      plVar8 = plVar2 + 1;
      lVar9 = 0;
    }
    uVar7 = (long)plVar8 + ((lVar9 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    if (*(int *)((long)plVar2 + uVar7 + 0x10) != 0x4f434653) {
LAB_7100760694:
      iVar5 = 0x5f59;
      goto LAB_71007605ac;
    }
    iVar5 = *(int *)((long)plVar2 + uVar7 + 0x18);
    if (iVar5 != 0) goto LAB_71007605ac;
  }
  iVar5 = FUN_710076d420(0x7100d17580,_DAT_7100d175d8,param_1);
  if (iVar5 == 0) {
LAB_710076057c:
    FUN_7100749740(0x7100d17568);
    return 0;
  }
LAB_71007605ac:
  FUN_710075f4f0();
  _DAT_7100d1756c = _DAT_7100d1756c + -1;
  FUN_7100749740(0x7100d17568);
  return iVar5;
}



// ===== FUN_71007606d0 @ 71007606d0 (size=72) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71007606d0(void)

{
  FUN_7100749670();
  if (_DAT_7100d1756c != 0) {
    _DAT_7100d1756c = _DAT_7100d1756c + -1;
    if (_DAT_7100d1756c == 0) {
      FUN_710075f4f0();
    }
  }
  FUN_7100749740(0x7100d17568);
  return;
}



// ===== FUN_7100760720 @ 7100760720 (size=408) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100760720(int *param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined4 uVar12;
  
  iVar8 = 0x1159;
  if (_DAT_7100d175d8 != 0) {
    if (_DAT_7100d17570 == 1) {
      iVar7 = FUN_710076d640(0x7100d17580);
      uVar12 = 100;
    }
    else {
      iVar7 = FUN_710076d640(0x7100d17580);
      uVar12 = 0;
    }
    uVar6 = _DAT_7100d175e4;
    uVar5 = _DAT_7100d175e0;
    iVar4 = _DAT_7100d175d8;
    plVar3 = (long *)tpidrro_el0;
    iVar8 = *(int *)((long)iVar7 * 4 + 0x7100d17580);
    *plVar3 = -0x7fffffeffffffffc;
    *(undefined4 *)(plVar3 + 7) = uVar12;
    *(undefined4 *)((long)plVar3 + 0x3c) = 0;
    *(undefined4 *)(plVar3 + 1) = 1;
    plVar3[8] = param_2 & 0xffffffff;
    plVar3[9] = 0;
    if (iVar8 == 0) {
      iVar8 = iVar4;
    }
    *(undefined4 *)(plVar3 + 4) = 0x200001;
    *(undefined4 *)((long)plVar3 + 0x24) = uVar5;
    plVar3[5] = 0;
    plVar3[6] = 0x49434653;
    iVar8 = FUN_710076d0c0(iVar8);
    if (iVar8 == 0) {
      if (*plVar3 < 0) {
        uVar2 = *(uint *)(plVar3 + 1);
        plVar10 = (long *)((long)plVar3 + 0x14);
        if ((uVar2 & 1) == 0) {
          plVar10 = (long *)((long)plVar3 + 0xc);
        }
        lVar9 = (((ulong)(uVar2 >> 1) & 0xf) + ((ulong)(uVar2 >> 5) & 0xf)) * 4;
      }
      else {
        plVar10 = plVar3 + 1;
        lVar9 = 0;
      }
      uVar11 = (long)plVar10 +
               ((lVar9 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf &
               0xfffffffffffffff0;
      iVar8 = 0x5f59;
      if ((*(int *)((long)plVar3 + uVar11 + 0x10) == 0x4f434653) &&
         (iVar8 = *(int *)((long)plVar3 + uVar11 + 0x18), iVar8 == 0)) {
        iVar1 = *(int *)((long)plVar3 + uVar11 + 0x20);
        if (iVar1 == 0) {
          param_1[0] = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1[3] = 0;
        }
        else {
          *param_1 = iVar4;
          param_1[1] = 0;
          param_1[2] = iVar1;
          *(undefined2 *)(param_1 + 3) = uVar6;
        }
      }
    }
    FUN_710076d6f0(0x7100d17580,iVar7);
  }
  return iVar8;
}



// ===== thunk_FUN_71007601c0 @ 71007608c0 (size=4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_71007601c0(int *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (_DAT_7100d175d8 == *param_1) {
    iVar3 = FUN_710076d640(0x7100d17580);
    iVar1 = param_1[2];
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 0x800000004;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 2) = 2;
    *(int *)((long)puVar2 + 0x14) = iVar1;
    FUN_710076d0c0(*(undefined4 *)((long)iVar3 * 4 + 0x7100d17580));
    FUN_710076d6f0(0x7100d17580,iVar3);
    return;
  }
  if (param_1[1] == 0) {
    iVar1 = param_1[2];
    if (iVar1 == 0) goto LAB_7100760204;
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 0x800000004;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 2) = 2;
    *(int *)((long)puVar2 + 0x14) = iVar1;
    FUN_710076d0c0();
    iVar1 = param_1[1];
  }
  else {
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 2;
    FUN_710076d0c0();
    iVar1 = param_1[1];
  }
  if (iVar1 != 0) {
    FUN_710076d060(*param_1);
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
LAB_7100760204:
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// ===== FUN_71007608d0 @ 71007608d0 (size=540) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_71007608d0(int *param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  int iVar12;
  undefined2 uVar13;
  
  iVar12 = *param_1;
  if (iVar12 == 0) {
    return 0x1159;
  }
  if (iVar12 == _DAT_7100d175d8) {
    iVar5 = FUN_710076d640(0x7100d17580);
    iVar12 = *param_1;
    iVar1 = param_1[2];
    uVar13 = (undefined2)param_1[3];
    iVar3 = *(int *)((long)iVar5 * 4 + 0x7100d17580);
    puVar9 = (ulong *)tpidrro_el0;
    uVar8 = 0xc;
  }
  else {
    uVar13 = (undefined2)param_1[3];
    puVar9 = (ulong *)tpidrro_el0;
    iVar1 = param_1[2];
    iVar3 = 0;
    uVar7 = 0xc;
    if (iVar1 == 0) {
      uVar7 = 8;
    }
    uVar8 = (ulong)uVar7;
    iVar5 = -1;
  }
  *puVar9 = uVar8 << 0x20 | 4;
  if (iVar1 == 0) {
    puVar10 = puVar9 + 2;
  }
  else {
    puVar9[3] = 0;
    puVar10 = puVar9 + 4;
    *(undefined4 *)(puVar9 + 2) = 0x100001;
    *(int *)((long)puVar9 + 0x14) = iVar1;
  }
  if (iVar3 == 0) {
    iVar3 = iVar12;
  }
  *puVar10 = 0x49434653;
  puVar10[1] = 2;
  iVar4 = FUN_710076d0c0(iVar3);
  iVar3 = iVar4;
  if (iVar4 != 0) goto LAB_71007609e0;
  plVar2 = (long *)tpidrro_el0;
  if (*plVar2 < 0) {
    uVar7 = *(uint *)(plVar2 + 1);
    lVar11 = (long)plVar2 + 0x14;
    if ((uVar7 & 1) == 0) {
      lVar11 = (long)plVar2 + 0xc;
    }
    plVar6 = (long *)(lVar11 + ((ulong)(uVar7 >> 1) & 0xf) * 4);
    lVar11 = ((ulong)(uVar7 >> 5) & 0xf) << 2;
  }
  else {
    plVar6 = plVar2 + 1;
    lVar11 = 0;
  }
  uVar8 = (long)plVar6 + ((lVar11 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
          & 0xfffffffffffffff0;
  if (iVar1 == 0) {
    if (*(int *)((long)plVar2 + uVar8) != 0x4f434653) goto LAB_7100760ad4;
    iVar3 = *(int *)((long)plVar2 + uVar8 + 8);
    if (iVar3 != 0) goto LAB_71007609e0;
    if ((int)*plVar6 != 0) {
      *param_2 = (int)*plVar6;
      *(undefined2 *)(param_2 + 3) = uVar13;
      param_2[1] = 1;
      param_2[2] = 0;
      iVar3 = iVar4;
      goto LAB_71007609e0;
    }
  }
  else {
    if (*(int *)((long)plVar2 + uVar8 + 0x10) != 0x4f434653) {
LAB_7100760ad4:
      iVar3 = 0x5f59;
      goto LAB_71007609e0;
    }
    iVar3 = *(int *)((long)plVar2 + uVar8 + 0x18);
    if (iVar3 != 0) goto LAB_71007609e0;
    iVar3 = *(int *)((long)plVar2 + uVar8 + 0x20);
    if (iVar3 != 0) {
      *param_2 = iVar12;
      param_2[1] = 0;
      param_2[2] = iVar3;
      *(undefined2 *)(param_2 + 3) = uVar13;
      iVar3 = iVar4;
      goto LAB_71007609e0;
    }
  }
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  iVar3 = iVar4;
LAB_71007609e0:
  if (iVar5 != -1) {
    FUN_710076d6f0(0x7100d17580);
  }
  return iVar3;
}



// ===== FUN_7100760af0 @ 7100760af0 (size=492) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100760af0(int *param_1,long param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  
  if (*param_1 == 0) {
    return 0x1159;
  }
  if (param_2 == 0) {
    return 0x1759;
  }
  if (*param_1 == _DAT_7100d175d8) {
    iVar6 = FUN_710076d640(0x7100d17580);
    iVar5 = *(int *)((long)iVar6 * 4 + 0x7100d17580);
    puVar9 = (undefined8 *)tpidrro_el0;
    iVar11 = param_1[2];
  }
  else {
    iVar11 = param_1[2];
    puVar9 = (undefined8 *)tpidrro_el0;
    if (iVar11 == 0) {
      iVar11 = 0;
      puVar10 = puVar9 + 4;
      *puVar9 = 0x900100004;
      iVar6 = -1;
      iVar5 = 0;
      goto LAB_7100760b4c;
    }
    iVar6 = -1;
    iVar5 = 0;
  }
  puVar9[5] = 0;
  *puVar9 = 0xd00100004;
  *(undefined4 *)(puVar9 + 4) = 0x140001;
  *(int *)((long)puVar9 + 0x24) = iVar11;
  puVar10 = puVar9 + 6;
LAB_7100760b4c:
  *puVar10 = 0x49434653;
  puVar10[1] = 4;
  *(undefined4 *)(puVar9 + 1) = param_3;
  *(int *)((long)puVar9 + 0xc) = (int)param_2;
  uVar3 = (uint)((ulong)param_2 >> 0x20);
  *(uint *)(puVar9 + 2) = uVar3 << 0x1c | (uVar3 >> 4 & 0x3fffff) << 2;
  *(undefined4 *)(puVar10 + 2) = param_4;
  if (iVar5 == 0) {
    iVar5 = *param_1;
  }
  iVar5 = FUN_710076d0c0(iVar5);
  if (iVar5 == 0) {
    plVar4 = (long *)tpidrro_el0;
    if (*plVar4 < 0) {
      uVar3 = *(uint *)(plVar4 + 1);
      plVar8 = (long *)((long)plVar4 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar8 = (long *)((long)plVar4 + 0xc);
      }
      lVar7 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar8 = plVar4 + 1;
      lVar7 = 0;
    }
    piVar1 = (int *)((long)plVar4 +
                    ((long)plVar8 +
                     ((lVar7 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
                    0xfffffffffffffff0));
    iVar5 = 0x5f59;
    piVar2 = piVar1 + 4;
    if (iVar11 == 0) {
      piVar2 = piVar1;
    }
    if (((*piVar2 == 0x4f434653) && (iVar5 = piVar2[2], iVar5 == 0)) &&
       (param_5 != (undefined8 *)0x0)) {
      *param_5 = *(undefined8 *)(piVar2 + 4);
    }
  }
  if (iVar6 != -1) {
    FUN_710076d6f0(0x7100d17580);
  }
  return iVar5;
}



// ===== FUN_7100760ce0 @ 7100760ce0 (size=544) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100760ce0(int *param_1,long param_2,undefined4 param_3,long param_4,int param_5,
                  undefined8 *param_6)

{
  int *piVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong *puVar12;
  int iVar13;
  
  iVar5 = *param_1;
  if (iVar5 == 0) {
    iVar13 = 0x1159;
  }
  else if (param_2 == 0) {
    iVar13 = 0x1759;
  }
  else {
    iVar13 = 0x1759;
    if ((param_4 != 0 || param_5 == 0) && (param_4 == 0 || param_5 != 0)) {
      if (iVar5 == _DAT_7100d175d8) {
        iVar6 = FUN_710076d640(0x7100d17580);
        uVar11 = 0xc;
        iVar4 = *(int *)((long)iVar6 * 4 + 0x7100d17580);
        iVar13 = param_1[2];
        iVar5 = *param_1;
        puVar10 = (ulong *)tpidrro_el0;
      }
      else {
        iVar13 = param_1[2];
        iVar4 = 0;
        puVar10 = (ulong *)tpidrro_el0;
        uVar8 = 0xc;
        if (iVar13 == 0) {
          uVar8 = 8;
        }
        uVar11 = (ulong)uVar8;
        iVar6 = -1;
      }
      *puVar10 = uVar11 << 0x20 | 0x200004;
      puVar12 = puVar10 + 4;
      if (iVar13 != 0) {
        puVar10[5] = 0;
        *(undefined4 *)(puVar10 + 4) = 0x100001;
        *(int *)((long)puVar10 + 0x24) = iVar13;
        puVar12 = puVar10 + 6;
      }
      if (iVar4 != 0) {
        iVar5 = iVar4;
      }
      *puVar12 = 0x49434653;
      puVar12[1] = 5;
      *(undefined4 *)(puVar10 + 1) = param_3;
      *(int *)((long)puVar10 + 0xc) = (int)param_2;
      uVar8 = (uint)((ulong)param_2 >> 0x20);
      *(uint *)(puVar10 + 2) = uVar8 << 0x1c | (uVar8 >> 4 & 0x3fffff) << 2;
      *(int *)((long)puVar10 + 0x14) = param_5;
      uVar8 = (uint)((ulong)param_4 >> 0x20);
      *(int *)(puVar10 + 3) = (int)param_4;
      *(uint *)((long)puVar10 + 0x1c) = uVar8 << 0x1c | (uVar8 >> 4 & 0x3fffff) << 2;
      iVar5 = FUN_710076d0c0(iVar5);
      if (iVar5 == 0) {
        plVar3 = (long *)tpidrro_el0;
        if (*plVar3 < 0) {
          uVar8 = *(uint *)(plVar3 + 1);
          plVar9 = (long *)((long)plVar3 + 0x14);
          if ((uVar8 & 1) == 0) {
            plVar9 = (long *)((long)plVar3 + 0xc);
          }
          lVar7 = (((ulong)(uVar8 >> 1) & 0xf) + ((ulong)(uVar8 >> 5) & 0xf)) * 4;
        }
        else {
          plVar9 = plVar3 + 1;
          lVar7 = 0;
        }
        iVar5 = 0x5f59;
        piVar1 = (int *)((long)plVar3 +
                        ((long)plVar9 +
                         ((lVar7 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf &
                        0xfffffffffffffff0));
        piVar2 = piVar1 + 4;
        if (iVar13 == 0) {
          piVar2 = piVar1;
        }
        if (((*piVar2 == 0x4f434653) && (iVar5 = piVar2[2], iVar5 == 0)) &&
           (param_6 != (undefined8 *)0x0)) {
          *param_6 = *(undefined8 *)(piVar2 + 4);
        }
      }
      if (iVar6 != -1) {
        FUN_710076d6f0(0x7100d17580);
      }
      return iVar5;
    }
  }
  return iVar13;
}



// ===== thunk_FUN_71007601c0 @ 7100760f00 (size=4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_71007601c0(int *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (_DAT_7100d175d8 == *param_1) {
    iVar3 = FUN_710076d640(0x7100d17580);
    iVar1 = param_1[2];
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 0x800000004;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 2) = 2;
    *(int *)((long)puVar2 + 0x14) = iVar1;
    FUN_710076d0c0(*(undefined4 *)((long)iVar3 * 4 + 0x7100d17580));
    FUN_710076d6f0(0x7100d17580,iVar3);
    return;
  }
  if (param_1[1] == 0) {
    iVar1 = param_1[2];
    if (iVar1 == 0) goto LAB_7100760204;
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 0x800000004;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 2) = 2;
    *(int *)((long)puVar2 + 0x14) = iVar1;
    FUN_710076d0c0();
    iVar1 = param_1[1];
  }
  else {
    puVar2 = (undefined8 *)tpidrro_el0;
    *puVar2 = 2;
    FUN_710076d0c0();
    iVar1 = param_1[1];
  }
  if (iVar1 != 0) {
    FUN_710076d060(*param_1);
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
LAB_7100760204:
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// ===== FUN_7100760f10 @ 7100760f10 (size=440) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100760f10(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  int iVar10;
  
  if (*param_1 == 0) {
    return 0x1159;
  }
  if (*param_1 == _DAT_7100d175d8) {
    iVar6 = FUN_710076d640(0x7100d17580);
    iVar5 = *(int *)((long)iVar6 * 4 + 0x7100d17580);
    puVar8 = (undefined8 *)tpidrro_el0;
    iVar10 = param_1[2];
LAB_7100761030:
    puVar8[5] = 0;
    *(undefined4 *)(puVar8 + 6) = param_2;
    *puVar8 = 0xd00000004;
    *(undefined4 *)(puVar8 + 2) = 0x140001;
    *(int *)((long)puVar8 + 0x14) = iVar10;
    puVar8[3] = 0;
    puVar8[4] = 0x49434653;
    if (iVar5 != 0) goto LAB_7100760f70;
  }
  else {
    iVar10 = param_1[2];
    puVar8 = (undefined8 *)tpidrro_el0;
    if (iVar10 != 0) {
      iVar6 = -1;
      iVar5 = 0;
      goto LAB_7100761030;
    }
    iVar6 = -1;
    *(undefined4 *)(puVar8 + 4) = param_2;
    *puVar8 = 0x900000004;
    puVar8[2] = 0x49434653;
    puVar8[3] = 0;
  }
  iVar5 = *param_1;
LAB_7100760f70:
  iVar5 = FUN_710076d0c0(iVar5);
  if (iVar5 == 0) {
    plVar4 = (long *)tpidrro_el0;
    if (*plVar4 < 0) {
      uVar3 = *(uint *)(plVar4 + 1);
      plVar9 = (long *)((long)plVar4 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar9 = (long *)((long)plVar4 + 0xc);
      }
      lVar7 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar9 = plVar4 + 1;
      lVar7 = 0;
    }
    piVar1 = (int *)((long)plVar4 +
                    ((long)plVar9 +
                     ((lVar7 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
                    0xfffffffffffffff0));
    iVar5 = 0x5f59;
    piVar2 = piVar1 + 4;
    if (iVar10 == 0) {
      piVar2 = piVar1;
    }
    if (((*piVar2 == 0x4f434653) && (iVar5 = piVar2[2], iVar5 == 0)) && (param_3 != (int *)0x0)) {
      *param_3 = piVar2[4];
    }
  }
  if (iVar6 != -1) {
    FUN_710076d6f0(0x7100d17580,iVar6);
  }
  return iVar5;
}



// ===== FUN_71007610d0 @ 71007610d0 (size=40) =====

undefined8 FUN_71007610d0(int *param_1,long param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    return 0x1159;
  }
  if (param_2 != 0) {
    uVar1 = FUN_710075f8e0(param_1,param_2,param_3,1);
    return uVar1;
  }
  return 0x1759;
}



// ===== FUN_7100761100 @ 7100761100 (size=24) =====

undefined8 FUN_7100761100(int *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_710075fa90(param_1,param_2,2);
    return uVar1;
  }
  return 0x1159;
}



// ===== FUN_7100761120 @ 7100761120 (size=24) =====

undefined8 FUN_7100761120(int *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_710075fa90(param_1,param_2,3);
    return uVar1;
  }
  return 0x1159;
}



// ===== FUN_7100761140 @ 7100761140 (size=64) =====

undefined8
FUN_7100761140(int *param_1,undefined4 *param_2,undefined4 *param_3,long param_4,int param_5)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    return 0x1159;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != 0 && param_5 != 0) {
    uVar1 = FUN_710075fdf0();
    return uVar1;
  }
  uVar1 = FUN_710075f750(param_1,8);
  return uVar1;
}



// ===== FUN_7100761180 @ 7100761180 (size=144) =====

undefined8 FUN_7100761180(long *param_1,uint param_2,uint param_3,long *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1759;
  if ((param_4 != (long *)0x0 && param_5 != (uint *)0x0) && param_1 != (long *)0x0) {
    lVar3 = (ulong)param_3 * 8;
    uVar4 = 0x1759;
    if ((((lVar3 + 0x10U <= (ulong)param_2) && (*param_1 == 0x4e4d684374726543)) &&
        (param_3 < *(uint *)(param_1 + 1))) &&
       (((uVar1 = *(uint *)((long)param_1 + lVar3 + 0x14), uVar1 < param_2 &&
         (uVar2 = *(uint *)(param_1 + (ulong)param_3 + 2), uVar2 <= param_2)) &&
        (uVar1 + uVar2 <= param_2)))) {
      uVar4 = 0;
      *param_4 = (long)param_1 + (ulong)uVar1;
      *param_5 = uVar2;
    }
  }
  return uVar4;
}



// ===== FUN_7100761210 @ 7100761210 (size=48) =====

undefined8 FUN_7100761210(int *param_1,long param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    return 0x1159;
  }
  if (param_2 != 0 && param_3 != 0) {
    uVar1 = FUN_710075fc20(param_1,param_2,param_3,param_4,10);
    return uVar1;
  }
  return 0x1759;
}



// ===== FUN_7100761240 @ 7100761240 (size=484) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100761240(int *param_1,long param_2,int param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  int iVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong *puVar13;
  
  iVar5 = *param_1;
  if (iVar5 == 0) {
    iVar10 = 0x1159;
  }
  else {
    iVar10 = 0x1759;
    if (param_2 != 0 && param_3 != 0) {
      if (iVar5 == _DAT_7100d175d8) {
        iVar6 = FUN_710076d640(0x7100d17580);
        uVar12 = 0xc;
        iVar10 = param_1[2];
        iVar4 = *(int *)((long)iVar6 * 4 + 0x7100d17580);
        iVar5 = *param_1;
        puVar11 = (ulong *)tpidrro_el0;
      }
      else {
        iVar10 = param_1[2];
        iVar4 = 0;
        puVar11 = (ulong *)tpidrro_el0;
        uVar8 = 0xc;
        if (iVar10 == 0) {
          uVar8 = 8;
        }
        uVar12 = (ulong)uVar8;
        iVar6 = -1;
      }
      *puVar11 = uVar12 << 0x20 | 0x100004;
      puVar13 = puVar11 + 4;
      if (iVar10 != 0) {
        puVar11[5] = 0;
        *(undefined4 *)(puVar11 + 4) = 0x100001;
        *(int *)((long)puVar11 + 0x24) = iVar10;
        puVar13 = puVar11 + 6;
      }
      if (iVar4 != 0) {
        iVar5 = iVar4;
      }
      *puVar13 = 0x49434653;
      puVar13[1] = 0xb;
      *(int *)(puVar11 + 1) = param_3;
      *(int *)((long)puVar11 + 0xc) = (int)param_2;
      uVar8 = (uint)((ulong)param_2 >> 0x20);
      *(uint *)(puVar11 + 2) = uVar8 << 0x1c | (uVar8 >> 4 & 0x3fffff) << 2;
      iVar5 = FUN_710076d0c0(iVar5);
      if (iVar5 == 0) {
        plVar3 = (long *)tpidrro_el0;
        if (*plVar3 < 0) {
          uVar8 = *(uint *)(plVar3 + 1);
          plVar9 = (long *)((long)plVar3 + 0x14);
          if ((uVar8 & 1) == 0) {
            plVar9 = (long *)((long)plVar3 + 0xc);
          }
          lVar7 = (((ulong)(uVar8 >> 1) & 0xf) + ((ulong)(uVar8 >> 5) & 0xf)) * 4;
        }
        else {
          plVar9 = plVar3 + 1;
          lVar7 = 0;
        }
        iVar5 = 0x5f59;
        piVar1 = (int *)((long)plVar3 +
                        ((long)plVar9 +
                         ((lVar7 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf &
                        0xfffffffffffffff0));
        piVar2 = piVar1 + 4;
        if (iVar10 == 0) {
          piVar2 = piVar1;
        }
        if (((*piVar2 == 0x4f434653) && (iVar5 = piVar2[2], iVar5 == 0)) && (param_4 != (int *)0x0))
        {
          *param_4 = piVar2[4];
        }
      }
      if (iVar6 != -1) {
        FUN_710076d6f0(0x7100d17580);
      }
      return iVar5;
    }
  }
  return iVar10;
}



// ===== FUN_7100761430 @ 7100761430 (size=24) =====

undefined8 FUN_7100761430(int *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_710075f5b0(param_1,param_2,0xc);
    return uVar1;
  }
  return 0x1159;
}



// ===== FUN_7100761450 @ 7100761450 (size=48) =====

undefined8 FUN_7100761450(int *param_1,long param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    return 0x1159;
  }
  if (param_2 != 0 && param_3 != 0) {
    uVar1 = FUN_710075fc20(param_1,param_2,param_3,param_4,0xd);
    return uVar1;
  }
  return 0x1759;
}



// ===== FUN_7100761480 @ 7100761480 (size=24) =====

undefined8 FUN_7100761480(int *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_710075f750(param_1,0xf);
    return uVar1;
  }
  return 0x1159;
}



// ===== FUN_71007614a0 @ 71007614a0 (size=24) =====

undefined8 FUN_71007614a0(int *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_710075fa90(param_1,param_2,0x11);
    return uVar1;
  }
  return 0x1159;
}



// ===== FUN_71007614c0 @ 71007614c0 (size=36) =====

undefined8 FUN_71007614c0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_7100760020(param_1,param_3,param_2,0x16);
    return uVar1;
  }
  return 0x1159;
}



// ===== FUN_71007614f0 @ 71007614f0 (size=636) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_71007614f0(void)

{
  undefined8 *puVar1;
  
  FUN_710076d240(0x7100d175f0);
  if (_DAT_7100d17614 == 0) {
LAB_7100761514:
    _DAT_7100d17610 = 0;
    _DAT_7100d17618 = 0;
    if (_DAT_7100d17624 == 0) goto LAB_710076152c;
LAB_71007615e8:
    _DAT_7100d17618 = 0;
    _DAT_7100d17610 = 0;
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 2;
    FUN_710076d0c0(_DAT_7100d17620 & 0xffffffff);
    if (_DAT_7100d17624 == 0) goto LAB_710076152c;
    FUN_710076d060(_DAT_7100d17620 & 0xffffffff);
    _DAT_7100d17620 = 0;
    _DAT_7100d17628 = 0;
    if (_DAT_7100d17634 != 0) goto LAB_7100761638;
LAB_7100761544:
    _DAT_7100d17630 = 0;
    _DAT_7100d17638 = 0;
    if (_DAT_7100d17644 == 0) goto LAB_710076155c;
LAB_7100761688:
    _DAT_7100d17638 = 0;
    _DAT_7100d17630 = 0;
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 2;
    FUN_710076d0c0(_DAT_7100d17640 & 0xffffffff);
    if (_DAT_7100d17644 == 0) goto LAB_710076155c;
    FUN_710076d060(_DAT_7100d17640 & 0xffffffff);
  }
  else {
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 2;
    FUN_710076d0c0(_DAT_7100d17610 & 0xffffffff);
    if (_DAT_7100d17614 == 0) goto LAB_7100761514;
    FUN_710076d060(_DAT_7100d17610 & 0xffffffff);
    _DAT_7100d17610 = 0;
    _DAT_7100d17618 = 0;
    if (_DAT_7100d17624 != 0) goto LAB_71007615e8;
LAB_710076152c:
    _DAT_7100d17620 = 0;
    _DAT_7100d17628 = 0;
    if (_DAT_7100d17634 == 0) goto LAB_7100761544;
LAB_7100761638:
    _DAT_7100d17628 = 0;
    _DAT_7100d17620 = 0;
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 2;
    FUN_710076d0c0(_DAT_7100d17630 & 0xffffffff);
    if (_DAT_7100d17634 == 0) goto LAB_7100761544;
    FUN_710076d060(_DAT_7100d17630 & 0xffffffff);
    _DAT_7100d17630 = 0;
    _DAT_7100d17638 = 0;
    if (_DAT_7100d17644 != 0) goto LAB_7100761688;
LAB_710076155c:
  }
  _DAT_7100d17648 = 0;
  _DAT_7100d17640 = 0;
  if (_DAT_7100d17654 != 0) {
    _DAT_7100d17648 = 0;
    _DAT_7100d17640 = 0;
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 2;
    FUN_710076d0c0(_DAT_7100d17650 & 0xffffffff);
    if (_DAT_7100d17654 != 0) {
      FUN_710076d060(_DAT_7100d17650 & 0xffffffff);
      goto joined_r0x007100761720;
    }
  }
joined_r0x007100761720:
  _DAT_7100d17658 = 0;
  _DAT_7100d17650 = 0;
  if (_DAT_7100d17664 != 0) {
    _DAT_7100d17658 = 0;
    _DAT_7100d17650 = 0;
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 2;
    FUN_710076d0c0(_DAT_7100d17660 & 0xffffffff);
    if (_DAT_7100d17664 != 0) {
      FUN_710076d060(_DAT_7100d17660 & 0xffffffff);
      _DAT_7100d17660 = 0;
      _DAT_7100d17668 = 0;
      return;
    }
  }
  _DAT_7100d17660 = 0;
  _DAT_7100d17668 = 0;
  return;
}



// ===== FUN_7100761770 @ 7100761770 (size=256) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100761770(int *param_1,undefined4 param_2)

{
  uint uVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  
  uVar4 = _DAT_7100d1766c;
  plVar2 = (long *)tpidrro_el0;
  *(undefined4 *)(plVar2 + 3) = param_2;
  *(undefined4 *)((long)plVar2 + 0x1c) = 0;
  uVar3 = _DAT_7100d17660;
  *plVar2 = 0x800000004;
  plVar2[2] = 0x49434653;
  uVar5 = FUN_710076d0c0(uVar3);
  if ((int)uVar5 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      lVar6 = (long)plVar2 + 0x14;
      if ((uVar1 & 1) == 0) {
        lVar6 = (long)plVar2 + 0xc;
      }
      plVar8 = (long *)(lVar6 + ((ulong)(uVar1 >> 1) & 0xf) * 4);
      lVar6 = ((ulong)(uVar1 >> 5) & 0xf) << 2;
    }
    else {
      plVar8 = plVar2 + 1;
      lVar6 = 0;
    }
    uVar5 = 0x5f59;
    uVar7 = (long)plVar8 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    if ((*(int *)((long)plVar2 + uVar7) == 0x4f434653) &&
       (uVar1 = *(uint *)((long)plVar2 + uVar7 + 8), uVar5 = (ulong)uVar1, uVar1 == 0)) {
      if ((int)*plVar8 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        return uVar5;
      }
      *param_1 = (int)*plVar8;
      *(undefined2 *)(param_1 + 3) = uVar4;
      param_1[1] = 1;
      param_1[2] = 0;
    }
  }
  return uVar5;
}



// ===== FUN_7100761870 @ 7100761870 (size=260) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_7100761870(long param_1,long *param_2)

{
  uint *puVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  byte local_30;
  byte bStack_2f;
  byte bStack_2e;
  byte bStack_2d;
  byte bStack_2c;
  byte bStack_2b;
  byte bStack_2a;
  byte bStack_29;
  byte bStack_28;
  byte bStack_27;
  byte bStack_26;
  byte bStack_25;
  byte bStack_24;
  byte bStack_23;
  byte bStack_22;
  byte bStack_21;
  byte local_10;
  byte bStack_f;
  byte bStack_e;
  byte bStack_d;
  byte bStack_c;
  byte bStack_b;
  byte bStack_a;
  byte bStack_9;
  byte bStack_8;
  byte bStack_7;
  byte bStack_6;
  byte bStack_5;
  byte bStack_4;
  byte bStack_3;
  byte bStack_2;
  byte bStack_1;
  
  do {
    puVar1 = _DAT_7100d17608 + (ulong)(*_DAT_7100d17608 & 1) * 6 + 2;
    lVar3 = *(long *)(puVar1 + 2);
    lVar6 = *(long *)(puVar1 + 4);
    DataMemoryBarrier(2,1);
  } while (*_DAT_7100d17608 != *_DAT_7100d17608);
  puVar2 = (uint *)((long)_DAT_7100d17608 + param_1);
  do {
    uVar4 = (ulong)(*puVar2 & 1);
    uVar8 = *(undefined8 *)(puVar2 + uVar4 * 8 + 6);
    uVar9 = *(undefined8 *)(puVar2 + uVar4 * 8 + 8);
    DataMemoryBarrier(2,1);
  } while (*puVar2 != *puVar2);
  local_30 = (byte)lVar3;
  bStack_2f = (byte)((ulong)lVar3 >> 8);
  bStack_2e = (byte)((ulong)lVar3 >> 0x10);
  bStack_2d = (byte)((ulong)lVar3 >> 0x18);
  bStack_2c = (byte)((ulong)lVar3 >> 0x20);
  bStack_2b = (byte)((ulong)lVar3 >> 0x28);
  bStack_2a = (byte)((ulong)lVar3 >> 0x30);
  bStack_29 = (byte)((ulong)lVar3 >> 0x38);
  bStack_28 = (byte)lVar6;
  bStack_27 = (byte)((ulong)lVar6 >> 8);
  bStack_26 = (byte)((ulong)lVar6 >> 0x10);
  bStack_25 = (byte)((ulong)lVar6 >> 0x18);
  bStack_24 = (byte)((ulong)lVar6 >> 0x20);
  bStack_23 = (byte)((ulong)lVar6 >> 0x28);
  bStack_22 = (byte)((ulong)lVar6 >> 0x30);
  bStack_21 = (byte)((ulong)lVar6 >> 0x38);
  uVar5 = 0xcc74;
  local_10 = (byte)uVar8;
  bStack_f = (byte)((ulong)uVar8 >> 8);
  bStack_e = (byte)((ulong)uVar8 >> 0x10);
  bStack_d = (byte)((ulong)uVar8 >> 0x18);
  bStack_c = (byte)((ulong)uVar8 >> 0x20);
  bStack_b = (byte)((ulong)uVar8 >> 0x28);
  bStack_a = (byte)((ulong)uVar8 >> 0x30);
  bStack_9 = (byte)((ulong)uVar8 >> 0x38);
  bStack_8 = (byte)uVar9;
  bStack_7 = (byte)((ulong)uVar9 >> 8);
  bStack_6 = (byte)((ulong)uVar9 >> 0x10);
  bStack_5 = (byte)((ulong)uVar9 >> 0x18);
  bStack_4 = (byte)((ulong)uVar9 >> 0x20);
  bStack_3 = (byte)((ulong)uVar9 >> 0x28);
  bStack_2 = (byte)((ulong)uVar9 >> 0x30);
  bStack_1 = (byte)((ulong)uVar9 >> 0x38);
  auVar7[0] = local_10 ^ local_30;
  auVar7[1] = bStack_f ^ bStack_2f;
  auVar7[2] = bStack_e ^ bStack_2e;
  auVar7[3] = bStack_d ^ bStack_2d;
  auVar7[4] = bStack_c ^ bStack_2c;
  auVar7[5] = bStack_b ^ bStack_2b;
  auVar7[6] = bStack_a ^ bStack_2a;
  auVar7[7] = bStack_9 ^ bStack_29;
  auVar7[8] = bStack_8 ^ bStack_28;
  auVar7[9] = bStack_7 ^ bStack_27;
  auVar7[10] = bStack_6 ^ bStack_26;
  auVar7[0xb] = bStack_5 ^ bStack_25;
  auVar7[0xc] = bStack_4 ^ bStack_24;
  auVar7[0xd] = bStack_3 ^ bStack_23;
  auVar7[0xe] = bStack_2 ^ bStack_22;
  auVar7[0xf] = bStack_1 ^ bStack_21;
  auVar7 = NEON_umaxp(auVar7,auVar7,4);
  if (auVar7._0_8_ == 0) {
    lVar3 = cntpct_el0;
    *param_2 = (long)(*(long *)puVar1 + (ulong)(lVar3 * 0x271) / 0xc) / 1000000000 +
               *(long *)(puVar2 + uVar4 * 8 + 2);
    uVar5 = 0;
  }
  return uVar5;
}



// ===== FUN_7100761980 @ 7100761980 (size=768) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100761980(void)

{
  bool bVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  
  FUN_7100749670(0x7100d175e8);
  iVar3 = _DAT_7100d175ec + 1;
  bVar1 = _DAT_7100d175ec != 0;
  _DAT_7100d175ec = iVar3;
  if (bVar1) goto LAB_7100761aac;
  if (DAT_7100af203c == 2) {
    iVar3 = FUN_710075e590(&DAT_7100d17660,0x733a656d6974);
  }
  else if (DAT_7100af203c < 3) {
    if (DAT_7100af203c == 0) {
      iVar3 = FUN_710075e590(&DAT_7100d17660,0x753a656d6974);
    }
    else {
      iVar3 = FUN_710075e590(&DAT_7100d17660,0x613a656d6974);
    }
  }
  else if (DAT_7100af203c == 3) {
    uVar4 = FUN_7100769b90();
    if (uVar4 < 0x90000) {
LAB_7100761b90:
      iVar3 = 0x4b59;
      goto LAB_71007619f0;
    }
    iVar3 = FUN_710075e590(&DAT_7100d17660,0x723a656d6974);
  }
  else {
    iVar3 = 0x1759;
    if (DAT_7100af203c != 4) goto LAB_71007619f0;
    uVar4 = FUN_7100769b90();
    if (uVar4 < 0x90000) goto LAB_7100761b90;
    iVar3 = FUN_710075e590(&DAT_7100d17660,0x75733a656d6974);
  }
  if (iVar3 == 0) {
    iVar3 = FUN_7100761770(&DAT_7100d17650,0);
    if (iVar3 == 0) {
      iVar3 = FUN_7100761770(&DAT_7100d17640,1);
      if (iVar3 == 0) {
        iVar3 = FUN_7100761770(&DAT_7100d17630,2);
        if (iVar3 == 0) {
          iVar3 = FUN_7100761770(&DAT_7100d17620,3);
          if (iVar3 == 0) {
            iVar3 = FUN_7100761770(&DAT_7100d17610,4);
            if (iVar3 == 0) {
              uVar4 = FUN_7100769b90();
              if (uVar4 < 0x60000) {
LAB_7100761aac:
                FUN_7100749740(0x7100d175e8);
                return 0;
              }
              plVar2 = (long *)tpidrro_el0;
              *plVar2 = 0x800000004;
              plVar2[2] = 0x49434653;
              plVar2[3] = 0x14;
              iVar3 = FUN_710076d0c0(_DAT_7100d17660);
              if (iVar3 == 0) {
                if (*plVar2 < 0) {
                  uVar4 = *(uint *)(plVar2 + 1);
                  uVar8 = uVar4 >> 1 & 0xf;
                  uVar5 = uVar4 >> 5 & 0xf;
                  plVar7 = (long *)((long)plVar2 + 0x14);
                  if ((uVar4 & 1) == 0) {
                    plVar7 = (long *)((long)plVar2 + 0xc);
                  }
                }
                else {
                  uVar5 = 0;
                  uVar8 = 0;
                  plVar7 = plVar2 + 1;
                }
                uVar6 = (long)plVar7 +
                        (((ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8 + (ulong)(uVar5 + uVar8) * 4) -
                        (long)plVar2) + 0xf & 0xfffffffffffffff0;
                if (*(int *)((long)plVar2 + uVar6) == 0x4f434653) {
                  iVar3 = *(int *)((long)plVar2 + uVar6 + 8);
                  if (iVar3 == 0) {
                    FUN_710076d170(0x7100d175f0,(int)*plVar7,0x1000,1);
                    iVar3 = FUN_710076d190(0x7100d175f0);
                    if (iVar3 == 0) goto LAB_7100761aac;
                  }
                }
                else {
                  iVar3 = 0x5f59;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_71007619f0:
  FUN_71007614f0();
  _DAT_7100d175ec = _DAT_7100d175ec + -1;
  FUN_7100749740(0x7100d175e8);
  return iVar3;
}



// ===== FUN_7100761c80 @ 7100761c80 (size=72) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100761c80(void)

{
  FUN_7100749670();
  if (_DAT_7100d175ec != 0) {
    _DAT_7100d175ec = _DAT_7100d175ec + -1;
    if (_DAT_7100d175ec == 0) {
      FUN_71007614f0();
    }
  }
  FUN_7100749740(0x7100d175e8);
  return;
}



// ===== FUN_7100761cd0 @ 7100761cd0 (size=56) =====

undefined1 * FUN_7100761cd0(int param_1)

{
  undefined1 *puVar1;
  
  if (param_1 == 0) {
    return &DAT_7100d17650;
  }
  if (param_1 != 1) {
    puVar1 = &DAT_7100d17610;
    if (param_1 != 2) {
      puVar1 = (undefined1 *)0x0;
    }
    return puVar1;
  }
  return &DAT_7100d17640;
}



// ===== FUN_7100761d10 @ 7100761d10 (size=372) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100761d10(long *param_1)

{
  uint *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  if (_DAT_7100d17608 == (uint *)0x0) {
    plVar3 = (long *)tpidrro_el0;
    *plVar3 = 0x800000004;
    plVar3[2] = 0x49434653;
    plVar3[3] = 0;
    uVar5 = FUN_710076d0c0(_DAT_7100d17630);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if (*plVar3 < 0) {
      uVar2 = *(uint *)(plVar3 + 1);
      plVar6 = (long *)((long)plVar3 + 0x14);
      if ((uVar2 & 1) == 0) {
        plVar6 = (long *)((long)plVar3 + 0xc);
      }
      lVar8 = (((ulong)(uVar2 >> 1) & 0xf) + ((ulong)(uVar2 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar3 + 1;
      lVar8 = 0;
    }
    uVar5 = (long)plVar6 + ((lVar8 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf
            & 0xfffffffffffffff0;
    if (*(int *)((long)plVar3 + uVar5) != 0x4f434653) {
      return 0x5f59;
    }
    uVar2 = *(uint *)((long)plVar3 + uVar5 + 8);
    if (uVar2 != 0) {
      return (ulong)uVar2;
    }
    if (param_1 != (long *)0x0) {
      lVar8 = *(long *)((long)plVar3 + uVar5 + 0x18);
      lVar7 = *(long *)((long)plVar3 + uVar5 + 0x20);
      *param_1 = *(long *)((long)plVar3 + uVar5 + 0x10);
      param_1[1] = lVar8;
      param_1[2] = lVar7;
    }
  }
  else {
    do {
      puVar1 = _DAT_7100d17608 + (ulong)(*_DAT_7100d17608 & 1) * 6 + 2;
      lVar8 = *(long *)(puVar1 + 2);
      lVar7 = *(long *)(puVar1 + 4);
      DataMemoryBarrier(2,1);
    } while (*_DAT_7100d17608 != *_DAT_7100d17608);
    lVar4 = cntpct_el0;
    *param_1 = (long)(*(long *)puVar1 + (ulong)(lVar4 * 0x271) / 0xc) / 1000000000;
    param_1[1] = lVar8;
    param_1[2] = lVar7;
  }
  return 0;
}



// ===== FUN_7100761e90 @ 7100761e90 (size=252) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100761e90(int param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if (_DAT_7100d17608 == 0) {
    puVar5 = (undefined4 *)FUN_7100761cd0();
    uVar4 = 0x1759;
    if (puVar5 != (undefined4 *)0x0) {
      uVar1 = *puVar5;
      plVar3 = (long *)tpidrro_el0;
      *plVar3 = 0x800000004;
      plVar3[2] = 0x49434653;
      plVar3[3] = 0;
      uVar4 = FUN_710076d0c0(uVar1);
      if ((int)uVar4 == 0) {
        if (*plVar3 < 0) {
          uVar2 = *(uint *)(plVar3 + 1);
          plVar6 = (long *)((long)plVar3 + 0x14);
          if ((uVar2 & 1) == 0) {
            plVar6 = (long *)((long)plVar3 + 0xc);
          }
          lVar8 = (((ulong)(uVar2 >> 1) & 0xf) + ((ulong)(uVar2 >> 5) & 0xf)) * 4;
        }
        else {
          plVar6 = plVar3 + 1;
          lVar8 = 0;
        }
        uVar7 = (long)plVar6 +
                ((lVar8 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf &
                0xfffffffffffffff0;
        uVar4 = 0x5f59;
        if (((*(int *)((long)plVar3 + uVar7) == 0x4f434653) &&
            (uVar2 = *(uint *)((long)plVar3 + uVar7 + 8), uVar4 = (ulong)uVar2, uVar2 == 0)) &&
           (param_2 != (undefined8 *)0x0)) {
          *param_2 = *(undefined8 *)((long)plVar3 + uVar7 + 0x10);
        }
      }
    }
    return uVar4;
  }
  if (param_1 != 1) {
    uVar4 = FUN_7100761870(0x38);
    return uVar4;
  }
  uVar4 = FUN_7100761870(0x80);
  return uVar4;
}



// ===== FUN_7100761f90 @ 7100761f90 (size=224) =====

ulong FUN_7100761f90(undefined8 param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  puVar3 = (undefined4 *)FUN_7100761cd0();
  if (puVar3 != (undefined4 *)0x0) {
    plVar2 = (long *)tpidrro_el0;
    *plVar2 = 0xa00000004;
    plVar2[4] = param_2;
    plVar2[2] = 0x49434653;
    plVar2[3] = 1;
    uVar4 = FUN_710076d0c0(*puVar3);
    if ((int)uVar4 == 0) {
      if (*plVar2 < 0) {
        uVar1 = *(uint *)(plVar2 + 1);
        plVar5 = (long *)((long)plVar2 + 0x14);
        if ((uVar1 & 1) == 0) {
          plVar5 = (long *)((long)plVar2 + 0xc);
        }
        lVar7 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
      }
      else {
        plVar5 = plVar2 + 1;
        lVar7 = 0;
      }
      uVar6 = (long)plVar5 +
              ((lVar7 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf &
              0xfffffffffffffff0;
      uVar4 = 0x5f59;
      if (*(int *)((long)plVar2 + uVar6) == 0x4f434653) {
        uVar4 = (ulong)*(uint *)((long)plVar2 + uVar6 + 8);
      }
    }
    return uVar4;
  }
  return 0x1759;
}



// ===== FUN_7100762070 @ 7100762070 (size=240) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100762070(undefined8 *param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (_DAT_7100d17620 != 0) {
    plVar2 = (long *)tpidrro_el0;
    *plVar2 = 0x800000004;
    plVar2[2] = 0x49434653;
    plVar2[3] = 0;
    uVar3 = FUN_710076d0c0();
    if ((int)uVar3 == 0) {
      if (*plVar2 < 0) {
        uVar1 = *(uint *)(plVar2 + 1);
        plVar5 = (long *)((long)plVar2 + 0x14);
        if ((uVar1 & 1) == 0) {
          plVar5 = (long *)((long)plVar2 + 0xc);
        }
        lVar4 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
      }
      else {
        plVar5 = plVar2 + 1;
        lVar4 = 0;
      }
      uVar3 = 0x5f59;
      uVar6 = (long)plVar5 +
              ((lVar4 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf &
              0xfffffffffffffff0;
      if (((*(int *)((long)plVar2 + uVar6) == 0x4f434653) &&
          (uVar1 = *(uint *)((long)plVar2 + uVar6 + 8), uVar3 = (ulong)uVar1, uVar1 == 0)) &&
         (param_1 != (undefined8 *)0x0)) {
        uVar9 = *(undefined8 *)((long)plVar2 + uVar6 + 0x10);
        uVar10 = *(undefined8 *)((long)plVar2 + uVar6 + 0x18);
        uVar8 = *(undefined8 *)((long)plVar2 + uVar6 + 0x28);
        uVar7 = *(undefined8 *)((long)plVar2 + uVar6 + 0x20);
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)((long)plVar2 + uVar6 + 0x30);
        *param_1 = uVar9;
        param_1[1] = uVar10;
        param_1[3] = uVar8;
        param_1[2] = uVar7;
      }
    }
    return uVar3;
  }
  return 0x1159;
}



// ===== FUN_7100762160 @ 7100762160 (size=264) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100762160(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (_DAT_7100d17620 != 0) {
    plVar2 = (long *)tpidrro_el0;
    plVar2[4] = param_1;
    *plVar2 = 0xa00000004;
    plVar2[2] = 0x49434653;
    plVar2[3] = 0x65;
    uVar3 = FUN_710076d0c0();
    if ((int)uVar3 == 0) {
      if (*plVar2 < 0) {
        uVar1 = *(uint *)(plVar2 + 1);
        plVar4 = (long *)((long)plVar2 + 0x14);
        if ((uVar1 & 1) == 0) {
          plVar4 = (long *)((long)plVar2 + 0xc);
        }
        lVar6 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
      }
      else {
        plVar4 = plVar2 + 1;
        lVar6 = 0;
      }
      uVar5 = (long)plVar4 +
              ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf &
              0xfffffffffffffff0;
      uVar3 = 0x5f59;
      if ((*(int *)((long)plVar2 + uVar5) == 0x4f434653) &&
         (uVar1 = *(uint *)((long)plVar2 + uVar5 + 8), uVar3 = (ulong)uVar1, uVar1 == 0)) {
        uVar7 = *(undefined8 *)((long)plVar2 + uVar5 + 0x18);
        uVar8 = *(undefined8 *)((long)plVar2 + uVar5 + 0x20);
        uVar9 = *(undefined8 *)((long)plVar2 + uVar5 + 0x28);
        if (param_2 != (undefined8 *)0x0) {
          *param_2 = *(undefined8 *)((long)plVar2 + uVar5 + 0x10);
        }
        if (param_3 != (undefined8 *)0x0) {
          *param_3 = uVar7;
          param_3[1] = uVar8;
          param_3[2] = uVar9;
        }
      }
    }
    return uVar3;
  }
  return 0x1159;
}



// ===== FUN_7100762270 @ 7100762270 (size=276) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100762270(long *param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined2 uVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  iVar4 = _DAT_7100d17620;
  if (_DAT_7100d17620 != 0) {
    plVar3 = (long *)tpidrro_el0;
    *plVar3 = 0xc0b00000004;
    *(int *)((long)plVar3 + 0x34) = (int)param_2;
    uVar2 = (undefined2)(param_3 << 3);
    *(undefined2 *)(plVar3 + 6) = uVar2;
    plVar3[2] = 0x49434653;
    plVar3[3] = 0xca;
    *(short *)(plVar3 + 7) = (short)((ulong)param_2 >> 0x20);
    *(undefined2 *)((long)plVar3 + 0x3a) = uVar2;
    plVar3[4] = *param_1;
    uVar5 = FUN_710076d0c0(iVar4);
    if ((int)uVar5 == 0) {
      if (*plVar3 < 0) {
        uVar1 = *(uint *)(plVar3 + 1);
        plVar6 = (long *)((long)plVar3 + 0x14);
        if ((uVar1 & 1) == 0) {
          plVar6 = (long *)((long)plVar3 + 0xc);
        }
        lVar8 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
      }
      else {
        plVar6 = plVar3 + 1;
        lVar8 = 0;
      }
      uVar7 = (long)plVar6 +
              ((lVar8 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf &
              0xfffffffffffffff0;
      uVar5 = 0x5f59;
      if (((*(int *)((long)plVar3 + uVar7) == 0x4f434653) &&
          (uVar1 = *(uint *)((long)plVar3 + uVar7 + 8), uVar5 = (ulong)uVar1, uVar1 == 0)) &&
         (param_4 != (undefined4 *)0x0)) {
        *param_4 = *(undefined4 *)((long)plVar3 + uVar7 + 0x10);
      }
    }
    return uVar5;
  }
  return 0x1159;
}



// ===== FUN_71007627a0 @ 71007627a0 (size=500) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_71007627a0(int *param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  
  uVar6 = FUN_7100769b90();
  if (uVar6 < 0x50000) {
    return 0x4b59;
  }
  uVar6 = FUN_7100769b90();
  uVar5 = _DAT_7100d1878c;
  iVar4 = _DAT_7100d18788;
  iVar3 = _DAT_7100d18780;
  puVar1 = (undefined8 *)tpidrro_el0;
  iVar7 = (uVar6 < 0xb0000) + 1;
  if (_DAT_7100d18788 == 0) {
    *puVar1 = 0x900000004;
    *(int *)(puVar1 + 3) = iVar7;
    *(undefined4 *)((long)puVar1 + 0x1c) = 0;
    puVar1[2] = 0x49434653;
    *(undefined1 *)(puVar1 + 4) = param_2;
    uVar8 = FUN_710076d0c0(iVar3);
    iVar7 = (int)uVar8;
  }
  else {
    puVar1[3] = 0;
    *puVar1 = 0xd00000004;
    *(undefined4 *)(puVar1 + 2) = 0x110001;
    *(int *)((long)puVar1 + 0x14) = iVar4;
    *(int *)(puVar1 + 5) = iVar7;
    *(undefined4 *)((long)puVar1 + 0x2c) = 0;
    puVar1[4] = 0x49434653;
    *(undefined1 *)(puVar1 + 6) = param_2;
    uVar8 = FUN_710076d0c0(iVar3);
    iVar7 = (int)uVar8;
  }
  if (iVar7 != 0) {
    return uVar8;
  }
  plVar2 = (long *)tpidrro_el0;
  if (*plVar2 < 0) {
    uVar6 = *(uint *)(plVar2 + 1);
    lVar10 = (long)plVar2 + 0x14;
    if ((uVar6 & 1) == 0) {
      lVar10 = (long)plVar2 + 0xc;
    }
    plVar11 = (long *)(lVar10 + ((ulong)(uVar6 >> 1) & 0xf) * 4);
    lVar10 = ((ulong)(uVar6 >> 5) & 0xf) << 2;
  }
  else {
    plVar11 = plVar2 + 1;
    lVar10 = 0;
  }
  uVar9 = (long)plVar11 + ((lVar10 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
          & 0xfffffffffffffff0;
  if (iVar4 == 0) {
    if (*(int *)((long)plVar2 + uVar9) != 0x4f434653) {
      return 0x5f59;
    }
    uVar6 = *(uint *)((long)plVar2 + uVar9 + 8);
    if (uVar6 != 0) goto LAB_7100762988;
    if ((int)*plVar11 != 0) {
      *param_1 = (int)*plVar11;
      *(undefined2 *)(param_1 + 3) = uVar5;
      param_1[1] = 1;
      param_1[2] = 0;
      return uVar8;
    }
  }
  else {
    if (*(int *)((long)plVar2 + uVar9 + 0x10) != 0x4f434653) {
      return 0x5f59;
    }
    uVar6 = *(uint *)((long)plVar2 + uVar9 + 0x18);
    if (uVar6 != 0) {
LAB_7100762988:
      return (ulong)uVar6;
    }
    iVar7 = *(int *)((long)plVar2 + uVar9 + 0x20);
    if (iVar7 != 0) {
      *param_1 = iVar3;
      param_1[1] = 0;
      param_1[2] = iVar7;
      *(undefined2 *)(param_1 + 3) = uVar5;
      return uVar8;
    }
  }
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return uVar8;
}



// ===== FUN_71007629a0 @ 71007629a0 (size=376) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_71007629a0(undefined1 *param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  
  uVar7 = FUN_7100769b90();
  if (0x4ffff < uVar7) {
    uVar7 = FUN_7100769b90();
    iVar6 = _DAT_7100d18788;
    uVar5 = _DAT_7100d18780;
    puVar3 = (undefined8 *)tpidrro_el0;
    if (_DAT_7100d18788 == 0) {
      puVar10 = puVar3 + 4;
      *puVar3 = 0x800100004;
    }
    else {
      puVar3[5] = 0;
      *puVar3 = 0xc00100004;
      *(undefined4 *)(puVar3 + 4) = 0x100001;
      *(int *)((long)puVar3 + 0x24) = iVar6;
      puVar10 = puVar3 + 6;
    }
    *(uint *)(puVar10 + 1) = (uVar7 < 0xb0000) + 5;
    *(undefined4 *)((long)puVar10 + 0xc) = 0;
    *puVar10 = 0x49434653;
    *(undefined4 *)(puVar3 + 1) = 0x82;
    *(int *)((long)puVar3 + 0xc) = (int)param_2;
    uVar7 = (uint)((ulong)param_2 >> 0x20);
    *(uint *)(puVar3 + 2) = uVar7 << 0x1c | (uVar7 >> 4 & 0x3fffff) << 2;
    uVar8 = FUN_710076d0c0(uVar5);
    if ((int)uVar8 == 0) {
      plVar4 = (long *)tpidrro_el0;
      if (*plVar4 < 0) {
        uVar7 = *(uint *)(plVar4 + 1);
        plVar11 = (long *)((long)plVar4 + 0x14);
        if ((uVar7 & 1) == 0) {
          plVar11 = (long *)((long)plVar4 + 0xc);
        }
        lVar9 = (((ulong)(uVar7 >> 1) & 0xf) + ((ulong)(uVar7 >> 5) & 0xf)) * 4;
      }
      else {
        plVar11 = plVar4 + 1;
        lVar9 = 0;
      }
      piVar1 = (int *)((long)plVar4 +
                      ((long)plVar11 +
                       ((lVar9 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
                      0xfffffffffffffff0));
      piVar2 = piVar1 + 4;
      if (iVar6 == 0) {
        piVar2 = piVar1;
      }
      uVar8 = 0x5f59;
      if (((*piVar2 == 0x4f434653) && (uVar8 = (ulong)(uint)piVar2[2], piVar2[2] == 0)) &&
         (param_1 != (undefined1 *)0x0)) {
        *param_1 = (char)piVar2[4];
      }
    }
    return uVar8;
  }
  return 0x4b59;
}



// ===== FUN_7100762b20 @ 7100762b20 (size=204) =====

ulong FUN_7100762b20(undefined4 *param_1,undefined1 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  uVar1 = param_1[2];
  plVar3 = (long *)tpidrro_el0;
  *plVar3 = 0xd00000004;
  *(undefined4 *)(plVar3 + 5) = param_3;
  *(undefined4 *)((long)plVar3 + 0x2c) = 0;
  *(undefined4 *)(plVar3 + 2) = 0x110001;
  *(undefined4 *)((long)plVar3 + 0x14) = uVar1;
  *(undefined1 *)(plVar3 + 6) = param_2;
  plVar3[3] = 0;
  plVar3[4] = 0x49434653;
  uVar4 = FUN_710076d0c0(*param_1);
  if ((int)uVar4 == 0) {
    if (*plVar3 < 0) {
      uVar2 = *(uint *)(plVar3 + 1);
      plVar5 = (long *)((long)plVar3 + 0x14);
      if ((uVar2 & 1) == 0) {
        plVar5 = (long *)((long)plVar3 + 0xc);
      }
      lVar7 = (((ulong)(uVar2 >> 1) & 0xf) + ((ulong)(uVar2 >> 5) & 0xf)) * 4;
    }
    else {
      plVar5 = plVar3 + 1;
      lVar7 = 0;
    }
    uVar6 = (long)plVar5 + ((lVar7 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf
            & 0xfffffffffffffff0;
    uVar4 = 0x5f59;
    if (*(int *)((long)plVar3 + uVar6 + 0x10) == 0x4f434653) {
      uVar4 = (ulong)*(uint *)((long)plVar3 + uVar6 + 0x18);
    }
  }
  return uVar4;
}



// ===== FUN_7100762bf0 @ 7100762bf0 (size=272) =====

ulong FUN_7100762bf0(undefined4 *param_1,long param_2,ulong param_3,undefined4 *param_4,
                    undefined4 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  FUN_710076cf64(param_2,param_3);
  uVar1 = param_1[2];
  plVar3 = (long *)tpidrro_el0;
  *plVar3 = 0x1000000004;
  *(undefined4 *)(plVar3 + 5) = param_5;
  *(undefined4 *)((long)plVar3 + 0x2c) = 0;
  *(undefined4 *)(plVar3 + 2) = 0x200001;
  *(undefined4 *)((long)plVar3 + 0x14) = uVar1;
  plVar3[6] = param_3 & 0xffffffff;
  plVar3[7] = param_2;
  plVar3[3] = 0;
  plVar3[4] = 0x49434653;
  uVar4 = FUN_710076d0c0(*param_1);
  if ((int)uVar4 == 0) {
    if (*plVar3 < 0) {
      uVar2 = *(uint *)(plVar3 + 1);
      plVar5 = (long *)((long)plVar3 + 0x14);
      if ((uVar2 & 1) == 0) {
        plVar5 = (long *)((long)plVar3 + 0xc);
      }
      lVar7 = (((ulong)(uVar2 >> 1) & 0xf) + ((ulong)(uVar2 >> 5) & 0xf)) * 4;
    }
    else {
      plVar5 = plVar3 + 1;
      lVar7 = 0;
    }
    uVar6 = (long)plVar5 + ((lVar7 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf
            & 0xfffffffffffffff0;
    uVar4 = 0x5f59;
    if (((*(int *)((long)plVar3 + uVar6 + 0x10) == 0x4f434653) &&
        (uVar2 = *(uint *)((long)plVar3 + uVar6 + 0x18), uVar4 = (ulong)uVar2, uVar2 == 0)) &&
       (param_4 != (undefined4 *)0x0)) {
      *param_4 = *(undefined4 *)((long)plVar3 + uVar6 + 0x20);
    }
  }
  return uVar4;
}



// ===== FUN_7100762d00 @ 7100762d00 (size=244) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100762d00(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  uVar4 = _DAT_7100d18788;
  uVar3 = _DAT_7100d18780;
  plVar2 = (long *)tpidrro_el0;
  *(undefined4 *)(plVar2 + 7) = param_3;
  *(undefined4 *)((long)plVar2 + 0x3c) = 0;
  uVar1 = (uint)((ulong)param_1 >> 0x20);
  *(int *)(plVar2 + 1) = (int)param_2;
  *(int *)((long)plVar2 + 0xc) = (int)param_1;
  *plVar2 = 0xc00100004;
  *(undefined4 *)(plVar2 + 4) = 0x100001;
  *(undefined4 *)((long)plVar2 + 0x24) = uVar4;
  *(uint *)(plVar2 + 2) =
       (uVar1 >> 4 & 0x3fffff) << 2 | ((uint)((ulong)param_2 >> 0x20) & 0xf) << 0x18 | uVar1 << 0x1c
  ;
  plVar2[5] = 0;
  plVar2[6] = 0x49434653;
  uVar5 = FUN_710076d0c0(uVar3);
  if ((int)uVar5 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar6 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar6 = (long *)((long)plVar2 + 0xc);
      }
      lVar8 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar2 + 1;
      lVar8 = 0;
    }
    uVar7 = (long)plVar6 + ((lVar8 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar5 = 0x5f59;
    if (*(int *)((long)plVar2 + uVar7 + 0x10) == 0x4f434653) {
      uVar5 = (ulong)*(uint *)((long)plVar2 + uVar7 + 0x18);
    }
  }
  return uVar5;
}



// ===== FUN_7100762e00 @ 7100762e00 (size=228) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100762e00(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar4 = _DAT_7100d18788;
  uVar3 = _DAT_7100d18780;
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0xc00000004;
  *(undefined4 *)(plVar2 + 5) = param_2;
  *(undefined4 *)((long)plVar2 + 0x2c) = 0;
  *(undefined4 *)(plVar2 + 2) = 0x100001;
  *(undefined4 *)((long)plVar2 + 0x14) = uVar4;
  plVar2[3] = 0;
  plVar2[4] = 0x49434653;
  uVar5 = FUN_710076d0c0(uVar3);
  if ((int)uVar5 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar7 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar7 = (long *)((long)plVar2 + 0xc);
      }
      lVar6 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar7 = plVar2 + 1;
      lVar6 = 0;
    }
    uVar5 = 0x5f59;
    uVar8 = (long)plVar7 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    if (((*(int *)((long)plVar2 + uVar8 + 0x10) == 0x4f434653) &&
        (uVar1 = *(uint *)((long)plVar2 + uVar8 + 0x18), uVar5 = (ulong)uVar1, uVar1 == 0)) &&
       (param_1 != (undefined4 *)0x0)) {
      *param_1 = *(undefined4 *)((long)plVar2 + uVar8 + 0x20);
    }
  }
  return uVar5;
}



// ===== FUN_7100762ef0 @ 7100762ef0 (size=656) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100762ef0(void)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  
  uVar4 = FUN_7100769b90();
  uVar3 = _DAT_7100d18788;
  uVar2 = _DAT_7100d18780;
  if (uVar4 < 0xb0000) {
    plVar1 = (long *)tpidrro_el0;
    *plVar1 = 0xd00000004;
    plVar1[5] = 0;
    *(undefined4 *)(plVar1 + 2) = 0x140001;
    *(undefined4 *)((long)plVar1 + 0x14) = uVar3;
    plVar1[3] = 0;
    plVar1[4] = 0x49434653;
    *(undefined4 *)(plVar1 + 6) = 2;
    uVar5 = FUN_710076d0c0(uVar2);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if (*plVar1 < 0) {
      uVar4 = *(uint *)(plVar1 + 1);
      plVar6 = (long *)((long)plVar1 + 0x14);
      if ((uVar4 & 1) == 0) {
        plVar6 = (long *)((long)plVar1 + 0xc);
      }
      lVar7 = (((ulong)(uVar4 >> 1) & 0xf) + ((ulong)(uVar4 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar1 + 1;
      lVar7 = 0;
    }
    uVar5 = (long)plVar6 + ((lVar7 + (ulong)((uint)*plVar1 >> 0x10 & 0xf) * 8) - (long)plVar1) + 0xf
            & 0xfffffffffffffff0;
    if (*(int *)((long)plVar1 + uVar5 + 0x10) == 0x4f434653) {
      uVar4 = *(uint *)((long)plVar1 + uVar5 + 0x18);
      if (uVar4 != 0) {
        return (ulong)uVar4;
      }
      plVar1 = (long *)tpidrro_el0;
      *(undefined4 *)((long)plVar1 + 0x14) = _DAT_7100d18788;
      plVar1[3] = 0;
      plVar1[4] = 0x49434653;
      plVar1[5] = 1;
      *plVar1 = -0x7ffffff3fffffffc;
      plVar1[1] = -0x7ffefffffffe;
      *(undefined4 *)(plVar1 + 2) = 0x100001;
      uVar5 = FUN_710076d0c0(_DAT_7100d18780);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      if (*plVar1 < 0) {
        uVar4 = *(uint *)(plVar1 + 1);
        plVar6 = (long *)((long)plVar1 + 0x14);
        if ((uVar4 & 1) == 0) {
          plVar6 = (long *)((long)plVar1 + 0xc);
        }
        lVar7 = (((ulong)(uVar4 >> 1) & 0xf) + ((ulong)(uVar4 >> 5) & 0xf)) * 4;
      }
      else {
        plVar6 = plVar1 + 1;
        lVar7 = 0;
      }
      uVar5 = (long)plVar6 +
              ((lVar7 + (ulong)((uint)*plVar1 >> 0x10 & 0xf) * 8) - (long)plVar1) + 0xf &
              0xfffffffffffffff0;
      if (*(int *)((long)plVar1 + uVar5 + 0x10) == 0x4f434653) {
        return (ulong)*(uint *)((long)plVar1 + uVar5 + 0x18);
      }
    }
  }
  else {
    plVar1 = (long *)tpidrro_el0;
    *plVar1 = -0x7ffffff2fffffffc;
    plVar1[1] = -0x7ffefffffffe;
    *(undefined4 *)(plVar1 + 2) = 0x140001;
    *(undefined4 *)((long)plVar1 + 0x14) = uVar3;
    plVar1[5] = 0;
    plVar1[3] = 0;
    plVar1[4] = 0x49434653;
    *(undefined4 *)(plVar1 + 6) = 2;
    uVar5 = FUN_710076d0c0(uVar2);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if (*plVar1 < 0) {
      uVar4 = *(uint *)(plVar1 + 1);
      plVar6 = (long *)((long)plVar1 + 0x14);
      if ((uVar4 & 1) == 0) {
        plVar6 = (long *)((long)plVar1 + 0xc);
      }
      lVar7 = (((ulong)(uVar4 >> 1) & 0xf) + ((ulong)(uVar4 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar1 + 1;
      lVar7 = 0;
    }
    uVar5 = (long)plVar6 + ((lVar7 + (ulong)((uint)*plVar1 >> 0x10 & 0xf) * 8) - (long)plVar1) + 0xf
            & 0xfffffffffffffff0;
    if (*(int *)((long)plVar1 + uVar5 + 0x10) == 0x4f434653) {
      return (ulong)*(uint *)((long)plVar1 + uVar5 + 0x18);
    }
  }
  return 0x5f59;
}



// ===== FUN_7100763180 @ 7100763180 (size=244) =====

int FUN_7100763180(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  
  plVar4 = (long *)tpidrro_el0;
  uVar1 = param_1[2];
  uVar2 = *param_1;
  *(undefined4 *)(plVar4 + 5) = param_3;
  *(undefined4 *)((long)plVar4 + 0x2c) = 0;
  *plVar4 = 0xc00000004;
  *(undefined4 *)(plVar4 + 2) = 0x100001;
  *(undefined4 *)((long)plVar4 + 0x14) = uVar1;
  plVar4[3] = 0;
  plVar4[4] = 0x49434653;
  iVar5 = FUN_710076d0c0(uVar2);
  if (iVar5 == 0) {
    if (*plVar4 < 0) {
      uVar3 = *(uint *)(plVar4 + 1);
      plVar7 = (long *)((long)plVar4 + 0x14);
      if ((uVar3 & 1) == 0) {
        plVar7 = (long *)((long)plVar4 + 0xc);
      }
      lVar8 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
    }
    else {
      plVar7 = plVar4 + 1;
      lVar8 = 0;
    }
    iVar5 = 0x5f59;
    uVar6 = (long)plVar7 + ((lVar8 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf
            & 0xfffffffffffffff0;
    if ((*(int *)((long)plVar4 + uVar6 + 0x10) == 0x4f434653) &&
       (iVar5 = *(int *)((long)plVar4 + uVar6 + 0x18), iVar5 == 0)) {
      FUN_7100749590(param_2,(int)*plVar7,0);
    }
  }
  return iVar5;
}



// ===== FUN_7100763280 @ 7100763280 (size=244) =====

ulong FUN_7100763280(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0xc00000004;
  *(undefined4 *)(plVar2 + 5) = param_4;
  *(undefined4 *)((long)plVar2 + 0x2c) = 0;
  *(undefined4 *)(plVar2 + 2) = 0x100001;
  *(undefined4 *)((long)plVar2 + 0x14) = param_2;
  plVar2[3] = 0;
  plVar2[4] = 0x49434653;
  uVar3 = FUN_710076d0c0();
  if ((int)uVar3 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar4 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar4 = (long *)((long)plVar2 + 0xc);
      }
      lVar6 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar4 = plVar2 + 1;
      lVar6 = 0;
    }
    uVar5 = (long)plVar4 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar3 = 0x5f59;
    if (((*(int *)((long)plVar2 + uVar5 + 0x10) == 0x4f434653) &&
        (uVar1 = *(uint *)((long)plVar2 + uVar5 + 0x18), uVar3 = (ulong)uVar1, uVar1 == 0)) &&
       (param_3 != (undefined8 *)0x0)) {
      uVar17 = *(undefined8 *)((long)plVar2 + uVar5 + 0x68);
      uVar16 = *(undefined8 *)((long)plVar2 + uVar5 + 0x78);
      uVar15 = *(undefined8 *)((long)plVar2 + uVar5 + 0x70);
      uVar10 = *(undefined8 *)((long)plVar2 + uVar5 + 0x28);
      uVar9 = *(undefined8 *)((long)plVar2 + uVar5 + 0x20);
      uVar8 = *(undefined8 *)((long)plVar2 + uVar5 + 0x38);
      uVar7 = *(undefined8 *)((long)plVar2 + uVar5 + 0x30);
      uVar14 = *(undefined8 *)((long)plVar2 + uVar5 + 0x48);
      uVar13 = *(undefined8 *)((long)plVar2 + uVar5 + 0x40);
      uVar12 = *(undefined8 *)((long)plVar2 + uVar5 + 0x58);
      uVar11 = *(undefined8 *)((long)plVar2 + uVar5 + 0x50);
      param_3[8] = *(undefined8 *)((long)plVar2 + uVar5 + 0x60);
      param_3[9] = uVar17;
      param_3[0xb] = uVar16;
      param_3[10] = uVar15;
      param_3[1] = uVar10;
      *param_3 = uVar9;
      param_3[3] = uVar8;
      param_3[2] = uVar7;
      param_3[5] = uVar14;
      param_3[4] = uVar13;
      param_3[7] = uVar12;
      param_3[6] = uVar11;
      uVar9 = *(undefined8 *)((long)plVar2 + uVar5 + 0x80);
      uVar10 = *(undefined8 *)((long)plVar2 + uVar5 + 0x88);
      uVar8 = *(undefined8 *)((long)plVar2 + uVar5 + 0x98);
      uVar7 = *(undefined8 *)((long)plVar2 + uVar5 + 0x90);
      *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)((long)plVar2 + uVar5 + 0xa0);
      param_3[0xc] = uVar9;
      param_3[0xd] = uVar10;
      param_3[0xf] = uVar8;
      param_3[0xe] = uVar7;
    }
  }
  return uVar3;
}



// ===== FUN_7100763380 @ 7100763380 (size=192) =====

ulong FUN_7100763380(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0xc00000004;
  *(undefined4 *)(plVar2 + 5) = param_3;
  *(undefined4 *)((long)plVar2 + 0x2c) = 0;
  *(undefined4 *)(plVar2 + 2) = 0x100001;
  *(undefined4 *)((long)plVar2 + 0x14) = param_2;
  plVar2[3] = 0;
  plVar2[4] = 0x49434653;
  uVar3 = FUN_710076d0c0();
  if ((int)uVar3 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar4 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar4 = (long *)((long)plVar2 + 0xc);
      }
      lVar6 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar4 = plVar2 + 1;
      lVar6 = 0;
    }
    uVar5 = (long)plVar4 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar3 = 0x5f59;
    if (*(int *)((long)plVar2 + uVar5 + 0x10) == 0x4f434653) {
      uVar3 = (ulong)*(uint *)((long)plVar2 + uVar5 + 0x18);
    }
  }
  return uVar3;
}



// ===== FUN_7100763440 @ 7100763440 (size=108) =====

undefined8 * FUN_7100763440(uint param_1)

{
  long lVar1;
  uint uVar2;
  byte *pbVar3;
  
  param_1 = param_1 & 0xff;
  if (param_1 < 5) {
    uVar2 = 0;
    pbVar3 = (byte *)((ulong)param_1 * 0x400 + 0x7100d17690);
    do {
      if ((*pbVar3 & 1) == 0) {
        lVar1 = (ulong)(uVar2 + param_1 * 0x20) * 0x20;
        *(undefined8 *)(lVar1 + 0x7100d17690) = 0;
        *(undefined8 *)(lVar1 + 0x7100d17698) = 0;
        *(undefined8 *)(lVar1 + 0x7100d176a0) = 0;
        *(undefined8 *)(lVar1 + 0x7100d176a8) = 0;
        *(undefined1 *)(((ulong)param_1 * 0x20 + (ulong)uVar2) * 0x20 + 0x7100d17690) = 1;
        return (undefined8 *)(lVar1 + 0x7100d17690);
      }
      uVar2 = uVar2 + 1;
      pbVar3 = pbVar3 + 0x20;
    } while (uVar2 != 0x20);
  }
  return (undefined8 *)0x0;
}



// ===== FUN_71007634b0 @ 71007634b0 (size=52) =====

void FUN_71007634b0(undefined8 param_1)

{
  uint uVar1;
  
  uVar1 = FUN_7100769b90();
  FUN_7100762e00(param_1,(uVar1 < 0xb0000) + '\x03');
  return;
}



// ===== FUN_71007634f0 @ 71007634f0 (size=316) =====

int FUN_71007634f0(ulong param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int local_4;
  
  local_4 = 0;
  iVar2 = FUN_71007634b0(&local_4);
  if ((iVar2 == 0) && (local_4 != 5)) {
    lVar3 = 0;
    uVar4 = param_1;
    if (param_1 != 0xffffffffffffffff) {
      lVar3 = cntpct_el0;
      lVar3 = lVar3 + (param_1 * 0xc) / 0x271;
    }
    while( true ) {
      if (param_1 != 0xffffffffffffffff) {
        lVar1 = cntpct_el0;
        uVar4 = 0;
        if (0 < lVar3 - lVar1) {
          uVar4 = (ulong)((lVar3 - lVar1) * 0x271) / 0xc;
        }
      }
      FUN_71007495a0(0x7100d18770,uVar4);
      FUN_71007495e0(0x7100d18770);
      iVar2 = FUN_71007634b0(&local_4);
      if (iVar2 != 0) break;
      if (local_4 == 5) {
        return 0;
      }
      if (uVar4 == 0) {
        return 0xea01;
      }
    }
  }
  return iVar2;
}



// ===== FUN_7100763630 @ 7100763630 (size=80) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_7100763630(void)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_7100769b90();
  if (0x4ffff < uVar1) {
    uVar1 = FUN_7100769b90();
    uVar2 = FUN_7100763380(_DAT_7100d18780,_DAT_7100d18788,(uVar1 < 0xb0000) + '\x04');
    return uVar2;
  }
  return 0x4b59;
}



// ===== FUN_7100763680 @ 7100763680 (size=112) =====

void FUN_7100763680(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined2 local_8;
  
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_10 = 0;
  local_88 = 0x300;
  local_8 = 0;
  uVar1 = FUN_710076ce60((long)&local_88 + 2,param_2,0x3f);
  if (0x40 < uVar1) {
    uVar1 = 0x40;
  }
  local_88 = CONCAT71(local_88._1_7_,(char)((uVar1 + 1 & 0x7f) << 1));
  FUN_71007629a0(param_1,&local_88);
  return;
}



// ===== FUN_71007636f0 @ 71007636f0 (size=120) =====

void FUN_71007636f0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  undefined1 local_88;
  undefined1 local_87;
  undefined8 local_86;
  undefined8 uStack_7e;
  undefined8 local_76;
  undefined8 uStack_6e;
  undefined8 uStack_66;
  undefined8 uStack_5e;
  undefined8 local_56;
  undefined8 uStack_4e;
  undefined8 uStack_46;
  undefined8 uStack_3e;
  undefined8 local_36;
  undefined8 uStack_2e;
  undefined8 uStack_26;
  undefined8 uStack_1e;
  undefined8 local_16;
  undefined8 uStack_e;
  
  param_3 = param_3 & 0xffff;
  uVar1 = param_3;
  if (0x40 < param_3) {
    uVar1 = 0x40;
  }
  local_86 = 0;
  uStack_7e = 0;
  local_76 = 0;
  uStack_6e = 0;
  uStack_66 = 0;
  uStack_5e = 0;
  local_56 = 0;
  uStack_4e = 0;
  uStack_46 = 0;
  uStack_3e = 0;
  local_36 = 0;
  uStack_2e = 0;
  uStack_26 = 0;
  uStack_1e = 0;
  local_88 = (undefined1)((uVar1 + 1 & 0x7f) << 1);
  local_16 = 0;
  uStack_e = 0;
  local_87 = 3;
  if (param_3 != 0) {
    FUN_710080f900(&local_86,param_2,(ulong)uVar1 << 1);
  }
  FUN_71007629a0(param_1,&local_88);
  return;
}



// ===== FUN_7100763770 @ 7100763770 (size=364) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100763770(undefined4 param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  
  uVar7 = FUN_7100769b90();
  if (0x4ffff < uVar7) {
    uVar7 = FUN_7100769b90();
    iVar6 = _DAT_7100d18788;
    uVar5 = _DAT_7100d18780;
    puVar3 = (undefined8 *)tpidrro_el0;
    if (_DAT_7100d18788 == 0) {
      puVar10 = puVar3 + 4;
      *puVar3 = 0x900100004;
    }
    else {
      puVar3[5] = 0;
      *puVar3 = 0xd00100004;
      *(undefined4 *)(puVar3 + 4) = 0x140001;
      *(int *)((long)puVar3 + 0x24) = iVar6;
      puVar10 = puVar3 + 6;
    }
    *(uint *)(puVar10 + 1) = (uVar7 < 0xb0000) + 7;
    *(undefined4 *)((long)puVar10 + 0xc) = 0;
    *puVar10 = 0x49434653;
    *(undefined4 *)(puVar3 + 1) = 0x12;
    *(int *)((long)puVar3 + 0xc) = (int)param_2;
    uVar7 = (uint)((ulong)param_2 >> 0x20);
    *(uint *)(puVar3 + 2) = uVar7 << 0x1c | (uVar7 >> 4 & 0x3fffff) << 2;
    *(undefined4 *)(puVar10 + 2) = param_1;
    uVar8 = FUN_710076d0c0(uVar5);
    if ((int)uVar8 == 0) {
      plVar4 = (long *)tpidrro_el0;
      if (*plVar4 < 0) {
        uVar7 = *(uint *)(plVar4 + 1);
        plVar9 = (long *)((long)plVar4 + 0x14);
        if ((uVar7 & 1) == 0) {
          plVar9 = (long *)((long)plVar4 + 0xc);
        }
        lVar11 = (((ulong)(uVar7 >> 1) & 0xf) + ((ulong)(uVar7 >> 5) & 0xf)) * 4;
      }
      else {
        plVar9 = plVar4 + 1;
        lVar11 = 0;
      }
      piVar1 = (int *)((long)plVar4 +
                      ((long)plVar9 +
                       ((lVar11 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
                      0xfffffffffffffff0));
      piVar2 = piVar1 + 4;
      if (iVar6 == 0) {
        piVar2 = piVar1;
      }
      uVar8 = 0x5f59;
      if (*piVar2 == 0x4f434653) {
        uVar8 = (ulong)(uint)piVar2[2];
      }
    }
    return uVar8;
  }
  return 0x4b59;
}



// ===== FUN_71007638e0 @ 71007638e0 (size=92) =====

undefined8 FUN_71007638e0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_7100769b90();
  if (0x4ffff < uVar1) {
    uVar1 = FUN_7100769b90();
    uVar2 = FUN_7100762d00(param_1,param_2,(uVar1 < 0xb0000) + '\b');
    return uVar2;
  }
  return 0x4b59;
}



// ===== FUN_7100763940 @ 7100763940 (size=80) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_7100763940(void)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_7100769b90();
  if (0x4ffff < uVar1) {
    uVar1 = FUN_7100769b90();
    uVar2 = FUN_7100763380(_DAT_7100d18780,_DAT_7100d18788,(uVar1 < 0xb0000) + '\t');
    return uVar2;
  }
  return 0x4b59;
}



// ===== FUN_7100763990 @ 7100763990 (size=80) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_7100763990(void)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_7100769b90();
  if (0x4ffff < uVar1) {
    uVar1 = FUN_7100769b90();
    uVar2 = FUN_7100763380(_DAT_7100d18780,_DAT_7100d18788,(uVar1 < 0xb0000) + '\n');
    return uVar2;
  }
  return 0x4b59;
}



// ===== FUN_71007639e0 @ 71007639e0 (size=84) =====

undefined8 FUN_71007639e0(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_7100769b90();
  if (0x7ffff < uVar1) {
    uVar1 = FUN_7100769b90();
    uVar2 = FUN_7100762e00(param_1,(uVar1 < 0xb0000) + '\v');
    return uVar2;
  }
  return 0x4b59;
}



// ===== FUN_7100763a40 @ 7100763a40 (size=92) =====

undefined8 FUN_7100763a40(byte *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((*param_1 & 1) == 0) {
    return 0x1159;
  }
  uVar1 = FUN_7100769b90();
  if (0xaffff < uVar1) {
    return 0;
  }
  uVar2 = FUN_7100763380(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc),3);
  return uVar2;
}



// ===== FUN_7100763aa0 @ 7100763aa0 (size=92) =====

undefined8 FUN_7100763aa0(byte *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((*param_1 & 1) == 0) {
    return 0x1159;
  }
  uVar1 = FUN_7100769b90();
  if (0xaffff < uVar1) {
    return 0;
  }
  uVar2 = FUN_7100763380(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc),4);
  return uVar2;
}



// ===== FUN_7100763b00 @ 7100763b00 (size=564) =====

ulong FUN_7100763b00(byte *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  undefined8 *puVar5;
  long *plVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  uint uVar14;
  
  if ((*param_1 & 1) == 0) {
    return 0x1159;
  }
  uVar7 = FUN_7100769b90();
  uVar10 = 0x4b59;
  if (0x4ffff < uVar7) {
    uVar8 = FUN_7100769b90(0x4b59);
    iVar3 = *(int *)(param_1 + 0xc);
    uVar14 = (uint)((ulong)param_3 >> 0x20);
    uVar7 = (uint)((ulong)param_4 >> 0x20);
    if (uVar8 < 0xb0000) {
      bVar4 = param_1[1];
      puVar5 = (undefined8 *)tpidrro_el0;
      if (iVar3 == 0) {
        puVar12 = puVar5 + 4;
        *puVar5 = 0xa00100004;
      }
      else {
        puVar5[5] = 0;
        puVar12 = puVar5 + 6;
        *puVar5 = 0xe00100004;
        *(undefined4 *)(puVar5 + 4) = 0x180001;
        *(int *)((long)puVar5 + 0x24) = iVar3;
      }
      *puVar12 = 0x49434653;
      puVar12[1] = 0xc;
      *(int *)(puVar5 + 1) = (int)param_4;
      *(int *)((long)puVar5 + 0xc) = (int)param_3;
      *(uint *)(puVar5 + 2) = (uVar14 >> 4 & 0x3fffff) << 2 | (uVar7 & 0xf) << 0x18 | uVar14 << 0x1c
      ;
      puVar12[2] = CONCAT44(param_2,(uint)bVar4);
      uVar10 = FUN_710076d0c0(*(undefined4 *)(param_1 + 4));
      iVar9 = (int)uVar10;
    }
    else {
      puVar5 = (undefined8 *)tpidrro_el0;
      if (iVar3 == 0) {
        puVar12 = puVar5 + 4;
        *puVar5 = 0x900100004;
      }
      else {
        puVar5[5] = 0;
        *puVar5 = 0xd00100004;
        *(undefined4 *)(puVar5 + 4) = 0x140001;
        *(int *)((long)puVar5 + 0x24) = iVar3;
        puVar12 = puVar5 + 6;
      }
      *puVar12 = 0x49434653;
      puVar12[1] = 10;
      *(int *)(puVar5 + 1) = (int)param_4;
      *(int *)((long)puVar5 + 0xc) = (int)param_3;
      *(uint *)(puVar5 + 2) = (uVar14 >> 4 & 0x3fffff) << 2 | (uVar7 & 0xf) << 0x18 | uVar14 << 0x1c
      ;
      *(undefined4 *)(puVar12 + 2) = param_2;
      uVar10 = FUN_710076d0c0(*(undefined4 *)(param_1 + 4));
      iVar9 = (int)uVar10;
    }
    if (iVar9 == 0) {
      plVar6 = (long *)tpidrro_el0;
      if (*plVar6 < 0) {
        uVar7 = *(uint *)(plVar6 + 1);
        plVar11 = (long *)((long)plVar6 + 0x14);
        if ((uVar7 & 1) == 0) {
          plVar11 = (long *)((long)plVar6 + 0xc);
        }
        lVar13 = (((ulong)(uVar7 >> 1) & 0xf) + ((ulong)(uVar7 >> 5) & 0xf)) * 4;
      }
      else {
        plVar11 = plVar6 + 1;
        lVar13 = 0;
      }
      piVar1 = (int *)((long)plVar6 +
                      ((long)plVar11 +
                       ((lVar13 + (ulong)((uint)*plVar6 >> 0x10 & 0xf) * 8) - (long)plVar6) + 0xf &
                      0xfffffffffffffff0));
      piVar2 = piVar1 + 4;
      if (iVar3 == 0) {
        piVar2 = piVar1;
      }
      uVar10 = 0x5f59;
      if (*piVar2 == 0x4f434653) {
        return (ulong)(uint)piVar2[2];
      }
    }
  }
  return uVar10;
}



// ===== FUN_7100763d40 @ 7100763d40 (size=28) =====

undefined8 FUN_7100763d40(byte *param_1)

{
  undefined8 uVar1;
  
  if ((*param_1 & 1) != 0) {
    uVar1 = FUN_7100762bf0(param_1 + 4);
    return uVar1;
  }
  return 0x1159;
}



// ===== FUN_7100763d60 @ 7100763d60 (size=32) =====

undefined8 FUN_7100763d60(byte *param_1)

{
  undefined8 uVar1;
  
  if ((*param_1 & 1) != 0) {
    uVar1 = FUN_7100763380(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc),1);
    return uVar1;
  }
  return 0x1159;
}



