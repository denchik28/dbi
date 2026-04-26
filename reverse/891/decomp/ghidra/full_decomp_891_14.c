// ===== FUN_71006c25a0 @ 71006c25a0 (size=4) =====

void FUN_71006c25a0(void)

{
  return;
}



// ===== FUN_71006c25b0 @ 71006c25b0 (size=84) =====

undefined ** FUN_71006c25b0(undefined8 param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  ppuVar3 = &PTR_PTR_DAT_7100aec1c8;
  ppuVar2 = &PTR_DAT_7100ae34a0;
  do {
    iVar1 = FUN_71006ca300(*ppuVar2,param_1);
    if (iVar1 != 0) {
      return ppuVar2;
    }
    ppuVar3 = ppuVar3 + 1;
    ppuVar2 = (undefined **)*ppuVar3;
  } while (ppuVar2 != (undefined **)0x0);
  return (undefined **)0x0;
}



// ===== FUN_71006c2610 @ 71006c2610 (size=36) =====

undefined4 FUN_71006c2610(int param_1)

{
  if (param_1 - 5U < 4) {
    return *(undefined4 *)(&DAT_71009baef8 + (ulong)(param_1 - 5U) * 4);
  }
  return 3;
}



// ===== FUN_71006c2640 @ 71006c2640 (size=80) =====

void FUN_71006c2640(long param_1)

{
  undefined *puVar1;
  
  (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(param_1 + 0x1d0));
  puVar1 = PTR_FUN_7100af36a0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x1b8));
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  FUN_71006c1e10(param_1 + 0x1e0);
  FUN_71006c1e10(param_1 + 0x408);
  return;
}



// ===== FUN_71006c2690 @ 71006c2690 (size=1032) =====

undefined4 FUN_71006c2690(long param_1,long param_2,long *param_3,long *param_4,long *param_5)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (param_4 != (long *)0x0) {
    uVar1 = param_1 + param_2;
    uVar3 = FUN_710080eb40(param_1,0x3a);
    if (uVar3 < uVar1) {
      if (param_5 == (long *)0x0) {
        if (uVar3 == 0) goto LAB_71006c2920;
LAB_71006c2700:
        uVar4 = 0;
        lVar9 = (uVar1 - uVar3) + -1;
        lVar8 = 0;
        lVar5 = uVar3 - param_1;
      }
      else {
        uVar4 = FUN_710080eb40(param_1,0x3b);
        if (uVar4 < uVar1) {
          if (uVar3 == 0) goto LAB_71006c2868;
          bVar2 = uVar4 != 0;
          if (bVar2 && uVar4 < uVar3) {
            lVar5 = uVar4 - param_1;
            if (bVar2 && uVar3 < uVar4) {
LAB_71006c2a54:
              lVar9 = (uVar4 - uVar3) + -1;
            }
            else {
              lVar9 = (uVar1 - uVar3) + -1;
            }
          }
          else {
            lVar5 = uVar3 - param_1;
            if (bVar2 && uVar3 < uVar4) goto LAB_71006c2a54;
            lVar9 = (uVar1 - uVar3) + -1;
            if (uVar4 == 0) {
              lVar8 = 0;
              goto LAB_71006c2710;
            }
          }
          if (uVar3 <= uVar4) goto LAB_71006c2878;
          lVar8 = (uVar3 - uVar4) + -1;
        }
        else {
          if (uVar3 != 0) goto LAB_71006c2700;
          uVar4 = 0;
          lVar9 = 0;
          lVar8 = 0;
          lVar5 = param_2;
        }
      }
LAB_71006c2710:
      lVar7 = 0;
      param_2 = lVar5;
      if (param_3 != (long *)0x0 && lVar5 != 0) goto LAB_71006c28d0;
      goto LAB_71006c2720;
    }
    if (param_5 != (long *)0x0) goto LAB_71006c2850;
LAB_71006c2920:
    lVar7 = 0;
    if ((param_3 != (long *)0x0 && param_2 != 0) &&
       (lVar7 = (*(code *)PTR_FUN_7100af36a8)(param_2 + 1), lVar7 == 0)) {
      return 0x1b;
    }
    uVar4 = 0;
    lVar5 = 0;
    uVar3 = 0;
    lVar9 = 0;
    lVar8 = 0;
    goto LAB_71006c2970;
  }
  if (param_5 == (long *)0x0) {
    if (param_3 == (long *)0x0 || param_2 == 0) {
      return 0;
    }
    uVar4 = 0;
    uVar3 = 0;
    lVar9 = 0;
    lVar8 = 0;
LAB_71006c28d0:
    lVar7 = (*(code *)PTR_FUN_7100af36a8)(param_2 + 1);
    if (lVar7 == 0) {
      return 0x1b;
    }
  }
  else {
LAB_71006c2850:
    uVar4 = FUN_710080eb40(param_1,0x3b);
    if (uVar4 < (ulong)(param_1 + param_2)) {
LAB_71006c2868:
      if (uVar4 == 0) {
        uVar3 = 0;
        lVar9 = 0;
        lVar8 = 0;
      }
      else {
        lVar5 = uVar4 - param_1;
        uVar3 = 0;
        lVar9 = 0;
LAB_71006c2878:
        lVar8 = ((param_1 + param_2) - uVar4) + -1;
        param_2 = lVar5;
      }
    }
    else {
      uVar3 = 0;
      uVar4 = 0;
      lVar9 = 0;
      lVar8 = 0;
    }
    lVar7 = 0;
    if (param_3 != (long *)0x0 && param_2 != 0) goto LAB_71006c28d0;
  }
  if (param_4 == (long *)0x0) {
    if (param_5 != (long *)0x0) {
      lVar5 = 0;
      goto LAB_71006c2744;
    }
    if (lVar7 == 0) {
      return 0;
    }
    lVar6 = 0;
    lVar5 = 0;
  }
  else {
LAB_71006c2720:
    if (lVar9 == 0) {
      lVar5 = 0;
      if (param_5 == (long *)0x0) goto LAB_71006c2970;
LAB_71006c2744:
      if (lVar8 == 0) goto LAB_71006c2970;
      lVar6 = (*(code *)PTR_FUN_7100af36a8)(lVar8 + 1);
      if (lVar6 == 0) {
        (*(code *)PTR_FUN_7100af36a0)(lVar5);
        (*(code *)PTR_FUN_7100af36a0)(lVar7);
        return 0x1b;
      }
    }
    else {
      lVar5 = (*(code *)PTR_FUN_7100af36a8)(lVar9 + 1);
      if (lVar5 == 0) {
        (*(code *)PTR_FUN_7100af36a0)(lVar7);
        return 0x1b;
      }
      if (param_5 != (long *)0x0) goto LAB_71006c2744;
LAB_71006c2970:
      lVar6 = 0;
    }
    if (lVar7 == 0) goto LAB_71006c27a4;
  }
  FUN_710080f900(lVar7,param_1,param_2);
  *(undefined1 *)(lVar7 + param_2) = 0;
  (*(code *)PTR_FUN_7100af36a0)(*param_3);
  *param_3 = lVar7;
LAB_71006c27a4:
  if (lVar5 != 0) {
    lVar5 = FUN_710080f900(lVar5,uVar3 + 1,lVar9);
    *(undefined1 *)(lVar5 + lVar9) = 0;
    (*(code *)PTR_FUN_7100af36a0)(*param_4);
    *param_4 = lVar5;
  }
  if (lVar6 != 0) {
    lVar5 = FUN_710080f900(lVar6,uVar4 + 1,lVar8);
    *(undefined1 *)(lVar5 + lVar8) = 0;
    (*(code *)PTR_FUN_7100af36a0)(*param_5);
    *param_5 = lVar5;
  }
  return 0;
}



// ===== FUN_71006c2aa0 @ 71006c2aa0 (size=348) =====

uint FUN_71006c2aa0(long *param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  lVar5 = *param_1;
  FUN_71006b8c70(lVar5,3);
  uVar1 = *(uint *)(param_1[0xc9] + 0x84);
  if ((uVar1 >> 4 & 1) != 0) {
    *param_2 = 1;
    return 0;
  }
  *param_2 = 0;
  *(uint *)((long)param_1 + 0x624) = *(uint *)((long)param_1 + 0x624) & 0xff7fffff;
  if (*(long *)(lVar5 + 0xd50) != 0) {
    (*(code *)PTR_FUN_7100af36a0)(param_1[0xd1]);
    uVar4 = *(undefined8 *)(lVar5 + 0xd50);
    param_1[0xd1] = 0;
    lVar3 = FUN_71006a1060("User-Agent: %s\r\n",uVar4);
    param_1[0xd1] = lVar3;
    if (lVar3 == 0) {
      return 0x1b;
    }
  }
  *(undefined8 *)(lVar5 + 0xf8) = 0;
  *(undefined8 *)(lVar5 + 0x1570) = 0;
  auVar6 = FUN_71006b7420();
  *(undefined1 (*) [16])(param_1 + 0x95) = auVar6;
  if ((int)param_1[0x9b] == -1) {
    *(undefined1 *)((long)param_1 + 0x622) = 0;
    uVar2 = FUN_71006a2d60(param_1,param_1[0x5b]);
    if (uVar2 != 0) {
      return uVar2;
    }
  }
  else {
    FUN_71006b8c70(lVar5,4);
    if (((*(byte *)(param_1 + 0xa3) & 1) != 0) || ((*(uint *)(param_1[0xc9] + 0x80) & 0x30) != 0)) {
      FUN_71006b8c70(lVar5,5);
    }
    lVar5 = param_1[0x9b];
    *(undefined1 *)((long)param_1 + 0x622) = 1;
    *param_2 = 1;
    FUN_71006a1bb0(param_1,(int)lVar5);
    FUN_71006c24b0(param_1);
  }
  auVar6 = FUN_71006b7420();
  *(undefined1 (*) [16])(param_1 + 0x95) = auVar6;
  return uVar1 & 0x10;
}



// ===== FUN_71006c2c00 @ 71006c2c00 (size=236) =====

undefined8 FUN_71006c2c00(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  
  if (param_2 != 0) {
    *(uint *)(param_2 + 0x624) = *(uint *)(param_2 + 0x624) & 0xffffefff;
    if (((*(ushort *)(param_1 + 0x162c) >> 7 & 1) != 0) &&
       ((*(uint *)(*(long *)(param_2 + 0x648) + 0x84) >> 0xc & 1) == 0)) {
      *(ushort *)(param_1 + 0x162c) = *(ushort *)(param_1 + 0x162c) & 0xff7f;
    }
  }
  *(byte *)(param_1 + 0x162d) = *(byte *)(param_1 + 0x162d) & 0xee;
  if (((uint)*(undefined8 *)(param_1 + 0xf60) >> 0x1c & 1) == 0) {
    if (*(int *)(param_1 + 0xa28) == 6) {
      *(undefined4 *)(param_1 + 0xa28) = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xa28) = 6;
  }
  auVar1 = FUN_71006b7420();
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined1 (*) [16])(param_1 + 0x108) = auVar1;
  *(undefined1 (*) [16])(param_1 + 0x118) = auVar1;
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_1 + 0x1140);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_1 + 0x1150);
  *(byte *)(param_1 + 0x648) = *(byte *)(param_1 + 0x648) & 0xf6 | 1;
  FUN_71006c59c0(param_1);
  FUN_71006b8fd0(param_1,0);
  FUN_71006b8e90(param_1,0);
  return 0;
}



// ===== FUN_71006c2cf0 @ 71006c2cf0 (size=9728) =====

/* WARNING: Type propagation algorithm not settling */

uint FUN_71006c2cf0(char *param_1,char *param_2,undefined1 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  bool bVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  char *pcVar21;
  undefined1 *puVar22;
  ulong uVar23;
  int *piVar24;
  uint uVar25;
  undefined *puVar26;
  undefined8 uVar27;
  ulong uVar28;
  undefined *puVar29;
  char **ppcVar30;
  char **ppcVar31;
  byte *pbVar32;
  long lVar33;
  undefined **ppuVar34;
  undefined8 *puVar35;
  char *pcVar36;
  long lVar37;
  undefined **ppuVar38;
  ulong uVar39;
  long *plVar40;
  ulong uVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  undefined1 auVar48 [16];
  char *local_f0;
  undefined8 *local_c0;
  char *local_b0;
  char *local_a8;
  char local_81;
  char *local_80;
  undefined8 local_78;
  
  *param_2 = '\0';
  (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(param_1 + 0x1d0));
  puVar26 = PTR_FUN_7100af36a0;
  param_1[0x1d0] = '\0';
  param_1[0x1d1] = '\0';
  param_1[0x1d2] = '\0';
  param_1[0x1d3] = '\0';
  param_1[0x1d4] = '\0';
  param_1[0x1d5] = '\0';
  param_1[0x1d6] = '\0';
  param_1[0x1d7] = '\0';
  (*(code *)puVar26)(*(undefined8 *)(param_1 + 0x1b8));
  param_1[0x1b8] = '\0';
  param_1[0x1b9] = '\0';
  param_1[0x1ba] = '\0';
  param_1[0x1bb] = '\0';
  param_1[0x1bc] = '\0';
  param_1[0x1bd] = '\0';
  param_1[0x1be] = '\0';
  param_1[0x1bf] = '\0';
  FUN_71006c1e10(param_1 + 0x1e0);
  FUN_71006c1e10(param_1 + 0x408);
  FUN_7100808340(param_1 + 0xd8,0,0x578);
  param_1[0xe0] = -1;
  param_1[0xe1] = -1;
  param_1[0xe2] = -1;
  param_1[0xe3] = -1;
  param_1[0xe4] = -1;
  param_1[0xe5] = -1;
  param_1[0xe6] = -1;
  param_1[0xe7] = -1;
  uVar17 = FUN_71006a63b0(*(undefined8 *)(param_1 + 0xc0));
  uVar18 = FUN_71006a63d0(*(undefined8 *)(param_1 + 0xc0));
  *param_2 = '\0';
  if (*(long *)(param_1 + 0xf68) == 0) {
    return 3;
  }
  plVar19 = (long *)(*(code *)PTR_FUN_7100af3698)(1,0x8c8);
  if (plVar19 == (long *)0x0) {
    return 0x1b;
  }
  lVar37 = *(long *)(PTR_DAT_7100af36c0 + 0x18);
  lVar20 = (*(code *)PTR_FUN_7100af3698)(4,lVar37);
  if (lVar20 == 0) {
    (*(code *)PTR_FUN_7100af36a0)(plVar19);
    return 0x1b;
  }
  lVar33 = lVar20 + lVar37 + lVar37;
  plVar19[0x5a] = -1;
  plVar19[0x80] = -1;
  *(undefined4 *)(plVar19 + 0x81) = 0xffffffff;
  plVar19[0x9b] = -1;
  plVar19[0x9c] = -1;
  plVar19[0xa2] = lVar20;
  plVar19[0xa5] = lVar20 + lVar37;
  plVar19[0xa8] = lVar33;
  plVar19[0xab] = lVar33 + lVar37;
  plVar19[0xad] = lVar20;
  plVar19[0xc9] = (long)&PTR_s_<no_protocol>_7100ae35b0;
  FUN_71006a2e80(plVar19,1);
  auVar48 = FUN_71006b7420();
  *(undefined1 (*) [16])(plVar19 + 0x97) = auVar48;
  auVar48 = FUN_71006b7420();
  uVar16 = *(uint *)(param_1 + 0xba0);
  uVar25 = 0;
  *(undefined1 (*) [16])(plVar19 + 0xcc) = auVar48;
  lVar20 = *(long *)(param_1 + 0xf30);
  pcVar21 = *(char **)(param_1 + 0xcc8);
  *plVar19 = (long)param_1;
  *(undefined4 *)(plVar19 + 0x75) = 4;
  *(uint *)(plVar19 + 0x7d) = uVar16;
  plVar19[0xce] = lVar20;
  if (pcVar21 != (char *)0x0) {
    uVar25 = (uint)(*pcVar21 != '\0');
  }
  uVar3 = *(uint *)((long)plVar19 + 0x624);
  uVar16 = uVar3 & 0x1f | uVar25 << 5 | (uint)(uVar25 != 0 && uVar16 < 3) << 6;
  *(uint *)((long)plVar19 + 0x624) = uVar3 & 0xffffff80 | uVar16;
  *(uint *)((long)plVar19 + 0x624) =
       uVar3 & 0xffffff00 | uVar16 | (uint)((plVar19[0xc4] & 0x6000000000U) == 0x2000000000) << 7;
  if ((*(char **)(param_1 + 0xcd0) != (char *)0x0) && (**(char **)(param_1 + 0xcd0) != '\0')) {
    *(byte *)((long)plVar19 + 0x624) = *(byte *)((long)plVar19 + 0x624) | 0xa0;
  }
  plVar1 = plVar19 + 0xda;
  bVar5 = *(byte *)(plVar19 + 0xb8);
  lVar20 = *(long *)(param_1 + 0xd98);
  lVar37 = *(long *)(param_1 + 0xd80);
  bVar7 = bVar5 & 0xf8;
  bVar9 = (byte)(((uint)(*(ulong *)(param_1 + 0xa88) >> 2) & 1) << 2);
  uVar27 = *(undefined8 *)(param_1 + 0xf60);
  *(byte *)(plVar19 + 0xb8) = bVar7 | bVar5 & 3 | bVar9;
  uVar16 = (uint)uVar27;
  bVar6 = *(byte *)(plVar19 + 0xc3);
  bVar8 = (byte)*(undefined8 *)(param_1 + 0xa88) & 1;
  *(byte *)(plVar19 + 0xb8) = bVar7 | bVar5 & 2 | bVar9 | bVar8;
  *(byte *)(plVar19 + 0xb8) =
       bVar7 | bVar9 | bVar8 | (byte)(((uint)(*(ulong *)(param_1 + 0xa88) >> 1) & 1) << 1);
  bVar7 = bVar6 & 0xf8;
  bVar8 = (byte)(((uint)(*(ulong *)(param_1 + 0xb38) >> 2) & 1) << 2);
  *(byte *)(plVar19 + 0xc3) = bVar7 | bVar6 & 3 | bVar8;
  bVar5 = (byte)*(undefined8 *)(param_1 + 0xb38) & 1;
  *(byte *)(plVar19 + 0xc3) = bVar7 | bVar6 & 2 | bVar8 | bVar5;
  *(byte *)(plVar19 + 0xc3) =
       bVar7 | bVar8 | bVar5 | (byte)(((uint)(*(ulong *)(param_1 + 0xb38) >> 1) & 1) << 1);
  uVar27 = *(undefined8 *)(param_1 + 0xf60);
  lVar33 = *(long *)(param_1 + 0xbd0);
  *(undefined4 *)((long)plVar19 + 0x32c) = 3;
  plVar19[0xcb] = lVar33;
  *(uint *)((long)plVar19 + 0x624) =
       (uint)(lVar37 != 0) << 8 | (uint)(lVar20 != 0) << 9 | (uVar16 >> 10 & 1) << 0xf |
       (uVar16 >> 0xf & 1) << 0x12 | (uVar16 >> 0x10 & 1) << 0x13 |
       ((uint)((ulong)uVar27 >> 0x25) & 1) << 0x1e | *(uint *)((long)plVar19 + 0x624) & 0xbff37cff;
  FUN_71006caaf0(plVar1,0);
  if (*(long *)(param_1 + 0xc60) != 0) {
    lVar20 = (*(code *)PTR_FUN_7100af36b8)();
    plVar19[0x114] = lVar20;
    if (lVar20 == 0) {
      FUN_71006cac10(plVar1,0);
      (*(code *)PTR_FUN_7100af36a0)(plVar19[0x114]);
      (*(code *)PTR_FUN_7100af36a0)(plVar19[0xad]);
      (*(code *)PTR_FUN_7100af36a0)(plVar19);
      return 0x1b;
    }
  }
  uVar4 = *(undefined4 *)(param_1 + 0x6e4);
  lVar37 = *(long *)(param_1 + 0x748);
  *(undefined2 *)(plVar19 + 0x115) = *(undefined2 *)(param_1 + 0x6e0);
  lVar20 = *(long *)(param_1 + 0x750);
  *(undefined4 *)((long)plVar19 + 0x8ac) = uVar4;
  plVar19[0x58] = lVar37;
  plVar19[0x59] = lVar20;
  auVar48 = FUN_71006b7420();
  *(undefined1 (*) [16])(plVar19 + 0x99) = auVar48;
  FUN_71006c12d0(param_1);
  if (*(long *)(param_1 + 0xf48) == 0) {
    lVar20 = FUN_71006dc340();
  }
  else {
    lVar20 = FUN_71006dc3a0();
  }
  *(long *)(param_1 + 0x15d0) = lVar20;
  plVar40 = plVar19;
  if (lVar20 == 0) {
LAB_71006c39c8:
    uVar16 = 0x1b;
    goto LAB_71006c3278;
  }
  if ((*(long *)(param_1 + 0xc58) == 0) ||
     (cVar11 = FUN_71006db8e0(*(undefined8 *)(param_1 + 0xf68),0,0x28), cVar11 != '\0')) {
    lVar37 = *(long *)(param_1 + 0xf48);
  }
  else {
    if ((param_1[0xf88] & 1U) != 0) {
      (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(param_1 + 0xf68));
    }
    lVar37 = FUN_71006a1060("%s://%s",*(undefined8 *)(param_1 + 0xc58),
                            *(undefined8 *)(param_1 + 0xf68));
    if (lVar37 == 0) goto LAB_71006c39c8;
    *(long *)(param_1 + 0xf68) = lVar37;
    param_1[0xf88] = param_1[0xf88] | 1;
    lVar37 = *(long *)(param_1 + 0xf48);
  }
  if (lVar37 == 0) {
    uVar16 = (uint)((ulong)*(undefined8 *)(param_1 + 0xf60) >> 0x20);
    iVar15 = FUN_71006dcb90(lVar20,0,*(undefined8 *)(param_1 + 0xf68),
                            uVar16 >> 0x11 & 0x20 | uVar16 >> 0xb & 0x10 | 0x208);
    if ((iVar15 == 0) && (iVar15 = FUN_71006dc540(lVar20,0,&local_80,0), iVar15 == 0)) {
      if ((param_1[0xf88] & 1U) != 0) {
        (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(param_1 + 0xf68));
      }
      *(char **)(param_1 + 0xf68) = local_80;
      param_1[0xf88] = param_1[0xf88] | 1;
      goto LAB_71006c3054;
    }
    if (iVar15 - 5U < 4) {
      uVar16 = *(uint *)(&DAT_71009baef8 + (ulong)(iVar15 - 5U) * 4);
      goto LAB_71006c3278;
    }
LAB_71006c3274:
    uVar16 = 3;
    goto LAB_71006c3278;
  }
LAB_71006c3054:
  iVar15 = FUN_71006dc540(lVar20,1,param_1 + 0x15d8,0);
  if (iVar15 == 0) {
    ppuVar38 = &PTR_PTR_DAT_7100aec1c8;
    ppuVar34 = &PTR_DAT_7100ae34a0;
    uVar27 = *(undefined8 *)(param_1 + 0x15d8);
    do {
      iVar15 = FUN_71006ca300(*ppuVar34,uVar27);
      if (iVar15 != 0) {
        if ((((ulong)*(uint *)(ppuVar34 + 0x10) & *(ulong *)(param_1 + 0xe98)) != 0) &&
           (((*(ushort *)(param_1 + 0x162c) >> 1 & 1) == 0 ||
            (((ulong)*(uint *)(ppuVar34 + 0x10) & *(ulong *)(param_1 + 0xea0)) != 0)))) {
          plVar19[0xc9] = (long)ppuVar34;
          plVar19[0xca] = (long)ppuVar34;
          iVar15 = FUN_71006dc540(lVar20,2,param_1 + 0x15f0,0x40);
          if (iVar15 == 0) {
            lVar37 = (*(code *)PTR_FUN_7100af36b8)(*(undefined8 *)(param_1 + 0x15f0));
            plVar19[0x90] = lVar37;
            if (lVar37 == 0) goto LAB_71006c39c8;
            *(uint *)((long)plVar19 + 0x624) = *(uint *)((long)plVar19 + 0x624) | 0x100;
          }
          else if (iVar15 != 0xb) goto LAB_71006c30f0;
          iVar15 = FUN_71006dc540(lVar20,3,param_1 + 0x15f8,0x40);
          if (iVar15 == 0) {
            lVar37 = (*(code *)PTR_FUN_7100af36b8)(*(undefined8 *)(param_1 + 0x15f8));
            plVar19[0x91] = lVar37;
            if (lVar37 == 0) goto LAB_71006c39c8;
            *(uint *)((long)plVar19 + 0x624) = *(uint *)((long)plVar19 + 0x624) | 0x100;
          }
          else if (iVar15 != 0xc) goto LAB_71006c30f0;
          iVar15 = FUN_71006dc540(lVar20,4,param_1 + 0x1600,0x40);
          if (iVar15 == 0) {
            lVar37 = (*(code *)PTR_FUN_7100af36b8)(*(undefined8 *)(param_1 + 0x1600));
            plVar19[0x92] = lVar37;
            if (lVar37 == 0) goto LAB_71006c39c8;
          }
          else if (iVar15 != 0xd) goto LAB_71006c30f0;
          iVar15 = FUN_71006dc540(lVar20,5,param_1 + 0x15e0,0);
          if ((iVar15 != 0) &&
             (iVar15 = FUN_71006ca300("file",*(undefined8 *)(param_1 + 0x15d8)), iVar15 == 0))
          goto LAB_71006c39c8;
          iVar15 = FUN_71006dc540(lVar20,7,param_1 + 0x1608,0);
          if (iVar15 != 0) goto LAB_71006c30f0;
          iVar15 = FUN_71006dc540(lVar20,6,param_1 + 0x15e8,1);
          if (iVar15 == 0) {
            FUN_710080daa0(*(undefined8 *)(param_1 + 0x15e8),0,10);
            uVar23 = FUN_71006a87e0();
            plVar19[0x80] = uVar23 & 0xffff;
            *(uint *)(plVar19 + 0x81) = (uint)uVar23 & 0xffff;
          }
          else {
            iVar15 = FUN_71006ca300("file",*(undefined8 *)(param_1 + 0x15d8));
            if (iVar15 == 0) goto LAB_71006c39c8;
          }
          FUN_71006dc540(lVar20,8,param_1 + 0x1610,0);
          pcVar21 = *(char **)(param_1 + 0x15e0);
          if (pcVar21 == (char *)0x0) {
            pcVar36 = "";
          }
          else {
            pcVar36 = pcVar21;
            if (*pcVar21 == '[') {
              pcVar36 = pcVar21 + 1;
              *(uint *)((long)plVar19 + 0x624) = *(uint *)((long)plVar19 + 0x624) | 0x400;
              lVar37 = FUN_710081ce00(pcVar36);
              pcVar21[lVar37] = '\0';
              FUN_71006c16a0(lVar20,plVar19);
            }
          }
          lVar20 = (*(code *)PTR_FUN_7100af36b8)(pcVar36);
          plVar19[0x66] = lVar20;
          if (lVar20 == 0) goto LAB_71006c39c8;
          plVar19[0x68] = lVar20;
          if (*(int *)(param_1 + 0xe90) != 0) {
            *(int *)(plVar19 + 0x65) = *(int *)(param_1 + 0xe90);
          }
          goto LAB_71006c310c;
        }
        break;
      }
      ppuVar38 = ppuVar38 + 1;
      ppuVar34 = (undefined **)*ppuVar38;
    } while (ppuVar34 != (undefined **)0x0);
    uVar16 = 1;
    FUN_71006c0a00(param_1,"Protocol \"%s\" not supported or disabled in libcurl",uVar27);
    goto LAB_71006c3278;
  }
LAB_71006c30f0:
  if (3 < iVar15 - 5U) goto LAB_71006c3274;
  uVar16 = *(uint *)(&DAT_71009baef8 + (ulong)(iVar15 - 5U) * 4);
  if (uVar16 != 0) goto LAB_71006c4094;
LAB_71006c310c:
  if (*(long *)(param_1 + 0xe50) != 0) {
    lVar20 = (*(code *)PTR_FUN_7100af36b8)();
    plVar19[0x93] = lVar20;
    if (lVar20 == 0) goto LAB_71006c39c8;
  }
  lVar20 = *plVar19;
  pcVar21 = *(char **)(lVar20 + 0xcc8);
  if (pcVar21 == (char *)0x0) {
    uVar16 = FUN_71006dd8e0(plVar19);
    if (uVar16 != 0) {
      local_f0 = (char *)0x0;
      pcVar21 = (char *)0x0;
      goto LAB_71006c3248;
    }
    if ((*(uint *)((long)plVar19 + 0x624) >> 9 & 1) != 0) goto LAB_71006c3a58;
LAB_71006c3a6c:
    pcVar21 = *(char **)(lVar20 + 0xcc8);
    if (pcVar21 != (char *)0x0) goto LAB_71006c3144;
LAB_71006c3160:
    local_f0 = *(char **)(lVar20 + 0xcd0);
    if ((local_f0 != (char *)0x0) &&
       (local_f0 = (char *)(*(code *)PTR_FUN_7100af36b8)(), local_f0 == (char *)0x0)) {
      uVar16 = 0x1b;
      FUN_71006c0a00(lVar20,"memory shortage");
      goto LAB_71006c3248;
    }
    if (*(char **)(lVar20 + 0xda8) == (char *)0x0) {
      pcVar36 = "no_proxy";
      local_b0 = (char *)FUN_71006c5aa0("no_proxy");
      if (local_b0 != (char *)0x0) {
LAB_71006c3c0c:
        FUN_71006c08c0(*plVar19,"Uses proxy env variable %s == \'%s\'\n",pcVar36,local_b0);
        local_a8 = (char *)plVar19[0x68];
        pcVar36 = *(char **)(lVar20 + 0xda8);
        if (*(char **)(lVar20 + 0xda8) == (char *)0x0) {
          pcVar36 = local_b0;
        }
        goto LAB_71006c319c;
      }
      pcVar36 = "NO_PROXY";
      local_b0 = (char *)FUN_71006c5aa0("NO_PROXY");
      if (local_b0 != (char *)0x0) goto LAB_71006c3c0c;
      local_a8 = (char *)plVar19[0x68];
      pcVar36 = *(char **)(lVar20 + 0xda8);
      if (*(char **)(lVar20 + 0xda8) != (char *)0x0) goto LAB_71006c319c;
LAB_71006c31a4:
      if (pcVar21 != (char *)0x0 || local_f0 != (char *)0x0) {
        (*(code *)PTR_FUN_7100af36a0)(local_b0);
        if (pcVar21 != (char *)0x0) {
          if (*pcVar21 != '\0') goto LAB_71006c3b6c;
LAB_71006c31cc:
          (*(code *)PTR_FUN_7100af36a0)(pcVar21);
        }
        if (local_f0 != (char *)0x0) {
          if (*local_f0 == '\0') {
            (*(code *)PTR_FUN_7100af36a0)(local_f0);
          }
          else {
            lVar37 = plVar19[0xc9];
            pcVar21 = (char *)0x0;
LAB_71006c31f8:
            if ((*(uint *)(lVar37 + 0x84) >> 4 & 1) == 0) {
              if (pcVar21 != (char *)0x0) {
                uVar16 = FUN_71006c1870(lVar20,plVar19,pcVar21,(int)plVar19[0x7d]);
                (*(code *)PTR_FUN_7100af36a0)(pcVar21);
                if (uVar16 != 0) {
                  pcVar21 = (char *)0x0;
                  goto LAB_71006c3248;
                }
              }
              uVar16 = FUN_71006c1870(lVar20,plVar19,local_f0,(int)plVar19[0x75]);
              (*(code *)PTR_FUN_7100af36a0)(local_f0);
              if (uVar16 != 0) goto LAB_71006c3be8;
              goto LAB_71006c3570;
            }
            (*(code *)PTR_FUN_7100af36a0)(local_f0);
            pcVar36 = pcVar21;
            if (pcVar21 != (char *)0x0) goto LAB_71006c3214;
          }
        }
        goto LAB_71006c3a2c;
      }
      pbVar32 = *(byte **)plVar19[0xc9];
      bVar7 = *pbVar32;
      if (bVar7 == 0) {
        ppcVar31 = &local_80;
      }
      else {
        ppcVar30 = &local_80;
        do {
          bVar5 = bVar7 + 0x20;
          if (((&DAT_71009d32f1)[bVar7] & 3) != 1) {
            bVar5 = bVar7;
          }
          ppcVar31 = (char **)((long)ppcVar30 + 1);
          *(byte *)ppcVar30 = bVar5;
          pbVar32 = pbVar32 + 1;
          bVar7 = *pbVar32;
          ppcVar30 = ppcVar31;
        } while (bVar7 != 0);
      }
      pcVar36 = (char *)&local_80;
      *(undefined4 *)ppcVar31 = 0x6f72705f;
      pbVar32 = (byte *)((long)ppcVar31 + 3);
      pbVar32[0] = 0x6f;
      pbVar32[1] = 0x78;
      pbVar32[2] = 0x79;
      pbVar32[3] = 0;
      pcVar21 = (char *)FUN_71006c5aa0(pcVar36);
      if (pcVar21 == (char *)0x0) {
        iVar15 = FUN_71006ca300("http_proxy",pcVar36);
        if (iVar15 == 0) {
          FUN_71006ca4b0(pcVar36,pcVar36,0x80);
          pcVar21 = (char *)FUN_71006c5aa0(pcVar36);
          if (pcVar21 != (char *)0x0) goto LAB_71006c3b38;
        }
        pcVar36 = "all_proxy";
        pcVar21 = (char *)FUN_71006c5aa0("all_proxy");
        if (pcVar21 == (char *)0x0) {
          pcVar36 = "ALL_PROXY";
          pcVar21 = (char *)FUN_71006c5aa0("ALL_PROXY");
          if (pcVar21 == (char *)0x0) {
            (*(code *)PTR_FUN_7100af36a0)(local_b0);
            goto LAB_71006c3a2c;
          }
        }
      }
LAB_71006c3b38:
      FUN_71006c08c0(*plVar19,"Uses proxy env variable %s == \'%s\'\n",pcVar36,pcVar21);
      (*(code *)PTR_FUN_7100af36a0)(local_b0);
      if (*pcVar21 == '\0') {
        (*(code *)PTR_FUN_7100af36a0)(pcVar21);
        goto LAB_71006c3a2c;
      }
      local_f0 = (char *)0x0;
LAB_71006c3b6c:
      lVar37 = plVar19[0xc9];
      if ((*(uint *)(lVar37 + 0x84) >> 4 & 1) != 0) goto LAB_71006c31cc;
      pcVar36 = pcVar21;
      if (local_f0 != (char *)0x0) {
        if (*local_f0 != '\0') goto LAB_71006c31f8;
        (*(code *)PTR_FUN_7100af36a0)(local_f0);
      }
LAB_71006c3214:
      local_f0 = (char *)0x0;
      uVar16 = FUN_71006c1870(lVar20,plVar19,pcVar36,(int)plVar19[0x7d]);
      pcVar21 = (char *)0x0;
      (*(code *)PTR_FUN_7100af36a0)(pcVar36);
      if (uVar16 != 0) goto LAB_71006c3248;
LAB_71006c3570:
      puVar26 = PTR_FUN_7100af36a0;
      if (plVar19[0x78] == 0) {
        *(ushort *)((long)plVar19 + 0x624) = *(ushort *)((long)plVar19 + 0x624) & 0x7fbf;
        if (plVar19[0x70] == 0) {
          uVar16 = *(uint *)((long)plVar19 + 0x624);
          goto LAB_71006c3e14;
        }
        if (plVar19[0x76] == 0) {
          lVar20 = plVar19[0x7e];
          plVar19[0x7e] = 0;
          plVar19[0x76] = lVar20;
          (*(code *)puVar26)(plVar19[0x77]);
          lVar20 = plVar19[0x7f];
          plVar19[0x7f] = 0;
          uVar16 = *(uint *)((long)plVar19 + 0x624);
          plVar19[0x77] = lVar20;
        }
        else {
          uVar16 = *(uint *)((long)plVar19 + 0x624);
        }
LAB_71006c35c0:
        uVar16 = uVar16 | 0x80;
        *(uint *)((long)plVar19 + 0x624) = uVar16;
      }
      else {
        if ((*(uint *)(plVar19[0xc9] + 0x80) & 3) == 0) {
          if (((*(uint *)(plVar19[0xc9] + 0x84) >> 0xb & 1) == 0) ||
             ((*(uint *)((long)plVar19 + 0x624) >> 0xf & 1) != 0)) {
            *(uint *)((long)plVar19 + 0x624) = *(uint *)((long)plVar19 + 0x624) | 0x8000;
          }
          else {
            plVar19[0xc9] = (long)&PTR_DAT_7100ae34a0;
          }
        }
        uVar16 = *(uint *)((long)plVar19 + 0x624) | 0x40;
        *(uint *)((long)plVar19 + 0x624) = uVar16;
        if (plVar19[0x70] != 0) goto LAB_71006c35c0;
LAB_71006c3e14:
        uVar16 = uVar16 & 0xffffff7f;
        *(uint *)((long)plVar19 + 0x624) = uVar16;
      }
    }
    else {
      local_a8 = (char *)plVar19[0x68];
      local_b0 = (char *)0x0;
      pcVar36 = *(char **)(lVar20 + 0xda8);
LAB_71006c319c:
      if (*pcVar36 == '\0') goto LAB_71006c31a4;
      iVar15 = FUN_71006ca300(&DAT_710083bcb0,pcVar36);
      if (iVar15 == 0) {
        uVar23 = FUN_710081ce00(pcVar36);
        if (*local_a8 == '[') {
          lVar37 = FUN_710080eb40(local_a8,0x5d);
          if (lVar37 == 0) goto LAB_71006c31a4;
          local_a8 = local_a8 + 1;
          local_c0 = (undefined8 *)(lVar37 - (long)local_a8);
        }
        else {
          local_c0 = (undefined8 *)FUN_710081ce00(local_a8);
        }
        uVar41 = 0;
        if (uVar23 != 0) {
          do {
            lVar37 = FUN_710080eb40(&DAT_7100838888,pcVar36[uVar41]);
            if (lVar37 == 0) goto LAB_71006c3d50;
LAB_71006c3ca8:
            uVar41 = uVar41 + 1;
          } while (uVar41 < uVar23);
          if (uVar23 != uVar41) {
            cVar11 = pcVar36[uVar41];
            uVar39 = uVar41;
LAB_71006c3cd8:
            uVar28 = 0;
            uVar41 = uVar39;
            if (cVar11 == '.') {
              uVar41 = uVar39 + 1;
              uVar28 = 0xffffffffffffffff;
              goto LAB_71006c3d9c;
            }
            while( true ) {
              iVar15 = FUN_71006ca3e0(pcVar36 + uVar41,
                                      local_a8 + (((long)local_c0 + uVar41) - uVar39));
              if ((iVar15 != 0) &&
                 ((local_c0 == (undefined8 *)uVar28 ||
                  ((local_a8 + (((long)local_c0 + uVar41) - uVar39))[-1] == '.')))) break;
              do {
                uVar41 = uVar39 + 1;
                if (uVar23 <= uVar41) goto LAB_71006c31a4;
                lVar37 = FUN_710080eb40(&DAT_7100838888,pcVar36[uVar41]);
                if (lVar37 != 0) goto LAB_71006c3ca8;
LAB_71006c3d50:
                if (uVar23 == uVar41) goto LAB_71006c31a4;
                cVar11 = pcVar36[uVar41];
                uVar39 = uVar41;
                if (uVar23 <= uVar41) goto LAB_71006c3cd8;
                do {
                  lVar37 = FUN_710080eb40(&DAT_7100838888,pcVar36[uVar39]);
                  if (lVar37 != 0) break;
                  uVar39 = uVar39 + 1;
                } while (uVar23 != uVar39);
                if (cVar11 == '.') {
                  uVar41 = uVar41 + 1;
                }
                uVar28 = uVar39 - uVar41;
LAB_71006c3d9c:
              } while (local_c0 < uVar28);
            }
            goto LAB_71006c3a04;
          }
        }
        goto LAB_71006c31a4;
      }
LAB_71006c3a04:
      (*(code *)PTR_FUN_7100af36a0)(pcVar21);
      (*(code *)PTR_FUN_7100af36a0)(local_f0);
      (*(code *)PTR_FUN_7100af36a0)(local_b0);
LAB_71006c3a2c:
      *(byte *)((long)plVar19 + 0x624) = *(byte *)((long)plVar19 + 0x624) & 0x3f;
      uVar16 = *(uint *)((long)plVar19 + 0x624);
    }
    uVar25 = (uint)((plVar19[0xc4] & 0xc000000000U) != 0);
    *(uint *)((long)plVar19 + 0x624) = uVar16 & 0xffffffc0 | uVar16 & 0x1f | uVar25 << 5;
    if (uVar25 == 0) {
      *(ushort *)((long)plVar19 + 0x624) = *(ushort *)((long)plVar19 + 0x624) & 0x7d1f;
    }
    (*(code *)PTR_FUN_7100af36a0)(0);
    (*(code *)PTR_FUN_7100af36a0)(0);
    if (((*(uint *)(plVar19[0xca] + 0x84) & 1) != 0) &&
       ((*(uint *)((long)plVar19 + 0x624) >> 6 & 1) != 0)) {
      *(uint *)((long)plVar19 + 0x624) = *(uint *)((long)plVar19 + 0x624) | 0x8000;
    }
    if ((*(long *)(param_1 + 0x690) != 0) && ((*(ushort *)(param_1 + 0x162c) >> 4 & 1) != 0)) {
      *(uint *)(plVar19 + 0x81) = (uint)*(long *)(param_1 + 0x690) & 0xffff;
      FUN_710069fb80(&local_80,0x10,"%d");
      iVar15 = FUN_71006dcb90(*(undefined8 *)(param_1 + 0x15d0),6,&local_80,0);
      if (iVar15 != 0) goto LAB_71006c39c8;
    }
    cVar11 = false;
    bVar10 = false;
    if ((*(int *)(param_1 + 0xc00) == 2) && ((*(uint *)((long)plVar19 + 0x624) >> 8 & 1) != 0)) {
      bVar10 = plVar19[0x90] != 0;
      if (bVar10) {
        (*(code *)PTR_FUN_7100af36a0)(plVar19[0x90]);
        plVar19[0x90] = 0;
      }
      cVar11 = plVar19[0x91] != 0;
      if ((bool)cVar11) {
        (*(code *)PTR_FUN_7100af36a0)();
        plVar19[0x91] = 0;
      }
      *(uint *)((long)plVar19 + 0x624) = *(uint *)((long)plVar19 + 0x624) & 0xfffffeff;
    }
    if (*(long *)(param_1 + 0xd80) != 0) {
      (*(code *)PTR_FUN_7100af36a0)(plVar19[0x90]);
      lVar20 = (*(code *)PTR_FUN_7100af36b8)(*(undefined8 *)(param_1 + 0xd80));
      plVar19[0x90] = lVar20;
      if (lVar20 == 0) goto LAB_71006c39c8;
      bVar10 = true;
      *(uint *)((long)plVar19 + 0x624) = *(uint *)((long)plVar19 + 0x624) | 0x100;
    }
    if (*(long *)(param_1 + 0xd88) != 0) {
      (*(code *)PTR_FUN_7100af36a0)(plVar19[0x91]);
      lVar20 = (*(code *)PTR_FUN_7100af36b8)(*(undefined8 *)(param_1 + 0xd88));
      plVar19[0x91] = lVar20;
      if (lVar20 == 0) goto LAB_71006c39c8;
      cVar11 = true;
      *(uint *)((long)plVar19 + 0x624) = *(uint *)((long)plVar19 + 0x624) | 0x100;
    }
    if (*(long *)(param_1 + 0xd90) != 0) {
      (*(code *)PTR_FUN_7100af36a0)(plVar19[0x92]);
      lVar20 = (*(code *)PTR_FUN_7100af36b8)(*(undefined8 *)(param_1 + 0xd90));
      plVar19[0x92] = lVar20;
      if (lVar20 == 0) goto LAB_71006c39c8;
    }
    *(uint *)((long)plVar19 + 0x624) = *(uint *)((long)plVar19 + 0x624) & 0xffdfffff;
    if ((*(int *)(param_1 + 0xc00) == 0) ||
       (((((char *)plVar19[0x90] != (char *)0x0 && (*(char *)plVar19[0x90] != '\0')) &&
         ((char *)plVar19[0x91] != (char *)0x0)) && (*(char *)plVar19[0x91] != '\0')))) {
joined_r0x0071006c3968:
      if (bVar10) {
        lVar20 = plVar19[0x90];
        uVar27 = *(undefined8 *)(param_1 + 0x15d0);
LAB_71006c3e28:
        iVar15 = FUN_71006dcb90(uVar27,2,lVar20,0);
        if (iVar15 == 0) goto LAB_71006c396c;
        goto LAB_71006c37a8;
      }
LAB_71006c396c:
      if (cVar11 != '\0') goto LAB_71006c3970;
    }
    else {
      local_81 = '\0';
      local_80 = (char *)((ulong)local_80 & 0xffffffffffffff00);
      iVar15 = FUN_71006c79f0(plVar19[0x68],plVar19 + 0x90,plVar19 + 0x91,&local_81,&local_80,
                              *(undefined8 *)(param_1 + 0xcc0));
      if (0 < iVar15) {
        FUN_71006c08c0(param_1,"Couldn\'t find host %s in the .netrc file; using defaults\n",
                       plVar19[0x68]);
        goto joined_r0x0071006c3968;
      }
      if (iVar15 != 0) goto LAB_71006c39c8;
      *(uint *)((long)plVar19 + 0x624) = *(uint *)((long)plVar19 + 0x624) | 0x200100;
      if (local_81 == '\0') {
        if ((char)local_80 != '\0') {
          cVar11 = (char)local_80;
        }
        goto joined_r0x0071006c3968;
      }
      lVar20 = plVar19[0x90];
      uVar27 = *(undefined8 *)(param_1 + 0x15d0);
      if ((char)local_80 == '\0') goto LAB_71006c3e28;
      iVar15 = FUN_71006dcb90(uVar27,2,lVar20,0);
      if (iVar15 != 0) goto LAB_71006c37a8;
LAB_71006c3970:
      iVar15 = FUN_71006dcb90(*(undefined8 *)(param_1 + 0x15d0),3,plVar19[0x91],0);
      if (iVar15 != 0) {
LAB_71006c37a8:
        if (3 < iVar15 - 5U) goto LAB_71006c3274;
        uVar16 = *(uint *)(&DAT_71009baef8 + (ulong)(iVar15 - 5U) * 4);
        if (uVar16 != 0) goto LAB_71006c3278;
      }
    }
    if (((*(uint *)(plVar19[0xc9] + 0x84) >> 5 & 1) == 0) ||
       ((*(uint *)((long)plVar19 + 0x624) >> 8 & 1) != 0)) {
      pcVar21 = "";
      pcVar36 = pcVar21;
    }
    else {
      pcVar36 = "ftp@example.com";
      pcVar21 = "anonymous";
    }
    if (plVar19[0x90] == 0) {
      lVar20 = (*(code *)PTR_FUN_7100af36b8)(pcVar21);
      plVar19[0x90] = lVar20;
      if (lVar20 == 0) {
        uVar16 = 0x1b;
        goto LAB_71006c3278;
      }
    }
    if (plVar19[0x91] == 0) {
      lVar20 = (*(code *)PTR_FUN_7100af36b8)(pcVar36);
      plVar19[0x91] = lVar20;
      if (lVar20 == 0) goto LAB_71006c39c8;
    }
    puVar35 = *(undefined8 **)(param_1 + 0xa10);
    if (puVar35 != (undefined8 *)0x0) {
      do {
        pcVar21 = (char *)*puVar35;
        if (*pcVar21 == ':') {
LAB_71006c38f0:
          pcVar36 = pcVar21 + 1;
          if (*pcVar36 == ':') {
            pcVar21 = pcVar21 + 2;
LAB_71006c3e84:
            if (*pcVar21 != '\0') {
              pcVar21 = (char *)(*(code *)PTR_FUN_7100af36b8)();
              if (pcVar21 == (char *)0x0) goto LAB_71006c43c4;
              if (*pcVar21 == '[') {
                uVar16 = 4;
                FUN_71006c0a00(param_1,"Use of IPv6 in *_CONNECT_TO without IPv6 support built-in!")
                ;
                (*(code *)PTR_FUN_7100af36a0)(pcVar21);
                goto LAB_71006c3278;
              }
              puVar22 = (undefined1 *)FUN_710080eb40(pcVar21,0x3a);
              if (puVar22 == (undefined1 *)0x0) {
                iVar15 = -1;
              }
              else {
                local_80 = (char *)0x0;
                iVar15 = -1;
                *puVar22 = 0;
                if (puVar22[1] != '\0') {
                  uVar23 = FUN_710081b720(puVar22 + 1,&local_80,10);
                  if (((local_80 != (char *)0x0) && (*local_80 != '\0')) || (0xffff < uVar23)) {
                    FUN_71006c08c0(param_1,"No valid port number in connect to host string (%s)\n",
                                   puVar22 + 1);
                    (*(code *)PTR_FUN_7100af36a0)(pcVar21);
                    *(uint *)((long)plVar19 + 0x624) = *(uint *)((long)plVar19 + 0x624) & 0xfffffff7
                    ;
                    (*(code *)PTR_FUN_7100af36a0)(0);
                    bVar10 = true;
                    goto LAB_71006c38c0;
                  }
                  iVar15 = (int)uVar23;
                }
              }
              pcVar36 = (char *)(*(code *)PTR_FUN_7100af36b8)(pcVar21);
              if (pcVar36 == (char *)0x0) {
                uVar16 = 0x1b;
                (*(code *)PTR_FUN_7100af36a0)(pcVar21);
                goto LAB_71006c3278;
              }
              (*(code *)PTR_FUN_7100af36a0)(pcVar21);
              if (*pcVar36 == '\0') {
                *(uint *)((long)plVar19 + 0x624) = *(uint *)((long)plVar19 + 0x624) & 0xfffffff7;
                (*(code *)PTR_FUN_7100af36a0)(pcVar36);
                pcVar36 = (char *)0x0;
              }
              else {
                plVar19[0x6c] = (long)pcVar36;
                plVar19[0x6e] = (long)pcVar36;
                *(uint *)((long)plVar19 + 0x624) = *(uint *)((long)plVar19 + 0x624) | 8;
                FUN_71006c08c0(param_1,"Connecting to hostname: %s\n",pcVar36);
              }
              if (iVar15 == -1) {
                bVar10 = pcVar36 == (char *)0x0;
                goto LAB_71006c38c0;
              }
              *(int *)((long)plVar19 + 0x40c) = iVar15;
              *(uint *)((long)plVar19 + 0x624) = *(uint *)((long)plVar19 + 0x624) | 0x10;
              FUN_71006c08c0(param_1,"Connecting to port: %d\n",iVar15);
              break;
            }
LAB_71006c3930:
            uVar16 = *(uint *)((long)plVar19 + 0x624);
          }
          else {
            pcVar21 = (char *)FUN_710080eb40(pcVar36,0x3a);
            if (pcVar21 != (char *)0x0) {
              local_80 = (char *)0x0;
              lVar20 = FUN_710081b720(pcVar36,&local_80,10);
              if ((pcVar21 == local_80) && (lVar20 == (int)plVar19[0x81])) {
                pcVar21 = pcVar21 + 1;
                goto LAB_71006c3e84;
              }
              goto LAB_71006c3930;
            }
            uVar16 = *(uint *)((long)plVar19 + 0x624);
          }
          *(uint *)((long)plVar19 + 0x624) = uVar16 & 0xfffffff7;
          (*(code *)PTR_FUN_7100af36a0)(0);
          bVar10 = true;
        }
        else {
          puVar26 = &DAT_7100853d20;
          puVar29 = &DAT_7100853d20;
          if ((*(uint *)((long)plVar19 + 0x624) >> 10 & 1) != 0) {
            puVar26 = &DAT_710083a620;
            puVar29 = &DAT_7100846df8;
          }
          lVar20 = FUN_71006a1060("%s%s%s",puVar26,plVar19[0x68],puVar29);
          if (lVar20 == 0) goto LAB_71006c43c4;
          lVar37 = FUN_710081ce00();
          iVar15 = FUN_71006ca3e0(pcVar21,lVar20,lVar37);
          (*(code *)PTR_FUN_7100af36a0)(lVar20);
          if ((iVar15 != 0) &&
             (pcVar36 = pcVar21 + lVar37, pcVar21 = pcVar21 + lVar37, *pcVar36 == ':'))
          goto LAB_71006c38f0;
          *(uint *)((long)plVar19 + 0x624) = *(uint *)((long)plVar19 + 0x624) & 0xfffffff7;
          (*(code *)PTR_FUN_7100af36a0)(0);
          bVar10 = true;
        }
LAB_71006c38c0:
        *(uint *)((long)plVar19 + 0x624) = *(uint *)((long)plVar19 + 0x624) & 0xffffffef;
        puVar35 = (undefined8 *)puVar35[1];
      } while (puVar35 != (undefined8 *)0x0 && bVar10);
    }
    pcVar21 = (char *)plVar19[0x68];
    plVar19[0x69] = (long)pcVar21;
    if (pcVar21 != (char *)0x0) {
      do {
        cVar11 = *pcVar21;
        pcVar21 = pcVar21 + 1;
        if (cVar11 == '\0') goto LAB_71006c3f70;
      } while (-1 < cVar11);
      FUN_71006c08c0(*plVar19,"IDN support not present, can\'t parse Unicode domains\n");
    }
LAB_71006c3f70:
    uVar16 = *(uint *)((long)plVar19 + 0x624);
    if ((uVar16 >> 3 & 1) != 0) {
      pcVar21 = (char *)plVar19[0x6e];
      plVar19[0x6f] = (long)pcVar21;
      if (pcVar21 != (char *)0x0) {
        do {
          cVar11 = *pcVar21;
          pcVar21 = pcVar21 + 1;
          if (cVar11 == '\0') goto joined_r0x0071006c48b0;
        } while (-1 < cVar11);
        FUN_71006c08c0(*plVar19,"IDN support not present, can\'t parse Unicode domains\n");
        uVar16 = *(uint *)((long)plVar19 + 0x624);
      }
    }
joined_r0x0071006c48b0:
    if ((uVar16 >> 6 & 1) != 0) {
      pcVar21 = (char *)plVar19[0x7a];
      plVar19[0x7b] = (long)pcVar21;
      if (pcVar21 != (char *)0x0) {
        do {
          cVar11 = *pcVar21;
          pcVar21 = pcVar21 + 1;
          if (cVar11 == '\0') goto joined_r0x0071006c3f7c;
        } while (-1 < cVar11);
        FUN_71006c08c0(*plVar19,"IDN support not present, can\'t parse Unicode domains\n");
        uVar16 = *(uint *)((long)plVar19 + 0x624);
      }
    }
joined_r0x0071006c3f7c:
    if ((uVar16 >> 7 & 1) != 0) {
      pcVar21 = (char *)plVar19[0x72];
      plVar19[0x73] = (long)pcVar21;
      if (pcVar21 != (char *)0x0) {
        do {
          cVar11 = *pcVar21;
          pcVar21 = pcVar21 + 1;
          if (cVar11 == '\0') goto joined_r0x0071006c48c8;
        } while (-1 < cVar11);
        FUN_71006c08c0(*plVar19,"IDN support not present, can\'t parse Unicode domains\n");
        uVar16 = *(uint *)((long)plVar19 + 0x624);
      }
    }
joined_r0x0071006c48c8:
    if ((uVar16 >> 3 & 1) != 0) {
      iVar15 = FUN_71006ca300(plVar19[0x6e],plVar19[0x68]);
      if (iVar15 == 0) {
        uVar16 = *(uint *)((long)plVar19 + 0x624);
      }
      else {
        uVar16 = *(uint *)((long)plVar19 + 0x624) & 0xfffffff7;
        *(uint *)((long)plVar19 + 0x624) = uVar16;
      }
    }
    if (((uVar16 >> 4 & 1) != 0) && (*(int *)((long)plVar19 + 0x40c) == (int)plVar19[0x81])) {
      *(uint *)((long)plVar19 + 0x624) = *(uint *)((long)plVar19 + 0x624) & 0xffffffef;
    }
    if (((plVar19[0xc4] & 0x1800000000U) != 0) && ((*(uint *)((long)plVar19 + 0x624) >> 6 & 1) != 0)
       ) {
      *(uint *)((long)plVar19 + 0x624) = *(uint *)((long)plVar19 + 0x624) | 0x8000;
    }
    lVar20 = plVar19[0xc9];
    if (*(code **)(lVar20 + 8) != (code *)0x0) {
      uVar16 = (**(code **)(lVar20 + 8))(plVar19);
      if (uVar16 != 0) goto LAB_71006c4094;
      lVar20 = plVar19[0xc9];
    }
    if (plVar19[0x80] < 0) {
      plVar19[0x80] = *(long *)(lVar20 + 0x78);
    }
    uVar27 = *(undefined8 *)(param_1 + 0xf60);
    plVar19[0x9d] = (long)FUN_71006c0b30;
    plVar19[0x9e] = (long)FUN_71006c0b30;
    plVar19[0x9f] = (long)FUN_71006c1030;
    plVar19[0xa0] = (long)FUN_71006c1030;
    *(uint *)((long)plVar19 + 0x624) =
         *(uint *)((long)plVar19 + 0x624) & 0xf0000000 |
         *(uint *)((long)plVar19 + 0x624) & 0x7ffffff | ((uint)((ulong)uVar27 >> 0x2c) & 1) << 0x1b;
    if ((*(uint *)(lVar20 + 0x84) >> 4 & 1) != 0) {
      FUN_71006a18f0(plVar19);
      uVar16 = (**(code **)(plVar19[0xc9] + 0x28))(plVar19,&local_80);
      if (uVar16 == 0) {
        uVar27 = *(undefined8 *)(param_1 + 0x1120);
        *(undefined1 *)((long)plVar19 + 0x622) = 1;
        uVar16 = FUN_71006a98d0(uVar27,plVar19);
        if (uVar16 == 0) {
          uVar16 = FUN_71006c15b0(param_1);
          if (uVar16 == 0) {
            FUN_71006a3df0(param_1,plVar19);
            FUN_71006ca160(param_1,0xffffffff,0xffffffffffffffff,0,0xffffffff);
            FUN_71006c2c00(param_1,plVar19);
            goto LAB_71006c4c00;
          }
          (**(code **)(plVar19[0xc9] + 0x18))(plVar19,uVar16,0);
        }
      }
      else {
        FUN_71006c2c00(param_1,plVar19);
      }
LAB_71006c4094:
      plVar40 = plVar19;
      if (uVar16 == 0x59) {
        return 0x59;
      }
      goto LAB_71006c3278;
    }
    plVar2 = plVar19 + 0xae;
    *(undefined8 *)(param_1 + 0xa50) = *(undefined8 *)(param_1 + 0xd00);
    *(undefined8 *)(param_1 + 0xaf8) = *(undefined8 *)(param_1 + 0xcf8);
    *(undefined8 *)(param_1 + 0xa48) = *(undefined8 *)(param_1 + 0xcf0);
    *(undefined8 *)(param_1 + 0xa98) = *(undefined8 *)(param_1 + 0xd58);
    *(undefined8 *)(param_1 + 0xa80) = *(undefined8 *)(param_1 + 0xd10);
    *(undefined8 *)(param_1 + 0xb30) = *(undefined8 *)(param_1 + 0xd18);
    *(undefined8 *)(param_1 + 0xb00) = *(undefined8 *)(param_1 + 0xd08);
    *(undefined8 *)(param_1 + 0xb20) = *(undefined8 *)(param_1 + 0xd28);
    *(undefined8 *)(param_1 + 0xa78) = *(undefined8 *)(param_1 + 0xd30);
    *(undefined8 *)(param_1 + 0xa70) = *(undefined8 *)(param_1 + 0xd20);
    *(undefined8 *)(param_1 + 0xb48) = *(undefined8 *)(param_1 + 0xd60);
    *(undefined8 *)(param_1 + 0xa60) = *(undefined8 *)(param_1 + 0xd48);
    *(undefined8 *)(param_1 + 0xa68) = *(undefined8 *)(param_1 + 0xd40);
    *(undefined8 *)(param_1 + 0xb10) = *(undefined8 *)(param_1 + 0xd48);
    *(undefined8 *)(param_1 + 0xb18) = *(undefined8 *)(param_1 + 0xd40);
    *(undefined8 *)(param_1 + 0xb28) = *(undefined8 *)(param_1 + 0xd38);
    *(undefined8 *)(param_1 + 0xaa0) = *(undefined8 *)(param_1 + 0xd68);
    *(undefined8 *)(param_1 + 0xa58) = *(undefined8 *)(param_1 + 0xc20);
    *(undefined8 *)(param_1 + 0xab8) = *(undefined8 *)(param_1 + 0xc20);
    *(undefined8 *)(param_1 + 0xb50) = *(undefined8 *)(param_1 + 0xd70);
    *(undefined8 *)(param_1 + 0xb08) = *(undefined8 *)(param_1 + 0xc28);
    *(undefined8 *)(param_1 + 0xb68) = *(undefined8 *)(param_1 + 0xc28);
    *(undefined8 *)(param_1 + 0xac0) = *(undefined8 *)(param_1 + 0xc30);
    *(undefined8 *)(param_1 + 0xac8) = *(undefined8 *)(param_1 + 0xc88);
    *(undefined8 *)(param_1 + 0xb70) = *(undefined8 *)(param_1 + 0xc38);
    *(undefined8 *)(param_1 + 0xb78) = *(undefined8 *)(param_1 + 0xc90);
    *(undefined8 *)(param_1 + 0xad8) = *(undefined8 *)(param_1 + 0xc98);
    *(undefined8 *)(param_1 + 0xb88) = *(undefined8 *)(param_1 + 0xca0);
    *(undefined8 *)(param_1 + 0xad0) = *(undefined8 *)(param_1 + 0xca8);
    *(undefined8 *)(param_1 + 0xb80) = *(undefined8 *)(param_1 + 0xcb0);
    cVar11 = FUN_71006b14d0(param_1 + 0xa38);
    if (cVar11 == '\0') {
LAB_71006c43c4:
      uVar16 = 0x1b;
      goto LAB_71006c3278;
    }
    cVar11 = FUN_71006b14d0(param_1 + 0xae8);
    if (cVar11 == '\0') {
      uVar16 = 0x1b;
      goto LAB_71006c3278;
    }
    auVar48 = FUN_71006b7420();
    lVar20 = FUN_71006b7490(auVar48._0_8_,auVar48._8_8_,
                            *(undefined8 *)(*(long *)(param_1 + 0x1120) + 0x40),
                            *(undefined8 *)(*(long *)(param_1 + 0x1120) + 0x48));
    if (999 < lVar20) {
      local_78 = 0;
      local_80 = param_1;
      while (cVar12 = FUN_71006a9b90(param_1,*(undefined8 *)(param_1 + 0x1120),&local_80,
                                     FUN_71006c1c30), cVar12 != '\0') {
        FUN_71006c2330(param_1,local_78,1);
      }
      *(undefined1 (*) [16])(*(long *)(param_1 + 0x1120) + 0x40) = auVar48;
    }
    uVar23 = *(ulong *)(param_1 + 0xf60);
    if ((((uVar23 >> 0x21 & 1) == 0) || ((*(ushort *)(param_1 + 0x162c) >> 1 & 1) != 0)) &&
       ((uVar23 >> 0x25 & 1) == 0)) {
      if ((((*(uint *)(plVar19[0xc9] + 0x80) & 3) == 0) ||
          (((plVar19[0xc4] ^ 0xffffffffffffffffU) & 0x200100000000) == 0)) ||
         (cVar12 = FUN_71006a3dd0(*(undefined8 *)(param_1 + 0xc0)), cVar12 == '\0')) {
        bVar10 = false;
      }
      else {
        bVar10 = 2 < *(long *)(param_1 + 0xa30);
      }
      piVar24 = (int *)FUN_71006a9810(plVar19,*(undefined8 *)(param_1 + 0x1120),&local_80);
      if (piVar24 != (int *)0x0) {
        pcVar21 = "can multiplex";
        if (*piVar24 != 2) {
          pcVar21 = "serially";
        }
        FUN_71006c08c0(param_1,"Found bundle for host %s: %p [%s]\n",local_80,piVar24,pcVar21);
        if (!bVar10) {
          cVar12 = '\0';
LAB_71006c46cc:
          local_c0 = *(undefined8 **)(piVar24 + 4);
          if (local_c0 == (undefined8 *)0x0) goto LAB_71006c51c8;
          cVar14 = '\0';
          do {
            plVar40 = (long *)*local_c0;
            local_c0 = (undefined8 *)local_c0[2];
            if ((plVar40[0xc4] & 0x4000000100000000U) == 0) {
              if (*piVar24 == 2) {
                local_a8 = (char *)plVar40[0xdd];
                if (cVar12 == '\0') {
                  if (local_a8 == (char *)0x0) goto LAB_71006c46f0;
                  goto LAB_71006c4754;
                }
              }
              else {
                local_a8 = (char *)0;
                if (cVar12 == '\0') {
LAB_71006c46f0:
                  local_a8 = (char *)0;
                  if ((int)plVar40[0x9b] == -1) {
                    FUN_71006c08c0(param_1,"Connection #%ld isn\'t open enough, can\'t reuse\n",
                                   plVar40[0x5a]);
                    cVar14 = cVar11;
                    goto LAB_71006c4754;
                  }
                }
              }
              lVar20 = plVar19[0xc9];
              if ((((*(uint *)(lVar20 + 0x84) ^ *(uint *)(plVar40[0xc9] + 0x84)) & 1) == 0) ||
                 ((iVar15 = FUN_71006c1150(*(undefined4 *)(plVar40[0xc9] + 0x80)),
                  iVar15 == *(int *)(lVar20 + 0x80) && ((*(byte *)((long)plVar40 + 0x8c4) & 1) != 0)
                  ))) {
                uVar16 = *(uint *)((long)plVar19 + 0x624);
                uVar25 = *(uint *)((long)plVar40 + 0x624);
                if (((uVar16 ^ uVar25) & 0xc0) == 0) {
                  if ((uVar16 >> 7 & 1) == 0) {
LAB_71006c4748:
                    if (((uVar16 ^ uVar25) & 0x18) == 0) {
                      if ((uVar16 >> 6 & 1) == 0) {
LAB_71006c4984:
                        lVar20 = *plVar40;
                        if (cVar12 == '\0') {
                          if (lVar20 == 0) {
LAB_71006c4990:
                            if (plVar19[0x114] == 0) {
                              if (((short)plVar19[0x115] == 0) ||
                                 (((plVar40[0x115] ^ plVar19[0x115]) & 0xffffffff0000ffffU) == 0))
                              goto LAB_71006c49bc;
                            }
                            else if ((((plVar40[0x115] ^ plVar19[0x115]) & 0xffffffff0000ffffU) == 0
                                     ) && ((plVar40[0x114] != 0 &&
                                           (iVar15 = FUN_710080aec0(), iVar15 == 0)))) {
LAB_71006c49bc:
                              puVar35 = (undefined8 *)plVar19[0xc9];
                              uVar16 = *(uint *)((long)puVar35 + 0x84);
                              if (((uVar16 >> 7 & 1) != 0) ||
                                 ((iVar15 = FUN_710080aec0(plVar19[0x90],plVar40[0x90]), iVar15 == 0
                                  && (iVar15 = FUN_710080aec0(plVar19[0x91],plVar40[0x91]),
                                     iVar15 == 0)))) {
                                if (((*(uint *)((long)plVar19 + 0x624) >> 6 & 1) != 0) &&
                                   ((uVar16 & 1) == 0 &&
                                    (*(uint *)((long)plVar19 + 0x624) & 0x8000) == 0)) {
LAB_71006c4c54:
                                  if (local_a8 != (char *)0x0 && cVar12 == '\x01') {
                                    FUN_71006c08c0(param_1,"Multiplexed connection found!\n");
                                  }
                                  *plVar40 = (long)param_1;
                                  FUN_71006a9780(param_1);
                                  (*(code *)PTR_FUN_7100af36a0)(plVar19[0x78]);
                                  (*(code *)PTR_FUN_7100af36a0)(plVar19[0x70]);
                                  FUN_71006b16d0(plVar2);
                                  FUN_71006b16d0(plVar19 + 0xb9);
                                  uVar25 = (uint)((ulong)plVar19[0xc4] >> 0x28) & 1;
                                  uVar16 = *(uint *)((long)plVar40 + 0x624) & 0xfffffe00 |
                                           *(uint *)((long)plVar40 + 0x624) & 0xff | uVar25 << 8;
                                  *plVar40 = *plVar19;
                                  *(uint *)((long)plVar40 + 0x624) = uVar16;
                                  if (uVar25 != 0) {
                                    (*(code *)PTR_FUN_7100af36a0)(plVar40[0x90]);
                                    plVar40[0x90] = 0;
                                    (*(code *)PTR_FUN_7100af36a0)(plVar40[0x91]);
                                    lVar37 = plVar19[0x90];
                                    plVar40[0x91] = 0;
                                    lVar20 = plVar19[0x91];
                                    plVar40[0x90] = lVar37;
                                    plVar40[0x91] = lVar20;
                                    plVar19[0x90] = 0;
                                    plVar19[0x91] = 0;
                                    uVar16 = *(uint *)((long)plVar40 + 0x624);
                                  }
                                  uVar25 = (uint)((ulong)plVar19[0xc4] >> 0x29) & 1;
                                  *(uint *)((long)plVar40 + 0x624) =
                                       uVar16 & 0xfffffc00 | uVar16 & 0x1ff | uVar25 << 9;
                                  if (uVar25 != 0) {
                                    (*(code *)PTR_FUN_7100af36a0)(plVar40[0x7e]);
                                    plVar40[0x7e] = 0;
                                    (*(code *)PTR_FUN_7100af36a0)(plVar40[0x76]);
                                    plVar40[0x76] = 0;
                                    (*(code *)PTR_FUN_7100af36a0)(plVar40[0x7f]);
                                    plVar40[0x7f] = 0;
                                    (*(code *)PTR_FUN_7100af36a0)(plVar40[0x77]);
                                    lVar20 = plVar19[0x76];
                                    lVar37 = plVar19[0x7e];
                                    plVar40[0x77] = 0;
                                    lVar33 = plVar19[0x77];
                                    plVar40[0x76] = lVar20;
                                    lVar20 = plVar19[0x7f];
                                    plVar40[0x7e] = lVar37;
                                    plVar40[0x77] = lVar33;
                                    plVar40[0x7f] = lVar20;
                                    plVar19[0x76] = 0;
                                    plVar19[0x77] = 0;
                                    plVar19[0x7e] = 0;
                                    plVar19[0x7f] = 0;
                                  }
                                  (*(code *)PTR_FUN_7100af36a0)(plVar40[0x66]);
                                  plVar40[0x66] = 0;
                                  (*(code *)PTR_FUN_7100af36a0)(plVar40[0x6c]);
                                  lVar20 = plVar19[0x81];
                                  uVar4 = *(undefined4 *)((long)plVar19 + 0x40c);
                                  lVar45 = plVar19[0x67];
                                  lVar44 = plVar19[0x66];
                                  lVar47 = plVar19[0x69];
                                  lVar46 = plVar19[0x68];
                                  plVar40[0x6c] = 0;
                                  lVar33 = plVar19[0x6d];
                                  lVar37 = plVar19[0x6c];
                                  lVar43 = plVar19[0x6f];
                                  lVar42 = plVar19[0x6e];
                                  *(int *)(plVar40 + 0x81) = (int)lVar20;
                                  *(undefined4 *)((long)plVar40 + 0x40c) = uVar4;
                                  puVar26 = PTR_FUN_7100af36a0;
                                  plVar40[0x67] = lVar45;
                                  plVar40[0x66] = lVar44;
                                  plVar40[0x69] = lVar47;
                                  plVar40[0x68] = lVar46;
                                  plVar40[0x6d] = lVar33;
                                  plVar40[0x6c] = lVar37;
                                  plVar40[0x6f] = lVar43;
                                  plVar40[0x6e] = lVar42;
                                  (*(code *)puVar26)(plVar40[0x6a]);
                                  plVar40[0x6a] = 0;
                                  plVar40[0x6a] = plVar19[0x6a];
                                  plVar19[0x6a] = 0;
                                  FUN_71006a18f0(plVar40);
                                  *(uint *)((long)plVar40 + 0x624) =
                                       *(uint *)((long)plVar40 + 0x624) | 2;
                                  (*(code *)PTR_FUN_7100af36a0)(plVar19[0x90]);
                                  plVar19[0x90] = 0;
                                  (*(code *)PTR_FUN_7100af36a0)(plVar19[0x91]);
                                  plVar19[0x91] = 0;
                                  (*(code *)PTR_FUN_7100af36a0)(plVar19[0x92]);
                                  plVar19[0x92] = 0;
                                  (*(code *)PTR_FUN_7100af36a0)(plVar19[0x7e]);
                                  plVar19[0x7e] = 0;
                                  (*(code *)PTR_FUN_7100af36a0)(plVar19[0x76]);
                                  plVar19[0x76] = 0;
                                  (*(code *)PTR_FUN_7100af36a0)(plVar19[0x7f]);
                                  plVar19[0x7f] = 0;
                                  (*(code *)PTR_FUN_7100af36a0)(plVar19[0x77]);
                                  puVar26 = PTR_FUN_7100af36a0;
                                  plVar19[0x77] = 0;
                                  (*(code *)puVar26)(plVar19[0x114]);
                                  plVar19[0x114] = 0;
                                  FUN_71006cac10(plVar1,0);
                                  (*(code *)PTR_FUN_7100af36a0)(plVar19[0xad]);
                                  (*(code *)PTR_FUN_7100af36a0)(plVar19);
                                  pcVar21 = "proxy";
                                  if ((*(uint *)((long)plVar40 + 0x624) & 0x20) == 0) {
                                    pcVar21 = "host";
                                  }
                                  if (plVar40[0x72] == 0) {
                                    if (plVar40[0x7a] == 0) {
                                      lVar20 = plVar40[0x69];
                                    }
                                    else {
                                      lVar20 = plVar40[0x7b];
                                    }
                                  }
                                  else {
                                    lVar20 = plVar40[0x73];
                                  }
                                  FUN_71006c08c0(param_1,
                                                 "Re-using existing connection! (#%ld) with %s %s\n"
                                                 ,plVar40[0x5a],pcVar21,lVar20);
                                  goto LAB_71006c4ee0;
                                }
                                iVar15 = FUN_71006ca300(*puVar35,*(undefined8 *)plVar40[0xc9]);
                                if ((iVar15 != 0) ||
                                   ((iVar15 = FUN_71006c1150(*(undefined4 *)(plVar40[0xc9] + 0x80)),
                                    iVar15 == *(int *)(plVar19[0xc9] + 0x80) &&
                                    ((*(byte *)((long)plVar40 + 0x8c4) & 1) != 0)))) {
                                  uVar16 = *(uint *)((long)plVar19 + 0x624);
                                  if ((uVar16 >> 3 & 1) != 0) {
                                    iVar15 = FUN_71006ca300(plVar19[0x6e],plVar40[0x6e]);
                                    if (iVar15 == 0) goto LAB_71006c4754;
                                    uVar16 = *(uint *)((long)plVar19 + 0x624);
                                  }
                                  if ((((((uVar16 >> 4 & 1) == 0) ||
                                        (*(int *)((long)plVar19 + 0x40c) ==
                                         *(int *)((long)plVar40 + 0x40c))) &&
                                       (iVar15 = FUN_71006ca300(plVar19[0x68],plVar40[0x68]),
                                       iVar15 != 0)) && ((int)plVar19[0x81] == (int)plVar40[0x81]))
                                     && (((*(uint *)(plVar19[0xc9] + 0x84) & 1) == 0 ||
                                         ((cVar13 = FUN_71006b13f0(plVar2,plVar40 + 0xae),
                                          cVar13 != '\0' &&
                                          (cVar14 = cVar13, (int)plVar40[0xa1] == 2))))))
                                  goto LAB_71006c4c54;
                                }
                              }
                            }
                          }
                        }
                        else if ((lVar20 == 0) ||
                                (*(long *)(lVar20 + 0xc0) == *(long *)(*plVar19 + 0xc0)))
                        goto LAB_71006c4990;
                      }
                      else if (((((int)plVar19[0x7d] == (int)plVar40[0x7d]) &&
                                (plVar19[0x7c] == plVar40[0x7c])) &&
                               (iVar15 = FUN_71006ca3c0(plVar19[0x7a],plVar40[0x7a]), iVar15 != 0))
                              && (((*(uint *)((long)plVar19 + 0x624) ^
                                   *(uint *)((long)plVar40 + 0x624)) >> 0xf & 1) == 0)) {
                        if ((int)plVar19[0x7d] != 2) goto LAB_71006c4984;
                        if ((*(uint *)(plVar19[0xc9] + 0x84) & 1) == 0) {
                          cVar13 = FUN_71006b13f0(plVar2,plVar40 + 0xae);
                          if (cVar13 != '\0') {
                            iVar15 = (int)plVar40[0xa1];
                            goto joined_r0x0071006c50b0;
                          }
                        }
                        else {
                          cVar13 = FUN_71006b13f0(plVar19 + 0xb9,plVar40 + 0xb9);
                          if (cVar13 != '\0') {
                            iVar15 = (int)plVar40[0xa7];
joined_r0x0071006c50b0:
                            if (iVar15 == 2) goto LAB_71006c4984;
                          }
                        }
                      }
                    }
                  }
                  else if ((((int)plVar19[0x75] == (int)plVar40[0x75]) &&
                           (plVar19[0x74] == plVar40[0x74])) &&
                          (iVar15 = FUN_71006ca3c0(plVar19[0x72],plVar40[0x72]), iVar15 != 0)) {
                    if (((plVar19[0x76] == 0) == (plVar40[0x76] == 0)) &&
                       ((plVar40[0x76] == 0 || plVar19[0x76] == 0 ||
                        (iVar15 = FUN_710080aec0(), iVar15 == 0)))) {
                      if (((plVar19[0x77] == 0) == (plVar40[0x77] == 0)) &&
                         ((plVar40[0x77] == 0 || plVar19[0x77] == 0 ||
                          (iVar15 = FUN_710080aec0(), iVar15 == 0)))) {
                        uVar16 = *(uint *)((long)plVar19 + 0x624);
                        uVar25 = *(uint *)((long)plVar40 + 0x624);
                        goto LAB_71006c4748;
                      }
                    }
                  }
                }
              }
            }
LAB_71006c4754:
          } while (local_c0 != (undefined8 *)0x0);
          FUN_71006a9780(param_1);
          if ((cVar14 != '\0') && ((*(ulong *)(param_1 + 0xf60) >> 0x30 & 1) != 0)) {
            FUN_71006c08c0(param_1,"Found pending candidate for reuse and CURLOPT_PIPEWAIT is set\n"
                          );
            goto LAB_71006c51a4;
          }
          goto LAB_71006c4908;
        }
        iVar15 = *piVar24;
        cVar12 = cVar11;
        if (iVar15 != 0) {
LAB_71006c46bc:
          if (iVar15 == 2) {
            cVar14 = FUN_71006a3dd0(*(undefined8 *)(param_1 + 0xc0));
            if (cVar14 == '\0') {
              cVar12 = '\0';
              FUN_71006c08c0(param_1,"Could multiplex, but not asked to!\n");
              iVar15 = *piVar24;
            }
            else {
              iVar15 = *piVar24;
            }
          }
          if (iVar15 == -1) {
            cVar12 = '\0';
            FUN_71006c08c0(param_1,"Can not multiplex, even if we wanted to!\n");
          }
          goto LAB_71006c46cc;
        }
        if ((*(ulong *)(param_1 + 0xf60) >> 0x30 & 1) == 0) {
          FUN_71006c08c0(param_1,"Server doesn\'t support multiplex (yet)\n");
          iVar15 = *piVar24;
          cVar12 = '\0';
          goto LAB_71006c46bc;
        }
        FUN_71006c08c0(param_1,"Server doesn\'t support multiplex yet, wait\n");
        FUN_71006a9780(param_1);
LAB_71006c51a4:
        if ((*(uint *)(plVar19[0xc9] + 0x84) >> 8 & 1) == 0) goto LAB_71006c4944;
        uVar23 = *(ulong *)(param_1 + 0xf60);
        goto LAB_71006c491c;
      }
LAB_71006c51c8:
      FUN_71006a9780(param_1);
LAB_71006c4908:
      if ((*(uint *)(plVar19[0xc9] + 0x84) >> 8 & 1) != 0) {
        uVar23 = *(ulong *)(param_1 + 0xf60);
        goto LAB_71006c4918;
      }
    }
    else if ((*(uint *)(plVar19[0xc9] + 0x84) >> 8 & 1) != 0) {
LAB_71006c4918:
      cVar11 = '\0';
LAB_71006c491c:
      if ((uVar23 >> 0x2e & 1) != 0) {
        *(uint *)((long)plVar19 + 0x624) = *(uint *)((long)plVar19 + 0x624) | 0x20000000;
      }
      if ((uVar23 >> 0x2d & 1) != 0) {
        *(uint *)((long)plVar19 + 0x624) = *(uint *)((long)plVar19 + 0x624) | 0x10000000;
      }
      if (cVar11 != '\0') goto LAB_71006c4944;
    }
    lVar20 = FUN_71006a9810(plVar19,*(undefined8 *)(param_1 + 0x1120),&local_80);
    if ((uVar17 == 0 || lVar20 == 0) || (*(ulong *)(lVar20 + 8) < uVar17)) {
      FUN_71006a9780(param_1);
    }
    else {
      lVar20 = FUN_71006a9cb0(param_1,lVar20);
      FUN_71006a9780(param_1);
      if (lVar20 == 0) {
        FUN_71006c08c0(param_1,"No more connections allowed to host %s: %zu\n",local_80,uVar17);
        goto LAB_71006c4944;
      }
      FUN_71006c2330(param_1,lVar20,0);
    }
    if ((uVar18 != 0) && (uVar17 = FUN_71006a97a0(param_1), uVar18 <= uVar17)) {
      lVar20 = FUN_71006a9de0(param_1);
      if (lVar20 == 0) {
        FUN_71006c08c0(param_1,"No connections available in cache\n");
LAB_71006c4944:
        FUN_71006c08c0(param_1,"No connections available.\n");
        FUN_71006c1390(plVar19);
        return 0x59;
      }
      FUN_71006c2330(param_1,lVar20,0);
    }
    uVar16 = FUN_71006a98d0(*(undefined8 *)(param_1 + 0x1120),plVar19);
    plVar40 = plVar19;
    if (uVar16 != 0) goto LAB_71006c4094;
LAB_71006c4ee0:
    FUN_71006c2c00(param_1,plVar40);
    uVar16 = FUN_71006c15b0(param_1);
    if (uVar16 != 0) {
      if (uVar16 == 0x59) {
        return 0x59;
      }
      goto LAB_71006c3278;
    }
    lVar20 = *(long *)(param_1 + 0x758);
    plVar40[0xde] = *(long *)(param_1 + 0x6d0);
    plVar40[0xdf] = lVar20;
    uVar27 = FUN_71006a1800(param_1,0,1);
    uVar3 = *(uint *)((long)plVar40 + 0x624);
    uVar25 = uVar3 & 2;
    if ((uVar3 >> 1 & 1) == 0) {
      uVar16 = uVar25;
      if ((uVar3 >> 5 & 1) == 0) {
        plVar19 = plVar40 + 0x6c;
        if ((uVar3 & 8) == 0) {
          plVar19 = plVar40 + 0x66;
        }
        if ((uVar3 >> 4 & 1) == 0) {
          iVar15 = (int)plVar40[0x81];
        }
        else {
          iVar15 = *(int *)((long)plVar40 + 0x40c);
        }
        plVar40[0x80] = (long)iVar15;
        lVar20 = (*(code *)PTR_FUN_7100af36b8)(plVar19[2]);
        plVar40[0x6a] = lVar20;
        if (lVar20 == 0) {
LAB_71006c5264:
          uVar16 = 0x1b;
          goto LAB_71006c5070;
        }
        iVar15 = FUN_71006b82c0(plVar40,lVar20,(int)plVar40[0x80],&local_80,uVar27);
        if (iVar15 == 1) {
LAB_71006c5254:
          *param_2 = '\x01';
        }
        else if (iVar15 == -2) {
LAB_71006c524c:
          uVar16 = 0x1c;
        }
        else if (local_80 == (char *)0x0) {
          FUN_71006c0a00(param_1,"Couldn\'t resolve host \'%s\'",plVar19[3]);
          uVar16 = 6;
        }
      }
      else {
        plVar19 = plVar40 + 0x78;
        if ((uVar3 & 0x80) != 0) {
          plVar19 = plVar40 + 0x70;
        }
        lVar20 = (*(code *)PTR_FUN_7100af36b8)(plVar19[2]);
        plVar40[0x6a] = lVar20;
        if (lVar20 == 0) goto LAB_71006c5264;
        iVar15 = FUN_71006b82c0(plVar40,lVar20,(int)plVar40[0x80],&local_80,uVar27);
        if (iVar15 == 1) goto LAB_71006c5254;
        if (iVar15 == -2) goto LAB_71006c524c;
        if (local_80 == (char *)0x0) {
          uVar16 = 5;
          FUN_71006c0a00(param_1,"Couldn\'t resolve proxy \'%s\'",plVar19[3]);
        }
      }
      plVar40[0x5b] = (long)local_80;
    }
    else {
      *param_2 = '\0';
    }
LAB_71006c5070:
    FUN_71006c1720(plVar40 + 0x66);
    uVar25 = *(uint *)((long)plVar40 + 0x624);
    if ((uVar25 >> 6 & 1) != 0) {
      FUN_71006c1720(plVar40 + 0x78);
      uVar25 = *(uint *)((long)plVar40 + 0x624);
    }
    if ((uVar25 >> 7 & 1) != 0) {
      FUN_71006c1720(plVar40 + 0x70);
      uVar25 = *(uint *)((long)plVar40 + 0x624);
    }
    if ((uVar25 >> 3 & 1) != 0) {
      FUN_71006c1720(plVar40 + 0x6c);
    }
    if (uVar16 != 0) goto LAB_71006c3278;
LAB_71006c4c00:
    if (plVar40[0xdd] != 0) {
      *param_3 = 1;
      goto LAB_71006c3bb8;
    }
    if (*param_2 != '\0') goto LAB_71006c3bb8;
    uVar16 = FUN_71006c2aa0(plVar40,param_3);
  }
  else {
    if ((*(uint *)((long)plVar19 + 0x624) >> 9 & 1) == 0) {
LAB_71006c3144:
      pcVar21 = (char *)(*(code *)PTR_FUN_7100af36b8)(pcVar21);
      if (pcVar21 != (char *)0x0) goto LAB_71006c3160;
      uVar16 = 0x1b;
      local_f0 = (char *)0x0;
      FUN_71006c0a00(lVar20,"memory shortage");
      goto LAB_71006c3248;
    }
LAB_71006c3a58:
    uVar16 = FUN_71006c1770(lVar20,plVar19);
    if (uVar16 == 0) goto LAB_71006c3a6c;
LAB_71006c3be8:
    pcVar21 = (char *)0x0;
    local_f0 = (char *)0x0;
LAB_71006c3248:
    (*(code *)PTR_FUN_7100af36a0)(local_f0);
    (*(code *)PTR_FUN_7100af36a0)(pcVar21);
  }
  if (uVar16 == 0x59) {
    return 0x59;
  }
  if (uVar16 == 0) {
LAB_71006c3bb8:
    if (*(long *)(param_1 + 0x10) == 0) {
      FUN_71006a3df0(param_1,plVar40);
      return 0;
    }
    return 0;
  }
LAB_71006c3278:
  FUN_71006c2330(param_1,plVar40,1);
  return uVar16;
}



// ===== FUN_71006c52f0 @ 71006c52f0 (size=264) =====

undefined1 * FUN_71006c52f0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  byte *local_10;
  long local_8;
  
  puVar5 = (undefined1 *)0x0;
  local_10 = (byte *)0x0;
  iVar1 = FUN_710069f7f0(param_1,param_2,0,&local_10,&local_8,0);
  if (local_10 != (byte *)0x0 && iVar1 == 0) {
    puVar5 = (undefined1 *)(*(code *)PTR_FUN_7100af36a8)(local_8 * 2 + 1);
    if (puVar5 != (undefined1 *)0x0) {
      uVar4 = (ulong)*local_10;
      if (*local_10 == 0) {
        *puVar5 = 0;
      }
      else {
        iVar1 = 0;
        pbVar2 = local_10;
        do {
          while( true ) {
            uVar3 = (uint)uVar4;
            if (0x27 < uVar3) break;
            if ((0x85fffffffeU >> (uVar4 & 0x3f) & 1) != 0) {
LAB_71006c5370:
              puVar5[iVar1] = 0x5c;
              iVar1 = iVar1 + 1;
            }
            puVar5[iVar1] = (char)uVar4;
            iVar1 = iVar1 + 1;
            pbVar2 = pbVar2 + 1;
            uVar4 = (ulong)*pbVar2;
            if (*pbVar2 == 0) goto LAB_71006c53b8;
          }
          if ((uVar3 == 0x5c) || (uVar3 == 0x7f)) goto LAB_71006c5370;
          puVar5[iVar1] = (char)uVar4;
          iVar1 = iVar1 + 1;
          pbVar2 = pbVar2 + 1;
          uVar4 = (ulong)*pbVar2;
        } while (*pbVar2 != 0);
LAB_71006c53b8:
        puVar5[iVar1] = 0;
      }
    }
    (*(code *)PTR_FUN_7100af36a0)(local_10);
  }
  return puVar5;
}



// ===== FUN_71006c58a0 @ 71006c58a0 (size=8) =====

undefined8 FUN_71006c58a0(void)

{
  return 0;
}



// ===== FUN_71006c58b0 @ 71006c58b0 (size=268) =====

undefined8
FUN_71006c58b0(int param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
              undefined4 param_6)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  if (param_4 == 0 || param_1 != 2) {
    return 0;
  }
  uVar3 = FUN_710081ce00(param_4);
  if ((uVar3 < 0x10) && (iVar1 = FUN_710076b8e0(2,1,0), iVar1 != -1)) {
    local_20 = 0;
    uStack_18 = 0;
    local_10 = 0;
    uStack_8 = 0;
    uVar4 = FUN_710080f900(&local_20,param_4,uVar3 + 1);
    local_10._0_2_ = CONCAT11(2,(undefined1)local_10);
    iVar2 = FUN_710076bf30(iVar1,0xc0206921,uVar4);
    if (-1 < iVar2) {
      local_28[0] = local_10._4_4_;
      FUN_710076c470(local_10._1_1_,local_28,param_5,param_6);
      FUN_710081f680(iVar1);
      return 2;
    }
    FUN_710081f680(iVar1);
  }
  return 0;
}



// ===== FUN_71006c59c0 @ 71006c59c0 (size=16) =====

void FUN_71006c59c0(long param_1)

{
  *(undefined8 *)(param_1 + 0x1128) = 0;
  *(undefined8 *)(param_1 + 0x1130) = 0;
  return;
}



// ===== FUN_71006c59d0 @ 71006c59d0 (size=204) =====

undefined8 FUN_71006c59d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x7c8);
  if ((-1 < *(long *)(param_1 + 0xfc0)) && (*(long *)(param_1 + 2000) != 0)) {
    if (*(long *)(param_1 + 0xfc0) < lVar1) {
      if (*(long *)(param_1 + 0x1128) == 0) {
        *(undefined8 *)(param_1 + 0x1128) = param_2;
        *(undefined8 *)(param_1 + 0x1130) = param_3;
        goto LAB_71006c5a20;
      }
      lVar1 = FUN_71006b7490(param_2,param_3,*(undefined8 *)(param_1 + 0x1128),
                             *(undefined8 *)(param_1 + 0x1130));
      if (lVar1 + *(long *)(param_1 + 2000) * -1000 < 0 ==
          SBORROW8(lVar1,*(long *)(param_1 + 2000) * 1000)) {
        FUN_71006c0a00(param_1,
                       "Operation too slow. Less than %ld bytes/sec transferred the last %ld seconds"
                       ,*(undefined8 *)(param_1 + 0x7c8));
        return 0x1c;
      }
      lVar1 = *(long *)(param_1 + 0x7c8);
    }
    else {
      *(undefined8 *)(param_1 + 0x1128) = 0;
    }
  }
  if (lVar1 == 0) {
    return 0;
  }
LAB_71006c5a20:
  FUN_71006a42b0(param_1,1000,8);
  return 0;
}



// ===== FUN_71006c5aa0 @ 71006c5aa0 (size=60) =====

undefined8 FUN_71006c5aa0(void)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (char *)FUN_7100806660();
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    uVar2 = (*(code *)PTR_FUN_7100af36b8)();
    return uVar2;
  }
  return 0;
}



// ===== FUN_71006c5ae0 @ 71006c5ae0 (size=88) =====

undefined8 FUN_71006c5ae0(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*param_1 + 0x1d0);
  if (lVar2 != 0) {
    FUN_71006a8740(*(undefined8 *)(lVar2 + 0x1cb0));
    uVar1 = *(undefined8 *)(*param_1 + 0x1d0);
    *(undefined8 *)(lVar2 + 0x1cb0) = 0;
    (*(code *)PTR_FUN_7100af36a0)(uVar1);
    *(undefined8 *)(*param_1 + 0x1d0) = 0;
  }
  return 0;
}



// ===== FUN_71006c5b40 @ 71006c5b40 (size=656) =====

undefined8 FUN_71006c5b40(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  lVar6 = *param_1;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  local_180 = 0;
  uStack_178 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  uStack_28 = 0;
  local_30 = 0;
  uStack_18 = 0;
  uStack_20 = 0;
  uStack_8 = 0;
  local_10 = 0;
  lVar5 = *(long *)(lVar6 + 0x1d0);
  if ((*(uint *)((long)param_1 + 0x624) >> 8 & 1) != 0) {
    FUN_710069fb80(&local_100,0x100,"USER,%s",param_1[0x90]);
    lVar2 = FUN_71006a8670(*(undefined8 *)(lVar5 + 0x1cb0),&local_100);
    if (lVar2 == 0) {
      FUN_71006a8740(*(undefined8 *)(lVar5 + 0x1cb0));
      *(undefined8 *)(lVar5 + 0x1cb0) = 0;
      return 0x1b;
    }
    *(long *)(lVar5 + 0x1cb0) = lVar2;
    *(undefined4 *)(lVar5 + 0x8a4) = 1;
  }
  puVar3 = *(undefined8 **)(lVar6 + 0xa00);
  while( true ) {
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    iVar1 = FUN_7100822f40(*puVar3,"%127[^= ]%*[ =]%255s",&local_180,&local_100);
    if (iVar1 != 2) break;
    iVar1 = FUN_71006ca300(&local_180,"TTYPE");
    if (iVar1 == 0) {
      iVar1 = FUN_71006ca300(&local_180,"XDISPLOC");
      if (iVar1 == 0) {
        iVar1 = FUN_71006ca300(&local_180,"NEW_ENV");
        if (iVar1 == 0) {
          iVar1 = FUN_71006ca300(&local_180,&DAT_7100848318);
          if (iVar1 == 0) {
            iVar1 = FUN_71006ca300(&local_180,"BINARY");
            if (iVar1 == 0) {
              uVar4 = 0x30;
              FUN_71006c0a00(lVar6,"Unknown telnet option %s",*puVar3);
              goto LAB_71006c5cbc;
            }
            iVar1 = FUN_710081b3c0(&local_100);
            if (iVar1 != 1) {
              *(undefined4 *)(lVar5 + 0x808) = 0;
              *(undefined4 *)(lVar5 + 0x1408) = 0;
            }
          }
          else {
            iVar1 = FUN_7100822f40(&local_100,"%hu%*[xX]%hu",lVar5 + 0x1ca8,lVar5 + 0x1caa);
            if (iVar1 != 2) break;
            *(undefined4 *)(lVar5 + 0x884) = 1;
          }
        }
        else {
          lVar2 = FUN_71006a8670(*(undefined8 *)(lVar5 + 0x1cb0),&local_100);
          if (lVar2 == 0) {
            uVar4 = 0x1b;
            goto LAB_71006c5cbc;
          }
          *(long *)(lVar5 + 0x1cb0) = lVar2;
          *(undefined4 *)(lVar5 + 0x8a4) = 1;
        }
      }
      else {
        FUN_710081f760(lVar5 + 0x1c28,&local_100,0x7f);
        *(undefined1 *)(lVar5 + 0x1ca7) = 0;
        *(undefined4 *)(lVar5 + 0x894) = 1;
      }
    }
    else {
      FUN_710081f760(lVar5 + 0x1c08,&local_100,0x1f);
      *(undefined1 *)(lVar5 + 0x1c27) = 0;
      *(undefined4 *)(lVar5 + 0x868) = 1;
    }
    puVar3 = (undefined8 *)puVar3[1];
  }
  uVar4 = 0x31;
  FUN_71006c0a00(lVar6,"Syntax error in telnet option: %s",*puVar3);
LAB_71006c5cbc:
  FUN_71006a8740(*(undefined8 *)(lVar5 + 0x1cb0));
  *(undefined8 *)(lVar5 + 0x1cb0) = 0;
  return uVar4;
}



// ===== FUN_71006c5dd0 @ 71006c5dd0 (size=456) =====

int FUN_71006c5dd0(long param_1,char *param_2,long param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  long local_10;
  undefined4 local_8;
  undefined2 local_4;
  
  if (param_3 < 1) {
    return 0;
  }
  pcVar1 = param_2 + param_3;
  lVar8 = 0;
  pcVar4 = param_2;
  do {
    pcVar6 = pcVar4 + 1;
    if (*pcVar4 == -1) {
      lVar8 = lVar8 + 1;
    }
    pcVar4 = pcVar6;
  } while (pcVar1 != pcVar6);
  lVar8 = lVar8 + param_3;
  pcVar4 = param_2;
  if (param_3 != lVar8) {
    pcVar4 = (char *)(*(code *)PTR_FUN_7100af36a8)(lVar8 + 1);
    if (pcVar4 == (char *)0x0) {
      return 0x1b;
    }
    lVar7 = 0;
    pcVar6 = param_2;
    do {
      while( true ) {
        cVar2 = *pcVar6;
        lVar5 = lVar7 + 1;
        pcVar4[lVar7] = cVar2;
        if (cVar2 != -1) break;
        pcVar6 = pcVar6 + 1;
        pcVar4[lVar5] = -1;
        lVar5 = lVar7 + 2;
        lVar7 = lVar5;
        if (pcVar1 == pcVar6) goto LAB_71006c5e8c;
      }
      pcVar6 = pcVar6 + 1;
      lVar7 = lVar5;
    } while (pcVar1 != pcVar6);
LAB_71006c5e8c:
    pcVar4[lVar5] = '\0';
  }
  lVar7 = 0;
  do {
    local_8 = *(undefined4 *)(param_1 + 0x4d8);
    local_4 = 4;
    iVar3 = FUN_71006a6f40(&local_8,1,0xffffffff);
    if (iVar3 + 1U < 2) {
      iVar3 = 0x37;
      break;
    }
    local_10 = 0;
    iVar3 = FUN_71006c0660(param_1,*(undefined4 *)(param_1 + 0x4d8),pcVar4 + lVar7,lVar8 - lVar7,
                           &local_10);
    lVar7 = lVar7 + local_10;
  } while ((iVar3 == 0 && lVar8 != lVar7) && (iVar3 != 0 || lVar7 <= lVar8));
  if (param_2 != pcVar4) {
    (*(code *)PTR_FUN_7100af36a0)(pcVar4);
    return iVar3;
  }
  return iVar3;
}



// ===== FUN_71006c5fa0 @ 71006c5fa0 (size=1036) =====

void FUN_71006c5fa0(undefined8 param_1,int param_2,byte *param_3,ulong param_4)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  
  puVar1 = &DAT_7100848380;
  if (param_2 != 0x3c) {
    puVar1 = &DAT_7100848388;
  }
  FUN_71006c08c0(param_1,"%s IAC SB ",puVar1);
  uVar3 = param_4 - 2;
  if (param_4 < 2 || uVar3 == 0) {
    uVar6 = 0;
    if (uVar3 == 0) {
      FUN_71006c08c0(param_1,"(Empty suboption?)");
      return;
    }
LAB_71006c6068:
    bVar4 = *param_3;
    if (0x27 < bVar4) goto LAB_71006c6018;
LAB_71006c6074:
    uVar5 = bVar4 - 0x18 & 0xff;
    if ((uVar5 < 0x10) && ((0x8881UL >> ((ulong)uVar5 & 0x3f) & 1) != 0)) {
      FUN_71006c08c0(param_1,"%s",(&PTR_s_BINARY_7100ae37e8)[(int)(uint)bVar4]);
    }
    else {
      FUN_71006c08c0(param_1,"%s (unsupported)",(&PTR_s_BINARY_7100ae37e8)[(int)(uint)bVar4]);
    }
    bVar4 = *param_3;
  }
  else {
    bVar4 = param_3[uVar3];
    uVar6 = (ulong)bVar4;
    bVar2 = param_3[param_4 - 1];
    if (bVar4 != 0xff || bVar2 != 0xf0) {
      FUN_71006c08c0(param_1,"(terminated by ");
      uVar5 = (uint)bVar4;
      if (bVar4 < 0x28) {
        FUN_71006c08c0(param_1,&DAT_7100847598,(&PTR_s_BINARY_7100ae37e8)[uVar5]);
      }
      else if (uVar5 - 0xec < 0x14) {
        FUN_71006c08c0(param_1,&DAT_7100847598,(&PTR_DAT_7100ae3748)[uVar5 - 0xec]);
      }
      else {
        FUN_71006c08c0(param_1,&DAT_71008483b0,uVar5);
      }
      uVar5 = (uint)bVar2;
      if (bVar2 < 0x28) {
        FUN_71006c08c0(param_1,"%s",(&PTR_s_BINARY_7100ae37e8)[(int)uVar5]);
      }
      else if (uVar5 - 0xec < 0x14) {
        FUN_71006c08c0(param_1,"%s",(&PTR_DAT_7100ae3748)[(int)(uVar5 - 0xec)]);
      }
      else {
        FUN_71006c08c0(param_1,"%d",uVar5);
      }
      FUN_71006c08c0(param_1,", not IAC SE!) ");
      goto LAB_71006c6068;
    }
    bVar4 = *param_3;
    uVar6 = 0xff;
    if (bVar4 < 0x28) goto LAB_71006c6074;
LAB_71006c6018:
    FUN_71006c08c0(param_1,"%d (unknown)",param_3[uVar6]);
    bVar4 = *param_3;
  }
  if (bVar4 == 0x1f) {
    if (4 < uVar3) {
      FUN_71006c08c0(param_1,"Width: %d ; Height: %d",
                     (uint)(*(ushort *)(param_3 + 1) >> 8) |
                     (*(ushort *)(param_3 + 1) & 0xff00ff) << 8,
                     (uint)(*(ushort *)(param_3 + 3) >> 8) |
                     (*(ushort *)(param_3 + 3) & 0xff00ff) << 8);
    }
    goto LAB_71006c6040;
  }
  bVar2 = param_3[1];
  if (bVar2 == 2) {
    FUN_71006c08c0(param_1," INFO/REPLY");
    bVar4 = *param_3;
  }
  else if (bVar2 < 3) {
    if (bVar2 == 0) {
      FUN_71006c08c0(param_1,&DAT_7100848420);
      bVar4 = *param_3;
    }
    else {
      FUN_71006c08c0(param_1," SEND");
      bVar4 = *param_3;
    }
  }
  else if (bVar2 == 3) {
    FUN_71006c08c0(param_1," NAME");
    bVar4 = *param_3;
  }
  if (bVar4 != 0x23) {
    if (bVar4 == 0x27) {
      if ((param_3[1] == 0) && (FUN_71006c08c0(param_1,&DAT_710083a5b8), 3 < uVar3)) {
        uVar6 = 3;
        do {
          if (param_3[uVar6] == 0) {
            FUN_71006c08c0(param_1,&DAT_7100838888);
          }
          else if (param_3[uVar6] == 1) {
            FUN_71006c08c0(param_1,&DAT_7100848450);
          }
          else {
            FUN_71006c08c0(param_1,"%c");
          }
          uVar6 = (ulong)((int)uVar6 + 1);
        } while (uVar6 < uVar3);
      }
      goto LAB_71006c6040;
    }
    if (bVar4 != 0x18) {
      uVar5 = 2;
      uVar6 = 2;
      if (2 < uVar3) {
        do {
          FUN_71006c08c0(param_1," %.2x",param_3[uVar6]);
          if (uVar3 <= uVar5 + 1) break;
          FUN_71006c08c0(param_1," %.2x",param_3[uVar5 + 1]);
          uVar5 = uVar5 + 2;
          uVar6 = (ulong)uVar5;
        } while (uVar6 < uVar3);
      }
      goto LAB_71006c6040;
    }
  }
  param_3[uVar3] = 0;
  FUN_71006c08c0(param_1," \"%s\"",param_3 + 2);
LAB_71006c6040:
  FUN_71006c08c0(param_1,&DAT_71008542a0);
  return;
}



// ===== FUN_71006c63b0 @ 71006c63b0 (size=236) =====

void FUN_71006c63b0(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined *puVar1;
  
  if (param_3 == 0xfe) {
    puVar1 = &DAT_7100848478;
  }
  else {
    if (param_3 == 0xff) {
      if (param_4 - 0xecU < 0x14) {
        FUN_71006c08c0(param_1,"%s IAC %s\n",param_2,(&PTR_DAT_7100ae3748)[(int)(param_4 - 0xecU)]);
        return;
      }
      FUN_71006c08c0(param_1,"%s IAC %d\n",param_2);
      return;
    }
    if (param_3 == 0xfc) {
      puVar1 = &DAT_7100848468;
    }
    else if (param_3 == 0xfd) {
      puVar1 = &DAT_7100848470;
    }
    else {
      puVar1 = &DAT_7100848460;
    }
  }
  if (param_4 < 0x28) {
    if ((&PTR_s_BINARY_7100ae37e8)[param_4] != (undefined *)0x0) {
      FUN_71006c08c0(param_1,"%s %s %s\n",param_2,puVar1,(&PTR_s_BINARY_7100ae37e8)[param_4]);
      return;
    }
  }
  else if (param_4 == 0xff) {
    FUN_71006c08c0(param_1,"%s %s %s\n",param_2,puVar1,"EXOPL");
    return;
  }
  FUN_71006c08c0(param_1,"%s %s %d\n",param_2,puVar1);
  return;
}



// ===== FUN_71006c64a0 @ 71006c64a0 (size=152) =====

void FUN_71006c64a0(long *param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  
  local_8 = 0xff;
  local_7 = (undefined1)param_2;
  local_6 = (undefined1)param_3;
  lVar3 = *param_1;
  lVar1 = FUN_710076ba50((int)param_1[0x9b],&local_8,3,0x20000);
  if (lVar1 < 0) {
    puVar2 = (undefined4 *)FUN_710080e8e0();
    FUN_71006c0a00(lVar3,"Sending data failed (%d)",*puVar2);
  }
  if (((uint)*(undefined8 *)(*param_1 + 0xf60) >> 0x1e & 1) != 0) {
    FUN_71006c63b0(*param_1,&DAT_7100848388,param_2,param_3);
  }
  return;
}



// ===== FUN_71006c6540 @ 71006c6540 (size=316) =====

void FUN_71006c6540(long *param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  lVar4 = *(long *)(lVar5 + 0x1d0);
  if (param_2 == 0x1f) {
    *(undefined2 *)(lVar4 + 0x1cb8) = 0xfaff;
    *(undefined1 *)(lVar4 + 0x1cba) = 0x1f;
    lVar2 = lVar4 + 0x1cb8;
    *(undefined2 *)(lVar4 + 0x1cbf) = 0xf0ff;
    *(ushort *)(lVar4 + 0x1cbb) =
         *(ushort *)(lVar4 + 0x1ca8) >> 8 | (ushort)((*(ushort *)(lVar4 + 0x1ca8) & 0xff00ff) << 8);
    *(ushort *)(lVar4 + 0x1cbd) =
         *(ushort *)(lVar4 + 0x1caa) >> 8 | (ushort)((*(ushort *)(lVar4 + 0x1caa) & 0xff00ff) << 8);
    uVar1 = *(undefined8 *)(lVar5 + 0xf60);
    *(long *)(lVar4 + 0x1eb8) = lVar2;
    *(long *)(lVar4 + 0x1ec0) = lVar4 + 0x1cc1;
    if (((uint)uVar1 >> 0x1e & 1) != 0) {
      FUN_71006c5fa0(lVar5,0x3e,lVar4 + 0x1cba,((lVar4 + 0x1cc1) - lVar2) + -2);
    }
    lVar2 = FUN_710076ba50((int)param_1[0x9b],lVar2,3,0x20000);
    if (lVar2 < 0) {
      puVar3 = (undefined4 *)FUN_710080e8e0();
      FUN_71006c0a00(lVar5,"Sending data failed (%d)",*puVar3);
    }
    FUN_71006c5dd0(param_1,lVar4 + 0x1cbb,4);
    lVar4 = FUN_710076ba50((int)param_1[0x9b],lVar4 + 0x1cbf,2,0x20000);
    if (lVar4 < 0) {
      puVar3 = (undefined4 *)FUN_710080e8e0();
      FUN_71006c0a00(lVar5,"Sending data failed (%d)",*puVar3);
      return;
    }
  }
  return;
}



// ===== FUN_71006c6680 @ 71006c6680 (size=820) =====

void FUN_71006c6680(long *param_1)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined4 *puVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 local_900;
  undefined8 uStack_8f8;
  undefined8 local_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 local_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 local_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 local_890;
  undefined8 uStack_888;
  undefined8 local_880;
  undefined8 uStack_878;
  undefined8 local_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 local_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 local_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 local_810;
  undefined8 uStack_808;
  undefined1 auStack_800 [2048];
  
  lVar8 = *param_1;
  uStack_8e8 = 0;
  local_8f0 = 0;
  uStack_8d8 = 0;
  uStack_8e0 = 0;
  lVar7 = *(long *)(lVar8 + 0x1d0);
  uStack_868 = 0;
  local_870 = 0;
  uStack_858 = 0;
  uStack_860 = 0;
  uStack_8c8 = 0;
  local_8d0 = 0;
  uStack_8b8 = 0;
  uStack_8c0 = 0;
  uStack_848 = 0;
  local_850 = 0;
  uStack_838 = 0;
  uStack_840 = 0;
  uStack_8a8 = 0;
  local_8b0 = 0;
  uStack_898 = 0;
  uStack_8a0 = 0;
  uStack_828 = 0;
  local_830 = 0;
  uStack_818 = 0;
  uStack_820 = 0;
  uStack_808 = 0;
  local_810 = 0;
  uStack_888 = 0;
  local_890 = 0;
  local_900 = 0;
  uStack_8f8 = 0;
  local_880 = 0;
  uStack_878 = 0;
  pcVar6 = *(char **)(lVar7 + 0x1eb8);
  if (((uint)*(undefined8 *)(lVar8 + 0xf60) >> 0x1e & 1) != 0) {
    FUN_71006c5fa0(lVar8,0x3c,lVar7 + 0x1cb8,(*(long *)(lVar7 + 0x1ec0) - (long)pcVar6) + 2);
    pcVar6 = *(char **)(lVar7 + 0x1eb8);
  }
  *(char **)(lVar7 + 0x1eb8) = pcVar6 + 1;
  cVar2 = *pcVar6;
  if (cVar2 == '#') {
    lVar7 = lVar7 + 0x1c28;
  }
  else {
    if (cVar2 == '\'') {
      FUN_710069fb80(auStack_800,0x800,"%c%c%c%c",0xff,0xfa,0x27,0);
      puVar10 = *(undefined8 **)(lVar7 + 0x1cb0);
      if (puVar10 == (undefined8 *)0x0) {
        lVar7 = 6;
        lVar4 = 0x7fc;
        uVar9 = 4;
      }
      else {
        uVar9 = 4;
LAB_71006c6850:
        do {
          uVar11 = *puVar10;
          lVar7 = FUN_710081ce00(uVar11);
          uVar1 = lVar7 + uVar9 + 1;
          if (uVar1 < 0x7fa) {
            iVar3 = FUN_7100822f40(uVar11,"%127[^,],%127s",&local_900,&local_880);
            if (iVar3 != 0) {
              FUN_710069fb80(auStack_800 + uVar9,0x800 - uVar9,"%c%s%c%s",0,&local_900,1,&local_880)
              ;
              puVar10 = (undefined8 *)puVar10[1];
              uVar9 = uVar1;
              if (puVar10 == (undefined8 *)0x0) break;
              goto LAB_71006c6850;
            }
          }
          puVar10 = (undefined8 *)puVar10[1];
        } while (puVar10 != (undefined8 *)0x0);
        lVar7 = uVar9 + 2;
        lVar4 = 0x800 - uVar9;
      }
      FUN_710069fb80(auStack_800 + uVar9,lVar4,&DAT_7100848518,0xff,0xf0);
      lVar7 = FUN_710076ba50((int)param_1[0x9b],auStack_800,lVar7,0x20000);
      if (lVar7 < 0) {
        puVar5 = (undefined4 *)FUN_710080e8e0();
        FUN_71006c0a00(lVar8,"Sending data failed (%d)",*puVar5);
      }
      if (((uint)*(undefined8 *)(lVar8 + 0xf60) >> 0x1e & 1) != 0) {
        FUN_71006c5fa0(lVar8,0x3e,auStack_800 + 2,uVar9);
        return;
      }
      return;
    }
    if (cVar2 != '\x18') {
      return;
    }
    lVar7 = lVar7 + 0x1c08;
  }
  lVar4 = FUN_710081ce00(lVar7);
  FUN_710069fb80(auStack_800,0x800,"%c%c%c%c%s%c%c",0xff,0xfa,cVar2,0,lVar7,0xff,0xf0);
  lVar7 = FUN_710076ba50((int)param_1[0x9b],auStack_800,lVar4 + 6,0x20000);
  if (lVar7 < 0) {
    puVar5 = (undefined4 *)FUN_710080e8e0();
    FUN_71006c0a00(lVar8,"Sending data failed (%d)",*puVar5);
  }
  if (((uint)*(undefined8 *)(lVar8 + 0xf60) >> 0x1e & 1) != 0) {
    FUN_71006c5fa0(lVar8,0x3e,auStack_800 + 2,lVar4 + 4);
    return;
  }
  return;
}



// ===== FUN_71006c69c0 @ 71006c69c0 (size=3012) =====

int FUN_71006c69c0(long *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  undefined8 uVar14;
  int *piVar15;
  long lVar16;
  long lVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 *puVar20;
  long lVar21;
  uint uVar22;
  ulong uVar23;
  undefined1 auVar24 [16];
  int local_6c;
  long local_18;
  undefined4 local_10;
  undefined2 local_c;
  ushort local_a;
  undefined4 local_8;
  undefined2 local_4;
  ushort local_2;
  
  puVar7 = PTR_FUN_7100af3698;
  lVar16 = *param_1;
  uVar2 = (undefined4)param_1[0x9b];
  lVar17 = *(long *)(lVar16 + 0x1150);
  *param_2 = 1;
  lVar10 = (*(code *)puVar7)(1,0x1ed0);
  if (lVar10 == 0) {
    return 0x1b;
  }
  *(long *)(*param_1 + 0x1d0) = lVar10;
  *(undefined4 *)(lVar10 + 0x808) = 1;
  *(undefined4 *)(lVar10 + 0x814) = 1;
  *(undefined8 *)(lVar10 + 0x1408) = 0x100000001;
  *(undefined4 *)(lVar10 + 0x1414) = 1;
  *(undefined4 *)(lVar10 + 0x1884) = 1;
  *(long *)(lVar10 + 0x1eb8) = lVar10 + 0x1cb8;
  *(undefined4 *)(lVar10 + 0x1ec8) = 0;
  piVar15 = *(int **)(lVar16 + 0x1d0);
  iVar8 = FUN_71006c5b40(param_1);
  if (iVar8 != 0) {
    return iVar8;
  }
  local_c = 1;
  local_10 = uVar2;
  if ((*(ulong *)(lVar16 + 0xf60) & 1) == 0) {
    uVar18 = 2;
    uVar19 = 1000;
    local_8 = FUN_710080e920(*(undefined8 *)(lVar16 + 0x15b8));
    local_6c = 2;
    local_4 = 1;
  }
  else {
    uVar18 = 1;
    uVar19 = 100;
    local_6c = 1;
  }
  iVar8 = 0;
LAB_71006c6a98:
  iVar9 = FUN_71006a6f40(&local_10,uVar18,uVar19);
  if (iVar9 != -1) {
    if (iVar9 == 0) {
      local_a = 0;
      local_2 = 0;
      goto LAB_71006c6abc;
    }
    if ((local_a & 1) == 0) goto LAB_71006c6abc;
    bVar6 = true;
    iVar8 = FUN_71006c0760(param_1,uVar2,lVar17,*(undefined8 *)(lVar16 + 0xbb0),&local_18);
    if (((iVar8 != 0x51) && (bVar6 = false, iVar8 == 0)) && (0 < local_18)) {
      FUN_71006b8e90(lVar16);
      lVar1 = local_18;
      lVar21 = *param_1;
      lVar10 = 0;
      puVar20 = *(undefined4 **)(lVar21 + 0x1d0);
      if (local_18 != 0) {
        iVar8 = -1;
LAB_71006c6c30:
        uVar3 = puVar20[0x7b2];
        iVar9 = (int)lVar10;
        bVar5 = *(byte *)(lVar17 + lVar10);
        uVar22 = (uint)bVar5;
        if (uVar3 == 4) {
          if (((uint)*(undefined8 *)(lVar21 + 0xf60) >> 0x1e & 1) != 0) {
            FUN_71006c63b0(lVar21,&DAT_7100848380,0xfd,bVar5);
          }
          lVar13 = *(long *)(*param_1 + 0x1d0) + (ulong)bVar5 * 4;
          *puVar20 = 1;
          iVar4 = *(int *)(lVar13 + 8);
          if (iVar4 == 2) {
            if (*(int *)(lVar13 + 0x408) == 0) {
              iVar4 = *(int *)(lVar13 + 0x1808);
              *(undefined4 *)(lVar13 + 8) = 1;
joined_r0x0071006c7388:
              if (iVar4 == 1) {
LAB_71006c738c:
                FUN_71006c6540(param_1,bVar5);
              }
            }
            else if (*(int *)(lVar13 + 0x408) == 1) {
              *(undefined4 *)(lVar13 + 0x1008) = 0;
              *(undefined4 *)(lVar13 + 8) = 3;
              FUN_71006c64a0(param_1,0xfc,bVar5);
            }
          }
          else if (iVar4 == 3) {
            if (*(int *)(lVar13 + 0x408) == 0) {
              *(undefined4 *)(lVar13 + 8) = 0;
            }
            else if (*(int *)(lVar13 + 0x408) == 1) {
              *(undefined4 *)(lVar13 + 8) = 1;
              *(undefined4 *)(lVar13 + 0x408) = 0;
            }
          }
          else if (iVar4 == 0) {
            if (*(int *)(lVar13 + 0x808) == 1) {
              *(undefined4 *)(lVar13 + 8) = 1;
              FUN_71006c64a0(param_1,0xfb,bVar5);
              iVar4 = *(int *)(lVar13 + 0x1808);
              goto joined_r0x0071006c7388;
            }
            if (*(int *)(lVar13 + 0x1808) == 1) {
              *(undefined4 *)(lVar13 + 8) = 1;
              FUN_71006c64a0(param_1,0xfb,bVar5);
              goto LAB_71006c738c;
            }
            FUN_71006c64a0(param_1,0xfc,bVar5);
          }
        }
        else {
          if (4 < uVar3) {
            if (uVar3 == 7) {
              if (uVar22 == 0xff) {
                puVar20[0x7b2] = 8;
              }
              else {
                pbVar12 = *(byte **)(puVar20 + 0x7ae);
                if (pbVar12 < puVar20 + 0x7ae) {
                  *(byte **)(puVar20 + 0x7ae) = pbVar12 + 1;
                  *pbVar12 = bVar5;
                }
              }
            }
            else if (uVar3 < 8) {
              if (uVar3 == 5) {
                if (((uint)*(undefined8 *)(lVar21 + 0xf60) >> 0x1e & 1) != 0) {
                  FUN_71006c63b0(lVar21,&DAT_7100848380,0xfe,bVar5);
                }
                lVar13 = *(long *)(*param_1 + 0x1d0) + (ulong)bVar5 * 4;
                *puVar20 = 1;
                iVar4 = *(int *)(lVar13 + 8);
                if (iVar4 == 2) {
                  if (*(int *)(lVar13 + 0x408) == 0) {
LAB_71006c7370:
                    *(undefined4 *)(lVar13 + 8) = 0;
                  }
                  else if (*(int *)(lVar13 + 0x408) == 1) {
                    *(undefined4 *)(lVar13 + 8) = 0;
                    *(undefined4 *)(lVar13 + 0x408) = 0;
                  }
                }
                else if (iVar4 == 3) {
                  if (*(int *)(lVar13 + 0x408) == 0) goto LAB_71006c7370;
                  if (*(int *)(lVar13 + 0x408) == 1) {
                    *(undefined4 *)(lVar13 + 0x408) = 0;
                    *(undefined4 *)(lVar13 + 8) = 2;
                    FUN_71006c64a0(param_1,0xfb,bVar5);
                  }
                }
                else if (iVar4 == 1) {
                  *(undefined4 *)(lVar13 + 8) = 0;
                  FUN_71006c64a0(param_1,0xfc,bVar5);
                }
                goto LAB_71006c6ca8;
              }
              if (uVar3 == 6) {
                puVar20[0x7b2] = 0;
                if (uVar22 == 0) goto joined_r0x0071006c6f2c;
                if (iVar8 == -1) {
                  iVar8 = iVar9;
                }
              }
            }
            else if (uVar3 == 8) {
              pbVar11 = *(byte **)(puVar20 + 0x7ae);
              pbVar12 = (byte *)(puVar20 + 0x7ae);
              if (uVar22 == 0xf0) {
                if (pbVar11 < pbVar12) {
                  *(byte **)(puVar20 + 0x7ae) = pbVar11 + 1;
                  *pbVar11 = 0xff;
                  pbVar11 = *(byte **)(puVar20 + 0x7ae);
                  if (pbVar11 < pbVar12) {
                    *(byte **)(puVar20 + 0x7ae) = pbVar11 + 1;
                    *pbVar11 = 0xf0;
                    pbVar11 = *(byte **)(puVar20 + 0x7ae);
                  }
                }
                *(byte **)(puVar20 + 0x7b0) = pbVar11 + -2;
                *(undefined4 **)(puVar20 + 0x7ae) = puVar20 + 0x72e;
                FUN_71006c6680(param_1);
                goto LAB_71006c6ca8;
              }
              if (uVar22 != 0xff) {
                if (pbVar11 < pbVar12) {
                  *(byte **)(puVar20 + 0x7ae) = pbVar11 + 1;
                  *pbVar11 = 0xff;
                  pbVar11 = *(byte **)(puVar20 + 0x7ae);
                  if (pbVar11 < pbVar12) {
                    *(byte **)(puVar20 + 0x7ae) = pbVar11 + 1;
                    *pbVar11 = bVar5;
                    pbVar11 = *(byte **)(puVar20 + 0x7ae);
                  }
                }
                *(byte **)(puVar20 + 0x7b0) = pbVar11 + -2;
                *(undefined4 **)(puVar20 + 0x7ae) = puVar20 + 0x72e;
                if (((uint)*(undefined8 *)(lVar21 + 0xf60) >> 0x1e & 1) != 0) {
                  if (uVar22 - 0xec < 0x14) {
                    FUN_71006c08c0(lVar21,"%s IAC %s\n","In SUBOPTION processing, RCVD",
                                   (&PTR_DAT_7100ae3748)[(int)(uVar22 - 0xec)]);
                  }
                  else {
                    FUN_71006c08c0(lVar21,"%s IAC %d\n","In SUBOPTION processing, RCVD",bVar5);
                  }
                }
                FUN_71006c6680(param_1);
                goto LAB_71006c6e2c;
              }
              if (pbVar11 < pbVar12) {
                *(byte **)(puVar20 + 0x7ae) = pbVar11 + 1;
                *pbVar11 = 0xff;
              }
              puVar20[0x7b2] = 7;
            }
            goto LAB_71006c6cac;
          }
          if (uVar3 == 2) {
            if (((uint)*(undefined8 *)(lVar21 + 0xf60) >> 0x1e & 1) != 0) {
              FUN_71006c63b0(lVar21,&DAT_7100848380,0xfb,bVar5);
            }
            lVar13 = *(long *)(*param_1 + 0x1d0) + (ulong)bVar5 * 4;
            *puVar20 = 1;
            iVar4 = *(int *)(lVar13 + 0xc08);
            if (iVar4 == 2) {
              if (*(int *)(lVar13 + 0x1008) == 0) {
                *(undefined4 *)(lVar13 + 0xc08) = 1;
              }
              else if (*(int *)(lVar13 + 0x1008) == 1) {
                *(undefined4 *)(lVar13 + 0x1008) = 0;
                *(undefined4 *)(lVar13 + 0xc08) = 3;
                FUN_71006c64a0(param_1,0xfe,bVar5);
              }
            }
            else if (iVar4 == 3) {
              if (*(int *)(lVar13 + 0x1008) == 0) goto LAB_71006c7248;
              if (*(int *)(lVar13 + 0x1008) == 1) {
                *(undefined4 *)(lVar13 + 0xc08) = 1;
                *(undefined4 *)(lVar13 + 0x1008) = 0;
              }
            }
            else if (iVar4 == 0) {
              if (*(int *)(lVar13 + 0x1408) == 1) {
                *(undefined4 *)(lVar13 + 0xc08) = 1;
                FUN_71006c64a0(param_1,0xfd,bVar5);
              }
              else {
                FUN_71006c64a0(param_1,0xfe,bVar5);
              }
            }
            goto LAB_71006c6ca8;
          }
          if (uVar3 != 3) {
            if (uVar3 == 0) {
              if (uVar22 != 0xff) {
                if (uVar22 == 0xd) {
                  puVar20[0x7b2] = 6;
                }
                if (iVar8 == -1) {
                  iVar8 = iVar9;
                }
                goto LAB_71006c6cac;
              }
              puVar20[0x7b2] = 1;
joined_r0x0071006c6f2c:
              if ((iVar8 != -1) &&
                 (iVar8 = FUN_71006c0c00(param_1,1,lVar17 + iVar8,(long)(iVar9 - iVar8)), iVar8 != 0
                 )) {
                bVar6 = false;
                goto LAB_71006c6b30;
              }
              iVar8 = -1;
            }
            else if (uVar3 == 1) {
LAB_71006c6e2c:
              if (bVar5 == 0xfd) {
                puVar20[0x7b2] = 4;
              }
              else if (uVar22 < 0xfe) {
                if (bVar5 == 0xfb) {
                  puVar20[0x7b2] = 2;
                }
                else if (bVar5 == 0xfc) {
                  puVar20[0x7b2] = 3;
                }
                else if (uVar22 == 0xfa) {
                  puVar20[0x7b2] = 7;
                  *(undefined4 **)(puVar20 + 0x7ae) = puVar20 + 0x72e;
                }
                else {
                  uVar14 = *(undefined8 *)(lVar21 + 0xf60);
                  puVar20[0x7b2] = 0;
                  if (((uint)uVar14 >> 0x1e & 1) != 0) {
                    if (uVar22 - 0xec < 0x14) {
                      FUN_71006c08c0(lVar21,"%s IAC %s\n",&DAT_7100848380,
                                     (&PTR_DAT_7100ae3748)[(int)(uVar22 - 0xec)]);
                    }
                    else {
                      FUN_71006c08c0(lVar21,"%s IAC %d\n",&DAT_7100848380,bVar5);
                    }
                  }
                }
              }
              else if (bVar5 == 0xfe) {
                puVar20[0x7b2] = 5;
              }
              else {
                if (iVar8 == -1) {
                  iVar8 = iVar9;
                }
                puVar20[0x7b2] = 0;
              }
            }
            goto LAB_71006c6cac;
          }
          if (((uint)*(undefined8 *)(lVar21 + 0xf60) >> 0x1e & 1) != 0) {
            FUN_71006c63b0(lVar21,&DAT_7100848380,0xfc,bVar5);
          }
          lVar13 = *(long *)(*param_1 + 0x1d0) + (ulong)bVar5 * 4;
          *puVar20 = 1;
          iVar4 = *(int *)(lVar13 + 0xc08);
          if (iVar4 == 2) {
            if (*(int *)(lVar13 + 0x1008) == 0) {
LAB_71006c7248:
              *(undefined4 *)(lVar13 + 0xc08) = 0;
            }
            else if (*(int *)(lVar13 + 0x1008) == 1) {
              *(undefined4 *)(lVar13 + 0xc08) = 0;
              *(undefined4 *)(lVar13 + 0x1008) = 0;
            }
          }
          else if (iVar4 == 3) {
            if (*(int *)(lVar13 + 0x1008) == 0) goto LAB_71006c7248;
            if (*(int *)(lVar13 + 0x1008) == 1) {
              *(undefined4 *)(lVar13 + 0x1008) = 0;
              *(undefined4 *)(lVar13 + 0xc08) = 2;
              FUN_71006c64a0(param_1,0xfd,bVar5);
            }
          }
          else if (iVar4 == 1) {
            *(undefined4 *)(lVar13 + 0xc08) = 0;
            FUN_71006c64a0(param_1,0xfe,bVar5);
          }
        }
LAB_71006c6ca8:
        puVar20[0x7b2] = 0;
LAB_71006c6cac:
        lVar10 = lVar10 + 1;
        if (lVar1 == lVar10) goto code_r0x0071006c6cbc;
        goto LAB_71006c6c30;
      }
      goto LAB_71006c6cdc;
    }
    goto LAB_71006c6b30;
  }
  goto LAB_71006c6b48;
code_r0x0071006c6cbc:
  if ((iVar8 == -1) ||
     (iVar8 = FUN_71006c0c00(param_1,1,lVar17 + iVar8,(long)((iVar9 + 1) - iVar8)), iVar8 == 0)) {
LAB_71006c6cdc:
    iVar8 = 0;
    if ((*piVar15 != 0) && (piVar15[1] == 0)) {
      uVar23 = 0;
      lVar10 = *(long *)(*param_1 + 0x1d0);
      do {
        if (uVar23 != 1) {
          if (*(int *)(lVar10 + 0x808 + uVar23 * 4) == 1) {
            lVar1 = *(long *)(*param_1 + 0x1d0) + uVar23 * 4;
            iVar9 = *(int *)(lVar1 + 8);
            if (iVar9 == 2) {
              if (*(int *)(lVar1 + 0x408) == 1) {
                *(undefined4 *)(lVar1 + 0x408) = 0;
              }
            }
            else if (iVar9 == 3) {
              if (*(int *)(lVar1 + 0x408) == 0) {
                *(undefined4 *)(lVar1 + 0x408) = 1;
              }
            }
            else if (iVar9 == 0) {
              *(undefined4 *)(lVar1 + 8) = 2;
              FUN_71006c64a0(param_1,0xfb,uVar23 & 0xffffffff);
            }
          }
          if (*(int *)(lVar10 + 0x1408 + uVar23 * 4) == 1) {
            lVar1 = *(long *)(*param_1 + 0x1d0) + uVar23 * 4;
            iVar9 = *(int *)(lVar1 + 0xc08);
            if (iVar9 == 2) {
              if (*(int *)(lVar1 + 0x1008) == 1) {
                *(undefined4 *)(lVar1 + 0x1008) = 0;
              }
            }
            else if (iVar9 == 3) {
              if (*(int *)(lVar1 + 0x1008) == 0) {
                *(undefined4 *)(lVar1 + 0x1008) = 1;
              }
            }
            else if (iVar9 == 0) {
              *(undefined4 *)(lVar1 + 0xc08) = 2;
              FUN_71006c64a0(param_1,0xfd,uVar23 & 0xffffffff);
            }
          }
          if (uVar23 == 0x27) goto LAB_71006c73c4;
        }
        uVar23 = uVar23 + 1;
      } while( true );
    }
    goto LAB_71006c6abc;
  }
  bVar6 = false;
LAB_71006c6b30:
  if (*(long *)(lVar16 + 0x788) != 0) {
    auVar24 = FUN_71006b7420();
    lVar10 = FUN_71006b7490(auVar24._0_8_,auVar24._8_8_,param_1[0x97],param_1[0x98]);
    if (*(long *)(lVar16 + 0x788) <= lVar10) {
      iVar8 = 0x1c;
      FUN_71006c0a00(lVar16,"Time-out");
      iVar9 = FUN_71006b9040(param_1);
      if (iVar9 == 0) goto LAB_71006c6b48;
      goto LAB_71006c6d90;
    }
  }
  iVar9 = FUN_71006b9040(param_1);
  if (iVar9 == 0) {
    if (!bVar6) {
LAB_71006c6b48:
      FUN_71006ca160(lVar16,0xffffffff,0xffffffffffffffff,0,0xffffffff);
      return iVar8;
    }
    goto LAB_71006c6a98;
  }
LAB_71006c6d90:
  iVar8 = 0x2a;
  goto LAB_71006c6b48;
LAB_71006c73c4:
  piVar15[1] = 1;
LAB_71006c6abc:
  local_18 = 0;
  if (local_6c == 2) {
    bVar6 = true;
    if ((local_2 & 1) != 0) {
      iVar9 = FUN_71008084a0(local_8,lVar17,*(undefined8 *)(lVar16 + 0xbb0));
      local_18 = (long)iVar9;
      if (0 < local_18) goto LAB_71006c6b18;
LAB_71006c6dc4:
      bVar6 = local_18 == 0;
    }
  }
  else {
    bVar6 = false;
    iVar9 = (**(code **)(lVar16 + 0x15b0))
                      (lVar17,1,*(undefined8 *)(lVar16 + 0xbb0),*(undefined8 *)(lVar16 + 0x15b8));
    local_18 = (long)iVar9;
    if ((local_18 != 0x10000000) && (bVar6 = true, local_18 != 0x10000001)) {
      if (local_18 < 1) goto LAB_71006c6dc4;
LAB_71006c6b18:
      iVar8 = FUN_71006c5dd0(param_1,lVar17);
      bVar6 = false;
      if (iVar8 == 0) {
        bVar6 = true;
        FUN_71006b8fd0(lVar16);
      }
    }
  }
  goto LAB_71006c6b30;
}



// ===== FUN_71006c7590 @ 71006c7590 (size=1112) =====

int FUN_71006c7590(undefined8 param_1,long *param_2,long *param_3,undefined1 *param_4,
                  undefined1 *param_5,undefined8 param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  int local_1064;
  undefined1 auStack_1008 [8];
  undefined1 auStack_1000 [4096];
  
  pcVar13 = (char *)*param_2;
  pcVar14 = (char *)*param_3;
  if ((pcVar13 == (char *)0x0) || (*pcVar13 == '\0')) {
    bVar3 = false;
    bVar7 = 0;
  }
  else {
    bVar3 = true;
    bVar7 = 1;
  }
  lVar10 = FUN_710081f2a0(param_6,"r");
  iVar15 = 1;
  if (lVar10 != 0) {
    bVar1 = false;
    iVar15 = 1;
    bVar2 = false;
    iVar9 = 0;
    local_1064 = 0;
    bVar4 = false;
    bVar5 = false;
    while (lVar11 = FUN_71008069e0(auStack_1000,0x1000,lVar10), lVar11 != 0) {
      while ((pcVar12 = (char *)FUN_710081f160(auStack_1000,&DAT_7100848798,auStack_1008),
             pcVar12 != (char *)0x0 && (*pcVar12 != '#'))) {
        do {
          if ((pcVar13 != (char *)0x0) &&
             ((*pcVar13 != '\0' && pcVar14 != (char *)0x0 && (*pcVar14 != '\0'))))
          goto LAB_71006c76d0;
          if (iVar9 == 1) {
            iVar8 = FUN_71006ca300(param_1,pcVar12);
            if (iVar8 != 0) {
              iVar15 = 0;
            }
            iVar9 = 2;
            if (iVar8 == 0) {
              iVar9 = 0;
            }
          }
          else if (iVar9 == 2) {
            if (bVar1) {
              if (bVar3) {
                local_1064 = FUN_71006ca300(pcVar13,pcVar12);
                bVar1 = false;
              }
              else if ((pcVar13 == (char *)0x0) ||
                      (iVar8 = FUN_710080aec0(pcVar13,pcVar12), iVar8 != 0)) {
                if (bVar4) {
                  (*(code *)PTR_FUN_7100af36a0)(pcVar13);
                }
                pcVar13 = (char *)(*(code *)PTR_FUN_7100af36b8)(pcVar12);
                if (pcVar13 == (char *)0x0) {
                  iVar15 = -1;
                  goto LAB_71006c796c;
                }
                bVar1 = false;
                bVar4 = true;
              }
              else {
                bVar1 = false;
              }
            }
            else if (bVar2) {
              bVar6 = (bool)(local_1064 != 0 | bVar7 ^ 1);
              if (bVar6) {
                if ((pcVar14 == (char *)0x0) ||
                   (iVar8 = FUN_710080aec0(pcVar14,pcVar12), iVar8 != 0)) {
                  if (bVar5) {
                    (*(code *)PTR_FUN_7100af36a0)(pcVar14);
                  }
                  pcVar14 = (char *)(*(code *)PTR_FUN_7100af36b8)(pcVar12);
                  if (pcVar14 == (char *)0x0) {
                    if (bVar4) {
                      iVar15 = -1;
                      (*(code *)PTR_FUN_7100af36a0)(pcVar13);
                    }
                    else {
                      iVar15 = -1;
                    }
                    goto LAB_71006c7754;
                  }
                  bVar2 = false;
                  bVar5 = bVar6;
                }
                else {
                  bVar2 = false;
                }
              }
              else {
                bVar2 = false;
                local_1064 = 0;
              }
            }
            else {
              iVar8 = FUN_71006ca300("login",pcVar12);
              if (iVar8 == 0) {
                iVar8 = FUN_71006ca300("password",pcVar12);
                if (iVar8 == 0) {
                  iVar8 = FUN_71006ca300("machine",pcVar12);
                  if (iVar8 != 0) {
                    iVar9 = 1;
                    local_1064 = 0;
                  }
                }
                else {
                  bVar2 = true;
                }
              }
              else {
                bVar1 = true;
              }
            }
          }
          else if (iVar9 == 0) {
            iVar9 = 1;
            iVar8 = FUN_71006ca300("machine",pcVar12);
            if (iVar8 == 0) {
              iVar8 = FUN_71006ca300("default",pcVar12);
              if (iVar8 != 0) {
                iVar15 = 0;
              }
              iVar9 = 0;
              if (iVar8 != 0) {
                iVar9 = 2;
              }
            }
          }
          else {
            iVar9 = 1;
          }
          pcVar12 = (char *)FUN_710081f160(0,&DAT_7100848798,auStack_1008);
        } while (pcVar12 != (char *)0x0);
        lVar11 = FUN_71008069e0(auStack_1000,0x1000,lVar10);
        if (lVar11 == 0) goto LAB_71006c76d0;
      }
    }
LAB_71006c76d0:
    if (iVar15 == 0) {
      *param_4 = 0;
      *param_5 = 0;
      if (bVar4) {
        if (*param_2 != 0) {
          (*(code *)PTR_FUN_7100af36a0)();
        }
        *param_2 = (long)pcVar13;
        *param_4 = 1;
      }
      if (bVar5) {
        if (*param_3 != 0) {
          (*(code *)PTR_FUN_7100af36a0)();
        }
        *param_3 = (long)pcVar14;
        *param_5 = 1;
      }
    }
    else {
      if (bVar4) {
        (*(code *)PTR_FUN_7100af36a0)(pcVar13);
      }
LAB_71006c796c:
      if (bVar5) {
        (*(code *)PTR_FUN_7100af36a0)(pcVar14);
        FUN_71008082e0(lVar10);
        return iVar15;
      }
    }
LAB_71006c7754:
    FUN_71008082e0(lVar10);
  }
  return iVar15;
}



// ===== FUN_71006c79f0 @ 71006c79f0 (size=232) =====

ulong FUN_71006c79f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,long param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if (param_6 != 0) {
    uVar1 = FUN_71006c7590();
    return uVar1;
  }
  uVar1 = 1;
  lVar2 = FUN_71006c5aa0(&DAT_7100845e60);
  if (lVar2 != 0) {
    lVar3 = FUN_71006a1060("%s%s.netrc",lVar2,&DAT_71008455d0);
    if (lVar3 == 0) {
      uVar1 = 0xffffffff;
      (*(code *)PTR_FUN_7100af36a0)(lVar2);
    }
    else {
      uVar1 = FUN_71006c7590(param_1,param_2,param_3,param_4,param_5,lVar3);
      uVar1 = uVar1 & 0xffffffff;
      (*(code *)PTR_FUN_7100af36a0)(lVar3);
      (*(code *)PTR_FUN_7100af36a0)(lVar2);
    }
  }
  return uVar1;
}



// ===== FUN_71006c7ae0 @ 71006c7ae0 (size=192) =====

undefined8 FUN_71006c7ae0(long param_1)

{
  undefined *puVar1;
  
  *(undefined8 *)(param_1 + 0xfd0) = 0;
  *(undefined8 *)(param_1 + 0xfe8) = 0;
  *(undefined8 *)(param_1 + 0xff0) = 0;
  *(undefined8 *)(param_1 + 0xff8) = 0;
  *(undefined8 *)(param_1 + 0x1000) = 0;
  *(undefined8 *)(param_1 + 0x1008) = 0;
  *(undefined8 *)(param_1 + 0x1010) = 0;
  *(byte *)(param_1 + 0x111c) = *(byte *)(param_1 + 0x111c) & 0xfd;
  *(undefined8 *)(param_1 + 0x1680) = 0;
  *(undefined4 *)(param_1 + 0x1688) = 0;
  *(undefined8 *)(param_1 + 0x1690) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x1698) = 0;
  *(undefined8 *)(param_1 + 0x16a0) = 0;
  *(undefined8 *)(param_1 + 0x16a8) = 0;
  *(undefined8 *)(param_1 + 0x16b0) = 0;
  *(undefined8 *)(param_1 + 0x16b8) = 0;
  *(byte *)(param_1 + 0x1768) = *(byte *)(param_1 + 0x1768) & 0xfe;
  (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(param_1 + 0x16c0));
  puVar1 = PTR_FUN_7100af36a0;
  *(undefined8 *)(param_1 + 0x16c0) = 0;
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x16c8));
  *(undefined8 *)(param_1 + 0x16c8) = 0;
  *(undefined1 *)(param_1 + 0x16d8) = 0;
  *(undefined8 *)(param_1 + 0x1708) = 0;
  *(undefined1 *)(param_1 + 0x1710) = 0;
  *(undefined8 *)(param_1 + 0x1740) = 0;
  *(undefined8 *)(param_1 + 0x1748) = 0;
  *(undefined4 *)(param_1 + 0x1750) = 0;
  FUN_71006b1cc0(param_1);
  return 0;
}



// ===== FUN_71006c7ba0 @ 71006c7ba0 (size=2232) =====

undefined4 FUN_71006c7ba0(long param_1,uint param_2,double *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  
  if (param_1 != 0) {
    uVar1 = param_2 & 0xf00000;
    if (uVar1 == 0x400000) {
      if (param_3 != (double *)0x0) {
        if (param_2 == 0x400022) {
          *param_3 = (double)(param_1 + 0x1758);
          return 0;
        }
        if (param_2 < 0x400023) {
          if (param_2 == 0x40001b) {
            dVar8 = (double)thunk_FUN_71006b0cf0();
            *param_3 = dVar8;
            return 0;
          }
          if (param_2 == 0x40001c) {
            dVar8 = (double)FUN_71006bb4f0();
            *param_3 = dVar8;
            return 0;
          }
        }
        else if ((param_2 - 0x40002b & 0xfffffffd) == 0) {
          lVar7 = *(long *)(param_1 + 0x10);
          *param_3 = (double)(param_1 + 6000);
          iVar4 = FUN_71006b1780();
          *(int *)(param_1 + 6000) = iVar4;
          *(undefined8 *)(param_1 + 0x1778) = 0;
          if (iVar4 == 0 || lVar7 == 0) {
            return 0;
          }
          if ((*(ulong *)(lVar7 + 0x518) & 1) == 0) {
            if ((*(ulong *)(lVar7 + 0x530) & 1) == 0) {
              return 0;
            }
            lVar5 = 1;
          }
          else {
            lVar5 = 0;
          }
          uVar6 = (**(code **)(PTR_DAT_7100af36c0 + 0x70))(lVar7 + lVar5 * 0x18 + 0x508,param_2);
          *(undefined8 *)(param_1 + 0x1778) = uVar6;
          return 0;
        }
      }
    }
    else if (uVar1 < 0x400001) {
      if (uVar1 == 0x200000) {
        if (param_3 != (double *)0x0) {
          switch(param_2) {
          case 0x200002:
            *param_3 = (double)(long)*(int *)(param_1 + 0x1680);
            return 0;
          case 0x20000b:
            *param_3 = *(double *)(param_1 + 0x1698);
            return 0;
          case 0x20000c:
            *param_3 = *(double *)(param_1 + 0x16a0);
            return 0;
          case 0x20000d:
            *param_3 = *(double *)(param_1 + 0xa90);
            return 0;
          case 0x20000e:
switchD_71006c7f90_caseD_20000e:
            *param_3 = *(double *)(param_1 + 0x1690);
            return 0;
          case 0x200014:
            *param_3 = *(double *)(param_1 + 0x6b0);
            return 0;
          case 0x200016:
            *param_3 = (double)(long)*(int *)(param_1 + 0x1684);
            return 0;
          case 0x200017:
            *param_3 = *(double *)(param_1 + 0x16b0);
            return 0;
          case 0x200018:
            *param_3 = *(double *)(param_1 + 0x16a8);
            return 0;
          case 0x200019:
            *param_3 = (double)(long)*(int *)(param_1 + 0x11e0);
            return 0;
          case 0x20001a:
            *param_3 = *(double *)(param_1 + 0x16b8);
            return 0;
          case 0x20001d:
            iVar4 = FUN_71006a1bd0(param_1,0);
            if (iVar4 == -1) {
              *param_3 = -NAN;
              return 0;
            }
            *param_3 = (double)(long)iVar4;
            return 0;
          case 0x200023:
            *param_3 = (double)((ulong)*(byte *)(param_1 + 0x1768) & 1);
            return 0;
          case 0x200025:
            *param_3 = *(double *)(param_1 + 0x1588);
            return 0;
          case 0x200026:
            *param_3 = *(double *)(param_1 + 0x1590);
            return 0;
          case 0x200027:
            *param_3 = *(double *)(param_1 + 0x1598);
            return 0;
          case 0x200028:
            *param_3 = *(double *)(param_1 + 0x1708);
            return 0;
          case 0x20002a:
            *param_3 = *(double *)(param_1 + 0x1740);
            return 0;
          case 0x20002e:
            iVar4 = *(int *)(param_1 + 0x1688);
            if (iVar4 == 0x14) {
              *param_3 = 1.48219693752374e-323;
              return 0;
            }
            if (iVar4 < 0x15) {
              if (iVar4 == 10) {
                *param_3 = 4.94065645841247e-324;
                return 0;
              }
              if (iVar4 == 0xb) {
                *param_3 = 9.88131291682493e-324;
                return 0;
              }
            }
            else if (iVar4 == 0x1e) {
              *param_3 = 1.48219693752374e-322;
              return 0;
            }
            *param_3 = 0.0;
            return 0;
          case 0x20002f:
            *param_3 = *(double *)(param_1 + 0xb40);
            return 0;
          case 0x200030:
            *param_3 = (double)(ulong)*(uint *)(param_1 + 0x1750);
            return 0;
          }
        }
      }
      else if (uVar1 == 0x300000) {
        if (param_3 != (double *)0x0) {
          if (param_2 == 0x300009) {
            *param_3 = (double)*(long *)(param_1 + 0xfd8);
            return 0;
          }
          if (param_2 < 0x30000a) {
            if (param_2 == 0x300006) {
              lVar7 = *(long *)(param_1 + 0x1000);
            }
            else {
              if (0x300006 < param_2) {
                if (param_2 == 0x300007) {
                  *param_3 = (double)*(long *)(param_1 + 0xfb8);
                  return 0;
                }
                if (param_2 != 0x300008) {
                  return 0x30;
                }
                *param_3 = (double)*(long *)(param_1 + 0xfb0);
                return 0;
              }
              if (param_2 == 0x300004) {
                lVar7 = *(long *)(param_1 + 0xfe8);
              }
              else if (param_2 == 0x300005) {
                lVar7 = *(long *)(param_1 + 0xff0);
              }
              else {
                if (param_2 != 0x300003) {
                  return 0x30;
                }
                lVar7 = *(long *)(param_1 + 0xfd0);
              }
            }
          }
          else if (param_2 == 0x300011) {
            lVar7 = *(long *)(param_1 + 0x1008);
          }
          else {
            if (param_2 < 0x300012) {
              if (param_2 == 0x30000f) {
                dVar8 = -1.0;
                if ((*(uint *)(param_1 + 0xfcc) >> 6 & 1) != 0) {
                  dVar8 = (double)*(long *)(param_1 + 4000);
                }
              }
              else {
                if (param_2 != 0x300010) {
                  if (param_2 != 0x30000a) {
                    return 0x30;
                  }
                  *param_3 = (double)*(long *)(param_1 + 0xfe0);
                  return 0;
                }
                dVar8 = -1.0;
                if ((*(uint *)(param_1 + 0xfcc) >> 5 & 1) != 0) {
                  dVar8 = (double)*(long *)(param_1 + 0xfa8);
                }
              }
              *param_3 = dVar8;
              return 0;
            }
            if (param_2 == 0x300013) {
              lVar7 = *(long *)(param_1 + 0x1010);
            }
            else {
              if (param_2 != 0x300021) {
                return 0x30;
              }
              lVar7 = *(long *)(param_1 + 0xff8);
            }
          }
          *param_3 = (double)lVar7 / 1000000.0;
          return 0;
        }
      }
      else if ((uVar1 == 0x100000) && (param_3 != (double *)0x0)) {
        if (param_2 == 0x10001f) {
          *param_3 = *(double *)(param_1 + 0x16c8);
          return 0;
        }
        if (param_2 < 0x100020) {
          if (param_2 == 0x100015) {
            *param_3 = *(double *)(param_1 + 0xbc0);
            return 0;
          }
          if (param_2 < 0x100016) {
            if (param_2 == 0x100001) {
              puVar2 = &DAT_7100853d20;
              if (*(undefined1 **)(param_1 + 0xf68) != (undefined1 *)0x0) {
                puVar2 = *(undefined1 **)(param_1 + 0xf68);
              }
              *param_3 = (double)puVar2;
              return 0;
            }
            if (param_2 == 0x100012) {
              *param_3 = *(double *)(param_1 + 0x16c0);
              return 0;
            }
          }
          else if (param_2 == 0x10001e) {
            *param_3 = *(double *)(param_1 + 0x1560);
            return 0;
          }
        }
        else {
          if (param_2 == 0x100029) {
            *param_3 = (double)(param_1 + 0x1710);
            return 0;
          }
          if (param_2 < 0x10002a) {
            if (param_2 == 0x100020) {
              *param_3 = (double)(param_1 + 0x16d8);
              return 0;
            }
            if (param_2 == 0x100024) {
              *param_3 = *(double *)(param_1 + 0xdb0);
              return 0;
            }
          }
          else if (param_2 == 0x100031) {
            *param_3 = *(double *)(param_1 + 0x1748);
            return 0;
          }
        }
      }
    }
    else if (uVar1 == 0x500000) {
      if (param_3 != (double *)0x0 && param_2 == 0x50002c) {
        uVar3 = FUN_71006a1bd0(param_1,0);
        *(undefined4 *)param_3 = uVar3;
        return 0;
      }
    }
    else if ((uVar1 == 0x600000) && (param_3 != (double *)0x0)) {
      if (param_2 == 0x600032) {
        *param_3 = *(double *)(param_1 + 0xfd0);
        return 0;
      }
      if (param_2 < 0x600033) {
        if (param_2 == 0x60000a) {
          *param_3 = *(double *)(param_1 + 0xfe0);
          return 0;
        }
        if (0x60000a < param_2) {
          if (param_2 == 0x60000f) {
            dVar8 = -NAN;
            if ((*(uint *)(param_1 + 0xfcc) >> 6 & 1) != 0) {
              dVar8 = *(double *)(param_1 + 4000);
            }
          }
          else {
            if (param_2 != 0x600010) {
              if (param_2 != 0x60000e) {
                return 0x30;
              }
              goto switchD_71006c7f90_caseD_20000e;
            }
            dVar8 = -NAN;
            if ((*(uint *)(param_1 + 0xfcc) >> 5 & 1) != 0) {
              dVar8 = *(double *)(param_1 + 0xfa8);
            }
          }
LAB_71006c8178:
          *param_3 = dVar8;
          return 0;
        }
        if (param_2 == 0x600008) {
          *param_3 = *(double *)(param_1 + 0xfb0);
          return 0;
        }
        if (param_2 == 0x600009) {
          *param_3 = *(double *)(param_1 + 0xfd8);
          return 0;
        }
        if (param_2 == 0x600007) {
          *param_3 = *(double *)(param_1 + 0xfb8);
          return 0;
        }
      }
      else {
        if (param_2 == 0x600036) {
          *param_3 = *(double *)(param_1 + 0x1008);
          return 0;
        }
        if (param_2 < 0x600037) {
          if (param_2 == 0x600034) {
            *param_3 = *(double *)(param_1 + 0xff0);
            return 0;
          }
          if (param_2 == 0x600035) {
            *param_3 = *(double *)(param_1 + 0x1000);
            return 0;
          }
          if (param_2 == 0x600033) {
            *param_3 = *(double *)(param_1 + 0xfe8);
            return 0;
          }
        }
        else {
          if (param_2 == 0x600038) {
            *param_3 = *(double *)(param_1 + 0xff8);
            return 0;
          }
          if (param_2 == 0x600039) {
            dVar8 = *(double *)(param_1 + 0x16d0);
            goto LAB_71006c8178;
          }
          if (param_2 == 0x600037) {
            *param_3 = *(double *)(param_1 + 0x1010);
            return 0;
          }
        }
      }
    }
  }
  return 0x30;
}



// ===== FUN_71006c84d0 @ 71006c84d0 (size=120) =====

long FUN_71006c84d0(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = FUN_710081ce00(param_2);
  plVar3 = *(long **)(*param_1 + 0x7f0);
  while( true ) {
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    iVar1 = FUN_71006ca3e0(*plVar3,param_2,lVar2);
    if ((iVar1 != 0) && ((byte)(*(char *)(*plVar3 + lVar2) - 0x3aU) < 2)) break;
    plVar3 = (long *)plVar3[1];
  }
  return *plVar3;
}



// ===== FUN_71006c8550 @ 71006c8550 (size=76) =====

undefined8 FUN_71006c8550(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x1158) == 0) {
    lVar1 = (*(code *)PTR_FUN_7100af36a8)(*(undefined8 *)(param_1 + 3000));
    *(long *)(param_1 + 0x1158) = lVar1;
    if (lVar1 == 0) {
      return 0x1b;
    }
  }
  return 0;
}



// ===== FUN_71006c85a0 @ 71006c85a0 (size=1056) =====

uint FUN_71006c85a0(long *param_1,ulong param_2,ulong *param_3)

{
  char *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  ulong uVar10;
  undefined1 local_10;
  undefined7 uStack_f;
  undefined1 uStack_8;
  undefined2 local_7;
  
  lVar8 = *param_1;
  iVar4 = *(int *)(lVar8 + 0x1628);
  if (iVar4 == 1) {
    local_10 = 0;
    uStack_f = 0;
    FUN_71006c08c0(lVar8,"Moving trailers state machine from initialized to sending.\n");
    *(undefined4 *)(lVar8 + 0x1628) = 2;
    lVar6 = FUN_71006bcc10();
    *(long *)(lVar8 + 0x1620) = lVar6;
    if (lVar6 == 0) {
      FUN_71006c0a00(lVar8,"Unable to allocate trailing headers buffer !");
      return 0x1b;
    }
    *(undefined8 *)(lVar8 + 0x1618) = 0;
    FUN_71006a63f0(lVar8,1);
    iVar4 = (**(code **)(lVar8 + 0xf58))(&local_10,*(undefined8 *)(lVar8 + 0xf50));
    FUN_71006a63f0(lVar8,0);
    if (iVar4 != 0) {
      uVar3 = 0x2a;
      FUN_71006c0a00(lVar8,"operation aborted by trailing headers callback");
      *param_3 = 0;
LAB_71006c88b0:
      FUN_71006bcc30(lVar8 + 0x1620);
      FUN_71006a8740(CONCAT71(uStack_f,local_10));
      return uVar3;
    }
    uVar3 = FUN_71006bd480(CONCAT71(uStack_f,local_10),lVar8 + 0x1620,lVar8);
    if (uVar3 != 0) goto LAB_71006c88b0;
    FUN_71006c08c0(lVar8,"Successfully compiled trailers.\r\n");
    FUN_71006a8740(CONCAT71(uStack_f,local_10));
    iVar4 = *(int *)(lVar8 + 0x1628);
  }
  if (((*(ushort *)(lVar8 + 0x648) >> 6 & 1) == 0) || (iVar4 != 0)) {
    if (iVar4 != 2) goto LAB_71006c85ec;
    pcVar9 = (code *)&UNK_71006c8460;
    lVar6 = lVar8;
  }
  else {
    param_2 = param_2 - 0xc;
    *(long *)(lVar8 + 0x1c8) = *(long *)(lVar8 + 0x1c8) + 10;
LAB_71006c85ec:
    pcVar9 = *(code **)(lVar8 + 0x15b0);
    lVar6 = *(long *)(lVar8 + 0x15b8);
  }
  FUN_71006a63f0(lVar8,1);
  uVar5 = (*pcVar9)(*(undefined8 *)(lVar8 + 0x1c8),1,param_2,lVar6);
  FUN_71006a63f0(lVar8,0);
  if (uVar5 == 0x10000000) {
    FUN_71006c0a00(lVar8,"operation aborted by callback");
    *param_3 = 0;
    return 0x2a;
  }
  if (uVar5 == 0x10000001) {
    uVar3 = *(uint *)(param_1[0xc9] + 0x84);
    if ((uVar3 >> 4 & 1) != 0) {
      FUN_71006c0a00(lVar8,"Read callback asked for PAUSE when not supported!");
      return 0x1a;
    }
    *(uint *)(lVar8 + 0x1a8) = *(uint *)(lVar8 + 0x1a8) | 0x20;
    if ((*(ushort *)(lVar8 + 0x648) >> 6 & 1) != 0) {
      *(long *)(lVar8 + 0x1c8) = *(long *)(lVar8 + 0x1c8) + -10;
    }
    *param_3 = 0;
    return uVar3 & 0x10;
  }
  if (param_2 < uVar5) {
    *param_3 = 0;
    FUN_71006c0a00(lVar8,"read function returned funny value");
    return 0x1a;
  }
  if ((*(ulong *)(lVar8 + 0x648) & 0x140) != 0x40) goto LAB_71006c865c;
  pcVar1 = "\n";
  if ((*(ulong *)(lVar8 + 0xf60) & 0x840) == 0) {
    pcVar1 = "\r\n";
  }
  if (*(int *)(lVar8 + 0x1628) == 2) {
    iVar4 = 0;
    bVar2 = false;
LAB_71006c88e4:
    if (*(long *)(*(long *)(lVar8 + 0x1620) + 0x10) == *(long *)(lVar8 + 0x1618)) {
      FUN_71006bcc30(lVar8 + 0x1620);
      *(undefined8 *)(lVar8 + 0xf50) = 0;
      *(undefined8 *)(lVar8 + 0xf58) = 0;
      *(undefined4 *)(lVar8 + 0x1628) = 3;
      *(ushort *)(lVar8 + 0x648) = *(ushort *)(lVar8 + 0x648) | 4;
      FUN_71006c08c0(lVar8,"Signaling end of chunked upload after trailers.\n");
    }
    else if (uVar5 == (long)iVar4) {
LAB_71006c8994:
      *(ushort *)(lVar8 + 0x648) = *(ushort *)(lVar8 + 0x648) | 4;
      FUN_71006c08c0(lVar8,"Signaling end of chunked upload via terminating chunk.\n");
    }
    if (!bVar2) goto LAB_71006c865c;
  }
  else {
    uStack_f = 0;
    uStack_8 = 0;
    local_7 = 0;
    local_10 = 0;
    iVar4 = FUN_710069fb80(&local_10,0xb,"%zx%s",uVar5,pcVar1);
    uVar10 = (ulong)iVar4;
    uVar5 = uVar5 + uVar10;
    lVar6 = *(long *)(lVar8 + 0x1c8) - uVar10;
    *(long *)(lVar8 + 0x1c8) = lVar6;
    FUN_710080f900(lVar6,&local_10,uVar10);
    if (((uVar10 == uVar5) && (*(long *)(lVar8 + 0xf58) != 0)) && (*(int *)(lVar8 + 0x1628) == 0)) {
      *(undefined4 *)(lVar8 + 0x1628) = 1;
      goto LAB_71006c865c;
    }
    uVar7 = FUN_710081ce00(pcVar1);
    FUN_710080f900(*(long *)(lVar8 + 0x1c8) + uVar5,pcVar1,uVar7);
    if (*(int *)(lVar8 + 0x1628) == 2) {
      bVar2 = true;
      goto LAB_71006c88e4;
    }
    bVar2 = *(int *)(lVar8 + 0x1628) != 1 && uVar10 == uVar5;
    if (bVar2) goto LAB_71006c8994;
  }
  lVar8 = FUN_710081ce00(pcVar1);
  uVar5 = uVar5 + lVar8;
LAB_71006c865c:
  *param_3 = uVar5;
  return 0;
}



// ===== FUN_71006c89c0 @ 71006c89c0 (size=412) =====

undefined8 FUN_71006c89c0(long *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_1;
  *(uint *)((long)param_1 + 0x624) = *(uint *)((long)param_1 + 0x624) & 0xfffdffff;
  uVar1 = *(uint *)(param_1[0xc9] + 0x80);
  *(uint *)(lVar4 + 0x1a8) = *(uint *)(lVar4 + 0x1a8) & 0xfffffffd;
  lVar3 = lVar4 + 0x808;
  if (((uVar1 & 3) != 0) && (**(long **)(lVar4 + 0x1d0) != 0)) {
    lVar3 = **(long **)(lVar4 + 0x1d0);
  }
  if (*(long *)(lVar4 + 0x6c8) == 0) {
    if (*(int *)(lVar4 + 0xa28) - 3U < 2) {
      iVar2 = FUN_71006ab9a0(lVar3);
      if (iVar2 != 0) {
        FUN_71006c0a00(lVar4,"Cannot rewind mime/post data");
        return 0x41;
      }
    }
    else if (*(long *)(lVar4 + 0x6d0) == 0) {
      if (*(long *)(lVar4 + 0x720) == 0) {
        if ((*(code **)(lVar4 + 0x15b0) != FUN_710081e580) ||
           (iVar2 = FUN_7100814b40(*(undefined8 *)(lVar4 + 0x15b8),0,0), iVar2 == -1)) {
          FUN_71006c0a00(lVar4,"necessary data rewind wasn\'t possible");
          return 0x41;
        }
      }
      else {
        FUN_71006a63f0(lVar4,1);
        iVar2 = (**(code **)(lVar4 + 0x720))(lVar4,1,*(undefined8 *)(lVar4 + 0x780));
        FUN_71006a63f0(lVar4,0);
        FUN_71006c08c0(lVar4,"the ioctl callback returned %d\n",iVar2);
        if (iVar2 != 0) {
          FUN_71006c0a00(lVar4,"ioctl callback returned error %d",iVar2);
          return 0x41;
        }
      }
    }
    else {
      FUN_71006a63f0(lVar4,1);
      iVar2 = (**(code **)(lVar4 + 0x6d0))(*(undefined8 *)(lVar4 + 0x758),0,0);
      FUN_71006a63f0(lVar4,0);
      if (iVar2 != 0) {
        FUN_71006c0a00(lVar4,"seek callback returned error %d",iVar2);
        return 0x41;
      }
    }
  }
  return 0;
}



// ===== FUN_71006c8b60 @ 71006c8b60 (size=136) =====

undefined8 FUN_71006c8b60(long param_1,long param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar2 = 1;
  lVar3 = *(long *)(param_1 + 0xa20);
  if (lVar3 != 0) {
    if (*(int *)(param_1 + 0xa18) == 2) {
      if (param_2 < lVar3) {
        return 1;
      }
      pcVar1 = "The requested document is not old enough\n";
    }
    else {
      if (lVar3 < param_2) {
        return 1;
      }
      pcVar1 = "The requested document is not new enough\n";
    }
    FUN_71006c08c0(param_1,pcVar1);
    uVar2 = 0;
    *(byte *)(param_1 + 0x1768) = *(byte *)(param_1 + 0x1768) | 1;
  }
  return uVar2;
}



// ===== FUN_71006c8bf0 @ 71006c8bf0 (size=32) =====

undefined8 FUN_71006c8bf0(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x624);
  *(uint *)(param_2 + 0xd0) = *(uint *)(param_2 + 0xd0) & 0xfffffffd;
  if ((uVar1 >> 0x11 & 1) == 0) {
    return 0;
  }
  uVar2 = FUN_71006c89c0();
  return uVar2;
}



// ===== FUN_71006c8c10 @ 71006c8c10 (size=3604) =====

uint FUN_71006c8c10(long *param_1,long param_2,char *param_3,undefined1 *param_4)

{
  long *plVar1;
  ulong uVar2;
  ushort uVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  undefined1 auVar21 [16];
  long local_30;
  char local_d;
  uint local_c;
  long local_8;
  
  plVar1 = (long *)(param_2 + 0xd8);
  uVar7 = *(uint *)(param_2 + 0x1a8);
  uVar8 = *(uint *)(param_1 + 0x113);
  *(undefined4 *)(param_1 + 0x113) = 0;
  if ((uVar7 & 0x15) == 1) {
    uVar6 = (undefined4)param_1[0xcf];
  }
  else {
    uVar6 = 0xffffffff;
  }
  uVar15 = 0xffffffff;
  if ((uVar7 & 0x2a) == 2) {
    uVar15 = *(undefined4 *)((long)param_1 + 0x67c);
  }
  if (*(long *)(*param_1 + 0x15a8) == 0) {
    if (uVar8 == 0) {
      uVar8 = FUN_71006a6d40(uVar6,0xffffffff,uVar15,0);
    }
  }
  else {
    uVar8 = uVar8 | 1;
  }
  if (uVar8 == 4) {
    FUN_71006c0a00(param_2,"select/poll returned error");
    return 0x37;
  }
  if (((*(uint *)(param_2 + 0x1a8) & 1) == 0) || (uVar7 = uVar8 & 1, (uVar8 & 1) == 0)) {
    if (((*(uint *)(param_2 + 0x1a8) >> 1 & 1) != 0) && (uVar7 = 0, (uVar8 >> 1 & 1) != 0))
    goto LAB_71006c8ca4;
    auVar21 = FUN_71006b7420();
    *(undefined1 (*) [16])(param_2 + 0x118) = auVar21;
  }
  else {
    *param_3 = '\0';
    iVar10 = 100;
    *param_4 = 0;
    local_30 = 0;
    local_d = '\0';
    uVar12 = 0;
    do {
      lVar20 = *(long *)(param_2 + 0xbb0);
      if (((*plVar1 != -1) && ((*(ushort *)(param_2 + 0x648) & 1) == 0)) &&
         (lVar16 = *plVar1 - *(long *)(param_2 + 0xe8), lVar16 < lVar20)) {
        lVar20 = lVar16;
      }
      if (lVar20 != 0) {
        uVar9 = FUN_71006c0760(param_1,(int)param_1[0xcf],*(undefined8 *)(param_2 + 0x1a0),lVar20,
                               &local_8);
        if (uVar9 != 0x51) {
          if (uVar9 != 0) {
            return uVar9;
          }
          if (*(long *)(param_2 + 0xe8) == 0) goto LAB_71006c9208;
          goto LAB_71006c91f0;
        }
        uVar9 = *(uint *)(param_2 + 0x1a8);
LAB_71006c9298:
        uVar7 = uVar12;
        if (iVar10 != 0) goto LAB_71006c929c;
        goto LAB_71006c969c;
      }
      local_8 = 0;
      if (*(long *)(param_2 + 0xe8) == 0) {
LAB_71006c9208:
        FUN_71006b8c70(param_2,7);
        if (*(int *)(param_2 + 0x180) != 0) {
          auVar21 = FUN_71006b7420();
          *(undefined1 (*) [16])(param_2 + 0x170) = auVar21;
        }
LAB_71006c91f0:
        if (local_8 == 0) goto LAB_71006c8e48;
        if (local_8 < 1) goto LAB_71006c92cc;
        uVar12 = 0;
        lVar20 = local_8;
      }
      else {
LAB_71006c8e48:
        if (*(long *)(param_2 + 0x198) != 0) {
LAB_71006c92cc:
          uVar9 = *(uint *)(param_2 + 0x1a8) & 0xfffffffe;
          *(uint *)(param_2 + 0x1a8) = uVar9;
          uVar12 = uVar7;
          goto LAB_71006c9298;
        }
        lVar20 = 0;
        uVar12 = uVar7;
      }
      *(undefined1 *)(*(long *)(param_2 + 0x1a0) + lVar20) = 0;
      pcVar18 = *(code **)(param_1[0xc9] + 0x68);
      *(undefined8 *)(param_2 + 0x140) = *(undefined8 *)(param_2 + 0x1a0);
      if (pcVar18 != (code *)0x0) {
        uVar9 = (*pcVar18)(param_2,param_1,&local_8,&local_d);
        if (uVar9 != 0) {
          return uVar9;
        }
        if (local_d == '\0') goto LAB_71006c8e94;
LAB_71006c9294:
        uVar9 = *(uint *)(param_2 + 0x1a8);
        uVar12 = uVar7;
        goto LAB_71006c9298;
      }
LAB_71006c8e94:
      if ((*(ushort *)(param_2 + 0x648) & 1) != 0) {
        local_c = local_c & 0xffffff00;
        uVar9 = FUN_71006bf2b0(param_2,param_1,&local_8,&local_c);
        if (uVar9 != 0) {
          return uVar9;
        }
        if (((*(code **)(param_1[0xc9] + 0x68) != (code *)0x0) && (*(long *)(param_2 + 0xe0) < 1))
           && (0 < local_8)) {
          uVar9 = (**(code **)(param_1[0xc9] + 0x68))(param_2,param_1,&local_8,&local_d);
          if (uVar9 != 0) {
            return uVar9;
          }
          if (local_d != '\0') {
            uVar9 = *(uint *)(param_2 + 0x1a8);
            uVar12 = uVar7;
            goto LAB_71006c9298;
          }
        }
        if ((char)local_c == '\0') {
          if ((*(long *)(param_2 + 0x140) != 0) && ((*(ushort *)(param_2 + 0x648) & 1) == 0))
          goto LAB_71006c8ea4;
          goto LAB_71006c9158;
        }
        if (0 < local_8) {
          FUN_71006c08c0(param_2,"Excess found: excess = %zd url = %s (zero-length body)\n",local_8,
                         *(undefined8 *)(param_2 + 0x1608));
          uVar9 = *(uint *)(param_2 + 0x1a8);
          uVar12 = uVar7;
          goto LAB_71006c9298;
        }
        goto LAB_71006c9294;
      }
      if (*(long *)(param_2 + 0x140) == 0) {
LAB_71006c9158:
        lVar20 = param_1[0xc9];
LAB_71006c915c:
        pcVar18 = *(code **)(lVar20 + 0x68);
        if ((pcVar18 != (code *)0x0) && (local_30 != 0)) {
LAB_71006c9634:
          lVar20 = *(long *)(param_2 + 0x140) + local_8;
          *(long *)(param_2 + 0x140) = lVar20;
          uVar2 = *(long *)(param_2 + 0x1a0) + *(long *)(param_2 + 0xbb0);
          local_8 = uVar2 - lVar20;
          if ((ulong)(lVar20 + local_30) <= uVar2) {
            local_8 = local_30;
          }
          uVar12 = (*pcVar18)(param_2,param_1,&local_8,&local_d);
          if (uVar12 != 0) {
            return uVar12;
          }
          uVar9 = *(uint *)(param_2 + 0x1a8);
          uVar12 = uVar7;
          if (local_d != '\0') {
            uVar9 = uVar9 | 1;
            *(uint *)(param_2 + 0x1a8) = uVar9;
          }
          goto LAB_71006c9298;
        }
        uVar9 = *(uint *)(param_2 + 0x1a8);
        if (uVar12 != 0) {
          uVar9 = uVar9 & 0xfffffffe;
          *(uint *)(param_2 + 0x1a8) = uVar9;
        }
      }
      else {
LAB_71006c8ea4:
        if (0 < local_8 || uVar12 != 0) {
          uVar9 = (uint)*(undefined8 *)(param_2 + 0xf60);
          if ((uVar9 >> 0x1c & 1) != 0) {
            FUN_71006a2e80(param_1,2);
            *param_3 = '\x01';
            return 8;
          }
          lVar20 = *(long *)(param_2 + 0x198);
          if (lVar20 == 0 && uVar12 == 0) {
            if ((*(uint *)(param_1[0xc9] + 0x80) & 0x40003) == 0) {
              lVar20 = 0;
            }
            else {
              if (*(long *)(param_2 + 0x1b8) != 0) {
                if ((*(uint *)((long)param_1 + 0x624) & 1) != 0) {
                  *(uint *)(param_2 + 0x1a8) = *(uint *)(param_2 + 0x1a8) & 0xfffffffe;
                  *param_3 = '\x01';
                  return 0;
                }
                *(ushort *)(param_2 + 0x648) = *(ushort *)(param_2 + 0x648) | 8;
                FUN_71006c08c0(param_2,"Ignoring the response-body\n");
              }
              if ((((*(long *)(param_2 + 0x1580) != 0) &&
                   ((*(ushort *)(param_2 + 0x648) >> 1 & 1) == 0)) &&
                  (*(int *)(param_2 + 0xa28) == 1)) &&
                 ((*(ushort *)(param_2 + 0x648) >> 3 & 1) == 0)) {
                if (*(long *)(param_2 + 0x1580) != *plVar1) {
                  FUN_71006c0a00(param_2,
                                 "HTTP server doesn\'t seem to support byte ranges. Cannot resume.")
                  ;
                  return 0x21;
                }
                FUN_71006c08c0(param_2,"The entire document is already downloaded");
                FUN_71006a2e80(param_1,1);
                *(uint *)(param_2 + 0x1a8) = *(uint *)(param_2 + 0x1a8) & 0xfffffffe;
                *param_3 = '\x01';
                return 0;
              }
              if (((*(int *)(param_2 + 0xa18) != 0) && (*(long *)(param_2 + 0x1578) == 0)) &&
                 ((lVar20 = *(long *)(param_2 + 400), lVar20 != 0 &&
                  (lVar16 = *(long *)(param_2 + 0xa20), lVar16 != 0)))) {
                if (*(int *)(param_2 + 0xa18) == 2) {
                  if (lVar16 <= lVar20) {
                    FUN_71006c08c0(param_2,"The requested document is not old enough\n");
                    goto LAB_71006c991c;
                  }
                }
                else if (lVar20 <= lVar16) {
                  FUN_71006c08c0(param_2,"The requested document is not new enough\n");
LAB_71006c991c:
                  *(byte *)(param_2 + 0x1768) = *(byte *)(param_2 + 0x1768) | 1;
                  *param_3 = '\x01';
                  *(undefined4 *)(param_2 + 0x1680) = 0x130;
                  FUN_71006c08c0(param_2,"Simulate a HTTP 304 response!\n");
                  FUN_71006a2e80(param_1,1);
                  goto LAB_71006c92a8;
                }
              }
              lVar20 = *(long *)(param_2 + 0x198);
              uVar9 = (uint)*(undefined8 *)(param_2 + 0xf60);
            }
          }
          *(long *)(param_2 + 0x198) = lVar20 + 1;
          if ((uVar9 >> 0x1e & 1) == 0) {
LAB_71006c906c:
            if ((*(ushort *)(param_2 + 0x648) >> 5 & 1) != 0) {
LAB_71006c9074:
              iVar11 = FUN_71006ca600(param_1,*(undefined8 *)(param_2 + 0x140),local_8,&local_8,
                                      &local_c);
              if (0 < iVar11) {
                if (iVar11 != 6) {
                  uVar14 = FUN_71006caa50();
                  FUN_71006c0a00(param_2,"%s in chunked-encoding",uVar14);
                  return 0x38;
                }
                FUN_71006c0a00(param_2,"Failed reading the chunked-encoded stream");
                if (local_c != 0) {
                  return local_c;
                }
                goto LAB_71006c92a8;
              }
              if ((iVar11 == -1) &&
                 (lVar20 = param_1[0x57],
                 *(uint *)(param_2 + 0x1a8) = *(uint *)(param_2 + 0x1a8) & 0xfffffffe, lVar20 != 0))
              {
                FUN_71006c08c0(*param_1,"Leftovers after chunking: %zu bytes\n");
              }
            }
            lVar20 = *(long *)(param_2 + 0xe8);
            if ((*(int *)(param_2 + 0x128) == 1) && ((*(ushort *)(param_2 + 0x648) >> 3 & 1) == 0))
            {
              lVar20 = lVar20 + *(long *)(param_2 + 0x138);
              *(long *)(param_2 + 0xe8) = lVar20;
            }
          }
          else {
            if (*(int *)(param_2 + 0x128) == 0) {
              FUN_71006c07e0(param_2,3,*(undefined8 *)(param_2 + 0x140),local_8);
              goto LAB_71006c906c;
            }
            FUN_71006c07e0(param_2,3,*(undefined8 *)(param_2 + 0x1140),
                           *(undefined8 *)(param_2 + 0x138));
            if (*(int *)(param_2 + 0x128) == 1) {
              FUN_71006c07e0(param_2,3,*(undefined8 *)(param_2 + 0x140),local_8);
              goto LAB_71006c906c;
            }
            if ((*(ushort *)(param_2 + 0x648) >> 5 & 1) != 0) goto LAB_71006c9074;
            lVar20 = *(long *)(param_2 + 0xe8);
          }
          lVar19 = *(long *)(param_2 + 0xe0);
          lVar16 = lVar20 + local_8;
          if ((lVar19 != -1) && (lVar19 <= lVar16)) {
            local_30 = lVar16 - lVar19;
            lVar16 = lVar19;
            if ((local_30 != 0) && ((*(ushort *)(param_2 + 0x648) >> 3 & 1) == 0)) {
              FUN_71006c08c0(param_2,
                             "Excess found in a read: excess = %zu, size = %ld, maxdownload = %ld, bytecount = %ld\n"
                             ,local_30,*plVar1);
              lVar16 = *(long *)(param_2 + 0xe0);
              lVar20 = *(long *)(param_2 + 0xe8);
            }
            local_8 = lVar16 - lVar20;
            if (local_8 < 0) {
              local_8 = 0;
              lVar16 = lVar20;
            }
            *(uint *)(param_2 + 0x1a8) = *(uint *)(param_2 + 0x1a8) & 0xfffffffe;
          }
          *(long *)(param_2 + 0xe8) = lVar16;
          FUN_71006b8e90(param_2);
          uVar3 = *(ushort *)(param_2 + 0x648);
          if ((uVar3 >> 5 & 1) != 0) goto LAB_71006c9158;
          uVar9 = *(uint *)(param_2 + 0x128);
          if ((local_8 == 0) && (uVar12 == 0 && uVar9 == 0)) goto LAB_71006c91a8;
          if (uVar9 == 0) {
LAB_71006c911c:
            if (((*(ulong *)(*param_1 + 0xf60) >> 0x27 & 1) != 0) ||
               (*(long *)(param_2 + 0x188) == 0)) {
              lVar20 = param_1[0xc9];
              if ((uVar3 & 8) == 0) {
                if ((*(uint *)(lVar20 + 0x80) & 0xc000) == 0) {
                  uVar9 = FUN_71006c0c00(param_1,1,*(undefined8 *)(param_2 + 0x140),local_8);
                }
                else {
                  uVar9 = FUN_71006d2a60(param_1);
                }
                goto LAB_71006c914c;
              }
              *(undefined4 *)(param_2 + 0x128) = 0;
              goto LAB_71006c915c;
            }
            if ((uVar3 & 8) == 0) {
              uVar9 = FUN_71006cc100(param_1,*(long *)(param_2 + 0x188),
                                     *(undefined8 *)(param_2 + 0x140),local_8);
LAB_71006c914c:
              *(undefined4 *)(param_2 + 0x128) = 0;
              if (uVar9 != 0) {
                return uVar9;
              }
              goto LAB_71006c9158;
            }
          }
          else {
            if ((uVar3 >> 3 & 1) == 0) {
              lVar16 = *(long *)(param_2 + 0xe0);
              lVar20 = *(long *)(param_2 + 0x138);
              if ((lVar16 != -1) && (lVar16 < lVar20)) {
                lVar20 = lVar16;
              }
              uVar9 = FUN_71006c0c00(param_1,1,*(undefined8 *)(param_2 + 0x1140),lVar20);
              if (uVar9 != 0) {
                return uVar9;
              }
              uVar9 = *(uint *)(param_2 + 0x128);
            }
            if (uVar9 < 2) {
              uVar3 = *(ushort *)(param_2 + 0x648);
              goto LAB_71006c911c;
            }
          }
          lVar20 = param_1[0xc9];
          *(undefined4 *)(param_2 + 0x128) = 0;
          goto LAB_71006c915c;
        }
LAB_71006c91a8:
        pcVar18 = *(code **)(param_1[0xc9] + 0x68);
        if ((pcVar18 != (code *)0x0) && (local_30 != 0)) goto LAB_71006c9634;
        uVar9 = *(uint *)(param_2 + 0x1a8);
      }
      uVar12 = uVar7;
      if ((uVar9 >> 4 & 1) != 0) goto LAB_71006c9298;
      if (((*(uint *)(*(long *)(*(long *)(param_2 + 0x10) + 0x648) + 0x80) & 0x30) == 0) &&
         (cVar5 = thunk_FUN_71006b2cc0(*(long *)(param_2 + 0x10),0), cVar5 == '\0'))
      goto LAB_71006c9294;
      iVar10 = iVar10 + -1;
    } while (iVar10 != -1);
    uVar9 = *(uint *)(param_2 + 0x1a8);
LAB_71006c969c:
    *(undefined4 *)(param_1 + 0x113) = 1;
    *param_4 = 1;
    uVar7 = uVar12;
LAB_71006c929c:
    if (((uVar9 & 3) == 2) && ((*(uint *)((long)param_1 + 0x624) & 1) != 0)) {
      FUN_71006c08c0(param_2,"we are done reading and this is set to close, stop send\n");
      *(uint *)(param_2 + 0x1a8) = *(uint *)(param_2 + 0x1a8) & 0xfffffffd;
    }
LAB_71006c92a8:
    if (*param_3 != '\0') {
      return 0;
    }
    if (((*(uint *)(param_2 + 0x1a8) >> 1 & 1) != 0) && ((uVar8 >> 1 & 1) != 0)) {
LAB_71006c8ca4:
      if ((*(long *)(param_2 + 0xe8) == 0) && (*(long *)(param_2 + 0xf0) == 0)) {
        FUN_71006b8c70(param_2,7);
      }
      lVar20 = *(long *)(param_2 + 0x1c0);
      if (lVar20 == 0) {
        lVar20 = *(long *)(param_2 + 0x1158);
        if (lVar20 == 0) {
          lVar20 = (*(code *)PTR_FUN_7100af36a8)(*(undefined8 *)(param_2 + 3000));
          *(long *)(param_2 + 0x1158) = lVar20;
          if (lVar20 == 0) {
            return 0x1b;
          }
        }
        *(long *)(param_2 + 0x1c8) = lVar20;
        if ((*(ushort *)(param_2 + 0x648) >> 2 & 1) == 0) {
          if ((*(int *)(param_2 + 0x180) == 2) &&
             (*(int *)(*(long *)(param_2 + 0x1d0) + 0x210) == 2)) {
            *(undefined4 *)(param_2 + 0x180) = 1;
            *(uint *)(param_2 + 0x1a8) = *(uint *)(param_2 + 0x1a8) & 0xfffffffd;
            auVar21 = FUN_71006b7420();
            *(undefined1 (*) [16])(param_2 + 0x170) = auVar21;
            FUN_71006a42b0(param_2,*(undefined8 *)(param_2 + 0xf00),0);
            goto LAB_71006c92bc;
          }
          bVar4 = false;
          if ((*(uint *)(param_1[0xc9] + 0x80) & 0x40003) != 0) {
            bVar4 = *(int *)(*(long *)(param_2 + 0x1d0) + 0x210) == 1;
          }
          uVar7 = FUN_71006c85a0(param_1,*(undefined8 *)(param_2 + 3000));
          lVar20 = local_8;
          if (uVar7 != 0) {
            return uVar7;
          }
          if (local_8 == 0) goto LAB_71006c94cc;
          if (0 < local_8) {
            *(long *)(param_2 + 0x1c0) = local_8;
            lVar16 = local_8;
            if ((!bVar4) && ((*(ulong *)(param_2 + 0xf60) & 0x840) != 0)) {
              lVar19 = *(long *)(param_2 + 0x11d8);
              if (lVar19 == 0) {
                lVar19 = (*(code *)PTR_FUN_7100af36a8)(*(long *)(param_2 + 3000) << 1);
                *(long *)(param_2 + 0x11d8) = lVar19;
                if (lVar19 == 0) {
                  FUN_71006c0a00(param_2,"Failed to alloc scratch buffer!");
                  return 0x1b;
                }
              }
              lVar13 = 0;
              lVar17 = 0;
              while( true ) {
                cVar5 = *(char *)(*(long *)(param_2 + 0x1c8) + lVar13);
                if (cVar5 == '\n') {
                  *(undefined1 *)(lVar19 + lVar17) = 0xd;
                  lVar17 = lVar17 + 1;
                  *(undefined1 *)(*(long *)(param_2 + 0x11d8) + lVar17) = 10;
                  if ((((uint)*(undefined8 *)(param_2 + 0xf60) >> 6 & 1) == 0) &&
                     (lVar16 = *(long *)(param_2 + 0x15a0) + 1, lVar16 != 0)) {
                    *(long *)(param_2 + 0x15a0) = lVar16;
                  }
                }
                else {
                  *(char *)(lVar19 + lVar17) = cVar5;
                }
                lVar16 = lVar17 + 1;
                if (lVar20 == lVar13 + 1) break;
                lVar19 = *(long *)(param_2 + 0x11d8);
                lVar13 = lVar13 + 1;
                lVar17 = lVar16;
              }
              if (lVar17 != lVar13) {
                *(long *)(param_2 + 0x1c0) = lVar16;
                *(undefined8 *)(param_2 + 0x1c8) = *(undefined8 *)(param_2 + 0x11d8);
              }
            }
            if ((*(uint *)(param_1[0xc9] + 0x80) & 0x30000) == 0) {
              lVar20 = *(long *)(param_2 + 0x1c0);
            }
            else {
              uVar7 = FUN_71006d4e90(param_1,lVar16);
              if (uVar7 != 0) {
                return uVar7;
              }
              lVar20 = *(long *)(param_2 + 0x1c0);
            }
            goto LAB_71006c9354;
          }
          uVar7 = *(uint *)(param_2 + 0x1a8);
        }
        else {
LAB_71006c94cc:
          uVar7 = *(uint *)(param_2 + 0x1a8);
          if ((uVar7 >> 5 & 1) != 0) goto LAB_71006c93fc;
        }
        uVar8 = *(uint *)((long)param_1 + 0x624);
        *(uint *)(param_2 + 0x1a8) = uVar7 & 0xfffffffd;
joined_r0x0071006c95bc:
        if (((uVar8 >> 0x11 & 1) != 0) && (uVar7 = FUN_71006c89c0(param_1), uVar7 != 0)) {
          return uVar7;
        }
      }
      else {
LAB_71006c9354:
        uVar7 = FUN_71006c0660(param_1,*(undefined4 *)((long)param_1 + 0x67c),
                               *(undefined8 *)(param_2 + 0x1c8),lVar20,&local_8);
        if (uVar7 != 0) {
          return uVar7;
        }
        if (((uint)*(undefined8 *)(param_2 + 0xf60) >> 0x1e & 1) != 0) {
          FUN_71006c07e0(param_2,4,*(undefined8 *)(param_2 + 0x1c8),local_8);
        }
        *(long *)(param_2 + 0xf0) = *(long *)(param_2 + 0xf0) + local_8;
        FUN_71006b8fd0(param_2);
        if (((*(ulong *)(param_2 + 0x648) & 0x140) != 0x40) &&
           (*(long *)(param_2 + 0xf0) == *(long *)(param_2 + 0x15a0))) {
          *(ushort *)(param_2 + 0x648) = *(ushort *)(param_2 + 0x648) | 4;
          FUN_71006c08c0(param_2,"We are completely uploaded and fine\n");
        }
        if (*(long *)(param_2 + 0x1c0) == local_8) {
          lVar20 = *(long *)(param_2 + 0x1158);
          if (lVar20 == 0) {
            lVar20 = (*(code *)PTR_FUN_7100af36a8)(*(undefined8 *)(param_2 + 3000));
            *(long *)(param_2 + 0x1158) = lVar20;
            if (lVar20 == 0) {
              return 0x1b;
            }
          }
          *(undefined8 *)(param_2 + 0x1c0) = 0;
          *(long *)(param_2 + 0x1c8) = lVar20;
          if ((*(ushort *)(param_2 + 0x648) >> 2 & 1) != 0) {
            uVar8 = *(uint *)((long)param_1 + 0x624);
            *(uint *)(param_2 + 0x1a8) = *(uint *)(param_2 + 0x1a8) & 0xfffffffd;
            goto joined_r0x0071006c95bc;
          }
        }
        else {
          *(long *)(param_2 + 0x1c0) = *(long *)(param_2 + 0x1c0) - local_8;
          *(long *)(param_2 + 0x1c8) = *(long *)(param_2 + 0x1c8) + local_8;
        }
      }
LAB_71006c93fc:
      auVar21 = FUN_71006b7420();
      *(undefined1 (*) [16])(param_2 + 0x118) = auVar21;
      goto LAB_71006c8f28;
    }
LAB_71006c92bc:
    auVar21 = FUN_71006b7420();
    *(undefined1 (*) [16])(param_2 + 0x118) = auVar21;
    if (uVar7 != 0) goto LAB_71006c8f28;
  }
  if ((*(int *)(param_2 + 0x180) == 1) &&
     (lVar20 = FUN_71006b7490(*(undefined8 *)(param_2 + 0x118),*(undefined8 *)(param_2 + 0x120),
                              *(undefined8 *)(param_2 + 0x170),*(undefined8 *)(param_2 + 0x178)),
     *(long *)(param_2 + 0xf00) <= lVar20)) {
    *(undefined4 *)(param_2 + 0x180) = 0;
    *(uint *)(param_2 + 0x1a8) = *(uint *)(param_2 + 0x1a8) | 2;
    FUN_71006a6050(param_2,0);
    FUN_71006c08c0(param_2,"Done waiting for 100-continue\n");
  }
LAB_71006c8f28:
  iVar10 = FUN_71006b9040(param_1);
  if (iVar10 != 0) {
    return 0x2a;
  }
  uVar7 = FUN_71006c59d0(param_2,*(undefined8 *)(param_2 + 0x118),*(undefined8 *)(param_2 + 0x120));
  if (uVar7 != 0) {
    return uVar7;
  }
  if (*(int *)(param_2 + 0x1a8) == 0) {
    if (((uint)*(undefined8 *)(param_2 + 0xf60) >> 0x1c & 1) == 0) {
      lVar20 = *(long *)(param_2 + 0xd8);
      if ((((lVar20 != -1) && (lVar16 = *(long *)(param_2 + 0xe8), lVar20 != lVar16)) &&
          (lVar16 != lVar20 + *(long *)(param_2 + 0x1570))) && (*(long *)(param_2 + 0x1b8) == 0)) {
        FUN_71006c0a00(param_2,"transfer closed with %ld bytes remaining to read",lVar20 - lVar16);
        return 0x12;
      }
      if (((*(ushort *)(param_2 + 0x648) >> 5 & 1) != 0) && ((int)param_1[0x55] != 4)) {
        FUN_71006c0a00(param_2,"transfer closed with outstanding read data remaining");
        return 0x12;
      }
    }
    iVar10 = FUN_71006b9040(param_1);
    if (iVar10 != 0) {
      return 0x2a;
    }
  }
  else {
    lVar20 = FUN_71006a1800(param_2,param_2 + 0x118,0);
    if (lVar20 < 0) {
      if (*(long *)(param_2 + 0xd8) == -1) {
        uVar14 = FUN_71006b7490(*(undefined8 *)(param_2 + 0x118),*(undefined8 *)(param_2 + 0x120),
                                *(undefined8 *)(param_2 + 0x1028),*(undefined8 *)(param_2 + 0x1030))
        ;
        FUN_71006c0a00(param_2,"Operation timed out after %ld milliseconds with %ld bytes received",
                       uVar14,*(undefined8 *)(param_2 + 0xe8));
        return 0x1c;
      }
      uVar14 = FUN_71006b7490(*(undefined8 *)(param_2 + 0x118),*(undefined8 *)(param_2 + 0x120),
                              *(undefined8 *)(param_2 + 0x1028),*(undefined8 *)(param_2 + 0x1030));
      FUN_71006c0a00(param_2,
                     "Operation timed out after %ld milliseconds with %ld out of %ld bytes received"
                     ,uVar14,*(undefined8 *)(param_2 + 0xe8),*(undefined8 *)(param_2 + 0xd8));
      return 0x1c;
    }
  }
  *param_3 = (*(uint *)(param_2 + 0x1a8) & 0x33) == 0;
  return 0;
}



// ===== FUN_71006c9a30 @ 71006c9a30 (size=148) =====

ulong FUN_71006c9a30(long *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  
  lVar5 = *param_1;
  if (*(code **)(param_1[0xc9] + 0x58) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0071006c9a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(param_1[0xc9] + 0x58))();
    return uVar3;
  }
  uVar4 = *(uint *)(lVar5 + 0x1a8);
  uVar3 = (ulong)(uVar4 & 0x15);
  if ((uVar4 & 0x15) == 1) {
    *param_2 = (int)param_1[0xcf];
    uVar4 = *(uint *)(lVar5 + 0x1a8);
  }
  else {
    uVar3 = 0;
  }
  if ((uVar4 & 0x2a) != 2) {
    return uVar3;
  }
  iVar1 = *(int *)((long)param_1 + 0x67c);
  uVar4 = 0x10000;
  uVar2 = (uint)uVar3;
  if ((int)param_1[0xcf] == iVar1) {
    if (uVar2 == 0) {
      *param_2 = iVar1;
    }
  }
  else {
    uVar4 = 0x10000;
    if (uVar2 != 0) {
      param_2 = param_2 + 1;
      uVar4 = 0x20000;
    }
    *param_2 = iVar1;
  }
  return (ulong)(uVar2 | uVar4);
}



// ===== FUN_71006c9ad0 @ 71006c9ad0 (size=20) =====

void FUN_71006c9ad0(long param_1)

{
  *(undefined8 *)(param_1 + 0x15b8) = *(undefined8 *)(param_1 + 0x678);
  *(undefined8 *)(param_1 + 0x15b0) = *(undefined8 *)(param_1 + 0x700);
  return;
}



// ===== FUN_71006c9af0 @ 71006c9af0 (size=496) =====

int FUN_71006c9af0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0xf68) == 0) {
    lVar5 = *(long *)(param_1 + 0xf48);
    if (lVar5 != 0) {
      if ((*(byte *)(param_1 + 0xf88) & 1) != 0) goto LAB_71006c9c0c;
LAB_71006c9c34:
      iVar3 = FUN_71006dc540(lVar5,0,param_1 + 0xce8,0);
      if (iVar3 == 0) goto LAB_71006c9b10;
    }
    iVar3 = 3;
    FUN_71006c0a00(param_1,"No URL set!");
  }
  else {
    if ((*(byte *)(param_1 + 0xf88) & 1) != 0) {
LAB_71006c9c0c:
      (*(code *)PTR_FUN_7100af36a0)();
      *(undefined8 *)(param_1 + 0xf68) = 0;
      lVar5 = *(long *)(param_1 + 0xf48);
      *(byte *)(param_1 + 0xf88) = *(byte *)(param_1 + 0xf88) & 0xfe;
      if (lVar5 != 0) goto LAB_71006c9c34;
    }
LAB_71006c9b10:
    *(undefined8 *)(param_1 + 0xf68) = *(undefined8 *)(param_1 + 0xce8);
    iVar2 = FUN_71006b1c00(param_1,*(undefined8 *)(param_1 + 0xb98));
    iVar3 = iVar2;
    if (iVar2 == 0) {
      *(undefined8 *)(param_1 + 0x6b0) = 0;
      *(undefined4 *)(param_1 + 0x1568) = 0;
      puVar1 = PTR_FUN_7100af36a0;
      *(byte *)(param_1 + 0x162c) =
           *(byte *)(param_1 + 0x162c) & 0x55 |
           (byte)(((uint)((ulong)*(undefined8 *)(param_1 + 0xf60) >> 0x2a) & 1) << 7);
      *(undefined8 *)(param_1 + 0x1270) = *(undefined8 *)(param_1 + 0x698);
      *(undefined8 *)(param_1 + 0x1290) = *(undefined8 *)(param_1 + 0x6a0);
      (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x16c8));
      iVar3 = *(int *)(param_1 + 0xa28);
      *(undefined8 *)(param_1 + 0x16c8) = 0;
      if (iVar3 == 5) {
        *(undefined8 *)(param_1 + 0x15a0) = *(undefined8 *)(param_1 + 0x7c0);
      }
      else if (iVar3 == 1 || iVar3 == 6) {
        *(undefined8 *)(param_1 + 0x15a0) = 0;
      }
      else {
        *(long *)(param_1 + 0x15a0) = *(long *)(param_1 + 0x6d8);
        if (*(long *)(param_1 + 0x6c8) != 0 && *(long *)(param_1 + 0x6d8) == -1) {
          uVar4 = FUN_710081ce00();
          *(undefined8 *)(param_1 + 0x15a0) = uVar4;
        }
      }
      if (*(long *)(param_1 + 0xf78) != 0) {
        FUN_71006bb440(param_1);
      }
      if ((*(long *)(param_1 + 0xf80) == 0) || (iVar3 = FUN_71006b84b0(param_1), iVar3 == 0)) {
        *(ushort *)(param_1 + 0x162c) = *(ushort *)(param_1 + 0x162c) | 0x10;
        FUN_71006c7ae0(param_1);
        FUN_71006b8c50(param_1);
        FUN_71006b8f60(param_1);
        *(ulong *)(param_1 + 0x1278) = *(ulong *)(param_1 + 0x1278) & *(ulong *)(param_1 + 0x1270);
        *(ulong *)(param_1 + 0x1298) = *(ulong *)(param_1 + 0x1298) & *(ulong *)(param_1 + 0x1290);
        iVar3 = iVar2;
        if (((*(ushort *)(param_1 + 0x162c) >> 7 & 1) != 0) && (*(int *)(param_1 + 0x1630) == 0)) {
          iVar2 = FUN_71006ca530(param_1 + 0x1630);
          iVar3 = 0;
          if (iVar2 != 0) {
            iVar3 = 0x1b;
          }
        }
      }
    }
  }
  return iVar3;
}



// ===== FUN_71006c9ce0 @ 71006c9ce0 (size=8) =====

undefined8 FUN_71006c9ce0(void)

{
  return 0;
}



// ===== FUN_71006c9cf0 @ 71006c9cf0 (size=788) =====

ulong FUN_71006c9cf0(long param_1,long param_2,int param_3)

{
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long local_8;
  
  local_8 = param_2;
  if (param_3 == 3) {
    if ((*(long *)(param_1 + 0x6b8) != -1) &&
       (*(long *)(param_1 + 0x6b8) <= *(long *)(param_1 + 0x6b0))) {
      bVar2 = true;
      FUN_71006db8e0(param_2,0,0x28);
      uVar6 = *(undefined8 *)(param_1 + 0x15d0);
LAB_71006c9e70:
      iVar4 = FUN_71006dcb90(uVar6,0,local_8,8);
      if (iVar4 != 0) {
        local_8 = (*(code *)PTR_FUN_7100af36b8)(local_8);
        if (local_8 == 0) {
          return 0x1b;
        }
LAB_71006c9e9c:
        *(long *)(param_1 + 0x16c8) = local_8;
        if (bVar2) {
          FUN_71006c0a00(param_1,"Maximum (%ld) redirects followed",*(undefined8 *)(param_1 + 0x6b8)
                        );
          return 0x2f;
        }
        return 0;
      }
      uVar5 = FUN_71006dc540(*(undefined8 *)(param_1 + 0x15d0),0,&local_8,0);
      uVar9 = (ulong)uVar5;
      if (uVar5 == 0) goto LAB_71006c9e9c;
      goto LAB_71006c9ec8;
    }
    *(long *)(param_1 + 0x6b0) = *(long *)(param_1 + 0x6b0) + 1;
    *(ushort *)(param_1 + 0x162c) = *(ushort *)(param_1 + 0x162c) | 2;
    if (((uint)*(undefined8 *)(param_1 + 0xf60) >> 0x1b & 1) != 0) {
      if ((*(byte *)(param_1 + 0xf88) >> 1 & 1) != 0) {
        (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(param_1 + 0xf70));
        *(undefined8 *)(param_1 + 0xf70) = 0;
        *(byte *)(param_1 + 0xf88) = *(byte *)(param_1 + 0xf88) & 0xfd;
      }
      lVar7 = (*(code *)PTR_FUN_7100af36b8)(*(undefined8 *)(param_1 + 0xf68));
      *(long *)(param_1 + 0xf70) = lVar7;
      if (lVar7 == 0) {
        return 0x1b;
      }
      *(byte *)(param_1 + 0xf88) = *(byte *)(param_1 + 0xf88) | 2;
    }
    cVar3 = FUN_71006db8e0(local_8,0,0x28);
    uVar8 = 0x80;
    uVar6 = *(undefined8 *)(param_1 + 0x15d0);
  }
  else {
    cVar3 = FUN_71006db8e0(param_2,0,0x28);
    uVar8 = 0;
    uVar6 = *(undefined8 *)(param_1 + 0x15d0);
    if (param_3 == 1) {
      bVar2 = false;
      goto LAB_71006c9e70;
    }
  }
  uVar9 = FUN_71006dcb90(uVar6,0,local_8,uVar8);
  if ((int)uVar9 != 0) {
LAB_71006c9ec8:
    uVar9 = FUN_71006c2610(uVar9);
    return uVar9 & 0xffffffff;
  }
  uVar5 = FUN_71006dc540(*(undefined8 *)(param_1 + 0x15d0),0,&local_8,0);
  uVar9 = (ulong)uVar5;
  if (uVar5 != 0) goto LAB_71006c9ec8;
  if (cVar3 != '\0') {
    *(ushort *)(param_1 + 0x162c) = *(ushort *)(param_1 + 0x162c) & 0xffef;
  }
  if ((*(byte *)(param_1 + 0xf88) & 1) != 0) {
    (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(param_1 + 0xf68));
  }
  *(long *)(param_1 + 0xf68) = local_8;
  *(byte *)(param_1 + 0xf88) = *(byte *)(param_1 + 0xf88) | 1;
  FUN_71006c08c0(param_1,"Issue another request to this URL: \'%s\'\n");
  iVar4 = *(int *)(param_1 + 0x1680);
  if (iVar4 == 0x12e) {
    if (2 < *(int *)(param_1 + 0xa28) - 2U) goto LAB_71006c9e18;
    uVar5 = *(uint *)(param_1 + 0x6c0) >> 1;
  }
  else {
    if (iVar4 == 0x12f) {
      if ((*(int *)(param_1 + 0xa28) != 1) && ((*(uint *)(param_1 + 0x6c0) >> 2 & 1) == 0)) {
        *(undefined4 *)(param_1 + 0xa28) = 1;
        puVar1 = &UNK_7100847358;
        if ((*(ulong *)(param_1 + 0xf60) & 0x10000000) == 0) {
          puVar1 = &DAT_7100847368;
        }
        FUN_71006c08c0(param_1,"Disables POST, goes with %s\n",puVar1);
      }
      goto LAB_71006c9e18;
    }
    if ((iVar4 != 0x12d) || (2 < *(int *)(param_1 + 0xa28) - 2U)) goto LAB_71006c9e18;
    uVar5 = *(uint *)(param_1 + 0x6c0);
  }
  if ((uVar5 & 1) == 0) {
    FUN_71006c08c0(param_1,"Switch from POST to GET\n");
    *(undefined4 *)(param_1 + 0xa28) = 1;
  }
LAB_71006c9e18:
  FUN_71006b8c70(param_1,10);
  FUN_71006b8c50(param_1);
  return uVar9;
}



// ===== FUN_71006ca010 @ 71006ca010 (size=332) =====

int FUN_71006ca010(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  *param_2 = 0;
  uVar3 = (uint)*(undefined8 *)(lVar4 + 0xf60);
  if ((((uVar3 >> 0x1d & 1) == 0) || ((*(uint *)(param_1[0xc9] + 0x80) & 0x40003) != 0)) &&
     (*(long *)(lVar4 + 0xe8) + *(long *)(lVar4 + 0xf8) == 0)) {
    if ((((*(uint *)((long)param_1 + 0x624) >> 1 & 1) == 0) ||
        (((uVar3 >> 0x1c & 1) != 0 && ((*(uint *)(param_1[0xc9] + 0x80) & 3) == 0)))) ||
       (lVar2 = lVar4, *(int *)(lVar4 + 0xeb0) == 0xb)) {
      if ((*(ushort *)(lVar4 + 0x162c) >> 2 & 1) == 0) {
        return 0;
      }
      FUN_71006c08c0(lVar4,"REFUSED_STREAM, retrying a fresh connect\n");
      *(ushort *)(lVar4 + 0x162c) = *(ushort *)(lVar4 + 0x162c) & 0xfffb;
      lVar2 = *param_1;
    }
    FUN_71006c08c0(lVar2,"Connection died, retrying a fresh connect\n");
    lVar2 = (*(code *)PTR_FUN_7100af36b8)(*(undefined8 *)(*param_1 + 0xf68));
    *param_2 = lVar2;
    if (lVar2 == 0) {
      return 0x1b;
    }
    FUN_71006a2e80(param_1,1);
    *(uint *)((long)param_1 + 0x624) = *(uint *)((long)param_1 + 0x624) | 0x4000;
    if (((*(uint *)(param_1[0xc9] + 0x80) & 3) != 0) && (*(long *)(lVar4 + 0xf0) != 0)) {
      iVar1 = FUN_71006c89c0(param_1);
      if (iVar1 != 0) {
        (*(code *)PTR_FUN_7100af36a0)(*param_2);
        *param_2 = 0;
        return iVar1;
      }
      return 0;
    }
  }
  return 0;
}



// ===== FUN_71006ca160 @ 71006ca160 (size=380) =====

void FUN_71006ca160(long param_1,int param_2,long param_3,uint param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (((*(uint *)(lVar4 + 0x624) >> 0x1a & 1) == 0) && (*(int *)(lVar4 + 0x4a0) != 0x14)) {
    uVar3 = 0xffffffff;
    if (param_2 != -1) {
      uVar3 = *(undefined4 *)(lVar4 + (long)param_2 * 4 + 0x4d8);
    }
    *(undefined4 *)(lVar4 + 0x678) = uVar3;
    uVar3 = 0xffffffff;
    if (param_5 != -1) {
      uVar3 = *(undefined4 *)(lVar4 + (long)param_5 * 4 + 0x4d8);
    }
  }
  else {
    if (param_2 == -1) {
      uVar3 = 0xffffffff;
      if (param_5 != -1) {
        uVar3 = *(undefined4 *)(lVar4 + (long)param_5 * 4 + 0x4d8);
      }
    }
    else {
      uVar3 = *(undefined4 *)(lVar4 + (long)param_2 * 4 + 0x4d8);
    }
    *(undefined4 *)(lVar4 + 0x678) = uVar3;
  }
  *(undefined4 *)(lVar4 + 0x67c) = uVar3;
  uVar1 = *(ushort *)(param_1 + 0x648);
  uVar2 = (ushort)((param_4 & 1) << 7);
  *(ushort *)(param_1 + 0x648) = uVar1 & 0xff00 | uVar1 & 0x7f | uVar2;
  *(long *)(param_1 + 0xd8) = param_3;
  if ((param_4 & 1) == 0) {
    *(ushort *)(param_1 + 0x648) = uVar1 & 0xff00 | uVar1 & 0x7e | uVar2;
    if (0 < param_3) {
      FUN_71006b8fe0(param_1,param_3);
    }
    if (((*(ushort *)(param_1 + 0x648) >> 7 & 1) == 0) &&
       (((uint)*(undefined8 *)(param_1 + 0xf60) >> 0x1c & 1) != 0)) {
      return;
    }
  }
  if (param_2 != -1) {
    *(uint *)(param_1 + 0x1a8) = *(uint *)(param_1 + 0x1a8) | 1;
  }
  if (param_5 != -1) {
    if ((*(ushort *)(param_1 + 0x162c) >> 8 & 1) != 0) {
      if (((*(uint *)(*(long *)(lVar4 + 0x648) + 0x80) & 3) != 0) &&
         (*(int *)(*(long *)(param_1 + 0x1d0) + 0x210) == 2)) {
        *(undefined4 *)(param_1 + 0x180) = 1;
        auVar5 = FUN_71006b7420();
        *(undefined1 (*) [16])(param_1 + 0x170) = auVar5;
        FUN_71006a42b0(param_1,*(undefined8 *)(param_1 + 0xf00),0);
        return;
      }
      *(undefined4 *)(param_1 + 0x180) = 2;
    }
    *(uint *)(param_1 + 0x1a8) = *(uint *)(param_1 + 0x1a8) | 2;
  }
  return;
}



// ===== FUN_71006ca2e0 @ 71006ca2e0 (size=32) =====

char FUN_71006ca2e0(char param_1)

{
  if ((byte)(param_1 + 0x9fU) < 0x1a) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}



// ===== FUN_71006ca300 @ 71006ca300 (size=188) =====

bool FUN_71006ca300(char *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  
  cVar5 = *param_1;
  if (cVar5 == '\0') {
    cVar7 = *param_2;
    bVar4 = cVar7 + 0x9f;
    cVar6 = cVar5;
  }
  else {
    do {
      pcVar3 = param_2;
      bVar2 = cVar5 + 0x9f;
      cVar7 = *pcVar3;
      if (cVar7 == '\0') {
        cVar7 = cVar5 + -0x20;
        if (0x19 < bVar2) {
          cVar7 = cVar5;
        }
        return cVar7 == '\0';
      }
      cVar6 = cVar5 + -0x20;
      if (0x19 < bVar2) {
        cVar6 = cVar5;
      }
      bVar4 = cVar7 + 0x9f;
      cVar1 = cVar7 + -0x20;
      if (0x19 < bVar4) {
        cVar1 = cVar7;
      }
      if (cVar1 != cVar6) {
        cVar6 = cVar5 + -0x20;
        if (0x19 < bVar2) {
          cVar6 = cVar5;
        }
        goto LAB_71006ca380;
      }
      param_1 = param_1 + 1;
      cVar5 = *param_1;
      param_2 = pcVar3 + 1;
    } while (cVar5 != '\0');
    cVar7 = pcVar3[1];
    bVar4 = cVar7 + 0x9f;
    cVar6 = cVar5;
  }
LAB_71006ca380:
  cVar5 = cVar7 + -0x20;
  if (0x19 < bVar4) {
    cVar5 = cVar7;
  }
  return cVar5 == cVar6;
}



// ===== FUN_71006ca3c0 @ 71006ca3c0 (size=32) =====

ulong FUN_71006ca3c0(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_1 == 0 || param_2 == 0) {
    return (ulong)(param_1 == 0 && param_2 == 0);
  }
  uVar1 = FUN_71006ca300();
  return uVar1;
}



// ===== FUN_71006ca3e0 @ 71006ca3e0 (size=196) =====

bool FUN_71006ca3e0(char *param_1,char *param_2,long param_3)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  
  cVar1 = *param_1;
  do {
    if (cVar1 == '\0') {
      if (param_3 == 0) {
        return true;
      }
      cVar2 = *param_2;
      bVar3 = cVar2 + 0x9f;
      cVar4 = '\0';
LAB_71006ca484:
      cVar5 = cVar2 + -0x20;
      if (0x19 < bVar3) {
        cVar5 = cVar2;
      }
LAB_71006ca45c:
      return cVar5 == cVar4;
    }
    cVar2 = *param_2;
    if (cVar2 == '\0') {
      if (param_3 == 0) {
        return true;
      }
      cVar4 = cVar1 + -0x20;
      cVar5 = cVar2;
      if (0x19 < (byte)(cVar1 + 0x9fU)) {
        cVar4 = cVar1;
      }
      goto LAB_71006ca45c;
    }
    cVar4 = cVar1 + -0x20;
    if (0x19 < (byte)(cVar1 + 0x9fU)) {
      cVar4 = cVar1;
    }
    if (param_3 == 0) {
      return true;
    }
    bVar3 = cVar2 + 0x9f;
    cVar5 = cVar2 + -0x20;
    if (0x19 < bVar3) {
      cVar5 = cVar2;
    }
    param_3 = param_3 + -1;
    param_2 = param_2 + 1;
    if (cVar5 != cVar4) {
      cVar4 = cVar1 + -0x20;
      if (0x19 < (byte)(cVar1 + 0x9fU)) {
        cVar4 = cVar1;
      }
      goto LAB_71006ca484;
    }
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  } while( true );
}



// ===== FUN_71006ca4b0 @ 71006ca4b0 (size=68) =====

void FUN_71006ca4b0(long param_1,long param_2,long param_3)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  
  if (param_3 != 0) {
    lVar4 = 0;
    do {
      cVar3 = *(char *)(param_2 + lVar4);
      cVar2 = cVar3 + -0x20;
      if (0x19 < (byte)(cVar3 + 0x9fU)) {
        cVar2 = cVar3;
      }
      *(char *)(param_1 + lVar4) = cVar2;
      pcVar1 = (char *)(param_2 + lVar4);
      lVar4 = lVar4 + 1;
    } while ((*pcVar1 != '\0') && (param_3 != lVar4));
  }
  return;
}



// ===== thunk_FUN_71006ca300 @ 71006ca500 (size=4) =====

bool thunk_FUN_71006ca300(char *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  
  cVar5 = *param_1;
  if (cVar5 == '\0') {
    cVar7 = *param_2;
    bVar4 = cVar7 + 0x9f;
    cVar6 = cVar5;
  }
  else {
    do {
      pcVar3 = param_2;
      bVar2 = cVar5 + 0x9f;
      cVar7 = *pcVar3;
      if (cVar7 == '\0') {
        cVar7 = cVar5 + -0x20;
        if (0x19 < bVar2) {
          cVar7 = cVar5;
        }
        return cVar7 == '\0';
      }
      cVar6 = cVar5 + -0x20;
      if (0x19 < bVar2) {
        cVar6 = cVar5;
      }
      bVar4 = cVar7 + 0x9f;
      cVar1 = cVar7 + -0x20;
      if (0x19 < bVar4) {
        cVar1 = cVar7;
      }
      if (cVar1 != cVar6) {
        cVar6 = cVar5 + -0x20;
        if (0x19 < bVar2) {
          cVar6 = cVar5;
        }
        goto LAB_71006ca380;
      }
      param_1 = param_1 + 1;
      cVar5 = *param_1;
      param_2 = pcVar3 + 1;
    } while (cVar5 != '\0');
    cVar7 = pcVar3[1];
    bVar4 = cVar7 + 0x9f;
    cVar6 = cVar5;
  }
LAB_71006ca380:
  cVar5 = cVar7 + -0x20;
  if (0x19 < bVar4) {
    cVar5 = cVar7;
  }
  return cVar5 == cVar6;
}



// ===== thunk_FUN_71006ca3e0 @ 71006ca510 (size=4) =====

bool thunk_FUN_71006ca3e0(char *param_1,char *param_2,long param_3)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  
  cVar1 = *param_1;
  do {
    if (cVar1 == '\0') {
      if (param_3 == 0) {
        return true;
      }
      cVar2 = *param_2;
      bVar3 = cVar2 + 0x9f;
      cVar4 = '\0';
LAB_71006ca484:
      cVar5 = cVar2 + -0x20;
      if (0x19 < bVar3) {
        cVar5 = cVar2;
      }
LAB_71006ca45c:
      return cVar5 == cVar4;
    }
    cVar2 = *param_2;
    if (cVar2 == '\0') {
      if (param_3 == 0) {
        return true;
      }
      cVar4 = cVar1 + -0x20;
      cVar5 = cVar2;
      if (0x19 < (byte)(cVar1 + 0x9fU)) {
        cVar4 = cVar1;
      }
      goto LAB_71006ca45c;
    }
    cVar4 = cVar1 + -0x20;
    if (0x19 < (byte)(cVar1 + 0x9fU)) {
      cVar4 = cVar1;
    }
    if (param_3 == 0) {
      return true;
    }
    bVar3 = cVar2 + 0x9f;
    cVar5 = cVar2 + -0x20;
    if (0x19 < bVar3) {
      cVar5 = cVar2;
    }
    param_3 = param_3 + -1;
    param_2 = param_2 + 1;
    if (cVar5 != cVar4) {
      cVar4 = cVar1 + -0x20;
      if (0x19 < (byte)(cVar1 + 0x9fU)) {
        cVar4 = cVar1;
      }
      goto LAB_71006ca484;
    }
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  } while( true );
}



// ===== FUN_71006ca530 @ 71006ca530 (size=56) =====

undefined8 FUN_71006ca530(undefined4 *param_1)

{
  FUN_71006caaf0(param_1 + 6,&LAB_71006ca520);
  *param_1 = 1;
  return 0;
}



// ===== FUN_71006ca570 @ 71006ca570 (size=120) =====

void FUN_71006ca570(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if (*(code **)(param_1 + 0x10) != (code *)0x0) {
      (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0xe));
      *(undefined8 *)(param_1 + 0xe) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    FUN_71006cac10(param_1 + 6,0);
    (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(param_1 + 2));
    *(undefined8 *)(param_1 + 2) = 0;
    (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(param_1 + 4));
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    *param_1 = 1;
    return;
  }
  return;
}



// ===== FUN_71006ca5f0 @ 71006ca5f0 (size=16) =====

void FUN_71006ca5f0(long param_1)

{
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2a4) = 0;
  return;
}



// ===== FUN_71006ca600 @ 71006ca600 (size=1104) =====

undefined8 FUN_71006ca600(long *param_1,char *param_2,long param_3,long *param_4,int *param_5)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_8 [8];
  
  lVar10 = *param_1;
  *param_4 = 0;
  if ((((*(ulong *)(lVar10 + 0xf60) >> 0x26 & 1) != 0) &&
      ((*(ushort *)(lVar10 + 0x648) >> 3 & 1) == 0)) &&
     (iVar7 = FUN_71006c0c00(param_1,1,param_2,param_3), iVar7 != 0)) {
    *param_5 = iVar7;
    return 6;
  }
  plVar1 = param_1 + 0x52;
joined_r0x0071006ca65c:
  puVar6 = PTR_FUN_7100af36b0;
  puVar5 = PTR_FUN_7100af36a8;
  if (param_3 == 0) {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 0x55);
  if (uVar2 == 4) {
    if (*param_2 == '\n') {
      lVar10 = FUN_71006a8860(param_3 + -1);
      param_1[0x57] = lVar10;
      return 0xffffffff;
    }
    return 3;
  }
  if (uVar2 < 5) {
    if (uVar2 == 2) {
      lVar8 = param_1[0x56];
      if (param_3 < param_1[0x56]) {
        lVar8 = param_3;
      }
      lVar8 = FUN_71006a8860(lVar8);
      if (((*(ulong *)(*param_1 + 0xf60) >> 0x26 & 1) == 0) &&
         ((*(ushort *)(lVar10 + 0x648) >> 3 & 1) == 0)) {
        if (((*(ulong *)(*param_1 + 0xf60) >> 0x27 & 1) == 0) && (*(long *)(lVar10 + 0x188) != 0)) {
          iVar7 = FUN_71006cc100(param_1);
        }
        else {
          iVar7 = FUN_71006c0c00(param_1,1,param_2,lVar8);
        }
        if (iVar7 != 0) {
LAB_71006ca9f4:
          *param_5 = iVar7;
          return 6;
        }
      }
      param_2 = param_2 + lVar8;
      param_3 = param_3 - lVar8;
      *param_4 = *param_4 + lVar8;
      lVar9 = param_1[0x56];
      param_1[0x56] = lVar9 - lVar8;
      if (lVar9 - lVar8 == 0) {
        *(undefined4 *)(param_1 + 0x55) = 3;
      }
      goto joined_r0x0071006ca65c;
    }
    if (uVar2 == 3) {
      if (*param_2 == '\n') {
        param_1[0x57] = 0;
        *(undefined8 *)((long)param_1 + 0x2a4) = 0;
      }
      else if (*param_2 != '\r') {
        return 3;
      }
    }
    else {
      if (uVar2 == 0) {
        iVar7 = FUN_71006af500(*param_2);
        if (iVar7 != 0) {
          iVar7 = *(int *)((long)param_1 + 0x2a4);
          if (0xf < iVar7) {
            return 1;
          }
          param_3 = param_3 + -1;
          *(char *)((long)plVar1 + (long)iVar7) = *param_2;
          *(int *)((long)param_1 + 0x2a4) = iVar7 + 1;
          param_2 = param_2 + 1;
          goto joined_r0x0071006ca65c;
        }
        if (*(int *)((long)param_1 + 0x2a4) != 0) {
          *(undefined1 *)((long)plVar1 + (long)*(int *)((long)param_1 + 0x2a4)) = 0;
          iVar7 = FUN_71006cd340(plVar1,auStack_8,0x10,param_1 + 0x56);
          if (iVar7 == 0) {
            *(undefined4 *)(param_1 + 0x55) = 1;
            goto joined_r0x0071006ca65c;
          }
        }
        return 2;
      }
      if (uVar2 != 1) goto joined_r0x0071006ca65c;
      if (*param_2 == '\n') {
        if (param_1[0x56] == 0) {
          *(undefined4 *)(param_1 + 0x55) = 5;
          *(undefined4 *)((long)param_1 + 0x73c) = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0x55) = 2;
        }
      }
    }
  }
  else {
    if (uVar2 == 6) {
      if (*param_2 != '\n') {
        return 3;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
      *(undefined4 *)(param_1 + 0x55) = 7;
      goto joined_r0x0071006ca65c;
    }
    if (uVar2 == 7) {
      cVar4 = *param_2;
      if (cVar4 == '\r' || cVar4 == '\n') {
        if (cVar4 == '\r') {
          param_2 = param_2 + 1;
          param_3 = param_3 + -1;
        }
        *(undefined4 *)(param_1 + 0x55) = 4;
      }
      else {
        *(undefined4 *)(param_1 + 0x55) = 5;
      }
      goto joined_r0x0071006ca65c;
    }
    if (uVar2 != 5) goto joined_r0x0071006ca65c;
    iVar7 = *(int *)((long)param_1 + 0x73c);
    if (*param_2 != '\r' && *param_2 != '\n') {
      iVar3 = (int)param_1[0xe7];
      if (iVar7 < iVar3) {
        lVar8 = param_1[0xe6];
      }
      else {
        if (iVar3 == 0) {
          *(undefined4 *)(param_1 + 0xe7) = 0x80;
          lVar8 = (*(code *)puVar5)(0x83);
        }
        else {
          *(int *)(param_1 + 0xe7) = iVar3 * 2;
          lVar8 = (*(code *)puVar6)(param_1[0xe6],(long)(iVar3 * 2 + 3));
        }
        if (lVar8 == 0) {
          return 5;
        }
        iVar7 = *(int *)((long)param_1 + 0x73c);
        param_1[0xe6] = lVar8;
      }
      *(int *)((long)param_1 + 0x73c) = iVar7 + 1;
      *(char *)(lVar8 + iVar7) = *param_2;
      goto LAB_71006ca69c;
    }
    if (iVar7 == 0) {
      *(undefined4 *)(param_1 + 0x55) = 7;
      goto joined_r0x0071006ca65c;
    }
    *(int *)((long)param_1 + 0x73c) = iVar7 + 1;
    *(undefined1 *)(param_1[0xe6] + (long)iVar7) = 0xd;
    iVar7 = *(int *)((long)param_1 + 0x73c);
    *(int *)((long)param_1 + 0x73c) = iVar7 + 1;
    *(undefined1 *)(param_1[0xe6] + (long)iVar7) = 10;
    *(undefined1 *)(param_1[0xe6] + (long)*(int *)((long)param_1 + 0x73c)) = 0;
    if (((*(ulong *)(lVar10 + 0xf60) >> 0x26 & 1) == 0) &&
       (iVar7 = FUN_71006c0c00(param_1,2,param_1[0xe6],(long)*(int *)((long)param_1 + 0x73c)),
       iVar7 != 0)) goto LAB_71006ca9f4;
    *(undefined4 *)((long)param_1 + 0x73c) = 0;
    *(undefined4 *)(param_1 + 0x55) = 6;
    if (*param_2 == '\n') goto joined_r0x0071006ca65c;
  }
LAB_71006ca69c:
  param_3 = param_3 + -1;
  param_2 = param_2 + 1;
  goto joined_r0x0071006ca65c;
}



// ===== FUN_71006caa50 @ 71006caa50 (size=148) =====

char * FUN_71006caa50(int param_1)

{
  char *pcVar1;
  
  if (param_1 == 4) {
    return "Bad content-encoding found";
  }
  if (4 < param_1) {
    if (param_1 == 5) {
      return "Out of memory";
    }
    if (param_1 == 6) {
      return "";
    }
    return "OK";
  }
  if (param_1 == 2) {
    return "Illegal or missing hexadecimal sequence";
  }
  if (param_1 == 3) {
    return "Malformed encoding found";
  }
  pcVar1 = "OK";
  if (param_1 == 1) {
    pcVar1 = "Too long hexadecimal number";
  }
  return pcVar1;
}



// ===== FUN_71006caaf0 @ 71006caaf0 (size=12) =====

void FUN_71006caaf0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  param_1[3] = 0;
  return;
}



// ===== FUN_71006cab00 @ 71006cab00 (size=116) =====

void FUN_71006cab00(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_4 = param_3;
  lVar2 = param_1[3];
  if (lVar2 == 0) {
    *param_1 = (long)param_4;
    param_4[1] = 0;
    param_4[2] = 0;
    param_1[1] = (long)param_4;
    param_1[3] = 1;
    return;
  }
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    param_4[1] = param_2;
    param_4[2] = uVar3;
    if (*(long *)(param_2 + 0x10) == 0) {
      param_1[1] = (long)param_4;
      *(undefined8 **)(param_2 + 0x10) = param_4;
    }
    else {
      *(undefined8 **)(*(long *)(param_2 + 0x10) + 8) = param_4;
      *(undefined8 **)(param_2 + 0x10) = param_4;
    }
    param_1[3] = lVar2 + 1;
    return;
  }
  lVar1 = *param_1;
  param_4[1] = 0;
  param_4[2] = lVar1;
  *(undefined8 **)(lVar1 + 8) = param_4;
  *param_1 = (long)param_4;
  param_1[3] = lVar2 + 1;
  return;
}



// ===== FUN_71006cab80 @ 71006cab80 (size=140) =====

void FUN_71006cab80(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((param_2 != (undefined8 *)0x0) && (lVar1 = param_1[3], lVar1 != 0)) {
    lVar2 = param_2[2];
    if ((undefined8 *)*param_1 == param_2) {
      *param_1 = lVar2;
      if (lVar2 == 0) {
        param_1[1] = 0;
      }
      else {
        *(undefined8 *)(lVar2 + 8) = 0;
      }
    }
    else {
      lVar4 = param_2[1];
      if (lVar4 == 0) {
        *param_1 = lVar2;
      }
      else {
        *(long *)(lVar4 + 0x10) = lVar2;
      }
      if (lVar2 == 0) {
        param_1[1] = lVar4;
      }
      else {
        *(long *)(lVar2 + 8) = lVar4;
      }
    }
    param_2[2] = 0;
    uVar3 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    param_1[3] = lVar1 + -1;
    if ((code *)param_1[2] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0071006cabdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[2])(param_3,uVar3);
      return;
    }
  }
  return;
}



// ===== FUN_71006cac10 @ 71006cac10 (size=180) =====

void FUN_71006cac10(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 != (long *)0x0) {
    lVar3 = param_1[3];
    while (lVar3 != 0) {
      puVar2 = (undefined8 *)param_1[1];
      if (puVar2 != (undefined8 *)0x0) {
        lVar4 = puVar2[2];
        if (puVar2 == (undefined8 *)*param_1) {
          *param_1 = lVar4;
          if (lVar4 == 0) {
            param_1[1] = 0;
          }
          else {
            *(undefined8 *)(lVar4 + 8) = 0;
          }
        }
        else {
          lVar5 = puVar2[1];
          if (lVar5 == 0) {
            *param_1 = lVar4;
          }
          else {
            *(long *)(lVar5 + 0x10) = lVar4;
          }
          if (lVar4 == 0) {
            param_1[1] = lVar5;
          }
          else {
            *(long *)(lVar4 + 8) = lVar5;
          }
        }
        lVar3 = lVar3 + -1;
        puVar2[2] = 0;
        uVar1 = *puVar2;
        *puVar2 = 0;
        puVar2[1] = 0;
        param_1[3] = lVar3;
        if ((code *)param_1[2] != (code *)0x0) {
          (*(code *)param_1[2])(param_2,uVar1);
          lVar3 = param_1[3];
        }
      }
    }
    return;
  }
  return;
}



// ===== FUN_71006cacd0 @ 71006cacd0 (size=8) =====

undefined8 FUN_71006cacd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ===== FUN_71006cace0 @ 71006cace0 (size=76) =====

void FUN_71006cace0(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x18) != 0) {
    (**(code **)(param_1 + 0x18))();
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  (*(code *)PTR_FUN_7100af36a0)(param_2);
  return;
}



// ===== FUN_71006cad30 @ 71006cad30 (size=204) =====

undefined8 FUN_71006cad30(long *param_1,uint param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = 1;
  if ((param_2 != 0 && param_3 != 0) && (uVar4 = 1, param_4 != 0 && param_5 != 0)) {
    uVar3 = -(ulong)(param_2 >> 0x1f) & 0xffffffe000000000 | (ulong)param_2 << 5;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
    *(uint *)(param_1 + 4) = param_2;
    param_1[5] = 0;
    lVar1 = (*(code *)PTR_FUN_7100af36a8)(uVar3);
    *param_1 = lVar1;
    if (lVar1 == 0) {
      *(undefined4 *)(param_1 + 4) = 0;
      return 1;
    }
    if (0 < (int)param_2) {
      uVar2 = 0;
      while( true ) {
        lVar1 = lVar1 + uVar2;
        uVar2 = uVar2 + 0x20;
        FUN_71006caaf0(lVar1,FUN_71006cace0);
        if (uVar2 == uVar3) break;
        lVar1 = *param_1;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}



// ===== FUN_71006cae00 @ 71006cae00 (size=256) =====

long FUN_71006cae00(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_1;
  lVar1 = (*(code *)param_1[1])(param_2,param_3,(long)(int)param_1[4]);
  plVar3 = *(long **)(lVar4 + lVar1 * 0x20);
  lVar4 = lVar4 + lVar1 * 0x20;
  do {
    if (plVar3 == (long *)0x0) {
LAB_71006cae94:
      lVar1 = (*(code *)PTR_FUN_7100af36a8)(param_3 + 0x30);
      if (lVar1 != 0) {
        FUN_710080f900(lVar1 + 0x28,param_2,param_3);
        uVar2 = *(undefined8 *)(lVar4 + 8);
        *(long *)(lVar1 + 0x18) = param_4;
        *(long *)(lVar1 + 0x20) = param_3;
        FUN_71006cab00(lVar4,uVar2,lVar1,lVar1);
        param_1[5] = param_1[5] + 1;
        lVar1 = param_4;
      }
      return lVar1;
    }
    lVar1 = (*(code *)param_1[2])(*plVar3 + 0x28,*(undefined8 *)(*plVar3 + 0x20),param_2,param_3);
    if (lVar1 != 0) {
      FUN_71006cab80(lVar4,plVar3,param_1);
      param_1[5] = param_1[5] + -1;
      goto LAB_71006cae94;
    }
    plVar3 = (long *)plVar3[2];
  } while( true );
}



// ===== FUN_71006caf00 @ 71006caf00 (size=192) =====

undefined8 FUN_71006caf00(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_1;
  lVar1 = (*(code *)param_1[1])(param_2,param_3,(long)(int)param_1[4]);
  plVar3 = *(long **)(lVar4 + lVar1 * 0x20);
  while( true ) {
    if (plVar3 == (long *)0x0) {
      return 1;
    }
    lVar2 = (*(code *)param_1[2])(*plVar3 + 0x28,*(undefined8 *)(*plVar3 + 0x20),param_2,param_3);
    if (lVar2 != 0) break;
    plVar3 = (long *)plVar3[2];
  }
  FUN_71006cab80(lVar4 + lVar1 * 0x20,plVar3,param_1);
  param_1[5] = param_1[5] + -1;
  return 0;
}



// ===== FUN_71006cafc0 @ 71006cafc0 (size=168) =====

undefined8 FUN_71006cafc0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  lVar2 = *param_1;
  lVar1 = (*(code *)param_1[1])(param_2,param_3,(long)(int)param_1[4]);
  plVar3 = *(long **)(lVar2 + lVar1 * 0x20);
  while( true ) {
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    lVar1 = *plVar3;
    lVar2 = (*(code *)param_1[2])(lVar1 + 0x28,*(undefined8 *)(lVar1 + 0x20),param_2,param_3);
    if (lVar2 != 0) break;
    plVar3 = (long *)plVar3[2];
  }
  return *(undefined8 *)(lVar1 + 0x18);
}



// ===== FUN_71006cb070 @ 71006cb070 (size=108) =====

void FUN_71006cb070(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (0 < (int)param_1[4]) {
    lVar2 = 0;
    do {
      lVar1 = lVar2 * 0x20;
      lVar2 = lVar2 + 1;
      FUN_71006cac10(*param_1 + lVar1,param_1);
    } while ((int)lVar2 < (int)param_1[4]);
  }
  (*(code *)PTR_FUN_7100af36a0)(*param_1);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  return;
}



// ===== FUN_71006cb0e0 @ 71006cb0e0 (size=136) =====

void FUN_71006cb0e0(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  iVar1 = (int)param_1[4];
  if (0 < iVar1) {
    lVar5 = 0;
    do {
      lVar4 = *param_1;
      lVar2 = *(long *)(lVar4 + lVar5 * 0x20);
      if (lVar2 != 0) {
        do {
          lVar3 = *(long *)(lVar2 + 0x10);
          FUN_71006cab80(lVar4 + lVar5 * 0x20,lVar2,param_1);
          param_1[5] = param_1[5] + -1;
          lVar2 = lVar3;
        } while (lVar3 != 0);
        iVar1 = (int)param_1[4];
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < iVar1);
  }
  return;
}



// ===== FUN_71006cb170 @ 71006cb170 (size=188) =====

void FUN_71006cb170(long *param_1,undefined8 param_2,code *param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  iVar1 = (int)param_1[4];
  if (0 < iVar1) {
    lVar5 = 0;
    do {
      lVar4 = *param_1;
      plVar2 = *(long **)(lVar4 + lVar5 * 0x20);
      if (plVar2 != (long *)0x0) {
        do {
          plVar3 = (long *)plVar2[2];
          if ((param_3 == (code *)0x0) ||
             (iVar1 = (*param_3)(param_2,*(undefined8 *)(*plVar2 + 0x18)), iVar1 != 0)) {
            FUN_71006cab80(lVar4 + lVar5 * 0x20,plVar2,param_1);
            param_1[5] = param_1[5] + -1;
          }
          plVar2 = plVar3;
        } while (plVar3 != (long *)0x0);
        iVar1 = (int)param_1[4];
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < iVar1);
  }
  return;
}



// ===== FUN_71006cb2a0 @ 71006cb2a0 (size=16) =====

void FUN_71006cb2a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  *(undefined4 *)(param_2 + 1) = 0;
  param_2[2] = 0;
  return;
}



// ===== FUN_71006cb2b0 @ 71006cb2b0 (size=112) =====

undefined8 FUN_71006cb2b0(long *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  
  if (param_1[2] != 0) {
    puVar3 = *(undefined8 **)(param_1[2] + 0x10);
    param_1[2] = (long)puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      return *puVar3;
    }
  }
  uVar1 = *(uint *)((long *)*param_1 + 4);
  uVar2 = *(uint *)(param_1 + 1);
  uVar4 = (ulong)uVar2;
  if ((int)uVar2 < (int)uVar1) {
    plVar5 = (long *)(*(long *)*param_1 +
                     (-(ulong)(uVar2 >> 0x1f) & 0xffffffe000000000 | uVar4 << 5));
    do {
      uVar2 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar2;
      puVar3 = (undefined8 *)*plVar5;
      plVar5 = plVar5 + 4;
      if (puVar3 != (undefined8 *)0x0) {
        *(uint *)(param_1 + 1) = uVar2;
        param_1[2] = (long)puVar3;
        return *puVar3;
      }
    } while (uVar1 != uVar2);
  }
  return 0;
}



// ===== FUN_71006cb3b0 @ 71006cb3b0 (size=188) =====

undefined8 FUN_71006cb3b0(long param_1,long param_2,long *param_3)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  undefined8 uVar4;
  long lVar5;
  byte *pbVar6;
  
  if (*(char *)(param_1 + 2) != '\b') {
    return 1;
  }
  bVar2 = *(byte *)(param_1 + 3);
  uVar4 = 1;
  if ((bVar2 & 0xe0) == 0) {
    lVar5 = param_2 + -10;
    pbVar6 = (byte *)(param_1 + 10);
    if ((bVar2 >> 2 & 1) != 0) {
      if (lVar5 < 2) {
        return 2;
      }
      uVar3 = *(ushort *)(param_1 + 10);
      if (lVar5 <= (long)((ulong)uVar3 + 1)) {
        return 2;
      }
      pbVar6 = pbVar6 + (int)(uVar3 + 2);
      lVar5 = lVar5 - ((ulong)uVar3 + 2);
    }
    bVar1 = bVar2 >> 3 & 1;
    while (bVar1 != 0) {
      if (lVar5 == 0) {
        return 2;
      }
      lVar5 = lVar5 + -1;
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    }
    bVar1 = bVar2 >> 4 & 1;
    while (bVar1 != 0) {
      if (lVar5 == 0) {
        return 2;
      }
      lVar5 = lVar5 + -1;
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    }
    if ((bVar2 >> 1 & 1) != 0) {
      if (lVar5 < 2) {
        return 2;
      }
      lVar5 = lVar5 + -2;
    }
    uVar4 = 0;
    *param_3 = param_2 - lVar5;
  }
  return uVar4;
}



// ===== FUN_71006cb4b0 @ 71006cb4b0 (size=20) =====

undefined4 FUN_71006cb4b0(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x17;
  if (*(long *)(param_2 + 8) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}



// ===== FUN_71006cb4f0 @ 71006cb4f0 (size=172) =====

undefined8 FUN_71006cb4f0(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_2 + 8) == 0) {
    return 0x17;
  }
  *(undefined1 **)(param_2 + 0x58) = &LAB_71006cb320;
  *(undefined1 **)(param_2 + 0x60) = &LAB_71006cb340;
  iVar1 = FUN_7100701da0(param_2 + 0x18,"1.2.11",0x70);
  if (iVar1 == 0) {
    uVar2 = 0;
    *(undefined4 *)(param_2 + 0x10) = 1;
  }
  else {
    if (*(long *)(param_2 + 0x48) != 0) {
      FUN_71006c0a00(*param_1,"Error while processing content unencoding: %s");
      return 0x3d;
    }
    FUN_71006c0a00(*param_1,
                   "Error while processing content unencoding: Unknown failure within decompression software."
                  );
    uVar2 = 0x3d;
  }
  return uVar2;
}



// ===== FUN_71006cb5a0 @ 71006cb5a0 (size=152) =====

void FUN_71006cb5a0(undefined8 *param_1,long param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 == 4) {
    (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(param_2 + 0x18));
    iVar1 = *(int *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  if (iVar1 != 0) {
    iVar1 = FUN_7100703750(param_2 + 0x18);
    if (iVar1 != 0) {
      if (*(long *)(param_2 + 0x48) == 0) {
        FUN_71006c0a00(*param_1,
                       "Error while processing content unencoding: Unknown failure within decompression software."
                      );
        *(undefined4 *)(param_2 + 0x10) = 0;
        return;
      }
      FUN_71006c0a00(*param_1,"Error while processing content unencoding: %s");
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
    return;
  }
  return;
}



// ===== FUN_71006cb640 @ 71006cb640 (size=152) =====

void FUN_71006cb640(undefined8 *param_1,long param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 == 4) {
    (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(param_2 + 0x18));
    iVar1 = *(int *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  if (iVar1 != 0) {
    iVar1 = FUN_7100703750(param_2 + 0x18);
    if (iVar1 != 0) {
      if (*(long *)(param_2 + 0x48) == 0) {
        FUN_71006c0a00(*param_1,
                       "Error while processing content unencoding: Unknown failure within decompression software."
                      );
        *(undefined4 *)(param_2 + 0x10) = 0;
        return;
      }
      FUN_71006c0a00(*param_1,"Error while processing content unencoding: %s");
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
    return;
  }
  return;
}



// ===== FUN_71006cb6e0 @ 71006cb6e0 (size=204) =====

int FUN_71006cb6e0(undefined8 *param_1,undefined8 *param_2,int *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *param_3;
  if (iVar1 == 4) {
    (*(code *)PTR_FUN_7100af36a0)(*param_2);
    iVar1 = *param_3;
    *param_2 = 0;
  }
  if (iVar1 == 0) {
    return param_4;
  }
  iVar1 = FUN_7100703750(param_2);
  if (param_4 == 0 && iVar1 != 0) {
    if (param_2[6] == 0) {
      FUN_71006c0a00(*param_1,
                     "Error while processing content unencoding: Unknown failure within decompression software."
                    );
      param_4 = 0x3d;
      *param_3 = 0;
    }
    else {
      FUN_71006c0a00(*param_1,"Error while processing content unencoding: %s");
      param_4 = 0x3d;
      *param_3 = 0;
    }
  }
  else {
    *param_3 = 0;
  }
  return param_4;
}



// ===== FUN_71006cb7b0 @ 71006cb7b0 (size=272) =====

undefined8 FUN_71006cb7b0(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_2 + 8) == 0) {
    return 0x17;
  }
  *(undefined1 **)(param_2 + 0x58) = &LAB_71006cb320;
  *(undefined1 **)(param_2 + 0x60) = &LAB_71006cb340;
  uVar2 = FUN_71007062e0();
  iVar1 = FUN_710080aec0(uVar2,"1.2.0.4");
  if (iVar1 < 0) {
    iVar1 = FUN_7100701c80(param_2 + 0x18,0xfffffff1,"1.2.11",0x70);
    if (iVar1 == 0) {
      *(undefined8 *)(param_2 + 0x10) = 0x800000001;
      return 0;
    }
  }
  else {
    iVar1 = FUN_7100701c80(param_2 + 0x18,0x2f,"1.2.11",0x70);
    if (iVar1 == 0) {
      *(undefined4 *)(param_2 + 0x10) = 6;
      return 0;
    }
  }
  if (*(long *)(param_2 + 0x48) == 0) {
    FUN_71006c0a00(*param_1,
                   "Error while processing content unencoding: Unknown failure within decompression software."
                  );
    return 0x3d;
  }
  FUN_71006c0a00(*param_1,"Error while processing content unencoding: %s");
  return 0x3d;
}



// ===== FUN_71006cbc50 @ 71006cbc50 (size=1564) =====

ulong FUN_71006cbc50(undefined8 *param_1,long param_2,char *param_3,ulong param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  char *pcVar13;
  undefined8 extraout_x9;
  ulong uVar14;
  char *local_8;
  
  iVar8 = *(int *)(param_2 + 0x10);
  lVar10 = param_2 + 0x18;
  uVar5 = (uint)param_4;
  if (iVar8 == 6) {
    *(char **)(param_2 + 0x18) = param_3;
    iVar8 = 6;
    *(uint *)(param_2 + 0x20) = uVar5;
    goto LAB_71006cb8c0;
  }
  if (iVar8 == 3) {
    uVar4 = *(uint *)(param_2 + 0x14);
    uVar6 = uVar5;
    if (uVar4 < uVar5) {
      uVar6 = uVar4;
    }
    iVar8 = uVar4 - uVar6;
    uVar5 = uVar5 - uVar6;
    *(int *)(param_2 + 0x14) = iVar8;
    *(uint *)(param_2 + 0x20) = uVar5;
    *(char **)(param_2 + 0x18) = param_3 + uVar6;
    if (uVar5 == 0) {
      if (iVar8 != 0) {
        *(undefined4 *)(param_2 + 0x10) = 3;
        return (ulong)uVar5;
      }
    }
    else {
      iVar8 = 0x17;
    }
    uVar14 = FUN_71006cb6e0(param_1,lVar10,param_2 + 0x10,iVar8);
    return uVar14;
  }
  if (iVar8 == 4) {
    *(uint *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + uVar5;
    lVar11 = FUN_71006a7480(*(undefined8 *)(param_2 + 0x18));
    *(long *)(param_2 + 0x18) = lVar11;
    if (lVar11 == 0) goto LAB_71006cbea8;
    FUN_710080f900(lVar11 + (*(uint *)(param_2 + 0x20) - param_4),param_3,param_4);
    pcVar13 = *(char **)(param_2 + 0x18);
    if (*(uint *)(param_2 + 0x20) < 10) {
      return 0;
    }
    if ((*pcVar13 != '\x1f') || (pcVar13[1] != -0x75)) {
LAB_71006cbcf0:
      if (*(long *)(param_2 + 0x48) == 0) {
        FUN_71006c0a00(*param_1,
                       "Error while processing content unencoding: Unknown failure within decompression software."
                      );
      }
      else {
        FUN_71006c0a00(*param_1,"Error while processing content unencoding: %s");
      }
      uVar14 = FUN_71006cb6e0(param_1,lVar10,param_2 + 0x10,0x3d);
      return uVar14;
    }
    iVar8 = FUN_71006cb3b0(pcVar13,*(uint *)(param_2 + 0x20),&local_8);
    if (iVar8 != 0) {
      if (iVar8 == 2) {
        return 0;
      }
      goto LAB_71006cbcf0;
    }
    (*(code *)PTR_FUN_7100af36a0)(extraout_x9);
    uVar5 = *(uint *)(param_2 + 0x20) - (int)local_8;
    uVar14 = (ulong)uVar5;
    *(char **)(param_2 + 0x18) = param_3 + (long)(local_8 + (param_4 - *(uint *)(param_2 + 0x20)));
    *(uint *)(param_2 + 0x20) = uVar5;
    *(undefined4 *)(param_2 + 0x10) = 5;
  }
  else {
    if (iVar8 == 1) {
      if (9 < (long)param_4) {
        if ((*param_3 != '\x1f') || (param_3[1] != -0x75)) goto LAB_71006cbcf0;
        iVar8 = FUN_71006cb3b0(param_3,param_4,&local_8);
        if (iVar8 == 0) {
          uVar5 = uVar5 - (int)local_8;
          uVar14 = (ulong)uVar5;
          *(char **)(param_2 + 0x18) = param_3 + (long)local_8;
          *(uint *)(param_2 + 0x20) = uVar5;
          *(undefined4 *)(param_2 + 0x10) = 5;
          goto joined_r0x0071006cbf1c;
        }
        if (iVar8 != 2) goto LAB_71006cbcf0;
      }
      *(uint *)(param_2 + 0x20) = uVar5;
      lVar11 = (*(code *)PTR_FUN_7100af36a8)(param_4 & 0xffffffff);
      *(long *)(param_2 + 0x18) = lVar11;
      if (lVar11 != 0) {
        FUN_710080f900(lVar11,param_3,*(undefined4 *)(param_2 + 0x20));
        *(undefined4 *)(param_2 + 0x10) = 4;
        return 0;
      }
LAB_71006cbea8:
      iVar8 = *(int *)(param_2 + 0x10);
      if (iVar8 == 4) {
        (*(code *)PTR_FUN_7100af36a0)();
        iVar8 = *(int *)(param_2 + 0x10);
        *(undefined8 *)(param_2 + 0x18) = 0;
      }
      if (iVar8 == 0) {
        return 0x1b;
      }
      FUN_7100703750(lVar10);
      *(undefined4 *)(param_2 + 0x10) = 0;
      return 0x1b;
    }
    *(char **)(param_2 + 0x18) = param_3;
    uVar14 = param_4 & 0xffffffff;
    *(uint *)(param_2 + 0x20) = uVar5;
  }
joined_r0x0071006cbf1c:
  if (uVar5 == 0) {
    return uVar14;
  }
  iVar8 = 5;
LAB_71006cb8c0:
  puVar1 = (undefined8 *)(param_2 + 0x18);
  uVar5 = *(uint *)(param_2 + 0x10);
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  iVar3 = *(int *)(param_2 + 0x20);
  if ((uVar5 & 0xfffffffb) - 1 < 2) {
    lVar10 = (*(code *)PTR_FUN_7100af36a8)(0x4000);
    if (lVar10 == 0) {
      iVar8 = *(int *)(param_2 + 0x10);
      if (iVar8 == 4) {
        (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(param_2 + 0x18));
        iVar8 = *(int *)(param_2 + 0x10);
        *(undefined8 *)(param_2 + 0x18) = 0;
      }
      uVar14 = 0x1b;
      if (iVar8 != 0) {
        FUN_7100703750(puVar1);
        *(undefined4 *)(param_2 + 0x10) = 0;
      }
    }
    else {
      piVar2 = (int *)(param_2 + 0x10);
      local_8 = "1.2.11";
LAB_71006cb93c:
      *(long *)(param_2 + 0x30) = lVar10;
      *(undefined4 *)(param_2 + 0x38) = 0x4000;
      uVar5 = FUN_7100701e60(puVar1,5);
      if (*(int *)(param_2 + 0x38) == 0x4000) goto LAB_71006cbaac;
      if (1 < uVar5) goto LAB_71006cb968;
      pcVar12 = *(code **)(**(long **)(param_2 + 8) + 0x18);
      *piVar2 = iVar8;
      uVar6 = (*pcVar12)(param_1,*(long **)(param_2 + 8),lVar10,0x4000 - *(int *)(param_2 + 0x38));
      uVar14 = (ulong)uVar6;
      if (uVar6 == 0) goto LAB_71006cbaac;
      FUN_71006cb6e0(param_1,puVar1,piVar2,uVar14);
LAB_71006cb9bc:
      (*(code *)PTR_FUN_7100af36a0)(lVar10);
joined_r0x0071006cba50:
      if ((iVar3 != 0) && (*(int *)(param_2 + 0x10) == 1)) {
        *(int *)(param_2 + 0x10) = iVar8;
        return uVar14;
      }
    }
  }
  else {
    if (uVar5 == 4) {
      (*(code *)PTR_FUN_7100af36a0)(uVar9);
      uVar5 = *(uint *)(param_2 + 0x10);
      *(undefined8 *)(param_2 + 0x18) = 0;
    }
    uVar14 = 0x17;
    if (uVar5 != 0) {
      FUN_7100703750(puVar1);
      *(undefined4 *)(param_2 + 0x10) = 0;
    }
  }
  return uVar14;
LAB_71006cbaac:
  if (uVar5 != 0) {
LAB_71006cb968:
    if ((int)uVar5 < 1) {
      if (uVar5 == 0xfffffffb) {
        uVar14 = 0;
        goto LAB_71006cb9bc;
      }
      if ((uVar5 == 0xfffffffd) && (*piVar2 == 1)) {
        FUN_7100703750(puVar1);
        iVar7 = FUN_7100701c80(puVar1,0xfffffff1,local_8,0x70);
        if (iVar7 == 0) {
          *(int *)(param_2 + 0x20) = iVar3;
          *puVar1 = uVar9;
          *(undefined8 *)(param_2 + 0x10) = 0x400000002;
          goto LAB_71006cb93c;
        }
        *piVar2 = 0;
      }
    }
    else if (uVar5 == 1) {
      uVar6 = *(uint *)(param_2 + 0x14);
      uVar4 = *(uint *)(param_2 + 0x20);
      uVar5 = uVar6;
      if (uVar4 < uVar6) {
        uVar5 = uVar4;
      }
      iVar7 = uVar6 - uVar5;
      uVar4 = uVar4 - uVar5;
      uVar14 = (ulong)uVar4;
      *(int *)(param_2 + 0x14) = iVar7;
      *(uint *)(param_2 + 0x20) = uVar4;
      *(ulong *)(param_2 + 0x18) = *(long *)(param_2 + 0x18) + (ulong)uVar5;
      if (uVar4 == 0) {
        if (iVar7 != 0) {
          *(undefined4 *)(param_2 + 0x10) = 3;
          (*(code *)PTR_FUN_7100af36a0)(lVar10);
          goto joined_r0x0071006cba50;
        }
      }
      else {
        iVar7 = 0x17;
      }
      uVar14 = FUN_71006cb6e0(param_1,puVar1,piVar2,iVar7);
      uVar14 = uVar14 & 0xffffffff;
      goto LAB_71006cb9bc;
    }
    if (*(long *)(param_2 + 0x48) == 0) {
      FUN_71006c0a00(*param_1,
                     "Error while processing content unencoding: Unknown failure within decompression software."
                    );
    }
    else {
      FUN_71006c0a00(*param_1,"Error while processing content unencoding: %s");
    }
    uVar14 = FUN_71006cb6e0(param_1,puVar1,piVar2,0x3d);
    uVar14 = uVar14 & 0xffffffff;
    goto LAB_71006cb9bc;
  }
  goto LAB_71006cb93c;
}



// ===== FUN_71006cbf70 @ 71006cbf70 (size=288) =====

undefined2 * FUN_71006cbf70(void)

{
  int iVar1;
  long lVar2;
  undefined2 *puVar3;
  char *pcVar4;
  undefined2 *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  
  pcVar4 = "identity";
  lVar7 = 0;
  puVar8 = (undefined8 *)0x7100ae3988;
  ppuVar6 = &PTR_s_identity_7100ae3a08;
  while( true ) {
    iVar1 = FUN_71006ca300(pcVar4,"identity");
    if (iVar1 == 0) {
      lVar2 = FUN_710081ce00(*ppuVar6);
      lVar7 = lVar2 + lVar7 + 2;
    }
    puVar8 = puVar8 + 1;
    ppuVar6 = (undefined **)*puVar8;
    if (ppuVar6 == (undefined **)0x0) break;
    pcVar4 = *ppuVar6;
  }
  if (lVar7 != 0) {
    puVar3 = (undefined2 *)(*(code *)PTR_FUN_7100af36a8)(lVar7);
    if (puVar3 != (undefined2 *)0x0) {
      pcVar4 = "identity";
      ppuVar6 = &PTR_s_identity_7100ae3a08;
      lVar7 = 0x7100ae3988;
      puVar9 = puVar3;
      while( true ) {
        iVar1 = FUN_71006ca300(pcVar4,"identity");
        if (iVar1 == 0) {
          puVar5 = (undefined2 *)FUN_71008066c0(puVar9,*ppuVar6);
          puVar9 = puVar5 + 1;
          *puVar5 = 0x202c;
          ppuVar6 = *(undefined ***)(lVar7 + 8);
        }
        else {
          ppuVar6 = *(undefined ***)(lVar7 + 8);
        }
        if (ppuVar6 == (undefined **)0x0) break;
        lVar7 = lVar7 + 8;
        pcVar4 = *ppuVar6;
      }
      *(undefined1 *)(puVar9 + -1) = 0;
    }
    return puVar3;
  }
  puVar3 = (undefined2 *)(*(code *)PTR_FUN_7100af36b8)("identity");
  return puVar3;
}



// ===== FUN_71006cc090 @ 71006cc090 (size=100) =====

undefined8 FUN_71006cc090(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_71006cbf70();
  if (lVar1 != 0) {
    FUN_71006c0a00(*param_1,
                   "Unrecognized content encoding type. libcurl understands %s content encodings.",
                   lVar1);
    (*(code *)PTR_FUN_7100af36a0)(lVar1);
    return 0x3d;
  }
  return 0x1b;
}



// ===== FUN_71006cc100 @ 71006cc100 (size=28) =====

undefined8 FUN_71006cc100(undefined8 param_1,long *param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0071006cc110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_2 + 0x18))();
    return uVar1;
  }
  return 0;
}



// ===== FUN_71006cc120 @ 71006cc120 (size=108) =====

void FUN_71006cc120(long *param_1)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *param_1;
  plVar2 = *(long **)(lVar3 + 0x188);
  while (plVar2 != (long *)0x0) {
    pcVar1 = *(code **)(*plVar2 + 0x20);
    *(long *)(lVar3 + 0x188) = plVar2[1];
    (*pcVar1)(param_1,plVar2);
    (*(code *)PTR_FUN_7100af36a0)(plVar2);
    plVar2 = *(long **)(lVar3 + 0x188);
  }
  return;
}



// ===== FUN_71006cc190 @ 71006cc190 (size=704) =====

undefined1 FUN_71006cc190(long *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined *puVar5;
  code *pcVar6;
  char *pcVar7;
  long lVar8;
  undefined **ppuVar9;
  char *pcVar10;
  undefined8 *puVar11;
  undefined **local_8;
  
  lVar8 = *param_1;
  cVar1 = *param_2;
  local_8 = &PTR_s_identity_7100ae3a08;
  do {
    iVar2 = FUN_71006af470(cVar1);
    while ((iVar2 == 0 && (*param_2 != ','))) {
      if (*param_2 == '\0') {
        return 0;
      }
      pcVar10 = (char *)0x0;
      pcVar4 = param_2;
      do {
        pcVar7 = pcVar4;
        iVar2 = FUN_71006af470();
        cVar1 = pcVar7[1];
        if (iVar2 == 0) {
          pcVar10 = pcVar7 + (1 - (long)param_2);
        }
        pcVar4 = pcVar7 + 1;
      } while (cVar1 != ',' && cVar1 != '\0');
      if (param_3 == 0 || pcVar10 != (char *)0x7) {
        if (pcVar10 != (char *)0x0) {
LAB_71006cc26c:
          puVar11 = (undefined8 *)0x7100ae3988;
          pcVar4 = "identity";
          ppuVar9 = local_8;
          while( true ) {
            iVar2 = FUN_71006ca3e0(param_2,pcVar4,pcVar10);
            if (((iVar2 != 0) && ((*ppuVar9)[(long)pcVar10] == '\0')) ||
               ((ppuVar9[1] != (undefined *)0x0 &&
                ((iVar2 = FUN_71006ca3e0(param_2,ppuVar9[1],pcVar10), iVar2 != 0 &&
                 (ppuVar9[1][(long)pcVar10] == '\0')))))) {
              puVar11 = *(undefined8 **)(lVar8 + 0x188);
              if (puVar11 == (undefined8 *)0x0) {
                puVar11 = (undefined8 *)(*(code *)PTR_FUN_7100af3698)(1,0x10);
                if (puVar11 == (undefined8 *)0x0) goto LAB_71006cc2fc;
                puVar5 = ppuVar9[5];
                *puVar11 = &DAT_7100ae3928;
                puVar11[1] = 0;
                puVar5 = puVar5 + 0x10;
                *(undefined8 **)(lVar8 + 0x188) = puVar11;
              }
              else {
                puVar5 = ppuVar9[5] + 0x10;
              }
              goto LAB_71006cc35c;
            }
            puVar11 = puVar11 + 1;
            ppuVar9 = (undefined **)*puVar11;
            if (ppuVar9 == (undefined **)0x0) break;
            pcVar4 = *ppuVar9;
          }
          puVar11 = *(undefined8 **)(lVar8 + 0x188);
          if (puVar11 == (undefined8 *)0x0) {
            puVar11 = (undefined8 *)(*(code *)PTR_FUN_7100af3698)(1,0x10);
            if (puVar11 == (undefined8 *)0x0) {
LAB_71006cc2fc:
              *(undefined8 *)(lVar8 + 0x188) = 0;
              return 0x1b;
            }
            ppuVar9 = (undefined **)&DAT_7100ae39a8;
            *puVar11 = &DAT_7100ae3928;
            puVar11[1] = 0;
            puVar5 = (undefined *)0x10;
            *(undefined8 **)(lVar8 + 0x188) = puVar11;
LAB_71006cc35c:
            puVar3 = (undefined8 *)(*(code *)PTR_FUN_7100af3698)(1,puVar5);
          }
          else {
            ppuVar9 = (undefined **)&DAT_7100ae39a8;
            puVar3 = (undefined8 *)(*(code *)PTR_FUN_7100af3698)(1,0x10);
          }
          if (puVar3 == (undefined8 *)0x0) {
            return 0x1b;
          }
          pcVar6 = (code *)ppuVar9[2];
          *puVar3 = ppuVar9;
          puVar3[1] = puVar11;
          iVar2 = (*pcVar6)(param_1,puVar3);
          if (iVar2 != 0) {
            (*(code *)PTR_FUN_7100af36a0)(puVar3);
            return 0x1b;
          }
          *(undefined8 **)(lVar8 + 0x188) = puVar3;
          cVar1 = pcVar7[1];
        }
      }
      else {
        iVar2 = FUN_71006ca3e0(param_2,"chunked",7);
        if (iVar2 == 0) goto LAB_71006cc26c;
        *(ushort *)(lVar8 + 0x648) = *(ushort *)(lVar8 + 0x648) | 0x20;
        FUN_71006ca5f0(param_1);
        cVar1 = pcVar7[1];
      }
      if (cVar1 == '\0') {
        return 0;
      }
      iVar2 = FUN_71006af470();
      param_2 = pcVar7 + 1;
    }
    cVar1 = param_2[1];
    param_2 = param_2 + 1;
  } while( true );
}



// ===== FUN_71006cc450 @ 71006cc450 (size=2640) =====

void FUN_71006cc450(long param_1,int *param_2,long param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  
  iVar25 = *(int *)(param_1 + 8);
  uVar23 = *(uint *)(param_1 + 0xc);
  uVar24 = *(uint *)(param_1 + 0x10);
  uVar26 = *(uint *)(param_1 + 0x14);
  piVar22 = param_2;
  do {
    iVar6 = *piVar22;
    *(int *)(param_1 + 0x58) = iVar6;
    uVar2 = ((uVar24 ^ uVar26) & uVar23 ^ uVar26) + iVar6 + iVar25 + -0x28955b88;
    iVar7 = piVar22[1];
    uVar2 = uVar23 + (uVar2 >> 0x19 | uVar2 * 0x80);
    *(int *)(param_1 + 0x5c) = iVar7;
    iVar8 = piVar22[2];
    uVar3 = ((uVar23 ^ uVar24) & uVar2 ^ uVar24) + iVar7 + uVar26 + 0xe8c7b756;
    piVar1 = piVar22 + 0x10;
    uVar3 = uVar2 + (uVar3 >> 0x14 | uVar3 * 0x1000);
    *(int *)(param_1 + 0x60) = iVar8;
    uVar4 = ((uVar23 ^ uVar2) & uVar3 ^ uVar23) + iVar8 + uVar24 + 0x242070db;
    iVar9 = piVar22[3];
    uVar4 = uVar3 + (uVar4 >> 0xf | uVar4 * 0x20000);
    *(int *)(param_1 + 100) = iVar9;
    uVar5 = ((uVar2 ^ uVar3) & uVar4 ^ uVar2) + iVar9 + uVar23 + 0xc1bdceee;
    iVar10 = piVar22[4];
    uVar5 = uVar4 + (uVar5 >> 10 | uVar5 * 0x400000);
    *(int *)(param_1 + 0x68) = iVar10;
    iVar11 = piVar22[5];
    uVar2 = iVar10 + -0xa83f051 + ((uVar3 ^ uVar4) & uVar5 ^ uVar3) + uVar2;
    uVar2 = uVar5 + (uVar2 >> 0x19 | uVar2 * 0x80);
    *(int *)(param_1 + 0x6c) = iVar11;
    iVar12 = piVar22[6];
    uVar3 = iVar11 + 0x4787c62a + ((uVar4 ^ uVar5) & uVar2 ^ uVar4) + uVar3;
    uVar3 = uVar2 + (uVar3 >> 0x14 | uVar3 * 0x1000);
    *(int *)(param_1 + 0x70) = iVar12;
    iVar13 = piVar22[7];
    uVar4 = iVar12 + -0x57cfb9ed + ((uVar5 ^ uVar2) & uVar3 ^ uVar5) + uVar4;
    *(int *)(param_1 + 0x74) = iVar13;
    uVar4 = uVar3 + (uVar4 >> 0xf | uVar4 * 0x20000);
    iVar14 = piVar22[8];
    *(int *)(param_1 + 0x78) = iVar14;
    uVar5 = iVar13 + -0x2b96aff + ((uVar2 ^ uVar3) & uVar4 ^ uVar2) + uVar5;
    uVar5 = uVar4 + (uVar5 >> 10 | uVar5 * 0x400000);
    uVar2 = iVar14 + 0x698098d8 + ((uVar3 ^ uVar4) & uVar5 ^ uVar3) + uVar2;
    iVar15 = piVar22[9];
    uVar2 = uVar5 + (uVar2 >> 0x19 | uVar2 * 0x80);
    *(int *)(param_1 + 0x7c) = iVar15;
    iVar16 = piVar22[10];
    uVar3 = iVar15 + -0x74bb0851 + ((uVar4 ^ uVar5) & uVar2 ^ uVar4) + uVar3;
    uVar3 = uVar2 + (uVar3 >> 0x14 | uVar3 * 0x1000);
    *(int *)(param_1 + 0x80) = iVar16;
    iVar17 = piVar22[0xb];
    uVar4 = iVar16 + -0xa44f + ((uVar5 ^ uVar2) & uVar3 ^ uVar5) + uVar4;
    uVar4 = uVar3 + (uVar4 >> 0xf | uVar4 * 0x20000);
    *(int *)(param_1 + 0x84) = iVar17;
    iVar18 = piVar22[0xc];
    uVar5 = iVar17 + -0x76a32842 + ((uVar2 ^ uVar3) & uVar4 ^ uVar2) + uVar5;
    uVar5 = uVar4 + (uVar5 >> 10 | uVar5 * 0x400000);
    *(int *)(param_1 + 0x88) = iVar18;
    iVar19 = piVar22[0xd];
    uVar2 = iVar18 + 0x6b901122 + ((uVar3 ^ uVar4) & uVar5 ^ uVar3) + uVar2;
    *(int *)(param_1 + 0x8c) = iVar19;
    uVar2 = uVar5 + (uVar2 >> 0x19 | uVar2 * 0x80);
    uVar3 = iVar19 + -0x2678e6d + ((uVar4 ^ uVar5) & uVar2 ^ uVar4) + uVar3;
    iVar20 = piVar22[0xe];
    uVar3 = uVar2 + (uVar3 >> 0x14 | uVar3 * 0x1000);
    *(int *)(param_1 + 0x90) = iVar20;
    uVar4 = iVar20 + -0x5986bc72 + ((uVar5 ^ uVar2) & uVar3 ^ uVar5) + uVar4;
    iVar21 = piVar22[0xf];
    uVar4 = uVar3 + (uVar4 >> 0xf | uVar4 * 0x20000);
    *(int *)(param_1 + 0x94) = iVar21;
    uVar5 = iVar21 + 0x49b40821 + ((uVar2 ^ uVar3) & uVar4 ^ uVar2) + uVar5;
    uVar5 = uVar4 + (uVar5 >> 10 | uVar5 * 0x400000);
    uVar2 = iVar7 + -0x9e1da9e + ((uVar4 ^ uVar5) & uVar3 ^ uVar4) + uVar2;
    uVar2 = uVar5 + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar3 = iVar12 + -0x3fbf4cc0 + ((uVar5 ^ uVar2) & uVar4 ^ uVar5) + uVar3;
    uVar3 = uVar2 + (uVar3 >> 0x17 | uVar3 * 0x200);
    uVar4 = iVar17 + 0x265e5a51 + ((uVar2 ^ uVar3) & uVar5 ^ uVar2) + uVar4;
    uVar4 = uVar3 + (uVar4 >> 0x12 | uVar4 * 0x4000);
    uVar5 = iVar6 + -0x16493856 + ((uVar3 ^ uVar4) & uVar2 ^ uVar3) + uVar5;
    uVar5 = uVar4 + (uVar5 >> 0xc | uVar5 * 0x100000);
    uVar2 = iVar11 + -0x29d0efa3 + ((uVar4 ^ uVar5) & uVar3 ^ uVar4) + uVar2;
    uVar2 = uVar5 + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar3 = iVar16 + 0x2441453 + ((uVar5 ^ uVar2) & uVar4 ^ uVar5) + uVar3;
    uVar3 = uVar2 + (uVar3 >> 0x17 | uVar3 * 0x200);
    uVar4 = iVar21 + -0x275e197f + ((uVar2 ^ uVar3) & uVar5 ^ uVar2) + uVar4;
    uVar4 = uVar3 + (uVar4 >> 0x12 | uVar4 * 0x4000);
    uVar5 = iVar10 + -0x182c0438 + ((uVar3 ^ uVar4) & uVar2 ^ uVar3) + uVar5;
    uVar5 = uVar4 + (uVar5 >> 0xc | uVar5 * 0x100000);
    uVar2 = iVar15 + 0x21e1cde6 + ((uVar4 ^ uVar5) & uVar3 ^ uVar4) + uVar2;
    uVar2 = uVar5 + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar3 = iVar20 + -0x3cc8f82a + ((uVar5 ^ uVar2) & uVar4 ^ uVar5) + uVar3;
    uVar3 = uVar2 + (uVar3 >> 0x17 | uVar3 * 0x200);
    uVar4 = iVar9 + -0xb2af279 + ((uVar2 ^ uVar3) & uVar5 ^ uVar2) + uVar4;
    uVar4 = uVar3 + (uVar4 >> 0x12 | uVar4 * 0x4000);
    uVar5 = iVar14 + 0x455a14ed + ((uVar3 ^ uVar4) & uVar2 ^ uVar3) + uVar5;
    uVar5 = uVar4 + (uVar5 >> 0xc | uVar5 * 0x100000);
    uVar2 = iVar19 + -0x561c16fb + ((uVar4 ^ uVar5) & uVar3 ^ uVar4) + uVar2;
    uVar2 = uVar5 + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar3 = iVar8 + -0x3105c08 + ((uVar5 ^ uVar2) & uVar4 ^ uVar5) + uVar3;
    uVar3 = uVar2 + (uVar3 >> 0x17 | uVar3 * 0x200);
    uVar4 = iVar13 + 0x676f02d9 + ((uVar2 ^ uVar3) & uVar5 ^ uVar2) + uVar4;
    uVar4 = uVar3 + (uVar4 >> 0x12 | uVar4 * 0x4000);
    uVar5 = iVar18 + -0x72d5b376 + ((uVar3 ^ uVar4) & uVar2 ^ uVar3) + uVar5;
    uVar5 = uVar4 + (uVar5 >> 0xc | uVar5 * 0x100000);
    uVar2 = iVar11 + -0x5c6be + (uVar4 ^ uVar5 ^ uVar3) + uVar2;
    uVar2 = uVar5 + (uVar2 >> 0x1c | uVar2 * 0x10);
    uVar3 = iVar14 + -0x788e097f + (uVar4 ^ uVar5 ^ uVar2) + uVar3;
    uVar3 = uVar2 + (uVar3 >> 0x15 | uVar3 * 0x800);
    uVar4 = iVar17 + 0x6d9d6122 + (uVar2 ^ uVar3 ^ uVar5) + uVar4;
    uVar4 = uVar3 + (uVar4 >> 0x10 | uVar4 * 0x10000);
    uVar5 = iVar20 + -0x21ac7f4 + (uVar2 ^ uVar3 ^ uVar4) + uVar5;
    uVar5 = uVar4 + (uVar5 >> 9 | uVar5 * 0x800000);
    uVar2 = iVar7 + -0x5b4115bc + (uVar4 ^ uVar5 ^ uVar3) + uVar2;
    uVar2 = uVar5 + (uVar2 >> 0x1c | uVar2 * 0x10);
    uVar3 = iVar10 + 0x4bdecfa9 + (uVar4 ^ uVar5 ^ uVar2) + uVar3;
    uVar3 = uVar2 + (uVar3 >> 0x15 | uVar3 * 0x800);
    uVar4 = iVar13 + -0x944b4a0 + (uVar2 ^ uVar3 ^ uVar5) + uVar4;
    uVar4 = uVar3 + (uVar4 >> 0x10 | uVar4 * 0x10000);
    uVar5 = iVar16 + -0x41404390 + (uVar2 ^ uVar3 ^ uVar4) + uVar5;
    uVar5 = uVar4 + (uVar5 >> 9 | uVar5 * 0x800000);
    uVar2 = iVar19 + 0x289b7ec6 + (uVar4 ^ uVar5 ^ uVar3) + uVar2;
    uVar2 = uVar5 + (uVar2 >> 0x1c | uVar2 * 0x10);
    uVar3 = iVar6 + -0x155ed806 + (uVar4 ^ uVar5 ^ uVar2) + uVar3;
    uVar3 = uVar2 + (uVar3 >> 0x15 | uVar3 * 0x800);
    uVar4 = iVar9 + -0x2b10cf7b + (uVar2 ^ uVar3 ^ uVar5) + uVar4;
    uVar4 = uVar3 + (uVar4 >> 0x10 | uVar4 * 0x10000);
    uVar5 = iVar12 + 0x4881d05 + (uVar2 ^ uVar3 ^ uVar4) + uVar5;
    uVar5 = uVar4 + (uVar5 >> 9 | uVar5 * 0x800000);
    uVar2 = iVar15 + -0x262b2fc7 + (uVar4 ^ uVar5 ^ uVar3) + uVar2;
    uVar2 = uVar5 + (uVar2 >> 0x1c | uVar2 * 0x10);
    uVar3 = iVar18 + -0x1924661b + (uVar4 ^ uVar5 ^ uVar2) + uVar3;
    uVar3 = uVar2 + (uVar3 >> 0x15 | uVar3 * 0x800);
    uVar4 = iVar21 + 0x1fa27cf8 + (uVar2 ^ uVar3 ^ uVar5) + uVar4;
    uVar4 = uVar3 + (uVar4 >> 0x10 | uVar4 * 0x10000);
    uVar5 = iVar8 + -0x3b53a99b + (uVar2 ^ uVar3 ^ uVar4) + uVar5;
    uVar5 = uVar4 + (uVar5 >> 9 | uVar5 * 0x800000);
    uVar2 = iVar6 + -0xbd6ddbc + ((uVar5 | uVar3 ^ 0xffffffff) ^ uVar4) + uVar2;
    uVar2 = uVar5 + (uVar2 >> 0x1a | uVar2 * 0x40);
    uVar3 = iVar13 + 0x432aff97 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar5) + uVar3;
    uVar3 = uVar2 + (uVar3 >> 0x16 | uVar3 * 0x400);
    uVar4 = iVar20 + -0x546bdc59 + ((uVar3 | uVar5 ^ 0xffffffff) ^ uVar2) + uVar4;
    uVar4 = uVar3 + (uVar4 >> 0x11 | uVar4 * 0x8000);
    uVar5 = iVar11 + -0x36c5fc7 + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3) + uVar5;
    uVar5 = uVar4 + (uVar5 >> 0xb | uVar5 * 0x200000);
    uVar2 = iVar18 + 0x655b59c3 + ((uVar5 | uVar3 ^ 0xffffffff) ^ uVar4) + uVar2;
    uVar2 = uVar5 + (uVar2 >> 0x1a | uVar2 * 0x40);
    uVar3 = iVar9 + -0x70f3336e + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar5) + uVar3;
    uVar3 = uVar2 + (uVar3 >> 0x16 | uVar3 * 0x400);
    uVar4 = iVar16 + -0x100b83 + ((uVar3 | uVar5 ^ 0xffffffff) ^ uVar2) + uVar4;
    uVar4 = uVar3 + (uVar4 >> 0x11 | uVar4 * 0x8000);
    uVar5 = iVar7 + -0x7a7ba22f + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3) + uVar5;
    uVar5 = uVar4 + (uVar5 >> 0xb | uVar5 * 0x200000);
    uVar2 = iVar14 + 0x6fa87e4f + ((uVar5 | uVar3 ^ 0xffffffff) ^ uVar4) + uVar2;
    uVar2 = uVar5 + (uVar2 >> 0x1a | uVar2 * 0x40);
    uVar3 = iVar21 + -0x1d31920 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar5) + uVar3;
    uVar3 = uVar2 + (uVar3 >> 0x16 | uVar3 * 0x400);
    uVar4 = iVar12 + -0x5cfebcec + ((uVar3 | uVar5 ^ 0xffffffff) ^ uVar2) + uVar4;
    uVar4 = uVar3 + (uVar4 >> 0x11 | uVar4 * 0x8000);
    uVar5 = iVar19 + 0x4e0811a1 + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3) + uVar5;
    uVar5 = uVar4 + (uVar5 >> 0xb | uVar5 * 0x200000);
    uVar2 = iVar10 + -0x8ac817e + ((uVar5 | uVar3 ^ 0xffffffff) ^ uVar4) + uVar2;
    uVar2 = uVar5 + (uVar2 >> 0x1a | uVar2 * 0x40);
    iVar25 = iVar25 + uVar2;
    uVar3 = iVar17 + -0x42c50dcb + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar5) + uVar3;
    uVar3 = uVar2 + (uVar3 >> 0x16 | uVar3 * 0x400);
    uVar26 = uVar26 + uVar3;
    uVar4 = iVar8 + 0x2ad7d2bb + ((uVar3 | uVar5 ^ 0xffffffff) ^ uVar2) + uVar4;
    uVar4 = uVar3 + (uVar4 >> 0x11 | uVar4 * 0x8000);
    uVar24 = uVar24 + uVar4;
    uVar2 = iVar15 + -0x14792c6f + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3) + uVar5;
    uVar23 = uVar23 + uVar4 + (uVar2 >> 0xb | uVar2 * 0x200000);
    piVar22 = piVar1;
  } while (piVar1 != (int *)((long)param_2 + param_3));
  *(int *)(param_1 + 8) = iVar25;
  *(uint *)(param_1 + 0xc) = uVar23;
  *(uint *)(param_1 + 0x10) = uVar24;
  *(uint *)(param_1 + 0x14) = uVar26;
  return;
}



// ===== FUN_71006cced0 @ 71006cced0 (size=524) =====

void FUN_71006cced0(undefined1 *param_1,uint *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = (ulong)*param_2 & 0x3f;
  lVar4 = uVar3 + 0x19;
  *(undefined1 *)((long)param_2 + uVar3 + 0x18) = 0x80;
  if (0x40 - (uVar3 + 1) < 8) {
    FUN_7100808340((long)param_2 + lVar4,0);
    FUN_71006cc450(param_2,param_2 + 6,0x40);
    lVar5 = 0x38;
    lVar4 = 0x18;
  }
  else {
    lVar5 = 0x38 - (uVar3 + 1);
  }
  FUN_7100808340((long)param_2 + lVar4,0,lVar5);
  uVar1 = *param_2;
  *param_2 = uVar1 << 3;
  uVar2 = FUN_71006a87f0(uVar1 << 3 & 0xf8);
  *(undefined1 *)(param_2 + 0x14) = uVar2;
  uVar2 = FUN_71006a87f0(*(undefined1 *)((long)param_2 + 1));
  *(undefined1 *)((long)param_2 + 0x51) = uVar2;
  uVar2 = FUN_71006a87f0(*(undefined1 *)((long)param_2 + 2));
  *(undefined1 *)((long)param_2 + 0x52) = uVar2;
  uVar2 = FUN_71006a87f0(*(undefined1 *)((long)param_2 + 3));
  *(undefined1 *)((long)param_2 + 0x53) = uVar2;
  uVar2 = FUN_71006a87f0((char)param_2[1]);
  *(undefined1 *)(param_2 + 0x15) = uVar2;
  uVar2 = FUN_71006a87f0(*(undefined1 *)((long)param_2 + 5));
  *(undefined1 *)((long)param_2 + 0x55) = uVar2;
  uVar2 = FUN_71006a87f0(*(undefined1 *)((long)param_2 + 6));
  *(undefined1 *)((long)param_2 + 0x56) = uVar2;
  uVar2 = FUN_71006a87f0(*(undefined1 *)((long)param_2 + 7));
  *(undefined1 *)((long)param_2 + 0x57) = uVar2;
  FUN_71006cc450(param_2,param_2 + 6,0x40);
  uVar2 = FUN_71006a87f0((char)param_2[2]);
  *param_1 = uVar2;
  uVar2 = FUN_71006a87f0(*(undefined1 *)((long)param_2 + 9));
  param_1[1] = uVar2;
  uVar2 = FUN_71006a87f0(*(undefined1 *)((long)param_2 + 10));
  param_1[2] = uVar2;
  uVar2 = FUN_71006a87f0(*(undefined1 *)((long)param_2 + 0xb));
  param_1[3] = uVar2;
  uVar2 = FUN_71006a87f0((char)param_2[3]);
  param_1[4] = uVar2;
  uVar2 = FUN_71006a87f0(*(undefined1 *)((long)param_2 + 0xd));
  param_1[5] = uVar2;
  uVar2 = FUN_71006a87f0(*(undefined1 *)((long)param_2 + 0xe));
  param_1[6] = uVar2;
  uVar2 = FUN_71006a87f0(*(undefined1 *)((long)param_2 + 0xf));
  param_1[7] = uVar2;
  uVar2 = FUN_71006a87f0((char)param_2[4]);
  param_1[8] = uVar2;
  uVar2 = FUN_71006a87f0(*(undefined1 *)((long)param_2 + 0x11));
  param_1[9] = uVar2;
  uVar2 = FUN_71006a87f0(*(undefined1 *)((long)param_2 + 0x12));
  param_1[10] = uVar2;
  uVar2 = FUN_71006a87f0(*(undefined1 *)((long)param_2 + 0x13));
  param_1[0xb] = uVar2;
  uVar2 = FUN_71006a87f0((char)param_2[5]);
  param_1[0xc] = uVar2;
  uVar2 = FUN_71006a87f0(*(undefined1 *)((long)param_2 + 0x15));
  param_1[0xd] = uVar2;
  uVar2 = FUN_71006a87f0(*(undefined1 *)((long)param_2 + 0x16));
  param_1[0xe] = uVar2;
  uVar2 = FUN_71006a87f0(*(undefined1 *)((long)param_2 + 0x17));
  param_1[0xf] = uVar2;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  return;
}



// ===== FUN_71006cd0e0 @ 71006cd0e0 (size=240) =====

void FUN_71006cd0e0(uint *param_1,long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar2 = uVar3 + (uint)param_3 & 0x1fffffff;
  if (uVar2 < uVar3) {
    uVar4 = uVar4 + 1;
  }
  uVar5 = (ulong)(uVar3 & 0x3f);
  *param_1 = uVar2;
  param_1[1] = uVar4 + ((uint)param_3 >> 0x1d);
  if ((uVar3 & 0x3f) != 0) {
    uVar6 = 0x40 - uVar5;
    lVar1 = (long)param_1 + uVar5 + 0x18;
    if (param_3 < uVar6) {
      FUN_710080f900(lVar1);
      return;
    }
    FUN_710080f900(lVar1,param_2,uVar6);
    FUN_71006cc450(param_1,param_1 + 6,0x40);
    param_2 = param_2 + uVar6;
    param_3 = uVar5 + (param_3 - 0x40);
  }
  if (0x3f < param_3) {
    uVar5 = param_3 & 0xffffffffffffffc0;
    param_3 = param_3 & 0x3f;
    param_2 = FUN_71006cc450(param_1,param_2,uVar5);
  }
  FUN_710080f900(param_1 + 6,param_2,param_3);
  return;
}



// ===== FUN_71006cd250 @ 71006cd250 (size=128) =====

long * FUN_71006cd250(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  
  plVar1 = (long *)(*(code *)PTR_FUN_7100af36a8)(0x10);
  plVar4 = plVar1;
  if (plVar1 != (long *)0x0) {
    lVar2 = (*(code *)PTR_FUN_7100af36a8)(*(undefined4 *)(param_1 + 3));
    plVar1[1] = lVar2;
    if (lVar2 == 0) {
      plVar4 = (long *)0x0;
      (*(code *)PTR_FUN_7100af36a0)(plVar1);
    }
    else {
      pcVar3 = (code *)*param_1;
      *plVar1 = (long)param_1;
      (*pcVar3)();
    }
  }
  return plVar4;
}



// ===== FUN_71006cd2d0 @ 71006cd2d0 (size=32) =====

undefined8 FUN_71006cd2d0(long *param_1)

{
  (**(code **)(*param_1 + 8))(param_1[1]);
  return 0;
}



// ===== FUN_71006cd2f0 @ 71006cd2f0 (size=80) =====

undefined8 FUN_71006cd2f0(long *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_1[1]);
  (*(code *)PTR_FUN_7100af36a0)(param_1[1]);
  (*(code *)PTR_FUN_7100af36a0)(param_1);
  return 0;
}



// ===== FUN_71006cd340 @ 71006cd340 (size=224) =====

undefined8 FUN_71006cd340(char *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 uVar6;
  char *local_8;
  
  puVar3 = (undefined4 *)FUN_710080e8e0();
  *puVar3 = 0;
  *param_4 = 0;
  cVar1 = *param_1;
  do {
    if (cVar1 == '\0') {
LAB_71006cd3b0:
      uVar4 = FUN_710081b720(param_1,&local_8,param_3);
      if (param_2 != (undefined8 *)0x0) {
        *param_2 = local_8;
      }
      piVar5 = (int *)FUN_710080e8e0();
      uVar6 = 1;
      if (*piVar5 != 0x22) {
        if (local_8 == param_1) {
          return 2;
        }
        uVar6 = 0;
        *param_4 = uVar4;
      }
      return uVar6;
    }
    iVar2 = FUN_71006af470();
    if (iVar2 == 0) {
      if (*param_1 == '-') {
        if (param_2 == (undefined8 *)0x0) {
          return 2;
        }
        *param_2 = param_1;
        return 2;
      }
      goto LAB_71006cd3b0;
    }
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  } while( true );
}



// ===== FUN_71006cd420 @ 71006cd420 (size=16) =====

bool FUN_71006cd420(long param_1)

{
  return *(long *)(param_1 + 0x658) != 2;
}



// ===== FUN_71006cd430 @ 71006cd430 (size=164) =====

undefined8 FUN_71006cd430(undefined8 param_1,int param_2)

{
  undefined8 local_48;
  undefined1 auStack_40 [16];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_30 = 0;
  uStack_24 = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_10 = 0;
  uStack_8 = 0;
  local_48 = 0;
  uStack_2c = 2;
  uStack_28 = 1;
  if (param_2 == 0) {
    FUN_71006cf6e0(param_1,0,&local_30,&local_48);
    return local_48;
  }
  FUN_710069fb80(auStack_40,0xc,"%d",param_2);
  FUN_71006cf6e0(param_1,auStack_40,&local_30,&local_48);
  return local_48;
}



// ===== FUN_71006cd4e0 @ 71006cd4e0 (size=108) =====

long FUN_71006cd4e0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  long lVar1;
  
  *param_4 = 0;
  lVar1 = FUN_71006cd430(param_2,param_3);
  if (lVar1 != 0) {
    return lVar1;
  }
  FUN_71006c08c0(*param_1,"Curl_ipv4_resolve_r failed for %s\n",param_2);
  return 0;
}



// ===== FUN_71006cd550 @ 71006cd550 (size=1588) =====

undefined8 FUN_71006cd550(char *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined *puVar12;
  char *pcVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  undefined **ppuVar18;
  uint uVar19;
  ulong local_50;
  uint local_40;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  char *local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  iVar7 = -1;
  local_30 = -1;
  local_2c = -1;
  uVar15 = 0xffffffff;
  local_28 = -1;
  if (*param_1 == '\0') {
    bVar3 = true;
    local_40 = 0xffffffff;
    uVar19 = 0xffffffff;
  }
  else {
    uVar15 = 0xffffffff;
    uVar19 = 0xffffffff;
    iVar14 = 0;
    local_40 = 0xffffffff;
    bVar3 = false;
    pcVar13 = param_1;
    uVar16 = uVar15;
    iVar7 = -1;
LAB_71006cd5b8:
    iVar5 = FUN_71006af4d0();
    if (iVar5 == 0) {
      pcVar13 = pcVar13 + 1;
      cVar4 = *pcVar13;
      if (cVar4 != '\0') goto LAB_71006cd5b8;
    }
    else {
      cVar4 = *pcVar13;
    }
    iVar5 = FUN_71006af560(cVar4);
    if (iVar5 == 0) {
      iVar5 = FUN_71006af4a0(*pcVar13);
      if (iVar5 == 0) {
LAB_71006cd6f8:
        iVar14 = iVar14 + 1;
        if (*pcVar13 == '\0' || iVar14 == 6) goto LAB_71006cd70c;
      }
      else {
        local_24 = 0;
        if (local_28 == -1) {
          iVar5 = FUN_7100822f40(pcVar13,"%02d:%02d:%02d%n",&local_30,&local_2c,&local_28,&local_24)
          ;
          if (iVar5 == 3) {
            pcVar13 = pcVar13 + local_24;
            goto LAB_71006cd6f8;
          }
          if ((local_28 == -1) &&
             (iVar5 = FUN_7100822f40(pcVar13,"%02d:%02d%n",&local_30,&local_2c,&local_24),
             iVar5 == 2)) {
            iVar14 = iVar14 + 1;
            local_28 = 0;
            pcVar13 = pcVar13 + local_24;
            if (*pcVar13 == '\0' || iVar14 == 6) goto LAB_71006cd70c;
            goto LAB_71006cd5b8;
          }
        }
        piVar8 = (int *)FUN_710080e8e0();
        iVar5 = *piVar8;
        puVar9 = (undefined4 *)FUN_710080e8e0();
        *puVar9 = 0;
        lVar17 = FUN_710081b720(pcVar13,&local_20,10);
        piVar8 = (int *)FUN_710080e8e0();
        iVar2 = *piVar8;
        piVar8 = (int *)FUN_710080e8e0();
        if (iVar5 != *piVar8) {
          piVar8 = (int *)FUN_710080e8e0();
          *piVar8 = iVar5;
        }
        if (iVar2 != 0) {
          return 0xffffffff;
        }
        if (0xffffffff < lVar17 + 0x80000000U) {
          return 0xffffffff;
        }
        uVar6 = FUN_71006a8830(lVar17);
        if (iVar7 == -1) {
          lVar17 = (long)local_20 - (long)pcVar13;
          if ((pcVar13 <= param_1 || lVar17 != 4) || 0x578 < (int)uVar6) goto LAB_71006cd6c0;
          pcVar11 = pcVar13 + -1;
          if ((*pcVar11 - 0x2bU & 0xfd) == 0) {
            iVar5 = uVar6 + ((int)uVar6 / 100) * -0x28;
            pcVar13 = local_20;
            iVar7 = iVar5 * -0x3c;
            if (*pcVar11 != '+') {
              iVar7 = iVar5 * 0x3c;
            }
            goto LAB_71006cd6f8;
          }
LAB_71006cd6c8:
          if (!bVar3) {
            if (uVar19 != 0xffffffff) {
              return 0xffffffff;
            }
            if (uVar6 - 1 < 0x1f) {
              bVar3 = true;
              pcVar13 = local_20;
              uVar19 = uVar6;
              goto LAB_71006cd6f8;
            }
          }
        }
        else {
          lVar17 = (long)local_20 - (long)pcVar13;
LAB_71006cd6c0:
          if ((lVar17 != 8) || ((uVar15 & local_40) != 0xffffffff)) goto LAB_71006cd6c8;
          if (uVar19 == 0xffffffff) {
            local_40 = (int)uVar6 / 10000;
            uVar19 = (int)uVar6 % 100;
            uVar15 = ((int)uVar6 % 10000) / 100 - 1;
            pcVar13 = local_20;
            goto LAB_71006cd6f8;
          }
          if (!bVar3) {
            return 0xffffffff;
          }
        }
        if (local_40 != 0xffffffff) {
          return 0xffffffff;
        }
        local_40 = uVar6;
        if ((int)uVar6 < 100) {
          local_40 = uVar6 + 2000;
          if (0x46 < (int)uVar6) {
            local_40 = uVar6 + 0x76c;
          }
        }
        bVar3 = uVar19 != 0xffffffff;
        iVar14 = iVar14 + 1;
        pcVar13 = local_20;
        if (*local_20 == '\0' || iVar14 == 6) goto LAB_71006cd70c;
      }
      goto LAB_71006cd5b8;
    }
    local_20 = (char *)0x0;
    uStack_18 = 0;
    local_10 = 0;
    uStack_8 = 0;
    iVar5 = FUN_7100822f40(pcVar13,"%31[ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz]",
                           &local_20);
    if (iVar5 == 0) {
      if (uVar16 != 0xffffffff) {
        local_50 = 0;
        goto joined_r0x0071006cd8b8;
      }
      pcVar11 = "Mon";
      local_50 = 0;
      ppuVar18 = &PTR_DAT_7100ae3ae0;
LAB_71006cd888:
      lVar17 = 0;
      while( true ) {
        uVar16 = (uint)lVar17;
        iVar5 = FUN_71006ca300(&local_20,pcVar11);
        lVar17 = lVar17 + 1;
        if (iVar5 != 0) break;
        if (lVar17 == 7) {
          uVar16 = 0xffffffff;
          goto joined_r0x0071006cd8b8;
        }
        pcVar11 = ppuVar18[lVar17];
      }
    }
    else {
      local_50 = FUN_710081ce00(&local_20);
      if (uVar16 == 0xffffffff) {
        if (local_50 < 4) {
          pcVar11 = "Mon";
          ppuVar18 = &PTR_DAT_7100ae3ae0;
        }
        else {
          pcVar11 = "Monday";
          ppuVar18 = &PTR_s_Monday_7100ae3b18;
        }
        goto LAB_71006cd888;
      }
joined_r0x0071006cd8b8:
      if (uVar15 == 0xffffffff) {
        puVar12 = &DAT_7100849048;
        lVar17 = 0;
        while( true ) {
          uVar15 = (uint)lVar17;
          iVar5 = FUN_71006ca300(&local_20,puVar12);
          lVar17 = lVar17 + 1;
          if (iVar5 != 0) break;
          if (lVar17 == 0xc) {
            if (iVar7 != -1) {
              return 0xffffffff;
            }
            uVar15 = 0xffffffff;
            goto LAB_71006cd908;
          }
          puVar12 = (&PTR_DAT_7100ae3a80)[lVar17];
        }
      }
      else {
        if (iVar7 != -1) {
          return 0xffffffff;
        }
LAB_71006cd908:
        puVar12 = &DAT_71009bafa8;
        while (iVar7 = FUN_71006ca300(&local_20,puVar12), iVar7 == 0) {
          puVar12 = puVar12 + 0xc;
          if (puVar12 == &UNK_71009bb2e4) {
            return 0xffffffff;
          }
        }
        iVar7 = *(int *)(puVar12 + 8) * 0x3c;
      }
    }
    iVar14 = iVar14 + 1;
    pcVar13 = pcVar13 + local_50;
    if (*pcVar13 != '\0' && iVar14 != 6) goto LAB_71006cd5b8;
LAB_71006cd70c:
    bVar3 = (uVar15 == 0xffffffff || uVar19 == 0xffffffff) || (int)local_40 < 0x62f;
    if (local_28 != -1) goto LAB_71006cd740;
  }
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
LAB_71006cd740:
  uVar10 = 0xffffffff;
  if ((((!bVar3) && ((int)uVar19 < 0x20 && (int)uVar15 < 0xc)) && (local_30 < 0x18)) &&
     ((local_2c < 0x3c && (local_28 < 0x3d)))) {
    uVar16 = uVar15;
    if ((int)uVar15 < 0) {
      local_40 = local_40 + (0xb - uVar15) / 0xc;
      uVar16 = 0xb - (0xb - uVar15) % 0xc;
    }
    uVar15 = local_40 - ((int)uVar15 < 2);
    uVar10 = 0;
    lVar17 = (long)local_28 +
             ((long)local_2c +
             ((long)local_30 +
             ((long)(int)((((int)uVar15 >> 2) - (int)uVar15 / 100) + uVar15 / 400 + -0x1dd) +
              (long)(int)(local_40 - 0x7b2) * 0x16d +
              (long)*(int *)(&UNK_71009baf78 + (long)(int)uVar16 * 4) + (long)(int)uVar19 + -1) *
             0x18) * 0x3c) * 0x3c;
    lVar1 = lVar17 + iVar7;
    if (iVar7 == -1) {
      lVar1 = lVar17;
    }
    *param_2 = lVar1;
  }
  return uVar10;
}



// ===== FUN_71006cdb90 @ 71006cdb90 (size=80) =====

long FUN_71006cdb90(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long local_8;
  
  local_8 = -1;
  iVar2 = FUN_71006cd550(param_1,&local_8);
  if (iVar2 != 0) {
    lVar1 = -1;
    if (iVar2 == 1) {
      lVar1 = local_8;
    }
    return lVar1;
  }
  if (local_8 == -1) {
    local_8 = 0;
  }
  return local_8;
}



// ===== FUN_71006cdbe0 @ 71006cdbe0 (size=40) =====

undefined4 FUN_71006cdbe0(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 local_8;
  
  local_8 = param_1;
  lVar1 = FUN_710080b140(&local_8);
  uVar2 = 0x2b;
  if (lVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}



// ===== FUN_71006cdc80 @ 71006cdc80 (size=780) =====

undefined8 FUN_71006cdc80(undefined4 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined1 auStack_100 [256];
  
  uVar11 = **(undefined8 **)(param_1 + 4);
  if (param_2 == 6) {
    param_1[7] = 0;
    *(undefined2 *)(param_1 + 0x10) = 0;
    **(undefined1 **)(param_1 + 0x5a) = 0;
    *(undefined1 *)(*(long *)(param_1 + 0x5a) + 1) = 4;
    uVar3 = *(undefined2 *)(param_1 + 0x10);
    *(char *)(*(long *)(param_1 + 0x5a) + 2) = (char)((ushort)uVar3 >> 8);
    *(char *)(*(long *)(param_1 + 0x5a) + 3) = (char)uVar3;
    lVar6 = FUN_710076bab0(param_1[6],*(undefined8 *)(param_1 + 0x5a),4,0x20000,param_1 + 0x32,
                           param_1[0x52]);
    if (-1 < lVar6) {
      *param_1 = 1;
      FUN_710081c880(param_1 + 0xe);
      return 0;
    }
LAB_71006cdf10:
    puVar8 = (undefined4 *)FUN_710080e8e0(lVar6);
    uVar9 = FUN_71006a6bc0(*puVar8,auStack_100,0x100);
    FUN_71006c0a00(uVar11,"%s",uVar9);
    return 0x37;
  }
  if (param_2 < 7) {
    if (param_2 == 3) {
      uVar4 = *(ushort *)(param_1 + 0x10);
      uVar1 = uVar4 + 1;
      uVar2 = uVar1 & 0xffff;
      uVar5 = (uint)(*(ushort *)(*(long *)(param_1 + 0x58) + 2) >> 8) |
              (*(ushort *)(*(long *)(param_1 + 0x58) + 2) & 0xff00ff) << 8;
      if (uVar5 == (uVar1 & 0xffff)) {
        param_1[7] = 0;
      }
      else {
        if (uVar4 != uVar5) {
          FUN_71006c08c0(uVar11,"Received unexpected DATA packet block %d, expecting block %d\n",
                         uVar5,uVar2);
          return 0;
        }
        FUN_71006c08c0(uVar11,"Received last DATA packet block %d again.\n",uVar4,uVar2);
      }
      *(short *)(param_1 + 0x10) = (short)uVar5;
      **(undefined1 **)(param_1 + 0x5a) = 0;
      *(undefined1 *)(*(long *)(param_1 + 0x5a) + 1) = 4;
      uVar3 = *(undefined2 *)(param_1 + 0x10);
      *(char *)(*(long *)(param_1 + 0x5a) + 2) = (char)((ushort)uVar3 >> 8);
      *(char *)(*(long *)(param_1 + 0x5a) + 3) = (char)uVar3;
      lVar6 = FUN_710076bab0(param_1[6],*(undefined8 *)(param_1 + 0x5a),4,0x20000,param_1 + 0x32,
                             param_1[0x52]);
      if (lVar6 < 0) {
        puVar8 = (undefined4 *)FUN_710080e8e0();
        uVar9 = FUN_71006a6bc0(*puVar8,auStack_100,0x100);
        FUN_71006c0a00(uVar11,"%s",uVar9);
        return 0x37;
      }
      uVar10 = 3;
      if ((long)(int)param_1[0x55] + 3 < (long)(int)param_1[0x53]) {
        uVar10 = 1;
      }
      *param_1 = uVar10;
      FUN_710081c880(param_1 + 0xe);
      return 0;
    }
    if (param_2 == 5) {
      **(undefined1 **)(param_1 + 0x5a) = 0;
      *(undefined1 *)(*(long *)(param_1 + 0x5a) + 1) = 5;
      uVar3 = *(undefined2 *)(param_1 + 0x10);
      *(char *)(*(long *)(param_1 + 0x5a) + 2) = (char)((ushort)uVar3 >> 8);
      *(char *)(*(long *)(param_1 + 0x5a) + 3) = (char)uVar3;
      FUN_710076bab0(param_1[6],*(undefined8 *)(param_1 + 0x5a),4,0x20000,param_1 + 0x32,
                     param_1[0x52]);
      *param_1 = 3;
      return 0;
    }
  }
  else if (param_2 == 7) {
    param_1[7] = param_1[7] + 1;
    FUN_71006c08c0(uVar11,"Timeout waiting for block %d ACK.  Retries = %d\n",
                   *(short *)(param_1 + 0x10) + 1);
    if ((int)param_1[9] < (int)param_1[7]) {
      *param_1 = 3;
      param_1[2] = 0xffffff9d;
      return 0;
    }
    lVar7 = FUN_710076bab0(param_1[6],*(undefined8 *)(param_1 + 0x5a),4,0x20000,param_1 + 0x32,
                           param_1[0x52]);
    lVar6 = 0;
    if (-1 < lVar7) {
      return 0;
    }
    goto LAB_71006cdf10;
  }
  FUN_71006c0a00(uVar11,"%s","tftp_rx: internal error");
  return 0x47;
}



// ===== FUN_71006cdf90 @ 71006cdf90 (size=368) =====

undefined8 FUN_71006cdf90(int *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  
  iVar6 = *param_1;
  FUN_710081c880(param_1 + 10);
  lVar2 = FUN_71006a1800(**(undefined8 **)(param_1 + 4),0,iVar6 == 0);
  if (lVar2 < 0) {
    FUN_71006c0a00(**(undefined8 **)(param_1 + 4),"Connection time-out");
    return 0x1c;
  }
  lVar3 = *(long *)(param_1 + 10);
  if (iVar6 == 0) {
    uVar4 = (lVar2 + 500U) / 1000;
    *(ulong *)(param_1 + 0xc) = uVar4 + lVar3;
    if (4 < (int)uVar4) {
      iVar6 = (int)uVar4 / 5;
      param_1[9] = iVar6;
      goto LAB_71006ce074;
    }
LAB_71006ce08c:
    uVar5 = 3;
    iVar6 = 3;
    param_1[9] = 3;
  }
  else {
    if (lVar2 == 0) {
      uVar4 = 0xe10;
      *(long *)(param_1 + 0xc) = lVar3 + 0xe10;
    }
    else {
      uVar4 = (lVar2 + 500U) / 1000;
      *(ulong *)(param_1 + 0xc) = uVar4 + lVar3;
      iVar6 = (int)uVar4 / 5;
      param_1[9] = iVar6;
LAB_71006ce074:
      if (iVar6 < 3) goto LAB_71006ce08c;
      uVar5 = (ulong)iVar6;
      if (iVar6 < 0x33) goto LAB_71006cdfec;
    }
    uVar5 = 0x32;
    iVar6 = 0x32;
    param_1[9] = 0x32;
  }
LAB_71006cdfec:
  iVar1 = 0;
  if (uVar5 != 0) {
    iVar1 = (int)(uVar4 / uVar5);
  }
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  param_1[8] = iVar1;
  FUN_71006c08c0(**(undefined8 **)(param_1 + 4),
                 "set timeouts for state %d; Total %ld, retry %d maxtry %d\n",*param_1,uVar4,iVar1,
                 iVar6);
  FUN_710081c880(param_1 + 0xe);
  return 0;
}



// ===== FUN_71006ce100 @ 71006ce100 (size=880) =====

int FUN_71006ce100(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long local_108;
  undefined1 auStack_100 [256];
  
  lVar11 = **(long **)(param_1 + 4);
  if (param_2 == 6) {
    sVar3 = 1;
  }
  else {
    if (6 < param_2) {
      if (param_2 != 7) {
LAB_71006ce208:
        FUN_71006c0a00(lVar11,"tftp_tx: internal error, event: %i",param_2);
        return 0;
      }
      param_1[7] = param_1[7] + 1;
      FUN_71006c08c0(lVar11,"Timeout waiting for block %d ACK.  Retries = %d\n",
                     *(short *)(param_1 + 0x10) + 1);
      if ((int)param_1[9] < (int)param_1[7]) {
        *param_1 = 3;
        param_1[2] = 0xffffff9d;
        return 0;
      }
      lVar6 = FUN_710076bab0(param_1[6],*(undefined8 *)(param_1 + 0x5a),(long)(param_1[0x54] + 4),
                             0x20000,param_1 + 0x32,param_1[0x52]);
      if (-1 < lVar6) {
        FUN_71006b8fd0(lVar11,*(undefined8 *)(lVar11 + 0xf0));
        return 0;
      }
      goto LAB_71006ce440;
    }
    if (param_2 != 4) {
      if (param_2 == 5) {
        *param_1 = 3;
        **(undefined1 **)(param_1 + 0x5a) = 0;
        *(undefined1 *)(*(long *)(param_1 + 0x5a) + 1) = 5;
        uVar1 = *(undefined2 *)(param_1 + 0x10);
        *(char *)(*(long *)(param_1 + 0x5a) + 2) = (char)((ushort)uVar1 >> 8);
        *(char *)(*(long *)(param_1 + 0x5a) + 3) = (char)uVar1;
        FUN_710076bab0(param_1[6],*(undefined8 *)(param_1 + 0x5a),4,0x20000,param_1 + 0x32,
                       param_1[0x52]);
        *param_1 = 3;
        return 0;
      }
      goto LAB_71006ce208;
    }
    uVar2 = (uint)(*(ushort *)(*(long *)(param_1 + 0x58) + 2) >> 8) |
            (*(ushort *)(*(long *)(param_1 + 0x58) + 2) & 0xff00ff) << 8;
    if ((*(ushort *)(param_1 + 0x10) != uVar2) &&
       (*(ushort *)(param_1 + 0x10) != 0 || uVar2 != 0xffff)) {
      FUN_71006c08c0(lVar11,"Received ACK for block %d, expecting %d\n");
      iVar4 = param_1[7];
      param_1[7] = iVar4 + 1;
      if ((int)param_1[9] < iVar4 + 1) {
        FUN_71006c0a00(lVar11,"tftp_tx: giving up waiting for block %d ack",
                       *(undefined2 *)(param_1 + 0x10));
        return 0x37;
      }
      lVar6 = FUN_710076bab0(param_1[6],*(undefined8 *)(param_1 + 0x5a),(long)(param_1[0x54] + 4),
                             0x20000,param_1 + 0x32,param_1[0x52]);
      if (-1 < lVar6) {
        return 0;
      }
      goto LAB_71006ce440;
    }
    FUN_710081c880(param_1 + 0xe);
    sVar3 = *(short *)(param_1 + 0x10) + 1;
  }
  param_1[7] = 0;
  *(short *)(param_1 + 0x10) = sVar3;
  **(undefined1 **)(param_1 + 0x5a) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0x5a) + 1) = 3;
  uVar1 = *(undefined2 *)(param_1 + 0x10);
  *(char *)(*(long *)(param_1 + 0x5a) + 2) = (char)((ushort)uVar1 >> 8);
  *(char *)(*(long *)(param_1 + 0x5a) + 3) = (char)uVar1;
  if (*(ushort *)(param_1 + 0x10) < 2) {
    iVar4 = param_1[0x55];
  }
  else {
    iVar4 = param_1[0x55];
    if ((int)param_1[0x54] < iVar4) {
      *param_1 = 3;
      return 0;
    }
  }
  plVar5 = *(long **)(param_1 + 4);
  iVar9 = 0;
  lVar6 = *plVar5;
  param_1[0x54] = 0;
  *(long *)(lVar6 + 0x1c8) = *(long *)(param_1 + 0x5a) + 4;
  do {
    iVar4 = FUN_71006c85a0(plVar5,(long)(iVar4 - iVar9),&local_108);
    if (iVar4 != 0) {
      return iVar4;
    }
    plVar5 = *(long **)(param_1 + 4);
    lVar6 = *plVar5;
    iVar4 = param_1[0x55];
    iVar9 = param_1[0x54] + (int)local_108;
    lVar10 = *(long *)(lVar6 + 0x1c8);
    param_1[0x54] = iVar9;
    *(long *)(lVar6 + 0x1c8) = lVar10 + local_108;
  } while (local_108 != 0 && iVar9 < iVar4);
  lVar6 = FUN_710076bab0(param_1[6],*(undefined8 *)(param_1 + 0x5a),(long)(iVar9 + 4),0x20000,
                         param_1 + 0x32,param_1[0x52]);
  if (-1 < lVar6) {
    *(long *)(lVar11 + 0xf0) = (long)(int)param_1[0x54] + *(long *)(lVar11 + 0xf0);
    FUN_71006b8fd0(lVar11);
    return 0;
  }
LAB_71006ce440:
  puVar7 = (undefined4 *)FUN_710080e8e0();
  uVar8 = FUN_71006a6bc0(*puVar7,auStack_100,0x100);
  FUN_71006c0a00(lVar11,"%s",uVar8);
  return 0x37;
}



// ===== FUN_71006ce470 @ 71006ce470 (size=460) =====

undefined8 FUN_71006ce470(long *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_100 [256];
  
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_7100af3698)(1,0x170);
  param_1[0xe8] = (long)puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    return 0x1b;
  }
  if (*(long *)(*param_1 + 0x7b8) == 0) {
    iVar2 = 0x200;
    lVar5 = *(long *)(puVar4 + 0x58);
    iVar3 = 0x200;
  }
  else {
    iVar2 = (int)*(long *)(*param_1 + 0x7b8);
    if (0xffb0 < iVar2 - 8U) {
      return 0x47;
    }
    iVar3 = iVar2;
    if (iVar2 < 0x200) {
      iVar3 = 0x200;
    }
    lVar5 = *(long *)(puVar4 + 0x58);
  }
  if (lVar5 == 0) {
    lVar5 = (*(code *)PTR_FUN_7100af3698)(1,(long)(iVar3 + 4));
    *(long *)(puVar4 + 0x58) = lVar5;
    if (lVar5 == 0) {
      return 0x1b;
    }
  }
  if (*(long *)(puVar4 + 0x5a) == 0) {
    lVar5 = (*(code *)PTR_FUN_7100af3698)(1,(long)(iVar3 + 4));
    *(long *)(puVar4 + 0x5a) = lVar5;
    if (lVar5 == 0) {
      return 0x1b;
    }
  }
  FUN_71006a2e80(param_1,1);
  lVar5 = param_1[0x9b];
  uVar1 = *(undefined4 *)(param_1[0x5c] + 4);
  *puVar4 = 0;
  puVar4[2] = 0xffffff9c;
  *(long **)(puVar4 + 4) = param_1;
  puVar4[6] = (int)lVar5;
  puVar4[0x55] = 0x200;
  puVar4[0x56] = iVar2;
  *(char *)((long)puVar4 + 0x49) = (char)uVar1;
  FUN_71006cdf90(puVar4);
  if ((*(uint *)((long)param_1 + 0x624) >> 0x18 & 1) == 0) {
    iVar2 = FUN_710076bbc0(puVar4[6],puVar4 + 0x12,*(undefined4 *)(param_1[0x5c] + 0x10));
    if (iVar2 != 0) {
      lVar5 = *param_1;
      puVar4 = (undefined4 *)FUN_710080e8e0();
      uVar6 = FUN_71006a6bc0(*puVar4,auStack_100,0x100);
      FUN_71006c0a00(lVar5,"bind() failed; %s",uVar6);
      return 7;
    }
    *(uint *)((long)param_1 + 0x624) = *(uint *)((long)param_1 + 0x624) | 0x1000000;
  }
  FUN_71006b8f60(*param_1);
  *param_2 = 1;
  return 0;
}



// ===== FUN_71006ce640 @ 71006ce640 (size=188) =====

undefined8 FUN_71006ce640(long *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  long lVar3;
  
  lVar3 = *param_1;
  *(undefined4 *)((long)param_1 + 0x32c) = 4;
  puVar2 = (undefined1 *)FUN_710081d620(*(undefined8 *)(lVar3 + 0x1608),";mode=");
  if ((puVar2 == (undefined1 *)0x0) &&
     (puVar2 = (undefined1 *)FUN_710081d620(param_1[0x66],";mode="), puVar2 == (undefined1 *)0x0)) {
    return 0;
  }
  *puVar2 = 0;
  cVar1 = FUN_71006ca2e0(puVar2[6]);
  if ((cVar1 != 'A') && (cVar1 != 'N')) {
    *(ulong *)(lVar3 + 0xf60) = *(ulong *)(lVar3 + 0xf60) & 0xfffffffffffff7ff;
    return 0;
  }
  *(ulong *)(lVar3 + 0xf60) = *(ulong *)(lVar3 + 0xf60) | 0x800;
  return 0;
}



// ===== FUN_71006ce700 @ 71006ce700 (size=160) =====

char FUN_71006ce700(int param_1)

{
  char cVar1;
  
  if (param_1 == 3) {
    return 'F';
  }
  if (param_1 < 4) {
    if (param_1 == 0) {
      return 'G';
    }
    if (param_1 < 1) {
      cVar1 = '\x1c';
      if (param_1 != -99) {
        cVar1 = '*';
        if (param_1 == -0x62) {
          cVar1 = '\a';
        }
        return cVar1;
      }
    }
    else {
      cVar1 = (param_1 != 1) + 'D';
    }
  }
  else {
    cVar1 = 'I';
    if (param_1 != 6) {
      if (6 < param_1) {
        cVar1 = '*';
        if (param_1 == 7) {
          cVar1 = 'J';
        }
        return cVar1;
      }
      cVar1 = 'G';
      if (param_1 != 4) {
        cVar1 = '*';
        if (param_1 == 5) {
          cVar1 = 'H';
        }
        return cVar1;
      }
    }
  }
  return cVar1;
}



// ===== FUN_71006ce7a0 @ 71006ce7a0 (size=84) =====

undefined8 FUN_71006ce7a0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x740);
  iVar1 = FUN_71006b9670();
  if (iVar1 != 0) {
    return 0x2a;
  }
  if ((lVar3 != 0) && (*(int *)(lVar3 + 8) != -100)) {
    uVar2 = FUN_71006ce700();
    return uVar2;
  }
  return 0;
}



// ===== FUN_71006ce800 @ 71006ce800 (size=1292) =====

ulong FUN_71006ce800(undefined4 *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 local_108;
  undefined2 local_100 [128];
  
  lVar11 = **(long **)(param_1 + 4);
  pcVar1 = "octet";
  if ((*(ulong *)(lVar11 + 0xf60) & 0x800) != 0) {
    pcVar1 = "netascii";
  }
  if (param_2 == 5) {
    *param_1 = 3;
    return 0;
  }
  uVar3 = (uint)*(ulong *)(lVar11 + 0xf60);
  if (param_2 < 6) {
    if (param_2 == 3) {
LAB_71006ceb8c:
      FUN_71006c08c0(lVar11,"%s\n","Connected for receive");
      *param_1 = 1;
      uVar3 = FUN_71006cdf90(param_1);
      if (uVar3 != 0) {
        return (ulong)uVar3;
      }
      uVar7 = FUN_71006cdc80(param_1,param_2);
      return uVar7;
    }
    if (param_2 == 4) {
LAB_71006ce85c:
      FUN_71006c08c0(lVar11,"%s\n","Connected for transmit");
      *param_1 = 2;
      uVar3 = FUN_71006cdf90(param_1);
      if (uVar3 != 0) {
        return (ulong)uVar3;
      }
      uVar7 = FUN_71006ce100(param_1,param_2);
      return uVar7;
    }
    if (param_2 != 0) goto LAB_71006ce8a8;
  }
  else {
    if (param_2 == 6) {
      if ((uVar3 >> 0x1d & 1) != 0) goto LAB_71006ce85c;
      goto LAB_71006ceb8c;
    }
    if (param_2 != 7) {
LAB_71006ce8a8:
      FUN_71006c0a00(lVar11,"tftp_send_first: internal error");
      return 0;
    }
  }
  iVar2 = param_1[7];
  param_1[7] = iVar2 + 1;
  if ((int)param_1[9] < iVar2 + 1) {
    *param_1 = 3;
    param_1[2] = 0xffffff9e;
    return 0;
  }
  **(undefined1 **)(param_1 + 0x5a) = 0;
  if ((uVar3 >> 0x1d & 1) == 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x5a) + 1) = 1;
    lVar4 = **(long **)(param_1 + 4);
  }
  else {
    *(undefined1 *)(*(long *)(param_1 + 0x5a) + 1) = 2;
    lVar10 = *(long *)(lVar11 + 0x15a0);
    lVar4 = **(long **)(param_1 + 4);
    *(long *)(lVar4 + 0x1c8) = *(long *)(param_1 + 0x5a) + 4;
    if (lVar10 != -1) {
      FUN_71006b9010(lVar11);
      lVar4 = **(long **)(param_1 + 4);
    }
  }
  uVar3 = FUN_710069f7f0(lVar11,*(long *)(lVar4 + 0x1608) + 1,0,&local_108,0,0);
  uVar9 = local_108;
  uVar7 = (ulong)uVar3;
  if (uVar3 != 0) {
    return uVar7;
  }
  uVar5 = FUN_710081ce00(local_108);
  lVar4 = FUN_710081ce00(pcVar1);
  if ((ulong)(((long)(int)param_1[0x55] + -4) - lVar4) < uVar5) {
    uVar7 = 0x47;
    FUN_71006c0a00(lVar11,"TFTP file name too long\n");
    goto LAB_71006ceb6c;
  }
  FUN_710069fb80(*(long *)(param_1 + 0x5a) + 2,(long)(int)param_1[0x55],"%s%c%s%c",uVar9,0,pcVar1,0)
  ;
  lVar10 = FUN_710081ce00(local_108);
  lVar4 = lVar4 + lVar10;
  uVar5 = lVar4 + 4;
  uVar3 = (uint)*(undefined8 *)(lVar11 + 0xf60);
  if ((uVar3 >> 3 & 1) != 0) {
LAB_71006ceb40:
    uVar6 = FUN_710076bab0(param_1[6],*(undefined8 *)(param_1 + 0x5a),uVar5,0,
                           *(undefined8 *)(*(long *)(*(long *)(param_1 + 4) + 0x2e0) + 0x20),
                           *(undefined4 *)(*(long *)(*(long *)(param_1 + 4) + 0x2e0) + 0x10));
    if (uVar5 != uVar6) {
      puVar8 = (undefined4 *)FUN_710080e8e0();
      uVar9 = FUN_71006a6bc0(*puVar8,local_100,0x100);
      FUN_71006c0a00(lVar11,"%s",uVar9);
    }
    goto LAB_71006ceb6c;
  }
  if (((uVar3 >> 0x1d & 1) == 0) || (*(long *)(lVar11 + 0x15a0) == -1)) {
    local_100[0] = 0x30;
  }
  else {
    FUN_710069fb80(local_100,0x40,"%ld");
  }
  if ((ulong)(long)(int)param_1[0x55] < lVar4 + 10U) {
LAB_71006cec98:
    FUN_710069fb80(local_100,0x40,"%d",param_1[0x56]);
LAB_71006cecb0:
    FUN_710069fb80(local_100,0x40,"%d",param_1[8]);
  }
  else {
    builtin_strncpy((char *)(*(long *)(param_1 + 0x5a) + uVar5),"tsiz",4);
    pcVar1 = (char *)(*(long *)(param_1 + 0x5a) + uVar5 + 4);
    pcVar1[0] = 'e';
    pcVar1[1] = '\0';
    lVar10 = FUN_710081ce00(local_100);
    uVar5 = lVar10 + lVar4 + 0xb;
    if ((ulong)(long)(int)param_1[0x55] < uVar5) goto LAB_71006cec98;
    FUN_710080f900(*(long *)(param_1 + 0x5a) + lVar4 + 10U,local_100,lVar10 + 1);
    FUN_710069fb80(local_100,0x40,"%d",param_1[0x56]);
    if ((ulong)(long)(int)param_1[0x55] < uVar5 + 8) goto LAB_71006cecb0;
    *(undefined8 *)(*(long *)(param_1 + 0x5a) + uVar5) = 0x657a69736b6c62;
    lVar10 = *(long *)(param_1 + 0x5a);
    lVar4 = FUN_710081ce00(local_100);
    uVar6 = uVar5 + 9 + lVar4;
    if ((ulong)(long)(int)param_1[0x55] < uVar6) {
      FUN_710069fb80(local_100,0x40,"%d",param_1[8]);
    }
    else {
      FUN_710080f900(lVar10 + uVar5 + 8,local_100,lVar4 + 1);
      FUN_710069fb80(local_100,0x40,"%d",param_1[8]);
      if (uVar6 + 8 <= (ulong)(long)(int)param_1[0x55]) {
        *(undefined8 *)(*(long *)(param_1 + 0x5a) + uVar6) = 0x74756f656d6974;
        lVar10 = *(long *)(param_1 + 0x5a);
        lVar4 = FUN_710081ce00(local_100);
        uVar5 = uVar6 + 9 + lVar4;
        if (uVar5 <= (ulong)(long)(int)param_1[0x55]) {
          FUN_710080f900(lVar10 + uVar6 + 8,local_100,lVar4 + 1);
          goto LAB_71006ceb40;
        }
      }
    }
  }
  uVar7 = 0x47;
  FUN_71006c0a00(lVar11,"TFTP buffer too small for options");
LAB_71006ceb6c:
  (*(code *)PTR_FUN_7100af36a0)(local_108);
  return uVar7;
}



// ===== FUN_71006ced10 @ 71006ced10 (size=40) =====

undefined8 FUN_71006ced10(uint *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  if (uVar1 == 2) {
    uVar2 = FUN_71006ce100();
    return uVar2;
  }
  if (uVar1 < 3) {
    if (uVar1 != 0) {
      uVar2 = FUN_71006cdc80();
      return uVar2;
    }
    uVar2 = FUN_71006ce800();
    return uVar2;
  }
  if (uVar1 == 3) {
    FUN_71006c08c0(**(undefined8 **)(param_1 + 4),"%s\n","TFTP finished");
    return 0;
  }
  FUN_71006c0a00(**(undefined8 **)(param_1 + 4),"%s","Internal state machine error");
  return 0x47;
}



// ===== FUN_71006ced30 @ 71006ced30 (size=88) =====

undefined8 FUN_71006ced30(void)

{
  int in_w3;
  undefined8 in_x4;
  
  if (in_w3 == 3) {
    FUN_71006c08c0(in_x4,"%s\n","TFTP finished");
    return 0;
  }
  FUN_71006c0a00(in_x4,"%s","Internal state machine error");
  return 0x47;
}



// ===== FUN_71006ced90 @ 71006ced90 (size=1632) =====

int FUN_71006ced90(long *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  ulong uVar2;
  ulong uVar3;
  ushort *puVar4;
  uint uVar5;
  short sVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  long lVar13;
  ushort *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  undefined4 local_104;
  long local_100 [32];
  
  piVar18 = (int *)param_1[0xe8];
  lVar15 = *param_1;
  FUN_710081c880(local_100);
  lVar13 = *(long *)(piVar18 + 0xc);
  if (lVar13 < local_100[0]) {
    *piVar18 = 3;
    piVar18[2] = -99;
    *param_2 = 0;
LAB_71006cef48:
    iVar8 = 0x1c;
    FUN_71006c0a00(lVar15,"TFTP response timeout");
  }
  else {
    if ((long)piVar18[8] + *(long *)(piVar18 + 0xe) < local_100[0]) {
      FUN_710081c880(piVar18 + 0xe);
      lVar13 = *(long *)(piVar18 + 0xc);
      *param_2 = 0;
      if (lVar13 - local_100[0] < 1) goto LAB_71006cef48;
      iVar8 = FUN_71006ced10(piVar18,7);
      if (iVar8 != 0) {
        return iVar8;
      }
      iVar8 = *piVar18;
      *param_2 = iVar8 == 3;
      if (iVar8 == 3) {
        FUN_71006ca160(lVar15,0xffffffff,0xffffffffffffffff,0,0xffffffff);
        return 0;
      }
    }
    else {
      *param_2 = 0;
      if (lVar13 == local_100[0]) goto LAB_71006cef48;
      iVar8 = FUN_71006a6d40(piVar18[6],0xffffffff,0xffffffff,0);
      if (iVar8 == -1) {
        puVar12 = (undefined4 *)FUN_710080e8e0();
        uVar11 = FUN_71006a6bc0(*puVar12,local_100,0x100);
        FUN_71006c0a00(lVar15,"%s",uVar11);
        piVar18[3] = 5;
        return 0;
      }
      if (iVar8 != 0) {
        lVar13 = param_1[0xe8];
        local_104 = 0x80;
        lVar16 = *param_1;
        iVar8 = FUN_710076b9e0(*(undefined4 *)(lVar13 + 0x18),*(undefined8 *)(lVar13 + 0x160),
                               (long)(*(int *)(lVar13 + 0x154) + 4),0,local_100,&local_104);
        uVar7 = local_104;
        *(int *)(lVar13 + 0x14c) = iVar8;
        if (*(int *)(lVar13 + 0x148) == 0) {
          FUN_710080f900(lVar13 + 200,local_100,local_104);
          iVar8 = *(int *)(lVar13 + 0x14c);
          *(undefined4 *)(lVar13 + 0x148) = uVar7;
        }
        if (iVar8 < 4) {
          FUN_71006c0a00(lVar16,"Received too short packet");
          *(undefined4 *)(lVar13 + 0xc) = 7;
        }
        else {
          puVar14 = *(ushort **)(lVar13 + 0x160);
          uVar5 = (uint)(*puVar14 >> 8) | (*puVar14 & 0xff00ff) << 8;
          sVar6 = (short)uVar5;
          *(uint *)(lVar13 + 0xc) = uVar5;
          if (sVar6 == 5) {
            puVar1 = puVar14 + 2;
            *(uint *)(lVar13 + 8) = (uint)(puVar14[1] >> 8) | (puVar14[1] & 0xff00ff) << 8;
            lVar9 = FUN_710080c980(puVar1,0,(long)(iVar8 + -4));
            if ((lVar9 != 0) && ((ulong)(lVar9 - (long)puVar1) < (ulong)(long)(iVar8 + -4))) {
              FUN_71006c08c0(lVar16,"TFTP error: %s\n",puVar1);
            }
          }
          else if (sVar6 < 6) {
            if (sVar6 == 3) {
              if ((iVar8 != 4) &&
                 (((uint)(puVar14[1] >> 8) | (puVar14[1] & 0xff00ff) << 8) ==
                  (uint)(ushort)(*(short *)(lVar13 + 0x40) + 1))) {
                iVar8 = FUN_71006c0c00(param_1,1,puVar14 + 2,(long)(iVar8 + -4));
                if (iVar8 != 0) {
                  FUN_71006ced10(lVar13,5);
                  return iVar8;
                }
                *(long *)(lVar16 + 0xe8) =
                     *(long *)(lVar16 + 0xe8) + (long)(*(int *)(lVar13 + 0x14c) + -4);
                FUN_71006b8e90(lVar16);
              }
            }
            else if (sVar6 != 4) goto LAB_71006cf1f4;
          }
          else if (sVar6 == 6) {
            puVar1 = (ushort *)((long)(puVar14 + 1) + (long)(iVar8 + -2));
            lVar16 = **(long **)(lVar13 + 0x10);
            *(undefined4 *)(lVar13 + 0x154) = 0x200;
            puVar14 = puVar14 + 1;
            while (puVar14 < puVar1) {
              uVar17 = (long)puVar1 - (long)puVar14;
              lVar9 = FUN_710080c980(puVar14,0,uVar17);
              uVar3 = lVar9 - (long)puVar14;
              if (lVar9 == 0) {
                uVar3 = uVar17;
              }
              uVar2 = uVar3 + 1;
              if (uVar17 <= uVar2) {
LAB_71006cf2f8:
                FUN_71006c0a00(lVar16,"Malformed ACK packet, rejecting");
                return 0x47;
              }
              lVar10 = FUN_710080c980((long)puVar14 + uVar2,0);
              lVar9 = uVar17 - uVar2;
              if (lVar10 != 0) {
                lVar9 = lVar10 - ((long)puVar14 + uVar2);
              }
              uVar3 = uVar3 + 2 + lVar9;
              if (uVar17 < uVar3) goto LAB_71006cf2f8;
              puVar4 = (ushort *)((long)puVar14 + uVar3);
              lVar9 = FUN_710081ce00(puVar14);
              lVar9 = (long)puVar14 + lVar9 + 1;
              FUN_71006c08c0(lVar16,"got option=(%s) value=(%s)\n",puVar14,lVar9);
              uVar11 = FUN_710081ce00(puVar14);
              iVar8 = thunk_FUN_71006ca3e0(puVar14,"blksize",uVar11);
              if (iVar8 == 0) {
                uVar11 = FUN_710081ce00(puVar14);
                iVar8 = thunk_FUN_71006ca3e0(puVar14,"tsize",uVar11);
                puVar14 = puVar4;
                if (iVar8 != 0) {
                  lVar10 = FUN_710081b720(lVar9,0,10);
                  FUN_71006c08c0(lVar16,"%s (%ld)\n","tsize parsed from OACK",lVar10);
                  if (((uint)*(undefined8 *)(lVar16 + 0xf60) >> 0x1d & 1) == 0) {
                    if (lVar10 == 0) {
                      FUN_71006c0a00(lVar16,"invalid tsize -:%s:- value in OACK packet",lVar9);
                      return 0x47;
                    }
                    FUN_71006b8fe0(lVar16,lVar10);
                  }
                }
              }
              else {
                lVar9 = FUN_710081b720(lVar9,0,10);
                if (lVar9 == 0) {
                  FUN_71006c0a00(lVar16,"invalid blocksize value in OACK packet");
                  return 0x47;
                }
                if (0xffb8 < lVar9) {
                  FUN_71006c0a00(lVar16,"%s (%d)","blksize is larger than max supported",0xffb8);
                  return 0x47;
                }
                if (lVar9 < 8) {
                  FUN_71006c0a00(lVar16,"%s (%d)","blksize is smaller than min supported",8);
                  return 0x47;
                }
                if (*(int *)(lVar13 + 0x158) < lVar9) {
                  FUN_71006c0a00(lVar16,"%s (%ld)","server requested blksize larger than allocated")
                  ;
                  return 0x47;
                }
                *(int *)(lVar13 + 0x154) = (int)lVar9;
                FUN_71006c08c0(lVar16,"%s (%d) %s (%d)\n","blksize parsed from OACK",lVar9,
                               "requested");
                puVar14 = puVar4;
              }
            }
          }
          else {
LAB_71006cf1f4:
            FUN_71006c0a00(lVar16,"%s","Internal error: Unexpected packet");
          }
          iVar8 = FUN_71006b9040(param_1);
          if (iVar8 != 0) {
            FUN_71006ced10(lVar13,5);
            return 0x2a;
          }
        }
        iVar8 = FUN_71006ced10(piVar18,piVar18[3]);
        if (iVar8 != 0) {
          return iVar8;
        }
        iVar8 = *piVar18;
        *param_2 = iVar8 == 3;
        if (iVar8 == 3) {
          FUN_71006ca160(lVar15,0xffffffff,0xffffffffffffffff,0,0xffffffff);
          return 0;
        }
      }
    }
    iVar8 = 0;
  }
  return iVar8;
}



// ===== FUN_71006cf3f0 @ 71006cf3f0 (size=112) =====

void FUN_71006cf3f0(undefined8 *param_1,byte *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  iVar1 = FUN_71006ced90();
  if ((iVar1 == 0 & (*param_2 ^ 1)) != 0) {
    iVar1 = FUN_71006b9040(param_1);
    if (iVar1 == 0) {
      uVar2 = *param_1;
      auVar3 = FUN_71006b7420(0x2a);
      FUN_71006c59d0(uVar2,auVar3._0_8_,auVar3._8_8_);
      return;
    }
  }
  return;
}



// ===== FUN_71006cf460 @ 71006cf460 (size=188) =====

undefined8 FUN_71006cf460(long param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  int *piVar2;
  
  *param_2 = 0;
  piVar2 = *(int **)(param_1 + 0x740);
  if (piVar2 == (int *)0x0) {
    uVar1 = FUN_71006ce470();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    piVar2 = *(int **)(param_1 + 0x740);
    if (piVar2 == (int *)0x0) {
      return 0x47;
    }
  }
  *param_2 = 0;
  uVar1 = FUN_71006ced10(piVar2,0);
  if (*piVar2 == 3) {
    if ((int)uVar1 == 0) goto LAB_71006cf4c0;
  }
  else if ((int)uVar1 == 0) {
    FUN_71006ced90(param_1,param_2);
LAB_71006cf4c0:
    if (piVar2[2] != -100) {
      uVar1 = FUN_71006ce700();
      return uVar1;
    }
    return 0;
  }
  return uVar1;
}



// ===== FUN_71006cf520 @ 71006cf520 (size=92) =====

void FUN_71006cf520(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    return;
  }
  do {
    (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(param_1 + 0x20));
    (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(param_1 + 0x18));
    lVar1 = *(long *)(param_1 + 0x28);
    (*(code *)PTR_FUN_7100af36a0)(param_1);
    param_1 = lVar1;
  } while (lVar1 != 0);
  return;
}



// ===== FUN_71006cf580 @ 71006cf580 (size=352) =====

long FUN_71006cf580(undefined8 *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  
  puVar8 = *(undefined4 **)param_1[3];
  if (puVar8 == (undefined4 *)0x0) {
    lVar6 = 0;
  }
  else {
    lVar7 = 8;
    lVar6 = 0;
    lVar5 = 0;
    do {
      lVar4 = (*(code *)PTR_FUN_7100af3698)(1,0x30);
      if (lVar4 == 0) {
LAB_71006cf670:
        FUN_71006cf520(lVar6);
        return 0;
      }
      lVar3 = (*(code *)PTR_FUN_7100af36b8)(*param_1);
      *(long *)(lVar4 + 0x18) = lVar3;
      if (lVar3 == 0) {
        (*(code *)PTR_FUN_7100af36a0)(lVar4);
        goto LAB_71006cf670;
      }
      lVar3 = (*(code *)PTR_FUN_7100af3698)(1,0x10);
      *(long *)(lVar4 + 0x20) = lVar3;
      if (lVar3 == 0) {
        (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(lVar4 + 0x18));
        (*(code *)PTR_FUN_7100af36a0)(lVar4);
        goto LAB_71006cf670;
      }
      if (lVar6 == 0) {
        lVar6 = lVar4;
      }
      if (lVar5 != 0) {
        *(long *)(lVar5 + 0x28) = lVar4;
      }
      iVar1 = *(int *)(param_1 + 2);
      *(undefined4 *)(lVar4 + 0x10) = 0x10;
      *(int *)(lVar4 + 4) = iVar1;
      *(undefined4 *)(lVar4 + 8) = 1;
      if (iVar1 == 2) {
        *(undefined4 *)(lVar3 + 4) = *puVar8;
        uVar2 = *(undefined4 *)(param_1 + 2);
        *(ushort *)(lVar3 + 2) = (ushort)(param_2 >> 8) & 0xff | (ushort)((param_2 & 0xff00ff) << 8)
        ;
        *(char *)(lVar3 + 1) = (char)uVar2;
      }
      puVar8 = *(undefined4 **)(param_1[3] + lVar7);
      lVar7 = lVar7 + 8;
      lVar5 = lVar4;
    } while (puVar8 != (undefined4 *)0x0);
  }
  return lVar6;
}



// ===== FUN_71006cf6e0 @ 71006cf6e0 (size=440) =====

ulong FUN_71006cf6e0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *in_x3;
  ulong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *local_8;
  
  *in_x3 = 0;
  uVar5 = FUN_710076a470();
  uVar9 = uVar5 & 0xffffffff;
  if ((int)uVar5 == 0) {
    if (local_8 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
      uVar9 = 8;
    }
    else {
      puVar11 = (undefined4 *)0x0;
      puVar10 = local_8;
      puVar12 = (undefined4 *)0x0;
      do {
        while (((puVar6 = puVar12, puVar10[1] != 2 || (*(long *)(puVar10 + 8) == 0)) ||
               ((uint)puVar10[4] < 0x10))) {
LAB_71006cf734:
          puVar10 = *(undefined4 **)(puVar10 + 10);
          puVar12 = puVar6;
          if (puVar10 == (undefined4 *)0x0) goto LAB_71006cf7e8;
        }
        puVar6 = (undefined4 *)(*(code *)PTR_FUN_7100af36a8)(0x30);
        if (puVar6 == (undefined4 *)0x0) {
LAB_71006cf83c:
          if (local_8 != (undefined4 *)0x0) {
            FUN_710076a2b0();
          }
          uVar9 = 6;
          FUN_71006cf520(puVar11);
          puVar11 = (undefined4 *)0x0;
          goto LAB_71006cf804;
        }
        uVar1 = puVar10[1];
        uVar3 = puVar10[2];
        *puVar6 = *puVar10;
        uVar4 = puVar10[3];
        puVar6[1] = uVar1;
        puVar6[2] = uVar3;
        *(undefined8 *)(puVar6 + 6) = 0;
        *(undefined8 *)(puVar6 + 8) = 0;
        puVar6[3] = uVar4;
        puVar6[4] = 0x10;
        *(undefined8 *)(puVar6 + 10) = 0;
        puVar7 = (undefined8 *)(*(code *)PTR_FUN_7100af36a8)(0x10);
        *(undefined8 **)(puVar6 + 8) = puVar7;
        if (puVar7 == (undefined8 *)0x0) {
          (*(code *)PTR_FUN_7100af36a0)(puVar6);
          goto LAB_71006cf83c;
        }
        uVar2 = (*(undefined8 **)(puVar10 + 8))[1];
        *puVar7 = **(undefined8 **)(puVar10 + 8);
        puVar7[1] = uVar2;
        if (*(long *)(puVar10 + 6) != 0) {
          lVar8 = (*(code *)PTR_FUN_7100af36b8)();
          *(long *)(puVar6 + 6) = lVar8;
          if (lVar8 == 0) {
            (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(puVar6 + 8));
            (*(code *)PTR_FUN_7100af36a0)(puVar6);
            goto LAB_71006cf83c;
          }
        }
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = puVar6;
        }
        if (puVar12 == (undefined4 *)0x0) goto LAB_71006cf734;
        *(undefined4 **)(puVar12 + 10) = puVar6;
        puVar10 = *(undefined4 **)(puVar10 + 10);
        puVar12 = puVar6;
      } while (puVar10 != (undefined4 *)0x0);
LAB_71006cf7e8:
      uVar9 = (ulong)(puVar11 == (undefined4 *)0x0) << 3;
      if (local_8 != (undefined4 *)0x0) {
        FUN_710076a2b0();
      }
    }
LAB_71006cf804:
    *in_x3 = puVar11;
  }
  return uVar9;
}



// ===== FUN_71006cf8a0 @ 71006cf8a0 (size=260) =====

undefined8 FUN_71006cf8a0(int param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)(*(code *)PTR_FUN_7100af36a8)(0x38);
  if (plVar2 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    lVar3 = (*(code *)PTR_FUN_7100af36b8)(param_3);
    if (lVar3 == 0) {
      (*(code *)PTR_FUN_7100af36a0)(plVar2);
      uVar4 = 0;
    }
    else {
      if (param_1 == 2) {
        uVar1 = *param_2;
        *plVar2 = lVar3;
        plVar2[1] = 0;
        plVar2[2] = 0x400000002;
        plVar2[3] = (long)(plVar2 + 5);
        *(undefined4 *)(plVar2 + 4) = uVar1;
        plVar2[5] = (long)(plVar2 + 4);
        plVar2[6] = 0;
        uVar4 = FUN_71006cf580(plVar2,param_4);
      }
      else {
        uVar4 = 0;
      }
      (*(code *)PTR_FUN_7100af36a0)(lVar3);
      (*(code *)PTR_FUN_7100af36a0)(plVar2);
    }
  }
  return uVar4;
}



// ===== FUN_71006cf9b0 @ 71006cf9b0 (size=108) =====

undefined8 FUN_71006cf9b0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_8 [8];
  
  iVar1 = FUN_710076c8d0(2,param_1,auStack_8);
  if (iVar1 < 1) {
    return 0;
  }
  uVar2 = FUN_71006cf8a0(2,auStack_8,param_1,param_2);
  return uVar2;
}



// ===== FUN_71006cfa20 @ 71006cfa20 (size=64) =====

char * FUN_71006cfa20(char *param_1,char param_2,long param_3)

{
  char *pcVar1;
  
  if ((param_3 != 0) && (pcVar1 = param_1 + (param_3 - 1U), !CARRY8((ulong)param_1,param_3 - 1U))) {
    do {
      if (*pcVar1 == param_2) {
        return pcVar1;
      }
      pcVar1 = pcVar1 + -1;
    } while (param_1 <= pcVar1);
  }
  return (char *)0x0;
}



// ===== FUN_71006cfa60 @ 71006cfa60 (size=340) =====

undefined4 FUN_71006cfa60(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  *(int *)(param_1 + 0x7dc) = (*(int *)(param_1 + 0x7dc) + 1) % 1000;
  iVar1 = FUN_71006a8830(*(long *)(param_1 + 0x2d0) % 0x1a);
  FUN_710069fb80(param_1 + 0x7e0,5,"%c%03d",iVar1 + 0x41,*(undefined4 *)(param_1 + 0x7dc));
  lVar3 = FUN_71006a1060("%s %s",param_1 + 0x7e0,param_2);
  if (lVar3 != 0) {
    uVar2 = FUN_71006d5390(param_1 + 0x740,lVar3);
    (*(code *)PTR_FUN_7100af36a0)(lVar3);
    return uVar2;
  }
  return 0x1b;
}



// ===== FUN_71006cfbd0 @ 71006cfbd0 (size=116) =====

void FUN_71006cfbd0(long param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((((*(uint *)(*(long *)(param_1 + 0x648) + 0x84) & 1) == 0) ||
      (*(char *)(param_1 + 0x7b4) != '\0')) ||
     ((iVar1 = FUN_71006b1910(param_1,0,param_1 + 0x7b4), iVar1 == 0 &&
      (*(char *)(param_1 + 0x7b4) != '\0')))) {
    FUN_71006d5170(param_1 + 0x740,0,0);
    *(bool *)param_2 = *(int *)(param_1 + 0x7b0) == 0;
  }
  return;
}



// ===== FUN_71006cfc50 @ 71006cfc50 (size=180) =====

void FUN_71006cfc50(long param_1,long *param_2)

{
  char *pcVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar4 = FUN_710081ce00();
  lVar6 = param_1 + uVar4;
  if (2 < uVar4) {
    lVar5 = uVar4 - 2;
    lVar6 = param_1 + 2;
    if (*(char *)(param_1 + 2) == ' ' || *(char *)(param_1 + 2) == '\t') {
      do {
        pcVar1 = (char *)(lVar6 + 1);
        lVar6 = lVar6 + 1;
        lVar5 = (param_1 - lVar6) + uVar4;
      } while (*pcVar1 == ' ' || *pcVar1 == '\t');
    }
    while (lVar3 = lVar5, lVar3 != 0) {
      bVar2 = *(byte *)(lVar6 + -1 + lVar3);
      if ((0x20 < bVar2) || (lVar5 = lVar3 + -1, (-0x100002601 >> ((ulong)bVar2 & 0x3f) & 1U) != 0))
      {
        *(undefined1 *)(lVar6 + lVar3) = 0;
        *param_2 = lVar6;
        return;
      }
    }
  }
  *param_2 = lVar6;
  return;
}



// ===== FUN_71006cfd10 @ 71006cfd10 (size=408) =====

char * FUN_71006cfd10(char *param_1,char param_2)

{
  bool bVar1;
  long lVar2;
  char *pcVar3;
  char cVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  char local_8 [8];
  
  builtin_strncpy(local_8,"(){ %*]",8);
  if (param_1 == (char *)0x0) {
    return (char *)0x0;
  }
  cVar4 = *param_1;
  if (cVar4 != '\0') {
    lVar7 = 0;
    lVar8 = 0;
    bVar1 = false;
    pcVar5 = param_1;
    do {
      while (cVar4 == '\\') {
        pcVar5 = pcVar5 + 1;
        cVar4 = *pcVar5;
        lVar7 = lVar7 + 1;
        if (cVar4 == '\0') goto LAB_71006cfd84;
      }
      if (cVar4 == '\"') {
        lVar8 = lVar8 + 1;
      }
      else if ((param_2 == '\0') && (pcVar3 = local_8, !bVar1)) {
        if (cVar4 != '(') {
          do {
            pcVar3 = pcVar3 + 1;
            if (*pcVar3 == '\0') goto LAB_71006cfd68;
          } while (cVar4 != *pcVar3);
        }
        bVar1 = true;
      }
LAB_71006cfd68:
      pcVar5 = pcVar5 + 1;
      cVar4 = *pcVar5;
    } while (cVar4 != '\0');
LAB_71006cfd84:
    if ((lVar7 != 0 || lVar8 != 0) || bVar1) {
      lVar2 = FUN_710081ce00(param_1);
      lVar2 = lVar7 + lVar8 + lVar2;
      if (param_2 == '\0') {
        pcVar3 = (char *)(*(code *)PTR_FUN_7100af36a8)(lVar2 + 3);
        if (pcVar3 != (char *)0x0) {
          *pcVar3 = '\"';
          pcVar3[lVar2 + 1] = '\"';
          pcVar5 = pcVar3 + 1;
          lVar2 = lVar2 + 2;
LAB_71006cfddc:
          cVar4 = *param_1;
          while (cVar4 != '\0') {
            pcVar6 = pcVar5;
            if (cVar4 == '\\' || cVar4 == '\"') {
              pcVar6 = pcVar5 + 1;
              *pcVar5 = '\\';
            }
            pcVar5 = pcVar6 + 1;
            *pcVar6 = *param_1;
            param_1 = param_1 + 1;
            cVar4 = *param_1;
          }
          pcVar3[lVar2] = '\0';
          return pcVar3;
        }
      }
      else {
        pcVar3 = (char *)(*(code *)PTR_FUN_7100af36a8)(lVar2 + 1);
        pcVar5 = pcVar3;
        if (pcVar3 != (char *)0x0) goto LAB_71006cfddc;
      }
      return (char *)0x0;
    }
  }
  pcVar5 = (char *)(*(code *)PTR_FUN_7100af36b8)(param_1);
  return pcVar5;
}



// ===== FUN_71006cfeb0 @ 71006cfeb0 (size=224) =====

int FUN_71006cfeb0(long *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(*param_1 + 0x1d0);
  if (*(long *)(lVar3 + 0x40) == 0) {
    if (*(long *)(lVar3 + 8) == 0) {
      lVar3 = (*(code *)PTR_FUN_7100af36b8)(&DAT_7100853d20);
    }
    else {
      lVar3 = FUN_71006cfd10(*(long *)(lVar3 + 8),1);
    }
    if (lVar3 == 0) {
      return 0x1b;
    }
    iVar2 = FUN_71006cfa60(param_1,"LIST \"%s\" *",lVar3);
    (*(code *)PTR_FUN_7100af36a0)(lVar3);
  }
  else {
    puVar1 = &DAT_7100853d20;
    if (*(undefined1 **)(lVar3 + 0x48) != (undefined1 *)0x0) {
      puVar1 = *(undefined1 **)(lVar3 + 0x48);
    }
    iVar2 = FUN_71006cfa60(param_1,"%s%s",*(long *)(lVar3 + 0x40),puVar1);
  }
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0xf6) = 7;
  }
  return iVar2;
}



// ===== FUN_71006cffb0 @ 71006cffb0 (size=408) =====

int FUN_71006cffb0(long *param_1,int param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined4 *puVar4;
  
  lVar3 = *param_1;
  puVar4 = *(undefined4 **)(lVar3 + 0x1d0);
  if (puVar4 == (undefined4 *)0x0) {
    return 0;
  }
  if (param_2 != 0) {
    FUN_71006a2e80(param_1,1);
    goto LAB_71006cffe0;
  }
  if (((*(ulong *)(lVar3 + 0xf60) >> 0x25 & 1) != 0) || (*(long *)(puVar4 + 0x10) != 0))
  goto LAB_71006cffe0;
  uVar2 = *(ulong *)(lVar3 + 0xf60) & 0x20000000;
  if ((*(long *)(puVar4 + 6) == 0) && (*(long *)(puVar4 + 8) == 0)) {
    if ((uVar2 == 0) && (param_2 = *(int *)(lVar3 + 0x820), param_2 == 0)) goto LAB_71006cffe0;
LAB_71006d0108:
    param_2 = FUN_71006d5540(param_1 + 0xe8,"%s",&DAT_7100853d20);
    if (param_2 != 0) goto LAB_71006cffe0;
    uVar1 = 0xc;
  }
  else {
    if ((uVar2 != 0) || (*(int *)(lVar3 + 0x820) != 0)) goto LAB_71006d0108;
    uVar1 = 10;
  }
  *(undefined4 *)(param_1 + 0xf6) = uVar1;
  do {
    param_2 = FUN_71006d5170(param_1 + 0xe8,1,0);
  } while ((int)param_1[0xf6] != 0 && param_2 == 0);
LAB_71006cffe0:
  (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(puVar4 + 2));
  *(undefined8 *)(puVar4 + 2) = 0;
  (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(puVar4 + 4));
  *(undefined8 *)(puVar4 + 4) = 0;
  (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(puVar4 + 6));
  *(undefined8 *)(puVar4 + 6) = 0;
  (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(puVar4 + 8));
  *(undefined8 *)(puVar4 + 8) = 0;
  (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(puVar4 + 10));
  *(undefined8 *)(puVar4 + 10) = 0;
  (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(puVar4 + 0xc));
  *(undefined8 *)(puVar4 + 0xc) = 0;
  (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(puVar4 + 0xe));
  *(undefined8 *)(puVar4 + 0xe) = 0;
  (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(puVar4 + 0x10));
  *(undefined8 *)(puVar4 + 0x10) = 0;
  (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(puVar4 + 0x12));
  *puVar4 = 0;
  *(undefined8 *)(puVar4 + 0x12) = 0;
  return param_2;
}



// ===== FUN_71006d0150 @ 71006d0150 (size=228) =====

undefined8 FUN_71006d0150(long *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(*param_1 + 0x1d0);
  lVar5 = *(long *)(lVar4 + 0x18);
  if (lVar5 == 0) {
    lVar5 = *(long *)(lVar4 + 0x20);
    if (lVar5 == 0) {
      FUN_71006c0a00(*param_1,"Cannot FETCH without a UID.");
      return 3;
    }
    puVar2 = *(undefined1 **)(lVar4 + 0x28);
    if (*(long *)(lVar4 + 0x30) == 0) {
      puVar1 = &DAT_7100853d20;
      if (puVar2 != (undefined1 *)0x0) {
        puVar1 = puVar2;
      }
      uVar3 = FUN_71006cfa60(param_1,"FETCH %s BODY[%s]",lVar5,puVar1);
    }
    else {
      puVar1 = &DAT_7100853d20;
      if (puVar2 != (undefined1 *)0x0) {
        puVar1 = puVar2;
      }
      uVar3 = FUN_71006cfa60(param_1,"FETCH %s BODY[%s]<%s>",lVar5,puVar1);
    }
  }
  else {
    puVar2 = *(undefined1 **)(lVar4 + 0x28);
    if (*(long *)(lVar4 + 0x30) == 0) {
      puVar1 = &DAT_7100853d20;
      if (puVar2 != (undefined1 *)0x0) {
        puVar1 = puVar2;
      }
      uVar3 = FUN_71006cfa60(param_1,"UID FETCH %s BODY[%s]",lVar5,puVar1);
    }
    else {
      puVar1 = &DAT_7100853d20;
      if (puVar2 != (undefined1 *)0x0) {
        puVar1 = puVar2;
      }
      uVar3 = FUN_71006cfa60(param_1,"UID FETCH %s BODY[%s]<%s>",lVar5,puVar1);
    }
  }
  if ((int)uVar3 == 0) {
    *(undefined4 *)(param_1 + 0xf6) = 9;
  }
  return uVar3;
}



// ===== FUN_71006d0240 @ 71006d0240 (size=228) =====

undefined8 FUN_71006d0240(long param_1,long param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  
  pcVar1 = (char *)(param_1 + param_2);
  pcVar5 = (char *)(param_1 + 2);
  lVar4 = FUN_710081ce00(param_3);
  if ((pcVar5 < pcVar1) && (iVar3 = FUN_71006af4a0(*(undefined1 *)(param_1 + 2)), iVar3 != 0)) {
    for (pcVar2 = (char *)(param_1 + 3); pcVar1 != pcVar2; pcVar2 = pcVar2 + 1) {
      iVar3 = FUN_71006af4a0(*pcVar2);
      if (iVar3 == 0) {
        if (*pcVar2 != ' ') {
          return 0;
        }
        pcVar5 = pcVar5 + 2;
        goto LAB_71006d0278;
      }
      pcVar5 = pcVar2;
    }
  }
  else {
LAB_71006d0278:
    if ((pcVar5 + lVar4 <= pcVar1) && (iVar3 = FUN_71006ca3e0(pcVar5,param_3,lVar4), iVar3 != 0)) {
      if (pcVar5[lVar4] == ' ') {
        return 1;
      }
      if (pcVar1 == pcVar5 + lVar4 + 2) {
        return 1;
      }
    }
  }
  return 0;
}



// ===== FUN_71006d0330 @ 71006d0330 (size=872) =====

undefined8 FUN_71006d0330(long *param_1,short *param_2,ulong param_3,undefined4 *param_4)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *param_1;
  lVar5 = FUN_710081ce00(param_1 + 0xfc);
  uVar1 = lVar5 + 1;
  lVar7 = *(long *)(lVar8 + 0x1d0);
  if (((uVar1 <= param_3) && (iVar4 = FUN_710081ec40(param_1 + 0xfc,param_2,lVar5), iVar4 == 0)) &&
     (*(char *)((long)param_2 + lVar5) == ' ')) {
    uVar6 = (param_3 - 1) - lVar5;
    if (1 < uVar6) {
      if (*(short *)((long)param_2 + uVar1) == 0x4b4f) {
        *param_4 = 1;
        return 1;
      }
      if (((6 < uVar6) && (*(int *)((long)param_2 + uVar1) == 0x41455250)) &&
         ((*(short *)((long)param_2 + lVar5 + 5) == 0x5455 &&
          (*(char *)((long)param_2 + lVar5 + 7) == 'H')))) {
        *param_4 = 3;
        return 1;
      }
    }
    *param_4 = 2;
    return 1;
  }
  if ((1 < param_3) && (*param_2 == 0x202a)) {
    uVar2 = *(uint *)(param_1 + 0xf6);
    if (uVar2 != 8) {
      if (uVar2 < 9) {
        if (uVar2 != 2) {
          if (uVar2 != 7) {
            return 0;
          }
          if (*(long *)(lVar7 + 0x40) == 0) {
            cVar3 = FUN_71006d0240(param_2,param_3,&DAT_710083be28);
            if (cVar3 == '\0') {
              return 0;
            }
            if (*(long *)(lVar7 + 0x40) == 0) goto LAB_71006d0590;
          }
          cVar3 = FUN_71006d0240(param_2,param_3);
          if ((((cVar3 == '\0') &&
               ((((iVar4 = FUN_71006ca300(*(undefined8 *)(lVar7 + 0x40),"STORE"), iVar4 == 0 ||
                  (cVar3 = FUN_71006d0240(param_2,param_3,"FETCH"), cVar3 == '\0')) &&
                 (iVar4 = FUN_71006ca300(*(undefined8 *)(lVar7 + 0x40),"SELECT"), iVar4 == 0)) &&
                ((iVar4 = FUN_71006ca300(*(undefined8 *)(lVar7 + 0x40),"EXAMINE"), iVar4 == 0 &&
                 (iVar4 = FUN_71006ca300(*(undefined8 *)(lVar7 + 0x40),"SEARCH"), iVar4 == 0))))))
              && (iVar4 = FUN_71006ca300(*(undefined8 *)(lVar7 + 0x40),"EXPUNGE"), iVar4 == 0)) &&
             (((iVar4 = FUN_71006ca300(*(undefined8 *)(lVar7 + 0x40),&DAT_7100849738), iVar4 == 0 &&
               (iVar4 = FUN_71006ca300(*(undefined8 *)(lVar7 + 0x40),&DAT_7100849740), iVar4 == 0))
              && (iVar4 = FUN_71006ca300(*(undefined8 *)(lVar7 + 0x40),&DAT_7100849748), iVar4 == 0)
              ))) {
            return 0;
          }
          goto LAB_71006d0590;
        }
        cVar3 = FUN_71006d0240(param_2,param_3,"CAPABILITY");
      }
      else if (uVar2 == 9) {
        cVar3 = FUN_71006d0240(param_2,param_3,"FETCH");
      }
      else {
        if (uVar2 != 0xd) {
          return 0;
        }
        cVar3 = FUN_71006d0240(param_2,param_3,"SEARCH");
      }
      if (cVar3 == '\0') {
        return 0;
      }
    }
LAB_71006d0590:
    *param_4 = 0x2a;
    return 1;
  }
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x40) == 0)) {
    if (param_3 == 3) {
      if ((char)*param_2 == '+') goto LAB_71006d0434;
    }
    else if (param_3 < 2) {
      return 0;
    }
    if (*param_2 == 0x202b) {
LAB_71006d0434:
      if (((int)param_1[0xf6] != 5) && ((int)param_1[0xf6] != 0xb)) {
        FUN_71006c0a00(lVar8,"Unexpected continuation response");
        *param_4 = 0xffffffff;
        return 1;
      }
      *param_4 = 0x2b;
      return 1;
    }
  }
  return 0;
}



// ===== FUN_71006d06d0 @ 71006d06d0 (size=224) =====

uint FUN_71006d06d0(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  if ((*(uint *)(param_1 + 0x624) >> 8 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x7b0) = 0;
    return *(uint *)(param_1 + 0x624) & 0x100;
  }
  puVar4 = (undefined1 *)FUN_71006cfd10(*(undefined8 *)(param_1 + 0x480),0);
  puVar5 = (undefined1 *)FUN_71006cfd10(*(undefined8 *)(param_1 + 0x488),0);
  puVar1 = &DAT_7100853d20;
  if (puVar4 != (undefined1 *)0x0) {
    puVar1 = puVar4;
  }
  puVar2 = &DAT_7100853d20;
  if (puVar5 != (undefined1 *)0x0) {
    puVar2 = puVar5;
  }
  uVar3 = FUN_71006cfa60(param_1,"LOGIN %s %s",puVar1,puVar2);
  (*(code *)PTR_FUN_7100af36a0)(puVar4);
  (*(code *)PTR_FUN_7100af36a0)(puVar5);
  if (uVar3 == 0) {
    *(undefined4 *)(param_1 + 0x7b0) = 6;
    return 0;
  }
  return uVar3;
}



// ===== FUN_71006d07b0 @ 71006d07b0 (size=212) =====

undefined8 FUN_71006d07b0(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  int local_4;
  
  if (*(char *)((long)param_1 + 0x7b5) == '\0') {
    cVar1 = FUN_71006d6e30(param_1 + 0xf7,param_1);
    if (cVar1 != '\0') {
      uVar2 = FUN_71006d6e50(param_1 + 0xf7,param_1,*(undefined1 *)((long)param_1 + 0x7e7),&local_4)
      ;
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (local_4 != 1) {
        if ((*(char *)((long)param_1 + 0x7e6) == '\0') && ((*(uint *)(param_1 + 0xfb) & 1) != 0)) {
          uVar2 = FUN_71006d06d0(param_1);
          return uVar2;
        }
        FUN_71006c08c0(*param_1,"No known authentication mechanisms supported!\n");
        return 0x43;
      }
      *(undefined4 *)(param_1 + 0xf6) = 5;
      return uVar2;
    }
  }
  *(undefined4 *)(param_1 + 0xf6) = 0;
  return 0;
}



// ===== FUN_71006d0890 @ 71006d0890 (size=512) =====

ulong FUN_71006d0890(long param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  
  *param_2 = 0;
  FUN_71006a2e80(param_1,0);
  *(undefined8 *)(param_1 + 0x790) = 120000;
  *(long *)(param_1 + 0x798) = param_1;
  *(code **)(param_1 + 0x7a0) = FUN_71006d1520;
  *(code **)(param_1 + 0x7a8) = FUN_71006d0330;
  *(undefined4 *)(param_1 + 0x7d8) = 0xffffffff;
  FUN_71006d6e10(param_1 + 0x7b8,&PTR_DAT_7100ae3ce8);
  FUN_71006d5350(param_1 + 0x740);
  pcVar5 = *(char **)(param_1 + 0x490);
  *(undefined1 *)(param_1 + 2000) = 1;
  if (pcVar5 != (char *)0x0) {
    cVar1 = *pcVar5;
    while (cVar1 != '\0') {
      pcVar8 = pcVar5 + 1;
      pcVar7 = pcVar5;
      if (cVar1 == '=') {
LAB_71006d0968:
        do {
          pcVar7 = pcVar7 + 1;
        } while (*pcVar7 != ';' && *pcVar7 != '\0');
      }
      else {
        do {
          pcVar8 = pcVar7;
          pcVar7 = pcVar8 + 1;
          cVar1 = *pcVar7;
        } while (cVar1 != '=' && cVar1 != '\0');
        pcVar8 = pcVar8 + 2;
        if (cVar1 != ';' && cVar1 != '\0') goto LAB_71006d0968;
      }
      iVar2 = FUN_71006ca3e0(pcVar5,"AUTH=",5);
      if (iVar2 == 0) {
        uVar4 = 3;
LAB_71006d098c:
        if (*(int *)(param_1 + 0x7c8) != 0) {
          uVar3 = 0xffffffff;
          if (*(int *)(param_1 + 0x7c8) != -0x21) {
            *(undefined4 *)(param_1 + 0x7d8) = 2;
            return (ulong)uVar4;
          }
          goto LAB_71006d09a8;
        }
        *(undefined4 *)(param_1 + 0x7d8) = 0;
        goto LAB_71006d0a38;
      }
      uVar4 = FUN_71006d6d40(param_1 + 0x7b8,pcVar8,(long)pcVar7 - (long)pcVar8);
      pcVar5 = pcVar7;
      if (*pcVar7 == ';') {
        pcVar5 = pcVar7 + 1;
      }
      if (uVar4 != 0) goto LAB_71006d098c;
      cVar1 = *pcVar5;
    }
  }
  if (*(int *)(param_1 + 0x7c8) == 0) {
    *(undefined4 *)(param_1 + 0x7d8) = 0;
  }
  else if (*(int *)(param_1 + 0x7c8) == -0x21) {
    *(undefined4 *)(param_1 + 0x7d8) = 0xffffffff;
  }
  else {
    uVar4 = 0;
    uVar3 = 2;
LAB_71006d09a8:
    *(undefined4 *)(param_1 + 0x7d8) = uVar3;
    if (uVar4 != 0) {
LAB_71006d0a38:
      return (ulong)uVar4;
    }
  }
  *(undefined4 *)(param_1 + 0x7b0) = 1;
  *(undefined2 *)(param_1 + 0x7e0) = 0x2a;
  uVar6 = FUN_71006cfbd0(param_1,param_2);
  return uVar6;
}



// ===== FUN_71006d0a90 @ 71006d0a90 (size=96) =====

undefined8 FUN_71006d0a90(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = (*(code *)PTR_FUN_7100af3698)(0x50,1);
  *(long *)(lVar2 + 0x1d0) = lVar1;
  if (lVar1 != 0) {
    *(byte *)((long)param_1 + 0x8c4) = *(byte *)((long)param_1 + 0x8c4) & 0xfe;
    return 0;
  }
  return 0x1b;
}



// ===== FUN_71006d0af0 @ 71006d0af0 (size=144) =====

void FUN_71006d0af0(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_71006b1910(param_1,0,param_1 + 0x7b4);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x7b0) != 4) {
      *(undefined4 *)(param_1 + 0x7b0) = 4;
    }
    if (*(char *)(param_1 + 0x7b4) != '\0') {
      *(undefined ***)(param_1 + 0x648) = &PTR_s_IMAPS_7100ae3c60;
      *(byte *)(param_1 + 0x8c4) = *(byte *)(param_1 + 0x8c4) | 1;
      *(undefined4 *)(param_1 + 0x7c4) = 0;
      *(undefined4 *)(param_1 + 0x7cc) = 0;
      *(undefined1 *)(param_1 + 0x7e5) = 0;
      iVar1 = FUN_71006cfa60(param_1,"CAPABILITY");
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x7b0) = 2;
      }
    }
  }
  return;
}



// ===== FUN_71006d0b80 @ 71006d0b80 (size=180) =====

undefined8 FUN_71006d0b80(long param_1,char param_2)

{
  int iVar1;
  
  if ((((param_2 == '\0') && (*(long *)(param_1 + 0x798) != 0)) &&
      ((*(uint *)(*(long *)(param_1 + 0x798) + 0x624) >> 0xd & 1) != 0)) &&
     (iVar1 = FUN_71006cfa60(param_1,"LOGOUT"), iVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x7b0) = 0xe;
    do {
      iVar1 = FUN_71006d5170(param_1 + 0x740,1);
    } while (*(int *)(param_1 + 0x7b0) != 0 && iVar1 == 0);
  }
  FUN_71006d59b0(param_1 + 0x740);
  FUN_71006d6c30(param_1,*(undefined4 *)(param_1 + 0x7cc));
  (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(param_1 + 0x7e8));
  *(undefined8 *)(param_1 + 0x7e8) = 0;
  (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(param_1 + 0x7f0));
  *(undefined8 *)(param_1 + 0x7f0) = 0;
  return 0;
}



// ===== FUN_71006d0c40 @ 71006d0c40 (size=2268) =====

int FUN_71006d0c40(long *param_1,char *param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 local_18;
  long local_10;
  long lStack_8;
  
  lVar9 = *param_1;
  *param_2 = '\0';
  lVar10 = *(long *)(lVar9 + 0x1d0);
  pbVar12 = (byte *)(*(long *)(lVar9 + 0x1608) + 1);
  bVar2 = *pbVar12;
  pbVar11 = pbVar12;
  if (bVar2 < 0x3e) goto LAB_71006d0ccc;
  while (((byte)(bVar2 - 0x40) < 0x3f &&
         ((0x47fffffe87ffffffU >> ((ulong)(uint)(byte)(bVar2 - 0x40) & 0x3f) & 1) != 0))) {
    while( true ) {
      pbVar11 = pbVar11 + 1;
      bVar2 = *pbVar11;
      if (0x3d < bVar2) break;
LAB_71006d0ccc:
      if ((bVar2 < 0x21) || ((0x27fffff200000000U >> ((ulong)bVar2 & 0x3f) & 1) == 0))
      goto LAB_71006d0cd4;
    }
  }
LAB_71006d0cd4:
  if (pbVar12 == pbVar11) {
    *(undefined8 *)(lVar10 + 8) = 0;
    bVar2 = *pbVar11;
    if (bVar2 == 0x3b) goto LAB_71006d0d24;
  }
  else {
    pbVar7 = pbVar11;
    if (pbVar12 < pbVar11) {
      pbVar7 = pbVar11 + -(ulong)(pbVar11[-1] == 0x2f);
    }
    iVar3 = FUN_710069f7f0(lVar9,pbVar12,(long)pbVar7 - (long)pbVar12,lVar10 + 8,0,1);
    if (iVar3 != 0) {
      return iVar3;
    }
    if (*pbVar11 == 0x3b) {
LAB_71006d0d24:
      do {
        bVar2 = pbVar11[1];
        pbVar11 = pbVar11 + 1;
        pbVar12 = pbVar11;
        if (bVar2 != 0x3d && bVar2 != 0) {
          do {
            pbVar12 = pbVar12 + 1;
            bVar2 = *pbVar12;
          } while (bVar2 != 0x3d && bVar2 != 0);
        }
        if (bVar2 == 0) {
          return 3;
        }
        iVar3 = FUN_710069f7f0(lVar9,pbVar11,(long)pbVar12 - (long)pbVar11,&local_18,0,1);
        if (iVar3 != 0) {
          return iVar3;
        }
        pbVar12 = pbVar12 + 1;
        bVar2 = *pbVar12;
        pbVar11 = pbVar12;
        if (bVar2 < 0x3e) goto LAB_71006d0dd0;
        while (((byte)(bVar2 - 0x40) < 0x3f &&
               ((0x47fffffe87ffffffU >> ((ulong)(uint)(byte)(bVar2 - 0x40) & 0x3f) & 1) != 0))) {
          while( true ) {
            bVar2 = pbVar11[1];
            pbVar11 = pbVar11 + 1;
            if (0x3d < bVar2) break;
LAB_71006d0dd0:
            if ((bVar2 < 0x21) || ((0x27fffff200000000U >> ((ulong)bVar2 & 0x3f) & 1) == 0))
            goto LAB_71006d0de0;
          }
        }
LAB_71006d0de0:
        iVar3 = FUN_710069f7f0(lVar9,pbVar12,(long)pbVar11 - (long)pbVar12,&local_10,&lStack_8,1);
        if (iVar3 != 0) {
          (*(code *)PTR_FUN_7100af36a0)(local_18);
          return iVar3;
        }
        iVar3 = FUN_71006ca300(local_18,"UIDVALIDITY");
        if ((iVar3 == 0) || (*(long *)(lVar10 + 0x10) != 0)) {
          iVar3 = FUN_71006ca300(local_18,&DAT_7100849740);
          if ((iVar3 == 0) || (*(long *)(lVar10 + 0x18) != 0)) {
            iVar3 = FUN_71006ca300(local_18,"MAILINDEX");
            if ((iVar3 == 0) || (*(long *)(lVar10 + 0x20) != 0)) {
              iVar3 = FUN_71006ca300(local_18,"SECTION");
              if ((iVar3 == 0) || (*(long *)(lVar10 + 0x28) != 0)) {
                iVar3 = FUN_71006ca300(local_18,"PARTIAL");
                if ((iVar3 == 0) || (*(long *)(lVar10 + 0x30) != 0)) {
                  (*(code *)PTR_FUN_7100af36a0)(local_18);
                  (*(code *)PTR_FUN_7100af36a0)(local_10);
                  return 3;
                }
                if ((lStack_8 != 0) && (*(char *)(local_10 + lStack_8 + -1) == '/')) {
                  *(undefined1 *)(local_10 + lStack_8 + -1) = 0;
                }
                *(long *)(lVar10 + 0x30) = local_10;
              }
              else if ((lStack_8 == 0) || (*(char *)(local_10 + lStack_8 + -1) != '/')) {
                *(long *)(lVar10 + 0x28) = local_10;
              }
              else {
                *(undefined1 *)(local_10 + lStack_8 + -1) = 0;
                *(long *)(lVar10 + 0x28) = local_10;
              }
            }
            else if ((lStack_8 == 0) || (*(char *)(local_10 + lStack_8 + -1) != '/')) {
              *(long *)(lVar10 + 0x20) = local_10;
            }
            else {
              *(undefined1 *)(local_10 + lStack_8 + -1) = 0;
              *(long *)(lVar10 + 0x20) = local_10;
            }
          }
          else if ((lStack_8 == 0) || (*(char *)(local_10 + lStack_8 + -1) != '/')) {
            *(long *)(lVar10 + 0x18) = local_10;
          }
          else {
            *(undefined1 *)(local_10 + lStack_8 + -1) = 0;
            *(long *)(lVar10 + 0x18) = local_10;
          }
        }
        else if ((lStack_8 == 0) || (*(char *)(local_10 + lStack_8 + -1) != '/')) {
          *(long *)(lVar10 + 0x10) = local_10;
        }
        else {
          *(undefined1 *)(local_10 + lStack_8 + -1) = 0;
          *(long *)(lVar10 + 0x10) = local_10;
        }
        local_10 = 0;
        (*(code *)PTR_FUN_7100af36a0)(local_18);
        (*(code *)PTR_FUN_7100af36a0)(local_10);
      } while (*pbVar11 == 0x3b);
    }
    if (((*(long *)(lVar10 + 8) != 0) && (*(long *)(lVar10 + 0x18) == 0)) &&
       (*(long *)(lVar10 + 0x20) == 0)) {
      FUN_71006dc540(*(undefined8 *)(lVar9 + 0x15d0),8,lVar10 + 0x38,0x40);
    }
    bVar2 = *pbVar11;
  }
  if (bVar2 != 0) {
    return 3;
  }
  lVar9 = *param_1;
  lVar10 = *(long *)(lVar9 + 0x1d0);
  if (*(long *)(lVar9 + 0xc50) != 0) {
    iVar3 = FUN_710069f7f0(lVar9,*(long *)(lVar9 + 0xc50),0,lVar10 + 0x40,0,1);
    if (iVar3 != 0) {
      return iVar3;
    }
    pbVar12 = *(byte **)(lVar10 + 0x40);
    bVar2 = *pbVar12;
    while ((bVar2 & 0xdf) != 0) {
      pbVar12 = pbVar12 + 1;
      bVar2 = *pbVar12;
    }
    if (bVar2 != 0) {
      uVar4 = (*(code *)PTR_FUN_7100af36b8)(pbVar12);
      *(undefined8 *)(lVar10 + 0x48) = uVar4;
      *pbVar12 = 0;
      if (*(long *)(lVar10 + 0x48) == 0) {
        return 0x1b;
      }
    }
    lVar9 = *param_1;
  }
  *(undefined8 *)(lVar9 + 0xd8) = 0xffffffffffffffff;
  FUN_71006b8fd0(lVar9,0);
  FUN_71006b8e90(lVar9,0);
  FUN_71006b9010(lVar9,0xffffffffffffffff);
  FUN_71006b8fe0(lVar9,0xffffffffffffffff);
  lVar9 = *param_1;
  puVar8 = *(undefined4 **)(lVar9 + 0x1d0);
  uVar6 = (uint)*(undefined8 *)(lVar9 + 0xf60);
  if ((uVar6 >> 0x1c & 1) != 0) {
    *puVar8 = 1;
  }
  *param_2 = '\0';
  lVar10 = lVar9;
  if (*(long *)(puVar8 + 2) == 0) {
    if (((uVar6 >> 0x1d & 1) != 0) || (*(int *)(lVar9 + 0x820) != 0)) {
LAB_71006d12fc:
      FUN_71006c0a00(lVar10,"Cannot APPEND without a mailbox.");
      return 3;
    }
    goto LAB_71006d133c;
  }
  if (param_1[0xfd] == 0) {
    if (((uVar6 >> 0x1d & 1) == 0) && (*(int *)(lVar9 + 0x820) == 0)) {
      if (*(long *)(puVar8 + 0x10) == 0) {
LAB_71006d1324:
        lVar9 = lVar10;
        if (((*(long *)(puVar8 + 6) == 0) && (*(long *)(puVar8 + 8) == 0)) &&
           (*(long *)(puVar8 + 0xe) == 0)) goto LAB_71006d133c;
      }
LAB_71006d1278:
      lVar9 = *(long *)(lVar9 + 0x1d0);
      (*(code *)PTR_FUN_7100af36a0)(param_1[0xfd]);
      param_1[0xfd] = 0;
      (*(code *)PTR_FUN_7100af36a0)(param_1[0xfe]);
      lVar9 = *(long *)(lVar9 + 8);
      param_1[0xfe] = 0;
      if (lVar9 == 0) {
        FUN_71006c0a00(*param_1,"Cannot SELECT without a mailbox.");
        return 3;
      }
      lVar9 = FUN_71006cfd10(lVar9,0);
      if (lVar9 == 0) {
        return 0x1b;
      }
      iVar3 = FUN_71006cfa60(param_1,"SELECT %s",lVar9);
      (*(code *)PTR_FUN_7100af36a0)(lVar9);
      if (iVar3 != 0) {
        return iVar3;
      }
      *(undefined4 *)(param_1 + 0xf6) = 8;
      goto LAB_71006d1088;
    }
  }
  else {
    iVar3 = FUN_71006ca300();
    bVar1 = false;
    if (((iVar3 != 0) && (bVar1 = true, *(long *)(puVar8 + 4) != 0)) && (param_1[0xfe] != 0)) {
      iVar3 = FUN_71006ca300();
      bVar1 = iVar3 != 0;
    }
    lVar10 = *param_1;
    if ((((uint)*(undefined8 *)(lVar10 + 0xf60) >> 0x1d & 1) == 0) && (*(int *)(lVar9 + 0x820) == 0)
       ) {
      if (*(long *)(puVar8 + 0x10) == 0) {
        if (!bVar1) {
          if (*(long *)(puVar8 + 2) != 0) goto LAB_71006d1324;
          goto LAB_71006d133c;
        }
        if ((*(long *)(puVar8 + 6) == 0) && (*(long *)(puVar8 + 8) == 0)) {
          if (*(long *)(puVar8 + 0xe) != 0) {
            if (*(long *)(*(long *)(lVar10 + 0x1d0) + 0x38) == 0) {
              FUN_71006c0a00(lVar10,"Cannot SEARCH without a query string.");
              return 3;
            }
            iVar3 = FUN_71006cfa60(param_1,"SEARCH %s");
            if (iVar3 != 0) {
              return iVar3;
            }
            *(undefined4 *)(param_1 + 0xf6) = 0xd;
            goto LAB_71006d1088;
          }
          goto LAB_71006d133c;
        }
        iVar3 = FUN_71006d0150(param_1);
      }
      else {
        if ((!bVar1) && (lVar9 = lVar10, *(long *)(puVar8 + 2) != 0)) goto LAB_71006d1278;
LAB_71006d133c:
        iVar3 = FUN_71006cfeb0(param_1);
      }
      if (iVar3 != 0) {
        return iVar3;
      }
      goto LAB_71006d1088;
    }
    puVar8 = *(undefined4 **)(lVar10 + 0x1d0);
    lVar9 = lVar10;
    if (*(long *)(puVar8 + 2) == 0) goto LAB_71006d12fc;
  }
  if (*(int *)(lVar9 + 0x820) == 0) {
    lVar5 = *(long *)(lVar9 + 0x15a0);
  }
  else {
    lVar10 = lVar9 + 0x808;
    *(uint *)(lVar9 + 0x888) = *(uint *)(lVar9 + 0x888) & 0xfffffffd;
    FUN_71006ab6b0(lVar10,*(undefined8 *)(lVar9 + 0x7f0),0);
    iVar3 = FUN_71006abd60(lVar10,0,0,0);
    if (iVar3 != 0) {
      return iVar3;
    }
    lVar5 = FUN_71006c84d0(param_1,"Mime-Version");
    if ((lVar5 == 0) && (iVar3 = FUN_71006abbc0(lVar9 + 0x858,"Mime-Version: 1.0"), iVar3 != 0)) {
      return iVar3;
    }
    iVar3 = FUN_71006ab9a0(lVar10);
    if (iVar3 != 0) {
      return iVar3;
    }
    lVar5 = FUN_71006aba30(lVar10);
    *(long *)(lVar9 + 0x15a0) = lVar5;
    *(long *)(lVar9 + 0x15b8) = lVar10;
    *(code **)(lVar9 + 0x15b0) = FUN_71006ab950;
  }
  if (lVar5 < 0) {
    FUN_71006c0a00(lVar9,"Cannot APPEND with unknown input file size\n");
    return 0x19;
  }
  lVar10 = FUN_71006cfd10(*(undefined8 *)(puVar8 + 2),0);
  if (lVar10 == 0) {
    return 0x1b;
  }
  iVar3 = FUN_71006cfa60(param_1,"APPEND %s (\\Seen) {%ld}",lVar10,*(undefined8 *)(lVar9 + 0x15a0));
  (*(code *)PTR_FUN_7100af36a0)(lVar10);
  if (iVar3 != 0) {
    return iVar3;
  }
  *(undefined4 *)(param_1 + 0xf6) = 0xb;
LAB_71006d1088:
  iVar3 = FUN_71006cfbd0(param_1,param_2);
  if (((iVar3 == 0) && (*param_2 != '\0')) && (**(int **)(*param_1 + 0x1d0) != 0)) {
    FUN_71006ca160(*param_1,0xffffffff,0xffffffffffffffff,0,0xffffffff);
  }
  return iVar3;
}



// ===== FUN_71006d1520 @ 71006d1520 (size=2364) =====

int FUN_71006d1520(long *param_1)

{
  long *plVar1;
  byte bVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  undefined8 uVar11;
  char *pcVar12;
  ulong uVar13;
  long lVar14;
  int local_2c;
  undefined8 local_28;
  ulong local_20;
  int local_18;
  undefined4 uStack_14;
  
  plVar1 = param_1 + 0xe8;
  local_28 = 0;
  lVar14 = param_1[0x9b];
  if ((int)param_1[0xf6] == 4) {
    iVar5 = FUN_71006d0af0();
  }
  else {
    if (param_1[0xee] == 0) {
      do {
        iVar5 = FUN_71006d55b0((int)lVar14,plVar1,&local_2c,&local_28);
        if (iVar5 != 0) {
          return iVar5;
        }
        if (local_2c == -1) {
          return 8;
        }
        if (local_2c == 0) {
          return 0;
        }
        uVar6 = *(uint *)(param_1 + 0xf6);
        if (uVar6 == 8) {
          lVar7 = *param_1;
          lVar9 = *(long *)(lVar7 + 0x1d0);
          if (local_2c == 0x2a) {
            iVar5 = FUN_7100822f40(*(long *)(lVar7 + 0x1150) + 2,"OK [UIDVALIDITY %19[0123456789]]",
                                   &local_18);
            if (iVar5 == 1) {
              (*(code *)PTR_FUN_7100af36a0)(param_1[0xfe]);
              param_1[0xfe] = 0;
              lVar7 = (*(code *)PTR_FUN_7100af36b8)(&local_18);
              param_1[0xfe] = lVar7;
            }
            goto LAB_71006d17e0;
          }
          if (local_2c != 1) {
            pcVar12 = "Select failed";
LAB_71006d1a28:
            FUN_71006c0a00(lVar7,pcVar12);
            return 0x43;
          }
          if (((*(long *)(lVar9 + 0x10) != 0) && (param_1[0xfe] != 0)) &&
             (iVar5 = FUN_71006ca300(), iVar5 == 0)) {
            FUN_71006c0a00(*param_1,"Mailbox UIDVALIDITY has changed");
            return 0x4e;
          }
          lVar7 = (*(code *)PTR_FUN_7100af36b8)(*(undefined8 *)(lVar9 + 8));
          lVar8 = *(long *)(lVar9 + 0x40);
          param_1[0xfd] = lVar7;
          if (lVar8 == 0) {
            if (*(long *)(lVar9 + 0x38) != 0) {
              if (*(long *)(*(long *)(*param_1 + 0x1d0) + 0x38) == 0) {
                FUN_71006c0a00(*param_1,"Cannot SEARCH without a query string.");
                return 3;
              }
              iVar5 = FUN_71006cfa60(param_1,"SEARCH %s");
              if (iVar5 != 0) {
                return iVar5;
              }
              *(undefined4 *)(param_1 + 0xf6) = 0xd;
              goto LAB_71006d17e8;
            }
            iVar5 = FUN_71006d0150(param_1);
          }
          else {
            iVar5 = FUN_71006cfeb0(param_1);
          }
LAB_71006d17dc:
          if (iVar5 != 0) {
            return iVar5;
          }
LAB_71006d17e0:
          if ((int)param_1[0xf6] == 0) {
            return 0;
          }
        }
        else {
          if (8 < uVar6) {
            if (uVar6 != 0xb) {
              if (0xb < uVar6) {
                if (uVar6 == 0xc) {
                  if (local_2c != 1) {
                    return 0x19;
                  }
                }
                else if (uVar6 == 0xd) {
LAB_71006d15e8:
                  if (local_2c == 0x2a) {
                    lVar9 = *(long *)(*param_1 + 0x1150);
                    lVar7 = FUN_710081ce00(lVar9);
                    *(undefined1 *)(lVar9 + lVar7) = 10;
                    iVar5 = FUN_71006c0c00(param_1,1,lVar9,lVar7 + 1);
                    *(undefined1 *)(lVar9 + lVar7) = 0;
                    goto LAB_71006d17dc;
                  }
                  if (local_2c != 1) {
                    return 0x15;
                  }
                }
                goto LAB_71006d1664;
              }
              if (uVar6 != 9) {
                if ((uVar6 == 10) && (local_2c != 1)) {
                  return 8;
                }
                goto LAB_71006d1664;
              }
              lVar14 = *param_1;
              local_20 = 0;
              pcVar12 = *(char **)(lVar14 + 0x1150);
              if (local_2c != 0x2a) {
                FUN_71006b8fe0(lVar14,0xffffffffffffffff);
                *(undefined4 *)(param_1 + 0xf6) = 0;
                return 0x4e;
              }
              cVar4 = *pcVar12;
              if (cVar4 != '{' && cVar4 != '\0') {
                do {
                  pcVar12 = pcVar12 + 1;
                  cVar4 = *pcVar12;
                } while (cVar4 != '{' && cVar4 != '\0');
              }
              if (((cVar4 != '{') ||
                  (iVar5 = FUN_71006cd340(pcVar12 + 1,&local_18,10,&local_20), iVar5 != 0)) ||
                 ((pcVar3 = (char *)CONCAT44(uStack_14,local_18), (long)pcVar3 - (long)pcVar12 < 2
                  || (((*pcVar3 != '}' || (pcVar3[1] != '\r')) || (pcVar3[2] != '\0')))))) {
                FUN_71006c0a00(*(undefined8 *)param_1[0xf3],"Failed to parse FETCH response.");
                *(undefined4 *)(param_1 + 0xf6) = 0;
                return 8;
              }
              FUN_71006c08c0(lVar14,"Found %ld bytes to download\n",local_20);
              FUN_71006b8fe0(lVar14,local_20);
              if (param_1[0xe8] != 0) {
                uVar13 = param_1[0xe9];
                if (local_20 < (ulong)param_1[0xe9]) {
                  uVar13 = local_20;
                }
                if (uVar13 == 0) goto LAB_71006d1664;
                iVar5 = FUN_71006c0c00(param_1,1,param_1[0xe8],uVar13);
                if (iVar5 != 0) {
                  return iVar5;
                }
                *(ulong *)(lVar14 + 0xe8) = *(long *)(lVar14 + 0xe8) + uVar13;
                FUN_71006c08c0(lVar14,"Written %zu bytes, %lu bytes are left for transfer\n",uVar13,
                               local_20 - uVar13);
                if (uVar13 < (ulong)param_1[0xe9]) {
                  FUN_710080f900(param_1[0xe8],param_1[0xe8] + uVar13,param_1[0xe9] - uVar13);
                  param_1[0xe9] = param_1[0xe9] - uVar13;
                }
                else {
                  (*(code *)PTR_FUN_7100af36a0)(param_1[0xe8]);
                  param_1[0xe8] = 0;
                  param_1[0xe9] = 0;
                }
              }
              if (*(ulong *)(lVar14 + 0xe8) == local_20) {
                uVar11 = 0xffffffff;
LAB_71006d1784:
                FUN_71006ca160(lVar14,0xffffffff,0xffffffffffffffff,0,uVar11);
              }
              else {
                *(ulong *)(lVar14 + 0xe0) = local_20;
                FUN_71006ca160(lVar14,0,local_20,0,0xffffffff);
              }
LAB_71006d1664:
              *(undefined4 *)(param_1 + 0xf6) = 0;
              return 0;
            }
            if (local_2c != 0x2b) {
              return 0x19;
            }
            lVar14 = *param_1;
            FUN_71006b9010(lVar14,*(undefined8 *)(lVar14 + 0x15a0));
            uVar11 = 0;
            goto LAB_71006d1784;
          }
          if (uVar6 == 3) {
            lVar7 = *param_1;
            if (local_2c != 1) {
              if (*(int *)(lVar7 + 0xc04) != 1) {
                pcVar12 = "STARTTLS denied";
LAB_71006d17ac:
                FUN_71006c0a00(lVar7,pcVar12);
                return 0x40;
              }
              goto LAB_71006d17d4;
            }
            iVar5 = FUN_71006d0af0(param_1);
            goto LAB_71006d17dc;
          }
          if (3 < uVar6) {
            if (uVar6 == 6) {
              if (local_2c != 1) {
                FUN_71006c0a00(*param_1,"Access denied. %c");
                return 0x43;
              }
            }
            else {
              if (uVar6 == 7) goto LAB_71006d15e8;
              if (uVar6 == 5) {
                lVar7 = *param_1;
                iVar5 = FUN_71006d7220(param_1 + 0xf7,param_1,local_2c,&local_18);
                if (iVar5 != 0) {
                  return iVar5;
                }
                if (local_18 == 0) {
                  if ((*(char *)((long)param_1 + 0x7e6) != '\0') ||
                     ((*(uint *)(param_1 + 0xfb) & 1) == 0)) {
                    pcVar12 = "Authentication cancelled";
                    goto LAB_71006d1a28;
                  }
                  iVar5 = FUN_71006d06d0(param_1);
                  goto LAB_71006d17dc;
                }
                if (local_18 != 2) goto LAB_71006d17e0;
              }
            }
            goto LAB_71006d1664;
          }
          if (uVar6 == 1) {
            if (local_2c == 3) {
              *(undefined1 *)((long)param_1 + 0x7b5) = 1;
              FUN_71006c08c0(*param_1,"PREAUTH connection, already authenticated!\n");
            }
            else if (local_2c != 1) {
              FUN_71006c0a00(*param_1,"Got unexpected imap-server response");
              return 8;
            }
            *(undefined4 *)((long)param_1 + 0x7c4) = 0;
            *(undefined4 *)((long)param_1 + 0x7cc) = 0;
            *(undefined1 *)((long)param_1 + 0x7e5) = 0;
            iVar5 = FUN_71006cfa60(param_1,"CAPABILITY");
            if (iVar5 != 0) {
              return iVar5;
            }
            *(undefined4 *)(param_1 + 0xf6) = 2;
          }
          else {
            if (uVar6 != 2) goto LAB_71006d1664;
            lVar7 = *param_1;
            if (local_2c != 0x2a) {
              if (((local_2c == 1) && (*(int *)(lVar7 + 0xc04) != 0)) &&
                 ((*(byte *)(param_1 + 0xa3) & 1) == 0)) {
                if (*(char *)((long)param_1 + 0x7e5) != '\0') {
                  iVar5 = FUN_71006cfa60(param_1,"STARTTLS");
                  if (iVar5 != 0) {
                    return iVar5;
                  }
                  *(undefined4 *)(param_1 + 0xf6) = 3;
                  goto LAB_71006d17e8;
                }
                if (*(int *)(lVar7 + 0xc04) != 1) {
                  pcVar12 = "STARTTLS not supported.";
                  goto LAB_71006d17ac;
                }
              }
LAB_71006d17d4:
              iVar5 = FUN_71006d07b0(param_1);
              goto LAB_71006d17dc;
            }
            bVar2 = *(byte *)(*(long *)(lVar7 + 0x1150) + 2);
            if (bVar2 != 0) {
              pbVar10 = (byte *)(*(long *)(lVar7 + 0x1150) + 2);
              do {
                if ((bVar2 < 0x21) && ((0x100002600U >> ((ulong)bVar2 & 0x3f) & 1) != 0)) {
                  pbVar10 = pbVar10 + 1;
                }
                else {
                  bVar2 = *pbVar10;
                  uVar13 = 0;
                  if ((bVar2 & 0xdf) != 0) {
                    do {
                      if (bVar2 < 0xb) {
                        if (8 < bVar2) break;
                      }
                      else if (bVar2 == 0xd) break;
                      uVar13 = uVar13 + 1;
                      bVar2 = pbVar10[uVar13];
                    } while ((bVar2 & 0xdf) != 0);
                    if (uVar13 == 8) {
                      if (*(long *)pbVar10 != 0x534c545452415453) goto LAB_71006d19e0;
                      *(undefined1 *)((long)param_1 + 0x7e5) = 1;
                    }
                    else if (uVar13 == 0xd) {
                      if (((*(long *)pbVar10 != 0x5349444e49474f4c) ||
                          (*(int *)(pbVar10 + 8) != 0x454c4241)) || (pbVar10[0xc] != 0x44))
                      goto LAB_71006d19e0;
                      *(undefined1 *)((long)param_1 + 0x7e6) = 1;
                    }
                    else if (uVar13 == 7) {
                      if (((*(int *)pbVar10 == 0x4c534153) && (*(short *)(pbVar10 + 4) == 0x492d))
                         && (pbVar10[6] == 0x52)) {
                        *(undefined1 *)((long)param_1 + 0x7e7) = 1;
                      }
                      else {
LAB_71006d19e0:
                        if ((*(int *)pbVar10 == 0x48545541) && (pbVar10[4] == 0x3d)) {
                          pbVar10 = pbVar10 + 5;
                          uVar13 = uVar13 - 5;
                          uVar6 = FUN_71006d6c40(pbVar10,uVar13,&local_18);
                          if ((uVar6 != 0) && (uVar13 == CONCAT44(uStack_14,local_18))) {
                            *(uint *)((long)param_1 + 0x7c4) =
                                 *(uint *)((long)param_1 + 0x7c4) | uVar6;
                          }
                        }
                      }
                    }
                    else if (5 < uVar13) goto LAB_71006d19e0;
                  }
                  pbVar10 = pbVar10 + uVar13;
                }
                bVar2 = *pbVar10;
              } while (bVar2 != 0);
              goto LAB_71006d17e0;
            }
          }
        }
LAB_71006d17e8:
        cVar4 = FUN_71006d59f0(plVar1);
        if (cVar4 == '\0') {
          return 0;
        }
      } while( true );
    }
    iVar5 = FUN_71006d5910(plVar1);
  }
  return iVar5;
}



// ===== FUN_71006d1e60 @ 71006d1e60 (size=188) =====

ulong FUN_71006d1e60(long *param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  ulong uVar3;
  
  if (((*(uint *)(param_1[0xc9] + 0x84) & 1) != 0) && (*(char *)((long)param_1 + 0x7b4) == '\0')) {
    uVar3 = FUN_71006b1910(param_1,0,(long)param_1 + 0x7b4);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (*(char *)((long)param_1 + 0x7b4) == '\0') {
      cVar2 = *param_2;
      goto LAB_71006d1eb8;
    }
  }
  uVar3 = FUN_71006d5170(param_1 + 0xe8,0,0);
  cVar2 = (int)param_1[0xf6] == 0;
  *param_2 = cVar2;
  if ((int)uVar3 != 0) {
    return uVar3;
  }
LAB_71006d1eb8:
  uVar3 = 0;
  if (cVar2 != '\0') {
    uVar1 = **(uint **)(*param_1 + 0x1d0);
    uVar3 = (ulong)uVar1;
    if (uVar1 != 0) {
      FUN_71006ca160(*param_1,0xffffffff,0xffffffffffffffff,0,0xffffffff);
      uVar3 = 0;
    }
  }
  return uVar3;
}



// ===== FUN_71006d1f50 @ 71006d1f50 (size=116) =====

void FUN_71006d1f50(long param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((((*(uint *)(*(long *)(param_1 + 0x648) + 0x84) & 1) == 0) ||
      (*(char *)(param_1 + 0x7b4) != '\0')) ||
     ((iVar1 = FUN_71006b1910(param_1,0,param_1 + 0x7b4), iVar1 == 0 &&
      (*(char *)(param_1 + 0x7b4) != '\0')))) {
    FUN_71006d5170(param_1 + 0x740,0,0);
    *(bool *)param_2 = *(int *)(param_1 + 0x7b0) == 0;
  }
  return;
}



// ===== FUN_71006d1fd0 @ 71006d1fd0 (size=128) =====

int FUN_71006d1fd0(long *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(*param_1 + 0x1d0);
  if (puVar1 != (undefined4 *)0x0) {
    if (param_2 != 0) {
      FUN_71006a2e80(param_1,1);
    }
    (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(puVar1 + 2));
    *(undefined8 *)(puVar1 + 2) = 0;
    (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(puVar1 + 4));
    *puVar1 = 0;
    *(undefined8 *)(puVar1 + 4) = 0;
    return param_2;
  }
  return 0;
}



// ===== FUN_71006d2050 @ 71006d2050 (size=180) =====

void FUN_71006d2050(long param_1,long *param_2)

{
  char *pcVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar4 = FUN_710081ce00();
  lVar6 = param_1 + uVar4;
  if (2 < uVar4) {
    lVar5 = uVar4 - 2;
    lVar6 = param_1 + 2;
    if (*(char *)(param_1 + 2) == ' ' || *(char *)(param_1 + 2) == '\t') {
      do {
        pcVar1 = (char *)(lVar6 + 1);
        lVar6 = lVar6 + 1;
        lVar5 = (param_1 - lVar6) + uVar4;
      } while (*pcVar1 == ' ' || *pcVar1 == '\t');
    }
    while (lVar3 = lVar5, lVar3 != 0) {
      bVar2 = *(byte *)(lVar6 + -1 + lVar3);
      if ((0x20 < bVar2) || (lVar5 = lVar3 + -1, (-0x100002601 >> ((ulong)bVar2 & 0x3f) & 1U) != 0))
      {
        *(undefined1 *)(lVar6 + lVar3) = 0;
        *param_2 = lVar6;
        return;
      }
    }
  }
  *param_2 = lVar6;
  return;
}



// ===== FUN_71006d2200 @ 71006d2200 (size=300) =====

undefined8 FUN_71006d2200(long param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [32];
  undefined1 auStack_8 [8];
  
  lVar3 = FUN_71006cd250(&PTR_LAB_7100ae3a38);
  if (lVar3 == 0) {
    return 0x1b;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x7f0);
  FUN_710081ce00(uVar6);
  uVar2 = FUN_71006a8820();
  FUN_71006cd2d0(lVar3,uVar6,uVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x488);
  FUN_710081ce00(uVar6);
  uVar2 = FUN_71006a8820();
  FUN_71006cd2d0(lVar3,uVar6,uVar2);
  FUN_71006cd2f0(lVar3,auStack_38);
  puVar4 = auStack_28;
  puVar5 = auStack_38;
  do {
    puVar1 = puVar4 + 2;
    FUN_710069fb80(puVar4,3,&DAT_7100845270,*puVar5);
    puVar4 = puVar1;
    puVar5 = puVar5 + 1;
  } while (auStack_8 != puVar1);
  uVar6 = FUN_71006d5540(param_1 + 0x740,"APOP %s %s",*(undefined8 *)(param_1 + 0x480),auStack_28);
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  *(undefined4 *)(param_1 + 0x7b0) = 6;
  return uVar6;
}



// ===== FUN_71006d2330 @ 71006d2330 (size=536) =====

ulong FUN_71006d2330(long param_1,undefined1 *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  char cVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  
  *param_2 = 0;
  FUN_71006a2e80(param_1,0);
  *(undefined8 *)(param_1 + 0x790) = 120000;
  *(long *)(param_1 + 0x798) = param_1;
  *(code **)(param_1 + 0x7a0) = FUN_71006d2c90;
  *(undefined1 **)(param_1 + 0x7a8) = &LAB_71006d2110;
  *(undefined4 *)(param_1 + 0x7ec) = 0xffffffff;
  FUN_71006d6e10(param_1 + 0x7c8,&PTR_DAT_7100ae3e28);
  FUN_71006d5350(param_1 + 0x740);
  pcVar5 = *(char **)(param_1 + 0x490);
  *(undefined1 *)(param_1 + 0x7e0) = 1;
  if (pcVar5 == (char *)0x0) {
    if (*(int *)(param_1 + 0x7ec) != 2) {
LAB_71006d24c4:
      if (*(int *)(param_1 + 0x7d8) == 0) {
        *(undefined4 *)(param_1 + 0x7ec) = 0;
      }
      else {
        uVar4 = 4;
        if (*(int *)(param_1 + 0x7d8) == -0x21) {
          uVar4 = 0xffffffff;
        }
        *(undefined4 *)(param_1 + 0x7ec) = uVar4;
      }
    }
LAB_71006d24dc:
    *(undefined4 *)(param_1 + 0x7b0) = 1;
    uVar9 = FUN_71006d1f50(param_1,param_2);
    return uVar9;
  }
  cVar6 = *pcVar5;
LAB_71006d23d0:
  if (cVar6 != '\0') {
    do {
      pcVar8 = pcVar5 + 1;
      pcVar7 = pcVar5;
      if (cVar6 == '=') {
LAB_71006d2418:
        do {
          pcVar7 = pcVar7 + 1;
        } while (*pcVar7 != ';' && *pcVar7 != '\0');
      }
      else {
        do {
          pcVar8 = pcVar7;
          pcVar7 = pcVar8 + 1;
          cVar6 = *pcVar7;
        } while (cVar6 != '=' && cVar6 != '\0');
        pcVar8 = pcVar8 + 2;
        if (cVar6 != ';' && cVar6 != '\0') goto LAB_71006d2418;
      }
      iVar2 = FUN_71006ca3e0(pcVar5,"AUTH=",5);
      if (iVar2 == 0) {
        uVar9 = 3;
LAB_71006d243c:
        if (*(int *)(param_1 + 0x7ec) != 2) {
          iVar2 = *(int *)(param_1 + 0x7d8);
          if ((iVar2 != 0) && (bVar1 = iVar2 == -0x21, iVar2 = 4, bVar1)) {
            iVar2 = -1;
          }
          *(int *)(param_1 + 0x7ec) = iVar2;
        }
        return uVar9;
      }
      uVar3 = FUN_71006d6d40(param_1 + 0x7c8,pcVar8,(long)pcVar7 - (long)pcVar8);
      uVar9 = (ulong)uVar3;
      if (uVar3 != 0) {
        iVar2 = FUN_71006ca3e0(pcVar8,"+APOP",(long)pcVar7 - (long)pcVar8);
        if (iVar2 == 0) goto LAB_71006d243c;
        *(undefined4 *)(param_1 + 0x7d8) = 0;
        *(undefined4 *)(param_1 + 0x7ec) = 2;
      }
      cVar6 = *pcVar7;
      if (cVar6 == ';') goto LAB_71006d2500;
      pcVar5 = pcVar7;
      if (cVar6 == '\0') break;
    } while( true );
  }
  if (*(int *)(param_1 + 0x7ec) == 2) goto LAB_71006d24dc;
  goto LAB_71006d24c4;
LAB_71006d2500:
  cVar6 = pcVar7[1];
  pcVar5 = pcVar7 + 1;
  goto LAB_71006d23d0;
}



// ===== FUN_71006d2610 @ 71006d2610 (size=420) =====

void FUN_71006d2610(long *param_1,undefined1 *param_2)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  char *pcVar4;
  uint uVar5;
  long lVar6;
  char *pcVar7;
  
  lVar2 = *param_1;
  lVar6 = *(long *)(lVar2 + 0x1d0);
  *param_2 = 0;
  iVar1 = FUN_710069f7f0(lVar2,*(long *)(lVar2 + 0x1608) + 1,0,lVar6 + 8,0,1);
  if (iVar1 != 0) {
    return;
  }
  lVar2 = *param_1;
  if (*(long *)(lVar2 + 0xc50) != 0) {
    iVar1 = FUN_710069f7f0(lVar2,*(long *)(lVar2 + 0xc50),0,*(long *)(lVar2 + 0x1d0) + 0x10,0,1);
    if (iVar1 != 0) {
      return;
    }
    lVar2 = *param_1;
  }
  *(undefined8 *)(lVar2 + 0xd8) = 0xffffffffffffffff;
  FUN_71006b8fd0(lVar2,0);
  FUN_71006b8e90(lVar2,0);
  FUN_71006b9010(lVar2,0xffffffffffffffff);
  FUN_71006b8fe0(lVar2,0xffffffffffffffff);
  puVar3 = *(undefined4 **)(*param_1 + 0x1d0);
  uVar5 = (uint)*(undefined8 *)(*param_1 + 0xf60);
  if ((uVar5 >> 0x1c & 1) != 0) {
    *puVar3 = 1;
  }
  pcVar7 = *(char **)(puVar3 + 2);
  *param_2 = 0;
  if (*pcVar7 == '\0') {
LAB_71006d2758:
    pcVar7 = *(char **)(puVar3 + 4);
    if (pcVar7 == (char *)0x0) {
      pcVar4 = "LIST";
    }
    else {
      pcVar4 = "LIST";
      if (*pcVar7 != '\0') {
        pcVar4 = pcVar7;
      }
    }
    iVar1 = FUN_71006d5540(param_1 + 0xe8,"%s",pcVar4);
  }
  else {
    if ((uVar5 >> 0xd & 1) == 0) {
      pcVar7 = "RETR";
    }
    else {
      *puVar3 = 1;
      if (*pcVar7 == '\0') goto LAB_71006d2758;
      pcVar7 = "LIST";
    }
    pcVar4 = *(char **)(puVar3 + 4);
    if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
      pcVar7 = pcVar4;
    }
    iVar1 = FUN_71006d5540(param_1 + 0xe8,"%s %s",pcVar7);
  }
  if (iVar1 != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0xf6) = 9;
  FUN_71006d1f50(param_1,param_2);
  return;
}



// ===== FUN_71006d27c0 @ 71006d27c0 (size=96) =====

undefined8 FUN_71006d27c0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = (*(code *)PTR_FUN_7100af3698)(0x18,1);
  *(long *)(lVar2 + 0x1d0) = lVar1;
  if (lVar1 != 0) {
    *(byte *)((long)param_1 + 0x8c4) = *(byte *)((long)param_1 + 0x8c4) & 0xfe;
    return 0;
  }
  return 0x1b;
}



// ===== FUN_71006d2820 @ 71006d2820 (size=152) =====

void FUN_71006d2820(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_71006b1910(param_1,0,param_1 + 0x7b4);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x7b0) != 4) {
      *(undefined4 *)(param_1 + 0x7b0) = 4;
    }
    if (*(char *)(param_1 + 0x7b4) != '\0') {
      *(undefined ***)(param_1 + 0x648) = &PTR_s_POP3S_7100ae3da0;
      *(byte *)(param_1 + 0x8c4) = *(byte *)(param_1 + 0x8c4) | 1;
      *(undefined4 *)(param_1 + 0x7d4) = 0;
      *(undefined4 *)(param_1 + 0x7dc) = 0;
      *(undefined1 *)(param_1 + 0x7f8) = 0;
      iVar1 = FUN_71006d5540(param_1 + 0x740,"%s",&DAT_7100849b18);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x7b0) = 2;
      }
    }
  }
  return;
}



// ===== FUN_71006d28c0 @ 71006d28c0 (size=280) =====

undefined8 FUN_71006d28c0(undefined8 *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined8 uVar4;
  int local_4;
  
  local_4 = 0;
  cVar3 = FUN_71006d6e30(param_1 + 0xf9,param_1);
  if (cVar3 != '\0') {
    if (((*(uint *)(param_1 + 0xfd) & *(uint *)((long)param_1 + 0x7ec)) >> 2 & 1) != 0) {
      uVar4 = FUN_71006d6e50(param_1 + 0xf9,param_1,0,&local_4);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      if (local_4 == 1) {
        *(undefined4 *)(param_1 + 0xf6) = 5;
        return uVar4;
      }
    }
    uVar4 = 0;
    if (local_4 == 0) {
      uVar1 = *(uint *)(param_1 + 0xfd) & *(uint *)((long)param_1 + 0x7ec);
      if ((uVar1 >> 1 & 1) == 0) {
        if ((uVar1 & 1) == 0) {
          FUN_71006c08c0(*param_1,"No known authentication mechanisms supported!\n");
          uVar4 = 0x43;
        }
        else {
          if ((*(uint *)((long)param_1 + 0x624) >> 8 & 1) == 0) goto LAB_71006d299c;
          puVar2 = &DAT_7100853d20;
          if ((undefined1 *)param_1[0x90] != (undefined1 *)0x0) {
            puVar2 = (undefined1 *)param_1[0x90];
          }
          uVar4 = FUN_71006d5540(param_1 + 0xe8,"USER %s",puVar2);
          if ((int)uVar4 == 0) {
            *(undefined4 *)(param_1 + 0xf6) = 7;
          }
        }
      }
      else {
        if ((*(uint *)((long)param_1 + 0x624) >> 8 & 1) == 0) goto LAB_71006d299c;
        uVar4 = FUN_71006d2200(param_1);
      }
    }
    return uVar4;
  }
LAB_71006d299c:
  *(undefined4 *)(param_1 + 0xf6) = 0;
  return 0;
}



// ===== FUN_71006d29e0 @ 71006d29e0 (size=116) =====

void FUN_71006d29e0(long param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((((*(uint *)(*(long *)(param_1 + 0x648) + 0x84) & 1) == 0) ||
      (*(char *)(param_1 + 0x7b4) != '\0')) ||
     ((iVar1 = FUN_71006b1910(param_1,0,param_1 + 0x7b4), iVar1 == 0 &&
      (*(char *)(param_1 + 0x7b4) != '\0')))) {
    FUN_71006d5170(param_1 + 0x740,0,0);
    *(bool *)param_2 = *(int *)(param_1 + 0x7b0) == 0;
  }
  return;
}



// ===== FUN_71006d2a60 @ 71006d2a60 (size=556) =====

undefined8 FUN_71006d2a60(long *param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = *param_1;
  if (param_3 == 0) {
    if (param_1[0xf7] == 5) goto LAB_71006d2c44;
  }
  else {
    lVar8 = 0;
    lVar5 = 0;
    lVar10 = 0;
    uVar6 = param_1[0xf7];
    do {
      while (cVar1 = *(char *)(param_2 + lVar8), cVar1 != '\r') {
        if (cVar1 == '.') {
          if (uVar6 == 2) {
            uVar4 = 3;
            param_1[0xf7] = 3;
          }
          else {
            if (uVar6 == 3) {
              lVar10 = 1;
              param_1[0xf7] = 0;
              goto LAB_71006d2af4;
            }
LAB_71006d2ab4:
            param_1[0xf7] = 0;
            uVar4 = uVar6;
            if (uVar6 != 0) goto LAB_71006d2af4;
          }
        }
        else {
          if ((cVar1 != '\n') || (uVar6 != 1 && uVar6 != 4)) goto LAB_71006d2ab4;
          uVar4 = uVar6 + 1;
          param_1[0xf7] = uVar4;
          if (uVar6 == 0) {
            uVar4 = 1;
          }
          else if (uVar4 <= uVar6) goto LAB_71006d2af4;
        }
LAB_71006d2abc:
        lVar8 = lVar8 + 1;
        uVar6 = uVar4;
        if (param_3 == lVar8) goto LAB_71006d2b30;
      }
      if (uVar6 == 0) {
        uVar4 = 1;
        param_1[0xf7] = 1;
        if (lVar8 != 0) {
          uVar3 = FUN_71006c0c00(param_1,1,param_2 + lVar5,lVar8 - lVar5);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar4 = param_1[0xf7];
          lVar5 = lVar8;
        }
        goto LAB_71006d2abc;
      }
      if (uVar6 == 3) {
        uVar4 = 4;
        param_1[0xf7] = 4;
        goto LAB_71006d2abc;
      }
      param_1[0xf7] = 1;
LAB_71006d2af4:
      uVar4 = uVar6 - param_1[0xf8];
      lVar7 = param_1[0xf8] - uVar6;
      do {
        bVar2 = uVar4 == uVar6;
        uVar6 = uVar6 - 1;
        if (bVar2) {
          uVar3 = FUN_71006c0c00(param_1,1,"\r\n.\r\n",uVar4 - lVar10);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          lVar10 = 0;
          uVar4 = param_1[0xf7];
          lVar5 = lVar8;
          goto LAB_71006d2abc;
        }
        param_1[0xf8] = lVar7 + uVar6;
      } while (uVar6 != 0);
      lVar8 = lVar8 + 1;
      uVar4 = param_1[0xf7];
      uVar6 = uVar4;
    } while (param_3 != lVar8);
LAB_71006d2b30:
    if (uVar4 == 5) {
LAB_71006d2c44:
      uVar3 = FUN_71006c0c00(param_1,1,"\r\n.\r\n",2);
      *(uint *)(lVar9 + 0x1a8) = *(uint *)(lVar9 + 0x1a8) & 0xfffffffe;
      param_1[0xf7] = 0;
      return uVar3;
    }
    if (uVar4 == 0 && lVar5 != param_3) {
      uVar3 = FUN_71006c0c00(param_1,1,param_2 + lVar5,param_3 - lVar5);
      return uVar3;
    }
  }
  return 0;
}



// ===== FUN_71006d2c90 @ 71006d2c90 (size=1668) =====

int FUN_71006d2c90(long *param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  byte *pbVar15;
  long lVar16;
  long lVar17;
  int local_14;
  undefined8 local_10;
  int local_8;
  undefined4 uStack_4;
  
  plVar1 = param_1 + 0xe8;
  local_10 = 0;
  lVar13 = param_1[0x9b];
  if ((int)param_1[0xf6] == 4) {
    iVar5 = FUN_71006d2820();
  }
  else {
    if (param_1[0xee] == 0) {
      do {
        iVar4 = FUN_71006d55b0((int)lVar13,plVar1,&local_14,&local_10);
        iVar5 = local_14;
        if (iVar4 != 0) {
          return iVar4;
        }
        if (local_14 == 0) {
          return 0;
        }
        uVar6 = *(uint *)(param_1 + 0xf6);
        if (uVar6 == 6) {
          lVar16 = *param_1;
          if (local_14 == 0x2b) goto LAB_71006d2db0;
          pcVar10 = "Authentication failed: %d";
          goto LAB_71006d2f04;
        }
        if (6 < uVar6) {
          if (uVar6 == 8) {
            lVar16 = *param_1;
            if (local_14 == 0x2b) goto LAB_71006d2db0;
          }
          else {
            if (uVar6 == 9) {
              lVar13 = *param_1;
              if (local_14 != 0x2b) {
                *(undefined4 *)(param_1 + 0xf6) = 0;
                return 0x38;
              }
              iVar5 = **(int **)(lVar13 + 0x1d0);
              param_1[0xf7] = 2;
              param_1[0xf8] = 2;
              if (iVar5 == 0) {
                FUN_71006ca160(lVar13,0,0xffffffffffffffff,0,0xffffffff);
                lVar16 = *plVar1;
                if (lVar16 != 0) {
                  if (((uint)*(undefined8 *)(lVar13 + 0xf60) >> 0x1c & 1) == 0) {
                    iVar5 = FUN_71006d2a60(param_1,lVar16,param_1[0xe9]);
                    if (iVar5 != 0) {
                      return iVar5;
                    }
                    lVar16 = param_1[0xe8];
                  }
                  (*(code *)PTR_FUN_7100af36a0)(lVar16);
                  param_1[0xe8] = 0;
                  param_1[0xe9] = 0;
                }
              }
LAB_71006d2db0:
              *(undefined4 *)(param_1 + 0xf6) = 0;
              return 0;
            }
            if (uVar6 != 7) goto LAB_71006d2db0;
            lVar16 = *param_1;
            if (local_14 == 0x2b) {
              puVar2 = &DAT_7100853d20;
              if ((undefined1 *)param_1[0x91] != (undefined1 *)0x0) {
                puVar2 = (undefined1 *)param_1[0x91];
              }
              iVar5 = FUN_71006d5540(plVar1,"PASS %s",puVar2);
              if (iVar5 != 0) {
                return iVar5;
              }
              *(undefined4 *)(param_1 + 0xf6) = 8;
              goto LAB_71006d2e10;
            }
          }
          pcVar10 = "Access denied. %c";
LAB_71006d2f04:
          FUN_71006c0a00(lVar16,pcVar10,local_14);
          return 0x43;
        }
        if (uVar6 == 3) {
          lVar16 = *param_1;
          if (local_14 != 0x2b) {
            if (*(int *)(lVar16 + 0xc04) != 1) {
              pcVar10 = "STARTTLS denied";
LAB_71006d2f4c:
              FUN_71006c0a00(lVar16,pcVar10);
              return 0x40;
            }
            goto LAB_71006d2f64;
          }
          iVar5 = FUN_71006d2820(param_1);
joined_r0x0071006d31e0:
          if (iVar5 != 0) {
            return iVar5;
          }
LAB_71006d2e08:
          if ((int)param_1[0xf6] == 0) {
            return 0;
          }
        }
        else {
          if (3 < uVar6) {
            if (uVar6 != 5) goto LAB_71006d2db0;
            lVar16 = *param_1;
            iVar5 = FUN_71006d7220(param_1 + 0xf9,param_1,local_14,&local_8);
            if (iVar5 != 0) {
              return iVar5;
            }
            if (local_8 == 0) {
              uVar6 = *(uint *)(param_1 + 0xfd) & *(uint *)((long)param_1 + 0x7ec);
              if ((uVar6 >> 1 & 1) != 0) {
                if ((*(uint *)((long)param_1 + 0x624) >> 8 & 1) == 0) goto LAB_71006d2db0;
                iVar5 = FUN_71006d2200(param_1);
                goto joined_r0x0071006d31e0;
              }
              if ((uVar6 & 1) == 0) {
                FUN_71006c0a00(lVar16,"Authentication cancelled");
                return 0x43;
              }
              if ((*(uint *)((long)param_1 + 0x624) >> 8 & 1) == 0) goto LAB_71006d2db0;
              puVar2 = &DAT_7100853d20;
              if ((undefined1 *)param_1[0x90] != (undefined1 *)0x0) {
                puVar2 = (undefined1 *)param_1[0x90];
              }
              iVar5 = FUN_71006d5540(plVar1,"USER %s",puVar2);
              if (iVar5 != 0) {
                return iVar5;
              }
              *(undefined4 *)(param_1 + 0xf6) = 7;
            }
            else if (local_8 == 2) goto LAB_71006d2db0;
            goto LAB_71006d2e08;
          }
          if (uVar6 == 1) {
            lVar17 = *param_1;
            lVar16 = *(long *)(lVar17 + 0x1150);
            uVar7 = FUN_710081ce00(lVar16);
            if (iVar5 != 0x2b) {
              FUN_71006c0a00(lVar17,"Got unexpected pop3-server response");
              return 8;
            }
            if (((3 < uVar7) && (uVar12 = uVar7 - 2, *(char *)(lVar16 + uVar12) == '>')) &&
               (3 < uVar12)) {
              uVar11 = 3;
              do {
                if (*(char *)(lVar16 + uVar11) == '<') {
                  lVar17 = (uVar7 - uVar11) + -1;
                  if (lVar17 != 0) {
                    lVar8 = (*(code *)PTR_FUN_7100af3698)(1);
                    param_1[0xfe] = lVar8;
                    if (lVar8 != 0) {
                      FUN_710080f900(lVar8,lVar16 + uVar11,lVar17);
                      *(undefined1 *)(param_1[0xfe] + lVar17) = 0;
                      lVar17 = param_1[0xfe];
                      lVar16 = FUN_710080eb40(lVar17,0x40);
                      if (lVar16 == 0) {
                        (*(code *)PTR_FUN_7100af36a0)(lVar17);
                        param_1[0xfe] = 0;
                      }
                      else {
                        *(uint *)(param_1 + 0xfd) = *(uint *)(param_1 + 0xfd) | 2;
                      }
                    }
                  }
                  break;
                }
                uVar11 = uVar11 + 1;
              } while (uVar12 != uVar11);
            }
            *(undefined4 *)((long)param_1 + 0x7d4) = 0;
            *(undefined4 *)((long)param_1 + 0x7dc) = 0;
            *(undefined1 *)(param_1 + 0xff) = 0;
            iVar5 = FUN_71006d5540(plVar1,"%s",&DAT_7100849b18);
            if (iVar5 != 0) {
              return iVar5;
            }
            *(undefined4 *)(param_1 + 0xf6) = 2;
          }
          else {
            if (uVar6 != 2) goto LAB_71006d2db0;
            lVar16 = *param_1;
            piVar14 = *(int **)(lVar16 + 0x1150);
            uVar7 = FUN_710081ce00(piVar14);
            if (iVar5 != 0x2a) {
              if (iVar5 != 0x2b) {
                *(uint *)(param_1 + 0xfd) = *(uint *)(param_1 + 0xfd) | 1;
                iVar5 = FUN_71006d28c0(param_1);
                goto joined_r0x0071006d31e0;
              }
              if ((*(int *)(lVar16 + 0xc04) != 0) && ((*(byte *)(param_1 + 0xa3) & 1) == 0)) {
                if ((char)param_1[0xff] != '\0') {
                  iVar5 = FUN_71006d5540(plVar1,"%s",&DAT_7100849b60);
                  if (iVar5 != 0) {
                    return iVar5;
                  }
                  *(undefined4 *)(param_1 + 0xf6) = 3;
                  goto LAB_71006d2e10;
                }
                if (*(int *)(lVar16 + 0xc04) != 1) {
                  pcVar10 = "STLS not supported.";
                  goto LAB_71006d2f4c;
                }
              }
LAB_71006d2f64:
              iVar5 = FUN_71006d28c0(param_1);
              goto joined_r0x0071006d31e0;
            }
            if (3 < uVar7) {
              iVar5 = *piVar14;
              if (iVar5 == 0x534c5453) {
                *(undefined1 *)(param_1 + 0xff) = 1;
              }
              else if (iVar5 == 0x52455355) {
                *(uint *)(param_1 + 0xfd) = *(uint *)(param_1 + 0xfd) | 1;
              }
              else if (((uVar7 != 4) && (iVar5 == 0x4c534153)) && ((char)piVar14[1] == ' ')) {
                uVar7 = uVar7 - 5;
                *(uint *)(param_1 + 0xfd) = *(uint *)(param_1 + 0xfd) | 4;
                if (uVar7 != 0) {
                  pbVar9 = (byte *)((long)piVar14 + 5);
                  do {
                    while ((uVar12 = (ulong)*pbVar9, 0x20 < *pbVar9 ||
                           ((-0x100002601 >> (uVar12 & 0x3f) & 1U) != 0))) {
                      uVar11 = 0;
                      while (uVar6 = (uint)uVar12, uVar6 < 0xb) {
                        if (8 < uVar6) goto LAB_71006d329c;
LAB_71006d3270:
                        uVar11 = uVar11 + 1;
                        pbVar15 = pbVar9 + uVar11;
                        if ((uVar7 <= uVar11) ||
                           (uVar12 = (ulong)pbVar9[uVar11], pbVar9[uVar11] == 0x20))
                        goto LAB_71006d32a0;
                      }
                      if (uVar6 != 0xd) goto LAB_71006d3270;
LAB_71006d329c:
                      pbVar15 = pbVar9 + uVar11;
LAB_71006d32a0:
                      uVar6 = FUN_71006d6c40(pbVar9,uVar11,&local_8);
                      if ((uVar6 != 0) && (CONCAT44(uStack_4,local_8) == uVar11)) {
                        *(uint *)((long)param_1 + 0x7d4) = *(uint *)((long)param_1 + 0x7d4) | uVar6;
                      }
                      uVar7 = uVar7 - uVar11;
                      pbVar9 = pbVar15;
                      if (uVar7 == 0) goto LAB_71006d2e08;
                    }
                    uVar7 = uVar7 - 1;
                    pbVar9 = pbVar9 + 1;
                  } while (uVar7 != 0);
                  goto LAB_71006d2e08;
                }
              }
            }
          }
        }
LAB_71006d2e10:
        cVar3 = FUN_71006d59f0(plVar1);
        if (cVar3 == '\0') {
          return 0;
        }
      } while( true );
    }
    iVar5 = FUN_71006d5910(plVar1);
  }
  return iVar5;
}



// ===== FUN_71006d3350 @ 71006d3350 (size=116) =====

void FUN_71006d3350(long param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((((*(uint *)(*(long *)(param_1 + 0x648) + 0x84) & 1) == 0) ||
      (*(char *)(param_1 + 0x7b4) != '\0')) ||
     ((iVar1 = FUN_71006b1910(param_1,0,param_1 + 0x7b4), iVar1 == 0 &&
      (*(char *)(param_1 + 0x7b4) != '\0')))) {
    FUN_71006d5170(param_1 + 0x740,0,0);
    *(bool *)param_2 = *(int *)(param_1 + 0x7b0) == 0;
  }
  return;
}



// ===== FUN_71006d33d0 @ 71006d33d0 (size=180) =====

void FUN_71006d33d0(long param_1,long *param_2)

{
  char *pcVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar4 = FUN_710081ce00();
  lVar6 = param_1 + uVar4;
  if (4 < uVar4) {
    lVar5 = uVar4 - 4;
    lVar6 = param_1 + 4;
    if (*(char *)(param_1 + 4) == ' ' || *(char *)(param_1 + 4) == '\t') {
      do {
        pcVar1 = (char *)(lVar6 + 1);
        lVar6 = lVar6 + 1;
        lVar5 = (param_1 - lVar6) + uVar4;
      } while (*pcVar1 == ' ' || *pcVar1 == '\t');
    }
    while (lVar3 = lVar5, lVar3 != 0) {
      bVar2 = *(byte *)(lVar6 + -1 + lVar3);
      if ((0x20 < bVar2) || (lVar5 = lVar3 + -1, (-0x100002601 >> ((ulong)bVar2 & 0x3f) & 1U) != 0))
      {
        *(undefined1 *)(lVar6 + lVar3) = 0;
        *param_2 = lVar6;
        return;
      }
    }
  }
  *param_2 = lVar6;
  return;
}



// ===== FUN_71006d3490 @ 71006d3490 (size=272) =====

bool FUN_71006d3490(long param_1,undefined1 *param_2,ulong param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_8;
  undefined2 local_4;
  
  if ((((3 < param_3) && (iVar2 = FUN_71006af4a0(*param_2), iVar2 != 0)) &&
      (iVar2 = FUN_71006af4a0(param_2[1]), iVar2 != 0)) &&
     (iVar2 = FUN_71006af4a0(param_2[2]), iVar2 != 0)) {
    bVar1 = param_3 == 5 || param_2[3] == ' ';
    if (bVar1) {
      local_8 = 0;
      local_4 = 0;
      if (param_3 != 5) {
        param_3 = 3;
      }
      uVar3 = FUN_710080f900(&local_8,param_2,param_3);
      FUN_710081b720(uVar3,0,10);
      iVar2 = FUN_71006a8830();
      if (iVar2 == 1) {
        iVar2 = 0;
      }
      *param_4 = iVar2;
      return bVar1;
    }
    if ((param_2[3] == '-') && (iVar2 = *(int *)(param_1 + 0x7b0), iVar2 == 2 || iVar2 == 7)) {
      *param_4 = 1;
      return iVar2 == 2 || iVar2 == 7;
    }
  }
  return false;
}



// ===== FUN_71006d35a0 @ 71006d35a0 (size=180) =====

undefined8 FUN_71006d35a0(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  int local_4;
  
  if (*(char *)((long)param_1 + 0x7e3) != '\0') {
    cVar1 = FUN_71006d6e30(param_1 + 0xf8,param_1);
    if (cVar1 != '\0') {
      uVar2 = FUN_71006d6e50(param_1 + 0xf8,param_1,0,&local_4);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (local_4 == 1) {
        *(undefined4 *)(param_1 + 0xf6) = 6;
        return uVar2;
      }
      FUN_71006c08c0(*param_1,"No known authentication mechanisms supported!\n");
      return 0x43;
    }
  }
  *(undefined4 *)(param_1 + 0xf6) = 0;
  return 0;
}



// ===== FUN_71006d3660 @ 71006d3660 (size=124) =====

void FUN_71006d3660(long *param_1)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  char acStack_408 [1032];
  
  lVar2 = *param_1;
  pcVar3 = (char *)(*(long *)(lVar2 + 0x1608) + 1);
  if (*(char *)(*(long *)(lVar2 + 0x1608) + 1) == '\0') {
    pcVar3 = acStack_408;
    iVar1 = FUN_71006d6970(pcVar3,0x401);
    if (iVar1 == 0) {
      lVar2 = *param_1;
    }
    else {
      pcVar3 = "localhost";
      lVar2 = *param_1;
    }
  }
  FUN_710069f7f0(lVar2,pcVar3,0,param_1 + 0xf7,0,1);
  return;
}



// ===== FUN_71006d36e0 @ 71006d36e0 (size=464) =====

int FUN_71006d36e0(long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined1 auVar5 [16];
  long local_8;
  
  lVar2 = *param_1;
  puVar3 = *(undefined4 **)(lVar2 + 0x1d0);
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  if (param_1[0xf3] != 0) {
    (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(puVar3 + 2));
    *(undefined8 *)(puVar3 + 2) = 0;
    if (param_2 == 0) {
      if ((((*(ulong *)(lVar2 + 0xf60) >> 0x25 & 1) == 0) && (*(long *)(lVar2 + 0xea8) != 0)) &&
         ((((uint)*(ulong *)(lVar2 + 0xf60) >> 0x1d & 1) != 0 ||
          (param_2 = *(int *)(lVar2 + 0x820), param_2 != 0)))) {
        if ((*(char *)(puVar3 + 10) == '\0') && (*(long *)(*param_1 + 0x15a0) != 0)) {
          lVar2 = (*(code *)PTR_FUN_7100af36b8)("\r\n.\r\n");
          lVar4 = 5;
        }
        else {
          lVar2 = (*(code *)PTR_FUN_7100af36b8)(".\r\n");
          lVar4 = 3;
        }
        if (lVar2 == 0) {
          return 0x1b;
        }
        iVar1 = FUN_71006c0660(param_1,*(undefined4 *)((long)param_1 + 0x67c),lVar2,lVar4,&local_8);
        if (iVar1 != 0) {
          (*(code *)PTR_FUN_7100af36a0)(lVar2);
          return iVar1;
        }
        if (local_8 == lVar4) {
          auVar5 = FUN_71006b7420();
          *(undefined1 (*) [16])(param_1 + 0xf0) = auVar5;
          (*(code *)PTR_FUN_7100af36a0)(lVar2);
        }
        else {
          param_1[0xef] = lVar4;
          param_1[0xed] = lVar2;
          param_1[0xee] = lVar4 - local_8;
        }
        *(undefined4 *)(param_1 + 0xf6) = 0xb;
        do {
          param_2 = FUN_71006d5170(param_1 + 0xe8,1,0);
        } while ((int)param_1[0xf6] != 0 && param_2 == 0);
      }
    }
    else {
      FUN_71006a2e80(param_1,1);
    }
    *puVar3 = 0;
    return param_2;
  }
  return 0;
}



// ===== FUN_71006d38e0 @ 71006d38e0 (size=392) =====

ulong FUN_71006d38e0(long param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  
  *param_2 = 0;
  FUN_71006a2e80(param_1,0);
  *(undefined8 *)(param_1 + 0x790) = 120000;
  *(long *)(param_1 + 0x798) = param_1;
  *(code **)(param_1 + 0x7a0) = FUN_71006d4510;
  *(code **)(param_1 + 0x7a8) = FUN_71006d3490;
  FUN_71006d6e10(param_1 + 0x7c0,&PTR_DAT_7100ae3f68);
  FUN_71006d5350(param_1 + 0x740);
  pcVar4 = *(char **)(param_1 + 0x490);
  *(undefined1 *)(param_1 + 0x7d8) = 1;
  if (pcVar4 != (char *)0x0) {
    while (*pcVar4 != '\0') {
      pcVar7 = pcVar4 + 1;
      pcVar6 = pcVar4;
      if (*pcVar4 == '=') {
LAB_71006d39b0:
        do {
          pcVar6 = pcVar6 + 1;
        } while (*pcVar6 != ';' && *pcVar6 != '\0');
      }
      else {
        do {
          pcVar7 = pcVar6;
          pcVar6 = pcVar7 + 1;
          cVar1 = *pcVar6;
        } while (cVar1 != '=' && cVar1 != '\0');
        pcVar7 = pcVar7 + 2;
        if (cVar1 != ';' && cVar1 != '\0') goto LAB_71006d39b0;
      }
      iVar2 = FUN_71006ca3e0(pcVar4,"AUTH=",5);
      if (iVar2 == 0) {
        return 3;
      }
      uVar3 = FUN_71006d6d40(param_1 + 0x7c0,pcVar7,(long)pcVar6 - (long)pcVar7);
      if (*pcVar6 == ';') {
        pcVar4 = pcVar6 + 1;
        if (uVar3 != 0) {
          return (ulong)uVar3;
        }
      }
      else {
        pcVar4 = pcVar6;
        if (uVar3 != 0) {
          return (ulong)uVar3;
        }
      }
    }
  }
  uVar3 = FUN_71006d3660(param_1);
  if (uVar3 != 0) {
    return (ulong)uVar3;
  }
  *(undefined4 *)(param_1 + 0x7b0) = 1;
  uVar5 = FUN_71006d3350(param_1,param_2);
  return uVar5;
}



// ===== FUN_71006d3a70 @ 71006d3a70 (size=180) =====

undefined8 FUN_71006d3a70(undefined8 param_1,char *param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  
  if (*param_2 == '<') {
    param_2 = param_2 + 1;
  }
  lVar1 = (*(code *)PTR_FUN_7100af36b8)(param_2);
  if (lVar1 != 0) {
    lVar2 = FUN_710081ce00();
    if (*(char *)(lVar1 + lVar2 + -1) == '>') {
      *(undefined1 *)(lVar1 + lVar2 + -1) = 0;
    }
    puVar3 = (undefined1 *)FUN_710080eb40(lVar1,0x40);
    *(undefined1 **)(param_4 + 0x10) = puVar3;
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = 0;
      *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
      FUN_71006c2550(param_1,param_4);
    }
    *param_3 = lVar1;
    return 0;
  }
  return 0x1b;
}



// ===== FUN_71006d3b30 @ 71006d3b30 (size=200) =====

int FUN_71006d3b30(long *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  long local_10;
  undefined8 local_8;
  
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_8 = 0;
  iVar2 = FUN_71006d3a70(param_1,**(undefined8 **)(*(long *)(*param_1 + 0x1d0) + 0x10),&local_28,
                         &uStack_20);
  uVar1 = local_28;
  if (iVar2 == 0) {
    if (local_10 == 0) {
      iVar2 = FUN_71006d5540(param_1 + 0xe8,"RCPT TO:<%s>",local_28);
    }
    else {
      iVar2 = FUN_71006d5540(param_1 + 0xe8,"RCPT TO:<%s@%s>",local_28);
    }
    FUN_71006c25a0(&uStack_20);
    (*(code *)PTR_FUN_7100af36a0)(uVar1);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0xf6) = 9;
    }
  }
  return iVar2;
}



// ===== FUN_71006d3c00 @ 71006d3c00 (size=552) =====

int FUN_71006d3c00(long *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_18;
  char *local_10;
  undefined8 local_8;
  
  pcVar5 = *(char **)(*(long *)(*param_1 + 0x1d0) + 8);
  puVar1 = *(undefined8 **)(*(long *)(*param_1 + 0x1d0) + 0x10);
  if (puVar1 == (undefined8 *)0x0) {
    if (pcVar5 == (char *)0x0) {
      pcVar4 = "HELP";
    }
    else {
      pcVar4 = "HELP";
      if (*pcVar5 != '\0') {
        pcVar4 = pcVar5;
      }
    }
    iVar3 = FUN_71006d5540(param_1 + 0xe8,"%s",pcVar4);
    goto LAB_71006d3cc0;
  }
  uVar7 = *puVar1;
  if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
    if (*(char *)((long)param_1 + 0x7e2) == '\0') {
      pcVar4 = "";
    }
    else {
      iVar3 = FUN_710080aec0(pcVar5,&DAT_7100849c00);
      pcVar4 = "";
      if (iVar3 == 0) {
        pcVar4 = " SMTPUTF8";
      }
    }
    iVar3 = FUN_71006d5540(param_1 + 0xe8,"%s %s%s",pcVar5,uVar7,pcVar4);
    goto LAB_71006d3cc0;
  }
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  local_10 = (char *)0x0;
  local_8 = 0;
  iVar3 = FUN_71006d3a70(param_1,uVar7,&local_28,&uStack_20);
  uVar7 = local_28;
  if (iVar3 != 0) {
    return iVar3;
  }
  if (*(char *)((long)param_1 + 0x7e2) == '\0') {
    if (local_10 == (char *)0x0) {
      pcVar5 = "";
      pcVar4 = pcVar5;
      pcVar6 = pcVar5;
    }
    else {
      pcVar5 = "@";
      pcVar4 = local_10;
      pcVar6 = "";
    }
  }
  else {
    if ((local_18 == 0) && (cVar2 = FUN_71006c2520(local_28), cVar2 != '\0')) {
      cVar2 = FUN_71006c2520(local_10);
      if (local_10 == (char *)0x0) {
        pcVar5 = "";
        pcVar4 = pcVar5;
      }
      else {
        pcVar5 = "@";
        pcVar4 = local_10;
      }
      pcVar6 = "";
      if (cVar2 != '\0') goto LAB_71006d3d5c;
    }
    else {
      pcVar5 = "@";
      pcVar4 = local_10;
      if (local_10 == (char *)0x0) {
        pcVar5 = "";
        pcVar4 = pcVar5;
      }
    }
    pcVar6 = " SMTPUTF8";
  }
LAB_71006d3d5c:
  iVar3 = FUN_71006d5540(param_1 + 0xe8,"VRFY %s%s%s%s",uVar7,pcVar5,pcVar4,pcVar6);
  FUN_71006c25a0(&uStack_20);
  (*(code *)PTR_FUN_7100af36a0)(uVar7);
LAB_71006d3cc0:
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0xf6) = 7;
  }
  return iVar3;
}



// ===== FUN_71006d3e30 @ 71006d3e30 (size=1492) =====

int FUN_71006d3e30(long *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  long lVar16;
  undefined8 *puVar17;
  char *pcVar18;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_18;
  long local_10;
  undefined8 local_8;
  
  lVar16 = *param_1;
  *param_2 = '\0';
  if (*(long *)(lVar16 + 0xc50) != 0) {
    iVar4 = FUN_710069f7f0(lVar16,*(long *)(lVar16 + 0xc50),0,*(long *)(lVar16 + 0x1d0) + 8,0,1);
    if (iVar4 != 0) {
      return iVar4;
    }
    lVar16 = *param_1;
  }
  *(undefined8 *)(lVar16 + 0xd8) = 0xffffffffffffffff;
  FUN_71006b8fd0(lVar16,0);
  FUN_71006b8e90(lVar16,0);
  FUN_71006b9010(lVar16,0xffffffffffffffff);
  FUN_71006b8fe0(lVar16,0xffffffffffffffff);
  lVar16 = *param_1;
  puVar5 = *(undefined4 **)(lVar16 + 0x1d0);
  uVar10 = (uint)*(undefined8 *)(lVar16 + 0xf60);
  if ((uVar10 >> 0x1c & 1) != 0) {
    *puVar5 = 1;
  }
  lVar11 = *(long *)(lVar16 + 0xea8);
  *param_2 = '\0';
  *(undefined1 *)(puVar5 + 6) = 0;
  puVar5[7] = 0;
  *(undefined8 *)(puVar5 + 8) = 2;
  *(long *)(puVar5 + 4) = lVar11;
  *(undefined1 *)(puVar5 + 10) = 1;
  if ((((uVar10 >> 0x1d & 1) == 0) && (*(int *)(lVar16 + 0x820) == 0)) || (lVar11 == 0)) {
    iVar4 = FUN_71006d3c00(param_1);
    if (iVar4 != 0) {
      return iVar4;
    }
    goto LAB_71006d4048;
  }
  if (*(long *)(lVar16 + 0xdf8) == 0) {
    bVar3 = 0;
    pcVar6 = (char *)(*(code *)PTR_FUN_7100af36b8)(&DAT_7100849c20);
  }
  else {
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    local_10 = 0;
    local_8 = 0;
    iVar4 = FUN_71006d3a70(param_1,*(long *)(lVar16 + 0xdf8),&local_28,&uStack_20);
    uVar9 = local_28;
    if (iVar4 != 0) {
      return iVar4;
    }
    bVar3 = *(byte *)((long)param_1 + 0x7e2);
    if (((bVar3 != 0) && (local_18 == 0)) && (cVar2 = FUN_71006c2520(local_28), cVar2 != '\0')) {
      bVar3 = FUN_71006c2520(local_10);
      bVar3 = bVar3 ^ 1;
    }
    if (local_10 == 0) {
      pcVar6 = (char *)FUN_71006a1060("<%s>",uVar9);
    }
    else {
      pcVar6 = (char *)FUN_71006a1060("<%s@%s>",uVar9);
      FUN_71006c25a0(&uStack_20);
    }
    (*(code *)PTR_FUN_7100af36a0)(uVar9);
  }
  if (pcVar6 == (char *)0x0) {
    return 0x1b;
  }
  pcVar18 = *(char **)(lVar16 + 0xe00);
  if (pcVar18 != (char *)0x0) {
    if (*(int *)((long)param_1 + 0x7d4) != 0) {
      if (*pcVar18 == '\0') {
        pcVar18 = (char *)(*(code *)PTR_FUN_7100af36b8)(&DAT_7100849c20);
LAB_71006d3ffc:
        pcVar7 = pcVar6;
        if (pcVar18 != (char *)0x0) goto LAB_71006d40e0;
      }
      else {
        local_28 = 0;
        uStack_20 = 0;
        local_18 = 0;
        local_10 = 0;
        local_8 = 0;
        iVar4 = FUN_71006d3a70(param_1,pcVar18,&local_28,&uStack_20);
        uVar9 = local_28;
        if (iVar4 != 0) {
          (*(code *)PTR_FUN_7100af36a0)(pcVar6);
          return iVar4;
        }
        if (bVar3 == 0) {
          bVar3 = *(byte *)((long)param_1 + 0x7e2);
          if (bVar3 != 0) {
            if ((local_18 != 0) || (cVar2 = FUN_71006c2520(local_28), cVar2 == '\0'))
            goto LAB_71006d4264;
            bVar3 = FUN_71006c2520(local_10);
            bVar3 = bVar3 ^ 1;
          }
        }
        else {
LAB_71006d4264:
          bVar3 = 1;
        }
        if (local_10 == 0) {
          pcVar18 = (char *)FUN_71006a1060("<%s>",uVar9);
          (*(code *)PTR_FUN_7100af36a0)(uVar9);
          goto LAB_71006d3ffc;
        }
        (*(code *)PTR_FUN_7100af36a0)(pcVar6);
        pcVar7 = (char *)FUN_71006a1060("<%s@%s>",uVar9,local_10);
        FUN_71006c25a0(&uStack_20);
        (*(code *)PTR_FUN_7100af36a0)(uVar9);
        if (pcVar7 == (char *)0x0) {
          return 0x1b;
        }
      }
      iVar4 = 0x1b;
      goto LAB_71006d4010;
    }
    pcVar18 = (char *)0x0;
  }
LAB_71006d40e0:
  pcVar7 = pcVar18;
  if (*(int *)(lVar16 + 0x820) == 0) {
LAB_71006d40e8:
    if (*(char *)((long)param_1 + 0x7e1) == '\0') {
      pcVar18 = (char *)0x0;
    }
    else {
      pcVar18 = (char *)0x0;
      if ((0 < *(long *)(lVar16 + 0x15a0)) &&
         (pcVar18 = (char *)FUN_71006a1060("%ld"), pcVar18 == (char *)0x0)) {
        iVar4 = 0x1b;
        goto LAB_71006d41f8;
      }
    }
    if (((*(char *)((long)param_1 + 0x7e2) != '\0') && (bVar3 == 0)) &&
       (puVar17 = *(undefined8 **)(*(long *)(lVar16 + 0x1d0) + 0x10), puVar17 != (undefined8 *)0x0))
    {
      do {
        bVar3 = FUN_71006c2520(*puVar17);
        puVar17 = (undefined8 *)puVar17[1];
      } while (puVar17 != (undefined8 *)0x0 && bVar3 != 0);
      bVar3 = bVar3 ^ 1;
    }
    if (pcVar7 == (char *)0x0) {
      pcVar12 = "";
      pcVar13 = pcVar12;
    }
    else {
      pcVar12 = " AUTH=";
      pcVar13 = pcVar7;
    }
    if (pcVar18 == (char *)0x0) {
      pcVar14 = "";
      pcVar15 = pcVar14;
    }
    else {
      pcVar14 = " SIZE=";
      pcVar15 = pcVar18;
    }
    pcVar1 = " SMTPUTF8";
    if (bVar3 == 0) {
      pcVar1 = "";
    }
    iVar4 = FUN_71006d5540(param_1 + 0xe8,"MAIL FROM:%s%s%s%s%s%s",pcVar6,pcVar12,pcVar13,pcVar14,
                           pcVar15,pcVar1);
    (*(code *)PTR_FUN_7100af36a0)(pcVar6);
    (*(code *)PTR_FUN_7100af36a0)(pcVar7);
    (*(code *)PTR_FUN_7100af36a0)(pcVar18);
    if (iVar4 != 0) {
      return iVar4;
    }
    *(undefined4 *)(param_1 + 0xf6) = 8;
LAB_71006d4048:
    iVar4 = FUN_71006d3350(param_1,param_2);
    if (((iVar4 == 0) && (*param_2 != '\0')) && (**(int **)(*param_1 + 0x1d0) != 0)) {
      FUN_71006ca160(*param_1,0xffffffff,0xffffffffffffffff,0,0xffffffff);
      return 0;
    }
    return iVar4;
  }
  lVar11 = lVar16 + 0x808;
  *(uint *)(lVar16 + 0x888) = *(uint *)(lVar16 + 0x888) & 0xfffffffd;
  FUN_71006ab6b0(lVar11,*(undefined8 *)(lVar16 + 0x7f0),0);
  iVar4 = FUN_71006abd60(lVar11,0,0,0);
  if ((iVar4 == 0) &&
     (((lVar8 = FUN_71006c84d0(param_1,"Mime-Version"), lVar8 != 0 ||
       (iVar4 = FUN_71006abbc0(lVar16 + 0x858,"Mime-Version: 1.0"), iVar4 == 0)) &&
      (iVar4 = FUN_71006ab9a0(lVar11), iVar4 == 0)))) {
    uVar9 = FUN_71006aba30(lVar11);
    *(undefined8 *)(lVar16 + 0x15a0) = uVar9;
    *(long *)(lVar16 + 0x15b8) = lVar11;
    *(code **)(lVar16 + 0x15b0) = FUN_71006ab950;
    goto LAB_71006d40e8;
  }
LAB_71006d41f8:
  (*(code *)PTR_FUN_7100af36a0)(pcVar6);
LAB_71006d4010:
  (*(code *)PTR_FUN_7100af36a0)(pcVar7);
  return iVar4;
}



// ===== FUN_71006d4410 @ 71006d4410 (size=88) =====

undefined4 FUN_71006d4410(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  
  puVar1 = PTR_FUN_7100af3698;
  lVar4 = *param_1;
  *(byte *)((long)param_1 + 0x8c4) = *(byte *)((long)param_1 + 0x8c4) & 0xfe;
  lVar2 = (*(code *)puVar1)(0x30,1);
  uVar3 = 0x1b;
  if (lVar2 != 0) {
    uVar3 = 0;
  }
  *(long *)(lVar4 + 0x1d0) = lVar2;
  return uVar3;
}



// ===== FUN_71006d4470 @ 71006d4470 (size=152) =====

void FUN_71006d4470(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_71006b1910(param_1,0,param_1 + 0x7b4);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x7b0) != 5) {
      *(undefined4 *)(param_1 + 0x7b0) = 5;
    }
    if (*(char *)(param_1 + 0x7b4) != '\0') {
      *(byte *)(param_1 + 0x8c4) = *(byte *)(param_1 + 0x8c4) | 1;
      *(undefined ***)(param_1 + 0x648) = &PTR_s_SMTPS_7100ae3ee0;
      *(undefined4 *)(param_1 + 0x7cc) = 0;
      *(undefined4 *)(param_1 + 0x7d4) = 0;
      *(undefined1 *)(param_1 + 0x7e0) = 0;
      *(undefined1 *)(param_1 + 0x7e3) = 0;
      iVar1 = FUN_71006d5540(param_1 + 0x740,"EHLO %s",*(undefined8 *)(param_1 + 0x7b8));
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x7b0) = 2;
      }
    }
  }
  return;
}



// ===== FUN_71006d4510 @ 71006d4510 (size=2036) =====

int FUN_71006d4510(long *param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  byte *pbVar16;
  long lVar17;
  int local_14;
  undefined8 local_10;
  int local_8;
  undefined4 uStack_4;
  
  plVar1 = param_1 + 0xe8;
  local_10 = 0;
  lVar13 = param_1[0x9b];
  lVar14 = *param_1;
  if ((int)param_1[0xf6] == 5) {
    iVar4 = FUN_71006d4470();
  }
  else {
    if (param_1[0xee] == 0) {
      do {
        iVar3 = FUN_71006d55b0((int)lVar13,plVar1,&local_14,&local_10);
        iVar4 = local_14;
        if (iVar3 != 0) {
          return iVar3;
        }
        uVar5 = *(uint *)(param_1 + 0xf6);
        if (uVar5 == 0xc) {
          if (local_14 == 0) {
            return 0;
          }
LAB_71006d469c:
          *(undefined4 *)(param_1 + 0xf6) = 0;
          return 0;
        }
        if ((local_14 != 1) && (*(int *)(lVar14 + 0x1680) = local_14, local_14 == 0)) {
          return 0;
        }
        if (uVar5 == 6) {
          lVar6 = *param_1;
          iVar4 = FUN_71006d7220(param_1 + 0xf8,param_1,local_14,&local_8);
          if (iVar4 != 0) {
            return iVar4;
          }
          if (local_8 == 0) {
            FUN_71006c0a00(lVar6,"Authentication cancelled");
            return 0x43;
          }
          if (local_8 == 2) goto LAB_71006d469c;
LAB_71006d4828:
          if ((int)param_1[0xf6] == 0) {
            return 0;
          }
LAB_71006d4830:
          cVar2 = FUN_71006d59f0(plVar1);
        }
        else {
          if (6 < uVar5) {
            if (uVar5 != 9) {
              if (9 < uVar5) {
                if (uVar5 == 10) {
                  lVar13 = *param_1;
                  if (local_14 == 0x162) {
                    FUN_71006b9010(lVar13,*(undefined8 *)(lVar13 + 0x15a0));
                    FUN_71006ca160(lVar13,0xffffffff,0xffffffffffffffff,0,0);
                    *(undefined4 *)(param_1 + 0xf6) = 0;
                    return 0;
                  }
                  FUN_71006c0a00(lVar13,"DATA failed: %d",local_14);
                  return 0x37;
                }
                if ((uVar5 == 0xb) && (local_14 != 0xfa)) {
                  *(undefined4 *)(param_1 + 0xf6) = 0;
                  return 0x38;
                }
                goto LAB_71006d469c;
              }
              if (uVar5 != 7) {
                if (uVar5 != 8) goto LAB_71006d469c;
                if (99 < local_14 - 200U) {
                  FUN_71006c0a00(*param_1,"MAIL failed: %d",local_14);
                  return 0x37;
                }
                goto LAB_71006d481c;
              }
              lVar17 = *param_1;
              lVar11 = *(long *)(lVar17 + 0x1150);
              lVar15 = *(long *)(lVar17 + 0x1d0);
              lVar6 = FUN_710081ce00(lVar11);
              lVar8 = *(long *)(lVar15 + 0x10);
              if (lVar8 == 0) {
                if (99 < iVar4 - 200U && iVar4 != 1) goto LAB_71006d4780;
              }
              else if ((99 < iVar4 - 200U) && (iVar4 != 0x229 && iVar4 != 1)) {
LAB_71006d4780:
                FUN_71006c0a00(lVar17,"Command failed: %d",iVar4);
                return 0x38;
              }
              if (((uint)*(undefined8 *)(lVar17 + 0xf60) >> 0x1c & 1) == 0) {
                *(undefined1 *)(lVar11 + lVar6) = 10;
                iVar3 = FUN_71006c0c00(param_1,1,lVar11,lVar6 + 1);
                *(undefined1 *)(lVar11 + lVar6) = 0;
                if (iVar4 != 1) {
                  if ((*(long *)(lVar15 + 0x10) != 0) &&
                     (lVar6 = *(long *)(*(long *)(lVar15 + 0x10) + 8),
                     *(long *)(lVar15 + 0x10) = lVar6, lVar6 != 0)) goto LAB_71006d4a0c;
                  *(undefined4 *)(param_1 + 0xf6) = 0;
                }
              }
              else {
                if (iVar4 == 1) goto LAB_71006d4830;
                if ((lVar8 == 0) ||
                   (lVar6 = *(long *)(lVar8 + 8), *(long *)(lVar15 + 0x10) = lVar6, lVar6 == 0))
                goto LAB_71006d469c;
LAB_71006d4a0c:
                iVar3 = FUN_71006d3c00(param_1);
              }
LAB_71006d4824:
              if (iVar3 != 0) {
                return iVar3;
              }
              goto LAB_71006d4828;
            }
            lVar6 = *param_1;
            lVar8 = *(long *)(lVar6 + 0x1d0);
            if (local_14 - 200U < 100) {
              *(undefined1 *)(lVar8 + 0x18) = 1;
            }
            else {
              if ((*(ulong *)(lVar6 + 0xf60) >> 0x3a & 1) == 0) {
                *(int *)(lVar8 + 0x1c) = local_14;
                FUN_71006c0a00(lVar6,"RCPT failed: %d",local_14);
                return 0x37;
              }
              *(int *)(lVar8 + 0x1c) = local_14;
            }
            lVar11 = *(long *)(*(long *)(lVar8 + 0x10) + 8);
            *(long *)(lVar8 + 0x10) = lVar11;
            if (lVar11 != 0) {
LAB_71006d481c:
              iVar3 = FUN_71006d3b30(param_1);
              goto LAB_71006d4824;
            }
            if (*(char *)(lVar8 + 0x18) == '\0') {
              FUN_71006c0a00(lVar6,"RCPT failed: %d (last error)",*(undefined4 *)(lVar8 + 0x1c));
              return 0x37;
            }
            iVar4 = FUN_71006d5540(plVar1,"%s",&DAT_7100849d30);
            if (iVar4 != 0) {
              return iVar4;
            }
            *(undefined4 *)(param_1 + 0xf6) = 10;
            goto LAB_71006d4830;
          }
          if (uVar5 == 3) {
            if (99 < local_14 - 200U) {
              FUN_71006c0a00(*param_1,"Remote access denied: %d",local_14);
              return 9;
            }
            goto LAB_71006d469c;
          }
          if (3 < uVar5) {
            if (uVar5 != 4) goto LAB_71006d469c;
            if (local_14 == 0xdc) {
              iVar3 = FUN_71006d4470(param_1);
              goto LAB_71006d4824;
            }
            if (*(int *)(*param_1 + 0xc04) != 1) {
              FUN_71006c0a00(*param_1,"STARTTLS denied, code %d",local_14);
              return 0x40;
            }
LAB_71006d4a18:
            iVar3 = FUN_71006d35a0(param_1);
            goto LAB_71006d4824;
          }
          if (uVar5 != 1) {
            if (uVar5 != 2) goto LAB_71006d469c;
            lVar8 = *param_1;
            lVar6 = *(long *)(lVar8 + 0x1150);
            uVar7 = FUN_710081ce00(lVar6);
            if (99 < iVar4 - 200U && iVar4 != 1) {
              if ((1 < *(uint *)(lVar8 + 0xc04)) && ((*(byte *)(param_1 + 0xa3) & 1) == 0)) {
                FUN_71006c0a00(lVar8,"Remote access denied: %d",iVar4);
                return 9;
              }
              *(undefined4 *)((long)param_1 + 0x7d4) = 0;
              iVar4 = FUN_71006d5540(plVar1,"HELO %s",param_1[0xf7]);
              if (iVar4 != 0) {
                return iVar4;
              }
              *(undefined4 *)(param_1 + 0xf6) = 3;
              goto LAB_71006d4830;
            }
            if (uVar7 < 4) {
              FUN_71006c0a00(lVar8,"Unexpectedly short EHLO response");
              return 8;
            }
            uVar9 = uVar7 - 4;
            if (uVar9 < 8) {
              if ((3 < uVar9) && (*(int *)(lVar6 + 4) == 0x455a4953)) {
LAB_71006d4c24:
                *(undefined1 *)((long)param_1 + 0x7e1) = 1;
                goto LAB_71006d4934;
              }
              if ((uVar9 < 5) ||
                 ((*(int *)(lVar6 + 4) != 0x48545541 || (*(char *)(lVar6 + 8) != ' '))))
              goto LAB_71006d4934;
              *(undefined1 *)((long)param_1 + 0x7e3) = 1;
              if (uVar7 != 9) {
LAB_71006d4bb4:
                uVar7 = uVar7 - 9;
                pbVar16 = (byte *)(lVar6 + 9);
                do {
                  while ((uVar9 = (ulong)*pbVar16, 0x20 < *pbVar16 ||
                         ((-0x100002601 >> (uVar9 & 0x3f) & 1U) != 0))) {
                    uVar10 = 0;
                    while (uVar5 = (uint)uVar9, uVar5 < 0xb) {
                      if (8 < uVar5) goto LAB_71006d4c6c;
LAB_71006d4c40:
                      uVar10 = uVar10 + 1;
                      pbVar12 = pbVar16 + uVar10;
                      if ((uVar7 <= uVar10) ||
                         (uVar9 = (ulong)pbVar16[uVar10], pbVar16[uVar10] == 0x20))
                      goto LAB_71006d4c70;
                    }
                    if (uVar5 != 0xd) goto LAB_71006d4c40;
LAB_71006d4c6c:
                    pbVar12 = pbVar16 + uVar10;
LAB_71006d4c70:
                    uVar5 = FUN_71006d6c40(pbVar16);
                    if ((uVar5 != 0) && (uVar10 == CONCAT44(uStack_4,local_8))) {
                      *(uint *)((long)param_1 + 0x7cc) = *(uint *)((long)param_1 + 0x7cc) | uVar5;
                    }
                    uVar7 = uVar7 - uVar10;
                    pbVar16 = pbVar12;
                    if (uVar7 == 0) goto LAB_71006d4ab0;
                  }
                  uVar7 = uVar7 - 1;
                  pbVar16 = pbVar16 + 1;
                } while (uVar7 != 0);
              }
LAB_71006d4ab0:
              if (iVar4 == 1) goto LAB_71006d4828;
            }
            else {
              if (*(long *)(lVar6 + 4) == 0x534c545452415453) {
                *(undefined1 *)(param_1 + 0xfc) = 1;
              }
              else {
                if (*(int *)(lVar6 + 4) == 0x455a4953) goto LAB_71006d4c24;
                if (*(long *)(lVar6 + 4) == 0x3846545550544d53) {
                  *(undefined1 *)((long)param_1 + 0x7e2) = 1;
                }
                else if ((*(int *)(lVar6 + 4) == 0x48545541) && (*(char *)(lVar6 + 8) == ' ')) {
                  *(undefined1 *)((long)param_1 + 0x7e3) = 1;
                  goto LAB_71006d4bb4;
                }
              }
LAB_71006d4934:
              if (iVar4 == 1) goto LAB_71006d4830;
            }
            if ((*(int *)(lVar8 + 0xc04) != 0) && ((*(byte *)(param_1 + 0xa3) & 1) == 0)) {
              if ((char)param_1[0xfc] != '\0') {
                iVar4 = FUN_71006d5540(plVar1,"%s","STARTTLS");
                if (iVar4 != 0) {
                  return iVar4;
                }
                *(undefined4 *)(param_1 + 0xf6) = 4;
                goto LAB_71006d4830;
              }
              if (*(int *)(lVar8 + 0xc04) != 1) {
                FUN_71006c0a00(lVar8,"STARTTLS not supported.");
                return 0x40;
              }
            }
            goto LAB_71006d4a18;
          }
          if (99 < local_14 - 200U) {
            FUN_71006c0a00(*param_1,"Got unexpected smtp-server response: %d",local_14);
            return 8;
          }
          *(undefined4 *)((long)param_1 + 0x7cc) = 0;
          *(undefined4 *)((long)param_1 + 0x7d4) = 0;
          *(undefined1 *)(param_1 + 0xfc) = 0;
          *(undefined1 *)((long)param_1 + 0x7e3) = 0;
          iVar4 = FUN_71006d5540(plVar1,"EHLO %s",param_1[0xf7]);
          if (iVar4 != 0) {
            return iVar4;
          }
          *(undefined4 *)(param_1 + 0xf6) = 2;
          cVar2 = FUN_71006d59f0(plVar1);
        }
        if (cVar2 == '\0') {
          return 0;
        }
      } while( true );
    }
    iVar4 = FUN_71006d5910(plVar1);
  }
  return iVar4;
}



// ===== FUN_71006d4dd0 @ 71006d4dd0 (size=188) =====

ulong FUN_71006d4dd0(long *param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  ulong uVar3;
  
  if (((*(uint *)(param_1[0xc9] + 0x84) & 1) != 0) && (*(char *)((long)param_1 + 0x7b4) == '\0')) {
    uVar3 = FUN_71006b1910(param_1,0,(long)param_1 + 0x7b4);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (*(char *)((long)param_1 + 0x7b4) == '\0') {
      cVar2 = *param_2;
      goto LAB_71006d4e28;
    }
  }
  uVar3 = FUN_71006d5170(param_1 + 0xe8,0,0);
  cVar2 = (int)param_1[0xf6] == 0;
  *param_2 = cVar2;
  if ((int)uVar3 != 0) {
    return uVar3;
  }
LAB_71006d4e28:
  uVar3 = 0;
  if (cVar2 != '\0') {
    uVar1 = **(uint **)(*param_1 + 0x1d0);
    uVar3 = (ulong)uVar1;
    if (uVar1 != 0) {
      FUN_71006ca160(*param_1,0xffffffff,0xffffffffffffffff,0,0xffffffff);
      uVar3 = 0;
    }
  }
  return uVar3;
}



// ===== FUN_71006d4e90 @ 71006d4e90 (size=564) =====

undefined8 FUN_71006d4e90(long *param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long local_8;
  
  lVar13 = *param_1;
  lVar6 = *(long *)(lVar13 + 0x11d8);
  lVar12 = *(long *)(lVar13 + 0x1d0);
  if ((lVar6 == 0) || (((uint)*(undefined8 *)(lVar13 + 0xf60) >> 6 & 1) != 0)) {
    local_8 = (*(code *)PTR_FUN_7100af36a8)(*(long *)(lVar13 + 3000) << 1);
    if (local_8 == 0) {
      FUN_71006c0a00(lVar13,"Failed to alloc scratch buffer!");
      return 0x1b;
    }
    lVar10 = *(long *)(lVar12 + 0x20);
    lVar7 = lVar6;
    lVar6 = local_8;
  }
  else {
    lVar7 = 0;
    local_8 = 0;
    lVar10 = *(long *)(lVar12 + 0x20);
  }
  if (param_2 < 1) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    lVar5 = 0;
    lVar11 = lVar10;
    do {
      lVar3 = *(long *)(lVar13 + 0x1c8);
      cVar4 = *(char *)(lVar3 + lVar5);
      if ("\r\n.\r\n"[lVar10] == cVar4) {
        uVar2 = lVar10 + 1;
        *(ulong *)(lVar12 + 0x20) = uVar2;
        *(bool *)(lVar12 + 0x28) = uVar2 == 2 || uVar2 == 5;
        if (uVar2 != 3) goto LAB_71006d5040;
        FUN_710080f900(lVar6 + lVar8,&UNK_7100849d58 + lVar11,4 - lVar11);
        lVar8 = (lVar8 - lVar11) + 4;
        lVar10 = 0;
        *(undefined8 *)(lVar12 + 0x20) = 0;
        lVar11 = 0;
      }
      else {
        if (lVar10 == 0) {
LAB_71006d4f30:
          *(char *)(lVar6 + lVar8) = cVar4;
          lVar8 = lVar8 + 1;
        }
        else {
          lVar9 = lVar8 - lVar11;
          FUN_710080f900(lVar6 + lVar8,"\r\n.\r\n" + lVar11,lVar10 - lVar11);
          lVar3 = *(long *)(lVar13 + 0x1c8);
          lVar11 = 0;
          cVar4 = *(char *)(lVar3 + lVar5);
          *(undefined1 *)(lVar12 + 0x28) = 0;
          lVar8 = lVar9 + *(long *)(lVar12 + 0x20);
          uVar2 = (ulong)(cVar4 == '\r');
          *(ulong *)(lVar12 + 0x20) = uVar2;
LAB_71006d5040:
          if (uVar2 == 0) {
            cVar4 = *(char *)(lVar3 + lVar5);
            goto LAB_71006d4f30;
          }
        }
        lVar10 = *(long *)(lVar12 + 0x20);
      }
      lVar5 = lVar5 + 1;
    } while (param_2 != lVar5);
    if (lVar11 != lVar10) {
      FUN_710080f900(lVar6 + lVar8,"\r\n.\r\n" + lVar11,lVar10 - lVar11);
      lVar8 = (lVar8 - lVar11) + *(long *)(lVar12 + 0x20);
    }
  }
  puVar1 = PTR_FUN_7100af36a0;
  if (lVar8 == param_2) {
    (*(code *)PTR_FUN_7100af36a0)(local_8);
    return 0;
  }
  *(long *)(lVar13 + 0x1c8) = lVar6;
  *(long *)(lVar13 + 0x11d8) = lVar6;
  (*(code *)puVar1)(lVar7);
  *(long *)(lVar13 + 0x1c0) = lVar8;
  return 0;
}



// ===== FUN_71006d50d0 @ 71006d50d0 (size=156) =====

long FUN_71006d50d0(long param_1,char param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 auVar5 [12];
  
  plVar4 = *(long **)(param_1 + 0x58);
  lVar3 = *plVar4;
  lVar2 = *(long *)(lVar3 + 0x7a8);
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0x50);
  }
  auVar5 = FUN_71006b7420();
  lVar1 = FUN_71006b7490(auVar5._0_8_,auVar5._8_4_,*(undefined8 *)(param_1 + 0x40),
                         *(undefined8 *)(param_1 + 0x48));
  lVar3 = *(long *)(lVar3 + 0x788);
  lVar2 = lVar2 - lVar1;
  if (lVar3 == 0 || param_2 != '\0') {
    return lVar2;
  }
  auVar5 = FUN_71006b7420();
  lVar1 = FUN_71006b7490(auVar5._0_8_,auVar5._8_4_,plVar4[0x95],plVar4[0x96]);
  lVar3 = lVar3 - lVar1;
  if (lVar3 < lVar2) {
    lVar2 = lVar3;
  }
  return lVar2;
}



// ===== FUN_71006d5170 @ 71006d5170 (size=476) =====

undefined8 FUN_71006d5170(long *param_1,char param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  
  puVar7 = (undefined8 *)param_1[0xb];
  uVar6 = *(undefined4 *)(puVar7 + 0x9b);
  lVar4 = FUN_71006d50d0(param_1,param_3);
  uVar8 = *puVar7;
  if (lVar4 < 1) {
    FUN_71006c0a00(uVar8,"server response timeout");
    return 0x1c;
  }
  if (param_2 == '\0') {
    cVar1 = thunk_FUN_71006b2cc0(puVar7,0);
    if (cVar1 != '\0') goto LAB_71006d523c;
    if (param_1[6] == 0) {
      lVar4 = 0;
      goto LAB_71006d51d8;
    }
    iVar2 = FUN_71006a6d40(0xffffffff,0xffffffff,uVar6,0);
  }
  else {
    if (999 < lVar4) {
      lVar4 = 1000;
    }
    cVar1 = thunk_FUN_71006b2cc0(puVar7,0);
    if (cVar1 == '\0') {
      if (param_1[6] == 0) {
LAB_71006d51d8:
        if (((*param_1 != 0) && ((ulong)param_1[2] < (ulong)param_1[1])) ||
           (cVar1 = thunk_FUN_71006b2cc0(puVar7,0), cVar1 != '\0')) {
          if (param_2 == '\0') goto LAB_71006d523c;
          goto LAB_71006d5260;
        }
        if (param_1[6] == 0) {
          uVar9 = uVar6;
          uVar6 = 0xffffffff;
        }
        else {
          uVar9 = 0xffffffff;
        }
        iVar2 = FUN_71006a6d40(uVar9,0xffffffff,uVar6,lVar4);
        if (param_2 == '\0') goto LAB_71006d52a4;
      }
      else {
        iVar2 = FUN_71006a6d40(0xffffffff,0xffffffff,uVar6,lVar4);
      }
    }
    else {
LAB_71006d5260:
      iVar2 = 1;
    }
    iVar3 = FUN_71006b9040(puVar7);
    if (iVar3 != 0) {
      return 0x2a;
    }
    auVar10 = FUN_71006b7420(0x2a);
    uVar5 = FUN_71006c59d0(uVar8,auVar10._0_8_,auVar10._8_8_);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
LAB_71006d52a4:
  if (iVar2 == -1) {
    FUN_71006c0a00(uVar8,"select/poll error");
    return 0x1b;
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_71006d523c:
                    /* WARNING: Could not recover jumptable at 0x0071006d5258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (*(code *)param_1[0xc])(puVar7);
  return uVar8;
}



// ===== FUN_71006d5350 @ 71006d5350 (size=60) =====

void FUN_71006d5350(long param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = *(undefined8 *)(**(long **)(param_1 + 0x58) + 0x1150);
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  auVar2 = FUN_71006b7420();
  *(undefined1 (*) [16])(param_1 + 0x40) = auVar2;
  return;
}



// ===== FUN_71006d5390 @ 71006d5390 (size=420) =====

int FUN_71006d5390(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  long local_8;
  
  plVar5 = *(long **)(param_1 + 0x58);
  if (plVar5 == (long *)0x0) {
    return 0x37;
  }
  lVar2 = FUN_71006a1060("%s\r\n");
  if (lVar2 != 0) {
    lVar3 = FUN_71006a1180();
    (*(code *)PTR_FUN_7100af36a0)(lVar2);
    if (lVar3 != 0) {
      local_8 = 0;
      lVar2 = FUN_710081ce00(lVar3);
      uVar4 = *(undefined8 *)(**(long **)(param_1 + 0x58) + 0x1150);
      *(undefined1 *)(param_1 + 0x20) = 1;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      auVar6 = FUN_71006b7420();
      *(undefined1 (*) [16])(param_1 + 0x40) = auVar6;
      iVar1 = FUN_71006c0660(plVar5,(int)plVar5[0x9b],lVar3,lVar2,&local_8);
      if (iVar1 != 0) {
        (*(code *)PTR_FUN_7100af36a0)(lVar3);
        return iVar1;
      }
      if (((uint)*(undefined8 *)(*plVar5 + 0xf60) >> 0x1e & 1) != 0) {
        FUN_71006c07e0(*plVar5,2,lVar3,local_8);
      }
      if (local_8 == lVar2) {
        (*(code *)PTR_FUN_7100af36a0)(lVar3);
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        auVar6 = FUN_71006b7420();
        *(undefined1 (*) [16])(param_1 + 0x40) = auVar6;
        return 0;
      }
      *(long *)(param_1 + 0x38) = lVar2;
      *(long *)(param_1 + 0x28) = lVar3;
      *(long *)(param_1 + 0x30) = lVar2 - local_8;
      return 0;
    }
  }
  return 0x1b;
}



// ===== FUN_71006d5540 @ 71006d5540 (size=108) =====

void FUN_71006d5540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  puStack_e0 = &local_30;
  uStack_d8 = 0xffffff80ffffffd0;
  local_f0 = (undefined1 *)register0x00000008;
  puStack_e8 = (undefined1 *)register0x00000008;
  local_30 = param_3;
  uStack_28 = param_4;
  local_20 = param_5;
  uStack_18 = param_6;
  local_10 = param_7;
  uStack_8 = param_8;
  FUN_71006d5390(param_1,param_2,&local_f0);
  return;
}



// ===== FUN_71006d55b0 @ 71006d55b0 (size=820) =====

int FUN_71006d55b0(undefined4 param_1,long *param_2,undefined4 *param_3,long *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  char *pcVar11;
  long *plVar12;
  long lVar13;
  long local_8;
  
  iVar3 = 0;
  plVar12 = (long *)param_2[0xb];
  lVar13 = *plVar12;
  bVar1 = true;
  lVar9 = param_2[3];
  pcVar10 = *(char **)(lVar13 + 0x1150);
  *param_3 = 0;
  *param_4 = 0;
  uVar5 = param_2[2];
  uVar7 = *(ulong *)(lVar13 + 0xbb0);
  lVar9 = (long)(pcVar10 + uVar5) - lVar9;
  pcVar11 = pcVar10 + uVar5;
LAB_71006d5624:
  while( true ) {
    if ((uVar7 <= uVar5) || (bVar1 = (bool)(bVar1 & iVar3 == 0), !bVar1)) {
      *(undefined1 *)(param_2 + 4) = 0;
      return iVar3;
    }
    if (*param_2 != 0) break;
    iVar3 = FUN_71006c0760(plVar12,param_1,pcVar11,uVar7 - uVar5);
    if (iVar3 == 0x51) {
      return 0;
    }
    if (iVar3 == 0) goto joined_r0x0071006d56bc;
    bVar1 = false;
    uVar5 = param_2[2];
    uVar7 = *(ulong *)(lVar13 + 0xbb0);
  }
  if (pcVar10 + uVar7 + 1 < pcVar11 + param_2[1]) {
    FUN_71006c0a00(lVar13,"cached response data too big to handle");
    return 0x38;
  }
  FUN_710080f900(pcVar11);
  local_8 = param_2[1];
  (*(code *)PTR_FUN_7100af36a0)(*param_2);
  *param_2 = 0;
  param_2[1] = 0;
joined_r0x0071006d56bc:
  if (local_8 < 1) {
    bVar1 = false;
    FUN_71006c0a00(lVar13,"response reading failed");
    iVar3 = 0x38;
    uVar5 = param_2[2];
    uVar7 = *(ulong *)(lVar13 + 0xbb0);
    goto LAB_71006d5624;
  }
  lVar8 = 0;
  lVar4 = param_2[2];
  *(long *)(lVar13 + 0xf8) = *(long *)(lVar13 + 0xf8) + local_8;
  param_2[2] = lVar4 + local_8;
  do {
    pcVar6 = pcVar11 + 1;
    lVar4 = lVar9 + 1;
    lVar9 = lVar4;
    if (*pcVar11 == '\n') {
      if (((uint)*(undefined8 *)(lVar13 + 0xf60) >> 0x1e & 1) != 0) {
        FUN_71006c07e0(lVar13,1,param_2[3],lVar4);
      }
      iVar3 = FUN_71006c0c00(plVar12,2,param_2[3],lVar4);
      lVar9 = 0;
      if (iVar3 != 0) {
        return iVar3;
      }
      cVar2 = (*(code *)param_2[0xd])(plVar12,param_2[3],lVar4,param_3);
      if (cVar2 != '\0') {
        bVar1 = false;
        lVar9 = (long)pcVar11 - param_2[3];
        FUN_710080f900(pcVar10,param_2[3],lVar9);
        pcVar10[lVar9] = '\0';
        param_2[3] = (long)pcVar6;
        *param_4 = param_2[2];
        param_2[2] = 0;
        lVar9 = local_8 - (lVar8 + 1);
        if (lVar9 != 0) goto LAB_71006d586c;
        goto LAB_71006d5890;
      }
      param_2[3] = (long)pcVar6;
    }
    lVar8 = lVar8 + 1;
    pcVar11 = pcVar6;
  } while (lVar8 < local_8);
  uVar7 = *(ulong *)(lVar13 + 0xbb0);
  if ((local_8 == lVar9) && ((long)uVar7 / 2 < lVar9)) {
    FUN_71006c08c0(lVar13,"Excessive server response line length received, %zd bytes. Stripping\n",
                   lVar9);
    lVar9 = 0x28;
LAB_71006d586c:
    param_2[1] = lVar9;
    lVar9 = (*(code *)PTR_FUN_7100af36a8)(lVar9);
    *param_2 = lVar9;
    if (lVar9 == 0) {
      return 0x1b;
    }
    FUN_710080f900(lVar9,param_2[3],param_2[1]);
LAB_71006d5890:
    uVar7 = *(ulong *)(lVar13 + 0xbb0);
  }
  else {
    uVar5 = param_2[2];
    if (uVar5 <= uVar7 >> 1) {
      iVar3 = 0;
      goto LAB_71006d5624;
    }
    if (lVar9 != 0) goto LAB_71006d586c;
  }
  uVar5 = 0;
  param_2[2] = 0;
  param_2[3] = (long)pcVar10;
  iVar3 = 0;
  lVar9 = 0;
  pcVar11 = pcVar10;
  goto LAB_71006d5624;
}



// ===== FUN_71006d58f0 @ 71006d58f0 (size=32) =====

undefined4 FUN_71006d58f0(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x10000;
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar1 = 1;
  }
  *param_2 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x4d8);
  return uVar1;
}



// ===== FUN_71006d5910 @ 71006d5910 (size=148) =====

int FUN_71006d5910(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  long local_8;
  
  iVar1 = FUN_71006c0660(*(long *)(param_1 + 0x58),
                         *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x4d8),
                         *(long *)(param_1 + 0x28) +
                         (*(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x30)),
                         *(long *)(param_1 + 0x30),&local_8);
  if (iVar1 == 0) {
    if (*(long *)(param_1 + 0x30) == local_8) {
      (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      auVar2 = FUN_71006b7420();
      *(undefined1 (*) [16])(param_1 + 0x40) = auVar2;
      return 0;
    }
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) - local_8;
  }
  return iVar1;
}



// ===== FUN_71006d59b0 @ 71006d59b0 (size=56) =====

undefined8 FUN_71006d59b0(undefined8 *param_1)

{
  (*(code *)PTR_FUN_7100af36a0)(*param_1);
  *param_1 = 0;
  return 0;
}



// ===== FUN_71006d59f0 @ 71006d59f0 (size=44) =====

bool FUN_71006d59f0(long *param_1)

{
  bool bVar1;
  
  if (param_1[6] == 0) {
    bVar1 = false;
    if (*param_1 != 0) {
      bVar1 = (ulong)param_1[2] < (ulong)param_1[1];
    }
    return bVar1;
  }
  return false;
}



// ===== FUN_71006d5a30 @ 71006d5a30 (size=76) =====

undefined4 FUN_71006d5a30(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = (*(code *)PTR_FUN_7100af3698)(1,0x230);
  uVar2 = 0x1b;
  if (lVar1 != 0) {
    uVar2 = 0;
  }
  *(long *)(*param_1 + 0x1d0) = lVar1;
  return uVar2;
}



// ===== FUN_71006d5a80 @ 71006d5a80 (size=56) =====

undefined8 FUN_71006d5a80(long param_1)

{
  (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(param_1 + 0x740));
  *(undefined8 *)(param_1 + 0x740) = 0;
  return 0;
}



// ===== FUN_71006d5b10 @ 71006d5b10 (size=164) =====

undefined4 FUN_71006d5b10(long *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  lVar3 = *(long *)(lVar2 + 0x1d0);
  if (*(int *)(lVar2 + 0xeb0) == 0xb) {
    param_3 = 1;
  }
  uVar1 = FUN_71006bc070(param_1,param_2,param_3);
  if (lVar3 != 0) {
    if (*(int *)(lVar2 + 0xeb0) == 0xb) {
      if ((int)param_1[0xea] == -1) {
        FUN_71006c08c0(lVar2,"Got an RTP Receive with a CSeq of %ld\n",*(long *)(lVar3 + 0x228));
      }
    }
    else if (*(long *)(lVar3 + 0x220) != *(long *)(lVar3 + 0x228)) {
      uVar1 = 0x55;
      FUN_71006c0a00(lVar2,"The CSeq of this request %ld did not match the response %ld");
    }
  }
  return uVar1;
}



// ===== FUN_71006d6460 @ 71006d6460 (size=96) =====

byte FUN_71006d6460(long param_1,byte param_2)

{
  byte bVar1;
  uint uVar2;
  
  if ((param_2 & 1) != 0) {
    uVar2 = FUN_71006a6d40(*(undefined4 *)(param_1 + 0x4d8),0xffffffff,0xffffffff,0);
    if (uVar2 != 0) {
      if ((uVar2 >> 2 & 1) != 0) {
        return param_2 & 1;
      }
      if ((uVar2 & 1) == 0) {
        return param_2 & 1;
      }
      bVar1 = FUN_71006a1c80(param_1);
      return bVar1 ^ 1;
    }
  }
  return 0;
}



// ===== FUN_71006d64c0 @ 71006d64c0 (size=732) =====

undefined8 FUN_71006d64c0(long param_1,long *param_2,long *param_3,undefined1 *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  
  lVar8 = *param_3;
  if (param_2[0xe8] == 0) {
    pcVar7 = *(char **)(param_1 + 0x140);
  }
  else {
    lVar8 = FUN_71006a7480(param_2[0xe8],lVar8 + param_2[0xe9]);
    if (lVar8 == 0) goto LAB_71006d6770;
    uVar3 = *(undefined8 *)(param_1 + 0x140);
    lVar4 = *param_3;
    param_2[0xe8] = lVar8;
    FUN_710080f900(lVar8 + param_2[0xe9],uVar3,lVar4);
    pcVar7 = (char *)param_2[0xe8];
    lVar8 = param_2[0xe9] + *param_3;
    param_2[0xe9] = lVar8;
  }
  while (0 < lVar8) {
    if (*pcVar7 != '$') goto LAB_71006d6698;
    if (lVar8 < 5) {
LAB_71006d66ec:
      *param_4 = 1;
      goto LAB_71006d66fc;
    }
    *(uint *)(param_2 + 0xea) = (uint)(byte)pcVar7[1];
    lVar4 = (ulong)((uint)(*(ushort *)(pcVar7 + 2) >> 8) | (*(ushort *)(pcVar7 + 2) & 0xff00ff) << 8
                   ) + 4;
    if (lVar8 < lVar4) goto LAB_71006d66ec;
    lVar6 = *param_2;
    pcVar5 = *(code **)(lVar6 + 0x6f8);
    if (pcVar5 == (code *)0x0) {
      uVar3 = *(undefined8 *)(lVar6 + 0x670);
      pcVar5 = *(code **)(lVar6 + 0x6e8);
    }
    else {
      uVar3 = *(undefined8 *)(lVar6 + 0x688);
    }
    FUN_71006a63f0(lVar6,1);
    lVar2 = (*pcVar5)(pcVar7,1,lVar4,uVar3);
    FUN_71006a63f0(lVar6,0);
    if (lVar2 == 0x10000001) {
      FUN_71006c0a00(lVar6,"Cannot pause RTP");
LAB_71006d661c:
      FUN_71006c0a00(param_1,"Got an error writing an RTP packet");
      puVar1 = PTR_FUN_7100af36a0;
      *param_4 = 0;
      (*(code *)puVar1)(param_2[0xe8]);
      param_2[0xe8] = 0;
      param_2[0xe9] = 0;
      return 0x17;
    }
    if (lVar4 != lVar2) {
      FUN_71006c0a00(lVar6,"Failed writing RTP data");
      goto LAB_71006d661c;
    }
    lVar8 = lVar8 - lVar4;
    pcVar7 = pcVar7 + lVar4;
    if (*(int *)(param_1 + 0xeb0) == 0xb) {
      *(uint *)(param_1 + 0x1a8) = *(uint *)(param_1 + 0x1a8) & 0xfffffffe;
    }
  }
  if (lVar8 != 0) {
LAB_71006d66fc:
    if (*pcVar7 == '$') {
      lVar4 = (*(code *)PTR_FUN_7100af36a8)(lVar8);
      if (lVar4 != 0) {
        FUN_710080f900(lVar4,pcVar7,lVar8);
        (*(code *)PTR_FUN_7100af36a0)(param_2[0xe8]);
        param_2[0xe8] = lVar4;
        param_2[0xe9] = lVar8;
        *param_3 = 0;
        return 0;
      }
      (*(code *)PTR_FUN_7100af36a0)(param_2[0xe8]);
LAB_71006d6770:
      param_2[0xe8] = 0;
      param_2[0xe9] = 0;
      return 0x1b;
    }
  }
LAB_71006d6698:
  puVar1 = PTR_FUN_7100af36a0;
  lVar4 = param_2[0xe8];
  *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + (*param_3 - lVar8);
  *param_3 = lVar8;
  (*(code *)puVar1)(lVar4);
  param_2[0xe8] = 0;
  param_2[0xe9] = 0;
  return 0;
}



// ===== FUN_71006d67a0 @ 71006d67a0 (size=452) =====

undefined8 FUN_71006d67a0(long *param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  undefined8 local_8;
  
  lVar5 = *param_1;
  local_8 = 0;
  iVar2 = thunk_FUN_71006ca3e0("CSeq:",param_2,5);
  if (iVar2 != 0) {
    iVar2 = FUN_7100822f40(param_2 + 4,": %ld",&local_8);
    if (iVar2 == 1) {
      *(undefined8 *)(*(long *)(lVar5 + 0x1d0) + 0x228) = local_8;
      *(undefined8 *)(lVar5 + 0x1598) = local_8;
      return 0;
    }
    FUN_71006c0a00(lVar5,"Unable to read the CSeq header: [%s]",param_2);
    return 0x55;
  }
  iVar2 = thunk_FUN_71006ca3e0("Session:",param_2,8);
  if (iVar2 != 0) {
    pcVar4 = (char *)(param_2 + 8);
    cVar1 = *(char *)(param_2 + 8);
    while (cVar1 != '\0') {
      iVar2 = FUN_71006af470();
      if (iVar2 == 0) {
        if (*pcVar4 != '\0') {
          lVar6 = *(long *)(lVar5 + 0xdb0);
          if (lVar6 != 0) {
            uVar3 = FUN_710081ce00(lVar6);
            iVar2 = FUN_710080b4c0(pcVar4,lVar6,uVar3);
            if (iVar2 != 0) {
              FUN_71006c0a00(lVar5,"Got RTSP Session ID Line [%s], but wanted ID [%s]",pcVar4,lVar6)
              ;
              return 0x56;
            }
            return 0;
          }
          pcVar8 = pcVar4;
          if (*pcVar4 != ';') goto LAB_71006d68ec;
          lVar6 = 1;
          lVar7 = 0;
          goto LAB_71006d68fc;
        }
        break;
      }
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
    }
    FUN_71006c0a00(lVar5,"Got a blank Session ID");
  }
  return 0;
  while (pcVar8 = pcVar8 + 1, *pcVar8 != ';' && *pcVar8 != '\0') {
LAB_71006d68ec:
    iVar2 = FUN_71006af470();
    if (iVar2 != 0) break;
  }
  lVar7 = (long)pcVar8 - (long)pcVar4;
  lVar6 = lVar7 + 1;
LAB_71006d68fc:
  lVar6 = (*(code *)PTR_FUN_7100af36a8)(lVar6);
  *(long *)(lVar5 + 0xdb0) = lVar6;
  if (lVar6 == 0) {
    uVar3 = 0x1b;
  }
  else {
    FUN_710080f900(lVar6,pcVar4,lVar7);
    uVar3 = 0;
    *(undefined1 *)(*(long *)(lVar5 + 0xdb0) + lVar7) = 0;
  }
  return uVar3;
}



// ===== FUN_71006d6970 @ 71006d6970 (size=84) =====

int FUN_71006d6970(undefined1 *param_1,long param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  *param_1 = 0;
  iVar1 = FUN_710076aa80();
  param_1[param_2 + -1] = 0;
  if ((iVar1 == 0) &&
     (puVar2 = (undefined1 *)FUN_710080eb40(param_1,0x2e), puVar2 != (undefined1 *)0x0)) {
    *puVar2 = 0;
  }
  return iVar1;
}



// ===== FUN_71006d6c30 @ 71006d6c30 (size=4) =====

void FUN_71006d6c30(void)

{
  return;
}



// ===== FUN_71006d6c40 @ 71006d6c40 (size=244) =====

undefined4 FUN_71006d6c40(long param_1,ulong param_2,ulong *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = 5;
  uVar6 = 0;
  pcVar4 = "LOGIN";
  puVar2 = (undefined8 *)0x7100ae40a8;
  do {
    if (uVar5 <= param_2) {
      iVar3 = FUN_710081ec40(param_1,pcVar4,uVar5);
      if (iVar3 == 0) {
        if (param_3 != (ulong *)0x0) {
          *param_3 = uVar5;
        }
        if (uVar5 == param_2) {
LAB_71006d6cec:
          return (&DAT_7100ae40b8)[uVar6 * 6];
        }
        cVar1 = *(char *)(param_1 + uVar5);
        iVar3 = FUN_71006af590(cVar1);
        if (iVar3 == 0) {
          iVar3 = FUN_71006af4a0(cVar1);
          if ((iVar3 == 0) && (cVar1 != '-' && cVar1 != '_')) goto LAB_71006d6cec;
        }
      }
    }
    pcVar4 = (char *)puVar2[3];
    uVar6 = (ulong)((int)uVar6 + 1);
    if (pcVar4 == (char *)0x0) {
      return 0;
    }
    uVar5 = puVar2[4];
    puVar2 = puVar2 + 3;
  } while( true );
}



// ===== FUN_71006d6d40 @ 71006d6d40 (size=204) =====

undefined8 FUN_71006d6d40(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long local_8;
  
  if (param_3 == 0) {
    return 3;
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    uVar3 = FUN_710080b4c0(param_2,&DAT_710083bcb0,param_3);
    iVar1 = (int)uVar3;
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0x18) = 0;
    uVar3 = FUN_710080b4c0(param_2,&DAT_710083bcb0,param_3);
    iVar1 = (int)uVar3;
  }
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffdf;
  }
  else {
    uVar2 = FUN_71006d6c40(param_2,param_3,&local_8);
    if ((uVar2 == 0) || (local_8 != param_3)) {
      return 3;
    }
    uVar3 = 0;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  }
  return uVar3;
}



// ===== FUN_71006d6e10 @ 71006d6e10 (size=28) =====

void FUN_71006d6e10(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0xffffffdf;
  *(undefined2 *)(param_1 + 3) = 1;
  *(undefined1 *)((long)param_1 + 0x1a) = 0;
  return;
}



// ===== FUN_71006d6e30 @ 71006d6e30 (size=32) =====

uint FUN_71006d6e30(long param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x624) >> 8 & 1) == 0) {
    return (*(uint *)(param_1 + 0xc) & *(uint *)(param_1 + 0x10)) >> 5 & 1;
  }
  return 1;
}



// ===== FUN_71006d6e50 @ 71006d6e50 (size=968) =====

uint FUN_71006d6e50(long *param_1,long *param_2,char param_3,undefined4 *param_4)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined4 uVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long local_10;
  long local_8;
  
  local_10 = 0;
  local_8 = 0;
  lVar5 = *param_2;
  if (((int)param_2[0x7d] == 2) &&
     ((int)param_2[(ulong)(*(int *)((long)param_2 + 0x4dc) != -1) * 3 + 0xa7] != 2)) {
    lVar9 = param_2[0x7a];
    lVar10 = param_2[0x80];
  }
  else {
    lVar10 = (long)(int)param_2[0x81];
    lVar9 = param_2[0x68];
  }
  lVar7 = *(long *)(lVar5 + 0xe28);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(char *)((long)param_1 + 0x1a) = param_3;
  uVar1 = *(uint *)((long)param_1 + 0xc) & *(uint *)(param_1 + 2);
  *param_4 = 0;
  if (((uVar1 >> 5 & 1) == 0) || (*(char *)param_2[0x91] != '\0')) {
    uVar3 = *(uint *)((long)param_2 + 0x624) & 0x100;
    if ((*(uint *)((long)param_2 + 0x624) >> 8 & 1) == 0) goto LAB_71006d6f3c;
    if (((uVar1 >> 3 & 1) == 0) || (cVar2 = FUN_71006afd60(), cVar2 == '\0')) {
      if ((uVar1 >> 2 & 1) == 0) {
        if ((uVar1 >> 8 & 1) == 0) {
          if ((uVar1 & 0x80) == 0 || lVar7 == 0) goto LAB_71006d70b4;
          *(undefined4 *)((long)param_1 + 0x14) = 0x80;
          if ((param_3 != '\0') || ((*(ulong *)(lVar5 + 0xf60) >> 0x29 & 1) != 0)) {
            uVar3 = FUN_71006de000(lVar5,param_2[0x90],lVar7,&local_10,&local_8);
            pcVar8 = "XOAUTH2";
            uVar4 = 0x10;
            uVar6 = 0xd;
            goto LAB_71006d7094;
          }
          pcVar8 = "XOAUTH2";
          uVar4 = 0x10;
          uVar6 = 0xd;
        }
        else if (lVar7 == 0) {
LAB_71006d70b4:
          if ((uVar1 >> 1 & 1) == 0) {
            uVar3 = uVar1 & 1;
            if ((uVar1 & 1) == 0) goto LAB_71006d6f3c;
            *(undefined4 *)((long)param_1 + 0x14) = 1;
            if ((param_3 != '\0') || ((*(ulong *)(lVar5 + 0xf60) >> 0x29 & 1) != 0)) {
              pcVar8 = "LOGIN";
              uVar4 = 3;
              uVar3 = FUN_71006ddba0(lVar5,param_2[0x90],&local_10,&local_8);
              uVar6 = 2;
              goto LAB_71006d7094;
            }
            pcVar8 = "LOGIN";
            uVar4 = 3;
            uVar6 = 2;
          }
          else {
            *(undefined4 *)((long)param_1 + 0x14) = 2;
            if ((param_3 != '\0') || ((*(ulong *)(lVar5 + 0xf60) >> 0x29 & 1) != 0)) {
              pcVar8 = "PLAIN";
              uVar4 = 0x10;
              uVar6 = 1;
              uVar3 = FUN_71006dda40(lVar5,param_2[0x93],param_2[0x90],param_2[0x91],&local_10,
                                     &local_8);
              goto LAB_71006d7094;
            }
            pcVar8 = "PLAIN";
            uVar4 = 0x10;
            uVar6 = 1;
          }
        }
        else {
          *(undefined4 *)((long)param_1 + 0x14) = 0x100;
          if ((param_3 == '\0') && ((*(ulong *)(lVar5 + 0xf60) >> 0x29 & 1) == 0)) {
            pcVar8 = "OAUTHBEARER";
            uVar4 = 0xe;
            uVar6 = 0xd;
            goto LAB_71006d6f8c;
          }
          uVar3 = FUN_71006ddf40(lVar5,param_2[0x90],lVar9,lVar10,lVar7,&local_10,&local_8);
          pcVar8 = "OAUTHBEARER";
          uVar4 = 0xe;
          uVar6 = 0xd;
LAB_71006d7094:
          if (uVar3 != 0) goto LAB_71006d6f3c;
        }
      }
      else {
        pcVar8 = "CRAM-MD5";
        uVar4 = 0x10;
        uVar6 = 5;
        *(undefined4 *)((long)param_1 + 0x14) = 4;
      }
    }
    else {
      pcVar8 = "DIGEST-MD5";
      uVar4 = 0x10;
      uVar6 = 6;
      *(undefined4 *)((long)param_1 + 0x14) = 8;
    }
LAB_71006d6f8c:
    lVar5 = local_10;
    lVar10 = *param_1;
    lVar9 = lVar5;
    if (((local_10 != 0) && (uVar11 = *(ulong *)(lVar10 + 0x10), uVar11 != 0)) &&
       (lVar7 = FUN_710081ce00(pcVar8), uVar11 < (ulong)(lVar7 + local_8))) {
      lVar9 = 0;
      (*(code *)PTR_FUN_7100af36a0)(lVar5);
      local_10 = 0;
      lVar10 = *param_1;
    }
  }
  else {
    *(undefined4 *)((long)param_1 + 0x14) = 0x20;
    if ((param_3 != '\0') || ((*(ulong *)(lVar5 + 0xf60) >> 0x29 & 1) != 0)) {
      pcVar8 = "EXTERNAL";
      uVar4 = 0x10;
      uVar3 = FUN_71006ddc50(lVar5,param_2[0x90],&local_10,&local_8);
      uVar6 = 4;
      goto LAB_71006d7094;
    }
    lVar10 = *param_1;
    pcVar8 = "EXTERNAL";
    uVar4 = 0x10;
    uVar6 = 4;
    lVar9 = 0;
  }
  uVar3 = (**(code **)(lVar10 + 0x18))(param_2,pcVar8,lVar9);
  if (uVar3 == 0) {
    if (local_10 == 0) {
      uVar4 = uVar6;
    }
    *param_4 = 1;
    *(undefined4 *)(param_1 + 1) = uVar4;
  }
LAB_71006d6f3c:
  (*(code *)PTR_FUN_7100af36a0)(local_10);
  return uVar3;
}



// ===== FUN_71006d7220 @ 71006d7220 (size=1212) =====

int FUN_71006d7220(long *param_1,long *param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 local_8;
  
  local_28 = 0;
  lVar8 = *param_2;
  if (((int)param_2[0x7d] == 2) &&
     ((int)param_2[(ulong)(*(int *)((long)param_2 + 0x4dc) != -1) * 3 + 0xa7] != 2)) {
    lVar9 = *(long *)(lVar8 + 0xdf0);
    lVar6 = param_2[0x7a];
    lVar4 = param_2[0x80];
    if (lVar9 != 0) goto LAB_71006d726c;
LAB_71006d7450:
    uVar5 = *(undefined8 *)(lVar8 + 0xe28);
    lVar9 = *(long *)*param_1;
    *param_4 = 1;
    uVar1 = *(uint *)(param_1 + 1);
  }
  else {
    lVar9 = *(long *)(lVar8 + 0xdf0);
    lVar4 = (long)(int)param_2[0x81];
    lVar6 = param_2[0x68];
    if (lVar9 == 0) goto LAB_71006d7450;
LAB_71006d726c:
    uVar5 = *(undefined8 *)(lVar8 + 0xe28);
    *param_4 = 1;
    uVar1 = *(uint *)(param_1 + 1);
  }
  if (uVar1 == 0x10) {
    iVar2 = *(int *)(*param_1 + 0xc);
    *param_4 = 2;
    *(undefined4 *)(param_1 + 1) = 0;
    iVar3 = 0;
    if (iVar2 != param_3) {
      iVar3 = 0x43;
    }
    return iVar3;
  }
  local_8 = 0;
  uStack_18 = 0;
  local_20 = 0;
  if ((1 < uVar1 - 0xe) && (*(int *)(*param_1 + 8) != param_3)) {
LAB_71006d756c:
    *param_4 = 2;
    *(undefined4 *)(param_1 + 1) = 0;
    return 0x43;
  }
  if (uVar1 == 5) {
    (**(code **)(*param_1 + 0x28))
              (*(undefined8 *)(lVar8 + 0x1150),&local_10,*(code **)(*param_1 + 0x28),lVar4);
    iVar3 = FUN_71006ddd00(local_10,&local_20,&uStack_18);
    if (iVar3 == 0) {
      iVar3 = FUN_71006ddd70(lVar8,local_20,param_2[0x90],param_2[0x91],&local_28,&local_8);
    }
    uVar7 = 0x10;
    (*(code *)PTR_FUN_7100af36a0)(local_20);
joined_r0x0071006d737c:
    if (iVar3 != 0) {
      if (iVar3 == 0x3d) {
        uVar7 = 0xf;
        iVar3 = (**(code **)(*param_1 + 0x20))(param_2,&DAT_710083bcb0);
        goto LAB_71006d731c;
      }
LAB_71006d7310:
      uVar7 = 0;
      *param_4 = 2;
      goto LAB_71006d731c;
    }
    if (local_28 == 0) goto LAB_71006d731c;
  }
  else {
    if (uVar1 < 6) {
      if (uVar1 == 2) {
        uVar7 = 3;
        iVar3 = FUN_71006ddba0(lVar8,param_2[0x90],&local_28,&local_8);
      }
      else if (uVar1 < 3) {
        if (uVar1 == 0) {
          *param_4 = 2;
          return 0;
        }
        if (uVar1 != 1) goto LAB_71006d7660;
        uVar7 = 0x10;
        iVar3 = FUN_71006dda40(lVar8,param_2[0x93],param_2[0x90],param_2[0x91],&local_28,&local_8);
      }
      else if (uVar1 == 3) {
        uVar7 = 0x10;
        iVar3 = FUN_71006ddba0(lVar8,param_2[0x91],&local_28,&local_8);
      }
      else {
        uVar7 = 0x10;
        iVar3 = FUN_71006ddc50(lVar8,param_2[0x90],&local_28,&local_8);
      }
      goto joined_r0x0071006d737c;
    }
    if (uVar1 == 0xd) {
      if (*(int *)((long)param_1 + 0x14) == 0x100) {
        iVar3 = FUN_71006ddf40(lVar8,param_2[0x90],lVar6,lVar4,uVar5,&local_28,&local_8);
        uVar7 = 0xe;
      }
      else {
        iVar3 = FUN_71006de000(lVar8,param_2[0x90],uVar5,&local_28,&local_8);
        uVar7 = 0x10;
      }
      goto joined_r0x0071006d737c;
    }
    if (0xd < uVar1) {
      if (uVar1 == 0xe) {
        if (*(int *)(*param_1 + 0xc) == param_3) {
          *param_4 = 2;
          *(undefined4 *)(param_1 + 1) = 0;
          return 0;
        }
        if (*(int *)(*param_1 + 8) != param_3) goto LAB_71006d756c;
        local_28 = (*(code *)PTR_FUN_7100af36b8)(&DAT_710084a2a8);
        if (local_28 != 0) goto LAB_71006d73f4;
LAB_71006d74ec:
        iVar3 = 0x1b;
      }
      else {
        if (uVar1 == 0xf) {
          *(uint *)((long)param_1 + 0xc) =
               *(uint *)((long)param_1 + 0xc) ^ *(uint *)((long)param_1 + 0x14);
          iVar3 = FUN_71006d6e50(param_1,param_2,*(undefined1 *)((long)param_1 + 0x1a),param_4);
          uVar7 = (undefined4)param_1[1];
          goto joined_r0x0071006d737c;
        }
LAB_71006d7660:
        iVar3 = 1;
        FUN_71006c0a00(lVar8,"Unsupported SASL authentication mechanism");
      }
      goto LAB_71006d7310;
    }
    if (uVar1 == 6) {
      uVar7 = 7;
      (**(code **)(*param_1 + 0x28))(*(undefined8 *)(lVar8 + 0x1150),&local_10);
      iVar3 = FUN_71006afd70(lVar8,local_10,param_2[0x90],param_2[0x91],lVar9,&local_28,&local_8);
      goto joined_r0x0071006d737c;
    }
    if (uVar1 != 7) goto LAB_71006d7660;
    local_28 = (*(code *)PTR_FUN_7100af36b8)(&DAT_7100853d20);
    if (local_28 == 0) goto LAB_71006d74ec;
LAB_71006d73f4:
    uVar7 = 0x10;
  }
  iVar3 = (**(code **)(*param_1 + 0x20))(param_2,local_28);
LAB_71006d731c:
  (*(code *)PTR_FUN_7100af36a0)(local_28);
  *(undefined4 *)(param_1 + 1) = uVar7;
  return iVar3;
}



// ===== FUN_71006d76e0 @ 71006d76e0 (size=284) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_71006d76e0(undefined8 param_1,undefined1 *param_2,ulong param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  int extraout_w1;
  ulong uVar6;
  undefined1 *puVar7;
  uint local_4;
  
  if (param_3 == 0) {
    return 0x2b;
  }
  do {
    uVar2 = param_3;
    if (4 < param_3) {
      uVar2 = 4;
    }
    uVar5 = thunk_FUN_71006b2c90(param_1,&local_4);
    if ((int)uVar5 == 4) {
      if (DAT_7100d141ac == '\0') {
        iVar4 = FUN_71006b7420();
        FUN_71006c08c0(param_1,"WARNING: Using weak random seed\n");
        DAT_7100d141ac = '\x01';
        _DAT_7100d141a8 =
             (((extraout_w1 + iVar4 + _DAT_7100d141a8) * 0x41c64e6d + 0x3039) * 0x41c64e6d + 0x3039)
             * 0x41c64e6d + 0x3039;
      }
      _DAT_7100d141a8 = _DAT_7100d141a8 * 0x41c64e6d + 0x3039;
      uVar3 = _DAT_7100d141a8 >> 0x10 | _DAT_7100d141a8 * 0x10000;
    }
    else {
      uVar3 = local_4;
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
    uVar6 = (ulong)uVar3;
    puVar1 = param_2 + uVar2;
    puVar7 = param_2;
    do {
      param_2 = puVar7 + 1;
      *puVar7 = (char)uVar6;
      uVar6 = uVar6 >> 8;
      puVar7 = param_2;
    } while (param_2 != puVar1);
    param_3 = param_3 - uVar2;
  } while (param_3 != 0);
  return 0;
}



// ===== FUN_71006d7800 @ 71006d7800 (size=192) =====

int FUN_71006d7800(undefined8 param_1,char *param_2,ulong param_3)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  byte abStack_80 [128];
  
  if (0xff < param_3) {
    return 0x2b;
  }
  iVar4 = 0x2b;
  if ((param_3 & 1) != 0) {
    pcVar5 = (char *)(param_3 - 1);
    pbVar1 = abStack_80;
    iVar4 = FUN_71006d76e0(param_1,pbVar1,(ulong)pcVar5 >> 1);
    pcVar3 = param_2;
    if (iVar4 != 0) {
      return iVar4;
    }
    while (pcVar5 != (char *)0x0) {
      cVar2 = "0123456789abcdef"[(ulong)*pbVar1 & 0xf];
      *pcVar3 = "0123456789abcdef"[*pbVar1 >> 4];
      pcVar3[1] = cVar2;
      pcVar5 = param_2 + (param_3 - (long)(pcVar3 + 2)) + -1;
      pbVar1 = pbVar1 + 1;
      pcVar3 = pcVar3 + 2;
    }
    *pcVar3 = '\0';
    iVar4 = 0;
  }
  return iVar4;
}



// ===== FUN_71006d78c0 @ 71006d78c0 (size=180) =====

long FUN_71006d78c0(undefined1 *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  
  if (((ulong)((long)param_2 - (long)param_1) < 0x5555555555555555) &&
     (lVar1 = (*(code *)PTR_FUN_7100af36a8)(((long)param_2 - (long)param_1) * 3 + 1), lVar1 != 0)) {
    lVar3 = lVar1;
    if (param_1 < param_2) {
      do {
        puVar2 = param_1 + 1;
        FUN_710069fb80(lVar3,4,"%02x:",*param_1);
        param_1 = puVar2;
        lVar3 = lVar3 + 3;
      } while (param_2 != puVar2);
    }
    return lVar1;
  }
  return 0;
}



// ===== FUN_71006d7980 @ 71006d7980 (size=332) =====

byte * FUN_71006d7980(undefined8 *param_1,byte *param_2,byte *param_3)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined1 auStack_20 [32];
  
  if ((param_2 == (byte *)0x0 || param_3 <= param_2) || param_3 == (byte *)0x0) {
    return (byte *)0x0;
  }
  if ((*param_2 != 0) && ((ulong)((long)param_3 - (long)param_2) < 0x40001)) {
    *param_1 = param_2;
    bVar2 = *param_2;
    *(byte *)(param_1 + 3) = bVar2 >> 6;
    *(byte *)((long)param_1 + 0x1a) = bVar2 >> 5 & 1;
    if (((bVar2 & 0x1f) != 0x1f) &&
       (*(byte *)((long)param_1 + 0x19) = bVar2 & 0x1f, param_2 + 1 < param_3)) {
      bVar3 = param_2[1];
      uVar5 = (ulong)bVar3;
      pbVar4 = param_2 + 2;
      if ((char)bVar3 < '\0') {
        if ((bVar3 & 0x7f) == 0) {
          if ((bVar2 & 0x20) != 0) {
            param_1[1] = pbVar4;
            do {
              if (param_3 <= pbVar4) {
                return (byte *)0x0;
              }
              if (*pbVar4 == 0) {
                param_1[2] = pbVar4;
                return pbVar4 + 1;
              }
              pbVar4 = (byte *)FUN_71006d7980(auStack_20,pbVar4,param_3);
            } while (pbVar4 != (byte *)0x0);
          }
        }
        else if ((ulong)(bVar3 & 0x7f) <= (ulong)((long)param_3 - (long)pbVar4)) {
          uVar5 = 0;
          pbVar6 = pbVar4;
          do {
            pbVar4 = pbVar6 + 1;
            uVar1 = uVar5 << 8;
            uVar5 = *pbVar6 | uVar1;
            if (pbVar4 == param_2 + (byte)((char)(bVar3 & 0x7f) + 2)) goto LAB_71006d7a00;
            pbVar6 = pbVar4;
          } while ((uVar1 & 0xff000000) == 0);
        }
      }
      else {
LAB_71006d7a00:
        if (uVar5 <= (ulong)((long)param_3 - (long)pbVar4)) {
          param_1[1] = pbVar4;
          param_1[2] = pbVar4 + uVar5;
          return pbVar4 + uVar5;
        }
      }
    }
  }
  return (byte *)0x0;
}



// ===== FUN_71006d7ad0 @ 71006d7ad0 (size=320) =====

ulong FUN_71006d7ad0(long param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  char cVar5;
  char cVar7;
  ulong uVar6;
  
  if (param_3 < 10) {
    uVar3 = 1;
    uVar4 = 0;
  }
  else {
    uVar6 = (ulong)param_3 / 10;
    cVar5 = (char)(param_3 / 10);
    if (param_3 < 100) {
      uVar3 = 2;
      uVar4 = 1;
      uVar2 = 0;
    }
    else {
      cVar7 = (char)(uVar6 / 10);
      if (param_3 < 1000) {
        uVar3 = 3;
        uVar4 = 2;
        uVar2 = 1;
        uVar1 = 0;
      }
      else {
        uVar1 = FUN_71006d7ad0(param_1,param_2,(uVar6 / 10) / 10);
        cVar7 = cVar7 + (char)((uVar6 / 10) / 10) * -10;
        uVar2 = uVar1 + 1;
        uVar4 = uVar1 + 2;
        uVar3 = uVar1 + 3;
      }
      if (uVar1 < param_2) {
        *(char *)(param_1 + uVar1) = cVar7 + '0';
      }
      if (uVar2 < param_2) {
        *(undefined1 *)(param_1 + uVar2) = 0;
      }
      cVar5 = cVar5 + (char)(uVar6 / 10) * -10;
    }
    if (uVar2 < param_2) {
      *(char *)(param_1 + uVar2) = cVar5 + '0';
    }
    if (uVar4 < param_2) {
      *(undefined1 *)(param_1 + uVar4) = 0;
    }
    param_3 = param_3 % 10;
  }
  if (uVar4 < param_2) {
    *(char *)(param_1 + uVar4) = (char)param_3 + '0';
  }
  if (uVar3 < param_2) {
    *(undefined1 *)(param_1 + uVar3) = 0;
  }
  return uVar3;
}



// ===== FUN_71006d7c10 @ 71006d7c10 (size=680) =====

ulong FUN_71006d7c10(char *param_1,ulong param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong extraout_x8;
  ulong extraout_x8_00;
  char *extraout_x9;
  char *extraout_x9_00;
  byte *extraout_x10;
  byte *extraout_x10_00;
  undefined8 uVar11;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  char *pcVar12;
  char *extraout_x12;
  ulong uVar13;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar14;
  ulong extraout_x14;
  ulong uVar15;
  ulong extraout_x15;
  ulong extraout_x15_00;
  char cVar16;
  char extraout_w18;
  ulong uVar17;
  
  bVar1 = *param_3;
  uVar2 = (uint)bVar1 + (bVar1 / 0x28) * -0x28;
  if (((param_2 == 0) || (*param_1 = bVar1 / 0x28 + 0x30, param_2 == 1)) ||
     (param_1[1] = '.', param_2 == 2)) {
    uVar10 = (ulong)(9 < uVar2) + 3;
  }
  else {
    if (uVar2 < 10) {
      uVar10 = 3;
      uVar13 = 1;
      pcVar6 = param_1 + 2;
    }
    else {
      uVar10 = 4;
      param_1[2] = (char)(uVar2 / 10) + '0';
      if (param_2 - 2 == 1) goto LAB_71006d7c4c;
      uVar10 = 4;
      uVar13 = 2;
      uVar2 = uVar2 + (uVar2 / 10 + (uVar2 / 10) * 4) * -2;
      pcVar6 = param_1 + 3;
      *pcVar6 = '\0';
    }
    *pcVar6 = (char)uVar2 + '0';
    if (uVar13 < param_2 - 2) {
      (param_1 + 2)[uVar13] = '\0';
    }
  }
LAB_71006d7c4c:
  if (param_3 + 1 < param_4) {
    uVar13 = 0xcccccccd;
    uVar15 = 0x51eb851f;
    uVar11 = 0x2e;
    if (uVar10 < param_2) {
      param_1[uVar10] = '.';
    }
    uVar5 = 0;
    pbVar9 = param_3 + 1;
    do {
      pbVar8 = pbVar9 + 1;
      uVar2 = (int)uVar5 << 7;
      uVar5 = (ulong)(*pbVar9 & 0x7f | uVar2);
      if (-1 < (char)*pbVar9) goto LAB_71006d7cb0;
      pbVar9 = pbVar8;
    } while ((uVar2 & 0xff000000) == 0);
    uVar10 = 0;
  }
  else if (uVar10 < param_2) {
    param_1[uVar10] = '\0';
  }
  return uVar10;
LAB_71006d7cb0:
  uVar7 = uVar10 + 1;
  uVar2 = (uint)uVar5;
  if (uVar7 < param_2) {
    pcVar6 = param_1 + uVar7;
    uVar14 = param_2 - uVar7;
    uVar10 = 1;
    pcVar12 = pcVar6;
    if (uVar2 < 10) {
LAB_71006d7d80:
      *pcVar6 = (char)uVar5 + '0';
    }
    else {
      uVar10 = uVar5 * (uVar13 & 0xffffffff);
      cVar16 = (char)(uint)(uVar10 >> 0x23);
      if (uVar2 < 100) {
        uVar10 = 2;
        uVar4 = 1;
LAB_71006d7e14:
        *pcVar6 = cVar16 + '0';
      }
      else {
        uVar17 = (uVar10 >> 0x23) * (uVar13 & 0xffffffff);
        uVar10 = FUN_71006d7ad0(pcVar6,uVar14,uVar17 >> 0x23);
        param_2 = extraout_x8_00;
        param_1 = extraout_x9_00;
        param_4 = extraout_x10_00;
        uVar11 = extraout_x11_00;
        pcVar12 = extraout_x12;
        uVar13 = extraout_x13_00;
        uVar14 = extraout_x14;
        uVar15 = extraout_x15_00;
        if (uVar10 < extraout_x14) {
          uVar4 = uVar10 + 1;
          pcVar6 = extraout_x12 + uVar10;
          uVar10 = uVar10 + 2;
          cVar16 = extraout_w18 + (char)(uint)(uVar17 >> 0x23) * -10;
          goto LAB_71006d7e14;
        }
        uVar4 = uVar10 + 1;
        uVar10 = uVar10 + 2;
      }
      if (uVar4 < uVar14) {
        pcVar6 = pcVar12 + uVar4;
        pcVar12[uVar4] = '\0';
        uVar5 = (ulong)((int)uVar5 +
                       (uint)((uVar5 & 0xffffffff) * (uVar13 & 0xffffffff) >> 0x23) * -10);
        goto LAB_71006d7d80;
      }
    }
    if (uVar10 < uVar14) {
      pcVar12[uVar10] = '\0';
    }
    uVar10 = uVar7 + uVar10;
  }
  else {
    lVar3 = 0;
    if ((9 < uVar2) && (lVar3 = 1, 99 < uVar2)) {
      lVar3 = FUN_71006d7ad0(0,0,uVar5 * (uVar15 & 0xffffffff) >> 0x25);
      lVar3 = lVar3 + 1;
      param_2 = extraout_x8;
      param_1 = extraout_x9;
      param_4 = extraout_x10;
      uVar11 = extraout_x11;
      uVar13 = extraout_x13;
      uVar15 = extraout_x15;
    }
    uVar10 = lVar3 + uVar10 + 2;
  }
  if (param_4 <= pbVar8) {
    if (uVar10 < param_2) {
      param_1[uVar10] = '\0';
    }
    return uVar10;
  }
  if (uVar10 < param_2) {
    param_1[uVar10] = (char)uVar11;
  }
  uVar5 = 0;
  pbVar9 = pbVar8;
  while( true ) {
    pbVar8 = pbVar9 + 1;
    uVar2 = (int)uVar5 << 7;
    uVar5 = (ulong)(*pbVar9 & 0x7f | uVar2);
    if (-1 < (char)*pbVar9) break;
    pbVar9 = pbVar8;
    if ((uVar2 & 0xff000000) != 0) {
      return 0;
    }
  }
  goto LAB_71006d7cb0;
}



// ===== FUN_71006d7ec0 @ 71006d7ec0 (size=236) =====

long FUN_71006d7ec0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  undefined8 *puVar5;
  
  lVar2 = FUN_71006d7c10(0,0,param_1,param_2);
  if ((lVar2 == 0) || (lVar3 = (*(code *)PTR_FUN_7100af36a8)(lVar2 + 1), lVar3 == 0)) {
    lVar3 = 0;
  }
  else {
    puVar5 = (undefined8 *)0x7100ae4198;
    FUN_71006d7c10(lVar3,lVar2,param_1,param_2);
    pcVar4 = "1.2.840.10040.4.1";
    *(undefined1 *)(lVar3 + lVar2) = 0;
    do {
      iVar1 = FUN_710080aec0(pcVar4,lVar3);
      if ((iVar1 == 0) || (iVar1 = FUN_71006ca300(puVar5[1],lVar3), iVar1 != 0)) {
        (*(code *)PTR_FUN_7100af36a0)(lVar3);
        lVar2 = (*(code *)PTR_FUN_7100af36b8)(puVar5[1]);
        return lVar2;
      }
      puVar5 = puVar5 + 2;
      pcVar4 = (char *)*puVar5;
    } while (pcVar4 != (char *)0x0);
  }
  return lVar3;
}



// ===== FUN_71006d7fb0 @ 71006d7fb0 (size=1752) =====

undefined1 * FUN_71006d7fb0(long param_1)

{
  undefined *puVar1;
  ushort *puVar2;
  byte *pbVar3;
  byte bVar4;
  byte *pbVar5;
  char *pcVar6;
  undefined1 *puVar7;
  ulong uVar8;
  byte *pbVar9;
  uint uVar10;
  long lVar11;
  byte *pbVar12;
  byte bVar13;
  byte bVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  char *pcVar18;
  uint uVar19;
  ushort *puVar20;
  ushort *puVar21;
  int iVar22;
  ulong uVar23;
  
  if (*(char *)(param_1 + 0x1a) != '\0') {
    return (undefined1 *)0x0;
  }
  bVar14 = *(byte *)(param_1 + 0x19);
  if (bVar14 == 5) {
    pcVar6 = "";
LAB_71006d8134:
    puVar7 = (undefined1 *)(*(code *)PTR_FUN_7100af36b8)(pcVar6);
    return puVar7;
  }
  uVar19 = (uint)bVar14;
  if (bVar14 < 6) {
    if (uVar19 == 3) {
      pbVar9 = *(byte **)(param_1 + 0x10);
      pbVar5 = (byte *)(*(long *)(param_1 + 8) + 1);
      if (pbVar9 < pbVar5) {
        return (undefined1 *)0x0;
      }
      goto LAB_71006d804c;
    }
    if (uVar19 == 4) {
      pbVar5 = *(byte **)(param_1 + 8);
      pbVar9 = *(byte **)(param_1 + 0x10);
      goto LAB_71006d804c;
    }
    if (uVar19 == 1) {
      if (*(long *)(param_1 + 0x10) - (long)*(char **)(param_1 + 8) != 1) {
        return (undefined1 *)0x0;
      }
      pcVar6 = "TRUE";
      if (**(char **)(param_1 + 8) == '\0') {
        pcVar6 = "FALSE";
      }
      goto LAB_71006d8134;
    }
    if (uVar19 != 2) {
      return (undefined1 *)0x0;
    }
  }
  else {
    if (0x1e < bVar14) {
      return (undefined1 *)0x0;
    }
    if (0xb < bVar14) {
      if ((1L << ((ulong)bVar14 & 0x3f) & 0x545c1000U) == 0) {
        if (uVar19 != 0x18) {
          if (uVar19 != 0x17) {
            return (undefined1 *)0x0;
          }
          pbVar9 = *(byte **)(param_1 + 8);
          pbVar3 = *(byte **)(param_1 + 0x10);
          pbVar5 = pbVar9;
          if (pbVar9 < pbVar3) {
            do {
              if (9 < (byte)(*pbVar5 - 0x30)) {
                pbVar15 = pbVar9 + 10;
                if (pbVar5 == pbVar15) goto LAB_71006d83c4;
                if ((long)pbVar5 - (long)pbVar15 != 2) {
                  return (undefined1 *)0x0;
                }
                goto LAB_71006d8218;
              }
              pbVar5 = pbVar5 + 1;
            } while (pbVar3 != pbVar5);
          }
          if (pbVar5 != pbVar9 + 10) {
            return (undefined1 *)0x0;
          }
LAB_71006d83c4:
          pbVar15 = &DAT_710084a338;
LAB_71006d8218:
          if (pbVar5 < pbVar3) {
            if (*pbVar5 == 0x5a) {
              pbVar5 = &DAT_710084a340;
              lVar11 = 3;
            }
            else {
              pbVar5 = pbVar5 + 1;
              lVar11 = (long)pbVar3 - (long)pbVar5;
            }
            puVar7 = (undefined1 *)
                     FUN_71006a1060("%u%.2s-%.2s-%.2s %.2s:%.2s:%.2s %.*s",(*pbVar9 < 0x35) + '\x13'
                                    ,pbVar9,pbVar9 + 2,pbVar9 + 4,pbVar9 + 6,pbVar9 + 8,pbVar15,
                                    lVar11,pbVar5);
            return puVar7;
          }
          return (undefined1 *)0x0;
        }
        pbVar9 = *(byte **)(param_1 + 8);
        pbVar3 = *(byte **)(param_1 + 0x10);
        pbVar5 = pbVar9;
        if (pbVar3 <= pbVar9) {
          return (undefined1 *)0x0;
        }
        do {
          bVar14 = *pbVar5;
          pbVar15 = (byte *)0x0;
          if (9 < (byte)(bVar14 - 0x30)) {
            lVar11 = (long)pbVar5 - (long)pbVar9;
            if (lVar11 == 0xd) {
              bVar14 = pbVar5[-1];
              bVar13 = 0x30;
              goto LAB_71006d82e0;
            }
            if (lVar11 == 0xe) {
              bVar14 = pbVar5[-1];
              goto LAB_71006d83d4;
            }
            if (lVar11 != 0xc) {
              return (undefined1 *)0x0;
            }
            bVar14 = 0x30;
            bVar13 = 0x30;
            goto LAB_71006d82e0;
          }
          pbVar5 = pbVar5 + 1;
        } while (pbVar3 != pbVar5);
        lVar11 = (long)pbVar5 - (long)pbVar9;
        if (lVar11 == 0xd) {
          bVar13 = 0x30;
        }
        else {
          if (lVar11 != 0xe) {
            if (lVar11 != 0xc) {
              return (undefined1 *)0x0;
            }
            pcVar6 = "";
            bVar14 = 0x30;
            pcVar18 = "";
            bVar13 = 0x30;
            lVar11 = 0;
            pbVar17 = pbVar5;
            goto LAB_71006d838c;
          }
LAB_71006d83d4:
          bVar13 = pbVar5[-2];
        }
LAB_71006d82e0:
        pbVar17 = pbVar5;
        if (pbVar3 <= pbVar5) {
          pcVar6 = "";
          lVar11 = (long)pbVar3 - (long)pbVar5;
          pcVar18 = pcVar6;
          goto LAB_71006d838c;
        }
        bVar4 = *pbVar5;
        if ((bVar4 & 0xfd) == 0x2c) {
          pbVar17 = pbVar5 + 1;
          pbVar16 = pbVar5;
          do {
            pbVar12 = pbVar16;
            pbVar16 = pbVar12 + 1;
            if (pbVar3 == pbVar16) break;
          } while ((byte)(*pbVar16 - 0x30) < 10);
          pbVar5 = pbVar12 + (-1 - (long)pbVar5);
          do {
            pbVar15 = pbVar5;
            if (pbVar15 == (byte *)0x0) break;
            pbVar5 = pbVar15 + -1;
          } while (pbVar17[(long)(pbVar15 + -1)] == 0x30);
          if (pbVar16 < pbVar3) {
            bVar4 = pbVar12[1];
            pbVar5 = pbVar16;
            goto LAB_71006d8358;
          }
          pcVar6 = "";
          lVar11 = (long)pbVar3 - (long)pbVar16;
        }
        else {
LAB_71006d8358:
          if (bVar4 == 0x5a) {
            pcVar6 = "";
            pbVar16 = &UNK_710084a348;
            lVar11 = 4;
          }
          else {
            pbVar16 = pbVar5 + 1;
            pcVar6 = " ";
            lVar11 = (long)pbVar3 - (long)pbVar16;
          }
        }
        pbVar5 = pbVar16;
        if (pbVar15 == (byte *)0x0) {
          pcVar18 = "";
        }
        else {
          pcVar18 = ".";
        }
LAB_71006d838c:
        puVar7 = (undefined1 *)
                 FUN_71006a1060("%.4s-%.2s-%.2s %.2s:%.2s:%c%c%s%.*s%s%.*s",pbVar9,pbVar9 + 4,
                                pbVar9 + 6,pbVar9 + 8,pbVar9 + 10,bVar13,bVar14,pcVar18,pbVar15,
                                pbVar17,pcVar6,lVar11,pbVar5);
        return puVar7;
      }
      puVar20 = *(ushort **)(param_1 + 8);
      puVar2 = *(ushort **)(param_1 + 0x10);
      uVar23 = (long)puVar2 - (long)puVar20;
      if ((1L << ((ulong)(uVar19 - 0xc) & 0x3f) & 0x45c1U) == 0) {
        if (uVar19 != 0x1c) {
          if (uVar19 != 0x1e) {
            return (undefined1 *)0x0;
          }
          if ((uVar23 & 1) != 0) {
            return (undefined1 *)0x0;
          }
          iVar22 = 2;
          uVar8 = uVar23 >> 1;
          goto LAB_71006d8530;
        }
        if ((uVar23 & 3) != 0) {
          return (undefined1 *)0x0;
        }
        uVar8 = uVar23 >> 2;
        iVar22 = 4;
      }
      else {
        iVar22 = 1;
        uVar8 = uVar23;
LAB_71006d8530:
        if (0x3fffffffffffffff < uVar8) {
          return (undefined1 *)0x0;
        }
      }
      puVar7 = (undefined1 *)(*(code *)PTR_FUN_7100af36a8)(uVar8 * 4 + 1);
      if (puVar7 == (undefined1 *)0x0) {
        return (undefined1 *)0x0;
      }
      if (uVar19 == 0xc) {
        if (uVar23 == 0) goto LAB_71006d85b4;
        FUN_710080f900(puVar7,puVar20,uVar23);
      }
      else {
        uVar23 = 0;
        if (puVar2 <= puVar20) {
LAB_71006d85b4:
          *puVar7 = 0;
          return puVar7;
        }
        do {
          if (iVar22 == 2) {
            uVar19 = 0;
LAB_71006d8444:
            puVar21 = puVar20 + 1;
            uVar19 = (uint)*(byte *)((long)puVar20 + 1) | ((byte)*puVar20 | uVar19) << 8;
            uVar10 = uVar19;
            if (0x7f < uVar19) {
              if (uVar19 < 0x800) goto LAB_71006d84e4;
              if (uVar19 < 0x10000) {
                lVar11 = 3;
              }
              else {
                if (0x1fffff < uVar19) {
                  (*(code *)PTR_FUN_7100af36a0)(puVar7);
                  return (undefined1 *)0x0;
                }
                uVar19 = uVar19 >> 6 | 0x10000;
                lVar11 = 4;
                puVar7[uVar23 + 3] = *(byte *)((long)puVar20 + 1) & 0x3f | 0x80;
              }
              bVar14 = (byte)uVar19;
              uVar19 = uVar19 >> 6 | 0x800;
              puVar7[uVar23 + 2] = bVar14 & 0x3f | 0x80;
              goto LAB_71006d84a4;
            }
LAB_71006d84f0:
            bVar14 = (byte)uVar10;
            lVar11 = 1;
          }
          else {
            if (iVar22 == 4) {
              uVar19 = ((uint)(*puVar20 >> 8) | (*puVar20 & 0xff00ff) << 8) << 8;
              puVar20 = puVar20 + 1;
              goto LAB_71006d8444;
            }
            puVar21 = (ushort *)((long)puVar20 + 1);
            bVar14 = (byte)*puVar20;
            uVar19 = (uint)bVar14;
            uVar10 = (uint)bVar14;
            if (bVar14 < 0x80) goto LAB_71006d84f0;
LAB_71006d84e4:
            lVar11 = 2;
LAB_71006d84a4:
            bVar14 = (byte)(uVar19 >> 6) | 0xc0;
            puVar7[uVar23 + 1] = (byte)uVar19 & 0x3f | 0x80;
          }
          puVar7[uVar23] = bVar14;
          uVar23 = uVar23 + lVar11;
          puVar20 = puVar21;
        } while (puVar21 < puVar2);
      }
      puVar7[uVar23] = 0;
      if ((long)uVar23 < 0) {
        return (undefined1 *)0x0;
      }
      return puVar7;
    }
    if (uVar19 == 6) {
      if (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 0x10)) {
        puVar7 = (undefined1 *)FUN_71006d7ec0();
        return puVar7;
      }
      return (undefined1 *)0x0;
    }
    if (uVar19 != 10) {
      return (undefined1 *)0x0;
    }
  }
  pbVar5 = *(byte **)(param_1 + 8);
  pbVar9 = *(byte **)(param_1 + 0x10);
  if (pbVar9 == pbVar5) {
    return (undefined1 *)0x0;
  }
  if ((ulong)((long)pbVar9 - (long)pbVar5) < 5) {
    bVar14 = *pbVar5;
    uVar23 = -(ulong)(bVar14 >> 7);
    while( true ) {
      uVar23 = (ulong)bVar14 | uVar23 << 8;
      pbVar5 = pbVar5 + 1;
      if (pbVar9 <= pbVar5) break;
      bVar14 = *pbVar5;
    }
    puVar1 = &DAT_710083b998;
    if (uVar23 < 10) {
      puVar1 = &DAT_7100853d20;
    }
    puVar7 = (undefined1 *)FUN_71006a1060("%s%lx",puVar1);
    return puVar7;
  }
LAB_71006d804c:
  puVar7 = (undefined1 *)FUN_71006d78c0(pbVar5,pbVar9);
  return puVar7;
}



// ===== FUN_71006d8690 @ 71006d8690 (size=164) =====

void FUN_71006d8690(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = FUN_71006d7fb0(param_4);
  if (lVar1 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0xae0) & 1) != 0) {
    FUN_71006b1e70(param_1,param_2,param_3,lVar1);
  }
  if (param_2 == 0) {
    FUN_71006c08c0(param_1,"   %s: %s\n",param_3,lVar1);
  }
  (*(code *)PTR_FUN_7100af36a0)(lVar1);
  return;
}



// ===== FUN_71006d8740 @ 71006d8740 (size=652) =====

ulong FUN_71006d8740(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  byte *pbVar3;
  char *pcVar4;
  int iVar5;
  ulong uVar6;
  char cVar7;
  byte bVar8;
  byte *pbVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 extraout_x8;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_80 [8];
  ulong local_78;
  ulong local_70;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 auStack_40 [32];
  undefined1 auStack_20 [32];
  
  uVar13 = *(ulong *)(param_3 + 8);
  if (uVar13 < *(ulong *)(param_3 + 0x10)) {
    uVar14 = 0;
    do {
      uVar13 = FUN_71006d7980(auStack_80,uVar13);
      if (uVar13 == 0) {
        return 0xffffffffffffffff;
      }
      uVar1 = local_78;
      if (local_78 < local_70) {
        do {
          uVar1 = FUN_71006d7980(auStack_60,uVar1);
          if (uVar1 == 0) {
            return 0xffffffffffffffff;
          }
          uVar11 = uStack_50;
          lVar2 = FUN_71006d7980(auStack_40,local_58,uStack_50);
          if (lVar2 == 0) {
            return 0xffffffffffffffff;
          }
          lVar2 = FUN_71006d7980(auStack_20,lVar2,uVar11);
          if (lVar2 == 0) {
            return 0xffffffffffffffff;
          }
          pbVar3 = (byte *)FUN_71006d7fb0(extraout_x8);
          if (pbVar3 == (byte *)0x0) {
            return 0xffffffffffffffff;
          }
          uVar12 = 1;
          if (uVar14 != 0) {
            uVar6 = (ulong)*pbVar3;
            bVar8 = (&DAT_71009d32f1)[uVar6];
            pbVar9 = pbVar3;
            while ((bVar8 & 3) == 1) {
              pbVar9 = pbVar9 + 1;
              uVar6 = (ulong)*pbVar9;
              bVar8 = (&DAT_71009d32f1)[uVar6];
            }
            if ((int)uVar6 == 0) {
              if ((long)pbVar9 - (long)pbVar3 < 3) {
                puVar10 = &DAT_7100838888;
                uVar6 = 0x20;
                iVar5 = 0x2c;
              }
              else {
                puVar10 = &DAT_71008455d0;
                iVar5 = 0x2f;
              }
            }
            else {
              puVar10 = &DAT_71008455d0;
              uVar6 = 0;
              iVar5 = 0x2f;
            }
            lVar2 = 1 - uVar14;
            uVar12 = uVar14;
            while( true ) {
              uVar14 = uVar12 + 1;
              if (uVar12 < param_2) {
                *(char *)(param_1 + uVar12) = (char)iVar5;
              }
              iVar5 = (int)uVar6;
              if (iVar5 == 0) break;
              uVar6 = (ulong)(byte)puVar10[uVar14 + lVar2];
              uVar12 = uVar14;
            }
            uVar12 = uVar12 + 2;
          }
          bVar8 = *pbVar3;
          uVar6 = uVar14;
          if (bVar8 != 0) {
            do {
              uVar12 = uVar6;
              uVar6 = uVar12 + 1;
              if (uVar12 < param_2) {
                *(byte *)(param_1 + uVar12) = bVar8;
              }
              bVar8 = pbVar3[uVar6 - uVar14];
            } while (bVar8 != 0);
            uVar12 = uVar12 + 2;
          }
          (*(code *)PTR_FUN_7100af36a0)();
          if (uVar6 < param_2) {
            *(undefined1 *)(param_1 + uVar6) = 0x3d;
          }
          pcVar4 = (char *)FUN_71006d7fb0(auStack_20);
          if (pcVar4 == (char *)0x0) {
            return 0xffffffffffffffff;
          }
          cVar7 = *pcVar4;
          uVar14 = uVar12;
          if (cVar7 != '\0') {
            do {
              if (uVar14 < param_2) {
                *(char *)(param_1 + uVar14) = cVar7;
              }
              uVar14 = uVar14 + 1;
              cVar7 = pcVar4[uVar14 - uVar12];
            } while (cVar7 != '\0');
          }
          (*(code *)PTR_FUN_7100af36a0)();
        } while (uVar1 < local_70);
      }
    } while (uVar13 < *(ulong *)(param_3 + 0x10));
  }
  else {
    uVar14 = 0;
  }
  return uVar14;
}



// ===== FUN_71006d89d0 @ 71006d89d0 (size=116) =====

long FUN_71006d89d0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  lVar1 = FUN_71006d8740(0,0,param_1);
  if (-1 < lVar1) {
    lVar2 = (*(code *)PTR_FUN_7100af36a8)(lVar1 + 1);
    if (lVar2 != 0) {
      FUN_71006d8740(lVar2,lVar1 + 1,param_1);
      *(undefined1 *)(lVar2 + lVar1) = 0;
    }
  }
  return lVar2;
}



// ===== FUN_71006d8a50 @ 71006d8a50 (size=104) =====

undefined8 FUN_71006d8a50(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong extraout_x8;
  undefined1 auStack_20 [8];
  ulong local_18;
  ulong uStack_10;
  
  uVar1 = FUN_71006d7980(param_3,auStack_20);
  if (uVar1 != 0) {
    *param_1 = 0;
    param_1[1] = extraout_x8;
    param_1[2] = extraout_x8;
    *(undefined1 *)((long)param_1 + 0x19) = 0;
    if ((extraout_x8 <= uVar1) || (lVar3 = FUN_71006d7980(param_1,uVar1,extraout_x8), lVar3 != 0)) {
      if (local_18 < uStack_10) {
        uVar2 = FUN_71006d7ec0();
        return uVar2;
      }
    }
  }
  return 0;
}



// ===== FUN_71006d8ac0 @ 71006d8ac0 (size=624) =====

int FUN_71006d8ac0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  ulong extraout_x8_06;
  undefined8 extraout_x8_07;
  undefined8 extraout_x8_08;
  ulong extraout_x8_09;
  ulong extraout_x8_10;
  ulong uVar4;
  undefined8 extraout_x9;
  undefined8 *extraout_x9_00;
  undefined8 extraout_x9_01;
  undefined8 extraout_x9_02;
  undefined8 extraout_x9_03;
  undefined8 *extraout_x9_04;
  undefined8 *extraout_x9_05;
  undefined8 *extraout_x9_06;
  undefined8 *puVar5;
  undefined8 extraout_x10;
  ulong extraout_x10_00;
  undefined8 extraout_x10_01;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  undefined8 extraout_x11_02;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  char local_27;
  undefined1 auStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = param_3;
  lVar1 = FUN_71006d7980(auStack_40);
  if ((((lVar1 != 0) && (lVar1 = FUN_71006d7980(auStack_20,local_38,uStack_30), lVar1 != 0)) &&
      (lVar1 = FUN_71006d7980(param_1 + 0xc,lVar1,extraout_x8), lVar1 != 0)) &&
     (lVar1 = FUN_71006d7980(param_1 + 0x10,lVar1,extraout_x8_00), lVar1 != 0)) {
    param_1[4] = 0;
    param_1[5] = &DAT_71009bb2f0;
    param_1[6] = &DAT_71009bb2f1;
    lVar1 = FUN_71006d7980(extraout_x9,local_18,local_10);
    if ((lVar1 != 0) &&
       ((uVar2 = extraout_x8_01, puVar5 = extraout_x9_00, uVar8 = extraout_x11, local_27 != '\0' ||
        ((lVar1 = FUN_71006d7980(param_1 + 4,local_38,uStack_30), lVar1 != 0 &&
         (lVar1 = FUN_71006d7980(extraout_x9_03,extraout_x10_01,extraout_x8_07),
         uVar2 = extraout_x8_08, puVar5 = extraout_x9_04, uVar8 = extraout_x11_02, lVar1 != 0))))))
    {
      uVar6 = *puVar5;
      uVar9 = puVar5[3];
      uVar7 = puVar5[2];
      param_1[9] = puVar5[1];
      param_1[8] = uVar6;
      param_1[0xb] = uVar9;
      param_1[10] = uVar7;
      uVar2 = FUN_71006d7980(uVar8,lVar1,uVar2);
      lVar1 = FUN_71006d7980(param_1 + 0x14,uVar2,extraout_x8_02);
      if ((lVar1 != 0) &&
         ((((lVar1 = FUN_71006d7980(extraout_x9_01,lVar1,extraout_x8_03), lVar1 != 0 &&
            (lVar1 = FUN_71006d7980(param_1 + 0x18,local_38,uStack_30), lVar1 != 0)) &&
           ((lVar1 = FUN_71006d7980(param_1 + 0x1c,lVar1,extraout_x11_00), lVar1 != 0 &&
            (((lVar1 = FUN_71006d7980(param_1 + 0x20,extraout_x10,extraout_x8_04), lVar1 != 0 &&
              (lVar1 = FUN_71006d7980(param_1 + 0x24,lVar1,extraout_x8_05), lVar1 != 0)) &&
             (lVar1 = FUN_71006d7980(param_1 + 0x28,param_1[0x25],param_1[0x26]), lVar1 != 0))))))
          && (lVar1 = FUN_71006d7980(param_1 + 0x2c,lVar1,extraout_x11_01), lVar1 != 0)))) {
        local_27 = '\0';
        *(undefined1 *)((long)param_1 + 0x199) = 0;
        param_1[0x30] = 0;
        param_1[0x31] = &DAT_7100853d20;
        param_1[0x32] = &DAT_7100853d20;
        param_1[0x34] = 0;
        param_1[0x35] = &DAT_7100853d20;
        param_1[0x36] = &DAT_7100853d20;
        *(undefined1 *)((long)param_1 + 0x1b9) = 0;
        param_1[0x38] = 0;
        param_1[0x39] = &DAT_7100853d20;
        param_1[0x3a] = &DAT_7100853d20;
        *(undefined1 *)((long)param_1 + 0x1d9) = 0;
        if (extraout_x10_00 < extraout_x8_06) {
          uVar3 = FUN_71006d7980(extraout_x9_02,extraout_x10_00,extraout_x8_06);
          if (uVar3 == 0) {
            return -1;
          }
          uVar4 = extraout_x8_09;
          puVar5 = extraout_x9_05;
          if (local_27 == '\x01') {
            uVar2 = *extraout_x9_05;
            uVar6 = extraout_x9_05[3];
            uVar8 = extraout_x9_05[2];
            param_1[0x31] = extraout_x9_05[1];
            param_1[0x30] = uVar2;
            param_1[0x33] = uVar6;
            param_1[0x32] = uVar8;
            if (extraout_x8_09 <= uVar3) {
              return 0;
            }
            uVar3 = FUN_71006d7980(extraout_x9_05,uVar3,extraout_x8_09);
            uVar4 = extraout_x8_10;
            puVar5 = extraout_x9_06;
            if (uVar3 == 0) {
              return -1;
            }
          }
          if (local_27 == '\x02') {
            uVar2 = *puVar5;
            uVar6 = puVar5[3];
            uVar8 = puVar5[2];
            param_1[0x35] = puVar5[1];
            param_1[0x34] = uVar2;
            param_1[0x37] = uVar6;
            param_1[0x36] = uVar8;
            if (uVar4 <= uVar3) {
              return 0;
            }
            lVar1 = FUN_71006d7980(puVar5,uVar3,uVar4);
            if (lVar1 == 0) {
              return -1;
            }
          }
          if (local_27 == '\x03') {
            lVar1 = FUN_71006d7980(param_1 + 0x38,local_38,uStack_30);
            return -(uint)(lVar1 == 0);
          }
        }
        return 0;
      }
    }
  }
  return -1;
}



// ===== FUN_71006d8d30 @ 71006d8d30 (size=2212) =====

int FUN_71006d8d30(long *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  uint uVar11;
  undefined1 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined1 auStack_240 [8];
  undefined8 local_238;
  undefined8 local_230;
  long local_220;
  byte *local_218;
  byte *pbStack_210;
  ulong local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long lStack_1d0;
  byte *local_1b8;
  byte *pbStack_1b0;
  undefined1 auStack_1a0 [40];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 auStack_160 [32];
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [72];
  undefined8 local_98;
  undefined8 uStack_90;
  long local_78;
  undefined8 local_70;
  
  lVar13 = *param_1;
  iVar5 = 0;
  if ((param_2 != 0 & (*(byte *)(lVar13 + 0xae0) ^ 0xff)) == 0) {
    iVar5 = 0x3c;
    iVar4 = FUN_71006d8ac0(auStack_1e0,param_3,param_4);
    if (iVar4 == 0) {
      lVar6 = FUN_71006d89d0(auStack_e0);
      if (lVar6 != 0) {
        if ((*(byte *)(lVar13 + 0xae0) & 1) != 0) {
          FUN_71006b1e70(lVar13,param_2,"Subject",lVar6);
        }
        if (param_2 == 0) {
          FUN_71006c08c0(lVar13,"%2d Subject: %s\n",0,lVar6);
        }
        (*(code *)PTR_FUN_7100af36a0)(lVar6);
        lVar6 = FUN_71006d89d0(auStack_140);
        if (lVar6 != 0) {
          if ((*(byte *)(lVar13 + 0xae0) & 1) != 0) {
            FUN_71006b1e70(lVar13,param_2,"Issuer",lVar6);
          }
          if (param_2 == 0) {
            FUN_71006c08c0(lVar13,"   Issuer: %s\n",lVar6);
          }
          uVar14 = 0;
          (*(code *)PTR_FUN_7100af36a0)(lVar6);
          if (local_1b8 < pbStack_1b0) {
            do {
              pbVar7 = local_1b8 + 1;
              uVar14 = (ulong)*local_1b8 | uVar14 << 8;
              local_1b8 = pbVar7;
            } while (pbVar7 != pbStack_1b0);
          }
          if ((*(byte *)(lVar13 + 0xae0) & 1) != 0) {
            lVar6 = FUN_71006a1060(&DAT_710084a3f8,uVar14);
            if (lVar6 == 0) {
              return 0x1b;
            }
            FUN_71006b1e70(lVar13,param_2,"Version",lVar6);
            (*(code *)PTR_FUN_7100af36a0)(lVar6);
          }
          if (param_2 == 0) {
            FUN_71006c08c0(lVar13,"   Version: %lu (0x%lx)\n",uVar14 + 1,uVar14);
          }
          lVar6 = FUN_71006d7fb0(auStack_1a0);
          if (lVar6 != 0) {
            if ((*(byte *)(lVar13 + 0xae0) & 1) != 0) {
              FUN_71006b1e70(lVar13,param_2,"Serial Number",lVar6);
            }
            if (param_2 == 0) {
              FUN_71006c08c0(lVar13,"   Serial Number: %s\n",lVar6);
            }
            (*(code *)PTR_FUN_7100af36a0)(lVar6);
            lVar6 = FUN_71006d8a50(auStack_240,local_178,uStack_170);
            if (lVar6 != 0) {
              if ((*(byte *)(lVar13 + 0xae0) & 1) != 0) {
                FUN_71006b1e70(lVar13,param_2,"Signature Algorithm",lVar6);
              }
              if (param_2 == 0) {
                FUN_71006c08c0(lVar13,"   Signature Algorithm: %s\n",lVar6);
              }
              (*(code *)PTR_FUN_7100af36a0)(lVar6);
              lVar6 = FUN_71006d7fb0(auStack_120);
              if (lVar6 != 0) {
                if ((*(byte *)(lVar13 + 0xae0) & 1) != 0) {
                  FUN_71006b1e70(lVar13,param_2,"Start Date",lVar6);
                }
                if (param_2 == 0) {
                  FUN_71006c08c0(lVar13,"   Start Date: %s\n",lVar6);
                }
                (*(code *)PTR_FUN_7100af36a0)(lVar6);
                lVar6 = FUN_71006d7fb0(auStack_100);
                if (lVar6 != 0) {
                  if ((*(byte *)(lVar13 + 0xae0) & 1) != 0) {
                    FUN_71006b1e70(lVar13,param_2,"Expire Date",lVar6);
                  }
                  if (param_2 == 0) {
                    FUN_71006c08c0(lVar13,"   Expire Date: %s\n",lVar6);
                  }
                  (*(code *)PTR_FUN_7100af36a0)(lVar6);
                  lVar6 = FUN_71006d8a50(auStack_240,local_98,uStack_90);
                  if (lVar6 != 0) {
                    if ((*(byte *)(lVar13 + 0xae0) & 1) != 0) {
                      FUN_71006b1e70(lVar13,param_2,"Public Key Algorithm",lVar6);
                    }
                    if (param_2 == 0) {
                      FUN_71006c08c0(lVar13,"   Public Key Algorithm: %s\n",lVar6);
                    }
                    lVar8 = FUN_71006d7980(&local_200,local_78 + 1,local_70);
                    if (lVar8 != 0) {
                      iVar5 = FUN_71006ca300(lVar6,"rsaEncryption");
                      if (iVar5 == 0) {
                        iVar5 = FUN_71006ca300(lVar6,&DAT_710084a568);
                        if (iVar5 == 0) {
                          iVar5 = FUN_71006ca300(lVar6,"dhpublicnumber");
                          if (iVar5 != 0) {
                            lVar8 = FUN_71006d7980(&local_220,local_238,local_230);
                            if (lVar8 != 0) {
                              FUN_71006d8690(lVar13,param_2,"dh(p)",&local_220);
                              lVar8 = FUN_71006d7980(&local_220,local_238,local_230);
                              if (lVar8 != 0) {
                                FUN_71006d8690(lVar13,param_2,"dh(g)",&local_220);
                                FUN_71006d8690(lVar13,param_2,"dh(pub_key)",&local_200);
                              }
                            }
                          }
                        }
                        else {
                          lVar8 = FUN_71006d7980(&local_220,local_238,local_230);
                          if (lVar8 != 0) {
                            FUN_71006d8690(lVar13,param_2,"dsa(p)",&local_220);
                            lVar8 = FUN_71006d7980(&local_220,lVar8,local_230);
                            if (lVar8 != 0) {
                              FUN_71006d8690(lVar13,param_2,"dsa(q)",&local_220);
                              lVar8 = FUN_71006d7980(&local_220,lVar8,local_230);
                              if (lVar8 != 0) {
                                FUN_71006d8690(lVar13,param_2,"dsa(g)",&local_220);
                                FUN_71006d8690(lVar13,param_2,"dsa(pub_key)",&local_200);
                              }
                            }
                          }
                        }
                      }
                      else {
                        lVar8 = FUN_71006d7980(&local_220,local_1f8,local_1f0);
                        if (lVar8 != 0) {
                          bVar1 = *local_218;
                          pbVar7 = local_218;
                          while (bVar1 == 0) {
                            if (pbStack_210 <= pbVar7) {
                              uVar11 = 0;
                              uVar14 = ((long)pbStack_210 - (long)pbVar7) * 8;
                              if (uVar14 != 0) goto LAB_71006d8f60;
                              goto LAB_71006d8f78;
                            }
                            pbVar7 = pbVar7 + 1;
                            bVar1 = *pbVar7;
                          }
                          uVar11 = (uint)bVar1;
                          uVar14 = ((long)pbStack_210 - (long)pbVar7) * 8;
                          if (uVar14 != 0) {
                            for (; (uVar11 >> 7 & 1) == 0; uVar11 = uVar11 << 1) {
LAB_71006d8f60:
                              uVar14 = uVar14 - 1;
                            }
                            if (0x20 < uVar14) {
                              local_218 = pbVar7;
                            }
                          }
LAB_71006d8f78:
                          if (param_2 == 0) {
                            FUN_71006c08c0(lVar13,"   RSA Public Key (%lu bits)\n",uVar14);
                          }
                          if (((*(byte *)(lVar13 + 0xae0) & 1) != 0) &&
                             (lVar10 = FUN_71006a1060(&DAT_710084a540,uVar14), lVar10 != 0)) {
                            FUN_71006b1e70(lVar13,param_2,"RSA Public Key",lVar10);
                            (*(code *)PTR_FUN_7100af36a0)(lVar10);
                          }
                          FUN_71006d8690(lVar13,param_2,"rsa(n)",&local_220);
                          lVar8 = FUN_71006d7980(&local_220,lVar8,local_1f0);
                          if (lVar8 != 0) {
                            FUN_71006d8690(lVar13,param_2,"rsa(e)",&local_220);
                          }
                        }
                      }
                    }
                    (*(code *)PTR_FUN_7100af36a0)(lVar6);
                    lVar6 = FUN_71006d7fb0(auStack_160);
                    if (lVar6 != 0) {
                      if ((*(byte *)(lVar13 + 0xae0) & 1) != 0) {
                        FUN_71006b1e70(lVar13,param_2,"Signature",lVar6);
                      }
                      if (param_2 == 0) {
                        FUN_71006c08c0(lVar13,"   Signature: %s\n",lVar6);
                      }
                      (*(code *)PTR_FUN_7100af36a0)(lVar6);
                      iVar5 = FUN_71006b79d0(lVar13,local_1d8,lStack_1d0 - local_1d8,&local_220,
                                             &local_200);
                      if (iVar5 != 0) {
                        return iVar5;
                      }
                      puVar9 = (undefined1 *)
                               (*(code *)PTR_FUN_7100af36a8)
                                         (local_200 + 0x37 + (local_200 + 0x3f >> 6));
                      if (puVar9 == (undefined1 *)0x0) {
                        (*(code *)PTR_FUN_7100af36a0)(local_220);
                        return 0x1b;
                      }
                      *puVar9 = 0x2d;
                      lVar6 = 0;
                      do {
                        lVar8 = lVar6;
                        lVar6 = lVar8 + 1;
                        puVar12 = puVar9 + lVar6;
                        if (lVar6 == 0x40) {
                          puVar12 = puVar9 + 0x40;
                          lVar8 = 0x41;
                          goto LAB_71006d9084;
                        }
                        cVar2 = "-----BEGIN CERTIFICATE-----"[lVar8 + 1];
                        puVar9[lVar6] = cVar2;
                      } while (cVar2 != '\0');
                      lVar8 = lVar8 + 2;
LAB_71006d9084:
                      *puVar12 = 10;
                      if (local_200 != 0) {
                        uVar14 = 0;
                        do {
                          lVar6 = 0;
                          do {
                            cVar2 = *(char *)(local_220 + uVar14 + lVar6);
                            lVar10 = lVar6 + lVar8;
                            puVar9[lVar6 + lVar8] = cVar2;
                            lVar6 = lVar6 + 1;
                            if (cVar2 == '\0') goto LAB_71006d90c8;
                          } while (lVar6 != 0x40);
                          lVar10 = lVar8 + 0x40;
                          lVar6 = 0x41;
LAB_71006d90c8:
                          puVar9[lVar10] = 10;
                          uVar14 = uVar14 + 0x40;
                          lVar8 = lVar8 + lVar6;
                        } while (uVar14 < local_200);
                      }
                      puVar9[lVar8] = 0x2d;
                      lVar6 = 0;
                      do {
                        lVar10 = lVar6 + 1;
                        lVar3 = lVar10 + lVar8;
                        if (lVar10 == 0x40) {
                          lVar3 = lVar8 + 0x40;
                          break;
                        }
                        cVar2 = "-----END CERTIFICATE-----"[lVar6 + 1];
                        puVar9[lVar10 + lVar8] = cVar2;
                        lVar6 = lVar10;
                      } while (cVar2 != '\0');
                      puVar9[lVar3] = 10;
                      puVar9[lVar10 + lVar8 + 1] = 0;
                      (*(code *)PTR_FUN_7100af36a0)(local_220);
                      if ((*(byte *)(lVar13 + 0xae0) & 1) != 0) {
                        FUN_71006b1e70(lVar13,param_2,&DAT_710084a630,puVar9);
                      }
                      if (param_2 == 0) {
                        FUN_71006c08c0(lVar13,"%s\n",puVar9);
                      }
                      (*(code *)PTR_FUN_7100af36a0)(puVar9);
                      return 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
      return 0x1b;
    }
  }
  return iVar5;
}



// ===== FUN_71006d95e0 @ 71006d95e0 (size=472) =====

undefined8 FUN_71006d95e0(long param_1,byte *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  uint uVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong local_240 [72];
  
  uVar2 = *(ulong *)(param_1 + 8);
  local_240[1] = *(ulong *)(param_1 + 0x10);
  local_240[3] = *(ulong *)(param_1 + 0x20);
  local_240[2] = *(ulong *)(param_1 + 0x18);
  local_240[5] = *(ulong *)(param_1 + 0x30);
  local_240[4] = *(ulong *)(param_1 + 0x28);
  local_240[7] = *(ulong *)(param_1 + 0x40);
  local_240[6] = *(ulong *)(param_1 + 0x38);
  puVar3 = local_240 + 8;
  do {
    puVar5 = puVar3 + 1;
    *puVar3 = (ulong)param_2[1] << 0x10 | (ulong)*param_2 << 0x18 |
              (ulong)CONCAT11(param_2[2],param_2[3]);
    param_2 = param_2 + 4;
    puVar3 = puVar5;
  } while (local_240 + 0x18 != puVar5);
  puVar3 = local_240 + 8;
  do {
    puVar5 = puVar3 + 1;
    uVar4 = (uint)puVar3[1];
    uVar1 = (uint)puVar3[0xe];
    puVar3[0x10] = (ulong)((uVar1 >> 0x13 | uVar1 << 0xd) ^ (uVar1 >> 0x11 | uVar1 << 0xf) ^
                          uVar1 >> 10) +
                   (ulong)((uVar4 >> 0x12 | uVar4 << 0xe) ^ (uVar4 >> 7 | uVar4 << 0x19) ^
                          uVar4 >> 3) + puVar3[9] + *puVar3;
    puVar3 = puVar5;
  } while (local_240 + 0x38 != puVar5);
  lVar11 = 0x428a2f98;
  lVar7 = 1;
  lVar6 = 8;
  uVar9 = local_240[5];
  while( true ) {
    uVar10 = local_240[2];
    local_240[2] = local_240[1];
    uVar8 = local_240[6];
    local_240[5] = local_240[4];
    local_240[1] = uVar2;
    lVar7 = lVar7 + 1;
    lVar11 = (ulong)(((uint)(local_240[5] >> 6) & 0x3ffffff | (uint)(local_240[5] << 0x1a)) ^
                     ((uint)(local_240[5] >> 0xb) & 0x1fffff | (uint)(local_240[5] << 0x15)) ^
                    ((uint)local_240[5] >> 0x19 | (uint)local_240[5] << 7)) +
             ((uVar9 ^ uVar8) & local_240[5] ^ uVar8) + *(long *)((long)local_240 + lVar6 + 0x38) +
             local_240[7] + lVar11;
    lVar6 = lVar7 * 8;
    local_240[4] = lVar11 + local_240[3];
    uVar2 = (ulong)(((uint)(local_240[1] >> 2) & 0x3fffffff | (uint)(local_240[1] << 0x1e)) ^
                    ((uint)(local_240[1] >> 0xd) & 0x7ffff | (uint)(local_240[1] << 0x13)) ^
                   ((uint)local_240[1] >> 0x16 | (uint)local_240[1] << 10)) +
            ((local_240[1] | local_240[2]) & uVar10 | local_240[1] & local_240[2]) + lVar11;
    if (lVar7 == 0x41) break;
    lVar11 = *(long *)("2.5.29.17" + lVar6 + 8);
    local_240[6] = uVar9;
    uVar9 = local_240[5];
    local_240[3] = uVar10;
    local_240[7] = uVar8;
  }
  local_240[3] = uVar10;
  local_240[6] = uVar9;
  local_240[7] = uVar8;
  lVar7 = 8;
  while( true ) {
    *(ulong *)(param_1 + lVar7) = *(long *)(param_1 + lVar7) + uVar2;
    if (lVar7 + 8 == 0x48) break;
    uVar2 = *(ulong *)((long)local_240 + lVar7);
    lVar7 = lVar7 + 8;
  }
  return 0;
}



// ===== FUN_71006d9a30 @ 71006d9a30 (size=484) =====

int FUN_71006d9a30(long *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  short *local_10;
  ulong local_8;
  
  iVar2 = FUN_710069f7f0(*param_1,*(undefined8 *)(*param_1 + 0x1608),0,&local_10,&local_8,0);
  puVar1 = PTR_FUN_7100af36a8;
  if (iVar2 != 0) {
    return iVar2;
  }
  if ((*(uint *)(param_1[0xc9] + 0x80) >> 4 & 1) == 0) {
    if ((*(uint *)(param_1[0xc9] + 0x80) >> 5 & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = local_8 + 1;
      if ((local_8 < 2) || (*(char *)((long)local_10 + 1) != '~')) {
        lVar3 = (*(code *)PTR_FUN_7100af36a8)(lVar3);
        if (lVar3 == 0) goto LAB_71006d9bdc;
        FUN_710080f900(lVar3,local_10,local_8 + 1);
      }
      else {
        lVar4 = FUN_710081ce00(param_2);
        lVar3 = (*(code *)puVar1)(lVar4 + lVar3);
        if (lVar3 == 0) {
LAB_71006d9bdc:
          (*(code *)PTR_FUN_7100af36a0)(local_10);
          return 0x1b;
        }
        FUN_710080f900(lVar3,param_2,lVar4);
        *(undefined1 *)(lVar3 + lVar4) = 0x2f;
        *(undefined1 *)(lVar3 + lVar4 + 1) = 0;
        if (3 < local_8) {
          FUN_710080f900(lVar3 + lVar4 + 1,(long)local_10 + 3,local_8 - 2);
        }
      }
    }
  }
  else {
    lVar3 = (*(code *)PTR_FUN_7100af36a8)(local_8 + 1);
    if (lVar3 == 0) {
      (*(code *)PTR_FUN_7100af36a0)(local_10);
      return 0x1b;
    }
    if (((local_8 < 4) || (*local_10 != 0x7e2f)) || ((char)local_10[1] != '/')) {
      FUN_710080f900(lVar3,local_10,local_8 + 1);
    }
    else {
      FUN_710080f900(lVar3,(long)local_10 + 3,local_8 - 2);
    }
  }
  (*(code *)PTR_FUN_7100af36a0)(local_10);
  *param_3 = lVar3;
  return 0;
}



// ===== FUN_71006d9c20 @ 71006d9c20 (size=700) =====

undefined8 FUN_71006d9c20(long *param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  char *pcVar13;
  ulong uVar14;
  uint uVar15;
  char *pcVar16;
  
  pcVar16 = (char *)*param_1;
  if (*pcVar16 == '\0') {
    *param_1 = 0;
    *param_2 = 0;
    return 0x15;
  }
  lVar5 = FUN_7100806ae0(pcVar16,&DAT_71009bb508);
  pcVar13 = pcVar16 + lVar5;
  lVar6 = FUN_710081ce00(pcVar13);
  lVar7 = FUN_710081ce00(param_3);
  lVar6 = (*(code *)PTR_FUN_7100af36a8)(lVar6 + lVar7 + 2);
  *param_2 = lVar6;
  if (lVar6 == 0) {
    uVar10 = 0x1b;
  }
  else {
    cVar2 = pcVar16[lVar5];
    if (cVar2 == '\"' || cVar2 == '\'') {
      pcVar13 = pcVar13 + 1;
      uVar11 = 0;
      uVar14 = 0;
      while( true ) {
        uVar12 = (uint)uVar14;
        cVar3 = pcVar13[uVar14];
        uVar15 = (uint)uVar11;
        if (cVar2 == cVar3) break;
        if (cVar3 == '\0') goto LAB_71006d9d38;
        if (cVar3 == '\\') {
          uVar12 = uVar12 + 1;
          bVar4 = pcVar13[uVar12];
          uVar1 = bVar4 - 0x22 & 0xff;
          if ((0x3a < uVar1) || ((-0x400000000000022 >> ((ulong)uVar1 & 0x3f) & 1U) != 0))
          goto LAB_71006d9d38;
        }
        else {
          bVar4 = pcVar13[uVar14];
        }
        *(byte *)(lVar6 + uVar11) = bVar4;
        uVar14 = (ulong)(uVar12 + 1);
        uVar15 = uVar15 + 1;
        uVar8 = FUN_710081ce00(pcVar13);
        uVar11 = (ulong)uVar15;
        if (uVar8 < uVar14) goto LAB_71006d9e04;
        lVar6 = *param_2;
      }
      uVar14 = (ulong)(uVar12 + 1);
      *(undefined1 *)(lVar6 + uVar11) = 0;
LAB_71006d9e04:
      if (uVar15 != 0) {
        lVar5 = FUN_7100806ae0(pcVar13 + uVar14,&DAT_71009bb508);
        *param_1 = (long)(pcVar13 + uVar14 + lVar5);
        return 0;
      }
      lVar6 = *param_2;
LAB_71006d9d38:
      (*(code *)PTR_FUN_7100af36a0)(lVar6);
      *param_2 = 0;
      return 0x15;
    }
    pcVar9 = (char *)FUN_710081b940(pcVar13,&DAT_71009bb508);
    if (pcVar9 == (char *)0x0) {
      lVar6 = FUN_710081ce00(pcVar13);
      pcVar9 = pcVar13 + lVar6;
    }
    lVar6 = FUN_7100806ae0(pcVar9,&DAT_71009bb508);
    *param_1 = (long)(pcVar9 + lVar6);
    if (pcVar16[lVar5] == '/') {
      lVar5 = 0;
      lVar6 = *param_2;
      if ((pcVar13[1] == '~') && (pcVar13[2] == '/')) {
        pcVar13 = pcVar13 + 3;
        FUN_710081b7c0(lVar6,param_3);
        lVar6 = FUN_710081ce00(param_3);
        lVar5 = lVar6 + 1;
        *(undefined1 *)(*param_2 + lVar6) = 0x2f;
        *(undefined1 *)(*param_2 + lVar5) = 0;
        lVar6 = *param_2;
      }
    }
    else {
      lVar6 = *param_2;
      lVar5 = 0;
    }
    lVar7 = (long)((int)pcVar9 - (int)pcVar13);
    FUN_710080f900(lVar6 + lVar5,pcVar13,lVar7);
    uVar10 = 0;
    *(undefined1 *)(*param_2 + lVar7 + lVar5) = 0;
  }
  return uVar10;
}



// ===== FUN_71006d9ee0 @ 71006d9ee0 (size=124) =====

undefined8 FUN_71006d9ee0(long param_1,ulong param_2,uint *param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = *param_3;
  while( true ) {
    iVar1 = uVar3 + 1;
    if (param_2 < uVar3 + 1) {
      return 2;
    }
    bVar2 = *(byte *)(param_1 + (ulong)uVar3);
    if ((bVar2 & 0xc0) == 0xc0) {
      if (param_2 < uVar3 + 2) {
        return 2;
      }
      *param_3 = uVar3 + 2;
      return 0;
    }
    if ((bVar2 & 0xc0) != 0) {
      return 1;
    }
    uVar3 = (uint)bVar2 + iVar1;
    if (param_2 < (uint)bVar2 + iVar1) break;
    *param_3 = uVar3;
    if (bVar2 == 0) {
      return 0;
    }
  }
  return 2;
}



// ===== FUN_71006d9f60 @ 71006d9f60 (size=156) =====

undefined8 FUN_71006d9f60(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0xf40);
  *(int *)(lVar3 + 0x630) = *(int *)(lVar3 + 0x630) + -1;
  FUN_71006c08c0(lVar3,"a DOH request is completed, %u to go\n");
  if (param_2 == 0) {
    iVar1 = *(int *)(lVar3 + 0x630);
  }
  else {
    uVar2 = FUN_71006a6780(param_2);
    FUN_71006c08c0(lVar3,"DOH request %s\n",uVar2);
    iVar1 = *(int *)(lVar3 + 0x630);
  }
  if (iVar1 != 0) {
    return 0;
  }
  FUN_71006a8740(*(undefined8 *)(lVar3 + 0x1d8));
  *(undefined8 *)(lVar3 + 0x1d8) = 0;
  FUN_71006a42b0(lVar3,0,7);
  return 0;
}



// ===== FUN_71006da000 @ 71006da000 (size=140) =====

long FUN_71006da000(undefined8 param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  
  param_2 = param_2 * param_3;
  if ((ulong)(param_2 + param_4[1]) < 0xbb9) {
    lVar1 = FUN_71006a7480(*param_4);
    *param_4 = lVar1;
    if (lVar1 != 0) {
      FUN_710080f900(lVar1 + param_4[1],param_1,param_2);
      param_4[1] = param_4[1] + param_2;
      return param_2;
    }
  }
  return 0;
}



// ===== FUN_71006da090 @ 71006da090 (size=212) =====

undefined8 FUN_71006da090(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar1 = param_3 + 1;
  lVar3 = param_1[1];
  if (lVar3 == 0) {
    param_1[2] = lVar1;
    lVar3 = (*(code *)PTR_FUN_7100af36a8)(lVar1);
    param_1[1] = lVar3;
    if (lVar3 == 0) {
      return 5;
    }
  }
  else {
    uVar2 = param_1[2] + lVar1;
    if ((ulong)param_1[2] < uVar2) {
      param_1[2] = uVar2;
      lVar3 = (*(code *)PTR_FUN_7100af36b0)(lVar3,uVar2);
      if (lVar3 == 0) {
        (*(code *)PTR_FUN_7100af36a0)(param_1[1]);
        return 5;
      }
      param_1[1] = lVar3;
    }
  }
  FUN_710080f900(lVar3 + *param_1,param_2,param_3);
  lVar1 = *param_1;
  *param_1 = param_3 + lVar1;
  *(undefined1 *)(param_1[1] + param_3 + lVar1) = 0;
  return 0;
}



// ===== FUN_71006da170 @ 71006da170 (size=1572) =====

int FUN_71006da170(long param_1,long *param_2,undefined4 param_3,char *param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  char *pcVar10;
  long *plVar11;
  long lVar12;
  long local_18;
  undefined8 local_10;
  undefined1 auStack_8 [8];
  
  lVar1 = (long)param_2 + 0xc;
  local_18 = 0;
  lVar6 = FUN_710081ce00(param_4);
  if (param_4[lVar6 + -1] != '.') {
    lVar6 = lVar6 + 1;
  }
  if (0x110 < lVar6 + 0x11U) {
    uVar8 = 0xd;
LAB_71006da38c:
    FUN_71006c0a00(param_1,"Failed to encode DOH packet [%d]\n",uVar8);
    return 0x1b;
  }
  plVar11 = param_2 + 3;
  *(undefined4 *)((long)param_2 + 0x14) = 0;
  *(undefined8 *)((long)param_2 + 0xc) = 0x10000010000;
  while (pcVar10 = param_4, *param_4 != '\0') {
    while( true ) {
      lVar6 = FUN_710080eb40(pcVar10,0x2e);
      lVar9 = lVar6 - (long)pcVar10;
      if (lVar6 == 0) break;
      if (0x3e < lVar9 - 1U) goto LAB_71006da3c0;
      lVar12 = (long)plVar11 + 1;
      *(char *)plVar11 = (char)lVar9;
      plVar11 = (long *)(lVar12 + lVar9);
      FUN_710080f900(lVar12,pcVar10,lVar9);
      pcVar10 = (char *)(lVar6 + 1);
      if (*(char *)(lVar6 + 1) == '\0') goto LAB_71006da238;
    }
    lVar6 = FUN_710081ce00(pcVar10,pcVar10);
    param_4 = pcVar10 + lVar6;
    if (0x3e < lVar6 - 1U) {
LAB_71006da3c0:
      uVar8 = 1;
      param_2[0x42] = 0;
      goto LAB_71006da38c;
    }
    lVar9 = (long)plVar11 + 1;
    *(char *)plVar11 = (char)lVar6;
    plVar11 = (long *)(lVar9 + lVar6);
    FUN_710080f900(lVar9,pcVar10,lVar6);
  }
LAB_71006da238:
  *(undefined2 *)plVar11 = 0;
  lVar6 = (long)plVar11 + (5 - lVar1);
  *(char *)((long)plVar11 + 2) = (char)param_3;
  *(undefined2 *)((long)plVar11 + 3) = 0x100;
  *(undefined4 *)(param_2 + 1) = param_3;
  param_2[0x42] = lVar6;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  if ((*(ulong *)(param_1 + 0xf60) >> 0x38 & 1) == 0) {
    lVar6 = 0;
    lVar9 = FUN_71006a1800(param_1,0,1);
joined_r0x0071006da378:
    if (lVar9 < 1) {
      iVar3 = 0x1c;
    }
    else {
      iVar3 = FUN_71006c2200(&local_18);
      if (((((iVar3 == 0) && (iVar3 = FUN_71006af3f0(local_18,0x2712,param_5), iVar3 == 0)) &&
           (iVar3 = FUN_71006af3f0(local_18,0x4e2b,FUN_71006da000), iVar3 == 0)) &&
          (iVar3 = FUN_71006af3f0(local_18,0x2711,param_2 + 0x43), iVar3 == 0)) &&
         (((((*(ulong *)(param_1 + 0xf60) >> 0x38 & 1) != 0 ||
            ((iVar3 = FUN_71006af3f0(local_18,0x271f,lVar1), iVar3 == 0 &&
             (iVar3 = FUN_71006af3f0(local_18,0x3c,param_2[0x42]), iVar3 == 0)))) &&
           (iVar3 = FUN_71006af3f0(local_18,0x2727,param_7), iVar3 == 0)) &&
          ((iVar3 = FUN_71006af3f0(local_18,0xb5,2), iVar3 == 0 &&
           (iVar4 = FUN_71006af3f0(local_18,0x9b,lVar9), iVar3 = iVar4, iVar4 == 0)))))) {
        uVar7 = *(ulong *)(param_1 + 0xf60);
        if (((uint)uVar7 >> 0x1e & 1) != 0) {
          iVar3 = FUN_71006af3f0(local_18,0x29,1);
          if (iVar3 != 0) goto LAB_71006da2a0;
          uVar7 = *(ulong *)(param_1 + 0xf60);
        }
        if (((((uVar7 >> 0x22 & 1) == 0) || (iVar3 = FUN_71006af3f0(local_18,99,1), iVar3 == 0)) &&
            (((*(byte *)(param_1 + 0xae0) >> 1 & 1) == 0 ||
             (iVar3 = FUN_71006af3f0(local_18,0xe9,1), iVar3 == 0)))) &&
           (((*(byte *)(param_1 + 0xa88) >> 1 & 1) == 0 ||
            (iVar3 = FUN_71006af3f0(local_18,0x51,2), iVar3 == 0)))) {
          bVar2 = *(byte *)(param_1 + 0xb38);
          if ((bVar2 >> 1 & 1) != 0) {
            iVar3 = FUN_71006af3f0(local_18,0xf9,2);
            if (iVar3 != 0) goto LAB_71006da2a0;
            bVar2 = *(byte *)(param_1 + 0xb38);
          }
          if ((((((bVar2 & 1) == 0) || (iVar3 = FUN_71006af3f0(local_18,0xf8,1), iVar3 == 0)) &&
               ((*(long *)(param_1 + 0xd08) == 0 ||
                (iVar3 = FUN_71006af3f0(local_18,0x2806), iVar3 == 0)))) &&
              (((*(long *)(param_1 + 0xd60) == 0 ||
                (iVar3 = FUN_71006af3f0(local_18,0x2814), iVar3 == 0)) &&
               (((*(byte *)(param_1 + 0xb90) >> 3 & 1) == 0 ||
                (iVar3 = FUN_71006af3f0(local_18,0x105,2), iVar3 == 0)))))) &&
             ((*(long *)(param_1 + 0xcf8) == 0 ||
              (iVar3 = FUN_71006af3f0(local_18,0x2807), iVar3 == 0)))) {
            bVar2 = *(byte *)(param_1 + 0xa88);
            if ((bVar2 & 1) != 0) {
              iVar3 = FUN_71006af3f0(local_18,0x40,1);
              if (iVar3 != 0) goto LAB_71006da2a0;
              bVar2 = *(byte *)(param_1 + 0xa88);
            }
            if ((((((((bVar2 >> 2 & 1) == 0) ||
                    (iVar3 = FUN_71006af3f0(local_18,0xe8,1), iVar3 == 0)) &&
                   ((*(long *)(param_1 + 0xd00) == 0 ||
                    (iVar3 = FUN_71006af3f0(local_18,0x2751), iVar3 == 0)))) &&
                  ((*(long *)(param_1 + 0xcf0) == 0 ||
                   (iVar3 = FUN_71006af3f0(local_18,0x2771), iVar3 == 0)))) &&
                 ((*(long *)(param_1 + 0xd58) == 0 ||
                  (iVar3 = FUN_71006af3f0(local_18,0x27b9), iVar3 == 0)))) &&
                (((((*(byte *)(param_1 + 0xae0) & 1) == 0 ||
                   (iVar3 = FUN_71006af3f0(local_18,0xac,1), iVar3 == 0)) &&
                  ((*(long *)(param_1 + 0xd48) == 0 ||
                   (iVar3 = FUN_71006af3f0(local_18,0x275c), iVar3 == 0)))) &&
                 (((*(long *)(param_1 + 0xd40) == 0 ||
                   (iVar3 = FUN_71006af3f0(local_18,0x275d), iVar3 == 0)) &&
                  (((*(byte *)(param_1 + 0xae0) >> 3 & 1) == 0 ||
                   (iVar3 = FUN_71006af3f0(local_18,0xd8,2), iVar3 == 0)))))))) &&
               (((*(long *)(param_1 + 0xaa8) == 0 ||
                 (iVar3 = FUN_71006af3f0(local_18,0x4e8c), iVar3 == 0)) &&
                ((*(long *)(param_1 + 0xab0) == 0 ||
                 (iVar3 = FUN_71006af3f0(local_18,0x277d), iVar3 == 0)))))) {
              *(long *)(local_18 + 0xf40) = param_1;
              *(code **)(local_18 + 0xf38) = FUN_71006d9f60;
              *param_2 = local_18;
              iVar5 = FUN_71006a44d0(param_6);
              iVar3 = iVar4;
              if (iVar5 == 0) {
                (*(code *)PTR_FUN_7100af36a0)(lVar6);
                return 0;
              }
            }
          }
        }
      }
    }
  }
  else {
    iVar3 = FUN_71006b79e0(param_1,lVar1,lVar6,&local_10,auStack_8);
    if (iVar3 == 0) {
      lVar6 = FUN_71006a1060("%s?dns=%s",param_5,local_10);
      (*(code *)PTR_FUN_7100af36a0)(local_10);
      if (lVar6 != 0) {
        lVar9 = FUN_71006a1800(param_1,0,1);
        param_5 = lVar6;
        goto joined_r0x0071006da378;
      }
      iVar3 = 0x1b;
    }
    lVar6 = 0;
  }
LAB_71006da2a0:
  (*(code *)PTR_FUN_7100af36a0)(lVar6);
  FUN_71006c1e10(&local_18);
  return iVar3;
}



// ===== FUN_71006da7a0 @ 71006da7a0 (size=332) =====

undefined8 FUN_71006da7a0(long *param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *param_1;
  *param_4 = 1;
  FUN_7100808340(lVar5 + 0x1d8,0,0x470);
  *(undefined8 *)(lVar5 + 0x638) = param_2;
  *(undefined4 *)(lVar5 + 0x640) = param_3;
  lVar2 = FUN_71006a8670(0,"Content-Type: application/dns-message");
  *(long *)(lVar5 + 0x1d8) = lVar2;
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar5 + 0xc0);
    uVar3 = *(undefined8 *)(lVar5 + 0xe40);
    if (param_1[0xcb] != 2) {
      iVar1 = FUN_71006da170(lVar5,lVar5 + 0x1e0,1,param_2,uVar3,uVar4,lVar2);
      if (iVar1 != 0) {
        uVar3 = *(undefined8 *)(lVar5 + 0x1d8);
        goto LAB_71006da8a4;
      }
      lVar2 = param_1[0xcb];
      *(int *)(lVar5 + 0x630) = *(int *)(lVar5 + 0x630) + 1;
      if (lVar2 == 1) {
        return 0;
      }
      uVar4 = *(undefined8 *)(lVar5 + 0xc0);
      lVar2 = *(long *)(lVar5 + 0x1d8);
      uVar3 = *(undefined8 *)(lVar5 + 0xe40);
    }
    iVar1 = FUN_71006da170(lVar5,lVar5 + 0x408,0x1c,param_2,uVar3,uVar4,lVar2);
    if (iVar1 == 0) {
      *(int *)(lVar5 + 0x630) = *(int *)(lVar5 + 0x630) + 1;
      return 0;
    }
    uVar3 = *(undefined8 *)(lVar5 + 0x1d8);
  }
LAB_71006da8a4:
  FUN_71006a8740(uVar3);
  *(undefined8 *)(lVar5 + 0x1d8) = 0;
  FUN_71006c1e10(lVar5 + 0x1e0);
  FUN_71006c1e10(lVar5 + 0x408);
  return 0;
}



// ===== FUN_71006da8f0 @ 71006da8f0 (size=3008) =====

char FUN_71006da8f0(long *param_1,long *param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  byte bVar9;
  ushort uVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong uVar18;
  uint uVar19;
  int extraout_w8;
  int extraout_w8_00;
  ulong extraout_x8;
  char *extraout_x9;
  char *extraout_x9_00;
  uint extraout_w10;
  uint extraout_w10_00;
  long lVar20;
  int *piVar21;
  int iVar22;
  uint *puVar23;
  uint *puVar24;
  long lVar25;
  undefined1 *puVar26;
  char *pcVar27;
  uint *puVar28;
  uint uVar29;
  ulong uVar30;
  uint uVar31;
  undefined8 uVar32;
  char *pcVar33;
  char *local_338;
  uint local_2d8;
  int local_2d4;
  uint local_2d0 [2];
  undefined1 auStack_2c6 [118];
  uint local_250;
  uint local_24c;
  int local_248;
  undefined8 local_244;
  uint auStack_23c [117];
  uint local_68;
  long alStack_60 [12];
  
  lVar20 = *param_1;
  *param_2 = 0;
  if ((*(long *)(lVar20 + 0x1e0) == 0) && (*(long *)(lVar20 + 0x408) == 0)) {
    FUN_71006c0a00(lVar20,"Could not DOH-resolve: %s",param_1[0xe0]);
    return ((*(uint *)((long)param_1 + 0x624) & 0x20) == 0) + '\x05';
  }
  if (*(int *)(lVar20 + 0x630) != 0) {
    return '\0';
  }
  puVar24 = &local_250;
  puVar23 = (uint *)(lVar20 + 0x1e8);
  puVar28 = &local_2d8;
  FUN_71006a61a0(*(undefined8 *)(lVar20 + 0xc0));
  FUN_71006c1e10(lVar20 + 0x1e0);
  FUN_71006a61a0(*(undefined8 *)(lVar20 + 0xc0),*(undefined8 *)(lVar20 + 0x408));
  FUN_71006c1e10(lVar20 + 0x408);
  FUN_7100808340(puVar24,0,0x250);
  local_250 = 0x7fffffff;
  local_338 = "Too small";
LAB_71006da994:
  uVar30 = *(ulong *)(puVar23 + 0x86);
  uVar6 = *puVar23;
  pcVar33 = *(char **)(puVar23 + 0x84);
  uVar12 = 0xc;
  local_2d0[0] = 0xc;
  if (uVar30 < 0xc) {
    uVar12 = 4;
    pcVar27 = local_338;
    goto LAB_71006dad64;
  }
  if (((pcVar33 == (char *)0x0) || (*pcVar33 != '\0')) || (pcVar33[1] != '\0')) {
    pcVar27 = "Bad ID";
    goto LAB_71006dad64;
  }
  if ((pcVar33[3] & 0xfU) != 0) {
    uVar12 = 8;
    pcVar27 = "Bad RCODE";
    goto LAB_71006dad64;
  }
  uVar12 = (uint)(*(ushort *)(pcVar33 + 4) >> 8) | (*(ushort *)(pcVar33 + 4) & 0xff00ff) << 8;
  if (uVar12 != 0) {
    do {
      uVar12 = FUN_71006d9ee0(uVar12 - 1,pcVar33,uVar30);
      pcVar27 = pcVar33;
      if (uVar12 != 0) goto LAB_71006daa24;
      uVar13 = local_2d0[0] + 4;
      if (extraout_x1 < local_2d0[0] + 4) goto LAB_71006daef8;
      uVar12 = (uint)extraout_x8 & 0xffff;
      uVar30 = extraout_x1;
      local_2d0[0] = uVar13;
    } while ((extraout_x8 & 0xffff) != 0);
  }
  uVar13 = (uint)(*(ushort *)(pcVar33 + 6) >> 8) | (*(ushort *)(pcVar33 + 6) & 0xff00ff) << 8;
  if (uVar13 == 0) {
    uVar19 = 0;
    pcVar27 = pcVar33;
  }
  else {
    do {
      uVar12 = FUN_71006d9ee0(pcVar33,uVar30,local_2d0);
      if (uVar12 != 0) {
LAB_71006db244:
        pcVar27 = *(char **)(puVar23 + 0x84);
        goto LAB_71006daa24;
      }
      uVar12 = local_2d0[0];
      if (uVar30 < local_2d0[0] + 2) {
LAB_71006db098:
        local_2d0[0] = uVar12;
        uVar12 = 2;
        pcVar33 = *(char **)(puVar23 + 0x84);
        pcVar27 = "Out of range";
        goto LAB_71006dad64;
      }
      uVar10 = CONCAT11(pcVar33[(int)local_2d0[0]],pcVar33[(long)(int)local_2d0[0] + 1]);
      uVar19 = (uint)uVar10;
      if ((uVar19 != 0x27 && uVar19 != 5) && (uVar6 != uVar19)) {
        uVar12 = 9;
        pcVar33 = *(char **)(puVar23 + 0x84);
        pcVar27 = "Unexpected TYPE";
        goto LAB_71006dad64;
      }
      uVar31 = local_2d0[0] + 4;
      if (uVar30 < local_2d0[0] + 4) goto LAB_71006db098;
      if (CONCAT11(pcVar33[(int)(local_2d0[0] + 2)],pcVar33[(long)(int)(local_2d0[0] + 2) + 1]) != 1
         ) {
        uVar12 = 10;
        pcVar33 = *(char **)(puVar23 + 0x84);
        pcVar27 = "Unexpected CLASS";
        goto LAB_71006dad64;
      }
      uVar12 = uVar31;
      if (uVar30 < local_2d0[0] + 8) goto LAB_71006db098;
      uVar31 = (*(uint *)(pcVar33 + (int)uVar31) & 0xff00ff00) >> 8 |
               (*(uint *)(pcVar33 + (int)uVar31) & 0xff00ff) << 8;
      uVar31 = uVar31 >> 0x10 | uVar31 << 0x10;
      if (uVar31 < local_250) {
        local_250 = uVar31;
      }
      uVar18 = (ulong)(local_2d0[0] + 10);
      uVar31 = local_2d0[0] + 10;
      if (uVar30 < uVar18) goto LAB_71006db098;
      uVar4 = (uint)CONCAT11(pcVar33[(int)(local_2d0[0] + 8)],
                             pcVar33[(long)(int)(local_2d0[0] + 8) + 1]);
      uVar3 = uVar4 + uVar31;
      uVar12 = uVar31;
      if (uVar30 < uVar4 + uVar31) goto LAB_71006db098;
      local_2d0[0] = uVar31;
      if (uVar10 == 5) {
        uVar17 = (ulong)local_68;
        if (local_68 != 4) {
          uVar4 = local_68 >> 0x1f;
          lVar25 = (long)(int)local_68;
          lVar16 = (long)(int)local_68;
          local_68 = local_68 + 1;
          iVar22 = 0x80;
          while( true ) {
            uVar12 = local_2d0[0];
            if (uVar30 <= uVar18) goto LAB_71006db098;
            bVar9 = pcVar33[uVar18];
            uVar29 = (uint)bVar9;
            if ((uVar29 & 0xc0) != 0xc0) break;
            if (uVar30 <= uVar31 + 1) goto LAB_71006db098;
            uVar31 = (uVar29 & 0x3f) << 8 | (uint)(byte)pcVar33[uVar31 + 1];
LAB_71006db138:
            iVar22 = iVar22 + -1;
            if (iVar22 == 0) {
              uVar12 = 3;
              pcVar33 = *(char **)(puVar23 + 0x84);
              pcVar27 = "Label loop";
              goto LAB_71006dad64;
            }
            uVar18 = (ulong)uVar31;
          }
          if ((bVar9 & 0xc0) != 0) {
LAB_71006db298:
            uVar12 = 1;
            pcVar33 = *(char **)(puVar23 + 0x84);
            pcVar27 = "Bad label";
            goto LAB_71006dad64;
          }
          if (uVar29 != 0) {
            if ((alStack_60[(-(ulong)uVar4 & 0xfffffffe00000000 | uVar17 << 1) + lVar25] != 0) &&
               (uVar12 = FUN_71006da090(alStack_60 + lVar16 * 3,".",1), uVar12 != 0))
            goto LAB_71006db244;
            uVar12 = uVar31 + 1;
            uVar31 = uVar29 + uVar12;
            if (uVar29 + uVar12 <= uVar30) {
              uVar12 = FUN_71006da090(alStack_60 + lVar16 * 3,pcVar33 + uVar12,bVar9);
              if (uVar12 == 0) goto LAB_71006db138;
              goto LAB_71006db244;
            }
            goto LAB_71006db298;
          }
        }
      }
      else if (uVar10 == 0x1c) {
        if (uVar4 != 0x10) {
LAB_71006db1d4:
          uVar12 = 6;
          pcVar33 = *(char **)(puVar23 + 0x84);
          pcVar27 = "RDATA length";
          goto LAB_71006dad64;
        }
        if ((int)local_24c < 0x18) {
          uVar32 = *(undefined8 *)(pcVar33 + (int)uVar31);
          uVar5 = *(undefined8 *)(pcVar33 + (int)uVar31 + 8);
          (&local_248)
          [(-(ulong)(local_24c >> 0x1f) & 0xfffffffc00000000 | (ulong)local_24c << 2) +
           (long)(int)local_24c] = 0x1c;
          lVar25 = (long)(int)local_24c;
          local_24c = local_24c + 1;
          *(undefined8 *)((long)&local_244 + lVar25 * 0x14) = uVar32;
          *(undefined8 *)(auStack_23c + lVar25 * 5) = uVar5;
        }
      }
      else if (uVar10 == 1) {
        if (uVar4 != 4) goto LAB_71006db1d4;
        if ((int)local_24c < 0x18) {
          uVar8 = *(undefined4 *)(pcVar33 + (int)uVar31);
          (&local_248)
          [(-(ulong)(local_24c >> 0x1f) & 0xfffffffc00000000 | (ulong)local_24c << 2) +
           (long)(int)local_24c] = 1;
          lVar25 = (long)(int)local_24c;
          local_24c = local_24c + 1;
          *(undefined4 *)((long)&local_244 + lVar25 * 0x14) = uVar8;
        }
      }
      uVar13 = uVar13 - 1 & 0xffff;
      local_2d0[0] = uVar3;
    } while (uVar13 != 0);
    pcVar27 = *(char **)(puVar23 + 0x84);
  }
  uVar6 = (uint)(*(ushort *)(pcVar33 + 8) >> 8) | (*(ushort *)(pcVar33 + 8) & 0xff00ff) << 8;
  while (uVar6 != 0) {
    uVar12 = FUN_71006d9ee0(uVar6,pcVar33,uVar30);
    pcVar27 = extraout_x9;
    if (uVar12 != 0) goto LAB_71006daa24;
    pcVar27 = extraout_x9;
    if (((extraout_x1_00 < local_2d0[0] + 8) ||
        (pcVar27 = extraout_x9, extraout_x1_00 < local_2d0[0] + 10)) ||
       (pcVar27 = extraout_x9,
       extraout_x1_00 <
       (uint)CONCAT11(pcVar33[(int)(local_2d0[0] + 8)],pcVar33[(long)(int)(local_2d0[0] + 8) + 1]) +
       local_2d0[0] + 10)) goto LAB_71006daef8;
    pcVar27 = extraout_x9;
    uVar30 = extraout_x1_00;
    local_2d0[0] = (uint)CONCAT11(pcVar33[(int)(local_2d0[0] + 8)],
                                  pcVar33[(long)(int)(local_2d0[0] + 8) + 1]) + local_2d0[0] + 10;
    uVar19 = extraout_w10;
    uVar6 = extraout_w8 - 1U & 0xffff;
  }
  uVar6 = (uint)(*(ushort *)(pcVar33 + 10) >> 8) | (*(ushort *)(pcVar33 + 10) & 0xff00ff) << 8;
  while (uVar6 != 0) {
    uVar12 = FUN_71006d9ee0(uVar6,pcVar33,uVar30);
    pcVar27 = extraout_x9_00;
    if (uVar12 != 0) goto LAB_71006daa24;
    pcVar27 = extraout_x9_00;
    if (((extraout_x1_01 < local_2d0[0] + 8) ||
        (pcVar27 = extraout_x9_00, extraout_x1_01 < local_2d0[0] + 10)) ||
       (pcVar27 = extraout_x9_00,
       extraout_x1_01 <
       (uint)CONCAT11(pcVar33[(int)(local_2d0[0] + 8)],pcVar33[(long)(int)(local_2d0[0] + 8) + 1]) +
       local_2d0[0] + 10)) goto LAB_71006daef8;
    pcVar27 = extraout_x9_00;
    uVar30 = extraout_x1_01;
    local_2d0[0] = (uint)CONCAT11(pcVar33[(int)(local_2d0[0] + 8)],
                                  pcVar33[(long)(int)(local_2d0[0] + 8) + 1]) + local_2d0[0] + 10;
    uVar19 = extraout_w10_00;
    uVar6 = extraout_w8_00 - 1U & 0xffff;
  }
  pcVar33 = pcVar27;
  if (uVar30 != local_2d0[0]) {
    uVar12 = 7;
    pcVar27 = "Malformat";
    goto LAB_71006dad64;
  }
  if ((uVar19 != 2) && (local_68 == 0 && local_24c == 0)) {
    uVar12 = 0xb;
    pcVar27 = "No content";
    goto LAB_71006dad64;
  }
  *puVar28 = 0;
  (*(code *)PTR_FUN_7100af36a0)(pcVar27);
  puVar23[0x84] = 0;
  puVar23[0x85] = 0;
  goto LAB_71006daa84;
LAB_71006daa24:
  *puVar28 = uVar12;
  (*(code *)PTR_FUN_7100af36a0)(pcVar27);
  puVar23[0x84] = 0;
  puVar23[0x85] = 0;
  if (uVar12 < 0xd) {
    pcVar27 = (&PTR_DAT_7100ae4488)[uVar12];
  }
  else {
    pcVar27 = "bad error code";
  }
  goto LAB_71006daa50;
LAB_71006daef8:
  pcVar33 = pcVar27;
  uVar12 = 2;
  pcVar27 = "Out of range";
LAB_71006dad64:
  *puVar28 = uVar12;
  (*(code *)PTR_FUN_7100af36a0)(pcVar33);
  puVar23[0x84] = 0;
  puVar23[0x85] = 0;
LAB_71006daa50:
  pcVar33 = "A";
  if (*puVar23 != 1) {
    pcVar33 = "AAAA";
  }
  FUN_71006c08c0(lVar20,"DOH: %s type %s for %s\n",pcVar27,pcVar33,*(undefined8 *)(lVar20 + 0x638));
LAB_71006daa84:
  uVar6 = local_68;
  puVar23 = puVar23 + 0x8a;
  puVar28 = puVar28 + 1;
  if ((uint *)(lVar20 + 0x638) == puVar23) goto code_r0x0071006daa94;
  goto LAB_71006da994;
code_r0x0071006daa94:
  if ((local_2d8 != 0) && (local_2d4 != 0)) {
    cVar11 = '\x06';
    goto LAB_71006dace4;
  }
  FUN_71006c08c0(lVar20,"DOH Host name: %s\n",*(undefined8 *)(lVar20 + 0x638));
  FUN_71006c08c0(lVar20,"TTL: %u seconds\n",local_250);
  uVar12 = local_24c;
  if ((int)local_24c < 1) {
    if ((int)uVar6 < 1) {
      return '\x1b';
    }
LAB_71006dab70:
    iVar22 = 0;
    puVar23 = puVar24;
    do {
      puVar28 = puVar23 + 0x7e;
      iVar22 = iVar22 + 1;
      puVar23 = puVar23 + 6;
      FUN_71006c08c0(lVar20,"CNAME: %s\n",*(undefined8 *)puVar28);
    } while (iVar22 < (int)uVar6);
    uVar13 = *(uint *)(lVar20 + 0x640);
    uVar32 = *(undefined8 *)(lVar20 + 0x638);
    if ((int)uVar12 < 1) goto LAB_71006dadd8;
  }
  else {
    uVar13 = local_24c - 1;
    puVar23 = puVar24;
    do {
      while (puVar23[2] != 1) {
        if (puVar23[2] == 0x1c) {
          FUN_710069fb80(local_2d0,0x80,"DOH AAAA: ");
          lVar25 = 0x76;
          puVar26 = auStack_2c6;
          iVar22 = 0;
          puVar28 = puVar23;
          while( true ) {
            while( true ) {
              iVar22 = iVar22 + 2;
              puVar1 = puVar28 + 3;
              puVar2 = (undefined1 *)((long)puVar28 + 0xd);
              if (iVar22 != 2) break;
              puVar28 = (uint *)((long)puVar28 + 2);
              FUN_710069fb80(puVar26,lVar25,"%s%02x%02x",&DAT_7100853d20,(char)*puVar1,*puVar2);
              lVar16 = FUN_710081ce00(puVar26);
              lVar25 = lVar25 - lVar16;
              puVar26 = puVar26 + lVar16;
            }
            FUN_710069fb80(puVar26,lVar25,"%s%02x%02x",":",(char)*puVar1,*puVar2);
            lVar16 = FUN_710081ce00(puVar26);
            lVar25 = lVar25 - lVar16;
            puVar26 = puVar26 + lVar16;
            if (iVar22 == 0x10) break;
            puVar28 = (uint *)((long)puVar28 + 2);
          }
          FUN_71006c08c0(lVar20,"%s\n",local_2d0);
        }
        puVar23 = puVar23 + 5;
        if (auStack_23c + (ulong)uVar13 * 5 == puVar23) goto LAB_71006dab60;
      }
      puVar28 = puVar23 + 5;
      FUN_71006c08c0(lVar20,"DOH A: %u.%u.%u.%u\n",(char)puVar23[3],
                     *(undefined1 *)((long)puVar23 + 0xd),*(undefined1 *)((long)puVar23 + 0xe),
                     *(undefined1 *)((long)puVar23 + 0xf));
      puVar23 = puVar28;
    } while (auStack_23c + (ulong)uVar13 * 5 != puVar28);
LAB_71006dab60:
    if (0 < (int)uVar6) goto LAB_71006dab70;
    uVar13 = *(uint *)(lVar20 + 0x640);
    uVar32 = *(undefined8 *)(lVar20 + 0x638);
  }
  piVar21 = &local_248;
  lVar25 = 0;
  iVar22 = 0;
  lVar16 = 0;
  do {
    iVar22 = iVar22 + 1;
    lVar14 = lVar16;
    if (*piVar21 != 0x1c) {
      lVar14 = (*(code *)PTR_FUN_7100af3698)(1,0x30);
      if (lVar14 != 0) {
        lVar15 = (*(code *)PTR_FUN_7100af36b8)(uVar32);
        *(long *)(lVar14 + 0x18) = lVar15;
        if (lVar15 == 0) {
          (*(code *)PTR_FUN_7100af36a0)(lVar14);
        }
        else {
          lVar15 = (*(code *)PTR_FUN_7100af3698)(1,0x10);
          *(long *)(lVar14 + 0x20) = lVar15;
          if (lVar15 != 0) {
            if (lVar25 == 0) {
              lVar25 = lVar14;
            }
            if (lVar16 != 0) {
              *(long *)(lVar16 + 0x28) = lVar14;
            }
            iVar7 = piVar21[1];
            *(undefined4 *)(lVar14 + 0x10) = 0x10;
            *(undefined8 *)(lVar14 + 4) = 0x100000002;
            *(undefined1 *)(lVar15 + 1) = 2;
            *(ushort *)(lVar15 + 2) =
                 (ushort)(uVar13 >> 8) & 0xff | (ushort)((uVar13 & 0xff00ff) << 8);
            *(int *)(lVar15 + 4) = iVar7;
            goto LAB_71006dac78;
          }
          (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(lVar14 + 0x18));
          (*(code *)PTR_FUN_7100af36a0)(lVar14);
        }
      }
      FUN_71006cf520(lVar25);
      goto LAB_71006dadd8;
    }
LAB_71006dac78:
    piVar21 = piVar21 + 5;
    lVar16 = lVar14;
  } while (iVar22 < (int)uVar12);
  if (lVar25 != 0) {
    if (*(long *)(lVar20 + 0xd0) != 0) {
      FUN_71006a6420(lVar20,3,2);
    }
    lVar16 = FUN_71006b7dc0(lVar20,lVar25,*(undefined8 *)(lVar20 + 0x638),
                            *(undefined4 *)(lVar20 + 0x640));
    if (*(long *)(lVar20 + 0xd0) != 0) {
      FUN_71006a6480(lVar20,3);
    }
    if (lVar16 == 0) {
      cVar11 = '\x06';
      FUN_71006cf520(lVar25);
    }
    else {
      param_1[0xe2] = lVar16;
      *param_2 = lVar16;
      cVar11 = '\0';
    }
LAB_71006dace4:
    if (0 < (int)uVar6) {
      uVar12 = 0;
      do {
        uVar12 = uVar12 + 1;
        (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(puVar24 + 0x7e));
        puVar24 = puVar24 + 6;
      } while (uVar6 != uVar12);
    }
    return cVar11;
  }
LAB_71006dadd8:
  uVar12 = 0;
  if (0 < (int)uVar6) {
    do {
      uVar12 = uVar12 + 1;
      (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(puVar24 + 0x7e));
      puVar24 = puVar24 + 6;
    } while (uVar6 != uVar12);
  }
  return '\x1b';
}



// ===== FUN_71006db4b0 @ 71006db4b0 (size=180) =====

void FUN_71006db4b0(undefined8 *param_1)

{
  (*(code *)PTR_FUN_7100af36a0)(*param_1);
  (*(code *)PTR_FUN_7100af36a0)(param_1[1]);
  (*(code *)PTR_FUN_7100af36a0)(param_1[2]);
  (*(code *)PTR_FUN_7100af36a0)(param_1[3]);
  (*(code *)PTR_FUN_7100af36a0)(param_1[4]);
  (*(code *)PTR_FUN_7100af36a0)(param_1[5]);
  (*(code *)PTR_FUN_7100af36a0)(param_1[6]);
  (*(code *)PTR_FUN_7100af36a0)(param_1[7]);
  (*(code *)PTR_FUN_7100af36a0)(param_1[8]);
  (*(code *)PTR_FUN_7100af36a0)(param_1[9]);
  (*(code *)PTR_FUN_7100af36a0)(param_1[10]);
  (*(code *)PTR_FUN_7100af36a0)(param_1[0xb]);
  return;
}



// ===== FUN_71006db570 @ 71006db570 (size=164) =====

ulong FUN_71006db570(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar1 = FUN_710081d620(param_1,&DAT_7100840410);
  lVar4 = lVar1 + 2;
  if (lVar1 == 0) {
    lVar4 = param_1;
  }
  uVar2 = FUN_710080eb40(lVar4,0x3f);
  uVar3 = FUN_710080eb40(lVar4,0x2f);
  if (uVar3 == 0) {
    lVar4 = FUN_710081ce00(param_1);
    uVar3 = param_1 + lVar4;
  }
  if (uVar2 == 0) {
    lVar4 = FUN_710081ce00(param_1);
    if ((ulong)(param_1 + lVar4) < uVar3) {
      uVar3 = param_1 + lVar4;
    }
    return uVar3;
  }
  if (uVar2 < uVar3) {
    uVar3 = uVar2;
  }
  return uVar3;
}



// ===== FUN_71006db620 @ 71006db620 (size=404) =====

undefined4 FUN_71006db620(long param_1,char *param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  char cVar9;
  undefined4 uVar10;
  char local_10 [16];
  
  uVar4 = FUN_710081ce00(param_2);
  cVar9 = *param_2;
  if (cVar9 == '[') {
    if (uVar4 < 5) {
      return 3;
    }
    pcVar1 = param_2 + 1;
    if (pcVar1[uVar4 - 2] != ']') {
      return 3;
    }
    lVar6 = FUN_7100806ae0(pcVar1,"0123456789abcdefABCDEF:.");
    if (uVar4 - 2 != lVar6) {
      if (pcVar1[lVar6] != '%') {
        return 3;
      }
      lVar2 = lVar6 + 1;
      pcVar8 = pcVar1 + lVar2;
      if ((pcVar1[lVar2] == '2') && (pcVar8[1] == '5')) {
        cVar9 = pcVar8[2];
        if (cVar9 == ']' || cVar9 == '\0') {
          cVar9 = '2';
        }
        else {
          pcVar8 = pcVar8 + 2;
        }
      }
      else {
        cVar9 = pcVar1[lVar2];
        if (cVar9 == ']' || cVar9 == '\0') {
          return 3;
        }
      }
      lVar7 = 1;
      while( true ) {
        (&stack0xffffffffffffffef)[lVar7] = cVar9;
        cVar9 = pcVar8[lVar7];
        lVar3 = lVar7 + 1;
        if (cVar9 == ']' || cVar9 == '\0') break;
        lVar7 = lVar3;
        if (lVar3 == 0x10) {
          return 3;
        }
      }
      if (cVar9 != ']') {
        return 3;
      }
      local_10[(int)lVar7] = '\0';
      lVar7 = (*(code *)PTR_FUN_7100af36b8)();
      *(long *)(param_1 + 0x28) = lVar7;
      if (lVar7 == 0) {
        return 7;
      }
      pcVar1[lVar6] = ']';
      pcVar1[lVar2] = '\0';
    }
    cVar9 = param_2[1];
  }
  else {
    uVar5 = FUN_710080b460(param_2,&DAT_710083a5b8);
    if (uVar4 != uVar5) {
      return 3;
    }
  }
  uVar10 = 0;
  if (cVar9 == '\0') {
    uVar10 = 0xe;
  }
  return uVar10;
}



// ===== FUN_71006db7c0 @ 71006db7c0 (size=276) =====

void FUN_71006db7c0(char *param_1,char *param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  
  pcVar3 = param_2;
  if (param_3 == '\0') {
    pcVar3 = (char *)FUN_71006db570(param_2);
  }
  cVar5 = *param_2;
  if (cVar5 != '\0') {
    bVar1 = true;
    pcVar4 = param_1;
    do {
      while (pcVar3 <= param_2) {
        if (cVar5 == ' ') {
          if (bVar1) {
            param_1 = pcVar4 + 3;
            pcVar4[0] = '%';
            pcVar4[1] = '2';
            pcVar4[2] = '0';
          }
          else {
            param_1 = pcVar4 + 1;
            *pcVar4 = '+';
          }
        }
        else {
          if (cVar5 == '?') {
            bVar1 = false;
          }
          iVar2 = FUN_71006af5c0(cVar5);
          if (((iVar2 == 0) && (iVar2 = FUN_71006af470(cVar5), iVar2 == 0)) &&
             (iVar2 = FUN_71006af530(cVar5), iVar2 == 0)) {
            param_1 = pcVar4 + 3;
            FUN_710069fb80(pcVar4,4,"%%%02x",*param_2);
          }
          else {
            param_1 = pcVar4 + 1;
            *pcVar4 = *param_2;
          }
        }
        param_2 = param_2 + 1;
        cVar5 = *param_2;
        pcVar4 = param_1;
        if (cVar5 == '\0') goto LAB_71006db864;
      }
      param_1 = pcVar4 + 1;
      *pcVar4 = cVar5;
      param_2 = param_2 + 1;
      cVar5 = *param_2;
      pcVar4 = param_1;
    } while (cVar5 != '\0');
  }
LAB_71006db864:
  *param_1 = '\0';
  return;
}



// ===== FUN_71006db8e0 @ 71006db8e0 (size=272) =====

undefined8 FUN_71006db8e0(long param_1,long param_2,ulong param_3)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar6 = 1;
  if (param_3 != 0) {
    lVar7 = 0;
    do {
      bVar2 = *(byte *)(param_1 + lVar7);
      uVar5 = (ulong)bVar2;
      if (bVar2 == 0) {
        return 0;
      }
      if (bVar2 == 0x3a) {
        if (*(char *)(param_1 + uVar6) == '/') {
          if (param_2 != 0) {
            *(undefined1 *)(param_2 + lVar7) = 0;
            return 1;
          }
          return 1;
        }
        iVar4 = FUN_71006af4d0(uVar5);
        if (iVar4 == 0) {
          return 0;
        }
      }
      else {
        iVar4 = FUN_71006af4d0(uVar5);
        if ((iVar4 == 0) && (bVar2 != 0x2b && 1 < (byte)(bVar2 - 0x2d))) {
          return 0;
        }
      }
      if (param_2 != 0) {
        bVar1 = bVar2 + 0x20;
        if (((&DAT_71009d32f1)[uVar5] & 3) != 1) {
          bVar1 = bVar2;
        }
        *(byte *)(param_2 + lVar7) = bVar1;
      }
      bVar3 = uVar6 < param_3;
      lVar7 = lVar7 + 1;
      uVar6 = uVar6 + 1;
    } while (bVar3);
  }
  return 0;
}



// ===== FUN_71006db9f0 @ 71006db9f0 (size=2372) =====

int FUN_71006db9f0(byte *param_1,long *param_2,uint param_3)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  undefined *puVar12;
  byte bVar13;
  char **ppcVar14;
  byte *pbVar15;
  byte *pbVar16;
  char *pcVar17;
  char local_49;
  long local_48;
  long local_40;
  char *local_38;
  char acStack_30 [48];
  
  if (param_1 == (byte *)0x0) {
    return 3;
  }
  uVar6 = FUN_710081ce00();
  if (8000000 < uVar6) {
    return 3;
  }
  lVar8 = uVar6 + 1;
  pbVar7 = (byte *)(*(code *)PTR_FUN_7100af36a8)(lVar8 * 2);
  param_2[10] = (long)pbVar7;
  if (pbVar7 == (byte *)0x0) {
    return 7;
  }
  pcVar17 = acStack_30;
  pbVar7[lVar8] = 0;
  cVar3 = FUN_71006db8e0(param_1,pcVar17,0x29);
  pbVar15 = pbVar7 + lVar8;
  pbVar11 = pbVar7;
  if (cVar3 == '\0') {
    *pbVar7 = 0;
    if ((param_3 & 0x204) == 0) {
      return 3;
    }
    pcVar17 = "https";
    if ((param_3 & 4) == 0) {
      pcVar17 = (char *)0x0;
    }
LAB_71006dba94:
    bVar13 = *param_1;
    pbVar16 = param_1;
    if (bVar13 == 0) {
LAB_71006dbad0:
      if ((param_3 >> 10 & 1) == 0) {
        return 3;
      }
    }
    else {
      do {
        if ((bVar13 & 0xef) == 0x2f || bVar13 == 0x23) break;
        pbVar16 = pbVar16 + 1;
        bVar13 = *pbVar16;
      } while (bVar13 != 0);
      lVar8 = (long)pbVar16 - (long)param_1;
      if (lVar8 == 0) goto LAB_71006dbad0;
      FUN_710080f900(pbVar15,param_1,lVar8);
      pbVar15[lVar8] = 0;
    }
    lVar8 = FUN_710081ce00(pbVar16);
    FUN_710080f900(pbVar7,pbVar16,lVar8);
    pbVar7[lVar8] = 0;
    if (pcVar17 != (char *)0x0) {
      lVar8 = (*(code *)PTR_FUN_7100af36b8)(pcVar17);
      *param_2 = lVar8;
      if (lVar8 == 0) {
        return 7;
      }
    }
  }
  else {
    lVar8 = FUN_710081ce00(pcVar17);
    iVar4 = FUN_71006ca300(pcVar17,"file");
    if (iVar4 == 0) {
      *pbVar7 = 0;
      param_1 = param_1 + lVar8 + 1;
      iVar4 = 0;
      if (*param_1 != 0x2f) {
        return 3;
      }
      while( true ) {
        param_1 = param_1 + 1;
        iVar5 = iVar4 + 1;
        if (*param_1 != 0x2f) break;
        iVar4 = iVar5;
        if (iVar5 == 4) {
          return 3;
        }
      }
      if (iVar4 == 3) {
        return 3;
      }
      lVar8 = FUN_71006c25b0(pcVar17);
      if ((lVar8 == 0) && ((param_3 >> 3 & 1) == 0)) {
        return 5;
      }
      lVar8 = FUN_710081ce00(pcVar17);
      lVar9 = FUN_710080b460(pcVar17,&DAT_71009bb510);
      if (lVar8 != lVar9) {
        return 3;
      }
      goto LAB_71006dba94;
    }
    FUN_710081b7c0(pbVar7,param_1 + 5);
    lVar8 = (*(code *)PTR_FUN_7100af36b8)("file");
    *param_2 = lVar8;
    if (lVar8 == 0) {
      return 7;
    }
    bVar13 = *pbVar7 & 0xdf;
    if (*pbVar7 != 0x2f) goto LAB_71006dbf40;
    bVar13 = pbVar7[1];
    if (bVar13 == 0x2f) {
      pbVar11 = pbVar7 + 2;
      if (pbVar7[2] == 0x2f) {
LAB_71006dc1d8:
        bVar13 = pbVar11[1];
        goto LAB_71006dbff4;
      }
      bVar13 = pbVar7[2] & 0xdf;
      if (((0x19 < (byte)(bVar13 + 0xbf)) || (pbVar7[3] != 0x3a && pbVar7[3] != 0x7c)) ||
         (bVar1 = pbVar7[4], (bVar1 != 0x2f && bVar1 != 0x5c) && bVar1 != 0)) {
        iVar4 = thunk_FUN_71006ca3e0("localhost/",pbVar11,10);
        if ((iVar4 == 0) && (iVar4 = thunk_FUN_71006ca3e0("127.0.0.1/",pbVar11,10), iVar4 == 0)) {
          return 3;
        }
        pbVar11 = pbVar7 + 0xb;
        if (pbVar7[0xb] == 0x2f) goto LAB_71006dc1d8;
        bVar13 = pbVar7[0xb] & 0xdf;
      }
LAB_71006dbf40:
      if (((byte)(bVar13 + 0xbf) < 0x1a) && (pbVar11[1] == 0x3a || pbVar11[1] == 0x7c)) {
        bVar13 = pbVar11[2];
        goto LAB_71006dbf68;
      }
    }
    else {
LAB_71006dbff4:
      if (((byte)((bVar13 & 0xdf) + 0xbf) < 0x1a) && (pbVar11[2] == 0x3a || pbVar11[2] == 0x7c)) {
        bVar13 = pbVar11[3];
LAB_71006dbf68:
        if ((bVar13 == 0x2f || bVar13 == 0x5c) || bVar13 == 0) {
          return 3;
        }
      }
    }
    pbVar15 = (byte *)0x0;
    pcVar17 = (char *)0x0;
  }
  lVar8 = FUN_710081ce00(pbVar11);
  lVar9 = FUN_710080b460(pbVar11,&DAT_71009bb510);
  if (lVar8 != lVar9) {
    return 3;
  }
  if (((param_3 >> 7 & 1) == 0) || (*pbVar11 == 0)) {
    bVar2 = false;
    pbVar7 = pbVar11;
  }
  else {
    pbVar7 = (byte *)(*(code *)PTR_FUN_7100af36a8)(lVar8 * 3);
    if (pbVar7 == (byte *)0x0) {
      return 7;
    }
    FUN_71006db7c0(pbVar7,pbVar11,1);
    bVar2 = true;
    param_2[0xb] = (long)pbVar7;
  }
  puVar10 = (undefined1 *)FUN_710080eb40(pbVar7,0x23);
  if ((puVar10 != (undefined1 *)0x0) && (*puVar10 = 0, puVar10[1] != '\0')) {
    lVar8 = (*(code *)PTR_FUN_7100af36b8)(puVar10 + 1);
    param_2[9] = lVar8;
    if (lVar8 == 0) {
      return 7;
    }
  }
  puVar10 = (undefined1 *)FUN_710080eb40(pbVar7,0x3f);
  if (puVar10 != (undefined1 *)0x0) {
    *puVar10 = 0;
    lVar8 = (*(code *)PTR_FUN_7100af36b8)(puVar10 + 1);
    param_2[8] = lVar8;
    if (lVar8 == 0) {
      return 7;
    }
  }
  if (*pbVar7 != 0) {
    if ((param_3 >> 4 & 1) == 0) {
      pbVar11 = (byte *)FUN_71006e4a30(pbVar7);
      if (pbVar11 == (byte *)0x0) {
        return 7;
      }
      iVar4 = FUN_710080aec0(pbVar11,pbVar7);
      if (iVar4 == 0) {
        (*(code *)PTR_FUN_7100af36a0)(pbVar11);
        goto joined_r0x0071006dc054;
      }
      if (bVar2) {
        (*(code *)PTR_FUN_7100af36a0)(param_2[0xb]);
      }
    }
    else {
joined_r0x0071006dc054:
      pbVar11 = pbVar7;
      if (!bVar2) {
        lVar8 = (*(code *)PTR_FUN_7100af36b8)(pbVar7);
        param_2[7] = lVar8;
        if (lVar8 == 0) {
          return 7;
        }
        param_2[0xb] = 0;
        goto LAB_71006dbbd8;
      }
    }
    param_2[7] = (long)pbVar11;
    param_2[0xb] = 0;
  }
LAB_71006dbbd8:
  if (pbVar15 == (byte *)0x0) goto LAB_71006dbe80;
  lVar8 = FUN_710081ce00(pbVar15);
  lVar9 = FUN_710080b460(pbVar15,&DAT_71009bb510);
  if (lVar8 != lVar9) {
    return 3;
  }
  local_48 = 0;
  local_40 = 0;
  local_38 = (char *)0x0;
  lVar8 = FUN_710080eb40(pbVar15,0x40);
  if (lVar8 == 0) {
    (*(code *)PTR_FUN_7100af36a0)();
    (*(code *)PTR_FUN_7100af36a0)(local_40);
    (*(code *)PTR_FUN_7100af36a0)(local_38);
  }
  else {
    if (((*param_2 == 0) || (lVar9 = FUN_71006c25b0(), lVar9 == 0)) ||
       ((*(uint *)(lVar9 + 0x84) >> 10 & 1) == 0)) {
      ppcVar14 = (char **)0x0;
    }
    else {
      ppcVar14 = &local_38;
    }
    iVar4 = FUN_71006c2690(pbVar15,lVar8 - (long)pbVar15,&local_48,&local_40,ppcVar14);
    if (iVar4 != 0) {
      iVar4 = 3;
LAB_71006dbfb0:
      (*(code *)PTR_FUN_7100af36a0)(local_48);
      (*(code *)PTR_FUN_7100af36a0)(local_40);
      (*(code *)PTR_FUN_7100af36a0)(local_38);
      return iVar4;
    }
    if (local_48 != 0) {
      if ((param_3 >> 5 & 1) != 0) {
        iVar4 = 8;
        goto LAB_71006dbfb0;
      }
      param_2[1] = local_48;
    }
    if (local_40 != 0) {
      param_2[2] = local_40;
    }
    pbVar15 = (byte *)(lVar8 + 1);
    if (local_38 != (char *)0x0) {
      param_2[3] = (long)local_38;
    }
  }
  iVar4 = FUN_7100822f40(pbVar15,"[%*45[0123456789abcdefABCDEF:.]%c%n",&local_49,&local_48);
  if (iVar4 == 1) {
    iVar4 = (int)local_48;
    if (local_49 == ']') {
      lVar8 = (long)(int)local_48;
    }
    else {
      if (local_49 != '%') {
        return 3;
      }
      iVar5 = FUN_7100822f40(pbVar15 + (int)local_48,"%*[^]]%c%n",&local_49,&local_48);
      if (iVar5 != 1) {
        return 3;
      }
      if (local_49 != ']') {
        return 3;
      }
      lVar8 = (long)(iVar4 + -1 + (int)local_48) + 1;
    }
    pbVar7 = pbVar15 + lVar8;
    if (*pbVar7 != 0) {
      if (*pbVar7 != 0x3a) {
        return 3;
      }
      goto LAB_71006dbdf0;
    }
  }
  else {
    pbVar7 = (byte *)FUN_710080eb40(pbVar15,0x3a);
    if (pbVar7 != (byte *)0x0) {
LAB_71006dbdf0:
      if (pbVar7[1] == 0) {
        *pbVar7 = 0;
      }
      else {
        iVar4 = FUN_71006af4a0();
        if (((iVar4 == 0) || (lVar8 = FUN_710081b720(pbVar7 + 1,&local_38,10), 0xfffe < lVar8 - 1U))
           || (*local_38 != '\0')) {
          return 4;
        }
        *pbVar7 = 0;
        *local_38 = '\0';
        FUN_710069fb80(&local_40,7,"%ld",lVar8);
        param_2[0xc] = lVar8;
        lVar8 = (*(code *)PTR_FUN_7100af36b8)(&local_40);
        param_2[6] = lVar8;
        if (lVar8 == 0) {
          return 7;
        }
      }
    }
  }
  if (((*pbVar15 != 0) || ((param_3 >> 10 & 1) == 0)) &&
     (iVar4 = FUN_71006db620(param_2,pbVar15), iVar4 != 0)) {
    return iVar4;
  }
  lVar8 = (*(code *)PTR_FUN_7100af36b8)(pbVar15);
  param_2[4] = lVar8;
  if (lVar8 == 0) {
    return 7;
  }
  if ((param_3 & 0x200) != 0 && pcVar17 == (char *)0x0) {
    iVar4 = thunk_FUN_71006ca3e0(&DAT_710084ae48,pbVar15,4);
    puVar12 = &DAT_7100839c88;
    if (iVar4 == 0) {
      iVar4 = thunk_FUN_71006ca3e0("dict.",pbVar15,5);
      if (iVar4 == 0) {
        iVar4 = thunk_FUN_71006ca3e0("ldap.",pbVar15,5);
        if (iVar4 == 0) {
          iVar4 = thunk_FUN_71006ca3e0("imap.",pbVar15,5);
          if (iVar4 == 0) {
            iVar4 = thunk_FUN_71006ca3e0("smtp.",pbVar15,5);
            if (iVar4 == 0) {
              iVar4 = thunk_FUN_71006ca3e0("pop3.",pbVar15,5);
              puVar12 = &UNK_710084ade8;
              if (iVar4 == 0) {
                puVar12 = &DAT_7100840418;
              }
            }
            else {
              puVar12 = &DAT_7100849d60;
            }
          }
          else {
            puVar12 = &DAT_7100849ad0;
          }
        }
        else {
          puVar12 = &DAT_710084ade0;
        }
      }
      else {
        puVar12 = &DAT_710084add8;
      }
    }
    lVar8 = (*(code *)PTR_FUN_7100af36b8)(puVar12);
    *param_2 = lVar8;
    if (lVar8 == 0) {
      return 7;
    }
  }
LAB_71006dbe80:
  (*(code *)PTR_FUN_7100af36a0)(param_2[10]);
  param_2[10] = 0;
  (*(code *)PTR_FUN_7100af36a0)(param_2[0xb]);
  param_2[0xb] = 0;
  return 0;
}



// ===== FUN_71006dc340 @ 71006dc340 (size=28) =====

void FUN_71006dc340(void)

{
  (*(code *)PTR_FUN_7100af3698)(0x68,1);
  return;
}



// ===== FUN_71006dc360 @ 71006dc360 (size=60) =====

void FUN_71006dc360(long param_1)

{
  if (param_1 != 0) {
    FUN_71006db4b0();
    (*(code *)PTR_FUN_7100af36a0)(param_1);
    return;
  }
  return;
}



// ===== FUN_71006dc3a0 @ 71006dc3a0 (size=408) =====

long * FUN_71006dc3a0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(*(code *)PTR_FUN_7100af3698)(0x68,1);
  if (plVar1 != (long *)0x0) {
    if (*param_1 != 0) {
      lVar2 = (*(code *)PTR_FUN_7100af36b8)();
      *plVar1 = lVar2;
      if (lVar2 == 0) goto LAB_71006dc508;
    }
    if (param_1[1] != 0) {
      lVar2 = (*(code *)PTR_FUN_7100af36b8)();
      plVar1[1] = lVar2;
      if (lVar2 == 0) goto LAB_71006dc508;
    }
    if (param_1[2] != 0) {
      lVar2 = (*(code *)PTR_FUN_7100af36b8)();
      plVar1[2] = lVar2;
      if (lVar2 == 0) goto LAB_71006dc508;
    }
    if (param_1[3] != 0) {
      lVar2 = (*(code *)PTR_FUN_7100af36b8)();
      plVar1[3] = lVar2;
      if (lVar2 == 0) goto LAB_71006dc508;
    }
    if (param_1[4] != 0) {
      lVar2 = (*(code *)PTR_FUN_7100af36b8)();
      plVar1[4] = lVar2;
      if (lVar2 == 0) goto LAB_71006dc508;
    }
    if (param_1[6] != 0) {
      lVar2 = (*(code *)PTR_FUN_7100af36b8)();
      plVar1[6] = lVar2;
      if (lVar2 == 0) goto LAB_71006dc508;
    }
    if (param_1[7] != 0) {
      lVar2 = (*(code *)PTR_FUN_7100af36b8)();
      plVar1[7] = lVar2;
      if (lVar2 == 0) goto LAB_71006dc508;
    }
    if (param_1[8] != 0) {
      lVar2 = (*(code *)PTR_FUN_7100af36b8)();
      plVar1[8] = lVar2;
      if (lVar2 == 0) goto LAB_71006dc508;
    }
    if (param_1[9] != 0) {
      lVar2 = (*(code *)PTR_FUN_7100af36b8)();
      plVar1[9] = lVar2;
      if (lVar2 == 0) {
LAB_71006dc508:
        FUN_71006db4b0(plVar1);
        (*(code *)PTR_FUN_7100af36a0)(plVar1);
        return (long *)0x0;
      }
    }
    plVar1[0xc] = param_1[0xc];
  }
  return plVar1;
}



// ===== FUN_71006dc540 @ 71006dc540 (size=1604) =====

undefined8 FUN_71006dc540(long *param_1,uint param_2,long *param_3,ulong param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  undefined *puVar16;
  char *pcVar17;
  undefined8 uVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  char *pcVar22;
  char *pcVar23;
  long local_10;
  char acStack_8 [8];
  
  if (param_1 == (long *)0x0) {
    return 1;
  }
  if (param_3 == (long *)0x0) {
    return 2;
  }
  uVar20 = (uint)(param_4 >> 6) & 1;
  *param_3 = 0;
  if (param_2 == 5) {
    uVar21 = 0;
    uVar18 = 0xe;
    lVar4 = param_1[4];
  }
  else if (param_2 < 6) {
    if (param_2 == 2) {
      uVar21 = 0;
      uVar18 = 0xb;
      lVar4 = param_1[1];
    }
    else if (param_2 < 3) {
      if (param_2 == 0) {
        pcVar22 = (char *)param_1[3];
        pcVar5 = (char *)param_1[6];
        if (*param_1 == 0) {
          if (param_1[4] == 0) {
            return 0xe;
          }
LAB_71006dc84c:
          if (((uint)param_4 >> 2 & 1) == 0) {
            return 10;
          }
          pcVar23 = "https";
        }
        else {
          iVar3 = FUN_71006ca300("file");
          if (iVar3 != 0) {
            if ((undefined *)param_1[9] == (undefined *)0x0) {
              puVar8 = &DAT_7100853d20;
              puVar9 = puVar8;
            }
            else {
              puVar8 = &DAT_710083ff98;
              puVar9 = (undefined *)param_1[9];
            }
            lVar4 = FUN_71006a1060("file://%s%s%s",param_1[7],puVar8,puVar9);
            goto LAB_71006dc758;
          }
          if (param_1[4] == 0) {
            return 0xe;
          }
          pcVar23 = (char *)*param_1;
          if (pcVar23 == (char *)0x0) goto LAB_71006dc84c;
        }
        lVar4 = FUN_71006c25b0(pcVar23);
        if (pcVar5 == (char *)0x0) {
          if ((param_4 & 1) == 0) {
            if (lVar4 != 0) goto LAB_71006dc890;
          }
          else if (lVar4 != 0) {
            pcVar5 = acStack_8;
            FUN_710069fb80(pcVar5,7,"%ld",*(undefined8 *)(lVar4 + 0x78));
LAB_71006dc890:
            if ((*(uint *)(lVar4 + 0x84) & 0x400) == 0) {
              pcVar22 = (char *)0x0;
            }
          }
        }
        else if (lVar4 != 0) {
          if ((*(long *)(lVar4 + 0x78) == param_1[0xc]) && ((param_4 & 2) != 0)) {
            pcVar5 = (char *)0x0;
          }
          goto LAB_71006dc890;
        }
        lVar19 = 0;
        if ((*(char *)param_1[4] == '[') && (lVar19 = param_1[5], lVar19 != 0)) {
          lVar6 = FUN_710081ce00();
          lVar4 = FUN_710081ce00(lVar19);
          lVar4 = lVar4 + lVar6 + 4;
          lVar19 = (*(code *)PTR_FUN_7100af36a8)(lVar4);
          if (lVar19 == 0) {
            return 7;
          }
          FUN_710080f900(lVar19,param_1[4],lVar6 + -1);
          FUN_710069fb80(lVar19 + lVar6 + -1,(lVar4 - lVar6) + 1,"%%25%s]",param_1[5]);
        }
        pcVar13 = (char *)param_1[1];
        pcVar11 = (char *)param_1[2];
        pcVar12 = "";
        pcVar1 = pcVar12;
        if (pcVar13 != (char *)0x0) {
          pcVar1 = pcVar13;
        }
        if (pcVar11 == (char *)0x0) {
          pcVar10 = pcVar12;
          pcVar11 = pcVar12;
          if (pcVar22 != (char *)0x0) goto LAB_71006dc8d4;
          if (pcVar13 == (char *)0x0) {
            pcVar22 = "";
            pcVar13 = "";
            pcVar12 = "";
          }
          else {
            pcVar13 = "@";
            pcVar22 = pcVar12;
          }
        }
        else {
          pcVar10 = ":";
          if (pcVar22 == (char *)0x0) {
            pcVar13 = "@";
            pcVar22 = pcVar12;
          }
          else {
LAB_71006dc8d4:
            pcVar13 = "@";
            pcVar12 = ";";
          }
        }
        lVar4 = lVar19;
        if (lVar19 == 0) {
          lVar4 = param_1[4];
        }
        if (pcVar5 == (char *)0x0) {
          pcVar7 = "";
          pcVar5 = pcVar7;
        }
        else {
          pcVar7 = ":";
        }
        pcVar17 = (char *)param_1[7];
        if (pcVar17 == (char *)0x0) {
          pcVar17 = "/";
          puVar8 = &DAT_7100853d20;
        }
        else {
          puVar8 = &DAT_71008455d0;
          if (*pcVar17 == '/') {
            puVar8 = &DAT_7100853d20;
          }
        }
        pcVar15 = (char *)param_1[8];
        if ((pcVar15 == (char *)0x0) || (*pcVar15 == '\0')) {
          pcVar14 = "";
          pcVar15 = pcVar14;
        }
        else {
          pcVar14 = "?";
        }
        if ((undefined *)param_1[9] == (undefined *)0x0) {
          puVar9 = &DAT_7100853d20;
          puVar16 = puVar9;
        }
        else {
          puVar9 = &DAT_710083ff98;
          puVar16 = (undefined *)param_1[9];
        }
        lVar4 = FUN_71006a1060("%s://%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s",pcVar23,pcVar1,pcVar10,pcVar11,
                               pcVar12,pcVar22,pcVar13,lVar4,pcVar7,pcVar5,puVar8,pcVar17,pcVar14,
                               pcVar15,puVar9,puVar16);
        (*(code *)PTR_FUN_7100af36a0)(lVar19);
LAB_71006dc758:
        if (lVar4 == 0) {
          return 7;
        }
        *param_3 = lVar4;
        return 0;
      }
      if (param_2 != 1) {
        return 9;
      }
      uVar21 = 0;
      uVar20 = 0;
      lVar4 = *param_1;
      uVar18 = 10;
    }
    else if (param_2 == 3) {
      uVar21 = 0;
      uVar18 = 0xc;
      lVar4 = param_1[2];
    }
    else {
      uVar21 = 0;
      uVar18 = 0xd;
      lVar4 = param_1[3];
    }
  }
  else if (param_2 == 8) {
    uVar18 = 0x10;
    lVar4 = param_1[8];
    uVar21 = uVar20;
  }
  else {
    if (param_2 < 9) {
      if (param_2 == 6) {
        pcVar5 = (char *)param_1[6];
        if (pcVar5 == (char *)0x0) {
          if ((param_4 & 1) == 0) {
            return 0xf;
          }
          if (*param_1 == 0) {
            return 0xf;
          }
          lVar4 = FUN_71006c25b0();
          if (lVar4 == 0) {
            return 0xf;
          }
          pcVar5 = acStack_8;
          FUN_710069fb80(pcVar5,7,"%ld",*(undefined8 *)(lVar4 + 0x78));
        }
        else if ((((*param_1 != 0) && (lVar4 = FUN_71006c25b0(), lVar4 != 0)) &&
                 (*(long *)(lVar4 + 0x78) == param_1[0xc])) && (((uint)param_4 >> 1 & 1) != 0)) {
          return 0xf;
        }
        lVar4 = (*(code *)PTR_FUN_7100af36b8)(pcVar5);
        *param_3 = lVar4;
        if (lVar4 == 0) {
          return 7;
        }
        return 0;
      }
      if (param_2 != 7) {
        return 9;
      }
      if (param_1[7] == 0) {
        lVar4 = (*(code *)PTR_FUN_7100af36b8)(&DAT_71008455d0);
        param_1[7] = lVar4;
        if (lVar4 == 0) {
          return 7;
        }
      }
      lVar4 = (*(code *)PTR_FUN_7100af36b8)();
      *param_3 = lVar4;
      if (lVar4 == 0) {
        return 7;
      }
      goto LAB_71006dc5ec;
    }
    if (param_2 == 9) {
      uVar18 = 0x11;
      lVar4 = param_1[9];
      uVar21 = 0;
    }
    else {
      if (param_2 != 10) {
        return 9;
      }
      lVar4 = param_1[5];
      uVar18 = 9;
      uVar21 = 0;
    }
  }
  if (lVar4 == 0) {
    return uVar18;
  }
  pcVar5 = (char *)(*(code *)PTR_FUN_7100af36b8)();
  *param_3 = (long)pcVar5;
  if (pcVar5 == (char *)0x0) {
    return 7;
  }
  if (uVar21 != 0) {
    cVar2 = *pcVar5;
    while (cVar2 != '\0') {
      if (cVar2 == '+') {
        *pcVar5 = ' ';
      }
      pcVar5 = pcVar5 + 1;
      cVar2 = *pcVar5;
    }
  }
LAB_71006dc5ec:
  uVar18 = 0;
  if (uVar20 != 0) {
    iVar3 = FUN_710069f7f0(0,*param_3,0,&local_10,acStack_8,1);
    (*(code *)PTR_FUN_7100af36a0)(*param_3);
    if (iVar3 == 0) {
      *param_3 = local_10;
      return 0;
    }
    uVar18 = 6;
    *param_3 = 0;
  }
  return uVar18;
}



// ===== FUN_71006dcb90 @ 71006dcb90 (size=3208) =====

int FUN_71006dcb90(long *param_1,uint param_2,char *param_3,ulong param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  char *pcVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  long *plVar15;
  undefined1 *puVar16;
  code *pcVar17;
  char cVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  uint uVar23;
  long lVar24;
  char *pcVar25;
  ulong uVar26;
  char *pcVar27;
  char *pcVar28;
  uint local_28;
  undefined1 local_18;
  uint local_14;
  long *local_8;
  
  if (param_1 == (long *)0x0) {
    return 1;
  }
  if (param_3 == (char *)0x0) {
    if (param_2 == 5) {
      plVar15 = param_1 + 4;
    }
    else if (param_2 < 6) {
      if (param_2 == 2) {
        plVar15 = param_1 + 1;
      }
      else if (param_2 < 3) {
        if (param_2 == 0) {
          return 0;
        }
        plVar15 = param_1;
        if (param_2 != 1) {
          return 9;
        }
      }
      else {
        plVar15 = param_1 + 2;
        if (param_2 != 3) {
          plVar15 = param_1 + 3;
        }
      }
    }
    else if (param_2 == 8) {
      plVar15 = param_1 + 8;
    }
    else if (param_2 < 9) {
      if (param_2 == 6) {
        param_1[0xc] = 0;
        plVar15 = param_1 + 6;
      }
      else {
        plVar15 = param_1 + 7;
        if (param_2 != 7) {
          return 9;
        }
      }
    }
    else if (param_2 == 9) {
      plVar15 = param_1 + 9;
    }
    else {
      plVar15 = param_1 + 5;
      if (param_2 != 10) {
        return 9;
      }
    }
    if (*plVar15 == 0) {
      return 0;
    }
    (*(code *)PTR_FUN_7100af36a0)();
    *plVar15 = 0;
    return 0;
  }
  uVar22 = param_4 & 0xffffffff;
  if (param_2 == 5) {
    plVar15 = param_1 + 4;
    uVar26 = 0;
    local_28 = 0;
    bVar5 = false;
    (*(code *)PTR_FUN_7100af36a0)(param_1[5]);
    param_1[5] = 0;
    goto LAB_71006dcc00;
  }
  if (param_2 < 6) {
    if (param_2 == 2) {
      plVar15 = param_1 + 1;
      uVar26 = 0;
      local_28 = 0;
      bVar5 = false;
    }
    else {
      if (param_2 < 3) {
        if (param_2 != 0) {
          if (param_2 != 1) {
            return 9;
          }
          uVar22 = FUN_710081ce00(param_3);
          if (0x28 < uVar22) {
            return 3;
          }
          if (((uint)param_4 >> 3 & 1) == 0) {
            lVar24 = FUN_71006c25b0(param_3);
            if (lVar24 == 0) {
              return 5;
            }
            uVar22 = FUN_710081ce00(param_3);
          }
          lVar24 = 0;
          plVar15 = param_1;
          goto LAB_71006dd358;
        }
        lVar24 = 1;
        do {
          cVar18 = param_3[lVar24 + -1];
          if (cVar18 == '\0') break;
          if (cVar18 == ':') {
            if (param_3[lVar24] == '/') goto LAB_71006dd544;
            iVar8 = FUN_71006af4d0(0x3a);
            if (iVar8 == 0) break;
          }
          else {
            iVar8 = FUN_71006af4d0(cVar18);
            if ((iVar8 == 0) && (cVar18 != '+' && 1 < (byte)(cVar18 - 0x2dU))) break;
          }
          lVar24 = lVar24 + 1;
        } while (lVar24 != 0x2a);
        iVar8 = FUN_71006dc540(param_1,0,&local_8,uVar22);
        if (iVar8 != 0) {
LAB_71006dd544:
          plVar10 = (long *)(*(code *)PTR_FUN_7100af3698)(0x68,1);
          if (plVar10 == (long *)0x0) {
            return 7;
          }
          iVar8 = FUN_71006db9f0(param_3,plVar10,uVar22);
          if (iVar8 == 0) {
            FUN_71006db4b0(param_1);
            pcVar17 = (code *)PTR_FUN_7100af36a0;
            lVar24 = *plVar10;
            lVar12 = plVar10[3];
            lVar19 = plVar10[2];
            param_1[1] = plVar10[1];
            *param_1 = lVar24;
            param_1[3] = lVar12;
            param_1[2] = lVar19;
            lVar24 = plVar10[4];
            lVar12 = plVar10[7];
            lVar19 = plVar10[6];
            param_1[5] = plVar10[5];
            param_1[4] = lVar24;
            param_1[7] = lVar12;
            param_1[6] = lVar19;
            lVar24 = plVar10[8];
            lVar12 = plVar10[0xb];
            lVar19 = plVar10[10];
            param_1[9] = plVar10[9];
            param_1[8] = lVar24;
            param_1[0xb] = lVar12;
            param_1[10] = lVar19;
            param_1[0xc] = plVar10[0xc];
          }
          else {
            FUN_71006db4b0(plVar10);
            plVar10[0xc] = 0;
            plVar10[1] = 0;
            *plVar10 = 0;
            plVar10[3] = 0;
            plVar10[2] = 0;
            plVar10[5] = 0;
            plVar10[4] = 0;
            plVar10[7] = 0;
            plVar10[6] = 0;
            plVar10[9] = 0;
            plVar10[8] = 0;
            plVar10[0xb] = 0;
            plVar10[10] = 0;
            FUN_71006db4b0(plVar10);
            pcVar17 = (code *)PTR_FUN_7100af36a0;
          }
          goto LAB_71006dd460;
        }
        pcVar11 = (char *)(*(code *)PTR_FUN_7100af36b8)();
        if (pcVar11 == (char *)0x0) {
          iVar8 = 7;
          plVar10 = local_8;
          pcVar17 = (code *)PTR_FUN_7100af36a0;
          goto LAB_71006dd460;
        }
        lVar24 = FUN_710081d620(pcVar11,&DAT_7100840410);
        cVar18 = *param_3;
        pcVar25 = (char *)(lVar24 + 2);
        if (lVar24 == 0) {
          pcVar25 = pcVar11;
        }
        if (cVar18 == '/') {
          if (param_3[1] != '/') {
            puVar16 = (undefined1 *)FUN_710080eb40(pcVar25,0x2f);
            puVar14 = (undefined1 *)FUN_710080eb40(pcVar25,0x3f);
            if (puVar16 == (undefined1 *)0x0) {
              if (puVar14 != (undefined1 *)0x0) {
                *puVar14 = 0;
              }
            }
            else {
              if (puVar14 == (undefined1 *)0x0 || puVar16 <= puVar14) {
                puVar14 = puVar16;
              }
              *puVar14 = 0;
            }
            goto LAB_71006dcff0;
          }
          pcVar28 = param_3 + 2;
          *pcVar25 = '\0';
          local_18 = 0;
          param_3 = (char *)FUN_71006db570(pcVar28);
        }
        else {
          puVar14 = (undefined1 *)FUN_710080eb40(pcVar25,0x3f);
          if (puVar14 != (undefined1 *)0x0) {
            *puVar14 = 0;
            cVar18 = *param_3;
          }
          if (cVar18 == '?') {
            lVar24 = FUN_710080eb40(pcVar25,0x2f);
            if (lVar24 == 0) {
LAB_71006dd7cc:
              pcVar25 = (char *)0x0;
            }
            else {
              pcVar25 = (char *)(lVar24 + 1);
            }
          }
          else {
            puVar14 = (undefined1 *)FUN_7100806500(pcVar25,0x2f);
            if (puVar14 != (undefined1 *)0x0) {
              *puVar14 = 0;
              cVar18 = *param_3;
            }
            lVar24 = FUN_710080eb40(pcVar25,0x2f);
            if (lVar24 == 0) {
              pcVar25 = (char *)0x0;
              if (cVar18 != '.') goto LAB_71006dd7cc;
            }
            else {
              pcVar25 = (char *)(lVar24 + 1);
              if (cVar18 != '.') goto LAB_71006dcff0;
            }
            if ((param_3[1] != '/') ||
               (pcVar28 = param_3 + 2, param_3 = param_3 + 2, *pcVar28 == '.')) {
              iVar8 = 0;
              do {
                iVar7 = iVar8;
                if ((param_3[1] != '.') || (param_3[2] != '/')) {
                  if ((pcVar25 == (char *)0x0) || (bVar5 = iVar7 == 0, iVar7 = iVar7 + -1, bVar5))
                  goto LAB_71006dcff0;
                  goto LAB_71006dcfc0;
                }
                param_3 = param_3 + 3;
                iVar8 = iVar7 + 1;
              } while (*param_3 == '.');
              if (pcVar25 != (char *)0x0) {
LAB_71006dcfc0:
                lVar24 = 0;
                do {
                  puVar14 = (undefined1 *)FUN_7100806500(pcVar25,0x2f);
                  bVar5 = lVar24 != iVar7;
                  lVar24 = lVar24 + 1;
                  if (puVar14 == (undefined1 *)0x0) {
                    *pcVar25 = '\0';
                    break;
                  }
                  *puVar14 = 0;
                } while (bVar5);
              }
            }
          }
LAB_71006dcff0:
          local_18 = 1;
          pcVar28 = param_3;
        }
        cVar18 = *pcVar28;
        if (cVar18 == '\0') {
          lVar24 = 0;
        }
        else {
          bVar5 = true;
          pcVar27 = pcVar28;
          lVar19 = 0;
          do {
            lVar24 = lVar19;
            if (pcVar27 < param_3) {
LAB_71006dd034:
              lVar24 = lVar24 + 1;
            }
            else {
              if (cVar18 != ' ') {
                if (cVar18 == '?') {
                  bVar5 = false;
                }
                iVar8 = FUN_71006af5c0(cVar18);
                if ((iVar8 == 0) && (iVar8 = FUN_71006af470(cVar18), iVar8 == 0)) {
                  iVar8 = FUN_71006af530(cVar18);
                  lVar24 = lVar19 + 2;
                  if (iVar8 != 0) {
                    lVar24 = lVar19;
                  }
                }
                goto LAB_71006dd034;
              }
              lVar24 = lVar19 + 3;
              if (!bVar5) {
                lVar24 = lVar19 + 1;
              }
            }
            pcVar27 = pcVar27 + 1;
            cVar18 = *pcVar27;
            lVar19 = lVar24;
          } while (cVar18 != '\0');
        }
        lVar19 = FUN_710081ce00(pcVar11);
        plVar10 = (long *)(*(code *)PTR_FUN_7100af36a8)(lVar19 + lVar24 + 2);
        if (plVar10 == (long *)0x0) {
          iVar8 = 7;
          (*(code *)PTR_FUN_7100af36a0)(pcVar11);
          plVar10 = local_8;
          pcVar17 = (code *)PTR_FUN_7100af36a0;
        }
        else {
          FUN_710080f900(plVar10,pcVar11,lVar19);
          if ((*pcVar28 != '/') &&
             (((pcVar25 == (char *)0x0 || (*pcVar25 != '\0')) && (*pcVar28 != '?')))) {
            *(char *)((long)plVar10 + lVar19) = '/';
            lVar19 = lVar19 + 1;
          }
          FUN_71006db7c0((char *)((long)plVar10 + lVar19),pcVar28,local_18);
          (*(code *)PTR_FUN_7100af36a0)(pcVar11);
          (*(code *)PTR_FUN_7100af36a0)(local_8);
          plVar15 = (long *)(*(code *)PTR_FUN_7100af3698)(0x68,1);
          if (plVar15 == (long *)0x0) {
            iVar8 = 7;
            pcVar17 = (code *)PTR_FUN_7100af36a0;
          }
          else {
            iVar8 = FUN_71006db9f0(plVar10,plVar15,uVar22);
            if (iVar8 == 0) {
              (*(code *)PTR_FUN_7100af36a0)(plVar10);
              FUN_71006db4b0(param_1);
              pcVar17 = (code *)PTR_FUN_7100af36a0;
              lVar24 = *plVar15;
              lVar12 = plVar15[3];
              lVar19 = plVar15[2];
              param_1[1] = plVar15[1];
              *param_1 = lVar24;
              param_1[3] = lVar12;
              param_1[2] = lVar19;
              lVar24 = plVar15[4];
              lVar12 = plVar15[7];
              lVar19 = plVar15[6];
              param_1[5] = plVar15[5];
              param_1[4] = lVar24;
              param_1[7] = lVar12;
              param_1[6] = lVar19;
              lVar24 = plVar15[8];
              lVar12 = plVar15[0xb];
              lVar19 = plVar15[10];
              param_1[9] = plVar15[9];
              param_1[8] = lVar24;
              param_1[0xb] = lVar12;
              param_1[10] = lVar19;
              param_1[0xc] = plVar15[0xc];
              plVar10 = plVar15;
            }
            else {
              FUN_71006db4b0(plVar15);
              plVar15[0xc] = 0;
              plVar15[1] = 0;
              *plVar15 = 0;
              plVar15[3] = 0;
              plVar15[2] = 0;
              puVar4 = PTR_FUN_7100af36a0;
              plVar15[5] = 0;
              plVar15[4] = 0;
              plVar15[7] = 0;
              plVar15[6] = 0;
              plVar15[9] = 0;
              plVar15[8] = 0;
              plVar15[0xb] = 0;
              plVar15[10] = 0;
              (*(code *)puVar4)(plVar10);
              FUN_71006db4b0(plVar15);
              plVar10 = plVar15;
              pcVar17 = (code *)PTR_FUN_7100af36a0;
            }
          }
        }
        goto LAB_71006dd460;
      }
      if (param_2 == 3) {
        plVar15 = param_1 + 2;
        uVar26 = 0;
        local_28 = 0;
        bVar5 = false;
      }
      else {
        plVar15 = param_1 + 3;
        uVar26 = 0;
        local_28 = 0;
        bVar5 = false;
      }
    }
LAB_71006dcc00:
    iVar8 = (int)uVar26;
    uVar9 = FUN_710081ce00(param_3);
    if (8000000 < uVar9) {
      return 3;
    }
    if ((uVar22 >> 7 & 1) == 0) {
      lVar24 = 0;
      goto LAB_71006dd210;
    }
    plVar10 = (long *)(*(code *)PTR_FUN_7100af36a8)(uVar9 * 3 + 1);
    if (plVar10 == (long *)0x0) {
      return 7;
    }
    cVar18 = *param_3;
    plVar21 = plVar10;
    plVar20 = plVar10;
    if (local_28 == 0) {
      local_14 = 0;
      pcVar11 = param_3;
      if (cVar18 == '\0') {
        lVar24 = 0;
        *(char *)plVar10 = '\0';
      }
      else {
LAB_71006dccf4:
        do {
          while( true ) {
            cVar6 = FUN_710069f790();
            cVar18 = *param_3;
            uVar23 = (uint)uVar26;
            if (cVar6 == '\0') break;
            if (cVar18 == '=') {
              uVar23 = 0;
            }
            uVar26 = (ulong)uVar23;
            *(char *)plVar20 = cVar18;
LAB_71006dcd10:
            plVar20 = (long *)((long)plVar20 + 1);
            param_3 = param_3 + 1;
            if (*param_3 == '\0') goto LAB_71006dcd18;
          }
          if (cVar18 == '/') {
            if (!bVar5) goto LAB_71006dccd8;
            *(char *)plVar20 = '/';
            goto LAB_71006dcd10;
          }
          if (cVar18 == '=') {
            if (uVar23 == 0) goto LAB_71006dccd8;
            uVar26 = 0;
            *(char *)plVar20 = '=';
            goto LAB_71006dcd10;
          }
          if (cVar18 == '+' && local_28 != 0) {
            *(char *)plVar20 = '+';
            goto LAB_71006dcd10;
          }
LAB_71006dccd8:
          FUN_710069fb80(plVar20,4,"%%%02x");
          param_3 = param_3 + 1;
          plVar20 = (long *)((long)plVar20 + 3);
        } while (*param_3 != '\0');
LAB_71006dcd18:
        *(char *)plVar20 = '\0';
        if (local_14 != 0) goto LAB_71006dd480;
        lVar24 = 0;
      }
    }
    else {
      while (cVar18 != '\0') {
        if (cVar18 == ' ') {
          cVar18 = '+';
        }
        *(char *)plVar21 = cVar18;
        param_3 = param_3 + 1;
        plVar21 = (long *)((long)plVar21 + 1);
        cVar18 = *param_3;
      }
      *(char *)plVar21 = '\0';
      pcVar11 = (char *)(*(code *)PTR_FUN_7100af36b8)(plVar10);
      if (pcVar11 == (char *)0x0) {
        iVar8 = 7;
        pcVar17 = (code *)PTR_FUN_7100af36a0;
        goto LAB_71006dd460;
      }
      local_14 = local_28;
      param_3 = pcVar11;
      if (*pcVar11 != '\0') goto LAB_71006dccf4;
      *(char *)plVar10 = '\0';
LAB_71006dd480:
      lVar24 = 0;
      (*(code *)PTR_FUN_7100af36a0)(pcVar11);
    }
  }
  else {
    if (param_2 == 8) {
      uVar26 = uVar22 >> 8 & 1;
      plVar15 = param_1 + 8;
      local_28 = (uint)(uVar22 >> 7) & 1;
      bVar5 = false;
      goto LAB_71006dcc00;
    }
    if (8 < param_2) {
      if (param_2 == 9) {
        plVar15 = param_1 + 9;
        uVar26 = 0;
        local_28 = 0;
        bVar5 = false;
      }
      else {
        if (param_2 != 10) {
          return 9;
        }
        plVar15 = param_1 + 5;
        uVar26 = 0;
        local_28 = 0;
        bVar5 = false;
      }
      goto LAB_71006dcc00;
    }
    if (param_2 != 6) {
      if (param_2 != 7) {
        return 9;
      }
      plVar15 = param_1 + 7;
      local_28 = 0;
      uVar26 = 0;
      bVar5 = true;
      goto LAB_71006dcc00;
    }
    lVar24 = FUN_710081b720(param_3,&local_8,10);
    if (0xfffe < lVar24 - 1U) {
      return 4;
    }
    if ((char)*local_8 != '\0') {
      return 3;
    }
    uVar22 = FUN_710081ce00(param_3);
    plVar15 = param_1 + 6;
LAB_71006dd358:
    iVar8 = 0;
    if (8000000 < uVar22) {
      return 3;
    }
LAB_71006dd210:
    plVar10 = (long *)(*(code *)PTR_FUN_7100af36b8)(param_3);
    if (plVar10 == (long *)0x0) {
      return 7;
    }
    if ((char)*plVar10 != '\0') {
      cVar18 = *(char *)((long)plVar10 + 1);
      plVar20 = plVar10;
      if ((char)*plVar10 == '%') goto LAB_71006dd268;
      do {
        plVar21 = (long *)((long)plVar20 + 1);
        while( true ) {
          if ((char)*plVar21 == '\0') goto LAB_71006dcd2c;
          cVar18 = *(char *)((long)plVar21 + 1);
          plVar20 = plVar21;
          if ((char)*plVar21 != '%') break;
LAB_71006dd268:
          iVar7 = FUN_71006af500(cVar18);
          if (((iVar7 == 0) || (iVar7 = FUN_71006af500(*(char *)((long)plVar20 + 2)), iVar7 == 0))
             || ((iVar7 = FUN_71006af590(*(char *)((long)plVar20 + 1)), iVar7 == 0 &&
                 (iVar7 = FUN_71006af590(*(char *)((long)plVar20 + 2)), iVar7 == 0)))) break;
          bVar2 = *(byte *)((long)plVar20 + 1);
          plVar21 = (long *)((long)plVar20 + 3);
          bVar3 = *(byte *)((long)plVar20 + 2);
          bVar1 = bVar2 + 0x20;
          if (((&DAT_71009d32f1)[bVar2] & 3) != 1) {
            bVar1 = bVar2;
          }
          *(byte *)((long)plVar20 + 1) = bVar1;
          bVar1 = bVar3 + 0x20;
          if (((&DAT_71009d32f1)[bVar3] & 3) != 1) {
            bVar1 = bVar3;
          }
          *(byte *)((long)plVar20 + 2) = bVar1;
        }
      } while( true );
    }
  }
LAB_71006dcd2c:
  if (((iVar8 == 0) || (lVar19 = param_1[8], lVar19 == 0)) ||
     (lVar12 = FUN_710081ce00(lVar19), lVar12 == 0)) {
    if ((param_2 != 5) ||
       ((((char)*plVar10 == '\0' && (((uint)param_4 >> 10 & 1) != 0)) ||
        (iVar8 = FUN_71006db620(param_1,plVar10), iVar8 == 0)))) {
      (*(code *)PTR_FUN_7100af36a0)(*plVar15);
      *plVar15 = (long)plVar10;
      if (lVar24 != 0) {
        param_1[0xc] = lVar24;
        return 0;
      }
      return 0;
    }
    iVar8 = 3;
    pcVar17 = (code *)PTR_FUN_7100af36a0;
  }
  else {
    lVar13 = FUN_710081ce00(plVar10);
    cVar18 = *(char *)(lVar19 + lVar12 + -1);
    lVar24 = lVar12;
    if (cVar18 != '&') {
      lVar24 = lVar12 + 1;
    }
    lVar19 = (*(code *)PTR_FUN_7100af36a8)(lVar24 + 1 + lVar13);
    if (lVar19 != 0) {
      FUN_710081b7c0(lVar19,param_1[8]);
      if (cVar18 != '&') {
        *(undefined1 *)(lVar19 + lVar12) = 0x26;
      }
      FUN_710081b7c0(lVar19 + lVar24,plVar10);
      (*(code *)PTR_FUN_7100af36a0)(plVar10);
      (*(code *)PTR_FUN_7100af36a0)(*plVar15);
      *plVar15 = lVar19;
      return 0;
    }
    iVar8 = 7;
    pcVar17 = (code *)PTR_FUN_7100af36a0;
  }
LAB_71006dd460:
  (*pcVar17)(plVar10);
  return iVar8;
}



// ===== FUN_71006dd820 @ 71006dd820 (size=148) =====

long FUN_71006dd820(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  do {
    bVar1 = false;
    lVar2 = FUN_71008069e0(param_1,param_2,param_3);
    while( true ) {
      if (lVar2 == 0) {
        return 0;
      }
      lVar3 = FUN_710081ce00();
      if ((lVar3 != 0) && (*(char *)(lVar2 + lVar3 + -1) == '\n')) break;
      bVar1 = true;
      lVar2 = FUN_71008069e0(param_1,param_2,param_3);
    }
  } while (bVar1);
  return lVar2;
}



// ===== FUN_71006dd8c0 @ 71006dd8c0 (size=28) =====

bool FUN_71006dd8c0(void)

{
  int iVar1;
  
  iVar1 = FUN_710080e660();
  return iVar1 != 0;
}



// ===== FUN_71006dd8e0 @ 71006dd8e0 (size=244) =====

undefined8 FUN_71006dd8e0(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_238 [31];
  undefined1 local_219;
  undefined1 auStack_218 [31];
  undefined1 local_1f9;
  undefined1 auStack_1f8 [99];
  undefined1 local_195;
  undefined1 auStack_190 [226];
  char local_ae;
  ushort local_ac;
  undefined1 auStack_aa [100];
  char local_46;
  undefined1 auStack_45 [32];
  undefined1 auStack_25 [37];
  
  lVar3 = *param_1;
  iVar1 = FUN_7100759f20(0);
  if (iVar1 == 0) {
    iVar1 = FUN_710075a350(auStack_190);
    FUN_710075a2f0();
    if ((iVar1 == 0) && (local_ae != '\0')) {
      *(ulong *)(lVar3 + 0x668) = (ulong)local_ac;
      uVar2 = FUN_710081f760(auStack_1f8,auStack_aa,99);
      local_195 = 0;
      uVar2 = FUN_71006ac350(lVar3 + 0xcc8,uVar2);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (local_46 != '\0') {
        uVar2 = FUN_710081f760(auStack_238,auStack_45,0x1f);
        local_219 = 0;
        uVar2 = FUN_71006ac350(lVar3 + 0xd98,uVar2);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = FUN_710081f760(auStack_218,auStack_25,0x1f);
        local_1f9 = 0;
        uVar2 = FUN_71006ac350(lVar3 + 0xda0,uVar2);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        *(uint *)((long)param_1 + 0x624) = *(uint *)((long)param_1 + 0x624) | 0x200;
        return uVar2;
      }
    }
  }
  return 0;
}



// ===== FUN_71006dd9e0 @ 71006dd9e0 (size=84) =====

undefined8 FUN_71006dd9e0(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_2 != 0 && param_3 != 0) {
    uVar1 = FUN_71006a1060("%s/%s@%s",param_1,param_2,param_3);
    return uVar1;
  }
  if (param_2 == 0) {
    if (param_3 != 0) {
      uVar1 = FUN_71006a1060("%s@%s",param_1,param_3,param_3);
      return uVar1;
    }
    return 0;
  }
  uVar1 = FUN_71006a1060("%s/%s",param_1,param_2,param_3);
  return uVar1;
}



// ===== FUN_71006dda40 @ 71006dda40 (size=348) =====

undefined4
FUN_71006dda40(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
              undefined8 *param_5,undefined8 *param_6)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  *param_6 = 0;
  lVar7 = 0;
  *param_5 = 0;
  if (param_2 != 0) {
    lVar7 = FUN_710081ce00(param_2);
  }
  lVar4 = FUN_710081ce00(param_3);
  lVar5 = FUN_710081ce00(param_4);
  uVar1 = lVar7 + lVar4;
  if (uVar1 < 0x4000000000000000) {
    lVar2 = lVar5 + 2 + uVar1;
    lVar6 = (*(code *)PTR_FUN_7100af36a8)(lVar2);
    if (lVar6 != 0) {
      if (lVar7 != 0) {
        FUN_710080f900(lVar6,param_2,lVar7);
      }
      *(undefined1 *)(lVar6 + lVar7) = 0;
      FUN_710080f900(lVar6 + lVar7 + 1,param_3,lVar4);
      *(undefined1 *)(lVar6 + uVar1 + 1) = 0;
      FUN_710080f900(lVar6 + uVar1 + 2,param_4,lVar5);
      uVar3 = FUN_71006b79d0(param_1,lVar6,lVar2,param_5,param_6);
      (*(code *)PTR_FUN_7100af36a0)(lVar6);
      return uVar3;
    }
  }
  return 0x1b;
}



// ===== FUN_71006ddba0 @ 71006ddba0 (size=164) =====

undefined8 FUN_71006ddba0(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_710081ce00(param_2);
  if (lVar1 != 0) {
    uVar2 = FUN_71006b79d0(param_1,param_2,lVar1,param_3,param_4);
    return uVar2;
  }
  lVar1 = (*(code *)PTR_FUN_7100af36b8)(&DAT_7100841540);
  *param_3 = lVar1;
  if (lVar1 != 0) {
    *param_4 = 1;
    return 0;
  }
  *param_4 = 0;
  return 0x1b;
}



// ===== FUN_71006ddc50 @ 71006ddc50 (size=164) =====

undefined8 FUN_71006ddc50(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_710081ce00(param_2);
  if (lVar1 != 0) {
    uVar2 = FUN_71006b79d0(param_1,param_2,lVar1,param_3,param_4);
    return uVar2;
  }
  lVar1 = (*(code *)PTR_FUN_7100af36b8)(&DAT_7100841540);
  *param_3 = lVar1;
  if (lVar1 != 0) {
    *param_4 = 1;
    return 0;
  }
  *param_4 = 0;
  return 0x1b;
}



// ===== FUN_71006ddd00 @ 71006ddd00 (size=104) =====

undefined8 FUN_71006ddd00(char *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_710081ce00();
  *param_2 = 0;
  *param_3 = 0;
  if ((lVar1 != 0) && (*param_1 != '=')) {
    uVar2 = FUN_71006b7790(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}



// ===== FUN_71006ddd70 @ 71006ddd70 (size=460) =====

undefined4
FUN_71006ddd70(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  undefined1 local_3;
  undefined1 local_2;
  undefined1 local_1;
  
  uVar2 = FUN_710081ce00(param_4);
  if (param_2 == 0) {
    uVar1 = FUN_71006a8820();
    lVar4 = FUN_71006e47f0(&PTR_LAB_7100ae3a58,param_4,uVar1);
    if (lVar4 == 0) {
      return 0x1b;
    }
  }
  else {
    lVar3 = FUN_710081ce00(param_2);
    uVar1 = FUN_71006a8820(uVar2);
    lVar4 = FUN_71006e47f0(&PTR_LAB_7100ae3a58,param_4,uVar1);
    if (lVar4 == 0) {
      return 0x1b;
    }
    if (lVar3 != 0) {
      uVar1 = FUN_71006a8820(lVar3);
      FUN_71006e4980(lVar4,param_2,uVar1);
    }
  }
  FUN_71006e49a0(lVar4,&local_10);
  lVar4 = FUN_71006a1060("%s %02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x",
                         param_3,local_10,local_f,local_e,local_d,local_c,local_b,local_a,local_9,
                         local_8,local_7,local_6,local_5,local_4,local_3,local_2,local_1);
  if (lVar4 == 0) {
    return 0x1b;
  }
  uVar1 = FUN_71006b79d0(param_1,lVar4,0,param_5,param_6);
  (*(code *)PTR_FUN_7100af36a0)(lVar4);
  return uVar1;
}



// ===== FUN_71006ddf40 @ 71006ddf40 (size=188) =====

undefined4
FUN_71006ddf40(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_4 == 0x50 || param_4 == 0) {
    lVar2 = FUN_71006a1060(&DAT_710084af18,param_2,param_3,param_5);
  }
  else {
    lVar2 = FUN_71006a1060(&DAT_710084af40);
  }
  if (lVar2 != 0) {
    uVar3 = FUN_710081ce00(lVar2);
    uVar1 = FUN_71006b79d0(param_1,lVar2,uVar3,param_6,param_7);
    (*(code *)PTR_FUN_7100af36a0)(lVar2);
    return uVar1;
  }
  return 0x1b;
}



// ===== FUN_71006de000 @ 71006de000 (size=148) =====

undefined4
FUN_71006de000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_71006a1060(&DAT_710084af70);
  if (lVar2 != 0) {
    uVar3 = FUN_710081ce00();
    uVar1 = FUN_71006b79d0(param_1,lVar2,uVar3,param_4,param_5);
    (*(code *)PTR_FUN_7100af36a0)(lVar2);
    return uVar1;
  }
  return 0x1b;
}



// ===== FUN_71006de0a0 @ 71006de0a0 (size=80) =====

undefined4 FUN_71006de0a0(long *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_1;
  uVar1 = (*(code *)PTR_FUN_7100af3698)(1,0x18);
  lVar3 = *param_1;
  *(undefined8 *)(lVar4 + 0x1d0) = uVar1;
  uVar2 = 0x1b;
  if (*(long *)(lVar3 + 0x1d0) != 0) {
    uVar2 = 0;
  }
  return uVar2;
}



// ===== FUN_71006de0f0 @ 71006de0f0 (size=92) =====

undefined8 FUN_71006de0f0(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*param_1 + 0x1d0);
  if (puVar1 != (undefined8 *)0x0) {
    (*(code *)PTR_FUN_7100af36a0)(puVar1[1]);
    *puVar1 = 0;
    puVar1[1] = 0;
    if (*(int *)(puVar1 + 2) != -1) {
      FUN_710081f680();
    }
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  }
  return 0;
}



// ===== FUN_71006de150 @ 71006de150 (size=92) =====

undefined8 FUN_71006de150(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*param_1 + 0x1d0);
  if (puVar1 != (undefined8 *)0x0) {
    (*(code *)PTR_FUN_7100af36a0)(puVar1[1]);
    *puVar1 = 0;
    puVar1[1] = 0;
    if (*(int *)(puVar1 + 2) != -1) {
      FUN_710081f680();
    }
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  }
  return 0;
}



// ===== FUN_71006de890 @ 71006de890 (size=168) =====

ulong FUN_71006de890(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  if (param_2 == 0 || param_3 == 0) {
    uVar2 = FUN_71006ab1e0();
    return uVar2;
  }
  lVar1 = (*(code *)PTR_FUN_7100af36a8)(param_3 + 1);
  if (lVar1 != 0) {
    FUN_710080f900(lVar1,param_2,param_3);
    *(undefined1 *)(lVar1 + param_3) = 0;
    uVar2 = FUN_71006ab1e0(param_1,lVar1);
    (*(code *)PTR_FUN_7100af36a0)(lVar1);
    return uVar2 & 0xffffffff;
  }
  return 0x1b;
}



// ===== FUN_71006de940 @ 71006de940 (size=708) =====

int FUN_71006de940(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  
  lVar7 = FUN_71006ab080();
  if (lVar7 == 0) {
    iVar4 = 0x1b;
  }
  else {
    iVar4 = FUN_71006ab940(param_2,lVar7);
    bVar2 = iVar4 == 0 && param_3 != (long *)0x0;
    if (iVar4 == 0 && param_3 != (long *)0x0) {
      do {
        plVar11 = param_3;
        lVar9 = lVar7;
        if (param_3[9] != 0) {
          lVar8 = FUN_71006ab150(lVar7);
          if (lVar8 != 0) {
            iVar4 = FUN_71006de890(lVar8,param_3[1],param_3[2]);
            if (iVar4 != 0) goto LAB_71006dea38;
            lVar9 = FUN_71006ab080(param_1);
            if (lVar9 != 0) {
              iVar4 = FUN_71006ab940(lVar8,lVar9);
              if (iVar4 == 0) goto LAB_71006dea08;
              goto LAB_71006dea38;
            }
          }
LAB_71006dea54:
          iVar4 = 0x1b;
          goto LAB_71006dea38;
        }
LAB_71006dea08:
        do {
          lVar8 = FUN_71006ab150(lVar9);
          if (lVar8 == 0) goto LAB_71006dea54;
          iVar5 = FUN_71006ab6b0(lVar8,plVar11[8],0);
          iVar4 = iVar5;
          if (((iVar5 != 0) || ((plVar11[7] != 0 && (iVar4 = FUN_71006ab640(lVar8), iVar4 != 0))))
             || ((param_3[9] == 0 &&
                 (iVar4 = FUN_71006de890(lVar8,param_3[1],param_3[2]), iVar4 != 0))))
          goto LAB_71006dea38;
          lVar10 = param_3[4];
          uVar6 = (uint)param_3[10];
          if ((uVar6 >> 7 & 1) != 0) {
            lVar10 = param_3[0xd];
          }
          if (lVar10 == 0) {
            lVar10 = -1;
          }
          if ((param_3[10] & 3U) == 0) {
            if ((uVar6 >> 4 & 1) == 0) {
              if ((uVar6 >> 6 & 1) == 0) {
                iVar4 = FUN_71006ab490(lVar8,param_3[3],lVar10);
              }
              else {
                iVar4 = FUN_71006ab730(lVar8,lVar10,param_4,0,0,param_3[0xc]);
              }
            }
            else {
              lVar10 = param_3[6];
              if (lVar10 == 0) {
                lVar10 = -1;
              }
              iVar4 = FUN_71006ab490(lVar8,param_3[5],lVar10);
            }
joined_r0x0071006debd8:
            if (iVar4 != 0) goto LAB_71006dea38;
          }
          else {
            if ((*(char *)plVar11[3] == '-') && (((char *)plVar11[3])[1] == '\0')) {
              lVar10 = FUN_7100834b00();
              iVar4 = FUN_71006ab730(lVar8,0xffffffffffffffff,FUN_710081e580,FUN_7100814b40,0,
                                     *(undefined8 *)(lVar10 + 8));
            }
            else {
              iVar4 = FUN_71006ab5b0(lVar8);
            }
            if (iVar4 != 0) goto LAB_71006dea38;
            if (((uint)param_3[10] >> 1 & 1) != 0) {
              iVar4 = FUN_71006ab250(lVar8,0);
              goto joined_r0x0071006debd8;
            }
          }
          bVar3 = bVar2;
          iVar4 = iVar5;
          if ((param_3[0xb] != 0) && ((param_3[9] != 0 || ((param_3[10] & 0x51U) != 0)))) {
            iVar4 = FUN_71006ab250(lVar8);
            bVar3 = iVar4 == 0;
          }
          plVar1 = plVar11 + 9;
          plVar11 = (long *)*plVar1;
        } while ((long *)*plVar1 != (long *)0x0 && bVar3);
        param_3 = (long *)*param_3;
      } while (param_3 != (long *)0x0 && bVar3);
    }
    if (iVar4 == 0) {
      return 0;
    }
  }
LAB_71006dea38:
  FUN_71006aaeb0(param_2);
  return iVar4;
}



// ===== FUN_71006dec10 @ 71006dec10 (size=96) =====

undefined8 FUN_71006dec10(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_71006aaeb0(param_2);
  if (param_3 != 0) {
    uVar1 = FUN_71006de940(param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return 0;
}



// ===== FUN_71006dec70 @ 71006dec70 (size=164) =====

void FUN_71006dec70(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x78);
  if (lVar2 != 0) {
    if (0 < *(int *)(param_1 + 0x80)) {
      lVar3 = 0;
      do {
        (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(lVar2 + lVar3 * 8));
        lVar2 = *(long *)(param_1 + 0x78);
        iVar1 = *(int *)(param_1 + 0x80);
        *(undefined8 *)(lVar2 + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while ((int)lVar3 < iVar1);
    }
    (*(code *)PTR_FUN_7100af36a0)();
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(param_1 + 0x88));
  *(undefined8 *)(param_1 + 0x88) = 0;
  (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(param_1 + 0xd8));
  *(undefined8 *)(param_1 + 0xd8) = 0;
  return;
}



// ===== FUN_71006ded20 @ 71006ded20 (size=64) =====

void FUN_71006ded20(long param_1,undefined8 param_2)

{
  FUN_71006d5170(param_1 + 0x740,0,0);
  *(bool *)param_2 = *(int *)(param_1 + 0x7f8) == 0;
  return;
}



// ===== FUN_71006ded70 @ 71006ded70 (size=164) =====

void FUN_71006ded70(long param_1,undefined1 *param_2)

{
  int iVar1;
  
  *param_2 = 0;
  FUN_71006a2e80(param_1,0);
  *(undefined8 *)(param_1 + 0x790) = 120000;
  *(long *)(param_1 + 0x798) = param_1;
  *(code **)(param_1 + 0x7a0) = FUN_71006e1570;
  *(undefined1 **)(param_1 + 0x7a8) = &LAB_71006e0540;
  if (((*(uint *)(*(long *)(param_1 + 0x648) + 0x84) & 1) == 0) ||
     (iVar1 = FUN_71006b1850(param_1,0), iVar1 == 0)) {
    FUN_71006d5350(param_1 + 0x740);
    *(undefined4 *)(param_1 + 0x7f8) = 1;
    FUN_71006d5170(param_1 + 0x740,0,0);
    *param_2 = *(int *)(param_1 + 0x7f8) == 0;
  }
  return;
}



// ===== FUN_71006dee20 @ 71006dee20 (size=392) =====

undefined8 FUN_71006dee20(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_1;
  lVar4 = *(long *)(lVar3 + 0x1d0);
  if (*(long *)(lVar3 + 0xbd8) != 0 && *(long *)(lVar3 + 0xbd8) < param_2) {
    FUN_71006c0a00(lVar3,"Maximum file size exceeded");
    return 0x3f;
  }
  lVar2 = *(long *)(lVar3 + 0x1580);
  *(long *)(lVar4 + 0x18) = param_2;
  if (lVar2 == 0) {
    uVar1 = FUN_71006d5540(param_1 + 0xe8,"RETR %s",param_1[0xf9]);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    *(undefined4 *)(param_1 + 0xff) = 0x20;
    return uVar1;
  }
  if (param_2 == -1) {
    FUN_71006c08c0(lVar3,"ftp server doesn\'t support SIZE\n");
    param_2 = *(long *)(lVar4 + 0x18);
joined_r0x0071006def88:
    if (param_2 == 0) {
      FUN_71006ca160(lVar3,0xffffffff,0xffffffffffffffff,0,0xffffffff);
      FUN_71006c08c0(lVar3,"File already completely downloaded\n");
      *(undefined4 *)(lVar4 + 0x10) = 2;
      *(undefined4 *)(param_1 + 0xff) = 0;
      return 0;
    }
    param_2 = *(long *)(lVar3 + 0x1580);
LAB_71006dee7c:
    FUN_71006c08c0(lVar3,"Instructs server to resume from offset %ld\n",param_2);
    uVar1 = FUN_71006d5540(param_1 + 0xe8,"REST %ld",*(undefined8 *)(lVar3 + 0x1580));
    if ((int)uVar1 == 0) {
      *(undefined4 *)(param_1 + 0xff) = 0x1b;
      return uVar1;
    }
  }
  else {
    if (lVar2 < 0) {
      if (-param_2 == lVar2 || -lVar2 < param_2) {
        param_2 = lVar2 + param_2;
        *(long *)(lVar4 + 0x18) = -lVar2;
        *(long *)(lVar3 + 0x1580) = param_2;
        goto LAB_71006dee7c;
      }
    }
    else if (lVar2 <= param_2) {
      param_2 = param_2 - lVar2;
      *(long *)(lVar4 + 0x18) = param_2;
      goto joined_r0x0071006def88;
    }
    FUN_71006c0a00(lVar3,"Offset (%ld) was beyond file size (%ld)",lVar2,param_2);
    uVar1 = 0x24;
  }
  return uVar1;
}



// ===== FUN_71006defb0 @ 71006defb0 (size=164) =====

int FUN_71006defb0(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  
  if ((param_1[0xc4] & 0x4080000000000) == 0x80000000000) {
    *(uint *)((long)param_1 + 0x624) = *(uint *)((long)param_1 + 0x624) | 0x40000;
  }
  uVar2 = (ulong)*(uint *)((long)param_1 + 0x624) ^ 0x40000;
  iVar1 = FUN_71006d5540(param_1 + 0xe8,"%s",&UNK_71009bb598 + (uVar2 >> 0x12 & 1) * 5);
  if (iVar1 == 0) {
    *(uint *)((long)param_1 + 0x7ec) = (uint)uVar2 >> 0x12 & 1;
    *(undefined4 *)(param_1 + 0xff) = 0x1e;
    FUN_71006c08c0(*param_1,"Connect data stream passively\n");
  }
  return iVar1;
}



// ===== FUN_71006df060 @ 71006df060 (size=176) =====

undefined8 FUN_71006df060(long *param_1)

{
  undefined8 uVar1;
  
  if ((param_1[0xc4] & 0x888000000000U) != 0x80000000000) {
    FUN_71006c08c0(*param_1,"Failed EPSV attempt. Disabling EPSV\n");
    *(uint *)((long)param_1 + 0x624) = *(uint *)((long)param_1 + 0x624) & 0xfffbffff;
    *(ushort *)(*param_1 + 0x162c) = *(ushort *)(*param_1 + 0x162c) & 0xfff7;
    uVar1 = FUN_71006d5540(param_1 + 0xe8,"%s",&DAT_710084b160);
    if ((int)uVar1 == 0) {
      *(undefined4 *)(param_1 + 0xff) = 0x1e;
      *(int *)((long)param_1 + 0x7ec) = *(int *)((long)param_1 + 0x7ec) + 1;
    }
    return uVar1;
  }
  FUN_71006c0a00(*param_1,"Failed EPSV attempt, exiting\n");
  return 8;
}



// ===== FUN_71006df110 @ 71006df110 (size=492) =====

undefined8 FUN_71006df110(long *param_1,char param_2)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar6 = *param_1;
  lVar3 = *(long *)(lVar6 + 0x1580);
  lVar8 = *(long *)(lVar6 + 0x1d0);
  if (lVar3 != 0) {
    if (param_2 == '\0') {
      if (lVar3 < 0) {
        uVar5 = FUN_71006d5540(param_1 + 0xe8,"SIZE %s",param_1[0xf9]);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        *(undefined4 *)(param_1 + 0xff) = 0x19;
        return uVar5;
      }
    }
    else if (lVar3 < 1) goto LAB_71006df218;
    *(ulong *)(lVar6 + 0xf60) = *(ulong *)(lVar6 + 0xf60) | 0x1000;
    if (param_1[0xde] != 0) {
      FUN_71006a63f0(lVar6,1);
      iVar2 = (*(code *)param_1[0xde])(param_1[0xdf],*(undefined8 *)(lVar6 + 0x1580),0);
      FUN_71006a63f0(lVar6,0);
      if (iVar2 != 0) {
        if (iVar2 != 2) {
          FUN_71006c0a00(lVar6,"Could not seek stream");
          return 0x1f;
        }
        lVar4 = *(long *)(lVar6 + 0x1580);
        lVar3 = 0;
        do {
          uVar7 = *(ulong *)(lVar6 + 0xbb0);
          if (lVar4 - lVar3 <= (long)uVar7) {
            uVar7 = FUN_71006a8860();
          }
          lVar4 = (**(code **)(lVar6 + 0x15b0))
                            (*(undefined8 *)(lVar6 + 0x1150),1,uVar7,*(undefined8 *)(lVar6 + 0x15b8)
                            );
          lVar3 = lVar3 + lVar4;
          if (uVar7 <= lVar4 - 1U) {
            FUN_71006c0a00(lVar6,"Failed to read data");
            return 0x1f;
          }
          lVar4 = *(long *)(lVar6 + 0x1580);
        } while (lVar3 < lVar4);
      }
    }
    if ((0 < *(long *)(lVar6 + 0x15a0)) &&
       (lVar3 = *(long *)(lVar6 + 0x15a0) - *(long *)(lVar6 + 0x1580),
       *(long *)(lVar6 + 0x15a0) = lVar3, lVar3 < 1)) {
      FUN_71006c08c0(lVar6,"File already completely uploaded\n");
      FUN_71006ca160(lVar6,0xffffffff,0xffffffffffffffff,0,0xffffffff);
      *(undefined4 *)(lVar8 + 0x10) = 2;
      *(undefined4 *)(param_1 + 0xff) = 0;
      return 0;
    }
  }
LAB_71006df218:
  pcVar1 = "APPE %s";
  if ((*(ulong *)(lVar6 + 0xf60) & 0x1000) == 0) {
    pcVar1 = "STOR %s";
  }
  uVar5 = FUN_71006d5540(param_1 + 0xe8,pcVar1,param_1[0xf9]);
  if ((int)uVar5 == 0) {
    *(undefined4 *)(param_1 + 0xff) = 0x21;
  }
  return uVar5;
}



// ===== FUN_71006df300 @ 71006df300 (size=1764) =====

/* WARNING: Type propagation algorithm not settling */

int FUN_71006df300(long *param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  char *pcVar10;
  char *pcVar11;
  long lVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  char cVar16;
  undefined4 uVar17;
  char *pcVar18;
  long lVar19;
  undefined4 local_610;
  undefined4 local_60c;
  long *local_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined7 uStack_5e8;
  undefined1 uStack_5e1;
  undefined7 uStack_5e0;
  undefined8 uStack_5d9;
  char acStack_5d0 [72];
  undefined1 uStack_588;
  char local_587;
  ushort local_586;
  undefined1 auStack_584 [124];
  undefined1 auStack_508 [256];
  char acStack_408 [1032];
  
  lVar19 = *param_1;
  uStack_5e8 = 0;
  local_5f0 = 0;
  local_610 = 0xffffffff;
  local_608 = (long *)0x0;
  local_600 = 0;
  uStack_5f8 = 0;
  uStack_5d9 = 0;
  uStack_5e1 = 0;
  uStack_5e0 = 0;
  pcVar18 = *(char **)(lVar19 + 0xc80);
  if ((pcVar18 == (char *)0x0) || (uVar9 = FUN_710081ce00(pcVar18), uVar9 < 2)) {
    pcVar10 = (char *)0x0;
    uVar6 = 0;
    uVar5 = 0;
  }
  else {
    if (uVar9 < 0x10) {
      uVar9 = 0x10;
    }
    pcVar10 = (char *)(*(code *)PTR_FUN_7100af3698)(uVar9 + 1);
    if (pcVar10 == (char *)0x0) {
      return 0x1b;
    }
    pcVar11 = (char *)FUN_710080eb40(pcVar18,0x3a);
    if (*pcVar18 == ':') {
LAB_71006df3c0:
      lVar12 = FUN_710080eb40(pcVar18,0x3a);
      if (lVar12 == 0) {
LAB_71006df420:
        uVar6 = 0;
        uVar5 = 0;
      }
      else {
        FUN_710080daa0(lVar12 + 1,0,10);
        uVar5 = FUN_71006a87e0();
        uVar5 = uVar5 & 0xffff;
        lVar12 = FUN_710080eb40(lVar12,0x2d);
        uVar6 = uVar5;
        if (lVar12 != 0) {
          FUN_710080daa0(lVar12 + 1,0,10);
          uVar6 = FUN_71006a87e0();
          uVar6 = uVar6 & 0xffff;
          if (uVar6 < uVar5) goto LAB_71006df420;
        }
      }
    }
    else {
      if (pcVar11 != (char *)0x0) {
        FUN_710081f760(pcVar10,pcVar18,(long)pcVar11 - (long)pcVar18);
        pcVar18 = pcVar11;
        goto LAB_71006df3c0;
      }
      uVar6 = 0;
      uVar5 = 0;
      FUN_710081b7c0(pcVar10,pcVar18);
    }
    if (*pcVar10 != '\0') {
      uVar17 = *(undefined4 *)(param_1[0x5c] + 4);
      uVar7 = FUN_71006c58a0(*(undefined8 *)(param_1[0x5c] + 0x20));
      iVar8 = FUN_71006c58b0(uVar17,uVar7,(int)param_1[0x65],pcVar10,acStack_408,0x401);
      if (iVar8 == 1) {
        return 0x1e;
      }
      pcVar18 = acStack_408;
      if ((iVar8 == 2) || (pcVar18 = pcVar10, iVar8 == 0)) {
        bVar2 = true;
        goto LAB_71006df4c8;
      }
    }
  }
  local_60c = 0x80;
  iVar8 = FUN_710076bce0((int)param_1[0x9b],&uStack_588,&local_60c);
  if (iVar8 != 0) {
    puVar14 = (undefined4 *)FUN_710080e8e0();
    uVar15 = FUN_71006a6bc0(*puVar14,auStack_508,0x100);
    FUN_71006c0a00(lVar19,"getsockname() failed: %s",uVar15);
    (*(code *)PTR_FUN_7100af36a0)(pcVar10);
    return 0x1e;
  }
  pcVar18 = acStack_408;
  bVar2 = false;
  FUN_710076c470(local_587,auStack_584,pcVar18,0x401);
LAB_71006df4c8:
  FUN_71006b8060(param_1,pcVar18,0,0,&local_608);
  if (local_608 != (long *)0x0) {
    lVar12 = *local_608;
    FUN_71006b8350(lVar19);
    if (lVar12 != 0) {
      (*(code *)PTR_FUN_7100af36a0)(pcVar10);
      local_610 = 0xffffffff;
      while (iVar8 = FUN_71006a1d90(param_1,lVar12,0,&local_610), iVar8 != 0) {
        puVar14 = (undefined4 *)FUN_710080e8e0();
        lVar12 = *(long *)(lVar12 + 0x28);
        if (lVar12 == 0) {
          uVar15 = FUN_71006a6bc0(*puVar14,auStack_508,0x100);
          FUN_71006c0a00(lVar19,"socket failure: %s",uVar15);
          return 0x1e;
        }
      }
      FUN_710080f900(&uStack_588,*(undefined8 *)(lVar12 + 0x20),*(undefined4 *)(lVar12 + 0x10));
      local_60c = *(undefined4 *)(lVar12 + 0x10);
      uVar1 = uVar5;
      do {
        if (uVar6 < uVar1) {
          FUN_71006c0a00(lVar19,"bind() failed, we ran out of ports!");
          FUN_71006a1ce0(param_1,local_610);
          return 0x1e;
        }
        while( true ) {
          if (local_587 == '\x02') {
            local_586 = (ushort)(uVar1 >> 8) | (ushort)((uVar1 & 0xff00ff) << 8);
          }
          iVar8 = FUN_710076bbc0(local_610,&uStack_588,local_60c);
          if (iVar8 == 0) {
            local_60c = 0x80;
            iVar8 = FUN_710076bce0(local_610,&uStack_588,&local_60c);
            if (iVar8 != 0) {
              puVar14 = (undefined4 *)FUN_710080e8e0();
              goto LAB_71006df620;
            }
            iVar8 = FUN_710076bda0(local_610,1);
            if (iVar8 != 0) {
              puVar14 = (undefined4 *)FUN_710080e8e0();
              uVar15 = FUN_71006a6bc0(*puVar14,auStack_508,0x100);
              FUN_71006c0a00(lVar19,"socket failure: %s",uVar15);
              FUN_71006a1ce0(param_1,local_610);
              return 0x1e;
            }
            pcVar18 = (char *)&local_600;
            FUN_71006b7c70(lVar12,pcVar18,0x2f);
            if (param_2 == 2) goto LAB_71006df8d8;
            uVar5 = (uint)local_586;
            uVar3 = local_586 >> 8;
            iVar8 = param_2;
            goto LAB_71006df76c;
          }
          piVar13 = (int *)FUN_710080e8e0();
          iVar8 = *piVar13;
          if (iVar8 != 0x7d || !bVar2) break;
          uVar15 = FUN_71006a6bc0(0x7d,auStack_508,0x100);
          bVar2 = false;
          FUN_71006c08c0(lVar19,"bind(port=%hu) on non-local address failed: %s\n",uVar1,uVar15);
          local_60c = 0x80;
          iVar8 = FUN_710076bce0((int)param_1[0x9b],&uStack_588,&local_60c);
          uVar1 = uVar5;
          if (iVar8 != 0) {
            puVar14 = (undefined4 *)FUN_710080e8e0();
LAB_71006df620:
            uVar15 = FUN_71006a6bc0(*puVar14,auStack_508,0x100);
            FUN_71006c0a00(lVar19,"getsockname() failed: %s",uVar15);
            FUN_71006a1ce0(param_1,local_610);
            return 0x1e;
          }
        }
        if (iVar8 != 0x70 && iVar8 != 0xd) {
          uVar15 = FUN_71006a6bc0(iVar8,auStack_508,0x100);
          FUN_71006c0a00(lVar19,"bind(port=%hu) failed: %s",uVar1,uVar15);
          FUN_71006a1ce0(param_1,local_610);
          return 0x1e;
        }
        uVar1 = uVar1 + 1 & 0xffff;
      } while( true );
    }
  }
  FUN_71006c0a00(lVar19,"failed to resolve the address provided to PORT: %s",pcVar18);
  (*(code *)PTR_FUN_7100af36a0)(pcVar10);
  return 0x1e;
LAB_71006df76c:
  param_2 = param_2 + 1;
  if ((*(uint *)((long)param_1 + 0x624) & 0x80000) != 0 || iVar8 != 0) {
    if (iVar8 == 1) {
      if (local_587 == '\x02') {
        uVar4 = local_586 >> 8;
        pcVar10 = acStack_5d0;
        cVar16 = (char)local_600;
        while (cVar16 != '\0') {
          if (cVar16 == '.') {
            cVar16 = ',';
          }
          *pcVar10 = cVar16;
          pcVar18 = pcVar18 + 1;
          pcVar10 = pcVar10 + 1;
          cVar16 = *pcVar18;
        }
        *pcVar10 = '\0';
        FUN_710069fb80(pcVar10,0x14,",%d,%d",uVar5 & 0xff00ff,uVar4,
                       (uint)uVar3 | (uVar5 & 0xff00ff) << 8);
        uVar17 = 1;
        iVar8 = FUN_71006d5540(param_1 + 0xe8,"%s %s",&DAT_71009bb5ad,acStack_5d0);
        if (iVar8 != 0) {
          uVar15 = FUN_71006a6780();
          FUN_71006c0a00(lVar19,"Failure sending PORT command: %s",uVar15);
          FUN_71006a1ce0(param_1,local_610);
          *(undefined4 *)(param_1 + 0xff) = 0;
          return iVar8;
        }
      }
      else {
LAB_71006df8d8:
        uVar17 = 2;
      }
      goto LAB_71006df8e0;
    }
    if ((local_587 == '\x02') && (iVar8 == 0)) {
      iVar8 = FUN_71006d5540(param_1 + 0xe8,"%s |%d|%s|%hu|",&DAT_71009bb5a8,1,pcVar18);
      uVar17 = 0;
      if (iVar8 != 0) {
        uVar15 = FUN_71006a6780();
        FUN_71006c0a00(lVar19,"Failure sending EPRT command: %s",uVar15);
        FUN_71006a1ce0(param_1,local_610);
        *(undefined4 *)(param_1 + 0xff) = 0;
        *(undefined4 *)((long)param_1 + 0x7ec) = 1;
        return iVar8;
      }
      goto LAB_71006df8e0;
    }
    if (param_2 == 2) {
      uVar17 = 2;
LAB_71006df8e0:
      *(undefined4 *)((long)param_1 + 0x7ec) = uVar17;
      if (*(int *)((long)param_1 + 0x4dc) != -1) {
        FUN_71006a1ce0(param_1);
      }
      *(undefined1 *)((long)param_1 + 0x623) = 1;
      *(undefined4 *)((long)param_1 + 0x4dc) = local_610;
      *(undefined4 *)(param_1 + 0xff) = 0x1c;
      return 0;
    }
  }
  iVar8 = iVar8 + 1;
  goto LAB_71006df76c;
}



// ===== FUN_71006df9f0 @ 71006df9f0 (size=1160) =====

int FUN_71006df9f0(long *param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  undefined2 uVar6;
  undefined8 *local_110;
  undefined4 local_108;
  uint uStack_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4 [61];
  
  lVar3 = *param_1;
  lVar4 = *(long *)(lVar3 + 0x1150);
  local_110 = (undefined8 *)0x0;
  pcVar5 = (char *)(lVar4 + 4);
  (*(code *)PTR_FUN_7100af36a0)(param_1[0x103]);
  param_1[0x103] = 0;
  if (*(int *)((long)param_1 + 0x7ec) != 0) {
    if ((*(int *)((long)param_1 + 0x7ec) != 1) || (param_2 != 0xe3)) {
      FUN_71006c0a00(lVar3,"Bad PASV/EPSV response: %03d",param_2);
      return 0xd;
    }
    if (*(char *)(lVar4 + 4) != '\0') {
      do {
        iVar1 = FUN_7100822f40(pcVar5,&DAT_710083be78,&local_100,&local_fc,&local_f8,local_f4,
                               &local_108,&uStack_104);
        if (iVar1 == 6) {
          if ((((*pcVar5 != '\0') && (local_100 < 0x100)) && (local_fc < 0x100)) &&
             ((local_f8 < 0x100 && ((local_f4[0] | local_108 | uStack_104) < 0x100)))) {
            if (((uint)*(undefined8 *)(lVar3 + 0xf60) >> 0x12 & 1) == 0) {
              lVar4 = FUN_71006a1060("%u.%u.%u.%u");
            }
            else {
              FUN_71006c08c0(lVar3,"Skip %u.%u.%u.%u for data connection, re-use %s instead\n",
                             local_100,local_fc,local_f8,local_f4[0],param_1[0x68]);
              plVar2 = param_1 + 0x5f;
              if ((param_1[0xc4] & 0x808000000000U) != 0) {
                plVar2 = (long *)param_1[0x68];
              }
              lVar4 = (*(code *)PTR_FUN_7100af36b8)(plVar2);
            }
            param_1[0x103] = lVar4;
            if (lVar4 == 0) {
              return 0x1b;
            }
            *(short *)(param_1 + 0x104) = (short)uStack_104 + (short)(local_108 << 8);
            goto LAB_71006dfb64;
          }
          break;
        }
        pcVar5 = pcVar5 + 1;
      } while (*pcVar5 != '\0');
    }
    FUN_71006c0a00(lVar3,"Couldn\'t interpret the 227-response");
    return 0xe;
  }
  if (param_2 != 0xe5) {
LAB_71006dfa4c:
    iVar1 = FUN_71006df060(param_1);
    return iVar1;
  }
  lVar4 = FUN_710080eb40(pcVar5,0x28);
  if ((lVar4 == 0) ||
     (iVar1 = FUN_7100822f40(lVar4 + 1,"%c%c%c%u%c",&local_108,(long)&local_108 + 1,
                             (long)&local_108 + 2,&local_100,(long)&local_108 + 3), iVar1 != 5)) {
LAB_71006dfd78:
    FUN_71006c0a00(lVar3,"Weirdly formatted EPSV reply");
  }
  else {
    if ((local_108._1_1_ == (char)local_108) &&
       ((local_108._2_1_ == local_108._1_1_ && (local_108._3_1_ == local_108._2_1_)))) {
      if (local_100 < 0x10000) {
        *(short *)(param_1 + 0x104) = (short)local_100;
        plVar2 = param_1 + 0x5f;
        if ((param_1[0xc4] & 0x808000000000U) != 0) {
          plVar2 = (long *)param_1[0x68];
        }
        lVar4 = (*(code *)PTR_FUN_7100af36b8)(plVar2);
        param_1[0x103] = lVar4;
        if (lVar4 != 0) {
LAB_71006dfb64:
          if ((*(uint *)((long)param_1 + 0x624) >> 5 & 1) == 0) {
            FUN_71006b8060(param_1,param_1[0x103],(short)param_1[0x104],0,&local_110);
            uVar6 = (undefined2)param_1[0x104];
            if (local_110 == (undefined8 *)0x0) {
              FUN_71006c0a00(lVar3,"Can\'t resolve new host %s:%hu",param_1[0x103],uVar6);
              return 0xf;
            }
          }
          else {
            if ((*(uint *)((long)param_1 + 0x624) >> 7 & 1) == 0) {
              lVar4 = param_1[0x7a];
            }
            else {
              lVar4 = param_1[0x72];
            }
            FUN_71006b8060(param_1,lVar4,(int)param_1[0x80],0,&local_110);
            uVar6 = (undefined2)param_1[0x80];
            if (local_110 == (undefined8 *)0x0) {
              FUN_71006c0a00(lVar3,"Can\'t resolve proxy host %s:%hu",lVar4,uVar6);
              return 5;
            }
          }
          *(undefined1 *)((long)param_1 + 0x623) = 0;
          iVar1 = FUN_71006a2d60(param_1);
          if (iVar1 != 0) {
            FUN_71006b8350(lVar3,local_110);
            if (param_2 != 0xe5 || *(int *)((long)param_1 + 0x7ec) != 0) {
              return iVar1;
            }
            goto LAB_71006dfa4c;
          }
          if (((uint)*(undefined8 *)(lVar3 + 0xf60) >> 0x1e & 1) != 0) {
            lVar4 = param_1[0x103];
            FUN_71006b7c70(*local_110,&local_100,0x100);
            FUN_71006c08c0(*param_1,"Connecting to %s (%s) port %d\n",lVar4,&local_100,uVar6);
          }
          FUN_71006b8350(lVar3,local_110);
          (*(code *)PTR_FUN_7100af36a0)(param_1[0x6b]);
          param_1[0x6b] = 0;
          *(short *)(param_1 + 0x82) = (short)param_1[0x104];
          lVar3 = (*(code *)PTR_FUN_7100af36b8)(param_1[0x103]);
          param_1[0x6b] = lVar3;
          if (lVar3 != 0) {
            *(uint *)((long)param_1 + 0x624) = *(uint *)((long)param_1 + 0x624) | 0x1000;
            *(undefined4 *)(param_1 + 0xff) = 0;
            return 0;
          }
        }
        return 0x1b;
      }
    }
    else if (local_100 < 0x10000) goto LAB_71006dfd78;
    FUN_71006c0a00(lVar3,"Illegal port number in EPSV reply");
  }
  return 0xd;
}



// ===== FUN_71006dfe80 @ 71006dfe80 (size=124) =====

long FUN_71006dfe80(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 local_10 [16];
  
  lVar2 = *(long *)(param_1 + 0x798);
  if (lVar2 < 1) {
    lVar2 = 60000;
  }
  local_10 = FUN_71006b7420();
  lVar1 = FUN_71006a1800(param_1,local_10,0);
  if (lVar1 != 0 && lVar1 < lVar2) {
    return lVar1;
  }
  lVar1 = FUN_71006b7490(local_10._0_8_,local_10._8_8_,*(undefined8 *)(param_1 + 0x1048),
                         *(undefined8 *)(param_1 + 0x1050));
  lVar2 = lVar2 - lVar1;
  if (lVar2 == 0) {
    lVar2 = -1;
  }
  return lVar2;
}



// ===== FUN_71006dff00 @ 71006dff00 (size=176) =====

undefined8 FUN_71006dff00(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if ((*(uint *)((long)param_1 + 0x624) >> 0x14 & 1) == 0) {
    iVar1 = *(int *)((long)param_1 + 0x7fc);
  }
  else {
    FUN_71006c08c0(lVar3,"Doing the SSL/TLS handshake on the data stream\n");
    uVar2 = FUN_71006b1850(param_1,1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    iVar1 = *(int *)((long)param_1 + 0x7fc);
  }
  if (iVar1 == 0x21) {
    FUN_71006b9010(lVar3,*(undefined8 *)(lVar3 + 0x15a0));
    FUN_71006ca160(lVar3,0xffffffff,0xffffffffffffffff,0,1);
  }
  else {
    FUN_71006ca160(lVar3,1,param_1[0x100],0,0xffffffff);
  }
  *(undefined4 *)(param_1 + 0xff) = 0;
  *(undefined1 *)(param_1 + 0xec) = 1;
  return 0;
}



// ===== FUN_71006dffb0 @ 71006dffb0 (size=64) =====

void FUN_71006dffb0(long *param_1)

{
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    FUN_71006e39b0();
  }
  (*(code *)PTR_FUN_7100af36a0)(param_1);
  return;
}



// ===== FUN_71006dfff0 @ 71006dfff0 (size=912) =====

int FUN_71006dfff0(long *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  char cVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  char *local_10;
  long local_8;
  
  lVar13 = *param_1;
  puVar14 = *(undefined8 **)(lVar13 + 0x1d0);
  *(undefined1 *)((long)param_1 + 0x7d1) = 0;
  *(undefined1 *)(param_1 + 0xfb) = 0;
  local_10 = (char *)0x0;
  local_8 = 0;
  iVar2 = FUN_710069f7f0(lVar13,*puVar14,0,&local_10,&local_8,1);
  pcVar11 = local_10;
  if (iVar2 != 0) {
    return iVar2;
  }
  if (*(int *)(lVar13 + 0xbe0) == 2) {
    if (((local_8 != 0) && (local_10[local_8 + -1] != '/')) && (local_10 != (char *)0x0)) {
LAB_71006e0300:
      cVar6 = *pcVar11;
      goto LAB_71006e01dc;
    }
LAB_71006e0248:
    uVar9 = *(undefined8 *)(lVar13 + 0xf60);
    param_1[0xf9] = 0;
    if (((uint)uVar9 >> 0x1d & 1) != 0) goto LAB_71006e0208;
  }
  else {
    if (*(int *)(lVar13 + 0xbe0) == 3) {
      lVar3 = FUN_7100806500(local_10,0x2f);
      if (lVar3 == 0) goto LAB_71006e0300;
      lVar4 = lVar3 - (long)pcVar11;
      if (lVar4 == 0) {
        lVar4 = 1;
      }
      puVar5 = (undefined8 *)(*(code *)PTR_FUN_7100af3698)(1,8);
      param_1[0xf7] = (long)puVar5;
      if (puVar5 == (undefined8 *)0x0) {
LAB_71006e033c:
        (*(code *)PTR_FUN_7100af36a0)(local_10);
        return 0x1b;
      }
      uVar9 = (*(code *)PTR_FUN_7100af3698)(1,lVar4 + 1);
      plVar8 = (long *)param_1[0xf7];
      *puVar5 = uVar9;
      if (*plVar8 == 0) goto LAB_71006e033c;
      pcVar11 = (char *)(lVar3 + 1);
      FUN_710081f760(*plVar8,local_10,lVar4);
      *(undefined4 *)(param_1 + 0xf8) = 1;
      cVar6 = *(char *)(lVar3 + 1);
LAB_71006e01dc:
      if (cVar6 == '\0') goto LAB_71006e0248;
    }
    else {
      cVar6 = *local_10;
      if (cVar6 == '\0') goto LAB_71006e0248;
      iVar2 = 0;
      pcVar10 = local_10;
      do {
        bVar1 = cVar6 == '/';
        pcVar10 = pcVar10 + 1;
        cVar6 = *pcVar10;
        if (bVar1) {
          iVar2 = iVar2 + 1;
        }
      } while (cVar6 != '\0');
      if (iVar2 != 0) {
        lVar3 = (*(code *)PTR_FUN_7100af3698)((long)iVar2,8);
        param_1[0xf7] = lVar3;
        if (lVar3 == 0) goto LAB_71006e033c;
        while( true ) {
          lVar4 = FUN_710080eb40(pcVar11,0x2f);
          lVar3 = lVar4 - (long)pcVar11;
          if (lVar4 == 0) break;
          lVar7 = lVar3 + 1;
          if (lVar3 == 0) {
            lVar7 = 2;
            lVar3 = 1;
            if ((int)param_1[0xf8] == 0) goto LAB_71006e00d8;
          }
          else {
LAB_71006e00d8:
            lVar7 = (*(code *)PTR_FUN_7100af3698)(1,lVar7);
            if (lVar7 == 0) goto LAB_71006e033c;
            FUN_710081f760(lVar7,pcVar11,lVar3);
            lVar3 = param_1[0xf8];
            *(int *)(param_1 + 0xf8) = (int)lVar3 + 1;
            *(long *)(param_1[0xf7] + (long)(int)lVar3 * 8) = lVar7;
          }
          pcVar11 = (char *)(lVar4 + 1);
        }
        cVar6 = *pcVar11;
        goto LAB_71006e01dc;
      }
    }
    lVar3 = (*(code *)PTR_FUN_7100af36b8)(pcVar11);
    uVar9 = *(undefined8 *)(lVar13 + 0xf60);
    param_1[0xf9] = lVar3;
    if ((((uint)uVar9 >> 0x1d & 1) != 0) && (lVar3 == 0)) {
LAB_71006e0208:
      if (*(int *)(puVar14 + 2) == 0) {
        FUN_71006c0a00(lVar13,"Uploading to a URL without a file name!");
        (*(code *)PTR_FUN_7100af36a0)(local_10);
        return 3;
      }
    }
  }
  pcVar11 = local_10;
  iVar2 = *(int *)(lVar13 + 0xbe0);
  *(undefined1 *)((long)param_1 + 0x7d2) = 0;
  if (iVar2 == 2) {
    if (*local_10 != '/') {
      if (((*(uint *)((long)param_1 + 0x624) >> 1 & 1) != 0) &&
         ((param_1[0xfc] == 0 || (lVar3 = FUN_710081ce00(), lVar3 != 0)))) goto LAB_71006e0124;
LAB_71006e02b0:
      FUN_71006c08c0(lVar13,"Request has same path as previous transfer\n");
    }
    *(undefined1 *)((long)param_1 + 0x7d2) = 1;
    (*(code *)PTR_FUN_7100af36a0)(local_10);
  }
  else {
    if ((*(uint *)((long)param_1 + 0x624) >> 1 & 1) == 0) {
      puVar12 = &DAT_7100853d20;
      lVar3 = 0;
LAB_71006e027c:
      lVar4 = local_8;
      if (param_1[0xf9] != 0) {
        lVar7 = FUN_710081ce00();
        lVar4 = lVar4 - lVar7;
      }
      pcVar11 = local_10;
      if ((lVar4 == lVar3) && (iVar2 = FUN_710080b4c0(local_10,puVar12,lVar4), iVar2 == 0))
      goto LAB_71006e02b0;
    }
    else {
      puVar12 = (undefined1 *)param_1[0xfc];
      if (puVar12 != (undefined1 *)0x0) {
        lVar3 = FUN_710081ce00(puVar12);
        goto LAB_71006e027c;
      }
    }
LAB_71006e0124:
    (*(code *)PTR_FUN_7100af36a0)(pcVar11);
  }
  return 0;
}



// ===== FUN_71006e0380 @ 71006e0380 (size=260) =====

undefined8 FUN_71006e0380(long *param_1)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar5 = *param_1;
  plVar3 = (long *)(*(code *)PTR_FUN_7100af3698)(0x20,1);
  *(long **)(*param_1 + 0x1d0) = plVar3;
  if (plVar3 != (long *)0x0) {
    lVar1 = *(long *)(lVar5 + 0x1608) + 1;
    *plVar3 = lVar1;
    puVar4 = (undefined1 *)FUN_710081d620(lVar1,";type=");
    if ((puVar4 != (undefined1 *)0x0) ||
       (puVar4 = (undefined1 *)FUN_710081d620(param_1[0x66],";type="), puVar4 != (undefined1 *)0x0))
    {
      *puVar4 = 0;
      cVar2 = FUN_71006ca2e0(puVar4[6]);
      *(uint *)((long)param_1 + 0x624) = *(uint *)((long)param_1 + 0x624) | 0x2000000;
      if (cVar2 == 'A') {
        *(ulong *)(lVar5 + 0xf60) = *(ulong *)(lVar5 + 0xf60) | 0x800;
      }
      else if (cVar2 == 'D') {
        *(ulong *)(lVar5 + 0xf60) = *(ulong *)(lVar5 + 0xf60) | 0x2000;
      }
      else {
        *(ulong *)(lVar5 + 0xf60) = *(ulong *)(lVar5 + 0xf60) & 0xfffffffffffff7ff;
      }
    }
    *(undefined4 *)(plVar3 + 2) = 0;
    plVar3[3] = 0;
    param_1[0x102] = -1;
    return 0;
  }
  return 0x1b;
}



// ===== FUN_71006e0550 @ 71006e0550 (size=120) =====

undefined8
FUN_71006e0550(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_71006af4a0(*param_2);
  if ((((iVar1 == 0) || (iVar1 = FUN_71006af4a0(param_2[1]), iVar1 == 0)) ||
      (iVar1 = FUN_71006af4a0(param_2[2]), iVar1 == 0)) || (param_2[3] != ' ')) {
    uVar3 = 0;
  }
  else {
    FUN_710081b720(param_2,0,10);
    uVar2 = FUN_71006a8830();
    uVar3 = 1;
    *param_4 = uVar2;
  }
  return uVar3;
}



// ===== FUN_71006e0700 @ 71006e0700 (size=164) =====

undefined8 FUN_71006e0700(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_71006d5170(param_1 + 0xe8,0,0);
  lVar1 = param_1[0xff];
  *(bool *)param_2 = (int)lVar1 == 0;
  if (((int)uVar2 == 0) && ((int)lVar1 == 0)) {
    if (*(int *)(*(long *)(*param_1 + 0x1d0) + 0x10) == 0) {
      *(uint *)((long)param_1 + 0x624) = *(uint *)((long)param_1 + 0x624) | 0x1000;
    }
    else {
      FUN_71006ca160(*param_1,0xffffffff,0xffffffffffffffff,0,0xffffffff);
    }
    *(undefined1 *)((long)param_1 + 0x7d1) = 1;
    return 0;
  }
  return uVar2;
}



// ===== FUN_71006e07b0 @ 71006e07b0 (size=348) =====

undefined8 FUN_71006e07b0(long *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined4 local_14;
  undefined1 auStack_10 [16];
  
  uVar1 = *(undefined4 *)((long)param_1 + 0x4dc);
  lVar3 = *param_1;
  local_14 = 0x10;
  iVar2 = FUN_710076bce0(uVar1,auStack_10,&local_14);
  if (iVar2 == 0) {
    local_14 = 0x10;
    iVar2 = FUN_710076bb20(uVar1,auStack_10,&local_14);
    FUN_71006a1ce0(param_1,uVar1);
    if (iVar2 != -1) {
      FUN_71006c08c0(lVar3,"Connection accepted from server\n");
      *(int *)((long)param_1 + 0x4dc) = iVar2;
      *(uint *)((long)param_1 + 0x624) = *(uint *)((long)param_1 + 0x624) & 0xffffefff;
      FUN_71006a87a0(iVar2,1);
      *(byte *)((long)param_1 + 0x8c4) = *(byte *)((long)param_1 + 0x8c4) | 8;
      if (*(long *)(lVar3 + 0x728) == 0) {
        return 0;
      }
      FUN_71006a63f0(lVar3,1);
      iVar2 = (**(code **)(lVar3 + 0x728))(*(undefined8 *)(lVar3 + 0x730),iVar2,1);
      FUN_71006a63f0(lVar3,0);
      if (iVar2 != 0) {
        if (*(int *)((long)param_1 + 0x4dc) != -1) {
          FUN_71006a1ce0(param_1);
          *(undefined4 *)((long)param_1 + 0x4dc) = 0xffffffff;
        }
        *(undefined1 *)((long)param_1 + 0x623) = 0;
        return 0x2a;
      }
      return 0;
    }
  }
  else {
    FUN_71006a1ce0(param_1,uVar1);
  }
  FUN_71006c0a00(lVar3,"Error accept()ing server connect");
  return 0x1e;
}



// ===== FUN_71006e0910 @ 71006e0910 (size=156) =====

void FUN_71006e0910(long *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined1 uVar3;
  
  uVar2 = *(ulong *)(*param_1 + 0xf60);
  if (((uint)uVar2 >> 0x1c & 1) == 0) {
    FUN_71006e0df0();
    return;
  }
  if (param_1[0xf9] != 0) {
    if ((uVar2 & 0x800) == 0) {
      if ((char)param_1[0xfd] != 'I') {
        uVar3 = 0x49;
        goto LAB_71006e096c;
      }
    }
    else if ((char)param_1[0xfd] != 'A') {
      uVar3 = 0x41;
LAB_71006e096c:
      *(undefined4 *)(*(long *)(*param_1 + 0x1d0) + 0x10) = 1;
      iVar1 = FUN_71006d5540(param_1 + 0xe8,"TYPE %c");
      if (iVar1 == 0) {
        *(undefined1 *)(param_1 + 0xfd) = uVar3;
        *(undefined4 *)(param_1 + 0xff) = 0x13;
      }
      return;
    }
  }
  FUN_71006e0df0();
  return;
}



// ===== FUN_71006e09b0 @ 71006e09b0 (size=100) =====

void FUN_71006e09b0(long *param_1)

{
  int iVar1;
  
  if ((((uint)*(undefined8 *)(*param_1 + 0xf60) >> 9 & 1) == 0) && (*(int *)(*param_1 + 0xa18) == 0)
     ) {
    FUN_71006e0910();
    return;
  }
  if (param_1[0xf9] != 0) {
    iVar1 = FUN_71006d5540(param_1 + 0xe8,"MDTM %s");
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0xff) = 0x12;
    }
    return;
  }
  FUN_71006e0910();
  return;
}



// ===== FUN_71006e0a20 @ 71006e0a20 (size=608) =====

undefined8 FUN_71006e0a20(long *param_1,char param_2,uint param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  
  lVar5 = *param_1;
  lVar9 = *(long *)(lVar5 + 0x1d0);
  if (param_3 < 0xf) {
    if (0xc < param_3) {
      puVar8 = *(undefined8 **)(lVar5 + 0x9e0);
      goto LAB_71006e0a58;
    }
LAB_71006e0ab8:
    puVar8 = *(undefined8 **)(lVar5 + 0x9d0);
    if (param_2 != '\0') goto LAB_71006e0a60;
LAB_71006e0ac4:
    iVar1 = *(int *)((long)param_1 + 0x7ec);
    iVar4 = iVar1 + 1;
    *(int *)((long)param_1 + 0x7ec) = iVar4;
    if (puVar8 != (undefined8 *)0x0) {
      if (iVar4 < 1) goto LAB_71006e0a68;
      iVar4 = 0;
      do {
        bVar3 = iVar1 == iVar4;
        iVar4 = iVar4 + 1;
        puVar8 = (undefined8 *)puVar8[1];
        if (bVar3) goto joined_r0x0071006e0af8;
      } while (puVar8 != (undefined8 *)0x0);
    }
  }
  else {
    if (param_3 != 0xf) goto LAB_71006e0ab8;
    puVar8 = *(undefined8 **)(lVar5 + 0x9d8);
LAB_71006e0a58:
    if (param_2 == '\0') goto LAB_71006e0ac4;
LAB_71006e0a60:
    *(undefined4 *)((long)param_1 + 0x7ec) = 0;
joined_r0x0071006e0af8:
    if (puVar8 != (undefined8 *)0x0) {
LAB_71006e0a68:
      pcVar7 = (char *)*puVar8;
      cVar2 = *pcVar7;
      if (cVar2 == '*') {
        pcVar7 = pcVar7 + 1;
      }
      *(uint *)(param_1 + 0xfe) = (uint)(cVar2 == '*');
      uVar6 = FUN_71006d5540(param_1 + 0xe8,"%s",pcVar7);
      if ((int)uVar6 == 0) {
        *(uint *)(param_1 + 0xff) = param_3;
      }
      return uVar6;
    }
  }
  plVar10 = param_1 + 0xe8;
  if (param_3 == 0xe) {
    uVar6 = FUN_71006df110(param_1,0);
    return uVar6;
  }
  if (param_3 == 0xf) {
    return 0;
  }
  if (param_3 == 0xd) {
    if (*(int *)(lVar9 + 0x10) != 0) {
      *(undefined4 *)(param_1 + 0xff) = 0;
      return 0;
    }
    if (param_1[0x102] != -1) {
      FUN_71006b8fe0();
      uVar6 = FUN_71006dee20(param_1,param_1[0x102]);
      return uVar6;
    }
    if ((*(ulong *)(lVar5 + 0xf60) >> 0x24 & 1) == 0) {
      uVar6 = FUN_71006d5540(plVar10,"SIZE %s",param_1[0xf9]);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      *(undefined4 *)(param_1 + 0xff) = 0x18;
      return uVar6;
    }
    uVar6 = FUN_71006d5540(plVar10,"RETR %s",param_1[0xf9]);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    *(undefined4 *)(param_1 + 0xff) = 0x20;
    return uVar6;
  }
  if (*(char *)((long)param_1 + 0x7d2) != '\0') {
LAB_71006e0b84:
    uVar6 = FUN_71006e09b0(param_1);
    return uVar6;
  }
  iVar4 = *(int *)(lVar5 + 0xbec);
  *(undefined4 *)(param_1 + 0xfe) = 0;
  *(uint *)((long)param_1 + 0x7f4) = (uint)(iVar4 == 2);
  if (((*(uint *)((long)param_1 + 0x624) >> 1 & 1) == 0) || (param_1[0xf6] == 0)) {
    if ((int)param_1[0xf8] == 0) goto LAB_71006e0b84;
    pcVar7 = *(char **)param_1[0xf7];
  }
  else if (((int)param_1[0xf8] == 0) || (pcVar7 = *(char **)param_1[0xf7], *pcVar7 != '/')) {
    *(undefined4 *)((long)param_1 + 0x7d4) = 0;
    uVar6 = FUN_71006d5540(plVar10,"CWD %s",param_1[0xf6]);
    iVar4 = (int)uVar6;
    goto joined_r0x0071006e0c34;
  }
  *(undefined4 *)((long)param_1 + 0x7d4) = 1;
  uVar6 = FUN_71006d5540(plVar10,"CWD %s",pcVar7);
  iVar4 = (int)uVar6;
joined_r0x0071006e0c34:
  if (iVar4 != 0) {
    return uVar6;
  }
  *(undefined4 *)(param_1 + 0xff) = 0x10;
  return uVar6;
}



// ===== FUN_71006e0c80 @ 71006e0c80 (size=256) =====

ulong FUN_71006e0c80(long *param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar4 = *param_1;
  if (*(int *)(*(long *)(lVar4 + 0x1d0) + 0x10) != 0) {
    *(undefined4 *)(param_1 + 0xff) = 0xd;
    uVar3 = FUN_71006e0a20(param_1,1);
    return uVar3;
  }
  uVar2 = (uint)*(ulong *)(lVar4 + 0xf60);
  if ((uVar2 >> 0xe & 1) != 0) {
    uVar3 = FUN_71006df300(param_1,0);
    return uVar3;
  }
  if ((uVar2 >> 0x11 & 1) == 0) {
    uVar3 = FUN_71006defb0();
    return uVar3;
  }
  plVar1 = param_1 + 0xe8;
  if (param_1[0xf9] == 0) {
    puVar5 = *(undefined **)(lVar4 + 0xc50);
    if (*(undefined **)(lVar4 + 0xc50) == (undefined *)0x0) {
      puVar5 = &DAT_710083be20;
      if ((*(ulong *)(lVar4 + 0xf60) & 0x2000) == 0) {
        puVar5 = &DAT_710083be28;
      }
    }
    uVar2 = FUN_71006d5540(plVar1,"PRET %s",puVar5);
  }
  else if ((uVar2 >> 0x1d & 1) == 0) {
    uVar2 = FUN_71006d5540(plVar1,"PRET RETR %s");
  }
  else {
    uVar2 = FUN_71006d5540(plVar1,"PRET STOR %s");
  }
  if (uVar2 == 0) {
    *(undefined4 *)(param_1 + 0xff) = 0x1d;
    return 0;
  }
  return (ulong)uVar2;
}



// ===== FUN_71006e0d80 @ 71006e0d80 (size=100) =====

void FUN_71006e0d80(long *param_1)

{
  int iVar1;
  
  if (*(int *)(*(long *)(*param_1 + 0x1d0) + 0x10) == 0) {
    FUN_71006e0c80();
    return;
  }
  if (param_1[0xf9] != 0) {
    iVar1 = FUN_71006d5540(param_1 + 0xe8,"REST %d",0);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0xff) = 0x1a;
    }
    return;
  }
  FUN_71006e0c80();
  return;
}



// ===== FUN_71006e0df0 @ 71006e0df0 (size=100) =====

void FUN_71006e0df0(long *param_1)

{
  int iVar1;
  
  if (*(int *)(*(long *)(*param_1 + 0x1d0) + 0x10) != 1) {
    FUN_71006e0d80();
    return;
  }
  if (param_1[0xf9] != 0) {
    iVar1 = FUN_71006d5540(param_1 + 0xe8,"SIZE %s");
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0xff) = 0x17;
    }
    return;
  }
  FUN_71006e0d80();
  return;
}



// ===== FUN_71006e0e60 @ 71006e0e60 (size=692) =====

ulong FUN_71006e0e60(long *param_1,int param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *local_8;
  
  if (99 < param_2 - 200U) {
    FUN_71006c0a00(*param_1,"Couldn\'t set desired mode");
    return 0x11;
  }
  if (param_2 != 200) {
    FUN_71006c08c0(*param_1,"Got a %03d response code instead of the assumed 200\n",param_2);
  }
  if (param_3 == 0x13) {
    uVar2 = FUN_71006e0df0(param_1);
    return uVar2;
  }
  if (param_3 != 0x14) {
    uVar5 = 0xd;
    if (param_3 != 0x15) {
      if (param_3 != 0x16) {
        return 0;
      }
      uVar5 = 0xe;
    }
    uVar2 = FUN_71006e0a20(param_1,1,uVar5);
    return uVar2;
  }
  lVar8 = *param_1;
  if ((*(int *)(lVar8 + 0xbe0) == 2) && (**(long **)(lVar8 + 0x1d0) != 0)) {
    local_8 = (undefined *)0x0;
    uVar1 = FUN_710069f7f0(lVar8,**(long **)(lVar8 + 0x1d0),0,&local_8,0,1);
    puVar7 = local_8;
    if (uVar1 != 0) {
      return (ulong)uVar1;
    }
    lVar3 = FUN_7100806500(local_8,0x2f);
    if (lVar3 == 0) {
      (*(code *)PTR_FUN_7100af36a0)(puVar7);
      puVar4 = *(undefined **)(lVar8 + 0xc50);
      puVar9 = (undefined *)0x0;
      if (puVar4 == (undefined *)0x0) {
        puVar6 = &DAT_7100853d20;
        puVar7 = &DAT_7100853d20;
        if (((uint)*(undefined8 *)(lVar8 + 0xf60) >> 0xd & 1) == 0) {
          puVar4 = &DAT_710083be28;
        }
        else {
          puVar4 = &DAT_710083be20;
        }
      }
      else {
        puVar6 = &DAT_7100853d20;
        puVar7 = &DAT_7100853d20;
      }
    }
    else {
      lVar3 = lVar3 - (long)puVar7;
      if (lVar3 == 0) {
        lVar3 = 1;
      }
      puVar7[lVar3] = 0;
      puVar4 = *(undefined **)(lVar8 + 0xc50);
      puVar9 = puVar7;
      if (puVar4 == (undefined *)0x0) {
        if (((uint)*(undefined8 *)(lVar8 + 0xf60) >> 0xd & 1) != 0) {
          puVar4 = &DAT_710083be20;
          puVar6 = &DAT_710083a5b8;
          goto LAB_71006e0f4c;
        }
        puVar4 = &DAT_710083be28;
      }
      puVar6 = &DAT_710083a5b8;
    }
  }
  else {
    puVar4 = *(undefined **)(lVar8 + 0xc50);
    if (puVar4 == (undefined *)0x0) {
      puVar6 = &DAT_7100853d20;
      puVar7 = puVar6;
      if (((uint)*(undefined8 *)(lVar8 + 0xf60) >> 0xd & 1) == 0) {
        puVar4 = &DAT_710083be28;
        puVar9 = (undefined *)0x0;
      }
      else {
        puVar4 = &DAT_710083be20;
        puVar9 = (undefined *)0x0;
      }
    }
    else {
      puVar6 = &DAT_7100853d20;
      puVar7 = puVar6;
      puVar9 = (undefined *)0x0;
    }
  }
LAB_71006e0f4c:
  lVar8 = FUN_71006a1060("%s%s%s",puVar4,puVar6,puVar7);
  (*(code *)PTR_FUN_7100af36a0)(puVar9);
  if (lVar8 == 0) {
    uVar2 = 0x1b;
  }
  else {
    uVar1 = FUN_71006d5540(param_1 + 0xe8,"%s",lVar8);
    uVar2 = (ulong)uVar1;
    (*(code *)PTR_FUN_7100af36a0)(lVar8);
    if (uVar1 == 0) {
      *(undefined4 *)(param_1 + 0xff) = 0x1f;
    }
  }
  return uVar2;
}



// ===== FUN_71006e1120 @ 71006e1120 (size=512) =====

undefined8 FUN_71006e1120(long *param_1,undefined8 *param_2,int *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  int iVar12;
  int *piVar13;
  int local_10;
  int local_c;
  long local_8;
  
  uVar2 = *(undefined4 *)(param_2 + 0x9b);
  plVar1 = param_2 + 0xe8;
  uVar10 = *param_2;
  local_10 = 0;
  piVar13 = &local_10;
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
    piVar13 = param_3;
  }
  iVar12 = 0;
  *param_1 = 0;
  do {
    while( true ) {
      lVar7 = FUN_71006d50d0(plVar1,0);
      if (lVar7 < 1) {
        FUN_71006c0a00(uVar10,"FTP response timeout");
        return 0x1c;
      }
      if (999 < lVar7) {
        lVar7 = 1000;
      }
      if ((*plVar1 == 0 || 1 < iVar12) && (cVar5 = FUN_71006a2ed0(param_2,0), cVar5 == '\0')) break;
LAB_71006e11bc:
      plVar11 = (long *)param_2[0xf3];
      lVar7 = *plVar11;
      uVar8 = FUN_71006d55b0(uVar2,plVar1,&local_c,&local_8);
      iVar6 = local_c;
      *(int *)(lVar7 + 0x1680) = local_c;
      bVar4 = local_c == 0x1a5;
      *piVar13 = local_c;
      if (bVar4) {
        FUN_71006c08c0(lVar7,"We got a 421 - timeout!\n");
        *(undefined4 *)(plVar11 + 0xff) = 0;
        *(undefined1 *)(param_2 + 0xec) = 0;
        return 0x1c;
      }
      if ((int)uVar8 != 0) goto LAB_71006e1218;
      if (local_8 == 0) {
        iVar3 = 0;
        if (*plVar1 != 0) {
          iVar3 = iVar12 + 1;
        }
      }
      else {
        iVar3 = 0;
      }
      iVar12 = iVar3;
      *param_1 = *param_1 + local_8;
      if (iVar6 != 0) goto LAB_71006e1214;
    }
    iVar6 = FUN_71006a6d40(uVar2,0xffffffff,0xffffffff,lVar7);
    if (iVar6 == -1) {
      puVar9 = (undefined4 *)FUN_710080e8e0();
      FUN_71006c0a00(uVar10,"FTP response aborted due to select/poll error: %d",*puVar9);
      return 0x38;
    }
    if (iVar6 != 0) goto LAB_71006e11bc;
    iVar6 = FUN_71006b9040(param_2);
    if (iVar6 != 0) {
      return 0x2a;
    }
  } while (*piVar13 == 0);
LAB_71006e1214:
  uVar8 = 0;
LAB_71006e1218:
  *(undefined1 *)(param_2 + 0xec) = 0;
  return uVar8;
}



// ===== FUN_71006e1320 @ 71006e1320 (size=360) =====

undefined4 FUN_71006e1320(undefined8 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  int local_c;
  undefined1 auStack_8 [8];
  
  uVar5 = *param_1;
  uVar3 = *(undefined4 *)(param_1 + 0x9b);
  uVar1 = *(undefined4 *)((long)param_1 + 0x4dc);
  *param_2 = 0;
  lVar4 = FUN_71006dfe80(uVar5);
  FUN_71006c08c0(uVar5,"Checking for server connect\n");
  if (lVar4 < 0) {
    uVar3 = 0xc;
    FUN_71006c0a00(uVar5,"Accept timeout occurred while waiting server connect");
  }
  else if (((param_1[0xe9] == 0) || ((byte *)param_1[0xe8] == (byte *)0x0)) ||
          (*(byte *)param_1[0xe8] < 0x34)) {
    uVar2 = FUN_71006a6d40(uVar3,uVar1,0xffffffff,0);
    if (uVar2 == 0xffffffff) {
      FUN_71006c0a00(uVar5,"Error while waiting for server connect");
      return 10;
    }
    uVar3 = 0;
    if (uVar2 != 0) {
      if ((uVar2 >> 3 & 1) == 0) {
        if ((uVar2 & 1) != 0) {
          FUN_71006c08c0(uVar5,"Ctrl conn has data while waiting for data conn\n");
          FUN_71006e1120(auStack_8,param_1,&local_c);
          uVar3 = 10;
          if (local_c < 400) {
            uVar3 = 8;
          }
        }
      }
      else {
        FUN_71006c08c0(uVar5,"Ready to accept data connection from server\n");
        *param_2 = 1;
      }
    }
  }
  else {
    uVar3 = 10;
    FUN_71006c08c0(uVar5,"There is negative response in cache while serv connect\n");
    FUN_71006e1120(auStack_8,param_1,&local_c);
  }
  return uVar3;
}



// ===== FUN_71006e1490 @ 71006e1490 (size=224) =====

ulong FUN_71006e1490(long *param_1,char *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  *param_2 = '\0';
  FUN_71006c08c0(lVar4,"Preparing for accepting server on data port\n");
  FUN_71006b8c70(lVar4,9);
  lVar2 = FUN_71006dfe80(lVar4);
  if (lVar2 < 0) {
    FUN_71006c0a00(lVar4,"Accept timeout occurred while waiting server connect");
    return 0xc;
  }
  uVar1 = FUN_71006e1320(param_1,param_2);
  uVar3 = (ulong)uVar1;
  if (uVar1 == 0) {
    if (*param_2 == '\0') {
      lVar2 = *(long *)(lVar4 + 0x798);
      if (lVar2 < 1) {
        lVar2 = 60000;
      }
      FUN_71006a42b0(lVar4,lVar2,0);
    }
    else {
      uVar1 = FUN_71006e07b0(param_1);
      uVar3 = (ulong)uVar1;
      if (uVar1 == 0) {
        uVar3 = FUN_71006dff00(param_1);
        return uVar3;
      }
    }
  }
  return uVar3;
}



// ===== FUN_71006e1570 @ 71006e1570 (size=4408) =====

/* WARNING: Type propagation algorithm not settling */

int FUN_71006e1570(long *param_1)

{
  long *plVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined4 uVar14;
  ulong uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  char *pcVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  long local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  int local_98;
  int local_94;
  int local_90;
  ulong local_80;
  undefined7 uStack_78;
  undefined1 local_71;
  undefined7 uStack_70;
  undefined1 local_69;
  
  plVar1 = param_1 + 0xe8;
  local_b0 = 0;
  lVar21 = *param_1;
  if (param_1[0xee] != 0) {
    iVar3 = FUN_71006d5910(plVar1);
    return iVar3;
  }
  plVar22 = (long *)param_1[0xf3];
  lVar20 = *plVar22;
  iVar3 = FUN_71006d55b0((int)param_1[0x9b],plVar1,&local_80,&local_b0);
  *(int *)(lVar20 + 0x1680) = (int)local_80;
  if ((int)local_80 == 0x1a5) {
    FUN_71006c08c0(lVar20,"We got a 421 - timeout!\n");
    *(undefined4 *)(plVar22 + 0xff) = 0;
    return 0x1c;
  }
  if (iVar3 != 0) {
    return iVar3;
  }
  if ((int)local_80 == 0) {
    return 0;
  }
  iVar3 = (int)param_1[0xff];
  iVar4 = 0;
  switch(iVar3) {
  case 1:
    if ((int)local_80 == 0xe6) goto LAB_71006e1ddc;
    if ((int)local_80 != 0xdc) {
      FUN_71006c0a00(lVar21,"Got a %03d ftp-server response when 220 was expected",
                     local_80 & 0xffffffff);
      return 8;
    }
    if ((*(int *)(lVar21 + 0xc04) != 0) &&
       (((*(byte *)(param_1 + 0xa3) & 1) == 0 ||
        (((char)param_1[0xc4] != '\0' && ((*(byte *)(param_1 + 0xa9) & 1) == 0)))))) {
      uVar5 = *(uint *)(lVar21 + 0xbe4);
      *(undefined4 *)((long)param_1 + 0x7f4) = 0;
      if (uVar5 < 2) {
        uVar14 = 1;
        iVar3 = 0;
      }
      else {
        uVar14 = 0xffffffff;
        iVar3 = 1;
        if (uVar5 != 2) {
          FUN_71006c0a00(lVar21,"unsupported parameter to CURLOPT_FTPSSLAUTH: %d");
          return 0x30;
        }
      }
      *(int *)((long)param_1 + 0x7ec) = iVar3;
      *(undefined4 *)(param_1 + 0xfe) = uVar14;
      iVar3 = FUN_71006d5540(plVar1,"AUTH %s",&DAT_71009bb590 + (long)iVar3 * 4);
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0xff) = 2;
        return 0;
      }
      return iVar3;
    }
LAB_71006e19f8:
    puVar17 = &DAT_7100853d20;
    if ((undefined1 *)param_1[0x90] != (undefined1 *)0x0) {
      puVar17 = (undefined1 *)param_1[0x90];
    }
    iVar4 = FUN_71006d5540(plVar1,"USER %s",puVar17);
    goto joined_r0x0071006e20d0;
  case 2:
    if ((int)local_80 != 0xea && (int)local_80 != 0x14e) {
      if (*(int *)((long)param_1 + 0x7f4) < 1) {
        *(int *)((long)param_1 + 0x7f4) = *(int *)((long)param_1 + 0x7f4) + 1;
        iVar3 = *(int *)((long)param_1 + 0x7ec) + (int)param_1[0xfe];
        *(int *)((long)param_1 + 0x7ec) = iVar3;
        iVar3 = FUN_71006d5540(plVar1,"AUTH %s",&DAT_71009bb590 + (long)iVar3 * 4);
        return iVar3;
      }
      if (1 < *(uint *)(lVar21 + 0xc04)) {
        return 0x40;
      }
      goto LAB_71006e19f8;
    }
    iVar3 = FUN_71006b1850(param_1,0);
    if (iVar3 != 0) {
      return iVar3;
    }
    *(uint *)((long)param_1 + 0x624) = *(uint *)((long)param_1 + 0x624) & 0xffefffff;
    puVar17 = &DAT_7100853d20;
    if ((undefined1 *)param_1[0x90] != (undefined1 *)0x0) {
      puVar17 = (undefined1 *)param_1[0x90];
    }
    iVar4 = FUN_71006d5540(plVar1,"USER %s",puVar17);
joined_r0x0071006e20d0:
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0xff) = 3;
      *(ushort *)(*param_1 + 0x162c) = *(ushort *)(*param_1 + 0x162c) & 0xffbf;
    }
    break;
  case 3:
  case 4:
    lVar21 = *param_1;
    if ((int)local_80 == 0x14b && iVar3 == 3) {
      puVar17 = &DAT_7100853d20;
      if ((undefined1 *)param_1[0x91] != (undefined1 *)0x0) {
        puVar17 = (undefined1 *)param_1[0x91];
      }
      iVar3 = FUN_71006d5540(plVar1,"PASS %s",puVar17);
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0xff) = 4;
        return 0;
      }
      return iVar3;
    }
    if (99 < (int)local_80 - 200U) {
      if ((int)local_80 != 0x14c) {
        if ((*(long *)(lVar21 + 0xc78) != 0) && ((*(ushort *)(lVar21 + 0x162c) >> 6 & 1) == 0)) {
          iVar3 = FUN_71006d5540(plVar1,"%s");
          if (iVar3 == 0) {
            *(ushort *)(*param_1 + 0x162c) = *(ushort *)(*param_1 + 0x162c) | 0x40;
            *(undefined4 *)(param_1 + 0xff) = 3;
            return 0;
          }
          return iVar3;
        }
        FUN_71006c0a00(lVar21,"Access denied: %03d",local_80 & 0xffffffff);
        return 0x43;
      }
      if (*(long *)(lVar21 + 0xc70) == 0) {
        FUN_71006c0a00(lVar21,"ACCT requested but none available");
        return 0x43;
      }
      iVar3 = FUN_71006d5540(plVar1,"ACCT %s");
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0xff) = 5;
        return 0;
      }
      return iVar3;
    }
    goto LAB_71006e1ddc;
  case 5:
    if ((int)local_80 != 0xe6) {
      FUN_71006c0a00(*param_1,"ACCT rejected by server: %03d",local_80 & 0xffffffff);
      return 0xb;
    }
LAB_71006e1ddc:
    if ((*(byte *)(param_1 + 0xa3) & 1) != 0) {
      iVar3 = FUN_71006d5540(plVar1,"PBSZ %d",0);
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0xff) = 6;
        return 0;
      }
      return iVar3;
    }
    goto LAB_71006e1d3c;
  case 6:
    uVar14 = 0x43;
    if (*(int *)(lVar21 + 0xc04) != 2) {
      uVar14 = 0x50;
    }
    iVar4 = FUN_71006d5540(plVar1,"PROT %c",uVar14);
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0xff) = 7;
    }
    break;
  case 7:
    if ((int)local_80 - 200U < 100) {
      *(uint *)((long)param_1 + 0x624) =
           *(uint *)((long)param_1 + 0x624) & 0xffe00000 |
           *(uint *)((long)param_1 + 0x624) & 0xfffff |
           (uint)(*(uint *)(lVar21 + 0xc04) != 2) << 0x14;
    }
    else if (2 < *(uint *)(lVar21 + 0xc04)) {
      return 0x40;
    }
    if (*(int *)(lVar21 + 0xbe8) != 0) {
      iVar3 = FUN_71006d5540(plVar1,"%s",&DAT_710084b878);
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0xff) = 8;
        return 0;
      }
      return iVar3;
    }
    goto LAB_71006e1d3c;
  case 8:
    if (((int)local_80 < 500) && (iVar3 = FUN_71006b1b20(param_1,0), iVar3 != 0)) {
      FUN_71006c0a00(*param_1,"Failed to clear the command channel (CCC)");
      return iVar3;
    }
LAB_71006e1d3c:
    iVar4 = FUN_71006d5540(plVar1,"%s",&DAT_710083bef8);
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0xff) = 9;
    }
    break;
  case 9:
    if ((int)local_80 == 0x101) {
      lVar20 = *(long *)(lVar21 + 0x1150);
      lVar19 = *(long *)(lVar21 + 0xbb0);
      pbVar8 = (byte *)(*(code *)PTR_FUN_7100af36a8)(local_b0 + 1);
      pbVar11 = (byte *)(lVar20 + 4);
      if (pbVar8 == (byte *)0x0) {
        return 0x1b;
      }
      pbVar13 = (byte *)(*(long *)(lVar21 + 0x1150) + lVar19);
      if (pbVar11 < pbVar13) {
        do {
          pbVar12 = pbVar11;
          bVar2 = *pbVar12;
          if ((bVar2 < 0x23) && ((-0x400000402 >> ((ulong)bVar2 & 0x3f) & 1U) == 0))
          goto LAB_71006e1cec;
          pbVar11 = pbVar12 + 1;
        } while (pbVar12 + 1 != pbVar13);
        bVar2 = pbVar12[1];
        pbVar12 = pbVar13;
      }
      else {
        bVar2 = *(byte *)(lVar20 + 4);
        pbVar12 = pbVar11;
      }
LAB_71006e1cec:
      if (bVar2 == 0x22) {
        bVar2 = pbVar12[1];
        pbVar11 = pbVar8;
        while (bVar2 != 0) {
          pbVar13 = pbVar12 + 1;
          if (bVar2 == 0x22) {
            if (pbVar12[2] != 0x22) {
              *pbVar11 = 0;
              if ((param_1[0x101] != 0) || (*pbVar8 == 0x2f)) {
                (*(code *)PTR_FUN_7100af36a0)(param_1[0xf6]);
                param_1[0xf6] = (long)pbVar8;
                FUN_71006c08c0(lVar21,"Entry path is \'%s\'\n",pbVar8);
                *(long *)(lVar21 + 0x1560) = param_1[0xf6];
                *(undefined4 *)(param_1 + 0xff) = 0;
                return 0;
              }
              iVar3 = FUN_71006d5540(plVar1,"%s",&DAT_710084b8b0);
              if (iVar3 == 0) {
                (*(code *)PTR_FUN_7100af36a0)(param_1[0xf6]);
                param_1[0xf6] = (long)pbVar8;
                FUN_71006c08c0(lVar21,"Entry path is \'%s\'\n",pbVar8);
                *(long *)(lVar21 + 0x1560) = param_1[0xf6];
                *(undefined4 *)(param_1 + 0xff) = 10;
                return 0;
              }
              goto LAB_71006e2618;
            }
            pbVar13 = pbVar12 + 2;
            bVar2 = 0x22;
          }
          *pbVar11 = bVar2;
          pbVar11 = pbVar11 + 1;
          pbVar12 = pbVar13;
          bVar2 = pbVar13[1];
        }
        *pbVar11 = 0;
      }
      (*(code *)PTR_FUN_7100af36a0)(pbVar8);
      FUN_71006c08c0(lVar21,"Failed to figure out path\n");
      *(undefined4 *)(param_1 + 0xff) = 0;
      return 0;
    }
  default:
switchD_71006e1654_default:
    *(undefined4 *)(param_1 + 0xff) = 0;
    break;
  case 10:
    if ((int)local_80 == 0xd7) {
      lVar21 = *(long *)(lVar21 + 0x1150);
      pbVar8 = (byte *)(*(code *)PTR_FUN_7100af36a8)(local_b0 + 1);
      pbVar11 = (byte *)(lVar21 + 4);
      if (pbVar8 == (byte *)0x0) {
        return 0x1b;
      }
      bVar2 = *(byte *)(lVar21 + 4);
      while (pbVar13 = pbVar8, bVar2 == 0x20) {
        pbVar11 = pbVar11 + 1;
        bVar2 = *pbVar11;
      }
      while ((bVar2 & 0xdf) != 0) {
        *pbVar13 = bVar2;
        pbVar11 = pbVar11 + 1;
        pbVar13 = pbVar13 + 1;
        bVar2 = *pbVar11;
      }
      *pbVar13 = 0;
      iVar3 = FUN_71006ca300(pbVar8,"OS/400");
      if (iVar3 == 0) {
        (*(code *)PTR_FUN_7100af36a0)(param_1[0x101]);
        *(undefined4 *)(param_1 + 0xff) = 0;
        param_1[0x101] = (long)pbVar8;
        return 0;
      }
      iVar3 = FUN_71006d5540(plVar1,"%s","SITE NAMEFMT 1");
      if (iVar3 == 0) {
        (*(code *)PTR_FUN_7100af36a0)(param_1[0x101]);
        param_1[0x101] = (long)pbVar8;
        *(undefined4 *)(param_1 + 0xff) = 0xb;
        return 0;
      }
LAB_71006e2618:
      (*(code *)PTR_FUN_7100af36a0)(pbVar8);
      return iVar3;
    }
    goto switchD_71006e1654_default;
  case 0xb:
    if ((int)local_80 == 0xfa) {
      iVar3 = FUN_71006d5540(plVar1,"%s",&DAT_710083bef8);
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0xff) = 9;
        return 0;
      }
      return 0;
    }
    goto switchD_71006e1654_default;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    if (((int)local_80 < 400) || ((int)param_1[0xfe] != 0)) {
      iVar4 = FUN_71006e0a20(param_1,0,iVar3);
    }
    else {
      iVar4 = 0x15;
      FUN_71006c0a00(*param_1,"QUOT command failed with %03d",local_80 & 0xffffffff);
    }
    break;
  case 0x10:
    if ((int)local_80 - 200U < 100) {
      *(undefined4 *)(param_1 + 0xfe) = 0;
      iVar3 = *(int *)((long)param_1 + 0x7d4) + 1;
      *(int *)((long)param_1 + 0x7d4) = iVar3;
      if ((int)param_1[0xf8] < iVar3) {
        iVar4 = FUN_71006e09b0(param_1);
      }
      else {
        iVar4 = FUN_71006d5540(plVar1,"CWD %s",*(undefined8 *)(param_1[0xf7] + (long)iVar3 * 8 + -8)
                              );
      }
    }
    else if (((*(int *)(*param_1 + 0xbec) == 0) || (*(int *)((long)param_1 + 0x7d4) == 0)) ||
            ((int)param_1[0xfe] != 0)) {
      iVar4 = 9;
      FUN_71006c0a00(lVar21,"Server denied you to change to the given directory");
      *(undefined1 *)(param_1 + 0xfb) = 1;
    }
    else {
      uVar7 = *(undefined8 *)(param_1[0xf7] + (long)*(int *)((long)param_1 + 0x7d4) * 8 + -8);
      *(undefined4 *)(param_1 + 0xfe) = 1;
      iVar4 = FUN_71006d5540(plVar1,"MKD %s",uVar7);
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 0xff) = 0x11;
      }
    }
    break;
  case 0x11:
    if (((int)local_80 - 200U < 100) ||
       (iVar3 = *(int *)((long)param_1 + 0x7f4), *(int *)((long)param_1 + 0x7f4) = iVar3 + -1,
       iVar3 != 0)) {
      *(undefined4 *)(param_1 + 0xff) = 0x10;
      iVar4 = FUN_71006d5540(plVar1,"CWD %s",
                             *(undefined8 *)
                              (param_1[0xf7] + (long)*(int *)((long)param_1 + 0x7d4) * 8 + -8));
    }
    else {
      iVar4 = 9;
      FUN_71006c0a00(lVar21,"Failed to MKD dir: %03d",local_80 & 0xffffffff);
    }
    break;
  case 0x12:
    lVar21 = *param_1;
    lVar20 = *(long *)(lVar21 + 0x1d0);
    if ((int)local_80 == 0xd5) {
      iVar3 = FUN_7100822f40(*(long *)(lVar21 + 0x1150) + 4,"%04d%02d%02d%02d%02d%02d",&local_c8,
                             &local_c4,&local_c0,&local_bc,&local_b8,&local_b4);
      if (iVar3 == 6) {
        FUN_710069fb80(&local_80,0x18,"%04d%02d%02d %02d:%02d:%02d GMT",local_c8,local_c4,local_c0,
                       local_bc,local_b8,local_b4);
        uVar7 = FUN_71006cdb90(&local_80);
        *(undefined8 *)(lVar21 + 0x1690) = uVar7;
      }
      uVar5 = (uint)*(undefined8 *)(lVar21 + 0xf60);
      if (((((uVar5 >> 0x1c & 1) != 0) && (param_1[0xf9] != 0)) && ((uVar5 >> 9 & 1) != 0)) &&
         (-1 < *(long *)(lVar21 + 0x1690))) {
        iVar3 = FUN_71006cdbe0(*(long *)(lVar21 + 0x1690),&local_a8);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = local_90 + -1;
        if (local_90 == 0) {
          iVar3 = 6;
        }
        FUN_710069fb80(&local_80,0x80,"Last-Modified: %s, %02d %s %4d %02d:%02d:%02d GMT\r\n",
                       (&PTR_DAT_7100ae3ae0)[iVar3],uStack_9c,(&PTR_DAT_7100ae3a80)[local_98],
                       local_94 + 0x76c,local_a0,local_a8._4_4_,(undefined4)local_a8);
        iVar3 = FUN_71006c0c00(param_1,3,&local_80,0);
        if (iVar3 != 0) {
          return iVar3;
        }
      }
LAB_71006e193c:
      iVar3 = *(int *)(lVar21 + 0xa18);
      if (iVar3 != 0) {
        iVar4 = 0;
        goto LAB_71006e1948;
      }
    }
    else {
      if ((int)local_80 != 0x226) {
        FUN_71006c08c0(lVar21,"unsupported MDTM reply format\n");
        goto LAB_71006e193c;
      }
      FUN_71006c0a00(lVar21,"Given file does not exist");
      iVar3 = *(int *)(lVar21 + 0xa18);
      if (iVar3 == 0) {
        return 0x13;
      }
      iVar4 = 0x13;
LAB_71006e1948:
      lVar19 = *(long *)(lVar21 + 0x1690);
      if ((lVar19 < 1) || (lVar10 = *(long *)(lVar21 + 0xa20), lVar10 < 1)) {
        FUN_71006c08c0(lVar21,"Skipping time comparison\n");
      }
      else if (iVar3 == 2) {
        if (lVar10 < lVar19) {
          FUN_71006c08c0(lVar21,"The requested document is not old enough\n");
          *(undefined4 *)(lVar20 + 0x10) = 2;
          *(byte *)(lVar21 + 0x1768) = *(byte *)(lVar21 + 0x1768) | 1;
          *(undefined4 *)(param_1 + 0xff) = 0;
          return 0;
        }
      }
      else if (lVar19 <= lVar10) {
        FUN_71006c08c0(lVar21,"The requested document is not new enough\n");
        *(undefined4 *)(lVar20 + 0x10) = 2;
        *(byte *)(lVar21 + 0x1768) = *(byte *)(lVar21 + 0x1768) | 1;
        *(undefined4 *)(param_1 + 0xff) = 0;
        return 0;
      }
      if (iVar4 != 0) {
        return 0x13;
      }
    }
    iVar4 = FUN_71006e0910(param_1);
    break;
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
    iVar4 = FUN_71006e0e60(param_1,local_80 & 0xffffffff,iVar3);
    break;
  case 0x17:
  case 0x18:
  case 0x19:
    lVar21 = *param_1;
    local_a8 = -1;
    if ((int)local_80 == 0xd5) {
      puVar17 = (undefined1 *)(*(long *)(lVar21 + 0x1150) + 4);
      puVar9 = (undefined1 *)FUN_710080eb40(puVar17,0xd);
      if (puVar9 != (undefined1 *)0x0) {
        do {
          puVar16 = puVar9;
          puVar9 = puVar16 + -1;
          iVar4 = FUN_71006af4a0(*puVar9);
        } while (iVar4 != 0 && puVar17 < puVar9);
        iVar4 = FUN_71006af4a0(*puVar9);
        puVar17 = puVar9;
        if (iVar4 == 0) {
          puVar17 = puVar16;
        }
      }
      FUN_71006cd340(puVar17,0,0,&local_a8);
      if (iVar3 == 0x17) {
        if (local_a8 != -1) {
          FUN_710069fb80(&local_80,0x80,"Content-Length: %ld\r\n",local_a8);
          iVar3 = FUN_71006c0c00(param_1,3,&local_80,0);
          if (iVar3 != 0) {
            return iVar3;
          }
        }
        goto LAB_71006e1f78;
      }
    }
    else if (iVar3 == 0x17) {
LAB_71006e1f78:
      FUN_71006b8fe0(lVar21,local_a8);
      iVar3 = FUN_71006e0d80(param_1);
      return iVar3;
    }
    if (iVar3 == 0x18) {
      FUN_71006b8fe0(lVar21,local_a8);
      iVar4 = FUN_71006dee20(param_1,local_a8);
    }
    else {
      *(long *)(lVar21 + 0x1580) = local_a8;
      iVar4 = FUN_71006df110(param_1,1);
    }
    break;
  case 0x1a:
  case 0x1b:
    if (iVar3 == 0x1b) {
      if ((int)local_80 == 0x15e) {
        iVar4 = FUN_71006d5540(plVar1,"RETR %s",param_1[0xf9]);
        if (iVar4 == 0) {
          *(undefined4 *)(param_1 + 0xff) = 0x20;
        }
      }
      else {
        iVar4 = 0x1f;
        FUN_71006c0a00(*param_1,"Couldn\'t use REST");
      }
    }
    else {
      if ((int)local_80 == 0x15e) {
        local_69 = 0;
        local_80._0_1_ = 'A';
        local_80._1_1_ = 'c';
        local_80._2_1_ = 'c';
        local_80._3_1_ = 'e';
        local_80._4_1_ = 'p';
        local_80._5_1_ = 't';
        local_80._6_1_ = '-';
        local_80._7_1_ = 'r';
        uStack_78 = 0x203a7365676e61;
        local_71 = 0x62;
        uStack_70 = 0xa0d73657479;
        iVar3 = FUN_71006c0c00(param_1,3,&local_80,0);
        if (iVar3 != 0) {
          return iVar3;
        }
      }
      iVar4 = FUN_71006e0c80(param_1);
    }
    break;
  case 0x1c:
    lVar21 = *param_1;
    if ((int)local_80 - 200U < 100) {
      FUN_71006c08c0(lVar21,"Connect data stream actively\n");
      iVar3 = *(int *)(*(long *)(*param_1 + 0x1d0) + 0x10);
      *(undefined4 *)(param_1 + 0xff) = 0;
      if (iVar3 == 0) {
        *(uint *)((long)param_1 + 0x624) = *(uint *)((long)param_1 + 0x624) | 0x1000;
      }
      else {
        FUN_71006ca160(*param_1,0xffffffff,0xffffffffffffffff,0,0xffffffff);
      }
      *(undefined1 *)((long)param_1 + 0x7d1) = 1;
    }
    else {
      iVar3 = *(int *)((long)param_1 + 0x7ec) + 1;
      if (*(int *)((long)param_1 + 0x7ec) == 0) {
        FUN_71006c08c0(lVar21,"disabling EPRT usage\n");
        *(uint *)((long)param_1 + 0x624) = *(uint *)((long)param_1 + 0x624) & 0xfff7ffff;
      }
      else if (iVar3 == 2) {
        FUN_71006c0a00(lVar21,"Failed to do PORT");
        return 0x1e;
      }
      iVar4 = FUN_71006df300(param_1,iVar3);
    }
    break;
  case 0x1d:
    if ((int)local_80 == 200) {
      iVar4 = FUN_71006defb0(param_1);
    }
    else {
      iVar4 = 0x54;
      FUN_71006c0a00(lVar21,"PRET command not accepted: %03d",local_80 & 0xffffffff);
    }
    break;
  case 0x1e:
    iVar4 = FUN_71006df9f0(param_1,local_80 & 0xffffffff);
    break;
  case 0x1f:
  case 0x20:
    lVar21 = *param_1;
    if ((int)local_80 != 0x96 && (int)local_80 != 0x7d) {
      if ((int)local_80 == 0x1c2 && iVar3 == 0x1f) {
        *(undefined4 *)(*(long *)(lVar21 + 0x1d0) + 0x10) = 2;
        *(undefined4 *)(param_1 + 0xff) = 0;
        return 0;
      }
      FUN_71006c0a00(lVar21,"RETR response: %03d",local_80 & 0xffffffff);
      if (iVar3 != 0x20 || (int)local_80 != 0x226) {
        return 0x13;
      }
      return 0x4e;
    }
    local_80 = 0xffffffffffffffff;
    uVar6 = *(ulong *)(*(long *)(lVar21 + 0x1d0) + 0x18);
    if ((iVar3 == 0x1f) || (((uint)*(undefined8 *)(lVar21 + 0xf60) >> 0xb & 1) != 0)) {
      if ((long)uVar6 < 0) {
        uVar15 = *(ulong *)(lVar21 + 0xe0);
LAB_71006e172c:
        if (iVar3 != 0x1f) {
LAB_71006e1734:
          if (((uint)*(undefined8 *)(lVar21 + 0xf60) >> 0xb & 1) != 0) {
            local_80 = 0xffffffffffffffff;
          }
          FUN_71006c08c0(lVar21,"Maxdownload = %ld\n",uVar15);
          goto LAB_71006e1754;
        }
        FUN_71006c08c0(lVar21,"Maxdownload = %ld\n",uVar15);
      }
      else {
        uVar15 = *(ulong *)(lVar21 + 0xe0);
        local_80 = uVar6;
        if ((long)uVar15 < 1 || (long)uVar6 <= (long)uVar15) goto LAB_71006e172c;
        *(ulong *)(lVar21 + 0xd8) = uVar15;
        local_80 = uVar15;
        FUN_71006c08c0(lVar21,"Maxdownload = %ld\n");
        if (iVar3 != 0x1f) goto LAB_71006e1754;
      }
    }
    else {
      if ((long)uVar6 < 1) {
        lVar19 = *(long *)(lVar21 + 0x1150);
        lVar20 = FUN_710081d620(lVar19," bytes");
        if (lVar20 != 0) {
          pcVar18 = (char *)(lVar20 + -1);
          lVar19 = (long)pcVar18 - lVar19;
          if (lVar19 != 1) {
            do {
              if (*pcVar18 == '(') break;
              iVar4 = FUN_71006af4a0();
              if (iVar4 == 0) goto LAB_71006e2584;
              pcVar18 = pcVar18 + -1;
            } while (pcVar18 + (lVar19 - lVar20) != (char *)0x0);
          }
          FUN_71006cd340(pcVar18 + 1,0,0,&local_80);
        }
LAB_71006e2584:
        uVar15 = *(ulong *)(lVar21 + 0xe0);
        if ((long)uVar15 < 1 || (long)local_80 <= (long)uVar15) goto LAB_71006e1734;
      }
      else {
        uVar15 = *(ulong *)(lVar21 + 0xe0);
        local_80 = uVar6;
        if ((long)uVar15 < 1 || (long)uVar6 <= (long)uVar15) goto LAB_71006e172c;
      }
      *(ulong *)(lVar21 + 0xd8) = uVar15;
      local_80 = uVar15;
      FUN_71006c08c0(lVar21,"Maxdownload = %ld\n");
LAB_71006e1754:
      FUN_71006c08c0(lVar21,"Getting file with size: %ld\n",local_80);
    }
    uVar7 = *(undefined8 *)(lVar21 + 0xf60);
    *(int *)((long)param_1 + 0x7fc) = iVar3;
    param_1[0x100] = local_80;
    if (((uint)uVar7 >> 0xe & 1) != 0) {
      iVar3 = FUN_71006e1490(param_1,&local_a8);
      if (iVar3 != 0) {
        return iVar3;
      }
      if ((char)local_a8 == '\0') {
        FUN_71006c08c0(lVar21,"Data conn was not available immediately\n");
        *(undefined4 *)(param_1 + 0xff) = 0;
        *(undefined1 *)((long)param_1 + 0x7d9) = 1;
        return 0;
      }
      return 0;
    }
    goto LAB_71006e1e0c;
  case 0x21:
    lVar21 = *param_1;
    if (399 < (int)local_80) {
      FUN_71006c0a00(lVar21,"Failed FTP upload: %0d",local_80 & 0xffffffff);
      *(undefined4 *)(param_1 + 0xff) = 0;
      return 0x19;
    }
    uVar7 = *(undefined8 *)(lVar21 + 0xf60);
    *(undefined4 *)((long)param_1 + 0x7fc) = 0x21;
    if (((uint)uVar7 >> 0xe & 1) != 0) {
      *(undefined4 *)(param_1 + 0xff) = 0;
      iVar3 = FUN_71006e1490(param_1,&local_80);
      if (iVar3 != 0) {
        return iVar3;
      }
      if ((char)local_80 == '\0') {
        FUN_71006c08c0(lVar21,"Data conn was not available immediately\n");
        *(undefined1 *)((long)param_1 + 0x7d9) = 1;
        return 0;
      }
      return 0;
    }
LAB_71006e1e0c:
    iVar4 = FUN_71006dff00(param_1);
  }
  return iVar4;
}



// ===== FUN_71006e26b0 @ 71006e26b0 (size=900) =====

int FUN_71006e26b0(long *param_1,uint *param_2)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  char local_2;
  char local_1;
  
  lVar6 = *param_1;
  local_2 = '\0';
  lVar7 = *(long *)(lVar6 + 0x1d0);
  if (*(char *)((long)param_1 + 0x623) == '\0') {
    cVar2 = FUN_71006a88a0();
    if (cVar2 != '\0') {
      iVar3 = FUN_71006a8910(param_1,1,0,0);
      return iVar3;
    }
    iVar3 = FUN_71006a2870(param_1,1,&local_2);
    if (local_2 == '\0') {
      if (iVar3 == 0) {
        return 0;
      }
      if (*(int *)((long)param_1 + 0x7ec) != 0) {
        return iVar3;
      }
      *param_2 = 0xffffffff;
      iVar3 = FUN_71006df060(param_1);
      return iVar3;
    }
  }
  iVar3 = FUN_71006a9530(param_1,1);
  if (iVar3 != 0) {
    return iVar3;
  }
  if (((int)param_1[0x7d] == 2) && (*(char *)((long)param_1 + 0x621) == '\0')) {
    return 0;
  }
  if ((((param_1[0xc4] ^ 0xffffffffffffffffU) & 0x804000000000) == 0) &&
     (cVar2 = FUN_71006a88a0(param_1), cVar2 != '\0')) {
    return 0;
  }
  plVar1 = param_1 + 0xe8;
  if ((int)param_1[0xff] == 0) {
    if (*(uint *)(lVar7 + 0x10) < 2) {
      if (*(char *)((long)param_1 + 0x7d9) != '\0') goto LAB_71006e28b0;
      if (((uint)*(ulong *)(lVar6 + 0xf60) >> 0x1d & 1) == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0xffffffffffffffff;
        iVar3 = FUN_71006e4d30(param_1);
        if (iVar3 != 0) goto LAB_71006e27c8;
        if (-1 < *(long *)(lVar6 + 0xe0)) {
          *(undefined1 *)(param_1 + 0xfa) = 1;
        }
        if ((((uint)*(ulong *)(lVar6 + 0xf60) >> 0xd & 1) == 0) && (param_1[0xf9] != 0)) {
          cVar2 = 'A';
          if ((*(ulong *)(lVar6 + 0xf60) & 0x800) == 0) {
            cVar2 = 'I';
          }
          if ((char)param_1[0xfd] != cVar2) {
            iVar3 = FUN_71006d5540(plVar1,"TYPE %c",cVar2);
            if (iVar3 != 0) {
              return iVar3;
            }
            *(char *)(param_1 + 0xfd) = cVar2;
            *(undefined4 *)(param_1 + 0xff) = 0x15;
            goto LAB_71006e27c8;
          }
          uVar5 = 0x15;
          uVar4 = 0xd;
          goto LAB_71006e29a8;
        }
        if (*(int *)(lVar7 + 0x10) != 0) goto LAB_71006e27c8;
        if ((char)param_1[0xfd] != 'A') {
          iVar3 = FUN_71006d5540(plVar1,"TYPE %c",0x41);
          if (iVar3 != 0) {
            return iVar3;
          }
          *(undefined1 *)(param_1 + 0xfd) = 0x41;
          *(undefined4 *)(param_1 + 0xff) = 0x14;
          goto LAB_71006e27c8;
        }
        *(undefined4 *)(param_1 + 0xff) = 0x14;
        iVar3 = FUN_71006e0e60(param_1,200);
      }
      else {
        cVar2 = 'A';
        if ((*(ulong *)(lVar6 + 0xf60) & 0x800) == 0) {
          cVar2 = 'I';
        }
        if ((char)param_1[0xfd] != cVar2) {
          iVar3 = FUN_71006d5540(plVar1,"TYPE %c",cVar2);
          if (iVar3 != 0) {
            return iVar3;
          }
          *(char *)(param_1 + 0xfd) = cVar2;
          *(undefined4 *)(param_1 + 0xff) = 0x16;
          goto LAB_71006e27c8;
        }
        uVar5 = 0x16;
        uVar4 = 0xe;
LAB_71006e29a8:
        *(undefined4 *)(param_1 + 0xff) = uVar5;
        iVar3 = FUN_71006e0a20(param_1,1,uVar4);
      }
      if (iVar3 != 0) {
        return iVar3;
      }
LAB_71006e27c8:
      iVar3 = FUN_71006d5170(plVar1,0,0);
      *param_2 = (uint)((int)param_1[0xff] == 0);
      return iVar3;
    }
  }
  else {
    iVar3 = FUN_71006d5170(plVar1,0,0);
    *param_2 = (uint)((int)param_1[0xff] == 0);
    if (iVar3 != 0) {
      return iVar3;
    }
    if (*(char *)((long)param_1 + 0x7d9) == '\0') {
      return 0;
    }
    *param_2 = 0;
    if (*(uint *)(lVar7 + 0x10) < 2) {
LAB_71006e28b0:
      iVar3 = FUN_71006e1320(param_1,&local_1);
      if (iVar3 != 0) {
        return iVar3;
      }
      if (local_1 == '\0') {
        return 0;
      }
      iVar3 = FUN_71006e07b0(param_1);
      *(undefined1 *)((long)param_1 + 0x7d9) = 0;
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_71006dff00(param_1);
      if (iVar3 != 0) {
        return iVar3;
      }
      goto LAB_71006e2880;
    }
  }
  FUN_71006ca160(lVar6,0xffffffff,0xffffffffffffffff,0,0xffffffff);
  if (*(char *)((long)param_1 + 0x7d9) != '\0') {
    return 0;
  }
LAB_71006e2880:
  *param_2 = 1;
  return 0;
}



// ===== FUN_71006e2a40 @ 71006e2a40 (size=1924) =====

/* WARNING: Type propagation algorithm not settling */

int FUN_71006e2a40(long *param_1,char *param_2)

{
  undefined8 uVar1;
  char cVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  char *pcVar15;
  uint *puVar16;
  long *plVar17;
  undefined1 auStack_4 [4];
  
  lVar14 = *param_1;
  *param_2 = '\0';
  uVar3 = *(ushort *)(lVar14 + 0x162c);
  *(undefined1 *)((long)param_1 + 0x7d9) = 0;
  if ((uVar3 >> 7 & 1) == 0) {
    iVar5 = FUN_71006dfff0();
    if (iVar5 != 0) {
      return iVar5;
    }
    lVar14 = *param_1;
  }
  else {
    lVar13 = lVar14 + 0x1800;
    puVar16 = (uint *)(lVar14 + 0x1630);
    uVar6 = *puVar16;
    bVar4 = uVar6 == 3;
    if (bVar4) goto LAB_71006e2b4c;
    while (2 < uVar6 && !bVar4) {
      if (uVar6 != 5) {
        if (uVar6 < 6) {
          if (uVar6 != 4) {
            return 0;
          }
          if (*(undefined8 **)(puVar16 + 0xe) == (undefined8 *)0x0) {
            iVar5 = 0;
            uVar7 = 7;
          }
          else {
            iVar5 = FUN_71006e3a00(**(undefined8 **)(puVar16 + 0xe));
            if (iVar5 == 0) {
              uVar7 = 7;
              lVar14 = *param_1;
            }
            else {
              uVar7 = 6;
              lVar14 = *param_1;
            }
          }
          *(undefined4 *)(lVar13 + -0x1d0) = uVar7;
          uVar6 = *(uint *)(lVar14 + 0x1630);
          goto LAB_71006e2de4;
        }
        if (1 < uVar6 - 6) goto joined_r0x0071006e2d58;
        pcVar10 = *(code **)(puVar16 + 0x10);
        if (pcVar10 != (code *)0x0) goto LAB_71006e2ac8;
        if (uVar6 != 6) {
          return 0;
        }
        goto LAB_71006e2c58;
      }
      if (*(long *)(lVar14 + 0xec8) != 0) {
        FUN_71006a63f0(lVar14,1);
        (**(code **)(*param_1 + 0xec8))(*(undefined8 *)(*param_1 + 0x1678));
        FUN_71006a63f0(*param_1,0);
      }
      FUN_71006cab80(lVar14 + 0x1648,*(undefined8 *)(lVar13 + -0x1b8),0);
      lVar14 = *param_1;
      *(uint *)(lVar13 + -0x1d0) = (*(long *)(lVar13 + -0x1a0) == 0) + 3;
LAB_71006e2b38:
      while( true ) {
        lVar13 = lVar14 + 0x1800;
        puVar16 = (uint *)(lVar14 + 0x1630);
        uVar6 = *puVar16;
        bVar4 = uVar6 == 3;
        if (!bVar4) break;
LAB_71006e2b4c:
        plVar17 = *(long **)(lVar14 + 0x1d0);
        puVar11 = (undefined8 *)**(long **)(puVar16 + 6);
        lVar8 = FUN_71006a1060("%s%s",*(undefined8 *)(puVar16 + 2),*puVar11);
        if (lVar8 == 0) goto LAB_71006e3130;
        (*(code *)PTR_FUN_7100af36a0)(plVar17[1]);
        lVar9 = *param_1;
        *plVar17 = lVar8;
        plVar17[1] = lVar8;
        FUN_71006c08c0(lVar9,"Wildcard - START of \"%s\"\n",*puVar11);
        if (*(long *)(*param_1 + 0xec0) == 0) {
LAB_71006e2bec:
          if (*(int *)(puVar11 + 1) == 0) {
            if ((*(uint *)(puVar11 + 0xc) >> 6 & 1) != 0) {
              param_1[0x102] = puVar11[5];
            }
            iVar5 = FUN_71006dfff0(param_1);
            if (iVar5 != 0) goto LAB_71006e3134;
            FUN_71006cab80(lVar14 + 0x1648,*(undefined8 *)(lVar13 + -0x1b8),0);
            lVar14 = *param_1;
            if (*(long *)(lVar13 + -0x1a0) != 0) goto LAB_71006e2ad8;
            *(undefined4 *)(lVar13 + -0x1d0) = 4;
            uVar6 = *(uint *)(lVar14 + 0x1630);
            goto joined_r0x0071006e2d58;
          }
          lVar14 = *param_1;
          *(undefined4 *)(lVar13 + -0x1d0) = 5;
        }
        else {
          FUN_71006a63f0(*param_1,1);
          lVar8 = (**(code **)(*param_1 + 0xec0))
                            (puVar11,*(undefined8 *)(puVar16 + 0x12),puVar16[0xc]);
          FUN_71006a63f0(*param_1,0);
          if (lVar8 == 1) {
            if ((*(uint *)(*param_1 + 0x1630) & 0xfffffffd) != 5) {
              return 0x58;
            }
            return 0;
          }
          if (lVar8 != 2) goto LAB_71006e2bec;
          FUN_71006c08c0(*param_1,"Wildcard - \"%s\" skipped by user\n",*puVar11);
          lVar14 = *param_1;
          *puVar16 = 5;
        }
      }
    }
    if (uVar6 != 1) {
      if (uVar6 == 2) {
        puVar11 = *(undefined8 **)(puVar16 + 0xe);
        uVar1 = *puVar11;
        uVar12 = puVar11[2];
        *(undefined8 *)(lVar14 + 0x6e8) = puVar11[1];
        *(undefined8 *)(lVar14 + 0x670) = uVar12;
        puVar11[1] = 0;
        puVar11[2] = 0;
        *puVar16 = 3;
        iVar5 = FUN_71006e3a00(uVar1);
        if (iVar5 == 0) {
          if (*(long *)(puVar16 + 0xc) == 0) {
            iVar5 = 0x4e;
            lVar14 = *param_1;
            *puVar16 = 4;
            goto LAB_71006e3080;
          }
        }
        else {
          *puVar16 = 4;
        }
        lVar14 = *param_1;
        goto LAB_71006e2b38;
      }
      if ((uVar6 != 0) || (pcVar10 = *(code **)(puVar16 + 0x10), pcVar10 == (code *)0x0))
      goto LAB_71006e2c58;
LAB_71006e2ac8:
      (*pcVar10)(*(undefined8 *)(lVar13 + -0x198));
LAB_71006e2ad4:
      lVar14 = *param_1;
LAB_71006e2ad8:
      uVar6 = *(uint *)(lVar14 + 0x1630);
joined_r0x0071006e2d58:
      if ((uVar6 & 0xfffffffd) == 5) {
        return 0;
      }
      goto LAB_71006e2c58;
    }
    puVar11 = *(undefined8 **)(lVar14 + 0x1d0);
    pcVar15 = (char *)*puVar11;
    lVar14 = FUN_7100806500(pcVar15,0x2f);
    if (lVar14 == 0) {
      if (*pcVar15 == '\0') goto LAB_71006e30d4;
      lVar14 = (*(code *)PTR_FUN_7100af36b8)(pcVar15);
      *(long *)(puVar16 + 4) = lVar14;
      if (lVar14 != 0) {
        *pcVar15 = '\0';
        goto LAB_71006e2ea8;
      }
LAB_71006e3118:
      if (*puVar16 == 4) {
LAB_71006e3130:
        iVar5 = 0x1b;
LAB_71006e3134:
        uVar6 = *(uint *)(*param_1 + 0x1630);
joined_r0x0071006e3094:
        if ((uVar6 & 0xfffffffd) != 5) {
          return iVar5;
        }
        return 0;
      }
      iVar5 = 0x1b;
      uVar7 = 6;
    }
    else if (*(char *)(lVar14 + 1) == '\0') {
LAB_71006e30d4:
      *puVar16 = 4;
      iVar5 = FUN_71006dfff0(param_1);
      if (*(int *)(lVar13 + -0x1d0) == 4) {
        lVar14 = *param_1;
        uVar6 = *(uint *)(lVar14 + 0x1630);
        goto LAB_71006e2de4;
      }
      uVar7 = 6;
      if (iVar5 == 0) {
        uVar7 = 2;
      }
    }
    else {
      lVar8 = (*(code *)PTR_FUN_7100af36b8)(lVar14 + 1);
      *(long *)(puVar16 + 4) = lVar8;
      if (lVar8 == 0) goto LAB_71006e3118;
      *(undefined1 *)(lVar14 + 1) = 0;
LAB_71006e2ea8:
      plVar17 = (long *)(*(code *)PTR_FUN_7100af3698)(1,0x18);
      if (plVar17 == (long *)0x0) {
        iVar5 = 0x1b;
      }
      else {
        lVar14 = FUN_71006e3990();
        *plVar17 = lVar14;
        if (lVar14 == 0) {
LAB_71006e3030:
          iVar5 = 0x1b;
        }
        else {
          lVar14 = *param_1;
          *(long **)(lVar13 + -0x198) = plVar17;
          *(code **)(lVar13 + -400) = FUN_71006dffb0;
          if (*(int *)(lVar14 + 0xbe0) == 2) {
            *(undefined4 *)(lVar14 + 0xbe0) = 1;
          }
          iVar5 = FUN_71006dfff0(param_1);
          if (iVar5 == 0) {
            lVar14 = (*(code *)PTR_FUN_7100af36b8)(*puVar11);
            *(long *)(lVar13 + -0x1c8) = lVar14;
            if (lVar14 != 0) {
              lVar14 = *param_1;
              lVar8 = *(long *)(lVar14 + 0x670);
              plVar17[1] = *(long *)(lVar14 + 0x6e8);
              *(code **)(lVar14 + 0x6e8) = FUN_71006e3a10;
              plVar17[2] = lVar8;
              *(long **)(lVar14 + 0x670) = param_1;
              FUN_71006c08c0(lVar14,"Wildcard - Parsing started\n");
              if (*(int *)(lVar13 + -0x1d0) == 4) goto LAB_71006e2ad4;
              uVar7 = 2;
              goto LAB_71006e2f68;
            }
            goto LAB_71006e3030;
          }
        }
        FUN_71006e39b0(plVar17);
        (*(code *)PTR_FUN_7100af36a0)(plVar17);
      }
      (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(lVar13 + -0x1c0));
      uVar7 = 6;
      *(undefined8 *)(lVar13 + -0x1c0) = 0;
      *(undefined8 *)(lVar13 + -0x198) = 0;
      *(undefined8 *)(lVar13 + -400) = 0;
      if (*(int *)(lVar13 + -0x1d0) == 4) {
        lVar14 = *param_1;
LAB_71006e3080:
        uVar6 = *(uint *)(lVar14 + 0x1630);
        goto joined_r0x0071006e3094;
      }
    }
LAB_71006e2f68:
    lVar14 = *param_1;
    *(undefined4 *)(lVar13 + -0x1d0) = uVar7;
    uVar6 = *(uint *)(lVar14 + 0x1630);
LAB_71006e2de4:
    if ((uVar6 & 0xfffffffd) == 5) {
      return 0;
    }
    if (iVar5 != 0) {
      return iVar5;
    }
  }
LAB_71006e2c58:
  *(undefined8 *)(lVar14 + 0xd8) = 0xffffffffffffffff;
  FUN_71006b8fd0(lVar14,0);
  FUN_71006b8e90(lVar14,0);
  FUN_71006b9010(lVar14,0xffffffffffffffff);
  FUN_71006b8fe0(lVar14,0xffffffffffffffff);
  *(undefined1 *)((long)param_1 + 0x7d1) = 1;
  if (((uint)*(undefined8 *)(*param_1 + 0xf60) >> 0x1c & 1) != 0) {
    *(undefined4 *)(*(long *)(*param_1 + 0x1d0) + 0x10) = 1;
  }
  *param_2 = '\0';
  iVar5 = FUN_71006e0a20(param_1,1,0xc);
  if (iVar5 != 0) {
LAB_71006e2ccc:
    FUN_71006dec70(param_1 + 0xe8);
    return iVar5;
  }
  iVar5 = FUN_71006d5170(param_1 + 0xe8,0,0);
  lVar14 = *param_1;
  *param_2 = (int)param_1[0xff] == 0;
  cVar2 = *(char *)((long)param_1 + 0x623);
  FUN_71006c08c0(lVar14,"ftp_perform ends with SECONDARY: %d\n",cVar2);
  if (iVar5 != 0) goto LAB_71006e2ccc;
  if (*param_2 == '\0') {
    return 0;
  }
  lVar14 = *param_1;
  lVar13 = *(long *)(lVar14 + 0x1d0);
  if (cVar2 == '\0') {
    if (*(int *)(lVar13 + 0x10) == 0) {
      *(uint *)((long)param_1 + 0x624) = *(uint *)((long)param_1 + 0x624) | 0x1000;
      goto LAB_71006e2d94;
    }
  }
  else {
    iVar5 = FUN_71006e26b0(param_1,auStack_4);
    if (iVar5 != 0) {
      if (*(int *)((long)param_1 + 0x4dc) != -1) {
        FUN_71006a1ce0(param_1);
        *(undefined4 *)((long)param_1 + 0x4dc) = 0xffffffff;
      }
      *(undefined1 *)((long)param_1 + 0x623) = 0;
      return iVar5;
    }
    if (*(int *)(lVar13 + 0x10) == 0) goto LAB_71006e2d94;
    lVar14 = *param_1;
  }
  FUN_71006ca160(lVar14,0xffffffff,0xffffffffffffffff,0,0xffffffff);
LAB_71006e2d94:
  *(undefined1 *)((long)param_1 + 0x7d1) = 1;
  return 0;
}



// ===== FUN_71006e31d0 @ 71006e31d0 (size=1492) =====

/* WARNING: Type propagation algorithm not settling */

ulong FUN_71006e31d0(long *param_1,ulong param_2,char param_3)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  char *pcVar13;
  undefined1 auVar14 [16];
  int local_28;
  int local_24;
  long local_20;
  char *local_18;
  long local_10;
  undefined1 auStack_8 [8];
  
  lVar12 = *param_1;
  local_18 = (char *)0x0;
  local_10 = 0;
  puVar11 = *(undefined8 **)(lVar12 + 0x1d0);
  if (puVar11 == (undefined8 *)0x0) {
    return 0;
  }
  uVar3 = (uint)param_2;
  plVar1 = param_1 + 0xe8;
  uVar9 = param_2 & 0xffffffff;
  if (uVar3 < 0xe) {
    if ((0x3601UL >> (param_2 & 0x3f) & 1) == 0) {
LAB_71006e3300:
      *(undefined1 *)((long)param_1 + 0x7d1) = 0;
      *(undefined1 *)(param_1 + 0xfb) = 1;
      FUN_71006a2e80(param_1,1);
      if ((*(ushort *)(lVar12 + 0x162c) >> 7 & 1) != 0) {
LAB_71006e3328:
        if ((*(long *)(lVar12 + 0xec8) != 0) && (param_1[0xf9] != 0)) {
          FUN_71006a63f0(lVar12,1);
          (**(code **)(lVar12 + 0xec8))(*(undefined8 *)(lVar12 + 0x1678));
          FUN_71006a63f0(lVar12,0);
        }
        param_1[0x102] = -1;
      }
      if ((int)uVar9 != 0) goto LAB_71006e325c;
    }
    else {
LAB_71006e34c4:
      if (param_3 != '\0') goto LAB_71006e3300;
      if ((*(ushort *)(lVar12 + 0x162c) >> 7 & 1) != 0) {
        uVar9 = 0;
        goto LAB_71006e3328;
      }
    }
    uVar4 = FUN_710069f7f0(lVar12,*puVar11,0,&local_18,&local_10,1);
    uVar9 = (ulong)uVar4;
    if (uVar4 != 0) goto LAB_71006e325c;
    if ((*(int *)(lVar12 + 0xbe0) == 2) && (*local_18 == '/')) {
      (*(code *)PTR_FUN_7100af36a0)();
      pcVar13 = (char *)param_1[0xfc];
LAB_71006e33ec:
      if (pcVar13 != (char *)0x0) {
        FUN_71006c08c0(lVar12,"Remembering we are in dir \"%s\"\n");
      }
    }
    else {
      (*(code *)PTR_FUN_7100af36a0)(param_1[0xfc]);
      lVar5 = local_10;
      if ((char)param_1[0xfb] == '\0') {
        lVar7 = 0;
        if ((*(int *)(lVar12 + 0xbe0) != 2) && (lVar7 = local_10, param_1[0xf9] != 0)) {
          lVar7 = FUN_710081ce00();
          lVar7 = lVar5 - lVar7;
        }
        local_18[lVar7] = '\0';
        param_1[0xfc] = (long)local_18;
        pcVar13 = local_18;
        local_10 = lVar7;
        goto LAB_71006e33ec;
      }
      (*(code *)PTR_FUN_7100af36a0)(local_18);
      param_1[0xfc] = 0;
    }
    FUN_71006dec70(plVar1);
    if (*(int *)((long)param_1 + 0x4dc) != -1) {
      if (((char)param_1[0xfa] == '\0') || (*(long *)(lVar12 + 0xe0) < 1)) goto LAB_71006e3298;
      uVar4 = FUN_71006d5540(plVar1,"%s",&DAT_710083bd80);
      uVar9 = (ulong)uVar4;
      if (uVar4 != 0) {
        uVar6 = FUN_71006a6780();
        FUN_71006c0a00(lVar12,"Failure sending ABOR command: %s",uVar6);
        *(undefined1 *)((long)param_1 + 0x7d1) = 0;
        FUN_71006a2e80(param_1,1);
      }
      if ((*(byte *)(param_1 + 0xa6) & 1) != 0) goto LAB_71006e3648;
      goto LAB_71006e3450;
    }
LAB_71006e3468:
    if (((*(int *)(puVar11 + 2) == 0) && (*(char *)((long)param_1 + 0x7d1) != '\0')) &&
       ((char)param_1[0xec] != '\0')) {
      if (param_3 != '\0') {
LAB_71006e3600:
        *(undefined4 *)(puVar11 + 2) = 0;
        uVar9 = 0;
        *(undefined1 *)(param_1 + 0xfa) = 0;
        goto LAB_71006e32c0;
      }
      lVar5 = param_1[0xf2];
      param_1[0xf2] = 60000;
      auVar14 = FUN_71006b7420();
      *(undefined1 (*) [16])(param_1 + 0xf0) = auVar14;
      uVar4 = FUN_71006e1120(&local_20,param_1,&local_28);
      param_1[0xf2] = lVar5;
      if (local_20 == 0 && uVar4 == 0x1c) {
        FUN_71006c0a00(lVar12,"control connection looks dead");
        *(undefined1 *)((long)param_1 + 0x7d1) = 0;
        FUN_71006a2e80(param_1,1);
        return 0x1c;
      }
      if (uVar4 != 0) {
        return (ulong)uVar4;
      }
      if ((char)param_1[0xfa] == '\0') {
        if (local_28 != 0xe2 && local_28 != 0xfa) {
          uVar9 = 0x12;
          FUN_71006c0a00(lVar12,"server did not report OK, got %d");
          *(undefined4 *)(puVar11 + 2) = 0;
          *(undefined1 *)(param_1 + 0xfa) = 0;
          goto LAB_71006e32c0;
        }
      }
      else if (0 < *(long *)(lVar12 + 0xe0)) {
        FUN_71006c08c0(lVar12,"partial download completed, closing connection\n");
        FUN_71006a2e80(param_1,1);
        return (ulong)uVar4;
      }
    }
    else if (param_3 != '\0') goto LAB_71006e3600;
    uVar4 = (uint)*(undefined8 *)(lVar12 + 0xf60);
    if ((uVar4 >> 0x1d & 1) == 0) {
      lVar5 = *(long *)(lVar12 + 0xd8);
      if (lVar5 != -1) {
        lVar7 = *(long *)(lVar12 + 0xe8);
        if (((lVar5 == lVar7) || (lVar7 == lVar5 + *(long *)(lVar12 + 0x1570))) ||
           (lVar7 == *(long *)(lVar12 + 0xe0))) {
          if (((char)param_1[0xfa] != '\0') || (lVar7 != 0 || lVar5 < 1)) goto LAB_71006e34e4;
          uVar9 = 0x13;
          FUN_71006c0a00(lVar12,"No data was received!");
        }
        else {
          uVar9 = 0x12;
          FUN_71006c0a00(lVar12,"Received only partial file: %ld bytes");
        }
        goto LAB_71006e32b8;
      }
    }
    else if ((((*(long *)(lVar12 + 0x15a0) != -1) &&
              (*(long *)(lVar12 + 0x15a0) != *(long *)(lVar12 + 0xf0))) && ((uVar4 >> 6 & 1) == 0))
            && (*(int *)(puVar11 + 2) == 0)) {
      uVar9 = 0x12;
      FUN_71006c0a00(lVar12,"Uploaded unaligned file size (%ld out of %ld bytes)",
                     *(undefined8 *)(lVar12 + 0xe8));
      goto LAB_71006e32b8;
    }
LAB_71006e34e4:
    *(undefined4 *)(puVar11 + 2) = 0;
    *(undefined1 *)(param_1 + 0xfa) = 0;
    if ((uVar3 == 0) && (puVar10 = *(undefined8 **)(lVar12 + 0x9d8), puVar10 != (undefined8 *)0x0))
    {
      do {
        pcVar13 = (char *)*puVar10;
        if (pcVar13 != (char *)0x0) {
          cVar2 = *pcVar13;
          if (cVar2 == '*') {
            pcVar13 = pcVar13 + 1;
          }
          uVar3 = FUN_71006d5540(plVar1,"%s",pcVar13);
          uVar9 = (ulong)uVar3;
          if (uVar3 != 0) goto LAB_71006e32c0;
          auVar14 = FUN_71006b7420();
          *(undefined1 (*) [16])(param_1 + 0xf0) = auVar14;
          uVar3 = FUN_71006e1120(auStack_8,param_1,&local_24);
          uVar9 = (ulong)uVar3;
          if (uVar3 != 0) goto LAB_71006e32c0;
          if ((cVar2 != '*') && (399 < local_24)) {
            uVar9 = 0x15;
            FUN_71006c0a00(*param_1,"QUOT string not accepted: %s",pcVar13);
            goto LAB_71006e32c0;
          }
        }
        puVar10 = (undefined8 *)puVar10[1];
      } while (puVar10 != (undefined8 *)0x0);
    }
    uVar9 = 0;
  }
  else {
    if ((uVar3 - 0x11 < 0x3e) && ((0x2000400000082147U >> ((ulong)(uVar3 - 0x11) & 0x3f) & 1) != 0))
    goto LAB_71006e34c4;
    *(undefined1 *)((long)param_1 + 0x7d1) = 0;
    *(undefined1 *)(param_1 + 0xfb) = 1;
    FUN_71006a2e80(param_1,1);
    if ((*(ushort *)(lVar12 + 0x162c) >> 7 & 1) != 0) goto LAB_71006e3328;
LAB_71006e325c:
    *(undefined1 *)((long)param_1 + 0x7d1) = 0;
    FUN_71006a2e80(param_1,1);
    (*(code *)PTR_FUN_7100af36a0)(param_1[0xfc]);
    param_1[0xfc] = 0;
    FUN_71006dec70(plVar1);
    if (*(int *)((long)param_1 + 0x4dc) != -1) {
LAB_71006e3298:
      if ((*(byte *)(param_1 + 0xa6) & 1) == 0) {
LAB_71006e32a0:
        FUN_71006a1ce0(param_1);
        *(undefined1 *)((long)param_1 + 0x623) = 0;
        *(undefined4 *)((long)param_1 + 0x4dc) = 0xffffffff;
        iVar8 = (int)uVar9;
      }
      else {
LAB_71006e3648:
        thunk_FUN_71006b2450(param_1,1);
LAB_71006e3450:
        if (*(int *)((long)param_1 + 0x4dc) != -1) goto LAB_71006e32a0;
        *(undefined1 *)((long)param_1 + 0x623) = 0;
        iVar8 = (int)uVar9;
      }
      if (iVar8 == 0) goto LAB_71006e3468;
    }
LAB_71006e32b8:
    *(undefined4 *)(puVar11 + 2) = 0;
    *(undefined1 *)(param_1 + 0xfa) = 0;
  }
LAB_71006e32c0:
  (*(code *)PTR_FUN_7100af36a0)(puVar11[1]);
  puVar11[1] = 0;
  return uVar9;
}



// ===== FUN_71006e37b0 @ 71006e37b0 (size=28) =====

void FUN_71006e37b0(void)

{
  (*(code *)PTR_FUN_7100af3698)(1,0x98);
  return;
}



// ===== FUN_71006e37d0 @ 71006e37d0 (size=72) =====

void FUN_71006e37d0(long param_1)

{
  undefined *puVar1;
  
  if (param_1 != 0) {
    (*(code *)PTR_FUN_7100af36a0)(*(undefined8 *)(param_1 + 0x68));
    puVar1 = PTR_FUN_7100af36a0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    (*(code *)puVar1)(param_1);
    return;
  }
  return;
}



// ===== FUN_71006e3820 @ 71006e3820 (size=368) =====

undefined8 FUN_71006e3820(long *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  
  lVar12 = *param_1;
  lVar4 = param_2[0xd];
  pcVar11 = *(code **)(lVar12 + 0xed0);
  plVar9 = *(long **)(lVar12 + 0x1668);
  lVar6 = *plVar9;
  lVar2 = *(long *)(lVar6 + 0x40);
  lVar10 = lVar4 + *(long *)(lVar6 + 0x38);
  if (*(long *)(lVar6 + 0x38) == 0) {
    lVar10 = 0;
  }
  lVar8 = *(long *)(lVar6 + 0x28);
  lVar5 = *(long *)(lVar6 + 0x50);
  lVar7 = lVar4 + *(long *)(lVar6 + 0x48);
  if (*(long *)(lVar6 + 0x48) == 0) {
    lVar7 = 0;
  }
  param_2[8] = lVar7;
  lVar7 = *(long *)(lVar6 + 0x30);
  lVar6 = lVar4 + lVar5;
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  *param_2 = lVar4 + lVar8;
  param_2[7] = lVar4 + lVar2;
  lVar4 = lVar4 + lVar7;
  if (lVar7 == 0) {
    lVar4 = 0;
  }
  param_2[9] = lVar4;
  param_2[10] = lVar10;
  pcVar1 = (code *)&LAB_71006e4e60;
  if (pcVar11 != (code *)0x0) {
    pcVar1 = pcVar11;
  }
  param_2[0xb] = lVar6;
  FUN_71006a63f0(lVar12,1);
  iVar3 = (*pcVar1)(*(undefined8 *)(*param_1 + 0xed8),*(undefined8 *)(lVar12 + 0x1640),*param_2);
  if (iVar3 == 0) {
    lVar10 = *param_1;
    if ((((int)param_2[1] != 2) || (param_2[0xb] == 0)) ||
       (lVar4 = FUN_710081d620(param_2[0xb],&DAT_710083ff90), lVar4 == 0)) {
      FUN_71006a63f0(lVar10,0);
      FUN_71006cab00(lVar12 + 0x1648,*(undefined8 *)(lVar12 + 0x1650),param_2,param_2 + 0x10);
      goto LAB_71006e392c;
    }
    FUN_71006a63f0(lVar10,0);
  }
  else {
    FUN_71006a63f0(*param_1,0);
  }
  FUN_71006e37d0(param_2);
LAB_71006e392c:
  *(undefined8 *)(*plVar9 + 0x10) = 0;
  return 0;
}



// ===== FUN_71006e3990 @ 71006e3990 (size=28) =====

void FUN_71006e3990(void)

{
  (*(code *)PTR_FUN_7100af3698)(1,0x58);
  return;
}



// ===== FUN_71006e39b0 @ 71006e39b0 (size=68) =====

void FUN_71006e39b0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_71006e37d0(*(undefined8 *)(lVar1 + 0x10));
  }
  (*(code *)PTR_FUN_7100af36a0)(lVar1);
  *param_1 = 0;
  return;
}



// ===== FUN_71006e3a00 @ 71006e3a00 (size=8) =====

undefined4 FUN_71006e3a00(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FUN_71006e3a10 @ 71006e3a10 (size=3548) =====

ulong FUN_71006e3a10(char *param_1,long param_2,long param_3,long *param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  ulong uVar13;
  char *pcVar14;
  char *local_10;
  char *local_8;
  
  uVar12 = param_2 * param_3;
  piVar11 = (int *)**(undefined8 **)(*param_4 + 0x1668);
  if (piVar11[3] != 0) {
LAB_71006e3aec:
    lVar10 = *(long *)(piVar11 + 4);
    if (lVar10 != 0) {
LAB_71006e3af4:
      FUN_71006e37d0(lVar10);
      piVar11[4] = 0;
      piVar11[5] = 0;
    }
    return uVar12;
  }
  if (*piVar11 == 0 && uVar12 != 0) {
    *piVar11 = ((byte)(*param_1 - 0x30U) < 10) + 1;
  }
  else if (uVar12 == 0) {
    return 0;
  }
  uVar13 = 0;
LAB_71006e3a78:
  lVar10 = *(long *)(piVar11 + 4);
  bVar1 = param_1[uVar13];
  if (lVar10 == 0) {
    lVar9 = FUN_71006e37b0();
    *(long *)(piVar11 + 4) = lVar9;
    if (lVar9 == 0) goto LAB_71006e45d0;
    uVar7 = (*(code *)PTR_FUN_7100af36a8)(0xa0);
    lVar10 = *(long *)(piVar11 + 4);
    *(undefined8 *)(lVar9 + 0x68) = uVar7;
    lVar9 = *(long *)(lVar10 + 0x68);
    if (lVar9 == 0) {
      piVar11[3] = 0x1b;
      goto LAB_71006e3af4;
    }
    *(undefined8 *)(lVar10 + 0x70) = 0xa0;
    piVar11[6] = 0;
    piVar11[8] = 0;
    piVar11[9] = 0;
  }
  else {
    lVar9 = *(long *)(lVar10 + 0x68);
  }
  lVar6 = *(long *)(lVar10 + 0x78);
  *(long *)(lVar10 + 0x78) = lVar6 + 1;
  *(byte *)(lVar9 + lVar6) = bVar1;
  if (*(long *)(lVar10 + 0x70) - 1U <= *(ulong *)(lVar10 + 0x78)) {
    lVar9 = (*(code *)PTR_FUN_7100af36b0)
                      (*(undefined8 *)(lVar10 + 0x68),*(long *)(lVar10 + 0x70) + 0xa0);
    if (lVar9 == 0) {
      FUN_71006e37d0(*(undefined8 *)(piVar11 + 4));
      piVar11[4] = 0;
      piVar11[5] = 0;
LAB_71006e45d0:
      piVar11[3] = 0x1b;
      return uVar12;
    }
    *(long *)(lVar10 + 0x68) = lVar9;
    *(long *)(lVar10 + 0x70) = *(long *)(lVar10 + 0x70) + 0xa0;
  }
  if (*piVar11 != 1) {
    if (*piVar11 == 2) {
      uVar3 = piVar11[1];
      if (uVar3 == 2) {
        if (piVar11[2] == 0) {
LAB_71006e3c18:
          if (bVar1 != 0x20) {
LAB_71006e3c20:
            lVar10 = *(long *)(lVar10 + 0x78);
            piVar11[2] = 1;
            piVar11[6] = 1;
            *(long *)(piVar11 + 8) = lVar10 + -1;
          }
        }
        else if (piVar11[2] == 1) {
          iVar5 = piVar11[6];
          piVar11[6] = iVar5 + 1U;
          if (bVar1 == 0x20) {
            *(undefined1 *)
             (*(long *)(lVar10 + 0x68) + (ulong)(iVar5 + 1U) + *(long *)(piVar11 + 8) + -1) = 0;
            lVar9 = *(long *)(lVar10 + 0x68) + *(long *)(piVar11 + 8);
            iVar5 = FUN_710080aec0("<DIR>",lVar9);
            if (iVar5 == 0) {
              lVar9 = *(long *)(piVar11 + 4);
              *(undefined8 *)(lVar10 + 0x28) = 0;
              *(undefined4 *)(lVar10 + 8) = 1;
            }
            else {
              iVar5 = FUN_71006cd340(lVar9,&local_8,10,lVar10 + 0x28);
              if (iVar5 != 0) goto LAB_71006e3cec;
              lVar9 = *(long *)(piVar11 + 4);
              *(undefined4 *)(lVar9 + 8) = 0;
            }
            *(uint *)(lVar9 + 0x60) = *(uint *)(lVar9 + 0x60) | 0x40;
            piVar11[1] = 3;
            piVar11[2] = 0;
            piVar11[6] = 0;
          }
        }
      }
      else if (uVar3 < 3) {
        if (uVar3 == 0) {
          uVar3 = piVar11[6] + 1;
          piVar11[6] = uVar3;
          if (uVar3 < 9) {
            lVar10 = FUN_710080eb40("0123456789-",bVar1);
            if (lVar10 == 0) {
              iVar5 = 0x57;
              goto LAB_71006e43c8;
            }
          }
          else {
            if ((uVar3 != 9) || (bVar1 != 0x20)) goto LAB_71006e3cec;
            piVar11[1] = 1;
            piVar11[2] = 0;
          }
        }
        else {
          iVar5 = piVar11[6];
          piVar11[6] = iVar5 + 1U;
          if (piVar11[2] == 0) {
            iVar5 = FUN_71006af470(bVar1);
            if (iVar5 == 0) {
LAB_71006e42a8:
              piVar11[2] = 1;
            }
          }
          else if (piVar11[2] == 1) {
            if (bVar1 == 0x20) {
              lVar10 = *(long *)(lVar10 + 0x68);
              *(long *)(piVar11 + 0x10) = *(long *)(piVar11 + 8);
              *(undefined1 *)(lVar10 + *(long *)(piVar11 + 8) + (ulong)(iVar5 + 1U) + -1) = 0;
              piVar11[1] = 2;
              piVar11[2] = 0;
              piVar11[6] = 0;
            }
            else {
              lVar10 = FUN_710080eb40("APM0123456789:",bVar1);
              if (lVar10 == 0) goto LAB_71006e3cec;
            }
          }
        }
      }
      else if (uVar3 == 3) {
        iVar5 = piVar11[2];
        if (iVar5 == 1) {
          piVar11[6] = piVar11[6] + 1;
          if (bVar1 == 0xd) {
            lVar9 = *(long *)(lVar10 + 0x68);
            lVar10 = *(long *)(lVar10 + 0x78);
            piVar11[2] = 2;
            *(undefined1 *)(lVar9 + lVar10 + -1) = 0;
          }
          else if (bVar1 == 10) {
            *(undefined1 *)(*(long *)(lVar10 + 0x68) + *(long *)(lVar10 + 0x78) + -1) = 0;
            *(undefined8 *)(piVar11 + 10) = *(undefined8 *)(piVar11 + 8);
            iVar5 = FUN_71006e3820(param_4,lVar10);
            if (iVar5 != 0) goto LAB_71006e43c8;
            piVar11[1] = 0;
            piVar11[2] = 0;
          }
        }
        else if (iVar5 == 2) {
          if (bVar1 != 10) goto LAB_71006e3cec;
          *(undefined8 *)(piVar11 + 10) = *(undefined8 *)(piVar11 + 8);
          iVar5 = FUN_71006e3820(param_4,lVar10);
          if (iVar5 != 0) goto LAB_71006e43c8;
          piVar11[1] = 0;
          piVar11[2] = 0;
        }
        else if (iVar5 == 0) goto LAB_71006e3c18;
      }
      goto LAB_71006e3b68;
    }
    uVar12 = uVar12 + 1;
    goto LAB_71006e3aec;
  }
  uVar3 = piVar11[1];
  if (uVar3 == 5) {
    if (piVar11[2] == 0) {
LAB_71006e3fa8:
      if (bVar1 != 0x20) {
LAB_71006e3fb0:
        lVar10 = *(long *)(lVar10 + 0x78);
        piVar11[2] = 1;
        piVar11[6] = 1;
        *(long *)(piVar11 + 8) = lVar10 + -1;
      }
    }
    else if (piVar11[2] == 1) {
      iVar5 = piVar11[6];
      piVar11[6] = iVar5 + 1U;
      if (bVar1 == 0x20) {
        *(undefined1 *)
         (*(long *)(lVar10 + 0x68) + (ulong)(iVar5 + 1U) + *(long *)(piVar11 + 8) + -1) = 0;
        uVar7 = *(undefined8 *)(piVar11 + 8);
        piVar11[1] = 6;
        piVar11[2] = 0;
        piVar11[6] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        *(undefined8 *)(piVar11 + 0xe) = uVar7;
      }
    }
    goto LAB_71006e3b68;
  }
  if (uVar3 < 6) {
    if (uVar3 != 2) {
      if (2 < uVar3) {
        if (uVar3 == 3) {
          if (piVar11[2] == 0) {
LAB_71006e4350:
            if (bVar1 != 0x20) {
              if (9 < (byte)(bVar1 - 0x30)) {
                iVar5 = 0x57;
                goto LAB_71006e43c8;
              }
              goto LAB_71006e3fb0;
            }
          }
          else if (piVar11[2] == 1) {
            iVar5 = piVar11[6];
            piVar11[6] = iVar5 + 1U;
            if (bVar1 == 0x20) {
              *(undefined1 *)
               (*(long *)(lVar10 + 0x68) + (ulong)(iVar5 + 1U) + *(long *)(piVar11 + 8) + -1) = 0;
              lVar10 = FUN_710081b720(*(long *)(lVar10 + 0x68) + *(long *)(piVar11 + 8),&local_8,10)
              ;
              if ((*local_8 == '\0') && (lVar10 + 0x7fffffffffffffffU < 0xfffffffffffffffe)) {
                lVar9 = *(long *)(piVar11 + 4);
                *(long *)(lVar9 + 0x30) = lVar10;
                *(uint *)(lVar9 + 0x60) = *(uint *)(lVar9 + 0x60) | 0x80;
              }
              piVar11[6] = 0;
              piVar11[8] = 0;
              piVar11[9] = 0;
              piVar11[1] = 4;
              piVar11[2] = 0;
            }
            else if (9 < (byte)(bVar1 - 0x30)) {
              iVar5 = 0x57;
              goto LAB_71006e43c8;
            }
          }
        }
        else {
          if (piVar11[2] == 0) goto LAB_71006e3fa8;
          if (piVar11[2] == 1) {
            iVar5 = piVar11[6];
            piVar11[6] = iVar5 + 1U;
            if (bVar1 == 0x20) {
              *(undefined1 *)
               (*(long *)(lVar10 + 0x68) + (ulong)(iVar5 + 1U) + *(long *)(piVar11 + 8) + -1) = 0;
              uVar7 = *(undefined8 *)(piVar11 + 8);
              piVar11[1] = 5;
              piVar11[2] = 0;
              piVar11[6] = 0;
              piVar11[8] = 0;
              piVar11[9] = 0;
              *(undefined8 *)(piVar11 + 0xc) = uVar7;
            }
          }
        }
        goto LAB_71006e3b68;
      }
      if (uVar3 != 0) {
        if (uVar3 == 1) {
          uVar8 = 1;
          if (bVar1 != 100) {
            if (bVar1 < 0x65) {
              if (bVar1 == 0x62) {
                uVar8 = 3;
              }
              else {
                uVar8 = 4;
                if (bVar1 != 99) {
                  if (bVar1 == 0x2d) {
                    uVar8 = 0;
                  }
                  else {
                    if (bVar1 != 0x44) goto LAB_71006e3cec;
                    uVar8 = 7;
                  }
                }
              }
            }
            else if (bVar1 == 0x70) {
              uVar8 = 5;
            }
            else {
              uVar8 = 6;
              if (bVar1 != 0x73) {
                if (bVar1 != 0x6c) goto LAB_71006e3cec;
                uVar8 = 2;
              }
            }
          }
          *(undefined4 *)(lVar10 + 8) = uVar8;
          piVar11[6] = 0;
          piVar11[1] = 2;
          piVar11[8] = 1;
          piVar11[9] = 0;
        }
        goto LAB_71006e3b68;
      }
      if (piVar11[2] != 0) {
        if (piVar11[2] == 1) {
          uVar3 = piVar11[6];
          piVar11[6] = uVar3 + 1;
          if (bVar1 == 0xd) {
            lVar9 = *(long *)(lVar10 + 0x78);
            piVar11[6] = uVar3;
            *(long *)(lVar10 + 0x78) = lVar9 + -1;
          }
          else if (bVar1 == 10) {
            *(undefined1 *)(*(long *)(lVar10 + 0x68) + (ulong)uVar3) = 0;
            lVar9 = *(long *)(lVar10 + 0x68);
            iVar5 = FUN_710080b4c0("total ",lVar9,6);
            if (iVar5 == 0) {
              pcVar14 = (char *)(lVar9 + 6);
              while (iVar5 = FUN_71006af470(*pcVar14), iVar5 != 0) {
                pcVar14 = pcVar14 + 1;
              }
              while (iVar5 = FUN_71006af4a0(*pcVar14), iVar5 != 0) {
                pcVar14 = pcVar14 + 1;
              }
              if (*pcVar14 == '\0') {
                piVar11[1] = 1;
                *(undefined8 *)(lVar10 + 0x78) = 0;
                goto LAB_71006e3b68;
              }
            }
            goto LAB_71006e3cec;
          }
        }
        goto LAB_71006e3b68;
      }
      if (bVar1 == 0x74) {
        piVar11[2] = 1;
        piVar11[6] = piVar11[6] + 1;
        goto LAB_71006e3b68;
      }
      piVar11[1] = 1;
      *(undefined8 *)(lVar10 + 0x78) = 0;
      goto LAB_71006e3b6c;
    }
    uVar3 = piVar11[6] + 1;
    piVar11[6] = uVar3;
    if (uVar3 < 10) {
      lVar10 = FUN_710080eb40("rwx-tTsS",bVar1);
      if (lVar10 == 0) {
        iVar5 = 0x57;
        goto LAB_71006e43c8;
      }
      goto LAB_71006e3b68;
    }
    if (uVar3 == 10) {
      if (bVar1 == 0x20) {
        uVar3 = 0x100;
        *(undefined1 *)(*(long *)(lVar10 + 0x68) + 10) = 0;
        lVar9 = *(long *)(piVar11 + 8);
        cVar2 = *(char *)(*(long *)(lVar10 + 0x68) + lVar9);
        lVar10 = *(long *)(lVar10 + 0x68) + lVar9;
        if (cVar2 != 'r') {
          uVar3 = (uint)(cVar2 != '-') << 0x18;
        }
        if (*(char *)(lVar10 + 1) == 'w') {
          uVar4 = uVar3 | 0x80;
        }
        else {
          uVar4 = uVar3 | 0x1000000;
          if (*(char *)(lVar10 + 1) == '-') {
            uVar4 = uVar3;
          }
        }
        cVar2 = *(char *)(lVar10 + 2);
        if (cVar2 == 'x') {
          uVar3 = uVar4 | 0x40;
        }
        else if (cVar2 == 's') {
          uVar3 = uVar4 | 0x840;
        }
        else if (cVar2 == 'S') {
          uVar3 = uVar4 | 0x800;
        }
        else {
          uVar3 = uVar4 | 0x1000000;
          if (cVar2 == '-') {
            uVar3 = uVar4;
          }
        }
        if (*(char *)(lVar10 + 3) == 'r') {
          uVar4 = uVar3 | 0x20;
        }
        else {
          uVar4 = uVar3 | 0x1000000;
          if (*(char *)(lVar10 + 3) == '-') {
            uVar4 = uVar3;
          }
        }
        if (*(char *)(lVar10 + 4) == 'w') {
          uVar3 = uVar4 | 0x10;
        }
        else {
          uVar3 = uVar4 | 0x1000000;
          if (*(char *)(lVar10 + 4) == '-') {
            uVar3 = uVar4;
          }
        }
        cVar2 = *(char *)(lVar10 + 5);
        if (cVar2 == 'x') {
          uVar4 = uVar3 | 8;
        }
        else if (cVar2 == 's') {
          uVar4 = uVar3 | 0x408;
        }
        else if (cVar2 == 'S') {
          uVar4 = uVar3 | 0x400;
        }
        else {
          uVar4 = uVar3 | 0x1000000;
          if (cVar2 == '-') {
            uVar4 = uVar3;
          }
        }
        if (*(char *)(lVar10 + 6) == 'r') {
          uVar3 = uVar4 | 4;
        }
        else {
          uVar3 = uVar4 | 0x1000000;
          if (*(char *)(lVar10 + 6) == '-') {
            uVar3 = uVar4;
          }
        }
        if (*(char *)(lVar10 + 7) == 'w') {
          uVar4 = uVar3 | 2;
        }
        else {
          uVar4 = uVar3 | 0x1000000;
          if (*(char *)(lVar10 + 7) == '-') {
            uVar4 = uVar3;
          }
        }
        cVar2 = *(char *)(lVar10 + 8);
        if (cVar2 == 'x') {
          uVar4 = uVar4 | 1;
        }
        else if (cVar2 == 't') {
          uVar4 = uVar4 | 0x201;
        }
        else if (cVar2 == 'T') {
          uVar4 = uVar4 | 0x200;
        }
        else if (cVar2 != '-') goto LAB_71006e3cec;
        lVar10 = *(long *)(piVar11 + 4);
        if (uVar4 >> 0x18 == 0) {
          *(uint *)(lVar10 + 0x18) = uVar4;
          *(uint *)(lVar10 + 0x60) = *(uint *)(lVar10 + 0x60) | 8;
          piVar11[1] = 3;
          piVar11[2] = 0;
          piVar11[6] = 0;
          *(long *)(piVar11 + 0x12) = lVar9;
          goto LAB_71006e3b68;
        }
      }
LAB_71006e3cec:
      iVar5 = 0x57;
LAB_71006e43c8:
      piVar11[3] = iVar5;
      goto LAB_71006e3aec;
    }
  }
  else if (uVar3 == 8) {
    iVar5 = piVar11[2];
    if (iVar5 == 1) {
      iVar5 = piVar11[6];
      piVar11[6] = iVar5 + 1U;
      if (bVar1 == 0xd) {
LAB_71006e4590:
        piVar11[2] = 2;
      }
      else if (bVar1 == 10) {
        *(undefined1 *)
         (*(long *)(lVar10 + 0x68) + (ulong)(iVar5 + 1U) + *(long *)(piVar11 + 8) + -1) = 0;
        piVar11[1] = 1;
        *(undefined8 *)(piVar11 + 10) = *(undefined8 *)(piVar11 + 8);
        iVar5 = FUN_71006e3820(param_4,lVar10);
        if (iVar5 != 0) goto LAB_71006e43c8;
      }
    }
    else {
      if (iVar5 == 2) {
        if (bVar1 != 10) goto LAB_71006e3cec;
        *(undefined1 *)
         (*(long *)(lVar10 + 0x68) + (ulong)(uint)piVar11[6] + *(long *)(piVar11 + 8) + -1) = 0;
        piVar11[1] = 1;
        *(undefined8 *)(piVar11 + 10) = *(undefined8 *)(piVar11 + 8);
        iVar5 = FUN_71006e3820(param_4,lVar10);
        if (iVar5 == 0) goto LAB_71006e3b68;
        goto LAB_71006e43c8;
      }
      if (iVar5 == 0) goto LAB_71006e3fa8;
    }
  }
  else if (uVar3 < 9) {
    if (uVar3 == 6) {
      if (piVar11[2] == 0) goto LAB_71006e4350;
      if (piVar11[2] == 1) {
        iVar5 = piVar11[6];
        piVar11[6] = iVar5 + 1U;
        if (bVar1 == 0x20) {
          *(undefined1 *)
           (*(long *)(lVar10 + 0x68) + (ulong)(iVar5 + 1U) + *(long *)(piVar11 + 8) + -1) = 0;
          iVar5 = FUN_71006cd340(*(long *)(lVar10 + 0x68) + *(long *)(piVar11 + 8),&local_10,10,
                                 &local_8);
          if (iVar5 == 0) {
            if ((*local_10 == '\0') && (local_8 + 0x7fffffffffffffff < (char *)0xfffffffffffffffe))
            {
              lVar10 = *(long *)(piVar11 + 4);
              *(char **)(lVar10 + 0x28) = local_8;
              *(uint *)(lVar10 + 0x60) = *(uint *)(lVar10 + 0x60) | 0x40;
            }
            piVar11[6] = 0;
            piVar11[8] = 0;
            piVar11[9] = 0;
            piVar11[1] = 7;
            piVar11[2] = 0;
          }
        }
        else {
          iVar5 = FUN_71006af4a0(bVar1);
          if (iVar5 == 0) {
            iVar5 = 0x57;
            goto LAB_71006e43c8;
          }
        }
      }
    }
    else if (uVar3 == 7) {
      uVar3 = piVar11[2];
      if (uVar3 == 3) {
        piVar11[6] = piVar11[6] + 1;
        if (bVar1 == 0x20) {
LAB_71006e4538:
          piVar11[2] = 4;
        }
        else {
LAB_71006e43f4:
          iVar5 = FUN_71006af4d0(bVar1);
          if (bVar1 != 0x2e && iVar5 == 0) {
            iVar5 = 0x57;
            goto LAB_71006e43c8;
          }
        }
      }
      else if (uVar3 < 4) {
        if (uVar3 == 1) {
          piVar11[6] = piVar11[6] + 1;
          if (bVar1 == 0x20) goto LAB_71006e4590;
          goto LAB_71006e43f4;
        }
        if (uVar3 == 2) {
          piVar11[6] = piVar11[6] + 1;
          if (bVar1 != 0x20) {
            iVar5 = FUN_71006af4d0(bVar1);
            if (iVar5 != 0) goto LAB_71006e3d44;
            goto LAB_71006e3cec;
          }
        }
        else if ((uVar3 == 0) && (bVar1 != 0x20)) {
          iVar5 = FUN_71006af4d0(bVar1);
          if (iVar5 != 0) goto LAB_71006e3c20;
          goto LAB_71006e3cec;
        }
      }
      else if (uVar3 == 4) {
        piVar11[6] = piVar11[6] + 1;
        if (bVar1 != 0x20) {
          iVar5 = FUN_71006af4d0(bVar1);
          if (iVar5 == 0) goto LAB_71006e3cec;
          piVar11[2] = 5;
        }
      }
      else if (uVar3 == 5) {
        iVar5 = piVar11[6];
        piVar11[6] = iVar5 + 1U;
        if (bVar1 == 0x20) {
          *(undefined1 *)
           (*(long *)(lVar10 + 0x68) + (ulong)(iVar5 + 1U) + *(long *)(piVar11 + 8) + -1) = 0;
          uVar7 = 9;
          if (*(int *)(lVar10 + 8) != 2) {
            uVar7 = 8;
          }
          *(undefined8 *)(piVar11 + 1) = uVar7;
          *(undefined8 *)(piVar11 + 0x10) = *(undefined8 *)(piVar11 + 8);
        }
        else {
          iVar5 = FUN_71006af4d0(bVar1);
          if ((iVar5 == 0) && (bVar1 != 0x2e && bVar1 != 0x3a)) {
            iVar5 = 0x57;
            goto LAB_71006e43c8;
          }
        }
      }
    }
  }
  else if (uVar3 == 9) {
    uVar3 = piVar11[2];
    if (uVar3 == 4) {
      iVar5 = piVar11[6];
      piVar11[6] = iVar5 + 1U;
      if (bVar1 == 0x20) {
        lVar10 = *(long *)(lVar10 + 0x68);
        piVar11[2] = 5;
        *(undefined1 *)(lVar10 + (ulong)(iVar5 + 1U) + *(long *)(piVar11 + 8) + -4) = 0;
        uVar7 = *(undefined8 *)(piVar11 + 8);
        piVar11[6] = 0;
        piVar11[8] = 0;
        piVar11[9] = 0;
        *(undefined8 *)(piVar11 + 10) = uVar7;
      }
      else {
        if (bVar1 == 0xd || bVar1 == 10) goto LAB_71006e3cec;
        piVar11[2] = 1;
      }
    }
    else if (uVar3 < 5) {
      if (uVar3 == 2) {
        piVar11[6] = piVar11[6] + 1;
        if (bVar1 != 0x2d) goto LAB_71006e3ce0;
LAB_71006e3d44:
        piVar11[2] = 3;
      }
      else {
        if (uVar3 == 3) {
          piVar11[6] = piVar11[6] + 1;
          if (bVar1 == 0x3e) goto LAB_71006e4538;
LAB_71006e3ce0:
          if (bVar1 != 0xd && bVar1 != 10) goto LAB_71006e42a8;
          goto LAB_71006e3cec;
        }
        if (uVar3 == 0) goto LAB_71006e3c18;
        if (uVar3 == 1) {
          piVar11[6] = piVar11[6] + 1;
          if (bVar1 == 0x20) goto LAB_71006e4590;
          if (bVar1 == 0xd || bVar1 == 10) {
            iVar5 = 0x57;
            goto LAB_71006e43c8;
          }
        }
      }
    }
    else if (uVar3 == 6) {
      iVar5 = piVar11[6];
      piVar11[6] = iVar5 + 1U;
      if (bVar1 == 0xd) {
        piVar11[2] = 7;
      }
      else if (bVar1 == 10) {
        lVar6 = *(long *)(piVar11 + 8);
        lVar9 = *(long *)(lVar10 + 0x68) + (ulong)(iVar5 + 1U);
        goto LAB_71006e4440;
      }
    }
    else if (uVar3 == 7) {
      if (bVar1 != 10) goto LAB_71006e3cec;
      lVar6 = *(long *)(piVar11 + 8);
      lVar9 = *(long *)(lVar10 + 0x68) + (ulong)(uint)piVar11[6];
LAB_71006e4440:
      *(undefined1 *)(lVar9 + lVar6 + -1) = 0;
      *(undefined8 *)(piVar11 + 0x14) = *(undefined8 *)(piVar11 + 8);
      iVar5 = FUN_71006e3820(param_4,lVar10);
      if (iVar5 != 0) goto LAB_71006e43c8;
      piVar11[1] = 1;
    }
    else if (uVar3 == 5) {
      if (bVar1 == 0xd || bVar1 == 10) goto LAB_71006e3cec;
      lVar10 = *(long *)(lVar10 + 0x78);
      piVar11[2] = 6;
      piVar11[6] = 1;
      *(long *)(piVar11 + 8) = lVar10 + -1;
    }
  }
LAB_71006e3b68:
  uVar13 = uVar13 + 1;
LAB_71006e3b6c:
  if (uVar12 < uVar13 || uVar12 - uVar13 == 0) {
    return uVar12;
  }
  goto LAB_71006e3a78;
}



// ===== FUN_71006e47f0 @ 71006e47f0 (size=400) =====

long * FUN_71006e47f0(undefined8 *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  byte local_1;
  
  plVar3 = (long *)(*(code *)PTR_FUN_7100af36a8)
                             ((ulong)(uint)(*(int *)(param_1 + 3) << 1) +
                              (ulong)*(uint *)(param_1 + 4) + 0x18);
  if (plVar3 != (long *)0x0) {
    uVar1 = *(uint *)(param_1 + 3);
    uVar2 = *(uint *)((long)param_1 + 0x1c);
    plVar4 = plVar3 + 3;
    *plVar3 = (long)param_1;
    plVar3[1] = (long)plVar4;
    plVar3[2] = (long)plVar4 + (ulong)uVar1;
    if (uVar2 < param_3) {
      (*(code *)*param_1)();
      (*(code *)param_1[1])(plVar3[1],param_2,param_3);
      param_2 = (byte *)(plVar3[2] + (ulong)*(uint *)(param_1 + 3));
      (*(code *)param_1[2])(param_2,plVar3[1]);
      param_3 = *(uint *)(param_1 + 4);
      plVar4 = (long *)plVar3[1];
    }
    uVar7 = (ulong)param_3;
    (*(code *)*param_1)(plVar4);
    (*(code *)*param_1)(plVar3[2]);
    if (param_3 != 0) {
      pbVar5 = param_2;
      do {
        local_1 = *pbVar5 ^ 0x36;
        (*(code *)param_1[1])(plVar3[1],&local_1,1);
        pbVar6 = pbVar5 + 1;
        local_1 = *pbVar5 ^ 0x5c;
        (*(code *)param_1[1])(plVar3[2],&local_1,1);
        pbVar5 = pbVar6;
      } while (pbVar6 != param_2 + uVar7);
    }
    if (uVar7 < *(uint *)((long)param_1 + 0x1c)) {
      do {
        uVar7 = uVar7 + 1;
        (*(code *)param_1[1])(plVar3[1],&DAT_71009bb5b2,1);
        (*(code *)param_1[1])(plVar3[2],&DAT_71009bb5b3,1);
      } while (uVar7 < *(uint *)((long)param_1 + 0x1c));
    }
  }
  return plVar3;
}



// ===== FUN_71006e4980 @ 71006e4980 (size=32) =====

undefined8 FUN_71006e4980(long *param_1)

{
  (**(code **)(*param_1 + 8))(param_1[1]);
  return 0;
}



// ===== FUN_71006e49a0 @ 71006e49a0 (size=140) =====

undefined8 FUN_71006e49a0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (param_2 == 0) {
    param_2 = param_1[2] + (ulong)*(uint *)(lVar1 + 0x18);
  }
  (**(code **)(lVar1 + 0x10))(param_2,param_1[1]);
  (**(code **)(lVar1 + 8))(param_1[2],param_2,*(undefined4 *)(lVar1 + 0x20));
  (**(code **)(lVar1 + 0x10))(param_2,param_1[2]);
  (*(code *)PTR_FUN_7100af36a0)(param_1);
  return 0;
}



// ===== FUN_71006e4a30 @ 71006e4a30 (size=760) =====

/* WARNING: Removing unreachable block (ram,0x0071006e4c4c) */
/* WARNING: Type propagation algorithm not settling */

char * FUN_71006e4a30(long param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 *puVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  
  lVar4 = FUN_710081ce00();
  pcVar5 = (char *)(*(code *)PTR_FUN_7100af36a8)(lVar4 + 1);
  pcVar11 = pcVar5;
  if (pcVar5 != (char *)0x0) {
    *pcVar5 = '\0';
    pcVar6 = (char *)(*(code *)PTR_FUN_7100af36b8)(param_1);
    if (pcVar6 == (char *)0x0) {
      pcVar11 = (char *)0x0;
      (*(code *)PTR_FUN_7100af36a0)(pcVar5);
    }
    else {
      if (*pcVar6 == '\0') {
        (*(code *)PTR_FUN_7100af36a0)(pcVar5);
        return pcVar6;
      }
      puVar7 = (undefined1 *)FUN_710080eb40(pcVar6,0x3f);
      pcVar8 = pcVar6;
      pcVar13 = pcVar5;
      if (puVar7 != (undefined1 *)0x0) {
        *puVar7 = 0;
      }
LAB_71006e4ad0:
      do {
        while ((cVar2 = *pcVar8, cVar2 == '.' && (pcVar8[1] == '/'))) {
          pcVar10 = pcVar8 + 2;
          pcVar8 = pcVar8 + 2;
          if (*pcVar10 == '\0') goto joined_r0x0071006e4bd8;
        }
        cVar1 = *pcVar8;
        if ((cVar1 == '.') && ((pcVar8[1] == '.' && (pcVar8[2] == '/')))) {
          cVar2 = pcVar8[3];
          pcVar10 = pcVar8 + 3;
        }
        else {
          if (cVar1 == '/') {
            if ((pcVar8[1] == '.') && (pcVar8[2] == '/')) {
              pcVar8 = pcVar8 + 2;
              goto LAB_71006e4ad0;
            }
            if ((pcVar8[1] == '.') && (pcVar8[2] == '\0')) {
              pcVar8[1] = '/';
              pcVar8 = pcVar8 + 1;
              goto LAB_71006e4ad0;
            }
          }
          iVar3 = FUN_710080b4c0(&DAT_710084bda8,pcVar8,4);
          pcVar10 = pcVar8 + 3;
          if (iVar3 == 0) {
            do {
              if (pcVar13 <= pcVar5) break;
              pcVar13 = pcVar13 + -1;
            } while (*pcVar13 != '/');
            *pcVar13 = '\0';
            cVar2 = pcVar8[3];
          }
          else {
            iVar3 = FUN_710080aec0(&DAT_710083bc80,pcVar8);
            if (iVar3 == 0) {
              pcVar10 = pcVar8 + 2;
              *pcVar10 = '/';
              do {
                if (pcVar13 <= pcVar5) break;
                pcVar13 = pcVar13 + -1;
              } while (*pcVar13 != '/');
              *pcVar13 = '\0';
              cVar2 = pcVar8[2];
            }
            else {
              if (((cVar2 == '.') && (pcVar8[1] == '\0')) ||
                 ((cVar1 == '.' && ((pcVar8[1] == '.' && (pcVar8[2] == '\0')))))) {
                *pcVar8 = '\0';
                *pcVar5 = '\0';
                break;
              }
              cVar2 = *pcVar8;
              pcVar12 = pcVar13;
              do {
                pcVar9 = pcVar8;
                pcVar13 = pcVar12 + 1;
                *pcVar12 = cVar2;
                pcVar10 = pcVar9 + 1;
                cVar2 = *pcVar10;
                pcVar8 = pcVar10;
                pcVar12 = pcVar13;
              } while (cVar2 != '/' && cVar2 != '\0');
              *pcVar13 = '\0';
              cVar2 = pcVar9[1];
            }
          }
        }
        pcVar8 = pcVar10;
      } while (cVar2 != '\0');
joined_r0x0071006e4bd8:
      if (puVar7 != (undefined1 *)0x0) {
        lVar4 = FUN_710081ce00(puVar7 + (param_1 - (long)pcVar6));
        FUN_710080f900(pcVar13,puVar7 + (param_1 - (long)pcVar6),lVar4 + 1);
      }
      (*(code *)PTR_FUN_7100af36a0)(pcVar6);
    }
  }
  return pcVar11;
}



// ===== FUN_71006e4d30 @ 71006e4d30 (size=300) =====

undefined8 FUN_71006e4d30(long *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long local_20;
  long local_18;
  char *local_10;
  undefined1 auStack_8 [8];
  
  lVar4 = *param_1;
  if (((*(ushort *)(lVar4 + 0x162c) >> 10 & 1) == 0) || (*(long *)(lVar4 + 0x1578) == 0)) {
    *(undefined8 *)(lVar4 + 0xe0) = 0xffffffffffffffff;
    return 0;
  }
  iVar2 = FUN_71006cd340(*(long *)(lVar4 + 0x1578),&local_10,0,&local_20);
  if (iVar2 != 1) {
    cVar1 = *local_10;
    while ((cVar1 != '\0' && ((iVar3 = FUN_71006af470(), iVar3 != 0 || (*local_10 == '-'))))) {
      cVar1 = local_10[1];
      local_10 = local_10 + 1;
    }
    iVar3 = FUN_71006cd340(local_10,auStack_8,0,&local_18);
    if (iVar3 != 1) {
      if (iVar2 == 0 && iVar3 == 2) {
        *(long *)(lVar4 + 0x1580) = local_20;
        return 0;
      }
      if (iVar3 == 0 && iVar2 == 2) {
        *(long *)(lVar4 + 0xe0) = local_18;
        *(long *)(lVar4 + 0x1580) = -local_18;
        return 0;
      }
      if ((local_20 <= local_18) && (local_18 - local_20 != 0x7fffffffffffffff)) {
        *(long *)(lVar4 + 0x1580) = local_20;
        *(long *)(lVar4 + 0xe0) = (local_18 - local_20) + 1;
        return 0;
      }
    }
  }
  return 0x21;
}



// ===== FUN_71006e4eb0 @ 71006e4eb0 (size=184) =====

int FUN_71006e4eb0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_8;
  undefined1 auStack_7 [7];
  
  local_8 = 0x60;
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  FUN_71006ed220(auStack_7,*(undefined4 *)(param_1 + 0x44));
  iVar1 = FUN_71006f87d0(uVar2,&local_8,5,0,0);
  if (iVar1 == -0x25) {
    FUN_71006ed140(uVar2,0xffffffdb,"Would block sending EOF");
  }
  else {
    if (iVar1 != 0) {
      iVar1 = FUN_71006ed140(uVar2,0xfffffff9,"Unable to send EOF on channel");
      return iVar1;
    }
    *(undefined1 *)(param_1 + 0x41) = 1;
  }
  return iVar1;
}



// ===== FUN_71006e4f70 @ 71006e4f70 (size=76) =====

uint FUN_71006e4f70(long param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_1 + 0x210);
  lVar2 = FUN_71006ed660(param_1 + 0x200);
  while (lVar2 != 0) {
    if (uVar1 < *(uint *)(lVar2 + 0x30)) {
      uVar1 = *(uint *)(lVar2 + 0x30);
    }
    lVar2 = FUN_71006ed670();
  }
  *(uint *)(param_1 + 0x210) = uVar1 + 1;
  return uVar1;
}



// ===== FUN_71006e4fc0 @ 71006e4fc0 (size=148) =====

long FUN_71006e4fc0(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_71006ed660(param_1 + 0x200);
  while (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x30) == param_2) {
      return lVar1;
    }
    lVar1 = FUN_71006ed670();
  }
  lVar1 = FUN_71006ed660(param_1 + 0x218);
  do {
    if (lVar1 == 0) {
      return 0;
    }
    lVar2 = FUN_71006ed660(lVar1 + 0x30);
    while (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x30) == param_2) {
        return lVar2;
      }
      lVar2 = FUN_71006ed670();
    }
    lVar1 = FUN_71006ed670(lVar1);
  } while( true );
}



// ===== FUN_71006e5060 @ 71006e5060 (size=1340) =====

undefined8
FUN_71006e5060(long param_1,undefined8 param_2,uint param_3,undefined4 param_4,undefined4 param_5,
              undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_10 [8];
  undefined1 *local_8;
  
  iVar1 = *(int *)(param_1 + 0xd1e8);
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 0xd1f8) = 0;
    *(undefined8 *)(param_1 + 0xd200) = 0;
    *(ulong *)(param_1 + 0xd208) = (ulong)(param_3 + 0x11);
    *(undefined8 *)(param_1 + 0xd210) = 0;
    uVar2 = FUN_71006e4f70();
    *(undefined4 *)(param_1 + 0xd220) = uVar2;
    *(undefined8 *)(param_1 + 0xd1f0) = 0;
    lVar6 = FUN_71006ed6b0(param_1,0x2f0);
    *(long *)(param_1 + 0xd1f8) = lVar6;
    if (lVar6 == 0) {
      FUN_71006ed140(param_1,0xfffffffa,"Unable to allocate space for channel data");
      return 0;
    }
    pcVar7 = *(code **)(param_1 + 8);
    *(uint *)(lVar6 + 0x20) = param_3;
    uVar5 = (*pcVar7)(param_3,param_1);
    lVar8 = *(long *)(param_1 + 0xd1f8);
    *(undefined8 *)(lVar6 + 0x18) = uVar5;
    lVar6 = *(long *)(lVar8 + 0x18);
    if (lVar6 == 0) {
      FUN_71006ed140(param_1,0xfffffffa,"Failed allocating memory for channel type name");
      (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0xd1f8),param_1);
      *(undefined8 *)(param_1 + 0xd1f8) = 0;
      return 0;
    }
    FUN_710080f900(lVar6,param_2);
    lVar6 = *(long *)(param_1 + 0xd1f8);
    *(undefined4 *)(lVar6 + 0x30) = *(undefined4 *)(param_1 + 0xd220);
    *(undefined4 *)(lVar6 + 0x48) = param_4;
    *(undefined4 *)(lVar6 + 0x4c) = param_4;
    *(undefined4 *)(lVar6 + 0x50) = param_5;
    *(long *)(lVar6 + 0x60) = param_1;
    FUN_71006ed630(param_1 + 0x200);
    local_8 = (undefined1 *)(**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0xd208),param_1);
    *(undefined1 **)(param_1 + 0xd200) = local_8;
    if (local_8 != (undefined1 *)0x0) {
      *local_8 = 0x5a;
      local_8 = local_8 + 1;
      FUN_71006ed260(&local_8,param_2,param_3);
      FUN_71006ed230(&local_8,*(undefined4 *)(param_1 + 0xd220));
      FUN_71006ed230(&local_8,param_4);
      FUN_71006ed230(&local_8,param_5);
      *(undefined4 *)(param_1 + 0xd1e8) = 2;
      goto LAB_71006e52dc;
    }
    FUN_71006ed140(param_1,0xfffffffa,"Unable to allocate temporary space for packet");
LAB_71006e50ac:
    pcVar4 = *(char **)(param_1 + 0xd210);
    if (pcVar4 == (char *)0x0) goto LAB_71006e50c4;
  }
  else {
    if (iVar1 == 2) {
LAB_71006e52dc:
      iVar1 = FUN_71006f87d0(param_1,*(undefined8 *)(param_1 + 0xd200),
                             *(undefined8 *)(param_1 + 0xd208),param_6,param_7);
      if (iVar1 == -0x25) {
        FUN_71006ed140(param_1,0xffffffdb,"Would block sending channel-open request");
        return 0;
      }
      if (iVar1 != 0) {
        FUN_71006ed140(param_1,iVar1,"Unable to send channel-open request");
        goto LAB_71006e50ac;
      }
      *(undefined4 *)(param_1 + 0xd1e8) = 3;
    }
    else if (iVar1 != 3) goto LAB_71006e50ac;
    iVar1 = FUN_71006ef080(param_1,&DAT_71009bb5d8,param_1 + 0xd210,param_1 + 0xd218,1,
                           *(long *)(param_1 + 0xd200) + (ulong)param_3 + 5,4,param_1 + 0xd1f0);
    if (iVar1 == -0x25) {
      FUN_71006ed140(param_1,0xffffffdb,"Would block");
      return 0;
    }
    if (iVar1 != 0) {
      FUN_71006ed140(param_1,iVar1,"Unexpected error");
      goto LAB_71006e50ac;
    }
    if (*(ulong *)(param_1 + 0xd218) == 0) {
LAB_71006e5450:
      FUN_71006ed140(param_1,0xfffffff2,"Unexpected packet size");
      goto LAB_71006e50ac;
    }
    pcVar4 = *(char **)(param_1 + 0xd210);
    if (*pcVar4 == '[') {
      if (0x10 < *(ulong *)(param_1 + 0xd218)) {
        lVar9 = *(long *)(param_1 + 0xd1f8);
        uVar2 = FUN_71006ed200(pcVar4 + 5);
        lVar6 = *(long *)(param_1 + 0xd210);
        lVar8 = *(long *)(param_1 + 0xd1f8);
        *(undefined4 *)(lVar9 + 0x44) = uVar2;
        uVar2 = FUN_71006ed200(lVar6 + 9);
        lVar6 = *(long *)(param_1 + 0xd210);
        lVar9 = *(long *)(param_1 + 0xd1f8);
        *(undefined4 *)(lVar8 + 0x38) = uVar2;
        uVar2 = FUN_71006ed200(lVar6 + 9);
        lVar6 = *(long *)(param_1 + 0xd210);
        lVar8 = *(long *)(param_1 + 0xd1f8);
        *(undefined4 *)(lVar9 + 0x34) = uVar2;
        uVar2 = FUN_71006ed200(lVar6 + 0xd);
        pcVar7 = *(code **)(param_1 + 0x18);
        *(undefined4 *)(lVar8 + 0x3c) = uVar2;
        (*pcVar7)(*(undefined8 *)(param_1 + 0xd200),param_1);
        *(undefined8 *)(param_1 + 0xd200) = 0;
        (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0xd210),param_1);
        *(undefined8 *)(param_1 + 0xd210) = 0;
        *(undefined4 *)(param_1 + 0xd1e8) = 0;
        return *(undefined8 *)(param_1 + 0xd1f8);
      }
      goto LAB_71006e5450;
    }
    if (*pcVar4 == '\\') {
      uVar3 = FUN_71006ed200(pcVar4 + 5);
      if (uVar3 == 3) {
        FUN_71006ed140(param_1,0xffffffeb,"Channel open failure (unknown channel type)");
      }
      else if (uVar3 < 4) {
        if (uVar3 == 1) {
          FUN_71006ed140(param_1,0xffffffeb,"Channel open failure (administratively prohibited)");
        }
        else {
          if (uVar3 != 2) goto LAB_71006e5564;
          FUN_71006ed140(param_1,0xffffffeb,"Channel open failure (connect failed)");
        }
      }
      else if (uVar3 == 4) {
        FUN_71006ed140(param_1,0xffffffeb,"Channel open failure (resource shortage)");
      }
      else {
LAB_71006e5564:
        FUN_71006ed140(param_1,0xffffffeb,"Channel open failure");
      }
      goto LAB_71006e50ac;
    }
  }
  (**(code **)(param_1 + 0x18))(pcVar4,param_1);
  *(undefined8 *)(param_1 + 0xd210) = 0;
LAB_71006e50c4:
  if (*(long *)(param_1 + 0xd200) != 0) {
    (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0xd200),param_1);
    *(undefined8 *)(param_1 + 0xd200) = 0;
  }
  if (*(long *)(param_1 + 0xd1f8) != 0) {
    (**(code **)(param_1 + 0x18))(*(undefined8 *)(*(long *)(param_1 + 0xd1f8) + 0x18),param_1);
    FUN_71006ed680(*(undefined8 *)(param_1 + 0xd1f8));
    FUN_71006ed220(auStack_10,*(undefined4 *)(*(long *)(param_1 + 0xd1f8) + 0x30));
    while ((iVar1 = FUN_71006eec50(param_1,0x5e,param_1 + 0xd210,param_1 + 0xd218,1,auStack_10,4),
           -1 < iVar1 ||
           (iVar1 = FUN_71006eec50(param_1,0x5f,param_1 + 0xd210,param_1 + 0xd218,1,auStack_10,4),
           -1 < iVar1))) {
      (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0xd210),param_1);
      *(undefined8 *)(param_1 + 0xd210) = 0;
    }
    (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0xd1f8),param_1);
    *(undefined8 *)(param_1 + 0xd1f8) = 0;
  }
  *(undefined4 *)(param_1 + 0xd1e8) = 0;
  return 0;
}



// ===== FUN_71006e55a0 @ 71006e55a0 (size=636) =====

ulong FUN_71006e55a0(long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5)

{
  undefined1 *puVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 *local_18;
  char *local_10;
  long local_8;
  
  iVar2 = *(int *)(param_1 + 0x210);
  lVar7 = *(long *)(param_1 + 0x60);
  if (iVar2 == 0x10) {
    uVar5 = FUN_71006ed140(lVar7,0xffffffd9,"Channel can not be reused");
    return uVar5;
  }
  if (iVar2 == 0) {
    lVar6 = param_3 + 10;
    *(undefined8 *)(param_1 + 0x230) = 0;
    *(long *)(param_1 + 0x220) = lVar6;
    if (param_4 != 0) {
      lVar6 = param_3 + 0xe;
      *(long *)(param_1 + 0x220) = lVar6;
    }
    local_18 = (undefined1 *)(**(code **)(lVar7 + 8))(lVar6,lVar7);
    *(undefined1 **)(param_1 + 0x218) = local_18;
    if (local_18 == (undefined1 *)0x0) {
      uVar5 = FUN_71006ed140(lVar7,0xfffffffa,
                             "Unable to allocate memory for channel-process request");
      return uVar5 & 0xffffffff;
    }
    *local_18 = 0x62;
    local_18 = local_18 + 1;
    FUN_71006ed230(&local_18,*(undefined4 *)(param_1 + 0x44));
    FUN_71006ed260(&local_18,param_2,param_3);
    puVar1 = local_18 + 1;
    *local_18 = 1;
    local_18 = puVar1;
    if (param_4 != 0) {
      FUN_71006ed230(&local_18,param_5 & 0xffffffff);
    }
    *(undefined4 *)(param_1 + 0x210) = 2;
LAB_71006e56b4:
    uVar4 = FUN_71006f87d0(lVar7,*(undefined8 *)(param_1 + 0x218),*(undefined8 *)(param_1 + 0x220),
                           param_4,param_5);
    uVar5 = (ulong)uVar4;
    if (uVar4 == 0xffffffdb) {
      FUN_71006ed140(lVar7,uVar5,"Would block sending channel request");
      return uVar5;
    }
    if (uVar4 != 0) {
      (**(code **)(lVar7 + 0x18))(*(undefined8 *)(param_1 + 0x218),lVar7);
      *(undefined8 *)(param_1 + 0x218) = 0;
      *(undefined4 *)(param_1 + 0x210) = 0x10;
      uVar5 = FUN_71006ed140(lVar7,uVar5,"Unable to send channel request");
      return uVar5 & 0xffffffff;
    }
    (**(code **)(lVar7 + 0x18))();
    *(undefined8 *)(param_1 + 0x218) = 0;
    FUN_71006ed220(param_1 + 0x228,*(undefined4 *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x210) = 3;
  }
  else {
    if (iVar2 == 2) goto LAB_71006e56b4;
    if (iVar2 != 3) goto LAB_71006e55e4;
  }
  uVar4 = FUN_71006ef080(lVar7,&DAT_71009bb5d0,&local_10,&local_8,1,param_1 + 0x228,4,
                         param_1 + 0x230);
  uVar5 = (ulong)uVar4;
  if (uVar4 == 0xffffffdb) {
    return uVar5;
  }
  if ((uVar4 != 0) || (local_8 == 0)) {
    *(undefined4 *)(param_1 + 0x210) = 0x10;
    uVar5 = FUN_71006ed140(lVar7,uVar5,"Failed waiting for channel success");
    return uVar5 & 0xffffffff;
  }
  cVar3 = *local_10;
  (**(code **)(lVar7 + 0x18))(local_10,lVar7);
  *(undefined4 *)(param_1 + 0x210) = 0x10;
  if (cVar3 == 'c') {
    return uVar5;
  }
LAB_71006e55e4:
  uVar5 = FUN_71006ed140(lVar7,0xffffffea,"Unable to complete request for channel-process-startup");
  return uVar5 & 0xffffffff;
}



// ===== FUN_71006e5820 @ 71006e5820 (size=312) =====

ulong FUN_71006e5820(long param_1,int param_2,char param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0x4c);
  }
  if (*(int *)(param_1 + 0x250) == 0) {
    iVar1 = *(int *)(param_1 + 0x58);
    if ((param_3 == '\0') && ((uint)(param_2 + iVar1) < 0x400)) {
      *(int *)(param_1 + 0x58) = param_2 + iVar1;
      return 0;
    }
    if (param_2 == 0 && iVar1 == 0) {
      return 0;
    }
    param_2 = param_2 + iVar1;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined1 *)(param_1 + 0x254) = 0x5d;
    FUN_71006ed220(param_1 + 0x255,*(undefined4 *)(param_1 + 0x44));
    FUN_71006ed220(param_1 + 0x259,param_2);
    *(undefined4 *)(param_1 + 0x250) = 2;
  }
  uVar2 = FUN_71006f87d0(*(undefined8 *)(param_1 + 0x60),param_1 + 0x254,9,0,0);
  if (uVar2 == 0xffffffdb) {
    FUN_71006ed140(*(undefined8 *)(param_1 + 0x60),0xffffffdb,"Would block sending window adjust");
  }
  else {
    if (uVar2 != 0) {
      *(int *)(param_1 + 0x58) = param_2;
      uVar3 = FUN_71006ed140(*(undefined8 *)(param_1 + 0x60),0xfffffff9,
                             "Unable to send transfer-window adjustment packet, deferring");
      return uVar3;
    }
    *(undefined4 *)(param_1 + 0x250) = 0;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + param_2;
  }
  return (ulong)uVar2;
}



// ===== FUN_71006e5960 @ 71006e5960 (size=488) =====

undefined8 FUN_71006e5960(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  if (*(int *)(param_1 + 0x238) == 0) {
    lVar7 = FUN_71006ed660(*(long *)(param_1 + 0x60) + 0x1f0);
    *(undefined8 *)(param_1 + 0x240) = 0;
    *(undefined8 *)(param_1 + 0x248) = 0;
    if (lVar7 == 0) {
      lVar7 = 0;
      uVar5 = 0;
      iVar4 = 0;
    }
    else {
      do {
        while( true ) {
          lVar6 = FUN_71006ed670(lVar7);
          if (*(ulong *)(lVar7 + 0x20) != 0) break;
joined_r0x0071006e5b08:
          lVar7 = lVar6;
          if (lVar6 == 0) goto LAB_71006e5a44;
        }
        cVar3 = **(char **)(lVar7 + 0x18);
        if ((1 < (byte)(cVar3 + 0xa2U) || *(ulong *)(lVar7 + 0x20) < 5) ||
           (iVar4 = FUN_71006ed200(*(char **)(lVar7 + 0x18) + 1), iVar4 != *(int *)(param_1 + 0x30))
           ) goto joined_r0x0071006e5b08;
        if (cVar3 != '^') {
          if (*(ulong *)(lVar7 + 0x20) < 9) {
            *(undefined4 *)(param_1 + 0x238) = 0;
            uVar5 = FUN_71006ed140(*(undefined8 *)(param_1 + 0x60),0xfffffff2,
                                   "Unexpected packet length");
            return uVar5;
          }
          iVar4 = FUN_71006ed200(*(long *)(lVar7 + 0x18) + 5);
          if ((param_2 + 2U < 2) || (iVar4 == param_2)) goto LAB_71006e5aa0;
          goto joined_r0x0071006e5b08;
        }
        if ((param_2 + 2U & 0xfffffffd) == 0) {
LAB_71006e5aa0:
          lVar1 = *(long *)(lVar7 + 0x20);
          lVar2 = *(long *)(lVar7 + 0x28);
          *(long *)(param_1 + 0x240) = *(long *)(param_1 + 0x240) + -0xd + lVar1;
          uVar5 = *(undefined8 *)(lVar7 + 0x18);
          *(long *)(param_1 + 0x248) = (lVar1 + *(long *)(param_1 + 0x248)) - lVar2;
          (**(code **)(*(long *)(param_1 + 0x60) + 0x18))(uVar5);
          FUN_71006ed680(lVar7);
          (**(code **)(*(long *)(param_1 + 0x60) + 0x18))(lVar7);
          goto joined_r0x0071006e5b08;
        }
        lVar7 = lVar6;
      } while (lVar6 != 0);
LAB_71006e5a44:
      uVar5 = *(undefined8 *)(param_1 + 0x248);
      iVar4 = (int)uVar5;
      lVar7 = *(long *)(param_1 + 0x240);
    }
    *(undefined4 *)(param_1 + 0x238) = 2;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x240);
    uVar5 = *(undefined8 *)(param_1 + 0x248);
    iVar4 = (int)uVar5;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) - iVar4;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - iVar4;
  if (lVar7 != 0) {
    uVar5 = FUN_71006e5820(param_1,lVar7,1,0);
    if ((int)uVar5 == -0x25) {
      return uVar5;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x248);
  }
  *(undefined4 *)(param_1 + 0x238) = 0;
  return uVar5;
}



// ===== FUN_71006e5b50 @ 71006e5b50 (size=128) =====

int FUN_71006e5b50(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return -0x27;
  }
  uVar2 = FUN_710081c880(0);
  while( true ) {
    iVar1 = FUN_71006e5960(param_1,param_2);
    if (iVar1 != -0x25) {
      return iVar1;
    }
    if (*(int *)(*(long *)(param_1 + 0x60) + 0x94) == 0) break;
    iVar1 = FUN_71006f0950(*(long *)(param_1 + 0x60),uVar2);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  return -0x25;
}



// ===== FUN_71006e5bd0 @ 71006e5bd0 (size=28) =====

undefined8 FUN_71006e5bd0(long param_1,undefined1 param_2)

{
  if (*(int *)(param_1 + 0x2a8) == 0) {
    *(undefined1 *)(param_1 + 0x56) = param_2;
  }
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  return 0;
}



// ===== FUN_71006e5bf0 @ 71006e5bf0 (size=820) =====

/* WARNING: Type propagation algorithm not settling */

ulong FUN_71006e5bf0(long param_1,int param_2,long param_3,ulong param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  lVar9 = *(long *)(param_1 + 0x60);
  if ((*(int *)(param_1 + 0x260) == 0xb) ||
     ((ulong)*(uint *)(param_1 + 0x4c) < (*(uint *)(param_1 + 0x48) >> 2) * 3 + param_4)) {
    uVar2 = (*(uint *)(param_1 + 0x48) + (int)param_4) - *(uint *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x260) = 0xb;
    if (uVar2 < 0x400) {
      uVar2 = 0x400;
    }
    iVar3 = FUN_71006e5820(param_1,uVar2,0,0);
    if (iVar3 != 0) {
      return (long)iVar3;
    }
    *(undefined4 *)(param_1 + 0x260) = 0;
  }
  do {
    iVar3 = FUN_71006f8110(lVar9);
  } while (0 < iVar3);
  if (iVar3 < 0 && iVar3 != -0x25) {
    iVar3 = FUN_71006ed140(lVar9,iVar3,"transport read");
    return (long)iVar3;
  }
  uVar10 = 0;
  lVar5 = FUN_71006ed660(lVar9 + 0x1f0);
  if (param_4 != 0 && lVar5 != 0) {
    do {
      while (lVar6 = FUN_71006ed670(lVar5), 4 < *(ulong *)(lVar5 + 0x20)) {
        iVar4 = FUN_71006ed200(*(long *)(lVar5 + 0x18) + 1);
        *(int *)(param_1 + 0x264) = iVar4;
        if (param_2 == 0) {
          pcVar7 = *(char **)(lVar5 + 0x18);
          if (*pcVar7 == '^') {
            if (iVar4 == *(int *)(param_1 + 0x30)) goto LAB_71006e5db8;
          }
          else if (((*pcVar7 == '_') && (iVar4 == *(int *)(param_1 + 0x30))) &&
                  (*(char *)(param_1 + 0x56) == '\x02')) {
LAB_71006e5db8:
            lVar1 = param_3 + uVar10;
            uVar8 = *(long *)(lVar5 + 0x20) - *(long *)(lVar5 + 0x28);
            if (param_4 - uVar10 < uVar8) {
              FUN_710080f900(lVar1,pcVar7 + *(long *)(lVar5 + 0x28));
              *(ulong *)(lVar5 + 0x28) = *(long *)(lVar5 + 0x28) + (param_4 - uVar10);
              goto LAB_71006e5ecc;
            }
            uVar10 = uVar10 + uVar8;
            FUN_710080f900(lVar1,pcVar7 + *(long *)(lVar5 + 0x28),uVar8);
            *(ulong *)(lVar5 + 0x28) = *(long *)(lVar5 + 0x28) + uVar8;
            FUN_71006ed680(lVar5);
            (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar5 + 0x18),lVar9);
            (**(code **)(lVar9 + 0x18))(lVar5,lVar9);
          }
        }
        else if (((**(char **)(lVar5 + 0x18) == '_') && (iVar4 == *(int *)(param_1 + 0x30))) &&
                ((8 < *(ulong *)(lVar5 + 0x20) &&
                 (iVar4 = FUN_71006ed200(*(char **)(lVar5 + 0x18) + 5), iVar4 == param_2)))) {
          pcVar7 = *(char **)(lVar5 + 0x18);
          goto LAB_71006e5db8;
        }
        lVar5 = lVar6;
        if (lVar6 == 0 || param_4 <= uVar10) goto LAB_71006e5ce4;
      }
      lVar5 = lVar6;
    } while (uVar10 < param_4 && lVar6 != 0);
LAB_71006e5ce4:
    param_4 = uVar10;
    if (param_4 != 0) {
LAB_71006e5ecc:
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) - (int)param_4;
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - (int)param_4;
      return param_4;
    }
  }
  uVar10 = 0;
  if ((*(ulong *)(param_1 + 0x50) & 0xffff00000000) == 0 && iVar3 == -0x25) {
    iVar3 = FUN_71006ed140(lVar9,0xffffffdb,"would block");
    uVar10 = (ulong)iVar3;
  }
  return uVar10;
}



// ===== FUN_71006e5f30 @ 71006e5f30 (size=264) =====

long FUN_71006e5f30(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  
  lVar3 = FUN_71006ed660(*(long *)(param_1 + 0x60) + 0x1f0);
  do {
    while( true ) {
      do {
        lVar1 = lVar3;
        if (lVar1 == 0) {
          return 0;
        }
        lVar3 = FUN_71006ed670(lVar1);
      } while (*(ulong *)(lVar1 + 0x20) < 5);
      iVar2 = FUN_71006ed200(*(long *)(lVar1 + 0x18) + 1);
      pcVar4 = *(char **)(lVar1 + 0x18);
      if (param_2 != 0) break;
      if (*pcVar4 == '^') {
        if (*(int *)(param_1 + 0x30) == iVar2) goto LAB_71006e5fe0;
      }
      else if (((*pcVar4 == '_') && (*(int *)(param_1 + 0x30) == iVar2)) &&
              (*(char *)(param_1 + 0x56) == '\x02')) goto LAB_71006e5fe0;
    }
  } while ((((*pcVar4 != '_') || (*(int *)(param_1 + 0x30) != iVar2)) ||
           (*(ulong *)(lVar1 + 0x20) < 9)) || (iVar2 = FUN_71006ed200(pcVar4 + 5), iVar2 != param_2)
          );
LAB_71006e5fe0:
  return *(long *)(lVar1 + 0x20) - *(long *)(lVar1 + 0x28);
}



// ===== FUN_71006e6040 @ 71006e6040 (size=588) =====

long FUN_71006e6040(long param_1,int param_2,undefined8 param_3,ulong param_4)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 *local_8;
  
  lVar6 = *(long *)(param_1 + 0x60);
  if (*(int *)(param_1 + 0x268) == 0) {
    puVar1 = (undefined1 *)(param_1 + 0x26c);
    local_8 = puVar1;
    if (*(char *)(param_1 + 0x40) != '\0') {
      iVar2 = FUN_71006ed140(lVar6,0xffffffe6,"We\'ve already closed this channel");
      return (long)iVar2;
    }
    if (*(char *)(param_1 + 0x41) != '\0') {
      iVar2 = FUN_71006ed140(lVar6,0xffffffe5,"EOF has already been received, data might be ignored"
                            );
      return (long)iVar2;
    }
    do {
      iVar2 = FUN_71006f8110(lVar6);
    } while (0 < iVar2);
    if (iVar2 < 0 && iVar2 != -0x25) {
      iVar2 = FUN_71006ed140(*(undefined8 *)(param_1 + 0x60),iVar2,
                             "Failure while draining incoming flow");
      return (long)iVar2;
    }
    if (*(int *)(param_1 + 0x38) == 0) {
      lVar5 = -0x25;
      if (iVar2 != -0x25) {
        lVar5 = 0;
      }
      *(undefined4 *)(lVar6 + 0x230) = 1;
      return lVar5;
    }
    if (0x7fbc < param_4) {
      param_4 = 0x7fbc;
    }
    *(ulong *)(param_1 + 0x288) = param_4;
    if (param_2 == 0) {
      *local_8 = 0x5e;
      local_8 = local_8 + 1;
      FUN_71006ed230(&local_8,*(undefined4 *)(param_1 + 0x44));
    }
    else {
      *local_8 = 0x5f;
      local_8 = local_8 + 1;
      FUN_71006ed230(&local_8,*(undefined4 *)(param_1 + 0x44));
      FUN_71006ed230(&local_8,param_2);
    }
    uVar3 = (ulong)*(uint *)(param_1 + 0x38);
    uVar4 = *(ulong *)(param_1 + 0x288);
    if (uVar3 < *(ulong *)(param_1 + 0x288)) {
      *(ulong *)(param_1 + 0x288) = uVar3;
      uVar4 = uVar3;
    }
    uVar3 = (ulong)*(uint *)(param_1 + 0x3c);
    if (uVar3 < uVar4) {
      *(ulong *)(param_1 + 0x288) = uVar3;
    }
    else {
      uVar3 = uVar4 & 0xffffffff;
    }
    FUN_71006ed230(&local_8,uVar3);
    *(undefined4 *)(param_1 + 0x268) = 2;
    lVar5 = (long)local_8 - (long)puVar1;
    *(long *)(param_1 + 0x280) = lVar5;
  }
  else {
    if (*(int *)(param_1 + 0x268) != 2) {
      return -0x22;
    }
    lVar5 = *(long *)(param_1 + 0x280);
  }
  iVar2 = FUN_71006f87d0(lVar6,param_1 + 0x26c,lVar5,param_3,*(undefined8 *)(param_1 + 0x288));
  if (iVar2 == -0x25) {
    iVar2 = FUN_71006ed140(lVar6,0xffffffdb,"Unable to send channel data");
    lVar6 = (long)iVar2;
  }
  else {
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x268) = 0;
      iVar2 = FUN_71006ed140(lVar6,iVar2,"Unable to send channel data");
      return (long)iVar2;
    }
    *(undefined4 *)(param_1 + 0x268) = 0;
    lVar6 = *(long *)(param_1 + 0x288);
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) - (int)lVar6;
  }
  return lVar6;
}



// ===== FUN_71006e6290 @ 71006e6290 (size=152) =====

long FUN_71006e6290(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 == 0) {
    return -0x27;
  }
  uVar2 = FUN_710081c880(0);
  while( true ) {
    lVar3 = FUN_71006e6040(param_1,param_2,param_3,param_4);
    if (lVar3 != -0x25) {
      return lVar3;
    }
    if (*(int *)(*(long *)(param_1 + 0x60) + 0x94) == 0) break;
    iVar1 = FUN_71006f0950(*(long *)(param_1 + 0x60),uVar2);
    if (iVar1 != 0) {
      return (long)iVar1;
    }
  }
  return -0x25;
}



// ===== FUN_71006e6330 @ 71006e6330 (size=112) =====

int FUN_71006e6330(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return -0x27;
  }
  uVar2 = FUN_710081c880(0);
  while( true ) {
    iVar1 = FUN_71006e4eb0(param_1);
    if (iVar1 != -0x25) {
      return iVar1;
    }
    if (*(int *)(*(long *)(param_1 + 0x60) + 0x94) == 0) break;
    iVar1 = FUN_71006f0950(*(long *)(param_1 + 0x60),uVar2);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  return -0x25;
}



// ===== FUN_71006e63a0 @ 71006e63a0 (size=152) =====

ulong FUN_71006e63a0(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    return 0xffffffd9;
  }
  lVar3 = FUN_71006ed660(*(long *)(param_1 + 0x60) + 0x1f0);
  do {
    lVar4 = lVar3;
    if (lVar4 == 0) {
      return (ulong)*(byte *)(param_1 + 0x55);
    }
    lVar3 = FUN_71006ed670(lVar4);
  } while (((*(ulong *)(lVar4 + 0x20) == 0) ||
           (1 < (byte)(**(char **)(lVar4 + 0x18) + 0xa2U) || *(ulong *)(lVar4 + 0x20) < 5)) ||
          (iVar1 = *(int *)(param_1 + 0x30), iVar2 = FUN_71006ed200(*(char **)(lVar4 + 0x18) + 1),
          iVar1 != iVar2));
  return 0;
}



// ===== FUN_71006e6440 @ 71006e6440 (size=284) =====

undefined8 FUN_71006e6440(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_1 == 0) {
    return 0xffffffd9;
  }
  uVar2 = FUN_710081c880(0);
  do {
    lVar4 = *(long *)(param_1 + 0x60);
    if (*(int *)(param_1 + 0x29c) == 0) {
      *(undefined4 *)(param_1 + 0x29c) = 2;
    }
    do {
      if (*(char *)(param_1 + 0x55) != '\0') {
        *(undefined4 *)(param_1 + 0x29c) = 0;
        return 0;
      }
      if ((*(int *)(param_1 + 0x4c) == *(int *)(param_1 + 0x5c)) && (*(int *)(lVar4 + 0x94) != 0)) {
        uVar3 = FUN_71006ed140(lVar4,0xffffffd1,"Receiving channel window has been exhausted");
        goto LAB_71006e64f8;
      }
      iVar1 = FUN_71006f8110();
      if (iVar1 == -0x25) goto LAB_71006e6500;
    } while (-1 < iVar1);
    *(undefined4 *)(param_1 + 0x29c) = 0;
    uVar3 = FUN_71006ed140(lVar4,iVar1,"_libssh2_transport_read() bailed out!");
LAB_71006e64f8:
    if ((int)uVar3 != -0x25) {
      return uVar3;
    }
LAB_71006e6500:
    if (*(int *)(*(long *)(param_1 + 0x60) + 0x94) == 0) {
      return 0xffffffdb;
    }
    uVar3 = FUN_71006f0950(*(long *)(param_1 + 0x60),uVar2);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  } while( true );
}



// ===== FUN_71006e6560 @ 71006e6560 (size=444) =====

int FUN_71006e6560(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x60);
  if (*(char *)(param_1 + 0x40) != '\0') {
    *(undefined4 *)(param_1 + 0x290) = 0;
    return 0;
  }
  if ((*(char *)(param_1 + 0x41) == '\0') && (iVar2 = FUN_71006e4eb0(), iVar2 != 0)) {
    if (iVar2 == -0x25) {
      return -0x25;
    }
    FUN_71006ed140(lVar3,iVar2,"Unable to send EOF, but closing channel anyway");
    iVar1 = *(int *)(param_1 + 0x290);
    if (iVar1 == 0) goto LAB_71006e6670;
LAB_71006e6594:
    if (iVar1 == 2) goto LAB_71006e668c;
    if ((iVar1 == 3) && (*(char *)(param_1 + 0x54) == '\0' && iVar2 == 0)) goto LAB_71006e65f8;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x290);
    iVar2 = 0;
    if (iVar1 != 0) goto LAB_71006e6594;
LAB_71006e6670:
    *(undefined1 *)(param_1 + 0x294) = 0x61;
    FUN_71006ed220(param_1 + 0x295,*(undefined4 *)(param_1 + 0x44));
    *(undefined4 *)(param_1 + 0x290) = 2;
LAB_71006e668c:
    iVar2 = FUN_71006f87d0(lVar3,param_1 + 0x294,5,0,0);
    if (iVar2 == -0x25) {
      FUN_71006ed140(lVar3,0xffffffdb,"Would block sending close-channel");
      return -0x25;
    }
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x290) = 3;
      if (*(char *)(param_1 + 0x54) != '\0') {
LAB_71006e66c8:
        iVar2 = 0;
        goto LAB_71006e65ac;
      }
LAB_71006e65f8:
      do {
        if (*(int *)(lVar3 + 0x22c) == -1) goto LAB_71006e66c8;
        iVar2 = FUN_71006f8110(lVar3);
      } while (*(char *)(param_1 + 0x54) == '\0' && iVar2 == 0);
      if (iVar2 == -0x25) {
        return -0x25;
      }
    }
    else {
      FUN_71006ed140(lVar3,iVar2,"Unable to send close-channel request, but closing anyway");
    }
  }
  if (0 < iVar2) {
    iVar2 = 0;
  }
LAB_71006e65ac:
  *(undefined1 *)(param_1 + 0x40) = 1;
  if (*(code **)(param_1 + 0x70) != (code *)0x0) {
    (**(code **)(param_1 + 0x70))(lVar3,lVar3,param_1,param_1 + 0x68);
  }
  *(undefined4 *)(param_1 + 0x290) = 0;
  return iVar2;
}



// ===== FUN_71006e6720 @ 71006e6720 (size=216) =====

undefined8 FUN_71006e6720(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 == 0) {
    return 0xffffffd9;
  }
  uVar3 = FUN_710081c880(0);
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  if (*(char *)(param_1 + 0x55) == '\0') goto LAB_71006e67dc;
  while( true ) {
    if (*(int *)(param_1 + 0x2a0) == 0) {
      *(undefined4 *)(param_1 + 0x2a0) = 2;
    }
    if (*(char *)(param_1 + 0x54) != '\0') break;
    do {
      uVar4 = FUN_71006f8110(uVar5);
      bVar1 = *(char *)(param_1 + 0x54) != '\0';
      iVar2 = (int)uVar4;
    } while ((!bVar1 && iVar2 != 0) && (bVar1 || -1 < iVar2));
    if (-1 < iVar2) break;
    while( true ) {
      if ((int)uVar4 != -0x25) {
        return uVar4;
      }
      if (*(int *)(*(long *)(param_1 + 0x60) + 0x94) == 0) {
        return uVar4;
      }
      uVar5 = FUN_71006f0950(*(long *)(param_1 + 0x60),uVar3);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      uVar5 = *(undefined8 *)(param_1 + 0x60);
      if (*(char *)(param_1 + 0x55) != '\0') break;
LAB_71006e67dc:
      uVar4 = FUN_71006ed140(uVar5,0xffffffde,
                             "libssh2_channel_wait_closed() invoked when channel is not in EOF state"
                            );
    }
  }
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  return 0;
}



// ===== FUN_71006e6800 @ 71006e6800 (size=396) =====

undefined8 FUN_71006e6800(long param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_18 [8];
  undefined8 local_10;
  undefined1 auStack_8 [8];
  
  lVar4 = *(long *)(param_1 + 0x60);
  if (lVar4 == 0) {
    FUN_7100806b40("channel.c",0xaa7,"_libssh2_channel_free","session");
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x71006e6988);
    (*pcVar1)();
  }
  if (*(int *)(param_1 + 0x2a4) == 0) {
    *(undefined4 *)(param_1 + 0x2a4) = 2;
  }
  if (((*(char *)(param_1 + 0x40) != '\0') || (*(int *)(lVar4 + 0x22c) != 0)) ||
     (uVar3 = FUN_71006e6560(param_1), (int)uVar3 != -0x25)) {
    *(undefined4 *)(param_1 + 0x2a4) = 0;
    if (*(long *)(param_1 + 0x28) != 0) {
      (**(code **)(lVar4 + 0x18))(*(long *)(param_1 + 0x28),lVar4);
    }
    FUN_71006ed220(auStack_18,*(undefined4 *)(param_1 + 0x30));
    while ((iVar2 = FUN_71006eec50(lVar4,0x5e,&local_10,auStack_8,1,auStack_18,4), -1 < iVar2 ||
           (iVar2 = FUN_71006eec50(lVar4,0x5f,&local_10,auStack_8,1,auStack_18,4), -1 < iVar2))) {
      (**(code **)(lVar4 + 0x18))(local_10,lVar4);
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      (**(code **)(lVar4 + 0x18))(*(long *)(param_1 + 0x18),lVar4);
    }
    FUN_71006ed680(param_1);
    if (*(long *)(param_1 + 0x80) != 0) {
      (**(code **)(lVar4 + 0x18))(*(long *)(param_1 + 0x80),lVar4);
    }
    if (*(long *)(param_1 + 0x1f0) != 0) {
      (**(code **)(lVar4 + 0x18))(*(long *)(param_1 + 0x1f0),lVar4);
    }
    if (*(long *)(param_1 + 0x218) != 0) {
      (**(code **)(lVar4 + 0x18))(*(long *)(param_1 + 0x218),lVar4);
    }
    (**(code **)(lVar4 + 0x18))(param_1,lVar4);
    uVar3 = 0;
  }
  return uVar3;
}



// ===== FUN_71006e6990 @ 71006e6990 (size=468) =====

ulong FUN_71006e6990(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *local_8;
  
  lVar2 = FUN_710081ce00(*(undefined8 *)(param_1 + 0x20));
  lVar6 = *(long *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x48) == 0) {
    puVar3 = (undefined1 *)(**(code **)(lVar6 + 8))(lVar2 + 0x22,lVar6);
    if (puVar3 == (undefined1 *)0x0) {
      local_8 = puVar3;
      FUN_71006ed140(lVar6,0xfffffffa,"Unable to allocate memory for setenv packet");
      return 0xfffffffa;
    }
    local_8 = puVar3 + 1;
    *puVar3 = 0x50;
    FUN_71006ed260(&local_8,"cancel-tcpip-forward",0x14);
    *local_8 = 0;
    local_8 = local_8 + 1;
    FUN_71006ed260(&local_8,*(undefined8 *)(param_1 + 0x20),lVar2);
    FUN_71006ed230(&local_8,*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x48) = 2;
  }
  else {
    uVar7 = 0;
    puVar3 = *(undefined1 **)(param_1 + 0x50);
    if (*(int *)(param_1 + 0x48) != 2) goto LAB_71006e6a90;
  }
  uVar1 = FUN_71006f87d0(lVar6,puVar3,lVar2 + 0x22,0,0);
  uVar7 = (ulong)uVar1;
  if (uVar1 == 0xffffffdb) {
    FUN_71006ed140(lVar6,uVar7,"Would block sending forward request");
    *(undefined1 **)(param_1 + 0x50) = puVar3;
    return uVar7;
  }
  if (uVar1 != 0) {
    FUN_71006ed140(lVar6,0xfffffff9,
                   "Unable to send global-request packet for forward listen request");
    uVar7 = 0xfffffff9;
    *(undefined4 *)(param_1 + 0x48) = 3;
  }
  (**(code **)(lVar6 + 0x18))(puVar3,lVar6);
  *(undefined4 *)(param_1 + 0x48) = 3;
LAB_71006e6a90:
  lVar2 = FUN_71006ed660(param_1 + 0x30);
  do {
    if (lVar2 == 0) {
      (**(code **)(lVar6 + 0x18))(*(undefined8 *)(param_1 + 0x20),lVar6);
      FUN_71006ed680(param_1);
      (**(code **)(lVar6 + 0x18))(param_1,lVar6);
      return uVar7;
    }
    lVar4 = FUN_71006ed670(lVar2);
    uVar5 = FUN_71006e6800(lVar2);
    lVar2 = lVar4;
  } while ((int)uVar5 != -0x25);
  return uVar5;
}



// ===== FUN_71006e6b70 @ 71006e6b70 (size=112) =====

int FUN_71006e6b70(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return -0x27;
  }
  uVar2 = FUN_710081c880(0);
  while( true ) {
    iVar1 = FUN_71006e6800(param_1);
    if (iVar1 != -0x25) {
      return iVar1;
    }
    if (*(int *)(*(long *)(param_1 + 0x60) + 0x94) == 0) break;
    iVar1 = FUN_71006f0950(*(long *)(param_1 + 0x60),uVar2);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  return -0x25;
}



// ===== FUN_71006e6be0 @ 71006e6be0 (size=204) =====

undefined4 FUN_71006e6be0(long param_1,long *param_2,ulong *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_3 != (ulong *)0x0) {
    *param_3 = (ulong)*(uint *)(param_1 + 0x48);
  }
  if (param_2 != (long *)0x0) {
    lVar4 = 0;
    lVar2 = FUN_71006ed660(*(long *)(param_1 + 0x60) + 0x1f0);
    while (lVar3 = lVar2, lVar2 != 0) {
      while( true ) {
        lVar2 = FUN_71006ed670(lVar3);
        if (((*(ulong *)(lVar3 + 0x20) == 0) ||
            (1 < (byte)(**(char **)(lVar3 + 0x18) + 0xa2U) || *(ulong *)(lVar3 + 0x20) < 5)) ||
           (iVar1 = FUN_71006ed200(*(char **)(lVar3 + 0x18) + 1), iVar1 != *(int *)(param_1 + 0x30))
           ) break;
        lVar4 = (lVar4 + *(long *)(lVar3 + 0x20)) - *(long *)(lVar3 + 0x28);
        lVar3 = lVar2;
        if (lVar2 == 0) goto LAB_71006e6c88;
      }
    }
LAB_71006e6c88:
    *param_2 = lVar4;
  }
  return *(undefined4 *)(param_1 + 0x4c);
}



// ===== FUN_71006e6cb0 @ 71006e6cb0 (size=260) =====

long FUN_71006e6cb0(long param_1,undefined4 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    return -0x27;
  }
  uVar2 = FUN_71006e6be0(param_1,0,0);
  if (uVar2 < param_4) {
    uVar3 = FUN_710081c880(0);
    do {
      iVar1 = FUN_71006e5820(param_1,param_4 & 0xffffffff,1,0);
      if ((iVar1 != -0x25) || (*(int *)(*(long *)(param_1 + 0x60) + 0x94) == 0)) break;
      iVar1 = FUN_71006f0950(*(long *)(param_1 + 0x60),uVar3);
    } while (iVar1 == 0);
  }
  uVar3 = FUN_710081c880(0);
  do {
    iVar1 = FUN_71006e5bf0(param_1,param_2,param_3,param_4);
    if (iVar1 != -0x25) break;
    if (*(int *)(*(long *)(param_1 + 0x60) + 0x94) == 0) {
      return -0x25;
    }
    iVar1 = FUN_71006f0950(*(long *)(param_1 + 0x60),uVar3);
  } while (iVar1 == 0);
  return (long)iVar1;
}



// ===== FUN_71006e6dc0 @ 71006e6dc0 (size=44) =====

undefined8 FUN_71006e6dc0(undefined8 param_1,undefined8 *param_2)

{
  FUN_71006fb5e0(*param_2);
  *param_2 = 0;
  return 0;
}



// ===== FUN_71006e6df0 @ 71006e6df0 (size=196) =====

int FUN_71006e6df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [24];
  undefined1 auStack_18 [24];
  
  uVar4 = *param_6;
  FUN_71006fb0d0(auStack_18,4,0,0);
  if (0 < param_4) {
    puVar2 = param_5;
    do {
      puVar3 = puVar2 + 2;
      FUN_7100738240(auStack_18,*puVar2,puVar2[1]);
      puVar2 = puVar3;
    } while (puVar3 != param_5 + (ulong)(param_4 - 1) * 2 + 2);
  }
  FUN_71006fb170(auStack_18,auStack_30);
  iVar1 = FUN_71006fb530(param_1,uVar4,auStack_30,0x14,param_2,param_3);
  return -(uint)(iVar1 != 0);
}



// ===== FUN_71006e6ee0 @ 71006e6ee0 (size=124) =====

undefined8
FUN_71006e6ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              long *param_5)

{
  undefined8 uVar1;
  long local_8;
  
  if (*param_5 != 0) {
    FUN_71006fb5e0(*param_5);
    *param_5 = 0;
  }
  uVar1 = FUN_71006fb370(&local_8,param_1,param_2,param_3,param_4);
  if ((int)uVar1 == 0) {
    *param_5 = local_8;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// ===== FUN_71006e6f60 @ 71006e6f60 (size=108) =====

undefined8 FUN_71006e6f60(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long local_8;
  
  if (*param_4 != 0) {
    FUN_71006fb5e0(*param_4);
    *param_4 = 0;
  }
  uVar1 = FUN_71006fb290(&local_8,param_1,param_2,param_3);
  if ((int)uVar1 == 0) {
    *param_4 = local_8;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// ===== FUN_71006e70b0 @ 71006e70b0 (size=48) =====

undefined8 FUN_71006e70b0(undefined8 param_1,long *param_2)

{
  if (*param_2 != 0) {
    FUN_71006fbe70();
  }
  *param_2 = 0;
  return 0;
}



// ===== FUN_71006e70e0 @ 71006e70e0 (size=516) =====

undefined8
FUN_71006e70e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
              undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [64];
  
  uVar4 = *param_6;
  iVar1 = FUN_71006fbc10(uVar4);
  if (iVar1 == 3) {
    FUN_71006fb0d0(auStack_58,6,0,0);
    if (0 < param_4) {
      puVar2 = param_5;
      do {
        puVar3 = puVar2 + 2;
        FUN_7100738240(auStack_58,*puVar2,puVar2[1]);
        puVar2 = puVar3;
      } while (param_5 + (ulong)(param_4 - 1) * 2 + 2 != puVar3);
    }
    FUN_71006fb170(auStack_58,auStack_40);
    uVar4 = FUN_71006fbaa0(param_1,uVar4,auStack_40,0x20,param_2,param_3);
    return uVar4;
  }
  if (iVar1 != 4) {
    if (iVar1 == 5) {
      FUN_71006fb0d0(auStack_58,8,0,0);
      if (0 < param_4) {
        puVar2 = param_5;
        do {
          puVar3 = puVar2 + 2;
          FUN_7100738240(auStack_58,*puVar2,puVar2[1]);
          puVar2 = puVar3;
        } while (puVar3 != param_5 + (ulong)(param_4 - 1) * 2 + 2);
      }
      FUN_71006fb170(auStack_58,auStack_40);
      uVar4 = FUN_71006fbaa0(param_1,uVar4,auStack_40,0x40,param_2,param_3);
    }
    else {
      uVar4 = 0xffffffff;
    }
    return uVar4;
  }
  FUN_71006fb0d0(auStack_58,7,0,0);
  if (0 < param_4) {
    puVar2 = param_5;
    do {
      puVar3 = puVar2 + 2;
      FUN_7100738240(auStack_58,*puVar2,puVar2[1]);
      puVar2 = puVar3;
    } while (puVar3 != param_5 + (ulong)(param_4 - 1) * 2 + 2);
  }
  FUN_71006fb170(auStack_58,auStack_40);
  uVar4 = FUN_71006fbaa0(param_1,uVar4,auStack_40,0x30,param_2,param_3);
  return uVar4;
}



// ===== FUN_71006e72f0 @ 71006e72f0 (size=180) =====

ulong FUN_71006e72f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long *param_5)

{
  int iVar1;
  ulong uVar2;
  long local_8;
  
  local_8 = 0;
  if (param_5 != (long *)0x0) {
    if (*param_5 != 0) {
      FUN_71006fbe70();
      *param_5 = 0;
    }
    uVar2 = FUN_71006fc270(&local_8,param_1,param_2,param_3,param_4);
    if ((int)uVar2 == 0) {
      *param_5 = local_8;
    }
    else {
      uVar2 = 0xffffffff;
    }
    return uVar2;
  }
  iVar1 = FUN_71006fc270(&local_8,param_1,param_2,param_3,param_4);
  return (ulong)-(uint)(iVar1 != 0);
}



// ===== FUN_71006e73b0 @ 71006e73b0 (size=136) =====

void FUN_71006e73b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long local_8;
  
  local_8 = 0;
  if (param_4 != (long *)0x0) {
    if (*param_4 != 0) {
      FUN_71006fbe70();
      *param_4 = 0;
    }
    FUN_71006fc380(&local_8,param_1,param_2,param_3);
    *param_4 = local_8;
    return;
  }
  FUN_71006fc380(&local_8,param_1,param_2,param_3);
  return;
}



// ===== FUN_71006e7440 @ 71006e7440 (size=216) =====

undefined8
FUN_71006e7440(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
              undefined8 param_5,undefined8 *param_6)

{
  int iVar1;
  undefined8 uVar2;
  uint local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 auStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulong local_8;
  
  uVar2 = *param_6;
  if (0x22 < param_3) {
    local_18 = param_2;
    uStack_10 = param_2;
    local_8 = param_3;
    iVar1 = FUN_71006ed860(&local_18,auStack_38,&local_20);
    if ((((iVar1 == 0) && (local_20 == 0x13)) &&
        (iVar1 = FUN_71006ed7a0(&local_18,&local_4c), iVar1 == 0)) &&
       (((7 < local_4c && (iVar1 = FUN_71006ed860(&local_18,&local_48,&local_30), iVar1 == 0)) &&
        (iVar1 = FUN_71006ed860(&local_18,&local_40,&local_28), iVar1 == 0)))) {
      uVar2 = FUN_71006fbc20(uVar2,local_48,local_30,local_40,local_28,param_4,param_5);
      return uVar2;
    }
  }
  return 0xffffffff;
}



// ===== FUN_71006e7520 @ 71006e7520 (size=440) =====

undefined8 FUN_71006e7520(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulong local_8;
  
  local_48 = 0;
  if ((param_4 != (long *)0x0) && (*param_4 != 0)) {
    FUN_71006fbe70();
    *param_4 = 0;
  }
  if (0x26 < param_3) {
    local_18 = param_2;
    uStack_10 = param_2;
    local_8 = param_3;
    iVar1 = FUN_71006ed860(&local_18,&local_40,&local_20);
    if ((iVar1 == 0) && (local_20 == 0x13)) {
      iVar1 = FUN_710080b4c0(local_40,"ecdsa-sha2-nistp256",0x13);
      if (iVar1 == 0) {
        iVar1 = 3;
      }
      else {
        iVar1 = FUN_710080b4c0(local_40,"ecdsa-sha2-nistp384",0x13);
        if (iVar1 == 0) {
          iVar1 = 4;
        }
        else {
          iVar1 = FUN_710080b4c0(local_40,"ecdsa-sha2-nistp521",0x13);
          if (iVar1 != 0) {
            return 0xffffffff;
          }
          iVar1 = 5;
        }
      }
      iVar2 = FUN_71006ed860(&local_18,&local_38,&local_20);
      if ((iVar2 == 0) && (local_20 == 8)) {
        if (iVar1 == 3) {
          iVar2 = FUN_710080b4c0(local_38,"nistp256");
        }
        else if (iVar1 == 4) {
          iVar2 = FUN_710080b4c0(local_38,"nistp384");
        }
        else {
          iVar2 = FUN_710080b4c0(local_38,"nistp521");
        }
        if (((iVar2 == 0) && (iVar2 = FUN_71006ed860(&local_18,&local_30,&local_28), iVar2 == 0)) &&
           (uVar3 = FUN_71006fbfc0(&local_48,local_30,local_28,iVar1), (int)uVar3 == 0)) {
          if (param_4 == (long *)0x0) {
            return uVar3;
          }
          *param_4 = local_48;
          return uVar3;
        }
      }
    }
  }
  return 0xffffffff;
}



// ===== FUN_71006e76e0 @ 71006e76e0 (size=12) =====

undefined ** FUN_71006e76e0(void)

{
  return &PTR_PTR_s_ecdsa_sha2_nistp256_7100af36d8;
}



// ===== FUN_71006e76f0 @ 71006e76f0 (size=96) =====

long FUN_71006e76f0(long param_1,int param_2)

{
  long lVar1;
  
  if (param_2 == 2) {
    lVar1 = param_1 + 0xd0;
    if (*(int *)(param_1 + 0xe4) == 0) {
      lVar1 = 0;
    }
    return lVar1;
  }
  if (param_2 != 3) {
    if (param_2 != 1) {
      return 0;
    }
    lVar1 = param_1 + 0xbc;
    if (*(int *)(param_1 + 0xcc) == 0) {
      lVar1 = 0;
    }
    return lVar1;
  }
  lVar1 = param_1 + 0xe8;
  if (*(int *)(param_1 + 0x108) == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// ===== FUN_71006e7750 @ 71006e7750 (size=628) =====

long * FUN_71006e7750(long param_1,ulong *param_2,undefined4 *param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 0xb8);
  if (uVar1 == 0) {
    if (param_2 != (ulong *)0x0) {
      *param_2 = 0;
    }
    return (long *)0x0;
  }
  if (param_2 != (ulong *)0x0) {
    *param_2 = (ulong)uVar1;
  }
  plVar2 = *(long **)(param_1 + 0xb0);
  if (param_3 == (undefined4 *)0x0) {
    return plVar2;
  }
  if (10 < uVar1) {
    if (((*plVar2 == 0x2d68737307000000) && ((short)plVar2[1] == 0x7372)) &&
       (*(char *)((long)plVar2 + 10) == 'a')) {
      *param_3 = 1;
      return plVar2;
    }
    if (((*plVar2 == 0x2d68737307000000) && ((short)plVar2[1] == 0x7364)) &&
       (*(char *)((long)plVar2 + 10) == 's')) {
      *param_3 = 2;
      return plVar2;
    }
    if (0xe < uVar1) {
      if (((*plVar2 == 0x2d6873730b000000) && ((int)plVar2[1] == 0x35326465)) &&
         ((*(short *)((long)plVar2 + 0xc) == 0x3135 && (*(char *)((long)plVar2 + 0xe) == '9')))) {
        *param_3 = 6;
        return plVar2;
      }
      if (0x16 < uVar1) {
        lVar3 = *plVar2;
        if ((((lVar3 == 0x7364636513000000) && (plVar2[1] == 0x6e2d326168732d61)) &&
            ((int)plVar2[2] == 0x70747369)) &&
           ((*(short *)((long)plVar2 + 0x14) == 0x3532 && (*(char *)((long)plVar2 + 0x16) == '6'))))
        {
          *param_3 = 3;
          return plVar2;
        }
        if (((lVar3 == 0x7364636513000000) && (plVar2[1] == 0x6e2d326168732d61)) &&
           (((int)plVar2[2] == 0x70747369 &&
            ((*(short *)((long)plVar2 + 0x14) == 0x3833 && (*(char *)((long)plVar2 + 0x16) == '4')))
            ))) {
          *param_3 = 4;
          return plVar2;
        }
        if ((((lVar3 == 0x7364636513000000) && (plVar2[1] == 0x6e2d326168732d61)) &&
            ((int)plVar2[2] == 0x70747369)) &&
           ((*(short *)((long)plVar2 + 0x14) == 0x3235 && (*(char *)((long)plVar2 + 0x16) == '1'))))
        {
          *param_3 = 5;
          return plVar2;
        }
      }
    }
  }
  *param_3 = 0;
  return plVar2;
}



// ===== FUN_71006e79d0 @ 71006e79d0 (size=152) =====

long FUN_71006e79d0(long param_1,long param_2,long *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  
  puVar4 = (undefined1 *)(param_1 + 4);
  FUN_71006ed220();
  if ((param_3 == (long *)0x0) || (plVar3 = (long *)*param_3, plVar3 == (long *)0x0)) {
    return 4;
  }
  do {
    lVar5 = *plVar3;
    if (lVar5 == 0) break;
    iVar2 = FUN_710081ce00(lVar5);
    puVar1 = puVar4 + iVar2;
    FUN_710080f900(puVar4,lVar5);
    puVar4 = puVar1 + 1;
    *puVar1 = 0x2c;
    param_3 = param_3 + 1;
    plVar3 = (long *)*param_3;
  } while (plVar3 != (long *)0x0);
  return param_2 + 4;
}



// ===== FUN_71006e7a70 @ 71006e7a70 (size=144) =====

undefined8 FUN_71006e7a70(long param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  iVar1 = FUN_710080aec0(param_1,"ecdh-sha2-nistp256");
  if (iVar1 == 0) {
    uVar2 = 3;
  }
  else {
    iVar1 = FUN_710080aec0(param_1,"ecdh-sha2-nistp384");
    if (iVar1 == 0) {
      uVar2 = 4;
    }
    else {
      iVar1 = FUN_710080aec0(param_1,"ecdh-sha2-nistp521");
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      uVar2 = 5;
    }
  }
  *param_2 = uVar2;
  return 0;
}



// ===== FUN_71006e7b00 @ 71006e7b00 (size=7416) =====

ulong FUN_71006e7b00(long param_1,uint param_2,ulong param_3,ulong param_4,undefined8 param_5,
                    ulong param_6,undefined8 param_7,int *param_8)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  code *pcVar10;
  ulong uVar11;
  undefined8 local_40;
  int local_38;
  undefined4 uStack_34;
  ulong local_30;
  long lStack_28;
  ulong local_20;
  undefined1 auStack_18 [24];
  
  if (param_4 < 5) {
    uVar11 = FUN_71006ed140(param_1,0xfffffff6,"Host key data is too short");
    return uVar11;
  }
  iVar2 = *param_8;
  if (iVar2 != 0) {
    if (iVar2 == 2) goto LAB_71006e7bbc;
    if (iVar2 == 3) goto LAB_71006e7d68;
    if (iVar2 == 5) goto LAB_71006e7d94;
    goto LAB_71006e7b60;
  }
  uVar5 = FUN_71006fb220();
  *(undefined8 *)(param_8 + 0x28) = uVar5;
  *param_8 = 2;
LAB_71006e7bbc:
  lStack_28 = param_3 + 1;
  local_30 = param_3;
  local_20 = param_4;
  iVar2 = FUN_71006ed950(param_1,&local_30,param_1 + 0xb0,&local_38);
  pcVar9 = "Unable to allocate memory for a copy of the host key";
  if (iVar2 != 0) {
LAB_71006e7f18:
    uVar11 = FUN_71006ed140(param_1,0xfffffffa,pcVar9);
    uVar11 = uVar11 & 0xffffffff;
    goto LAB_71006e7b64;
  }
  *(int *)(param_1 + 0xb8) = local_38;
  iVar2 = FUN_71006fb0d0(auStack_18,3,0,0);
  if (iVar2 != 0) {
    FUN_7100738240(auStack_18,*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8));
    FUN_71006fb170(auStack_18,param_1 + 0xbc);
    iVar2 = 1;
  }
  *(int *)(param_1 + 0xcc) = iVar2;
  iVar2 = FUN_71006fb0d0(auStack_18,4,0,0);
  if (iVar2 != 0) {
    FUN_7100738240(auStack_18,*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8));
    FUN_71006fb170(auStack_18,param_1 + 0xd0);
    iVar2 = 1;
  }
  *(int *)(param_1 + 0xe4) = iVar2;
  iVar2 = FUN_71006fb0d0(auStack_18,6,0,0);
  if (iVar2 != 0) {
    FUN_7100738240(auStack_18,*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8));
    FUN_71006fb170(auStack_18,param_1 + 0xe8);
    iVar2 = 1;
  }
  pcVar10 = *(code **)(*(long *)(param_1 + 0xa0) + 0x10);
  *(int *)(param_1 + 0x108) = iVar2;
  iVar2 = (*pcVar10)(param_1,*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8),
                     param_1 + 0xa8);
  pcVar9 = "Unable to initialize hostkey importer";
  if (iVar2 != 0) {
LAB_71006e7f38:
    uVar11 = FUN_71006ed140(param_1,0xfffffff6,pcVar9);
    uVar11 = uVar11 & 0xffffffff;
    goto LAB_71006e7b64;
  }
  iVar2 = FUN_71006ed860(&local_30,&local_40,&local_38);
  if (iVar2 != 0) {
    uVar11 = FUN_71006ed140(param_1,0xfffffff2,"Unexpected key length");
    uVar11 = uVar11 & 0xffffffff;
    goto LAB_71006e7b64;
  }
  iVar2 = FUN_71006ed860(&local_30,param_8 + 0x2e,param_8 + 0x34);
  if (iVar2 != 0) {
    pcVar9 = "Unexpected ecdh server sig length";
    goto LAB_71006e7f38;
  }
  iVar2 = FUN_71006fb9e0(param_8 + 0x28,param_7,local_40,CONCAT44(uStack_34,local_38));
  if (iVar2 != 0) {
    uVar11 = FUN_71006ed140(param_1,0xfffffffb,"Unable to create ECDH shared secret");
    uVar11 = uVar11 & 0xffffffff;
    goto LAB_71006e7b64;
  }
  lVar6 = FUN_7100729c10(*(undefined8 *)(param_8 + 0x28));
  *(long *)(param_8 + 0x32) = lVar6 + 5;
  uVar11 = FUN_7100729ba0(*(undefined8 *)(param_8 + 0x28));
  lVar6 = *(long *)(param_8 + 0x32);
  if ((uVar11 & 7) != 0) {
    lVar6 = lVar6 + -1;
    *(long *)(param_8 + 0x32) = lVar6;
  }
  lVar6 = (**(code **)(param_1 + 8))(lVar6,param_1);
  *(long *)(param_8 + 0x2c) = lVar6;
  if (lVar6 == 0) {
    pcVar9 = "Unable to allocate buffer for K";
    goto LAB_71006e7f18;
  }
  FUN_71006ed220(lVar6,(int)*(undefined8 *)(param_8 + 0x32) + -4);
  uVar11 = FUN_7100729ba0(*(undefined8 *)(param_8 + 0x28));
  if ((uVar11 & 7) == 0) {
    *(undefined1 *)(*(long *)(param_8 + 0x2c) + 4) = 0;
    uVar5 = *(undefined8 *)(param_8 + 0x28);
    lVar6 = *(long *)(param_8 + 0x2c) + 5;
  }
  else {
    uVar5 = *(undefined8 *)(param_8 + 0x28);
    lVar6 = *(long *)(param_8 + 0x2c) + 4;
  }
  uVar4 = FUN_7100729c10(uVar5);
  FUN_7100729e40(uVar5,lVar6,uVar4);
  if (param_2 == 4) {
    *(undefined1 **)(param_8 + 0x36) = auStack_18;
    FUN_71006fb0d0(auStack_18,7,0,0);
    piVar1 = param_8 + 8;
    if (*(long *)(param_1 + 0x180) == 0) {
      FUN_71006ed220(piVar1,0x16);
      FUN_7100738240(auStack_18,piVar1,4);
      FUN_7100738240(auStack_18,"SSH-2.0-libssh2_1.10.0",0x16);
    }
    else {
      iVar2 = FUN_710081ce00();
      FUN_71006ed220(piVar1,iVar2 + -2);
      FUN_7100738240(auStack_18,piVar1,4);
      uVar5 = *(undefined8 *)(param_1 + 0x180);
      lVar6 = FUN_710081ce00(uVar5);
      FUN_7100738240(auStack_18,uVar5,lVar6 + -2);
    }
    uVar3 = FUN_710081ce00(*(undefined8 *)(param_1 + 0x110));
    FUN_71006ed220(piVar1,uVar3);
    FUN_7100738240(auStack_18,piVar1,4);
    uVar4 = *(undefined8 *)(param_1 + 0x110);
    uVar5 = FUN_710081ce00(uVar4);
    FUN_7100738240(auStack_18,uVar4,uVar5);
    FUN_71006ed220(piVar1,*(undefined4 *)(param_1 + 400));
    FUN_7100738240(auStack_18,piVar1,4);
    FUN_7100738240(auStack_18,*(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_1 + 400));
    FUN_71006ed220(piVar1,*(undefined4 *)(param_1 + 0x120));
    FUN_7100738240(auStack_18,piVar1,4);
    FUN_7100738240(auStack_18,*(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x120));
    FUN_71006ed220(piVar1,*(undefined4 *)(param_1 + 0xb8));
    FUN_7100738240(auStack_18,piVar1,4);
    FUN_7100738240(auStack_18,*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8));
    FUN_71006ed220(piVar1,param_6 & 0xffffffff);
    FUN_7100738240(auStack_18,piVar1,4);
    FUN_7100738240(auStack_18,param_5,param_6);
    FUN_71006ed220(piVar1,local_38);
    FUN_7100738240(auStack_18,piVar1,4);
    FUN_7100738240(auStack_18,local_40,CONCAT44(uStack_34,local_38));
    FUN_7100738240(auStack_18,*(undefined8 *)(param_8 + 0x2c),*(undefined8 *)(param_8 + 0x32));
    FUN_71006fb170(auStack_18,piVar1);
    lVar6 = *(long *)(param_1 + 0xa0);
    uVar5 = 0x30;
LAB_71006e92bc:
    iVar2 = (**(code **)(lVar6 + 0x28))
                      (param_1,*(undefined8 *)(param_8 + 0x2e),*(undefined8 *)(param_8 + 0x34),
                       param_8 + 8,uVar5,param_1 + 0xa8);
    if (iVar2 != 0) {
      uVar11 = FUN_71006ed140(param_1,0xfffffff5,"Unable to verify hostkey signature");
      uVar11 = uVar11 & 0xffffffff;
      goto LAB_71006e7b64;
    }
  }
  else {
    if (param_2 == 5) {
      *(undefined1 **)(param_8 + 0x36) = auStack_18;
      FUN_71006fb0d0(auStack_18,8,0,0);
      piVar1 = param_8 + 8;
      if (*(long *)(param_1 + 0x180) == 0) {
        FUN_71006ed220(piVar1,0x16);
        FUN_7100738240(auStack_18,piVar1,4);
        FUN_7100738240(auStack_18,"SSH-2.0-libssh2_1.10.0",0x16);
      }
      else {
        iVar2 = FUN_710081ce00();
        FUN_71006ed220(piVar1,iVar2 + -2);
        FUN_7100738240(auStack_18,piVar1,4);
        uVar5 = *(undefined8 *)(param_1 + 0x180);
        lVar6 = FUN_710081ce00(uVar5);
        FUN_7100738240(auStack_18,uVar5,lVar6 + -2);
      }
      uVar3 = FUN_710081ce00(*(undefined8 *)(param_1 + 0x110));
      FUN_71006ed220(piVar1,uVar3);
      FUN_7100738240(auStack_18,piVar1,4);
      uVar4 = *(undefined8 *)(param_1 + 0x110);
      uVar5 = FUN_710081ce00(uVar4);
      FUN_7100738240(auStack_18,uVar4,uVar5);
      FUN_71006ed220(piVar1,*(undefined4 *)(param_1 + 400));
      FUN_7100738240(auStack_18,piVar1,4);
      FUN_7100738240(auStack_18,*(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_1 + 400));
      FUN_71006ed220(piVar1,*(undefined4 *)(param_1 + 0x120));
      FUN_7100738240(auStack_18,piVar1,4);
      FUN_7100738240(auStack_18,*(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x120));
      FUN_71006ed220(piVar1,*(undefined4 *)(param_1 + 0xb8));
      FUN_7100738240(auStack_18,piVar1,4);
      FUN_7100738240(auStack_18,*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8));
      FUN_71006ed220(piVar1,param_6 & 0xffffffff);
      FUN_7100738240(auStack_18,piVar1,4);
      FUN_7100738240(auStack_18,param_5,param_6);
      FUN_71006ed220(piVar1,local_38);
      FUN_7100738240(auStack_18,piVar1,4);
      FUN_7100738240(auStack_18,local_40,CONCAT44(uStack_34,local_38));
      FUN_7100738240(auStack_18,*(undefined8 *)(param_8 + 0x2c),*(undefined8 *)(param_8 + 0x32));
      FUN_71006fb170(auStack_18,piVar1);
      lVar6 = *(long *)(param_1 + 0xa0);
      uVar5 = 0x40;
      goto LAB_71006e92bc;
    }
    if (param_2 == 3) {
      *(undefined1 **)(param_8 + 0x36) = auStack_18;
      FUN_71006fb0d0(auStack_18,6,0,0);
      piVar1 = param_8 + 8;
      if (*(long *)(param_1 + 0x180) == 0) {
        FUN_71006ed220(piVar1,0x16);
        FUN_7100738240(auStack_18,piVar1,4);
        FUN_7100738240(auStack_18,"SSH-2.0-libssh2_1.10.0",0x16);
      }
      else {
        iVar2 = FUN_710081ce00();
        FUN_71006ed220(piVar1,iVar2 + -2);
        FUN_7100738240(auStack_18,piVar1,4);
        uVar5 = *(undefined8 *)(param_1 + 0x180);
        lVar6 = FUN_710081ce00(uVar5);
        FUN_7100738240(auStack_18,uVar5,lVar6 + -2);
      }
      uVar3 = FUN_710081ce00(*(undefined8 *)(param_1 + 0x110));
      FUN_71006ed220(piVar1,uVar3);
      FUN_7100738240(auStack_18,piVar1,4);
      uVar4 = *(undefined8 *)(param_1 + 0x110);
      uVar5 = FUN_710081ce00(uVar4);
      FUN_7100738240(auStack_18,uVar4,uVar5);
      FUN_71006ed220(piVar1,*(undefined4 *)(param_1 + 400));
      FUN_7100738240(auStack_18,piVar1,4);
      FUN_7100738240(auStack_18,*(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_1 + 400));
      FUN_71006ed220(piVar1,*(undefined4 *)(param_1 + 0x120));
      FUN_7100738240(auStack_18,piVar1,4);
      FUN_7100738240(auStack_18,*(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x120));
      FUN_71006ed220(piVar1,*(undefined4 *)(param_1 + 0xb8));
      FUN_7100738240(auStack_18,piVar1,4);
      FUN_7100738240(auStack_18,*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8));
      FUN_71006ed220(piVar1,param_6 & 0xffffffff);
      FUN_7100738240(auStack_18,piVar1,4);
      FUN_7100738240(auStack_18,param_5,param_6);
      FUN_71006ed220(piVar1,local_38);
      FUN_7100738240(auStack_18,piVar1,4);
      FUN_7100738240(auStack_18,local_40,CONCAT44(uStack_34,local_38));
      FUN_7100738240(auStack_18,*(undefined8 *)(param_8 + 0x2c),*(undefined8 *)(param_8 + 0x32));
      FUN_71006fb170(auStack_18,piVar1);
      lVar6 = *(long *)(param_1 + 0xa0);
      uVar5 = 0x20;
      goto LAB_71006e92bc;
    }
  }
  *(undefined1 *)(param_8 + 0x18) = 0x15;
  *param_8 = 3;
LAB_71006e7d68:
  iVar2 = FUN_71006f87d0(param_1,param_8 + 0x18,1,0,0);
  if (iVar2 == -0x25) {
    return 0xffffffdb;
  }
  if (iVar2 != 0) {
    uVar11 = FUN_71006ed140(param_1,iVar2,"Unable to send NEWKEYS message");
    uVar11 = uVar11 & 0xffffffff;
    goto LAB_71006e7b64;
  }
  *param_8 = 5;
LAB_71006e7d94:
  iVar2 = FUN_71006eee10(param_1,0x15,param_8 + 6,param_8 + 0x1e,0,0,0,param_8 + 0x38);
  if (iVar2 == -0x25) {
    return 0xffffffdb;
  }
  if (iVar2 != 0) {
    uVar11 = FUN_71006ed140(param_1,iVar2,"Timed out waiting for NEWKEYS");
    uVar11 = uVar11 & 0xffffffff;
    goto LAB_71006e7b64;
  }
  uVar5 = *(undefined8 *)(param_8 + 6);
  *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 2;
  (**(code **)(param_1 + 0x18))(uVar5,param_1);
  if (*(long *)(param_1 + 0x88) == 0) {
    if (2 < param_2 - 3) {
      uVar11 = FUN_71006ed140(param_1,0xfffffffb,"Unknown SHA digest for EC curve");
      uVar11 = uVar11 & 0xffffffff;
      goto LAB_71006e7b64;
    }
    lVar7 = (ulong)param_2 * 0x10 + -0x10;
    lVar6 = (**(code **)(param_1 + 8))(lVar7,param_1);
    *(long *)(param_1 + 0x88) = lVar6;
    if (lVar6 == 0) {
      uVar11 = FUN_71006ed140(param_1,0xfffffffa,"Unable to allocate buffer for SHA digest");
      uVar11 = uVar11 & 0xffffffff;
      goto LAB_71006e7b64;
    }
    FUN_710080f900(lVar6,param_8 + 8,lVar7);
    *(int *)(param_1 + 0x90) = (int)lVar7;
  }
  lVar6 = *(long *)(param_1 + 0x198);
  if (*(code **)(lVar6 + 0x38) != (code *)0x0) {
    (**(code **)(lVar6 + 0x38))(param_1,param_1 + 0x1a0);
    lVar6 = *(long *)(param_1 + 0x198);
  }
  if (*(long *)(lVar6 + 0x28) == 0) {
LAB_71006e80a8:
    lVar6 = *(long *)(param_1 + 0x128);
    if (*(code **)(lVar6 + 0x38) != (code *)0x0) {
      (**(code **)(lVar6 + 0x38))(param_1,param_1 + 0x130);
      lVar6 = *(long *)(param_1 + 0x128);
    }
    if (*(long *)(lVar6 + 0x28) == 0) {
LAB_71006e8310:
      lVar6 = *(long *)(param_1 + 0x1a8);
      if (*(code **)(lVar6 + 0x20) != (code *)0x0) {
        (**(code **)(lVar6 + 0x20))(param_1,param_1 + 0x1b8);
        lVar6 = *(long *)(param_1 + 0x1a8);
      }
      if (*(long *)(lVar6 + 0x10) == 0) {
LAB_71006e8480:
        lVar6 = *(long *)(param_1 + 0x138);
        if (*(code **)(lVar6 + 0x20) != (code *)0x0) {
          (**(code **)(lVar6 + 0x20))(param_1,param_1 + 0x148);
          lVar6 = *(long *)(param_1 + 0x138);
        }
        if (*(long *)(lVar6 + 0x10) == 0) {
LAB_71006e86b0:
          lVar6 = *(long *)(param_1 + 0x1c0);
          if (lVar6 != 0) {
            if (*(code **)(lVar6 + 0x28) != (code *)0x0) {
              (**(code **)(lVar6 + 0x28))(param_1,1,param_1 + 0x1c8);
              lVar6 = *(long *)(param_1 + 0x1c0);
              if (lVar6 == 0) goto LAB_71006e86f4;
            }
            if ((*(code **)(lVar6 + 0x10) != (code *)0x0) &&
               (iVar2 = (**(code **)(lVar6 + 0x10))(param_1,1,param_1 + 0x1c8), iVar2 != 0))
            goto LAB_71006e81e0;
          }
LAB_71006e86f4:
          lVar6 = *(long *)(param_1 + 0x150);
          if (lVar6 != 0) {
            if (*(code **)(lVar6 + 0x28) != (code *)0x0) {
              (**(code **)(lVar6 + 0x28))(param_1,0,param_1 + 0x158);
              lVar6 = *(long *)(param_1 + 0x150);
              if (lVar6 == 0) goto LAB_71006e7b60;
            }
            if ((*(code **)(lVar6 + 0x10) != (code *)0x0) &&
               (iVar2 = (**(code **)(lVar6 + 0x10))(param_1,0,param_1 + 0x158), iVar2 != 0)) {
              uVar11 = 0xfffffffb;
              goto LAB_71006e7b64;
            }
          }
LAB_71006e7b60:
          uVar11 = 0;
          goto LAB_71006e7b64;
        }
        local_30 = local_30 & 0xffffffff00000000;
        if (param_2 == 3) {
          lVar6 = (**(code **)(param_1 + 8))((long)(*(int *)(lVar6 + 0xc) + 0x20),param_1);
          if (lVar6 != 0) {
            lVar7 = *(long *)(param_1 + 0x138);
            if (*(int *)(lVar7 + 0xc) != 0) {
              uVar11 = 0;
              do {
                FUN_71006fb0d0(auStack_18,6,0,0);
                FUN_7100738240(auStack_18,*(undefined8 *)(param_8 + 0x2c),
                               *(undefined8 *)(param_8 + 0x32));
                FUN_7100738240(auStack_18,param_8 + 8,0x20);
                if (uVar11 == 0) {
                  FUN_7100738240(auStack_18,&DAT_71008393f8,1);
                  FUN_7100738240(auStack_18,*(undefined8 *)(param_1 + 0x88),
                                 *(undefined4 *)(param_1 + 0x90));
                }
                else {
                  FUN_7100738240(auStack_18,lVar6,uVar11);
                }
                FUN_71006fb170(auStack_18,lVar6 + uVar11);
                lVar7 = *(long *)(param_1 + 0x138);
                uVar11 = uVar11 + 0x20;
              } while (uVar11 < (ulong)(long)*(int *)(lVar7 + 0xc));
            }
            goto LAB_71006e8668;
          }
        }
        else if (param_2 == 4) {
          lVar6 = (**(code **)(param_1 + 8))((long)(*(int *)(lVar6 + 0xc) + 0x30),param_1);
          if (lVar6 != 0) {
            lVar7 = *(long *)(param_1 + 0x138);
            if (*(int *)(lVar7 + 0xc) != 0) {
              uVar11 = 0;
              do {
                FUN_71006fb0d0(auStack_18,7,0,0);
                FUN_7100738240(auStack_18,*(undefined8 *)(param_8 + 0x2c),
                               *(undefined8 *)(param_8 + 0x32));
                FUN_7100738240(auStack_18,param_8 + 8,0x30);
                if (uVar11 == 0) {
                  FUN_7100738240(auStack_18,&DAT_71008393f8,1);
                  FUN_7100738240(auStack_18,*(undefined8 *)(param_1 + 0x88),
                                 *(undefined4 *)(param_1 + 0x90));
                }
                else {
                  FUN_7100738240(auStack_18,lVar6,uVar11);
                }
                FUN_71006fb170(auStack_18,lVar6 + uVar11);
                lVar7 = *(long *)(param_1 + 0x138);
                uVar11 = uVar11 + 0x30;
              } while (uVar11 < (ulong)(long)*(int *)(lVar7 + 0xc));
            }
            goto LAB_71006e8668;
          }
        }
        else if ((param_2 == 5) &&
                (lVar6 = (**(code **)(param_1 + 8))((long)(*(int *)(lVar6 + 0xc) + 0x40),param_1),
                lVar6 != 0)) {
          lVar7 = *(long *)(param_1 + 0x138);
          if (*(int *)(lVar7 + 0xc) != 0) {
            uVar11 = 0;
            do {
              FUN_71006fb0d0(auStack_18,8,0,0);
              FUN_7100738240(auStack_18,*(undefined8 *)(param_8 + 0x2c),
                             *(undefined8 *)(param_8 + 0x32));
              FUN_7100738240(auStack_18,param_8 + 8,0x40);
              if (uVar11 == 0) {
                FUN_7100738240(auStack_18,&DAT_71008393f8,1);
                FUN_7100738240(auStack_18,*(undefined8 *)(param_1 + 0x88),
                               *(undefined4 *)(param_1 + 0x90));
              }
              else {
                FUN_7100738240(auStack_18,lVar6,uVar11);
              }
              FUN_71006fb170(auStack_18,lVar6 + uVar11);
              lVar7 = *(long *)(param_1 + 0x138);
              uVar11 = uVar11 + 0x40;
            } while (uVar11 < (ulong)(long)*(int *)(lVar7 + 0xc));
          }
LAB_71006e8668:
          if (lVar6 != 0) {
            (**(code **)(lVar7 + 0x10))(param_1,lVar6,&local_30,param_1 + 0x148);
            if ((int)local_30 != 0) {
              FUN_71006ed700(lVar6,(long)*(int *)(*(long *)(param_1 + 0x138) + 0xc));
              (**(code **)(param_1 + 0x18))(lVar6,param_1);
            }
            goto LAB_71006e86b0;
          }
        }
      }
      else {
        local_30 = local_30 & 0xffffffff00000000;
        if (param_2 == 3) {
          lVar6 = (**(code **)(param_1 + 8))((long)(*(int *)(lVar6 + 0xc) + 0x20),param_1);
          if (lVar6 != 0) {
            lVar7 = *(long *)(param_1 + 0x1a8);
            if (*(int *)(lVar7 + 0xc) != 0) {
              uVar11 = 0;
              do {
                FUN_71006fb0d0(auStack_18,6,0,0);
                FUN_7100738240(auStack_18,*(undefined8 *)(param_8 + 0x2c),
                               *(undefined8 *)(param_8 + 0x32));
                FUN_7100738240(auStack_18,param_8 + 8,0x20);
                if (uVar11 == 0) {
                  FUN_7100738240(auStack_18,"E",1);
                  FUN_7100738240(auStack_18,*(undefined8 *)(param_1 + 0x88),
                                 *(undefined4 *)(param_1 + 0x90));
                }
                else {
                  FUN_7100738240(auStack_18,lVar6,uVar11);
                }
                FUN_71006fb170(auStack_18,lVar6 + uVar11);
                lVar7 = *(long *)(param_1 + 0x1a8);
                uVar11 = uVar11 + 0x20;
              } while (uVar11 < (ulong)(long)*(int *)(lVar7 + 0xc));
            }
            goto LAB_71006e843c;
          }
        }
        else if (param_2 == 4) {
          lVar6 = (**(code **)(param_1 + 8))((long)(*(int *)(lVar6 + 0xc) + 0x30),param_1);
          if (lVar6 != 0) {
            lVar7 = *(long *)(param_1 + 0x1a8);
            if (*(int *)(lVar7 + 0xc) != 0) {
              uVar11 = 0;
              do {
                FUN_71006fb0d0(auStack_18,7,0,0);
                FUN_7100738240(auStack_18,*(undefined8 *)(param_8 + 0x2c),
                               *(undefined8 *)(param_8 + 0x32));
                FUN_7100738240(auStack_18,param_8 + 8,0x30);
                if (uVar11 == 0) {
                  FUN_7100738240(auStack_18,"E",1);
                  FUN_7100738240(auStack_18,*(undefined8 *)(param_1 + 0x88),
                                 *(undefined4 *)(param_1 + 0x90));
                }
                else {
                  FUN_7100738240(auStack_18,lVar6,uVar11);
                }
                FUN_71006fb170(auStack_18,lVar6 + uVar11);
                lVar7 = *(long *)(param_1 + 0x1a8);
                uVar11 = uVar11 + 0x30;
              } while (uVar11 < (ulong)(long)*(int *)(lVar7 + 0xc));
            }
            goto LAB_71006e843c;
          }
        }
        else if ((param_2 == 5) &&
                (lVar6 = (**(code **)(param_1 + 8))((long)(*(int *)(lVar6 + 0xc) + 0x40),param_1),
                lVar6 != 0)) {
          lVar7 = *(long *)(param_1 + 0x1a8);
          if (*(int *)(lVar7 + 0xc) != 0) {
            uVar11 = 0;
            do {
              FUN_71006fb0d0(auStack_18,8,0,0);
              FUN_7100738240(auStack_18,*(undefined8 *)(param_8 + 0x2c),
                             *(undefined8 *)(param_8 + 0x32));
              FUN_7100738240(auStack_18,param_8 + 8,0x40);
              if (uVar11 == 0) {
                FUN_7100738240(auStack_18,"E",1);
                FUN_7100738240(auStack_18,*(undefined8 *)(param_1 + 0x88),
                               *(undefined4 *)(param_1 + 0x90));
              }
              else {
                FUN_7100738240(auStack_18,lVar6,uVar11);
              }
              FUN_71006fb170(auStack_18,lVar6 + uVar11);
              lVar7 = *(long *)(param_1 + 0x1a8);
              uVar11 = uVar11 + 0x40;
            } while (uVar11 < (ulong)(long)*(int *)(lVar7 + 0xc));
          }
LAB_71006e843c:
          if (lVar6 != 0) {
            (**(code **)(lVar7 + 0x10))(param_1,lVar6,&local_30,param_1 + 0x1b8);
            if ((int)local_30 != 0) {
              FUN_71006ed700(lVar6,(long)*(int *)(*(long *)(param_1 + 0x1a8) + 0xc));
              (**(code **)(param_1 + 0x18))(lVar6,param_1);
            }
            goto LAB_71006e8480;
          }
        }
      }
    }
    else {
      local_38 = 0;
      local_30 = local_30 & 0xffffffff00000000;
      if (param_2 == 3) {
        lVar6 = (**(code **)(param_1 + 8))((long)(*(int *)(lVar6 + 0x14) + 0x20),param_1);
        if (lVar6 != 0) {
          lVar7 = *(long *)(param_1 + 0x128);
          if (*(int *)(lVar7 + 0x14) != 0) {
            uVar11 = 0;
            do {
              FUN_71006fb0d0(auStack_18,6,0,0);
              FUN_7100738240(auStack_18,*(undefined8 *)(param_8 + 0x2c),
                             *(undefined8 *)(param_8 + 0x32));
              FUN_7100738240(auStack_18,param_8 + 8,0x20);
              if (uVar11 == 0) {
                FUN_7100738240(auStack_18,"B",1);
                FUN_7100738240(auStack_18,*(undefined8 *)(param_1 + 0x88),
                               *(undefined4 *)(param_1 + 0x90));
              }
              else {
                FUN_7100738240(auStack_18,lVar6,uVar11);
              }
              FUN_71006fb170(auStack_18,lVar6 + uVar11);
              lVar7 = *(long *)(param_1 + 0x128);
              uVar11 = uVar11 + 0x20;
            } while (uVar11 < (ulong)(long)*(int *)(lVar7 + 0x14));
          }
          lVar7 = (**(code **)(param_1 + 8))((long)(*(int *)(lVar7 + 0x18) + 0x20),param_1);
          if (lVar7 != 0) {
            lVar8 = *(long *)(param_1 + 0x128);
            uVar11 = 0;
            if (*(int *)(lVar8 + 0x18) != 0) {
              do {
                FUN_71006fb0d0(auStack_18,6,0,0);
                FUN_7100738240(auStack_18,*(undefined8 *)(param_8 + 0x2c),
                               *(undefined8 *)(param_8 + 0x32));
                FUN_7100738240(auStack_18,param_8 + 8,0x20);
                if (uVar11 == 0) {
                  FUN_7100738240(auStack_18,"D",1);
                  FUN_7100738240(auStack_18,*(undefined8 *)(param_1 + 0x88),
                                 *(undefined4 *)(param_1 + 0x90));
                }
                else {
                  FUN_7100738240(auStack_18,lVar7,uVar11);
                }
                FUN_71006fb170(auStack_18,lVar7 + uVar11);
                lVar8 = *(long *)(param_1 + 0x128);
                uVar11 = uVar11 + 0x20;
              } while (uVar11 < (ulong)(long)*(int *)(lVar8 + 0x18));
            }
            goto LAB_71006e82b4;
          }
          goto LAB_71006e9664;
        }
      }
      else if (param_2 == 4) {
        lVar6 = (**(code **)(param_1 + 8))((long)(*(int *)(lVar6 + 0x14) + 0x30),param_1);
        if (lVar6 != 0) {
          lVar7 = *(long *)(param_1 + 0x128);
          if (*(int *)(lVar7 + 0x14) != 0) {
            uVar11 = 0;
            do {
              FUN_71006fb0d0(auStack_18,7,0,0);
              FUN_7100738240(auStack_18,*(undefined8 *)(param_8 + 0x2c),
                             *(undefined8 *)(param_8 + 0x32));
              FUN_7100738240(auStack_18,param_8 + 8,0x30);
              if (uVar11 == 0) {
                FUN_7100738240(auStack_18,"B",1);
                FUN_7100738240(auStack_18,*(undefined8 *)(param_1 + 0x88),
                               *(undefined4 *)(param_1 + 0x90));
              }
              else {
                FUN_7100738240(auStack_18,lVar6,uVar11);
              }
              FUN_71006fb170(auStack_18,lVar6 + uVar11);
              lVar7 = *(long *)(param_1 + 0x128);
              uVar11 = uVar11 + 0x30;
            } while (uVar11 < (ulong)(long)*(int *)(lVar7 + 0x14));
          }
          lVar7 = (**(code **)(param_1 + 8))((long)(*(int *)(lVar7 + 0x18) + 0x30),param_1);
          if (lVar7 != 0) {
            lVar8 = *(long *)(param_1 + 0x128);
            if (*(int *)(lVar8 + 0x18) != 0) {
              uVar11 = 0;
              do {
                FUN_71006fb0d0(auStack_18,7,0,0);
                FUN_7100738240(auStack_18,*(undefined8 *)(param_8 + 0x2c),
                               *(undefined8 *)(param_8 + 0x32));
                FUN_7100738240(auStack_18,param_8 + 8,0x30);
                if (uVar11 == 0) {
                  FUN_7100738240(auStack_18,"D",1);
                  FUN_7100738240(auStack_18,*(undefined8 *)(param_1 + 0x88),
                                 *(undefined4 *)(param_1 + 0x90));
                }
                else {
                  FUN_7100738240(auStack_18,lVar7,uVar11);
                }
                FUN_71006fb170(auStack_18,lVar7 + uVar11);
                lVar8 = *(long *)(param_1 + 0x128);
                uVar11 = uVar11 + 0x30;
              } while (uVar11 < (ulong)(long)*(int *)(lVar8 + 0x18));
            }
            goto LAB_71006e82b4;
          }
          goto LAB_71006e9664;
        }
      }
      else if ((param_2 == 5) &&
              (lVar6 = (**(code **)(param_1 + 8))((long)(*(int *)(lVar6 + 0x14) + 0x40),param_1),
              lVar6 != 0)) {
        lVar7 = *(long *)(param_1 + 0x128);
        if (*(int *)(lVar7 + 0x14) != 0) {
          uVar11 = 0;
          do {
            FUN_71006fb0d0(auStack_18,8,0,0);
            FUN_7100738240(auStack_18,*(undefined8 *)(param_8 + 0x2c),
                           *(undefined8 *)(param_8 + 0x32));
            FUN_7100738240(auStack_18,param_8 + 8,0x40);
            if (uVar11 == 0) {
              FUN_7100738240(auStack_18,"B",1);
              FUN_7100738240(auStack_18,*(undefined8 *)(param_1 + 0x88),
                             *(undefined4 *)(param_1 + 0x90));
            }
            else {
              FUN_7100738240(auStack_18,lVar6,uVar11);
            }
            FUN_71006fb170(auStack_18,lVar6 + uVar11);
            lVar7 = *(long *)(param_1 + 0x128);
            uVar11 = uVar11 + 0x40;
          } while (uVar11 < (ulong)(long)*(int *)(lVar7 + 0x14));
        }
        lVar7 = (**(code **)(param_1 + 8))((long)(*(int *)(lVar7 + 0x18) + 0x40),param_1);
        if (lVar7 != 0) {
          lVar8 = *(long *)(param_1 + 0x128);
          if (*(int *)(lVar8 + 0x18) != 0) {
            uVar11 = 0;
            do {
              FUN_71006fb0d0(auStack_18,8,0,0);
              FUN_7100738240(auStack_18,*(undefined8 *)(param_8 + 0x2c),
                             *(undefined8 *)(param_8 + 0x32));
              FUN_7100738240(auStack_18,param_8 + 8,0x40);
              if (uVar11 == 0) {
                FUN_7100738240(auStack_18,"D",1);
                FUN_7100738240(auStack_18,*(undefined8 *)(param_1 + 0x88),
                               *(undefined4 *)(param_1 + 0x90));
              }
              else {
                FUN_7100738240(auStack_18,lVar7,uVar11);
              }
              FUN_71006fb170(auStack_18,lVar7 + uVar11);
              lVar8 = *(long *)(param_1 + 0x128);
              uVar11 = uVar11 + 0x40;
            } while (uVar11 < (ulong)(long)*(int *)(lVar8 + 0x18));
          }
LAB_71006e82b4:
          if (lVar7 != 0) {
            iVar2 = (**(code **)(lVar8 + 0x28))
                              (param_1,lVar8,lVar6,&local_38,lVar7,&local_30,0,param_1 + 0x130);
            if (iVar2 == 0) {
              if (local_38 != 0) {
                FUN_71006ed700(lVar6,(long)*(int *)(*(long *)(param_1 + 0x128) + 0x14));
                (**(code **)(param_1 + 0x18))(lVar6,param_1);
              }
              if ((int)local_30 != 0) {
                FUN_71006ed700(lVar7,(long)*(int *)(*(long *)(param_1 + 0x128) + 0x18));
                (**(code **)(param_1 + 0x18))(lVar7,param_1);
              }
              goto LAB_71006e8310;
            }
            (**(code **)(param_1 + 0x18))(lVar6,param_1);
            (**(code **)(param_1 + 0x18))(lVar7,param_1);
            goto LAB_71006e81e0;
          }
        }
LAB_71006e9664:
        uVar11 = 0xfffffffb;
        (**(code **)(param_1 + 0x18))(lVar6,param_1);
        goto LAB_71006e7b64;
      }
    }
LAB_71006e81e0:
    uVar11 = 0xfffffffb;
    goto LAB_71006e7b64;
  }
  local_38 = 0;
  local_30 = local_30 & 0xffffffff00000000;
  if (param_2 == 3) {
    uVar11 = 0xffffffff;
    lVar6 = (**(code **)(param_1 + 8))((long)(*(int *)(lVar6 + 0x14) + 0x20),param_1);
    if (lVar6 == 0) goto LAB_71006e7b64;
    lVar7 = *(long *)(param_1 + 0x198);
    if (*(int *)(lVar7 + 0x14) != 0) {
      uVar11 = 0;
      do {
        FUN_71006fb0d0(auStack_18,6,0,0);
        FUN_7100738240(auStack_18,*(undefined8 *)(param_8 + 0x2c),*(undefined8 *)(param_8 + 0x32));
        FUN_7100738240(auStack_18,param_8 + 8,0x20);
        if (uVar11 == 0) {
          FUN_7100738240(auStack_18,"A",1);
          FUN_7100738240(auStack_18,*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90))
          ;
        }
        else {
          FUN_7100738240(auStack_18,lVar6,uVar11);
        }
        FUN_71006fb170(auStack_18,lVar6 + uVar11);
        lVar7 = *(long *)(param_1 + 0x198);
        uVar11 = uVar11 + 0x20;
      } while (uVar11 < (ulong)(long)*(int *)(lVar7 + 0x14));
    }
    lVar7 = (**(code **)(param_1 + 8))((long)(*(int *)(lVar7 + 0x18) + 0x20),param_1);
    if (lVar7 != 0) {
      lVar8 = *(long *)(param_1 + 0x198);
      uVar11 = 0;
      if (*(int *)(lVar8 + 0x18) != 0) {
        do {
          FUN_71006fb0d0(auStack_18,6,0,0);
          FUN_7100738240(auStack_18,*(undefined8 *)(param_8 + 0x2c),*(undefined8 *)(param_8 + 0x32))
          ;
          FUN_7100738240(auStack_18,param_8 + 8,0x20);
          if (uVar11 == 0) {
            FUN_7100738240(auStack_18,"C",1);
            FUN_7100738240(auStack_18,*(undefined8 *)(param_1 + 0x88),
                           *(undefined4 *)(param_1 + 0x90));
          }
          else {
            FUN_7100738240(auStack_18,lVar7,uVar11);
          }
          FUN_71006fb170(auStack_18,lVar7 + uVar11);
          lVar8 = *(long *)(param_1 + 0x198);
          uVar11 = uVar11 + 0x20;
        } while (uVar11 < (ulong)(long)*(int *)(lVar8 + 0x18));
      }
      goto LAB_71006e8048;
    }
  }
  else if (param_2 == 4) {
    lVar6 = (**(code **)(param_1 + 8))((long)(*(int *)(lVar6 + 0x14) + 0x30),param_1);
    if (lVar6 == 0) goto LAB_71006e8590;
    lVar7 = *(long *)(param_1 + 0x198);
    if (*(int *)(lVar7 + 0x14) != 0) {
      uVar11 = 0;
      do {
        FUN_71006fb0d0(auStack_18,7,0,0);
        FUN_7100738240(auStack_18,*(undefined8 *)(param_8 + 0x2c),*(undefined8 *)(param_8 + 0x32));
        FUN_7100738240(auStack_18,param_8 + 8,0x30);
        if (uVar11 == 0) {
          FUN_7100738240(auStack_18,"A",1);
          FUN_7100738240(auStack_18,*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90))
          ;
        }
        else {
          FUN_7100738240(auStack_18,lVar6,uVar11);
        }
        FUN_71006fb170(auStack_18,lVar6 + uVar11);
        lVar7 = *(long *)(param_1 + 0x198);
        uVar11 = uVar11 + 0x30;
      } while (uVar11 < (ulong)(long)*(int *)(lVar7 + 0x14));
    }
    lVar7 = (**(code **)(param_1 + 8))((long)(*(int *)(lVar7 + 0x18) + 0x30),param_1);
    if (lVar7 != 0) {
      lVar8 = *(long *)(param_1 + 0x198);
      if (*(int *)(lVar8 + 0x18) != 0) {
        uVar11 = 0;
        do {
          FUN_71006fb0d0(auStack_18,7,0,0);
          FUN_7100738240(auStack_18,*(undefined8 *)(param_8 + 0x2c),*(undefined8 *)(param_8 + 0x32))
          ;
          FUN_7100738240(auStack_18,param_8 + 8,0x30);
          if (uVar11 == 0) {
            FUN_7100738240(auStack_18,"C",1);
            FUN_7100738240(auStack_18,*(undefined8 *)(param_1 + 0x88),
                           *(undefined4 *)(param_1 + 0x90));
          }
          else {
            FUN_7100738240(auStack_18,lVar7,uVar11);
          }
          FUN_71006fb170(auStack_18,lVar7 + uVar11);
          lVar8 = *(long *)(param_1 + 0x198);
          uVar11 = uVar11 + 0x30;
        } while (uVar11 < (ulong)(long)*(int *)(lVar8 + 0x18));
      }
      goto LAB_71006e8048;
    }
  }
  else {
    if ((param_2 != 5) ||
       (lVar6 = (**(code **)(param_1 + 8))((long)(*(int *)(lVar6 + 0x14) + 0x40),param_1),
       lVar6 == 0)) {
LAB_71006e8590:
      uVar11 = 0xffffffff;
      goto LAB_71006e7b64;
    }
    lVar7 = *(long *)(param_1 + 0x198);
    if (*(int *)(lVar7 + 0x14) != 0) {
      uVar11 = 0;
      do {
        FUN_71006fb0d0(auStack_18,8,0,0);
        FUN_7100738240(auStack_18,*(undefined8 *)(param_8 + 0x2c),*(undefined8 *)(param_8 + 0x32));
        FUN_7100738240(auStack_18,param_8 + 8,0x40);
        if (uVar11 == 0) {
          FUN_7100738240(auStack_18,"A",1);
          FUN_7100738240(auStack_18,*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90))
          ;
        }
        else {
          FUN_7100738240(auStack_18,lVar6,uVar11);
        }
        FUN_71006fb170(auStack_18,lVar6 + uVar11);
        lVar7 = *(long *)(param_1 + 0x198);
        uVar11 = uVar11 + 0x40;
      } while (uVar11 < (ulong)(long)*(int *)(lVar7 + 0x14));
    }
    lVar7 = (**(code **)(param_1 + 8))((long)(*(int *)(lVar7 + 0x18) + 0x40),param_1);
    if (lVar7 != 0) {
      lVar8 = *(long *)(param_1 + 0x198);
      if (*(int *)(lVar8 + 0x18) != 0) {
        uVar11 = 0;
        do {
          FUN_71006fb0d0(auStack_18,8,0,0);
          FUN_7100738240(auStack_18,*(undefined8 *)(param_8 + 0x2c),*(undefined8 *)(param_8 + 0x32))
          ;
          FUN_7100738240(auStack_18,param_8 + 8,0x40);
          if (uVar11 == 0) {
            FUN_7100738240(auStack_18,"C",1);
            FUN_7100738240(auStack_18,*(undefined8 *)(param_1 + 0x88),
                           *(undefined4 *)(param_1 + 0x90));
          }
          else {
            FUN_7100738240(auStack_18,lVar7,uVar11);
          }
          FUN_71006fb170(auStack_18,lVar7 + uVar11);
          lVar8 = *(long *)(param_1 + 0x198);
          uVar11 = uVar11 + 0x40;
        } while (uVar11 < (ulong)(long)*(int *)(lVar8 + 0x18));
      }
LAB_71006e8048:
      if (lVar7 != 0) {
        iVar2 = (**(code **)(lVar8 + 0x28))
                          (param_1,lVar8,lVar6,&local_38,lVar7,&local_30,1,param_1 + 0x1a0);
        if (iVar2 != 0) {
          (**(code **)(param_1 + 0x18))(lVar6,param_1);
          uVar11 = 0xfffffffb;
          (**(code **)(param_1 + 0x18))(lVar7,param_1);
          goto LAB_71006e7b64;
        }
        if (local_38 != 0) {
          FUN_71006ed700(lVar6,(long)*(int *)(*(long *)(param_1 + 0x198) + 0x14));
          (**(code **)(param_1 + 0x18))(lVar6,param_1);
        }
        if ((int)local_30 != 0) {
          FUN_71006ed700(lVar7,(long)*(int *)(*(long *)(param_1 + 0x198) + 0x18));
          (**(code **)(param_1 + 0x18))(lVar7,param_1);
        }
        goto LAB_71006e80a8;
      }
    }
  }
  uVar11 = 0xfffffffb;
  (**(code **)(param_1 + 0x18))(lVar6,param_1);
LAB_71006e7b64:
  FUN_71006fb260(*(undefined8 *)(param_8 + 0x28));
  param_8[0x28] = 0;
  param_8[0x29] = 0;
  if (*(long *)(param_8 + 0x2c) != 0) {
    (**(code **)(param_1 + 0x18))(*(long *)(param_8 + 0x2c),param_1);
    param_8[0x2c] = 0;
    param_8[0x2d] = 0;
  }
  *param_8 = 0;
  return uVar11;
}



// ===== FUN_71006e9800 @ 71006e9800 (size=548) =====

int FUN_71006e9800(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined4 local_c;
  long local_8;
  
  iVar1 = *param_2;
  if (iVar1 == 0) {
    param_2[0x90] = 0;
    param_2[0x91] = 0;
    *param_2 = 2;
LAB_71006e982c:
    iVar1 = FUN_71006e7a70(**(undefined8 **)(param_1 + 0x78),&local_c);
    if (iVar1 != 0) {
      iVar2 = FUN_71006ed140(param_1,0xffffffff,"Unknown KEX nistp curve type");
      goto LAB_71006e9964;
    }
    iVar1 = FUN_71006fbea0(param_1,param_2 + 0x8e,param_2 + 0x90,param_2 + 0x92,local_c);
    if (iVar1 != 0) {
      iVar2 = FUN_71006ed140(param_1,iVar1,"Unable to create private key");
      goto LAB_71006e9964;
    }
    local_8 = (long)param_2 + 0x121;
    *(undefined1 *)(param_2 + 0x48) = 0x1e;
    FUN_71006ed260(&local_8,*(undefined8 *)(param_2 + 0x90),*(undefined8 *)(param_2 + 0x92));
    *param_2 = 3;
    lVar3 = *(long *)(param_2 + 0x92) + 5;
    *(long *)(param_2 + 0x8a) = lVar3;
LAB_71006e9890:
    iVar1 = FUN_71006f87d0(param_1,param_2 + 0x48,lVar3,0,0);
    if (iVar1 == -0x25) {
      return -0x25;
    }
    if (iVar1 != 0) {
      iVar2 = FUN_71006ed140(param_1,iVar1,"Unable to send ECDH_INIT");
      goto LAB_71006e9964;
    }
    *param_2 = 4;
LAB_71006e98b8:
    iVar1 = FUN_71006eee10(param_1,0x1f,param_2 + 0x88,param_2 + 0x8c,0,0,0,param_2 + 2);
    if (iVar1 == -0x25) {
      return -0x25;
    }
    if (iVar1 != 0) {
      iVar2 = FUN_71006ed140(param_1,iVar1,"Timeout waiting for ECDH_REPLY reply");
      goto LAB_71006e9964;
    }
    *param_2 = 5;
  }
  else {
    if (iVar1 == 2) goto LAB_71006e982c;
    if (iVar1 == 3) {
      lVar3 = *(long *)(param_2 + 0x8a);
      goto LAB_71006e9890;
    }
    if (iVar1 == 4) goto LAB_71006e98b8;
    iVar2 = 0;
    if (iVar1 != 5) goto LAB_71006e9964;
  }
  FUN_71006e7a70(**(undefined8 **)(param_1 + 0x78),&local_c);
  iVar2 = FUN_71006e7b00(param_1,local_c,*(undefined8 *)(param_2 + 0x88),
                         *(undefined8 *)(param_2 + 0x8c),*(undefined8 *)(param_2 + 0x90),
                         *(undefined8 *)(param_2 + 0x92),*(undefined8 *)(param_2 + 0x8e),param_2 + 6
                        );
  if (iVar2 == -0x25) {
    return -0x25;
  }
  (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_2 + 0x88),param_1);
LAB_71006e9964:
  if (*(long *)(param_2 + 0x90) != 0) {
    (**(code **)(param_1 + 0x18))(*(long *)(param_2 + 0x90),param_1);
    param_2[0x90] = 0;
    param_2[0x91] = 0;
  }
  if (*(long *)(param_2 + 0x8e) != 0) {
    FUN_71006fbe70();
    param_2[0x8e] = 0;
    param_2[0x8f] = 0;
  }
  *param_2 = 0;
  return iVar2;
}



// ===== FUN_71006e9a30 @ 71006e9a30 (size=52) =====

void FUN_71006e9a30(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (((param_1 != 0x200) && ((param_1 & 0xffffff7f) != 0x100)) && (param_1 != 1)) {
    return;
  }
  FUN_7100738240(param_2,param_3,param_4);
  return;
}



// ===== FUN_71006e9a70 @ 71006e9a70 (size=328) =====

long FUN_71006e9a70(long param_1,ulong param_2,long param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_1 == 0 || param_3 == 0) {
    return 0;
  }
  if (param_2 <= param_4 - 1) {
    return 0;
  }
  iVar1 = FUN_710080b4c0(param_1,param_3,param_4);
  lVar2 = param_1;
  uVar3 = param_2;
  if ((iVar1 != 0) || ((param_2 != param_4 && (*(char *)(param_1 + param_4) != ',')))) {
    while( true ) {
      lVar2 = FUN_710080c980(lVar2,0x2c,uVar3);
      uVar3 = (param_1 + param_2) - lVar2;
      if (lVar2 == 0) break;
      lVar2 = lVar2 + 1;
      if (param_2 <= uVar3 - 1 || uVar3 <= param_4) {
        return 0;
      }
      iVar1 = FUN_710080b4c0(lVar2,param_3,param_4);
      if (iVar1 == 0) {
        if (param_2 == (lVar2 - param_1) + param_4) {
          return lVar2;
        }
        if (*(char *)(lVar2 + param_4) == ',') {
          return lVar2;
        }
      }
    }
  }
  return lVar2;
}



// ===== FUN_71006e9bc0 @ 71006e9bc0 (size=352) =====

undefined8 FUN_71006e9bc0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  char *pcVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  plVar2 = (long *)FUN_71006fd940();
  pcVar6 = *(char **)(param_2 + 0x60);
  if (pcVar6 == (char *)0x0) {
    plVar7 = (long *)*plVar2;
    while ((plVar7 != (long *)0x0 && (lVar4 = *plVar7, lVar4 != 0))) {
      uVar9 = FUN_710081ce00(lVar4);
      lVar4 = FUN_71006e9a70(param_3,param_4,lVar4,uVar9);
      if (lVar4 != 0) {
        *(long **)(param_2 + 0x40) = plVar7;
        return 0;
      }
      plVar2 = plVar2 + 1;
      plVar7 = (long *)*plVar2;
    }
  }
  else {
    cVar1 = *pcVar6;
    while (cVar1 != '\0') {
      lVar4 = FUN_710080eb40(pcVar6,0x2c);
      lVar8 = lVar4 - (long)pcVar6;
      if (lVar4 == 0) {
        lVar8 = FUN_710081ce00(pcVar6);
        lVar4 = FUN_71006e9a70(param_3,param_4,pcVar6);
        if (lVar4 == 0) {
          return 0xffffffff;
        }
LAB_71006e9c60:
        puVar5 = (undefined8 *)*plVar2;
        while( true ) {
          if (puVar5 == (undefined8 *)0x0) {
            return 0xffffffff;
          }
          uVar9 = *puVar5;
          lVar4 = FUN_710081ce00(uVar9);
          if ((lVar8 == lVar4) && (uVar9 = FUN_710080b4c0(uVar9,pcVar6,lVar8), (int)uVar9 == 0))
          break;
          plVar2 = plVar2 + 1;
          puVar5 = (undefined8 *)*plVar2;
        }
        *(undefined8 **)(param_2 + 0x40) = puVar5;
        return uVar9;
      }
      lVar3 = FUN_71006e9a70(param_3,param_4,pcVar6,lVar8);
      if (lVar3 != 0) goto LAB_71006e9c60;
      pcVar6 = (char *)(lVar4 + 1);
      cVar1 = *(char *)(lVar4 + 1);
    }
  }
  return 0xffffffff;
}



// ===== FUN_71006e9d20 @ 71006e9d20 (size=788) =====

void FUN_71006e9d20(int param_1,long param_2,long param_3,long *param_4,ulong param_5,
                   undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_18 [24];
  
  if (param_1 == 0x200) {
    lVar1 = (**(code **)(param_2 + 8))(param_5 + 0x40);
    *param_4 = lVar1;
    if ((lVar1 != 0) && (param_5 != 0)) {
      uVar2 = 0;
      do {
        FUN_71006fb0d0(auStack_18,8,0,0);
        FUN_7100738240(auStack_18,*(undefined8 *)(param_3 + 0xb0),*(undefined8 *)(param_3 + 200));
        FUN_7100738240(auStack_18,param_3 + 0x20,0x40);
        if (uVar2 == 0) {
          FUN_7100738240(auStack_18,param_6,1);
          FUN_7100738240(auStack_18,*(undefined8 *)(param_2 + 0x88),*(undefined4 *)(param_2 + 0x90))
          ;
        }
        else {
          FUN_7100738240(auStack_18,*param_4,uVar2);
        }
        lVar1 = *param_4 + uVar2;
        uVar2 = uVar2 + 0x40;
        FUN_71006fb170(auStack_18,lVar1);
      } while (uVar2 < param_5);
    }
  }
  else if (param_1 == 0x180) {
    lVar1 = (**(code **)(param_2 + 8))(param_5 + 0x30);
    *param_4 = lVar1;
    if ((lVar1 != 0) && (param_5 != 0)) {
      uVar2 = 0;
      do {
        FUN_71006fb0d0(auStack_18,7,0,0);
        FUN_7100738240(auStack_18,*(undefined8 *)(param_3 + 0xb0),*(undefined8 *)(param_3 + 200));
        FUN_7100738240(auStack_18,param_3 + 0x20,0x30);
        if (uVar2 == 0) {
          FUN_7100738240(auStack_18,param_6,1);
          FUN_7100738240(auStack_18,*(undefined8 *)(param_2 + 0x88),*(undefined4 *)(param_2 + 0x90))
          ;
        }
        else {
          FUN_7100738240(auStack_18,*param_4,uVar2);
        }
        lVar1 = *param_4 + uVar2;
        uVar2 = uVar2 + 0x30;
        FUN_71006fb170(auStack_18,lVar1);
      } while (uVar2 < param_5);
    }
  }
  else if (param_1 == 0x100) {
    lVar1 = (**(code **)(param_2 + 8))(param_5 + 0x20);
    *param_4 = lVar1;
    if ((lVar1 != 0) && (param_5 != 0)) {
      uVar2 = 0;
      do {
        FUN_71006fb0d0(auStack_18,6,0,0);
        FUN_7100738240(auStack_18,*(undefined8 *)(param_3 + 0xb0),*(undefined8 *)(param_3 + 200));
        FUN_7100738240(auStack_18,param_3 + 0x20,0x20);
        if (uVar2 == 0) {
          FUN_7100738240(auStack_18,param_6,1);
          FUN_7100738240(auStack_18,*(undefined8 *)(param_2 + 0x88),*(undefined4 *)(param_2 + 0x90))
          ;
        }
        else {
          FUN_7100738240(auStack_18,*param_4,uVar2);
        }
        lVar1 = *param_4 + uVar2;
        uVar2 = uVar2 + 0x20;
        FUN_71006fb170(auStack_18,lVar1);
      } while (uVar2 < param_5);
    }
  }
  else if (param_1 == 1) {
    lVar1 = (**(code **)(param_2 + 8))(param_5 + 0x14);
    *param_4 = lVar1;
    if ((lVar1 != 0) && (param_5 != 0)) {
      uVar2 = 0;
      do {
        FUN_71006fb0d0(auStack_18,4,0,0);
        FUN_7100738240(auStack_18,*(undefined8 *)(param_3 + 0xb0),*(undefined8 *)(param_3 + 200));
        FUN_7100738240(auStack_18,param_3 + 0x20,0x14);
        if (uVar2 == 0) {
          FUN_7100738240(auStack_18,param_6,1);
          FUN_7100738240(auStack_18,*(undefined8 *)(param_2 + 0x88),*(undefined4 *)(param_2 + 0x90))
          ;
        }
        else {
          FUN_7100738240(auStack_18,*param_4,uVar2);
        }
        lVar1 = *param_4 + uVar2;
        uVar2 = uVar2 + 0x14;
        FUN_71006fb170(auStack_18,lVar1);
      } while (uVar2 < param_5);
    }
  }
  return;
}



// ===== FUN_71006ea040 @ 71006ea040 (size=4520) =====

int FUN_71006ea040(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,int param_5
                  ,undefined8 param_6,char param_7,undefined1 param_8,long param_9,
                  undefined8 param_10,int *param_11)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  long local_e0;
  long local_d8;
  ulong local_d0;
  undefined1 auStack_c8 [24];
  undefined8 local_48;
  int local_3c;
  int local_38 [2];
  ulong local_30;
  long lStack_28;
  ulong local_20;
  long local_18 [3];
  
  local_48 = param_6;
  if (param_5 == 0x200) {
    iVar1 = *param_11;
    uVar11 = 0x40;
    if (iVar1 != 0) goto LAB_71006ea0cc;
LAB_71006ea1a4:
    param_11[2] = 0;
    param_11[3] = 0;
    param_11[4] = 0;
    param_11[5] = 0;
    param_11[0x20] = 0;
    param_11[0x21] = 0;
    param_11[0x2c] = 0;
    param_11[0x2d] = 0;
    FUN_71006fb840(param_11 + 0x22);
    uVar7 = FUN_71006fb220();
    *(undefined8 *)(param_11 + 0x24) = uVar7;
    uVar7 = FUN_71006fb220();
    *(undefined8 *)(param_11 + 0x26) = uVar7;
    uVar7 = FUN_71006fb220();
    param_11[0x38] = 0;
    param_11[0x39] = 0;
    param_11[0x3a] = 0;
    param_11[0x3b] = 0;
    *(undefined8 *)(param_11 + 0x28) = uVar7;
    uVar5 = FUN_7100729ba0(param_3);
    if (uVar5 < 0x4001) {
      iVar1 = 0;
      iVar3 = FUN_71006fb870(param_11 + 0x22,*(undefined8 *)(param_11 + 0x24),param_2,param_3,
                             param_4);
      if (iVar3 != 0) goto LAB_71006ea0fc;
      lVar8 = FUN_7100729c10(*(undefined8 *)(param_11 + 0x24));
      *(long *)(param_11 + 0x1a) = lVar8 + 6;
      uVar5 = FUN_7100729ba0(*(undefined8 *)(param_11 + 0x24));
      lVar8 = *(long *)(param_11 + 0x1a);
      if ((uVar5 & 7) != 0) {
        lVar8 = lVar8 + -1;
        *(long *)(param_11 + 0x1a) = lVar8;
      }
      pcVar4 = (char *)(**(code **)(param_1 + 8))(lVar8,param_1);
      *(char **)(param_11 + 2) = pcVar4;
      if (pcVar4 == (char *)0x0) {
        iVar1 = FUN_71006ed140(param_1,0xfffffffa,"Out of memory error");
        goto LAB_71006ea0fc;
      }
      *pcVar4 = param_7;
      FUN_71006ed220(*(long *)(param_11 + 2) + 1,(int)*(undefined8 *)(param_11 + 0x1a) + -5);
      uVar5 = FUN_7100729ba0(*(undefined8 *)(param_11 + 0x24));
      if ((uVar5 & 7) == 0) {
        *(undefined1 *)(*(long *)(param_11 + 2) + 5) = 0;
        uVar7 = *(undefined8 *)(param_11 + 0x24);
        lVar8 = *(long *)(param_11 + 2) + 6;
      }
      else {
        uVar7 = *(undefined8 *)(param_11 + 0x24);
        lVar8 = *(long *)(param_11 + 2) + 5;
      }
      uVar6 = FUN_7100729c10(uVar7);
      FUN_7100729e40(uVar7,lVar8,uVar6);
      *param_11 = 2;
      goto LAB_71006ea2a0;
    }
    iVar1 = FUN_71006ed140(param_1,0xffffffde,"dh modulus value is too large");
    goto LAB_71006ea0fc;
  }
  if (param_5 != 0x180) {
    if (param_5 == 0x100) {
      uVar11 = 0x20;
      goto LAB_71006ea0c4;
    }
    uVar11 = 0x14;
    if (param_5 == 1) goto LAB_71006ea0c4;
    iVar1 = FUN_71006ed140(param_1,0xfffffff2,"sha algo value is unimplemented");
    goto LAB_71006ea0fc;
  }
  uVar11 = 0x30;
LAB_71006ea0c4:
  iVar1 = *param_11;
  if (iVar1 == 0) goto LAB_71006ea1a4;
LAB_71006ea0cc:
  if (iVar1 == 2) {
LAB_71006ea2a0:
    iVar1 = FUN_71006f87d0(param_1,*(undefined8 *)(param_11 + 2),*(undefined8 *)(param_11 + 0x1a),0,
                           0);
    if (iVar1 != -0x25) {
      if (iVar1 == 0) {
        *param_11 = 3;
        goto LAB_71006ea2cc;
      }
      iVar1 = FUN_71006ed140(param_1,iVar1,"Unable to send KEX init message");
      goto LAB_71006ea0fc;
    }
LAB_71006eaf20:
    iVar1 = -0x25;
  }
  else {
    if (iVar1 == 3) {
LAB_71006ea2cc:
      if ((*(byte *)(param_1 + 0x80) & 1) != 0) {
        iVar1 = FUN_71006eef20(param_1,param_11 + 0x3c);
        if (iVar1 == -0x25) goto LAB_71006eaf20;
        if (iVar1 < 1) goto LAB_71006ea0fc;
        *(byte *)(param_1 + 0x80) = *(byte *)(param_1 + 0x80) & 0xfe;
      }
      *param_11 = 4;
LAB_71006ea2dc:
      iVar1 = FUN_71006eee10(param_1,param_8,param_11 + 4,param_11 + 0x1c,0,0,0,param_11 + 0x38);
      if (iVar1 == -0x25) {
        return -0x25;
      }
      if (iVar1 == 0) {
        uVar5 = *(ulong *)(param_11 + 0x1c);
        if (uVar5 < 5) {
          iVar1 = FUN_71006ed140(param_1,0xfffffff2,"Unexpected packet length");
        }
        else {
          local_30 = *(ulong *)(param_11 + 4);
          lStack_28 = local_30 + 1;
          local_20 = uVar5;
          if (*(long *)(param_1 + 0xb0) != 0) {
            (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0xb0),param_1);
          }
          iVar1 = FUN_71006ed950(param_1,&local_30,param_1 + 0xb0,local_38);
          if (iVar1 == 0) {
            *(int *)(param_1 + 0xb8) = local_38[0];
            iVar1 = FUN_71006fb0d0(local_18,3,0,0);
            if (iVar1 != 0) {
              FUN_7100738240(local_18,*(undefined8 *)(param_1 + 0xb0),
                             *(undefined4 *)(param_1 + 0xb8));
              FUN_71006fb170(local_18,param_1 + 0xbc);
              iVar1 = 1;
            }
            *(int *)(param_1 + 0xcc) = iVar1;
            iVar1 = FUN_71006fb0d0(local_18,4,0,0);
            if (iVar1 != 0) {
              FUN_7100738240(local_18,*(undefined8 *)(param_1 + 0xb0),
                             *(undefined4 *)(param_1 + 0xb8));
              FUN_71006fb170(local_18,param_1 + 0xd0);
              iVar1 = 1;
            }
            *(int *)(param_1 + 0xe4) = iVar1;
            iVar1 = FUN_71006fb0d0(local_18,6,0,0);
            if (iVar1 != 0) {
              FUN_7100738240(local_18,*(undefined8 *)(param_1 + 0xb0),
                             *(undefined4 *)(param_1 + 0xb8));
              FUN_71006fb170(local_18,param_1 + 0xe8);
              iVar1 = 1;
            }
            pcVar10 = *(code **)(*(long *)(param_1 + 0xa0) + 0x10);
            *(int *)(param_1 + 0x108) = iVar1;
            iVar1 = (*pcVar10)(param_1,*(undefined8 *)(param_1 + 0xb0),
                               *(undefined4 *)(param_1 + 0xb8),param_1 + 0xa8);
            if (iVar1 == 0) {
              iVar1 = FUN_71006ed860(&local_30,param_11 + 0x2a,param_11 + 0x30);
              if (iVar1 == 0) {
                FUN_7100729cb0(*(undefined8 *)(param_11 + 0x26),*(undefined8 *)(param_11 + 0x2a),
                               *(undefined8 *)(param_11 + 0x30));
                iVar1 = FUN_71006ed860(&local_30,param_11 + 0x2e,param_11 + 0x34);
                if (iVar1 == 0) {
                  FUN_71006fb980(param_11 + 0x22,*(undefined8 *)(param_11 + 0x28),
                                 *(undefined8 *)(param_11 + 0x26),param_3);
                  lVar8 = FUN_7100729c10(*(undefined8 *)(param_11 + 0x28));
                  *(long *)(param_11 + 0x32) = lVar8 + 5;
                  uVar5 = FUN_7100729ba0(*(undefined8 *)(param_11 + 0x28));
                  lVar8 = *(long *)(param_11 + 0x32);
                  if ((uVar5 & 7) != 0) {
                    lVar8 = lVar8 + -1;
                    *(long *)(param_11 + 0x32) = lVar8;
                  }
                  lVar8 = (**(code **)(param_1 + 8))(lVar8,param_1);
                  *(long *)(param_11 + 0x2c) = lVar8;
                  if (lVar8 == 0) {
                    iVar1 = FUN_71006ed140(param_1,0xfffffffa,"Unable to allocate buffer for K");
                  }
                  else {
                    FUN_71006ed220(lVar8,(int)*(undefined8 *)(param_11 + 0x32) + -4);
                    uVar5 = FUN_7100729ba0(*(undefined8 *)(param_11 + 0x28));
                    if ((uVar5 & 7) == 0) {
                      *(undefined1 *)(*(long *)(param_11 + 0x2c) + 4) = 0;
                      uVar7 = *(undefined8 *)(param_11 + 0x28);
                      lVar8 = *(long *)(param_11 + 0x2c) + 5;
                    }
                    else {
                      uVar7 = *(undefined8 *)(param_11 + 0x28);
                      lVar8 = *(long *)(param_11 + 0x2c) + 4;
                    }
                    uVar6 = FUN_7100729c10(uVar7);
                    FUN_7100729e40(uVar7,lVar8,uVar6);
                    *(undefined8 **)(param_11 + 0x36) = &local_48;
                    if (param_5 == 0x200) {
                      FUN_71006fb0d0(local_48,8,0,0);
                    }
                    else if (param_5 == 0x180) {
                      FUN_71006fb0d0(local_48,7,0,0);
                    }
                    else if (param_5 == 0x100) {
                      FUN_71006fb0d0(local_48,6,0,0);
                    }
                    else {
                      if (param_5 != 1) {
                        auVar12 = FUN_7100806b40("kex.c",0x7b,"_libssh2_sha_algo_ctx_init","0");
                        piVar9 = auVar12._8_8_;
                        lVar8 = auVar12._0_8_;
                        iVar1 = *piVar9;
                        if (iVar1 == 0) {
                          uVar7 = FUN_71006fb220();
                          *(undefined8 *)(piVar9 + 0x44) = uVar7;
                          uVar7 = FUN_71006fb220();
                          *(undefined8 *)(piVar9 + 0x46) = uVar7;
                          *(undefined1 *)(piVar9 + 0x48) = 0x22;
                          FUN_71006ed220((long)piVar9 + 0x121,0x800);
                          FUN_71006ed220((long)piVar9 + 0x125,0x1000);
                          FUN_71006ed220((long)piVar9 + 0x129,0x2000);
                          uVar7 = 0xd;
                          *piVar9 = 2;
                          piVar9[0x8a] = 0xd;
                          piVar9[0x8b] = 0;
LAB_71006eb038:
                          iVar1 = FUN_71006f87d0(lVar8,piVar9 + 0x48,uVar7,0,0);
                          if (iVar1 == -0x25) {
                            return -0x25;
                          }
                          if (iVar1 != 0) {
                            iVar3 = FUN_71006ed140(lVar8,iVar1,
                                                   "Unable to send Group Exchange Request");
                            goto LAB_71006eafb0;
                          }
                          *piVar9 = 3;
LAB_71006eb060:
                          iVar1 = FUN_71006eee10(lVar8,0x1f,piVar9 + 0x88,piVar9 + 0x8c,0,0,0,
                                                 piVar9 + 2);
                          if (iVar1 == -0x25) {
                            return -0x25;
                          }
                          if (iVar1 != 0) {
                            iVar3 = FUN_71006ed140(lVar8,iVar1,"Timeout waiting for GEX_GROUP reply"
                                                  );
                            goto LAB_71006eafb0;
                          }
                          *piVar9 = 4;
                        }
                        else {
                          if (iVar1 == 2) {
                            uVar7 = *(undefined8 *)(piVar9 + 0x8a);
                            goto LAB_71006eb038;
                          }
                          if (iVar1 == 3) goto LAB_71006eb060;
                          iVar3 = 0;
                          if (iVar1 != 4) goto LAB_71006eafb0;
                        }
                        if (*(ulong *)(piVar9 + 0x8c) < 9) {
                          iVar3 = FUN_71006ed140(lVar8,0xfffffff2,"Unexpected key length");
                        }
                        else {
                          local_e0 = *(long *)(piVar9 + 0x88);
                          local_d8 = local_e0 + 1;
                          local_d0 = *(ulong *)(piVar9 + 0x8c);
                          iVar1 = FUN_71006ed9d0(&local_e0,&local_f0,&local_100);
                          if ((iVar1 == 0) &&
                             (iVar1 = FUN_71006ed9d0(&local_e0,&local_e8,&local_f8), iVar1 == 0)) {
                            FUN_7100729cb0(*(undefined8 *)(piVar9 + 0x44),local_f0,
                                           CONCAT44(uStack_fc,local_100));
                            FUN_7100729cb0(*(undefined8 *)(piVar9 + 0x46),local_e8,local_f8);
                            iVar3 = FUN_71006ea040(lVar8,*(undefined8 *)(piVar9 + 0x46),
                                                   *(undefined8 *)(piVar9 + 0x44),local_100,1,
                                                   auStack_c8,0x20,0x21,*(long *)(piVar9 + 0x88) + 1
                                                   ,*(long *)(piVar9 + 0x8c) + -1,piVar9 + 6);
                            if (iVar3 == -0x25) {
                              return -0x25;
                            }
                            (**(code **)(lVar8 + 0x18))(*(undefined8 *)(piVar9 + 0x88),lVar8);
                          }
                          else {
                            iVar3 = FUN_71006ed140(lVar8,0xfffffff2,"Unexpected value");
                          }
                        }
LAB_71006eafb0:
                        *piVar9 = 0;
                        FUN_71006fb260(*(undefined8 *)(piVar9 + 0x46));
                        piVar9[0x46] = 0;
                        piVar9[0x47] = 0;
                        FUN_71006fb260(*(undefined8 *)(piVar9 + 0x44));
                        piVar9[0x44] = 0;
                        piVar9[0x45] = 0;
                        return iVar3;
                      }
                      FUN_71006fb0d0(local_48,4,0,0);
                    }
                    piVar9 = param_11 + 8;
                    if (*(long *)(param_1 + 0x180) == 0) {
                      FUN_71006ed220(piVar9,0x16);
                      FUN_71006e9a30(param_5,local_48,piVar9,4);
                      FUN_71006e9a30(param_5,local_48,"SSH-2.0-libssh2_1.10.0",0x16);
                    }
                    else {
                      iVar1 = FUN_710081ce00();
                      FUN_71006ed220(piVar9,iVar1 + -2);
                      FUN_71006e9a30(param_5,local_48,piVar9,4);
                      uVar7 = *(undefined8 *)(param_1 + 0x180);
                      lVar8 = FUN_710081ce00(uVar7);
                      FUN_71006e9a30(param_5,local_48,uVar7,lVar8 + -2);
                    }
                    uVar2 = FUN_710081ce00(*(undefined8 *)(param_1 + 0x110));
                    FUN_71006ed220(piVar9,uVar2);
                    FUN_71006e9a30(param_5,local_48,piVar9,4);
                    uVar6 = *(undefined8 *)(param_1 + 0x110);
                    uVar7 = FUN_710081ce00(uVar6);
                    FUN_71006e9a30(param_5,local_48,uVar6,uVar7);
                    FUN_71006ed220(piVar9,*(undefined4 *)(param_1 + 400));
                    FUN_71006e9a30(param_5,local_48,piVar9,4);
                    FUN_71006e9a30(param_5,local_48,*(undefined8 *)(param_1 + 0x188),
                                   *(undefined8 *)(param_1 + 400));
                    FUN_71006ed220(piVar9,*(undefined4 *)(param_1 + 0x120));
                    FUN_71006e9a30(param_5,local_48,piVar9,4);
                    FUN_71006e9a30(param_5,local_48,*(undefined8 *)(param_1 + 0x118),
                                   *(undefined8 *)(param_1 + 0x120));
                    FUN_71006ed220(piVar9,*(undefined4 *)(param_1 + 0xb8));
                    FUN_71006e9a30(param_5,local_48,piVar9,4);
                    FUN_71006e9a30(param_5,local_48,*(undefined8 *)(param_1 + 0xb0),
                                   *(undefined4 *)(param_1 + 0xb8));
                    if (param_7 == ' ') {
                      FUN_71006ed220(piVar9,0x800);
                      FUN_71006ed220(param_11 + 9,0x1000);
                      FUN_71006ed220(param_11 + 10,0x2000);
                      FUN_71006e9a30(param_5,local_48,piVar9,0xc);
                    }
                    if (param_9 != 0) {
                      FUN_71006e9a30(param_5,local_48,param_9,param_10);
                    }
                    FUN_71006e9a30(param_5,local_48,*(long *)(param_11 + 2) + 1,
                                   *(long *)(param_11 + 0x1a) + -1);
                    FUN_71006ed220(piVar9,param_11[0x30]);
                    FUN_71006e9a30(param_5,local_48,piVar9,4);
                    FUN_71006e9a30(param_5,local_48,*(undefined8 *)(param_11 + 0x2a),
                                   *(undefined8 *)(param_11 + 0x30));
                    FUN_71006e9a30(param_5,local_48,*(undefined8 *)(param_11 + 0x2c),
                                   *(undefined8 *)(param_11 + 0x32));
                    if ((((param_5 == 0x200) || (param_5 == 0x180)) || (param_5 == 0x100)) ||
                       (param_5 == 1)) {
                      FUN_71006fb170(local_48,piVar9);
                    }
                    iVar1 = (**(code **)(*(long *)(param_1 + 0xa0) + 0x28))
                                      (param_1,*(undefined8 *)(param_11 + 0x2e),
                                       *(undefined8 *)(param_11 + 0x34),piVar9,uVar11,param_1 + 0xa8
                                      );
                    if (iVar1 == 0) {
                      *param_11 = 5;
                      *(undefined1 *)(param_11 + 0x18) = 0x15;
                      goto LAB_71006ea700;
                    }
                    iVar1 = FUN_71006ed140(param_1,0xfffffff5,"Unable to verify hostkey signature");
                  }
                }
                else {
                  iVar1 = FUN_71006ed140(param_1,0xfffffff6,"Unable to get h sig");
                }
              }
              else {
                iVar1 = FUN_71006ed140(param_1,0xfffffff6,"Unable to get f value");
              }
            }
            else {
              iVar1 = FUN_71006ed140(param_1,0xfffffff6,"Unable to initialize hostkey importer");
            }
          }
          else {
            iVar1 = FUN_71006ed140(param_1,0xfffffffa,"Could not copy host key");
          }
        }
      }
      else {
        iVar1 = FUN_71006ed140(param_1,0xfffffff7,"Timed out waiting for KEX reply");
      }
    }
    else {
      if (iVar1 == 4) goto LAB_71006ea2dc;
      if (iVar1 == 5) {
LAB_71006ea700:
        iVar1 = FUN_71006f87d0(param_1,param_11 + 0x18,1,0,0);
        if (iVar1 == -0x25) goto LAB_71006eaf20;
        if (iVar1 != 0) {
          iVar1 = FUN_71006ed140(param_1,iVar1,"Unable to send NEWKEYS message");
          goto LAB_71006ea0fc;
        }
        *param_11 = 6;
      }
      else if (iVar1 != 6) {
        iVar1 = 0;
        goto LAB_71006ea0fc;
      }
      iVar1 = FUN_71006eee10(param_1,0x15,param_11 + 6,param_11 + 0x1e,0,0,0,param_11 + 0x38);
      if (iVar1 == -0x25) goto LAB_71006eaf20;
      if (iVar1 == 0) {
        uVar7 = *(undefined8 *)(param_11 + 6);
        *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 2;
        (**(code **)(param_1 + 0x18))(uVar7,param_1);
        if (*(long *)(param_1 + 0x88) == 0) {
          lVar8 = (**(code **)(param_1 + 8))(uVar11,param_1);
          *(long *)(param_1 + 0x88) = lVar8;
          if (lVar8 == 0) {
            iVar1 = FUN_71006ed140(param_1,0xfffffffa,"Unable to allocate buffer for SHA digest");
            goto LAB_71006ea0fc;
          }
          FUN_710080f900(lVar8,param_11 + 8,uVar11);
          *(undefined4 *)(param_1 + 0x90) = uVar11;
        }
        lVar8 = *(long *)(param_1 + 0x198);
        if (*(code **)(lVar8 + 0x38) != (code *)0x0) {
          (**(code **)(lVar8 + 0x38))(param_1,param_1 + 0x1a0);
          lVar8 = *(long *)(param_1 + 0x198);
        }
        if (*(long *)(lVar8 + 0x28) == 0) {
LAB_71006ea868:
          lVar8 = *(long *)(param_1 + 0x128);
          if (*(code **)(lVar8 + 0x38) != (code *)0x0) {
            (**(code **)(lVar8 + 0x38))(param_1,param_1 + 0x130);
            lVar8 = *(long *)(param_1 + 0x128);
          }
          if (*(long *)(lVar8 + 0x28) == 0) {
LAB_71006ea928:
            lVar8 = *(long *)(param_1 + 0x1a8);
            if (*(code **)(lVar8 + 0x20) != (code *)0x0) {
              (**(code **)(lVar8 + 0x20))(param_1,param_1 + 0x1b8);
              lVar8 = *(long *)(param_1 + 0x1a8);
            }
            if (*(long *)(lVar8 + 0x10) != 0) {
              local_30 = local_30 & 0xffffffff00000000;
              local_18[0] = 0;
              FUN_71006e9d20(param_5,param_1,param_11,local_18,(long)*(int *)(lVar8 + 0xc),"E");
              lVar8 = local_18[0];
              if (local_18[0] == 0) goto LAB_71006eac04;
              (**(code **)(*(long *)(param_1 + 0x1a8) + 0x10))
                        (param_1,local_18[0],&local_30,param_1 + 0x1b8);
              if ((int)local_30 != 0) {
                FUN_71006ed700(lVar8,(long)*(int *)(*(long *)(param_1 + 0x1a8) + 0xc));
                (**(code **)(param_1 + 0x18))(lVar8,param_1);
              }
            }
            lVar8 = *(long *)(param_1 + 0x138);
            if (*(code **)(lVar8 + 0x20) != (code *)0x0) {
              (**(code **)(lVar8 + 0x20))(param_1,param_1 + 0x148);
              lVar8 = *(long *)(param_1 + 0x138);
            }
            if (*(long *)(lVar8 + 0x10) != 0) {
              local_30 = local_30 & 0xffffffff00000000;
              local_18[0] = 0;
              FUN_71006e9d20(param_5,param_1,param_11,local_18,(long)*(int *)(lVar8 + 0xc),
                             &DAT_71008393f8);
              lVar8 = local_18[0];
              if (local_18[0] == 0) goto LAB_71006eac04;
              (**(code **)(*(long *)(param_1 + 0x138) + 0x10))
                        (param_1,local_18[0],&local_30,param_1 + 0x148);
              if ((int)local_30 != 0) {
                FUN_71006ed700(lVar8,(long)*(int *)(*(long *)(param_1 + 0x138) + 0xc));
                (**(code **)(param_1 + 0x18))(lVar8,param_1);
              }
            }
            lVar8 = *(long *)(param_1 + 0x1c0);
            if (lVar8 != 0) {
              if (*(code **)(lVar8 + 0x28) != (code *)0x0) {
                (**(code **)(lVar8 + 0x28))(param_1,1,param_1 + 0x1c8);
                lVar8 = *(long *)(param_1 + 0x1c0);
                if (lVar8 == 0) goto LAB_71006eaa5c;
              }
              if ((*(code **)(lVar8 + 0x10) != (code *)0x0) &&
                 (iVar1 = (**(code **)(lVar8 + 0x10))(param_1,1,param_1 + 0x1c8), iVar1 != 0))
              goto LAB_71006eac04;
            }
LAB_71006eaa5c:
            lVar8 = *(long *)(param_1 + 0x150);
            iVar1 = 0;
            if (lVar8 != 0) {
              if (*(code **)(lVar8 + 0x28) != (code *)0x0) {
                (**(code **)(lVar8 + 0x28))(param_1,0,param_1 + 0x158);
                lVar8 = *(long *)(param_1 + 0x150);
                if (lVar8 == 0) goto LAB_71006ea0fc;
              }
              if ((*(code **)(lVar8 + 0x10) != (code *)0x0) &&
                 (iVar1 = (**(code **)(lVar8 + 0x10))(param_1,0,param_1 + 0x158), iVar1 != 0)) {
                iVar1 = -5;
              }
            }
          }
          else {
            local_3c = 0;
            local_38[0] = 0;
            local_30 = 0;
            local_18[0] = 0;
            FUN_71006e9d20(param_5,param_1,param_11,&local_30,(long)*(int *)(lVar8 + 0x14),"B");
            uVar5 = local_30;
            if (local_30 != 0) {
              FUN_71006e9d20(param_5,param_1,param_11,local_18,
                             (long)*(int *)(*(long *)(param_1 + 0x128) + 0x18),"D");
              lVar8 = local_18[0];
              if (local_18[0] == 0) {
                iVar1 = -5;
                (**(code **)(param_1 + 0x18))(uVar5,param_1);
                goto LAB_71006ea0fc;
              }
              iVar1 = (**(code **)(*(long *)(param_1 + 0x128) + 0x28))
                                (param_1,*(long *)(param_1 + 0x128),uVar5,&local_3c,local_18[0],
                                 local_38,0,param_1 + 0x130);
              if (iVar1 == 0) {
                if (local_3c != 0) {
                  FUN_71006ed700(uVar5,(long)*(int *)(*(long *)(param_1 + 0x128) + 0x14));
                  (**(code **)(param_1 + 0x18))(uVar5,param_1);
                }
                if (local_38[0] != 0) {
                  FUN_71006ed700(lVar8,(long)*(int *)(*(long *)(param_1 + 0x128) + 0x18));
                  (**(code **)(param_1 + 0x18))(lVar8,param_1);
                }
                goto LAB_71006ea928;
              }
              (**(code **)(param_1 + 0x18))(uVar5,param_1);
              (**(code **)(param_1 + 0x18))(lVar8,param_1);
            }
LAB_71006eac04:
            iVar1 = -5;
          }
        }
        else {
          local_3c = 0;
          local_38[0] = 0;
          local_30 = 0;
          local_18[0] = 0;
          FUN_71006e9d20(param_5,param_1,param_11,&local_30,(long)*(int *)(lVar8 + 0x14),"A");
          uVar5 = local_30;
          if (local_30 == 0) {
            iVar1 = -1;
          }
          else {
            FUN_71006e9d20(param_5,param_1,param_11,local_18,
                           (long)*(int *)(*(long *)(param_1 + 0x198) + 0x18),"C");
            lVar8 = local_18[0];
            if (local_18[0] == 0) {
              iVar1 = -5;
              (**(code **)(param_1 + 0x18))(uVar5,param_1);
            }
            else {
              iVar1 = (**(code **)(*(long *)(param_1 + 0x198) + 0x28))
                                (param_1,*(long *)(param_1 + 0x198),uVar5,&local_3c,local_18[0],
                                 local_38,1,param_1 + 0x1a0);
              if (iVar1 == 0) {
                if (local_3c != 0) {
                  FUN_71006ed700(uVar5,(long)*(int *)(*(long *)(param_1 + 0x198) + 0x14));
                  (**(code **)(param_1 + 0x18))(uVar5,param_1);
                }
                if (local_38[0] != 0) {
                  FUN_71006ed700(lVar8,(long)*(int *)(*(long *)(param_1 + 0x198) + 0x18));
                  (**(code **)(param_1 + 0x18))(lVar8,param_1);
                }
                goto LAB_71006ea868;
              }
              (**(code **)(param_1 + 0x18))(uVar5,param_1);
              iVar1 = -5;
              (**(code **)(param_1 + 0x18))(lVar8,param_1);
            }
          }
        }
      }
      else {
        iVar1 = FUN_71006ed140(param_1,iVar1,"Timed out waiting for NEWKEYS");
      }
    }
LAB_71006ea0fc:
    FUN_71006fb9b0(param_11 + 0x22);
    FUN_71006fb260(*(undefined8 *)(param_11 + 0x24));
    param_11[0x24] = 0;
    param_11[0x25] = 0;
    FUN_71006fb260(*(undefined8 *)(param_11 + 0x26));
    param_11[0x26] = 0;
    param_11[0x27] = 0;
    FUN_71006fb260(*(undefined8 *)(param_11 + 0x28));
    param_11[0x20] = 0;
    param_11[0x21] = 0;
    param_11[0x28] = 0;
    param_11[0x29] = 0;
    if (*(long *)(param_11 + 2) != 0) {
      (**(code **)(param_1 + 0x18))(*(long *)(param_11 + 2),param_1);
      param_11[2] = 0;
      param_11[3] = 0;
    }
    if (*(long *)(param_11 + 4) != 0) {
      (**(code **)(param_1 + 0x18))(*(long *)(param_11 + 4),param_1);
      param_11[4] = 0;
      param_11[5] = 0;
    }
    if (*(long *)(param_11 + 0x2c) != 0) {
      (**(code **)(param_1 + 0x18))(*(long *)(param_11 + 0x2c),param_1);
      param_11[0x2c] = 0;
      param_11[0x2d] = 0;
    }
    *param_11 = 0;
  }
  return iVar1;
}



// ===== FUN_71006eb6b0 @ 71006eb6b0 (size=208) =====

int FUN_71006eb6b0(undefined8 param_1,int *param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*param_2 == 0) {
    uVar2 = FUN_71006fb220();
    *(undefined8 *)(param_2 + 0x44) = uVar2;
    uVar2 = FUN_71006fb220();
    *(undefined8 *)(param_2 + 0x46) = uVar2;
    FUN_7100729a10(uVar2,2);
    FUN_7100729cb0(*(undefined8 *)(param_2 + 0x44),&DAT_71009bbc00,0x100);
    *param_2 = 2;
  }
  iVar1 = FUN_71006ea040(param_1,*(undefined8 *)(param_2 + 0x46),*(undefined8 *)(param_2 + 0x44),
                         0x100,param_3,param_4,0x1e,0x1f,0,0,param_2 + 6);
  if (iVar1 != -0x25) {
    *param_2 = 0;
    FUN_71006fb260(*(undefined8 *)(param_2 + 0x44));
    param_2[0x44] = 0;
    param_2[0x45] = 0;
    FUN_71006fb260(*(undefined8 *)(param_2 + 0x46));
    param_2[0x46] = 0;
    param_2[0x47] = 0;
  }
  return iVar1;
}



// ===== FUN_71006eb780 @ 71006eb780 (size=28) =====

void FUN_71006eb780(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_18 [24];
  
  FUN_71006eb6b0(param_1,param_2,0x100,auStack_18);
  return;
}



// ===== FUN_71006eb7a0 @ 71006eb7a0 (size=28) =====

void FUN_71006eb7a0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_18 [24];
  
  FUN_71006eb6b0(param_1,param_2,1,auStack_18);
  return;
}



// ===== FUN_71006eb7c0 @ 71006eb7c0 (size=104) =====

long FUN_71006eb7c0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  plVar2 = (long *)*param_1;
  if (plVar2 == (long *)0x0) {
    return 0;
  }
  lVar3 = 0;
  do {
    if (*plVar2 == 0) break;
    lVar1 = FUN_710081ce00();
    param_1 = param_1 + 1;
    plVar2 = (long *)*param_1;
    lVar3 = lVar3 + lVar1 + 1;
  } while (plVar2 != (long *)0x0);
  return lVar3 + -1;
}



// ===== FUN_71006eb830 @ 71006eb830 (size=484) =====

undefined8 FUN_71006eb830(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  plVar1 = (long *)FUN_71006e76e0();
  pcVar6 = *(char **)(param_1 + 0x60);
  if (pcVar6 == (char *)0x0) {
    if (plVar1 == (long *)0x0) {
      return 0xffffffff;
    }
    do {
      plVar5 = (long *)*plVar1;
      plVar1 = plVar1 + 1;
      if (plVar5 == (long *)0x0) {
        return 0xffffffff;
      }
      lVar2 = *plVar5;
      if (lVar2 == 0) {
        return 0xffffffff;
      }
      uVar7 = FUN_710081ce00(lVar2);
      lVar2 = FUN_71006e9a70(param_3,param_4,lVar2,uVar7);
    } while (((lVar2 == 0) || (((param_2 & 1) != 0 && (plVar5[7] == 0)))) ||
            (((param_2 & 2) != 0 && (plVar5[5] == 0))));
    uVar7 = 0;
    *(long **)(param_1 + 0xa0) = plVar5;
  }
  else {
    if (*pcVar6 == '\0') {
      return 0xffffffff;
    }
    do {
      lVar2 = FUN_710080eb40(pcVar6,0x2c);
      if (lVar2 == 0) {
        lVar3 = FUN_710081ce00(pcVar6);
        lVar4 = FUN_71006e9a70(param_3,param_4,pcVar6,lVar3);
        if (lVar4 == 0) break;
LAB_71006eb8e8:
        puVar8 = (undefined8 *)*plVar1;
        plVar5 = plVar1;
        while( true ) {
          if (puVar8 == (undefined8 *)0x0) goto LAB_71006eb948;
          uVar7 = *puVar8;
          lVar4 = FUN_710081ce00(uVar7);
          if ((lVar4 == lVar3) && (uVar7 = FUN_710080b4c0(uVar7,pcVar6,lVar3), (int)uVar7 == 0))
          break;
          plVar5 = plVar5 + 1;
          puVar8 = (undefined8 *)*plVar5;
        }
        if ((((param_2 & 1) == 0) || (puVar8[7] != 0)) && (((param_2 & 2) == 0 || (puVar8[5] != 0)))
           ) {
          *(undefined8 **)(param_1 + 0xa0) = puVar8;
          return uVar7;
        }
        if (lVar2 == 0) break;
      }
      else {
        lVar3 = lVar2 - (long)pcVar6;
        lVar4 = FUN_71006e9a70(param_3,param_4,pcVar6,lVar3);
        if (lVar4 != 0) goto LAB_71006eb8e8;
      }
      pcVar6 = (char *)(lVar2 + 1);
    } while (*(char *)(lVar2 + 1) != '\0');
LAB_71006eb948:
    uVar7 = 0xffffffff;
  }
  return uVar7;
}



// ===== FUN_71006eba20 @ 71006eba20 (size=352) =====

undefined8 FUN_71006eba20(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  char *pcVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  plVar2 = (long *)FUN_71006fdb10();
  pcVar6 = *(char **)(param_1 + 0x50);
  if (pcVar6 == (char *)0x0) {
    plVar7 = (long *)*plVar2;
    while ((plVar7 != (long *)0x0 && (lVar4 = *plVar7, lVar4 != 0))) {
      uVar9 = FUN_710081ce00(lVar4);
      lVar4 = FUN_71006e9a70(param_2,param_3,lVar4,uVar9);
      if (lVar4 != 0) {
        *(long **)(param_1 + 0x18) = plVar7;
        return 0;
      }
      plVar2 = plVar2 + 1;
      plVar7 = (long *)*plVar2;
    }
  }
  else {
    cVar1 = *pcVar6;
    while (cVar1 != '\0') {
      lVar4 = FUN_710080eb40(pcVar6,0x2c);
      lVar8 = lVar4 - (long)pcVar6;
      if (lVar4 == 0) {
        lVar8 = FUN_710081ce00(pcVar6);
        lVar4 = FUN_71006e9a70(param_2,param_3,pcVar6);
        if (lVar4 == 0) {
          return 0xffffffff;
        }
LAB_71006ebac0:
        puVar5 = (undefined8 *)*plVar2;
        while( true ) {
          if (puVar5 == (undefined8 *)0x0) {
            return 0xffffffff;
          }
          uVar9 = *puVar5;
          lVar4 = FUN_710081ce00(uVar9);
          if ((lVar8 == lVar4) && (uVar9 = FUN_710080b4c0(uVar9,pcVar6,lVar8), (int)uVar9 == 0))
          break;
          plVar2 = plVar2 + 1;
          puVar5 = (undefined8 *)*plVar2;
        }
        *(undefined8 **)(param_1 + 0x18) = puVar5;
        return uVar9;
      }
      lVar3 = FUN_71006e9a70(param_2,param_3,pcVar6,lVar8);
      if (lVar3 != 0) goto LAB_71006ebac0;
      pcVar6 = (char *)(lVar4 + 1);
      cVar1 = *(char *)(lVar4 + 1);
    }
  }
  return 0xffffffff;
}



// ===== FUN_71006ebb80 @ 71006ebb80 (size=352) =====

undefined8 FUN_71006ebb80(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  char *pcVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  plVar2 = (long *)FUN_71006ed060();
  pcVar6 = *(char **)(param_1 + 0x58);
  if (pcVar6 == (char *)0x0) {
    plVar7 = (long *)*plVar2;
    while ((plVar7 != (long *)0x0 && (lVar4 = *plVar7, lVar4 != 0))) {
      uVar9 = FUN_710081ce00(lVar4);
      lVar4 = FUN_71006e9a70(param_2,param_3,lVar4,uVar9);
      if (lVar4 != 0) {
        *(long **)(param_1 + 0x28) = plVar7;
        return 0;
      }
      plVar2 = plVar2 + 1;
      plVar7 = (long *)*plVar2;
    }
  }
  else {
    cVar1 = *pcVar6;
    while (cVar1 != '\0') {
      lVar4 = FUN_710080eb40(pcVar6,0x2c);
      lVar8 = lVar4 - (long)pcVar6;
      if (lVar4 == 0) {
        lVar8 = FUN_710081ce00(pcVar6);
        lVar4 = FUN_71006e9a70(param_2,param_3,pcVar6);
        if (lVar4 == 0) {
          return 0xffffffff;
        }
LAB_71006ebc20:
        puVar5 = (undefined8 *)*plVar2;
        while( true ) {
          if (puVar5 == (undefined8 *)0x0) {
            return 0xffffffff;
          }
          uVar9 = *puVar5;
          lVar4 = FUN_710081ce00(uVar9);
          if ((lVar8 == lVar4) && (uVar9 = FUN_710080b4c0(uVar9,pcVar6,lVar8), (int)uVar9 == 0))
          break;
          plVar2 = plVar2 + 1;
          puVar5 = (undefined8 *)*plVar2;
        }
        *(undefined8 **)(param_1 + 0x28) = puVar5;
        return uVar9;
      }
      lVar3 = FUN_71006e9a70(param_2,param_3,pcVar6,lVar8);
      if (lVar3 != 0) goto LAB_71006ebc20;
      pcVar6 = (char *)(lVar4 + 1);
      cVar1 = *(char *)(lVar4 + 1);
    }
  }
  return 0xffffffff;
}



// ===== FUN_71006ebce0 @ 71006ebce0 (size=2936) =====

int FUN_71006ebce0(long param_1,int param_2,int *param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  code *pcVar12;
  undefined **ppuVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  char *pcVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined1 *puVar20;
  undefined8 *puVar21;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  undefined **local_b0;
  undefined1 *local_a8;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  byte *local_10;
  ulong local_8;
  
  uVar2 = *(uint *)(param_1 + 0x68);
  iVar4 = *param_3;
  *(uint *)(param_1 + 0x68) = uVar2 | 8;
  if (iVar4 == 0) {
    *(uint *)(param_1 + 0x68) = uVar2 | 9;
    if (param_2 == 0) {
      lVar5 = *(long *)(param_1 + 0x78);
LAB_71006ebd20:
      *param_3 = 2;
      if ((lVar5 != 0) && (*(long *)(param_1 + 0xa0) != 0)) goto LAB_71006ebd34;
    }
    else {
      *(undefined8 *)(param_1 + 0x78) = 0;
      if (*(long *)(param_1 + 0xa0) != 0) {
        pcVar12 = *(code **)(*(long *)(param_1 + 0xa0) + 0x40);
        if (pcVar12 != (code *)0x0) {
          (*pcVar12)(param_1,param_1 + 0xa8);
          *(undefined8 *)(param_1 + 0xa0) = 0;
          lVar5 = *(long *)(param_1 + 0x78);
          goto LAB_71006ebd20;
        }
        *(undefined8 *)(param_1 + 0xa0) = 0;
      }
    }
LAB_71006ebe24:
    uVar19 = *(undefined8 *)(param_1 + 400);
    *(undefined8 *)(param_3 + 0xa2) = *(undefined8 *)(param_1 + 0x188);
    *(undefined8 *)(param_3 + 0xa4) = uVar19;
    *(undefined8 *)(param_1 + 0x188) = 0;
    *param_3 = 3;
LAB_71006ebe3c:
    if (*(int *)(param_1 + 0xcc70) == 0) {
      if (*(long *)(param_1 + 0x58) == 0) {
        ppuVar13 = &PTR_PTR_s_ecdh_sha2_nistp256_7100af3718;
        if (PTR_PTR_s_ecdh_sha2_nistp256_7100af3718 == (undefined *)0x0) {
          lVar5 = 0x3e;
          local_a8 = (undefined1 *)0x0;
        }
        else {
          lVar5 = 0;
          plVar15 = (long *)PTR_PTR_s_ecdh_sha2_nistp256_7100af3718;
          do {
            if (*plVar15 == 0) break;
            lVar14 = FUN_710081ce00();
            ppuVar13 = ppuVar13 + 1;
            plVar15 = (long *)*ppuVar13;
            lVar5 = lVar5 + lVar14 + 1;
          } while (plVar15 != (long *)0x0);
          local_a8 = (undefined1 *)(lVar5 - 1);
          lVar5 = lVar5 + 0x3d;
        }
      }
      else {
        local_a8 = (undefined1 *)FUN_710081ce00();
        lVar5 = (long)local_a8 + 0x3e;
      }
      if (*(long *)(param_1 + 0x60) == 0) {
        FUN_71006e76e0();
        uVar6 = FUN_71006eb7c0();
      }
      else {
        uVar6 = FUN_710081ce00();
      }
      if (*(long *)(param_1 + 0x1d0) == 0) {
        FUN_71006fdb10();
        uVar7 = FUN_71006eb7c0();
      }
      else {
        uVar7 = FUN_710081ce00();
      }
      if (*(long *)(param_1 + 0x160) == 0) {
        FUN_71006fdb10();
        local_c8 = FUN_71006eb7c0();
      }
      else {
        local_c8 = FUN_710081ce00();
      }
      if (*(long *)(param_1 + 0x1d8) == 0) {
        FUN_71006ed060();
        local_c0 = FUN_71006eb7c0();
      }
      else {
        local_c0 = FUN_710081ce00();
      }
      if (*(long *)(param_1 + 0x168) == 0) {
        FUN_71006ed060();
        local_b8 = FUN_71006eb7c0();
      }
      else {
        local_b8 = FUN_710081ce00();
      }
      if (*(long *)(param_1 + 0x1e0) == 0) {
        FUN_71006fd940(param_1);
        local_b0 = (undefined **)FUN_71006eb7c0();
      }
      else {
        local_b0 = (undefined **)FUN_710081ce00();
      }
      if (*(long *)(param_1 + 0x170) == 0) {
        FUN_71006fd940(param_1);
        uVar8 = FUN_71006eb7c0();
      }
      else {
        uVar8 = FUN_710081ce00();
      }
      uVar18 = 0;
      if (*(long *)(param_1 + 0x1e8) != 0) {
        uVar18 = FUN_710081ce00();
      }
      uVar16 = 0;
      if (*(long *)(param_1 + 0x178) != 0) {
        uVar16 = FUN_710081ce00();
      }
      lVar5 = uVar18 + uVar16 +
              (long)local_b0 + uVar8 + local_c0 + local_b8 + uVar7 + local_c8 + uVar6 + lVar5;
      puVar9 = (undefined1 *)(**(code **)(param_1 + 8))(lVar5,param_1);
      if (puVar9 == (undefined1 *)0x0) {
        iVar4 = FUN_71006ed140(param_1,0xfffffffa,"Unable to allocate memory");
      }
      else {
        *puVar9 = 0x14;
        iVar4 = FUN_71006faeb0(puVar9 + 1,0x10);
        if (iVar4 == 0) {
          puVar20 = puVar9 + 0x11;
          if (*(long *)(param_1 + 0x58) == 0) {
            lVar14 = FUN_71006e79d0(puVar20,local_a8,&PTR_PTR_s_ecdh_sha2_nistp256_7100af3718);
            local_a8 = puVar20 + lVar14;
          }
          else {
            FUN_71006ed220(puVar20,(ulong)local_a8 & 0xffffffff);
            local_a8 = puVar9 + 0x15 + (long)local_a8;
            FUN_710080f900(puVar9 + 0x15,*(undefined8 *)(param_1 + 0x58));
          }
          if (*(long *)(param_1 + 0x60) == 0) {
            uVar19 = FUN_71006e76e0();
            lVar14 = FUN_71006e79d0(local_a8,uVar6,uVar19);
            puVar20 = local_a8 + lVar14;
          }
          else {
            FUN_71006ed220(local_a8,uVar6 & 0xffffffff);
            puVar20 = local_a8 + 4 + uVar6;
            FUN_710080f900(local_a8 + 4,*(undefined8 *)(param_1 + 0x60));
          }
          if (*(long *)(param_1 + 0x1d0) == 0) {
            uVar19 = FUN_71006fdb10();
            lVar14 = FUN_71006e79d0(puVar20,uVar7,uVar19);
            puVar10 = puVar20 + lVar14;
          }
          else {
            FUN_71006ed220(puVar20,uVar7 & 0xffffffff);
            puVar10 = puVar20 + 4 + uVar7;
            FUN_710080f900(puVar20 + 4,*(undefined8 *)(param_1 + 0x1d0));
          }
          if (*(long *)(param_1 + 0x160) == 0) {
            uVar19 = FUN_71006fdb10();
            lVar14 = FUN_71006e79d0(puVar10,local_c8,uVar19);
            puVar20 = puVar10 + lVar14;
          }
          else {
            FUN_71006ed220(puVar10,local_c8 & 0xffffffff);
            puVar20 = puVar10 + 4 + local_c8;
            FUN_710080f900(puVar10 + 4,*(undefined8 *)(param_1 + 0x160),local_c8);
          }
          if (*(long *)(param_1 + 0x1d8) == 0) {
            uVar19 = FUN_71006ed060();
            lVar14 = FUN_71006e79d0(puVar20,local_c0,uVar19);
            puVar10 = puVar20 + lVar14;
          }
          else {
            FUN_71006ed220(puVar20,local_c0 & 0xffffffff);
            puVar10 = puVar20 + 4 + local_c0;
            FUN_710080f900(puVar20 + 4,*(undefined8 *)(param_1 + 0x1d8),local_c0);
          }
          if (*(long *)(param_1 + 0x168) == 0) {
            uVar19 = FUN_71006ed060();
            lVar14 = FUN_71006e79d0(puVar10,local_b8,uVar19);
            puVar20 = puVar10 + lVar14;
          }
          else {
            FUN_71006ed220(puVar10,local_b8 & 0xffffffff);
            puVar20 = puVar10 + 4 + local_b8;
            FUN_710080f900(puVar10 + 4,*(undefined8 *)(param_1 + 0x168),local_b8);
          }
          if (*(long *)(param_1 + 0x1e0) == 0) {
            uVar19 = FUN_71006fd940(param_1);
            lVar14 = FUN_71006e79d0(puVar20,local_b0,uVar19);
            puVar10 = puVar20 + lVar14;
          }
          else {
            FUN_71006ed220(puVar20,(ulong)local_b0 & 0xffffffff);
            puVar10 = puVar20 + 4 + (long)local_b0;
            FUN_710080f900(puVar20 + 4,*(undefined8 *)(param_1 + 0x1e0),local_b0);
          }
          if (*(long *)(param_1 + 0x170) == 0) {
            uVar19 = FUN_71006fd940(param_1);
            lVar14 = FUN_71006e79d0(puVar10,uVar8,uVar19);
            puVar10 = puVar10 + lVar14;
          }
          else {
            FUN_71006ed220(puVar10,uVar8 & 0xffffffff);
            FUN_710080f900(puVar10 + 4,*(undefined8 *)(param_1 + 0x170),uVar8);
            puVar10 = puVar10 + 4 + uVar8;
          }
          puVar20 = puVar10 + 4;
          if (*(long *)(param_1 + 0x1e8) == 0) {
            FUN_71006ed220(puVar10,uVar18 & 0xffffffff);
          }
          else {
            FUN_71006ed220(puVar10,uVar18 & 0xffffffff);
            FUN_710080f900(puVar20,*(undefined8 *)(param_1 + 0x1e8),uVar18);
            puVar20 = puVar20 + uVar18;
          }
          puVar10 = puVar20 + 4;
          if (*(long *)(param_1 + 0x178) == 0) {
            FUN_71006ed220(puVar20,uVar16 & 0xffffffff);
          }
          else {
            FUN_71006ed220(puVar20,uVar16 & 0xffffffff);
            FUN_710080f900(puVar10,*(undefined8 *)(param_1 + 0x178),uVar16);
            puVar10 = puVar10 + uVar16;
          }
          *puVar10 = 0;
          FUN_71006ed220(puVar10 + 1,0);
          *(undefined4 *)(param_1 + 0xcc70) = 2;
          goto LAB_71006ec160;
        }
        iVar4 = FUN_71006ed140(param_1,0xffffffcf,"Unable to get random bytes for KEXINIT cookie");
      }
LAB_71006ec480:
      if (iVar4 == -0x25) {
LAB_71006ec838:
        *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) & 0xfffffff7;
        return -0x25;
      }
      if (iVar4 != 0) {
        uVar2 = *(uint *)(param_1 + 0x68);
        uVar19 = *(undefined8 *)(param_3 + 0xa4);
        *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_3 + 0xa2);
        *(undefined8 *)(param_1 + 400) = uVar19;
        *param_3 = 0;
        *(uint *)(param_1 + 0x68) = uVar2 & 0xfffffff6;
        return -1;
      }
    }
    else {
      puVar9 = *(undefined1 **)(param_1 + 0xcc78);
      *(undefined8 *)(param_1 + 0xcc78) = 0;
      lVar5 = *(long *)(param_1 + 0xcc80);
      *(undefined8 *)(param_1 + 0xcc80) = 0;
LAB_71006ec160:
      iVar4 = FUN_71006f87d0(param_1,puVar9,lVar5,0,0);
      if (iVar4 == -0x25) {
        *(undefined1 **)(param_1 + 0xcc78) = puVar9;
        *(long *)(param_1 + 0xcc80) = lVar5;
        goto LAB_71006ec838;
      }
      if (iVar4 != 0) {
        (**(code **)(param_1 + 0x18))(puVar9,param_1);
        *(undefined4 *)(param_1 + 0xcc70) = 0;
        iVar4 = FUN_71006ed140(param_1,iVar4,"Unable to send KEXINIT packet to remote host");
        goto LAB_71006ec480;
      }
      if (*(long *)(param_1 + 0x188) != 0) {
        (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0x188),param_1);
      }
      *(undefined1 **)(param_1 + 0x188) = puVar9;
      *(long *)(param_1 + 400) = lVar5;
      *(undefined4 *)(param_1 + 0xcc70) = 0;
    }
    *param_3 = 4;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x78);
    if ((lVar5 != 0) && (*(long *)(param_1 + 0xa0) != 0)) {
LAB_71006ebd34:
      *param_3 = 5;
LAB_71006ebd40:
      iVar4 = (**(code **)(lVar5 + 8))(param_1,param_3 + 6);
      if (iVar4 == -0x25) goto LAB_71006ec7e0;
      if (iVar4 != 0) {
        iVar4 = FUN_71006ed140(param_1,0xfffffff8,"Unrecoverable error exchanging keys");
        goto LAB_71006ebd64;
      }
LAB_71006ebd60:
      iVar4 = 0;
      goto LAB_71006ebd64;
    }
    if (iVar4 == 2) goto LAB_71006ebe24;
    if (iVar4 == 3) goto LAB_71006ebe3c;
    if (iVar4 != 4) {
      if ((lVar5 != 0) && (iVar4 == 5)) goto LAB_71006ebd40;
      goto LAB_71006ebd60;
    }
  }
  iVar4 = FUN_71006eee10(param_1,0x14,param_3 + 0x9e,param_3 + 0xa0,0,0,0,param_3 + 2);
  if (iVar4 == -0x25) {
LAB_71006ec7e0:
    *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) & 0xfffffff7;
    return iVar4;
  }
  if (iVar4 != 0) {
    if (*(long *)(param_1 + 0x188) != 0) {
      (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0x188),param_1);
    }
    uVar2 = *(uint *)(param_1 + 0x68);
    uVar19 = *(undefined8 *)(param_3 + 0xa4);
    *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_3 + 0xa2);
    *(undefined8 *)(param_1 + 400) = uVar19;
    *param_3 = 0;
    *(uint *)(param_1 + 0x68) = uVar2 & 0xfffffff6;
    return -1;
  }
  if (*(long *)(param_1 + 0x118) != 0) {
    (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0x118),param_1);
  }
  lVar5 = *(long *)(param_3 + 0x9e);
  uVar6 = *(ulong *)(param_3 + 0xa0);
  *(long *)(param_1 + 0x118) = lVar5;
  *(ulong *)(param_1 + 0x120) = uVar6;
  if (0x10 < (uint)uVar6) {
    local_10 = (byte *)(lVar5 + 0x11);
    local_8 = uVar6 & 0xffffffff;
    local_18 = lVar5;
    iVar4 = FUN_71006ed860(&local_18,&local_98,&local_58);
    if (((((iVar4 == 0) && (iVar4 = FUN_71006ed860(&local_18,&local_90,&local_50), iVar4 == 0)) &&
         (iVar4 = FUN_71006ed860(&local_18,&local_88,&local_48), iVar4 == 0)) &&
        (((iVar4 = FUN_71006ed860(&local_18,&local_80,&local_40), iVar4 == 0 &&
          (iVar4 = FUN_71006ed860(&local_18,&local_68,&local_28), iVar4 == 0)) &&
         ((iVar4 = FUN_71006ed860(&local_18,&local_60,&local_20), iVar4 == 0 &&
          ((iVar4 = FUN_71006ed860(&local_18,&local_78,&local_38), iVar4 == 0 &&
           (iVar4 = FUN_71006ed860(&local_18,&local_70,&local_30), iVar4 == 0)))))))) &&
       (iVar4 = FUN_71006ed780(&local_18,1), iVar4 != 0)) {
      pbVar1 = local_10 + 1;
      pcVar17 = *(char **)(param_1 + 0x58);
      *(byte *)(param_1 + 0x80) = *(byte *)(param_1 + 0x80) & 0xfe | *local_10 & 1;
      local_10 = pbVar1;
      if (pcVar17 == (char *)0x0) {
        ppuVar13 = &PTR_PTR_s_ecdh_sha2_nistp256_7100af3718;
        plVar15 = (long *)PTR_PTR_s_ecdh_sha2_nistp256_7100af3718;
        while ((plVar15 != (long *)0x0 && (lVar5 = *plVar15, lVar5 != 0))) {
          uVar19 = FUN_710081ce00(lVar5);
          lVar5 = FUN_71006e9a70(local_98,local_58,lVar5,uVar19);
          if ((lVar5 != 0) &&
             (iVar4 = FUN_71006eb830(param_1,plVar15[2],local_90,local_50), iVar4 == 0)) {
            bVar3 = local_98 == lVar5 & *(byte *)(param_1 + 0x80);
            *(undefined **)(param_1 + 0x78) = *ppuVar13;
            goto joined_r0x0071006ec7c0;
          }
          ppuVar13 = ppuVar13 + 1;
          plVar15 = (long *)*ppuVar13;
        }
      }
      else if (*pcVar17 != '\0') {
        local_b0 = &PTR_PTR_s_ecdh_sha2_nistp256_7100af3718;
        do {
          lVar5 = FUN_710080eb40(pcVar17,0x2c);
          if (lVar5 == 0) {
            lVar14 = FUN_710081ce00(pcVar17);
            local_b8 = FUN_71006e9a70(local_98,local_58,pcVar17,lVar14);
            if (local_b8 != 0) {
LAB_71006ec35c:
              ppuVar13 = local_b0;
              puVar21 = (undefined8 *)PTR_PTR_s_ecdh_sha2_nistp256_7100af3718;
              if (PTR_PTR_s_ecdh_sha2_nistp256_7100af3718 != (undefined *)0x0) {
                while( true ) {
                  uVar19 = *puVar21;
                  lVar11 = FUN_710081ce00(uVar19);
                  if ((lVar11 == lVar14) &&
                     (iVar4 = FUN_710080b4c0(uVar19,pcVar17,lVar14), iVar4 == 0)) break;
                  ppuVar13 = ppuVar13 + 1;
                  puVar21 = (undefined8 *)*ppuVar13;
                  if (puVar21 == (undefined8 *)0x0) goto LAB_71006ec3cc;
                }
                iVar4 = FUN_71006eb830(param_1,puVar21[2],local_90,local_50);
                if (iVar4 == 0) {
                  *(undefined8 **)(param_1 + 0x78) = puVar21;
                  bVar3 = local_98 == local_b8 & *(byte *)(param_1 + 0x80);
joined_r0x0071006ec7c0:
                  if (bVar3 != 0) {
                    *(byte *)(param_1 + 0x80) = *(byte *)(param_1 + 0x80) & 0xfe;
                  }
                  lVar5 = param_1 + 0x180;
                  iVar4 = FUN_71006eba20(lVar5,local_88,local_48);
                  if (iVar4 == 0) {
                    lVar14 = param_1 + 0x110;
                    iVar4 = FUN_71006eba20(lVar14,local_80,local_40);
                    if ((((iVar4 != 0) ||
                         (iVar4 = FUN_71006ebb80(lVar5,local_68,local_28), iVar4 != 0)) ||
                        (iVar4 = FUN_71006ebb80(lVar14,local_60,local_20), iVar4 != 0)) ||
                       ((iVar4 = FUN_71006e9bc0(param_1,lVar5,local_78,local_38), iVar4 != 0 ||
                        (iVar4 = FUN_71006e9bc0(param_1,lVar14,local_70,local_30), iVar4 != 0))))
                    break;
                    lVar5 = *(long *)(param_1 + 0x78);
                    *param_3 = 5;
                    if (lVar5 != 0) goto LAB_71006ebd40;
                    goto LAB_71006ebd60;
                  }
                }
                else if (lVar5 != 0) goto LAB_71006ec3b4;
              }
            }
            break;
          }
          lVar14 = lVar5 - (long)pcVar17;
          local_b8 = FUN_71006e9a70(local_98,local_58,pcVar17,lVar14);
          if (local_b8 != 0) goto LAB_71006ec35c;
LAB_71006ec3b4:
          pcVar17 = (char *)(lVar5 + 1);
        } while (*(char *)(lVar5 + 1) != '\0');
      }
    }
  }
LAB_71006ec3cc:
  iVar4 = -5;
  *param_3 = 5;
LAB_71006ebd64:
  if (*(long *)(param_1 + 0x188) != 0) {
    (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0x188),param_1);
    *(undefined8 *)(param_1 + 0x188) = 0;
  }
  if (*(long *)(param_1 + 0x118) != 0) {
    (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0x118),param_1);
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) & 0xfffffff6;
  *param_3 = 0;
  return iVar4;
}



// ===== FUN_71006ec860 @ 71006ec860 (size=792) =====

undefined8 FUN_71006ec860(long param_1,int param_2,undefined8 param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined **ppuVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  long lVar11;
  long *plVar12;
  
  iVar3 = FUN_710081ce00(param_3);
  if (param_2 == 5) {
    ppuVar4 = (undefined **)FUN_71006ed060();
    plVar12 = (long *)(param_1 + 0x168);
LAB_71006ec8c0:
    pcVar5 = (char *)(**(code **)(param_1 + 8))((long)(iVar3 + 1),param_1);
    if (pcVar5 == (char *)0x0) {
LAB_71006eca60:
      uVar9 = FUN_71006ed140(param_1,0xfffffffa,"Error allocated space for method preferences");
      return uVar9;
    }
    FUN_710080f900(pcVar5,param_3,(long)(iVar3 + 1));
    if (*pcVar5 != '\0' && ppuVar4 != (undefined **)0x0) {
      lVar6 = FUN_710080eb40(pcVar5,0x2c);
      pcVar1 = pcVar5;
      while (ppuVar10 = ppuVar4, lVar6 != 0) {
        puVar8 = (undefined8 *)*ppuVar4;
        lVar11 = (long)((int)lVar6 - (int)pcVar1);
        if (puVar8 != (undefined8 *)0x0) goto LAB_71006ec938;
LAB_71006ec9e8:
        lVar7 = FUN_710081ce00(pcVar1);
        FUN_710080f900(pcVar1,lVar6 + 1,lVar7 - lVar11);
        cVar2 = *pcVar1;
joined_r0x0071006ec96c:
        if (cVar2 == '\0') goto LAB_71006ec9a4;
        lVar6 = FUN_710080eb40(pcVar1,0x2c);
      }
      iVar3 = FUN_710081ce00(pcVar1);
      puVar8 = (undefined8 *)*ppuVar4;
      lVar11 = (long)iVar3;
      if (puVar8 != (undefined8 *)0x0) {
LAB_71006ec938:
        do {
          uVar9 = *puVar8;
          lVar7 = FUN_710081ce00(uVar9);
          if ((lVar7 == lVar11) && (iVar3 = FUN_710080b4c0(uVar9,pcVar1,lVar11), iVar3 == 0)) {
            if (lVar6 == 0) goto LAB_71006ec9a4;
            cVar2 = *(char *)(lVar6 + 1);
            pcVar1 = (char *)(lVar6 + 1);
            goto joined_r0x0071006ec96c;
          }
          puVar8 = (undefined8 *)ppuVar10[1];
          ppuVar10 = ppuVar10 + 1;
        } while (puVar8 != (undefined8 *)0x0);
        if (lVar6 != 0) goto LAB_71006ec9e8;
      }
      if (pcVar1 <= pcVar5) {
        *pcVar1 = '\0';
        cVar2 = *pcVar5;
        goto joined_r0x0071006ecab8;
      }
      pcVar1[-1] = '\0';
    }
  }
  else {
    if (param_2 < 6) {
      if (param_2 == 2) {
        ppuVar4 = (undefined **)FUN_71006fdb10();
        plVar12 = (long *)(param_1 + 0x1d0);
      }
      else if (param_2 < 3) {
        if (param_2 == 0) {
          ppuVar4 = &PTR_PTR_s_ecdh_sha2_nistp256_7100af3718;
          plVar12 = (long *)(param_1 + 0x58);
        }
        else {
          if (param_2 != 1) goto LAB_71006ecb20;
          ppuVar4 = (undefined **)FUN_71006e76e0();
          plVar12 = (long *)(param_1 + 0x60);
        }
      }
      else if (param_2 == 3) {
        ppuVar4 = (undefined **)FUN_71006fdb10();
        plVar12 = (long *)(param_1 + 0x160);
      }
      else {
        ppuVar4 = (undefined **)FUN_71006ed060();
        plVar12 = (long *)(param_1 + 0x1d8);
      }
      goto LAB_71006ec8c0;
    }
    if (param_2 == 8) {
      plVar12 = (long *)(param_1 + 0x1e8);
    }
    else {
      if (param_2 < 9) {
        if (param_2 == 6) {
          plVar12 = (long *)(param_1 + 0x1e0);
          ppuVar4 = (undefined **)FUN_71006fd940(param_1);
        }
        else {
          if (param_2 != 7) goto LAB_71006ecb20;
          plVar12 = (long *)(param_1 + 0x170);
          ppuVar4 = (undefined **)FUN_71006fd940(param_1);
        }
        goto LAB_71006ec8c0;
      }
      plVar12 = (long *)(param_1 + 0x178);
      if (param_2 != 9) {
LAB_71006ecb20:
        pcVar5 = "Invalid parameter specified for method_type";
        uVar9 = 0xffffffde;
        goto LAB_71006ecadc;
      }
    }
    pcVar5 = (char *)(**(code **)(param_1 + 8))((long)(iVar3 + 1),param_1);
    if (pcVar5 == (char *)0x0) goto LAB_71006eca60;
    FUN_710080f900(pcVar5,param_3,(long)(iVar3 + 1));
  }
LAB_71006ec9a4:
  cVar2 = *pcVar5;
joined_r0x0071006ecab8:
  if (cVar2 != '\0') {
    if (*plVar12 != 0) {
      (**(code **)(param_1 + 0x18))(*plVar12,param_1);
    }
    *plVar12 = (long)pcVar5;
    return 0;
  }
  (**(code **)(param_1 + 0x18))(pcVar5,param_1);
  uVar9 = 0xffffffdf;
  pcVar5 = "The requested method(s) are not currently supported";
LAB_71006ecadc:
  uVar9 = FUN_71006ed140(param_1,uVar9,pcVar5);
  return uVar9;
}



// ===== FUN_71006ecb90 @ 71006ecb90 (size=56) =====

undefined8 FUN_71006ecb90(long param_1,long *param_2)

{
  if (*param_2 != 0) {
    (**(code **)(param_1 + 0x18))();
  }
  *param_2 = 0;
  return 0;
}



// ===== FUN_71006ecbd0 @ 71006ecbd0 (size=200) =====

undefined8
FUN_71006ecbd0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
              undefined4 param_5,long param_6,int param_7,undefined8 *param_8)

{
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [24];
  
  FUN_71006ed220(auStack_20,param_3);
  FUN_71006fb0d0(auStack_18,9,*param_8,0x14);
  FUN_7100738510(auStack_18,auStack_20,4);
  FUN_7100738510(auStack_18,param_4,param_5);
  if (param_6 != 0 && param_7 != 0) {
    FUN_7100738510(auStack_18,param_6,param_7);
  }
  FUN_7100738530(auStack_18,param_2);
  FUN_7100737f60(auStack_18);
  return 0;
}



// ===== FUN_71006ecca0 @ 71006ecca0 (size=200) =====

undefined8
FUN_71006ecca0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
              undefined4 param_5,long param_6,int param_7,undefined8 *param_8)

{
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [24];
  
  FUN_71006ed220(auStack_20,param_3);
  FUN_71006fb0d0(auStack_18,3,*param_8,0x10);
  FUN_7100738510(auStack_18,auStack_20,4);
  FUN_7100738510(auStack_18,param_4,param_5);
  if (param_6 != 0 && param_7 != 0) {
    FUN_7100738510(auStack_18,param_6,param_7);
  }
  FUN_7100738530(auStack_18,param_2);
  FUN_7100737f60(auStack_18);
  return 0;
}



// ===== FUN_71006ecd70 @ 71006ecd70 (size=200) =====

undefined8
FUN_71006ecd70(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
              undefined4 param_5,long param_6,int param_7,undefined8 *param_8)

{
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [24];
  
  FUN_71006ed220(auStack_20,param_3);
  FUN_71006fb0d0(auStack_18,4,*param_8,0x14);
  FUN_7100738510(auStack_18,auStack_20,4);
  FUN_7100738510(auStack_18,param_4,param_5);
  if (param_6 != 0 && param_7 != 0) {
    FUN_7100738510(auStack_18,param_6,param_7);
  }
  FUN_7100738530(auStack_18,param_2);
  FUN_7100737f60(auStack_18);
  return 0;
}



// ===== FUN_71006ece40 @ 71006ece40 (size=200) =====

undefined8
FUN_71006ece40(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
              undefined4 param_5,long param_6,int param_7,undefined8 *param_8)

{
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [24];
  
  FUN_71006ed220(auStack_20,param_3);
  FUN_71006fb0d0(auStack_18,8,*param_8,0x40);
  FUN_7100738510(auStack_18,auStack_20,4);
  FUN_7100738510(auStack_18,param_4,param_5);
  if (param_6 != 0 && param_7 != 0) {
    FUN_7100738510(auStack_18,param_6,param_7);
  }
  FUN_7100738530(auStack_18,param_2);
  FUN_7100737f60(auStack_18);
  return 0;
}



// ===== FUN_71006ecf10 @ 71006ecf10 (size=200) =====

undefined8
FUN_71006ecf10(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
              undefined4 param_5,long param_6,int param_7,undefined8 *param_8)

{
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [24];
  
  FUN_71006ed220(auStack_20,param_3);
  FUN_71006fb0d0(auStack_18,6,*param_8,0x20);
  FUN_7100738510(auStack_18,auStack_20,4);
  FUN_7100738510(auStack_18,param_4,param_5);
  if (param_6 != 0 && param_7 != 0) {
    FUN_7100738510(auStack_18,param_6,param_7);
  }
  FUN_7100738530(auStack_18,param_2);
  FUN_7100737f60(auStack_18);
  return 0;
}



// ===== FUN_71006ecfe0 @ 71006ecfe0 (size=60) =====

undefined8 FUN_71006ecfe0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_10;
  undefined4 local_8;
  
  FUN_71006ecca0(param_1,&local_10);
  *(undefined4 *)(param_2 + 1) = local_8;
  *param_2 = local_10;
  return 0;
}



// ===== FUN_71006ed020 @ 71006ed020 (size=60) =====

undefined8 FUN_71006ed020(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_18;
  undefined4 local_10;
  
  FUN_71006ecd70(param_1,&local_18);
  *(undefined4 *)(param_2 + 1) = local_10;
  *param_2 = local_18;
  return 0;
}



// ===== FUN_71006ed060 @ 71006ed060 (size=12) =====

undefined ** FUN_71006ed060(void)

{
  return &PTR_PTR_s_hmac_sha2_256_7100af3770;
}



// ===== FUN_71006ed070 @ 71006ed070 (size=200) =====

undefined4 FUN_71006ed070(long param_1,undefined4 param_2,long param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  
  if ((*(uint *)(param_1 + 0x244) & 1) != 0) {
    (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x238),param_1);
  }
  *(undefined4 *)(param_1 + 0x240) = param_2;
  *(undefined4 *)(param_1 + 0x244) = 0;
  lVar2 = param_3;
  if ((param_3 != 0) && ((param_4 & 1) != 0)) {
    lVar1 = FUN_710081ce00(param_3);
    lVar2 = (**(code **)(param_1 + 8))(lVar1 + 1,param_1);
    if (lVar2 == 0) {
      *(char **)(param_1 + 0x238) = "former error forgotten (OOM)";
      return param_2;
    }
    FUN_710080f900(lVar2,param_3,lVar1 + 1);
    *(undefined4 *)(param_1 + 0x244) = 1;
  }
  *(long *)(param_1 + 0x238) = lVar2;
  return param_2;
}



// ===== FUN_71006ed140 @ 71006ed140 (size=8) =====

void FUN_71006ed140(void)

{
  FUN_71006ed070();
  return;
}



// ===== FUN_71006ed150 @ 71006ed150 (size=88) =====

long FUN_71006ed150(void)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = FUN_710076b980();
  if (lVar1 < 0) {
    piVar2 = (int *)FUN_710080e8e0();
    if (*piVar2 != 2) {
      piVar2 = (int *)FUN_710080e8e0();
      if (*piVar2 != 0xb) {
        piVar2 = (int *)FUN_710080e8e0();
        return (long)-*piVar2;
      }
    }
    lVar1 = -0xb;
  }
  return lVar1;
}



// ===== FUN_71006ed1b0 @ 71006ed1b0 (size=72) =====

long FUN_71006ed1b0(void)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = FUN_710076ba50();
  if (lVar1 < 0) {
    piVar2 = (int *)FUN_710080e8e0();
    if (*piVar2 != 0xb) {
      piVar2 = (int *)FUN_710080e8e0();
      return (long)-*piVar2;
    }
    lVar1 = -0xb;
  }
  return lVar1;
}



// ===== FUN_71006ed200 @ 71006ed200 (size=12) =====

uint FUN_71006ed200(uint *param_1)

{
  uint uVar1;
  
  uVar1 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  return uVar1 >> 0x10 | uVar1 << 0x10;
}



// ===== FUN_71006ed210 @ 71006ed210 (size=12) =====

ulong FUN_71006ed210(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = (*param_1 & 0xff00ff00ff00ff00) >> 8 | (*param_1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return uVar1 >> 0x20 | uVar1 << 0x20;
}



// ===== FUN_71006ed220 @ 71006ed220 (size=12) =====

void FUN_71006ed220(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  *param_1 = uVar1 >> 0x10 | uVar1 << 0x10;
  return;
}



// ===== FUN_71006ed230 @ 71006ed230 (size=48) =====

void FUN_71006ed230(long *param_1)

{
  FUN_71006ed220(*param_1);
  *param_1 = *param_1 + 4;
  return;
}



// ===== FUN_71006ed260 @ 71006ed260 (size=100) =====

void FUN_71006ed260(long *param_1,undefined8 param_2,ulong param_3)

{
  FUN_71006ed230(param_1,param_3 & 0xffffffff);
  if (param_3 == 0) {
    return;
  }
  FUN_710080f900(*param_1,param_2,param_3);
  *param_1 = *param_1 + param_3;
  return;
}



// ===== FUN_71006ed2d0 @ 71006ed2d0 (size=368) =====

undefined8 FUN_71006ed2d0(long param_1,long *param_2,int *param_3,byte *param_4,uint param_5)

{
  byte *pbVar1;
  uint uVar2;
  short sVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  
  lVar4 = (**(code **)(param_1 + 8))((param_5 * 3 >> 2) + 1,param_1);
  *param_2 = lVar4;
  if (lVar4 == 0) {
    pcVar7 = "Unable to allocate memory for base64 decoding";
    uVar5 = 0xfffffffa;
LAB_71006ed418:
    uVar5 = FUN_71006ed140(param_1,uVar5,pcVar7);
    return uVar5;
  }
  pbVar1 = param_4 + param_5;
  iVar6 = 0;
  uVar9 = 0;
  if (param_4 < pbVar1) {
    do {
      uVar2 = uVar9 & 3;
      lVar10 = (long)iVar6;
      sVar3 = *(short *)(&DAT_71009bbd80 + (ulong)*param_4 * 2);
      uVar8 = (uint)sVar3;
      if (-1 < (int)uVar8) {
        if (uVar2 == 2) {
          iVar6 = iVar6 + 1;
          *(byte *)(lVar4 + lVar10) = *(byte *)(lVar4 + lVar10) | (byte)(sVar3 >> 2);
          *(char *)(lVar4 + iVar6) = (char)((uVar8 & 3) << 6);
        }
        else if (uVar2 == 3) {
          iVar6 = iVar6 + 1;
          *(byte *)(lVar4 + lVar10) = (byte)sVar3 | *(byte *)(lVar4 + lVar10);
        }
        else if (uVar2 == 1) {
          iVar6 = iVar6 + 1;
          *(byte *)(lVar4 + lVar10) = *(byte *)(lVar4 + lVar10) | (byte)(sVar3 >> 4);
          *(char *)(lVar4 + iVar6) = (char)((uVar8 & 0xf) << 4);
        }
        else {
          *(char *)(lVar4 + lVar10) = (char)((uVar8 & 0x3f) << 2);
        }
        uVar9 = uVar9 + 1;
      }
      param_4 = param_4 + 1;
    } while (param_4 != pbVar1);
    if ((uVar9 & 3) == 1) {
      (**(code **)(param_1 + 0x18))(*param_2,param_1);
      uVar5 = 0xffffffde;
      *param_2 = 0;
      pcVar7 = "Invalid base64";
      goto LAB_71006ed418;
    }
  }
  *param_3 = iVar6;
  return 0;
}



// ===== FUN_71006ed440 @ 71006ed440 (size=480) =====

undefined8 FUN_71006ed440(long param_1,byte *param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  byte *pbVar7;
  int iVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  byte local_8 [8];
  
  *param_4 = 0;
  if (param_3 == 0) {
    param_3 = FUN_710081ce00(param_2);
    puVar5 = (undefined1 *)(**(code **)(param_1 + 8))((ulong)(param_3 << 2) / 3 + 4,param_1);
    if (puVar5 == (undefined1 *)0x0) {
      return 0;
    }
    puVar9 = puVar5;
    if (param_3 == 0) goto LAB_71006ed594;
  }
  else {
    puVar5 = (undefined1 *)(**(code **)(param_1 + 8))((ulong)(param_3 << 2) / 3 + 4,param_1);
    if (puVar5 == (undefined1 *)0x0) {
      return 0;
    }
  }
  puVar9 = puVar5;
  do {
    pbVar7 = local_8;
    iVar8 = 0;
    do {
      iVar1 = iVar8 + 1;
      if (param_3 == 0) {
        FUN_7100808340(local_8 + iVar8,0,3 - iVar8);
        break;
      }
      pbVar10 = param_2 + 1;
      param_3 = param_3 + -1;
      *pbVar7 = *param_2;
      pbVar7 = pbVar7 + 1;
      param_2 = pbVar10;
      iVar8 = iVar1;
    } while (iVar1 != 3);
    cVar2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
            [(int)(uint)(local_8[0] >> 2)];
    cVar3 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
            [(int)((local_8[0] & 3) << 4 | (uint)(local_8[1] >> 4))];
    uVar4 = (local_8[1] & 0xf) << 2 | (uint)(local_8[2] >> 6);
    if (iVar8 == 1) {
      FUN_71008170a0(puVar9,5,"%c%c==",cVar2,cVar3);
    }
    else if (iVar8 == 2) {
      FUN_71008170a0(puVar9,5,"%c%c%c=",cVar2,cVar3,
                     "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[(int)uVar4])
      ;
    }
    else {
      FUN_71008170a0(puVar9,5,"%c%c%c%c",cVar2,cVar3,
                     "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[(int)uVar4],
                     "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                     [(int)(local_8[2] & 0x3f)]);
    }
    puVar9 = puVar9 + 4;
  } while (param_3 != 0);
LAB_71006ed594:
  *puVar9 = 0;
  *param_4 = puVar5;
  uVar6 = FUN_710081ce00(puVar5);
  return uVar6;
}



// ===== FUN_71006ed620 @ 71006ed620 (size=8) =====

void FUN_71006ed620(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// ===== FUN_71006ed630 @ 71006ed630 (size=36) =====

void FUN_71006ed630(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  param_2[2] = param_1;
  *param_2 = 0;
  param_2[1] = puVar1;
  *param_1 = param_2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    return;
  }
  param_1[1] = param_2;
  return;
}



// ===== FUN_71006ed660 @ 71006ed660 (size=8) =====

undefined8 FUN_71006ed660(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ===== FUN_71006ed670 @ 71006ed670 (size=8) =====

undefined8 FUN_71006ed670(undefined8 *param_1)

{
  return *param_1;
}



// ===== FUN_71006ed680 @ 71006ed680 (size=48) =====

void FUN_71006ed680(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_1;
  plVar2 = (long *)param_1[1];
  if (plVar2 == (long *)0x0) {
    *(long *)(param_1[2] + 8) = lVar1;
  }
  else {
    *plVar2 = lVar1;
  }
  if (lVar1 != 0) {
    *(long **)(lVar1 + 8) = plVar2;
    return;
  }
  *(long **)param_1[2] = plVar2;
  return;
}



// ===== FUN_71006ed6b0 @ 71006ed6b0 (size=72) =====

long FUN_71006ed6b0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (**(code **)(param_1 + 8))(param_2,param_1);
  if (lVar1 != 0) {
    FUN_7100808340(lVar1,0,param_2);
  }
  return lVar1;
}



// ===== FUN_71006ed700 @ 71006ed700 (size=24) =====

void FUN_71006ed700(undefined8 param_1,undefined8 param_2)

{
  (*(code *)PTR_FUN_7100af37b8)(param_1,0,param_2);
  return;
}



// ===== FUN_71006ed720 @ 71006ed720 (size=8) =====

void FUN_71006ed720(undefined8 param_1)

{
  FUN_71006ed6b0(param_1,0x18);
  return;
}



// ===== FUN_71006ed730 @ 71006ed730 (size=76) =====

void FUN_71006ed730(long param_1,long *param_2)

{
  if (param_2 != (long *)0x0) {
    if (*param_2 != 0) {
      (**(code **)(param_1 + 0x18))(*param_2,param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x0071006ed774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x18))(param_2,param_1);
    return;
  }
  return;
}



// ===== FUN_71006ed780 @ 71006ed780 (size=32) =====

bool FUN_71006ed780(long *param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = (*param_1 + param_1[2]) - param_1[1];
  return param_2 <= uVar1 && uVar1 <= (ulong)param_1[2];
}



// ===== FUN_71006ed7a0 @ 71006ed7a0 (size=84) =====

undefined8 FUN_71006ed7a0(long param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = FUN_71006ed780(param_1,4);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar2 = FUN_71006ed200(*(undefined8 *)(param_1 + 8));
    lVar4 = *(long *)(param_1 + 8);
    uVar3 = 0;
    *param_2 = uVar2;
    *(long *)(param_1 + 8) = lVar4 + 4;
  }
  return uVar3;
}



// ===== FUN_71006ed800 @ 71006ed800 (size=84) =====

undefined8 FUN_71006ed800(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = FUN_71006ed780(param_1,8);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar2 = FUN_71006ed210(*(undefined8 *)(param_1 + 8));
    lVar4 = *(long *)(param_1 + 8);
    uVar3 = 0;
    *param_2 = uVar2;
    *(long *)(param_1 + 8) = lVar4 + 8;
  }
  return uVar3;
}



// ===== FUN_71006ed860 @ 71006ed860 (size=116) =====

undefined8 FUN_71006ed860(long param_1,long *param_2,ulong *param_3)

{
  int iVar1;
  long lVar2;
  uint local_4;
  
  iVar1 = FUN_71006ed7a0(param_1,&local_4);
  if ((iVar1 == 0) && (iVar1 = FUN_71006ed780(param_1,local_4), iVar1 != 0)) {
    lVar2 = *(long *)(param_1 + 8);
    *param_2 = lVar2;
    *(ulong *)(param_1 + 8) = lVar2 + (ulong)local_4;
    if (param_3 == (ulong *)0x0) {
      return 0;
    }
    *param_3 = (ulong)local_4;
    return 0;
  }
  return 0xffffffff;
}



// ===== FUN_71006ed8e0 @ 71006ed8e0 (size=100) =====

int FUN_71006ed8e0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 local_10;
  long local_8;
  
  local_8 = 0;
  iVar1 = FUN_71006ed860(param_1,&local_10,&local_8);
  if ((iVar1 == 0) && (lVar2 = FUN_710081ce00(param_2), lVar2 == local_8)) {
    iVar1 = FUN_710080b4c0(local_10,param_2,lVar2);
    iVar1 = -(uint)(iVar1 != 0);
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



// ===== FUN_71006ed950 @ 71006ed950 (size=124) =====

undefined8 FUN_71006ed950(long param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 local_10;
  undefined8 uStack_8;
  
  iVar1 = FUN_71006ed860(param_2,&uStack_8,&local_10);
  if (iVar1 == 0) {
    lVar2 = (**(code **)(param_1 + 8))(local_10,param_1);
    *param_3 = lVar2;
    if (lVar2 != 0) {
      FUN_710080f900(lVar2,uStack_8,local_10);
      if (param_4 == (undefined8 *)0x0) {
        return 0;
      }
      *param_4 = local_10;
      return 0;
    }
  }
  return 0xffffffff;
}



// ===== FUN_71006ed9d0 @ 71006ed9d0 (size=156) =====

undefined8 FUN_71006ed9d0(long param_1,undefined8 *param_2,ulong *param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  uint local_4;
  
  iVar2 = FUN_71006ed7a0(param_1,&local_4);
  if ((iVar2 != 0) || (iVar2 = FUN_71006ed780(param_1,local_4), iVar2 == 0)) {
    return 0xffffffff;
  }
  uVar1 = local_4;
  for (pcVar3 = *(char **)(param_1 + 8); (uVar1 != 0 && (*pcVar3 == '\0')); pcVar3 = pcVar3 + 1) {
    uVar1 = uVar1 - 1;
  }
  *param_2 = pcVar3;
  *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) + (ulong)local_4;
  if (param_3 == (ulong *)0x0) {
    return 0;
  }
  *param_3 = (ulong)uVar1;
  return 0;
}



// ===== thunk_FUN_71006fd250 @ 71006eda70 (size=4) =====

undefined8
thunk_FUN_71006fd250
          (undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
          ulong param_6,uint param_7)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uStack_120;
  int iStack_110;
  undefined1 auStack_d8 [23];
  byte bStack_c1;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [64];
  undefined1 auStack_40 [64];
  
  if (((param_7 != 0) && (param_2 != 0 && param_4 - 1U < 0x100000)) && (param_6 - 1 < 0x400)) {
    lVar4 = FUN_710080e9e0(1);
    if (lVar4 != 0) {
      uVar8 = param_6 + 0x1f >> 5;
      uVar7 = 0;
      if (uVar8 != 0) {
        uVar7 = ((param_6 - 1) + uVar8) / uVar8;
      }
      iStack_110 = 1;
      FUN_710080f900(lVar4,param_3,param_4);
      FUN_71006fb0d0(auStack_d8,8,0,0);
      FUN_7100738240(auStack_d8,param_1,param_2);
      FUN_71006fb170(auStack_d8,auStack_80);
      uStack_120 = param_6;
      do {
        while( true ) {
          uVar9 = 1;
          *(char *)(lVar4 + param_4) = (char)((uint)iStack_110 >> 0x18);
          *(char *)(lVar4 + param_4 + 1) = (char)((uint)iStack_110 >> 0x10);
          *(char *)(lVar4 + param_4 + 2) = (char)((uint)iStack_110 >> 8);
          *(char *)(lVar4 + param_4 + 3) = (char)iStack_110;
          FUN_71006fb0d0(auStack_d8,8,0,0);
          FUN_7100738240(auStack_d8,lVar4,param_4 + 4);
          FUN_71006fb170(auStack_d8,auStack_40);
          FUN_71006fd0f0(auStack_80,auStack_40,&uStack_a0);
          uStack_b8 = uStack_98;
          uStack_c0 = uStack_a0;
          uStack_a8 = uStack_88;
          uStack_b0 = uStack_90;
          if (param_7 != 1) {
            do {
              FUN_71006fb0d0(auStack_d8,8,0,0);
              FUN_7100738240(auStack_d8,&uStack_a0,0x20);
              FUN_71006fb170(auStack_d8,auStack_40);
              FUN_71006fd0f0(auStack_80,auStack_40,&uStack_a0);
              lVar5 = 1;
              do {
                lVar1 = lVar5 + 1;
                (&bStack_c1)[lVar5] = (&bStack_c1)[lVar5] ^ *(byte *)((long)&uStack_a8 + lVar5 + 7);
                lVar5 = lVar1;
              } while (lVar1 != 0x21);
              uVar9 = uVar9 + 1;
            } while (uVar9 != param_7);
          }
          if (uStack_120 < uVar7) {
            uVar7 = uStack_120;
          }
          if ((uVar7 != 0) && (uVar9 = (ulong)(iStack_110 - 1), uVar9 < param_6)) break;
          iStack_110 = iStack_110 + 1;
        }
        uVar3 = 1;
        do {
          uVar6 = uVar3;
          *(byte *)(param_5 + uVar9) = (&bStack_c1)[uVar6];
          uVar9 = uVar9 + uVar8;
          uVar2 = uVar7;
          if (uVar6 == uVar7) break;
          uVar3 = uVar6 + 1;
          uVar2 = uVar6;
        } while (uVar9 < param_6);
        uStack_120 = uStack_120 - uVar2;
        iStack_110 = iStack_110 + 1;
        if (uStack_120 == 0) {
          FUN_71006ed700(&uStack_c0,0x20);
          FUN_710081c200(lVar4);
          return 0;
        }
      } while( true );
    }
  }
  return 0xffffffff;
}



// ===== FUN_71006eda80 @ 71006eda80 (size=4552) =====

/* WARNING: Type propagation algorithm not settling */

int FUN_71006eda80(long param_1,byte *param_2,ulong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  char *pcVar11;
  byte bVar12;
  undefined8 uVar13;
  undefined8 local_40;
  undefined8 uStack_38;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  undefined8 local_18;
  byte *local_10;
  ulong local_8;
  
  uVar5 = *(uint *)(param_1 + 0xd2b0);
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_28 = 0;
  bVar12 = *param_2;
  if (uVar5 == 0xd) {
    lVar6 = *(long *)(param_1 + 0xd378);
    if (*(int *)(param_1 + 0xd328) == 0) {
      local_20 = 0;
      if (param_3 < 8) {
        uVar13 = 2;
        local_18 = param_2;
        local_10 = param_2;
        local_8 = param_3;
        FUN_71006ed140(param_1,0xffffffde,"unexpected data length");
      }
      else {
LAB_71006ee0d0:
        local_20 = 0;
        local_10 = param_2 + 8;
        local_18 = param_2;
        local_8 = param_3;
        iVar4 = FUN_71006ed7a0(&local_18,param_1 + 0xd360);
        if (iVar4 == 0) {
          iVar4 = FUN_71006ed7a0(&local_18,param_1 + 0xd364);
          if ((iVar4 == 0) && (iVar4 = FUN_71006ed7a0(&local_18,param_1 + 0xd368), iVar4 == 0)) {
            iVar4 = FUN_71006ed860(&local_18,param_1 + 0xd358,&local_20);
            if (iVar4 == 0) {
              *(int *)(param_1 + 0xd370) = (int)local_20;
              iVar4 = FUN_71006ed7a0(&local_18,param_1 + 0xd36c);
              if (iVar4 == 0) {
                *(undefined4 *)(param_1 + 0xd328) = 1;
                if (*(long *)(param_1 + 0x40) != 0) goto LAB_71006ee148;
                goto LAB_71006ee71c;
              }
              uVar13 = 2;
              FUN_71006ed140(param_1,0xffffffde,"unexpected port size");
            }
            else {
              uVar13 = 2;
              FUN_71006ed140(param_1,0xffffffde,"unexpected host size");
            }
          }
          else {
            uVar13 = 2;
            FUN_71006ed140(param_1,0xffffffde,"unexpected window size");
          }
        }
        else {
          uVar13 = 2;
          FUN_71006ed140(param_1,0xffffffde,"unexpected sender channel size");
        }
      }
    }
    else {
LAB_71006edf28:
      if (*(long *)(param_1 + 0x40) == 0) {
LAB_71006ee71c:
        uVar13 = 4;
      }
      else if (*(int *)(param_1 + 0xd328) == 1) {
LAB_71006ee148:
        lVar6 = FUN_71006ed6b0(param_1,0x2f0);
        if (lVar6 == 0) {
          uVar13 = 4;
          FUN_71006ed140(param_1,0xfffffffa,"allocate a channel for new connection");
        }
        else {
          pcVar10 = *(code **)(param_1 + 8);
          *(long *)(lVar6 + 0x60) = param_1;
          *(undefined4 *)(lVar6 + 0x20) = 3;
          lVar8 = (*pcVar10)(4,param_1);
          *(long *)(lVar6 + 0x18) = lVar8;
          if (lVar8 != 0) {
            FUN_710080f900(lVar8,&DAT_710084d008,*(int *)(lVar6 + 0x20) + 1);
            uVar2 = *(undefined4 *)(param_1 + 0xd360);
            *(undefined8 *)(lVar6 + 0x48) = 0x20000000200000;
            *(undefined4 *)(lVar6 + 0x50) = 0x8000;
            *(undefined4 *)(lVar6 + 0x44) = uVar2;
            uVar3 = FUN_71006e4f70(param_1);
            local_18 = (byte *)(param_1 + 0xd32d);
            uVar2 = *(undefined4 *)(param_1 + 0xd364);
            uVar1 = *(undefined4 *)(param_1 + 0xd368);
            *(undefined4 *)(lVar6 + 0x30) = uVar3;
            *(undefined4 *)(lVar6 + 0x34) = uVar2;
            *(undefined4 *)(lVar6 + 0x38) = uVar2;
            *(undefined4 *)(lVar6 + 0x3c) = uVar1;
            *(undefined1 *)(param_1 + 0xd32c) = 0x5b;
            FUN_71006ed230(&local_18,*(undefined4 *)(lVar6 + 0x44));
            FUN_71006ed230(&local_18,*(undefined4 *)(lVar6 + 0x30));
            FUN_71006ed230(&local_18,*(undefined4 *)(lVar6 + 0x48));
            FUN_71006ed230(&local_18,*(undefined4 *)(lVar6 + 0x50));
            *(undefined4 *)(param_1 + 0xd328) = 2;
            goto LAB_71006ee214;
          }
          FUN_71006ed140(param_1,0xfffffffa,"allocate a channel for new connection");
          uVar13 = 4;
          (**(code **)(param_1 + 0x18))(lVar6,param_1);
        }
      }
      else {
        uVar13 = 2;
        if (*(int *)(param_1 + 0xd328) == 2) {
LAB_71006ee214:
          iVar4 = FUN_71006f87d0(param_1,param_1 + 0xd32c,0x11,0,0);
          if (iVar4 == -0x25) {
            return -0x25;
          }
          if (iVar4 != 0) {
            *(undefined4 *)(param_1 + 0xd328) = 0;
            iVar4 = FUN_71006ed140(param_1,0xfffffff9,"Unable to send channel open confirmation");
            goto LAB_71006ee258;
          }
          FUN_71006ed630(param_1 + 0x200,lVar6);
          (**(code **)(*(long *)(lVar6 + 0x60) + 0x40))
                    (*(long *)(lVar6 + 0x60),lVar6,*(undefined8 *)(param_1 + 0xd358),
                     *(undefined4 *)(param_1 + 0xd36c));
          *(undefined4 *)(param_1 + 0xd328) = 0;
          iVar4 = 0;
          goto LAB_71006edc38;
        }
      }
    }
    local_18 = (byte *)(param_1 + 0xd32d);
    *(undefined1 *)(param_1 + 0xd32c) = 0x5c;
    FUN_71006ed230(&local_18,*(undefined4 *)(param_1 + 0xd360));
    FUN_71006ed230(&local_18,uVar13);
    FUN_71006ed260(&local_18,"X11 Forward Unavailable",0x17);
    FUN_71006ed220(local_18,0);
    iVar4 = FUN_71006f87d0(param_1,param_1 + 0xd32c,0x28,0,0);
    if (iVar4 == -0x25) {
      return -0x25;
    }
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0xd328) = 0;
      (**(code **)(param_1 + 0x18))(param_2,param_1);
      *(undefined4 *)(param_1 + 0xd2b0) = 0;
      return 0;
    }
    *(undefined4 *)(param_1 + 0xd328) = 0;
    iVar4 = FUN_71006ed140(param_1,iVar4,"Unable to send open failure");
LAB_71006ee258:
    if (iVar4 == -0x25) {
      return -0x25;
    }
    (**(code **)(param_1 + 0x18))(param_2,param_1);
    *(undefined4 *)(param_1 + 0xd2b0) = 0;
    return iVar4;
  }
  if (uVar5 < 0xe) {
    if (uVar5 == 0xb) {
LAB_71006edc6c:
      *(undefined4 *)(param_1 + 0xd2b0) = 0xb;
      iVar4 = FUN_71006e5820(*(undefined8 *)(param_1 + 0xd2b8),(int)param_3 + -0xd,1,0);
      if (iVar4 == -0x25) {
        return -0x25;
      }
      goto LAB_71006edbc8;
    }
    if (uVar5 == 0xc) {
      lVar6 = FUN_71006ed660(param_1 + 0x218);
      iVar4 = *(int *)(param_1 + 0xd2c0);
      if (iVar4 == 0) {
        local_20 = 0;
        if (param_3 < 0x14) {
          local_18 = param_2;
          local_10 = param_2;
          local_8 = param_3;
          iVar4 = FUN_71006ed140(param_1,0xffffffd7,"Unexpected packet size");
          goto LAB_71006ee258;
        }
LAB_71006edcb0:
        local_20 = 0;
        local_10 = param_2 + 0x14;
        local_18 = param_2;
        local_8 = param_3;
        iVar4 = FUN_71006ed7a0(&local_18,param_1 + 0xd300);
        if (iVar4 != 0) {
          iVar4 = FUN_71006ed140(param_1,0xffffffda,"Data too short extracting channel");
          goto LAB_71006ee258;
        }
        iVar4 = FUN_71006ed7a0(&local_18,param_1 + 0xd304);
        if (iVar4 != 0) {
          iVar4 = FUN_71006ed140(param_1,0xffffffda,"Data too short extracting window size");
          goto LAB_71006ee258;
        }
        iVar4 = FUN_71006ed7a0(&local_18,param_1 + 0xd308);
        if (iVar4 != 0) {
          iVar4 = FUN_71006ed140(param_1,0xffffffda,"Data too short extracting packet");
          goto LAB_71006ee258;
        }
        iVar4 = FUN_71006ed860(&local_18,param_1 + 54000,&local_20);
        if (iVar4 != 0) {
          iVar4 = FUN_71006ed140(param_1,0xffffffda,"Data too short extracting host");
          goto LAB_71006ee258;
        }
        *(int *)(param_1 + 0xd314) = (int)local_20;
        iVar4 = FUN_71006ed7a0(&local_18,param_1 + 0xd30c);
        pcVar11 = "Data too short extracting port";
        if (iVar4 == 0) {
          iVar4 = FUN_71006ed860(&local_18,param_1 + 0xd2f8,&local_20);
          if (iVar4 == 0) {
            *(int *)(param_1 + 0xd318) = (int)local_20;
            iVar4 = FUN_71006ed7a0(&local_18,param_1 + 0xd310);
            pcVar11 = "Data too short extracting sport";
            if (iVar4 == 0) {
              *(undefined4 *)(param_1 + 0xd2c0) = 1;
              goto LAB_71006edb08;
            }
          }
          else {
            pcVar11 = "Data too short extracting shost";
          }
        }
        iVar4 = FUN_71006ed140(param_1,0xffffffda,pcVar11);
        goto LAB_71006ee258;
      }
LAB_71006edb00:
      if (iVar4 == 3) {
        uVar13 = 1;
      }
      else {
LAB_71006edb08:
        for (; lVar6 != 0; lVar6 = FUN_71006ed670(lVar6)) {
          if (*(int *)(lVar6 + 0x28) == *(int *)(param_1 + 0xd30c)) {
            uVar13 = *(undefined8 *)(lVar6 + 0x20);
            uVar7 = FUN_710081ce00(uVar13);
            if ((uVar7 == *(uint *)(param_1 + 0xd314)) &&
               (iVar4 = FUN_710081ec40(uVar13,*(undefined8 *)(param_1 + 54000),uVar7), iVar4 == 0))
            {
              *(undefined8 *)(param_1 + 0xd320) = 0;
              if (*(int *)(param_1 + 0xd2c0) == 1) {
                if ((*(int *)(lVar6 + 0x44) != 0) &&
                   (*(int *)(lVar6 + 0x44) <= *(int *)(lVar6 + 0x40))) {
                  uVar13 = 4;
                  goto LAB_71006ee414;
                }
                lVar8 = FUN_71006ed6b0(param_1,0x2f0);
                if (lVar8 == 0) {
                  uVar13 = 4;
                  FUN_71006ed140(param_1,0xfffffffa,
                                 "Unable to allocate a channel for new connection");
                  goto LAB_71006ee414;
                }
                pcVar10 = *(code **)(param_1 + 8);
                *(long *)(param_1 + 0xd320) = lVar8;
                *(undefined4 *)(lVar8 + 0x20) = 0xf;
                *(long *)(lVar8 + 0x60) = param_1;
                lVar9 = (*pcVar10)(0x10,param_1);
                *(long *)(lVar8 + 0x18) = lVar9;
                if (lVar9 == 0) {
                  FUN_71006ed140(param_1,0xfffffffa,
                                 "Unable to allocate a channel for new connection");
                  uVar13 = 4;
                  (**(code **)(param_1 + 0x18))(lVar8,param_1);
                  goto LAB_71006ee414;
                }
                FUN_710080f900(lVar9,"forwarded-tcpip",*(int *)(lVar8 + 0x20) + 1);
                uVar2 = *(undefined4 *)(param_1 + 0xd300);
                *(undefined8 *)(lVar8 + 0x48) = 0x20000000200000;
                *(undefined4 *)(lVar8 + 0x50) = 0x8000;
                *(undefined4 *)(lVar8 + 0x44) = uVar2;
                uVar3 = FUN_71006e4f70(param_1);
                uVar2 = *(undefined4 *)(param_1 + 0xd304);
                uVar1 = *(undefined4 *)(param_1 + 0xd308);
                *(undefined4 *)(lVar8 + 0x30) = uVar3;
                *(undefined4 *)(lVar8 + 0x34) = uVar2;
                *(undefined4 *)(lVar8 + 0x38) = uVar2;
                *(undefined4 *)(lVar8 + 0x3c) = uVar1;
                *(undefined1 *)(param_1 + 0xd2c4) = 0x5b;
                local_18 = (byte *)(param_1 + 0xd2c5);
                FUN_71006ed230(&local_18,*(undefined4 *)(lVar8 + 0x44));
                FUN_71006ed230(&local_18,*(undefined4 *)(lVar8 + 0x30));
                FUN_71006ed230(&local_18,*(undefined4 *)(lVar8 + 0x48));
                FUN_71006ed230(&local_18,*(undefined4 *)(lVar8 + 0x50));
                *(undefined4 *)(param_1 + 0xd2c0) = 2;
              }
              else if (*(int *)(param_1 + 0xd2c0) != 2) goto LAB_71006edb14;
              iVar4 = FUN_71006f87d0(param_1,param_1 + 0xd2c4,0x11,0,0);
              if (iVar4 == -0x25) {
                return -0x25;
              }
              if (iVar4 != 0) {
                *(undefined4 *)(param_1 + 0xd2c0) = 0;
                iVar4 = FUN_71006ed140(param_1,iVar4,"Unable to send channel open confirmation");
                goto LAB_71006ee258;
              }
              if (*(long *)(param_1 + 0xd320) != 0) {
                FUN_71006ed630(lVar6 + 0x30);
                *(int *)(lVar6 + 0x40) = *(int *)(lVar6 + 0x40) + 1;
              }
              goto LAB_71006ee494;
            }
          }
LAB_71006edb14:
        }
        uVar13 = 1;
LAB_71006ee414:
        *(undefined4 *)(param_1 + 0xd2c0) = 3;
      }
      local_18 = (byte *)(param_1 + 0xd2c5);
      *(undefined1 *)(param_1 + 0xd2c4) = 0x5c;
      FUN_71006ed230(&local_18,*(undefined4 *)(param_1 + 0xd300));
      FUN_71006ed230(&local_18,uVar13);
      FUN_71006ed260(&local_18,"Forward not requested",0x15);
      FUN_71006ed220(local_18,0);
      iVar4 = FUN_71006f87d0(param_1,param_1 + 0xd2c4,0x26,0,0);
      if (iVar4 == -0x25) {
        return -0x25;
      }
      if (iVar4 != 0) {
        *(undefined4 *)(param_1 + 0xd2c0) = 0;
        iVar4 = FUN_71006ed140(param_1,iVar4,"Unable to send open failure");
        goto LAB_71006ee258;
      }
LAB_71006ee494:
      iVar4 = 0;
      *(undefined4 *)(param_1 + 0xd2c0) = 0;
      goto LAB_71006edc38;
    }
    if (uVar5 != 0) {
      if (uVar5 == 1) goto LAB_71006edc00;
      if (uVar5 != 3) goto LAB_71006edde4;
      uVar7 = 0;
LAB_71006ee3c0:
      lVar6 = (**(code **)(param_1 + 8))(0x30,param_1);
      if (lVar6 == 0) {
        (**(code **)(param_1 + 0x18))(param_2,param_1);
        *(undefined4 *)(param_1 + 0xd2b0) = 0;
        return -6;
      }
      *(byte **)(lVar6 + 0x18) = param_2;
      *(ulong *)(lVar6 + 0x20) = param_3;
      *(ulong *)(lVar6 + 0x28) = uVar7;
      FUN_71006ed630(param_1 + 0x1f0);
      *(undefined4 *)(param_1 + 0xd2b0) = 4;
      if (bVar12 != 0x14) goto LAB_71006edbc8;
      goto LAB_71006ee3f8;
    }
    if ((param_4 == -1) &&
       ((*(code **)(param_1 + 0x38) == (code *)0x0 ||
        (iVar4 = (**(code **)(param_1 + 0x38))(), iVar4 != 0)))) {
      (**(code **)(param_1 + 0x18))(param_2,param_1);
      iVar4 = FUN_71006ed140(param_1,0xfffffffc,"Invalid MAC received");
      return iVar4;
    }
    *(undefined4 *)(param_1 + 0xd2b0) = 1;
LAB_71006edc00:
    if (bVar12 == 0x5d) {
      if (8 < param_3) {
        iVar4 = FUN_71006ed200(param_2 + 5);
        uVar2 = FUN_71006ed200(param_2 + 1);
        lVar6 = FUN_71006e4fc0(param_1,uVar2);
        if (lVar6 != 0) {
          *(int *)(lVar6 + 0x38) = *(int *)(lVar6 + 0x38) + iVar4;
        }
      }
    }
    else if (bVar12 < 0x5e) {
      if (bVar12 == 4) {
        if (1 < param_3) {
          bVar12 = param_2[1];
          if (5 < param_3) {
            local_10 = param_2 + 2;
            local_18 = param_2;
            local_8 = param_3;
            FUN_71006ed860(&local_18,&local_40,&local_30);
            FUN_71006ed860(&local_18,&uStack_38,&local_28);
          }
          if (*(code **)(param_1 + 0x28) != (code *)0x0) {
            (**(code **)(param_1 + 0x28))
                      (param_1,bVar12,local_40,local_30 & 0xffffffff,uStack_38,local_28 & 0xffffffff
                       ,param_1);
          }
        }
      }
      else if (bVar12 < 5) {
        if (bVar12 == 1) {
          if (4 < param_3) {
            local_10 = param_2 + 1;
            local_20 = local_20 & 0xffffffff00000000;
            local_18 = param_2;
            local_8 = param_3;
            FUN_71006ed7a0(&local_18,&local_20);
            FUN_71006ed860(&local_18,&local_40,&local_30);
            FUN_71006ed860(&local_18,&uStack_38,&local_28);
            if (*(code **)(param_1 + 0x30) != (code *)0x0) {
              (**(code **)(param_1 + 0x30))
                        (param_1,local_20 & 0xffffffff,local_40,local_30 & 0xffffffff,uStack_38,
                         local_28 & 0xffffffff,param_1);
            }
          }
          (**(code **)(param_1 + 0x18))(param_2,param_1);
          *(undefined4 *)(param_1 + 0x22c) = 0xffffffff;
          *(undefined4 *)(param_1 + 0xd2b0) = 0;
          iVar4 = FUN_71006ed140(param_1,0xfffffff3,"socket disconnect");
          return iVar4;
        }
        if (bVar12 != 2) goto LAB_71006eec1c;
        pcVar10 = *(code **)(param_1 + 0x20);
        if (param_3 < 2) {
          if (pcVar10 != (code *)0x0) {
            (*pcVar10)(param_1,&DAT_7100853d20,0,param_1);
          }
        }
        else if (pcVar10 != (code *)0x0) {
          (*pcVar10)(param_1,param_2 + 1,(int)param_3 + -1,param_1);
        }
      }
      else {
        if (bVar12 != 0x50) {
          if (bVar12 == 0x5a) {
            if (0x10 < param_3) {
              if (((0x13 < param_3) && (iVar4 = FUN_71006ed200(param_2 + 1), iVar4 == 0xf)) &&
                 (iVar4 = FUN_710081ec40(param_2 + 5,"forwarded-tcpip",0xf), iVar4 == 0)) {
                *(undefined8 *)(param_1 + 0xd320) = 0;
                *(undefined8 *)(param_1 + 0xd2c8) = 0;
                *(undefined8 *)(param_1 + 0xd2c0) = 0;
                *(undefined8 *)(param_1 + 0xd2d8) = 0;
                *(undefined8 *)(param_1 + 0xd2d0) = 0;
                *(undefined8 *)(param_1 + 0xd2e8) = 0;
                *(undefined8 *)(param_1 + 0xd2e0) = 0;
                *(undefined8 *)(param_1 + 0xd2f8) = 0;
                *(undefined8 *)(param_1 + 54000) = 0;
                *(undefined8 *)(param_1 + 0xd308) = 0;
                *(undefined8 *)(param_1 + 0xd300) = 0;
                *(undefined8 *)(param_1 + 0xd318) = 0;
                *(undefined8 *)(param_1 + 0xd310) = 0;
                *(undefined4 *)(param_1 + 0xd2b0) = 0xc;
                lVar6 = FUN_71006ed660(param_1 + 0x218);
                iVar4 = *(int *)(param_1 + 0xd2c0);
                if (iVar4 == 0) goto LAB_71006edcb0;
                goto LAB_71006edb00;
              }
              iVar4 = FUN_71006ed200(param_2 + 1);
              if (((iVar4 == 3) && (*(short *)(param_2 + 5) == 0x3178)) && (param_2[7] == 0x31)) {
                *(undefined8 *)(param_1 + 0xd378) = 0;
                *(undefined8 *)(param_1 + 0xd330) = 0;
                *(undefined8 *)(param_1 + 0xd328) = 0;
                *(undefined8 *)(param_1 + 0xd340) = 0;
                *(undefined8 *)(param_1 + 0xd338) = 0;
                *(undefined8 *)(param_1 + 0xd350) = 0;
                *(undefined8 *)(param_1 + 0xd348) = 0;
                *(undefined8 *)(param_1 + 0xd360) = 0;
                *(undefined8 *)(param_1 + 0xd358) = 0;
                *(undefined8 *)(param_1 + 0xd370) = 0;
                *(undefined8 *)(param_1 + 0xd368) = 0;
                lVar6 = *(long *)(param_1 + 0xd378);
                *(undefined4 *)(param_1 + 0xd2b0) = 0xd;
                if (*(int *)(param_1 + 0xd328) == 0) goto LAB_71006ee0d0;
                goto LAB_71006edf28;
              }
            }
            iVar4 = 0;
            goto LAB_71006edc38;
          }
LAB_71006eec1c:
          uVar7 = 0;
LAB_71006ee0ac:
          *(undefined4 *)(param_1 + 0xd2b0) = 3;
          goto LAB_71006ee3c0;
        }
        if (((4 < param_3) && (uVar5 = FUN_71006ed200(param_2 + 1), uVar5 < 0xfffffffa)) &&
           ((uVar5 + 6 <= param_3 && (param_2[uVar5 + 5] != 0)))) goto LAB_71006edb8c;
      }
    }
    else if (bVar12 == 0x60) {
      if (4 < param_3) {
        uVar2 = FUN_71006ed200(param_2 + 1);
        lVar6 = FUN_71006e4fc0(param_1,uVar2);
        if (lVar6 != 0) {
          *(undefined1 *)(lVar6 + 0x55) = 1;
        }
      }
    }
    else if (bVar12 < 0x61) {
      if (bVar12 == 0x5e) {
        uVar7 = 9;
      }
      else {
        uVar7 = 0xd;
        if (bVar12 != 0x5f) goto LAB_71006eec1c;
      }
      if (uVar7 <= param_3) {
        uVar2 = FUN_71006ed200(param_2 + 1);
        lVar6 = FUN_71006e4fc0(param_1,uVar2);
        if (lVar6 != 0) {
          if (bVar12 == 0x5f && *(char *)(lVar6 + 0x56) == '\x01') {
            (**(code **)(param_1 + 0x18))(param_2,param_1);
            uVar5 = *(uint *)(lVar6 + 0x4c);
            if ((ulong)uVar5 <= (param_3 - uVar7) + (ulong)*(uint *)(lVar6 + 0x5c)) {
              param_3 = (uVar5 - *(uint *)(lVar6 + 0x5c)) + uVar7;
            }
            *(uint *)(lVar6 + 0x4c) = (uVar5 + (int)uVar7) - (int)param_3;
            *(long *)(param_1 + 0xd2b8) = lVar6;
            goto LAB_71006edc6c;
          }
          if ((ulong)*(uint *)(lVar6 + 0x50) < param_3 - uVar7) {
            FUN_71006ed140(param_1,0xffffffe7,
                           "Packet contains more data than we offered to receive, truncating");
            param_3 = *(uint *)(lVar6 + 0x50) + uVar7;
          }
          uVar5 = *(uint *)(lVar6 + 0x5c);
          if (*(uint *)(lVar6 + 0x4c) <= uVar5) {
            FUN_71006ed140(param_1,0xffffffe8,"The current receive window is full, data ignored");
            goto LAB_71006edbb8;
          }
          *(undefined1 *)(lVar6 + 0x55) = 0;
          if ((ulong)*(uint *)(lVar6 + 0x4c) < (uVar5 - uVar7) + param_3) {
            FUN_71006ed140(param_1,0xffffffe8,
                           "Remote sent more data than current window allows, truncating");
            uVar5 = *(uint *)(lVar6 + 0x5c);
            param_3 = (*(int *)(lVar6 + 0x4c) - uVar5) + uVar7;
          }
          *(uint *)(lVar6 + 0x5c) = (uVar5 - (int)uVar7) + (int)param_3;
          goto LAB_71006ee0ac;
        }
      }
      FUN_71006ed140(param_1,0xffffffe9,"Packet received for unknown channel");
    }
    else {
      if (bVar12 != 0x61) {
        if (bVar12 != 0x62) goto LAB_71006eec1c;
        iVar4 = 0;
        if (param_3 < 9) goto LAB_71006edc38;
        uVar2 = FUN_71006ed200(param_2 + 1);
        iVar4 = FUN_71006ed200(param_2 + 5);
        if (iVar4 + 9 < param_3) {
          bVar12 = param_2[iVar4 + 9];
          if (param_3 >= 0x14 && iVar4 == 0xb) goto LAB_71006ede78;
joined_r0x0071006ee6f4:
          iVar4 = 0;
        }
        else {
          if (param_3 < 0x14 || iVar4 != 0xb) goto LAB_71006edeb8;
          bVar12 = 1;
LAB_71006ede78:
          if (((*(long *)(param_2 + 9) == 0x6174732d74697865) &&
              (*(short *)(param_2 + 0x11) == 0x7574)) && (param_2[0x13] == 0x73)) {
            lVar6 = FUN_71006e4fc0(param_1,uVar2);
            iVar4 = 0;
            if (lVar6 == 0 || param_3 < 0x19) goto joined_r0x0071006ee6f4;
            uVar2 = FUN_71006ed200(param_2 + 0x15);
            *(undefined4 *)(lVar6 + 0x24) = uVar2;
          }
          else {
            if (((*(long *)(param_2 + 9) != 0x6769732d74697865) ||
                (*(short *)(param_2 + 0x11) != 0x616e)) ||
               ((param_2[0x13] != 0x6c ||
                (lVar6 = FUN_71006e4fc0(param_1,uVar2), lVar6 == 0 || param_3 < 0x19))))
            goto joined_r0x0071006ee6f4;
            uVar5 = FUN_71006ed200(param_2 + 0x15);
            uVar7 = (ulong)uVar5;
            if (uVar5 == 0xffffffff) {
              *(undefined8 *)(lVar6 + 0x28) = 0;
            }
            else {
              lVar8 = (**(code **)(param_1 + 8))(uVar5 + 1,param_1);
              *(long *)(lVar6 + 0x28) = lVar8;
              if (lVar8 != 0) {
                if (uVar7 + 0x19 <= param_3) {
                  FUN_710080f900(lVar8,param_2 + 0x19,uVar7);
                  *(undefined1 *)(*(long *)(lVar6 + 0x28) + uVar7) = 0;
                }
                goto joined_r0x0071006ee6f4;
              }
            }
            iVar4 = FUN_71006ed140(param_1,0xfffffffa,"memory for signal name");
          }
        }
        if (bVar12 != 0) {
LAB_71006edeb8:
          *(undefined4 *)(param_1 + 0xd2b0) = 0xe;
          local_18._0_5_ = CONCAT41(*(undefined4 *)(param_2 + 1),100);
          iVar4 = FUN_71006f87d0(param_1,&local_18,5,0,0);
          if (iVar4 != -0x25) {
            (**(code **)(param_1 + 0x18))(param_2,param_1);
            *(undefined4 *)(param_1 + 0xd2b0) = 0;
            return iVar4;
          }
          return -0x25;
        }
LAB_71006edc38:
        (**(code **)(param_1 + 0x18))(param_2,param_1);
        *(undefined4 *)(param_1 + 0xd2b0) = 0;
        return iVar4;
      }
      if (4 < param_3) {
        uVar2 = FUN_71006ed200(param_2 + 1);
        lVar6 = FUN_71006e4fc0(param_1,uVar2);
        if (lVar6 != 0) {
          *(undefined2 *)(lVar6 + 0x54) = 0x101;
          (**(code **)(param_1 + 0x18))(param_2,param_1);
          *(undefined4 *)(param_1 + 0xd2b0) = 0;
          return 0;
        }
      }
    }
LAB_71006edbb8:
    (**(code **)(param_1 + 0x18))(param_2,param_1);
    goto LAB_71006edbc8;
  }
  if (uVar5 == 0xe) goto LAB_71006edeb8;
  if (uVar5 == 0xf) {
LAB_71006edb8c:
    *(undefined4 *)(param_1 + 0xd2b0) = 0xf;
    iVar4 = FUN_71006f87d0(param_1,&DAT_71009bbfc1,1,0,0);
    if (iVar4 == -0x25) {
      return -0x25;
    }
    goto LAB_71006edbb8;
  }
LAB_71006edde4:
  if (bVar12 == 0x14) {
LAB_71006ee3f8:
    if ((*(uint *)(param_1 + 0x68) & 1) != 0) {
      uVar5 = *(uint *)(param_1 + 0xd2b0);
      goto LAB_71006eddec;
    }
  }
  else {
LAB_71006eddec:
    if (uVar5 != 5) goto LAB_71006edbc8;
  }
  *(undefined4 *)(param_1 + 0xd088) = 0;
  *(undefined8 *)(param_1 + 0x4270) = 0;
  *(undefined4 *)(param_1 + 0xd2b0) = 0;
  *(undefined4 *)(param_1 + 0xd380) = 0;
  uVar13 = FUN_7100808340(param_1 + 0xccd0,0,0x298);
  iVar4 = FUN_71006ebce0(param_1,1,uVar13);
  if (iVar4 == -0x25) {
    return -0x25;
  }
LAB_71006edbc8:
  *(undefined4 *)(param_1 + 0xd2b0) = 0;
  return 0;
}



// ===== FUN_71006eec50 @ 71006eec50 (size=248) =====

undefined8
FUN_71006eec50(long param_1,char param_2,undefined8 *param_3,ulong *param_4,int param_5,long param_6
              ,long param_7)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  
  lVar2 = FUN_71006ed660(param_1 + 0x1f0);
  if (lVar2 != 0) {
    do {
      pcVar4 = *(char **)(lVar2 + 0x18);
      if (*pcVar4 == param_2) {
        uVar3 = *(ulong *)(lVar2 + 0x20);
        if (((ulong)(param_5 + param_7) <= uVar3) &&
           ((param_6 == 0 || (iVar1 = FUN_710081ec40(pcVar4 + param_5,param_6,param_7), iVar1 == 0))
           )) {
          *param_3 = pcVar4;
          *param_4 = uVar3;
          FUN_71006ed680(lVar2);
          (**(code **)(param_1 + 0x18))(lVar2,param_1);
          return 0;
        }
      }
      lVar2 = FUN_71006ed670(lVar2);
    } while (lVar2 != 0);
  }
  return 0xffffffff;
}



// ===== FUN_71006eed50 @ 71006eed50 (size=184) =====

undefined8
FUN_71006eed50(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
              undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = FUN_710081ce00(param_2);
  if (0 < iVar3) {
    puVar1 = param_2 + (ulong)(iVar3 - 1) + 1;
    do {
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      uVar4 = FUN_71006eec50(param_1,uVar2,param_3,param_4,param_5,param_6,param_7);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
    } while (param_2 != puVar1);
  }
  return 0xffffffff;
}



// ===== FUN_71006eee10 @ 71006eee10 (size=268) =====

ulong FUN_71006eee10(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                    undefined4 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(long *)(param_8 + 8) == 0) {
    uVar2 = FUN_71006eec50(param_1,param_2 & 0xff);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    uVar3 = FUN_710081c880(0);
    *(undefined8 *)(param_8 + 8) = uVar3;
  }
  while( true ) {
    if (*(int *)(param_1 + 0x22c) != 0) {
      return 0xfffffff3;
    }
    uVar2 = FUN_71006f8110(param_1);
    uVar1 = (uint)uVar2;
    if (uVar1 == 0xffffffdb) {
      return uVar2;
    }
    if ((int)uVar1 < 0) break;
    if ((param_2 & 0xff) == uVar1) {
      uVar2 = FUN_71006eec50(param_1,uVar2 & 0xffffffff,param_3,param_4,param_5,param_6,param_7);
      break;
    }
    if (uVar1 == 0) {
      lVar4 = FUN_710081c880(0);
      uVar2 = 0xffffffff;
      if (0x3b < lVar4 - *(long *)(param_8 + 8)) {
        uVar2 = 0xfffffff7;
        *(undefined8 *)(param_8 + 8) = 0;
      }
      return uVar2;
    }
  }
  *(undefined8 *)(param_8 + 8) = 0;
  return uVar2;
}



// ===== FUN_71006eef20 @ 71006eef20 (size=340) =====

uint FUN_71006eef20(long param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int *extraout_x1;
  int *piVar4;
  int *extraout_x1_00;
  long lVar5;
  byte *local_110;
  undefined1 auStack_108 [7];
  undefined1 auStack_101 [255];
  undefined1 local_2;
  
  piVar4 = param_2;
  if (*param_2 == 0) {
    lVar5 = 1;
    do {
      auStack_101[lVar5] = (char)lVar5;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0xff);
    local_2 = 0;
    iVar2 = FUN_71006eed50(param_1,auStack_101 + 1,&local_110,auStack_108,0,0,0);
    if (iVar2 == 0) {
      bVar1 = *local_110;
      (**(code **)(param_1 + 0x18))(local_110,param_1);
      return (uint)bVar1;
    }
    *param_2 = 2;
    piVar4 = extraout_x1;
  }
  do {
    if (*(int *)(param_1 + 0x22c) != 0) {
      return 0xfffffff3;
    }
    uVar3 = FUN_71006f8110(param_1,piVar4);
    piVar4 = (int *)(ulong)uVar3;
    if (uVar3 == 0xffffffdb) {
      return 0xffffffdb;
    }
    if ((int)uVar3 < 0) goto LAB_71006eeffc;
  } while ((uVar3 == 0) ||
          (iVar2 = FUN_71006eec50(param_1,piVar4,&local_110,auStack_108,0,0,0),
          piVar4 = extraout_x1_00, iVar2 != 0));
  (**(code **)(param_1 + 0x18))(local_110,param_1);
LAB_71006eeffc:
  *param_2 = 0;
  return uVar3;
}



// ===== FUN_71006ef080 @ 71006ef080 (size=384) =====

int FUN_71006ef080(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,long *param_8)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_71006eed50();
  if (iVar1 == 0) {
    *param_8 = 0;
    return 0;
  }
  if (*param_8 == 0) {
    lVar2 = FUN_710081c880();
    *param_8 = lVar2;
  }
  while (*(int *)(param_1 + 0x22c) != -1) {
    iVar1 = FUN_71006f8110(param_1);
    if (iVar1 < 0 && iVar1 != -0x25) goto LAB_71006ef160;
    if (iVar1 < 1) {
      lVar2 = FUN_710081c880(0);
      if (0x3b < lVar2 - *param_8) {
        *param_8 = 0;
        return -9;
      }
      if (iVar1 == -0x25) {
        return -0x25;
      }
    }
    lVar2 = FUN_710080eb40(param_2,iVar1);
    if (lVar2 != 0) {
      iVar1 = FUN_71006eed50(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      *param_8 = 0;
      return iVar1;
    }
  }
  iVar1 = -0xd;
LAB_71006ef160:
  *param_8 = 0;
  return iVar1;
}



// ===== FUN_71006ef200 @ 71006ef200 (size=868) =====

int FUN_71006ef200(char *param_1,char *param_2,ulong param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  iVar3 = (int)param_2;
  cVar2 = *param_1;
  pcVar1 = param_2 + (param_3 & 0xffffffff);
  if ((cVar2 == '\0') || (pcVar8 = pcVar1 + -1, pcVar8 <= param_2)) {
LAB_71006ef46c:
    pcVar4 = param_2 + 1;
joined_r0x0071006ef4d4:
    if (pcVar4 < pcVar1) {
      *param_2 = '\0';
      return (int)param_2 - iVar3;
    }
  }
  else {
    pcVar4 = param_2;
    if (cVar2 == '!') goto LAB_71006ef520;
    if (cVar2 == '\'') goto LAB_71006ef350;
LAB_71006ef230:
    if (param_2 + 1 < pcVar1) {
      pcVar4 = param_2 + 2;
      *param_2 = '\'';
      if (pcVar4 < pcVar1) {
        param_2[1] = *param_1;
        cVar2 = param_1[1];
        if (cVar2 != '\0') {
LAB_71006ef264:
          param_1 = param_1 + 1;
          if (pcVar4 < pcVar8) {
            if (cVar2 != '!') {
              if (cVar2 == '\'') {
LAB_71006ef424:
                if (pcVar1 <= pcVar4 + 2) {
                  return 0;
                }
                pcVar5 = pcVar4 + 3;
                pcVar4[0] = '\'';
                pcVar4[1] = '\"';
                if (pcVar1 <= pcVar5) {
                  return 0;
                }
                pcVar4[2] = *param_1;
                cVar2 = param_1[1];
                if (cVar2 != '\0') goto LAB_71006ef384;
LAB_71006ef458:
                param_2 = pcVar5 + 1;
                if (pcVar1 <= param_2) {
                  return 0;
                }
                *pcVar5 = '\"';
                goto LAB_71006ef46c;
              }
              pcVar5 = pcVar4 + 1;
              pcVar6 = param_1;
              pcVar7 = pcVar4;
              while( true ) {
                if (pcVar1 <= pcVar5) {
                  return 0;
                }
                param_1 = pcVar6 + 1;
                *pcVar7 = *pcVar6;
                cVar2 = pcVar6[1];
                pcVar4 = pcVar5;
                if ((cVar2 == '\0') || (pcVar8 <= pcVar5)) goto LAB_71006ef4b8;
                if (cVar2 == '!') break;
                if (cVar2 == '\'') goto LAB_71006ef424;
                pcVar4 = pcVar7 + 2;
                if (pcVar1 <= pcVar4) {
                  return 0;
                }
                pcVar7[1] = cVar2;
                param_1 = pcVar6 + 2;
                cVar2 = pcVar6[2];
                if ((cVar2 == '\0') || (pcVar8 <= pcVar4)) goto LAB_71006ef4b8;
                if (cVar2 == '!') break;
                if (cVar2 == '\'') goto LAB_71006ef424;
                pcVar5 = pcVar5 + 2;
                pcVar6 = param_1;
                pcVar7 = pcVar4;
              }
            }
            if (pcVar1 <= pcVar4 + 2) {
              return 0;
            }
            param_2 = pcVar4 + 3;
            pcVar4[0] = '\'';
            pcVar4[1] = '\\';
            if (pcVar1 <= param_2) {
              return 0;
            }
            pcVar4[2] = *param_1;
            cVar2 = param_1[1];
            if (cVar2 != '\0') {
              do {
                param_1 = param_1 + 1;
                while( true ) {
                  if (pcVar8 <= param_2) goto LAB_71006ef46c;
                  pcVar4 = param_2;
                  if (cVar2 != '!') break;
LAB_71006ef520:
                  if (pcVar1 <= pcVar4 + 1) {
                    return 0;
                  }
                  param_2 = pcVar4 + 2;
                  *pcVar4 = '\\';
                  if (pcVar1 <= param_2) {
                    return 0;
                  }
                  pcVar4[1] = *param_1;
                  cVar2 = param_1[1];
                  param_1 = param_1 + 1;
                  if (cVar2 == '\0') goto LAB_71006ef46c;
                }
                if (cVar2 != '\'') goto LAB_71006ef230;
LAB_71006ef350:
                if (pcVar1 <= param_2 + 1) {
                  return 0;
                }
                pcVar5 = param_2 + 2;
                *param_2 = '\"';
                if (pcVar1 <= pcVar5) {
                  return 0;
                }
                param_2[1] = *param_1;
                cVar2 = param_1[1];
                if (cVar2 == '\0') goto LAB_71006ef458;
LAB_71006ef384:
                param_1 = param_1 + 1;
                if (pcVar8 <= pcVar5) goto LAB_71006ef458;
                if (cVar2 != '!') {
                  if (cVar2 != '\'') goto LAB_71006ef484;
                  pcVar4 = pcVar5 + 1;
                  pcVar6 = pcVar5;
                  pcVar7 = param_1;
                  while( true ) {
                    if (pcVar1 <= pcVar4) {
                      return 0;
                    }
                    param_1 = pcVar7 + 1;
                    *pcVar6 = *pcVar7;
                    cVar2 = pcVar7[1];
                    pcVar5 = pcVar4;
                    if ((cVar2 == '\0') || (pcVar8 <= pcVar4)) goto LAB_71006ef458;
                    if (cVar2 == '!') break;
                    if (cVar2 != '\'') goto LAB_71006ef484;
                    pcVar5 = pcVar6 + 2;
                    if (pcVar1 <= pcVar5) {
                      return 0;
                    }
                    pcVar6[1] = '\'';
                    param_1 = pcVar7 + 2;
                    cVar2 = pcVar7[2];
                    if ((cVar2 == '\0') || (pcVar8 <= pcVar5)) goto LAB_71006ef458;
                    if (cVar2 == '!') break;
                    if (cVar2 != '\'') goto LAB_71006ef484;
                    pcVar4 = pcVar4 + 2;
                    pcVar6 = pcVar5;
                    pcVar7 = param_1;
                  }
                }
                if (pcVar1 <= pcVar5 + 2) {
                  return 0;
                }
                param_2 = pcVar5 + 3;
                pcVar5[0] = '\"';
                pcVar5[1] = '\\';
                if (pcVar1 <= param_2) {
                  return 0;
                }
                pcVar5[2] = *param_1;
                cVar2 = param_1[1];
                if (cVar2 == '\0') break;
              } while( true );
            }
            goto LAB_71006ef46c;
          }
        }
LAB_71006ef4b8:
        param_2 = pcVar4 + 1;
        if (param_2 < pcVar1) {
          *pcVar4 = '\'';
          pcVar4 = pcVar4 + 2;
          goto joined_r0x0071006ef4d4;
        }
      }
    }
  }
  return 0;
LAB_71006ef484:
  if (pcVar1 <= pcVar5 + 2) {
    return 0;
  }
  pcVar4 = pcVar5 + 3;
  pcVar5[0] = '\"';
  pcVar5[1] = '\'';
  if (pcVar1 <= pcVar4) {
    return 0;
  }
  pcVar5[2] = *param_1;
  cVar2 = param_1[1];
  if (cVar2 == '\0') goto LAB_71006ef4b8;
  goto LAB_71006ef264;
}



// ===== FUN_71006ef570 @ 71006ef570 (size=2464) =====

undefined8 FUN_71006ef570(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined8 uVar13;
  int extraout_w9;
  undefined1 *puVar14;
  char *local_8;
  
  iVar4 = *(int *)(param_1 + 0xd3b8);
  if (iVar4 == 0) {
    *(undefined8 *)(param_1 + 0xd4d8) = 0;
    *(undefined8 *)(param_1 + 0xd4e0) = 0;
    *(undefined8 *)(param_1 + 0xd4e8) = 0;
    *(undefined8 *)(param_1 + 0xd4f0) = 0;
    lVar5 = FUN_710081ce00(param_2);
    if (param_3 == (undefined8 *)0x0) {
      lVar5 = lVar5 * 3 + 10;
      *(long *)(param_1 + 0xd3c8) = lVar5;
      lVar5 = (**(code **)(param_1 + 8))(lVar5,param_1);
      *(long *)(param_1 + 0xd3c0) = lVar5;
      if (lVar5 == 0) goto LAB_71006efd04;
      pcVar12 = "";
      uVar9 = *(undefined8 *)(param_1 + 0xd3c8);
    }
    else {
      lVar5 = lVar5 * 3 + 0xb;
      *(long *)(param_1 + 0xd3c8) = lVar5;
      lVar5 = (**(code **)(param_1 + 8))(lVar5,param_1);
      *(long *)(param_1 + 0xd3c0) = lVar5;
      if (lVar5 == 0) {
LAB_71006efd04:
        FUN_71006ed140(param_1,0xfffffffa,"Unable to allocate a command buffer for SCP session");
        return 0;
      }
      uVar9 = *(undefined8 *)(param_1 + 0xd3c8);
      pcVar12 = "p";
    }
    FUN_71008170a0(lVar5,uVar9,"scp -%sf ",pcVar12);
    lVar5 = *(long *)(param_1 + 0xd3c0);
    iVar4 = FUN_710081ce00(lVar5);
    iVar4 = FUN_71006ef200(param_2,lVar5 + iVar4,(int)*(undefined8 *)(param_1 + 0xd3c8) - iVar4);
    *(long *)(param_1 + 0xd3c8) = (long)(iVar4 + extraout_w9);
    *(undefined4 *)(param_1 + 0xd3b8) = 2;
LAB_71006ef62c:
    lVar5 = FUN_71006e5060(param_1,"session",7,0x200000,0x8000,0,0);
    *(long *)(param_1 + 0xd4f8) = lVar5;
    if (lVar5 == 0) {
      iVar4 = FUN_71006f08e0(param_1);
      if (iVar4 == -0x25) {
        FUN_71006ed140(param_1,0xffffffdb,"Would block starting up channel");
        return 0;
      }
      (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0xd3c0),param_1);
      *(undefined8 *)(param_1 + 0xd3c0) = 0;
      *(undefined4 *)(param_1 + 0xd3b8) = 0;
      return 0;
    }
    *(undefined4 *)(param_1 + 0xd3b8) = 3;
LAB_71006ef664:
    iVar4 = FUN_71006e55a0(lVar5,&DAT_710084d138,4,*(undefined8 *)(param_1 + 0xd3c0),
                           *(undefined8 *)(param_1 + 0xd3c8));
    if (iVar4 == -0x25) {
      FUN_71006ed140(param_1,0xffffffdb,"Would block requesting SCP startup");
      return 0;
    }
    if (iVar4 != 0) {
      (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0xd3c0),param_1);
      *(undefined8 *)(param_1 + 0xd3c0) = 0;
      goto LAB_71006ef894;
    }
    (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0xd3c0),param_1);
    *(undefined8 *)(param_1 + 0xd3c0) = 0;
    *(undefined1 *)(param_1 + 0xd3d0) = 0;
    *(undefined4 *)(param_1 + 0xd3b8) = 4;
LAB_71006ef6b4:
    iVar4 = FUN_71006e6040(*(undefined8 *)(param_1 + 0xd4f8),0,param_1 + 0xd3d0,1);
    if (iVar4 == -0x25) {
      FUN_71006ed140(param_1,0xffffffdb,"Would block sending initial wakeup");
      return 0;
    }
    if (iVar4 != 1) {
LAB_71006ef894:
      uVar1 = *(undefined4 *)(param_1 + 0x240);
      uVar9 = *(undefined8 *)(param_1 + 0x238);
      do {
        iVar4 = FUN_71006e6b70(*(undefined8 *)(param_1 + 0xd4f8));
      } while (iVar4 == -0x25);
      *(undefined8 *)(param_1 + 0x238) = uVar9;
      *(undefined4 *)(param_1 + 0x240) = uVar1;
      *(undefined8 *)(param_1 + 0xd4f8) = 0;
      *(undefined4 *)(param_1 + 0xd3b8) = 0;
      return 0;
    }
    *(undefined8 *)(param_1 + 0xd4d0) = 0;
    *(undefined4 *)(param_1 + 0xd3b8) = 5;
LAB_71006ef6ec:
    if (param_3 != (undefined8 *)0x0) {
      uVar10 = *(ulong *)(param_1 + 0xd4d0);
LAB_71006ef708:
      do {
        do {
          while( true ) {
            if (0xff < uVar10) goto LAB_71006ef8e4;
            if (*(int *)(param_1 + 0xd3b8) == 5) break;
            if (*(int *)(param_1 + 0xd3b8) == 6) goto LAB_71006efc10;
          }
          iVar4 = FUN_71006e5bf0(*(undefined8 *)(param_1 + 0xd4f8),0,param_1 + 0xd3d0 + uVar10,1);
          if (iVar4 == -0x25) {
            FUN_71006ed140(param_1,0xffffffdb,"Would block waiting for SCP response");
            return 0;
          }
          if (iVar4 < 0) goto LAB_71006efcd0;
          if (iVar4 == 0) goto LAB_71006efcec;
          uVar6 = *(ulong *)(param_1 + 0xd4d0);
          uVar10 = uVar6 + 1;
          *(ulong *)(param_1 + 0xd4d0) = uVar10;
          if (*(char *)(param_1 + 0xd3d0) != 'T') {
            lVar5 = FUN_71006e5f30(*(undefined8 *)(param_1 + 0xd4f8),0);
            lVar8 = (**(code **)(param_1 + 8))(lVar5 + 1,param_1);
            if (lVar8 == 0) {
              FUN_71006ed140(param_1,0xfffffffa,"Failed to get memory ");
            }
            else {
              FUN_71006e5bf0(*(undefined8 *)(param_1 + 0xd4f8),0,lVar8,lVar5);
              *(undefined1 *)(lVar8 + lVar5) = 0;
              FUN_71006ed140(param_1,0xffffffe4,"Failed to recv file");
              (**(code **)(param_1 + 0x18))(lVar8,param_1);
            }
            goto LAB_71006ef894;
          }
        } while (uVar10 < 2);
        bVar2 = *(byte *)(param_1 + uVar6 + 0xd3d0);
        if ((9 < (byte)(bVar2 - 0x30)) &&
           ((0x20 < bVar2 || ((0x100002400U >> ((ulong)bVar2 & 0x3f) & 1) == 0))))
        goto LAB_71006ef848;
      } while (uVar10 < 9);
      if (bVar2 != 10) goto code_r0x0071006ef874;
      do {
        uVar10 = uVar6;
        cVar3 = *(char *)(param_1 + 0xd3cf + uVar10);
        uVar6 = uVar10 - 1;
      } while (cVar3 == '\r' || cVar3 == '\n');
      *(ulong *)(param_1 + 0xd4d0) = uVar10;
      *(undefined1 *)(param_1 + uVar10 + 0xd3d0) = 0;
      if (uVar10 < 8) {
        FUN_71006ed140(param_1,0xffffffe4,"Invalid response from SCP server, too short");
        goto LAB_71006ef894;
      }
      lVar5 = param_1 + 0xd3d1;
      puVar7 = (undefined1 *)FUN_710080eb40(lVar5,0x20);
      if ((puVar7 == (undefined1 *)0x0) || ((long)puVar7 - lVar5 < 1)) {
        FUN_71006ed140(param_1,0xffffffe4,"Invalid response from SCP server, malformed mtime");
        goto LAB_71006ef894;
      }
      *puVar7 = 0;
      uVar9 = FUN_710081b720(lVar5,0,10);
      *(undefined8 *)(param_1 + 0xd4e8) = uVar9;
      lVar5 = FUN_710080eb40(puVar7 + 1,0x20);
      if ((lVar5 == 0) || (lVar5 - (long)(puVar7 + 1) < 1)) {
        FUN_71006ed140(param_1,0xffffffe4,"Invalid response from SCP server, malformed mtime.usec");
        goto LAB_71006ef894;
      }
      lVar5 = lVar5 + 1;
      puVar7 = (undefined1 *)FUN_710080eb40(lVar5,0x20);
      if ((puVar7 == (undefined1 *)0x0) || ((long)puVar7 - lVar5 < 1)) {
        FUN_71006ed140(param_1,0xffffffe4,"Invalid response from SCP server, too short or malformed"
                      );
        goto LAB_71006ef894;
      }
      *puVar7 = 0;
      uVar9 = FUN_710081b720(lVar5,0,10);
      *(undefined8 *)(param_1 + 0xd4f0) = uVar9;
      *(undefined1 *)(param_1 + 0xd3d0) = 0;
      *(undefined4 *)(param_1 + 0xd3b8) = 6;
LAB_71006efc10:
      iVar4 = FUN_71006e6040(*(undefined8 *)(param_1 + 0xd4f8),0,param_1 + 0xd3d0,1);
      if (iVar4 == -0x25) {
        FUN_71006ed140(param_1,0xffffffdb,"Would block waiting to send SCP ACK");
        return 0;
      }
      if (iVar4 != 1) goto LAB_71006ef894;
    }
  }
  else {
    if (iVar4 == 2) goto LAB_71006ef62c;
    if (iVar4 == 3) {
      lVar5 = *(long *)(param_1 + 0xd4f8);
      goto LAB_71006ef664;
    }
    if (iVar4 == 4) goto LAB_71006ef6b4;
    if (iVar4 - 5U < 2) goto LAB_71006ef6ec;
    if (iVar4 != 7) {
      if (1 < iVar4 - 8U) {
LAB_71006ef76c:
        if (param_3 != (undefined8 *)0x0) {
          param_3[0xc] = 0;
          param_3[1] = 0;
          *param_3 = 0;
          param_3[3] = 0;
          param_3[2] = 0;
          param_3[5] = 0;
          param_3[4] = 0;
          param_3[7] = 0;
          param_3[6] = 0;
          param_3[9] = 0;
          param_3[8] = 0;
          param_3[0xb] = 0;
          param_3[10] = 0;
          uVar13 = *(undefined8 *)(param_1 + 0xd4e0);
          uVar11 = *(undefined8 *)(param_1 + 0xd4e8);
          uVar9 = *(undefined8 *)(param_1 + 0xd4f0);
          *(uint *)((long)param_3 + 4) = (uint)*(undefined8 *)(param_1 + 0xd4d8) & 0xffff;
          param_3[5] = uVar11;
          param_3[2] = uVar13;
          param_3[3] = uVar9;
        }
        *(undefined4 *)(param_1 + 0xd3b8) = 0;
        return *(undefined8 *)(param_1 + 0xd4f8);
      }
      uVar10 = *(ulong *)(param_1 + 0xd4d0);
      if (0xff < uVar10) {
LAB_71006ef9d8:
        *(undefined4 *)(param_1 + 0xd3b8) = 10;
        goto LAB_71006ef76c;
      }
      goto LAB_71006ef8f4;
    }
  }
LAB_71006ef8e4:
  uVar10 = 0;
  *(undefined8 *)(param_1 + 0xd4d0) = 0;
  *(undefined4 *)(param_1 + 0xd3b8) = 8;
LAB_71006ef8f4:
LAB_71006ef918:
  local_8 = (char *)0x0;
  if (*(int *)(param_1 + 0xd3b8) != 8) {
    if (*(int *)(param_1 + 0xd3b8) != 9) {
      uVar10 = *(ulong *)(param_1 + 0xd4d0);
      goto LAB_71006ef910;
    }
    goto LAB_71006efb00;
  }
  iVar4 = FUN_71006e5bf0(*(undefined8 *)(param_1 + 0xd4f8),0,param_1 + 0xd3d0 + uVar10,1);
  if (iVar4 == -0x25) {
    FUN_71006ed140(param_1,0xffffffdb,"Would block waiting for SCP response");
    return 0;
  }
  if (iVar4 < 0) {
LAB_71006efcd0:
    FUN_71006ed140(param_1,iVar4,"Failed reading SCP response");
  }
  else if (iVar4 == 0) {
LAB_71006efcec:
    iVar4 = FUN_71006e63a0(*(undefined8 *)(param_1 + 0xd4f8));
    if (iVar4 == 0) {
      return *(undefined8 *)(param_1 + 0xd4f8);
    }
    FUN_71006ed140(param_1,0xffffffe4,"Unexpected channel close");
  }
  else {
    uVar6 = *(ulong *)(param_1 + 0xd4d0);
    uVar10 = uVar6 + 1;
    *(ulong *)(param_1 + 0xd4d0) = uVar10;
    if (*(char *)(param_1 + 0xd3d0) == 'C') {
      if (uVar10 < 2) goto LAB_71006ef910;
      bVar2 = *(byte *)(param_1 + uVar6 + 0xd3d0);
      if ((bVar2 != 10 && bVar2 != 0xd) && bVar2 < 0x20) goto LAB_71006ef848;
      if (uVar10 < 7) goto LAB_71006ef910;
      if (bVar2 == 10) {
        do {
          uVar10 = uVar6;
          cVar3 = *(char *)(param_1 + 0xd3cf + uVar10);
          uVar6 = uVar10 - 1;
        } while (cVar3 == '\r' || cVar3 == '\n');
        *(ulong *)(param_1 + 0xd4d0) = uVar10;
        pcVar12 = "Invalid response from SCP server, too short";
        *(undefined1 *)(param_1 + uVar10 + 0xd3d0) = 0;
        if (uVar10 < 6) {
LAB_71006efa84:
          FUN_71006ed140(param_1,0xffffffe4,pcVar12);
          goto LAB_71006ef894;
        }
        lVar5 = param_1 + 0xd3d1;
        puVar7 = (undefined1 *)
                 FUN_710080eb40(lVar5,0x20,"Invalid response from SCP server, too short");
        if ((puVar7 == (undefined1 *)0x0) || ((long)puVar7 - lVar5 < 1)) {
          pcVar12 = "Invalid response from SCP server, malformed mode";
          goto LAB_71006efa84;
        }
        puVar14 = puVar7 + 1;
        *puVar7 = 0;
        uVar9 = FUN_710081b720(lVar5,&local_8,8);
        *(undefined8 *)(param_1 + 0xd4d8) = uVar9;
        if ((local_8 != (char *)0x0) && (*local_8 != '\0')) {
          pcVar12 = "Invalid response from SCP server, invalid mode";
          goto LAB_71006efa84;
        }
        puVar7 = (undefined1 *)FUN_710080eb40(puVar14,0x20);
        if ((puVar7 == (undefined1 *)0x0) || ((long)puVar7 - (long)puVar14 < 1)) {
          pcVar12 = "Invalid response from SCP server, too short or malformed";
          goto LAB_71006efa84;
        }
        *puVar7 = 0;
        uVar9 = FUN_7100808800(puVar14,&local_8,10);
        *(undefined8 *)(param_1 + 0xd4e0) = uVar9;
        if ((local_8 != (char *)0x0) && (*local_8 != '\0')) {
          pcVar12 = "Invalid response from SCP server, invalid size";
          goto LAB_71006efa84;
        }
        *(undefined1 *)(param_1 + 0xd3d0) = 0;
        *(undefined4 *)(param_1 + 0xd3b8) = 9;
LAB_71006efb00:
        iVar4 = FUN_71006e6040(*(undefined8 *)(param_1 + 0xd4f8),0,param_1 + 0xd3d0,1);
        if (iVar4 == -0x25) {
          FUN_71006ed140(param_1,0xffffffdb,"Would block sending SCP ACK");
          return 0;
        }
        if (iVar4 != 1) goto LAB_71006ef894;
        goto LAB_71006ef9d8;
      }
      if (uVar10 != 0x100) goto LAB_71006ef910;
LAB_71006ef87c:
      FUN_71006ed140(param_1,0xffffffe4,"Unterminated response from SCP server");
    }
    else {
      FUN_71006ed140(param_1,0xffffffe4,"Invalid response from SCP server");
    }
  }
  goto LAB_71006ef894;
code_r0x0071006ef874:
  if (uVar10 == 0x100) goto LAB_71006ef87c;
  goto LAB_71006ef708;
LAB_71006ef848:
  FUN_71006ed140(param_1,0xffffffe4,"Invalid data in SCP response");
  goto LAB_71006ef894;
LAB_71006ef910:
  if (0xff < uVar10) goto LAB_71006ef9d8;
  goto LAB_71006ef918;
}



// ===== FUN_71006eff10 @ 71006eff10 (size=1644) =====

undefined8
FUN_71006eff10(long param_1,long param_2,undefined4 param_3,undefined8 param_4,long param_5,
              long param_6)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  int extraout_w9;
  
  iVar2 = *(int *)(param_1 + 0xd500);
  if (iVar2 == 0) {
    lVar3 = FUN_710081ce00(param_2);
    if (param_5 == 0 && param_6 == 0) {
      lVar3 = lVar3 * 3 + 10;
      *(long *)(param_1 + 0xd510) = lVar3;
      lVar3 = (**(code **)(param_1 + 8))(lVar3,param_1);
      *(long *)(param_1 + 0xd508) = lVar3;
      if (lVar3 == 0) {
LAB_71006f0438:
        FUN_71006ed140(param_1,0xfffffffa,"Unable to allocate a command buffer for SCP session");
        return 0;
      }
      uVar5 = *(undefined8 *)(param_1 + 0xd510);
      pcVar6 = "";
    }
    else {
      lVar3 = lVar3 * 3 + 0xb;
      *(long *)(param_1 + 0xd510) = lVar3;
      lVar3 = (**(code **)(param_1 + 8))(lVar3,param_1);
      *(long *)(param_1 + 0xd508) = lVar3;
      if (lVar3 == 0) goto LAB_71006f0438;
      pcVar6 = "p";
      uVar5 = *(undefined8 *)(param_1 + 0xd510);
    }
    FUN_71008170a0(lVar3,uVar5,"scp -%st ",pcVar6);
    lVar3 = *(long *)(param_1 + 0xd508);
    iVar2 = FUN_710081ce00(lVar3);
    iVar2 = FUN_71006ef200(param_2,lVar3 + iVar2,(int)*(undefined8 *)(param_1 + 0xd510) - iVar2);
    *(long *)(param_1 + 0xd510) = (long)(iVar2 + extraout_w9);
    *(undefined4 *)(param_1 + 0xd500) = 2;
LAB_71006effd4:
    lVar3 = FUN_71006e5060(param_1,"session",7,0x200000,0x8000,0,0);
    *(long *)(param_1 + 0xd620) = lVar3;
    if (lVar3 == 0) {
      iVar2 = FUN_71006f08e0(param_1);
      if (iVar2 != -0x25) {
        (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0xd508),param_1);
        *(undefined8 *)(param_1 + 0xd508) = 0;
        *(undefined4 *)(param_1 + 0xd500) = 0;
        return 0;
      }
      FUN_71006ed140(param_1,0xffffffdb,"Would block starting up channel");
      return 0;
    }
    *(undefined4 *)(param_1 + 0xd500) = 3;
LAB_71006f000c:
    iVar2 = FUN_71006e55a0(lVar3,&DAT_710084d138,4,*(undefined8 *)(param_1 + 0xd508),
                           *(undefined8 *)(param_1 + 0xd510));
    if (iVar2 == -0x25) {
      FUN_71006ed140(param_1,0xffffffdb,"Would block requesting SCP startup");
      return 0;
    }
    if (iVar2 != 0) {
      (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0xd508),param_1);
      *(undefined8 *)(param_1 + 0xd508) = 0;
      FUN_71006ed140(param_1,0xffffffe4,"Unknown error while getting error string");
      goto LAB_71006f0348;
    }
    (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0xd508),param_1);
    *(undefined8 *)(param_1 + 0xd508) = 0;
    *(undefined4 *)(param_1 + 0xd500) = 4;
LAB_71006f0054:
    iVar2 = FUN_71006e5bf0(*(undefined8 *)(param_1 + 0xd620),0,param_1 + 0xd518,1);
    if (iVar2 == -0x25) {
      FUN_71006ed140(param_1,0xffffffdb,"Would block waiting for response from remote");
      return 0;
    }
    if (iVar2 < 0) {
LAB_71006f046c:
      FUN_71006ed140(param_1,iVar2,"SCP failure");
      goto LAB_71006f0348;
    }
    if (iVar2 == 0) goto LAB_71006f026c;
    if (*(char *)(param_1 + 0xd518) == '\0') {
      if (param_5 != 0 || param_6 != 0) {
        iVar2 = FUN_71008170a0(param_1 + 0xd518,0x100,"T%ld 0 %ld 0\n",param_5,param_6);
        *(long *)(param_1 + 0xd618) = (long)iVar2;
        *(undefined4 *)(param_1 + 0xd500) = 5;
LAB_71006f02cc:
        iVar2 = FUN_71006e6040(*(undefined8 *)(param_1 + 0xd620),0,param_1 + 0xd518,
                               *(undefined8 *)(param_1 + 0xd618));
        if (iVar2 == -0x25) {
          FUN_71006ed140(param_1,0xffffffdb,"Would block sending time data for SCP file");
          return 0;
        }
        if (iVar2 != (int)*(undefined8 *)(param_1 + 0xd618)) {
          FUN_71006ed140(param_1,0xfffffff9,"Unable to send time data for SCP file");
          goto LAB_71006f0348;
        }
        *(undefined4 *)(param_1 + 0xd500) = 6;
LAB_71006f02fc:
        iVar2 = FUN_71006e5bf0(*(undefined8 *)(param_1 + 0xd620),0,param_1 + 0xd518,1);
        if (iVar2 == -0x25) goto LAB_71006f049c;
        if (iVar2 < 0) goto LAB_71006f046c;
        if (iVar2 == 0) goto LAB_71006f026c;
        if (*(char *)(param_1 + 0xd518) != '\0') {
          FUN_71006ed140(param_1,0xffffffe4,"Invalid SCP ACK response");
          goto LAB_71006f0348;
        }
      }
LAB_71006f00a0:
      *(undefined4 *)(param_1 + 0xd500) = 7;
LAB_71006f00a8:
      lVar3 = FUN_7100806500(param_2,0x2f);
      if (lVar3 != 0) {
        param_2 = lVar3 + 1;
      }
      iVar2 = FUN_71008170a0(param_1 + 0xd518,0x100,"C0%o %lld %s\n",param_3,param_4,param_2);
      lVar3 = (long)iVar2;
      *(long *)(param_1 + 0xd618) = lVar3;
      *(undefined4 *)(param_1 + 0xd500) = 8;
LAB_71006f00e8:
      iVar2 = FUN_71006e6040(*(undefined8 *)(param_1 + 0xd620),0,param_1 + 0xd518,lVar3);
      if (iVar2 == -0x25) {
        FUN_71006ed140(param_1,0xffffffdb,"Would block send core file data for SCP file");
        return 0;
      }
      if (iVar2 != (int)*(undefined8 *)(param_1 + 0xd618)) {
        FUN_71006ed140(param_1,0xfffffff9,"Unable to send core file data for SCP file");
        goto LAB_71006f0348;
      }
      *(undefined4 *)(param_1 + 0xd500) = 9;
      goto LAB_71006f0114;
    }
  }
  else {
    if (iVar2 == 2) goto LAB_71006effd4;
    if (iVar2 == 3) {
      lVar3 = *(long *)(param_1 + 0xd620);
      goto LAB_71006f000c;
    }
    if (iVar2 == 4) goto LAB_71006f0054;
    if (param_5 != 0 || param_6 != 0) {
      if (iVar2 == 5) goto LAB_71006f02cc;
      if (iVar2 != 6) goto LAB_71006f01e0;
      goto LAB_71006f02fc;
    }
    if (iVar2 == 5) goto LAB_71006f00a0;
LAB_71006f01e0:
    if (iVar2 == 7) goto LAB_71006f00a8;
    if (iVar2 == 8) {
      lVar3 = *(long *)(param_1 + 0xd618);
      goto LAB_71006f00e8;
    }
    if (iVar2 != 9) goto LAB_71006f01fc;
LAB_71006f0114:
    iVar2 = FUN_71006e5bf0(*(undefined8 *)(param_1 + 0xd620),0,param_1 + 0xd518,1);
    if (iVar2 == -0x25) {
LAB_71006f049c:
      FUN_71006ed140(param_1,0xffffffdb,"Would block waiting for response");
      return 0;
    }
    if (-1 < iVar2) {
      if (iVar2 != 0) {
        if (*(char *)(param_1 + 0xd518) == '\0') {
LAB_71006f01fc:
          *(undefined4 *)(param_1 + 0xd500) = 0;
          return *(undefined8 *)(param_1 + 0xd620);
        }
        lVar3 = FUN_71006e5f30(*(undefined8 *)(param_1 + 0xd620),0);
        lVar4 = (**(code **)(param_1 + 8))(lVar3 + 1,param_1);
        if (lVar4 == 0) {
          FUN_71006ed140(param_1,0xfffffffa,"failed to get memory");
        }
        else {
          iVar2 = FUN_71006e5bf0(*(undefined8 *)(param_1 + 0xd620),0,lVar4,lVar3);
          if (0 < iVar2) {
            *(undefined1 *)(lVar4 + lVar3) = 0;
          }
          (**(code **)(param_1 + 0x18))(lVar4,param_1);
          FUN_71006ed140(param_1,0xffffffe4,"failed to send file");
        }
        goto LAB_71006f0348;
      }
LAB_71006f026c:
      iVar2 = FUN_71006e63a0(*(undefined8 *)(param_1 + 0xd620));
      if (iVar2 == 0) {
        return *(undefined8 *)(param_1 + 0xd620);
      }
      FUN_71006ed140(param_1,0xffffffe4,"Unexpected channel close");
      goto LAB_71006f0348;
    }
  }
  FUN_71006ed140(param_1,0xffffffe4,"Invalid ACK response from remote");
LAB_71006f0348:
  uVar1 = *(undefined4 *)(param_1 + 0x240);
  uVar5 = *(undefined8 *)(param_1 + 0x238);
  do {
    iVar2 = FUN_71006e6b70(*(undefined8 *)(param_1 + 0xd620));
  } while (iVar2 == -0x25);
  *(undefined8 *)(param_1 + 0x238) = uVar5;
  *(undefined4 *)(param_1 + 0x240) = uVar1;
  *(undefined8 *)(param_1 + 0xd620) = 0;
  *(undefined4 *)(param_1 + 0xd500) = 0;
  return 0;
}



// ===== FUN_71006f0580 @ 71006f0580 (size=160) =====

long FUN_71006f0580(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_710081c880(0);
  do {
    lVar3 = FUN_71006ef570(param_1,param_2,param_3);
    if (*(int *)(param_1 + 0x94) == 0 || lVar3 != 0) {
      return lVar3;
    }
    iVar1 = FUN_71006f08e0(param_1);
  } while ((iVar1 == -0x25) && (iVar1 = FUN_71006f0950(param_1,uVar2), iVar1 == 0));
  return 0;
}



// ===== FUN_71006f0620 @ 71006f0620 (size=208) =====

long FUN_71006f0620(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_710081c880(0);
  do {
    lVar3 = FUN_71006eff10(param_1,param_2,param_3,param_4,param_5,param_6);
    if (*(int *)(param_1 + 0x94) == 0 || lVar3 != 0) {
      return lVar3;
    }
    iVar1 = FUN_71006f08e0(param_1);
  } while ((iVar1 == -0x25) && (iVar1 = FUN_71006f0950(param_1,uVar2), iVar1 == 0));
  return 0;
}



// ===== FUN_71006f0720 @ 71006f0720 (size=172) =====

undefined8 * FUN_71006f0720(code *param_1,undefined *param_2,undefined1 *param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 local_8;
  
  pcVar1 = (code *)&UNK_71006f0710;
  if (param_1 != (code *)0x0) {
    pcVar1 = param_1;
  }
  puVar2 = &UNK_71006f0700;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_2;
  }
  puVar3 = &LAB_71006f06f0;
  if (param_3 != (undefined1 *)0x0) {
    puVar3 = param_3;
  }
  local_8 = param_4;
  puVar4 = (undefined8 *)(*pcVar1)(0xd638,&local_8);
  if (puVar4 != (undefined8 *)0x0) {
    FUN_7100808340(puVar4,0,0xd638);
    puVar4[2] = puVar3;
    puVar4[3] = puVar2;
    *puVar4 = local_8;
    puVar4[1] = pcVar1;
    *(undefined4 *)((long)puVar4 + 0x94) = 1;
    puVar4[9] = FUN_71006ed1b0;
    puVar4[10] = FUN_71006ed150;
    FUN_71006fd0d0();
  }
  return puVar4;
}



// ===== FUN_71006f07d0 @ 71006f07d0 (size=264) =====

undefined4 FUN_71006f07d0(long param_1,long *param_2,undefined4 *param_3,int param_4)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 *puVar4;
  
  if (*(int *)(param_1 + 0x240) == 0) {
    if (param_2 != (long *)0x0) {
      if (param_4 == 0) {
        *param_2 = (long)&DAT_7100853d20;
      }
      else {
        puVar4 = (undefined1 *)(**(code **)(param_1 + 8))(1,param_1);
        *param_2 = (long)puVar4;
        if (puVar4 != (undefined1 *)0x0) {
          *puVar4 = 0;
        }
      }
    }
    uVar2 = 0;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
      return 0;
    }
  }
  else {
    lVar3 = 0;
    if (param_2 != (long *)0x0) {
      puVar4 = *(undefined1 **)(param_1 + 0x238);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_7100853d20;
      }
      else {
        lVar3 = FUN_710081ce00(puVar4);
      }
      if (param_4 == 0) {
        *param_2 = (long)puVar4;
      }
      else {
        lVar1 = (**(code **)(param_1 + 8))(lVar3 + 1,param_1);
        *param_2 = lVar1;
        if (lVar1 != 0) {
          FUN_710080f900(lVar1,puVar4,lVar3);
          *(undefined1 *)(*param_2 + lVar3) = 0;
        }
      }
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = (int)lVar3;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x240);
  }
  return uVar2;
}



// ===== FUN_71006f08e0 @ 71006f08e0 (size=8) =====

undefined4 FUN_71006f08e0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x240);
}



// ===== FUN_71006f08f0 @ 71006f08f0 (size=48) =====

undefined8 FUN_71006f08f0(long param_1,int param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (param_2 != 1) {
    uVar1 = 0xffffffde;
    if (param_2 == 2) {
      uVar1 = 0;
      *(undefined4 *)(param_1 + 0x70) = param_3;
    }
    return uVar1;
  }
  *(undefined4 *)(param_1 + 0x6c) = param_3;
  return 0;
}



// ===== FUN_71006f0920 @ 71006f0920 (size=16) =====

undefined4 FUN_71006f0920(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(param_1 + 0x94) = param_2;
  return uVar1;
}



// ===== thunk_FUN_71006f0920 @ 71006f0930 (size=4) =====

undefined4 thunk_FUN_71006f0920(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(param_1 + 0x94) = param_2;
  return uVar1;
}



// ===== FUN_71006f0940 @ 71006f0940 (size=8) =====

undefined4 FUN_71006f0940(long param_1)

{
  return *(undefined4 *)(param_1 + 0x230);
}



// ===== FUN_71006f0950 @ 71006f0950 (size=548) =====

/* WARNING: Type propagation algorithm not settling */

int FUN_71006f0950(long param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  double dVar11;
  int local_24;
  long lStack_20;
  long lStack_18;
  long local_10;
  long local_8;
  
  *(undefined4 *)(param_1 + 0x240) = 0;
  iVar4 = FUN_71006fcef0(param_1,&local_24);
  iVar6 = local_24;
  if (iVar4 != 0) {
    return iVar4;
  }
  uVar5 = FUN_71006f0940(param_1);
  lVar7 = *(long *)(param_1 + 0x98);
  if (uVar5 == 0) {
    lVar10 = 1000;
    if (0 < lVar7) goto LAB_71006f09c0;
    plVar9 = (long *)0x0;
    lVar7 = 0;
    local_10 = 1;
    local_8 = 0;
    iVar6 = *(int *)(param_1 + 0x228) + 1;
  }
  else {
    lVar10 = (long)(iVar6 * 1000);
    if (lVar7 < 1) {
LAB_71006f0b08:
      bVar1 = 0 < lVar10;
    }
    else {
LAB_71006f09c0:
      if (local_24 != 0 && lVar10 <= lVar7) goto LAB_71006f0b08;
      uVar8 = FUN_710081c880(0);
      dVar11 = (double)FUN_710081b7a0(uVar8,param_2);
      bVar1 = true;
      lVar10 = *(long *)(param_1 + 0x98) - (long)(dVar11 * 1000.0);
      if (*(long *)(param_1 + 0x98) < (long)(dVar11 * 1000.0)) {
        iVar6 = FUN_71006ed140(param_1,0xfffffff7,"API timeout expired");
        return iVar6;
      }
    }
    uVar3 = *(uint *)(param_1 + 0x228);
    plVar9 = (long *)0x0;
    local_10 = lVar10 / 1000;
    local_8 = (lVar10 % 1000) * 1000;
    if ((uVar5 & 1) != 0) {
      plVar9 = &lStack_20;
      uVar2 = uVar3 + 0x3f;
      if (-1 < (int)uVar3) {
        uVar2 = uVar3;
      }
      plVar9[(int)uVar2 >> 6] = 1L << ((ulong)uVar3 & 0x3f);
    }
    lVar7 = 0;
    if ((uVar5 >> 1 & 1) != 0) {
      lVar7 = (long)&lStack_18;
      uVar5 = uVar3 + 0x3f;
      if (-1 < (int)uVar3) {
        uVar5 = uVar3;
      }
      *(long *)(lVar7 + (long)((int)uVar5 >> 6) * 8) = 1L << ((ulong)uVar3 & 0x3f);
    }
    iVar6 = uVar3 + 1;
    lVar10 = 0;
    if (!bVar1) goto LAB_71006f0ab0;
  }
  lVar10 = (long)&local_10;
LAB_71006f0ab0:
  iVar6 = FUN_710076b020(iVar6,plVar9,lVar7,0,lVar10);
  if (iVar6 == 0) {
    iVar6 = FUN_71006ed140(param_1,0xfffffff7,"Timed out waiting on socket");
  }
  else {
    if (-1 < iVar6) {
      return 0;
    }
    iVar6 = FUN_71006ed140(param_1,0xfffffff7,"Error waiting on socket");
  }
  return iVar6;
}



// ===== FUN_71006f0b80 @ 71006f0b80 (size=1776) =====

/* WARNING: Type propagation algorithm not settling */

int FUN_71006f0b80(long param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined4 uVar10;
  char *pcVar11;
  char local_1;
  
  uVar6 = FUN_710081c880(0);
LAB_71006f0bc8:
  iVar4 = *(int *)(param_1 + 0xcc88);
  if (iVar4 != 0) {
    if (iVar4 != 2) {
      if (iVar4 == 3) {
        iVar4 = *(int *)(param_1 + 0xcb60);
        goto LAB_71006f0e30;
      }
      if (iVar4 == 4) goto LAB_71006f1054;
      if (iVar4 == 5) goto LAB_71006f107c;
      if (iVar4 == 6) goto LAB_71006f10bc;
      if (iVar4 != 7) {
        return -0x22;
      }
      goto LAB_71006f0d10;
    }
    uVar10 = *(undefined4 *)(param_1 + 0x228);
LAB_71006f0c10:
    if (*(int *)(param_1 + 0xcb60) == 0) {
      pcVar11 = *(char **)(param_1 + 0x180);
      if (pcVar11 == (char *)0x0) {
        pcVar11 = "SSH-2.0-libssh2_1.10.0\r\n";
        lVar9 = 0x18;
      }
      else {
        iVar4 = FUN_710081ce00(pcVar11);
        lVar9 = (long)iVar4;
      }
      *(undefined4 *)(param_1 + 0xcb60) = 2;
    }
    else {
      pcVar11 = "SSH-2.0-libssh2_1.10.0\r\n";
      lVar9 = 0x18;
    }
    *(uint *)(param_1 + 0x230) = *(uint *)(param_1 + 0x230) & 0xfffffffd;
    lVar7 = (**(code **)(param_1 + 0x48))
                      (uVar10,pcVar11 + *(long *)(param_1 + 0xcc68),
                       lVar9 - *(long *)(param_1 + 0xcc68),
                       (ulong)(*(int *)(param_1 + 0x6c) == 0) << 0x11,param_1);
    if (lVar7 == lVar9 - *(long *)(param_1 + 0xcc68)) {
      *(undefined8 *)(param_1 + 0xcc68) = 0;
      iVar4 = 0;
      *(undefined4 *)(param_1 + 0xcb60) = 0;
      *(undefined4 *)(param_1 + 0xcc88) = 3;
LAB_71006f0e30:
      do {
        if (iVar4 == 0) {
          iVar4 = 0;
          *(undefined4 *)(param_1 + 0xcb60) = 2;
LAB_71006f0e40:
          lVar9 = (long)iVar4;
          do {
            iVar4 = (int)lVar9;
            if ((iVar4 != 0) && (cVar1 = *(char *)(param_1 + (iVar4 + -1) + 0xcb64), cVar1 == '\n'))
            break;
            local_1 = '\0';
            *(uint *)(param_1 + 0x230) = *(uint *)(param_1 + 0x230) & 0xfffffffe;
            iVar5 = (**(code **)(param_1 + 0x50))
                              (*(undefined4 *)(param_1 + 0x228),&local_1,1,
                               (ulong)(*(int *)(param_1 + 0x6c) == 0) << 0x11,param_1);
            if (iVar5 < 0) {
              if (iVar5 != -0xb) {
                iVar4 = -0x2b;
                *(undefined4 *)(param_1 + 0xcb60) = 0;
                *(undefined8 *)(param_1 + 0xcc68) = 0;
                goto LAB_71006f0ee4;
              }
              *(undefined4 *)(param_1 + 0x230) = 1;
              *(long *)(param_1 + 0xcc68) = (long)iVar4;
              goto LAB_71006f0ca4;
            }
            if (iVar5 == 0) {
              iVar4 = -0xd;
              *(undefined4 *)(param_1 + 0x22c) = 0xffffffff;
              goto LAB_71006f0ee4;
            }
            iVar4 = iVar4 + 1;
            if (local_1 == '\0') {
              *(undefined4 *)(param_1 + 0xcb60) = 0;
              iVar4 = -2;
              *(undefined8 *)(param_1 + 0xcc68) = 0;
              goto LAB_71006f0ee4;
            }
            *(char *)(param_1 + 0xcb64 + lVar9) = local_1;
            lVar9 = lVar9 + 1;
            cVar1 = local_1;
          } while ((int)lVar9 < 0x100);
        }
        else {
          iVar4 = (int)*(undefined8 *)(param_1 + 0xcc68);
          if (iVar4 < 0x100) goto LAB_71006f0e40;
          cVar1 = *(char *)(param_1 + (iVar4 + -1) + 0xcb64);
        }
        lVar9 = (long)iVar4;
        while( true ) {
          iVar4 = (int)lVar9;
          lVar9 = lVar9 + -1;
          if (cVar1 != '\n' && cVar1 != '\r') break;
          if ((int)lVar9 == 0) {
            *(undefined4 *)(param_1 + 0xcb60) = 0;
            iVar4 = -2;
            *(undefined8 *)(param_1 + 0xcc68) = 0;
            goto LAB_71006f0ee4;
          }
          cVar1 = *(char *)(param_1 + 0xcb63 + lVar9);
        }
        *(undefined4 *)(param_1 + 0xcb60) = 0;
        *(undefined8 *)(param_1 + 0xcc68) = 0;
        if (*(long *)(param_1 + 0x110) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0x110),param_1);
        }
        lVar9 = (**(code **)(param_1 + 8))((long)(iVar4 + 1),param_1);
        *(long *)(param_1 + 0x110) = lVar9;
        if (lVar9 == 0) {
          iVar4 = FUN_71006ed140(param_1,0xfffffffa,"Error allocating space for remote banner");
          if (iVar4 == -0x25) goto LAB_71006f0ca4;
          if (iVar4 != 0) {
LAB_71006f0ee4:
            iVar4 = FUN_71006ed140(param_1,iVar4,"Failed getting banner");
            goto joined_r0x0071006f1178;
          }
          iVar4 = FUN_710080b4c0(&DAT_710084d788,*(undefined8 *)(param_1 + 0x110),4);
        }
        else {
          FUN_710080f900(lVar9,param_1 + 0xcb64,(long)iVar4);
          *(undefined1 *)(*(long *)(param_1 + 0x110) + (long)iVar4) = 0;
          iVar4 = FUN_710080b4c0(&DAT_710084d788,*(undefined8 *)(param_1 + 0x110),4);
        }
        if (iVar4 == 0) goto LAB_71006f104c;
        iVar4 = *(int *)(param_1 + 0xcb60);
      } while( true );
    }
    if (lVar7 < 0 && lVar7 != -0xb) {
      *(undefined4 *)(param_1 + 0xcb60) = 0;
      *(undefined8 *)(param_1 + 0xcc68) = 0;
      iVar4 = FUN_71006ed140(param_1,0xffffffd5,"Failed sending banner");
      goto joined_r0x0071006f1260;
    }
    *(undefined4 *)(param_1 + 0x230) = 2;
    if (0 < lVar7) {
      *(long *)(param_1 + 0xcc68) = lVar7 + *(long *)(param_1 + 0xcc68);
    }
    goto LAB_71006f0ca4;
  }
  if (param_2 != -1) {
    *(int *)(param_1 + 0x228) = param_2;
    uVar3 = FUN_710076be70(param_2,3,0);
    if (uVar3 == 0xffffffff) {
      uVar10 = *(undefined4 *)(param_1 + 0x228);
      *(undefined4 *)(param_1 + 0x234) = 0;
LAB_71006f0c08:
      *(undefined4 *)(param_1 + 0xcc88) = 2;
      goto LAB_71006f0c10;
    }
    bVar2 = (uVar3 & 0x4000) == 0;
    *(uint *)(param_1 + 0x234) = (uint)bVar2;
    uVar10 = *(undefined4 *)(param_1 + 0x228);
    if (!bVar2) goto LAB_71006f0c08;
    uVar3 = FUN_710076be70(uVar10,3,0);
    iVar4 = FUN_710076be70(uVar10,4,uVar3 | 0x4000);
    if (iVar4 == 0) {
      uVar10 = *(undefined4 *)(param_1 + 0x228);
      goto LAB_71006f0c08;
    }
    iVar4 = FUN_71006ed140(param_1,iVar4,"Failed changing socket\'s blocking state to non-blocking")
    ;
    goto joined_r0x0071006f1260;
  }
  iVar4 = FUN_71006ed140(param_1,0xffffffd3,"Bad socket provided");
joined_r0x0071006f1178:
  if (iVar4 != -0x25) {
    return iVar4;
  }
  goto LAB_71006f0df8;
LAB_71006f104c:
  *(undefined4 *)(param_1 + 0xcc88) = 4;
LAB_71006f1054:
  iVar4 = FUN_71006ebce0(param_1,0,param_1 + 0xccd0);
  if (iVar4 == -0x25) {
LAB_71006f0ca4:
    iVar4 = *(int *)(param_1 + 0x94);
  }
  else {
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0xcc88) = 5;
LAB_71006f107c:
      *(undefined1 *)(param_1 + 0xcca0) = 5;
      FUN_71006ed220(param_1 + 0xcca1,0xc);
      builtin_strncpy((char *)(param_1 + 0xcca5),"ssh-user",8);
      builtin_strncpy((char *)(param_1 + 0xccad),"auth",4);
      *(undefined4 *)(param_1 + 0xcc88) = 6;
LAB_71006f10bc:
      iVar4 = FUN_71006f87d0(param_1,param_1 + 0xcca0,0x11,0,0);
      if (iVar4 == -0x25) goto LAB_71006f0ca4;
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 0xcc88) = 7;
LAB_71006f0d10:
        iVar4 = FUN_71006eee10(param_1,6,param_1 + 0xcc90,param_1 + 0xcc98,0,0,0,param_1 + 0xccc0);
        if (iVar4 == 0) {
          if (*(ulong *)(param_1 + 0xcc98) < 5) {
            iVar4 = FUN_71006ed140(param_1,0xfffffff2,"Unexpected packet length");
          }
          else {
            uVar8 = FUN_71006ed200(*(long *)(param_1 + 0xcc90) + 1);
            lVar9 = *(long *)(param_1 + 0xcc90);
            *(ulong *)(param_1 + 0xccb8) = uVar8 & 0xffffffff;
            if (((uVar8 & 0xffffffff) == 0xc) &&
               (iVar4 = FUN_710080b4c0("ssh-userauth",lVar9 + 5), iVar4 == 0)) {
              (**(code **)(param_1 + 0x18))(lVar9,param_1);
              *(undefined8 *)(param_1 + 0xcc90) = 0;
              *(undefined4 *)(param_1 + 0xcc88) = 0;
              return 0;
            }
            (**(code **)(param_1 + 0x18))(lVar9,param_1);
            *(undefined8 *)(param_1 + 0xcc90) = 0;
            iVar4 = FUN_71006ed140(param_1,0xfffffff2,"Invalid response received from server");
          }
        }
      }
      else {
        iVar4 = FUN_71006ed140(param_1,iVar4,"Unable to ask for ssh-userauth service");
      }
    }
    else {
      iVar4 = FUN_71006ed140(param_1,iVar4,"Unable to exchange encryption keys");
    }
joined_r0x0071006f1260:
    if (iVar4 != -0x25) {
      return iVar4;
    }
LAB_71006f0df8:
    iVar4 = *(int *)(param_1 + 0x94);
  }
  if (iVar4 == 0) {
    return -0x25;
  }
  iVar4 = FUN_71006f0950(param_1,uVar6);
  if (iVar4 != 0) {
    return iVar4;
  }
  goto LAB_71006f0bc8;
}



// ===== FUN_71006f1270 @ 71006f1270 (size=1404) =====

undefined8 FUN_71006f1270(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  uVar4 = FUN_710081c880(0);
  iVar2 = *(int *)(param_1 + 0xcf68);
  if (iVar2 != 0) goto LAB_71006f1794;
LAB_71006f12b8:
  *(undefined4 *)(param_1 + 0xcf68) = 2;
  do {
    while (lVar5 = FUN_71006ed660(param_1 + 0x200), lVar5 != 0) {
      iVar2 = FUN_71006e6800();
      if (iVar2 == -0x25) goto LAB_71006f1774;
    }
    *(undefined4 *)(param_1 + 0xcf68) = 3;
    while( true ) {
      do {
        lVar5 = FUN_71006ed660(param_1 + 0x218);
        if (lVar5 == 0) {
          *(undefined4 *)(param_1 + 0xcf68) = 4;
          goto LAB_71006f1300;
        }
        iVar2 = FUN_71006e6990();
      } while (iVar2 != -0x25);
LAB_71006f1774:
      if (*(int *)(param_1 + 0x94) == 0) {
        return 0xffffffdb;
      }
      uVar6 = FUN_71006f0950(param_1,uVar4);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      iVar2 = *(int *)(param_1 + 0xcf68);
      if (iVar2 == 0) goto LAB_71006f12b8;
LAB_71006f1794:
      if (iVar2 == 2) break;
      if (iVar2 != 3) {
LAB_71006f1300:
        if ((*(uint *)(param_1 + 0x68) >> 1 & 1) != 0) {
          if ((*(long *)(param_1 + 0xa0) != 0) &&
             (pcVar7 = *(code **)(*(long *)(param_1 + 0xa0) + 0x40), pcVar7 != (code *)0x0)) {
            (*pcVar7)(param_1,param_1 + 0xa8);
          }
          if ((*(long *)(param_1 + 0x198) != 0) &&
             (pcVar7 = *(code **)(*(long *)(param_1 + 0x198) + 0x38), pcVar7 != (code *)0x0)) {
            (*pcVar7)(param_1,param_1 + 0x1a0);
          }
          if ((*(long *)(param_1 + 0x1c0) != 0) &&
             (pcVar7 = *(code **)(*(long *)(param_1 + 0x1c0) + 0x28), pcVar7 != (code *)0x0)) {
            (*pcVar7)(param_1,1,param_1 + 0x1c8);
          }
          if ((*(long *)(param_1 + 0x1a8) != 0) &&
             (pcVar7 = *(code **)(*(long *)(param_1 + 0x1a8) + 0x20), pcVar7 != (code *)0x0)) {
            (*pcVar7)(param_1,param_1 + 0x1b8);
          }
          if ((*(long *)(param_1 + 0x128) != 0) &&
             (pcVar7 = *(code **)(*(long *)(param_1 + 0x128) + 0x38), pcVar7 != (code *)0x0)) {
            (*pcVar7)(param_1,param_1 + 0x130);
          }
          if ((*(long *)(param_1 + 0x150) != 0) &&
             (pcVar7 = *(code **)(*(long *)(param_1 + 0x150) + 0x28), pcVar7 != (code *)0x0)) {
            (*pcVar7)(param_1,0,param_1 + 0x158);
          }
          if ((*(long *)(param_1 + 0x138) != 0) &&
             (pcVar7 = *(code **)(*(long *)(param_1 + 0x138) + 0x20), pcVar7 != (code *)0x0)) {
            (*pcVar7)(param_1,param_1 + 0x148);
          }
          if (*(long *)(param_1 + 0x88) != 0) {
            (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0x88),param_1);
          }
        }
        if (*(long *)(param_1 + 0x110) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0x110),param_1);
        }
        if (*(long *)(param_1 + 0x180) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0x180),param_1);
        }
        if (*(long *)(param_1 + 0x58) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0x58),param_1);
        }
        if (*(long *)(param_1 + 0x60) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0x60),param_1);
        }
        if (*(long *)(param_1 + 0x188) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0x188),param_1);
        }
        if (*(long *)(param_1 + 0x1d0) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0x1d0),param_1);
        }
        if (*(long *)(param_1 + 0x1d8) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0x1d8),param_1);
        }
        if (*(long *)(param_1 + 0x1e0) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0x1e0),param_1);
        }
        if (*(long *)(param_1 + 0x1e8) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0x1e8),param_1);
        }
        if (*(long *)(param_1 + 0x118) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0x118),param_1);
        }
        if (*(long *)(param_1 + 0x160) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0x160),param_1);
        }
        if (*(long *)(param_1 + 0x168) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0x168),param_1);
        }
        if (*(long *)(param_1 + 0x170) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0x170),param_1);
        }
        if (*(long *)(param_1 + 0x178) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0x178),param_1);
        }
        if (*(long *)(param_1 + 0xcc78) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0xcc78),param_1);
        }
        if (*(long *)(param_1 + 0xcc90) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0xcc90),param_1);
        }
        if (*(long *)(param_1 + 0xd098) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0xd098),param_1);
        }
        if (*(long *)(param_1 + 0xd0b8) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0xd0b8),param_1);
        }
        if (*(long *)(param_1 + 0xd0d0) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0xd0d0),param_1);
        }
        if (*(long *)(param_1 + 0xd100) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0xd100),param_1);
        }
        if (*(long *)(param_1 + 0xd110) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0xd110),param_1);
        }
        if (*(long *)(param_1 + 0xd0f0) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0xd0f0),param_1);
        }
        if (*(long *)(param_1 + 0xd138) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0xd138),param_1);
        }
        if (*(long *)(param_1 + 0xd148) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0xd148),param_1);
        }
        if (*(long *)(param_1 + 0xd158) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0xd158),param_1);
        }
        if (*(long *)(param_1 + 0xd188) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0xd188),param_1);
        }
        if (*(long *)(param_1 + 0xd198) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0xd198),param_1);
        }
        if (*(long *)(param_1 + 0xd1c0) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0xd1c0),param_1);
        }
        if (*(long *)(param_1 + 0xd200) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0xd200),param_1);
        }
        if (*(long *)(param_1 + 0xd210) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0xd210),param_1);
        }
        if (*(long *)(param_1 + 0xd228) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0xd228),param_1);
        }
        if (*(long *)(param_1 + 0xd250) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0xd250),param_1);
        }
        if (*(long *)(param_1 + 0xd280) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0xd280),param_1);
        }
        if (*(long *)(param_1 + 0xd3c0) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0xd3c0),param_1);
        }
        if (*(long *)(param_1 + 0xd508) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0xd508),param_1);
        }
        if (*(long *)(param_1 + 0xd398) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0xd398),param_1);
        }
        if (*(long *)(param_1 + 0x4270) != 0) {
          (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x4278),param_1);
        }
        while (lVar5 = FUN_71006ed660(param_1 + 0x1f0), lVar5 != 0) {
          FUN_71006ed680();
          (**(code **)(param_1 + 0x18))(*(undefined8 *)(lVar5 + 0x18),param_1);
          (**(code **)(param_1 + 0x18))(lVar5,param_1);
        }
        if (*(int *)(param_1 + 0x234) != 0) {
          uVar1 = *(undefined4 *)(param_1 + 0x228);
          uVar3 = FUN_710076be70(uVar1,3,0);
          FUN_710076be70(uVar1,4,uVar3 & 0xffffbfff);
        }
        if (*(long *)(param_1 + 0xb0) != 0) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0xb0),param_1);
        }
        if ((*(long *)(param_1 + 0x238) != 0) && ((*(uint *)(param_1 + 0x244) & 1) != 0)) {
          (**(code **)(param_1 + 0x18))(*(long *)(param_1 + 0x238),param_1);
        }
        (**(code **)(param_1 + 0x18))(param_1,param_1);
        return 0;
      }
    }
  } while( true );
}



// ===== FUN_71006f17f0 @ 71006f17f0 (size=436) =====

undefined8 FUN_71006f17f0(long param_1,undefined4 param_2,long param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  long lVar7;
  long local_8;
  
  *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) & 0xfffffffe;
  uVar2 = FUN_710081c880(0);
  do {
    if (*(int *)(param_1 + 0xcf6c) == 0) {
      if (param_3 == 0) {
        if (param_4 != 0) {
          uVar3 = 0;
          lVar7 = FUN_710081ce00(param_4);
          goto LAB_71006f1918;
        }
        lVar5 = 0xd;
        lVar7 = 0;
        uVar3 = 0;
        uVar6 = 0;
LAB_71006f1924:
        *(long *)(param_1 + 0xd080) = lVar5;
        *(undefined1 *)(param_1 + 0xcf70) = 1;
        local_8 = param_1 + 0xcf71;
        FUN_71006ed230(&local_8,param_2);
        FUN_71006ed260(&local_8,param_3,uVar3);
        FUN_71006ed230(&local_8,uVar6);
        *(undefined4 *)(param_1 + 0xcf6c) = 2;
        goto LAB_71006f18c0;
      }
      lVar7 = 0;
      uVar3 = FUN_710081ce00(param_3);
      if (param_4 != 0) {
        lVar7 = FUN_710081ce00(param_4);
      }
      if (uVar3 < 0x101) {
LAB_71006f1918:
        uVar6 = (undefined4)lVar7;
        lVar5 = lVar7 + uVar3 + 0xd;
        goto LAB_71006f1924;
      }
      uVar4 = FUN_71006ed140(param_1,0xffffffde,"too long description");
      if ((int)uVar4 != -0x25) {
        return uVar4;
      }
    }
    else {
      lVar7 = 0;
LAB_71006f18c0:
      iVar1 = FUN_71006f87d0(param_1,param_1 + 0xcf70,*(undefined8 *)(param_1 + 0xd080),param_4,
                             lVar7);
      if (iVar1 != -0x25) {
        *(undefined4 *)(param_1 + 0xcf6c) = 0;
        return 0;
      }
    }
    if (*(int *)(param_1 + 0x94) == 0) {
      return 0xffffffdb;
    }
    uVar4 = FUN_71006f0950(param_1,uVar2);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
  } while( true );
}



// ===== FUN_71006f19b0 @ 71006f19b0 (size=28) =====

void FUN_71006f19b0(long *param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = (param_2 & 0xff00ff00ff00ff00) >> 8 | (param_2 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  *(ulong *)*param_1 = uVar1 >> 0x20 | uVar1 << 0x20;
  *param_1 = *param_1 + 8;
  return;
}



// ===== FUN_71006f19d0 @ 71006f19d0 (size=88) =====

void FUN_71006f19d0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  
  lVar1 = *param_4;
  if (*(long *)(lVar1 + 0x50) != 0) {
    (**(code **)(param_1 + 0x18))(*(long *)(lVar1 + 0x50),param_1);
  }
  if (*(long *)(lVar1 + 0xb8) != 0) {
    (**(code **)(param_1 + 0x18))(*(long *)(lVar1 + 0xb8),param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0071006f1a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x18))(lVar1,param_1);
  return;
}



// ===== FUN_71006f1a30 @ 71006f1a30 (size=192) =====

undefined8
FUN_71006f1a30(long *param_1,char param_2,int param_3,undefined8 *param_4,undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*param_1 + 0x60);
  lVar1 = FUN_71006ed660(param_1 + 2);
  while( true ) {
    if (lVar1 == 0) {
      return 0xffffffff;
    }
    if ((**(char **)(lVar1 + 0x20) == param_2) &&
       ((param_2 == '\x02' || (*(int *)(lVar1 + 0x18) == param_3)))) break;
    lVar1 = FUN_71006ed670(lVar1);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *param_4 = *(char **)(lVar1 + 0x20);
  *param_5 = uVar2;
  FUN_71006ed680(lVar1);
  (**(code **)(lVar3 + 0x18))(lVar1,lVar3);
  return 0;
}



// ===== FUN_71006f1af0 @ 71006f1af0 (size=224) =====

long FUN_71006f1af0(long param_1,ulong *param_2)

{
  uint uVar1;
  long local_8;
  
  local_8 = param_1;
  if (param_2 == (ulong *)0x0) {
    FUN_71006ed220(param_1,0);
    return 4;
  }
  FUN_71006ed230(&local_8,(uint)*param_2 & 0xf);
  uVar1 = (uint)*param_2;
  if ((*param_2 & 1) != 0) {
    FUN_71006f19b0(&local_8,param_2[1]);
    uVar1 = (uint)*param_2;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    FUN_71006ed230(&local_8,(int)param_2[2]);
    FUN_71006ed230(&local_8,(int)param_2[3]);
    uVar1 = (uint)*param_2;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    FUN_71006ed230(&local_8,(int)param_2[4]);
    uVar1 = (uint)*param_2;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    FUN_71006ed230(&local_8,(int)param_2[5]);
    FUN_71006ed230(&local_8,(int)param_2[6]);
  }
  return local_8 - param_1;
}



// ===== FUN_71006f1bd0 @ 71006f1bd0 (size=260) =====

int FUN_71006f1bd0(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  uint local_24;
  uint local_20;
  uint local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  local_24 = 0;
  local_18 = param_2;
  uStack_10 = param_2;
  local_8 = param_3;
  iVar1 = FUN_71006ed7a0(&local_18,&local_24);
  if (iVar1 == 0) {
    *param_1 = (ulong)local_24;
    uVar2 = local_24;
    if ((local_24 & 1) != 0) {
      iVar1 = FUN_71006ed800(&local_18,param_1 + 1);
      if (iVar1 != 0) goto LAB_71006f1ccc;
      uVar2 = (uint)*param_1;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      local_20 = 0;
      local_1c = 0;
      iVar1 = FUN_71006ed7a0(&local_18,&local_20);
      if ((iVar1 != 0) || (iVar1 = FUN_71006ed7a0(&local_18,&local_1c), iVar1 != 0))
      goto LAB_71006f1ccc;
      param_1[2] = (ulong)local_20;
      param_1[3] = (ulong)local_1c;
      uVar2 = (uint)*param_1;
    }
    if ((uVar2 >> 2 & 1) != 0) {
      iVar1 = FUN_71006ed7a0(&local_18,&local_1c);
      if (iVar1 != 0) goto LAB_71006f1ccc;
      param_1[4] = (ulong)local_1c;
      uVar2 = (uint)*param_1;
    }
    if ((uVar2 >> 3 & 1) != 0) {
      iVar1 = FUN_71006ed7a0(&local_18,&local_20);
      if ((iVar1 != 0) || (iVar1 = FUN_71006ed7a0(&local_18,&local_1c), iVar1 != 0))
      goto LAB_71006f1ccc;
      param_1[5] = (ulong)local_20;
      param_1[6] = (ulong)local_1c;
    }
    iVar1 = (int)uStack_10 - (int)local_18;
  }
  else {
LAB_71006f1ccc:
    iVar1 = -0x26;
  }
  return iVar1;
}



// ===== FUN_71006f1ce0 @ 71006f1ce0 (size=336) =====

void FUN_71006f1ce0(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_10;
  undefined1 auStack_8 [8];
  
  plVar7 = *(long **)(param_1 + 0x18);
  lVar6 = *(long *)(*plVar7 + 0x60);
  lVar3 = FUN_71006ed660(param_1 + 0x178);
  if (lVar3 != 0) {
    do {
      while( true ) {
        lVar4 = FUN_71006ed670(lVar3);
        iVar2 = FUN_71006f1a30(plVar7,0x65,*(undefined4 *)(lVar3 + 0x38),&local_10,auStack_8);
        if ((iVar2 != 0) &&
           (iVar2 = FUN_71006f1a30(plVar7,0x67,*(undefined4 *)(lVar3 + 0x38),&local_10,auStack_8),
           iVar2 != 0)) break;
        (**(code **)(lVar6 + 0x18))(local_10,lVar6);
LAB_71006f1d3c:
        FUN_71006ed680(lVar3);
        (**(code **)(lVar6 + 0x18))(lVar3,lVar6);
        lVar3 = lVar4;
        if (lVar4 == 0) {
          return;
        }
      }
      if (*(long *)(lVar3 + 0x28) == 0) goto LAB_71006f1d3c;
      uVar1 = *(undefined4 *)(lVar3 + 0x38);
      lVar8 = *(long *)(*plVar7 + 0x60);
      lVar5 = (**(code **)(lVar8 + 8))(0x20,lVar8);
      if (lVar5 == 0) {
        FUN_71006ed140(lVar8,0xfffffffa,"malloc fail for zombie request  ID");
        goto LAB_71006f1d3c;
      }
      *(undefined4 *)(lVar5 + 0x18) = uVar1;
      FUN_71006ed630(plVar7 + 4,lVar5);
      FUN_71006ed680(lVar3);
      (**(code **)(lVar6 + 0x18))(lVar3,lVar6);
      lVar3 = lVar4;
    } while (lVar4 != 0);
  }
  return;
}



// ===== FUN_71006f1e30 @ 71006f1e30 (size=964) =====

ulong FUN_71006f1e30(long *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  
  lVar8 = *param_1;
  lVar10 = *(long *)(lVar8 + 0x60);
  if ((int)param_1[0x13] == 3) {
    *(undefined4 *)(param_1 + 0x13) = 0;
    pbVar9 = (byte *)param_1[10];
LAB_71006f1f58:
    uVar5 = FUN_71006e6be0(lVar8,0,0);
    uVar7 = (ulong)*(uint *)(param_1 + 0xb);
    if (uVar5 < uVar7) {
      uVar2 = FUN_71006e5820(lVar8,*(uint *)(param_1 + 0xb) << 1,1,0);
      uVar5 = (ulong)uVar2;
      if (uVar2 == 0xffffffdb) {
        *(undefined4 *)(param_1 + 0x13) = 3;
        goto LAB_71006f1ec8;
      }
      uVar7 = (ulong)*(uint *)(param_1 + 0xb);
      *(undefined4 *)(param_1 + 0x13) = 0;
    }
  }
  else {
    if ((int)param_1[0x13] != 4) {
LAB_71006f1ee0:
      uVar5 = FUN_71006e5bf0(lVar8,0,(long)param_1 + param_1[9] + 0x44,4 - param_1[9]);
      if (uVar5 != 0xffffffffffffffdb) {
        if ((long)uVar5 < 0) {
          uVar5 = uVar5 & 0xffffffff;
          pcVar6 = "channel read";
          goto LAB_71006f20bc;
        }
        lVar4 = param_1[9];
        param_1[9] = uVar5 + lVar4;
        if (uVar5 + lVar4 == 4) {
          uVar2 = FUN_71006ed200((long)param_1 + 0x44);
          *(uint *)(param_1 + 0xb) = uVar2;
          if (0x40000 < uVar2) {
            FUN_71006e5b50(lVar8,0);
            pcVar6 = "SFTP packet too large";
            param_1[9] = 0;
            uVar5 = 0xffffffe7;
LAB_71006f20bc:
            uVar5 = FUN_71006ed140(lVar10,uVar5,pcVar6);
            return uVar5;
          }
          if (uVar2 == 0) {
            pcVar6 = "Unable to allocate empty SFTP packet";
            uVar5 = 0xfffffffa;
            goto LAB_71006f20bc;
          }
          pbVar9 = (byte *)(**(code **)(lVar10 + 8))(uVar2,lVar10);
          if (pbVar9 == (byte *)0x0) {
            pcVar6 = "Unable to allocate SFTP packet";
            uVar5 = 0xfffffffa;
            goto LAB_71006f20bc;
          }
          param_1[9] = 0;
          param_1[10] = (long)pbVar9;
          param_1[0xc] = 0;
          goto LAB_71006f1f58;
        }
      }
      uVar5 = 0xffffffdb;
      goto LAB_71006f1ec8;
    }
    *(undefined4 *)(param_1 + 0x13) = 0;
    pbVar9 = (byte *)param_1[10];
    if (pbVar9 == (byte *)0x0) goto LAB_71006f1ee0;
    uVar7 = (ulong)*(uint *)(param_1 + 0xb);
  }
  uVar5 = param_1[0xc];
  if (uVar5 < uVar7) {
    do {
      uVar5 = FUN_71006e5bf0(lVar8,0,pbVar9 + uVar5,uVar7 - uVar5);
      if (uVar5 == 0xffffffffffffffdb) {
        *(undefined4 *)(param_1 + 0x13) = 4;
        uVar5 = 0xffffffffffffffdb;
        goto LAB_71006f1ec8;
      }
      if ((long)uVar5 < 0) {
        (**(code **)(lVar10 + 0x18))(pbVar9,lVar10);
        uVar5 = uVar5 & 0xffffffff;
        param_1[10] = 0;
        pcVar6 = "Error waiting for SFTP packet";
        goto LAB_71006f20bc;
      }
      uVar7 = (ulong)*(uint *)(param_1 + 0xb);
      uVar5 = uVar5 + param_1[0xc];
      param_1[0xc] = uVar5;
    } while (uVar5 < uVar7);
  }
  lVar8 = *(long *)(*param_1 + 0x60);
  param_1[10] = 0;
  bVar1 = *pbVar9;
  uVar5 = (ulong)bVar1;
  if (uVar7 < 5) {
    uVar7 = 0xffffffd7;
    goto LAB_71006f2008;
  }
  if (bVar1 < 0x6a) {
    if ((100 < bVar1) || ((byte)(bVar1 - 1) < 0x14)) goto LAB_71006f2048;
LAB_71006f1fec:
    uVar2 = FUN_71006ed140(lVar8,0xffffffe1,"Out of sync with the world");
  }
  else {
    if (1 < (byte)(bVar1 + 0x38)) goto LAB_71006f1fec;
LAB_71006f2048:
    iVar3 = FUN_71006ed200(pbVar9 + 1);
    if ((*pbVar9 & 0xfd) == 0x65) {
      lVar4 = FUN_71006ed660(param_1 + 4);
      while (lVar4 != 0) {
        if (iVar3 == *(int *)(lVar4 + 0x18)) {
          (**(code **)(lVar8 + 0x18))(pbVar9,lVar8);
          lVar10 = *(long *)(*param_1 + 0x60);
          lVar8 = FUN_71006ed660(param_1 + 4);
          goto joined_r0x0071006f2164;
        }
        lVar4 = FUN_71006ed670();
      }
    }
    lVar4 = (**(code **)(lVar8 + 8))(0x30,lVar8);
    if (lVar4 != 0) {
      *(int *)(lVar4 + 0x18) = iVar3;
      *(byte **)(lVar4 + 0x20) = pbVar9;
      *(ulong *)(lVar4 + 0x28) = uVar7;
      FUN_71006ed630(param_1 + 2);
      goto LAB_71006f1ec8;
    }
    uVar2 = FUN_71006ed140(lVar8,0xfffffffa,"Unable to allocate datablock for SFTP packet");
  }
  uVar7 = (ulong)uVar2;
  if (uVar2 != 0) {
LAB_71006f2008:
    (**(code **)(lVar10 + 0x18))(pbVar9,lVar10);
    return uVar7;
  }
LAB_71006f1ec8:
  return uVar5 & 0xffffffff;
joined_r0x0071006f2164:
  if (lVar8 == 0) goto LAB_71006f1ec8;
  if (iVar3 == *(int *)(lVar8 + 0x18)) {
    FUN_71006ed680();
    (**(code **)(lVar10 + 0x18))(lVar8,lVar10);
    goto LAB_71006f1ec8;
  }
  lVar8 = FUN_71006ed670();
  goto joined_r0x0071006f2164;
}



// ===== FUN_71006f2200 @ 71006f2200 (size=196) =====

int FUN_71006f2200(long *param_1,undefined1 param_2,ulong param_3,undefined8 param_4,ulong *param_5,
                  ulong param_6)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*param_1 + 0x60);
  uVar2 = param_3;
  while( true ) {
    iVar1 = FUN_71006f1a30(param_1,param_2,uVar2,param_4,param_5);
    if (iVar1 == 0) {
      if (*param_5 < param_6) {
        return -0x26;
      }
      return 0;
    }
    if (*(int *)(lVar3 + 0x22c) != 0) break;
    iVar1 = FUN_71006f1e30(param_1);
    uVar2 = param_3 & 0xffffffff;
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  return -0xd;
}



// ===== FUN_71006f22d0 @ 71006f22d0 (size=288) =====

int FUN_71006f22d0(long *param_1,undefined1 *param_2,undefined4 param_3,undefined8 param_4,
                  ulong *param_5,ulong param_6)

{
  int iVar1;
  long lVar2;
  
  if (param_1[0xd] == 0) {
    lVar2 = FUN_710081c880();
    param_1[0xd] = lVar2;
  }
  while (*(int *)(*(long *)(*param_1 + 0x60) + 0x22c) == 0) {
    iVar1 = FUN_71006f1a30(param_1,*param_2,param_3,param_4,param_5);
    if ((iVar1 == 0) ||
       (iVar1 = FUN_71006f1a30(param_1,param_2[1],param_3,param_4,param_5), iVar1 == 0)) {
      param_1[0xd] = 0;
      if (param_6 <= *param_5) {
        return 0;
      }
      return -0x26;
    }
    iVar1 = FUN_71006f1e30(param_1);
    if (iVar1 < 0 && iVar1 != -0x25) goto LAB_71006f23dc;
    if (iVar1 < 1) {
      lVar2 = FUN_710081c880(0);
      if (0x3b < lVar2 - param_1[0xd]) {
        param_1[0xd] = 0;
        return -9;
      }
      if (iVar1 == -0x25) {
        return -0x25;
      }
    }
  }
  iVar1 = -0xd;
LAB_71006f23dc:
  param_1[0xd] = 0;
  return iVar1;
}



