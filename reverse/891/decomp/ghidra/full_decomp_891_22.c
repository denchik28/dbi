// ===== FUN_71007f84a0 @ 71007f84a0 (size=268) =====

void FUN_71007f84a0(ulong *param_1,undefined8 *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  int *local_20;
  int *local_18;
  int *local_10;
  int **ppiStack_8;
  
  *param_1 = 0;
  piVar5 = (int *)*param_2;
  if ((piVar5 < (int *)0x4) || (*(int *)((ulong)piVar5 & 0xfffffffffffffffc) == 0)) {
    *param_1 = (ulong)piVar5 & 3;
  }
  else {
    iVar3 = *piVar5;
    local_20 = (int *)FUN_71007af5c0((long)iVar3 * 0x30 + 8);
    local_20[0] = 0;
    local_20[1] = 0;
    piVar5 = piVar5 + 2;
    local_20[1] = iVar3;
    ppiStack_8 = &local_18;
    piVar1 = local_20 + 2;
    piVar2 = piVar5 + (long)iVar3 * 0xc;
    local_10 = piVar1;
    for (; local_18 = piVar1, piVar5 != piVar2; piVar5 = piVar5 + 0xc) {
      *(int **)piVar1 = piVar1 + 4;
      FUN_710004f860(piVar1,*(undefined8 *)piVar5,*(undefined8 *)(piVar5 + 2));
      FUN_71007f84a0(piVar1 + 8,piVar5 + 8);
      *(undefined8 *)(piVar1 + 10) = *(undefined8 *)(piVar5 + 10);
      piVar1 = local_18 + 0xc;
    }
    *local_20 = iVar3;
    uVar4 = *param_1;
    *param_1 = (ulong)local_20;
    local_20 = (int *)0x0;
    if ((uVar4 != 0) && (FUN_71007f5e80(param_1), local_20 != (int *)0x0)) {
      FUN_71007f5e80(&local_20);
    }
  }
  return;
}



// ===== FUN_71007f8600 @ 71007f8600 (size=1012) =====

ulong * FUN_71007f8600(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint *local_20;
  uint *local_18;
  uint *local_10;
  uint **ppuStack_8;
  
  uVar5 = *param_1;
  puVar9 = (uint *)*param_2;
  puVar13 = (uint *)(uVar5 & 0xfffffffffffffffc);
  if ((puVar9 < (uint *)0x4) || (*(int *)((ulong)puVar9 & 0xfffffffffffffffc) == 0)) {
    if (uVar5 < 4) {
      puVar14 = (uint *)0x0;
    }
    else {
      uVar11 = *puVar13;
      puVar14 = puVar13;
      if (0 < (int)uVar11) {
        puVar9 = puVar13 + 2;
        do {
          if (*(long *)(puVar9 + 8) != 0) {
            FUN_71007f5e80(puVar9 + 8);
          }
          if (*(uint **)puVar9 != puVar9 + 4) {
            thunk_FUN_710081c200(*(uint **)puVar9,*(long *)(puVar9 + 4) + 1);
          }
          puVar9 = puVar9 + 0xc;
        } while (puVar9 != puVar13 + (ulong)(uVar11 - 1) * 0xc + 0xe);
        puVar9 = (uint *)*param_2;
        puVar14 = (uint *)(*param_1 & 0xfffffffffffffffc);
      }
      *puVar13 = 0;
    }
    *param_1 = (ulong)puVar9 & 3 | (ulong)puVar14;
    return param_1;
  }
  puVar14 = puVar9 + 2;
  uVar11 = *puVar9;
  if ((uVar5 < 4) || ((int)puVar13[1] < (int)uVar11)) {
    local_20 = (uint *)FUN_71007af5c0((long)(int)uVar11 * 0x30 + 8);
    local_20[0] = 0;
    local_20[1] = 0;
    puVar9 = local_20 + 2;
    local_20[1] = uVar11;
    ppuStack_8 = &local_18;
    puVar13 = puVar14 + (long)(int)uVar11 * 0xc;
    local_10 = puVar9;
    for (; local_18 = puVar9, puVar13 != puVar14; puVar14 = puVar14 + 0xc) {
      *(uint **)puVar9 = puVar9 + 4;
      FUN_710004f860(puVar9,*(undefined8 *)puVar14,*(undefined8 *)(puVar14 + 2));
      FUN_71007f84a0(puVar9 + 8,puVar14 + 8);
      *(undefined8 *)(puVar9 + 10) = *(undefined8 *)(puVar14 + 10);
      puVar9 = local_18 + 0xc;
    }
    uVar5 = *param_1;
    *local_20 = uVar11;
    *param_1 = (ulong)local_20;
    local_20 = (uint *)0x0;
    if (uVar5 == 0) {
      return param_1;
    }
    FUN_71007f5e80(param_1);
    if (local_20 == (uint *)0x0) {
      return param_1;
    }
    FUN_71007f5e80(&local_20);
    return param_1;
  }
  puVar10 = puVar13 + 2;
  uVar3 = *puVar13;
  uVar1 = uVar3;
  if ((int)uVar11 < (int)uVar3) {
    uVar1 = uVar11;
  }
  if ((int)uVar1 < 1) {
    if ((int)uVar3 < (int)uVar11) goto LAB_71007f8874;
    if ((int)uVar3 <= (int)uVar11) goto LAB_71007f8748;
LAB_71007f8950:
    lVar8 = (long)(int)uVar11;
    lVar4 = (long)(int)uVar3;
    if (lVar8 * 0x30 + lVar4 * -0x30 != 0) {
      puVar9 = puVar13 + lVar8 * 0xc + 2;
      do {
        if (*(long *)(puVar9 + 8) != 0) {
          FUN_71007f5e80(puVar9 + 8);
        }
        if (*(uint **)puVar9 != puVar9 + 4) {
          thunk_FUN_710081c200(*(uint **)puVar9,*(long *)(puVar9 + 4) + 1);
        }
        puVar9 = puVar9 + 0xc;
      } while (puVar13 + lVar4 * 0xc + 2 != puVar9);
      uVar3 = *puVar13;
    }
    uVar11 = uVar3 + (int)(lVar4 * 0x30 + lVar8 * -0x30 >> 4) * 0x55555555;
LAB_71007f89d0:
    *puVar13 = uVar11;
    if (0 < (int)uVar1) goto LAB_71007f8704;
  }
  else {
    puVar12 = puVar10;
    do {
      puVar15 = puVar12 + 0xc;
      FUN_71007e25c0(puVar12,*(undefined8 *)((long)puVar9 + (8 - (long)puVar13) + (long)puVar12));
      puVar12 = puVar15;
    } while (puVar15 != puVar10 + (ulong)uVar1 * 0xc);
    if ((int)uVar3 < (int)uVar11) {
LAB_71007f8874:
      puVar9 = puVar9 + (long)(int)uVar3 * 0xc + 2;
      puVar12 = puVar10 + (long)(int)uVar3 * 0xc;
      puVar15 = puVar9 + (ulong)(uVar11 - uVar3) * 0xc;
      ppuStack_8 = &local_20;
      local_10 = puVar12;
      do {
        puVar6 = puVar12 + 4;
        *(uint **)puVar12 = puVar6;
        puVar2 = *(undefined1 **)puVar9;
        local_18 = *(uint **)(puVar9 + 2);
        local_20 = puVar12;
        if (local_18 < (uint *)0x10) {
          lVar8 = (long)local_18 + 1;
          if (local_18 == (uint *)0x0) goto LAB_71007f8938;
LAB_71007f88ac:
          FUN_710080f900(puVar6,puVar2,lVar8);
          puVar7 = local_18;
        }
        else {
          puVar6 = (uint *)FUN_71007e2140(puVar12,&local_18,0);
          *(uint **)puVar12 = puVar6;
          *(uint **)(puVar12 + 4) = local_18;
          lVar8 = (long)local_18 + 1;
          if (local_18 == (uint *)0x0) {
LAB_71007f8938:
            *(undefined1 *)puVar6 = *puVar2;
            puVar7 = local_18;
          }
          else {
            puVar7 = (uint *)0xffffffffffffffff;
            if (lVar8 != 0) goto LAB_71007f88ac;
          }
        }
        *(uint **)(puVar12 + 2) = puVar7;
        FUN_71007f84a0(puVar12 + 8,puVar9 + 8);
        *(undefined8 *)(puVar12 + 10) = *(undefined8 *)(puVar9 + 10);
        puVar9 = puVar9 + 0xc;
        puVar12 = local_20 + 0xc;
        local_20 = puVar12;
      } while (puVar15 != puVar9);
      goto LAB_71007f89d0;
    }
    if ((int)uVar11 < (int)uVar3) {
      uVar3 = *puVar13;
      goto LAB_71007f8950;
    }
LAB_71007f8704:
    puVar9 = puVar10 + (ulong)(uVar1 - 1) * 0xc;
    while( true ) {
      FUN_71007f8a60(puVar10,puVar14);
      *(undefined8 *)(puVar10 + 10) = *(undefined8 *)(puVar14 + 10);
      if (puVar9 == puVar10) break;
      puVar10 = puVar10 + 0xc;
      puVar14 = puVar14 + 0xc;
    }
  }
  puVar13 = (uint *)(*param_1 & 0xfffffffffffffffc);
LAB_71007f8748:
  *param_1 = (ulong)puVar13;
  return param_1;
}



// ===== FUN_71007f8a60 @ 71007f8a60 (size=76) =====

long FUN_71007f8a60(long param_1,long param_2)

{
  if (param_2 != param_1) {
    FUN_71007e25c0(param_1,*(undefined8 *)(param_2 + 8));
    FUN_71007f8600(param_1 + 0x20,param_2 + 0x20);
    FUN_71007e2260(param_1,param_2);
  }
  return param_1;
}



// ===== FUN_71007f8ac0 @ 71007f8ac0 (size=912) =====

long * FUN_71007f8ac0(long *param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  undefined *puVar12;
  int *piVar13;
  
  uVar2 = FUN_71007f61a0(param_2);
  if (((uVar2 & 1) != 0) || (param_1[1] == 0)) {
    plVar3 = (long *)FUN_71007f8a60(param_1,param_2);
    return plVar3;
  }
  uVar2 = FUN_71007f6aa0(param_1);
  lVar9 = param_2[1];
  if ((uVar2 & 1) == 0) {
    if (lVar9 == 0) {
      return param_1;
    }
    puVar12 = (undefined *)0x0;
    uVar2 = 0;
    lVar4 = param_1[1];
    lVar8 = lVar4;
  }
  else {
    uVar2 = 1;
    lVar8 = param_1[1];
    puVar12 = &DAT_71009ce502;
    lVar4 = lVar8 + 1;
  }
  uVar5 = param_1[4];
  uVar10 = 0;
  if (3 < uVar5) {
    uVar10 = *(uint *)(uVar5 & 0xfffffffffffffffc);
  }
  if ((uVar5 & 3) != 0) {
    uVar10 = (uint)(lVar8 != 0);
  }
  uVar6 = param_2[4];
  if ((uVar6 & 3) == 0) {
    if (3 < uVar6) {
      uVar10 = uVar10 + *(int *)(uVar6 & 0xfffffffffffffffc);
    }
  }
  else {
    if (uVar2 == 0 && lVar9 == 0) {
      FUN_71007e25c0(param_1,lVar4);
      goto LAB_71007f8ba0;
    }
    uVar10 = uVar10 + 1;
  }
  FUN_71007e25c0(param_1,lVar9 + lVar4);
  if (0x7ffffffffffffffeU - param_1[1] < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::append");
  }
LAB_71007f8ba0:
  FUN_71007e2a60(param_1,puVar12,uVar2);
  lVar9 = param_1[1];
  if (0x7ffffffffffffffeU - lVar9 < (ulong)param_2[1]) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::append",*param_2);
  }
  FUN_71007e2a60(param_1);
  param_1[4] = param_1[4] & 0xfffffffffffffffc;
  FUN_71007f7180(param_1 + 4,uVar10,0);
  piVar13 = (int *)param_1[4];
  lVar4 = (long)*piVar13;
  plVar11 = (long *)(piVar13 + lVar4 * 0xc + 2);
  plVar3 = plVar11;
  if ((uVar5 & 3) == 0) {
    plVar11 = (long *)(piVar13 + lVar4 * 0xc + -10);
    if (plVar11[1] == 0) {
      if (plVar11[4] != 0) {
        FUN_71007f5e80(plVar11 + 4);
      }
      if (*(long **)(piVar13 + lVar4 * 0xc + -10) != plVar11 + 2) {
        thunk_FUN_710081c200(*(long **)(piVar13 + lVar4 * 0xc + -10),plVar11[2] + 1);
      }
      *piVar13 = *piVar13 + -1;
      plVar3 = plVar11;
    }
  }
  else if (lVar8 != 0) {
    lVar7 = *param_1;
    *(long **)(piVar13 + lVar4 * 0xc + 2) = plVar11 + 2;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    FUN_71007f5be0(plVar11,lVar7,lVar7 + lVar8);
    FUN_71007f6080(plVar11 + 4);
    plVar3 = plVar11 + 6;
    plVar11[4] = plVar11[4] & 0xfffffffffffffffcU | (ulong)((uint)uVar5 & 3);
    plVar11[5] = 0;
    *(int *)param_1[4] = *(int *)param_1[4] + 1;
  }
  piVar13 = (int *)param_2[4];
  if (((ulong)piVar13 & 3) == 0) {
    iVar1 = *piVar13;
    if ((long)iVar1 * 0x30 != 0) {
      plVar11 = (long *)(piVar13 + 2);
      do {
        lVar4 = *plVar11;
        lVar8 = plVar11[1];
        lVar7 = plVar11[5];
        *plVar3 = (long)(plVar3 + 2);
        if (lVar4 == 0 && lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_7100003ab8("basic_string: construction from null is not valid");
        }
        FUN_71007f5be0(plVar3,lVar4,lVar4 + lVar8);
        FUN_71007f6080(plVar3 + 4);
        plVar11 = plVar11 + 6;
        plVar3[4] = plVar3[4] | 3;
        plVar3[5] = lVar9 + lVar7;
        *(int *)param_1[4] = *(int *)param_1[4] + 1;
        plVar3 = plVar3 + 6;
      } while ((long *)(piVar13 + (long)iVar1 * 0xc + 2) != plVar11);
    }
  }
  else {
    lVar4 = param_2[1];
    if (lVar4 == 0) {
      if (uVar2 == 0) {
        return param_1;
      }
      lVar8 = *param_2;
      *plVar3 = (long)(plVar3 + 2);
    }
    else {
      lVar8 = *param_2;
      *plVar3 = (long)(plVar3 + 2);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003ab8("basic_string: construction from null is not valid");
      }
    }
    FUN_71007f5be0(plVar3,lVar8,lVar8 + lVar4);
    FUN_71007f6080(plVar3 + 4);
    plVar3[4] = plVar3[4] & 0xfffffffffffffffcU | (ulong)((uint)piVar13 & 3);
    plVar3[5] = lVar9;
    *(int *)param_1[4] = *(int *)param_1[4] + 1;
  }
  return param_1;
}



// ===== FUN_71007f8ee0 @ 71007f8ee0 (size=600) =====

undefined8 * FUN_71007f8ee0(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *local_48;
  long lStack_40;
  undefined1 local_38;
  undefined7 uStack_37;
  long *local_28;
  long local_20;
  long local_18 [2];
  long local_8;
  
  *param_1 = param_1 + 2;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_71007f6080(param_1 + 4);
  uVar1 = FUN_71007f69c0(param_2);
  if ((uVar1 & 1) == 0) {
    FUN_71007f8a60(param_1,param_2);
    return param_1;
  }
  if ((ulong)param_2[4] < 4) {
    return param_1;
  }
  if (*(int *)(param_2[4] & 0xfffffffffffffffc) < 2) {
    return param_1;
  }
  lVar2 = FUN_71007f60c0(param_2 + 4);
  uVar1 = *(long *)(lVar2 + -0x38) + *(long *)(lVar2 + -0x58);
  if ((ulong)param_2[1] < uVar1) {
    uVar1 = param_2[1];
  }
  local_48 = (long *)&local_38;
  FUN_71007f5be0(&local_48,*param_2,*param_2 + uVar1);
  local_20 = lStack_40;
  if (local_48 == (long *)&local_38) {
    local_28 = local_18;
    FUN_710080f900(local_18,&local_38,lStack_40 + 1);
  }
  else {
    local_28 = local_48;
    local_18[0] = CONCAT71(uStack_37,local_38);
  }
  lStack_40 = 0;
  local_38 = 0;
  local_48 = (long *)&local_38;
  FUN_71007f6080();
  FUN_71007f6bc0(&local_28);
  plVar3 = (long *)*param_1;
  if (param_1 + 2 == plVar3) {
    if (local_28 != local_18) {
      *param_1 = local_28;
      param_1[1] = local_20;
      param_1[2] = local_18[0];
      local_28 = local_18;
      goto LAB_71007f902c;
    }
  }
  else if (local_28 != local_18) {
    *param_1 = local_28;
    param_1[1] = local_20;
    lVar2 = param_1[2];
    param_1[2] = local_18[0];
    local_28 = local_18;
    if (plVar3 != (long *)0x0) {
      local_28 = plVar3;
      local_18[0] = lVar2;
    }
    goto LAB_71007f902c;
  }
  if (local_20 != 0) {
    if (local_20 == 1) {
      *(undefined1 *)plVar3 = (undefined1)local_18[0];
    }
    else {
      FUN_710080f900(plVar3,local_18);
    }
    plVar3 = (long *)*param_1;
  }
  param_1[1] = local_20;
  *(undefined1 *)((long)plVar3 + local_20) = 0;
LAB_71007f902c:
  local_20 = 0;
  *(undefined1 *)local_28 = 0;
  lVar2 = param_1[4];
  param_1[4] = local_8;
  local_8 = 0;
  if (lVar2 != 0) {
    FUN_71007f5e80(param_1 + 4);
  }
  local_20 = 0;
  *(undefined1 *)local_28 = 0;
  FUN_71007f6bc0(&local_28);
  if (local_8 != 0) {
    FUN_71007f5e80(&local_8);
  }
  if (local_28 != local_18) {
    thunk_FUN_710081c200(local_28,local_18[0] + 1);
  }
  if (local_48 == (long *)&local_38) {
    return param_1;
  }
  thunk_FUN_710081c200(local_48,CONCAT71(uStack_37,local_38) + 1);
  return param_1;
}



// ===== FUN_71007f9180 @ 71007f9180 (size=2092) =====

long * FUN_71007f9180(long *param_1,undefined8 *param_2)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  int *piVar4;
  ulong *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 *puVar11;
  long *plVar12;
  int *piVar13;
  char *pcVar14;
  undefined8 *puVar15;
  int iVar16;
  int iVar17;
  undefined8 *puVar18;
  ulong local_38;
  ulong local_30;
  ulong *local_28;
  ulong local_20;
  ulong local_18 [2];
  long local_8;
  
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_71007f6080(param_1 + 4);
  if (param_2[1] == 0) {
    return param_1;
  }
  puVar15 = (undefined8 *)0x0;
  uVar7 = (uint)param_2[4];
  if ((param_2[4] & 3) == 0) {
    puVar15 = (undefined8 *)FUN_71007f60a0(param_2 + 4);
    uVar7 = (uint)param_2[4];
    if ((param_2[4] & 3) != 0) goto LAB_71007f91ec;
    puVar18 = (undefined8 *)FUN_71007f60c0(param_2 + 4);
    iVar17 = 0;
    iVar16 = 0;
    uVar7 = (uint)param_2[4] & 3;
  }
  else {
LAB_71007f91ec:
    uVar7 = uVar7 & 3;
    iVar17 = 1;
    puVar18 = (undefined8 *)0x0;
    iVar16 = 0;
  }
LAB_71007f9200:
  puVar11 = puVar15;
  if (uVar7 == 0) goto LAB_71007f9258;
LAB_71007f9204:
  if (iVar17 != iVar16) {
    lVar8 = param_2[1];
    puVar11 = param_2;
    if (lVar8 == 2) goto LAB_71007f9270;
LAB_71007f921c:
    if ((lVar8 == 1) && (*(char *)*puVar11 == '.')) {
      local_20 = 0;
      local_18[0] = local_18[0] & 0xffffffffffffff00;
      local_28 = local_18;
      FUN_71007f6080(&local_8);
      FUN_71007f8ac0(param_1,&local_28);
      if (local_8 != 0) {
        FUN_71007f5e80(&local_8);
      }
      if (local_28 == local_18) goto LAB_71007f9240;
      thunk_FUN_710081c200(local_28,local_18[0] + 1);
      goto LAB_71007f9240;
    }
LAB_71007f9234:
    do {
      FUN_71007f8ac0(param_1,puVar11);
LAB_71007f9240:
      while( true ) {
        uVar9 = param_2[4];
        uVar7 = (uint)uVar9 & 3;
        if ((uVar9 & 3) != 0) {
          iVar16 = 1;
          goto LAB_71007f9200;
        }
        puVar15 = puVar15 + 6;
        puVar11 = puVar15;
        if ((uVar9 & 3) != 0) goto LAB_71007f9204;
LAB_71007f9258:
        if (puVar18 == puVar11) goto LAB_71007f9384;
        lVar8 = puVar11[1];
        puVar15 = puVar11;
        if (lVar8 != 2) goto LAB_71007f921c;
LAB_71007f9270:
        if ((*(char *)*puVar11 != '.') || (((char *)*puVar11)[1] != '.')) goto LAB_71007f9234;
        uVar9 = FUN_71007f6aa0(param_1);
        if ((uVar9 & 1) == 0) break;
        uVar9 = param_1[1];
        if (uVar9 == 0) {
          local_28 = local_18;
          local_20 = 0;
          local_18[0] = (ulong)local_18[0]._1_7_ << 8;
          FUN_71007f6080();
        }
        else if (((uint)param_1[4] & 3) == 3) {
          local_28 = local_18;
          pcVar14 = (char *)*param_1;
          local_38 = uVar9;
          if (uVar9 < 0x10) {
            lVar8 = uVar9 + 1;
LAB_71007f97ac:
            FUN_710080f900(local_28,pcVar14,lVar8);
            uVar9 = local_38;
          }
          else {
            local_28 = (ulong *)FUN_71007e2140(&local_28,&local_38,0);
            local_18[0] = local_38;
            lVar8 = local_38 + 1;
            if (local_38 == 0) {
              *(char *)local_28 = *pcVar14;
              uVar9 = local_38;
            }
            else {
              uVar9 = 0xffffffffffffffff;
              if (lVar8 != 0) goto LAB_71007f97ac;
            }
          }
          local_20 = uVar9;
          FUN_71007f84a0(&local_8,param_1 + 4);
        }
        else {
          if ((param_1[4] & 3U) == 0) {
            if (*(char *)(*param_1 + uVar9 + -1) == '/') {
              local_28 = local_18;
              local_20 = 0;
              local_18[0] = (ulong)local_18[0]._1_7_ << 8;
              FUN_71007f6080();
              goto LAB_71007f9324;
            }
            lVar8 = FUN_71007f60c0(param_1 + 4);
            uVar7 = (uint)param_1[4];
            plVar12 = param_1;
            if ((param_1[4] & 3U) == 0) {
              plVar12 = (long *)(lVar8 + -0x30);
              uVar7 = (uint)*(undefined8 *)(lVar8 + -0x10);
            }
            if ((uVar7 & 3) == 3) {
              local_28 = local_18;
              pcVar14 = (char *)*plVar12;
              local_30 = plVar12[1];
              if (local_30 < 0x10) {
                lVar8 = local_30 + 1;
                if (local_30 == 0) {
LAB_71007f9928:
                  *(char *)local_28 = *pcVar14;
                }
                else {
LAB_71007f989c:
                  FUN_710080f900(local_28,pcVar14,lVar8);
                }
              }
              else {
                local_28 = (ulong *)FUN_71007e2140(&local_28,&local_30,0);
                local_18[0] = local_30;
                lVar8 = local_30 + 1;
                if (local_30 == 0) goto LAB_71007f9928;
                if (lVar8 != 0) goto LAB_71007f989c;
              }
              local_20 = local_30;
              FUN_71007f84a0(&local_8,plVar12 + 4);
              goto LAB_71007f9324;
            }
          }
          local_28 = local_18;
          local_20 = 0;
          local_18[0] = local_18[0] & 0xffffffffffffff00;
          FUN_71007f6080();
        }
LAB_71007f9324:
        bVar3 = false;
        if ((local_20 == 2) && ((char)*local_28 == '.')) {
          bVar3 = *(char *)((long)local_28 + 1) == '.';
        }
        if (local_8 != 0) {
          FUN_71007f5e80(&local_8);
        }
        if (local_28 != local_18) {
          thunk_FUN_710081c200(local_28,local_18[0] + 1);
        }
        if (bVar3) goto LAB_71007f9234;
        FUN_71007f7300(param_1);
      }
      uVar9 = FUN_71007f69c0(param_1);
      if ((uVar9 & 1) == 0) {
        uVar9 = FUN_71007f61a0(param_1);
        if ((uVar9 & 1) == 0) {
          FUN_71007f8ac0(param_1,puVar11);
        }
        goto LAB_71007f9240;
      }
      if (3 < (ulong)param_1[4]) {
        piVar4 = (int *)(param_1[4] & 0xfffffffffffffffc);
        lVar8 = (long)*piVar4;
        piVar13 = piVar4 + lVar8 * 0xc + -0x16;
        uVar9 = FUN_71007f6aa0(piVar13);
        if (((uVar9 & 1) == 0) ||
           (((*(long *)(piVar4 + lVar8 * 0xc + -0x14) == 2 &&
             (**(char **)(piVar4 + lVar8 * 0xc + -0x16) == '.')) &&
            ((*(char **)(piVar4 + lVar8 * 0xc + -0x16))[1] == '.')))) goto LAB_71007f9234;
        if (((ulong)param_1[4] < 4) || (piVar13 != (int *)((param_1[4] & 0xfffffffffffffffcU) + 8)))
        {
          uVar9 = *(ulong *)(piVar4 + lVar8 * 0xc + -0xc);
          if ((ulong)param_1[1] < uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_7100003bf8("%s: __pos (which is %zu) > this->size() (which is %zu)",
                           "basic_string::erase");
          }
          param_1[1] = uVar9;
          *(undefined1 *)(*param_1 + uVar9) = 0;
          piVar10 = (int *)param_1[4];
          lVar1 = (long)*piVar10;
          if (*(long *)(piVar10 + lVar1 * 0xc + -2) != 0) {
            FUN_71007f5e80(piVar10 + lVar1 * 0xc + -2);
          }
          if (*(int **)(piVar10 + lVar1 * 0xc + -10) != piVar10 + lVar1 * 0xc + -6) {
            thunk_FUN_710081c200
                      (*(int **)(piVar10 + lVar1 * 0xc + -10),
                       *(long *)(piVar10 + lVar1 * 0xc + -6) + 1);
          }
          *piVar10 = *piVar10 + -1;
          if (((uint)*(undefined8 *)(piVar4 + lVar8 * 0xc + -0x1a) & 3) == 3) {
            puVar6 = *(undefined1 **)(piVar4 + lVar8 * 0xc + -0x16);
            (piVar4 + lVar8 * 0xc + -0x14)[0] = 0;
            (piVar4 + lVar8 * 0xc + -0x14)[1] = 0;
            *puVar6 = 0;
            FUN_71007f6bc0(piVar13);
          }
          else {
            piVar4 = (int *)param_1[4];
            lVar8 = (long)*piVar4;
            if (*(long *)(piVar4 + lVar8 * 0xc + -2) != 0) {
              FUN_71007f5e80(piVar4 + lVar8 * 0xc + -2);
            }
            if (*(int **)(piVar4 + lVar8 * 0xc + -10) != piVar4 + lVar8 * 0xc + -6) {
              thunk_FUN_710081c200
                        (*(int **)(piVar4 + lVar8 * 0xc + -10),
                         *(long *)(piVar4 + lVar8 * 0xc + -6) + 1);
            }
            *piVar4 = *piVar4 + -1;
          }
        }
        else {
          param_1[1] = 0;
          *(undefined1 *)*param_1 = 0;
          FUN_71007f6bc0(param_1);
        }
        goto LAB_71007f9240;
      }
      uVar9 = FUN_71007f6aa0(0xffffffffffffffa0);
      if ((uVar9 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1000,0x71007f9768);
        (*pcVar2)();
      }
    } while( true );
  }
LAB_71007f9384:
  uVar9 = param_1[4];
  if ((uVar9 < 4) || (*(int *)(uVar9 & 0xfffffffffffffffc) < 2)) {
    if (param_1[1] == 0) {
      FUN_71007f7580(param_1,".");
    }
    return param_1;
  }
  if ((uVar9 & 3) != 0) {
    return param_1;
  }
  lVar8 = FUN_71007f60c0(param_1 + 4);
  if ((param_1[4] & 3U) != 0) {
    return param_1;
  }
  if (*(long *)(lVar8 + -0x28) != 0) {
    return param_1;
  }
  if (*(long *)(lVar8 + -0x58) != 2) {
    return param_1;
  }
  if (**(char **)(lVar8 + -0x60) != '.') {
    return param_1;
  }
  if ((*(char **)(lVar8 + -0x60))[1] != '.') {
    return param_1;
  }
  FUN_71007f8ee0(&local_28,param_1);
  puVar5 = (ulong *)*param_1;
  if ((ulong *)(param_1 + 2) == puVar5) {
    if (local_28 == local_18) goto LAB_71007f9960;
    *param_1 = (long)local_28;
    param_1[1] = local_20;
    param_1[2] = local_18[0];
  }
  else {
    if (local_28 == local_18) {
LAB_71007f9960:
      if (local_20 != 0) {
        if (local_20 == 1) {
          *(char *)puVar5 = (char)local_18[0];
        }
        else {
          FUN_710080f900(puVar5,local_18);
        }
        puVar5 = (ulong *)*param_1;
      }
      param_1[1] = local_20;
      *(char *)((long)puVar5 + local_20) = '\0';
      uVar9 = local_18[0];
      goto LAB_71007f9694;
    }
    *param_1 = (long)local_28;
    param_1[1] = local_20;
    uVar9 = param_1[2];
    param_1[2] = local_18[0];
    local_28 = puVar5;
    if (puVar5 != (ulong *)0x0) goto LAB_71007f9694;
  }
  local_28 = local_18;
  uVar9 = local_18[0];
LAB_71007f9694:
  local_18[0] = uVar9;
  local_20 = 0;
  *(char *)local_28 = '\0';
  lVar8 = param_1[4];
  param_1[4] = local_8;
  local_8 = 0;
  if (lVar8 != 0) {
    FUN_71007f5e80(param_1 + 4);
  }
  local_20 = 0;
  *(char *)local_28 = '\0';
  FUN_71007f6bc0(&local_28);
  FUN_710014cf90(&local_8);
  FUN_71007e21a0(&local_28);
  return param_1;
}



// ===== FUN_71007f9a20 @ 71007f9a20 (size=408) =====

void FUN_71007f9a20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined1 auStack_58 [8];
  undefined1 *local_50;
  undefined8 *puStack_48;
  undefined1 *local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  undefined1 *local_20;
  undefined8 uStack_18;
  undefined1 local_10;
  undefined7 uStack_f;
  
  FUN_71007f5ca0(param_1,param_3,param_4,param_2);
  *param_1 = &PTR_FUN_7100aef3d8;
  uVar2 = FUN_71007b0800(param_1);
  puVar3 = (undefined8 *)FUN_71007af5c0(0x80);
  local_50 = auStack_58;
  puVar1 = puVar3 + 0xc;
  puVar3[1] = 0x100000001;
  *puVar3 = &PTR_LAB_7100aef400;
  puStack_48 = puVar3;
  uVar4 = FUN_710081ce00(uVar2);
  puVar3[2] = puVar3 + 4;
  puVar3[3] = 0;
  *(undefined1 *)(puVar3 + 4) = 0;
  FUN_71007f6080();
  puVar3[7] = puVar3 + 9;
  puVar3[8] = 0;
  *(undefined1 *)(puVar3 + 9) = 0;
  FUN_71007f6080(puVar3 + 0xb);
  local_30 = 0;
  puVar3[0xc] = puVar3 + 0xe;
  puVar3[0xd] = 0;
  *(undefined1 *)(puVar3 + 0xe) = 0;
  uStack_38 = 0;
  uStack_18 = 0;
  local_10 = 0;
  local_40 = &local_30;
  local_20 = &local_10;
  FUN_71007e25c0(puVar1,uVar4 + 0x12);
  FUN_71007e28e0(puVar1,0,puVar3[0xd],"filesystem error: ",0x12);
  if (uVar4 <= 0x7ffffffffffffffe - puVar3[0xd]) {
    FUN_71007e2a60(puVar1,uVar2,uVar4);
    if (local_20 != &local_10) {
      thunk_FUN_710081c200(local_20,CONCAT71(uStack_f,local_10) + 1);
    }
    if (local_40 != &local_30) {
      thunk_FUN_710081c200(local_40,CONCAT71(uStack_2f,local_30) + 1);
    }
    param_1[4] = puVar3 + 2;
    param_1[5] = puVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003b58("basic_string::append");
}



// ===== FUN_71007f9c20 @ 71007f9c20 (size=272) =====

void FUN_71007f9c20(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                   undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_18 [8];
  undefined1 *local_10;
  undefined8 *puStack_8;
  
  FUN_71007f5ca0(param_1,param_4,param_5,param_2);
  *param_1 = &PTR_FUN_7100aef3d8;
  uVar1 = FUN_71007b0800(param_1);
  puVar2 = (undefined8 *)FUN_71007af5c0(0x80);
  local_10 = auStack_18;
  puVar2[1] = 0x100000001;
  *puVar2 = &PTR_LAB_7100aef400;
  puStack_8 = puVar2;
  uVar3 = FUN_710081ce00(uVar1);
  puVar2[2] = puVar2 + 4;
  FUN_710004f860(puVar2 + 2,*param_3,param_3[1]);
  FUN_71007f84a0(puVar2 + 6,param_3 + 4);
  puVar2[7] = puVar2 + 9;
  puVar2[8] = 0;
  *(undefined1 *)(puVar2 + 9) = 0;
  FUN_71007f6080(puVar2 + 0xb);
  FUN_71007f8100(puVar2 + 0xc,uVar3,uVar1,param_3,0);
  param_1[4] = puVar2 + 2;
  param_1[5] = puVar2;
  return;
}



// ===== FUN_71007f9dc0 @ 71007f9dc0 (size=20) =====

void FUN_71007f9dc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aef450;
  FUN_71007ad880();
  return;
}



// ===== FUN_71007f9de0 @ 71007f9de0 (size=32) =====

void FUN_71007f9de0(undefined8 param_1)

{
  FUN_71007f9dc0();
  thunk_FUN_710081c200(param_1,8);
  return;
}



// ===== FUN_71007f9e20 @ 71007f9e20 (size=20) =====

void FUN_71007f9e20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aef490;
  FUN_71007ae160();
  return;
}



// ===== FUN_71007f9e40 @ 71007f9e40 (size=32) =====

void FUN_71007f9e40(undefined8 param_1)

{
  FUN_71007f9e20();
  thunk_FUN_710081c200(param_1,8);
  return;
}



// ===== thunk_FUN_710081c200 @ 71007f9e60 (size=4) =====

void thunk_FUN_710081c200(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_7100816da0(uVar1,param_1);
  return;
}



// ===== thunk_FUN_710081c200 @ 71007f9e80 (size=4) =====

void thunk_FUN_710081c200(void)

{
  FUN_710081c200();
  return;
}



// ===== FUN_71007f9ea0 @ 71007f9ea0 (size=416) =====

long FUN_71007f9ea0(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  long local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  lVar2 = *(long *)(*param_1 + -0x10);
  plVar3 = *(long **)(*param_1 + -8);
  local_18 = 0;
  local_10 = 0;
  local_8 = 0x1000000000;
  lVar1 = (long)param_1 + lVar2;
  if (*(long **)(*(long *)((long)param_1 + lVar2) + -8) == plVar3) {
    if ((-1 < param_4) && (param_4 + lVar2 == 0)) {
      pcVar6 = (char *)plVar3[1];
      pcVar7 = (char *)param_3[1];
      if (pcVar6 == pcVar7) {
        return lVar1;
      }
      if (*pcVar6 != '*') {
        if (*pcVar7 == '*') {
          pcVar7 = pcVar7 + 1;
        }
        iVar4 = FUN_710080aec0(pcVar6,pcVar7);
        if (iVar4 == 0) {
          return lVar1;
        }
      }
    }
    (**(code **)(*plVar3 + 0x38))(plVar3,param_4,6,param_3,lVar1,param_2,param_1,&local_18);
    if (local_18 != 0) {
      if (((uint)local_8 & 6) != 6) {
        if ((local_10._4_4_ & (uint)local_10 & 6) != 6) {
          if ((local_10._4_4_ & 5) == 4) {
            return 0;
          }
          if ((uint)local_8 != 0) {
            return 0;
          }
          if (-1 < param_4) {
            if (param_1 != (long *)(local_18 + param_4)) {
              return 0;
            }
            return local_18;
          }
          if (param_4 == -2) {
            return 0;
          }
          uVar5 = (**(code **)(*param_3 + 0x40))(param_3,param_4,local_18,param_2,param_1);
          if ((uVar5 & 6) != 6) {
            return 0;
          }
          return local_18;
        }
      }
      return local_18;
    }
  }
  return 0;
}



// ===== FUN_71007fa040 @ 71007fa040 (size=20) =====

void FUN_71007fa040(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aef4d0;
  return;
}



// ===== FUN_71007fa060 @ 71007fa060 (size=32) =====

void FUN_71007fa060(undefined8 param_1)

{
  FUN_71007fa040();
  thunk_FUN_710081c200(param_1,0x10);
  return;
}



// ===== FUN_71007fa080 @ 71007fa080 (size=20) =====

void FUN_71007fa080(void)

{
  thunk_FUN_71007af5c0();
  return;
}



// ===== FUN_71007fa0e0 @ 71007fa0e0 (size=20) =====

void FUN_71007fa0e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aef548;
  return;
}



// ===== FUN_71007fa100 @ 71007fa100 (size=32) =====

void FUN_71007fa100(undefined8 param_1)

{
  FUN_71007fa0e0();
  thunk_FUN_710081c200(param_1,0x20);
  return;
}



// ===== FUN_71007fa3c0 @ 71007fa3c0 (size=20) =====

void FUN_71007fa3c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aef5c0;
  FUN_71007ad960();
  return;
}



// ===== FUN_71007fa3e0 @ 71007fa3e0 (size=32) =====

void FUN_71007fa3e0(undefined8 param_1)

{
  FUN_71007fa3c0();
  thunk_FUN_710081c200(param_1,0x28);
  return;
}



// ===== FUN_71007fa400 @ 71007fa400 (size=276) =====

uint FUN_71007fa400(long param_1,long param_2,long *param_3,long param_4,long *param_5)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_3 == param_5) {
    pcVar3 = *(char **)(param_1 + 8);
    pcVar5 = *(char **)(param_4 + 8);
    if (pcVar3 == pcVar5) {
      return 6;
    }
    if (*pcVar3 != '*') {
      if (*pcVar5 == '*') {
        pcVar5 = pcVar5 + 1;
      }
      iVar2 = FUN_710080aec0(pcVar3,pcVar5);
      if (iVar2 == 0) {
        return 6;
      }
    }
  }
  uVar7 = (ulong)*(uint *)(param_1 + 0x14);
  param_1 = param_1 + uVar7 * 0x10;
  do {
    if (uVar7 == 0) {
      return 1;
    }
    uVar4 = *(ulong *)(param_1 + 0x10);
    if (((uint)uVar4 >> 1 & 1) != 0) {
      lVar6 = (long)uVar4 >> 8;
      if ((uVar4 & 1) != 0) {
        if (param_2 == -3) goto LAB_71007fa48c;
        lVar6 = *(long *)(*param_3 + lVar6);
      }
      uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x40))
                        (*(long **)(param_1 + 8),param_2,(long)param_3 + lVar6,param_4,param_5);
      if (3 < (int)uVar1) {
        return (uint)uVar4 & 1 | uVar1;
      }
    }
LAB_71007fa48c:
    param_1 = param_1 + -0x10;
    uVar7 = uVar7 - 1;
  } while( true );
}



// ===== FUN_71007fa520 @ 71007fa520 (size=1652) =====

byte FUN_71007fa520(long param_1,long param_2,uint param_3,long *param_4,long *param_5,long param_6,
                   long *param_7,long *param_8)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  char *pcVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  byte bVar16;
  uint uVar17;
  char *pcVar18;
  ulong uVar19;
  long lVar20;
  long local_18;
  undefined8 local_10;
  ulong local_8;
  
  if ((*(uint *)((long)param_8 + 0x14) >> 4 & 1) != 0) {
    *(undefined4 *)((long)param_8 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  }
  pcVar18 = *(char **)(param_1 + 8);
  if (param_5 == param_7) {
    pcVar11 = *(char **)(param_6 + 8);
    if (pcVar11 == pcVar18) {
LAB_71007fab24:
      *(uint *)((long)param_8 + 0xc) = param_3;
      return 0;
    }
    if (*pcVar18 == '*') {
      if ((char *)param_4[1] != pcVar18) goto LAB_71007fa600;
      goto LAB_71007fa5ac;
    }
    if (*pcVar11 == '*') {
      pcVar11 = pcVar11 + 1;
    }
    iVar6 = FUN_710080aec0(pcVar18,pcVar11);
    if (iVar6 == 0) goto LAB_71007fab24;
    pcVar11 = (char *)param_4[1];
    if (pcVar11 == pcVar18) goto LAB_71007fa5ac;
  }
  else {
    pcVar11 = (char *)param_4[1];
    if (pcVar11 == pcVar18) goto LAB_71007fa5ac;
    if (*pcVar18 == '*') goto LAB_71007fa600;
  }
  if (*pcVar11 == '*') {
    pcVar11 = pcVar11 + 1;
  }
  iVar6 = FUN_710080aec0(pcVar18,pcVar11);
  if (iVar6 != 0) {
LAB_71007fa600:
    uVar15 = (long)param_7 - param_2;
    uVar19 = (ulong)*(uint *)(param_1 + 0x14);
    if (param_2 < 0) {
      uVar15 = 0;
    }
    if (uVar19 == 0) {
      return 0;
    }
    bVar16 = 0;
    bVar2 = true;
    bVar1 = false;
    do {
      lVar20 = param_1 + uVar19 * 0x10;
      do {
        uVar9 = *(ulong *)(lVar20 + 0x10);
        local_18 = 0;
        local_8 = (ulong)*(uint *)((long)param_8 + 0x14) << 0x20;
        lVar12 = (long)uVar9 >> 8;
        local_10 = 0;
        uVar10 = param_3;
        if ((uVar9 & 1) != 0) {
          uVar10 = param_3 | 1;
          lVar12 = *(long *)(*param_5 + lVar12);
        }
        if ((uVar15 == 0) || (uVar15 < (ulong)((long)param_5 + lVar12) != bVar2)) {
          if (((uint)uVar9 >> 1 & 1) == 0) {
            if ((param_2 == -2) && ((*(uint *)((long)param_8 + 0x14) & 3) == 0))
            goto LAB_71007fa77c;
            uVar10 = uVar10 & 0xfffffffd;
          }
          bVar5 = (**(code **)(**(long **)(lVar20 + 8) + 0x38))
                            (*(long **)(lVar20 + 8),param_2,uVar10,param_4,(long)param_5 + lVar12,
                             param_6,param_7,&local_18);
          uVar4 = local_8;
          uVar13 = (uint)local_8;
          uVar9 = local_8 & 0xffffffff;
          uVar10 = *(uint *)((long)param_8 + 0xc) | local_10._4_4_;
          *(uint *)((long)param_8 + 0xc) = uVar10;
          if (((uint)local_8 & 0xfffffffb) == 2) {
            *param_8 = local_18;
            *(uint *)(param_8 + 1) = (uint)local_10;
            *(uint *)(param_8 + 2) = (uint)local_8;
            return bVar5;
          }
          lVar12 = *param_8;
          if ((bVar16 & 1) == 0) {
            if (lVar12 == 0) {
              *param_8 = local_18;
              *(uint *)(param_8 + 1) = (uint)local_10;
              bVar16 = bVar5;
              if ((local_18 != 0 && uVar10 != 0) && ((*(uint *)(param_1 + 0x10) & 1) == 0)) {
                return bVar5;
              }
            }
            else {
LAB_71007fa6f4:
              if (lVar12 == local_18) {
                *(uint *)(param_8 + 1) = *(uint *)(param_8 + 1) | (uint)local_10;
              }
              else if (local_18 != 0 || bVar5 != 0) {
                uVar8 = *(uint *)(param_8 + 2);
                goto joined_r0x0071007fa800;
              }
            }
          }
          else {
            if (lVar12 != 0) goto LAB_71007fa6f4;
            if (local_18 == 0) goto LAB_71007fa774;
            uVar8 = *(uint *)(param_8 + 2);
joined_r0x0071007fa800:
            uVar14 = (ulong)uVar8;
            if (((int)uVar10 < 4) ||
               (((uVar10 & 1) != 0 && ((*(uint *)((long)param_8 + 0x14) >> 1 & 1) != 0)))) {
              if (0 < (int)uVar8) {
                if (0 < (int)(uint)local_8) goto LAB_71007fa730;
                if (uVar8 < 4) {
                  if (param_2 < 0) {
                    if (param_2 != -2) {
LAB_71007faa6c:
                      uVar9 = (**(code **)(*param_4 + 0x40))
                                        (param_4,param_2,local_18,param_6,param_7);
                      uVar9 = uVar9 & 0xffffffff;
                      uVar14 = (ulong)uVar8;
                      goto LAB_71007fa730;
                    }
                  }
                  else {
LAB_71007fa9f0:
                    if (param_7 == (long *)(local_18 + param_2)) {
LAB_71007fa9fc:
                      *param_8 = local_18;
                      *(uint *)(param_8 + 1) = (uint)local_10;
                      *(undefined4 *)(param_8 + 2) = 6;
                      return 0;
                    }
                  }
                  goto LAB_71007fa894;
                }
                if ((uVar8 & 1) == 0) {
LAB_71007fa9c4:
                  if (3 < (uVar8 ^ 1)) {
                    *(uint *)(param_8 + 2) = uVar8;
                    return 0;
                  }
                }
                else {
                  if ((*(uint *)(param_1 + 0x10) >> 1 & 1) != 0) {
                    if (param_2 < 0) {
LAB_71007faa64:
                      uVar8 = (uint)uVar14;
                      if (param_2 != -2) goto LAB_71007faa6c;
                    }
                    else if (param_7 == (long *)(local_18 + param_2)) {
                      if (3 < (uVar8 ^ 6)) goto LAB_71007fa9fc;
                      uVar13 = 6;
                      goto LAB_71007fa884;
                    }
                  }
LAB_71007fa82c:
                  local_8._0_4_ = (uint)uVar14;
                  if (3 < ((uint)local_8 ^ 1)) {
                    uVar17 = (uint)(uVar14 >> 1) & 1 ^ 1;
                    goto LAB_71007fa768;
                  }
                }
                goto LAB_71007fa890;
              }
              if (3 < (int)(uint)local_8) {
                uVar17 = (uint)local_8 & 1;
                if ((local_8 & 1) == 0) {
                  if (3 < ((uint)local_8 ^ 1)) {
                    *param_8 = local_18;
                    *(uint *)(param_8 + 1) = (uint)local_10;
                    *(uint *)(param_8 + 2) = (uint)local_8;
                    return 0;
                  }
                  goto LAB_71007fa894;
                }
                if ((*(uint *)(param_1 + 0x10) >> 1 & 1) == 0) {
                  if (((uint)local_8 ^ 1) < 4) goto LAB_71007fa894;
                  uVar17 = (uint)local_8 >> 1 & 1 ^ 1;
                  goto LAB_71007fa758;
                }
                if (param_2 < 0) {
                  if (param_2 == -2) {
LAB_71007faa24:
                    if (((uint)local_8 ^ 1) < 4) goto LAB_71007fa894;
                  }
                  else {
                    uVar8 = (**(code **)(*param_4 + 0x40))(param_4,param_2,lVar12,param_6,param_7);
                    uVar9 = uVar4 & 0xffffffff;
                    if ((int)(uVar13 ^ uVar8) < 4) goto LAB_71007fa884;
                  }
                  goto LAB_71007fa74c;
                }
                if (param_7 != (long *)(lVar12 + param_2)) goto LAB_71007faa24;
                uVar8 = 6;
                if (3 < ((uint)local_8 ^ 6)) goto LAB_71007fa74c;
                goto LAB_71007fa884;
              }
              if (param_2 < 0) {
                if (param_2 != -2) {
                  uVar9 = (**(code **)(*param_4 + 0x40))(param_4,param_2,lVar12,param_6,param_7);
                  uVar8 = (uint)uVar9;
                  uVar14 = uVar9 & 0xffffffff;
                  if ((int)uVar13 < 1) {
                    if ((int)uVar8 < 4) goto LAB_71007faa6c;
                    if ((uVar9 & 1) != 0) {
                      if ((*(uint *)(param_1 + 0x10) >> 1 & 1) != 0) goto LAB_71007faa64;
                      goto LAB_71007fa82c;
                    }
                    goto LAB_71007fa9c4;
                  }
                  if ((int)(uVar13 ^ uVar8) < 4) goto LAB_71007fa890;
                  goto LAB_71007fa940;
                }
              }
              else {
                if (param_7 == (long *)(lVar12 + param_2)) {
                  uVar14 = 6;
                  if ((int)(uint)local_8 < 1) {
                    *(undefined4 *)(param_8 + 2) = 6;
                    return 0;
                  }
                  goto LAB_71007fa940;
                }
                if ((int)(uint)local_8 < 1) goto LAB_71007fa9f0;
              }
            }
            else {
              if (uVar8 == 0) {
                uVar8 = 1;
              }
              uVar14 = (ulong)uVar8;
              if ((uint)local_8 == 0) {
                local_8._0_4_ = 1;
              }
              uVar9 = (ulong)(uint)local_8;
LAB_71007fa730:
              uVar13 = (uint)uVar9;
              uVar8 = (uint)uVar14;
              if (3 < (int)(uVar13 ^ uVar8)) {
                if ((int)uVar13 < 4) {
LAB_71007fa940:
                  local_8._0_4_ = (uint)uVar14;
                  uVar17 = ((uint)(uVar14 >> 1) & 1 ^ 1) & (uint)local_8 & 1;
                }
                else {
                  uVar17 = uVar13 & 1;
LAB_71007fa74c:
                  local_8._0_4_ = (uint)uVar9;
                  uVar17 = ((uint)(uVar9 >> 1) & 1 ^ 1) & uVar17;
LAB_71007fa758:
                  bVar16 = 0;
                  *param_8 = local_18;
                  *(uint *)(param_8 + 1) = (uint)local_10;
                }
LAB_71007fa768:
                *(uint *)(param_8 + 2) = (uint)local_8;
                if (uVar17 == 0) {
                  return 0;
                }
                uVar10 = *(uint *)((long)param_8 + 0xc);
                goto LAB_71007fa774;
              }
LAB_71007fa884:
              if (3 < (int)(uVar13 & uVar8)) {
                *param_8 = 0;
                *(undefined4 *)(param_8 + 2) = 2;
                return 1;
              }
LAB_71007fa890:
              uVar10 = *(uint *)((long)param_8 + 0xc);
            }
LAB_71007fa894:
            *param_8 = 0;
            *(undefined4 *)(param_8 + 2) = 1;
            bVar16 = 1;
          }
LAB_71007fa774:
          if (uVar10 == 4) {
            return bVar16;
          }
        }
        else {
          bVar1 = true;
        }
LAB_71007fa77c:
        lVar20 = lVar20 + -0x10;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
      bVar3 = !bVar1;
      bVar1 = bVar2 != false && !bVar3;
      if (bVar2 == false || bVar3) {
        return bVar16;
      }
      bVar2 = false;
      uVar19 = (ulong)*(uint *)(param_1 + 0x14);
      if (uVar19 == 0) {
        return bVar16;
      }
    } while( true );
  }
LAB_71007fa5ac:
  *param_8 = (long)param_5;
  *(uint *)(param_8 + 1) = param_3;
  if (param_2 < 0) {
    if (param_2 == -2) {
      *(undefined4 *)(param_8 + 2) = 1;
      return 0;
    }
  }
  else {
    uVar7 = 6;
    if (param_7 != (long *)((long)param_5 + param_2)) {
      uVar7 = 1;
    }
    *(undefined4 *)(param_8 + 2) = uVar7;
  }
  return 0;
}



// ===== FUN_71007faba0 @ 71007faba0 (size=552) =====

bool FUN_71007faba0(long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long local_18;
  uint local_10;
  uint uStack_c;
  long local_8;
  
  uVar4 = FUN_71007ad9a0();
  if ((uVar4 & 1) != 0) {
    return true;
  }
  uVar11 = *(uint *)((long)param_4 + 0xc);
  if ((uVar11 >> 4 & 1) != 0) {
    uVar11 = *(uint *)(param_1 + 0x10);
  }
  uVar4 = (ulong)*(uint *)(param_1 + 0x14);
  lVar10 = param_1 + uVar4 * 0x10;
  if (uVar4 != 0) {
    do {
      uVar5 = *(ulong *)(lVar10 + 0x10);
      local_18 = 0;
      local_10 = 0;
      local_8 = 0;
      if ((((uint)uVar5 >> 1 & 1) != 0) || ((uVar11 & 1) != 0)) {
        lVar9 = 0;
        if (param_3 != (long *)0x0) {
          lVar9 = (long)uVar5 >> 8;
          if ((uVar5 & 1) != 0) {
            lVar9 = *(long *)(*param_3 + lVar9);
          }
          lVar9 = (long)param_3 + lVar9;
        }
        uStack_c = uVar11;
        uVar6 = (**(code **)(**(long **)(lVar10 + 8) + 0x30))
                          (*(long **)(lVar10 + 8),param_2,lVar9,&local_18);
        if ((uVar6 & 1) != 0) {
          if ((uVar5 & 1) != 0 && local_8 == 0x10) {
            local_8 = *(long *)(lVar10 + 8);
          }
          bVar2 = (uVar5 & 2) != 0;
          if ((!bVar2 && local_10 != 3) && (bVar2 || 2 < (int)local_10)) {
            local_10 = local_10 & 0xfffffffd;
          }
          lVar9 = param_4[2];
          if (lVar9 == 0) {
            *param_4 = local_18;
            param_4[1] = CONCAT44(uStack_c,local_10);
            param_4[2] = local_8;
            if ((int)local_10 < 4) {
              return true;
            }
            if ((local_10 >> 1 & 1) == 0) {
              if ((local_10 & 1) == 0) {
                return true;
              }
              uVar1 = *(uint *)(param_1 + 0x10) >> 1;
            }
            else {
              uVar1 = *(uint *)(param_1 + 0x10);
            }
            if ((uVar1 & 1) == 0) {
              return true;
            }
          }
          else {
            if (*param_4 != local_18) {
              *param_4 = 0;
              *(undefined4 *)(param_4 + 1) = 2;
              return true;
            }
            if (*param_4 == 0) {
              if (lVar9 == 0x10 || local_8 == 0x10) goto LAB_71007fad70;
              pcVar7 = *(char **)(local_8 + 8);
              pcVar8 = *(char **)(lVar9 + 8);
              if (pcVar7 != pcVar8) {
                if (*pcVar7 == '*') {
LAB_71007fad70:
                  *(undefined4 *)(param_4 + 1) = 2;
                  return true;
                }
                if (*pcVar8 == '*') {
                  pcVar8 = pcVar8 + 1;
                }
                iVar3 = FUN_710080aec0(pcVar7,pcVar8);
                if (iVar3 != 0) goto LAB_71007fad70;
              }
            }
            *(uint *)(param_4 + 1) = *(uint *)(param_4 + 1) | local_10;
          }
        }
      }
      lVar10 = lVar10 + -0x10;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return (int)param_4[1] != 0;
}



// ===== FUN_71007fade0 @ 71007fade0 (size=112) =====

long FUN_71007fade0(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = FUN_7100809560(0,0);
  lVar2 = FUN_710081ce00();
  lVar3 = FUN_71007fa080(lVar2 + 1,&DAT_71009ccd70);
  if (lVar3 != 0) {
    FUN_710080f900(lVar3,uVar1,lVar2 + 1);
    FUN_7100809560(0,"C");
  }
  return lVar3;
}



// ===== FUN_71007fae60 @ 71007fae60 (size=208) =====

void FUN_71007fae60(char *param_1,float *param_2,undefined4 *param_3)

{
  long lVar1;
  float fVar2;
  char *local_8;
  
  lVar1 = FUN_71007fade0();
  if (lVar1 == 0) {
    *param_3 = 4;
    return;
  }
  fVar2 = (float)FUN_710080ada0(param_1,&local_8);
  *param_2 = fVar2;
  if ((local_8 == param_1) || (*local_8 != '\0')) {
    *param_2 = 0.0;
    *param_3 = 4;
  }
  else {
    if (fVar2 == INFINITY) {
      fVar2 = 3.4028235e+38;
    }
    else {
      if (fVar2 != -INFINITY) goto LAB_71007faee8;
      fVar2 = -3.4028235e+38;
    }
    *param_2 = fVar2;
    *param_3 = 4;
  }
LAB_71007faee8:
  FUN_7100809560(0,lVar1);
  thunk_FUN_710081c200(lVar1);
  return;
}



// ===== FUN_71007faf40 @ 71007faf40 (size=216) =====

void FUN_71007faf40(char *param_1,double *param_2,undefined4 *param_3)

{
  long lVar1;
  double dVar2;
  char *local_8;
  
  lVar1 = FUN_71007fade0();
  if (lVar1 == 0) {
    *param_3 = 4;
    return;
  }
  dVar2 = (double)FUN_710080ad40(param_1,&local_8);
  *param_2 = dVar2;
  if ((local_8 == param_1) || (*local_8 != '\0')) {
    *param_2 = 0.0;
    *param_3 = 4;
  }
  else {
    if (dVar2 == INFINITY) {
      dVar2 = 1.79769313486232e+308;
    }
    else {
      if (dVar2 != -INFINITY) goto LAB_71007fafd0;
      dVar2 = -1.79769313486232e+308;
    }
    *param_2 = dVar2;
    *param_3 = 4;
  }
LAB_71007fafd0:
  FUN_7100809560(0,lVar1);
  thunk_FUN_710081c200(lVar1);
  return;
}



// ===== FUN_71007fb020 @ 71007fb020 (size=264) =====

void FUN_71007fb020(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_71007fade0();
  if (lVar2 == 0) {
    *param_3 = 4;
    return;
  }
  iVar1 = FUN_7100822f40(param_1,&DAT_7100856758,param_2);
  if (iVar1 + 1U < 2) {
    *param_2 = 0;
    param_2[1] = 0;
    *param_3 = 4;
LAB_71007fb074:
    FUN_7100809560(0,lVar2);
    thunk_FUN_710081c200(lVar2);
    return;
  }
  uVar3 = *param_2;
  iVar1 = FUN_7100801000(uVar3,0);
  if (iVar1 == 0) {
    uVar3 = 0x7ffeffffffffffff;
  }
  else {
    iVar1 = FUN_7100801000(uVar3,0);
    if (iVar1 != 0) goto LAB_71007fb074;
    uVar3 = 0xfffeffffffffffff;
  }
  param_2[1] = uVar3;
  *param_2 = 0xffffffffffffffff;
  *param_3 = 4;
  FUN_7100809560(0,lVar2);
  thunk_FUN_710081c200(lVar2);
  return;
}



// ===== FUN_71007fb140 @ 71007fb140 (size=48) =====

void FUN_71007fb140(undefined8 *param_1,char *param_2)

{
  undefined1 *puVar1;
  char *extraout_x1;
  undefined1 *unaff_x29;
  undefined1 *puVar2;
  undefined8 unaff_x30;
  
  *param_1 = 0;
  puVar1 = (undefined1 *)register0x00000008;
  puVar2 = unaff_x29;
  if (*param_2 == 'C') goto LAB_71007fb164;
  do {
    register0x00000008 = (BADSPACEBASE *)(puVar1 + -0x10);
    unaff_x29 = puVar1 + -0x10;
    *(undefined1 **)(puVar1 + -0x10) = puVar2;
    *(undefined8 *)(puVar1 + -8) = unaff_x30;
    unaff_x30 = 0x71007fb164;
    FUN_7100003c04("locale::facet::_S_create_c_locale name not valid");
    param_2 = extraout_x1;
LAB_71007fb164:
    puVar1 = (undefined1 *)register0x00000008;
    puVar2 = unaff_x29;
  } while (param_2[1] != '\0');
  return;
}



// ===== FUN_71007fb180 @ 71007fb180 (size=8) =====

void FUN_71007fb180(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



// ===== FUN_71007fb260 @ 71007fb260 (size=68) =====

void FUN_71007fb260(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aef648;
  FUN_71007fb180(param_1 + 2);
  *param_1 = &DAT_7100aee618;
  FUN_71007afc60(param_1);
  return;
}



// ===== FUN_71007fb2e0 @ 71007fb2e0 (size=40) =====

void FUN_71007fb2e0(undefined8 param_1)

{
  FUN_71007fb260();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007fb320 @ 71007fb320 (size=68) =====

void FUN_71007fb320(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aef6a0;
  FUN_71007fb180(param_1 + 2);
  *param_1 = &DAT_7100aef1a0;
  FUN_71007afc60(param_1);
  return;
}



// ===== FUN_71007fb3a0 @ 71007fb3a0 (size=40) =====

void FUN_71007fb3a0(undefined8 param_1)

{
  FUN_71007fb320();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007fb3e0 @ 71007fb3e0 (size=64) =====

void FUN_71007fb3e0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  *param_1 = &PTR_FUN_7100aef648;
  uVar1 = FUN_71007afd60();
  param_1[2] = uVar1;
  return;
}



// ===== FUN_71007fb460 @ 71007fb460 (size=64) =====

void FUN_71007fb460(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  *param_1 = &PTR_FUN_7100aef6a0;
  uVar1 = FUN_71007afd60();
  param_1[2] = uVar1;
  return;
}



// ===== FUN_71007fb4e0 @ 71007fb4e0 (size=388) =====

undefined4
FUN_71007fb4e0(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
              ulong *param_5,ulong param_6,ulong param_7,ulong *param_8)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_10;
  undefined1 auStack_8 [8];
  
  local_10 = *param_2;
  iVar2 = FUN_7100809520();
  lVar5 = ((long)param_4 - (long)param_3 >> 2) * (long)iVar2;
  if (lVar5 - (param_7 - param_6) == 0 || lVar5 < (long)(param_7 - param_6)) {
    if (param_3 < param_4) {
      do {
        lVar5 = FUN_7100816b20(param_6,*param_3,&local_10);
        if (lVar5 == -1) {
          *param_5 = (ulong)param_3;
          *param_8 = param_6;
          return 2;
        }
        param_3 = param_3 + 1;
        *param_2 = local_10;
        param_6 = param_6 + lVar5;
      } while (param_3 < param_4);
    }
    *param_5 = (ulong)param_3;
    *param_8 = param_6;
    return 0;
  }
  do {
    bVar1 = param_3 < param_4;
    if (!bVar1 || param_7 <= param_6) {
      uVar3 = 0;
LAB_71007fb5a0:
      *param_5 = (ulong)param_3;
      *param_8 = param_6;
      if (bVar1) {
        uVar3 = 1;
      }
      return uVar3;
    }
    uVar4 = FUN_7100816b20(auStack_8,*param_3,&local_10);
    if (uVar4 == 0xffffffffffffffff) {
      bVar1 = false;
      uVar3 = 2;
      goto LAB_71007fb5a0;
    }
    if (param_7 - param_6 < uVar4) {
      bVar1 = false;
      uVar3 = 1;
      goto LAB_71007fb5a0;
    }
    FUN_710080f900(param_6,auStack_8,uVar4);
    param_6 = param_6 + uVar4;
    param_3 = param_3 + 1;
    *param_2 = local_10;
  } while( true );
}



// ===== FUN_71007fb680 @ 71007fb680 (size=240) =====

undefined1
FUN_71007fb680(undefined8 param_1,undefined8 *param_2,ulong param_3,ulong param_4,ulong *param_5,
              undefined4 *param_6,undefined4 *param_7,undefined8 *param_8)

{
  undefined1 uVar1;
  bool bVar2;
  long lVar3;
  undefined8 local_8;
  
  uVar1 = param_3 < param_4;
  local_8 = *param_2;
  if (!(bool)uVar1 || param_7 <= param_6) {
LAB_71007fb734:
    *param_5 = param_3;
    *param_8 = param_6;
    return uVar1;
  }
  while( true ) {
    lVar3 = FUN_7100823240(param_6,param_3,param_4 - param_3,&local_8);
    if (lVar3 == -1) {
      uVar1 = 2;
      goto LAB_71007fb734;
    }
    if (lVar3 == -2) break;
    if (lVar3 == 0) {
      lVar3 = 1;
      *param_6 = 0;
    }
    param_3 = param_3 + lVar3;
    param_6 = param_6 + 1;
    bVar2 = param_3 < param_4;
    *param_2 = local_8;
    if (!bVar2 || param_7 <= param_6) {
LAB_71007fb750:
      *param_5 = param_3;
      *param_8 = param_6;
      return bVar2;
    }
  }
  bVar2 = true;
  goto LAB_71007fb750;
}



// ===== FUN_71007fb780 @ 71007fb780 (size=28) =====

bool FUN_71007fb780(void)

{
  int iVar1;
  
  iVar1 = FUN_7100809520();
  return iVar1 == 1;
}



// ===== FUN_71007fb7c0 @ 71007fb7c0 (size=20) =====

void FUN_71007fb7c0(void)

{
  FUN_7100809520();
  return;
}



// ===== FUN_71007fb800 @ 71007fb800 (size=160) =====

int FUN_71007fb800(undefined8 param_1,undefined8 *param_2,ulong param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  int iVar2;
  undefined8 local_8;
  
  local_8 = *param_2;
  if (param_5 == 0 || param_4 <= param_3) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    do {
      uVar1 = FUN_7100823240(0,param_3,param_4 - param_3,&local_8);
      if (0xfffffffffffffffd < uVar1) {
        return iVar2;
      }
      if (uVar1 == 0) {
        uVar1 = 1;
      }
      *param_2 = local_8;
      param_3 = param_3 + uVar1;
      param_5 = param_5 + -1;
      iVar2 = iVar2 + (int)uVar1;
    } while (param_5 != 0 && param_3 < param_4);
  }
  return iVar2;
}



// ===== FUN_71007fb8a0 @ 71007fb8a0 (size=40) =====

uint FUN_71007fb8a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = thunk_FUN_710080aec0(param_2,param_3);
  return (uint)(iVar1 != 0) | iVar1 >> 0x1e;
}



// ===== FUN_71007fb8e0 @ 71007fb8e0 (size=16) =====

void FUN_71007fb8e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_710080d480(param_2,param_3,param_4);
  return;
}



// ===== FUN_71007fb900 @ 71007fb900 (size=40) =====

uint FUN_71007fb900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = thunk_FUN_710080c900(param_2,param_3);
  return (uint)(iVar1 != 0) | iVar1 >> 0x1e;
}



// ===== FUN_71007fb940 @ 71007fb940 (size=16) =====

void FUN_71007fb940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  thunk_FUN_710081b900(param_2,param_3,param_4);
  return;
}



// ===== FUN_71007fb960 @ 71007fb960 (size=40) =====

uint FUN_71007fb960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = thunk_FUN_710080aec0(param_2,param_3);
  return (uint)(iVar1 != 0) | iVar1 >> 0x1e;
}



// ===== FUN_71007fb9a0 @ 71007fb9a0 (size=16) =====

void FUN_71007fb9a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_710080d480(param_2,param_3,param_4);
  return;
}



// ===== FUN_71007fb9c0 @ 71007fb9c0 (size=40) =====

uint FUN_71007fb9c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = thunk_FUN_710080c900(param_2,param_3);
  return (uint)(iVar1 != 0) | iVar1 >> 0x1e;
}



// ===== FUN_71007fba00 @ 71007fba00 (size=16) =====

void FUN_71007fba00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  thunk_FUN_710081b900(param_2,param_3,param_4);
  return;
}



// ===== FUN_71007fba20 @ 71007fba20 (size=76) =====

void FUN_71007fba20(long param_1)

{
  undefined1 auStack_8 [8];
  
  *(undefined4 *)(param_1 + 0x18) = 0x1002;
  *(undefined8 *)(param_1 + 8) = 6;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_71007e0600(auStack_8);
  FUN_71007affe0(param_1 + 0xd0,auStack_8);
  FUN_71007b0080(auStack_8);
  return;
}



// ===== FUN_71007fba80 @ 71007fba80 (size=176) =====

uint FUN_71007fba80(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 + 0x76c) - (uint)(param_2 < 2);
  iVar1 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  return ((int)(((((iVar1 >> 2) + (param_1 + -0x46) * 0x16d) - iVar2 / 100) -
                ((iVar1 >> 2) % 0x19 >> 0x1f)) + iVar2 / 400 +
                (uint)(ushort)(&DAT_71009ce650)[param_2] + param_3 + -0x1da) % 7 + 7U) % 7;
}



// ===== FUN_71007fbb40 @ 71007fbb40 (size=252) =====

void FUN_71007fbb40(long param_1,undefined1 *param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  *param_2 = 0x25;
  pcVar5 = param_2 + 1;
  if ((uVar2 >> 0xb & 1) != 0) {
    pcVar5 = param_2 + 2;
    param_2[1] = 0x2b;
  }
  pcVar4 = pcVar5;
  if ((uVar2 >> 10 & 1) != 0) {
    pcVar4 = pcVar5 + 1;
    *pcVar5 = '#';
  }
  uVar1 = uVar2 & 0x104;
  uVar2 = uVar2 & 0x4000;
  if (uVar1 != 0x104) {
    pcVar4[0] = '.';
    pcVar4[1] = '*';
    if (param_3 == '\0') {
      pcVar4 = pcVar4 + 2;
    }
    else {
      pcVar4[2] = param_3;
      pcVar4 = pcVar4 + 3;
    }
    if (uVar1 != 4) {
      if (uVar1 != 0x100) {
        cVar3 = 'g';
        if (uVar2 != 0) {
          cVar3 = 'G';
        }
        *pcVar4 = cVar3;
        pcVar4[1] = '\0';
        return;
      }
      cVar3 = 'e';
      if (uVar2 != 0) {
        cVar3 = 'E';
      }
      *pcVar4 = cVar3;
      pcVar4[1] = '\0';
      return;
    }
    cVar3 = 'f';
    if (uVar2 != 0) {
      cVar3 = 'F';
    }
    *pcVar4 = cVar3;
    pcVar4[1] = '\0';
    return;
  }
  pcVar5 = pcVar4;
  if (param_3 != '\0') {
    pcVar5 = pcVar4 + 1;
    *pcVar4 = param_3;
  }
  cVar3 = 'a';
  if (uVar2 != 0) {
    cVar3 = 'A';
  }
  *pcVar5 = cVar3;
  pcVar5[1] = '\0';
  return;
}



// ===== FUN_71007fbc40 @ 71007fbc40 (size=164) =====

bool FUN_71007fbc40(long param_1,long param_2,byte *param_3,long param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  byte bVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_4 - 1;
  uVar3 = param_2 - 1U;
  if (uVar6 < param_2 - 1U) {
    uVar3 = uVar6;
  }
  if (uVar3 == 0) {
    bVar5 = true;
  }
  else {
    uVar7 = 0;
    do {
      pbVar1 = (byte *)(param_1 + uVar7);
      uVar7 = uVar7 + 1;
      pbVar2 = param_3 + uVar6;
      uVar6 = uVar6 - 1;
      bVar5 = *pbVar2 == *pbVar1;
    } while ((bVar5 && uVar7 <= uVar3) && (!bVar5 || uVar3 != uVar7));
  }
  bVar4 = *(byte *)(param_1 + uVar3);
  if (uVar6 != 0 && bVar5 != false) {
    do {
      bVar5 = param_3[uVar6] == bVar4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0 && bVar5);
  }
  if ('\0' < (char)bVar4) {
    bVar5 = bVar5 != false && *param_3 <= bVar4;
  }
  return bVar5;
}



// ===== FUN_71007fbd00 @ 71007fbd00 (size=28) =====

void FUN_71007fbd00(void)

{
  FUN_71007fbc40();
  return;
}



// ===== FUN_71007fbd40 @ 71007fbd40 (size=992) =====

void FUN_71007fbd40(uint *param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w9;
  uint uVar9;
  int extraout_w10;
  uint extraout_w10_00;
  
  uVar7 = *param_1;
  uVar8 = (ulong)uVar7;
  if ((uVar7 & 0x101) == 0x101) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 0xc;
  }
  if ((uVar7 >> 7 & 1) != 0) {
    iVar4 = 0;
    if ((uVar7 >> 9 & 1) != 0) {
      iVar4 = *(int *)(param_2 + 0x14) % 100;
    }
    *(uint *)(param_2 + 0x14) = iVar4 + (param_1[1] - 0x13) * 100;
  }
  uVar9 = uVar7 & 4;
  if ((uVar7 & 0x402) == 0x400) {
    if (((uVar7 & 0x18) == 0x18) || (uVar9 == 0)) {
      uVar3 = *(uint *)(param_2 + 0x10);
      if (((uVar7 & 8) == 0) && (0xb < uVar3)) goto LAB_71007fbdb8;
      iVar4 = *(int *)(param_2 + 0x14);
    }
    else {
      iVar4 = *(int *)(param_2 + 0x14);
      iVar1 = *(int *)(param_2 + 0x1c);
      uVar9 = iVar4 + 0x76c;
      bVar2 = (uVar9 & 3) == 0;
      iVar6 = 0;
      while ((int)uVar9 % 100 != 0) {
        if (iVar1 < (int)(uint)(ushort)(&DAT_71009ce650)[(ulong)bVar2 * 0xd + (long)iVar6])
        goto LAB_71007fc08c;
        iVar6 = iVar6 + 1;
      }
      while ((int)uVar9 % 400 != 0) {
        if (iVar1 < (int)(uint)(ushort)(&DAT_71009ce650)[iVar6]) goto LAB_71007fc08c;
        iVar6 = iVar6 + 1;
      }
      while ((int)(uint)(ushort)(&DAT_71009ce650)
                                [(long)iVar6 + (ulong)bVar2 * 8 + (long)(int)(uint)bVar2 * 5] <=
             iVar1) {
        iVar6 = iVar6 + 1;
      }
LAB_71007fc08c:
      if ((uVar7 & 8) == 0) {
        uVar3 = iVar6 - 1;
        *(uint *)(param_2 + 0x10) = uVar3;
      }
      else {
        uVar3 = *(uint *)(param_2 + 0x10);
      }
      if ((uVar7 & 0x10) == 0) {
        if (((int)uVar9 % 100 != 0) || (uVar7 = 0, (int)uVar9 % 400 == 0)) {
          uVar7 = (uint)bVar2;
        }
        *(uint *)(param_2 + 0xc) =
             (iVar1 - (uint)(ushort)(&DAT_71009ce650)
                                    [(long)(int)uVar7 * 5 + (long)(int)uVar7 * 8 +
                                     (long)(iVar6 + -1)]) + 1;
      }
      *(byte *)param_1 = (byte)*param_1 | 0x18;
      uVar8 = (ulong)*param_1;
    }
    uVar5 = FUN_71007fba80(iVar4,uVar3,*(undefined4 *)(param_2 + 0xc));
    *(undefined4 *)(extraout_x8_00 + 0x18) = uVar5;
    param_2 = extraout_x8_00;
    uVar9 = extraout_w10_00;
  }
  if ((((uint)uVar8 & 0x404) == 0x400) &&
     ((((uint)uVar8 >> 3 & 1) != 0 || (*(uint *)(param_2 + 0x10) < 0xc)))) {
    uVar7 = *(int *)(param_2 + 0x14) + 0x76c;
    if (((int)uVar7 % 100 != 0) ||
       (uVar3 = 0, (uVar7 * -0x3d70a3d7 + 0x51eb850 >> 4 | uVar7 * -0x70000000) < 0xa3d70b)) {
      uVar3 = (uint)((uVar7 & 3) == 0);
    }
    *(uint *)(param_2 + 0x1c) =
         (uint)(ushort)(&DAT_71009ce650)
                       [(long)(int)uVar3 * 5 + (long)(int)uVar3 * 8 +
                        (long)(int)*(uint *)(param_2 + 0x10)] + *(int *)(param_2 + 0xc) + -1;
  }
LAB_71007fbdb8:
  if (((uVar8 & 0x60) != 0) && (((uint)uVar8 >> 1 & 1) != 0)) {
    iVar4 = *(int *)(param_2 + 0x14);
    if (uVar9 == 0) {
      iVar4 = FUN_71007fba80(iVar4,0,1);
      *(uint *)(extraout_x8 + 0x1c) =
           (7U - (iVar4 - extraout_w10)) % 7 + (((uint)(uVar8 >> 0x10) & 0x3f) - 1) * 7 +
           ((*(int *)(extraout_x8 + 0x18) - extraout_w10) + 7) % 7;
      param_2 = extraout_x8;
      iVar4 = extraout_w9;
    }
    if (((uint)uVar8 & 0x18) != 0x18) {
      uVar7 = iVar4 + 0x76c;
      bVar2 = (uVar7 & 3) == 0;
      iVar6 = *(int *)(param_2 + 0x1c);
      iVar4 = 0;
      while ((int)uVar7 % 100 != 0) {
        if (iVar6 < (int)(uint)(ushort)(&DAT_71009ce650)[(ulong)bVar2 * 0xd + (long)iVar4])
        goto LAB_71007fbe7c;
        iVar4 = iVar4 + 1;
      }
      while ((int)uVar7 % 400 != 0) {
        if (iVar6 < (int)(uint)(ushort)(&DAT_71009ce650)[iVar4]) goto LAB_71007fbe7c;
        iVar4 = iVar4 + 1;
      }
      while ((int)(uint)(ushort)(&DAT_71009ce650)
                                [(ulong)bVar2 * 8 + (long)(int)(uint)bVar2 * 5 + (long)iVar4] <=
             iVar6) {
        iVar4 = iVar4 + 1;
      }
LAB_71007fbe7c:
      if ((uVar8 & 8) == 0) {
        *(int *)(param_2 + 0x10) = iVar4 + -1;
      }
      if ((uVar8 & 0x10) == 0) {
        if (((int)uVar7 % 100 != 0) || (uVar9 = 0, (int)uVar7 % 400 == 0)) {
          uVar9 = (uint)bVar2;
        }
        *(uint *)(param_2 + 0xc) =
             (iVar6 - (uint)(ushort)(&DAT_71009ce650)
                                    [(long)(int)uVar9 * 5 + (long)(int)uVar9 * 8 +
                                     (long)(iVar4 + -1)]) + 1;
      }
    }
  }
  return;
}



// ===== FUN_71007fc120 @ 71007fc120 (size=172) =====

long * FUN_71007fc120(long *param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *in_x4;
  ulong local_8;
  
  plVar2 = param_1 + 2;
  *param_1 = (long)plVar2;
  puVar1 = (undefined1 *)*in_x4;
  local_8 = in_x4[1];
  if (local_8 < 0x10) {
    lVar3 = local_8 + 1;
    if (local_8 == 0) {
LAB_71007fc16c:
      *(undefined1 *)plVar2 = *puVar1;
      param_1[1] = local_8;
      return param_1;
    }
  }
  else {
    plVar2 = (long *)FUN_71007e2140(param_1,&local_8,0);
    *param_1 = (long)plVar2;
    param_1[2] = local_8;
    lVar3 = local_8 + 1;
    if (local_8 == 0) goto LAB_71007fc16c;
    if (lVar3 == 0) {
      param_1[1] = -1;
      return param_1;
    }
  }
  FUN_710080f900(plVar2,puVar1,lVar3);
  param_1[1] = local_8;
  return param_1;
}



// ===== FUN_71007fc1e0 @ 71007fc1e0 (size=172) =====

long * FUN_71007fc1e0(long *param_1)

{
  undefined4 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *in_x4;
  ulong local_8;
  
  plVar2 = param_1 + 2;
  *param_1 = (long)plVar2;
  puVar1 = (undefined4 *)*in_x4;
  local_8 = in_x4[1];
  if (local_8 < 4) {
    lVar3 = local_8 + 1;
    if (local_8 == 0) {
LAB_71007fc22c:
      *(undefined4 *)plVar2 = *puVar1;
      param_1[1] = 0;
      return param_1;
    }
  }
  else {
    plVar2 = (long *)FUN_71007f2f60(param_1,&local_8,0);
    *param_1 = (long)plVar2;
    param_1[2] = local_8;
    lVar3 = local_8 + 1;
    if (local_8 == 0) goto LAB_71007fc22c;
    if (lVar3 == 0) {
      param_1[1] = -1;
      return param_1;
    }
  }
  FUN_710080e900(plVar2,puVar1,lVar3);
  param_1[1] = local_8;
  return param_1;
}



// ===== FUN_71007fc2d0 @ 71007fc2d0 (size=48) =====

undefined8 * FUN_71007fc2d0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_8 [8];
  
  uVar1 = FUN_71007b6e00(param_2,auStack_8,0);
  *param_1 = uVar1;
  return param_1;
}



// ===== FUN_71007fc350 @ 71007fc350 (size=48) =====

undefined8 * FUN_71007fc350(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_8 [8];
  
  uVar1 = FUN_71007b7ac0(param_2,auStack_8,0);
  *param_1 = uVar1;
  return param_1;
}



// ===== FUN_71007fc3a0 @ 71007fc3a0 (size=24) =====

void FUN_71007fc3a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  FUN_71007fbc40(param_1,param_2,*param_3,param_3[1]);
  return;
}



// ===== FUN_71007fc3e0 @ 71007fc3e0 (size=224) =====

void FUN_71007fc3e0(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)FUN_71007af5c0(0x70);
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    *(undefined4 *)(puVar4 + 1) = 0;
    *(undefined2 *)(puVar4 + 4) = 0;
    *(undefined8 **)(param_1 + 0x10) = puVar4;
    *puVar4 = &PTR_FUN_7100aee768;
    *(undefined1 *)((long)puVar4 + 0x22) = 0;
    *(undefined4 *)(puVar4 + 0xb) = 0;
    *(undefined8 *)((long)puVar4 + 0x5c) = 0;
    *(undefined1 *)((long)puVar4 + 0x6f) = 0;
  }
  *(undefined1 *)((long)puVar4 + 0x21) = 0x2e;
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x22) = 0x2c;
  lVar5 = *(long *)(param_1 + 0x10);
  *(undefined1 **)(lVar5 + 0x10) = &DAT_7100853d20;
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined1 **)(lVar5 + 0x28) = &DAT_7100853d20;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  *(undefined1 **)(lVar5 + 0x38) = &DAT_7100853d20;
  *(undefined8 *)(lVar5 + 0x40) = 0;
  *(undefined1 **)(lVar5 + 0x48) = &DAT_7100853d20;
  *(undefined8 *)(lVar5 + 0x50) = 0;
  *(undefined4 *)(lVar5 + 0x58) = 0;
  *(undefined4 *)(lVar5 + 0x5c) = 0x4000302;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x60) = 0x4000302;
  puVar3 = PTR_DAT_7100af47a0;
  lVar5 = 0;
  do {
    puVar1 = puVar3 + lVar5;
    lVar2 = *(long *)(param_1 + 0x10) + lVar5;
    lVar5 = lVar5 + 1;
    *(undefined1 *)(lVar2 + 100) = *puVar1;
  } while (lVar5 != 0xb);
  return;
}



// ===== FUN_71007fc4c0 @ 71007fc4c0 (size=224) =====

void FUN_71007fc4c0(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)FUN_71007af5c0(0x70);
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    *(undefined4 *)(puVar4 + 1) = 0;
    *(undefined2 *)(puVar4 + 4) = 0;
    *(undefined8 **)(param_1 + 0x10) = puVar4;
    *puVar4 = &PTR_FUN_7100aee748;
    *(undefined1 *)((long)puVar4 + 0x22) = 0;
    *(undefined4 *)(puVar4 + 0xb) = 0;
    *(undefined8 *)((long)puVar4 + 0x5c) = 0;
    *(undefined1 *)((long)puVar4 + 0x6f) = 0;
  }
  *(undefined1 *)((long)puVar4 + 0x21) = 0x2e;
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x22) = 0x2c;
  lVar5 = *(long *)(param_1 + 0x10);
  *(undefined1 **)(lVar5 + 0x10) = &DAT_7100853d20;
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined1 **)(lVar5 + 0x28) = &DAT_7100853d20;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  *(undefined1 **)(lVar5 + 0x38) = &DAT_7100853d20;
  *(undefined8 *)(lVar5 + 0x40) = 0;
  *(undefined1 **)(lVar5 + 0x48) = &DAT_7100853d20;
  *(undefined8 *)(lVar5 + 0x50) = 0;
  *(undefined4 *)(lVar5 + 0x58) = 0;
  *(undefined4 *)(lVar5 + 0x5c) = 0x4000302;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x60) = 0x4000302;
  puVar3 = PTR_DAT_7100af47a0;
  lVar5 = 0;
  do {
    puVar1 = puVar3 + lVar5;
    lVar2 = *(long *)(param_1 + 0x10) + lVar5;
    lVar5 = lVar5 + 1;
    *(undefined1 *)(lVar2 + 100) = *puVar1;
  } while (lVar5 != 0xb);
  return;
}



// ===== FUN_71007fc5a0 @ 71007fc5a0 (size=68) =====

void FUN_71007fc5a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aed208;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  FUN_71007afc60(param_1);
  return;
}



// ===== FUN_71007fc600 @ 71007fc600 (size=40) =====

void FUN_71007fc600(undefined8 param_1)

{
  FUN_71007fc5a0();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007fc640 @ 71007fc640 (size=68) =====

void FUN_71007fc640(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aed270;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  FUN_71007afc60(param_1);
  return;
}



// ===== FUN_71007fc6a0 @ 71007fc6a0 (size=40) =====

void FUN_71007fc6a0(undefined8 param_1)

{
  FUN_71007fc640();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007fc6e0 @ 71007fc6e0 (size=224) =====

void FUN_71007fc6e0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_71007af5c0(0xa0);
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    *puVar3 = &PTR_FUN_7100aef2f0;
    *(undefined4 *)(puVar3 + 1) = 0;
    *(undefined1 *)(puVar3 + 4) = 0;
    *(undefined8 **)(param_1 + 0x10) = puVar3;
    *(undefined8 *)((long)puVar3 + 0x24) = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0;
    *(undefined8 *)((long)puVar3 + 100) = 0;
    *(undefined1 *)(puVar3 + 0x13) = 0;
  }
  puVar3[2] = &DAT_7100853d20;
  puVar3[3] = 0;
  puVar3[6] = &DAT_71009952f8;
  puVar3[7] = 0;
  puVar3[8] = &DAT_71009952f8;
  puVar3[9] = 0;
  puVar3[10] = &DAT_71009952f8;
  puVar3[0xb] = 0;
  *(undefined8 *)((long)puVar3 + 0x24) = 0x2c0000002e;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *(undefined4 *)((long)puVar3 + 100) = 0x4000302;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x68) = 0x4000302;
  puVar1 = PTR_DAT_7100af47a0;
  lVar4 = *(long *)(param_1 + 0x10);
  lVar2 = 0;
  do {
    *(uint *)(lVar4 + 0x6c + lVar2 * 4) = (uint)(byte)puVar1[lVar2];
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0xb);
  return;
}



// ===== FUN_71007fc7c0 @ 71007fc7c0 (size=224) =====

void FUN_71007fc7c0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_71007af5c0(0xa0);
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    *puVar3 = &PTR_FUN_7100aef2d0;
    *(undefined4 *)(puVar3 + 1) = 0;
    *(undefined1 *)(puVar3 + 4) = 0;
    *(undefined8 **)(param_1 + 0x10) = puVar3;
    *(undefined8 *)((long)puVar3 + 0x24) = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0;
    *(undefined8 *)((long)puVar3 + 100) = 0;
    *(undefined1 *)(puVar3 + 0x13) = 0;
  }
  puVar3[2] = &DAT_7100853d20;
  puVar3[3] = 0;
  puVar3[6] = &DAT_71009952f8;
  puVar3[7] = 0;
  puVar3[8] = &DAT_71009952f8;
  puVar3[9] = 0;
  puVar3[10] = &DAT_71009952f8;
  puVar3[0xb] = 0;
  *(undefined8 *)((long)puVar3 + 0x24) = 0x2c0000002e;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *(undefined4 *)((long)puVar3 + 100) = 0x4000302;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x68) = 0x4000302;
  puVar1 = PTR_DAT_7100af47a0;
  lVar4 = *(long *)(param_1 + 0x10);
  lVar2 = 0;
  do {
    *(uint *)(lVar4 + 0x6c + lVar2 * 4) = (uint)(byte)puVar1[lVar2];
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0xb);
  return;
}



// ===== FUN_71007fc8a0 @ 71007fc8a0 (size=68) =====

void FUN_71007fc8a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aedc58;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  FUN_71007afc60(param_1);
  return;
}



// ===== FUN_71007fc900 @ 71007fc900 (size=40) =====

void FUN_71007fc900(undefined8 param_1)

{
  FUN_71007fc8a0();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007fc940 @ 71007fc940 (size=68) =====

void FUN_71007fc940(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aedcc0;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  FUN_71007afc60(param_1);
  return;
}



// ===== FUN_71007fc9a0 @ 71007fc9a0 (size=40) =====

void FUN_71007fc9a0(undefined8 param_1)

{
  FUN_71007fc940();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007fc9e0 @ 71007fc9e0 (size=224) =====

void FUN_71007fc9e0(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)FUN_71007af5c0(0x70);
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    *(undefined4 *)(puVar4 + 1) = 0;
    *(undefined2 *)(puVar4 + 4) = 0;
    *(undefined8 **)(param_1 + 0x10) = puVar4;
    *puVar4 = &PTR_FUN_7100aee768;
    *(undefined1 *)((long)puVar4 + 0x22) = 0;
    *(undefined4 *)(puVar4 + 0xb) = 0;
    *(undefined8 *)((long)puVar4 + 0x5c) = 0;
    *(undefined1 *)((long)puVar4 + 0x6f) = 0;
  }
  *(undefined1 *)((long)puVar4 + 0x21) = 0x2e;
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x22) = 0x2c;
  lVar5 = *(long *)(param_1 + 0x10);
  *(undefined1 **)(lVar5 + 0x10) = &DAT_7100853d20;
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined1 **)(lVar5 + 0x28) = &DAT_7100853d20;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  *(undefined1 **)(lVar5 + 0x38) = &DAT_7100853d20;
  *(undefined8 *)(lVar5 + 0x40) = 0;
  *(undefined1 **)(lVar5 + 0x48) = &DAT_7100853d20;
  *(undefined8 *)(lVar5 + 0x50) = 0;
  *(undefined4 *)(lVar5 + 0x58) = 0;
  *(undefined4 *)(lVar5 + 0x5c) = 0x4000302;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x60) = 0x4000302;
  puVar3 = PTR_DAT_7100af47a0;
  lVar5 = 0;
  do {
    puVar1 = puVar3 + lVar5;
    lVar2 = *(long *)(param_1 + 0x10) + lVar5;
    lVar5 = lVar5 + 1;
    *(undefined1 *)(lVar2 + 100) = *puVar1;
  } while (lVar5 != 0xb);
  return;
}



// ===== FUN_71007fcac0 @ 71007fcac0 (size=224) =====

void FUN_71007fcac0(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)FUN_71007af5c0(0x70);
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    *(undefined4 *)(puVar4 + 1) = 0;
    *(undefined2 *)(puVar4 + 4) = 0;
    *(undefined8 **)(param_1 + 0x10) = puVar4;
    *puVar4 = &PTR_FUN_7100aee748;
    *(undefined1 *)((long)puVar4 + 0x22) = 0;
    *(undefined4 *)(puVar4 + 0xb) = 0;
    *(undefined8 *)((long)puVar4 + 0x5c) = 0;
    *(undefined1 *)((long)puVar4 + 0x6f) = 0;
  }
  *(undefined1 *)((long)puVar4 + 0x21) = 0x2e;
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x22) = 0x2c;
  lVar5 = *(long *)(param_1 + 0x10);
  *(undefined1 **)(lVar5 + 0x10) = &DAT_7100853d20;
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined1 **)(lVar5 + 0x28) = &DAT_7100853d20;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  *(undefined1 **)(lVar5 + 0x38) = &DAT_7100853d20;
  *(undefined8 *)(lVar5 + 0x40) = 0;
  *(undefined1 **)(lVar5 + 0x48) = &DAT_7100853d20;
  *(undefined8 *)(lVar5 + 0x50) = 0;
  *(undefined4 *)(lVar5 + 0x58) = 0;
  *(undefined4 *)(lVar5 + 0x5c) = 0x4000302;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x60) = 0x4000302;
  puVar3 = PTR_DAT_7100af47a0;
  lVar5 = 0;
  do {
    puVar1 = puVar3 + lVar5;
    lVar2 = *(long *)(param_1 + 0x10) + lVar5;
    lVar5 = lVar5 + 1;
    *(undefined1 *)(lVar2 + 100) = *puVar1;
  } while (lVar5 != 0xb);
  return;
}



// ===== FUN_71007fcba0 @ 71007fcba0 (size=116) =====

void FUN_71007fcba0(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[2];
  *param_1 = &PTR_FUN_7100aee510;
  if (plVar1 != (long *)0x0) {
    if (*(code **)(*plVar1 + 8) != FUN_71007d0da0) {
      (**(code **)(*plVar1 + 8))(plVar1);
      FUN_71007afc60(param_1);
      return;
    }
    FUN_71007d0d20();
    thunk_FUN_710081c200(plVar1);
  }
  FUN_71007afc60(param_1);
  return;
}



// ===== FUN_71007fcc60 @ 71007fcc60 (size=40) =====

void FUN_71007fcc60(undefined8 param_1)

{
  FUN_71007fcba0();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007fcca0 @ 71007fcca0 (size=116) =====

void FUN_71007fcca0(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[2];
  *param_1 = &PTR_FUN_7100aee578;
  if (plVar1 != (long *)0x0) {
    if (*(code **)(*plVar1 + 8) != FUN_71007d0d00) {
      (**(code **)(*plVar1 + 8))(plVar1);
      FUN_71007afc60(param_1);
      return;
    }
    FUN_71007d0c80();
    thunk_FUN_710081c200(plVar1);
  }
  FUN_71007afc60(param_1);
  return;
}



// ===== FUN_71007fcd60 @ 71007fcd60 (size=40) =====

void FUN_71007fcd60(undefined8 param_1)

{
  FUN_71007fcca0();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007fcda0 @ 71007fcda0 (size=224) =====

void FUN_71007fcda0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_71007af5c0(0xa0);
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    *puVar3 = &PTR_FUN_7100aef2f0;
    *(undefined4 *)(puVar3 + 1) = 0;
    *(undefined1 *)(puVar3 + 4) = 0;
    *(undefined8 **)(param_1 + 0x10) = puVar3;
    *(undefined8 *)((long)puVar3 + 0x24) = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0;
    *(undefined8 *)((long)puVar3 + 100) = 0;
    *(undefined1 *)(puVar3 + 0x13) = 0;
  }
  puVar3[2] = &DAT_7100853d20;
  puVar3[3] = 0;
  puVar3[6] = &DAT_71009952f8;
  puVar3[7] = 0;
  puVar3[8] = &DAT_71009952f8;
  puVar3[9] = 0;
  puVar3[10] = &DAT_71009952f8;
  puVar3[0xb] = 0;
  *(undefined8 *)((long)puVar3 + 0x24) = 0x2c0000002e;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *(undefined4 *)((long)puVar3 + 100) = 0x4000302;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x68) = 0x4000302;
  puVar1 = PTR_DAT_7100af47a0;
  lVar4 = *(long *)(param_1 + 0x10);
  lVar2 = 0;
  do {
    *(uint *)(lVar4 + 0x6c + lVar2 * 4) = (uint)(byte)puVar1[lVar2];
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0xb);
  return;
}



// ===== FUN_71007fce80 @ 71007fce80 (size=224) =====

void FUN_71007fce80(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_71007af5c0(0xa0);
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    *puVar3 = &PTR_FUN_7100aef2d0;
    *(undefined4 *)(puVar3 + 1) = 0;
    *(undefined1 *)(puVar3 + 4) = 0;
    *(undefined8 **)(param_1 + 0x10) = puVar3;
    *(undefined8 *)((long)puVar3 + 0x24) = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0;
    *(undefined8 *)((long)puVar3 + 100) = 0;
    *(undefined1 *)(puVar3 + 0x13) = 0;
  }
  puVar3[2] = &DAT_7100853d20;
  puVar3[3] = 0;
  puVar3[6] = &DAT_71009952f8;
  puVar3[7] = 0;
  puVar3[8] = &DAT_71009952f8;
  puVar3[9] = 0;
  puVar3[10] = &DAT_71009952f8;
  puVar3[0xb] = 0;
  *(undefined8 *)((long)puVar3 + 0x24) = 0x2c0000002e;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *(undefined4 *)((long)puVar3 + 100) = 0x4000302;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x68) = 0x4000302;
  puVar1 = PTR_DAT_7100af47a0;
  lVar4 = *(long *)(param_1 + 0x10);
  lVar2 = 0;
  do {
    *(uint *)(lVar4 + 0x6c + lVar2 * 4) = (uint)(byte)puVar1[lVar2];
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0xb);
  return;
}



// ===== FUN_71007fcf60 @ 71007fcf60 (size=116) =====

void FUN_71007fcf60(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[2];
  *param_1 = &PTR_FUN_7100aef098;
  if (plVar1 != (long *)0x0) {
    if (*(code **)(*plVar1 + 8) != FUN_71007e3da0) {
      (**(code **)(*plVar1 + 8))(plVar1);
      FUN_71007afc60(param_1);
      return;
    }
    FUN_71007e3d20();
    thunk_FUN_710081c200(plVar1);
  }
  FUN_71007afc60(param_1);
  return;
}



// ===== FUN_71007fd020 @ 71007fd020 (size=40) =====

void FUN_71007fd020(undefined8 param_1)

{
  FUN_71007fcf60();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007fd060 @ 71007fd060 (size=116) =====

void FUN_71007fd060(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[2];
  *param_1 = &PTR_FUN_7100aef100;
  if (plVar1 != (long *)0x0) {
    if (*(code **)(*plVar1 + 8) != FUN_71007e3d00) {
      (**(code **)(*plVar1 + 8))(plVar1);
      FUN_71007afc60(param_1);
      return;
    }
    FUN_71007e3c80();
    thunk_FUN_710081c200(plVar1);
  }
  FUN_71007afc60(param_1);
  return;
}



// ===== FUN_71007fd120 @ 71007fd120 (size=40) =====

void FUN_71007fd120(undefined8 param_1)

{
  FUN_71007fd060();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007fd160 @ 71007fd160 (size=268) =====

void FUN_71007fd160(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)FUN_71007af5c0(0x90);
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    *(undefined4 *)(puVar5 + 1) = 0;
    *(undefined1 *)(puVar5 + 4) = 0;
    *(undefined8 **)(param_1 + 0x10) = puVar5;
    *puVar5 = &PTR_FUN_7100aee788;
    *(undefined2 *)(puVar5 + 9) = 0;
    *(undefined1 *)(puVar5 + 0x11) = 0;
  }
  puVar5[2] = &DAT_7100853d20;
  puVar5[3] = 0;
  *(undefined1 *)(puVar5 + 9) = 0x2e;
  *(undefined1 *)(puVar5 + 4) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x49) = 0x2c;
  puVar3 = PTR_s___xX0123456789abcdef0123456789AB_7100af4790;
  lVar6 = 0;
  do {
    puVar1 = puVar3 + lVar6;
    lVar2 = *(long *)(param_1 + 0x10) + lVar6;
    lVar6 = lVar6 + 1;
    *(undefined1 *)(lVar2 + 0x4a) = *puVar1;
    puVar4 = PTR_s___xX0123456789abcdefABCDEF_7100af4798;
  } while (lVar6 != 0x24);
  lVar6 = 0;
  do {
    puVar1 = puVar4 + lVar6;
    lVar2 = *(long *)(param_1 + 0x10) + lVar6;
    lVar6 = lVar6 + 1;
    *(undefined1 *)(lVar2 + 0x6e) = *puVar1;
  } while (lVar6 != 0x1a);
  lVar6 = *(long *)(param_1 + 0x10);
  *(undefined **)(lVar6 + 0x28) = &DAT_710083bff8;
  *(undefined8 *)(lVar6 + 0x30) = 4;
  *(char **)(lVar6 + 0x38) = "false";
  *(undefined8 *)(lVar6 + 0x40) = 5;
  return;
}



// ===== FUN_71007fd280 @ 71007fd280 (size=68) =====

void FUN_71007fd280(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aed1c0;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  FUN_71007afc60(param_1);
  return;
}



// ===== FUN_71007fd2e0 @ 71007fd2e0 (size=40) =====

void FUN_71007fd2e0(undefined8 param_1)

{
  FUN_71007fd280();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007fd320 @ 71007fd320 (size=240) =====

void FUN_71007fd320(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)FUN_71007af5c0(0x150);
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    *puVar4 = &PTR_FUN_7100aef310;
    *(undefined4 *)(puVar4 + 1) = 0;
    *(undefined1 *)(puVar4 + 4) = 0;
    *(undefined8 **)(param_1 + 0x10) = puVar4;
    puVar4[9] = 0;
    *(undefined1 *)(puVar4 + 0x29) = 0;
  }
  puVar4[2] = &DAT_7100853d20;
  puVar4[3] = 0;
  lVar3 = 0;
  *(undefined1 *)(puVar4 + 4) = 0;
  puVar4[9] = 0x2c0000002e;
  puVar1 = PTR_s___xX0123456789abcdef0123456789AB_7100af4790;
  do {
    *(uint *)((long)puVar4 + lVar3 * 4 + 0x50) = (uint)(byte)puVar1[lVar3];
    puVar2 = PTR_s___xX0123456789abcdefABCDEF_7100af4798;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x24);
  lVar3 = 0;
  do {
    *(uint *)((long)puVar4 + lVar3 * 4 + 0xe0) = (uint)(byte)puVar2[lVar3];
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x1a);
  puVar4[5] = &DAT_7100995498;
  puVar4[6] = 4;
  puVar4[7] = L"false";
  puVar4[8] = 5;
  return;
}



// ===== FUN_71007fd420 @ 71007fd420 (size=68) =====

void FUN_71007fd420(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aedc10;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  FUN_71007afc60(param_1);
  return;
}



// ===== FUN_71007fd480 @ 71007fd480 (size=40) =====

void FUN_71007fd480(undefined8 param_1)

{
  FUN_71007fd420();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007fd4c0 @ 71007fd4c0 (size=268) =====

void FUN_71007fd4c0(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)FUN_71007af5c0(0x90);
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    *(undefined4 *)(puVar5 + 1) = 0;
    *(undefined1 *)(puVar5 + 4) = 0;
    *(undefined8 **)(param_1 + 0x10) = puVar5;
    *puVar5 = &PTR_FUN_7100aee788;
    *(undefined2 *)(puVar5 + 9) = 0;
    *(undefined1 *)(puVar5 + 0x11) = 0;
  }
  puVar5[2] = &DAT_7100853d20;
  puVar5[3] = 0;
  *(undefined1 *)(puVar5 + 9) = 0x2e;
  *(undefined1 *)(puVar5 + 4) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x49) = 0x2c;
  puVar3 = PTR_s___xX0123456789abcdef0123456789AB_7100af4790;
  lVar6 = 0;
  do {
    puVar1 = puVar3 + lVar6;
    lVar2 = *(long *)(param_1 + 0x10) + lVar6;
    lVar6 = lVar6 + 1;
    *(undefined1 *)(lVar2 + 0x4a) = *puVar1;
    puVar4 = PTR_s___xX0123456789abcdefABCDEF_7100af4798;
  } while (lVar6 != 0x24);
  lVar6 = 0;
  do {
    puVar1 = puVar4 + lVar6;
    lVar2 = *(long *)(param_1 + 0x10) + lVar6;
    lVar6 = lVar6 + 1;
    *(undefined1 *)(lVar2 + 0x6e) = *puVar1;
  } while (lVar6 != 0x1a);
  lVar6 = *(long *)(param_1 + 0x10);
  *(undefined **)(lVar6 + 0x28) = &DAT_710083bff8;
  *(undefined8 *)(lVar6 + 0x30) = 4;
  *(char **)(lVar6 + 0x38) = "false";
  *(undefined8 *)(lVar6 + 0x40) = 5;
  return;
}



// ===== FUN_71007fd5e0 @ 71007fd5e0 (size=116) =====

void FUN_71007fd5e0(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[2];
  *param_1 = &PTR_FUN_7100aee3b0;
  if (plVar1 != (long *)0x0) {
    if (*(code **)(*plVar1 + 8) != FUN_71007d0e40) {
      (**(code **)(*plVar1 + 8))(plVar1);
      FUN_71007afc60(param_1);
      return;
    }
    FUN_71007d0dc0();
    thunk_FUN_710081c200(plVar1);
  }
  FUN_71007afc60(param_1);
  return;
}



// ===== FUN_71007fd6a0 @ 71007fd6a0 (size=40) =====

void FUN_71007fd6a0(undefined8 param_1)

{
  FUN_71007fd5e0();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007fd6e0 @ 71007fd6e0 (size=240) =====

void FUN_71007fd6e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)FUN_71007af5c0(0x150);
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    *puVar4 = &PTR_FUN_7100aef310;
    *(undefined4 *)(puVar4 + 1) = 0;
    *(undefined1 *)(puVar4 + 4) = 0;
    *(undefined8 **)(param_1 + 0x10) = puVar4;
    puVar4[9] = 0;
    *(undefined1 *)(puVar4 + 0x29) = 0;
  }
  puVar4[2] = &DAT_7100853d20;
  puVar4[3] = 0;
  lVar3 = 0;
  *(undefined1 *)(puVar4 + 4) = 0;
  puVar4[9] = 0x2c0000002e;
  puVar1 = PTR_s___xX0123456789abcdef0123456789AB_7100af4790;
  do {
    *(uint *)((long)puVar4 + lVar3 * 4 + 0x50) = (uint)(byte)puVar1[lVar3];
    puVar2 = PTR_s___xX0123456789abcdefABCDEF_7100af4798;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x24);
  lVar3 = 0;
  do {
    *(uint *)((long)puVar4 + lVar3 * 4 + 0xe0) = (uint)(byte)puVar2[lVar3];
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x1a);
  puVar4[5] = &DAT_7100995498;
  puVar4[6] = 4;
  puVar4[7] = L"false";
  puVar4[8] = 5;
  return;
}



// ===== FUN_71007fd7e0 @ 71007fd7e0 (size=116) =====

void FUN_71007fd7e0(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[2];
  *param_1 = &PTR_FUN_7100aeef38;
  if (plVar1 != (long *)0x0) {
    if (*(code **)(*plVar1 + 8) != FUN_71007e3e40) {
      (**(code **)(*plVar1 + 8))(plVar1);
      FUN_71007afc60(param_1);
      return;
    }
    FUN_71007e3dc0();
    thunk_FUN_710081c200(plVar1);
  }
  FUN_71007afc60(param_1);
  return;
}



// ===== FUN_71007fd8a0 @ 71007fd8a0 (size=40) =====

void FUN_71007fd8a0(undefined8 param_1)

{
  FUN_71007fd7e0();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007fd8e0 @ 71007fd8e0 (size=180) =====

void FUN_71007fd8e0(long param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_7100809560(0,0);
  lVar2 = FUN_710081ce00();
  uVar3 = thunk_FUN_71007af5c0(lVar2 + 1);
  FUN_710080f900(uVar3,uVar1,lVar2 + 1);
  FUN_7100809560(0,*(undefined8 *)(param_1 + 0x20));
  lVar2 = FUN_7100807ca0(param_2,param_3,param_4,param_5);
  FUN_7100809560(0,uVar3);
  thunk_FUN_710081c200(uVar3);
  if (lVar2 == 0) {
    *param_2 = 0;
  }
  return;
}



// ===== FUN_71007fd9c0 @ 71007fd9c0 (size=576) =====

void FUN_71007fd9c0(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_71007af5c0(400);
    *(undefined4 *)(puVar1 + 1) = 0;
    puVar1[0x30] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x20] = 0;
    puVar1[0x21] = 0;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    puVar1[0x24] = 0;
    puVar1[0x25] = 0;
    puVar1[0x26] = 0;
    puVar1[0x27] = 0;
    puVar1[0x28] = 0;
    puVar1[0x29] = 0;
    puVar1[0x2a] = 0;
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *puVar1 = &PTR_FUN_7100aee4d0;
    puVar1[0x2e] = 0;
    puVar1[0x2f] = 0;
    *(undefined8 **)(param_1 + 0x10) = puVar1;
    *(undefined1 *)(puVar1 + 0x31) = 0;
  }
  puVar1[2] = "%m/%d/%y";
  puVar1[3] = "%m/%d/%y";
  puVar1[4] = "%H:%M:%S";
  puVar1[5] = "%H:%M:%S";
  puVar1[6] = "%a %b %e %T %Y";
  puVar1[7] = "%a %b %e %T %Y";
  puVar1[8] = &DAT_7100856858;
  puVar1[9] = &DAT_7100856860;
  puVar1[10] = "%I:%M:%S %p";
  puVar1[0xb] = "Sunday";
  puVar1[0xc] = "Monday";
  puVar1[0xd] = "Tuesday";
  puVar1[0xe] = "Wednesday";
  puVar1[0xf] = "Thursday";
  puVar1[0x10] = "Friday";
  puVar1[0x11] = "Saturday";
  puVar1[0x12] = &DAT_7100849180;
  puVar1[0x13] = &DAT_7100849038;
  puVar1[0x14] = &DAT_7100849158;
  puVar1[0x15] = &DAT_7100849160;
  puVar1[0x16] = &DAT_7100849168;
  puVar1[0x17] = &DAT_7100849170;
  puVar1[0x18] = &DAT_7100849178;
  puVar1[0x19] = "January";
  puVar1[0x1a] = "February";
  puVar1[0x1b] = "March";
  puVar1[0x1c] = "April";
  puVar1[0x1d] = &DAT_7100849118;
  puVar1[0x1e] = &DAT_71008568a0;
  puVar1[0x1f] = &DAT_71008568a8;
  puVar1[0x20] = "August";
  puVar1[0x21] = "September";
  puVar1[0x22] = "October";
  puVar1[0x23] = "November";
  puVar1[0x24] = "December";
  puVar1[0x25] = &DAT_7100849048;
  puVar1[0x26] = &DAT_7100849100;
  puVar1[0x27] = &DAT_7100849108;
  puVar1[0x28] = &DAT_7100849110;
  puVar1[0x29] = &DAT_7100849118;
  puVar1[0x2a] = &DAT_7100849120;
  puVar1[0x2b] = &DAT_7100849128;
  puVar1[0x2c] = &DAT_7100849130;
  puVar1[0x2d] = &DAT_7100849138;
  puVar1[0x2e] = &DAT_7100849140;
  puVar1[0x2f] = &DAT_7100849148;
  puVar1[0x30] = &DAT_7100849150;
  return;
}



// ===== FUN_71007fdc00 @ 71007fdc00 (size=180) =====

void FUN_71007fdc00(long param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_7100809560(0,0);
  lVar2 = FUN_710081ce00();
  uVar3 = thunk_FUN_71007af5c0(lVar2 + 1);
  FUN_710080f900(uVar3,uVar1,lVar2 + 1);
  FUN_7100809560(0,*(undefined8 *)(param_1 + 0x20));
  lVar2 = FUN_710080c840(param_2,param_3,param_4,param_5);
  FUN_7100809560(0,uVar3);
  thunk_FUN_710081c200(uVar3);
  if (lVar2 == 0) {
    *param_2 = 0;
  }
  return;
}



// ===== FUN_71007fdce0 @ 71007fdce0 (size=576) =====

void FUN_71007fdce0(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_71007af5c0(400);
    *(undefined4 *)(puVar1 + 1) = 0;
    puVar1[0x30] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x20] = 0;
    puVar1[0x21] = 0;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    puVar1[0x24] = 0;
    puVar1[0x25] = 0;
    puVar1[0x26] = 0;
    puVar1[0x27] = 0;
    puVar1[0x28] = 0;
    puVar1[0x29] = 0;
    puVar1[0x2a] = 0;
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *puVar1 = &PTR_FUN_7100aef058;
    puVar1[0x2e] = 0;
    puVar1[0x2f] = 0;
    *(undefined8 **)(param_1 + 0x10) = puVar1;
    *(undefined1 *)(puVar1 + 0x31) = 0;
  }
  puVar1[2] = &DAT_71009954c8;
  puVar1[3] = &DAT_71009954c8;
  puVar1[4] = &DAT_71009954f0;
  puVar1[5] = &DAT_71009954f0;
  puVar1[6] = L"%a %b %e %T %Y";
  puVar1[7] = L"%a %b %e %T %Y";
  puVar1[8] = &DAT_7100995558;
  puVar1[9] = &DAT_7100995568;
  puVar1[10] = &DAT_7100995578;
  puVar1[0xb] = L"Sunday";
  puVar1[0xc] = L"Monday";
  puVar1[0xd] = L"Tuesday";
  puVar1[0xe] = L"Wednesday";
  puVar1[0xf] = L"Thursday";
  puVar1[0x10] = L"Friday";
  puVar1[0x11] = L"Saturday";
  puVar1[0x12] = &DAT_71009956a0;
  puVar1[0x13] = &DAT_71009956b0;
  puVar1[0x14] = &DAT_71009956c0;
  puVar1[0x15] = &DAT_71009956d0;
  puVar1[0x16] = &DAT_71009956e0;
  puVar1[0x17] = &DAT_71009956f0;
  puVar1[0x18] = &DAT_7100995700;
  puVar1[0x19] = L"January";
  puVar1[0x1a] = L"February";
  puVar1[0x1b] = L"March";
  puVar1[0x1c] = L"April";
  puVar1[0x1d] = &DAT_7100995788;
  puVar1[0x1e] = &DAT_7100995798;
  puVar1[0x1f] = &DAT_71009957b0;
  puVar1[0x20] = L"August";
  puVar1[0x21] = L"September";
  puVar1[0x22] = L"October";
  puVar1[0x23] = L"November";
  puVar1[0x24] = L"December";
  puVar1[0x25] = &DAT_7100995880;
  puVar1[0x26] = &DAT_7100995890;
  puVar1[0x27] = &DAT_71009958a0;
  puVar1[0x28] = &DAT_71009958b0;
  puVar1[0x29] = &DAT_7100995788;
  puVar1[0x2a] = &DAT_71009958c0;
  puVar1[0x2b] = &DAT_71009958d0;
  puVar1[0x2c] = &DAT_71009958e0;
  puVar1[0x2d] = &DAT_71009958f0;
  puVar1[0x2e] = &DAT_7100995900;
  puVar1[0x2f] = &DAT_7100995910;
  puVar1[0x30] = &DAT_7100995920;
  return;
}



// ===== FUN_71007fdfc0 @ 71007fdfc0 (size=268) =====

undefined8 FUN_71007fdfc0(long *param_1,ulong param_2)

{
  byte *pbVar1;
  uint uVar2;
  char cVar3;
  char *pcVar4;
  
  uVar2 = (uint)param_2;
  if (uVar2 < 0x80) {
    pbVar1 = (byte *)*param_1;
    if ((byte *)param_1[1] == pbVar1) {
      return 0;
    }
    *param_1 = (long)(pbVar1 + 1);
    *pbVar1 = (byte)param_2;
  }
  else {
    if (uVar2 < 0x800) {
      pcVar4 = (char *)*param_1;
      if ((ulong)(param_1[1] - (long)pcVar4) < 2) {
        return 0;
      }
      *param_1 = (long)(pcVar4 + 1);
      cVar3 = (char)(uVar2 >> 6) + -0x40;
    }
    else {
      if (uVar2 < 0x10000) {
        pcVar4 = (char *)*param_1;
        if ((ulong)(param_1[1] - (long)pcVar4) < 3) {
          return 0;
        }
        *param_1 = (long)(pcVar4 + 1);
        cVar3 = (char)(uVar2 >> 0xc) + -0x20;
      }
      else {
        if ((0x10ffff < uVar2) ||
           (pcVar4 = (char *)*param_1, (ulong)(param_1[1] - (long)pcVar4) < 4)) {
          return 0;
        }
        *param_1 = (long)(pcVar4 + 1);
        *pcVar4 = (char)(uVar2 >> 0x12) + -0x10;
        pcVar4 = (char *)*param_1;
        *param_1 = (long)(pcVar4 + 1);
        cVar3 = ((byte)(param_2 >> 0xc) & 0x3f) + 0x80;
      }
      *pcVar4 = cVar3;
      pcVar4 = (char *)*param_1;
      *param_1 = (long)(pcVar4 + 1);
      cVar3 = ((byte)(param_2 >> 6) & 0x3f) + 0x80;
    }
    *pcVar4 = cVar3;
    pcVar4 = (char *)*param_1;
    *param_1 = (long)(pcVar4 + 1);
    *pcVar4 = ((byte)param_2 & 0x3f) + 0x80;
  }
  return 1;
}



// ===== FUN_71007fe0e0 @ 71007fe0e0 (size=424) =====

ulong FUN_71007fe0e0(long *param_1,ulong param_2)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  
  pbVar2 = (byte *)*param_1;
  lVar5 = param_1[1] - (long)pbVar2;
  if ((byte *)param_1[1] == pbVar2) {
    return 0xfffffffe;
  }
  bVar3 = *pbVar2;
  if (bVar3 < 0x80) {
    *param_1 = (long)(pbVar2 + 1);
    return (ulong)bVar3;
  }
  if (0xc1 < bVar3) {
    uVar6 = (uint)bVar3;
    if (bVar3 < 0xe0) {
      if (lVar5 == 1) {
        return 0xfffffffe;
      }
      if ((pbVar2[1] & 0xc0) == 0x80) {
        uVar7 = (ulong)((pbVar2[1] - 0x3080) + uVar6 * 0x40);
        if (param_2 < uVar7) {
          return uVar7;
        }
        *param_1 = (long)(pbVar2 + 2);
        return uVar7;
      }
    }
    else if (uVar6 < 0xf0) {
      if (lVar5 == 1) {
        return 0xfffffffe;
      }
      bVar3 = pbVar2[1];
      if ((((bVar3 & 0xc0) == 0x80) && (uVar6 != 0xe0 || 0x9f < bVar3)) &&
         (uVar6 != 0xed || bVar3 < 0xa0)) {
        if (lVar5 == 2) {
          return 0xfffffffe;
        }
        if ((pbVar2[2] & 0xc0) == 0x80) {
          iVar1 = (uint)bVar3 * 0x40 + uVar6 * 0x1000;
          iVar4 = pbVar2[2] - 0xe2080;
          uVar7 = (ulong)(uint)(iVar1 + iVar4);
          if (param_2 < (uint)(iVar1 + iVar4)) {
            return uVar7;
          }
          *param_1 = (long)(pbVar2 + 3);
          return uVar7;
        }
      }
    }
    else if (uVar6 < 0xf5 && 0xffff < param_2) {
      if (lVar5 == 1) {
        return 0xfffffffe;
      }
      bVar3 = pbVar2[1];
      if ((((bVar3 & 0xc0) == 0x80) && (uVar6 != 0xf0 || 0x8f < bVar3)) &&
         (uVar6 != 0xf4 || bVar3 < 0x90)) {
        if (lVar5 == 2) {
          return 0xfffffffe;
        }
        if ((pbVar2[2] & 0xc0) == 0x80) {
          if (lVar5 == 3) {
            return 0xfffffffe;
          }
          if ((pbVar2[3] & 0xc0) == 0x80) {
            iVar1 = (uint)bVar3 * 0x1000 + uVar6 * 0x40000;
            iVar4 = pbVar2[3] + 0xfc37df80 + (uint)pbVar2[2] * 0x40;
            uVar7 = (ulong)(uint)(iVar1 + iVar4);
            if (param_2 < (uint)(iVar1 + iVar4)) {
              return uVar7;
            }
            *param_1 = (long)(pbVar2 + 4);
            return uVar7;
          }
        }
      }
    }
  }
  return 0xffffffff;
}



// ===== FUN_71007fe2a0 @ 71007fe2a0 (size=284) =====

undefined8 FUN_71007fe2a0(long *param_1,ulong param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = (uint)param_2;
  bVar3 = (byte)param_2;
  if (uVar4 < 0x80) {
    pbVar1 = (byte *)*param_1;
    if ((byte *)param_1[1] == pbVar1) {
      return 0;
    }
    *param_1 = (long)(pbVar1 + 1);
    *pbVar1 = bVar3;
  }
  else if (uVar4 < 0x800) {
    pcVar2 = (char *)*param_1;
    if ((ulong)(param_1[1] - (long)pcVar2) < 2) {
      return 0;
    }
    *pcVar2 = (char)(uVar4 >> 6) + -0x40;
    *param_1 = (long)(pcVar2 + 2);
    pcVar2[1] = (bVar3 & 0x3f) + 0x80;
  }
  else if (uVar4 < 0x10000) {
    pcVar2 = (char *)*param_1;
    if ((ulong)(param_1[1] - (long)pcVar2) < 3) {
      return 0;
    }
    *pcVar2 = (char)(uVar4 >> 0xc) + -0x20;
    pcVar2[1] = ((byte)(param_2 >> 6) & 0x3f) + 0x80;
    *param_1 = (long)(pcVar2 + 3);
    pcVar2[2] = (bVar3 & 0x3f) + 0x80;
  }
  else {
    if ((0x10ffff < uVar4) || (pcVar2 = (char *)*param_1, (ulong)(param_1[1] - (long)pcVar2) < 4)) {
      return 0;
    }
    *pcVar2 = (char)(uVar4 >> 0x12) + -0x10;
    pcVar2[1] = ((byte)(param_2 >> 0xc) & 0x3f) + 0x80;
    pcVar2[2] = ((byte)(param_2 >> 6) & 0x3f) + 0x80;
    *param_1 = (long)(pcVar2 + 4);
    pcVar2[3] = (bVar3 & 0x3f) + 0x80;
  }
  return 1;
}



// ===== FUN_71007fe3c0 @ 71007fe3c0 (size=404) =====

uint FUN_71007fe3c0(long *param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  
  pbVar1 = (byte *)*param_1;
  lVar4 = param_1[1] - (long)pbVar1;
  if ((byte *)param_1[1] == pbVar1) {
    return 0xfffffffe;
  }
  bVar2 = *pbVar1;
  if (bVar2 < 0x80) {
    *param_1 = (long)(pbVar1 + 1);
    return (uint)bVar2;
  }
  if (0xc1 < bVar2) {
    uVar5 = (uint)bVar2;
    if (bVar2 < 0xe0) {
      if (lVar4 == 1) {
        return 0xfffffffe;
      }
      bVar2 = pbVar1[1];
      if ((bVar2 & 0xc0) == 0x80) {
        *param_1 = (long)(pbVar1 + 2);
        return (bVar2 - 0x3080) + uVar5 * 0x40;
      }
    }
    else if (uVar5 < 0xf0) {
      if (lVar4 == 1) {
        return 0xfffffffe;
      }
      bVar2 = pbVar1[1];
      if ((((bVar2 & 0xc0) == 0x80) && (uVar5 != 0xe0 || 0x9f < bVar2)) &&
         (uVar5 != 0xed || bVar2 < 0xa0)) {
        if (lVar4 == 2) {
          return 0xfffffffe;
        }
        bVar3 = pbVar1[2];
        if ((bVar3 & 0xc0) == 0x80) {
          *param_1 = (long)(pbVar1 + 3);
          return (uint)bVar2 * 0x40 + uVar5 * 0x1000 + (bVar3 - 0xe2080);
        }
      }
    }
    else if (uVar5 < 0xf5 && param_2 != 0xffff) {
      if (lVar4 == 1) {
        return 0xfffffffe;
      }
      bVar2 = pbVar1[1];
      if ((((bVar2 & 0xc0) == 0x80) && (uVar5 != 0xf0 || 0x8f < bVar2)) &&
         (uVar5 != 0xf4 || bVar2 < 0x90)) {
        if (lVar4 == 2) {
          return 0xfffffffe;
        }
        if ((pbVar1[2] & 0xc0) == 0x80) {
          if (lVar4 == 3) {
            return 0xfffffffe;
          }
          if ((pbVar1[3] & 0xc0) == 0x80) {
            uVar5 = (uint)bVar2 * 0x1000 + uVar5 * 0x40000 +
                    pbVar1[3] + 0xfc37df80 + (uint)pbVar1[2] * 0x40;
            if (0x10ffff < uVar5) {
              return uVar5;
            }
            *param_1 = (long)(pbVar1 + 4);
            return uVar5;
          }
        }
      }
    }
  }
  return 0xffffffff;
}



// ===== FUN_71007fe560 @ 71007fe560 (size=20) =====

void FUN_71007fe560(undefined8 *param_1)

{
  *param_1 = &DAT_7100aef838;
  FUN_71007afc60();
  return;
}



// ===== FUN_71007fe580 @ 71007fe580 (size=20) =====

void FUN_71007fe580(undefined8 *param_1)

{
  *param_1 = &DAT_7100aef890;
  FUN_71007afc60();
  return;
}



// ===== FUN_71007fe5a0 @ 71007fe5a0 (size=20) =====

void FUN_71007fe5a0(undefined8 *param_1)

{
  *param_1 = &DAT_7100aef8e8;
  FUN_71007afc60();
  return;
}



// ===== FUN_71007fe5c0 @ 71007fe5c0 (size=20) =====

void FUN_71007fe5c0(undefined8 *param_1)

{
  *param_1 = &DAT_7100aef940;
  FUN_71007afc60();
  return;
}



// ===== FUN_71007fe5e0 @ 71007fe5e0 (size=28) =====

void FUN_71007fe5e0(undefined8 param_1)

{
  FUN_71007fe560();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007fe600 @ 71007fe600 (size=28) =====

void FUN_71007fe600(undefined8 param_1)

{
  FUN_71007fe580();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007fe620 @ 71007fe620 (size=28) =====

void FUN_71007fe620(undefined8 param_1)

{
  FUN_71007fe5a0();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007fe640 @ 71007fe640 (size=28) =====

void FUN_71007fe640(undefined8 param_1)

{
  FUN_71007fe5c0();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007fe660 @ 71007fe660 (size=92) =====

int FUN_71007fe660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  bool bVar1;
  uint uVar2;
  uint extraout_w8;
  int extraout_w10;
  undefined8 local_10;
  undefined8 local_8;
  
  if (param_5 != 0) {
    param_5 = param_5 + -1;
    local_8 = param_4;
    do {
      local_10 = param_3;
      uVar2 = FUN_71007fe3c0(&local_10,0x10ffff);
      bVar1 = param_5 != 0;
      param_5 = param_5 + -1;
      param_3 = local_10;
    } while (bVar1 && uVar2 <= extraout_w8);
    return (int)local_10 - extraout_w10;
  }
  return 0;
}



// ===== FUN_71007fe6c0 @ 71007fe6c0 (size=160) =====

bool FUN_71007fe6c0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long *param_5,
                   uint *param_6,uint *param_7,undefined8 *param_8)

{
  uint uVar1;
  uint *extraout_x8;
  long extraout_x9;
  uint *extraout_x10;
  uint extraout_w12;
  long *extraout_x13;
  long local_10;
  long local_8;
  
  local_8 = param_4;
  if (param_3 != param_4) {
    do {
      if (param_7 == param_6) break;
      local_10 = param_3;
      uVar1 = FUN_71007fe3c0(&local_10,0x10ffff);
      if (uVar1 == 0xfffffffe) {
        *extraout_x13 = local_10;
        *param_8 = extraout_x8;
        return true;
      }
      if (extraout_w12 < uVar1) {
        *extraout_x13 = local_10;
        *param_8 = extraout_x8;
        return (bool)2;
      }
      param_6 = extraout_x8 + 1;
      *extraout_x8 = uVar1;
      param_3 = local_10;
      param_4 = extraout_x9;
      param_7 = extraout_x10;
      param_5 = extraout_x13;
    } while (extraout_x9 != local_10);
  }
  *param_5 = param_3;
  *param_8 = param_6;
  return param_4 != param_3;
}



// ===== FUN_71007fe760 @ 71007fe760 (size=140) =====

undefined8
FUN_71007fe760(undefined8 param_1,undefined8 param_2,uint *param_3,uint *param_4,long *param_5,
              undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  long extraout_x8;
  undefined8 uVar5;
  undefined8 extraout_x9;
  undefined8 uVar6;
  undefined8 extraout_x10;
  long *extraout_x11;
  undefined8 local_10;
  undefined8 local_8;
  
  if (param_3 != param_4) {
    uVar6 = 0xffff2800;
    uVar5 = 0x10ffff;
    local_8 = param_7;
    do {
      uVar1 = *param_3;
      bVar2 = false;
      bVar3 = true;
      if (0x7ff < uVar1 + (int)uVar6) {
        bVar3 = (uint)uVar5 <= uVar1;
        bVar2 = uVar1 == (uint)uVar5;
      }
      if (bVar3 && !bVar2) {
        uVar5 = 2;
        goto LAB_71007fe7c8;
      }
      local_10 = param_6;
      uVar4 = FUN_71007fe2a0(&local_10);
      if ((uVar4 & 1) == 0) {
        *extraout_x11 = extraout_x8;
        *param_8 = local_10;
        return 1;
      }
      param_3 = (uint *)(extraout_x8 + 4);
      param_6 = local_10;
      uVar5 = extraout_x9;
      uVar6 = extraout_x10;
      param_5 = extraout_x11;
    } while (param_4 != param_3);
  }
  uVar5 = 0;
LAB_71007fe7c8:
  *param_5 = (long)param_3;
  *param_8 = param_6;
  return uVar5;
}



// ===== FUN_71007fe800 @ 71007fe800 (size=156) =====

int FUN_71007fe800(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  uint uVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong extraout_x9;
  uint extraout_w10;
  uint extraout_w12;
  int iVar3;
  int extraout_w13;
  undefined8 uVar4;
  undefined8 local_10;
  undefined8 local_8;
  undefined8 extraout_x13;
  
  uVar2 = 1;
  local_10 = param_4;
  uVar4 = param_4;
  local_8 = param_5;
  if (1 < param_6) {
    param_1 = 0;
    do {
      local_10 = param_4;
      uVar1 = FUN_71007fe3c0(param_1,&local_10,0x10ffff);
      iVar3 = (int)extraout_x13;
      if (extraout_w10 < uVar1) goto LAB_71007fe868;
      if (uVar1 <= extraout_w12) {
        uVar2 = extraout_x8;
      }
      param_1 = uVar2 + 1;
      uVar2 = uVar2 + 2;
      param_4 = local_10;
      param_6 = extraout_x9;
      uVar4 = extraout_x13;
    } while (uVar2 < extraout_x9);
  }
  iVar3 = (int)uVar4;
  if (param_6 == uVar2) {
    FUN_71007fe3c0(param_1,&local_10,0xffff);
    return (int)local_10 - extraout_w13;
  }
LAB_71007fe868:
  return (int)local_10 - iVar3;
}



// ===== FUN_71007fe8a0 @ 71007fe8a0 (size=224) =====

undefined8
FUN_71007fe8a0(undefined8 param_1,undefined8 param_2,ushort *param_3,ushort *param_4,long *param_5,
              undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  ushort uVar1;
  ulong uVar2;
  ulong uVar3;
  ushort *extraout_x8;
  ushort *extraout_x8_00;
  ushort *extraout_x9;
  ushort *extraout_x9_00;
  undefined8 uVar4;
  undefined8 extraout_x10;
  undefined8 extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  undefined8 uVar5;
  undefined8 extraout_x12;
  undefined8 extraout_x12_00;
  undefined8 uVar6;
  undefined8 extraout_x13;
  undefined8 extraout_x13_00;
  undefined8 local_10;
  undefined8 local_8;
  
  if (param_3 != param_4) {
    uVar4 = 0xffff2800;
    uVar5 = 0xffff2400;
    uVar6 = 0xfca02400;
    local_10 = param_6;
    local_8 = param_7;
    do {
      uVar1 = *param_3;
      if ((uint)uVar1 + (int)uVar4 < 0x400) {
        if (2 < (ulong)((long)param_4 - (long)param_3)) {
          if (0x3ff < (uint)param_3[1] + (int)uVar5) goto LAB_71007fe96c;
          uVar3 = 2;
          uVar2 = FUN_71007fe2a0(&local_10,(uint)param_3[1] + (int)uVar6 + (uint)uVar1 * 0x400);
          param_3 = extraout_x8;
          param_4 = extraout_x9;
          uVar4 = extraout_x10;
          param_5 = extraout_x11;
          uVar5 = extraout_x12;
          uVar6 = extraout_x13;
          if ((uVar2 & 1) != 0) goto LAB_71007fe91c;
        }
LAB_71007fe958:
        uVar4 = 1;
        param_6 = local_10;
        goto LAB_71007fe95c;
      }
      if ((uint)uVar1 + (int)uVar5 < 0x400) {
LAB_71007fe96c:
        *param_5 = (long)param_3;
        *param_8 = local_10;
        return 2;
      }
      uVar3 = 1;
      uVar2 = FUN_71007fe2a0(&local_10);
      param_3 = extraout_x8_00;
      param_4 = extraout_x9_00;
      uVar4 = extraout_x10_00;
      param_5 = extraout_x11_00;
      uVar5 = extraout_x12_00;
      uVar6 = extraout_x13_00;
      if ((uVar2 & 1) == 0) goto LAB_71007fe958;
LAB_71007fe91c:
      param_3 = param_3 + (uVar3 & 3);
      param_6 = local_10;
    } while (param_4 != param_3);
  }
  uVar4 = 0;
LAB_71007fe95c:
  *param_5 = (long)param_3;
  *param_8 = param_6;
  return uVar4;
}



// ===== FUN_71007fe980 @ 71007fe980 (size=216) =====

undefined8 FUN_71007fe980(long *param_1,long *param_2,ulong param_3,uint param_4,int param_5)

{
  ushort *puVar1;
  undefined2 *puVar2;
  ushort uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long *extraout_x8;
  ulong extraout_x9;
  int extraout_w10;
  int extraout_w11;
  int extraout_w12;
  
  if ((param_4 >> 1 & 1) != 0) {
    puVar2 = (undefined2 *)*param_2;
    if ((ulong)(param_2[1] - (long)puVar2) < 3) {
      return 1;
    }
    *puVar2 = 0xbbef;
    *(undefined1 *)(puVar2 + 1) = 0xbf;
    *param_2 = *param_2 + 3;
  }
  puVar1 = (ushort *)*param_1;
  if (puVar1 == (ushort *)param_1[1]) {
    return 0;
  }
  uVar3 = *puVar1;
  uVar5 = (ulong)uVar3;
  if (uVar3 - 0xd800 < 0x400) {
    if (param_5 == 1) {
      return 2;
    }
    if ((ulong)(param_1[1] - (long)puVar1) < 3) {
      return 1;
    }
    if (0x3ff < puVar1[1] - 0xdc00) {
      return 2;
    }
    uVar6 = 2;
    uVar5 = (ulong)(puVar1[1] + 0xfca02400 + (uint)uVar3 * 0x400);
  }
  else {
    if (uVar3 - 0xdc00 < 0x400) {
      return 2;
    }
    uVar6 = 1;
  }
  if (param_3 < uVar5) {
    return 2;
  }
  do {
    uVar5 = FUN_71007fdfc0(param_2);
    if ((uVar5 & 1) == 0) {
      return 1;
    }
    puVar1 = (ushort *)(*param_1 + (uVar6 & 3) * 2);
    *param_1 = (long)puVar1;
    if (puVar1 == (ushort *)param_1[1]) {
      return 0;
    }
    uVar4 = (uint)*puVar1;
    if (uVar4 + extraout_w10 < 0x400) {
      if (param_5 == 1) {
        return 2;
      }
      if ((ulong)(param_1[1] - (long)puVar1) < 3) {
        return 1;
      }
      if (0x3ff < (uint)puVar1[1] + extraout_w11) {
        return 2;
      }
      uVar6 = 2;
      uVar4 = (uint)puVar1[1] + extraout_w12 + uVar4 * 0x400;
    }
    else {
      if (uVar4 + extraout_w11 < 0x400) {
        return 2;
      }
      uVar6 = 1;
    }
    param_2 = extraout_x8;
    if (extraout_x9 < uVar4) {
      return 2;
    }
  } while( true );
}



// ===== FUN_71007fe9d4 @ 71007fe9d4 (size=176) =====

undefined8 FUN_71007fe9d4(undefined8 param_1)

{
  ushort *puVar1;
  ulong uVar2;
  uint uVar3;
  int in_w4;
  long *in_x5;
  ulong in_x7;
  undefined8 extraout_x8;
  ulong extraout_x9;
  int extraout_w10;
  int extraout_w11;
  int extraout_w12;
  
  do {
    uVar2 = FUN_71007fdfc0(param_1);
    if ((uVar2 & 1) == 0) {
      return 1;
    }
    puVar1 = (ushort *)(*in_x5 + (in_x7 & 3) * 2);
    *in_x5 = (long)puVar1;
    if (puVar1 == (ushort *)in_x5[1]) {
      return 0;
    }
    uVar3 = (uint)*puVar1;
    if (uVar3 + extraout_w10 < 0x400) {
      if (in_w4 == 1) {
        return 2;
      }
      if ((ulong)(in_x5[1] - (long)puVar1) < 3) {
        return 1;
      }
      if (0x3ff < (uint)puVar1[1] + extraout_w11) {
        return 2;
      }
      in_x7 = 2;
      uVar3 = (uint)puVar1[1] + extraout_w12 + uVar3 * 0x400;
    }
    else {
      if (uVar3 + extraout_w11 < 0x400) {
        return 2;
      }
      in_x7 = 1;
    }
    param_1 = extraout_x8;
    if (extraout_x9 < uVar3) {
      return 2;
    }
  } while( true );
}



// ===== FUN_71007feb20 @ 71007feb20 (size=72) =====

void FUN_71007feb20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *extraout_x13;
  undefined8 *extraout_x14;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_20 = param_3;
  uStack_18 = param_4;
  local_10 = param_6;
  uStack_8 = param_7;
  FUN_71007fe980(&local_20,&local_10,0x10ffff,0,0);
  *extraout_x14 = local_20;
  *extraout_x13 = local_10;
  return;
}



// ===== FUN_71007feb80 @ 71007feb80 (size=116) =====

bool FUN_71007feb80(long *param_1,long *param_2,ulong param_3,uint param_4)

{
  short *psVar1;
  uint uVar2;
  ulong extraout_x1;
  long *extraout_x8;
  ushort *extraout_x9;
  short *psVar3;
  long extraout_x10;
  long *extraout_x11;
  long extraout_x12;
  long extraout_x13;
  uint extraout_w14;
  
  psVar3 = (short *)*param_1;
  psVar1 = (short *)param_1[1];
  if (((((param_4 >> 2 & 1) != 0) && (2 < (ulong)((long)psVar1 - (long)psVar3))) &&
      (*psVar3 == -0x4411)) && ((char)psVar3[1] == -0x41)) {
    psVar3 = (short *)((long)psVar3 + 3);
    *param_1 = (long)psVar3;
  }
  if (psVar3 == psVar1) {
    return false;
  }
  if (*param_2 == param_2[1]) {
    return psVar3 != psVar1;
  }
  while( true ) {
    uVar2 = FUN_71007fe0e0(param_1,param_3);
    if (uVar2 == 0xfffffffe) {
      return true;
    }
    if (extraout_x1 < uVar2) {
      return (bool)2;
    }
    if (extraout_w14 < uVar2) {
      if ((ulong)(extraout_x12 - (long)extraout_x9) < 3) {
        *extraout_x8 = extraout_x10;
        extraout_x8[1] = extraout_x13;
        return true;
      }
      *extraout_x9 = (short)(uVar2 >> 10) + 0xd7c0;
      *extraout_x11 = (long)(extraout_x9 + 2);
      extraout_x9[1] = ((ushort)uVar2 & 0x3ff) + 0xdc00;
    }
    else {
      *extraout_x11 = (long)(extraout_x9 + 1);
      *extraout_x9 = (ushort)uVar2;
    }
    if (*extraout_x8 == extraout_x13) break;
    param_3 = extraout_x1;
    param_1 = extraout_x8;
    if (*extraout_x11 == extraout_x12) {
      return *extraout_x8 != extraout_x13;
    }
  }
  return false;
}



// ===== FUN_71007febac @ 71007febac (size=176) =====

bool FUN_71007febac(long *param_1)

{
  uint uVar1;
  ulong extraout_x1;
  long *extraout_x8;
  ushort *extraout_x9;
  long extraout_x10;
  long *extraout_x11;
  long extraout_x12;
  long extraout_x13;
  uint extraout_w14;
  
  while( true ) {
    uVar1 = FUN_71007fe0e0(param_1);
    if (uVar1 == 0xfffffffe) {
      return true;
    }
    if (extraout_x1 < uVar1) {
      return (bool)2;
    }
    if (extraout_w14 < uVar1) {
      if ((ulong)(extraout_x12 - (long)extraout_x9) < 3) {
        *extraout_x8 = extraout_x10;
        extraout_x8[1] = extraout_x13;
        return true;
      }
      *extraout_x9 = (short)(uVar1 >> 10) + 0xd7c0;
      *extraout_x11 = (long)(extraout_x9 + 2);
      extraout_x9[1] = ((ushort)uVar1 & 0x3ff) + 0xdc00;
    }
    else {
      *extraout_x11 = (long)(extraout_x9 + 1);
      *extraout_x9 = (ushort)uVar1;
    }
    if (*extraout_x8 == extraout_x13) break;
    param_1 = extraout_x8;
    if (*extraout_x11 == extraout_x12) {
      return *extraout_x8 != extraout_x13;
    }
  }
  return false;
}



// ===== FUN_71007fecc0 @ 71007fecc0 (size=68) =====

void FUN_71007fecc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *extraout_x15;
  undefined8 *extraout_x18;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_20 = param_3;
  uStack_18 = param_4;
  local_10 = param_6;
  uStack_8 = param_7;
  FUN_71007feb80(&local_20,&local_10,0x10ffff,1);
  *extraout_x18 = local_20;
  *extraout_x15 = local_10;
  return;
}



// ===== FUN_71007fed20 @ 71007fed20 (size=248) =====

bool FUN_71007fed20(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long *param_5,
                   ushort *param_6,ushort *param_7,undefined8 *param_8)

{
  long lVar1;
  undefined1 uVar2;
  uint uVar3;
  ushort *extraout_x8;
  long extraout_x9;
  long extraout_x10;
  ushort *extraout_x11;
  uint extraout_w13;
  uint extraout_w14;
  long *extraout_x15;
  long local_10;
  long local_8;
  
  if ((param_3 != param_4) && (local_8 = param_4, param_7 != param_6)) {
    do {
      local_10 = param_3;
      uVar3 = FUN_71007fe3c0(&local_10,0x10ffff);
      lVar1 = local_10;
      if (uVar3 == 0xfffffffe) {
LAB_71007fedc0:
        local_10 = lVar1;
        uVar2 = 1;
LAB_71007fedc4:
        *extraout_x15 = local_10;
        *param_8 = extraout_x8;
        return (bool)uVar2;
      }
      if (extraout_w13 < uVar3) {
        uVar2 = 2;
        goto LAB_71007fedc4;
      }
      if (extraout_w14 < uVar3) {
        lVar1 = extraout_x9;
        if ((ulong)((long)extraout_x11 - (long)extraout_x8) < 3) goto LAB_71007fedc0;
        param_6 = extraout_x8 + 2;
        *extraout_x8 = (short)(uVar3 >> 10) + 0xd7c0;
        extraout_x8[1] = ((ushort)uVar3 & 0x3ff) + 0xdc00;
      }
      else {
        param_6 = extraout_x8 + 1;
        *extraout_x8 = (ushort)uVar3;
      }
      param_3 = extraout_x10;
      param_4 = extraout_x10;
      param_5 = extraout_x15;
    } while ((extraout_x10 != local_10) && (param_3 = local_10, extraout_x11 != param_6));
  }
  *param_5 = param_3;
  *param_8 = param_6;
  return param_4 != param_3;
}



// ===== FUN_71007fee20 @ 71007fee20 (size=92) =====

int FUN_71007fee20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  uint uVar1;
  uint extraout_w1;
  long extraout_x8;
  int extraout_w10;
  undefined8 local_10;
  undefined8 local_8;
  
  if (param_5 != 0) {
    param_5 = param_5 + -1;
    local_8 = param_4;
    do {
      local_10 = param_3;
      uVar1 = FUN_71007fe0e0(param_5,&local_10,0x10ffff);
      param_5 = extraout_x8 + -1;
      param_3 = local_10;
    } while (extraout_x8 != 0 && uVar1 <= extraout_w1);
    return (int)local_10 - extraout_w10;
  }
  return 0;
}



// ===== FUN_71007fee80 @ 71007fee80 (size=164) =====

bool FUN_71007fee80(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long *param_5,
                   uint *param_6,uint *param_7,undefined8 *param_8)

{
  uint uVar1;
  uint *extraout_x8;
  long extraout_x9;
  uint *extraout_x10;
  uint extraout_w12;
  undefined8 *extraout_x13;
  long *extraout_x14;
  long local_10;
  long local_8;
  
  local_8 = param_4;
  if (param_3 != param_4) {
    do {
      if (param_7 == param_6) break;
      local_10 = param_3;
      uVar1 = FUN_71007fe0e0(&local_10,0x10ffff);
      if (uVar1 == 0xfffffffe) {
        *extraout_x14 = local_10;
        *extraout_x13 = extraout_x8;
        return true;
      }
      if (extraout_w12 < uVar1) {
        *extraout_x14 = local_10;
        *extraout_x13 = extraout_x8;
        return (bool)2;
      }
      param_6 = extraout_x8 + 1;
      *extraout_x8 = uVar1;
      param_3 = local_10;
      param_4 = extraout_x9;
      param_7 = extraout_x10;
      param_8 = extraout_x13;
      param_5 = extraout_x14;
    } while (extraout_x9 != local_10);
  }
  *param_5 = param_3;
  *param_8 = param_6;
  return param_4 != param_3;
}



// ===== FUN_71007fef40 @ 71007fef40 (size=136) =====

undefined8
FUN_71007fef40(undefined8 param_1,undefined8 param_2,uint *param_3,uint *param_4,long *param_5,
              undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  long extraout_x8;
  undefined8 uVar5;
  undefined8 extraout_x9;
  undefined8 uVar6;
  undefined8 extraout_x10;
  undefined8 local_10;
  undefined8 local_8;
  
  if (param_3 != param_4) {
    uVar6 = 0xffff2800;
    uVar5 = 0x10ffff;
    local_8 = param_7;
    do {
      uVar1 = *param_3;
      bVar2 = false;
      bVar3 = true;
      if (0x7ff < uVar1 + (int)uVar6) {
        bVar3 = (uint)uVar5 <= uVar1;
        bVar2 = uVar1 == (uint)uVar5;
      }
      if (bVar3 && !bVar2) {
        uVar5 = 2;
        goto LAB_71007fefa4;
      }
      local_10 = param_6;
      uVar4 = FUN_71007fdfc0(&local_10);
      if ((uVar4 & 1) == 0) {
        *param_5 = extraout_x8;
        *param_8 = local_10;
        return 1;
      }
      param_3 = (uint *)(extraout_x8 + 4);
      param_6 = local_10;
      uVar5 = extraout_x9;
      uVar6 = extraout_x10;
    } while (param_4 != param_3);
  }
  uVar5 = 0;
LAB_71007fefa4:
  *param_5 = (long)param_3;
  *param_8 = param_6;
  return uVar5;
}



// ===== FUN_71007fefe0 @ 71007fefe0 (size=148) =====

int FUN_71007fefe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  long lVar1;
  uint uVar2;
  uint extraout_w1;
  ulong uVar3;
  long extraout_x8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w12;
  int iVar4;
  int extraout_w13;
  undefined8 local_10;
  undefined8 local_8;
  undefined8 extraout_x13;
  
  uVar3 = 1;
  local_10 = param_3;
  local_8 = param_4;
  if (1 < param_5) {
    do {
      uVar2 = FUN_71007fe0e0(&local_10,0x10ffff);
      iVar4 = (int)extraout_x13;
      if (extraout_w1 < uVar2) goto LAB_71007ff040;
      lVar1 = extraout_x8;
      if (uVar2 <= extraout_w12) {
        lVar1 = extraout_x9;
      }
      uVar3 = lVar1 + 2;
      param_5 = extraout_x10;
      param_3 = extraout_x13;
    } while (uVar3 < extraout_x10);
  }
  iVar4 = (int)param_3;
  if (param_5 == uVar3) {
    FUN_71007fe0e0(&local_10,0xffff);
    return (int)local_10 - extraout_w13;
  }
LAB_71007ff040:
  return (int)local_10 - iVar4;
}



// ===== FUN_71007ff080 @ 71007ff080 (size=1508) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71007ff080(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  _DAT_7100d22a08 = 1;
  uVar11 = param_2[2];
  _DAT_7100d22a00 = &PTR_FUN_7100aee3b0;
  _DAT_7100d22a10 = uVar1;
  FUN_71007fd4c0(&DAT_7100d22a00,0);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(0x7100d22a08,0x10);
    if (bVar6) {
      cVar5 = ExclusiveMonitorsStatus();
      _DAT_7100d22a08 = _DAT_7100d22a08 + 1;
    }
  } while (cVar5 != '\0');
  lVar10 = *(long *)(param_1 + 8);
  lVar7 = FUN_71007b00e0(&DAT_7100d212b0);
  *(undefined1 **)(lVar10 + lVar7 * 8) = &DAT_7100d22a00;
  _DAT_7100d22a28 = 1;
  _DAT_7100d22a20 = &PTR_FUN_7100aee378;
  _DAT_7100d22a30 = FUN_71007afd60();
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(0x7100d22a28,0x10);
    if (bVar6) {
      cVar5 = ExclusiveMonitorsStatus();
      _DAT_7100d22a28 = _DAT_7100d22a28 + 1;
    }
  } while (cVar5 != '\0');
  lVar10 = *(long *)(param_1 + 8);
  lVar7 = FUN_71007b00e0(&DAT_7100d21288);
  *(undefined1 **)(lVar10 + lVar7 * 8) = &DAT_7100d22a20;
  _DAT_7100d229c8 = 1;
  _DAT_7100d229c0 = &PTR_FUN_7100aee578;
  _DAT_7100d229d0 = uVar3;
  FUN_71007fcac0(&DAT_7100d229c0,0,0);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(0x7100d229c8,0x10);
    if (bVar6) {
      cVar5 = ExclusiveMonitorsStatus();
      _DAT_7100d229c8 = _DAT_7100d229c8 + 1;
    }
  } while (cVar5 != '\0');
  lVar10 = *(long *)(param_1 + 8);
  lVar7 = FUN_71007b00e0(&DAT_7100d212c0);
  *(undefined1 **)(lVar10 + lVar7 * 8) = &DAT_7100d229c0;
  _DAT_7100d229e8 = 1;
  _DAT_7100d229e0 = &PTR_FUN_7100aee510;
  _DAT_7100d229f0 = uVar11;
  FUN_71007fc9e0(&DAT_7100d229e0,0,0);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(0x7100d229e8,0x10);
    if (bVar6) {
      cVar5 = ExclusiveMonitorsStatus();
      _DAT_7100d229e8 = _DAT_7100d229e8 + 1;
    }
  } while (cVar5 != '\0');
  lVar10 = *(long *)(param_1 + 8);
  lVar7 = FUN_71007b00e0(&DAT_7100d212b8);
  *(undefined1 **)(lVar10 + lVar7 * 8) = &DAT_7100d229e0;
  _DAT_7100d229b8 = 1;
  _DAT_7100d229b0 = &PTR_LAB_7100aee670;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(0x7100d229b8,0x10);
    if (bVar6) {
      cVar5 = ExclusiveMonitorsStatus();
      _DAT_7100d229b8 = _DAT_7100d229b8 + 1;
    }
  } while (cVar5 != '\0');
  lVar10 = *(long *)(param_1 + 8);
  lVar7 = FUN_71007b00e0(&DAT_7100d212d0);
  *(undefined1 **)(lVar10 + lVar7 * 8) = &DAT_7100d229b0;
  _DAT_7100d229a8 = 1;
  _DAT_7100d229a0 = &PTR_LAB_7100aee6a0;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(0x7100d229a8,0x10);
    if (bVar6) {
      cVar5 = ExclusiveMonitorsStatus();
      _DAT_7100d229a8 = _DAT_7100d229a8 + 1;
    }
  } while (cVar5 != '\0');
  lVar10 = *(long *)(param_1 + 8);
  lVar7 = FUN_71007b00e0(&DAT_7100d212c8);
  *(undefined1 **)(lVar10 + lVar7 * 8) = &DAT_7100d229a0;
  _DAT_7100d22998 = 1;
  _DAT_7100d22990 = &PTR_LAB_7100aee6f8;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(0x7100d22998,0x10);
    if (bVar6) {
      cVar5 = ExclusiveMonitorsStatus();
      _DAT_7100d22998 = _DAT_7100d22998 + 1;
    }
  } while (cVar5 != '\0');
  lVar10 = *(long *)(param_1 + 8);
  lVar7 = FUN_71007b00e0(&DAT_7100d21298);
  *(undefined1 **)(lVar10 + lVar7 * 8) = &DAT_7100d22990;
  FUN_71007d35c0(0x7100d22970,1);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(0x7100d22978,0x10);
    if (bVar6) {
      cVar5 = ExclusiveMonitorsStatus();
      _DAT_7100d22978 = _DAT_7100d22978 + 1;
    }
  } while (cVar5 != '\0');
  lVar10 = *(long *)(param_1 + 8);
  lVar7 = FUN_71007b00e0(&DAT_7100d21290);
  *(undefined8 *)(lVar10 + lVar7 * 8) = 0x7100d22970;
  uVar2 = param_2[3];
  uVar4 = param_2[4];
  _DAT_7100d22930 = &PTR_FUN_7100aeef38;
  uVar9 = param_2[5];
  _DAT_7100d22938 = 1;
  _DAT_7100d22940 = uVar2;
  FUN_71007fd6e0(&DAT_7100d22930,0);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(0x7100d22938,0x10);
    if (bVar6) {
      cVar5 = ExclusiveMonitorsStatus();
      _DAT_7100d22938 = _DAT_7100d22938 + 1;
    }
  } while (cVar5 != '\0');
  lVar10 = *(long *)(param_1 + 8);
  lVar7 = FUN_71007b00e0(&DAT_7100d22838);
  *(undefined1 **)(lVar10 + lVar7 * 8) = &DAT_7100d22930;
  _DAT_7100d22958 = 1;
  _DAT_7100d22950 = &PTR_FUN_7100aeee80;
  _DAT_7100d22960 = FUN_71007afd60();
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(0x7100d22958,0x10);
    if (bVar6) {
      cVar5 = ExclusiveMonitorsStatus();
      _DAT_7100d22958 = _DAT_7100d22958 + 1;
    }
  } while (cVar5 != '\0');
  lVar10 = *(long *)(param_1 + 8);
  lVar7 = FUN_71007b00e0(&DAT_7100d22810);
  *(undefined1 **)(lVar10 + lVar7 * 8) = &DAT_7100d22950;
  _DAT_7100d228f8 = 1;
  _DAT_7100d228f0 = &PTR_FUN_7100aef100;
  _DAT_7100d22900 = uVar4;
  FUN_71007fce80(&DAT_7100d228f0,0,0);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(0x7100d228f8,0x10);
    if (bVar6) {
      cVar5 = ExclusiveMonitorsStatus();
      _DAT_7100d228f8 = _DAT_7100d228f8 + 1;
    }
  } while (cVar5 != '\0');
  lVar10 = *(long *)(param_1 + 8);
  lVar7 = FUN_71007b00e0(&DAT_7100d22848);
  *(undefined1 **)(lVar10 + lVar7 * 8) = &DAT_7100d228f0;
  _DAT_7100d22918 = 1;
  _DAT_7100d22910 = &PTR_FUN_7100aef098;
  _DAT_7100d22920 = uVar9;
  FUN_71007fcda0(&DAT_7100d22910,0,0);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(0x7100d22918,0x10);
    if (bVar6) {
      cVar5 = ExclusiveMonitorsStatus();
      _DAT_7100d22918 = _DAT_7100d22918 + 1;
    }
  } while (cVar5 != '\0');
  lVar10 = *(long *)(param_1 + 8);
  lVar7 = FUN_71007b00e0(&DAT_7100d22840);
  *(undefined1 **)(lVar10 + lVar7 * 8) = &DAT_7100d22910;
  _DAT_7100d228e8 = 1;
  _DAT_7100d228e0 = &PTR_LAB_7100aef1f8;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(0x7100d228e8,0x10);
    if (bVar6) {
      cVar5 = ExclusiveMonitorsStatus();
      _DAT_7100d228e8 = _DAT_7100d228e8 + 1;
    }
  } while (cVar5 != '\0');
  lVar10 = *(long *)(param_1 + 8);
  lVar7 = FUN_71007b00e0(&DAT_7100d22858);
  *(undefined1 **)(lVar10 + lVar7 * 8) = &DAT_7100d228e0;
  _DAT_7100d228d8 = 1;
  _DAT_7100d228d0 = &PTR_LAB_7100aef228;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(0x7100d228d8,0x10);
    if (bVar6) {
      cVar5 = ExclusiveMonitorsStatus();
      _DAT_7100d228d8 = _DAT_7100d228d8 + 1;
    }
  } while (cVar5 != '\0');
  lVar10 = *(long *)(param_1 + 8);
  lVar7 = FUN_71007b00e0(&DAT_7100d22850);
  *(undefined1 **)(lVar10 + lVar7 * 8) = &DAT_7100d228d0;
  _DAT_7100d228c8 = 1;
  _DAT_7100d228c0 = &PTR_LAB_7100aef280;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(0x7100d228c8,0x10);
    if (bVar6) {
      cVar5 = ExclusiveMonitorsStatus();
      _DAT_7100d228c8 = _DAT_7100d228c8 + 1;
    }
  } while (cVar5 != '\0');
  lVar10 = *(long *)(param_1 + 8);
  lVar7 = FUN_71007b00e0(&DAT_7100d22820);
  *(undefined1 **)(lVar10 + lVar7 * 8) = &DAT_7100d228c0;
  FUN_71007e6600(0x7100d228a0,1);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(0x7100d228a8,0x10);
    if (bVar6) {
      cVar5 = ExclusiveMonitorsStatus();
      _DAT_7100d228a8 = _DAT_7100d228a8 + 1;
    }
  } while (cVar5 != '\0');
  lVar10 = *(long *)(param_1 + 8);
  lVar7 = FUN_71007b00e0(&DAT_7100d22818);
  *(undefined8 *)(lVar10 + lVar7 * 8) = 0x7100d228a0;
  lVar10 = *(long *)(param_1 + 0x18);
  lVar7 = FUN_71007b00e0(&DAT_7100d212b0);
  *(undefined8 *)(lVar10 + lVar7 * 8) = uVar1;
  lVar10 = *(long *)(param_1 + 0x18);
  lVar7 = FUN_71007b00e0(&DAT_7100d212c0);
  *(undefined8 *)(lVar10 + lVar7 * 8) = uVar3;
  lVar10 = *(long *)(param_1 + 0x18);
  lVar7 = FUN_71007b00e0(&DAT_7100d212b8);
  *(undefined8 *)(lVar10 + lVar7 * 8) = uVar11;
  lVar10 = *(long *)(param_1 + 0x18);
  lVar7 = FUN_71007b00e0(&DAT_7100d22838);
  *(undefined8 *)(lVar10 + lVar7 * 8) = uVar2;
  lVar8 = *(long *)(param_1 + 0x18);
  lVar7 = FUN_71007b00e0(&DAT_7100d22848);
  lVar10 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(lVar8 + lVar7 * 8) = uVar4;
  lVar7 = FUN_71007b00e0(&DAT_7100d22840);
  *(undefined8 *)(lVar10 + lVar7 * 8) = uVar9;
  return;
}



// ===== FUN_71007ff720 @ 71007ff720 (size=20) =====

void FUN_71007ff720(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aefb50;
  FUN_71007e3540();
  return;
}



// ===== FUN_71007ff740 @ 71007ff740 (size=28) =====

void FUN_71007ff740(undefined8 param_1)

{
  FUN_71007ff720();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007ff780 @ 71007ff780 (size=20) =====

void FUN_71007ff780(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aefba0;
  FUN_71007af840();
  return;
}



// ===== FUN_71007ff7a0 @ 71007ff7a0 (size=28) =====

void FUN_71007ff7a0(undefined8 param_1)

{
  FUN_71007ff780();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007ff7c0 @ 71007ff7c0 (size=76) =====

void FUN_71007ff7c0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_71007fff00(param_2);
  if ((uVar1 & 1) != 0) {
    *param_3 = *param_3 + 0x20;
    return;
  }
  FUN_71007ad8c0(param_1,param_2);
  return;
}



// ===== FUN_71007ff820 @ 71007ff820 (size=52) =====

void FUN_71007ff820(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aefb78;
  FUN_71007ffe60(param_1 + 4);
  FUN_71007ff720(param_1);
  return;
}



// ===== FUN_71007ff860 @ 71007ff860 (size=60) =====

void FUN_71007ff860(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aefb78;
  FUN_71007ffe60(param_1 + 4);
  FUN_71007ff720(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007ff8a0 @ 71007ff8a0 (size=400) =====

void FUN_71007ff8a0(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined1 *local_60 [2];
  undefined1 auStack_50 [16];
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 *local_20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  plVar4 = *(long **)(param_3 + 2);
  uVar1 = *param_3;
  (**(code **)(*plVar4 + 0x20))(local_60,plVar4,uVar1);
  puVar2 = (undefined8 *)FUN_71007e28e0(local_60,0,0,": ",2);
  puVar5 = puVar2 + 2;
  local_40 = (undefined8 *)*puVar2;
  if (local_40 == puVar5) {
    local_40 = local_30;
    FUN_710080f900(local_30,puVar5,puVar2[1] + 1);
  }
  else {
    local_30[0] = puVar2[2];
  }
  local_38 = puVar2[1];
  *puVar2 = puVar5;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 2) = 0;
  uVar3 = FUN_710081ce00(param_2);
  puVar2 = (undefined8 *)FUN_71007e28e0(&local_40,0,0,param_2,uVar3);
  puVar5 = puVar2 + 2;
  local_20 = (undefined8 *)*puVar2;
  if (local_20 == puVar5) {
    local_20 = local_10;
    FUN_710080f900(local_10,puVar5,puVar2[1] + 1);
  }
  else {
    local_10[0] = puVar2[2];
  }
  local_18 = puVar2[1];
  *puVar2 = puVar5;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 2) = 0;
  FUN_71007c5bc0(param_1,&local_20);
  if (local_20 != local_10) {
    thunk_FUN_710081c200();
  }
  if (local_40 != local_30) {
    thunk_FUN_710081c200();
  }
  if (local_60[0] != auStack_50) {
    thunk_FUN_710081c200();
  }
  *(undefined4 *)(param_1 + 2) = uVar1;
  param_1[3] = plVar4;
  *param_1 = &PTR_FUN_7100aefb50;
  return;
}



// ===== FUN_71007ffac0 @ 71007ffac0 (size=48) =====

void FUN_71007ffac0(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_7100aefc10;
  FUN_71007e36c0();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007ffb00 @ 71007ffb00 (size=124) =====

long * FUN_71007ffb00(long *param_1,undefined8 param_2,int param_3)

{
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (param_3 != 1) {
    FUN_71007e28e0(param_1,0,0,"Unknown error",0xd);
    return param_1;
  }
  FUN_71007e28e0(param_1,0,0,"iostream error",0xe);
  return param_1;
}



// ===== FUN_71007ffba0 @ 71007ffba0 (size=12) =====

undefined ** FUN_71007ffba0(void)

{
  return &PTR_PTR_LAB_7100af4888;
}



// ===== FUN_71007ffbe0 @ 71007ffbe0 (size=116) =====

void FUN_71007ffbe0(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined1 auStack_8 [8];
  
  *param_1 = &PTR_FUN_7100aefc78;
  puVar4 = (undefined1 *)(param_1[1] + -0x18);
  if (puVar4 != &DAT_7100d210d8) {
    piVar5 = (int *)(param_1[1] + -8);
    do {
      iVar1 = *piVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
      thunk_FUN_710081c200(puVar4,auStack_8);
      FUN_71007ae160(param_1);
      return;
    }
  }
  FUN_71007ae160(param_1);
  return;
}



// ===== FUN_71007ffc60 @ 71007ffc60 (size=28) =====

void FUN_71007ffc60(undefined8 param_1)

{
  FUN_71007ffbe0();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007ffc80 @ 71007ffc80 (size=136) =====

void FUN_71007ffc80(undefined8 *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  undefined1 auStack_8 [8];
  
  lVar4 = *param_2;
  piVar5 = (int *)(lVar4 + -8);
  *param_1 = &PTR_FUN_7100aefc78;
  if (*piVar5 < 0) {
    uVar3 = FUN_71007b6e00((undefined1 *)(lVar4 + -0x18),auStack_8,0);
    param_1[1] = uVar3;
    return;
  }
  if ((undefined1 *)(lVar4 + -0x18) != &DAT_7100d210d8) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_1[1] = lVar4;
  return;
}



// ===== FUN_71007ffd40 @ 71007ffd40 (size=284) =====

void FUN_71007ffd40(undefined8 param_1,undefined1 *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long *local_8;
  
  if (param_2 != (undefined1 *)0x0) {
    lVar3 = FUN_710081ce00(param_2);
    if (lVar3 == 0) {
      local_8 = (long *)&DAT_7100d210f0;
      FUN_71007ffc80(param_1,&local_8);
    }
    else {
      plVar4 = (long *)FUN_71007b6800(lVar3,0,auStack_18);
      local_8 = plVar4 + 3;
      if (lVar3 == 1) {
        *(undefined1 *)(plVar4 + 3) = *param_2;
      }
      else {
        local_8 = (long *)FUN_710080f900(local_8,param_2,lVar3);
      }
      if (plVar4 != (long *)&DAT_7100d210d8) {
        *plVar4 = lVar3;
        *(undefined4 *)(plVar4 + 2) = 0;
        *(undefined1 *)((long)plVar4 + lVar3 + 0x18) = 0;
      }
      FUN_71007ffc80(param_1,&local_8);
    }
    if (local_8 + -3 != (long *)&DAT_7100d210d8) {
      plVar4 = local_8 + -1;
      do {
        lVar3 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *(int *)plVar4 = (int)lVar3 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((int)lVar3 < 1) {
        thunk_FUN_710081c200(local_8 + -3,auStack_10);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string::_S_construct null not valid");
}



// ===== FUN_71007ffe60 @ 71007ffe60 (size=148) =====

void FUN_71007ffe60(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined1 auStack_8 [8];
  
  if (*(code **)*param_1 != FUN_71007ffbe0) {
                    /* WARNING: Could not recover jumptable at 0x0071007ffeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)();
    return;
  }
  *param_1 = &PTR_FUN_7100aefc78;
  puVar4 = (undefined1 *)(param_1[1] + -0x18);
  if (puVar4 != &DAT_7100d210d8) {
    piVar5 = (int *)(param_1[1] + -8);
    do {
      iVar1 = *piVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
      thunk_FUN_710081c200(puVar4,auStack_8);
      FUN_71007ae160(param_1);
      return;
    }
  }
  FUN_71007ae160(param_1);
  return;
}



// ===== FUN_71007fff00 @ 71007fff00 (size=48) =====

bool FUN_71007fff00(long param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*(char **)(param_1 + 8) == "NSt8ios_base7failureE") {
    bVar2 = true;
  }
  else {
    bVar2 = false;
    if (**(char **)(param_1 + 8) != '*') {
      iVar1 = FUN_710080aec0();
      return iVar1 == 0;
    }
  }
  return bVar2;
}



// ===== FUN_71007fff24 @ 71007fff24 (size=32) =====

bool FUN_71007fff24(void)

{
  int iVar1;
  
  iVar1 = FUN_710080aec0();
  return iVar1 == 0;
}



// ===== FUN_71007fff60 @ 71007fff60 (size=84) =====

undefined1  [16] FUN_71007fff60(double param_1,double param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined1 auVar3 [16];
  
  auVar3 = FUN_71008005a0();
  bVar1 = true;
  if ((param_2 == 0.0) && (bVar1 = true, !NAN(param_1) && !NAN(param_2))) {
    bVar1 = false;
  }
  if (bVar1) {
    return auVar3;
  }
  puVar2 = (undefined4 *)FUN_710080e8e0();
  *puVar2 = 0x21;
  return ZEXT816(0xfff8000000000000);
}



// ===== FUN_71007fffc0 @ 71007fffc0 (size=120) =====

undefined1  [16] FUN_71007fffc0(double param_1)

{
  undefined4 *puVar1;
  undefined1 auVar2 [16];
  
  auVar2 = FUN_71008004a0();
  if (0.0 < param_1) {
    return auVar2;
  }
  if (param_1 == 0.0) {
    puVar1 = (undefined4 *)FUN_710080e8e0();
    *puVar1 = 0x22;
    return ZEXT816(0xfff0000000000000);
  }
  puVar1 = (undefined4 *)FUN_710080e8e0();
  *puVar1 = 0x21;
  auVar2 = FUN_7100800c80(&DAT_7100853d20);
  return auVar2;
}



// ===== FUN_7100800040 @ 7100800040 (size=988) =====

/* WARNING: Removing unreachable block (ram,0x0071008002e8) */

float FUN_7100800040(float param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  float fVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  float fVar13;
  undefined8 uVar14;
  
  iVar2 = (int)param_2 * 2;
  fVar8 = param_1;
  if ((int)param_1 - 0x800000U < 0x7f000000) {
    lVar5 = 0;
    if (0xfefffffe < iVar2 - 1U) {
      if (iVar2 == 0) {
LAB_7100800348:
        if (((uint)param_1 ^ 0x400000) * 2 < 0xff800001) {
          return 1.0;
        }
        return param_1 + param_2;
      }
      if (param_1 == 1.0) {
        if (((uint)param_2 ^ 0x400000) * 2 < 0xff800001) {
          return 1.0;
        }
      }
      else if (iVar2 == -0x1000000) goto LAB_71008002b4;
LAB_7100800204:
      return param_1 + param_2;
    }
  }
  else {
    if (0xfefffffe < iVar2 - 1U) {
      if (iVar2 == 0) goto LAB_7100800348;
      if ((uint)((int)param_1 << 1) < 0xff000001 && iVar2 == -0x1000000) {
        if ((int)param_1 << 1 == 0x7f000000) {
          return 1.0;
        }
LAB_71008002b4:
        if ((uint)(0x7effffff < (uint)((int)param_1 << 1)) != -((int)~(uint)param_2 >> 0x1f)) {
          return 0.0;
        }
        return param_2 * param_2;
      }
      goto LAB_7100800204;
    }
    if (0xfefffffe < (int)param_1 * 2 - 1U) {
      fVar13 = param_1 * param_1;
      bVar3 = false;
      fVar8 = fVar13;
      if ((((int)param_1 < 0) && (uVar1 = (uint)param_2 >> 0x17 & 0xff, uVar1 - 0x7f < 0x18)) &&
         (uVar1 = 1 << (ulong)(0x96 - uVar1 & 0x1f), (uVar1 - 1 & (uint)param_2) == 0)) {
        fVar8 = -fVar13;
        bVar3 = (uVar1 & (uint)param_2) != 0;
        if (!bVar3) {
          fVar8 = fVar13;
        }
      }
      if ((int)param_1 * 2 != 0) {
        if (-1 < (int)param_2) {
          return fVar8;
        }
        return 1.0 / fVar8;
      }
      if (-1 < (int)param_2) {
        return fVar8;
      }
      fVar8 = 1.0;
      uVar4 = 0x22;
      if (bVar3) {
        fVar8 = -1.0;
      }
      fVar8 = fVar8 / 0.0;
      goto LAB_7100800380;
    }
    lVar5 = 0;
    if ((int)param_1 < 0) {
      uVar1 = (uint)param_2 >> 0x17 & 0xff;
      if (uVar1 < 0x7f) {
LAB_7100800460:
        fVar8 = (param_1 - param_1) / (param_1 - param_1);
        if (NAN(param_1)) {
          return fVar8;
        }
        uVar4 = 0x21;
        goto LAB_7100800380;
      }
      if (uVar1 < 0x97) {
        uVar1 = 1 << (ulong)(0x96 - uVar1 & 0x1f);
        if ((uVar1 - 1 & (uint)param_2) != 0) goto LAB_7100800460;
        lVar5 = (ulong)((uVar1 & (uint)param_2) != 0) << 0x10;
      }
      fVar8 = ABS(param_1);
    }
    if ((uint)fVar8 < 0x800000) {
      fVar8 = (float)((int)ABS(param_1 * 8388608.0) + 0xf4800000);
    }
  }
  uVar1 = (int)fVar8 + 0xc0cd0000U & 0xff800000;
  uVar7 = (ulong)((int)fVar8 + 0xc0cd0000U >> 0x13) & 0xf;
  dVar12 = (double)NEON_fmadd(*(undefined8 *)(&DAT_71009ce860 + uVar7 * 0x10),
                              (double)(float)((int)fVar8 - uVar1),0xbff0000000000000);
  dVar9 = dVar12 * dVar12;
  uVar14 = NEON_fmadd(dVar12,0x40471547652ab82b,
                      (double)((int)uVar1 >> 0x12) + *(double *)(&DAT_71009ce868 + uVar7 * 0x10));
  uVar11 = NEON_fmadd(dVar12,0x40227616c9496e0b,0xc0271969a075c67a);
  uVar10 = NEON_fmadd(dVar12,0x402ec70a6ca7badd,0xc037154748bef6c8);
  uVar10 = NEON_fmadd(dVar9,uVar10,uVar14);
  dVar9 = (double)NEON_fmadd(uVar11,dVar9 * dVar9,uVar10);
  dVar9 = (double)param_2 * dVar9;
  if (0x815e < ((ulong)dVar9 >> 0x2f & 0xffff)) {
    if (dVar9 == 4095.9999986241387 || dVar9 < 4095.9999986241387 != NAN(dVar9)) {
      if (dVar9 != 4095.9999972482774 && dVar9 < 4095.9999972482774 == NAN(dVar9))
      goto LAB_71008000fc;
      if (dVar9 <= -4800.0) {
        fVar13 = 2.524355e-29;
      }
      else {
        if (-4768.0 <= dVar9) goto LAB_71008000fc;
        fVar13 = 3.3087225e-23;
      }
    }
    else {
      fVar13 = 1.5845633e+29;
    }
    uVar4 = 0x22;
    fVar8 = -fVar13;
    if ((int)lVar5 == 0) {
      fVar8 = fVar13;
    }
    fVar8 = fVar8 * fVar13;
LAB_7100800380:
    puVar6 = (undefined4 *)FUN_710080e8e0();
    *puVar6 = uVar4;
    return fVar8;
  }
LAB_71008000fc:
  dVar12 = dVar9 - (double)(long)dVar9;
  uVar10 = NEON_fmadd(dVar12,0x3ebc6af84b912394,0x3f2ebfce50fac4f3);
  uVar11 = NEON_fmadd(dVar12,0x3f962e42ff0c52d6,0x3ff0000000000000);
  dVar12 = (double)NEON_fmadd(uVar10,dVar12 * dVar12,uVar11);
  return (float)(dVar12 * (double)(*(long *)(&DAT_71009ce9a0 +
                                            (long)(int)((uint)(long)dVar9 & 0x1f) * 8) +
                                  ((long)dVar9 + lVar5 << 0x2f)));
}



// ===== FUN_7100800480 @ 7100800480 (size=12) =====

undefined4 FUN_7100800480(void)

{
  return 0x7fc00000;
}



// ===== FUN_71008004a0 @ 71008004a0 (size=252) =====

undefined1  [16] FUN_71008004a0(double param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  
  uVar2 = (uint)((ulong)param_1 >> 0x20);
  if ((int)uVar2 < 0x100000) {
    if (((ulong)param_1 & 0x7fffffff00000000) == 0 && SUB84(param_1,0) == 0) {
      return ZEXT816(0xfff0000000000000);
    }
    if ((long)param_1 < 0) {
      auVar8._0_8_ = (param_1 - param_1) / 0.0;
      auVar8._8_8_ = 0;
      return auVar8;
    }
    iVar3 = -0x36;
    param_1 = param_1 * 18014398509481984.0;
    uVar2 = (uint)((ulong)param_1 >> 0x20);
  }
  else {
    iVar3 = 0;
  }
  if (0x7fefffff < (int)uVar2) {
    auVar6._0_8_ = param_1 + param_1;
    auVar6._8_8_ = 0;
    return auVar6;
  }
  iVar3 = ((int)uVar2 >> 0x14) + -0x3ff + iVar3;
  iVar1 = iVar3 >> 0x1f;
  dVar9 = (double)(iVar3 - iVar1);
  dVar4 = (double)FUN_7100800a40((ulong)param_1 & 0xffffffff |
                                 (ulong)(uVar2 & 0xfffff | (iVar1 + 0x3ff) * 0x100000) << 0x20);
  uVar5 = NEON_fmadd(dVar9,0x3d59fef311f12b36,dVar4 * 0.4342944819032518);
  auVar7._0_8_ = NEON_fmadd(dVar9,0x3fd34413509f6000,uVar5);
  auVar7._8_8_ = 0;
  return auVar7;
}



// ===== FUN_71008005a0 @ 71008005a0 (size=1156) =====

/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_71008005a0(undefined1 param_1 [16],double param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  double dVar16;
  undefined8 uVar21;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  uVar21 = param_1._8_8_;
  dVar16 = param_1._0_8_;
  uVar7 = (uint)((ulong)param_2 >> 0x20);
  uVar12 = uVar7 & 0x7fffffff;
  uVar1 = param_1._4_4_;
  uVar15 = uVar1 & 0x7fffffff;
  uVar8 = SUB84(param_2,0);
  uVar5 = (ulong)param_2 >> 0x20;
  uVar10 = (ulong)param_2 & 0xffffffff;
  if ((((ulong)param_2 & 0x7fffffff00000000) == 0 && uVar8 == 0 || 0x7fefffff < uVar15) ||
     (0x7ff00000 < (uVar12 | (-uVar8 | uVar8) >> 0x1f))) {
    dVar16 = (dVar16 * param_2) / (dVar16 * param_2);
    uVar21 = 0;
LAB_71008005d8:
    auVar17._8_8_ = uVar21;
    auVar17._0_8_ = dVar16;
    return auVar17;
  }
  uVar3 = (ulong)dVar16 & 0xffffffff;
  uVar9 = uVar1 & 0x80000000;
  uVar6 = param_1._0_4_;
  iVar4 = (int)uVar12 >> 0x14;
  if (uVar12 < uVar15) {
    if (((ulong)dVar16 >> 0x20 & 0x7ff00000) != 0) goto LAB_7100800770;
LAB_71008006c8:
    iVar13 = uVar15 << 0xb;
    iVar11 = -0x3fe;
    do {
      iVar13 = iVar13 * 2;
      iVar11 = iVar11 + -1;
    } while (0 < iVar13);
LAB_7100800640:
    if ((uVar5 & 0x7ff00000) == 0) {
      if (((ulong)param_2 & 0x7fffffff00000000) != 0) goto LAB_710080082c;
      if (0 < (int)uVar8) goto LAB_7100800654;
      if (iVar11 + 0x41d < 0 != SCARRY4(iVar11,0x41d)) {
        uVar12 = iVar11 + 0x413;
        uVar15 = uVar6 << (ulong)(-iVar11 - 0x41eU & 0x1f);
        uVar3 = 0;
        uVar7 = uVar8 >> 0xb;
        iVar13 = -0x413;
        uVar8 = uVar8 << 0x15;
        goto LAB_7100800714;
      }
LAB_7100800958:
      iVar13 = -0x413;
      uVar3 = (ulong)(uVar6 << (ulong)(-iVar11 - 0x3feU & 0x1f));
      uVar15 = uVar6 >> (ulong)(iVar11 + 0x41eU & 0x1f) | uVar15 << (ulong)(-iVar11 - 0x3feU & 0x1f)
      ;
      goto LAB_7100800864;
    }
    iVar13 = iVar4 + -0x3ff;
    if (iVar11 + 0x41d < 0 == SCARRY4(iVar11,0x41d)) {
      uVar12 = uVar6 << (ulong)(-iVar11 - 0x3feU & 0x1f);
      uVar15 = uVar6 >> (ulong)(iVar11 + 0x41eU & 0x1f) | uVar15 << (ulong)(-iVar11 - 0x3feU & 0x1f)
      ;
LAB_7100800940:
      iVar13 = iVar4 + -0x3ff;
      uVar3 = (ulong)uVar12;
      uVar12 = iVar11 - iVar13;
      uVar7 = uVar7 & 0xfffff | 0x100000;
    }
    else {
      uVar12 = iVar11 - iVar13;
      uVar15 = uVar6 << (ulong)(-iVar11 - 0x41eU & 0x1f);
      uVar7 = uVar7 & 0xfffff | 0x100000;
      uVar3 = 0;
    }
LAB_7100800714:
    uVar5 = 0;
    do {
      while( true ) {
        iVar4 = uVar15 - uVar7;
        uVar2 = (uint)uVar3;
        if (uVar8 <= uVar2) break;
        iVar4 = iVar4 + -1;
        if (iVar4 < 0) goto LAB_710080080c;
        iVar11 = uVar2 - uVar8;
LAB_710080072c:
        uVar5 = uVar5 + 1;
        uVar15 = (uint)(CONCAT44(iVar4,iVar11) >> 0x1f);
        uVar2 = iVar11 << 1;
        uVar3 = (ulong)uVar2;
        if (uVar12 == uVar5) goto LAB_7100800820;
      }
      if (-1 < iVar4) {
        iVar11 = uVar2 - uVar8;
        if (iVar4 != 0 || iVar11 != 0) goto LAB_710080072c;
        goto LAB_710080075c;
      }
LAB_710080080c:
      uVar5 = uVar5 + 1;
      uVar15 = (uint)(((ulong)uVar15 << 0x20 | uVar3) >> 0x1f);
      uVar2 = uVar2 << 1;
      uVar3 = (ulong)uVar2;
    } while (uVar12 != uVar5);
LAB_7100800820:
    uVar6 = uVar2 - uVar8;
  }
  else {
    if (uVar15 < uVar12 || uVar6 < uVar8) goto LAB_71008005d8;
    if (uVar8 == uVar6) goto LAB_710080075c;
    if (((ulong)dVar16 >> 0x20 & 0x7ff00000) == 0) {
      if ((param_1 & (undefined1  [16])0x7fffffff00000000) != (undefined1  [16])0x0)
      goto LAB_71008006c8;
      uVar14 = (ulong)dVar16 & 0xffffffff;
      if (0 < (int)uVar6) {
        iVar11 = -0x413;
        do {
          uVar2 = (int)uVar14 * 2;
          uVar14 = (ulong)uVar2;
          iVar11 = iVar11 + -1;
        } while (0 < (int)uVar2);
        goto LAB_7100800640;
      }
      if ((uVar5 & 0x7ff00000) != 0) {
        uVar15 = uVar6 >> 0xb;
        uVar12 = uVar6 << 0x15;
        iVar11 = -0x413;
        goto LAB_7100800940;
      }
      iVar11 = -0x413;
      if (((ulong)param_2 & 0x7fffffff00000000) == 0) {
        if ((int)uVar8 < 1) goto LAB_7100800958;
        goto LAB_7100800654;
      }
      goto LAB_710080082c;
    }
LAB_7100800770:
    iVar11 = ((int)uVar15 >> 0x14) + -0x3ff;
    if ((uVar5 & 0x7ff00000) == 0) {
      if (((ulong)param_2 & 0x7fffffff00000000) == 0) {
        if ((int)uVar8 < 1) {
          uVar12 = ((int)uVar15 >> 0x14) + 0x14;
          uVar15 = uVar1 & 0xfffff | 0x100000;
          uVar7 = uVar8 >> 0xb;
          uVar8 = uVar8 << 0x15;
          iVar13 = -0x413;
          goto LAB_7100800714;
        }
LAB_7100800654:
        iVar13 = -0x413;
        do {
          uVar7 = (int)uVar10 * 2;
          uVar10 = (ulong)uVar7;
          iVar13 = iVar13 + -1;
        } while (0 < (int)uVar7);
      }
      else {
LAB_710080082c:
        iVar4 = uVar12 << 0xb;
        iVar13 = -0x3fe;
        do {
          iVar4 = iVar4 * 2;
          iVar13 = iVar13 + -1;
        } while (0 < iVar4);
      }
      if (iVar11 + 0x3fe < 0 == SCARRY4(iVar11,0x3fe)) {
        uVar15 = uVar1 & 0xfffff | 0x100000;
        if (iVar13 + 0x41d < 0 != SCARRY4(iVar13,0x41d)) {
LAB_71008006a4:
          uVar12 = iVar11 - iVar13;
          uVar7 = uVar8 << (ulong)(-iVar13 - 0x41eU & 0x1f);
LAB_71008006b4:
          uVar8 = 0;
          goto LAB_7100800714;
        }
      }
      else if (iVar11 + 0x41d < 0 == SCARRY4(iVar11,0x41d)) {
        uVar3 = (ulong)(uVar6 << (ulong)(-iVar11 - 0x3feU & 0x1f));
        uVar15 = uVar6 >> (ulong)(iVar11 + 0x41eU & 0x1f) |
                 uVar15 << (ulong)(-iVar11 - 0x3feU & 0x1f);
        if (iVar13 + 0x41d < 0 != SCARRY4(iVar13,0x41d)) goto LAB_71008006a4;
      }
      else {
        uVar15 = uVar6 << (ulong)(-iVar11 - 0x41eU & 0x1f);
        if (iVar13 + 0x41d < 0 != SCARRY4(iVar13,0x41d)) {
          uVar12 = iVar11 - iVar13;
          uVar7 = uVar8 << (ulong)(-iVar13 - 0x41eU & 0x1f);
          uVar3 = 0;
          if (uVar12 == 0) {
            uVar8 = uVar15;
            if (-1 < (int)(uVar15 - uVar7)) {
              uVar8 = uVar15 - uVar7;
            }
            if (uVar8 == 0) goto LAB_710080075c;
            uVar6 = 0;
            if ((int)uVar8 < 0x100000) goto LAB_71008007d0;
            goto LAB_71008008cc;
          }
          goto LAB_71008006b4;
        }
        uVar3 = 0;
      }
LAB_7100800864:
      uVar7 = uVar8 >> (ulong)(iVar13 + 0x41eU & 0x1f) | uVar12 << (ulong)(-iVar13 - 0x3feU & 0x1f);
      uVar8 = uVar8 << (ulong)(-iVar13 - 0x3feU & 0x1f);
      uVar6 = (int)uVar3 - uVar8;
    }
    else {
      uVar6 = uVar6 - uVar8;
      iVar13 = iVar4 + -0x3ff;
      uVar15 = uVar1 & 0xfffff | 0x100000;
      uVar7 = uVar7 & 0xfffff | 0x100000;
    }
    uVar2 = (uint)uVar3;
    uVar12 = iVar11 - iVar13;
    if (uVar12 != 0) goto LAB_7100800714;
  }
  uVar8 = uVar15 - (uVar7 + (uVar2 < uVar8));
  if ((int)uVar8 < 0) {
    uVar8 = uVar15;
    uVar6 = uVar2;
  }
  if (uVar8 == 0 && uVar6 == 0) {
LAB_710080075c:
    auVar18._0_8_ = *(ulong *)(&DAT_71009ce990 + (ulong)(uVar1 >> 0x1f) * 8);
    auVar18._8_8_ = 0;
    return auVar18;
  }
  while ((int)uVar8 < 0x100000) {
LAB_71008007d0:
    iVar13 = iVar13 + -1;
    uVar5 = CONCAT44(uVar8,uVar6);
    uVar6 = uVar6 << 1;
    uVar8 = (uint)(uVar5 >> 0x1f);
  }
  if (iVar13 + 0x3fe < 0 == SCARRY4(iVar13,0x3fe)) {
    auVar19._4_4_ = uVar8 - 0x100000 | uVar9 | (iVar13 + 0x3ff) * 0x100000;
    auVar19._0_4_ = uVar6;
    auVar19._8_8_ = 0;
    return auVar19;
  }
LAB_71008008cc:
  uVar7 = -iVar13 - 0x3fe;
  if (iVar13 + 0x412 < 0 == SCARRY4(iVar13,0x412)) {
    uVar5 = (ulong)(uVar8 << (ulong)(iVar13 + 0x41eU & 0x1f) | uVar6 >> (ulong)(uVar7 & 0x1f));
    uVar9 = (int)uVar8 >> (uVar7 & 0x1f) | uVar9;
  }
  else if (iVar13 + 0x41d < 0 == SCARRY4(iVar13,0x41d)) {
    uVar5 = (ulong)(uVar8 << (ulong)(iVar13 + 0x41eU & 0x1f) | uVar6 >> (ulong)(uVar7 & 0x1f));
  }
  else {
    uVar5 = (ulong)(uint)((int)uVar8 >> (-iVar13 - 0x41eU & 0x1f));
  }
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar5 | (ulong)uVar9 << 0x20;
  return auVar20;
}



// ===== FUN_7100800a40 @ 7100800a40 (size=548) =====

undefined1  [16] FUN_7100800a40(undefined1 param_1 [16])

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uVar14;
  
  uVar5 = param_1._8_8_;
  dVar10 = param_1._0_8_;
  if ((long)dVar10 + 0xc012000000000000U < 0x3090000000000) {
    if (dVar10 == 1.0) {
      return ZEXT816(0);
    }
    dVar10 = dVar10 - 1.0;
    auVar9._0_8_ = dVar10 * dVar10;
    uVar5 = NEON_fmadd(0xbfcffffffffffdcb,dVar10,0x3fd5555555555577);
    dVar11 = dVar10 * auVar9._0_8_;
    uVar12 = NEON_fmadd(0x3fc999999995dd0c,auVar9._0_8_,uVar5);
    uVar5 = NEON_fmadd(0x3fc24924a344de30,dVar10,0xbfc55555556745a7);
    uVar14 = NEON_fmadd(0xbfbfffffa4423d65,auVar9._0_8_,uVar5);
    uVar5 = NEON_fmadd(0xbfb999eb43b068ff,dVar10,0x3fbc7184282ad6ca);
    uVar5 = NEON_fmadd(0x3fb78182f7afd085,auVar9._0_8_,uVar5);
    uVar5 = NEON_fmadd(0xbfb5521375d145cd,dVar11,uVar5);
    uVar5 = NEON_fmadd(uVar5,dVar11,uVar14);
    uVar12 = NEON_fmadd(uVar5,dVar11,uVar12);
    uVar5 = NEON_fmadd(dVar10,0x41a0000000000000,dVar10);
    dVar13 = (double)NEON_fmsub(dVar10,0x41a0000000000000,uVar5);
    auVar9._0_8_ = (double)NEON_fmadd(dVar13 * dVar13,0xbfe0000000000000,dVar10);
    uVar5 = NEON_fmadd(dVar13 * dVar13,0xbfe0000000000000,dVar10 - auVar9._0_8_);
    uVar5 = NEON_fmadd((dVar10 - dVar13) * -0.5,dVar10 + dVar13,uVar5);
    dVar10 = (double)NEON_fmadd(uVar12,dVar11,uVar5);
    auVar7._0_8_ = auVar9._0_8_ + dVar10;
    auVar7._8_8_ = 0;
    return auVar7;
  }
  if (0x7fdf < param_1._6_2_ - 0x10) {
    if ((param_1 & (undefined1  [16])0x7fffffffffffffff) == (undefined1  [16])0x0) {
      uVar3 = 0x22;
      auVar9._0_8_ = -INFINITY;
LAB_7100800c00:
      puVar4 = (undefined4 *)FUN_710080e8e0();
      *puVar4 = uVar3;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = auVar9._0_8_;
      return auVar8;
    }
    if (dVar10 == INFINITY) goto LAB_7100800af8;
    if (((long)dVar10 < 0) || ((param_1._6_2_ & 0x7ff0) == 0x7ff0)) {
      auVar9._0_8_ = (dVar10 - dVar10) / (dVar10 - dVar10);
      if (NAN(dVar10)) {
        auVar9._8_8_ = 0;
        return auVar9;
      }
      uVar3 = 0x21;
      goto LAB_7100800c00;
    }
    dVar10 = (double)((long)(dVar10 * 4503599627370496.0) + -0x340000000000000);
  }
  uVar2 = (long)dVar10 + 0xc01a000000000000;
  lVar1 = (uVar2 >> 0x2d & 0x7f) + 9;
  auVar9._0_8_ = (double)(int)((long)uVar2 >> 0x34);
  dVar11 = (double)NEON_fmadd((&DAT_71009ceaf0)[lVar1 * 2],
                              (long)dVar10 - (uVar2 & 0xfff0000000000000),0xbff0000000000000);
  dVar13 = (double)NEON_fmadd(0x3fe62e42fefa3800,auVar9._0_8_,(&DAT_71009ceaf8)[lVar1 * 2]);
  dVar10 = dVar11 * dVar11;
  uVar5 = NEON_fmadd(0x3d2ef35793c76730,auVar9._0_8_,(dVar13 - (dVar11 + dVar13)) + dVar11);
  uVar5 = NEON_fmadd(0xbfe0000000000001,dVar10,uVar5);
  uVar14 = NEON_fmadd(0xbfcfffffffeb4590,dVar11,0x3fd555555551305b);
  uVar12 = NEON_fmadd(0xbfc55575e506c89f,dVar11,0x3fc999b324f10111);
  uVar12 = NEON_fmadd(uVar12,dVar10,uVar14);
  dVar10 = (double)NEON_fmadd(dVar11 * dVar10,uVar12,uVar5);
  dVar10 = dVar10 + dVar11 + dVar13;
  uVar5 = 0;
LAB_7100800af8:
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = dVar10;
  return auVar6;
}



// ===== FUN_7100800c80 @ 7100800c80 (size=12) =====

undefined1  [16] FUN_7100800c80(void)

{
  return ZEXT816(0x7ff8000000000000);
}



// ===== FUN_7100800ca0 @ 7100800ca0 (size=836) =====

/* WARNING: Removing unreachable block (ram,0x007100800e5c) */

undefined1  [16] FUN_7100800ca0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  if (param_4 != 0) {
    if (param_2 < param_4) {
      return ZEXT816(0);
    }
    uVar3 = LZCOUNT(param_4);
    if (uVar3 == 0) {
      return ZEXT116(param_4 < param_2 || param_3 <= param_1);
    }
    uVar5 = 0x40 - uVar3;
    uVar7 = param_3 >> (uVar5 & 0x3f) | param_4 << (uVar3 & 0x3f);
    uVar8 = param_2 >> (uVar5 & 0x3f);
    uVar11 = uVar7 >> 0x20;
    uVar9 = param_1 >> (uVar5 & 0x3f) | param_2 << (uVar3 & 0x3f);
    param_3 = param_3 << (uVar3 & 0x3f);
    uVar5 = 0;
    if (uVar11 != 0) {
      uVar5 = uVar8 / uVar11;
    }
    uVar4 = (uVar7 & 0xffffffff) * uVar5;
    uVar8 = uVar9 >> 0x20 | uVar8 - uVar5 * uVar11 << 0x20;
    if (uVar8 <= uVar4 && uVar4 - uVar8 != 0) {
      bVar2 = CARRY8(uVar7,uVar8);
      uVar8 = uVar7 + uVar8;
      if ((!bVar2 && uVar8 <= uVar4) && (bVar2 || uVar4 - uVar8 != 0)) {
        uVar5 = uVar5 - 2;
        uVar8 = uVar8 + uVar7;
      }
      else {
        uVar5 = uVar5 - 1;
      }
    }
    uVar13 = 0;
    if (uVar11 != 0) {
      uVar13 = (uVar8 - uVar4) / uVar11;
    }
    uVar12 = (uVar7 & 0xffffffff) * uVar13;
    uVar11 = uVar9 & 0xffffffff | (uVar8 - uVar4) - uVar13 * uVar11 << 0x20;
    if (uVar11 <= uVar12 && uVar12 - uVar11 != 0) {
      bVar2 = CARRY8(uVar7,uVar11);
      uVar11 = uVar7 + uVar11;
      if ((!bVar2 && uVar11 <= uVar12) && (bVar2 || uVar12 - uVar11 != 0)) {
        uVar13 = uVar13 - 2;
        uVar11 = uVar11 + uVar7;
      }
      else {
        uVar13 = uVar13 - 1;
      }
    }
    uVar8 = uVar13 | uVar5 << 0x20;
    uVar7 = (uVar13 & 0xffffffff) * (param_3 & 0xffffffff);
    uVar9 = (uVar8 >> 0x20) * (param_3 & 0xffffffff);
    lVar10 = (uVar8 >> 0x20) * (param_3 >> 0x20);
    uVar5 = uVar9 + (uVar13 & 0xffffffff) * (param_3 >> 0x20) + (uVar7 >> 0x20);
    lVar1 = lVar10 + 0x100000000;
    if (uVar9 < uVar5 || uVar9 - uVar5 == 0) {
      lVar1 = lVar10;
    }
    uVar9 = lVar1 + (uVar5 >> 0x20);
    if ((uVar9 <= uVar11 - uVar12) &&
       ((uVar7 & 0xffffffff) + (uVar5 << 0x20) <= param_1 << (uVar3 & 0x3f) ||
        uVar11 - uVar12 != uVar9)) {
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar8;
      return auVar17;
    }
    auVar15._0_8_ = uVar8 - 1;
    auVar15._8_8_ = 0;
    return auVar15;
  }
  if (param_2 < param_3) {
    uVar3 = LZCOUNT(param_3);
    if (uVar3 != 0) {
      param_3 = param_3 << (uVar3 & 0x3f);
      param_2 = param_1 >> ((ulong)(uint)-(int)uVar3 & 0x3f) | param_2 << (uVar3 & 0x3f);
      param_1 = param_1 << (uVar3 & 0x3f);
    }
    uVar5 = param_3 >> 0x20;
    uVar3 = 0;
    if (uVar5 != 0) {
      uVar3 = param_2 / uVar5;
    }
    uVar8 = (param_3 & 0xffffffff) * uVar3;
    uVar11 = param_1 >> 0x20 | param_2 - uVar3 * uVar5 << 0x20;
    if (uVar11 <= uVar8 && uVar8 - uVar11 != 0) {
      bVar2 = CARRY8(param_3,uVar11);
      uVar11 = param_3 + uVar11;
      if ((!bVar2 && uVar11 <= uVar8) && (bVar2 || uVar8 - uVar11 != 0)) {
        uVar3 = uVar3 - 2;
        uVar11 = uVar11 + param_3;
      }
      else {
        uVar3 = uVar3 - 1;
      }
    }
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = (uVar11 - uVar8) / uVar5;
    }
    uVar7 = (param_3 & 0xffffffff) * uVar9;
    uVar5 = param_1 & 0xffffffff | (uVar11 - uVar8) - uVar9 * uVar5 << 0x20;
    if (uVar5 <= uVar7 && uVar7 - uVar5 != 0) {
      if (CARRY8(param_3,uVar5) || (uVar7 < param_3 + uVar5 || uVar7 - (param_3 + uVar5) == 0)) {
        uVar9 = uVar9 + 1;
      }
      uVar9 = uVar9 - 2;
    }
    auVar14._0_8_ = uVar9 | uVar3 << 0x20;
    auVar14._8_8_ = 0;
    return auVar14;
  }
  if (param_3 == 0) {
    param_3 = 0;
    uVar3 = 0;
    iVar6 = 0;
  }
  else {
    uVar3 = LZCOUNT(param_3);
    if (uVar3 == 0) {
      uVar11 = param_3 >> 0x20;
      uVar5 = param_3 & 0xffffffff;
      param_2 = param_2 - param_3;
      uVar3 = 1;
      goto LAB_7100800f14;
    }
    iVar6 = (int)uVar3;
  }
  param_3 = param_3 << (uVar3 & 0x3f);
  uVar9 = param_2 >> (0x40U - (long)iVar6 & 0x3f);
  uVar7 = param_1 >> (0x40U - (long)iVar6 & 0x3f) | param_2 << (uVar3 & 0x3f);
  uVar11 = param_3 >> 0x20;
  param_1 = param_1 << (uVar3 & 0x3f);
  uVar5 = param_3 & 0xffffffff;
  uVar8 = 0;
  if (uVar11 != 0) {
    uVar8 = uVar9 / uVar11;
  }
  uVar4 = uVar5 * uVar8;
  uVar9 = uVar7 >> 0x20 | uVar9 - uVar8 * uVar11 << 0x20;
  if (uVar9 <= uVar4 && uVar4 - uVar9 != 0) {
    bVar2 = CARRY8(param_3,uVar9);
    uVar9 = param_3 + uVar9;
    if ((!bVar2 && uVar9 <= uVar4) && (bVar2 || uVar4 - uVar9 != 0)) {
      uVar8 = uVar8 - 2;
      uVar9 = uVar9 + param_3;
    }
    else {
      uVar8 = uVar8 - 1;
    }
  }
  uVar3 = 0;
  if (uVar11 != 0) {
    uVar3 = (uVar9 - uVar4) / uVar11;
  }
  uVar13 = uVar5 * uVar3;
  param_2 = uVar7 & 0xffffffff | (uVar9 - uVar4) - uVar3 * uVar11 << 0x20;
  if (param_2 <= uVar13 && uVar13 - param_2 != 0) {
    bVar2 = CARRY8(param_3,param_2);
    param_2 = param_3 + param_2;
    if ((!bVar2 && param_2 <= uVar13) && (bVar2 || uVar13 - param_2 != 0)) {
      uVar3 = uVar3 - 2;
      param_2 = param_2 + param_3;
    }
    else {
      uVar3 = uVar3 - 1;
    }
  }
  param_2 = param_2 - uVar13;
  uVar3 = uVar3 | uVar8 << 0x20;
LAB_7100800f14:
  uVar8 = 0;
  if (uVar11 != 0) {
    uVar8 = param_2 / uVar11;
  }
  uVar7 = uVar8 * uVar5;
  uVar9 = param_1 >> 0x20 | param_2 - uVar8 * uVar11 << 0x20;
  if (uVar9 <= uVar7 && uVar7 - uVar9 != 0) {
    bVar2 = CARRY8(param_3,uVar9);
    uVar9 = param_3 + uVar9;
    if ((!bVar2 && uVar9 <= uVar7) && (bVar2 || uVar7 - uVar9 != 0)) {
      uVar8 = uVar8 - 2;
      uVar9 = uVar9 + param_3;
    }
    else {
      uVar8 = uVar8 - 1;
    }
  }
  uVar4 = 0;
  if (uVar11 != 0) {
    uVar4 = (uVar9 - uVar7) / uVar11;
  }
  uVar5 = uVar4 * uVar5;
  uVar11 = param_1 & 0xffffffff | (uVar9 - uVar7) - uVar4 * uVar11 << 0x20;
  if (uVar11 <= uVar5 && uVar5 - uVar11 != 0) {
    if (CARRY8(param_3,uVar11) || (uVar5 < param_3 + uVar11 || uVar5 - (param_3 + uVar11) == 0)) {
      uVar4 = uVar4 + 1;
    }
    uVar4 = uVar4 - 2;
  }
  auVar16._0_8_ = uVar4 | uVar8 << 0x20;
  auVar16._8_8_ = uVar3;
  return auVar16;
}



// ===== FUN_7100801000 @ 7100801000 (size=248) =====

bool FUN_7100801000(undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = param_2._0_8_;
  lVar8 = param_1._0_8_;
  uVar1 = fpcr;
  uVar2 = param_1._8_8_ & 0xffffffffffff;
  uVar6 = param_1._8_8_ >> 0x30 & 0x7fff;
  uVar3 = param_2._8_8_ & 0xffffffffffff;
  uVar7 = param_2._8_8_ >> 0x30 & 0x7fff;
  iVar4 = -(param_2._12_4_ >> 0x1f);
  iVar5 = -(param_1._12_4_ >> 0x1f);
  if (uVar6 == 0x7fff) {
    if (lVar8 == 0 && (param_1 & (undefined1  [16])0xffffffffffff) == (undefined1  [16])0x0) {
      if (uVar7 != 0x7fff) {
        return true;
      }
      if (lVar9 == 0 && (param_2 & (undefined1  [16])0xffffffffffff) == (undefined1  [16])0x0) {
        return iVar5 != iVar4;
      }
    }
    else {
      if (uVar2 < 0x800000000000) goto LAB_7100801078;
      if (uVar7 != 0x7fff) {
        return true;
      }
    }
  }
  else {
    if (uVar7 != 0x7fff) {
      if (uVar6 != uVar7) {
        return true;
      }
      if (uVar2 != uVar3 || lVar9 != lVar8) {
        return true;
      }
      if (iVar5 == iVar4) {
        return false;
      }
      if (uVar6 != 0) {
        return true;
      }
      return lVar8 != 0 || (param_1 & (undefined1  [16])0xffffffffffff) != (undefined1  [16])0x0;
    }
    if (lVar9 == 0 && (param_2 & (undefined1  [16])0xffffffffffff) == (undefined1  [16])0x0) {
      return true;
    }
  }
  if (lVar9 == 0 && (param_2 & (undefined1  [16])0xffffffffffff) == (undefined1  [16])0x0 ||
      0x7fffffffffff < uVar3) {
    return true;
  }
LAB_7100801078:
  FUN_71008063a0(1);
  return true;
}



// ===== FUN_7100801100 @ 7100801100 (size=360) =====

undefined4 FUN_7100801100(undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined8 uVar1;
  ulong uVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar12 = param_2._8_8_;
  uVar11 = param_2._0_8_;
  uVar10 = param_1._8_8_;
  uVar9 = param_1._0_8_;
  uVar1 = fpcr;
  uVar2 = uVar10 & 0xffffffffffff;
  uVar7 = uVar10 >> 0x30 & 0x7fff;
  lVar6 = -((long)uVar10 >> 0x3f);
  uVar10 = uVar12 & 0xffffffffffff;
  uVar8 = uVar12 >> 0x30 & 0x7fff;
  lVar5 = -((long)uVar12 >> 0x3f);
  if (uVar7 == 0x7fff) {
    if ((param_1 & (undefined1  [16])0xffffffffffff) != (undefined1  [16])0x0 || uVar9 != 0) {
LAB_710080124c:
      FUN_71008063a0(1);
      return 0xfffffffe;
    }
    if (uVar8 != 0x7fff) goto LAB_71008011ac;
    if ((param_2 & (undefined1  [16])0xffffffffffff) != (undefined1  [16])0x0 || uVar11 != 0)
    goto LAB_710080124c;
    if (lVar6 != lVar5) goto LAB_71008011ac;
    bVar3 = true;
  }
  else {
    if (uVar8 == 0x7fff) {
      if ((param_2 & (undefined1  [16])0xffffffffffff) != (undefined1  [16])0x0 || uVar11 != 0)
      goto LAB_710080124c;
      if ((uVar7 == 0) &&
         ((param_1 & (undefined1  [16])0xffffffffffff) == (undefined1  [16])0x0 && uVar9 == 0))
      goto LAB_710080115c;
LAB_7100801184:
      if (lVar6 != lVar5) goto LAB_71008011ac;
      goto LAB_710080118c;
    }
    if (uVar7 == 0) {
      if (uVar8 != 0) {
        if ((param_1 & (undefined1  [16])0xffffffffffff) == (undefined1  [16])0x0 && uVar9 == 0) {
LAB_710080115c:
          uVar4 = 0xffffffff;
          if (lVar5 != 0) {
            uVar4 = 1;
          }
          return uVar4;
        }
        goto LAB_7100801184;
      }
      if ((param_2 & (undefined1  [16])0xffffffffffff) == (undefined1  [16])0x0 && uVar11 == 0) {
        if ((param_1 & (undefined1  [16])0xffffffffffff) == (undefined1  [16])0x0 && uVar9 == 0) {
          return 0;
        }
        goto LAB_71008011ac;
      }
      if ((param_1 & (undefined1  [16])0xffffffffffff) == (undefined1  [16])0x0 && uVar9 == 0)
      goto LAB_710080115c;
      if (lVar6 != lVar5) goto LAB_71008011ac;
    }
    else {
      if (((uVar8 == 0) || (lVar6 != lVar5)) || (uVar8 < uVar7)) goto LAB_71008011ac;
      if (uVar7 < uVar8) goto LAB_710080118c;
    }
    bVar3 = uVar2 == uVar10;
    if ((uVar10 < uVar2) || (bVar3 && uVar11 < uVar9)) {
LAB_71008011ac:
      uVar4 = 1;
      if (lVar6 != 0) {
        uVar4 = 0xffffffff;
      }
      return uVar4;
    }
  }
  if ((uVar10 <= uVar2) && (!bVar3 || uVar11 <= uVar9)) {
    return 0;
  }
LAB_710080118c:
  if (lVar6 == 0) {
    return 0xffffffff;
  }
  return 1;
}



// ===== FUN_7100801280 @ 7100801280 (size=184) =====

undefined8 FUN_7100801280(undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = fpcr;
  uVar2 = param_2._8_8_ >> 0x30 & 0x7fff;
  if (((param_1._14_2_ & 0x7fff) == 0x7fff) &&
     ((param_1 & (undefined1  [16])0xffffffffffff) != (undefined1  [16])0x0 || param_1._0_8_ != 0))
  {
    if ((param_1._8_8_ & 0xffffffffffff) < 0x800000000000) goto LAB_7100801328;
    if (uVar2 != 0x7fff) {
      return 1;
    }
  }
  else if ((uVar2 != 0x7fff) ||
          (param_2._0_8_ == 0 &&
           (param_2 & (undefined1  [16])0xffffffffffff) == (undefined1  [16])0x0)) {
    return 0;
  }
  if (param_2._0_8_ == 0 && (param_2 & (undefined1  [16])0xffffffffffff) == (undefined1  [16])0x0 ||
      0x7fffffffffff < (param_2._8_8_ & 0xffffffffffff)) {
    return 1;
  }
LAB_7100801328:
  FUN_71008063a0(1);
  return 1;
}



// ===== FUN_7100801340 @ 7100801340 (size=896) =====

undefined1  [16] FUN_7100801340(undefined1 param_1 [16])

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  uVar6 = param_1._8_8_;
  uVar3 = fpcr;
  uVar5 = uVar6 >> 0x30 & 0x7fff;
  uVar8 = -((long)uVar6 >> 0x3f);
  uVar6 = (uVar6 & 0xffffffffffff) << 3;
  uVar2 = uVar6 | param_1._0_8_ >> 0x3d;
  uVar9 = param_1._0_8_ << 3;
  if ((uVar5 + 1 & 0x7ffe) == 0) {
    if (uVar5 != 0) {
      if (uVar2 == 0 && uVar9 == 0) {
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar8 << 0x3f | 0x7ff0000000000000;
        return auVar14;
      }
      uVar10 = (uint)(uVar6 >> 0x32) ^ 1;
      if (uVar5 != 0x7fff) {
        uVar10 = 0;
      }
      uVar6 = (uVar9 >> 0x3c | uVar2 << 4) >> 3 | 0x7ff8000000000000 | uVar8 << 0x3f;
      if (uVar10 == 0) {
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar6;
        return auVar15;
      }
      goto LAB_71008014b0;
    }
    uVar6 = uVar8 << 0x3f;
    if (uVar2 == 0 && uVar9 == 0) goto LAB_7100801404;
LAB_71008013d0:
    if ((uVar3 & 0xc00000) == 0x400000) {
      uVar2 = uVar8 ^ 1;
      uVar12 = 0x18;
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      uVar2 = uVar8;
      if ((uVar3 & 0xc00000) != 0x800000) {
        uVar2 = 0;
      }
      uVar12 = 0x18;
    }
  }
  else {
    uVar6 = uVar5 - 0x3c00;
    if (0x7fe < (long)uVar6) {
      uVar3 = uVar3 & 0xc00000;
      if (uVar3 != 0) {
        if (uVar3 == 0x400000) {
          if (uVar8 == 0) {
            uVar6 = 0x7ff0000000000000;
            uVar10 = 0x14;
          }
          else {
            uVar6 = 0xffefffffffffffff;
            uVar10 = 0x14;
          }
          goto LAB_71008014b0;
        }
        if (((uint)uVar8 & (uint)(uVar3 == 0x800000)) == 0) {
          if (uVar3 == 0x800000) {
LAB_710080159c:
            if ((uint)uVar8 != 0) goto LAB_71008014a4;
          }
          uVar10 = 0x14;
          uVar6 = uVar8 << 0x3f | 0x7fefffffffffffff;
          goto LAB_71008014b0;
        }
      }
LAB_71008014a4:
      uVar10 = 0x14;
      uVar6 = uVar8 << 0x3f | 0x7ff0000000000000;
LAB_71008014b0:
      FUN_71008063a0(uVar10);
      goto LAB_7100801404;
    }
    if (0 < (long)uVar6) {
      uVar4 = (ulong)((param_1 & (undefined1  [16])0x1ffffffffffffff) != (undefined1  [16])0x0);
      uVar2 = uVar4 | uVar9 >> 0x3c | uVar2 << 4;
      if (uVar4 == 0 && (uVar9 >> 0x3c & 7) == 0) {
        uVar6 = (uVar6 & 0x7ff) << 0x34 | uVar2 >> 3 | uVar8 << 0x3f;
        goto LAB_7100801404;
      }
      bVar1 = false;
      if ((uVar3 & 0xc00000) != 0x400000) goto LAB_7100801458;
      if ((uVar8 == 0) && (uVar2 = uVar2 + 8, uVar2 >> 0x37 != 0)) {
        lVar7 = uVar5 - 0x3bff;
        if (lVar7 == 0x7ff) goto LAB_71008014a4;
        goto LAB_710080161c;
      }
      goto LAB_710080156c;
    }
    if ((long)(uVar5 - 0x3bcc) < 0 != SCARRY8(uVar6,0x34)) goto LAB_71008013d0;
    uVar2 = uVar2 | 0x8000000000000;
    iVar11 = (int)uVar6;
    if ((long)(uVar5 - 0x3bfe) < 0 == SCARRY8(uVar6,2)) {
      uVar2 = uVar2 << ((ulong)(iVar11 + 3) & 0x3f) |
              uVar9 >> ((ulong)(0x3d - iVar11) & 0x3f) |
              (ulong)(uVar9 << ((ulong)(iVar11 + 3) & 0x3f) != 0);
      if ((uVar2 & 7) != 0) {
        bVar1 = true;
        uVar6 = 0;
        if ((uVar3 & 0xc00000) == 0x400000) {
          if (uVar8 == 0) {
            uVar2 = uVar2 + 8;
            uVar6 = 0;
            uVar3 = uVar2 & 0x80000000000000;
            goto LAB_710080147c;
          }
LAB_710080166c:
          uVar6 = 0;
LAB_7100801670:
          uVar2 = uVar2 >> 3;
          uVar12 = 0x18;
          goto LAB_71008013ec;
        }
LAB_7100801458:
        if ((uVar3 & 0xc00000) == 0x800000) {
          if (uVar8 != 0) {
            uVar2 = uVar2 + 8;
            uVar3 = uVar2 & 0x80000000000000;
            if (bVar1) {
LAB_710080147c:
              if (uVar3 == 0) goto LAB_7100801670;
              lVar7 = uVar6 + 1;
              uVar10 = 0x18;
            }
            else {
              if (uVar3 == 0) goto LAB_710080156c;
              lVar7 = uVar6 + 1;
              if (uVar6 == 0x7fe) goto LAB_710080159c;
LAB_710080161c:
              uVar10 = 0x10;
            }
            uVar6 = lVar7 << 0x34 | uVar8 << 0x3f;
            goto LAB_71008014b0;
          }
LAB_7100801568:
          if (bVar1) goto LAB_7100801670;
        }
        else {
          if ((uVar3 & 0xc00000) != 0) goto LAB_7100801568;
          if ((uVar2 & 0xf) == 4) {
            uVar10 = 0x18;
            uVar6 = uVar2 >> 3 & 0xfffffffffffff | (ulong)((uint)uVar6 & 0x7ff) << 0x34 |
                    uVar8 << 0x3f;
            if (!bVar1) {
              uVar10 = 0x10;
            }
            goto LAB_71008014b0;
          }
          uVar2 = uVar2 + 4;
          uVar3 = uVar2 & 0x80000000000000;
          if (bVar1) goto LAB_710080147c;
          if (uVar3 != 0) {
            lVar7 = uVar6 + 1;
            if (uVar6 == 0x7fe) goto LAB_71008014a4;
            goto LAB_710080161c;
          }
        }
LAB_710080156c:
        uVar6 = uVar2 >> 3 & 0xfffffffffffff | uVar6 << 0x34 | uVar8 << 0x3f;
        uVar10 = 0x10;
        goto LAB_71008014b0;
      }
    }
    else {
      uVar4 = uVar2 >> ((ulong)(-iVar11 - 3) & 0x3f);
      uVar5 = uVar9 | uVar2 << ((ulong)(iVar11 + 0x43) & 0x3f);
      if (uVar6 == 0xfffffffffffffffd) {
        uVar5 = uVar9;
      }
      uVar2 = uVar5 != 0 | uVar4;
      if ((ulong)(uVar5 != 0) != 0 || (uVar4 & 7) != 0) {
        bVar1 = true;
        uVar6 = 0;
        if ((uVar3 & 0xc00000) != 0x400000) goto LAB_7100801458;
        if (uVar8 != 0) goto LAB_710080166c;
        uVar2 = uVar2 + 8;
        uVar3 = 0;
        uVar6 = 0;
        goto LAB_710080147c;
      }
    }
    uVar2 = uVar2 >> 3;
    if (((uint)uVar3 >> 0xb & 1) == 0) {
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar2 | uVar8 << 0x3f;
      return auVar16;
    }
    uVar6 = 0;
    uVar12 = 8;
  }
LAB_71008013ec:
  uVar6 = uVar2 | uVar6 << 0x34 | uVar8 << 0x3f;
  FUN_71008063a0(uVar12);
LAB_7100801404:
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar6;
  return auVar13;
}



// ===== FUN_7100801960 @ 7100801960 (size=400) =====

long FUN_7100801960(long param_1,long param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_8;
  
  if ((((*(ulong *)(param_2 + 0x340) >> 0x3e & 1) == 0) || (*(char *)(param_2 + 0x377) == '\0')) &&
     (*(long *)(param_2 + 0xf8) == 0)) {
    if (DAT_7100d22a5f != '\b') goto LAB_7100801ae8;
    if ((*(ulong *)(param_2 + 0x340) >> 0x3e & 1) != 0) {
      *(undefined1 *)(param_2 + 0x377) = 0;
    }
    *(undefined8 **)(param_2 + 0xf8) = &local_8;
    local_8 = *(undefined8 *)(param_2 + 0x310);
  }
  lVar6 = 0;
  do {
    while( true ) {
      if (lVar6 == 0x22) {
        plVar5 = *(long **)(param_2 + 0x118);
        lVar6 = 0x23;
        plVar3 = *(long **)(param_1 + 0x118);
      }
      else {
        plVar3 = *(long **)(param_1 + lVar6 * 8);
        plVar5 = *(long **)(param_2 + lVar6 * 8);
      }
      if (*(char *)(param_1 + 0x358 + lVar6) != '\0') goto LAB_7100801ae8;
      if (*(char *)(param_2 + 0x358 + lVar6) == '\0') break;
      if (plVar3 != (long *)0x0) {
        if ((&DAT_7100d22a40)[lVar6] != '\b') goto LAB_7100801ae8;
        *plVar3 = (long)plVar5;
      }
LAB_71008019c0:
      lVar6 = lVar6 + 1;
      if (lVar6 == 0x61) goto LAB_7100801a20;
    }
    if ((plVar5 == (long *)0x0 || plVar3 == (long *)0x0) || plVar5 == plVar3) goto LAB_71008019c0;
    puVar1 = &DAT_7100d22a40 + lVar6;
    lVar6 = lVar6 + 1;
    FUN_710080f900(plVar3,plVar5,*puVar1);
  } while (lVar6 != 0x61);
LAB_7100801a20:
  if (((*(ulong *)(param_1 + 0x340) >> 0x3e & 1) != 0) && (*(char *)(param_1 + 0x377) != '\0')) {
    return 0;
  }
  lVar6 = 0;
  if (*(long *)(param_1 + 0xf8) == 0) {
    puVar4 = *(undefined8 **)(param_2 + 0xf8);
    if (((*(ulong *)(param_2 + 0x340) >> 0x3e & 1) == 0) || (*(char *)(param_2 + 0x377) == '\0')) {
      if (DAT_7100d22a5f != '\b') {
LAB_7100801ae8:
        FUN_710080f820();
                    /* WARNING: Does not return */
        pcVar2 = (code *)UndefinedInstructionException(0,0x7100801aec);
        (*pcVar2)();
      }
      puVar4 = (undefined8 *)*puVar4;
    }
    lVar6 = (long)puVar4 + (*(long *)(param_2 + 0x350) - *(long *)(param_1 + 0x310));
  }
  return lVar6;
}



// ===== FUN_7100801b00 @ 7100801b00 (size=396) =====

ulong * FUN_7100801b00(long param_1,uint param_2,ulong *param_3,ulong *param_4,undefined8 param_5,
                      undefined8 param_6,ulong param_7)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulong *puVar6;
  uint uVar8;
  ulong *puVar9;
  uint uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *extraout_x9;
  undefined1 *unaff_x29;
  undefined1 *puVar13;
  undefined8 unaff_x30;
  undefined1 auVar14 [16];
  ulong *puVar7;
  
  uVar8 = param_2 & 0xff;
  puVar4 = (undefined1 *)register0x00000008;
  puVar13 = unaff_x29;
  if (uVar8 == 0xff) goto LAB_7100801bd8;
  uVar10 = param_2 & 0x70;
  param_7 = (ulong)uVar10;
  if (uVar10 == 0x30) {
    puVar12 = *(ulong **)(param_1 + 0x330);
  }
  else if (uVar10 < 0x31) {
    if (uVar10 == 0x20) {
      puVar12 = *(ulong **)(param_1 + 0x328);
    }
    else {
      if (0x20 < uVar10) goto LAB_7100801bd8;
      puVar12 = (ulong *)0x0;
    }
  }
  else if (uVar10 == 0x40) {
    puVar12 = *(ulong **)(param_1 + 0x338);
  }
  else {
    puVar12 = (ulong *)0x0;
    if (uVar10 != 0x50) goto LAB_7100801bd8;
  }
  if (uVar8 == 0x50) {
    puVar12 = (ulong *)((long)param_3 + 7U & 0xfffffffffffffff8);
    *param_4 = *puVar12;
    return puVar12 + 1;
  }
  param_2 = param_2 & 0xf;
  auVar14._4_4_ = 0;
  auVar14._0_4_ = param_2;
  auVar14._8_4_ = uVar8;
  auVar14._12_4_ = 0;
  if (param_2 != 4) {
    if (4 < param_2) {
LAB_7100801be4:
      uVar8 = auVar14._8_4_;
      uVar10 = (uint)param_7;
      uVar5 = auVar14._0_4_;
      if (uVar5 == 0xb) {
        puVar6 = (ulong *)((long)param_3 + 4);
        puVar9 = (ulong *)(long)(int)(uint)*param_3;
      }
      else {
        puVar4 = (undefined1 *)register0x00000008;
        puVar13 = unaff_x29;
        if (0xb < uVar5) {
          if (uVar5 != 0xc) goto LAB_7100801bd8;
          goto LAB_7100801c14;
        }
        if (uVar5 == 9) {
          puVar9 = (ulong *)0x0;
          uVar11 = 0;
          puVar7 = param_3;
          do {
            puVar6 = (ulong *)((long)puVar7 + 1);
            bVar1 = (byte)*puVar7;
            uVar2 = uVar11 & 0x3f;
            uVar5 = (int)uVar11 + 7;
            uVar11 = (ulong)uVar5;
            puVar9 = (ulong *)((ulong)puVar9 | ((ulong)bVar1 & 0x7f) << uVar2);
            puVar7 = puVar6;
          } while ((char)bVar1 < '\0');
          if ((0x3f < uVar5) || ((bVar1 >> 6 & 1) == 0)) goto LAB_7100801ba0;
          puVar9 = (ulong *)((ulong)puVar9 | -1L << (uVar11 & 0x3f));
          goto LAB_7100801ba4;
        }
        if (uVar5 != 10) goto LAB_7100801bd8;
        puVar6 = (ulong *)((long)param_3 + 2);
        puVar9 = (ulong *)(long)(short)*param_3;
      }
      goto LAB_7100801ba0;
    }
    if (param_2 == 2) {
      puVar6 = (ulong *)((long)param_3 + 2);
      puVar9 = (ulong *)(ulong)(ushort)*param_3;
      goto LAB_7100801ba0;
    }
    if (param_2 == 3) {
      puVar6 = (ulong *)((long)param_3 + 4);
      puVar9 = (ulong *)(ulong)(uint)*param_3;
      goto LAB_7100801ba0;
    }
    if (param_2 != 0) {
      puVar9 = (ulong *)0x0;
      uVar11 = 0;
      puVar7 = param_3;
      do {
        puVar6 = (ulong *)((long)puVar7 + 1);
        uVar3 = *puVar7;
        uVar2 = uVar11 & 0x3f;
        uVar11 = (ulong)((int)uVar11 + 7);
        puVar9 = (ulong *)((ulong)puVar9 | ((ulong)(byte)uVar3 & 0x7f) << uVar2);
        puVar7 = puVar6;
      } while ((char)(byte)uVar3 < '\0');
      goto LAB_7100801ba0;
    }
  }
LAB_7100801c14:
  puVar6 = param_3 + 1;
  puVar9 = (ulong *)*param_3;
LAB_7100801ba0:
  if (puVar9 != (ulong *)0x0) {
LAB_7100801ba4:
    if (uVar10 != 0x10) {
      param_3 = puVar12;
    }
    puVar9 = (ulong *)((long)puVar9 + (long)param_3);
    if ((uVar8 >> 7 & 1) != 0) {
      puVar9 = (ulong *)*puVar9;
    }
  }
  *param_4 = (ulong)puVar9;
  return puVar6;
LAB_7100801bd8:
  register0x00000008 = (BADSPACEBASE *)(puVar4 + -0x10);
  unaff_x29 = puVar4 + -0x10;
  *(undefined1 **)(puVar4 + -0x10) = puVar13;
  *(undefined8 *)(puVar4 + -8) = unaff_x30;
  unaff_x30 = 0x7100801be4;
  auVar14 = FUN_710080f820();
  puVar12 = extraout_x9;
  goto LAB_7100801be4;
}



// ===== FUN_7100801ca0 @ 7100801ca0 (size=1536) =====

ulong FUN_7100801ca0(byte *param_1,byte *param_2,long param_3,ulong param_4)

{
  byte bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar9;
  uint *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulong uVar13;
  uint uVar14;
  uint *puVar15;
  undefined *puVar16;
  undefined *extraout_x9;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  uint *local_208;
  ulong local_200 [64];
  uint uVar8;
  
  local_200[0] = param_4;
  if (param_2 <= param_1) {
    return param_4;
  }
  uVar14 = 1;
LAB_7100801cd0:
  puVar16 = &DAT_71009cf380;
  pbVar11 = param_1 + 1;
  bVar1 = *param_1;
  puVar10 = (uint *)(ulong)bVar1;
  uVar7 = (uint)bVar1;
  uVar8 = (uint)bVar1;
  if (bVar1 < 0x18) {
    if ((uVar7 < 3) || (puVar10 = (uint *)(ulong)(uVar8 - 3), 0x14 < uVar8 - 3))
    goto switchD_7100801f88_caseD_5;
    goto LAB_7100801cf8;
  }
  uVar9 = (uint)bVar1;
  uVar6 = uVar14;
  if (uVar9 < 0x70) {
    if (uVar9 < 0x50) {
      if (0x28 < uVar9) {
        if (uVar8 != 0x2f) {
          if (uVar8 < 0x30) goto LAB_7100801f4c;
          puVar4 = (uint *)(ulong)(uVar9 - 0x30);
          goto LAB_7100801d20;
        }
        pbVar11 = param_1 + (long)*(short *)(param_1 + 1) + 3;
        goto LAB_7100801d30;
      }
      if (uVar9 == 0x18) goto switchD_7100801f88_caseD_5;
      uVar2 = 1L << ((ulong)(uVar8 - 0x19) & 0x3f);
      if ((uVar2 & 0x7b3e) == 0) {
        if ((uVar2 & 0x4c1) == 0) {
          if (uVar14 != 0) {
            uVar14 = uVar14 - 1;
            pbVar11 = param_1 + 3;
            if (local_200[(int)uVar14] != 0) {
              pbVar11 = pbVar11 + *(short *)(param_1 + 1);
            }
            goto LAB_7100801d30;
          }
          goto switchD_7100801f88_caseD_5;
        }
        if (uVar14 == 0) goto switchD_7100801f88_caseD_5;
        uVar6 = uVar14 - 1;
        puVar15 = (uint *)local_200[(int)uVar6];
        if (uVar8 == 0x20) {
          puVar4 = (uint *)~(ulong)puVar15;
        }
        else if (uVar8 < 0x21) {
          if (uVar8 == 0x19) {
            puVar4 = (uint *)-(long)puVar15;
            if (-1 < (long)puVar15) {
              puVar4 = puVar15;
            }
            goto LAB_7100801d20;
          }
          if (uVar7 != 0x1f) goto switchD_7100801f88_caseD_5;
          puVar4 = (uint *)-(long)puVar15;
        }
        else {
          if (uVar7 != 0x23) goto switchD_7100801f88_caseD_5;
          uVar13 = 0;
          uVar2 = 0;
          pbVar12 = pbVar11;
          do {
            pbVar11 = pbVar12 + 1;
            bVar1 = *pbVar12;
            uVar18 = uVar13 & 0x3f;
            uVar13 = (ulong)((int)uVar13 + 7);
            uVar2 = uVar2 | ((ulong)bVar1 & 0x7f) << uVar18;
            pbVar12 = pbVar11;
          } while ((char)bVar1 < '\0');
          puVar4 = (uint *)((long)puVar15 + uVar2);
        }
      }
      else {
LAB_7100801f4c:
        if ((int)uVar14 < 2) goto switchD_7100801f88_caseD_5;
        uVar6 = uVar14 - 2;
        uVar2 = local_200[(int)uVar6];
        uVar13 = local_200[(int)(uVar14 - 1)];
        puVar10 = (uint *)&DAT_7100801f8c;
        switch(uVar7 - 0x1a) {
        case 0:
          puVar4 = (uint *)(uVar2 & uVar13);
          break;
        case 1:
          puVar4 = (uint *)0x0;
          if (uVar13 != 0) {
            puVar4 = (uint *)((long)uVar2 / (long)uVar13);
          }
          break;
        case 2:
          puVar4 = (uint *)(uVar2 - uVar13);
          break;
        case 3:
          uVar18 = 0;
          if (uVar13 != 0) {
            uVar18 = uVar2 / uVar13;
          }
          puVar4 = (uint *)(uVar2 - uVar18 * uVar13);
          break;
        case 4:
          puVar4 = (uint *)(uVar2 * uVar13);
          break;
        default:
          goto switchD_7100801f88_caseD_5;
        case 7:
          puVar4 = (uint *)(uVar2 | uVar13);
          break;
        case 8:
          puVar4 = (uint *)(uVar2 + uVar13);
          break;
        case 10:
          puVar4 = (uint *)(uVar2 << (uVar13 & 0x3f));
          break;
        case 0xb:
          puVar4 = (uint *)(uVar2 >> (uVar13 & 0x3f));
          break;
        case 0xc:
          puVar4 = (uint *)((long)uVar2 >> (uVar13 & 0x3f));
          break;
        case 0xd:
          puVar4 = (uint *)(uVar2 ^ uVar13);
          break;
        case 0xf:
          puVar4 = (uint *)(ulong)(uVar2 == uVar13);
          break;
        case 0x10:
          puVar4 = (uint *)(ulong)((long)uVar13 <= (long)uVar2);
          break;
        case 0x11:
          puVar4 = (uint *)(ulong)((long)uVar13 < (long)uVar2);
          break;
        case 0x12:
          puVar4 = (uint *)(ulong)((long)uVar2 <= (long)uVar13);
          break;
        case 0x13:
          puVar4 = (uint *)(ulong)((long)uVar2 < (long)uVar13);
          break;
        case 0x14:
          puVar4 = (uint *)(ulong)(uVar2 != uVar13);
        }
      }
    }
    else {
      uVar9 = uVar9 - 0x50;
      puVar10 = (uint *)(ulong)uVar9;
      puVar4 = *(uint **)(param_3 + (long)(int)uVar9 * 8);
      if (((*(ulong *)(param_3 + 0x340) >> 0x3e & 1) != 0) &&
         (*(char *)(param_3 + (int)uVar9 + 0x358) != '\0')) goto LAB_7100801d20;
      if ((&DAT_7100d22a40)[(int)uVar9] != '\b') goto switchD_7100801f88_caseD_5;
      puVar4 = *(uint **)puVar4;
    }
  }
  else if (uVar9 == 0x92) {
    uVar13 = 0;
    uVar2 = 0;
    do {
      pbVar12 = pbVar11 + 1;
      bVar1 = *pbVar11;
      uVar18 = uVar2 & 0x3f;
      uVar2 = (ulong)((int)uVar2 + 7);
      uVar13 = uVar13 | ((ulong)bVar1 & 0x7f) << uVar18;
      pbVar11 = pbVar12;
    } while ((char)bVar1 < '\0');
    uVar18 = 0;
    uVar2 = 0;
    do {
      pbVar11 = pbVar12 + 1;
      bVar1 = *pbVar12;
      uVar19 = uVar2 & 0x3f;
      uVar14 = (int)uVar2 + 7;
      uVar2 = (ulong)uVar14;
      uVar18 = uVar18 | ((ulong)bVar1 & 0x7f) << uVar19;
      pbVar12 = pbVar11;
    } while ((char)bVar1 < '\0');
    uVar19 = uVar18;
    if ((uVar14 < 0x40) && (uVar19 = uVar18 | -1L << (uVar2 & 0x3f), (bVar1 & 0x40) == 0)) {
      uVar19 = uVar18;
    }
    iVar17 = (int)uVar13;
    if (0x61 < iVar17) goto switchD_7100801f88_caseD_5;
    puVar10 = *(uint **)(param_3 + (long)iVar17 * 8);
    if (((*(ulong *)(param_3 + 0x340) >> 0x3e & 1) == 0) ||
       (*(char *)(param_3 + iVar17 + 0x358) == '\0')) {
      if (iVar17 == 0x2e) {
        uVar5 = SVE_cntd(uVar13 & 0xffffffff,0x1f,1);
        puVar10 = (uint *)(long)(int)uVar5;
      }
      else {
        if ((&DAT_7100d22a40)[iVar17] != '\b') goto switchD_7100801f88_caseD_5;
        puVar10 = *(uint **)puVar10;
      }
    }
    puVar4 = (uint *)((long)puVar10 + uVar19);
  }
  else if (uVar9 < 0x93) {
    if (uVar9 < 0x90) {
      uVar13 = 0;
      uVar2 = 0;
      pbVar12 = pbVar11;
      do {
        pbVar11 = pbVar12 + 1;
        bVar1 = *pbVar12;
        uVar18 = uVar2 & 0x3f;
        uVar14 = (int)uVar2 + 7;
        uVar2 = (ulong)uVar14;
        uVar13 = uVar13 | ((ulong)bVar1 & 0x7f) << uVar18;
        pbVar12 = pbVar11;
      } while ((char)bVar1 < '\0');
      uVar18 = uVar13;
      if ((uVar14 < 0x40) && (uVar18 = uVar13 | -1L << (uVar2 & 0x3f), (bVar1 & 0x40) == 0)) {
        uVar18 = uVar13;
      }
      uVar9 = uVar9 - 0x70;
      puVar10 = (uint *)(ulong)uVar9;
      puVar3 = *(undefined8 **)(param_3 + (long)(int)uVar9 * 8);
      if (((*(ulong *)(param_3 + 0x340) >> 0x3e & 1) == 0) ||
         (*(char *)(param_3 + (int)uVar9 + 0x358) == '\0')) {
        if ((&DAT_7100d22a40)[(int)uVar9] != '\b') goto switchD_7100801f88_caseD_5;
        puVar3 = (undefined8 *)*puVar3;
      }
      puVar4 = (uint *)((long)puVar3 + uVar18);
    }
    else {
      if (uVar9 != 0x90) goto switchD_7100801f88_caseD_5;
      uVar13 = 0;
      uVar2 = 0;
      pbVar12 = pbVar11;
      do {
        pbVar11 = pbVar12 + 1;
        bVar1 = *pbVar12;
        uVar18 = uVar2 & 0x3f;
        uVar2 = (ulong)((int)uVar2 + 7);
        uVar13 = uVar13 | ((ulong)bVar1 & 0x7f) << uVar18;
        pbVar12 = pbVar11;
      } while ((char)bVar1 < '\0');
      iVar17 = (int)uVar13;
      if (0x61 < iVar17) goto switchD_7100801f88_caseD_5;
      puVar10 = *(uint **)(param_3 + (long)iVar17 * 8);
      if (((*(ulong *)(param_3 + 0x340) >> 0x3e & 1) == 0) ||
         (puVar4 = puVar10, *(char *)(param_3 + iVar17 + 0x358) == '\0')) {
        if (iVar17 == 0x2e) {
          uVar5 = SVE_cntd(uVar13 & 0xffffffff,0x1f,1);
          puVar4 = (uint *)(long)(int)uVar5;
        }
        else {
          if ((&DAT_7100d22a40)[iVar17] != '\b') goto switchD_7100801f88_caseD_5;
          puVar4 = *(uint **)puVar10;
        }
      }
    }
  }
  else {
    if (uVar9 == 0x96) goto LAB_7100801d30;
    if (uVar9 == 0xf1) {
      pbVar11 = (byte *)FUN_7100801b00(param_3,param_1[1],param_1 + 2,&local_208);
      puVar4 = local_208;
    }
    else {
      if ((uVar9 != 0x94) || (uVar14 == 0)) goto switchD_7100801f88_caseD_5;
      uVar6 = uVar14 - 1;
      puVar10 = (uint *)local_200[(int)uVar6];
      pbVar11 = param_1 + 2;
      bVar1 = param_1[1];
      if (bVar1 == 4) {
        puVar4 = (uint *)(ulong)*puVar10;
      }
      else if (bVar1 < 5) {
        if (bVar1 == 1) {
          puVar4 = (uint *)(ulong)(byte)*puVar10;
        }
        else {
          if (bVar1 != 2) goto switchD_7100801f88_caseD_5;
          puVar4 = (uint *)(ulong)(ushort)*puVar10;
        }
      }
      else {
        if (bVar1 != 8) goto switchD_7100801f88_caseD_5;
        puVar4 = *(uint **)puVar10;
      }
    }
  }
LAB_7100801d20:
  puVar10 = puVar4;
  if (0x3f < uVar6) goto switchD_7100801f88_caseD_5;
  uVar14 = uVar6 + 1;
  local_200[(int)uVar6] = (ulong)puVar4;
LAB_7100801d30:
  param_1 = pbVar11;
  if (param_2 <= pbVar11) {
    if (uVar14 != 0) {
      return local_200[(int)(uVar14 - 1)];
    }
switchD_7100801f88_caseD_5:
    FUN_710080f820();
    puVar16 = extraout_x9;
LAB_7100801cf8:
                    /* WARNING: Could not recover jumptable at 0x007100801d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK_7100801d08 +
                      (long)*(short *)(puVar16 + ((ulong)puVar10 & 0xffffffff) * 2) * 4))();
    return uVar2;
  }
  goto LAB_7100801cd0;
}



// ===== FUN_71008024a0 @ 71008024a0 (size=820) =====

void FUN_71008024a0(long param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 uVar5;
  long *plVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long unaff_x19;
  ulong unaff_x21;
  undefined1 unaff_w22;
  undefined1 *unaff_x23;
  long unaff_x24;
  undefined1 *unaff_x26;
  long unaff_x27;
  char *local_3e0;
  ulong local_3d8;
  undefined8 local_3c8;
  long alStack_3c0 [31];
  undefined8 *local_2c8;
  ulong local_80;
  char acStack_68 [31];
  char local_49;
  
  FUN_710080f900(alStack_3c0,param_1,0x3c0);
  if ((((local_80 >> 0x3e & 1) == 0) || (local_49 == '\0')) && (local_2c8 == (undefined8 *)0x0)) {
    if (DAT_7100d22a5f != '\b') goto LAB_71008026c0;
    if ((local_80 & 0x4000000000000000) != 0) {
      local_49 = '\0';
    }
    local_2c8 = &local_3c8;
    local_3c8 = *(undefined8 *)(param_1 + 0x310);
  }
  local_3d8 = *(ulong *)(param_1 + 0x340);
  unaff_x21 = local_3d8 & 0x4000000000000000;
  if ((local_3d8 >> 0x3e & 1) != 0) {
    *(undefined1 *)(param_1 + 0x377) = 0;
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (*(char *)(param_2 + 0x372) == '\x01') {
    iVar3 = (int)*(undefined8 *)(param_2 + 0x388);
    if (0x61 < iVar3) goto LAB_71008026c0;
    puVar10 = (undefined8 *)alStack_3c0[iVar3];
    if (((local_80 & 0x4000000000000000) == 0) || (acStack_68[iVar3] == '\0')) {
      if (iVar3 == 0x2e) {
        uVar5 = SVE_cntd(*(undefined8 *)(param_2 + 0x388),0x1f,1);
        puVar10 = (undefined8 *)(long)(int)uVar5;
      }
      else {
        if ((&DAT_7100d22a40)[iVar3] != '\b') goto LAB_71008026c0;
        puVar10 = (undefined8 *)*puVar10;
      }
    }
    unaff_x24 = (long)puVar10 + *(long *)(param_2 + 0x380);
  }
  else {
    if (*(char *)(param_2 + 0x372) != '\x02') goto LAB_71008026c0;
    uVar8 = 0;
    uVar9 = 0;
    pbVar7 = *(byte **)(param_2 + 0x390);
    do {
      pbVar4 = pbVar7 + 1;
      bVar1 = *pbVar7;
      uVar2 = uVar9 & 0x3f;
      uVar9 = (ulong)((int)uVar9 + 7);
      uVar8 = uVar8 | ((ulong)bVar1 & 0x7f) << uVar2;
      pbVar7 = pbVar4;
    } while ((char)bVar1 < '\0');
    unaff_x24 = FUN_7100801ca0(pbVar4,pbVar4 + uVar8,alStack_3c0,0);
  }
  unaff_x26 = (undefined1 *)(param_1 + 0x358);
  unaff_x27 = param_2 + 0x310;
  unaff_x23 = &DAT_7100d22a40;
  local_3e0 = acStack_68;
  unaff_x19 = 0;
  unaff_w22 = 1;
  *(long *)(param_1 + 0x310) = unaff_x24;
  do {
    bVar1 = *(byte *)(unaff_x27 + unaff_x19);
    if (bVar1 == 3) {
      uVar8 = 0;
      uVar9 = 0;
      pbVar7 = *(byte **)(param_2 + unaff_x19 * 8);
      do {
        pbVar4 = pbVar7 + 1;
        bVar1 = *pbVar7;
        uVar2 = uVar9 & 0x3f;
        uVar9 = (ulong)((int)uVar9 + 7);
        uVar8 = uVar8 | ((ulong)bVar1 & 0x7f) << uVar2;
        pbVar7 = pbVar4;
      } while ((char)bVar1 < '\0');
      plVar6 = (long *)FUN_7100801ca0(pbVar4,pbVar4 + uVar8,alStack_3c0,unaff_x24);
joined_r0x007100802648:
      if (unaff_x21 != 0) {
        *unaff_x26 = 0;
      }
LAB_71008025c0:
      *(long **)(param_1 + unaff_x19 * 8) = plVar6;
    }
    else {
      if (3 < bVar1) {
        if (bVar1 == 4) {
          bVar1 = unaff_x23[unaff_x19];
          plVar6 = (long *)(unaff_x24 + *(long *)(param_2 + unaff_x19 * 8));
        }
        else {
          if (bVar1 != 5) goto LAB_71008025c4;
          uVar8 = 0;
          uVar9 = 0;
          pbVar7 = *(byte **)(param_2 + unaff_x19 * 8);
          do {
            pbVar4 = pbVar7 + 1;
            bVar1 = *pbVar7;
            uVar2 = uVar9 & 0x3f;
            uVar9 = (ulong)((int)uVar9 + 7);
            uVar8 = uVar8 | ((ulong)bVar1 & 0x7f) << uVar2;
            pbVar7 = pbVar4;
          } while ((char)bVar1 < '\0');
          plVar6 = (long *)FUN_7100801ca0(pbVar4,pbVar4 + uVar8,alStack_3c0,unaff_x24);
          bVar1 = unaff_x23[unaff_x19];
        }
        if (8 < bVar1) goto LAB_71008026c0;
        *unaff_x26 = unaff_w22;
        goto LAB_71008025c0;
      }
      if (bVar1 == 1) {
LAB_71008026c4:
        plVar6 = (long *)(unaff_x24 + *(long *)(param_2 + unaff_x19 * 8));
        if (unaff_x21 != 0) {
          *unaff_x26 = 0;
        }
        goto LAB_71008025c0;
      }
      if (bVar1 == 2) {
        uVar5 = *(undefined8 *)(param_2 + unaff_x19 * 8);
        iVar3 = (int)uVar5;
        if (local_3e0[iVar3] == '\0') {
          plVar6 = (long *)alStack_3c0[iVar3];
          goto joined_r0x007100802648;
        }
        if (iVar3 < 0x62) {
          plVar6 = (long *)alStack_3c0[iVar3];
          if ((local_80 >> 0x3e & 1) == 0) {
            if (iVar3 == 0x2e) {
              uVar5 = SVE_cntd(uVar5,0x1f,1);
              plVar6 = (long *)(long)(int)uVar5;
            }
            else {
              if (unaff_x23[iVar3] != '\b') goto LAB_71008026c0;
              plVar6 = (long *)*plVar6;
            }
          }
          if ((byte)(&DAT_7100d22a40)[unaff_x19] < 9) {
            *unaff_x26 = unaff_w22;
            goto LAB_71008025c0;
          }
        }
LAB_71008026c0:
        FUN_710080f820();
        goto LAB_71008026c4;
      }
    }
LAB_71008025c4:
    unaff_x19 = unaff_x19 + 1;
    unaff_x26 = unaff_x26 + 1;
    if (unaff_x19 == 0x62) {
      uVar8 = local_3d8 & 0x7fffffffffffffff;
      if (*(char *)(param_2 + 0x3cb) != '\0') {
        uVar8 = local_3d8 | 0x8000000000000000;
      }
      *(ulong *)(param_1 + 0x340) = uVar8;
      return;
    }
  } while( true );
}



// ===== FUN_71008027e0 @ 71008027e0 (size=252) =====

void FUN_71008027e0(long param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  FUN_71008024a0();
  lVar3 = *(long *)(param_2 + 0x3c0);
  puVar5 = (undefined8 *)0x0;
  if (*(char *)(param_2 + lVar3 + 0x310) == '\a') {
LAB_7100802810:
    *(undefined8 **)(param_1 + 0x318) = puVar5;
    return;
  }
  iVar2 = (int)lVar3;
  if (iVar2 < 0x62) {
    puVar5 = *(undefined8 **)(param_1 + (long)iVar2 * 8);
    if (((*(ulong *)(param_1 + 0x340) >> 0x3e & 1) == 0) ||
       (*(char *)(param_1 + iVar2 + 0x358) == '\0')) {
      if (iVar2 == 0x2e) {
        uVar4 = SVE_cntd(lVar3,0x1f,1);
        puVar5 = (undefined8 *)(long)(int)uVar4;
      }
      else {
        if ((&DAT_7100d22a40)[iVar2] != '\b') goto LAB_71008028d4;
        puVar5 = (undefined8 *)*puVar5;
      }
    }
    if ((((*(char *)(param_2 + 0x332) == '\x06') || (*(char *)(param_2 + 0x332) == '\0')) ||
        (((*(ulong *)(param_1 + 0x340) >> 0x3e & 1) != 0 && (*(char *)(param_1 + 0x37a) != '\0'))))
       || (DAT_7100d22a62 == '\b')) goto LAB_7100802810;
  }
LAB_71008028d4:
  FUN_710080f820();
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x71008028d8);
  (*pcVar1)();
}



// ===== FUN_71008028e0 @ 71008028e0 (size=256) =====

void FUN_71008028e0(byte *param_1,byte *param_2,long param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong extraout_x1;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined *extraout_x10;
  undefined *puVar9;
  
  *(undefined8 *)(param_4 + 0x378) = 0;
  if (param_2 <= param_1) {
    return;
  }
  puVar9 = &DAT_71009cf3d8;
  do {
    if ((ulong)(*(long *)(param_3 + 0x318) - (*(long *)(param_3 + 0x340) >> 0x3f)) <=
        *(ulong *)(param_4 + 0x3a0)) {
      return;
    }
    pbVar7 = param_1 + 1;
    bVar1 = *param_1;
    uVar5 = (ulong)bVar1;
    bVar2 = bVar1 & 0xc0;
    if (bVar2 == 0x40) {
      *(ulong *)(param_4 + 0x3a0) = *(ulong *)(param_4 + 0x3a0) + (uVar5 & 0x3f);
    }
    else if (bVar2 == 0x80) {
      uVar8 = 0;
      uVar6 = 0;
      pbVar4 = pbVar7;
      do {
        pbVar7 = pbVar4 + 1;
        bVar2 = *pbVar4;
        uVar3 = uVar6 & 0x3f;
        uVar6 = (ulong)((int)uVar6 + 7);
        uVar8 = uVar8 | ((ulong)bVar2 & 0x7f) << uVar3;
        pbVar4 = pbVar7;
      } while ((char)bVar2 < '\0');
      *(undefined1 *)(param_4 + (uVar5 & 0x3f) + 0x310) = 1;
      *(ulong *)(param_4 + (uVar5 & 0x3f) * 8) = uVar8 * -8;
    }
    else {
      if (bVar2 != 0xc0) {
        if (0x2f < bVar1) {
          FUN_710080f820();
          uVar5 = extraout_x1;
          puVar9 = extraout_x10;
        }
                    /* WARNING: Could not recover jumptable at 0x007100802960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)*(short *)(puVar9 + (uVar5 & 0xffffffff) * 2) * 4 + 0x7100802964))();
        return;
      }
      *(undefined1 *)(param_4 + (uVar5 & 0x3f) + 0x310) = 0;
    }
    param_1 = pbVar7;
  } while (pbVar7 < param_2);
  return;
}



// ===== FUN_7100802b40 @ 7100802b40 (size=120) =====

void FUN_7100802b40(undefined8 param_1)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  ulong extraout_x1;
  ulong uVar9;
  ulong uVar10;
  undefined8 in_x3;
  byte *pbVar11;
  undefined8 in_x4;
  ulong uVar12;
  undefined8 in_x7;
  undefined8 in_x9;
  long extraout_x10;
  long lVar13;
  undefined8 in_x10;
  undefined8 in_x11;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + 0x10) = in_x9;
  *(undefined8 *)(unaff_x29 + 0x18) = in_x10;
  *(undefined8 *)(unaff_x29 + 0x20) = param_1;
  *(undefined8 *)(unaff_x29 + 0x28) = in_x11;
  *(undefined8 *)(unaff_x29 + 0x30) = in_x4;
  *(undefined8 *)(unaff_x29 + 0x38) = in_x7;
  uVar7 = FUN_710080f900(in_x3,in_x7,0x3a0);
  pbVar8 = *(byte **)(unaff_x29 + 0x30);
  lVar3 = *(long *)(unaff_x29 + 0x38);
  pbVar1 = *(byte **)(unaff_x29 + 0x10);
  lVar13 = *(long *)(unaff_x29 + 0x18);
  lVar2 = *(long *)(unaff_x29 + 0x20);
  *(undefined8 *)(lVar3 + 0x378) = uVar7;
  while ((pbVar8 < pbVar1 &&
         (*(ulong *)(lVar3 + 0x3a0) <
          (ulong)(*(long *)(lVar2 + 0x318) - (*(long *)(lVar2 + 0x340) >> 0x3f))))) {
    pbVar11 = pbVar8 + 1;
    bVar4 = *pbVar8;
    uVar9 = (ulong)bVar4;
    bVar5 = bVar4 & 0xc0;
    pbVar8 = pbVar11;
    if (bVar5 == 0x40) {
      *(ulong *)(lVar3 + 0x3a0) = *(ulong *)(lVar3 + 0x3a0) + (uVar9 & 0x3f);
    }
    else if (bVar5 == 0x80) {
      uVar12 = 0;
      uVar10 = 0;
      do {
        pbVar8 = pbVar11 + 1;
        bVar5 = *pbVar11;
        uVar6 = uVar10 & 0x3f;
        uVar10 = (ulong)((int)uVar10 + 7);
        uVar12 = uVar12 | ((ulong)bVar5 & 0x7f) << uVar6;
        pbVar11 = pbVar8;
      } while ((char)bVar5 < '\0');
      *(undefined1 *)(lVar3 + (uVar9 & 0x3f) + 0x310) = 1;
      *(ulong *)(lVar3 + (uVar9 & 0x3f) * 8) = uVar12 * -8;
    }
    else {
      if (bVar5 != 0xc0) {
        if (0x2f < bVar4) {
          FUN_710080f820();
          uVar9 = extraout_x1;
          lVar13 = extraout_x10;
        }
                    /* WARNING: Could not recover jumptable at 0x007100802960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)*(short *)(lVar13 + (uVar9 & 0xffffffff) * 2) * 4 + 0x7100802964))();
        return;
      }
      *(undefined1 *)(lVar3 + (uVar9 & 0x3f) + 0x310) = 0;
    }
  }
  return;
}



// ===== FUN_7100803138 @ 7100803138 (size=124) =====

void FUN_7100803138(void)

{
  FUN_7100802b40();
  return;
}



// ===== FUN_7100803160 @ 7100803160 (size=260) =====

void FUN_7100803160(byte *param_1,byte *param_2,long param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong extraout_x1;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  undefined *extraout_x9;
  undefined *puVar10;
  
  *(undefined8 *)(param_4 + 0x378) = 0;
  if (param_2 <= param_1) {
    return;
  }
  puVar10 = &DAT_71009cf438;
  do {
    if ((ulong)(*(long *)(param_3 + 0x318) - (*(long *)(param_3 + 0x340) >> 0x3f)) <=
        *(ulong *)(param_4 + 0x3a0)) {
      return;
    }
    pbVar9 = param_1 + 1;
    bVar1 = *param_1;
    uVar5 = (ulong)bVar1;
    bVar2 = bVar1 & 0xc0;
    if (bVar2 == 0x40) {
      *(ulong *)(param_4 + 0x3a0) =
           *(ulong *)(param_4 + 0x3a0) + (uVar5 & 0x3f) * *(long *)(param_4 + 0x3b8);
    }
    else if (bVar2 == 0x80) {
      uVar6 = 0;
      uVar7 = 0;
      pbVar4 = pbVar9;
      do {
        pbVar9 = pbVar4 + 1;
        bVar2 = *pbVar4;
        uVar3 = uVar7 & 0x3f;
        uVar7 = (ulong)((int)uVar7 + 7);
        uVar6 = uVar6 | ((ulong)bVar2 & 0x7f) << uVar3;
        pbVar4 = pbVar9;
      } while ((char)bVar2 < '\0');
      lVar8 = *(long *)(param_4 + 0x3b0);
      *(undefined1 *)(param_4 + (uVar5 & 0x3f) + 0x310) = 1;
      *(ulong *)(param_4 + (uVar5 & 0x3f) * 8) = uVar6 * lVar8;
    }
    else {
      if (bVar2 != 0xc0) {
        if (0x2f < bVar1) {
          FUN_710080f820();
          uVar5 = extraout_x1;
          puVar10 = extraout_x9;
        }
                    /* WARNING: Could not recover jumptable at 0x0071008031e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)*(short *)(puVar10 + (uVar5 & 0xffffffff) * 2) * 4 + 0x71008031e4))();
        return;
      }
      *(undefined1 *)(param_4 + (uVar5 & 0x3f) + 0x310) = 0;
    }
    param_1 = pbVar9;
  } while (pbVar9 < param_2);
  return;
}



// ===== FUN_71008033cc @ 71008033cc (size=120) =====

void FUN_71008033cc(undefined8 param_1)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  ulong extraout_x1;
  ulong uVar9;
  ulong uVar10;
  undefined8 in_x3;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x7;
  long extraout_x9;
  long lVar14;
  undefined8 in_x9;
  undefined8 in_x10;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + 0x10) = param_1;
  *(undefined8 *)(unaff_x29 + 0x18) = in_x9;
  *(undefined8 *)(unaff_x29 + 0x20) = in_x7;
  *(undefined8 *)(unaff_x29 + 0x28) = in_x4;
  *(undefined8 *)(unaff_x29 + 0x30) = in_x10;
  *(undefined8 *)(unaff_x29 + 0x38) = in_x5;
  uVar7 = FUN_710080f900(in_x3,in_x5,0x3a0);
  lVar3 = *(long *)(unaff_x29 + 0x38);
  pbVar1 = *(byte **)(unaff_x29 + 0x10);
  lVar14 = *(long *)(unaff_x29 + 0x18);
  lVar2 = *(long *)(unaff_x29 + 0x20);
  pbVar8 = *(byte **)(unaff_x29 + 0x28);
  *(undefined8 *)(lVar3 + 0x378) = uVar7;
  while ((pbVar8 < pbVar1 &&
         (*(ulong *)(lVar3 + 0x3a0) <
          (ulong)(*(long *)(lVar2 + 0x318) - (*(long *)(lVar2 + 0x340) >> 0x3f))))) {
    pbVar13 = pbVar8 + 1;
    bVar4 = *pbVar8;
    uVar9 = (ulong)bVar4;
    bVar5 = bVar4 & 0xc0;
    pbVar8 = pbVar13;
    if (bVar5 == 0x40) {
      *(ulong *)(lVar3 + 0x3a0) =
           *(ulong *)(lVar3 + 0x3a0) + (uVar9 & 0x3f) * *(long *)(lVar3 + 0x3b8);
    }
    else if (bVar5 == 0x80) {
      uVar10 = 0;
      uVar11 = 0;
      do {
        pbVar8 = pbVar13 + 1;
        bVar5 = *pbVar13;
        uVar6 = uVar11 & 0x3f;
        uVar11 = (ulong)((int)uVar11 + 7);
        uVar10 = uVar10 | ((ulong)bVar5 & 0x7f) << uVar6;
        pbVar13 = pbVar8;
      } while ((char)bVar5 < '\0');
      lVar12 = *(long *)(lVar3 + 0x3b0);
      *(undefined1 *)(lVar3 + (uVar9 & 0x3f) + 0x310) = 1;
      *(ulong *)(lVar3 + (uVar9 & 0x3f) * 8) = uVar10 * lVar12;
    }
    else {
      if (bVar5 != 0xc0) {
        if (0x2f < bVar4) {
          FUN_710080f820();
          uVar9 = extraout_x1;
          lVar14 = extraout_x9;
        }
                    /* WARNING: Could not recover jumptable at 0x0071008031e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)*(short *)(lVar14 + (uVar9 & 0xffffffff) * 2) * 4 + 0x71008031e4))();
        return;
      }
      *(undefined1 *)(lVar3 + (uVar9 & 0x3f) + 0x310) = 0;
    }
  }
  return;
}



// ===== FUN_71008039e8 @ 71008039e8 (size=128) =====

void FUN_71008039e8(void)

{
  FUN_71008033cc();
  return;
}



// ===== FUN_7100803a00 @ 7100803a00 (size=1084) =====

undefined8 FUN_7100803a00(long param_1,long param_2)

{
  char *pcVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  uint *puVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  char cVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  char *pcVar17;
  uint *puVar18;
  undefined1 auVar19 [16];
  undefined8 local_8;
  
  *(undefined8 *)(param_2 + 800) = 0;
  *(undefined8 *)(param_2 + 0x328) = 0;
  *(undefined8 *)(param_2 + 0x330) = 0;
  *(undefined8 *)(param_2 + 0x338) = 0;
  *(undefined8 *)(param_2 + 0x110) = 0;
  *(undefined1 *)(param_2 + 0x332) = 6;
  *(undefined8 *)(param_2 + 0x3d0) = 0;
  *(undefined8 *)(param_2 + 0x310) = 0;
  *(undefined8 *)(param_2 + 0x318) = 0;
  *(undefined8 *)(param_2 + 0x340) = 0;
  *(undefined8 *)(param_2 + 0x348) = 0;
  *(undefined8 *)(param_2 + 0x350) = 0;
  *(undefined8 *)(param_2 + 0x358) = 0;
  *(undefined8 *)(param_2 + 0x360) = 0;
  *(undefined8 *)(param_2 + 0x368) = 0;
  *(undefined8 *)(param_2 + 0x370) = 0;
  *(undefined8 *)(param_2 + 0x378) = 0;
  *(undefined8 *)(param_2 + 0x380) = 0;
  *(undefined8 *)(param_2 + 0x388) = 0;
  *(undefined8 *)(param_2 + 0x390) = 0;
  *(undefined8 *)(param_2 + 0x398) = 0;
  *(undefined8 *)(param_2 + 0x3a0) = 0;
  *(undefined8 *)(param_2 + 0x3a8) = 0;
  *(undefined8 *)(param_2 + 0x3b0) = 0;
  *(undefined8 *)(param_2 + 0x3b8) = 0;
  *(undefined8 *)(param_2 + 0x3c0) = 0;
  *(undefined8 *)(param_2 + 0x3c8) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  if (*(long *)(param_1 + 0x318) == 0) {
    return 5;
  }
  lVar7 = NEON_cmge(*(undefined8 *)(param_1 + 0x340),0);
  puVar6 = (uint *)FUN_71008061a0(*(long *)(param_1 + 0x318) + lVar7,param_1 + 0x328);
  if (puVar6 == (uint *)0x0) {
    return 5;
  }
  *(undefined8 *)(param_2 + 0x3a0) = *(undefined8 *)(param_1 + 0x338);
  puVar18 = (uint *)((long)puVar6 + (4 - (long)(int)puVar6[1]));
  pcVar17 = (char *)((long)puVar18 + 9);
  lVar7 = FUN_710081ce00(pcVar17);
  pbVar10 = (byte *)(pcVar17 + lVar7 + 1);
  if ((*(char *)((long)puVar18 + 9) == 'e') && (*(char *)((long)puVar18 + 10) == 'h')) {
    pcVar1 = pcVar17 + lVar7 + 1;
    pbVar10 = pbVar10 + 8;
    pcVar17 = (char *)((long)puVar18 + 0xb);
    *(undefined8 *)(param_2 + 0x3d0) = *(undefined8 *)pcVar1;
  }
  if (3 < (byte)puVar18[2]) {
    if (*pbVar10 != 8) {
      return 3;
    }
    if (pbVar10[1] != 0) {
      return 3;
    }
    pbVar10 = pbVar10 + 2;
  }
  uVar16 = 0;
  uVar13 = 0;
  do {
    pbVar9 = pbVar10 + 1;
    bVar4 = *pbVar10;
    uVar14 = uVar13 & 0x3f;
    uVar13 = (ulong)((int)uVar13 + 7);
    uVar16 = uVar16 | ((ulong)bVar4 & 0x7f) << uVar14;
    pbVar10 = pbVar9;
  } while ((char)bVar4 < '\0');
  uVar14 = 0;
  uVar13 = 0;
  *(ulong *)(param_2 + 0x3b8) = uVar16;
  do {
    pbVar10 = pbVar9;
    pbVar9 = pbVar10 + 1;
    bVar4 = *pbVar10;
    uVar15 = uVar13 & 0x3f;
    uVar2 = (int)uVar13 + 7;
    uVar13 = (ulong)uVar2;
    uVar14 = uVar14 | ((ulong)bVar4 & 0x7f) << uVar15;
  } while ((char)bVar4 < '\0');
  uVar15 = uVar14;
  if ((uVar2 < 0x40) && (uVar15 = uVar14 | -1L << (uVar13 & 0x3f), (bVar4 & 0x40) == 0)) {
    uVar15 = uVar14;
  }
  *(ulong *)(param_2 + 0x3b0) = uVar15;
  uVar13 = 0;
  uVar14 = 0;
  if ((char)puVar18[2] == '\x01') {
    *(ulong *)(param_2 + 0x3c0) = (ulong)*pbVar9;
    pbVar10 = pbVar10 + 2;
    *(undefined1 *)(param_2 + 0x3c9) = 0xff;
    cVar11 = *pcVar17;
    if (cVar11 != 'z') goto LAB_7100803b74;
LAB_7100803cc0:
    uVar14 = 0;
    uVar13 = 0;
    pbVar9 = pbVar10;
    do {
      pbVar10 = pbVar9 + 1;
      bVar4 = *pbVar9;
      uVar5 = uVar13 & 0x3f;
      uVar13 = (ulong)((int)uVar13 + 7);
      uVar14 = uVar14 | ((ulong)bVar4 & 0x7f) << uVar5;
      pbVar9 = pbVar10;
    } while ((char)bVar4 < '\0');
    *(undefined1 *)(param_2 + 0x3ca) = 1;
    pbVar9 = pbVar10 + uVar14;
    cVar11 = pcVar17[1];
    pbVar12 = pbVar9;
    if (cVar11 == '\0') goto LAB_7100803ba8;
    pcVar17 = pcVar17 + 1;
  }
  else {
    do {
      pbVar10 = pbVar9 + 1;
      bVar4 = *pbVar9;
      uVar5 = uVar14 & 0x3f;
      uVar14 = (ulong)((int)uVar14 + 7);
      uVar13 = uVar13 | ((ulong)bVar4 & 0x7f) << uVar5;
      pbVar9 = pbVar10;
    } while ((char)bVar4 < '\0');
    *(ulong *)(param_2 + 0x3c0) = uVar13;
    *(undefined1 *)(param_2 + 0x3c9) = 0xff;
    cVar11 = *pcVar17;
    if (cVar11 == 'z') goto LAB_7100803cc0;
LAB_7100803b74:
    pbVar9 = (byte *)0x0;
    pbVar12 = pbVar10;
    if (cVar11 == '\0') goto LAB_7100803ba8;
  }
  do {
    pcVar17 = pcVar17 + 1;
    if (cVar11 == 'L') {
      pbVar8 = pbVar10 + 1;
      *(byte *)(param_2 + 0x3c9) = *pbVar10;
    }
    else if (cVar11 == 'R') {
      pbVar8 = pbVar10 + 1;
      *(byte *)(param_2 + 0x3c8) = *pbVar10;
    }
    else if (cVar11 == 'P') {
      pbVar8 = (byte *)FUN_7100801b00(param_1,*pbVar10,pbVar10 + 1,&local_8);
      *(undefined8 *)(param_2 + 0x3a8) = local_8;
    }
    else if (cVar11 == 'S') {
      *(undefined1 *)(param_2 + 0x3cb) = 1;
      pbVar8 = pbVar10;
    }
    else {
      pbVar8 = pbVar9;
      if (cVar11 != 'B') goto LAB_7100803ba4;
      *(undefined1 *)(param_2 + 0x398) = 1;
      pbVar8 = pbVar10;
    }
    cVar11 = *pcVar17;
    pbVar10 = pbVar8;
  } while (cVar11 != '\0');
  pbVar12 = pbVar9;
  if (pbVar9 == (byte *)0x0) {
LAB_7100803ba4:
    pbVar12 = pbVar8;
    if (pbVar8 == (byte *)0x0) {
      return 3;
    }
  }
LAB_7100803ba8:
  if ((uVar15 == 0xfffffffffffffff8) && (uVar16 == 1)) goto LAB_7100803dd4;
  FUN_7100803160(pbVar12,(long)puVar18 + (ulong)*puVar18 + 4,param_1,param_2);
  do {
    bVar4 = *(byte *)(param_2 + 0x3c8);
    if (bVar4 == 0xff) {
      lVar7 = 8;
LAB_7100803bfc:
      pbVar10 = (byte *)((long)puVar6 + lVar7);
      if (*(char *)(param_2 + 0x3ca) == '\0') {
        if (*(char *)(param_2 + 0x3c9) != -1) {
          pbVar10 = (byte *)FUN_7100801b00(param_1,*(char *)(param_2 + 0x3c9),pbVar10,&local_8);
          *(undefined8 *)(param_1 + 800) = local_8;
        }
      }
      else {
        uVar16 = 0;
        uVar13 = 0;
        do {
          pbVar9 = pbVar10 + 1;
          bVar4 = *pbVar10;
          uVar14 = uVar13 & 0x3f;
          uVar13 = (ulong)((int)uVar13 + 7);
          uVar16 = uVar16 | ((ulong)bVar4 & 0x7f) << uVar14;
          pbVar10 = pbVar9;
        } while ((char)bVar4 < '\0');
        pbVar10 = pbVar9 + uVar16;
        if (*(char *)(param_2 + 0x3c9) != -1) {
          FUN_7100801b00(param_1,*(char *)(param_2 + 0x3c9),pbVar9,&local_8);
          *(undefined8 *)(param_1 + 800) = local_8;
        }
      }
      lVar7 = (long)puVar6 + (ulong)*puVar6 + 4;
      auVar19._8_8_ = lVar7;
      auVar19._0_8_ = pbVar10;
      if ((*(long *)(param_2 + 0x3b0) == -8) && (*(long *)(param_2 + 0x3b8) == 1)) {
LAB_7100803e18:
        FUN_71008028e0(auVar19._0_8_,auVar19._8_8_,param_1);
      }
      else {
        FUN_7100803160(pbVar10,lVar7,param_1,param_2);
      }
      return 0;
    }
    bVar3 = bVar4 & 7;
    if (bVar3 == 2) {
      lVar7 = 0xc;
      goto LAB_7100803bfc;
    }
    if (bVar3 < 3) {
      lVar7 = 0x18;
      if ((bVar4 & 7) == 0) goto LAB_7100803bfc;
      auVar19 = FUN_710080f820();
      goto LAB_7100803e18;
    }
    lVar7 = 0x10;
    if ((bVar3 == 3) || (lVar7 = 0x18, bVar3 == 4)) goto LAB_7100803bfc;
    FUN_710080f820();
LAB_7100803dd4:
    FUN_71008028e0();
  } while( true );
}



// ===== FUN_7100803e40 @ 7100803e40 (size=880) =====

void FUN_7100803e40(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 unaff_x30;
  undefined8 local_3e0;
  undefined1 auStack_3d8 [882];
  undefined1 local_66;
  undefined8 local_58;
  undefined8 local_50;
  
  FUN_7100808340(param_1,0,0x3c0);
  *(undefined8 *)(param_1 + 0x318) = unaff_x30;
  *(undefined8 *)(param_1 + 0x340) = 0x4000000000000000;
  iVar2 = FUN_7100803a00(param_1,auStack_3d8);
  if (iVar2 == 0) {
    iVar2 = FUN_7100835a40(0x7100d22a38,&LAB_71008016c0);
    if ((iVar2 != 0) && (DAT_7100d22a40 == '\0')) {
      DAT_7100d22a40 = '\b';
      DAT_7100d22a41 = 8;
      DAT_7100d22a42 = 8;
      DAT_7100d22a43 = 8;
      DAT_7100d22a44 = 8;
      DAT_7100d22a45 = 8;
      DAT_7100d22a46 = 8;
      DAT_7100d22a47 = 8;
      DAT_7100d22a48 = 8;
      DAT_7100d22a49 = 8;
      DAT_7100d22a4a = 8;
      DAT_7100d22a4b = 8;
      DAT_7100d22a4c = 8;
      DAT_7100d22a4d = 8;
      DAT_7100d22a4e = 8;
      DAT_7100d22a4f = 8;
      DAT_7100d22a50 = 8;
      DAT_7100d22a51 = 8;
      DAT_7100d22a52 = 8;
      DAT_7100d22a53 = 8;
      DAT_7100d22a54 = 8;
      DAT_7100d22a55 = 8;
      DAT_7100d22a56 = 8;
      DAT_7100d22a57 = 8;
      DAT_7100d22a58 = 8;
      DAT_7100d22a59 = 8;
      DAT_7100d22a5a = 8;
      DAT_7100d22a5b = 8;
      DAT_7100d22a5c = 8;
      DAT_7100d22a5d = 8;
      DAT_7100d22a5e = 8;
      DAT_7100d22a5f = '\b';
      DAT_7100d22a80 = 0;
      DAT_7100d22a81 = 0;
      DAT_7100d22a82 = 0;
      DAT_7100d22a83 = 0;
      DAT_7100d22a84 = 0;
      DAT_7100d22a85 = 0;
      DAT_7100d22a86 = 0;
      DAT_7100d22a87 = 0;
      DAT_7100d22a88 = 8;
      DAT_7100d22a89 = 8;
      DAT_7100d22a8a = 8;
      DAT_7100d22a8b = 8;
      DAT_7100d22a8c = 8;
      DAT_7100d22a8d = 8;
      DAT_7100d22a8e = 8;
      DAT_7100d22a8f = 8;
      DAT_7100d22a90 = 0;
      DAT_7100d22a91 = 0;
      DAT_7100d22a92 = 0;
      DAT_7100d22a93 = 0;
      DAT_7100d22a94 = 0;
      DAT_7100d22a95 = 0;
      DAT_7100d22a96 = 0;
      DAT_7100d22a97 = 0;
      DAT_7100d22a98 = 0;
      DAT_7100d22a99 = 0;
      DAT_7100d22a9a = 0;
      DAT_7100d22a9b = 0;
      DAT_7100d22a9c = 0;
      DAT_7100d22a9d = 0;
      DAT_7100d22a9e = 0;
      DAT_7100d22a9f = 0;
      DAT_7100d22a6e = 8;
      DAT_7100d22a70 = 0;
      DAT_7100d22a71 = 0;
      DAT_7100d22a72 = 0;
      DAT_7100d22a73 = 0;
      DAT_7100d22a74 = 0;
      DAT_7100d22a75 = 0;
      DAT_7100d22a76 = 0;
      DAT_7100d22a77 = 0;
      DAT_7100d22a78 = 0;
      DAT_7100d22a79 = 0;
      DAT_7100d22a7a = 0;
      DAT_7100d22a7b = 0;
      DAT_7100d22a7c = 0;
      DAT_7100d22a7d = 0;
      DAT_7100d22a7e = 0;
      DAT_7100d22a7f = 0;
      DAT_7100d22aa0 = 8;
    }
    if (DAT_7100d22a5f == '\b') {
      if ((*(ulong *)(param_1 + 0x340) >> 0x3e & 1) != 0) {
        *(undefined1 *)(param_1 + 0x377) = 0;
      }
      *(undefined8 **)(param_1 + 0xf8) = &local_3e0;
      local_66 = 1;
      local_58 = 0;
      local_50 = 0x1f;
      local_3e0 = param_2;
      FUN_71008024a0(param_1,auStack_3d8);
      *(undefined8 *)(param_1 + 0x318) = param_3;
      return;
    }
  }
  FUN_710080f820();
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x71008041ac);
  (*pcVar1)();
}



// ===== FUN_71008041c0 @ 71008041c0 (size=320) =====

/* WARNING: Removing unreachable block (ram,0x0071008043c4) */
/* WARNING: Removing unreachable block (ram,0x0071008043cc) */
/* WARNING: Removing unreachable block (ram,0x0071008043d4) */
/* WARNING: Removing unreachable block (ram,0x0071008043e4) */
/* WARNING: Removing unreachable block (ram,0x007100804448) */
/* WARNING: Removing unreachable block (ram,0x007100804450) */
/* WARNING: Removing unreachable block (ram,0x007100804268) */
/* WARNING: Removing unreachable block (ram,0x007100804270) */
/* WARNING: Removing unreachable block (ram,0x007100804278) */
/* WARNING: Removing unreachable block (ram,0x0071008042f0) */
/* WARNING: Removing unreachable block (ram,0x0071008042f8) */
/* WARNING: Removing unreachable block (ram,0x007100804288) */

undefined8 FUN_71008041c0(long *param_1,long param_2,long *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 *puVar13;
  code *pcVar14;
  undefined1 auStack_7f8 [936];
  code *pcStack_450;
  undefined1 auStack_3d8 [936];
  code *local_30;
  
  puVar13 = &stack0xfffffffffffffbe0;
  lVar10 = 1;
  do {
    local_30 = (code *)0x0;
    iVar3 = FUN_7100803a00(param_2,auStack_3d8);
    plVar9 = (long *)param_1[3];
    if (plVar9 == (long *)(*(long *)(param_2 + 0x310) + (*(long *)(param_2 + 0x340) >> 0x3f))) {
      if (iVar3 != 0) {
        return 2;
      }
      if (local_30 == (code *)0x0) break;
      plVar9 = (long *)*param_1;
      bVar2 = true;
      uVar4 = (*local_30)(1,6,plVar9,param_1,param_2);
      iVar3 = (int)uVar4;
joined_r0x0071008042d0:
      if (iVar3 == 7) {
        *param_3 = lVar10;
        return uVar4;
      }
      if ((int)uVar4 != 8) {
        return 2;
      }
      if (bVar2) break;
    }
    else {
      if (iVar3 != 0) {
        return 2;
      }
      bVar2 = false;
      if (local_30 != (code *)0x0) {
        plVar9 = (long *)*param_1;
        uVar4 = (*local_30)(1,2,plVar9,param_1,param_2);
        iVar3 = (int)uVar4;
        goto joined_r0x0071008042d0;
      }
    }
    FUN_71008027e0(param_2,auStack_3d8);
    lVar10 = lVar10 + 1;
  } while( true );
  auVar12 = FUN_710080f820();
  uVar8 = auVar12._8_8_;
  puVar5 = auVar12._0_8_;
  pcVar14 = FUN_7100804300;
  lVar11 = 1;
  pcVar1 = (code *)puVar5[2];
  uVar4 = puVar5[3];
  while( true ) {
    uVar6 = FUN_7100803a00(uVar8,auStack_7f8);
    if ((0x21UL >> (uVar6 & 0x3f) & 1) == 0) {
      return 2;
    }
    if ((int)uVar6 != 0) break;
    iVar3 = (*pcVar1)(1,10,*puVar5,puVar5,uVar8,uVar4,in_x6,in_x7,puVar13,pcVar14,param_2,param_1,
                      lVar10);
    if (iVar3 != 0) {
      return 2;
    }
    if (pcStack_450 != (code *)0x0) {
      uVar7 = (*pcStack_450)(1,10,*puVar5,puVar5,uVar8);
      if ((int)uVar7 == 7) goto LAB_7100804428;
      if ((int)uVar7 != 8) {
        return 2;
      }
    }
    FUN_71008027e0(uVar8,auStack_7f8);
    lVar11 = lVar11 + 1;
  }
  iVar3 = (*pcVar1)(1,0x1a,*puVar5,puVar5,uVar8,uVar4,in_x6,in_x7,puVar13,pcVar14,param_2,param_1,
                    lVar10);
  if (iVar3 != 0) {
    return 2;
  }
  uVar7 = 5;
LAB_7100804428:
  *plVar9 = lVar11;
  return uVar7;
}



// ===== FUN_7100804300 @ 7100804300 (size=340) =====

/* WARNING: Removing unreachable block (ram,0x0071008043c4) */
/* WARNING: Removing unreachable block (ram,0x0071008043cc) */
/* WARNING: Removing unreachable block (ram,0x0071008043d4) */
/* WARNING: Removing unreachable block (ram,0x0071008043e4) */
/* WARNING: Removing unreachable block (ram,0x007100804448) */
/* WARNING: Removing unreachable block (ram,0x007100804450) */

undefined8 FUN_7100804300(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_3d8 [936];
  code *local_30;
  
  lVar6 = 1;
  pcVar1 = (code *)param_1[2];
  uVar2 = param_1[3];
  while( true ) {
    uVar4 = FUN_7100803a00(param_2,auStack_3d8);
    if ((0x21UL >> (uVar4 & 0x3f) & 1) == 0) {
      return 2;
    }
    if ((int)uVar4 != 0) break;
    iVar3 = (*pcVar1)(1,10,*param_1,param_1,param_2,uVar2);
    if (iVar3 != 0) {
      return 2;
    }
    if (local_30 != (code *)0x0) {
      uVar5 = (*local_30)(1,10,*param_1,param_1,param_2);
      if ((int)uVar5 == 7) goto LAB_7100804428;
      if ((int)uVar5 != 8) {
        return 2;
      }
    }
    FUN_71008027e0(param_2,auStack_3d8);
    lVar6 = lVar6 + 1;
  }
  iVar3 = (*pcVar1)(1,0x1a,*param_1,param_1,param_2,uVar2);
  if (iVar3 != 0) {
    return 2;
  }
  uVar5 = 5;
LAB_7100804428:
  *param_3 = lVar6;
  return uVar5;
}



// ===== FUN_7100804460 @ 7100804460 (size=84) =====

void FUN_7100804460(long param_1,int param_2,undefined8 param_3)

{
  code *pcVar1;
  
  if (param_2 < 0x62) {
    if (((*(ulong *)(param_1 + 0x340) >> 0x3e & 1) != 0) &&
       (*(char *)(param_1 + param_2 + 0x358) != '\0')) {
      *(undefined8 *)(param_1 + (long)param_2 * 8) = param_3;
      return;
    }
    if ((&DAT_7100d22a40)[param_2] == '\b') {
      **(undefined8 **)(param_1 + (long)param_2 * 8) = param_3;
      return;
    }
  }
  FUN_710080f820();
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x71008044b0);
  (*pcVar1)();
}



// ===== FUN_71008044c0 @ 71008044c0 (size=20) =====

undefined8 FUN_71008044c0(long param_1,uint *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x318);
  *param_2 = (uint)((ulong)*(undefined8 *)(param_1 + 0x340) >> 0x3f);
  return uVar1;
}



// ===== FUN_71008044e0 @ 71008044e0 (size=8) =====

void FUN_71008044e0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x318) = param_2;
  return;
}



// ===== FUN_7100804500 @ 7100804500 (size=8) =====

undefined8 FUN_7100804500(long param_1)

{
  return *(undefined8 *)(param_1 + 800);
}



// ===== FUN_7100804520 @ 7100804520 (size=8) =====

undefined8 FUN_7100804520(long param_1)

{
  return *(undefined8 *)(param_1 + 0x338);
}



// ===== FUN_7100804540 @ 7100804540 (size=8) =====

undefined8 FUN_7100804540(long param_1)

{
  return *(undefined8 *)(param_1 + 0x330);
}



// ===== FUN_7100804560 @ 7100804560 (size=8) =====

undefined8 FUN_7100804560(long param_1)

{
  return *(undefined8 *)(param_1 + 0x328);
}



// ===== FUN_7100804580 @ 7100804580 (size=4) =====

void FUN_7100804580(void)

{
  return;
}



// ===== FUN_71008045a0 @ 71008045a0 (size=420) =====

/* WARNING: Removing unreachable block (ram,0x007100804720) */
/* WARNING: Removing unreachable block (ram,0x007100804724) */
/* WARNING: Removing unreachable block (ram,0x007100804728) */

void FUN_71008045a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,code *param_7)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_b58 [960];
  undefined1 auStack_798 [784];
  long local_488;
  code *local_480;
  long local_458;
  undefined1 local_3d8 [936];
  code *local_30;
  
  FUN_7100803e40(auStack_b58,&stack0x00000000);
  FUN_710080f900(auStack_798,auStack_b58,0x3c0);
  do {
    iVar1 = FUN_7100803a00(auStack_798,local_3d8);
    if ((iVar1 == 5) || (iVar1 != 0)) goto LAB_7100804660;
    if (local_30 != (code *)0x0) {
      iVar1 = (*local_30)(1,1,*param_1,param_1,auStack_798);
      if (iVar1 == 6) {
        param_1[2] = 0;
        param_1[3] = local_488 + (local_458 >> 0x3f);
        FUN_710080f900(auStack_798,auStack_b58,0x3c0);
        iVar1 = FUN_71008041c0(param_1,auStack_798,local_3d8);
        if (iVar1 == 7) {
          FUN_7100801960(auStack_b58,auStack_798);
          FUN_7100804580(local_488,local_480);
          FUN_7100806370();
          bVar2 = true;
          goto LAB_7100804664;
        }
LAB_7100804660:
        local_480 = param_7;
        bVar2 = false;
LAB_7100804664:
        if (bVar2) {
                    /* WARNING: Could not recover jumptable at 0x0071008046a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*local_480)(param_1,param_2,param_3,param_4);
          return;
        }
        return;
      }
      if (iVar1 != 8) goto LAB_7100804660;
    }
    FUN_71008027e0(auStack_798,local_3d8);
  } while( true );
}



// ===== FUN_7100804760 @ 7100804760 (size=304) =====

/* WARNING: Removing unreachable block (ram,0x007100804814) */
/* WARNING: Removing unreachable block (ram,0x007100804820) */
/* WARNING: Removing unreachable block (ram,0x007100804884) */

void FUN_7100804760(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined1 local_788 [8];
  undefined1 auStack_780 [960];
  undefined1 auStack_3c0 [784];
  undefined8 local_b0;
  code *local_a8;
  
  FUN_7100803e40(auStack_780,&stack0x00000000);
  FUN_710080f900(auStack_3c0,auStack_780,0x3c0);
  if (*(long *)(param_1 + 0x10) == 0) {
    iVar2 = FUN_71008041c0(param_1);
  }
  else {
    iVar2 = FUN_7100804300(param_1,auStack_3c0,local_788);
  }
  if (iVar2 != 7) {
    FUN_710080f820();
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x710080488c);
    (*pcVar1)();
  }
  FUN_7100801960(auStack_780,auStack_3c0);
  FUN_7100804580(local_b0,local_a8);
  FUN_7100806370();
                    /* WARNING: Could not recover jumptable at 0x007100804874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*local_a8)(param_1,param_2,param_3,param_4);
  return;
}



// ===== FUN_71008048a0 @ 71008048a0 (size=308) =====

/* WARNING: Removing unreachable block (ram,0x0071008049b0) */
/* WARNING: Removing unreachable block (ram,0x0071008049b8) */

void FUN_71008048a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,code *UNRECOVERED_JUMPTABLE)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  undefined1 local_788 [8];
  undefined1 auStack_780 [960];
  undefined1 auStack_3c0 [784];
  undefined8 local_b0;
  code *local_a8;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_71008045a0();
    bVar3 = false;
  }
  else {
    FUN_7100803e40(auStack_780,&stack0x00000000);
    FUN_710080f900(auStack_3c0,auStack_780,0x3c0);
    iVar2 = FUN_7100804300(param_1,auStack_3c0,local_788);
    if (iVar2 != 7) {
      FUN_710080f820();
                    /* WARNING: Does not return */
      pcVar1 = (code *)UndefinedInstructionException(0,0x71008049d0);
      (*pcVar1)();
    }
    FUN_7100801960(auStack_780,auStack_3c0);
    FUN_7100804580(local_b0,local_a8);
    FUN_7100806370();
    bVar3 = true;
    UNRECOVERED_JUMPTABLE = local_a8;
  }
  if (!bVar3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007100804928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}



// ===== FUN_71008049e0 @ 71008049e0 (size=28) =====

void FUN_71008049e0(long param_1)

{
  if (*(code **)(param_1 + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0071008049f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 8))(1,param_1);
    return;
  }
  return;
}



// ===== FUN_7100804a60 @ 7100804a60 (size=236) =====

void FUN_7100804a60(undefined8 param_1,code *param_2,long param_3,uint param_4,int param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  uVar1 = param_4 * 2 + 1;
  if (param_5 <= (int)uVar1) {
    return;
  }
  uVar8 = (ulong)param_4;
  do {
    uVar6 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
    puVar2 = (undefined8 *)(param_3 + uVar6);
    if ((int)(uVar1 + 1) < param_5) {
      puVar3 = (undefined8 *)(param_3 + uVar6 + 8);
      iVar5 = (*param_2)(param_1,*(undefined8 *)(param_3 + uVar6),
                         *(undefined8 *)(param_3 + uVar6 + 8));
      if (-1 < iVar5) goto LAB_7100804ad0;
      uVar8 = -(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar8 << 3;
      iVar5 = (*param_2)(param_1,*(undefined8 *)(param_3 + uVar8),*puVar3);
      uVar4 = uVar1 + 1;
      puVar2 = puVar3;
    }
    else {
LAB_7100804ad0:
      uVar8 = -(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar8 << 3;
      iVar5 = (*param_2)(param_1,*(undefined8 *)(param_3 + uVar8),*puVar2);
      uVar4 = uVar1;
    }
    if (-1 < iVar5) {
      return;
    }
    uVar7 = *(undefined8 *)(param_3 + uVar8);
    *(undefined8 *)(param_3 + uVar8) = *puVar2;
    uVar1 = uVar4 * 2 + 1;
    *puVar2 = uVar7;
    if (param_5 <= (int)uVar1) {
      return;
    }
    uVar8 = (ulong)uVar4;
  } while( true );
}



// ===== FUN_7100804b60 @ 7100804b60 (size=316) =====

uint * FUN_7100804b60(uint param_1,uint *param_2,uint *param_3,ulong *param_4)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  code *pcVar4;
  uint *puVar5;
  long *plVar6;
  uint *puVar7;
  ulong *puVar8;
  ulong uVar9;
  
  if ((param_1 & 0xff) == 0x50) {
    plVar6 = (long *)((long)param_3 + 7U & 0xfffffffffffffff8);
    puVar5 = (uint *)(plVar6 + 1);
    puVar8 = (ulong *)*plVar6;
    goto LAB_7100804c0c;
  }
  uVar1 = param_1 & 0xf;
  if (uVar1 == 4) {
LAB_7100804c1c:
    puVar5 = param_3 + 2;
    puVar8 = *(ulong **)param_3;
LAB_7100804ba0:
    if (puVar8 == (ulong *)0x0) goto LAB_7100804c0c;
  }
  else {
    if (uVar1 < 5) {
      if (uVar1 == 2) {
        puVar5 = (uint *)((long)param_3 + 2);
        puVar8 = (ulong *)(ulong)(ushort)*param_3;
      }
      else if (uVar1 == 3) {
        puVar5 = param_3 + 1;
        puVar8 = (ulong *)(ulong)*param_3;
      }
      else {
        if (uVar1 == 0) goto LAB_7100804c1c;
        puVar8 = (ulong *)0x0;
        uVar9 = 0;
        puVar7 = param_3;
        do {
          puVar5 = (uint *)((long)puVar7 + 1);
          uVar1 = *puVar7;
          uVar3 = uVar9 & 0x3f;
          uVar9 = (ulong)((int)uVar9 + 7);
          puVar8 = (ulong *)((ulong)puVar8 | ((ulong)(byte)uVar1 & 0x7f) << uVar3);
          puVar7 = puVar5;
        } while ((char)(byte)uVar1 < '\0');
      }
      goto LAB_7100804ba0;
    }
    if (uVar1 == 0xb) {
      puVar5 = param_3 + 1;
      puVar8 = (ulong *)(long)(int)*param_3;
      goto LAB_7100804ba0;
    }
    if (0xb < uVar1) {
      if (uVar1 != 0xc) {
LAB_7100804c8c:
        FUN_710080f820();
                    /* WARNING: Does not return */
        pcVar4 = (code *)UndefinedInstructionException(0,0x7100804c98);
        (*pcVar4)();
      }
      goto LAB_7100804c1c;
    }
    if (uVar1 != 9) {
      if (uVar1 != 10) goto LAB_7100804c8c;
      puVar5 = (uint *)((long)param_3 + 2);
      puVar8 = (ulong *)(long)(short)*param_3;
      goto LAB_7100804ba0;
    }
    puVar8 = (ulong *)0x0;
    uVar9 = 0;
    puVar7 = param_3;
    do {
      puVar5 = (uint *)((long)puVar7 + 1);
      bVar2 = (byte)*puVar7;
      uVar3 = uVar9 & 0x3f;
      uVar1 = (int)uVar9 + 7;
      uVar9 = (ulong)uVar1;
      puVar8 = (ulong *)((ulong)puVar8 | ((ulong)bVar2 & 0x7f) << uVar3);
      puVar7 = puVar5;
    } while ((char)bVar2 < '\0');
    if ((0x3f < uVar1) || ((bVar2 >> 6 & 1) == 0)) goto LAB_7100804ba0;
    puVar8 = (ulong *)((ulong)puVar8 | -1L << (uVar9 & 0x3f));
  }
  if ((param_1 & 0x70) != 0x10) {
    param_3 = param_2;
  }
  puVar8 = (ulong *)((long)puVar8 + (long)param_3);
  if ((param_1 & 0xff) >> 7 != 0) {
    *param_4 = *puVar8;
    return puVar5;
  }
LAB_7100804c0c:
  *param_4 = (ulong)puVar8;
  return puVar5;
}



// ===== FUN_7100804ca0 @ 7100804ca0 (size=544) =====

/* WARNING: Type propagation algorithm not settling */

void FUN_7100804ca0(undefined8 param_1,code *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong local_808 [128];
  ulong local_408 [129];
  
  lVar1 = param_3 + 0x10;
  uVar12 = *(ulong *)(param_3 + 8);
  FUN_7100808340(local_808,0,0x400);
  uVar11 = (uint)uVar12;
  lVar6 = lVar1;
  if (uVar11 != 0) {
    uVar15 = 0;
    lVar6 = param_4 + 0x10;
    lVar16 = lVar1;
    while( true ) {
      lVar13 = lVar6;
      uVar9 = 0;
      uVar14 = 0;
      iVar10 = 0;
      do {
        uVar8 = (uint)uVar9;
        uVar7 = uVar11 - uVar8;
        if (0x80 < uVar7) {
          uVar7 = 0x80;
        }
        (*param_2)(param_1,local_408 + 1,lVar16 + uVar9 * 8);
        local_408[0] = uVar14;
        if (uVar11 != uVar8) {
          lVar6 = 0;
          do {
            lVar2 = lVar6 + 1;
            uVar9 = local_408[lVar6 + 1];
            if (uVar9 < uVar14) {
              iVar10 = iVar10 + 1;
            }
            lVar6 = (uVar9 >> (uVar15 & 0x3f) & 0xff) * 4;
            *(int *)((long)local_808 + lVar6) = *(int *)((long)local_808 + lVar6) + 1;
            lVar6 = lVar2;
            uVar14 = uVar9;
          } while ((uint)lVar2 < uVar7);
        }
        uVar9 = (ulong)(uVar8 + uVar7);
        uVar14 = local_408[uVar7];
      } while (uVar8 + uVar7 < uVar11);
      lVar6 = lVar16;
      if (iVar10 == 0) break;
      iVar10 = 0;
      puVar4 = local_808;
      do {
        uVar14 = *puVar4;
        puVar5 = (ulong *)((long)puVar4 + 4);
        *(int *)puVar4 = iVar10;
        iVar10 = iVar10 + (int)uVar14;
        puVar4 = puVar5;
      } while (puVar5 != local_408);
      uVar14 = 0;
      do {
        uVar7 = (uint)uVar14;
        uVar8 = uVar11 - uVar7;
        if (0x80 < uVar8) {
          uVar8 = 0x80;
        }
        (*param_2)(param_1,local_408,lVar16 + uVar14 * 8,uVar8);
        uVar8 = uVar8 + uVar7;
        uVar14 = (ulong)uVar8;
        puVar4 = local_408;
        if (uVar11 != uVar7) {
          do {
            uVar9 = (ulong)uVar7;
            lVar6 = (*puVar4 >> (uVar15 & 0x3f) & 0xff) * 4;
            uVar3 = *(uint *)((long)local_808 + lVar6);
            *(uint *)((long)local_808 + lVar6) = uVar3 + 1;
            uVar7 = uVar7 + 1;
            *(undefined8 *)(lVar13 + (ulong)uVar3 * 8) = *(undefined8 *)(lVar16 + uVar9 * 8);
            puVar4 = puVar4 + 1;
          } while (uVar7 != uVar8);
        }
      } while (uVar8 < uVar11);
      uVar7 = (int)uVar15 + 8;
      uVar15 = (ulong)uVar7;
      lVar6 = lVar13;
      if (uVar7 == 0x40) break;
      FUN_7100808340(local_808,0,0x400);
      lVar6 = lVar16;
      lVar16 = lVar13;
    }
  }
  if (lVar1 == lVar6) {
    return;
  }
  FUN_710080f900(lVar1,lVar6,(uVar12 & 0xffffffff) << 3);
  return;
}



// ===== FUN_7100804ec0 @ 7100804ec0 (size=276) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_7100804ec0(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  
  FUN_7100835660(0x7100d22aa8);
  if (_DAT_7100d22ac0 != 0) {
    puVar3 = (undefined8 *)&DAT_7100d22ac0;
    lVar2 = _DAT_7100d22ac0;
    do {
      if (*(long **)(lVar2 + 0x18) == param_1) {
        *puVar3 = *(undefined8 *)(lVar2 + 0x28);
        FUN_71008356e0(0x7100d22aa8);
        return lVar2;
      }
      puVar3 = (undefined8 *)(lVar2 + 0x28);
      lVar2 = *(long *)(lVar2 + 0x28);
    } while (lVar2 != 0);
  }
  if (_DAT_7100d22ab8 != 0) {
    puVar3 = (undefined8 *)&DAT_7100d22ab8;
    lVar2 = _DAT_7100d22ab8;
    do {
      if ((*(uint *)(lVar2 + 0x20) & 1) == 0) {
        if (param_1 == *(long **)(lVar2 + 0x18)) {
          *puVar3 = *(undefined8 *)(lVar2 + 0x28);
          FUN_71008356e0(0x7100d22aa8);
          return lVar2;
        }
      }
      else if (param_1 == (long *)**(long **)(lVar2 + 0x18)) {
        *puVar3 = *(undefined8 *)(lVar2 + 0x28);
        FUN_710081c200();
        FUN_71008356e0(0x7100d22aa8);
        return lVar2;
      }
      puVar3 = (undefined8 *)(lVar2 + 0x28);
      lVar2 = *(long *)(lVar2 + 0x28);
    } while (lVar2 != 0);
  }
  FUN_71008356e0(0x7100d22aa8);
  FUN_710080f820();
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x7100804fd0);
  (*pcVar1)();
}



// ===== FUN_7100804fe0 @ 7100804fe0 (size=292) =====

byte FUN_7100804fe0(long param_1)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  char *pcVar8;
  undefined1 auStack_8 [8];
  
  lVar1 = param_1 + 9;
  lVar4 = FUN_710081ce00(lVar1);
  pbVar7 = (byte *)(lVar1 + lVar4 + 1);
  if (3 < *(byte *)(param_1 + 8)) {
    if (*(char *)(lVar1 + lVar4 + 1) != '\b') {
      return 0xff;
    }
    if (pbVar7[1] != 0) {
      return 0xff;
    }
    pbVar7 = pbVar7 + 2;
  }
  if (*(char *)(param_1 + 9) != 'z') {
    return 0;
  }
  do {
    bVar3 = *pbVar7;
    pbVar6 = pbVar7 + 1;
    pbVar7 = pbVar7 + 1;
  } while ((char)bVar3 < '\0');
  do {
    pbVar7 = pbVar6;
    pbVar6 = pbVar7 + 1;
  } while ((char)*pbVar7 < '\0');
  if (*(byte *)(param_1 + 8) == 1) {
    pbVar5 = pbVar7 + 3;
    if (-1 < (char)pbVar7[2]) goto LAB_7100805070;
  }
  else {
    do {
      bVar3 = *pbVar6;
      pbVar5 = pbVar6 + 1;
      pbVar6 = pbVar6 + 1;
    } while ((char)bVar3 < '\0');
  }
  do {
    pbVar7 = pbVar5 + 1;
    bVar3 = *pbVar5;
    pbVar5 = pbVar7;
  } while ((char)bVar3 < '\0');
LAB_7100805070:
  pcVar8 = (char *)(param_1 + 10);
  cVar2 = *pcVar8;
  do {
    if (cVar2 == 'R') {
      return *pbVar5;
    }
    if (cVar2 == 'P') {
      pbVar5 = (byte *)FUN_7100804b60(*pbVar5 & 0x7f,0,pbVar5 + 1,auStack_8);
    }
    else {
      if ((cVar2 != 'L') && (cVar2 != 'B')) {
        return 0;
      }
      pbVar5 = pbVar5 + 1;
    }
    pcVar8 = pcVar8 + 1;
    cVar2 = *pcVar8;
  } while( true );
}



// ===== FUN_7100805200 @ 7100805200 (size=480) =====

long FUN_7100805200(ulong *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ulong local_8;
  
  uVar4 = *param_2;
  if (uVar4 == 0) {
    return 0;
  }
  uVar6 = 0;
  lVar7 = 0;
  lVar9 = 0;
  uVar8 = 0;
  do {
    while (lVar5 = lVar9, uVar2 = uVar8, param_2[1] == 0) {
LAB_71008052f0:
      param_2 = (uint *)((long)param_2 + (ulong)uVar4 + 4);
      uVar4 = *param_2;
      lVar9 = lVar5;
      uVar8 = uVar2;
      if (uVar4 == 0) {
        return lVar7;
      }
    }
    lVar5 = (long)param_2 + (4 - (long)(int)param_2[1]);
    if (lVar5 != lVar9) {
      uVar2 = FUN_7100804fe0(lVar5);
      if (uVar2 == 0xff) {
        return -1;
      }
      uVar8 = uVar2 & 0xff;
      uVar1 = uVar2 & 0x70;
      if (uVar1 == 0x20) {
        uVar6 = param_1[1];
      }
      else {
        if (0x20 < uVar1) {
          if (uVar1 == 0x30) {
            uVar6 = param_1[2];
            goto LAB_7100805274;
          }
          if (uVar1 != 0x50) goto LAB_71008053b0;
        }
        uVar6 = 0;
      }
LAB_7100805274:
      uVar1 = (uint)param_1[4];
      if ((uVar1 & 0x7f8) == 0x7f8) {
        *(uint *)(param_1 + 4) = uVar1 & 0xfffff800 | uVar1 & 7 | uVar8 << 3;
      }
      else if (uVar2 != ((uint)param_1[4] >> 3 & 0xff)) {
        *(uint *)(param_1 + 4) = uVar1 | 4;
      }
      FUN_7100804b60(uVar8,uVar6,param_2 + 2,&local_8);
LAB_71008052b4:
      uVar8 = uVar8 & 7;
      if (uVar8 == 2) {
        uVar3 = 0xffff;
      }
      else {
        if (uVar8 < 3) {
          if (uVar8 != 0) {
LAB_71008053b0:
            FUN_710080f820();
            return -1;
          }
        }
        else {
          uVar3 = 0xffffffff;
          if (uVar8 == 3) goto LAB_71008052d0;
          if (uVar8 != 4) goto LAB_71008053b0;
        }
        uVar3 = 0xffffffffffffffff;
      }
LAB_71008052d0:
      if (((local_8 & uVar3) != 0) && (lVar7 = lVar7 + 1, local_8 < *param_1)) {
        *param_1 = local_8;
      }
      goto LAB_71008052f0;
    }
    FUN_7100804b60(uVar8,uVar6,param_2 + 2,&local_8);
    lVar5 = lVar9;
    if (uVar8 != 0xff) goto LAB_71008052b4;
    param_2 = (uint *)((long)param_2 + (ulong)uVar4 + 4);
    uVar4 = *param_2;
    if (uVar4 == 0) {
      return lVar7;
    }
  } while( true );
}



// ===== FUN_71008053e0 @ 71008053e0 (size=192) =====

void FUN_71008053e0(long param_1,long param_2,long *param_3,uint param_4)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  
  uVar1 = (uint)*(undefined8 *)(param_1 + 0x20) >> 3;
  uVar3 = uVar1 & 0xff;
  if (uVar3 != 0xff) {
    uVar1 = uVar1 & 0x70;
    if (uVar1 == 0x20) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      goto LAB_7100805420;
    }
    if (0x20 < uVar1) {
      if (uVar1 == 0x30) {
        uVar5 = *(undefined8 *)(param_1 + 0x10);
      }
      else {
        uVar5 = 0;
        if (uVar1 != 0x50) {
          FUN_710080f820();
                    /* WARNING: Does not return */
          pcVar2 = (code *)UndefinedInstructionException(0,0x710080549c);
          (*pcVar2)();
        }
      }
      goto LAB_7100805420;
    }
  }
  uVar5 = 0;
LAB_7100805420:
  if (0 < (int)param_4) {
    plVar4 = param_3;
    while( true ) {
      FUN_7100804b60(uVar3,uVar5,*plVar4 + 8,param_2);
      if (plVar4 + 1 == param_3 + param_4) break;
      param_2 = param_2 + 8;
      uVar3 = (uint)*(undefined8 *)(param_1 + 0x20) >> 3 & 0xff;
      plVar4 = plVar4 + 1;
    }
  }
  return;
}



// ===== FUN_71008054a0 @ 71008054a0 (size=172) =====

int FUN_71008054a0(long param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulong local_10;
  ulong uStack_8;
  
  uVar2 = (uint)*(undefined8 *)(param_1 + 0x20) >> 3;
  uVar3 = uVar2 & 0xff;
  if (uVar3 != 0xff) {
    uVar2 = uVar2 & 0x70;
    if (uVar2 == 0x20) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      goto LAB_71008054e0;
    }
    if (0x20 < uVar2) {
      if (uVar2 == 0x30) {
        uVar5 = *(undefined8 *)(param_1 + 0x10);
      }
      else {
        uVar5 = 0;
        if (uVar2 != 0x50) {
          FUN_710080f820();
                    /* WARNING: Does not return */
          pcVar4 = (code *)UndefinedInstructionException(0,0x7100805548);
          (*pcVar4)();
        }
      }
      goto LAB_71008054e0;
    }
  }
  uVar5 = 0;
LAB_71008054e0:
  FUN_7100804b60(uVar3,uVar5,param_2 + 8,&local_10);
  FUN_7100804b60(uVar3,uVar5,param_3 + 8,&uStack_8);
  iVar1 = -(uint)(local_10 < uStack_8);
  if (uStack_8 < local_10) {
    iVar1 = 1;
  }
  return iVar1;
}



// ===== FUN_7100805680 @ 7100805680 (size=568) =====

void FUN_7100805680(long param_1,long param_2,uint *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x22;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  ulong local_8;
  
  uVar1 = (uint)*(undefined8 *)(param_1 + 0x20) >> 3;
  uVar4 = uVar1 & 0xff;
  if (uVar4 != 0xff) {
    uVar1 = uVar1 & 0x70;
    if (uVar1 == 0x20) {
      uVar8 = *(undefined8 *)(param_1 + 8);
      goto LAB_71008056d4;
    }
    if (0x20 < uVar1) {
      if (uVar1 == 0x30) {
        uVar8 = *(undefined8 *)(param_1 + 0x10);
      }
      else {
        uVar8 = 0;
        if (uVar1 != 0x50) {
          FUN_710080f820();
                    /* WARNING: Does not return */
          pcVar2 = (code *)UndefinedInstructionException(0,0x71008058b4);
          (*pcVar2)();
        }
      }
      goto LAB_71008056d4;
    }
  }
  uVar8 = 0;
LAB_71008056d4:
  lVar10 = 0;
  uVar1 = *param_3;
  do {
    if (uVar1 == 0) {
      return;
    }
    if (param_3[1] != 0) {
      if (((*(uint *)(param_1 + 0x20) >> 2 & 1) == 0) ||
         (unaff_x22 = (long)param_3 + (4 - (long)(int)param_3[1]), unaff_x22 == lVar10)) {
        if (uVar4 != 0) {
          FUN_7100804b60(uVar4 & 0xff,uVar8,param_3 + 2,&local_8);
          if ((uVar4 & 0xff) == 0xff) goto LAB_710080578c;
          uVar9 = uVar4 & 7;
          bVar3 = uVar9 == 2;
          if (!bVar3) goto LAB_7100805758;
          goto LAB_7100805800;
        }
LAB_71008057c8:
        uVar6 = *(ulong *)(param_3 + 2);
      }
      else {
        uVar4 = FUN_7100804fe0(unaff_x22);
        lVar10 = unaff_x22;
        if (uVar4 == 0xff) {
          uVar8 = 0;
          FUN_7100804b60(0xffffffff,0,param_3 + 2,&local_8);
          goto LAB_710080578c;
        }
        uVar5 = uVar4 & 0x70;
        uVar9 = uVar4;
        if (uVar5 == 0x20) {
          uVar8 = *(undefined8 *)(param_1 + 8);
LAB_7100805734:
          FUN_7100804b60(uVar4,uVar8,param_3 + 2,&local_8);
        }
        else {
          if (0x20 < uVar5) {
            if (uVar5 != 0x30) goto LAB_710080587c;
            uVar8 = *(undefined8 *)(param_1 + 0x10);
            goto LAB_7100805734;
          }
          uVar8 = 0;
          if (uVar4 == 0) goto LAB_71008057c8;
          uVar8 = 0;
          FUN_7100804b60(uVar4,0,param_3 + 2,&local_8);
        }
        while( true ) {
          uVar9 = uVar9 & 7;
          bVar3 = uVar9 == 2;
          lVar10 = unaff_x22;
          if (bVar3) break;
LAB_7100805758:
          if (uVar9 < 2 || bVar3) {
            if (uVar9 == 0) goto LAB_710080586c;
          }
          else {
            uVar6 = 0xffffffff;
            if (uVar9 == 3) goto LAB_7100805768;
            if (uVar9 == 4) {
LAB_710080586c:
              uVar6 = 0xffffffffffffffff;
              goto LAB_7100805768;
            }
          }
          do {
            uVar5 = FUN_710080f820();
LAB_710080587c:
          } while (uVar5 != 0x50);
          uVar8 = 0;
          FUN_7100804b60(uVar9,0,param_3 + 2,&local_8);
        }
LAB_7100805800:
        uVar6 = 0xffff;
LAB_7100805768:
        uVar6 = uVar6 & local_8;
      }
      if ((uVar6 != 0) && (param_2 != 0)) {
        lVar7 = *(long *)(param_2 + 8);
        *(long *)(param_2 + 8) = lVar7 + 1;
        *(uint **)(param_2 + (lVar7 + 2) * 8) = param_3;
      }
    }
LAB_710080578c:
    param_3 = (uint *)((long)param_3 + (ulong)uVar1 + 4);
    uVar1 = *param_3;
  } while( true );
}



// ===== FUN_71008058c0 @ 71008058c0 (size=748) =====

uint * FUN_71008058c0(long param_1,uint *param_2,long param_3)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong local_10;
  ulong local_8;
  
  uVar1 = (uint)*(undefined8 *)(param_1 + 0x20) >> 3;
  uVar5 = uVar1 & 0xff;
  if (uVar5 != 0xff) {
    uVar1 = uVar1 & 0x70;
    if (uVar1 == 0x20) goto LAB_7100805b54;
    if (0x20 < uVar1) {
      if (uVar1 == 0x30) {
        uVar8 = *(undefined8 *)(param_1 + 0x10);
      }
      else {
        uVar8 = 0;
        if (uVar1 != 0x50) {
          FUN_710080f820();
                    /* WARNING: Does not return */
          pcVar2 = (code *)UndefinedInstructionException(0,0x7100805ba8);
          (*pcVar2)();
        }
      }
      goto LAB_7100805914;
    }
  }
  uVar8 = 0;
LAB_7100805914:
  uVar1 = *param_2;
  lVar4 = 0;
joined_r0x007100805924:
  if (uVar1 == 0) {
    return (uint *)0x0;
  }
  lVar9 = lVar4;
  if (param_2[1] != 0) {
    if (((*(uint *)(param_1 + 0x20) >> 2 & 1) == 0) ||
       (lVar9 = (long)param_2 + (4 - (long)(int)param_2[1]), lVar9 == lVar4)) {
      lVar9 = lVar4;
      if (uVar5 != 0) {
        uVar6 = FUN_7100804b60(uVar5 & 0xff,uVar8,param_2 + 2,&local_10);
        FUN_7100804b60(uVar5 & 0xf,0,uVar6,&local_8);
        if ((uVar5 & 0xff) != 0xff) goto joined_r0x007100805abc;
        goto LAB_71008059e0;
      }
LAB_7100805a08:
      if (*(long *)(param_2 + 2) != 0) {
        if ((ulong)(param_3 - *(long *)(param_2 + 2)) < *(ulong *)(param_2 + 4)) {
          return param_2;
        }
        goto LAB_71008059e0;
      }
      uVar5 = 0;
      param_2 = (uint *)((long)param_2 + (ulong)uVar1 + 4);
      uVar1 = *param_2;
      lVar4 = lVar9;
      goto joined_r0x007100805924;
    }
    uVar5 = FUN_7100804fe0(lVar9);
    if (uVar5 != 0xff) {
      uVar3 = uVar5 & 0x70;
      if (uVar3 == 0x20) {
        uVar8 = *(undefined8 *)(param_1 + 8);
LAB_7100805970:
        uVar6 = FUN_7100804b60(uVar5,uVar8,param_2 + 2,&local_10);
        FUN_7100804b60(uVar5 & 0xf,0,uVar6,&local_8);
      }
      else if (uVar3 < 0x21) {
        uVar8 = 0;
        if (uVar5 == 0) goto LAB_7100805a08;
        uVar6 = FUN_7100804b60(uVar5,0,param_2 + 2,&local_10);
        FUN_7100804b60(uVar5 & 0xf,0,uVar6,&local_8);
      }
      else {
        if (uVar3 == 0x30) {
          uVar8 = *(undefined8 *)(param_1 + 0x10);
          goto LAB_7100805970;
        }
        if (uVar3 != 0x50) goto LAB_7100805b50;
        uVar6 = FUN_7100804b60(uVar5,0,param_2 + 2,&local_10);
        uVar8 = 0;
        FUN_7100804b60(uVar5 & 0xf,0,uVar6,&local_8);
      }
joined_r0x007100805abc:
      uVar3 = uVar5 & 7;
      if (uVar3 == 2) {
        uVar7 = 0xffff;
      }
      else {
        if (uVar3 < 3) {
          if (uVar3 != 0) goto LAB_7100805b50;
        }
        else {
          uVar7 = 0xffffffff;
          if (uVar3 == 3) goto LAB_71008059b8;
          if (uVar3 != 4) goto LAB_7100805b50;
        }
        uVar7 = 0xffffffffffffffff;
      }
LAB_71008059b8:
      if (((local_10 & uVar7) != 0) && (param_3 - local_10 < local_8)) {
        return param_2;
      }
      goto LAB_71008059e0;
    }
    uVar6 = FUN_7100804b60(0xffffffff,0,param_2 + 2,&local_10);
    uVar8 = 0;
    FUN_7100804b60(0xf,0,uVar6,&local_8);
  }
LAB_71008059e0:
  param_2 = (uint *)((long)param_2 + (ulong)uVar1 + 4);
  uVar1 = *param_2;
  lVar4 = lVar9;
  goto joined_r0x007100805924;
LAB_7100805b50:
  FUN_710080f820();
LAB_7100805b54:
  uVar8 = *(undefined8 *)(param_1 + 8);
  goto LAB_7100805914;
}



// ===== FUN_7100805bc0 @ 7100805bc0 (size=1372) =====

long FUN_7100805bc0(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong local_10;
  long local_8;
  
  uVar4 = (uint)param_1[4];
  if ((uVar4 & 1) == 0) {
    uVar9 = param_1[4] >> 0xb & 0x1fffff;
    if (uVar9 != 0) goto LAB_7100805cfc;
    plVar11 = (long *)param_1[3];
    if ((uVar4 >> 1 & 1) == 0) {
      uVar9 = FUN_7100805200(param_1,plVar11);
      if (uVar9 != 0xffffffffffffffff) goto LAB_7100805cdc;
LAB_7100805c7c:
      param_1[3] = (ulong)&DAT_71009cf498;
      param_1[4] = 0x7f8;
    }
    else {
      uVar9 = 0;
      if (*plVar11 != 0) {
        do {
          lVar10 = FUN_7100805200(param_1);
          if (lVar10 == -1) goto LAB_7100805c7c;
          plVar11 = plVar11 + 1;
          uVar9 = uVar9 + lVar10;
        } while (*plVar11 != 0);
LAB_7100805cdc:
        uVar4 = (uint)param_1[4] & 0x7ff;
        *(uint *)(param_1 + 4) = uVar4 | (int)uVar9 << 0xb;
        if (uVar9 < 0x200000) {
          if (uVar9 == 0) goto LAB_7100805db8;
        }
        else {
          *(uint *)(param_1 + 4) = uVar4;
        }
LAB_7100805cfc:
        puVar6 = (ulong *)FUN_710081c1c0((uVar9 + 2) * 8);
        if (puVar6 != (ulong *)0x0) {
          puVar6[1] = 0;
          lVar10 = FUN_710081c1c0((uVar9 + 2) * 8);
          if (lVar10 != 0) {
            *(undefined8 *)(lVar10 + 8) = 0;
          }
          uVar4 = (uint)param_1[4];
          plVar11 = (long *)param_1[3];
          if ((uVar4 >> 1 & 1) == 0) {
            FUN_7100805680(param_1,puVar6,plVar11);
          }
          else {
            if (*plVar11 == 0) goto LAB_7100806110;
            do {
              FUN_7100805680(param_1,puVar6);
              plVar11 = plVar11 + 1;
            } while (*plVar11 != 0);
          }
          uVar5 = puVar6[1];
          if (uVar9 != uVar5) goto LAB_7100806110;
          if (lVar10 == 0) {
            if ((uVar4 & 4) == 0) {
              pcVar8 = FUN_71008054a0;
              if ((uVar4 & 0x7f8) == 0) {
                pcVar8 = (code *)&UNK_7100804a00;
              }
            }
            else {
              pcVar8 = (code *)&UNK_7100805560;
            }
            puVar1 = puVar6 + 2;
            iVar13 = (int)(uVar5 >> 1) + -1;
            if (-1 < iVar13) {
              do {
                iVar3 = iVar13 + -1;
                FUN_7100804a60(param_1,pcVar8,puVar1,iVar13,uVar5 & 0xffffffff);
                iVar13 = iVar3;
              } while (iVar3 != -1);
            }
            uVar9 = (ulong)((int)uVar5 - 1);
            iVar13 = (int)uVar5 + -1;
            while (0 < iVar13) {
              uVar14 = uVar9 & 0xffffffff;
              uVar5 = puVar6[2];
              puVar6[2] = puVar1[uVar9];
              puVar1[uVar9] = uVar5;
              uVar9 = uVar9 - 1;
              FUN_7100804a60(param_1,pcVar8,puVar1,0,uVar14);
              iVar13 = (int)uVar9;
            }
          }
          else {
            if ((uVar4 & 4) == 0) {
              pcVar8 = FUN_71008053e0;
              if ((uVar4 & 0x7f8) == 0) {
                pcVar8 = (code *)&UNK_7100804a20;
              }
            }
            else {
              pcVar8 = (code *)&LAB_7100805120;
            }
            FUN_7100804ca0(param_1,pcVar8,puVar6,lVar10);
            FUN_710081c200(lVar10);
          }
          *puVar6 = param_1[3];
          param_1[3] = (ulong)puVar6;
          *(uint *)(param_1 + 4) = (uint)param_1[4] | 1;
        }
      }
    }
LAB_7100805db8:
    if (param_2 < *param_1) {
      return 0;
    }
    uVar4 = (uint)param_1[4];
    if ((uVar4 & 1) == 0) {
      plVar11 = (long *)param_1[3];
      if ((uVar4 >> 1 & 1) == 0) {
        lVar10 = FUN_71008058c0(param_1,plVar11,param_2);
        return lVar10;
      }
      lVar10 = *plVar11;
      while( true ) {
        if (lVar10 == 0) {
          return 0;
        }
        lVar10 = FUN_71008058c0(param_1,lVar10,param_2);
        if (lVar10 != 0) break;
        plVar11 = plVar11 + 1;
        lVar10 = *plVar11;
      }
      return lVar10;
    }
  }
  if ((uVar4 >> 2 & 1) != 0) {
    uVar5 = param_1[3];
    uVar9 = *(ulong *)(uVar5 + 8);
    if (uVar9 == 0) {
      return 0;
    }
    uVar14 = 0;
LAB_7100805e8c:
    uVar15 = uVar14 + uVar9 >> 1;
    lVar10 = *(long *)(uVar5 + (uVar15 + 2) * 8);
    uVar4 = FUN_7100804fe0((lVar10 + 4) - (long)*(int *)(lVar10 + 4));
    if (uVar4 != 0xff) {
      uVar2 = uVar4 & 0x70;
      if (uVar2 == 0x20) {
        uVar12 = param_1[1];
        goto LAB_7100805ed4;
      }
      if (0x20 < uVar2) {
        if (uVar2 == 0x30) {
          uVar12 = param_1[2];
          goto LAB_7100805ed4;
        }
        if (uVar2 == 0x50) goto LAB_7100805f20;
        goto LAB_7100806110;
      }
    }
LAB_7100805f20:
    uVar12 = 0;
LAB_7100805ed4:
    uVar7 = FUN_7100804b60(uVar4,uVar12,lVar10 + 8,&local_10);
    FUN_7100804b60(uVar4 & 0xf,0,uVar7,&local_8);
    if (local_10 <= param_2) {
      if (param_2 < local_10 + local_8) {
        return lVar10;
      }
      uVar14 = uVar15 + 1;
      uVar15 = uVar9;
    }
    uVar9 = uVar15;
    if (uVar15 <= uVar14) {
      return 0;
    }
    goto LAB_7100805e8c;
  }
  if ((uVar4 & 0x7f8) == 0) {
    uVar9 = 0;
    uVar5 = *(ulong *)(param_1[3] + 8);
    while( true ) {
      do {
        uVar14 = uVar5;
        if (uVar14 <= uVar9) {
          return 0;
        }
        uVar5 = uVar9 + uVar14 >> 1;
        lVar10 = *(long *)(param_1[3] + (uVar5 + 2) * 8);
      } while (param_2 < *(ulong *)(lVar10 + 8));
      if (param_2 < *(ulong *)(lVar10 + 8) + *(long *)(lVar10 + 0x10)) break;
      uVar9 = uVar5 + 1;
      uVar5 = uVar14;
    }
    return lVar10;
  }
  uVar4 = (uint)param_1[4] >> 3;
  if ((uVar4 & 0xff) != 0xff) {
    uVar2 = uVar4 & 0x70;
    if (uVar2 == 0x20) {
      uVar9 = param_1[1];
      goto LAB_7100805f38;
    }
    if (0x20 < uVar2) {
      if (uVar2 == 0x30) {
        uVar9 = param_1[2];
      }
      else {
        uVar9 = 0;
        if (uVar2 != 0x50) {
LAB_7100806110:
          FUN_710080f820();
                    /* WARNING: Does not return */
          pcVar8 = (code *)UndefinedInstructionException(0,0x7100806118);
          (*pcVar8)();
        }
      }
      goto LAB_7100805f38;
    }
  }
  uVar9 = 0;
LAB_7100805f38:
  uVar14 = param_1[3];
  uVar5 = *(ulong *)(uVar14 + 8);
  if (uVar5 != 0) {
    uVar15 = 0;
    do {
      while( true ) {
        uVar12 = uVar15 + uVar5 >> 1;
        lVar10 = *(long *)(uVar14 + (uVar12 + 2) * 8);
        uVar7 = FUN_7100804b60(uVar4 & 0xff,uVar9,lVar10 + 8,&local_10);
        FUN_7100804b60(uVar4 & 0xf,0,uVar7,&local_8);
        if (local_10 <= param_2) break;
        uVar5 = uVar12;
        if (uVar12 <= uVar15) {
          return 0;
        }
      }
      if (param_2 < local_10 + local_8) {
        return lVar10;
      }
      uVar15 = uVar12 + 1;
    } while (uVar15 < uVar5);
  }
  return 0;
}



// ===== FUN_7100806120 @ 7100806120 (size=96) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100806120(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    *param_2 = 0xffffffffffffffff;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = param_1;
    param_2[4] = 0x7f8;
    FUN_7100835660(0x7100d22aa8);
    puVar1 = param_2;
    param_2[5] = _DAT_7100d22ac0;
    _DAT_7100d22ac0 = puVar1;
    FUN_71008356e0(0x7100d22aa8);
    return;
  }
  return;
}



// ===== FUN_7100806180 @ 7100806180 (size=24) =====

undefined8 FUN_7100806180(int *param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    uVar1 = FUN_7100804ec0();
    return uVar1;
  }
  return 0;
}



// ===== FUN_71008061a0 @ 71008061a0 (size=464) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_71008061a0(ulong param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong local_8;
  
  FUN_7100835660(0x7100d22aa8);
  for (puVar9 = _DAT_7100d22ab8; puVar9 != (ulong *)0x0; puVar9 = (ulong *)puVar9[5]) {
    if (*puVar9 <= param_1) {
      lVar4 = FUN_7100805bc0(puVar9,param_1);
      if (lVar4 != 0) {
        FUN_71008356e0(0x7100d22aa8);
        uVar1 = (uint)puVar9[4];
        uVar2 = puVar9[1];
        uVar3 = puVar9[2];
        *param_2 = uVar2;
        param_2[1] = uVar3;
        goto joined_r0x007100806214;
      }
      break;
    }
  }
LAB_7100806280:
  do {
    puVar9 = _DAT_7100d22ac0;
    if (_DAT_7100d22ac0 == (ulong *)0x0) {
      FUN_71008356e0(0x7100d22aa8);
      return 0;
    }
    _DAT_7100d22ac0 = (ulong *)_DAT_7100d22ac0[5];
    lVar4 = FUN_7100805bc0(puVar9,param_1);
    if (_DAT_7100d22ab8 == (ulong *)0x0) {
      puVar9[5] = 0;
      _DAT_7100d22ab8 = puVar9;
      if (lVar4 != 0) break;
      goto LAB_7100806280;
    }
    puVar8 = (ulong *)&DAT_7100d22ab8;
    puVar7 = _DAT_7100d22ab8;
    do {
      if (*puVar7 < *puVar9) break;
      puVar8 = puVar7 + 5;
      puVar7 = (ulong *)puVar7[5];
    } while (puVar7 != (ulong *)0x0);
    puVar9[5] = (ulong)puVar7;
    *puVar8 = (ulong)puVar9;
  } while (lVar4 == 0);
  FUN_71008356e0(0x7100d22aa8);
  uVar1 = (uint)puVar9[4];
  uVar2 = puVar9[1];
  uVar3 = puVar9[2];
  *param_2 = uVar2;
  param_2[1] = uVar3;
joined_r0x007100806214:
  if ((uVar1 >> 2 & 1) == 0) {
    uVar1 = (uint)puVar9[4] >> 3 & 0xff;
    uVar5 = (ulong)uVar1;
  }
  else {
    uVar5 = FUN_7100804fe0((lVar4 + 4) - (long)*(int *)(lVar4 + 4));
    uVar1 = (uint)uVar5;
  }
  if (uVar1 != 0xff) {
    uVar1 = (uint)uVar5 & 0x70;
    uVar6 = uVar2;
    if (uVar1 == 0x20) goto LAB_7100806248;
    if (0x20 < uVar1) {
      uVar6 = uVar3;
      if ((uVar1 != 0x30) && (uVar6 = 0, uVar1 != 0x50)) {
        uVar5 = FUN_710080f820(uVar5,0);
        uVar6 = uVar2;
      }
      goto LAB_7100806248;
    }
  }
  uVar6 = 0;
LAB_7100806248:
  FUN_7100804b60(uVar5,uVar6,lVar4 + 8,&local_8);
  param_2[2] = local_8;
  return lVar4;
}



// ===== FUN_7100806370 @ 7100806370 (size=48) =====

/* WARNING: Removing unreachable block (ram,0x00710080637c) */
/* WARNING: Removing unreachable block (ram,0x007100806384) */

void FUN_7100806370(void)

{
  return;
}



// ===== FUN_71008063a0 @ 71008063a0 (size=112) =====

undefined1  [16] FUN_71008063a0(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = (uint)param_1;
  if ((param_1 & 1) != 0) {
    param_2 = fpsr;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = fpsr;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_2 = fpsr;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_2 = fpsr;
  }
  if ((uVar1 >> 4 & 1) != 0) {
    param_1 = fpsr;
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



// ===== FUN_7100806410 @ 7100806410 (size=84) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00710080641c) */
/* WARNING: Removing unreachable block (ram,0x007100806424) */
/* WARNING: Removing unreachable block (ram,0x007100806498) */
/* WARNING: Removing unreachable block (ram,0x007100806434) */
/* WARNING: Removing unreachable block (ram,0x00710080643c) */
/* WARNING: Removing unreachable block (ram,0x007100806444) */

void FUN_7100806410(void)

{
  return;
}



// ===== FUN_71008064c0 @ 71008064c0 (size=36) =====

int FUN_71008064c0(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x20;
  if (((&DAT_71009d32f1)[param_1] & 3) != 1) {
    iVar1 = param_1;
  }
  return iVar1;
}



// ===== FUN_7100806500 @ 7100806500 (size=260) =====

long FUN_7100806500(ulong param_1,undefined1 param_2)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  long lVar3;
  undefined1 (*pauVar4) [16];
  ulong uVar5;
  undefined1 (*in_x6) [16];
  undefined1 (*pauVar6) [16];
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ulong uVar14;
  undefined1 auVar15 [16];
  
  pauVar4 = (undefined1 (*) [16])(param_1 & 0xffffffffffffffe0);
  uVar7 = 0;
  if ((param_1 & 0x1f) == 0) goto LAB_710080658c;
  auVar15 = *pauVar4;
  auVar12 = *pauVar4;
  pauVar6 = pauVar4 + 1;
  pauVar4 = pauVar4 + 2;
  auVar11 = NEON_cmeq(auVar12,0,1);
  auVar12[1] = param_2;
  auVar12[0] = param_2;
  auVar12[2] = param_2;
  auVar12[3] = param_2;
  auVar12[4] = param_2;
  auVar12[5] = param_2;
  auVar12[6] = param_2;
  auVar12[7] = param_2;
  auVar12[8] = param_2;
  auVar12[9] = param_2;
  auVar12[10] = param_2;
  auVar12[0xb] = param_2;
  auVar12[0xc] = param_2;
  auVar12[0xd] = param_2;
  auVar12[0xe] = param_2;
  auVar12[0xf] = param_2;
  auVar13 = NEON_cmeq(auVar15,auVar12,1);
  auVar12 = NEON_cmeq(*pauVar6,0,1);
  auVar15[1] = param_2;
  auVar15[0] = param_2;
  auVar15[2] = param_2;
  auVar15[3] = param_2;
  auVar15[4] = param_2;
  auVar15[5] = param_2;
  auVar15[6] = param_2;
  auVar15[7] = param_2;
  auVar15[8] = param_2;
  auVar15[9] = param_2;
  auVar15[10] = param_2;
  auVar15[0xb] = param_2;
  auVar15[0xc] = param_2;
  auVar15[0xd] = param_2;
  auVar15[0xe] = param_2;
  auVar15[0xf] = param_2;
  auVar15 = NEON_cmeq(*pauVar6,auVar15,1);
  uVar5 = auVar11._0_8_ & 0x8020080280200802;
  uVar9 = auVar13._0_8_ & 0x4010040140100401;
  uVar8 = auVar12._0_8_ & 0x8020080280200802;
  uVar14 = auVar15._0_8_ & 0x4010040140100401;
  auVar11._0_8_ =
       CONCAT17((auVar12[0xc] & 2) + (auVar12[0xd] & 8) +
                (auVar12[0xe] & 0x20) + (auVar12[0xf] & 0x80),
                CONCAT16((auVar12[8] & 2) + (auVar12[9] & 8) +
                         (auVar12[10] & 0x20) + (auVar12[0xb] & 0x80),
                         CONCAT15((char)(uVar8 >> 0x20) + (char)(uVar8 >> 0x28) +
                                  (char)(uVar8 >> 0x30) + (char)(uVar8 >> 0x38),
                                  CONCAT14((char)uVar8 + (char)(uVar8 >> 8) +
                                           (char)(uVar8 >> 0x10) + (char)(uVar8 >> 0x18),
                                           CONCAT13((auVar11[0xc] & 2) + (auVar11[0xd] & 8) +
                                                    (auVar11[0xe] & 0x20) + (auVar11[0xf] & 0x80),
                                                    CONCAT12((auVar11[8] & 2) + (auVar11[9] & 8) +
                                                             (auVar11[10] & 0x20) +
                                                             (auVar11[0xb] & 0x80),
                                                             CONCAT11((char)(uVar5 >> 0x20) +
                                                                      (char)(uVar5 >> 0x28) +
                                                                      (char)(uVar5 >> 0x30) +
                                                                      (char)(uVar5 >> 0x38),
                                                                      (char)uVar5 +
                                                                      (char)(uVar5 >> 8) +
                                                                      (char)(uVar5 >> 0x10) +
                                                                      (char)(uVar5 >> 0x18))))))));
  auVar11[8] = (char)uVar9 + (char)(uVar9 >> 8) + (char)(uVar9 >> 0x10) + (char)(uVar9 >> 0x18);
  auVar11[9] = (char)(uVar9 >> 0x20) + (char)(uVar9 >> 0x28) +
               (char)(uVar9 >> 0x30) + (char)(uVar9 >> 0x38);
  auVar11[10] = (auVar13[8] & 1) + (auVar13[9] & 4) + (auVar13[10] & 0x10) + (auVar13[0xb] & 0x40);
  auVar11[0xb] = (auVar13[0xc] & 1) + (auVar13[0xd] & 4) +
                 (auVar13[0xe] & 0x10) + (auVar13[0xf] & 0x40);
  auVar11[0xc] = (char)uVar14 + (char)(uVar14 >> 8) +
                 (char)(uVar14 >> 0x10) + (char)(uVar14 >> 0x18);
  auVar11[0xd] = (char)(uVar14 >> 0x20) + (char)(uVar14 >> 0x28) +
                 (char)(uVar14 >> 0x30) + (char)(uVar14 >> 0x38);
  auVar11[0xe] = (auVar15[8] & 1) + (auVar15[9] & 4) + (auVar15[10] & 0x10) + (auVar15[0xb] & 0x40);
  auVar11[0xf] = (auVar15[0xc] & 1) + (auVar15[0xd] & 4) +
                 (auVar15[0xe] & 0x10) + (auVar15[0xf] & 0x40);
  uVar5 = 0xffffffffffffffff >> ((param_1 & 0x1f) * -2 & 0x3f);
  uVar9 = auVar11._0_8_ & (uVar5 ^ 0xffffffffffffffff);
  uVar5 = auVar11._8_8_ & (uVar5 ^ 0xffffffffffffffff);
  pauVar6 = in_x6;
  uVar8 = uVar7;
  if (uVar9 == 0) {
    do {
      in_x6 = pauVar4;
      uVar7 = uVar5;
      if (uVar5 == 0) {
        in_x6 = pauVar6;
        uVar7 = uVar8;
      }
LAB_710080658c:
      auVar11 = *pauVar4;
      auVar15 = *pauVar4;
      auVar12 = *pauVar4;
      pauVar2 = pauVar4 + 1;
      pauVar4 = pauVar4 + 2;
      auVar13[1] = param_2;
      auVar13[0] = param_2;
      auVar13[2] = param_2;
      auVar13[3] = param_2;
      auVar13[4] = param_2;
      auVar13[5] = param_2;
      auVar13[6] = param_2;
      auVar13[7] = param_2;
      auVar13[8] = param_2;
      auVar13[9] = param_2;
      auVar13[10] = param_2;
      auVar13[0xb] = param_2;
      auVar13[0xc] = param_2;
      auVar13[0xd] = param_2;
      auVar13[0xe] = param_2;
      auVar13[0xf] = param_2;
      auVar12 = NEON_cmeq(auVar12,auVar13,1);
      auVar1[1] = param_2;
      auVar1[0] = param_2;
      auVar1[2] = param_2;
      auVar1[3] = param_2;
      auVar1[4] = param_2;
      auVar1[5] = param_2;
      auVar1[6] = param_2;
      auVar1[7] = param_2;
      auVar1[8] = param_2;
      auVar1[9] = param_2;
      auVar1[10] = param_2;
      auVar1[0xb] = param_2;
      auVar1[0xc] = param_2;
      auVar1[0xd] = param_2;
      auVar1[0xe] = param_2;
      auVar1[0xf] = param_2;
      auVar13 = NEON_cmeq(*pauVar2,auVar1,1);
      auVar15 = NEON_uminp(auVar15,*pauVar2,1);
      uVar5 = auVar12._0_8_ & 0x4010040140100401;
      uVar8 = auVar13._0_8_ & 0x4010040140100401;
      auVar15 = NEON_cmeq(auVar15,0,1);
      auVar10._0_8_ =
           CONCAT17(auVar15[0xe] + auVar15[0xf],
                    CONCAT16(auVar15[0xc] + auVar15[0xd],
                             CONCAT15(auVar15[10] + auVar15[0xb],
                                      CONCAT14(auVar15[8] + auVar15[9],
                                               CONCAT13(auVar15[6] + auVar15[7],
                                                        CONCAT12(auVar15[4] + auVar15[5],
                                                                 CONCAT11(auVar15[2] + auVar15[3],
                                                                          auVar15[0] + auVar15[1])))
                                              ))));
      auVar10[8] = (char)uVar5 + (char)(uVar5 >> 8) + (char)(uVar5 >> 0x10) + (char)(uVar5 >> 0x18);
      auVar10[9] = (char)(uVar5 >> 0x20) + (char)(uVar5 >> 0x28) +
                   (char)(uVar5 >> 0x30) + (char)(uVar5 >> 0x38);
      auVar10[10] = (auVar12[8] & 1) + (auVar12[9] & 4) +
                    (auVar12[10] & 0x10) + (auVar12[0xb] & 0x40);
      auVar10[0xb] = (auVar12[0xc] & 1) + (auVar12[0xd] & 4) +
                     (auVar12[0xe] & 0x10) + (auVar12[0xf] & 0x40);
      auVar10[0xc] = (char)uVar8 + (char)(uVar8 >> 8) +
                     (char)(uVar8 >> 0x10) + (char)(uVar8 >> 0x18);
      auVar10[0xd] = (char)(uVar8 >> 0x20) + (char)(uVar8 >> 0x28) +
                     (char)(uVar8 >> 0x30) + (char)(uVar8 >> 0x38);
      auVar10[0xe] = (auVar13[8] & 1) + (auVar13[9] & 4) +
                     (auVar13[10] & 0x10) + (auVar13[0xb] & 0x40);
      auVar10[0xf] = (auVar13[0xc] & 1) + (auVar13[0xd] & 4) +
                     (auVar13[0xe] & 0x10) + (auVar13[0xf] & 0x40);
      uVar5 = auVar10._8_8_;
      pauVar6 = in_x6;
      uVar8 = uVar7;
    } while (auVar10._0_8_ == 0);
    auVar12 = NEON_cmeq(auVar11,0,1);
    auVar15 = NEON_cmeq(*pauVar2,0,1);
    uVar8 = auVar12._0_8_ & 0x8020080280200802;
    uVar9 = auVar15._0_8_ & 0x8020080280200802;
    uVar9 = CONCAT17((auVar15[0xc] & 2) + (auVar15[0xd] & 8) +
                     (auVar15[0xe] & 0x20) + (auVar15[0xf] & 0x80),
                     CONCAT16((auVar15[8] & 2) + (auVar15[9] & 8) +
                              (auVar15[10] & 0x20) + (auVar15[0xb] & 0x80),
                              CONCAT15((char)(uVar9 >> 0x20) + (char)(uVar9 >> 0x28) +
                                       (char)(uVar9 >> 0x30) + (char)(uVar9 >> 0x38),
                                       CONCAT14((char)uVar9 + (char)(uVar9 >> 8) +
                                                (char)(uVar9 >> 0x10) + (char)(uVar9 >> 0x18),
                                                CONCAT13((auVar12[0xc] & 2) + (auVar12[0xd] & 8) +
                                                         (auVar12[0xe] & 0x20) +
                                                         (auVar12[0xf] & 0x80),
                                                         CONCAT12((auVar12[8] & 2) +
                                                                  (auVar12[9] & 8) +
                                                                  (auVar12[10] & 0x20) +
                                                                  (auVar12[0xb] & 0x80),
                                                                  CONCAT11((char)(uVar8 >> 0x20) +
                                                                           (char)(uVar8 >> 0x28) +
                                                                           (char)(uVar8 >> 0x30) +
                                                                           (char)(uVar8 >> 0x38),
                                                                           (char)uVar8 +
                                                                           (char)(uVar8 >> 8) +
                                                                           (char)(uVar8 >> 0x10) +
                                                                           (char)(uVar8 >> 0x18)))))
                                      )));
  }
  uVar5 = uVar5 & (uVar9 - 1 ^ uVar9);
  if (uVar5 == 0) {
    uVar5 = uVar7;
    pauVar4 = in_x6;
  }
  lVar3 = (long)pauVar4 - (LZCOUNT(uVar5) + 2U >> 1);
  if (uVar5 == 0) {
    lVar3 = 0;
  }
  return lVar3;
}



// ===== FUN_7100806620 @ 7100806620 (size=56) =====

ulong FUN_7100806620(void)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = FUN_7100834b00();
  uVar1 = *(long *)(lVar2 + 0xd0) * 0x5851f42d4c957f2d + 1;
  *(ulong *)(lVar2 + 0xd0) = uVar1;
  return uVar1 >> 0x20 & 0x7fffffff;
}



// ===== FUN_7100806660 @ 7100806660 (size=36) =====

void FUN_7100806660(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_4 [4];
  
  uVar1 = FUN_7100834b00();
  FUN_710081cf80(uVar1,param_1,auStack_4);
  return;
}



// ===== FUN_71008066c0 @ 71008066c0 (size=316) =====

long FUN_71008066c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  pauVar5 = (undefined1 (*) [16])((ulong)param_2 & 0xfffffffffffffff0);
  auVar27 = NEON_cmeq(*pauVar5,0,1);
  uVar9 = CONCAT17((char)(auVar27._14_2_ >> 4),
                   CONCAT16((char)(auVar27._12_2_ >> 4),
                            CONCAT15((char)(auVar27._10_2_ >> 4),
                                     CONCAT14((char)(auVar27._8_2_ >> 4),
                                              CONCAT13((char)(auVar27._6_2_ >> 4),
                                                       CONCAT12((char)(auVar27._4_2_ >> 4),
                                                                CONCAT11((char)(auVar27._2_2_ >> 4),
                                                                         (char)(auVar27._0_2_ >> 4))
                                                               )))))) >>
          (((ulong)param_2 & 0xf) << 2);
  if (uVar9 == 0) {
    pauVar6 = pauVar5 + 1;
    uVar10 = *(undefined8 *)(pauVar5[1] + 8);
    uVar19 = (undefined1)uVar10;
    uVar20 = (undefined1)((ulong)uVar10 >> 8);
    uVar21 = (undefined1)((ulong)uVar10 >> 0x10);
    uVar22 = (undefined1)((ulong)uVar10 >> 0x18);
    uVar23 = (undefined1)((ulong)uVar10 >> 0x20);
    uVar24 = (undefined1)((ulong)uVar10 >> 0x28);
    uVar25 = (undefined1)((ulong)uVar10 >> 0x30);
    uVar26 = (undefined1)((ulong)uVar10 >> 0x38);
    uVar10 = *(undefined8 *)*pauVar6;
    uVar11 = (undefined1)uVar10;
    uVar12 = (undefined1)((ulong)uVar10 >> 8);
    uVar13 = (undefined1)((ulong)uVar10 >> 0x10);
    uVar14 = (undefined1)((ulong)uVar10 >> 0x18);
    uVar15 = (undefined1)((ulong)uVar10 >> 0x20);
    uVar16 = (undefined1)((ulong)uVar10 >> 0x28);
    uVar17 = (undefined1)((ulong)uVar10 >> 0x30);
    uVar18 = (undefined1)((ulong)uVar10 >> 0x38);
    auVar27[9] = uVar20;
    auVar27._0_9_ = *(unkbyte9 *)*pauVar6;
    auVar27[10] = uVar21;
    auVar27[0xb] = uVar22;
    auVar27[0xc] = uVar23;
    auVar27[0xd] = uVar24;
    auVar27[0xe] = uVar25;
    auVar27[0xf] = uVar26;
    auVar27 = NEON_cmeq(auVar27,0,1);
    uVar9 = CONCAT17((char)(auVar27._14_2_ >> 4),
                     CONCAT16((char)(auVar27._12_2_ >> 4),
                              CONCAT15((char)(auVar27._10_2_ >> 4),
                                       CONCAT14((char)(auVar27._8_2_ >> 4),
                                                CONCAT13((char)(auVar27._6_2_ >> 4),
                                                         CONCAT12((char)(auVar27._4_2_ >> 4),
                                                                  CONCAT11((char)(auVar27._2_2_ >> 4
                                                                                 ),(char)(auVar27.
                                                  _0_2_ >> 4))))))));
    if (uVar9 == 0) {
      uVar10 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar10;
      puVar8 = (undefined8 *)((long)pauVar6 - ((long)param_2 - (long)param_1));
      do {
        puVar7 = puVar8;
        puVar8 = puVar7 + 4;
        puVar7[1] = CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(uVar23,CONCAT13(uVar22,
                                                  CONCAT12(uVar21,CONCAT11(uVar20,uVar19)))))));
        *puVar7 = CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,CONCAT13(uVar14,
                                                  CONCAT12(uVar13,CONCAT11(uVar12,uVar11)))))));
        uVar3 = *(undefined8 *)(pauVar6[1] + 8);
        uVar10 = *(undefined8 *)pauVar6[1];
        auVar28[9] = (char)((ulong)uVar3 >> 8);
        auVar28._0_9_ = *(unkbyte9 *)pauVar6[1];
        auVar28[10] = (char)((ulong)uVar3 >> 0x10);
        auVar28[0xb] = (char)((ulong)uVar3 >> 0x18);
        auVar28[0xc] = (char)((ulong)uVar3 >> 0x20);
        auVar28[0xd] = (char)((ulong)uVar3 >> 0x28);
        auVar28[0xe] = (char)((ulong)uVar3 >> 0x30);
        auVar28[0xf] = (char)((ulong)uVar3 >> 0x38);
        auVar27 = NEON_cmeq(auVar28,0,1);
        auVar28 = NEON_umaxp(auVar27,auVar27,1);
        if (auVar28._0_8_ != 0) goto LAB_71008067e4;
        puVar7[3] = uVar3;
        puVar7[2] = uVar10;
        pauVar5 = pauVar6 + 2;
        uVar10 = *(undefined8 *)(pauVar6[2] + 8);
        uVar19 = (undefined1)uVar10;
        uVar20 = (undefined1)((ulong)uVar10 >> 8);
        uVar21 = (undefined1)((ulong)uVar10 >> 0x10);
        uVar22 = (undefined1)((ulong)uVar10 >> 0x18);
        uVar23 = (undefined1)((ulong)uVar10 >> 0x20);
        uVar24 = (undefined1)((ulong)uVar10 >> 0x28);
        uVar25 = (undefined1)((ulong)uVar10 >> 0x30);
        uVar26 = (undefined1)((ulong)uVar10 >> 0x38);
        uVar10 = *(undefined8 *)*pauVar5;
        uVar11 = (undefined1)uVar10;
        uVar12 = (undefined1)((ulong)uVar10 >> 8);
        uVar13 = (undefined1)((ulong)uVar10 >> 0x10);
        uVar14 = (undefined1)((ulong)uVar10 >> 0x18);
        uVar15 = (undefined1)((ulong)uVar10 >> 0x20);
        uVar16 = (undefined1)((ulong)uVar10 >> 0x28);
        uVar17 = (undefined1)((ulong)uVar10 >> 0x30);
        uVar18 = (undefined1)((ulong)uVar10 >> 0x38);
        auVar2[9] = uVar20;
        auVar2._0_9_ = *(unkbyte9 *)*pauVar5;
        auVar2[10] = uVar21;
        auVar2[0xb] = uVar22;
        auVar2[0xc] = uVar23;
        auVar2[0xd] = uVar24;
        auVar2[0xe] = uVar25;
        auVar2[0xf] = uVar26;
        auVar27 = NEON_cmeq(auVar2,0,1);
        auVar28 = NEON_umaxp(auVar27,auVar27,1);
        pauVar6 = pauVar5;
      } while (auVar28._0_8_ == 0);
      puVar8 = puVar7 + 6;
LAB_71008067e4:
      uVar9 = CONCAT17((char)(auVar27._14_2_ >> 4),
                       CONCAT16((char)(auVar27._12_2_ >> 4),
                                CONCAT15((char)(auVar27._10_2_ >> 4),
                                         CONCAT14((char)(auVar27._8_2_ >> 4),
                                                  CONCAT13((char)(auVar27._6_2_ >> 4),
                                                           CONCAT12((char)(auVar27._4_2_ >> 4),
                                                                    CONCAT11((char)(auVar27._2_2_ >>
                                                                                   4),(char)(auVar27
                                                  ._0_2_ >> 4))))))));
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      puVar8 = (undefined8 *)
               ((long)puVar8 + (((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 2) - 0x1f));
      puVar7 = (undefined8 *)((long)puVar8 + ((long)param_2 - (long)param_1));
      uVar10 = *puVar7;
      puVar8[1] = puVar7[1];
      *puVar8 = uVar10;
      return (long)puVar8 + 0xf;
    }
    uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = (long)pauVar6 + (((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 2) - (long)param_2);
    if (((uint)uVar9 >> 4 & 1) != 0) {
      uVar10 = *param_2;
      puVar8 = (undefined8 *)((long)param_2 + (uVar9 - 0xf));
      uVar3 = *puVar8;
      uVar4 = puVar8[1];
      param_1[1] = param_2[1];
      *param_1 = uVar10;
      puVar8 = (undefined8 *)((long)param_1 + (uVar9 - 0xf));
      puVar8[1] = uVar4;
      *puVar8 = uVar3;
      return (long)param_1 + uVar9;
    }
  }
  else {
    uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = (ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 2;
  }
  if (((uint)uVar9 >> 3 & 1) != 0) {
    uVar10 = *(undefined8 *)((long)param_2 + (uVar9 - 7));
    *param_1 = *param_2;
    *(undefined8 *)((long)param_1 + (uVar9 - 7)) = uVar10;
    return (long)param_1 + uVar9;
  }
  if (2 < uVar9) {
    uVar1 = *(undefined4 *)((long)param_2 + (uVar9 - 3));
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)((long)param_1 + (uVar9 - 3)) = uVar1;
    return (long)param_1 + uVar9;
  }
  if (uVar9 != 0) {
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
  }
  *(undefined1 *)((long)param_1 + uVar9) = 0;
  return (long)param_1 + uVar9;
}



// ===== FUN_7100806820 @ 7100806820 (size=8) =====

void FUN_7100806820(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_710080f900(param_1,param_2,param_3 << 2);
  return;
}



// ===== FUN_7100806840 @ 7100806840 (size=388) =====

undefined1 * FUN_7100806840(long param_1,undefined1 *param_2,int param_3,long *param_4)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  
  if (param_3 < 2) {
    return (undefined1 *)0x0;
  }
  if ((param_1 != 0) && (*(long *)(param_1 + 0x48) == 0)) {
    FUN_710080d840();
  }
  if (((*(uint *)((long)param_4 + 0xb4) & 1) == 0) && ((*(ushort *)(param_4 + 2) >> 9 & 1) == 0)) {
    FUN_7100836200(param_4 + 0x14);
  }
  param_3 = param_3 + -1;
  puVar6 = param_2;
  do {
    uVar5 = (ulong)(int)param_4[1];
    if (uVar5 == 0) {
      iVar3 = FUN_710081ca20(param_1,param_4);
      if (iVar3 != 0) {
        if (puVar6 == param_2) {
          if (((*(uint *)((long)param_4 + 0xb4) & 1) == 0) &&
             ((*(ushort *)(param_4 + 2) >> 9 & 1) == 0)) {
            FUN_7100836220(param_4 + 0x14);
            return (undefined1 *)0x0;
          }
          return (undefined1 *)0x0;
        }
        break;
      }
      uVar5 = (ulong)(int)param_4[1];
    }
    lVar7 = *param_4;
    uVar1 = (long)param_3;
    if (uVar5 < (ulong)(long)param_3) {
      uVar1 = uVar5;
    }
    lVar4 = FUN_710080c980(lVar7,10,uVar1);
    if (lVar4 != 0) {
      *param_4 = lVar4 + 1;
      lVar4 = (lVar4 + 1) - lVar7;
      *(int *)(param_4 + 1) = (int)param_4[1] - (int)lVar4;
      FUN_710080f900(puVar6,lVar7,lVar4);
      puVar6[lVar4] = 0;
      uVar2 = *(uint *)((long)param_4 + 0xb4);
      goto joined_r0x007100806930;
    }
    *(int *)(param_4 + 1) = (int)param_4[1] - (int)uVar1;
    *param_4 = *param_4 + uVar1;
    FUN_710080f900(puVar6,lVar7,uVar1);
    puVar6 = puVar6 + uVar1;
    param_3 = param_3 - (int)uVar1;
  } while (param_3 != 0);
  uVar2 = *(uint *)((long)param_4 + 0xb4);
  *puVar6 = 0;
joined_r0x007100806930:
  if (((uVar2 & 1) == 0) && ((*(ushort *)(param_4 + 2) >> 9 & 1) == 0)) {
    FUN_7100836220(param_4 + 0x14);
  }
  return param_2;
}



// ===== FUN_71008069e0 @ 71008069e0 (size=52) =====

void FUN_71008069e0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_7100806840(uVar1,param_1,param_2,param_3);
  return;
}



// ===== FUN_7100806a20 @ 7100806a20 (size=156) =====

undefined8 FUN_7100806a20(undefined4 *param_1,uint param_2)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  if (0x1f < param_2) {
    *param_1 = 0x16;
    return 0xffffffff;
  }
  lVar3 = *(long *)(param_1 + 0x5c);
  if (lVar3 != 0) {
    lVar1 = (ulong)param_2 * 8;
    pcVar5 = *(code **)(lVar3 + lVar1);
    if (pcVar5 != (code *)0x0) {
      if (pcVar5 != (code *)0x1) {
        if (pcVar5 == (code *)0xffffffffffffffff) {
          *param_1 = 0x16;
          return 1;
        }
        *(undefined8 *)(lVar3 + lVar1) = 0;
        (*pcVar5)((ulong)param_2);
      }
      return 0;
    }
  }
  uVar2 = FUN_7100834ae0(param_1);
  uVar4 = FUN_71008352a0(param_1,uVar2,param_2);
  return uVar4;
}



// ===== FUN_7100806ac0 @ 7100806ac0 (size=28) =====

void FUN_7100806ac0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_7100806a20(uVar1,param_1);
  return;
}



// ===== FUN_7100806ae0 @ 7100806ae0 (size=72) =====

long FUN_7100806ae0(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (*param_1 == '\0') {
    return 0;
  }
  pcVar5 = param_1;
  cVar1 = *param_2;
  cVar2 = *param_1;
  while (pcVar4 = param_2, cVar3 = *param_2, cVar1 != '\0') {
    while (cVar2 != cVar3) {
      cVar3 = pcVar4[1];
      pcVar4 = pcVar4 + 1;
      if (cVar3 == '\0') goto LAB_7100806b18;
    }
    pcVar5 = pcVar5 + 1;
    cVar1 = *pcVar5;
    cVar2 = cVar1;
  }
LAB_7100806b18:
  return (long)pcVar5 - (long)param_1;
}



// ===== FUN_7100806b40 @ 7100806b40 (size=100) =====

void FUN_7100806b40(undefined8 param_1,undefined4 param_2,char *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  lVar1 = FUN_7100834b00();
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  if (param_3 == (char *)0x0) goto LAB_7100806b94;
  pcVar3 = ", function: ";
  do {
    FUN_710080b3e0(uVar2,"assertion \"%s\" failed: file \"%s\", line %d%s%s\n",param_4,param_1,
                   param_2,pcVar3,param_3);
    uVar2 = FUN_710080f820();
LAB_7100806b94:
    pcVar3 = "";
    param_3 = pcVar3;
  } while( true );
}



// ===== FUN_7100806bc0 @ 7100806bc0 (size=228) =====

uint FUN_7100806bc0(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = -100;
  if ((int)param_1 < 0) {
    iVar3 = 0x76c;
  }
  iVar3 = iVar3 + param_1;
  if (((param_1 & 3) == 0) &&
     (0x28f5c28 < (iVar3 * -0x3d70a3d7 + 0x51eb850U >> 2 | param_1 * 0x40000000))) {
    uVar1 = param_2 * 2 + param_3 * 0x10 + 1;
  }
  else {
    uVar1 = param_2 * 2 + param_3 * 0x10 +
            (uint)((iVar3 * -0x3d70a3d7 + 0x51eb850U >> 4 | iVar3 * -0x70000000) < 0xa3d70b);
  }
  if ((int)uVar1 < 0x22) {
    uVar2 = -((uint)(0x330033c03 >> ((ulong)uVar1 & 0x3f)) & 1);
    if ((int)uVar1 < 0) {
      uVar2 = 0;
    }
    return uVar2;
  }
  uVar2 = (uint)(0x2a001f00070001 >> ((ulong)(uVar1 - 0x16a2) & 0x3f)) & 1;
  if (0x35 < uVar1 - 0x16a2) {
    uVar2 = 0;
  }
  return uVar2;
}



// ===== FUN_7100806cc0 @ 7100806cc0 (size=4040) =====

/* WARNING: Type propagation algorithm not settling */

ulong FUN_7100806cc0(long param_1,ulong param_2,byte *param_3,uint *param_4)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined6 *puVar14;
  byte *pbVar15;
  byte bVar16;
  int iVar17;
  byte *pbVar18;
  undefined *puVar19;
  char *pcVar20;
  uint uVar21;
  char *pcVar22;
  byte *pbVar23;
  int extraout_w8;
  ulong uVar24;
  ulong uVar25;
  byte *pbVar26;
  undefined *puVar27;
  long lVar28;
  uint uVar29;
  byte local_20 [2];
  undefined6 auStack_1e [3];
  
  uVar24 = 0;
  bVar3 = false;
  do {
    for (; bVar16 = *param_3, bVar16 != 0x25 && bVar16 != 0; param_3 = param_3 + 1) {
      if (param_2 - 1 <= uVar24) {
        return 0;
      }
      *(byte *)(param_1 + uVar24) = bVar16;
      uVar24 = uVar24 + 1;
    }
    uVar25 = uVar24;
    if (bVar16 == 0) goto LAB_7100806e38;
    bVar16 = param_3[1];
    if (bVar16 == 0x30 || bVar16 == 0x2b) {
      pbVar26 = param_3 + 2;
      bVar6 = bVar16;
      bVar16 = param_3[2];
    }
    else {
      pbVar26 = param_3 + 1;
      bVar6 = 0;
    }
    uVar11 = 0;
    if ((byte)(bVar16 - 0x31) < 9) {
      uVar11 = FUN_710080daa0(pbVar26,local_20,10);
      pbVar26 = (byte *)CONCAT62(auStack_1e[0],CONCAT11(local_20[1],local_20[0]));
      bVar16 = *pbVar26;
    }
    puVar4 = PTR_s__I__M__S__p_7100ae73f8;
    puVar19 = PTR_s__a__b__e__H__M__S__Y_7100ae7370;
    puVar27 = PTR_s__m__d__y_7100ae7368;
    pbVar18 = PTR_s__H__M__S_7100ae7360;
    if ((bVar16 == 0x45) || (bVar16 == 0x4f)) {
      bVar16 = pbVar26[1];
      pbVar26 = pbVar26 + 1;
    }
    switch(bVar16) {
    case 0x25:
      if (param_2 - 1 <= uVar24) {
        return 0;
      }
      *(undefined1 *)(param_1 + uVar24) = 0x25;
      uVar25 = uVar24 + 1;
      break;
    default:
      return 0;
    case 0x41:
      puVar27 = (&PTR_s_Sunday_7100ae7328)[(int)param_4[6]];
      lVar13 = FUN_710081ce00(puVar27);
      if (lVar13 != 0) {
        uVar11 = uVar24 + lVar13;
        uVar12 = ~uVar24;
        do {
          if (param_2 - 1 <= uVar24) {
            return 0;
          }
          uVar24 = uVar24 + 1;
          *(undefined *)(param_1 + -1 + uVar24) = puVar27[uVar24 + uVar12];
          uVar25 = uVar24;
        } while (uVar24 != uVar11);
      }
      break;
    case 0x42:
      puVar27 = (&PTR_DAT_7100ae7230)[(long)(int)param_4[4] + 0xc];
      lVar13 = FUN_710081ce00(puVar27);
      if (lVar13 != 0) {
        uVar11 = uVar24 + lVar13;
        uVar12 = ~uVar24;
        do {
          if (param_2 - 1 <= uVar24) {
            return 0;
          }
          uVar24 = uVar24 + 1;
          *(undefined *)(param_1 + -1 + uVar24) = puVar27[uVar24 + uVar12];
          uVar25 = uVar24;
        } while (uVar24 != uVar11);
      }
      break;
    case 0x43:
      uVar9 = param_4[5];
      if (uVar11 < 2) {
        uVar11 = 2;
      }
      if ((int)uVar9 < 0) {
        iVar10 = FUN_7100808300(uVar9 + 0x76c);
        iVar7 = iVar10 / 100;
        if (bVar6 == 0) {
          pcVar22 = "";
          pcVar20 = "%s%.*d";
        }
        else if (bVar6 == 0x2b && 9999 < iVar10) {
          pcVar22 = "+";
          pcVar20 = "%s%0.*d";
        }
        else {
          pcVar22 = "";
          pcVar20 = "%s%0.*d";
        }
        if ((int)(uVar9 + 0x76c) < 0 != SCARRY4(uVar9,0x76c)) {
          pcVar22 = "-";
        }
      }
      else {
        iVar7 = (int)uVar9 / 100 + 0x13;
        if (bVar6 == 0) {
          pcVar20 = "%s%.*d";
          pcVar22 = "";
        }
        else {
          pcVar20 = "%s%0.*d";
          if (iVar7 < 100 || bVar6 != 0x2b) {
            pcVar22 = "";
          }
          else {
            pcVar22 = "+";
          }
        }
      }
      iVar7 = FUN_710081c400(param_1 + uVar24,param_2 - uVar24,pcVar20,pcVar22,
                             uVar11 - ((int)(uVar9 + 0x76c) < 0 != SCARRY4(uVar9,0x76c)),iVar7);
      goto joined_r0x00710080712c;
    case 0x44:
      uVar8 = param_4[5];
      uVar9 = param_4[3];
      uVar21 = param_4[4];
      if ((int)uVar8 < 0) {
        uVar8 = FUN_7100808300(uVar8 + 0x76c);
      }
      iVar7 = FUN_710081c400(param_1 + uVar24,param_2 - uVar24,"%.2d/%.2d/%.2d",uVar21 + 1,uVar9,
                             (int)uVar8 % 100);
      goto joined_r0x00710080712c;
    case 0x46:
      local_20[0] = 0x25;
      if (bVar6 == 0) {
        lVar13 = 4;
        local_20[1] = 0x2b;
LAB_71008077dc:
        iVar7 = FUN_710081c400(auStack_1e,0x1e,&DAT_710084a540,lVar13);
        if (iVar7 < 1) goto LAB_71008076a8;
        puVar14 = (undefined6 *)((long)auStack_1e + (long)iVar7);
      }
      else {
        local_20[1] = bVar6;
        if ((5 < uVar11) && (lVar13 = uVar11 - 6, lVar13 != 0)) goto LAB_71008077dc;
LAB_71008076a8:
        puVar14 = auStack_1e;
      }
      FUN_710081b7c0(puVar14,"Y-%m-%d");
      pbVar18 = local_20;
      goto LAB_710080721c;
    case 0x47:
      uVar21 = param_4[5];
      uVar9 = FUN_7100806bc0(uVar21,param_4[6],param_4[7]);
      if ((int)uVar21 < 0) {
        iVar7 = FUN_7100808300(uVar21 + 0x76c);
        iVar7 = iVar7 / 100;
        uVar8 = param_4[5];
        uVar29 = (uint)((int)(uVar21 + 0x76c) < 0 != SCARRY4(uVar21,0x76c));
        if ((int)uVar8 < 0) {
          iVar10 = FUN_7100808300(uVar8 + 0x76c);
          iVar10 = iVar10 % 100;
          if (uVar9 == 0xffffffff) {
            if ((int)(param_4[5] + 0x76b) < 0 != SCARRY4(param_4[5],0x76b)) {
              iVar17 = iVar10 + 1;
              if (iVar10 == -2) {
                uVar9 = (iVar7 + -1) * 100 + 99;
              }
              else {
                iVar10 = iVar7 * 100;
                if (iVar17 == 100) {
                  iVar10 = iVar7 * iVar17;
                }
                uVar9 = iVar17 + iVar10;
              }
              goto LAB_710080774c;
            }
LAB_7100807bfc:
            iVar17 = iVar10 + -1;
            if (iVar10 != 0) goto LAB_7100807ae4;
          }
          else {
            if ((uVar9 & uVar29) != 0) {
LAB_7100807b00:
              if (iVar10 == 0) {
                uVar9 = (iVar7 + -1) * 100 + 99;
              }
              else {
                uVar9 = iVar10 + -1 + iVar7 * 100;
              }
              goto LAB_710080774c;
            }
            iVar17 = uVar9 + iVar10;
            if (iVar17 != -1) goto LAB_7100807c74;
          }
          iVar7 = iVar7 + -1;
          iVar17 = 99;
        }
        else {
          iVar10 = (int)uVar8 % 100;
          if (uVar9 == 0xffffffff) goto LAB_7100807bfc;
          if ((uVar9 & uVar29) != 0) goto LAB_7100807b00;
          iVar17 = uVar9 + iVar10;
LAB_7100807c74:
          if (iVar17 == 100) {
            iVar7 = iVar7 + 1;
            iVar17 = 0;
          }
        }
LAB_7100807ae4:
        uVar9 = iVar17 + iVar7 * 100;
        if ((int)(uVar21 + 0x76c) < 0 != SCARRY4(uVar21,0x76c)) goto LAB_710080774c;
      }
      else {
        iVar10 = (int)uVar21 / 100;
        iVar7 = (int)uVar21 % 100;
        if (uVar9 == 0xffffffff) {
          uVar9 = (iVar10 + 0x12) * 100 + 99;
          if (iVar7 != 0) {
            uVar9 = iVar7 + -1 + (iVar10 + 0x13) * 100;
          }
        }
        else {
          iVar7 = uVar9 + iVar7;
          uVar9 = (iVar10 + 0x14) * iVar7;
          if (iVar7 != 100) {
            uVar9 = iVar7 + (iVar10 + 0x13) * 100;
          }
        }
      }
LAB_7100807010:
      if (bVar6 != 0x2b || uVar9 < 10000) {
        pbVar18 = local_20;
        goto LAB_7100807760;
      }
      local_20[0] = 0x2b;
      if (uVar11 != 0) {
        uVar11 = uVar11 - 1;
      }
      pbVar18 = local_20 + 1;
      local_20[1] = 0x25;
LAB_710080703c:
      pbVar15 = pbVar18 + 2;
      pbVar18[1] = 0x30;
      goto LAB_7100807770;
    case 0x48:
    case 0x6b:
      uVar9 = param_4[2];
      bVar5 = bVar16 == 0x6b;
      puVar27 = &UNK_7100856970;
      puVar19 = &DAT_7100856968;
      goto LAB_7100806e10;
    case 0x49:
    case 0x6c:
      uVar21 = param_4[2];
      uVar9 = 0xc;
      if (uVar21 != 0 && uVar21 != 0xc) {
        uVar9 = (int)uVar21 % 0xc;
      }
      bVar5 = bVar16 == 0x49;
      puVar27 = &DAT_7100856968;
      puVar19 = &UNK_7100856970;
      goto LAB_7100806e10;
    case 0x4d:
      uVar9 = param_4[1];
      goto LAB_7100807060;
    case 0x50:
    case 0x70:
      puVar27 = (&PTR_DAT_7100ae7378)[0xb < (int)param_4[2]];
      lVar13 = FUN_710081ce00(puVar27);
      if (lVar13 != 0) {
        do {
          if (param_2 - 1 <= uVar25) {
            return 0;
          }
          bVar16 = puVar27[uVar25 - uVar24];
          bVar6 = bVar16;
          if ((*pbVar26 == 0x50) && (bVar6 = bVar16 + 0x20, ((&DAT_71009d32f1)[bVar16] & 3) != 1)) {
            bVar6 = bVar16;
          }
          uVar25 = uVar25 + 1;
          *(byte *)(param_1 + -1 + uVar25) = bVar6;
        } while (uVar25 != uVar24 + lVar13);
      }
      break;
    case 0x52:
      iVar7 = FUN_710081c400(param_1 + uVar24,param_2 - uVar24,"%.2d:%.2d",param_4[2],param_4[1]);
      goto joined_r0x00710080712c;
    case 0x53:
      uVar9 = *param_4;
      goto LAB_7100807060;
    case 0x54:
      iVar7 = FUN_710081c400(param_1 + uVar24,param_2 - uVar24,"%.2d:%.2d:%.2d",param_4[2],
                             param_4[1],*param_4);
      goto joined_r0x00710080712c;
    case 0x55:
      uVar9 = param_4[6];
      uVar21 = param_4[7];
      goto LAB_7100807350;
    case 0x56:
      uVar21 = param_4[6];
      uVar8 = param_4[7];
      uVar9 = FUN_7100806bc0(param_4[5],uVar21,uVar8);
      iVar7 = uVar21 - 1;
      if (uVar21 == 0) {
        iVar7 = 6;
      }
      if (uVar9 != 1) {
        if (uVar9 == 0xffffffff) {
          iVar10 = -0x65;
          if (extraout_w8 < 0) {
            iVar10 = 0x76b;
          }
          uVar9 = iVar10 + extraout_w8;
          if (((uVar9 & 3) != 0) ||
             (uVar21 = 1, (uVar9 * -0x3d70a3d7 + 0x51eb850 >> 2 | uVar9 * 0x40000000) < 0x28f5c29))
          {
            uVar21 = (uint)((uVar9 * -0x3d70a3d7 + 0x51eb850 >> 4 | uVar9 * -0x70000000) < 0xa3d70b)
            ;
          }
          uVar9 = ((int)((iVar7 - uVar8) - uVar21) < 5) + 0x34;
        }
        else {
          uVar9 = (int)((uVar8 + 10) - iVar7) / 7;
        }
      }
      goto LAB_7100807060;
    case 0x57:
      uVar21 = param_4[7];
      uVar9 = param_4[6] - 1;
      if (param_4[6] == 0) {
        uVar9 = 6;
      }
LAB_7100807350:
      uVar9 = (int)((uVar21 + 7) - uVar9) / 7;
      goto LAB_7100807060;
    case 0x58:
      FUN_710081ce00(PTR_s__H__M__S_7100ae7360);
      goto LAB_710080720c;
    case 0x59:
      uVar9 = param_4[5];
      if ((int)(uVar9 + 0x76c) < 0 == SCARRY4(uVar9,0x76c)) {
        uVar9 = uVar9 + 0x76c;
        goto LAB_7100807010;
      }
      uVar9 = -uVar9 - 0x76c;
LAB_710080774c:
      local_20[0] = 0x2d;
      pbVar18 = local_20 + 1;
      uVar11 = uVar11 - (uVar11 != 0);
LAB_7100807760:
      *pbVar18 = 0x25;
      pbVar15 = pbVar18 + 1;
      if (bVar6 != 0) goto LAB_710080703c;
LAB_7100807770:
      FUN_710081b7c0(pbVar15,&DAT_7100856990);
      iVar7 = FUN_710081c400(param_1 + uVar24,param_2 - uVar24,local_20,uVar11,uVar9);
      goto joined_r0x00710080712c;
    case 0x5a:
      if (-1 < (int)param_4[8]) {
        FUN_7100814c60();
        if (!bVar3) {
          FUN_710080e8c0();
        }
        puVar27 = (&PTR_DAT_7100af5560)[(int)(uint)(0 < (int)param_4[8])];
        lVar13 = FUN_710081ce00(puVar27);
        if (lVar13 != 0) {
          uVar25 = uVar24 + lVar13;
          uVar11 = ~uVar24;
          do {
            if (param_2 - 1 <= uVar24) {
              FUN_7100814c80();
              return 0;
            }
            uVar24 = uVar24 + 1;
            *(undefined *)(param_1 + -1 + uVar24) = puVar27[uVar24 + uVar11];
          } while (uVar24 != uVar25);
        }
        FUN_7100814c80();
LAB_7100807314:
        bVar3 = true;
        break;
      }
      goto LAB_7100806e68;
    case 0x61:
      puVar27 = (&PTR_DAT_7100ae7230)[(long)(int)param_4[6] + 0x18];
      lVar13 = FUN_710081ce00(puVar27);
      uVar12 = ~uVar24;
      uVar11 = uVar24 + lVar13;
      if (lVar13 != 0) {
        do {
          if (param_2 - 1 <= uVar24) {
            return 0;
          }
          uVar24 = uVar24 + 1;
          *(undefined *)(param_1 + -1 + uVar24) = puVar27[uVar24 + uVar12];
          uVar25 = uVar24;
        } while (uVar24 != uVar11);
      }
      break;
    case 0x62:
    case 0x68:
      puVar27 = (&PTR_DAT_7100ae7230)[(int)param_4[4]];
      lVar13 = FUN_710081ce00(puVar27);
      if (lVar13 != 0) {
        uVar11 = uVar24 + lVar13;
        uVar12 = ~uVar24;
        do {
          if (param_2 - 1 <= uVar24) {
            return 0;
          }
          uVar24 = uVar24 + 1;
          *(undefined *)(param_1 + -1 + uVar24) = puVar27[uVar24 + uVar12];
          uVar25 = uVar24;
        } while (uVar24 != uVar11);
      }
      break;
    case 99:
      FUN_710081ce00(PTR_s__a__b__e__H__M__S__Y_7100ae7370);
      pbVar18 = puVar19;
      goto LAB_710080720c;
    case 100:
    case 0x65:
      uVar9 = param_4[3];
      bVar5 = bVar16 == 100;
      puVar27 = &DAT_7100856968;
      puVar19 = &UNK_7100856970;
LAB_7100806e10:
      if (bVar5) {
        puVar19 = puVar27;
      }
      iVar7 = FUN_710081c400(param_1 + uVar24,param_2 - uVar24,puVar19,uVar9);
      goto joined_r0x00710080712c;
    case 0x67:
      uVar9 = param_4[5];
      iVar7 = FUN_7100806bc0(uVar9,param_4[6],param_4[7]);
      if ((int)uVar9 < 0) {
        uVar9 = FUN_7100808300(uVar9 + 0x76c);
      }
      iVar10 = (int)uVar9 % 100;
      if (iVar7 == -1) {
        if ((int)(param_4[5] + 0x76b) < 0 == SCARRY4(param_4[5],0x76b)) goto LAB_710080795c;
LAB_71008078b4:
        iVar10 = iVar10 + 1;
      }
      else if (iVar7 == 1) {
        if ((int)(param_4[5] + 0x76c) < 0 == SCARRY4(param_4[5],0x76c)) goto LAB_71008078b4;
LAB_710080795c:
        iVar10 = iVar10 + -1;
      }
      uVar9 = (iVar10 % 100 + 100U) % 100;
      goto LAB_7100807060;
    case 0x6a:
      iVar7 = FUN_710081c400(param_1 + uVar24,param_2 - uVar24,&DAT_7100856998,param_4[7] + 1);
      goto joined_r0x00710080712c;
    case 0x6d:
      uVar9 = param_4[4] + 1;
      goto LAB_7100807060;
    case 0x6e:
      if (param_2 - 1 <= uVar24) {
        return 0;
      }
      *(undefined1 *)(param_1 + uVar24) = 10;
      uVar25 = uVar24 + 1;
      break;
    case 0x71:
      iVar7 = FUN_710081c400(param_1 + uVar24,param_2 - uVar24,&DAT_71008569a0,
                             (int)param_4[4] / 3 + 1);
      goto joined_r0x00710080712c;
    case 0x72:
      FUN_710081ce00(PTR_s__I__M__S__p_7100ae73f8);
      pbVar18 = puVar4;
      goto LAB_710080720c;
    case 0x73:
      lVar13 = 0;
      if (-1 < (int)param_4[8]) {
        FUN_7100814c60();
        if (!bVar3) {
          FUN_710080e8c0();
        }
        lVar13 = FUN_710080f8e0();
        lVar13 = *(long *)(lVar13 + (ulong)(0 < (int)param_4[8]) * 0x28 + 0x28);
        FUN_7100814c80();
        bVar3 = true;
        lVar13 = -lVar13;
      }
      uVar9 = param_4[5];
      lVar2 = (long)(int)uVar9 + -0x45;
      lVar28 = (long)(int)uVar9 + -0x42;
      if (-1 < lVar2) {
        lVar28 = lVar2;
      }
      iVar7 = FUN_710081c400(param_1 + uVar24,param_2 - uVar24,&DAT_71008569b8,
                             ((long)(int)*param_4 +
                             ((long)(int)param_4[1] +
                             ((long)(int)param_4[2] +
                             (((lVar28 >> 2) - (long)((int)(uVar9 - 1) / 100)) +
                              (long)((int)(uVar9 + 299) / 400) + (long)(int)((uVar9 - 0x46) * 0x16d)
                             + (long)(int)param_4[7]) * 0x18) * 0x3c) * 0x3c) - lVar13);
joined_r0x00710080712c:
      if (iVar7 < 0) {
        return 0;
      }
LAB_7100806e24:
      uVar25 = uVar24 + (long)iVar7;
      if (param_2 <= uVar24 + (long)iVar7) {
        return 0;
      }
      break;
    case 0x74:
      if (param_2 - 1 <= uVar24) {
        return 0;
      }
      *(undefined1 *)(param_1 + uVar24) = 9;
      uVar25 = uVar24 + 1;
      break;
    case 0x75:
      if (param_2 - 1 <= uVar24) {
        return 0;
      }
      cVar1 = (char)param_4[6] + '0';
      if (param_4[6] == 0) {
        cVar1 = '7';
      }
      *(char *)(param_1 + uVar24) = cVar1;
      uVar25 = uVar24 + 1;
      break;
    case 0x76:
      pbVar18 = local_20;
      FUN_710081b7c0(pbVar18,"%e-%b-%");
      lVar13 = FUN_710081ce00(pbVar18);
      pbVar15 = local_20 + lVar13 + 1;
      pbVar23 = pbVar15;
      if (bVar6 == 0) {
        lVar28 = 4;
        pbVar18[lVar13] = 0x2b;
LAB_7100807810:
        iVar7 = FUN_710081c400(pbVar15,(long)&stack0x00000000 - (long)pbVar15,&DAT_710084a540,lVar28
                              );
        pbVar23 = pbVar15 + iVar7;
        if (iVar7 < 1) {
          pbVar23 = pbVar15;
        }
      }
      else {
        pbVar18[lVar13] = bVar6;
        if ((5 < uVar11) && (lVar28 = uVar11 - 6, lVar28 != 0)) goto LAB_7100807810;
      }
      FUN_710081b7c0(pbVar23,"Y");
      goto LAB_710080721c;
    case 0x77:
      if (param_2 - 1 <= uVar24) {
        return 0;
      }
      *(char *)(param_1 + uVar24) = (char)param_4[6] + '0';
      uVar25 = uVar24 + 1;
      break;
    case 0x78:
      FUN_710081ce00(PTR_s__m__d__y_7100ae7368);
      pbVar18 = puVar27;
LAB_710080720c:
      if (*pbVar18 != 0) {
LAB_710080721c:
        iVar7 = FUN_7100806cc0(param_1 + uVar24,param_2 - uVar24,pbVar18,param_4);
        if (iVar7 < 1) {
          return 0;
        }
        uVar25 = uVar24 + (long)iVar7;
      }
      break;
    case 0x79:
      uVar9 = param_4[5];
      if ((int)uVar9 < 0) {
        uVar9 = FUN_7100808300(uVar9 + 0x76c);
      }
      uVar9 = (int)uVar9 % 100;
LAB_7100807060:
      iVar7 = FUN_710081c400(param_1 + uVar24,param_2 - uVar24,&DAT_7100856968,uVar9);
      if (iVar7 < 0) {
        return 0;
      }
      goto LAB_7100806e24;
    case 0x7a:
      if (-1 < (int)param_4[8]) {
        FUN_7100814c60();
        if (!bVar3) {
          FUN_710080e8c0();
        }
        lVar13 = FUN_710080f8e0();
        lVar28 = -*(long *)(lVar13 + (ulong)(0 < (int)param_4[8]) * 0x28 + 0x28);
        FUN_7100814c80();
        lVar13 = FUN_710080eea0(lVar28 / 0x3c);
        iVar7 = FUN_710081c400(param_1 + uVar24,param_2 - uVar24,"%+03ld%.2ld",lVar28 / 0xe10,
                               lVar13 % 0x3c);
        if (iVar7 < 0) {
          return 0;
        }
        uVar25 = uVar24 + (long)iVar7;
        if (param_2 <= uVar25) {
          return 0;
        }
        goto LAB_7100807314;
      }
      goto LAB_7100806e68;
    }
    uVar24 = uVar25;
    if (*pbVar26 == 0) {
LAB_7100806e38:
      if (param_2 == 0) {
        return uVar25;
      }
      *(undefined1 *)(param_1 + uVar25) = 0;
      return uVar25;
    }
LAB_7100806e68:
    param_3 = pbVar26 + 1;
  } while( true );
}



// ===== FUN_7100807ca0 @ 7100807ca0 (size=52) =====

void FUN_7100807ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_7100834b00();
  FUN_7100806cc0(param_1,param_2,param_3,param_4);
  return;
}



// ===== FUN_7100807ce0 @ 7100807ce0 (size=1048) =====

char * FUN_7100807ce0(long param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  char *pcVar1;
  char *pcVar2;
  
  switch(param_2) {
  case 0:
    return "Success";
  case 1:
    return "Not owner";
  case 2:
    return "No such file or directory";
  case 3:
    return "No such process";
  case 4:
    return "Interrupted system call";
  case 5:
    return "I/O error";
  case 6:
    return "No such device or address";
  case 7:
    return "Arg list too long";
  case 8:
    return "Exec format error";
  case 9:
    return "Bad file number";
  case 10:
    return "No children";
  case 0xb:
    return "No more processes";
  case 0xc:
    return "Not enough space";
  case 0xd:
    return "Permission denied";
  case 0xe:
    return "Bad address";
  case 0x10:
    return "Device or resource busy";
  case 0x11:
    return "File exists";
  case 0x12:
    return "Cross-device link";
  case 0x13:
    return "No such device";
  case 0x14:
    return "Not a directory";
  case 0x15:
    return "Is a directory";
  case 0x16:
    return "Invalid argument";
  case 0x17:
    return "Too many open files in system";
  case 0x18:
    return "File descriptor value too large";
  case 0x19:
    return "Not a character device";
  case 0x1a:
    return "Text file busy";
  case 0x1b:
    return "File too large";
  case 0x1c:
    return "No space left on device";
  case 0x1d:
    return "Illegal seek";
  case 0x1e:
    return "Read-only file system";
  case 0x1f:
    return "Too many links";
  case 0x20:
    return "Broken pipe";
  case 0x21:
    return "Mathematics argument out of domain of function";
  case 0x22:
    return "Result too large";
  case 0x23:
    return "No message of desired type";
  case 0x24:
    return "Identifier removed";
  case 0x2d:
    return "Deadlock";
  case 0x2e:
    return "No lock";
  case 0x3c:
    return "Not a stream";
  case 0x3d:
    return "No data";
  case 0x3e:
    return "Stream ioctl timeout";
  case 0x3f:
    return "No stream resources";
  case 0x43:
    return "Virtual circuit is gone";
  case 0x47:
    return "Protocol error";
  case 0x4a:
    return "Multihop attempted";
  case 0x4d:
    return "Bad message";
  case 0x58:
    return "Function not implemented";
  case 0x5a:
    return "Directory not empty";
  case 0x5b:
    return "File or path name too long";
  case 0x5c:
    return "Too many symbolic links";
  case 0x5f:
    return "Operation not supported on socket";
  case 0x68:
    return "Connection reset by peer";
  case 0x69:
    return "No buffer space available";
  case 0x6a:
    return "Address family not supported by protocol family";
  case 0x6b:
    return "Protocol wrong type for socket";
  case 0x6c:
    return "Socket operation on non-socket";
  case 0x6d:
    return "Protocol not available";
  case 0x6f:
    return "Connection refused";
  case 0x70:
    return "Address already in use";
  case 0x71:
    return "Software caused connection abort";
  case 0x72:
    return "Network is unreachable";
  case 0x73:
    return "Network interface is not configured";
  case 0x74:
    return "Connection timed out";
  case 0x75:
    return "Host is down";
  case 0x76:
    return "Host is unreachable";
  case 0x77:
    return "Connection already in progress";
  case 0x78:
    return "Socket already connected";
  case 0x79:
    return "Destination address required";
  case 0x7a:
    return "Message too long";
  case 0x7b:
    return "Unknown protocol";
  case 0x7d:
    return "Address not available";
  case 0x7e:
    return "Connection aborted by network";
  case 0x7f:
    return "Socket is already connected";
  case 0x80:
    return "Socket is not connected";
  case 0x86:
    return "Not supported";
  case 0x8a:
    return "Illegal byte sequence";
  case 0x8b:
    return "Value too large for defined data type";
  case 0x8c:
    return "Operation canceled";
  case 0x8d:
    return "State not recoverable";
  case 0x8e:
    return "Previous owner died";
  }
  if (param_4 == 0) {
    param_4 = param_1;
  }
  pcVar2 = (char *)FUN_71008084e0(param_2,param_3,param_4);
  pcVar1 = "";
  if (pcVar2 != (char *)0x0) {
    pcVar1 = pcVar2;
  }
  return pcVar1;
}



// ===== FUN_7100808100 @ 7100808100 (size=36) =====

void FUN_7100808100(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_7100807ce0(uVar1,param_1,0,0);
  return;
}



// ===== FUN_7100808140 @ 7100808140 (size=72) =====

bool FUN_7100808140(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_710081ba40();
  if (iVar1 - 0x1aU < 3) {
    return true;
  }
  return param_1 - 9U < 5;
}



// ===== FUN_71008081a0 @ 71008081a0 (size=304) =====

undefined4 FUN_71008081a0(long param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 != 0) {
    if ((param_1 != 0) && (*(long *)(param_1 + 0x48) == 0)) {
      FUN_710080d840();
    }
    if ((*(uint *)(param_2 + 0xb4) & 1) == 0) {
      if ((((uint)(int)*(short *)(param_2 + 0x10) >> 9 & 1) != 0) ||
         (FUN_7100836200(param_2 + 0xa0), *(short *)(param_2 + 0x10) != 0)) {
LAB_71008081d8:
        uVar1 = FUN_710081c560(param_1,param_2);
        if ((*(code **)(param_2 + 0x50) != (code *)0x0) &&
           (iVar2 = (**(code **)(param_2 + 0x50))(param_1,*(undefined8 *)(param_2 + 0x30)),
           iVar2 < 0)) {
          uVar1 = 0xffffffff;
        }
        if ((*(ushort *)(param_2 + 0x10) >> 7 & 1) != 0) {
          FUN_7100816da0(param_1,*(undefined8 *)(param_2 + 0x18));
        }
        if (*(long *)(param_2 + 0x58) != 0) {
          if (*(long *)(param_2 + 0x58) != param_2 + 0x74) {
            FUN_7100816da0(param_1);
          }
          *(undefined8 *)(param_2 + 0x58) = 0;
        }
        if (*(long *)(param_2 + 0x78) != 0) {
          FUN_7100816da0(param_1);
          *(undefined8 *)(param_2 + 0x78) = 0;
        }
        FUN_710080d6c0();
        *(undefined2 *)(param_2 + 0x10) = 0;
        if ((*(uint *)(param_2 + 0xb4) & 1) == 0) {
          FUN_7100836220(param_2 + 0xa0);
        }
        FUN_710080d6e0();
        return uVar1;
      }
      if ((*(uint *)(param_2 + 0xb4) & 1) == 0) {
        FUN_7100836220(param_2 + 0xa0);
      }
    }
    else if ((int)*(short *)(param_2 + 0x10) != 0) goto LAB_71008081d8;
  }
  return 0;
}



// ===== FUN_71008082e0 @ 71008082e0 (size=28) =====

void FUN_71008082e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_71008081a0(uVar1,param_1);
  return;
}



// ===== FUN_7100808300 @ 7100808300 (size=12) =====

int FUN_7100808300(int param_1)

{
  int iVar1;
  
  iVar1 = -param_1;
  if (-1 < param_1) {
    iVar1 = param_1;
  }
  return iVar1;
}



// ===== FUN_7100808340 @ 7100808340 (size=260) =====

void FUN_7100808340(char *param_1,char param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  bool bVar4;
  uint uVar5;
  char *pcVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (0x60 < param_3) {
    uVar7 = (ulong)param_1 & 0xfffffffffffffff0;
    *(ulong *)(param_1 + 8) =
         CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
    *(ulong *)param_1 =
         CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
    if ((0x9f < param_3 && param_2 == '\0') && (uVar1 = dczid_el0, (uVar1 & 0x1f) == 4)) {
      *(ulong *)(uVar7 + 0x18) =
           CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
      *(ulong *)(uVar7 + 0x10) =
           CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
      *(ulong *)(uVar7 + 0x28) =
           CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
      *(ulong *)(uVar7 + 0x20) =
           CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
      *(ulong *)(uVar7 + 0x38) =
           CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
      *(ulong *)(uVar7 + 0x30) =
           CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
      uVar7 = (ulong)param_1 & 0xffffffffffffffc0;
      pcVar6 = param_1 + (param_3 - uVar7) + -0x80;
      do {
        uVar7 = uVar7 + 0x40;
        DC_ZVA(uVar7);
        bVar4 = (char *)0x3f < pcVar6;
        pcVar6 = pcVar6 + -0x40;
      } while (bVar4 && pcVar6 != (char *)0x0);
      *(ulong *)(param_1 + (param_3 - 0x38)) =
           CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
      *(ulong *)(param_1 + (param_3 - 0x40)) =
           CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
      *(ulong *)(param_1 + (param_3 - 0x28)) =
           CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
      *(ulong *)(param_1 + (param_3 - 0x30)) =
           CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
      *(ulong *)(param_1 + (param_3 - 0x18)) =
           CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
      *(ulong *)(param_1 + (param_3 - 0x20)) =
           CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
      *(ulong *)(param_1 + (param_3 - 8)) =
           CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
      *(ulong *)(param_1 + (param_3 - 0x10)) =
           CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
      return;
    }
    pcVar6 = param_1 + (param_3 - uVar7) + -0x50;
    puVar8 = (undefined8 *)(uVar7 - 0x10);
    do {
      puVar8[5] = CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(
                                                  param_2,CONCAT12(param_2,CONCAT11(param_2,param_2)
                                                                  ))))));
      puVar8[4] = CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(
                                                  param_2,CONCAT12(param_2,CONCAT11(param_2,param_2)
                                                                  ))))));
      puVar8[7] = CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(
                                                  param_2,CONCAT12(param_2,CONCAT11(param_2,param_2)
                                                                  ))))));
      puVar8[6] = CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(
                                                  param_2,CONCAT12(param_2,CONCAT11(param_2,param_2)
                                                                  ))))));
      puVar8[9] = CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(
                                                  param_2,CONCAT12(param_2,CONCAT11(param_2,param_2)
                                                                  ))))));
      puVar8[8] = CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(
                                                  param_2,CONCAT12(param_2,CONCAT11(param_2,param_2)
                                                                  ))))));
      puVar8[0xb] = CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(
                                                  param_2,CONCAT12(param_2,CONCAT11(param_2,param_2)
                                                                  ))))));
      puVar8[10] = CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(
                                                  param_2,CONCAT12(param_2,CONCAT11(param_2,param_2)
                                                                  ))))));
      bVar4 = (char *)0x3f < pcVar6;
      pcVar6 = pcVar6 + -0x40;
      puVar8 = puVar8 + 8;
    } while (bVar4 && pcVar6 != (char *)0x0);
    *(ulong *)(param_1 + (param_3 - 0x38)) =
         CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
    *(ulong *)(param_1 + (param_3 - 0x40)) =
         CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
    *(ulong *)(param_1 + (param_3 - 0x28)) =
         CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
    *(ulong *)(param_1 + (param_3 - 0x30)) =
         CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
    *(ulong *)(param_1 + (param_3 - 0x18)) =
         CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
    *(ulong *)(param_1 + (param_3 - 0x20)) =
         CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
    *(ulong *)(param_1 + (param_3 - 8)) =
         CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
    *(ulong *)(param_1 + (param_3 - 0x10)) =
         CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
    return;
  }
  uVar5 = (uint)param_3;
  if (0xf < param_3) {
    *(ulong *)(param_1 + 8) =
         CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
    *(ulong *)param_1 =
         CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
    if ((uVar5 >> 6 & 1) == 0) {
      *(ulong *)(param_1 + (param_3 - 8)) =
           CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
      *(ulong *)(param_1 + (param_3 - 0x10)) =
           CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
      if ((uVar5 >> 5 & 1) != 0) {
        *(ulong *)(param_1 + 0x18) =
             CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
        *(ulong *)(param_1 + 0x10) =
             CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
        *(ulong *)(param_1 + (param_3 - 0x18)) =
             CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
        *(ulong *)(param_1 + (param_3 - 0x20)) =
             CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
      }
      return;
    }
    *(ulong *)(param_1 + 0x18) =
         CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
    *(ulong *)(param_1 + 0x10) =
         CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
    *(ulong *)(param_1 + 0x28) =
         CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
    *(ulong *)(param_1 + 0x20) =
         CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
    *(ulong *)(param_1 + 0x38) =
         CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
    *(ulong *)(param_1 + 0x30) =
         CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
    *(ulong *)(param_1 + (param_3 - 0x18)) =
         CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
    *(ulong *)(param_1 + (param_3 - 0x20)) =
         CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
    *(ulong *)(param_1 + (param_3 - 8)) =
         CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
    *(ulong *)(param_1 + (param_3 - 0x10)) =
         CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(param_2,
                                                  CONCAT12(param_2,CONCAT11(param_2,param_2)))))));
    return;
  }
  uVar3 = CONCAT13(param_2,CONCAT12(param_2,CONCAT11(param_2,param_2)));
  uVar2 = CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,uVar3))));
  if ((uVar5 >> 3 & 1) != 0) {
    *(undefined8 *)param_1 = uVar2;
    *(undefined8 *)(param_1 + (param_3 - 8)) = uVar2;
    return;
  }
  if ((uVar5 >> 2 & 1) != 0) {
    *(undefined4 *)param_1 = uVar3;
    *(undefined4 *)(param_1 + (param_3 - 4)) = uVar3;
    return;
  }
  if ((param_3 != 0) && (*param_1 = param_2, (uVar5 >> 1 & 1) != 0)) {
    *(ushort *)(param_1 + (param_3 - 2)) = CONCAT11(param_2,param_2);
  }
  return;
}



// ===== FUN_7100808460 @ 7100808460 (size=52) =====

void FUN_7100808460(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_710081e9e0(uVar1,param_1,param_2,param_3);
  return;
}



// ===== FUN_71008084a0 @ 71008084a0 (size=44) =====

void FUN_71008084a0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_7100835cc0(uVar1,param_1,param_2,param_3);
  return;
}



// ===== FUN_71008084e0 @ 71008084e0 (size=8) =====

undefined8 FUN_71008084e0(void)

{
  return 0;
}



// ===== FUN_7100808500 @ 7100808500 (size=704) =====

ulong FUN_7100808500(undefined4 *param_1,byte *param_2,undefined8 *param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  
  pbVar7 = param_2;
  do {
    pbVar6 = pbVar7;
    pbVar7 = pbVar6 + 1;
    bVar2 = *pbVar6;
    uVar9 = (ulong)bVar2;
  } while (((byte)(&DAT_71009d32f1)[uVar9] >> 3 & 1) != 0);
  uVar1 = param_4 & 0xffffffef;
  if (bVar2 == 0x2d) {
    bVar2 = *pbVar7;
    uVar9 = (ulong)bVar2;
    pbVar7 = pbVar6 + 2;
    if (uVar1 == 0) {
      iVar12 = 0;
      if (bVar2 == 0x30) {
        if ((pbVar6[2] & 0xdf) == 0x58) {
          uVar13 = 0x10;
          uVar9 = (ulong)pbVar6[3];
          pbVar7 = pbVar6 + 4;
          param_4 = 0x10;
        }
        else if (param_4 == 0) {
          uVar13 = 8;
          param_4 = 8;
        }
        else {
          uVar13 = 0x10;
          param_4 = 0x10;
        }
        uVar14 = 0x8000000000000000;
        bVar3 = true;
        uVar11 = 0;
        if (uVar13 != 0) {
          uVar11 = 0x8000000000000000 / uVar13;
        }
      }
      else if (param_4 == 0) {
        uVar13 = 10;
        uVar11 = 0xccccccccccccccc;
        param_4 = 10;
        iVar12 = 8;
        bVar3 = true;
        uVar14 = 0x8000000000000000;
      }
      else {
        uVar13 = 0x10;
        uVar11 = 0x800000000000000;
        param_4 = 0x10;
        bVar3 = true;
        uVar14 = 0x8000000000000000;
      }
    }
    else {
      uVar13 = (ulong)(int)param_4;
      uVar14 = 0x8000000000000000;
      bVar3 = true;
      uVar11 = 0;
      if (uVar13 != 0) {
        uVar11 = 0x8000000000000000 / uVar13;
      }
      iVar12 = -((int)uVar11 * param_4);
    }
    goto LAB_7100808554;
  }
  if (bVar2 == 0x2b) {
    bVar2 = *pbVar7;
    uVar9 = (ulong)bVar2;
    pbVar7 = pbVar6 + 2;
    if (uVar1 != 0) {
      uVar13 = (ulong)(int)param_4;
      uVar14 = 0x7fffffffffffffff;
      bVar3 = false;
      uVar11 = 0;
      if (uVar13 != 0) {
        uVar11 = 0x7fffffffffffffff / uVar13;
      }
      iVar12 = -1 - (int)uVar11 * param_4;
      goto LAB_7100808554;
    }
    if (bVar2 != 0x30) goto LAB_71008085cc;
    if ((pbVar6[2] & 0xdf) == 0x58) {
      uVar13 = 0x10;
      uVar9 = (ulong)pbVar6[3];
      pbVar7 = pbVar6 + 4;
      param_4 = 0x10;
    }
    else {
      if (param_4 != 0) goto LAB_71008087a8;
LAB_71008086a0:
      uVar13 = 8;
      param_4 = 8;
    }
LAB_71008086a8:
    uVar11 = 0;
    if (uVar13 != 0) {
      uVar11 = 0x7fffffffffffffff / uVar13;
    }
    iVar12 = -1 - (int)uVar11 * (int)uVar13;
  }
  else {
    if (uVar1 != 0) {
      uVar13 = (ulong)(int)param_4;
      uVar14 = 0x7fffffffffffffff;
      bVar3 = false;
      uVar11 = 0;
      if (uVar13 != 0) {
        uVar11 = 0x7fffffffffffffff / uVar13;
      }
      iVar12 = -1 - (int)uVar11 * param_4;
      goto LAB_7100808554;
    }
    if (bVar2 == 0x30) {
      if ((*pbVar7 & 0xdf) == 0x58) {
        uVar9 = (ulong)pbVar6[2];
        uVar13 = 0x10;
        pbVar7 = pbVar6 + 3;
        param_4 = 0x10;
      }
      else {
        if (param_4 == 0) goto LAB_71008086a0;
LAB_71008087a8:
        uVar13 = 0x10;
        param_4 = 0x10;
      }
      goto LAB_71008086a8;
    }
LAB_71008085cc:
    if (param_4 == 0) {
      uVar13 = 10;
      uVar11 = 0xccccccccccccccc;
      param_4 = 10;
      iVar12 = 7;
    }
    else {
      uVar13 = 0x10;
      param_4 = 0x10;
      uVar11 = 0x7ffffffffffffff;
      iVar12 = 0xf;
    }
  }
  bVar3 = false;
  uVar14 = 0x7fffffffffffffff;
LAB_7100808554:
  iVar10 = 0;
  uVar5 = 0;
  do {
    iVar8 = (int)uVar9;
    uVar1 = iVar8 - 0x30;
    if (9 < uVar1) {
      if (iVar8 - 0x41U < 0x1a) {
        uVar1 = iVar8 - 0x37;
      }
      else {
        if (0x19 < iVar8 - 0x61U) {
LAB_7100808608:
          if (iVar10 == -1) {
            *param_1 = 0x22;
            if (param_3 == (undefined8 *)0x0) {
              return uVar14;
            }
          }
          else {
            uVar14 = -uVar5;
            if (!bVar3) {
              uVar14 = uVar5;
            }
            if (param_3 == (undefined8 *)0x0) {
              return uVar14;
            }
            if (iVar10 == 0) {
              *param_3 = param_2;
              return uVar14;
            }
          }
          *param_3 = pbVar7 + -1;
          return uVar14;
        }
        uVar1 = iVar8 - 0x57;
      }
    }
    if ((int)param_4 <= (int)uVar1) goto LAB_7100808608;
    bVar4 = iVar10 != -1;
    iVar10 = -1;
    if ((uVar5 <= uVar11 && bVar4) && (uVar5 != uVar11 || (int)uVar1 <= iVar12)) {
      iVar10 = 1;
      uVar5 = (long)(int)uVar1 + uVar5 * uVar13;
    }
    uVar9 = (ulong)*pbVar7;
    pbVar7 = pbVar7 + 1;
  } while( true );
}



// ===== FUN_71008087c0 @ 71008087c0 (size=52) =====

void FUN_71008087c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_7100834b00();
  FUN_7100808500(param_1,param_2,param_3,param_4);
  return;
}



// ===== FUN_7100808800 @ 7100808800 (size=64) =====

void FUN_7100808800(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_7100834b00();
  FUN_7100808500(uVar1,param_1,param_2,param_3);
  return;
}



// ===== FUN_7100808840 @ 7100808840 (size=180) =====

undefined * FUN_7100808840(void)

{
  int iVar1;
  undefined **ppuVar2;
  char *pcVar3;
  
  pcVar3 = s_C_UTF_8_7100af49b8;
  FUN_710081b7c0(&DAT_7100af4890,&DAT_7100af4998);
  ppuVar2 = (undefined **)pcVar3;
  do {
    iVar1 = FUN_710080aec0(&DAT_7100af4998,ppuVar2);
    if (iVar1 != 0) {
      do {
        FUN_710080c880(&DAT_7100af4890,&DAT_71008455d0);
        ppuVar2 = (undefined **)((long)pcVar3 + 0x20);
        FUN_710080c880(&DAT_7100af4890,pcVar3);
        pcVar3 = (char *)ppuVar2;
      } while (ppuVar2 != &PTR_LAB_7100af4a58);
      return &DAT_7100af4890;
    }
    ppuVar2 = ppuVar2 + 4;
  } while (ppuVar2 != &PTR_LAB_7100af4a58);
  return &DAT_7100af4890;
}



// ===== FUN_7100808900 @ 7100808900 (size=2012) =====

long FUN_7100808900(long param_1,ulong param_2,char *param_3)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  char *pcVar12;
  undefined1 *puVar13;
  char cVar14;
  char *local_28;
  byte local_20;
  byte local_1f;
  undefined1 uStack_1e;
  char local_1d;
  byte local_1c;
  byte local_1b [3];
  char local_18;
  char local_17;
  char local_16 [22];
  
  lVar9 = param_1 + (-(param_2 >> 0x1f & 1) & 0xffffffe000000000 | (param_2 & 0xffffffff) << 5);
  iVar4 = FUN_710080aec0(param_3,lVar9);
  if (iVar4 == 0) {
    return lVar9;
  }
  iVar4 = FUN_710080aec0(param_3,"POSIX");
  if (iVar4 == 0) {
    FUN_710081b7c0(param_3,"C");
  }
  iVar4 = FUN_710080aec0(param_3,"C");
  if (iVar4 == 0) {
    FUN_710081b7c0(&local_20,"ASCII");
LAB_7100808a0c:
    uVar6 = 0;
    uVar5 = 0;
    bVar3 = false;
  }
  else {
    if (*param_3 == 'C') {
      if (1 < (byte)(param_3[1] - 0x2dU)) {
        return 0;
      }
      pcVar12 = param_3 + 2;
LAB_7100808ae0:
      FUN_710081b7c0();
      puVar7 = (undefined1 *)FUN_710080eb40(&local_20,0x40);
      if (puVar7 != (undefined1 *)0x0) {
        *puVar7 = 0;
      }
      lVar8 = FUN_710081ce00(&local_20);
      pcVar12 = pcVar12 + lVar8;
    }
    else {
      if (0x19 < (byte)(*param_3 + 0x9fU)) {
        return 0;
      }
      if (0x19 < (byte)(param_3[1] + 0x9fU)) {
        return 0;
      }
      bVar2 = param_3[2];
      pcVar12 = param_3 + 2;
      if ((byte)(bVar2 + 0x9f) < 0x1a) {
        bVar2 = param_3[3];
        pcVar12 = param_3 + 3;
      }
      if (bVar2 == 0x5f) {
        if (0x19 < (byte)(pcVar12[1] + 0xbfU)) {
          return 0;
        }
        if (0x19 < (byte)(pcVar12[2] + 0xbfU)) {
          return 0;
        }
        bVar2 = pcVar12[3];
        pcVar12 = pcVar12 + 3;
      }
      if (bVar2 == 0x2e) {
        pcVar12 = pcVar12 + 1;
        goto LAB_7100808ae0;
      }
      if ((bVar2 & 0xbf) != 0) {
        return 0;
      }
      FUN_710081b7c0(&local_20,"ISO-8859-1");
    }
    if (*pcVar12 != '@') goto LAB_7100808a0c;
    pcVar12 = pcVar12 + 1;
    uVar6 = 0;
    bVar3 = true;
    uVar5 = FUN_710080aec0(pcVar12,"cjksingle");
    if (uVar5 != 0) {
      bVar3 = false;
      uVar5 = 1;
      uVar6 = FUN_710080aec0(pcVar12,"cjknarrow");
      if (uVar6 != 0) {
        iVar4 = FUN_710080aec0(pcVar12,"cjkwide");
        uVar5 = 0;
        uVar6 = (uint)(iVar4 == 0);
      }
    }
  }
  pbVar1 = &local_20;
  switch(local_20) {
  case 0x41:
  case 0x61:
    iVar4 = FUN_71008154e0(pbVar1);
    if (iVar4 == 0) {
      FUN_710081b7c0(pbVar1,"ASCII");
LAB_7100808c40:
      puVar13 = &LAB_710080dae0;
      cVar14 = '\x01';
      puVar7 = &LAB_710081f300;
LAB_7100808ba0:
      if ((int)param_2 == 2) {
        FUN_710081b7c0(param_1 + 0x162,pbVar1);
        *(char *)(param_1 + 0x160) = cVar14;
        *(undefined1 **)(param_1 + 0xe0) = puVar7;
        *(undefined1 **)(param_1 + 0xe8) = puVar13;
        FUN_710081c860(param_1,pbVar1);
        if ((uVar6 == 0) && (((uVar5 ^ 1) & (uint)(cVar14 != '\x01')) != 0)) {
          uVar6 = (uint)(local_20 != 0x55);
        }
        if (bVar3) {
          uVar6 = 0xffffffff;
        }
        *(uint *)(param_1 + 0xf0) = uVar6;
      }
      else if ((int)param_2 == 6) {
        FUN_710081b7c0(param_1 + 0x182,pbVar1);
      }
      lVar9 = FUN_710081b7c0(lVar9,param_3);
      return lVar9;
    }
    break;
  case 0x42:
  case 0x44:
  case 0x46:
  case 0x48:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x51:
  case 0x52:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x62:
  case 100:
  case 0x66:
  case 0x68:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x71:
  case 0x72:
    break;
  case 0x43:
  case 99:
    if ((local_1f & 0xdf) == 0x50) {
      FUN_710081f760(pbVar1,&DAT_7100857170,2);
      lVar8 = FUN_710081b720(&uStack_1e,&local_28,10);
      if (*local_28 == '\0') {
        if (lVar8 == 0x3a4) goto LAB_7100808c7c;
        if (lVar8 < 0x3a5) {
          if (lVar8 < 0x363) {
            if (lVar8 < 0x352) {
              if (lVar8 == 0x1b5) goto LAB_7100808c40;
              if (0x37 < lVar8 - 0x2d0U) break;
              uVar10 = 0x80000000020001 >> (lVar8 - 0x2d0U & 0x3f);
            }
            else {
              uVar10 = 0x111a5L >> (lVar8 - 0x352U & 0x3f);
            }
            if ((uVar10 & 1) != 0) goto LAB_7100808c40;
          }
          else if (lVar8 == 0x36a) goto LAB_7100808c40;
        }
        else if ((lVar8 == 0x465) || (lVar8 - 0x4e2U < 9)) goto LAB_7100808c40;
      }
    }
    break;
  case 0x45:
  case 0x65:
    iVar4 = FUN_710081e1a0(pbVar1,&DAT_7100857130,3);
    if (iVar4 == 0) {
      if (local_1d == '-') {
        register0x00000008 = (BADSPACEBASE *)&stack0x00000001;
      }
      iVar4 = FUN_71008154e0((undefined1 *)((long)register0x00000008 + -0x1d),&DAT_7100857138);
      if (iVar4 == 0) {
        FUN_710081b7c0(pbVar1,"EUCJP");
        puVar13 = &LAB_710080df00;
        cVar14 = '\x03';
        puVar7 = &LAB_710081f4a0;
        goto LAB_7100808ba0;
      }
    }
    break;
  case 0x47:
  case 0x67:
    iVar4 = FUN_710081e1a0(pbVar1,"GEORGIAN",8);
    if (iVar4 == 0) {
      if (local_18 == '-') {
        register0x00000008 = (BADSPACEBASE *)&stack0x00000001;
      }
      iVar4 = FUN_71008154e0((undefined1 *)((long)register0x00000008 + -0x18),&DAT_7100840f18);
      if (iVar4 == 0) {
        FUN_710081b7c0(pbVar1,"CP101");
        goto LAB_7100808c40;
      }
    }
    break;
  case 0x49:
  case 0x69:
    iVar4 = FUN_710081e1a0(pbVar1,&DAT_7100857150,3);
    if (iVar4 == 0) {
      puVar7 = (undefined1 *)register0x00000008;
      if (local_1d == '-') {
        puVar7 = &stack0x00000001;
      }
      puVar13 = puVar7 + -0x1d;
      iVar4 = FUN_710081e1a0(puVar13,&DAT_7100857158,4);
      if (iVar4 == 0) {
        if (puVar7[-0x19] == '-') {
          puVar13 = puVar7 + -0x1c;
        }
        lVar8 = FUN_710081b720(puVar13 + 4,&local_28,10);
        if ((lVar8 - 1U < 0x10 && lVar8 != 0xc) && (*local_28 == '\0')) {
          FUN_710081b7c0(pbVar1,"ISO-8859-");
          pcVar12 = &local_17;
          if (10 < lVar8) {
            pcVar12 = local_16;
            local_17 = '1';
          }
          pcVar12[1] = '\0';
          *pcVar12 = (char)lVar8 + (char)(lVar8 / 10) * -10 + '0';
          goto LAB_7100808c40;
        }
      }
    }
    break;
  case 0x4a:
  case 0x6a:
    iVar4 = FUN_71008154e0(pbVar1);
    if (iVar4 == 0) {
      cVar14 = '\b';
      FUN_710081b7c0(pbVar1,&DAT_7100857128);
      puVar13 = &LAB_710080e020;
      puVar7 = &LAB_710081f540;
      goto LAB_7100808ba0;
    }
    break;
  case 0x4b:
  case 0x6b:
    iVar4 = FUN_710081e1a0(pbVar1,&DAT_7100857178,4);
    if (iVar4 == 0) {
      pbVar11 = &local_1c;
      if (local_1c == 0x2d) {
        pbVar11 = local_1b;
        local_1c = local_1b[0];
      }
      if ((local_1c & 0xdf) == 0x52) {
        FUN_710081b7c0(pbVar1,"CP20866");
      }
      else if ((*pbVar11 & 0xdf) == 0x55) {
        FUN_710081b7c0(pbVar1,"CP21866");
      }
      else {
        if ((*pbVar11 & 0xdf) != 0x54) break;
        FUN_710081b7c0(pbVar1,"CP103");
      }
      goto LAB_7100808c40;
    }
    break;
  case 0x50:
  case 0x70:
    iVar4 = FUN_71008154e0(pbVar1,"PT154");
    if (iVar4 == 0) {
      FUN_710081b7c0(pbVar1,"CP102");
      goto LAB_7100808c40;
    }
    break;
  case 0x53:
  case 0x73:
    iVar4 = FUN_71008154e0(pbVar1);
    if (iVar4 == 0) {
      FUN_710081b7c0(pbVar1,&DAT_7100857148);
LAB_7100808c7c:
      puVar13 = &LAB_710080de20;
      cVar14 = '\x02';
      puVar7 = &LAB_710081f420;
      goto LAB_7100808ba0;
    }
    break;
  case 0x54:
  case 0x74:
    iVar4 = FUN_710081e1a0(pbVar1,&DAT_71008571c0,3);
    if (iVar4 == 0) {
      if (local_1d == '-') {
        register0x00000008 = (BADSPACEBASE *)&stack0x00000001;
      }
      iVar4 = FUN_710080aec0((undefined1 *)((long)register0x00000008 + -0x1d),&DAT_71008571c8);
      if (iVar4 == 0) {
        FUN_710081b7c0(pbVar1,"CP874");
        goto LAB_7100808c40;
      }
    }
    break;
  case 0x55:
  case 0x75:
    iVar4 = FUN_71008154e0(pbVar1,"UTF-8");
    if ((iVar4 == 0) || (iVar4 = FUN_71008154e0(pbVar1,&DAT_710083bce8), iVar4 == 0)) {
      FUN_710081b7c0(pbVar1,"UTF-8");
      puVar13 = &LAB_710080db40;
      cVar14 = '\x06';
      puVar7 = &LAB_710081f340;
      goto LAB_7100808ba0;
    }
    break;
  default:
    goto switchD_7100808a40_default;
  }
switchD_7100808a40_default:
  return 0;
}



// ===== FUN_71008090e0 @ 71008090e0 (size=148) =====

char * FUN_71008090e0(undefined8 param_1,int param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_710081d080(param_1,"LC_ALL");
  if (((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) &&
     ((pcVar1 = (char *)FUN_710081d080(param_1,(&PTR_s_LC_ALL_7100ae7160)[param_2]),
      pcVar1 == (char *)0x0 || (*pcVar1 == '\0')))) {
    pcVar1 = (char *)FUN_710081d080(param_1,&DAT_71008571e0);
    if (pcVar1 == (char *)0x0) {
      return s_C_UTF_8_7100af4b20;
    }
    if (*pcVar1 == '\0') {
      pcVar1 = s_C_UTF_8_7100af4b20;
    }
  }
  return pcVar1;
}



// ===== FUN_7100809180 @ 7100809180 (size=924) =====

undefined * FUN_7100809180(undefined4 *param_1,uint param_2,char *param_3)

{
  uint uVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  char *pcVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  undefined4 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  
  if (param_2 < 7) {
    if (param_3 == (char *)0x0) {
      if (param_2 != 0) {
        return &DAT_7100af4978 + (ulong)param_2 * 0x20;
      }
      return &DAT_7100af4890;
    }
    uVar16 = (ulong)param_2;
    lVar10 = 0;
    do {
      lVar12 = 0x7100d22bd0;
      puVar6 = &DAT_7100af4998;
      puVar2 = &DAT_7100af4998 + lVar10;
      lVar14 = lVar10 + 0x7100d22bd0;
      lVar10 = lVar10 + 0x20;
      FUN_710081b7c0(lVar14,puVar2);
    } while (lVar10 != 0xc0);
    if (*param_3 == '\0') {
      if (param_2 == 0) {
        iVar9 = 1;
        lVar10 = lVar12;
        do {
          uVar4 = FUN_71008090e0(param_1,iVar9);
          uVar16 = FUN_710081ce00();
          if (0x1f < uVar16) goto LAB_71008092f0;
          iVar9 = iVar9 + 1;
          FUN_710081b7c0(lVar10,uVar4);
          lVar10 = lVar10 + 0x20;
        } while (iVar9 != 7);
LAB_7100809230:
        lVar15 = 0x7100d22af0;
        iVar9 = 1;
        lVar10 = lVar15;
        lVar14 = lVar12;
        while( true ) {
          FUN_710081b7c0(lVar10,puVar6);
          lVar5 = FUN_7100808900(&DAT_7100af4978,iVar9,lVar14);
          if (lVar5 == 0) break;
          iVar9 = iVar9 + 1;
          lVar10 = lVar10 + 0x20;
          puVar6 = puVar6 + 0x20;
          lVar14 = lVar14 + 0x20;
          if (iVar9 == 7) {
            puVar6 = (undefined *)FUN_7100808840();
            return puVar6;
          }
        }
        uVar13 = *param_1;
        iVar11 = 1;
        if (iVar9 != 1) {
          do {
            FUN_710081b7c0(lVar12,lVar15);
            lVar10 = FUN_7100808900(&DAT_7100af4978,iVar11,lVar12);
            if (lVar10 == 0) {
              FUN_710081b7c0(lVar12,"C");
              FUN_7100808900(&DAT_7100af4978,iVar11,lVar12);
            }
            iVar11 = iVar11 + 1;
            lVar12 = lVar12 + 0x20;
            lVar15 = lVar15 + 0x20;
          } while (iVar11 != iVar9);
        }
        goto LAB_71008092f4;
      }
      uVar4 = FUN_71008090e0(param_1,uVar16);
      uVar8 = FUN_710081ce00();
      if (uVar8 < 0x20) {
        lVar10 = uVar16 * 0x20 + 0x7100d22bb0;
        FUN_710081b7c0(lVar10,uVar4);
LAB_71008092c8:
        puVar6 = (undefined *)FUN_7100808900(&DAT_7100af4978,uVar16,lVar10);
        FUN_7100808840();
        return puVar6;
      }
    }
    else if (param_2 == 0) {
      pcVar7 = (char *)FUN_710080eb40(param_3,0x2f);
      if (pcVar7 == (char *)0x0) {
        uVar16 = FUN_710081ce00(param_3);
        lVar10 = lVar12;
        if (uVar16 < 0x20) {
          do {
            lVar14 = lVar10 + 0x20;
            FUN_710081b7c0(lVar10,param_3);
            lVar10 = lVar14;
          } while (lVar14 != 0x7100d22c90);
          goto LAB_7100809230;
        }
      }
      else {
        for (; pcVar7[1] == '/'; pcVar7 = pcVar7 + 1) {
        }
        if (pcVar7[1] != '\0') {
          uVar16 = 1;
          lVar10 = lVar12;
LAB_7100809348:
          iVar9 = (int)pcVar7 - (int)param_3;
          if (iVar9 < 0x20) {
            uVar1 = (int)uVar16 + 1;
            uVar16 = (ulong)uVar1;
            FUN_7100814ae0(lVar10,param_3,(long)(iVar9 + 1));
            cVar3 = *pcVar7;
            param_3 = pcVar7;
            while (cVar3 == '/') {
              param_3 = param_3 + 1;
              cVar3 = *param_3;
            }
            pcVar7 = param_3;
            if (cVar3 != '\0') goto LAB_71008093a0;
            lVar10 = uVar16 * 0x20 + 0x7100d22bb0;
            while (uVar1 != 7) {
              uVar1 = (int)uVar16 + 1;
              uVar16 = (ulong)uVar1;
              FUN_710081b7c0(lVar10,lVar10 + -0x20);
              lVar10 = lVar10 + 0x20;
            }
            goto LAB_7100809230;
          }
        }
      }
    }
    else {
      uVar8 = FUN_710081ce00(param_3);
      if (uVar8 < 0x20) {
        lVar10 = uVar16 * 0x20 + 0x7100d22bb0;
        FUN_710081b7c0(lVar10,param_3);
        goto LAB_71008092c8;
      }
    }
  }
LAB_71008092f0:
  uVar13 = 0x16;
LAB_71008092f4:
  *param_1 = uVar13;
  return (undefined *)0x0;
LAB_71008093a0:
  do {
    pcVar7 = pcVar7 + 1;
  } while (*pcVar7 != '/' && *pcVar7 != '\0');
  lVar10 = lVar10 + 0x20;
  if (uVar1 == 7) goto LAB_7100809230;
  goto LAB_7100809348;
}



// ===== FUN_7100809520 @ 7100809520 (size=44) =====

undefined1 FUN_7100809520(void)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = FUN_7100834b00();
  puVar1 = *(undefined **)(lVar2 + 0x40);
  if (*(undefined **)(lVar2 + 0x40) == (undefined *)0x0) {
    puVar1 = &DAT_7100af4978;
  }
  return puVar1[0x160];
}



// ===== FUN_7100809560 @ 7100809560 (size=44) =====

void FUN_7100809560(undefined4 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_7100809180(uVar1,param_1,param_2);
  return;
}



// ===== FUN_71008095a0 @ 71008095a0 (size=128) =====

void FUN_71008095a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_7100810358(uVar1,param_1,param_2);
  return;
}



// ===== thunk_FUN_710081b900 @ 7100809620 (size=4) =====

long thunk_FUN_710081b900(int *param_1,int *param_2,long param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = param_2;
  if (param_3 == 0) {
LAB_710081b924:
    do {
      piVar3 = piVar2 + 1;
      iVar1 = *piVar2;
      piVar2 = piVar3;
    } while (iVar1 != 0);
  }
  else {
    do {
      param_3 = param_3 + -1;
      if (param_3 == 0) {
        *param_1 = 0;
        goto LAB_710081b924;
      }
      piVar3 = piVar2 + 1;
      iVar1 = *piVar2;
      *param_1 = iVar1;
      param_1 = param_1 + 1;
      piVar2 = piVar3;
    } while (iVar1 != 0);
  }
  return ((long)piVar3 - (long)param_2 >> 2) + -1;
}



// ===== FUN_7100809640 @ 7100809640 (size=44) =====

void FUN_7100809640(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_7100835f80(uVar1,param_1,param_2);
  return;
}



// ===== FUN_7100809680 @ 7100809680 (size=184) =====

undefined8 FUN_7100809680(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (param_2[0xb] == (long)param_2 + 0x74) {
    lVar3 = FUN_7100814ca0(param_1,0x400);
    if (lVar3 == 0) {
      return 0xffffffff;
    }
    param_2[0xb] = lVar3;
    *(undefined4 *)(param_2 + 0xc) = 0x400;
    *(undefined1 *)(lVar3 + 0x3ff) = *(undefined1 *)((long)param_2 + 0x76);
    *(undefined1 *)(lVar3 + 0x3fe) = *(undefined1 *)((long)param_2 + 0x75);
    *(undefined1 *)(lVar3 + 0x3fd) = *(undefined1 *)((long)param_2 + 0x74);
    *param_2 = lVar3 + 0x3fd;
  }
  else {
    lVar3 = param_2[0xc];
    iVar1 = (int)lVar3 << 1;
    lVar2 = FUN_710081d8c0(param_1,param_2[0xb],(long)iVar1);
    if (lVar2 == 0) {
      return 0xffffffff;
    }
    lVar3 = lVar2 + (int)lVar3;
    FUN_710080f900(lVar3,lVar2);
    *param_2 = lVar3;
    param_2[0xb] = lVar2;
    *(int *)(param_2 + 0xc) = iVar1;
  }
  return 0;
}



// ===== FUN_7100809960 @ 7100809960 (size=588) =====

uint FUN_7100809960(uint param_1,ulong *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ushort uVar5;
  
  lVar4 = FUN_7100834b00();
  if (param_1 == 0xffffffff) {
    return 0xffffffff;
  }
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x48) == 0)) {
    FUN_710080d840();
  }
  uVar2 = (uint)(short)(ushort)param_2[2];
  if (((*(uint *)((long)param_2 + 0xb4) & 1) == 0) && ((uVar2 >> 9 & 1) == 0)) {
    FUN_7100836200(param_2 + 0x14);
    uVar2 = (uint)(short)(ushort)param_2[2];
    uVar5 = (ushort)param_2[2] & 0xffdf;
    *(ushort *)(param_2 + 2) = uVar5;
    if ((uVar2 >> 2 & 1) != 0) goto LAB_7100809790;
LAB_7100809780:
    if ((uVar2 >> 4 & 1) != 0) {
      if ((uVar2 >> 3 & 1) == 0) {
LAB_7100809788:
        *(ushort *)(param_2 + 2) = uVar5 | 4;
        goto LAB_7100809790;
      }
      iVar1 = FUN_710081c760(lVar4,param_2);
      if (iVar1 == 0) {
        *(undefined4 *)((long)param_2 + 0xc) = 0;
        uVar5 = (ushort)param_2[2] & 0xfff7;
        *(undefined4 *)(param_2 + 5) = 0;
        goto LAB_7100809788;
      }
      goto LAB_7100809810;
    }
    if (((*(uint *)((long)param_2 + 0xb4) & 1) == 0) && ((uVar2 >> 9 & 1) == 0))
    goto LAB_7100809944;
LAB_7100809820:
    uVar2 = 0xffffffff;
  }
  else {
    uVar5 = (ushort)param_2[2] & 0xffdf;
    *(ushort *)(param_2 + 2) = uVar5;
    if ((uVar2 >> 2 & 1) == 0) goto LAB_7100809780;
LAB_7100809790:
    iVar1 = (int)param_2[1];
    if (param_2[0xb] == 0) {
      uVar3 = *param_2;
      uVar2 = *(uint *)((long)param_2 + 0xb4) & 1;
      if (((param_2[3] != 0) && (param_2[3] < uVar3)) &&
         ((uint)*(byte *)(uVar3 - 1) == (param_1 & 0xff))) {
        *param_2 = uVar3 - 1;
        *(int *)(param_2 + 1) = iVar1 + 1;
        goto joined_r0x007100809930;
      }
      *(int *)(param_2 + 0xe) = iVar1;
      param_2[0xb] = (long)param_2 + 0x74;
      *(undefined4 *)(param_2 + 0xc) = 3;
      param_2[0xd] = uVar3;
      *(undefined1 *)((long)param_2 + 0x76) = (char)param_1;
      *param_2 = (ulong)((long)param_2 + 0x76);
      *(undefined4 *)(param_2 + 1) = 1;
      if (uVar2 != 0) {
        return param_1 & 0xff;
      }
      uVar5 = (ushort)param_2[2];
    }
    else {
      if (((int)param_2[0xc] <= iVar1) && (iVar1 = FUN_7100809680(lVar4,param_2), iVar1 != 0)) {
LAB_7100809810:
        if (((*(uint *)((long)param_2 + 0xb4) & 1) == 0) && (((ushort)param_2[2] >> 9 & 1) == 0)) {
LAB_7100809944:
          FUN_7100836220(param_2 + 0x14);
          return 0xffffffff;
        }
        goto LAB_7100809820;
      }
      uVar3 = *param_2;
      *param_2 = uVar3 - 1;
      *(char *)(uVar3 - 1) = (char)param_1;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      uVar2 = *(uint *)((long)param_2 + 0xb4) & 1;
joined_r0x007100809930:
      if (uVar2 != 0) {
        return param_1 & 0xff;
      }
      uVar5 = (ushort)param_2[2];
    }
    uVar2 = param_1 & 0xff;
    if ((uVar5 >> 9 & 1) == 0) {
      FUN_7100836220(param_2 + 0x14);
      return param_1 & 0xff;
    }
  }
  return uVar2;
}



// ===== FUN_71008099a0 @ 71008099a0 (size=88) =====

undefined1  [16] FUN_71008099a0(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar2;
  
  auVar3 = FUN_7100824b20(param_1);
  dVar2 = auVar3._0_8_;
  if ((param_2 != 0) && (iVar1 = 0x6b - ((uint)((ulong)param_1 >> 0x34) & 0x7ff), 0 < iVar1)) {
    dVar4 = (double)NEON_shl((ulong)(iVar1 * 0x100000 + 0x3ff00000),0x20);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = dVar2 * dVar4;
  }
  return auVar3;
}



// ===== FUN_7100809a00 @ 7100809a00 (size=4852) =====

/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_7100809a00(undefined4 *param_1,byte *param_2,long *param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  double *pdVar16;
  long lVar17;
  long lVar18;
  undefined4 *puVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  long lVar23;
  byte *pbVar24;
  uint uVar25;
  uint uVar26;
  long lVar27;
  uint uVar28;
  uint uVar29;
  byte *pbVar30;
  long lVar31;
  uint uVar32;
  int iVar33;
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  double dVar39;
  uint local_50;
  double local_48;
  int local_1c;
  byte *local_18;
  long local_10;
  int local_8;
  uint local_4;
  
  local_10 = 0;
  local_18 = param_2;
  while( true ) {
    bVar4 = *local_18;
    uVar26 = (uint)bVar4;
    if (bVar4 == 0x2b) break;
    if (0x2b < bVar4) {
      iVar33 = 1;
      if (bVar4 == 0x2d) goto LAB_7100809a94;
      iVar33 = 0;
      goto LAB_7100809aa4;
    }
    if (bVar4 < 0xe) {
      if (bVar4 < 9) {
        if (bVar4 == 0) goto LAB_7100809a60;
LAB_7100809c88:
        iVar33 = 0;
        bVar9 = false;
        goto LAB_7100809c90;
      }
    }
    else if (bVar4 != 0x20) goto LAB_7100809c88;
    local_18 = local_18 + 1;
  }
  iVar33 = 0;
LAB_7100809a94:
  pbVar30 = local_18 + 1;
  uVar26 = (uint)*pbVar30;
  local_18 = local_18 + 1;
  if (*pbVar30 == 0) goto LAB_7100809a60;
LAB_7100809aa4:
  bVar9 = false;
  if (uVar26 == 0x30) {
    pbVar30 = local_18 + 1;
    if ((*pbVar30 & 0xdf) != 0x58) {
      do {
        local_18 = pbVar30;
        uVar26 = (uint)*local_18;
        pbVar30 = local_18 + 1;
      } while (uVar26 == 0x30);
      if (uVar26 != 0) {
        bVar9 = true;
        goto LAB_7100809ab0;
      }
LAB_7100809da0:
      auVar36 = ZEXT816(0);
      goto LAB_7100809c50;
    }
    uVar13 = FUN_710080cb80(param_1,&local_18,&DAT_71009cf6f8,&local_1c,&local_10,iVar33,param_4);
    uVar26 = uVar13 & 0xf;
    auVar36 = ZEXT816(0);
    if ((uVar13 & 0xf) == 0) goto LAB_7100809c50;
    if (uVar26 == 6) {
      iVar33 = 0;
      local_18 = pbVar30;
      auVar36 = ZEXT816(0);
      goto LAB_7100809c50;
    }
    if (local_10 != 0) {
      FUN_7100824f60(&local_8,0x35);
      FUN_7100823f80(param_1,local_10);
    }
    if (uVar26 != 3) {
      if ((uVar13 & 0xc) == 0) {
        if (uVar26 == 1) {
LAB_710080ab40:
          local_4 = local_4 & 0xffefffff | (local_1c + 0x433) * 0x100000;
        }
        dVar37 = (double)CONCAT44(local_4,local_8);
        if ((uVar13 >> 8 & 1) != 0) goto LAB_710080a818;
        goto LAB_710080a820;
      }
      if (uVar26 == 4) {
        dVar37 = NAN;
        goto LAB_710080ab30;
      }
      if (uVar26 == 5) goto LAB_710080ab40;
      dVar37 = 0.0;
      if ((uVar13 >> 8 & 1) != 0) {
        dVar37 = -0.0;
      }
LAB_710080a82c:
      puVar19 = (undefined4 *)FUN_710080e8e0();
      auVar36._8_8_ = 0;
      auVar36._0_8_ = dVar37;
      *puVar19 = 0x22;
      goto LAB_7100809c50;
    }
    dVar37 = INFINITY;
LAB_710080ab30:
    if ((uVar13 >> 8 & 1) != 0) {
      local_4 = (uint)((ulong)dVar37 >> 0x20);
LAB_710080a818:
      dVar37 = (double)(CONCAT44(local_4,SUB84(dVar37,0)) | 0x8000000000000000);
LAB_710080a820:
      auVar36._8_8_ = 0;
      auVar36._0_8_ = dVar37;
      if ((local_4 & 0x7ff00000) != 0) goto LAB_7100809c50;
      goto LAB_710080a82c;
    }
LAB_710080a678:
    auVar36._8_8_ = 0;
    auVar36._0_8_ = dVar37;
    goto LAB_7100809c50;
  }
LAB_7100809ab0:
  pbVar30 = local_18;
  uVar13 = uVar26 - 0x30;
  if (9 < uVar13) {
LAB_7100809c90:
    pbVar30 = local_18;
    iVar10 = FUN_710080b4c0(local_18,".",1);
    if (iVar10 == 0) {
      bVar4 = local_18[1];
      pbVar15 = local_18 + 1;
      if (bVar4 == 0x30) {
        do {
          pbVar24 = pbVar15;
          pbVar15 = pbVar24 + 1;
          bVar4 = *pbVar15;
        } while (bVar4 == 0x30);
        uVar26 = (int)pbVar24 - (int)local_18;
        local_18 = pbVar15;
      }
      else {
        uVar26 = 0;
        local_18 = local_18 + 1;
      }
      uVar20 = (uint)bVar4;
      if (uVar20 - 0x31 < 9) {
        uVar20 = uVar20 - 0x30;
        iVar10 = uVar26 + 1;
        uVar26 = 0;
        iVar11 = 0;
        uVar13 = 1;
        uVar29 = 0;
        pbVar15 = local_18;
        pbVar30 = local_18;
        do {
          uVar32 = uVar20 + iVar11;
          uVar28 = 0;
          pbVar24 = pbVar15;
          uVar14 = uVar26;
          while( true ) {
            do {
              pbVar15 = pbVar24 + 1;
              uVar26 = (uint)pbVar24[1];
              uVar20 = uVar26 - 0x30;
              uVar22 = uVar28;
              if (9 < uVar20) {
                local_18 = pbVar15;
                if ((uVar26 & 0xffffffdf) == 0x45) goto LAB_7100809b7c;
                bVar6 = true;
                uVar22 = uVar13;
                uVar20 = 0;
                goto LAB_7100809e88;
              }
LAB_7100809db0:
              uVar28 = uVar22 + 1;
              pbVar24 = pbVar15;
            } while (uVar20 == 0);
            iVar10 = iVar10 + uVar28;
            uVar26 = uVar14;
            uVar25 = uVar13;
            if (uVar28 != 1) {
              uVar28 = uVar13;
              do {
                uVar1 = uVar28 + 1;
                if ((int)uVar28 < 9) {
                  uVar32 = uVar32 * 10;
                  uVar26 = uVar14;
                }
                else {
                  uVar26 = uVar14 * 10;
                  if (0x10 < (int)uVar1) {
                    uVar26 = uVar14;
                  }
                }
                uVar28 = uVar1;
                uVar14 = uVar26;
                uVar25 = uVar13 + uVar22;
              } while (uVar1 != uVar13 + uVar22);
            }
            uVar13 = uVar25 + 1;
            if ((int)uVar25 < 9) break;
            uVar28 = 0;
            uVar14 = uVar20 + uVar26 * 10;
            if (0x10 < (int)uVar13) {
              uVar14 = uVar26;
            }
          }
          iVar11 = uVar32 * 10;
        } while( true );
      }
      if ((uVar20 & 0xffffffdf) != 0x45) {
        if (uVar26 == 0 && !bVar9) goto LAB_7100809a60;
        goto LAB_7100809da0;
      }
      iVar10 = 0;
      uVar14 = 0;
      uVar32 = 0;
      bVar6 = true;
      uVar22 = 0;
      uVar28 = uVar26;
      uVar13 = 0;
LAB_7100809b84:
      if (!bVar9 && uVar26 == 0) goto LAB_7100809a60;
LAB_7100809e14:
      param_2 = local_18;
      uVar26 = (uint)local_18[1];
      if (uVar26 == 0x2b) {
        bVar7 = false;
LAB_7100809f78:
        uVar26 = (uint)local_18[2];
        pbVar15 = local_18 + 2;
      }
      else {
        bVar7 = false;
        pbVar15 = local_18 + 1;
        if (uVar26 == 0x2d) {
          bVar7 = true;
          goto LAB_7100809f78;
        }
      }
      local_18 = pbVar15;
      uVar20 = uVar26 - 0x30;
      uVar29 = uVar13;
      if (uVar20 < 10) {
        if (uVar26 == 0x30) {
          do {
            local_18 = local_18 + 1;
            uVar26 = (uint)*local_18;
          } while (uVar26 == 0x30);
          uVar20 = 0;
          if (8 < uVar26 - 0x31) goto LAB_7100809e88;
          uVar20 = uVar26 - 0x30;
        }
        uVar26 = (uint)local_18[1];
        pbVar15 = local_18 + 1;
        if (uVar26 - 0x30 < 10) {
          pbVar24 = local_18 + 2;
          do {
            pbVar15 = pbVar24;
            iVar11 = uVar26 + uVar20 * 10;
            uVar26 = (uint)*pbVar15;
            uVar20 = iVar11 - 0x30;
            pbVar24 = pbVar15 + 1;
          } while (uVar26 - 0x30 < 10);
          lVar23 = (long)pbVar15 - (long)local_18;
          uVar13 = 19999;
          local_18 = pbVar15;
          if (lVar23 < 9) goto LAB_710080a774;
        }
        else {
LAB_710080a774:
          local_18 = pbVar15;
          uVar13 = uVar20;
          if (19999 < (int)uVar20) {
            uVar13 = 19999;
          }
        }
        uVar20 = -uVar13;
        if (!bVar7) {
          uVar20 = uVar13;
        }
      }
      else {
        local_18 = param_2;
        uVar20 = 0;
      }
LAB_7100809e88:
      uVar13 = uVar29;
      if (uVar22 != 0) goto LAB_7100809ef0;
      if (bVar9 || uVar28 != 0) goto LAB_7100809da0;
      if (bVar6) goto LAB_7100809a60;
    }
    else {
      if ((uVar26 & 0xffffffdf) == 0x45) {
        uVar29 = 0;
        uVar14 = 0;
        uVar32 = 0;
        uVar28 = 0;
        iVar10 = 0;
        uVar13 = 0;
        bVar6 = false;
LAB_7100809b80:
        uVar26 = uVar13 | uVar28;
        uVar22 = uVar13;
        uVar13 = uVar29;
        goto LAB_7100809b84;
      }
      if (bVar9) {
        auVar36 = ZEXT816(0);
        goto LAB_7100809c50;
      }
    }
    if (uVar26 != 0x69) {
      if (uVar26 < 0x6a) {
        if (uVar26 == 0x49) goto LAB_710080a730;
        if (uVar26 != 0x4e) goto LAB_7100809a60;
      }
      else if (uVar26 != 0x6e) goto LAB_7100809a60;
      iVar10 = FUN_7100822c60(&local_18,&DAT_7100857250);
      if (iVar10 == 0) {
LAB_7100809a60:
        if (param_3 == (long *)0x0) {
          return ZEXT816(0);
        }
        *param_3 = (long)param_2;
        return ZEXT816(0);
      }
      if ((*local_18 == 0x28) &&
         (iVar10 = FUN_7100822cc0(&local_18,&DAT_71009cf6e0,&local_8), iVar10 == 5)) {
        auVar36._8_8_ = 0;
        auVar36._0_8_ = CONCAT44(local_4,local_8) | 0x7ff0000000000000;
      }
      else {
        auVar36 = FUN_7100800c80(&DAT_7100853d20);
      }
      goto LAB_7100809c50;
    }
LAB_710080a730:
    iVar10 = FUN_7100822c60(&local_18,&DAT_7100857240);
    if (iVar10 == 0) goto LAB_7100809a60;
    local_18 = local_18 + -1;
    iVar10 = FUN_7100822c60(&local_18,"inity");
    if (iVar10 == 0) {
      local_18 = local_18 + 1;
    }
LAB_7100809d48:
    auVar36 = ZEXT816(0x7ff0000000000000);
    goto LAB_7100809c50;
  }
  uVar14 = 0;
  uVar32 = 0;
  pbVar15 = local_18 + 1;
  iVar10 = 0;
  do {
    while (iVar11 = iVar10, local_18 = pbVar15, iVar11 < 9) {
      bVar4 = *local_18;
      uVar32 = uVar13 + uVar32 * 10;
      uVar13 = bVar4 - 0x30;
      pbVar15 = local_18 + 1;
      iVar10 = iVar11 + 1;
      if (9 < uVar13) goto LAB_7100809b20;
    }
    bVar4 = *local_18;
    uVar14 = uVar13 + uVar14 * 10;
    uVar13 = bVar4 - 0x30;
    pbVar15 = local_18 + 1;
    iVar10 = iVar11 + 1;
  } while (uVar13 < 10);
LAB_7100809b20:
  uVar13 = iVar11 + 1;
  iVar10 = FUN_710080b4c0(local_18,".",1);
  uVar22 = uVar13;
  if (iVar10 == 0) {
    pbVar15 = local_18 + 1;
    uVar20 = local_18[1] - 0x30;
    uVar29 = uVar13;
    if (uVar20 < 10) {
      uVar22 = 0;
      iVar10 = 0;
      goto LAB_7100809db0;
    }
    if ((local_18[1] & 0xffffffdf) == 0x45) {
      uVar28 = 0;
      iVar10 = 0;
      local_18 = pbVar15;
LAB_7100809b7c:
      bVar6 = true;
      goto LAB_7100809b80;
    }
    iVar10 = 0;
    uVar20 = 0;
    local_18 = pbVar15;
LAB_7100809ef0:
    uVar26 = uVar20 - iVar10;
    uVar28 = uVar22;
    if (uVar13 != 0) goto LAB_7100809bc8;
  }
  else {
    if ((bVar4 & 0xdf) == 0x45) {
      uVar28 = 0;
      iVar10 = 0;
      bVar6 = false;
      goto LAB_7100809e14;
    }
    iVar10 = 0;
    uVar26 = 0;
    uVar20 = 0;
LAB_7100809bc8:
    uVar28 = uVar13;
  }
  dVar37 = (double)uVar32;
  uVar13 = uVar22;
  if (0x10 < (int)uVar22) {
    uVar13 = 0x10;
  }
  if (((int)uVar22 < 10) ||
     (dVar37 = (double)NEON_fmadd(dVar37,(&DAT_71009d3738)[(int)(uVar13 - 9)],(double)uVar14),
     (int)uVar22 < 0x10)) {
    if (uVar26 == 0) goto LAB_710080a678;
    if ((int)uVar26 < 1) {
      if ((int)(uVar26 + 0x16) < 0 == SCARRY4(uVar26,0x16)) {
        auVar36._8_8_ = 0;
        auVar36._0_8_ = dVar37 / (double)(&DAT_71009d3738)[(int)(iVar10 - uVar20)];
        goto LAB_7100809c50;
      }
    }
    else {
      if ((int)uVar26 < 0x17) {
        auVar36._8_8_ = 0;
        auVar36._0_8_ = (double)(&DAT_71009d3738)[(int)uVar26] * dVar37;
        goto LAB_7100809c50;
      }
      if ((int)uVar26 <= (int)(0x25 - uVar22)) {
        auVar36._8_8_ = 0;
        auVar36._0_8_ =
             (double)(&DAT_71009d3738)[(int)(0xf - uVar22)] * dVar37 *
             (double)(&DAT_71009d3738)[(int)(uVar26 - (0xf - uVar22))];
        goto LAB_7100809c50;
      }
    }
  }
  uVar13 = (uVar22 - uVar13) + uVar26;
  if ((int)uVar13 < 1) {
    if (uVar13 != 0) {
      uVar14 = (int)-uVar13 >> 4;
      uVar13 = -uVar13 & 0xf;
      if ((uVar13 == 0) || (dVar37 = dVar37 / (double)(&DAT_71009d3738)[(int)uVar13], uVar14 != 0))
      {
        if ((int)uVar14 < 0x20) {
          uVar13 = uVar14 & 0x10;
          if (uVar13 != 0) {
            uVar13 = 0x6a;
          }
          pdVar16 = (double *)&DAT_71009cf710;
          while( true ) {
            while (uVar29 = uVar14 & 1, uVar14 = (int)uVar14 >> 1, uVar29 == 0) {
              pdVar16 = pdVar16 + 1;
            }
            dVar37 = dVar37 * *pdVar16;
            if (uVar14 == 0) break;
            pdVar16 = pdVar16 + 1;
          }
          if (uVar13 != 0) {
            uVar29 = (uint)((ulong)dVar37 >> 0x20);
            uVar25 = uVar29 >> 0x14 & 0x7ff;
            uVar14 = 0x6b - uVar25;
            if (0 < (int)uVar14) {
              if ((int)uVar14 < 0x20) {
                dVar37 = (double)CONCAT44(uVar29,-1 << (ulong)(uVar14 & 0x1f) & SUB84(dVar37,0));
              }
              else {
                if (0x34 < (int)uVar14) {
                  uVar13 = 0x6a;
                  dVar37 = 4.008336720017946e-292;
                  goto LAB_710080a0d4;
                }
                dVar37 = (double)((ulong)(-1 << (ulong)(0x4b - uVar25 & 0x1f) & uVar29) << 0x20);
              }
            }
          }
          if (dVar37 != 0.0) goto LAB_710080a0d4;
        }
        *param_1 = 0x22;
        auVar36 = ZEXT816(0);
        goto LAB_7100809c50;
      }
    }
LAB_710080a62c:
    uVar13 = 0;
  }
  else {
    uVar14 = uVar13 & 0xfffffff0;
    if (((uVar13 & 0xf) != 0) &&
       (dVar37 = (double)(&DAT_71009d3738)[(int)(uVar13 & 0xf)] * dVar37, uVar14 == 0))
    goto LAB_710080a62c;
    if (0x134 < (int)uVar14) {
LAB_7100809d40:
      *param_1 = 0x22;
      goto LAB_7100809d48;
    }
    uVar13 = (int)uVar13 >> 4;
    if (uVar14 == 0x10) {
      lVar23 = 0;
    }
    else {
      lVar23 = 1;
      while( true ) {
        if ((uVar13 & 1) != 0) {
          dVar37 = dVar37 * *(double *)(&UNK_71009d3708 + lVar23 * 8);
        }
        uVar13 = (int)uVar13 >> 1;
        if (uVar13 == 1) break;
        lVar23 = lVar23 + 1;
      }
    }
    dVar37 = (double)(&DAT_71009d3710)[(int)lVar23] *
             (double)CONCAT44((int)((ulong)dVar37 >> 0x20) + -0x3500000,SUB84(dVar37,0));
    uVar14 = (uint)((ulong)dVar37 >> 0x20);
    uVar13 = uVar14 & 0x7ff00000;
    if (0x7ca00000 < uVar13) goto LAB_7100809d40;
    if (uVar13 < 0x7c900001) {
      uVar13 = 0;
      dVar37 = (double)CONCAT44(uVar14 + 0x3500000,SUB84(dVar37,0));
    }
    else {
      dVar37 = 1.79769313486232e+308;
      uVar13 = 0;
    }
  }
LAB_710080a0d4:
  lVar23 = FUN_71008240c0(param_1,pbVar30,uVar28,uVar22,uVar32);
  if (lVar23 == 0) {
    *param_1 = 0x22;
    auVar36 = ZEXT816(0x7ff0000000000000);
LAB_7100809c50:
    if (param_3 != (long *)0x0) {
      *param_3 = (long)local_18;
    }
    if (iVar33 == 0) {
      return auVar36;
    }
    auVar35._0_8_ = -auVar36._0_8_;
    auVar35._8_8_ = 0;
    return auVar35;
  }
  uVar32 = uVar26 & ((int)uVar26 >> 0x1f ^ 0xffffffffU);
  iVar10 = iVar10 - uVar20;
  if (-1 < (int)uVar26) {
    iVar10 = 0;
  }
  bVar9 = uVar13 != 0;
  lVar31 = 0;
  lVar27 = 0;
LAB_710080a304:
  lVar17 = FUN_7100823ec0(param_1,*(undefined4 *)(lVar23 + 8));
  if (lVar17 == 0) goto LAB_710080a478;
  FUN_710080f900(lVar17 + 0x10,lVar23 + 0x10,((long)*(int *)(lVar23 + 0x14) + 2) * 4);
  local_10 = FUN_7100824d40(dVar37,param_1,&local_1c,&local_8);
  if ((local_10 == 0) || (lVar27 = FUN_71008243c0(param_1,1), lVar27 == 0)) goto LAB_710080a478;
  if (local_1c < 0) {
    uVar14 = uVar32 - local_1c;
    iVar11 = iVar10;
  }
  else {
    iVar11 = local_1c + iVar10;
    uVar14 = uVar32;
  }
  iVar12 = (local_1c - uVar13) + local_8;
  iVar21 = 0x36 - local_8;
  iVar5 = iVar12 + -1;
  if (iVar12 + 0x3fd < 0 == SCARRY4(iVar5,0x3fe)) {
    local_50 = 1;
    uVar22 = 0;
  }
  else {
    iVar21 = iVar21 - (-iVar5 - 0x3feU);
    if (iVar12 + 0x41c < 0 == SCARRY4(iVar5,0x41d)) {
      uVar22 = 0;
      local_50 = 1 << (ulong)(-iVar5 - 0x3feU & 0x1f);
    }
    else {
      local_50 = 1;
      uVar22 = 1 << (ulong)(-iVar5 - 0x41eU & 0x1f);
    }
  }
  iVar12 = iVar11 + iVar21;
  iVar5 = uVar13 + uVar14 + iVar21;
  iVar21 = iVar11;
  if (iVar12 < iVar11) {
    iVar21 = iVar12;
  }
  if (iVar5 < iVar21) {
    iVar21 = iVar5;
  }
  iVar3 = iVar12 - iVar21;
  if (iVar21 < 1) {
    iVar3 = iVar12;
  }
  iVar12 = iVar11 - iVar21;
  iVar8 = iVar5 - iVar21;
  if (iVar21 < 1) {
    iVar12 = iVar11;
    iVar8 = iVar5;
  }
  if (0 < iVar10) {
    lVar27 = FUN_7100824640(param_1,lVar27,iVar10);
    if ((lVar27 == 0) || (lVar18 = FUN_7100824420(param_1,lVar27,local_10), lVar18 == 0))
    goto LAB_710080a478;
    FUN_7100823f80(param_1,local_10);
    local_10 = lVar18;
  }
  if ((((((0 < iVar3) && (local_10 = FUN_7100824760(param_1,local_10,iVar3), local_10 == 0)) ||
        ((0 < (int)uVar26 && (lVar17 = FUN_7100824640(param_1,lVar17,uVar32), lVar17 == 0)))) ||
       ((0 < iVar8 && (lVar17 = FUN_7100824760(param_1,lVar17,iVar8), lVar17 == 0)))) ||
      ((0 < iVar12 && (lVar27 = FUN_7100824760(param_1,lVar27,iVar12), lVar27 == 0)))) ||
     (lVar31 = FUN_7100824940(param_1,local_10,lVar17), lVar31 == 0)) goto LAB_710080a478;
  iVar11 = *(int *)(lVar31 + 0x10);
  *(undefined4 *)(lVar31 + 0x10) = 0;
  iVar12 = FUN_71008248e0(lVar31,lVar27);
  uVar28 = SUB84(dVar37,0);
  uVar14 = (uint)((ulong)dVar37 >> 0x20);
  if (iVar12 < 0) {
    if ((((iVar11 == 0) && (((ulong)dVar37 & 0xfffffffffffff) == 0)) &&
        (0x6b00000 < (uVar14 & 0x7ff00000))) &&
       ((*(int *)(lVar31 + 0x18) != 0 || (1 < *(int *)(lVar31 + 0x14))))) {
      lVar31 = FUN_7100824760(param_1,lVar31,1);
      iVar10 = FUN_71008248e0(lVar31,lVar27);
      if (iVar10 < 1) goto LAB_710080a994;
      if (uVar13 == 0) {
LAB_710080abec:
        iVar10 = (uVar14 & 0x7ff00000) - 0x100000;
        dVar37 = (double)(CONCAT17((char)((uint)iVar10 >> 0x18),
                                   CONCAT16((char)((uint)iVar10 >> 0x10),
                                            CONCAT15(0xff,CONCAT14(0xff,uVar28)))) | 0xf0000ffffffff
                         );
        goto LAB_710080a488;
      }
LAB_710080aa24:
      iVar10 = (uVar14 & 0x7ff00000) - 0x100000;
      dVar37 = (double)(CONCAT17((char)((uint)iVar10 >> 0x18),
                                 CONCAT16((char)((uint)iVar10 >> 0x10),
                                          CONCAT15(0xff,CONCAT14(0xff,uVar28)))) | 0xf0000ffffffff);
      goto LAB_710080a998;
    }
  }
  else {
    if (iVar12 != 0) {
      local_48 = (double)FUN_7100824ea0(lVar31,lVar27);
      if (2.0 < local_48) {
        local_48 = local_48 * 0.5;
        dVar39 = -local_48;
        if (iVar11 != 0) {
          dVar39 = local_48;
        }
        if ((uVar14 & 0x7ff00000) != 0x7fe00000) {
          if (!bVar9 || 0x6a00000 < (uVar14 & 0x7ff00000)) goto LAB_710080a298;
          dVar38 = dVar39;
          if (local_48 <= 2147483647.0) {
            uVar22 = (uint)local_48;
            if (uVar22 == 0) {
              uVar22 = 1;
            }
            local_48 = (double)uVar22;
            dVar38 = local_48;
            if (iVar11 == 0) {
              dVar38 = -local_48;
            }
          }
          goto LAB_710080a280;
        }
LAB_710080a5ac:
        uVar2 = (ulong)dVar37 & 0xffffffff | (ulong)(uVar14 + 0xfcb00000) << 0x20;
        uVar34 = FUN_7100824b20(uVar2);
        uVar34 = NEON_fmadd(dVar39,uVar34,uVar2);
        uVar22 = (uint)((ulong)uVar34 >> 0x20);
        if ((uVar22 & 0x7ff00000) < 0x7ca00000) {
          uVar22 = uVar22 + 0x3500000;
          uVar14 = 0x7fe00000;
          dVar37 = (double)CONCAT44(uVar22,(int)uVar34);
          goto LAB_710080a2c0;
        }
        if ((uVar14 == 0x7fefffff) && (uVar28 == 0xffffffff)) goto LAB_710080a478;
        dVar37 = 1.79769313486232e+308;
      }
      else {
        if (iVar11 == 0) {
          if (uVar28 == 0) {
            if (((ulong)dVar37 >> 0x20 & 0xfffff) != 0) goto LAB_710080a648;
            if (local_48 < 1.0) {
              dVar39 = -0.5;
              local_48 = 0.5;
            }
            else {
              local_48 = local_48 * 0.5;
              dVar39 = -local_48;
            }
            if ((uVar14 & 0x7ff00000) == 0x7fe00000) goto LAB_710080a5ac;
            if (!bVar9 || 0x6a00000 < (uVar14 & 0x7ff00000)) goto LAB_710080a298;
          }
          else {
            if (dVar37 == 4.94065645841247e-324) goto LAB_710080ab14;
LAB_710080a648:
            auVar36 = NEON_fmov(0xbff0000000000000,8);
            dVar39 = auVar36._0_8_;
            if ((uVar14 & 0x7ff00000) == 0x7fe00000) goto LAB_710080a5a8;
            local_48 = 1.0;
            if (!bVar9 || 0x6a00000 < (uVar14 & 0x7ff00000)) goto LAB_710080a298;
          }
          uVar22 = (uint)local_48;
          if (uVar22 == 0) {
            uVar22 = 1;
          }
          local_48 = (double)uVar22;
          dVar38 = -local_48;
LAB_710080a280:
          dVar39 = (double)CONCAT44(((int)((ulong)dVar38 >> 0x20) + 0x6b00000) -
                                    (uVar14 & 0x7ff00000),SUB84(dVar38,0));
        }
        else {
          auVar36 = NEON_fmov(0x3ff0000000000000,8);
          dVar39 = auVar36._0_8_;
          if ((uVar14 & 0x7ff00000) == 0x7fe00000) {
LAB_710080a5a8:
            local_48 = 1.0;
            goto LAB_710080a5ac;
          }
          local_48 = 1.0;
          dVar38 = local_48;
          if (bVar9 && (uVar14 & 0x7ff00000) < 0x6a00001) goto LAB_710080a280;
        }
LAB_710080a298:
        uVar14 = uVar14 & 0x7ff00000;
        uVar34 = FUN_7100824b20(dVar37);
        dVar37 = (double)NEON_fmadd(dVar39,uVar34,dVar37);
        uVar22 = (uint)((ulong)dVar37 >> 0x20);
LAB_710080a2c0:
        if (!bVar9 && (uVar22 & 0x7ff00000) == uVar14) {
          local_48 = local_48 - (double)(long)local_48;
          if ((iVar11 == 0) && (((ulong)dVar37 & 0xfffffffffffff) == 0)) {
            if (local_48 < 0.24999995) goto LAB_710080a488;
          }
          else if ((local_48 < 0.4999999) ||
                  (local_48 != 0.5000001 && local_48 < 0.5000001 == NAN(local_48)))
          goto LAB_710080a488;
        }
      }
      FUN_7100823f80(param_1,local_10);
      FUN_7100823f80(param_1,lVar17);
      FUN_7100823f80(param_1,lVar27);
      FUN_7100823f80(param_1,lVar31);
      goto LAB_710080a304;
    }
    if (iVar11 == 0) {
      if (((ulong)dVar37 & 0xfffff00000000) == 0) {
        if (uVar28 == 0) {
          if (uVar13 == 0) goto LAB_710080abec;
          if (0x6b00000 < (uVar14 & 0x7ff00000)) goto LAB_710080aa24;
          if ((uVar14 & 0x7ff00000) < 0x3700001) goto LAB_710080ab14;
          goto LAB_710080a998;
        }
        if (uVar22 == 0) {
          uVar22 = uVar28 & local_50;
        }
        else {
          uVar22 = uVar22 & uVar14;
        }
      }
      else {
        if (uVar22 == 0) {
          uVar22 = uVar28;
          uVar14 = local_50;
        }
        uVar22 = uVar14 & uVar22;
      }
      if (uVar22 == 0) goto LAB_710080a994;
      dVar39 = (double)FUN_71008099a0(dVar37,uVar13);
      dVar37 = dVar37 - dVar39;
      if (dVar37 == 0.0) {
LAB_710080ab14:
        dVar37 = 0.0;
        *param_1 = 0x22;
        goto LAB_710080a488;
      }
    }
    else {
      if ((uVar14 & 0xfffff) == 0xfffff) {
        if (uVar13 == 0) {
          uVar26 = 0xffffffff;
        }
        else {
          uVar26 = -1 << (ulong)(0x6b - (uVar14 >> 0x14 & 0x7ff) & 0x1f);
          if (0x6a00000 < (uVar14 & 0x7ff00000)) {
            uVar26 = 0xffffffff;
          }
        }
        if (uVar28 == uVar26) {
          if (dVar37 != 1.79769313486232e+308) {
            dVar37 = (double)NEON_shl((ulong)((uVar14 & 0x7ff00000) + 0x100000),0x20);
            goto LAB_710080a994;
          }
          *param_1 = 0x22;
          dVar37 = INFINITY;
          goto LAB_710080a488;
        }
        if (uVar22 != 0) goto LAB_710080aa80;
        uVar22 = uVar28 & local_50;
      }
      else {
        if (uVar22 == 0) {
          uVar22 = uVar28;
          uVar14 = local_50;
        }
LAB_710080aa80:
        uVar22 = uVar22 & uVar14;
      }
      if (uVar22 != 0) {
        dVar39 = (double)FUN_71008099a0(dVar37,uVar13);
        dVar37 = dVar37 + dVar39;
      }
    }
  }
LAB_710080a994:
  if (uVar13 == 0) goto LAB_710080a488;
LAB_710080a998:
  dVar37 = dVar37 * 1.232595164407831e-32;
  if (((ulong)dVar37 >> 0x20 & 0x7ff00000) == 0) {
    *param_1 = 0x22;
  }
  goto LAB_710080a488;
LAB_710080a478:
  dVar37 = INFINITY;
  *param_1 = 0x22;
LAB_710080a488:
  FUN_7100823f80(param_1,local_10);
  FUN_7100823f80(param_1,lVar17);
  FUN_7100823f80(param_1,lVar27);
  FUN_7100823f80(param_1,lVar23);
  FUN_7100823f80(param_1,lVar31);
  auVar36._8_8_ = 0;
  auVar36._0_8_ = dVar37;
  goto LAB_7100809c50;
}



// ===== FUN_710080ad00 @ 710080ad00 (size=64) =====

void FUN_710080ad00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = FUN_7100834b00();
  puVar1 = *(undefined **)(lVar2 + 0x40);
  if (*(undefined **)(lVar2 + 0x40) == (undefined *)0x0) {
    puVar1 = &DAT_7100af4978;
  }
  FUN_7100809a00(param_1,param_2,param_3,puVar1);
  return;
}



// ===== FUN_710080ad40 @ 710080ad40 (size=76) =====

void FUN_710080ad40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_7100834b00();
  lVar3 = FUN_7100834b00();
  puVar1 = *(undefined **)(lVar3 + 0x40);
  if (*(undefined **)(lVar3 + 0x40) == (undefined *)0x0) {
    puVar1 = &DAT_7100af4978;
  }
  FUN_7100809a00(uVar2,param_1,param_2,puVar1);
  return;
}



// ===== FUN_710080ada0 @ 710080ada0 (size=232) =====

undefined1  [16] FUN_710080ada0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 extraout_s0;
  double dVar5;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  float fVar7;
  double dVar8;
  float fVar9;
  undefined1 auVar6 [16];
  
  uVar2 = FUN_7100834b00();
  lVar3 = FUN_7100834b00();
  puVar1 = *(undefined **)(lVar3 + 0x40);
  if (*(undefined **)(lVar3 + 0x40) == (undefined *)0x0) {
    puVar1 = &DAT_7100af4978;
  }
  dVar5 = (double)FUN_7100809a00(uVar2,param_1,param_2,puVar1);
  if (NAN(dVar5)) {
    if (-1 < (long)dVar5) {
      FUN_7100800480(&DAT_7100853d20);
      auVar6._4_4_ = extraout_var;
      auVar6._0_4_ = extraout_s0;
      auVar6._8_8_ = extraout_var_00;
      return auVar6;
    }
    fVar9 = (float)FUN_7100800480(&DAT_7100853d20);
    fVar9 = -fVar9;
  }
  else {
    fVar9 = (float)dVar5;
    fVar7 = ABS(fVar9);
    if (((fVar7 != 3.4028235e+38 && fVar7 < 3.4028235e+38 == NAN(fVar7)) &&
        (dVar8 = ABS(dVar5),
        dVar8 == 1.79769313486232e+308 || dVar8 < 1.79769313486232e+308 != NAN(dVar8))) ||
       ((((uint)fVar9 & 0x7f800000) == 0 && (((ulong)dVar5 & 0x7ff0000000000000) != 0)))) {
      puVar4 = (undefined4 *)FUN_7100834b00();
      *puVar4 = 0x22;
    }
  }
  return ZEXT416((uint)fVar9);
}



// ===== FUN_710080aec0 @ 710080aec0 (size=300) =====

long FUN_710080aec0(ulong *param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar9 = (long)param_2 - (long)param_1;
  uVar6 = (ulong)param_1 & 7;
  if ((uVar9 & 7) == 0) {
    if (uVar6 != 0) {
      param_1 = (ulong *)((ulong)param_1 & 0xfffffffffffffff8);
      uVar5 = 0xffffffffffffffff >> ((long)param_2 * -8 & 0x3fU);
      uVar4 = *param_1 | uVar5;
      uVar5 = *(ulong *)((long)param_1 + uVar9) | uVar5;
      goto LAB_710080aee8;
    }
    do {
      uVar5 = *(ulong *)((long)param_1 + uVar9);
      uVar4 = *param_1;
LAB_710080aee8:
      param_1 = param_1 + 1;
      uVar7 = uVar4 + 0xfefefefefefefeff & ((uVar4 | 0x7f7f7f7f7f7f7f7f) ^ 0xffffffffffffffff);
    } while (uVar7 == 0 && uVar4 == uVar5);
    uVar7 = uVar4 ^ uVar5 | uVar7;
  }
  else {
    while (uVar6 != 0) {
      bVar1 = (byte)*param_1;
      if (bVar1 == 0 || bVar1 != *param_2) {
        return (ulong)bVar1 - (ulong)*param_2;
      }
      uVar6 = (ulong)((long)param_1 + 1) & 7;
      param_2 = param_2 + 1;
      param_1 = (ulong *)((long)param_1 + 1);
    }
    uVar8 = *(ulong *)((ulong)param_2 & 0xfffffffffffffff8) |
            0x101010101010101U >> ((long)param_2 * -8 & 0x3fU);
    uVar6 = uVar8 + 0xfefefefefefefeff & ((uVar8 | 0x7f7f7f7f7f7f7f7f) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      lVar2 = 8 - (long)param_1;
      puVar3 = param_1;
      do {
        uVar8 = *(ulong *)((long)puVar3 + (long)((ulong)param_2 & 0xfffffffffffffff8) + lVar2);
        uVar5 = *(ulong *)((long)puVar3 + uVar9);
        param_1 = puVar3 + 1;
        uVar4 = *puVar3;
        uVar6 = uVar8 + 0xfefefefefefefeff & ((uVar8 | 0x7f7f7f7f7f7f7f7f) ^ 0xffffffffffffffff);
        puVar3 = param_1;
      } while (uVar6 == 0 && uVar4 == uVar5);
      uVar7 = uVar4 ^ uVar5 | uVar6 << ((long)param_2 * -8 & 0x3fU);
      if (uVar7 != 0) goto LAB_710080af04;
    }
    uVar4 = *param_1;
    uVar5 = uVar8 >> ((long)param_2 * 8 & 0x3fU);
    uVar7 = uVar4 ^ uVar5 | uVar6 >> ((long)param_2 * 8 & 0x3fU);
  }
LAB_710080af04:
  uVar6 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
  uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
  uVar9 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
  uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
  uVar8 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
  uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
  uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20);
  return (((uVar9 >> 0x20 | uVar9 << 0x20) << (uVar6 & 0x3f)) >> 0x38) -
         (((uVar8 >> 0x20 | uVar8 << 0x20) << (uVar6 & 0x3f)) >> 0x38);
}



// ===== FUN_710080b000 @ 710080b000 (size=244) =====

ulong FUN_710080b000(long param_1,undefined8 param_2,ulong param_3,ulong param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  undefined8 local_28;
  long lStack_20;
  undefined8 *local_18;
  undefined4 local_10;
  long local_8;
  
  lVar4 = param_4 * param_3;
  local_18 = &local_28;
  local_10 = 1;
  local_28 = param_2;
  lStack_20 = lVar4;
  local_8 = lVar4;
  if ((param_1 != 0) && (*(long *)(param_1 + 0x48) == 0)) {
    FUN_710080d840();
  }
  if (((*(uint *)(param_5 + 0xb4) & 1) == 0) && ((*(ushort *)(param_5 + 0x10) >> 9 & 1) == 0)) {
    FUN_7100836200(param_5 + 0xa0);
  }
  iVar3 = FUN_71008235e0(param_1,param_5,&local_18);
  uVar1 = *(uint *)(param_5 + 0xb4) & 1;
  if (iVar3 != 0) {
    if ((uVar1 == 0) && ((*(ushort *)(param_5 + 0x10) >> 9 & 1) == 0)) {
      FUN_7100836220(param_5 + 0xa0);
    }
    uVar2 = 0;
    if (param_3 != 0) {
      uVar2 = (ulong)(lVar4 - local_8) / param_3;
    }
    return uVar2;
  }
  if ((uVar1 == 0) && ((*(ushort *)(param_5 + 0x10) >> 9 & 1) == 0)) {
    FUN_7100836220(param_5 + 0xa0);
  }
  return param_4;
}



// ===== FUN_710080b100 @ 710080b100 (size=52) =====

void FUN_710080b100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_710080b000(uVar1,param_1,param_2,param_3,param_4);
  return;
}



// ===== FUN_710080b140 @ 710080b140 (size=672) =====

int * FUN_710080b140(long *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  
  lVar11 = *param_1 / 0x15180;
  uVar9 = *param_1 % 0x15180;
  if ((long)uVar9 < 0) {
    uVar9 = uVar9 + 0x15180;
    lVar11 = lVar11 + 0xafa6b;
  }
  else {
    lVar11 = lVar11 + 0xafa6c;
  }
  param_2[2] = (int)(uVar9 / 0xe10);
  iVar10 = (int)((uVar9 % 0xe10) / 0x3c);
  *param_2 = (int)(uVar9 % 0xe10) + iVar10 * -0x3c;
  param_2[1] = iVar10;
  lVar4 = (lVar11 + 3) % 7;
  iVar10 = (int)lVar4;
  if (lVar4 < 0) {
    param_2[6] = iVar10 + 7;
  }
  else {
    param_2[6] = iVar10;
    lVar4 = lVar11;
    if (-1 < lVar11) goto LAB_710080b21c;
  }
  lVar4 = lVar11 + -0x23ab0;
LAB_710080b21c:
  uVar9 = lVar11 + (lVar4 / 0x23ab1) * -0x23ab1;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar9;
  auVar7._8_8_ = 0x8000;
  auVar7._0_8_ = 0xe5ac81fa000e5ac9;
  uVar12 = (SUB168(auVar5 * auVar7,8) >> 0xf) - (uVar9 / 0x23ab0 + uVar9 / 0x5b4);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar12;
  auVar8._8_8_ = 1;
  auVar8._0_8_ = 0x6719f36016719f37;
  iVar13 = (int)((SUB168(auVar6 * auVar8,8) >> 1) >> 8);
  uVar2 = ((int)((uVar12 / 0x16d & 0xffffffff) / 100) + (int)uVar9) -
          (((uint)(uVar12 / 0x5b4) & 0x3fffffff) + iVar13 * 0x16d);
  uVar1 = uVar2 * 5 + 2;
  iVar3 = (uVar2 + 1) - ((uVar1 / 0x99) * 0x99 + 2) / 5;
  iVar10 = -10;
  if (uVar1 < 0x5fa) {
    iVar10 = 2;
  }
  uVar1 = iVar10 + uVar1 / 0x99;
  iVar10 = iVar13 + (int)(lVar4 / 0x23ab1) * 400;
  if (uVar1 < 2) {
    iVar10 = iVar10 + 1;
  }
  if (uVar2 < 0x132) {
    if (((uVar12 / 0x16d & 3) != 0) ||
       (uVar14 = 1, ((uint)(iVar13 * -0x3d70a3d7) >> 2 | iVar13 * 0x40000000) < 0x28f5c29)) {
      uVar14 = (uint)(((uint)(iVar13 * -0x3d70a3d7) >> 4 | iVar13 * -0x70000000) < 0xa3d70b);
    }
    param_2[3] = iVar3;
    param_2[4] = uVar1;
    param_2[5] = iVar10 + -0x76c;
    param_2[7] = uVar2 + 0x3b + uVar14;
    param_2[8] = 0;
    return param_2;
  }
  param_2[3] = iVar3;
  param_2[4] = uVar1;
  param_2[5] = iVar10 + -0x76c;
  param_2[7] = uVar2 - 0x132;
  param_2[8] = 0;
  return param_2;
}



// ===== FUN_710080b3e0 @ 710080b3e0 (size=128) =====

void FUN_710080b3e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_71008258f8(uVar1,param_1,param_2);
  return;
}



// ===== FUN_710080b460 @ 710080b460 (size=92) =====

long FUN_710080b460(char *param_1,char *param_2)

{
  char cVar1;
  long lVar2;
  char cVar3;
  char *pcVar4;
  char cVar5;
  char *pcVar6;
  
  cVar5 = *param_1;
  if (cVar5 == '\0') {
    return 0;
  }
  cVar1 = *param_2;
  pcVar4 = param_2;
  pcVar6 = param_1;
  cVar3 = cVar1;
  if (cVar1 == '\0') {
    do {
      pcVar6 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
LAB_710080b490:
    lVar2 = (long)pcVar6 - (long)param_1;
  }
  else {
    do {
      do {
        if (cVar5 == cVar3) goto LAB_710080b490;
        cVar3 = pcVar4[1];
        pcVar4 = pcVar4 + 1;
      } while (cVar3 != '\0');
      pcVar6 = pcVar6 + 1;
      cVar5 = *pcVar6;
      pcVar4 = param_2;
      cVar3 = cVar1;
    } while (cVar5 != '\0');
    lVar2 = (long)pcVar6 - (long)param_1;
  }
  return lVar2;
}



// ===== FUN_710080b4c0 @ 710080b4c0 (size=432) =====

long FUN_710080b4c0(ulong *param_1,ulong *param_2,ulong param_3)

{
  byte bVar1;
  bool bVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  byte bVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar15 = (ulong)param_1 & 7;
  if ((((ulong)param_1 ^ (ulong)param_2) & 7) == 0) {
    if (uVar15 != 0) {
      param_1 = (ulong *)((ulong)param_1 & 0xfffffffffffffff8);
      param_2 = (ulong *)((ulong)param_2 & 0xfffffffffffffff8);
      uVar10 = 0xffffffffffffffff >> (uVar15 * -8 & 0x3f);
      bVar3 = CARRY8(param_3,uVar15);
      param_3 = param_3 + uVar15;
      if (bVar3) {
        param_3 = 0xffffffffffffffff;
      }
      uVar9 = *param_1 | uVar10;
      uVar10 = *param_2 | uVar10;
      goto LAB_710080b4e8;
    }
    do {
      uVar9 = *param_1;
      uVar10 = *param_2;
LAB_710080b4e8:
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
      bVar3 = param_3 < 8;
      param_3 = param_3 - 8;
      uVar12 = uVar9 ^ uVar10;
      uVar15 = uVar12;
      if (bVar3 || param_3 == 0) {
        uVar15 = 0xffffffffffffffff;
      }
      uVar11 = uVar9 + 0xfefefefefefefeff & ((uVar9 | 0x7f7f7f7f7f7f7f7f) ^ 0xffffffffffffffff);
    } while (uVar11 == 0 && uVar15 == 0);
LAB_710080b508:
    uVar12 = uVar12 | uVar11;
    param_3 = param_3 + 8;
  }
  else {
    if (param_3 < 0x10) {
      do {
        bVar1 = (byte)*param_1;
        bVar2 = (byte)*param_2;
        bVar3 = param_3 != 0;
        param_3 = param_3 - 1;
        param_1 = (ulong *)((long)param_1 + 1);
        param_2 = (ulong *)((long)param_2 + 1);
      } while (((bVar3 && param_3 != 0) && bVar1 != 0) && bVar1 == bVar2);
LAB_710080b590:
      return (ulong)bVar1 - (ulong)bVar2;
    }
    if (uVar15 != 0) {
      uVar15 = -uVar15 & 7;
      param_3 = param_3 - uVar15;
      puVar6 = param_1;
      puVar8 = param_2;
      do {
        param_1 = (ulong *)((long)puVar6 + 1);
        bVar1 = (byte)*puVar6;
        param_2 = (ulong *)((long)puVar8 + 1);
        bVar2 = (byte)*puVar8;
        if (bVar1 == 0 || bVar1 != bVar2) goto LAB_710080b590;
        bVar3 = uVar15 != 0;
        uVar15 = uVar15 - 1;
        puVar6 = param_1;
        puVar8 = param_2;
      } while (bVar3 && uVar15 != 0);
    }
    uVar14 = (long)param_2 * 8;
    puVar6 = (ulong *)((ulong)param_2 & 0xfffffffffffffff0);
    puVar5 = param_1 + 1;
    uVar9 = *param_1;
    puVar7 = puVar6 + 2;
    uVar15 = *puVar6;
    uVar13 = puVar6[1];
    uVar16 = -1L << ((long)param_2 * -8 & 0x3fU);
    uVar17 = (long)param_2 * -8 & 0x3f;
    puVar6 = puVar5;
    puVar8 = puVar7;
    if (((uint)uVar14 >> 6 & 1) != 0) goto LAB_710080b618;
    while( true ) {
      bVar3 = param_3 < 8;
      param_3 = param_3 - 8;
      uVar10 = uVar15 >> (uVar14 & 0x3f) | uVar13 << uVar17;
      uVar12 = uVar9 ^ uVar10;
      uVar15 = uVar12;
      if (bVar3 || param_3 == 0) {
        uVar15 = 0xffffffffffffffff;
      }
      uVar11 = uVar9 + 0xfefefefefefefeff & ((uVar9 | 0x7f7f7f7f7f7f7f7f) ^ 0xffffffffffffffff);
      if (uVar15 != 0 || uVar11 != 0) goto LAB_710080b508;
      puVar6 = puVar5 + 1;
      uVar9 = *puVar5;
      puVar8 = puVar7;
LAB_710080b618:
      uVar10 = uVar13 >> (uVar14 & 0x3f);
      uVar11 = uVar9 + 0xfefefefefefefeff & ((uVar9 | 0x7f7f7f7f7f7f7f7f) ^ 0xffffffffffffffff);
      uVar12 = (uVar10 ^ uVar9 | uVar11) & (uVar16 ^ 0xffffffffffffffff);
      uVar15 = uVar12;
      if (param_3 <= uVar17 >> 3) {
        uVar15 = 0xffffffffffffffff;
      }
      if (uVar15 != 0) break;
      puVar7 = puVar8 + 2;
      uVar15 = *puVar8;
      uVar13 = puVar8[1];
      uVar10 = uVar15 << uVar17;
      uVar12 = (uVar10 ^ uVar9 | uVar11) & uVar16;
      uVar11 = uVar12;
      if (param_3 < 9) {
        uVar11 = 0xffffffffffffffff;
      }
      if (uVar11 != 0) break;
      puVar5 = puVar6 + 1;
      uVar9 = *puVar6;
      param_3 = param_3 - 8;
    }
  }
  uVar15 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
  uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
  uVar13 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
  uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
  uVar9 = LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20);
  uVar15 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
  uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
  lVar4 = (((uVar13 >> 0x20 | uVar13 << 0x20) << (uVar9 & 0x3f)) >> 0x38) -
          (((uVar15 >> 0x20 | uVar15 << 0x20) << (uVar9 & 0x3f)) >> 0x38);
  if (param_3 <= uVar9 >> 3) {
    lVar4 = 0;
  }
  return lVar4;
}



// ===== FUN_710080b680 @ 710080b680 (size=144) =====

ulong * FUN_710080b680(ulong *param_1,ulong *param_2,byte param_3,ulong param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar1 = param_1;
  if ((7 < param_4) && ((((ulong)param_2 | (ulong)param_1) & 7) == 0)) {
    iVar4 = 8;
    uVar5 = 0;
    do {
      uVar5 = (ulong)param_3 + uVar5 * 0x100;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    do {
      uVar6 = *param_2 ^ uVar5;
      puVar1 = param_1;
      if ((uVar6 + 0xfefefefefefefeff & (uVar6 ^ 0xffffffffffffffff) & 0x8080808080808080) != 0)
      break;
      param_4 = param_4 - 8;
      puVar1 = param_1 + 1;
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      param_1 = puVar1;
    } while (7 < param_4);
  }
  puVar3 = param_2;
  do {
    if (puVar3 == (ulong *)((long)param_2 + param_4)) {
      return (ulong *)0x0;
    }
    uVar5 = *puVar3;
    puVar2 = (ulong *)((long)puVar1 + 1);
    *(byte *)puVar1 = (byte)uVar5;
    puVar1 = puVar2;
    puVar3 = (ulong *)((long)puVar3 + 1);
  } while ((byte)uVar5 != param_3);
  return puVar2;
}



// ===== FUN_710080b720 @ 710080b720 (size=228) =====

uint FUN_710080b720(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = -100;
  if ((int)param_1 < 0) {
    iVar3 = 0x76c;
  }
  iVar3 = iVar3 + param_1;
  if (((param_1 & 3) == 0) &&
     (0x28f5c28 < (iVar3 * -0x3d70a3d7 + 0x51eb850U >> 2 | param_1 * 0x40000000))) {
    uVar1 = param_2 * 2 + param_3 * 0x10 + 1;
  }
  else {
    uVar1 = param_2 * 2 + param_3 * 0x10 +
            (uint)((iVar3 * -0x3d70a3d7 + 0x51eb850U >> 4 | iVar3 * -0x70000000) < 0xa3d70b);
  }
  if ((int)uVar1 < 0x22) {
    uVar2 = -((uint)(0x330033c03 >> ((ulong)uVar1 & 0x3f)) & 1);
    if ((int)uVar1 < 0) {
      uVar2 = 0;
    }
    return uVar2;
  }
  uVar2 = (uint)(0x2a001f00070001 >> ((ulong)(uVar1 - 0x16a2) & 0x3f)) & 1;
  if (0x35 < uVar1 - 0x16a2) {
    uVar2 = 0;
  }
  return uVar2;
}



// ===== FUN_710080b820 @ 710080b820 (size=60) =====

long FUN_710080b820(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 0x3fc) = 0;
  lVar1 = FUN_710081cf40(param_1,param_2,0xff);
  if (lVar1 == -1) {
    lVar1 = 0;
  }
  *param_3 = lVar1;
  return param_1;
}



// ===== FUN_710080b860 @ 710080b860 (size=4040) =====

/* WARNING: Type propagation algorithm not settling */

ulong FUN_710080b860(long param_1,ulong param_2,int *param_3,uint *param_4)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined1 *puVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  undefined *puVar16;
  undefined *puVar17;
  ulong uVar18;
  uint uVar19;
  char *pcVar20;
  undefined1 *puVar21;
  int extraout_w8;
  ulong uVar22;
  int *piVar23;
  long lVar24;
  uint uVar25;
  ulong local_488;
  int local_480;
  int iStack_47c;
  undefined1 local_478 [120];
  undefined1 auStack_400 [1024];
  
  uVar22 = 0;
  bVar2 = false;
  do {
    for (; iVar5 = *param_3, iVar5 != 0x25 && iVar5 != 0; param_3 = param_3 + 1) {
      if (param_2 - 1 <= uVar22) {
        return 0;
      }
      *(int *)(param_1 + uVar22 * 4) = iVar5;
      uVar22 = uVar22 + 1;
    }
    if (iVar5 == 0) goto LAB_710080b9d4;
    iVar5 = param_3[1];
    if (iVar5 == 0x30 || iVar5 == 0x2b) {
      piVar23 = param_3 + 2;
      iVar14 = iVar5;
      iVar5 = param_3[2];
    }
    else {
      piVar23 = param_3 + 1;
      iVar14 = 0;
    }
    uVar9 = 0;
    if (iVar5 - 0x31U < 9) {
      uVar9 = FUN_7100823c80(piVar23,&local_480,10);
      piVar23 = (int *)CONCAT44(iStack_47c,local_480);
      iVar5 = *piVar23;
    }
    if ((iVar5 == 0x45) || (iVar5 == 0x4f)) {
      iVar5 = piVar23[1];
      piVar23 = piVar23 + 1;
    }
    switch(iVar5) {
    case 0x25:
      if (param_2 - 1 <= uVar22) {
        return 0;
      }
      *(undefined4 *)(param_1 + uVar22 * 4) = 0x25;
      uVar22 = uVar22 + 1;
      break;
    default:
      return 0;
    case 0x41:
      lVar11 = FUN_710080b820(auStack_400,(&PTR_s_Sunday_7100ae7328)[(int)param_4[6]],&local_488);
      if (local_488 != 0) {
        uVar18 = ~uVar22;
        uVar9 = uVar22 + local_488;
        do {
          if (param_2 - 1 <= uVar22) {
            return 0;
          }
          uVar22 = uVar22 + 1;
          *(undefined4 *)(param_1 + -4 + uVar22 * 4) =
               *(undefined4 *)(lVar11 + uVar18 * 4 + uVar22 * 4);
        } while (uVar22 != uVar9);
      }
      break;
    case 0x42:
      lVar11 = FUN_710080b820(auStack_400,(&PTR_DAT_7100ae7230)[(long)(int)param_4[4] + 0xc],
                              &local_488);
      if (local_488 != 0) {
        uVar18 = ~uVar22;
        uVar9 = uVar22 + local_488;
        do {
          if (param_2 - 1 <= uVar22) {
            return 0;
          }
          uVar22 = uVar22 + 1;
          *(undefined4 *)(param_1 + -4 + uVar22 * 4) =
               *(undefined4 *)(lVar11 + uVar18 * 4 + uVar22 * 4);
        } while (uVar22 != uVar9);
      }
      break;
    case 0x43:
      uVar7 = param_4[5];
      if (uVar9 < 2) {
        uVar9 = 2;
      }
      if ((int)uVar7 < 0) {
        iVar8 = FUN_7100808300(uVar7 + 0x76c);
        iVar5 = iVar8 / 100;
        if (iVar14 == 0) {
          pcVar20 = "";
          puVar16 = &DAT_7100995930;
        }
        else if (iVar14 == 0x2b && 9999 < iVar8) {
          pcVar20 = "+";
          puVar16 = &DAT_7100995950;
        }
        else {
          pcVar20 = "";
          puVar16 = &DAT_7100995950;
        }
        if ((int)(uVar7 + 0x76c) < 0 != SCARRY4(uVar7,0x76c)) {
          pcVar20 = "-";
        }
      }
      else {
        iVar5 = (int)uVar7 / 100 + 0x13;
        if (iVar14 == 0) {
          puVar16 = &DAT_7100995930;
          pcVar20 = "";
        }
        else {
          puVar16 = &DAT_7100995950;
          if ((iVar14 == 0x2b && iVar5 != 99) &&
              (iVar14 != 0x2b || (int)uVar7 / 100 + -0x50 < 0 == SBORROW4(iVar5,99))) {
            pcVar20 = "+";
          }
          else {
            pcVar20 = "";
          }
        }
      }
      iVar5 = FUN_710081d0a0(param_1 + uVar22 * 4,param_2 - uVar22,puVar16,pcVar20,
                             uVar9 - ((int)(uVar7 + 0x76c) < 0 != SCARRY4(uVar7,0x76c)),iVar5);
      goto joined_r0x00710080bcb0;
    case 0x44:
      uVar6 = param_4[5];
      uVar7 = param_4[3];
      uVar19 = param_4[4];
      if ((int)uVar6 < 0) {
        uVar6 = FUN_7100808300(uVar6 + 0x76c);
      }
      iVar5 = FUN_710081d0a0(param_1 + uVar22 * 4,param_2 - uVar22,&DAT_7100995980,uVar19 + 1,uVar7,
                             (int)uVar6 % 100);
      goto joined_r0x00710080bcb0;
    case 0x46:
      local_480 = 0x25;
      if (iVar14 == 0) {
        lVar11 = 4;
        iStack_47c = 0x2b;
LAB_710080c3c4:
        uVar7 = FUN_710081d0a0(local_478,0x1e,&DAT_71009959c0,lVar11);
        if ((int)uVar7 < 1) goto LAB_710080c248;
        puVar12 = local_478 + (ulong)uVar7 * 4;
      }
      else {
        iStack_47c = iVar14;
        if ((5 < uVar9) && (lVar11 = uVar9 - 6, lVar11 != 0)) goto LAB_710080c3c4;
LAB_710080c248:
        puVar12 = local_478;
      }
      FUN_710081c380(puVar12,&DAT_71009959d0);
      piVar10 = &local_480;
      goto LAB_710080bda4;
    case 0x47:
      uVar19 = param_4[5];
      uVar7 = FUN_710080b720(uVar19,param_4[6],param_4[7]);
      if ((int)uVar19 < 0) {
        iVar5 = FUN_7100808300(uVar19 + 0x76c);
        iVar5 = iVar5 / 100;
        uVar6 = param_4[5];
        uVar25 = (uint)((int)(uVar19 + 0x76c) < 0 != SCARRY4(uVar19,0x76c));
        if ((int)uVar6 < 0) {
          iVar8 = FUN_7100808300(uVar6 + 0x76c);
          iVar8 = iVar8 % 100;
          if (uVar7 == 0xffffffff) {
            if ((int)(param_4[5] + 0x76b) < 0 != SCARRY4(param_4[5],0x76b)) {
              iVar15 = iVar8 + 1;
              if (iVar8 == -2) {
                uVar7 = (iVar5 + -1) * 100 + 99;
              }
              else {
                iVar8 = iVar5 * 100;
                if (iVar15 == 100) {
                  iVar8 = iVar5 * iVar15;
                }
                uVar7 = iVar15 + iVar8;
              }
              goto LAB_710080c2f0;
            }
LAB_710080c79c:
            iVar15 = iVar8 + -1;
            if (iVar8 != 0) goto LAB_710080c684;
          }
          else {
            if ((uVar7 & uVar25) != 0) {
LAB_710080c6a0:
              if (iVar8 == 0) {
                uVar7 = (iVar5 + -1) * 100 + 99;
              }
              else {
                uVar7 = iVar8 + -1 + iVar5 * 100;
              }
              goto LAB_710080c2f0;
            }
            iVar15 = uVar7 + iVar8;
            if (iVar15 != -1) goto LAB_710080c814;
          }
          iVar5 = iVar5 + -1;
          iVar15 = 99;
        }
        else {
          iVar8 = (int)uVar6 % 100;
          if (uVar7 == 0xffffffff) goto LAB_710080c79c;
          if ((uVar7 & uVar25) != 0) goto LAB_710080c6a0;
          iVar15 = uVar7 + iVar8;
LAB_710080c814:
          if (iVar15 == 100) {
            iVar5 = iVar5 + 1;
            iVar15 = 0;
          }
        }
LAB_710080c684:
        uVar7 = iVar15 + iVar5 * 100;
        if ((int)(uVar19 + 0x76c) < 0 != SCARRY4(uVar19,0x76c)) goto LAB_710080c2f0;
      }
      else {
        iVar8 = (int)uVar19 / 100;
        iVar5 = (int)uVar19 % 100;
        if (uVar7 == 0xffffffff) {
          uVar7 = (iVar8 + 0x12) * 100 + 99;
          if (iVar5 != 0) {
            uVar7 = iVar5 + -1 + (iVar8 + 0x13) * 100;
          }
        }
        else {
          iVar5 = uVar7 + iVar5;
          uVar7 = (iVar8 + 0x14) * iVar5;
          if (iVar5 != 100) {
            uVar7 = iVar5 + (iVar8 + 0x13) * 100;
          }
        }
      }
LAB_710080bba0:
      if (iVar14 != 0x2b || uVar7 < 10000) {
        piVar10 = &local_480;
        goto LAB_710080c304;
      }
      local_480 = 0x2b;
      if (uVar9 != 0) {
        uVar9 = uVar9 - 1;
      }
      piVar10 = &iStack_47c;
      iStack_47c = 0x25;
LAB_710080bbcc:
      piVar13 = piVar10 + 2;
      piVar10[1] = 0x30;
      goto LAB_710080c314;
    case 0x48:
    case 0x6b:
      uVar7 = param_4[2];
      bVar3 = iVar5 == 0x6b;
      puVar16 = &UNK_7100995970;
      puVar17 = &DAT_71009959a8;
      goto LAB_710080b9ac;
    case 0x49:
    case 0x6c:
      uVar19 = param_4[2];
      uVar7 = 0xc;
      if (uVar19 != 0 && uVar19 != 0xc) {
        uVar7 = (int)uVar19 % 0xc;
      }
      bVar3 = iVar5 == 0x49;
      puVar16 = &DAT_71009959a8;
      puVar17 = &UNK_7100995970;
      goto LAB_710080b9ac;
    case 0x4d:
      uVar7 = param_4[1];
      goto LAB_710080bbe4;
    case 0x50:
    case 0x70:
      lVar11 = FUN_710080b820(auStack_400,(&PTR_DAT_7100ae7378)[0xb < (int)param_4[2]],&local_488);
      if (local_488 != 0) {
        uVar9 = 0;
        uVar18 = local_488;
        do {
          if (param_2 - 1 <= uVar22) {
            return 0;
          }
          uVar4 = *(undefined4 *)(lVar11 + uVar9 * 4);
          if (*piVar23 == 0x50) {
            uVar4 = FUN_7100822f20();
            uVar18 = local_488;
          }
          uVar22 = uVar22 + 1;
          uVar9 = uVar9 + 1;
          *(undefined4 *)(param_1 + -4 + uVar22 * 4) = uVar4;
        } while (uVar9 < uVar18);
      }
      break;
    case 0x52:
      iVar5 = FUN_710081d0a0(param_1 + uVar22 * 4,param_2 - uVar22,&DAT_7100995a30,param_4[2],
                             param_4[1]);
      goto joined_r0x00710080bcb0;
    case 0x53:
      uVar7 = *param_4;
      goto LAB_710080bbe4;
    case 0x54:
      iVar5 = FUN_710081d0a0(param_1 + uVar22 * 4,param_2 - uVar22,&DAT_7100995a70,param_4[2],
                             param_4[1],*param_4);
      goto joined_r0x00710080bcb0;
    case 0x55:
      uVar7 = param_4[6];
      uVar19 = param_4[7];
      goto LAB_710080bed8;
    case 0x56:
      uVar19 = param_4[6];
      uVar6 = param_4[7];
      uVar7 = FUN_710080b720(param_4[5],uVar19,uVar6);
      iVar5 = uVar19 - 1;
      if (uVar19 == 0) {
        iVar5 = 6;
      }
      if (uVar7 != 1) {
        if (uVar7 == 0xffffffff) {
          iVar14 = -0x65;
          if (extraout_w8 < 0) {
            iVar14 = 0x76b;
          }
          uVar7 = iVar14 + extraout_w8;
          if (((uVar7 & 3) != 0) ||
             (uVar19 = 1, (uVar7 * -0x3d70a3d7 + 0x51eb850 >> 2 | uVar7 * 0x40000000) < 0x28f5c29))
          {
            uVar19 = (uint)((uVar7 * -0x3d70a3d7 + 0x51eb850 >> 4 | uVar7 * -0x70000000) < 0xa3d70b)
            ;
          }
          uVar7 = ((int)((iVar5 - uVar6) - uVar19) < 5) + 0x34;
        }
        else {
          uVar7 = (int)((uVar6 + 10) - iVar5) / 7;
        }
      }
      goto LAB_710080bbe4;
    case 0x57:
      uVar19 = param_4[7];
      uVar7 = param_4[6] - 1;
      if (param_4[6] == 0) {
        uVar7 = 6;
      }
LAB_710080bed8:
      uVar7 = (int)((uVar19 + 7) - uVar7) / 7;
      goto LAB_710080bbe4;
    case 0x58:
      piVar10 = (int *)FUN_710080b820(auStack_400,PTR_s__H__M__S_7100ae7360,&local_488);
      goto LAB_710080bd94;
    case 0x59:
      uVar7 = param_4[5];
      if ((int)(uVar7 + 0x76c) < 0 == SCARRY4(uVar7,0x76c)) {
        uVar7 = uVar7 + 0x76c;
        goto LAB_710080bba0;
      }
      uVar7 = -uVar7 - 0x76c;
LAB_710080c2f0:
      local_480 = 0x2d;
      piVar10 = &iStack_47c;
      uVar9 = uVar9 - (uVar9 != 0);
LAB_710080c304:
      *piVar10 = 0x25;
      piVar13 = piVar10 + 1;
      if (iVar14 != 0) goto LAB_710080bbcc;
LAB_710080c314:
      FUN_710081c380(piVar13,&DAT_71009959f0);
      iVar5 = FUN_710081d0a0(param_1 + uVar22 * 4,param_2 - uVar22,&local_480,uVar9,uVar7);
      goto joined_r0x00710080bcb0;
    case 0x5a:
      if (-1 < (int)param_4[8]) {
        FUN_7100814c60();
        if (!bVar2) {
          FUN_710080e8c0();
        }
        puVar16 = (&PTR_DAT_7100af5560)[(int)(uint)(0 < (int)param_4[8])];
        lVar11 = FUN_710081ce00(puVar16);
        uVar9 = uVar22;
        if (lVar11 != 0) {
          uVar18 = uVar22;
          do {
            if (param_2 - 1 <= uVar18) {
              FUN_7100814c80();
              return 0;
            }
            lVar24 = uVar18 - uVar22;
            uVar18 = uVar18 + 1;
            *(uint *)(param_1 + -4 + uVar18 * 4) = (uint)(byte)puVar16[lVar24];
            uVar9 = uVar22 + lVar11;
          } while (uVar18 != uVar22 + lVar11);
        }
        uVar22 = uVar9;
        FUN_7100814c80();
LAB_710080be9c:
        bVar2 = true;
        break;
      }
      goto LAB_710080b9e8;
    case 0x61:
      lVar11 = FUN_710080b820(auStack_400,(&PTR_DAT_7100ae7230)[(long)(int)param_4[6] + 0x18],
                              &local_488);
      if (local_488 != 0) {
        uVar18 = ~uVar22;
        uVar9 = uVar22 + local_488;
        do {
          if (param_2 - 1 <= uVar22) {
            return 0;
          }
          uVar22 = uVar22 + 1;
          *(undefined4 *)(param_1 + -4 + uVar22 * 4) =
               *(undefined4 *)(lVar11 + uVar18 * 4 + uVar22 * 4);
        } while (uVar22 != uVar9);
      }
      break;
    case 0x62:
    case 0x68:
      lVar11 = FUN_710080b820(auStack_400,(&PTR_DAT_7100ae7230)[(int)param_4[4]],&local_488);
      if (local_488 != 0) {
        uVar18 = ~uVar22;
        uVar9 = uVar22 + local_488;
        do {
          if (param_2 - 1 <= uVar22) {
            return 0;
          }
          uVar22 = uVar22 + 1;
          *(undefined4 *)(param_1 + -4 + uVar22 * 4) =
               *(undefined4 *)(lVar11 + uVar18 * 4 + uVar22 * 4);
        } while (uVar22 != uVar9);
      }
      break;
    case 99:
      piVar10 = (int *)FUN_710080b820(auStack_400,PTR_s__a__b__e__H__M__S__Y_7100ae7370,&local_488);
      goto LAB_710080bd94;
    case 100:
    case 0x65:
      uVar7 = param_4[3];
      bVar3 = iVar5 == 100;
      puVar16 = &DAT_71009959a8;
      puVar17 = &UNK_7100995970;
LAB_710080b9ac:
      if (bVar3) {
        puVar17 = puVar16;
      }
      iVar5 = FUN_710081d0a0(param_1 + uVar22 * 4,param_2 - uVar22,puVar17,uVar7);
      goto joined_r0x00710080bcb0;
    case 0x67:
      uVar7 = param_4[5];
      iVar5 = FUN_710080b720(uVar7,param_4[6],param_4[7]);
      if ((int)uVar7 < 0) {
        uVar7 = FUN_7100808300(uVar7 + 0x76c);
      }
      iVar14 = (int)uVar7 % 100;
      if (iVar5 == -1) {
        if ((int)(param_4[5] + 0x76b) < 0 == SCARRY4(param_4[5],0x76b)) goto LAB_710080c4fc;
LAB_710080c458:
        iVar14 = iVar14 + 1;
      }
      else if (iVar5 == 1) {
        if ((int)(param_4[5] + 0x76c) < 0 == SCARRY4(param_4[5],0x76c)) goto LAB_710080c458;
LAB_710080c4fc:
        iVar14 = iVar14 + -1;
      }
      uVar7 = (iVar14 % 100 + 100U) % 100;
      goto LAB_710080bbe4;
    case 0x6a:
      iVar5 = FUN_710081d0a0(param_1 + uVar22 * 4,param_2 - uVar22,&DAT_7100995a00,param_4[7] + 1);
      goto joined_r0x00710080bcb0;
    case 0x6d:
      uVar7 = param_4[4] + 1;
      goto LAB_710080bbe4;
    case 0x6e:
      if (param_2 - 1 <= uVar22) {
        return 0;
      }
      *(undefined4 *)(param_1 + uVar22 * 4) = 10;
      uVar22 = uVar22 + 1;
      break;
    case 0x71:
      iVar5 = FUN_710081d0a0(param_1 + uVar22 * 4,param_2 - uVar22,&DAT_7100995a18,
                             (int)param_4[4] / 3 + 1);
      goto joined_r0x00710080bcb0;
    case 0x72:
      piVar10 = (int *)FUN_710080b820(auStack_400,PTR_s__I__M__S__p_7100ae73f8,&local_488);
      goto LAB_710080bd94;
    case 0x73:
      lVar11 = 0;
      if (-1 < (int)param_4[8]) {
        FUN_7100814c60();
        if (!bVar2) {
          FUN_710080e8c0();
        }
        lVar11 = FUN_710080f8e0();
        lVar11 = *(long *)(lVar11 + (ulong)(0 < (int)param_4[8]) * 0x28 + 0x28);
        FUN_7100814c80();
        bVar2 = true;
        lVar11 = -lVar11;
      }
      uVar7 = param_4[5];
      lVar1 = (long)(int)uVar7 + -0x45;
      lVar24 = (long)(int)uVar7 + -0x42;
      if (-1 < lVar1) {
        lVar24 = lVar1;
      }
      iVar5 = FUN_710081d0a0(param_1 + uVar22 * 4,param_2 - uVar22,&DAT_7100995a58,
                             ((long)(int)*param_4 +
                             ((long)(int)param_4[1] +
                             ((long)(int)param_4[2] +
                             (((lVar24 >> 2) - (long)((int)(uVar7 - 1) / 100)) +
                              (long)((int)(uVar7 + 299) / 400) + (long)(int)((uVar7 - 0x46) * 0x16d)
                             + (long)(int)param_4[7]) * 0x18) * 0x3c) * 0x3c) - lVar11);
joined_r0x00710080bcb0:
      if (iVar5 < 0) {
        return 0;
      }
LAB_710080b9c0:
      uVar22 = uVar22 + (long)iVar5;
      if (param_2 <= uVar22) {
        return 0;
      }
      break;
    case 0x74:
      if (param_2 - 1 <= uVar22) {
        return 0;
      }
      *(undefined4 *)(param_1 + uVar22 * 4) = 9;
      uVar22 = uVar22 + 1;
      break;
    case 0x75:
      if (param_2 - 1 <= uVar22) {
        return 0;
      }
      iVar5 = param_4[6] + 0x30;
      if (param_4[6] == 0) {
        iVar5 = 0x37;
      }
      *(int *)(param_1 + uVar22 * 4) = iVar5;
      uVar22 = uVar22 + 1;
      break;
    case 0x76:
      piVar10 = &local_480;
      FUN_710081c380(piVar10,&DAT_7100995ab0);
      lVar11 = FUN_710081f600(piVar10);
      puVar12 = local_478 + lVar11 * 4 + -4;
      puVar21 = puVar12;
      if (iVar14 == 0) {
        lVar24 = 4;
        piVar10[lVar11] = 0x2b;
LAB_710080c384:
        uVar7 = FUN_710081d0a0(puVar12,(long)(auStack_400 + -(long)puVar12) >> 2,&DAT_71009959c0,
                               lVar24);
        puVar21 = puVar12 + (ulong)uVar7 * 4;
        if ((int)uVar7 < 1) {
          puVar21 = puVar12;
        }
      }
      else {
        piVar10[lVar11] = iVar14;
        if ((5 < uVar9) && (lVar24 = uVar9 - 6, lVar24 != 0)) goto LAB_710080c384;
      }
      FUN_710081c380(puVar21,&DAT_7100995ad0);
      goto LAB_710080bda4;
    case 0x77:
      if (param_2 - 1 <= uVar22) {
        return 0;
      }
      *(uint *)(param_1 + uVar22 * 4) = param_4[6] + 0x30;
      uVar22 = uVar22 + 1;
      break;
    case 0x78:
      piVar10 = (int *)FUN_710080b820(auStack_400,PTR_s__m__d__y_7100ae7368,&local_488);
LAB_710080bd94:
      if (*piVar10 != 0) {
LAB_710080bda4:
        iVar5 = FUN_710080b860(param_1 + uVar22 * 4,param_2 - uVar22,piVar10,param_4);
        if (iVar5 < 1) {
          return 0;
        }
        uVar22 = uVar22 + (long)iVar5;
      }
      break;
    case 0x79:
      uVar7 = param_4[5];
      if ((int)uVar7 < 0) {
        uVar7 = FUN_7100808300(uVar7 + 0x76c);
      }
      uVar7 = (int)uVar7 % 100;
LAB_710080bbe4:
      iVar5 = FUN_710081d0a0(param_1 + uVar22 * 4,param_2 - uVar22,&DAT_71009959a8,uVar7);
      if (iVar5 < 0) {
        return 0;
      }
      goto LAB_710080b9c0;
    case 0x7a:
      if (-1 < (int)param_4[8]) {
        FUN_7100814c60();
        if (!bVar2) {
          FUN_710080e8c0();
        }
        lVar11 = FUN_710080f8e0();
        lVar24 = -*(long *)(lVar11 + (ulong)(0 < (int)param_4[8]) * 0x28 + 0x28);
        FUN_7100814c80();
        lVar11 = FUN_710080eea0(lVar24 / 0x3c);
        iVar5 = FUN_710081d0a0(param_1 + uVar22 * 4,param_2 - uVar22,&DAT_7100995ad8,lVar24 / 0xe10,
                               lVar11 % 0x3c);
        if (iVar5 < 0) {
          return 0;
        }
        uVar22 = uVar22 + (long)iVar5;
        if (param_2 <= uVar22) {
          return 0;
        }
        goto LAB_710080be9c;
      }
      goto LAB_710080b9e8;
    }
    if (*piVar23 == 0) {
LAB_710080b9d4:
      if (param_2 == 0) {
        return uVar22;
      }
      *(undefined4 *)(param_1 + uVar22 * 4) = 0;
      return uVar22;
    }
LAB_710080b9e8:
    param_3 = piVar23 + 1;
  } while( true );
}



// ===== FUN_710080c840 @ 710080c840 (size=52) =====

void FUN_710080c840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_7100834b00();
  FUN_710080b860(param_1,param_2,param_3,param_4);
  return;
}



// ===== FUN_710080c880 @ 710080c880 (size=124) =====

ulong * FUN_710080c880(ulong *param_1)

{
  char cVar1;
  ulong *puVar2;
  ulong uVar3;
  
  puVar2 = param_1;
  if (((ulong)param_1 & 7) == 0) {
    uVar3 = *param_1 + 0xfefefefefefefeff & (*param_1 ^ 0xffffffffffffffff);
    while ((uVar3 & 0x8080808080808080) == 0) {
      puVar2 = puVar2 + 1;
      uVar3 = *puVar2 + 0xfefefefefefefeff & (*puVar2 ^ 0xffffffffffffffff);
    }
  }
  cVar1 = (char)*puVar2;
  while (cVar1 != '\0') {
    puVar2 = (ulong *)((long)puVar2 + 1);
    cVar1 = *(char *)puVar2;
  }
  FUN_710081b7c0();
  return param_1;
}



// ===== FUN_710080c900 @ 710080c900 (size=48) =====

int FUN_710080c900(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + lVar2);
    if (iVar1 != *(int *)(param_2 + lVar2)) {
      return iVar1 - *(int *)(param_2 + lVar2);
    }
    lVar2 = lVar2 + 4;
  } while (iVar1 != 0);
  return 0;
}



// ===== FUN_710080c940 @ 710080c940 (size=28) =====

void FUN_710080c940(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_7100835280(uVar1,param_1);
  return;
}



// ===== FUN_710080c980 @ 710080c980 (size=220) =====

undefined1 * FUN_710080c980(ulong param_1,undefined1 param_2,ulong param_3)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if (param_3 == 0) {
    return (undefined1 *)0x0;
  }
  pauVar6 = (undefined1 (*) [16])(param_1 & 0xffffffffffffffe0);
  param_1 = param_1 & 0x1f;
  uVar8 = param_3 & 0x1f;
  if (param_1 == 0) {
LAB_710080c9e4:
    do {
      auVar9 = *pauVar6;
      pauVar5 = pauVar6 + 1;
      pauVar6 = pauVar6 + 2;
      bVar4 = 0x1f < param_3;
      param_3 = param_3 - 0x20;
      auVar2[1] = param_2;
      auVar2[0] = param_2;
      auVar2[2] = param_2;
      auVar2[3] = param_2;
      auVar2[4] = param_2;
      auVar2[5] = param_2;
      auVar2[6] = param_2;
      auVar2[7] = param_2;
      auVar2[8] = param_2;
      auVar2[9] = param_2;
      auVar2[10] = param_2;
      auVar2[0xb] = param_2;
      auVar2[0xc] = param_2;
      auVar2[0xd] = param_2;
      auVar2[0xe] = param_2;
      auVar2[0xf] = param_2;
      auVar9 = NEON_cmeq(auVar9,auVar2,1);
      auVar3[1] = param_2;
      auVar3[0] = param_2;
      auVar3[2] = param_2;
      auVar3[3] = param_2;
      auVar3[4] = param_2;
      auVar3[5] = param_2;
      auVar3[6] = param_2;
      auVar3[7] = param_2;
      auVar3[8] = param_2;
      auVar3[9] = param_2;
      auVar3[10] = param_2;
      auVar3[0xb] = param_2;
      auVar3[0xc] = param_2;
      auVar3[0xd] = param_2;
      auVar3[0xe] = param_2;
      auVar3[0xf] = param_2;
      auVar11 = NEON_cmeq(*pauVar5,auVar3,1);
      if (!bVar4 || param_3 == 0) break;
      auVar12._0_8_ =
           CONCAT17(auVar9[7] | auVar11[7],
                    CONCAT16(auVar9[6] | auVar11[6],
                             CONCAT15(auVar9[5] | auVar11[5],
                                      CONCAT14(auVar9[4] | auVar11[4],
                                               CONCAT13(auVar9[3] | auVar11[3],
                                                        CONCAT12(auVar9[2] | auVar11[2],
                                                                 CONCAT11(auVar9[1] | auVar11[1],
                                                                          auVar9[0] | auVar11[0]))))
                                     )));
      auVar12[8] = auVar9[8] | auVar11[8];
      auVar12[9] = auVar9[9] | auVar11[9];
      auVar12[10] = auVar9[10] | auVar11[10];
      auVar12[0xb] = auVar9[0xb] | auVar11[0xb];
      auVar12[0xc] = auVar9[0xc] | auVar11[0xc];
      auVar12[0xd] = auVar9[0xd] | auVar11[0xd];
      auVar12[0xe] = auVar9[0xe] | auVar11[0xe];
      auVar12[0xf] = auVar9[0xf] | auVar11[0xf];
    } while (auVar12._0_8_ + auVar12._8_8_ == 0);
    uVar7 = auVar9._0_8_ & 0x4010040140100401;
    uVar10 = auVar11._0_8_ & 0x4010040140100401;
    uVar7 = CONCAT17((auVar11[0xc] & 1) + (auVar11[0xd] & 4) +
                     (auVar11[0xe] & 0x10) + (auVar11[0xf] & 0x40),
                     CONCAT16((auVar11[8] & 1) + (auVar11[9] & 4) +
                              (auVar11[10] & 0x10) + (auVar11[0xb] & 0x40),
                              CONCAT15((char)(uVar10 >> 0x20) + (char)(uVar10 >> 0x28) +
                                       (char)(uVar10 >> 0x30) + (char)(uVar10 >> 0x38),
                                       CONCAT14((char)uVar10 + (char)(uVar10 >> 8) +
                                                (char)(uVar10 >> 0x10) + (char)(uVar10 >> 0x18),
                                                CONCAT13((auVar9[0xc] & 1) + (auVar9[0xd] & 4) +
                                                         (auVar9[0xe] & 0x10) + (auVar9[0xf] & 0x40)
                                                         ,CONCAT12((auVar9[8] & 1) + (auVar9[9] & 4)
                                                                   + (auVar9[10] & 0x10) +
                                                                     (auVar9[0xb] & 0x40),
                                                                   CONCAT11((char)(uVar7 >> 0x20) +
                                                                            (char)(uVar7 >> 0x28) +
                                                                            (char)(uVar7 >> 0x30) +
                                                                            (char)(uVar7 >> 0x38),
                                                                            (char)uVar7 +
                                                                            (char)(uVar7 >> 8) +
                                                                            (char)(uVar7 >> 0x10) +
                                                                            (char)(uVar7 >> 0x18))))
                                               ))));
    if (bVar4) goto LAB_710080ca38;
  }
  else {
    auVar11 = *pauVar6;
    pauVar5 = pauVar6 + 1;
    pauVar6 = pauVar6 + 2;
    bVar4 = CARRY8(param_3,param_1 - 0x20);
    param_3 = param_3 + (param_1 - 0x20);
    auVar9[1] = param_2;
    auVar9[0] = param_2;
    auVar9[2] = param_2;
    auVar9[3] = param_2;
    auVar9[4] = param_2;
    auVar9[5] = param_2;
    auVar9[6] = param_2;
    auVar9[7] = param_2;
    auVar9[8] = param_2;
    auVar9[9] = param_2;
    auVar9[10] = param_2;
    auVar9[0xb] = param_2;
    auVar9[0xc] = param_2;
    auVar9[0xd] = param_2;
    auVar9[0xe] = param_2;
    auVar9[0xf] = param_2;
    auVar9 = NEON_cmeq(auVar11,auVar9,1);
    auVar11[1] = param_2;
    auVar11[0] = param_2;
    auVar11[2] = param_2;
    auVar11[3] = param_2;
    auVar11[4] = param_2;
    auVar11[5] = param_2;
    auVar11[6] = param_2;
    auVar11[7] = param_2;
    auVar11[8] = param_2;
    auVar11[9] = param_2;
    auVar11[10] = param_2;
    auVar11[0xb] = param_2;
    auVar11[0xc] = param_2;
    auVar11[0xd] = param_2;
    auVar11[0xe] = param_2;
    auVar11[0xf] = param_2;
    auVar11 = NEON_cmeq(*pauVar5,auVar11,1);
    uVar7 = auVar9._0_8_ & 0x4010040140100401;
    uVar10 = auVar11._0_8_ & 0x4010040140100401;
    uVar7 = (CONCAT17((auVar11[0xc] & 1) + (auVar11[0xd] & 4) +
                      (auVar11[0xe] & 0x10) + (auVar11[0xf] & 0x40),
                      CONCAT16((auVar11[8] & 1) + (auVar11[9] & 4) +
                               (auVar11[10] & 0x10) + (auVar11[0xb] & 0x40),
                               CONCAT15((char)(uVar10 >> 0x20) + (char)(uVar10 >> 0x28) +
                                        (char)(uVar10 >> 0x30) + (char)(uVar10 >> 0x38),
                                        CONCAT14((char)uVar10 + (char)(uVar10 >> 8) +
                                                 (char)(uVar10 >> 0x10) + (char)(uVar10 >> 0x18),
                                                 CONCAT13((auVar9[0xc] & 1) + (auVar9[0xd] & 4) +
                                                          (auVar9[0xe] & 0x10) +
                                                          (auVar9[0xf] & 0x40),
                                                          CONCAT12((auVar9[8] & 1) + (auVar9[9] & 4)
                                                                   + (auVar9[10] & 0x10) +
                                                                     (auVar9[0xb] & 0x40),
                                                                   CONCAT11((char)(uVar7 >> 0x20) +
                                                                            (char)(uVar7 >> 0x28) +
                                                                            (char)(uVar7 >> 0x30) +
                                                                            (char)(uVar7 >> 0x38),
                                                                            (char)uVar7 +
                                                                            (char)(uVar7 >> 8) +
                                                                            (char)(uVar7 >> 0x10) +
                                                                            (char)(uVar7 >> 0x18))))
                                                )))) >> (param_1 << 1)) << (param_1 << 1);
    if (bVar4 && param_3 != 0) {
      if (uVar7 != 0) goto LAB_710080ca38;
      goto LAB_710080c9e4;
    }
  }
  uVar8 = ((uVar8 + param_1 & 0x1f) - 0x20) * -2;
  uVar7 = (uVar7 << (uVar8 & 0x3f)) >> (uVar8 & 0x3f);
LAB_710080ca38:
  uVar8 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
  uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
  uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
  uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
  uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
  puVar1 = (undefined1 *)0x0;
  if (uVar8 != 0) {
    puVar1 = pauVar6[-2] + ((ulong)LZCOUNT(uVar8) >> 1);
  }
  return puVar1;
}



// ===== FUN_710080ca60 @ 710080ca60 (size=272) =====

void FUN_710080ca60(long param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  
  uVar4 = *(uint *)(param_1 + 0x14);
  uVar3 = (int)param_2 >> 5;
  if ((int)uVar3 < (int)uVar4) {
    puVar2 = (uint *)(param_1 + 0x18);
    puVar6 = puVar2 + uVar3;
    puVar1 = puVar2 + uVar4;
    param_2 = param_2 & 0x1f;
    if (param_2 != 0) {
      uVar10 = puVar2[uVar3] >> (ulong)param_2;
      if (puVar6 + 1 < puVar1) {
        puVar6 = puVar6 + 1;
        puVar11 = puVar2;
        do {
          *puVar11 = *puVar6 << (ulong)(0x20 - param_2 & 0x1f) | uVar10;
          puVar9 = puVar6 + 1;
          uVar10 = *puVar6 >> (ulong)param_2;
          puVar6 = puVar9;
          puVar11 = puVar11 + 1;
        } while (puVar9 < puVar1);
        lVar7 = ((long)(int)uVar4 - (long)(int)uVar3) * 4 + -8;
        puVar6 = (uint *)(lVar7 + param_1 + 0x1c);
        *(uint *)(param_1 + 0x1c + lVar7) = uVar10;
        if (uVar10 == 0) goto LAB_710080cb5c;
      }
      else {
        *(uint *)(param_1 + 0x18) = uVar10;
        puVar6 = puVar2;
        if (uVar10 == 0) goto LAB_710080cb08;
      }
      iVar5 = (int)((long)puVar6 + (4 - (long)puVar2) >> 2);
      *(int *)(param_1 + 0x14) = iVar5;
      if (iVar5 != 0) {
        return;
      }
      goto LAB_710080cb0c;
    }
    if (puVar6 < puVar1) {
      uVar8 = ((long)(int)uVar4 - (long)(int)uVar3) * 4 - 1U >> 2;
      lVar7 = 0;
      do {
        puVar2[lVar7] = puVar6[lVar7];
        lVar7 = lVar7 + 1;
      } while (uVar8 + 1 != lVar7);
      puVar6 = (uint *)(param_1 + 0x1c + uVar8 * 4);
LAB_710080cb5c:
      iVar5 = (int)((long)puVar6 - (long)puVar2 >> 2);
      *(int *)(param_1 + 0x14) = iVar5;
      if (iVar5 != 0) {
        return;
      }
      goto LAB_710080cb0c;
    }
  }
LAB_710080cb08:
  *(undefined4 *)(param_1 + 0x14) = 0;
LAB_710080cb0c:
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



// ===== FUN_710080cb80 @ 710080cb80 (size=2144) =====

ulong FUN_710080cb80(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,
                    undefined8 param_4,undefined8 param_5,undefined8 param_6,undefined8 param_7,
                    undefined8 param_8,undefined8 param_9,long *param_10,uint *param_11,
                    uint *param_12,long *param_13,ulong param_14,undefined8 param_15,
                    undefined8 param_16)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  ulong uVar12;
  uint uVar13;
  undefined8 uVar14;
  char *pcVar15;
  long *plVar16;
  uint uVar17;
  uint extraout_w11;
  uint extraout_w11_00;
  uint extraout_w11_01;
  uint uVar18;
  byte *pbVar19;
  byte *pbVar20;
  uint *puVar21;
  byte *pbVar22;
  long lVar23;
  uint uVar24;
  undefined8 extraout_d0;
  undefined8 extraout_var;
  undefined1 auVar25 [16];
  undefined1 *puStack_1e8;
  undefined8 uStack_1dc;
  undefined1 *puStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  char *pcStack_a8;
  long *plStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  int local_8;
  
  lVar9 = *param_10;
  local_8 = (int)param_14;
  bVar4 = *(byte *)(lVar9 + 2);
  if (bVar4 == 0x30) {
    pbVar20 = (byte *)(lVar9 + 3);
    do {
      pbVar22 = pbVar20;
      bVar4 = *pbVar22;
      pbVar20 = pbVar22 + 1;
    } while (bVar4 == 0x30);
    iVar8 = ((int)pbVar22 - (int)(byte *)(lVar9 + 3)) + 1;
  }
  else {
    pbVar22 = (byte *)(lVar9 + 2);
    iVar8 = 0;
  }
  plVar16 = param_13;
  pbVar20 = pbVar22;
  if ((&DAT_71009cf7e8)[(int)(uint)bVar4] == '\0') {
    iVar7 = FUN_710080b4c0(pbVar22,".",1);
    if (iVar7 == 0) {
      bVar4 = pbVar22[1];
      pbVar20 = pbVar22 + 1;
      if ((&DAT_71009cf7e8)[(int)(uint)bVar4] != '\0') {
        pbVar22 = pbVar20;
        pbVar19 = pbVar20;
        if (bVar4 != 0x30) {
          iVar8 = 1;
          bVar6 = false;
          goto LAB_710080cc0c;
        }
        do {
          pbVar22 = pbVar22 + 1;
        } while (*pbVar22 == 0x30);
        cVar5 = (&DAT_71009cf7e8)[(int)(uint)*pbVar22];
        iVar8 = 1;
        bVar6 = cVar5 == '\0';
        pbVar20 = pbVar22;
        goto joined_r0x00710080cf08;
      }
    }
    else {
      bVar4 = *pbVar22;
    }
    if ((bVar4 & 0xdf) == 0x50) {
      uVar18 = 0;
      bVar6 = true;
LAB_710080cd28:
      bVar4 = pbVar20[1];
      if (bVar4 == 0x2b) {
        param_14 = 0;
LAB_710080cd40:
        bVar4 = pbVar20[2];
        pbVar19 = pbVar20 + 2;
      }
      else {
        if (bVar4 == 0x2d) {
          param_14 = 1;
          goto LAB_710080cd40;
        }
        pbVar19 = pbVar20 + 1;
        param_14 = 0;
      }
      uVar13 = (uint)(byte)(&DAT_71009cf7e8)[(int)(uint)bVar4];
      if (0x18 < (uVar13 - 1 & 0xff)) goto LAB_710080cc54;
      bVar4 = pbVar19[1];
      pbVar19 = pbVar19 + 1;
      while( true ) {
        iVar7 = uVar13 - 0x10;
        if (0x18 < ((byte)(&DAT_71009cf7e8)[(int)(uint)bVar4] - 1 & 0xff)) break;
        uVar13 = (uint)(byte)(&DAT_71009cf7e8)[(int)(uint)bVar4] + iVar7 * 10;
        pbVar19 = pbVar19 + 1;
        bVar4 = *pbVar19;
      }
      *param_10 = (long)pbVar19;
      iVar2 = -iVar7;
      if ((int)param_14 == 0) {
        iVar2 = iVar7;
      }
      uVar18 = uVar18 + iVar2;
      goto joined_r0x00710080cda4;
    }
    *param_10 = (long)pbVar20;
  }
  else {
    bVar6 = false;
    pbVar19 = (byte *)0x0;
    cVar5 = (&DAT_71009cf7e8)[(int)(uint)*pbVar22];
joined_r0x00710080cf08:
    while (cVar5 != '\0') {
LAB_710080cc0c:
      pbVar20 = pbVar20 + 1;
      cVar5 = (&DAT_71009cf7e8)[(int)(uint)*pbVar20];
    }
    iVar7 = FUN_710080b4c0(pbVar20,".",1);
    if (iVar7 == 0) {
      if (pbVar19 == (byte *)0x0) {
        pbVar19 = pbVar20 + 1;
        uVar13 = (uint)pbVar20[1];
        uVar18 = 0;
        pbVar20 = pbVar19;
        if ((&DAT_71009cf7e8)[(int)uVar13] != '\0') {
          do {
            pbVar20 = pbVar20 + 1;
            bVar4 = *pbVar20;
          } while ((&DAT_71009cf7e8)[(int)(uint)bVar4] != '\0');
          goto LAB_710080cc3c;
        }
        goto LAB_710080cc44;
      }
      uVar18 = ((int)pbVar20 - (int)pbVar19) * -4;
      if ((*pbVar20 & 0xdf) == 0x50) goto LAB_710080cd28;
    }
    else {
      bVar4 = *pbVar20;
      uVar13 = (uint)bVar4;
      uVar18 = 0;
      if (pbVar19 != (byte *)0x0) {
LAB_710080cc3c:
        uVar13 = (uint)bVar4;
        uVar18 = ((int)pbVar20 - (int)pbVar19) * -4;
      }
LAB_710080cc44:
      if ((uVar13 & 0xffffffdf) == 0x50) goto LAB_710080cd28;
    }
LAB_710080cc54:
    *param_10 = (long)pbVar20;
joined_r0x00710080cda4:
    if (!bVar6) {
      iVar8 = 0;
      for (iVar7 = ((int)pbVar20 - (int)pbVar22) + -1; 7 < iVar7; iVar7 = iVar7 >> 1) {
        iVar8 = iVar8 + 1;
      }
      lVar9 = FUN_7100823ec0(param_9,iVar8);
      if (lVar9 == 0) goto LAB_710080d3c4;
      puVar21 = (uint *)(lVar9 + 0x18);
      puVar10 = puVar21;
      if (pbVar22 < pbVar20) {
        uVar13 = 0;
        param_14 = 0;
        do {
          uVar17 = (uint)param_14;
          pbVar20 = pbVar20 + -1;
          if ((*pbVar20 != 0x2e || pbVar20 < pbVar22) ||
             (iVar8 = FUN_710080b4c0(pbVar20,".",1), iVar8 != 0)) {
            if (uVar13 == 0x20) {
              uVar13 = 0;
              uVar24 = 4;
              *puVar10 = uVar17;
              uVar17 = 0;
              puVar10 = puVar10 + 1;
            }
            else {
              uVar24 = uVar13 + 4;
            }
            param_14 = (ulong)(uVar17 | ((byte)(&DAT_71009cf7e8)[(int)(uint)*pbVar20] & 0xf) <<
                                        (ulong)(uVar13 & 0x1f));
            uVar13 = uVar24;
          }
        } while (pbVar20 != pbVar22);
      }
      else {
        param_14 = 0;
      }
      *puVar10 = (uint)param_14;
      lVar23 = (long)puVar10 + (4 - (long)puVar21);
      *(int *)(lVar9 + 0x14) = (int)(lVar23 >> 2);
      iVar8 = FUN_7100824220(param_14);
      uVar13 = *param_11;
      iVar8 = (int)lVar23 * 8 - iVar8;
      if ((int)uVar13 < iVar8) {
        iVar8 = iVar8 - uVar13;
        iVar7 = FUN_7100824fe0(lVar9,iVar8);
        if (((iVar7 != 0) &&
            (uVar17 = iVar8 - 1,
            (1 << (ulong)(uVar17 & 0x1f) & puVar21[(uint)((int)uVar17 >> 5)]) != 0)) &&
           (1 < (int)uVar17)) {
          FUN_7100824fe0(lVar9,iVar8 + -2);
        }
        FUN_710080ca60(lVar9,iVar8);
        uVar18 = uVar18 + iVar8;
        if ((int)param_11[2] < (int)uVar18) goto LAB_710080d18c;
        uVar17 = param_11[1];
        if ((int)uVar18 < (int)uVar17) {
          uVar18 = uVar17 - uVar18;
          if ((int)uVar13 <= (int)uVar18) goto LAB_710080cf84;
          uVar24 = uVar18 - 1;
          if (extraout_w11_00 == 0) goto LAB_710080ce3c;
          goto LAB_710080ce44;
        }
        uVar17 = 1;
        uVar24 = extraout_w11_00;
LAB_710080d220:
        if (uVar24 == 0) goto LAB_710080cff8;
        uVar3 = param_11[3];
        if (uVar3 == 2) {
LAB_710080d08c:
          local_8 = 1 - local_8;
LAB_710080d09c:
          lVar23 = lVar9;
          if (local_8 == 0) {
LAB_710080d240:
            uVar17 = uVar17 | 0x10;
            goto LAB_710080cff8;
          }
        }
        else {
          if (uVar3 == 3) goto LAB_710080d09c;
          if ((uVar3 != 1) || ((uVar24 >> 1 & 1) == 0)) goto LAB_710080d240;
LAB_710080d26c:
          lVar23 = lVar9;
          if (((uVar24 | *puVar21) & 1) == 0) {
            uVar17 = uVar17 | 0x10;
            goto LAB_710080cff8;
          }
        }
        iVar8 = *(int *)(lVar23 + 0x14);
        puVar10 = puVar21;
        do {
          lVar9 = lVar23;
          if (*puVar10 != 0xffffffff) {
            *puVar10 = *puVar10 + 1;
            goto LAB_710080d0d8;
          }
          puVar11 = puVar10 + 1;
          *puVar10 = 0;
          puVar10 = puVar11;
        } while (puVar11 < puVar21 + iVar8);
        iVar7 = *(int *)(lVar23 + 0x14);
        if (*(int *)(lVar23 + 0xc) <= iVar7) {
          lVar9 = FUN_7100823ec0(param_9,*(int *)(lVar23 + 8) + 1);
          if (lVar9 == 0) {
            FUN_7100806b40("../../../../../newlib-4.5.0.20241231/newlib/libc/stdlib/gdtoa-gethex.c",
                           0x84,0,"Balloc succeeded");
LAB_710080d3c4:
            pcVar15 = "Balloc succeeded";
            uVar14 = 0;
            auVar25 = FUN_7100806b40("../../../../../newlib-4.5.0.20241231/newlib/libc/stdlib/gdtoa-gethex.c"
                                     ,0xe4);
            puStack_1e8 = auVar25._0_8_;
            uStack_1c8 = 0x7fffffff;
            uStack_1dc = 0xffff02087fffffff;
            uStack_134 = 0;
            puStack_1d0 = puStack_1e8;
            uStack_130 = extraout_d0;
            uStack_128 = extraout_var;
            uStack_120 = param_2;
            uStack_110 = param_3;
            uStack_100 = param_4;
            uStack_f0 = param_5;
            uStack_e0 = param_6;
            uStack_d0 = param_7;
            uStack_c0 = param_8;
            uStack_b0 = uVar14;
            pcStack_a8 = pcVar15;
            plStack_a0 = plVar16;
            uStack_98 = param_14;
            uStack_90 = param_15;
            uStack_88 = param_16;
            uVar14 = FUN_7100834b00();
            uVar12 = FUN_7100817928(uVar14,&puStack_1e8,auVar25._8_8_);
            *puStack_1e8 = 0;
            return uVar12;
          }
          FUN_710080f900(lVar9 + 0x10,lVar23 + 0x10,((long)*(int *)(lVar23 + 0x14) + 2) * 4);
          puVar21 = (uint *)(lVar9 + 0x18);
          FUN_7100823f80(param_9,lVar23);
          iVar7 = *(int *)(lVar9 + 0x14);
        }
        *(int *)(lVar9 + 0x14) = iVar7 + 1;
        *(undefined4 *)(lVar9 + (long)iVar7 * 4 + 0x18) = 1;
LAB_710080d0d8:
        if (uVar17 == 2) {
          uVar17 = 0x22;
          if ((*param_11 - 1 != uVar13) ||
             ((1 << (ulong)(uVar13 & 0x1f) & puVar21[(int)uVar13 >> 5]) == 0)) goto LAB_710080cff8;
        }
        else {
          uVar17 = *(uint *)(lVar9 + 0x14);
          if ((int)uVar17 <= iVar8) {
            if (((uVar13 & 0x1f) == 0) ||
               (iVar8 = FUN_7100824220(puVar21[(long)iVar8 + -1]),
               (int)(0x20 - (uVar13 & 0x1f)) <= iVar8)) goto LAB_710080d2d8;
            uVar17 = *(uint *)(lVar9 + 0x14);
          }
          if ((int)uVar17 < 1) {
LAB_710080d394:
            *(undefined4 *)(lVar9 + 0x14) = 0;
LAB_710080d398:
            *(undefined4 *)(lVar9 + 0x18) = 0;
          }
          else {
            puVar10 = puVar21 + uVar17;
            uVar13 = *(uint *)(lVar9 + 0x18) >> 1;
            puVar11 = (uint *)(lVar9 + 0x1c);
            if ((uint *)(lVar9 + 0x1c) < puVar10) {
              do {
                puVar1 = puVar11 + 1;
                puVar11[-1] = uVar13 | *puVar11 << 0x1f;
                uVar13 = *puVar11 >> 1;
                puVar11 = puVar1;
              } while (puVar1 < puVar10);
              uVar12 = (long)puVar10 + (-0x1d - lVar9) & 0xfffffffffffffffc;
              puVar10 = (uint *)((long)puVar21 + uVar12 + 4);
              *(uint *)((long)puVar21 + uVar12 + 4) = uVar13;
              if (uVar13 != 0) goto LAB_710080d3a0;
            }
            else {
              *(uint *)(lVar9 + 0x18) = uVar13;
              puVar10 = puVar21;
              if (uVar13 == 0) goto LAB_710080d394;
LAB_710080d3a0:
              puVar10 = puVar10 + 1;
            }
            iVar8 = (int)((long)puVar10 - (long)puVar21 >> 2);
            *(int *)(lVar9 + 0x14) = iVar8;
            if (iVar8 == 0) goto LAB_710080d398;
          }
          uVar18 = uVar18 + 1;
          if ((int)param_11[2] < (int)uVar18) goto LAB_710080d18c;
        }
LAB_710080d2d8:
        uVar17 = 0x21;
LAB_710080cff8:
        *param_13 = lVar9;
        *param_12 = uVar18;
        return (ulong)uVar17;
      }
      if (iVar8 < (int)uVar13) {
        uVar18 = uVar18 - (uVar13 - iVar8);
        lVar9 = FUN_7100824760(param_9,lVar9,uVar13 - iVar8);
        if ((int)uVar18 <= (int)param_11[2]) {
          uVar17 = param_11[1];
          if ((int)uVar17 <= (int)uVar18) goto LAB_710080cff4;
          puVar21 = (uint *)(lVar9 + 0x18);
          goto LAB_710080ce2c;
        }
      }
      else if ((int)uVar18 <= (int)param_11[2]) {
        uVar17 = param_11[1];
        if ((int)uVar17 <= (int)uVar18) {
LAB_710080cff4:
          uVar17 = 1;
          goto LAB_710080cff8;
        }
LAB_710080ce2c:
        uVar18 = uVar17 - uVar18;
        uVar24 = uVar18 - 1;
        if ((int)uVar13 <= (int)uVar18) {
LAB_710080cf84:
          uVar24 = param_11[3];
          if (uVar24 == 2) {
            if (local_8 != 0) goto LAB_710080d054;
          }
          else if (uVar24 == 3) {
            if (local_8 == 0) goto LAB_710080d054;
          }
          else {
            if ((uVar24 != 1) || (uVar18 != uVar13)) {
LAB_710080d054:
              FUN_7100823f80(param_9,lVar9);
              *param_13 = 0;
              return 0x50;
            }
            if (uVar18 != 1) {
              iVar8 = FUN_7100824fe0(lVar9,uVar18 - 1);
              if (iVar8 == 0) goto LAB_710080d054;
              uVar17 = param_11[1];
            }
          }
          uVar18 = 0x62;
          *param_12 = uVar17;
          *(undefined4 *)(lVar9 + 0x14) = 1;
          *puVar21 = 1;
          *param_13 = lVar9;
          goto LAB_710080cdb4;
        }
LAB_710080ce3c:
        if (uVar24 != 0) {
          FUN_7100824fe0(lVar9,uVar24);
        }
LAB_710080ce44:
        uVar13 = uVar13 - uVar18;
        if ((1 << (ulong)(uVar24 & 0x1f) & puVar21[(uint)((int)uVar24 >> 5)]) == 0) {
          FUN_710080ca60(lVar9,uVar18);
          uVar17 = 2;
          uVar18 = param_11[1];
          uVar24 = extraout_w11_01;
          goto LAB_710080d220;
        }
        FUN_710080ca60(lVar9,uVar18);
        uVar17 = param_11[3];
        uVar18 = param_11[1];
        if (uVar17 != 2) {
          if (uVar17 != 3) {
            if (uVar17 != 1) {
              uVar17 = 0x12;
              goto LAB_710080cff8;
            }
            uVar17 = 2;
            uVar24 = extraout_w11;
            goto LAB_710080d26c;
          }
          uVar17 = 2;
          goto LAB_710080d09c;
        }
        goto LAB_710080d08c;
      }
LAB_710080d18c:
      uVar18 = 0xa3;
      FUN_7100823f80(param_9,lVar9);
      *param_13 = 0;
      goto LAB_710080cdb4;
    }
  }
  uVar18 = 6;
  if (iVar8 != 0) {
    uVar18 = 0;
  }
LAB_710080cdb4:
  return (ulong)uVar18;
}



// ===== FUN_710080d3e0 @ 710080d3e0 (size=156) =====

void FUN_710080d3e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined1 *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                   undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 uVar1;
  undefined1 *local_168;
  undefined8 local_15c;
  undefined1 *local_150;
  undefined4 local_148;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a0;
  undefined8 local_90;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined8 uStack_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_148 = 0x7fffffff;
  local_15c = 0xffff02087fffffff;
  local_b4 = 0;
  local_168 = param_9;
  local_150 = param_9;
  local_b0 = param_1;
  uStack_a0 = param_2;
  local_90 = param_3;
  uStack_80 = param_4;
  local_70 = param_5;
  uStack_60 = param_6;
  local_50 = param_7;
  uStack_40 = param_8;
  local_30 = param_11;
  uStack_28 = param_12;
  local_20 = param_13;
  uStack_18 = param_14;
  local_10 = param_15;
  uStack_8 = param_16;
  uVar1 = FUN_7100834b00();
  FUN_7100817928(uVar1,&local_168,param_10);
  *local_168 = 0;
  return;
}



// ===== FUN_710080d480 @ 710080d480 (size=88) =====

long FUN_710080d480(long param_1,char *param_2,long param_3)

{
  char cVar1;
  long lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      cVar1 = *param_2;
      *(char *)(param_1 + lVar2) = cVar1;
      if (cVar1 == '\0') {
        return lVar2;
      }
      lVar2 = lVar2 + 1;
      param_2 = param_2 + 1;
    } while (param_3 != lVar2);
  }
  if (*param_2 != '\0') {
    lVar2 = param_3;
    do {
      lVar2 = lVar2 + 1;
    } while (param_2[lVar2 - param_3] != '\0');
    return lVar2;
  }
  return param_3;
}



// ===== FUN_710080d500 @ 710080d500 (size=108) =====

void FUN_710080d500(long param_1)

{
  if (*(undefined1 **)(param_1 + 8) != &DAT_7100d22ca0) {
    FUN_71008081a0();
  }
  if (*(undefined1 **)(param_1 + 0x10) != &DAT_7100d22d58) {
    FUN_71008081a0(param_1);
  }
  if (*(undefined1 **)(param_1 + 0x18) != &DAT_7100d22e10) {
    FUN_71008081a0(param_1);
    return;
  }
  return;
}



// ===== FUN_710080d580 @ 710080d580 (size=308) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710080d580(void)

{
  _DAT_7100d22ec8 = &LAB_710080d4e0;
  _DAT_7100d22ca0 = 0;
  _DAT_7100d22ca8 = 0;
  _DAT_7100d22cb0 = 4;
  _DAT_7100d22cb8 = 0;
  _DAT_7100d22cc0 = 0;
  _DAT_7100d22cc8 = 0;
  _DAT_7100d22d54 = 0;
  FUN_7100808340(0x7100d22d4c,0,8);
  _DAT_7100d22cd0 = &DAT_7100d22ca0;
  _DAT_7100d22cd8 = FUN_7100823d00;
  _DAT_7100d22ce0 = &LAB_7100823d80;
  _DAT_7100d22ce8 = FUN_7100823e00;
  _DAT_7100d22d58 = 0;
  _DAT_7100d22d60 = 0;
  _DAT_7100d22cf0 = &LAB_7100823e60;
  _DAT_7100d22d40 = 0;
  _DAT_7100d22d48 = 0;
  _DAT_7100d22d68 = 0x10009;
  _DAT_7100d22d70 = 0;
  _DAT_7100d22d78 = 0;
  _DAT_7100d22d80 = 0;
  _DAT_7100d22e0c = 0;
  FUN_7100808340(0x7100d22e04,0,8);
  _DAT_7100d22d88 = &DAT_7100d22d58;
  _DAT_7100d22d90 = FUN_7100823d00;
  _DAT_7100d22d98 = &LAB_7100823d80;
  _DAT_7100d22da0 = FUN_7100823e00;
  _DAT_7100d22e10 = 0;
  _DAT_7100d22e18 = 0;
  _DAT_7100d22da8 = &LAB_7100823e60;
  _DAT_7100d22df8 = 0;
  _DAT_7100d22e00 = 0;
  _DAT_7100d22e20 = 0x20012;
  _DAT_7100d22e28 = 0;
  _DAT_7100d22e30 = 0;
  _DAT_7100d22e38 = 0;
  _DAT_7100d22ec4 = 0;
  FUN_7100808340(0x7100d22ebc,0,8);
  _DAT_7100d22e40 = &DAT_7100d22e10;
  _DAT_7100d22e48 = FUN_7100823d00;
  _DAT_7100d22e50 = &LAB_7100823d80;
  _DAT_7100d22e58 = FUN_7100823e00;
  _DAT_7100d22e60 = &LAB_7100823e60;
  _DAT_7100d22eb0 = 0;
  _DAT_7100d22eb8 = 0;
  return;
}



// ===== FUN_710080d6c0 @ 710080d6c0 (size=12) =====

void FUN_710080d6c0(void)

{
  FUN_7100836200(0x7100d22c90);
  return;
}



// ===== FUN_710080d6e0 @ 710080d6e0 (size=12) =====

void FUN_710080d6e0(void)

{
  FUN_7100836220(0x7100d22c90);
  return;
}



// ===== FUN_710080d700 @ 710080d700 (size=312) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_710080d700(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_710080d6c0();
  if (_DAT_7100d22ec8 == 0) {
    FUN_710080d580();
  }
  puVar3 = &DAT_7100af4b40;
  while( true ) {
    do {
      puVar2 = puVar3;
      if (0 < (int)*(uint *)(puVar2 + 1)) {
        puVar3 = (undefined8 *)puVar2[2];
        puVar1 = puVar3 + (ulong)*(uint *)(puVar2 + 1) * 0x17;
        do {
          if (*(short *)(puVar3 + 2) == 0) {
            *(undefined4 *)(puVar3 + 2) = 0xffff0001;
            *(undefined4 *)((long)puVar3 + 0xb4) = 0;
            puVar3[0x14] = 0;
            *(undefined4 *)(puVar3 + 0x15) = 0;
            FUN_710080d6e0();
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3[3] = 0;
            *(undefined4 *)(puVar3 + 4) = 0;
            *(undefined4 *)(puVar3 + 5) = 0;
            FUN_7100808340((long)puVar3 + 0xac,0,8);
            puVar3[0xb] = 0;
            *(undefined4 *)(puVar3 + 0xc) = 0;
            puVar3[0xf] = 0;
            *(undefined4 *)(puVar3 + 0x10) = 0;
            return puVar3;
          }
          puVar3 = puVar3 + 0x17;
        } while (puVar3 != puVar1);
      }
      puVar3 = (undefined8 *)*puVar2;
    } while ((undefined8 *)*puVar2 != (undefined8 *)0x0);
    puVar3 = (undefined8 *)FUN_7100814ca0(param_1,0x2f8);
    if (puVar3 == (undefined8 *)0x0) break;
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = 4;
    puVar3[2] = puVar3 + 3;
    FUN_7100808340(puVar3 + 3,0,0x2e0);
    *puVar2 = puVar3;
  }
  *puVar2 = 0;
  FUN_710080d6e0();
  *param_1 = 0xc;
  return (undefined8 *)0x0;
}



// ===== FUN_710080d840 @ 710080d840 (size=84) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710080d840(long param_1)

{
  FUN_710080d6c0();
  if (*(long *)(param_1 + 0x48) == 0) {
    *(code **)(param_1 + 0x48) = FUN_710080d500;
    if (_DAT_7100d22ec8 == 0) {
      FUN_710080d580();
      FUN_710080d6e0();
      return;
    }
  }
  FUN_710080d6e0();
  return;
}



// ===== FUN_710080d8a0 @ 710080d8a0 (size=420) =====

ulong FUN_710080d8a0(undefined4 *param_1,byte *param_2,undefined8 *param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  
  pbVar9 = param_2;
  do {
    pbVar8 = pbVar9;
    pbVar9 = pbVar8 + 1;
    bVar1 = *pbVar8;
    uVar7 = (ulong)bVar1;
  } while (((byte)(&DAT_71009d32f1)[uVar7] >> 3 & 1) != 0);
  if (bVar1 == 0x2d) {
    uVar7 = (ulong)*pbVar9;
    bVar3 = true;
    pbVar9 = pbVar8 + 2;
  }
  else {
    bVar3 = false;
    if (bVar1 == 0x2b) {
      uVar7 = (ulong)*pbVar9;
      pbVar9 = pbVar8 + 2;
    }
  }
  if ((param_4 & 0xffffffef) != 0) {
    uVar13 = (ulong)(int)param_4;
    uVar11 = 0;
    if (uVar13 != 0) {
      uVar11 = 0xffffffffffffffff / uVar13;
    }
    uVar12 = ~((int)uVar11 * param_4);
    goto LAB_710080d8f4;
  }
  if ((int)uVar7 == 0x30) {
    if ((*pbVar9 & 0xdf) == 0x58) {
      uVar7 = (ulong)pbVar9[1];
      uVar13 = 0x10;
      pbVar9 = pbVar9 + 2;
      param_4 = 0x10;
      uVar12 = 0xf;
      uVar11 = 0xfffffffffffffff;
      goto LAB_710080d8f4;
    }
    if (param_4 == 0) {
      uVar13 = 8;
      uVar12 = 7;
      param_4 = 8;
      uVar11 = 0x1fffffffffffffff;
      goto LAB_710080d8f4;
    }
  }
  else if (param_4 == 0) {
    uVar13 = 10;
    uVar12 = 5;
    param_4 = 10;
    uVar11 = 0x1999999999999999;
    goto LAB_710080d8f4;
  }
  uVar13 = 0x10;
  uVar12 = 0xf;
  param_4 = 0x10;
  uVar11 = 0xfffffffffffffff;
LAB_710080d8f4:
  iVar10 = 0;
  uVar5 = 0;
  do {
    iVar6 = (int)uVar7;
    uVar2 = iVar6 - 0x30;
    if (9 < uVar2) {
      if (iVar6 - 0x41U < 0x1a) {
        uVar2 = iVar6 - 0x37;
      }
      else {
        if (0x19 < iVar6 - 0x61U) {
LAB_710080d96c:
          if (iVar10 == -1) {
            *param_1 = 0x22;
            uVar7 = 0xffffffffffffffff;
            if (param_3 == (undefined8 *)0x0) {
              return 0xffffffffffffffff;
            }
          }
          else {
            uVar7 = -uVar5;
            if (!bVar3) {
              uVar7 = uVar5;
            }
            if (param_3 == (undefined8 *)0x0) {
              return uVar7;
            }
            if (iVar10 == 0) {
              *param_3 = param_2;
              return uVar7;
            }
          }
          *param_3 = pbVar9 + -1;
          return uVar7;
        }
        uVar2 = iVar6 - 0x57;
      }
    }
    if ((int)param_4 <= (int)uVar2) goto LAB_710080d96c;
    bVar4 = iVar10 != -1;
    iVar10 = -1;
    if ((uVar5 <= uVar11 && bVar4) && (uVar5 != uVar11 || (int)uVar2 <= (int)uVar12)) {
      iVar10 = 1;
      uVar5 = (long)(int)uVar2 + uVar5 * uVar13;
    }
    uVar7 = (ulong)*pbVar9;
    pbVar9 = pbVar9 + 1;
  } while( true );
}



// ===== FUN_710080da60 @ 710080da60 (size=52) =====

void FUN_710080da60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_7100834b00();
  FUN_710080d8a0(param_1,param_2,param_3,param_4);
  return;
}



// ===== FUN_710080daa0 @ 710080daa0 (size=64) =====

void FUN_710080daa0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_7100834b00();
  FUN_710080d8a0(uVar1,param_1,param_2,param_3);
  return;
}



// ===== FUN_710080e4e0 @ 710080e4e0 (size=56) =====

undefined1 * FUN_710080e4e0(int param_1)

{
  undefined *puVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 uVar8;
  
  lVar7 = FUN_7100834b00();
  pcVar4 = pcRam0000007100ae71c0;
  puVar1 = *(undefined **)(lVar7 + 0x40);
  if (*(undefined **)(lVar7 + 0x40) == (undefined *)0x0) {
    puVar1 = &DAT_7100af4978;
  }
  switch(param_1) {
  case 0:
    return puVar1 + 0x162;
  case 1:
    return PTR_s__a__b__e__H__M__S__Y_7100ae7370;
  case 2:
    return PTR_s__m__d__y_7100ae7368;
  case 3:
    return PTR_s__H__M__S_7100ae7360;
  case 4:
    return PTR_s__I__M__S__p_7100ae73f8;
  case 5:
    return PTR_DAT_7100ae7378;
  case 6:
    return PTR_DAT_7100ae7380;
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
    return (&PTR_s_Sunday_7100ae7328)[param_1 + -7];
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
    return (&PTR_DAT_7100ae72f0)[param_1 + -0xe];
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
    return (&PTR_s_January_7100ae7290)[param_1 + -0x15];
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
    return (&PTR_DAT_7100ae7230)[param_1 + -0x21];
  case 0x2d:
    return PTR_DAT_7100ae7400;
  case 0x2e:
    return PTR_DAT_7100ae7408;
  case 0x2f:
    return PTR_DAT_7100ae7410;
  case 0x30:
    return PTR_DAT_7100ae7418;
  case 0x31:
    return PTR_DAT_7100ae7420;
  case 0x32:
    return PTR_s___7100ae7428;
  case 0x33:
    return PTR_DAT_7100ae7430;
  case 0x34:
    return PTR_s___yY__7100ae7198;
  case 0x35:
    return PTR_s___nN__7100ae71a0;
  case 0x36:
    return PTR_DAT_7100ae71a8;
  case 0x37:
    return PTR_DAT_7100ae71b0;
  case 0x38:
    if (*pcRam0000007100ae71c0 != '\0') {
      lVar7 = FUN_710080fb40(puVar1);
      cVar2 = *(char *)(lVar7 + 0x52);
      lVar7 = FUN_710080fb40(puVar1);
      cVar3 = *(char *)(lVar7 + 0x54);
      if (cVar3 == cVar2) {
        if (cVar3 == -1) {
          iVar5 = FUN_710080aec0(pcVar4,uRam0000007100ae71c8);
          if (iVar5 != 0) goto code_r0x00710080e360;
          uVar8 = 0x2e;
        }
        else {
          uVar8 = 0x2b;
          if (cVar3 != '\0') {
            uVar8 = 0x2d;
          }
        }
        iVar5 = FUN_710081ce00(pcVar4);
        puVar6 = (undefined1 *)FUN_71008141e0(puRam0000007100d22ed0,(long)(iVar5 + 2));
        if (puVar6 != (undefined1 *)0x0) {
          puRam0000007100d22ed0 = puVar6;
          *puVar6 = uVar8;
          FUN_710081b7c0(puVar6 + 1,pcVar4);
          return puRam0000007100d22ed0;
        }
        if (puRam0000007100d22ed0 != (undefined1 *)0x0) {
          FUN_710081c200();
          puRam0000007100d22ed0 = (undefined1 *)0x0;
        }
      }
code_r0x00710080e360:
      return &DAT_7100853d20;
    }
    break;
  case 0x39:
    return PTR_DAT_7100ae73f0;
  default:
    if (param_1 - 0x186a1U < 6) {
      return puVar1 + (ulong)(param_1 - 100000) * 0x20;
    }
    break;
  case 0x54:
    return PTR_s__a__b__e__H__M__S__Z__Y_7100ae7388;
  }
  return &DAT_7100853d20;
}



// ===== FUN_710080e520 @ 710080e520 (size=72) =====

int * FUN_710080e520(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = param_1;
  if (*param_1 != 0) {
    do {
      piVar1 = piVar1 + 1;
    } while (*piVar1 != 0);
    if (piVar1 < param_1) {
      return (int *)0x0;
    }
  }
  do {
    if (*piVar1 == param_2) {
      return piVar1;
    }
    piVar1 = piVar1 + -1;
  } while (param_1 <= piVar1);
  return (int *)0x0;
}



// ===== FUN_710080e580 @ 710080e580 (size=28) =====

void FUN_710080e580(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_7100836420(uVar1,param_1);
  return;
}



// ===== FUN_710080e5a0 @ 710080e5a0 (size=164) =====

/* WARNING: Removing unreachable block (ram,0x00710080e5c8) */
/* WARNING: Removing unreachable block (ram,0x00710080e5e0) */

void FUN_710080e5a0(void)

{
  undefined **ppuVar1;
  ulong uVar2;
  
  FUN_7100836798();
  uVar2 = 0;
  do {
    ppuVar1 = &PTR_FUN_7100adb000 + uVar2;
    uVar2 = uVar2 + 1;
    (*(code *)*ppuVar1)();
  } while (uVar2 < 0x54);
  return;
}



// ===== FUN_710080e660 @ 710080e660 (size=44) =====

void FUN_710080e660(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_7100835d80(uVar1,param_1,param_2);
  return;
}



// ===== FUN_710080e6a0 @ 710080e6a0 (size=136) =====

void FUN_710080e6a0(ulong *param_1,char *param_2,long param_3)

{
  ulong *puVar1;
  char cVar2;
  ulong uVar3;
  
  if (((ulong)param_1 & 7) == 0) {
    uVar3 = *param_1 + 0xfefefefefefefeff & (*param_1 ^ 0xffffffffffffffff);
    while ((uVar3 & 0x8080808080808080) == 0) {
      param_1 = param_1 + 1;
      uVar3 = *param_1 + 0xfefefefefefefeff & (*param_1 ^ 0xffffffffffffffff);
    }
  }
  cVar2 = (char)*param_1;
  while (cVar2 != '\0') {
    param_1 = (ulong *)((long)param_1 + 1);
    cVar2 = *(char *)param_1;
  }
  puVar1 = (ulong *)((long)param_1 + param_3);
  if (param_3 != 0) {
    for (; cVar2 = *param_2, *(char *)param_1 = cVar2, cVar2 != '\0'; param_2 = param_2 + 1) {
      param_1 = (ulong *)((long)param_1 + 1);
      if (puVar1 == param_1) {
        *(char *)puVar1 = '\0';
        return;
      }
    }
  }
  return;
}



// ===== FUN_710080e740 @ 710080e740 (size=152) =====

uint FUN_710080e740(undefined8 param_1,code *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = 0;
  do {
    if (0 < (int)*(uint *)(param_3 + 1)) {
      lVar2 = param_3[2];
      lVar3 = lVar2 + (ulong)*(uint *)(param_3 + 1) * 0xb8;
      do {
        if ((1 < *(ushort *)(lVar2 + 0x10)) && (*(short *)(lVar2 + 0x12) != -1)) {
          uVar1 = (*param_2)(param_1,lVar2);
          uVar4 = uVar4 | uVar1;
        }
        lVar2 = lVar2 + 0xb8;
      } while (lVar2 != lVar3);
    }
    param_3 = (long *)*param_3;
  } while (param_3 != (long *)0x0);
  return uVar4;
}



// ===== FUN_710080e7e0 @ 710080e7e0 (size=20) =====

void FUN_710080e7e0(void)

{
  FUN_7100834b00();
  FUN_7100834ae0();
  return;
}



// ===== FUN_710080e800 @ 710080e800 (size=180) =====

long FUN_710080e800(undefined8 param_1,long param_2,ulong param_3,long param_4,code *param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_3 != 0 && param_4 != 0) {
    uVar3 = 0;
    do {
      while( true ) {
        uVar2 = uVar3 + param_3 >> 1;
        lVar4 = param_2 + param_4 * uVar2;
        iVar1 = (*param_5)(param_1,lVar4);
        if (-1 < iVar1) break;
        param_3 = uVar2;
        if (uVar2 <= uVar3) {
          return 0;
        }
      }
      if (iVar1 == 0) {
        return lVar4;
      }
      uVar3 = uVar2 + 1;
    } while (uVar3 < param_3);
  }
  return 0;
}



// ===== FUN_710080e8c0 @ 710080e8c0 (size=20) =====

void FUN_710080e8c0(void)

{
  FUN_7100834b00();
  FUN_710081bae0();
  return;
}



// ===== FUN_710080e8e0 @ 710080e8e0 (size=20) =====

void FUN_710080e8e0(void)

{
  FUN_7100834b00();
  return;
}



// ===== FUN_710080e900 @ 710080e900 (size=8) =====

void FUN_710080e900(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_710080f900(param_1,param_2,param_3 << 2);
  return;
}



// ===== FUN_710080e920 @ 710080e920 (size=180) =====

int FUN_710080e920(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  lVar2 = FUN_7100834b00();
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x48) == 0)) {
    FUN_710080d840();
  }
  if ((*(uint *)(param_1 + 0xb4) & 1) == 0) {
    if ((*(ushort *)(param_1 + 0x10) >> 9 & 1) != 0) {
      return (int)*(short *)(param_1 + 0x12);
    }
    FUN_7100836200(param_1 + 0xa0);
  }
  if (*(short *)(param_1 + 0x10) == 0) {
    puVar3 = (undefined4 *)FUN_7100834b00();
    *puVar3 = 9;
    iVar4 = -1;
    uVar1 = *(uint *)(param_1 + 0xb4);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xb4);
    iVar4 = (int)*(short *)(param_1 + 0x12);
  }
  if (((uVar1 & 1) == 0) && ((*(ushort *)(param_1 + 0x10) >> 9 & 1) == 0)) {
    FUN_7100836220(param_1 + 0xa0);
    return iVar4;
  }
  return iVar4;
}



// ===== FUN_710080e9e0 @ 710080e9e0 (size=44) =====

void FUN_710080e9e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_7100814000(uVar1,param_1,param_2);
  return;
}



// ===== FUN_710080ea20 @ 710080ea20 (size=164) =====

undefined8 FUN_710080ea20(undefined4 *param_1,undefined1 *param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 *local_b8;
  int local_ac;
  undefined4 local_a8;
  undefined1 *local_a0;
  int local_98;
  undefined4 local_4;
  
  if (param_3 < 0x80000000) {
    local_ac = (int)param_3 - (uint)(param_3 != 0);
    local_a8 = 0xffff0208;
    local_4 = 0;
    local_b8 = param_2;
    local_a0 = param_2;
    local_98 = local_ac;
    uVar1 = FUN_7100817928(param_1,&local_b8,param_4);
    if ((int)uVar1 + 1 < 0 != SCARRY4((int)uVar1,1)) {
      *param_1 = 0x8b;
    }
    if (param_3 != 0) {
      *local_b8 = 0;
    }
  }
  else {
    *param_1 = 0x8b;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// ===== FUN_710080eae0 @ 710080eae0 (size=72) =====

void FUN_710080eae0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_710080ea20(uVar1,param_1,param_2,param_3);
  return;
}



// ===== FUN_710080eb40 @ 710080eb40 (size=204) =====

undefined1 * FUN_710080eb40(ulong param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  pauVar6 = (undefined1 (*) [16])(param_1 & 0xffffffffffffffe0);
  if ((param_1 & 0x1f) != 0) {
    auVar12 = *pauVar6;
    auVar10 = *pauVar6;
    pauVar5 = pauVar6 + 1;
    pauVar6 = pauVar6 + 2;
    auVar8 = NEON_cmeq(auVar10,0,1);
    auVar10[1] = param_2;
    auVar10[0] = param_2;
    auVar10[2] = param_2;
    auVar10[3] = param_2;
    auVar10[4] = param_2;
    auVar10[5] = param_2;
    auVar10[6] = param_2;
    auVar10[7] = param_2;
    auVar10[8] = param_2;
    auVar10[9] = param_2;
    auVar10[10] = param_2;
    auVar10[0xb] = param_2;
    auVar10[0xc] = param_2;
    auVar10[0xd] = param_2;
    auVar10[0xe] = param_2;
    auVar10[0xf] = param_2;
    auVar10 = NEON_cmeq(auVar12,auVar10,1);
    auVar9 = NEON_cmeq(*pauVar5,0,1);
    auVar12[1] = param_2;
    auVar12[0] = param_2;
    auVar12[2] = param_2;
    auVar12[3] = param_2;
    auVar12[4] = param_2;
    auVar12[5] = param_2;
    auVar12[6] = param_2;
    auVar12[7] = param_2;
    auVar12[8] = param_2;
    auVar12[9] = param_2;
    auVar12[10] = param_2;
    auVar12[0xb] = param_2;
    auVar12[0xc] = param_2;
    auVar12[0xd] = param_2;
    auVar12[0xe] = param_2;
    auVar12[0xf] = param_2;
    auVar12 = NEON_cmeq(*pauVar5,auVar12,1);
    auVar11._8_4_ = 0x80601806;
    auVar11._0_8_ = 0x8060180680601806;
    auVar11._12_4_ = 0x80601806;
    auVar10 = NEON_bif(auVar8,auVar10,auVar11,1);
    auVar8._8_4_ = 0x80601806;
    auVar8._0_8_ = 0x8060180680601806;
    auVar8._12_4_ = 0x80601806;
    auVar12 = NEON_bif(auVar9,auVar12,auVar8,1);
    uVar7 = auVar10._0_8_ & 0xc0300c03c0300c03;
    uVar7 = CONCAT17((auVar12[0xc] & 3) + (auVar12[0xd] & 0xc) +
                     (auVar12[0xe] & 0x30) + (auVar12[0xf] & 0xc0),
                     CONCAT16((auVar12[8] & 3) + (auVar12[9] & 0xc) +
                              (auVar12[10] & 0x30) + (auVar12[0xb] & 0xc0),
                              CONCAT15((auVar12[4] & 3) + (auVar12[5] & 0xc) +
                                       (auVar12[6] & 0x30) + (auVar12[7] & 0xc0),
                                       CONCAT14((auVar12[0] & 3) + (auVar12[1] & 0xc) +
                                                (auVar12[2] & 0x30) + (auVar12[3] & 0xc0),
                                                CONCAT13((auVar10[0xc] & 3) + (auVar10[0xd] & 0xc) +
                                                         (auVar10[0xe] & 0x30) +
                                                         (auVar10[0xf] & 0xc0),
                                                         CONCAT12((auVar10[8] & 3) +
                                                                  (auVar10[9] & 0xc) +
                                                                  (auVar10[10] & 0x30) +
                                                                  (auVar10[0xb] & 0xc0),
                                                                  CONCAT11((char)(uVar7 >> 0x20) +
                                                                           (char)(uVar7 >> 0x28) +
                                                                           (char)(uVar7 >> 0x30) +
                                                                           (char)(uVar7 >> 0x38),
                                                                           (char)uVar7 +
                                                                           (char)(uVar7 >> 8) +
                                                                           (char)(uVar7 >> 0x10) +
                                                                           (char)(uVar7 >> 0x18)))))
                                      ))) &
            (0xffffffffffffffffU >> ((param_1 & 0x1f) * -2 & 0x3f) ^ 0xffffffffffffffff);
    if (uVar7 != 0) goto LAB_710080ebf0;
  }
  do {
    auVar12 = *pauVar6;
    auVar10 = *pauVar6;
    pauVar5 = pauVar6 + 1;
    pauVar6 = pauVar6 + 2;
    auVar9[1] = param_2;
    auVar9[0] = param_2;
    auVar9[2] = param_2;
    auVar9[3] = param_2;
    auVar9[4] = param_2;
    auVar9[5] = param_2;
    auVar9[6] = param_2;
    auVar9[7] = param_2;
    auVar9[8] = param_2;
    auVar9[9] = param_2;
    auVar9[10] = param_2;
    auVar9[0xb] = param_2;
    auVar9[0xc] = param_2;
    auVar9[0xd] = param_2;
    auVar9[0xe] = param_2;
    auVar9[0xf] = param_2;
    auVar11 = NEON_cmeq(auVar10,auVar9,1);
    auVar2[1] = param_2;
    auVar2[0] = param_2;
    auVar2[2] = param_2;
    auVar2[3] = param_2;
    auVar2[4] = param_2;
    auVar2[5] = param_2;
    auVar2[6] = param_2;
    auVar2[7] = param_2;
    auVar2[8] = param_2;
    auVar2[9] = param_2;
    auVar2[10] = param_2;
    auVar2[0xb] = param_2;
    auVar2[0xc] = param_2;
    auVar2[0xd] = param_2;
    auVar2[0xe] = param_2;
    auVar2[0xf] = param_2;
    auVar8 = NEON_cmeq(*pauVar5,auVar2,1);
    auVar10 = NEON_cmhs(auVar11,auVar12,1);
    auVar12 = NEON_cmhs(auVar8,*pauVar5,1);
    auVar13[0] = auVar10[0] | auVar12[0];
    auVar13[1] = auVar10[1] | auVar12[1];
    auVar13[2] = auVar10[2] | auVar12[2];
    auVar13[3] = auVar10[3] | auVar12[3];
    auVar13[4] = auVar10[4] | auVar12[4];
    auVar13[5] = auVar10[5] | auVar12[5];
    auVar13[6] = auVar10[6] | auVar12[6];
    auVar13[7] = auVar10[7] | auVar12[7];
    auVar13[8] = auVar10[8] | auVar12[8];
    auVar13[9] = auVar10[9] | auVar12[9];
    auVar13[10] = auVar10[10] | auVar12[10];
    auVar13[0xb] = auVar10[0xb] | auVar12[0xb];
    auVar13[0xc] = auVar10[0xc] | auVar12[0xc];
    auVar13[0xd] = auVar10[0xd] | auVar12[0xd];
    auVar13[0xe] = auVar10[0xe] | auVar12[0xe];
    auVar13[0xf] = auVar10[0xf] | auVar12[0xf];
    auVar9 = NEON_umaxp(auVar13,auVar13,1);
  } while (auVar9._0_8_ == 0);
  auVar3._8_4_ = 0x80601806;
  auVar3._0_8_ = 0x8060180680601806;
  auVar3._12_4_ = 0x80601806;
  auVar10 = NEON_bif(auVar10,auVar11,auVar3,1);
  auVar4._8_4_ = 0x80601806;
  auVar4._0_8_ = 0x8060180680601806;
  auVar4._12_4_ = 0x80601806;
  auVar12 = NEON_bif(auVar12,auVar8,auVar4,1);
  uVar7 = auVar10._0_8_ & 0xc0300c03c0300c03;
  uVar7 = CONCAT17((auVar12[0xc] & 3) + (auVar12[0xd] & 0xc) +
                   (auVar12[0xe] & 0x30) + (auVar12[0xf] & 0xc0),
                   CONCAT16((auVar12[8] & 3) + (auVar12[9] & 0xc) +
                            (auVar12[10] & 0x30) + (auVar12[0xb] & 0xc0),
                            CONCAT15((auVar12[4] & 3) + (auVar12[5] & 0xc) +
                                     (auVar12[6] & 0x30) + (auVar12[7] & 0xc0),
                                     CONCAT14((auVar12[0] & 3) + (auVar12[1] & 0xc) +
                                              (auVar12[2] & 0x30) + (auVar12[3] & 0xc0),
                                              CONCAT13((auVar10[0xc] & 3) + (auVar10[0xd] & 0xc) +
                                                       (auVar10[0xe] & 0x30) + (auVar10[0xf] & 0xc0)
                                                       ,CONCAT12((auVar10[8] & 3) +
                                                                 (auVar10[9] & 0xc) +
                                                                 (auVar10[10] & 0x30) +
                                                                 (auVar10[0xb] & 0xc0),
                                                                 CONCAT11((char)(uVar7 >> 0x20) +
                                                                          (char)(uVar7 >> 0x28) +
                                                                          (char)(uVar7 >> 0x30) +
                                                                          (char)(uVar7 >> 0x38),
                                                                          (char)uVar7 +
                                                                          (char)(uVar7 >> 8) +
                                                                          (char)(uVar7 >> 0x10) +
                                                                          (char)(uVar7 >> 0x18))))))
                           ));
LAB_710080ebf0:
  uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
  uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
  uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
  uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
  uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
  puVar1 = pauVar6[-2] + (uVar7 >> 1);
  if ((uVar7 & 1) != 0) {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



// ===== FUN_710080ec20 @ 710080ec20 (size=480) =====

undefined8 FUN_710080ec20(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  
  bVar1 = *param_2;
  if (bVar1 == 0x6c) {
    iVar2 = FUN_710080aec0(param_2,"lower");
    uVar3 = 7;
  }
  else if (bVar1 < 0x6d) {
    if (bVar1 == 99) {
      iVar2 = FUN_710080aec0(param_2,"cntrl");
      uVar3 = 4;
    }
    else if (bVar1 < 100) {
      if (bVar1 == 0x61) {
        iVar2 = FUN_710080aec0(param_2,"alnum");
        if (iVar2 == 0) {
          return 1;
        }
        iVar2 = FUN_710080aec0(param_2,"alpha");
        uVar3 = 2;
      }
      else {
        if (bVar1 != 0x62) goto LAB_710080ece0;
        iVar2 = FUN_710080aec0(param_2,"blank");
        uVar3 = 3;
      }
    }
    else if (bVar1 == 100) {
      iVar2 = FUN_710080aec0(param_2,"digit");
      uVar3 = 5;
    }
    else {
      if (bVar1 != 0x67) goto LAB_710080ece0;
      iVar2 = FUN_710080aec0(param_2,"graph");
      uVar3 = 6;
    }
  }
  else if (bVar1 == 0x75) {
    iVar2 = FUN_710080aec0(param_2,"upper");
    uVar3 = 0xb;
  }
  else if (bVar1 < 0x76) {
    if (bVar1 == 0x70) {
      iVar2 = FUN_710080aec0(param_2,"print");
      if (iVar2 == 0) {
        return 8;
      }
      iVar2 = FUN_710080aec0(param_2,"punct");
      uVar3 = 9;
    }
    else {
      if (bVar1 != 0x73) goto LAB_710080ece0;
      iVar2 = FUN_710080aec0(param_2,"space");
      uVar3 = 10;
    }
  }
  else {
    if (bVar1 != 0x78) goto LAB_710080ece0;
    iVar2 = FUN_710080aec0(param_2,"xdigit");
    uVar3 = 0xc;
  }
  if (iVar2 == 0) {
    return uVar3;
  }
LAB_710080ece0:
  *param_1 = 0x16;
  return 0;
}



// ===== FUN_710080ee00 @ 710080ee00 (size=28) =====

void FUN_710080ee00(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_710080ec20(uVar1,param_1);
  return;
}



// ===== FUN_710080ee20 @ 710080ee20 (size=44) =====

void FUN_710080ee20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_7100828340(uVar1,param_1,param_2);
  return;
}



// ===== FUN_710080ee60 @ 710080ee60 (size=52) =====

void FUN_710080ee60(int *param_1,int *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  do {
    if (param_3 == 0) {
      return;
    }
    iVar1 = *param_2;
    param_3 = param_3 + -1;
    piVar3 = param_1 + 1;
    *param_1 = iVar1;
    param_2 = param_2 + 1;
    param_1 = piVar3;
  } while (iVar1 != 0);
  lVar2 = 0;
  if (param_3 != 0) {
    do {
      piVar3[lVar2] = 0;
      lVar2 = lVar2 + 1;
    } while (param_3 != lVar2);
  }
  return;
}



// ===== FUN_710080eea0 @ 710080eea0 (size=12) =====

long FUN_710080eea0(long param_1)

{
  long lVar1;
  
  lVar1 = -param_1;
  if (-1 < param_1) {
    lVar1 = param_1;
  }
  return lVar1;
}



// ===== FUN_710080eec0 @ 710080eec0 (size=2380) =====

/* WARNING: Type propagation algorithm not settling */

void FUN_710080eec0(undefined8 *param_1,ulong param_2,ulong param_3,code *param_4)

{
  undefined1 uVar1;
  bool bVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  int iVar21;
  undefined8 *local_a0;
  ulong local_98;
  undefined8 *local_88;
  ulong auStack_80 [16];
  
  cVar4 = param_3 != 8;
  if ((((ulong)param_1 | param_3) & 7) != 0) {
    cVar4 = '\x02';
  }
  iVar21 = (int)param_3;
  local_98 = 0;
  uVar15 = (ulong)(long)iVar21 >> 3;
LAB_710080ef20:
  puVar11 = (undefined8 *)((long)param_1 + param_2 * param_3);
  puVar3 = param_1;
joined_r0x00710080ef30:
  puVar14 = (undefined8 *)((long)puVar3 + param_3);
  if (6 < param_2) {
    puVar17 = (undefined8 *)((long)puVar3 + (param_2 >> 1) * param_3);
    puVar19 = (undefined8 *)((long)puVar3 + (param_2 - 1) * param_3);
    if (param_2 != 7) {
      puVar20 = puVar3;
      puVar18 = puVar19;
      if (0x28 < param_2) {
        lVar8 = (param_2 >> 3) * param_3;
        puVar20 = (undefined8 *)((long)puVar3 + lVar8);
        iVar5 = (*param_4)(puVar3,puVar20);
        if (iVar5 < 0) {
          iVar5 = (*param_4)(puVar20,(long)puVar3 + lVar8 * 2);
          if (-1 < iVar5) {
            iVar5 = (*param_4)(puVar3,(long)puVar3 + lVar8 * 2);
            goto joined_r0x00710080f780;
          }
LAB_710080f5a0:
          local_a0 = (undefined8 *)((long)puVar17 - lVar8);
          iVar5 = (*param_4)(local_a0,puVar17);
          if (iVar5 < 0) goto LAB_710080f7a8;
LAB_710080f5c0:
          local_88 = (undefined8 *)((long)puVar17 + lVar8);
          iVar5 = (*param_4)(puVar17);
          if (iVar5 < 1) {
            iVar5 = (*param_4)(local_a0,local_88);
            goto joined_r0x00710080f6f0;
          }
LAB_710080f5d0:
          puVar10 = (undefined8 *)((long)puVar19 + lVar8 * -2);
          puVar18 = (undefined8 *)((long)puVar10 + lVar8);
          iVar5 = (*param_4)(puVar10,puVar18);
        }
        else {
          iVar5 = (*param_4)(puVar20);
          if (0 < iVar5) goto LAB_710080f5a0;
          iVar5 = (*param_4)(puVar3,(long)puVar3 + lVar8 * 2);
joined_r0x00710080f780:
          if (iVar5 < 0) {
            puVar20 = (undefined8 *)((long)puVar3 + lVar8 * 2);
            goto LAB_710080f5a0;
          }
          local_a0 = (undefined8 *)((long)puVar17 - lVar8);
          iVar5 = (*param_4)(local_a0,puVar17);
          puVar20 = puVar3;
          if (-1 < iVar5) goto LAB_710080f5c0;
LAB_710080f7a8:
          iVar5 = (*param_4)(puVar17,(undefined8 *)((long)puVar17 + lVar8));
          if (iVar5 < 0) goto LAB_710080f5d0;
          iVar5 = (*param_4)(local_a0,(undefined8 *)((long)puVar17 + lVar8));
joined_r0x00710080f6f0:
          if (-1 < iVar5) {
            local_88 = (undefined8 *)((long)puVar17 + lVar8);
            puVar17 = local_88;
            goto LAB_710080f5d0;
          }
          puVar10 = (undefined8 *)((long)puVar19 + lVar8 * -2);
          puVar18 = (undefined8 *)((long)puVar10 + lVar8);
          iVar5 = (*param_4)(puVar10,puVar18);
          puVar17 = local_a0;
        }
        if (iVar5 < 0) {
          iVar5 = (*param_4)(puVar18,puVar19);
          if ((-1 < iVar5) && (iVar5 = (*param_4)(puVar10,puVar19), puVar18 = puVar10, iVar5 < 0)) {
            puVar18 = puVar19;
          }
        }
        else {
          iVar5 = (*param_4)(puVar18);
          if ((iVar5 < 1) && (iVar5 = (*param_4)(puVar10,puVar19), puVar18 = puVar10, -1 < iVar5)) {
            puVar18 = puVar19;
          }
        }
      }
      iVar5 = (*param_4)(puVar20,puVar17);
      if (iVar5 < 0) {
        iVar5 = (*param_4)(puVar17,puVar18);
        if (-1 < iVar5) {
          iVar5 = (*param_4)(puVar20,puVar18);
joined_r0x00710080f1f8:
          puVar17 = puVar20;
          if (-1 < iVar5) goto joined_r0x00710080f200;
        }
      }
      else {
        iVar5 = (*param_4)(puVar17);
        if (iVar5 < 1) {
          iVar5 = (*param_4)(puVar20,puVar18);
          goto joined_r0x00710080f1f8;
        }
      }
    }
    puVar18 = puVar17;
joined_r0x00710080f200:
    if (cVar4 == '\0') {
      uVar6 = *puVar3;
      *puVar3 = *puVar18;
      *puVar18 = uVar6;
    }
    else {
      uVar7 = (ulong)iVar21;
      lVar8 = 0;
      if (cVar4 == '\x01') {
        do {
          uVar6 = puVar3[lVar8];
          puVar3[lVar8] = puVar18[lVar8];
          puVar18[lVar8] = uVar6;
          lVar8 = lVar8 + 1;
        } while (0 < (long)((uVar7 >> 3) - lVar8));
      }
      else {
        do {
          uVar7 = uVar7 - 1;
          uVar1 = *(undefined1 *)((long)puVar3 + lVar8);
          *(undefined1 *)((long)puVar3 + lVar8) = *(undefined1 *)((long)puVar18 + lVar8);
          *(undefined1 *)((long)puVar18 + lVar8) = uVar1;
          lVar8 = lVar8 + 1;
        } while (0 < (long)uVar7);
      }
    }
    bVar2 = false;
    puVar17 = puVar14;
    puVar20 = puVar19;
    local_a0 = puVar14;
LAB_710080efa4:
    do {
      if (puVar20 < puVar17) goto LAB_710080efac;
      iVar5 = (*param_4)(puVar17,puVar3);
      if (iVar5 < 1) {
        if (iVar5 == 0) {
          if (cVar4 == '\0') {
            uVar6 = *local_a0;
            *local_a0 = *puVar17;
            *puVar17 = uVar6;
          }
          else {
            uVar7 = (ulong)iVar21;
            lVar8 = 0;
            if (cVar4 == '\x01') {
              do {
                uVar6 = local_a0[lVar8];
                local_a0[lVar8] = puVar17[lVar8];
                puVar17[lVar8] = uVar6;
                lVar8 = lVar8 + 1;
              } while (0 < (long)((uVar7 >> 3) - lVar8));
            }
            else {
              do {
                uVar7 = uVar7 - 1;
                uVar1 = *(undefined1 *)((long)local_a0 + lVar8);
                *(undefined1 *)((long)local_a0 + lVar8) = *(undefined1 *)((long)puVar17 + lVar8);
                *(undefined1 *)((long)puVar17 + lVar8) = uVar1;
                lVar8 = lVar8 + 1;
              } while (0 < (long)uVar7);
            }
          }
          puVar17 = (undefined8 *)((long)puVar17 + param_3);
          bVar2 = true;
          local_a0 = (undefined8 *)((long)local_a0 + param_3);
          goto LAB_710080efa4;
        }
      }
      else {
        while (iVar5 = (*param_4)(puVar20,puVar3), -1 < iVar5) {
          if (iVar5 == 0) {
            if (cVar4 == '\0') {
              uVar6 = *puVar20;
              *puVar20 = *puVar19;
              *puVar19 = uVar6;
            }
            else {
              lVar13 = (long)iVar21;
              lVar8 = 0;
              if (cVar4 == '\x01') {
                do {
                  uVar6 = puVar20[lVar8];
                  puVar20[lVar8] = puVar19[lVar8];
                  puVar19[lVar8] = uVar6;
                  lVar13 = lVar8 + 1;
                  if ((long)(uVar15 - lVar13) < 1) break;
                  uVar6 = puVar20[lVar13];
                  puVar20[lVar13] = puVar19[lVar13];
                  puVar19[lVar13] = uVar6;
                  lVar8 = lVar8 + 2;
                } while (0 < (long)(uVar15 - lVar8));
              }
              else {
                do {
                  lVar13 = lVar13 + -1;
                  uVar1 = *(undefined1 *)((long)puVar20 + lVar8);
                  *(undefined1 *)((long)puVar20 + lVar8) = *(undefined1 *)((long)puVar19 + lVar8);
                  *(undefined1 *)((long)puVar19 + lVar8) = uVar1;
                  lVar8 = lVar8 + 1;
                } while (0 < lVar13);
              }
            }
            puVar19 = (undefined8 *)((long)puVar19 - param_3);
            bVar2 = true;
          }
          puVar20 = (undefined8 *)((long)puVar20 - param_3);
          if (puVar20 < puVar17) goto LAB_710080efac;
        }
        if (cVar4 == '\0') {
          uVar6 = *puVar17;
          *puVar17 = *puVar20;
          *puVar20 = uVar6;
        }
        else {
          lVar13 = (long)iVar21;
          lVar8 = 0;
          if (cVar4 == '\x01') {
            do {
              uVar6 = puVar17[lVar8];
              puVar17[lVar8] = puVar20[lVar8];
              puVar20[lVar8] = uVar6;
              lVar13 = lVar8 + 1;
              if ((long)(uVar15 - lVar13) < 1) break;
              uVar6 = puVar17[lVar13];
              puVar17[lVar13] = puVar20[lVar13];
              puVar20[lVar13] = uVar6;
              lVar8 = lVar8 + 2;
            } while (0 < (long)(uVar15 - lVar8));
          }
          else {
            do {
              lVar13 = lVar13 + -1;
              uVar1 = *(undefined1 *)((long)puVar17 + lVar8);
              *(undefined1 *)((long)puVar17 + lVar8) = *(undefined1 *)((long)puVar20 + lVar8);
              *(undefined1 *)((long)puVar20 + lVar8) = uVar1;
              lVar8 = lVar8 + 1;
            } while (0 < lVar13);
          }
        }
        puVar20 = (undefined8 *)((long)puVar20 - param_3);
        bVar2 = true;
      }
      puVar17 = (undefined8 *)((long)puVar17 + param_3);
    } while( true );
  }
  for (; puVar17 = puVar14, puVar14 < puVar11; puVar14 = (undefined8 *)((long)puVar14 + param_3)) {
joined_r0x00710080f068:
    puVar19 = puVar17;
    if (puVar3 < puVar17) {
      do {
        puVar17 = (undefined8 *)((long)puVar19 - param_3);
        iVar5 = (*param_4)(puVar17,puVar19);
        if (iVar5 < 1) break;
        if (cVar4 == '\0') {
          uVar6 = *puVar19;
          *puVar19 = *(undefined8 *)((long)puVar19 + -param_3);
          *(undefined8 *)((long)puVar19 + -param_3) = uVar6;
        }
        else {
          lVar13 = (long)iVar21;
          lVar8 = 0;
          if (cVar4 != '\x01') goto LAB_710080f0c0;
          do {
            uVar6 = puVar19[lVar8];
            puVar19[lVar8] = puVar17[lVar8];
            puVar17[lVar8] = uVar6;
            lVar13 = lVar8 + 1;
            if ((long)(uVar15 - lVar13) < 1) break;
            uVar6 = puVar19[lVar13];
            puVar19[lVar13] = puVar17[lVar13];
            puVar17[lVar13] = uVar6;
            lVar8 = lVar8 + 2;
          } while (0 < (long)(uVar15 - lVar8));
        }
        puVar19 = puVar17;
        if (puVar17 <= puVar3) break;
      } while( true );
    }
  }
  goto joined_r0x00710080f3c0;
LAB_710080efac:
  if (!bVar2) {
    for (; puVar17 = puVar14, puVar14 < puVar11; puVar14 = (undefined8 *)((long)puVar14 + param_3))
    {
joined_r0x00710080f330:
      puVar19 = puVar17;
      if (puVar3 < puVar19) {
        puVar17 = (undefined8 *)((long)puVar19 - param_3);
        iVar5 = (*param_4)(puVar17,puVar19);
        if (iVar5 < 1) goto LAB_710080f3ac;
        if (cVar4 == '\0') {
          uVar6 = *puVar19;
          *puVar19 = *(undefined8 *)((long)puVar19 + -param_3);
          *(undefined8 *)((long)puVar19 + -param_3) = uVar6;
        }
        else {
          lVar13 = (long)iVar21;
          lVar8 = 0;
          if (cVar4 == '\x01') {
            do {
              uVar6 = puVar19[lVar8];
              puVar19[lVar8] = puVar17[lVar8];
              puVar17[lVar8] = uVar6;
              lVar13 = lVar8 + 1;
              if ((long)(uVar15 - lVar13) < 1) break;
              uVar6 = puVar19[lVar13];
              puVar19[lVar13] = puVar17[lVar13];
              puVar17[lVar13] = uVar6;
              lVar8 = lVar8 + 2;
            } while (0 < (long)(uVar15 - lVar8));
          }
          else {
            do {
              lVar13 = lVar13 + -1;
              uVar1 = *(undefined1 *)((long)puVar19 + lVar8);
              *(undefined1 *)((long)puVar19 + lVar8) = *(undefined1 *)((long)puVar17 + lVar8);
              *(undefined1 *)((long)puVar17 + lVar8) = uVar1;
              lVar8 = lVar8 + 1;
            } while (0 < lVar13);
          }
        }
        goto joined_r0x00710080f330;
      }
LAB_710080f3ac:
    }
joined_r0x00710080f3c0:
    if (local_98 == 0) {
      return;
    }
LAB_710080f100:
    local_98 = local_98 - 1;
    param_1 = (undefined8 *)auStack_80[local_98 * 2];
    param_2 = auStack_80[local_98 * 2 + 1];
    goto LAB_710080ef20;
  }
  uVar12 = (long)puVar17 - (long)local_a0;
  uVar7 = (long)local_a0 - (long)puVar3;
  if ((long)uVar12 < (long)local_a0 - (long)puVar3) {
    uVar7 = uVar12;
  }
  if (uVar7 == 0) {
    uVar16 = (long)puVar19 - (long)puVar20;
    uVar7 = (long)puVar11 + (-param_3 - (long)puVar19);
    if (uVar16 < uVar7) {
      uVar7 = uVar16;
    }
    if (uVar7 == 0) goto LAB_710080efe4;
    lVar8 = (long)puVar11 - uVar7;
    if (cVar4 == '\x02') goto LAB_710080f50c;
  }
  else {
    lVar8 = 0;
    uVar16 = (ulong)(int)uVar7;
    if (cVar4 == '\x02') {
      do {
        uVar16 = uVar16 - 1;
        uVar1 = *(undefined1 *)((long)puVar3 + lVar8);
        *(undefined1 *)((long)puVar3 + lVar8) = *(undefined1 *)((long)puVar17 + (lVar8 - uVar7));
        *(undefined1 *)((long)puVar17 + (lVar8 - uVar7)) = uVar1;
        lVar8 = lVar8 + 1;
      } while (0 < (long)uVar16);
      uVar16 = (long)puVar19 - (long)puVar20;
      uVar7 = (long)puVar11 + (-param_3 - (long)puVar19);
      if (uVar16 < uVar7) {
        uVar7 = uVar16;
      }
      if (uVar7 == 0) goto LAB_710080efe4;
      lVar8 = (long)puVar11 - uVar7;
LAB_710080f50c:
      lVar9 = (long)(int)uVar7;
      lVar13 = 0;
      do {
        lVar9 = lVar9 + -1;
        uVar1 = *(undefined1 *)((long)puVar17 + lVar13);
        *(undefined1 *)((long)puVar17 + lVar13) = *(undefined1 *)(lVar8 + lVar13);
        *(undefined1 *)(lVar8 + lVar13) = uVar1;
        lVar13 = lVar13 + 1;
      } while (0 < lVar9);
      goto LAB_710080efe4;
    }
    do {
      uVar6 = puVar3[lVar8];
      puVar3[lVar8] = *(undefined8 *)((long)puVar17 + (lVar8 * 8 - uVar7));
      *(undefined8 *)((long)puVar17 + (lVar8 * 8 - uVar7)) = uVar6;
      lVar8 = lVar8 + 1;
    } while (0 < (long)((uVar16 >> 3) - lVar8));
    uVar16 = (long)puVar19 - (long)puVar20;
    uVar7 = (long)puVar11 + (-param_3 - (long)puVar19);
    if (uVar16 < uVar7) {
      uVar7 = uVar16;
    }
    if (uVar7 == 0) goto LAB_710080efe4;
    lVar8 = (long)puVar11 - uVar7;
  }
  lVar13 = 0;
  do {
    uVar6 = puVar17[lVar13];
    puVar17[lVar13] = *(undefined8 *)(lVar8 + lVar13 * 8);
    *(undefined8 *)(lVar8 + lVar13 * 8) = uVar6;
    lVar13 = lVar13 + 1;
  } while (0 < (long)(((ulong)(long)(int)uVar7 >> 3) - lVar13));
LAB_710080efe4:
  uVar7 = uVar12;
  puVar14 = puVar3;
  param_1 = (undefined8 *)((long)puVar11 - uVar16);
  if (uVar16 <= uVar12) {
    uVar7 = uVar16;
    puVar14 = (undefined8 *)((long)puVar11 - uVar16);
    uVar16 = uVar12;
    param_1 = puVar3;
  }
  if (uVar7 <= param_3) {
    if (uVar16 <= param_3) goto joined_r0x00710080f3c0;
    param_2 = 0;
    if (param_3 != 0) {
      param_2 = uVar16 / param_3;
    }
    goto LAB_710080ef20;
  }
  if (7 < local_98) {
    uVar12 = 0;
    if (param_3 != 0) {
      uVar12 = uVar7 / param_3;
    }
    FUN_710080eec0(puVar14,uVar12,param_3,param_4);
    if (uVar16 <= param_3) goto LAB_710080f100;
    param_2 = 0;
    if (param_3 != 0) {
      param_2 = uVar16 / param_3;
    }
    goto LAB_710080ef20;
  }
  uVar12 = 0;
  if (param_3 != 0) {
    uVar12 = uVar16 / param_3;
  }
  auStack_80[local_98 * 2] = (ulong)param_1;
  auStack_80[local_98 * 2 + 1] = uVar12;
  local_98 = local_98 + 1;
  param_2 = 0;
  if (param_3 != 0) {
    param_2 = uVar7 / param_3;
  }
  puVar11 = (undefined8 *)((long)puVar14 + param_2 * param_3);
  puVar3 = puVar14;
  goto joined_r0x00710080ef30;
LAB_710080f0c0:
  do {
    lVar13 = lVar13 + -1;
    uVar1 = *(undefined1 *)((long)puVar19 + lVar8);
    *(undefined1 *)((long)puVar19 + lVar8) = *(undefined1 *)((long)puVar17 + lVar8);
    *(undefined1 *)((long)puVar17 + lVar8) = uVar1;
    lVar8 = lVar8 + 1;
  } while (0 < lVar13);
  goto joined_r0x00710080f068;
}



// ===== FUN_710080f820 @ 710080f820 (size=28) =====

void FUN_710080f820(void)

{
  code *pcVar1;
  
  FUN_7100806ac0(6);
  FUN_7100833c00(1);
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x710080f838);
  (*pcVar1)();
}



// ===== FUN_710080f840 @ 710080f840 (size=140) =====

/* WARNING: Removing unreachable block (ram,0x00710080f884) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_710080f840(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_7100835bc0(uVar1,param_1,param_2,param_3);
  return;
}



// ===== FUN_710080f8e0 @ 710080f8e0 (size=12) =====

undefined * FUN_710080f8e0(void)

{
  return &DAT_7100af4b58;
}



// ===== FUN_710080f900 @ 710080f900 (size=540) =====

void FUN_710080f900(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  long lVar11;
  bool bVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulong uVar25;
  ulong uVar26;
  
  uVar14 = (long)param_1 + param_3;
  if (param_3 < 0x81) {
    if (0x20 < param_3) {
      uVar17 = *param_2;
      uVar18 = param_2[1];
      uVar19 = param_2[2];
      uVar20 = param_2[3];
      uVar21 = *(undefined8 *)((long)param_2 + (param_3 - 0x20));
      uVar22 = *(undefined8 *)((long)param_2 + (param_3 - 0x18));
      uVar23 = *(undefined8 *)((long)param_2 + (param_3 - 0x10));
      uVar24 = *(undefined8 *)((long)param_2 + (param_3 - 8));
      if (param_3 < 0x41) {
        *param_1 = uVar17;
        param_1[1] = uVar18;
        param_1[2] = uVar19;
        param_1[3] = uVar20;
        *(undefined8 *)(uVar14 - 0x20) = uVar21;
        *(undefined8 *)(uVar14 - 0x18) = uVar22;
        *(undefined8 *)(uVar14 - 0x10) = uVar23;
        *(undefined8 *)(uVar14 - 8) = uVar24;
        return;
      }
      uVar1 = param_2[4];
      uVar4 = param_2[5];
      uVar2 = param_2[6];
      uVar5 = param_2[7];
      if (0x60 < param_3) {
        uVar6 = *(undefined8 *)((long)param_2 + (param_3 - 0x38));
        uVar3 = *(undefined8 *)((long)param_2 + (param_3 - 0x30));
        uVar7 = *(undefined8 *)((long)param_2 + (param_3 - 0x28));
        *(undefined8 *)(uVar14 - 0x40) = *(undefined8 *)((long)param_2 + (param_3 - 0x40));
        *(undefined8 *)(uVar14 - 0x38) = uVar6;
        *(undefined8 *)(uVar14 - 0x30) = uVar3;
        *(undefined8 *)(uVar14 - 0x28) = uVar7;
      }
      *param_1 = uVar17;
      param_1[1] = uVar18;
      param_1[2] = uVar19;
      param_1[3] = uVar20;
      param_1[4] = uVar1;
      param_1[5] = uVar4;
      param_1[6] = uVar2;
      param_1[7] = uVar5;
      *(undefined8 *)(uVar14 - 0x20) = uVar21;
      *(undefined8 *)(uVar14 - 0x18) = uVar22;
      *(undefined8 *)(uVar14 - 0x10) = uVar23;
      *(undefined8 *)(uVar14 - 8) = uVar24;
      return;
    }
    if (0xf < param_3) {
      uVar19 = param_2[1];
      uVar17 = *(undefined8 *)((long)param_2 + (param_3 - 0x10));
      uVar21 = *(undefined8 *)((long)param_2 + (param_3 - 8));
      *param_1 = *param_2;
      param_1[1] = uVar19;
      *(undefined8 *)(uVar14 - 0x10) = uVar17;
      *(undefined8 *)(uVar14 - 8) = uVar21;
      return;
    }
    if (((uint)param_3 >> 3 & 1) != 0) {
      uVar17 = *(undefined8 *)((long)param_2 + (param_3 - 8));
      *param_1 = *param_2;
      *(undefined8 *)(uVar14 - 8) = uVar17;
      return;
    }
    if (((uint)param_3 >> 2 & 1) != 0) {
      uVar8 = *(undefined4 *)((long)param_2 + (param_3 - 4));
      *(undefined4 *)param_1 = *(undefined4 *)param_2;
      *(undefined4 *)(uVar14 - 4) = uVar8;
      return;
    }
    if (param_3 != 0) {
      uVar10 = *(undefined1 *)((long)param_2 + (param_3 - 1));
      uVar9 = *(undefined1 *)((long)param_2 + (param_3 >> 1));
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      *(undefined1 *)((long)param_1 + (param_3 >> 1)) = uVar9;
      *(undefined1 *)(uVar14 - 1) = uVar10;
    }
  }
  else if (param_1 != param_2) {
    if (param_3 <= (ulong)((long)param_1 - (long)param_2)) {
      uVar19 = param_2[1];
      uVar25 = (ulong)param_1 & 0xf;
      puVar15 = (undefined8 *)((ulong)param_1 & 0xfffffffffffffff0);
      uVar17 = *(undefined8 *)((long)param_2 + (0x10 - uVar25));
      uVar18 = *(undefined8 *)((long)param_2 + (0x18 - uVar25));
      *param_1 = *param_2;
      param_1[1] = uVar19;
      uVar19 = *(undefined8 *)((long)param_2 + (0x20 - uVar25));
      uVar20 = *(undefined8 *)((long)param_2 + (0x28 - uVar25));
      uVar21 = *(undefined8 *)((long)param_2 + (0x30 - uVar25));
      uVar22 = *(undefined8 *)((long)param_2 + (0x38 - uVar25));
      puVar13 = (undefined8 *)((long)param_2 + (0x40 - uVar25));
      uVar23 = *puVar13;
      uVar24 = *(undefined8 *)((long)param_2 + (0x48 - uVar25));
      uVar26 = (param_3 + uVar25) - 0x90;
      puVar16 = puVar15;
      if (0x8f < param_3 + uVar25 && uVar26 != 0) {
        do {
          puVar16[2] = uVar17;
          puVar16[3] = uVar18;
          uVar17 = puVar13[2];
          uVar18 = puVar13[3];
          puVar16[4] = uVar19;
          puVar16[5] = uVar20;
          uVar19 = puVar13[4];
          uVar20 = puVar13[5];
          puVar16[6] = uVar21;
          puVar16[7] = uVar22;
          uVar21 = puVar13[6];
          uVar22 = puVar13[7];
          puVar15 = puVar16 + 8;
          *puVar15 = uVar23;
          puVar16[9] = uVar24;
          uVar23 = puVar13[8];
          uVar24 = puVar13[9];
          bVar12 = 0x3f < uVar26;
          uVar26 = uVar26 - 0x40;
          puVar13 = puVar13 + 8;
          puVar16 = puVar15;
        } while (bVar12 && uVar26 != 0);
      }
      uVar1 = *(undefined8 *)((long)param_2 + (param_3 - 0x40));
      uVar2 = *(undefined8 *)((long)param_2 + (param_3 - 0x38));
      puVar15[2] = uVar17;
      puVar15[3] = uVar18;
      uVar17 = *(undefined8 *)((long)param_2 + (param_3 - 0x30));
      uVar18 = *(undefined8 *)((long)param_2 + (param_3 - 0x28));
      puVar15[4] = uVar19;
      puVar15[5] = uVar20;
      uVar19 = *(undefined8 *)((long)param_2 + (param_3 - 0x20));
      uVar20 = *(undefined8 *)((long)param_2 + (param_3 - 0x18));
      puVar15[6] = uVar21;
      puVar15[7] = uVar22;
      uVar21 = *(undefined8 *)((long)param_2 + (param_3 - 0x10));
      uVar22 = *(undefined8 *)((long)param_2 + (param_3 - 8));
      puVar15[8] = uVar23;
      puVar15[9] = uVar24;
      *(undefined8 *)(uVar14 - 0x40) = uVar1;
      *(undefined8 *)(uVar14 - 0x38) = uVar2;
      *(undefined8 *)(uVar14 - 0x30) = uVar17;
      *(undefined8 *)(uVar14 - 0x28) = uVar18;
      *(undefined8 *)(uVar14 - 0x20) = uVar19;
      *(undefined8 *)(uVar14 - 0x18) = uVar20;
      *(undefined8 *)(uVar14 - 0x10) = uVar21;
      *(undefined8 *)(uVar14 - 8) = uVar22;
      return;
    }
    uVar19 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    uVar26 = uVar14 & 0xf;
    lVar11 = param_3 - uVar26;
    uVar17 = *(undefined8 *)((long)param_2 + lVar11 + -0x10);
    uVar18 = *(undefined8 *)((long)param_2 + lVar11 + -8);
    *(undefined8 *)(uVar14 - 0x10) = *(undefined8 *)((long)param_2 + (param_3 - 0x10));
    *(undefined8 *)(uVar14 - 8) = uVar19;
    uVar19 = *(undefined8 *)((long)param_2 + lVar11 + -0x20);
    uVar20 = *(undefined8 *)((long)param_2 + lVar11 + -0x18);
    uVar21 = *(undefined8 *)((long)param_2 + lVar11 + -0x30);
    uVar22 = *(undefined8 *)((long)param_2 + lVar11 + -0x28);
    puVar13 = (undefined8 *)((long)param_2 + lVar11 + -0x40);
    uVar23 = *puVar13;
    uVar24 = *(undefined8 *)((long)param_2 + lVar11 + -0x38);
    puVar15 = (undefined8 *)(uVar14 - uVar26);
    uVar14 = (param_3 - uVar26) - 0x80;
    puVar16 = puVar15;
    if (0x7f < param_3 - uVar26 && uVar14 != 0) {
      do {
        puVar16[-2] = uVar17;
        puVar16[-1] = uVar18;
        uVar17 = puVar13[-2];
        uVar18 = puVar13[-1];
        puVar16[-4] = uVar19;
        puVar16[-3] = uVar20;
        uVar19 = puVar13[-4];
        uVar20 = puVar13[-3];
        puVar16[-6] = uVar21;
        puVar16[-5] = uVar22;
        uVar21 = puVar13[-6];
        uVar22 = puVar13[-5];
        puVar15 = puVar16 + -8;
        *puVar15 = uVar23;
        puVar16[-7] = uVar24;
        uVar23 = puVar13[-8];
        uVar24 = puVar13[-7];
        bVar12 = 0x3f < uVar14;
        uVar14 = uVar14 - 0x40;
        puVar13 = puVar13 + -8;
        puVar16 = puVar15;
      } while (bVar12 && uVar14 != 0);
    }
    uVar1 = param_2[6];
    uVar2 = param_2[7];
    puVar15[-2] = uVar17;
    puVar15[-1] = uVar18;
    uVar17 = param_2[4];
    uVar18 = param_2[5];
    puVar15[-4] = uVar19;
    puVar15[-3] = uVar20;
    uVar19 = param_2[2];
    uVar20 = param_2[3];
    puVar15[-6] = uVar21;
    puVar15[-5] = uVar22;
    uVar21 = *param_2;
    uVar22 = param_2[1];
    puVar15[-8] = uVar23;
    puVar15[-7] = uVar24;
    param_1[6] = uVar1;
    param_1[7] = uVar2;
    param_1[4] = uVar17;
    param_1[5] = uVar18;
    param_1[2] = uVar19;
    param_1[3] = uVar20;
    *param_1 = uVar21;
    param_1[1] = uVar22;
    return;
  }
  return;
}



// ===== FUN_710080fb40 @ 710080fb40 (size=8) =====

long FUN_710080fb40(long param_1)

{
  return param_1 + 0x100;
}



// ===== FUN_710080fb60 @ 710080fb60 (size=40) =====

void FUN_710080fb60(void)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = FUN_7100834b00();
  puVar1 = *(undefined **)(lVar2 + 0x40);
  if (*(undefined **)(lVar2 + 0x40) == (undefined *)0x0) {
    puVar1 = &DAT_7100af4978;
  }
  FUN_710080fb40(puVar1);
  return;
}



// ===== FUN_710080fba0 @ 710080fba0 (size=40) =====

void FUN_710080fba0(void)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = FUN_7100834b00();
  puVar1 = *(undefined **)(lVar2 + 0x40);
  if (*(undefined **)(lVar2 + 0x40) == (undefined *)0x0) {
    puVar1 = &DAT_7100af4978;
  }
  FUN_710080fb40(puVar1);
  return;
}



// ===== FUN_710080fbc8 @ 710080fbc8 (size=1936) =====

long FUN_710080fbc8(undefined8 param_1,int param_2,byte *param_3,ulong *param_4,uint *param_5,
                   long param_6,int *param_7,long *param_8)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  code *pcVar20;
  byte *pbVar21;
  ulong uVar22;
  int iVar23;
  undefined8 uVar24;
  undefined *local_38;
  int local_c;
  undefined1 auStack_8 [8];
  
  uVar22 = (ulong)*param_5;
  pbVar21 = (byte *)*param_8;
  if ((byte *)*param_8 == (byte *)0x0) {
    pbVar21 = param_3;
  }
  FUN_7100808340(auStack_8,0,8);
  local_38 = &DAT_7100af4978;
  iVar23 = param_2;
  while ((iVar19 = (int)uVar22, *pbVar21 != 0 && (iVar19 <= param_2))) {
    do {
      lVar10 = FUN_7100834b00();
      puVar2 = *(undefined **)(lVar10 + 0x40);
      if (*(undefined **)(lVar10 + 0x40) == (undefined *)0x0) {
        puVar2 = local_38;
      }
      pcVar20 = *(code **)(puVar2 + 0xe8);
      iVar9 = FUN_7100809520();
      iVar9 = (*pcVar20)(param_1,&local_c,pbVar21,(long)iVar9,auStack_8);
      if (iVar9 < 1) goto LAB_7100810190;
      pbVar21 = pbVar21 + iVar9;
    } while (local_c != 0x25);
    iVar9 = -1;
    uVar18 = 0;
    uVar17 = 0;
    iVar8 = 0;
    bVar7 = false;
    iVar19 = 0;
    pbVar13 = pbVar21;
    do {
      pbVar21 = pbVar13 + 1;
      bVar4 = *pbVar13;
      lVar10 = uVar18 * 9;
      bVar5 = (&DAT_71009d3580)[(ulong)(byte)(&DAT_71009d35f0)[*pbVar13] + lVar10];
      uVar18 = (ulong)bVar5;
      if (7 < (byte)"0000000000000000                "
                    [(ulong)(byte)(&DAT_71009d35f0)[*pbVar13] + lVar10 + 0x20] - 1)
      goto LAB_7100810180;
      uVar16 = (uint)bVar4;
      switch((uint)(byte)"0000000000000000                "
                         [(ulong)(byte)(&DAT_71009d35f0)[*pbVar13] + lVar10 + 0x20]) {
      case 1:
        iVar19 = uVar16 - 0x30;
        for (; (*pbVar21 != 0 && (uVar16 = *pbVar21 - 0x30, uVar16 < 10)); pbVar21 = pbVar21 + 1) {
          iVar19 = uVar16 + iVar19 * 10;
        }
        break;
      case 2:
        for (; (byte)(*pbVar21 - 0x30) < 10; pbVar21 = pbVar21 + 1) {
        }
        break;
      case 3:
        if (bVar4 == 0x71) {
          iVar8 = 1;
        }
        else if (uVar16 < 0x72) {
          if (uVar16 != 0x68) {
            if (bVar4 == 0x6a) goto LAB_710080fd8c;
            if (bVar4 != 0x4c) goto LAB_710080fd74;
          }
        }
        else {
          if ((bVar4 != 0x74) && (uVar16 != 0x7a)) {
LAB_710080fd74:
            if (pbVar13[1] == 0x6c) {
              iVar8 = 1;
              pbVar21 = pbVar13 + 2;
              break;
            }
          }
LAB_710080fd8c:
          bVar7 = true;
        }
        break;
      case 4:
        uVar1 = (uint)uVar22 & 0x1f;
        uVar22 = (ulong)uVar1;
        if (uVar16 == 0x61) {
switchD_710080fdd0_caseD_0:
          if (iVar9 != -1) {
            uVar17 = 4;
            goto LAB_710080fe50;
          }
LAB_7100810024:
          iVar9 = *(int *)((long)param_4 + 0x1c);
          puVar12 = (undefined8 *)*param_4;
          lVar10 = uVar22 * 0x10;
          if ((iVar9 < 0) && (*(int *)((long)param_4 + 0x1c) = iVar9 + 0x10, iVar9 + 0x10 < 1)) {
            puVar12 = (undefined8 *)(param_4[2] + (long)iVar9);
          }
          else {
            *param_4 = (long)puVar12 + 0xfU & 0xfffffffffffffff8;
          }
          uVar22 = (ulong)(uVar1 + 1);
          iVar9 = -1;
          uVar17 = 4;
          *(undefined8 *)(param_6 + lVar10) = *puVar12;
        }
        else if (uVar16 < 0x62) {
          if (0x17 < (uVar16 - 0x41 & 0xff)) goto switchD_710080fdd0_caseD_1;
          switch(uVar16 - 0x41) {
          case 0:
          case 4:
          case 5:
          case 6:
            goto switchD_710080fdd0_caseD_0;
          case 2:
switchD_710080fdd0_caseD_2:
            if (iVar9 == -1) goto LAB_710080ff20;
            uVar17 = 6;
            goto LAB_710080fe50;
          case 3:
          case 0xe:
          case 0x14:
switchD_710080fdd0_caseD_3:
            if (iVar9 != -1) {
              uVar17 = 1;
              goto LAB_710080fe50;
            }
            goto LAB_710080fe84;
          case 0x12:
switchD_710080fdd0_caseD_12:
            if (iVar9 != -1) {
              uVar17 = 3;
              goto LAB_710080fe50;
            }
            goto LAB_710080ffd0;
          case 0x17:
switchD_710080fdd0_caseD_17:
            if (bVar7 != false) goto switchD_710080fdd0_caseD_3;
            uVar17 = (ulong)(uint)(iVar8 << 1);
          }
switchD_710080fdd0_caseD_1:
          if (iVar9 == -1) {
            uVar16 = (uint)uVar17;
            if (uVar16 == 6) {
LAB_710080ff20:
              iVar9 = (int)param_4[3];
              puVar14 = (undefined4 *)*param_4;
              lVar10 = uVar22 * 0x10;
              if ((iVar9 < 0) && (*(int *)(param_4 + 3) = iVar9 + 8, iVar9 + 8 < 1)) {
                puVar14 = (undefined4 *)(param_4[1] + (long)iVar9);
              }
              else {
                *param_4 = (long)puVar14 + 0xbU & 0xfffffffffffffff8;
              }
              uVar22 = (ulong)(uVar1 + 1);
              iVar9 = -1;
              uVar17 = 6;
              *(undefined4 *)(param_6 + lVar10) = *puVar14;
            }
            else if (uVar16 == 2) {
              iVar3 = (int)param_4[3];
              lVar10 = uVar22 * 0x10;
              puVar12 = (undefined8 *)*param_4;
              uVar22 = (ulong)(uVar1 + 1);
              if ((iVar3 < 0) && (*(int *)(param_4 + 3) = iVar3 + 8, iVar3 + 8 < 1)) {
                puVar12 = (undefined8 *)(param_4[1] + (long)iVar3);
              }
              else {
                *param_4 = (long)puVar12 + 0xfU & 0xfffffffffffffff8;
              }
              *(undefined8 *)(param_6 + lVar10) = *puVar12;
            }
            else if (uVar16 < 3) {
              if (uVar16 != 1) goto LAB_710080ff7c;
LAB_710080fe84:
              iVar9 = (int)param_4[3];
              puVar12 = (undefined8 *)*param_4;
              lVar10 = uVar22 * 0x10;
              if ((iVar9 < 0) && (*(int *)(param_4 + 3) = iVar9 + 8, iVar9 + 8 < 1)) {
                puVar12 = (undefined8 *)(param_4[1] + (long)iVar9);
              }
              else {
                *param_4 = (long)puVar12 + 0xfU & 0xfffffffffffffff8;
              }
              uVar22 = (ulong)(uVar1 + 1);
              iVar9 = -1;
              uVar17 = 1;
              *(undefined8 *)(param_6 + lVar10) = *puVar12;
            }
            else {
              if (uVar16 != 3) goto LAB_7100810024;
LAB_710080ffd0:
              iVar9 = (int)param_4[3];
              puVar12 = (undefined8 *)*param_4;
              lVar10 = uVar22 * 0x10;
              if ((iVar9 < 0) && (*(int *)(param_4 + 3) = iVar9 + 8, iVar9 + 8 < 1)) {
                puVar12 = (undefined8 *)(param_4[1] + (long)iVar9);
              }
              else {
                *param_4 = (long)puVar12 + 0xfU & 0xfffffffffffffff8;
              }
              uVar22 = (ulong)(uVar1 + 1);
              iVar9 = -1;
              uVar17 = 3;
              *(undefined8 *)(param_6 + lVar10) = *puVar12;
            }
          }
          else {
LAB_710080fe50:
            param_7[iVar9] = (int)uVar17;
          }
        }
        else {
          if (uVar16 != 99) {
            uVar16 = uVar16 - 100 & 0xff;
            if (uVar16 < 0x15) {
              uVar11 = 1L << ((ulong)uVar16 & 0x3f);
              if ((uVar11 & 0x120821) != 0) goto switchD_710080fdd0_caseD_17;
              if ((uVar11 & 0x9400) != 0) goto switchD_710080fdd0_caseD_12;
              if ((uVar11 & 0xe) != 0) goto switchD_710080fdd0_caseD_0;
            }
            goto switchD_710080fdd0_caseD_1;
          }
          uVar17 = (ulong)bVar7 << 4;
          if (bVar7) goto switchD_710080fdd0_caseD_2;
          if (iVar9 != -1) goto LAB_710080fe50;
LAB_710080ff7c:
          iVar9 = (int)param_4[3];
          puVar14 = (undefined4 *)*param_4;
          lVar10 = uVar22 * 0x10;
          if ((iVar9 < 0) && (*(int *)(param_4 + 3) = iVar9 + 8, iVar9 + 8 < 1)) {
            puVar14 = (undefined4 *)(param_4[1] + (long)iVar9);
          }
          else {
            *param_4 = (long)puVar14 + 0xbU & 0xfffffffffffffff8;
          }
          uVar22 = (ulong)(uVar1 + 1);
          iVar9 = -1;
          uVar17 = 0;
          *(undefined4 *)(param_6 + lVar10) = *puVar14;
        }
        break;
      case 5:
        pbVar13 = pbVar21;
      case 6:
        iVar3 = (int)param_4[3];
        puVar14 = (undefined4 *)*param_4;
        uVar11 = uVar22 << 4;
        uVar6 = uVar22 >> 0x1f;
        if ((iVar3 < 0) && (*(int *)(param_4 + 3) = iVar3 + 8, iVar3 + 8 < 1)) {
          puVar14 = (undefined4 *)(param_4[1] + (long)iVar3);
        }
        else {
          *param_4 = (long)puVar14 + 0xbU & 0xfffffffffffffff8;
        }
        uVar22 = (ulong)((uint)uVar22 + 1);
        *(undefined4 *)(param_6 + (-uVar6 & 0xfffffff000000000 | uVar11)) = *puVar14;
        pbVar21 = pbVar13;
        break;
      case 7:
        if (*param_7 == -1) {
          FUN_7100808340(param_7,0,0x80);
          uVar18 = (ulong)(uint)bVar5;
        }
        iVar9 = iVar19 + -1;
        if (iVar23 < iVar9) {
          iVar23 = iVar9;
        }
        break;
      case 8:
        if (*param_7 == -1) {
          FUN_7100808340(param_7,0,0x80);
          uVar18 = (ulong)(uint)bVar5;
        }
        iVar19 = iVar19 + -1;
        if (iVar23 < iVar19) {
          iVar23 = iVar19;
        }
        param_7[iVar19] = 0;
      }
LAB_7100810180:
      pbVar13 = pbVar21;
    } while ((int)uVar18 != 0xb);
  }
LAB_7100810190:
  lVar10 = (long)iVar19;
  puVar12 = (undefined8 *)(param_6 + (long)iVar19 * 0x10);
  if (*pbVar21 != 0) {
    iVar23 = param_2;
  }
  do {
    if (iVar23 < (int)lVar10) {
      iVar9 = 0;
      if (iVar19 <= iVar23 + 1) {
        iVar9 = (iVar23 - iVar19) + 1;
      }
      *param_5 = iVar9 + iVar19;
      *param_8 = (long)pbVar21;
      return param_6 + (long)param_2 * 0x10;
    }
    iVar9 = param_7[lVar10];
    puVar15 = (undefined8 *)*param_4;
    if (iVar9 == 4) {
      iVar9 = *(int *)((long)param_4 + 0x1c);
      if ((iVar9 < 0) && (*(int *)((long)param_4 + 0x1c) = iVar9 + 0x10, iVar9 + 0x10 < 1)) {
        puVar15 = (undefined8 *)(param_4[2] + (long)iVar9);
      }
      else {
        *param_4 = (long)puVar15 + 0xfU & 0xfffffffffffffff8;
      }
      *puVar12 = *puVar15;
    }
    else if (iVar9 < 5) {
      iVar8 = (int)param_4[3];
      if (((iVar9 == 2) || (iVar9 == 3)) || (iVar9 == 1)) {
        if ((iVar8 < 0) && (*(int *)(param_4 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
          puVar15 = (undefined8 *)(param_4[1] + (long)iVar8);
        }
        else {
          *param_4 = (long)puVar15 + 0xfU & 0xfffffffffffffff8;
        }
        *puVar12 = *puVar15;
      }
      else {
LAB_71008102a0:
        iVar9 = (int)param_4[3];
        if ((iVar9 < 0) && (*(int *)(param_4 + 3) = iVar9 + 8, iVar9 + 8 < 1)) {
          puVar15 = (undefined8 *)(param_4[1] + (long)iVar9);
        }
        else {
          *param_4 = (long)puVar15 + 0xbU & 0xfffffffffffffff8;
        }
        *(undefined4 *)puVar12 = *(undefined4 *)puVar15;
      }
    }
    else {
      if (iVar9 != 5) goto LAB_71008102a0;
      iVar9 = *(int *)((long)param_4 + 0x1c);
      if ((iVar9 < 0) && (*(int *)((long)param_4 + 0x1c) = iVar9 + 0x10, iVar9 + 0x10 < 1)) {
        puVar15 = (undefined8 *)(param_4[2] + (long)iVar9);
      }
      else {
        puVar15 = (undefined8 *)((long)puVar15 + 0xfU & 0xfffffffffffffff0);
        *param_4 = (ulong)(puVar15 + 2);
      }
      uVar24 = *puVar15;
      puVar12[1] = puVar15[1];
      *puVar12 = uVar24;
    }
    lVar10 = lVar10 + 1;
    puVar12 = puVar12 + 2;
  } while( true );
}



// ===== FUN_7100810358 @ 7100810358 (size=15316) =====

/* WARNING: Type propagation algorithm not settling */

int FUN_7100810358(long param_1,long param_2,byte *param_3,ulong *param_4)

{
  bool bVar1;
  undefined *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined1 uVar14;
  byte bVar15;
  ushort uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined4 *puVar28;
  short *psVar29;
  char *pcVar30;
  double *pdVar31;
  undefined8 *puVar32;
  ulong uVar33;
  ulong *puVar34;
  ushort *puVar35;
  uint uVar36;
  undefined8 uVar37;
  long *plVar38;
  undefined2 *puVar39;
  undefined1 *puVar40;
  int *piVar41;
  ulong uVar42;
  uint *puVar43;
  undefined4 uVar44;
  byte *pbVar45;
  char *pcVar46;
  char *pcVar47;
  uint uVar48;
  uint uVar49;
  byte *pbVar50;
  int iVar51;
  code *pcVar52;
  byte *pbVar53;
  uint uVar54;
  long lVar55;
  uint uVar56;
  byte *pbVar57;
  double dVar58;
  double dVar59;
  ulong local_480;
  int local_470;
  int local_464;
  byte *local_460;
  long local_458;
  long local_448;
  char *local_440;
  uint local_438;
  int local_434;
  undefined *local_418;
  char local_3c1;
  undefined2 local_3c0;
  uint local_3bc;
  uint local_3b8;
  int local_3b4;
  undefined1 local_3b0;
  undefined1 local_3af;
  char local_3ae [11];
  char local_3a3 [3];
  undefined8 local_3a0;
  undefined1 auStack_398 [8];
  undefined1 auStack_390 [8];
  byte *local_388;
  long *local_380;
  int local_378;
  long local_370;
  byte local_368 [98];
  byte local_306 [6];
  undefined4 local_300 [32];
  long local_280 [16];
  double local_200 [64];
  
  plVar24 = (long *)FUN_710080fb60();
  lVar25 = *plVar24;
  lVar26 = FUN_710081ce00();
  FUN_7100808340(auStack_398,0,8);
  if ((param_1 != 0) && (*(long *)(param_1 + 0x48) == 0)) {
    FUN_710080d840(param_1);
  }
  if (((*(uint *)(param_2 + 0xb4) & 1) == 0) && ((*(ushort *)(param_2 + 0x10) >> 9 & 1) == 0)) {
    FUN_7100836200(param_2 + 0xa0);
  }
  if ((((*(ushort *)(param_2 + 0x10) >> 3 & 1) == 0) || (*(long *)(param_2 + 0x18) == 0)) &&
     (iVar17 = FUN_71008233a0(param_1,param_2), iVar17 != 0)) {
    if ((*(uint *)(param_2 + 0xb4) & 1) != 0) {
      return -1;
    }
    if ((*(ushort *)(param_2 + 0x10) >> 9 & 1) != 0) {
      return -1;
    }
    FUN_7100836220(param_2 + 0xa0);
    return -1;
  }
  if ((((int)*(short *)(param_2 + 0x10) & 0x1aU) == 10) && (-1 < *(short *)(param_2 + 0x12))) {
    if (((*(uint *)(param_2 + 0xb4) & 1) == 0) &&
       (((uint)(int)*(short *)(param_2 + 0x10) >> 9 & 1) == 0)) {
      FUN_7100836220(param_2 + 0xa0);
    }
    iVar17 = FUN_7100813f2c(param_1,param_2,param_3);
    return iVar17;
  }
  plVar24 = local_280;
  dVar58 = 0.0;
  local_300[0] = 0xffffffff;
  local_480 = 0;
  uVar19 = 0;
  local_464 = 0;
  local_460 = (byte *)0x0;
  local_458 = 0;
  local_448 = 0;
  local_440 = (char *)0x0;
  local_434 = 0;
  local_418 = &DAT_7100af4978;
  local_3bc = 0;
  local_3a0 = 0;
  local_378 = 0;
  local_370 = 0;
  local_380 = plVar24;
LAB_71008104d8:
  pbVar57 = param_3;
  while( true ) {
    lVar27 = FUN_7100834b00();
    puVar2 = *(undefined **)(lVar27 + 0x40);
    if (*(undefined **)(lVar27 + 0x40) == (undefined *)0x0) {
      puVar2 = local_418;
    }
    pcVar52 = *(code **)(puVar2 + 0xe8);
    iVar17 = FUN_7100809520();
    iVar17 = (*pcVar52)(param_1,&local_3b4,pbVar57,(long)iVar17,auStack_398);
    if (iVar17 == 0) break;
    if (iVar17 < 0) {
      iVar17 = 1;
      FUN_7100808340(auStack_398,0,8);
    }
    else if (local_3b4 == 0x25) break;
    pbVar57 = pbVar57 + iVar17;
  }
  iVar51 = (int)pbVar57 - (int)param_3;
  if ((int)pbVar57 != (int)param_3) {
    *plVar24 = (long)param_3;
    plVar24[1] = (long)iVar51;
    local_370 = local_370 + iVar51;
    local_378 = local_378 + 1;
    if (local_378 < 8) {
      plVar24 = plVar24 + 2;
    }
    else {
      iVar23 = FUN_7100828d40(param_1,param_2,&local_380);
      if (iVar23 != 0) goto LAB_7100813ee4;
      plVar24 = local_280;
    }
    local_464 = local_464 + iVar51;
  }
  if (iVar17 != 0) {
    pbVar53 = pbVar57 + 1;
    uVar21 = 0xffffffff;
    uVar54 = 0;
    bVar13 = false;
    bVar11 = false;
    bVar10 = false;
    bVar9 = false;
    bVar8 = false;
    bVar7 = false;
    bVar6 = false;
    bVar5 = false;
    bVar1 = false;
    uVar56 = 0;
    bVar12 = false;
    local_3c1 = '\0';
    uVar42 = local_480;
LAB_71008105f4:
    do {
      uVar49 = local_3bc;
      uVar48 = (uint)local_480;
      uVar18 = (uint)*pbVar53;
      pbVar53 = pbVar53 + 1;
      uVar36 = uVar56;
LAB_71008105fc:
      uVar56 = uVar36;
      iVar17 = (int)uVar42;
      switch(uVar18) {
      case 0x20:
        if (local_3c1 == '\0') {
          local_3c1 = ' ';
        }
        goto LAB_71008105f4;
      default:
        if (uVar18 == 0) goto LAB_7100813e84;
        param_3 = local_368;
        pbVar57 = (byte *)0x0;
        uVar49 = 0;
        iVar51 = 0;
        iVar17 = 0;
        uVar36 = 0;
        local_3c1 = '\0';
        uVar21 = 1;
        local_368[0] = (byte)uVar18;
        goto LAB_7100812fd0;
      case 0x23:
        bVar9 = true;
        goto LAB_71008105f4;
      case 0x27:
        lVar27 = FUN_710080fb60(param_1);
        local_448 = *(long *)(lVar27 + 8);
        local_458 = FUN_710081ce00();
        lVar27 = FUN_710080fb60(param_1);
        local_460 = *(byte **)(lVar27 + 0x10);
        if ((local_458 != 0 && local_460 != (byte *)0x0) && (*local_460 != 0)) {
          bVar13 = true;
        }
        goto LAB_71008105f4;
      case 0x2a:
        uVar36 = (uint)*pbVar53;
        if (9 < *pbVar53 - 0x30) {
          uVar36 = uVar48 + 1;
          if ((int)uVar48 < (int)local_3bc) {
            uVar56 = *(uint *)((long)local_200 +
                              (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            uVar48 = uVar36;
          }
          else {
            puVar43 = (uint *)*param_4;
            iVar17 = (int)param_4[3];
            if ((int)local_3bc < 0x20) {
              if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                puVar43 = (uint *)(param_4[1] + (long)iVar17);
              }
              else {
                *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
              }
              uVar56 = *puVar43;
              *(uint *)((long)local_200 +
                       (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | (ulong)local_3bc << 4)) =
                   uVar56;
              uVar48 = uVar36;
              local_3bc = local_3bc + 1;
            }
            else {
              if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                puVar43 = (uint *)(param_4[1] + (long)iVar17);
              }
              else {
                *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
              }
              uVar56 = *puVar43;
              uVar48 = uVar36;
            }
          }
          goto LAB_7100810800;
        }
        iVar17 = 0;
        pbVar45 = pbVar53 + 1;
        do {
          iVar17 = (uVar36 - 0x30) + iVar17 * 10;
          pbVar50 = pbVar45 + 1;
          uVar36 = (uint)*pbVar45;
          pbVar45 = pbVar50;
        } while (uVar36 - 0x30 < 10);
        pbVar45 = pbVar53;
        if (uVar36 == 0x24) goto LAB_71008106fc;
        break;
      case 0x2b:
        local_3c1 = '+';
        goto LAB_71008105f4;
      case 0x2d:
        goto switchD_7100810614_caseD_2d;
      case 0x2e:
        pbVar45 = pbVar53 + 1;
        uVar18 = (uint)*pbVar53;
        if (uVar18 != 0x2a) {
          uVar21 = 0;
          pbVar53 = pbVar45;
          while (uVar18 - 0x30 < 10) {
            uVar21 = (uVar18 - 0x30) + uVar21 * 10;
            uVar18 = (uint)*pbVar53;
            pbVar53 = pbVar53 + 1;
          }
          uVar36 = uVar56;
          if ((int)uVar21 < 0) {
            uVar21 = 0xffffffff;
          }
          goto LAB_71008105fc;
        }
        uVar36 = (uint)pbVar53[1];
        if (9 < pbVar53[1] - 0x30) {
          local_480 = (ulong)(uVar48 + 1);
          if ((int)uVar48 < (int)local_3bc) {
            uVar21 = *(uint *)((long)local_200 +
                              (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            pbVar53 = pbVar45;
          }
          else {
            puVar43 = (uint *)*param_4;
            iVar17 = (int)param_4[3];
            if ((int)local_3bc < 0x20) {
              if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                puVar43 = (uint *)(param_4[1] + (long)iVar17);
              }
              else {
                *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
              }
              uVar21 = *puVar43;
              *(uint *)((long)local_200 +
                       (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | (ulong)local_3bc << 4)) =
                   uVar21;
              pbVar53 = pbVar45;
              local_3bc = local_3bc + 1;
            }
            else {
              if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                puVar43 = (uint *)(param_4[1] + (long)iVar17);
              }
              else {
                *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
              }
              uVar21 = *puVar43;
              pbVar53 = pbVar45;
            }
          }
          goto LAB_710081097c;
        }
        iVar17 = 0;
        pbVar50 = pbVar53 + 2;
        do {
          iVar17 = (uVar36 - 0x30) + iVar17 * 10;
          pbVar53 = pbVar50 + 1;
          uVar36 = (uint)*pbVar50;
          pbVar50 = pbVar53;
        } while (uVar36 - 0x30 < 10);
        if (uVar36 == 0x24) goto LAB_710081087c;
        break;
      case 0x30:
        uVar54 = uVar54 | 0x80;
        goto LAB_71008105f4;
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
        goto switchD_7100810614_caseD_31;
      case 0x41:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x61:
      case 0x65:
      case 0x66:
      case 0x67:
        if (bVar8) {
          if (bVar12) {
            if (iVar17 < (int)local_3bc) {
              dVar58 = local_200[(long)iVar17 * 2];
            }
            else {
              pdVar31 = (double *)
                        FUN_710080fbc8(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,local_300
                                       ,&local_3a0);
              dVar58 = *pdVar31;
            }
          }
          else {
            local_480 = (ulong)(uVar48 + 1);
            if ((int)uVar48 < (int)local_3bc) {
              pdVar31 = local_200 + (long)iVar17 * 2;
            }
            else {
              iVar17 = *(int *)((long)param_4 + 0x1c);
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) &&
                   (*(int *)((long)param_4 + 0x1c) = iVar17 + 0x10, iVar17 + 0x10 < 1)) {
                  pdVar31 = (double *)(param_4[2] + (long)iVar17);
                }
                else {
                  pdVar31 = (double *)(*param_4 + 0xf & 0xfffffffffffffff0);
                  *param_4 = (ulong)(pdVar31 + 2);
                }
                dVar58 = *pdVar31;
                local_200[(long)(int)local_3bc * 2 + 1] = pdVar31[1];
                local_200[(long)(int)local_3bc * 2] = dVar58;
                local_3bc = local_3bc + 1;
                goto LAB_710081121c;
              }
              if ((iVar17 < 0) &&
                 (*(int *)((long)param_4 + 0x1c) = iVar17 + 0x10, iVar17 + 0x10 < 1)) {
                pdVar31 = (double *)(param_4[2] + (long)iVar17);
              }
              else {
                pdVar31 = (double *)(*param_4 + 0xf & 0xfffffffffffffff0);
                *param_4 = (ulong)(pdVar31 + 2);
              }
            }
            dVar58 = *pdVar31;
          }
LAB_710081121c:
          dVar58 = (double)FUN_7100801340(dVar58);
        }
        else if (bVar12) {
          if (iVar17 < (int)local_3bc) {
            dVar58 = *(double *)
                      ((long)local_200 + (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
          }
          else {
            pdVar31 = (double *)
                      FUN_710080fbc8(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,local_300,
                                     &local_3a0);
            dVar58 = *pdVar31;
          }
        }
        else {
          local_480 = (ulong)(uVar48 + 1);
          if ((int)uVar48 < (int)local_3bc) {
            dVar58 = *(double *)
                      ((long)local_200 + (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
          }
          else {
            pdVar31 = (double *)*param_4;
            iVar17 = *(int *)((long)param_4 + 0x1c);
            if ((int)local_3bc < 0x20) {
              if ((iVar17 < 0) &&
                 (*(int *)((long)param_4 + 0x1c) = iVar17 + 0x10, iVar17 + 0x10 < 1)) {
                pdVar31 = (double *)(param_4[2] + (long)iVar17);
              }
              else {
                *param_4 = (long)pdVar31 + 0xfU & 0xfffffffffffffff8;
              }
              dVar58 = *pdVar31;
              *(double *)
               ((long)local_200 +
               (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | (ulong)local_3bc << 4)) = dVar58;
              local_3bc = local_3bc + 1;
            }
            else {
              if ((iVar17 < 0) &&
                 (*(int *)((long)param_4 + 0x1c) = iVar17 + 0x10, iVar17 + 0x10 < 1)) {
                pdVar31 = (double *)(param_4[2] + (long)iVar17);
              }
              else {
                *param_4 = (long)pdVar31 + 0xfU & 0xfffffffffffffff8;
              }
              dVar58 = *pdVar31;
            }
          }
        }
        dVar59 = ABS(dVar58);
        if (dVar59 != 1.79769313486232e+308 && dVar59 < 1.79769313486232e+308 == NAN(dVar59)) {
          if (dVar58 < 0.0) {
            local_3c1 = '-';
          }
          pbVar57 = &UNK_71009cfa74;
          param_3 = &UNK_71009cfa78;
LAB_7100811364:
          if (uVar18 < 0x48) {
            param_3 = pbVar57;
          }
          uVar54 = uVar54 & 0xffffff7f;
          pbVar57 = (byte *)0x0;
          uVar20 = 3;
          goto LAB_7100811374;
        }
        if (NAN(dVar58)) {
          if ((long)dVar58 < 0) {
            local_3c1 = '-';
          }
          pbVar57 = &UNK_71009cfa7c;
          param_3 = &UNK_71009cfa80;
          goto LAB_7100811364;
        }
        uVar36 = uVar18 & 0xffffffdf;
        if (uVar36 == 0x41) {
          uVar14 = 0x58;
          if (uVar18 == 0x61) {
            uVar14 = 0x78;
          }
          local_3c0 = CONCAT11(uVar14,0x30);
          bVar10 = true;
          if ((int)uVar21 < 100) {
            param_3 = local_368;
            pbVar57 = (byte *)0x0;
          }
          else {
            param_3 = (byte *)FUN_7100814ca0(param_1,(long)(int)(uVar21 + 1));
            pbVar57 = param_3;
            if (param_3 == (byte *)0x0) goto LAB_71008113f0;
          }
        }
        else {
          pbVar57 = (byte *)0x0;
          if (uVar21 == 0xffffffff) {
            uVar21 = 6;
          }
          else if ((uVar36 == 0x47) && (uVar21 == 0)) {
            uVar21 = 1;
          }
        }
        if ((long)dVar58 < 0) {
          local_438 = 0x2d;
          dVar59 = -dVar58;
        }
        else {
          local_438 = 0;
          dVar59 = dVar58;
        }
        local_470 = (int)lVar26;
        if (uVar36 == 0x41) {
          dVar59 = (double)FUN_7100823560();
          dVar59 = dVar59 * 0.125;
          if (dVar59 == 0.0) {
            local_3b8 = 1;
          }
          pbVar45 = param_3;
          pcVar30 = "0123456789ABCDEF";
          if (uVar18 == 0x61) {
            pcVar30 = "0123456789abcdef";
          }
          goto LAB_71008114ac;
        }
        uVar19 = uVar21;
        if (uVar36 == 0x46) {
          uVar37 = 3;
        }
        else {
          uVar37 = 2;
          if (uVar36 == 0x45) {
            uVar19 = uVar21 + 1;
          }
        }
        param_3 = (byte *)FUN_7100815720(param_1,uVar37,uVar19,&local_3b8,auStack_390,&local_388);
        if (uVar36 == 0x47) {
          if (!bVar9) goto LAB_71008115d4;
          pbVar45 = param_3 + (int)uVar19;
        }
        else {
          pbVar45 = param_3 + (int)uVar19;
          if (uVar36 == 0x46) {
            if ((*param_3 == 0x30) && (dVar59 != 0.0)) {
              local_3b8 = 1 - uVar19;
            }
            pbVar45 = pbVar45 + (int)local_3b8;
          }
        }
        if (dVar59 == 0.0) {
          local_388 = pbVar45;
        }
        while (pbVar50 = local_388, local_388 < pbVar45) {
          local_388 = local_388 + 1;
          *pbVar50 = 0x30;
        }
LAB_71008115d4:
        uVar19 = (int)local_388 - (int)param_3;
        if (uVar36 != 0x47) {
          if (uVar36 == 0x46) {
            if ((int)local_3b8 < 1) {
              if (!bVar9 && uVar21 == 0) {
                uVar18 = 0x66;
                uVar21 = 1;
                goto LAB_7100811824;
              }
              local_470 = local_470 + 1;
LAB_71008117d0:
              uVar36 = uVar21 + local_470;
            }
            else {
              uVar36 = local_3b8;
              if (bVar9 || uVar21 != 0) {
                local_470 = local_3b8 + local_470;
                goto LAB_71008117d0;
              }
            }
            uVar21 = uVar36;
            uVar18 = 0x66;
            goto LAB_7100811824;
          }
          goto LAB_7100811678;
        }
        if (((int)(local_3b8 + 3) < 0 != SCARRY4(local_3b8,3)) || ((int)uVar21 < (int)local_3b8)) {
          uVar18 = uVar18 - 2;
          goto LAB_7100811678;
        }
        if ((int)local_3b8 < (int)uVar19) {
          uVar21 = local_470 + uVar19;
          if ((int)local_3b8 < 1) {
            uVar21 = ((local_470 + uVar19) - local_3b8) + 1;
          }
        }
        else {
          uVar21 = local_3b8;
          if (bVar9) {
            uVar21 = local_3b8 + local_470;
          }
        }
        uVar18 = 0x67;
LAB_7100811824:
        iVar17 = (uint)bVar13 << 10;
        iVar51 = 0;
        uVar36 = local_3b8;
        if (bVar13) {
          if ((int)local_3b8 < 1) {
            iVar17 = 0;
          }
          else {
            iVar17 = 0;
            while( true ) {
              bVar3 = *local_460;
              if ((bVar3 == 0xff) || ((int)uVar36 <= (int)(uint)bVar3)) break;
              uVar36 = uVar36 - bVar3;
              if (local_460[1] == 0) {
                iVar51 = iVar51 + 1;
              }
              else {
                iVar17 = iVar17 + 1;
                local_460 = local_460 + 1;
              }
            }
            uVar21 = uVar21 + (iVar17 + iVar51) * (int)local_458;
          }
        }
        goto LAB_7100811894;
      case 0x43:
      case 99:
        param_3 = local_368;
        uVar33 = (ulong)local_3bc;
        if ((uVar18 == 0x43) || (bVar1)) {
          FUN_7100808340(&local_388,0,8);
          if (bVar12) {
            if (iVar17 < (int)uVar49) {
              uVar44 = *(undefined4 *)
                        ((long)local_200 + (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar28 = (undefined4 *)
                        FUN_710080fbc8(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,local_300
                                       ,&local_3a0);
              uVar44 = *puVar28;
            }
          }
          else {
            local_480 = (ulong)(uVar48 + 1);
            if ((int)uVar48 < (int)uVar49) {
              uVar44 = *(undefined4 *)
                        ((long)local_200 + (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar28 = (undefined4 *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)uVar49 < 0x20) {
                local_3bc = uVar49 + 1;
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar28 = (undefined4 *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar28 + 0xbU & 0xfffffffffffffff8;
                }
                uVar44 = *puVar28;
                *(undefined4 *)
                 ((long)local_200 + (-(ulong)(uVar49 >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)) =
                     uVar44;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar28 = (undefined4 *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar28 + 0xbU & 0xfffffffffffffff8;
                }
                uVar44 = *puVar28;
              }
            }
          }
          uVar20 = FUN_7100816a40(param_1,param_3,uVar44,&local_388);
          if (uVar20 == 0xffffffff) {
LAB_71008113f0:
            *(ushort *)(param_2 + 0x10) = *(ushort *)(param_2 + 0x10) | 0x40;
            goto LAB_7100813ee4;
          }
        }
        else {
          if (bVar12) {
            if (iVar17 < (int)local_3bc) {
              local_368[0] = *(byte *)((long)local_200 +
                                      (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              pbVar57 = (byte *)FUN_710080fbc8(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,
                                               local_300,&local_3a0);
              local_368[0] = *pbVar57;
            }
          }
          else {
            local_480 = (ulong)(uVar48 + 1);
            if ((int)uVar48 < (int)local_3bc) {
              local_368[0] = *(byte *)((long)local_200 +
                                      (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              pbVar57 = (byte *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  pbVar57 = (byte *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (ulong)(pbVar57 + 0xb) & 0xfffffffffffffff8;
                }
                uVar44 = *(undefined4 *)pbVar57;
                *(undefined4 *)
                 ((long)local_200 + (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)
                 ) = uVar44;
                local_368[0] = (byte)uVar44;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  pbVar57 = (byte *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (ulong)(pbVar57 + 0xb) & 0xfffffffffffffff8;
                }
                local_368[0] = *pbVar57;
              }
            }
          }
          uVar20 = 1;
        }
        pbVar57 = (byte *)0x0;
        local_3c1 = '\0';
        goto LAB_7100811374;
      case 0x44:
        bVar1 = true;
        goto LAB_7100810d0c;
      case 0x4c:
        bVar8 = true;
        goto LAB_71008105f4;
      case 0x4f:
        bVar1 = true;
        goto LAB_7100811d14;
      case 0x53:
      case 0x73:
        if (bVar12) {
          if (iVar17 < (int)local_3bc) {
            param_3 = *(byte **)((long)local_200 +
                                (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
          }
          else {
            puVar32 = (undefined8 *)
                      FUN_710080fbc8(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,local_300,
                                     &local_3a0);
            param_3 = (byte *)*puVar32;
          }
        }
        else {
          local_480 = (ulong)(uVar48 + 1);
          if ((int)uVar48 < (int)local_3bc) {
            param_3 = *(byte **)((long)local_200 +
                                (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
          }
          else {
            puVar32 = (undefined8 *)*param_4;
            iVar17 = (int)param_4[3];
            if ((int)local_3bc < 0x20) {
              if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                puVar32 = (undefined8 *)(param_4[1] + (long)iVar17);
              }
              else {
                *param_4 = (long)puVar32 + 0xfU & 0xfffffffffffffff8;
              }
              param_3 = (byte *)*puVar32;
              *(byte **)((long)local_200 +
                        (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | (ulong)local_3bc << 4))
                   = param_3;
              local_3bc = local_3bc + 1;
            }
            else {
              if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                puVar32 = (undefined8 *)(param_4[1] + (long)iVar17);
              }
              else {
                *param_4 = (long)puVar32 + 0xfU & 0xfffffffffffffff8;
              }
              param_3 = (byte *)*puVar32;
            }
          }
        }
        local_3c1 = '\0';
        if (param_3 == (byte *)0x0) {
          if (6 < uVar21) {
            uVar21 = 6;
          }
          pbVar57 = (byte *)0x0;
          uVar49 = 0;
          param_3 = &UNK_71009cfaa6;
          iVar51 = 0;
          uVar36 = 0;
          iVar17 = 0;
          goto LAB_7100812fd0;
        }
        if ((uVar18 == 0x53) || (uVar36 = (uint)bVar1 << 4, bVar1)) {
          local_388 = param_3;
          FUN_7100808340(auStack_390,0,8);
          if ((int)uVar21 < 0) {
            uVar20 = FUN_710081fbe0(param_1,0,&local_388,0,auStack_390);
            pbVar57 = param_3;
            if (uVar20 != 0xffffffff) goto LAB_7100812464;
            goto LAB_710081243c;
          }
          lVar27 = 0;
          uVar36 = 0;
          goto LAB_71008123c4;
        }
        if ((int)uVar21 < 0) {
          uVar21 = FUN_710081ce00(param_3);
        }
        else {
          lVar27 = FUN_710080c980(param_3,0,(long)(int)uVar21);
          if (lVar27 != 0) {
            uVar21 = (int)lVar27 - (int)param_3;
          }
        }
        pbVar57 = (byte *)0x0;
        iVar17 = 0;
        iVar51 = 0;
        uVar49 = 0;
        uVar18 = 0x73;
        goto LAB_7100812fd0;
      case 0x55:
        bVar1 = true;
        goto LAB_71008125a8;
      case 0x58:
        local_440 = "0123456789ABCDEF";
        goto LAB_71008129b8;
      case 100:
      case 0x69:
LAB_7100810d0c:
        uVar33 = (ulong)local_3bc;
        if ((bVar5) || (bVar1)) {
          if (!bVar12) {
            if ((int)uVar48 < (int)local_3bc) {
              uVar42 = *(ulong *)((long)local_200 +
                                 (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar34 = (ulong *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar34 = (ulong *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar34 + 0xfU & 0xfffffffffffffff8;
                }
                uVar42 = *puVar34;
                *(ulong *)((long)local_200 +
                          (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)) = uVar42
                ;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar34 = (ulong *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar34 + 0xfU & 0xfffffffffffffff8;
                }
                uVar42 = *puVar34;
              }
            }
            goto LAB_71008110e0;
          }
          if (iVar17 < (int)local_3bc) {
            uVar42 = *(ulong *)((long)local_200 +
                               (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
          }
          else {
            puVar34 = (ulong *)FUN_710080fbc8(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,
                                              local_300,&local_3a0);
            uVar42 = *puVar34;
          }
        }
        else if (bVar6) {
          if (!bVar12) {
            if ((int)uVar48 < (int)local_3bc) {
              uVar42 = (ulong)*(short *)((long)local_200 +
                                        (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              psVar29 = (short *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  psVar29 = (short *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)psVar29 + 0xbU & 0xfffffffffffffff8;
                }
                uVar44 = *(undefined4 *)psVar29;
                *(undefined4 *)
                 ((long)local_200 + (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)
                 ) = uVar44;
                uVar42 = (ulong)(short)uVar44;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  psVar29 = (short *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)psVar29 + 0xbU & 0xfffffffffffffff8;
                }
                uVar42 = (ulong)*psVar29;
              }
            }
            goto LAB_71008110e0;
          }
          if (iVar17 < (int)local_3bc) {
            uVar42 = (ulong)*(short *)((long)local_200 +
                                      (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
          }
          else {
            psVar29 = (short *)FUN_710080fbc8(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,
                                              local_300,&local_3a0);
            uVar42 = (ulong)*psVar29;
          }
        }
        else if (bVar7) {
          if (bVar12) {
            if (iVar17 < (int)local_3bc) {
              uVar42 = (ulong)*(char *)((long)local_200 +
                                       (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              pcVar30 = (char *)FUN_710080fbc8(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,
                                               local_300,&local_3a0);
              uVar42 = (ulong)*pcVar30;
            }
          }
          else {
            if ((int)uVar48 < (int)local_3bc) {
              uVar42 = (ulong)*(char *)((long)local_200 +
                                       (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              pcVar30 = (char *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  pcVar30 = (char *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (ulong)(pcVar30 + 0xb) & 0xfffffffffffffff8;
                }
                uVar44 = *(undefined4 *)pcVar30;
                *(undefined4 *)
                 ((long)local_200 + (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)
                 ) = uVar44;
                uVar42 = (ulong)(char)uVar44;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  pcVar30 = (char *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (ulong)(pcVar30 + 0xb) & 0xfffffffffffffff8;
                }
                uVar42 = (ulong)*pcVar30;
              }
            }
LAB_71008110e0:
            uVar48 = uVar48 + 1;
          }
        }
        else {
          if (!bVar12) {
            if ((int)uVar48 < (int)local_3bc) {
              uVar42 = (ulong)*(int *)((long)local_200 +
                                      (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              piVar41 = (int *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  piVar41 = (int *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)piVar41 + 0xbU & 0xfffffffffffffff8;
                }
                iVar17 = *piVar41;
                *(int *)((long)local_200 +
                        (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)) = iVar17;
                uVar42 = (ulong)iVar17;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  piVar41 = (int *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)piVar41 + 0xbU & 0xfffffffffffffff8;
                }
                uVar42 = (ulong)*piVar41;
              }
            }
            goto LAB_71008110e0;
          }
          if (iVar17 < (int)local_3bc) {
            uVar42 = (ulong)*(int *)((long)local_200 +
                                    (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
          }
          else {
            piVar41 = (int *)FUN_710080fbc8(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,
                                            local_300,&local_3a0);
            uVar42 = (ulong)*piVar41;
          }
        }
        if ((long)uVar42 < 0) {
          uVar42 = -uVar42;
          local_3c1 = '-';
          iVar17 = 1;
LAB_7100812db0:
          if ((int)uVar21 < 0) {
LAB_7100812ddc:
            if (iVar17 == 1) goto LAB_7100812e24;
            param_3 = local_306 + 2;
            if (iVar17 == 2) {
              do {
                uVar33 = uVar42 & 0xf;
                uVar42 = uVar42 >> 4;
                param_3 = param_3 + -1;
                *param_3 = local_440[uVar33];
              } while (uVar42 != 0);
            }
            else {
              do {
                pbVar57 = param_3;
                iVar17 = ((uint)uVar42 & 7) + 0x30;
                param_3 = pbVar57 + -1;
                *param_3 = (byte)iVar17;
                uVar42 = uVar42 >> 3;
              } while (uVar42 != 0);
              if ((bVar9 != false) && (iVar17 != 0x30)) {
                pbVar57[-2] = 0x30;
                param_3 = pbVar57 + -2;
              }
            }
          }
          else {
LAB_7100812dcc:
            uVar54 = uVar54 & 0xffffff7f;
            if (uVar42 != 0 || uVar21 != 0) goto LAB_7100812ddc;
            if (iVar17 == 0) {
              uVar21 = (uint)bVar9;
              if (!bVar9) goto LAB_7100812f24;
              uVar21 = 0;
              local_306[1] = '0';
              goto LAB_7100812f18;
            }
            uVar21 = 0;
LAB_7100812f24:
            param_3 = local_306 + 2;
          }
          goto LAB_7100812f4c;
        }
        if (-1 < (int)uVar21) {
          iVar17 = 1;
          goto LAB_7100812dcc;
        }
LAB_7100812e24:
        if (9 < uVar42) {
          pbVar57 = local_306 + 2;
          uVar19 = 0;
          goto LAB_7100812e64;
        }
        local_306[1] = (char)uVar42 + '0';
LAB_7100812f18:
        param_3 = local_306 + 1;
        goto LAB_7100812f4c;
      case 0x68:
        if (*pbVar53 == 0x68) {
          pbVar53 = pbVar53 + 1;
          bVar7 = true;
        }
        else {
          bVar6 = true;
        }
        goto LAB_71008105f4;
      case 0x6a:
      case 0x74:
      case 0x7a:
        goto switchD_7100810614_caseD_6a;
      case 0x6c:
        if (*pbVar53 == 0x6c) {
          pbVar53 = pbVar53 + 1;
          goto switchD_7100810614_caseD_71;
        }
switchD_7100810614_caseD_6a:
        bVar1 = true;
        goto LAB_71008105f4;
      case 0x6e:
        uVar33 = (ulong)local_3bc;
        if ((bVar5) || (bVar1)) {
          if (bVar12) {
            if (iVar17 < (int)local_3bc) {
              plVar38 = *(long **)((long)local_200 +
                                  (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar32 = (undefined8 *)
                        FUN_710080fbc8(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,local_300
                                       ,&local_3a0);
              plVar38 = (long *)*puVar32;
            }
          }
          else {
            local_480 = (ulong)(uVar48 + 1);
            if ((int)uVar48 < (int)local_3bc) {
              plVar38 = *(long **)((long)local_200 +
                                  (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar32 = (undefined8 *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar32 = (undefined8 *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar32 + 0xfU & 0xfffffffffffffff8;
                }
                plVar38 = (long *)*puVar32;
                *(long **)((long)local_200 +
                          (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)) =
                     plVar38;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar32 = (undefined8 *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar32 + 0xfU & 0xfffffffffffffff8;
                }
                plVar38 = (long *)*puVar32;
              }
            }
          }
          *plVar38 = (long)local_464;
          param_3 = pbVar53;
        }
        else if (bVar6) {
          if (bVar12) {
            if (iVar17 < (int)local_3bc) {
              puVar39 = *(undefined2 **)
                         ((long)local_200 + (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar32 = (undefined8 *)
                        FUN_710080fbc8(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,local_300
                                       ,&local_3a0);
              puVar39 = (undefined2 *)*puVar32;
            }
          }
          else {
            local_480 = (ulong)(uVar48 + 1);
            if ((int)uVar48 < (int)local_3bc) {
              puVar39 = *(undefined2 **)
                         ((long)local_200 + (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar32 = (undefined8 *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar32 = (undefined8 *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar32 + 0xfU & 0xfffffffffffffff8;
                }
                puVar39 = (undefined2 *)*puVar32;
                *(undefined2 **)
                 ((long)local_200 + (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)
                 ) = puVar39;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar32 = (undefined8 *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar32 + 0xfU & 0xfffffffffffffff8;
                }
                puVar39 = (undefined2 *)*puVar32;
              }
            }
          }
          *puVar39 = (undefined2)local_464;
          param_3 = pbVar53;
        }
        else if (bVar7) {
          if (bVar12) {
            if (iVar17 < (int)local_3bc) {
              puVar40 = *(undefined1 **)
                         ((long)local_200 + (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar32 = (undefined8 *)
                        FUN_710080fbc8(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,local_300
                                       ,&local_3a0);
              puVar40 = (undefined1 *)*puVar32;
            }
          }
          else {
            local_480 = (ulong)(uVar48 + 1);
            if ((int)uVar48 < (int)local_3bc) {
              puVar40 = *(undefined1 **)
                         ((long)local_200 + (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar32 = (undefined8 *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar32 = (undefined8 *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar32 + 0xfU & 0xfffffffffffffff8;
                }
                puVar40 = (undefined1 *)*puVar32;
                *(undefined1 **)
                 ((long)local_200 + (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)
                 ) = puVar40;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar32 = (undefined8 *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar32 + 0xfU & 0xfffffffffffffff8;
                }
                puVar40 = (undefined1 *)*puVar32;
              }
            }
          }
          *puVar40 = (undefined1)local_464;
          param_3 = pbVar53;
        }
        else {
          if (bVar12) {
            if (iVar17 < (int)local_3bc) {
              piVar41 = *(int **)((long)local_200 +
                                 (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar32 = (undefined8 *)
                        FUN_710080fbc8(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,local_300
                                       ,&local_3a0);
              piVar41 = (int *)*puVar32;
            }
          }
          else {
            local_480 = (ulong)(uVar48 + 1);
            if ((int)uVar48 < (int)local_3bc) {
              piVar41 = *(int **)((long)local_200 +
                                 (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar32 = (undefined8 *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar32 = (undefined8 *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar32 + 0xfU & 0xfffffffffffffff8;
                }
                piVar41 = (int *)*puVar32;
                *(int **)((long)local_200 +
                         (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)) = piVar41
                ;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar32 = (undefined8 *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar32 + 0xfU & 0xfffffffffffffff8;
                }
                piVar41 = (int *)*puVar32;
              }
            }
          }
          *piVar41 = local_464;
          param_3 = pbVar53;
        }
        goto LAB_71008104d8;
      case 0x6f:
LAB_7100811d14:
        uVar33 = (ulong)local_3bc;
        if ((bVar5) || (bVar1)) {
          if (!bVar12) {
            if ((int)uVar48 < (int)local_3bc) {
              uVar42 = *(ulong *)((long)local_200 +
                                 (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar34 = (ulong *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar34 = (ulong *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar34 + 0xfU & 0xfffffffffffffff8;
                }
                uVar42 = *puVar34;
                *(ulong *)((long)local_200 +
                          (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)) = uVar42
                ;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar34 = (ulong *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar34 + 0xfU & 0xfffffffffffffff8;
                }
                uVar42 = *puVar34;
              }
            }
            goto LAB_71008120e8;
          }
          if (iVar17 < (int)local_3bc) {
            uVar42 = *(ulong *)((long)local_200 +
                               (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
          }
          else {
            puVar34 = (ulong *)FUN_710080fbc8(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,
                                              local_300,&local_3a0);
            uVar42 = *puVar34;
          }
        }
        else if (bVar6) {
          if (!bVar12) {
            if ((int)uVar48 < (int)local_3bc) {
              uVar42 = (ulong)*(ushort *)
                               ((long)local_200 +
                               (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar43 = (uint *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar43 = (uint *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
                }
                uVar36 = *puVar43;
                *(uint *)((long)local_200 +
                         (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)) = uVar36;
                uVar42 = (ulong)uVar36 & 0xffff;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar43 = (uint *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
                }
                uVar42 = (ulong)(ushort)*puVar43;
              }
            }
            goto LAB_71008120e8;
          }
          if (iVar17 < (int)local_3bc) {
            uVar42 = (ulong)*(ushort *)
                             ((long)local_200 +
                             (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
          }
          else {
            puVar35 = (ushort *)
                      FUN_710080fbc8(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,local_300,
                                     &local_3a0);
            uVar42 = (ulong)*puVar35;
          }
        }
        else if (bVar7) {
          if (bVar12) {
            if (iVar17 < (int)local_3bc) {
              uVar42 = (ulong)*(byte *)((long)local_200 +
                                       (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              pbVar57 = (byte *)FUN_710080fbc8(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,
                                               local_300,&local_3a0);
              uVar42 = (ulong)*pbVar57;
            }
          }
          else {
            if ((int)uVar48 < (int)local_3bc) {
              uVar42 = (ulong)*(byte *)((long)local_200 +
                                       (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar43 = (uint *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar43 = (uint *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
                }
                uVar36 = *puVar43;
                *(uint *)((long)local_200 +
                         (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)) = uVar36;
                uVar42 = (ulong)uVar36 & 0xff;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar43 = (uint *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
                }
                uVar42 = (ulong)(byte)*puVar43;
              }
            }
LAB_71008120e8:
            uVar48 = uVar48 + 1;
          }
        }
        else {
          if (!bVar12) {
            if ((int)uVar48 < (int)local_3bc) {
              uVar42 = (ulong)*(uint *)((long)local_200 +
                                       (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar43 = (uint *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar43 = (uint *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
                }
                uVar36 = *puVar43;
                *(uint *)((long)local_200 +
                         (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)) = uVar36;
                uVar42 = (ulong)uVar36;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar43 = (uint *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
                }
                uVar42 = (ulong)*puVar43;
              }
            }
            goto LAB_71008120e8;
          }
          if (iVar17 < (int)local_3bc) {
            uVar42 = (ulong)*(uint *)((long)local_200 +
                                     (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
          }
          else {
            puVar43 = (uint *)FUN_710080fbc8(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,
                                             local_300,&local_3a0);
            uVar42 = (ulong)*puVar43;
          }
        }
        bVar13 = false;
        bVar10 = false;
        iVar17 = 0;
LAB_7100812dac:
        local_3c1 = '\0';
        goto LAB_7100812db0;
      case 0x70:
        if (bVar12) {
          if (iVar17 < (int)local_3bc) {
            uVar42 = *(ulong *)((long)local_200 +
                               (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
          }
          else {
            puVar34 = (ulong *)FUN_710080fbc8(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,
                                              local_300,&local_3a0);
            uVar42 = *puVar34;
          }
        }
        else {
          uVar36 = uVar48 + 1;
          if ((int)uVar48 < (int)local_3bc) {
            uVar42 = *(ulong *)((long)local_200 +
                               (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            uVar48 = uVar36;
          }
          else {
            iVar17 = (int)param_4[3];
            puVar34 = (ulong *)*param_4;
            if ((int)local_3bc < 0x20) {
              if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                puVar34 = (ulong *)(param_4[1] + (long)iVar17);
              }
              else {
                *param_4 = (long)puVar34 + 0xfU & 0xfffffffffffffff8;
              }
              uVar42 = *puVar34;
              *(ulong *)((long)local_200 +
                        (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | (ulong)local_3bc << 4))
                   = uVar42;
              uVar48 = uVar36;
              local_3bc = local_3bc + 1;
            }
            else {
              if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                puVar34 = (ulong *)(param_4[1] + (long)iVar17);
              }
              else {
                *param_4 = (long)puVar34 + 0xfU & 0xfffffffffffffff8;
              }
              uVar42 = *puVar34;
              uVar48 = uVar36;
            }
          }
        }
        local_3c0 = 0x7830;
        bVar10 = true;
        uVar18 = 0x78;
        local_440 = "0123456789abcdef";
        iVar17 = 2;
        goto LAB_7100812dac;
      case 0x71:
switchD_7100810614_caseD_71:
        bVar5 = true;
        goto LAB_71008105f4;
      case 0x75:
LAB_71008125a8:
        uVar33 = (ulong)local_3bc;
        if ((bVar5) || (bVar1)) {
          if (!bVar12) {
            if ((int)uVar48 < (int)local_3bc) {
              uVar42 = *(ulong *)((long)local_200 +
                                 (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar34 = (ulong *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar34 = (ulong *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar34 + 0xfU & 0xfffffffffffffff8;
                }
                uVar42 = *puVar34;
                *(ulong *)((long)local_200 +
                          (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)) = uVar42
                ;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar34 = (ulong *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar34 + 0xfU & 0xfffffffffffffff8;
                }
                uVar42 = *puVar34;
              }
            }
            goto LAB_7100812890;
          }
          if (iVar17 < (int)local_3bc) {
            uVar42 = *(ulong *)((long)local_200 +
                               (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
          }
          else {
            puVar34 = (ulong *)FUN_710080fbc8(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,
                                              local_300,&local_3a0);
            uVar42 = *puVar34;
          }
        }
        else if (bVar6) {
          if (!bVar12) {
            if ((int)uVar48 < (int)local_3bc) {
              uVar42 = (ulong)*(ushort *)
                               ((long)local_200 +
                               (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar43 = (uint *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar43 = (uint *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
                }
                uVar36 = *puVar43;
                *(uint *)((long)local_200 +
                         (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)) = uVar36;
                uVar42 = (ulong)uVar36 & 0xffff;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar43 = (uint *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
                }
                uVar42 = (ulong)(ushort)*puVar43;
              }
            }
            goto LAB_7100812890;
          }
          if (iVar17 < (int)local_3bc) {
            uVar42 = (ulong)*(ushort *)
                             ((long)local_200 +
                             (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
          }
          else {
            puVar35 = (ushort *)
                      FUN_710080fbc8(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,local_300,
                                     &local_3a0);
            uVar42 = (ulong)*puVar35;
          }
        }
        else if (bVar7) {
          if (bVar12) {
            if (iVar17 < (int)local_3bc) {
              uVar42 = (ulong)*(byte *)((long)local_200 +
                                       (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              pbVar57 = (byte *)FUN_710080fbc8(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,
                                               local_300,&local_3a0);
              uVar42 = (ulong)*pbVar57;
            }
          }
          else {
            if ((int)uVar48 < (int)local_3bc) {
              uVar42 = (ulong)*(byte *)((long)local_200 +
                                       (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar43 = (uint *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar43 = (uint *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
                }
                uVar36 = *puVar43;
                *(uint *)((long)local_200 +
                         (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)) = uVar36;
                uVar42 = (ulong)uVar36 & 0xff;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar43 = (uint *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
                }
                uVar42 = (ulong)(byte)*puVar43;
              }
            }
LAB_7100812890:
            uVar48 = uVar48 + 1;
          }
        }
        else {
          if (!bVar12) {
            if ((int)uVar48 < (int)local_3bc) {
              uVar42 = (ulong)*(uint *)((long)local_200 +
                                       (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar43 = (uint *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar43 = (uint *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
                }
                uVar36 = *puVar43;
                *(uint *)((long)local_200 +
                         (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)) = uVar36;
                uVar42 = (ulong)uVar36;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar43 = (uint *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
                }
                uVar42 = (ulong)*puVar43;
              }
            }
            goto LAB_7100812890;
          }
          if (iVar17 < (int)local_3bc) {
            uVar42 = (ulong)*(uint *)((long)local_200 +
                                     (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
          }
          else {
            puVar43 = (uint *)FUN_710080fbc8(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,
                                             local_300,&local_3a0);
            uVar42 = (ulong)*puVar43;
          }
        }
        iVar17 = 1;
        goto LAB_7100812dac;
      case 0x78:
        local_440 = "0123456789abcdef";
LAB_71008129b8:
        uVar33 = (ulong)local_3bc;
        if ((bVar5) || (bVar1)) {
          if (!bVar12) {
            if ((int)uVar48 < (int)local_3bc) {
              uVar42 = *(ulong *)((long)local_200 +
                                 (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar34 = (ulong *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar34 = (ulong *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar34 + 0xfU & 0xfffffffffffffff8;
                }
                uVar42 = *puVar34;
                *(ulong *)((long)local_200 +
                          (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)) = uVar42
                ;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar34 = (ulong *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar34 + 0xfU & 0xfffffffffffffff8;
                }
                uVar42 = *puVar34;
              }
            }
            goto LAB_7100812d88;
          }
          if (iVar17 < (int)local_3bc) {
            uVar42 = *(ulong *)((long)local_200 +
                               (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
          }
          else {
            puVar34 = (ulong *)FUN_710080fbc8(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,
                                              local_300,&local_3a0);
            uVar42 = *puVar34;
          }
        }
        else if (bVar6) {
          if (!bVar12) {
            if ((int)uVar48 < (int)local_3bc) {
              uVar42 = (ulong)*(ushort *)
                               ((long)local_200 +
                               (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar43 = (uint *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar43 = (uint *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
                }
                uVar36 = *puVar43;
                *(uint *)((long)local_200 +
                         (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)) = uVar36;
                uVar42 = (ulong)uVar36 & 0xffff;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar43 = (uint *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
                }
                uVar42 = (ulong)(ushort)*puVar43;
              }
            }
            goto LAB_7100812d88;
          }
          if (iVar17 < (int)local_3bc) {
            uVar42 = (ulong)*(ushort *)
                             ((long)local_200 +
                             (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
          }
          else {
            puVar35 = (ushort *)
                      FUN_710080fbc8(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,local_300,
                                     &local_3a0);
            uVar42 = (ulong)*puVar35;
          }
        }
        else if (bVar7) {
          if (bVar12) {
            if (iVar17 < (int)local_3bc) {
              uVar42 = (ulong)*(byte *)((long)local_200 +
                                       (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              pbVar57 = (byte *)FUN_710080fbc8(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,
                                               local_300,&local_3a0);
              uVar42 = (ulong)*pbVar57;
            }
          }
          else {
            if ((int)uVar48 < (int)local_3bc) {
              uVar42 = (ulong)*(byte *)((long)local_200 +
                                       (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar43 = (uint *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar43 = (uint *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
                }
                uVar36 = *puVar43;
                *(uint *)((long)local_200 +
                         (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)) = uVar36;
                uVar42 = (ulong)uVar36 & 0xff;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar43 = (uint *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
                }
                uVar42 = (ulong)(byte)*puVar43;
              }
            }
LAB_7100812d88:
            uVar48 = uVar48 + 1;
          }
        }
        else {
          if (!bVar12) {
            if ((int)uVar48 < (int)local_3bc) {
              uVar42 = (ulong)*(uint *)((long)local_200 +
                                       (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar43 = (uint *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar43 = (uint *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
                }
                uVar36 = *puVar43;
                *(uint *)((long)local_200 +
                         (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)) = uVar36;
                uVar42 = (ulong)uVar36;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar43 = (uint *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
                }
                uVar42 = (ulong)*puVar43;
              }
            }
            goto LAB_7100812d88;
          }
          if (iVar17 < (int)local_3bc) {
            uVar42 = (ulong)*(uint *)((long)local_200 +
                                     (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
          }
          else {
            puVar43 = (uint *)FUN_710080fbc8(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,
                                             local_300,&local_3a0);
            uVar42 = (ulong)*puVar43;
          }
        }
        if ((bVar9) && (uVar42 != 0)) {
          bVar10 = true;
          local_3c0 = CONCAT11((byte)uVar18,0x30);
        }
        bVar13 = false;
        iVar17 = 2;
        goto LAB_7100812dac;
      }
      pbVar53 = pbVar45;
      bVar12 = false;
    } while( true );
  }
LAB_7100813e84:
  if ((local_370 == 0) || (iVar17 = FUN_7100828d40(param_1,param_2,&local_380), iVar17 == 0)) {
    local_378 = 0;
  }
  goto LAB_7100813ee4;
LAB_71008123c4:
  uVar20 = uVar36;
  pbVar57 = local_388;
  if (*(int *)(local_388 + lVar27) == 0) goto LAB_7100812464;
  iVar17 = FUN_7100816a40(param_1,local_368,*(int *)(local_388 + lVar27),auStack_390);
  if (iVar17 == -1) goto LAB_710081243c;
  uVar36 = uVar36 + iVar17;
  pbVar57 = local_388;
  if (((int)uVar21 < (int)uVar36) || (lVar27 = lVar27 + 4, uVar20 = uVar21, uVar36 == uVar21))
  goto LAB_7100812464;
  goto LAB_71008123c4;
LAB_7100812464:
  local_388 = pbVar57;
  if (uVar20 != 0) {
    if ((int)uVar20 < 100) {
      pbVar57 = (byte *)0x0;
      param_3 = local_368;
    }
    else {
      pbVar57 = (byte *)FUN_7100814ca0(param_1,(long)(int)(uVar20 + 1));
      param_3 = pbVar57;
      if (pbVar57 == (byte *)0x0) {
        uVar16 = *(ushort *)(param_2 + 0x10) | 0x40;
        goto LAB_71008124fc;
      }
    }
    lVar55 = (long)(int)uVar20;
    FUN_7100808340(auStack_390,0,8);
    lVar27 = FUN_710081fbe0(param_1,param_3,&local_388,lVar55,auStack_390);
    if (lVar55 != lVar27) {
      uVar16 = *(ushort *)(param_2 + 0x10) | 0x40;
      goto LAB_71008124fc;
    }
    param_3[lVar55] = 0;
LAB_7100811374:
    bVar10 = false;
    uVar49 = 0;
    goto LAB_7100812f60;
  }
  uVar49 = 0;
  iVar51 = 0;
  uVar36 = 0;
  pbVar57 = (byte *)0x0;
  iVar17 = 0;
  uVar21 = uVar20;
  goto LAB_7100812fd0;
LAB_7100812e64:
  param_3 = pbVar57 + -1;
  uVar19 = uVar19 + 1;
  pbVar57[-1] = (char)uVar42 + (char)(uVar42 / 10) * -10 + 0x30;
  if (((bVar13 == false) || (uVar19 != *local_460)) || (uVar19 == 0xff)) {
    pbVar57 = param_3;
    if (uVar42 < 10) goto LAB_7100812f4c;
  }
  else {
    if (uVar42 < 10) goto LAB_7100812f4c;
    FUN_710081f760(param_3 + -local_458,local_448,local_458);
    if (local_460[1] != 0) {
      local_460 = local_460 + 1;
    }
    uVar19 = 0;
    pbVar57 = param_3 + -local_458;
  }
  uVar42 = uVar42 / 10;
  goto LAB_7100812e64;
LAB_7100812f4c:
  uVar20 = ((int)local_306 + 2) - (int)param_3;
  pbVar57 = (byte *)0x0;
  local_480 = (ulong)uVar48;
  uVar49 = uVar21;
LAB_7100812f60:
  bVar11 = false;
  iVar51 = 0;
  uVar36 = 0;
  iVar17 = 0;
  uVar21 = uVar20;
  goto LAB_7100812fd0;
LAB_71008114ac:
  uVar19 = (uint)(dVar59 * 16.0);
  pbVar50 = pbVar45 + 1;
  *pbVar45 = pcVar30[(int)uVar19];
  dVar59 = dVar59 * 16.0 - (double)(int)uVar19;
  if (uVar21 != 0) goto code_r0x0071008114c8;
  if ((dVar59 != 0.5 && dVar59 < 0.5 == NAN(dVar59)) || ((dVar59 == 0.5 && ((uVar19 & 1) != 0)))) {
    bVar3 = pcVar30[0xf];
    local_388 = pbVar50;
    while( true ) {
      pbVar45 = local_388;
      local_388 = local_388 + -1;
      bVar15 = pbVar45[-1];
      if (bVar15 != bVar3) break;
      pbVar45[-1] = 0x30;
    }
    if (bVar15 == 0x39) {
      bVar15 = pcVar30[10];
    }
    else {
      bVar15 = bVar15 + 1;
    }
    pbVar45[-1] = bVar15;
    goto LAB_710081156c;
  }
  uVar21 = 0xffffffff;
  goto LAB_7100811540;
code_r0x0071008114c8:
  uVar21 = uVar21 - 1;
  pbVar45 = pbVar50;
  if (dVar59 == 0.0) goto LAB_7100811540;
  goto LAB_71008114ac;
LAB_7100811540:
  for (lVar27 = 0; -1 < (int)(uVar21 - (int)lVar27); lVar27 = lVar27 + 1) {
    pbVar50[lVar27] = 0x30;
  }
  uVar42 = (ulong)(uVar21 + 1);
  if ((int)(uVar21 + 1) < 0 != SCARRY4(uVar21,1)) {
    uVar42 = 0;
  }
  pbVar50 = pbVar50 + uVar42;
LAB_710081156c:
  uVar19 = (int)pbVar50 - (int)param_3;
LAB_7100811678:
  uVar49 = local_3b8 - 1;
  uVar21 = uVar18;
  if ((uVar18 & 0xffffffdf) == 0x41) {
    uVar21 = uVar18 + 0xf;
  }
  local_3b0 = (undefined1)uVar21;
  if ((int)uVar49 < 0) {
    local_3af = 0x2d;
    uVar21 = 1 - local_3b8;
  }
  else {
    local_3af = 0x2b;
    uVar21 = uVar49;
  }
  if ((int)uVar21 < 10) {
    if ((uVar18 & 0xffffffdf) == 0x41) {
      pcVar30 = local_3ae;
    }
    else {
      pcVar30 = local_3ae + 1;
      local_3ae[0] = '0';
    }
    local_434 = (int)pcVar30 + 1;
    *pcVar30 = (char)uVar21 + '0';
  }
  else {
    pcVar30 = local_3a3 + 2;
    pcVar46 = pcVar30;
    do {
      pcVar47 = pcVar46;
      cVar4 = (char)(uVar21 / 10);
      pcVar47[-1] = (char)uVar21 + cVar4 * -10 + '0';
      bVar1 = 99 < (int)uVar21;
      pcVar46 = pcVar47 + -1;
      uVar21 = uVar21 / 10;
    } while (bVar1);
    pcVar47[-2] = cVar4 + '0';
    puVar40 = &local_3b0;
    for (pcVar46 = pcVar47 + -2; pcVar46 < pcVar30; pcVar46 = pcVar46 + 1) {
      puVar40[2] = *pcVar46;
      puVar40 = puVar40 + 1;
    }
    local_434 = ((int)&local_3a0 + 1) - (int)pcVar47;
    if (pcVar30 < pcVar47 + -2) {
      local_434 = 0;
    }
    local_434 = local_434 + (int)local_3ae;
  }
  local_434 = local_434 - (int)&local_3b0;
  uVar21 = uVar19 + local_434;
  if ((1 < (int)uVar19) || (bVar9)) {
    uVar21 = uVar21 + local_470;
  }
  bVar13 = false;
  iVar51 = 0;
  iVar17 = 0;
  uVar36 = 0;
  local_3b8 = uVar49;
LAB_7100811894:
  if (local_438 != 0) {
    local_3c1 = '-';
  }
  bVar11 = true;
  uVar49 = 0;
LAB_7100812fd0:
  local_438 = uVar49;
  if ((int)uVar49 < (int)uVar21) {
    local_438 = uVar21;
  }
  if (local_3c1 != '\0') {
    local_438 = local_438 + 1;
  }
  if (bVar10) {
    local_438 = local_438 + 2;
  }
  if ((uVar54 == 0) && (iVar23 = uVar56 - local_438, plVar38 = plVar24, 0 < iVar23)) {
    while( true ) {
      plVar24 = plVar38 + 2;
      local_378 = local_378 + 1;
      if (iVar23 < 0x11) break;
      *plVar38 = (long)"                ";
      plVar38[1] = 0x10;
      local_370 = local_370 + 0x10;
      if (7 < local_378) {
        iVar22 = FUN_7100828d40(param_1,param_2,&local_380);
        if (iVar22 != 0) goto LAB_7100813ecc;
        plVar24 = local_280;
      }
      iVar23 = iVar23 + -0x10;
      plVar38 = plVar24;
    }
    *plVar38 = (long)"                ";
    plVar38[1] = (long)iVar23;
    local_370 = iVar23 + local_370;
    if (7 < local_378) {
      iVar23 = FUN_7100828d40(param_1,param_2,&local_380);
      if (iVar23 != 0) goto LAB_7100813ecc;
      plVar24 = local_280;
    }
  }
  if (local_3c1 != '\0') {
    *plVar24 = (long)&local_3c1;
    plVar24[1] = 1;
    local_370 = local_370 + 1;
    local_378 = local_378 + 1;
    if (local_378 < 8) {
      plVar24 = plVar24 + 2;
    }
    else {
      iVar23 = FUN_7100828d40(param_1,param_2,&local_380);
      if (iVar23 != 0) goto LAB_7100813ecc;
      plVar24 = local_280;
    }
  }
  if (bVar10) {
    *plVar24 = (long)&local_3c0;
    plVar24[1] = 2;
    local_370 = local_370 + 2;
    local_378 = local_378 + 1;
    if (local_378 < 8) {
      plVar24 = plVar24 + 2;
    }
    else {
      iVar23 = FUN_7100828d40(param_1,param_2,&local_380);
      if (iVar23 != 0) goto LAB_7100813ecc;
      plVar24 = local_280;
    }
  }
  if ((uVar54 == 0x80) && (iVar23 = uVar56 - local_438, plVar38 = plVar24, 0 < iVar23)) {
    while( true ) {
      plVar24 = plVar38 + 2;
      local_378 = local_378 + 1;
      if (iVar23 < 0x11) break;
      *plVar38 = (long)"0000000000000000                ";
      plVar38[1] = 0x10;
      local_370 = local_370 + 0x10;
      if (7 < local_378) {
        iVar22 = FUN_7100828d40(param_1,param_2,&local_380);
        if (iVar22 != 0) goto LAB_7100813ecc;
        plVar24 = local_280;
      }
      iVar23 = iVar23 + -0x10;
      plVar38 = plVar24;
    }
    *plVar38 = (long)"0000000000000000                ";
    plVar38[1] = (long)iVar23;
    local_370 = iVar23 + local_370;
    if (7 < local_378) {
      iVar23 = FUN_7100828d40(param_1,param_2,&local_380);
      if (iVar23 != 0) goto LAB_7100813ecc;
      plVar24 = local_280;
    }
  }
  iVar23 = uVar49 - uVar21;
  plVar38 = plVar24;
  if (0 < iVar23) {
    while( true ) {
      plVar24 = plVar38 + 2;
      local_378 = local_378 + 1;
      if (iVar23 < 0x11) break;
      *plVar38 = (long)"0000000000000000                ";
      plVar38[1] = 0x10;
      local_370 = local_370 + 0x10;
      if (7 < local_378) {
        iVar22 = FUN_7100828d40(param_1,param_2,&local_380);
        if (iVar22 != 0) goto LAB_7100813ecc;
        plVar24 = local_280;
      }
      iVar23 = iVar23 + -0x10;
      plVar38 = plVar24;
    }
    *plVar38 = (long)"0000000000000000                ";
    plVar38[1] = (long)iVar23;
    local_370 = iVar23 + local_370;
    if (7 < local_378) {
      iVar23 = FUN_7100828d40(param_1,param_2,&local_380);
      if (iVar23 != 0) goto LAB_7100813ecc;
      plVar24 = local_280;
    }
  }
  if (bVar11) {
    if ((int)uVar18 < 0x66) {
      local_370 = local_370 + 1;
      plVar38 = plVar24 + 2;
      *plVar24 = (long)param_3;
      plVar24[1] = 1;
      local_378 = local_378 + 1;
      if (((int)uVar19 < 2) && (bVar9 == false)) {
joined_r0x007100813d18:
        if (7 < local_378) {
LAB_7100813c74:
          iVar17 = FUN_7100828d40(param_1,param_2,&local_380);
          if (iVar17 != 0) goto LAB_7100813ecc;
          plVar38 = local_280;
        }
      }
      else {
        if (7 < local_378) {
          iVar17 = FUN_7100828d40(param_1,param_2,&local_380);
          if (iVar17 != 0) goto LAB_7100813ecc;
          plVar38 = local_280;
        }
        *plVar38 = lVar25;
        plVar38[1] = lVar26;
        local_370 = local_370 + lVar26;
        local_378 = local_378 + 1;
        if (local_378 < 8) {
          plVar38 = plVar38 + 2;
        }
        else {
          iVar17 = FUN_7100828d40(param_1,param_2,&local_380);
          if (iVar17 != 0) goto LAB_7100813ecc;
          plVar38 = local_280;
        }
        iVar17 = uVar19 - 1;
        if (dVar58 == 0.0) {
          if (1 < (int)uVar19) {
            while( true ) {
              local_378 = local_378 + 1;
              if (iVar17 < 0x11) break;
              *plVar38 = (long)"0000000000000000                ";
              plVar38[1] = 0x10;
              local_370 = local_370 + 0x10;
              plVar38 = plVar38 + 2;
              if (7 < local_378) {
                iVar51 = FUN_7100828d40(param_1,param_2,&local_380);
                if (iVar51 != 0) goto LAB_7100813ecc;
                plVar38 = local_280;
              }
              iVar17 = iVar17 + -0x10;
            }
            *plVar38 = (long)"0000000000000000                ";
            plVar38[1] = (long)iVar17;
            local_370 = iVar17 + local_370;
            plVar38 = plVar38 + 2;
            goto joined_r0x007100813d18;
          }
        }
        else {
          *plVar38 = (long)(param_3 + 1);
          plVar38[1] = (long)iVar17;
          local_370 = iVar17 + local_370;
          local_378 = local_378 + 1;
          if (7 < local_378) goto LAB_7100813c74;
          plVar38 = plVar38 + 2;
        }
      }
      *plVar38 = (long)&local_3b0;
      plVar38[1] = (long)local_434;
      local_370 = local_370 + local_434;
      local_378 = local_378 + 1;
      if (local_378 < 8) {
        plVar38 = plVar38 + 2;
        goto LAB_7100813d74;
      }
    }
    else {
      if (dVar58 == 0.0) {
        *plVar24 = (long)&DAT_71009cfaad;
        plVar24[1] = 1;
        local_370 = local_370 + 1;
        local_378 = local_378 + 1;
        if (local_378 < 8) {
          plVar38 = plVar24 + 2;
        }
        else {
          iVar17 = FUN_7100828d40(param_1,param_2,&local_380);
          if (iVar17 != 0) goto LAB_7100813ecc;
          plVar38 = local_280;
        }
        if (((int)uVar19 <= (int)local_3b8) && (bVar9 == false)) goto LAB_7100813d74;
        *plVar38 = lVar25;
        plVar38[1] = lVar26;
        local_370 = local_370 + lVar26;
        local_378 = local_378 + 1;
        if (local_378 < 8) {
          plVar24 = plVar38 + 2;
        }
        else {
          iVar17 = FUN_7100828d40(param_1,param_2,&local_380);
          if (iVar17 != 0) goto LAB_7100813ecc;
          plVar24 = local_280;
        }
        iVar17 = uVar19 - 1;
        plVar38 = plVar24;
        if (iVar17 < 1) goto LAB_7100813d74;
        while( true ) {
          plVar38 = plVar24 + 2;
          local_378 = local_378 + 1;
          if (iVar17 < 0x11) break;
          *plVar24 = (long)"0000000000000000                ";
          plVar24[1] = 0x10;
          local_370 = local_370 + 0x10;
          if (7 < local_378) {
            iVar51 = FUN_7100828d40(param_1,param_2,&local_380);
            if (iVar51 != 0) goto LAB_7100813ecc;
            plVar38 = local_280;
          }
          iVar17 = iVar17 + -0x10;
          plVar24 = plVar38;
        }
      }
      else {
        if ((int)local_3b8 < 1) {
          *plVar24 = (long)&DAT_71009cfaad;
          plVar24[1] = 1;
          local_370 = local_370 + 1;
          local_378 = local_378 + 1;
          if (local_378 < 8) {
            plVar38 = plVar24 + 2;
          }
          else {
            iVar17 = FUN_7100828d40(param_1,param_2,&local_380);
            if (iVar17 != 0) goto LAB_7100813ecc;
            plVar38 = local_280;
          }
          if ((uVar19 == 0 && local_3b8 == 0) && bVar9 == false) goto LAB_7100813d74;
          *plVar38 = lVar25;
          plVar38[1] = lVar26;
          local_370 = lVar26 + local_370;
          local_378 = local_378 + 1;
          if (local_378 < 8) {
            plVar38 = plVar38 + 2;
          }
          else {
            iVar17 = FUN_7100828d40(param_1,param_2,&local_380);
            if (iVar17 != 0) goto LAB_7100813ecc;
            plVar38 = local_280;
          }
          if ((int)local_3b8 < 0) {
            iVar17 = -local_3b8;
            plVar24 = plVar38;
            while( true ) {
              plVar38 = plVar24 + 2;
              local_378 = local_378 + 1;
              if (iVar17 < 0x11) break;
              *plVar24 = (long)"0000000000000000                ";
              plVar24[1] = 0x10;
              local_370 = local_370 + 0x10;
              if (7 < local_378) {
                iVar51 = FUN_7100828d40(param_1,param_2,&local_380);
                if (iVar51 != 0) goto LAB_7100813ecc;
                plVar38 = local_280;
              }
              iVar17 = iVar17 + -0x10;
              plVar24 = plVar38;
            }
            *plVar24 = (long)"0000000000000000                ";
            plVar24[1] = (long)iVar17;
            local_370 = iVar17 + local_370;
            if (7 < local_378) {
              iVar17 = FUN_7100828d40(param_1,param_2,&local_380);
              if (iVar17 != 0) goto LAB_7100813ecc;
              plVar38 = local_280;
            }
          }
          *plVar38 = (long)param_3;
          plVar38[1] = (long)(int)uVar19;
          local_370 = local_370 + (int)uVar19;
          local_378 = local_378 + 1;
          if (local_378 < 8) {
            plVar38 = plVar38 + 2;
            goto LAB_7100813d74;
          }
          goto LAB_7100813d54;
        }
        uVar21 = uVar36;
        if ((int)uVar19 < (int)uVar36) {
          uVar21 = uVar19;
        }
        if (0 < (int)uVar21) {
          *plVar24 = (long)param_3;
          plVar24[1] = (long)(int)uVar21;
          local_370 = (int)uVar21 + local_370;
          local_378 = local_378 + 1;
          if (local_378 < 8) {
            plVar24 = plVar24 + 2;
          }
          else {
            iVar23 = FUN_7100828d40(param_1,param_2,&local_380);
            if (iVar23 != 0) goto LAB_7100813ecc;
            plVar24 = local_280;
          }
        }
        iVar23 = uVar36 - (uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU));
        plVar38 = plVar24;
        if (0 < iVar23) {
          while( true ) {
            plVar24 = plVar38 + 2;
            local_378 = local_378 + 1;
            if (iVar23 < 0x11) break;
            *plVar38 = (long)"0000000000000000                ";
            plVar38[1] = 0x10;
            local_370 = local_370 + 0x10;
            if (7 < local_378) {
              iVar22 = FUN_7100828d40(param_1,param_2,&local_380);
              if (iVar22 != 0) goto LAB_7100813ecc;
              plVar24 = local_280;
            }
            iVar23 = iVar23 + -0x10;
            plVar38 = plVar24;
          }
          *plVar38 = (long)"0000000000000000                ";
          plVar38[1] = (long)iVar23;
          local_370 = iVar23 + local_370;
          if (7 < local_378) {
            iVar23 = FUN_7100828d40(param_1,param_2,&local_380);
            if (iVar23 != 0) goto LAB_7100813ecc;
            plVar24 = local_280;
          }
        }
        pbVar45 = param_3 + (int)uVar36;
        if (bVar13) {
          while (0 < iVar17 || 0 < iVar51) {
            if (iVar51 < 1) {
              local_460 = local_460 + -1;
              iVar17 = iVar17 + -1;
            }
            else {
              iVar51 = iVar51 + -1;
            }
            *plVar24 = local_448;
            plVar24[1] = local_458;
            local_370 = local_370 + local_458;
            local_378 = local_378 + 1;
            if (local_378 < 8) {
              plVar24 = plVar24 + 2;
            }
            else {
              iVar23 = FUN_7100828d40(param_1,param_2,&local_380);
              if (iVar23 != 0) goto LAB_7100813ecc;
              plVar24 = local_280;
            }
            uVar36 = ((int)param_3 + uVar19) - (int)pbVar45;
            uVar21 = (uint)*local_460;
            if ((int)uVar36 <= (int)(uint)*local_460) {
              uVar21 = uVar36;
            }
            if (0 < (int)uVar21) {
              *plVar24 = (long)pbVar45;
              plVar24[1] = (long)(int)uVar21;
              local_370 = (int)uVar21 + local_370;
              local_378 = local_378 + 1;
              if (local_378 < 8) {
                plVar24 = plVar24 + 2;
              }
              else {
                iVar23 = FUN_7100828d40(param_1,param_2,&local_380);
                if (iVar23 != 0) goto LAB_7100813ecc;
                plVar24 = local_280;
              }
            }
            iVar23 = (uint)*local_460 - (uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU));
            plVar38 = plVar24;
            if (0 < iVar23) {
              while( true ) {
                local_378 = local_378 + 1;
                plVar24 = plVar38 + 2;
                if (iVar23 < 0x11) break;
                *plVar38 = (long)"0000000000000000                ";
                plVar38[1] = 0x10;
                local_370 = local_370 + 0x10;
                if (7 < local_378) {
                  iVar22 = FUN_7100828d40(param_1,param_2,&local_380);
                  if (iVar22 != 0) goto LAB_7100813ecc;
                  plVar24 = local_280;
                }
                iVar23 = iVar23 + -0x10;
                plVar38 = plVar24;
              }
              *plVar38 = (long)"0000000000000000                ";
              plVar38[1] = (long)iVar23;
              local_370 = iVar23 + local_370;
              if (7 < local_378) {
                iVar23 = FUN_7100828d40(param_1,param_2,&local_380);
                if (iVar23 != 0) goto LAB_7100813ecc;
                plVar24 = local_280;
              }
            }
            pbVar45 = pbVar45 + *local_460;
          }
          if (param_3 + (int)uVar19 < pbVar45) {
            pbVar45 = param_3 + (int)uVar19;
          }
        }
        if (((int)local_3b8 < (int)uVar19) || (bVar9 != false)) {
          *plVar24 = lVar25;
          plVar24[1] = lVar26;
          local_370 = local_370 + lVar26;
          local_378 = local_378 + 1;
          if (local_378 < 8) {
            plVar24 = plVar24 + 2;
          }
          else {
            iVar17 = FUN_7100828d40(param_1,param_2,&local_380);
            if (iVar17 != 0) goto LAB_7100813ecc;
            plVar24 = local_280;
          }
        }
        uVar36 = ((int)param_3 + uVar19) - (int)pbVar45;
        uVar21 = uVar19 - local_3b8;
        if ((int)uVar36 < (int)(uVar19 - local_3b8)) {
          uVar21 = uVar36;
        }
        if (0 < (int)uVar21) {
          *plVar24 = (long)pbVar45;
          plVar24[1] = (long)(int)uVar21;
          local_370 = (int)uVar21 + local_370;
          local_378 = local_378 + 1;
          if (local_378 < 8) {
            plVar24 = plVar24 + 2;
          }
          else {
            iVar17 = FUN_7100828d40(param_1,param_2,&local_380);
            if (iVar17 != 0) goto LAB_7100813ecc;
            plVar24 = local_280;
          }
        }
        iVar17 = (uVar19 - local_3b8) - (uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU));
        plVar38 = plVar24;
        if (iVar17 < 1) goto LAB_7100813d74;
        while( true ) {
          plVar38 = plVar24 + 2;
          local_378 = local_378 + 1;
          if (iVar17 < 0x11) break;
          *plVar24 = (long)"0000000000000000                ";
          plVar24[1] = 0x10;
          local_370 = local_370 + 0x10;
          if (7 < local_378) {
            iVar51 = FUN_7100828d40(param_1,param_2,&local_380);
            if (iVar51 != 0) goto LAB_7100813ecc;
            plVar38 = local_280;
          }
          iVar17 = iVar17 + -0x10;
          plVar24 = plVar38;
        }
      }
      *plVar24 = (long)"0000000000000000                ";
      plVar24[1] = (long)iVar17;
      local_370 = iVar17 + local_370;
      if (local_378 < 8) goto LAB_7100813d74;
    }
  }
  else {
    *plVar24 = (long)param_3;
    plVar24[1] = (long)(int)uVar21;
    local_370 = (int)uVar21 + local_370;
    local_378 = local_378 + 1;
    if (local_378 < 8) {
      plVar38 = plVar24 + 2;
      goto LAB_7100813d74;
    }
  }
LAB_7100813d54:
  iVar17 = FUN_7100828d40(param_1,param_2,&local_380);
  if (iVar17 != 0) goto LAB_7100813ecc;
  plVar38 = local_280;
LAB_7100813d74:
  if (((uVar54 >> 2 & 1) != 0) && (iVar17 = uVar56 - local_438, 0 < iVar17)) {
    for (; local_378 = local_378 + 1, 0x10 < iVar17; iVar17 = iVar17 + -0x10) {
      *plVar38 = (long)"                ";
      plVar38[1] = 0x10;
      local_370 = local_370 + 0x10;
      if (local_378 < 8) {
        plVar38 = plVar38 + 2;
      }
      else {
        iVar51 = FUN_7100828d40(param_1,param_2,&local_380);
        if (iVar51 != 0) goto LAB_7100813ecc;
        plVar38 = local_280;
      }
    }
    *plVar38 = (long)"                ";
    plVar38[1] = (long)iVar17;
    local_370 = iVar17 + local_370;
    if ((7 < local_378) && (iVar17 = FUN_7100828d40(param_1,param_2,&local_380), iVar17 != 0))
    goto LAB_7100813ecc;
  }
  if ((int)uVar56 < (int)local_438) {
    uVar56 = local_438;
  }
  local_464 = local_464 + uVar56;
  if ((local_370 != 0) && (iVar17 = FUN_7100828d40(param_1,param_2,&local_380), iVar17 != 0))
  goto LAB_7100813ecc;
  local_378 = 0;
  if (pbVar57 != (byte *)0x0) {
    FUN_7100816da0(param_1,pbVar57);
  }
  plVar24 = local_280;
  param_3 = pbVar53;
  goto LAB_71008104d8;
switchD_7100810614_caseD_31:
  uVar36 = 0;
  pbVar45 = pbVar53;
  do {
    uVar36 = (uVar18 - 0x30) + uVar36 * 10;
    pbVar53 = pbVar45 + 1;
    uVar18 = (uint)*pbVar45;
    pbVar45 = pbVar53;
  } while (uVar18 - 0x30 < 10);
  if (uVar18 == 0x24) goto code_r0x0071008109f8;
  goto LAB_71008105fc;
code_r0x0071008109f8:
  if (0x20 < (int)uVar36) goto LAB_7100813ee4;
  uVar42 = (ulong)(uVar36 - 1);
  bVar12 = true;
  goto LAB_71008105f4;
LAB_710081087c:
  if (0x20 < iVar17) goto LAB_7100813ee4;
  uVar21 = iVar17 - 1;
  if ((int)uVar21 < (int)local_3bc) {
    uVar21 = *(uint *)((long)local_200 +
                      (-(ulong)(uVar21 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar21 << 4));
  }
  else {
    puVar43 = (uint *)FUN_710080fbc8(param_1,(ulong)uVar21,pbVar57,param_4,&local_3bc,local_200,
                                     local_300,&local_3a0);
    uVar21 = *puVar43;
  }
LAB_710081097c:
  if ((int)uVar21 < 0) {
    uVar21 = 0xffffffff;
  }
  goto LAB_71008105f4;
LAB_71008106fc:
  if (0x20 < iVar17) goto LAB_7100813ee4;
  uVar56 = iVar17 - 1;
  pbVar53 = pbVar50;
  if ((int)uVar56 < (int)local_3bc) {
    uVar56 = *(uint *)((long)local_200 +
                      (-(ulong)(uVar56 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar56 << 4));
  }
  else {
    puVar43 = (uint *)FUN_710080fbc8(param_1,(ulong)uVar56,pbVar57,param_4,&local_3bc,local_200,
                                     local_300,&local_3a0);
    uVar56 = *puVar43;
  }
LAB_7100810800:
  if ((int)uVar56 < 0) {
    uVar56 = -uVar56;
    local_480 = (ulong)uVar48;
switchD_7100810614_caseD_2d:
    uVar54 = uVar54 | 4;
  }
  else {
    local_480 = (ulong)uVar48;
  }
  goto LAB_71008105f4;
LAB_710081243c:
  pbVar57 = (byte *)0x0;
  uVar16 = *(ushort *)(param_2 + 0x10) | 0x40;
LAB_71008124fc:
  *(ushort *)(param_2 + 0x10) = uVar16;
LAB_7100813ecc:
  if (pbVar57 != (byte *)0x0) {
    FUN_7100816da0(param_1,pbVar57);
  }
LAB_7100813ee4:
  if (((*(uint *)(param_2 + 0xb4) & 1) == 0) && ((*(ushort *)(param_2 + 0x10) >> 9 & 1) == 0)) {
    FUN_7100836220(param_2 + 0xa0);
  }
  if ((*(ushort *)(param_2 + 0x10) >> 6 & 1) != 0) {
    return -1;
  }
  return local_464;
}



// ===== FUN_7100813f2c @ 7100813f2c (size=208) =====

int FUN_7100813f2c(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *local_4b8;
  undefined4 local_4ac;
  ushort local_4a8;
  undefined2 local_4a6;
  undefined1 *local_4a0;
  undefined4 local_498;
  undefined4 local_490;
  undefined8 local_488;
  undefined8 local_478;
  undefined8 local_418;
  undefined4 local_410;
  undefined4 local_404;
  undefined1 auStack_400 [1024];
  
  local_490 = 0;
  local_4a8 = *(ushort *)(param_2 + 0x10) & 0xfffd;
  local_404 = *(undefined4 *)(param_2 + 0xb4);
  local_4a6 = *(undefined2 *)(param_2 + 0x12);
  local_488 = *(undefined8 *)(param_2 + 0x30);
  local_478 = *(undefined8 *)(param_2 + 0x40);
  local_4b8 = auStack_400;
  local_4ac = 0x400;
  local_498 = 0x400;
  local_418 = 0;
  local_410 = 0;
  local_4a0 = local_4b8;
  iVar1 = FUN_7100810358();
  if ((-1 < iVar1) && (iVar2 = FUN_710081c760(param_1,&local_4b8), iVar2 != 0)) {
    iVar1 = -1;
  }
  if ((local_4a8 >> 6 & 1) != 0) {
    *(ushort *)(param_2 + 0x10) = *(ushort *)(param_2 + 0x10) | 0x40;
  }
  return iVar1;
}



// ===== FUN_7100814000 @ 7100814000 (size=188) =====

undefined8 * FUN_7100814000(undefined8 param_1,ulong param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_3;
  if (SUB168(auVar1 * auVar2,8) == 0) {
    puVar3 = (undefined8 *)FUN_7100814ca0(param_1,param_2 * param_3);
    if (puVar3 != (undefined8 *)0x0) {
      uVar6 = (puVar3[-1] & 0xfffffffffffffffc) - 8;
      if (uVar6 < 0x49) {
        puVar4 = puVar3;
        if (0x27 < uVar6) {
          puVar4 = puVar3 + 2;
          *puVar3 = 0;
          puVar3[1] = 0;
          if (0x37 < uVar6) {
            puVar3[2] = 0;
            puVar3[3] = 0;
            puVar4 = puVar3 + 4;
            if (uVar6 == 0x48) {
              puVar4 = puVar3 + 6;
              puVar3[4] = 0;
              puVar3[5] = 0;
            }
          }
        }
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        return puVar3;
      }
      FUN_7100808340(puVar3,0);
      return puVar3;
    }
  }
  else {
    puVar5 = (undefined4 *)FUN_710080e8e0();
    *puVar5 = 0xc;
  }
  return (undefined8 *)0x0;
}



// ===== FUN_71008140c0 @ 71008140c0 (size=204) =====

uint FUN_71008140c0(long *param_1)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
  uint uVar4;
  
  lVar2 = FUN_7100834b00();
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x48) == 0)) {
    FUN_710080d840();
  }
  if (((*(uint *)((long)param_1 + 0xb4) & 1) == 0) && ((*(ushort *)(param_1 + 2) >> 9 & 1) == 0)) {
    FUN_7100836200(param_1 + 0x14);
  }
  iVar1 = (int)param_1[1] + -1;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 < 0) {
    uVar4 = FUN_710081f6e0(lVar2,param_1);
  }
  else {
    pbVar3 = (byte *)*param_1;
    *param_1 = (long)(pbVar3 + 1);
    uVar4 = (uint)*pbVar3;
  }
  if (((*(uint *)((long)param_1 + 0xb4) & 1) == 0) && ((*(ushort *)(param_1 + 2) >> 9 & 1) == 0)) {
    FUN_7100836220(param_1 + 0x14);
    return uVar4;
  }
  return uVar4;
}



// ===== FUN_71008141a0 @ 71008141a0 (size=60) =====

int FUN_71008141a0(long param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      iVar1 = *(int *)(param_1 + lVar3 * 4);
      iVar2 = *(int *)(param_2 + lVar3 * 4);
      if (iVar1 != iVar2) {
        return iVar1 - iVar2;
      }
    } while ((iVar1 != 0) && (lVar3 = lVar3 + 1, param_3 != lVar3));
  }
  return 0;
}



// ===== FUN_71008141e0 @ 71008141e0 (size=44) =====

void FUN_71008141e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_710081d8c0(uVar1,param_1,param_2);
  return;
}



// ===== FUN_7100814220 @ 7100814220 (size=44) =====

void FUN_7100814220(undefined4 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_71008349a0(uVar1,param_1,param_2);
  return;
}



// ===== FUN_7100814260 @ 7100814260 (size=876) =====

void FUN_7100814260(uint *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  
  if (*param_1 < 0x3c) {
    uVar5 = param_1[1];
LAB_7100814280:
    if (uVar5 < 0x3c) goto LAB_7100814288;
LAB_71008144a0:
    lVar3 = FUN_71008284e0(uVar5,0x3c);
    uVar5 = param_1[2] + (int)lVar3;
    param_1[2] = uVar5;
    uVar6 = (uint)((ulong)lVar3 >> 0x20);
    if (lVar3 < 0) {
      uVar5 = uVar5 - 1;
      param_1[1] = uVar6 + 0x3c;
      param_1[2] = uVar5;
    }
    else {
      param_1[1] = uVar6;
    }
  }
  else {
    lVar3 = FUN_71008284e0(*param_1,0x3c);
    uVar5 = param_1[1] + (int)lVar3;
    param_1[1] = uVar5;
    uVar6 = (uint)((ulong)lVar3 >> 0x20);
    if (lVar3 < 0) {
      uVar5 = uVar5 - 1;
      *param_1 = uVar6 + 0x3c;
      param_1[1] = uVar5;
      goto LAB_7100814280;
    }
    *param_1 = uVar6;
    if (0x3b < uVar5) goto LAB_71008144a0;
LAB_7100814288:
    uVar5 = param_1[2];
  }
  if (0x17 < uVar5) {
    lVar3 = FUN_71008284e0(uVar5,0x18);
    uVar5 = param_1[3] + (int)lVar3;
    param_1[3] = uVar5;
    uVar6 = (uint)((ulong)lVar3 >> 0x20);
    if (-1 < lVar3) {
      param_1[2] = uVar6;
      uVar5 = param_1[4];
      goto joined_r0x00710081429c;
    }
    param_1[2] = uVar6 + 0x18;
    param_1[3] = uVar5 - 1;
  }
  uVar5 = param_1[4];
joined_r0x00710081429c:
  uVar7 = (ulong)uVar5;
  if (uVar5 < 0xc) {
    uVar5 = param_1[5];
  }
  else {
    lVar3 = FUN_71008284e0(uVar7,0xc);
    uVar7 = lVar3 >> 0x20 & 0xffffffff;
    uVar5 = param_1[5] + (int)lVar3;
    param_1[5] = uVar5;
    uVar6 = (uint)((ulong)lVar3 >> 0x20);
    if (lVar3 < 0) {
      uVar6 = uVar6 + 0xc;
      uVar7 = (ulong)uVar6;
      uVar5 = uVar5 - 1;
      param_1[4] = uVar6;
      param_1[5] = uVar5;
    }
    else {
      param_1[4] = uVar6;
    }
  }
  iVar8 = 0x1c;
  if (((uVar5 & 3) == 0) &&
     (iVar8 = 0x1d, (uVar5 * -0x3d70a3d7 + 0x51eb850 >> 2 | uVar5 * 0x40000000) < 0x28f5c29)) {
    uVar6 = param_1[3];
    iVar8 = (((uVar5 + 0x76c) * -0x3d70a3d7 + 0x51eb850 >> 4 | (uVar5 + 0x76c) * -0x70000000) <
            0xa3d70b) + 0x1c;
  }
  else {
    uVar6 = param_1[3];
  }
  if (0 < (int)uVar6) {
    do {
      lVar3 = (long)(int)uVar7;
      do {
        iVar2 = (int)lVar3;
        iVar4 = iVar8;
        if (iVar2 != 1) {
          iVar4 = (&DAT_71009cfbc0)[lVar3];
        }
        if ((int)uVar6 <= iVar4) {
          return;
        }
        uVar6 = uVar6 - iVar4;
        lVar3 = lVar3 + 1;
        param_1[3] = uVar6;
        param_1[4] = iVar2 + 1;
      } while ((int)lVar3 != 0xc);
      uVar1 = param_1[5];
      iVar8 = 0x1c;
      uVar5 = uVar1 + 1;
      param_1[4] = 0;
      param_1[5] = uVar5;
      if (((uVar5 & 3) == 0) &&
         (iVar8 = 0x1d, (uVar5 * -0x3d70a3d7 + 0x51eb850 >> 2 | uVar5 * 0x40000000) < 0x28f5c29)) {
        iVar8 = uVar1 + 0x76d;
        uVar7 = 0;
        iVar8 = ((iVar8 * -0x3d70a3d7 + 0x51eb850U >> 4 | iVar8 * -0x70000000) < 0xa3d70b) + 0x1c;
      }
      else {
        uVar7 = 0;
      }
    } while( true );
  }
  do {
    uVar5 = (int)uVar7 - 1;
    uVar7 = (ulong)uVar5;
    if (uVar5 == 0xffffffff) {
      uVar5 = param_1[5];
      iVar8 = 0x1c;
      uVar1 = uVar5 - 1;
      param_1[5] = uVar1;
      if (((uVar1 & 3) == 0) &&
         (iVar8 = 0x1d, (uVar1 * -0x3d70a3d7 + 0x51eb850 >> 2 | uVar1 * 0x40000000) < 0x28f5c29)) {
        iVar8 = uVar5 + 0x76b;
        iVar8 = ((iVar8 * -0x3d70a3d7 + 0x51eb850U >> 4 | iVar8 * -0x70000000) < 0xa3d70b) + 0x1c;
      }
      if (0 < (int)(uVar6 + 0x1f)) {
        param_1[3] = uVar6 + 0x1f;
        param_1[4] = 0xb;
        return;
      }
      uVar6 = uVar6 + 0x3d;
      if (0 < (int)uVar6) {
        param_1[3] = uVar6;
        param_1[4] = 10;
        return;
      }
      uVar7 = 9;
    }
    else if (uVar5 == 1) {
      uVar6 = uVar6 + iVar8;
      uVar5 = 1;
      if (0 < (int)uVar6) break;
      uVar7 = 0;
    }
    uVar5 = (uint)uVar7;
    uVar6 = uVar6 + (&DAT_71009cfbc0)[(int)uVar5];
  } while ((int)uVar6 < 1);
  param_1[3] = uVar6;
  param_1[4] = uVar5;
  return;
}



// ===== FUN_71008145e0 @ 71008145e0 (size=1252) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_71008145e0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  
  piVar7 = (int *)FUN_710080f8e0();
  FUN_7100814260(param_1);
  uVar2 = param_1[5];
  lVar12 = (long)*(int *)("0000000000000000                " + (long)param_1[4] * 4 + 0x20) +
           (long)(param_1[3] + -1);
  if ((1 < param_1[4]) && ((uVar2 & 3) == 0)) {
    if ((uVar2 * -0x3d70a3d7 + 0x51eb850 >> 2 | uVar2 * 0x40000000) < 0x28f5c29) {
      if (((uVar2 + 0x76c) * -0x3d70a3d7 + 0x51eb850 >> 4 | (uVar2 + 0x76c) * -0x70000000) <
          0xa3d70b) {
        lVar12 = lVar12 + 1;
      }
    }
    else {
      lVar12 = lVar12 + 1;
    }
  }
  param_1[7] = (int)lVar12;
  if (20000 < uVar2 + 10000) {
    return -1;
  }
  if ((int)uVar2 < 0x47) {
    if (uVar2 != 0x46) {
      if (uVar2 == 0x45) {
        lVar12 = lVar12 + -0x16d;
      }
      else {
        uVar13 = 0x45;
        do {
          lVar8 = 0x16d;
          if (((uVar13 & 3) == 0) &&
             (lVar8 = 0x16e,
             (uVar13 * -0x3d70a3d7 + 0x51eb850 >> 2 | uVar13 * 0x40000000) < 0x28f5c29)) {
            lVar8 = (ulong)(((uVar13 + 0x76c) * -0x3d70a3d7 + 0x51eb850 >> 4 |
                            (uVar13 + 0x76c) * -0x70000000) < 0xa3d70b) + 0x16d;
          }
          uVar13 = uVar13 - 1;
          lVar12 = lVar12 - lVar8;
        } while (uVar13 != uVar2);
        lVar8 = 0x16d;
        if (((uVar2 & 3) == 0) &&
           (lVar8 = 0x16e, (uVar2 * -0x3d70a3d7 + 0x51eb850 >> 2 | uVar2 * 0x40000000) < 0x28f5c29))
        {
          lVar8 = (ulong)(((uVar2 + 0x76c) * -0x3d70a3d7 + 0x51eb850 >> 4 |
                          (uVar2 + 0x76c) * -0x70000000) < 0xa3d70b) + 0x16d;
        }
        lVar12 = lVar12 - lVar8;
      }
    }
  }
  else {
    uVar13 = 0x46;
    do {
      lVar8 = 0x16d;
      if (((uVar13 & 3) == 0) &&
         (lVar8 = 0x16e, (uVar13 * -0x3d70a3d7 >> 2 | uVar13 * 0x40000000) < 0x28f5c29)) {
        lVar8 = (ulong)(((uVar13 + 0x76c) * -0x3d70a3d7 >> 4 | (uVar13 + 0x76c) * -0x70000000) <
                       0xa3d70b) + 0x16d;
      }
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + lVar8;
    } while (uVar13 != uVar2);
  }
  lVar8 = (long)*param_1 + (long)param_1[1] * 0x3c + (long)param_1[2] * 0xe10 + lVar12 * 0x15180;
  FUN_7100814c60();
  FUN_710080e8c0();
  uVar13 = _DAT_7100d22f90;
  if (_DAT_7100d22f90 == 0) {
LAB_7100814900:
    lVar8 = lVar8 + *(long *)(piVar7 + 10);
  }
  else {
    uVar3 = param_1[8];
    uVar1 = uVar3;
    if (0 < (int)uVar3) {
      uVar1 = 1;
    }
    uVar13 = uVar1;
    if ((piVar7[1] == param_1[5] + 0x76c) || (iVar5 = FUN_710081e6c0(), iVar5 != 0)) {
      lVar9 = *(long *)(piVar7 + 0x14);
      lVar11 = *(long *)(piVar7 + 0x12) - *(long *)(piVar7 + 10);
      if (lVar8 < *(long *)(piVar7 + 0x12) - lVar9 && lVar11 <= lVar8) goto LAB_71008147a4;
      bVar4 = lVar8 < *(long *)(piVar7 + 8) - lVar9;
      if (*piVar7 == 0) {
        bVar4 = bVar4 && lVar11 <= lVar8;
      }
      else {
        bVar4 = bVar4 || lVar11 <= lVar8;
      }
      uVar13 = (uint)!bVar4;
      if (((int)uVar3 < 0) || ((uVar13 ^ uVar1) != 1)) goto LAB_71008147a4;
      iVar5 = param_1[3];
      iVar10 = (int)*(long *)(piVar7 + 10) - (int)lVar9;
      if (uVar13 == 0) {
        *param_1 = *param_1 - iVar10;
        lVar8 = lVar8 + -iVar10;
        FUN_7100814260(param_1);
        iVar5 = param_1[3] - iVar5;
        if (iVar5 == 0) {
          uVar13 = 0;
          goto LAB_7100814900;
        }
LAB_71008149c0:
        lVar9 = -1;
        iVar10 = -1;
        if ((iVar5 < 2) && (lVar9 = (long)iVar5, iVar10 = iVar5, iVar5 + 1 < 0 != SCARRY4(iVar5,1)))
        {
          lVar9 = 1;
          iVar10 = 1;
        }
        lVar12 = lVar12 + lVar9;
        iVar10 = iVar10 + param_1[7];
        if (iVar10 < 0) {
          uVar1 = uVar2 - 1;
          iVar5 = 0x16c;
          if (((uVar1 & 3) == 0) &&
             (iVar5 = 0x16d, (uVar1 * -0x3d70a3d7 + 0x51eb850 >> 2 | uVar1 * 0x40000000) < 0x28f5c29
             )) {
            param_1[7] = (((uVar2 + 0x76b) * -0x3d70a3d7 + 0x51eb850 >> 4 |
                          (uVar2 + 0x76b) * -0x70000000) < 0xa3d70b) + 0x16c;
            goto LAB_71008147a4;
          }
        }
        else {
          iVar6 = 0x16d;
          if (((uVar2 & 3) == 0) &&
             (iVar6 = 0x16e, (uVar2 * -0x3d70a3d7 + 0x51eb850 >> 2 | uVar2 * 0x40000000) < 0x28f5c29
             )) {
            iVar6 = (((uVar2 + 0x76c) * -0x3d70a3d7 + 0x51eb850 >> 4 | (uVar2 + 0x76c) * -0x70000000
                     ) < 0xa3d70b) + 0x16d;
          }
          iVar5 = iVar10 - iVar6;
          if (iVar10 < iVar6) {
            iVar5 = iVar10;
          }
        }
        param_1[7] = iVar5;
        goto LAB_71008147a4;
      }
      *param_1 = iVar10 + *param_1;
      lVar8 = lVar8 + iVar10;
      FUN_7100814260(param_1);
      iVar5 = param_1[3] - iVar5;
      if (iVar5 != 0) goto LAB_71008149c0;
    }
    else {
LAB_71008147a4:
      if (uVar13 != 1) goto LAB_7100814900;
    }
    uVar13 = 1;
    lVar8 = lVar8 + *(long *)(piVar7 + 0x14);
  }
  FUN_7100814c80();
  param_1[8] = uVar13;
  lVar12 = (lVar12 + 4) % 7;
  iVar5 = (int)lVar12;
  if (lVar12 < 0) {
    iVar5 = iVar5 + 7;
  }
  param_1[6] = iVar5;
  return lVar8;
}



// ===== FUN_7100814ae0 @ 7100814ae0 (size=56) =====

char * FUN_7100814ae0(char *param_1,char *param_2,long param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = param_2;
  if (param_3 == 0) {
LAB_7100814b04:
    do {
      pcVar3 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar3;
    } while (cVar1 != '\0');
  }
  else {
    do {
      param_3 = param_3 + -1;
      if (param_3 == 0) {
        *param_1 = '\0';
        goto LAB_7100814b04;
      }
      pcVar3 = pcVar2 + 1;
      cVar1 = *pcVar2;
      *param_1 = cVar1;
      param_1 = param_1 + 1;
      pcVar2 = pcVar3;
    } while (cVar1 != '\0');
  }
  return pcVar3 + (-1 - (long)param_2);
}



// ===== thunk_FUN_7100828880 @ 7100814b20 (size=4) =====

undefined8 thunk_FUN_7100828880(undefined4 *param_1,long *param_2,ulong param_3,uint param_4)

{
  short sVar1;
  ulong uVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  undefined1 auStack_68 [4];
  uint uStack_64;
  long lStack_58;
  
  if ((param_1 != (undefined4 *)0x0) && (*(long *)(param_1 + 0x12) == 0)) {
    FUN_710080d840();
  }
  if (((*(uint *)((long)param_2 + 0xb4) & 1) == 0) && (((uint)(int)(short)param_2[2] >> 9 & 1) == 0)
     ) {
    FUN_7100836200(param_2 + 0x14);
    if ((*(ushort *)(param_2 + 2) & 0x108) == 0x108) {
LAB_7100828c20:
      FUN_710081c760(param_1,param_2);
    }
  }
  else if (((int)(short)param_2[2] & 0x108U) == 0x108) goto LAB_7100828c20;
  pcVar12 = (code *)param_2[9];
  if (pcVar12 == (code *)0x0) {
    *param_1 = 0x1d;
LAB_7100828d34:
    uVar9 = *(uint *)((long)param_2 + 0xb4);
joined_r0x007100828d38:
    if (((uVar9 & 1) == 0) && ((*(ushort *)(param_2 + 2) >> 9 & 1) == 0)) {
      FUN_7100836220(param_2 + 0x14);
    }
    return 0xffffffff;
  }
  if (param_4 == 1) {
    FUN_710081c760(param_1,param_2);
    sVar1 = (short)param_2[2];
    if (((uint)(int)sVar1 >> 0xc & 1) == 0) {
      lVar6 = (*pcVar12)(param_1,param_2[6],0,1);
      if (lVar6 == -1) goto LAB_7100828d34;
      sVar1 = (short)param_2[2];
      lVar5 = param_2[3];
      if (((uint)(int)sVar1 >> 2 & 1) == 0) goto LAB_7100828bdc;
LAB_7100828a38:
      lVar8 = lVar6 - (int)param_2[1];
      if (param_2[0xb] != 0) {
        lVar8 = lVar8 - (int)param_2[0xe];
      }
    }
    else {
      lVar5 = param_2[3];
      lVar6 = param_2[0x12];
      if (((uint)(int)sVar1 >> 2 & 1) != 0) goto LAB_7100828a38;
LAB_7100828bdc:
      lVar8 = lVar6;
      if ((((uint)(int)sVar1 >> 3 & 1) != 0) && (lVar8 = lVar6 + (*param_2 - lVar5), *param_2 == 0))
      {
        lVar8 = lVar6;
      }
    }
    param_3 = param_3 + lVar8;
    uVar9 = 1;
    param_4 = 0;
  }
  else {
    uVar9 = param_4 & 0xfffffffd;
    if ((param_4 & 0xfffffffd) != 0) {
      *param_1 = 0x16;
      uVar9 = *(uint *)((long)param_2 + 0xb4);
      goto joined_r0x007100828d38;
    }
    lVar5 = param_2[3];
    lVar8 = 0;
  }
  if (lVar5 == 0) {
    FUN_710081cc80(param_1,param_2);
  }
  uVar3 = *(ushort *)(param_2 + 2);
  if (((int)(short)uVar3 & 0x81aU) == 0) {
    if (((uint)(int)(short)uVar3 >> 10 & 1) == 0) {
      if ((pcVar12 == FUN_7100823e00) && (-1 < *(short *)((long)param_2 + 0x12))) {
        iVar4 = FUN_71008349a0(param_1,(long)*(short *)((long)param_2 + 0x12),auStack_68);
        uVar3 = *(ushort *)(param_2 + 2);
        if ((iVar4 == 0) && ((uStack_64 & 0xf000) == 0x8000)) {
          *(ushort *)(param_2 + 2) = uVar3 | 0x400;
          *(undefined4 *)(param_2 + 0x11) = 0x400;
          goto LAB_7100828acc;
        }
      }
      *(ushort *)(param_2 + 2) = uVar3 | 0x800;
      goto LAB_7100828958;
    }
LAB_7100828acc:
    uVar2 = param_3;
    if (param_4 != 0) {
      iVar4 = FUN_71008349a0(param_1,(long)*(short *)((long)param_2 + 0x12),auStack_68);
      if (iVar4 != 0) goto LAB_7100828958;
      uVar2 = param_3 + lStack_58;
    }
    if (uVar9 == 0) {
      if ((*(ushort *)(param_2 + 2) >> 0xc & 1) == 0) {
        lVar8 = (*pcVar12)(param_1,param_2[6],0,1);
        if (lVar8 == -1) goto LAB_7100828958;
      }
      else {
        lVar8 = param_2[0x12];
      }
      lVar6 = param_2[0xb];
      lVar5 = (long)(int)param_2[1];
      lVar8 = lVar8 - lVar5;
      if (lVar6 == 0) goto LAB_7100828ca8;
      lVar10 = (long)(int)param_2[0xe];
      lVar8 = lVar8 - lVar10;
LAB_7100828af0:
      lVar11 = param_2[3];
      lVar8 = (lVar8 + lVar5) - (param_2[0xd] - lVar11);
      lVar10 = lVar10 + (param_2[0xd] - lVar11);
    }
    else {
      lVar6 = param_2[0xb];
      lVar5 = (long)(int)param_2[1];
      if (lVar6 != 0) {
        lVar10 = (long)(int)param_2[0xe];
        lVar5 = (long)(int)param_2[1];
        goto LAB_7100828af0;
      }
LAB_7100828ca8:
      lVar11 = param_2[3];
      lVar8 = lVar8 - (*param_2 - lVar11);
      lVar10 = lVar5 + (*param_2 - lVar11);
      lVar6 = 0;
    }
    if (((long)uVar2 < lVar8) || ((ulong)(lVar10 + lVar8) <= uVar2)) {
      uVar7 = (long)-(int)param_2[0x11] & uVar2;
      lVar6 = (*pcVar12)(param_1,param_2[6],uVar7,0);
      if (lVar6 != -1) {
        *param_2 = param_2[3];
        *(undefined4 *)(param_2 + 1) = 0;
        if (param_2[0xb] != 0) {
          if (param_2[0xb] != (long)param_2 + 0x74) {
            FUN_7100816da0(param_1);
          }
          param_2[0xb] = 0;
        }
        uVar2 = uVar2 - uVar7;
        *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) & 0xffdf;
        if (uVar2 == 0) goto LAB_71008289c0;
        iVar4 = FUN_710081ca20(param_1,param_2);
        if ((iVar4 == 0) && (uVar2 <= (ulong)(long)(int)param_2[1])) {
          *(int *)(param_2 + 1) = (int)param_2[1] - (int)uVar2;
          *param_2 = *param_2 + uVar2;
          goto LAB_71008289c0;
        }
      }
      goto LAB_7100828958;
    }
    *(int *)(param_2 + 1) = ((int)lVar10 + (int)lVar8) - (int)uVar2;
    *param_2 = lVar11 + ((int)uVar2 - (int)lVar8);
    if (lVar6 != 0) {
      if (lVar6 != (long)param_2 + 0x74) {
        FUN_7100816da0(param_1);
      }
      param_2[0xb] = 0;
    }
    uVar3 = *(ushort *)(param_2 + 2) & 0xffdf;
  }
  else {
LAB_7100828958:
    iVar4 = FUN_710081c760(param_1,param_2);
    if ((iVar4 != 0) || (lVar6 = (*pcVar12)(param_1,param_2[6],param_3,param_4), lVar6 == -1))
    goto LAB_7100828d34;
    if (param_2[0xb] != 0) {
      if (param_2[0xb] != (long)param_2 + 0x74) {
        FUN_7100816da0(param_1);
      }
      param_2[0xb] = 0;
    }
    *param_2 = param_2[3];
    *(undefined4 *)(param_2 + 1) = 0;
    uVar3 = *(ushort *)(param_2 + 2) & 0xf7df;
  }
  *(ushort *)(param_2 + 2) = uVar3;
LAB_71008289c0:
  FUN_7100808340((long)param_2 + 0xac,0,8);
  if (((*(uint *)((long)param_2 + 0xb4) & 1) == 0) && ((*(ushort *)(param_2 + 2) >> 9 & 1) == 0)) {
    FUN_7100836220(param_2 + 0x14);
  }
  return 0;
}



// ===== FUN_7100814b40 @ 7100814b40 (size=52) =====

void FUN_7100814b40(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  thunk_FUN_7100828880(uVar1,param_1,param_2,param_3);
  return;
}



// ===== FUN_7100814b80 @ 7100814b80 (size=44) =====

void FUN_7100814b80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_7100828340(uVar1,param_1,param_2);
  return;
}



// ===== FUN_7100814bc0 @ 7100814bc0 (size=140) =====

ulong FUN_7100814bc0(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = FUN_7100834b00();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x48) == 0)) {
    FUN_710080d840();
  }
  uVar2 = (ulong)(long)*(short *)(param_1 + 0x10) >> 5 & 1;
  if (((*(uint *)(param_1 + 0xb4) & 1) == 0) &&
     (((uint)(int)*(short *)(param_1 + 0x10) >> 9 & 1) == 0)) {
    FUN_7100836200();
    uVar2 = (ulong)(long)*(short *)(param_1 + 0x10) >> 5 & 1;
    if (((*(uint *)(param_1 + 0xb4) & 1) == 0) &&
       (((uint)(int)*(short *)(param_1 + 0x10) >> 9 & 1) == 0)) {
      FUN_7100836220(param_1 + 0xa0);
      return uVar2;
    }
  }
  return uVar2;
}



// ===== FUN_7100814c60 @ 7100814c60 (size=12) =====

void FUN_7100814c60(void)

{
  FUN_71008361c0(0x7100d22ed8);
  return;
}



// ===== FUN_7100814c80 @ 7100814c80 (size=12) =====

void FUN_7100814c80(void)

{
  FUN_71008361e0(0x7100d22ed8);
  return;
}



// ===== FUN_7100814ca0 @ 7100814ca0 (size=2112) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_7100814ca0(undefined4 *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined *puVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  
  uVar20 = param_2 + 0x17;
  if (uVar20 < 0x2f) {
    if (0x20 < param_2) {
LAB_7100814e44:
      *param_1 = 0xc;
      return (long *)0x0;
    }
    FUN_710081e680();
    lVar6 = 0x50;
    iVar4 = 4;
    uVar14 = 0x20;
LAB_7100814cd4:
    uVar20 = (ulong)(iVar4 + 2);
    puVar11 = *(undefined8 **)((long)&DAT_7100af4bc8 + lVar6);
    if (puVar11 != (undefined8 *)((long)&DAT_7100af4bb0 + lVar6)) {
      lVar6 = puVar11[2];
      lVar19 = puVar11[3];
      uVar8 = puVar11[1] & 0xfffffffffffffffc;
      *(long *)(lVar6 + 0x18) = lVar19;
      *(long *)(lVar19 + 0x10) = lVar6;
      goto LAB_71008150ec;
    }
  }
  else {
    uVar14 = uVar20 & 0xfffffffffffffff0;
    if (0x7fffffff < uVar14 || uVar14 < param_2) goto LAB_7100814e44;
    FUN_710081e680();
    if (uVar14 < 0x1f8) {
      iVar4 = (int)(uVar14 >> 3);
      lVar6 = ((ulong)(iVar4 + 1) & 0x7fffffff) << 4;
      goto LAB_7100814cd4;
    }
    uVar8 = uVar20 >> 9;
    if (uVar8 == 0) {
      lVar6 = 0x400;
      uVar20 = 0x40;
      uVar5 = 0x3f;
    }
    else if (uVar8 < 5) {
      iVar4 = (int)(uVar20 >> 6);
      uVar5 = iVar4 + 0x38;
      uVar20 = (ulong)(iVar4 + 0x39);
      lVar6 = (uVar20 & 0x7fffffff) << 4;
    }
    else if (uVar8 < 0x15) {
      uVar5 = (int)uVar8 + 0x5b;
      uVar20 = (ulong)((int)uVar8 + 0x5c);
      lVar6 = (uVar20 & 0x7fffffff) << 4;
    }
    else if (uVar8 < 0x55) {
      iVar4 = (int)(uVar20 >> 0xc);
      uVar5 = iVar4 + 0x6e;
      uVar20 = (ulong)(iVar4 + 0x6f);
      lVar6 = (uVar20 & 0x7fffffff) << 4;
    }
    else if (uVar8 < 0x155) {
      iVar4 = (int)(uVar20 >> 0xf);
      uVar5 = iVar4 + 0x77;
      uVar20 = (ulong)(iVar4 + 0x78);
      lVar6 = (uVar20 & 0x7fffffff) << 4;
    }
    else if (uVar8 < 0x555) {
      iVar4 = (int)(uVar20 >> 0x12);
      uVar5 = iVar4 + 0x7c;
      uVar20 = (ulong)(iVar4 + 0x7d);
      lVar6 = (uVar20 & 0x7fffffff) << 4;
    }
    else {
      lVar6 = 0x7f0;
      uVar20 = 0x7f;
      uVar5 = 0x7e;
    }
    lVar19 = *(long *)((long)&DAT_7100af4bc8 + lVar6);
    while (lVar3 = lVar19, (long)&DAT_7100af4bb0 + lVar6 != lVar3) {
      uVar8 = *(ulong *)(lVar3 + 8) & 0xfffffffffffffffc;
      lVar16 = uVar8 - uVar14;
      if (0x1f < lVar16) {
        uVar20 = (ulong)uVar5;
        puVar11 = (undefined8 *)PTR_PTR_DAT_7100af4be0;
        if ((undefined **)PTR_PTR_DAT_7100af4be0 != &PTR_DAT_7100af4bd0) goto LAB_7100814d04;
        goto LAB_7100814f04;
      }
      lVar19 = *(long *)(lVar3 + 0x18);
      if (-1 < lVar16) {
        lVar16 = *(long *)(lVar3 + 0x10);
        lVar6 = lVar3 + uVar8;
        *(long *)(lVar16 + 0x18) = lVar19;
        *(long *)(lVar19 + 0x10) = lVar16;
        *(ulong *)(lVar6 + 8) = *(ulong *)(lVar6 + 8) | 1;
        FUN_710081e6a0(param_1);
        return (long *)(lVar3 + 0x10);
      }
    }
  }
  puVar11 = (undefined8 *)PTR_PTR_DAT_7100af4be0;
  if ((undefined **)PTR_PTR_DAT_7100af4be0 == &PTR_DAT_7100af4bd0) {
LAB_7100814f04:
    uVar7 = 1L << ((ulong)(uint)((int)uVar20 >> 2) & 0x3f);
    uVar8 = DAT_7100af4bc8;
    if (uVar7 <= DAT_7100af4bc8) {
LAB_7100814d74:
      if ((uVar7 & uVar8) == 0) {
        uVar20 = (ulong)((uint)uVar20 & 0xfffffffc);
        do {
          uVar7 = uVar7 << 1;
          uVar20 = (ulong)((int)uVar20 + 4);
        } while ((uVar7 & uVar8) == 0);
      }
LAB_7100814d90:
      puVar22 = &DAT_7100af4bb0 + ((int)uVar20 + 1) * 2;
      puVar21 = puVar22;
      uVar8 = uVar20;
LAB_7100814da8:
      puVar13 = (undefined8 *)puVar21[3];
      do {
        puVar11 = puVar13;
        if (puVar21 == puVar11) {
          if ((int)uVar8 < 0x3f) goto code_r0x007100814de0;
          do {
            uVar5 = (int)uVar8 + 1;
            uVar8 = (ulong)uVar5;
            if ((uVar5 & 3) == 0) goto LAB_7100814e04;
            puVar11 = (undefined8 *)puVar21[5];
            puVar21 = puVar21 + 2;
          } while (puVar21 == puVar11);
        }
        puVar13 = (undefined8 *)puVar11[3];
        uVar15 = puVar11[1] & 0xfffffffffffffffc;
        uVar18 = uVar15 - uVar14;
        if (0x1f < (long)uVar18) {
          puVar2 = (undefined *)((long)puVar11 + uVar14);
          puVar11[1] = uVar14 | 1;
          lVar6 = puVar11[2];
          *(undefined8 **)(lVar6 + 0x18) = puVar13;
          puVar13[2] = lVar6;
          PTR_PTR_DAT_7100af4be0 = puVar2;
          PTR_PTR_DAT_7100af4be8 = puVar2;
          *(ulong *)(puVar2 + 8) = uVar18 | 1;
          *(undefined ***)(puVar2 + 0x10) = &PTR_DAT_7100af4bd0;
          *(undefined ***)(puVar2 + 0x18) = &PTR_DAT_7100af4bd0;
          *(ulong *)((long)puVar11 + uVar15) = uVar18;
          goto LAB_7100815254;
        }
        if (-1 < (long)uVar18) {
          *(ulong *)((long)puVar11 + uVar15 + 8) = *(ulong *)((long)puVar11 + uVar15 + 8) | 1;
          lVar6 = puVar11[2];
          *(undefined8 **)(lVar6 + 0x18) = puVar13;
          puVar13[2] = lVar6;
          FUN_710081e6a0(param_1);
          return puVar11 + 2;
        }
      } while( true );
    }
  }
  else {
LAB_7100814d04:
    uVar7 = puVar11[1];
    uVar8 = uVar7 & 0xfffffffffffffffc;
    uVar15 = uVar8 - uVar14;
    if (0x1f < (long)uVar15) {
      puVar2 = (undefined *)((long)puVar11 + uVar14);
      puVar11[1] = uVar14 | 1;
      PTR_PTR_DAT_7100af4be0 = puVar2;
      PTR_PTR_DAT_7100af4be8 = puVar2;
      *(ulong *)(puVar2 + 8) = uVar15 | 1;
      *(undefined ***)(puVar2 + 0x10) = &PTR_DAT_7100af4bd0;
      *(undefined ***)(puVar2 + 0x18) = &PTR_DAT_7100af4bd0;
      *(ulong *)((long)puVar11 + uVar8) = uVar15;
LAB_7100815254:
      FUN_710081e6a0(param_1);
      return puVar11 + 2;
    }
    PTR_PTR_DAT_7100af4be0 = (undefined *)&PTR_DAT_7100af4bd0;
    PTR_PTR_DAT_7100af4be8 = (undefined *)&PTR_DAT_7100af4bd0;
    if (-1 < (long)uVar15) {
LAB_71008150ec:
      *(ulong *)((long)puVar11 + uVar8 + 8) = *(ulong *)((long)puVar11 + uVar8 + 8) | 1;
      FUN_710081e6a0(param_1);
      return puVar11 + 2;
    }
    if (uVar8 < 0x200) {
      iVar4 = (int)(uVar7 >> 3);
      uVar7 = (ulong)(iVar4 + 1) & 0x7fffffff;
      uVar8 = DAT_7100af4bc8 | 1L << ((ulong)(uint)(iVar4 >> 2) & 0x3f);
      lVar6 = *(long *)(&DAT_7100af4bc0 + uVar7 * 0x10);
      DAT_7100af4bc8 = uVar8;
      puVar11[2] = lVar6;
      puVar11[3] = &DAT_7100af4bb0 + uVar7 * 2;
      *(undefined8 **)(&DAT_7100af4bc0 + uVar7 * 0x10) = puVar11;
      *(undefined8 **)(lVar6 + 0x18) = puVar11;
    }
    else {
      uVar15 = uVar7 >> 9;
      if (uVar8 < 0xa00) {
        iVar12 = (int)(uVar7 >> 6);
        iVar4 = iVar12 + 0x38;
        lVar6 = ((ulong)(iVar12 + 0x39) & 0x7fffffff) << 4;
      }
      else if (uVar15 < 0x15) {
        iVar4 = (int)uVar15 + 0x5b;
        lVar6 = ((ulong)((int)uVar15 + 0x5c) & 0x7fffffff) << 4;
      }
      else if (uVar15 < 0x55) {
        iVar12 = (int)(uVar7 >> 0xc);
        iVar4 = iVar12 + 0x6e;
        lVar6 = ((ulong)(iVar12 + 0x6f) & 0x7fffffff) << 4;
      }
      else if (uVar15 < 0x155) {
        iVar12 = (int)(uVar7 >> 0xf);
        iVar4 = iVar12 + 0x77;
        lVar6 = ((ulong)(iVar12 + 0x78) & 0x7fffffff) << 4;
      }
      else if (uVar15 < 0x555) {
        iVar12 = (int)(uVar7 >> 0x12);
        iVar4 = iVar12 + 0x7c;
        lVar6 = ((ulong)(iVar12 + 0x7d) & 0x7fffffff) << 4;
      }
      else {
        lVar6 = 0x7f0;
        iVar4 = 0x7e;
      }
      lVar19 = (long)&DAT_7100af4bb0 + lVar6;
      lVar6 = *(long *)(&DAT_7100af4bc0 + lVar6);
      if (lVar19 == lVar6) {
        DAT_7100af4bc8 = DAT_7100af4bc8 | 1L << ((ulong)(uint)(iVar4 >> 2) & 0x3f);
      }
      else {
        do {
          if ((*(ulong *)(lVar6 + 8) & 0xfffffffffffffffc) <= uVar8) break;
          lVar6 = *(long *)(lVar6 + 0x10);
        } while (lVar19 != lVar6);
        lVar19 = *(long *)(lVar6 + 0x18);
      }
      uVar8 = DAT_7100af4bc8;
      puVar11[2] = lVar6;
      puVar11[3] = lVar19;
      *(undefined8 **)(lVar19 + 0x10) = puVar11;
      *(undefined8 **)(lVar6 + 0x18) = puVar11;
    }
    uVar7 = 1L << ((ulong)(uint)((int)uVar20 >> 2) & 0x3f);
    if (uVar7 <= uVar8) goto LAB_7100814d74;
  }
LAB_7100814f1c:
  puVar2 = PTR_DAT_7100af4bd0;
  uVar8 = *(ulong *)(PTR_DAT_7100af4bd0 + 8) & 0xfffffffffffffffc;
  uVar20 = uVar8 - uVar14;
  puVar10 = PTR_DAT_7100af4bd0;
  if ((uVar8 >= uVar14 && uVar20 != 0x1f) && (uVar8 < uVar14 || 0x1e < (long)uVar20))
  goto LAB_7100815120;
  uVar20 = uVar14 + _DAT_7100d22f40 + 0x101f & 0xfffffffffffff000;
  if (DAT_7100af4bb0 == (undefined *)0xffffffffffffffff) {
    uVar20 = uVar14 + _DAT_7100d22f40 + 0x20;
  }
  puVar9 = (undefined *)FUN_7100835f00(param_1);
  puVar10 = PTR_DAT_7100af4bd0;
  if (puVar9 == (undefined *)0xffffffffffffffff) {
LAB_71008152fc:
    uVar7 = *(ulong *)(PTR_DAT_7100af4bd0 + 8);
  }
  else {
    puVar1 = puVar2 + uVar8;
    if (puVar1 < puVar9 || puVar1 == puVar9) {
      puVar17 = _DAT_7100d22ee0 + uVar20;
      if ((puVar1 != puVar9) || (((ulong)puVar9 & 0xfff) != 0)) goto LAB_7100814fb8;
      uVar7 = uVar8 + uVar20 | 1;
      _DAT_7100d22ee0 = puVar17;
      *(ulong *)(PTR_DAT_7100af4bd0 + 8) = uVar7;
    }
    else {
      if (puVar2 != &DAT_7100af4bc0) goto LAB_71008152fc;
LAB_7100814fb8:
      _DAT_7100d22ee0 = _DAT_7100d22ee0 + uVar20;
      puVar10 = puVar9;
      if (DAT_7100af4bb0 != (undefined *)0xffffffffffffffff) {
        _DAT_7100d22ee0 = puVar9 + ((long)_DAT_7100d22ee0 - (long)puVar1);
        puVar10 = DAT_7100af4bb0;
      }
      DAT_7100af4bb0 = puVar10;
      uVar7 = (ulong)puVar9 & 0xf;
      if (uVar7 == 0) {
        uVar15 = -(long)(puVar9 + uVar20) & 0xfff;
        puVar10 = (undefined *)FUN_7100835f00(param_1);
        if (puVar10 == (undefined *)0xffffffffffffffff) {
          uVar15 = 0;
          puVar10 = puVar9 + uVar20;
        }
      }
      else {
        puVar9 = (undefined *)(((ulong)puVar9 & 0xfffffffffffffff0) + 0x10);
        uVar15 = (0x1010 - uVar7) - (long)(puVar9 + uVar20) & 0xfff;
        puVar10 = (undefined *)FUN_7100835f00(param_1);
        if (puVar10 == (undefined *)0xffffffffffffffff) {
          uVar15 = 0;
          puVar10 = puVar9 + uVar20 + (uVar7 - 0x10);
        }
      }
      uVar7 = (ulong)(puVar10 + (uVar15 - (long)puVar9)) | 1;
      puVar17 = _DAT_7100d22ee0 + uVar15;
      PTR_DAT_7100af4bd0 = puVar9;
      _DAT_7100d22ee0 = puVar17;
      *(ulong *)(puVar9 + 8) = uVar7;
      puVar10 = puVar9;
      if (puVar2 != &DAT_7100af4bc0) {
        if (uVar8 < 0x20) {
          *(undefined8 *)(puVar9 + 8) = 1;
          goto LAB_7100815314;
        }
        uVar20 = uVar8 - 0x18 & 0xfffffffffffffff0;
        *(ulong *)(puVar2 + 8) = *(ulong *)(puVar2 + 8) & 1 | uVar20;
        *(undefined8 *)(puVar2 + uVar20 + 8) = 9;
        *(undefined8 *)(puVar2 + uVar20 + 0x10) = 9;
        if (uVar20 < 0x20) {
          uVar7 = *(ulong *)(puVar9 + 8);
        }
        else {
          FUN_7100816da0(param_1,puVar2 + 0x10);
          uVar7 = *(ulong *)(PTR_DAT_7100af4bd0 + 8);
          puVar17 = _DAT_7100d22ee0;
          puVar10 = PTR_DAT_7100af4bd0;
        }
      }
    }
    if (_DAT_7100d22f38 < puVar17) {
      _DAT_7100d22f38 = puVar17;
    }
    if (_DAT_7100d22f30 < puVar17) {
      _DAT_7100d22f30 = puVar17;
    }
  }
  uVar7 = uVar7 & 0xfffffffffffffffc;
  uVar20 = uVar7 - uVar14;
  if ((uVar7 >= uVar14 && uVar20 != 0x1f) && (uVar7 < uVar14 || 0x1e < (long)uVar20)) {
LAB_7100815120:
    PTR_DAT_7100af4bd0 = puVar10 + uVar14;
    *(ulong *)(puVar10 + 8) = uVar14 | 1;
    *(ulong *)(PTR_DAT_7100af4bd0 + 8) = uVar20 | 1;
    FUN_710081e6a0(param_1);
    return (long *)(puVar10 + 0x10);
  }
LAB_7100815314:
  FUN_710081e6a0(param_1);
  return (long *)0x0;
code_r0x007100814de0:
  uVar5 = (int)uVar8 + 2;
  uVar8 = (ulong)uVar5;
  puVar21 = puVar21 + 4;
  if ((uVar5 & 3) == 0) goto LAB_7100814e04;
  goto LAB_7100814da8;
  while( true ) {
    puVar21 = puVar22 + -2;
    puVar11 = (undefined8 *)*puVar22;
    uVar20 = (ulong)((int)uVar20 - 1);
    puVar22 = puVar21;
    if (puVar11 != puVar21) break;
LAB_7100814e04:
    if ((uVar20 & 3) == 0) {
      DAT_7100af4bc8 = DAT_7100af4bc8 & (uVar7 ^ 0xffffffffffffffff);
      break;
    }
  }
  uVar7 = uVar7 * 2;
  uVar20 = uVar8;
  if (DAT_7100af4bc8 <= uVar7 - 1) goto LAB_7100814f1c;
  for (; (uVar7 & DAT_7100af4bc8) == 0; uVar7 = uVar7 << 1) {
    uVar20 = (ulong)((int)uVar20 + 4);
  }
  goto LAB_7100814d90;
}



// ===== FUN_71008154e0 @ 71008154e0 (size=116) =====

ulong FUN_71008154e0(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
  lVar5 = 0;
  while( true ) {
    while( true ) {
      bVar1 = *(byte *)(param_1 + lVar5);
      bVar2 = *(byte *)(param_2 + lVar5);
      uVar4 = bVar1 + 0x20;
      if (((&DAT_71009d32f1)[(uint)bVar1] & 3) != 1) {
        uVar4 = (uint)bVar1;
      }
      uVar3 = (uint)bVar2;
      if (((&DAT_71009d32f1)[bVar2] & 3) != 1) break;
      uVar4 = uVar4 - (uVar3 + 0x20);
      if (uVar4 != 0) {
        return (ulong)uVar4;
      }
      lVar5 = lVar5 + 1;
    }
    if (uVar4 - uVar3 != 0) {
      return (ulong)(uVar4 - uVar3);
    }
    if (uVar3 == 0) break;
    lVar5 = lVar5 + 1;
  }
  return (ulong)bVar2;
}



// ===== FUN_7100815560 @ 7100815560 (size=420) =====

uint FUN_7100815560(long param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  ulong uVar14;
  
  if (*(int *)(param_2 + 0x14) <= *(int *)(param_1 + 0x14)) {
    uVar9 = *(int *)(param_2 + 0x14) - 1;
    uVar10 = (ulong)uVar9;
    puVar7 = (uint *)(param_2 + 0x18);
    puVar1 = (uint *)(param_1 + 0x18);
    uVar14 = -(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | uVar10 << 2;
    uVar13 = *(int *)((long)puVar7 + uVar14) + 1;
    uVar11 = 0;
    if (uVar13 != 0) {
      uVar11 = *(uint *)((long)puVar1 + uVar14) / uVar13;
    }
    if (uVar13 <= *(uint *)((long)puVar1 + uVar14)) {
      uVar13 = 0;
      iVar5 = 0;
      puVar6 = puVar1;
      puVar8 = puVar7;
      do {
        puVar12 = puVar8 + 1;
        uVar13 = uVar13 + (*puVar8 & 0xffff) * uVar11;
        uVar4 = (uVar13 >> 0x10) + (*puVar8 >> 0x10) * uVar11;
        uVar2 = ((*puVar6 & 0xffff) - (uVar13 & 0xffff)) + iVar5;
        uVar13 = uVar4 >> 0x10;
        iVar3 = (((int)uVar2 >> 0x10) - (uVar4 & 0xffff)) + (*puVar6 >> 0x10);
        iVar5 = iVar3 >> 0x10;
        *puVar6 = uVar2 & 0xffff | iVar3 * 0x10000;
        puVar6 = puVar6 + 1;
        puVar8 = puVar12;
      } while (puVar12 <= (uint *)((long)puVar7 + uVar14));
      if (*(int *)((long)puVar1 + uVar14) == 0) {
        for (puVar6 = (uint *)((long)puVar1 + (uVar14 - 4));
            (puVar1 < puVar6 && (uVar9 = (uint)uVar10, *puVar6 == 0)); puVar6 = puVar6 + -1) {
          uVar9 = uVar9 - 1;
          uVar10 = (ulong)uVar9;
        }
        *(uint *)(param_1 + 0x14) = uVar9;
      }
    }
    iVar5 = FUN_71008248e0(param_1);
    if (-1 < iVar5) {
      uVar11 = uVar11 + 1;
      iVar5 = 0;
      puVar6 = puVar1;
      puVar8 = puVar7;
      do {
        puVar12 = puVar8 + 1;
        uVar13 = ((*puVar6 & 0xffff) - (*puVar8 & 0xffff)) + iVar5;
        iVar3 = (((int)uVar13 >> 0x10) - (*puVar8 >> 0x10)) + (*puVar6 >> 0x10);
        iVar5 = iVar3 >> 0x10;
        *puVar6 = uVar13 & 0xffff | iVar3 * 0x10000;
        puVar6 = puVar6 + 1;
        puVar8 = puVar12;
      } while (puVar12 <= (uint *)((long)puVar7 + uVar14));
      if (puVar1[(int)uVar9] == 0) {
        for (puVar7 = puVar1 + (long)(int)uVar9 + -1; (puVar1 < puVar7 && (*puVar7 == 0));
            puVar7 = puVar7 + -1) {
          uVar9 = uVar9 - 1;
        }
        *(uint *)(param_1 + 0x14) = uVar9;
      }
    }
    return uVar11;
  }
  return 0;
}



// ===== FUN_7100815720 @ 7100815720 (size=4896) =====

/* WARNING: Type propagation algorithm not settling */

char * FUN_7100815720(double param_1,long param_2,uint param_3,uint param_4,uint *param_5,
                     uint *param_6,undefined8 *param_7)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  char *pcVar12;
  long lVar13;
  char *pcVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  double *pdVar18;
  char *pcVar19;
  char *pcVar20;
  uint uVar21;
  byte bVar22;
  uint uVar23;
  uint uVar24;
  char *unaff_x26;
  char *pcVar25;
  ulong uVar26;
  double dVar27;
  double dVar28;
  undefined8 uVar29;
  double dVar30;
  double dVar31;
  long local_58;
  uint local_48;
  uint local_3c;
  char *local_38;
  int local_24;
  int local_8;
  int local_4;
  
  lVar17 = *(long *)(param_2 + 0x50);
  local_58 = CONCAT44(local_58._4_4_,param_4);
  if (lVar17 != 0) {
    uVar23 = *(uint *)(param_2 + 0x58);
    *(uint *)(lVar17 + 8) = uVar23;
    *(int *)(lVar17 + 0xc) = 1 << (ulong)(uVar23 & 0x1f);
    FUN_7100823f80();
    *(undefined8 *)(param_2 + 0x50) = 0;
  }
  uVar23 = (uint)((ulong)param_1 >> 0x20);
  dVar31 = param_1;
  if ((long)param_1 < 0) {
    uVar23 = uVar23 & 0x7fffffff;
    dVar31 = (double)((ulong)param_1 & 0xffffffff | (ulong)uVar23 << 0x20);
  }
  *param_6 = (uint)((long)param_1 < 0);
  uVar6 = SUB84(param_1,0);
  if ((uVar23 & 0x7ff00000) == 0x7ff00000) {
    *param_5 = 9999;
    if ((uVar23 & 0xfffff) == 0 && uVar6 == 0) {
      pcVar12 = "Infinity";
      if (param_7 != (undefined8 *)0x0) {
        *param_7 = "";
        return pcVar12;
      }
    }
    else {
      pcVar12 = "NaN";
      if (param_7 != (undefined8 *)0x0) {
        *param_7 = &DAT_710083d923;
        return pcVar12;
      }
    }
    return pcVar12;
  }
  if (dVar31 == 0.0) {
    *param_5 = 1;
    if (param_7 != (undefined8 *)0x0) {
      *param_7 = "";
    }
    return "0";
  }
  uVar11 = FUN_7100824d40(dVar31,param_2,&local_4,&local_8);
  if (uVar23 >> 0x14 == 0) {
    iVar7 = local_8 + local_4;
    iVar8 = iVar7 + 0x432;
    if (iVar8 < 0x21) {
      uVar6 = uVar6 << (ulong)(-iVar8 & 0x1f);
    }
    else {
      uVar6 = uVar23 << (ulong)(0x40U - iVar8 & 0x1f) | uVar6 >> (ulong)(iVar7 + 0x412U & 0x1f);
    }
    lVar17 = 1;
    uVar16 = (int)((ulong)(double)uVar6 >> 0x20) + 0xfe100000;
    iVar7 = iVar7 + -1;
    dVar30 = (double)uVar6;
  }
  else {
    uVar16 = (uint)((ulong)dVar31 >> 0x20) & 0xfffff | 0x3ff00000;
    iVar7 = (uVar23 >> 0x14) - 0x3ff;
    lVar17 = 0;
    dVar30 = dVar31;
  }
  uVar29 = NEON_fmadd((double)CONCAT44(uVar16,SUB84(dVar30,0)) - 1.5,0x3fd287a7636f4361,
                      0x3fc68a288b60c8b3);
  dVar30 = (double)NEON_fmadd((double)iVar7,0x3fd34413509f79fb,uVar29);
  uVar23 = (uint)dVar30;
  if (dVar30 < 0.0) {
    uVar23 = uVar23 - ((double)(int)uVar23 != dVar30);
  }
  iVar7 = local_8 - iVar7;
  uVar6 = iVar7 - 1;
  if (uVar23 < 0x17) {
    if (dVar31 < (double)(&DAT_71009d3738)[(int)uVar23]) {
      uVar23 = uVar23 - 1;
      bVar1 = false;
      goto LAB_71008159bc;
    }
    local_3c = uVar23;
    if (iVar7 < 1) {
      local_48 = 1 - iVar7;
      bVar1 = false;
      uVar6 = uVar23;
    }
    else {
      local_48 = 0;
      bVar1 = false;
      uVar6 = uVar6 + uVar23;
    }
LAB_71008158ec:
    uVar26 = 0;
    uVar23 = local_3c;
    bVar3 = bVar1;
    if (param_3 < 10) goto LAB_71008158f8;
LAB_71008159f4:
    param_3 = 0;
LAB_71008159f8:
    *(undefined4 *)(param_2 + 0x58) = 0;
    local_58 = CONCAT44(local_58._4_4_,uVar6);
    pcVar12 = (char *)FUN_7100823ec0(param_2,0);
    if (pcVar12 != (char *)0x0) {
      *(char **)(param_2 + 0x50) = pcVar12;
      if (local_4 < 0 || 0xe < (int)uVar23) {
        local_24 = (int)uVar26;
        uVar16 = local_48;
        if ((int)lVar17 != 0) {
          uVar6 = uVar6 + local_4 + 0x433;
          local_58 = 0;
          uVar24 = local_48 + local_4 + 0x433;
          unaff_x26 = (char *)0xffffffff;
          local_38 = (char *)0xffffffff;
          goto LAB_7100815a5c;
        }
        local_58 = 0;
        uVar6 = uVar6 + (0x36 - local_8);
        uVar24 = local_48 + (0x36 - local_8);
        unaff_x26 = (char *)0xffffffff;
        local_38 = (char *)0xffffffff;
        goto LAB_7100815a5c;
      }
      unaff_x26 = (char *)0xffffffff;
      dVar30 = (double)(&DAT_71009d3738)[(int)uVar23];
LAB_7100816804:
      pcVar25 = pcVar12 + 1;
LAB_710081631c:
      uVar16 = (uint)(dVar31 / dVar30);
      *pcVar12 = (char)uVar16 + '0';
      pcVar19 = pcVar25 + ((int)unaff_x26 - 1);
      dVar31 = (double)NEON_fmsub((double)(int)uVar16,dVar30,dVar31);
      pcVar14 = pcVar25;
      if ((int)unaff_x26 != 1) {
        do {
          pcVar25 = pcVar14;
          dVar31 = dVar31 * 10.0;
          if (dVar31 == 0.0) {
            uVar6 = uVar23 + 1;
            goto LAB_7100815bd8;
          }
          uVar16 = (uint)(dVar31 / dVar30);
          pcVar14 = pcVar25 + 1;
          *pcVar25 = (char)uVar16 + '0';
          dVar31 = (double)NEON_fmsub((double)(int)uVar16,dVar30,dVar31);
          pcVar25 = pcVar19;
        } while (pcVar14 != pcVar19);
      }
      dVar31 = dVar31 + dVar31;
      uVar6 = uVar23 + 1;
      pcVar14 = pcVar25;
      uVar21 = uVar23;
      if ((dVar31 == dVar30 || dVar31 < dVar30 != (NAN(dVar31) || NAN(dVar30))) &&
         ((dVar31 != dVar30 || ((uVar16 & 1) == 0)))) goto LAB_7100815bd8;
LAB_7100815eec:
      do {
        pcVar25 = pcVar14;
        pcVar14 = pcVar25 + -1;
        if (*pcVar14 != '9') {
          *pcVar14 = *pcVar14 + '\x01';
          goto LAB_7100815f04;
        }
      } while (pcVar14 != pcVar12);
      uVar21 = uVar21 + 1;
      *pcVar14 = '1';
LAB_7100815f04:
      uVar6 = uVar21 + 1;
      goto LAB_7100815bd8;
    }
LAB_7100816908:
    FUN_7100806b40("../../../../../newlib-4.5.0.20241231/newlib/libc/stdlib/dtoa.c",0x1af,0,
                   "Balloc succeeded");
    uVar24 = uVar23;
LAB_7100816924:
    uVar6 = uVar24 + 1;
LAB_7100815f74:
    uVar11 = FUN_7100824760(param_2,uVar11,1);
    iVar7 = FUN_71008248e0(uVar11,uVar26);
    if ((iVar7 < 1) && ((iVar7 != 0 || ((local_48 & 1) == 0)))) {
      do {
        pcVar25 = unaff_x26;
        unaff_x26 = pcVar25 + -1;
      } while (pcVar25[-1] == '0');
    }
    else {
LAB_7100815fac:
      do {
        pcVar25 = unaff_x26;
        unaff_x26 = pcVar25 + -1;
        if (pcVar25[-1] != '9') {
          *unaff_x26 = pcVar25[-1] + '\x01';
          goto LAB_7100815fc8;
        }
      } while (unaff_x26 != pcVar12);
      uVar6 = uVar24 + 2;
      *pcVar12 = '1';
    }
  }
  else {
    bVar1 = true;
LAB_71008159bc:
    local_48 = 1 - iVar7;
    if ((int)uVar6 < 0) {
      uVar6 = 0;
    }
    else {
      local_48 = 0;
    }
    if (-1 < (int)uVar23) {
      uVar6 = uVar6 + uVar23;
      local_3c = uVar23;
      goto LAB_71008158ec;
    }
    uVar26 = (ulong)-uVar23;
    local_3c = 0;
    local_48 = local_48 - uVar23;
    bVar3 = bVar1;
    if (9 < param_3) goto LAB_71008159f4;
LAB_71008158f8:
    uVar16 = local_3c;
    bVar1 = bVar3;
    if ((int)param_3 < 6) {
      bVar22 = 1;
      if (param_3 != 4) {
        if (param_3 == 5) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
          if (param_3 == 2) goto LAB_7100816040;
          if (param_3 != 3) goto LAB_71008159f8;
        }
        goto LAB_7100815c70;
      }
      bVar5 = true;
LAB_7100816040:
      uVar21 = param_4;
      uVar24 = param_4;
      if (0 < (int)param_4) goto LAB_7100815c88;
      iVar7 = 0;
      unaff_x26 = (char *)0x1;
      *(undefined4 *)(param_2 + 0x58) = 0;
      local_58 = CONCAT44(local_58._4_4_,1);
      local_38 = (char *)0x1;
    }
    else {
      param_3 = param_3 - 4;
      bVar22 = 0;
      if (param_3 == 4) {
        bVar5 = true;
        goto LAB_7100816040;
      }
      if (param_3 == 5) {
        bVar5 = true;
      }
      else {
        if (param_3 == 2) {
          bVar5 = false;
          goto LAB_7100816040;
        }
        param_3 = 3;
        bVar5 = false;
      }
LAB_7100815c70:
      uVar24 = param_4 + uVar23;
      param_4 = uVar24 + 1;
      uVar21 = param_4;
      if ((int)param_4 < 1) {
        uVar21 = 1;
      }
LAB_7100815c88:
      local_38 = (char *)(ulong)uVar24;
      unaff_x26 = (char *)(ulong)param_4;
      if ((int)uVar21 < 0x20) {
        iVar7 = 0;
        *(undefined4 *)(param_2 + 0x58) = 0;
      }
      else {
        iVar8 = 4;
        iVar9 = 1;
        do {
          iVar7 = iVar9;
          iVar8 = iVar8 << 1;
          iVar9 = iVar7 + 1;
        } while ((long)iVar8 + 0x1cU <= (ulong)(long)(int)uVar21);
        *(int *)(param_2 + 0x58) = iVar7;
      }
    }
    pcVar12 = (char *)FUN_7100823ec0(param_2,iVar7);
    if (pcVar12 == (char *)0x0) goto LAB_7100816908;
    uVar24 = (uint)unaff_x26;
    *(char **)(param_2 + 0x50) = pcVar12;
    iVar7 = (int)uVar26;
    if ((bool)(uVar24 < 0xf & bVar22)) {
      if ((int)uVar23 < 1) {
        if (uVar23 == 0) {
          iVar8 = 2;
          dVar30 = dVar31;
        }
        else {
          uVar21 = (int)-uVar23 >> 4;
          dVar30 = dVar31 * (double)(&DAT_71009d3738)[(int)(-uVar23 & 0xf)];
          if (uVar21 != 0) {
            pdVar18 = (double *)&DAT_71009d3710;
            iVar8 = 2;
            do {
              uVar2 = uVar21 & 1;
              uVar21 = (int)uVar21 >> 1;
              if (uVar2 != 0) {
                iVar8 = iVar8 + 1;
                dVar30 = dVar30 * *pdVar18;
                if (uVar21 == 0) goto LAB_7100815d78;
              }
              pdVar18 = pdVar18 + 1;
            } while( true );
          }
          iVar8 = 2;
        }
      }
      else {
        dVar30 = (double)(&DAT_71009d3738)[(int)(uVar23 & 0xf)];
        uVar21 = (int)uVar23 >> 4;
        if ((uVar23 >> 8 & 1) == 0) {
          iVar8 = 2;
          dVar28 = dVar31;
        }
        else {
          uVar21 = uVar21 & 0xf;
          iVar8 = 3;
          dVar28 = dVar31 / 1e+256;
        }
        if (uVar21 != 0) {
          pdVar18 = (double *)&DAT_71009d3710;
          do {
            uVar2 = uVar21 & 1;
            uVar21 = (int)uVar21 >> 1;
            if (uVar2 != 0) {
              iVar8 = iVar8 + 1;
              dVar30 = dVar30 * *pdVar18;
              if (uVar21 == 0) break;
            }
            pdVar18 = pdVar18 + 1;
          } while( true );
        }
        dVar30 = dVar28 / dVar30;
      }
LAB_7100815d78:
      if ((!bVar3) || (1.0 <= dVar30)) {
        uVar29 = NEON_fmadd((double)iVar8,dVar30,0x401c000000000000);
        dVar28 = (double)CONCAT44((int)((ulong)uVar29 >> 0x20) + -0x3400000,(int)uVar29);
        pcVar19 = unaff_x26;
        uVar21 = uVar23;
        if (uVar24 == 0) goto LAB_71008160a4;
      }
      else {
        if (uVar24 == 0) {
          uVar29 = NEON_fmadd((double)iVar8,dVar30,0x401c000000000000);
          dVar28 = (double)CONCAT44((int)((ulong)uVar29 >> 0x20) + -0x3400000,(int)uVar29);
LAB_71008160a4:
          dVar30 = dVar30 - 5.0;
          if (dVar30 != dVar28 && dVar30 < dVar28 == (NAN(dVar30) || NAN(dVar28)))
          goto LAB_7100816280;
          if (-dVar28 <= dVar30) goto LAB_71008160c0;
          goto LAB_7100816198;
        }
        if ((int)local_38 < 1) goto LAB_71008160c0;
        dVar30 = dVar30 * 10.0;
        uVar29 = NEON_fmadd(dVar30,(double)(iVar8 + 1),0x401c000000000000);
        dVar28 = (double)CONCAT44((int)((ulong)uVar29 >> 0x20) + -0x3400000,(int)uVar29);
        pcVar19 = local_38;
        uVar21 = uVar23 - 1;
      }
      iVar8 = (int)pcVar19;
      cVar4 = (char)(int)dVar30 + '0';
      dVar27 = (double)(&DAT_71009d3738)[iVar8 + -1];
      pcVar25 = pcVar12 + 1;
      dVar30 = dVar30 - (double)(int)dVar30;
      pcVar14 = pcVar25;
      if (bVar5) {
        *pcVar12 = cVar4;
        dVar28 = 0.5 / dVar27 - dVar28;
        if (dVar28 == dVar30 || dVar28 < dVar30 != (NAN(dVar28) || NAN(dVar30))) {
          do {
            if (1.0 - dVar30 < dVar28) goto LAB_7100815eec;
            if (pcVar14 == pcVar12 + (long)pcVar19) {
              if (local_4 < 0 || 0xe < (int)uVar23) goto LAB_7100815e58;
              goto LAB_7100816258;
            }
            dVar28 = dVar28 * 10.0;
            iVar8 = (int)(dVar30 * 10.0);
            pcVar25 = pcVar14 + 1;
            *pcVar14 = (char)iVar8 + '0';
            dVar30 = dVar30 * 10.0 - (double)iVar8;
            pcVar14 = pcVar25;
          } while (dVar28 <= dVar30);
        }
        uVar6 = uVar21 + 1;
        goto LAB_7100815bd8;
      }
      *pcVar12 = cVar4;
      dVar28 = dVar28 * dVar27;
      if (iVar8 != 1) {
        do {
          iVar9 = (int)(dVar30 * 10.0);
          pcVar20 = pcVar14 + 1;
          *pcVar14 = (char)iVar9 + '0';
          dVar30 = dVar30 * 10.0 - (double)iVar9;
          pcVar14 = pcVar20;
        } while (pcVar20 != pcVar12 + (long)pcVar19);
        pcVar14 = pcVar12 + (ulong)(iVar8 - 2) + 2;
      }
      if (dVar28 + 0.5 < dVar30) goto LAB_7100815eec;
      dVar28 = 0.5 - dVar28;
      if (dVar28 != dVar30 && dVar28 < dVar30 == (NAN(dVar28) || NAN(dVar30))) {
        do {
          pcVar25 = pcVar14;
          pcVar14 = pcVar25 + -1;
        } while (pcVar25[-1] == '0');
        goto LAB_7100815f04;
      }
      if (-1 < local_4 && (int)uVar23 < 0xf) {
        dVar30 = (double)(&DAT_71009d3738)[(int)uVar23];
        goto LAB_710081631c;
      }
    }
    else {
LAB_71008160c0:
      if (-1 < local_4 && (int)uVar23 < 0xf) {
LAB_7100816258:
        dVar30 = (double)(&DAT_71009d3738)[(int)uVar23];
        if (-1 < (int)(uint)local_58 || 0 < (int)uVar24) goto LAB_7100816804;
        if ((uVar24 == 0) && (dVar30 * 5.0 < dVar31)) {
LAB_7100816280:
          uVar6 = uVar23 + 2;
          *pcVar12 = '1';
          FUN_7100823f80(param_2,0);
          pcVar25 = pcVar12 + 1;
          goto LAB_7100815bd8;
        }
LAB_7100816198:
        FUN_7100823f80(param_2,0);
        uVar6 = -(uint)local_58;
        pcVar25 = pcVar12;
        goto LAB_7100815bd8;
      }
      if (bVar5) {
LAB_7100815e58:
        uVar16 = uVar24 - 1;
        if ((int)uVar16 <= iVar7) goto LAB_7100816a14;
        uVar6 = uVar6 + uVar24;
        uVar24 = local_48 + uVar24;
        local_3c = local_3c + (uVar16 - iVar7);
        lVar13 = FUN_71008243c0(param_2,1);
        uVar26 = (ulong)uVar16;
        uVar29 = uVar11;
        if (local_48 == 0) goto LAB_7100815ec0;
        uVar16 = local_48;
        if ((int)uVar6 < (int)local_48) {
          uVar16 = uVar6;
        }
        uVar24 = uVar24 - uVar16;
        uVar6 = uVar6 - uVar16;
        local_48 = local_48 - uVar16;
        goto LAB_7100815ec0;
      }
    }
    if (local_48 == 0 || uVar6 == 0) {
      if (iVar7 == 0) {
        uVar26 = FUN_71008243c0(param_2,1);
        uVar24 = local_48;
        if (local_3c != 0) {
          lVar13 = 0;
          local_3c = 0;
          goto LAB_7100816738;
        }
        iVar7 = 1;
        lVar13 = 0;
        bVar5 = false;
      }
      else {
LAB_71008166e8:
        uVar11 = FUN_7100824640(param_2,uVar11,uVar26);
        uVar26 = FUN_71008243c0(param_2,1);
        uVar24 = local_48;
        if (local_3c != 0) {
          lVar13 = 0;
          local_3c = 0;
          goto LAB_7100816738;
        }
        lVar13 = 0;
        iVar7 = 1;
        bVar5 = false;
      }
    }
    else {
      uVar24 = local_48;
      if ((int)uVar6 < (int)local_48) {
        uVar24 = uVar6;
      }
      local_48 = local_48 - uVar24;
      uVar6 = uVar6 - uVar24;
      if (iVar7 != 0) goto LAB_71008166e8;
      uVar26 = FUN_71008243c0(param_2,1);
      uVar24 = local_48;
      if (local_3c != 0) {
        lVar13 = 0;
        local_3c = 0;
        goto LAB_7100816738;
      }
      lVar13 = 0;
      iVar7 = 1;
      bVar5 = false;
    }
LAB_7100815aec:
    iVar8 = (int)unaff_x26;
    uVar16 = iVar7 + uVar6 & 0x1f;
    if (uVar16 == 0) {
      iVar7 = 0x1c;
LAB_7100815b08:
      uVar24 = uVar24 + iVar7;
      uVar6 = uVar6 + iVar7;
      local_48 = local_48 + iVar7;
    }
    else {
      if (uVar16 < 0x1c) {
        iVar7 = 0x1c - uVar16;
        goto LAB_7100815b08;
      }
      if (uVar16 != 0x1c) {
        iVar7 = 0x3c - uVar16;
        goto LAB_7100815b08;
      }
    }
    if (0 < (int)uVar24) {
      uVar11 = FUN_7100824760(param_2,uVar11,uVar24);
    }
    if (0 < (int)uVar6) {
      uVar26 = FUN_7100824760(param_2,uVar26,uVar6);
    }
    bVar1 = 2 < (int)param_3;
    if ((bVar3) && (iVar7 = FUN_71008248e0(uVar11,uVar26), bVar3 = bVar1, iVar7 < 0)) {
      uVar11 = FUN_7100823fa0(param_2,uVar11,10,0);
      uVar24 = uVar23 - 1;
      bVar3 = local_3c == 0;
      local_3c = (uint)((int)local_38 < 1 && bVar1);
      iVar8 = (int)local_38;
      if (bVar3) {
        uVar6 = uVar23;
        if (local_3c == 0) goto LAB_7100815f18;
      }
      else {
        lVar13 = FUN_7100823fa0(param_2,lVar13,10,0);
        unaff_x26 = local_38;
        if (local_3c == 0) goto LAB_71008163e0;
      }
LAB_7100815b78:
      if (iVar8 == 0) {
        uVar26 = FUN_7100823fa0(param_2,uVar26,5,0);
        iVar7 = FUN_71008248e0(uVar11,uVar26);
        if (iVar7 < 1) goto LAB_7100816188;
        uVar24 = uVar24 + 1;
        *pcVar12 = '1';
        pcVar25 = pcVar12 + 1;
      }
      else {
LAB_7100816188:
        uVar24 = ~(uint)local_58;
        pcVar25 = pcVar12;
      }
      uVar6 = uVar24 + 1;
      FUN_7100823f80(param_2,uVar26);
      local_58 = lVar13;
      if (lVar13 != 0) goto LAB_7100815bcc;
      goto LAB_7100815bd8;
    }
    uVar24 = uVar23;
    if (iVar8 < 1 && bVar1) goto LAB_7100815b78;
    bVar1 = bVar3;
    if (local_3c == 0) {
      uVar6 = uVar23 + 1;
      local_38._0_4_ = iVar8;
LAB_7100815f18:
      lVar17 = 0;
      while( true ) {
        iVar7 = FUN_7100815560(uVar11,uVar26);
        local_48 = iVar7 + 0x30;
        pcVar12[lVar17] = (char)local_48;
        lVar17 = lVar17 + 1;
        if ((int)local_38 <= (int)lVar17) break;
        uVar11 = FUN_7100823fa0(param_2,uVar11,10,0);
      }
      uVar15 = (ulong)((int)local_38 - 1);
      if ((int)local_38 < 1) {
        uVar15 = 0;
      }
      unaff_x26 = pcVar12 + uVar15 + 1;
      lVar17 = 0;
      local_58 = lVar13;
      goto LAB_7100815f74;
    }
LAB_71008163e0:
    lVar17 = lVar13;
    if (0 < (int)local_48) {
      lVar17 = FUN_7100824760(param_2,lVar13,local_48);
    }
    local_58 = lVar17;
    if (!bVar5) goto LAB_710081640c;
    lVar13 = FUN_7100823ec0(param_2,*(undefined4 *)(lVar17 + 8));
    if (lVar13 == 0) {
      uVar16 = 0;
      FUN_7100806b40("../../../../../newlib-4.5.0.20241231/newlib/libc/stdlib/dtoa.c",0x2ef,0,
                     "Balloc succeeded");
      uVar23 = uVar24;
LAB_7100816a14:
      local_24 = (int)uVar26 - uVar16;
      iVar7 = (int)unaff_x26;
      if (iVar7 < 0) {
        uVar16 = local_48 - iVar7;
        uVar24 = local_48;
      }
      else {
        uVar24 = local_48 + iVar7;
        uVar6 = uVar6 + iVar7;
        uVar16 = local_48;
      }
LAB_7100815a5c:
      local_48 = uVar16;
      lVar13 = FUN_71008243c0(param_2,1);
      if (local_48 != 0 && 0 < (int)uVar6) {
        uVar16 = local_48;
        if ((int)uVar6 < (int)local_48) {
          uVar16 = uVar6;
        }
        local_48 = local_48 - uVar16;
        uVar24 = uVar24 - uVar16;
        uVar6 = uVar6 - uVar16;
      }
      bVar3 = bVar1;
      if ((int)uVar26 != 0) {
        if (local_24 == 0) {
          uVar26 = uVar26 & 0xffffffff;
          uVar29 = uVar11;
        }
        else {
          lVar13 = FUN_7100824640(param_2,lVar13,local_24);
          uVar29 = FUN_7100824420(param_2,lVar13,uVar11);
          FUN_7100823f80(param_2,uVar11);
          uVar16 = (int)uVar26 - local_24;
          uVar26 = (ulong)uVar16;
          uVar11 = uVar29;
          if (uVar16 == 0) goto LAB_7100815a98;
        }
LAB_7100815ec0:
        uVar11 = FUN_7100824640(param_2,uVar29,uVar26);
        bVar3 = bVar1;
      }
LAB_7100815a98:
      uVar16 = local_3c;
      uVar26 = FUN_71008243c0(param_2,1);
      if (local_3c == 0) {
        if (((((int)param_3 < 2) && (SUB84(dVar31,0) == 0)) &&
            (((ulong)dVar31 & 0xfffff00000000) == 0)) && (((ulong)dVar31 >> 0x20 & 0x7ff00000) != 0)
           ) {
          uVar6 = uVar6 + 1;
          iVar7 = 1;
          local_3c = 1;
          bVar5 = true;
          uVar24 = uVar24 + 1;
        }
        else {
          iVar7 = 1;
          local_3c = 1;
          bVar5 = false;
        }
      }
      else {
        local_3c = 1;
LAB_7100816738:
        uVar26 = FUN_7100824640(param_2,uVar26,uVar16);
        bVar5 = false;
        if ((((int)param_3 < 2) && (SUB84(dVar31,0) == 0)) &&
           ((((ulong)dVar31 & 0xfffff00000000) == 0 && (((ulong)dVar31 >> 0x20 & 0x7ff00000) != 0)))
           ) {
          uVar24 = uVar24 + 1;
          uVar6 = uVar6 + 1;
          bVar5 = true;
        }
        iVar7 = FUN_7100824220(*(undefined4 *)
                                (uVar26 + (long)(*(int *)(uVar26 + 0x14) + -1) * 4 + 0x18));
        iVar7 = 0x20 - iVar7;
      }
      goto LAB_7100815aec;
    }
    FUN_710080f900(lVar13 + 0x10,lVar17 + 0x10,((long)*(int *)(lVar17 + 0x14) + 2) * 4);
    local_58 = FUN_7100824760(param_2,lVar13,1);
LAB_710081640c:
    iVar7 = (int)unaff_x26;
    pcVar19 = pcVar12;
    while( true ) {
      iVar8 = FUN_7100815560(uVar11,uVar26);
      local_48 = iVar8 + 0x30;
      iVar9 = FUN_71008248e0(uVar11,lVar17);
      lVar13 = FUN_7100824940(param_2,uVar26,local_58);
      if (*(int *)(lVar13 + 0x10) != 0) break;
      iVar10 = FUN_71008248e0(uVar11);
      FUN_7100823f80(param_2,lVar13);
      if (iVar10 == 0 && param_3 == 0) {
        if (((ulong)dVar31 & 1) == 0) {
          if (local_48 == 0x39) goto LAB_710081694c;
          uVar6 = uVar24 + 1;
          uVar23 = iVar8 + 0x31;
          if (iVar9 < 1) {
            uVar23 = local_48;
          }
          pcVar25 = pcVar19 + 1;
          *pcVar19 = (char)uVar23;
          goto LAB_7100815fc8;
        }
        if (iVar9 < 0) goto LAB_710081656c;
      }
      else {
        if ((iVar9 < 0) || (((ulong)dVar31 & 1) == 0 && (iVar9 == 0 && param_3 == 0))) {
          if (iVar10 < 1) goto LAB_710081656c;
          goto LAB_7100816530;
        }
        if (0 < iVar10) goto LAB_71008165b8;
      }
      unaff_x26 = pcVar19 + 1;
      *pcVar19 = (char)local_48;
      if (pcVar12 + iVar7 == unaff_x26) goto LAB_7100816924;
      uVar11 = FUN_7100823fa0(param_2,uVar11,10,0);
      pcVar19 = unaff_x26;
      if (lVar17 == local_58) {
        lVar17 = FUN_7100823fa0(param_2,lVar17,10,0);
        local_58 = lVar17;
      }
      else {
        lVar17 = FUN_7100823fa0(param_2,lVar17,10,0);
        local_58 = FUN_7100823fa0(param_2,local_58,10,0);
      }
    }
    FUN_7100823f80(param_2);
    if ((-1 < iVar9) && (((ulong)dVar31 & 1) != 0 || (iVar9 != 0 || param_3 != 0))) {
LAB_71008165b8:
      if (local_48 != 0x39) {
        uVar6 = uVar24 + 1;
        pcVar25 = pcVar19 + 1;
        *pcVar19 = (char)local_48 + '\x01';
        goto LAB_7100815fc8;
      }
LAB_710081694c:
      uVar6 = uVar24 + 1;
      *pcVar19 = '9';
      unaff_x26 = pcVar19 + 1;
      goto LAB_7100815fac;
    }
LAB_7100816530:
    uVar11 = FUN_7100824760(param_2,uVar11,1);
    iVar7 = FUN_71008248e0(uVar11,uVar26);
    if ((0 < iVar7) || ((iVar7 == 0 && ((local_48 & 1) != 0)))) {
      if (local_48 == 0x39) goto LAB_710081694c;
      local_48 = iVar8 + 0x31;
    }
LAB_710081656c:
    uVar6 = uVar24 + 1;
    pcVar25 = pcVar19 + 1;
    *pcVar19 = (char)local_48;
  }
LAB_7100815fc8:
  FUN_7100823f80(param_2,uVar26);
  if (local_58 != 0) {
    if (lVar17 != 0 && lVar17 != local_58) {
      FUN_7100823f80(param_2,lVar17);
    }
LAB_7100815bcc:
    FUN_7100823f80(param_2,local_58);
  }
LAB_7100815bd8:
  FUN_7100823f80(param_2,uVar11);
  *pcVar25 = '\0';
  *param_5 = uVar6;
  if (param_7 != (undefined8 *)0x0) {
    *param_7 = pcVar25;
    return pcVar12;
  }
  return pcVar12;
}



// ===== FUN_7100816a40 @ 7100816a40 (size=208) =====

long FUN_7100816a40(undefined4 *param_1,long param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined1 auStack_10 [16];
  
  puVar1 = param_1 + 0x4f;
  if (param_4 != (undefined4 *)0x0) {
    puVar1 = param_4;
  }
  if (param_2 == 0) {
    lVar4 = FUN_7100834b00();
    puVar2 = *(undefined **)(lVar4 + 0x40);
    if (*(undefined **)(lVar4 + 0x40) == (undefined *)0x0) {
      puVar2 = &DAT_7100af4978;
    }
    iVar3 = (**(code **)(puVar2 + 0xe0))(param_1,auStack_10,0,puVar1);
  }
  else {
    lVar4 = FUN_7100834b00();
    puVar2 = *(undefined **)(lVar4 + 0x40);
    if (*(undefined **)(lVar4 + 0x40) == (undefined *)0x0) {
      puVar2 = &DAT_7100af4978;
    }
    iVar3 = (**(code **)(puVar2 + 0xe0))(param_1,param_2,param_3,puVar1);
  }
  if (iVar3 != -1) {
    return (long)iVar3;
  }
  *puVar1 = 0;
  *param_1 = 0x8a;
  return -1;
}



// ===== FUN_7100816b20 @ 7100816b20 (size=228) =====

long FUN_7100816b20(long param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined1 auStack_10 [16];
  
  puVar4 = (undefined4 *)FUN_7100834b00();
  puVar1 = puVar4 + 0x4f;
  if (param_3 != (undefined4 *)0x0) {
    puVar1 = param_3;
  }
  if (param_1 == 0) {
    lVar5 = FUN_7100834b00();
    puVar2 = *(undefined **)(lVar5 + 0x40);
    if (*(undefined **)(lVar5 + 0x40) == (undefined *)0x0) {
      puVar2 = &DAT_7100af4978;
    }
    iVar3 = (**(code **)(puVar2 + 0xe0))(puVar4,auStack_10,0,puVar1);
  }
  else {
    lVar5 = FUN_7100834b00();
    puVar2 = *(undefined **)(lVar5 + 0x40);
    if (*(undefined **)(lVar5 + 0x40) == (undefined *)0x0) {
      puVar2 = &DAT_7100af4978;
    }
    iVar3 = (**(code **)(puVar2 + 0xe0))(puVar4,param_1,param_2,puVar1);
  }
  if (iVar3 != -1) {
    return (long)iVar3;
  }
  *puVar1 = 0;
  *puVar4 = 0x8a;
  return -1;
}



// ===== FUN_7100816c20 @ 7100816c20 (size=28) =====

int * FUN_7100816c20(int *param_1,int param_2)

{
  int iVar1;
  
  do {
    iVar1 = *param_1;
    if (iVar1 == param_2) {
      return param_1;
    }
    param_1 = param_1 + 1;
  } while (iVar1 != 0);
  return (int *)0x0;
}



// ===== FUN_7100816c40 @ 7100816c40 (size=44) =====

void FUN_7100816c40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_7100834b20(uVar1,param_1,param_2);
  return;
}



// ===== FUN_7100816c80 @ 7100816c80 (size=284) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_7100816c80(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  FUN_710081e680();
  uVar4 = *(ulong *)(PTR_DAT_7100af4bd0 + 8) & 0xfffffffffffffffc;
  lVar3 = ((uVar4 + 0xfdf) - param_2 & 0xfffffffffffff000) - 0x1000;
  if (0xfff < lVar3) {
    puVar1 = (undefined *)FUN_7100835f00(param_1,0);
    if (puVar1 == PTR_DAT_7100af4bd0 + uVar4) {
      lVar2 = FUN_7100835f00(param_1,-lVar3);
      if (lVar2 != -1) {
        *(ulong *)(PTR_DAT_7100af4bd0 + 8) = uVar4 - lVar3 | 1;
        _DAT_7100d22ee0 = _DAT_7100d22ee0 - lVar3;
        FUN_710081e6a0(param_1);
        return 1;
      }
      lVar3 = FUN_7100835f00(param_1,0);
      if (0x1f < lVar3 - (long)PTR_DAT_7100af4bd0) {
        *(ulong *)(PTR_DAT_7100af4bd0 + 8) = lVar3 - (long)PTR_DAT_7100af4bd0 | 1;
        _DAT_7100d22ee0 = lVar3 - DAT_7100af4bb0;
      }
    }
  }
  FUN_710081e6a0(param_1);
  return 0;
}



// ===== FUN_7100816da0 @ 7100816da0 (size=728) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100816da0(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  int iVar2;
  ulong uVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  
  if (param_2 == 0) {
    return;
  }
  FUN_710081e680();
  puVar12 = (undefined *)(param_2 + -0x10);
  uVar3 = *(ulong *)(param_2 + -8);
  uVar9 = uVar3 & 0xfffffffffffffffe;
  puVar1 = (ulong *)(puVar12 + uVar9);
  uVar10 = puVar1[1] & 0xfffffffffffffffc;
  if ((ulong *)PTR_DAT_7100af4bd0 == puVar1) {
    uVar9 = uVar9 + uVar10;
    if ((uVar3 & 1) == 0) {
      puVar12 = puVar12 + -*(long *)(param_2 + -0x10);
      uVar9 = uVar9 + *(long *)(param_2 + -0x10);
      lVar7 = *(long *)(puVar12 + 0x10);
      lVar5 = *(long *)(puVar12 + 0x18);
      *(long *)(lVar7 + 0x18) = lVar5;
      *(long *)(lVar5 + 0x10) = lVar7;
    }
    *(ulong *)(puVar12 + 8) = uVar9 | 1;
    PTR_DAT_7100af4bd0 = puVar12;
    if (DAT_7100af4bb8 <= uVar9) {
      FUN_7100816c80(param_1,_DAT_7100d22f40);
    }
    goto LAB_7100816e7c;
  }
  puVar1[1] = uVar10;
  uVar11 = *(ulong *)((long)puVar1 + uVar10 + 8) & 1;
  if ((uVar3 & 1) == 0) {
    puVar12 = puVar12 + -*(long *)(param_2 + -0x10);
    uVar9 = uVar9 + *(long *)(param_2 + -0x10);
    ppuVar4 = *(undefined ***)(puVar12 + 0x10);
    if (ppuVar4 == &PTR_DAT_7100af4bd0) {
      if (uVar11 == 0) {
        uVar3 = puVar1[2];
        uVar11 = puVar1[3];
        uVar10 = uVar10 + uVar9;
        *(ulong *)(uVar3 + 0x18) = uVar11;
        *(ulong *)(uVar11 + 0x10) = uVar3;
        *(ulong *)(puVar12 + 8) = uVar10 | 1;
        *(ulong *)(puVar12 + uVar10) = uVar10;
      }
      else {
        *(ulong *)(puVar12 + 8) = uVar9 | 1;
        *puVar1 = uVar9;
      }
      goto LAB_7100816e7c;
    }
    puVar6 = *(undefined **)(puVar12 + 0x18);
    ppuVar4[3] = puVar6;
    *(undefined ***)(puVar6 + 0x10) = ppuVar4;
    if (uVar11 == 0) goto LAB_7100816e90;
    *(ulong *)(puVar12 + 8) = uVar9 | 1;
    *puVar1 = uVar9;
  }
  else if (uVar11 == 0) {
LAB_7100816e90:
    ppuVar4 = (undefined **)puVar1[2];
    uVar9 = uVar9 + uVar10;
    if (ppuVar4 == &PTR_DAT_7100af4bd0) {
      PTR_PTR_DAT_7100af4be0 = puVar12;
      PTR_PTR_DAT_7100af4be8 = puVar12;
      *(ulong *)(puVar12 + 8) = uVar9 | 1;
      *(undefined ***)(puVar12 + 0x10) = &PTR_DAT_7100af4bd0;
      *(undefined ***)(puVar12 + 0x18) = &PTR_DAT_7100af4bd0;
      *(ulong *)(puVar12 + uVar9) = uVar9;
      goto LAB_7100816e7c;
    }
    puVar6 = (undefined *)puVar1[3];
    ppuVar4[3] = puVar6;
    *(undefined ***)(puVar6 + 0x10) = ppuVar4;
    *(ulong *)(puVar12 + 8) = uVar9 | 1;
    *(ulong *)(puVar12 + uVar9) = uVar9;
  }
  else {
    *(ulong *)(param_2 + -8) = uVar3 | 1;
    *(ulong *)(puVar12 + uVar9) = uVar9;
  }
  if (0x1ff < uVar9) {
    uVar10 = uVar9 >> 9;
    if (uVar9 < 0xa00) {
      iVar2 = (int)(uVar9 >> 6);
      iVar8 = iVar2 + 0x38;
      lVar7 = ((ulong)(iVar2 + 0x39) & 0x7fffffff) << 4;
    }
    else if (uVar10 < 0x15) {
      iVar8 = (int)uVar10 + 0x5b;
      lVar7 = ((ulong)((int)uVar10 + 0x5c) & 0x7fffffff) << 4;
    }
    else if (uVar10 < 0x55) {
      iVar2 = (int)(uVar9 >> 0xc);
      iVar8 = iVar2 + 0x6e;
      lVar7 = ((ulong)(iVar2 + 0x6f) & 0x7fffffff) << 4;
    }
    else if (uVar10 < 0x155) {
      iVar2 = (int)(uVar9 >> 0xf);
      iVar8 = iVar2 + 0x77;
      lVar7 = ((ulong)(iVar2 + 0x78) & 0x7fffffff) << 4;
    }
    else if (uVar10 < 0x555) {
      iVar2 = (int)(uVar9 >> 0x12);
      iVar8 = iVar2 + 0x7c;
      lVar7 = ((ulong)(iVar2 + 0x7d) & 0x7fffffff) << 4;
    }
    else {
      lVar7 = 0x7f0;
      iVar8 = 0x7e;
    }
    lVar5 = (long)&DAT_7100af4bb0 + lVar7;
    lVar7 = *(long *)(&DAT_7100af4bc0 + lVar7);
    if (lVar5 == lVar7) {
      DAT_7100af4bc8 = 1L << ((ulong)(uint)(iVar8 >> 2) & 0x3f) | DAT_7100af4bc8;
    }
    else {
      do {
        if ((*(ulong *)(lVar7 + 8) & 0xfffffffffffffffc) <= uVar9) break;
        lVar7 = *(long *)(lVar7 + 0x10);
      } while (lVar5 != lVar7);
      lVar5 = *(long *)(lVar7 + 0x18);
    }
    *(long *)(puVar12 + 0x10) = lVar7;
    *(long *)(puVar12 + 0x18) = lVar5;
    *(undefined **)(lVar5 + 0x10) = puVar12;
    *(undefined **)(lVar7 + 0x18) = puVar12;
    FUN_710081e6a0(param_1);
    return;
  }
  iVar8 = (int)(uVar9 >> 3);
  DAT_7100af4bc8 = 1L << ((ulong)(uint)(iVar8 >> 2) & 0x3f) | DAT_7100af4bc8;
  uVar10 = (ulong)(iVar8 + 1) & 0x7fffffff;
  lVar7 = *(long *)(&DAT_7100af4bc0 + uVar10 * 0x10);
  *(long *)(puVar12 + 0x10) = lVar7;
  *(undefined8 **)(puVar12 + 0x18) = &DAT_7100af4bb0 + uVar10 * 2;
  *(undefined **)(&DAT_7100af4bc0 + uVar10 * 0x10) = puVar12;
  *(undefined **)(lVar7 + 0x18) = puVar12;
LAB_7100816e7c:
  FUN_710081e6a0(param_1);
  return;
}



// ===== FUN_7100817080 @ 7100817080 (size=8) =====

void FUN_7100817080(undefined8 param_1)

{
  FUN_7100828740(param_1,2);
  return;
}



// ===== FUN_71008170a0 @ 71008170a0 (size=248) =====

undefined8
FUN_71008170a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              undefined1 *param_9,ulong param_10,undefined8 param_11,undefined8 param_12,
              undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined1 *local_168;
  int local_15c;
  undefined4 local_158;
  undefined1 *local_150;
  int local_148;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a0;
  undefined8 local_90;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined8 uStack_40;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  local_b0 = param_1;
  uStack_a0 = param_2;
  local_90 = param_3;
  uStack_80 = param_4;
  local_70 = param_5;
  uStack_60 = param_6;
  local_50 = param_7;
  uStack_40 = param_8;
  local_28 = param_12;
  uStack_20 = param_13;
  local_18 = param_14;
  uStack_10 = param_15;
  local_8 = param_16;
  puVar1 = (undefined4 *)FUN_7100834b00();
  if (param_10 < 0x80000000) {
    local_15c = (int)param_10 - (uint)(param_10 != 0);
    local_158 = 0xffff0208;
    local_b4 = 0;
    local_168 = param_9;
    local_150 = param_9;
    local_148 = local_15c;
    uVar2 = FUN_7100817928(puVar1,&local_168,param_11);
    if ((int)uVar2 + 1 < 0 != SCARRY4((int)uVar2,1)) {
      *puVar1 = 0x8b;
    }
    if (param_10 != 0) {
      *local_168 = 0;
    }
  }
  else {
    *puVar1 = 0x8b;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// ===== FUN_7100817198 @ 7100817198 (size=1936) =====

long FUN_7100817198(undefined8 param_1,int param_2,byte *param_3,ulong *param_4,uint *param_5,
                   long param_6,int *param_7,long *param_8)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  code *pcVar20;
  byte *pbVar21;
  ulong uVar22;
  int iVar23;
  undefined8 uVar24;
  undefined *local_38;
  int local_c;
  undefined1 auStack_8 [8];
  
  uVar22 = (ulong)*param_5;
  pbVar21 = (byte *)*param_8;
  if ((byte *)*param_8 == (byte *)0x0) {
    pbVar21 = param_3;
  }
  FUN_7100808340(auStack_8,0,8);
  local_38 = &DAT_7100af4978;
  iVar23 = param_2;
  while ((iVar19 = (int)uVar22, *pbVar21 != 0 && (iVar19 <= param_2))) {
    do {
      lVar10 = FUN_7100834b00();
      puVar2 = *(undefined **)(lVar10 + 0x40);
      if (*(undefined **)(lVar10 + 0x40) == (undefined *)0x0) {
        puVar2 = local_38;
      }
      pcVar20 = *(code **)(puVar2 + 0xe8);
      iVar9 = FUN_7100809520();
      iVar9 = (*pcVar20)(param_1,&local_c,pbVar21,(long)iVar9,auStack_8);
      if (iVar9 < 1) goto LAB_7100817760;
      pbVar21 = pbVar21 + iVar9;
    } while (local_c != 0x25);
    iVar9 = -1;
    uVar18 = 0;
    uVar17 = 0;
    iVar8 = 0;
    bVar7 = false;
    iVar19 = 0;
    pbVar13 = pbVar21;
    do {
      pbVar21 = pbVar13 + 1;
      bVar4 = *pbVar13;
      lVar10 = uVar18 * 9;
      bVar5 = (&DAT_71009d3580)[(ulong)(byte)(&DAT_71009d35f0)[*pbVar13] + lVar10];
      uVar18 = (ulong)bVar5;
      if (7 < (byte)"0000000000000000                "
                    [(ulong)(byte)(&DAT_71009d35f0)[*pbVar13] + lVar10 + 0x20] - 1)
      goto LAB_7100817750;
      uVar16 = (uint)bVar4;
      switch((uint)(byte)"0000000000000000                "
                         [(ulong)(byte)(&DAT_71009d35f0)[*pbVar13] + lVar10 + 0x20]) {
      case 1:
        iVar19 = uVar16 - 0x30;
        for (; (*pbVar21 != 0 && (uVar16 = *pbVar21 - 0x30, uVar16 < 10)); pbVar21 = pbVar21 + 1) {
          iVar19 = uVar16 + iVar19 * 10;
        }
        break;
      case 2:
        for (; (byte)(*pbVar21 - 0x30) < 10; pbVar21 = pbVar21 + 1) {
        }
        break;
      case 3:
        if (bVar4 == 0x71) {
          iVar8 = 1;
        }
        else if (uVar16 < 0x72) {
          if (uVar16 != 0x68) {
            if (bVar4 == 0x6a) goto LAB_710081735c;
            if (bVar4 != 0x4c) goto LAB_7100817344;
          }
        }
        else {
          if ((bVar4 != 0x74) && (uVar16 != 0x7a)) {
LAB_7100817344:
            if (pbVar13[1] == 0x6c) {
              iVar8 = 1;
              pbVar21 = pbVar13 + 2;
              break;
            }
          }
LAB_710081735c:
          bVar7 = true;
        }
        break;
      case 4:
        uVar1 = (uint)uVar22 & 0x1f;
        uVar22 = (ulong)uVar1;
        if (uVar16 == 0x61) {
switchD_71008173a0_caseD_0:
          if (iVar9 != -1) {
            uVar17 = 4;
            goto LAB_7100817420;
          }
LAB_71008175f4:
          iVar9 = *(int *)((long)param_4 + 0x1c);
          puVar12 = (undefined8 *)*param_4;
          lVar10 = uVar22 * 0x10;
          if ((iVar9 < 0) && (*(int *)((long)param_4 + 0x1c) = iVar9 + 0x10, iVar9 + 0x10 < 1)) {
            puVar12 = (undefined8 *)(param_4[2] + (long)iVar9);
          }
          else {
            *param_4 = (long)puVar12 + 0xfU & 0xfffffffffffffff8;
          }
          uVar22 = (ulong)(uVar1 + 1);
          iVar9 = -1;
          uVar17 = 4;
          *(undefined8 *)(param_6 + lVar10) = *puVar12;
        }
        else if (uVar16 < 0x62) {
          if (0x17 < (uVar16 - 0x41 & 0xff)) goto switchD_71008173a0_caseD_1;
          switch(uVar16 - 0x41) {
          case 0:
          case 4:
          case 5:
          case 6:
            goto switchD_71008173a0_caseD_0;
          case 2:
switchD_71008173a0_caseD_2:
            if (iVar9 == -1) goto LAB_71008174f0;
            uVar17 = 6;
            goto LAB_7100817420;
          case 3:
          case 0xe:
          case 0x14:
switchD_71008173a0_caseD_3:
            if (iVar9 != -1) {
              uVar17 = 1;
              goto LAB_7100817420;
            }
            goto LAB_7100817454;
          case 0x12:
switchD_71008173a0_caseD_12:
            if (iVar9 != -1) {
              uVar17 = 3;
              goto LAB_7100817420;
            }
            goto LAB_71008175a0;
          case 0x17:
switchD_71008173a0_caseD_17:
            if (bVar7 != false) goto switchD_71008173a0_caseD_3;
            uVar17 = (ulong)(uint)(iVar8 << 1);
          }
switchD_71008173a0_caseD_1:
          if (iVar9 == -1) {
            uVar16 = (uint)uVar17;
            if (uVar16 == 6) {
LAB_71008174f0:
              iVar9 = (int)param_4[3];
              puVar14 = (undefined4 *)*param_4;
              lVar10 = uVar22 * 0x10;
              if ((iVar9 < 0) && (*(int *)(param_4 + 3) = iVar9 + 8, iVar9 + 8 < 1)) {
                puVar14 = (undefined4 *)(param_4[1] + (long)iVar9);
              }
              else {
                *param_4 = (long)puVar14 + 0xbU & 0xfffffffffffffff8;
              }
              uVar22 = (ulong)(uVar1 + 1);
              iVar9 = -1;
              uVar17 = 6;
              *(undefined4 *)(param_6 + lVar10) = *puVar14;
            }
            else if (uVar16 == 2) {
              iVar3 = (int)param_4[3];
              lVar10 = uVar22 * 0x10;
              puVar12 = (undefined8 *)*param_4;
              uVar22 = (ulong)(uVar1 + 1);
              if ((iVar3 < 0) && (*(int *)(param_4 + 3) = iVar3 + 8, iVar3 + 8 < 1)) {
                puVar12 = (undefined8 *)(param_4[1] + (long)iVar3);
              }
              else {
                *param_4 = (long)puVar12 + 0xfU & 0xfffffffffffffff8;
              }
              *(undefined8 *)(param_6 + lVar10) = *puVar12;
            }
            else if (uVar16 < 3) {
              if (uVar16 != 1) goto LAB_710081754c;
LAB_7100817454:
              iVar9 = (int)param_4[3];
              puVar12 = (undefined8 *)*param_4;
              lVar10 = uVar22 * 0x10;
              if ((iVar9 < 0) && (*(int *)(param_4 + 3) = iVar9 + 8, iVar9 + 8 < 1)) {
                puVar12 = (undefined8 *)(param_4[1] + (long)iVar9);
              }
              else {
                *param_4 = (long)puVar12 + 0xfU & 0xfffffffffffffff8;
              }
              uVar22 = (ulong)(uVar1 + 1);
              iVar9 = -1;
              uVar17 = 1;
              *(undefined8 *)(param_6 + lVar10) = *puVar12;
            }
            else {
              if (uVar16 != 3) goto LAB_71008175f4;
LAB_71008175a0:
              iVar9 = (int)param_4[3];
              puVar12 = (undefined8 *)*param_4;
              lVar10 = uVar22 * 0x10;
              if ((iVar9 < 0) && (*(int *)(param_4 + 3) = iVar9 + 8, iVar9 + 8 < 1)) {
                puVar12 = (undefined8 *)(param_4[1] + (long)iVar9);
              }
              else {
                *param_4 = (long)puVar12 + 0xfU & 0xfffffffffffffff8;
              }
              uVar22 = (ulong)(uVar1 + 1);
              iVar9 = -1;
              uVar17 = 3;
              *(undefined8 *)(param_6 + lVar10) = *puVar12;
            }
          }
          else {
LAB_7100817420:
            param_7[iVar9] = (int)uVar17;
          }
        }
        else {
          if (uVar16 != 99) {
            uVar16 = uVar16 - 100 & 0xff;
            if (uVar16 < 0x15) {
              uVar11 = 1L << ((ulong)uVar16 & 0x3f);
              if ((uVar11 & 0x120821) != 0) goto switchD_71008173a0_caseD_17;
              if ((uVar11 & 0x9400) != 0) goto switchD_71008173a0_caseD_12;
              if ((uVar11 & 0xe) != 0) goto switchD_71008173a0_caseD_0;
            }
            goto switchD_71008173a0_caseD_1;
          }
          uVar17 = (ulong)bVar7 << 4;
          if (bVar7) goto switchD_71008173a0_caseD_2;
          if (iVar9 != -1) goto LAB_7100817420;
LAB_710081754c:
          iVar9 = (int)param_4[3];
          puVar14 = (undefined4 *)*param_4;
          lVar10 = uVar22 * 0x10;
          if ((iVar9 < 0) && (*(int *)(param_4 + 3) = iVar9 + 8, iVar9 + 8 < 1)) {
            puVar14 = (undefined4 *)(param_4[1] + (long)iVar9);
          }
          else {
            *param_4 = (long)puVar14 + 0xbU & 0xfffffffffffffff8;
          }
          uVar22 = (ulong)(uVar1 + 1);
          iVar9 = -1;
          uVar17 = 0;
          *(undefined4 *)(param_6 + lVar10) = *puVar14;
        }
        break;
      case 5:
        pbVar13 = pbVar21;
      case 6:
        iVar3 = (int)param_4[3];
        puVar14 = (undefined4 *)*param_4;
        uVar11 = uVar22 << 4;
        uVar6 = uVar22 >> 0x1f;
        if ((iVar3 < 0) && (*(int *)(param_4 + 3) = iVar3 + 8, iVar3 + 8 < 1)) {
          puVar14 = (undefined4 *)(param_4[1] + (long)iVar3);
        }
        else {
          *param_4 = (long)puVar14 + 0xbU & 0xfffffffffffffff8;
        }
        uVar22 = (ulong)((uint)uVar22 + 1);
        *(undefined4 *)(param_6 + (-uVar6 & 0xfffffff000000000 | uVar11)) = *puVar14;
        pbVar21 = pbVar13;
        break;
      case 7:
        if (*param_7 == -1) {
          FUN_7100808340(param_7,0,0x80);
          uVar18 = (ulong)(uint)bVar5;
        }
        iVar9 = iVar19 + -1;
        if (iVar23 < iVar9) {
          iVar23 = iVar9;
        }
        break;
      case 8:
        if (*param_7 == -1) {
          FUN_7100808340(param_7,0,0x80);
          uVar18 = (ulong)(uint)bVar5;
        }
        iVar19 = iVar19 + -1;
        if (iVar23 < iVar19) {
          iVar23 = iVar19;
        }
        param_7[iVar19] = 0;
      }
LAB_7100817750:
      pbVar13 = pbVar21;
    } while ((int)uVar18 != 0xb);
  }
LAB_7100817760:
  lVar10 = (long)iVar19;
  puVar12 = (undefined8 *)(param_6 + (long)iVar19 * 0x10);
  if (*pbVar21 != 0) {
    iVar23 = param_2;
  }
  do {
    if (iVar23 < (int)lVar10) {
      iVar9 = 0;
      if (iVar19 <= iVar23 + 1) {
        iVar9 = (iVar23 - iVar19) + 1;
      }
      *param_5 = iVar9 + iVar19;
      *param_8 = (long)pbVar21;
      return param_6 + (long)param_2 * 0x10;
    }
    iVar9 = param_7[lVar10];
    puVar15 = (undefined8 *)*param_4;
    if (iVar9 == 4) {
      iVar9 = *(int *)((long)param_4 + 0x1c);
      if ((iVar9 < 0) && (*(int *)((long)param_4 + 0x1c) = iVar9 + 0x10, iVar9 + 0x10 < 1)) {
        puVar15 = (undefined8 *)(param_4[2] + (long)iVar9);
      }
      else {
        *param_4 = (long)puVar15 + 0xfU & 0xfffffffffffffff8;
      }
      *puVar12 = *puVar15;
    }
    else if (iVar9 < 5) {
      iVar8 = (int)param_4[3];
      if (((iVar9 == 2) || (iVar9 == 3)) || (iVar9 == 1)) {
        if ((iVar8 < 0) && (*(int *)(param_4 + 3) = iVar8 + 8, iVar8 + 8 < 1)) {
          puVar15 = (undefined8 *)(param_4[1] + (long)iVar8);
        }
        else {
          *param_4 = (long)puVar15 + 0xfU & 0xfffffffffffffff8;
        }
        *puVar12 = *puVar15;
      }
      else {
LAB_7100817870:
        iVar9 = (int)param_4[3];
        if ((iVar9 < 0) && (*(int *)(param_4 + 3) = iVar9 + 8, iVar9 + 8 < 1)) {
          puVar15 = (undefined8 *)(param_4[1] + (long)iVar9);
        }
        else {
          *param_4 = (long)puVar15 + 0xbU & 0xfffffffffffffff8;
        }
        *(undefined4 *)puVar12 = *(undefined4 *)puVar15;
      }
    }
    else {
      if (iVar9 != 5) goto LAB_7100817870;
      iVar9 = *(int *)((long)param_4 + 0x1c);
      if ((iVar9 < 0) && (*(int *)((long)param_4 + 0x1c) = iVar9 + 0x10, iVar9 + 0x10 < 1)) {
        puVar15 = (undefined8 *)(param_4[2] + (long)iVar9);
      }
      else {
        puVar15 = (undefined8 *)((long)puVar15 + 0xfU & 0xfffffffffffffff0);
        *param_4 = (ulong)(puVar15 + 2);
      }
      uVar24 = *puVar15;
      puVar12[1] = puVar15[1];
      *puVar12 = uVar24;
    }
    lVar10 = lVar10 + 1;
    puVar12 = puVar12 + 2;
  } while( true );
}



// ===== FUN_7100817928 @ 7100817928 (size=14980) =====

/* WARNING: Type propagation algorithm not settling */

int FUN_7100817928(undefined4 *param_1,long *param_2,byte *param_3,ulong *param_4)

{
  bool bVar1;
  undefined *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined1 uVar14;
  byte bVar15;
  ushort uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined4 *puVar28;
  short *psVar29;
  char *pcVar30;
  double *pdVar31;
  undefined8 *puVar32;
  ulong uVar33;
  ulong *puVar34;
  ushort *puVar35;
  uint uVar36;
  undefined8 uVar37;
  long *plVar38;
  undefined2 *puVar39;
  undefined1 *puVar40;
  int *piVar41;
  ulong uVar42;
  uint *puVar43;
  undefined4 uVar44;
  byte *pbVar45;
  char *pcVar46;
  char *pcVar47;
  uint uVar48;
  uint uVar49;
  byte *pbVar50;
  int iVar51;
  uint uVar52;
  code *pcVar53;
  byte *pbVar54;
  uint uVar55;
  long lVar56;
  byte *pbVar57;
  double dVar58;
  double dVar59;
  ulong local_460;
  int local_450;
  byte *local_448;
  int local_440;
  long local_438;
  long local_428;
  char *local_420;
  int local_418;
  int local_414;
  undefined *local_3f8;
  char local_3c1;
  undefined2 local_3c0;
  uint local_3bc;
  uint local_3b8;
  int local_3b4;
  undefined1 local_3b0;
  undefined1 local_3af;
  char local_3ae [11];
  char local_3a3 [3];
  undefined8 local_3a0;
  undefined1 auStack_398 [8];
  undefined1 auStack_390 [8];
  byte *local_388;
  long *local_380;
  int local_378;
  long local_370;
  byte local_368 [98];
  byte local_306 [6];
  undefined4 local_300 [32];
  long local_280 [16];
  double local_200 [64];
  
  plVar24 = (long *)FUN_710080fb60();
  lVar25 = *plVar24;
  lVar26 = FUN_710081ce00();
  FUN_7100808340(auStack_398,0,8);
  if (((*(ushort *)(param_2 + 2) >> 7 & 1) != 0) && (param_2[3] == 0)) {
    lVar27 = FUN_7100814ca0(param_1,0x40);
    *param_2 = lVar27;
    param_2[3] = lVar27;
    if (lVar27 == 0) {
      *param_1 = 0xc;
      return -1;
    }
    *(undefined4 *)(param_2 + 4) = 0x40;
  }
  plVar24 = local_280;
  dVar58 = 0.0;
  local_300[0] = 0xffffffff;
  local_460 = 0;
  uVar19 = 0;
  local_448 = (byte *)0x0;
  local_438 = 0;
  local_428 = 0;
  local_420 = (char *)0x0;
  local_418 = 0;
  local_414 = 0;
  local_3f8 = &DAT_7100af4978;
  local_3bc = 0;
  local_3a0 = 0;
  local_378 = 0;
  local_370 = 0;
  local_380 = plVar24;
LAB_7100817a28:
  pbVar57 = param_3;
  while( true ) {
    lVar27 = FUN_7100834b00();
    puVar2 = *(undefined **)(lVar27 + 0x40);
    if (*(undefined **)(lVar27 + 0x40) == (undefined *)0x0) {
      puVar2 = local_3f8;
    }
    pcVar53 = *(code **)(puVar2 + 0xe8);
    iVar17 = FUN_7100809520();
    iVar17 = (*pcVar53)(param_1,&local_3b4,pbVar57,(long)iVar17,auStack_398);
    if (iVar17 == 0) break;
    if (iVar17 < 0) {
      iVar17 = 1;
      FUN_7100808340(auStack_398,0,8);
    }
    else if (local_3b4 == 0x25) break;
    pbVar57 = pbVar57 + iVar17;
  }
  iVar51 = (int)pbVar57 - (int)param_3;
  if ((int)pbVar57 != (int)param_3) {
    *plVar24 = (long)param_3;
    plVar24[1] = (long)iVar51;
    local_370 = local_370 + iVar51;
    local_378 = local_378 + 1;
    if (local_378 < 8) {
      plVar24 = plVar24 + 2;
    }
    else {
      iVar23 = FUN_7100825060(param_1,param_2,&local_380);
      if (iVar23 != 0) goto LAB_710081b374;
      plVar24 = local_280;
    }
    local_418 = local_418 + iVar51;
  }
  if (iVar17 != 0) {
    pbVar54 = pbVar57 + 1;
    uVar21 = 0xffffffff;
    bVar12 = false;
    uVar55 = 0;
    bVar13 = false;
    bVar11 = false;
    bVar10 = false;
    bVar9 = false;
    bVar8 = false;
    bVar7 = false;
    bVar6 = false;
    bVar5 = false;
    bVar1 = false;
    uVar52 = 0;
    local_3c1 = '\0';
    uVar42 = local_460;
LAB_7100817b44:
    do {
      uVar49 = local_3bc;
      uVar48 = (uint)local_460;
      uVar18 = (uint)*pbVar54;
      pbVar54 = pbVar54 + 1;
      uVar36 = uVar52;
LAB_7100817b4c:
      uVar52 = uVar36;
      iVar17 = (int)uVar42;
      switch(uVar18) {
      case 0x20:
        if (local_3c1 == '\0') {
          local_3c1 = ' ';
        }
        goto LAB_7100817b44;
      default:
        if (uVar18 == 0) goto LAB_710081b320;
        param_3 = local_368;
        pbVar57 = (byte *)0x0;
        uVar49 = 0;
        iVar51 = 0;
        iVar17 = 0;
        uVar36 = 0;
        local_3c1 = '\0';
        uVar21 = 1;
        local_368[0] = (byte)uVar18;
        goto LAB_710081a4a4;
      case 0x23:
        bVar9 = true;
        goto LAB_7100817b44;
      case 0x27:
        lVar27 = FUN_710080fb60(param_1);
        local_428 = *(long *)(lVar27 + 8);
        local_438 = FUN_710081ce00();
        lVar27 = FUN_710080fb60(param_1);
        local_448 = *(byte **)(lVar27 + 0x10);
        if ((local_438 != 0 && local_448 != (byte *)0x0) && (*local_448 != 0)) {
          bVar13 = true;
        }
        goto LAB_7100817b44;
      case 0x2a:
        uVar36 = (uint)*pbVar54;
        if (9 < *pbVar54 - 0x30) {
          uVar36 = uVar48 + 1;
          if ((int)uVar48 < (int)local_3bc) {
            uVar52 = *(uint *)((long)local_200 +
                              (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            uVar48 = uVar36;
          }
          else {
            puVar43 = (uint *)*param_4;
            iVar17 = (int)param_4[3];
            if ((int)local_3bc < 0x20) {
              if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                puVar43 = (uint *)(param_4[1] + (long)iVar17);
              }
              else {
                *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
              }
              uVar52 = *puVar43;
              *(uint *)((long)local_200 +
                       (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | (ulong)local_3bc << 4)) =
                   uVar52;
              uVar48 = uVar36;
              local_3bc = local_3bc + 1;
            }
            else {
              if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                puVar43 = (uint *)(param_4[1] + (long)iVar17);
              }
              else {
                *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
              }
              uVar52 = *puVar43;
              uVar48 = uVar36;
            }
          }
          goto LAB_7100817d48;
        }
        iVar17 = 0;
        pbVar45 = pbVar54 + 1;
        do {
          iVar17 = (uVar36 - 0x30) + iVar17 * 10;
          pbVar50 = pbVar45 + 1;
          uVar36 = (uint)*pbVar45;
          pbVar45 = pbVar50;
        } while (uVar36 - 0x30 < 10);
        pbVar45 = pbVar54;
        if (uVar36 == 0x24) goto LAB_7100817c44;
        break;
      case 0x2b:
        local_3c1 = '+';
        goto LAB_7100817b44;
      case 0x2d:
        goto switchD_7100817b64_caseD_2d;
      case 0x2e:
        pbVar45 = pbVar54 + 1;
        bVar3 = *pbVar54;
        if (bVar3 != 0x2a) {
          uVar21 = 0;
          pbVar54 = pbVar45;
          while( true ) {
            uVar18 = (uint)bVar3;
            if (9 < bVar3 - 0x30) break;
            uVar21 = (bVar3 - 0x30) + uVar21 * 10;
            bVar3 = *pbVar54;
            pbVar54 = pbVar54 + 1;
          }
          uVar36 = uVar52;
          if ((int)uVar21 < 0) {
            uVar21 = 0xffffffff;
          }
          goto LAB_7100817b4c;
        }
        uVar36 = (uint)pbVar54[1];
        if (9 < pbVar54[1] - 0x30) {
          local_460 = (ulong)(uVar48 + 1);
          if ((int)uVar48 < (int)local_3bc) {
            uVar21 = *(uint *)((long)local_200 +
                              (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            pbVar54 = pbVar45;
          }
          else {
            puVar43 = (uint *)*param_4;
            iVar17 = (int)param_4[3];
            if ((int)local_3bc < 0x20) {
              if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                puVar43 = (uint *)(param_4[1] + (long)iVar17);
              }
              else {
                *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
              }
              uVar21 = *puVar43;
              *(uint *)((long)local_200 +
                       (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | (ulong)local_3bc << 4)) =
                   uVar21;
              pbVar54 = pbVar45;
              local_3bc = local_3bc + 1;
            }
            else {
              if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                puVar43 = (uint *)(param_4[1] + (long)iVar17);
              }
              else {
                *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
              }
              uVar21 = *puVar43;
              pbVar54 = pbVar45;
            }
          }
          goto LAB_7100817ec4;
        }
        iVar17 = 0;
        pbVar50 = pbVar54 + 2;
        do {
          iVar17 = (uVar36 - 0x30) + iVar17 * 10;
          pbVar54 = pbVar50 + 1;
          uVar36 = (uint)*pbVar50;
          pbVar50 = pbVar54;
        } while (uVar36 - 0x30 < 10);
        if (uVar36 == 0x24) goto LAB_7100817dc4;
        break;
      case 0x30:
        uVar55 = uVar55 | 0x80;
        goto LAB_7100817b44;
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
        goto switchD_7100817b64_caseD_31;
      case 0x41:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x61:
      case 0x65:
      case 0x66:
      case 0x67:
        if (bVar8) {
          if (bVar12) {
            if (iVar17 < (int)local_3bc) {
              dVar58 = local_200[(long)iVar17 * 2];
            }
            else {
              pdVar31 = (double *)
                        FUN_7100817198(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,local_300
                                       ,&local_3a0);
              dVar58 = *pdVar31;
            }
          }
          else {
            local_460 = (ulong)(uVar48 + 1);
            if ((int)uVar48 < (int)local_3bc) {
              pdVar31 = local_200 + (long)iVar17 * 2;
            }
            else {
              iVar17 = *(int *)((long)param_4 + 0x1c);
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) &&
                   (*(int *)((long)param_4 + 0x1c) = iVar17 + 0x10, iVar17 + 0x10 < 1)) {
                  pdVar31 = (double *)(param_4[2] + (long)iVar17);
                }
                else {
                  pdVar31 = (double *)(*param_4 + 0xf & 0xfffffffffffffff0);
                  *param_4 = (ulong)(pdVar31 + 2);
                }
                dVar58 = *pdVar31;
                local_200[(long)(int)local_3bc * 2 + 1] = pdVar31[1];
                local_200[(long)(int)local_3bc * 2] = dVar58;
                local_3bc = local_3bc + 1;
                goto LAB_710081874c;
              }
              if ((iVar17 < 0) &&
                 (*(int *)((long)param_4 + 0x1c) = iVar17 + 0x10, iVar17 + 0x10 < 1)) {
                pdVar31 = (double *)(param_4[2] + (long)iVar17);
              }
              else {
                pdVar31 = (double *)(*param_4 + 0xf & 0xfffffffffffffff0);
                *param_4 = (ulong)(pdVar31 + 2);
              }
            }
            dVar58 = *pdVar31;
          }
LAB_710081874c:
          dVar58 = (double)FUN_7100801340(dVar58);
        }
        else if (bVar12) {
          if (iVar17 < (int)local_3bc) {
            dVar58 = *(double *)
                      ((long)local_200 + (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
          }
          else {
            pdVar31 = (double *)
                      FUN_7100817198(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,local_300,
                                     &local_3a0);
            dVar58 = *pdVar31;
          }
        }
        else {
          local_460 = (ulong)(uVar48 + 1);
          if ((int)uVar48 < (int)local_3bc) {
            dVar58 = *(double *)
                      ((long)local_200 + (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
          }
          else {
            pdVar31 = (double *)*param_4;
            iVar17 = *(int *)((long)param_4 + 0x1c);
            if ((int)local_3bc < 0x20) {
              if ((iVar17 < 0) &&
                 (*(int *)((long)param_4 + 0x1c) = iVar17 + 0x10, iVar17 + 0x10 < 1)) {
                pdVar31 = (double *)(param_4[2] + (long)iVar17);
              }
              else {
                *param_4 = (long)pdVar31 + 0xfU & 0xfffffffffffffff8;
              }
              dVar58 = *pdVar31;
              *(double *)
               ((long)local_200 +
               (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | (ulong)local_3bc << 4)) = dVar58;
              local_3bc = local_3bc + 1;
            }
            else {
              if ((iVar17 < 0) &&
                 (*(int *)((long)param_4 + 0x1c) = iVar17 + 0x10, iVar17 + 0x10 < 1)) {
                pdVar31 = (double *)(param_4[2] + (long)iVar17);
              }
              else {
                *param_4 = (long)pdVar31 + 0xfU & 0xfffffffffffffff8;
              }
              dVar58 = *pdVar31;
            }
          }
        }
        dVar59 = ABS(dVar58);
        if (dVar59 != 1.79769313486232e+308 && dVar59 < 1.79769313486232e+308 == NAN(dVar59)) {
          if (dVar58 < 0.0) {
            local_3c1 = '-';
          }
          pbVar57 = &UNK_71009cfa74;
          param_3 = &UNK_71009cfa78;
LAB_7100818894:
          if (uVar18 < 0x48) {
            param_3 = pbVar57;
          }
          uVar55 = uVar55 & 0xffffff7f;
          pbVar57 = (byte *)0x0;
          uVar20 = 3;
          goto LAB_71008188a4;
        }
        if (NAN(dVar58)) {
          if ((long)dVar58 < 0) {
            local_3c1 = '-';
          }
          pbVar57 = &UNK_71009cfa7c;
          param_3 = &UNK_71009cfa80;
          goto LAB_7100818894;
        }
        uVar36 = uVar18 & 0xffffffdf;
        if (uVar36 == 0x41) {
          uVar14 = 0x58;
          if (uVar18 == 0x61) {
            uVar14 = 0x78;
          }
          local_3c0 = CONCAT11(uVar14,0x30);
          bVar10 = true;
          if ((int)uVar21 < 100) {
            param_3 = local_368;
            pbVar57 = (byte *)0x0;
          }
          else {
            param_3 = (byte *)FUN_7100814ca0(param_1,(long)(int)(uVar21 + 1));
            pbVar57 = param_3;
            if (param_3 == (byte *)0x0) goto LAB_7100818920;
          }
        }
        else {
          pbVar57 = (byte *)0x0;
          if (uVar21 == 0xffffffff) {
            uVar21 = 6;
          }
          else if ((uVar36 == 0x47) && (uVar21 == 0)) {
            uVar21 = 1;
          }
        }
        if ((long)dVar58 < 0) {
          local_440 = 0x2d;
          dVar59 = -dVar58;
        }
        else {
          local_440 = 0;
          dVar59 = dVar58;
        }
        local_450 = (int)lVar26;
        if (uVar36 == 0x41) {
          dVar59 = (double)FUN_7100823560();
          dVar59 = dVar59 * 0.125;
          if (dVar59 == 0.0) {
            local_3b8 = 1;
          }
          pbVar45 = param_3;
          pcVar30 = "0123456789ABCDEF";
          if (uVar18 == 0x61) {
            pcVar30 = "0123456789abcdef";
          }
          goto LAB_71008189dc;
        }
        uVar19 = uVar21;
        if (uVar36 == 0x46) {
          uVar37 = 3;
        }
        else {
          uVar37 = 2;
          if (uVar36 == 0x45) {
            uVar19 = uVar21 + 1;
          }
        }
        param_3 = (byte *)FUN_7100815720(param_1,uVar37,uVar19,&local_3b8,auStack_390,&local_388);
        if (uVar36 == 0x47) {
          if (!bVar9) goto LAB_7100818b04;
          pbVar45 = param_3 + (int)uVar19;
        }
        else {
          pbVar45 = param_3 + (int)uVar19;
          if (uVar36 == 0x46) {
            if ((*param_3 == 0x30) && (dVar59 != 0.0)) {
              local_3b8 = 1 - uVar19;
            }
            pbVar45 = pbVar45 + (int)local_3b8;
          }
        }
        if (dVar59 == 0.0) {
          local_388 = pbVar45;
        }
        while (pbVar50 = local_388, local_388 < pbVar45) {
          local_388 = local_388 + 1;
          *pbVar50 = 0x30;
        }
LAB_7100818b04:
        uVar19 = (int)local_388 - (int)param_3;
        if (uVar36 != 0x47) {
          if (uVar36 == 0x46) {
            if ((int)local_3b8 < 1) {
              if (!bVar9 && uVar21 == 0) {
                uVar18 = 0x66;
                uVar21 = 1;
                goto LAB_7100818d54;
              }
              local_450 = local_450 + 1;
LAB_7100818d00:
              uVar36 = uVar21 + local_450;
            }
            else {
              uVar36 = local_3b8;
              if (bVar9 || uVar21 != 0) {
                local_450 = local_3b8 + local_450;
                goto LAB_7100818d00;
              }
            }
            uVar21 = uVar36;
            uVar18 = 0x66;
            goto LAB_7100818d54;
          }
          goto LAB_7100818ba8;
        }
        if (((int)(local_3b8 + 3) < 0 != SCARRY4(local_3b8,3)) || ((int)uVar21 < (int)local_3b8)) {
          uVar18 = uVar18 - 2;
          goto LAB_7100818ba8;
        }
        if ((int)local_3b8 < (int)uVar19) {
          uVar21 = local_450 + uVar19;
          if ((int)local_3b8 < 1) {
            uVar21 = ((local_450 + uVar19) - local_3b8) + 1;
          }
        }
        else {
          uVar21 = local_3b8;
          if (bVar9) {
            uVar21 = local_3b8 + local_450;
          }
        }
        uVar18 = 0x67;
LAB_7100818d54:
        iVar17 = (uint)bVar13 << 10;
        iVar51 = 0;
        uVar36 = local_3b8;
        if (bVar13) {
          if ((int)local_3b8 < 1) {
            iVar17 = 0;
          }
          else {
            iVar17 = 0;
            while( true ) {
              bVar3 = *local_448;
              if ((bVar3 == 0xff) || ((int)uVar36 <= (int)(uint)bVar3)) break;
              uVar36 = uVar36 - bVar3;
              if (local_448[1] == 0) {
                iVar51 = iVar51 + 1;
              }
              else {
                iVar17 = iVar17 + 1;
                local_448 = local_448 + 1;
              }
            }
            uVar21 = uVar21 + (iVar17 + iVar51) * (int)local_438;
          }
        }
        goto LAB_7100818dc4;
      case 0x43:
      case 99:
        uVar33 = (ulong)local_3bc;
        param_3 = local_368;
        if ((uVar18 == 0x43) || (bVar1)) {
          FUN_7100808340(&local_388,0,8);
          if (bVar12) {
            if (iVar17 < (int)uVar49) {
              uVar44 = *(undefined4 *)
                        ((long)local_200 + (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar28 = (undefined4 *)
                        FUN_7100817198(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,local_300
                                       ,&local_3a0);
              uVar44 = *puVar28;
            }
          }
          else {
            local_460 = (ulong)(uVar48 + 1);
            if ((int)uVar48 < (int)uVar49) {
              uVar44 = *(undefined4 *)
                        ((long)local_200 + (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar28 = (undefined4 *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)uVar49 < 0x20) {
                local_3bc = uVar49 + 1;
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar28 = (undefined4 *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar28 + 0xbU & 0xfffffffffffffff8;
                }
                uVar44 = *puVar28;
                *(undefined4 *)
                 ((long)local_200 + (-(ulong)(uVar49 >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)) =
                     uVar44;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar28 = (undefined4 *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar28 + 0xbU & 0xfffffffffffffff8;
                }
                uVar44 = *puVar28;
              }
            }
          }
          uVar20 = FUN_7100816a40(param_1,param_3,uVar44,&local_388);
          if (uVar20 == 0xffffffff) {
LAB_7100818920:
            *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | 0x40;
            goto LAB_710081b374;
          }
        }
        else {
          if (bVar12) {
            if (iVar17 < (int)local_3bc) {
              local_368[0] = *(byte *)((long)local_200 +
                                      (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              pbVar57 = (byte *)FUN_7100817198(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,
                                               local_300,&local_3a0);
              local_368[0] = *pbVar57;
            }
          }
          else {
            local_460 = (ulong)(uVar48 + 1);
            if ((int)uVar48 < (int)local_3bc) {
              local_368[0] = *(byte *)((long)local_200 +
                                      (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              pbVar57 = (byte *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  pbVar57 = (byte *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (ulong)(pbVar57 + 0xb) & 0xfffffffffffffff8;
                }
                uVar44 = *(undefined4 *)pbVar57;
                *(undefined4 *)
                 ((long)local_200 + (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)
                 ) = uVar44;
                local_368[0] = (byte)uVar44;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  pbVar57 = (byte *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (ulong)(pbVar57 + 0xb) & 0xfffffffffffffff8;
                }
                local_368[0] = *pbVar57;
              }
            }
          }
          uVar20 = 1;
        }
        pbVar57 = (byte *)0x0;
        local_3c1 = '\0';
        goto LAB_71008188a4;
      case 0x44:
        bVar1 = true;
        goto LAB_7100818244;
      case 0x4c:
        bVar8 = true;
        goto LAB_7100817b44;
      case 0x4f:
        bVar1 = true;
        goto LAB_7100819234;
      case 0x53:
      case 0x73:
        if (bVar12) {
          if (iVar17 < (int)local_3bc) {
            param_3 = *(byte **)((long)local_200 +
                                (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
          }
          else {
            puVar32 = (undefined8 *)
                      FUN_7100817198(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,local_300,
                                     &local_3a0);
            param_3 = (byte *)*puVar32;
          }
        }
        else {
          local_460 = (ulong)(uVar48 + 1);
          if ((int)uVar48 < (int)local_3bc) {
            param_3 = *(byte **)((long)local_200 +
                                (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
          }
          else {
            puVar32 = (undefined8 *)*param_4;
            iVar17 = (int)param_4[3];
            if ((int)local_3bc < 0x20) {
              if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                puVar32 = (undefined8 *)(param_4[1] + (long)iVar17);
              }
              else {
                *param_4 = (long)puVar32 + 0xfU & 0xfffffffffffffff8;
              }
              param_3 = (byte *)*puVar32;
              *(byte **)((long)local_200 +
                        (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | (ulong)local_3bc << 4))
                   = param_3;
              local_3bc = local_3bc + 1;
            }
            else {
              if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                puVar32 = (undefined8 *)(param_4[1] + (long)iVar17);
              }
              else {
                *param_4 = (long)puVar32 + 0xfU & 0xfffffffffffffff8;
              }
              param_3 = (byte *)*puVar32;
            }
          }
        }
        local_3c1 = '\0';
        if (param_3 == (byte *)0x0) {
          if (6 < uVar21) {
            uVar21 = 6;
          }
          pbVar57 = (byte *)0x0;
          uVar49 = 0;
          param_3 = &UNK_71009cfaa6;
          iVar51 = 0;
          uVar36 = 0;
          iVar17 = 0;
          goto LAB_710081a4a4;
        }
        if ((uVar18 == 0x53) || (uVar36 = (uint)bVar1 << 4, bVar1)) {
          local_388 = param_3;
          FUN_7100808340(auStack_390,0,8);
          if ((int)uVar21 < 0) {
            uVar20 = FUN_710081fbe0(param_1,0,&local_388,0,auStack_390);
            pbVar57 = param_3;
            if (uVar20 != 0xffffffff) goto LAB_7100819970;
            goto LAB_7100819948;
          }
          lVar27 = 0;
          uVar36 = 0;
          goto LAB_71008198d0;
        }
        if ((int)uVar21 < 0) {
          uVar21 = FUN_710081ce00(param_3);
        }
        else {
          lVar27 = FUN_710080c980(param_3,0,(long)(int)uVar21);
          if (lVar27 != 0) {
            uVar21 = (int)lVar27 - (int)param_3;
          }
        }
        pbVar57 = (byte *)0x0;
        iVar17 = 0;
        iVar51 = 0;
        uVar49 = 0;
        uVar18 = 0x73;
        goto LAB_710081a4a4;
      case 0x55:
        bVar1 = true;
        goto LAB_7100819aac;
      case 0x58:
        local_420 = "0123456789ABCDEF";
        goto LAB_7100819eb0;
      case 100:
      case 0x69:
LAB_7100818244:
        uVar33 = (ulong)local_3bc;
        if ((bVar5) || (bVar1)) {
          if (!bVar12) {
            if ((int)uVar48 < (int)local_3bc) {
              uVar42 = *(ulong *)((long)local_200 +
                                 (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar34 = (ulong *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar34 = (ulong *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar34 + 0xfU & 0xfffffffffffffff8;
                }
                uVar42 = *puVar34;
                *(ulong *)((long)local_200 +
                          (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)) = uVar42
                ;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar34 = (ulong *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar34 + 0xfU & 0xfffffffffffffff8;
                }
                uVar42 = *puVar34;
              }
            }
            goto LAB_7100818614;
          }
          if (iVar17 < (int)local_3bc) {
            uVar42 = *(ulong *)((long)local_200 +
                               (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
          }
          else {
            puVar34 = (ulong *)FUN_7100817198(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,
                                              local_300,&local_3a0);
            uVar42 = *puVar34;
          }
        }
        else if (bVar6) {
          if (!bVar12) {
            if ((int)uVar48 < (int)local_3bc) {
              uVar42 = (ulong)*(short *)((long)local_200 +
                                        (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              psVar29 = (short *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  psVar29 = (short *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)psVar29 + 0xbU & 0xfffffffffffffff8;
                }
                uVar44 = *(undefined4 *)psVar29;
                *(undefined4 *)
                 ((long)local_200 + (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)
                 ) = uVar44;
                uVar42 = (ulong)(short)uVar44;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  psVar29 = (short *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)psVar29 + 0xbU & 0xfffffffffffffff8;
                }
                uVar42 = (ulong)*psVar29;
              }
            }
            goto LAB_7100818614;
          }
          if (iVar17 < (int)local_3bc) {
            uVar42 = (ulong)*(short *)((long)local_200 +
                                      (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
          }
          else {
            psVar29 = (short *)FUN_7100817198(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,
                                              local_300,&local_3a0);
            uVar42 = (ulong)*psVar29;
          }
        }
        else if (bVar7) {
          if (bVar12) {
            if (iVar17 < (int)local_3bc) {
              uVar42 = (ulong)*(char *)((long)local_200 +
                                       (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              pcVar30 = (char *)FUN_7100817198(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,
                                               local_300,&local_3a0);
              uVar42 = (ulong)*pcVar30;
            }
          }
          else {
            if ((int)uVar48 < (int)local_3bc) {
              uVar42 = (ulong)*(char *)((long)local_200 +
                                       (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              pcVar30 = (char *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  pcVar30 = (char *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (ulong)(pcVar30 + 0xb) & 0xfffffffffffffff8;
                }
                uVar44 = *(undefined4 *)pcVar30;
                *(undefined4 *)
                 ((long)local_200 + (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)
                 ) = uVar44;
                uVar42 = (ulong)(char)uVar44;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  pcVar30 = (char *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (ulong)(pcVar30 + 0xb) & 0xfffffffffffffff8;
                }
                uVar42 = (ulong)*pcVar30;
              }
            }
LAB_7100818614:
            uVar48 = uVar48 + 1;
          }
        }
        else {
          if (!bVar12) {
            if ((int)uVar48 < (int)local_3bc) {
              uVar42 = (ulong)*(int *)((long)local_200 +
                                      (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              piVar41 = (int *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  piVar41 = (int *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)piVar41 + 0xbU & 0xfffffffffffffff8;
                }
                iVar17 = *piVar41;
                *(int *)((long)local_200 +
                        (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)) = iVar17;
                uVar42 = (ulong)iVar17;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  piVar41 = (int *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)piVar41 + 0xbU & 0xfffffffffffffff8;
                }
                uVar42 = (ulong)*piVar41;
              }
            }
            goto LAB_7100818614;
          }
          if (iVar17 < (int)local_3bc) {
            uVar42 = (ulong)*(int *)((long)local_200 +
                                    (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
          }
          else {
            piVar41 = (int *)FUN_7100817198(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,
                                            local_300,&local_3a0);
            uVar42 = (ulong)*piVar41;
          }
        }
        if ((long)uVar42 < 0) {
          uVar42 = -uVar42;
          local_3c1 = '-';
          iVar17 = 1;
LAB_710081a2a8:
          if ((int)uVar21 < 0) {
LAB_710081a2d4:
            if (iVar17 == 1) goto LAB_710081a31c;
            param_3 = local_306 + 2;
            if (iVar17 == 2) {
              do {
                uVar33 = uVar42 & 0xf;
                uVar42 = uVar42 >> 4;
                param_3 = param_3 + -1;
                *param_3 = local_420[uVar33];
              } while (uVar42 != 0);
            }
            else {
              do {
                pbVar57 = param_3;
                iVar17 = ((uint)uVar42 & 7) + 0x30;
                param_3 = pbVar57 + -1;
                *param_3 = (byte)iVar17;
                uVar42 = uVar42 >> 3;
              } while (uVar42 != 0);
              if ((bVar9 != false) && (iVar17 != 0x30)) {
                pbVar57[-2] = 0x30;
                param_3 = pbVar57 + -2;
              }
            }
          }
          else {
LAB_710081a2c4:
            uVar55 = uVar55 & 0xffffff7f;
            if (uVar42 != 0 || uVar21 != 0) goto LAB_710081a2d4;
            if (iVar17 == 0) {
              uVar21 = (uint)bVar9;
              if (!bVar9) goto LAB_710081a40c;
              uVar21 = 0;
              local_306[1] = '0';
              goto LAB_710081a400;
            }
            uVar21 = 0;
LAB_710081a40c:
            param_3 = local_306 + 2;
          }
          goto LAB_710081a428;
        }
        if (-1 < (int)uVar21) {
          iVar17 = 1;
          goto LAB_710081a2c4;
        }
LAB_710081a31c:
        if (9 < uVar42) {
          pbVar57 = local_306 + 2;
          uVar19 = 0;
          goto LAB_710081a350;
        }
        local_306[1] = (char)uVar42 + '0';
LAB_710081a400:
        param_3 = local_306 + 1;
        goto LAB_710081a428;
      case 0x68:
        if (*pbVar54 == 0x68) {
          pbVar54 = pbVar54 + 1;
          bVar7 = true;
        }
        else {
          bVar6 = true;
        }
        goto LAB_7100817b44;
      case 0x6a:
      case 0x74:
      case 0x7a:
        goto switchD_7100817b64_caseD_6a;
      case 0x6c:
        if (*pbVar54 == 0x6c) {
          pbVar54 = pbVar54 + 1;
          goto switchD_7100817b64_caseD_71;
        }
switchD_7100817b64_caseD_6a:
        bVar1 = true;
        goto LAB_7100817b44;
      case 0x6e:
        uVar33 = (ulong)local_3bc;
        if ((bVar5) || (bVar1)) {
          if (bVar12) {
            if (iVar17 < (int)local_3bc) {
              plVar38 = *(long **)((long)local_200 +
                                  (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar32 = (undefined8 *)
                        FUN_7100817198(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,local_300
                                       ,&local_3a0);
              plVar38 = (long *)*puVar32;
            }
          }
          else {
            local_460 = (ulong)(uVar48 + 1);
            if ((int)uVar48 < (int)local_3bc) {
              plVar38 = *(long **)((long)local_200 +
                                  (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar32 = (undefined8 *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar32 = (undefined8 *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar32 + 0xfU & 0xfffffffffffffff8;
                }
                plVar38 = (long *)*puVar32;
                *(long **)((long)local_200 +
                          (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)) =
                     plVar38;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar32 = (undefined8 *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar32 + 0xfU & 0xfffffffffffffff8;
                }
                plVar38 = (long *)*puVar32;
              }
            }
          }
          *plVar38 = (long)local_418;
          param_3 = pbVar54;
        }
        else if (bVar6) {
          if (bVar12) {
            if (iVar17 < (int)local_3bc) {
              puVar39 = *(undefined2 **)
                         ((long)local_200 + (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar32 = (undefined8 *)
                        FUN_7100817198(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,local_300
                                       ,&local_3a0);
              puVar39 = (undefined2 *)*puVar32;
            }
          }
          else {
            local_460 = (ulong)(uVar48 + 1);
            if ((int)uVar48 < (int)local_3bc) {
              puVar39 = *(undefined2 **)
                         ((long)local_200 + (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar32 = (undefined8 *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar32 = (undefined8 *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar32 + 0xfU & 0xfffffffffffffff8;
                }
                puVar39 = (undefined2 *)*puVar32;
                *(undefined2 **)
                 ((long)local_200 + (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)
                 ) = puVar39;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar32 = (undefined8 *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar32 + 0xfU & 0xfffffffffffffff8;
                }
                puVar39 = (undefined2 *)*puVar32;
              }
            }
          }
          *puVar39 = (undefined2)local_418;
          param_3 = pbVar54;
        }
        else if (bVar7) {
          if (bVar12) {
            if (iVar17 < (int)local_3bc) {
              puVar40 = *(undefined1 **)
                         ((long)local_200 + (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar32 = (undefined8 *)
                        FUN_7100817198(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,local_300
                                       ,&local_3a0);
              puVar40 = (undefined1 *)*puVar32;
            }
          }
          else {
            local_460 = (ulong)(uVar48 + 1);
            if ((int)uVar48 < (int)local_3bc) {
              puVar40 = *(undefined1 **)
                         ((long)local_200 + (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar32 = (undefined8 *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar32 = (undefined8 *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar32 + 0xfU & 0xfffffffffffffff8;
                }
                puVar40 = (undefined1 *)*puVar32;
                *(undefined1 **)
                 ((long)local_200 + (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)
                 ) = puVar40;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar32 = (undefined8 *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar32 + 0xfU & 0xfffffffffffffff8;
                }
                puVar40 = (undefined1 *)*puVar32;
              }
            }
          }
          *puVar40 = (undefined1)local_418;
          param_3 = pbVar54;
        }
        else {
          if (bVar12) {
            if (iVar17 < (int)local_3bc) {
              piVar41 = *(int **)((long)local_200 +
                                 (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar32 = (undefined8 *)
                        FUN_7100817198(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,local_300
                                       ,&local_3a0);
              piVar41 = (int *)*puVar32;
            }
          }
          else {
            local_460 = (ulong)(uVar48 + 1);
            if ((int)uVar48 < (int)local_3bc) {
              piVar41 = *(int **)((long)local_200 +
                                 (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar32 = (undefined8 *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar32 = (undefined8 *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar32 + 0xfU & 0xfffffffffffffff8;
                }
                piVar41 = (int *)*puVar32;
                *(int **)((long)local_200 +
                         (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)) = piVar41
                ;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar32 = (undefined8 *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar32 + 0xfU & 0xfffffffffffffff8;
                }
                piVar41 = (int *)*puVar32;
              }
            }
          }
          *piVar41 = local_418;
          param_3 = pbVar54;
        }
        goto LAB_7100817a28;
      case 0x6f:
LAB_7100819234:
        uVar33 = (ulong)local_3bc;
        if ((bVar5) || (bVar1)) {
          if (!bVar12) {
            if ((int)uVar48 < (int)local_3bc) {
              uVar42 = *(ulong *)((long)local_200 +
                                 (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar34 = (ulong *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar34 = (ulong *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar34 + 0xfU & 0xfffffffffffffff8;
                }
                uVar42 = *puVar34;
                *(ulong *)((long)local_200 +
                          (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)) = uVar42
                ;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar34 = (ulong *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar34 + 0xfU & 0xfffffffffffffff8;
                }
                uVar42 = *puVar34;
              }
            }
            goto LAB_7100819604;
          }
          if (iVar17 < (int)local_3bc) {
            uVar42 = *(ulong *)((long)local_200 +
                               (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
          }
          else {
            puVar34 = (ulong *)FUN_7100817198(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,
                                              local_300,&local_3a0);
            uVar42 = *puVar34;
          }
        }
        else if (bVar6) {
          if (!bVar12) {
            if ((int)uVar48 < (int)local_3bc) {
              uVar42 = (ulong)*(ushort *)
                               ((long)local_200 +
                               (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar43 = (uint *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar43 = (uint *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
                }
                uVar36 = *puVar43;
                *(uint *)((long)local_200 +
                         (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)) = uVar36;
                uVar42 = (ulong)uVar36 & 0xffff;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar43 = (uint *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
                }
                uVar42 = (ulong)(ushort)*puVar43;
              }
            }
            goto LAB_7100819604;
          }
          if (iVar17 < (int)local_3bc) {
            uVar42 = (ulong)*(ushort *)
                             ((long)local_200 +
                             (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
          }
          else {
            puVar35 = (ushort *)
                      FUN_7100817198(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,local_300,
                                     &local_3a0);
            uVar42 = (ulong)*puVar35;
          }
        }
        else if (bVar7) {
          if (bVar12) {
            if (iVar17 < (int)local_3bc) {
              uVar42 = (ulong)*(byte *)((long)local_200 +
                                       (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              pbVar57 = (byte *)FUN_7100817198(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,
                                               local_300,&local_3a0);
              uVar42 = (ulong)*pbVar57;
            }
          }
          else {
            if ((int)uVar48 < (int)local_3bc) {
              uVar42 = (ulong)*(byte *)((long)local_200 +
                                       (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar43 = (uint *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar43 = (uint *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
                }
                uVar36 = *puVar43;
                *(uint *)((long)local_200 +
                         (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)) = uVar36;
                uVar42 = (ulong)uVar36 & 0xff;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar43 = (uint *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
                }
                uVar42 = (ulong)(byte)*puVar43;
              }
            }
LAB_7100819604:
            uVar48 = uVar48 + 1;
          }
        }
        else {
          if (!bVar12) {
            if ((int)uVar48 < (int)local_3bc) {
              uVar42 = (ulong)*(uint *)((long)local_200 +
                                       (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar43 = (uint *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar43 = (uint *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
                }
                uVar36 = *puVar43;
                *(uint *)((long)local_200 +
                         (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)) = uVar36;
                uVar42 = (ulong)uVar36;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar43 = (uint *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
                }
                uVar42 = (ulong)*puVar43;
              }
            }
            goto LAB_7100819604;
          }
          if (iVar17 < (int)local_3bc) {
            uVar42 = (ulong)*(uint *)((long)local_200 +
                                     (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
          }
          else {
            puVar43 = (uint *)FUN_7100817198(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,
                                             local_300,&local_3a0);
            uVar42 = (ulong)*puVar43;
          }
        }
        bVar13 = false;
        bVar10 = false;
        iVar17 = 0;
LAB_710081a2a4:
        local_3c1 = '\0';
        goto LAB_710081a2a8;
      case 0x70:
        if (bVar12) {
          if (iVar17 < (int)local_3bc) {
            uVar42 = *(ulong *)((long)local_200 +
                               (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
          }
          else {
            puVar34 = (ulong *)FUN_7100817198(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,
                                              local_300,&local_3a0);
            uVar42 = *puVar34;
          }
        }
        else {
          uVar36 = uVar48 + 1;
          if ((int)uVar48 < (int)local_3bc) {
            uVar42 = *(ulong *)((long)local_200 +
                               (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            uVar48 = uVar36;
          }
          else {
            puVar34 = (ulong *)*param_4;
            iVar17 = (int)param_4[3];
            if ((int)local_3bc < 0x20) {
              if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                puVar34 = (ulong *)(param_4[1] + (long)iVar17);
              }
              else {
                *param_4 = (long)puVar34 + 0xfU & 0xfffffffffffffff8;
              }
              uVar42 = *puVar34;
              *(ulong *)((long)local_200 +
                        (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | (ulong)local_3bc << 4))
                   = uVar42;
              uVar48 = uVar36;
              local_3bc = local_3bc + 1;
            }
            else {
              if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                puVar34 = (ulong *)(param_4[1] + (long)iVar17);
              }
              else {
                *param_4 = (long)puVar34 + 0xfU & 0xfffffffffffffff8;
              }
              uVar42 = *puVar34;
              uVar48 = uVar36;
            }
          }
        }
        local_3c0 = 0x7830;
        bVar10 = true;
        uVar18 = 0x78;
        local_420 = "0123456789abcdef";
        iVar17 = 2;
        goto LAB_710081a2a4;
      case 0x71:
switchD_7100817b64_caseD_71:
        bVar5 = true;
        goto LAB_7100817b44;
      case 0x75:
LAB_7100819aac:
        uVar33 = (ulong)local_3bc;
        if ((bVar5) || (bVar1)) {
          if (!bVar12) {
            if ((int)uVar48 < (int)local_3bc) {
              uVar42 = *(ulong *)((long)local_200 +
                                 (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar34 = (ulong *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar34 = (ulong *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar34 + 0xfU & 0xfffffffffffffff8;
                }
                uVar42 = *puVar34;
                *(ulong *)((long)local_200 +
                          (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)) = uVar42
                ;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar34 = (ulong *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar34 + 0xfU & 0xfffffffffffffff8;
                }
                uVar42 = *puVar34;
              }
            }
            goto LAB_7100819d90;
          }
          if (iVar17 < (int)local_3bc) {
            uVar42 = *(ulong *)((long)local_200 +
                               (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
          }
          else {
            puVar34 = (ulong *)FUN_7100817198(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,
                                              local_300,&local_3a0);
            uVar42 = *puVar34;
          }
        }
        else if (bVar6) {
          if (!bVar12) {
            if ((int)uVar48 < (int)local_3bc) {
              uVar42 = (ulong)*(ushort *)
                               ((long)local_200 +
                               (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar43 = (uint *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar43 = (uint *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
                }
                uVar36 = *puVar43;
                *(uint *)((long)local_200 +
                         (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)) = uVar36;
                uVar42 = (ulong)uVar36 & 0xffff;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar43 = (uint *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
                }
                uVar42 = (ulong)(ushort)*puVar43;
              }
            }
            goto LAB_7100819d90;
          }
          if (iVar17 < (int)local_3bc) {
            uVar42 = (ulong)*(ushort *)
                             ((long)local_200 +
                             (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
          }
          else {
            puVar35 = (ushort *)
                      FUN_7100817198(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,local_300,
                                     &local_3a0);
            uVar42 = (ulong)*puVar35;
          }
        }
        else if (bVar7) {
          if (bVar12) {
            if (iVar17 < (int)local_3bc) {
              uVar42 = (ulong)*(byte *)((long)local_200 +
                                       (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              pbVar57 = (byte *)FUN_7100817198(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,
                                               local_300,&local_3a0);
              uVar42 = (ulong)*pbVar57;
            }
          }
          else {
            if ((int)uVar48 < (int)local_3bc) {
              uVar42 = (ulong)*(byte *)((long)local_200 +
                                       (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar43 = (uint *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar43 = (uint *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
                }
                uVar36 = *puVar43;
                *(uint *)((long)local_200 +
                         (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)) = uVar36;
                uVar42 = (ulong)uVar36 & 0xff;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar43 = (uint *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
                }
                uVar42 = (ulong)(byte)*puVar43;
              }
            }
LAB_7100819d90:
            uVar48 = uVar48 + 1;
          }
        }
        else {
          if (!bVar12) {
            if ((int)uVar48 < (int)local_3bc) {
              uVar42 = (ulong)*(uint *)((long)local_200 +
                                       (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar43 = (uint *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar43 = (uint *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
                }
                uVar36 = *puVar43;
                *(uint *)((long)local_200 +
                         (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)) = uVar36;
                uVar42 = (ulong)uVar36;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar43 = (uint *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
                }
                uVar42 = (ulong)*puVar43;
              }
            }
            goto LAB_7100819d90;
          }
          if (iVar17 < (int)local_3bc) {
            uVar42 = (ulong)*(uint *)((long)local_200 +
                                     (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
          }
          else {
            puVar43 = (uint *)FUN_7100817198(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,
                                             local_300,&local_3a0);
            uVar42 = (ulong)*puVar43;
          }
        }
        iVar17 = 1;
        goto LAB_710081a2a4;
      case 0x78:
        local_420 = "0123456789abcdef";
LAB_7100819eb0:
        uVar33 = (ulong)local_3bc;
        if ((bVar5) || (bVar1)) {
          if (!bVar12) {
            if ((int)uVar48 < (int)local_3bc) {
              uVar42 = *(ulong *)((long)local_200 +
                                 (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar34 = (ulong *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar34 = (ulong *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar34 + 0xfU & 0xfffffffffffffff8;
                }
                uVar42 = *puVar34;
                *(ulong *)((long)local_200 +
                          (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)) = uVar42
                ;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar34 = (ulong *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar34 + 0xfU & 0xfffffffffffffff8;
                }
                uVar42 = *puVar34;
              }
            }
            goto LAB_710081a280;
          }
          if (iVar17 < (int)local_3bc) {
            uVar42 = *(ulong *)((long)local_200 +
                               (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
          }
          else {
            puVar34 = (ulong *)FUN_7100817198(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,
                                              local_300,&local_3a0);
            uVar42 = *puVar34;
          }
        }
        else if (bVar6) {
          if (!bVar12) {
            if ((int)uVar48 < (int)local_3bc) {
              uVar42 = (ulong)*(ushort *)
                               ((long)local_200 +
                               (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar43 = (uint *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar43 = (uint *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
                }
                uVar36 = *puVar43;
                *(uint *)((long)local_200 +
                         (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)) = uVar36;
                uVar42 = (ulong)uVar36 & 0xffff;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar43 = (uint *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
                }
                uVar42 = (ulong)(ushort)*puVar43;
              }
            }
            goto LAB_710081a280;
          }
          if (iVar17 < (int)local_3bc) {
            uVar42 = (ulong)*(ushort *)
                             ((long)local_200 +
                             (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
          }
          else {
            puVar35 = (ushort *)
                      FUN_7100817198(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,local_300,
                                     &local_3a0);
            uVar42 = (ulong)*puVar35;
          }
        }
        else if (bVar7) {
          if (bVar12) {
            if (iVar17 < (int)local_3bc) {
              uVar42 = (ulong)*(byte *)((long)local_200 +
                                       (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              pbVar57 = (byte *)FUN_7100817198(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,
                                               local_300,&local_3a0);
              uVar42 = (ulong)*pbVar57;
            }
          }
          else {
            if ((int)uVar48 < (int)local_3bc) {
              uVar42 = (ulong)*(byte *)((long)local_200 +
                                       (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar43 = (uint *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar43 = (uint *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
                }
                uVar36 = *puVar43;
                *(uint *)((long)local_200 +
                         (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)) = uVar36;
                uVar42 = (ulong)uVar36 & 0xff;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar43 = (uint *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
                }
                uVar42 = (ulong)(byte)*puVar43;
              }
            }
LAB_710081a280:
            uVar48 = uVar48 + 1;
          }
        }
        else {
          if (!bVar12) {
            if ((int)uVar48 < (int)local_3bc) {
              uVar42 = (ulong)*(uint *)((long)local_200 +
                                       (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
            }
            else {
              puVar43 = (uint *)*param_4;
              iVar17 = (int)param_4[3];
              if ((int)local_3bc < 0x20) {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar43 = (uint *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
                }
                uVar36 = *puVar43;
                *(uint *)((long)local_200 +
                         (-(ulong)(local_3bc >> 0x1f) & 0xfffffff000000000 | uVar33 << 4)) = uVar36;
                uVar42 = (ulong)uVar36;
                local_3bc = local_3bc + 1;
              }
              else {
                if ((iVar17 < 0) && (*(int *)(param_4 + 3) = iVar17 + 8, iVar17 + 8 < 1)) {
                  puVar43 = (uint *)(param_4[1] + (long)iVar17);
                }
                else {
                  *param_4 = (long)puVar43 + 0xbU & 0xfffffffffffffff8;
                }
                uVar42 = (ulong)*puVar43;
              }
            }
            goto LAB_710081a280;
          }
          if (iVar17 < (int)local_3bc) {
            uVar42 = (ulong)*(uint *)((long)local_200 +
                                     (-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4));
          }
          else {
            puVar43 = (uint *)FUN_7100817198(param_1,uVar42,pbVar57,param_4,&local_3bc,local_200,
                                             local_300,&local_3a0);
            uVar42 = (ulong)*puVar43;
          }
        }
        if ((bVar9) && (uVar42 != 0)) {
          bVar10 = true;
          local_3c0 = CONCAT11((byte)uVar18,0x30);
        }
        bVar13 = false;
        iVar17 = 2;
        goto LAB_710081a2a4;
      }
      pbVar54 = pbVar45;
      bVar12 = false;
    } while( true );
  }
LAB_710081b320:
  if (local_370 != 0) {
    FUN_7100825060(param_1,param_2,&local_380);
  }
  goto LAB_710081b374;
LAB_71008198d0:
  uVar20 = uVar36;
  pbVar57 = local_388;
  if (*(int *)(local_388 + lVar27) == 0) goto LAB_7100819970;
  iVar17 = FUN_7100816a40(param_1,local_368,*(int *)(local_388 + lVar27),auStack_390);
  if (iVar17 == -1) goto LAB_7100819948;
  uVar36 = uVar36 + iVar17;
  pbVar57 = local_388;
  if (((int)uVar21 < (int)uVar36) || (lVar27 = lVar27 + 4, uVar20 = uVar21, uVar36 == uVar21))
  goto LAB_7100819970;
  goto LAB_71008198d0;
LAB_7100819970:
  local_388 = pbVar57;
  if (uVar20 != 0) {
    if ((int)uVar20 < 100) {
      param_3 = local_368;
      pbVar57 = (byte *)0x0;
    }
    else {
      param_3 = (byte *)FUN_7100814ca0(param_1,(long)(int)(uVar20 + 1));
      pbVar57 = param_3;
      if (param_3 == (byte *)0x0) {
        uVar16 = *(ushort *)(param_2 + 2) | 0x40;
        goto LAB_7100819a08;
      }
    }
    lVar56 = (long)(int)uVar20;
    FUN_7100808340(auStack_390,0,8);
    lVar27 = FUN_710081fbe0(param_1,param_3,&local_388,lVar56,auStack_390);
    if (lVar56 != lVar27) {
      uVar16 = *(ushort *)(param_2 + 2) | 0x40;
      goto LAB_7100819a08;
    }
    param_3[lVar56] = 0;
LAB_71008188a4:
    bVar10 = false;
    uVar49 = 0;
    goto LAB_710081a43c;
  }
  uVar49 = 0;
  iVar51 = 0;
  uVar36 = 0;
  pbVar57 = (byte *)0x0;
  iVar17 = 0;
  uVar21 = uVar20;
  goto LAB_710081a4a4;
LAB_710081a350:
  param_3 = pbVar57 + -1;
  uVar19 = uVar19 + 1;
  pbVar57[-1] = (char)uVar42 + (char)(uVar42 / 10) * -10 + 0x30;
  if (((bVar13 == false) || (uVar19 != *local_448)) || (uVar19 == 0xff)) {
    pbVar57 = param_3;
    if (uVar42 < 10) goto LAB_710081a428;
  }
  else {
    if (uVar42 < 10) goto LAB_710081a428;
    FUN_710081f760(param_3 + -local_438,local_428,local_438);
    if (local_448[1] != 0) {
      local_448 = local_448 + 1;
    }
    uVar19 = 0;
    pbVar57 = param_3 + -local_438;
  }
  uVar42 = uVar42 / 10;
  goto LAB_710081a350;
LAB_710081a428:
  pbVar57 = (byte *)0x0;
  uVar20 = ((int)local_306 + 2) - (int)param_3;
  local_460 = (ulong)uVar48;
  uVar49 = uVar21;
LAB_710081a43c:
  bVar11 = false;
  iVar51 = 0;
  uVar36 = 0;
  iVar17 = 0;
  uVar21 = uVar20;
  goto LAB_710081a4a4;
LAB_71008189dc:
  uVar19 = (uint)(dVar59 * 16.0);
  pbVar50 = pbVar45 + 1;
  *pbVar45 = pcVar30[(int)uVar19];
  dVar59 = dVar59 * 16.0 - (double)(int)uVar19;
  if (uVar21 != 0) goto code_r0x0071008189f8;
  if ((dVar59 != 0.5 && dVar59 < 0.5 == NAN(dVar59)) || ((dVar59 == 0.5 && ((uVar19 & 1) != 0)))) {
    bVar3 = pcVar30[0xf];
    local_388 = pbVar50;
    while( true ) {
      pbVar45 = local_388;
      local_388 = local_388 + -1;
      bVar15 = pbVar45[-1];
      if (bVar15 != bVar3) break;
      pbVar45[-1] = 0x30;
    }
    if (bVar15 == 0x39) {
      bVar15 = pcVar30[10];
    }
    else {
      bVar15 = bVar15 + 1;
    }
    pbVar45[-1] = bVar15;
    goto LAB_7100818a9c;
  }
  uVar21 = 0xffffffff;
  goto LAB_7100818a70;
code_r0x0071008189f8:
  uVar21 = uVar21 - 1;
  pbVar45 = pbVar50;
  if (dVar59 == 0.0) goto LAB_7100818a70;
  goto LAB_71008189dc;
LAB_7100818a70:
  for (lVar27 = 0; -1 < (int)(uVar21 - (int)lVar27); lVar27 = lVar27 + 1) {
    pbVar50[lVar27] = 0x30;
  }
  uVar42 = (ulong)(uVar21 + 1);
  if ((int)(uVar21 + 1) < 0 != SCARRY4(uVar21,1)) {
    uVar42 = 0;
  }
  pbVar50 = pbVar50 + uVar42;
LAB_7100818a9c:
  uVar19 = (int)pbVar50 - (int)param_3;
LAB_7100818ba8:
  uVar49 = local_3b8 - 1;
  uVar21 = uVar18;
  if ((uVar18 & 0xffffffdf) == 0x41) {
    uVar21 = uVar18 + 0xf;
  }
  local_3b0 = (undefined1)uVar21;
  if ((int)uVar49 < 0) {
    local_3af = 0x2d;
    uVar21 = 1 - local_3b8;
  }
  else {
    local_3af = 0x2b;
    uVar21 = uVar49;
  }
  if ((int)uVar21 < 10) {
    if ((uVar18 & 0xffffffdf) == 0x41) {
      pcVar30 = local_3ae;
    }
    else {
      pcVar30 = local_3ae + 1;
      local_3ae[0] = '0';
    }
    local_414 = (int)pcVar30 + 1;
    *pcVar30 = (char)uVar21 + '0';
  }
  else {
    pcVar30 = local_3a3 + 2;
    pcVar46 = pcVar30;
    do {
      pcVar47 = pcVar46;
      cVar4 = (char)(uVar21 / 10);
      pcVar47[-1] = (char)uVar21 + cVar4 * -10 + '0';
      bVar1 = 99 < (int)uVar21;
      pcVar46 = pcVar47 + -1;
      uVar21 = uVar21 / 10;
    } while (bVar1);
    pcVar47[-2] = cVar4 + '0';
    puVar40 = &local_3b0;
    for (pcVar46 = pcVar47 + -2; pcVar46 < pcVar30; pcVar46 = pcVar46 + 1) {
      puVar40[2] = *pcVar46;
      puVar40 = puVar40 + 1;
    }
    local_414 = ((int)&local_3a0 + 1) - (int)pcVar47;
    if (pcVar30 < pcVar47 + -2) {
      local_414 = 0;
    }
    local_414 = local_414 + (int)local_3ae;
  }
  local_414 = local_414 - (int)&local_3b0;
  uVar21 = uVar19 + local_414;
  if ((1 < (int)uVar19) || (bVar9)) {
    uVar21 = uVar21 + local_450;
  }
  bVar13 = false;
  iVar51 = 0;
  iVar17 = 0;
  uVar36 = 0;
  local_3b8 = uVar49;
LAB_7100818dc4:
  if (local_440 != 0) {
    local_3c1 = '-';
  }
  bVar11 = true;
  uVar49 = 0;
LAB_710081a4a4:
  uVar48 = uVar49;
  if ((int)uVar49 < (int)uVar21) {
    uVar48 = uVar21;
  }
  if (local_3c1 != '\0') {
    uVar48 = uVar48 + 1;
  }
  if (bVar10) {
    uVar48 = uVar48 + 2;
  }
  if ((uVar55 == 0) && (iVar23 = uVar52 - uVar48, plVar38 = plVar24, 0 < iVar23)) {
    while( true ) {
      plVar24 = plVar38 + 2;
      local_378 = local_378 + 1;
      if (iVar23 < 0x11) break;
      *plVar38 = (long)"                ";
      plVar38[1] = 0x10;
      local_370 = local_370 + 0x10;
      if (7 < local_378) {
        iVar22 = FUN_7100825060(param_1,param_2,&local_380);
        if (iVar22 != 0) goto LAB_710081b35c;
        plVar24 = local_280;
      }
      iVar23 = iVar23 + -0x10;
      plVar38 = plVar24;
    }
    *plVar38 = (long)"                ";
    plVar38[1] = (long)iVar23;
    local_370 = iVar23 + local_370;
    if (7 < local_378) {
      iVar23 = FUN_7100825060(param_1,param_2,&local_380);
      if (iVar23 != 0) goto LAB_710081b35c;
      plVar24 = local_280;
    }
  }
  if (local_3c1 != '\0') {
    *plVar24 = (long)&local_3c1;
    plVar24[1] = 1;
    local_370 = local_370 + 1;
    local_378 = local_378 + 1;
    if (local_378 < 8) {
      plVar24 = plVar24 + 2;
    }
    else {
      iVar23 = FUN_7100825060(param_1,param_2,&local_380);
      if (iVar23 != 0) goto LAB_710081b35c;
      plVar24 = local_280;
    }
  }
  if (bVar10) {
    *plVar24 = (long)&local_3c0;
    plVar24[1] = 2;
    local_370 = local_370 + 2;
    local_378 = local_378 + 1;
    if (local_378 < 8) {
      plVar24 = plVar24 + 2;
    }
    else {
      iVar23 = FUN_7100825060(param_1,param_2,&local_380);
      if (iVar23 != 0) goto LAB_710081b35c;
      plVar24 = local_280;
    }
  }
  if ((uVar55 == 0x80) && (iVar23 = uVar52 - uVar48, plVar38 = plVar24, 0 < iVar23)) {
    while( true ) {
      plVar24 = plVar38 + 2;
      local_378 = local_378 + 1;
      if (iVar23 < 0x11) break;
      *plVar38 = (long)"0000000000000000                ";
      plVar38[1] = 0x10;
      local_370 = local_370 + 0x10;
      if (7 < local_378) {
        iVar22 = FUN_7100825060(param_1,param_2,&local_380);
        if (iVar22 != 0) goto LAB_710081b35c;
        plVar24 = local_280;
      }
      iVar23 = iVar23 + -0x10;
      plVar38 = plVar24;
    }
    *plVar38 = (long)"0000000000000000                ";
    plVar38[1] = (long)iVar23;
    local_370 = iVar23 + local_370;
    if (7 < local_378) {
      iVar23 = FUN_7100825060(param_1,param_2,&local_380);
      if (iVar23 != 0) goto LAB_710081b35c;
      plVar24 = local_280;
    }
  }
  iVar23 = uVar49 - uVar21;
  plVar38 = plVar24;
  if (0 < iVar23) {
    while( true ) {
      plVar24 = plVar38 + 2;
      local_378 = local_378 + 1;
      if (iVar23 < 0x11) break;
      *plVar38 = (long)"0000000000000000                ";
      plVar38[1] = 0x10;
      local_370 = local_370 + 0x10;
      if (7 < local_378) {
        iVar22 = FUN_7100825060(param_1,param_2,&local_380);
        if (iVar22 != 0) goto LAB_710081b35c;
        plVar24 = local_280;
      }
      iVar23 = iVar23 + -0x10;
      plVar38 = plVar24;
    }
    *plVar38 = (long)"0000000000000000                ";
    plVar38[1] = (long)iVar23;
    local_370 = iVar23 + local_370;
    if (7 < local_378) {
      iVar23 = FUN_7100825060(param_1,param_2,&local_380);
      if (iVar23 != 0) goto LAB_710081b35c;
      plVar24 = local_280;
    }
  }
  if (bVar11) {
    if ((int)uVar18 < 0x66) {
      local_370 = local_370 + 1;
      plVar38 = plVar24 + 2;
      *plVar24 = (long)param_3;
      plVar24[1] = 1;
      local_378 = local_378 + 1;
      if (((int)uVar19 < 2) && (bVar9 == false)) {
joined_r0x00710081b1b4:
        if (7 < local_378) {
LAB_710081b110:
          iVar17 = FUN_7100825060(param_1,param_2,&local_380);
          if (iVar17 != 0) goto LAB_710081b35c;
          plVar38 = local_280;
        }
      }
      else {
        if (7 < local_378) {
          iVar17 = FUN_7100825060(param_1,param_2,&local_380);
          if (iVar17 != 0) goto LAB_710081b35c;
          plVar38 = local_280;
        }
        *plVar38 = lVar25;
        plVar38[1] = lVar26;
        local_370 = local_370 + lVar26;
        local_378 = local_378 + 1;
        if (local_378 < 8) {
          plVar38 = plVar38 + 2;
        }
        else {
          iVar17 = FUN_7100825060(param_1,param_2,&local_380);
          if (iVar17 != 0) goto LAB_710081b35c;
          plVar38 = local_280;
        }
        iVar17 = uVar19 - 1;
        if (dVar58 == 0.0) {
          if (1 < (int)uVar19) {
            while( true ) {
              local_378 = local_378 + 1;
              if (iVar17 < 0x11) break;
              *plVar38 = (long)"0000000000000000                ";
              plVar38[1] = 0x10;
              local_370 = local_370 + 0x10;
              plVar38 = plVar38 + 2;
              if (7 < local_378) {
                iVar51 = FUN_7100825060(param_1,param_2,&local_380);
                if (iVar51 != 0) goto LAB_710081b35c;
                plVar38 = local_280;
              }
              iVar17 = iVar17 + -0x10;
            }
            *plVar38 = (long)"0000000000000000                ";
            plVar38[1] = (long)iVar17;
            local_370 = iVar17 + local_370;
            plVar38 = plVar38 + 2;
            goto joined_r0x00710081b1b4;
          }
        }
        else {
          *plVar38 = (long)(param_3 + 1);
          plVar38[1] = (long)iVar17;
          local_370 = iVar17 + local_370;
          local_378 = local_378 + 1;
          if (7 < local_378) goto LAB_710081b110;
          plVar38 = plVar38 + 2;
        }
      }
      *plVar38 = (long)&local_3b0;
      plVar38[1] = (long)local_414;
      local_370 = local_370 + local_414;
      local_378 = local_378 + 1;
      if (local_378 < 8) {
        plVar38 = plVar38 + 2;
        goto LAB_710081b210;
      }
    }
    else {
      if (dVar58 == 0.0) {
        *plVar24 = (long)&DAT_71009cfaad;
        plVar24[1] = 1;
        local_370 = local_370 + 1;
        local_378 = local_378 + 1;
        if (local_378 < 8) {
          plVar38 = plVar24 + 2;
        }
        else {
          iVar17 = FUN_7100825060(param_1,param_2,&local_380);
          if (iVar17 != 0) goto LAB_710081b35c;
          plVar38 = local_280;
        }
        if (((int)uVar19 <= (int)local_3b8) && (bVar9 == false)) goto LAB_710081b210;
        *plVar38 = lVar25;
        plVar38[1] = lVar26;
        local_370 = local_370 + lVar26;
        local_378 = local_378 + 1;
        if (local_378 < 8) {
          plVar24 = plVar38 + 2;
        }
        else {
          iVar17 = FUN_7100825060(param_1,param_2,&local_380);
          if (iVar17 != 0) goto LAB_710081b35c;
          plVar24 = local_280;
        }
        iVar17 = uVar19 - 1;
        plVar38 = plVar24;
        if (iVar17 < 1) goto LAB_710081b210;
        while( true ) {
          plVar38 = plVar24 + 2;
          local_378 = local_378 + 1;
          if (iVar17 < 0x11) break;
          *plVar24 = (long)"0000000000000000                ";
          plVar24[1] = 0x10;
          local_370 = local_370 + 0x10;
          if (7 < local_378) {
            iVar51 = FUN_7100825060(param_1,param_2,&local_380);
            if (iVar51 != 0) goto LAB_710081b35c;
            plVar38 = local_280;
          }
          iVar17 = iVar17 + -0x10;
          plVar24 = plVar38;
        }
      }
      else {
        if ((int)local_3b8 < 1) {
          *plVar24 = (long)&DAT_71009cfaad;
          plVar24[1] = 1;
          local_370 = local_370 + 1;
          local_378 = local_378 + 1;
          if (local_378 < 8) {
            plVar38 = plVar24 + 2;
          }
          else {
            iVar17 = FUN_7100825060(param_1,param_2,&local_380);
            if (iVar17 != 0) goto LAB_710081b35c;
            plVar38 = local_280;
          }
          if ((uVar19 == 0 && local_3b8 == 0) && bVar9 == false) goto LAB_710081b210;
          *plVar38 = lVar25;
          plVar38[1] = lVar26;
          local_370 = lVar26 + local_370;
          local_378 = local_378 + 1;
          if (local_378 < 8) {
            plVar38 = plVar38 + 2;
          }
          else {
            iVar17 = FUN_7100825060(param_1,param_2,&local_380);
            if (iVar17 != 0) goto LAB_710081b35c;
            plVar38 = local_280;
          }
          if ((int)local_3b8 < 0) {
            iVar17 = -local_3b8;
            plVar24 = plVar38;
            while( true ) {
              plVar38 = plVar24 + 2;
              local_378 = local_378 + 1;
              if (iVar17 < 0x11) break;
              *plVar24 = (long)"0000000000000000                ";
              plVar24[1] = 0x10;
              local_370 = local_370 + 0x10;
              if (7 < local_378) {
                iVar51 = FUN_7100825060(param_1,param_2,&local_380);
                if (iVar51 != 0) goto LAB_710081b35c;
                plVar38 = local_280;
              }
              iVar17 = iVar17 + -0x10;
              plVar24 = plVar38;
            }
            *plVar24 = (long)"0000000000000000                ";
            plVar24[1] = (long)iVar17;
            local_370 = iVar17 + local_370;
            if (7 < local_378) {
              iVar17 = FUN_7100825060(param_1,param_2,&local_380);
              if (iVar17 != 0) goto LAB_710081b35c;
              plVar38 = local_280;
            }
          }
          *plVar38 = (long)param_3;
          plVar38[1] = (long)(int)uVar19;
          local_370 = local_370 + (int)uVar19;
          local_378 = local_378 + 1;
          if (local_378 < 8) {
            plVar38 = plVar38 + 2;
            goto LAB_710081b210;
          }
          goto LAB_710081b1f0;
        }
        uVar21 = uVar36;
        if ((int)uVar19 < (int)uVar36) {
          uVar21 = uVar19;
        }
        if (0 < (int)uVar21) {
          *plVar24 = (long)param_3;
          plVar24[1] = (long)(int)uVar21;
          local_370 = (int)uVar21 + local_370;
          local_378 = local_378 + 1;
          if (local_378 < 8) {
            plVar24 = plVar24 + 2;
          }
          else {
            iVar23 = FUN_7100825060(param_1,param_2,&local_380);
            if (iVar23 != 0) goto LAB_710081b35c;
            plVar24 = local_280;
          }
        }
        iVar23 = uVar36 - (uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU));
        plVar38 = plVar24;
        if (0 < iVar23) {
          while( true ) {
            plVar24 = plVar38 + 2;
            local_378 = local_378 + 1;
            if (iVar23 < 0x11) break;
            *plVar38 = (long)"0000000000000000                ";
            plVar38[1] = 0x10;
            local_370 = local_370 + 0x10;
            if (7 < local_378) {
              iVar22 = FUN_7100825060(param_1,param_2,&local_380);
              if (iVar22 != 0) goto LAB_710081b35c;
              plVar24 = local_280;
            }
            iVar23 = iVar23 + -0x10;
            plVar38 = plVar24;
          }
          *plVar38 = (long)"0000000000000000                ";
          plVar38[1] = (long)iVar23;
          local_370 = iVar23 + local_370;
          if (7 < local_378) {
            iVar23 = FUN_7100825060(param_1,param_2,&local_380);
            if (iVar23 != 0) goto LAB_710081b35c;
            plVar24 = local_280;
          }
        }
        pbVar45 = param_3 + (int)uVar36;
        if (bVar13) {
          while (0 < iVar17 || 0 < iVar51) {
            if (iVar51 < 1) {
              local_448 = local_448 + -1;
              iVar17 = iVar17 + -1;
            }
            else {
              iVar51 = iVar51 + -1;
            }
            *plVar24 = local_428;
            plVar24[1] = local_438;
            local_370 = local_370 + local_438;
            local_378 = local_378 + 1;
            if (local_378 < 8) {
              plVar24 = plVar24 + 2;
            }
            else {
              iVar23 = FUN_7100825060(param_1,param_2,&local_380);
              if (iVar23 != 0) goto LAB_710081b35c;
              plVar24 = local_280;
            }
            uVar36 = ((int)param_3 + uVar19) - (int)pbVar45;
            uVar21 = (uint)*local_448;
            if ((int)uVar36 <= (int)(uint)*local_448) {
              uVar21 = uVar36;
            }
            if (0 < (int)uVar21) {
              *plVar24 = (long)pbVar45;
              plVar24[1] = (long)(int)uVar21;
              local_370 = (int)uVar21 + local_370;
              local_378 = local_378 + 1;
              if (local_378 < 8) {
                plVar24 = plVar24 + 2;
              }
              else {
                iVar23 = FUN_7100825060(param_1,param_2,&local_380);
                if (iVar23 != 0) goto LAB_710081b35c;
                plVar24 = local_280;
              }
            }
            iVar23 = (uint)*local_448 - (uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU));
            plVar38 = plVar24;
            if (0 < iVar23) {
              while( true ) {
                local_378 = local_378 + 1;
                plVar24 = plVar38 + 2;
                if (iVar23 < 0x11) break;
                *plVar38 = (long)"0000000000000000                ";
                plVar38[1] = 0x10;
                local_370 = local_370 + 0x10;
                if (7 < local_378) {
                  iVar22 = FUN_7100825060(param_1,param_2,&local_380);
                  if (iVar22 != 0) goto LAB_710081b35c;
                  plVar24 = local_280;
                }
                iVar23 = iVar23 + -0x10;
                plVar38 = plVar24;
              }
              *plVar38 = (long)"0000000000000000                ";
              plVar38[1] = (long)iVar23;
              local_370 = iVar23 + local_370;
              if (7 < local_378) {
                iVar23 = FUN_7100825060(param_1,param_2,&local_380);
                if (iVar23 != 0) goto LAB_710081b35c;
                plVar24 = local_280;
              }
            }
            pbVar45 = pbVar45 + *local_448;
          }
          if (param_3 + (int)uVar19 < pbVar45) {
            pbVar45 = param_3 + (int)uVar19;
          }
        }
        if (((int)local_3b8 < (int)uVar19) || (bVar9 != false)) {
          *plVar24 = lVar25;
          plVar24[1] = lVar26;
          local_370 = local_370 + lVar26;
          local_378 = local_378 + 1;
          if (local_378 < 8) {
            plVar24 = plVar24 + 2;
          }
          else {
            iVar17 = FUN_7100825060(param_1,param_2,&local_380);
            if (iVar17 != 0) goto LAB_710081b35c;
            plVar24 = local_280;
          }
        }
        uVar36 = ((int)param_3 + uVar19) - (int)pbVar45;
        uVar21 = uVar19 - local_3b8;
        if ((int)uVar36 < (int)(uVar19 - local_3b8)) {
          uVar21 = uVar36;
        }
        if (0 < (int)uVar21) {
          *plVar24 = (long)pbVar45;
          plVar24[1] = (long)(int)uVar21;
          local_370 = (int)uVar21 + local_370;
          local_378 = local_378 + 1;
          if (local_378 < 8) {
            plVar24 = plVar24 + 2;
          }
          else {
            iVar17 = FUN_7100825060(param_1,param_2,&local_380);
            if (iVar17 != 0) goto LAB_710081b35c;
            plVar24 = local_280;
          }
        }
        iVar17 = (uVar19 - local_3b8) - (uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU));
        plVar38 = plVar24;
        if (iVar17 < 1) goto LAB_710081b210;
        while( true ) {
          plVar38 = plVar24 + 2;
          local_378 = local_378 + 1;
          if (iVar17 < 0x11) break;
          *plVar24 = (long)"0000000000000000                ";
          plVar24[1] = 0x10;
          local_370 = local_370 + 0x10;
          if (7 < local_378) {
            iVar51 = FUN_7100825060(param_1,param_2,&local_380);
            if (iVar51 != 0) goto LAB_710081b35c;
            plVar38 = local_280;
          }
          iVar17 = iVar17 + -0x10;
          plVar24 = plVar38;
        }
      }
      *plVar24 = (long)"0000000000000000                ";
      plVar24[1] = (long)iVar17;
      local_370 = iVar17 + local_370;
      if (local_378 < 8) goto LAB_710081b210;
    }
  }
  else {
    *plVar24 = (long)param_3;
    plVar24[1] = (long)(int)uVar21;
    local_370 = (int)uVar21 + local_370;
    local_378 = local_378 + 1;
    if (local_378 < 8) {
      plVar38 = plVar24 + 2;
      goto LAB_710081b210;
    }
  }
LAB_710081b1f0:
  iVar17 = FUN_7100825060(param_1,param_2,&local_380);
  if (iVar17 != 0) goto LAB_710081b35c;
  plVar38 = local_280;
LAB_710081b210:
  if (((uVar55 >> 2 & 1) != 0) && (iVar17 = uVar52 - uVar48, 0 < iVar17)) {
    for (; local_378 = local_378 + 1, 0x10 < iVar17; iVar17 = iVar17 + -0x10) {
      *plVar38 = (long)"                ";
      plVar38[1] = 0x10;
      local_370 = local_370 + 0x10;
      if (local_378 < 8) {
        plVar38 = plVar38 + 2;
      }
      else {
        iVar51 = FUN_7100825060(param_1,param_2,&local_380);
        if (iVar51 != 0) goto LAB_710081b35c;
        plVar38 = local_280;
      }
    }
    *plVar38 = (long)"                ";
    plVar38[1] = (long)iVar17;
    local_370 = iVar17 + local_370;
    if ((7 < local_378) && (iVar17 = FUN_7100825060(param_1,param_2,&local_380), iVar17 != 0))
    goto LAB_710081b35c;
  }
  if ((int)uVar52 < (int)uVar48) {
    uVar52 = uVar48;
  }
  local_418 = local_418 + uVar52;
  if ((local_370 != 0) && (iVar17 = FUN_7100825060(param_1,param_2,&local_380), iVar17 != 0))
  goto LAB_710081b35c;
  local_378 = 0;
  if (pbVar57 != (byte *)0x0) {
    FUN_7100816da0(param_1,pbVar57);
  }
  plVar24 = local_280;
  param_3 = pbVar54;
  goto LAB_7100817a28;
switchD_7100817b64_caseD_31:
  uVar36 = 0;
  pbVar45 = pbVar54;
  do {
    uVar36 = (uVar18 - 0x30) + uVar36 * 10;
    pbVar54 = pbVar45 + 1;
    bVar3 = *pbVar45;
    uVar18 = (uint)bVar3;
    pbVar45 = pbVar54;
  } while (bVar3 - 0x30 < 10);
  if (bVar3 == 0x24) goto code_r0x007100817f40;
  goto LAB_7100817b4c;
code_r0x007100817f40:
  if (0x20 < (int)uVar36) goto LAB_710081b374;
  uVar42 = (ulong)(uVar36 - 1);
  bVar12 = true;
  goto LAB_7100817b44;
LAB_7100817dc4:
  if (0x20 < iVar17) goto LAB_710081b374;
  uVar21 = iVar17 - 1;
  if ((int)uVar21 < (int)local_3bc) {
    uVar21 = *(uint *)((long)local_200 +
                      (-(ulong)(uVar21 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar21 << 4));
  }
  else {
    puVar43 = (uint *)FUN_7100817198(param_1,(ulong)uVar21,pbVar57,param_4,&local_3bc,local_200,
                                     local_300,&local_3a0);
    uVar21 = *puVar43;
  }
LAB_7100817ec4:
  if ((int)uVar21 < 0) {
    uVar21 = 0xffffffff;
  }
  goto LAB_7100817b44;
LAB_7100817c44:
  if (0x20 < iVar17) goto LAB_710081b374;
  uVar52 = iVar17 - 1;
  pbVar54 = pbVar50;
  if ((int)uVar52 < (int)local_3bc) {
    uVar52 = *(uint *)((long)local_200 +
                      (-(ulong)(uVar52 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar52 << 4));
  }
  else {
    puVar43 = (uint *)FUN_7100817198(param_1,(ulong)uVar52,pbVar57,param_4,&local_3bc,local_200,
                                     local_300,&local_3a0);
    uVar52 = *puVar43;
  }
LAB_7100817d48:
  if ((int)uVar52 < 0) {
    uVar52 = -uVar52;
    local_460 = (ulong)uVar48;
switchD_7100817b64_caseD_2d:
    uVar55 = uVar55 | 4;
  }
  else {
    local_460 = (ulong)uVar48;
  }
  goto LAB_7100817b44;
LAB_7100819948:
  pbVar57 = (byte *)0x0;
  uVar16 = *(ushort *)(param_2 + 2) | 0x40;
LAB_7100819a08:
  *(ushort *)(param_2 + 2) = uVar16;
LAB_710081b35c:
  if (pbVar57 != (byte *)0x0) {
    FUN_7100816da0(param_1,pbVar57);
  }
LAB_710081b374:
  if ((*(ushort *)(param_2 + 2) >> 6 & 1) != 0) {
    return -1;
  }
  return local_418;
}



// ===== FUN_710081b3c0 @ 710081b3c0 (size=28) =====

void FUN_710081b3c0(undefined8 param_1)

{
  FUN_710081b720(param_1,0,10);
  return;
}



// ===== FUN_710081b3e0 @ 710081b3e0 (size=704) =====

ulong FUN_710081b3e0(undefined4 *param_1,byte *param_2,undefined8 *param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  
  pbVar7 = param_2;
  do {
    pbVar6 = pbVar7;
    pbVar7 = pbVar6 + 1;
    bVar2 = *pbVar6;
    uVar9 = (ulong)bVar2;
  } while (((byte)(&DAT_71009d32f1)[uVar9] >> 3 & 1) != 0);
  uVar1 = param_4 & 0xffffffef;
  if (bVar2 == 0x2d) {
    bVar2 = *pbVar7;
    uVar9 = (ulong)bVar2;
    pbVar7 = pbVar6 + 2;
    if (uVar1 == 0) {
      iVar12 = 0;
      if (bVar2 == 0x30) {
        if ((pbVar6[2] & 0xdf) == 0x58) {
          uVar13 = 0x10;
          uVar9 = (ulong)pbVar6[3];
          pbVar7 = pbVar6 + 4;
          param_4 = 0x10;
        }
        else if (param_4 == 0) {
          uVar13 = 8;
          param_4 = 8;
        }
        else {
          uVar13 = 0x10;
          param_4 = 0x10;
        }
        uVar14 = 0x8000000000000000;
        bVar3 = true;
        uVar11 = 0;
        if (uVar13 != 0) {
          uVar11 = 0x8000000000000000 / uVar13;
        }
      }
      else if (param_4 == 0) {
        uVar13 = 10;
        uVar11 = 0xccccccccccccccc;
        param_4 = 10;
        iVar12 = 8;
        bVar3 = true;
        uVar14 = 0x8000000000000000;
      }
      else {
        uVar13 = 0x10;
        uVar11 = 0x800000000000000;
        param_4 = 0x10;
        bVar3 = true;
        uVar14 = 0x8000000000000000;
      }
    }
    else {
      uVar13 = (ulong)(int)param_4;
      uVar14 = 0x8000000000000000;
      bVar3 = true;
      uVar11 = 0;
      if (uVar13 != 0) {
        uVar11 = 0x8000000000000000 / uVar13;
      }
      iVar12 = -((int)uVar11 * param_4);
    }
    goto LAB_710081b434;
  }
  if (bVar2 == 0x2b) {
    bVar2 = *pbVar7;
    uVar9 = (ulong)bVar2;
    pbVar7 = pbVar6 + 2;
    if (uVar1 != 0) {
      uVar13 = (ulong)(int)param_4;
      uVar14 = 0x7fffffffffffffff;
      bVar3 = false;
      uVar11 = 0;
      if (uVar13 != 0) {
        uVar11 = 0x7fffffffffffffff / uVar13;
      }
      iVar12 = -1 - (int)uVar11 * param_4;
      goto LAB_710081b434;
    }
    if (bVar2 != 0x30) goto LAB_710081b4ac;
    if ((pbVar6[2] & 0xdf) == 0x58) {
      uVar13 = 0x10;
      uVar9 = (ulong)pbVar6[3];
      pbVar7 = pbVar6 + 4;
      param_4 = 0x10;
    }
    else {
      if (param_4 != 0) goto LAB_710081b688;
LAB_710081b580:
      uVar13 = 8;
      param_4 = 8;
    }
LAB_710081b588:
    uVar11 = 0;
    if (uVar13 != 0) {
      uVar11 = 0x7fffffffffffffff / uVar13;
    }
    iVar12 = -1 - (int)uVar11 * (int)uVar13;
  }
  else {
    if (uVar1 != 0) {
      uVar13 = (ulong)(int)param_4;
      uVar14 = 0x7fffffffffffffff;
      bVar3 = false;
      uVar11 = 0;
      if (uVar13 != 0) {
        uVar11 = 0x7fffffffffffffff / uVar13;
      }
      iVar12 = -1 - (int)uVar11 * param_4;
      goto LAB_710081b434;
    }
    if (bVar2 == 0x30) {
      if ((*pbVar7 & 0xdf) == 0x58) {
        uVar9 = (ulong)pbVar6[2];
        uVar13 = 0x10;
        pbVar7 = pbVar6 + 3;
        param_4 = 0x10;
      }
      else {
        if (param_4 == 0) goto LAB_710081b580;
LAB_710081b688:
        uVar13 = 0x10;
        param_4 = 0x10;
      }
      goto LAB_710081b588;
    }
LAB_710081b4ac:
    if (param_4 == 0) {
      uVar13 = 10;
      uVar11 = 0xccccccccccccccc;
      param_4 = 10;
      iVar12 = 7;
    }
    else {
      uVar13 = 0x10;
      param_4 = 0x10;
      uVar11 = 0x7ffffffffffffff;
      iVar12 = 0xf;
    }
  }
  bVar3 = false;
  uVar14 = 0x7fffffffffffffff;
LAB_710081b434:
  iVar10 = 0;
  uVar5 = 0;
  do {
    iVar8 = (int)uVar9;
    uVar1 = iVar8 - 0x30;
    if (9 < uVar1) {
      if (iVar8 - 0x41U < 0x1a) {
        uVar1 = iVar8 - 0x37;
      }
      else {
        if (0x19 < iVar8 - 0x61U) {
LAB_710081b4e8:
          if (iVar10 == -1) {
            *param_1 = 0x22;
            if (param_3 == (undefined8 *)0x0) {
              return uVar14;
            }
          }
          else {
            uVar14 = -uVar5;
            if (!bVar3) {
              uVar14 = uVar5;
            }
            if (param_3 == (undefined8 *)0x0) {
              return uVar14;
            }
            if (iVar10 == 0) {
              *param_3 = param_2;
              return uVar14;
            }
          }
          *param_3 = pbVar7 + -1;
          return uVar14;
        }
        uVar1 = iVar8 - 0x57;
      }
    }
    if ((int)param_4 <= (int)uVar1) goto LAB_710081b4e8;
    bVar4 = iVar10 != -1;
    iVar10 = -1;
    if ((uVar5 <= uVar11 && bVar4) && (uVar5 != uVar11 || (int)uVar1 <= iVar12)) {
      iVar10 = 1;
      uVar5 = (long)(int)uVar1 + uVar5 * uVar13;
    }
    uVar9 = (ulong)*pbVar7;
    pbVar7 = pbVar7 + 1;
  } while( true );
}



// ===== FUN_710081b6a0 @ 710081b6a0 (size=112) =====

undefined8 FUN_710081b6a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  FUN_7100834b00();
  if (param_4 < 0x25 && param_4 != 1) {
    uVar1 = FUN_710081b3e0(param_1,param_2,param_3);
    return uVar1;
  }
  puVar2 = (undefined4 *)FUN_710080e8e0();
  *puVar2 = 0x16;
  return 0;
}



// ===== FUN_710081b720 @ 710081b720 (size=120) =====

undefined8 FUN_710081b720(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_7100834b00();
  FUN_7100834b00();
  if (param_3 < 0x25 && param_3 != 1) {
    uVar1 = FUN_710081b3e0(uVar1,param_1,param_2,param_3);
    return uVar1;
  }
  puVar2 = (undefined4 *)FUN_710080e8e0();
  *puVar2 = 0x16;
  return 0;
}



// ===== FUN_710081b7a0 @ 710081b7a0 (size=12) =====

undefined1  [16] FUN_710081b7a0(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = (double)(param_1 - param_2);
  auVar1._8_8_ = 0;
  return auVar1;
}



// ===== FUN_710081b7c0 @ 710081b7c0 (size=296) =====

void FUN_710081b7c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  pauVar5 = (undefined1 (*) [16])((ulong)param_2 & 0xfffffffffffffff0);
  auVar27 = NEON_cmeq(*pauVar5,0,1);
  uVar9 = CONCAT17((char)(auVar27._14_2_ >> 4),
                   CONCAT16((char)(auVar27._12_2_ >> 4),
                            CONCAT15((char)(auVar27._10_2_ >> 4),
                                     CONCAT14((char)(auVar27._8_2_ >> 4),
                                              CONCAT13((char)(auVar27._6_2_ >> 4),
                                                       CONCAT12((char)(auVar27._4_2_ >> 4),
                                                                CONCAT11((char)(auVar27._2_2_ >> 4),
                                                                         (char)(auVar27._0_2_ >> 4))
                                                               )))))) >>
          (((ulong)param_2 & 0xf) << 2);
  if (uVar9 == 0) {
    pauVar6 = pauVar5 + 1;
    uVar10 = *(undefined8 *)(pauVar5[1] + 8);
    uVar19 = (undefined1)uVar10;
    uVar20 = (undefined1)((ulong)uVar10 >> 8);
    uVar21 = (undefined1)((ulong)uVar10 >> 0x10);
    uVar22 = (undefined1)((ulong)uVar10 >> 0x18);
    uVar23 = (undefined1)((ulong)uVar10 >> 0x20);
    uVar24 = (undefined1)((ulong)uVar10 >> 0x28);
    uVar25 = (undefined1)((ulong)uVar10 >> 0x30);
    uVar26 = (undefined1)((ulong)uVar10 >> 0x38);
    uVar10 = *(undefined8 *)*pauVar6;
    uVar11 = (undefined1)uVar10;
    uVar12 = (undefined1)((ulong)uVar10 >> 8);
    uVar13 = (undefined1)((ulong)uVar10 >> 0x10);
    uVar14 = (undefined1)((ulong)uVar10 >> 0x18);
    uVar15 = (undefined1)((ulong)uVar10 >> 0x20);
    uVar16 = (undefined1)((ulong)uVar10 >> 0x28);
    uVar17 = (undefined1)((ulong)uVar10 >> 0x30);
    uVar18 = (undefined1)((ulong)uVar10 >> 0x38);
    auVar27[9] = uVar20;
    auVar27._0_9_ = *(unkbyte9 *)*pauVar6;
    auVar27[10] = uVar21;
    auVar27[0xb] = uVar22;
    auVar27[0xc] = uVar23;
    auVar27[0xd] = uVar24;
    auVar27[0xe] = uVar25;
    auVar27[0xf] = uVar26;
    auVar27 = NEON_cmeq(auVar27,0,1);
    uVar9 = CONCAT17((char)(auVar27._14_2_ >> 4),
                     CONCAT16((char)(auVar27._12_2_ >> 4),
                              CONCAT15((char)(auVar27._10_2_ >> 4),
                                       CONCAT14((char)(auVar27._8_2_ >> 4),
                                                CONCAT13((char)(auVar27._6_2_ >> 4),
                                                         CONCAT12((char)(auVar27._4_2_ >> 4),
                                                                  CONCAT11((char)(auVar27._2_2_ >> 4
                                                                                 ),(char)(auVar27.
                                                  _0_2_ >> 4))))))));
    if (uVar9 == 0) {
      uVar10 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar10;
      puVar8 = (undefined8 *)((long)pauVar6 - ((long)param_2 - (long)param_1));
      do {
        puVar7 = puVar8;
        puVar8 = puVar7 + 4;
        puVar7[1] = CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(uVar23,CONCAT13(uVar22,
                                                  CONCAT12(uVar21,CONCAT11(uVar20,uVar19)))))));
        *puVar7 = CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,CONCAT13(uVar14,
                                                  CONCAT12(uVar13,CONCAT11(uVar12,uVar11)))))));
        uVar3 = *(undefined8 *)(pauVar6[1] + 8);
        uVar10 = *(undefined8 *)pauVar6[1];
        auVar28[9] = (char)((ulong)uVar3 >> 8);
        auVar28._0_9_ = *(unkbyte9 *)pauVar6[1];
        auVar28[10] = (char)((ulong)uVar3 >> 0x10);
        auVar28[0xb] = (char)((ulong)uVar3 >> 0x18);
        auVar28[0xc] = (char)((ulong)uVar3 >> 0x20);
        auVar28[0xd] = (char)((ulong)uVar3 >> 0x28);
        auVar28[0xe] = (char)((ulong)uVar3 >> 0x30);
        auVar28[0xf] = (char)((ulong)uVar3 >> 0x38);
        auVar27 = NEON_cmeq(auVar28,0,1);
        auVar28 = NEON_umaxp(auVar27,auVar27,1);
        if (auVar28._0_8_ != 0) goto LAB_710081b8c4;
        puVar7[3] = uVar3;
        puVar7[2] = uVar10;
        pauVar5 = pauVar6 + 2;
        uVar10 = *(undefined8 *)(pauVar6[2] + 8);
        uVar19 = (undefined1)uVar10;
        uVar20 = (undefined1)((ulong)uVar10 >> 8);
        uVar21 = (undefined1)((ulong)uVar10 >> 0x10);
        uVar22 = (undefined1)((ulong)uVar10 >> 0x18);
        uVar23 = (undefined1)((ulong)uVar10 >> 0x20);
        uVar24 = (undefined1)((ulong)uVar10 >> 0x28);
        uVar25 = (undefined1)((ulong)uVar10 >> 0x30);
        uVar26 = (undefined1)((ulong)uVar10 >> 0x38);
        uVar10 = *(undefined8 *)*pauVar5;
        uVar11 = (undefined1)uVar10;
        uVar12 = (undefined1)((ulong)uVar10 >> 8);
        uVar13 = (undefined1)((ulong)uVar10 >> 0x10);
        uVar14 = (undefined1)((ulong)uVar10 >> 0x18);
        uVar15 = (undefined1)((ulong)uVar10 >> 0x20);
        uVar16 = (undefined1)((ulong)uVar10 >> 0x28);
        uVar17 = (undefined1)((ulong)uVar10 >> 0x30);
        uVar18 = (undefined1)((ulong)uVar10 >> 0x38);
        auVar2[9] = uVar20;
        auVar2._0_9_ = *(unkbyte9 *)*pauVar5;
        auVar2[10] = uVar21;
        auVar2[0xb] = uVar22;
        auVar2[0xc] = uVar23;
        auVar2[0xd] = uVar24;
        auVar2[0xe] = uVar25;
        auVar2[0xf] = uVar26;
        auVar27 = NEON_cmeq(auVar2,0,1);
        auVar28 = NEON_umaxp(auVar27,auVar27,1);
        pauVar6 = pauVar5;
      } while (auVar28._0_8_ == 0);
      puVar8 = puVar7 + 6;
LAB_710081b8c4:
      uVar9 = CONCAT17((char)(auVar27._14_2_ >> 4),
                       CONCAT16((char)(auVar27._12_2_ >> 4),
                                CONCAT15((char)(auVar27._10_2_ >> 4),
                                         CONCAT14((char)(auVar27._8_2_ >> 4),
                                                  CONCAT13((char)(auVar27._6_2_ >> 4),
                                                           CONCAT12((char)(auVar27._4_2_ >> 4),
                                                                    CONCAT11((char)(auVar27._2_2_ >>
                                                                                   4),(char)(auVar27
                                                  ._0_2_ >> 4))))))));
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      puVar8 = (undefined8 *)
               ((long)puVar8 + (((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 2) - 0x1f));
      puVar7 = (undefined8 *)((long)puVar8 + ((long)param_2 - (long)param_1));
      uVar10 = *puVar7;
      puVar8[1] = puVar7[1];
      *puVar8 = uVar10;
      return;
    }
    uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = (long)pauVar6 + (((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 2) - (long)param_2);
    if (((uint)uVar9 >> 4 & 1) != 0) {
      uVar10 = *param_2;
      puVar8 = (undefined8 *)((long)param_2 + (uVar9 - 0xf));
      uVar3 = *puVar8;
      uVar4 = puVar8[1];
      param_1[1] = param_2[1];
      *param_1 = uVar10;
      param_1 = (undefined8 *)((long)param_1 + (uVar9 - 0xf));
      param_1[1] = uVar4;
      *param_1 = uVar3;
      return;
    }
  }
  else {
    uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = (ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 2;
  }
  if (((uint)uVar9 >> 3 & 1) != 0) {
    uVar10 = *(undefined8 *)((long)param_2 + (uVar9 - 7));
    *param_1 = *param_2;
    *(undefined8 *)((long)param_1 + (uVar9 - 7)) = uVar10;
    return;
  }
  if (2 < uVar9) {
    uVar1 = *(undefined4 *)((long)param_2 + (uVar9 - 3));
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)((long)param_1 + (uVar9 - 3)) = uVar1;
    return;
  }
  if (uVar9 != 0) {
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
  }
  *(undefined1 *)((long)param_1 + uVar9) = 0;
  return;
}



// ===== FUN_710081b900 @ 710081b900 (size=60) =====

long FUN_710081b900(int *param_1,int *param_2,long param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = param_2;
  if (param_3 == 0) {
LAB_710081b924:
    do {
      piVar3 = piVar2 + 1;
      iVar1 = *piVar2;
      piVar2 = piVar3;
    } while (iVar1 != 0);
  }
  else {
    do {
      param_3 = param_3 + -1;
      if (param_3 == 0) {
        *param_1 = 0;
        goto LAB_710081b924;
      }
      piVar3 = piVar2 + 1;
      iVar1 = *piVar2;
      *param_1 = iVar1;
      param_1 = param_1 + 1;
      piVar2 = piVar3;
    } while (iVar1 != 0);
  }
  return ((long)piVar3 - (long)param_2 >> 2) + -1;
}



// ===== FUN_710081b940 @ 710081b940 (size=76) =====

char * FUN_710081b940(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char cVar4;
  
  cVar4 = *param_1;
  if (cVar4 != '\0') {
    cVar1 = *param_2;
    pcVar3 = param_2;
    cVar2 = cVar1;
    if (cVar1 == '\0') {
      do {
        param_1 = param_1 + 1;
      } while (*param_1 != '\0');
    }
    else {
      do {
        do {
          if (cVar2 == cVar4) {
            return param_1;
          }
          cVar2 = pcVar3[1];
          pcVar3 = pcVar3 + 1;
        } while (cVar2 != '\0');
        param_1 = param_1 + 1;
        cVar4 = *param_1;
        pcVar3 = param_2;
        cVar2 = cVar1;
      } while (cVar4 != '\0');
    }
  }
  return (char *)0x0;
}



// ===== FUN_710081b9a0 @ 710081b9a0 (size=24) =====

byte FUN_710081b9a0(int param_1)

{
  return (&DAT_71009d32f0)[param_1 + 1] & 8;
}



// ===== FUN_710081b9c0 @ 710081b9c0 (size=52) =====

void FUN_710081b9c0(undefined8 param_1,long param_2)

{
  thunk_FUN_7100828880(param_1,param_2,0,0);
  *(ushort *)(param_2 + 0x10) = *(ushort *)(param_2 + 0x10) & 0xff9f;
  return;
}



// ===== FUN_710081ba00 @ 710081ba00 (size=28) =====

void FUN_710081ba00(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_710081b9c0(uVar1,param_1);
  return;
}



// ===== thunk_FUN_710080aec0 @ 710081ba20 (size=4) =====

long thunk_FUN_710080aec0(ulong *param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar9 = (long)param_2 - (long)param_1;
  uVar6 = (ulong)param_1 & 7;
  if ((uVar9 & 7) == 0) {
    if (uVar6 != 0) {
      param_1 = (ulong *)((ulong)param_1 & 0xfffffffffffffff8);
      uVar5 = 0xffffffffffffffff >> ((long)param_2 * -8 & 0x3fU);
      uVar4 = *param_1 | uVar5;
      uVar5 = *(ulong *)((long)param_1 + uVar9) | uVar5;
      goto LAB_710080aee8;
    }
    do {
      uVar5 = *(ulong *)((long)param_1 + uVar9);
      uVar4 = *param_1;
LAB_710080aee8:
      param_1 = param_1 + 1;
      uVar7 = uVar4 + 0xfefefefefefefeff & ((uVar4 | 0x7f7f7f7f7f7f7f7f) ^ 0xffffffffffffffff);
    } while (uVar7 == 0 && uVar4 == uVar5);
    uVar7 = uVar4 ^ uVar5 | uVar7;
  }
  else {
    while (uVar6 != 0) {
      bVar1 = (byte)*param_1;
      if (bVar1 == 0 || bVar1 != *param_2) {
        return (ulong)bVar1 - (ulong)*param_2;
      }
      uVar6 = (ulong)((long)param_1 + 1) & 7;
      param_2 = param_2 + 1;
      param_1 = (ulong *)((long)param_1 + 1);
    }
    uVar8 = *(ulong *)((ulong)param_2 & 0xfffffffffffffff8) |
            0x101010101010101U >> ((long)param_2 * -8 & 0x3fU);
    uVar6 = uVar8 + 0xfefefefefefefeff & ((uVar8 | 0x7f7f7f7f7f7f7f7f) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      lVar2 = 8 - (long)param_1;
      puVar3 = param_1;
      do {
        uVar8 = *(ulong *)((long)puVar3 + (long)((ulong)param_2 & 0xfffffffffffffff8) + lVar2);
        uVar5 = *(ulong *)((long)puVar3 + uVar9);
        param_1 = puVar3 + 1;
        uVar4 = *puVar3;
        uVar6 = uVar8 + 0xfefefefefefefeff & ((uVar8 | 0x7f7f7f7f7f7f7f7f) ^ 0xffffffffffffffff);
        puVar3 = param_1;
      } while (uVar6 == 0 && uVar4 == uVar5);
      uVar7 = uVar4 ^ uVar5 | uVar6 << ((long)param_2 * -8 & 0x3fU);
      if (uVar7 != 0) goto LAB_710080af04;
    }
    uVar4 = *param_1;
    uVar5 = uVar8 >> ((long)param_2 * 8 & 0x3fU);
    uVar7 = uVar4 ^ uVar5 | uVar6 >> ((long)param_2 * 8 & 0x3fU);
  }
LAB_710080af04:
  uVar6 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
  uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
  uVar9 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
  uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
  uVar8 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
  uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
  uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20);
  return (((uVar9 >> 0x20 | uVar9 << 0x20) << (uVar6 & 0x3f)) >> 0x38) -
         (((uVar8 >> 0x20 | uVar8 << 0x20) << (uVar6 & 0x3f)) >> 0x38);
}



// ===== FUN_710081ba40 @ 710081ba40 (size=132) =====

ulong FUN_710081ba40(uint param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 < 0xe01f0) {
    iVar3 = 0;
    iVar4 = 0x8f9;
    do {
      while( true ) {
        iVar1 = (iVar3 + iVar4) / 2;
        lVar2 = (long)iVar1 * 6;
        if ((uint)*(ushort *)(&UNK_71009cfd14 + lVar2) +
            (*(uint *)("0000000000000000                " + lVar2 + 0x20) >> 8) < param_1) break;
        if (*(uint *)("0000000000000000                " + lVar2 + 0x20) >> 8 <= param_1) {
          return (ulong)(byte)"0000000000000000                "[lVar2 + 0x20];
        }
        iVar4 = iVar1 + -1;
        if (iVar4 < iVar3) {
          return 0xffffffff;
        }
      }
      iVar3 = iVar1 + 1;
    } while (iVar3 <= iVar4);
  }
  return 0xffffffff;
}



// ===== FUN_710081bae0 @ 710081bae0 (size=1740) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710081bae0(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  undefined1 uVar8;
  char *pcVar9;
  undefined1 *puVar10;
  bool bVar11;
  long local_28;
  ushort local_18;
  ushort local_16;
  ushort local_14;
  ushort local_12;
  ushort local_10;
  ushort local_e;
  int local_c;
  char *local_8;
  
  lVar5 = FUN_710080f8e0();
  pcVar6 = (char *)FUN_710081d080(param_1,&DAT_71008549e0);
  lVar7 = _DAT_7100d22f48;
  if (pcVar6 == (char *)0x0) {
    _DAT_7100d22f88 = 0;
    _DAT_7100d22f90 = 0;
    PTR_DAT_7100af5560 = &DAT_710084a340;
    PTR_DAT_7100af5568 = &DAT_710084a340;
    *(undefined1 *)(lVar5 + 8) = 0x4a;
    *(undefined1 *)(lVar5 + 0x30) = 0x4a;
    *(undefined8 *)(lVar5 + 0x14) = 0;
    *(undefined8 *)(lVar5 + 0xc) = 0;
    *(undefined8 *)(lVar5 + 0x20) = 0;
    *(undefined8 *)(lVar5 + 0x28) = 0;
    *(undefined8 *)(lVar5 + 0x3c) = 0;
    *(undefined8 *)(lVar5 + 0x34) = 0;
    *(undefined8 *)(lVar5 + 0x48) = 0;
    *(undefined8 *)(lVar5 + 0x50) = 0;
    FUN_710081c200(lVar7);
    _DAT_7100d22f48 = 0;
    return;
  }
  if ((_DAT_7100d22f48 != 0) && (iVar3 = FUN_710080aec0(), iVar3 == 0)) {
    return;
  }
  FUN_710081c200(_DAT_7100d22f48);
  lVar7 = FUN_710081ce00(pcVar6);
  _DAT_7100d22f48 = FUN_7100814ca0(param_1,lVar7 + 1);
  if (_DAT_7100d22f48 != 0) {
    FUN_710081b7c0(_DAT_7100d22f48,pcVar6);
  }
  _DAT_7100d22f88 = 0;
  _DAT_7100d22f90 = 0;
  PTR_DAT_7100af5560 = &DAT_7100853d20;
  PTR_DAT_7100af5568 = &DAT_7100853d20;
  *(undefined1 *)(lVar5 + 8) = 0x4a;
  *(undefined1 *)(lVar5 + 0x30) = 0x4a;
  *(undefined8 *)(lVar5 + 0x14) = 0;
  *(undefined8 *)(lVar5 + 0xc) = 0;
  *(undefined8 *)(lVar5 + 0x20) = 0;
  *(undefined8 *)(lVar5 + 0x28) = 0;
  *(undefined8 *)(lVar5 + 0x3c) = 0;
  *(undefined8 *)(lVar5 + 0x34) = 0;
  *(undefined8 *)(lVar5 + 0x48) = 0;
  *(undefined8 *)(lVar5 + 0x50) = 0;
  cVar1 = *pcVar6;
  if (cVar1 == ':') {
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 1;
  }
  if (cVar1 == '<') {
    iVar3 = FUN_7100828d80(pcVar6 + 1,"%11[-+0-9A-Za-z]%n",0x7100d22f60,&local_c);
    if (iVar3 < 1) {
      return;
    }
    if (7 < local_c - 3U) {
      return;
    }
    if ((pcVar6 + 1)[local_c] != '>') {
      return;
    }
    pcVar6 = pcVar6 + 2;
  }
  else {
    iVar3 = FUN_7100828d80(pcVar6,"%11[A-Za-z]%n",0x7100d22f60,&local_c);
    if (iVar3 < 1) {
      return;
    }
    if (7 < local_c - 3U) {
      return;
    }
  }
  pcVar9 = pcVar6 + local_c;
  if (pcVar6[local_c] == '-') {
    pcVar9 = pcVar9 + 1;
    iVar3 = -1;
  }
  else {
    iVar3 = 1;
    if (pcVar6[local_c] == '+') {
      pcVar9 = pcVar9 + 1;
    }
  }
  local_16 = 0;
  local_14 = 0;
  iVar4 = FUN_7100828d80(pcVar9,&DAT_7100857338,&local_18,&local_c,&local_16,&local_c,&local_14,
                         &local_c);
  if (iVar4 < 1) {
    return;
  }
  lVar7 = (long)iVar3 * (long)(int)((uint)local_14 + (uint)local_16 * 0x3c + (uint)local_18 * 0xe10)
  ;
  pcVar6 = pcVar9 + local_c;
  if (pcVar9[local_c] == '<') {
    pcVar9 = pcVar6 + 1;
    iVar3 = FUN_7100828d80(pcVar9,"%11[-+0-9A-Za-z]%n",0x7100d22f50,&local_c);
    if ((iVar3 < 1) && (pcVar6[1] == '>')) goto LAB_710081c004;
    if (7 < local_c - 3U) {
      return;
    }
    pcVar6 = pcVar6 + 2;
    if (pcVar9[local_c] != '>') {
      return;
    }
  }
  else {
    iVar3 = FUN_7100828d80(pcVar6,"%11[A-Za-z]%n",0x7100d22f50,&local_c);
    if (iVar3 < 1) {
LAB_710081c004:
      PTR_DAT_7100af5560 = (undefined *)0x7100d22f60;
      PTR_DAT_7100af5568 = (undefined *)0x7100d22f60;
      _DAT_7100d22f88 = lVar7;
      *(long *)(lVar5 + 0x28) = lVar7;
      return;
    }
    if (7 < local_c - 3U) {
      return;
    }
  }
  pcVar9 = pcVar6 + local_c;
  if (pcVar6[local_c] == '-') {
    pcVar9 = pcVar9 + 1;
    iVar3 = -1;
  }
  else {
    iVar3 = 1;
    if (pcVar6[local_c] == '+') {
      pcVar9 = pcVar9 + 1;
    }
  }
  local_18 = 0;
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  iVar4 = FUN_7100828d80(pcVar9,&DAT_7100857338,&local_18,&local_c,&local_16,&local_c,&local_14,
                         &local_c);
  if (iVar4 < 1) {
    local_28 = lVar7 + -0xe10;
  }
  else {
    local_28 = (long)iVar3 *
               (long)(int)((uint)local_14 + (uint)local_16 * 0x3c + (uint)local_18 * 0xe10);
  }
  pcVar9 = pcVar9 + local_c;
  puVar10 = (undefined1 *)(lVar5 + 8);
  bVar2 = false;
  do {
    bVar11 = bVar2;
    cVar1 = *pcVar9;
    if (cVar1 == ',') {
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 1;
    }
    if (cVar1 == 'M') {
      iVar3 = FUN_7100828d80(pcVar9,"M%hu%n.%hu%n.%hu%n",&local_12,&local_c,&local_10,&local_c,
                             &local_e,&local_c);
      if (iVar3 != 3) {
        return;
      }
      if (0xb < (local_12 - 1 & 0xffff)) {
        return;
      }
      if (4 < (local_10 - 1 & 0xffff)) {
        return;
      }
      if (6 < local_e) {
        return;
      }
      *puVar10 = 0x4d;
      *(uint *)(puVar10 + 4) = (uint)local_12;
      *(uint *)(puVar10 + 8) = (uint)local_10;
      *(uint *)(puVar10 + 0xc) = (uint)local_e;
      pcVar9 = pcVar9 + local_c;
    }
    else {
      uVar8 = 0x44;
      if (cVar1 == 'J') {
        uVar8 = 0x4a;
        pcVar9 = pcVar9 + 1;
      }
      local_e = FUN_710080daa0(pcVar9,&local_8,10);
      if (local_8 == pcVar9) {
        if (bVar11) {
          *(undefined1 *)(lVar5 + 0x30) = 0x4d;
          *(undefined4 *)(lVar5 + 0x3c) = 0;
          *(undefined8 *)(lVar5 + 0x34) = 0x10000000b;
          pcVar9 = local_8;
        }
        else {
          *(undefined1 *)(lVar5 + 8) = 0x4d;
          *(undefined4 *)(lVar5 + 0x14) = 0;
          *(undefined8 *)(lVar5 + 0xc) = 0x200000003;
          pcVar9 = local_8;
        }
      }
      else {
        *puVar10 = uVar8;
        *(uint *)(puVar10 + 0xc) = (uint)local_e;
        pcVar9 = local_8;
      }
    }
    local_18 = 2;
    local_16 = 0;
    iVar3 = 0x1c20;
    local_14 = 0;
    local_c = 0;
    if (*pcVar9 == '/') {
      iVar3 = FUN_7100828d80(pcVar9,"/%hu%n:%hu%n:%hu%n",&local_18,&local_c,&local_16,&local_c,
                             &local_14,&local_c);
      if (iVar3 < 1) {
        *(undefined1 *)(lVar5 + 8) = 0x4a;
        *(undefined1 *)(lVar5 + 0x30) = 0x4a;
        *(undefined8 *)(lVar5 + 0x14) = 0;
        *(undefined8 *)(lVar5 + 0xc) = 0;
        *(undefined8 *)(lVar5 + 0x20) = 0;
        *(undefined8 *)(lVar5 + 0x28) = 0;
        *(undefined8 *)(lVar5 + 0x3c) = 0;
        *(undefined8 *)(lVar5 + 0x34) = 0;
        *(undefined8 *)(lVar5 + 0x48) = 0;
        *(undefined8 *)(lVar5 + 0x50) = 0;
        return;
      }
      iVar3 = (uint)local_16 * 0x3c + (uint)local_18 * 0xe10 + (uint)local_14;
      pcVar9 = pcVar9 + local_c;
    }
    *(int *)(puVar10 + 0x10) = iVar3;
    puVar10 = puVar10 + 0x28;
    bVar2 = true;
    if (bVar11) {
      *(long *)(lVar5 + 0x28) = lVar7;
      *(long *)(lVar5 + 0x50) = local_28;
      PTR_DAT_7100af5560 = (undefined *)0x7100d22f60;
      PTR_DAT_7100af5568 = (undefined *)0x7100d22f50;
      FUN_710081e6c0(*(undefined4 *)(lVar5 + 4));
      _DAT_7100d22f90 = (uint)(*(long *)(lVar5 + 0x50) != *(long *)(lVar5 + 0x28));
      _DAT_7100d22f88 = *(long *)(lVar5 + 0x28);
      return;
    }
  } while( true );
}



// ===== FUN_710081c1c0 @ 710081c1c0 (size=56) =====

void FUN_710081c1c0(ulong param_1)

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



// ===== FUN_710081c200 @ 710081c200 (size=28) =====

void FUN_710081c200(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_7100816da0(uVar1,param_1);
  return;
}



// ===== FUN_710081c220 @ 710081c220 (size=176) =====

int FUN_710081c220(undefined4 param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  ulong uVar4;
  int local_4;
  
  local_4 = 0;
  if (param_3 != 0) {
    uVar2 = FUN_7100834b00();
    pcVar3 = (char *)FUN_7100807ce0(uVar2,param_1,1,&local_4);
    uVar4 = FUN_710081ce00();
    if (uVar4 < param_3) {
      FUN_710081b7c0(param_2,pcVar3);
      if (local_4 == 0) {
        iVar1 = 0;
        if (*pcVar3 == '\0') {
          iVar1 = 0x16;
        }
        return iVar1;
      }
      return local_4;
    }
    FUN_710080f900(param_2,pcVar3);
    *(undefined1 *)(param_2 + (param_3 - 1)) = 0;
  }
  return 0x22;
}



// ===== FUN_710081c2e0 @ 710081c2e0 (size=144) =====

ulong FUN_710081c2e0(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_10 [8];
  byte local_8 [8];
  
  if (param_1 != -1) {
    FUN_7100808340(auStack_10,0,8);
    uVar3 = FUN_7100834b00();
    lVar4 = FUN_7100834b00();
    puVar1 = *(undefined **)(lVar4 + 0x40);
    if (*(undefined **)(lVar4 + 0x40) == (undefined *)0x0) {
      puVar1 = &DAT_7100af4978;
    }
    iVar2 = (**(code **)(puVar1 + 0xe0))(uVar3,local_8,param_1,auStack_10);
    if (iVar2 == 1) {
      uVar5 = (ulong)local_8[0];
    }
    else {
      uVar5 = 0xffffffff;
    }
    return uVar5;
  }
  return 0xffffffff;
}



// ===== FUN_710081c380 @ 710081c380 (size=36) =====

void FUN_710081c380(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = 0;
  while (iVar1 != 0) {
    *param_1 = iVar1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    iVar1 = *param_2;
  }
  *param_1 = 0;
  return;
}



// ===== FUN_710081c3c0 @ 710081c3c0 (size=44) =====

void FUN_710081c3c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_71008352c0(uVar1,param_1,param_2);
  return;
}



// ===== FUN_710081c400 @ 710081c400 (size=248) =====

undefined8
FUN_710081c400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              undefined1 *param_9,ulong param_10,undefined8 param_11,undefined8 param_12,
              undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined1 *local_168;
  int local_15c;
  undefined4 local_158;
  undefined1 *local_150;
  int local_148;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a0;
  undefined8 local_90;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined8 uStack_40;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  local_b0 = param_1;
  uStack_a0 = param_2;
  local_90 = param_3;
  uStack_80 = param_4;
  local_70 = param_5;
  uStack_60 = param_6;
  local_50 = param_7;
  uStack_40 = param_8;
  local_28 = param_12;
  uStack_20 = param_13;
  local_18 = param_14;
  uStack_10 = param_15;
  local_8 = param_16;
  puVar1 = (undefined4 *)FUN_7100834b00();
  if (param_10 < 0x80000000) {
    local_15c = (int)param_10 - (uint)(param_10 != 0);
    local_158 = 0xffff0208;
    local_b4 = 0;
    local_168 = param_9;
    local_150 = param_9;
    local_148 = local_15c;
    uVar2 = FUN_71008203d4(puVar1,&local_168,param_11);
    if ((int)uVar2 + 1 < 0 != SCARRY4((int)uVar2,1)) {
      *puVar1 = 0x8b;
    }
    if (param_10 != 0) {
      *local_168 = 0;
    }
  }
  else {
    *puVar1 = 0x8b;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// ===== FUN_710081c500 @ 710081c500 (size=68) =====

int FUN_710081c500(undefined8 param_1,ulong param_2)

{
  int iVar1;
  undefined1 auStack_68 [4];
  uint local_64;
  
  iVar1 = FUN_7100809640(param_1,auStack_68);
  if (iVar1 == 0) {
    iVar1 = -((uint)((param_2 & 0xffffffff) >> 1) & 1);
    if ((local_64 & 0x4080) != 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



// ===== FUN_710081c560 @ 710081c560 (size=492) =====

undefined8 FUN_710081c560(uint *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ushort uVar6;
  code *pcVar7;
  long lVar8;
  
  uVar6 = *(ushort *)(param_2 + 2);
  if (((uint)(int)(short)uVar6 >> 3 & 1) != 0) {
    lVar4 = param_2[3];
    if (lVar4 == 0) {
      return 0;
    }
    lVar8 = *param_2;
    *param_2 = lVar4;
    uVar3 = 0;
    lVar8 = lVar8 - lVar4;
    if ((uVar6 & 3) == 0) {
      uVar3 = (undefined4)param_2[4];
    }
    *(undefined4 *)((long)param_2 + 0xc) = uVar3;
    while( true ) {
      if (lVar8 == 0) {
        return 0;
      }
      lVar5 = (*(code *)param_2[8])(param_1,param_2[6],lVar4,lVar8);
      if (lVar5 < 1) break;
      lVar4 = lVar4 + lVar5;
      lVar8 = lVar8 - lVar5;
    }
LAB_710081c6d8:
    uVar6 = *(ushort *)(param_2 + 2);
LAB_710081c6dc:
    *(ushort *)(param_2 + 2) = uVar6 | 0x40;
    return 0xffffffff;
  }
  uVar2 = (int)(short)uVar6 | 0x800;
  *(short *)(param_2 + 2) = (short)uVar2;
  if (((int)param_2[1] < 1) && ((int)param_2[0xe] < 1)) {
    return 0;
  }
  pcVar7 = (code *)param_2[9];
  if (pcVar7 == (code *)0x0) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = 0;
  if (((uint)(int)(short)uVar6 >> 0xc & 1) == 0) {
    lVar4 = (*pcVar7)(param_1,param_2[6],0,1);
    if ((lVar4 == -1) && (uVar2 = *param_1, uVar2 != 0)) {
      if (uVar2 == 0x1d || uVar2 == 0x16) {
        *param_1 = uVar1;
        return 0;
      }
      goto LAB_710081c6d8;
    }
    pcVar7 = (code *)param_2[9];
    uVar2 = (uint)(short)param_2[2];
  }
  else {
    lVar4 = param_2[0x12];
  }
  if (((uVar2 >> 2 & 1) != 0) && (lVar4 = lVar4 - (int)param_2[1], param_2[0xb] != 0)) {
    lVar4 = lVar4 - (int)param_2[0xe];
  }
  lVar4 = (*pcVar7)(param_1,param_2[6],lVar4,0);
  uVar6 = *(ushort *)(param_2 + 2);
  if (lVar4 == -1) {
    if ((0x1d < *param_1) || ((0x20400001UL >> ((ulong)*param_1 & 0x3f) & 1) == 0))
    goto LAB_710081c6dc;
    *(ushort *)(param_2 + 2) = uVar6 & 0xf7ff;
    *param_2 = param_2[3];
    *(undefined4 *)(param_2 + 1) = 0;
    if ((((uint)(int)(short)uVar6 >> 0xc & 1) == 0) || (*param_1 != 0)) goto LAB_710081c644;
  }
  else {
    *(ushort *)(param_2 + 2) = uVar6 & 0xf7ff;
    *param_2 = param_2[3];
    *(undefined4 *)(param_2 + 1) = 0;
    if (((uint)(int)(short)uVar6 >> 0xc & 1) == 0) goto LAB_710081c644;
  }
  param_2[0x12] = lVar4;
LAB_710081c644:
  lVar4 = param_2[0xb];
  *param_1 = uVar1;
  if (lVar4 != 0) {
    if (lVar4 != (long)param_2 + 0x74) {
      FUN_7100816da0(param_1);
    }
    param_2[0xb] = 0;
  }
  return 0;
}



// ===== FUN_710081c760 @ 710081c760 (size=188) =====

undefined4 FUN_710081c760(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x48) == 0)) {
    FUN_710080d840();
  }
  uVar2 = 0;
  if ((int)*(short *)(param_2 + 0x10) != 0) {
    if (((*(uint *)(param_2 + 0xb4) & 1) == 0) &&
       (((uint)(int)*(short *)(param_2 + 0x10) >> 9 & 1) == 0)) {
      FUN_7100836200(param_2 + 0xa0);
      uVar2 = FUN_710081c560(param_1);
      uVar1 = *(uint *)(param_2 + 0xb4);
    }
    else {
      uVar2 = FUN_710081c560(param_1);
      uVar1 = *(uint *)(param_2 + 0xb4);
    }
    if (((uVar1 & 1) == 0) && ((*(ushort *)(param_2 + 0x10) >> 9 & 1) == 0)) {
      FUN_7100836220(param_2 + 0xa0);
      return uVar2;
    }
  }
  return uVar2;
}



// ===== FUN_710081c820 @ 710081c820 (size=60) =====

void FUN_710081c820(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_7100834b00();
    FUN_710081c760(uVar1,param_1);
    return;
  }
  FUN_710080e740(&DAT_7100af53d8,FUN_710081c760,&DAT_7100af4b40);
  return;
}



// ===== FUN_710081c860 @ 710081c860 (size=16) =====

void FUN_710081c860(long param_1)

{
  *(undefined **)(param_1 + 0xf8) = &DAT_71009d32f0;
  return;
}



// ===== FUN_710081c880 @ 710081c880 (size=72) =====

void FUN_710081c880(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_10 [2];
  
  local_10[0] = 0xffffffffffffffff;
  uVar2 = FUN_7100834b00();
  iVar1 = FUN_7100834b20(uVar2,local_10,0);
  if (iVar1 < 0) {
    local_10[0] = 0xffffffffffffffff;
  }
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = local_10[0];
  }
  return;
}



// ===== FUN_710081c8e0 @ 710081c8e0 (size=68) =====

void FUN_710081c8e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    FUN_7100823240(0,param_1,param_2,param_3);
    return;
  }
  lVar1 = FUN_7100834b00();
  FUN_7100823240(0,param_1,param_2,lVar1 + 0x124);
  return;
}



// ===== FUN_710081c940 @ 710081c940 (size=140) =====

undefined4 FUN_710081c940(int param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 local_d;
  undefined4 local_c;
  undefined1 auStack_8 [8];
  
  if (param_1 == -1) {
    return 0xffffffff;
  }
  local_d = (undefined1)param_1;
  FUN_7100808340(auStack_8,0,8);
  lVar3 = FUN_7100834b00();
  puVar1 = *(undefined **)(lVar3 + 0x40);
  if (*(undefined **)(lVar3 + 0x40) == (undefined *)0x0) {
    puVar1 = &DAT_7100af4978;
  }
  pcVar5 = *(code **)(puVar1 + 0xe8);
  uVar4 = FUN_7100834b00();
  uVar2 = (*pcVar5)(uVar4,&local_c,&local_d,1,auStack_8);
  if (uVar2 < 2) {
    return local_c;
  }
  return 0xffffffff;
}



// ===== FUN_710081c9fc @ 710081c9fc (size=28) =====

void FUN_710081c9fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_710081c760(uVar1,param_2);
  return;
}



// ===== FUN_710081ca20 @ 710081ca20 (size=400) =====

undefined8 FUN_710081ca20(undefined4 *param_1,undefined8 *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((param_1 != (undefined4 *)0x0) && (*(long *)(param_1 + 0x12) == 0)) {
    FUN_710080d840();
  }
  uVar1 = *(ushort *)(param_2 + 2);
  *(undefined4 *)(param_2 + 1) = 0;
  if (((uint)(int)(short)uVar1 >> 5 & 1) == 0) {
    if (((uint)(int)(short)uVar1 >> 2 & 1) == 0) {
      if (((uint)(int)(short)uVar1 >> 4 & 1) == 0) {
        *param_1 = 9;
        *(ushort *)(param_2 + 2) = uVar1 | 0x40;
        return 0xffffffff;
      }
      if (((uint)(int)(short)uVar1 >> 3 & 1) != 0) {
        iVar2 = FUN_710081c760(param_1,param_2);
        if (iVar2 != 0) goto LAB_710081cb7c;
        *(undefined4 *)((long)param_2 + 0xc) = 0;
        uVar1 = *(ushort *)(param_2 + 2) & 0xfff7;
        *(undefined4 *)(param_2 + 5) = 0;
      }
      *(ushort *)(param_2 + 2) = uVar1 | 4;
LAB_710081ca60:
      if (param_2[3] == 0) {
        FUN_710081cc80(param_1,param_2);
      }
      uVar1 = *(ushort *)(param_2 + 2);
      if ((uVar1 & 3) != 0) {
        *(undefined2 *)(param_2 + 2) = 1;
        FUN_710080e740(&DAT_7100af53d8,&DAT_710081c9e0,&DAT_7100af4b40);
        *(ushort *)(param_2 + 2) = uVar1;
        if ((uVar1 & 9) == 9) {
          FUN_710081c560(param_1,param_2);
        }
      }
      *param_2 = param_2[3];
      iVar2 = (*(code *)param_2[7])(param_1,param_2[6],param_2[3],(long)*(int *)(param_2 + 4));
      *(int *)(param_2 + 1) = iVar2;
      if (iVar2 < 1) {
        if (iVar2 != 0) {
          *(undefined4 *)(param_2 + 1) = 0;
          *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | 0x40;
          return 0xffffffff;
        }
        *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | 0x20;
        goto LAB_710081cb7c;
      }
    }
    else {
      if (param_2[0xb] == 0) goto LAB_710081ca60;
      if (param_2[0xb] != (long)param_2 + 0x74) {
        FUN_7100816da0(param_1);
      }
      *(int *)(param_2 + 1) = *(int *)(param_2 + 0xe);
      param_2[0xb] = 0;
      if (*(int *)(param_2 + 0xe) == 0) goto LAB_710081ca60;
      *param_2 = param_2[0xd];
    }
    uVar3 = 0;
  }
  else {
LAB_710081cb7c:
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



// ===== FUN_710081cbc0 @ 710081cbc0 (size=176) =====

undefined8 FUN_710081cbc0(undefined8 param_1,long param_2,undefined8 *param_3,uint *param_4)

{
  undefined8 uVar1;
  ushort uVar2;
  int iVar3;
  undefined1 auStack_68 [4];
  uint local_64;
  
  if (*(short *)(param_2 + 0x12) < 0) {
    uVar2 = *(ushort *)(param_2 + 0x10);
    *param_4 = 0;
    uVar1 = 0x40;
    if ((uVar2 & 0x80) == 0) {
      uVar1 = 0x400;
    }
    *param_3 = uVar1;
    return 0;
  }
  iVar3 = FUN_71008349a0(param_1,(long)*(short *)(param_2 + 0x12),auStack_68);
  if (-1 < iVar3) {
    *param_4 = (uint)((local_64 & 0xf000) == 0x2000);
    *param_3 = 0x400;
    return 0x800;
  }
  uVar2 = *(ushort *)(param_2 + 0x10);
  *param_4 = 0;
  uVar1 = 0x40;
  if ((uVar2 & 0x80) == 0) {
    uVar1 = 0x400;
  }
  *param_3 = uVar1;
  return 0;
}



// ===== FUN_710081cc80 @ 710081cc80 (size=232) =====

void FUN_710081cc80(undefined8 param_1,long *param_2)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  ushort uVar4;
  int local_c;
  undefined8 local_8;
  
  if ((*(ushort *)(param_2 + 2) >> 1 & 1) == 0) {
    uVar1 = FUN_710081cbc0(param_1,param_2,&local_8,&local_c);
    lVar3 = FUN_7100828340(param_1,0x20,local_8);
    uVar4 = *(ushort *)(param_2 + 2);
    if (lVar3 == 0) {
      if (((uint)(int)(short)uVar4 >> 9 & 1) == 0) {
        *param_2 = (long)param_2 + 0x77;
        *(ushort *)(param_2 + 2) = uVar4 & 0xfffc | 2;
        param_2[3] = (long)param_2 + 0x77;
        *(undefined4 *)(param_2 + 4) = 1;
      }
    }
    else {
      *param_2 = lVar3;
      param_2[3] = lVar3;
      *(int *)(param_2 + 4) = (int)local_8;
      *(ushort *)(param_2 + 2) = uVar4 | 0x80;
      uVar4 = uVar4 | 0x80;
      if (local_c != 0) {
        iVar2 = FUN_7100835280(param_1,(long)*(short *)((long)param_2 + 0x12));
        uVar4 = *(ushort *)(param_2 + 2) & 0xfffc | 1;
        if (iVar2 == 0) {
          uVar4 = *(ushort *)(param_2 + 2);
        }
      }
      *(ushort *)(param_2 + 2) = uVar4 | uVar1;
    }
    return;
  }
  *param_2 = (long)param_2 + 0x77;
  param_2[3] = (long)param_2 + 0x77;
  *(undefined4 *)(param_2 + 4) = 1;
  return;
}



// ===== FUN_710081cd80 @ 710081cd80 (size=52) =====

void FUN_710081cd80(undefined4 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_7100835380(uVar1,param_1,param_2,param_3);
  return;
}



// ===== FUN_710081cdc0 @ 710081cdc0 (size=40) =====

void FUN_710081cdc0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_7100834b00();
  FUN_710080b140(param_1,lVar1 + 0xa4);
  return;
}



// ===== FUN_710081ce00 @ 710081ce00 (size=300) =====

ulong FUN_710081ce00(ulong *param_1)

{
  undefined1 (*pauVar1) [16];
  bool bVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (((ulong)param_1 & 0xfff) < 0xfe1) {
    uVar6 = *param_1 + 0xfefefefefefefeff & ((*param_1 | 0x7f7f7f7f7f7f7f7f) ^ 0xffffffffffffffff);
    bVar2 = uVar6 == 0;
    uVar7 = param_1[1] + 0xfefefefefefefeff &
            ((param_1[1] | 0x7f7f7f7f7f7f7f7f) ^ 0xffffffffffffffff);
    if (!bVar2 || uVar7 != 0) {
      if (bVar2) {
        uVar6 = uVar7;
      }
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      lVar8 = 0;
      if (bVar2) {
        lVar8 = 8;
      }
      return lVar8 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3);
    }
    uVar6 = param_1[2] + 0xfefefefefefefeff &
            ((param_1[2] | 0x7f7f7f7f7f7f7f7f) ^ 0xffffffffffffffff);
    bVar2 = uVar6 == 0;
    uVar7 = param_1[3] + 0xfefefefefefefeff &
            ((param_1[3] | 0x7f7f7f7f7f7f7f7f) ^ 0xffffffffffffffff);
    if (!bVar2 || uVar7 != 0) {
      if (bVar2) {
        uVar6 = uVar7;
      }
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      lVar8 = 0x10;
      if (bVar2) {
        lVar8 = 0x18;
      }
      return lVar8 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3);
    }
    pauVar5 = (undefined1 (*) [16])((ulong)param_1 & 0xffffffffffffffe0);
  }
  else {
    pauVar5 = (undefined1 (*) [16])((ulong)param_1 & 0xffffffffffffffe0);
    auVar9 = NEON_cmeq(*pauVar5,0,1);
    auVar10 = NEON_cmeq(pauVar5[1],0,1);
    uVar6 = auVar9._0_8_ & 0xc0300c03c0300c03;
    uVar7 = auVar10._0_8_ & 0xc0300c03c0300c03;
    uVar6 = CONCAT17((auVar10[0xc] & 3) + (auVar10[0xd] & 0xc) +
                     (auVar10[0xe] & 0x30) + (auVar10[0xf] & 0xc0),
                     CONCAT16((auVar10[8] & 3) + (auVar10[9] & 0xc) +
                              (auVar10[10] & 0x30) + (auVar10[0xb] & 0xc0),
                              CONCAT15((char)(uVar7 >> 0x20) + (char)(uVar7 >> 0x28) +
                                       (char)(uVar7 >> 0x30) + (char)(uVar7 >> 0x38),
                                       CONCAT14((char)uVar7 + (char)(uVar7 >> 8) +
                                                (char)(uVar7 >> 0x10) + (char)(uVar7 >> 0x18),
                                                CONCAT13((auVar9[0xc] & 3) + (auVar9[0xd] & 0xc) +
                                                         (auVar9[0xe] & 0x30) + (auVar9[0xf] & 0xc0)
                                                         ,CONCAT12((auVar9[8] & 3) +
                                                                   (auVar9[9] & 0xc) +
                                                                   (auVar9[10] & 0x30) +
                                                                   (auVar9[0xb] & 0xc0),
                                                                   CONCAT11((char)(uVar6 >> 0x20) +
                                                                            (char)(uVar6 >> 0x28) +
                                                                            (char)(uVar6 >> 0x30) +
                                                                            (char)(uVar6 >> 0x38),
                                                                            (char)uVar6 +
                                                                            (char)(uVar6 >> 8) +
                                                                            (char)(uVar6 >> 0x10) +
                                                                            (char)(uVar6 >> 0x18))))
                                               )))) >> (((ulong)param_1 & 0x1f) << 1);
    if (uVar6 != 0) {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      return (ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 1;
    }
  }
  do {
    pauVar4 = pauVar5 + 2;
    pauVar1 = pauVar5 + 3;
    auVar9 = NEON_uminp(*pauVar4,*pauVar1,1);
    auVar9 = NEON_uminp(auVar9,auVar9,1);
    lVar8 = NEON_cmeq(auVar9._0_8_,0,1);
    pauVar5 = pauVar4;
  } while (lVar8 == 0);
  auVar9 = NEON_cmeq(*pauVar4,0,1);
  lVar3 = (long)pauVar4 - (long)param_1;
  if ((int)lVar8 == 0) {
    auVar9 = NEON_cmeq(*pauVar1,0,1);
    lVar3 = lVar3 + 0x10;
  }
  uVar6 = CONCAT17((char)(auVar9._14_2_ >> 4),
                   CONCAT16((char)(auVar9._12_2_ >> 4),
                            CONCAT15((char)(auVar9._10_2_ >> 4),
                                     CONCAT14((char)(auVar9._8_2_ >> 4),
                                              CONCAT13((char)(auVar9._6_2_ >> 4),
                                                       CONCAT12((char)(auVar9._4_2_ >> 4),
                                                                CONCAT11((char)(auVar9._2_2_ >> 4),
                                                                         (char)(auVar9._0_2_ >> 4)))
                                                      )))));
  uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
  uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
  uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
  uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
  return lVar3 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 2);
}



// ===== FUN_710081cf40 @ 710081cf40 (size=56) =====

void FUN_710081cf40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 local_8 [2];
  
  local_8[0] = 0;
  uVar1 = FUN_7100834b00();
  FUN_7100828e80(uVar1,param_1,param_2,param_3,local_8);
  return;
}



// ===== FUN_710081cf80 @ 710081cf80 (size=244) =====

long FUN_710081cf80(undefined8 param_1,char *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  long *plVar6;
  
  FUN_7100823e80();
  if (DAT_7100af5578 != (long *)0x0) {
    cVar1 = *param_2;
    pcVar4 = param_2;
    if (cVar1 != '=' && cVar1 != '\0') {
      do {
        pcVar4 = pcVar4 + 1;
        cVar1 = *pcVar4;
      } while (cVar1 != '=' && cVar1 != '\0');
    }
    if ((cVar1 != '=') && (lVar3 = *DAT_7100af5578, lVar3 != 0)) {
      lVar5 = (long)((int)pcVar4 - (int)param_2);
      plVar6 = DAT_7100af5578;
      do {
        iVar2 = FUN_710080b4c0(lVar3,param_2,lVar5);
        if ((iVar2 == 0) && (lVar3 = *plVar6, *(char *)(lVar3 + lVar5) == '=')) {
          *param_3 = (int)((long)plVar6 - (long)DAT_7100af5578 >> 3);
          FUN_7100823ea0(param_1);
          return lVar3 + lVar5 + 1;
        }
        plVar6 = plVar6 + 1;
        lVar3 = *plVar6;
      } while (lVar3 != 0);
    }
  }
  FUN_7100823ea0(param_1);
  return 0;
}



// ===== FUN_710081d080 @ 710081d080 (size=24) =====

void FUN_710081d080(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_4 [4];
  
  FUN_710081cf80(param_1,param_2,auStack_4);
  return;
}



// ===== FUN_710081d0a0 @ 710081d0a0 (size=312) =====

undefined8
FUN_710081d0a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              undefined4 *param_9,ulong param_10,undefined8 param_11,undefined8 param_12,
              undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 *local_168;
  int local_15c;
  undefined2 local_158;
  undefined2 local_156;
  undefined4 *local_150;
  int local_148;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a0;
  undefined8 local_90;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined8 uStack_40;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  local_b0 = param_1;
  uStack_a0 = param_2;
  local_90 = param_3;
  uStack_80 = param_4;
  local_70 = param_5;
  uStack_60 = param_6;
  local_50 = param_7;
  uStack_40 = param_8;
  local_28 = param_12;
  uStack_20 = param_13;
  local_18 = param_14;
  uStack_10 = param_15;
  local_8 = param_16;
  puVar1 = (undefined4 *)FUN_7100834b00();
  if (param_10 < 0x20000000) {
    local_158 = 0x208;
    local_b4 = 0;
    local_168 = param_9;
    local_150 = param_9;
    if (param_10 == 0) {
      local_156 = 0xffff;
      local_15c = 0;
      local_148 = 0;
      FUN_7100829c84(puVar1,&local_168,param_11);
    }
    else {
      local_15c = ((int)param_10 + -1) * 4;
      local_156 = 0xffff;
      local_148 = local_15c;
      uVar2 = FUN_7100829c84(puVar1,&local_168,param_11);
      *local_168 = 0;
      if ((ulong)(long)(int)uVar2 < param_10) {
        return uVar2;
      }
    }
  }
  *puVar1 = 0x8b;
  return 0xffffffff;
}



// ===== FUN_710081d1e0 @ 710081d1e0 (size=308) =====

ulong FUN_710081d1e0(long param_1,ulong param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  if (param_2 < 2) {
    lVar4 = 1;
    uVar2 = 0;
  }
  else {
    lVar4 = 1;
    uVar2 = 1;
    uVar3 = 0;
    uVar8 = 0xffffffffffffffff;
    lVar9 = 1;
    do {
      while (uVar6 = uVar3, bVar1 = *(byte *)(param_1 + uVar8 + lVar4),
            *(byte *)(param_1 + uVar2) < bVar1) {
        lVar9 = uVar2 - uVar8;
        lVar4 = 1;
        uVar6 = uVar2;
LAB_710081d20c:
        uVar2 = uVar6 + lVar4;
        uVar3 = uVar6;
        if (param_2 <= uVar2) goto LAB_710081d24c;
      }
      if (*(byte *)(param_1 + uVar2) == bVar1) {
        if (lVar4 == lVar9) {
          uVar6 = uVar6 + lVar4;
          lVar4 = 1;
        }
        else {
          lVar4 = lVar4 + 1;
        }
        goto LAB_710081d20c;
      }
      lVar4 = 1;
      uVar2 = uVar6 + 2;
      uVar3 = uVar6 + 1;
      uVar8 = uVar6;
      lVar9 = lVar4;
    } while (uVar2 < param_2);
LAB_710081d24c:
    lVar5 = 1;
    uVar3 = 1;
    *param_3 = lVar9;
    uVar6 = 0;
    uVar2 = 0xffffffffffffffff;
    lVar4 = 1;
    do {
      while (uVar7 = uVar6, bVar1 = *(byte *)(param_1 + uVar2 + lVar5),
            bVar1 < *(byte *)(param_1 + uVar3)) {
        lVar4 = uVar3 - uVar2;
        lVar5 = 1;
        uVar7 = uVar3;
LAB_710081d274:
        uVar3 = uVar7 + lVar5;
        uVar6 = uVar7;
        if (param_2 <= uVar3) goto LAB_710081d2b4;
      }
      if (*(byte *)(param_1 + uVar3) == bVar1) {
        if (lVar5 == lVar4) {
          uVar7 = uVar7 + lVar5;
          lVar5 = 1;
        }
        else {
          lVar5 = lVar5 + 1;
        }
        goto LAB_710081d274;
      }
      lVar5 = 1;
      uVar3 = uVar7 + 2;
      uVar6 = uVar7 + 1;
      uVar2 = uVar7;
      lVar4 = lVar5;
    } while (uVar3 < param_2);
LAB_710081d2b4:
    uVar2 = uVar2 + 1;
    if (uVar2 < uVar8 + 1) {
      return uVar8 + 1;
    }
  }
  *param_3 = lVar4;
  return uVar2;
}



// ===== FUN_710081d620 @ 710081d620 (size=1352) =====

byte * FUN_710081d620(byte *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong *puVar9;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  byte *pbVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong local_808;
  ulong auStack_800 [240];
  byte abStack_40 [64];
  ulong *puVar10;
  
  bVar2 = (byte)*param_2;
  if (bVar2 == 0) {
    return param_1;
  }
  bVar1 = *(byte *)((long)param_2 + 1);
  if (bVar1 == 0) {
    pbVar17 = (byte *)FUN_710080eb40(param_1,bVar2);
    return pbVar17;
  }
  if (*(byte *)((long)param_2 + 2) == 0) {
    uVar6 = (uint)*param_1;
    uVar7 = (uint)bVar1 | (uint)bVar2 << 0x10;
    uVar18 = 0;
    if (*param_1 != 0) {
      do {
        pbVar17 = param_1;
        uVar18 = uVar6 | uVar18 << 0x10;
        param_1 = pbVar17 + 1;
        uVar6 = (uint)*param_1;
      } while (uVar6 != 0 && uVar7 != uVar18);
      if (uVar7 == uVar18) {
        return pbVar17 + -1;
      }
    }
  }
  else if (*(char *)((long)param_2 + 3) == '\0') {
    uVar7 = (uint)*param_1;
    if (*param_1 != 0) {
      uVar6 = (uint)bVar1 << 0x10 | (uint)bVar2 << 0x18 | (uint)*(byte *)((long)param_2 + 2) << 8;
      uVar18 = 0;
      do {
        pbVar17 = param_1;
        uVar18 = uVar7 | uVar18;
        param_1 = pbVar17 + 1;
        uVar7 = (uint)*param_1;
        uVar18 = uVar18 * 0x100;
      } while (uVar7 != 0 && uVar6 != uVar18);
      if (uVar6 == uVar18) {
        return pbVar17 + -2;
      }
    }
  }
  else if ((char)param_2[1] == '\0') {
    uVar7 = (uint)*param_1;
    if (*param_1 != 0) {
      uVar18 = 0;
      uVar6 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
      uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
      do {
        pbVar17 = param_1;
        uVar18 = uVar7 | uVar18 << 8;
        param_1 = pbVar17 + 1;
        uVar7 = (uint)*param_1;
      } while (uVar7 != 0 && uVar6 != uVar18);
      if (uVar6 == uVar18) {
        return pbVar17 + -3;
      }
    }
  }
  else {
    uVar14 = FUN_710081ce00(param_2);
    uVar15 = FUN_710081e5c0(param_1,uVar14 | 0x200);
    if (uVar14 <= uVar15) {
      if (uVar14 < 0xff) {
        pbVar17 = param_1 + (uVar15 - uVar14);
        FUN_7100808340(abStack_40,(int)uVar14 + 1,0x40);
        puVar11 = param_2;
        if (uVar14 != 0) {
          do {
            uVar7 = *puVar11;
            cVar3 = (char)puVar11;
            puVar11 = (uint *)((long)puVar11 + 1);
            abStack_40[(ulong)(byte)uVar7 & 0x3f] = ((char)uVar14 + (char)param_2) - cVar3;
          } while ((uint *)((long)param_2 + uVar14) != puVar11);
        }
        while( true ) {
          for (param_1 = param_1 + ((ulong)abStack_40[(ulong)param_1[uVar14 - 1] & 0x3f] - 1);
              param_1 <= pbVar17; param_1 = param_1 + bVar2) {
            bVar2 = abStack_40[(ulong)param_1[uVar14] & 0x3f];
            iVar5 = FUN_710081ec40(param_1,param_2,uVar14);
            if (iVar5 == 0) {
              return param_1;
            }
          }
          if (pbVar17[uVar14] == 0) break;
          lVar16 = FUN_710081e5c0(pbVar17 + uVar14,0x800);
          pbVar17 = pbVar17 + lVar16;
          if (pbVar17 < param_1) {
            return (byte *)0x0;
          }
        }
        return (byte *)0x0;
      }
      uVar20 = uVar14 - 1;
      uVar8 = FUN_710081d1e0(param_2,uVar14,&local_808);
      puVar9 = auStack_800;
      do {
        puVar10 = puVar9 + 1;
        *puVar9 = uVar14;
        puVar9 = puVar10;
      } while (puVar10 != (ulong *)&stack0x00000000);
      puVar11 = param_2;
      if (uVar14 != 0) {
        do {
          uVar7 = *puVar11;
          lVar16 = uVar20 - (long)puVar11;
          puVar11 = (uint *)((long)puVar11 + 1);
          auStack_800[(byte)uVar7] = (long)param_2 + lVar16;
        } while (puVar11 != (uint *)((long)param_2 + uVar14));
      }
      iVar5 = FUN_710081ec40(param_2,(long)param_2 + local_808,uVar8);
      if (iVar5 == 0) {
        uVar19 = uVar15 - uVar14;
        uVar21 = 0;
        uVar22 = 0;
LAB_710081d3ec:
        do {
          if (uVar19 < uVar21) goto LAB_710081d420;
          while( true ) {
            pbVar17 = param_1 + uVar21;
            uVar12 = auStack_800[pbVar17[uVar20]];
            if (uVar12 == 0) break;
            bVar4 = uVar22 == 0;
            uVar22 = 0;
            uVar13 = uVar14 - local_808;
            if (bVar4 || local_808 <= uVar12) {
              uVar13 = uVar12;
            }
            uVar21 = uVar21 + uVar13;
            if (uVar19 < uVar21) {
LAB_710081d420:
              lVar16 = FUN_710081e5c0(param_1 + uVar15,uVar14 | 0x800);
              uVar15 = uVar15 + lVar16;
              uVar19 = uVar15 - uVar14;
              if (uVar19 < uVar21) {
                return (byte *)0x0;
              }
            }
          }
          uVar12 = uVar22;
          if (uVar22 < uVar8) {
            uVar12 = uVar8;
          }
          if (uVar12 < uVar20) {
            do {
              if (*(byte *)((long)param_2 + uVar12) != pbVar17[uVar12]) {
                if (uVar12 < uVar20) {
                  uVar22 = 0;
                  uVar21 = (1 - uVar8) + uVar21 + uVar12;
                  goto LAB_710081d3ec;
                }
                break;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 != uVar20);
          }
          uVar12 = uVar8;
          if (uVar22 < uVar8) {
            do {
              uVar13 = uVar12 - 1;
              if (*(byte *)((long)param_2 + uVar13) != pbVar17[uVar13]) break;
              uVar12 = uVar13;
            } while (uVar22 != uVar13);
          }
          if (uVar12 < uVar22 + 1) {
            return pbVar17;
          }
          uVar21 = uVar21 + local_808;
          uVar22 = uVar14 - local_808;
        } while( true );
      }
      uVar22 = uVar15 - uVar14;
      uVar21 = uVar14 - uVar8;
      if (uVar14 - uVar8 < uVar8) {
        uVar21 = uVar8;
      }
      uVar19 = 0;
LAB_710081d520:
      if (uVar22 < uVar19) goto LAB_710081d544;
      do {
        pbVar17 = param_1 + uVar19;
        uVar12 = auStack_800[pbVar17[uVar20]];
        while( true ) {
          if (uVar12 == 0) {
            uVar12 = uVar8;
            if (uVar8 < uVar20) goto LAB_710081d58c;
            goto LAB_710081d5b0;
          }
          uVar19 = uVar19 + uVar12;
          if (uVar19 <= uVar22) break;
LAB_710081d544:
          lVar16 = FUN_710081e5c0(param_1 + uVar15,uVar14 | 0x800);
          uVar15 = uVar15 + lVar16;
          uVar22 = uVar15 - uVar14;
          if (uVar22 < uVar19) {
            return (byte *)0x0;
          }
          pbVar17 = param_1 + uVar19;
          uVar12 = auStack_800[pbVar17[uVar20]];
        }
      } while( true );
    }
  }
  return (byte *)0x0;
  while (uVar12 = uVar12 + 1, uVar12 != uVar20) {
LAB_710081d58c:
    if (*(byte *)((long)param_2 + uVar12) != pbVar17[uVar12]) {
      if (uVar12 < uVar20) {
        uVar19 = (1 - uVar8) + uVar19 + uVar12;
        goto LAB_710081d520;
      }
      break;
    }
  }
LAB_710081d5b0:
  lVar16 = uVar8 - 1;
  if (uVar8 == 0) {
    return pbVar17;
  }
  while (*(byte *)((long)param_2 + lVar16) == pbVar17[lVar16]) {
    lVar16 = lVar16 + -1;
    if (lVar16 == -1) {
      return pbVar17;
    }
  }
  uVar19 = uVar19 + uVar21 + 1;
  goto LAB_710081d520;
}



// ===== FUN_710081d880 @ 710081d880 (size=52) =====

int * FUN_710081d880(int *param_1,int param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      if (*param_1 == param_2) {
        return param_1;
      }
      lVar1 = lVar1 + 1;
      param_1 = param_1 + 1;
    } while (param_3 != lVar1);
  }
  return (int *)0x0;
}



// ===== FUN_710081d8c0 @ 710081d8c0 (size=1384) =====

long * FUN_710081d8c0(undefined4 *param_1,long *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  
  if (param_2 == (long *)0x0) {
    plVar13 = (long *)FUN_7100814ca0(param_1,param_3);
    return plVar13;
  }
  FUN_710081e680();
  if (param_3 + 0x17 < 0x2f) {
    uVar10 = 0x20;
    if (0x20 < param_3) {
LAB_710081da3c:
      *param_1 = 0xc;
      return (long *)0x0;
    }
  }
  else {
    uVar10 = param_3 + 0x17 & 0xfffffffffffffff0;
    if (0x7fffffff < uVar10 || uVar10 < param_3) goto LAB_710081da3c;
  }
  uVar6 = param_2[-1];
  plVar7 = param_2 + -2;
  uVar11 = uVar6 & 0xfffffffffffffffc;
  uVar12 = uVar11;
  plVar13 = plVar7;
  plVar3 = param_2;
  if ((long)uVar10 <= (long)uVar11) goto LAB_710081da68;
  puVar1 = (undefined *)((long)plVar7 + uVar11);
  uVar2 = *(ulong *)(puVar1 + 8);
  if (PTR_DAT_7100af4bd0 == puVar1) {
    lVar5 = (uVar2 & 0xfffffffffffffffc) + uVar11;
    if ((long)(uVar10 + 0x20) <= lVar5) {
      PTR_DAT_7100af4bd0 = (undefined *)((long)plVar7 + uVar10);
      *(ulong *)(PTR_DAT_7100af4bd0 + 8) = lVar5 - uVar10 | 1;
      param_2[-1] = param_2[-1] & 1U | uVar10;
      FUN_710081e6a0(param_1);
      return param_2;
    }
    if ((uVar6 & 1) == 0) {
      plVar13 = (long *)((long)plVar7 - *plVar7);
      uVar6 = plVar13[1] & 0xfffffffffffffffc;
      lVar5 = (uVar2 & 0xfffffffffffffffc) + uVar6 + uVar11;
      if ((long)(uVar10 + 0x20) <= lVar5) {
        uVar11 = uVar11 - 8;
        lVar9 = plVar13[3];
        plVar3 = plVar13 + 2;
        lVar8 = *plVar3;
        *(long *)(lVar8 + 0x18) = lVar9;
        *(long *)(lVar9 + 0x10) = lVar8;
        if (uVar11 < 0x49) {
          plVar4 = plVar3;
          plVar7 = param_2;
          if (0x27 < uVar11) {
            plVar13[2] = *param_2;
            plVar13[3] = param_2[1];
            if (uVar11 < 0x38) {
              plVar7 = param_2 + 2;
              plVar4 = plVar13 + 4;
            }
            else {
              plVar13[4] = param_2[2];
              plVar13[5] = param_2[3];
              if (uVar11 == 0x48) {
                plVar13[6] = param_2[4];
                plVar7 = param_2 + 6;
                plVar4 = plVar13 + 8;
                plVar13[7] = param_2[5];
              }
              else {
                plVar7 = param_2 + 4;
                plVar4 = plVar13 + 6;
              }
            }
          }
          *plVar4 = *plVar7;
          plVar4[1] = plVar7[1];
          plVar4[2] = plVar7[2];
        }
        else {
          FUN_710080f900(plVar3,param_2);
        }
        PTR_DAT_7100af4bd0 = (undefined *)((long)plVar13 + uVar10);
        *(ulong *)(PTR_DAT_7100af4bd0 + 8) = lVar5 - uVar10 | 1;
        plVar13[1] = plVar13[1] & 1U | uVar10;
        FUN_710081e6a0(param_1);
        return plVar3;
      }
LAB_710081d97c:
      uVar12 = uVar11 + uVar6;
      if ((long)uVar10 <= (long)uVar12) {
        lVar5 = plVar13[3];
        plVar3 = plVar13 + 2;
        lVar9 = *plVar3;
        *(long *)(lVar9 + 0x18) = lVar5;
        *(long *)(lVar5 + 0x10) = lVar9;
        if (0x48 < uVar11 - 8) {
          FUN_710080f900(plVar3,param_2);
          goto LAB_710081da68;
        }
        goto LAB_710081dc28;
      }
    }
  }
  else {
    if ((*(ulong *)(puVar1 + (uVar2 & 0xfffffffffffffffe) + 8) & 1) == 0) {
      uVar12 = uVar11 + (uVar2 & 0xfffffffffffffffc);
      if ((long)uVar10 <= (long)uVar12) {
        lVar5 = *(long *)(puVar1 + 0x10);
        lVar9 = *(long *)(puVar1 + 0x18);
        *(long *)(lVar5 + 0x18) = lVar9;
        *(long *)(lVar9 + 0x10) = lVar5;
        goto LAB_710081da68;
      }
      if ((uVar6 & 1) != 0) goto LAB_710081d988;
      plVar13 = (long *)((long)plVar7 - param_2[-2]);
      uVar6 = plVar13[1] & 0xfffffffffffffffc;
      uVar12 = (uVar2 & 0xfffffffffffffffc) + uVar6 + uVar11;
      if ((long)uVar12 < (long)uVar10) goto LAB_710081d97c;
      lVar5 = *(long *)(puVar1 + 0x10);
      lVar9 = *(long *)(puVar1 + 0x18);
      *(long *)(lVar5 + 0x18) = lVar9;
      *(long *)(lVar9 + 0x10) = lVar5;
      lVar5 = plVar13[3];
      plVar3 = plVar13 + 2;
      lVar9 = *plVar3;
      *(long *)(lVar9 + 0x18) = lVar5;
      *(long *)(lVar5 + 0x10) = lVar9;
      if (0x48 < uVar11 - 8) {
        FUN_710080f900(plVar3,param_2);
        goto LAB_710081da68;
      }
LAB_710081dc28:
      uVar11 = uVar11 - 8;
      plVar4 = plVar3;
      plVar7 = param_2;
      if (0x27 < uVar11) {
        plVar13[2] = *param_2;
        plVar13[3] = param_2[1];
        if (uVar11 < 0x38) {
          plVar7 = param_2 + 2;
          plVar4 = plVar13 + 4;
        }
        else {
          plVar13[4] = param_2[2];
          plVar13[5] = param_2[3];
          if (uVar11 == 0x48) {
            plVar13[6] = param_2[4];
            plVar7 = param_2 + 6;
            plVar4 = plVar13 + 8;
            plVar13[7] = param_2[5];
          }
          else {
            plVar7 = param_2 + 4;
            plVar4 = plVar13 + 6;
          }
        }
      }
      *plVar4 = *plVar7;
      plVar4[1] = plVar7[1];
      plVar4[2] = plVar7[2];
      goto LAB_710081da68;
    }
    if ((uVar6 & 1) == 0) {
      plVar13 = (long *)((long)plVar7 - *plVar7);
      uVar6 = plVar13[1] & 0xfffffffffffffffc;
      goto LAB_710081d97c;
    }
  }
LAB_710081d988:
  plVar13 = (long *)FUN_7100814ca0(param_1,param_3);
  if (plVar13 == (long *)0x0) {
    FUN_710081e6a0(param_1);
    return (long *)0x0;
  }
  plVar4 = (long *)((long)plVar7 + (param_2[-1] & 0xfffffffffffffffeU));
  if (plVar4 != plVar13 + -2) {
    uVar11 = uVar11 - 8;
    if (uVar11 < 0x49) {
      plVar3 = plVar13;
      plVar7 = param_2;
      if (0x27 < uVar11) {
        *plVar13 = *param_2;
        plVar13[1] = param_2[1];
        if (uVar11 < 0x38) {
          plVar3 = plVar13 + 2;
          plVar7 = param_2 + 2;
        }
        else {
          plVar13[2] = param_2[2];
          plVar13[3] = param_2[3];
          if (uVar11 == 0x48) {
            plVar13[4] = param_2[4];
            plVar13[5] = param_2[5];
            plVar3 = plVar13 + 6;
            plVar7 = param_2 + 6;
          }
          else {
            plVar3 = plVar13 + 4;
            plVar7 = param_2 + 4;
          }
        }
      }
      *plVar3 = *plVar7;
      plVar3[1] = plVar7[1];
      plVar3[2] = plVar7[2];
    }
    else {
      FUN_710080f900(plVar13,param_2);
    }
    FUN_7100816da0(param_1,param_2);
    FUN_710081e6a0(param_1);
    return plVar13;
  }
  uVar12 = uVar11 + (plVar4[1] & 0xfffffffffffffffcU);
  plVar13 = plVar7;
LAB_710081da68:
  if (uVar12 - uVar10 < 0x20) {
    plVar13[1] = uVar12 | plVar13[1] & 1U;
    *(ulong *)((long)plVar13 + uVar12 + 8) = *(ulong *)((long)plVar13 + uVar12 + 8) | 1;
  }
  else {
    plVar13[1] = uVar10 | plVar13[1] & 1U;
    *(ulong *)((long)plVar13 + uVar10 + 8) = uVar12 - uVar10 | 1;
    *(ulong *)((long)plVar13 + uVar12 + 8) = *(ulong *)((long)plVar13 + uVar12 + 8) | 1;
    FUN_7100816da0(param_1);
  }
  FUN_710081e6a0(param_1);
  return plVar3;
}



// ===== FUN_710081de40 @ 710081de40 (size=848) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_710081de40(long *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  piVar5 = (int *)FUN_710080f8e0();
  piVar6 = (int *)FUN_710080b140(param_1,param_2);
  uVar1 = piVar6[5];
  iVar4 = uVar1 + 0x76c;
  if ((((uVar1 & 3) != 0) ||
      (lVar10 = 0x30, (iVar4 * -0x3d70a3d7 + 0x51eb850U >> 2 | uVar1 * 0x40000000) < 0x28f5c29)) &&
     (lVar10 = 0x30, iVar4 % 400 != 0)) {
    lVar10 = 0;
  }
  FUN_7100814c60();
  FUN_710080e8c0();
  if (_DAT_7100d22f90 == 0) {
LAB_710081df30:
    piVar6[8] = 0;
  }
  else if ((piVar5[1] == iVar4) || (iVar4 = FUN_710081e6c0(iVar4), iVar4 != 0)) {
    lVar7 = *param_1;
    if (*piVar5 == 0) {
      if (*(long *)(piVar5 + 8) <= lVar7) {
        piVar6[8] = 1;
        lVar7 = *(long *)(piVar5 + 0x14);
        goto LAB_710081df38;
      }
    }
    else if (lVar7 < *(long *)(piVar5 + 8)) goto LAB_710081df30;
    lVar8 = *(long *)(piVar5 + 0x12);
    piVar6[8] = (uint)(lVar7 < lVar8);
    if (lVar7 < lVar8 != 0) {
      lVar7 = *(long *)(piVar5 + 0x14);
      goto LAB_710081df38;
    }
  }
  else {
    piVar6[8] = -1;
  }
  lVar7 = *(long *)(piVar5 + 10);
LAB_710081df38:
  lVar9 = lVar7 / 0xe10 + (lVar7 >> 0x3f);
  lVar8 = lVar7 + (lVar9 - (lVar7 >> 0x3f)) * -0xe10;
  iVar3 = (int)(lVar8 / 0x3c);
  iVar4 = piVar6[1] - iVar3;
  iVar2 = *piVar6 - ((int)lVar8 + iVar3 * -0x3c);
  *piVar6 = iVar2;
  piVar6[1] = iVar4;
  iVar3 = piVar6[2] - ((int)lVar9 - (int)(lVar7 >> 0x3f));
  piVar6[2] = iVar3;
  if (iVar2 < 0x3c) {
    if (iVar2 < 0) {
      iVar4 = iVar4 + -1;
      *piVar6 = iVar2 + 0x3c;
      piVar6[1] = iVar4;
    }
  }
  else {
    iVar4 = iVar4 + 1;
    *piVar6 = iVar2 + -0x3c;
    piVar6[1] = iVar4;
  }
  if (iVar4 < 0x3c) {
    if (iVar4 < 0) {
      iVar3 = iVar3 + -1;
      piVar6[1] = iVar4 + 0x3c;
      piVar6[2] = iVar3;
    }
  }
  else {
    iVar3 = iVar3 + 1;
    piVar6[1] = iVar4 + -0x3c;
    piVar6[2] = iVar3;
  }
  if (iVar3 < 0x18) {
    if (iVar3 < 0) {
      iVar4 = piVar6[6] + -1;
      if (iVar4 < 0) {
        iVar4 = 6;
      }
      piVar6[6] = iVar4;
      piVar6[7] = piVar6[7] + -1;
      iVar4 = piVar6[3];
      piVar6[2] = iVar3 + 0x18;
      piVar6[3] = iVar4 + -1;
      if (iVar4 + -1 == 0) {
        uVar1 = piVar6[4] - 1;
        if ((int)uVar1 < 0) {
          iVar4 = piVar6[5];
          uVar1 = iVar4 - 1;
          piVar6[4] = 0xb;
          piVar6[5] = uVar1;
          iVar4 = iVar4 + 0x76b;
          if (((uVar1 & 3) != 0) ||
             (iVar3 = 0x16d,
             (iVar4 * -0x3d70a3d7 + 0x51eb850U >> 2 | iVar4 * 0x40000000) < 0x28f5c29)) {
            iVar3 = ((iVar4 * -0x3d70a3d7 + 0x51eb850U >> 4 | iVar4 * -0x70000000) < 0xa3d70b) +
                    0x16c;
          }
          lVar7 = 0x2c;
          piVar6[7] = iVar3;
        }
        else {
          piVar6[4] = uVar1;
          lVar7 = (ulong)uVar1 << 2;
        }
        piVar6[3] = *(int *)((long)&DAT_71009d3920 + lVar7 + lVar10);
        FUN_7100814c80();
        return piVar6;
      }
    }
  }
  else {
    iVar4 = piVar6[6] + 1;
    if (6 < iVar4) {
      iVar4 = 0;
    }
    piVar6[6] = iVar4;
    piVar6[7] = piVar6[7] + 1;
    iVar2 = piVar6[4];
    iVar4 = piVar6[3] + 1;
    piVar6[2] = iVar3 + -0x18;
    piVar6[3] = iVar4;
    iVar3 = *(int *)((long)&DAT_71009d3920 + (long)iVar2 * 4 + lVar10);
    if (iVar3 < iVar4) {
      piVar6[3] = iVar4 - iVar3;
      if (iVar2 == 0xb) {
        piVar6[7] = 0;
        piVar6[4] = 0;
        piVar6[5] = piVar6[5] + 1;
      }
      else {
        piVar6[4] = iVar2 + 1;
      }
    }
  }
  FUN_7100814c80();
  return piVar6;
}



// ===== FUN_710081e1a0 @ 710081e1a0 (size=132) =====

ulong FUN_710081e1a0(long param_1,long param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
  if (param_3 != 0) {
    lVar5 = 0;
    do {
      bVar1 = *(byte *)(param_1 + lVar5);
      bVar2 = *(byte *)(param_2 + lVar5);
      uVar4 = bVar1 + 0x20;
      uVar3 = (uint)bVar2;
      if (((&DAT_71009d32f1)[(uint)bVar1] & 3) != 1) {
        uVar4 = (uint)bVar1;
      }
      if (((&DAT_71009d32f1)[bVar2] & 3) == 1) {
        uVar4 = uVar4 - (uVar3 + 0x20);
        if (uVar4 != 0) {
          return (ulong)uVar4;
        }
      }
      else {
        if (uVar4 - uVar3 != 0) {
          return (ulong)(uVar4 - uVar3);
        }
        if (uVar3 == 0) {
          return (ulong)bVar2;
        }
      }
      lVar5 = lVar5 + 1;
    } while (param_3 != lVar5);
  }
  return 0;
}



// ===== FUN_710081e240 @ 710081e240 (size=816) =====

ulong FUN_710081e240(long param_1,long param_2,ulong param_3,ulong param_4,long *param_5)

{
  short sVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  uVar8 = param_4 * param_3;
  if (uVar8 == 0) {
    return 0;
  }
  if ((param_1 != 0) && (*(long *)(param_1 + 0x48) == 0)) {
    FUN_710080d840();
  }
  sVar1 = (short)param_5[2];
  if (((*(uint *)((long)param_5 + 0xb4) & 1) == 0) && (((uint)(int)sVar1 >> 9 & 1) == 0)) {
    FUN_7100836200(param_5 + 0x14);
    iVar3 = (int)param_5[1];
    sVar1 = (short)param_5[2];
  }
  else {
    iVar3 = (int)param_5[1];
  }
  if (iVar3 < 0) {
    *(undefined4 *)(param_5 + 1) = 0;
  }
  if (((uint)(int)sVar1 >> 1 & 1) == 0) {
    uVar6 = uVar8;
    if (param_5[3] == 0) {
      FUN_710081cc80(param_1,param_5);
    }
    do {
      while( true ) {
        uVar4 = (ulong)(int)param_5[1];
        if (uVar6 <= uVar4) {
          FUN_710080f900(param_2,*param_5,uVar6);
          *(int *)(param_5 + 1) = (int)param_5[1] - (int)uVar6;
          *param_5 = *param_5 + uVar6;
          goto LAB_710081e4ac;
        }
        FUN_710080f900(param_2,*param_5,uVar4);
        iVar3 = (int)param_5[4];
        uVar9 = uVar6 - uVar4;
        param_2 = param_2 + uVar4;
        *param_5 = *param_5 + uVar4;
        if ((ulong)(long)iVar3 < uVar9) break;
        iVar3 = FUN_710081ca20(param_1,param_5);
        uVar6 = uVar9;
        if (iVar3 != 0) goto LAB_710081e34c;
      }
      lVar10 = param_5[3];
      *param_5 = param_2;
      param_5[3] = param_2;
      *(int *)(param_5 + 4) = (int)uVar9 - iVar3;
      iVar2 = FUN_710081ca20(param_1,param_5);
      *param_5 = lVar10;
      param_5[3] = lVar10;
      *(int *)(param_5 + 4) = iVar3;
      lVar10 = (long)(int)param_5[1];
      if (iVar2 != 0) {
        if (((*(uint *)((long)param_5 + 0xb4) & 1) == 0) &&
           ((*(ushort *)(param_5 + 2) >> 9 & 1) == 0)) {
          FUN_7100836220(param_5 + 0x14);
        }
        uVar8 = (uVar8 - uVar6) + lVar10 + uVar4;
        goto LAB_710081e360;
      }
      uVar9 = uVar9 - lVar10;
      param_2 = param_2 + lVar10;
      iVar3 = FUN_710081ca20(param_1,param_5);
      uVar6 = uVar9;
    } while (iVar3 == 0);
LAB_710081e34c:
    if (((*(uint *)((long)param_5 + 0xb4) & 1) == 0) && ((*(ushort *)(param_5 + 2) >> 9 & 1) == 0))
    {
      FUN_7100836220(param_5 + 0x14);
    }
    uVar8 = uVar8 - uVar9;
LAB_710081e360:
    if (param_3 == 0) {
      return 0;
    }
    return uVar8 / param_3;
  }
  uVar6 = (long)(int)param_5[1];
  if (uVar8 < (ulong)(long)(int)param_5[1]) {
    uVar6 = uVar8;
  }
  lVar10 = (long)(int)uVar6;
  FUN_710080f900(param_2,*param_5,lVar10);
  *param_5 = *param_5 + lVar10;
  *(int *)(param_5 + 1) = (int)param_5[1] - (int)uVar6;
  lVar7 = uVar8 - lVar10;
  if (param_5[0xb] == 0) {
    param_2 = param_2 + lVar10;
  }
  else {
    if (lVar7 == 0) goto LAB_710081e4ac;
    if (param_5[0xb] != (long)param_5 + 0x74) {
      FUN_7100816da0(param_1);
    }
    param_2 = param_2 + lVar10;
    param_5[0xb] = 0;
  }
  for (; lVar7 != 0; lVar7 = lVar7 - lVar5) {
    lVar5 = param_5[3];
    *param_5 = param_2;
    lVar10 = param_5[4];
    param_5[3] = param_2;
    *(int *)(param_5 + 4) = (int)lVar7;
    iVar3 = FUN_710081ca20(param_1,param_5);
    *param_5 = lVar5;
    param_5[3] = lVar5;
    lVar5 = (long)(int)param_5[1];
    *(undefined4 *)(param_5 + 1) = 0;
    *(int *)(param_5 + 4) = (int)lVar10;
    param_2 = param_2 + lVar5;
    if (iVar3 != 0) {
      if (((*(uint *)((long)param_5 + 0xb4) & 1) == 0) && ((*(ushort *)(param_5 + 2) >> 9 & 1) == 0)
         ) {
        FUN_7100836220(param_5 + 0x14);
      }
      uVar6 = 0;
      if (param_3 != 0) {
        uVar6 = ((lVar5 + uVar8) - lVar7) / param_3;
      }
      return uVar6;
    }
  }
LAB_710081e4ac:
  if (((*(uint *)((long)param_5 + 0xb4) & 1) == 0) && ((*(ushort *)(param_5 + 2) >> 9 & 1) == 0)) {
    FUN_7100836220(param_5 + 0x14);
  }
  return param_4;
}



// ===== FUN_710081e580 @ 710081e580 (size=52) =====

void FUN_710081e580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_710081e240(uVar1,param_1,param_2,param_3,param_4);
  return;
}



// ===== FUN_710081e5c0 @ 710081e5c0 (size=184) =====

ulong FUN_710081e5c0(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  pauVar3 = (undefined1 (*) [16])(param_1 & 0xfffffffffffffff0);
  if (param_2 != 0) {
    auVar7 = NEON_cmeq(*pauVar3,0,1);
    uVar5 = CONCAT17((char)(auVar7._14_2_ >> 4),
                     CONCAT16((char)(auVar7._12_2_ >> 4),
                              CONCAT15((char)(auVar7._10_2_ >> 4),
                                       CONCAT14((char)(auVar7._8_2_ >> 4),
                                                CONCAT13((char)(auVar7._6_2_ >> 4),
                                                         CONCAT12((char)(auVar7._4_2_ >> 4),
                                                                  CONCAT11((char)(auVar7._2_2_ >> 4)
                                                                           ,(char)(auVar7._0_2_ >> 4
                                                                                  )))))))) >>
            ((param_1 & 0xf) << 2);
    if (uVar5 != 0) {
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = (ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 2;
      if (uVar5 < param_2) {
        param_2 = uVar5;
      }
      return param_2;
    }
    uVar5 = (long)pauVar3 + (0x11 - param_1);
    uVar6 = param_2 - uVar5;
    if (uVar5 <= param_2) {
      if (((uint)uVar6 >> 4 & 1) == 0) goto LAB_710081e634;
      pauVar4 = pauVar3 + -1;
      do {
        pauVar3 = pauVar4 + 2;
        uVar1 = *(undefined8 *)(pauVar4[2] + 8);
        auVar7[9] = (char)((ulong)uVar1 >> 8);
        auVar7._0_9_ = *(unkbyte9 *)*pauVar3;
        auVar7[10] = (char)((ulong)uVar1 >> 0x10);
        auVar7[0xb] = (char)((ulong)uVar1 >> 0x18);
        auVar7[0xc] = (char)((ulong)uVar1 >> 0x20);
        auVar7[0xd] = (char)((ulong)uVar1 >> 0x28);
        auVar7[0xe] = (char)((ulong)uVar1 >> 0x30);
        auVar7[0xf] = (char)((ulong)uVar1 >> 0x38);
        auVar7 = NEON_cmeq(auVar7,0,1);
        auVar8 = NEON_umaxp(auVar7,auVar7,1);
        if (auVar8._0_8_ != 0) goto LAB_710081e654;
LAB_710081e634:
        uVar1 = *(undefined8 *)(pauVar3[1] + 8);
        bVar2 = 0x1f < uVar6;
        uVar6 = uVar6 - 0x20;
        auVar8[9] = (char)((ulong)uVar1 >> 8);
        auVar8._0_9_ = *(unkbyte9 *)pauVar3[1];
        auVar8[10] = (char)((ulong)uVar1 >> 0x10);
        auVar8[0xb] = (char)((ulong)uVar1 >> 0x18);
        auVar8[0xc] = (char)((ulong)uVar1 >> 0x20);
        auVar8[0xd] = (char)((ulong)uVar1 >> 0x28);
        auVar8[0xe] = (char)((ulong)uVar1 >> 0x30);
        auVar8[0xf] = (char)((ulong)uVar1 >> 0x38);
        auVar7 = NEON_cmeq(auVar8,0,1);
      } while ((bVar2) &&
              (auVar8 = NEON_umaxp(auVar7,auVar7,1), pauVar4 = pauVar3, auVar8._0_8_ == 0));
      pauVar3 = pauVar3 + 1;
LAB_710081e654:
      uVar5 = CONCAT17((char)(auVar7._14_2_ >> 4),
                       CONCAT16((char)(auVar7._12_2_ >> 4),
                                CONCAT15((char)(auVar7._10_2_ >> 4),
                                         CONCAT14((char)(auVar7._8_2_ >> 4),
                                                  CONCAT13((char)(auVar7._6_2_ >> 4),
                                                           CONCAT12((char)(auVar7._4_2_ >> 4),
                                                                    CONCAT11((char)(auVar7._2_2_ >>
                                                                                   4),(char)(auVar7.
                                                  _0_2_ >> 4))))))));
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = (long)pauVar3 + (((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 2) - param_1);
      if (uVar5 < param_2) {
        param_2 = uVar5;
      }
      return param_2;
    }
  }
  return param_2;
}



// ===== FUN_710081e680 @ 710081e680 (size=12) =====

void FUN_710081e680(void)

{
  FUN_7100836200(0x7100d22f70);
  return;
}



// ===== FUN_710081e6a0 @ 710081e6a0 (size=12) =====

void FUN_710081e6a0(void)

{
  FUN_7100836220(0x7100d22f70);
  return;
}



// ===== FUN_710081e6c0 @ 710081e6c0 (size=604) =====

undefined8 FUN_710081e6c0(uint param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  uint *puVar10;
  int *piVar11;
  long lVar12;
  int *piVar9;
  
  puVar6 = (uint *)FUN_710080f8e0();
  if (0x7b1 < (int)param_1) {
    puVar6[1] = param_1;
    iVar2 = ((((int)(param_1 - 0x7b1) >> 2) + (param_1 - 0x7b2) * 0x16d) -
            (int)(param_1 - 0x76d) / 100) + (param_1 - 0x641) / 400;
    puVar10 = puVar6 + 2;
    do {
      if ((char)*puVar10 == 'J') {
        uVar4 = puVar10[3];
        iVar7 = uVar4 + iVar2;
        if (((param_1 & 3) == 0) &&
           (0x28f5c28 < (param_1 * -0x3d70a3d7 + 0x51eb850 >> 2 | param_1 * 0x40000000))) {
          if (0x3b < (int)uVar4) {
            iVar7 = iVar7 + 1;
          }
        }
        else if (((param_1 * -0x3d70a3d7 + 0x51eb850 >> 4 | param_1 * -0x70000000) < 0xa3d70b) &&
                (0x3b < (int)uVar4)) {
          iVar7 = iVar7 + 1;
        }
        iVar7 = iVar7 + -1;
      }
      else if ((char)*puVar10 == 'D') {
        iVar7 = iVar2 + puVar10[3];
      }
      else {
        if ((((param_1 & 3) != 0) ||
            (lVar12 = 0x30,
            (param_1 * -0x3d70a3d7 + 0x51eb850 >> 2 | param_1 * 0x40000000) < 0x28f5c29)) &&
           (lVar12 = 0x30, (int)param_1 % 400 != 0)) {
          lVar12 = 0;
        }
        uVar4 = puVar10[1];
        piVar11 = (int *)((long)&DAT_71009d3920 + lVar12);
        iVar7 = iVar2;
        if (1 < (int)uVar4) {
          piVar8 = piVar11;
          do {
            piVar9 = piVar8 + 1;
            iVar7 = iVar7 + *piVar8;
            piVar8 = piVar9;
          } while (piVar11 + (uVar4 - 1) != piVar9);
          piVar11 = piVar11 + (uVar4 - 1);
        }
        iVar5 = puVar10[3] - (iVar7 + 4) % 7;
        iVar3 = iVar5 + 7;
        if (-1 < iVar5) {
          iVar3 = iVar5;
        }
        for (iVar3 = iVar3 + (puVar10[2] - 1) * 7; *piVar11 <= iVar3; iVar3 = iVar3 + -7) {
        }
        iVar7 = iVar7 + iVar3;
      }
      puVar1 = puVar10 + 10;
      *(long *)(puVar10 + 6) =
           (long)(int)puVar10[4] + (long)iVar7 * 0x15180 + *(long *)(puVar10 + 8);
      puVar10 = puVar1;
    } while (puVar6 + 0x16 != puVar1);
    *puVar6 = (uint)(*(long *)(puVar6 + 8) < *(long *)(puVar6 + 0x12));
    return 1;
  }
  return 0;
}



// ===== FUN_710081e920 @ 710081e920 (size=168) =====

undefined4 FUN_710081e920(undefined4 param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_7100834b00();
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x48) == 0)) {
    FUN_710080d840();
  }
  if (((*(uint *)(param_2 + 0xb4) & 1) == 0) && ((*(ushort *)(param_2 + 0x10) >> 9 & 1) == 0)) {
    FUN_7100836200(param_2 + 0xa0);
  }
  uVar1 = FUN_7100828780(lVar2,param_1,param_2);
  if (((*(uint *)(param_2 + 0xb4) & 1) == 0) && ((*(ushort *)(param_2 + 0x10) >> 9 & 1) == 0)) {
    FUN_7100836220(param_2 + 0xa0);
    return uVar1;
  }
  return uVar1;
}



// ===== FUN_710081e9e0 @ 710081e9e0 (size=600) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_710081e9e0(undefined8 param_1,char *param_2,long param_3,int param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  uint local_4;
  
  lVar3 = FUN_710080eb40(param_2,0x3d);
  if (lVar3 != 0) {
    puVar8 = (undefined4 *)FUN_710080e8e0();
    *puVar8 = 0x16;
    return 0xffffffff;
  }
  FUN_7100823e80(param_1);
  iVar2 = FUN_710081ce00(param_3);
  lVar3 = FUN_710081cf80(param_1,param_2,&local_4);
  if (lVar3 == 0) {
    if (*DAT_7100af5578 == 0) {
      lVar3 = 0x10;
      uVar12 = 0;
    }
    else {
      plVar7 = DAT_7100af5578;
      uVar12 = 0;
      do {
        uVar11 = uVar12;
        plVar7 = plVar7 + 1;
        uVar12 = uVar11 + 1;
      } while (*plVar7 != 0);
      lVar3 = (ulong)(uVar11 + 3) << 3;
    }
    if (_DAT_7100d22f7c == 0) {
      _DAT_7100d22f7c = 1;
      plVar7 = (long *)FUN_7100814ca0(param_1,lVar3);
      if (plVar7 != (long *)0x0) {
        lVar3 = (ulong)uVar12 << 3;
        FUN_710080f900(plVar7,DAT_7100af5578,lVar3);
LAB_710081ebb8:
        DAT_7100af5578 = plVar7;
        plVar7[uVar12 + 1] = 0;
        local_4 = uVar12;
        goto LAB_710081ea6c;
      }
    }
    else {
      plVar7 = (long *)FUN_710081d8c0(param_1);
      DAT_7100af5578 = plVar7;
      if (plVar7 != (long *)0x0) {
        lVar3 = (ulong)uVar12 << 3;
        goto LAB_710081ebb8;
      }
    }
LAB_710081ec24:
    FUN_7100823ea0(param_1);
    uVar6 = 0xffffffff;
  }
  else {
    if (param_4 != 0) {
      uVar4 = FUN_710081ce00();
      if (uVar4 < (ulong)(long)iVar2) {
        lVar3 = (long)(int)local_4 << 3;
        plVar7 = DAT_7100af5578;
LAB_710081ea6c:
        pcVar10 = param_2;
        if (*param_2 != '=' && *param_2 != '\0') {
          do {
            pcVar10 = pcVar10 + 1;
          } while (*pcVar10 != '=' && *pcVar10 != '\0');
          iVar2 = ((int)pcVar10 - (int)param_2) + iVar2;
        }
        lVar5 = FUN_7100814ca0(param_1,(long)(iVar2 + 2));
        *(long *)((long)plVar7 + lVar3) = lVar5;
        if (lVar5 == 0) goto LAB_710081ec24;
        pcVar10 = (char *)DAT_7100af5578[(int)local_4];
        cVar1 = *param_2;
        *pcVar10 = cVar1;
        if (cVar1 != '=' && cVar1 != '\0') {
          pcVar9 = param_2 + 1;
          do {
            cVar1 = *pcVar9;
            pcVar10 = pcVar10 + 1;
            *pcVar10 = cVar1;
            pcVar9 = pcVar9 + 1;
          } while (cVar1 != '=' && cVar1 != '\0');
        }
        *pcVar10 = '=';
        lVar3 = 0;
        do {
          cVar1 = *(char *)(param_3 + lVar3);
          pcVar10[lVar3 + 1] = cVar1;
          lVar3 = lVar3 + 1;
        } while (cVar1 != '\0');
      }
      else {
        lVar5 = 0;
        do {
          cVar1 = *(char *)(param_3 + lVar5);
          *(char *)(lVar3 + lVar5) = cVar1;
          lVar5 = lVar5 + 1;
        } while (cVar1 != '\0');
      }
    }
    FUN_7100823ea0(param_1);
    uVar6 = 0;
  }
  return uVar6;
}



// ===== FUN_710081ec40 @ 710081ec40 (size=452) =====

uint FUN_710081ec40(ulong *param_1,ulong *param_2,ulong param_3)

{
  bool bVar1;
  uint uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  
  if (param_3 < 0x10) {
    uVar7 = (uint)param_3;
    if ((uVar7 >> 3 & 1) == 0) {
      if ((uVar7 >> 2 & 1) == 0) {
        if ((uVar7 >> 1 & 1) == 0) {
LAB_710081ed3c:
          uVar7 = 0;
          if ((param_3 & 1) != 0) {
            uVar7 = (uint)*(byte *)((long)param_1 + (param_3 - 1)) -
                    (uint)*(byte *)((long)param_2 + (param_3 - 1));
          }
          return uVar7;
        }
        uVar10 = (ulong)(ushort)*param_1;
        uVar11 = (ulong)(ushort)*param_2;
        if ((ushort)*param_1 == (ushort)*param_2) goto LAB_710081ed3c;
        goto LAB_710081ecd4;
      }
      uVar10 = (ulong)(uint)*param_1;
      uVar11 = (ulong)(uint)*param_2;
      uVar9 = (ulong)*(uint *)((long)param_1 + (param_3 - 4));
      uVar12 = (ulong)*(uint *)((long)param_2 + (param_3 - 4));
    }
    else {
      uVar10 = *param_1;
      uVar11 = *param_2;
      uVar9 = *(ulong *)((long)param_1 + (param_3 - 8));
      uVar12 = *(ulong *)((long)param_2 + (param_3 - 8));
    }
  }
  else {
    uVar10 = *param_1;
    uVar9 = param_1[1];
    uVar11 = *param_2;
    uVar12 = param_2[1];
    if ((param_3 != 0x10 && uVar10 == uVar11) && uVar9 == uVar12) {
      if (0x20 < param_3) {
        if (0x9f < param_3) {
          uVar10 = param_1[2];
          uVar9 = param_1[3];
          uVar11 = param_2[2];
          uVar12 = param_2[3];
          if (uVar10 == uVar11 && uVar9 == uVar12) {
            lVar13 = ((ulong)param_2 & 0xf) - 0x10;
            puVar4 = (ulong *)((long)param_1 - lVar13);
            puVar6 = (ulong *)((long)param_2 - lVar13);
            uVar10 = (param_3 + lVar13) - 0x50;
            do {
              uVar8 = uVar10;
              uVar11 = puVar4[5];
              uVar10 = puVar4[4];
              uVar12 = puVar6[5];
              uVar9 = puVar6[4];
              auVar14[0] = (byte)puVar4[2] ^ (byte)puVar6[2];
              auVar14[1] = *(byte *)((long)puVar4 + 0x11) ^ *(byte *)((long)puVar6 + 0x11);
              auVar14[2] = *(byte *)((long)puVar4 + 0x12) ^ *(byte *)((long)puVar6 + 0x12);
              auVar14[3] = *(byte *)((long)puVar4 + 0x13) ^ *(byte *)((long)puVar6 + 0x13);
              auVar14[4] = *(byte *)((long)puVar4 + 0x14) ^ *(byte *)((long)puVar6 + 0x14);
              auVar14[5] = *(byte *)((long)puVar4 + 0x15) ^ *(byte *)((long)puVar6 + 0x15);
              auVar14[6] = *(byte *)((long)puVar4 + 0x16) ^ *(byte *)((long)puVar6 + 0x16);
              auVar14[7] = *(byte *)((long)puVar4 + 0x17) ^ *(byte *)((long)puVar6 + 0x17);
              auVar14[8] = (byte)puVar4[3] ^ (byte)puVar6[3];
              auVar14[9] = *(byte *)((long)puVar4 + 0x19) ^ *(byte *)((long)puVar6 + 0x19);
              auVar14[10] = *(byte *)((long)puVar4 + 0x1a) ^ *(byte *)((long)puVar6 + 0x1a);
              auVar14[0xb] = *(byte *)((long)puVar4 + 0x1b) ^ *(byte *)((long)puVar6 + 0x1b);
              auVar14[0xc] = *(byte *)((long)puVar4 + 0x1c) ^ *(byte *)((long)puVar6 + 0x1c);
              auVar14[0xd] = *(byte *)((long)puVar4 + 0x1d) ^ *(byte *)((long)puVar6 + 0x1d);
              auVar14[0xe] = *(byte *)((long)puVar4 + 0x1e) ^ *(byte *)((long)puVar6 + 0x1e);
              auVar14[0xf] = *(byte *)((long)puVar4 + 0x1f) ^ *(byte *)((long)puVar6 + 0x1f);
              auVar15[0] = (byte)uVar10 ^ (byte)uVar9;
              auVar15[1] = (byte)(uVar10 >> 8) ^ (byte)(uVar9 >> 8);
              auVar15[2] = (byte)(uVar10 >> 0x10) ^ (byte)(uVar9 >> 0x10);
              auVar15[3] = (byte)(uVar10 >> 0x18) ^ (byte)(uVar9 >> 0x18);
              auVar15[4] = (byte)(uVar10 >> 0x20) ^ (byte)(uVar9 >> 0x20);
              auVar15[5] = (byte)(uVar10 >> 0x28) ^ (byte)(uVar9 >> 0x28);
              auVar15[6] = (byte)(uVar10 >> 0x30) ^ (byte)(uVar9 >> 0x30);
              auVar15[7] = (byte)(uVar10 >> 0x38) ^ (byte)(uVar9 >> 0x38);
              auVar15[8] = (byte)uVar11 ^ (byte)uVar12;
              auVar15[9] = (byte)(uVar11 >> 8) ^ (byte)(uVar12 >> 8);
              auVar15[10] = (byte)(uVar11 >> 0x10) ^ (byte)(uVar12 >> 0x10);
              auVar15[0xb] = (byte)(uVar11 >> 0x18) ^ (byte)(uVar12 >> 0x18);
              auVar15[0xc] = (byte)(uVar11 >> 0x20) ^ (byte)(uVar12 >> 0x20);
              auVar15[0xd] = (byte)(uVar11 >> 0x28) ^ (byte)(uVar12 >> 0x28);
              auVar15[0xe] = (byte)(uVar11 >> 0x30) ^ (byte)(uVar12 >> 0x30);
              auVar15[0xf] = (byte)(uVar11 >> 0x38) ^ (byte)(uVar12 >> 0x38);
              uVar11 = puVar4[7];
              uVar10 = puVar4[6];
              uVar12 = puVar6[7];
              uVar9 = puVar6[6];
              auVar14 = NEON_umaxp(auVar14,auVar15,1);
              puVar3 = puVar4 + 8;
              uVar19 = puVar4[9];
              uVar18 = *puVar3;
              puVar5 = puVar6 + 8;
              uVar21 = puVar6[9];
              uVar20 = *puVar5;
              auVar16[0] = (byte)uVar10 ^ (byte)uVar9;
              auVar16[1] = (byte)(uVar10 >> 8) ^ (byte)(uVar9 >> 8);
              auVar16[2] = (byte)(uVar10 >> 0x10) ^ (byte)(uVar9 >> 0x10);
              auVar16[3] = (byte)(uVar10 >> 0x18) ^ (byte)(uVar9 >> 0x18);
              auVar16[4] = (byte)(uVar10 >> 0x20) ^ (byte)(uVar9 >> 0x20);
              auVar16[5] = (byte)(uVar10 >> 0x28) ^ (byte)(uVar9 >> 0x28);
              auVar16[6] = (byte)(uVar10 >> 0x30) ^ (byte)(uVar9 >> 0x30);
              auVar16[7] = (byte)(uVar10 >> 0x38) ^ (byte)(uVar9 >> 0x38);
              auVar16[8] = (byte)uVar11 ^ (byte)uVar12;
              auVar16[9] = (byte)(uVar11 >> 8) ^ (byte)(uVar12 >> 8);
              auVar16[10] = (byte)(uVar11 >> 0x10) ^ (byte)(uVar12 >> 0x10);
              auVar16[0xb] = (byte)(uVar11 >> 0x18) ^ (byte)(uVar12 >> 0x18);
              auVar16[0xc] = (byte)(uVar11 >> 0x20) ^ (byte)(uVar12 >> 0x20);
              auVar16[0xd] = (byte)(uVar11 >> 0x28) ^ (byte)(uVar12 >> 0x28);
              auVar16[0xe] = (byte)(uVar11 >> 0x30) ^ (byte)(uVar12 >> 0x30);
              auVar16[0xf] = (byte)(uVar11 >> 0x38) ^ (byte)(uVar12 >> 0x38);
              auVar17[1] = (byte)(uVar18 >> 8) ^ (byte)(uVar20 >> 8);
              auVar17[0] = (byte)uVar18 ^ (byte)uVar20;
              auVar17[2] = (byte)(uVar18 >> 0x10) ^ (byte)(uVar20 >> 0x10);
              auVar17[3] = (byte)(uVar18 >> 0x18) ^ (byte)(uVar20 >> 0x18);
              auVar17[4] = (byte)(uVar18 >> 0x20) ^ (byte)(uVar20 >> 0x20);
              auVar17[5] = (byte)(uVar18 >> 0x28) ^ (byte)(uVar20 >> 0x28);
              auVar17[6] = (byte)(uVar18 >> 0x30) ^ (byte)(uVar20 >> 0x30);
              auVar17[7] = (byte)(uVar18 >> 0x38) ^ (byte)(uVar20 >> 0x38);
              auVar17[8] = (byte)uVar19 ^ (byte)uVar21;
              auVar17[9] = (byte)(uVar19 >> 8) ^ (byte)(uVar21 >> 8);
              auVar17[10] = (byte)(uVar19 >> 0x10) ^ (byte)(uVar21 >> 0x10);
              auVar17[0xb] = (byte)(uVar19 >> 0x18) ^ (byte)(uVar21 >> 0x18);
              auVar17[0xc] = (byte)(uVar19 >> 0x20) ^ (byte)(uVar21 >> 0x20);
              auVar17[0xd] = (byte)(uVar19 >> 0x28) ^ (byte)(uVar21 >> 0x28);
              auVar17[0xe] = (byte)(uVar19 >> 0x30) ^ (byte)(uVar21 >> 0x30);
              auVar17[0xf] = (byte)(uVar19 >> 0x38) ^ (byte)(uVar21 >> 0x38);
              auVar17 = NEON_umaxp(auVar16,auVar17,1);
              auVar17 = NEON_umaxp(auVar14,auVar17,1);
              auVar17 = NEON_umaxp(auVar17,auVar17,1);
              uVar11 = auVar17._0_8_;
              puVar4 = puVar3;
              puVar6 = puVar5;
              uVar10 = uVar8 - 0x40;
            } while ((0x3f < uVar8 && uVar8 - 0x40 != 0) && uVar11 == 0);
            uVar8 = uVar8 + 0x10;
            if (uVar11 == 0) goto LAB_710081ecb8;
            uVar10 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
            uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
            lVar13 = (LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) & 0xfffffffffffffff8U) - 0x30;
            uVar10 = *(ulong *)((long)puVar3 + lVar13);
            uVar11 = *(ulong *)((long)puVar5 + lVar13);
            uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
            uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
            uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
            uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
            uVar7 = 0xffffffff;
            if ((uVar11 >> 0x20 | uVar11 << 0x20) <= (uVar10 >> 0x20 | uVar10 << 0x20)) {
              uVar7 = 1;
            }
            return uVar7;
          }
          goto LAB_710081ecc8;
        }
        uVar8 = param_3 - 0x20;
        puVar3 = param_1;
        puVar5 = param_2;
        do {
          uVar10 = puVar3[2];
          uVar9 = puVar3[3];
          uVar11 = puVar5[2];
          uVar12 = puVar5[3];
          if (uVar10 != uVar11 || uVar9 != uVar12) goto LAB_710081ecc8;
          if (uVar8 < 0x11) break;
          uVar10 = puVar3[4];
          uVar9 = puVar3[5];
          uVar11 = puVar5[4];
          uVar12 = puVar5[5];
          if (uVar10 != uVar11 || uVar9 != uVar12) goto LAB_710081ecc8;
          puVar3 = puVar3 + 4;
          puVar5 = puVar5 + 4;
LAB_710081ecb8:
          bVar1 = 0x1f < uVar8;
          uVar8 = uVar8 - 0x20;
        } while (bVar1 && uVar8 != 0);
      }
      uVar10 = *(ulong *)((long)param_1 + (param_3 - 0x10));
      uVar9 = *(ulong *)((long)param_1 + (param_3 - 8));
      uVar11 = *(ulong *)((long)param_2 + (param_3 - 0x10));
      uVar12 = *(ulong *)((long)param_2 + (param_3 - 8));
    }
  }
LAB_710081ecc8:
  if (uVar10 == uVar11) {
    uVar10 = uVar9;
    uVar11 = uVar12;
  }
LAB_710081ecd4:
  uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
  uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
  uVar9 = uVar10 >> 0x20 | uVar10 << 0x20;
  uVar10 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
  uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
  uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
  uVar2 = (uint)(uVar9 != uVar10);
  uVar7 = -uVar2;
  if (uVar10 <= uVar9) {
    uVar7 = uVar2;
  }
  return uVar7;
}



// ===== FUN_710081ee20 @ 710081ee20 (size=632) =====

undefined8 FUN_710081ee20(long *param_1,long param_2,uint param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 auStack_c [4];
  long local_8;
  
  lVar6 = FUN_7100834b00();
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x48) == 0)) {
    FUN_710080d840();
  }
  if ((param_3 != 2) && ((int)param_4 < 0 || 1 < param_3)) {
    return 0xffffffff;
  }
  if (((*(uint *)((long)param_1 + 0xb4) & 1) == 0) && ((*(ushort *)(param_1 + 2) >> 9 & 1) == 0)) {
    FUN_7100836200(param_1 + 0x14);
  }
  FUN_710081c760(lVar6,param_1);
  if (param_1[0xb] != 0) {
    if (param_1[0xb] != (long)param_1 + 0x74) {
      FUN_7100816da0(lVar6);
    }
    param_1[0xb] = 0;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((uint)(int)(short)param_1[2] >> 7 & 1) == 0) {
    uVar4 = (int)(short)param_1[2] & 0xfffff35c;
    *(short *)(param_1 + 2) = (short)uVar4;
  }
  else {
    FUN_7100816da0(lVar6,param_1[3]);
    uVar4 = (int)(short)param_1[2] & 0xfffff35c;
    *(short *)(param_1 + 2) = (short)uVar4;
  }
  if (param_3 == 2) {
    uVar9 = 0;
LAB_710081f008:
    *(ushort *)(param_1 + 2) = (ushort)uVar4 | 2;
    *param_1 = (long)param_1 + 0x77;
    param_1[3] = (long)param_1 + 0x77;
    *(undefined4 *)(param_1 + 4) = 1;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    if ((*(uint *)((long)param_1 + 0xb4) & 1) != 0) {
      return uVar9;
    }
    if ((uVar4 >> 9 & 1) == 0) {
      FUN_7100836220(param_1 + 0x14);
      return uVar9;
    }
    return uVar9;
  }
  uVar3 = FUN_710081cbc0(lVar6,param_1,&local_8,auStack_c);
  *(ushort *)(param_1 + 2) = uVar3 | *(ushort *)(param_1 + 2);
  lVar7 = local_8;
  if ((param_4 == 0) || (lVar7 = param_4, param_2 == 0)) {
    param_2 = FUN_710081c1c0(lVar7);
    lVar2 = local_8;
    param_4 = lVar7;
    if ((param_2 == 0) &&
       ((local_8 == lVar7 || (param_2 = FUN_710081c1c0(local_8), param_4 = lVar2, param_2 == 0)))) {
      uVar4 = (uint)(short)param_1[2];
      uVar9 = 0xffffffff;
      goto LAB_710081f008;
    }
    *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) | 0x80;
    lVar7 = *(long *)(lVar6 + 0x48);
  }
  else {
    lVar7 = *(long *)(lVar6 + 0x48);
  }
  if (lVar7 == 0) {
    FUN_710080d840(lVar6);
  }
  uVar4 = (uint)(short)param_1[2];
  if (local_8 != param_4) {
    uVar4 = uVar4 | 0x800;
    *(short *)(param_1 + 2) = (short)uVar4;
  }
  iVar8 = (int)param_4;
  if (param_3 == 1) {
    uVar5 = uVar4 | 1;
    *param_1 = param_2;
    *(short *)(param_1 + 2) = (short)uVar5;
    param_1[3] = param_2;
    *(int *)(param_1 + 4) = iVar8;
    if ((uVar4 >> 3 & 1) != 0) goto LAB_710081f044;
LAB_710081efc4:
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  else {
    *param_1 = param_2;
    param_1[3] = param_2;
    *(int *)(param_1 + 4) = iVar8;
    uVar5 = uVar4;
    if ((uVar4 >> 3 & 1) == 0) goto LAB_710081efc4;
    if ((uVar4 & 1) == 0) {
      uVar1 = *(uint *)((long)param_1 + 0xb4);
      *(int *)((long)param_1 + 0xc) = iVar8;
      goto joined_r0x00710081efcc;
    }
LAB_710081f044:
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    *(int *)(param_1 + 5) = -iVar8;
  }
  uVar1 = *(uint *)((long)param_1 + 0xb4);
  uVar4 = uVar5;
joined_r0x00710081efcc:
  if (((uVar1 & 1) == 0) && ((uVar4 >> 9 & 1) == 0)) {
    FUN_7100836220(param_1 + 0x14);
  }
  return 0;
}



// ===== FUN_710081f0a0 @ 710081f0a0 (size=168) =====

char * FUN_710081f0a0(char *param_1,char *param_2,undefined8 *param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  if ((param_1 == (char *)0x0) && (param_1 = (char *)*param_3, (char *)*param_3 == (char *)0x0)) {
    return (char *)0x0;
  }
  do {
    pcVar2 = param_1;
    param_1 = pcVar2 + 1;
    pcVar3 = param_2;
    do {
      cVar1 = *pcVar3;
      if (cVar1 == '\0') {
        if (*pcVar2 == '\0') {
          *param_3 = 0;
          return (char *)0x0;
        }
        do {
          pcVar4 = param_1;
          pcVar3 = param_2;
          do {
            cVar1 = *pcVar3;
            if (*pcVar4 == cVar1) {
              if (*pcVar4 == '\0') {
                *param_3 = 0;
              }
              else {
                *pcVar4 = '\0';
                *param_3 = pcVar4 + 1;
              }
              return pcVar2;
            }
            pcVar3 = pcVar3 + 1;
            param_1 = pcVar4 + 1;
          } while (cVar1 != '\0');
        } while( true );
      }
      pcVar3 = pcVar3 + 1;
    } while (*pcVar2 != cVar1);
  } while (param_4 != 0);
  *param_3 = param_1;
  *pcVar2 = '\0';
  return pcVar2;
}



// ===== FUN_710081f160 @ 710081f160 (size=8) =====

void FUN_710081f160(void)

{
  FUN_710081f0a0();
  return;
}



// ===== FUN_710081f180 @ 710081f180 (size=288) =====

long FUN_710081f180(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined4 local_4;
  
  uVar1 = FUN_7100828fc0(param_1,param_3,&local_4);
  if ((uVar1 != 0) && (lVar3 = FUN_710080d700(param_1), lVar3 != 0)) {
    iVar2 = FUN_7100835bc0(param_1,param_2,local_4,0x1b6);
    if (-1 < iVar2) {
      if (((*(uint *)(lVar3 + 0xb4) & 1) == 0) && ((*(ushort *)(lVar3 + 0x10) >> 9 & 1) == 0)) {
        FUN_7100836200(lVar3 + 0xa0);
      }
      *(long *)(lVar3 + 0x30) = lVar3;
      *(code **)(lVar3 + 0x38) = FUN_7100823d00;
      *(short *)(lVar3 + 0x10) = (short)uVar1;
      *(undefined1 **)(lVar3 + 0x40) = &LAB_7100823d80;
      *(code **)(lVar3 + 0x48) = FUN_7100823e00;
      *(short *)(lVar3 + 0x12) = (short)iVar2;
      *(undefined1 **)(lVar3 + 0x50) = &LAB_7100823e60;
      if ((uVar1 >> 8 & 1) == 0) {
        uVar1 = *(uint *)(lVar3 + 0xb4);
      }
      else {
        thunk_FUN_7100828880(param_1,lVar3,0,2);
        uVar1 = *(uint *)(lVar3 + 0xb4);
      }
      if (((uVar1 & 1) == 0) && ((*(ushort *)(lVar3 + 0x10) >> 9 & 1) == 0)) {
        FUN_7100836220(lVar3 + 0xa0);
      }
      return lVar3;
    }
    FUN_710080d6c0();
    *(undefined2 *)(lVar3 + 0x10) = 0;
    FUN_710080d6e0();
  }
  return 0;
}



// ===== FUN_710081f2a0 @ 710081f2a0 (size=44) =====

void FUN_710081f2a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_710081f180(uVar1,param_1,param_2);
  return;
}



// ===== FUN_710081f2e0 @ 710081f2e0 (size=20) =====

void FUN_710081f2e0(undefined8 param_1)

{
  FUN_7100829200(0,param_1,0,0);
  return;
}



