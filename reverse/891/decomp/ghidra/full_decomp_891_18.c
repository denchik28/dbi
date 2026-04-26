// ===== FUN_7100763d80 @ 7100763d80 (size=168) =====

void FUN_7100763d80(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  FUN_7100763d60();
  FUN_7100749610(param_1 + 0x14);
  if (*(int *)(param_1 + 8) == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    puVar3 = (undefined8 *)tpidrro_el0;
    *puVar3 = 0x800000004;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined1 *)(puVar3 + 2) = 2;
    *(undefined4 *)((long)puVar3 + 0x14) = uVar2;
    FUN_710076d0c0(*(undefined4 *)(param_1 + 4));
    iVar1 = *(int *)(param_1 + 8);
  }
  else {
    puVar3 = (undefined8 *)tpidrro_el0;
    *puVar3 = 2;
    FUN_710076d0c0(*(undefined4 *)(param_1 + 4));
    iVar1 = *(int *)(param_1 + 8);
  }
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *param_1 = 0;
    return;
  }
  FUN_710076d060(*(undefined4 *)(param_1 + 4));
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *param_1 = 0;
  return;
}



// ===== FUN_7100763e30 @ 7100763e30 (size=260) =====

void FUN_7100763e30(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  uVar4 = 0;
  FUN_7100763aa0();
  do {
    if ((*(byte *)(((ulong)(byte)param_1[1] * 0x20 + (uVar4 & 0xffffffff)) * 0x20 + 0x7100d17690) &
        1) != 0) {
      FUN_7100763d80((ulong)((int)uVar4 + (uint)(byte)param_1[1] * 0x20) * 0x20 + 0x7100d17690);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 != 0x20);
  FUN_7100749610(param_1 + 0x2c);
  FUN_7100749610(param_1 + 0x20);
  FUN_7100749610(param_1 + 0x14);
  if (*(int *)(param_1 + 8) == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    puVar3 = (undefined8 *)tpidrro_el0;
    *puVar3 = 0x800000004;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined1 *)(puVar3 + 2) = 2;
    *(undefined4 *)((long)puVar3 + 0x14) = uVar2;
    FUN_710076d0c0(*(undefined4 *)(param_1 + 4));
    iVar1 = *(int *)(param_1 + 8);
  }
  else {
    puVar3 = (undefined8 *)tpidrro_el0;
    *puVar3 = 2;
    FUN_710076d0c0(*(undefined4 *)(param_1 + 4));
    iVar1 = *(int *)(param_1 + 8);
  }
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *param_1 = 0;
    return;
  }
  FUN_710076d060(*(undefined4 *)(param_1 + 4));
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *param_1 = 0;
  return;
}



// ===== FUN_7100763f40 @ 7100763f40 (size=400) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100763f40(void)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  
  uVar3 = FUN_7100769b90();
  if ((0x4ffff < uVar3) && (_DAT_7100d18780 != 0)) {
    FUN_7100763990();
  }
  pbVar4 = &DAT_7100d18690;
  do {
    if ((*pbVar4 & 1) != 0) {
      FUN_7100763e30(pbVar4);
    }
    pbVar4 = pbVar4 + 0x38;
  } while (pbVar4 != (byte *)0x7100d18770);
  FUN_7100749610(0x7100d18770);
  uVar3 = FUN_7100769b90();
  if (uVar3 < 0xb0000) goto LAB_7100763fe4;
  if (_DAT_7100d18784 == 0) {
    iVar2 = _DAT_7100d18788;
    if (_DAT_7100d18788 != 0) {
      puVar1 = (undefined8 *)tpidrro_el0;
      *puVar1 = 0x800000004;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *(undefined1 *)(puVar1 + 2) = 2;
      *(int *)((long)puVar1 + 0x14) = iVar2;
      FUN_710076d0c0(_DAT_7100d18780 & 0xffffffff);
      goto joined_r0x0071007640b8;
    }
  }
  else {
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 2;
    FUN_710076d0c0(_DAT_7100d18780 & 0xffffffff);
joined_r0x0071007640b8:
    if (_DAT_7100d18784 != 0) {
      FUN_710076d060(_DAT_7100d18780 & 0xffffffff);
    }
  }
  _DAT_7100d18780 = 0;
  _DAT_7100d18788 = 0;
LAB_7100763fe4:
  if (_DAT_7100d18794 == 0) {
    iVar2 = _DAT_7100d18798;
    if (_DAT_7100d18798 == 0) {
      _DAT_7100d18790 = 0;
      _DAT_7100d18798 = 0;
      return;
    }
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 0x800000004;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 2) = 2;
    *(int *)((long)puVar1 + 0x14) = iVar2;
    FUN_710076d0c0(_DAT_7100d18790 & 0xffffffff);
  }
  else {
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 2;
    FUN_710076d0c0(_DAT_7100d18790 & 0xffffffff);
  }
  if (_DAT_7100d18794 == 0) {
    _DAT_7100d18790 = 0;
    _DAT_7100d18798 = 0;
    return;
  }
  FUN_710076d060(_DAT_7100d18790 & 0xffffffff);
  _DAT_7100d18790 = 0;
  _DAT_7100d18798 = 0;
  return;
}



// ===== FUN_71007640d0 @ 71007640d0 (size=72) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71007640d0(void)

{
  FUN_7100749670();
  if (_DAT_7100d1768c != 0) {
    _DAT_7100d1768c = _DAT_7100d1768c + -1;
    if (_DAT_7100d1768c == 0) {
      FUN_7100763f40();
    }
  }
  FUN_7100749740(0x7100d17688);
  return;
}



// ===== FUN_7100764120 @ 7100764120 (size=1108) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100764120(void)

{
  bool bVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  uint *puVar11;
  
  FUN_7100749670(0x7100d17688);
  iVar5 = _DAT_7100d1768c + 1;
  bVar1 = _DAT_7100d1768c != 0;
  _DAT_7100d1768c = iVar5;
  if (bVar1) goto LAB_710076414c;
  iVar5 = FUN_710075e590(&DAT_7100d18790,0x73643a627375);
  uVar7 = _DAT_7100d18790;
  if (iVar5 == 0) {
    if (_DAT_7100d18794 == 0) {
      plVar2 = (long *)tpidrro_el0;
      *plVar2 = 0x900000005;
      *(undefined4 *)(plVar2 + 4) = 0;
      plVar2[2] = 0x49434653;
      plVar2[3] = 4;
      iVar5 = FUN_710076d0c0(uVar7);
      if (iVar5 != 0) goto LAB_7100764324;
      if (*plVar2 < 0) {
        uVar7 = *(uint *)(plVar2 + 1);
        lVar10 = (long)plVar2 + 0x14;
        if ((uVar7 & 1) == 0) {
          lVar10 = (long)plVar2 + 0xc;
        }
        puVar11 = (uint *)(lVar10 + ((ulong)(uVar7 >> 1) & 0xf) * 4);
        lVar10 = ((ulong)(uVar7 >> 5) & 0xf) << 2;
      }
      else {
        puVar11 = (uint *)(plVar2 + 1);
        lVar10 = 0;
      }
      uVar8 = (long)puVar11 +
              ((lVar10 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf &
              0xfffffffffffffff0;
      if (*(int *)((long)plVar2 + uVar8) != 0x4f434653) goto LAB_71007644c4;
      iVar5 = *(int *)((long)plVar2 + uVar8 + 8);
      if (iVar5 == 0) {
        _DAT_7100d18790 = *puVar11;
        _DAT_7100d18794 = 1;
        goto LAB_7100764230;
      }
    }
    else {
LAB_7100764230:
      uVar7 = _DAT_7100d18790;
      plVar2 = (long *)tpidrro_el0;
      *plVar2 = 0x800000005;
      plVar2[2] = 0x49434653;
      plVar2[3] = 0;
      iVar5 = FUN_710076d0c0(uVar7);
      if (iVar5 == 0) {
        if (*plVar2 < 0) {
          uVar7 = *(uint *)(plVar2 + 1);
          plVar9 = (long *)((long)plVar2 + 0x14);
          if ((uVar7 & 1) == 0) {
            plVar9 = (long *)((long)plVar2 + 0xc);
          }
          lVar10 = (((ulong)(uVar7 >> 1) & 0xf) + ((ulong)(uVar7 >> 5) & 0xf)) * 4;
        }
        else {
          plVar9 = plVar2 + 1;
          lVar10 = 0;
        }
        uVar8 = (long)plVar9 +
                ((lVar10 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf &
                0xfffffffffffffff0;
        if (*(int *)((long)plVar2 + uVar8) == 0x4f434653) {
          iVar5 = *(int *)((long)plVar2 + uVar8 + 8);
          if (iVar5 != 0) goto LAB_7100764360;
          _DAT_7100d18798 = *(undefined4 *)((long)plVar2 + uVar8 + 0x10);
          uVar6 = FUN_7100769b90();
          uVar3 = _DAT_7100d18798;
          uVar7 = _DAT_7100d18790;
          if (uVar6 < 0xb0000) {
            _DAT_7100d18780 = CONCAT44(_DAT_7100d18794,_DAT_7100d18790);
            _DAT_7100d18788 =
                 CONCAT26(uRam0000007100d1879e,CONCAT24(_DAT_7100d1879c,_DAT_7100d18798));
LAB_71007642e4:
            iVar5 = FUN_7100762ef0();
            if (iVar5 == 0) {
              uVar7 = FUN_7100769b90();
              iVar5 = FUN_7100763180(&DAT_7100d18780,0x7100d18770,(uVar7 < 0xb0000) + '\x02');
              if (iVar5 == 0) {
                uVar7 = FUN_7100769b90();
                if (0x4ffff < uVar7) {
                  FUN_7100763630();
                }
LAB_710076414c:
                FUN_7100749740(0x7100d17688);
                return 0;
              }
            }
          }
          else {
            plVar2 = (long *)tpidrro_el0;
            plVar2[5] = 0;
            uVar4 = _DAT_7100d1879c;
            *plVar2 = 0xc00000004;
            *(undefined4 *)(plVar2 + 2) = 0x100001;
            *(undefined4 *)((long)plVar2 + 0x14) = uVar3;
            plVar2[3] = 0;
            plVar2[4] = 0x49434653;
            iVar5 = FUN_710076d0c0(uVar7);
            if (iVar5 == 0) {
              if (*plVar2 < 0) {
                uVar6 = *(uint *)(plVar2 + 1);
                plVar9 = (long *)((long)plVar2 + 0x14);
                if ((uVar6 & 1) == 0) {
                  plVar9 = (long *)((long)plVar2 + 0xc);
                }
                lVar10 = (((ulong)(uVar6 >> 1) & 0xf) + ((ulong)(uVar6 >> 5) & 0xf)) * 4;
              }
              else {
                plVar9 = plVar2 + 1;
                lVar10 = 0;
              }
              uVar8 = (long)plVar9 +
                      ((lVar10 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf &
                      0xfffffffffffffff0;
              if (*(int *)((long)plVar2 + uVar8 + 0x10) == 0x4f434653) {
                iVar5 = *(int *)((long)plVar2 + uVar8 + 0x18);
                if (iVar5 == 0) {
                  iVar5 = *(int *)((long)plVar2 + uVar8 + 0x20);
                  if (iVar5 == 0) {
                    _DAT_7100d18780 = 0;
                    _DAT_7100d18788 = 0;
                  }
                  else {
                    _DAT_7100d18780 = (ulong)uVar7;
                    _DAT_7100d18788 = CONCAT24(uVar4,iVar5);
                  }
                  goto LAB_71007642e4;
                }
              }
              else {
                iVar5 = 0x5f59;
              }
            }
          }
        }
        else {
LAB_71007644c4:
          uVar7 = FUN_7100769b90();
          if (uVar7 < 0xb0000) {
            _DAT_7100d18780 = CONCAT44(_DAT_7100d18794,_DAT_7100d18790);
            _DAT_7100d18788 =
                 CONCAT26(uRam0000007100d1879e,CONCAT24(_DAT_7100d1879c,_DAT_7100d18798));
          }
          iVar5 = 0x5f59;
        }
        goto LAB_71007642f4;
      }
    }
LAB_7100764360:
    uVar7 = FUN_7100769b90();
    if (uVar7 < 0xb0000) {
      _DAT_7100d18780 = CONCAT44(_DAT_7100d18794,_DAT_7100d18790);
      _DAT_7100d18788 = CONCAT26(uRam0000007100d1879e,CONCAT24(_DAT_7100d1879c,_DAT_7100d18798));
    }
  }
  else {
LAB_7100764324:
    uVar7 = FUN_7100769b90();
    if (uVar7 < 0xb0000) {
      _DAT_7100d18780 = CONCAT44(_DAT_7100d18794,_DAT_7100d18790);
      _DAT_7100d18788 = CONCAT26(uRam0000007100d1879e,CONCAT24(_DAT_7100d1879c,_DAT_7100d18798));
      FUN_7100763f40();
      goto LAB_710076430c;
    }
  }
LAB_71007642f4:
  FUN_7100763f40();
LAB_710076430c:
  _DAT_7100d1768c = _DAT_7100d1768c + -1;
  FUN_7100749740(0x7100d17688);
  return iVar5;
}



// ===== FUN_7100764580 @ 7100764580 (size=552) =====

int FUN_7100764580(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  undefined4 unaff_w20;
  long lVar9;
  undefined4 local_10;
  int iStack_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uVar8 = 0;
  local_10 = unaff_w20;
  while( true ) {
    iVar3 = FUN_71007627a0(&local_10,uVar8);
    iVar7 = (int)uVar8;
    if (iVar3 == 0) break;
    uVar4 = iVar7 + 1U & 0xff;
    uVar8 = (ulong)uVar4;
    if (uVar4 == 4) {
      return iVar3;
    }
  }
  lVar6 = (uVar8 * 8 - (long)iVar7) * 8;
  if (((&DAT_7100d18690)[lVar6] & 1) != 0) {
    if (iStack_c == 0) {
      puVar2 = (undefined8 *)tpidrro_el0;
      *puVar2 = 0x800000004;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(undefined1 *)(puVar2 + 2) = 2;
      *(undefined4 *)((long)puVar2 + 0x14) = local_8;
      FUN_710076d0c0(local_10);
    }
    else {
      puVar2 = (undefined8 *)tpidrro_el0;
      *puVar2 = 2;
      FUN_710076d0c0(local_10);
      FUN_710076d060(local_10);
    }
    return 0x559;
  }
  lVar9 = uVar8 * 0x38;
  *(undefined8 *)(&DAT_7100d18690 + lVar9) = 0;
  *(undefined8 *)(lVar9 + 0x7100d18698) = 0;
  *(undefined8 *)(lVar9 + 0x7100d186a0) = 0;
  *(undefined8 *)(lVar9 + 0x7100d186a8) = 0;
  *(undefined8 *)(lVar9 + 0x7100d186b0) = 0;
  *(undefined8 *)(lVar9 + 0x7100d186b8) = 0;
  *(undefined8 *)(lVar9 + 0x7100d186c0) = 0;
  (&DAT_7100d18690)[lVar6] = 1;
  *(char *)(lVar6 + 0x7100d18691) = (char)uVar8;
  lVar1 = lVar9 + 0x7100d18694;
  *(ulong *)(lVar6 + 0x7100d18694) = CONCAT44(iStack_c,local_10);
  *(ulong *)(lVar6 + 0x7100d1869c) = CONCAT44(uStack_4,local_8);
  iVar3 = FUN_7100763180(lVar1,lVar9 + 0x7100d186a4,1);
  if (iVar3 == 0) {
    uVar4 = FUN_7100769b90();
    uVar5 = 7;
    if (0xaffff < uVar4) {
      uVar5 = 5;
    }
    iVar3 = FUN_7100763180(lVar1,lVar9 + 0x7100d186b0,uVar5);
    if (iVar3 == 0) {
      uVar4 = FUN_7100769b90();
      uVar5 = 9;
      if (0xaffff < uVar4) {
        uVar5 = 7;
      }
      iVar3 = FUN_7100763180(lVar1,lVar9 + 0x7100d186bc,uVar5);
      if (iVar3 == 0) {
        *param_1 = &DAT_7100d18690 + lVar9;
        return 0;
      }
    }
  }
  if (((&DAT_7100d18690)[(long)iVar7 * 0x38] & 1) != 0) {
    FUN_7100763e30(&DAT_7100d18690 + lVar9);
    return iVar3;
  }
  return iVar3;
}



// ===== FUN_71007647b0 @ 71007647b0 (size=16) =====

void FUN_71007647b0(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    return;
  }
  FUN_7100763e30();
  return;
}



// ===== FUN_71007647c0 @ 71007647c0 (size=484) =====

int FUN_71007647c0(byte *param_1,undefined8 *param_2,undefined1 param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  long *plVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  
  iVar7 = 0x1159;
  if ((*param_1 & 1) != 0) {
    uVar6 = FUN_7100769b90();
    if (uVar6 < 0x50000) {
      return 0x4b59;
    }
    pbVar8 = (byte *)FUN_7100763440(param_1[1]);
    if (pbVar8 != (byte *)0x0) {
      plVar5 = (long *)tpidrro_el0;
      uVar2 = *(undefined4 *)(param_1 + 4);
      uVar3 = *(undefined4 *)(param_1 + 0xc);
      uVar4 = *(undefined2 *)(param_1 + 0x10);
      plVar5[5] = 0;
      *(undefined1 *)(plVar5 + 6) = param_3;
      *plVar5 = 0xd00000004;
      *(undefined4 *)(plVar5 + 2) = 0x110001;
      *(undefined4 *)((long)plVar5 + 0x14) = uVar3;
      plVar5[3] = 0;
      plVar5[4] = 0x49434653;
      iVar7 = FUN_710076d0c0(*(undefined4 *)(param_1 + 4));
      if (iVar7 == 0) {
        if (*plVar5 < 0) {
          uVar6 = *(uint *)(plVar5 + 1);
          plVar9 = (long *)((long)plVar5 + 0x14);
          if ((uVar6 & 1) == 0) {
            plVar9 = (long *)((long)plVar5 + 0xc);
          }
          lVar11 = (((ulong)(uVar6 >> 5) & 0xf) + ((ulong)(uVar6 >> 1) & 0xf)) * 4;
        }
        else {
          plVar9 = plVar5 + 1;
          lVar11 = 0;
        }
        uVar10 = (long)plVar9 +
                 ((lVar11 + (ulong)((uint)*plVar5 >> 0x10 & 0xf) * 8) - (long)plVar5) + 0xf &
                 0xfffffffffffffff0;
        if (*(int *)((long)plVar5 + uVar10 + 0x10) == 0x4f434653) {
          iVar7 = *(int *)((long)plVar5 + uVar10 + 0x18);
          if (iVar7 == 0) {
            iVar7 = *(int *)((long)plVar5 + uVar10 + 0x20);
            pbVar1 = pbVar8 + 4;
            if (iVar7 == 0) {
              pbVar1[0] = 0;
              pbVar1[1] = 0;
              pbVar1[2] = 0;
              pbVar1[3] = 0;
              pbVar1[4] = 0;
              pbVar1[5] = 0;
              pbVar1[6] = 0;
              pbVar1[7] = 0;
              pbVar8[0xc] = 0;
              pbVar8[0xd] = 0;
              pbVar8[0xe] = 0;
              pbVar8[0xf] = 0;
              pbVar8[0x10] = 0;
              pbVar8[0x11] = 0;
              pbVar8[0x12] = 0;
              pbVar8[0x13] = 0;
            }
            else {
              *(undefined4 *)(pbVar8 + 4) = uVar2;
              pbVar8[8] = 0;
              pbVar8[9] = 0;
              pbVar8[10] = 0;
              pbVar8[0xb] = 0;
              *(int *)(pbVar8 + 0xc) = iVar7;
              *(undefined2 *)(pbVar8 + 0x10) = uVar4;
            }
            iVar7 = FUN_7100763180(pbVar1,pbVar8 + 0x14,2);
            if (iVar7 == 0) {
              *param_2 = pbVar8;
              return 0;
            }
          }
        }
        else {
          iVar7 = 0x5f59;
        }
      }
      if ((*pbVar8 & 1) != 0) {
        FUN_7100763d80(pbVar8);
        return iVar7;
      }
      return iVar7;
    }
    iVar7 = 0x559;
  }
  return iVar7;
}



// ===== FUN_71007649b0 @ 71007649b0 (size=16) =====

void FUN_71007649b0(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    return;
  }
  FUN_7100763d80();
  return;
}



// ===== FUN_71007649c0 @ 71007649c0 (size=36) =====

undefined8 FUN_71007649c0(byte *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((*param_1 & 1) != 0) {
    uVar1 = FUN_7100763280(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc),param_2,3);
    return uVar1;
  }
  return 0x1159;
}



// ===== FUN_71007649f0 @ 71007649f0 (size=28) =====

undefined8 FUN_71007649f0(byte *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((*param_1 & 1) != 0) {
    uVar1 = FUN_7100762b20(param_1 + 4,param_2,5);
    return uVar1;
  }
  return 0x1159;
}



// ===== FUN_7100764ad0 @ 7100764ad0 (size=248) =====

void FUN_7100764ad0(long param_1)

{
  undefined1 auStack_1b8 [28];
  undefined8 local_19c;
  undefined8 uStack_194;
  undefined8 local_18c;
  undefined8 uStack_184;
  undefined8 local_17c;
  undefined8 uStack_174;
  undefined8 local_16c;
  undefined8 uStack_164;
  undefined8 local_15c;
  undefined8 uStack_154;
  undefined8 local_14c;
  undefined1 uStack_144;
  undefined7 uStack_143;
  undefined1 uStack_13c;
  undefined8 uStack_13b;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined1 uStack_d4;
  undefined7 uStack_d3;
  undefined1 uStack_cc;
  undefined8 uStack_cb;
  undefined8 local_bd;
  undefined8 uStack_b5;
  undefined8 local_ad;
  undefined8 uStack_a5;
  undefined8 local_9d;
  undefined8 uStack_95;
  undefined8 local_8d;
  undefined8 uStack_85;
  undefined8 local_7d;
  undefined2 uStack_75;
  undefined6 uStack_73;
  undefined2 uStack_6d;
  undefined8 uStack_6b;
  undefined8 local_5d;
  undefined8 uStack_55;
  undefined8 local_4d;
  undefined8 uStack_45;
  undefined8 local_3d;
  undefined8 uStack_35;
  undefined8 local_2d;
  undefined8 uStack_25;
  undefined8 local_1d;
  undefined2 uStack_15;
  undefined6 uStack_13;
  undefined2 uStack_d;
  undefined8 uStack_b;
  
  FUN_710080f900(auStack_1b8,param_1,0x1b8);
  *(undefined8 *)(param_1 + 0x8c) = local_19c;
  *(undefined8 *)(param_1 + 0x94) = uStack_194;
  *(undefined8 *)(param_1 + 0x9c) = local_18c;
  *(undefined8 *)(param_1 + 0xa4) = uStack_184;
  *(undefined8 *)(param_1 + 0xac) = local_17c;
  *(undefined8 *)(param_1 + 0xb4) = uStack_174;
  *(undefined8 *)(param_1 + 0xbc) = local_16c;
  *(undefined8 *)(param_1 + 0xc4) = uStack_164;
  *(undefined8 *)(param_1 + 0xcc) = local_15c;
  *(undefined8 *)(param_1 + 0xd4) = uStack_154;
  *(undefined8 *)(param_1 + 0xdc) = local_14c;
  *(ulong *)(param_1 + 0xe4) = CONCAT71(uStack_143,uStack_144);
  *(ulong *)(param_1 + 0xe5) = CONCAT17(uStack_13c,uStack_143);
  *(undefined8 *)(param_1 + 0xed) = uStack_13b;
  *(undefined8 *)(param_1 + 0x1c) = local_12c;
  *(undefined8 *)(param_1 + 0x24) = uStack_124;
  *(undefined8 *)(param_1 + 0x2c) = local_11c;
  *(undefined8 *)(param_1 + 0x34) = uStack_114;
  *(undefined8 *)(param_1 + 0x3c) = local_10c;
  *(undefined8 *)(param_1 + 0x44) = uStack_104;
  *(undefined8 *)(param_1 + 0x4c) = local_fc;
  *(undefined8 *)(param_1 + 0x54) = uStack_f4;
  *(undefined8 *)(param_1 + 0x5c) = local_ec;
  *(undefined8 *)(param_1 + 100) = uStack_e4;
  *(undefined8 *)(param_1 + 0x6c) = local_dc;
  *(ulong *)(param_1 + 0x74) = CONCAT71(uStack_d3,uStack_d4);
  *(ulong *)(param_1 + 0x75) = CONCAT17(uStack_cc,uStack_d3);
  *(undefined8 *)(param_1 + 0x7d) = uStack_cb;
  *(undefined8 *)(param_1 + 0x15b) = local_bd;
  *(undefined8 *)(param_1 + 0x163) = uStack_b5;
  *(undefined8 *)(param_1 + 0x173) = uStack_a5;
  *(undefined8 *)(param_1 + 0x16b) = local_ad;
  *(undefined8 *)(param_1 + 0x17b) = local_9d;
  *(undefined8 *)(param_1 + 0x183) = uStack_95;
  *(undefined8 *)(param_1 + 0x193) = uStack_85;
  *(undefined8 *)(param_1 + 0x18b) = local_8d;
  *(undefined8 *)(param_1 + 0x19b) = local_7d;
  *(ulong *)(param_1 + 0x1a3) = CONCAT62(uStack_73,uStack_75);
  *(ulong *)(param_1 + 0x1a5) = CONCAT26(uStack_6d,uStack_73);
  *(undefined8 *)(param_1 + 0x1ad) = uStack_6b;
  *(undefined8 *)(param_1 + 0xfb) = local_5d;
  *(undefined8 *)(param_1 + 0x103) = uStack_55;
  *(undefined8 *)(param_1 + 0x10b) = local_4d;
  *(undefined8 *)(param_1 + 0x113) = uStack_45;
  *(undefined8 *)(param_1 + 0x123) = uStack_35;
  *(undefined8 *)(param_1 + 0x11b) = local_3d;
  *(undefined8 *)(param_1 + 299) = local_2d;
  *(undefined8 *)(param_1 + 0x133) = uStack_25;
  *(ulong *)(param_1 + 0x143) = CONCAT62(uStack_13,uStack_15);
  *(undefined8 *)(param_1 + 0x13b) = local_1d;
  *(ulong *)(param_1 + 0x145) = CONCAT26(uStack_d,uStack_13);
  *(undefined8 *)(param_1 + 0x14d) = uStack_b;
  return;
}



// ===== FUN_7100764bd0 @ 7100764bd0 (size=292) =====

int FUN_7100764bd0(undefined4 *param_1,undefined4 *param_2,undefined1 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  plVar3 = (long *)tpidrro_el0;
  uVar2 = param_1[2];
  puVar1 = param_1 + 0xb;
  if (param_2 != (undefined4 *)0x0) {
    puVar1 = param_2;
  }
  *(undefined4 *)(plVar3 + 7) = param_4;
  *(undefined4 *)((long)plVar3 + 0x3c) = 0;
  *(undefined1 *)(plVar3 + 8) = param_3;
  uVar5 = (uint)((ulong)puVar1 >> 0x20);
  *(undefined4 *)(plVar3 + 4) = 0x110001;
  *(undefined4 *)((long)plVar3 + 0x24) = uVar2;
  plVar3[5] = 0;
  plVar3[6] = 0x49434653;
  *plVar3 = 0xd01000004;
  *(undefined4 *)(plVar3 + 1) = 0x1b8;
  *(int *)((long)plVar3 + 0xc) = (int)puVar1;
  uVar2 = *param_1;
  *(uint *)(plVar3 + 2) = uVar5 << 0x1c | (uVar5 >> 4 & 0x3fffff) << 2;
  iVar4 = FUN_710076d0c0(uVar2);
  if (iVar4 == 0) {
    if (*plVar3 < 0) {
      uVar5 = *(uint *)(plVar3 + 1);
      plVar6 = (long *)((long)plVar3 + 0x14);
      if ((uVar5 & 1) == 0) {
        plVar6 = (long *)((long)plVar3 + 0xc);
      }
      lVar8 = (((ulong)(uVar5 >> 1) & 0xf) + ((ulong)(uVar5 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar3 + 1;
      lVar8 = 0;
    }
    iVar4 = 0x5f59;
    uVar7 = (long)plVar6 + ((lVar8 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf
            & 0xfffffffffffffff0;
    if (((*(int *)((long)plVar3 + uVar7 + 0x10) == 0x4f434653) &&
        (iVar4 = *(int *)((long)plVar3 + uVar7 + 0x18), iVar4 == 0)) &&
       (uVar5 = FUN_7100769b90(), uVar5 < 0x80000)) {
      FUN_7100764ad0(puVar1);
    }
  }
  return iVar4;
}



// ===== FUN_7100764df0 @ 7100764df0 (size=244) =====

int FUN_7100764df0(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

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



// ===== FUN_7100764ef0 @ 7100764ef0 (size=220) =====

ulong FUN_7100764ef0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                    undefined4 param_5)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0xc01000004;
  *(undefined4 *)(plVar2 + 1) = param_4;
  *(int *)((long)plVar2 + 0xc) = (int)param_3;
  *(undefined4 *)(plVar2 + 4) = 0x100001;
  *(undefined4 *)((long)plVar2 + 0x24) = param_2;
  *(undefined4 *)(plVar2 + 7) = param_5;
  *(undefined4 *)((long)plVar2 + 0x3c) = 0;
  plVar2[5] = 0;
  plVar2[6] = 0x49434653;
  uVar1 = (uint)((ulong)param_3 >> 0x20);
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
    if (*(int *)((long)plVar2 + uVar5 + 0x10) == 0x4f434653) {
      uVar3 = (ulong)*(uint *)((long)plVar2 + uVar5 + 0x18);
    }
  }
  return uVar3;
}



// ===== FUN_7100764fd0 @ 7100764fd0 (size=192) =====

ulong FUN_7100764fd0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

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



// ===== FUN_7100765090 @ 7100765090 (size=452) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100765090(int param_1,undefined8 *param_2,long param_3,undefined8 param_4,int *param_5)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  
  uVar8 = FUN_7100769b90();
  iVar4 = _DAT_7100d187c0;
  uVar7 = _DAT_7100d187b8;
  if (0x1ffff < uVar8) {
    param_1 = param_1 + 1;
  }
  puVar5 = (undefined8 *)tpidrro_el0;
  if (_DAT_7100d187c0 == 0) {
    puVar11 = puVar5 + 4;
    *puVar5 = 0xc01000004;
  }
  else {
    puVar5[5] = 0;
    puVar11 = puVar5 + 6;
    *puVar5 = 0x1001000004;
    *(undefined4 *)(puVar5 + 4) = 0x200001;
    *(int *)((long)puVar5 + 0x24) = iVar4;
  }
  *(int *)(puVar11 + 1) = param_1;
  *(undefined4 *)((long)puVar11 + 0xc) = 0;
  uVar8 = (uint)((ulong)param_3 >> 0x20);
  *puVar11 = 0x49434653;
  *(int *)(puVar5 + 1) = (int)param_4;
  *(int *)((long)puVar5 + 0xc) = (int)param_3;
  *(uint *)(puVar5 + 2) =
       (uVar8 >> 4 & 0x3fffff) << 2 | ((uint)((ulong)param_4 >> 0x20) & 0xf) << 0x18 | uVar8 << 0x1c
  ;
  uVar3 = param_2[1];
  puVar11[2] = *param_2;
  puVar11[3] = uVar3;
  iVar9 = FUN_710076d0c0(uVar7);
  if (iVar9 == 0) {
    plVar6 = (long *)tpidrro_el0;
    if (*plVar6 < 0) {
      uVar8 = *(uint *)(plVar6 + 1);
      plVar10 = (long *)((long)plVar6 + 0x14);
      if ((uVar8 & 1) == 0) {
        plVar10 = (long *)((long)plVar6 + 0xc);
      }
      lVar12 = (((ulong)(uVar8 >> 5) & 0xf) + ((ulong)(uVar8 >> 1) & 0xf)) * 4;
    }
    else {
      plVar10 = plVar6 + 1;
      lVar12 = 0;
    }
    iVar9 = 0x5f59;
    piVar1 = (int *)((long)plVar6 +
                    ((long)plVar10 +
                     ((lVar12 + (ulong)((uint)*plVar6 >> 0x10 & 0xf) * 8) - (long)plVar6) + 0xf &
                    0xfffffffffffffff0));
    piVar2 = piVar1 + 4;
    if (iVar4 == 0) {
      piVar2 = piVar1;
    }
    if ((*piVar2 == 0x4f434653) && (iVar9 = piVar2[2], iVar9 == 0)) {
      iVar4 = piVar2[4];
      if (param_5 != (int *)0x0) {
        *param_5 = iVar4;
      }
      if (0 < iVar4) {
        lVar12 = param_3 + 0x228;
        do {
          uVar8 = FUN_7100769b90();
          if (param_3 != 0 && uVar8 < 0x80000) {
            FUN_7100764ad0(param_3);
          }
          param_3 = param_3 + 0x228;
        } while (lVar12 + (ulong)(iVar4 - 1) * 0x228 != param_3);
      }
    }
  }
  return iVar9;
}



// ===== FUN_7100765980 @ 7100765980 (size=160) =====

void FUN_7100765980(undefined8 *param_1)

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
  if (iVar1 != 0) {
    FUN_710076d060(*(undefined4 *)param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  FUN_7100749610(param_1 + 2);
  FUN_7100749610((long)param_1 + 0x1c);
  FUN_7100808340(param_1,0,0x254);
  return;
}



// ===== FUN_7100765a20 @ 7100765a20 (size=600) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100765a20(undefined8 *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  
  uVar8 = (long)param_1 + 0x2c;
  FUN_7100808340(param_1,0,0x254);
  FUN_710080f900(uVar8,param_2,0x228);
  *(undefined4 *)(param_1 + 5) = *param_2;
  uVar5 = FUN_7100769b90();
  uVar4 = _DAT_7100d187c4;
  uVar3 = _DAT_7100d187c0;
  uVar2 = _DAT_7100d187b8;
  uVar10 = (uint)(uVar8 >> 0x20);
  if (uVar5 < 0x20000) {
    plVar9 = (long *)tpidrro_el0;
    *(undefined4 *)(plVar9 + 4) = 0x140001;
    *(undefined4 *)((long)plVar9 + 0x24) = uVar3;
    plVar9[5] = 0;
    plVar9[6] = 0x49434653;
    plVar9[7] = 6;
    *(uint *)(plVar9 + 2) = (uVar10 >> 4 & 0x3fffff) << 2 | uVar10 << 0x1c;
    *plVar9 = 0xd01000004;
    *(undefined4 *)(plVar9 + 1) = 0x1b8;
    *(int *)((long)plVar9 + 0xc) = (int)uVar8;
  }
  else {
    plVar9 = (long *)tpidrro_el0;
    *(undefined4 *)((long)plVar9 + 0x24) = _DAT_7100d187c0;
    uVar1 = (long)param_1 + 0x1e4;
    *(int *)(plVar9 + 3) = (int)uVar8;
    plVar9[5] = 0;
    plVar9[6] = 0x49434653;
    plVar9[7] = 7;
    *plVar9 = 0xd02000004;
    *(undefined4 *)(plVar9 + 1) = 0x70;
    *(int *)((long)plVar9 + 0xc) = (int)uVar1;
    plVar9[2] = (uVar1 & 0x3fffff000000000) >> 0x22 | 0x1b800000000 | (uVar1 & 0xf00000000) >> 4;
    *(ulong *)((long)plVar9 + 0x1c) =
         (uVar8 >> 0x24 & 0x3fffff) << 2 | 0x14000100000000 | (ulong)(uVar10 << 0x1c);
  }
  *(undefined4 *)(plVar9 + 8) = *(undefined4 *)(param_1 + 5);
  iVar6 = FUN_710076d0c0(uVar2);
  if (iVar6 == 0) {
    if (*plVar9 < 0) {
      uVar5 = *(uint *)(plVar9 + 1);
      plVar7 = (long *)((long)plVar9 + 0x14);
      if ((uVar5 & 1) == 0) {
        plVar7 = (long *)((long)plVar9 + 0xc);
      }
      lVar11 = (((ulong)(uVar5 >> 1) & 0xf) + ((ulong)(uVar5 >> 5) & 0xf)) * 4;
    }
    else {
      plVar7 = plVar9 + 1;
      lVar11 = 0;
    }
    iVar6 = 0x5f59;
    uVar8 = (long)plVar7 +
            ((lVar11 + (ulong)((uint)*plVar9 >> 0x10 & 0xf) * 8) - (long)plVar9) + 0xf &
            0xfffffffffffffff0;
    if ((*(int *)((long)plVar9 + uVar8 + 0x10) == 0x4f434653) &&
       (iVar6 = *(int *)((long)plVar9 + uVar8 + 0x18), iVar6 == 0)) {
      iVar6 = *(int *)((long)plVar9 + uVar8 + 0x20);
      if (iVar6 == 0) {
        *param_1 = 0;
        param_1[1] = 0;
      }
      else {
        *(undefined4 *)param_1 = uVar2;
        *(undefined4 *)((long)param_1 + 4) = 0;
        *(int *)(param_1 + 1) = iVar6;
        *(undefined2 *)((long)param_1 + 0xc) = uVar4;
      }
      uVar5 = FUN_7100769b90();
      if (uVar5 < 0x80000) {
        FUN_7100764ad0(param_2);
      }
      iVar6 = FUN_7100764df0(param_1,param_1 + 2,0);
      uVar5 = FUN_7100769b90();
      if (0x1ffff < uVar5) {
        iVar6 = FUN_7100764df0(param_1,(long)param_1 + 0x1c,6);
      }
      if (iVar6 != 0) {
        FUN_7100765980(param_1);
      }
    }
  }
  return iVar6;
}



// ===== FUN_7100765c80 @ 7100765c80 (size=8) =====

void FUN_7100765c80(void)

{
  FUN_7100764bd0();
  return;
}



// ===== FUN_7100765c90 @ 7100765c90 (size=8) =====

void FUN_7100765c90(void)

{
  FUN_7100764bd0();
  return;
}



// ===== FUN_7100765ca0 @ 7100765ca0 (size=892) =====

ulong FUN_7100765ca0(undefined4 *param_1,char param_2,undefined1 param_3,undefined2 param_4,
                    undefined2 param_5,ushort param_6,long param_7,undefined4 *param_8)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  long lVar10;
  undefined4 uVar11;
  uint *puVar12;
  uint *puVar13;
  ulong uVar14;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  uVar1 = (uint)param_6;
  uVar5 = FUN_7100769b90();
  if (uVar5 < 0x20000) {
    uVar5 = uVar1 + 0xfff & 0xfffff000;
    FUN_710076cf64(param_7,uVar1);
    local_18 = CONCAT26(param_6,CONCAT24(param_5,CONCAT22(param_4,CONCAT11(param_2,param_3))));
    local_10 = (ulong)local_10._4_4_ << 0x20;
    uVar3 = param_1[2];
    bVar2 = param_2 < '\0';
    if (bVar2) {
      puVar8 = (undefined8 *)tpidrro_el0;
      puVar13 = (uint *)(puVar8 + 1);
      puVar12 = (uint *)0x0;
      uVar11 = 6;
      *puVar8 = 0xf01000004;
    }
    else {
      puVar8 = (undefined8 *)tpidrro_el0;
      puVar12 = (uint *)(puVar8 + 1);
      uVar11 = 7;
      *puVar8 = 0xf00100004;
      puVar13 = (uint *)0x0;
    }
    *(undefined4 *)(puVar8 + 4) = 0x1c0001;
    *(undefined4 *)((long)puVar8 + 0x24) = uVar3;
    puVar8[5] = 0;
    puVar8[6] = 0x49434653;
    *(undefined4 *)(puVar8 + 7) = uVar11;
    *(undefined4 *)((long)puVar8 + 0x3c) = 0;
    uVar9 = (uint)((ulong)param_7 >> 0x20);
    if (bVar2) {
      if (bVar2) {
        *puVar13 = uVar5;
        puVar13[1] = (uint)param_7;
        puVar13[2] = uVar9 << 0x1c | (uVar9 >> 4 & 0x3fffff) << 2;
      }
    }
    else {
      *puVar12 = uVar5;
      puVar12[1] = (uint)param_7;
      puVar12[2] = uVar9 << 0x1c | (uVar9 >> 4 & 0x3fffff) << 2;
    }
    puVar8[8] = local_18;
    *(undefined4 *)(puVar8 + 9) = 0;
    uVar6 = FUN_710076d0c0(*param_1);
    uVar14 = uVar6 & 0xffffffff;
    if ((int)uVar6 == 0) {
      plVar4 = (long *)tpidrro_el0;
      if (*plVar4 < 0) {
        uVar5 = *(uint *)(plVar4 + 1);
        plVar7 = (long *)((long)plVar4 + 0x14);
        if ((uVar5 & 1) == 0) {
          plVar7 = (long *)((long)plVar4 + 0xc);
        }
        lVar10 = (((ulong)(uVar5 >> 1) & 0xf) + ((ulong)(uVar5 >> 5) & 0xf)) * 4;
      }
      else {
        plVar7 = plVar4 + 1;
        lVar10 = 0;
      }
      uVar14 = 0x5f59;
      uVar6 = (long)plVar7 +
              ((lVar10 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
              0xfffffffffffffff0;
      if (((*(int *)((long)plVar4 + uVar6 + 0x10) == 0x4f434653) &&
          (uVar5 = *(uint *)((long)plVar4 + uVar6 + 0x18), uVar14 = (ulong)uVar5, uVar5 == 0)) &&
         (param_8 != (undefined4 *)0x0)) {
        *param_8 = *(undefined4 *)((long)plVar4 + uVar6 + 0x20);
      }
    }
    if (-1 < param_2) {
      return uVar14;
    }
    FUN_710076cf64(param_7,uVar1);
  }
  else {
    uVar3 = param_1[2];
    plVar4 = (long *)tpidrro_el0;
    *plVar4 = 0x1000000004;
    plVar4[7] = param_7;
    *(undefined4 *)(plVar4 + 2) = 0x200001;
    *(undefined4 *)((long)plVar4 + 0x14) = uVar3;
    plVar4[3] = 0;
    plVar4[4] = 0x49434653;
    plVar4[5] = 5;
    plVar4[6] = (ulong)CONCAT24(param_5,CONCAT22(param_4,CONCAT11(param_3,param_2))) |
                (ulong)uVar1 << 0x30;
    uVar6 = FUN_710076d0c0(*param_1);
    uVar14 = uVar6 & 0xffffffff;
    if ((int)uVar6 == 0) {
      if (*plVar4 < 0) {
        uVar1 = *(uint *)(plVar4 + 1);
        plVar7 = (long *)((long)plVar4 + 0x14);
        if ((uVar1 & 1) == 0) {
          plVar7 = (long *)((long)plVar4 + 0xc);
        }
        lVar10 = (((ulong)(uVar1 >> 5) & 0xf) + ((ulong)(uVar1 >> 1) & 0xf)) * 4;
      }
      else {
        plVar7 = plVar4 + 1;
        lVar10 = 0;
      }
      uVar14 = 0x5f59;
      uVar6 = (long)plVar7 +
              ((lVar10 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
              0xfffffffffffffff0;
      if ((*(int *)((long)plVar4 + uVar6 + 0x10) == 0x4f434653) &&
         (uVar1 = *(uint *)((long)plVar4 + uVar6 + 0x18), uVar14 = (ulong)uVar1, uVar1 == 0)) {
        uVar6 = FUN_71007495a0(param_1 + 7,0xffffffffffffffff);
        uVar14 = uVar6 & 0xffffffff;
        if ((int)uVar6 == 0) {
          FUN_71007495e0(param_1 + 7);
          local_18 = 0;
          local_10 = 0;
          local_8 = 0;
          uVar6 = FUN_7100764ef0(*param_1,param_1[2],&local_18,0x18,7);
          uVar14 = uVar6 & 0xffffffff;
          if ((int)uVar6 == 0) {
            uVar14 = local_18 >> 0x20;
            *param_8 = local_10._4_4_;
          }
        }
      }
    }
  }
  return uVar14;
}



// ===== FUN_7100766020 @ 7100766020 (size=760) =====

int FUN_7100766020(int *param_1,int *param_2,ushort param_3,undefined4 param_4,long param_5)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  undefined8 *puVar4;
  long *plVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  int *piVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  bVar2 = *(byte *)(param_5 + 2);
  bVar3 = *(byte *)(param_5 + 3);
  uVar7 = FUN_7100769b90();
  iVar10 = param_1[2];
  uVar8 = 4;
  if (0x1ffff < uVar7) {
    uVar8 = 9;
  }
  iVar1 = *param_1;
  iVar6 = param_1[3];
  puVar4 = (undefined8 *)tpidrro_el0;
  if (iVar10 == 0) {
    puVar11 = puVar4 + 2;
    *puVar4 = 0xd00000004;
  }
  else {
    puVar11 = puVar4 + 4;
    puVar4[3] = 0;
    *puVar4 = 0x1100000004;
    *(undefined4 *)(puVar4 + 2) = 0x240001;
    *(int *)((long)puVar4 + 0x14) = iVar10;
  }
  *(undefined4 *)(puVar11 + 1) = uVar8;
  *(undefined4 *)((long)puVar11 + 0xc) = 0;
  *puVar11 = 0x49434653;
  *(undefined4 *)(puVar11 + 4) = param_4;
  puVar11[2] = CONCAT44((bVar3 & 3) + 1,(uint)param_3);
  puVar11[3] = CONCAT44((bVar2 >> 7) + 1,(uint)bVar2) & 0xffffffff0000000f;
  iVar9 = FUN_710076d0c0(*param_1);
  if (iVar9 != 0) {
    return iVar9;
  }
  plVar5 = (long *)tpidrro_el0;
  if (*plVar5 < 0) {
    uVar7 = *(uint *)(plVar5 + 1);
    lVar14 = (long)plVar5 + 0x14;
    if ((uVar7 & 1) == 0) {
      lVar14 = (long)plVar5 + 0xc;
    }
    plVar15 = (long *)(lVar14 + ((ulong)(uVar7 >> 1) & 0xf) * 4);
    lVar14 = ((ulong)(uVar7 >> 5) & 0xf) << 2;
  }
  else {
    plVar15 = plVar5 + 1;
    lVar14 = 0;
  }
  uVar13 = (long)plVar15 +
           ((lVar14 + (ulong)((uint)*plVar5 >> 0x10 & 0xf) * 8) - (long)plVar5) + 0xf &
           0xfffffffffffffff0;
  if (iVar10 == 0) {
    if (*(int *)((long)plVar5 + uVar13) != 0x4f434653) {
      return 0x5f59;
    }
    iVar10 = *(int *)((long)plVar5 + uVar13 + 8);
    if (iVar10 != 0) {
      return iVar10;
    }
    piVar12 = (int *)((long)plVar5 + uVar13 + 0x10);
    if ((int)*plVar15 == 0) {
LAB_71007662bc:
      param_2[0] = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
    }
    else {
      *param_2 = (int)*plVar15;
      *(short *)(param_2 + 3) = (short)iVar6;
      param_2[1] = 1;
      param_2[2] = 0;
    }
  }
  else {
    if (*(int *)((long)plVar5 + uVar13 + 0x10) != 0x4f434653) {
      return 0x5f59;
    }
    iVar10 = *(int *)((long)plVar5 + uVar13 + 0x18);
    if (iVar10 != 0) {
      return iVar10;
    }
    iVar10 = *(int *)((long)plVar5 + uVar13 + 0x27);
    piVar12 = (int *)((long)plVar5 + uVar13 + 0x20);
    if (iVar10 == 0) goto LAB_71007662bc;
    *param_2 = iVar1;
    param_2[1] = 0;
    param_2[2] = iVar10;
    *(short *)(param_2 + 3) = (short)iVar6;
  }
  uVar8 = *(undefined4 *)((long)piVar12 + 3);
  param_2[0xc] = *piVar12;
  *(undefined4 *)((long)param_2 + 0x33) = uVar8;
  uVar7 = FUN_7100769b90();
  if (0x1ffff < uVar7) {
    iVar10 = FUN_7100764fd0(*param_2,param_2[2],3);
    if (iVar10 == 0) {
      iVar10 = FUN_7100764df0(param_2,param_2 + 4,2);
      if (iVar10 == 0) goto LAB_71007661c8;
      iVar1 = param_2[2];
    }
    else {
      iVar1 = param_2[2];
    }
    if (param_2[1] == 0) {
      puVar4 = (undefined8 *)tpidrro_el0;
      *puVar4 = 0x800000004;
      puVar4[2] = 0;
      puVar4[3] = 0;
      *(undefined1 *)(puVar4 + 2) = 2;
      *(int *)((long)puVar4 + 0x14) = iVar1;
    }
    else {
      puVar4 = (undefined8 *)tpidrro_el0;
      *puVar4 = 2;
    }
    FUN_710076d0c0(*param_2);
    if (param_2[1] != 0) {
      FUN_710076d060(*param_2);
    }
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    FUN_7100749610(param_2 + 4);
    return iVar10;
  }
LAB_71007661c8:
  param_2[7] = (uint)param_3;
  return 0;
}



// ===== FUN_7100766330 @ 7100766330 (size=232) =====

void FUN_7100766330(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  if (*param_1 != 0) {
    uVar4 = FUN_7100769b90();
    if (uVar4 < 0x20000) {
      FUN_7100764fd0(*param_1,param_1[2],3);
      iVar1 = param_1[1];
      iVar2 = param_1[2];
    }
    else {
      FUN_7100764fd0(*param_1,param_1[2],1);
      iVar1 = param_1[1];
      iVar2 = param_1[2];
    }
    if (iVar1 == 0) {
      puVar3 = (undefined8 *)tpidrro_el0;
      *puVar3 = 0x800000004;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined1 *)(puVar3 + 2) = 2;
      *(int *)((long)puVar3 + 0x14) = iVar2;
      FUN_710076d0c0(*param_1);
      iVar2 = param_1[1];
    }
    else {
      puVar3 = (undefined8 *)tpidrro_el0;
      *puVar3 = 2;
      FUN_710076d0c0(*param_1);
      iVar2 = param_1[1];
    }
    if (iVar2 != 0) {
      FUN_710076d060(*param_1);
    }
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    FUN_7100749610(param_1 + 4);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    return;
  }
  return;
}



// ===== FUN_7100766420 @ 7100766420 (size=316) =====

ulong FUN_7100766420(undefined4 *param_1,long param_2,uint param_3,long param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  uVar3 = FUN_7100769b90();
  if (0x1ffff < uVar3) {
    uVar1 = param_1[2];
    plVar2 = (long *)tpidrro_el0;
    *plVar2 = 0x1200000004;
    plVar2[8] = param_4;
    *(undefined4 *)(plVar2 + 2) = 0x280001;
    *(undefined4 *)((long)plVar2 + 0x14) = uVar1;
    plVar2[3] = 0;
    plVar2[4] = 0x49434653;
    plVar2[5] = 4;
    plVar2[6] = (ulong)param_3;
    plVar2[7] = param_2;
    uVar4 = FUN_710076d0c0(*param_1);
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
      uVar6 = (long)plVar5 +
              ((lVar7 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf &
              0xfffffffffffffff0;
      uVar4 = 0x5f59;
      if (((*(int *)((long)plVar2 + uVar6 + 0x10) == 0x4f434653) &&
          (uVar3 = *(uint *)((long)plVar2 + uVar6 + 0x18), uVar4 = (ulong)uVar3, uVar3 == 0)) &&
         (param_5 != (undefined4 *)0x0)) {
        *param_5 = *(undefined4 *)((long)plVar2 + uVar6 + 0x20);
      }
    }
    return uVar4;
  }
  return 0x4b59;
}



// ===== FUN_7100766560 @ 7100766560 (size=836) =====

ulong FUN_7100766560(undefined4 *param_1,ulong *param_2,uint param_3,uint *param_4)

{
  ulong *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  ushort uVar6;
  long *plVar7;
  bool bVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  undefined4 uVar17;
  ulong *puVar18;
  long lVar19;
  ulong uVar20;
  undefined4 uVar21;
  int iVar22;
  long lVar23;
  
  uVar9 = FUN_7100769b90();
  if (uVar9 < 0x20000) {
    return 0x4b59;
  }
  puVar18 = *(ulong **)(param_1 + 10);
  uVar14 = (ulong)param_3 * 0x18;
  if (puVar18 == (ulong *)0x0) {
    uVar9 = FUN_7100769b90();
    uVar6 = *(ushort *)(param_1 + 3);
    puVar18 = (ulong *)tpidrro_el0;
    iVar5 = param_1[2];
    if (uVar9 < 0x30000) {
      if (iVar5 == 0) {
        lVar16 = 9;
        bVar8 = false;
        lVar23 = 0x24;
        lVar13 = 9;
        iVar22 = 6;
        lVar19 = 0;
      }
      else {
        lVar16 = 0xd;
        lVar23 = 0x34;
        lVar13 = 0xd;
        bVar8 = false;
        iVar22 = 6;
        lVar19 = 0;
      }
    }
    else {
      if (iVar5 == 0) {
        lVar16 = 10;
        lVar23 = 0x24;
        lVar13 = 10;
      }
      else {
        lVar16 = 0xe;
        lVar23 = 0x34;
        lVar13 = 0xe;
      }
      bVar8 = true;
      iVar22 = 0x22;
      lVar19 = 3;
    }
    *puVar18 = lVar16 << 0x20 | 0x1000004U | lVar19 << 0x2a;
    puVar2 = (undefined8 *)((long)puVar18 + lVar13 * 4 + 0x14);
    if (!bVar8) {
      puVar2 = (undefined8 *)0x0;
    }
    uVar9 = (uint)((ulong)param_2 >> 0x20);
    uVar15 = (uint)(uVar14 >> 0x20);
    uVar21 = SUB84(param_2,0);
    uVar17 = (undefined4)uVar14;
    if (iVar5 == 0) {
      puVar1 = puVar18 + 4;
      *puVar1 = 0x49434653;
      puVar18[5] = 5;
    }
    else {
      puVar18[5] = 0;
      puVar1 = puVar18 + 6;
      *(undefined4 *)(puVar18 + 4) = 0x140001;
      *(int *)((long)puVar18 + 0x24) = iVar5;
      *puVar1 = 0x49434653;
      puVar18[7] = 5;
    }
    if (iVar22 == 6) {
      uVar12 = uVar9 >> 4 & 0x3fffff;
      uVar15 = uVar15 & 0xf;
      uVar9 = uVar9 & 0xf;
    }
    else if (uVar6 == 0 || uVar6 < uVar14) {
      uVar12 = uVar9 >> 4 & 0x3fffff;
      uVar9 = uVar9 & 0xf;
      *puVar2 = 0;
      uVar15 = uVar15 & 0xf;
      *(undefined2 *)((long)puVar18 + lVar23 + 0x14) = 0;
    }
    else {
      *(undefined4 *)puVar2 = uVar21;
      uVar21 = 0;
      uVar12 = 0;
      *(short *)((long)puVar2 + 4) = (short)((ulong)param_2 >> 0x20);
      uVar9 = 0;
      *(short *)((long)puVar2 + 6) = (short)uVar14;
      uVar17 = 0;
      *(short *)((long)puVar18 + lVar23 + 0x14) = (short)uVar14;
      uVar15 = 0;
    }
    *(undefined4 *)(puVar18 + 1) = uVar17;
    *(undefined4 *)((long)puVar18 + 0xc) = uVar21;
    *(uint *)(puVar18 + 2) = uVar12 << 2 | uVar15 << 0x18 | uVar9 << 0x1c;
    *(uint *)(puVar1 + 2) = param_3;
    uVar14 = FUN_710076d0c0(*param_1);
    if ((int)uVar14 == 0) {
      plVar7 = (long *)tpidrro_el0;
      if (*plVar7 < 0) {
        uVar9 = *(uint *)(plVar7 + 1);
        plVar11 = (long *)((long)plVar7 + 0x14);
        if ((uVar9 & 1) == 0) {
          plVar11 = (long *)((long)plVar7 + 0xc);
        }
        lVar13 = (((ulong)(uVar9 >> 5) & 0xf) + ((ulong)(uVar9 >> 1) & 0xf)) * 4;
      }
      else {
        plVar11 = plVar7 + 1;
        lVar13 = 0;
      }
      piVar3 = (int *)((long)plVar7 +
                      ((long)plVar11 +
                       ((lVar13 + (ulong)((uint)*plVar7 >> 0x10 & 0xf) * 8) - (long)plVar7) + 0xf &
                      0xfffffffffffffff0));
      piVar4 = piVar3 + 4;
      if (iVar5 == 0) {
        piVar4 = piVar3;
      }
      if (*piVar4 != 0x4f434653) {
        return 0x5f59;
      }
      if (piVar4[2] != 0) {
        return (ulong)(uint)piVar4[2];
      }
      if (param_4 != (uint *)0x0) {
        *param_4 = piVar4[4];
      }
      return 0;
    }
    return uVar14;
  }
  FUN_7100808340(param_2,0);
  uVar9 = param_3;
  if (param_3 != 0) {
    uVar15 = 0;
    do {
      uVar14 = puVar18[1];
      uVar9 = uVar15;
      if (*puVar18 == uVar14) break;
      if (*(ulong *)(param_1 + 8) <= uVar14) {
        return 0x6159;
      }
      uVar20 = puVar18[uVar14 * 3 + 3];
      uVar10 = puVar18[uVar14 * 3 + 4];
      *param_2 = puVar18[uVar14 * 3 + 2];
      param_2[1] = uVar20;
      param_2[2] = uVar10;
      DataMemoryBarrier(3,3);
      uVar15 = uVar15 + 1;
      param_2 = param_2 + 3;
      uVar20 = *(ulong *)(param_1 + 8);
      uVar14 = 0;
      if (uVar20 != 0) {
        uVar14 = (puVar18[1] + 1) / uVar20;
      }
      puVar18[1] = (puVar18[1] + 1) - uVar14 * uVar20;
      uVar9 = param_3;
    } while (param_3 != uVar15);
  }
  *param_4 = uVar9;
  return 0;
}



// ===== FUN_71007668b0 @ 71007668b0 (size=636) =====

ulong FUN_71007668b0(undefined4 *param_1,undefined8 param_2,uint param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 local_20;
  int local_1c;
  ulong local_18;
  undefined8 uStack_10;
  undefined4 uStack_c;
  undefined8 local_8;
  
  uVar11 = (ulong)param_3;
  local_20 = 0;
  local_1c = 0;
  uVar5 = FUN_7100769b90();
  if (uVar5 < 0x20000) {
    uVar5 = param_3 + 0xfff & 0xfffff000;
    cVar2 = *(char *)((long)param_1 + 0x32);
    FUN_710076cf64(param_2,param_3);
    uVar1 = param_1[2];
    uVar9 = (uint)((ulong)param_2 >> 0x20);
    if (cVar2 < '\0') {
      puVar3 = (undefined8 *)tpidrro_el0;
      *puVar3 = 0xe01000004;
      *(undefined4 *)(puVar3 + 4) = 0x180001;
      *(undefined4 *)((long)puVar3 + 0x24) = uVar1;
      puVar3[5] = 0;
      puVar3[6] = 0x49434653;
      puVar3[7] = 1;
      *(uint *)(puVar3 + 1) = uVar5;
      *(int *)((long)puVar3 + 0xc) = (int)param_2;
      *(uint *)(puVar3 + 2) = uVar9 << 0x1c | (uVar9 >> 4 & 0x3fffff) << 2;
      puVar3[8] = uVar11;
      uVar12 = FUN_710076d0c0(*param_1);
      iVar6 = (int)uVar12;
    }
    else {
      puVar3 = (undefined8 *)tpidrro_el0;
      *puVar3 = 0xe00100004;
      *(uint *)(puVar3 + 1) = uVar5;
      *(int *)((long)puVar3 + 0xc) = (int)param_2;
      *(undefined4 *)(puVar3 + 4) = 0x180001;
      *(undefined4 *)((long)puVar3 + 0x24) = uVar1;
      puVar3[7] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0x49434653;
      *(uint *)(puVar3 + 2) = uVar9 << 0x1c | (uVar9 >> 4 & 0x3fffff) << 2;
      puVar3[8] = uVar11;
      uVar12 = FUN_710076d0c0(*param_1);
      iVar6 = (int)uVar12;
    }
    uVar12 = uVar12 & 0xffffffff;
    if (iVar6 == 0) {
      plVar4 = (long *)tpidrro_el0;
      if (*plVar4 < 0) {
        uVar5 = *(uint *)(plVar4 + 1);
        plVar7 = (long *)((long)plVar4 + 0x14);
        if ((uVar5 & 1) == 0) {
          plVar7 = (long *)((long)plVar4 + 0xc);
        }
        lVar10 = (((ulong)(uVar5 >> 5) & 0xf) + ((ulong)(uVar5 >> 1) & 0xf)) * 4;
      }
      else {
        plVar7 = plVar4 + 1;
        lVar10 = 0;
      }
      uVar12 = 0x5f59;
      uVar8 = (long)plVar7 +
              ((lVar10 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
              0xfffffffffffffff0;
      if (((*(int *)((long)plVar4 + uVar8 + 0x10) == 0x4f434653) &&
          (uVar5 = *(uint *)((long)plVar4 + uVar8 + 0x18), uVar12 = (ulong)uVar5, uVar5 == 0)) &&
         (param_4 != (undefined4 *)0x0)) {
        *param_4 = *(undefined4 *)((long)plVar4 + uVar8 + 0x20);
      }
    }
    if (-1 < cVar2) {
      return uVar12;
    }
    FUN_710076cf64(param_2,uVar11);
  }
  else {
    uVar11 = FUN_7100766420(param_1,param_2,uVar11,0,&local_20);
    uVar12 = uVar11 & 0xffffffff;
    if ((int)uVar11 == 0) {
      uVar11 = FUN_71007495a0(param_1 + 4,0xffffffffffffffff);
      uVar12 = uVar11 & 0xffffffff;
      if ((int)uVar11 == 0) {
        FUN_71007495e0(param_1 + 4);
        local_18 = 0;
        uStack_10 = 0;
        local_8 = 0;
        uVar11 = FUN_7100766560(param_1,&local_18,1,&local_1c);
        uVar12 = uVar11 & 0xffffffff;
        if (((int)uVar11 == 0) && (uVar12 = 0x1759, local_1c != 0)) {
          uVar12 = local_18 >> 0x20;
          *param_4 = uStack_c;
        }
      }
    }
  }
  return uVar12;
}



// ===== FUN_7100766b30 @ 7100766b30 (size=224) =====

void FUN_7100766b30(ulong *param_1,ulong *param_2,uint param_3)

{
  ulong uVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  uVar10 = *param_2;
  uVar7 = param_2[1];
  uVar4 = 4;
  *param_1 = uVar10;
  param_1[1] = uVar7;
  uVar1 = uVar7 >> 0x20;
  uVar8 = uVar10 >> 0x20;
  uVar10 = uVar10 & 0xffffffff;
  do {
    uVar9 = uVar8;
    uVar6 = uVar1;
    uVar5 = (uint)uVar6;
    if ((uVar4 & 3) == 0) {
      uVar5 = ((uint)(byte)(&DAT_71009c5690)[uVar6 >> 0x10 & 0xff] << 8 |
               (uint)(byte)(&DAT_71009c5690)[uVar5 & 0xff] << 0x18 |
              (uint)(byte)(&DAT_71009c5690)[uVar6 >> 8 & 0xff] |
              (uint)(byte)(&DAT_71009c5690)[uVar5 >> 0x18] << 0x10) ^
              (uint)(byte)(&UNK_71009c567f)[uVar4 >> 2] ^ (uint)uVar10;
      *(uint *)((long)param_1 + uVar4 * 4) = uVar5;
    }
    else {
      uVar5 = uVar5 ^ (uint)uVar10;
      *(uint *)((long)param_1 + uVar4 * 4) = uVar5;
      if (uVar4 == 0x2b) {
        if ((param_3 & 1) == 0) {
          pauVar2 = (undefined1 (*) [16])(param_1 + 2);
          do {
            auVar11 = NEON_aesimc(*pauVar2,*pauVar2);
            pauVar3 = pauVar2 + 1;
            *pauVar2 = auVar11;
            pauVar2 = pauVar3;
          } while ((undefined1 (*) [16])(param_1 + 0x14) != pauVar3);
        }
        return;
      }
    }
    uVar4 = uVar4 + 1;
    uVar8 = uVar7 & 0xffffffff;
    uVar1 = (ulong)uVar5;
    uVar7 = uVar6;
    uVar10 = uVar9;
  } while( true );
}



// ===== FUN_7100766c10 @ 7100766c10 (size=136) =====

void FUN_7100766c10(unkbyte9 *param_1,byte *param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  uVar10 = *(undefined8 *)((long)param_1 + 8);
  auVar12[9] = (char)((ulong)uVar10 >> 8);
  auVar12._0_9_ = *param_1;
  auVar12[10] = (char)((ulong)uVar10 >> 0x10);
  auVar12[0xb] = (char)((ulong)uVar10 >> 0x18);
  auVar12[0xc] = (char)((ulong)uVar10 >> 0x20);
  auVar12[0xd] = (char)((ulong)uVar10 >> 0x28);
  auVar12[0xe] = (char)((ulong)uVar10 >> 0x30);
  auVar12[0xf] = (char)((ulong)uVar10 >> 0x38);
  auVar12 = NEON_aese(*param_3,auVar12);
  auVar12 = NEON_aesmc(auVar12,auVar12);
  uVar10 = *(undefined8 *)((long)param_1 + 0x18);
  auVar1[9] = (char)((ulong)uVar10 >> 8);
  auVar1._0_9_ = param_1[1];
  auVar1[10] = (char)((ulong)uVar10 >> 0x10);
  auVar1[0xb] = (char)((ulong)uVar10 >> 0x18);
  auVar1[0xc] = (char)((ulong)uVar10 >> 0x20);
  auVar1[0xd] = (char)((ulong)uVar10 >> 0x28);
  auVar1[0xe] = (char)((ulong)uVar10 >> 0x30);
  auVar1[0xf] = (char)((ulong)uVar10 >> 0x38);
  auVar12 = NEON_aese(auVar12,auVar1);
  auVar12 = NEON_aesmc(auVar12,auVar12);
  uVar10 = *(undefined8 *)((long)param_1 + 0x28);
  auVar2[9] = (char)((ulong)uVar10 >> 8);
  auVar2._0_9_ = param_1[2];
  auVar2[10] = (char)((ulong)uVar10 >> 0x10);
  auVar2[0xb] = (char)((ulong)uVar10 >> 0x18);
  auVar2[0xc] = (char)((ulong)uVar10 >> 0x20);
  auVar2[0xd] = (char)((ulong)uVar10 >> 0x28);
  auVar2[0xe] = (char)((ulong)uVar10 >> 0x30);
  auVar2[0xf] = (char)((ulong)uVar10 >> 0x38);
  auVar12 = NEON_aese(auVar12,auVar2);
  auVar12 = NEON_aesmc(auVar12,auVar12);
  uVar10 = *(undefined8 *)((long)param_1 + 0x38);
  auVar3[9] = (char)((ulong)uVar10 >> 8);
  auVar3._0_9_ = param_1[3];
  auVar3[10] = (char)((ulong)uVar10 >> 0x10);
  auVar3[0xb] = (char)((ulong)uVar10 >> 0x18);
  auVar3[0xc] = (char)((ulong)uVar10 >> 0x20);
  auVar3[0xd] = (char)((ulong)uVar10 >> 0x28);
  auVar3[0xe] = (char)((ulong)uVar10 >> 0x30);
  auVar3[0xf] = (char)((ulong)uVar10 >> 0x38);
  auVar12 = NEON_aese(auVar12,auVar3);
  auVar12 = NEON_aesmc(auVar12,auVar12);
  uVar10 = *(undefined8 *)((long)param_1 + 0x48);
  auVar4[9] = (char)((ulong)uVar10 >> 8);
  auVar4._0_9_ = param_1[4];
  auVar4[10] = (char)((ulong)uVar10 >> 0x10);
  auVar4[0xb] = (char)((ulong)uVar10 >> 0x18);
  auVar4[0xc] = (char)((ulong)uVar10 >> 0x20);
  auVar4[0xd] = (char)((ulong)uVar10 >> 0x28);
  auVar4[0xe] = (char)((ulong)uVar10 >> 0x30);
  auVar4[0xf] = (char)((ulong)uVar10 >> 0x38);
  auVar12 = NEON_aese(auVar12,auVar4);
  auVar12 = NEON_aesmc(auVar12,auVar12);
  uVar10 = *(undefined8 *)((long)param_1 + 0x58);
  auVar5[9] = (char)((ulong)uVar10 >> 8);
  auVar5._0_9_ = param_1[5];
  auVar5[10] = (char)((ulong)uVar10 >> 0x10);
  auVar5[0xb] = (char)((ulong)uVar10 >> 0x18);
  auVar5[0xc] = (char)((ulong)uVar10 >> 0x20);
  auVar5[0xd] = (char)((ulong)uVar10 >> 0x28);
  auVar5[0xe] = (char)((ulong)uVar10 >> 0x30);
  auVar5[0xf] = (char)((ulong)uVar10 >> 0x38);
  auVar12 = NEON_aese(auVar12,auVar5);
  auVar12 = NEON_aesmc(auVar12,auVar12);
  uVar10 = *(undefined8 *)((long)param_1 + 0x68);
  auVar6[9] = (char)((ulong)uVar10 >> 8);
  auVar6._0_9_ = param_1[6];
  auVar6[10] = (char)((ulong)uVar10 >> 0x10);
  auVar6[0xb] = (char)((ulong)uVar10 >> 0x18);
  auVar6[0xc] = (char)((ulong)uVar10 >> 0x20);
  auVar6[0xd] = (char)((ulong)uVar10 >> 0x28);
  auVar6[0xe] = (char)((ulong)uVar10 >> 0x30);
  auVar6[0xf] = (char)((ulong)uVar10 >> 0x38);
  auVar12 = NEON_aese(auVar12,auVar6);
  auVar12 = NEON_aesmc(auVar12,auVar12);
  uVar10 = *(undefined8 *)((long)param_1 + 0x78);
  auVar7[9] = (char)((ulong)uVar10 >> 8);
  auVar7._0_9_ = param_1[7];
  auVar7[10] = (char)((ulong)uVar10 >> 0x10);
  auVar7[0xb] = (char)((ulong)uVar10 >> 0x18);
  auVar7[0xc] = (char)((ulong)uVar10 >> 0x20);
  auVar7[0xd] = (char)((ulong)uVar10 >> 0x28);
  auVar7[0xe] = (char)((ulong)uVar10 >> 0x30);
  auVar7[0xf] = (char)((ulong)uVar10 >> 0x38);
  auVar12 = NEON_aese(auVar12,auVar7);
  auVar12 = NEON_aesmc(auVar12,auVar12);
  uVar10 = *(undefined8 *)((long)param_1 + 0x88);
  auVar8[9] = (char)((ulong)uVar10 >> 8);
  auVar8._0_9_ = param_1[8];
  auVar8[10] = (char)((ulong)uVar10 >> 0x10);
  auVar8[0xb] = (char)((ulong)uVar10 >> 0x18);
  auVar8[0xc] = (char)((ulong)uVar10 >> 0x20);
  auVar8[0xd] = (char)((ulong)uVar10 >> 0x28);
  auVar8[0xe] = (char)((ulong)uVar10 >> 0x30);
  auVar8[0xf] = (char)((ulong)uVar10 >> 0x38);
  auVar12 = NEON_aese(auVar12,auVar8);
  auVar12 = NEON_aesmc(auVar12,auVar12);
  uVar10 = *(undefined8 *)((long)param_1 + 0x98);
  auVar9[9] = (char)((ulong)uVar10 >> 8);
  auVar9._0_9_ = param_1[9];
  auVar9[10] = (char)((ulong)uVar10 >> 0x10);
  auVar9[0xb] = (char)((ulong)uVar10 >> 0x18);
  auVar9[0xc] = (char)((ulong)uVar10 >> 0x20);
  auVar9[0xd] = (char)((ulong)uVar10 >> 0x28);
  auVar9[0xe] = (char)((ulong)uVar10 >> 0x30);
  auVar9[0xf] = (char)((ulong)uVar10 >> 0x38);
  auVar12 = NEON_aese(auVar12,auVar9);
  uVar11 = *(undefined8 *)((long)param_1 + 0xa8);
  uVar10 = *(undefined8 *)(param_1 + 10);
  *param_2 = auVar12[0] ^ (byte)uVar10;
  param_2[1] = auVar12[1] ^ (byte)((ulong)uVar10 >> 8);
  param_2[2] = auVar12[2] ^ (byte)((ulong)uVar10 >> 0x10);
  param_2[3] = auVar12[3] ^ (byte)((ulong)uVar10 >> 0x18);
  param_2[4] = auVar12[4] ^ (byte)((ulong)uVar10 >> 0x20);
  param_2[5] = auVar12[5] ^ (byte)((ulong)uVar10 >> 0x28);
  param_2[6] = auVar12[6] ^ (byte)((ulong)uVar10 >> 0x30);
  param_2[7] = auVar12[7] ^ (byte)((ulong)uVar10 >> 0x38);
  param_2[8] = auVar12[8] ^ (byte)uVar11;
  param_2[9] = auVar12[9] ^ (byte)((ulong)uVar11 >> 8);
  param_2[10] = auVar12[10] ^ (byte)((ulong)uVar11 >> 0x10);
  param_2[0xb] = auVar12[0xb] ^ (byte)((ulong)uVar11 >> 0x18);
  param_2[0xc] = auVar12[0xc] ^ (byte)((ulong)uVar11 >> 0x20);
  param_2[0xd] = auVar12[0xd] ^ (byte)((ulong)uVar11 >> 0x28);
  param_2[0xe] = auVar12[0xe] ^ (byte)((ulong)uVar11 >> 0x30);
  param_2[0xf] = auVar12[0xf] ^ (byte)((ulong)uVar11 >> 0x38);
  return;
}



// ===== FUN_7100766ca0 @ 7100766ca0 (size=136) =====

void FUN_7100766ca0(undefined8 *param_1,byte *param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  uVar10 = param_1[0x15];
  auVar12[9] = (char)((ulong)uVar10 >> 8);
  auVar12._0_9_ = *(unkbyte9 *)(param_1 + 0x14);
  auVar12[10] = (char)((ulong)uVar10 >> 0x10);
  auVar12[0xb] = (char)((ulong)uVar10 >> 0x18);
  auVar12[0xc] = (char)((ulong)uVar10 >> 0x20);
  auVar12[0xd] = (char)((ulong)uVar10 >> 0x28);
  auVar12[0xe] = (char)((ulong)uVar10 >> 0x30);
  auVar12[0xf] = (char)((ulong)uVar10 >> 0x38);
  auVar12 = NEON_aesd(*param_3,auVar12);
  auVar12 = NEON_aesimc(auVar12,auVar12);
  uVar10 = param_1[0x13];
  auVar1[9] = (char)((ulong)uVar10 >> 8);
  auVar1._0_9_ = *(unkbyte9 *)(param_1 + 0x12);
  auVar1[10] = (char)((ulong)uVar10 >> 0x10);
  auVar1[0xb] = (char)((ulong)uVar10 >> 0x18);
  auVar1[0xc] = (char)((ulong)uVar10 >> 0x20);
  auVar1[0xd] = (char)((ulong)uVar10 >> 0x28);
  auVar1[0xe] = (char)((ulong)uVar10 >> 0x30);
  auVar1[0xf] = (char)((ulong)uVar10 >> 0x38);
  auVar12 = NEON_aesd(auVar12,auVar1);
  auVar12 = NEON_aesimc(auVar12,auVar12);
  uVar10 = param_1[0x11];
  auVar2[9] = (char)((ulong)uVar10 >> 8);
  auVar2._0_9_ = *(unkbyte9 *)(param_1 + 0x10);
  auVar2[10] = (char)((ulong)uVar10 >> 0x10);
  auVar2[0xb] = (char)((ulong)uVar10 >> 0x18);
  auVar2[0xc] = (char)((ulong)uVar10 >> 0x20);
  auVar2[0xd] = (char)((ulong)uVar10 >> 0x28);
  auVar2[0xe] = (char)((ulong)uVar10 >> 0x30);
  auVar2[0xf] = (char)((ulong)uVar10 >> 0x38);
  auVar12 = NEON_aesd(auVar12,auVar2);
  auVar12 = NEON_aesimc(auVar12,auVar12);
  uVar10 = param_1[0xf];
  auVar3[9] = (char)((ulong)uVar10 >> 8);
  auVar3._0_9_ = *(unkbyte9 *)(param_1 + 0xe);
  auVar3[10] = (char)((ulong)uVar10 >> 0x10);
  auVar3[0xb] = (char)((ulong)uVar10 >> 0x18);
  auVar3[0xc] = (char)((ulong)uVar10 >> 0x20);
  auVar3[0xd] = (char)((ulong)uVar10 >> 0x28);
  auVar3[0xe] = (char)((ulong)uVar10 >> 0x30);
  auVar3[0xf] = (char)((ulong)uVar10 >> 0x38);
  auVar12 = NEON_aesd(auVar12,auVar3);
  auVar12 = NEON_aesimc(auVar12,auVar12);
  uVar10 = param_1[0xd];
  auVar4[9] = (char)((ulong)uVar10 >> 8);
  auVar4._0_9_ = *(unkbyte9 *)(param_1 + 0xc);
  auVar4[10] = (char)((ulong)uVar10 >> 0x10);
  auVar4[0xb] = (char)((ulong)uVar10 >> 0x18);
  auVar4[0xc] = (char)((ulong)uVar10 >> 0x20);
  auVar4[0xd] = (char)((ulong)uVar10 >> 0x28);
  auVar4[0xe] = (char)((ulong)uVar10 >> 0x30);
  auVar4[0xf] = (char)((ulong)uVar10 >> 0x38);
  auVar12 = NEON_aesd(auVar12,auVar4);
  auVar12 = NEON_aesimc(auVar12,auVar12);
  uVar10 = param_1[0xb];
  auVar5[9] = (char)((ulong)uVar10 >> 8);
  auVar5._0_9_ = *(unkbyte9 *)(param_1 + 10);
  auVar5[10] = (char)((ulong)uVar10 >> 0x10);
  auVar5[0xb] = (char)((ulong)uVar10 >> 0x18);
  auVar5[0xc] = (char)((ulong)uVar10 >> 0x20);
  auVar5[0xd] = (char)((ulong)uVar10 >> 0x28);
  auVar5[0xe] = (char)((ulong)uVar10 >> 0x30);
  auVar5[0xf] = (char)((ulong)uVar10 >> 0x38);
  auVar12 = NEON_aesd(auVar12,auVar5);
  auVar12 = NEON_aesimc(auVar12,auVar12);
  uVar10 = param_1[9];
  auVar6[9] = (char)((ulong)uVar10 >> 8);
  auVar6._0_9_ = *(unkbyte9 *)(param_1 + 8);
  auVar6[10] = (char)((ulong)uVar10 >> 0x10);
  auVar6[0xb] = (char)((ulong)uVar10 >> 0x18);
  auVar6[0xc] = (char)((ulong)uVar10 >> 0x20);
  auVar6[0xd] = (char)((ulong)uVar10 >> 0x28);
  auVar6[0xe] = (char)((ulong)uVar10 >> 0x30);
  auVar6[0xf] = (char)((ulong)uVar10 >> 0x38);
  auVar12 = NEON_aesd(auVar12,auVar6);
  auVar12 = NEON_aesimc(auVar12,auVar12);
  uVar10 = param_1[7];
  auVar7[9] = (char)((ulong)uVar10 >> 8);
  auVar7._0_9_ = *(unkbyte9 *)(param_1 + 6);
  auVar7[10] = (char)((ulong)uVar10 >> 0x10);
  auVar7[0xb] = (char)((ulong)uVar10 >> 0x18);
  auVar7[0xc] = (char)((ulong)uVar10 >> 0x20);
  auVar7[0xd] = (char)((ulong)uVar10 >> 0x28);
  auVar7[0xe] = (char)((ulong)uVar10 >> 0x30);
  auVar7[0xf] = (char)((ulong)uVar10 >> 0x38);
  auVar12 = NEON_aesd(auVar12,auVar7);
  auVar12 = NEON_aesimc(auVar12,auVar12);
  uVar10 = param_1[5];
  auVar8[9] = (char)((ulong)uVar10 >> 8);
  auVar8._0_9_ = *(unkbyte9 *)(param_1 + 4);
  auVar8[10] = (char)((ulong)uVar10 >> 0x10);
  auVar8[0xb] = (char)((ulong)uVar10 >> 0x18);
  auVar8[0xc] = (char)((ulong)uVar10 >> 0x20);
  auVar8[0xd] = (char)((ulong)uVar10 >> 0x28);
  auVar8[0xe] = (char)((ulong)uVar10 >> 0x30);
  auVar8[0xf] = (char)((ulong)uVar10 >> 0x38);
  auVar12 = NEON_aesd(auVar12,auVar8);
  auVar12 = NEON_aesimc(auVar12,auVar12);
  uVar10 = param_1[3];
  auVar9[9] = (char)((ulong)uVar10 >> 8);
  auVar9._0_9_ = *(unkbyte9 *)(param_1 + 2);
  auVar9[10] = (char)((ulong)uVar10 >> 0x10);
  auVar9[0xb] = (char)((ulong)uVar10 >> 0x18);
  auVar9[0xc] = (char)((ulong)uVar10 >> 0x20);
  auVar9[0xd] = (char)((ulong)uVar10 >> 0x28);
  auVar9[0xe] = (char)((ulong)uVar10 >> 0x30);
  auVar9[0xf] = (char)((ulong)uVar10 >> 0x38);
  auVar12 = NEON_aesd(auVar12,auVar9);
  uVar11 = param_1[1];
  uVar10 = *param_1;
  *param_2 = auVar12[0] ^ (byte)uVar10;
  param_2[1] = auVar12[1] ^ (byte)((ulong)uVar10 >> 8);
  param_2[2] = auVar12[2] ^ (byte)((ulong)uVar10 >> 0x10);
  param_2[3] = auVar12[3] ^ (byte)((ulong)uVar10 >> 0x18);
  param_2[4] = auVar12[4] ^ (byte)((ulong)uVar10 >> 0x20);
  param_2[5] = auVar12[5] ^ (byte)((ulong)uVar10 >> 0x28);
  param_2[6] = auVar12[6] ^ (byte)((ulong)uVar10 >> 0x30);
  param_2[7] = auVar12[7] ^ (byte)((ulong)uVar10 >> 0x38);
  param_2[8] = auVar12[8] ^ (byte)uVar11;
  param_2[9] = auVar12[9] ^ (byte)((ulong)uVar11 >> 8);
  param_2[10] = auVar12[10] ^ (byte)((ulong)uVar11 >> 0x10);
  param_2[0xb] = auVar12[0xb] ^ (byte)((ulong)uVar11 >> 0x18);
  param_2[0xc] = auVar12[0xc] ^ (byte)((ulong)uVar11 >> 0x20);
  param_2[0xd] = auVar12[0xd] ^ (byte)((ulong)uVar11 >> 0x28);
  param_2[0xe] = auVar12[0xe] ^ (byte)((ulong)uVar11 >> 0x30);
  param_2[0xf] = auVar12[0xf] ^ (byte)((ulong)uVar11 >> 0x38);
  return;
}



// ===== FUN_7100766d30 @ 7100766d30 (size=20) =====

void FUN_7100766d30(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  return;
}



// ===== FUN_7100766d50 @ 7100766d50 (size=48) =====

void FUN_7100766d50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_7100766b30(param_1,param_2,1);
  FUN_7100766d30(param_1,param_3);
  return;
}



// ===== FUN_7100766d80 @ 7100766d80 (size=1160) =====

void FUN_7100766d80(undefined1 (*param_1) [16],undefined8 *param_2,undefined8 *param_3,ulong param_4
                   )

{
  ulong uVar1;
  undefined1 (*pauVar2) [16];
  byte *pbVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  ulong uVar36;
  ulong uVar37;
  undefined8 *puVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  undefined8 *puVar42;
  undefined8 *puVar43;
  ulong uVar44;
  ulong uVar45;
  long lVar46;
  ulong uVar47;
  ulong uVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  
  lVar46 = *(long *)param_1[0xd];
  if (lVar46 != 0) {
    uVar45 = 0x10U - lVar46;
    if (param_4 < 0x10U - lVar46) {
      uVar45 = param_4;
    }
    if (uVar45 != 0) {
      uVar44 = 0;
      do {
        *(byte *)((long)param_2 + uVar44) =
             param_1[0xc][lVar46 + uVar44] ^ *(byte *)((long)param_3 + uVar44);
        uVar44 = uVar44 + 1;
        lVar46 = *(long *)param_1[0xd];
      } while (uVar45 != uVar44);
    }
    param_2 = (undefined8 *)((long)param_2 + uVar45);
    param_3 = (undefined8 *)((long)param_3 + uVar45);
    param_4 = param_4 - uVar45;
    lVar46 = uVar45 + lVar46;
    if (lVar46 == 0x10) {
      lVar46 = 0;
    }
    *(long *)param_1[0xd] = lVar46;
  }
  if (param_4 < 0x10) goto LAB_7100766e0c;
  auVar79 = *param_1;
  pauVar2 = param_1 + 1;
  auVar11 = *pauVar2;
  auVar51 = *pauVar2;
  auVar54 = *pauVar2;
  auVar4 = *pauVar2;
  uVar37 = param_4 >> 4;
  pauVar2 = param_1 + 2;
  auVar14 = *pauVar2;
  auVar13 = *pauVar2;
  auVar12 = *pauVar2;
  auVar80 = *pauVar2;
  pauVar2 = param_1 + 3;
  auVar17 = *pauVar2;
  auVar16 = *pauVar2;
  auVar15 = *pauVar2;
  auVar81 = *pauVar2;
  pauVar2 = param_1 + 4;
  auVar20 = *pauVar2;
  auVar19 = *pauVar2;
  auVar18 = *pauVar2;
  auVar5 = *pauVar2;
  pauVar2 = param_1 + 5;
  auVar23 = *pauVar2;
  auVar22 = *pauVar2;
  auVar21 = *pauVar2;
  auVar6 = *pauVar2;
  pauVar2 = param_1 + 6;
  auVar26 = *pauVar2;
  auVar25 = *pauVar2;
  auVar24 = *pauVar2;
  auVar7 = *pauVar2;
  pauVar2 = param_1 + 7;
  auVar29 = *pauVar2;
  auVar28 = *pauVar2;
  auVar27 = *pauVar2;
  auVar8 = *pauVar2;
  pauVar2 = param_1 + 8;
  auVar32 = *pauVar2;
  auVar31 = *pauVar2;
  auVar30 = *pauVar2;
  auVar9 = *pauVar2;
  pauVar2 = param_1 + 9;
  auVar35 = *pauVar2;
  auVar34 = *pauVar2;
  auVar33 = *pauVar2;
  auVar10 = *pauVar2;
  uVar57 = *(undefined8 *)(param_1[10] + 8);
  bVar71 = (byte)uVar57;
  bVar72 = (byte)((ulong)uVar57 >> 8);
  bVar73 = (byte)((ulong)uVar57 >> 0x10);
  bVar74 = (byte)((ulong)uVar57 >> 0x18);
  bVar75 = (byte)((ulong)uVar57 >> 0x20);
  bVar76 = (byte)((ulong)uVar57 >> 0x28);
  bVar77 = (byte)((ulong)uVar57 >> 0x30);
  bVar78 = (byte)((ulong)uVar57 >> 0x38);
  uVar57 = *(undefined8 *)param_1[10];
  bVar63 = (byte)uVar57;
  bVar64 = (byte)((ulong)uVar57 >> 8);
  bVar65 = (byte)((ulong)uVar57 >> 0x10);
  bVar66 = (byte)((ulong)uVar57 >> 0x18);
  bVar67 = (byte)((ulong)uVar57 >> 0x20);
  bVar68 = (byte)((ulong)uVar57 >> 0x28);
  bVar69 = (byte)((ulong)uVar57 >> 0x30);
  bVar70 = (byte)((ulong)uVar57 >> 0x38);
  uVar48 = *(ulong *)(param_1[0xb] + 8);
  uVar44 = *(ulong *)param_1[0xb];
  puVar38 = param_3;
  puVar42 = param_2;
  uVar45 = uVar37;
  if (param_4 < 0x30) {
LAB_7100766e4c:
    lVar46 = 0;
    while( true ) {
      auVar54._8_8_ = uVar48;
      auVar54._0_8_ = uVar44;
      auVar54 = NEON_aese(auVar54,auVar79);
      auVar54 = NEON_aesmc(auVar54,auVar54);
      auVar54 = NEON_aese(auVar54,auVar4);
      auVar54 = NEON_aesmc(auVar54,auVar54);
      auVar54 = NEON_aese(auVar54,auVar80);
      auVar54 = NEON_aesmc(auVar54,auVar54);
      uVar44 = (uVar44 & 0xff00ff00ff00ff00) >> 8 | (uVar44 & 0xff00ff00ff00ff) << 8;
      uVar44 = (uVar44 & 0xffff0000ffff0000) >> 0x10 | (uVar44 & 0xffff0000ffff) << 0x10;
      uVar44 = uVar44 >> 0x20 | uVar44 << 0x20;
      auVar54 = NEON_aese(auVar54,auVar81);
      auVar54 = NEON_aesmc(auVar54,auVar54);
      uVar48 = (uVar48 & 0xff00ff00ff00ff00) >> 8 | (uVar48 & 0xff00ff00ff00ff) << 8;
      uVar48 = (uVar48 & 0xffff0000ffff0000) >> 0x10 | (uVar48 & 0xffff0000ffff) << 0x10;
      uVar47 = uVar48 >> 0x20 | uVar48 << 0x20;
      auVar54 = NEON_aese(auVar54,auVar5);
      auVar54 = NEON_aesmc(auVar54,auVar54);
      uVar48 = uVar47 + 1;
      auVar54 = NEON_aese(auVar54,auVar6);
      auVar54 = NEON_aesmc(auVar54,auVar54);
      if (uVar47 == 0xffffffffffffffff) {
        uVar44 = uVar44 + 1;
      }
      auVar54 = NEON_aese(auVar54,auVar7);
      auVar54 = NEON_aesmc(auVar54,auVar54);
      uVar44 = (uVar44 & 0xff00ff00ff00ff00) >> 8 | (uVar44 & 0xff00ff00ff00ff) << 8;
      uVar44 = (uVar44 & 0xffff0000ffff0000) >> 0x10 | (uVar44 & 0xffff0000ffff) << 0x10;
      uVar44 = uVar44 >> 0x20 | uVar44 << 0x20;
      auVar54 = NEON_aese(auVar54,auVar8);
      auVar54 = NEON_aesmc(auVar54,auVar54);
      uVar48 = (uVar48 & 0xff00ff00ff00ff00) >> 8 | (uVar48 & 0xff00ff00ff00ff) << 8;
      uVar48 = (uVar48 & 0xffff0000ffff0000) >> 0x10 | (uVar48 & 0xffff0000ffff) << 0x10;
      uVar48 = uVar48 >> 0x20 | uVar48 << 0x20;
      auVar54 = NEON_aese(auVar54,auVar9);
      auVar54 = NEON_aesmc(auVar54,auVar54);
      auVar54 = NEON_aese(auVar54,auVar10);
      pbVar3 = (byte *)((long)puVar38 + lVar46);
      auVar51._0_8_ =
           CONCAT17(pbVar3[7] ^ auVar54[7] ^ bVar70,
                    CONCAT16(pbVar3[6] ^ auVar54[6] ^ bVar69,
                             CONCAT15(pbVar3[5] ^ auVar54[5] ^ bVar68,
                                      CONCAT14(pbVar3[4] ^ auVar54[4] ^ bVar67,
                                               CONCAT13(pbVar3[3] ^ auVar54[3] ^ bVar66,
                                                        CONCAT12(pbVar3[2] ^ auVar54[2] ^ bVar65,
                                                                 CONCAT11(pbVar3[1] ^
                                                                          auVar54[1] ^ bVar64,
                                                                          *pbVar3 ^ auVar54[0] ^
                                                                                    bVar63)))))));
      auVar51[8] = pbVar3[8] ^ auVar54[8] ^ bVar71;
      auVar51[9] = pbVar3[9] ^ auVar54[9] ^ bVar72;
      auVar51[10] = pbVar3[10] ^ auVar54[10] ^ bVar73;
      auVar51[0xb] = pbVar3[0xb] ^ auVar54[0xb] ^ bVar74;
      auVar51[0xc] = pbVar3[0xc] ^ auVar54[0xc] ^ bVar75;
      auVar51[0xd] = pbVar3[0xd] ^ auVar54[0xd] ^ bVar76;
      auVar51[0xe] = pbVar3[0xe] ^ auVar54[0xe] ^ bVar77;
      auVar51[0xf] = pbVar3[0xf] ^ auVar54[0xf] ^ bVar78;
      ((undefined8 *)((long)puVar42 + lVar46))[1] = auVar51._8_8_;
      *(undefined8 *)((long)puVar42 + lVar46) = auVar51._0_8_;
      lVar46 = lVar46 + 0x10;
      if (uVar45 == 1) break;
      uVar45 = 1;
    }
  }
  else {
    uVar47 = (uVar44 & 0xff00ff00ff00ff00) >> 8 | (uVar44 & 0xff00ff00ff00ff) << 8;
    uVar47 = (uVar47 & 0xffff0000ffff0000) >> 0x10 | (uVar47 & 0xffff0000ffff) << 0x10;
    uVar36 = uVar47 >> 0x20 | uVar47 << 0x20;
    uVar47 = (uVar48 & 0xff00ff00ff00ff00) >> 8 | (uVar48 & 0xff00ff00ff00ff) << 8;
    uVar47 = (uVar47 & 0xffff0000ffff0000) >> 0x10 | (uVar47 & 0xffff0000ffff) << 0x10;
    uVar39 = uVar47 >> 0x20 | uVar47 << 0x20;
    uVar47 = uVar39 + 1;
    if (uVar39 == 0xffffffffffffffff) {
      uVar36 = uVar36 + 1;
    }
    uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
    uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
    uVar39 = uVar36 >> 0x20 | uVar36 << 0x20;
    uVar47 = (uVar47 & 0xff00ff00ff00ff00) >> 8 | (uVar47 & 0xff00ff00ff00ff) << 8;
    uVar47 = (uVar47 & 0xffff0000ffff0000) >> 0x10 | (uVar47 & 0xffff0000ffff) << 0x10;
    uVar40 = uVar47 >> 0x20 | uVar47 << 0x20;
    uVar47 = (uVar39 & 0xff00ff00ff00ff00) >> 8 | (uVar39 & 0xff00ff00ff00ff) << 8;
    uVar47 = (uVar47 & 0xffff0000ffff0000) >> 0x10 | (uVar47 & 0xffff0000ffff) << 0x10;
    uVar36 = uVar47 >> 0x20 | uVar47 << 0x20;
    uVar47 = (uVar40 & 0xff00ff00ff00ff00) >> 8 | (uVar40 & 0xff00ff00ff00ff) << 8;
    uVar47 = (uVar47 & 0xffff0000ffff0000) >> 0x10 | (uVar47 & 0xffff0000ffff) << 0x10;
    uVar41 = uVar47 >> 0x20 | uVar47 << 0x20;
    uVar47 = uVar41 + 1;
    if (uVar41 == 0xffffffffffffffff) {
      uVar36 = uVar36 + 1;
    }
    uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
    uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
    uVar36 = uVar36 >> 0x20 | uVar36 << 0x20;
    uVar47 = (uVar47 & 0xff00ff00ff00ff00) >> 8 | (uVar47 & 0xff00ff00ff00ff) << 8;
    uVar47 = (uVar47 & 0xffff0000ffff0000) >> 0x10 | (uVar47 & 0xffff0000ffff) << 0x10;
    uVar47 = uVar47 >> 0x20 | uVar47 << 0x20;
    puVar43 = param_2;
    do {
      uVar58 = puVar38[5];
      uVar57 = puVar38[4];
      auVar55._8_8_ = uVar48;
      auVar55._0_8_ = uVar44;
      auVar49._8_8_ = uVar40;
      auVar49._0_8_ = uVar39;
      auVar52._8_8_ = uVar47;
      auVar52._0_8_ = uVar36;
      uVar62 = puVar38[1];
      uVar61 = *puVar38;
      uVar60 = puVar38[3];
      uVar59 = puVar38[2];
      puVar38 = puVar38 + 6;
      auVar55 = NEON_aese(auVar55,auVar79);
      auVar55 = NEON_aesmc(auVar55,auVar55);
      auVar49 = NEON_aese(auVar49,auVar79);
      auVar49 = NEON_aesmc(auVar49,auVar49);
      auVar52 = NEON_aese(auVar52,auVar79);
      auVar52 = NEON_aesmc(auVar52,auVar52);
      uVar44 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
      uVar44 = (uVar44 & 0xffff0000ffff0000) >> 0x10 | (uVar44 & 0xffff0000ffff) << 0x10;
      uVar36 = uVar44 >> 0x20 | uVar44 << 0x20;
      auVar55 = NEON_aese(auVar55,auVar54);
      auVar55 = NEON_aesmc(auVar55,auVar55);
      uVar44 = (uVar47 & 0xff00ff00ff00ff00) >> 8 | (uVar47 & 0xff00ff00ff00ff) << 8;
      uVar44 = (uVar44 & 0xffff0000ffff0000) >> 0x10 | (uVar44 & 0xffff0000ffff) << 0x10;
      uVar41 = uVar44 >> 0x20 | uVar44 << 0x20;
      auVar49 = NEON_aese(auVar49,auVar51);
      auVar49 = NEON_aesmc(auVar49,auVar49);
      uVar47 = uVar41 + 1;
      auVar52 = NEON_aese(auVar52,auVar11);
      auVar52 = NEON_aesmc(auVar52,auVar52);
      if (uVar41 == 0xffffffffffffffff) {
        uVar36 = uVar36 + 1;
      }
      auVar55 = NEON_aese(auVar55,auVar12);
      auVar55 = NEON_aesmc(auVar55,auVar55);
      uVar44 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
      uVar44 = (uVar44 & 0xffff0000ffff0000) >> 0x10 | (uVar44 & 0xffff0000ffff) << 0x10;
      uVar44 = uVar44 >> 0x20 | uVar44 << 0x20;
      auVar49 = NEON_aese(auVar49,auVar13);
      auVar49 = NEON_aesmc(auVar49,auVar49);
      uVar48 = (uVar47 & 0xff00ff00ff00ff00) >> 8 | (uVar47 & 0xff00ff00ff00ff) << 8;
      uVar48 = (uVar48 & 0xffff0000ffff0000) >> 0x10 | (uVar48 & 0xffff0000ffff) << 0x10;
      uVar48 = uVar48 >> 0x20 | uVar48 << 0x20;
      auVar52 = NEON_aese(auVar52,auVar14);
      auVar52 = NEON_aesmc(auVar52,auVar52);
      auVar55 = NEON_aese(auVar55,auVar15);
      auVar55 = NEON_aesmc(auVar55,auVar55);
      auVar49 = NEON_aese(auVar49,auVar16);
      auVar49 = NEON_aesmc(auVar49,auVar49);
      uVar1 = uVar41 + 2;
      auVar52 = NEON_aese(auVar52,auVar17);
      auVar52 = NEON_aesmc(auVar52,auVar52);
      if (uVar47 == 0xffffffffffffffff) {
        uVar36 = uVar36 + 1;
      }
      auVar55 = NEON_aese(auVar55,auVar18);
      auVar55 = NEON_aesmc(auVar55,auVar55);
      uVar47 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
      uVar47 = (uVar47 & 0xffff0000ffff0000) >> 0x10 | (uVar47 & 0xffff0000ffff) << 0x10;
      uVar39 = uVar47 >> 0x20 | uVar47 << 0x20;
      auVar49 = NEON_aese(auVar49,auVar19);
      auVar49 = NEON_aesmc(auVar49,auVar49);
      uVar47 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar47 = (uVar47 & 0xffff0000ffff0000) >> 0x10 | (uVar47 & 0xffff0000ffff) << 0x10;
      uVar40 = uVar47 >> 0x20 | uVar47 << 0x20;
      auVar52 = NEON_aese(auVar52,auVar20);
      auVar52 = NEON_aesmc(auVar52,auVar52);
      auVar55 = NEON_aese(auVar55,auVar21);
      auVar55 = NEON_aesmc(auVar55,auVar55);
      auVar49 = NEON_aese(auVar49,auVar22);
      auVar49 = NEON_aesmc(auVar49,auVar49);
      auVar52 = NEON_aese(auVar52,auVar23);
      auVar52 = NEON_aesmc(auVar52,auVar52);
      if (uVar1 == 0xffffffffffffffff) {
        uVar36 = uVar36 + 1;
      }
      auVar55 = NEON_aese(auVar55,auVar24);
      auVar55 = NEON_aesmc(auVar55,auVar55);
      uVar47 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
      uVar47 = (uVar47 & 0xffff0000ffff0000) >> 0x10 | (uVar47 & 0xffff0000ffff) << 0x10;
      uVar36 = uVar47 >> 0x20 | uVar47 << 0x20;
      auVar49 = NEON_aese(auVar49,auVar25);
      auVar49 = NEON_aesmc(auVar49,auVar49);
      uVar47 = (uVar41 + 3 & 0xff00ff00ff00ff00) >> 8 | (uVar41 + 3 & 0xff00ff00ff00ff) << 8;
      uVar47 = (uVar47 & 0xffff0000ffff0000) >> 0x10 | (uVar47 & 0xffff0000ffff) << 0x10;
      uVar47 = uVar47 >> 0x20 | uVar47 << 0x20;
      auVar52 = NEON_aese(auVar52,auVar26);
      auVar52 = NEON_aesmc(auVar52,auVar52);
      auVar55 = NEON_aese(auVar55,auVar27);
      auVar55 = NEON_aesmc(auVar55,auVar55);
      auVar49 = NEON_aese(auVar49,auVar28);
      auVar49 = NEON_aesmc(auVar49,auVar49);
      auVar52 = NEON_aese(auVar52,auVar29);
      auVar52 = NEON_aesmc(auVar52,auVar52);
      auVar55 = NEON_aese(auVar55,auVar30);
      auVar55 = NEON_aesmc(auVar55,auVar55);
      auVar49 = NEON_aese(auVar49,auVar31);
      auVar49 = NEON_aesmc(auVar49,auVar49);
      auVar52 = NEON_aese(auVar52,auVar32);
      auVar52 = NEON_aesmc(auVar52,auVar52);
      auVar55 = NEON_aese(auVar55,auVar33);
      auVar49 = NEON_aese(auVar49,auVar34);
      auVar52 = NEON_aese(auVar52,auVar35);
      auVar56._0_8_ =
           CONCAT17((byte)((ulong)uVar61 >> 0x38) ^ auVar55[7] ^ bVar70,
                    CONCAT16((byte)((ulong)uVar61 >> 0x30) ^ auVar55[6] ^ bVar69,
                             CONCAT15((byte)((ulong)uVar61 >> 0x28) ^ auVar55[5] ^ bVar68,
                                      CONCAT14((byte)((ulong)uVar61 >> 0x20) ^ auVar55[4] ^ bVar67,
                                               CONCAT13((byte)((ulong)uVar61 >> 0x18) ^
                                                        auVar55[3] ^ bVar66,
                                                        CONCAT12((byte)((ulong)uVar61 >> 0x10) ^
                                                                 auVar55[2] ^ bVar65,
                                                                 CONCAT11((byte)((ulong)uVar61 >> 8)
                                                                          ^ auVar55[1] ^ bVar64,
                                                                          (byte)uVar61 ^
                                                                          auVar55[0] ^ bVar63)))))))
      ;
      auVar56[8] = (byte)uVar62 ^ auVar55[8] ^ bVar71;
      auVar56[9] = (byte)((ulong)uVar62 >> 8) ^ auVar55[9] ^ bVar72;
      auVar56[10] = (byte)((ulong)uVar62 >> 0x10) ^ auVar55[10] ^ bVar73;
      auVar56[0xb] = (byte)((ulong)uVar62 >> 0x18) ^ auVar55[0xb] ^ bVar74;
      auVar56[0xc] = (byte)((ulong)uVar62 >> 0x20) ^ auVar55[0xc] ^ bVar75;
      auVar56[0xd] = (byte)((ulong)uVar62 >> 0x28) ^ auVar55[0xd] ^ bVar76;
      auVar56[0xe] = (byte)((ulong)uVar62 >> 0x30) ^ auVar55[0xe] ^ bVar77;
      auVar56[0xf] = (byte)((ulong)uVar62 >> 0x38) ^ auVar55[0xf] ^ bVar78;
      auVar50._0_8_ =
           CONCAT17((byte)((ulong)uVar59 >> 0x38) ^ auVar49[7] ^ bVar70,
                    CONCAT16((byte)((ulong)uVar59 >> 0x30) ^ auVar49[6] ^ bVar69,
                             CONCAT15((byte)((ulong)uVar59 >> 0x28) ^ auVar49[5] ^ bVar68,
                                      CONCAT14((byte)((ulong)uVar59 >> 0x20) ^ auVar49[4] ^ bVar67,
                                               CONCAT13((byte)((ulong)uVar59 >> 0x18) ^
                                                        auVar49[3] ^ bVar66,
                                                        CONCAT12((byte)((ulong)uVar59 >> 0x10) ^
                                                                 auVar49[2] ^ bVar65,
                                                                 CONCAT11((byte)((ulong)uVar59 >> 8)
                                                                          ^ auVar49[1] ^ bVar64,
                                                                          (byte)uVar59 ^
                                                                          auVar49[0] ^ bVar63)))))))
      ;
      auVar50[8] = (byte)uVar60 ^ auVar49[8] ^ bVar71;
      auVar50[9] = (byte)((ulong)uVar60 >> 8) ^ auVar49[9] ^ bVar72;
      auVar50[10] = (byte)((ulong)uVar60 >> 0x10) ^ auVar49[10] ^ bVar73;
      auVar50[0xb] = (byte)((ulong)uVar60 >> 0x18) ^ auVar49[0xb] ^ bVar74;
      auVar50[0xc] = (byte)((ulong)uVar60 >> 0x20) ^ auVar49[0xc] ^ bVar75;
      auVar50[0xd] = (byte)((ulong)uVar60 >> 0x28) ^ auVar49[0xd] ^ bVar76;
      auVar50[0xe] = (byte)((ulong)uVar60 >> 0x30) ^ auVar49[0xe] ^ bVar77;
      auVar50[0xf] = (byte)((ulong)uVar60 >> 0x38) ^ auVar49[0xf] ^ bVar78;
      uVar45 = uVar45 - 3;
      auVar53._0_8_ =
           CONCAT17((byte)((ulong)uVar57 >> 0x38) ^ auVar52[7] ^ bVar70,
                    CONCAT16((byte)((ulong)uVar57 >> 0x30) ^ auVar52[6] ^ bVar69,
                             CONCAT15((byte)((ulong)uVar57 >> 0x28) ^ auVar52[5] ^ bVar68,
                                      CONCAT14((byte)((ulong)uVar57 >> 0x20) ^ auVar52[4] ^ bVar67,
                                               CONCAT13((byte)((ulong)uVar57 >> 0x18) ^
                                                        auVar52[3] ^ bVar66,
                                                        CONCAT12((byte)((ulong)uVar57 >> 0x10) ^
                                                                 auVar52[2] ^ bVar65,
                                                                 CONCAT11((byte)((ulong)uVar57 >> 8)
                                                                          ^ auVar52[1] ^ bVar64,
                                                                          (byte)uVar57 ^
                                                                          auVar52[0] ^ bVar63)))))))
      ;
      auVar53[8] = (byte)uVar58 ^ auVar52[8] ^ bVar71;
      auVar53[9] = (byte)((ulong)uVar58 >> 8) ^ auVar52[9] ^ bVar72;
      auVar53[10] = (byte)((ulong)uVar58 >> 0x10) ^ auVar52[10] ^ bVar73;
      auVar53[0xb] = (byte)((ulong)uVar58 >> 0x18) ^ auVar52[0xb] ^ bVar74;
      auVar53[0xc] = (byte)((ulong)uVar58 >> 0x20) ^ auVar52[0xc] ^ bVar75;
      auVar53[0xd] = (byte)((ulong)uVar58 >> 0x28) ^ auVar52[0xd] ^ bVar76;
      auVar53[0xe] = (byte)((ulong)uVar58 >> 0x30) ^ auVar52[0xe] ^ bVar77;
      auVar53[0xf] = (byte)((ulong)uVar58 >> 0x38) ^ auVar52[0xf] ^ bVar78;
      puVar42 = puVar43 + 6;
      puVar43[1] = auVar56._8_8_;
      *puVar43 = auVar56._0_8_;
      puVar43[3] = auVar50._8_8_;
      puVar43[2] = auVar50._0_8_;
      puVar43[5] = auVar53._8_8_;
      puVar43[4] = auVar53._0_8_;
      puVar43 = puVar42;
    } while (2 < uVar45);
    if (uVar45 != 0) goto LAB_7100766e4c;
  }
  *(ulong *)(param_1[0xb] + 8) = uVar48;
  *(ulong *)param_1[0xb] = uVar44;
  param_4 = param_4 + uVar37 * -0x10;
  param_3 = param_3 + uVar37 * 2;
  param_2 = param_2 + uVar37 * 2;
LAB_7100766e0c:
  if (param_4 != 0) {
    pauVar2 = param_1 + 0xc;
    FUN_710080f900(pauVar2,param_3,param_4);
    FUN_7100808340(*pauVar2 + param_4,0,0x10 - param_4);
    auVar4 = param_1[10];
    auVar80 = param_1[0xb];
    uVar57 = *(undefined8 *)(param_1[9] + 8);
    auVar81 = NEON_aese(auVar80,*param_1);
    auVar81 = NEON_aesmc(auVar81,auVar81);
    auVar81 = NEON_aese(auVar81,param_1[1]);
    auVar81 = NEON_aesmc(auVar81,auVar81);
    auVar81 = NEON_aese(auVar81,param_1[2]);
    auVar81 = NEON_aesmc(auVar81,auVar81);
    uVar45 = (auVar80._0_8_ & 0xff00ff00ff00ff00) >> 8 | (auVar80._0_8_ & 0xff00ff00ff00ff) << 8;
    uVar45 = (uVar45 & 0xffff0000ffff0000) >> 0x10 | (uVar45 & 0xffff0000ffff) << 0x10;
    uVar44 = uVar45 >> 0x20 | uVar45 << 0x20;
    auVar81 = NEON_aese(auVar81,param_1[3]);
    auVar81 = NEON_aesmc(auVar81,auVar81);
    uVar45 = (auVar80._8_8_ & 0xff00ff00ff00ff00) >> 8 | (auVar80._8_8_ & 0xff00ff00ff00ff) << 8;
    uVar45 = (uVar45 & 0xffff0000ffff0000) >> 0x10 | (uVar45 & 0xffff0000ffff) << 0x10;
    uVar37 = uVar45 >> 0x20 | uVar45 << 0x20;
    auVar80 = NEON_aese(auVar81,param_1[4]);
    auVar80 = NEON_aesmc(auVar80,auVar80);
    uVar45 = uVar37 + 1;
    auVar80 = NEON_aese(auVar80,param_1[5]);
    auVar80 = NEON_aesmc(auVar80,auVar80);
    if (uVar37 == 0xffffffffffffffff) {
      uVar44 = uVar44 + 1;
    }
    auVar80 = NEON_aese(auVar80,param_1[6]);
    auVar80 = NEON_aesmc(auVar80,auVar80);
    uVar44 = (uVar44 & 0xff00ff00ff00ff00) >> 8 | (uVar44 & 0xff00ff00ff00ff) << 8;
    uVar44 = (uVar44 & 0xffff0000ffff0000) >> 0x10 | (uVar44 & 0xffff0000ffff) << 0x10;
    auVar80 = NEON_aese(auVar80,param_1[7]);
    auVar80 = NEON_aesmc(auVar80,auVar80);
    uVar45 = (uVar45 & 0xff00ff00ff00ff00) >> 8 | (uVar45 & 0xff00ff00ff00ff) << 8;
    uVar45 = (uVar45 & 0xffff0000ffff0000) >> 0x10 | (uVar45 & 0xffff0000ffff) << 0x10;
    auVar80 = NEON_aese(auVar80,param_1[8]);
    auVar81 = NEON_aesmc(auVar80,auVar80);
    auVar80[9] = (char)((ulong)uVar57 >> 8);
    auVar80._0_9_ = *(unkbyte9 *)param_1[9];
    auVar80[10] = (char)((ulong)uVar57 >> 0x10);
    auVar80[0xb] = (char)((ulong)uVar57 >> 0x18);
    auVar80[0xc] = (char)((ulong)uVar57 >> 0x20);
    auVar80[0xd] = (char)((ulong)uVar57 >> 0x28);
    auVar80[0xe] = (char)((ulong)uVar57 >> 0x30);
    auVar80[0xf] = (char)((ulong)uVar57 >> 0x38);
    auVar80 = NEON_aese(auVar81,auVar80);
    uVar58 = *(undefined8 *)(param_1[0xc] + 8);
    uVar57 = *(undefined8 *)param_1[0xc];
    *(ulong *)(param_1[0xb] + 8) = uVar45 >> 0x20 | uVar45 << 0x20;
    *(ulong *)param_1[0xb] = uVar44 >> 0x20 | uVar44 << 0x20;
    *(ulong *)(param_1[0xc] + 8) =
         CONCAT17((byte)((ulong)uVar58 >> 0x38) ^ auVar80[0xf] ^ auVar4[0xf],
                  CONCAT16((byte)((ulong)uVar58 >> 0x30) ^ auVar80[0xe] ^ auVar4[0xe],
                           CONCAT15((byte)((ulong)uVar58 >> 0x28) ^ auVar80[0xd] ^ auVar4[0xd],
                                    CONCAT14((byte)((ulong)uVar58 >> 0x20) ^
                                             auVar80[0xc] ^ auVar4[0xc],
                                             CONCAT13((byte)((ulong)uVar58 >> 0x18) ^
                                                      auVar80[0xb] ^ auVar4[0xb],
                                                      CONCAT12((byte)((ulong)uVar58 >> 0x10) ^
                                                               auVar80[10] ^ auVar4[10],
                                                               CONCAT11((byte)((ulong)uVar58 >> 8) ^
                                                                        auVar80[9] ^ auVar4[9],
                                                                        (byte)uVar58 ^
                                                                        auVar80[8] ^ auVar4[8]))))))
                 );
    *(ulong *)param_1[0xc] =
         CONCAT17((byte)((ulong)uVar57 >> 0x38) ^ auVar80[7] ^ auVar4[7],
                  CONCAT16((byte)((ulong)uVar57 >> 0x30) ^ auVar80[6] ^ auVar4[6],
                           CONCAT15((byte)((ulong)uVar57 >> 0x28) ^ auVar80[5] ^ auVar4[5],
                                    CONCAT14((byte)((ulong)uVar57 >> 0x20) ^ auVar80[4] ^ auVar4[4],
                                             CONCAT13((byte)((ulong)uVar57 >> 0x18) ^
                                                      auVar80[3] ^ auVar4[3],
                                                      CONCAT12((byte)((ulong)uVar57 >> 0x10) ^
                                                               auVar80[2] ^ auVar4[2],
                                                               CONCAT11((byte)((ulong)uVar57 >> 8) ^
                                                                        auVar80[1] ^ auVar4[1],
                                                                        (byte)uVar57 ^
                                                                        auVar80[0] ^ auVar4[0]))))))
                 );
    FUN_710080f900(param_2,pauVar2,param_4);
    *(ulong *)param_1[0xd] = param_4;
    return;
  }
  return;
}



// ===== FUN_7100767210 @ 7100767210 (size=72) =====

void FUN_7100767210(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = (param_2 & 0xff00ff00ff00ff00) >> 8 | (param_2 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  uVar1 = uVar1 >> 0x20 | uVar1 << 0x20;
  if ((param_3 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    param_2 = 0;
  }
  *(ulong *)(param_1 + 0x160) = param_2;
  *(ulong *)(param_1 + 0x168) = uVar1;
  FUN_7100766c10(param_1 + 0xb0,param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  return;
}



// ===== FUN_7100767260 @ 7100767260 (size=68) =====

void FUN_7100767260(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_7100766b30(param_1,param_2,param_4);
  FUN_7100766b30(param_1 + 0xb0,param_3,1);
  FUN_7100767210(param_1,0,0);
  return;
}



// ===== FUN_71007672b0 @ 71007672b0 (size=1060) =====

long FUN_71007672b0(undefined1 (*param_1) [16],byte *param_2,byte *param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 (*pauVar5) [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  byte bVar44;
  byte bVar45;
  long lVar46;
  byte *pbVar47;
  ulong uVar48;
  byte *pbVar49;
  ulong uVar50;
  ulong uVar51;
  ulong uVar52;
  byte *pbVar53;
  byte *pbVar54;
  ulong uVar55;
  byte *pbVar56;
  ulong uVar57;
  ulong uVar58;
  ulong uVar59;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  undefined1 auVar60 [16];
  byte bVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined8 uVar78;
  undefined8 uVar79;
  byte bVar80;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  undefined1 auVar81 [16];
  byte bVar95;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  undefined1 auVar96 [16];
  byte bVar125;
  undefined1 auVar97 [16];
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  byte bVar133;
  byte bVar134;
  byte bVar135;
  byte bVar136;
  byte bVar137;
  byte bVar138;
  byte bVar139;
  byte bVar140;
  byte bVar141;
  byte bVar142;
  byte bVar143;
  byte bVar144;
  byte bVar145;
  byte bVar146;
  byte bVar147;
  byte bVar148;
  byte bVar149;
  byte bVar150;
  byte bVar151;
  byte bVar152;
  byte bVar153;
  byte bVar154;
  byte bVar155;
  byte bVar156;
  byte bVar157;
  byte bVar158;
  byte bVar159;
  byte bVar160;
  byte bVar161;
  byte bVar163;
  byte bVar164;
  byte bVar165;
  byte bVar166;
  byte bVar167;
  byte bVar168;
  byte bVar169;
  byte bVar170;
  byte bVar171;
  byte bVar172;
  byte bVar173;
  byte bVar174;
  byte bVar175;
  byte bVar176;
  byte bVar177;
  undefined1 auVar162 [16];
  
  lVar46 = *(long *)param_1[0x18];
  pbVar56 = param_2;
  if (lVar46 != 0) {
    uVar2 = 0x10U - lVar46;
    if (param_4 < 0x10U - lVar46) {
      uVar2 = param_4;
    }
    FUN_710080f900(param_1[0x17] + lVar46);
    param_3 = param_3 + uVar2;
    param_4 = param_4 - uVar2;
    lVar46 = uVar2 + *(long *)param_1[0x18];
    *(long *)param_1[0x18] = lVar46;
    if (lVar46 == 0x10) {
      auVar162 = param_1[0x16];
      uVar79 = *(undefined8 *)(param_1[10] + 8);
      uVar78 = *(undefined8 *)param_1[10];
      uVar9 = *(undefined8 *)(*param_1 + 8);
      uVar7 = *(undefined8 *)(param_1[1] + 8);
      uVar6 = *(undefined8 *)(param_1[2] + 8);
      auVar75[0] = param_1[0x17][0] ^ auVar162[0];
      auVar75[1] = param_1[0x17][1] ^ auVar162[1];
      auVar75[2] = param_1[0x17][2] ^ auVar162[2];
      auVar75[3] = param_1[0x17][3] ^ auVar162[3];
      auVar75[4] = param_1[0x17][4] ^ auVar162[4];
      auVar75[5] = param_1[0x17][5] ^ auVar162[5];
      auVar75[6] = param_1[0x17][6] ^ auVar162[6];
      auVar75[7] = param_1[0x17][7] ^ auVar162[7];
      auVar75[8] = param_1[0x17][8] ^ auVar162[8];
      auVar75[9] = param_1[0x17][9] ^ auVar162[9];
      auVar75[10] = param_1[0x17][10] ^ auVar162[10];
      auVar75[0xb] = param_1[0x17][0xb] ^ auVar162[0xb];
      auVar75[0xc] = param_1[0x17][0xc] ^ auVar162[0xc];
      auVar75[0xd] = param_1[0x17][0xd] ^ auVar162[0xd];
      auVar75[0xe] = param_1[0x17][0xe] ^ auVar162[0xe];
      auVar75[0xf] = param_1[0x17][0xf] ^ auVar162[0xf];
      auVar8[9] = (char)((ulong)uVar9 >> 8);
      auVar8._0_9_ = *(unkbyte9 *)*param_1;
      auVar8[10] = (char)((ulong)uVar9 >> 0x10);
      auVar8[0xb] = (char)((ulong)uVar9 >> 0x18);
      auVar8[0xc] = (char)((ulong)uVar9 >> 0x20);
      auVar8[0xd] = (char)((ulong)uVar9 >> 0x28);
      auVar8[0xe] = (char)((ulong)uVar9 >> 0x30);
      auVar8[0xf] = (char)((ulong)uVar9 >> 0x38);
      auVar76 = NEON_aese(auVar75,auVar8);
      auVar76 = NEON_aesmc(auVar76,auVar76);
      auVar77[9] = (char)((ulong)uVar7 >> 8);
      auVar77._0_9_ = *(unkbyte9 *)param_1[1];
      auVar77[10] = (char)((ulong)uVar7 >> 0x10);
      auVar77[0xb] = (char)((ulong)uVar7 >> 0x18);
      auVar77[0xc] = (char)((ulong)uVar7 >> 0x20);
      auVar77[0xd] = (char)((ulong)uVar7 >> 0x28);
      auVar77[0xe] = (char)((ulong)uVar7 >> 0x30);
      auVar77[0xf] = (char)((ulong)uVar7 >> 0x38);
      auVar76 = NEON_aese(auVar76,auVar77);
      auVar77 = NEON_aesmc(auVar76,auVar76);
      auVar76[9] = (char)((ulong)uVar6 >> 8);
      auVar76._0_9_ = *(unkbyte9 *)param_1[2];
      auVar76[10] = (char)((ulong)uVar6 >> 0x10);
      auVar76[0xb] = (char)((ulong)uVar6 >> 0x18);
      auVar76[0xc] = (char)((ulong)uVar6 >> 0x20);
      auVar76[0xd] = (char)((ulong)uVar6 >> 0x28);
      auVar76[0xe] = (char)((ulong)uVar6 >> 0x30);
      auVar76[0xf] = (char)((ulong)uVar6 >> 0x38);
      auVar76 = NEON_aese(auVar77,auVar76);
      auVar76 = NEON_aesmc(auVar76,auVar76);
      auVar76 = NEON_aese(auVar76,param_1[3]);
      auVar76 = NEON_aesmc(auVar76,auVar76);
      auVar76 = NEON_aese(auVar76,param_1[4]);
      auVar76 = NEON_aesmc(auVar76,auVar76);
      auVar76 = NEON_aese(auVar76,param_1[5]);
      auVar76 = NEON_aesmc(auVar76,auVar76);
      auVar76 = NEON_aese(auVar76,param_1[6]);
      auVar76 = NEON_aesmc(auVar76,auVar76);
      auVar76 = NEON_aese(auVar76,param_1[7]);
      auVar76 = NEON_aesmc(auVar76,auVar76);
      auVar76 = NEON_aese(auVar76,param_1[8]);
      auVar76 = NEON_aesmc(auVar76,auVar76);
      auVar76 = NEON_aese(auVar76,param_1[9]);
      pbVar56 = param_2 + 0x10;
      param_2[0x10] = auVar162[8] ^ auVar76[8] ^ (byte)uVar79;
      param_2[0x11] = auVar162[9] ^ auVar76[9] ^ (byte)((ulong)uVar79 >> 8);
      param_2[0x12] = auVar162[10] ^ auVar76[10] ^ (byte)((ulong)uVar79 >> 0x10);
      param_2[0x13] = auVar162[0xb] ^ auVar76[0xb] ^ (byte)((ulong)uVar79 >> 0x18);
      param_2[0x14] = auVar162[0xc] ^ auVar76[0xc] ^ (byte)((ulong)uVar79 >> 0x20);
      param_2[0x15] = auVar162[0xd] ^ auVar76[0xd] ^ (byte)((ulong)uVar79 >> 0x28);
      param_2[0x16] = auVar162[0xe] ^ auVar76[0xe] ^ (byte)((ulong)uVar79 >> 0x30);
      param_2[0x17] = auVar162[0xf] ^ auVar76[0xf] ^ (byte)((ulong)uVar79 >> 0x38);
      *param_2 = auVar162[0] ^ auVar76[0] ^ (byte)uVar78;
      param_2[1] = auVar162[1] ^ auVar76[1] ^ (byte)((ulong)uVar78 >> 8);
      param_2[2] = auVar162[2] ^ auVar76[2] ^ (byte)((ulong)uVar78 >> 0x10);
      param_2[3] = auVar162[3] ^ auVar76[3] ^ (byte)((ulong)uVar78 >> 0x18);
      param_2[4] = auVar162[4] ^ auVar76[4] ^ (byte)((ulong)uVar78 >> 0x20);
      param_2[5] = auVar162[5] ^ auVar76[5] ^ (byte)((ulong)uVar78 >> 0x28);
      param_2[6] = auVar162[6] ^ auVar76[6] ^ (byte)((ulong)uVar78 >> 0x30);
      param_2[7] = auVar162[7] ^ auVar76[7] ^ (byte)((ulong)uVar78 >> 0x38);
      *(ulong *)(param_1[0x16] + 8) = auVar162._0_8_ >> 0x3f | auVar162._8_8_ << 1;
      *(ulong *)param_1[0x16] = auVar162._8_8_ >> 0x3f & 0x87U ^ auVar162._0_8_ << 1;
      *(undefined8 *)param_1[0x18] = 0;
    }
  }
  if (param_4 < 0x10) goto LAB_71007672d8;
  bVar161 = param_1[10][0];
  bVar163 = param_1[10][1];
  bVar164 = param_1[10][2];
  bVar165 = param_1[10][3];
  bVar166 = param_1[10][4];
  bVar167 = param_1[10][5];
  bVar168 = param_1[10][6];
  bVar169 = param_1[10][7];
  bVar170 = param_1[10][8];
  bVar171 = param_1[10][9];
  bVar172 = param_1[10][10];
  bVar173 = param_1[10][0xb];
  bVar174 = param_1[10][0xc];
  bVar175 = param_1[10][0xd];
  bVar176 = param_1[10][0xe];
  bVar177 = param_1[10][0xf];
  uVar59 = param_4 >> 4;
  lVar46 = *(long *)(param_1[0x16] + 8);
  bVar153 = (byte)lVar46;
  bVar154 = (byte)((ulong)lVar46 >> 8);
  bVar155 = (byte)((ulong)lVar46 >> 0x10);
  bVar156 = (byte)((ulong)lVar46 >> 0x18);
  bVar157 = (byte)((ulong)lVar46 >> 0x20);
  bVar158 = (byte)((ulong)lVar46 >> 0x28);
  bVar159 = (byte)((ulong)lVar46 >> 0x30);
  bVar160 = (byte)((ulong)lVar46 >> 0x38);
  uVar2 = *(ulong *)param_1[0x16];
  bVar145 = (byte)uVar2;
  bVar146 = (byte)(uVar2 >> 8);
  bVar147 = (byte)(uVar2 >> 0x10);
  bVar148 = (byte)(uVar2 >> 0x18);
  bVar149 = (byte)(uVar2 >> 0x20);
  bVar150 = (byte)(uVar2 >> 0x28);
  bVar151 = (byte)(uVar2 >> 0x30);
  bVar152 = (byte)(uVar2 >> 0x38);
  auVar16 = *param_1;
  auVar15 = *param_1;
  auVar96 = *param_1;
  auVar76 = *param_1;
  pauVar5 = param_1 + 1;
  auVar19 = *pauVar5;
  auVar18 = *pauVar5;
  auVar17 = *pauVar5;
  auVar77 = *pauVar5;
  pauVar5 = param_1 + 2;
  auVar22 = *pauVar5;
  auVar21 = *pauVar5;
  auVar20 = *pauVar5;
  auVar8 = *pauVar5;
  pauVar5 = param_1 + 3;
  auVar25 = *pauVar5;
  auVar24 = *pauVar5;
  auVar23 = *pauVar5;
  auVar75 = *pauVar5;
  pauVar5 = param_1 + 4;
  auVar28 = *pauVar5;
  auVar27 = *pauVar5;
  auVar26 = *pauVar5;
  auVar162 = *pauVar5;
  pauVar5 = param_1 + 5;
  auVar31 = *pauVar5;
  auVar30 = *pauVar5;
  auVar29 = *pauVar5;
  auVar10 = *pauVar5;
  pauVar5 = param_1 + 6;
  auVar34 = *pauVar5;
  auVar33 = *pauVar5;
  auVar32 = *pauVar5;
  auVar11 = *pauVar5;
  pauVar5 = param_1 + 7;
  auVar37 = *pauVar5;
  auVar36 = *pauVar5;
  auVar35 = *pauVar5;
  auVar12 = *pauVar5;
  pauVar5 = param_1 + 8;
  auVar40 = *pauVar5;
  auVar39 = *pauVar5;
  auVar38 = *pauVar5;
  auVar13 = *pauVar5;
  pauVar5 = param_1 + 9;
  auVar43 = *pauVar5;
  auVar42 = *pauVar5;
  auVar41 = *pauVar5;
  auVar14 = *pauVar5;
  pbVar47 = param_3;
  pbVar53 = pbVar56;
  uVar55 = uVar59;
  if (param_4 < 0x30) {
LAB_710076731c:
    lVar46 = 0;
    bVar127 = bVar145;
    bVar128 = bVar153;
    while( true ) {
      pbVar49 = pbVar47 + lVar46;
      auVar96[0] = *pbVar49 ^ bVar127;
      auVar96[1] = pbVar49[1] ^ bVar146;
      auVar96[2] = pbVar49[2] ^ bVar147;
      auVar96[3] = pbVar49[3] ^ bVar148;
      auVar96[4] = pbVar49[4] ^ bVar149;
      auVar96[5] = pbVar49[5] ^ bVar150;
      auVar96[6] = pbVar49[6] ^ bVar151;
      auVar96[7] = pbVar49[7] ^ bVar152;
      auVar96[8] = pbVar49[8] ^ bVar128;
      auVar96[9] = pbVar49[9] ^ bVar154;
      auVar96[10] = pbVar49[10] ^ bVar155;
      auVar96[0xb] = pbVar49[0xb] ^ bVar156;
      auVar96[0xc] = pbVar49[0xc] ^ bVar157;
      auVar96[0xd] = pbVar49[0xd] ^ bVar158;
      auVar96[0xe] = pbVar49[0xe] ^ bVar159;
      auVar96[0xf] = pbVar49[0xf] ^ bVar160;
      auVar96 = NEON_aese(auVar96,auVar76);
      auVar96 = NEON_aesmc(auVar96,auVar96);
      auVar96 = NEON_aese(auVar96,auVar77);
      auVar96 = NEON_aesmc(auVar96,auVar96);
      auVar96 = NEON_aese(auVar96,auVar8);
      auVar96 = NEON_aesmc(auVar96,auVar96);
      auVar96 = NEON_aese(auVar96,auVar75);
      auVar96 = NEON_aesmc(auVar96,auVar96);
      lVar3 = CONCAT17(bVar160,CONCAT16(bVar159,CONCAT15(bVar158,CONCAT14(bVar157,CONCAT13(bVar156,
                                                  CONCAT12(bVar155,CONCAT11(bVar154,bVar128)))))))
              << 1;
      bVar153 = bVar152 >> 7 | (byte)lVar3;
      auVar96 = NEON_aese(auVar96,auVar162);
      auVar96 = NEON_aesmc(auVar96,auVar96);
      lVar1 = CONCAT17(bVar152,CONCAT16(bVar151,CONCAT15(bVar150,CONCAT14(bVar149,CONCAT13(bVar148,
                                                  CONCAT12(bVar147,CONCAT11(bVar146,bVar127)))))))
              << 1;
      bVar145 = (char)bVar160 >> 7 & 0x87U ^ (byte)lVar1;
      auVar96 = NEON_aese(auVar96,auVar10);
      auVar96 = NEON_aesmc(auVar96,auVar96);
      auVar96 = NEON_aese(auVar96,auVar11);
      auVar96 = NEON_aesmc(auVar96,auVar96);
      auVar96 = NEON_aese(auVar96,auVar12);
      auVar96 = NEON_aesmc(auVar96,auVar96);
      auVar96 = NEON_aese(auVar96,auVar13);
      auVar96 = NEON_aesmc(auVar96,auVar96);
      auVar96 = NEON_aese(auVar96,auVar14);
      bVar98 = bVar146 ^ auVar96[1] ^ bVar163;
      bVar100 = bVar147 ^ auVar96[2] ^ bVar164;
      bVar102 = bVar148 ^ auVar96[3] ^ bVar165;
      bVar104 = bVar149 ^ auVar96[4] ^ bVar166;
      bVar106 = bVar150 ^ auVar96[5] ^ bVar167;
      bVar108 = bVar151 ^ auVar96[6] ^ bVar168;
      bVar110 = bVar152 ^ auVar96[7] ^ bVar169;
      bVar113 = bVar154 ^ auVar96[9] ^ bVar171;
      bVar115 = bVar155 ^ auVar96[10] ^ bVar172;
      bVar117 = bVar156 ^ auVar96[0xb] ^ bVar173;
      bVar119 = bVar157 ^ auVar96[0xc] ^ bVar174;
      bVar121 = bVar158 ^ auVar96[0xd] ^ bVar175;
      bVar123 = bVar159 ^ auVar96[0xe] ^ bVar176;
      bVar125 = bVar160 ^ auVar96[0xf] ^ bVar177;
      bVar154 = (byte)((ulong)lVar3 >> 8);
      bVar155 = (byte)((ulong)lVar3 >> 0x10);
      bVar156 = (byte)((ulong)lVar3 >> 0x18);
      bVar157 = (byte)((ulong)lVar3 >> 0x20);
      bVar158 = (byte)((ulong)lVar3 >> 0x28);
      bVar159 = (byte)((ulong)lVar3 >> 0x30);
      bVar160 = (byte)((ulong)lVar3 >> 0x38);
      bVar146 = (byte)((ulong)lVar1 >> 8);
      bVar147 = (byte)((ulong)lVar1 >> 0x10);
      bVar148 = (byte)((ulong)lVar1 >> 0x18);
      bVar149 = (byte)((ulong)lVar1 >> 0x20);
      bVar150 = (byte)((ulong)lVar1 >> 0x28);
      bVar151 = (byte)((ulong)lVar1 >> 0x30);
      bVar152 = (byte)((ulong)lVar1 >> 0x38);
      pbVar49 = pbVar53 + lVar46;
      pbVar49[0x10] = bVar128 ^ auVar96[8] ^ bVar170;
      pbVar49[0x11] = bVar113;
      pbVar49[0x12] = bVar115;
      pbVar49[0x13] = bVar117;
      pbVar49[0x14] = bVar119;
      pbVar49[0x15] = bVar121;
      pbVar49[0x16] = bVar123;
      pbVar49[0x17] = bVar125;
      *pbVar49 = bVar127 ^ auVar96[0] ^ bVar161;
      pbVar49[1] = bVar98;
      pbVar49[2] = bVar100;
      pbVar49[3] = bVar102;
      pbVar49[4] = bVar104;
      pbVar49[5] = bVar106;
      pbVar49[6] = bVar108;
      pbVar49[7] = bVar110;
      lVar46 = lVar46 + 0x10;
      if (uVar55 == 1) break;
      uVar55 = 1;
      bVar127 = bVar145;
      bVar128 = bVar153;
    }
  }
  else {
    uVar4 = lVar46 << 1;
    uVar48 = uVar2 >> 0x3f | uVar4;
    uVar2 = uVar2 << 1;
    uVar50 = lVar46 >> 0x3f & 0x87U ^ uVar2;
    bVar138 = (byte)uVar48;
    bVar139 = (byte)(uVar4 >> 8);
    bVar140 = (byte)(uVar4 >> 0x10);
    bVar141 = (byte)(uVar4 >> 0x18);
    bVar142 = (byte)(uVar4 >> 0x20);
    bVar143 = (byte)(uVar4 >> 0x28);
    bVar144 = (byte)(uVar4 >> 0x30);
    bVar100 = (byte)(uVar4 >> 0x38);
    bVar131 = (byte)uVar50;
    bVar132 = (byte)(uVar2 >> 8);
    bVar133 = (byte)(uVar2 >> 0x10);
    bVar134 = (byte)(uVar2 >> 0x18);
    bVar135 = (byte)(uVar2 >> 0x20);
    bVar136 = (byte)(uVar2 >> 0x28);
    bVar137 = (byte)(uVar2 >> 0x30);
    bVar98 = (byte)(uVar2 >> 0x38);
    lVar1 = uVar48 << 1;
    lVar46 = uVar50 << 1;
    bVar117 = (byte)((ulong)lVar1 >> 8);
    bVar119 = (byte)((ulong)lVar1 >> 0x10);
    bVar121 = (byte)((ulong)lVar1 >> 0x18);
    bVar123 = (byte)((ulong)lVar1 >> 0x20);
    bVar125 = (byte)((ulong)lVar1 >> 0x28);
    bVar129 = (byte)((ulong)lVar1 >> 0x30);
    bVar130 = (byte)((ulong)lVar1 >> 0x38);
    bVar102 = (byte)((ulong)lVar46 >> 8);
    bVar104 = (byte)((ulong)lVar46 >> 0x10);
    bVar106 = (byte)((ulong)lVar46 >> 0x18);
    bVar108 = (byte)((ulong)lVar46 >> 0x20);
    bVar110 = (byte)((ulong)lVar46 >> 0x28);
    bVar113 = (byte)((ulong)lVar46 >> 0x30);
    bVar115 = (byte)((ulong)lVar46 >> 0x38);
    pbVar49 = param_3;
    pbVar54 = pbVar56;
    bVar127 = (char)bVar100 >> 7 & 0x87U ^ (byte)lVar46;
    bVar128 = bVar98 >> 7 | (byte)lVar1;
    do {
      pbVar47 = pbVar49 + 0x30;
      auVar60[0] = pbVar49[0x20] ^ bVar127;
      auVar60[1] = pbVar49[0x21] ^ bVar102;
      auVar60[2] = pbVar49[0x22] ^ bVar104;
      auVar60[3] = pbVar49[0x23] ^ bVar106;
      auVar60[4] = pbVar49[0x24] ^ bVar108;
      auVar60[5] = pbVar49[0x25] ^ bVar110;
      auVar60[6] = pbVar49[0x26] ^ bVar113;
      auVar60[7] = pbVar49[0x27] ^ bVar115;
      auVar60[8] = pbVar49[0x28] ^ bVar128;
      auVar60[9] = pbVar49[0x29] ^ bVar117;
      auVar60[10] = pbVar49[0x2a] ^ bVar119;
      auVar60[0xb] = pbVar49[0x2b] ^ bVar121;
      auVar60[0xc] = pbVar49[0x2c] ^ bVar123;
      auVar60[0xd] = pbVar49[0x2d] ^ bVar125;
      auVar60[0xe] = pbVar49[0x2e] ^ bVar129;
      auVar60[0xf] = pbVar49[0x2f] ^ bVar130;
      auVar97[0] = *pbVar49 ^ bVar145;
      auVar97[1] = pbVar49[1] ^ bVar146;
      auVar97[2] = pbVar49[2] ^ bVar147;
      auVar97[3] = pbVar49[3] ^ bVar148;
      auVar97[4] = pbVar49[4] ^ bVar149;
      auVar97[5] = pbVar49[5] ^ bVar150;
      auVar97[6] = pbVar49[6] ^ bVar151;
      auVar97[7] = pbVar49[7] ^ bVar152;
      auVar97[8] = pbVar49[8] ^ bVar153;
      auVar97[9] = pbVar49[9] ^ bVar154;
      auVar97[10] = pbVar49[10] ^ bVar155;
      auVar97[0xb] = pbVar49[0xb] ^ bVar156;
      auVar97[0xc] = pbVar49[0xc] ^ bVar157;
      auVar97[0xd] = pbVar49[0xd] ^ bVar158;
      auVar97[0xe] = pbVar49[0xe] ^ bVar159;
      auVar97[0xf] = pbVar49[0xf] ^ bVar160;
      auVar81[0] = pbVar49[0x10] ^ bVar131;
      auVar81[1] = pbVar49[0x11] ^ bVar132;
      auVar81[2] = pbVar49[0x12] ^ bVar133;
      auVar81[3] = pbVar49[0x13] ^ bVar134;
      auVar81[4] = pbVar49[0x14] ^ bVar135;
      auVar81[5] = pbVar49[0x15] ^ bVar136;
      auVar81[6] = pbVar49[0x16] ^ bVar137;
      auVar81[7] = pbVar49[0x17] ^ bVar98;
      auVar81[8] = pbVar49[0x18] ^ bVar138;
      auVar81[9] = pbVar49[0x19] ^ bVar139;
      auVar81[10] = pbVar49[0x1a] ^ bVar140;
      auVar81[0xb] = pbVar49[0x1b] ^ bVar141;
      auVar81[0xc] = pbVar49[0x1c] ^ bVar142;
      auVar81[0xd] = pbVar49[0x1d] ^ bVar143;
      auVar81[0xe] = pbVar49[0x1e] ^ bVar144;
      auVar81[0xf] = pbVar49[0x1f] ^ bVar100;
      auVar97 = NEON_aese(auVar97,auVar96);
      auVar97 = NEON_aesmc(auVar97,auVar97);
      auVar81 = NEON_aese(auVar81,auVar15);
      auVar81 = NEON_aesmc(auVar81,auVar81);
      auVar60 = NEON_aese(auVar60,auVar16);
      auVar60 = NEON_aesmc(auVar60,auVar60);
      auVar97 = NEON_aese(auVar97,auVar17);
      auVar97 = NEON_aesmc(auVar97,auVar97);
      uVar48 = CONCAT17(bVar130,CONCAT16(bVar129,CONCAT15(bVar125,CONCAT14(bVar123,CONCAT13(bVar121,
                                                  CONCAT12(bVar119,CONCAT11(bVar117,bVar128)))))))
               << 1;
      uVar51 = bVar115 >> 7 | uVar48;
      auVar81 = NEON_aese(auVar81,auVar18);
      auVar81 = NEON_aesmc(auVar81,auVar81);
      uVar2 = CONCAT17(bVar115,CONCAT16(bVar113,CONCAT15(bVar110,CONCAT14(bVar108,CONCAT13(bVar106,
                                                  CONCAT12(bVar104,CONCAT11(bVar102,bVar127)))))))
              << 1;
      uVar57 = (long)(char)bVar130 >> 7 & 0x87U ^ uVar2;
      auVar60 = NEON_aese(auVar60,auVar19);
      auVar60 = NEON_aesmc(auVar60,auVar60);
      auVar97 = NEON_aese(auVar97,auVar20);
      auVar97 = NEON_aesmc(auVar97,auVar97);
      auVar81 = NEON_aese(auVar81,auVar21);
      auVar81 = NEON_aesmc(auVar81,auVar81);
      auVar60 = NEON_aese(auVar60,auVar22);
      auVar60 = NEON_aesmc(auVar60,auVar60);
      uVar50 = uVar51 << 1;
      uVar52 = uVar2 >> 0x3f | uVar50;
      auVar97 = NEON_aese(auVar97,auVar23);
      auVar97 = NEON_aesmc(auVar97,auVar97);
      uVar4 = uVar57 << 1;
      uVar58 = (long)uVar51 >> 0x3f & 0x87U ^ uVar4;
      auVar81 = NEON_aese(auVar81,auVar24);
      auVar81 = NEON_aesmc(auVar81,auVar81);
      auVar60 = NEON_aese(auVar60,auVar25);
      auVar60 = NEON_aesmc(auVar60,auVar60);
      auVar97 = NEON_aese(auVar97,auVar26);
      auVar97 = NEON_aesmc(auVar97,auVar97);
      bVar45 = (byte)(uVar50 >> 0x38);
      auVar81 = NEON_aese(auVar81,auVar27);
      auVar81 = NEON_aesmc(auVar81,auVar81);
      lVar1 = uVar52 << 1;
      bVar44 = (byte)(uVar4 >> 0x38);
      auVar60 = NEON_aese(auVar60,auVar28);
      auVar60 = NEON_aesmc(auVar60,auVar60);
      lVar46 = uVar58 << 1;
      auVar97 = NEON_aese(auVar97,auVar29);
      auVar97 = NEON_aesmc(auVar97,auVar97);
      auVar81 = NEON_aese(auVar81,auVar30);
      auVar81 = NEON_aesmc(auVar81,auVar81);
      auVar60 = NEON_aese(auVar60,auVar31);
      auVar60 = NEON_aesmc(auVar60,auVar60);
      auVar97 = NEON_aese(auVar97,auVar32);
      auVar97 = NEON_aesmc(auVar97,auVar97);
      auVar81 = NEON_aese(auVar81,auVar33);
      auVar81 = NEON_aesmc(auVar81,auVar81);
      auVar60 = NEON_aese(auVar60,auVar34);
      auVar60 = NEON_aesmc(auVar60,auVar60);
      auVar97 = NEON_aese(auVar97,auVar35);
      auVar97 = NEON_aesmc(auVar97,auVar97);
      auVar81 = NEON_aese(auVar81,auVar36);
      auVar81 = NEON_aesmc(auVar81,auVar81);
      auVar60 = NEON_aese(auVar60,auVar37);
      auVar60 = NEON_aesmc(auVar60,auVar60);
      auVar97 = NEON_aese(auVar97,auVar38);
      auVar97 = NEON_aesmc(auVar97,auVar97);
      auVar81 = NEON_aese(auVar81,auVar39);
      auVar81 = NEON_aesmc(auVar81,auVar81);
      auVar60 = NEON_aese(auVar60,auVar40);
      auVar60 = NEON_aesmc(auVar60,auVar60);
      auVar97 = NEON_aese(auVar97,auVar41);
      auVar81 = NEON_aese(auVar81,auVar42);
      auVar60 = NEON_aese(auVar60,auVar43);
      bVar95 = bVar145 ^ auVar97[0] ^ bVar161;
      bVar99 = bVar146 ^ auVar97[1] ^ bVar163;
      bVar101 = bVar147 ^ auVar97[2] ^ bVar164;
      bVar103 = bVar148 ^ auVar97[3] ^ bVar165;
      bVar105 = bVar149 ^ auVar97[4] ^ bVar166;
      bVar107 = bVar150 ^ auVar97[5] ^ bVar167;
      bVar109 = bVar151 ^ auVar97[6] ^ bVar168;
      bVar111 = bVar152 ^ auVar97[7] ^ bVar169;
      bVar112 = bVar153 ^ auVar97[8] ^ bVar170;
      bVar114 = bVar154 ^ auVar97[9] ^ bVar171;
      bVar116 = bVar155 ^ auVar97[10] ^ bVar172;
      bVar118 = bVar156 ^ auVar97[0xb] ^ bVar173;
      bVar120 = bVar157 ^ auVar97[0xc] ^ bVar174;
      bVar122 = bVar158 ^ auVar97[0xd] ^ bVar175;
      bVar124 = bVar159 ^ auVar97[0xe] ^ bVar176;
      bVar126 = bVar160 ^ auVar97[0xf] ^ bVar177;
      bVar80 = bVar131 ^ auVar81[0] ^ bVar161;
      bVar82 = bVar132 ^ auVar81[1] ^ bVar163;
      bVar83 = bVar133 ^ auVar81[2] ^ bVar164;
      bVar84 = bVar134 ^ auVar81[3] ^ bVar165;
      bVar85 = bVar135 ^ auVar81[4] ^ bVar166;
      bVar86 = bVar136 ^ auVar81[5] ^ bVar167;
      bVar87 = bVar137 ^ auVar81[6] ^ bVar168;
      bVar88 = bVar138 ^ auVar81[8] ^ bVar170;
      bVar89 = bVar139 ^ auVar81[9] ^ bVar171;
      bVar90 = bVar140 ^ auVar81[10] ^ bVar172;
      bVar91 = bVar141 ^ auVar81[0xb] ^ bVar173;
      bVar92 = bVar142 ^ auVar81[0xc] ^ bVar174;
      bVar93 = bVar143 ^ auVar81[0xd] ^ bVar175;
      bVar94 = bVar144 ^ auVar81[0xe] ^ bVar176;
      uVar55 = uVar55 - 3;
      bVar61 = bVar102 ^ auVar60[1] ^ bVar163;
      bVar62 = bVar104 ^ auVar60[2] ^ bVar164;
      bVar63 = bVar106 ^ auVar60[3] ^ bVar165;
      bVar64 = bVar108 ^ auVar60[4] ^ bVar166;
      bVar65 = bVar110 ^ auVar60[5] ^ bVar167;
      bVar66 = bVar113 ^ auVar60[6] ^ bVar168;
      bVar67 = bVar115 ^ auVar60[7] ^ bVar169;
      bVar68 = bVar117 ^ auVar60[9] ^ bVar171;
      bVar69 = bVar119 ^ auVar60[10] ^ bVar172;
      bVar70 = bVar121 ^ auVar60[0xb] ^ bVar173;
      bVar71 = bVar123 ^ auVar60[0xc] ^ bVar174;
      bVar72 = bVar125 ^ auVar60[0xd] ^ bVar175;
      bVar73 = bVar129 ^ auVar60[0xe] ^ bVar176;
      bVar74 = bVar130 ^ auVar60[0xf] ^ bVar177;
      bVar153 = (byte)uVar51;
      bVar154 = (byte)(uVar48 >> 8);
      bVar155 = (byte)(uVar48 >> 0x10);
      bVar156 = (byte)(uVar48 >> 0x18);
      bVar157 = (byte)(uVar48 >> 0x20);
      bVar158 = (byte)(uVar48 >> 0x28);
      bVar159 = (byte)(uVar48 >> 0x30);
      bVar160 = (byte)(uVar48 >> 0x38);
      bVar145 = (byte)uVar57;
      bVar146 = (byte)(uVar2 >> 8);
      bVar147 = (byte)(uVar2 >> 0x10);
      bVar148 = (byte)(uVar2 >> 0x18);
      bVar149 = (byte)(uVar2 >> 0x20);
      bVar150 = (byte)(uVar2 >> 0x28);
      bVar151 = (byte)(uVar2 >> 0x30);
      bVar152 = (byte)(uVar2 >> 0x38);
      pbVar53 = pbVar54 + 0x30;
      bVar138 = (byte)uVar52;
      bVar139 = (byte)(uVar50 >> 8);
      bVar140 = (byte)(uVar50 >> 0x10);
      bVar141 = (byte)(uVar50 >> 0x18);
      bVar142 = (byte)(uVar50 >> 0x20);
      bVar143 = (byte)(uVar50 >> 0x28);
      bVar144 = (byte)(uVar50 >> 0x30);
      bVar131 = (byte)uVar58;
      bVar132 = (byte)(uVar4 >> 8);
      bVar133 = (byte)(uVar4 >> 0x10);
      bVar134 = (byte)(uVar4 >> 0x18);
      bVar135 = (byte)(uVar4 >> 0x20);
      bVar136 = (byte)(uVar4 >> 0x28);
      bVar137 = (byte)(uVar4 >> 0x30);
      bVar117 = (byte)((ulong)lVar1 >> 8);
      bVar119 = (byte)((ulong)lVar1 >> 0x10);
      bVar121 = (byte)((ulong)lVar1 >> 0x18);
      bVar123 = (byte)((ulong)lVar1 >> 0x20);
      bVar125 = (byte)((ulong)lVar1 >> 0x28);
      bVar129 = (byte)((ulong)lVar1 >> 0x30);
      bVar130 = (byte)((ulong)lVar1 >> 0x38);
      bVar102 = (byte)((ulong)lVar46 >> 8);
      bVar104 = (byte)((ulong)lVar46 >> 0x10);
      bVar106 = (byte)((ulong)lVar46 >> 0x18);
      bVar108 = (byte)((ulong)lVar46 >> 0x20);
      bVar110 = (byte)((ulong)lVar46 >> 0x28);
      bVar113 = (byte)((ulong)lVar46 >> 0x30);
      bVar115 = (byte)((ulong)lVar46 >> 0x38);
      pbVar54[0x10] = bVar112;
      pbVar54[0x11] = bVar114;
      pbVar54[0x12] = bVar116;
      pbVar54[0x13] = bVar118;
      pbVar54[0x14] = bVar120;
      pbVar54[0x15] = bVar122;
      pbVar54[0x16] = bVar124;
      pbVar54[0x17] = bVar126;
      *pbVar54 = bVar95;
      pbVar54[1] = bVar99;
      pbVar54[2] = bVar101;
      pbVar54[3] = bVar103;
      pbVar54[4] = bVar105;
      pbVar54[5] = bVar107;
      pbVar54[6] = bVar109;
      pbVar54[7] = bVar111;
      pbVar54[0x20] = bVar88;
      pbVar54[0x21] = bVar89;
      pbVar54[0x22] = bVar90;
      pbVar54[0x23] = bVar91;
      pbVar54[0x24] = bVar92;
      pbVar54[0x25] = bVar93;
      pbVar54[0x26] = bVar94;
      pbVar54[0x27] = bVar100 ^ auVar81[0xf] ^ bVar177;
      pbVar54[0x10] = bVar80;
      pbVar54[0x11] = bVar82;
      pbVar54[0x12] = bVar83;
      pbVar54[0x13] = bVar84;
      pbVar54[0x14] = bVar85;
      pbVar54[0x15] = bVar86;
      pbVar54[0x16] = bVar87;
      pbVar54[0x17] = bVar98 ^ auVar81[7] ^ bVar169;
      pbVar54[0x30] = bVar128 ^ auVar60[8] ^ bVar170;
      pbVar54[0x31] = bVar68;
      pbVar54[0x32] = bVar69;
      pbVar54[0x33] = bVar70;
      pbVar54[0x34] = bVar71;
      pbVar54[0x35] = bVar72;
      pbVar54[0x36] = bVar73;
      pbVar54[0x37] = bVar74;
      pbVar54[0x20] = bVar127 ^ auVar60[0] ^ bVar161;
      pbVar54[0x21] = bVar61;
      pbVar54[0x22] = bVar62;
      pbVar54[0x23] = bVar63;
      pbVar54[0x24] = bVar64;
      pbVar54[0x25] = bVar65;
      pbVar54[0x26] = bVar66;
      pbVar54[0x27] = bVar67;
      pbVar49 = pbVar47;
      pbVar54 = pbVar53;
      bVar127 = (char)bVar45 >> 7 & 0x87U ^ (byte)lVar46;
      bVar128 = bVar44 >> 7 | (byte)lVar1;
      bVar98 = bVar44;
      bVar100 = bVar45;
    } while (2 < uVar55);
    if (uVar55 != 0) goto LAB_710076731c;
  }
  *(ulong *)(param_1[0x16] + 8) =
       CONCAT17(bVar160,CONCAT16(bVar159,CONCAT15(bVar158,CONCAT14(bVar157,CONCAT13(bVar156,CONCAT12
                                                  (bVar155,CONCAT11(bVar154,bVar153)))))));
  *(ulong *)param_1[0x16] =
       CONCAT17(bVar152,CONCAT16(bVar151,CONCAT15(bVar150,CONCAT14(bVar149,CONCAT13(bVar148,CONCAT12
                                                  (bVar147,CONCAT11(bVar146,bVar145)))))));
  param_4 = param_4 + uVar59 * -0x10;
  param_3 = param_3 + uVar59 * 0x10;
  pbVar56 = pbVar56 + uVar59 * 0x10;
LAB_71007672d8:
  if (param_4 != 0) {
    FUN_710080f900(param_1 + 0x17,param_3,param_4);
    *(ulong *)param_1[0x18] = param_4;
    return (long)pbVar56 - (long)param_2;
  }
  return (long)pbVar56 - (long)param_2;
}



// ===== FUN_71007676e0 @ 71007676e0 (size=1060) =====

long FUN_71007676e0(undefined8 *param_1,byte *param_2,byte *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  byte bVar36;
  byte bVar37;
  long lVar38;
  byte *pbVar39;
  ulong uVar40;
  byte *pbVar41;
  ulong uVar42;
  ulong uVar43;
  byte *pbVar44;
  byte *pbVar45;
  ulong uVar46;
  byte *pbVar47;
  ulong uVar48;
  ulong uVar49;
  byte bVar50;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  undefined8 uVar51;
  byte bVar58;
  byte bVar59;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  undefined8 uVar60;
  byte bVar67;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  undefined1 auVar68 [16];
  byte bVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  byte bVar86;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  undefined1 auVar87 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  byte bVar133;
  byte bVar134;
  byte bVar135;
  byte bVar137;
  byte bVar138;
  byte bVar139;
  byte bVar140;
  byte bVar141;
  byte bVar142;
  undefined8 uVar136;
  byte bVar143;
  byte bVar144;
  byte bVar146;
  byte bVar147;
  byte bVar148;
  byte bVar149;
  byte bVar150;
  byte bVar151;
  undefined8 uVar145;
  byte bVar152;
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  
  lVar38 = param_1[0x30];
  pbVar47 = param_2;
  if (lVar38 != 0) {
    uVar46 = 0x10U - lVar38;
    if (param_4 < 0x10U - lVar38) {
      uVar46 = param_4;
    }
    FUN_710080f900((long)param_1 + lVar38 + 0x170);
    param_3 = param_3 + uVar46;
    param_4 = param_4 - uVar46;
    lVar38 = param_1[0x30];
    param_1[0x30] = uVar46 + lVar38;
    if (uVar46 + lVar38 == 0x10) {
      auVar154 = *(undefined1 (*) [16])(param_1 + 0x2c);
      uVar145 = param_1[1];
      uVar136 = *param_1;
      uVar60 = param_1[3];
      uVar51 = param_1[5];
      auVar83[0] = *(byte *)(param_1 + 0x2e) ^ auVar154[0];
      auVar83[1] = *(byte *)((long)param_1 + 0x171) ^ auVar154[1];
      auVar83[2] = *(byte *)((long)param_1 + 0x172) ^ auVar154[2];
      auVar83[3] = *(byte *)((long)param_1 + 0x173) ^ auVar154[3];
      auVar83[4] = *(byte *)((long)param_1 + 0x174) ^ auVar154[4];
      auVar83[5] = *(byte *)((long)param_1 + 0x175) ^ auVar154[5];
      auVar83[6] = *(byte *)((long)param_1 + 0x176) ^ auVar154[6];
      auVar83[7] = *(byte *)((long)param_1 + 0x177) ^ auVar154[7];
      auVar83[8] = *(byte *)(param_1 + 0x2f) ^ auVar154[8];
      auVar83[9] = *(byte *)((long)param_1 + 0x179) ^ auVar154[9];
      auVar83[10] = *(byte *)((long)param_1 + 0x17a) ^ auVar154[10];
      auVar83[0xb] = *(byte *)((long)param_1 + 0x17b) ^ auVar154[0xb];
      auVar83[0xc] = *(byte *)((long)param_1 + 0x17c) ^ auVar154[0xc];
      auVar83[0xd] = *(byte *)((long)param_1 + 0x17d) ^ auVar154[0xd];
      auVar83[0xe] = *(byte *)((long)param_1 + 0x17e) ^ auVar154[0xe];
      auVar83[0xf] = *(byte *)((long)param_1 + 0x17f) ^ auVar154[0xf];
      auVar84 = NEON_aesd(auVar83,*(undefined1 (*) [16])(param_1 + 0x14));
      auVar84 = NEON_aesimc(auVar84,auVar84);
      auVar84 = NEON_aesd(auVar84,*(undefined1 (*) [16])(param_1 + 0x12));
      auVar84 = NEON_aesimc(auVar84,auVar84);
      auVar84 = NEON_aesd(auVar84,*(undefined1 (*) [16])(param_1 + 0x10));
      auVar84 = NEON_aesimc(auVar84,auVar84);
      auVar84 = NEON_aesd(auVar84,*(undefined1 (*) [16])(param_1 + 0xe));
      auVar84 = NEON_aesimc(auVar84,auVar84);
      auVar84 = NEON_aesd(auVar84,*(undefined1 (*) [16])(param_1 + 0xc));
      auVar84 = NEON_aesimc(auVar84,auVar84);
      auVar84 = NEON_aesd(auVar84,*(undefined1 (*) [16])(param_1 + 10));
      auVar84 = NEON_aesimc(auVar84,auVar84);
      auVar84 = NEON_aesd(auVar84,*(undefined1 (*) [16])(param_1 + 8));
      auVar84 = NEON_aesimc(auVar84,auVar84);
      auVar84 = NEON_aesd(auVar84,*(undefined1 (*) [16])(param_1 + 6));
      auVar85 = NEON_aesimc(auVar84,auVar84);
      auVar84[9] = (char)((ulong)uVar51 >> 8);
      auVar84._0_9_ = *(unkbyte9 *)(param_1 + 4);
      auVar84[10] = (char)((ulong)uVar51 >> 0x10);
      auVar84[0xb] = (char)((ulong)uVar51 >> 0x18);
      auVar84[0xc] = (char)((ulong)uVar51 >> 0x20);
      auVar84[0xd] = (char)((ulong)uVar51 >> 0x28);
      auVar84[0xe] = (char)((ulong)uVar51 >> 0x30);
      auVar84[0xf] = (char)((ulong)uVar51 >> 0x38);
      auVar84 = NEON_aesd(auVar85,auVar84);
      auVar84 = NEON_aesimc(auVar84,auVar84);
      auVar85[9] = (char)((ulong)uVar60 >> 8);
      auVar85._0_9_ = *(unkbyte9 *)(param_1 + 2);
      auVar85[10] = (char)((ulong)uVar60 >> 0x10);
      auVar85[0xb] = (char)((ulong)uVar60 >> 0x18);
      auVar85[0xc] = (char)((ulong)uVar60 >> 0x20);
      auVar85[0xd] = (char)((ulong)uVar60 >> 0x28);
      auVar85[0xe] = (char)((ulong)uVar60 >> 0x30);
      auVar85[0xf] = (char)((ulong)uVar60 >> 0x38);
      auVar84 = NEON_aesd(auVar84,auVar85);
      pbVar47 = param_2 + 0x10;
      param_2[0x10] = auVar154[8] ^ auVar84[8] ^ (byte)uVar145;
      param_2[0x11] = auVar154[9] ^ auVar84[9] ^ (byte)((ulong)uVar145 >> 8);
      param_2[0x12] = auVar154[10] ^ auVar84[10] ^ (byte)((ulong)uVar145 >> 0x10);
      param_2[0x13] = auVar154[0xb] ^ auVar84[0xb] ^ (byte)((ulong)uVar145 >> 0x18);
      param_2[0x14] = auVar154[0xc] ^ auVar84[0xc] ^ (byte)((ulong)uVar145 >> 0x20);
      param_2[0x15] = auVar154[0xd] ^ auVar84[0xd] ^ (byte)((ulong)uVar145 >> 0x28);
      param_2[0x16] = auVar154[0xe] ^ auVar84[0xe] ^ (byte)((ulong)uVar145 >> 0x30);
      param_2[0x17] = auVar154[0xf] ^ auVar84[0xf] ^ (byte)((ulong)uVar145 >> 0x38);
      *param_2 = auVar154[0] ^ auVar84[0] ^ (byte)uVar136;
      param_2[1] = auVar154[1] ^ auVar84[1] ^ (byte)((ulong)uVar136 >> 8);
      param_2[2] = auVar154[2] ^ auVar84[2] ^ (byte)((ulong)uVar136 >> 0x10);
      param_2[3] = auVar154[3] ^ auVar84[3] ^ (byte)((ulong)uVar136 >> 0x18);
      param_2[4] = auVar154[4] ^ auVar84[4] ^ (byte)((ulong)uVar136 >> 0x20);
      param_2[5] = auVar154[5] ^ auVar84[5] ^ (byte)((ulong)uVar136 >> 0x28);
      param_2[6] = auVar154[6] ^ auVar84[6] ^ (byte)((ulong)uVar136 >> 0x30);
      param_2[7] = auVar154[7] ^ auVar84[7] ^ (byte)((ulong)uVar136 >> 0x38);
      param_1[0x2d] = auVar154._0_8_ >> 0x3f | auVar154._8_8_ << 1;
      param_1[0x2c] = auVar154._8_8_ >> 0x3f & 0x87U ^ auVar154._0_8_ << 1;
      param_1[0x30] = 0;
    }
  }
  if (param_4 < 0x10) goto LAB_7100767708;
  auVar153 = *(undefined1 (*) [16])(param_1 + 0x14);
  uVar48 = param_4 >> 4;
  uVar42 = param_1[0x2d];
  uVar49 = param_1[0x2c];
  uVar60 = param_1[1];
  uVar51 = *param_1;
  pauVar4 = (undefined1 (*) [16])(param_1 + 2);
  auVar35 = *pauVar4;
  auVar34 = *pauVar4;
  auVar33 = *pauVar4;
  auVar9 = *pauVar4;
  pauVar4 = (undefined1 (*) [16])(param_1 + 4);
  auVar32 = *pauVar4;
  auVar31 = *pauVar4;
  auVar30 = *pauVar4;
  auVar8 = *pauVar4;
  pauVar4 = (undefined1 (*) [16])(param_1 + 6);
  auVar29 = *pauVar4;
  auVar28 = *pauVar4;
  auVar27 = *pauVar4;
  auVar7 = *pauVar4;
  pauVar4 = (undefined1 (*) [16])(param_1 + 8);
  auVar26 = *pauVar4;
  auVar25 = *pauVar4;
  auVar24 = *pauVar4;
  auVar6 = *pauVar4;
  pauVar4 = (undefined1 (*) [16])(param_1 + 10);
  auVar23 = *pauVar4;
  auVar22 = *pauVar4;
  auVar21 = *pauVar4;
  auVar5 = *pauVar4;
  pauVar4 = (undefined1 (*) [16])(param_1 + 0xc);
  auVar20 = *pauVar4;
  auVar19 = *pauVar4;
  auVar18 = *pauVar4;
  auVar154 = *pauVar4;
  pauVar4 = (undefined1 (*) [16])(param_1 + 0xe);
  auVar17 = *pauVar4;
  auVar16 = *pauVar4;
  auVar15 = *pauVar4;
  auVar83 = *pauVar4;
  pauVar4 = (undefined1 (*) [16])(param_1 + 0x10);
  auVar14 = *pauVar4;
  auVar13 = *pauVar4;
  auVar12 = *pauVar4;
  auVar85 = *pauVar4;
  pauVar4 = (undefined1 (*) [16])(param_1 + 0x12);
  auVar11 = *pauVar4;
  auVar10 = *pauVar4;
  auVar101 = *pauVar4;
  auVar84 = *pauVar4;
  bVar50 = (byte)uVar51;
  bVar52 = (byte)((ulong)uVar51 >> 8);
  bVar53 = (byte)((ulong)uVar51 >> 0x10);
  bVar54 = (byte)((ulong)uVar51 >> 0x18);
  bVar55 = (byte)((ulong)uVar51 >> 0x20);
  bVar56 = (byte)((ulong)uVar51 >> 0x28);
  bVar57 = (byte)((ulong)uVar51 >> 0x30);
  bVar58 = (byte)((ulong)uVar51 >> 0x38);
  bVar59 = (byte)uVar60;
  bVar61 = (byte)((ulong)uVar60 >> 8);
  bVar62 = (byte)((ulong)uVar60 >> 0x10);
  bVar63 = (byte)((ulong)uVar60 >> 0x18);
  bVar64 = (byte)((ulong)uVar60 >> 0x20);
  bVar65 = (byte)((ulong)uVar60 >> 0x28);
  bVar66 = (byte)((ulong)uVar60 >> 0x30);
  bVar67 = (byte)((ulong)uVar60 >> 0x38);
  pbVar39 = param_3;
  pbVar44 = pbVar47;
  uVar46 = uVar48;
  if (param_4 < 0x30) {
LAB_710076774c:
    lVar38 = 0;
    while( true ) {
      pbVar41 = pbVar39 + lVar38;
      bVar103 = (byte)uVar49;
      auVar101[0] = *pbVar41 ^ bVar103;
      bVar111 = (byte)(uVar49 >> 8);
      auVar101[1] = pbVar41[1] ^ bVar111;
      bVar126 = (byte)(uVar49 >> 0x10);
      auVar101[2] = pbVar41[2] ^ bVar126;
      bVar134 = (byte)(uVar49 >> 0x18);
      auVar101[3] = pbVar41[3] ^ bVar134;
      bVar104 = (byte)(uVar49 >> 0x20);
      auVar101[4] = pbVar41[4] ^ bVar104;
      bVar105 = (byte)(uVar49 >> 0x28);
      auVar101[5] = pbVar41[5] ^ bVar105;
      bVar106 = (byte)(uVar49 >> 0x30);
      auVar101[6] = pbVar41[6] ^ bVar106;
      bVar107 = (byte)(uVar49 >> 0x38);
      auVar101[7] = pbVar41[7] ^ bVar107;
      bVar108 = (byte)uVar42;
      auVar101[8] = pbVar41[8] ^ bVar108;
      bVar109 = (byte)(uVar42 >> 8);
      auVar101[9] = pbVar41[9] ^ bVar109;
      bVar110 = (byte)(uVar42 >> 0x10);
      auVar101[10] = pbVar41[10] ^ bVar110;
      bVar112 = (byte)(uVar42 >> 0x18);
      auVar101[0xb] = pbVar41[0xb] ^ bVar112;
      bVar113 = (byte)(uVar42 >> 0x20);
      auVar101[0xc] = pbVar41[0xc] ^ bVar113;
      bVar114 = (byte)(uVar42 >> 0x28);
      auVar101[0xd] = pbVar41[0xd] ^ bVar114;
      bVar115 = (byte)(uVar42 >> 0x30);
      auVar101[0xe] = pbVar41[0xe] ^ bVar115;
      bVar116 = (byte)(uVar42 >> 0x38);
      auVar101[0xf] = pbVar41[0xf] ^ bVar116;
      auVar101 = NEON_aesd(auVar101,auVar153);
      auVar101 = NEON_aesimc(auVar101,auVar101);
      auVar101 = NEON_aesd(auVar101,auVar84);
      auVar101 = NEON_aesimc(auVar101,auVar101);
      auVar101 = NEON_aesd(auVar101,auVar85);
      auVar101 = NEON_aesimc(auVar101,auVar101);
      uVar1 = (long)uVar42 >> 0x3f;
      auVar101 = NEON_aesd(auVar101,auVar83);
      auVar101 = NEON_aesimc(auVar101,auVar101);
      uVar42 = uVar49 >> 0x3f | uVar42 << 1;
      auVar101 = NEON_aesd(auVar101,auVar154);
      auVar101 = NEON_aesimc(auVar101,auVar101);
      uVar49 = uVar1 & 0x87 ^ uVar49 << 1;
      auVar101 = NEON_aesd(auVar101,auVar5);
      auVar101 = NEON_aesimc(auVar101,auVar101);
      auVar101 = NEON_aesd(auVar101,auVar6);
      auVar101 = NEON_aesimc(auVar101,auVar101);
      auVar101 = NEON_aesd(auVar101,auVar7);
      auVar101 = NEON_aesimc(auVar101,auVar101);
      auVar101 = NEON_aesd(auVar101,auVar8);
      auVar101 = NEON_aesimc(auVar101,auVar101);
      auVar101 = NEON_aesd(auVar101,auVar9);
      pbVar41 = pbVar44 + lVar38;
      pbVar41[0x10] = bVar108 ^ auVar101[8] ^ bVar59;
      pbVar41[0x11] = bVar109 ^ auVar101[9] ^ bVar61;
      pbVar41[0x12] = bVar110 ^ auVar101[10] ^ bVar62;
      pbVar41[0x13] = bVar112 ^ auVar101[0xb] ^ bVar63;
      pbVar41[0x14] = bVar113 ^ auVar101[0xc] ^ bVar64;
      pbVar41[0x15] = bVar114 ^ auVar101[0xd] ^ bVar65;
      pbVar41[0x16] = bVar115 ^ auVar101[0xe] ^ bVar66;
      pbVar41[0x17] = bVar116 ^ auVar101[0xf] ^ bVar67;
      *pbVar41 = bVar103 ^ auVar101[0] ^ bVar50;
      pbVar41[1] = bVar111 ^ auVar101[1] ^ bVar52;
      pbVar41[2] = bVar126 ^ auVar101[2] ^ bVar53;
      pbVar41[3] = bVar134 ^ auVar101[3] ^ bVar54;
      pbVar41[4] = bVar104 ^ auVar101[4] ^ bVar55;
      pbVar41[5] = bVar105 ^ auVar101[5] ^ bVar56;
      pbVar41[6] = bVar106 ^ auVar101[6] ^ bVar57;
      pbVar41[7] = bVar107 ^ auVar101[7] ^ bVar58;
      lVar38 = lVar38 + 0x10;
      if (uVar46 == 1) break;
      uVar46 = 1;
    }
  }
  else {
    uVar2 = uVar42 << 1;
    uVar40 = uVar49 >> 0x3f | uVar2;
    uVar1 = uVar49 << 1;
    uVar43 = (long)uVar42 >> 0x3f & 0x87U ^ uVar1;
    bVar127 = (byte)uVar40;
    bVar128 = (byte)(uVar2 >> 8);
    bVar129 = (byte)(uVar2 >> 0x10);
    bVar130 = (byte)(uVar2 >> 0x18);
    bVar131 = (byte)(uVar2 >> 0x20);
    bVar132 = (byte)(uVar2 >> 0x28);
    bVar133 = (byte)(uVar2 >> 0x30);
    bVar134 = (byte)(uVar2 >> 0x38);
    bVar119 = (byte)uVar43;
    bVar120 = (byte)(uVar1 >> 8);
    bVar121 = (byte)(uVar1 >> 0x10);
    bVar122 = (byte)(uVar1 >> 0x18);
    bVar123 = (byte)(uVar1 >> 0x20);
    bVar124 = (byte)(uVar1 >> 0x28);
    bVar125 = (byte)(uVar1 >> 0x30);
    bVar126 = (byte)(uVar1 >> 0x38);
    lVar3 = uVar40 << 1;
    lVar38 = uVar43 << 1;
    bVar112 = (byte)((ulong)lVar3 >> 8);
    bVar113 = (byte)((ulong)lVar3 >> 0x10);
    bVar114 = (byte)((ulong)lVar3 >> 0x18);
    bVar115 = (byte)((ulong)lVar3 >> 0x20);
    bVar116 = (byte)((ulong)lVar3 >> 0x28);
    bVar117 = (byte)((ulong)lVar3 >> 0x30);
    bVar118 = (byte)((ulong)lVar3 >> 0x38);
    bVar104 = (byte)((ulong)lVar38 >> 8);
    bVar105 = (byte)((ulong)lVar38 >> 0x10);
    bVar106 = (byte)((ulong)lVar38 >> 0x18);
    bVar107 = (byte)((ulong)lVar38 >> 0x20);
    bVar108 = (byte)((ulong)lVar38 >> 0x28);
    bVar109 = (byte)((ulong)lVar38 >> 0x30);
    bVar110 = (byte)((ulong)lVar38 >> 0x38);
    pbVar41 = param_3;
    pbVar45 = pbVar47;
    bVar103 = (char)bVar134 >> 7 & 0x87U ^ (byte)lVar38;
    bVar111 = bVar126 >> 7 | (byte)lVar3;
    do {
      pbVar39 = pbVar41 + 0x30;
      auVar68[0] = pbVar41[0x20] ^ bVar103;
      auVar68[1] = pbVar41[0x21] ^ bVar104;
      auVar68[2] = pbVar41[0x22] ^ bVar105;
      auVar68[3] = pbVar41[0x23] ^ bVar106;
      auVar68[4] = pbVar41[0x24] ^ bVar107;
      auVar68[5] = pbVar41[0x25] ^ bVar108;
      auVar68[6] = pbVar41[0x26] ^ bVar109;
      auVar68[7] = pbVar41[0x27] ^ bVar110;
      auVar68[8] = pbVar41[0x28] ^ bVar111;
      auVar68[9] = pbVar41[0x29] ^ bVar112;
      auVar68[10] = pbVar41[0x2a] ^ bVar113;
      auVar68[0xb] = pbVar41[0x2b] ^ bVar114;
      auVar68[0xc] = pbVar41[0x2c] ^ bVar115;
      auVar68[0xd] = pbVar41[0x2d] ^ bVar116;
      auVar68[0xe] = pbVar41[0x2e] ^ bVar117;
      auVar68[0xf] = pbVar41[0x2f] ^ bVar118;
      bVar135 = (byte)uVar49;
      auVar102[0] = *pbVar41 ^ bVar135;
      bVar137 = (byte)(uVar49 >> 8);
      auVar102[1] = pbVar41[1] ^ bVar137;
      bVar138 = (byte)(uVar49 >> 0x10);
      auVar102[2] = pbVar41[2] ^ bVar138;
      bVar139 = (byte)(uVar49 >> 0x18);
      auVar102[3] = pbVar41[3] ^ bVar139;
      bVar140 = (byte)(uVar49 >> 0x20);
      auVar102[4] = pbVar41[4] ^ bVar140;
      bVar141 = (byte)(uVar49 >> 0x28);
      auVar102[5] = pbVar41[5] ^ bVar141;
      bVar142 = (byte)(uVar49 >> 0x30);
      auVar102[6] = pbVar41[6] ^ bVar142;
      bVar143 = (byte)(uVar49 >> 0x38);
      auVar102[7] = pbVar41[7] ^ bVar143;
      bVar144 = (byte)uVar42;
      auVar102[8] = pbVar41[8] ^ bVar144;
      bVar146 = (byte)(uVar42 >> 8);
      auVar102[9] = pbVar41[9] ^ bVar146;
      bVar147 = (byte)(uVar42 >> 0x10);
      auVar102[10] = pbVar41[10] ^ bVar147;
      bVar148 = (byte)(uVar42 >> 0x18);
      auVar102[0xb] = pbVar41[0xb] ^ bVar148;
      bVar149 = (byte)(uVar42 >> 0x20);
      auVar102[0xc] = pbVar41[0xc] ^ bVar149;
      bVar150 = (byte)(uVar42 >> 0x28);
      auVar102[0xd] = pbVar41[0xd] ^ bVar150;
      bVar151 = (byte)(uVar42 >> 0x30);
      auVar102[0xe] = pbVar41[0xe] ^ bVar151;
      bVar152 = (byte)(uVar42 >> 0x38);
      auVar102[0xf] = pbVar41[0xf] ^ bVar152;
      auVar87[0] = pbVar41[0x10] ^ bVar119;
      auVar87[1] = pbVar41[0x11] ^ bVar120;
      auVar87[2] = pbVar41[0x12] ^ bVar121;
      auVar87[3] = pbVar41[0x13] ^ bVar122;
      auVar87[4] = pbVar41[0x14] ^ bVar123;
      auVar87[5] = pbVar41[0x15] ^ bVar124;
      auVar87[6] = pbVar41[0x16] ^ bVar125;
      auVar87[7] = pbVar41[0x17] ^ bVar126;
      auVar87[8] = pbVar41[0x18] ^ bVar127;
      auVar87[9] = pbVar41[0x19] ^ bVar128;
      auVar87[10] = pbVar41[0x1a] ^ bVar129;
      auVar87[0xb] = pbVar41[0x1b] ^ bVar130;
      auVar87[0xc] = pbVar41[0x1c] ^ bVar131;
      auVar87[0xd] = pbVar41[0x1d] ^ bVar132;
      auVar87[0xe] = pbVar41[0x1e] ^ bVar133;
      auVar87[0xf] = pbVar41[0x1f] ^ bVar134;
      auVar102 = NEON_aesd(auVar102,auVar153);
      auVar102 = NEON_aesimc(auVar102,auVar102);
      auVar87 = NEON_aesd(auVar87,auVar153);
      auVar87 = NEON_aesimc(auVar87,auVar87);
      auVar68 = NEON_aesd(auVar68,auVar153);
      auVar68 = NEON_aesimc(auVar68,auVar68);
      auVar102 = NEON_aesd(auVar102,auVar101);
      auVar102 = NEON_aesimc(auVar102,auVar102);
      uVar42 = (ulong)(bVar110 >> 7) |
               CONCAT17(bVar118,CONCAT16(bVar117,CONCAT15(bVar116,CONCAT14(bVar115,CONCAT13(bVar114,
                                                  CONCAT12(bVar113,CONCAT11(bVar112,bVar111)))))))
               << 1;
      auVar87 = NEON_aesd(auVar87,auVar10);
      auVar87 = NEON_aesimc(auVar87,auVar87);
      uVar1 = CONCAT17(bVar110,CONCAT16(bVar109,CONCAT15(bVar108,CONCAT14(bVar107,CONCAT13(bVar106,
                                                  CONCAT12(bVar105,CONCAT11(bVar104,bVar103)))))))
              << 1;
      uVar49 = (long)(char)bVar118 >> 7 & 0x87U ^ uVar1;
      auVar68 = NEON_aesd(auVar68,auVar11);
      auVar68 = NEON_aesimc(auVar68,auVar68);
      auVar102 = NEON_aesd(auVar102,auVar12);
      auVar102 = NEON_aesimc(auVar102,auVar102);
      auVar87 = NEON_aesd(auVar87,auVar13);
      auVar87 = NEON_aesimc(auVar87,auVar87);
      auVar68 = NEON_aesd(auVar68,auVar14);
      auVar68 = NEON_aesimc(auVar68,auVar68);
      uVar2 = uVar42 << 1;
      uVar40 = uVar1 >> 0x3f | uVar2;
      auVar102 = NEON_aesd(auVar102,auVar15);
      auVar102 = NEON_aesimc(auVar102,auVar102);
      uVar1 = uVar49 << 1;
      uVar43 = (long)uVar42 >> 0x3f & 0x87U ^ uVar1;
      auVar87 = NEON_aesd(auVar87,auVar16);
      auVar87 = NEON_aesimc(auVar87,auVar87);
      auVar68 = NEON_aesd(auVar68,auVar17);
      auVar68 = NEON_aesimc(auVar68,auVar68);
      auVar102 = NEON_aesd(auVar102,auVar18);
      auVar102 = NEON_aesimc(auVar102,auVar102);
      bVar37 = (byte)(uVar2 >> 0x38);
      auVar87 = NEON_aesd(auVar87,auVar19);
      auVar87 = NEON_aesimc(auVar87,auVar87);
      lVar3 = uVar40 << 1;
      bVar36 = (byte)(uVar1 >> 0x38);
      auVar68 = NEON_aesd(auVar68,auVar20);
      auVar68 = NEON_aesimc(auVar68,auVar68);
      lVar38 = uVar43 << 1;
      auVar102 = NEON_aesd(auVar102,auVar21);
      auVar102 = NEON_aesimc(auVar102,auVar102);
      auVar87 = NEON_aesd(auVar87,auVar22);
      auVar87 = NEON_aesimc(auVar87,auVar87);
      auVar68 = NEON_aesd(auVar68,auVar23);
      auVar68 = NEON_aesimc(auVar68,auVar68);
      auVar102 = NEON_aesd(auVar102,auVar24);
      auVar102 = NEON_aesimc(auVar102,auVar102);
      auVar87 = NEON_aesd(auVar87,auVar25);
      auVar87 = NEON_aesimc(auVar87,auVar87);
      auVar68 = NEON_aesd(auVar68,auVar26);
      auVar68 = NEON_aesimc(auVar68,auVar68);
      auVar102 = NEON_aesd(auVar102,auVar27);
      auVar102 = NEON_aesimc(auVar102,auVar102);
      auVar87 = NEON_aesd(auVar87,auVar28);
      auVar87 = NEON_aesimc(auVar87,auVar87);
      auVar68 = NEON_aesd(auVar68,auVar29);
      auVar68 = NEON_aesimc(auVar68,auVar68);
      auVar102 = NEON_aesd(auVar102,auVar30);
      auVar102 = NEON_aesimc(auVar102,auVar102);
      auVar87 = NEON_aesd(auVar87,auVar31);
      auVar87 = NEON_aesimc(auVar87,auVar87);
      auVar68 = NEON_aesd(auVar68,auVar32);
      auVar68 = NEON_aesimc(auVar68,auVar68);
      auVar102 = NEON_aesd(auVar102,auVar33);
      auVar87 = NEON_aesd(auVar87,auVar34);
      auVar68 = NEON_aesd(auVar68,auVar35);
      bVar86 = bVar119 ^ auVar87[0] ^ bVar50;
      bVar88 = bVar120 ^ auVar87[1] ^ bVar52;
      bVar89 = bVar121 ^ auVar87[2] ^ bVar53;
      bVar90 = bVar122 ^ auVar87[3] ^ bVar54;
      bVar91 = bVar123 ^ auVar87[4] ^ bVar55;
      bVar92 = bVar124 ^ auVar87[5] ^ bVar56;
      bVar93 = bVar125 ^ auVar87[6] ^ bVar57;
      bVar94 = bVar127 ^ auVar87[8] ^ bVar59;
      bVar95 = bVar128 ^ auVar87[9] ^ bVar61;
      bVar96 = bVar129 ^ auVar87[10] ^ bVar62;
      bVar97 = bVar130 ^ auVar87[0xb] ^ bVar63;
      bVar98 = bVar131 ^ auVar87[0xc] ^ bVar64;
      bVar99 = bVar132 ^ auVar87[0xd] ^ bVar65;
      bVar100 = bVar133 ^ auVar87[0xe] ^ bVar66;
      uVar46 = uVar46 - 3;
      bVar69 = bVar104 ^ auVar68[1] ^ bVar52;
      bVar70 = bVar105 ^ auVar68[2] ^ bVar53;
      bVar71 = bVar106 ^ auVar68[3] ^ bVar54;
      bVar72 = bVar107 ^ auVar68[4] ^ bVar55;
      bVar73 = bVar108 ^ auVar68[5] ^ bVar56;
      bVar74 = bVar109 ^ auVar68[6] ^ bVar57;
      bVar75 = bVar110 ^ auVar68[7] ^ bVar58;
      bVar76 = bVar112 ^ auVar68[9] ^ bVar61;
      bVar77 = bVar113 ^ auVar68[10] ^ bVar62;
      bVar78 = bVar114 ^ auVar68[0xb] ^ bVar63;
      bVar79 = bVar115 ^ auVar68[0xc] ^ bVar64;
      bVar80 = bVar116 ^ auVar68[0xd] ^ bVar65;
      bVar81 = bVar117 ^ auVar68[0xe] ^ bVar66;
      bVar82 = bVar118 ^ auVar68[0xf] ^ bVar67;
      pbVar44 = pbVar45 + 0x30;
      bVar127 = (byte)uVar40;
      bVar128 = (byte)(uVar2 >> 8);
      bVar129 = (byte)(uVar2 >> 0x10);
      bVar130 = (byte)(uVar2 >> 0x18);
      bVar131 = (byte)(uVar2 >> 0x20);
      bVar132 = (byte)(uVar2 >> 0x28);
      bVar133 = (byte)(uVar2 >> 0x30);
      bVar119 = (byte)uVar43;
      bVar120 = (byte)(uVar1 >> 8);
      bVar121 = (byte)(uVar1 >> 0x10);
      bVar122 = (byte)(uVar1 >> 0x18);
      bVar123 = (byte)(uVar1 >> 0x20);
      bVar124 = (byte)(uVar1 >> 0x28);
      bVar125 = (byte)(uVar1 >> 0x30);
      bVar112 = (byte)((ulong)lVar3 >> 8);
      bVar113 = (byte)((ulong)lVar3 >> 0x10);
      bVar114 = (byte)((ulong)lVar3 >> 0x18);
      bVar115 = (byte)((ulong)lVar3 >> 0x20);
      bVar116 = (byte)((ulong)lVar3 >> 0x28);
      bVar117 = (byte)((ulong)lVar3 >> 0x30);
      bVar118 = (byte)((ulong)lVar3 >> 0x38);
      bVar104 = (byte)((ulong)lVar38 >> 8);
      bVar105 = (byte)((ulong)lVar38 >> 0x10);
      bVar106 = (byte)((ulong)lVar38 >> 0x18);
      bVar107 = (byte)((ulong)lVar38 >> 0x20);
      bVar108 = (byte)((ulong)lVar38 >> 0x28);
      bVar109 = (byte)((ulong)lVar38 >> 0x30);
      bVar110 = (byte)((ulong)lVar38 >> 0x38);
      pbVar45[0x10] = bVar144 ^ auVar102[8] ^ bVar59;
      pbVar45[0x11] = bVar146 ^ auVar102[9] ^ bVar61;
      pbVar45[0x12] = bVar147 ^ auVar102[10] ^ bVar62;
      pbVar45[0x13] = bVar148 ^ auVar102[0xb] ^ bVar63;
      pbVar45[0x14] = bVar149 ^ auVar102[0xc] ^ bVar64;
      pbVar45[0x15] = bVar150 ^ auVar102[0xd] ^ bVar65;
      pbVar45[0x16] = bVar151 ^ auVar102[0xe] ^ bVar66;
      pbVar45[0x17] = bVar152 ^ auVar102[0xf] ^ bVar67;
      *pbVar45 = bVar135 ^ auVar102[0] ^ bVar50;
      pbVar45[1] = bVar137 ^ auVar102[1] ^ bVar52;
      pbVar45[2] = bVar138 ^ auVar102[2] ^ bVar53;
      pbVar45[3] = bVar139 ^ auVar102[3] ^ bVar54;
      pbVar45[4] = bVar140 ^ auVar102[4] ^ bVar55;
      pbVar45[5] = bVar141 ^ auVar102[5] ^ bVar56;
      pbVar45[6] = bVar142 ^ auVar102[6] ^ bVar57;
      pbVar45[7] = bVar143 ^ auVar102[7] ^ bVar58;
      pbVar45[0x20] = bVar94;
      pbVar45[0x21] = bVar95;
      pbVar45[0x22] = bVar96;
      pbVar45[0x23] = bVar97;
      pbVar45[0x24] = bVar98;
      pbVar45[0x25] = bVar99;
      pbVar45[0x26] = bVar100;
      pbVar45[0x27] = bVar134 ^ auVar87[0xf] ^ bVar67;
      pbVar45[0x10] = bVar86;
      pbVar45[0x11] = bVar88;
      pbVar45[0x12] = bVar89;
      pbVar45[0x13] = bVar90;
      pbVar45[0x14] = bVar91;
      pbVar45[0x15] = bVar92;
      pbVar45[0x16] = bVar93;
      pbVar45[0x17] = bVar126 ^ auVar87[7] ^ bVar58;
      pbVar45[0x30] = bVar111 ^ auVar68[8] ^ bVar59;
      pbVar45[0x31] = bVar76;
      pbVar45[0x32] = bVar77;
      pbVar45[0x33] = bVar78;
      pbVar45[0x34] = bVar79;
      pbVar45[0x35] = bVar80;
      pbVar45[0x36] = bVar81;
      pbVar45[0x37] = bVar82;
      pbVar45[0x20] = bVar103 ^ auVar68[0] ^ bVar50;
      pbVar45[0x21] = bVar69;
      pbVar45[0x22] = bVar70;
      pbVar45[0x23] = bVar71;
      pbVar45[0x24] = bVar72;
      pbVar45[0x25] = bVar73;
      pbVar45[0x26] = bVar74;
      pbVar45[0x27] = bVar75;
      pbVar41 = pbVar39;
      pbVar45 = pbVar44;
      bVar103 = (char)bVar37 >> 7 & 0x87U ^ (byte)lVar38;
      bVar111 = bVar36 >> 7 | (byte)lVar3;
      bVar126 = bVar36;
      bVar134 = bVar37;
    } while (2 < uVar46);
    if (uVar46 != 0) goto LAB_710076774c;
  }
  param_1[0x2d] = uVar42;
  param_1[0x2c] = uVar49;
  param_4 = param_4 + uVar48 * -0x10;
  param_3 = param_3 + uVar48 * 0x10;
  pbVar47 = pbVar47 + uVar48 * 0x10;
LAB_7100767708:
  if (param_4 != 0) {
    FUN_710080f900(param_1 + 0x2e,param_3,param_4);
    param_1[0x30] = param_4;
    return (long)pbVar47 - (long)param_2;
  }
  return (long)pbVar47 - (long)param_2;
}



// ===== FUN_7100767b10 @ 7100767b10 (size=156) =====

void FUN_7100767b10(long param_1,undefined8 param_2,ulong param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  puVar1 = (ulong *)(param_1 + 0x78);
  *(undefined1 (*) [16])(param_1 + 0x78) = ZEXT216(0);
  *(undefined1 (*) [16])(param_1 + 0x88) = ZEXT216(0);
  *(undefined1 (*) [16])(param_1 + 0x98) = ZEXT216(0);
  *(undefined1 (*) [16])(param_1 + 0xa8) = ZEXT216(0);
  *(undefined1 *)(param_1 + 0xd8) = 0;
  if (param_3 < 0x41) {
    FUN_710080f900(puVar1);
  }
  else {
    FUN_7100767ed0();
    FUN_7100767f00(param_1,param_2,param_3);
    FUN_7100768000(param_1,puVar1);
  }
  puVar2 = puVar1;
  do {
    puVar3 = puVar2 + 2;
    puVar2[1] = puVar2[1] ^ 0x3636363636363636;
    *puVar2 = *puVar2 ^ 0x3636363636363636;
    puVar2 = puVar3;
  } while ((ulong *)(param_1 + 0xb8) != puVar3);
  FUN_7100767ed0(param_1);
  FUN_7100767f00(param_1,puVar1,0x40);
  return;
}



// ===== thunk_FUN_7100767f00 @ 7100767bb0 (size=4) =====

void thunk_FUN_7100767f00(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 0x68);
  *(ulong *)(param_1 + 0x60) =
       *(long *)(param_1 + 0x60) + (lVar1 + param_3 & 0xffffffffffffffc0) * 8;
  if (lVar1 != 0) {
    uVar2 = 0x40U - lVar1;
    if (param_3 < 0x40U - lVar1) {
      uVar2 = param_3;
    }
    FUN_710080f900(param_1 + lVar1 + 0x20);
    lVar1 = uVar2 + *(long *)(param_1 + 0x68);
    param_2 = param_2 + uVar2;
    param_3 = param_3 - uVar2;
    *(long *)(param_1 + 0x68) = lVar1;
    if (lVar1 == 0x40) {
      FUN_7100767cd0(param_1,param_1 + 0x20,1);
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
  }
  if (0x3f < param_3) {
    uVar2 = param_3 >> 6;
    FUN_7100767cd0(param_1,param_2,uVar2);
    param_3 = param_3 + uVar2 * -0x40;
    param_2 = param_2 + uVar2 * 0x40;
  }
  if (param_3 != 0) {
    FUN_710080f900(param_1 + 0x20,param_2,param_3);
    *(ulong *)(param_1 + 0x68) = param_3;
    return;
  }
  return;
}



// ===== FUN_7100767bc0 @ 7100767bc0 (size=196) =====

void FUN_7100767bc0(long param_1,undefined8 *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (ulong *)(param_1 + 0xb8);
  if ((*(byte *)(param_1 + 0xd8) & 1) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0xd0);
    uVar4 = *(undefined8 *)(param_1 + 200);
    uVar6 = *(undefined8 *)(param_1 + 0xc0);
    *param_2 = *(undefined8 *)(param_1 + 0xb8);
    param_2[1] = uVar6;
    param_2[3] = uVar5;
    param_2[2] = uVar4;
    return;
  }
  FUN_7100768000(param_1,puVar1);
  puVar2 = (ulong *)(param_1 + 0x78);
  do {
    puVar3 = puVar2 + 2;
    puVar2[1] = puVar2[1] ^ 0x6a6a6a6a6a6a6a6a;
    *puVar2 = *puVar2 ^ 0x6a6a6a6a6a6a6a6a;
    puVar2 = puVar3;
  } while (puVar1 != puVar3);
  FUN_7100767ed0(param_1);
  FUN_7100767f00(param_1,(ulong *)(param_1 + 0x78),0x40);
  FUN_7100767f00(param_1,puVar1,0x20);
  FUN_7100768000(param_1,puVar1);
  uVar6 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined1 *)(param_1 + 0xd8) = 1;
  uVar5 = *(undefined8 *)(param_1 + 0xd0);
  uVar4 = *(undefined8 *)(param_1 + 200);
  *param_2 = *(undefined8 *)(param_1 + 0xb8);
  param_2[1] = uVar6;
  param_2[3] = uVar5;
  param_2[2] = uVar4;
  return;
}



// ===== FUN_7100767c90 @ 7100767c90 (size=64) =====

void FUN_7100767c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  undefined1 auStack_e0 [224];
  
  FUN_7100767b10(auStack_e0);
  thunk_FUN_7100767f00(auStack_e0,param_4,param_5);
  FUN_7100767bc0(auStack_e0,param_1);
  return;
}



// ===== FUN_7100767cd0 @ 7100767cd0 (size=500) =====

void FUN_7100767cd0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  undefined8 uVar39;
  int iVar42;
  undefined1 auVar41 [16];
  undefined8 uVar43;
  int iVar44;
  undefined8 uVar45;
  int iVar49;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined8 uVar50;
  undefined8 uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar40 [16];
  undefined1 auVar46 [16];
  
  auVar52 = *param_1;
  uVar51 = *(undefined8 *)(param_1[1] + 8);
  auVar40._0_8_ = *(undefined8 *)param_1[1];
  uVar45 = 0;
  uVar50 = 0;
  uVar39 = uVar45;
  uVar43 = uVar50;
  do {
    iVar44 = (int)uVar45 + auVar52._0_4_;
    iVar49 = (int)((ulong)uVar45 >> 0x20) + auVar52._4_4_;
    auVar46._0_8_ = CONCAT44(iVar49,iVar44);
    auVar46._8_4_ = (int)uVar50 + auVar52._8_4_;
    auVar46._12_4_ = (int)((ulong)uVar50 >> 0x20) + auVar52._12_4_;
    iVar38 = (int)uVar39 + (int)auVar40._0_8_;
    iVar42 = (int)((ulong)uVar39 >> 0x20) + (int)((ulong)auVar40._0_8_ >> 0x20);
    auVar40._0_8_ = CONCAT44(iVar42,iVar38);
    auVar40._8_4_ = (int)uVar43 + (int)uVar51;
    auVar40._12_4_ = (int)((ulong)uVar43 >> 0x20) + (int)((ulong)uVar51 >> 0x20);
    auVar52 = NEON_rev32(*param_2,1);
    auVar26 = NEON_rev32(param_2[1],1);
    auVar28 = NEON_rev32(param_2[2],1);
    auVar29 = NEON_rev32(param_2[3],1);
    iVar30 = auVar52._0_4_ + 0x428a2f98;
    iVar31 = auVar52._4_4_ + 0x71374491;
    iVar32 = auVar52._8_4_ + -0x4a3f0431;
    iVar33 = auVar52._12_4_ + -0x164a245b;
    iVar34 = auVar26._0_4_ + 0x3956c25b;
    iVar35 = auVar26._4_4_ + 0x59f111f1;
    iVar36 = auVar26._8_4_ + -0x6dc07d5c;
    iVar37 = auVar26._12_4_ + -0x54e3a12b;
    auVar24 = NEON_sha256su0(auVar52,auVar26,4);
    auVar52._8_8_ = auVar46._8_8_;
    auVar52._0_8_ = auVar46._0_8_;
    auVar25._4_4_ = iVar31;
    auVar25._0_4_ = iVar30;
    auVar25._8_4_ = iVar32;
    auVar25._12_4_ = iVar33;
    auVar47 = NEON_sha256h(auVar46,auVar40,auVar25,4);
    uVar51 = auVar40._8_8_;
    auVar27._4_4_ = iVar31;
    auVar27._0_4_ = iVar30;
    auVar27._8_4_ = iVar32;
    auVar27._12_4_ = iVar33;
    auVar41 = NEON_sha256h2(auVar40,auVar52,auVar27,4);
    auVar27 = NEON_sha256su0(auVar26,auVar28,4);
    auVar25 = NEON_sha256su1(auVar24,auVar28,auVar29,4);
    iVar30 = auVar28._0_4_ + -0x27f85568;
    iVar31 = auVar28._4_4_ + 0x12835b01;
    iVar32 = auVar28._8_4_ + 0x243185be;
    iVar33 = auVar28._12_4_ + 0x550c7dc3;
    auVar48._4_4_ = iVar35;
    auVar48._0_4_ = iVar34;
    auVar48._8_4_ = iVar36;
    auVar48._12_4_ = iVar37;
    auVar48 = NEON_sha256h(auVar47,auVar41,auVar48,4);
    auVar1._4_4_ = iVar35;
    auVar1._0_4_ = iVar34;
    auVar1._8_4_ = iVar36;
    auVar1._12_4_ = iVar37;
    auVar26 = NEON_sha256h2(auVar41,auVar47,auVar1,4);
    auVar24 = NEON_sha256su0(auVar28,auVar29,4);
    auVar27 = NEON_sha256su1(auVar27,auVar29,auVar25,4);
    iVar34 = auVar29._0_4_ + 0x72be5d74;
    iVar35 = auVar29._4_4_ + -0x7f214e02;
    iVar36 = auVar29._8_4_ + -0x6423f959;
    iVar37 = auVar29._12_4_ + -0x3e640e8c;
    auVar8._4_4_ = iVar31;
    auVar8._0_4_ = iVar30;
    auVar8._8_4_ = iVar32;
    auVar8._12_4_ = iVar33;
    auVar47 = NEON_sha256h(auVar48,auVar26,auVar8,4);
    auVar9._4_4_ = iVar31;
    auVar9._0_4_ = iVar30;
    auVar9._8_4_ = iVar32;
    auVar9._12_4_ = iVar33;
    auVar41 = NEON_sha256h2(auVar26,auVar48,auVar9,4);
    auVar26 = NEON_sha256su0(auVar29,auVar25,4);
    auVar28 = NEON_sha256su1(auVar24,auVar25,auVar27,4);
    iVar30 = auVar25._0_4_ + -0x1b64963f;
    iVar31 = auVar25._4_4_ + -0x1041b87a;
    iVar32 = auVar25._8_4_ + 0xfc19dc6;
    iVar33 = auVar25._12_4_ + 0x240ca1cc;
    auVar16._4_4_ = iVar35;
    auVar16._0_4_ = iVar34;
    auVar16._8_4_ = iVar36;
    auVar16._12_4_ = iVar37;
    auVar48 = NEON_sha256h(auVar47,auVar41,auVar16,4);
    auVar17._4_4_ = iVar35;
    auVar17._0_4_ = iVar34;
    auVar17._8_4_ = iVar36;
    auVar17._12_4_ = iVar37;
    auVar41 = NEON_sha256h2(auVar41,auVar47,auVar17,4);
    auVar25 = NEON_sha256su0(auVar25,auVar27,4);
    auVar29 = NEON_sha256su1(auVar26,auVar27,auVar28,4);
    iVar34 = auVar27._0_4_ + 0x2de92c6f;
    iVar35 = auVar27._4_4_ + 0x4a7484aa;
    iVar36 = auVar27._8_4_ + 0x5cb0a9dc;
    iVar37 = auVar27._12_4_ + 0x76f988da;
    auVar24._4_4_ = iVar31;
    auVar24._0_4_ = iVar30;
    auVar24._8_4_ = iVar32;
    auVar24._12_4_ = iVar33;
    auVar47 = NEON_sha256h(auVar48,auVar41,auVar24,4);
    auVar26._4_4_ = iVar31;
    auVar26._0_4_ = iVar30;
    auVar26._8_4_ = iVar32;
    auVar26._12_4_ = iVar33;
    auVar24 = NEON_sha256h2(auVar41,auVar48,auVar26,4);
    auVar27 = NEON_sha256su0(auVar27,auVar28,4);
    auVar25 = NEON_sha256su1(auVar25,auVar28,auVar29,4);
    iVar30 = auVar28._0_4_ + -0x67c1aeae;
    iVar31 = auVar28._4_4_ + -0x57ce3993;
    iVar32 = auVar28._8_4_ + -0x4ffcd838;
    iVar33 = auVar28._12_4_ + -0x40a68039;
    auVar2._4_4_ = iVar35;
    auVar2._0_4_ = iVar34;
    auVar2._8_4_ = iVar36;
    auVar2._12_4_ = iVar37;
    auVar41 = NEON_sha256h(auVar47,auVar24,auVar2,4);
    auVar3._4_4_ = iVar35;
    auVar3._0_4_ = iVar34;
    auVar3._8_4_ = iVar36;
    auVar3._12_4_ = iVar37;
    auVar26 = NEON_sha256h2(auVar24,auVar47,auVar3,4);
    auVar24 = NEON_sha256su0(auVar28,auVar29,4);
    auVar27 = NEON_sha256su1(auVar27,auVar29,auVar25,4);
    iVar34 = auVar29._0_4_ + -0x391ff40d;
    iVar35 = auVar29._4_4_ + -0x2a586eb9;
    iVar36 = auVar29._8_4_ + 0x6ca6351;
    iVar37 = auVar29._12_4_ + 0x14292967;
    auVar10._4_4_ = iVar31;
    auVar10._0_4_ = iVar30;
    auVar10._8_4_ = iVar32;
    auVar10._12_4_ = iVar33;
    auVar47 = NEON_sha256h(auVar41,auVar26,auVar10,4);
    auVar11._4_4_ = iVar31;
    auVar11._0_4_ = iVar30;
    auVar11._8_4_ = iVar32;
    auVar11._12_4_ = iVar33;
    auVar28 = NEON_sha256h2(auVar26,auVar41,auVar11,4);
    auVar26 = NEON_sha256su0(auVar29,auVar25,4);
    auVar24 = NEON_sha256su1(auVar24,auVar25,auVar27,4);
    iVar30 = auVar25._0_4_ + 0x27b70a85;
    iVar31 = auVar25._4_4_ + 0x2e1b2138;
    iVar32 = auVar25._8_4_ + 0x4d2c6dfc;
    iVar33 = auVar25._12_4_ + 0x53380d13;
    auVar18._4_4_ = iVar35;
    auVar18._0_4_ = iVar34;
    auVar18._8_4_ = iVar36;
    auVar18._12_4_ = iVar37;
    auVar48 = NEON_sha256h(auVar47,auVar28,auVar18,4);
    auVar19._4_4_ = iVar35;
    auVar19._0_4_ = iVar34;
    auVar19._8_4_ = iVar36;
    auVar19._12_4_ = iVar37;
    auVar41 = NEON_sha256h2(auVar28,auVar47,auVar19,4);
    auVar25 = NEON_sha256su0(auVar25,auVar27,4);
    auVar26 = NEON_sha256su1(auVar26,auVar27,auVar24,4);
    iVar34 = auVar27._0_4_ + 0x650a7354;
    iVar35 = auVar27._4_4_ + 0x766a0abb;
    iVar36 = auVar27._8_4_ + -0x7e3d36d2;
    iVar37 = auVar27._12_4_ + -0x6d8dd37b;
    auVar28._4_4_ = iVar31;
    auVar28._0_4_ = iVar30;
    auVar28._8_4_ = iVar32;
    auVar28._12_4_ = iVar33;
    auVar47 = NEON_sha256h(auVar48,auVar41,auVar28,4);
    auVar29._4_4_ = iVar31;
    auVar29._0_4_ = iVar30;
    auVar29._8_4_ = iVar32;
    auVar29._12_4_ = iVar33;
    auVar28 = NEON_sha256h2(auVar41,auVar48,auVar29,4);
    auVar27 = NEON_sha256su0(auVar27,auVar24,4);
    auVar25 = NEON_sha256su1(auVar25,auVar24,auVar26,4);
    iVar30 = auVar24._0_4_ + -0x5d40175f;
    iVar31 = auVar24._4_4_ + -0x57e599b5;
    iVar32 = auVar24._8_4_ + -0x3db47490;
    iVar33 = auVar24._12_4_ + -0x3893ae5d;
    auVar4._4_4_ = iVar35;
    auVar4._0_4_ = iVar34;
    auVar4._8_4_ = iVar36;
    auVar4._12_4_ = iVar37;
    auVar29 = NEON_sha256h(auVar47,auVar28,auVar4,4);
    auVar5._4_4_ = iVar35;
    auVar5._0_4_ = iVar34;
    auVar5._8_4_ = iVar36;
    auVar5._12_4_ = iVar37;
    auVar28 = NEON_sha256h2(auVar28,auVar47,auVar5,4);
    auVar24 = NEON_sha256su0(auVar24,auVar26,4);
    auVar27 = NEON_sha256su1(auVar27,auVar26,auVar25,4);
    iVar34 = auVar26._0_4_ + -0x2e6d17e7;
    iVar35 = auVar26._4_4_ + -0x2966f9dc;
    iVar36 = auVar26._8_4_ + -0xbf1ca7b;
    iVar37 = auVar26._12_4_ + 0x106aa070;
    auVar12._4_4_ = iVar31;
    auVar12._0_4_ = iVar30;
    auVar12._8_4_ = iVar32;
    auVar12._12_4_ = iVar33;
    auVar41 = NEON_sha256h(auVar29,auVar28,auVar12,4);
    auVar13._4_4_ = iVar31;
    auVar13._0_4_ = iVar30;
    auVar13._8_4_ = iVar32;
    auVar13._12_4_ = iVar33;
    auVar28 = NEON_sha256h2(auVar28,auVar29,auVar13,4);
    auVar26 = NEON_sha256su0(auVar26,auVar25,4);
    auVar24 = NEON_sha256su1(auVar24,auVar25,auVar27,4);
    iVar30 = auVar25._0_4_ + 0x19a4c116;
    iVar31 = auVar25._4_4_ + 0x1e376c08;
    iVar32 = auVar25._8_4_ + 0x2748774c;
    iVar33 = auVar25._12_4_ + 0x34b0bcb5;
    auVar20._4_4_ = iVar35;
    auVar20._0_4_ = iVar34;
    auVar20._8_4_ = iVar36;
    auVar20._12_4_ = iVar37;
    auVar29 = NEON_sha256h(auVar41,auVar28,auVar20,4);
    auVar21._4_4_ = iVar35;
    auVar21._0_4_ = iVar34;
    auVar21._8_4_ = iVar36;
    auVar21._12_4_ = iVar37;
    auVar28 = NEON_sha256h2(auVar28,auVar41,auVar21,4);
    auVar25 = NEON_sha256su1(auVar26,auVar27,auVar24,4);
    iVar34 = auVar27._0_4_ + 0x391c0cb3;
    iVar35 = auVar27._4_4_ + 0x4ed8aa4a;
    iVar36 = auVar27._8_4_ + 0x5b9cca4f;
    iVar37 = auVar27._12_4_ + 0x682e6ff3;
    auVar41._4_4_ = iVar31;
    auVar41._0_4_ = iVar30;
    auVar41._8_4_ = iVar32;
    auVar41._12_4_ = iVar33;
    auVar26 = NEON_sha256h(auVar29,auVar28,auVar41,4);
    auVar47._4_4_ = iVar31;
    auVar47._0_4_ = iVar30;
    auVar47._8_4_ = iVar32;
    auVar47._12_4_ = iVar33;
    auVar27 = NEON_sha256h2(auVar28,auVar29,auVar47,4);
    iVar30 = auVar24._0_4_ + 0x748f82ee;
    iVar31 = auVar24._4_4_ + 0x78a5636f;
    iVar32 = auVar24._8_4_ + -0x7b3787ec;
    iVar33 = auVar24._12_4_ + -0x7338fdf8;
    auVar6._4_4_ = iVar35;
    auVar6._0_4_ = iVar34;
    auVar6._8_4_ = iVar36;
    auVar6._12_4_ = iVar37;
    auVar24 = NEON_sha256h(auVar26,auVar27,auVar6,4);
    auVar7._4_4_ = iVar35;
    auVar7._0_4_ = iVar34;
    auVar7._8_4_ = iVar36;
    auVar7._12_4_ = iVar37;
    auVar27 = NEON_sha256h2(auVar27,auVar26,auVar7,4);
    iVar34 = auVar25._0_4_ + -0x6f410006;
    iVar35 = auVar25._4_4_ + -0x5baf9315;
    iVar36 = auVar25._8_4_ + -0x41065c09;
    iVar37 = auVar25._12_4_ + -0x398e870e;
    auVar14._4_4_ = iVar31;
    auVar14._0_4_ = iVar30;
    auVar14._8_4_ = iVar32;
    auVar14._12_4_ = iVar33;
    auVar26 = NEON_sha256h(auVar24,auVar27,auVar14,4);
    auVar15._4_4_ = iVar31;
    auVar15._0_4_ = iVar30;
    auVar15._8_4_ = iVar32;
    auVar15._12_4_ = iVar33;
    auVar25 = NEON_sha256h2(auVar27,auVar24,auVar15,4);
    auVar22._4_4_ = iVar35;
    auVar22._0_4_ = iVar34;
    auVar22._8_4_ = iVar36;
    auVar22._12_4_ = iVar37;
    auVar27 = NEON_sha256h(auVar26,auVar25,auVar22,4);
    auVar23._4_4_ = iVar35;
    auVar23._0_4_ = iVar34;
    auVar23._8_4_ = iVar36;
    auVar23._12_4_ = iVar37;
    auVar25 = NEON_sha256h2(auVar25,auVar26,auVar23,4);
    param_3 = param_3 + -1;
    uVar50 = auVar27._8_8_;
    uVar45 = auVar27._0_8_;
    uVar43 = auVar25._8_8_;
    uVar39 = auVar25._0_8_;
    param_2 = param_2 + 4;
  } while (param_3 != 0);
  *(ulong *)(*param_1 + 8) = CONCAT44(auVar27._12_4_ + auVar46._12_4_,auVar27._8_4_ + auVar46._8_4_)
  ;
  *(ulong *)*param_1 = CONCAT44(auVar27._4_4_ + iVar49,auVar27._0_4_ + iVar44);
  *(ulong *)(param_1[1] + 8) =
       CONCAT44(auVar25._12_4_ + auVar40._12_4_,auVar25._8_4_ + auVar40._8_4_);
  *(ulong *)param_1[1] = CONCAT44(auVar25._4_4_ + iVar42,auVar25._0_4_ + iVar38);
  return;
}



// ===== FUN_7100767ed0 @ 7100767ed0 (size=40) =====

void FUN_7100767ed0(undefined8 *param_1)

{
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *param_1 = 0xbb67ae856a09e667;
  param_1[1] = 0xa54ff53a3c6ef372;
  param_1[3] = 0x5be0cd191f83d9ab;
  param_1[2] = 0x9b05688c510e527f;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}



// ===== FUN_7100767f00 @ 7100767f00 (size=244) =====

void FUN_7100767f00(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 0x68);
  *(ulong *)(param_1 + 0x60) =
       *(long *)(param_1 + 0x60) + (lVar1 + param_3 & 0xffffffffffffffc0) * 8;
  if (lVar1 != 0) {
    uVar2 = 0x40U - lVar1;
    if (param_3 < 0x40U - lVar1) {
      uVar2 = param_3;
    }
    FUN_710080f900(param_1 + lVar1 + 0x20);
    lVar1 = uVar2 + *(long *)(param_1 + 0x68);
    param_2 = param_2 + uVar2;
    param_3 = param_3 - uVar2;
    *(long *)(param_1 + 0x68) = lVar1;
    if (lVar1 == 0x40) {
      FUN_7100767cd0(param_1,param_1 + 0x20,1);
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
  }
  if (0x3f < param_3) {
    uVar2 = param_3 >> 6;
    FUN_7100767cd0(param_1,param_2,uVar2);
    param_3 = param_3 + uVar2 * -0x40;
    param_2 = param_2 + uVar2 * 0x40;
  }
  if (param_3 != 0) {
    FUN_710080f900(param_1 + 0x20,param_2,param_3);
    *(ulong *)(param_1 + 0x68) = param_3;
    return;
  }
  return;
}



// ===== FUN_7100768000 @ 7100768000 (size=236) =====

void FUN_7100768000(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x68);
    lVar4 = param_1 + 0x20;
    uVar1 = lVar2 + 1;
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + lVar2 * 8;
    *(ulong *)(param_1 + 0x68) = uVar1;
    *(undefined1 *)(param_1 + lVar2 + 0x20) = 0x80;
    if (uVar1 < 0x39) {
      FUN_7100808340(lVar4 + uVar1,0,0x38 - uVar1);
    }
    else {
      FUN_7100808340(lVar4 + uVar1,0,0x40 - uVar1);
      FUN_7100767cd0(param_1,lVar4,1);
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    uVar1 = (*(ulong *)(param_1 + 0x60) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_1 + 0x60) & 0xff00ff00ff00ff) << 8;
    uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
    *(ulong *)(param_1 + 0x58) = uVar1 >> 0x20 | uVar1 << 0x20;
    FUN_7100767cd0(param_1,lVar4,1);
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  lVar4 = 0;
  do {
    uVar3 = *(uint *)(param_1 + lVar4 * 4);
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    *(uint *)(param_2 + lVar4 * 4) = uVar3 >> 0x10 | uVar3 << 0x10;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 8);
  return;
}



// ===== FUN_71007680f0 @ 71007680f0 (size=64) =====

void FUN_71007680f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [120];
  
  FUN_7100767ed0(auStack_78);
  FUN_7100767f00(auStack_78,param_2,param_3);
  FUN_7100768000(auStack_78,param_1);
  return;
}



// ===== FUN_7100768140 @ 7100768140 (size=164) =====

void FUN_7100768140(void)

{
  int iVar1;
  
  iVar1 = FUN_7100771960(0xffffffff);
  if (iVar1 == 0) {
    iVar1 = FUN_7100771d30("Default",0x7100d18858);
    if (iVar1 == 0) {
      iVar1 = FUN_7100772030(0x7100d18858,0x7100d18848);
      if (iVar1 == 0) {
        iVar1 = FUN_71007723d0(0x7100d18848,2);
        if ((iVar1 == 0) && (iVar1 = FUN_7100768970(0x7100d187c8,0x7100d18848), iVar1 == 0)) {
          FUN_71007689b0(0x7100d187c8,0x500,0x2d0);
          return;
        }
        FUN_7100771f30(0x7100d18848);
      }
      FUN_7100771e40(0x7100d18858);
    }
    FUN_7100771cd0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_71007697d0(0x2559);
}



// ===== FUN_71007681f0 @ 71007681f0 (size=52) =====

void FUN_71007681f0(void)

{
  FUN_71007687f0(0x7100d187c8);
  FUN_7100771f30(0x7100d18848);
  FUN_7100771e40(0x7100d18858);
  FUN_7100771cd0();
  return;
}



// ===== FUN_7100768254 @ 7100768254 (size=96) =====

undefined8 FUN_7100768254(undefined8 param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = *(int *)(*param_2 + 0x48) + 7U & 0xfffffff8;
  lVar2 = thunk_FUN_710081c1c0(uVar1 * (int)param_2[7]);
  param_2[6] = lVar2;
  if (lVar2 == 0) {
    uVar3 = 0x559;
  }
  else {
    FUN_7100808340(lVar2,0,uVar1 * (int)param_2[7]);
    uVar3 = 0;
  }
  return uVar3;
}



// ===== FUN_71007685b0 @ 71007685b0 (size=124) =====

long FUN_71007685b0(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  int local_4;
  
  if ((*(byte *)((long)param_1 + 0x4c) & 1) == 0) {
    return 0;
  }
  iVar1 = FUN_7100768bc0(*param_1,&local_4,0);
  if (iVar1 == 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(param_1 + 7);
    }
    if (param_1[6] != 0) {
      return param_1[6];
    }
    return param_1[5] + (ulong)(uint)(*(int *)(param_1 + 9) * local_4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_71007697d0(0x2b59);
}



// ===== FUN_71007687c0 @ 71007687c0 (size=36) =====

bool FUN_71007687c0(int *param_1)

{
  if (param_1 != (int *)0x0) {
    return *param_1 == 0x6e69574e;
  }
  return false;
}



// ===== FUN_71007687f0 @ 71007687f0 (size=124) =====

void FUN_71007687f0(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_71007687c0();
  if ((uVar2 & 1) != 0) {
    if (((*(byte *)((long)param_1 + 0x7c) & 1) != 0) &&
       (iVar1 = FUN_7100773a60(param_1 + 1,2), iVar1 == 0)) {
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0xffffffff;
      param_1[9] = 0;
      *(undefined4 *)(param_1 + 10) = 0;
      *(undefined1 *)((long)param_1 + 0x7c) = 0;
    }
    FUN_7100749610(param_1 + 4);
    FUN_7100773470(param_1 + 1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  return;
}



// ===== FUN_7100768870 @ 7100768870 (size=248) =====

int FUN_7100768870(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  undefined8 local_10;
  uint local_4;
  
  *(undefined8 *)(param_1 + 0x19) = 0;
  *(undefined8 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 0xd) = 0;
  *(undefined8 *)(param_1 + 0xf) = 0;
  *(undefined8 *)(param_1 + 0x11) = 0;
  *(undefined8 *)(param_1 + 0x13) = 0;
  *(undefined8 *)(param_1 + 0x15) = 0;
  *(undefined8 *)(param_1 + 0x17) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  param_1[0x1e] = 1;
  *param_1 = 0x6e69574e;
  *(undefined1 *)((long)param_1 + 0x7d) = param_4;
  param_1[0x10] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  FUN_7100772e30(param_1 + 2,param_3);
  iVar1 = FUN_71007733d0(param_1 + 2,param_2);
  if (iVar1 == 0) {
    FUN_71007734d0(param_1 + 2,0xf,param_1 + 8);
    iVar1 = FUN_7100773990(param_1 + 2,2,*(undefined1 *)((long)param_1 + 0x7d),&local_10);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x1f) = 1;
      *(undefined8 *)(param_1 + 0x1c) = local_10;
      *(bool *)((long)param_1 + 0x7e) = 1 < local_4;
      return 0;
    }
  }
  FUN_71007687f0(param_1);
  return iVar1;
}



// ===== FUN_7100768970 @ 7100768970 (size=56) =====

void FUN_7100768970(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100771d20();
  FUN_7100768870(param_1,uVar1,*(undefined4 *)(param_2 + 8),0);
  return;
}



// ===== FUN_71007689b0 @ 71007689b0 (size=132) =====

undefined8 FUN_71007689b0(long param_1,undefined4 param_2,undefined4 param_3)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_71007687c0();
  if ((uVar1 & 1) == 0) {
    return 0x1159;
  }
  if (*(int *)(param_1 + 0x44) == 0) {
    if (*(int *)(param_1 + 0x48) == 0) goto LAB_71007689e8;
    lVar2 = *(long *)(param_1 + 0x30);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x30);
  }
  if (lVar2 != 0) {
    return 0xf59;
  }
LAB_71007689e8:
  *(undefined4 *)(param_1 + 0x44) = param_2;
  *(undefined4 *)(param_1 + 0x48) = param_3;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  return 0;
}



// ===== FUN_7100768bc0 @ 7100768bc0 (size=460) =====

uint FUN_7100768bc0(long param_1,uint *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined4 local_8;
  
  if (param_1 == 0) {
    return 0x1759;
  }
  uVar3 = FUN_71007687c0();
  if ((uVar3 & 1) == 0) {
    return 0x1159;
  }
  FUN_7100749670();
  if ((*(long *)(param_1 + 0x30) == 0) || (-1 < *(int *)(param_1 + 0x40))) {
    FUN_7100749740(param_1 + 0x2c);
    return 0x2b59;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar1 = FUN_7100773700(param_1 + 8,0,*(undefined4 *)(param_1 + 0x44),
                           *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                           *(undefined4 *)(param_1 + 0x50),&local_2c,&local_28);
  }
  else {
    do {
      FUN_71007495a0(param_1 + 0x20,0xffffffffffffffff);
      uVar1 = FUN_7100773700(param_1 + 8,1,*(undefined4 *)(param_1 + 0x44),
                             *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                             *(undefined4 *)(param_1 + 0x50),&local_2c,&local_28);
    } while ((uVar1 & 0x3fffff) == 0x1d5d);
  }
  uVar2 = uVar1;
  if (uVar1 == 0) {
    if ((*(ulong *)(param_1 + 0x38) >> ((ulong)local_2c & 0x3f) & 1) == 0) {
      uVar2 = FUN_7100773630(param_1 + 8,(ulong)local_2c,0);
      if (uVar2 != 0) {
        FUN_7100773900(param_1 + 8,(ulong)local_2c,&local_28);
        goto LAB_7100768c98;
      }
      *(ulong *)(param_1 + 0x38) = *(ulong *)(param_1 + 0x38) | 1L << ((ulong)local_2c & 0x3f);
    }
    *(uint *)(param_1 + 0x40) = local_2c;
    if (param_2 != (uint *)0x0) {
      *param_2 = local_2c;
    }
    if (param_3 == (undefined8 *)0x0) {
      FUN_71007728b0(&local_28,0xffffffff);
      uVar2 = uVar1;
    }
    else {
      *(undefined4 *)(param_3 + 4) = local_8;
      *param_3 = local_28;
      param_3[1] = uStack_20;
      param_3[3] = uStack_10;
      param_3[2] = uStack_18;
      uVar2 = uVar1;
    }
  }
LAB_7100768c98:
  FUN_7100749740(param_1 + 0x2c);
  return uVar2;
}



// ===== FUN_7100768f80 @ 7100768f80 (size=180) =====

void FUN_7100768f80(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_7100769b90();
  uVar2 = 0x8000d;
  if ((uVar1 < 0x80000) && (uVar2 = 0x6000b, uVar1 < 0x60000)) {
    if (0x4ffff < uVar1) {
      *param_1 = 0x50009;
      return;
    }
    if (uVar1 < 0x40000) {
      if (uVar1 < 0x30000) {
        uVar2 = 0x10006;
        if (uVar1 < 0x20000) {
          uVar2 = 5;
        }
      }
      else {
        uVar2 = 0x30007;
      }
    }
    else {
      uVar2 = 0x40008;
    }
  }
  *param_1 = uVar2;
  return;
}



// ===== FUN_7100769040 @ 7100769040 (size=188) =====

undefined8 FUN_7100769040(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  FUN_7100808340(param_1,0,0x4f0);
  *(undefined4 *)(param_1 + 1000) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3ec) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3f0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3f4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3f8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3fc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x400) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x404) = 0xffffffff;
  FUN_7100768f80(param_1 + 0x4ec);
  iVar1 = 5000;
  if (*(uint *)(param_1 + 0x4ec) < 0x8000d) {
    iVar1 = 1000;
  }
  *(undefined8 *)(param_1 + 0x410) = 0x1000;
  if (param_2 < 1 || iVar1 < param_2) {
    param_2 = *(int *)(param_1 + 0x418);
    if (param_2 == 0) goto LAB_71007690bc;
  }
  else {
    *(int *)(param_1 + 0x418) = param_2;
  }
  *(ulong *)(param_1 + 0x410) = (long)param_2 * 100 + 0x17e7U & 0xfffffffffffff000;
LAB_71007690bc:
  lVar2 = FUN_71007697a0(0x1000);
  *(long *)(param_1 + 0x408) = lVar2;
  uVar3 = 0x559;
  if (lVar2 != 0) {
    FUN_7100808340(lVar2,0,*(undefined8 *)(param_1 + 0x410));
    uVar3 = 0;
  }
  return uVar3;
}



// ===== FUN_7100769100 @ 7100769100 (size=48) =====

void FUN_7100769100(long param_1)

{
  thunk_FUN_710081c200(*(undefined8 *)(param_1 + 0x408));
  FUN_7100808340(param_1,0,0x4f0);
  return;
}



// ===== FUN_7100769130 @ 7100769130 (size=104) =====

void FUN_7100769130(undefined4 *param_1)

{
  FUN_7100808340(param_1,0,1000);
  param_1[0xfa] = 0xffffffff;
  param_1[0xfb] = 0xffffffff;
  param_1[0xfc] = 0xffffffff;
  param_1[0xfd] = 0xffffffff;
  param_1[0xfe] = 0xffffffff;
  param_1[0xff] = 0xffffffff;
  param_1[0x100] = 0xffffffff;
  param_1[0x101] = 0xffffffff;
  *param_1 = 2;
  param_1[8] = 1;
  if ((uint)param_1[0x13b] < 0x50009) {
    param_1[0xee] = 1;
  }
  *(undefined2 *)(param_1 + 0xef) = 1;
  *(undefined1 *)((long)param_1 + 0x3be) = 1;
  return;
}



// ===== FUN_71007691a0 @ 71007691a0 (size=20) =====

void FUN_71007691a0(long param_1,long param_2)

{
  if (param_2 == 0) {
    return;
  }
  *(undefined2 *)(param_1 + 0x16) = 0;
  FUN_710076ce60((undefined2 *)(param_1 + 0x16),param_2,1);
  return;
}



// ===== FUN_71007691c0 @ 71007691c0 (size=60) =====

void FUN_71007691c0(long param_1,long param_2)

{
  long lVar1;
  
  if (param_2 == 0) {
    return;
  }
  *(undefined2 *)(param_1 + 0x24) = 0;
  lVar1 = FUN_710076ce60(param_1 + 0x24,param_2,0x40);
  if (-1 < lVar1) {
    *(undefined2 *)(param_1 + 0x24 + lVar1 * 2) = 0;
  }
  return;
}



// ===== FUN_7100769200 @ 7100769200 (size=60) =====

void FUN_7100769200(long param_1,long param_2)

{
  long lVar1;
  
  if (param_2 == 0) {
    return;
  }
  *(undefined2 *)(param_1 + 0x1a8) = 0;
  lVar1 = FUN_710076ce60(param_1 + 0x1a8,param_2,0x100);
  if (-1 < lVar1) {
    *(undefined2 *)(param_1 + 0x1a8 + lVar1 * 2) = 0;
  }
  return;
}



// ===== FUN_7100769240 @ 7100769240 (size=96) =====

void FUN_7100769240(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  lVar1 = *(long *)(param_1 + 0x408);
  if ((lVar1 != 0) && (param_2 != 0)) {
    *(undefined2 *)(lVar1 + 0x14) = 0;
    lVar2 = FUN_710076ce60(lVar1 + 0x14,param_2,0xf9);
    if ((-1 < lVar2) && (*(undefined2 *)(lVar1 + 0x14 + lVar2 * 2) = 0, lVar2 != 0)) {
      *(undefined4 *)(param_1 + 0x3c0) = 0x14;
      *(int *)(param_1 + 0x3c4) = (int)lVar2;
    }
    return;
  }
  return;
}



// ===== FUN_71007692a0 @ 71007692a0 (size=1260) =====

int FUN_71007692a0(long param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined2 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined4 local_5ac;
  ulong local_5a8;
  undefined1 auStack_5a0 [32];
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined1 auStack_510 [64];
  undefined1 auStack_4d0 [984];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_9;
  
  if (param_2 == (undefined1 *)0x0 || param_3 == 0) {
    return 0x1759;
  }
  local_580 = 0;
  uStack_578 = 0;
  uStack_570 = 0;
  uStack_568 = 0;
  local_560 = 0;
  uStack_558 = 0;
  local_550 = 0;
  local_548 = 0;
  uStack_540 = 0;
  uStack_538 = 0;
  uStack_530 = 0;
  local_528 = 0;
  uStack_520 = 0;
  local_518 = 0;
  puVar3 = (undefined2 *)thunk_FUN_710081c1c0(0x7d6);
  if (puVar3 == (undefined2 *)0x0) {
    return 0x559;
  }
  FUN_7100808340(puVar3,0,0x7d6);
  iVar1 = FUN_710074d0c0(auStack_510,0x11,0);
  if (iVar1 != 0) goto LAB_7100769568;
  FUN_7100774130(auStack_5a0,*(undefined4 *)(param_1 + 0x4ec));
  iVar1 = FUN_71007741e0(auStack_5a0,auStack_510);
  if (iVar1 == 0) {
    uVar2 = *(uint *)(param_1 + 0x4ec);
    if (uVar2 < 0x6000b) {
      if (uVar2 < 0x30007) {
        iVar1 = FUN_7100774230(auStack_510,param_1,1000);
      }
      else {
        iVar1 = FUN_7100774230(auStack_510,param_1,0x408);
      }
    }
    else {
      FUN_7100808340(auStack_4d0,0,0x4d0);
      FUN_710080f900(auStack_4d0,param_1,0x3d4);
      uStack_f0 = *(undefined8 *)(param_1 + 0x3f0);
      local_f8 = *(undefined8 *)(param_1 + 1000);
      local_e8 = *(undefined8 *)(param_1 + 0x3f8);
      uStack_e0 = *(undefined8 *)(param_1 + 0x400);
      uStack_d0 = *(undefined8 *)(param_1 + 0x430);
      local_d8 = *(undefined8 *)(param_1 + 0x428);
      uStack_c0 = *(undefined8 *)(param_1 + 0x440);
      local_c8 = *(undefined8 *)(param_1 + 0x438);
      uStack_b0 = *(undefined8 *)(param_1 + 0x450);
      local_b8 = *(undefined8 *)(param_1 + 0x448);
      uStack_a0 = *(undefined8 *)(param_1 + 0x460);
      local_a8 = *(undefined8 *)(param_1 + 0x458);
      uStack_90 = *(undefined8 *)(param_1 + 0x470);
      local_98 = *(undefined8 *)(param_1 + 0x468);
      local_88 = *(undefined8 *)(param_1 + 0x478);
      uStack_80 = *(undefined8 *)(param_1 + 0x480);
      uStack_70 = *(undefined8 *)(param_1 + 0x490);
      local_78 = *(undefined8 *)(param_1 + 0x488);
      uStack_60 = *(undefined8 *)(param_1 + 0x4a0);
      local_68 = *(undefined8 *)(param_1 + 0x498);
      uStack_50 = *(undefined8 *)(param_1 + 0x4b0);
      local_58 = *(undefined8 *)(param_1 + 0x4a8);
      uStack_40 = *(undefined8 *)(param_1 + 0x4c0);
      local_48 = *(undefined8 *)(param_1 + 0x4b8);
      uStack_30 = *(undefined8 *)(param_1 + 0x4d0);
      local_38 = *(undefined8 *)(param_1 + 0x4c8);
      local_28 = *(undefined8 *)(param_1 + 0x4d8);
      uStack_20 = *(undefined8 *)(param_1 + 0x4e0);
      local_18 = (undefined1)*(undefined2 *)(param_1 + 0x4e8);
      if (0x8000c < uVar2) {
        local_17 = *(undefined1 *)(param_1 + 0x4ea);
        local_9 = *(undefined1 *)(param_1 + 0x4eb);
      }
      iVar1 = FUN_7100774230(auStack_510,auStack_4d0,0x4d0);
    }
    if (((((iVar1 == 0) &&
          (iVar1 = FUN_710074d520(&local_580,*(undefined8 *)(param_1 + 0x408),
                                  *(undefined8 *)(param_1 + 0x410),1), iVar1 == 0)) &&
         (iVar1 = FUN_710074d760(auStack_510,&local_580), iVar1 == 0)) &&
        (((*(uint *)(param_1 + 0x4ec) < 0x6000b || (*(int *)(param_1 + 0x424) == 0)) ||
         ((*(short *)(param_1 + 0x4e8) == 0 ||
          ((iVar1 = FUN_710074d630(&local_548,*(undefined8 *)(param_1 + 0x41c),
                                   *(int *)(param_1 + 0x424)), iVar1 == 0 &&
           (iVar1 = FUN_710074d760(auStack_510,&local_548), iVar1 == 0)))))))) &&
       (iVar1 = FUN_710074d220(auStack_510), iVar1 == 0)) {
LAB_710076940c:
      do {
        uVar4 = FUN_710074d3d0(auStack_510);
        if ((uVar4 & 1) == 0) goto LAB_710076952c;
        local_5ac = 0;
        local_5a8 = 0;
        iVar1 = FUN_710074d490(auStack_510,auStack_4d0);
        if (iVar1 == 0) {
          iVar1 = FUN_710074d930(auStack_4d0,0,&local_5a8,8);
          if (iVar1 == 0) {
            if (0x7d4 < local_5a8) {
              local_5a8 = 0x7d4;
            }
            iVar1 = FUN_710074d930(auStack_4d0,8,puVar3);
            FUN_710074d6d0(auStack_4d0);
            if (iVar1 != 0) goto LAB_710076940c;
            if ((*(char *)(param_1 + 0x3d0) != '\0') && (*(long *)(param_1 + 0x3e0) != 0)) {
              *param_2 = 0;
              lVar5 = FUN_710076cd20(param_2,puVar3);
              if (-1 < lVar5) {
                param_2[lVar5] = 0;
              }
              local_5ac = (**(code **)(param_1 + 0x3e0))(param_2,param_3 + -1);
              *puVar3 = 0;
              lVar5 = FUN_710076ce60(puVar3,param_2,1000);
              if (-1 < lVar5) {
                puVar3[lVar5] = 0;
              }
            }
            iVar1 = FUN_710074d4f0(auStack_4d0,0x7d8);
            if (iVar1 != 0) goto LAB_710076940c;
            iVar1 = FUN_710074d910(auStack_4d0,0,&local_5ac,4);
            if ((iVar1 == 0) && (iVar1 = FUN_710074d910(auStack_4d0,4,puVar3,0x7d4), iVar1 == 0)) {
              FUN_710074d7c0(auStack_510,auStack_4d0);
              goto LAB_710076940c;
            }
          }
          FUN_710074d6d0(auStack_4d0);
        }
      } while( true );
    }
  }
LAB_7100769550:
  FUN_710074d170(auStack_510);
  FUN_710074d820(&local_580);
  FUN_710074d820(&local_548);
LAB_7100769568:
  thunk_FUN_710081c200(puVar3);
  return iVar1;
LAB_710076952c:
  FUN_710074d2c0(auStack_510);
  uVar2 = FUN_710074d350(auStack_510);
  if (uVar2 < 3) {
    if (uVar2 != 0) {
LAB_7100769548:
      iVar1 = 0x5d59;
      goto LAB_7100769550;
    }
  }
  else if (uVar2 == 10) goto LAB_7100769548;
  FUN_7100808340(param_2,0,param_3);
  local_5a8 = local_5a8 & 0xffffffff00000000;
  iVar1 = FUN_710074d460(auStack_510,auStack_4d0);
  if (iVar1 == 0) {
    iVar1 = FUN_710074d930(auStack_4d0,0,&local_5a8,4);
    if (iVar1 == 0) {
      if ((int)local_5a8 == 0) {
        iVar1 = FUN_710074d930(auStack_4d0,4,puVar3,0x7d4);
        if (iVar1 == 0) {
          *param_2 = 0;
          lVar5 = FUN_710076cd20(param_2,puVar3,param_3 + -1);
          if (-1 < lVar5) {
            param_2[lVar5] = 0;
          }
        }
      }
      else {
        iVar1 = 0x5d59;
      }
    }
    FUN_710074d6d0(auStack_4d0);
  }
  goto LAB_7100769550;
}



// ===== thunk_FUN_710081c1c0 @ 7100769790 (size=4) =====

void thunk_FUN_710081c1c0(ulong param_1)

{
  undefined8 uVar1;
  
  if (0x1f < param_1) {
    uVar1 = FUN_7100834b00();
    FUN_7100828340(uVar1,0x20,param_1);
    return;
  }
  uVar1 = FUN_7100834b00();
  FUN_7100814ca0(uVar1,param_1);
  return;
}



// ===== FUN_71007697a0 @ 71007697a0 (size=20) =====

void FUN_71007697a0(long param_1,long param_2)

{
  FUN_710080ee20(param_1,-param_1 & param_1 + -1 + param_2);
  return;
}



// ===== thunk_FUN_710081c200 @ 71007697c0 (size=4) =====

void thunk_FUN_710081c200(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_7100816da0(uVar1,param_1);
  return;
}



// ===== FUN_71007697d0 @ 71007697d0 (size=32) =====

void FUN_71007697d0(undefined4 param_1)

{
  code *pcVar1;
  undefined4 local_4;
  
  local_4 = param_1;
  FUN_710076d0c8(0,&local_4,4);
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x71007697ec);
  (*pcVar1)();
}



// ===== FUN_71007697f0 @ 71007697f0 (size=524) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71007697f0(int *param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1 == (int *)0x0) {
    DAT_7100d18930 = 1;
    _DAT_7100d18918 = param_2;
    _DAT_7100d18910 = FUN_710076cff8;
    _DAT_7100d188e0 = 0xffffffffffffffff;
    _DAT_7100d188e8 = 0xffffffffffffffff;
    _DAT_7100d188f0 = 0xffffffffffffffff;
    return;
  }
  iVar3 = *param_1;
  _DAT_7100d18910 = (code *)param_3;
  if (iVar3 != 0) {
LAB_7100769858:
    do {
      piVar4 = param_1;
      switch(iVar3) {
      case 1:
        _DAT_7100d18918 = (undefined4)*(undefined8 *)(piVar4 + 2);
        break;
      case 2:
        _DAT_7100d188d0 = *(undefined8 *)(piVar4 + 2);
        _DAT_7100d188c8 = *(undefined8 *)(piVar4 + 4);
        break;
      case 3:
        _DAT_7100d18908 = *(undefined8 *)(piVar4 + 2);
        _DAT_7100d18900 = *(undefined8 *)(piVar4 + 4);
        break;
      case 4:
        FUN_710075e210(*(undefined8 *)(piVar4 + 2),piVar4[4]);
        break;
      case 5:
        _DAT_7100d188f8 = *(undefined8 *)(piVar4 + 4);
        break;
      case 6:
        _DAT_7100d188e0 = *(undefined8 *)(piVar4 + 2);
        _DAT_7100d188e8 = *(undefined8 *)(piVar4 + 4);
        break;
      case 7:
        DAT_7100af387c = (int)*(undefined8 *)(piVar4 + 2);
        if (((uint)(DAT_7100af387c == 4) & (uint)*(undefined8 *)(piVar4 + 4)) != 0) {
          DAT_7100af387c = 0;
        }
        break;
      default:
        if ((piVar4[1] & 1U) != 0) {
          FUN_71000000e0((iVar3 + 100U & 0x1fff) << 9 | 0x15a,_DAT_7100d18910);
                    /* WARNING: Does not return */
          pcVar2 = (code *)UndefinedInstructionException(0,0x71007699f8);
          (*pcVar2)();
        }
        break;
      case 10:
        _DAT_7100d188d8 = (undefined4)*(undefined8 *)(piVar4 + 2);
        break;
      case 0xb:
        _DAT_7100d188c4 = (undefined4)*(undefined8 *)(piVar4 + 2);
        break;
      case 0xe:
        _DAT_7100d188b0 = *(undefined8 *)(piVar4 + 2);
        uRam0000007100d188b8 = *(undefined8 *)(piVar4 + 4);
        DAT_7100d188c0 = 1;
        break;
      case 0xf:
        _DAT_7100d188a8 = *(undefined8 *)(piVar4 + 2);
        break;
      case 0x10:
        uVar1 = (uint)*(undefined8 *)(piVar4 + 2);
        if (*(long *)(piVar4 + 4) == 0x41544d4f53504852) {
          uVar1 = (uint)*(undefined8 *)(piVar4 + 2) | 0x80000000;
        }
        FUN_7100769bb0(uVar1);
        break;
      case 0x11:
        goto switchD_7100769870_caseD_11;
      }
      iVar3 = piVar4[6];
      param_1 = piVar4 + 6;
    } while (iVar3 != 0);
    goto LAB_7100769888;
  }
LAB_710076988c:
  _DAT_7100d18920 = *(long *)(param_1 + 4);
  if (*(long *)(param_1 + 4) != 0) {
    _DAT_7100d18928 = *(undefined8 *)(param_1 + 2);
  }
  return;
switchD_7100769870_caseD_11:
  _DAT_7100d188f0 = *(undefined8 *)(piVar4 + 2);
  iVar3 = piVar4[6];
  param_1 = piVar4 + 6;
  if (iVar3 == 0) goto LAB_7100769888;
  goto LAB_7100769858;
LAB_7100769888:
  param_1 = piVar4 + 6;
  goto LAB_710076988c;
}



// ===== FUN_7100769a00 @ 7100769a00 (size=32) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100769a00(void)

{
  if (_DAT_7100d18918 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_71007697d0(0x1d59);
}



// ===== FUN_7100769a20 @ 7100769a20 (size=12) =====

undefined1 FUN_7100769a20(void)

{
  return DAT_7100d18930;
}



// ===== FUN_7100769a30 @ 7100769a30 (size=20) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_7100769a30(void)

{
  return _DAT_7100d18908 != 0;
}



// ===== FUN_7100769a50 @ 7100769a50 (size=12) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_7100769a50(void)

{
  return _DAT_7100d18908;
}



// ===== FUN_7100769a60 @ 7100769a60 (size=12) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_7100769a60(void)

{
  return _DAT_7100d18900;
}



// ===== FUN_7100769a70 @ 7100769a70 (size=20) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_7100769a70(void)

{
  return _DAT_7100d188f8 != 0;
}



// ===== FUN_7100769a90 @ 7100769a90 (size=12) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_7100769a90(void)

{
  return _DAT_7100d188f8;
}



// ===== FUN_7100769aa0 @ 7100769aa0 (size=44) =====

uint FUN_7100769aa0(ulong param_1)

{
  if ((uint)param_1 < 0xc0) {
    return (uint)(*(ulong *)(&DAT_7100d188e0 + (param_1 >> 6 & 0x3ffffff) * 8) >> (param_1 & 0x3f))
           & 1;
  }
  return 0;
}



// ===== FUN_7100769ad0 @ 7100769ad0 (size=12) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_7100769ad0(void)

{
  return _DAT_7100d18910;
}



// ===== FUN_7100769ae0 @ 7100769ae0 (size=12) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100769ae0(undefined8 param_1)

{
  _DAT_7100d18910 = param_1;
  return;
}



// ===== FUN_7100769b60 @ 7100769b60 (size=12) =====

undefined1 FUN_7100769b60(void)

{
  return DAT_7100d188c0;
}



// ===== FUN_7100769b70 @ 7100769b70 (size=16) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100769b70(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = uRam0000007100d188b8;
  *param_1 = _DAT_7100d188b0;
  param_1[1] = uVar1;
  return;
}



// ===== FUN_7100769b80 @ 7100769b80 (size=12) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_7100769b80(void)

{
  return _DAT_7100d188a8;
}



// ===== FUN_7100769b90 @ 7100769b90 (size=20) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_7100769b90(void)

{
  return (uint)_DAT_7100d18934 & 0x7fffffff;
}



// ===== FUN_7100769bb0 @ 7100769bb0 (size=16) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100769bb0(undefined4 param_1)

{
  _DAT_7100d18934 = param_1;
  return;
}



// ===== FUN_7100769bc0 @ 7100769bc0 (size=288) =====

ulong FUN_7100769bc0(char *param_1,undefined8 *param_2)

{
  char *pcVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  uint local_c;
  undefined8 local_8;
  
  local_c = 0;
  local_8 = 0;
  if (param_1 == (char *)0x0 || param_2 == (undefined8 *)0x0) {
    return 0x1759;
  }
  *param_2 = 0;
  uVar3 = FUN_710075d260();
  if ((int)uVar3 == 0) {
    uVar2 = thunk_FUN_710075d530(&local_8);
    if ((uVar2 != 0) || (uVar2 = FUN_710075d750(local_8,&local_c), uVar2 != 0)) {
      FUN_710075d300();
      return (ulong)uVar2;
    }
    if (0x11 < local_c) {
      local_c = 1;
    }
    FUN_710075d300();
    uVar3 = 0;
    lVar4 = (ulong)*(uint *)(&UNK_71009c5930 + (ulong)local_c * 4) * 0x300;
    if ((param_1[lVar4] == '\0') && (param_1[lVar4 + 0x200] == '\0')) {
      pcVar1 = param_1;
      do {
        pcVar5 = pcVar1;
        if ((*pcVar5 != '\0') || (pcVar5[0x200] != '\0')) break;
        pcVar1 = pcVar5 + 0x300;
      } while (pcVar5 + 0x300 != param_1 + 0x3000);
    }
    else {
      pcVar5 = param_1 + (ulong)*(uint *)(&UNK_71009c5930 + (ulong)local_c * 4) * 0x300;
    }
    if ((*pcVar5 != '\0') || (pcVar5[0x200] != '\0')) {
      *param_2 = pcVar5;
      return uVar3;
    }
  }
  return uVar3;
}



// ===== FUN_7100769ce0 @ 7100769ce0 (size=156) =====

void FUN_7100769ce0(uint param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint auStack_30 [12];
  
  if (7 < param_1 - 1) {
                    /* WARNING: Subroutine does not return */
    FUN_71007697d0(0x1759);
  }
  puVar2 = auStack_30;
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    *puVar2 = uVar3;
    uVar4 = uVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (param_1 != uVar4);
  if ((param_2 & 0x102) != 0) {
    auStack_30[uVar4] = 0x20;
    uVar4 = uVar3 + 2;
  }
  FUN_7100756060();
  iVar1 = FUN_7100756670(auStack_30,uVar4);
  if ((iVar1 == 0) && (iVar1 = FUN_7100756660(param_2), iVar1 == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_71007697d0();
}



// ===== FUN_710076a050 @ 710076a050 (size=604) =====

undefined8 * FUN_710076a050(long param_1)

{
  short *psVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  uint *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  short *psVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auVar17 [12];
  
  lVar6 = FUN_710081ce00();
  lVar16 = lVar6 + 1;
  uVar3 = *(uint *)(param_1 + lVar16);
  psVar1 = (short *)(param_1 + lVar16 + 4);
  uVar4 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar14 = (ulong)(uVar4 >> 0x10 | uVar4 << 0x10);
  psVar12 = psVar1;
  if (uVar3 == 0) {
    lVar7 = 0;
    if (*psVar1 != 0x200 || *(short *)(param_1 + lVar16 + 6) != 0x400) goto LAB_710076a17c;
  }
  else {
    uVar13 = 0;
    do {
      uVar13 = uVar13 + 1;
      lVar7 = FUN_710081ce00(psVar12);
      psVar12 = (short *)((long)psVar12 + lVar7 + 1);
    } while (uVar14 != uVar13);
    lVar7 = (long)psVar12 - (long)psVar1;
    if (*psVar12 != 0x200 || psVar12[1] != 0x400) {
LAB_710076a17c:
      auVar17 = FUN_710076d158(0x400,4);
      *(int *)(auVar17._0_8_ + 0x2e7f4) = auVar17._8_4_;
      puVar11 = (undefined4 *)FUN_710080e8e0();
      *puVar11 = 0x16;
      return (undefined8 *)0x0;
    }
  }
  uVar3 = (*(uint *)(psVar12 + 2) & 0xff00ff00) >> 8 | (*(uint *)(psVar12 + 2) & 0xff00ff) << 8;
  uVar13 = (ulong)(uVar3 >> 0x10 | uVar3 << 0x10);
  puVar8 = (undefined8 *)
           thunk_FUN_710081c1c0(lVar6 + 0x21 + (uVar14 + 2) * 8 + uVar13 * 0xc + lVar7);
  if (puVar8 == (undefined8 *)0x0) {
    auVar17 = FUN_710076d158(0,0xffffffff);
    *(int *)(auVar17._0_8_ + 0x2e7f4) = auVar17._8_4_;
    puVar11 = (undefined4 *)FUN_710080e8e0();
    *puVar11 = 0xc;
    return (undefined8 *)0x0;
  }
  puVar5 = puVar8 + 4;
  if (lVar16 == 1) {
    *puVar8 = 0;
    puVar8[1] = puVar5;
    puVar8[2] = 0x400000002;
    puVar10 = puVar5 + uVar14 + 1;
    puVar8[3] = puVar10;
  }
  else {
    *puVar8 = puVar5;
    puVar2 = (undefined8 *)((long)puVar5 + lVar16);
    FUN_710080f900(puVar5,param_1,lVar16);
    puVar8[1] = puVar2;
    puVar8[2] = 0x400000002;
    puVar10 = puVar2 + uVar14 + 1;
    puVar8[3] = puVar10;
    puVar5 = puVar2;
  }
  if (uVar14 == 0) {
    *puVar5 = 0;
  }
  else {
    puVar10 = puVar10 + uVar13 + 1;
    uVar15 = 0;
    FUN_710080f900(puVar10,psVar1,lVar7);
    lVar16 = puVar8[1];
    do {
      *(undefined8 **)(lVar16 + uVar15 * 8) = puVar10;
      uVar15 = uVar15 + 1;
      lVar6 = FUN_710081ce00(puVar10);
      puVar10 = (undefined8 *)((long)puVar10 + lVar6 + 1);
    } while (uVar14 != uVar15);
    puVar10 = (undefined8 *)puVar8[3];
    *(undefined8 *)(lVar16 + uVar14 * 8) = 0;
  }
  if (uVar13 != 0) {
    puVar9 = (uint *)FUN_710080f900(puVar10 + lVar7 + 1 + uVar13,psVar12 + 4,uVar13 * 4);
    puVar10 = (undefined8 *)puVar8[3];
    uVar14 = 0;
    do {
      puVar10[uVar14] = puVar9;
      uVar14 = uVar14 + 1;
      uVar3 = (*puVar9 & 0xff00ff00) >> 8 | (*puVar9 & 0xff00ff) << 8;
      *puVar9 = uVar3 >> 0x10 | uVar3 << 0x10;
      puVar9 = puVar9 + 1;
    } while (uVar13 != uVar14);
  }
  puVar10[uVar13] = 0;
  return puVar8;
}



// ===== FUN_710076a2b0 @ 710076a2b0 (size=56) =====

void FUN_710076a2b0(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    return;
  }
  do {
    lVar1 = *(long *)(param_1 + 0x28);
    thunk_FUN_710081c200(param_1);
    param_1 = lVar1;
  } while (lVar1 != 0);
  return;
}



// ===== FUN_710076a2f0 @ 710076a2f0 (size=384) =====

undefined8 FUN_710076a2f0(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined1 auVar8 [12];
  
  if (param_1 == 0) {
    auVar8 = FUN_710076d158(0,1);
    *(int *)(auVar8._0_8_ + 0x2e7f4) = auVar8._8_4_;
    puVar7 = (undefined4 *)FUN_710080e8e0();
    *puVar7 = 0x16;
    return 0;
  }
  lVar4 = thunk_FUN_710081c1c0(0x200);
  if (lVar4 == 0) {
    auVar8 = FUN_710076d158(0,0xffffffff);
    *(int *)(auVar8._0_8_ + 0x2e7f4) = auVar8._8_4_;
    puVar7 = (undefined4 *)FUN_710080e8e0();
    *puVar7 = 0xc;
    return 0;
  }
  lVar5 = FUN_710076d158();
  bVar2 = *(byte *)(lVar5 + 0x2e7e8);
  uVar1 = *(undefined4 *)(lVar5 + 0x2e7ec);
  uVar6 = FUN_710080e8e0();
  uVar3 = FUN_7100771140(uVar1,bVar2 ^ 1,param_1,(int *)(lVar5 + 0x2e7f4),uVar6,lVar4,0x200,0);
  *(uint *)(lVar5 + 0x2e7f0) = uVar3;
  *(undefined4 *)(lVar5 + 0x2e7ec) = 0;
  if (uVar3 == 0) {
    if (*(int *)(lVar5 + 0x2e7f4) == 0) {
      uVar6 = FUN_710076a050(lVar4);
      goto LAB_710076a3dc;
    }
  }
  else {
    if ((uVar3 & 0x1ff) == 0x15) {
      puVar7 = (undefined4 *)FUN_710080e8e0();
      *puVar7 = 0xb;
    }
    else if ((uVar3 & 0x1ff) == 1) {
      puVar7 = (undefined4 *)FUN_710080e8e0();
      *puVar7 = 0xe;
    }
    else {
      puVar7 = (undefined4 *)FUN_710080e8e0();
      *puVar7 = 0x20;
    }
    auVar8 = FUN_710076d158(puVar7,0xffffffff);
    *(int *)(auVar8._0_8_ + 0x2e7f4) = auVar8._8_4_;
  }
  uVar6 = 0;
LAB_710076a3dc:
  thunk_FUN_710081c200(lVar4);
  return uVar6;
}



// ===== FUN_710076a470 @ 710076a470 (size=1440) =====

ulong FUN_710076a470(long param_1,long param_2,undefined1 (*param_3) [16],undefined8 *param_4)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined8 uVar7;
  uint *puVar8;
  long lVar9;
  uint uVar10;
  undefined1 (*pauVar11) [16];
  uint *puVar12;
  ulong uVar13;
  uint *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined4 *puVar19;
  int *piVar20;
  undefined1 auVar21 [16];
  int iVar23;
  undefined1 auVar22 [16];
  undefined8 local_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  uint local_8;
  
  if (param_1 == 0 && param_2 == 0) {
    return 8;
  }
  if (param_4 == (undefined8 *)0x0) {
    puVar5 = (undefined4 *)FUN_710080e8e0();
    *puVar5 = 0x16;
    local_20 = 0xb;
  }
  else {
    if (param_3 == (undefined1 (*) [16])0x0) {
      uVar13 = 0;
      puVar5 = (undefined4 *)0x0;
    }
    else {
      lVar15 = 0;
      lVar17 = 0;
      lVar16 = 0;
      pauVar11 = param_3;
      do {
        uVar4 = *(uint *)pauVar11[1];
        lVar9 = 1;
        if (uVar4 == 0) {
          uVar4 = 4;
        }
        lVar16 = lVar16 + (ulong)uVar4;
        if (*(long *)(pauVar11[1] + 8) != 0) {
          lVar9 = FUN_710081ce00();
          lVar9 = lVar9 + 1;
        }
        pauVar11 = *(undefined1 (**) [16])(pauVar11[2] + 8);
        lVar17 = lVar17 + lVar9;
        lVar15 = lVar15 + 1;
      } while (pauVar11 != (undefined1 (*) [16])0x0);
      uVar13 = lVar15 * 0x18 + 4 + lVar16 + lVar17;
      if ((0x400 < uVar13) ||
         (puVar5 = (undefined4 *)thunk_FUN_710081c1c0(uVar13), puVar5 == (undefined4 *)0x0)) {
        puVar5 = (undefined4 *)FUN_710080e8e0();
        *puVar5 = 0xc;
        return 6;
      }
      puVar19 = puVar5;
LAB_710076a550:
      do {
        lVar15 = *(long *)param_3[2];
        if ((lVar15 == 0) || (*(uint *)param_3[1] == 0)) {
          lVar16 = 0x1c;
          uVar18 = 4;
        }
        else {
          uVar18 = (ulong)*(uint *)param_3[1];
          lVar16 = uVar18 + 0x18;
        }
        lVar9 = *(long *)(param_3[1] + 8);
        lVar17 = 1;
        if (lVar9 != 0) {
          lVar17 = FUN_710081ce00(lVar9);
          lVar17 = lVar17 + 1;
        }
        *puVar19 = 0xfecaefbe;
        auVar22 = *param_3;
        auVar21 = NEON_rev32(auVar22,1);
        *(long *)(puVar19 + 3) = auVar21._8_8_;
        *(long *)(puVar19 + 1) = auVar21._0_8_;
        if (lVar15 == 0) {
          puVar19[5] = 0;
LAB_710076a6e0:
          puVar19[6] = 0;
        }
        else {
          uVar4 = *(uint *)param_3[1];
          uVar3 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
          puVar19[5] = uVar3 >> 0x10 | uVar3 << 0x10;
          if (uVar4 == 0) goto LAB_710076a6e0;
          iVar23 = auVar22._4_4_;
          if (iVar23 == 2) {
            local_20 = 0;
            uStack_18 = 0;
            uStack_14 = 0;
            if (0x10 < uVar18) {
              uVar18 = 0x10;
            }
            FUN_710080f900(&local_20,lVar15,uVar18);
            local_20._0_4_ =
                 CONCAT22(local_20._2_2_ >> 8 | (ushort)((local_20._2_2_ & 0xff00ff) << 8),
                          (undefined2)local_20);
            uVar4 = (local_20._4_4_ & 0xff00ff00) >> 8 | (local_20._4_4_ & 0xff00ff) << 8;
            local_20 = CONCAT44(uVar4 >> 0x10 | uVar4 << 0x10,(int)local_20);
            *(ulong *)(puVar19 + 6) = local_20;
            *(ulong *)(puVar19 + 8) = CONCAT44(uStack_14,uStack_18);
            lVar9 = *(long *)(param_3[1] + 8);
          }
          else if (iVar23 == 0x1c) {
            if (0x1c < uVar18) {
              uVar18 = 0x1c;
            }
            local_20 = 0;
            uStack_18 = 0;
            uStack_14 = 0;
            local_10 = 0;
            uStack_c = 0;
            local_8 = 0;
            FUN_710080f900(&local_20,lVar15,uVar18);
            uVar4 = (local_20._4_4_ & 0xff00ff00) >> 8 | (local_20._4_4_ & 0xff00ff) << 8;
            local_20._0_4_ =
                 CONCAT22(local_20._2_2_ >> 8 | (ushort)((local_20._2_2_ & 0xff00ff) << 8),
                          (undefined2)local_20);
            uVar3 = (local_8 & 0xff00ff00) >> 8 | (local_8 & 0xff00ff) << 8;
            local_8 = uVar3 >> 0x10 | uVar3 << 0x10;
            local_20 = CONCAT44(uVar4 >> 0x10 | uVar4 << 0x10,(int)local_20);
            *(ulong *)(puVar19 + 8) = CONCAT44(uStack_14,uStack_18);
            *(ulong *)(puVar19 + 6) = local_20;
            *(ulong *)(puVar19 + 9) = CONCAT44(local_10,uStack_14);
            *(ulong *)(puVar19 + 0xb) = CONCAT44(local_8,uStack_c);
            lVar9 = *(long *)(param_3[1] + 8);
          }
          else {
            FUN_710080f900(puVar19 + 6,lVar15,uVar18);
            lVar9 = *(long *)(param_3[1] + 8);
          }
        }
        if (lVar9 != 0) {
          FUN_710080f900((long)puVar19 + lVar16,lVar9,lVar17);
          param_3 = *(undefined1 (**) [16])(param_3[2] + 8);
          puVar19 = (undefined4 *)((long)puVar19 + lVar17 + lVar16);
          if (param_3 == (undefined1 (*) [16])0x0) break;
          goto LAB_710076a550;
        }
        *(undefined1 *)((long)puVar19 + lVar16) = 0;
        param_3 = *(undefined1 (**) [16])(param_3[2] + 8);
        puVar19 = (undefined4 *)((long)puVar19 + lVar17 + lVar16);
      } while (param_3 != (undefined1 (*) [16])0x0);
      *puVar19 = 0;
    }
    piVar6 = (int *)thunk_FUN_710081c1c0(0x1000);
    if (piVar6 == (int *)0x0) {
      thunk_FUN_710081c200(puVar5);
      puVar5 = (undefined4 *)FUN_710080e8e0();
      *puVar5 = 0xc;
      local_20 = 4;
    }
    else {
      lVar15 = FUN_710076d158();
      uVar1 = *(undefined4 *)(lVar15 + 0x2e7ec);
      local_20 = local_20 & 0xffffffff00000000;
      bVar2 = *(byte *)(lVar15 + 0x2e7e8);
      uVar7 = FUN_710080e8e0();
      uVar4 = FUN_7100771380(uVar1,bVar2 ^ 1,param_1,param_2,puVar5,uVar13,piVar6,0x1000,uVar7,
                             &local_20,0);
      *(undefined4 *)(lVar15 + 0x2e7ec) = 0;
      *(uint *)(lVar15 + 0x2e7f0) = uVar4;
      thunk_FUN_710081c200(puVar5);
      if (uVar4 == 0) {
        if ((int)local_20 == 0) {
          if (*piVar6 == -0x1351042) {
            puVar12 = (uint *)0x0;
            puVar14 = (uint *)0x0;
            piVar20 = piVar6;
            do {
              uVar4 = piVar20[5];
              uVar3 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
              lVar15 = (ulong)(uVar3 >> 0x10 | uVar3 << 0x10) + 0x18;
              if (uVar4 == 0) {
                lVar15 = 0x1c;
              }
              lVar16 = FUN_710081ce00((long)piVar20 + lVar15);
              puVar8 = (uint *)thunk_FUN_710081c1c0(lVar16 + 0xb1);
              if (puVar8 == (uint *)0x0) {
                if (puVar12 != (uint *)0x0) {
                  FUN_710076a2b0(puVar12);
                }
                goto LAB_710076a98c;
              }
              lVar16 = lVar16 + 1;
              uVar4 = (piVar20[1] & 0xff00ff00U) >> 8 | (piVar20[1] & 0xff00ffU) << 8;
              *puVar8 = uVar4 >> 0x10 | uVar4 << 0x10;
              uVar4 = piVar20[2];
              uVar3 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
              puVar8[1] = uVar3 >> 0x10 | uVar3 << 0x10;
              uVar3 = (piVar20[3] & 0xff00ff00U) >> 8 | (piVar20[3] & 0xff00ffU) << 8;
              puVar8[2] = uVar3 >> 0x10 | uVar3 << 0x10;
              uVar3 = (piVar20[4] & 0xff00ff00U) >> 8 | (piVar20[4] & 0xff00ffU) << 8;
              puVar8[3] = uVar3 >> 0x10 | uVar3 << 0x10;
              uVar3 = piVar20[5];
              uVar10 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
              uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
              if (uVar10 < 0x81) {
                puVar8[4] = uVar10;
                if (uVar3 != 0) goto LAB_710076a7c8;
                puVar8[8] = 0;
                puVar8[9] = 0;
                if (lVar16 == 1) goto LAB_710076a82c;
LAB_710076a8e8:
                *(uint **)(puVar8 + 6) = puVar8 + 0x2c;
                FUN_710080f900(puVar8 + 0x2c,(long)piVar20 + lVar15,lVar16);
              }
              else {
                uVar10 = 0x80;
                puVar8[4] = 0x80;
LAB_710076a7c8:
                *(uint **)(puVar8 + 8) = puVar8 + 0xc;
                lVar17 = FUN_710080f900(puVar8 + 0xc,piVar20 + 6,uVar10);
                if (uVar4 == 0x2000000) {
                  *(undefined1 *)(puVar8 + 0xc) = 6;
                  *(ushort *)((long)puVar8 + 0x32) =
                       *(ushort *)((long)puVar8 + 0x32) >> 8 |
                       (ushort)((*(ushort *)((long)puVar8 + 0x32) & 0xff00ff) << 8);
                  uVar4 = (puVar8[0xd] & 0xff00ff00) >> 8 | (puVar8[0xd] & 0xff00ff) << 8;
                  puVar8[0xd] = uVar4 >> 0x10 | uVar4 << 0x10;
                }
                else if (uVar4 == 0x1c000000) {
                  *(ushort *)(lVar17 + 2) =
                       *(ushort *)(lVar17 + 2) >> 8 |
                       (ushort)((*(ushort *)(lVar17 + 2) & 0xff00ff) << 8);
                  uVar4 = (*(uint *)(lVar17 + 4) & 0xff00ff00) >> 8 |
                          (*(uint *)(lVar17 + 4) & 0xff00ff) << 8;
                  *(uint *)(lVar17 + 4) = uVar4 >> 0x10 | uVar4 << 0x10;
                  uVar4 = (*(uint *)(lVar17 + 0x18) & 0xff00ff00) >> 8 |
                          (*(uint *)(lVar17 + 0x18) & 0xff00ff) << 8;
                  *(uint *)(lVar17 + 0x18) = uVar4 >> 0x10 | uVar4 << 0x10;
                }
                if (lVar16 != 1) goto LAB_710076a8e8;
LAB_710076a82c:
                puVar8[6] = 0;
                puVar8[7] = 0;
              }
              puVar8[10] = 0;
              puVar8[0xb] = 0;
              if (puVar12 == (uint *)0x0) {
                puVar12 = puVar8;
              }
              if (puVar14 != (uint *)0x0) {
                *(uint **)(puVar14 + 10) = puVar8;
              }
              piVar20 = (int *)((long)piVar20 + lVar16 + lVar15);
              puVar14 = puVar8;
            } while (*piVar20 == -0x1351042);
            *param_4 = puVar12;
          }
          else {
LAB_710076a98c:
            *param_4 = 0;
            puVar5 = (undefined4 *)FUN_710080e8e0();
            *puVar5 = 0xc;
            local_20 = CONCAT44(local_20._4_4_,6);
          }
        }
      }
      else {
        if ((uVar4 & 0x1ff) == 0x15) {
          puVar5 = (undefined4 *)FUN_710080e8e0();
          *puVar5 = 0xb;
        }
        else if ((uVar4 & 0x1ff) == 1) {
          puVar5 = (undefined4 *)FUN_710080e8e0();
          *puVar5 = 0xe;
        }
        else {
          puVar5 = (undefined4 *)FUN_710080e8e0();
          *puVar5 = 0x20;
        }
        local_20 = CONCAT44(local_20._4_4_,0xb);
      }
      thunk_FUN_710081c200(piVar6);
      local_20 = local_20 & 0xffffffff;
    }
  }
  return local_20;
}



// ===== FUN_710076aa10 @ 710076aa10 (size=112) =====

undefined4 FUN_710076aa10(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [12];
  undefined4 local_4;
  
  local_4 = 0x7f000001;
  iVar1 = FUN_7100759f20(0);
  if (iVar1 != 0) {
    auVar4 = FUN_710076d158();
    *(int *)(auVar4._0_8_ + 0x2e7f0) = auVar4._8_4_;
    return local_4;
  }
  uVar2 = FUN_710075a480(&local_4,0);
  uVar3 = FUN_710075a2f0();
  auVar4 = FUN_710076d158(uVar3,uVar2);
  *(int *)(auVar4._0_8_ + 0x2e7f0) = auVar4._8_4_;
  return local_4;
}



// ===== FUN_710076aa80 @ 710076aa80 (size=52) =====

int FUN_710076aa80(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 local_8 [2];
  
  local_8[0] = FUN_710076aa10();
  lVar1 = FUN_710076c470(2,local_8,param_1,param_2);
  return -(uint)(lVar1 == 0);
}



// ===== FUN_710076aac0 @ 710076aac0 (size=124) =====

undefined4 FUN_710076aac0(void)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  
  puVar3 = (uint *)FUN_7100834d40();
  if (puVar3 == (uint *)0x0) {
    puVar4 = (undefined4 *)FUN_710080e8e0();
    *puVar4 = 9;
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_710080aec0(*(undefined8 *)(&PTR_PTR_s_stdnull_7100af8170)[*puVar3],&DAT_71008549a8);
    if (iVar1 == 0) {
      uVar2 = **(undefined4 **)(puVar3 + 2);
    }
    else {
      puVar4 = (undefined4 *)FUN_710080e8e0();
      *puVar4 = 0x6c;
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



// ===== FUN_710076ab40 @ 710076ab40 (size=164) =====

void FUN_710076ab40(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 auVar4 [16];
  
  auVar4 = FUN_710076d158(param_1,param_1);
  iVar1 = *(int *)(auVar4._0_8_ + 0x2e810);
  if (iVar1 == -1) {
    iVar1 = *(int *)(auVar4._0_8_ + 0x2e814);
    uVar2 = 0xe;
    if (((iVar1 != 0xd401) && (uVar2 = 0x10, iVar1 != 0x10601)) && (uVar2 = 0x17, iVar1 != 0xd201))
    {
      uVar2 = 0x20;
    }
  }
  else {
    uVar2 = FUN_71007753e0(iVar1);
  }
  if (auVar4._8_8_ == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_710080e8e0();
    *puVar3 = uVar2;
    return;
  }
  *auVar4._8_8_ = uVar2;
  return;
}



// ===== FUN_710076abf0 @ 710076abf0 (size=80) =====

undefined8
FUN_710076abf0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100770140(*param_2,param_3,param_4);
  if ((int)uVar1 == -1) {
    FUN_710076ab40(param_1);
  }
  return uVar1;
}



// ===== FUN_710076ac40 @ 710076ac40 (size=80) =====

undefined8
FUN_710076ac40(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_710076ff80(*param_2,param_3,param_4);
  if ((int)uVar1 == -1) {
    FUN_710076ab40(param_1);
  }
  return uVar1;
}



// ===== FUN_710076ac90 @ 710076ac90 (size=68) =====

int FUN_710076ac90(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_71007702f0(*param_2);
  if (iVar1 == -1) {
    FUN_710076ab40(param_1);
  }
  return iVar1;
}



// ===== FUN_710076ace0 @ 710076ace0 (size=140) =====

undefined4 FUN_710076ace0(undefined8 param_1,int *param_2,long param_3,undefined4 param_4)

{
  long lVar1;
  int iVar2;
  
  iVar2 = FUN_710080b4c0(param_3,&DAT_71008549b0,4);
  lVar1 = param_3 + 4;
  if (iVar2 != 0) {
    lVar1 = param_3;
  }
  iVar2 = FUN_710076e5d0(lVar1,param_4);
  if (iVar2 != -1) {
    *param_2 = iVar2;
    return 0;
  }
  FUN_710076ab40(param_1);
  return 0xffffffff;
}



// ===== FUN_710076ad70 @ 710076ad70 (size=28) =====

void FUN_710076ad70(void)

{
  FUN_7100835120(&DAT_71008549b0);
  FUN_710076e570();
  return;
}



// ===== FUN_710076ad90 @ 710076ad90 (size=436) =====

int FUN_710076ad90(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)&UNK_71009c5978;
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = param_1;
  }
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_10 = 0;
  uVar3 = FUN_7100769b90();
  iVar5 = 1;
  if (0x2ffff < uVar3) {
    uVar3 = FUN_7100769b90();
    iVar5 = 2;
    if (0x3ffff < uVar3) {
      uVar3 = FUN_7100769b90();
      iVar5 = 3;
      if (0x4ffff < uVar3) {
        uVar3 = FUN_7100769b90();
        iVar5 = 4;
        if (0x5ffff < uVar3) {
          uVar3 = FUN_7100769b90();
          iVar5 = 5;
          if (0x7ffff < uVar3) {
            uVar3 = FUN_7100769b90();
            iVar5 = 6;
            if (0x8ffff < uVar3) {
              uVar3 = FUN_7100769b90();
              iVar5 = 7;
              if (0xcffff < uVar3) {
                uVar3 = FUN_7100769b90();
                iVar5 = (0xfffff < uVar3) + 8;
              }
            }
          }
        }
      }
    }
  }
  uStack_28 = *puVar1;
  local_20 = puVar1[1];
  local_40 = CONCAT44(local_40._4_4_,iVar5);
  iVar2 = *(int *)(puVar1 + 4);
  uStack_18 = puVar1[2];
  iVar5 = *(int *)((long)puVar1 + 0x1c);
  iVar7 = 0xf59;
  local_10 = CONCAT44(local_10._4_4_,*(undefined4 *)(puVar1 + 3));
  if (iVar5 == 0) {
    iVar5 = 3;
  }
  iVar4 = FUN_7100835000(&DAT_71008549b0);
  if (iVar4 == -1) {
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    iVar5 = FUN_710076e210(&local_40,iVar5,iVar2);
    if (iVar5 != 0) {
      FUN_710076ad70();
      return iVar5;
    }
    iVar5 = FUN_7100835160(&PTR_DAT_7100ae6b80);
    if (iVar5 != -1) {
      lVar6 = FUN_710076d158();
      *(undefined4 *)(lVar6 + 0x2e814) = 0;
      *(undefined4 *)(lVar6 + 0x2e810) = 0;
      return 0;
    }
    iVar7 = 0x4f59;
    FUN_710076ad70();
  }
  return iVar7;
}



// ===== FUN_710076af50 @ 710076af50 (size=196) =====

int FUN_710076af50(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined1 auVar5 [12];
  int local_4;
  
  iVar1 = FUN_710076aac0(param_2);
  if (iVar1 != -1) {
    local_4 = 0;
    uVar2 = FUN_7100760f10(param_1,iVar1,&local_4);
    if ((int)uVar2 != 0) {
      auVar5 = FUN_710076d158(uVar2,uVar2 & 0xffffffff);
      *(int *)(auVar5._0_8_ + 0x2e814) = auVar5._8_4_;
      puVar4 = (undefined4 *)FUN_710080e8e0();
      *puVar4 = 5;
      return -1;
    }
    if (local_4 == -1) {
      puVar4 = (undefined4 *)FUN_710080e8e0();
      *puVar4 = 2;
    }
    else {
      iVar1 = FUN_7100835000(&DAT_71008549b0);
      if (iVar1 != -1) {
        iVar1 = FUN_7100834c00();
        if (iVar1 == -1) {
          return -1;
        }
        lVar3 = FUN_7100834d40();
        **(int **)(lVar3 + 8) = local_4;
        return iVar1;
      }
    }
  }
  return -1;
}



// ===== FUN_710076b020 @ 710076b020 (size=1836) =====

int FUN_710076b020(uint param_1,ulong *param_2,ulong *param_3,ulong *param_4,undefined8 *param_5)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  ulong uVar15;
  ulong uStack_18;
  
  puVar5 = &stack0xffffffffffffff80;
  if (0x3f < param_1) {
    puVar6 = (undefined4 *)FUN_710080e8e0();
    *puVar6 = 0x16;
    return -1;
  }
  uVar15 = (ulong)(int)param_1;
  if (param_1 == 0) {
    uStack_18 = 0;
  }
  else {
    if (param_2 != (ulong *)0x0) {
      uStack_18 = 0;
      uVar4 = 0;
      goto LAB_710076b0d4;
    }
    uVar4 = 0;
    uStack_18 = 0;
    if (param_3 != (ulong *)0x0) goto LAB_710076b070;
    if (param_4 == (ulong *)0x0) {
      do {
        uVar4 = uVar4 + 1;
      } while (uVar15 != uVar4);
      uStack_18 = 0;
    }
    else {
      uStack_18 = 0;
LAB_710076b080:
      while( true ) {
        if ((*param_4 >> (uVar4 & 0x3f) & 1) != 0) {
          uStack_18 = (ulong)((int)uStack_18 + 1);
        }
        uVar4 = uVar4 + 1;
        if (uVar15 == uVar4) break;
        if (param_2 != (ulong *)0x0) goto LAB_710076b0d4;
        if (param_3 != (ulong *)0x0) {
LAB_710076b070:
          do {
            if ((*param_3 >> (uVar4 & 0x3f) & 1) == 0) {
              if (param_4 != (ulong *)0x0) goto LAB_710076b080;
              do {
                uVar4 = uVar4 + 1;
                if (uVar15 == uVar4) goto LAB_710076b110;
                if (param_2 != (ulong *)0x0) goto LAB_710076b0d4;
              } while ((*param_3 >> (uVar4 & 0x3f) & 1) == 0);
            }
            uVar4 = uVar4 + 1;
            uStack_18 = (ulong)((int)uStack_18 + 1);
            if (uVar15 == uVar4) goto LAB_710076b110;
          } while (param_2 == (ulong *)0x0);
LAB_710076b0d4:
          do {
            if ((*param_2 >> (uVar4 & 0x3f) & 1) == 0) {
              if (param_3 != (ulong *)0x0) goto LAB_710076b070;
              if (param_4 != (ulong *)0x0) goto LAB_710076b080;
              do {
                uVar4 = uVar4 + 1;
                if (uVar4 == uVar15) goto LAB_710076b110;
              } while ((*param_2 >> (uVar4 & 0x3f) & 1) == 0);
            }
            uVar4 = uVar4 + 1;
            uStack_18 = (ulong)((int)uStack_18 + 1);
            if (uVar15 == uVar4) goto LAB_710076b110;
          } while( true );
        }
      }
    }
LAB_710076b110:
    if (DAT_7100af3888 < uStack_18) {
      puVar5 = (undefined1 *)thunk_FUN_710081c1c0();
      if (puVar5 == (undefined1 *)0x0) {
        puVar6 = (undefined4 *)FUN_710080e8e0();
        *puVar6 = 0xc;
        return -1;
      }
    }
    else {
      puVar5 = &stack0xffffffffffffff80 + -(uStack_18 * 8 + 0xf & 0xffffffff0);
    }
    lVar13 = 0;
    uVar4 = 0;
    if (param_2 != (ulong *)0x0) goto LAB_710076b150;
    if (param_3 != (ulong *)0x0) goto LAB_710076b164;
    if (param_4 != (ulong *)0x0) {
LAB_710076b174:
      do {
        while ((*param_4 >> (uVar4 & 0x3f) & 1) == 0) {
          uVar4 = uVar4 + 1;
          if (uVar15 == uVar4) goto joined_r0x00710076b6c4;
          if (param_2 != (ulong *)0x0) goto LAB_710076b150;
          if (param_3 != (ulong *)0x0) goto LAB_710076b164;
        }
LAB_710076b1a0:
        iVar3 = FUN_710076aac0(uVar4 & 0xffffffff);
        *(int *)(puVar5 + lVar13 * 8) = iVar3;
        puVar14 = puVar5 + lVar13 * 8;
        if (iVar3 == -1) goto LAB_710076b2c8;
        *(undefined4 *)(puVar14 + 4) = 0;
        if (param_2 != (ulong *)0x0) goto LAB_710076b230;
        if (param_3 != (ulong *)0x0) {
LAB_710076b1c8:
          uVar7 = *param_3;
          if ((uVar7 >> (uVar4 & 0x3f) & 1) != 0) {
            *(ushort *)(puVar14 + 4) = *(ushort *)(puVar14 + 4) | 4;
          }
          if (uVar15 != uVar4 + 1) {
            uVar4 = uVar4 + 1;
            lVar13 = lVar13 + 1;
            if (param_2 != (ulong *)0x0) goto LAB_710076b150;
LAB_710076b168:
            if ((uVar7 >> (uVar4 & 0x3f) & 1) == 0) {
              if (param_4 == (ulong *)0x0) {
                while( true ) {
                  uVar4 = uVar4 + 1;
                  if (uVar15 == uVar4) goto joined_r0x00710076b6c4;
                  if (param_2 != (ulong *)0x0) break;
                  if ((uVar7 >> (uVar4 & 0x3f) & 1) != 0) goto LAB_710076b1a0;
                }
LAB_710076b150:
                uVar7 = *param_2;
                do {
                  if ((uVar7 >> (uVar4 & 0x3f) & 1) == 0) {
                    if (param_3 != (ulong *)0x0) goto LAB_710076b164;
                    if (param_4 != (ulong *)0x0) break;
                    do {
                      uVar4 = uVar4 + 1;
                      if (uVar15 == uVar4) goto joined_r0x00710076b6c4;
                    } while ((uVar7 >> (uVar4 & 0x3f) & 1) == 0);
                  }
                  puVar14 = puVar5 + lVar13 * 8;
                  iVar3 = FUN_710076aac0(uVar4 & 0xffffffff);
                  *(int *)(puVar5 + lVar13 * 8) = iVar3;
                  if (iVar3 == -1) goto LAB_710076b2c8;
                  *(undefined4 *)(puVar14 + 4) = 0;
LAB_710076b230:
                  uVar7 = *param_2;
                  if ((uVar7 >> (uVar4 & 0x3f) & 1) != 0) {
                    *(undefined2 *)(puVar14 + 4) = 1;
                  }
                  if (param_3 != (ulong *)0x0) goto LAB_710076b1c8;
                  uVar4 = uVar4 + 1;
                  if (uVar15 == uVar4) goto joined_r0x00710076b6c4;
                  lVar13 = lVar13 + 1;
                } while( true );
              }
              goto LAB_710076b174;
            }
            goto LAB_710076b1a0;
          }
          goto joined_r0x00710076b6c4;
        }
        uVar4 = uVar4 + 1;
        if (uVar15 == uVar4) goto joined_r0x00710076b6c4;
        lVar13 = lVar13 + 1;
        if (param_4 == (ulong *)0x0) break;
      } while( true );
    }
    do {
      if (uVar15 == uVar4 + 1) break;
      uVar4 = uVar4 + 2;
    } while (uVar15 != uVar4);
  }
joined_r0x00710076b6c4:
  if (param_5 == (undefined8 *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = (int)((long)param_5[1] / 1000) + (int)*param_5 * 1000;
  }
  iVar3 = FUN_710076e7a0(puVar5,uStack_18,iVar3);
  if (iVar3 == -1) {
    FUN_710076ab40(0);
LAB_710076b2c8:
    iVar3 = -1;
  }
  else if ((-1 < iVar3) && (iVar3 = 0, uVar15 != 0)) {
    lVar13 = 0;
    uVar4 = 0;
LAB_710076b3b8:
    if (param_2 == (ulong *)0x0) {
      if (param_3 == (ulong *)0x0) goto LAB_710076b5c8;
      goto LAB_710076b478;
    }
LAB_710076b3bc:
    uVar7 = *param_2;
    uVar9 = uVar7 >> (uVar4 & 0x3f);
    do {
      uVar10 = uVar4 & 0xffffffff;
      if ((uVar9 & 1) == 0) {
        if (param_3 == (ulong *)0x0) {
          if (param_4 != (ulong *)0x0) {
LAB_710076b44c:
            do {
              uVar8 = *param_4;
              while (uVar10 = uVar4 & 0xffffffff, (uVar8 >> (uVar4 & 0x3f) & 1) == 0) {
                uVar4 = uVar4 + 1;
                if (uVar15 == uVar4) goto LAB_710076b2cc;
                if (param_2 != (ulong *)0x0) goto LAB_710076b3bc;
                if (param_3 != (ulong *)0x0) goto LAB_710076b478;
              }
              if (param_2 != (ulong *)0x0) {
                uVar7 = *param_2;
                if ((uVar7 >> (uVar4 & 0x3f) & 1) != 0) goto LAB_710076b3d0;
                if (param_3 == (ulong *)0x0) {
                  if ((*(ushort *)(puVar5 + lVar13 * 8 + 6) >> 3 & 1) != 0) goto LAB_710076b4e0;
                  *param_4 = uVar8 & (1L << (uVar4 & 0x3f) ^ 0xffffffffffffffffU);
                  goto LAB_710076b410;
                }
                uVar9 = *param_3;
                lVar12 = lVar13 * 8;
                if ((uVar9 >> (uVar4 & 0x3f) & 1) == 0) goto LAB_710076b554;
                uVar11 = (uint)*(short *)(puVar5 + lVar12 + 6);
                bVar2 = false;
                if ((uVar11 & 0x14) != 0) goto LAB_710076b510;
                goto LAB_710076b4bc;
              }
              if (param_3 != (ulong *)0x0) {
                lVar12 = lVar13 * 8;
                if ((*param_3 >> (uVar4 & 0x3f) & 1) == 0) goto LAB_710076b554;
                uVar11 = (uint)*(short *)(puVar5 + lVar12 + 6);
                if ((uVar11 & 0x14) != 0) goto LAB_710076b510;
                uVar7 = 1L << (uVar4 & 0x3f);
                *param_3 = *param_3 & (uVar7 ^ 0xffffffffffffffff);
                uVar9 = *param_4;
                if ((uVar9 >> (uVar4 & 0x3f) & 1) == 0) goto LAB_710076b4e4;
                bVar2 = false;
                goto LAB_710076b640;
              }
              if ((*(ushort *)(puVar5 + lVar13 * 8 + 6) >> 3 & 1) != 0) goto LAB_710076b4e0;
              uVar7 = uVar4 & 0x3f;
              uVar4 = uVar4 + 1;
              *param_4 = uVar8 & (1L << uVar7 ^ 0xffffffffffffffffU);
              if (uVar15 == uVar4) goto LAB_710076b2cc;
              lVar13 = lVar13 + 1;
LAB_710076b5c8:
              if (param_4 == (ulong *)0x0) {
                do {
                  uVar4 = uVar4 + 1;
                } while (uVar15 != uVar4);
                goto LAB_710076b2cc;
              }
            } while( true );
          }
          do {
            uVar4 = uVar4 + 1;
            if (uVar15 == uVar4) goto LAB_710076b2cc;
            uVar10 = uVar4 & 0xffffffff;
          } while ((uVar7 >> (uVar4 & 0x3f) & 1) == 0);
        }
        else {
          uVar9 = *param_3;
          do {
            if ((uVar9 >> (uVar10 & 0x3f) & 1) != 0) goto LAB_710076b4a8;
            if (param_4 != (ulong *)0x0) goto LAB_710076b44c;
            uVar4 = uVar4 + 1;
            if (uVar15 == uVar4) goto LAB_710076b2cc;
            uVar10 = uVar4 & 0xffffffff;
          } while ((uVar7 >> (uVar4 & 0x3f) & 1) == 0);
        }
      }
LAB_710076b3d0:
      lVar12 = lVar13 * 8;
      sVar1 = *(short *)(puVar5 + lVar12 + 6);
      uVar11 = (uint)sVar1;
      if (((int)sVar1 & 0x11U) != 0) {
        if ((param_3 == (ulong *)0x0) || (uVar9 = *param_3, (uVar9 >> (uVar10 & 0x3f) & 1) == 0))
        goto LAB_710076b508;
        bVar2 = true;
        goto LAB_710076b4b4;
      }
      uVar9 = 1L << (uVar10 & 0x3f);
      *param_2 = uVar7 & (uVar9 ^ 0xffffffffffffffff);
      if (param_3 == (ulong *)0x0) {
        if (param_4 == (ulong *)0x0) {
          uVar4 = uVar4 + 1;
          if (uVar4 == uVar15) break;
          lVar13 = lVar13 + 1;
        }
        else {
          if ((*param_4 >> (uVar10 & 0x3f) & 1) == 0) goto LAB_710076b410;
          if (((uint)(int)sVar1 >> 3 & 1) != 0) goto LAB_710076b4e0;
          uVar4 = uVar4 + 1;
          *param_4 = *param_4 & (uVar9 ^ 0xffffffffffffffff);
          if (uVar15 == uVar4) break;
          lVar13 = lVar13 + 1;
        }
      }
      else {
        uVar9 = *param_3;
        if ((uVar9 >> (uVar10 & 0x3f) & 1) != 0) {
          bVar2 = false;
          goto LAB_710076b4b4;
        }
        if ((param_4 != (ulong *)0x0) && (uVar8 = *param_4, (uVar8 >> (uVar10 & 0x3f) & 1) != 0)) {
LAB_710076b554:
          if ((*(ushort *)(puVar5 + lVar12 + 6) >> 3 & 1) != 0) goto LAB_710076b4e0;
          *param_4 = uVar8 & (1L << (uVar10 & 0x3f) ^ 0xffffffffffffffffU);
          goto LAB_710076b4e4;
        }
LAB_710076b410:
        uVar4 = uVar4 + 1;
        if (uVar15 == uVar4) break;
        lVar13 = lVar13 + 1;
      }
      uVar7 = *param_2;
      uVar9 = uVar7 >> (uVar4 & 0x3f);
    } while( true );
  }
LAB_710076b2cc:
  if (DAT_7100af3888 < uStack_18) {
    thunk_FUN_710081c200(puVar5);
  }
  return iVar3;
LAB_710076b164:
  uVar7 = *param_3;
  goto LAB_710076b168;
LAB_710076b478:
  uVar9 = *param_3;
  uVar10 = uVar4 & 0xffffffff;
  if ((uVar9 >> (uVar4 & 0x3f) & 1) != 0) goto LAB_710076b4a8;
  if (param_4 == (ulong *)0x0) goto LAB_710076b48c;
  goto LAB_710076b44c;
  while (uVar10 = uVar4 & 0xffffffff, (uVar9 >> (uVar4 & 0x3f) & 1) == 0) {
LAB_710076b48c:
    uVar4 = uVar4 + 1;
    if (uVar15 == uVar4) goto LAB_710076b2cc;
  }
LAB_710076b4a8:
  bVar2 = false;
  uVar11 = (uint)*(short *)(puVar5 + lVar13 * 8 + 6);
LAB_710076b4b4:
  if ((uVar11 & 0x14) == 0) {
LAB_710076b4bc:
    uVar7 = 1L << (uVar10 & 0x3f);
    *param_3 = uVar9 & (uVar7 ^ 0xffffffffffffffff);
    if ((param_4 != (ulong *)0x0) && (uVar9 = *param_4, (uVar9 >> (uVar10 & 0x3f) & 1) != 0)) {
LAB_710076b640:
      if ((uVar11 >> 3 & 1) != 0) goto LAB_710076b4e0;
      *param_4 = uVar9 & ~uVar7;
    }
    if (!bVar2) goto LAB_710076b4e4;
  }
  else {
LAB_710076b508:
    if (param_4 != (ulong *)0x0) {
      uVar8 = *param_4;
LAB_710076b510:
      if (((uVar8 >> (uVar10 & 0x3f) & 1) != 0) && ((uVar11 >> 3 & 1) == 0)) {
        *param_4 = uVar8 & (1L << (uVar10 & 0x3f) ^ 0xffffffffffffffffU);
      }
    }
  }
LAB_710076b4e0:
  iVar3 = iVar3 + 1;
LAB_710076b4e4:
  uVar4 = uVar4 + 1;
  lVar13 = lVar13 + 1;
  if (uVar4 == uVar15) goto LAB_710076b2cc;
  goto LAB_710076b3b8;
}



// ===== FUN_710076b750 @ 710076b750 (size=396) =====

int FUN_710076b750(int *param_1,uint param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  
  if (param_1 == (int *)0x0) {
    puVar4 = (undefined4 *)FUN_710080e8e0();
    iVar2 = -1;
    *puVar4 = 0xe;
  }
  else {
    lVar1 = (ulong)param_2 * 8;
    if (DAT_7100af3888 < param_2) {
      piVar3 = (int *)thunk_FUN_710081c1c0(lVar1);
      if (piVar3 == (int *)0x0) {
        puVar4 = (undefined4 *)FUN_710080e8e0();
        *puVar4 = 0xc;
        return -1;
      }
    }
    else {
      lVar5 = -(lVar1 + 0xfU & 0xffffffff0);
      piVar3 = (int *)(&stack0xffffffffffffff90 + lVar5);
      if (param_2 == 0) {
        iVar2 = FUN_710076e7a0(&stack0xffffffffffffff90 + lVar5);
        if (iVar2 != -1) {
          return iVar2;
        }
        FUN_710076ab40(0);
        return -1;
      }
    }
    uVar8 = 0;
    piVar6 = piVar3;
    piVar7 = param_1;
    do {
      piVar6[1] = piVar7[1];
      if (*piVar7 < 0) {
        *piVar6 = -1;
      }
      else {
        iVar2 = FUN_710076aac0();
        *piVar6 = iVar2;
        if (iVar2 == -1) goto LAB_710076b7f8;
      }
      uVar8 = uVar8 + 1;
      piVar7 = piVar7 + 2;
      piVar6 = piVar6 + 2;
    } while (uVar8 < param_2);
    iVar2 = FUN_710076e7a0(piVar3,(ulong)param_2,param_3);
    if (iVar2 == -1) {
      FUN_710076ab40(0);
LAB_710076b7f8:
      iVar2 = -1;
    }
    else {
      lVar5 = 0;
      do {
        *(undefined4 *)((long)param_1 + lVar5 + 4) = *(undefined4 *)((long)piVar3 + lVar5 + 4);
        lVar5 = lVar5 + 8;
      } while (lVar1 != lVar5);
    }
    if (DAT_7100af3888 < param_2) {
      thunk_FUN_710081c200(piVar3);
    }
  }
  return iVar2;
}



// ===== FUN_710076b8e0 @ 710076b8e0 (size=152) =====

int FUN_710076b8e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = FUN_7100835000(&DAT_71008549b0);
  if (iVar1 != -1) {
    iVar1 = FUN_7100834c00();
    if (iVar1 != -1) {
      iVar2 = FUN_710076e5c0(param_1,param_2,param_3);
      if (iVar2 != -1) {
        lVar3 = FUN_7100834d40(iVar1);
        **(int **)(lVar3 + 8) = iVar2;
        return iVar1;
      }
      FUN_710076ab40(0);
      FUN_7100834b60(iVar1);
    }
  }
  return -1;
}



// ===== FUN_710076b980 @ 710076b980 (size=92) =====

long FUN_710076b980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_710076aac0();
  if ((int)uVar2 == -1) {
    lVar3 = -1;
  }
  else {
    iVar1 = FUN_710076e9f0(uVar2,param_2,param_3,param_4);
    if (iVar1 == -1) {
      FUN_710076ab40(0);
    }
    lVar3 = (long)iVar1;
  }
  return lVar3;
}



// ===== FUN_710076b9e0 @ 710076b9e0 (size=100) =====

long FUN_710076b9e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_710076aac0();
  if ((int)uVar2 == -1) {
    lVar3 = -1;
  }
  else {
    iVar1 = FUN_710076ebb0(uVar2,param_2,param_3,param_4,param_5,param_6);
    if (iVar1 == -1) {
      FUN_710076ab40(0);
    }
    lVar3 = (long)iVar1;
  }
  return lVar3;
}



// ===== FUN_710076ba50 @ 710076ba50 (size=92) =====

long FUN_710076ba50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_710076aac0();
  if ((int)uVar2 == -1) {
    lVar3 = -1;
  }
  else {
    iVar1 = FUN_710076ee20(uVar2,param_2,param_3,param_4);
    if (iVar1 == -1) {
      FUN_710076ab40(0);
    }
    lVar3 = (long)iVar1;
  }
  return lVar3;
}



// ===== FUN_710076bab0 @ 710076bab0 (size=108) =====

long FUN_710076bab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                   undefined8 param_5,undefined4 param_6)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_710076aac0();
  if ((int)uVar2 == -1) {
    lVar3 = -1;
  }
  else {
    iVar1 = FUN_710076eff0(uVar2,param_2,param_3,param_4,param_5,param_6);
    if (iVar1 == -1) {
      FUN_710076ab40(0);
    }
    lVar3 = (long)iVar1;
  }
  return lVar3;
}



// ===== FUN_710076bb20 @ 710076bb20 (size=160) =====

int FUN_710076bb20(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  
  iVar1 = FUN_710076aac0();
  if (iVar1 != -1) {
    puVar3 = (undefined4 *)FUN_7100834d40(param_1);
    iVar2 = FUN_7100834c00(*puVar3);
    if (iVar2 != -1) {
      iVar1 = FUN_710076f250(iVar1,param_2,param_3);
      if (iVar1 != -1) {
        lVar4 = FUN_7100834d40(iVar2);
        **(int **)(lVar4 + 8) = iVar1;
        return iVar2;
      }
      FUN_710076ab40(0);
      FUN_7100834b60(iVar2);
    }
  }
  return -1;
}



// ===== FUN_710076bbc0 @ 710076bbc0 (size=96) =====

ulong FUN_710076bbc0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_710076aac0();
  if ((int)uVar1 != -1) {
    uVar1 = FUN_710076f260(uVar1,param_2,param_3);
    if ((int)uVar1 == -1) {
      FUN_710076ab40(0);
      return uVar1 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}



// ===== FUN_710076bc20 @ 710076bc20 (size=96) =====

ulong FUN_710076bc20(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_710076aac0();
  if ((int)uVar1 != -1) {
    uVar1 = FUN_710076f270(uVar1,param_2,param_3);
    if ((int)uVar1 == -1) {
      FUN_710076ab40(0);
      return uVar1 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}



// ===== FUN_710076bc80 @ 710076bc80 (size=88) =====

ulong FUN_710076bc80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_710076aac0();
  if ((int)uVar1 != -1) {
    uVar1 = FUN_710076f280(uVar1,param_2,param_3);
    if ((int)uVar1 == -1) {
      FUN_710076ab40(0);
      return uVar1 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}



// ===== FUN_710076bce0 @ 710076bce0 (size=88) =====

ulong FUN_710076bce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_710076aac0();
  if ((int)uVar1 != -1) {
    uVar1 = FUN_710076f290(uVar1,param_2,param_3);
    if ((int)uVar1 == -1) {
      FUN_710076ab40(0);
      return uVar1 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}



// ===== FUN_710076bd40 @ 710076bd40 (size=96) =====

ulong FUN_710076bd40(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  ulong uVar1;
  
  uVar1 = FUN_710076aac0();
  if ((int)uVar1 != -1) {
    uVar1 = FUN_710076f2a0(uVar1,param_2,param_3,param_4,param_5);
    if ((int)uVar1 == -1) {
      FUN_710076ab40(0);
      return uVar1 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}



// ===== FUN_710076bda0 @ 710076bda0 (size=88) =====

ulong FUN_710076bda0(undefined8 param_1,undefined4 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_710076aac0();
  if ((int)uVar1 != -1) {
    uVar1 = FUN_710076f490(uVar1,param_2);
    if ((int)uVar1 == -1) {
      FUN_710076ab40(0);
      return uVar1 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}



// ===== FUN_710076be00 @ 710076be00 (size=104) =====

ulong FUN_710076be00(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                    undefined4 param_5)

{
  ulong uVar1;
  
  uVar1 = FUN_710076aac0();
  if ((int)uVar1 != -1) {
    uVar1 = FUN_710076fc70(uVar1,param_2,param_3,param_4,param_5);
    if ((int)uVar1 == -1) {
      FUN_710076ab40(0);
      return uVar1 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}



// ===== FUN_710076be70 @ 710076be70 (size=188) =====

int FUN_710076be70(undefined8 param_1,int param_2,uint param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (1 < param_2 - 3U) {
    return 0x5f;
  }
  iVar4 = 0;
  if (param_2 == 4) {
    if ((param_3 & 0xffffbfff) != 0) {
      puVar3 = (undefined4 *)FUN_710080e8e0();
      *puVar3 = 0x16;
      return -1;
    }
    iVar4 = (uint)(param_3 != 0) << 0xb;
  }
  uVar1 = FUN_710076aac0();
  if ((int)uVar1 == -1) {
    return -1;
  }
  uVar2 = FUN_710076faf0(uVar1,param_2,iVar4);
  if ((int)uVar2 != -1) {
    return ((uint)(uVar2 >> 0xb) & 1) << 0xe;
  }
  FUN_710076ab40(0);
  return 0x4000;
}



// ===== FUN_710076bf30 @ 710076bf30 (size=484) =====

int FUN_710076bf30(ulong param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  if (param_2 < 0x40000000) {
    iVar2 = FUN_710076aac0();
    param_3 = (uint *)0x0;
    if (iVar2 == -1) {
      return -1;
    }
  }
  else {
    if (param_3 == (uint *)0x0) {
      if ((param_2 & 0x1fff0000) != 0) {
        puVar5 = (undefined4 *)FUN_710080e8e0();
        *puVar5 = 0xe;
        return -1;
      }
    }
    else if (param_2 == 0x8004667e) {
      if ((int)param_1 == -1) {
        return -1;
      }
      uVar3 = FUN_710076be70(param_1,3,0);
      if (uVar3 == 0xffffffff) {
        return -1;
      }
      uVar1 = uVar3 & 0xffffbfff;
      if (*param_3 != 0) {
        uVar1 = uVar3 | 0x4000;
      }
      iVar2 = FUN_710076be70(param_1 & 0xffffffff,4,uVar1);
      return iVar2;
    }
    iVar2 = FUN_710076aac0();
    if (iVar2 == -1) {
      return -1;
    }
    if ((param_2 + 0x7fefbd99 < 0x1c) &&
       ((0x8100001UL >> ((ulong)(param_2 + 0x7fefbd99) & 0x3f) & 1) != 0)) {
      if (0x80000 < *param_3) {
        puVar5 = (undefined4 *)FUN_710080e8e0();
        *puVar5 = 0x16;
        return -1;
      }
      puVar4 = (uint *)thunk_FUN_710081c1c0(0x1004);
      if (puVar4 == (uint *)0x0) {
        puVar5 = (undefined4 *)FUN_710080e8e0();
        *puVar5 = 0xc;
        return -1;
      }
      uVar3 = *param_3;
      uVar6 = *(undefined8 *)(param_3 + 2);
      *puVar4 = uVar3;
      FUN_710080f900(puVar4 + 1,uVar6,uVar3);
      iVar2 = FUN_710076f5d0(iVar2,param_2 & 0xe000ffff | 0x10040000,puVar4);
      thunk_FUN_710081c200(puVar4);
      if (iVar2 != -1) {
        return iVar2;
      }
      goto LAB_710076c058;
    }
  }
  iVar2 = FUN_710076f5d0(iVar2,param_2,param_3);
  if (iVar2 != -1) {
    return iVar2;
  }
LAB_710076c058:
  FUN_710076ab40(0);
  return iVar2;
}



// ===== FUN_710076c120 @ 710076c120 (size=88) =====

ulong FUN_710076c120(undefined8 param_1,undefined4 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_710076aac0();
  if ((int)uVar1 != -1) {
    uVar1 = FUN_710076fe40(uVar1,param_2);
    if ((int)uVar1 == -1) {
      FUN_710076ab40(0);
      return uVar1 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}



// ===== FUN_710076c180 @ 710076c180 (size=44) =====

ulong FUN_710076c180(undefined8 param_1)

{
  ulong uVar1;
  uint local_4;
  
  uVar1 = FUN_710076bf30(param_1,0x40047307,&local_4);
  if ((int)uVar1 != -1) {
    uVar1 = (ulong)local_4;
  }
  return uVar1;
}



// ===== FUN_710076c1b0 @ 710076c1b0 (size=32) =====

undefined8 FUN_710076c1b0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_710080e8e0();
  *puVar1 = 0x58;
  return 0xffffffff;
}



// ===== FUN_710076c1d0 @ 710076c1d0 (size=436) =====

undefined8 FUN_710076c1d0(int param_1,long *param_2,byte *param_3,uint *param_4)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  byte local_8 [8];
  
  uVar3 = (uint)*param_3;
  iVar6 = *param_3 + 1;
  if (((byte)(&DAT_71009d32f0)[iVar6] >> 2 & 1) == 0) {
    return 0;
  }
  lVar7 = 0;
LAB_710076c208:
  iVar5 = 10;
  bVar1 = uVar3 == 0x30 && param_1 == 0;
  if (uVar3 == 0x30 && param_1 == 0) {
    uVar3 = (uint)param_3[1];
    if ((uVar3 & 0xffffffdf) == 0x58) {
      uVar3 = (uint)param_3[2];
      bVar1 = false;
      param_3 = param_3 + 2;
      iVar5 = 0x10;
      iVar6 = uVar3 + 1;
    }
    else {
      param_3 = param_3 + 1;
      iVar5 = 8;
      iVar6 = uVar3 + 1;
    }
  }
  uVar4 = 0;
  do {
    param_3 = param_3 + 1;
    bVar2 = (&DAT_71009d32f0)[iVar6];
    if ((bVar2 >> 2 & 1) == 0) {
      if ((iVar5 != 0x10) || ((bVar2 & 0x44) >> 6 == 0)) break;
      iVar6 = 0x41;
      if ((bVar2 & 3) == 2) {
        iVar6 = 0x61;
      }
      uVar4 = ((uVar3 + 10) - iVar6) + uVar4 * 0x10;
      bVar2 = *param_3;
    }
    else {
      if (0x37 < uVar3 && bVar1) {
        return 0;
      }
      bVar2 = *param_3;
      uVar4 = (uVar3 + iVar5 * uVar4) - 0x30;
    }
    uVar3 = (uint)bVar2;
    iVar6 = uVar3 + 1;
  } while( true );
  if (uVar3 == 0x2e) {
    if (0xff < uVar4 || lVar7 == 4) {
      return 0;
    }
    uVar3 = (uint)*param_3;
    local_8[lVar7] = (byte)uVar4;
    iVar6 = uVar3 + 1;
    lVar7 = lVar7 + 1;
    if (((byte)(&DAT_71009d32f0)[iVar6] >> 2 & 1) == 0) {
      return 0;
    }
    goto LAB_710076c208;
  }
  if (uVar3 != 0) {
    *param_2 = lVar7;
    return 0;
  }
  if (lVar7 == 2) {
    if (0xffff < uVar4) {
      return 0;
    }
  }
  else {
    if (lVar7 != 3) {
      if (lVar7 == 1) {
        if (0xffffff < uVar4) {
          return 0;
        }
        uVar4 = uVar4 | (uint)local_8[0] << 0x18;
      }
      goto LAB_710076c324;
    }
    if (0xff < uVar4) {
      return 0;
    }
    uVar4 = uVar4 | (uint)local_8[2] << 8;
  }
  uVar4 = (uint)local_8[1] << 0x10 | (uint)local_8[0] << 0x18 | uVar4;
LAB_710076c324:
  if (param_4 != (uint *)0x0) {
    uVar3 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    *param_4 = uVar3 >> 0x10 | uVar3 << 0x10;
  }
  *param_2 = lVar7;
  return 1;
}



// ===== FUN_710076c390 @ 710076c390 (size=212) =====

char * FUN_710076c390(byte *param_1,char *param_2)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  
  lVar6 = 0;
  bVar1 = *param_1;
  uVar3 = (ulong)bVar1;
  pcVar4 = param_2;
  if (bVar1 < 100) goto LAB_710076c43c;
LAB_710076c3c4:
  uVar2 = (int)uVar3 + (int)(uVar3 / 100) * -100;
  pcVar5 = pcVar4 + 1;
  *pcVar4 = (char)(uVar3 / 100) + '0';
  uVar3 = (ulong)uVar2;
  pcVar4 = pcVar5;
  if ((uVar2 < 10) && (param_1[lVar6] < 100)) goto LAB_710076c408;
  do {
    uVar2 = (int)uVar3 + ((int)(uVar3 / 10) + (int)(uVar3 / 10) * 4) * -2;
    pcVar5 = pcVar4 + 1;
    *pcVar4 = (char)(uVar3 / 10) + '0';
LAB_710076c408:
    *pcVar5 = (char)uVar2 + '0';
    pcVar4 = pcVar5;
    while( true ) {
      lVar6 = lVar6 + 1;
      if (lVar6 == 4) {
        pcVar4[1] = '\0';
        return param_2;
      }
      pcVar4[1] = '.';
      pcVar4 = pcVar4 + 2;
      bVar1 = param_1[lVar6];
      uVar3 = (ulong)bVar1;
      if (99 < bVar1) goto LAB_710076c3c4;
LAB_710076c43c:
      if (9 < bVar1) break;
      *pcVar4 = bVar1 + 0x30;
    }
  } while( true );
}



// ===== FUN_710076c470 @ 710076c470 (size=1108) =====

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_710076c470(int param_1,byte *param_2,undefined8 param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  uint *puVar4;
  int iVar5;
  char *pcVar6;
  bool bVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  char *pcVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint *puVar22;
  undefined1 auVar23 [16];
  char cStack_51;
  uint local_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined4 local_34;
  undefined1 local_30;
  undefined1 uStack_2f;
  undefined1 auStack_2e [46];
  
  if (param_1 == 2) {
    if (0xf < param_4) {
      uVar9 = FUN_710076c390(param_2,param_3);
      return uVar9;
    }
    puVar10 = (undefined4 *)FUN_710080e8e0();
    *puVar10 = 0x1c;
    return 0;
  }
  if (param_1 != 0x1c) {
    puVar10 = (undefined4 *)FUN_710080e8e0();
    *puVar10 = 0x6a;
    return 0;
  }
  uVar16 = 0;
  lVar15 = 1;
  local_4c = 0;
  local_44 = 0;
  local_3c = 0;
  local_34 = 0;
  local_50 = (uint)*param_2 << 8;
  do {
    pbVar1 = param_2 + lVar15;
    iVar19 = (int)lVar15 >> 1;
    uVar2 = uVar16 & 8;
    lVar15 = lVar15 + 1;
    uVar16 = uVar16 - 8;
    (&local_50)[iVar19] = (uint)*pbVar1 << (ulong)uVar2 | (&local_50)[iVar19];
  } while (lVar15 != 0x10);
  puVar11 = &local_50;
  puVar22 = &local_50;
  if (local_50 == 0) {
    iVar19 = 0;
    iVar20 = -1;
    iVar21 = 0;
    goto LAB_710076c540;
  }
  iVar19 = 0;
  iVar20 = -1;
  iVar14 = 0;
LAB_710076c520:
  iVar14 = iVar14 + 1;
  if (iVar14 != 8) {
    puVar11 = puVar11 + 1;
    uVar16 = *puVar11;
    while (iVar21 = iVar14, uVar16 == 0) {
LAB_710076c540:
      iVar17 = 1;
      puVar4 = puVar11;
      iVar5 = iVar21;
      while( true ) {
        if (iVar5 == 7) {
          bVar7 = iVar19 < iVar17 || iVar20 == -1;
          if (iVar19 >= iVar17 && iVar20 != -1) goto LAB_710076c584;
          goto LAB_710076c810;
        }
        iVar14 = iVar5 + 1;
        puVar11 = puVar4 + 1;
        if (puVar4[1] != 0) break;
        iVar17 = iVar17 + 1;
        puVar4 = puVar11;
        iVar5 = iVar14;
      }
      bVar7 = iVar19 < iVar17 || iVar20 == -1;
      if (iVar19 >= iVar17 && iVar20 != -1) break;
      iVar14 = iVar5 + 2;
      if (iVar5 == 6) {
LAB_710076c810:
        if (iVar17 == 1) {
          iVar21 = -1;
        }
        else if (iVar21 == 0) {
          iVar20 = 0;
          puVar13 = &uStack_2f;
          puVar8 = &local_30;
          iVar14 = 0;
          iVar19 = iVar17;
          goto LAB_710076c7e0;
        }
        goto LAB_710076c5a4;
      }
      puVar11 = puVar4 + 2;
      iVar19 = iVar17;
      iVar20 = iVar21;
      uVar16 = puVar4[2];
    }
    goto LAB_710076c520;
  }
  if (iVar20 != -1) {
LAB_710076c584:
    if (1 < iVar19) {
      bVar7 = iVar20 == 0;
      iVar17 = iVar19;
      iVar21 = iVar20;
      if ((iVar20 < 1) && (0 < iVar20 + iVar19)) {
        if (iVar20 != 0) {
          puVar8 = &local_30;
          puVar22 = (uint *)&local_4c;
          iVar14 = 1;
          puVar12 = &uStack_2f;
          goto LAB_710076c614;
        }
        puVar8 = &uStack_2f;
        puVar22 = (uint *)&local_4c;
        iVar14 = 1;
        puVar12 = auStack_2e;
        local_30 = 0x3a;
        goto LAB_710076c614;
      }
      goto LAB_710076c5a4;
    }
  }
  iVar21 = -1;
  iVar17 = iVar19;
LAB_710076c5a4:
  bVar7 = false;
  iVar14 = 0;
  puVar12 = &local_30;
  iVar19 = iVar17;
  iVar20 = iVar21;
  uVar16 = local_50;
  iVar21 = 0;
  if (local_50 == 0) goto LAB_710076c64c;
LAB_710076c5c0:
  pcVar6 = &cStack_51;
  do {
    pcVar18 = pcVar6;
    uVar2 = uVar16 & 0xf;
    uVar16 = uVar16 >> 4;
    *pcVar18 = "0123456789abcdef"[uVar2];
    pcVar6 = pcVar18 + -1;
  } while (uVar16 != 0);
  puVar8 = (undefined1 *)FUN_710080f900(puVar12,pcVar18,(long)&local_50 - (long)pcVar18);
  iVar14 = iVar21;
  do {
    iVar14 = iVar14 + 1;
    if (iVar14 == 8) {
LAB_710076c670:
      puVar13 = puVar8;
      if (iVar20 != -1) {
LAB_710076c678:
        puVar8 = puVar13;
        if (iVar19 + iVar20 == 8) {
          puVar8 = puVar13 + 1;
          *puVar13 = 0x3a;
        }
      }
LAB_710076c68c:
      *puVar8 = 0;
      if ((undefined1 *)(ulong)param_4 < puVar8 + (1 - (long)&local_30)) {
LAB_710076c828:
        puVar10 = (undefined4 *)FUN_710080e8e0();
        *puVar10 = 0x1c;
LAB_710076c834:
        param_3 = 0;
      }
      else {
        FUN_710081b7c0(param_3,&local_30);
      }
      return param_3;
    }
    puVar22 = puVar22 + 1;
    puVar12 = puVar8 + 1;
    if (iVar20 != -1) {
LAB_710076c614:
      while (iVar20 <= iVar14) {
        puVar13 = puVar12;
        if (iVar19 + iVar20 <= iVar14) {
          bVar3 = bVar7 && iVar14 == 6;
          *puVar8 = 0x3a;
          if ((!bVar7 || iVar14 != 6) ||
             ((iVar19 != 6 &&
              ((iVar14 = 6, bVar7 = bVar3, iVar19 != 5 || ((int)local_3c != 0xffff))))))
          goto LAB_710076c644;
          if (((int)puVar12 - (int)&local_30) - 0x1fU < 0x10) goto LAB_710076c828;
          auVar23 = FUN_710076c390(param_2 + 0xc);
          if (auVar23._0_8_ == 0) goto LAB_710076c834;
          lVar15 = FUN_710081ce00(auVar23._8_8_);
          puVar8 = (undefined1 *)(auVar23._8_8_ + lVar15);
          goto LAB_710076c68c;
        }
LAB_710076c7e0:
        if (iVar20 == iVar14) {
          iVar14 = iVar20 + 1;
          puVar22 = puVar22 + 1;
          *puVar8 = 0x3a;
          if (iVar20 == 7) goto LAB_710076c678;
          puVar12 = puVar13 + 1;
          puVar8 = puVar13;
        }
        else {
          iVar14 = iVar14 + 1;
          if (iVar14 == 8) goto LAB_710076c670;
          puVar22 = puVar22 + 1;
          puVar12 = puVar8 + 1;
        }
      }
    }
    *puVar8 = 0x3a;
LAB_710076c644:
    uVar16 = *puVar22;
    iVar21 = iVar14;
    if (uVar16 != 0) goto LAB_710076c5c0;
LAB_710076c64c:
    puVar8 = (undefined1 *)FUN_710080f900(puVar12,&local_50,0);
  } while( true );
}



// ===== FUN_710076c8d0 @ 710076c8d0 (size=640) =====

ulong FUN_710076c8d0(int param_1,char *param_2,long *param_3)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  uint uVar8;
  ushort *puVar9;
  ushort *extraout_x18;
  char *pcVar10;
  ushort *puVar11;
  int local_28;
  long local_18;
  long local_10;
  undefined8 uStack_8;
  
  if (param_1 == 2) {
    uVar7 = FUN_710076c1d0(10,&local_10,param_2,param_3);
    if ((int)uVar7 == 1) {
      return (ulong)(local_10 == 3);
    }
  }
  else {
    if (param_1 != 0x1c) {
      puVar6 = (undefined4 *)FUN_710080e8e0();
      *puVar6 = 0x6a;
      return 0xffffffff;
    }
    cVar2 = *param_2;
    local_10 = 0;
    uStack_8 = 0;
    if (cVar2 == ':') {
      if (param_2[1] != ':') {
        return 0;
      }
      param_2 = param_2 + 1;
      cVar2 = ':';
    }
    else if (cVar2 == '\0') {
      return 0;
    }
    puVar9 = (ushort *)&local_10;
    puVar11 = (ushort *)0x0;
    bVar3 = false;
    uVar8 = 0;
    pcVar10 = param_2;
    do {
      pcVar10 = pcVar10 + 1;
      lVar5 = FUN_710080eb40("0123456789abcdef");
      local_28 = 0x9c59c0;
      if (lVar5 == 0) {
        local_28 = 0x9c59a0;
        lVar5 = FUN_710080eb40("0123456789ABCDEF");
        if (lVar5 != 0) goto LAB_710076c950;
        if (cVar2 != ':') {
          if (cVar2 != '.') {
            return 0;
          }
          if (&stack0x00000000 < puVar9 + 2) {
            return 0;
          }
          iVar4 = FUN_710076c1d0(10,&local_18,param_2,puVar9);
          if (iVar4 != 1) {
            return 0;
          }
          puVar9 = extraout_x18;
          if (local_18 != 3) {
            return 0;
          }
          goto LAB_710076c994;
        }
        param_2 = pcVar10;
        if (bVar3) {
          if (&stack0x00000000 < puVar9 + 1) {
            return 0;
          }
          bVar3 = false;
          *puVar9 = (ushort)(uVar8 >> 8) & 0xff | (ushort)((uVar8 & 0xff00ff) << 8);
          uVar8 = 0;
          puVar9 = puVar9 + 1;
        }
        else {
          bVar1 = puVar11 != (ushort *)0x0;
          puVar11 = puVar9;
          if (bVar1) {
            return 0;
          }
        }
      }
      else {
LAB_710076c950:
        uVar8 = (int)lVar5 - local_28 | uVar8 << 4;
        if (0xffff < uVar8) {
          return 0;
        }
        bVar3 = true;
      }
      cVar2 = *pcVar10;
    } while (cVar2 != '\0');
    if (bVar3) {
      if (&stack0x00000000 < puVar9 + 1) {
        return 0;
      }
      *puVar9 = (ushort)(uVar8 >> 8) & 0xff | (ushort)((uVar8 & 0xff00ff) << 8);
      puVar9 = puVar9 + 1;
    }
LAB_710076c994:
    if (puVar11 == (ushort *)0x0) {
      if (puVar9 != (ushort *)&stack0x00000000) {
        return 0;
      }
    }
    else {
      iVar4 = (int)puVar9 - (int)puVar11;
      if (0 < iVar4) {
        uVar7 = 0;
        do {
          *(undefined1 *)((long)&uStack_8 + uVar7 + 7) =
               *(undefined1 *)((long)puVar11 + uVar7 + (long)iVar4 + -1);
          *(undefined1 *)((long)puVar11 + uVar7 + (long)iVar4 + -1) = 0;
          uVar7 = uVar7 - 1;
        } while (~(ulong)(iVar4 - 1) != uVar7);
      }
    }
    *param_3 = local_10;
    param_3[1] = uStack_8;
    uVar7 = 1;
  }
  return uVar7;
}



// ===== FUN_710076cb50 @ 710076cb50 (size=56) =====

long FUN_710076cb50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 local_8 [2];
  
  local_8[0] = (undefined4)param_1;
  lVar1 = FUN_710076d158(param_1,local_8,param_3,0x10);
  FUN_710076c470(2);
  return lVar1 + 0x2e800;
}



// ===== FUN_710076cb90 @ 710076cb90 (size=36) =====

void FUN_710076cb90(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  FUN_710076c1d0(0,auStack_8,param_1,param_2);
  return;
}



// ===== FUN_710076cbc0 @ 710076cbc0 (size=36) =====

undefined4 FUN_710076cbc0(undefined8 param_1)

{
  undefined4 local_8 [2];
  
  local_8[0] = 0xffffffff;
  FUN_710076cb90(param_1,local_8);
  return local_8[0];
}



// ===== FUN_710076cbf0 @ 710076cbf0 (size=296) =====

undefined8 FUN_710076cbf0(uint *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  bVar1 = *param_2;
  if (-1 < (char)bVar1) {
    *param_1 = (uint)bVar1;
    return 1;
  }
  if (0xc1 < bVar1) {
    if (bVar1 < 0xe0) {
      if ((param_2[1] & 0xc0) == 0x80) {
        *param_1 = ((uint)param_2[1] + (uint)bVar1 * 0x40) - 0x3080;
        return 2;
      }
    }
    else {
      uVar3 = (uint)bVar1;
      if (uVar3 < 0xf0) {
        bVar1 = param_2[1];
        if ((((bVar1 & 0xc0) == 0x80) && (uVar3 != 0xe0 || 0x9f < bVar1)) &&
           ((param_2[2] & 0xc0) == 0x80)) {
          *param_1 = ((uint)bVar1 * 0x40 + uVar3 * 0x1000 + (uint)param_2[2]) - 0xe2080;
          return 3;
        }
      }
      else if ((((uVar3 < 0xf5) && (bVar2 = param_2[1], (bVar2 & 0xc0) == 0x80)) &&
               ((uVar3 != 0xf0 || 0x8f < bVar2 &&
                ((uVar3 != 0xf4 || bVar2 < 0x90 && ((param_2[2] & 0xc0) == 0x80)))))) &&
              ((param_2[3] & 0xc0) == 0x80)) {
        *param_1 = (uint)bVar2 * 0x1000 + (uint)bVar1 * 0x40000 + (uint)param_2[2] * 0x40 +
                   (uint)param_2[3] + 0xfc37df80;
        return 4;
      }
    }
  }
  return 0xffffffffffffffff;
}



// ===== FUN_710076cd20 @ 710076cd20 (size=308) =====

ulong FUN_710076cd20(undefined1 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  int local_4;
  
  uVar3 = 0;
  lVar1 = FUN_7100777180(&local_4,param_2);
  while( true ) {
    if (lVar1 == -1) {
      return 0xffffffffffffffff;
    }
    if (local_4 == 0) {
      return uVar3;
    }
    lVar2 = FUN_7100777240(&local_8);
    if (lVar2 == -1) {
      return 0xffffffffffffffff;
    }
    puVar4 = param_1;
    if ((param_1 != (undefined1 *)0x0) && (uVar3 + lVar2 <= param_3)) {
      *param_1 = local_8;
      if (lVar2 < 2) {
        puVar4 = param_1 + 1;
      }
      else {
        param_1[1] = local_7;
        if (lVar2 == 2) {
          puVar4 = param_1 + 2;
        }
        else {
          param_1[2] = local_6;
          if (lVar2 == 3) {
            puVar4 = param_1 + 3;
          }
          else {
            puVar4 = param_1 + 4;
            param_1[3] = local_5;
          }
        }
      }
    }
    if (0x7fffffffffffffffU - lVar2 < uVar3) break;
    uVar3 = uVar3 + lVar2;
    param_2 = param_2 + lVar1 * 2;
    if (local_4 == 0) {
      return uVar3;
    }
    lVar1 = FUN_7100777180(&local_4,param_2);
    param_1 = puVar4;
  }
  return 0xffffffffffffffff;
}



// ===== FUN_710076ce60 @ 710076ce60 (size=260) =====

ulong FUN_710076ce60(undefined2 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined2 *puVar4;
  undefined2 local_8;
  undefined2 local_6;
  int local_4;
  
  uVar3 = 0;
  lVar1 = FUN_710076cbf0(&local_4,param_2);
  while( true ) {
    if (lVar1 == -1) {
      return 0xffffffffffffffff;
    }
    if (local_4 == 0) {
      return uVar3;
    }
    lVar2 = FUN_71007771e0(&local_8);
    if (lVar2 == -1) {
      return 0xffffffffffffffff;
    }
    puVar4 = param_1;
    if ((param_1 != (undefined2 *)0x0) && (uVar3 + lVar2 <= param_3)) {
      *param_1 = local_8;
      if (lVar2 < 2) {
        puVar4 = param_1 + 1;
      }
      else {
        puVar4 = param_1 + 2;
        param_1[1] = local_6;
      }
    }
    if (0x7fffffffffffffffU - lVar2 < uVar3) break;
    uVar3 = uVar3 + lVar2;
    param_2 = param_2 + lVar1;
    if (local_4 == 0) {
      return uVar3;
    }
    lVar1 = FUN_710076cbf0(&local_4,param_2);
    param_1 = puVar4;
  }
  return 0xffffffffffffffff;
}



// ===== FUN_710076cf64 @ 710076cf64 (size=76) =====

void FUN_710076cf64(ulong param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = ctr_el0;
  lVar3 = 4L << (uVar2 >> 0x10 & 0xf);
  uVar2 = param_1 & (lVar3 - 1U ^ 0xffffffffffffffff);
  lVar1 = tpidrro_el0;
  *(undefined1 *)(lVar1 + 0x104) = 1;
  do {
    DC_CIVAC(uVar2);
    uVar2 = uVar2 + lVar3;
  } while (uVar2 < param_2 + param_1);
  UnkSytemRegWrite(0,3,3,0xf,4,0);
  *(undefined1 *)(lVar1 + 0x104) = 0;
  return;
}



// ===== FUN_710076cfb0 @ 710076cfb0 (size=20) =====

void FUN_710076cfb0(undefined8 *param_1,undefined8 param_2)

{
  CallSupervisor(1);
  *param_1 = param_2;
  return;
}



// ===== FUN_710076cfd4 @ 710076cfd4 (size=8) =====

void FUN_710076cfd4(void)

{
  CallSupervisor(4);
  return;
}



// ===== FUN_710076cfdc @ 710076cfdc (size=8) =====

void FUN_710076cfdc(void)

{
  CallSupervisor(5);
  return;
}



// ===== FUN_710076cfe4 @ 710076cfe4 (size=20) =====

void FUN_710076cfe4(undefined8 param_1,undefined4 *param_2)

{
  CallSupervisor(6);
  *param_2 = (int)param_2;
  return;
}



// ===== FUN_710076cff8 @ 710076cff8 (size=8) =====

void FUN_710076cff8(void)

{
  CallSupervisor(7);
  return;
}



// ===== FUN_710076d000 @ 710076d000 (size=20) =====

void FUN_710076d000(undefined4 *param_1,undefined4 param_2)

{
  CallSupervisor(8);
  *param_1 = param_2;
  return;
}



// ===== FUN_710076d014 @ 710076d014 (size=8) =====

void FUN_710076d014(void)

{
  CallSupervisor(9);
  return;
}



// ===== FUN_710076d01c @ 710076d01c (size=8) =====

void FUN_710076d01c(void)

{
  CallSupervisor(10);
  return;
}



// ===== FUN_710076d024 @ 710076d024 (size=8) =====

void FUN_710076d024(void)

{
  CallSupervisor(0xb);
  return;
}



// ===== FUN_710076d02c @ 710076d02c (size=8) =====

void FUN_710076d02c(void)

{
  CallSupervisor(0xf);
  return;
}



// ===== FUN_710076d034 @ 710076d034 (size=8) =====

void FUN_710076d034(void)

{
  CallSupervisor(0x12);
  return;
}



// ===== FUN_710076d03c @ 710076d03c (size=8) =====

void FUN_710076d03c(void)

{
  CallSupervisor(0x13);
  return;
}



// ===== FUN_710076d044 @ 710076d044 (size=8) =====

void FUN_710076d044(void)

{
  CallSupervisor(0x14);
  return;
}



// ===== FUN_710076d04c @ 710076d04c (size=20) =====

void FUN_710076d04c(undefined4 *param_1,undefined4 param_2)

{
  CallSupervisor(0x15);
  *param_1 = param_2;
  return;
}



// ===== FUN_710076d060 @ 710076d060 (size=8) =====

void FUN_710076d060(void)

{
  CallSupervisor(0x16);
  return;
}



// ===== FUN_710076d068 @ 710076d068 (size=8) =====

void FUN_710076d068(void)

{
  CallSupervisor(0x17);
  return;
}



// ===== FUN_710076d070 @ 710076d070 (size=20) =====

void FUN_710076d070(undefined4 *param_1,undefined4 param_2)

{
  CallSupervisor(0x18);
  *param_1 = param_2;
  return;
}



// ===== FUN_710076d08c @ 710076d08c (size=8) =====

void FUN_710076d08c(void)

{
  CallSupervisor(0x1a);
  return;
}



// ===== FUN_710076d094 @ 710076d094 (size=8) =====

void FUN_710076d094(void)

{
  CallSupervisor(0x1b);
  return;
}



// ===== FUN_710076d09c @ 710076d09c (size=8) =====

void FUN_710076d09c(void)

{
  CallSupervisor(0x1c);
  return;
}



// ===== FUN_710076d0a4 @ 710076d0a4 (size=8) =====

void FUN_710076d0a4(void)

{
  CallSupervisor(0x1d);
  return;
}



// ===== FUN_710076d0ac @ 710076d0ac (size=20) =====

void FUN_710076d0ac(undefined4 *param_1,undefined4 param_2)

{
  CallSupervisor(0x1f);
  *param_1 = param_2;
  return;
}



// ===== FUN_710076d0c0 @ 710076d0c0 (size=8) =====

void FUN_710076d0c0(void)

{
  CallSupervisor(0x21);
  return;
}



// ===== FUN_710076d0c8 @ 710076d0c8 (size=8) =====

void FUN_710076d0c8(void)

{
  CallSupervisor(0x26);
  return;
}



// ===== FUN_710076d0d8 @ 710076d0d8 (size=20) =====

void FUN_710076d0d8(undefined8 *param_1,undefined8 param_2)

{
  CallSupervisor(0x29);
  *param_1 = param_2;
  return;
}



// ===== FUN_710076d0ec @ 710076d0ec (size=24) =====

void FUN_710076d0ec(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  CallSupervisor(0x45);
  *param_1 = (int)param_2;
  *param_2 = param_3;
  return;
}



// ===== FUN_710076d104 @ 710076d104 (size=8) =====

void FUN_710076d104(void)

{
  CallSupervisor(0x52);
  return;
}



// ===== FUN_710076d10c @ 710076d10c (size=20) =====

void FUN_710076d10c(undefined4 *param_1,undefined4 param_2)

{
  CallSupervisor(0x60);
  *param_1 = param_2;
  return;
}



// ===== FUN_710076d120 @ 710076d120 (size=8) =====

void FUN_710076d120(void)

{
  CallSupervisor(99);
  return;
}



// ===== FUN_710076d128 @ 710076d128 (size=20) =====

void FUN_710076d128(undefined4 *param_1,undefined4 param_2)

{
  CallSupervisor(0x65);
  *param_1 = param_2;
  return;
}



// ===== FUN_710076d13c @ 710076d13c (size=20) =====

void FUN_710076d13c(undefined8 param_1,undefined4 *param_2)

{
  CallSupervisor(0x69);
  *param_2 = (int)param_2;
  return;
}



// ===== FUN_710076d150 @ 710076d150 (size=8) =====

void FUN_710076d150(void)

{
  CallSupervisor(0x6a);
  return;
}



// ===== FUN_710076d158 @ 710076d158 (size=12) =====

undefined8 FUN_710076d158(void)

{
  long lVar1;
  
  lVar1 = tpidrro_el0;
  return *(undefined8 *)(lVar1 + 0x1f8);
}



// ===== FUN_710076d170 @ 710076d170 (size=20) =====

void FUN_710076d170(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  param_1[4] = param_4;
  *(undefined8 *)(param_1 + 6) = 0;
  return;
}



// ===== FUN_710076d190 @ 710076d190 (size=112) =====

int FUN_710076d190(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 6) != 0) {
    return 0x759;
  }
  FUN_710074a8f0();
  uVar2 = FUN_710074a910(*(undefined8 *)(param_1 + 2),0x1000);
  iVar1 = FUN_710076d03c(*param_1,uVar2,*(undefined8 *)(param_1 + 2),param_1[4]);
  FUN_710074a900();
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 6) = uVar2;
  }
  return iVar1;
}



// ===== FUN_710076d200 @ 710076d200 (size=52) =====

void FUN_710076d200(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_710076d044(*param_1,*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 2));
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 6) = 0;
  }
  return;
}



// ===== FUN_710076d240 @ 710076d240 (size=76) =====

void FUN_710076d240(int *param_1)

{
  int iVar1;
  
  if ((*(long *)(param_1 + 6) != 0) && (iVar1 = FUN_710076d200(), iVar1 != 0)) {
    return;
  }
  if (*param_1 == 0) {
    *param_1 = 0;
  }
  else {
    FUN_710076d060();
    *param_1 = 0;
  }
  return;
}



// ===== FUN_710076d290 @ 710076d290 (size=168) =====

int FUN_710076d290(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = param_2;
  param_1[4] = param_3;
  *(undefined8 *)(param_1 + 8) = 0;
  lVar2 = FUN_71007697a0(0x1000);
  *(long *)(param_1 + 6) = lVar2;
  if (lVar2 == 0) {
    iVar1 = 0x559;
    uVar3 = 0;
  }
  else {
    FUN_7100808340(lVar2,0,param_2);
    iVar1 = FUN_710076d04c(param_1,*(undefined8 *)(param_1 + 6),param_2,param_3);
    if (iVar1 == 0) {
      return 0;
    }
    uVar3 = *(undefined8 *)(param_1 + 6);
  }
  thunk_FUN_710081c200(uVar3);
  *(undefined8 *)(param_1 + 6) = 0;
  return iVar1;
}



// ===== FUN_710076d340 @ 710076d340 (size=44) =====

undefined8 FUN_710076d340(undefined4 *param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) && ((param_2 & 0xfff) == 0)) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 2) = param_3;
    param_1[4] = param_4;
    uVar1 = FUN_710076d04c();
    return uVar1;
  }
  return 0x1759;
}



// ===== FUN_710076d370 @ 710076d370 (size=52) =====

void FUN_710076d370(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_710076d104(*param_1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 2));
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



// ===== FUN_710076d3b0 @ 710076d3b0 (size=48) =====

void FUN_710076d3b0(int *param_1)

{
  if (*param_1 == 0) {
    return;
  }
  FUN_710076d060();
  *param_1 = 0;
  return;
}



// ===== FUN_710076d3e0 @ 710076d3e0 (size=56) =====

void FUN_710076d3e0(long param_1)

{
  int iVar1;
  
  if ((*(long *)(param_1 + 0x20) == 0) || (iVar1 = FUN_710076d370(), iVar1 == 0)) {
    FUN_710076d3b0(param_1);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}



// ===== FUN_710076d420 @ 710076d420 (size=388) =====

ulong FUN_710076d420(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  int *piVar7;
  
  if (param_2 == 0) {
    return 0x1759;
  }
  uVar3 = 0x1759;
  if ((param_3 - 1 < 0x10) && (uVar3 = 0xf59, *param_1 == 0)) {
    *param_1 = param_2;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0x10] = param_3;
    param_1[0x11] = (1 << (ulong)(param_3 & 0x1f)) + -1;
    if (param_3 != 1) {
      plVar2 = (long *)tpidrro_el0;
      piVar6 = param_1 + 1;
      do {
        *plVar2 = 0x800000005;
        plVar2[2] = 0x49434653;
        plVar2[3] = 2;
        uVar3 = FUN_710076d0c0(param_2);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        if (*plVar2 < 0) {
          uVar1 = *(uint *)(plVar2 + 1);
          lVar4 = (long)plVar2 + 0x14;
          if ((uVar1 & 1) == 0) {
            lVar4 = (long)plVar2 + 0xc;
          }
          plVar5 = (long *)(lVar4 + ((ulong)(uVar1 >> 1) & 0xf) * 4);
          lVar4 = ((ulong)(uVar1 >> 5) & 0xf) << 2;
        }
        else {
          plVar5 = plVar2 + 1;
          lVar4 = 0;
        }
        uVar3 = (long)plVar5 +
                ((lVar4 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf &
                0xfffffffffffffff0;
        if (*(int *)((long)plVar2 + uVar3) != 0x4f434653) {
          return 0x5f59;
        }
        uVar1 = *(uint *)((long)plVar2 + uVar3 + 8);
        if (uVar1 != 0) {
          return (ulong)uVar1;
        }
        piVar7 = piVar6 + 1;
        *piVar6 = (int)*plVar5;
        piVar6 = piVar7;
      } while (param_1 + (ulong)(param_3 - 2) + 2 != piVar7);
    }
    uVar3 = 0;
  }
  return uVar3;
}



// ===== FUN_710076d5b0 @ 710076d5b0 (size=132) =====

void FUN_710076d5b0(int *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  
  if (*param_1 != 0) {
    uVar2 = param_1[0x10];
    *param_1 = 0;
    if (1 < uVar2) {
      lVar3 = 1;
      do {
        while (param_1[lVar3] == 0) {
          lVar3 = lVar3 + 1;
          if (uVar2 <= (uint)lVar3) {
            return;
          }
        }
        puVar1 = (undefined8 *)tpidrro_el0;
        *puVar1 = 2;
        FUN_710076d0c0();
        FUN_710076d060(param_1[lVar3]);
        param_1[lVar3] = 0;
        lVar3 = lVar3 + 1;
        uVar2 = param_1[0x10];
      } while ((uint)lVar3 < uVar2);
    }
  }
  return;
}



// ===== FUN_710076d640 @ 710076d640 (size=168) =====

uint FUN_710076d640(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  FUN_7100749670(param_1 + 0x48);
  uVar3 = *(uint *)(param_1 + 0x44);
  uVar2 = (uVar3 & 0xaaaaaaaa) >> 1 | (uVar3 & 0x55555555) << 1;
  uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
  uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  iVar1 = 0;
  if (uVar3 != 0) {
    iVar1 = (int)LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10) + 1;
  }
  if (iVar1 == 0) {
    iVar4 = *(int *)(param_1 + 0x50);
    do {
      *(int *)(param_1 + 0x50) = iVar4 + 1;
      FUN_71007774f0(param_1 + 0x4c,param_1 + 0x48,0xffffffffffffffff);
      uVar3 = *(uint *)(param_1 + 0x44);
      iVar4 = *(int *)(param_1 + 0x50) + -1;
      uVar2 = (uVar3 & 0xaaaaaaaa) >> 1 | (uVar3 & 0x55555555) << 1;
      uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      *(int *)(param_1 + 0x50) = iVar4;
      iVar1 = 0;
      if (uVar3 != 0) {
        iVar1 = (int)LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10) + 1;
      }
    } while (iVar1 == 0);
  }
  *(uint *)(param_1 + 0x44) = uVar3 & (1 << (ulong)(iVar1 - 1U & 0x1f) ^ 0xffffffffU);
  FUN_7100749740(param_1 + 0x48);
  return iVar1 - 1U;
}



// ===== FUN_710076d6f0 @ 710076d6f0 (size=96) =====

void FUN_710076d6f0(long param_1,uint param_2)

{
  FUN_7100749670(param_1 + 0x48);
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 1 << (ulong)(param_2 & 0x1f);
  if (*(int *)(param_1 + 0x50) == 0) {
    FUN_7100749740(param_1 + 0x48);
    return;
  }
  FUN_710076d0a4(param_1 + 0x4c);
  FUN_7100749740(param_1 + 0x48);
  return;
}



// ===== FUN_710076d750 @ 710076d750 (size=212) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_710076d750(void)

{
  undefined8 *puVar1;
  
  if (_DAT_7100d1894c != 0) {
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 2;
    FUN_710076d0c0(_DAT_7100d18948 & 0xffffffff);
    if (_DAT_7100d1894c != 0) {
      FUN_710076d060(_DAT_7100d18948 & 0xffffffff);
      goto joined_r0x00710076d7d8;
    }
  }
joined_r0x00710076d7d8:
  _DAT_7100d18950 = 0;
  _DAT_7100d18948 = 0;
  if (_DAT_7100d1895c != 0) {
    _DAT_7100d18950 = 0;
    _DAT_7100d18948 = 0;
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 2;
    FUN_710076d0c0(_DAT_7100d18958 & 0xffffffff);
    if (_DAT_7100d1895c != 0) {
      FUN_710076d060(_DAT_7100d18958 & 0xffffffff);
      _DAT_7100d18958 = 0;
      _DAT_7100d18960 = 0;
      return;
    }
  }
  _DAT_7100d18958 = 0;
  _DAT_7100d18960 = 0;
  return;
}



// ===== FUN_710076d830 @ 710076d830 (size=404) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_710076d830(void)

{
  uint uVar1;
  undefined2 uVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  FUN_7100749670(0x7100d18940);
  if (_DAT_7100d18944 == 0) {
    _DAT_7100d18944 = _DAT_7100d18944 + 1;
    iVar4 = FUN_710075e590(&DAT_7100d18958,0x6d7061);
    if (iVar4 == 0) {
      uVar2 = _DAT_7100d18964;
      plVar3 = (long *)tpidrro_el0;
      *plVar3 = 0x800000004;
      plVar3[2] = 0x49434653;
      plVar3[3] = 0;
      iVar4 = FUN_710076d0c0(_DAT_7100d18958);
      if (iVar4 == 0) {
        if (*plVar3 < 0) {
          uVar1 = *(uint *)(plVar3 + 1);
          lVar6 = (long)plVar3 + 0x14;
          if ((uVar1 & 1) == 0) {
            lVar6 = (long)plVar3 + 0xc;
          }
          plVar7 = (long *)(lVar6 + ((ulong)(uVar1 >> 1) & 0xf) * 4);
          lVar6 = ((ulong)(uVar1 >> 5) & 0xf) << 2;
        }
        else {
          plVar7 = plVar3 + 1;
          lVar6 = 0;
        }
        uVar5 = (long)plVar7 +
                ((lVar6 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf &
                0xfffffffffffffff0;
        if (*(int *)((long)plVar3 + uVar5) == 0x4f434653) {
          iVar4 = *(int *)((long)plVar3 + uVar5 + 8);
          if (iVar4 == 0) {
            _DAT_7100d18948 = (int)*plVar7;
            if (_DAT_7100d18948 == 0) {
              iVar4 = 0;
              _DAT_7100d18948 = 0;
              _DAT_7100d1894c = 0;
              _DAT_7100d18950 = 0;
              _DAT_7100d18954 = 0;
              uRam0000007100d18956 = 0;
            }
            else {
              iVar4 = 0;
              _DAT_7100d1894c = 1;
              _DAT_7100d18950 = 0;
              _DAT_7100d18954 = uVar2;
            }
            goto LAB_710076d8a4;
          }
        }
        else {
          iVar4 = 0x5f59;
        }
      }
    }
    FUN_710076d750();
    _DAT_7100d18944 = _DAT_7100d18944 + -1;
  }
  else {
    iVar4 = 0;
    _DAT_7100d18944 = _DAT_7100d18944 + 1;
  }
LAB_710076d8a4:
  FUN_7100749740(0x7100d18940);
  return iVar4;
}



// ===== FUN_710076d9d0 @ 710076d9d0 (size=72) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710076d9d0(void)

{
  FUN_7100749670();
  if (_DAT_7100d18944 != 0) {
    _DAT_7100d18944 = _DAT_7100d18944 + -1;
    if (_DAT_7100d18944 == 0) {
      FUN_710076d750();
    }
  }
  FUN_7100749740(0x7100d18940);
  return;
}



// ===== FUN_710076da20 @ 710076da20 (size=200) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710076da20(ulong param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0xa00000004;
  plVar2[4] = param_1 & 0xffffffff | param_2 << 0x20;
  plVar2[2] = 0x49434653;
  plVar2[3] = 0;
  uVar3 = FUN_710076d0c0(_DAT_7100d18948);
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



// ===== FUN_710076daf0 @ 710076daf0 (size=244) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_710076daf0(void)

{
  undefined8 *puVar1;
  
  DAT_7100af3890 = 0;
  FUN_710076d5b0(0x7100d189a0);
  if (_DAT_7100d189fc != 0) {
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 2;
    FUN_710076d0c0(_DAT_7100d189f8 & 0xffffffff);
    if (_DAT_7100d189fc != 0) {
      FUN_710076d060(_DAT_7100d189f8 & 0xffffffff);
      goto joined_r0x00710076db94;
    }
  }
joined_r0x00710076db94:
  _DAT_7100d18a00 = 0;
  _DAT_7100d189f8 = 0;
  if (_DAT_7100d18a0c != 0) {
    _DAT_7100d18a00 = 0;
    _DAT_7100d189f8 = 0;
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 2;
    FUN_710076d0c0(_DAT_7100d18a08 & 0xffffffff);
    if (_DAT_7100d18a0c != 0) {
      FUN_710076d060(_DAT_7100d18a08 & 0xffffffff);
      _DAT_7100d18a08 = 0;
      _DAT_7100d18a10 = 0;
      FUN_710076d3e0(&DAT_7100d18970);
      return;
    }
  }
  _DAT_7100d18a08 = 0;
  _DAT_7100d18a10 = 0;
  FUN_710076d3e0(&DAT_7100d18970);
  return;
}



// ===== FUN_710076dbf0 @ 710076dbf0 (size=324) =====

ulong FUN_710076dbf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auVar11 [12];
  
  plVar2 = (long *)tpidrro_el0;
  *(undefined4 *)(plVar2 + 5) = param_3;
  *(undefined4 *)(plVar2 + 3) = param_4;
  *(undefined4 *)((long)plVar2 + 0x1c) = 0;
  *plVar2 = 0xb00000004;
  plVar2[2] = 0x49434653;
  plVar2[4] = CONCAT44(param_2,param_1);
  iVar3 = FUN_710076d640(0x7100d189a0);
  iVar4 = FUN_710076d0c0(*(undefined4 *)((long)iVar3 * 4 + 0x7100d189a0));
  uVar5 = FUN_710076d6f0(0x7100d189a0,iVar3);
  if (iVar4 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar6 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar6 = (long *)((long)plVar2 + 0xc);
      }
      lVar9 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar2 + 1;
      lVar9 = 0;
    }
    uVar7 = (long)plVar6 + ((lVar9 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar5 = 0x4f434653;
    if (*(int *)((long)plVar2 + uVar7) != 0x4f434653) {
      uVar8 = 0xffffffff;
      iVar4 = 0x5f59;
      uVar10 = 0xffffffff;
      goto LAB_710076dccc;
    }
    iVar4 = *(int *)((long)plVar2 + uVar7 + 8);
    if (iVar4 == 0) {
      uVar1 = *(uint *)((long)plVar2 + uVar7 + 0x10);
      uVar10 = (ulong)uVar1;
      uVar8 = 0;
      if ((int)uVar1 < 0) {
        uVar8 = *(undefined4 *)((long)plVar2 + uVar7 + 0x14);
      }
      goto LAB_710076dccc;
    }
  }
  uVar8 = 0xffffffff;
  uVar10 = 0xffffffff;
LAB_710076dccc:
  auVar11 = FUN_710076d158(uVar5,uVar8,uVar10);
  *(int *)(auVar11._0_8_ + 0x2e814) = iVar4;
  *(int *)(auVar11._0_8_ + 0x2e810) = auVar11._8_4_;
  return uVar10 & 0xffffffff;
}



// ===== FUN_710076dd40 @ 710076dd40 (size=492) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710076dd40(undefined4 param_1,undefined8 param_2,uint *param_3,undefined4 param_4)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined2 uVar10;
  uint uVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  
  uVar6 = (uint)_DAT_7100d18a14;
  if (param_3 == (uint *)0x0) {
    uVar11 = 0;
    puVar8 = (undefined8 *)tpidrro_el0;
    if (uVar6 != 0) goto LAB_710076df08;
LAB_710076dd84:
    uVar13 = (undefined4)param_2;
    uVar6 = (uint)((ulong)param_2 >> 0x20);
    uVar9 = uVar6 >> 4 & 0x3fffff;
    uVar6 = uVar6 & 0xf;
    param_2 = 0;
    uVar10 = 0;
    uVar12 = 0;
  }
  else {
    uVar11 = *param_3;
    puVar8 = (undefined8 *)tpidrro_el0;
    if (uVar6 == 0 || uVar6 < uVar11) goto LAB_710076dd84;
LAB_710076df08:
    uVar12 = (undefined2)uVar11;
    uVar10 = (undefined2)((ulong)param_2 >> 0x20);
    uVar13 = 0;
    uVar11 = 0;
    uVar9 = 0;
    uVar6 = 0;
  }
  *(int *)((long)puVar8 + 0x3c) = (int)param_2;
  *(uint *)(puVar8 + 1) = uVar11;
  *(undefined4 *)((long)puVar8 + 0xc) = uVar13;
  *puVar8 = 0xc0a01000004;
  *(undefined4 *)(puVar8 + 5) = param_4;
  *(undefined4 *)((long)puVar8 + 0x2c) = 0;
  *(uint *)(puVar8 + 2) = uVar9 << 2 | uVar6 << 0x1c;
  puVar8[4] = 0x49434653;
  *(undefined4 *)(puVar8 + 6) = param_1;
  *(undefined2 *)(puVar8 + 7) = uVar12;
  *(undefined2 *)(puVar8 + 8) = uVar10;
  *(undefined2 *)((long)puVar8 + 0x42) = uVar12;
  iVar2 = FUN_710076d640(0x7100d189a0);
  iVar3 = FUN_710076d0c0(*(undefined4 *)((long)iVar2 * 4 + 0x7100d189a0));
  FUN_710076d6f0(0x7100d189a0,iVar2);
  if (iVar3 == 0) {
    plVar1 = (long *)tpidrro_el0;
    if (*plVar1 < 0) {
      uVar6 = *(uint *)(plVar1 + 1);
      plVar4 = (long *)((long)plVar1 + 0x14);
      if ((uVar6 & 1) == 0) {
        plVar4 = (long *)((long)plVar1 + 0xc);
      }
      lVar7 = (((ulong)(uVar6 >> 5) & 0xf) + ((ulong)(uVar6 >> 1) & 0xf)) * 4;
    }
    else {
      plVar4 = plVar1 + 1;
      lVar7 = 0;
    }
    uVar5 = (long)plVar4 + ((lVar7 + (ulong)((uint)*plVar1 >> 0x10 & 0xf) * 8) - (long)plVar1) + 0xf
            & 0xfffffffffffffff0;
    if (*(int *)((long)plVar1 + uVar5) != 0x4f434653) {
      iVar3 = 0x5f59;
      iVar2 = -1;
      goto LAB_710076de74;
    }
    iVar3 = *(int *)((long)plVar1 + uVar5 + 8);
    if (iVar3 == 0) {
      if ((-1 < *(int *)((long)plVar1 + uVar5 + 0x10)) ||
         (iVar2 = *(int *)((long)plVar1 + uVar5 + 0x14), iVar2 == 0)) {
        if (param_3 != (uint *)0x0) {
          *param_3 = *(uint *)((long)plVar1 + uVar5 + 0x18);
        }
        iVar2 = 0;
      }
      goto LAB_710076de74;
    }
  }
  iVar2 = -1;
LAB_710076de74:
  auVar14 = FUN_710076d158();
  *(int *)(auVar14._0_8_ + 0x2e814) = iVar3;
  *(int *)(auVar14._0_8_ + 0x2e810) = iVar2;
  return auVar14._8_8_ & 0xffffffff;
}



// ===== FUN_710076df30 @ 710076df30 (size=428) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710076df30(undefined4 param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined2 uVar15;
  undefined1 auVar16 [12];
  
  uVar10 = (uint)((ulong)param_2 >> 0x20);
  uVar11 = uVar10 & 0xf;
  puVar1 = (undefined8 *)tpidrro_el0;
  uVar10 = uVar10 >> 4;
  if (_DAT_7100d18a14 == 0 || _DAT_7100d18a14 <= param_3 && param_3 != _DAT_7100d18a14) {
    uVar14 = (undefined4)param_2;
    uVar10 = uVar10 & 0x3fffff;
    uVar13 = 0;
    uVar15 = 0;
    param_2 = 0;
    uVar12 = uVar11;
    uVar11 = 0;
  }
  else {
    uVar13 = uVar10 & 0x3f;
    uVar15 = (undefined2)param_3;
    param_3 = 0;
    uVar14 = 0;
    uVar10 = 0;
    uVar12 = 0;
  }
  *(undefined4 *)(puVar1 + 5) = param_4;
  *(undefined4 *)((long)puVar1 + 0x2c) = 0;
  *(int *)((long)puVar1 + 0xc) = (int)param_2;
  *(uint *)(puVar1 + 2) = param_3;
  *puVar1 = 0x900110004;
  *(undefined2 *)((long)puVar1 + 10) = uVar15;
  *(undefined4 *)((long)puVar1 + 0x14) = uVar14;
  *(uint *)(puVar1 + 3) = uVar10 << 2 | uVar12 << 0x1c;
  puVar1[4] = 0x49434653;
  *(ushort *)(puVar1 + 1) = (ushort)(uVar13 << 6) | (ushort)(uVar11 << 0xc);
  *(undefined4 *)(puVar1 + 6) = param_1;
  iVar3 = FUN_710076d640(0x7100d189a0);
  iVar4 = FUN_710076d0c0(*(undefined4 *)((long)iVar3 * 4 + 0x7100d189a0));
  uVar5 = FUN_710076d6f0(0x7100d189a0,iVar3);
  if (iVar4 == 0) {
    plVar2 = (long *)tpidrro_el0;
    if (*plVar2 < 0) {
      uVar10 = *(uint *)(plVar2 + 1);
      plVar6 = (long *)((long)plVar2 + 0x14);
      if ((uVar10 & 1) == 0) {
        plVar6 = (long *)((long)plVar2 + 0xc);
      }
      lVar9 = (((ulong)(uVar10 >> 1) & 0xf) + ((ulong)(uVar10 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar2 + 1;
      lVar9 = 0;
    }
    uVar7 = (long)plVar6 + ((lVar9 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar5 = 0x4f434653;
    if (*(int *)((long)plVar2 + uVar7) != 0x4f434653) {
      uVar14 = 0xffffffff;
      iVar4 = 0x5f59;
      uVar8 = 0xffffffff;
      goto LAB_710076e058;
    }
    iVar4 = *(int *)((long)plVar2 + uVar7 + 8);
    if (iVar4 == 0) {
      uVar10 = *(uint *)((long)plVar2 + uVar7 + 0x10);
      uVar8 = (ulong)uVar10;
      uVar14 = 0;
      if ((int)uVar10 < 0) {
        uVar14 = *(undefined4 *)((long)plVar2 + uVar7 + 0x14);
      }
      goto LAB_710076e058;
    }
  }
  uVar14 = 0xffffffff;
  uVar8 = 0xffffffff;
LAB_710076e058:
  auVar16 = FUN_710076d158(uVar5,uVar14,uVar8);
  *(int *)(auVar16._0_8_ + 0x2e814) = iVar4;
  *(int *)(auVar16._0_8_ + 0x2e810) = auVar16._8_4_;
  return uVar8 & 0xffffffff;
}



// ===== FUN_710076e0e0 @ 710076e0e0 (size=292) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710076e0e0(long *param_1)

{
  uint uVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  lVar8 = _DAT_7100d18978;
  lVar11 = *param_1;
  lVar12 = param_1[1];
  lVar10 = param_1[3];
  lVar9 = param_1[2];
  plVar2 = (long *)tpidrro_el0;
  *(undefined4 *)((long)plVar2 + 0x14) = _DAT_7100d18970;
  *plVar2 = -0x7fffffebfffffffc;
  *(undefined4 *)(plVar2 + 1) = 3;
  plVar2[4] = 0x49434653;
  plVar2[5] = 0;
  plVar2[6] = lVar11;
  plVar2[7] = lVar12;
  plVar2[9] = lVar10;
  plVar2[8] = lVar9;
  uVar3 = _DAT_7100d18a08;
  plVar2[0xb] = lVar8;
  plVar2[10] = 0;
  puVar4 = (undefined *)FUN_710076d0c0(uVar3);
  uVar7 = (ulong)puVar4 & 0xffffffff;
  if ((int)puVar4 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar5 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar5 = (long *)((long)plVar2 + 0xc);
      }
      lVar8 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar5 = plVar2 + 1;
      lVar8 = 0;
    }
    uVar7 = 0x5f59;
    uVar6 = (long)plVar5 + ((lVar8 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    puVar4 = (undefined *)0x4f434653;
    if ((*(int *)((long)plVar2 + uVar6) == 0x4f434653) &&
       (uVar1 = *(uint *)((long)plVar2 + uVar6 + 8), uVar7 = (ulong)uVar1, uVar1 == 0)) {
      DAT_7100af3890 = *(undefined8 *)((long)plVar2 + uVar6 + 0x10);
      puVar4 = &DAT_7100af3000;
    }
  }
  auVar13 = FUN_710076d158(puVar4,uVar7);
  *(undefined4 *)(auVar13._0_8_ + 0x2e810) = 0;
  *(int *)(auVar13._0_8_ + 0x2e814) = auVar13._8_4_;
  return auVar13._8_8_ & 0xffffffff;
}



// ===== FUN_710076e210 @ 710076e210 (size=856) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_710076e210(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  FUN_7100749670(0x7100d18968);
  iVar5 = _DAT_7100d1896c + 1;
  bVar1 = _DAT_7100d1896c != 0;
  _DAT_7100d1896c = iVar5;
  if (bVar1) goto LAB_710076e250;
  puVar2 = (undefined4 *)&UNK_71009c59f8;
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = param_1;
  }
  iVar5 = 0x1759;
  if ((param_3 >> 1 & 1) == 0) {
LAB_710076e294:
    if ((param_3 & 1) == 0) goto LAB_710076e298;
    uVar10 = 0x753a647362;
    iVar5 = FUN_710075e590(&DAT_7100d18a08,0x753a647362);
    if (iVar5 != 0) goto LAB_710076e298;
  }
  else {
    uVar10 = 0x733a647362;
    iVar5 = FUN_710075e590(&DAT_7100d18a08,0x733a647362);
    if (iVar5 != 0) goto LAB_710076e294;
  }
  iVar5 = FUN_710075e590(&DAT_7100d189f8,uVar10);
  if (iVar5 == 0) {
    iVar5 = puVar2[8];
    if (iVar5 == 0) {
      iVar5 = puVar2[6];
    }
    iVar9 = puVar2[9];
    if (iVar9 == 0) {
      iVar9 = puVar2[7];
    }
    uVar8 = (ulong)((puVar2[10] + puVar2[0xb] + iVar9 + iVar5 + 0xfff & 0xfffff000U) * puVar2[0xc]);
    if ((*(long *)(puVar2 + 2) == 0) || (*(ulong *)(puVar2 + 4) < uVar8)) {
      iVar5 = FUN_710076d290(&DAT_7100d18970,uVar8,0);
    }
    else {
      iVar5 = FUN_710076d340(&DAT_7100d18970,*(long *)(puVar2 + 2),*(ulong *)(puVar2 + 4),0);
    }
    if (iVar5 == 0) {
      local_20 = *puVar2;
      local_1c = puVar2[6];
      local_18 = *(undefined8 *)(puVar2 + 7);
      local_10 = *(undefined8 *)(puVar2 + 9);
      local_8 = *(undefined8 *)(puVar2 + 0xb);
      iVar5 = FUN_710076e0e0(&local_20);
      lVar6 = DAT_7100af3890;
      if (iVar5 == 0) {
        plVar4 = (long *)tpidrro_el0;
        *plVar4 = -0x7ffffff5fffffffc;
        *(undefined4 *)(plVar4 + 1) = 1;
        plVar4[6] = lVar6;
        plVar4[4] = 0x49434653;
        plVar4[5] = 1;
        iVar5 = FUN_710076d0c0(_DAT_7100d189f8);
        if (iVar5 == 0) {
          if (*plVar4 < 0) {
            uVar3 = *(uint *)(plVar4 + 1);
            plVar7 = (long *)((long)plVar4 + 0x14);
            if ((uVar3 & 1) == 0) {
              plVar7 = (long *)((long)plVar4 + 0xc);
            }
            lVar6 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
          }
          else {
            plVar7 = plVar4 + 1;
            lVar6 = 0;
          }
          uVar8 = (long)plVar7 +
                  ((lVar6 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
                  0xfffffffffffffff0;
          if (*(int *)((long)plVar4 + uVar8) == 0x4f434653) {
            iVar5 = *(int *)((long)plVar4 + uVar8 + 8);
            lVar6 = FUN_710076d158();
            *(undefined4 *)(lVar6 + 0x2e810) = 0;
            *(int *)(lVar6 + 0x2e814) = iVar5;
            if ((iVar5 == 0) &&
               (iVar5 = FUN_710076d420(0x7100d189a0,_DAT_7100d18a08,param_2), iVar5 == 0)) {
LAB_710076e250:
              FUN_7100749740(0x7100d18968);
              return 0;
            }
          }
          else {
            lVar6 = FUN_710076d158();
            iVar5 = 0x5f59;
            *(undefined4 *)(lVar6 + 0x2e814) = 0x5f59;
            *(undefined4 *)(lVar6 + 0x2e810) = 0;
          }
        }
        else {
          lVar6 = FUN_710076d158();
          *(int *)(lVar6 + 0x2e814) = iVar5;
          *(undefined4 *)(lVar6 + 0x2e810) = 0;
        }
      }
    }
  }
LAB_710076e298:
  FUN_710076daf0();
  _DAT_7100d1896c = _DAT_7100d1896c + -1;
  FUN_7100749740(0x7100d18968);
  return iVar5;
}



// ===== FUN_710076e570 @ 710076e570 (size=72) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710076e570(void)

{
  FUN_7100749670();
  if (_DAT_7100d1896c != 0) {
    _DAT_7100d1896c = _DAT_7100d1896c + -1;
    if (_DAT_7100d1896c == 0) {
      FUN_710076daf0();
    }
  }
  FUN_7100749740(0x7100d18968);
  return;
}



// ===== FUN_710076e5c0 @ 710076e5c0 (size=8) =====

void FUN_710076e5c0(void)

{
  FUN_710076dbf0();
  return;
}



// ===== FUN_710076e5d0 @ 710076e5d0 (size=456) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710076e5d0(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auVar17 [12];
  
  lVar5 = FUN_710081ce00();
  uVar6 = lVar5 + 1;
  uVar11 = (uint)((ulong)param_1 >> 0x20);
  uVar13 = uVar11 & 0xf;
  puVar1 = (undefined8 *)tpidrro_el0;
  uVar11 = uVar11 >> 4;
  if (_DAT_7100d18a14 == 0 || _DAT_7100d18a14 < uVar6) {
    uVar15 = (undefined4)param_1;
    uVar16 = (undefined4)uVar6;
    uVar9 = (uint)(uVar6 >> 0x20) & 0xf;
    uVar11 = uVar11 & 0x3fffff;
    uVar14 = 0;
    uVar6 = 0;
    param_1 = 0;
    uVar12 = uVar13;
    uVar13 = 0;
  }
  else {
    uVar14 = uVar11 & 0x3f;
    uVar16 = 0;
    uVar15 = 0;
    uVar11 = 0;
    uVar9 = 0;
    uVar12 = 0;
  }
  *(short *)((long)puVar1 + 10) = (short)uVar6;
  *(undefined4 *)(puVar1 + 6) = param_2;
  puVar1[4] = 0x49434653;
  puVar1[5] = 4;
  *(int *)((long)puVar1 + 0xc) = (int)param_1;
  *(undefined4 *)(puVar1 + 2) = uVar16;
  *puVar1 = 0x900110004;
  *(ushort *)(puVar1 + 1) = (ushort)(uVar14 << 6) | (ushort)(uVar13 << 0xc);
  *(undefined4 *)((long)puVar1 + 0x14) = uVar15;
  *(uint *)(puVar1 + 3) = uVar11 << 2 | uVar9 << 0x18 | uVar12 << 0x1c;
  iVar3 = FUN_710076d640(0x7100d189a0);
  iVar4 = FUN_710076d0c0(*(undefined4 *)((long)iVar3 * 4 + 0x7100d189a0));
  uVar7 = FUN_710076d6f0(0x7100d189a0,iVar3);
  if (iVar4 == 0) {
    plVar2 = (long *)tpidrro_el0;
    if (*plVar2 < 0) {
      uVar11 = *(uint *)(plVar2 + 1);
      plVar8 = (long *)((long)plVar2 + 0x14);
      if ((uVar11 & 1) == 0) {
        plVar8 = (long *)((long)plVar2 + 0xc);
      }
      lVar5 = (((ulong)(uVar11 >> 1) & 0xf) + ((ulong)(uVar11 >> 5) & 0xf)) * 4;
    }
    else {
      plVar8 = plVar2 + 1;
      lVar5 = 0;
    }
    uVar6 = (long)plVar8 + ((lVar5 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar7 = 0x4f434653;
    if (*(int *)((long)plVar2 + uVar6) != 0x4f434653) {
      uVar15 = 0xffffffff;
      iVar4 = 0x5f59;
      uVar10 = 0xffffffff;
      goto LAB_710076e714;
    }
    iVar4 = *(int *)((long)plVar2 + uVar6 + 8);
    if (iVar4 == 0) {
      uVar11 = *(uint *)((long)plVar2 + uVar6 + 0x10);
      uVar10 = (ulong)uVar11;
      uVar15 = 0;
      if ((int)uVar11 < 0) {
        uVar15 = *(undefined4 *)((long)plVar2 + uVar6 + 0x14);
      }
      goto LAB_710076e714;
    }
  }
  uVar15 = 0xffffffff;
  uVar10 = 0xffffffff;
LAB_710076e714:
  auVar17 = FUN_710076d158(uVar7,uVar15,uVar10);
  *(int *)(auVar17._0_8_ + 0x2e814) = iVar4;
  *(int *)(auVar17._0_8_ + 0x2e810) = auVar17._8_4_;
  return uVar10 & 0xffffffff;
}



// ===== FUN_710076e7a0 @ 710076e7a0 (size=592) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710076e7a0(undefined8 param_1,ulong param_2,long param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  undefined2 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined2 uVar22;
  undefined1 auVar23 [12];
  
  uVar8 = param_2 << 3;
  uVar10 = uVar8 & 0x7fffffff8;
  uVar19 = (undefined4)uVar8;
  uVar18 = (undefined4)param_1;
  uVar13 = (undefined2)((ulong)param_1 >> 0x20);
  uVar9 = (uint)((ulong)param_1 >> 0x20);
  uVar12 = uVar9 & 0xf;
  puVar2 = (undefined8 *)tpidrro_el0;
  uVar9 = uVar9 >> 4;
  iVar5 = (int)(uVar10 >> 0x20);
  if (_DAT_7100d18a14 != 0 && uVar10 <= _DAT_7100d18a14) {
    uVar17 = uVar9 & 0x3f;
    uVar22 = (undefined2)uVar8;
    bVar1 = uVar10 <= (uint)_DAT_7100d18a14 - (uint)uVar10 && (uint)_DAT_7100d18a14 != (uint)uVar10;
    uVar21 = 0;
    param_1 = 0;
    uVar15 = 0;
    iVar4 = 0;
    uVar14 = 0;
    uVar16 = uVar12;
    uVar20 = uVar18;
  }
  else {
    uVar15 = uVar9 & 0x3fffff;
    bVar1 = _DAT_7100d18a14 != 0 && uVar10 <= _DAT_7100d18a14;
    uVar17 = 0;
    uVar22 = 0;
    iVar4 = iVar5;
    uVar16 = 0;
    uVar14 = uVar12;
    uVar20 = 0;
    uVar21 = uVar19;
  }
  *(undefined2 *)((long)puVar2 + 10) = uVar22;
  puVar2[6] = 0x49434653;
  puVar2[7] = 6;
  *(ushort *)(puVar2 + 1) = (ushort)(uVar17 << 6) | (ushort)(uVar16 << 0xc);
  *puVar2 = 0xc0b01110004;
  *(undefined4 *)((long)puVar2 + 0xc) = uVar20;
  *(undefined4 *)(puVar2 + 2) = uVar21;
  *(int *)((long)puVar2 + 0x14) = (int)param_1;
  *(uint *)(puVar2 + 3) = uVar15 << 2 | iVar4 << 0x18 | uVar14 << 0x1c;
  if (bVar1) {
    uVar19 = 0;
    uVar20 = 0;
    uVar9 = 0;
    iVar5 = 0;
    uVar12 = 0;
  }
  else {
    uVar9 = uVar9 & 0x3fffff;
    uVar13 = 0;
    uVar10 = 0;
    uVar20 = uVar18;
    uVar18 = 0;
  }
  *(undefined4 *)((long)puVar2 + 0x1c) = uVar19;
  *(undefined4 *)(puVar2 + 4) = uVar20;
  puVar2[8] = param_2 & 0xffffffff | param_3 << 0x20;
  *(short *)(puVar2 + 10) = (short)uVar10;
  *(undefined4 *)((long)puVar2 + 0x54) = uVar18;
  *(undefined2 *)(puVar2 + 0xb) = uVar13;
  *(uint *)((long)puVar2 + 0x24) = uVar9 << 2 | iVar5 << 0x18 | uVar12 << 0x1c;
  *(short *)((long)puVar2 + 0x5a) = (short)uVar10;
  iVar4 = FUN_710076d640(0x7100d189a0);
  iVar5 = FUN_710076d0c0(*(undefined4 *)((long)iVar4 * 4 + 0x7100d189a0));
  uVar6 = FUN_710076d6f0(0x7100d189a0,iVar4);
  if (iVar5 == 0) {
    plVar3 = (long *)tpidrro_el0;
    if (*plVar3 < 0) {
      uVar9 = *(uint *)(plVar3 + 1);
      plVar7 = (long *)((long)plVar3 + 0x14);
      if ((uVar9 & 1) == 0) {
        plVar7 = (long *)((long)plVar3 + 0xc);
      }
      lVar11 = (((ulong)(uVar9 >> 1) & 0xf) + ((ulong)(uVar9 >> 5) & 0xf)) * 4;
    }
    else {
      plVar7 = plVar3 + 1;
      lVar11 = 0;
    }
    uVar8 = (long)plVar7 +
            ((lVar11 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf &
            0xfffffffffffffff0;
    uVar6 = 0x4f434653;
    if (*(int *)((long)plVar3 + uVar8) != 0x4f434653) {
      uVar19 = 0xffffffff;
      iVar5 = 0x5f59;
      uVar10 = 0xffffffff;
      goto LAB_710076e934;
    }
    iVar5 = *(int *)((long)plVar3 + uVar8 + 8);
    if (iVar5 == 0) {
      uVar9 = *(uint *)((long)plVar3 + uVar8 + 0x10);
      uVar10 = (ulong)uVar9;
      uVar19 = 0;
      if ((int)uVar9 < 0) {
        uVar19 = *(undefined4 *)((long)plVar3 + uVar8 + 0x14);
      }
      goto LAB_710076e934;
    }
  }
  uVar19 = 0xffffffff;
  uVar10 = 0xffffffff;
LAB_710076e934:
  auVar23 = FUN_710076d158(uVar6,uVar19,uVar10);
  *(int *)(auVar23._0_8_ + 0x2e814) = iVar5;
  *(int *)(auVar23._0_8_ + 0x2e810) = auVar23._8_4_;
  return uVar10 & 0xffffffff;
}



// ===== FUN_710076e9f0 @ 710076e9f0 (size=444) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_710076e9f0(ulong param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  
  uVar12 = (undefined2)((ulong)param_2 >> 0x20);
  puVar1 = (undefined8 *)tpidrro_el0;
  if (_DAT_7100d18a14 == 0 || _DAT_7100d18a14 < param_3) {
    uVar13 = (undefined4)param_2;
    uVar14 = (undefined4)param_3;
    uVar8 = (uint)((ulong)param_2 >> 0x20);
    uVar11 = uVar8 >> 4 & 0x3fffff;
    uVar10 = (uint)(param_3 >> 0x20) & 0xf;
    uVar8 = uVar8 & 0xf;
    param_2 = 0;
    uVar12 = 0;
    param_3 = 0;
  }
  else {
    uVar14 = 0;
    uVar13 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar8 = 0;
  }
  *(int *)(puVar1 + 8) = (int)param_2;
  *(undefined4 *)(puVar1 + 1) = uVar14;
  *(undefined4 *)((long)puVar1 + 0xc) = uVar13;
  *puVar1 = 0xc0b01000004;
  puVar1[6] = param_1 & 0xffffffff | param_4 << 0x20;
  *(uint *)(puVar1 + 2) = uVar11 << 2 | uVar10 << 0x18 | uVar8 << 0x1c;
  puVar1[4] = 0x49434653;
  puVar1[5] = 8;
  *(short *)((long)puVar1 + 0x3c) = (short)param_3;
  *(undefined2 *)((long)puVar1 + 0x44) = uVar12;
  *(short *)((long)puVar1 + 0x46) = (short)param_3;
  iVar3 = FUN_710076d640(0x7100d189a0);
  iVar4 = FUN_710076d0c0(*(undefined4 *)((long)iVar3 * 4 + 0x7100d189a0));
  uVar5 = FUN_710076d6f0(0x7100d189a0,iVar3);
  if (iVar4 == 0) {
    plVar2 = (long *)tpidrro_el0;
    if (*plVar2 < 0) {
      uVar8 = *(uint *)(plVar2 + 1);
      plVar6 = (long *)((long)plVar2 + 0x14);
      if ((uVar8 & 1) == 0) {
        plVar6 = (long *)((long)plVar2 + 0xc);
      }
      lVar9 = (((ulong)(uVar8 >> 1) & 0xf) + ((ulong)(uVar8 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar2 + 1;
      lVar9 = 0;
    }
    uVar7 = (long)plVar6 + ((lVar9 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar5 = 0x4f434653;
    if (*(int *)((long)plVar2 + uVar7) != 0x4f434653) {
      lVar9 = -1;
      iVar4 = 0x5f59;
      uVar13 = 0xffffffff;
      goto LAB_710076eb30;
    }
    iVar4 = *(int *)((long)plVar2 + uVar7 + 8);
    if (iVar4 == 0) {
      uVar8 = *(uint *)((long)plVar2 + uVar7 + 0x10);
      uVar5 = (ulong)uVar8;
      uVar13 = 0;
      lVar9 = (long)(int)uVar8;
      if ((int)uVar8 < 0) {
        uVar13 = *(undefined4 *)((long)plVar2 + uVar7 + 0x14);
      }
      goto LAB_710076eb30;
    }
  }
  lVar9 = -1;
  uVar13 = 0xffffffff;
LAB_710076eb30:
  auVar15 = FUN_710076d158(uVar5,lVar9);
  *(int *)(auVar15._0_8_ + 0x2e814) = iVar4;
  *(undefined4 *)(auVar15._0_8_ + 0x2e810) = uVar13;
  return auVar15._8_8_;
}



// ===== FUN_710076ebb0 @ 710076ebb0 (size=616) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_710076ebb0(ulong param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5,
              uint *param_6)

{
  undefined8 *puVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined1 auVar19 [16];
  
  uVar13 = (uint)_DAT_7100d18a14;
  uVar12 = 0;
  if (param_6 != (uint *)0x0) {
    uVar12 = *param_6;
  }
  bVar3 = _DAT_7100d18a14 != 0;
  uVar17 = (uint)param_3;
  uVar18 = (undefined4)param_2;
  uVar15 = (undefined2)((ulong)param_2 >> 0x20);
  puVar1 = (undefined8 *)tpidrro_el0;
  if (bVar3 && param_3 <= _DAT_7100d18a14) {
    bVar3 = _DAT_7100d18a14 != uVar17;
    uVar13 = _DAT_7100d18a14 - uVar17;
    uVar16 = (undefined2)param_3;
    uVar17 = 0;
    uVar18 = 0;
    uVar14 = 0;
    uVar10 = 0;
    uVar9 = 0;
  }
  else {
    uVar9 = (uint)((ulong)param_2 >> 0x20);
    uVar14 = uVar9 >> 4 & 0x3fffff;
    uVar9 = uVar9 & 0xf;
    uVar10 = (uint)(param_3 >> 0x20) & 0xf;
    param_2 = 0;
    uVar15 = 0;
    uVar16 = 0;
  }
  *(int *)((long)puVar1 + 0x4c) = (int)param_2;
  *(uint *)(puVar1 + 1) = uVar17;
  *(undefined4 *)((long)puVar1 + 0xc) = uVar18;
  *(undefined2 *)(puVar1 + 9) = uVar16;
  *puVar1 = 0x100b02000004;
  *(undefined2 *)(puVar1 + 10) = uVar15;
  uVar18 = (undefined4)param_5;
  *(uint *)(puVar1 + 2) = uVar14 << 2 | uVar10 << 0x18 | uVar9 << 0x1c;
  uVar15 = (undefined2)((ulong)param_5 >> 0x20);
  puVar1[4] = 0x49434653;
  puVar1[5] = 9;
  *(undefined2 *)((long)puVar1 + 0x52) = uVar16;
  uVar17 = (uint)((ulong)param_5 >> 0x20);
  if (bVar3 && uVar12 <= uVar13) {
    uVar18 = 0;
    uVar13 = 0;
    uVar9 = 0;
    uVar17 = 0;
  }
  else {
    uVar9 = uVar17 >> 4 & 0x3fffff;
    uVar17 = uVar17 & 0xf;
    param_5 = 0;
    uVar15 = 0;
    uVar13 = uVar12;
    uVar12 = 0;
  }
  *(uint *)((long)puVar1 + 0x14) = uVar13;
  *(undefined4 *)(puVar1 + 3) = uVar18;
  puVar1[6] = param_1 & 0xffffffff | param_4 << 0x20;
  *(short *)((long)puVar1 + 0x4a) = (short)uVar12;
  *(uint *)((long)puVar1 + 0x1c) = uVar9 << 2 | uVar17 << 0x1c;
  *(int *)((long)puVar1 + 0x54) = (int)param_5;
  *(undefined2 *)(puVar1 + 0xb) = uVar15;
  *(short *)((long)puVar1 + 0x5a) = (short)uVar12;
  iVar4 = FUN_710076d640(0x7100d189a0);
  iVar5 = FUN_710076d0c0(*(undefined4 *)((long)iVar4 * 4 + 0x7100d189a0));
  uVar6 = FUN_710076d6f0(0x7100d189a0,iVar4);
  if (iVar5 == 0) {
    plVar2 = (long *)tpidrro_el0;
    if (*plVar2 < 0) {
      uVar12 = *(uint *)(plVar2 + 1);
      plVar7 = (long *)((long)plVar2 + 0x14);
      if ((uVar12 & 1) == 0) {
        plVar7 = (long *)((long)plVar2 + 0xc);
      }
      lVar11 = (((ulong)(uVar12 >> 1) & 0xf) + ((ulong)(uVar12 >> 5) & 0xf)) * 4;
    }
    else {
      plVar7 = plVar2 + 1;
      lVar11 = 0;
    }
    uVar8 = (long)plVar7 +
            ((lVar11 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf &
            0xfffffffffffffff0;
    uVar6 = 0x4f434653;
    if (*(int *)((long)plVar2 + uVar8) != 0x4f434653) {
      lVar11 = -1;
      iVar5 = 0x5f59;
      iVar4 = -1;
      goto LAB_710076ed54;
    }
    iVar5 = *(int *)((long)plVar2 + uVar8 + 8);
    if (iVar5 == 0) {
      uVar12 = *(uint *)((long)plVar2 + uVar8 + 0x10);
      uVar6 = (ulong)uVar12;
      lVar11 = (long)(int)uVar12;
      if ((-1 < (int)uVar12) || (iVar4 = *(int *)((long)plVar2 + uVar8 + 0x14), iVar4 == 0)) {
        if (param_6 != (uint *)0x0) {
          uVar12 = *(uint *)((long)plVar2 + uVar8 + 0x18);
          uVar6 = (ulong)uVar12;
          *param_6 = uVar12;
        }
        iVar4 = 0;
      }
      goto LAB_710076ed54;
    }
  }
  lVar11 = -1;
  iVar4 = -1;
LAB_710076ed54:
  auVar19 = FUN_710076d158(uVar6,lVar11);
  *(int *)(auVar19._0_8_ + 0x2e814) = iVar5;
  *(int *)(auVar19._0_8_ + 0x2e810) = iVar4;
  return auVar19._8_8_;
}



// ===== FUN_710076ee20 @ 710076ee20 (size=456) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_710076ee20(ulong param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  
  uVar8 = (uint)((ulong)param_2 >> 0x20);
  uVar12 = uVar8 & 0xf;
  puVar1 = (undefined8 *)tpidrro_el0;
  uVar8 = uVar8 >> 4;
  if (_DAT_7100d18a14 == 0 || _DAT_7100d18a14 < param_3) {
    uVar14 = (undefined4)param_2;
    uVar15 = (undefined4)param_3;
    uVar11 = (uint)(param_3 >> 0x20) & 0xf;
    uVar8 = uVar8 & 0x3fffff;
    uVar13 = 0;
    param_3 = 0;
    param_2 = 0;
    uVar10 = uVar12;
    uVar12 = 0;
  }
  else {
    uVar13 = uVar8 & 0x3f;
    uVar15 = 0;
    uVar14 = 0;
    uVar8 = 0;
    uVar11 = 0;
    uVar10 = 0;
  }
  *(int *)((long)puVar1 + 0xc) = (int)param_2;
  *(undefined4 *)(puVar1 + 2) = uVar15;
  puVar1[4] = 0x49434653;
  puVar1[5] = 10;
  *(short *)((long)puVar1 + 10) = (short)param_3;
  *puVar1 = 0xa00110004;
  *(ushort *)(puVar1 + 1) = (ushort)(uVar13 << 6) | (ushort)(uVar12 << 0xc);
  *(undefined4 *)((long)puVar1 + 0x14) = uVar14;
  *(uint *)(puVar1 + 3) = uVar8 << 2 | uVar11 << 0x18 | uVar10 << 0x1c;
  puVar1[6] = param_1 & 0xffffffff | param_4 << 0x20;
  iVar3 = FUN_710076d640(0x7100d189a0);
  iVar4 = FUN_710076d0c0(*(undefined4 *)((long)iVar3 * 4 + 0x7100d189a0));
  uVar5 = FUN_710076d6f0(0x7100d189a0,iVar3);
  if (iVar4 == 0) {
    plVar2 = (long *)tpidrro_el0;
    if (*plVar2 < 0) {
      uVar8 = *(uint *)(plVar2 + 1);
      plVar6 = (long *)((long)plVar2 + 0x14);
      if ((uVar8 & 1) == 0) {
        plVar6 = (long *)((long)plVar2 + 0xc);
      }
      lVar9 = (((ulong)(uVar8 >> 1) & 0xf) + ((ulong)(uVar8 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar2 + 1;
      lVar9 = 0;
    }
    uVar7 = (long)plVar6 + ((lVar9 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar5 = 0x4f434653;
    if (*(int *)((long)plVar2 + uVar7) != 0x4f434653) {
      lVar9 = -1;
      iVar4 = 0x5f59;
      uVar15 = 0xffffffff;
      goto LAB_710076ef64;
    }
    iVar4 = *(int *)((long)plVar2 + uVar7 + 8);
    if (iVar4 == 0) {
      uVar8 = *(uint *)((long)plVar2 + uVar7 + 0x10);
      uVar5 = (ulong)uVar8;
      uVar15 = 0;
      lVar9 = (long)(int)uVar8;
      if ((int)uVar8 < 0) {
        uVar15 = *(undefined4 *)((long)plVar2 + uVar7 + 0x14);
      }
      goto LAB_710076ef64;
    }
  }
  lVar9 = -1;
  uVar15 = 0xffffffff;
LAB_710076ef64:
  auVar16 = FUN_710076d158(uVar5,lVar9);
  *(int *)(auVar16._0_8_ + 0x2e814) = iVar4;
  *(undefined4 *)(auVar16._0_8_ + 0x2e810) = uVar15;
  return auVar16._8_8_;
}



// ===== FUN_710076eff0 @ 710076eff0 (size=604) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_710076eff0(ulong param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5,
              uint param_6)

{
  undefined8 *puVar1;
  long *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined2 uVar20;
  undefined1 auVar21 [16];
  
  uVar11 = (uint)((ulong)param_2 >> 0x20);
  uVar15 = uVar11 & 0xf;
  uVar16 = (ulong)_DAT_7100d18a14;
  puVar1 = (undefined8 *)tpidrro_el0;
  bVar5 = _DAT_7100d18a14 != 0;
  uVar11 = uVar11 >> 4;
  uVar18 = (uint)param_3;
  if (bVar5 && param_3 <= uVar16) {
    bVar5 = _DAT_7100d18a14 != uVar18;
    uVar17 = uVar11 & 0x3f;
    uVar20 = (undefined2)param_3;
    uVar16 = (ulong)(_DAT_7100d18a14 - uVar18);
    uVar18 = 0;
    uVar19 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar14 = 0;
  }
  else {
    uVar19 = (undefined4)param_2;
    uVar11 = uVar11 & 0x3fffff;
    uVar10 = (uint)(param_3 >> 0x20) & 0xf;
    uVar17 = 0;
    uVar20 = 0;
    param_2 = 0;
    uVar14 = uVar15;
    uVar15 = 0;
  }
  *(int *)((long)puVar1 + 0xc) = (int)param_2;
  *(undefined2 *)((long)puVar1 + 10) = uVar20;
  puVar1[6] = 0x49434653;
  puVar1[7] = 0xb;
  bVar3 = false;
  bVar4 = true;
  if (bVar5) {
    bVar4 = (uint)uVar16 <= param_6;
    bVar3 = param_6 == (uint)uVar16;
  }
  *(uint *)(puVar1 + 3) = uVar18;
  *(undefined4 *)((long)puVar1 + 0x1c) = uVar19;
  uVar18 = (uint)((ulong)param_5 >> 0x20);
  uVar12 = uVar18 & 0xf;
  *puVar1 = 0xa00220004;
  *(ushort *)(puVar1 + 1) = (ushort)(uVar17 << 6) | (ushort)(uVar15 << 0xc);
  *(uint *)(puVar1 + 4) = uVar11 << 2 | uVar10 << 0x18 | uVar14 << 0x1c;
  uVar19 = (undefined4)param_5;
  uVar18 = uVar18 >> 4;
  if (!bVar4 || bVar3) {
    uVar11 = uVar18 & 0x3f;
    uVar20 = (undefined2)param_6;
    param_6 = 0;
    uVar19 = 0;
    uVar18 = 0;
    uVar15 = 0;
  }
  else {
    uVar18 = uVar18 & 0x3fffff;
    uVar11 = 0;
    uVar20 = 0;
    param_5 = 0;
    uVar15 = uVar12;
    uVar12 = 0;
  }
  *(undefined2 *)((long)puVar1 + 0x12) = uVar20;
  *(int *)((long)puVar1 + 0x14) = (int)param_5;
  *(uint *)((long)puVar1 + 0x24) = param_6;
  *(undefined4 *)(puVar1 + 5) = uVar19;
  *(uint *)((long)puVar1 + 0x2c) = uVar18 << 2 | uVar15 << 0x1c;
  *(ushort *)(puVar1 + 2) = (ushort)(uVar11 << 6) | 1 | (ushort)(uVar12 << 0xc);
  puVar1[8] = param_1 & 0xffffffff | param_4 << 0x20;
  iVar6 = FUN_710076d640(0x7100d189a0);
  iVar7 = FUN_710076d0c0(*(undefined4 *)((long)iVar6 * 4 + 0x7100d189a0));
  uVar16 = FUN_710076d6f0(0x7100d189a0,iVar6);
  if (iVar7 == 0) {
    plVar2 = (long *)tpidrro_el0;
    if (*plVar2 < 0) {
      uVar11 = *(uint *)(plVar2 + 1);
      plVar8 = (long *)((long)plVar2 + 0x14);
      if ((uVar11 & 1) == 0) {
        plVar8 = (long *)((long)plVar2 + 0xc);
      }
      lVar13 = (((ulong)(uVar11 >> 1) & 0xf) + ((ulong)(uVar11 >> 5) & 0xf)) * 4;
    }
    else {
      plVar8 = plVar2 + 1;
      lVar13 = 0;
    }
    uVar9 = (long)plVar8 +
            ((lVar13 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf &
            0xfffffffffffffff0;
    uVar16 = 0x4f434653;
    if (*(int *)((long)plVar2 + uVar9) != 0x4f434653) {
      lVar13 = -1;
      iVar7 = 0x5f59;
      uVar19 = 0xffffffff;
      goto LAB_710076f198;
    }
    iVar7 = *(int *)((long)plVar2 + uVar9 + 8);
    if (iVar7 == 0) {
      uVar11 = *(uint *)((long)plVar2 + uVar9 + 0x10);
      uVar16 = (ulong)uVar11;
      uVar19 = 0;
      lVar13 = (long)(int)uVar11;
      if ((int)uVar11 < 0) {
        uVar19 = *(undefined4 *)((long)plVar2 + uVar9 + 0x14);
      }
      goto LAB_710076f198;
    }
  }
  lVar13 = -1;
  uVar19 = 0xffffffff;
LAB_710076f198:
  auVar21 = FUN_710076d158(uVar16,lVar13);
  *(int *)(auVar21._0_8_ + 0x2e814) = iVar7;
  *(undefined4 *)(auVar21._0_8_ + 0x2e810) = uVar19;
  return auVar21._8_8_;
}



// ===== FUN_710076f250 @ 710076f250 (size=8) =====

void FUN_710076f250(void)

{
  FUN_710076dd40();
  return;
}



// ===== FUN_710076f260 @ 710076f260 (size=8) =====

void FUN_710076f260(void)

{
  FUN_710076df30();
  return;
}



// ===== FUN_710076f270 @ 710076f270 (size=8) =====

void FUN_710076f270(void)

{
  FUN_710076df30();
  return;
}



// ===== FUN_710076f280 @ 710076f280 (size=8) =====

void FUN_710076f280(void)

{
  FUN_710076dd40();
  return;
}



// ===== FUN_710076f290 @ 710076f290 (size=8) =====

void FUN_710076f290(void)

{
  FUN_710076dd40();
  return;
}



// ===== FUN_710076f2a0 @ 710076f2a0 (size=496) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710076f2a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                    uint *param_5)

{
  bool bVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  undefined2 uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  
  if (param_5 == (uint *)0x0) {
    bVar1 = true;
    uVar12 = 0;
  }
  else {
    uVar12 = *param_5;
    bVar1 = uVar12 <= _DAT_7100d18a14;
  }
  uVar14 = (undefined4)param_4;
  uVar11 = (undefined2)((ulong)param_4 >> 0x20);
  puVar2 = (undefined8 *)tpidrro_el0;
  if (_DAT_7100d18a14 != 0 && bVar1) {
    uVar14 = 0;
    uVar13 = 0;
    uVar9 = 0;
    uVar8 = 0;
  }
  else {
    uVar8 = (uint)((ulong)param_4 >> 0x20);
    uVar9 = uVar8 >> 4 & 0x3fffff;
    uVar8 = uVar8 & 0xf;
    param_4 = 0;
    uVar11 = 0;
    uVar13 = uVar12;
    uVar12 = 0;
  }
  *(uint *)(puVar2 + 1) = uVar13;
  *(undefined4 *)((long)puVar2 + 0xc) = uVar14;
  *(short *)(puVar2 + 8) = (short)uVar12;
  *(int *)((long)puVar2 + 0x44) = (int)param_4;
  *puVar2 = 0xc0c01000004;
  *(undefined2 *)(puVar2 + 9) = uVar11;
  *(uint *)(puVar2 + 2) = uVar9 << 2 | uVar8 << 0x1c;
  puVar2[4] = 0x49434653;
  puVar2[5] = 0x11;
  *(short *)((long)puVar2 + 0x4a) = (short)uVar12;
  puVar2[6] = CONCAT44(param_2,param_1);
  *(undefined4 *)(puVar2 + 7) = param_3;
  iVar4 = FUN_710076d640(0x7100d189a0);
  iVar5 = FUN_710076d0c0(*(undefined4 *)((long)iVar4 * 4 + 0x7100d189a0));
  FUN_710076d6f0(0x7100d189a0,iVar4);
  if (iVar5 == 0) {
    plVar3 = (long *)tpidrro_el0;
    if (*plVar3 < 0) {
      uVar12 = *(uint *)(plVar3 + 1);
      plVar6 = (long *)((long)plVar3 + 0x14);
      if ((uVar12 & 1) == 0) {
        plVar6 = (long *)((long)plVar3 + 0xc);
      }
      lVar10 = (((ulong)(uVar12 >> 5) & 0xf) + ((ulong)(uVar12 >> 1) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar3 + 1;
      lVar10 = 0;
    }
    uVar7 = (long)plVar6 +
            ((lVar10 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf &
            0xfffffffffffffff0;
    if (*(int *)((long)plVar3 + uVar7) != 0x4f434653) {
      iVar5 = 0x5f59;
      iVar4 = -1;
      goto LAB_710076f3ec;
    }
    iVar5 = *(int *)((long)plVar3 + uVar7 + 8);
    if (iVar5 == 0) {
      if ((-1 < *(int *)((long)plVar3 + uVar7 + 0x10)) ||
         (iVar4 = *(int *)((long)plVar3 + uVar7 + 0x14), iVar4 == 0)) {
        if (param_5 != (uint *)0x0) {
          *param_5 = *(uint *)((long)plVar3 + uVar7 + 0x18);
        }
        iVar4 = 0;
      }
      goto LAB_710076f3ec;
    }
  }
  iVar4 = -1;
LAB_710076f3ec:
  auVar15 = FUN_710076d158();
  *(int *)(auVar15._0_8_ + 0x2e814) = iVar5;
  *(int *)(auVar15._0_8_ + 0x2e810) = iVar4;
  return auVar15._8_8_ & 0xffffffff;
}



// ===== FUN_710076f490 @ 710076f490 (size=320) =====

ulong FUN_710076f490(ulong param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auVar11 [12];
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0xa00000004;
  plVar2[4] = param_1 & 0xffffffff | param_2 << 0x20;
  plVar2[2] = 0x49434653;
  plVar2[3] = 0x12;
  iVar3 = FUN_710076d640(0x7100d189a0);
  iVar4 = FUN_710076d0c0(*(undefined4 *)((long)iVar3 * 4 + 0x7100d189a0));
  uVar5 = FUN_710076d6f0(0x7100d189a0,iVar3);
  if (iVar4 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar6 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar6 = (long *)((long)plVar2 + 0xc);
      }
      lVar9 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar2 + 1;
      lVar9 = 0;
    }
    uVar7 = (long)plVar6 + ((lVar9 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar5 = 0x4f434653;
    if (*(int *)((long)plVar2 + uVar7) != 0x4f434653) {
      uVar8 = 0xffffffff;
      iVar4 = 0x5f59;
      uVar10 = 0xffffffff;
      goto LAB_710076f568;
    }
    iVar4 = *(int *)((long)plVar2 + uVar7 + 8);
    if (iVar4 == 0) {
      uVar1 = *(uint *)((long)plVar2 + uVar7 + 0x10);
      uVar10 = (ulong)uVar1;
      uVar8 = 0;
      if ((int)uVar1 < 0) {
        uVar8 = *(undefined4 *)((long)plVar2 + uVar7 + 0x14);
      }
      goto LAB_710076f568;
    }
  }
  uVar8 = 0xffffffff;
  uVar10 = 0xffffffff;
LAB_710076f568:
  auVar11 = FUN_710076d158(uVar5,uVar8,uVar10);
  *(int *)(auVar11._0_8_ + 0x2e814) = iVar4;
  *(int *)(auVar11._0_8_ + 0x2e810) = auVar11._8_4_;
  return uVar10 & 0xffffffff;
}



// ===== FUN_710076f5d0 @ 710076f5d0 (size=1312) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710076f5d0(undefined4 param_1,ulong param_2,int *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  uint uVar7;
  undefined2 uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined4 uVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  undefined2 uVar25;
  undefined2 uVar26;
  undefined4 uVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  undefined4 uVar31;
  undefined2 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 auVar35 [12];
  
  uVar7 = (uint)param_2;
  uVar27 = SUB84(param_3,0);
  uVar14 = (uint)((ulong)param_3 >> 0x20);
  uVar34 = uVar27;
  if ((uVar7 == 0xc0306938) || (uVar7 == 0xc030698b)) {
    iVar4 = 0x30;
    uVar11 = 0x30;
    uVar9 = uVar14 >> 4;
    uVar17 = *(undefined8 *)(param_3 + 10);
    uVar23 = uVar14 & 0xf;
    uVar24 = 0x30;
    uVar19 = 2;
    iVar5 = param_3[8] << 3;
    uVar18 = (ulong)iVar5;
    uVar15 = (undefined4)uVar17;
    uVar16 = (uint)((ulong)uVar17 >> 0x20);
    uVar10 = uVar16 >> 4;
    uVar26 = (undefined2)((ulong)uVar17 >> 0x20);
    uVar16 = uVar16 & 0xf;
  }
  else if (uVar7 == 0xc0106924) {
    uVar17 = *(undefined8 *)(param_3 + 2);
    iVar4 = 0x10;
    uVar9 = uVar14 >> 4;
    iVar5 = *param_3;
    uVar23 = uVar14 & 0xf;
    uVar19 = 2;
    uVar15 = (undefined4)uVar17;
    uVar16 = (uint)((ulong)uVar17 >> 0x20);
    uVar10 = uVar16 >> 4;
    uVar26 = (undefined2)((ulong)uVar17 >> 0x20);
    uVar16 = uVar16 & 0xf;
    uVar18 = (ulong)iVar5;
    uVar11 = 0x10;
    uVar24 = 0x10;
  }
  else if (uVar7 < 0x40000000) {
    uVar14 = 0;
    param_3 = (int *)0x0;
    uVar27 = 0;
    iVar4 = 0;
    uVar16 = 0;
    uVar26 = 0;
    uVar10 = 0;
    uVar15 = 0;
    iVar5 = 0;
    uVar23 = 0;
    uVar9 = 0;
    uVar24 = 0;
    uVar19 = 1;
    uVar11 = 0;
    uVar18 = 0;
    uVar34 = 0;
  }
  else {
    uVar24 = param_2 >> 0x10 & 0x1fff;
    iVar4 = (int)uVar24;
    if ((int)uVar7 < 0) {
      uVar9 = uVar14 >> 4;
      uVar23 = uVar14 & 0xf;
      uVar20 = uVar24;
      uVar16 = uVar14 >> 4;
      if ((uVar7 >> 0x1e & 1) == 0) {
        uVar14 = 0;
        param_3 = (int *)0x0;
        iVar4 = 0;
        uVar16 = 0;
        uVar26 = 0;
        uVar10 = 0;
        uVar15 = 0;
        iVar5 = 0;
        uVar19 = 1;
        uVar11 = 0;
        uVar18 = 0;
        uVar27 = 0;
        goto LAB_710076f654;
      }
    }
    else {
      uVar23 = 0;
      uVar20 = 0;
      uVar16 = 0;
      uVar34 = 0;
    }
    uVar9 = uVar16;
    uVar16 = 0;
    uVar26 = 0;
    uVar10 = 0;
    uVar15 = 0;
    iVar5 = 0;
    uVar19 = 1;
    uVar18 = 0;
    uVar11 = uVar24;
    uVar24 = uVar20;
  }
LAB_710076f654:
  uVar25 = (undefined2)uVar14;
  uVar29 = (uint)uVar24;
  uVar20 = (ulong)_DAT_7100d18a14;
  puVar1 = (undefined8 *)tpidrro_el0;
  bVar3 = _DAT_7100d18a14 != 0;
  if (bVar3 && uVar24 <= uVar20) {
    bVar3 = _DAT_7100d18a14 != uVar29;
    uVar28 = uVar9 & 0x3f;
    uVar21 = (ulong)(_DAT_7100d18a14 - uVar29);
    uVar20 = (ulong)(_DAT_7100d18a14 - uVar29);
    uVar31 = 0;
    uVar29 = 0;
    uVar9 = 0;
    uVar22 = 0;
    uVar33 = uVar34;
    uVar13 = uVar23;
  }
  else {
    uVar9 = uVar9 & 0x3fffff;
    uVar28 = 0;
    uVar24 = 0;
    uVar21 = uVar20;
    uVar33 = 0;
    uVar13 = 0;
    uVar22 = uVar23;
    uVar31 = uVar34;
  }
  uVar23 = (uint)uVar20;
  *(short *)((long)puVar1 + 10) = (short)uVar24;
  *(undefined4 *)((long)puVar1 + 0xc) = uVar33;
  puVar1[0x12] = 0x49434653;
  puVar1[0x13] = 0x13;
  *(ushort *)(puVar1 + 1) = (ushort)(uVar28 << 6) | (ushort)(uVar13 << 0xc);
  *puVar1 = 0x180d04440004;
  *(uint *)(puVar1 + 5) = uVar29;
  *(undefined4 *)((long)puVar1 + 0x2c) = uVar31;
  *(uint *)(puVar1 + 6) = uVar9 << 2 | uVar22 << 0x1c;
  uVar8 = (undefined2)uVar18;
  if (bVar3 && uVar18 <= uVar21) {
    uVar23 = uVar23 - iVar5;
    uVar21 = (ulong)uVar23;
    uVar29 = uVar10 & 0x3f;
    iVar30 = 0;
    uVar33 = 0;
    uVar9 = 0;
    uVar22 = 0;
    uVar13 = 0;
    uVar34 = uVar15;
    uVar28 = uVar16;
    uVar32 = uVar8;
  }
  else {
    uVar9 = uVar10 & 0x3fffff;
    uVar22 = (uint)(uVar18 >> 0x3c);
    uVar29 = 0;
    uVar34 = 0;
    uVar28 = 0;
    uVar33 = uVar15;
    uVar13 = uVar16;
    uVar32 = 0;
    iVar30 = iVar5;
  }
  *(undefined2 *)((long)puVar1 + 0x12) = uVar32;
  *(undefined4 *)((long)puVar1 + 0x14) = uVar34;
  *(int *)((long)puVar1 + 0x34) = iVar30;
  *(undefined4 *)(puVar1 + 7) = uVar33;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(ushort *)(puVar1 + 2) = (ushort)(uVar29 << 6) | 1 | (ushort)(uVar28 << 0xc);
  puVar1[10] = 0;
  *(uint *)((long)puVar1 + 0x3c) = uVar9 << 2 | uVar22 << 0x18 | uVar13 << 0x1c;
  puVar1[3] = 2;
  puVar1[4] = 3;
  if ((uVar23 == 0) || (uVar21 < uVar11)) {
    uVar14 = uVar14 & 0xf;
    uVar9 = (uint)((ulong)param_3 >> 0x24) & 0x3fffff;
    uVar33 = 0;
    uVar25 = 0;
    uVar11 = 0;
    uVar34 = uVar27;
  }
  else {
    uVar23 = uVar23 - iVar4;
    uVar21 = (ulong)uVar23;
    iVar4 = 0;
    uVar9 = 0;
    uVar14 = 0;
    uVar34 = 0;
    uVar33 = uVar27;
  }
  *(short *)((long)puVar1 + 0xb4) = (short)uVar11;
  *(short *)((long)puVar1 + 0xc2) = (short)uVar11;
  *(int *)(puVar1 + 0xb) = iVar4;
  *(undefined4 *)((long)puVar1 + 0x5c) = uVar34;
  *(undefined4 *)((long)puVar1 + 0xbc) = uVar33;
  *(uint *)(puVar1 + 0xc) = uVar9 << 2 | uVar14 << 0x1c;
  *(undefined2 *)(puVar1 + 0x18) = uVar25;
  if (uVar23 == 0 || uVar21 < uVar18) {
    uVar11 = (ulong)(uVar10 & 0x3fffff);
    uVar18 = uVar18 >> 0x3c;
    uVar26 = 0;
    uVar8 = 0;
    uVar34 = uVar15;
    uVar15 = 0;
  }
  else {
    iVar5 = 0;
    uVar34 = 0;
    uVar11 = 0;
    uVar18 = 0;
    uVar16 = 0;
  }
  *(undefined2 *)((long)puVar1 + 0xb6) = uVar8;
  *(undefined2 *)((long)puVar1 + 0xca) = uVar8;
  *(int *)((long)puVar1 + 100) = iVar5;
  *(undefined4 *)(puVar1 + 0xd) = uVar34;
  *(undefined8 *)((long)puVar1 + 0x74) = 0;
  *(undefined8 *)((long)puVar1 + 0x7c) = 0;
  *(ulong *)((long)puVar1 + 0x6c) = uVar18 << 0x18 | uVar11 << 2 | (ulong)(uVar16 << 0x1c);
  *(undefined4 *)((long)puVar1 + 0x84) = 0;
  *(undefined4 *)(puVar1 + 0x17) = 0;
  *(undefined4 *)((long)puVar1 + 0xc4) = uVar15;
  *(undefined2 *)(puVar1 + 0x19) = uVar26;
  puVar1[0x14] = CONCAT44(uVar7,param_1);
  *(undefined8 *)((long)puVar1 + 0xcc) = 0;
  *(undefined8 *)((long)puVar1 + 0xd4) = 0;
  *(undefined4 *)(puVar1 + 0x15) = uVar19;
  iVar4 = FUN_710076d640(0x7100d189a0);
  iVar5 = FUN_710076d0c0(*(undefined4 *)((long)iVar4 * 4 + 0x7100d189a0));
  uVar17 = FUN_710076d6f0(0x7100d189a0,iVar4);
  if (iVar5 == 0) {
    plVar2 = (long *)tpidrro_el0;
    if (*plVar2 < 0) {
      uVar14 = *(uint *)(plVar2 + 1);
      plVar6 = (long *)((long)plVar2 + 0x14);
      if ((uVar14 & 1) == 0) {
        plVar6 = (long *)((long)plVar2 + 0xc);
      }
      lVar12 = (((ulong)(uVar14 >> 1) & 0xf) + ((ulong)(uVar14 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar2 + 1;
      lVar12 = 0;
    }
    uVar11 = (long)plVar6 +
             ((lVar12 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf &
             0xfffffffffffffff0;
    uVar17 = 0x4f434653;
    if (*(int *)((long)plVar2 + uVar11) != 0x4f434653) {
      uVar34 = 0xffffffff;
      iVar5 = 0x5f59;
      uVar24 = 0xffffffff;
      goto LAB_710076f89c;
    }
    iVar5 = *(int *)((long)plVar2 + uVar11 + 8);
    if (iVar5 == 0) {
      uVar14 = *(uint *)((long)plVar2 + uVar11 + 0x10);
      uVar24 = (ulong)uVar14;
      uVar34 = 0;
      if ((int)uVar14 < 0) {
        uVar34 = *(undefined4 *)((long)plVar2 + uVar11 + 0x14);
      }
      goto LAB_710076f89c;
    }
  }
  uVar34 = 0xffffffff;
  uVar24 = 0xffffffff;
LAB_710076f89c:
  auVar35 = FUN_710076d158(uVar17,uVar34,uVar24);
  *(int *)(auVar35._0_8_ + 0x2e814) = iVar5;
  *(int *)(auVar35._0_8_ + 0x2e810) = auVar35._8_4_;
  return uVar24 & 0xffffffff;
}



// ===== FUN_710076faf0 @ 710076faf0 (size=376) =====

ulong FUN_710076faf0(undefined8 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auVar10 [12];
  
  if (1 < param_2 - 3U) {
    iVar4 = 0;
    uVar7 = 0x5f;
    uVar9 = 0xffffffff;
    goto LAB_710076fbd4;
  }
  if (param_2 == 3) {
    param_3 = 0;
  }
  plVar2 = (long *)tpidrro_el0;
  *(undefined4 *)(plVar2 + 5) = param_3;
  *plVar2 = 0xb00000004;
  plVar2[2] = 0x49434653;
  plVar2[3] = 0x14;
  plVar2[4] = CONCAT44(param_2,(int)param_1);
  iVar3 = FUN_710076d640(0x7100d189a0);
  iVar4 = FUN_710076d0c0(*(undefined4 *)((long)iVar3 * 4 + 0x7100d189a0));
  param_1 = FUN_710076d6f0(0x7100d189a0,iVar3);
  if (iVar4 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar5 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar5 = (long *)((long)plVar2 + 0xc);
      }
      lVar8 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar5 = plVar2 + 1;
      lVar8 = 0;
    }
    uVar6 = (long)plVar5 + ((lVar8 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    param_1 = 0x4f434653;
    if (*(int *)((long)plVar2 + uVar6) != 0x4f434653) {
      uVar7 = 0xffffffff;
      iVar4 = 0x5f59;
      uVar9 = 0xffffffff;
      goto LAB_710076fbd4;
    }
    iVar4 = *(int *)((long)plVar2 + uVar6 + 8);
    if (iVar4 == 0) {
      uVar1 = *(uint *)((long)plVar2 + uVar6 + 0x10);
      uVar9 = (ulong)uVar1;
      uVar7 = 0;
      if ((int)uVar1 < 0) {
        uVar7 = *(undefined4 *)((long)plVar2 + uVar6 + 0x14);
      }
      goto LAB_710076fbd4;
    }
  }
  uVar7 = 0xffffffff;
  uVar9 = 0xffffffff;
LAB_710076fbd4:
  auVar10 = FUN_710076d158(param_1,uVar7,uVar9);
  *(int *)(auVar10._0_8_ + 0x2e814) = iVar4;
  *(int *)(auVar10._0_8_ + 0x2e810) = auVar10._8_4_;
  return uVar9 & 0xffffffff;
}



// ===== FUN_710076fc70 @ 710076fc70 (size=452) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710076fc70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                    uint param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined2 uVar15;
  undefined1 auVar16 [12];
  
  puVar1 = (undefined8 *)tpidrro_el0;
  uVar8 = (uint)((ulong)param_4 >> 0x20);
  uVar12 = uVar8 & 0xf;
  uVar8 = uVar8 >> 4;
  if (_DAT_7100d18a14 == 0 || _DAT_7100d18a14 <= param_5 && param_5 != _DAT_7100d18a14) {
    uVar14 = (undefined4)param_4;
    uVar8 = uVar8 & 0x3fffff;
    uVar13 = 0;
    uVar15 = 0;
    param_4 = 0;
    uVar9 = uVar12;
    uVar12 = 0;
  }
  else {
    uVar13 = uVar8 & 0x3f;
    uVar15 = (undefined2)param_5;
    param_5 = 0;
    uVar14 = 0;
    uVar8 = 0;
    uVar9 = 0;
  }
  *(int *)((long)puVar1 + 0xc) = (int)param_4;
  *(uint *)(puVar1 + 2) = param_5;
  *(undefined2 *)((long)puVar1 + 10) = uVar15;
  puVar1[4] = 0x49434653;
  puVar1[5] = 0x15;
  *(undefined4 *)((long)puVar1 + 0x14) = uVar14;
  *(uint *)(puVar1 + 3) = uVar8 << 2 | uVar9 << 0x1c;
  *puVar1 = 0xb00110004;
  *(ushort *)(puVar1 + 1) = (ushort)(uVar13 << 6) | (ushort)(uVar12 << 0xc);
  puVar1[6] = CONCAT44(param_2,param_1);
  *(undefined4 *)(puVar1 + 7) = param_3;
  iVar3 = FUN_710076d640(0x7100d189a0);
  iVar4 = FUN_710076d0c0(*(undefined4 *)((long)iVar3 * 4 + 0x7100d189a0));
  uVar5 = FUN_710076d6f0(0x7100d189a0,iVar3);
  if (iVar4 == 0) {
    plVar2 = (long *)tpidrro_el0;
    if (*plVar2 < 0) {
      uVar8 = *(uint *)(plVar2 + 1);
      plVar6 = (long *)((long)plVar2 + 0x14);
      if ((uVar8 & 1) == 0) {
        plVar6 = (long *)((long)plVar2 + 0xc);
      }
      lVar11 = (((ulong)(uVar8 >> 1) & 0xf) + ((ulong)(uVar8 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar2 + 1;
      lVar11 = 0;
    }
    uVar7 = (long)plVar6 +
            ((lVar11 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf &
            0xfffffffffffffff0;
    uVar5 = 0x4f434653;
    if (*(int *)((long)plVar2 + uVar7) != 0x4f434653) {
      uVar14 = 0xffffffff;
      iVar4 = 0x5f59;
      uVar10 = 0xffffffff;
      goto LAB_710076fdb0;
    }
    iVar4 = *(int *)((long)plVar2 + uVar7 + 8);
    if (iVar4 == 0) {
      uVar8 = *(uint *)((long)plVar2 + uVar7 + 0x10);
      uVar10 = (ulong)uVar8;
      uVar14 = 0;
      if ((int)uVar8 < 0) {
        uVar14 = *(undefined4 *)((long)plVar2 + uVar7 + 0x14);
      }
      goto LAB_710076fdb0;
    }
  }
  uVar14 = 0xffffffff;
  uVar10 = 0xffffffff;
LAB_710076fdb0:
  auVar16 = FUN_710076d158(uVar5,uVar14,uVar10);
  *(int *)(auVar16._0_8_ + 0x2e814) = iVar4;
  *(int *)(auVar16._0_8_ + 0x2e810) = auVar16._8_4_;
  return uVar10 & 0xffffffff;
}



// ===== FUN_710076fe40 @ 710076fe40 (size=320) =====

ulong FUN_710076fe40(ulong param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auVar11 [12];
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0xa00000004;
  plVar2[4] = param_1 & 0xffffffff | param_2 << 0x20;
  plVar2[2] = 0x49434653;
  plVar2[3] = 0x16;
  iVar3 = FUN_710076d640(0x7100d189a0);
  iVar4 = FUN_710076d0c0(*(undefined4 *)((long)iVar3 * 4 + 0x7100d189a0));
  uVar5 = FUN_710076d6f0(0x7100d189a0,iVar3);
  if (iVar4 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar6 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar6 = (long *)((long)plVar2 + 0xc);
      }
      lVar9 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar2 + 1;
      lVar9 = 0;
    }
    uVar7 = (long)plVar6 + ((lVar9 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar5 = 0x4f434653;
    if (*(int *)((long)plVar2 + uVar7) != 0x4f434653) {
      uVar8 = 0xffffffff;
      iVar4 = 0x5f59;
      uVar10 = 0xffffffff;
      goto LAB_710076ff18;
    }
    iVar4 = *(int *)((long)plVar2 + uVar7 + 8);
    if (iVar4 == 0) {
      uVar1 = *(uint *)((long)plVar2 + uVar7 + 0x10);
      uVar10 = (ulong)uVar1;
      uVar8 = 0;
      if ((int)uVar1 < 0) {
        uVar8 = *(undefined4 *)((long)plVar2 + uVar7 + 0x14);
      }
      goto LAB_710076ff18;
    }
  }
  uVar8 = 0xffffffff;
  uVar10 = 0xffffffff;
LAB_710076ff18:
  auVar11 = FUN_710076d158(uVar5,uVar8,uVar10);
  *(int *)(auVar11._0_8_ + 0x2e814) = iVar4;
  *(int *)(auVar11._0_8_ + 0x2e810) = auVar11._8_4_;
  return uVar10 & 0xffffffff;
}



// ===== FUN_710076ff80 @ 710076ff80 (size=444) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_710076ff80(undefined4 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  
  uVar9 = (uint)((ulong)param_2 >> 0x20);
  uVar12 = uVar9 & 0xf;
  puVar1 = (undefined8 *)tpidrro_el0;
  uVar9 = uVar9 >> 4;
  if (_DAT_7100d18a14 == 0 || _DAT_7100d18a14 < param_3) {
    uVar14 = (undefined4)param_2;
    uVar15 = (undefined4)param_3;
    uVar11 = (uint)(param_3 >> 0x20) & 0xf;
    uVar9 = uVar9 & 0x3fffff;
    uVar13 = 0;
    param_3 = 0;
    param_2 = 0;
    uVar10 = uVar12;
    uVar12 = 0;
  }
  else {
    uVar13 = uVar9 & 0x3f;
    uVar15 = 0;
    uVar14 = 0;
    uVar9 = 0;
    uVar11 = 0;
    uVar10 = 0;
  }
  *(int *)((long)puVar1 + 0xc) = (int)param_2;
  *(undefined4 *)(puVar1 + 2) = uVar15;
  puVar1[4] = 0x49434653;
  puVar1[5] = 0x18;
  *(short *)((long)puVar1 + 10) = (short)param_3;
  *puVar1 = 0x900110004;
  *(ushort *)(puVar1 + 1) = (ushort)(uVar13 << 6) | (ushort)(uVar12 << 0xc);
  *(undefined4 *)((long)puVar1 + 0x14) = uVar14;
  *(uint *)(puVar1 + 3) = uVar9 << 2 | uVar11 << 0x18 | uVar10 << 0x1c;
  *(undefined4 *)(puVar1 + 6) = param_1;
  iVar3 = FUN_710076d640(0x7100d189a0);
  iVar4 = FUN_710076d0c0(*(undefined4 *)((long)iVar3 * 4 + 0x7100d189a0));
  uVar5 = FUN_710076d6f0(0x7100d189a0,iVar3);
  if (iVar4 == 0) {
    plVar2 = (long *)tpidrro_el0;
    if (*plVar2 < 0) {
      uVar9 = *(uint *)(plVar2 + 1);
      plVar6 = (long *)((long)plVar2 + 0x14);
      if ((uVar9 & 1) == 0) {
        plVar6 = (long *)((long)plVar2 + 0xc);
      }
      lVar8 = (((ulong)(uVar9 >> 1) & 0xf) + ((ulong)(uVar9 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar2 + 1;
      lVar8 = 0;
    }
    uVar7 = (long)plVar6 + ((lVar8 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar5 = 0x4f434653;
    if (*(int *)((long)plVar2 + uVar7) != 0x4f434653) {
      lVar8 = -1;
      iVar4 = 0x5f59;
      uVar15 = 0xffffffff;
      goto LAB_71007700b8;
    }
    iVar4 = *(int *)((long)plVar2 + uVar7 + 8);
    if (iVar4 == 0) {
      uVar9 = *(uint *)((long)plVar2 + uVar7 + 0x10);
      uVar5 = (ulong)uVar9;
      uVar15 = 0;
      lVar8 = (long)(int)uVar9;
      if ((int)uVar9 < 0) {
        uVar15 = *(undefined4 *)((long)plVar2 + uVar7 + 0x14);
      }
      goto LAB_71007700b8;
    }
  }
  lVar8 = -1;
  uVar15 = 0xffffffff;
LAB_71007700b8:
  auVar16 = FUN_710076d158(uVar5,lVar8);
  *(int *)(auVar16._0_8_ + 0x2e814) = iVar4;
  *(undefined4 *)(auVar16._0_8_ + 0x2e810) = uVar15;
  return auVar16._8_8_;
}



// ===== FUN_7100770140 @ 7100770140 (size=432) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_7100770140(undefined4 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  
  uVar12 = (undefined2)((ulong)param_2 >> 0x20);
  puVar1 = (undefined8 *)tpidrro_el0;
  if (_DAT_7100d18a14 == 0 || _DAT_7100d18a14 < param_3) {
    uVar13 = (undefined4)param_2;
    uVar14 = (undefined4)param_3;
    uVar9 = (uint)((ulong)param_2 >> 0x20);
    uVar11 = uVar9 >> 4 & 0x3fffff;
    uVar10 = (uint)(param_3 >> 0x20) & 0xf;
    uVar9 = uVar9 & 0xf;
    param_2 = 0;
    uVar12 = 0;
    param_3 = 0;
  }
  else {
    uVar14 = 0;
    uVar13 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
  }
  *(int *)((long)puVar1 + 0x3c) = (int)param_2;
  *(undefined4 *)(puVar1 + 1) = uVar14;
  *(undefined4 *)((long)puVar1 + 0xc) = uVar13;
  *puVar1 = 0xc0a01000004;
  *(undefined4 *)(puVar1 + 6) = param_1;
  *(uint *)(puVar1 + 2) = uVar11 << 2 | uVar10 << 0x18 | uVar9 << 0x1c;
  puVar1[4] = 0x49434653;
  puVar1[5] = 0x19;
  *(short *)(puVar1 + 7) = (short)param_3;
  *(undefined2 *)(puVar1 + 8) = uVar12;
  *(short *)((long)puVar1 + 0x42) = (short)param_3;
  iVar3 = FUN_710076d640(0x7100d189a0);
  iVar4 = FUN_710076d0c0(*(undefined4 *)((long)iVar3 * 4 + 0x7100d189a0));
  uVar5 = FUN_710076d6f0(0x7100d189a0,iVar3);
  if (iVar4 == 0) {
    plVar2 = (long *)tpidrro_el0;
    if (*plVar2 < 0) {
      uVar9 = *(uint *)(plVar2 + 1);
      plVar6 = (long *)((long)plVar2 + 0x14);
      if ((uVar9 & 1) == 0) {
        plVar6 = (long *)((long)plVar2 + 0xc);
      }
      lVar8 = (((ulong)(uVar9 >> 1) & 0xf) + ((ulong)(uVar9 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar2 + 1;
      lVar8 = 0;
    }
    uVar7 = (long)plVar6 + ((lVar8 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar5 = 0x4f434653;
    if (*(int *)((long)plVar2 + uVar7) != 0x4f434653) {
      lVar8 = -1;
      iVar4 = 0x5f59;
      uVar13 = 0xffffffff;
      goto LAB_7100770274;
    }
    iVar4 = *(int *)((long)plVar2 + uVar7 + 8);
    if (iVar4 == 0) {
      uVar9 = *(uint *)((long)plVar2 + uVar7 + 0x10);
      uVar5 = (ulong)uVar9;
      uVar13 = 0;
      lVar8 = (long)(int)uVar9;
      if ((int)uVar9 < 0) {
        uVar13 = *(undefined4 *)((long)plVar2 + uVar7 + 0x14);
      }
      goto LAB_7100770274;
    }
  }
  lVar8 = -1;
  uVar13 = 0xffffffff;
LAB_7100770274:
  auVar15 = FUN_710076d158(uVar5,lVar8);
  *(int *)(auVar15._0_8_ + 0x2e814) = iVar4;
  *(undefined4 *)(auVar15._0_8_ + 0x2e810) = uVar13;
  return auVar15._8_8_;
}



// ===== FUN_71007702f0 @ 71007702f0 (size=308) =====

ulong FUN_71007702f0(undefined4 param_1)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auVar11 [12];
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0x900000004;
  *(undefined4 *)(plVar2 + 4) = param_1;
  plVar2[2] = 0x49434653;
  plVar2[3] = 0x1a;
  iVar3 = FUN_710076d640(0x7100d189a0);
  iVar4 = FUN_710076d0c0(*(undefined4 *)((long)iVar3 * 4 + 0x7100d189a0));
  uVar5 = FUN_710076d6f0(0x7100d189a0,iVar3);
  if (iVar4 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar6 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar6 = (long *)((long)plVar2 + 0xc);
      }
      lVar9 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar6 = plVar2 + 1;
      lVar9 = 0;
    }
    uVar7 = (long)plVar6 + ((lVar9 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar5 = 0x4f434653;
    if (*(int *)((long)plVar2 + uVar7) != 0x4f434653) {
      uVar8 = 0xffffffff;
      iVar4 = 0x5f59;
      uVar10 = 0xffffffff;
      goto LAB_71007703bc;
    }
    iVar4 = *(int *)((long)plVar2 + uVar7 + 8);
    if (iVar4 == 0) {
      uVar1 = *(uint *)((long)plVar2 + uVar7 + 0x10);
      uVar10 = (ulong)uVar1;
      uVar8 = 0;
      if ((int)uVar1 < 0) {
        uVar8 = *(undefined4 *)((long)plVar2 + uVar7 + 0x14);
      }
      goto LAB_71007703bc;
    }
  }
  uVar8 = 0xffffffff;
  uVar10 = 0xffffffff;
LAB_71007703bc:
  auVar11 = FUN_710076d158(uVar5,uVar8,uVar10);
  *(int *)(auVar11._0_8_ + 0x2e814) = iVar4;
  *(int *)(auVar11._0_8_ + 0x2e810) = auVar11._8_4_;
  return uVar10 & 0xffffffff;
}



// ===== FUN_7100770a20 @ 7100770a20 (size=244) =====

undefined4 FUN_7100770a20(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (0x10 < param_1) {
    if (param_1 == 0x30003) {
      return 0x255c;
    }
    if (param_1 == 0x3000f) {
      return 0x275c;
    }
    if (param_1 != 0x1000) {
      return 0x35c;
    }
    return 0x235c;
  }
  if (param_1 < 1) {
switchD_7100770a64_caseD_c:
    uVar1 = 0x35c;
  }
  else {
    switch(param_1) {
    case 1:
      uVar1 = 0x55c;
      break;
    case 2:
      uVar1 = 0x75c;
      break;
    case 3:
      uVar1 = 0x95c;
      break;
    case 4:
      uVar1 = 0xb5c;
      break;
    case 5:
      uVar1 = 0xd5c;
      break;
    case 6:
      uVar1 = 0xf5c;
      break;
    case 7:
      uVar1 = 0x115c;
      break;
    case 8:
      uVar1 = 0x135c;
      break;
    case 9:
      uVar1 = 0x155c;
      break;
    case 10:
      uVar1 = 0x175c;
      break;
    case 0xb:
      uVar1 = 0x195c;
      break;
    default:
      goto switchD_7100770a64_caseD_c;
    case 0xd:
      uVar1 = 0x1b5c;
      break;
    case 0xe:
      uVar1 = 0x1d5c;
      break;
    case 0xf:
      uVar1 = 0x1f5c;
      break;
    case 0x10:
      uVar1 = 0x215c;
    }
  }
  return uVar1;
}



// ===== FUN_7100770c40 @ 7100770c40 (size=784) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100770c40(ulong param_1,ulong param_2,undefined8 param_3)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  undefined2 uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar18;
  undefined2 uVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  ulong uVar22;
  ulong uVar23;
  undefined4 uVar24;
  ulong uVar17;
  
  uVar23 = param_2 >> 0x10 & 0x3fff;
  uVar9 = (uint)uVar23;
  uVar6 = (uint)param_2;
  uVar24 = (undefined4)param_3;
  uVar8 = (uint)((ulong)param_3 >> 0x20);
  uVar16 = uVar24;
  if ((uVar6 >> 0x1e & 1) == 0) {
    if ((param_2 >> 0x1e & 2) == 0) {
      uVar4 = 0;
      uVar24 = 0;
      uVar7 = 0;
      uVar10 = 0;
      goto LAB_7100770c74;
    }
    uVar4 = 0;
    uVar11 = 0;
    uVar22 = param_1 & 0xffffffff | param_2 << 0x20;
    uVar7 = 0;
    uVar9 = (uint)(param_2 >> 0x1e) & 1;
    uVar24 = 0;
LAB_7100770e08:
    uVar10 = (uint)((ulong)param_3 >> 0x20);
    uVar19 = (undefined2)uVar4;
    if ((uVar6 == 0xc010001e || uVar6 == 0xc4c80203) || uVar6 == 0x400c060e) goto LAB_7100770cac;
    puVar21 = (undefined4 *)&DAT_7100d18a58;
    uVar17 = (ulong)_DAT_7100d18a64;
    uVar15 = (uint)_DAT_7100d18a64;
    puVar5 = (undefined8 *)tpidrro_el0;
    bVar2 = _DAT_7100d18a64 != 0;
    uVar6 = uVar7;
    uVar18 = uVar24;
    if (bVar2 && uVar4 <= uVar17) goto LAB_7100770e60;
  }
  else {
    uVar10 = uVar8 >> 4;
    uVar11 = uVar8 >> 4;
    uVar7 = uVar8 & 0xf;
    uVar4 = uVar23;
    if ((param_2 >> 0x1e & 2) == 0) {
LAB_7100770c74:
      uVar8 = 0;
      param_3 = 0;
      uVar23 = 0;
      uVar22 = param_1 & 0xffffffff | param_2 << 0x20;
      uVar16 = 0;
LAB_7100770c90:
      uVar11 = uVar10;
      uVar9 = (uint)uVar4;
      if (uVar6 != 0xc018481b && uVar6 != 0xc004001c) goto LAB_7100770e08;
    }
    else {
      uVar15 = uVar6 & 0xc000ffff;
      uVar22 = param_1 & 0xffffffff | param_2 << 0x20;
      if ((uVar15 != 0xc0004402 && uVar15 != 0xc000471c) &&
         (uVar10 = uVar8 >> 4, 2 < uVar15 + 0x3fffffdc && uVar15 != 0xc0004808))
      goto LAB_7100770c90;
    }
LAB_7100770cac:
    uVar10 = (uint)((ulong)param_3 >> 0x20);
    uVar19 = (undefined2)uVar4;
    puVar21 = (undefined4 *)&DAT_7100d18a48;
    uVar17 = (ulong)_DAT_7100d18a54;
    uVar15 = (uint)_DAT_7100d18a54;
    puVar5 = (undefined8 *)tpidrro_el0;
    bVar2 = _DAT_7100d18a54 != 0;
    uVar6 = uVar7;
    uVar18 = uVar24;
    if (bVar2 && uVar4 <= uVar17) {
LAB_7100770e60:
      bVar2 = uVar15 != uVar9;
      uVar14 = uVar11 & 0x3f;
      uVar17 = (ulong)(uVar15 - uVar9);
      uVar9 = 0;
      uVar24 = 0;
      uVar11 = 0;
      uVar6 = 0;
      goto LAB_7100770ce4;
    }
  }
  uVar11 = uVar11 & 0x3fffff;
  uVar14 = 0;
  uVar7 = 0;
  uVar19 = 0;
  uVar18 = 0;
LAB_7100770ce4:
  uVar13 = (undefined2)uVar8;
  uVar20 = (undefined4)uVar23;
  *(undefined2 *)((long)puVar5 + 10) = uVar19;
  *(undefined4 *)((long)puVar5 + 0xc) = uVar18;
  *(uint *)(puVar5 + 2) = uVar9;
  puVar5[6] = 0x49434653;
  puVar5[7] = 1;
  *(ushort *)(puVar5 + 1) = (ushort)(uVar14 << 6) | (ushort)(uVar7 << 0xc);
  *puVar5 = 0xc0b01110004;
  *(undefined4 *)((long)puVar5 + 0x14) = uVar24;
  *(uint *)(puVar5 + 3) = uVar11 << 2 | uVar6 << 0x1c;
  if (bVar2 && uVar23 <= uVar17) {
    uVar20 = 0;
    uVar24 = 0;
    uVar9 = 0;
    uVar8 = 0;
  }
  else {
    uVar9 = uVar10 >> 4 & 0x3fffff;
    uVar8 = uVar8 & 0xf;
    uVar13 = 0;
    uVar23 = 0;
    uVar24 = uVar16;
    uVar16 = 0;
  }
  *(undefined4 *)((long)puVar5 + 0x1c) = uVar20;
  *(undefined4 *)(puVar5 + 4) = uVar24;
  puVar5[8] = uVar22;
  *(short *)(puVar5 + 10) = (short)uVar23;
  *(undefined4 *)((long)puVar5 + 0x54) = uVar16;
  *(uint *)((long)puVar5 + 0x24) = uVar9 << 2 | uVar8 << 0x1c;
  *(undefined2 *)(puVar5 + 0xb) = uVar13;
  *(short *)((long)puVar5 + 0x5a) = (short)uVar23;
  uVar23 = FUN_710076d0c0(*puVar21);
  if ((int)uVar23 == 0) {
    plVar1 = (long *)tpidrro_el0;
    if (*plVar1 < 0) {
      uVar8 = *(uint *)(plVar1 + 1);
      plVar3 = (long *)((long)plVar1 + 0x14);
      if ((uVar8 & 1) == 0) {
        plVar3 = (long *)((long)plVar1 + 0xc);
      }
      lVar12 = (((ulong)(uVar8 >> 1) & 0xf) + ((ulong)(uVar8 >> 5) & 0xf)) * 4;
    }
    else {
      plVar3 = plVar1 + 1;
      lVar12 = 0;
    }
    uVar4 = (long)plVar3 +
            ((lVar12 + (ulong)((uint)*plVar1 >> 0x10 & 0xf) * 8) - (long)plVar1) + 0xf &
            0xfffffffffffffff0;
    if (*(int *)((long)plVar1 + uVar4) == 0x4f434653) {
      uVar8 = *(uint *)((long)plVar1 + uVar4 + 8);
      uVar23 = (ulong)uVar8;
      if (uVar8 == 0) {
        uVar23 = FUN_7100770a20(*(undefined4 *)((long)plVar1 + uVar4 + 0x10));
        return uVar23;
      }
    }
    else {
      uVar23 = 0x5f59;
    }
  }
  return uVar23;
}



// ===== FUN_7100770f50 @ 7100770f50 (size=212) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100770f50(undefined4 param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0x900000004;
  *(undefined4 *)(plVar2 + 4) = param_1;
  plVar2[2] = 0x49434653;
  plVar2[3] = 2;
  uVar3 = FUN_710076d0c0(_DAT_7100d18a58);
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
    if (*(int *)((long)plVar2 + uVar5) == 0x4f434653) {
      uVar1 = *(uint *)((long)plVar2 + uVar5 + 8);
      uVar3 = (ulong)uVar1;
      if (uVar1 == 0) {
        uVar3 = FUN_7100770a20(*(undefined4 *)((long)plVar2 + uVar5 + 0x10));
        return uVar3;
      }
    }
    else {
      uVar3 = 0x5f59;
    }
  }
  return uVar3;
}



// ===== FUN_7100771030 @ 7100771030 (size=268) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100771030(ulong param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  plVar2 = (long *)tpidrro_el0;
  *plVar2 = 0xa00000004;
  plVar2[4] = param_1 & 0xffffffff | param_2 << 0x20;
  plVar2[2] = 0x49434653;
  plVar2[3] = 4;
  iVar3 = FUN_710076d0c0(_DAT_7100d18a58);
  if (iVar3 == 0) {
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
    iVar3 = 0x5f59;
    uVar4 = (long)plVar5 + ((lVar6 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    if ((*(int *)((long)plVar2 + uVar4) == 0x4f434653) &&
       (iVar3 = *(int *)((long)plVar2 + uVar4 + 8), iVar3 == 0)) {
      lVar6 = *plVar5;
      iVar3 = FUN_7100770a20(*(undefined4 *)((long)plVar2 + uVar4 + 0x10));
      if (iVar3 == 0) {
        FUN_7100749590(param_3,(int)lVar6,1);
        iVar3 = 0;
      }
    }
  }
  return iVar3;
}



// ===== FUN_7100771140 @ 7100771140 (size=572) =====

int FUN_7100771140(long param_1,ulong param_2,long param_3,undefined4 *param_4,undefined4 *param_5,
                  undefined8 param_6,undefined8 param_7,undefined4 *param_8)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined4 uVar12;
  undefined4 local_14;
  undefined8 local_10;
  undefined4 local_8;
  
  lVar11 = 0;
  if (param_3 != 0) {
    lVar11 = FUN_710081ce00(param_3);
    lVar11 = lVar11 + 1;
  }
  local_14 = 0;
  iVar6 = FUN_710075e4c0(&local_14,0x736572736e646673);
  uVar5 = local_14;
  if (iVar6 == 0) {
    plVar2 = (long *)tpidrro_el0;
    *plVar2 = -0x7ffffff3feeffffc;
    *(int *)((long)plVar2 + 0x14) = (int)lVar11;
    *(int *)(plVar2 + 3) = (int)param_3;
    *(undefined4 *)(plVar2 + 1) = 1;
    plVar2[8] = param_2 & 0xff | param_1 << 0x20;
    plVar2[9] = 0;
    plVar2[6] = 0x49434653;
    plVar2[7] = 2;
    uVar1 = (uint)((ulong)param_3 >> 0x20);
    uVar4 = (uint)((ulong)param_6 >> 0x20);
    *(uint *)((long)plVar2 + 0x1c) =
         (uVar1 >> 4 & 0x3fffff) << 2 | ((uint)((ulong)lVar11 >> 0x20) & 0xf) << 0x18 |
         uVar1 << 0x1c;
    *(int *)(plVar2 + 4) = (int)param_7;
    *(int *)((long)plVar2 + 0x24) = (int)param_6;
    *(uint *)(plVar2 + 5) =
         (uVar4 >> 4 & 0x3fffff) << 2 | ((uint)((ulong)param_7 >> 0x20) & 0xf) << 0x18 |
         uVar4 << 0x1c;
    iVar6 = FUN_710076d0c0(local_14);
    if (iVar6 == 0) {
      if (*plVar2 < 0) {
        uVar1 = *(uint *)(plVar2 + 1);
        plVar7 = (long *)((long)plVar2 + 0x14);
        if ((uVar1 & 1) == 0) {
          plVar7 = (long *)((long)plVar2 + 0xc);
        }
        lVar11 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
      }
      else {
        plVar7 = plVar2 + 1;
        lVar11 = 0;
      }
      uVar8 = (long)plVar7 +
              ((lVar11 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf &
              0xfffffffffffffff0;
      if (*(int *)((long)plVar2 + uVar8) == 0x4f434653) {
        iVar6 = *(int *)((long)plVar2 + uVar8 + 8);
        if (iVar6 == 0) {
          local_10 = *(undefined8 *)((long)plVar2 + uVar8 + 0x10);
          uVar10 = *(undefined4 *)((long)plVar2 + uVar8 + 0x18);
          uVar12 = (undefined4)local_10;
          uVar9 = (undefined4)((ulong)local_10 >> 0x20);
          local_8 = uVar10;
        }
        else {
          uVar10 = 0;
          uVar9 = 0;
          uVar12 = 0;
        }
      }
      else {
        uVar10 = 0;
        uVar9 = 0;
        uVar12 = 0;
        iVar6 = 0x5f59;
      }
    }
    else {
      uVar10 = 0;
      uVar9 = 0;
      uVar12 = 0;
    }
    puVar3 = (undefined8 *)tpidrro_el0;
    *puVar3 = 2;
    FUN_710076d0c0(uVar5);
    FUN_710076d060(uVar5);
    if (iVar6 == 0) {
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = uVar12;
      }
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = uVar9;
      }
      if (param_8 != (undefined4 *)0x0) {
        *param_8 = uVar10;
      }
    }
    return iVar6;
  }
  return iVar6;
}



// ===== FUN_7100771380 @ 7100771380 (size=684) =====

int FUN_7100771380(long param_1,ulong param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined4 *param_9,
                  undefined4 *param_10,undefined4 *param_11)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long lVar12;
  long lVar13;
  undefined4 local_14;
  undefined8 local_10;
  undefined4 local_8;
  
  lVar13 = 0;
  if (param_3 != 0) {
    lVar13 = FUN_710081ce00(param_3);
    lVar13 = lVar13 + 1;
  }
  lVar12 = 0;
  if (param_4 != 0) {
    lVar12 = FUN_710081ce00(param_4);
    lVar12 = lVar12 + 1;
  }
  local_14 = 0;
  iVar6 = FUN_710075e4c0(&local_14,0x736572736e646673);
  uVar5 = local_14;
  if (iVar6 == 0) {
    plVar2 = (long *)tpidrro_el0;
    *plVar2 = -0x7ffffff3fecffffc;
    *(undefined4 *)(plVar2 + 1) = 1;
    plVar2[10] = 0x49434653;
    plVar2[0xb] = 6;
    uVar1 = (uint)((ulong)param_3 >> 0x20);
    *(int *)((long)plVar2 + 0x14) = (int)lVar13;
    *(int *)(plVar2 + 3) = (int)param_3;
    uVar4 = (uint)((ulong)param_4 >> 0x20);
    *(int *)((long)plVar2 + 0x2c) = (int)param_6;
    *(int *)(plVar2 + 6) = (int)param_5;
    plVar2[0xc] = param_2 & 0xff | param_1 << 0x20;
    plVar2[0xd] = 0;
    *(uint *)((long)plVar2 + 0x1c) =
         (uVar1 >> 4 & 0x3fffff) << 2 | ((uint)((ulong)lVar13 >> 0x20) & 0xf) << 0x18 |
         uVar1 << 0x1c;
    *(int *)(plVar2 + 4) = (int)lVar12;
    *(int *)((long)plVar2 + 0x24) = (int)param_4;
    *(uint *)(plVar2 + 5) =
         (uVar4 >> 4 & 0x3fffff) << 2 | ((uint)((ulong)lVar12 >> 0x20) & 0xf) << 0x18 |
         uVar4 << 0x1c;
    uVar1 = (uint)((ulong)param_5 >> 0x20);
    uVar4 = (uint)((ulong)param_7 >> 0x20);
    *(uint *)((long)plVar2 + 0x34) =
         (uVar1 >> 4 & 0x3fffff) << 2 | ((uint)((ulong)param_6 >> 0x20) & 0xf) << 0x18 |
         uVar1 << 0x1c;
    *(int *)(plVar2 + 7) = (int)param_8;
    *(int *)((long)plVar2 + 0x3c) = (int)param_7;
    *(uint *)(plVar2 + 8) =
         (uVar4 >> 4 & 0x3fffff) << 2 | ((uint)((ulong)param_8 >> 0x20) & 0xf) << 0x18 |
         uVar4 << 0x1c;
    iVar6 = FUN_710076d0c0(local_14);
    if (iVar6 == 0) {
      if (*plVar2 < 0) {
        uVar1 = *(uint *)(plVar2 + 1);
        plVar7 = (long *)((long)plVar2 + 0x14);
        if ((uVar1 & 1) == 0) {
          plVar7 = (long *)((long)plVar2 + 0xc);
        }
        lVar13 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
      }
      else {
        plVar7 = plVar2 + 1;
        lVar13 = 0;
      }
      uVar8 = (long)plVar7 +
              ((lVar13 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf &
              0xfffffffffffffff0;
      if (*(int *)((long)plVar2 + uVar8) == 0x4f434653) {
        iVar6 = *(int *)((long)plVar2 + uVar8 + 8);
        if (iVar6 == 0) {
          local_10 = *(undefined8 *)((long)plVar2 + uVar8 + 0x10);
          uVar11 = *(undefined4 *)((long)plVar2 + uVar8 + 0x18);
          uVar9 = (undefined4)local_10;
          uVar10 = (undefined4)((ulong)local_10 >> 0x20);
          local_8 = uVar11;
        }
        else {
          uVar11 = 0;
          uVar9 = 0;
          uVar10 = 0;
        }
      }
      else {
        uVar11 = 0;
        uVar9 = 0;
        uVar10 = 0;
        iVar6 = 0x5f59;
      }
    }
    else {
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
    }
    puVar3 = (undefined8 *)tpidrro_el0;
    *puVar3 = 2;
    FUN_710076d0c0(uVar5);
    FUN_710076d060(uVar5);
    if (iVar6 == 0) {
      if (param_9 != (undefined4 *)0x0) {
        *param_9 = uVar9;
      }
      if (param_10 != (undefined4 *)0x0) {
        *param_10 = uVar10;
      }
      if (param_11 != (undefined4 *)0x0) {
        *param_11 = uVar11;
      }
    }
    return iVar6;
  }
  return iVar6;
}



// ===== FUN_7100771630 @ 7100771630 (size=560) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_7100771630(void)

{
  undefined8 *puVar1;
  uint uVar2;
  
  if (_DAT_7100d18a74 != 0) {
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 2;
    FUN_710076d0c0(_DAT_7100d18a70 & 0xffffffff);
    if (_DAT_7100d18a74 != 0) {
      FUN_710076d060(_DAT_7100d18a70 & 0xffffffff);
    }
  }
  _DAT_7100d18a70 = 0;
  _DAT_7100d18a78 = 0;
  if (_DAT_7100d18a84 != 0) {
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 2;
    FUN_710076d0c0(_DAT_7100d18a80 & 0xffffffff);
    if (_DAT_7100d18a84 != 0) {
      FUN_710076d060(_DAT_7100d18a80 & 0xffffffff);
    }
  }
  _DAT_7100d18a80 = 0;
  _DAT_7100d18a88 = 0;
  if (_DAT_7100d18a94 != 0) {
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 2;
    FUN_710076d0c0(_DAT_7100d18a90 & 0xffffffff);
    if (_DAT_7100d18a94 != 0) {
      FUN_710076d060(_DAT_7100d18a90 & 0xffffffff);
    }
  }
  _DAT_7100d18a90 = 0;
  _DAT_7100d18a98 = 0;
  if (_DAT_7100d18aa4 != 0) {
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 2;
    FUN_710076d0c0(_DAT_7100d18aa0 & 0xffffffff);
    if (_DAT_7100d18aa4 != 0) {
      FUN_710076d060(_DAT_7100d18aa0 & 0xffffffff);
    }
  }
  _DAT_7100d18aa0 = 0;
  _DAT_7100d18aa8 = 0;
  if (_DAT_7100d18ab4 != 0) {
    puVar1 = (undefined8 *)tpidrro_el0;
    *puVar1 = 2;
    FUN_710076d0c0(_DAT_7100d18ab0 & 0xffffffff);
    if (_DAT_7100d18ab4 != 0) {
      FUN_710076d060(_DAT_7100d18ab0 & 0xffffffff);
    }
  }
  _DAT_7100d18ab0 = 0;
  _DAT_7100d18ab8 = 0;
  uVar2 = FUN_7100769b90();
  if ((0xfffff < uVar2) && (DAT_7100af38a0 == 2)) {
    if (_DAT_7100d18ac4 != 0) {
      puVar1 = (undefined8 *)tpidrro_el0;
      *puVar1 = 2;
      FUN_710076d0c0(_DAT_7100d18ac0 & 0xffffffff);
      if (_DAT_7100d18ac4 != 0) {
        FUN_710076d060(_DAT_7100d18ac0 & 0xffffffff);
      }
    }
    DAT_7100af38a0 = -1;
    _DAT_7100d18ac0 = 0;
    _DAT_7100d18ac8 = 0;
    return;
  }
  DAT_7100af38a0 = -1;
  return;
}



// ===== FUN_7100771860 @ 7100771860 (size=256) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100771860(int *param_1,undefined4 param_2)

{
  uint uVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  
  uVar4 = _DAT_7100d18abc;
  plVar2 = (long *)tpidrro_el0;
  *(undefined4 *)(plVar2 + 3) = param_2;
  *(undefined4 *)((long)plVar2 + 0x1c) = 0;
  uVar3 = _DAT_7100d18ab0;
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



// ===== FUN_7100771960 @ 7100771960 (size=872) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100771960(int param_1)

{
  bool bVar1;
  undefined2 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined4 uVar12;
  undefined8 local_10;
  undefined8 uStack_8;
  
  FUN_7100749670(0x7100d18a68);
  iVar6 = _DAT_7100d18a6c + 1;
  bVar1 = _DAT_7100d18a6c != 0;
  _DAT_7100d18a6c = iVar6;
  if (bVar1) goto LAB_7100771994;
  if (param_1 == -1 || param_1 == 2) {
    iVar6 = FUN_710075e590(&local_10,0x6d3a6976);
    uVar12 = 2;
    DAT_7100af38a0 = 2;
    if (iVar6 != 0 && param_1 == -1) {
      iVar6 = FUN_710075e590(&local_10,0x733a6976);
      DAT_7100af38a0 = 1;
      if (iVar6 != 0) goto LAB_7100771a34;
      goto LAB_7100771c1c;
    }
    if (iVar6 != 0) goto LAB_7100771b30;
LAB_7100771c24:
    uVar7 = 1;
  }
  else {
    if (param_1 == 1) {
      iVar6 = FUN_710075e590(&local_10,0x733a6976);
      DAT_7100af38a0 = 1;
      if (iVar6 != 0) goto LAB_7100771b30;
LAB_7100771c1c:
      DAT_7100af38a0 = 1;
      uVar12 = 1;
      goto LAB_7100771c24;
    }
    if (param_1 != 0) {
      iVar6 = 0x1759;
      goto LAB_7100771b30;
    }
LAB_7100771a34:
    iVar6 = FUN_710075e590(&local_10,0x753a6976);
    DAT_7100af38a0 = 0;
    uVar7 = 0;
    if (iVar6 != 0) goto LAB_7100771b30;
    uVar12 = 0;
  }
  uVar2 = uStack_8._4_2_;
  plVar3 = (long *)tpidrro_el0;
  *plVar3 = 0x900000004;
  *(undefined4 *)(plVar3 + 3) = uVar12;
  *(undefined4 *)((long)plVar3 + 0x1c) = 0;
  plVar3[2] = 0x49434653;
  *(undefined4 *)(plVar3 + 4) = uVar7;
  iVar6 = FUN_710076d0c0(local_10 & 0xffffffff);
  if (iVar6 == 0) {
    if (*plVar3 < 0) {
      uVar8 = *(uint *)(plVar3 + 1);
      lVar10 = (long)plVar3 + 0x14;
      if ((uVar8 & 1) == 0) {
        lVar10 = (long)plVar3 + 0xc;
      }
      plVar11 = (long *)(lVar10 + ((ulong)(uVar8 >> 1) & 0xf) * 4);
      lVar10 = ((ulong)(uVar8 >> 5) & 0xf) << 2;
    }
    else {
      plVar11 = plVar3 + 1;
      lVar10 = 0;
    }
    iVar6 = 0x5f59;
    uVar9 = (long)plVar11 +
            ((lVar10 + (ulong)((uint)*plVar3 >> 0x10 & 0xf) * 8) - (long)plVar3) + 0xf &
            0xfffffffffffffff0;
    if ((*(int *)((long)plVar3 + uVar9) == 0x4f434653) &&
       (iVar6 = *(int *)((long)plVar3 + uVar9 + 8), iVar6 == 0)) {
      _DAT_7100d18ab0 = (int)*plVar11;
      if (_DAT_7100d18ab0 == 0) {
        _DAT_7100d18ab0 = 0;
        _DAT_7100d18ab4 = 0;
        _DAT_7100d18ab8 = 0;
        _DAT_7100d18abc = 0;
        uRam0000007100d18abe = 0;
      }
      else {
        _DAT_7100d18ab4 = 1;
        _DAT_7100d18ab8 = 0;
        _DAT_7100d18abc = uVar2;
      }
    }
  }
  uVar8 = FUN_7100769b90();
  if ((uVar8 < 0x100000) || (uVar9 = local_10, uVar5 = uStack_8, DAT_7100af38a0 != 2)) {
    if (local_10._4_4_ != 0) {
      puVar4 = (undefined8 *)tpidrro_el0;
      *puVar4 = 2;
      FUN_710076d0c0(local_10 & 0xffffffff);
      if (local_10._4_4_ != 0) {
        FUN_710076d060(local_10 & 0xffffffff);
      }
    }
    local_10 = 0;
    uStack_8 = 0;
    uVar9 = _DAT_7100d18ac0;
    uVar5 = _DAT_7100d18ac8;
  }
  _DAT_7100d18ac8 = uVar5;
  _DAT_7100d18ac0 = uVar9;
  if (iVar6 == 0) {
    iVar6 = FUN_7100771860(&DAT_7100d18aa0,100);
    if (0 < DAT_7100af38a0) {
      if (iVar6 != 0) goto LAB_7100771b30;
      iVar6 = FUN_7100771860(&DAT_7100d18a90,0x65);
      if (1 < DAT_7100af38a0) {
        if (iVar6 != 0) goto LAB_7100771b30;
        iVar6 = FUN_7100771860(&DAT_7100d18a80,0x66);
      }
      if (0 < DAT_7100af38a0) {
        if (iVar6 != 0) goto LAB_7100771b30;
        uVar8 = FUN_7100769b90();
        if (uVar8 < 0x20000) goto LAB_7100771994;
        iVar6 = FUN_7100771860(&DAT_7100d18a70,0x67);
      }
    }
    if (iVar6 == 0) {
LAB_7100771994:
      FUN_7100749740(0x7100d18a68);
      return 0;
    }
  }
LAB_7100771b30:
  FUN_7100771630();
  _DAT_7100d18a6c = _DAT_7100d18a6c + -1;
  FUN_7100749740(0x7100d18a68);
  return iVar6;
}



// ===== FUN_7100771cd0 @ 7100771cd0 (size=72) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100771cd0(void)

{
  FUN_7100749670();
  if (_DAT_7100d18a6c != 0) {
    _DAT_7100d18a6c = _DAT_7100d18a6c + -1;
    if (_DAT_7100d18a6c == 0) {
      FUN_7100771630();
    }
  }
  FUN_7100749740(0x7100d18a68);
  return;
}



// ===== FUN_7100771d20 @ 7100771d20 (size=12) =====

undefined1 * FUN_7100771d20(void)

{
  return &DAT_7100d18aa0;
}



// ===== FUN_7100771d30 @ 7100771d30 (size=268) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100771d30(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  plVar2 = (long *)tpidrro_el0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  lVar3 = FUN_710081f760(param_2 + 1,param_1,0x3f);
  *plVar2 = 0x1800000004;
  plVar2[2] = 0x49434653;
  plVar2[3] = 0x3f2;
  lVar8 = *(long *)(lVar3 + 0x18);
  lVar7 = *(long *)(lVar3 + 0x10);
  lVar11 = *(long *)(lVar3 + 0x20);
  lVar12 = *(long *)(lVar3 + 0x28);
  lVar9 = param_2[1];
  lVar10 = *(long *)(lVar3 + 0x38);
  lVar3 = *(long *)(lVar3 + 0x30);
  plVar2[5] = param_2[2];
  plVar2[4] = lVar9;
  plVar2[7] = lVar8;
  plVar2[6] = lVar7;
  plVar2[8] = lVar11;
  plVar2[9] = lVar12;
  plVar2[0xb] = lVar10;
  plVar2[10] = lVar3;
  uVar4 = FUN_710076d0c0(_DAT_7100d18ab0);
  if ((int)uVar4 == 0) {
    if (*plVar2 < 0) {
      uVar1 = *(uint *)(plVar2 + 1);
      plVar5 = (long *)((long)plVar2 + 0x14);
      if ((uVar1 & 1) == 0) {
        plVar5 = (long *)((long)plVar2 + 0xc);
      }
      lVar3 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
    }
    else {
      plVar5 = plVar2 + 1;
      lVar3 = 0;
    }
    uVar6 = (long)plVar5 + ((lVar3 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf
            & 0xfffffffffffffff0;
    uVar4 = 0x5f59;
    if ((*(int *)((long)plVar2 + uVar6) == 0x4f434653) &&
       (uVar1 = *(uint *)((long)plVar2 + uVar6 + 8), uVar4 = (ulong)uVar1, uVar1 == 0)) {
      *param_2 = *(undefined8 *)((long)plVar2 + uVar6 + 0x10);
      *(undefined1 *)(param_2 + 9) = 1;
    }
  }
  return uVar4;
}



// ===== FUN_7100771e40 @ 7100771e40 (size=236) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100771e40(long *param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    plVar2 = (long *)tpidrro_el0;
    *plVar2 = 0xa00000004;
    plVar2[2] = 0x49434653;
    plVar2[3] = 0x3fc;
    plVar2[4] = *param_1;
    uVar3 = FUN_710076d0c0(_DAT_7100d18ab0);
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
      if ((*(int *)((long)plVar2 + uVar6) == 0x4f434653) &&
         (uVar1 = *(uint *)((long)plVar2 + uVar6 + 8), uVar3 = (ulong)uVar1, uVar1 == 0)) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[8] = 0;
        param_1[9] = 0;
      }
    }
    return uVar3;
  }
  return 0x1159;
}



// ===== FUN_7100771f30 @ 7100771f30 (size=244) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100771f30(long *param_1)

{
  uint uVar1;
  long *plVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  if (((ulong)param_1[1] >> 0x20 & 1) != 0) {
    uVar3 = 0x7e5;
    if ((*(byte *)((long)param_1 + 0xc) & 2) != 0) {
      uVar3 = 0x7ef;
    }
    plVar2 = (long *)tpidrro_el0;
    *plVar2 = 0xa00000004;
    *(undefined4 *)(plVar2 + 3) = uVar3;
    *(undefined4 *)((long)plVar2 + 0x1c) = 0;
    plVar2[2] = 0x49434653;
    plVar2[4] = *param_1;
    uVar4 = FUN_710076d0c0(_DAT_7100d18ab0);
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
      if ((*(int *)((long)plVar2 + uVar6) == 0x4f434653) &&
         (uVar1 = *(uint *)((long)plVar2 + uVar6 + 8), uVar4 = (ulong)uVar1, uVar1 == 0)) {
        *param_1 = 0;
        param_1[1] = 0;
      }
    }
    return uVar4;
  }
  return 0x1159;
}



// ===== FUN_7100772030 @ 7100772030 (size=916) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100772030(long *param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  undefined4 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  uint local_100;
  uint local_fc;
  undefined4 auStack_f8 [62];
  
  if ((*(byte *)(param_1 + 9) & 1) == 0) {
    return 0x1159;
  }
  param_2[1] = 0;
  lVar11 = _DAT_7100d18ad0;
  *param_2 = _DAT_7100d18ad0;
  if (lVar11 == 0) {
    lVar11 = FUN_710074cf70();
    if ((lVar11 != 0) && (uVar7 = FUN_710074cf40(param_2), (int)uVar7 != 0)) {
      return uVar7;
    }
    lVar11 = *param_2;
    bVar3 = *(byte *)(param_1 + 9);
    if (lVar11 == 0) {
      *(byte *)((long)param_2 + 0xc) = *(byte *)((long)param_2 + 0xc) | 2;
      uVar1 = DAT_7100af38a4;
      if ((bVar3 & 1) == 0) {
        return 0x1159;
      }
      if (DAT_7100af38a0 < 1) {
        if (_DAT_7100d18ab0 == 0) {
          return 0x1159;
        }
        lVar11 = *param_1;
        uVar12 = 0x7ee;
        piVar9 = (int *)&DAT_7100d18ab0;
      }
      else {
        uVar5 = FUN_7100769b90();
        if (uVar5 < 0x70000) {
          piVar9 = (int *)&DAT_7100d18a90;
          uVar12 = 0x908;
        }
        else {
          piVar9 = (int *)&DAT_7100d18a80;
          uVar12 = 0x7dc;
        }
        if (*piVar9 == 0) {
          return 0x1159;
        }
        lVar11 = *param_1;
      }
      plVar4 = (long *)tpidrro_el0;
      plVar4[4] = 0x49434653;
      uVar5 = (uint)((ulong)&local_100 >> 0x20);
      *(undefined4 *)(plVar4 + 5) = uVar12;
      *(undefined4 *)((long)plVar4 + 0x2c) = 0;
      *plVar4 = 0xc01000004;
      *(undefined4 *)(plVar4 + 1) = 0x100;
      *(int *)((long)plVar4 + 0xc) = (int)&local_100;
      plVar4[6] = (ulong)uVar1;
      plVar4[7] = lVar11;
      iVar2 = *piVar9;
      *(uint *)(plVar4 + 2) = uVar5 << 0x1c | (uVar5 >> 4 & 0x3fffff) << 2;
      uVar7 = FUN_710076d0c0(iVar2);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      if (*plVar4 < 0) {
        uVar1 = *(uint *)(plVar4 + 1);
        plVar8 = (long *)((long)plVar4 + 0x14);
        if ((uVar1 & 1) == 0) {
          plVar8 = (long *)((long)plVar4 + 0xc);
        }
        lVar11 = (((ulong)(uVar1 >> 5) & 0xf) + ((ulong)(uVar1 >> 1) & 0xf)) * 4;
      }
      else {
        plVar8 = plVar4 + 1;
        lVar11 = 0;
      }
      uVar7 = (long)plVar8 +
              ((lVar11 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf &
              0xfffffffffffffff0;
      if (*(int *)((long)plVar4 + uVar7) != 0x4f434653) {
        return 0x5f59;
      }
      uVar1 = *(uint *)((long)plVar4 + uVar7 + 8);
      if (uVar1 != 0) {
        return (ulong)uVar1;
      }
      uVar10 = *(ulong *)((long)plVar4 + uVar7 + 0x18);
      *param_2 = *(long *)((long)plVar4 + uVar7 + 0x10);
      goto LAB_7100772168;
    }
  }
  else {
    bVar3 = *(byte *)(param_1 + 9);
  }
  if ((bVar3 & 1) == 0) {
    return 0x1159;
  }
  lVar14 = param_1[2];
  lVar13 = param_1[1];
  lVar16 = param_1[4];
  lVar15 = param_1[3];
  lVar18 = param_1[6];
  lVar17 = param_1[5];
  lVar19 = param_1[7];
  lVar20 = param_1[8];
  lVar6 = FUN_710074cf70();
  plVar4 = (long *)tpidrro_el0;
  *plVar4 = -0x7fffffe3fefffffc;
  *(undefined4 *)((long)plVar4 + 0x2c) = 0;
  *(undefined4 *)(plVar4 + 1) = 1;
  *(undefined4 *)((long)plVar4 + 0x14) = 0x100;
  *(int *)(plVar4 + 3) = (int)&local_100;
  *(ulong *)((long)plVar4 + 0x1c) =
       ((ulong)&local_100 & 0x3fffff000000000) >> 0x22 | 0x4943465300000000 |
       ((ulong)&local_100 & 0xf00000000) >> 4;
  *(undefined8 *)((long)plVar4 + 0x24) = 0x7e400000000;
  plVar4[7] = lVar14;
  plVar4[6] = lVar13;
  plVar4[9] = lVar16;
  plVar4[8] = lVar15;
  plVar4[0xb] = lVar18;
  plVar4[10] = lVar17;
  plVar4[0xd] = lVar20;
  plVar4[0xc] = lVar19;
  iVar2 = _DAT_7100d18ab0;
  plVar4[0xe] = lVar11;
  plVar4[0xf] = lVar6;
  uVar7 = FUN_710076d0c0(iVar2);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if (*plVar4 < 0) {
    uVar1 = *(uint *)(plVar4 + 1);
    plVar8 = (long *)((long)plVar4 + 0x14);
    if ((uVar1 & 1) == 0) {
      plVar8 = (long *)((long)plVar4 + 0xc);
    }
    lVar11 = (((ulong)(uVar1 >> 5) & 0xf) + ((ulong)(uVar1 >> 1) & 0xf)) * 4;
  }
  else {
    plVar8 = plVar4 + 1;
    lVar11 = 0;
  }
  uVar7 = (long)plVar8 + ((lVar11 + (ulong)((uint)*plVar4 >> 0x10 & 0xf) * 8) - (long)plVar4) + 0xf
          & 0xfffffffffffffff0;
  if (*(int *)((long)plVar4 + uVar7) != 0x4f434653) {
    return 0x5f59;
  }
  uVar1 = *(uint *)((long)plVar4 + uVar7 + 8);
  if (uVar1 != 0) {
    return (ulong)uVar1;
  }
  uVar10 = *(ulong *)((long)plVar4 + uVar7 + 0x10);
LAB_7100772168:
  *(byte *)((long)param_2 + 0xc) = *(byte *)((long)param_2 + 0xc) | 1;
  if ((local_fc <= uVar10) && (local_fc + local_100 <= uVar10 && 0xb < local_100)) {
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)((long)auStack_f8 + (ulong)local_fc);
    return 0;
  }
  FUN_7100771f30(param_2);
  return 0x1759;
}



// ===== FUN_71007723d0 @ 71007723d0 (size=216) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_71007723d0(long *param_1,ulong param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  if (((ulong)param_1[1] >> 0x20 & 1) != 0) {
    lVar3 = *param_1;
    plVar2 = (long *)tpidrro_el0;
    *plVar2 = 0xc00000004;
    plVar2[2] = 0x49434653;
    plVar2[3] = 0x835;
    plVar2[4] = param_2 & 0xffffffff;
    plVar2[5] = lVar3;
    uVar4 = FUN_710076d0c0(_DAT_7100d18ab0);
    if ((int)uVar4 == 0) {
      if (*plVar2 < 0) {
        uVar1 = *(uint *)(plVar2 + 1);
        plVar5 = (long *)((long)plVar2 + 0x14);
        if ((uVar1 & 1) == 0) {
          plVar5 = (long *)((long)plVar2 + 0xc);
        }
        lVar3 = (((ulong)(uVar1 >> 1) & 0xf) + ((ulong)(uVar1 >> 5) & 0xf)) * 4;
      }
      else {
        plVar5 = plVar2 + 1;
        lVar3 = 0;
      }
      uVar6 = (long)plVar5 +
              ((lVar3 + (ulong)((uint)*plVar2 >> 0x10 & 0xf) * 8) - (long)plVar2) + 0xf &
              0xfffffffffffffff0;
      uVar4 = 0x5f59;
      if (*(int *)((long)plVar2 + uVar6) == 0x4f434653) {
        uVar4 = (ulong)*(uint *)((long)plVar2 + uVar6 + 8);
      }
    }
    return uVar4;
  }
  return 0x1159;
}



// ===== FUN_7100772620 @ 7100772620 (size=656) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_7100772620(undefined4 *param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined4 local_14;
  undefined1 auStack_10 [16];
  
  uVar12 = (ulong)param_2;
  uVar5 = FUN_7100769b90();
  uVar8 = _DAT_7100d18de0;
  if (uVar5 < 0x20000) {
    uVar5 = FUN_7100772c80(DAT_7100af38a8,*param_1,param_1[1],uVar12,0,&local_14);
    if ((uVar5 & 0x3fffff) != 0xd5c || param_2 == 0) {
      return uVar5;
    }
    uVar5 = FUN_7100771030(DAT_7100af38a8,local_14,auStack_10);
    if (uVar5 != 0) {
      return uVar5;
    }
    lVar13 = uVar12 * 1000;
    if ((int)param_2 < 0) {
      lVar13 = -1;
    }
    uVar5 = FUN_71007495a0(auStack_10,lVar13);
    if ((uVar5 & 0x3fffff) == 0xea01) {
      FUN_7100772c50(DAT_7100af38a8,local_14);
      uVar5 = 0xd5c;
    }
    FUN_7100749610(auStack_10);
    return uVar5;
  }
  do {
    uVar5 = ~(uint)uVar8;
    uVar6 = (uVar5 & 0xaaaaaaaa) >> 1 | (uVar5 & 0x55555555) << 1;
    uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
    uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
    uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    iVar7 = 0;
    if (uVar5 != 0) {
      iVar7 = (int)LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10) + 1;
    }
    uVar5 = iVar7 - 1;
    uVar10 = (ulong)uVar5;
    if (iVar7 == 0) {
      return 0xf5c;
    }
    uVar11 = 1L << (uVar10 & 0x3f);
    do {
      uVar3 = _DAT_7100d18de0;
      bVar4 = _DAT_7100d18de0 != uVar8;
      if (bVar4) break;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x7100d18de0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        _DAT_7100d18de0 = uVar8 | uVar11;
      }
    } while (cVar1 != '\0');
    uVar8 = uVar3;
  } while (bVar4);
  lVar13 = uVar10 * 0xc + 0x7100d18ae0;
  if (*(int *)(((-(ulong)(uVar5 >> 0x1f) & 0xfffffffe00000000 | uVar10 << 1) + (long)(int)uVar5) * 4
              + 0x7100d18ae0) == 0) {
    iVar7 = FUN_7100772cf0(DAT_7100af38a8,uVar5);
    if (iVar7 == 0) {
      iVar7 = FUN_7100771030(DAT_7100af38a8,uVar5 | 0x10000000,lVar13);
      if (iVar7 == 0) goto LAB_71007726c0;
      FUN_7100772d20(DAT_7100af38a8,uVar5);
    }
    uVar6 = 0xf5c;
    uVar8 = _DAT_7100d18de0;
  }
  else {
LAB_71007726c0:
    uVar6 = FUN_7100772cc0(DAT_7100af38a8,*param_1,param_1[1],uVar12);
    uVar8 = _DAT_7100d18de0;
    if ((uVar6 & 0x3fffff) == 0xd5c) {
      lVar9 = uVar12 * 1000;
      if ((int)param_2 < 0) {
        lVar9 = -1;
      }
      uVar6 = FUN_71007495a0(lVar13,lVar9);
      uVar8 = _DAT_7100d18de0;
      if ((uVar6 & 0x3fffff) == 0xea01) {
        FUN_7100772c50(DAT_7100af38a8,uVar5 | 0x10000000);
        uVar6 = 0xd5c;
        uVar8 = _DAT_7100d18de0;
      }
    }
  }
  do {
    do {
      uVar12 = _DAT_7100d18de0;
      bVar4 = _DAT_7100d18de0 != uVar8;
      if (bVar4) break;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x7100d18de0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        _DAT_7100d18de0 = uVar8 & (uVar11 ^ 0xffffffffffffffff);
      }
    } while (cVar1 != '\0');
    uVar8 = uVar12;
    if (!bVar4) {
      return uVar6;
    }
  } while( true );
}



// ===== FUN_71007728b0 @ 71007728b0 (size=124) =====

undefined8 FUN_71007728b0(uint *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  uint *puVar2;
  uint uVar3;
  
  if (*param_1 == 0) {
    return 0;
  }
  puVar2 = param_1 + 1;
  uVar3 = 0;
  do {
    uVar1 = FUN_7100772620(puVar2,param_2);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 2;
  } while (uVar3 < *param_1);
  return 0;
}



// ===== FUN_7100772c50 @ 7100772c50 (size=36) =====

void FUN_7100772c50(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_8 [2];
  
  local_8[0] = param_2;
  FUN_7100770c40(param_1,0xc004001c,local_8);
  return;
}



// ===== FUN_7100772c80 @ 7100772c80 (size=60) =====

void FUN_7100772c80(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5,undefined4 *param_6)

{
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = param_2;
  uStack_c = param_3;
  local_8 = param_4;
  local_4 = param_5;
  FUN_7100770c40(param_1,0xc010001d,&local_10);
  *param_6 = local_4;
  return;
}



// ===== FUN_7100772cc0 @ 7100772cc0 (size=40) =====

void FUN_7100772cc0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_10 = param_2;
  uStack_c = param_3;
  local_8 = param_4;
  uStack_4 = param_5;
  FUN_7100770c40(param_1,0xc010001e,&local_10);
  return;
}



// ===== FUN_7100772cf0 @ 7100772cf0 (size=36) =====

void FUN_7100772cf0(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_8 [2];
  
  local_8[0] = param_2;
  FUN_7100770c40(param_1,0xc004001f,local_8);
  return;
}



// ===== FUN_7100772d20 @ 7100772d20 (size=36) =====

void FUN_7100772d20(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_8 [2];
  
  local_8[0] = param_2;
  FUN_7100770c40(param_1,0xc0040020,local_8);
  return;
}



// ===== FUN_7100772dc0 @ 7100772dc0 (size=48) =====

void FUN_7100772dc0(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_18;
  undefined8 local_14;
  undefined8 uStack_c;
  undefined4 local_4;
  
  local_14 = 0;
  uStack_c = 0;
  local_4 = 0;
  local_18 = param_2;
  FUN_7100770c40(param_1,0xc0180105,&local_18);
  return;
}



// ===== FUN_7100772df0 @ 7100772df0 (size=60) =====

void FUN_7100772df0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_8 = 0;
  uStack_4 = param_2;
  iVar1 = FUN_7100770c40(param_1,0xc008010e,&local_8);
  if (iVar1 == 0) {
    *param_3 = local_8;
  }
  return;
}



// ===== FUN_7100772e30 @ 7100772e30 (size=28) =====

void FUN_7100772e30(undefined1 *param_1,undefined4 param_2)

{
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// ===== FUN_7100772e50 @ 7100772e50 (size=860) =====

ulong FUN_7100772e50(byte *param_1,undefined4 param_2,undefined8 param_3,ulong param_4,
                    undefined8 param_5,ulong param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  ushort uVar6;
  long *plVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  ulong *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  undefined4 uVar21;
  long lVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  ulong *puVar25;
  ulong *puVar26;
  long lVar27;
  ulong *puVar28;
  uint uVar29;
  long lVar30;
  undefined4 uVar31;
  ushort uVar32;
  long lVar33;
  undefined8 *puVar34;
  undefined4 uVar35;
  ulong uVar36;
  
  if ((*param_1 & 1) == 0) {
    return 0x1159;
  }
  if ((param_1[1] & 1) != 0) {
    uVar10 = FUN_7100769b90(0x1159);
    puVar23 = *(undefined4 **)(param_1 + 0x10);
    uVar4 = *(undefined4 *)(param_1 + 4);
    uVar6 = *(ushort *)(puVar23 + 3);
    iVar5 = puVar23[2];
    if (uVar10 < 0x30000) {
      puVar11 = (ulong *)tpidrro_el0;
      if (iVar5 == 0) {
        lVar20 = 0xb;
        lVar33 = 0x2c;
      }
      else {
        lVar20 = 0xf;
        lVar33 = 0x3c;
      }
      puVar25 = puVar11 + 1;
      puVar24 = (undefined4 *)((long)puVar11 + 0x14);
      puVar26 = puVar11 + 4;
      bVar9 = false;
      uVar35 = 0;
      lVar27 = 0;
      lVar22 = 0;
      lVar30 = 0x20;
      puVar28 = (ulong *)0x0;
      puVar34 = (undefined8 *)0x0;
    }
    else {
      puVar11 = (ulong *)tpidrro_el0;
      if (iVar5 == 0) {
        lVar20 = 0xc;
        lVar27 = 0xc;
        lVar33 = 0x2c;
      }
      else {
        lVar20 = 0x10;
        lVar27 = 0x10;
        lVar33 = 0x3c;
      }
      puVar28 = puVar11 + 1;
      uVar35 = 3;
      puVar26 = puVar11 + 5;
      puVar34 = (undefined8 *)((long)puVar26 + lVar27 * 4);
      puVar25 = puVar11 + 2;
      puVar24 = (undefined4 *)((long)puVar11 + 0x1c);
      bVar9 = true;
      lVar27 = 1;
      lVar22 = 3;
      lVar30 = 0x30;
    }
    puVar1 = (undefined8 *)((long)puVar11 + lVar30);
    *puVar11 = lVar27 << 0x10 | 0x1100004U | lVar20 << 0x20 | lVar22 << 0x2a;
    puVar13 = puVar1;
    if (iVar5 != 0) {
      puVar13 = puVar1 + 2;
      *(undefined4 *)((long)puVar11 + lVar30) = 0x1c0001;
      *(int *)((long)puVar1 + 4) = iVar5;
      puVar1[1] = 0;
    }
    *(undefined4 *)(puVar13 + 1) = uVar35;
    *(undefined4 *)((long)puVar13 + 0xc) = 0;
    uVar15 = (uint)param_4;
    uVar31 = (undefined4)param_3;
    *puVar13 = 0x49434653;
    uVar8 = (uint)((ulong)param_3 >> 0x20);
    uVar21 = (undefined4)param_5;
    uVar10 = (uint)((ulong)param_5 >> 0x20);
    uVar14 = (uint)(param_4 >> 0x20);
    uVar16 = (uint)(param_6 >> 0x20);
    uVar35 = (undefined4)param_6;
    if (bVar9) {
      bVar9 = uVar6 != 0;
      uVar36 = (ulong)(uint)uVar6;
      if (bVar9 && param_4 <= uVar36) {
        bVar9 = uVar6 != uVar15;
        uVar29 = uVar8 >> 4 & 0x3f;
        uVar32 = (ushort)param_4;
        uVar36 = (ulong)(uVar6 - uVar15);
        uVar15 = 0;
        uVar31 = 0;
        uVar17 = 0;
        uVar14 = 0;
        uVar18 = 0;
        uVar19 = uVar8 & 0xf;
      }
      else {
        uVar17 = uVar8 >> 4 & 0x3fffff;
        uVar14 = uVar14 & 0xf;
        uVar29 = 0;
        uVar32 = 0;
        param_3 = 0;
        uVar19 = 0;
        uVar18 = uVar8 & 0xf;
      }
      *(ushort *)((long)puVar28 + 2) = uVar32;
      *(int *)((long)puVar28 + 4) = (int)param_3;
      *(ushort *)puVar28 = (ushort)(uVar29 << 6) | (ushort)(uVar19 << 0xc);
      *(uint *)puVar25 = uVar15;
      *(undefined4 *)((long)puVar25 + 4) = uVar31;
      *(uint *)(puVar25 + 1) = uVar17 << 2 | uVar14 << 0x18 | uVar18 << 0x1c;
      if (bVar9 && param_6 <= uVar36) {
        *(undefined4 *)puVar34 = uVar21;
        uVar15 = 0;
        uVar35 = 0;
        *(short *)((long)puVar34 + 4) = (short)((ulong)param_5 >> 0x20);
        uVar21 = 0;
        uVar10 = 0;
        *(short *)((long)puVar34 + 6) = (short)param_6;
        *(undefined2 *)((long)puVar26 + lVar33) = (short)param_6;
        uVar16 = 0;
      }
      else {
        uVar15 = uVar10 >> 4 & 0x3fffff;
        *puVar34 = 0;
        uVar10 = uVar10 & 0xf;
        uVar16 = uVar16 & 0xf;
        *(undefined2 *)((long)puVar26 + lVar33) = 0;
      }
    }
    else {
      *(uint *)puVar25 = uVar15;
      *(undefined4 *)((long)puVar25 + 4) = uVar31;
      uVar15 = uVar10 >> 4 & 0x3fffff;
      uVar16 = uVar16 & 0xf;
      uVar10 = uVar10 & 0xf;
      *(uint *)(puVar25 + 1) = (uVar8 >> 4 & 0x3fffff) << 2 | (uVar14 & 0xf) << 0x18 | uVar8 << 0x1c
      ;
    }
    *puVar24 = uVar35;
    puVar24[1] = uVar21;
    puVar24[2] = uVar15 << 2 | uVar16 << 0x18 | uVar10 << 0x1c;
    puVar13[2] = CONCAT44(param_2,uVar4);
    *(undefined4 *)(puVar13 + 3) = param_7;
    uVar36 = FUN_710076d0c0(*puVar23);
    if ((int)uVar36 == 0) {
      plVar7 = (long *)tpidrro_el0;
      if (*plVar7 < 0) {
        uVar10 = *(uint *)(plVar7 + 1);
        plVar12 = (long *)((long)plVar7 + 0x14);
        if ((uVar10 & 1) == 0) {
          plVar12 = (long *)((long)plVar7 + 0xc);
        }
        lVar20 = (((ulong)(uVar10 >> 1) & 0xf) + ((ulong)(uVar10 >> 5) & 0xf)) * 4;
      }
      else {
        plVar12 = plVar7 + 1;
        lVar20 = 0;
      }
      piVar2 = (int *)((long)plVar7 +
                      ((long)plVar12 +
                       ((lVar20 + (ulong)((uint)*plVar7 >> 0x10 & 0xf) * 8) - (long)plVar7) + 0xf &
                      0xfffffffffffffff0));
      piVar3 = piVar2 + 4;
      if (iVar5 == 0) {
        piVar3 = piVar2;
      }
      uVar36 = 0x5f59;
      if (*piVar3 == 0x4f434653) {
        uVar36 = (ulong)(uint)piVar3[2];
      }
    }
    return uVar36;
  }
  return 0x1159;
}



// ===== FUN_71007731b0 @ 71007731b0 (size=232) =====

undefined4 FUN_71007731b0(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((int)param_1 < 0) {
    if ((int)(param_1 + 0x4b) < 0 == SCARRY4(param_1,0x4b)) {
      switch(~param_1) {
      case 0:
        uVar1 = 0xf5d;
        break;
      case 1:
        uVar1 = 0xd5d;
        break;
      default:
        uVar1 = 0x35d;
        break;
      case 10:
        uVar1 = 0x1d5d;
        break;
      case 0xb:
        uVar1 = 0x55d;
        break;
      case 0x10:
        uVar1 = 0x135d;
        break;
      case 0x12:
        uVar1 = 0x115d;
        break;
      case 0x15:
        uVar1 = 0x95d;
        break;
      case 0x1f:
        uVar1 = 0x155d;
        break;
      case 0x25:
        uVar1 = 0x75d;
        break;
      case 0x3c:
        uVar1 = 0x1b5d;
        break;
      case 0x49:
        uVar1 = 0x215d;
        break;
      case 0x4a:
        uVar1 = 0x195d;
      }
    }
    else {
      uVar1 = 0x175d;
      if ((((param_1 != 0x80000002) && (uVar1 = 0xb5d, param_1 != 0x80000001)) &&
          (uVar1 = 0x1f5d, param_1 != 0xffffff92)) && (uVar1 = 0x35d, param_1 == 0x80000007)) {
        uVar1 = 0x235d;
      }
    }
  }
  return uVar1;
}



// ===== FUN_71007732a0 @ 71007732a0 (size=292) =====

ulong FUN_71007732a0(byte *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined4 *puVar11;
  long lVar12;
  
  if ((*param_1 & 1) != 0) {
    uVar3 = *(undefined4 *)(param_1 + 4);
    puVar11 = *(undefined4 **)(param_1 + 0x10);
    puVar6 = (undefined8 *)tpidrro_el0;
    iVar4 = puVar11[2];
    if (iVar4 == 0) {
      puVar8 = puVar6 + 2;
      *puVar6 = 0xb00000004;
    }
    else {
      puVar8 = puVar6 + 4;
      puVar6[3] = 0;
      *puVar6 = 0xf00000004;
      *(undefined4 *)(puVar6 + 2) = 0x1c0001;
      *(int *)((long)puVar6 + 0x14) = iVar4;
    }
    *puVar8 = 0x49434653;
    puVar8[1] = 1;
    puVar8[2] = CONCAT44(param_2,uVar3);
    *(undefined4 *)(puVar8 + 3) = param_3;
    uVar9 = FUN_710076d0c0(*puVar11);
    if ((int)uVar9 == 0) {
      plVar7 = (long *)tpidrro_el0;
      if (*plVar7 < 0) {
        uVar5 = *(uint *)(plVar7 + 1);
        plVar10 = (long *)((long)plVar7 + 0x14);
        if ((uVar5 & 1) == 0) {
          plVar10 = (long *)((long)plVar7 + 0xc);
        }
        lVar12 = (((ulong)(uVar5 >> 1) & 0xf) + ((ulong)(uVar5 >> 5) & 0xf)) * 4;
      }
      else {
        plVar10 = plVar7 + 1;
        lVar12 = 0;
      }
      piVar1 = (int *)((long)plVar7 +
                      ((long)plVar10 +
                       ((lVar12 + (ulong)((uint)*plVar7 >> 0x10 & 0xf) * 8) - (long)plVar7) + 0xf &
                      0xfffffffffffffff0));
      piVar2 = piVar1 + 4;
      if (iVar4 == 0) {
        piVar2 = piVar1;
      }
      uVar9 = 0x5f59;
      if (*piVar2 == 0x4f434653) {
        uVar9 = (ulong)(uint)piVar2[2];
      }
    }
    return uVar9;
  }
  return 0x1159;
}



// ===== FUN_71007733d0 @ 71007733d0 (size=156) =====

int FUN_71007733d0(byte *param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((*param_1 & 1) == 0) {
    iVar1 = 0x1159;
  }
  else {
    iVar1 = 0xf59;
    if ((param_1[1] & 1) == 0) {
      *(undefined8 *)(param_1 + 0x10) = param_2;
      iVar1 = FUN_71007732a0(param_1,1,0);
      if (iVar1 == 0) {
        iVar1 = FUN_71007732a0(param_1,1);
        if (iVar1 == 0) {
          param_1[1] = 1;
          return 0;
        }
        FUN_71007732a0(param_1,0xffffffff,0);
      }
      return iVar1;
    }
  }
  return iVar1;
}



// ===== FUN_7100773470 @ 7100773470 (size=92) =====

void FUN_7100773470(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    return;
  }
  if ((param_1[1] & 1) == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    return;
  }
  FUN_71007732a0(param_1,0xffffffff,1);
  FUN_71007732a0(param_1,0xffffffff,0);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



// ===== FUN_71007734d0 @ 71007734d0 (size=340) =====

int FUN_71007734d0(byte *param_1,long param_2,long param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  
  if ((*param_1 & 1) != 0) {
    uVar3 = *(uint *)(param_1 + 4);
    puVar8 = *(undefined4 **)(param_1 + 0x10);
    iVar4 = puVar8[2];
    puVar5 = (undefined8 *)tpidrro_el0;
    if (iVar4 == 0) {
      puVar9 = puVar5 + 2;
      *puVar5 = 0xa00000004;
    }
    else {
      puVar9 = puVar5 + 4;
      puVar5[3] = 0;
      *puVar5 = 0xe00000004;
      *(undefined4 *)(puVar5 + 2) = 0x180001;
      *(int *)((long)puVar5 + 0x14) = iVar4;
    }
    puVar9[2] = (ulong)uVar3 | param_2 << 0x20;
    *puVar9 = 0x49434653;
    puVar9[1] = 2;
    iVar7 = FUN_710076d0c0(*puVar8);
    if (iVar7 == 0) {
      plVar6 = (long *)tpidrro_el0;
      if (*plVar6 < 0) {
        uVar3 = *(uint *)(plVar6 + 1);
        plVar11 = (long *)((long)plVar6 + 0x14);
        if ((uVar3 & 1) == 0) {
          plVar11 = (long *)((long)plVar6 + 0xc);
        }
        lVar10 = (((ulong)(uVar3 >> 1) & 0xf) + ((ulong)(uVar3 >> 5) & 0xf)) * 4;
      }
      else {
        plVar11 = plVar6 + 1;
        lVar10 = 0;
      }
      iVar7 = 0x5f59;
      piVar1 = (int *)((long)plVar6 +
                      ((long)plVar11 +
                       ((lVar10 + (ulong)((uint)*plVar6 >> 0x10 & 0xf) * 8) - (long)plVar6) + 0xf &
                      0xfffffffffffffff0));
      piVar2 = piVar1 + 4;
      if (iVar4 == 0) {
        piVar2 = piVar1;
      }
      if (*piVar2 == 0x4f434653) {
        iVar7 = piVar2[2];
        if ((iVar7 == 0) && (param_3 != 0)) {
          FUN_7100749590(param_3,(int)*plVar11,0);
          iVar7 = 0;
        }
      }
    }
    return iVar7;
  }
  return 0x1159;
}



// ===== FUN_7100773630 @ 7100773630 (size=200) =====

undefined8 FUN_7100773630(undefined8 param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_848;
  undefined1 auStack_840 [1056];
  undefined1 auStack_420 [1056];
  
  FUN_7100773c90(auStack_840);
  FUN_7100773c90(auStack_420);
  FUN_7100774010(auStack_840,"android.gui.IGraphicBufferProducer");
  FUN_7100773f50(auStack_840,param_2);
  uVar2 = FUN_7100773cc0(param_1,1,auStack_840,auStack_420);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  iVar1 = FUN_7100774040(auStack_420);
  if (iVar1 != 0) {
    local_848 = 0;
    lVar3 = FUN_7100774070(auStack_420,&local_848);
    if (param_3 != 0 || lVar3 == 0) {
      return 0x1759;
    }
  }
  FUN_7100774040(auStack_420);
  uVar2 = FUN_71007731b0();
  return uVar2;
}



// ===== FUN_7100773700 @ 7100773700 (size=296) =====

undefined8
FUN_7100773700(undefined8 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6,undefined4 *param_7,undefined8 *param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long local_848;
  undefined1 auStack_840 [1056];
  undefined1 auStack_420 [1056];
  
  FUN_7100773c90(auStack_840);
  FUN_7100773c90(auStack_420);
  FUN_7100774010(auStack_840,"android.gui.IGraphicBufferProducer");
  FUN_7100773f50(auStack_840,param_2);
  FUN_7100773f70(auStack_840,param_3);
  FUN_7100773f70(auStack_840,param_4);
  FUN_7100773f50(auStack_840,param_5);
  FUN_7100773f70(auStack_840,param_6);
  uVar3 = FUN_7100773cc0(param_1,3,auStack_840,auStack_420);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  uVar1 = FUN_7100774040(auStack_420);
  *param_7 = uVar1;
  iVar2 = FUN_7100774040(auStack_420);
  if (iVar2 != 0) {
    local_848 = 0;
    puVar4 = (undefined8 *)FUN_7100774070(auStack_420,&local_848);
    if ((puVar4 == (undefined8 *)0x0) || (local_848 != 0x24)) {
      return 0x1759;
    }
    if (param_8 != (undefined8 *)0x0) {
      uVar6 = *puVar4;
      uVar7 = puVar4[1];
      uVar5 = puVar4[3];
      uVar3 = puVar4[2];
      *(undefined4 *)(param_8 + 4) = *(undefined4 *)(puVar4 + 4);
      *param_8 = uVar6;
      param_8[1] = uVar7;
      param_8[3] = uVar5;
      param_8[2] = uVar3;
    }
  }
  FUN_7100774040(auStack_420);
  uVar3 = FUN_71007731b0();
  return uVar3;
}



// ===== FUN_7100773900 @ 7100773900 (size=132) =====

void FUN_7100773900(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auStack_840 [1056];
  undefined1 auStack_420 [1056];
  
  FUN_7100773c90(auStack_840);
  FUN_7100773c90(auStack_420);
  FUN_7100774010(auStack_840,"android.gui.IGraphicBufferProducer");
  FUN_7100773f50(auStack_840,param_2);
  FUN_71007740e0(auStack_840,param_3,0x24);
  FUN_7100773cc0(param_1,8,auStack_840,auStack_420);
  return;
}



// ===== FUN_7100773990 @ 7100773990 (size=208) =====

undefined8
FUN_7100773990(undefined8 param_1,undefined4 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_840 [1056];
  undefined1 auStack_420 [1056];
  
  FUN_7100773c90(auStack_840);
  FUN_7100773c90(auStack_420);
  FUN_7100774010(auStack_840,"android.gui.IGraphicBufferProducer");
  FUN_7100773f50(auStack_840,0);
  FUN_7100773f50(auStack_840,param_2);
  FUN_7100773f50(auStack_840,param_3);
  uVar1 = FUN_7100773cc0(param_1,10,auStack_840,auStack_420);
  if ((int)uVar1 == 0) {
    lVar2 = FUN_7100773ec0(auStack_420,param_4,0x10);
    if (lVar2 != 0) {
      FUN_7100774040(auStack_420);
      uVar1 = FUN_71007731b0();
      return uVar1;
    }
    uVar1 = 0x1759;
  }
  return uVar1;
}



// ===== FUN_7100773a60 @ 7100773a60 (size=136) =====

void FUN_7100773a60(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_840 [1056];
  undefined1 auStack_420 [1056];
  
  FUN_7100773c90(auStack_840);
  FUN_7100773c90(auStack_420);
  FUN_7100774010(auStack_840,"android.gui.IGraphicBufferProducer");
  FUN_7100773f50(auStack_840,param_2);
  iVar1 = FUN_7100773cc0(param_1,0xb,auStack_840,auStack_420);
  if (iVar1 != 0) {
    return;
  }
  FUN_7100774040(auStack_420);
  FUN_71007731b0();
  return;
}



// ===== FUN_7100773c90 @ 7100773c90 (size=48) =====

void FUN_7100773c90(long param_1)

{
  FUN_7100808340(param_1,0,0x420);
  *(undefined4 *)(param_1 + 0x414) = 0x400;
  return;
}



// ===== FUN_7100773cc0 @ 7100773cc0 (size=372) =====

int FUN_7100773cc0(undefined8 param_1,undefined4 param_2,long param_3,long param_4)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint local_800 [4];
  undefined1 auStack_7f0 [1008];
  uint local_400 [256];
  
  FUN_7100808340(local_800,0,0x400);
  FUN_7100808340(local_400,0,0x400);
  local_800[0] = *(uint *)(param_3 + 0x400);
  if ((local_800[0] < 0x401) && (local_800[2] = *(uint *)(param_3 + 0x410), local_800[2] < 0x401)) {
    uVar4 = (ulong)local_800[2];
    uVar1 = local_800[0] + uVar4 + 0x10;
    if (uVar1 < 0x401) {
      local_800[1] = 0x10;
      uVar2 = local_800[0] + 0x10;
      local_800[3] = uVar2;
      FUN_710080f900(auStack_7f0,param_3);
      if (*(long *)(param_3 + 0x408) != 0) {
        FUN_710080f900((long)local_800 + (ulong)uVar2,*(long *)(param_3 + 0x408),uVar4,uVar1);
      }
      iVar3 = FUN_7100772e50(param_1,param_2,local_800,uVar1,local_400,0x400,0);
      if (iVar3 != 0) {
        return iVar3;
      }
      if ((((local_400[0] < 0x401) && (local_400[2] < 0x401)) && (local_400[1] < 0x401)) &&
         (((local_400[3] < 0x401 && (local_400[0] + local_400[1] < 0x401)) &&
          (local_400[2] + local_400[3] < 0x401)))) {
        FUN_710080f900(param_4,(long)local_400 + (ulong)local_400[1],local_400[0]);
        *(uint *)(param_4 + 0x400) = local_400[0];
        *(undefined8 *)(param_4 + 0x408) = 0;
        *(undefined4 *)(param_4 + 0x410) = 0;
        return 0;
      }
    }
  }
  return 0x1759;
}



// ===== FUN_7100773e40 @ 7100773e40 (size=128) =====

long FUN_7100773e40(long param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  
  if (-1 < (int)param_3) {
    uVar1 = *(uint *)(param_1 + 0x400);
    uVar4 = param_3 + 3U & 0xfffffffffffffffc;
    if (uVar4 + uVar1 < (ulong)*(uint *)(param_1 + 0x414)) {
      lVar2 = param_1 + (ulong)uVar1;
      iVar3 = (int)uVar4;
      if (param_2 != 0) {
        lVar2 = FUN_710080f900(lVar2);
        *(int *)(param_1 + 0x400) = *(int *)(param_1 + 0x400) + iVar3;
        return lVar2;
      }
      *(uint *)(param_1 + 0x400) = uVar1 + iVar3;
      return lVar2;
    }
  }
  return 0;
}



// ===== FUN_7100773ec0 @ 7100773ec0 (size=136) =====

long FUN_7100773ec0(long param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  if (-1 < (int)param_3) {
    uVar4 = param_3 + 3U & 0xfffffffffffffffc;
    uVar2 = *(uint *)(param_1 + 0x418);
    if (uVar4 + uVar2 <= (ulong)*(uint *)(param_1 + 0x400)) {
      lVar1 = param_1 + (ulong)uVar2;
      iVar3 = (int)uVar4;
      if (param_2 != 0) {
        FUN_710080f900(param_2,lVar1);
        *(int *)(param_1 + 0x418) = *(int *)(param_1 + 0x418) + iVar3;
        return lVar1;
      }
      *(uint *)(param_1 + 0x418) = uVar2 + iVar3;
      return lVar1;
    }
  }
  return 0;
}



// ===== FUN_7100773f50 @ 7100773f50 (size=32) =====

void FUN_7100773f50(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_4;
  
  local_4 = param_2;
  FUN_7100773e40(param_1,&local_4,4);
  return;
}



// ===== FUN_7100773f70 @ 7100773f70 (size=32) =====

void FUN_7100773f70(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_4;
  
  local_4 = param_2;
  FUN_7100773e40(param_1,&local_4,4);
  return;
}



// ===== FUN_7100773f90 @ 7100773f90 (size=124) =====

void FUN_7100773f90(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = FUN_710081ce00(param_2);
  FUN_7100773f50(param_1,uVar1);
  lVar2 = FUN_7100773e40(param_1,0,(uVar1 + 1) * 2);
  if ((lVar2 != 0) && (uVar1 + 1 != 0)) {
    lVar3 = 0;
    do {
      *(ushort *)(lVar2 + lVar3 * 2) = (ushort)*(byte *)(param_2 + lVar3);
      lVar3 = lVar3 + 1;
    } while (lVar3 != (ulong)uVar1 + 1);
  }
  return;
}



// ===== FUN_7100774010 @ 7100774010 (size=48) =====

void FUN_7100774010(undefined8 param_1,undefined8 param_2)

{
  FUN_7100773f50(param_1,0x100);
  FUN_7100773f90(param_1,param_2);
  return;
}



// ===== FUN_7100774040 @ 7100774040 (size=36) =====

undefined4 FUN_7100774040(undefined8 param_1)

{
  undefined4 local_4;
  
  local_4 = 0;
  FUN_7100773ec0(param_1,&local_4,4);
  return local_4;
}



// ===== FUN_7100774070 @ 7100774070 (size=104) =====

undefined8 FUN_7100774070(undefined8 param_1,ulong *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_7100774040();
  iVar2 = FUN_7100774040(param_1);
  if (param_2 != (ulong *)0x0) {
    *param_2 = (ulong)uVar1;
  }
  if (iVar2 == 0) {
    uVar3 = FUN_7100773ec0(param_1,0,(long)(int)uVar1);
    return uVar3;
  }
  return 0;
}



// ===== FUN_71007740e0 @ 71007740e0 (size=68) =====

void FUN_71007740e0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  FUN_7100773f50(param_1,param_3 & 0xffffffff);
  FUN_7100773f50(param_1,0);
  FUN_7100773e40(param_1,param_2,param_3);
  return;
}



// ===== FUN_7100774130 @ 7100774130 (size=64) =====

void FUN_7100774130(undefined8 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *param_1 = 0x2000000001;
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  uVar1 = FUN_710074cd10();
  *(undefined4 *)((long)param_1 + 0xc) = uVar1;
  return;
}



// ===== FUN_7100774170 @ 7100774170 (size=104) =====

int FUN_7100774170(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_710074d4f0(param_1,param_3);
  if (iVar1 == 0) {
    iVar1 = FUN_710074d910(param_1,0,param_2,param_3);
    if (iVar1 != 0) {
      FUN_710074d6d0(param_1);
    }
  }
  return iVar1;
}



// ===== FUN_71007741e0 @ 71007741e0 (size=68) =====

void FUN_71007741e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_38 [56];
  
  uVar1 = cntpct_el0;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  iVar2 = FUN_7100774170(auStack_38,param_1,0x20);
  if (iVar2 == 0) {
    FUN_710074d760(param_2,auStack_38);
  }
  return;
}



// ===== FUN_7100774230 @ 7100774230 (size=52) =====

void FUN_7100774230(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_38 [56];
  
  iVar1 = FUN_7100774170(auStack_38);
  if (iVar1 == 0) {
    FUN_710074d760(param_1,auStack_38);
  }
  return;
}



// ===== FUN_7100774270 @ 7100774270 (size=788) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100774270(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  uint uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint uVar14;
  ulong uVar15;
  undefined4 local_2c;
  undefined *local_28;
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  local_2c = 0;
  _DAT_7100d18e00 = 0;
  _DAT_7100d18df8 = (undefined1 *)0x7100d18df0;
  uVar4 = FUN_7100769a20();
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_7100769a70();
    if ((uVar4 & 1) == 0) {
      return;
    }
    pbVar5 = (byte *)FUN_7100769a90();
    uVar4 = FUN_710081ce00();
    lVar7 = _DAT_7100d236e8;
    if (uVar4 == 0) {
      return;
    }
    if ((ulong)(_DAT_7100d236f0 - _DAT_7100d236e8) < 0x9000) {
      return;
    }
    _DAT_7100d236e8 = _DAT_7100d236e8 + 0x9000;
    puVar10 = (undefined1 *)FUN_7100808340(lVar7,0,0x9000);
    uVar14 = 0;
    uVar15 = 0x9000;
    uVar12 = (uint)uVar4;
    puVar13 = puVar10;
  }
  else {
    local_28 = (undefined1 *)0x0;
    local_20 = (undefined1 *)0x0;
    local_18 = 0;
    local_10 = 0;
    local_8 = 0;
    iVar3 = FUN_710076cfe4(&local_28,&local_2c);
    if (iVar3 != 0) {
      return;
    }
    if ((int)local_10 != 3) {
      return;
    }
    puVar10 = &DAT_7100d53000;
    uVar15 = (ulong)_DAT_7100d53000;
    uVar4 = (ulong)_DAT_7100d53004;
    if (uVar15 == 0 || uVar4 == 0) {
      return;
    }
    if (&DAT_7100d53000 < local_28) {
      return;
    }
    if (local_20 < &DAT_7100d53000 + (uVar15 - (long)local_28)) {
      return;
    }
    uVar14 = _DAT_7100d53004 + 0x21;
    if (_DAT_7100d53000 <= uVar14) {
      return;
    }
    pbVar5 = &DAT_7100d53020;
    puVar13 = &DAT_7100d53000 + uVar14;
    uVar12 = _DAT_7100d53004;
  }
  uVar6 = (ulong)((uVar12 + 10 & 0xfffffff8) + uVar14);
  if ((uVar15 <= uVar6) || (uVar14 = (uint)(uVar15 - uVar6 >> 3), uVar14 < 2)) {
    return;
  }
  _DAT_7100d18df8 = puVar10 + uVar6;
  uVar15 = 1;
  bVar1 = *pbVar5;
  pbVar8 = pbVar5;
  do {
    uVar6 = (ulong)bVar1;
    bVar1 = (&DAT_71009d32f1)[uVar6];
    uVar11 = uVar15;
joined_r0x007100774404:
    if ((bVar1 >> 3 & 1) == 0) {
      if ((int)uVar6 == 0x22) {
        pbVar8 = pbVar5 + uVar11;
        if (uVar11 < uVar4) {
          uVar9 = (uint)pbVar5[uVar11];
          uVar11 = (ulong)((int)uVar11 + 1);
          uVar12 = 0;
          goto LAB_7100774434;
        }
        goto LAB_7100774464;
      }
      if ((int)uVar6 != 0) {
        bVar2 = false;
        uVar12 = 1;
LAB_7100774420:
        if (uVar11 < uVar4) {
          do {
            uVar9 = (uint)pbVar5[uVar11];
            uVar11 = (ulong)((int)uVar11 + 1);
            if (bVar2) {
LAB_7100774434:
              bVar2 = true;
              if (uVar9 == 0x22) goto LAB_710077448c;
            }
            else if (((byte)(&DAT_71009d32f1)[uVar9] >> 3 & 1) != 0) goto LAB_710077448c;
            if (uVar9 == 0) goto LAB_710077448c;
            uVar12 = uVar12 + 1;
            if (uVar4 <= uVar11) break;
          } while( true );
        }
        if ((uVar12 != 0) && (_DAT_7100d18e00 < uVar14)) {
          lVar7 = FUN_710081f760(puVar13,pbVar8,uVar12);
          *(undefined1 *)(lVar7 + (ulong)uVar12) = 0;
          *(long *)(_DAT_7100d18df8 + (long)(int)_DAT_7100d18e00 * 8) = lVar7;
          _DAT_7100d18e00 = _DAT_7100d18e00 + 1;
        }
        goto LAB_7100774464;
      }
    }
    if (uVar4 <= uVar11) {
LAB_7100774464:
      FUN_71007752f0();
      *(undefined8 *)(_DAT_7100d18df8 + (long)(int)_DAT_7100d18e00 * 8) = 0;
      return;
    }
    bVar1 = pbVar5[uVar11];
    uVar15 = (ulong)((int)uVar11 + 1);
    pbVar8 = pbVar5 + uVar11;
  } while( true );
LAB_710077448c:
  if (uVar12 != 0) goto code_r0x007100774494;
  goto LAB_7100774420;
code_r0x007100774494:
  lVar7 = FUN_710081f760(puVar13,pbVar8,uVar12);
  *(undefined1 *)(lVar7 + (ulong)uVar12) = 0;
  *(long *)(_DAT_7100d18df8 + (long)(int)_DAT_7100d18e00 * 8) = lVar7;
  _DAT_7100d18e00 = _DAT_7100d18e00 + 1;
  if ((uVar14 <= _DAT_7100d18e00) || (uVar4 <= uVar11)) goto LAB_7100774464;
  puVar13 = (undefined1 *)(lVar7 + (ulong)(uVar12 + 1));
  pbVar8 = pbVar5 + uVar11;
  uVar6 = (ulong)pbVar5[uVar11];
  bVar1 = (&DAT_71009d32f1)[uVar6];
  uVar11 = (ulong)((int)uVar11 + 1);
  goto joined_r0x007100774404;
}



// ===== FUN_7100774790 @ 7100774790 (size=208) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100774790(void)

{
  int iVar1;
  ulong uVar2;
  long local_18;
  ulong local_10;
  long lStack_8;
  
  local_10 = 0;
  lStack_8 = 0;
  uVar2 = FUN_7100769a30();
  if ((uVar2 & 1) == 0) {
    uVar2 = _DAT_7100d19560;
    if (_DAT_7100d19560 == 0) {
      FUN_710076d0d8(&local_10,6,0xffff8001,0);
      FUN_710076d0d8(&lStack_8,7,0xffff8001,0);
      uVar2 = 0x20000000;
      if ((lStack_8 + 0x200000U < local_10) &&
         (uVar2 = (local_10 - 0x200000) - lStack_8 & 0xffffffffffe00000, uVar2 == 0)) {
        uVar2 = 0x20000000;
      }
    }
    iVar1 = FUN_710076cfb0(&local_18);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_71007697d0(0x1f59);
    }
  }
  else {
    local_18 = FUN_7100769a50();
    uVar2 = FUN_7100769a60();
  }
  _DAT_7100d236e8 = local_18;
  _DAT_7100d236f0 = local_18 + uVar2;
  return;
}



// ===== FUN_7100774860 @ 7100774860 (size=236) =====

/* WARNING: Removing unreachable block (ram,0x0071007748d4) */

void FUN_7100774860(void)

{
  int iVar1;
  byte local_100;
  byte local_ff;
  byte local_fe;
  
  iVar1 = FUN_710075e2c0();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_71007697d0(0x3d59);
  }
  iVar1 = FUN_7100769b90();
  if ((iVar1 == 0) && (iVar1 = FUN_710075d350(), iVar1 == 0)) {
    iVar1 = FUN_710075d910(&local_100);
    if (iVar1 == 0) {
      FUN_7100769bb0((uint)local_ff << 8 | (uint)local_100 << 0x10 | (uint)local_fe);
      FUN_710075d3f0();
    }
    else {
      FUN_710075d3f0();
    }
  }
  iVar1 = FUN_710074e920();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_71007697d0(0x3f59);
  }
  if ((DAT_7100af387c != -2) && (iVar1 = FUN_7100755bf0(), iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_71007697d0(0x4159);
  }
  iVar1 = FUN_7100761980();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_71007697d0(0x4d59);
  }
  FUN_7100774e70();
  iVar1 = FUN_7100752510();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_71007697d0(0x4359);
  }
  FUN_7100777010();
  FUN_7100777050();
  FUN_7100768140();
  return;
}



// ===== FUN_7100774950 @ 7100774950 (size=68) =====

void FUN_7100774950(void)

{
  FUN_71007681f0();
  FUN_7100777110();
  FUN_7100752810();
  FUN_7100761c80();
  FUN_7100755e60();
  FUN_710074e890();
  FUN_710075e470();
  return;
}



// ===== FUN_71007749a0 @ 71007749a0 (size=44) =====

void FUN_71007749a0(void)

{
  FUN_71007697f0();
  FUN_7100775250();
  FUN_710074a7b0();
  FUN_7100774790();
  FUN_7100749c70();
  FUN_7100774270();
  FUN_7100774860();
  FUN_710080e5a0();
  return;
}



// ===== FUN_71007749d0 @ 71007749d0 (size=32) =====

void FUN_71007749d0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  
  FUN_7100774950();
  uVar2 = FUN_7100769ad0();
  FUN_71000000e0(0,uVar2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x71007749ec);
  (*pcVar1)();
}



// ===== FUN_71007749f0 @ 71007749f0 (size=28) =====

void FUN_71007749f0(void)

{
  FUN_71007749d0();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ===== FUN_7100774a10 @ 7100774a10 (size=52) =====

undefined8 FUN_7100774a10(void)

{
  long lVar1;
  
  lVar1 = tpidrro_el0;
  if (*(int *)(lVar1 + 0x1e0) == 0x21545624) {
    return *(undefined8 *)(lVar1 + 0x1f0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_71007697d0(0x1959);
}



// ===== thunk_FUN_7100749670 @ 7100774a50 (size=4) =====

void thunk_FUN_7100749670(uint *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  
  lVar4 = tpidrro_el0;
  uVar1 = *(uint *)(lVar4 + 0x1e4);
  uVar5 = *param_1;
  do {
    if (uVar5 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = uVar1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        return;
      }
    }
    else {
      if ((uVar5 >> 0x1e & 1) != 0) {
LAB_71007496a8:
        iVar6 = FUN_710076d08c(uVar5 & 0xbfffffff,param_1,uVar1);
        if (iVar6 != 0) {
          FUN_710076d0c8(1,0,0);
        }
        uVar5 = *param_1;
        if ((uVar5 & 0xbfffffff) == uVar1) {
          ClearExclusiveLocal();
          return;
        }
        do {
          if (uVar5 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
            if (bVar3) {
              *param_1 = uVar1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              return;
            }
          }
          else {
            if ((uVar5 >> 0x1e & 1) != 0) goto LAB_71007496a8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
            if (bVar3) {
              *param_1 = uVar5 | 0x40000000;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_71007496a8;
          }
          uVar5 = *param_1;
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = uVar5 | 0x40000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') goto LAB_71007496a8;
    }
    uVar5 = *param_1;
  } while( true );
}



// ===== thunk_FUN_7100749740 @ 7100774a60 (size=4) =====

void thunk_FUN_7100749740(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  
  lVar5 = tpidrro_el0;
  uVar2 = *(uint *)(lVar5 + 0x1e4);
  uVar1 = *param_1;
  while (uVar1 == uVar2) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_7100749760;
    uVar1 = *param_1;
  }
  ClearExclusiveLocal();
LAB_7100749760:
  if ((uVar1 >> 0x1e & 1) == 0) {
    return;
  }
  iVar6 = FUN_710076d094();
  if (iVar6 != 0) {
    FUN_710076d0c8(1,0,0);
    return;
  }
  return;
}



// ===== FUN_7100774a70 @ 7100774a70 (size=4) =====

void FUN_7100774a70(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_71007497b0();
  if ((uVar1 & 1) != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    return;
  }
  FUN_7100749670(param_1);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}



// ===== FUN_7100774a80 @ 7100774a80 (size=4) =====

void FUN_7100774a80(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) + -1;
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  FUN_7100749740();
  return;
}



// ===== FUN_7100774a90 @ 7100774a90 (size=28) =====

undefined8 FUN_7100774a90(undefined8 param_1)

{
  FUN_710076d0a4(param_1,1);
  return 0;
}



// ===== FUN_7100774ab0 @ 7100774ab0 (size=28) =====

undefined8 FUN_7100774ab0(undefined8 param_1)

{
  FUN_710076d0a4(param_1,0xffffffff);
  return 0;
}



// ===== FUN_7100774ad0 @ 7100774ad0 (size=60) =====

undefined4 FUN_7100774ad0(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_71007774f0();
  if ((uVar1 & 0x3fffff) != 0) {
    uVar2 = 0x74;
    if ((uVar1 & 0x3fffff) != 0xea01) {
      uVar2 = 5;
    }
    return uVar2;
  }
  return 0;
}



// ===== FUN_7100774b10 @ 7100774b10 (size=92) =====

undefined4 FUN_7100774b10(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_2 + 8) == 1) {
    *(undefined4 *)(param_2 + 8) = 0;
    uVar1 = FUN_71007774f0();
    uVar2 = 0;
    if (((uVar1 & 0x3fffff) != 0) && (uVar2 = 0x74, (uVar1 & 0x3fffff) != 0xea01)) {
      uVar2 = 5;
    }
    *(undefined4 *)(param_2 + 8) = 1;
    return uVar2;
  }
  return 9;
}



// ===== FUN_7100774b70 @ 7100774b70 (size=20) =====

long FUN_7100774b70(void)

{
  long lVar1;
  
  lVar1 = tpidrro_el0;
  lVar1 = *(long *)(lVar1 + 0x1e8);
  if (lVar1 == 0) {
    lVar1 = -1;
  }
  return lVar1;
}



// ===== FUN_7100774bc0 @ 7100774bc0 (size=132) =====

void FUN_7100774bc0(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  
  pcVar1 = (code *)*param_1;
  uVar3 = param_1[1];
  FUN_7100749670((long)param_1 + 0x14);
  *(undefined1 *)(param_1 + 2) = 1;
  FUN_710076d0a4(param_1 + 3,1);
  FUN_7100749740((long)param_1 + 0x14);
  uVar3 = (*pcVar1)(uVar3);
  lVar2 = FUN_7100774b70();
  if (lVar2 != -1) {
    *(undefined8 *)(lVar2 + 0x38) = uVar3;
    FUN_710074a070();
  }
  FUN_710000a120(1);
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x7100774bbc);
  (*pcVar1)();
}



// ===== FUN_7100774c20 @ 7100774c20 (size=340) =====

undefined8
FUN_7100774c20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5
              )

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  ulong local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  byte local_10;
  undefined8 local_c;
  
  if (((param_4 | param_5) & 0xfff) != 0) {
    return 0x16;
  }
  if (param_5 == 0) {
    param_5 = 0x20000;
  }
  *param_1 = 0;
  local_28 = 0;
  iVar1 = FUN_710076d0d8(&local_28,0,0xffff8001,0);
  uVar2 = 1;
  if (iVar1 == 0) {
    puVar3 = (undefined4 *)thunk_FUN_710081c1c0(0x40);
    if (puVar3 != (undefined4 *)0x0) {
      local_10 = 0;
      local_c = 0;
      local_20 = param_2;
      uStack_18 = param_3;
      iVar1 = FUN_7100749d20(puVar3,FUN_7100774bc0,&local_20,param_4,param_5,0x3b,0xfffffffe);
      if (iVar1 == 0) {
        iVar1 = FUN_710076d02c(*puVar3,0xffffffff,local_28 & 0xffffffff);
        if ((iVar1 == 0) && (iVar1 = FUN_710074a1d0(puVar3), iVar1 == 0)) {
          FUN_7100749670();
          while ((local_10 & 1) == 0) {
            FUN_71007774f0((long)&local_c + 4,&local_c,0xffffffffffffffff);
          }
          FUN_7100749740(&local_c);
          *param_1 = puVar3;
          return 0;
        }
        FUN_710074a210(puVar3);
      }
      thunk_FUN_710081c200(puVar3);
    }
    uVar2 = 0xc;
  }
  return uVar2;
}



// ===== FUN_7100774d80 @ 7100774d80 (size=88) =====

undefined8 FUN_7100774d80(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_1 != -1) && (iVar1 = FUN_710074a1e0(), iVar1 == 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    FUN_710074a210(param_1);
    thunk_FUN_710081c200(param_1);
    return uVar2;
  }
  return 0;
}



// ===== FUN_7100774de0 @ 7100774de0 (size=64) =====

undefined8 FUN_7100774de0(int *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_710074a2e0(param_2);
  if (-1 < iVar1) {
    *param_1 = iVar1;
    return 0;
  }
  return 0xb;
}



// ===== FUN_7100774e20 @ 7100774e20 (size=24) =====

undefined8 FUN_7100774e20(void)

{
  FUN_710074a2d0();
  return 0;
}



// ===== thunk_FUN_710074a2c0 @ 7100774e40 (size=4) =====

undefined8 thunk_FUN_710074a2c0(int param_1)

{
  long lVar1;
  
  lVar1 = tpidrro_el0;
  return *(undefined8 *)(lVar1 + (long)param_1 * 8 + 0x180);
}



// ===== FUN_7100774e50 @ 7100774e50 (size=24) =====

undefined8 FUN_7100774e50(void)

{
  FUN_710074a3c0();
  return 0;
}



// ===== FUN_7100774e70 @ 7100774e70 (size=604) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100774e70(void)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [7];
  undefined1 local_49;
  int local_44;
  undefined1 local_40 [64];
  
  iVar4 = FUN_7100761e90(_DAT_7100d19578);
  if ((iVar4 == 0) ||
     ((_DAT_7100d19578 != 0 && (iVar4 = FUN_7100761e90(0,&DAT_7100d19570), iVar4 == 0)))) {
    _DAT_7100d19568 = cntpct_el0;
    iVar4 = FUN_7100762160(_DAT_7100d19570,0,auStack_58);
    if (iVar4 == 0) {
      local_49 = 0;
      if (local_44 < 0) {
        uVar10 = -local_44;
        uVar9 = uVar10 % 0x3c;
        uVar6 = (ulong)uVar10 / 0x3c;
        uVar10 = uVar10 / 0x3c + (int)(uVar6 / 0x3c) * -0x3c;
        uVar8 = (int)(uVar6 / 0x3c) + (int)(uVar6 / 0x5a0) * -0x18;
        local_40[0] = 0x3c;
        FUN_710081f760(local_40 + 1,auStack_50,0x3f);
        lVar5 = FUN_710081ce00(local_40);
        puVar7 = local_40 + lVar5;
        local_40[lVar5] = 0x3e;
        uVar3 = 0x2b;
      }
      else {
        iVar4 = local_44 >> 0x1f;
        iVar1 = local_44 / 0x3c + iVar4;
        uVar8 = iVar1 - iVar4;
        uVar9 = local_44 + (iVar1 - iVar4) * -0x3c;
        uVar10 = uVar8 % 0x3c;
        uVar8 = uVar8 / 0x3c + (uVar8 / 0x5a0) * -0x18;
        local_40[0] = 0x3c;
        FUN_710081f760(local_40 + 1,auStack_50,0x3f);
        lVar5 = FUN_710081ce00(local_40);
        puVar7 = local_40 + lVar5;
        local_40[lVar5] = 0x3e;
        uVar3 = 0x2d;
      }
      puVar7[1] = uVar3;
      cVar2 = (char)(uVar8 / 10);
      puVar7[2] = cVar2 + '0';
      puVar7[4] = 0x3a;
      puVar7[7] = 0x3a;
      puVar7[3] = (char)uVar8 + ((char)(uVar8 / 10) + cVar2 * '\x04') * -2 + '0';
      cVar2 = (char)(uVar10 / 10);
      puVar7[5] = cVar2 + '0';
      puVar7[6] = (char)uVar10 + ((char)(uVar10 / 10) + cVar2 * '\x04') * -2 + '0';
      cVar2 = (char)(uVar9 / 10);
      puVar7[8] = cVar2 + '0';
      puVar7[9] = (char)uVar9 + ((char)(uVar9 / 10) + cVar2 * '\x04') * -2 + '0';
      FUN_7100808460(&DAT_71008549e0,local_40,0);
      return;
    }
  }
  else {
    _DAT_7100d19570 = 0xffffffffffffffff;
  }
  return;
}



// ===== FUN_71007750d0 @ 71007750d0 (size=232) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_71007750d0(long param_1,long *param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  if (param_1 == 4 || param_1 == 1) {
    if (param_2 == (long *)0x0) {
      puVar4 = (undefined4 *)FUN_710080e8e0();
      *puVar4 = 0xe;
      uVar3 = 0xffffffff;
    }
    else if (_DAT_7100d19570 == -1) {
      puVar4 = (undefined4 *)FUN_710080e8e0();
      *puVar4 = 5;
      uVar3 = 0xffffffff;
    }
    else {
      lVar2 = cntpct_el0;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = ((ulong)(lVar2 - _DAT_7100d19568) % 19200000) * 10000;
      *param_2 = (ulong)(lVar2 - _DAT_7100d19568) / 19200000 + _DAT_7100d19570;
      param_2[1] = SUB168((auVar1 / (undefined1  [16])0xc0 & (undefined1  [16])0x1ffffffffffffff) /
                          (undefined1  [16])0x34,0) * 0x34;
      uVar3 = 0;
    }
  }
  else {
    puVar4 = (undefined4 *)FUN_710080e8e0();
    *puVar4 = 0x16;
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



// ===== FUN_71007751c0 @ 71007751c0 (size=136) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_71007751c0(undefined4 *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  
  if (param_2 != (long *)0x0) {
    if (_DAT_7100d19570 == -1) {
      *param_1 = 5;
      return 0xffffffff;
    }
    lVar1 = cntpct_el0;
    uVar2 = lVar1 - _DAT_7100d19568;
    *param_2 = uVar2 / 19200000 + _DAT_7100d19570;
    param_2[1] = ((uVar2 % 19200000) * 10) / 0xc0;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
  }
  return 0;
}



// ===== FUN_7100775250 @ 7100775250 (size=152) =====

/* WARNING: Removing unreachable block (ram,0x0071007752c8) */
/* WARNING: Removing unreachable block (ram,0x00710077529c) */

void FUN_7100775250(void)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  lVar1 = tpidrro_el0;
  *(undefined4 *)(lVar1 + 0x1e0) = 0x21545624;
  puVar2 = PTR_DAT_7100af53d0;
  *(undefined8 *)(lVar1 + 0x1e8) = 0;
  *(undefined **)(lVar1 + 0x1f0) = puVar2;
  *(undefined1 **)(lVar1 + 0x1f8) = &DAT_7100d23700;
  uVar3 = FUN_7100769a00();
  *(undefined4 *)(lVar1 + 0x1e4) = uVar3;
  FUN_710080f900(&DAT_7100d23710,&DAT_7100af8290,8);
  return;
}



// ===== FUN_71007752f0 @ 71007752f0 (size=232) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71007752f0(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  iVar1 = _DAT_7100d18e00;
  lVar5 = _DAT_7100d18df8;
  lVar6 = (long)_DAT_7100d18e00;
  if (1 < _DAT_7100d18e00) {
    lVar3 = *(long *)(_DAT_7100d18df8 + (ulong)(_DAT_7100d18e00 - 1) * 8);
    lVar4 = FUN_710081ce00();
    if (lVar4 == 0x10) {
      iVar2 = FUN_710080b4c0(lVar3 + 8,"_NXLINK_");
      if (iVar2 == 0) {
        _DAT_7100d18e00 = iVar1 + -1;
        _DAT_7100d19580 = FUN_710080daa0(lVar3,0,0x10);
        lVar6 = (long)_DAT_7100d18e00;
        lVar5 = _DAT_7100d18df8;
      }
    }
    *(undefined8 *)(lVar5 + lVar6 * 8) = 0;
    return;
  }
  *(undefined8 *)(_DAT_7100d18df8 + lVar6 * 8) = 0;
  return;
}



// ===== FUN_71007753e0 @ 71007753e0 (size=48) =====

uint FUN_71007753e0(uint param_1)

{
  if ((param_1 < 0x86) && ((byte)(&DAT_71009c5ad0)[(int)param_1] != 0)) {
    return (uint)(byte)(&DAT_71009c5ad0)[(int)param_1];
  }
  return param_1 + 10000;
}



// ===== FUN_7100775460 @ 7100775460 (size=32) =====

undefined8 FUN_7100775460(undefined8 param_1,long param_2)

{
  thunk_FUN_71007520b0(*(long *)(param_2 + 8) + 4);
  return 0;
}



// ===== FUN_7100775480 @ 7100775480 (size=28) =====

undefined8 FUN_7100775480(undefined8 param_1,undefined8 param_2)

{
  thunk_FUN_71007520b0(param_2);
  return 0;
}



// ===== FUN_71007754a0 @ 71007754a0 (size=116) =====

undefined8 FUN_71007754a0(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 local_18;
  short local_10;
  char local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined8 local_8;
  
  local_18 = param_1;
  puVar2 = (undefined4 *)FUN_710081cdc0(&local_18);
  local_10 = (short)puVar2[5] + 0x76c;
  local_e = (char)puVar2[4] + '\x01';
  local_c = (undefined1)puVar2[2];
  local_d = (undefined1)puVar2[3];
  local_b = (undefined1)puVar2[1];
  local_a = (undefined1)*puVar2;
  iVar1 = FUN_7100762270(&local_10,&local_8,1,0);
  if (iVar1 != 0) {
    return local_18;
  }
  return local_8;
}



// ===== FUN_7100775520 @ 7100775520 (size=212) =====

byte * FUN_7100775520(long param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  
  pbVar4 = &DAT_7100d19590;
  bVar1 = DAT_7100d19590;
  if (param_1 == 0) {
    bVar1 = DAT_7100d19590 & 1;
    while( true ) {
      if (bVar1 == 0) {
        return pbVar4;
      }
      pbVar4 = pbVar4 + 0x140;
      if (pbVar4 == &DAT_7100d1bd90) break;
      bVar1 = *pbVar4 & 1;
    }
    return (byte *)0x0;
  }
  do {
    if ((bVar1 & 1) != 0) {
      lVar3 = FUN_710081ce00(pbVar4 + 0x120);
      iVar2 = FUN_710080b4c0(pbVar4 + 0x120,param_1,lVar3);
      if ((iVar2 == 0) && (*(char *)(param_1 + lVar3) == ':' || *(char *)(param_1 + lVar3) == '\0'))
      {
        return pbVar4;
      }
    }
    pbVar4 = pbVar4 + 0x140;
    if (pbVar4 == &DAT_7100d1bd90) {
      return (byte *)0x0;
    }
    bVar1 = *pbVar4;
  } while( true );
}



// ===== FUN_7100775600 @ 7100775600 (size=460) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_7100775600(undefined4 *param_1,char *param_2,undefined8 *param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  undefined1 *puVar7;
  int local_4;
  
  pcVar6 = param_2;
  do {
    lVar4 = FUN_710076cbf0(&local_4,pcVar6);
    if (lVar4 < 0) goto LAB_7100775650;
    pcVar6 = pcVar6 + lVar4;
  } while (local_4 != 0x3a && local_4 != 0);
  pcVar1 = pcVar6;
  if (local_4 != 0x3a) {
    pcVar6 = param_2;
    pcVar1 = param_2;
  }
  do {
    lVar4 = FUN_710076cbf0(&local_4,pcVar6);
    if (lVar4 < 0) goto LAB_7100775650;
    if (local_4 == 0x3a) {
      uVar3 = 0x16;
      goto LAB_7100775654;
    }
    pcVar6 = pcVar6 + lVar4;
  } while (local_4 != 0);
  puVar7 = (undefined1 *)*param_3;
  if (puVar7 == (undefined1 *)0x0) {
    if (pcVar1 == param_2) {
      if (_DAT_7100d1bd90 == -1) goto LAB_7100775778;
      puVar7 = &DAT_7100d19590 + (long)_DAT_7100d1bd90 * 0x140;
    }
    else if (((DAT_7100d1bd94 & 1) == 0) ||
            (puVar7 = (undefined1 *)FUN_7100775520(param_2), puVar7 == (undefined1 *)0x0)) {
LAB_7100775778:
      uVar3 = 0x13;
      goto LAB_7100775654;
    }
  }
  if (*pcVar1 == '/') {
    lVar4 = FUN_710076d158();
    FUN_710081f760(lVar4 + 0x2e820,pcVar1,0x400);
  }
  else {
    puVar2 = &DAT_71008455d0;
    if (*(undefined **)(puVar7 + 0x118) != (undefined *)0x0) {
      puVar2 = *(undefined **)(puVar7 + 0x118);
    }
    lVar4 = FUN_710076d158(*pcVar1,puVar2,0x400);
    lVar4 = lVar4 + 0x2e820;
    FUN_710081f760(lVar4);
    lVar5 = FUN_710081ce00(lVar4);
    FUN_710080e6a0(lVar4,&DAT_71008455d0,0x400 - lVar5);
    FUN_710080e6a0(lVar4,pcVar1,0x3ff - lVar5);
  }
  lVar4 = FUN_710076d158();
  if (*(char *)(lVar4 + 0x2ec20) == '\0') {
    *param_3 = puVar7;
    return lVar4 + 0x2e820;
  }
  *(undefined1 *)(lVar4 + 0x2ec20) = 0;
  uVar3 = 0x5b;
LAB_7100775654:
  *param_1 = uVar3;
  return 0;
LAB_7100775650:
  uVar3 = 0x8a;
  goto LAB_7100775654;
}



// ===== FUN_71007757d0 @ 71007757d0 (size=156) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71007757d0(undefined1 *param_1)

{
  long lVar1;
  undefined1 auStack_28 [32];
  undefined2 local_8;
  
  local_8 = 0;
  FUN_710081f760(auStack_28,param_1 + 0x120,0x20);
  lVar1 = FUN_710081ce00(auStack_28);
  FUN_710080e6a0(auStack_28,":",0x21 - lVar1);
  FUN_7100835120(auStack_28);
  thunk_FUN_710081c200(*(undefined8 *)(param_1 + 0x118));
  thunk_FUN_71007520b0(param_1 + 0x108);
  if (*(int *)(param_1 + 4) == _DAT_7100d1bd90) {
    _DAT_7100d1bd90 = -1;
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  return;
}



// ===== FUN_7100775880 @ 7100775880 (size=256) =====

long FUN_7100775880(undefined4 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  long local_20;
  int local_18 [2];
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_20 = *(long *)(param_1 + 0x5e);
  lVar1 = FUN_7100775600(param_1,param_3,&local_20);
  if (lVar1 != 0) {
    lVar1 = FUN_710076d158();
    *(undefined1 *)(lVar1 + 0x2eb20) = 0;
    puVar3 = *(undefined4 **)(param_2 + 8);
    local_18[0] = FUN_7100753f30(local_20 + 0x108,lVar1 + 0x2e820,3,&local_10);
    if (local_18[0] == 0) {
      *puVar3 = 0x66736476;
      *(undefined8 *)(puVar3 + 1) = local_10;
      *(undefined8 *)(puVar3 + 3) = uStack_8;
      *(undefined8 *)(puVar3 + 6) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 8) = 0;
      FUN_7100808340(puVar3 + 10,0,(ulong)DAT_7100af38bc * 0x310);
      return param_2;
    }
    *(int *)(lVar1 + 0x2e818) = local_18[0];
    local_18[1] = 0;
    lVar1 = FUN_710080e800(local_18,&DAT_71009c5b58,4,8,&LAB_7100775440);
    uVar2 = 5;
    if (lVar1 != 0) {
      uVar2 = *(undefined4 *)(lVar1 + 4);
    }
    *param_1 = uVar2;
  }
  return 0;
}



// ===== FUN_7100775980 @ 7100775980 (size=248) =====

undefined8 FUN_7100775980(undefined4 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long local_20;
  undefined8 local_18;
  undefined8 local_10;
  int local_8 [2];
  
  local_20 = *(long *)(param_1 + 0x5e);
  local_10 = 0;
  local_18 = 0;
  lVar1 = FUN_7100775600(param_1,param_2,&local_20);
  lVar2 = local_20;
  if (lVar1 != 0) {
    lVar1 = FUN_710076d158();
    *(undefined1 *)(lVar1 + 0x2eb20) = 0;
    local_8[0] = FUN_7100753f50(lVar2 + 0x108,lVar1 + 0x2e820,&local_18);
    if ((local_8[0] == 0) &&
       (local_8[0] = FUN_7100753f60(lVar2 + 0x108,lVar1 + 0x2e820,&local_10), local_8[0] == 0)) {
      *param_3 = 1;
      param_3[1] = 1;
      *(undefined4 *)(param_3 + 6) = 0;
      param_3[9] = 0;
      param_3[2] = local_10;
      param_3[3] = local_18;
      param_3[4] = local_18;
      param_3[5] = 0;
      param_3[7] = 0;
      param_3[8] = 2;
      return 0;
    }
    lVar2 = FUN_710076d158();
    *(int *)(lVar2 + 0x2e818) = local_8[0];
    local_8[1] = 0;
    lVar2 = FUN_710080e800(local_8,&DAT_71009c5b58,4,8,&LAB_7100775440);
    uVar3 = 5;
    if (lVar2 != 0) {
      uVar3 = *(undefined4 *)(lVar2 + 4);
    }
    *param_1 = uVar3;
  }
  return 0xffffffff;
}



// ===== FUN_7100775a80 @ 7100775a80 (size=124) =====

undefined8 FUN_7100775a80(undefined4 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined1 auVar5 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uVar1 = FUN_71007548d0(param_2);
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    auVar5 = FUN_710076d158(uVar1,uVar1 & 0xffffffff);
    local_8 = auVar5._8_4_;
    *(undefined4 *)(auVar5._0_8_ + 0x2e818) = local_8;
    uStack_4 = 0;
    lVar3 = FUN_710080e800(&local_8,&DAT_71009c5b58,4,8,&LAB_7100775440);
    uVar4 = 5;
    if (lVar3 != 0) {
      uVar4 = *(undefined4 *)(lVar3 + 4);
    }
    uVar2 = 0xffffffff;
    *param_1 = uVar4;
  }
  return uVar2;
}



// ===== FUN_7100775b00 @ 7100775b00 (size=236) =====

undefined8 FUN_7100775b00(undefined4 *param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined1 auVar5 [12];
  undefined8 local_10;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uVar1 = FUN_7100754aa0(param_2,&local_10);
  if ((int)uVar1 == 0) {
    param_3[0xc] = 0;
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    param_3[8] = 0;
    param_3[9] = 0;
    param_3[10] = 0;
    param_3[0xb] = 0;
    param_3[2] = local_10;
    *(undefined2 *)(param_3 + 1) = 1;
    *(undefined4 *)((long)param_3 + 4) = 0x81b6;
    if (*(char *)(param_2 + 0x38) != '\0') {
      uVar2 = FUN_71007754a0(*(undefined8 *)(param_2 + 0x20));
      param_3[7] = uVar2;
      uVar2 = FUN_71007754a0(*(undefined8 *)(param_2 + 0x28));
      param_3[5] = uVar2;
      uVar2 = FUN_71007754a0(*(undefined8 *)(param_2 + 0x30));
      param_3[3] = uVar2;
    }
    uVar2 = 0;
  }
  else {
    auVar5 = FUN_710076d158(uVar1,uVar1 & 0xffffffff);
    local_8 = auVar5._8_4_;
    *(undefined4 *)(auVar5._0_8_ + 0x2e818) = local_8;
    uStack_4 = 0;
    lVar3 = FUN_710080e800(&local_8,&DAT_71009c5b58,4,8,&LAB_7100775440);
    uVar4 = 5;
    if (lVar3 != 0) {
      uVar4 = *(undefined4 *)(lVar3 + 4);
    }
    uVar2 = 0xffffffff;
    *param_1 = uVar4;
  }
  return uVar2;
}



// ===== FUN_7100775bf0 @ 7100775bf0 (size=148) =====

undefined8 FUN_7100775bf0(undefined4 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined1 auVar5 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  if (param_3 < 0) {
    *param_1 = 0x16;
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_71007548e0(param_2,param_3);
    uVar2 = 0;
    if (iVar1 != 0) {
      auVar5 = FUN_710076d158(0);
      local_8 = auVar5._8_4_;
      *(undefined4 *)(auVar5._0_8_ + 0x2e818) = local_8;
      uStack_4 = 0;
      lVar3 = FUN_710080e800(&local_8,&DAT_71009c5b58,4,8,&LAB_7100775440);
      uVar4 = 5;
      if (lVar3 != 0) {
        uVar4 = *(undefined4 *)(lVar3 + 4);
      }
      uVar2 = 0xffffffff;
      *param_1 = uVar4;
    }
  }
  return uVar2;
}



// ===== FUN_7100775c90 @ 7100775c90 (size=472) =====

int FUN_7100775c90(undefined4 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  int local_84;
  long local_80;
  int local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_80 = *(long *)(param_1 + 0x5e);
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  lVar2 = FUN_7100775600(param_1,param_2,&local_80);
  lVar5 = local_80;
  if (lVar2 != 0) {
    lVar3 = FUN_710076d158();
    lVar2 = lVar3 + 0x2e820;
    *(undefined1 *)(lVar3 + 0x2eb20) = 0;
    lVar5 = lVar5 + 0x108;
    local_78[0] = FUN_7100753d30(lVar5,lVar2,&local_84);
    if (local_78[0] == 0) {
      if (local_84 == 0) {
        local_78[0] = FUN_7100753f30(lVar5,lVar2,3);
        if (local_78[0] == 0) {
          param_3[0xc] = 0;
          *param_3 = 0;
          param_3[1] = 0;
          param_3[2] = 0;
          param_3[3] = 0;
          *(undefined2 *)(param_3 + 1) = 1;
          param_3[4] = 0;
          param_3[5] = 0;
          param_3[6] = 0;
          param_3[7] = 0;
          *(undefined4 *)((long)param_3 + 4) = 0x41ff;
          param_3[8] = 0;
          param_3[9] = 0;
          param_3[10] = 0;
          param_3[0xb] = 0;
          thunk_FUN_71007520b0(&local_40);
          return 0;
        }
      }
      else {
        if (local_84 != 1) {
          *param_1 = 0x16;
          return -1;
        }
        local_78[0] = FUN_7100753f20(lVar5,lVar2,1,&local_70);
        if (local_78[0] == 0) {
          local_30 = 0;
          uStack_28 = 0;
          local_40 = local_70;
          uStack_38 = uStack_68;
          local_20 = 0;
          uStack_18 = 0;
          local_10 = 0;
          uStack_8 = 0;
          iVar1 = FUN_7100775b00(param_1,&local_40,param_3);
          thunk_FUN_71007520b0(&local_70);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = FUN_7100753fc0(lVar5,lVar2,&local_60);
          if (iVar1 != 0) {
            return 0;
          }
          if ((char)local_48 == '\0') {
            return 0;
          }
          uVar4 = FUN_71007754a0(local_60);
          param_3[7] = uVar4;
          uVar4 = FUN_71007754a0(local_58);
          param_3[5] = uVar4;
          uVar4 = FUN_71007754a0(local_50);
          param_3[3] = uVar4;
          return 0;
        }
      }
    }
    lVar5 = FUN_710076d158();
    *(int *)(lVar5 + 0x2e818) = local_78[0];
    local_78[1] = 0;
    lVar5 = FUN_710080e800(local_78,&DAT_71009c5b58,4,8,&LAB_7100775440);
    uVar6 = 5;
    if (lVar5 != 0) {
      uVar6 = *(undefined4 *)(lVar5 + 4);
    }
    *param_1 = uVar6;
  }
  return -1;
}



// ===== FUN_7100775fc0 @ 7100775fc0 (size=316) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_7100775fc0(undefined4 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  long local_20;
  int local_18 [2];
  undefined1 auStack_10 [16];
  
  local_20 = *(long *)(param_1 + 0x5e);
  if (*(long *)(local_20 + 0x118) == 0) {
    *param_1 = 0x58;
  }
  else {
    lVar2 = FUN_7100775600(param_1,param_2,&local_20);
    if (lVar2 != 0) {
      lVar3 = FUN_710076d158();
      lVar1 = local_20;
      lVar2 = lVar3 + 0x2e820;
      *(undefined1 *)(lVar3 + 0x2eb20) = 0;
      local_18[0] = FUN_7100753f30(local_20 + 0x108,lVar2,3,auStack_10);
      if (local_18[0] == 0) {
        thunk_FUN_71007520b0(auStack_10);
        FUN_710080f900(*(undefined8 *)(lVar1 + 0x118),lVar2,0x301);
        uVar4 = FUN_710081ce00(lVar2);
        if (*(char *)(*(long *)(lVar1 + 0x118) + uVar4 + -1) != '/' && uVar4 < 0x300) {
          *(undefined1 *)(*(long *)(lVar1 + 0x118) + uVar4) = 0x2f;
          *(undefined1 *)(*(long *)(lVar1 + 0x118) + uVar4 + 1) = 0;
        }
        _DAT_7100d1bd90 = *(undefined4 *)(lVar1 + 4);
        return 0;
      }
      *(int *)(lVar3 + 0x2e818) = local_18[0];
      local_18[1] = 0;
      lVar2 = FUN_710080e800(local_18,&DAT_71009c5b58,4,8,&LAB_7100775440);
      uVar5 = 5;
      if (lVar2 != 0) {
        uVar5 = *(undefined4 *)(lVar2 + 4);
      }
      *param_1 = uVar5;
    }
  }
  return 0xffffffff;
}



// ===== FUN_7100776100 @ 7100776100 (size=164) =====

undefined8 FUN_7100776100(undefined4 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  long local_10;
  int local_8 [2];
  
  local_10 = *(long *)(param_1 + 0x5e);
  lVar1 = FUN_7100775600(param_1,param_2,&local_10);
  if (lVar1 != 0) {
    lVar1 = FUN_710076d158();
    *(undefined1 *)(lVar1 + 0x2eb20) = 0;
    local_8[0] = FUN_7100753cf0(local_10 + 0x108);
    if (local_8[0] == 0) {
      return 0;
    }
    *(int *)(lVar1 + 0x2e818) = local_8[0];
    local_8[1] = 0;
    lVar1 = FUN_710080e800(local_8,&DAT_71009c5b58,4,8,&LAB_7100775440);
    uVar2 = 5;
    if (lVar1 != 0) {
      uVar2 = *(undefined4 *)(lVar1 + 4);
    }
    *param_1 = uVar2;
  }
  return 0xffffffff;
}



// ===== FUN_71007761b0 @ 71007761b0 (size=164) =====

undefined8 FUN_71007761b0(undefined4 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  long local_10;
  int local_8 [2];
  
  local_10 = *(long *)(param_1 + 0x5e);
  lVar1 = FUN_7100775600(param_1,param_2,&local_10);
  if (lVar1 != 0) {
    lVar1 = FUN_710076d158();
    *(undefined1 *)(lVar1 + 0x2eb20) = 0;
    local_8[0] = FUN_7100753ce0(local_10 + 0x108);
    if (local_8[0] == 0) {
      return 0;
    }
    *(int *)(lVar1 + 0x2e818) = local_8[0];
    local_8[1] = 0;
    lVar1 = FUN_710080e800(local_8,&DAT_71009c5b58,4,8,&LAB_7100775440);
    uVar2 = 5;
    if (lVar1 != 0) {
      uVar2 = *(undefined4 *)(lVar1 + 4);
    }
    *param_1 = uVar2;
  }
  return 0xffffffff;
}



// ===== FUN_7100776260 @ 7100776260 (size=164) =====

undefined8 FUN_7100776260(undefined4 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  long local_10;
  int local_8 [2];
  
  local_10 = *(long *)(param_1 + 0x5e);
  lVar1 = FUN_7100775600(param_1,param_2,&local_10);
  if (lVar1 != 0) {
    lVar1 = FUN_710076d158();
    *(undefined1 *)(lVar1 + 0x2eb20) = 0;
    local_8[0] = FUN_7100753cd0(local_10 + 0x108);
    if (local_8[0] == 0) {
      return 0;
    }
    *(int *)(lVar1 + 0x2e818) = local_8[0];
    local_8[1] = 0;
    lVar1 = FUN_710080e800(local_8,&DAT_71009c5b58,4,8,&LAB_7100775440);
    uVar2 = 5;
    if (lVar1 != 0) {
      uVar2 = *(undefined4 *)(lVar1 + 4);
    }
    *param_1 = uVar2;
  }
  return 0xffffffff;
}



// ===== FUN_7100776310 @ 7100776310 (size=316) =====

long FUN_7100776310(undefined4 *param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  int local_1008 [2];
  undefined1 auStack_1000 [4096];
  
  if (param_4 == 0) {
    return 0;
  }
  lVar3 = 0;
  while( true ) {
    uVar1 = param_4;
    if (0x1000 < param_4) {
      uVar1 = 0x1000;
    }
    FUN_710080f900(auStack_1000,param_3,uVar1);
    local_1008[0] = FUN_71007546d0(param_2,*(undefined8 *)(param_2 + 0x18),auStack_1000,uVar1,0);
    if (local_1008[0] != 0) break;
    if ((*(uint *)(param_2 + 0x10) >> 0xd & 1) == 0) {
      param_4 = param_4 - uVar1;
      lVar3 = lVar3 + uVar1;
      param_3 = param_3 + uVar1;
      *(ulong *)(param_2 + 0x18) = *(long *)(param_2 + 0x18) + uVar1;
      if (param_4 == 0) {
        return lVar3;
      }
    }
    else {
      lVar3 = lVar3 + uVar1;
      FUN_71007548d0(param_2);
      param_4 = param_4 - uVar1;
      param_3 = param_3 + uVar1;
      *(ulong *)(param_2 + 0x18) = *(long *)(param_2 + 0x18) + uVar1;
      if (param_4 == 0) {
        return lVar3;
      }
    }
  }
  if (lVar3 != 0) {
    return lVar3;
  }
  lVar3 = FUN_710076d158();
  *(int *)(lVar3 + 0x2e818) = local_1008[0];
  local_1008[1] = 0;
  lVar3 = FUN_710080e800(local_1008,&DAT_71009c5b58,4,8,&LAB_7100775440);
  uVar2 = 5;
  if (lVar3 != 0) {
    uVar2 = *(undefined4 *)(lVar3 + 4);
  }
  *param_1 = uVar2;
  return -1;
}



// ===== FUN_7100776450 @ 7100776450 (size=308) =====

long FUN_7100776450(undefined4 *param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong local_1010;
  int local_1008 [2];
  undefined1 auStack_1000 [4096];
  
  local_1010 = 0;
  if (param_4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    lVar4 = *(long *)(param_2 + 0x18);
    do {
      uVar1 = param_4;
      if (0x1000 < param_4) {
        uVar1 = 0x1000;
      }
      iVar2 = FUN_71007544b0(param_2,lVar4,auStack_1000,uVar1,0,&local_1010);
      if (uVar1 < local_1010) {
        local_1010 = uVar1;
      }
      uVar1 = local_1010;
      FUN_710080f900(param_3,auStack_1000,local_1010);
      if (iVar2 != 0) {
        if (lVar5 != 0) {
          return lVar5;
        }
        lVar5 = FUN_710076d158();
        *(int *)(lVar5 + 0x2e818) = iVar2;
        local_1008[1] = 0;
        local_1008[0] = iVar2;
        lVar5 = FUN_710080e800(local_1008,&DAT_71009c5b58,4,8,&LAB_7100775440);
        uVar3 = 5;
        if (lVar5 != 0) {
          uVar3 = *(undefined4 *)(lVar5 + 4);
        }
        *param_1 = uVar3;
        return -1;
      }
      param_4 = param_4 - uVar1;
      lVar5 = lVar5 + uVar1;
      param_3 = param_3 + uVar1;
      lVar4 = uVar1 + *(long *)(param_2 + 0x18);
      *(long *)(param_2 + 0x18) = lVar4;
    } while (param_4 != 0);
  }
  return lVar5;
}



// ===== FUN_7100776590 @ 7100776590 (size=256) =====

long FUN_7100776590(undefined4 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined1 auVar4 [12];
  long local_10;
  undefined4 local_8;
  undefined4 uStack_4;
  
  if ((*(uint *)(param_2 + 0x10) & 3) == 1) {
    *param_1 = 9;
    local_10 = -1;
  }
  else {
    uVar1 = FUN_71007544b0(param_2,*(undefined8 *)(param_2 + 0x18),param_3,param_4,0,&local_10);
    if ((uVar1 & 0x3fffff) == 0xd401) {
      lVar2 = FUN_7100776450(param_1,param_2,param_3,param_4);
      return lVar2;
    }
    if (uVar1 == 0) {
      *(long *)(param_2 + 0x18) = *(long *)(param_2 + 0x18) + local_10;
    }
    else {
      auVar4 = FUN_710076d158();
      local_8 = auVar4._8_4_;
      *(undefined4 *)(auVar4._0_8_ + 0x2e818) = local_8;
      uStack_4 = 0;
      lVar2 = FUN_710080e800(&local_8,&DAT_71009c5b58,4,8,&LAB_7100775440);
      uVar3 = 5;
      if (lVar2 != 0) {
        uVar3 = *(undefined4 *)(lVar2 + 4);
      }
      local_10 = -1;
      *param_1 = uVar3;
    }
  }
  return local_10;
}



// ===== FUN_7100776690 @ 7100776690 (size=468) =====

undefined8 FUN_7100776690(undefined4 *param_1,long param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  undefined1 auVar6 [12];
  long local_10;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uVar1 = DAT_7100af38bc;
  lVar5 = *(long *)(param_2 + 8);
  lVar3 = lVar5 + 0x28;
  uVar2 = *(long *)(lVar5 + 0x18) + 1;
  *(ulong *)(lVar5 + 0x18) = uVar2;
  if (uVar2 < *(ulong *)(lVar5 + 0x20)) {
    lVar3 = lVar3 + uVar2 * 0x310;
  }
  else {
    *(undefined8 *)(lVar5 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(lVar5 + 0x20) = 0;
    FUN_7100808340(lVar3,0,(ulong)uVar1 * 0x310);
    uVar2 = FUN_7100754ca0(lVar5 + 4,&local_10,uVar1,lVar3);
    if ((int)uVar2 != 0) {
      auVar6 = FUN_710076d158(uVar2,uVar2 & 0xffffffff);
      local_8 = auVar6._8_4_;
      *(undefined4 *)(auVar6._0_8_ + 0x2e818) = local_8;
      uStack_4 = 0;
      lVar3 = FUN_710080e800(&local_8,&DAT_71009c5b58,4,8,&LAB_7100775440);
      uVar4 = 5;
      if (lVar3 != 0) {
        uVar4 = *(undefined4 *)(lVar3 + 4);
      }
      *param_1 = uVar4;
      return 0xffffffff;
    }
    if (local_10 == 0) {
      *param_1 = 2;
      return 0xffffffff;
    }
    *(undefined8 *)(lVar5 + 0x18) = 0;
    *(long *)(lVar5 + 0x20) = local_10;
  }
  *(undefined2 *)(param_4 + 2) = 0;
  if (*(char *)(lVar3 + 0x304) == '\0') {
    *(undefined4 *)(param_4 + 4) = 0x4000;
  }
  else {
    if (*(char *)(lVar3 + 0x304) != '\x01') {
      *param_1 = 0x16;
      return 0xffffffff;
    }
    *(undefined4 *)(param_4 + 4) = 0x8000;
    *(undefined8 *)(param_4 + 0x10) = *(undefined8 *)(lVar3 + 0x308);
  }
  param_3[0x1c] = 0;
  param_3[0x1d] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  param_3[0xc] = 0;
  param_3[0xd] = 0;
  param_3[0xe] = 0;
  param_3[0xf] = 0;
  param_3[0x10] = 0;
  param_3[0x11] = 0;
  param_3[0x12] = 0;
  param_3[0x13] = 0;
  param_3[0x14] = 0;
  param_3[0x15] = 0;
  param_3[0x16] = 0;
  param_3[0x17] = 0;
  param_3[0x18] = 0;
  param_3[0x19] = 0;
  param_3[0x1a] = 0;
  param_3[0x1b] = 0;
  *(undefined8 *)((long)param_3 + 0xef) = 0;
  *(undefined8 *)((long)param_3 + 0xf7) = 0;
  lVar5 = FUN_710081e5c0(lVar3,0xff);
  FUN_710080f900(param_3,lVar3);
  if (lVar5 == 0xff) {
    *param_1 = 0x5b;
    return 0xffffffff;
  }
  *(undefined1 *)((long)param_3 + lVar5 + 1) = 0;
  return 0;
}



// ===== FUN_7100776870 @ 7100776870 (size=292) =====

long FUN_7100776870(undefined4 *param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined1 auVar5 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  if ((*(uint *)(param_2 + 0x10) & 3) == 0) {
    *param_1 = 9;
  }
  else {
    if (((*(uint *)(param_2 + 0x10) >> 3 & 1) == 0) ||
       (uVar2 = FUN_7100754aa0(param_2,param_2 + 0x18), uVar1 = uVar2, (int)uVar2 == 0)) {
      uVar1 = FUN_71007546d0(param_2,*(undefined8 *)(param_2 + 0x18),param_3,param_4,0);
      uVar2 = 0xd401;
      if (((uint)uVar1 & 0x3fffff) == 0xd401) {
        lVar3 = FUN_7100776310(param_1,param_2,param_3,param_4);
        return lVar3;
      }
      if ((uint)uVar1 == 0) {
        *(long *)(param_2 + 0x18) = *(long *)(param_2 + 0x18) + param_4;
        if ((*(uint *)(param_2 + 0x10) >> 0xd & 1) == 0) {
          return param_4;
        }
        FUN_71007548d0(param_2);
        return param_4;
      }
    }
    auVar5 = FUN_710076d158(uVar2,uVar1 & 0xffffffff);
    local_8 = auVar5._8_4_;
    *(undefined4 *)(auVar5._0_8_ + 0x2e818) = local_8;
    uStack_4 = 0;
    lVar3 = FUN_710080e800(&local_8,&DAT_71009c5b58,4,8,&LAB_7100775440);
    uVar4 = 5;
    if (lVar3 != 0) {
      uVar4 = *(undefined4 *)(lVar3 + 4);
    }
    *param_1 = uVar4;
  }
  return -1;
}



// ===== FUN_7100776ab0 @ 7100776ab0 (size=560) =====

undefined8 FUN_7100776ab0(undefined4 *param_1,undefined8 *param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  long local_20;
  int local_18 [3];
  undefined4 uStack_c;
  undefined8 uStack_8;
  
  local_20 = *(long *)(param_1 + 0x5e);
  lVar3 = FUN_7100775600(param_1,param_3,&local_20);
  if (lVar3 == 0) {
    return 0xffffffff;
  }
  lVar4 = FUN_710076d158();
  lVar3 = local_20;
  *(undefined1 *)(lVar4 + 0x2eb20) = 0;
  if ((param_4 & 3) == 1) {
    uVar7 = 6;
LAB_7100776b18:
    uVar6 = (uint)uVar7;
joined_r0x007100776b1c:
    if ((param_4 >> 9 & 1) != 0) {
      lVar4 = FUN_710076d158();
      iVar1 = FUN_7100753ae0(lVar3 + 0x108,lVar4 + 0x2e820,0,0);
      uVar7 = (ulong)uVar6;
      if ((param_4 & 0x800) != 0 && iVar1 != 0) {
        *(int *)(lVar4 + 0x2e818) = iVar1;
        uStack_c = 0;
        local_18[2] = iVar1;
        lVar3 = FUN_710080e800(local_18 + 2,&DAT_71009c5b58,4,8,&LAB_7100775440);
        if (lVar3 == 0) {
          uVar2 = 5;
        }
        else {
          uVar2 = *(undefined4 *)(lVar3 + 4);
        }
        goto LAB_7100776c0c;
      }
    }
    lVar3 = lVar3 + 0x108;
    lVar4 = FUN_710076d158();
    local_18[0] = FUN_7100753f20(lVar3,lVar4 + 0x2e820,uVar7 & 0xffffffff,local_18 + 2);
    if (local_18[0] == 0) {
      if ((((param_4 & 3) == 0) || ((param_4 >> 10 & 1) == 0)) ||
         (iVar1 = FUN_71007548e0(local_18 + 2,0), iVar1 == 0)) {
        puVar5 = param_2 + 4;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        *param_2 = CONCAT44(uStack_c,local_18[2]);
        param_2[1] = uStack_8;
        lVar4 = FUN_710076d158();
        *(uint *)(param_2 + 2) = param_4 & 0x200b;
        puVar5[2] = 0;
        puVar5[3] = 0;
        FUN_7100753fc0(lVar3,lVar4 + 0x2e820);
        return 0;
      }
      thunk_FUN_71007520b0(local_18 + 2);
      *(int *)(lVar4 + 0x2e818) = iVar1;
      local_18[0] = iVar1;
    }
    else {
      *(int *)(lVar4 + 0x2e818) = local_18[0];
    }
    local_18[1] = 0;
    lVar3 = FUN_710080e800(local_18,&DAT_71009c5b58,4,8,&LAB_7100775440);
    uVar2 = 5;
    if (lVar3 != 0) {
      uVar2 = *(undefined4 *)(lVar3 + 4);
    }
    *param_1 = uVar2;
  }
  else {
    if ((param_4 & 3) == 2) {
      uVar7 = 7;
      uVar6 = 7;
      goto joined_r0x007100776b1c;
    }
    if (((param_4 & 3) == 0) && (uVar7 = 1, (param_4 >> 3 & 1) == 0)) goto LAB_7100776b18;
    uVar2 = 0x16;
LAB_7100776c0c:
    *param_1 = uVar2;
  }
  return 0xffffffff;
}



// ===== FUN_7100776ce0 @ 7100776ce0 (size=804) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100776ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auVar3 [15];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  int iVar42;
  int iVar43;
  long lVar44;
  undefined8 *puVar45;
  long lVar46;
  undefined1 *puVar47;
  undefined1 *puVar48;
  undefined1 uVar49;
  undefined1 auVar50 [15];
  undefined1 auVar51 [16];
  uint uVar52;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_10 = param_2;
  uStack_8 = param_3;
  if ((DAT_7100d1bd94 & 1) == 0) {
    lVar46 = FUN_7100808340(&DAT_7100d19590,0,0x2800);
    uVar41 = uRam0000007100ae6d78;
    uVar40 = _DAT_7100ae6d70;
    uVar39 = uRam0000007100ae6d68;
    uVar38 = _DAT_7100ae6d60;
    uVar37 = uRam0000007100ae6d58;
    puVar36 = PTR_FUN_7100ae6d50;
    puVar35 = PTR_FUN_7100ae6d48;
    puVar34 = PTR_LAB_7100ae6d40;
    uVar33 = uRam0000007100ae6d38;
    uVar32 = _DAT_7100ae6d30;
    puVar31 = PTR_FUN_7100ae6d28;
    puVar30 = PTR_FUN_7100ae6d20;
    puVar29 = PTR_FUN_7100ae6d18;
    puVar28 = PTR_FUN_7100ae6d10;
    puVar27 = PTR_FUN_7100ae6d08;
    puVar26 = PTR_LAB_7100ae6d00;
    uVar25 = uRam0000007100ae6cf8;
    lVar44 = _DAT_7100ae6cf0;
    puVar24 = PTR_FUN_7100ae6ce8;
    puVar23 = PTR_LAB_7100ae6ce0;
    puVar22 = PTR_FUN_7100ae6cd8;
    puVar21 = PTR_FUN_7100ae6cd0;
    puVar20 = PTR_LAB_7100ae6cc8;
    puVar19 = PTR_FUN_7100ae6cc0;
    puVar18 = PTR_FUN_7100ae6cb8;
    puVar17 = PTR_LAB_7100ae6cb0;
    puVar16 = PTR_FUN_7100ae6ca8;
    puVar15 = PTR_FUN_7100ae6ca0;
    puVar14 = PTR_FUN_7100ae6c98;
    puVar13 = PTR_FUN_7100ae6c90;
    uVar12 = uRam0000007100ae6c88;
    uVar11 = _DAT_7100ae6c80;
    iVar42 = 0;
    uVar2 = (ulong)DAT_7100af38bc;
    do {
      *(undefined8 *)(lVar46 + 0x10) = uVar12;
      *(undefined8 *)(lVar46 + 8) = uVar11;
      *(long *)(lVar46 + 0x78) = lVar44;
      *(undefined8 *)(lVar46 + 0x80) = uVar25;
      *(long *)(lVar46 + 8) = lVar46 + 0x120;
      *(undefined8 *)(lVar46 + 0xc0) = uVar33;
      *(undefined8 *)(lVar46 + 0xb8) = uVar32;
      *(int *)(lVar46 + 4) = iVar42;
      iVar42 = iVar42 + 1;
      *(undefined **)(lVar46 + 0x20) = puVar14;
      *(undefined **)(lVar46 + 0x18) = puVar13;
      *(undefined **)(lVar46 + 0x30) = puVar16;
      *(undefined **)(lVar46 + 0x28) = puVar15;
      *(undefined **)(lVar46 + 0x40) = puVar18;
      *(undefined **)(lVar46 + 0x38) = puVar17;
      *(undefined **)(lVar46 + 0x50) = puVar20;
      *(undefined **)(lVar46 + 0x48) = puVar19;
      *(undefined **)(lVar46 + 0x60) = puVar22;
      *(undefined **)(lVar46 + 0x58) = puVar21;
      *(undefined **)(lVar46 + 0x70) = puVar24;
      *(undefined **)(lVar46 + 0x68) = puVar23;
      *(ulong *)(lVar46 + 0x78) = uVar2 * 0x310 + lVar44;
      *(undefined **)(lVar46 + 0x90) = puVar27;
      *(undefined **)(lVar46 + 0x88) = puVar26;
      *(undefined **)(lVar46 + 0xa0) = puVar29;
      *(undefined **)(lVar46 + 0x98) = puVar28;
      *(undefined **)(lVar46 + 0xb0) = puVar31;
      *(undefined **)(lVar46 + 0xa8) = puVar30;
      *(long *)(lVar46 + 0xb8) = lVar46;
      *(undefined **)(lVar46 + 0xd0) = puVar35;
      *(undefined **)(lVar46 + 200) = puVar34;
      *(undefined8 *)(lVar46 + 0xe0) = uVar37;
      *(undefined **)(lVar46 + 0xd8) = puVar36;
      *(undefined8 *)(lVar46 + 0xf0) = uVar39;
      *(undefined8 *)(lVar46 + 0xe8) = uVar38;
      *(undefined8 *)(lVar46 + 0x100) = uVar41;
      *(undefined8 *)(lVar46 + 0xf8) = uVar40;
      lVar46 = lVar46 + 0x140;
    } while (iVar42 != 0x20);
    _DAT_7100d1bd90 = -1;
    DAT_7100d1bd94 = 1;
  }
  else {
    lVar44 = FUN_7100775520();
    if (lVar44 != 0) goto LAB_7100776fe8;
  }
  puVar47 = &DAT_7100d19590;
  iVar42 = 0x20;
  puVar48 = &DAT_7100d1a5d0;
  uVar52 = 0;
  bVar9 = false;
  do {
    uVar49 = puVar48[0x140];
    auVar50._0_4_ = (uint)(byte)puVar47[0x280] << 0x10;
    auVar50[4] = puVar47[0x500];
    auVar50[5] = 0;
    auVar50[6] = puVar47[0x780];
    auVar50[7] = uVar49;
    auVar50[8] = puVar47[0xa00];
    auVar50[9] = 0;
    auVar50[10] = puVar47[0xc80];
    auVar50[0xb] = 0;
    auVar50[0xc] = puVar47[0xf00];
    auVar50[0xd] = 0;
    auVar50[0xe] = uVar49;
    auVar3[1] = puVar47[0x140];
    auVar3[0] = *puVar47;
    auVar3._2_13_ = auVar50._2_13_;
    auVar4[3] = puVar47[0x3c0];
    auVar4._0_3_ = auVar3._0_3_;
    auVar4._4_11_ = auVar50._4_11_;
    auVar5[5] = puVar47[0x640];
    auVar5._0_5_ = auVar4._0_5_;
    auVar5._6_9_ = auVar50._6_9_;
    auVar6[7] = puVar47[0x8c0];
    auVar6._0_7_ = auVar5._0_7_;
    auVar6._8_7_ = auVar50._8_7_;
    auVar7[9] = puVar47[0xb40];
    auVar7._0_9_ = auVar6._0_9_;
    auVar7._10_5_ = auVar50._10_5_;
    auVar8[0xb] = puVar47[0xdc0];
    auVar8._0_11_ = auVar7._0_11_;
    auVar8._12_3_ = auVar50._12_3_;
    auVar51._0_13_ = auVar8._0_13_;
    auVar51[0xd] = *puVar48;
    auVar51[0xe] = uVar49;
    auVar51[0xf] = puVar48[0x280];
    auVar51 = NEON_cmeq(auVar51,0,1);
    auVar51 = NEON_umaxp(auVar51,auVar51,4);
    if (auVar51._0_8_ != 0) {
      uVar1 = uVar52 + iVar42;
      goto LAB_7100776e0c;
    }
    uVar52 = uVar52 + 0x10;
    iVar42 = iVar42 + -0x10;
    puVar47 = puVar47 + 0x1400;
    puVar48 = puVar48 + 0x1400;
    bVar10 = !bVar9;
    bVar9 = true;
  } while (bVar10);
  goto LAB_7100776fe8;
  while (uVar52 = uVar52 + 1, uVar1 != uVar52) {
LAB_7100776e0c:
    if (((&DAT_7100d19590)[(ulong)uVar52 * 0x140] & 1) == 0) {
      lVar44 = (ulong)uVar52 * 0x140;
      *(undefined8 *)(lVar44 + 0x7100d19698) = local_10;
      *(undefined8 *)(lVar44 + 0x7100d196a0) = uStack_8;
      *(undefined8 *)(lVar44 + 0x7100d196b0) = 0;
      *(undefined8 *)(lVar44 + 0x7100d196b8) = 0;
      *(undefined8 *)(lVar44 + 0x7100d196c0) = 0;
      *(undefined8 *)(lVar44 + 0x7100d196c8) = 0;
      FUN_710081f760(lVar44 + 0x7100d196b0,param_1,0x1f);
      iVar42 = FUN_7100835160(lVar44 + 0x7100d19598);
      if (iVar42 != -1) {
        (&DAT_7100d19590)[lVar44] = 1;
        if ((DAT_7100af38b8 & 1) == 0) {
          *(undefined8 *)(lVar44 + 0x7100d196a8) = 0;
        }
        else {
          puVar47 = (undefined1 *)thunk_FUN_710081c1c0(0x301);
          *(undefined1 **)(lVar44 + 0x7100d196a8) = puVar47;
          if (puVar47 != (undefined1 *)0x0) {
            *puVar47 = 0x2f;
            *(undefined1 *)(*(long *)(lVar44 + 0x7100d196a8) + 1) = 0;
          }
        }
        if (_DAT_7100d1bd90 == -1) {
          _DAT_7100d1bd90 = *(int *)(lVar44 + 0x7100d19594);
        }
        puVar45 = (undefined8 *)FUN_7100835240(&DAT_7100853d20);
        if ((puVar45 == (undefined8 *)0x0) ||
           (iVar43 = FUN_710080aec0(*puVar45,"stdnull"), iVar43 == 0)) {
          FUN_7100834fe0(iVar42);
        }
        return iVar42;
      }
      break;
    }
  }
LAB_7100776fe8:
  thunk_FUN_71007520b0(&local_10);
  return -1;
}



// ===== FUN_7100777010 @ 7100777010 (size=64) =====

ulong FUN_7100777010(void)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 local_10;
  undefined8 uStack_8;
  
  uVar3 = FUN_7100752bc0(&local_10);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  iVar1 = FUN_7100776ce0(&DAT_710083a078,local_10,uStack_8);
  uVar2 = 0;
  if (iVar1 == -1) {
    uVar2 = 0x559;
  }
  return (ulong)uVar2;
}



// ===== FUN_7100777050 @ 7100777050 (size=188) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100777050(void)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int local_4;
  
  uVar2 = FUN_7100769a20();
  if ((((uVar2 & 1) == 0) && (_DAT_7100d18e00 != 0)) &&
     ((undefined1 *)*_DAT_7100d18df8 != (undefined1 *)0x0)) {
    puVar1 = (undefined1 *)*_DAT_7100d18df8;
    puVar5 = (undefined1 *)0x0;
    while (puVar4 = puVar1, lVar3 = FUN_710076cbf0(&local_4,puVar4), -1 < lVar3) {
      while (local_4 != 0x2f) {
        if (local_4 == 0) {
          if (puVar5 == (undefined1 *)0x0) {
            return;
          }
          *puVar5 = 0;
          FUN_7100833c20(*_DAT_7100d18df8);
          *puVar5 = 0x2f;
          return;
        }
        puVar4 = puVar4 + lVar3;
        lVar3 = FUN_710076cbf0(&local_4,puVar4);
        if (lVar3 < 0) {
          return;
        }
      }
      puVar1 = puVar4 + lVar3;
      puVar5 = puVar4;
    }
  }
  return;
}



// ===== FUN_7100777110 @ 7100777110 (size=100) =====

undefined8 FUN_7100777110(void)

{
  byte *pbVar1;
  
  if ((DAT_7100d1bd94 & 1) != 0) {
    pbVar1 = &DAT_7100d19590;
    do {
      if ((*pbVar1 & 1) != 0) {
        FUN_71007757d0(pbVar1);
      }
      pbVar1 = pbVar1 + 0x140;
    } while (pbVar1 != &DAT_7100d1bd90);
    DAT_7100d1bd94 = 0;
  }
  return 0;
}



// ===== FUN_7100777180 @ 7100777180 (size=96) =====

undefined8 FUN_7100777180(uint *param_1,ushort *param_2)

{
  ushort uVar1;
  
  uVar1 = *param_2;
  if (0x3ff < (uVar1 + 0x2800 & 0xffff)) {
    *param_1 = (uint)uVar1;
    return 1;
  }
  if ((param_2[1] + 0x2400 & 0xffff) < 0x400) {
    *param_1 = (uint)param_2[1] + (uint)uVar1 * 0x400 + 0xfca02400;
    return 2;
  }
  return 0xffffffffffffffff;
}



// ===== FUN_71007771e0 @ 71007771e0 (size=88) =====

undefined8 FUN_71007771e0(ushort *param_1,uint param_2)

{
  if (param_2 < 0x10000) {
    if (param_1 != (ushort *)0x0) {
      *param_1 = (ushort)param_2;
    }
    return 1;
  }
  if (param_2 < 0x110000) {
    if (param_1 != (ushort *)0x0) {
      *param_1 = (short)(param_2 >> 10) + 0xd7c0;
      param_1[1] = ((ushort)param_2 & 0x3ff) + 0xdc00;
    }
    return 2;
  }
  return 0xffffffffffffffff;
}



// ===== FUN_7100777240 @ 7100777240 (size=208) =====

undefined8 FUN_7100777240(byte *param_1,ulong param_2)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = (uint)param_2;
  bVar1 = (byte)param_2;
  if (uVar2 < 0x80) {
    if (param_1 != (byte *)0x0) {
      *param_1 = bVar1;
    }
    return 1;
  }
  if (uVar2 < 0x800) {
    if (param_1 != (byte *)0x0) {
      *param_1 = (char)(uVar2 >> 6) - 0x40;
      param_1[1] = (bVar1 & 0x3f) + 0x80;
    }
    return 2;
  }
  if (uVar2 < 0x10000) {
    if (param_1 != (byte *)0x0) {
      *param_1 = (char)(uVar2 >> 0xc) - 0x20;
      param_1[1] = ((byte)(param_2 >> 6) & 0x3f) + 0x80;
      param_1[2] = (bVar1 & 0x3f) + 0x80;
    }
    return 3;
  }
  if (uVar2 < 0x110000) {
    if (param_1 != (byte *)0x0) {
      *param_1 = (char)(uVar2 >> 0x12) - 0x10;
      param_1[1] = ((byte)(param_2 >> 0xc) & 0x3f) + 0x80;
      param_1[2] = ((byte)(param_2 >> 6) & 0x3f) + 0x80;
      param_1[3] = (bVar1 & 0x3f) + 0x80;
    }
    return 4;
  }
  return 0xffffffffffffffff;
}



// ===== FUN_71007774f0 @ 71007774f0 (size=112) =====

uint FUN_71007774f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = tpidrro_el0;
  uVar2 = FUN_710076d09c(param_2,param_1,*(undefined4 *)(lVar1 + 0x1e4),param_3);
  if ((uVar2 & 0x3fffff) != 0xea01) {
    return uVar2;
  }
  FUN_7100749670(param_2);
  return uVar2;
}



// ===== FUN_7100777560 @ 7100777560 (size=264) =====

void FUN_7100777560(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18b80);
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x18ba0) != '\0') {
      FUN_710077e260(lVar1,*(long *)(param_1 + 0x18b90) << 2);
      lVar1 = *(long *)(param_1 + 0x18b80);
    }
    FUN_710081c200(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x18ac0);
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x18ae0) != '\0') {
      FUN_710077e260(lVar1,*(long *)(param_1 + 0x18ad0) << 2);
      lVar1 = *(long *)(param_1 + 0x18ac0);
    }
    FUN_710081c200(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x18a00);
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x18a20) != '\0') {
      FUN_710077e260(lVar1,*(long *)(param_1 + 0x18a10) << 2);
      lVar1 = *(long *)(param_1 + 0x18a00);
    }
    FUN_710081c200(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x18940);
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x18960) != '\0') {
      FUN_710077e260(lVar1,*(long *)(param_1 + 0x18950) << 2);
      lVar1 = *(long *)(param_1 + 0x18940);
    }
    FUN_710081c200(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x18880);
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x188a0) != '\0') {
      FUN_710077e260(lVar1,*(long *)(param_1 + 0x18890) << 2);
      lVar1 = *(long *)(param_1 + 0x18880);
    }
    FUN_710081c200(lVar1);
  }
  FUN_710077cdc0(param_1);
  return;
}



// ===== FUN_7100777670 @ 7100777670 (size=16) =====

void FUN_7100777670(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x14810) = param_3;
  *(undefined8 *)(param_1 + 0x14818) = param_2;
  return;
}



// ===== FUN_7100777680 @ 7100777680 (size=296) =====

void FUN_7100777680(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = param_1[2];
  uVar3 = param_2 + param_1[1];
  param_1[1] = uVar3;
  if (uVar3 <= uVar1) {
    return;
  }
  uVar4 = param_1[3];
  if ((uVar4 != 0 && uVar4 <= uVar3) && (uVar4 == 0 || uVar3 != uVar4)) {
    FUN_7100778ac0(&DAT_7100d1bd98,L"Maximum allowed array size (%u) is exceeded");
    FUN_7100778a60(&DAT_7100d1bd98);
    uVar3 = param_1[1];
    uVar1 = param_1[2];
  }
  uVar1 = uVar1 + 0x20 + (uVar1 >> 2);
  if (uVar1 < uVar3) {
    uVar1 = uVar3;
  }
  if ((char)param_1[4] == '\0') {
    lVar2 = FUN_71008141e0(*param_1,uVar1 << 2);
    if (lVar2 == 0) {
      FUN_7100778a60(&DAT_7100d1bd98);
    }
  }
  else {
    lVar2 = FUN_710081c1c0();
    if (lVar2 == 0) {
      FUN_7100778a60(&DAT_7100d1bd98);
    }
    lVar5 = *param_1;
    if (lVar5 != 0) {
      lVar6 = param_1[2];
      FUN_710080f900(lVar2,lVar5,lVar6 << 2);
      FUN_710077e260(lVar5,lVar6 << 2);
      FUN_710081c200(*param_1);
      *param_1 = lVar2;
      param_1[2] = uVar1;
      return;
    }
  }
  *param_1 = lVar2;
  param_1[2] = uVar1;
  return;
}



// ===== FUN_71007778d0 @ 71007778d0 (size=1508) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_71007778d0(long *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined4 uVar12;
  long local_2828;
  long local_2820;
  long local_2818;
  undefined8 uStack_2810;
  char local_2808;
  undefined1 local_2800 [2048];
  undefined1 auStack_2000 [8192];
  
  FUN_71007788a0(&DAT_7100d1bd98);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar6 = FUN_71007af5c0(0x2cca0);
  FUN_710078e250();
  lVar7 = lVar6 + 0x18c40;
  FUN_7100789120(lVar7,lVar6);
  lVar1 = lVar6 + 0x28b48;
  FUN_7100778dd0(lVar1,lVar6);
  lVar10 = param_1[2];
  *(undefined4 *)(lVar6 + 0x14808) = 0;
  *(int *)(lVar6 + 0x2cc98) = (int)lVar10;
  FUN_710077e890(lVar6 + 0x18880,&DAT_71009951f0);
  local_2800[0] = 0;
  lVar10 = *param_1;
  *(byte *)(lVar6 + 0xe2c4) = (byte)(int)param_1[8] & 1;
  if (lVar10 != 0) {
    FUN_710077e590(local_2800,lVar10,0x800);
  }
  FUN_710077da00(local_2800,param_1[1],auStack_2000,0x800);
  FUN_710078e240(lVar6,auStack_2000);
  lVar10 = param_1[6];
  lVar8 = param_1[7];
  *(undefined4 *)(lVar6 + 0xe240) = 1;
  *(undefined4 *)(lVar6 + 0x107e4) = 1;
  *(long *)(lVar6 + 0x14810) = lVar8;
  *(long *)(lVar6 + 0x14818) = lVar10;
  *(undefined1 *)(lVar6 + 0xe2c5) = 1;
  cVar5 = FUN_71007894a0(lVar7,auStack_2000,4);
  if (cVar5 == '\0') {
    *(undefined4 *)((long)param_1 + 0x14) = 0xf;
    FUN_7100778e60(lVar1);
    FUN_7100788f00(lVar7);
    lVar7 = *(long *)(lVar6 + 0x18b80);
    if (lVar7 != 0) {
      if (*(char *)(lVar6 + 0x18ba0) != '\0') {
        FUN_710077e260(lVar7,*(long *)(lVar6 + 0x18b90) << 2);
        lVar7 = *(long *)(lVar6 + 0x18b80);
      }
      FUN_710081c200(lVar7);
    }
    lVar7 = *(long *)(lVar6 + 0x18ac0);
    if (lVar7 != 0) {
      if (*(char *)(lVar6 + 0x18ae0) != '\0') {
        FUN_710077e260(lVar7,*(long *)(lVar6 + 0x18ad0) << 2);
        lVar7 = *(long *)(lVar6 + 0x18ac0);
      }
      FUN_710081c200(lVar7);
    }
    lVar7 = *(long *)(lVar6 + 0x18a00);
    if (lVar7 != 0) {
      if (*(char *)(lVar6 + 0x18a20) != '\0') {
        FUN_710077e260(lVar7,*(long *)(lVar6 + 0x18a10) << 2);
        lVar7 = *(long *)(lVar6 + 0x18a00);
      }
      FUN_710081c200(lVar7);
    }
    lVar7 = *(long *)(lVar6 + 0x18940);
    if (lVar7 != 0) {
      if (*(char *)(lVar6 + 0x18960) != '\0') {
        FUN_710077e260(lVar7,*(long *)(lVar6 + 0x18950) << 2);
        lVar7 = *(long *)(lVar6 + 0x18940);
      }
      FUN_710081c200(lVar7);
    }
    lVar7 = *(long *)(lVar6 + 0x18880);
    if (lVar7 == 0) goto LAB_7100777be4;
    if (*(char *)(lVar6 + 0x188a0) != '\0') {
      FUN_710077e260(lVar7,*(long *)(lVar6 + 0x18890) << 2);
      FUN_710081c200(*(undefined8 *)(lVar6 + 0x18880));
      goto LAB_7100777be4;
    }
  }
  else {
    cVar5 = FUN_7100789e10(lVar7,1);
    if (cVar5 != '\0') {
      bVar4 = *(byte *)(lVar6 + 0x26afd);
      cVar5 = *(char *)(lVar6 + 0x26afe);
      *(uint *)((long)param_1 + 0x2c) = (uint)bVar4;
      if (cVar5 != '\0') {
        *(uint *)((long)param_1 + 0x2c) = bVar4 | 2;
      }
      if (*(char *)(lVar6 + 0x26aff) != '\0') {
        *(uint *)((long)param_1 + 0x2c) = *(uint *)((long)param_1 + 0x2c) | 4;
      }
      if (*(char *)(lVar6 + 0x26afc) != '\0') {
        *(uint *)((long)param_1 + 0x2c) = *(uint *)((long)param_1 + 0x2c) | 8;
      }
      if (*(char *)(lVar6 + 0x26b02) != '\0') {
        *(uint *)((long)param_1 + 0x2c) = *(uint *)((long)param_1 + 0x2c) | 0x10;
      }
      if (*(char *)(lVar6 + 0x26b00) != '\0') {
        *(uint *)((long)param_1 + 0x2c) = *(uint *)((long)param_1 + 0x2c) | 0x20;
      }
      if (*(char *)(lVar6 + 0x26b03) != '\0') {
        *(uint *)((long)param_1 + 0x2c) = *(uint *)((long)param_1 + 0x2c) | 0x40;
      }
      if (*(char *)(lVar6 + 0x26b04) != '\0') {
        *(uint *)((long)param_1 + 0x2c) = *(uint *)((long)param_1 + 0x2c) | 0x80;
      }
      if (*(char *)(lVar6 + 0x26b01) != '\0') {
        *(uint *)((long)param_1 + 0x2c) = *(uint *)((long)param_1 + 0x2c) | 0x100;
      }
      local_2828 = 0;
      local_2820 = 0;
      local_2818 = 0;
      uStack_2810 = 0;
      local_2808 = '\0';
      if ((int)param_1[4] != 0) {
        cVar5 = FUN_7100789cf0(lVar7,&local_2828);
        if (cVar5 != '\0') {
          if (*(long *)((long)param_1 + 0x44) == 0) {
            if (param_1[3] != 0) {
              lVar10 = local_2820 * 4;
              uVar2 = lVar10 + 1;
              uVar3 = uVar2;
              if (uVar2 < 0x20) {
                uVar3 = 0x20;
              }
              lVar8 = FUN_710081c1c0(uVar3);
              if (lVar8 == 0) {
                FUN_7100778a60(&DAT_7100d1bd98);
              }
              FUN_7100808340(lVar8,0,uVar2);
              FUN_710077ee10(local_2828,lVar8,lVar10);
              lVar10 = FUN_710081ce00(lVar8);
              uVar11 = (ulong)*(uint *)(param_1 + 4);
              uVar2 = lVar10 + 1;
              uVar3 = uVar11;
              if (uVar2 < uVar11) {
                uVar3 = uVar2;
              }
              uVar12 = 0x14;
              if (uVar2 <= uVar11) {
                uVar12 = 1;
              }
              *(int *)((long)param_1 + 0x24) = (int)uVar3;
              *(undefined4 *)(param_1 + 5) = uVar12;
              FUN_710080f900(param_1[3],lVar8,(int)uVar3 + -1);
              *(undefined1 *)(param_1[3] + (ulong)(*(int *)((long)param_1 + 0x24) - 1)) = 0;
              FUN_710081c200(lVar8);
            }
          }
          else {
            FUN_7100777680(&local_2828,1);
            *(undefined4 *)(local_2828 + (local_2820 + -1) * 4) = 0;
            lVar10 = FUN_710081f600();
            uVar11 = (ulong)*(uint *)(param_1 + 4);
            uVar2 = lVar10 + 1;
            uVar3 = uVar11;
            if (uVar2 < uVar11) {
              uVar3 = uVar2;
            }
            uVar12 = 0x14;
            if (uVar2 <= uVar11) {
              uVar12 = 1;
            }
            *(int *)((long)param_1 + 0x24) = (int)uVar3;
            *(undefined4 *)(param_1 + 5) = uVar12;
            FUN_710080f900(*(undefined8 *)((long)param_1 + 0x44),local_2828,
                           (ulong)((int)uVar3 - 1) << 2);
            *(undefined4 *)
             (*(long *)((long)param_1 + 0x44) + (ulong)(*(int *)((long)param_1 + 0x24) - 1) * 4) = 0
            ;
          }
          goto LAB_7100777acc;
        }
      }
      *(undefined8 *)((long)param_1 + 0x24) = 0;
LAB_7100777acc:
      FUN_7100778ea0(lVar1,lVar7);
      if (local_2828 == 0) {
        return lVar6;
      }
      if (local_2808 != '\0') {
        FUN_710077e260(local_2828,local_2818 << 2);
      }
      FUN_710081c200(local_2828);
      return lVar6;
    }
    iVar9 = *(int *)(lVar6 + 0x14808);
    if (((iVar9 == 0) && (iVar9 = 0xd, 1 < _DAT_7100d1bd98)) &&
       (iVar9 = 0x15, _DAT_7100d1bd98 < 0xd)) {
      iVar9 = *(int *)(&DAT_71009c5b88 + (ulong)_DAT_7100d1bd98 * 4);
    }
    *(int *)((long)param_1 + 0x14) = iVar9;
    FUN_7100778e60(lVar1);
    FUN_7100788f00(lVar7);
    if (*(long *)(lVar6 + 0x18b80) != 0) {
      if (*(char *)(lVar6 + 0x18ba0) == '\0') {
        FUN_710081c200();
      }
      else {
        FUN_710077e260(*(long *)(lVar6 + 0x18b80),*(long *)(lVar6 + 0x18b90) << 2);
        FUN_710081c200(*(undefined8 *)(lVar6 + 0x18b80));
      }
    }
    lVar7 = *(long *)(lVar6 + 0x18ac0);
    if (lVar7 != 0) {
      if (*(char *)(lVar6 + 0x18ae0) == '\0') {
        FUN_710081c200();
      }
      else {
        FUN_710077e260(lVar7,*(long *)(lVar6 + 0x18ad0) << 2);
        FUN_710081c200(*(long *)(lVar6 + 0x18ac0));
      }
    }
    lVar7 = *(long *)(lVar6 + 0x18a00);
    if (lVar7 != 0) {
      if (*(char *)(lVar6 + 0x18a20) == '\0') {
        FUN_710081c200();
      }
      else {
        FUN_710077e260(lVar7,*(long *)(lVar6 + 0x18a10) << 2);
        FUN_710081c200(*(long *)(lVar6 + 0x18a00));
      }
    }
    if (*(long *)(lVar6 + 0x18940) != 0) {
      if (*(char *)(lVar6 + 0x18960) == '\0') {
        FUN_710081c200();
      }
      else {
        FUN_710077e260(*(long *)(lVar6 + 0x18940),*(long *)(lVar6 + 0x18950) << 2);
        FUN_710081c200(*(undefined8 *)(lVar6 + 0x18940));
      }
    }
    lVar7 = *(long *)(lVar6 + 0x18880);
    if (lVar7 == 0) goto LAB_7100777be4;
    if (*(char *)(lVar6 + 0x188a0) != '\0') {
      FUN_710077e260(lVar7,*(long *)(lVar6 + 0x18890) << 2);
      lVar7 = *(long *)(lVar6 + 0x18880);
    }
  }
  FUN_710081c200(lVar7);
LAB_7100777be4:
  FUN_710077cdc0(lVar6);
  thunk_FUN_710081c200(lVar6,0x2cca0);
  return 0;
}



// ===== FUN_7100778040 @ 7100778040 (size=384) =====

undefined8 FUN_7100778040(long param_1)

{
  char cVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return 0x11;
  }
  cVar1 = FUN_710077b150(param_1 + 0x18c40);
  FUN_7100778e60(param_1 + 0x28b48);
  FUN_7100788f00(param_1 + 0x18c40);
  if (*(long *)(param_1 + 0x18b80) != 0) {
    if (*(char *)(param_1 + 0x18ba0) == '\0') {
      FUN_710081c200();
    }
    else {
      FUN_710077e260(*(long *)(param_1 + 0x18b80),*(long *)(param_1 + 0x18b90) << 2);
      FUN_710081c200(*(undefined8 *)(param_1 + 0x18b80));
    }
  }
  lVar2 = *(long *)(param_1 + 0x18ac0);
  if (lVar2 != 0) {
    if (*(char *)(param_1 + 0x18ae0) == '\0') {
      FUN_710081c200();
    }
    else {
      FUN_710077e260(lVar2,*(long *)(param_1 + 0x18ad0) << 2);
      FUN_710081c200(*(long *)(param_1 + 0x18ac0));
    }
  }
  lVar2 = *(long *)(param_1 + 0x18a00);
  if (lVar2 != 0) {
    if (*(char *)(param_1 + 0x18a20) == '\0') {
      FUN_710081c200();
    }
    else {
      FUN_710077e260(lVar2,*(long *)(param_1 + 0x18a10) << 2);
      FUN_710081c200(*(long *)(param_1 + 0x18a00));
    }
  }
  if (*(long *)(param_1 + 0x18940) != 0) {
    if (*(char *)(param_1 + 0x18960) == '\0') {
      FUN_710081c200();
    }
    else {
      FUN_710077e260(*(long *)(param_1 + 0x18940),*(long *)(param_1 + 0x18950) << 2);
      FUN_710081c200(*(undefined8 *)(param_1 + 0x18940));
    }
  }
  if (*(long *)(param_1 + 0x18880) != 0) {
    if (*(char *)(param_1 + 0x188a0) == '\0') {
      FUN_710081c200();
    }
    else {
      FUN_710077e260(*(long *)(param_1 + 0x18880),*(long *)(param_1 + 0x18890) << 2);
      FUN_710081c200(*(undefined8 *)(param_1 + 0x18880));
    }
  }
  FUN_710077cdc0(param_1);
  thunk_FUN_710081c200(param_1,0x2cca0);
  if (cVar1 != '\0') {
    return 0;
  }
  return 0x11;
}



// ===== FUN_7100778210 @ 7100778210 (size=624) =====

undefined4
FUN_7100778210(long param_1,int param_2,long param_3,long param_4,long param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  long lVar4;
  undefined1 local_800 [2048];
  
  *(undefined4 *)(param_1 + 0x14808) = 0;
  if (((*(uint *)(param_1 + 0x2cc98) & 0xfffffffd) == 0) ||
     ((param_2 == 0 && (*(char *)(param_1 + 0x26afc) == '\0')))) {
    lVar1 = param_1 + 0x18c40;
    if ((*(char *)(param_1 + 0x26afd) != '\0') &&
       ((*(int *)(param_1 + 0x1c674) == 2 && (*(char *)(param_1 + 0x20141) != '\0')))) {
      cVar3 = FUN_71007888d0(lVar1,0,0,0x4c);
      if (cVar3 == '\0') {
        return 0xf;
      }
      FUN_7100789520(lVar1,*(undefined8 *)(param_1 + 0x26ae8),0);
      return 0;
    }
    FUN_7100789580(lVar1);
  }
  else {
    *(int *)(param_1 + 0x14804) = param_2;
    *(undefined4 *)(&DAT_00004020 + param_1) = 0;
    *(undefined4 *)(param_1 + 0x12804) = 0;
    if (param_3 != 0) {
      FUN_710077e590(local_800,param_3,0x7fe);
      FUN_710077f030(local_800,&DAT_00004020 + param_1,0x800);
      FUN_710077d2f0(&DAT_00004020 + param_1,0x800);
    }
    if (param_4 != 0) {
      FUN_710077e590(local_800,param_4,0x7fe);
      FUN_710077f030(local_800,param_1 + 0x12804,0x800);
    }
    if (param_5 != 0) {
      FUN_710080ee60(&DAT_00004020 + param_1,param_5,0x800);
      FUN_710077d2f0(&DAT_00004020 + param_1,0x800);
    }
    if (param_6 != 0) {
      FUN_710077e5f0(param_1 + 0x12804,param_6,0x800);
    }
    puVar2 = &UNK_71009951f8;
    if (param_2 != 2) {
      puVar2 = &DAT_7100995460;
    }
    FUN_710077e5f0(param_1 + 0x1483c,puVar2,0x810);
    local_800[0] = 0;
    lVar1 = param_1 + 0x18c40;
    *(bool *)(param_1 + 0xe721) = param_2 != 2;
    FUN_7100779c50(param_1 + 0x28b48,lVar1,(long)*(int *)(param_1 + 0x2cc9c),local_800);
    while (((*(long *)(param_1 + 0x18c48) != -1 && (lVar4 = FUN_710078cce0(lVar1), lVar4 != 0)) &&
           (*(int *)(param_1 + 0x1c674) == 3))) {
      FUN_7100779c50(param_1 + 0x28b48,lVar1,(long)*(int *)(param_1 + 0x2cc9c),local_800);
      FUN_7100789580(lVar1);
    }
    FUN_7100789520(lVar1,*(undefined8 *)(param_1 + 0x26ae8),0);
  }
  return *(undefined4 *)(param_1 + 0x14808);
}



// ===== FUN_71007784f0 @ 71007784f0 (size=12) =====

void FUN_71007784f0(void)

{
  FUN_7100778210();
  return;
}



// ===== FUN_7100778500 @ 7100778500 (size=844) =====

ulong FUN_7100778500(long param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar1 = param_1 + 0x18c40;
  iVar4 = FUN_710078cd90(lVar1,2);
  *(int *)(param_1 + 0x2cc9c) = iVar4;
  if (iVar4 < 1) {
    if (((*(char *)(param_1 + 0x26afd) == '\0') || (*(int *)(param_1 + 0x1c674) != 5)) ||
       (*(char *)(param_1 + 0x223dc) == '\0')) {
      if (*(char *)(param_1 + 0x26b10) != '\0') {
        return 0xc;
      }
      uVar6 = 0x18;
      if (*(char *)(param_1 + 0x26b11) == '\0') {
        uVar6 = 10;
      }
      return (ulong)uVar6;
    }
    cVar3 = FUN_71007888d0(lVar1,0,0,0x4c);
    if (cVar3 == '\0') {
      return 0xf;
    }
    FUN_7100789520(lVar1,*(undefined8 *)(param_1 + 0x26ae8),0);
LAB_7100778820:
    uVar8 = FUN_7100778500(param_1,param_2);
    return uVar8;
  }
  if ((*(int *)(param_1 + 0x2cc98) == 0) && (*(char *)(param_1 + 0x20140) != '\0')) {
    uVar8 = FUN_71007784f0(param_1,0,0,0);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    goto LAB_7100778820;
  }
  FUN_710080ee60(param_2 + 0x400,param_1 + 0x18c74,0x400);
  FUN_710077ee10(param_2 + 0x400,param_2,0x400);
  FUN_710080ee60(param_2 + 0x1800,param_1 + 0x1e0c0,0x400);
  FUN_710077ee10(param_2 + 0x1800,param_2 + 0x1400,0x400);
  bVar2 = *(byte *)(param_1 + 0x20140);
  *(uint *)(param_2 + 0x2800) = (uint)bVar2;
  if (*(char *)(param_1 + 0x20141) != '\0') {
    *(uint *)(param_2 + 0x2800) = bVar2 | 2;
  }
  if (*(char *)(param_1 + 0x20143) != '\0') {
    *(uint *)(param_2 + 0x2800) = *(uint *)(param_2 + 0x2800) | 4;
  }
  if (*(char *)(param_1 + 0x20198) != '\0') {
    *(uint *)(param_2 + 0x2800) = *(uint *)(param_2 + 0x2800) | 0x10;
  }
  if (*(char *)(param_1 + 0x20199) != '\0') {
    *(uint *)(param_2 + 0x2800) = *(uint *)(param_2 + 0x2800) | 0x20;
  }
  iVar4 = *(int *)(param_1 + 0x201ac);
  uVar7 = *(undefined8 *)(param_1 + 0x20108);
  *(undefined8 *)(param_2 + 0x2804) = *(undefined8 *)(param_1 + 0x20100);
  *(undefined8 *)(param_2 + 0x280c) = uVar7;
  *(uint *)(param_2 + 0x2814) = (iVar4 != 0) + 2;
  *(undefined4 *)(param_2 + 0x2820) = *(undefined4 *)(param_1 + 0x1e0b4);
  *(undefined4 *)(param_2 + 0x2818) = *(undefined4 *)(param_1 + 0x2011c);
  uVar5 = FUN_710077eb00(param_1 + 0x200e8);
  *(undefined4 *)(param_2 + 0x281c) = uVar5;
  uVar7 = FUN_710077e920(param_1 + 0x200e8);
  *(undefined8 *)(param_2 + 0x287c) = uVar7;
  uVar7 = FUN_710077e920(param_1 + 0x200f0);
  *(undefined8 *)(param_2 + 0x2884) = uVar7;
  uVar7 = FUN_710077e920(param_1 + 0x200f8);
  uVar8 = *(ulong *)(param_1 + 0x201a0);
  *(undefined8 *)(param_2 + 0x288c) = uVar7;
  uVar6 = *(uint *)(param_1 + 0x20118);
  *(uint *)(param_2 + 0x2824) = *(byte *)(param_1 + 0x1e0b8) + 0x30;
  uVar5 = *(undefined4 *)(param_1 + 0x1e0bc);
  *(undefined8 *)(param_2 + 0x2838) = 0;
  *(int *)(param_2 + 0x2840) = (int)(uVar8 >> 10);
  *(undefined4 *)(param_2 + 0x2828) = uVar5;
  if (uVar6 < 3) {
    if (uVar6 != 0) {
      *(undefined4 *)(param_2 + 0x2844) = 1;
      goto LAB_71007786f0;
    }
  }
  else if (uVar6 == 3) {
    *(undefined4 *)(param_2 + 0x2844) = 2;
    uVar7 = *(undefined8 *)(param_1 + 0x2011c);
    uVar10 = *(undefined8 *)(param_1 + 0x20134);
    uVar9 = *(undefined8 *)(param_1 + 0x2012c);
    *(undefined8 *)(param_2 + 0x2850) = *(undefined8 *)(param_1 + 0x20124);
    *(undefined8 *)(param_2 + 0x2848) = uVar7;
    *(undefined8 *)(param_2 + 0x2860) = uVar10;
    *(undefined8 *)(param_2 + 0x2858) = uVar9;
    goto LAB_71007786f0;
  }
  *(undefined4 *)(param_2 + 0x2844) = 0;
LAB_71007786f0:
  iVar4 = *(int *)(param_1 + 0x201b0);
  *(int *)(param_2 + 0x2868) = iVar4;
  if (((iVar4 != 0) && (*(long *)(param_2 + 0x286c) != 0)) &&
     (*(int *)(param_2 + 0x2874) - 1U < 99999)) {
    FUN_710077e5f0(*(long *)(param_2 + 0x286c),param_1 + 0x201b4,*(int *)(param_2 + 0x2874));
  }
  *(uint *)(param_2 + 0x2878) = (uint)*(byte *)(param_1 + 0x221b4);
  return 0;
}



// ===== FUN_71007788a0 @ 71007788a0 (size=20) =====

void FUN_71007788a0(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  return;
}



// ===== thunk_FUN_71007788a0 @ 71007788c0 (size=4) =====

void thunk_FUN_71007788a0(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  return;
}



// ===== FUN_71007788d0 @ 71007788d0 (size=8) =====

undefined8 FUN_71007788d0(void)

{
  return 0;
}



// ===== FUN_71007788e0 @ 71007788e0 (size=112) =====

void FUN_71007788e0(uint *param_1,uint param_2)

{
  if (param_2 == 3) {
    if (*param_1 == 0xb) goto LAB_7100778908;
  }
  else if (param_2 < 4) {
    if (param_2 == 1) {
LAB_7100778940:
      if (*param_1 != 0) {
LAB_7100778908:
        param_1[1] = param_1[1] + 1;
        return;
      }
      *param_1 = param_2;
      goto LAB_7100778928;
    }
    if ((param_2 == 2) && (1 < *param_1)) goto LAB_7100778908;
  }
  else if (param_2 == 0xff) goto LAB_7100778940;
  *param_1 = param_2;
LAB_7100778928:
  param_1[1] = param_1[1] + 1;
  return;
}



// ===== FUN_7100778950 @ 7100778950 (size=44) =====

void FUN_7100778950(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  FUN_71007788e0(param_1,0xc);
  *param_3 = 1;
  return;
}



// ===== FUN_7100778980 @ 7100778980 (size=88) =====

void FUN_7100778980(undefined8 param_1)

{
  undefined *local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined4 local_8;
  
  local_70 = &DAT_71009952f8;
  puStack_68 = &DAT_71009952f8;
  local_60 = &DAT_71009952f8;
  puStack_58 = &DAT_71009952f8;
  local_50 = &DAT_71009952f8;
  puStack_48 = &DAT_71009952f8;
  local_40 = &DAT_71009952f8;
  puStack_38 = &DAT_71009952f8;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_10 = 0;
  local_8 = 7;
  FUN_710077edd0(&local_70);
  FUN_71007788e0(param_1,8);
  return;
}



// ===== FUN_71007789e0 @ 71007789e0 (size=80) =====

void FUN_71007789e0(long param_1,int param_2)

{
  int *piVar1;
  
  if ((param_2 == 0xff) && (*(char *)(param_1 + 8) == '\0')) {
    return;
  }
  FUN_71007788e0(param_1,param_2);
  piVar1 = (int *)FUN_71007adf60(4);
  *piVar1 = param_2;
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(piVar1,&PTR_PTR_FUN_7100aec298,0);
}



// ===== FUN_7100778a30 @ 7100778a30 (size=48) =====

void FUN_7100778a30(undefined8 param_1,undefined4 param_2)

{
  FUN_710077edf0(0);
  FUN_71007789e0(param_1,param_2);
  return;
}



// ===== FUN_7100778a60 @ 7100778a60 (size=40) =====

void FUN_7100778a60(undefined8 param_1)

{
  FUN_7100778980();
  FUN_7100778a30(param_1,8);
  return;
}



// ===== FUN_7100778a90 @ 7100778a90 (size=8) =====

void FUN_7100778a90(undefined8 param_1)

{
  FUN_7100778a30(param_1,0xc);
  return;
}



// ===== FUN_7100778aa0 @ 7100778aa0 (size=8) =====

void FUN_7100778aa0(undefined8 param_1)

{
  FUN_7100778a30(param_1,5);
  return;
}



// ===== FUN_7100778ab0 @ 7100778ab0 (size=4) =====

void FUN_7100778ab0(void)

{
  return;
}



// ===== FUN_7100778ac0 @ 7100778ac0 (size=244) =====

void FUN_7100778ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                   undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined1 auStack_10b0 [4096];
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_b0 = param_1;
  local_a0 = param_2;
  local_90 = param_3;
  local_80 = param_4;
  local_70 = param_5;
  local_60 = param_6;
  local_50 = param_7;
  local_40 = param_8;
  local_30 = param_11;
  local_28 = param_12;
  local_20 = param_13;
  uStack_18 = param_14;
  local_10 = param_15;
  uStack_8 = param_16;
  FUN_710081fb60(auStack_10b0,0x400,param_10);
  FUN_710077edd0();
  FUN_7100778ab0(param_9);
  return;
}



// ===== FUN_7100778bc0 @ 7100778bc0 (size=72) =====

void FUN_7100778bc0(undefined4 param_1,undefined8 param_2)

{
  undefined8 local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined4 local_8;
  
  puStack_68 = &DAT_71009952f8;
  local_60 = &DAT_71009952f8;
  puStack_58 = &DAT_71009952f8;
  local_50 = &DAT_71009952f8;
  puStack_48 = &DAT_71009952f8;
  local_40 = &DAT_71009952f8;
  puStack_38 = &DAT_71009952f8;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_10 = 1;
  local_70 = param_2;
  local_8 = param_1;
  FUN_710077edd0(&local_70);
  return;
}



// ===== FUN_7100778c10 @ 7100778c10 (size=80) =====

void FUN_7100778c10(long param_1)

{
  if (*(char *)(param_1 + 0xc) != '\0') {
    FUN_71007788e0(param_1,2);
    return;
  }
  FUN_7100778bc0(10);
  FUN_7100778ab0(param_1);
  FUN_71007788e0(param_1,2);
  return;
}



// ===== FUN_7100778c60 @ 7100778c60 (size=80) =====

void FUN_7100778c60(long param_1)

{
  if (*(char *)(param_1 + 0xc) != '\0') {
    FUN_7100778a30(param_1,2);
    return;
  }
  FUN_7100778bc0(0xb);
  FUN_7100778ab0(param_1);
  FUN_7100778a30(param_1,2);
  return;
}



// ===== FUN_7100778cb0 @ 7100778cb0 (size=72) =====

void FUN_7100778cb0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined4 local_8;
  
  local_60 = &DAT_71009952f8;
  puStack_58 = &DAT_71009952f8;
  local_50 = &DAT_71009952f8;
  puStack_48 = &DAT_71009952f8;
  local_40 = &DAT_71009952f8;
  puStack_38 = &DAT_71009952f8;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_10 = 2;
  local_70 = param_2;
  uStack_68 = param_3;
  local_8 = param_1;
  FUN_710077edd0(&local_70);
  return;
}



// ===== FUN_7100778d00 @ 7100778d00 (size=80) =====

void FUN_7100778d00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_710077e900();
  FUN_7100778cb0(8,param_2,param_3);
  FUN_7100778ab0(param_1);
  FUN_71007788e0(param_1,6);
  return;
}



// ===== FUN_7100778d50 @ 7100778d50 (size=12) =====

void FUN_7100778d50(undefined8 param_1,undefined8 param_2)

{
  FUN_7100778d00(param_1,0,param_2);
  return;
}



// ===== FUN_7100778d60 @ 7100778d60 (size=52) =====

void FUN_7100778d60(undefined8 param_1)

{
  FUN_7100778cb0(9);
  FUN_7100778ab0(param_1);
  FUN_71007788e0(param_1,9);
  return;
}



// ===== FUN_7100778da0 @ 7100778da0 (size=36) =====

void FUN_7100778da0(void)

{
  FUN_7100778cb0(0x21);
  FUN_71007788e0(&DAT_7100d1bd98,2);
  return;
}



// ===== FUN_7100778dd0 @ 7100778dd0 (size=96) =====

void FUN_7100778dd0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  FUN_710077dac0(param_1 + 2);
  param_1[1] = param_2;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined4 *)((long)param_1 + 0x214c) = 0;
  uVar1 = FUN_71007af5c0(0xe958);
  FUN_7100785c30(uVar1,param_1 + 2);
  param_1[0x24] = uVar1;
  return;
}



// ===== FUN_7100778e60 @ 7100778e60 (size=60) =====

void FUN_7100778e60(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x120);
  if (lVar1 != 0) {
    FUN_71007837d0(lVar1);
    thunk_FUN_710081c200(lVar1,0xe958);
  }
  FUN_710077db90(param_1 + 0x10);
  return;
}



// ===== FUN_7100778ea0 @ 7100778ea0 (size=112) =====

void FUN_7100778ea0(long param_1)

{
  char cVar1;
  
  FUN_710077e190(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x140) = 1;
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0xc230);
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  if (cVar1 == '\0') {
    cVar1 = FUN_710077ede0();
  }
  *(char *)(param_1 + 0x2148) = cVar1;
  *(undefined1 *)(param_1 + 0xa9) = 0;
  *(undefined1 *)(param_1 + 0x2149) = 0;
  *(undefined1 *)(param_1 + 0x141) = 1;
  *(undefined1 *)(param_1 + 0x144) = 0;
  FUN_710077eba0(param_1);
  return;
}



// ===== FUN_7100778f10 @ 7100778f10 (size=192) =====

void FUN_7100778f10(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_710081c1c0(0x100000);
  if (lVar2 == 0) {
    FUN_7100778a60(&DAT_7100d1bd98);
  }
LAB_7100778f38:
  iVar1 = FUN_710077dcb0(param_1,lVar2,0x100000);
  do {
    if (iVar1 < 1) {
      if (lVar2 == 0) {
        return;
      }
      FUN_710081c200(lVar2);
      return;
    }
    lVar3 = (long)iVar1;
    if (param_2 <= lVar3) {
      if ((int)param_2 < 1) goto LAB_7100778f38;
      lVar3 = (long)(int)param_2;
    }
    FUN_710077df50(param_1,lVar2,lVar3);
    param_2 = param_2 - lVar3;
    iVar1 = FUN_710077dcb0(param_1,lVar2,0x100000);
  } while( true );
}



// ===== FUN_7100778ff0 @ 7100778ff0 (size=808) =====

void FUN_7100778ff0(long param_1,long param_2,int *param_3,int *param_4,undefined8 param_5)

{
  long lVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  
  FUN_710077e5f0(param_4,&DAT_00004020 + *(long *)(param_1 + 8),param_5);
  lVar10 = *(long *)(param_1 + 8);
  if (*(int *)(&DAT_00004020 + lVar10) != 0) {
    puVar7 = (undefined4 *)FUN_710077cf20(&DAT_00004020 + lVar10);
    uVar2 = *puVar7;
    cVar3 = FUN_710077cf80(uVar2);
    if ((cVar3 == '\0') && (cVar3 = FUN_710077cf90(uVar2), cVar3 == '\0')) {
      FUN_710077d2f0(param_4,param_5);
      lVar10 = *(long *)(param_1 + 8);
    }
    else {
      lVar10 = *(long *)(param_1 + 8);
    }
  }
  iVar4 = *(int *)(lVar10 + 0x107e8);
  if (iVar4 != 0) {
    if (iVar4 == 2) {
      FUN_710077e5f0(param_4,param_2 + 0xdf04,param_5);
      FUN_710077d090(param_4,0,param_5);
    }
    else if (iVar4 == 3) {
      FUN_710077e5f0(param_4,param_2 + 0xdf04,param_5);
      FUN_710077d3b0(param_4);
    }
    else if (iVar4 == 1) {
      uVar6 = FUN_710077cfa0(param_2 + 0xdf04);
      FUN_710077e630(param_4,uVar6,param_5);
      FUN_710077d090(param_4,0,param_5);
    }
    FUN_710077d2f0(param_4,param_5);
    lVar10 = *(long *)(param_1 + 8);
  }
  lVar1 = lVar10 + 0x8030;
  if (*(int *)(lVar10 + 0xa030) != 0) {
    lVar1 = lVar10 + 0xa030;
  }
  uVar5 = FUN_710081f600(lVar1);
  if (((uVar5 != 0) && (uVar8 = FUN_710081f600(param_3), uVar5 <= uVar8)) &&
     (iVar4 = thunk_FUN_71008141a0(lVar1,param_3,uVar5), iVar4 == 0)) {
    cVar3 = FUN_710077cf80(*(undefined4 *)(lVar1 + uVar5 * 4 + -4));
    if (((cVar3 != '\0') || (cVar3 = FUN_710077cf80(param_3[uVar5]), cVar3 != '\0')) ||
       (param_3[uVar5] == 0)) {
      lVar10 = uVar8 << 2;
      if (uVar5 < uVar8) {
        lVar10 = uVar5 * 4;
      }
      param_3 = (int *)((long)param_3 + lVar10);
      while (cVar3 = FUN_710077cf80(*param_3), cVar3 != '\0') {
        param_3 = param_3 + 1;
      }
      if (*param_3 == 0) {
        *param_4 = 0;
        return;
      }
    }
  }
  iVar4 = *(int *)(*(long *)(param_1 + 8) + 0x1483c);
  iVar9 = *(int *)(*(long *)(param_1 + 8) + 0xe26c);
  if (iVar4 == 0x58 && iVar9 == 4) {
    cVar3 = FUN_710077cf90(0x3a);
    lVar10 = *(long *)(param_1 + 8);
    if (cVar3 != '\0') {
      *param_4 = 0;
    }
    iVar9 = *(int *)(lVar10 + 0xe26c);
LAB_71007790d8:
    if (iVar9 != 1) {
      FUN_710077e630(param_4,param_3,param_5);
      goto LAB_71007790f8;
    }
  }
  else {
    cVar3 = '\0';
    if (iVar4 != 0x45) goto LAB_71007790d8;
  }
  uVar6 = FUN_710077cfa0(param_3);
  FUN_710077e630(param_4,uVar6,param_5);
LAB_71007790f8:
  iVar4 = thunk_FUN_7100817080(*param_4);
  if ((cVar3 != '\0') && (param_4[1] == 0x5f)) {
    cVar3 = FUN_710077cf80(param_4[2]);
    if ((cVar3 == '\0') || (0x19 < iVar4 - 0x41U)) {
      if ((*param_4 == 0x5f) && (param_4[1] == 0x5f)) {
        param_4[0] = 0x2f;
        param_4[1] = 0x2f;
      }
    }
    else {
      param_4[1] = 0x3a;
    }
  }
  return;
}



// ===== FUN_7100779320 @ 7100779320 (size=272) =====

char FUN_7100779320(long param_1)

{
  int iVar1;
  long lVar2;
  undefined1 local_280 [128];
  int local_200 [128];
  
  lVar2 = *(long *)(param_1 + 8);
  if (*(char *)(lVar2 + 0xc230) != '\0') {
    return *(char *)(lVar2 + 0xc230);
  }
  if (*(code **)(lVar2 + 0x14818) == (code *)0x0) {
    return '\0';
  }
  local_200[0] = 0;
  iVar1 = (**(code **)(lVar2 + 0x14818))(4,*(undefined8 *)(lVar2 + 0x14810),local_200,0x80);
  if (iVar1 == -1) {
    local_200[0] = 0;
  }
  else if (local_200[0] != 0) goto LAB_7100779380;
  local_280[0] = 0;
  iVar1 = (**(code **)(*(long *)(param_1 + 8) + 0x14818))
                    (2,*(undefined8 *)(*(long *)(param_1 + 8) + 0x14810),local_280,0x80);
  if (iVar1 == -1) {
    local_280[0] = 0;
  }
  FUN_710077da00(local_280,0,local_200,0x80);
  FUN_710077e260(local_280,0x80);
LAB_7100779380:
  FUN_710077e460(*(long *)(param_1 + 8) + 0xc030,local_200);
  FUN_710077e260(local_200,0x200);
  lVar2 = *(long *)(param_1 + 8);
  *(undefined1 *)(lVar2 + 0xc236) = 1;
  return *(char *)(lVar2 + 0xc230);
}



// ===== FUN_7100779430 @ 7100779430 (size=72) =====

void FUN_7100779430(undefined4 param_1,undefined8 param_2)

{
  undefined8 local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined4 local_8;
  
  puStack_68 = &DAT_71009952f8;
  local_60 = &DAT_71009952f8;
  puStack_58 = &DAT_71009952f8;
  local_50 = &DAT_71009952f8;
  puStack_48 = &DAT_71009952f8;
  local_40 = &DAT_71009952f8;
  puStack_38 = &DAT_71009952f8;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_10 = 1;
  local_70 = param_2;
  local_8 = param_1;
  FUN_710077edd0(&local_70);
  return;
}



// ===== FUN_7100779480 @ 7100779480 (size=132) =====

undefined8 FUN_7100779480(undefined8 param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = 0x32 < *(uint *)(param_2 + 0x5474);
  if (*(int *)(param_2 + 0xdeb8) != 3) {
    bVar1 = 0x10 < *(uint *)(param_2 + 0x5474) - 0xd;
  }
  if (*(char *)(param_2 + 0x5478) == '\0' || !bVar1) {
    return 1;
  }
  FUN_7100778da0(&DAT_7100d1bd98,param_2 + 0x34);
  FUN_7100779430(0x24,param_2 + 0x34);
  return 0;
}



// ===== FUN_7100779510 @ 7100779510 (size=72) =====

void FUN_7100779510(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined4 local_8;
  
  local_60 = &DAT_71009952f8;
  puStack_58 = &DAT_71009952f8;
  local_50 = &DAT_71009952f8;
  puStack_48 = &DAT_71009952f8;
  local_40 = &DAT_71009952f8;
  puStack_38 = &DAT_71009952f8;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_10 = 2;
  local_70 = param_2;
  uStack_68 = param_3;
  local_8 = param_1;
  FUN_710077edd0(&local_70);
  return;
}



// ===== FUN_7100779560 @ 7100779560 (size=72) =====

void FUN_7100779560(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined4 local_8;
  
  puStack_58 = &DAT_71009952f8;
  local_50 = &DAT_71009952f8;
  puStack_48 = &DAT_71009952f8;
  local_40 = &DAT_71009952f8;
  puStack_38 = &DAT_71009952f8;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_10 = 3;
  local_70 = param_2;
  uStack_68 = param_3;
  local_60 = param_4;
  local_8 = param_1;
  FUN_710077edd0(&local_70);
  return;
}



// ===== FUN_71007795b0 @ 71007795b0 (size=724) =====

void FUN_71007795b0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_2000 [8192];
  
  if (*(char *)(*(long *)(param_1 + 8) + 0xe721) != '\0') {
    return;
  }
  lVar1 = param_1 + 0x214c;
  iVar4 = FUN_710077bf50(lVar1,*(byte *)(*(long *)(param_1 + 8) + 0xe6cc) ^ 1,
                         *(undefined4 *)(param_2 + 0x547c));
  if (iVar4 != 0) {
    cVar3 = FUN_710077c140(lVar1);
    if (cVar3 != '\0') {
      FUN_710077c200(lVar1);
      cVar3 = FUN_710077c190();
      if (cVar3 == '\0') {
        FUN_710077add0(*(undefined8 *)(param_1 + 8),0,lVar1,0x800,auStack_2000,
                       *(undefined8 *)(param_2 + 0x74c8),param_2 + 0x74a8,0);
        goto LAB_71007796a4;
      }
LAB_710077976c:
      lVar5 = *(long *)(param_1 + 8);
      if (*(char *)(lVar5 + 0xe6cc) == '\0') {
        FUN_710077c250(lVar1,*(undefined4 *)(param_2 + 0x547c));
        lVar5 = *(long *)(param_1 + 8);
      }
      *(undefined1 *)(param_1 + 0x2149) = 1;
      goto LAB_7100779628;
    }
LAB_71007796a4:
    FUN_710077bfe0(lVar1,1,*(undefined1 *)(*(long *)(param_1 + 8) + 0xe257));
    iVar4 = FUN_710077bf50(lVar1,*(byte *)(*(long *)(param_1 + 8) + 0xe6cc) ^ 1,
                           *(undefined4 *)(param_2 + 0x547c));
    if (iVar4 != 0) {
      lVar5 = param_2 + 0x34;
      cVar3 = FUN_710077d720(lVar1);
      if (cVar3 == '\0') {
        FUN_7100779430(0x74,lVar5);
        FUN_710077e5f0(auStack_2000,lVar1,0x800);
        FUN_710077d760(lVar1,1);
        FUN_7100779560(0x23,lVar5,auStack_2000,lVar1);
        cVar3 = FUN_710077c140(lVar1);
        if (cVar3 != '\0') {
          FUN_710077c200(lVar1);
          cVar3 = FUN_710077c190();
          if (cVar3 != '\0') goto LAB_710077976c;
        }
        FUN_710077bfe0(lVar1,1,*(undefined1 *)(*(long *)(param_1 + 8) + 0xe257));
        iVar4 = FUN_710077bf50(lVar1,*(byte *)(*(long *)(param_1 + 8) + 0xe6cc) ^ 1,
                               *(undefined4 *)(param_2 + 0x547c));
        if (iVar4 == 0) goto LAB_7100779618;
      }
      FUN_7100779510(0x14,lVar5,lVar1);
      FUN_7100778ab0(&DAT_7100d1bd98);
      *(undefined4 *)(*(long *)(param_1 + 8) + 0x14808) = 0x10;
      FUN_71007788e0(&DAT_7100d1bd98,9);
      if (*(char *)(param_1 + 0x2149) == '\0') {
        return;
      }
      lVar5 = *(long *)(param_1 + 8);
      goto LAB_7100779628;
    }
  }
LAB_7100779618:
  lVar5 = *(long *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x2149) = 1;
LAB_7100779628:
  FUN_7100790480(lVar5,param_2,lVar1);
  lVar6 = *(long *)(param_1 + 8);
  lVar5 = param_2 + 0x74a8;
  lVar2 = param_2 + 0x74b0;
  param_2 = param_2 + 0x74b8;
  if (*(int *)(lVar6 + 0x107f0) == 0) {
    lVar5 = 0;
  }
  if (*(int *)(lVar6 + 0x107f4) == 0) {
    lVar2 = 0;
  }
  if (*(int *)(lVar6 + 0x107f8) == 0) {
    param_2 = 0;
  }
  FUN_710077c130(lVar1,lVar5,lVar2,param_2);
  return;
}



// ===== FUN_7100779890 @ 7100779890 (size=616) =====

char FUN_7100779890(long param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  char local_2001;
  undefined *local_2000;
  undefined *puStack_1ff8;
  undefined *local_1ff0;
  undefined *puStack_1fe8;
  undefined *local_1fe0;
  undefined *puStack_1fd8;
  undefined *local_1fd0;
  undefined *puStack_1fc8;
  undefined8 local_1fc0;
  undefined8 uStack_1fb8;
  undefined8 local_1fb0;
  undefined8 uStack_1fa8;
  undefined8 local_1fa0;
  undefined4 local_1f98;
  
  lVar5 = *(long *)(param_1 + 8);
  iVar2 = *(int *)(lVar5 + 0x1483c);
  if (iVar2 == 0x50) {
    *(undefined4 *)(param_3 + 0x14) = 1;
    return '\x01';
  }
  cVar3 = '\x01';
  if ((iVar2 == 0x45 || iVar2 == 0x58) && (cVar3 = *(char *)(lVar5 + 0xe721), cVar3 == '\0')) {
    lVar1 = param_1 + 0x214c;
    cVar3 = FUN_710077add0(lVar5,param_3,lVar1,0x800,&local_2001,*(undefined8 *)(param_2 + 0x74c8),
                           param_2 + 0x74a8,1);
    if ((cVar3 != '\0') || (local_2001 != '\0')) {
      return cVar3;
    }
    lVar5 = param_2 + 0x34;
    FUN_7100778d60(&DAT_7100d1bd98,lVar5,lVar1);
    cVar3 = FUN_710077c140(lVar1);
    if (cVar3 != '\0') {
      FUN_710077c200(lVar1);
      cVar3 = FUN_710077c190();
      if (cVar3 != '\0') {
        local_1fc0 = 0;
        uStack_1fb8 = 0;
        local_2000 = &DAT_71009952f8;
        puStack_1ff8 = &DAT_71009952f8;
        local_1ff0 = &DAT_71009952f8;
        puStack_1fe8 = &DAT_71009952f8;
        local_1fe0 = &DAT_71009952f8;
        puStack_1fd8 = &DAT_71009952f8;
        local_1fd0 = &DAT_71009952f8;
        puStack_1fc8 = &DAT_71009952f8;
        local_1fa0 = 0;
        local_1f98 = 0x62;
        local_1fb0 = 0;
        uStack_1fa8 = 0;
        FUN_710077edd0();
      }
    }
    *(undefined4 *)(*(long *)(param_1 + 8) + 0x14808) = 0x10;
    cVar4 = FUN_710077d720(lVar1);
    cVar3 = '\0';
    if (cVar4 == '\0') {
      FUN_7100779430(0x74,lVar5);
      FUN_710077e5f0(&local_2000,lVar1,0x800);
      FUN_710077d760(lVar1,1);
      FUN_710077bfe0(lVar1,1,*(undefined1 *)(*(long *)(param_1 + 8) + 0xe257));
      cVar3 = FUN_710077add0(*(undefined8 *)(param_1 + 8),param_3,lVar1,0x800,&local_2001,
                             *(undefined8 *)(param_2 + 0x74c8),param_2 + 0x74a8,1);
      if (cVar3 == '\0') {
        FUN_7100778d60(&DAT_7100d1bd98,lVar5,lVar1);
      }
      else {
        FUN_7100779560(0x23,lVar5,&local_2000,lVar1);
      }
    }
  }
  return cVar3;
}



// ===== FUN_7100779b00 @ 7100779b00 (size=288) =====

uint FUN_7100779b00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined1 auStack_2038 [8248];
  
  FUN_710077d830(param_5,param_5,param_6);
  FUN_710077b1f0(auStack_2038);
  uVar1 = FUN_710077b240(auStack_2038,param_5);
  if ((uVar1 & 0xff) == 0) {
    FUN_7100779560(0x12,param_3,param_5,param_4);
    FUN_7100779430(0x13,param_3);
    *(undefined4 *)(*(long *)(param_1 + 8) + 0x14808) = 0x17;
  }
  else {
    lVar3 = FUN_710081c1c0(0x100000);
    if (lVar3 == 0) {
      FUN_7100778a60(&DAT_7100d1bd98);
    }
    while( true ) {
      FUN_710077e900();
      iVar2 = FUN_710077be90(auStack_2038,lVar3,0x100000);
      if (iVar2 == 0) break;
      FUN_710077ba40(param_2,lVar3,(long)iVar2);
    }
    if (lVar3 != 0) {
      FUN_710081c200(lVar3);
    }
  }
  FUN_710077b390(auStack_2038);
  return uVar1;
}



// ===== FUN_7100779c50 @ 7100779c50 (size=4436) =====

byte FUN_7100779c50(ulong *param_1,long *param_2,long param_3)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined1 uVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  char cVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  undefined4 *puVar21;
  long lVar22;
  long lVar23;
  byte bVar24;
  byte bVar25;
  long local_a078;
  ulong local_a050;
  char local_a039;
  undefined1 auStack_a038 [8192];
  undefined1 auStack_8038 [8192];
  undefined1 auStack_6038 [8192];
  uint local_4038;
  undefined4 uStack_4034;
  undefined1 auStack_2038 [33];
  byte local_2017;
  char local_2c;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  iVar5 = *(int *)(param_1[1] + 0x1483c);
  if (param_3 == 0) {
    if (*(char *)((long)param_1 + 0xa9) == '\0') {
      return 0;
    }
    cVar11 = FUN_71007888d0(param_2,param_1 + 2,0,iVar5);
    if (cVar11 == '\0') goto LAB_7100779f90;
  }
  iVar18 = *(int *)((long)param_2 + 0x3a34);
  if (iVar18 != 2) {
    if (iVar18 == 0x77 && (int)param_2[0x1bd7] == 2) {
      if (*(char *)((long)param_1 + 0x2149) != '\0') {
        FUN_71007903c0(param_1[1],param_2,(long)param_1 + 0x214c);
      }
    }
    else if (iVar18 == 3) {
      if (*(char *)((long)param_1 + 0x2149) != '\0') {
        FUN_7100790400(param_1[1],param_2,(long)param_1 + 0x214c);
      }
    }
    else if (iVar18 == 5) {
      if (*(char *)((long)param_2 + 0x979c) == '\0') {
        return 0;
      }
      bVar12 = FUN_71007888d0(param_2,param_1 + 2,0,iVar5);
      if (bVar12 != 0) {
        (**(code **)(*param_2 + 0x28))(param_2,param_2[0x1bd5],0);
        return bVar12;
      }
LAB_7100779f90:
      FUN_71007788e0(&DAT_7100d1bd98,1);
      return 0;
    }
    goto LAB_7100779ee0;
  }
  lVar19 = param_2[0xe98];
  *(undefined1 *)((long)param_1 + 0x2149) = 0;
  if (lVar19 < 0) {
    param_2[0xe98] = 0;
  }
  if (param_2[0xe99] < 0) {
    param_2[0xe99] = 0;
  }
  uVar20 = param_1[1];
  if (((*(int *)(uVar20 + 0xe270) == 0) && (*(ulong *)(uVar20 + 0x188b0) <= param_1[0x27])) &&
     (*(char *)((long)param_1 + 0x141) != '\0')) {
    return 0;
  }
  local_a039 = '\0';
  iVar18 = FUN_710078e000(uVar20,param_2 + 0xa8b,&local_a039,6,0,auStack_a038,0x800);
  bVar10 = iVar18 != 0;
  if (*(int *)(param_1[1] + 0xe26c) == 2) {
    FUN_710077e5f0(param_1[1] + 0x8030,auStack_a038,0x800);
    puVar21 = (undefined4 *)FUN_710077cfa0(param_1[1] + 0x8030);
    uVar20 = param_1[1];
    *puVar21 = 0;
    cVar11 = FUN_710077cf50(uVar20 + 0x8030);
    if (cVar11 != '\0') {
      *(undefined4 *)(param_1[1] + 0x8030) = 0;
    }
  }
  if ((iVar18 != 0) && (local_a039 == '\0')) {
    *(undefined1 *)((long)param_1 + 0x141) = 0;
  }
  FUN_710078b130(param_2);
  FUN_710077d120(param_2 + 0xa90,auStack_8038,0x800);
  if (*(char *)((long)param_2 + 0x755b) == '\0') {
    cVar11 = FUN_710078b120(param_2);
    if ((cVar11 != '\0') || (*(uint *)(param_1[1] + 0x107e4) < 2)) goto LAB_7100779f28;
LAB_7100779e70:
    uVar9 = *(undefined1 *)((long)param_2 + 0x7501);
    *(undefined1 *)((long)param_1 + 0xaa) = 0;
    lVar22 = *param_2;
    lVar23 = param_2[0x1bd6];
    lVar19 = param_2[0xe98];
    *(undefined1 *)((long)param_1 + 0xa9) = uVar9;
    (**(code **)(lVar22 + 0x28))(param_2,lVar23 - lVar19,0);
    if ((char)param_1[0x28] != '\0') goto LAB_710077a050;
    if ((*(char *)((long)param_2 + 0x7503) == '\0') || (*(char *)(param_1[1] + 0xc235) == '\0'))
    goto LAB_710077a05c;
LAB_7100779ec8:
    if (*(char *)((long)param_2 + 0xdebc) != '\0') {
      return 0;
    }
LAB_7100779ed0:
    if (*(char *)((long)param_1 + 0xaa) != '\0') {
      return 0;
    }
    goto LAB_7100779ee0;
  }
  if ((*(int *)(param_1[1] + 0x107e4) != 1) && (local_a039 == '\0')) {
    bVar10 = *(int *)(param_1[1] + 0x107e4) != 0 && bVar10;
    iVar18 = FUN_710077d9b0(auStack_8038);
    if (*(int *)(param_1[1] + 0x107e4) + -1 != iVar18) goto LAB_7100779e70;
    FUN_710077d9b0(auStack_8038,1);
  }
LAB_7100779f28:
  uVar9 = *(undefined1 *)((long)param_2 + 0x7501);
  *(undefined1 *)((long)param_1 + 0xaa) = 0;
  lVar22 = *param_2;
  lVar23 = param_2[0x1bd6];
  lVar19 = param_2[0xe98];
  *(undefined1 *)((long)param_1 + 0xa9) = uVar9;
  (**(code **)(lVar22 + 0x28))(param_2,lVar23 - lVar19,0);
  if ((char)param_1[0x28] == '\0') {
    if ((*(char *)((long)param_2 + 0x7503) != '\0') && (*(char *)(param_1[1] + 0xc235) != '\0'))
    goto LAB_7100779ec8;
    if (bVar10) {
LAB_7100779fe4:
      uVar20 = param_1[1];
      goto LAB_7100779fe8;
    }
LAB_710077a05c:
    if (*(char *)((long)param_2 + 0xdebc) == '\0') goto LAB_7100779ed0;
    bVar12 = FUN_710077edb0(auStack_8038,*(byte *)(param_1[1] + 0xe721) ^ 1,
                            iVar5 != 0x49 && *(byte *)(param_1[1] + 0xe721) != 0,1);
    if (bVar12 == 0) {
      return 0;
    }
    bVar15 = 0;
    FUN_7100778ff0(param_1,param_2,auStack_8038,(long)param_1 + 0x214c,0x800);
    cVar11 = '\0';
  }
  else {
    if (!bVar10) {
LAB_710077a050:
      *(undefined1 *)(param_1 + 0x28) = 0;
      if ((*(char *)((long)param_2 + 0x7503) != '\0') && (*(char *)(param_1[1] + 0xc235) != '\0'))
      goto LAB_7100779ec8;
      goto LAB_710077a05c;
    }
    if ((char)param_2[0xea0] != '\0') {
      FUN_7100779510(0x46,(long)param_2 + 0x34,auStack_8038);
      *(undefined4 *)(param_1[1] + 0x14808) = 0xc;
      FUN_71007788e0(&DAT_7100d1bd98,6);
      goto LAB_710077a050;
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
    if (*(char *)((long)param_2 + 0x7503) == '\0') goto LAB_7100779fe4;
    uVar20 = param_1[1];
    if (*(char *)(uVar20 + 0xc235) != '\0') goto LAB_7100779ec8;
LAB_7100779fe8:
    cVar11 = FUN_710077edb0(auStack_8038,*(byte *)(uVar20 + 0xe721) ^ 1,
                            iVar5 != 0x49 && *(byte *)(uVar20 + 0xe721) != 0,0);
    if (cVar11 == '\0') {
      return 0;
    }
    FUN_7100778ff0(param_1,param_2,auStack_8038,(long)param_1 + 0x214c,0x800);
    if (*(int *)((long)param_1 + 0x214c) == 0) {
      bVar15 = 0;
      bVar12 = 0;
    }
    else {
      bVar12 = 0;
      bVar15 = *(byte *)(param_2 + 0xea0) ^ 1;
    }
  }
  local_a078 = (long)param_1 + 0x214c;
  if (((*(char *)(param_1[1] + 0xe267) != '\0') || (*(char *)(param_1[1] + 0xe268) != '\0')) &&
     (iVar5 == 0x45 || iVar5 == 0x58)) {
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    cVar17 = FUN_710077c2e0(local_a078,auStack_2038,0);
    if (cVar17 == '\0') {
      if (*(char *)(param_1[1] + 0xe267) != '\0') {
        bVar15 = 0;
      }
    }
    else if ((ulong)param_2[0xe95] <= local_28) {
      if (local_2c == '\0') {
        bVar15 = 0;
      }
      else if (local_28 < *param_1) {
        bVar15 = 0;
      }
    }
  }
  bVar13 = FUN_7100779480(param_1,param_2,auStack_8038);
  if (bVar13 == 0) {
    FUN_71007788e0(&DAT_7100d1bd98,2);
    *(undefined4 *)(param_1[1] + 0x14808) = 0xe;
    FUN_7100789580(param_2);
    return *(byte *)((long)param_2 + 0xdebc) ^ 1;
  }
  if ((*(char *)((long)param_2 + 0x7503) != '\0') &&
     (cVar17 = FUN_7100779320(param_1), cVar17 == '\0')) {
    *(undefined4 *)(param_1[1] + 0x14808) = 0x16;
    return 0;
  }
  puVar1 = param_1 + 2;
  FUN_710080f900(auStack_2038,param_1[1] + 0xc030,0x204);
  lVar19 = (long)param_2 + 0x7509;
  if ((char)param_2[0xea1] == '\0') {
    lVar19 = 0;
  }
  FUN_710077e0f0(puVar1,0,*(undefined4 *)((long)param_2 + 0x7504),auStack_2038,lVar19,
                 (long)param_2 + 0x7519,*(undefined4 *)((long)param_2 + 0x7554),
                 (long)param_2 + 0x7533,&local_4038);
  if (((*(char *)((long)param_2 + 0x7503) != '\0') && (*(char *)((long)param_2 + 0x7529) != '\0'))
     && ((CONCAT44(uStack_4034,local_4038) != *(long *)((long)param_2 + 0x752a) &&
         ((char)param_2[0x1bda] == '\0')))) {
    if ((char)param_1[0x429] == '\0') {
      FUN_7100779510(0x83,(long)param_2 + 0x34,auStack_8038);
      FUN_710077e290(param_1[1] + 0xc030);
    }
    else {
      FUN_7100779510(6,(long)param_2 + 0x34,auStack_8038);
    }
    if (*(int *)(param_1[1] + 0x14808) != 0xf) {
      *(undefined4 *)(param_1[1] + 0x14808) = 0x18;
    }
    FUN_71007788e0(&DAT_7100d1bd98,0xb);
    bVar15 = 0;
  }
  FUN_710077e2a0(auStack_2038);
  if (*(int *)(param_1[1] + 0x12804) != 0) {
    FUN_710077e5f0(local_a078,param_1[1] + 0x12804,0x800);
  }
  FUN_710077b1f0(auStack_2038);
  iVar18 = (int)param_2[0xeae];
  if (iVar18 == 0 || iVar18 == 5) {
    bVar14 = FUN_710078b120(param_2);
    if (bVar14 != 0) {
      if (((iVar5 != 0x50 && bVar15 == 1) && ((iVar5 - 0x45U & 0xfffffffb) != 0)) &&
         (*(int *)(param_1[1] + 0xe26c) != 1)) {
        param_1[0x25] = param_1[0x25] + 1;
        FUN_71007795b0(param_1,param_2,auStack_8038);
      }
      goto LAB_710077a2b8;
    }
    if (bVar15 != 0) {
      bVar15 = FUN_7100779890(param_1,param_2,auStack_2038);
      goto LAB_710077a7d0;
    }
LAB_710077a878:
    bVar14 = *(byte *)((long)param_2 + 0xdebc);
    if (*(byte *)((long)param_2 + 0xdebc) != 0) {
      bVar14 = FUN_710077edb0(auStack_8038,0,0,1);
      if (bVar14 == 0) {
LAB_710077a2b8:
        FUN_710077b390(auStack_2038);
        return bVar14;
      }
      uVar20 = param_1[1];
      lVar19 = uVar20 + 0xe000;
      if (*(char *)(uVar20 + 0xe721) != '\0') {
        *(undefined1 *)((long)param_1 + 0x2149) = 1;
      }
LAB_710077a8b8:
      bVar15 = 0;
      bVar12 = bVar13;
      bVar14 = bVar13;
      goto LAB_710077a428;
    }
  }
  else {
    if (iVar5 == 0x50 || bVar15 == 0) {
LAB_710077a7d0:
      if (bVar15 == 0) goto LAB_710077a878;
LAB_710077a7d4:
      uVar20 = param_1[1];
      lVar19 = uVar20 + 0xe000;
      if (*(char *)(uVar20 + 0xe721) != '\0') goto LAB_710077a3f8;
      if (bVar12 == 0) {
        if (iVar5 == 0x50) {
          bVar15 = bVar13;
          bVar24 = 0;
        }
        else {
          bVar15 = FUN_710077bf20(auStack_2038);
          if (bVar15 == 0) {
            uVar20 = param_1[1];
            lVar19 = uVar20 + 0xe000;
            bVar15 = bVar13;
            bVar24 = 0;
          }
          else {
            FUN_7100779510(0x3b,(long)param_2 + 0x34,local_a078);
            FUN_7100778aa0(&DAT_7100d1bd98,(long)param_2 + 0x34,local_a078);
            uVar20 = param_1[1];
            lVar19 = uVar20 + 0xe000;
            bVar24 = 0;
          }
        }
        goto LAB_710077a418;
      }
      goto LAB_710077a8b8;
    }
    uVar20 = param_1[1];
    lVar19 = uVar20 + 0xe000;
    if (*(char *)(uVar20 + 0xe721) == '\0') {
      local_4038 = local_4038 & 0xffffff00;
      cVar17 = FUN_710077c140(local_a078);
      if (cVar17 != '\0') {
        if ((char)local_4038 != '\0') goto LAB_710077a878;
        FUN_710077add0(param_1[1],0,local_a078,0x800,&local_4038,param_2[0xe99],param_2 + 0xe95,0);
      }
      if ((char)local_4038 != '\0') goto LAB_710077a878;
      goto LAB_710077a7d4;
    }
LAB_710077a3f8:
    *(undefined1 *)((long)param_1 + 0x2149) = 1;
    bVar15 = bVar12 ^ 1;
    bVar24 = bVar13;
    bVar14 = bVar12;
    if (bVar12 == 0) {
LAB_710077a418:
      param_1[0x25] = param_1[0x25] + 1;
      bVar12 = 0;
      bVar14 = bVar24;
    }
LAB_710077a428:
    cVar17 = *(char *)(lVar19 + 599);
    param_1[0x26] = param_1[0x26] + 1;
    if (cVar17 != '\0') {
      FUN_710077ee00();
      uVar20 = param_1[1];
    }
    uVar6 = *(undefined4 *)(uVar20 + 0x12800);
    lVar19 = param_2[0xe9b];
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    FUN_710077c6f0(param_1 + 0x21,(int)lVar19,uVar6);
    FUN_710077c6f0(param_1 + 0x1d,(int)param_2[0xe9b],*(undefined4 *)(param_1[1] + 0x12800));
    uVar20 = param_2[0xe98];
    param_1[10] = uVar20;
    param_1[0xb] = uVar20;
    FUN_710077e0b0(puVar1,param_2,auStack_2038);
    *(byte *)((long)param_1 + 0x61) = bVar14;
    *(byte *)((long)param_1 + 0x62) = bVar12;
    if (bVar14 == 0) {
      if ((((char)param_2[0x1bda] == '\0') && (lVar19 = param_2[0xe99], 1000000 < lVar19)) &&
         (((lVar19 + param_2[0xe98] * -0x400 < 0 != SBORROW8(lVar19,param_2[0xe98] * 0x400) &&
           (*(int *)((long)param_2 + 0x14) != 1)) &&
          ((lVar19 < 100000000 || (lVar19 = FUN_710077b630(param_2), param_2[0xe98] < lVar19)))))) {
        FUN_710077b440(auStack_2038,param_2[0xe99]);
        local_a050 = param_2[0xe99];
      }
      else {
        local_a050 = 0;
      }
      uVar20 = param_1[1];
      bVar24 = iVar5 != 0x50 & (bVar12 ^ 1);
      local_2017 = *(byte *)(uVar20 + 0xe2c4);
    }
    else {
      uVar20 = param_1[1];
      bVar24 = 0;
      local_2017 = *(byte *)(uVar20 + 0xe2c4);
      local_a050 = 0;
    }
    local_2017 = local_2017 ^ 1;
    bVar16 = bVar13;
    if (iVar18 == 0) {
      bVar25 = bVar13;
      if ((char)param_2[0xea0] == '\0') {
        if ((char)param_2[0xa8f] == '\0') {
          FUN_7100778f10(puVar1,param_2[0xe99]);
        }
        else {
          FUN_7100783930(param_1[0x24],param_2[0xeac],(char)param_2[0xeab]);
          uVar20 = param_1[0x24];
          lVar19 = param_2[0x1bd7];
          uVar8 = *(uint *)((long)param_2 + 0x5474);
          *(long *)(uVar20 + 0x4d98) = param_2[0xe99];
          *(undefined1 *)(uVar20 + 0x4db0) = 0;
          if (((int)lVar19 == 3) || (0xf < uVar8)) {
            FUN_7100788850(uVar20,uVar8,(char)param_2[0xeab]);
          }
          else {
            uVar9 = 0;
            if (1 < param_1[0x26]) {
              uVar9 = *(undefined1 *)((long)param_2 + 0xdebc);
            }
            FUN_7100788850(uVar20,0xf,uVar9);
          }
        }
      }
    }
    else {
      iVar7 = (int)param_2[0xeae];
      if (iVar7 - 4U < 2) {
        FUN_710077d120((long)param_2 + 0x7574,auStack_6038,0x800);
        FUN_7100778ff0(param_1,param_2,auStack_6038,&local_4038,0x800);
        if (bVar24 == 0) {
LAB_710077a578:
          bVar25 = (int)param_2[0x1bd7] != 2;
        }
        else {
          bVar25 = bVar24;
          bVar16 = bVar24;
          if (local_4038 != 0) {
            if (iVar7 == 4) {
              bVar16 = FUN_71007909e0(param_1[1],local_a078,&local_4038,0x800);
            }
            else {
              bVar16 = FUN_7100779b00(param_1,auStack_2038,(long)param_2 + 0x34,local_a078,
                                      &local_4038,0x800);
            }
            goto LAB_710077abb4;
          }
        }
      }
      else {
        if (iVar7 - 1U < 3) {
          if (bVar24 == 0) goto LAB_710077a578;
          bVar16 = FUN_71007909a0(uVar20,puVar1,param_2,local_a078);
LAB_710077abb4:
          if (bVar16 != 0) {
            bVar25 = bVar16;
            if ((int)param_2[0x1bd7] == 2) {
              bVar25 = bVar24;
            }
            goto LAB_710077a590;
          }
        }
        else {
          FUN_7100779510(0x47,(long)param_2 + 0x34,local_a078);
        }
        bVar24 = 0;
        bVar25 = 0;
        bVar16 = 0;
      }
LAB_710077a590:
      *(byte *)((long)param_1 + 0x2149) = bVar24;
    }
    FUN_7100789580(param_2);
    if (*(char *)((long)param_2 + 0x7501) == '\0') {
      lVar19 = (long)param_2 + 0x7533;
      if (*(char *)((long)param_2 + 0x7532) == '\0') {
        lVar19 = 0;
      }
      cVar17 = FUN_710077c8e0(param_1 + 0x21,param_2 + 0xe9b,lVar19);
      bVar24 = bVar25 & bVar15;
      if (cVar17 == '\0') {
        if ((char)param_2[0xeab] != '\0') goto LAB_710077a90c;
        *(undefined1 *)((long)param_1 + 0x144) = 0;
        if (bVar24 != 0) goto LAB_710077a5c0;
        bVar15 = 0;
      }
      else {
        bVar15 = 0;
        if ((char)param_2[0xeab] == '\0') {
          *(undefined1 *)((long)param_1 + 0x144) = 0;
          if (bVar24 == 0) {
            bVar15 = 0;
          }
        }
        else if (((char)param_2[0xa8f] == '\0') || (param_2[0xe99] < 1)) {
          if (bVar24 == 0) {
            bVar15 = 0;
          }
        }
        else {
          *(undefined1 *)((long)param_1 + 0x144) = 1;
          if (bVar24 == 0) {
            bVar15 = 0;
          }
        }
      }
    }
    else {
      if ((char)param_2[0xeab] == '\0') {
        *(undefined1 *)((long)param_1 + 0x144) = 0;
        if (bVar25 == 0 || bVar15 == 0) {
LAB_710077a91c:
          bVar15 = 0;
          goto LAB_710077a630;
        }
      }
      else {
LAB_710077a90c:
        if (bVar25 == 0 || bVar15 == 0) goto LAB_710077a91c;
      }
LAB_710077a5c0:
      if ((*(char *)((long)param_2 + 0x7503) == '\0') ||
         (((*(char *)((long)param_2 + 0x7529) != '\0' && ((char)param_2[0x1bda] == '\0')) ||
          (*(char *)((long)param_1 + 0x144) != '\0')))) {
        FUN_7100779510(3,(long)param_2 + 0x34,auStack_8038);
      }
      else {
        FUN_7100779510(4,(long)param_2 + 0x34,auStack_8038);
      }
      FUN_71007788e0(&DAT_7100d1bd98,3);
      iVar7 = *(int *)(param_1[1] + 0x14808);
      bVar15 = bVar13;
      if (iVar7 != 0xf && iVar7 != 0x18) {
        *(undefined4 *)(param_1[1] + 0x14808) = 0xc;
        bVar15 = iVar7 != 0xf && iVar7 != 0x18;
      }
    }
LAB_710077a630:
    bVar24 = 0;
    if (iVar18 != 0) {
      bVar24 = bVar16 & (int)param_2[0xeae] == 4;
    }
    if ((bVar14 == 0) &&
       (bVar10 = iVar5 == 0x58 || iVar5 == 0x45, bVar14 = bVar13, iVar5 == 0x58 || iVar5 == 0x45)) {
      if (iVar18 == 0 || bVar24 != 0) {
        if ((bVar15 == 0) || (bVar14 = bVar15, *(char *)(param_1[1] + 0xe2c4) != '\0')) {
          if (bVar24 == 0) {
            if (local_a050 != 0) {
              if (bVar15 != 0) goto LAB_710077ac3c;
              goto LAB_710077ac2c;
            }
            goto LAB_710077ac44;
          }
          goto LAB_710077ab1c;
        }
      }
      else {
        bVar14 = bVar10;
        if (bVar16 != 0 && (int)param_2[0xeae] == 5) {
          if (bVar15 == 0) {
            if (local_a050 != 0) {
LAB_710077ac2c:
              if (param_1[0x19] != local_a050) {
LAB_710077ac3c:
                FUN_710077b450(auStack_2038);
              }
            }
LAB_710077ac44:
            uVar20 = param_1[1];
          }
          else {
            uVar20 = param_1[1];
            bVar14 = bVar15;
            if (*(char *)(uVar20 + 0xe2c4) == '\0') goto LAB_710077a698;
            if (local_a050 != 0) goto LAB_710077ac3c;
          }
          plVar2 = param_2 + 0xe95;
          plVar4 = param_2 + 0xe97;
          plVar3 = param_2 + 0xe96;
          if (*(int *)(uVar20 + 0x107f0) == 0) {
            plVar2 = (long *)0x0;
          }
          if (*(int *)(uVar20 + 0x107f4) == 0) {
            plVar3 = (long *)0x0;
          }
          if (*(int *)(uVar20 + 0x107f8) == 0) {
            plVar4 = (long *)0x0;
          }
          FUN_710077b520(auStack_2038,plVar2,plVar3,plVar4);
          FUN_710077b150(auStack_2038);
          FUN_7100790480(param_1[1],param_2,local_a078);
          plVar2 = param_2 + 0xe95;
          plVar4 = param_2 + 0xe97;
          if (*(int *)(param_1[1] + 0x107f0) == 0) {
            plVar2 = (long *)0x0;
          }
          if (*(int *)(param_1[1] + 0x107f8) == 0) {
            plVar4 = (long *)0x0;
          }
          FUN_710077b620(auStack_2038,plVar2,plVar4);
LAB_710077ab1c:
          if ((*(char *)(param_1[1] + 0xe6cc) == '\0') &&
             (cVar17 = FUN_710077c250(local_a078,*(undefined4 *)((long)param_2 + 0x547c)),
             cVar17 == '\0')) {
            FUN_7100779510(0x11,(long)param_2 + 0x34,local_a078);
            FUN_7100778ab0(&DAT_7100d1bd98);
          }
          *(undefined1 *)((long)param_1 + 0x2149) = 1;
          bVar14 = bVar10;
        }
      }
    }
  }
LAB_710077a698:
  FUN_710077b390(auStack_2038);
  if (cVar11 != '\0') {
    param_1[0x27] = param_1[0x27] + 1;
  }
  if (*(char *)((long)param_1 + 0xaa) != '\0') {
    return 0;
  }
  if (bVar14 != 0) {
    return bVar14;
  }
  if (*(char *)((long)param_2 + 0xdebc) != '\0') {
    return bVar12;
  }
LAB_7100779ee0:
  FUN_7100789580(param_2);
  return 1;
}



// ===== FUN_710077add0 @ 710077add0 (size=356) =====

ulong FUN_710077add0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    undefined1 *param_5,undefined8 param_6,undefined8 param_7,uint param_8)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  while (cVar1 = FUN_710077c140(param_3), cVar1 != '\0') {
    iVar3 = FUN_710077ebf0(param_1,param_3,param_4,param_6,param_7,param_2 == 0);
    if (iVar3 == 0) break;
    if (iVar3 == 1) {
      uVar5 = 0;
      if (param_5 != (undefined1 *)0x0) {
        *param_5 = 1;
      }
      goto LAB_710077aed0;
    }
    if (iVar3 == 6) {
      FUN_7100778a30(&DAT_7100d1bd98,0xff);
    }
  }
  if (param_2 == 0) {
    FUN_710077bfe0(param_3,1,*(undefined1 *)(param_1 + 0xe257));
    uVar4 = FUN_710077c2a0(param_3);
    return uVar4;
  }
  iVar3 = (param_8 & 0xff) + 0x11;
  bVar2 = FUN_710077b290(param_2,param_3,iVar3);
  uVar5 = (uint)bVar2;
  if (bVar2 == 0) {
    FUN_710077bfe0(param_3,1,*(undefined1 *)(param_1 + 0xe257));
    uVar4 = FUN_710077b290(param_2,param_3,iVar3);
    return uVar4;
  }
LAB_710077aed0:
  return (ulong)uVar5;
}



// ===== FUN_710077af50 @ 710077af50 (size=400) =====

undefined8 FUN_710077af50(long param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int *piVar3;
  ulong uVar4;
  uint uVar5;
  undefined1 auStack_800 [2048];
  
  *(undefined4 *)(param_1 + 0x2034) = 0;
  if ((*(char *)(param_1 + 0x30) == '\0') && (((uint)param_3 >> 2 & 1) == 0)) {
    uVar5 = 1;
    uVar4 = 2;
    uVar1 = 1;
    if ((param_3 & 1) == 0) goto LAB_710077af8c;
  }
  else {
    uVar1 = 0;
    if ((param_3 & 1) != 0) {
      FUN_710077ee10(param_2,auStack_800,0x800);
      uVar1 = FUN_710080f840(auStack_800,2);
      goto joined_r0x00710077b03c;
    }
LAB_710077af8c:
    uVar5 = uVar1;
    uVar4 = param_3 >> 1 & 1;
  }
  FUN_710077ee10(param_2,auStack_800,0x800);
  uVar1 = FUN_710080f840(auStack_800,uVar4);
  if ((uVar5 & (uint)param_3 & 1 & ~uVar1 >> 0x1f) != 0) {
    FUN_710081f680();
    return 0;
  }
joined_r0x00710077b03c:
  if (uVar1 == 0xffffffff) {
    piVar3 = (int *)FUN_710080e8e0();
    if (*piVar3 != 2) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined1 *)(param_1 + 0x19) = 0;
      *(undefined1 *)(param_1 + 0x20) = 0;
      return 0;
    }
    uVar2 = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined1 *)(param_1 + 0x19) = 0;
    *(undefined1 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x2034) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined1 *)(param_1 + 0x19) = 0;
    *(undefined1 *)(param_1 + 0x20) = 0;
    if (uVar1 == 0xffffffff) {
      return 0;
    }
    *(long *)(param_1 + 8) = (long)(int)uVar1;
    FUN_710077e5f0(param_1 + 0x34,param_2,0x800);
    uVar2 = 1;
    *(undefined1 *)(param_1 + 0x24) = 0;
  }
  return uVar2;
}



// ===== FUN_710077b0e0 @ 710077b0e0 (size=108) =====

undefined8 FUN_710077b0e0(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 8) == -1) {
    if (*(char *)(param_1 + 0x22) == '\0') {
      return 0xffffffffffffffff;
    }
    FUN_7100778c60(&DAT_7100d1bd98,param_1 + 0x34);
  }
  if (*(int *)(param_1 + 0x14) == 1) {
    return *(undefined8 *)(param_1 + 0x28);
  }
  uVar1 = FUN_710081cd80(*(undefined4 *)(param_1 + 8),0,1);
  return uVar1;
}



// ===== FUN_710077b150 @ 710077b150 (size=156) =====

char FUN_710077b150(long param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(ulong *)(param_1 + 8) == 0xffffffffffffffff) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    return '\x01';
  }
  cVar1 = *(char *)(param_1 + 0x19);
  if (cVar1 == '\0') {
    iVar2 = FUN_710081f680(*(ulong *)(param_1 + 8) & 0xffffffff);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
    if (iVar2 == -1) {
      cVar1 = *(char *)(param_1 + 0x22);
      if (cVar1 != '\0') {
        FUN_7100778c10(&DAT_7100d1bd98,param_1 + 0x34);
        return '\0';
      }
    }
    else {
      cVar1 = '\x01';
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
  }
  return cVar1;
}



// ===== FUN_710077b1f0 @ 710077b1f0 (size=68) =====

void FUN_710077b1f0(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0x1010000000000;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &PTR_FUN_7100aec2b8;
  param_1[1] = 0xffffffffffffffff;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)((long)param_1 + 0x2034) = 0;
  return;
}



// ===== FUN_710077b240 @ 710077b240 (size=76) =====

uint FUN_710077b240(long *param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_2,0);
  if ((uVar1 & 0xff) == 0) {
    FUN_7100778d50(&DAT_7100d1bd98,param_2);
  }
  return uVar1;
}



// ===== FUN_710077b290 @ 710077b290 (size=148) =====

bool FUN_710077b290(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined1 auStack_800 [2048];
  
  FUN_710077ee10(param_2,auStack_800,0x800);
  iVar1 = FUN_710080f840(auStack_800,((param_3 & 2) == 0) + 0x601,0x1b6);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(long *)(param_1 + 8) = (long)iVar1;
  *(undefined1 *)(param_1 + 0x20) = 1;
  FUN_710077e5f0(param_1 + 0x34,param_2,0x800);
  return *(long *)(param_1 + 8) != -1;
}



// ===== FUN_710077b330 @ 710077b330 (size=96) =====

undefined8 FUN_710077b330(long *param_1)

{
  undefined8 uVar1;
  
  if (*(int *)((long)param_1 + 0x14) != 0) {
    return 0;
  }
  if (param_1[1] != -1) {
    (**(code **)(*param_1 + 0x18))();
  }
  if (*(char *)((long)param_1 + 0x21) == '\0') {
    return 0;
  }
  uVar1 = FUN_710077c2a0((long)param_1 + 0x34);
  return uVar1;
}



// ===== FUN_710077b390 @ 710077b390 (size=80) =====

void FUN_710077b390(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aec2b8;
  if ((param_1[1] != -1) && (*(char *)((long)param_1 + 0x19) == '\0')) {
    if (*(char *)(param_1 + 4) == '\0') {
      FUN_710077b150();
      return;
    }
    FUN_710077b330();
    return;
  }
  return;
}



// ===== FUN_710077b3e0 @ 710077b3e0 (size=40) =====

void FUN_710077b3e0(undefined8 param_1)

{
  FUN_710077b390();
  thunk_FUN_710081c200(param_1,0x2038);
  return;
}



// ===== FUN_710077b410 @ 710077b410 (size=36) =====

void FUN_710077b410(long param_1)

{
  if (*(int *)(param_1 + 0x14) != 1) {
    FUN_71008084a0(*(undefined4 *)(param_1 + 8));
    return;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_71008084a0(0);
  return;
}



// ===== FUN_710077b440 @ 710077b440 (size=4) =====

void FUN_710077b440(void)

{
  return;
}



// ===== FUN_710077b450 @ 710077b450 (size=208) =====

bool FUN_710077b450(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = param_1[1] & 0xffffffff;
  if (*(code **)(*param_1 + 0x30) != FUN_710077b0e0) {
    uVar2 = (**(code **)(*param_1 + 0x30))();
    iVar1 = FUN_7100834a40(uVar3,uVar2);
    return iVar1 == 0;
  }
  if (param_1[1] == 0xffffffffffffffff) {
    uVar2 = 0xffffffffffffffff;
    if (*(char *)((long)param_1 + 0x22) == '\0') goto LAB_710077b4a4;
    FUN_7100778c60(&DAT_7100d1bd98,(long)param_1 + 0x34);
  }
  if (*(int *)((long)param_1 + 0x14) == 1) {
    iVar1 = FUN_7100834a40(uVar3,param_1[5]);
    return iVar1 == 0;
  }
  uVar2 = FUN_710081cd80((int)param_1[1],0,1);
LAB_710077b4a4:
  iVar1 = FUN_7100834a40(uVar3,uVar2);
  return iVar1 == 0;
}



// ===== FUN_710077b520 @ 710077b520 (size=4) =====

void FUN_710077b520(void)

{
  return;
}



// ===== FUN_710077b530 @ 710077b530 (size=240) =====

void FUN_710077b530(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined8 local_810;
  undefined8 local_808;
  undefined1 auStack_800 [2048];
  
  if (param_2 == (long *)0x0) {
    if ((param_3 == (long *)0x0) || (*param_3 == 0)) {
      return;
    }
    FUN_710077ee10(param_1,auStack_800,0x800);
LAB_710077b5e8:
    local_808 = FUN_710077e990(param_3);
  }
  else {
    lVar1 = *param_2;
    if ((param_3 == (long *)0x0) || (*param_3 == 0)) {
      if (lVar1 == 0) {
        return;
      }
      FUN_710077ee10(param_1,auStack_800,0x800);
      local_810 = FUN_710077e990(param_2);
      local_808 = local_810;
      goto LAB_710077b590;
    }
    FUN_710077ee10(param_1,auStack_800,0x800);
    if (lVar1 == 0) goto LAB_710077b5e8;
    local_808 = FUN_710077e990(param_2);
  }
  local_810 = FUN_710077e990(param_3);
LAB_710077b590:
  FUN_7100836540(auStack_800,&local_810);
  return;
}



// ===== FUN_710077b620 @ 710077b620 (size=8) =====

void FUN_710077b620(long param_1)

{
  FUN_710077b530(param_1 + 0x34);
  return;
}



// ===== FUN_710077b630 @ 710077b630 (size=556) =====

long FUN_710077b630(long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  lVar4 = *param_1;
  if (*(code **)(lVar4 + 0x30) == FUN_710077b0e0) {
    if (param_1[1] == -1) {
      lVar2 = -1;
      if (*(char *)((long)param_1 + 0x22) == '\0') goto LAB_710077b68c;
      FUN_7100778c60(&DAT_7100d1bd98,(long)param_1 + 0x34);
    }
    if (*(int *)((long)param_1 + 0x14) != 1) {
      lVar2 = FUN_710081cd80((int)param_1[1],0,1);
      lVar4 = *param_1;
      goto LAB_710077b68c;
    }
    lVar2 = param_1[5];
    pcVar5 = *(code **)(*param_1 + 0x28);
    if (pcVar5 != FUN_710077b9f0) goto LAB_710077b7e8;
LAB_710077b6ac:
    cVar1 = FUN_710077b860();
    if ((cVar1 != '\0') || (*(char *)((long)param_1 + 0x22) == '\0')) goto LAB_710077b6b8;
    FUN_7100778c60(&DAT_7100d1bd98,(long)param_1 + 0x34);
    lVar4 = *param_1;
    pcVar5 = *(code **)(lVar4 + 0x30);
  }
  else {
    lVar2 = (**(code **)(lVar4 + 0x30))();
    lVar4 = *param_1;
LAB_710077b68c:
    pcVar5 = *(code **)(lVar4 + 0x28);
    if (pcVar5 == FUN_710077b9f0) goto LAB_710077b6ac;
LAB_710077b7e8:
    (*pcVar5)(param_1,0,2);
LAB_710077b6b8:
    lVar4 = *param_1;
    pcVar5 = *(code **)(lVar4 + 0x30);
  }
  if (pcVar5 != FUN_710077b0e0) {
    lVar3 = (*pcVar5)(param_1);
    pcVar5 = *(code **)(*param_1 + 0x28);
    goto joined_r0x00710077b790;
  }
  if (param_1[1] == -1) {
    lVar3 = -1;
    if (*(char *)((long)param_1 + 0x22) != '\0') {
      FUN_7100778c60(&DAT_7100d1bd98,(long)param_1 + 0x34);
      goto LAB_710077b6d8;
    }
  }
  else {
LAB_710077b6d8:
    if (*(int *)((long)param_1 + 0x14) == 1) {
      lVar4 = *param_1;
      lVar3 = param_1[5];
    }
    else {
      lVar3 = FUN_710081cd80((int)param_1[1],0,1);
      lVar4 = *param_1;
    }
  }
  pcVar5 = *(code **)(lVar4 + 0x28);
joined_r0x00710077b790:
  if (pcVar5 != FUN_710077b9f0) {
    (*pcVar5)(param_1,lVar2,0);
    return lVar3;
  }
  cVar1 = FUN_710077b860(param_1,lVar2,0);
  if ((cVar1 == '\0') && (*(char *)((long)param_1 + 0x22) != '\0')) {
    FUN_7100778c60(&DAT_7100d1bd98,(long)param_1 + 0x34);
    return lVar3;
  }
  return lVar3;
}



// ===== FUN_710077b860 @ 710077b860 (size=400) =====

bool FUN_710077b860(long *param_1,long param_2,int param_3)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_1000 [4096];
  
  uVar5 = param_1[1];
  if (uVar5 == 0xffffffffffffffff) {
    return true;
  }
  if (*(int *)((long)param_1 + 0x14) == 1) {
    if (param_3 == 1) {
      lVar4 = param_1[5];
      param_2 = param_2 + lVar4;
    }
    else {
      if (param_3 != 0) {
        return false;
      }
      lVar4 = param_1[5];
    }
    bVar2 = false;
    if (lVar4 <= param_2) {
      for (uVar5 = param_2 - lVar4; uVar5 != 0; uVar5 = uVar5 - (long)iVar3) {
        uVar1 = uVar5;
        if (0x1000 < uVar5) {
          uVar1 = 0x1000;
        }
        if (*(code **)(*param_1 + 0x20) == FUN_710077be90) {
          if (*(char *)((long)param_1 + 0x24) != '\0') {
            return false;
          }
          iVar3 = FUN_710077bbf0();
        }
        else {
          iVar3 = (**(code **)(*param_1 + 0x20))(param_1,auStack_1000,uVar1);
        }
        if (iVar3 < 1) {
          return false;
        }
      }
      bVar2 = true;
      param_1[5] = param_2;
    }
  }
  else {
    if (param_2 < 0 && param_3 != 0) {
      if (param_3 == 1) {
        if (*(code **)(*param_1 + 0x30) == FUN_710077b0e0) {
          lVar4 = FUN_710081cd80(uVar5 & 0xffffffff,0);
        }
        else {
          lVar4 = (**(code **)(*param_1 + 0x30))();
        }
      }
      else {
        lVar4 = FUN_710077b630(param_1,param_3);
      }
      param_2 = param_2 + lVar4;
      param_3 = 0;
      uVar5 = param_1[1];
    }
    *(undefined1 *)(param_1 + 2) = 0;
    lVar4 = FUN_710081cd80(uVar5 & 0xffffffff,param_2,param_3);
    bVar2 = lVar4 != -1;
  }
  return bVar2;
}



// ===== FUN_710077b9f0 @ 710077b9f0 (size=72) =====

void FUN_710077b9f0(long param_1)

{
  char cVar1;
  
  cVar1 = FUN_710077b860();
  if ((cVar1 == '\0') && (*(char *)(param_1 + 0x22) != '\0')) {
    FUN_7100778c60(&DAT_7100d1bd98,param_1 + 0x34);
    return;
  }
  return;
}



// ===== FUN_710077ba40 @ 710077ba40 (size=432) =====

bool FUN_710077ba40(long *param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  code *pcVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_3 == 0) {
    return true;
  }
  lVar6 = param_1[1];
  if ((*(int *)((long)param_1 + 0x14) == 1) && (lVar6 == -1)) {
    iVar5 = FUN_7100834da0(1);
    lVar6 = (long)iVar5;
    param_1[1] = lVar6;
  }
  lVar1 = (long)param_1 + 0x34;
  while( true ) {
    iVar5 = FUN_7100823120(lVar6,param_2,param_3);
    uVar7 = (ulong)iVar5;
    if (((param_3 == uVar7) || (*(char *)((long)param_1 + 0x22) == '\0')) ||
       (*(int *)((long)param_1 + 0x14) != 0)) goto LAB_710077bb58;
    cVar4 = FUN_71007788d0(&DAT_7100d1bd98,lVar1,0);
    if (cVar4 == '\0') break;
    if ((long)uVar7 < 1 || param_3 <= uVar7) {
LAB_710077bb40:
      lVar6 = param_1[1];
    }
    else {
      pcVar2 = *(code **)(*param_1 + 0x28);
      pcVar3 = *(code **)(*param_1 + 0x30);
      if (pcVar3 == FUN_710077b0e0) {
        if (param_1[1] == -1) {
          lVar6 = -1;
          if (*(char *)((long)param_1 + 0x22) == '\0') goto LAB_710077bb10;
          FUN_7100778c60(&DAT_7100d1bd98,lVar1);
        }
        if (*(int *)((long)param_1 + 0x14) == 1) {
          lVar6 = param_1[5];
        }
        else {
          lVar6 = FUN_710081cd80((int)param_1[1],0,1);
        }
      }
      else {
        lVar6 = (*pcVar3)(param_1);
      }
LAB_710077bb10:
      if (pcVar2 == FUN_710077b9f0) {
        cVar4 = FUN_710077b860();
        if ((cVar4 != '\0') || (*(char *)((long)param_1 + 0x22) == '\0')) goto LAB_710077bb40;
        FUN_7100778c60(&DAT_7100d1bd98,lVar1);
        lVar6 = param_1[1];
      }
      else {
        (*pcVar2)(param_1,lVar6 - uVar7,0);
        lVar6 = param_1[1];
      }
    }
  }
  FUN_7100778aa0(&DAT_7100d1bd98,0,lVar1);
LAB_710077bb58:
  *(undefined1 *)(param_1 + 2) = 1;
  return param_3 == uVar7;
}



// ===== FUN_710077bbf0 @ 710077bbf0 (size=664) =====

int FUN_710077bbf0(long *param_1,long param_2,ulong param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  char local_3;
  char local_2 [2];
  
  lVar6 = 0;
  if (*(int *)((long)param_1 + 0x1c) == 2) {
    if (*(code **)(*param_1 + 0x30) == FUN_710077b0e0) {
      if (param_1[1] == -1) {
        lVar6 = -1;
        if (*(char *)((long)param_1 + 0x22) == '\0') goto LAB_710077bc28;
        FUN_7100778c60(&DAT_7100d1bd98,(long)param_1 + 0x34);
      }
      if (*(int *)((long)param_1 + 0x14) == 1) {
        lVar6 = param_1[5];
      }
      else {
        lVar6 = FUN_710081cd80((int)param_1[1],0,1);
      }
    }
    else {
      lVar6 = (**(code **)(*param_1 + 0x30))();
    }
  }
LAB_710077bc28:
  iVar3 = 0;
  do {
    while (iVar2 = FUN_710077b410(param_1,param_2,param_3), iVar2 != -1) {
LAB_710077bc58:
      iVar3 = iVar3 + iVar2;
      if (((*(int *)((long)param_1 + 0x14) != 1) ||
          ((0 < iVar2 & (*(byte *)(param_1 + 3) ^ 1)) == 0)) ||
         (uVar5 = (ulong)iVar2, param_3 <= uVar5)) goto LAB_710077bc8c;
      param_2 = param_2 + uVar5;
      param_3 = param_3 - uVar5;
    }
    *(undefined4 *)((long)param_1 + 0x2034) = 2;
    if (*(char *)((long)param_1 + 0x22) == '\0') {
      iVar3 = iVar3 + -1;
      goto LAB_710077bc8c;
    }
    iVar2 = *(int *)((long)param_1 + 0x1c);
    if (iVar2 == 2) {
      if (param_3 != 0) {
        iVar2 = 0;
        uVar5 = 0;
        iVar7 = iVar3;
        do {
          if (*(code **)(*param_1 + 0x28) == FUN_710077b9f0) {
            cVar1 = FUN_710077b860(param_1,lVar6 + uVar5,0);
            if ((cVar1 == '\0') && (*(char *)((long)param_1 + 0x22) != '\0')) {
              FUN_7100778c60(&DAT_7100d1bd98,(long)param_1 + 0x34);
            }
          }
          else {
            (**(code **)(*param_1 + 0x28))(param_1,lVar6 + uVar5,0);
          }
          uVar4 = param_3 - uVar5;
          if (0x200 < uVar4) {
            uVar4 = 0x200;
          }
          uVar5 = uVar5 + 0x200;
          iVar3 = FUN_710077b410(param_1,param_2,uVar4);
          if (iVar3 == -1) {
            iVar3 = 0x200;
          }
          iVar2 = iVar2 + iVar3;
          iVar3 = iVar7 + iVar2;
          if (iVar2 == -1) {
            iVar3 = iVar7;
          }
          iVar7 = iVar3;
        } while (uVar5 < param_3);
        goto LAB_710077bc58;
      }
      goto LAB_710077bc8c;
    }
    local_3 = '\0';
    local_2[0] = '\0';
    local_2[1] = 0;
    if (iVar2 != 0) goto LAB_710077bcec;
    if (*(int *)((long)param_1 + 0x14) != 0) goto LAB_710077bcf4;
    FUN_7100778950(&DAT_7100d1bd98,(long)param_1 + 0x34,&local_3,local_2,local_2 + 1);
  } while (local_2[0] != '\0');
  if (local_3 == '\0') {
    iVar2 = *(int *)((long)param_1 + 0x1c);
LAB_710077bcec:
    if (iVar2 != 1) {
LAB_710077bcf4:
      iVar3 = iVar3 + -1;
      FUN_7100778a90(&DAT_7100d1bd98,(long)param_1 + 0x34);
LAB_710077bc8c:
      if (iVar3 < 1) {
        return iVar3;
      }
      param_1[5] = param_1[5] + (long)iVar3;
      return iVar3;
    }
  }
  *(undefined1 *)((long)param_1 + 0x24) = 1;
  return 0;
}



// ===== FUN_710077be90 @ 710077be90 (size=20) =====

undefined8 FUN_710077be90(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x24) == '\0') {
    uVar1 = FUN_710077bbf0();
    return uVar1;
  }
  return 0;
}



// ===== FUN_710077beb0 @ 710077beb0 (size=104) =====

undefined1 FUN_710077beb0(long *param_1)

{
  undefined1 uVar1;
  undefined1 local_1;
  
  local_1 = 0;
  if (*(code **)(*param_1 + 0x20) == FUN_710077be90) {
    uVar1 = 0;
    if (*(char *)((long)param_1 + 0x24) == '\0') {
      FUN_710077bbf0(param_1,&local_1,1);
      uVar1 = local_1;
    }
    return uVar1;
  }
  (**(code **)(*param_1 + 0x20))(param_1,&local_1,1);
  return local_1;
}



// ===== FUN_710077bf20 @ 710077bf20 (size=48) =====

bool FUN_710077bf20(long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 8) != -1) {
    iVar1 = FUN_710080c940();
    return iVar1 != 0;
  }
  return false;
}



// ===== FUN_710077bf50 @ 710077bf50 (size=136) =====

char FUN_710077bf50(undefined8 param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_800 [2048];
  
  FUN_710077ee10(param_1,auStack_800,0x800);
  if (param_2 == '\0') {
    param_3 = 0x1ff;
  }
  iVar1 = FUN_71008354c0(auStack_800,param_3);
  if (iVar1 != -1) {
    return '\0';
  }
  piVar2 = (int *)FUN_710080e8e0();
  return (*piVar2 == 2) + '\x01';
}



// ===== FUN_710077bfe0 @ 710077bfe0 (size=336) =====

bool FUN_710077bfe0(int *param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  long lVar6;
  undefined4 auStack_2000 [2048];
  
  if (param_1 == (int *)0x0) {
    return false;
  }
  if (*param_1 == 0) {
    return false;
  }
  bVar1 = true;
  FUN_710077cf80();
  piVar5 = param_1;
  do {
    piVar5 = piVar5 + 1;
    iVar3 = *piVar5;
    while( true ) {
      if ((iVar3 == 0) || (0x1ffc < (ulong)((long)piVar5 - (long)param_1))) {
        if (param_2 == '\0') {
          puVar4 = (undefined4 *)FUN_710077cf20(param_1);
          cVar2 = FUN_710077cf80(*puVar4);
          if (cVar2 == '\0') {
            iVar3 = FUN_710077bf50(param_1,1,0x1ff);
            bVar1 = iVar3 == 0;
          }
        }
        return bVar1;
      }
      cVar2 = FUN_710077cf80();
      if (cVar2 == '\0' || piVar5 <= param_1) break;
      lVar6 = (long)piVar5 - (long)param_1 >> 2;
      FUN_710080ee60(auStack_2000,param_1,lVar6);
      auStack_2000[lVar6] = 0;
      iVar3 = FUN_710077bf50(auStack_2000,1,0x1ff);
      bVar1 = iVar3 == 0;
      piVar5 = piVar5 + 1;
      iVar3 = *piVar5;
    }
  } while( true );
}



// ===== FUN_710077c130 @ 710077c130 (size=8) =====

void FUN_710077c130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_710077b530(param_1,param_2,param_4);
  return;
}



// ===== FUN_710077c140 @ 710077c140 (size=68) =====

bool FUN_710077c140(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_800 [2048];
  
  FUN_710077ee10(param_1,auStack_800,0x800);
  iVar1 = FUN_710081c500(auStack_800,0);
  return iVar1 == 0;
}



// ===== FUN_710077c190 @ 710077c190 (size=16) =====

bool FUN_710077c190(uint param_1)

{
  return (param_1 & 0xf000) == 0x4000;
}



// ===== FUN_710077c1a0 @ 710077c1a0 (size=16) =====

bool FUN_710077c1a0(uint param_1)

{
  return (param_1 & 0xf000) == 0xa000;
}



// ===== FUN_710077c1b0 @ 710077c1b0 (size=68) =====

void FUN_710077c1b0(long param_1)

{
  undefined1 auStack_800 [2048];
  
  if (param_1 != 0) {
    FUN_710077ee10(param_1,auStack_800,0x800);
    FUN_7100833e60(auStack_800,0x1c0);
    return;
  }
  return;
}



// ===== FUN_710077c200 @ 710077c200 (size=72) =====

undefined4 FUN_710077c200(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_868 [4];
  undefined4 local_864;
  undefined1 auStack_800 [2048];
  
  FUN_710077ee10(param_1,auStack_800,0x800);
  iVar1 = FUN_7100809640(auStack_800,auStack_868);
  if (iVar1 != 0) {
    local_864 = 0;
  }
  return local_864;
}



// ===== FUN_710077c250 @ 710077c250 (size=72) =====

bool FUN_710077c250(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_800 [2048];
  
  FUN_710077ee10(param_1,auStack_800,0x800);
  iVar1 = FUN_7100833e60(auStack_800,param_2);
  return iVar1 == 0;
}



// ===== FUN_710077c2a0 @ 710077c2a0 (size=64) =====

bool FUN_710077c2a0(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_800 [2048];
  
  FUN_710077ee10(param_1,auStack_800,0x800);
  iVar1 = FUN_7100823540(auStack_800);
  return iVar1 == 0;
}



