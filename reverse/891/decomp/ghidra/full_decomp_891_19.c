// ===== FUN_710077c2e0 @ 710077c2e0 (size=332) =====

undefined8 FUN_710077c2e0(undefined8 param_1,long param_2,char param_3)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_868 [4];
  undefined4 local_864;
  undefined8 local_858;
  undefined8 local_850;
  undefined8 local_840;
  undefined8 local_830;
  undefined1 auStack_800 [2048];
  
  *(undefined1 *)(param_2 + 0x202c) = 0;
  FUN_710077ee10(param_1,auStack_800,0x800);
  if (param_3 == '\0') {
    iVar2 = FUN_7100809640(auStack_800,auStack_868);
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_710080e8e0();
      *(bool *)(param_2 + 0x202c) = *piVar3 != 2;
      return 0;
    }
  }
  else {
    iVar2 = FUN_7100835420();
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_710080e8e0();
      *(bool *)(param_2 + 0x202c) = *piVar3 != 2;
      return 0;
    }
  }
  *(undefined4 *)(param_2 + 0x2008) = local_864;
  *(undefined8 *)(param_2 + 0x2000) = local_858;
  FUN_710077ea70(param_2 + 0x2010,local_840);
  FUN_710077ea70(param_2 + 0x2020,local_850);
  FUN_710077ea70(param_2 + 0x2018,local_830);
  FUN_710077e5f0(param_2,param_1,0x800);
  *(undefined4 *)(param_2 + 0x2028) = 0;
  uVar1 = FUN_710077c190(*(undefined4 *)(param_2 + 0x2008));
  *(undefined1 *)(param_2 + 0x200c) = uVar1;
  uVar1 = FUN_710077c1a0(*(undefined4 *)(param_2 + 0x2008));
  *(undefined1 *)(param_2 + 0x200d) = uVar1;
  return 1;
}



// ===== FUN_710077c430 @ 710077c430 (size=336) =====

void FUN_710077c430(undefined1 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_c28 [2304];
  undefined8 auStack_328 [16];
  undefined8 auStack_2a8 [4];
  undefined8 uStack_288;
  undefined8 auStack_280 [9];
  undefined8 *local_238;
  long lStack_230;
  long local_228;
  long lStack_220;
  undefined8 local_218;
  undefined1 local_210;
  undefined1 auStack_208 [512];
  undefined8 local_8;
  
  puVar4 = auStack_c28;
  puVar3 = param_1;
  do {
    puVar7 = puVar3;
    puVar1 = (undefined8 *)(puVar4 + (-(long)puVar4 & 0x3f));
    *(undefined8 **)(puVar4 + 0xf0) = puVar1;
    *(undefined8 **)(puVar4 + 0xf8) = puVar1 + 0x10;
    *(undefined8 **)(puVar4 + 0x100) = puVar1 + 0x14;
    *(undefined8 **)(puVar4 + 0x108) = puVar1 + 0x15;
    if (puVar4 != puVar7) {
      puVar6 = *(undefined8 **)(puVar7 + 0xf0);
      uVar2 = puVar7[0x118];
      uVar8 = *(undefined8 *)(puVar7 + 0x110);
      uVar9 = *puVar6;
      uVar11 = puVar6[3];
      uVar10 = puVar6[2];
      puVar1[1] = puVar6[1];
      *puVar1 = uVar9;
      puVar1[3] = uVar11;
      puVar1[2] = uVar10;
      uVar9 = puVar6[4];
      uVar11 = puVar6[7];
      uVar10 = puVar6[6];
      puVar1[5] = puVar6[5];
      puVar1[4] = uVar9;
      puVar1[7] = uVar11;
      puVar1[6] = uVar10;
      uVar9 = puVar6[8];
      uVar11 = puVar6[0xb];
      uVar10 = puVar6[10];
      puVar1[9] = puVar6[9];
      puVar1[8] = uVar9;
      puVar1[0xb] = uVar11;
      puVar1[10] = uVar10;
      uVar9 = puVar6[0xc];
      uVar11 = puVar6[0xf];
      uVar10 = puVar6[0xe];
      puVar1[0xd] = puVar6[0xd];
      puVar1[0xc] = uVar9;
      puVar1[0xf] = uVar11;
      puVar1[0xe] = uVar10;
      uVar9 = puVar6[0x10];
      uVar11 = puVar6[0x13];
      uVar10 = puVar6[0x12];
      puVar1[0x11] = puVar6[0x11];
      puVar1[0x10] = uVar9;
      puVar1[0x13] = uVar11;
      puVar1[0x12] = uVar10;
      uVar9 = puVar6[0x14];
      puVar1[0x15] = puVar6[0x15];
      puVar1[0x14] = uVar9;
      *(undefined8 *)(puVar4 + 0x110) = uVar8;
      puVar4[0x118] = uVar2;
    }
    puVar4 = puVar4 + 0x120;
    puVar3 = puVar7 + 0x120;
  } while (puVar7 + 0x120 != param_1 + 0x900);
  puVar6 = *(undefined8 **)(puVar7 + 0x210);
  uVar5 = -(long)auStack_328 & 0x3f;
  uVar8 = *(undefined8 *)(puVar7 + 0x230);
  puVar1 = (undefined8 *)((long)auStack_328 + uVar5);
  lStack_230 = (long)auStack_2a8 + uVar5;
  local_228 = (long)&uStack_288 + uVar5;
  uVar2 = puVar7[0x238];
  lStack_220 = (long)auStack_280 + uVar5;
  uVar9 = *puVar6;
  uVar11 = puVar6[3];
  uVar10 = puVar6[2];
  local_238 = puVar1;
  *(undefined8 *)((long)auStack_328 + uVar5 + 8) = puVar6[1];
  *puVar1 = uVar9;
  *(undefined8 *)((long)auStack_328 + uVar5 + 0x18) = uVar11;
  *(undefined8 *)((long)auStack_328 + uVar5 + 0x10) = uVar10;
  uVar9 = puVar6[4];
  uVar11 = puVar6[7];
  uVar10 = puVar6[6];
  *(undefined8 *)((long)auStack_328 + uVar5 + 0x28) = puVar6[5];
  *(undefined8 *)((long)auStack_328 + uVar5 + 0x20) = uVar9;
  *(undefined8 *)((long)auStack_328 + uVar5 + 0x38) = uVar11;
  *(undefined8 *)((long)auStack_328 + uVar5 + 0x30) = uVar10;
  uVar9 = puVar6[8];
  uVar11 = puVar6[0xb];
  uVar10 = puVar6[10];
  *(undefined8 *)((long)auStack_328 + uVar5 + 0x48) = puVar6[9];
  *(undefined8 *)((long)auStack_328 + uVar5 + 0x40) = uVar9;
  *(undefined8 *)((long)auStack_328 + uVar5 + 0x58) = uVar11;
  *(undefined8 *)((long)auStack_328 + uVar5 + 0x50) = uVar10;
  uVar9 = puVar6[0xc];
  uVar11 = puVar6[0xf];
  uVar10 = puVar6[0xe];
  *(undefined8 *)((long)auStack_328 + uVar5 + 0x68) = puVar6[0xd];
  *(undefined8 *)((long)auStack_328 + uVar5 + 0x60) = uVar9;
  *(undefined8 *)((long)auStack_328 + uVar5 + 0x78) = uVar11;
  *(undefined8 *)((long)auStack_328 + uVar5 + 0x70) = uVar10;
  uVar9 = puVar6[0x10];
  uVar11 = puVar6[0x13];
  uVar10 = puVar6[0x12];
  *(undefined8 *)((long)auStack_2a8 + uVar5 + 8) = puVar6[0x11];
  *(undefined8 *)((long)auStack_2a8 + uVar5) = uVar9;
  *(undefined8 *)((long)auStack_2a8 + uVar5 + 0x18) = uVar11;
  *(undefined8 *)((long)auStack_2a8 + uVar5 + 0x10) = uVar10;
  uVar9 = puVar6[0x14];
  *(undefined8 *)((long)auStack_280 + uVar5) = puVar6[0x15];
  *(undefined8 *)((long)&uStack_288 + uVar5) = uVar9;
  local_218 = uVar8;
  local_210 = uVar2;
  FUN_710080f900(auStack_208,param_1 + 0xa20,0x200);
  local_8 = *(undefined8 *)(param_1 + 0xc20);
  FUN_710078db40(auStack_c28,param_2 + 4);
  return;
}



// ===== FUN_710077c580 @ 710077c580 (size=56) =====

void FUN_710077c580(int *param_1,int param_2)

{
  *param_1 = param_2;
  if (1 < param_2 - 1U) {
    if (param_2 == 3) {
      param_1[3] = -0x4fcd2f39;
      param_1[4] = 0x257e918a;
      param_1[1] = 0x17890edd;
      param_1[2] = 0x433f9376;
      param_1[7] = 0x1580c8ca;
      param_1[8] = 0x4fcaf200;
      param_1[5] = -0x5675e08c;
      param_1[6] = -0x1eedd35f;
    }
    return;
  }
  param_1[1] = 0;
  return;
}



// ===== FUN_710077c5c0 @ 710077c5c0 (size=196) =====

bool FUN_710077c5c0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  
  iVar1 = *param_1;
  bVar3 = true;
  if (iVar1 != 0) {
    iVar2 = *param_2;
    bVar3 = true;
    if (iVar2 != 0) {
      if ((iVar2 == 1 && iVar1 == 1) || (iVar1 == 2 && iVar2 == 2)) {
        return param_1[1] == param_2[1];
      }
      bVar3 = iVar2 == 3 && iVar1 == 3;
      if (bVar3) {
        if ((((*(long *)(param_1 + 1) == *(long *)(param_2 + 1)) &&
             (*(long *)(param_1 + 3) == *(long *)(param_2 + 3))) &&
            (*(long *)(param_1 + 5) == *(long *)(param_2 + 5))) &&
           (*(long *)(param_1 + 7) == *(long *)(param_2 + 7))) {
          bVar4 = 0;
        }
        else {
          bVar4 = 1;
        }
        return (bool)(bVar4 ^ 1);
      }
    }
  }
  return bVar3;
}



// ===== FUN_710077c690 @ 710077c690 (size=12) =====

void FUN_710077c690(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}



// ===== FUN_710077c6a0 @ 710077c6a0 (size=80) =====

void FUN_710077c6a0(long param_1)

{
  FUN_710077e260(param_1 + 4);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_710077e260(*(long *)(param_1 + 8),0xc28);
    if (*(long *)(param_1 + 8) != 0) {
      thunk_FUN_710081c200(*(long *)(param_1 + 8),0xc28);
      return;
    }
  }
  return;
}



// ===== FUN_710077c6f0 @ 710077c6f0 (size=212) =====

void FUN_710077c6f0(int *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 2) == 0) {
    lVar3 = FUN_71007af5c0(0xc28);
    lVar1 = lVar3 + 0x900;
    lVar4 = lVar3;
    do {
      lVar2 = (-lVar4 & 0x3fU) + lVar4;
      *(long *)(lVar4 + 0xf0) = lVar2;
      *(long *)(lVar4 + 0xf8) = lVar2 + 0x80;
      *(long *)(lVar4 + 0x100) = lVar2 + 0xa0;
      *(long *)(lVar4 + 0x108) = lVar2 + 0xa8;
      lVar4 = lVar4 + 0x120;
    } while (lVar1 != lVar4);
    *(long *)(param_1 + 2) = lVar3;
    lVar1 = lVar1 + (-lVar1 & 0x3fU);
    *(long *)(lVar3 + 0x9f0) = lVar1;
    *(long *)(lVar3 + 0x9f8) = lVar1 + 0x80;
    *(long *)(lVar3 + 0xa00) = lVar1 + 0xa0;
    *(long *)(lVar3 + 0xa08) = lVar1 + 0xa8;
  }
  *param_1 = param_2;
  if (param_2 != 1) {
    if (param_2 == 2) {
      param_1[1] = -1;
    }
    else if (param_2 == 3) {
      FUN_710078d930(*(undefined8 *)(param_1 + 2));
      return;
    }
    return;
  }
  param_1[1] = 0;
  return;
}



// ===== FUN_710077c7d0 @ 710077c7d0 (size=160) =====

void FUN_710077c7d0(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *param_1;
  if (iVar1 == 1) {
    uVar2 = FUN_710078e4c0((short)param_1[1]);
    iVar1 = *param_1;
    param_1[1] = uVar2 & 0xffff;
  }
  if (iVar1 == 2) {
    iVar3 = FUN_710078e3a0(param_1[1],param_2,param_3);
    iVar1 = *param_1;
    param_1[1] = iVar3;
  }
  if (iVar1 == 3) {
    FUN_710078da10(*(undefined8 *)(param_1 + 2),param_2,param_3);
    return;
  }
  return;
}



// ===== FUN_710077c870 @ 710077c870 (size=72) =====

void FUN_710077c870(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_2 = iVar1;
  if (iVar1 == 1) {
    param_2[1] = param_1[1];
  }
  iVar1 = *param_1;
  if (iVar1 == 2) {
    param_2[1] = ~param_1[1];
    iVar1 = *param_1;
  }
  if (iVar1 != 3) {
    return;
  }
  FUN_710077c430(*(undefined8 *)(param_1 + 2));
  return;
}



// ===== FUN_710077c8c0 @ 710077c8c0 (size=32) =====

uint FUN_710077c8c0(int *param_1)

{
  if (*param_1 != 2) {
    return 0;
  }
  return ~param_1[1];
}



// ===== FUN_710077c8e0 @ 710077c8e0 (size=80) =====

void FUN_710077c8e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_28 [40];
  
  FUN_710077c870(param_1,auStack_28);
  if (param_3 != 0) {
    FUN_710078f730(auStack_28,param_3);
  }
  FUN_710077c5c0(auStack_28,param_2);
  return;
}



// ===== FUN_710077c930 @ 710077c930 (size=468) =====

bool FUN_710077c930(int *param_1,int *param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  
  iVar4 = *param_2;
LAB_710077c950:
  iVar1 = *param_1;
  piVar2 = param_1;
  do {
    param_1 = piVar2 + 1;
    if (iVar1 == 0x2a) {
      if (*param_1 == 0) {
        return true;
      }
      if (*param_1 == 0x2e) {
        if ((param_1[1] == 0x2a) && (param_1[2] == 0)) {
          return true;
        }
        piVar5 = (int *)FUN_7100816c20(param_2,0x2e);
        if (param_1[1] == 0) {
          if (piVar5 != (int *)0x0) {
            return piVar5[1] == 0;
          }
          return true;
        }
        if (piVar5 == (int *)0x0) {
          iVar4 = *param_2;
        }
        else {
          lVar6 = FUN_71008230c0(param_1,&DAT_7100995200);
          if (lVar6 == 0) {
            lVar6 = FUN_7100816c20(piVar5 + 1,0x2e);
            if (lVar6 == 0) {
              if (param_3 == '\0') {
                iVar4 = thunk_FUN_710080c900(piVar2 + 2,piVar5 + 1);
              }
              else {
                iVar4 = FUN_710080c900();
              }
              return iVar4 == 0;
            }
          }
          iVar4 = *piVar5;
          param_2 = piVar5;
        }
      }
      while( true ) {
        if (iVar4 == 0) {
          return false;
        }
        cVar3 = FUN_710077c930(param_1,param_2,param_3);
        if (cVar3 != '\0') break;
        iVar4 = param_2[1];
        param_2 = param_2 + 1;
      }
      return true;
    }
    if (iVar1 == 0x3f) {
      if (iVar4 == 0) {
        return false;
      }
      iVar4 = param_2[1];
    }
    else {
      if (iVar1 == 0) {
        return iVar4 == 0;
      }
      if (iVar1 != iVar4) break;
      iVar4 = param_2[1];
    }
    param_2 = param_2 + 1;
    iVar1 = *param_1;
    piVar2 = param_1;
  } while( true );
  if (iVar1 != 0x2e) {
    return false;
  }
  if ((iVar4 != 0x5c && iVar4 != 0) && iVar4 != 0x2e) {
    return false;
  }
  goto LAB_710077c950;
}



// ===== FUN_710077cb10 @ 710077cb10 (size=688) =====

ulong FUN_710077cb10(undefined8 param_1,long param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  int local_4000 [2048];
  undefined1 auStack_2000 [8192];
  
  uVar4 = param_3 & 0xffff;
  if ((param_3 & 0xffff) == 0) {
    uVar6 = FUN_710077cfa0();
    uVar7 = FUN_710077cfa0(param_2);
    goto LAB_710077cc0c;
  }
  lVar5 = FUN_710081f600();
  if (uVar4 - 2 < 3) {
    FUN_710077d340(param_1,local_4000,0x800);
    FUN_710077d340(param_2,auStack_2000,0x800);
    if ((uVar4 - 2 & 0xfffffffd) == 0) {
      if ((int)param_3 < 0) {
        iVar3 = FUN_710080c900();
      }
      else {
        iVar3 = thunk_FUN_710080c900(local_4000,auStack_2000);
      }
      if (iVar3 != 0) {
        return 0;
      }
    }
    if (uVar4 == 3) goto LAB_710077cd54;
  }
  else {
    iVar3 = FUN_71008141a0(param_1,param_2,lVar5);
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_2 + lVar5 * 4);
      uVar1 = (uint)((iVar3 == 0x5c || iVar3 == 0x2f) || iVar3 == 0);
      if (uVar1 != 0) {
        return (ulong)uVar1;
      }
    }
    if (uVar4 == 1) {
      return 0;
    }
    FUN_710077d340(param_1,local_4000,0x800);
    FUN_710077d340(param_2,auStack_2000,0x800);
    if (uVar4 == 3) {
LAB_710077cd54:
      uVar4 = FUN_710077c930(param_1,param_2,param_3 >> 0x1f);
      return (ulong)(uVar4 & 0xff);
    }
    if (1 < uVar4 - 5) goto LAB_710077cba8;
    cVar2 = FUN_710077cf50(local_4000);
    if (cVar2 != '\0') goto LAB_710077cd54;
    if (uVar4 == 5) {
      if (local_4000[0] == 0) {
        uVar6 = FUN_710077cfa0(param_1);
        uVar7 = FUN_710077cfa0(param_2);
        goto LAB_710077cc0c;
      }
LAB_710077cce8:
      uVar6 = FUN_710081f600(local_4000);
      iVar3 = FUN_71008141a0(local_4000,auStack_2000,uVar6);
    }
    else {
      cVar2 = FUN_710077cf50(param_1);
      if (cVar2 != '\0') {
        if (local_4000[0] == 0) goto LAB_710077cba8;
        goto LAB_710077cce8;
      }
      if ((int)param_3 < 0) {
        iVar3 = FUN_710080c900();
      }
      else {
        iVar3 = thunk_FUN_710080c900(local_4000,auStack_2000);
      }
    }
    if (iVar3 != 0) {
      return 0;
    }
  }
LAB_710077cba8:
  uVar6 = FUN_710077cfa0(param_1);
  uVar7 = FUN_710077cfa0(param_2);
  if (uVar4 == 2) {
    if ((int)param_3 < 0) {
      iVar3 = FUN_710080c900(uVar6);
    }
    else {
      iVar3 = thunk_FUN_710080c900();
    }
    return (ulong)(iVar3 == 0);
  }
LAB_710077cc0c:
  uVar8 = FUN_710077c930(uVar6,uVar7,param_3 >> 0x1f);
  return uVar8;
}



// ===== FUN_710077cdc0 @ 710077cdc0 (size=52) =====

void FUN_710077cdc0(long param_1)

{
  FUN_7100808340(param_1,0,0x14830);
  FUN_710077e2a0(param_1 + 0xc030);
  return;
}



// ===== FUN_710077ce00 @ 710077ce00 (size=112) =====

void FUN_710077ce00(long param_1)

{
  FUN_7100808340(param_1,0,0x14830);
  *(undefined8 *)(param_1 + 0x10) = 0x2000000;
  *(undefined4 *)(param_1 + 0x107f0) = 2;
  *(undefined8 *)(param_1 + 0xe710) = 0x7fffffff7fffffff;
  *(undefined8 *)(param_1 + 0xe718) = 0x7fffffff7fffffff;
  *(undefined8 *)(param_1 + 0xe244) = 0x200000003;
  *(undefined4 *)(param_1 + 0x4018) = 1;
  return;
}



// ===== FUN_710077ce70 @ 710077ce70 (size=112) =====

void FUN_710077ce70(long param_1)

{
  FUN_710077e4d0(param_1 + 0xc030);
  *(undefined8 *)(param_1 + 0xe280) = 0;
  *(undefined8 *)(param_1 + 0xe288) = 0;
  *(undefined8 *)(param_1 + 58000) = 0;
  *(undefined8 *)(param_1 + 0xe298) = 0;
  *(undefined1 *)(param_1 + 0xe2a0) = 0;
  *(undefined8 *)(param_1 + 0xe6d0) = 0;
  *(undefined8 *)(param_1 + 0xe6d8) = 0;
  *(undefined8 *)(param_1 + 0xe6e0) = 0;
  *(undefined8 *)(param_1 + 0xe6f0) = 0;
  *(undefined8 *)(param_1 + 0xe6f8) = 0;
  *(undefined8 *)(param_1 + 0xe700) = 0;
  FUN_710077ce00(param_1);
  return;
}



// ===== FUN_710077cf20 @ 710077cf20 (size=48) =====

long FUN_710077cf20(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = FUN_710081f600();
  lVar1 = param_1 + lVar2 * 4 + -4;
  if (lVar2 == 0) {
    lVar1 = param_1;
  }
  return lVar1;
}



// ===== FUN_710077cf50 @ 710077cf50 (size=48) =====

bool FUN_710077cf50(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_71008230c0(param_1,&DAT_7100995200);
    return lVar1 != 0;
  }
  return false;
}



// ===== FUN_710077cf80 @ 710077cf80 (size=12) =====

bool FUN_710077cf80(int param_1)

{
  return param_1 == 0x2f;
}



// ===== FUN_710077cf90 @ 710077cf90 (size=8) =====

undefined8 FUN_710077cf90(void)

{
  return 0;
}



// ===== FUN_710077cfa0 @ 710077cfa0 (size=132) =====

int * FUN_710077cfa0(int *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_710081f600();
  if (-1 < iVar2 + -1) {
    lVar3 = (long)(iVar2 + -1);
    do {
      cVar1 = FUN_710077cf80(param_1[lVar3]);
      if (cVar1 != '\0') {
        return param_1 + lVar3 + 1;
      }
      lVar3 = lVar3 + -1;
    } while ((int)lVar3 != -1);
  }
  if ((*param_1 != 0) && (cVar1 = FUN_710077cf90(param_1[1]), cVar1 != '\0')) {
    return param_1 + 2;
  }
  return param_1;
}



// ===== FUN_710077d030 @ 710077d030 (size=60) =====

void FUN_710077d030(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = FUN_710077cfa0();
  FUN_710077e5f0(lVar1,param_2,param_3 - (lVar1 - param_1 >> 2));
  return;
}



// ===== FUN_710077d070 @ 710077d070 (size=32) =====

void FUN_710077d070(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_710077cfa0();
    FUN_710080e520(uVar1,0x2e);
    return;
  }
  return;
}



// ===== FUN_710077d090 @ 710077d090 (size=136) =====

void FUN_710077d090(int *param_1,long param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*param_1 == 0) {
    return;
  }
  puVar1 = (undefined4 *)FUN_710077d070();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (param_2 != 0) {
    FUN_710077e630(param_1,&DAT_7100995210,param_3);
    FUN_710077e630(param_1,param_2,param_3);
    return;
  }
  return;
}



// ===== FUN_710077d120 @ 710077d120 (size=452) =====

int * FUN_710077d120(int *param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined1 auStack_2000 [8192];
  
  if (*param_1 != 0) {
    piVar5 = param_1 + 4;
LAB_710077d158:
    do {
      cVar2 = FUN_710077cf80();
      iVar4 = piVar5[-3];
      if ((cVar2 != '\0') && (iVar4 == 0x2e)) {
        if (piVar5[-2] != 0x2e) {
          piVar5 = piVar5 + 1;
          goto LAB_710077d158;
        }
        cVar2 = FUN_710077cf80(piVar5[-1]);
        iVar4 = piVar5[-3];
        if (cVar2 != '\0') {
          param_1 = piVar5;
        }
      }
      piVar5 = piVar5 + 1;
    } while (iVar4 != 0);
    iVar4 = *param_1;
    piVar5 = param_1;
    while (param_1 = piVar5, iVar4 != 0) {
      cVar2 = FUN_710077cf90(piVar5[1]);
      piVar8 = piVar5 + 2;
      if (cVar2 == '\0') {
        piVar8 = piVar5;
      }
      iVar4 = *piVar8;
      piVar6 = piVar8;
      if (iVar4 == 0x5c) {
        piVar1 = piVar8;
        if (piVar8[1] != 0x5c) goto LAB_710077d1c0;
        lVar3 = FUN_7100816c20(piVar8 + 2,0x5c);
        if ((lVar3 == 0) || (lVar3 = FUN_7100816c20(lVar3 + 4,0x5c), lVar3 == 0)) {
          iVar4 = *piVar8;
        }
        else {
          iVar4 = *(int *)(lVar3 + 4);
          piVar6 = (int *)(lVar3 + 4);
          piVar8 = (int *)(lVar3 + 4);
        }
      }
      while (piVar1 = piVar6, iVar4 != 0) {
LAB_710077d1c0:
        piVar6 = piVar1 + 1;
        cVar2 = FUN_710077cf80(iVar4);
        piVar7 = piVar6;
        if ((cVar2 == '\0') && (piVar7 = piVar8, *piVar1 != 0x2e)) break;
        piVar8 = piVar7;
        iVar4 = *piVar6;
      }
      if (piVar5 == piVar8) {
        if (((*piVar5 == 0x2e) && (piVar5[1] == 0x2e)) && (param_1 = piVar5 + 2, piVar5[2] != 0)) {
          param_1 = piVar5;
        }
        break;
      }
      piVar5 = piVar8;
      iVar4 = *piVar8;
    }
  }
  if (param_2 != 0) {
    FUN_710077e5f0(auStack_2000,param_1,0x800);
    FUN_710077e5f0(param_2,auStack_2000,param_3);
  }
  return param_1;
}



// ===== FUN_710077d2f0 @ 710077d2f0 (size=80) =====

void FUN_710077d2f0(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = FUN_710081f600();
  if (((lVar2 != 0) && (lVar1 = param_1 + lVar2 * 4, *(int *)(lVar1 + -4) != 0x2f)) &&
     (lVar2 + 1U < param_2)) {
    *(undefined4 *)(param_1 + lVar2 * 4) = 0x2f;
    *(undefined4 *)(lVar1 + 4) = 0;
  }
  return;
}



// ===== FUN_710077d340 @ 710077d340 (size=108) =====

void FUN_710077d340(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  if (param_3 == 0) {
    return;
  }
  uVar2 = param_3 - 1;
  lVar1 = FUN_710077cfa0();
  if ((ulong)(lVar1 - param_1 >> 2) <= uVar2) {
    lVar1 = FUN_710077cfa0(param_1);
    uVar2 = lVar1 - param_1 >> 2;
  }
  FUN_710080ee60(param_2,param_1,uVar2);
  *(undefined4 *)(param_2 + uVar2 * 4) = 0;
  return;
}



// ===== FUN_710077d3b0 @ 710077d3b0 (size=108) =====

void FUN_710077d3b0(long param_1)

{
  char cVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_710077cfa0();
  if (((undefined4 *)(param_1 + 8) <= puVar2) &&
     ((cVar1 = FUN_710077cf90(*(undefined4 *)(param_1 + 4)), cVar1 == '\0' ||
      ((undefined4 *)(param_1 + 0x10) <= puVar2)))) {
    puVar2[-1] = 0;
    return;
  }
  *puVar2 = 0;
  return;
}



// ===== FUN_710077d420 @ 710077d420 (size=244) =====

int * FUN_710077d420(void)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  
  piVar4 = (int *)FUN_710077cfa0();
  if (*piVar4 == 0) {
    return piVar4;
  }
  lVar5 = FUN_710081f600();
  piVar7 = piVar4 + lVar5;
  do {
    piVar6 = piVar7 + -1;
    piVar7 = piVar7 + -1;
    bVar2 = FUN_710077e560(*piVar6);
    piVar6 = piVar7;
  } while ((piVar4 < piVar7 & (bVar2 ^ 1)) != 0);
  do {
    cVar3 = FUN_710077e560(*piVar6);
    if (cVar3 == '\0') {
      if (piVar6 <= piVar4) {
        return piVar7;
      }
      while( true ) {
        if (*piVar6 == 0x2e) {
          return piVar7;
        }
        cVar3 = FUN_710077e560();
        if (cVar3 != '\0') break;
        piVar6 = piVar6 + -1;
        if (piVar6 <= piVar4) {
          return piVar7;
        }
      }
      piVar4 = (int *)FUN_7100816c20(piVar4,0x2e);
      if (piVar4 == (int *)0x0 || piVar6 <= piVar4) {
        piVar6 = piVar7;
      }
      return piVar6;
    }
    bVar1 = piVar4 < piVar6;
    piVar6 = piVar6 + -1;
  } while (bVar1);
  return piVar7;
}



// ===== FUN_710077d520 @ 710077d520 (size=504) =====

void FUN_710077d520(int *param_1,ulong param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  int *piVar5;
  
  param_2 = param_2 & 0xffffffff;
  piVar3 = (int *)FUN_710077d070();
  if (piVar3 == (int *)0x0) {
    FUN_710077e630(param_1,&DAT_7100995258,param_2);
    piVar3 = (int *)FUN_710077d070(param_1);
    if (piVar3 == (int *)0x0) goto LAB_710077d578;
  }
  else if (((piVar3[1] == 0) || (iVar2 = FUN_710077f540(piVar3,&DAT_71009952a0), iVar2 == 0)) ||
          (iVar2 = FUN_710077f540(piVar3,&DAT_71009952b8), iVar2 == 0)) {
    FUN_710077e5f0(piVar3,&DAT_7100995258,param_2 - ((long)piVar3 - (long)param_1 >> 2));
  }
  if ((*piVar3 == 0x2e) && (piVar3[1] != 0)) {
    if (param_3 == '\0') {
      piVar3 = (int *)FUN_710077d420(param_1);
      do {
        piVar5 = piVar3;
        if (*piVar5 != 0x39) {
          *piVar5 = *piVar5 + 1;
          return;
        }
        piVar3 = piVar5 + -1;
        *piVar5 = 0x30;
      } while ((param_1 <= piVar3) && (cVar1 = FUN_710077e560(*piVar3), cVar1 != '\0'));
      lVar4 = FUN_710081f600(param_1);
      if (piVar3 != param_1 + lVar4) {
        FUN_710080f900(piVar5 + 1,piVar5,(long)(param_1 + lVar4) - (long)piVar3);
      }
      *piVar5 = 0x31;
      return;
    }
    cVar1 = FUN_710077e560(piVar3[2]);
    if ((cVar1 != '\0') && (cVar1 = FUN_710077e560(piVar3[3]), cVar1 != '\0')) {
      lVar4 = FUN_710081f600(piVar3);
      lVar4 = lVar4 + -1;
      piVar5 = piVar3 + lVar4;
      iVar2 = piVar3[lVar4] + 1;
      piVar3[lVar4] = iVar2;
      while( true ) {
        if (iVar2 != 0x3a) {
          return;
        }
        if ((piVar5 <= param_1) || (piVar5[-1] == 0x2e)) break;
        *piVar5 = 0x30;
        piVar5 = piVar5 + -1;
        iVar2 = *piVar5 + 1;
        *piVar5 = iVar2;
      }
      *piVar5 = 0x61;
      return;
    }
    FUN_710077e5f0(piVar3 + 2,&DAT_71009952d0,(param_2 - ((long)piVar3 - (long)param_1 >> 2)) + -2);
    return;
  }
LAB_710077d578:
  *param_1 = 0;
  return;
}



// ===== FUN_710077d720 @ 710077d720 (size=52) =====

bool FUN_710077d720(int *param_1)

{
  long lVar1;
  
  if (*param_1 == 0) {
    return false;
  }
  lVar1 = FUN_71008230c0(param_1,&DAT_71009952e0);
  return lVar1 == 0;
}



// ===== FUN_710077d760 @ 710077d760 (size=136) =====

void FUN_710077d760(uint *param_1,char param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *param_1;
  do {
    if (uVar1 == 0) {
      return;
    }
    if (param_2 == '\0') {
      lVar2 = FUN_7100816c20(&DAT_7100995300);
      if (lVar2 != 0) goto LAB_710077d7a8;
    }
    else {
      lVar2 = FUN_7100816c20(&DAT_71009952e0);
      if ((lVar2 != 0) || (*param_1 < 0x20)) {
LAB_710077d7a8:
        *param_1 = 0x5f;
      }
    }
    param_1 = param_1 + 1;
    uVar1 = *param_1;
  } while( true );
}



// ===== FUN_710077d7f0 @ 710077d7f0 (size=64) =====

void FUN_710077d7f0(long param_1,undefined1 *param_2,long param_3)

{
  long lVar1;
  char cVar2;
  
  lVar1 = 0;
  if (param_3 != 1) {
    do {
      cVar2 = *(char *)(param_1 + lVar1);
      if (cVar2 == '\0') break;
      if (cVar2 == '\\') {
        cVar2 = '/';
      }
      param_2[lVar1] = cVar2;
      lVar1 = lVar1 + 1;
    } while (lVar1 != param_3 + -1);
    param_2 = param_2 + lVar1;
  }
  *param_2 = 0;
  return;
}



// ===== FUN_710077d830 @ 710077d830 (size=84) =====

void FUN_710077d830(long param_1,undefined4 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0;
  if (param_3 != 1) {
    while( true ) {
      lVar3 = lVar2;
      iVar1 = *(int *)(param_1 + lVar3 * 4);
      if (iVar1 == 0) break;
      if (iVar1 == 0x5c) {
        iVar1 = 0x2f;
      }
      param_2[lVar3] = iVar1;
      lVar2 = lVar3 + 1;
      if (lVar3 + 1 == param_3 + -1) {
        param_2[lVar3 + 1] = 0;
        return;
      }
    }
    param_2 = param_2 + lVar3;
  }
  *param_2 = 0;
  return;
}



// ===== FUN_710077d890 @ 710077d890 (size=8) =====

void FUN_710077d890(undefined4 *param_1)

{
  FUN_710077cf80(*param_1);
  return;
}



// ===== FUN_710077d8a0 @ 710077d8a0 (size=208) =====

void FUN_710077d8a0(int *param_1,undefined4 *param_2,long param_3)

{
  char cVar1;
  long lVar2;
  undefined1 local_800 [2048];
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    cVar1 = FUN_710077d890();
    if (cVar1 != '\0') {
      *param_2 = 0;
      FUN_710077e630(param_2,param_1,param_3);
      return;
    }
    lVar2 = FUN_7100833da0(local_800,0x800);
    if (lVar2 == 0) {
      local_800[0] = 0;
    }
    FUN_710077f030(local_800,param_2,param_3);
    FUN_710077d2f0(param_2,param_3);
    FUN_710077e630(param_2,param_1,param_3);
    return;
  }
  if (param_3 != 0) {
    *param_2 = 0;
  }
  return;
}



// ===== FUN_710077d970 @ 710077d970 (size=56) =====

void FUN_710077d970(undefined4 *param_1)

{
  char cVar1;
  
  cVar1 = FUN_710077d890();
  if (cVar1 != '\0') {
    return;
  }
  FUN_710077cf80(*param_1);
  return;
}



// ===== FUN_710077d9b0 @ 710077d9b0 (size=76) =====

undefined8 FUN_710077d9b0(undefined8 param_1,char param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined4 *)FUN_710080e520(param_1,0x3b);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = FUN_710077f6d0(puVar1 + 1);
    if (param_2 != '\0') {
      *puVar1 = 0;
    }
    return uVar2;
  }
  return 0;
}



// ===== FUN_710077da00 @ 710077da00 (size=112) =====

int * FUN_710077da00(long param_1,int *param_2,int *param_3,long param_4)

{
  if ((param_2 == (int *)0x0) || (*param_2 == 0)) {
    if (param_1 == 0) {
      *param_3 = 0;
    }
    else {
      FUN_710077f030(param_1,param_3,param_4);
    }
  }
  else if (param_2 != param_3) {
    FUN_710080ee60(param_3,param_2,param_4);
  }
  if (param_4 != 0) {
    param_3[param_4 + -1] = 0;
  }
  return param_3;
}



// ===== FUN_710077da70 @ 710077da70 (size=76) =====

void FUN_710077da70(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 1;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x98) = 0;
  param_1[0x9a] = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined2 *)(param_1 + 0x108) = 0;
  return;
}



// ===== FUN_710077dac0 @ 710077dac0 (size=128) =====

void FUN_710077dac0(long param_1)

{
  undefined8 uVar1;
  
  FUN_710077c690(param_1 + 0xd8);
  FUN_710077c690(param_1 + 0xe8);
  FUN_710077c690(param_1 + 0xf8);
  uVar1 = FUN_71007af5c0(0x18d0);
  FUN_710078f830();
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  uVar1 = FUN_71007af5c0(0x18d0);
  FUN_710078f830();
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  FUN_710077da70(param_1);
  return;
}



// ===== FUN_710077db90 @ 710077db90 (size=104) =====

void FUN_710077db90(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x80);
  if (lVar1 != 0) {
    FUN_710078f9f0(lVar1);
    thunk_FUN_710081c200(lVar1,0x18d0);
  }
  lVar1 = *(long *)(param_1 + 0x88);
  if (lVar1 != 0) {
    FUN_710078f9f0(lVar1);
    thunk_FUN_710081c200(lVar1,0x18d0);
  }
  FUN_710077c6a0(param_1 + 0xf8);
  FUN_710077c6a0(param_1 + 0xe8);
  FUN_710077c6a0(param_1 + 0xd8);
  return;
}



// ===== FUN_710077dc00 @ 710077dc00 (size=168) =====

void FUN_710077dc00(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x50) == '\0') {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x58);
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x3a20);
    param_2 = param_2 + *(long *)(param_1 + 0xc0);
    iVar1 = FUN_710077e500(param_2,param_3);
    if ((*(char *)(lVar3 + 0xe254) != '\0') || (iVar1 == *(int *)(param_1 + 0x90))) {
      return;
    }
    FUN_710077edc0(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(lVar2 + 0x74c8),param_2,param_3);
    *(int *)(param_1 + 0x90) = iVar1;
  }
  return;
}



// ===== FUN_710077dcb0 @ 710077dcb0 (size=652) =====

uint FUN_710077dcb0(char *param_1,long param_2,ulong param_3)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  
  uVar7 = 0;
  uVar8 = 0;
  lVar9 = param_2;
  uVar11 = param_3 & 0xfffffffffffffff0;
  if (param_1[0x109] == '\0') {
    uVar11 = param_3;
  }
  do {
    iVar2 = (int)uVar7;
    plVar10 = *(long **)(param_1 + 0x58);
    if (uVar11 == 0) goto LAB_710077de2c;
    if (*param_1 == '\0') {
      uVar6 = *(ulong *)(param_1 + 0x48);
      uVar5 = uVar11;
      if ((long)uVar6 < (long)uVar11) {
        if (uVar6 == 0) {
          uVar5 = (ulong)iVar2;
          lVar4 = 0;
          goto LAB_710077dd18;
        }
        uVar5 = uVar6;
        if (((param_1[0x99] != '\0') && (param_1[0x109] != '\0')) &&
           (uVar6 = uVar6 - (uVar6 + (long)(int)uVar8 & 0xf), 0 < (int)uVar6)) {
          uVar5 = uVar6;
        }
      }
      lVar4 = *plVar10;
      if (*(code **)(lVar4 + 0x38) == (code *)&LAB_710077af40) {
        plVar3 = plVar10;
        if (plVar10[1] == -1) {
          return 0xffffffff;
        }
      }
      else {
        cVar1 = (**(code **)(lVar4 + 0x38))(plVar10);
        if (cVar1 == '\0') {
          return 0xffffffff;
        }
        lVar4 = **(long **)(param_1 + 0x58);
        plVar3 = *(long **)(param_1 + 0x58);
      }
      iVar2 = (**(code **)(lVar4 + 0x20))(plVar3,lVar9,uVar5);
      uVar7 = (ulong)iVar2;
      plVar3 = plVar10 + 0xa8b;
      if (*(long **)(param_1 + 0x70) != (long *)0x0) {
        plVar3 = *(long **)(param_1 + 0x70);
      }
      uVar5 = uVar7;
      if ((param_1[0x53] == '\0') && (*(char *)((long)plVar3 + 0x20a9) != '\0')) {
        FUN_710077c7d0(param_1 + 0xd8,lVar9);
        lVar4 = *(long *)(param_1 + 0x48);
      }
      else {
        lVar4 = *(long *)(param_1 + 0x48);
      }
    }
    else {
      FUN_710080f900(param_2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
      uVar5 = *(ulong *)(param_1 + 8);
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      lVar4 = *(long *)(param_1 + 0x48);
      uVar7 = uVar5 & 0xffffffff;
      uVar5 = (ulong)(int)uVar5;
    }
LAB_710077dd18:
    iVar2 = (int)uVar7;
    uVar8 = uVar8 + iVar2;
    *(ulong *)(param_1 + 0x48) = lVar4 - uVar5;
    *(ulong *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + uVar5;
    if (((lVar4 - uVar5 == 0 & param_1[0x99]) == 0) ||
       ((iVar2 != 0 && ((param_1[0x109] == '\0' || ((uVar8 & 0xf) == 0)))))) {
      plVar10 = *(long **)(param_1 + 0x58);
LAB_710077de2c:
      if (plVar10 != (long *)0x0) {
        FUN_710077dc00(param_1,(plVar10[0x1bd6] - *(long *)(param_1 + 0x40)) +
                               *(long *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xd0));
      }
      if (iVar2 == -1) {
        uVar8 = 0xffffffff;
      }
      else if (param_1[0x109] != '\0') {
        FUN_710078fa60(*(undefined8 *)(param_1 + 0x88),param_2,(long)(int)uVar8);
      }
      FUN_710077e900();
      return uVar8;
    }
    cVar1 = FUN_71007888d0(plVar10,param_1,1,*(undefined4 *)(param_1 + 0x94));
    lVar9 = lVar9 + uVar5;
    uVar11 = uVar11 - uVar5;
    if (cVar1 == '\0') {
      param_1[0x9a] = '\x01';
      return 0xffffffff;
    }
  } while( true );
}



// ===== FUN_710077df40 @ 710077df40 (size=4) =====

void FUN_710077df40(void)

{
  return;
}



// ===== FUN_710077df50 @ 710077df50 (size=340) =====

void FUN_710077df50(long param_1,undefined8 param_2,ulong param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x58) + 0x3a20);
  if (*(int *)(lVar3 + 0x14804) != 0) {
    if ((*(code **)(lVar3 + 0x14818) != (code *)0x0) &&
       (iVar2 = (**(code **)(lVar3 + 0x14818))(1,*(undefined8 *)(lVar3 + 0x14810),param_2,param_3),
       iVar2 == -1)) {
      FUN_7100778a30(&DAT_7100d1bd98,0xff);
    }
    if ((*(code **)(lVar3 + 0x14828) != (code *)0x0) &&
       (iVar2 = (**(code **)(lVar3 + 0x14828))(param_2,param_3 & 0xffffffff), iVar2 == 0)) {
      FUN_7100778a30(&DAT_7100d1bd98,0xff);
    }
  }
  *(ulong *)(param_1 + 0x30) = param_3;
  *(undefined8 *)(param_1 + 0x38) = param_2;
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (*(char *)(param_1 + 0x51) == '\0') {
      FUN_710077ba40(*(undefined8 *)(param_1 + 0x60),param_2,param_3);
      cVar1 = *(char *)(param_1 + 0x52);
      *(ulong *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + param_3;
      goto joined_r0x00710077e02c;
    }
  }
  else if (param_3 <= *(ulong *)(param_1 + 0x20)) {
    FUN_710080f900(*(undefined8 *)(param_1 + 0x28),param_2,param_3);
    *(ulong *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) - param_3;
    *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + param_3;
  }
  cVar1 = *(char *)(param_1 + 0x52);
  *(ulong *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + param_3;
joined_r0x00710077e02c:
  if (cVar1 != '\0') {
    FUN_710077df40(param_1);
    FUN_710077e900();
    return;
  }
  FUN_710077c7d0(param_1 + 0xf8,param_2,param_3);
  FUN_710077df40(param_1);
  FUN_710077e900();
  return;
}



// ===== FUN_710077e0b0 @ 710077e0b0 (size=28) =====

void FUN_710077e0b0(long param_1,long param_2,long param_3)

{
  if (param_2 != 0) {
    *(long *)(param_1 + 0x58) = param_2;
  }
  if (param_3 != 0) {
    *(long *)(param_1 + 0x60) = param_3;
  }
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  return;
}



// ===== FUN_710077e0d0 @ 710077e0d0 (size=20) =====

void FUN_710077e0d0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *param_2 = *(undefined8 *)(param_1 + 0x38);
  *param_3 = uVar1;
  return;
}



// ===== FUN_710077e0f0 @ 710077e0f0 (size=104) =====

void FUN_710077e0f0(long param_1,char param_2)

{
  undefined1 uVar1;
  
  if (param_2 != '\0') {
    uVar1 = FUN_710078fb20(*(undefined8 *)(param_1 + 0x80),1);
    *(undefined1 *)(param_1 + 0x108) = uVar1;
    return;
  }
  uVar1 = FUN_710078fb20(*(undefined8 *)(param_1 + 0x88),0);
  *(undefined1 *)(param_1 + 0x109) = uVar1;
  return;
}



// ===== FUN_710077e160 @ 710077e160 (size=16) =====

void FUN_710077e160(long param_1)

{
  *(undefined1 *)(param_1 + 0x109) = 1;
  FUN_710078e890(*(undefined8 *)(param_1 + 0x88));
  return;
}



// ===== FUN_710077e170 @ 710077e170 (size=20) =====

void FUN_710077e170(long param_1,undefined8 param_2,ulong param_3)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(ulong *)(param_1 + 0x20) = param_3 & 0xffffffff;
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}



// ===== FUN_710077e190 @ 710077e190 (size=196) =====

void FUN_710077e190(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(int *)(param_2 + 0x14) == 1) {
    lVar2 = *(long *)(param_2 + 0x5400);
    if ((lVar2 == 0) && (lVar2 = *(long *)(param_2 + 0x5410), lVar2 == 0)) {
      *(long *)(param_1 + 0xd0) = *(long *)(param_1 + 0xd0) + *(long *)(param_1 + 200);
      return;
    }
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_710077b630(param_2);
    lVar2 = *(long *)(param_2 + 0x5400);
    if ((lVar2 == 0) && (lVar2 = *(long *)(param_2 + 0x5410), lVar2 == 0)) {
      if (0x17 < lVar1) {
        *(long *)(param_1 + 200) = lVar1 + -0x17;
        *(long *)(param_1 + 0xd0) = *(long *)(param_1 + 0xd0) + -0x17;
        return;
      }
      lVar1 = lVar1 - *(long *)(param_1 + 200);
      goto LAB_710077e1c4;
    }
  }
  lVar1 = lVar1 - lVar2;
  *(long *)(param_1 + 200) = lVar2;
LAB_710077e1c4:
  *(long *)(param_1 + 0xd0) = *(long *)(param_1 + 0xd0) - lVar1;
  return;
}



// ===== FUN_710077e260 @ 710077e260 (size=36) =====

void FUN_710077e260(long param_1,ulong param_2)

{
  ulong uVar1;
  
  if (param_1 != 0 && param_2 != 0) {
    uVar1 = 0;
    do {
      *(undefined1 *)(param_1 + uVar1) = 0;
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_2);
  }
  return;
}



// ===== FUN_710077e290 @ 710077e290 (size=12) =====

void FUN_710077e290(long param_1)

{
  *(undefined1 *)(param_1 + 0x200) = 0;
  FUN_710077e260(param_1,0x200);
  return;
}



// ===== FUN_710077e2a0 @ 710077e2a0 (size=20) =====

void FUN_710077e2a0(void)

{
  FUN_710077e290();
  return;
}



// ===== FUN_710077e2c0 @ 710077e2c0 (size=88) =====

void FUN_710077e2c0(byte *param_1,long param_2)

{
  byte *pbVar1;
  char cVar2;
  char cVar3;
  byte *pbVar4;
  
  cVar3 = FUN_710080e7e0();
  pbVar1 = param_1 + param_2;
  cVar2 = (char)param_1;
  if (param_2 != 0) {
    do {
      pbVar4 = param_1 + 1;
      *param_1 = ('K' - cVar2) + cVar3 + (char)param_1 ^ *param_1;
      param_1 = pbVar4;
    } while (pbVar4 != pbVar1);
  }
  return;
}



// ===== FUN_710077e320 @ 710077e320 (size=76) =====

void FUN_710077e320(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5,
                   undefined1 param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_3 << 2;
  if (param_5 <= param_3) {
    lVar1 = param_5 << 2;
  }
  uVar2 = FUN_710080f900(param_4,param_2,lVar1);
  FUN_710077e2c0(uVar2,param_5 << 2,param_6,*(undefined1 *)(param_1 + 0x201));
  return;
}



// ===== FUN_710077e370 @ 710077e370 (size=88) =====

void FUN_710077e370(long param_1,undefined4 *param_2,long param_3)

{
  if (*(char *)(param_1 + 0x200) == '\0') {
    *param_2 = 0;
    return;
  }
  FUN_710077e320(param_1,param_1,0x80,param_2,param_3,0);
  param_2[param_3 + -1] = 0;
  return;
}



// ===== FUN_710077e3d0 @ 710077e3d0 (size=132) =====

bool FUN_710077e3d0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_400 [512];
  undefined1 auStack_200 [512];
  
  FUN_710077e370(param_1,auStack_400,0x80);
  FUN_710077e370(param_2,auStack_200,0x80);
  iVar1 = FUN_710080c900(auStack_400,auStack_200);
  FUN_710077e260(auStack_400,0x80);
  FUN_710077e260(auStack_200,0x80);
  return iVar1 == 0;
}



// ===== FUN_710077e460 @ 710077e460 (size=108) =====

void FUN_710077e460(long param_1,int *param_2)

{
  long lVar1;
  
  if (*param_2 == 0) {
    *(undefined1 *)(param_1 + 0x200) = 0;
    FUN_7100808340(param_1,0,0x200);
    return;
  }
  *(undefined1 *)(param_1 + 0x200) = 1;
  lVar1 = FUN_710081f600(param_2);
  FUN_710077e320(param_1,param_2,lVar1 + 1,param_1,0x80,1);
  return;
}



// ===== FUN_710077e4d0 @ 710077e4d0 (size=16) =====

void FUN_710077e4d0(long param_1)

{
  *(undefined1 *)(param_1 + 0x201) = 0;
  FUN_710077e460(param_1,&DAT_71009952f8);
  return;
}



// ===== FUN_710077e4e0 @ 710077e4e0 (size=32) =====

long FUN_710077e4e0(long param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    if (param_2 != 0) {
      lVar1 = (param_1 * 100) / param_2;
    }
    return lVar1;
  }
  return 0;
}



// ===== FUN_710077e500 @ 710077e500 (size=20) =====

undefined8 FUN_710077e500(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_1 <= param_2) {
    uVar1 = FUN_710077e4e0();
    return uVar1;
  }
  return 100;
}



// ===== FUN_710077e520 @ 710077e520 (size=64) =====

void FUN_710077e520(undefined8 param_1,long param_2,long param_3,int param_4)

{
  if (param_4 == 2) {
    FUN_710077f3e0();
  }
  else {
    FUN_710077f030();
  }
  if (param_3 != 0) {
    *(undefined4 *)(param_2 + param_3 * 4 + -4) = 0;
  }
  return;
}



// ===== FUN_710077e560 @ 710077e560 (size=16) =====

bool FUN_710077e560(int param_1)

{
  return param_1 - 0x30U < 10;
}



// ===== thunk_FUN_710080c900 @ 710077e570 (size=4) =====

int thunk_FUN_710080c900(long param_1,long param_2)

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



// ===== thunk_FUN_71008141a0 @ 710077e580 (size=4) =====

int thunk_FUN_71008141a0(long param_1,long param_2,long param_3)

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



// ===== FUN_710077e590 @ 710077e590 (size=56) =====

void FUN_710077e590(char *param_1,char *param_2,long param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (param_3 != 0) {
    pcVar2 = param_1;
    pcVar3 = param_2;
    if (param_3 != 1) {
      do {
        pcVar1 = pcVar3 + 1;
        pcVar2 = param_1;
        if (*pcVar3 == '\0') break;
        pcVar2 = param_1 + 1;
        *param_1 = *pcVar3;
        param_1 = pcVar2;
        pcVar3 = pcVar1;
      } while (param_2 + (param_3 - (long)pcVar1) + -1 != (char *)0x0);
    }
    *pcVar2 = '\0';
  }
  return;
}



// ===== FUN_710077e5d0 @ 710077e5d0 (size=28) =====

void FUN_710077e5d0(long param_1,long param_2)

{
  if (param_2 != param_1) {
    FUN_710077e590(param_2,param_1);
    return;
  }
  return;
}



// ===== FUN_710077e5f0 @ 710077e5f0 (size=56) =====

void FUN_710077e5f0(int *param_1,int *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    param_3 = param_3 + -1;
    while (param_3 != 0) {
      iVar1 = *param_2;
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
      if (iVar1 == 0) {
        *param_1 = 0;
        return;
      }
      *param_1 = iVar1;
      param_1 = param_1 + 1;
    }
    *param_1 = 0;
  }
  return;
}



// ===== FUN_710077e630 @ 710077e630 (size=84) =====

void FUN_710077e630(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_710081f600();
  if (param_3 <= uVar1) {
    return;
  }
  FUN_710077e5f0(param_1 + uVar1 * 4,param_2,param_3 - uVar1);
  return;
}



// ===== FUN_710077e690 @ 710077e690 (size=144) =====

undefined8 FUN_710077e690(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  if ((ulong)param_1[1] <= (ulong)param_1[5]) {
    if (param_2 != (long *)0x0) {
      *param_2 = 0;
    }
    return 0;
  }
  lVar1 = *param_1 + param_1[5] * 4;
  lVar2 = FUN_710081f600(lVar1);
  param_1[5] = param_1[5] + 1 + lVar2;
  if (param_2 != (long *)0x0) {
    *param_2 = lVar1;
    return 1;
  }
  return 1;
}



// ===== FUN_710077e720 @ 710077e720 (size=80) =====

uint FUN_710077e720(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 local_8;
  
  uVar1 = FUN_710077e690(param_1,&local_8);
  if ((uVar1 & 0xff) != 0) {
    FUN_710077e5f0(param_2,local_8,param_3);
  }
  return uVar1;
}



// ===== FUN_710077e770 @ 710077e770 (size=28) =====

undefined8 FUN_710077e770(undefined8 param_1)

{
  undefined8 local_8;
  
  FUN_710077e690(param_1,&local_8);
  return local_8;
}



// ===== FUN_710077e790 @ 710077e790 (size=8) =====

void FUN_710077e790(long param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// ===== FUN_710077e7a0 @ 710077e7a0 (size=60) =====

void FUN_710077e7a0(long *param_1)

{
  FUN_710077e790();
  if (*param_1 != 0) {
    FUN_710081c200();
    *param_1 = 0;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[0x17] = 0;
  return;
}



// ===== FUN_710077e840 @ 710077e840 (size=44) =====

void FUN_710077e840(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_710077e7a0();
  return;
}



// ===== FUN_710077e890 @ 710077e890 (size=108) =====

void FUN_710077e890(long *param_1,undefined *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = &DAT_71009952f8;
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
  }
  lVar3 = param_1[1];
  lVar2 = FUN_710081f600(puVar1);
  FUN_7100777680(param_1,lVar2 + 1);
  FUN_710081c380(*param_1 + lVar3 * 4,puVar1);
  param_1[6] = param_1[6] + 1;
  return;
}



// ===== FUN_710077e900 @ 710077e900 (size=28) =====

void FUN_710077e900(void)

{
  if (DAT_7100d1bda4 == '\0') {
    return;
  }
  FUN_7100778a30(&DAT_7100d1bd98,0xff);
  return;
}



// ===== FUN_710077e920 @ 710077e920 (size=36) =====

ulong FUN_710077e920(ulong *param_1)

{
  return *param_1 / 100;
}



// ===== FUN_710077e950 @ 710077e950 (size=20) =====

void FUN_710077e950(long *param_1,long param_2)

{
  *param_1 = param_2 * 100;
  return;
}



// ===== FUN_710077e970 @ 710077e970 (size=24) =====

long FUN_710077e970(long *param_1)

{
  return *param_1 + 0x5e6684f4b3960000;
}



// ===== FUN_710077e990 @ 710077e990 (size=48) =====

ulong FUN_710077e990(void)

{
  ulong uVar1;
  
  uVar1 = FUN_710077e970();
  return uVar1 / 1000000000;
}



// ===== FUN_710077e9c0 @ 710077e9c0 (size=144) =====

void FUN_710077e9c0(ulong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  ulong uVar8;
  undefined8 local_8;
  
  local_8 = FUN_710077e990();
  piVar7 = (int *)FUN_710081f6a0(&local_8);
  uVar8 = *param_1;
  iVar1 = piVar7[4];
  iVar2 = *piVar7;
  iVar3 = piVar7[1];
  iVar5 = piVar7[2];
  *param_2 = piVar7[5] + 0x76c;
  param_2[1] = iVar1 + 1;
  iVar6 = piVar7[3];
  iVar1 = piVar7[6];
  iVar4 = piVar7[7];
  param_2[4] = iVar3;
  param_2[5] = iVar2;
  param_2[2] = iVar6;
  param_2[3] = iVar5;
  param_2[6] = (int)uVar8 + (int)(uVar8 / 1000000000) * -1000000000;
  param_2[7] = iVar1;
  param_2[8] = iVar4;
  return;
}



// ===== FUN_710077ea50 @ 710077ea50 (size=24) =====

void FUN_710077ea50(long *param_1,long param_2)

{
  *param_1 = param_2 + -0x5e6684f4b3960000;
  return;
}



// ===== FUN_710077ea70 @ 710077ea70 (size=16) =====

void FUN_710077ea70(undefined8 param_1,long param_2)

{
  FUN_710077ea50(param_1,param_2 * 1000000000);
  return;
}



// ===== FUN_710077ea80 @ 710077ea80 (size=124) =====

void FUN_710077ea80(long *param_1,int *param_2)

{
  undefined8 uVar1;
  int local_28;
  int local_24;
  int iStack_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  local_1c = param_2[2];
  iStack_20 = param_2[3];
  local_14 = *param_2 + -0x76c;
  local_24 = param_2[4];
  local_18 = param_2[1] + -1;
  local_28 = param_2[5];
  uVar1 = FUN_71008145e0(&local_28);
  FUN_710077ea70(param_1,uVar1);
  *param_1 = *param_1 + (ulong)(uint)param_2[6];
  return;
}



// ===== FUN_710077eb00 @ 710077eb00 (size=72) =====

uint FUN_710077eb00(undefined8 param_1)

{
  int local_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  int local_18;
  uint uStack_14;
  
  FUN_710077e9c0(param_1,&local_28);
  return local_18 << 5 | uStack_14 >> 1 | local_20 << 0x10 | iStack_1c << 0xb |
         iStack_24 << 0x15 | (local_28 + -0x7bc) * 0x2000000;
}



// ===== FUN_710077eb50 @ 710077eb50 (size=72) =====

void FUN_710077eb50(undefined8 param_1,uint param_2)

{
  int local_28;
  uint uStack_24;
  uint local_20;
  uint uStack_1c;
  uint local_18;
  int iStack_14;
  undefined4 local_10;
  
  iStack_14 = (param_2 & 0x1f) << 1;
  local_18 = param_2 >> 5 & 0x3f;
  uStack_1c = param_2 >> 0xb & 0x1f;
  local_20 = param_2 >> 0x10 & 0x1f;
  local_28 = (param_2 >> 0x19) + 0x7bc;
  local_10 = 0;
  uStack_24 = param_2 >> 0x15 & 0xf;
  FUN_710077ea80(param_1,&local_28);
  return;
}



// ===== FUN_710077eba0 @ 710077eba0 (size=48) =====

void FUN_710077eba0(undefined8 param_1)

{
  undefined8 local_8;
  
  FUN_710081c880(&local_8);
  FUN_710077ea70(param_1,local_8);
  return;
}



// ===== FUN_710077ebd0 @ 710077ebd0 (size=16) =====

void FUN_710077ebd0(long *param_1,long param_2)

{
  *param_1 = *param_1 + param_2;
  return;
}



// ===== FUN_710077ebe0 @ 710077ebe0 (size=8) =====

undefined8 FUN_710077ebe0(void)

{
  return 0;
}



// ===== FUN_710077ebf0 @ 710077ebf0 (size=448) =====

uint FUN_710077ebf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined4 param_6)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 auStack_2000 [8192];
  
  uVar2 = 1;
  if (*(int *)(param_1 + 0xe240) != 2) {
    if (*(char *)(param_1 + 0xe2ac) != '\0' || *(int *)(param_1 + 0xe240) == 1) {
      FUN_710077c1b0(param_2);
      return 0;
    }
    FUN_710077e5f0(auStack_2000,param_2,0x800);
    uVar2 = FUN_710077ebe0(auStack_2000,0x800,param_4,param_5,param_6);
    if ((uVar2 & 0xfffffffd) == 0) {
      FUN_710077c1b0(param_2);
      if (uVar2 == 2) {
        uVar2 = 0;
        *(undefined4 *)(param_1 + 0xe240) = 1;
      }
    }
    else if (uVar2 == 3) {
      uVar2 = 1;
      *(undefined4 *)(param_1 + 0xe240) = 2;
    }
    else if (uVar2 == 4) {
      puVar3 = (undefined1 *)FUN_710077cfa0(auStack_2000);
      if (puVar3 == auStack_2000) {
        FUN_710077d030(param_2,puVar3,param_3);
      }
      else {
        FUN_710077e5f0(param_2,auStack_2000,param_3);
      }
      uVar2 = 0;
      cVar1 = FUN_710077c140(param_2);
      if (cVar1 != '\0') {
        uVar2 = FUN_710077ebf0(param_1,param_2,param_3,param_4,param_5,param_6);
      }
    }
  }
  return uVar2;
}



// ===== FUN_710077edb0 @ 710077edb0 (size=8) =====

undefined8 FUN_710077edb0(void)

{
  return 1;
}



// ===== FUN_710077edc0 @ 710077edc0 (size=4) =====

void FUN_710077edc0(void)

{
  return;
}



// ===== FUN_710077edd0 @ 710077edd0 (size=4) =====

void FUN_710077edd0(void)

{
  return;
}



// ===== FUN_710077ede0 @ 710077ede0 (size=8) =====

undefined8 FUN_710077ede0(void)

{
  return 0;
}



// ===== FUN_710077edf0 @ 710077edf0 (size=4) =====

void FUN_710077edf0(void)

{
  return;
}



// ===== FUN_710077ee00 @ 710077ee00 (size=4) =====

void FUN_710077ee00(void)

{
  return;
}



// ===== FUN_710077ee10 @ 710077ee10 (size=540) =====

bool FUN_710077ee10(int *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  bool local_1c;
  undefined8 local_10;
  int *local_8;
  
  *param_2 = 0;
  lVar3 = FUN_7100816c20(param_1,0xfffe);
  if (lVar3 != 0) {
    FUN_7100808340(param_2,0,param_3);
    if (*param_1 == 0) {
      *param_2 = 0;
      local_1c = true;
    }
    else {
      uVar5 = 0;
      uVar6 = 0;
      local_1c = true;
      piVar4 = param_1;
      uVar7 = 0;
      do {
        while( true ) {
          iVar2 = FUN_7100809520();
          if ((ulong)(param_3 - iVar2) <= uVar7) goto LAB_710077ef30;
          iVar2 = *piVar4;
          uVar6 = (ulong)((int)uVar6 + 1);
          puVar1 = param_2 + uVar7;
          if (iVar2 != 0xfffe) break;
LAB_710077ee9c:
          piVar4 = param_1 + uVar6;
          if (param_1[uVar6] == 0) goto LAB_710077ef30;
        }
        if (iVar2 - 0xe080U < 0x80) {
          uVar5 = (ulong)((int)uVar5 + 1);
          param_2[uVar7] = (char)iVar2;
          uVar7 = uVar5;
          goto LAB_710077ee9c;
        }
        local_8 = (int *)0x0;
        lVar3 = FUN_7100816b20(puVar1,iVar2,&local_8);
        if (lVar3 == -1) {
          local_1c = false;
          *puVar1 = 0x5f;
        }
        local_8 = (int *)0x0;
        iVar2 = FUN_7100809520();
        piVar4 = param_1 + uVar6;
        iVar2 = FUN_710081c8e0(puVar1,(long)iVar2,&local_8);
        if (iVar2 < 1) {
          iVar2 = 1;
        }
        uVar5 = (ulong)(uint)((int)uVar5 + iVar2);
        uVar7 = uVar5;
      } while (param_1[uVar6] != 0);
LAB_710077ef30:
      if (param_3 - 1U < uVar7) {
        uVar7 = param_3 - 1U;
      }
      param_2[uVar7] = 0;
    }
    goto LAB_710077ef50;
  }
  local_10 = 0;
  local_8 = param_1;
  lVar3 = FUN_710081fc00(param_2,&local_8,param_3,&local_10);
  if (lVar3 == -1) {
    piVar4 = (int *)FUN_710080e8e0();
    if (*piVar4 == 0x8a) {
      local_10 = 0;
      local_8 = param_1;
      FUN_7100808340(param_2,0,param_3);
      lVar3 = FUN_710081fc00(param_2,&local_8,param_3,&local_10);
      if (lVar3 != -1) goto LAB_710077ef9c;
    }
    local_1c = false;
  }
  else {
LAB_710077ef9c:
    local_1c = true;
    if (lVar3 == 0) {
      local_1c = *param_1 == 0;
    }
  }
LAB_710077ef50:
  if (param_3 != 0) {
    param_2[param_3 + -1] = 0;
  }
  return local_1c;
}



// ===== FUN_710077f030 @ 710077f030 (size=420) =====

int FUN_710077f030(char *param_1,undefined4 *param_2,ulong param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  undefined8 local_18;
  char *pcStack_10;
  undefined8 local_8;
  
  *param_2 = 0;
  local_18 = 0;
  pcStack_10 = param_1;
  lVar3 = FUN_710081f640(param_2,&pcStack_10,param_3,&local_18);
  if ((lVar3 == -1) || ((lVar3 == 0 && (*param_1 != '\0')))) {
    iVar8 = 0;
    if (1 < param_3) {
      uVar6 = 0;
      uVar7 = 0;
      do {
        uVar5 = (uint)uVar6;
        if (param_1[uVar7] == '\0') {
          iVar8 = 1;
          goto LAB_710077f0a8;
        }
        local_8 = 0;
        iVar2 = FUN_7100809520();
        uVar4 = FUN_7100823240(param_2 + uVar6,param_1 + uVar7,(long)iVar2,&local_8);
        if (uVar4 < 0xfffffffffffffffe) {
          local_8 = 0;
          iVar2 = FUN_7100809520();
          iVar2 = FUN_710081c8e0(param_1 + uVar7,(long)iVar2,&local_8);
          if (iVar2 < 1) {
            iVar2 = 1;
          }
          uVar7 = uVar7 + iVar2;
        }
        else {
          bVar1 = param_1[uVar7];
          if (-1 < (char)bVar1) break;
          uVar4 = uVar6;
          if (iVar8 == 0) {
            uVar5 = uVar5 + 1;
            uVar4 = (ulong)uVar5;
            param_2[uVar6] = 0xfffe;
            iVar8 = 0;
            uVar6 = uVar4;
            if (param_3 <= uVar4) goto LAB_710077f0a8;
            bVar1 = param_1[uVar7];
          }
          uVar7 = uVar7 + 1;
          iVar8 = 1;
          param_2[uVar4] = bVar1 + 0xe000;
        }
        uVar6 = (ulong)(uVar5 + 1);
      } while (uVar6 < param_3);
      iVar8 = 0;
LAB_710077f0a8:
      lVar3 = (param_3 - 1) * 4;
      if (uVar6 < param_3 - 1) {
        lVar3 = uVar6 << 2;
      }
      *(undefined4 *)((long)param_2 + lVar3) = 0;
      goto LAB_710077f0c8;
    }
  }
  else {
    iVar8 = 1;
  }
  if (param_3 == 0) {
    return iVar8;
  }
LAB_710077f0c8:
  param_2[param_3 - 1] = 0;
  return iVar8;
}



// ===== FUN_710077f1e0 @ 710077f1e0 (size=72) =====

undefined1 * FUN_710077f1e0(long param_1,undefined1 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  
  if (param_3 != 0) {
    lVar2 = 0;
    puVar3 = param_2;
    do {
      *puVar3 = (char)*(undefined4 *)(param_1 + lVar2 * 4);
      puVar3[1] = (char)((uint)*(undefined4 *)(param_1 + lVar2 * 4) >> 8);
      lVar1 = lVar2 * 4;
      lVar2 = lVar2 + 1;
      if (*(int *)(param_1 + lVar1) == 0) {
        return param_2;
      }
      puVar3 = puVar3 + 2;
    } while (param_3 != lVar2);
  }
  return param_2;
}



// ===== FUN_710077f230 @ 710077f230 (size=60) =====

void FUN_710077f230(byte *param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      iVar1 = (uint)*param_1 + (uint)param_1[1] * 0x100;
      *(int *)(param_2 + lVar2 * 4) = iVar1;
      lVar2 = lVar2 + 1;
      if (iVar1 == 0) {
        return;
      }
      param_1 = param_1 + 2;
    } while (param_3 != lVar2);
  }
  return;
}



// ===== FUN_710077f270 @ 710077f270 (size=356) =====

void FUN_710077f270(uint *param_1,byte *param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  uint *puVar3;
  long lVar4;
  
  uVar1 = *param_1;
  lVar4 = param_3 + -1;
  if ((uVar1 != 0) && (param_3 = param_3 + -2, -1 < param_3)) {
    do {
      puVar3 = param_1 + 1;
      bVar2 = (byte)uVar1;
      if (uVar1 < 0x80) {
        *param_2 = bVar2;
        param_2 = param_2 + 1;
LAB_710077f2a8:
        uVar1 = *puVar3;
        param_1 = puVar3;
        lVar4 = param_3;
      }
      else {
        if (0x7ff < uVar1) {
          if (uVar1 - 0xd800 < 0x400) {
            if (param_1[1] - 0xdc00 < 0x400) {
              puVar3 = param_1 + 2;
              uVar1 = param_1[1] + 0x2400 + (uVar1 - 0xd800) * 0x400;
            }
            else {
LAB_710077f328:
              param_3 = param_3 + -2;
              if (-1 < param_3) {
                *param_2 = (byte)(uVar1 >> 0xc) | 0xe0;
                param_2[1] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
                param_2[2] = bVar2 & 0x3f | 0x80;
                param_2 = param_2 + 3;
                goto LAB_710077f2a8;
              }
            }
          }
          else {
            if (uVar1 < 0x10000) goto LAB_710077f328;
            if (0x1fffff < uVar1) goto LAB_710077f2a8;
          }
          param_3 = param_3 + -3;
          if (-1 < param_3) {
            *param_2 = (byte)(uVar1 >> 0x12) | 0xf0;
            param_2[1] = (byte)(uVar1 >> 0xc) & 0x3f | 0x80;
            param_2[2] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
            param_2[3] = (byte)uVar1 & 0x3f | 0x80;
            param_2 = param_2 + 4;
          }
          goto LAB_710077f2a8;
        }
        lVar4 = lVar4 + -2;
        if (lVar4 == -1) break;
        *param_2 = (byte)(uVar1 >> 6) | 0xc0;
        param_2[1] = bVar2 & 0x3f | 0x80;
        uVar1 = *puVar3;
        param_1 = puVar3;
        param_2 = param_2 + 2;
      }
      if ((uVar1 == 0) || (param_3 = lVar4 + -1, param_3 < 0)) break;
    } while( true );
  }
  *param_2 = 0;
  return;
}



// ===== FUN_710077f3e0 @ 710077f3e0 (size=348) =====

undefined8 FUN_710077f3e0(byte *param_1,uint *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  
  uVar3 = (uint)*param_1;
  param_3 = param_3 + -1;
  uVar1 = 1;
  if (*param_1 != 0) {
    do {
      if (uVar3 >> 7 == 0) {
        param_1 = param_1 + 1;
LAB_710077f4bc:
        lVar2 = param_3 + -1;
        if (lVar2 < 0) {
          *param_2 = 0;
          return uVar1;
        }
        goto LAB_710077f49c;
      }
      if (uVar3 >> 5 == 6) {
        if ((param_1[1] & 0xc0) == 0x80) {
          uVar3 = (uVar3 & 0x1f) << 6 | param_1[1] & 0x3f;
          param_1 = param_1 + 2;
          goto LAB_710077f4bc;
        }
LAB_710077f52c:
        uVar1 = 0;
        break;
      }
      if (uVar3 >> 4 == 0xe) {
        if (((param_1[1] & 0xc0) == 0x80) && ((param_1[2] & 0xc0) == 0x80)) {
          uVar3 = (uVar3 & 0xf) << 0xc | param_1[2] & 0x3f | (param_1[1] & 0x3f) << 6;
          param_1 = param_1 + 3;
          goto LAB_710077f4bc;
        }
        goto LAB_710077f52c;
      }
      if ((((uVar3 >> 3 != 0x1e) || ((param_1[1] & 0xc0) != 0x80)) || ((param_1[2] & 0xc0) != 0x80))
         || ((param_1[3] & 0xc0) != 0x80)) goto LAB_710077f52c;
      lVar2 = param_3 + -1;
      uVar3 = (param_1[1] & 0x3f) << 0xc | (param_1[2] & 0x3f) << 6 |
              (uVar3 & 7) << 0x12 | param_1[3] & 0x3f;
      param_1 = param_1 + 4;
      if (lVar2 < 0) break;
      if (uVar3 < 0x10000) {
LAB_710077f49c:
        *param_2 = uVar3;
        param_2 = param_2 + 1;
      }
      else {
        lVar2 = param_3 + -2;
        if (lVar2 == -1) break;
        if (uVar3 < 0x110000) goto LAB_710077f49c;
        uVar1 = 0;
      }
      uVar3 = (uint)*param_1;
      param_3 = lVar2;
    } while (uVar3 != 0);
  }
  *param_2 = 0;
  return uVar1;
}



// ===== FUN_710077f540 @ 710077f540 (size=128) =====

undefined4 FUN_710077f540(long param_1,long param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  
  lVar6 = 0;
  do {
    iVar2 = *(int *)(param_1 + lVar6);
    uVar3 = FUN_7100817080(iVar2);
    puVar1 = (undefined4 *)(param_2 + lVar6);
    lVar6 = lVar6 + 4;
    uVar4 = FUN_7100817080(*puVar1);
    if (uVar3 != uVar4) {
      uVar5 = 1;
      if (uVar3 < uVar4) {
        uVar5 = 0xffffffff;
      }
      return uVar5;
    }
  } while (iVar2 != 0);
  return 0;
}



// ===== FUN_710077f5c0 @ 710077f5c0 (size=64) =====

int * FUN_710077f5c0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = param_1;
  while (iVar1 != 0) {
    iVar1 = FUN_7100822f20();
    *piVar2 = iVar1;
    piVar2 = piVar2 + 1;
    iVar1 = *piVar2;
  }
  return param_1;
}



// ===== FUN_710077f600 @ 710077f600 (size=64) =====

int * FUN_710077f600(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = param_1;
  while (iVar1 != 0) {
    iVar1 = FUN_7100817080();
    *piVar2 = iVar1;
    piVar2 = piVar2 + 1;
    iVar1 = *piVar2;
  }
  return param_1;
}



// ===== thunk_FUN_7100817080 @ 710077f640 (size=4) =====

void thunk_FUN_7100817080(undefined8 param_1)

{
  FUN_7100828740(param_1,2);
  return;
}



// ===== FUN_710077f650 @ 710077f650 (size=128) =====

long FUN_710077f650(int *param_1)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  
  if (*param_1 == 0x2d) {
    piVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    uVar2 = *piVar1 - 0x30;
    if (9 < uVar2) {
      return 0;
    }
    bVar3 = true;
  }
  else {
    uVar2 = *param_1 - 0x30;
    bVar3 = false;
    if (9 < uVar2) {
      return 0;
    }
  }
  lVar4 = 0;
  do {
    param_1 = param_1 + 1;
    lVar4 = (ulong)uVar2 + lVar4 * 10;
    uVar2 = *param_1 - 0x30;
  } while (uVar2 < 10);
  if (-1 < lVar4 && bVar3) {
    lVar4 = -lVar4;
  }
  return lVar4;
}



// ===== FUN_710077f6d0 @ 710077f6d0 (size=20) =====

void FUN_710077f6d0(void)

{
  FUN_710077f650();
  return;
}



// ===== FUN_710077f6f0 @ 710077f6f0 (size=8) =====

void FUN_710077f6f0(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



// ===== thunk_FUN_710077f6f0 @ 710077f700 (size=4) =====

void thunk_FUN_710077f6f0(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



// ===== FUN_710077f710 @ 710077f710 (size=24) =====

void FUN_710077f710(long *param_1)

{
  if (*param_1 == 0) {
    return;
  }
  *param_1 = 0;
  FUN_710081c200(param_1[0x16]);
  return;
}



// ===== FUN_710077f730 @ 710077f730 (size=164) =====

bool FUN_710077f730(ulong *param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*param_1 != (ulong)(uint)(param_2 << 0x14)) {
    FUN_710077f710();
    uVar2 = (ulong)(((uint)(param_2 << 0x14) / 0xc + 2) * 0x20);
    uVar1 = FUN_710081c1c0(uVar2);
    param_1[0x16] = uVar1;
    if (uVar1 == 0) {
      FUN_7100778a60(&DAT_7100d1bd98);
    }
    else {
      *param_1 = (ulong)(uint)(param_2 << 0x14);
      param_1[0x41] = uVar1 + (uVar2 - 0x20);
    }
    return uVar1 != 0;
  }
  return true;
}



// ===== FUN_710077f7e0 @ 710077f7e0 (size=260) =====

void FUN_710077f7e0(long *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  
  FUN_7100808340(param_1 + 0x19,0,0x130);
  lVar6 = param_1[0x16];
  iVar3 = 0x1c;
  *(undefined4 *)(param_1 + 2) = 0x1815120f;
  iVar2 = (int)(*param_1 / 0x60);
  param_1[1] = 0xc0a080604030201;
  uVar1 = (int)*param_1 + iVar2 * -0x54;
  param_1[0x42] = lVar6 + (ulong)uVar1;
  lVar5 = lVar6 + (ulong)((uVar1 / 0xc + 1) * 0x20);
  param_1[0x3f] = lVar6;
  param_1[0x40] = lVar5;
  param_1[0x17] = lVar5;
  param_1[0x18] = lVar5 + (ulong)((uint)(iVar2 * 0x54) / 0xc << 5);
  puVar4 = (undefined1 *)((long)param_1 + 0x14);
  do {
    *puVar4 = (char)iVar3;
    iVar3 = iVar3 + 4;
    puVar4 = puVar4 + 1;
  } while (iVar3 != 0x84);
  lVar5 = 0;
  iVar3 = 0;
  *(undefined1 *)((long)param_1 + 0xae) = 0;
  do {
    if ((int)(uint)*(byte *)((long)param_1 + (long)iVar3 + 8) <= (int)lVar5) {
      iVar3 = iVar3 + 1;
    }
    *(char *)((long)param_1 + lVar5 + 0x2e) = (char)iVar3;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x80);
  return;
}



// ===== FUN_710077f8f0 @ 710077f8f0 (size=480) =====

void FUN_710077f8f0(long param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  byte *pbVar12;
  undefined8 uStack_18;
  undefined8 *local_10;
  undefined8 *local_8;
  
  if (*(undefined1 **)(param_1 + 0xb8) != *(undefined1 **)(param_1 + 0xc0)) {
    **(undefined1 **)(param_1 + 0xb8) = 0;
  }
  pbVar12 = (byte *)(param_1 + 8);
  lVar1 = param_1 * -7 + 0x88;
  local_10 = &uStack_18;
  local_8 = &uStack_18;
  puVar10 = &uStack_18;
  do {
    puVar7 = *(undefined8 **)(lVar1 + (long)pbVar12 * 8);
    puVar9 = puVar10;
    if (puVar7 != (undefined8 *)0x0) {
      do {
        puVar10 = puVar7;
        puVar7 = (undefined8 *)*puVar10;
        *(undefined8 **)(lVar1 + (long)pbVar12 * 8) = puVar7;
        puVar10[1] = puVar9;
        puVar10[2] = &uStack_18;
        puVar9[2] = puVar10;
        *(undefined2 *)puVar10 = 0xffff;
        bVar3 = *pbVar12;
        *(ushort *)((long)puVar10 + 2) = (ushort)bVar3;
        puVar9 = puVar10;
      } while (puVar7 != (undefined8 *)0x0);
      local_10 = puVar10;
      *(undefined2 *)puVar10 = 0xffff;
      *(ushort *)((long)puVar10 + 2) = (ushort)bVar3;
    }
    pbVar12 = pbVar12 + 1;
  } while (pbVar12 != (byte *)(param_1 + 0x2e));
  if (puVar10 != &uStack_18) {
    do {
      uVar8 = (ulong)*(ushort *)((long)puVar10 + 2);
      sVar5 = *(short *)(puVar10 + (ulong)*(ushort *)((long)puVar10 + 2) * 4);
      lVar1 = uVar8 * 0x20;
      while (sVar5 == -1) {
        uVar11 = (uint)*(ushort *)((long)puVar10 + lVar1 + 2) + (int)uVar8;
        uVar8 = (ulong)(uVar11 & 0xffff);
        if (0xffff < uVar11) break;
        lVar2 = *(long *)((long)puVar10 + lVar1 + 8);
        lVar1 = *(long *)((long)puVar10 + lVar1 + 0x10);
        sVar5 = *(short *)((long)puVar10 + (ulong)((uVar11 & 0xffff) << 5));
        *(long *)(lVar1 + 8) = lVar2;
        *(long *)(lVar2 + 0x10) = lVar1;
        *(short *)((long)puVar10 + 2) = (short)uVar11;
        lVar1 = uVar8 << 5;
      }
      puVar10 = (undefined8 *)puVar10[1];
    } while (puVar10 != &uStack_18);
    while (local_10 != &uStack_18) {
      lVar1 = local_10[1];
      lVar2 = local_10[2];
      uVar4 = *(ushort *)((long)local_10 + 2);
      uVar11 = (uint)uVar4;
      *(long *)(lVar2 + 8) = lVar1;
      *(long *)(lVar1 + 0x10) = lVar2;
      puVar10 = local_10;
      if (0x80 < uVar4) {
        uVar6 = uVar4 - 0x81 >> 7;
        puVar7 = *(undefined8 **)(param_1 + 0x1f0);
        do {
          puVar9 = puVar10;
          *puVar9 = puVar7;
          puVar10 = puVar9 + 0x200;
          puVar7 = puVar9;
        } while (local_10 + (ulong)(uVar6 + 1) * 0x200 != puVar9 + 0x200);
        *(undefined8 **)(param_1 + 0x1f0) = puVar9;
        uVar11 = (uVar4 - 0x80) + uVar6 * -0x80;
        puVar10 = local_10 + (ulong)(uVar6 + 1) * 0x200;
      }
      bVar3 = *(byte *)(param_1 + (int)(uVar11 - 1) + 0x2e);
      uVar8 = (ulong)bVar3;
      if (*(byte *)(param_1 + uVar8 + 8) != uVar11) {
        uVar8 = (ulong)(int)(bVar3 - 1);
        bVar3 = *(byte *)(param_1 + uVar8 + 8);
        lVar1 = param_1 + (long)(int)(uVar11 - bVar3) * 8;
        puVar10[(ulong)bVar3 * 4] = *(undefined8 *)(lVar1 + 0xc0);
        *(undefined8 **)(lVar1 + 0xc0) = puVar10 + (ulong)bVar3 * 4;
      }
      lVar1 = param_1 + uVar8 * 8;
      *puVar10 = *(undefined8 *)(lVar1 + 200);
      *(undefined8 **)(lVar1 + 200) = puVar10;
    }
  }
  return;
}



// ===== FUN_710077fad0 @ 710077fad0 (size=372) =====

undefined8 * FUN_710077fad0(long param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  
  lVar11 = (long)param_2;
  if (*(char *)(param_1 + 0xae) == '\0') {
    *(undefined1 *)(param_1 + 0xae) = 0xff;
    FUN_710077f8f0();
    lVar8 = param_1 + lVar11 * 8;
    puVar5 = *(undefined8 **)(lVar8 + 200);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined8 *)(lVar8 + 200) = *puVar5;
      return puVar5;
    }
  }
  lVar8 = (long)(param_2 + 1);
  do {
    iVar6 = (int)lVar8;
    lVar8 = lVar8 + 1;
    if (iVar6 == 0x26) {
      puVar5 = (undefined8 *)0x0;
      *(char *)(param_1 + 0xae) = *(char *)(param_1 + 0xae) + -1;
      bVar1 = *(byte *)(param_1 + lVar11 + 8);
      uVar9 = (ulong)((uint)bVar1 * 3);
      if ((long)(uVar9 * 4) < *(long *)(param_1 + 0x210) - *(long *)(param_1 + 0x1f8)) {
        *(ulong *)(param_1 + 0x210) = *(long *)(param_1 + 0x210) + uVar9 * -4;
        puVar5 = (undefined8 *)(*(long *)(param_1 + 0x200) + (ulong)bVar1 * -0x20);
        *(undefined8 **)(param_1 + 0x200) = puVar5;
      }
      return puVar5;
    }
    puVar5 = *(undefined8 **)(param_1 + 0xc0 + lVar8 * 8);
  } while (puVar5 == (undefined8 *)0x0);
  *(undefined8 *)(param_1 + (long)iVar6 * 8 + 200) = *puVar5;
  bVar1 = *(byte *)(param_1 + lVar11 + 8);
  puVar10 = puVar5 + (ulong)bVar1 * 4;
  uVar4 = (uint)*(byte *)(param_1 + iVar6 + 8) - (uint)bVar1;
  bVar2 = *(byte *)(param_1 + (int)(uVar4 - 1) + 0x2e);
  bVar3 = *(byte *)(param_1 + (int)(uint)bVar2 + 8);
  uVar7 = (uint)bVar3;
  if (uVar4 != bVar3) {
    lVar11 = param_1 + (ulong)bVar2 * 8;
    puVar5[(ulong)bVar1 * 4] = *(undefined8 *)(lVar11 + 0xc0);
    *(undefined8 **)(lVar11 + 0xc0) = puVar10;
    bVar1 = *(byte *)(param_1 + (int)(bVar2 - 1) + 8);
    uVar7 = uVar4 - bVar1;
    puVar10 = puVar10 + (ulong)bVar1 * 4;
  }
  param_1 = param_1 + (ulong)*(byte *)(param_1 + (int)(uVar7 - 1) + 0x2e) * 8;
  *puVar10 = *(undefined8 *)(param_1 + 200);
  *(undefined8 **)(param_1 + 200) = puVar10;
  return puVar5;
}



// ===== FUN_710077fc50 @ 710077fc50 (size=52) =====

void FUN_710077fc50(long param_1)

{
  thunk_FUN_710077f6f0(param_1 + 0x4aa8);
  *(undefined8 *)(param_1 + 0x648) = 0;
  *(undefined8 *)(param_1 + 0x650) = 0;
  *(undefined8 *)(param_1 + 0x658) = 0;
  return;
}



// ===== FUN_710077fc90 @ 710077fc90 (size=664) =====

void FUN_710077fc90(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  short sVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  
  lVar5 = param_1 + 0x4aa8;
  *(undefined8 *)(param_1 + 0x688) = 0;
  *(undefined8 *)(param_1 + 0x680) = 0;
  *(undefined8 *)(param_1 + 0x698) = 0;
  *(undefined8 *)(param_1 + 0x690) = 0;
  *(undefined8 *)(param_1 + 0x6a8) = 0;
  *(undefined8 *)(param_1 + 0x6a0) = 0;
  *(undefined8 *)(param_1 + 0x6b8) = 0;
  *(undefined8 *)(param_1 + 0x6b0) = 0;
  *(undefined8 *)(param_1 + 0x6c8) = 0;
  *(undefined8 *)(param_1 + 0x6c0) = 0;
  *(undefined8 *)(param_1 + 0x6d8) = 0;
  *(undefined8 *)(param_1 + 0x6d0) = 0;
  *(undefined8 *)(param_1 + 0x6e8) = 0;
  *(undefined8 *)(param_1 + 0x6e0) = 0;
  *(undefined8 *)(param_1 + 0x6f8) = 0;
  *(undefined8 *)(param_1 + 0x6f0) = 0;
  *(undefined8 *)(param_1 + 0x708) = 0;
  *(undefined8 *)(param_1 + 0x700) = 0;
  *(undefined8 *)(param_1 + 0x718) = 0;
  *(undefined8 *)(param_1 + 0x710) = 0;
  *(undefined8 *)(param_1 + 0x728) = 0;
  *(undefined8 *)(param_1 + 0x720) = 0;
  *(undefined8 *)(param_1 + 0x738) = 0;
  *(undefined8 *)(param_1 + 0x730) = 0;
  *(undefined8 *)(param_1 + 0x748) = 0;
  *(undefined8 *)(param_1 + 0x740) = 0;
  *(undefined8 *)(param_1 + 0x758) = 0;
  *(undefined8 *)(param_1 + 0x750) = 0;
  *(undefined8 *)(param_1 + 0x768) = 0;
  *(undefined8 *)(param_1 + 0x760) = 0;
  *(undefined8 *)(param_1 + 0x778) = 0;
  *(undefined8 *)(param_1 + 0x770) = 0;
  FUN_710077f7e0(lVar5);
  uVar9 = *(uint *)(param_1 + 0x674);
  uVar12 = uVar9;
  if (0xc < (int)uVar9) {
    uVar12 = 0xc;
  }
  *(uint *)(param_1 + 0x67c) = ~uVar12;
  if (*(long *)(param_1 + 0x4b68) == *(long *)(param_1 + 0x4b60)) {
    puVar3 = *(undefined8 **)(param_1 + 0x4b70);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x4b70) = *puVar3;
      goto LAB_710077fd14;
    }
    puVar3 = (undefined8 *)FUN_710077fad0(lVar5,0);
    *(undefined8 **)(param_1 + 0x648) = puVar3;
    *(undefined8 **)(param_1 + 0x658) = puVar3;
    if (puVar3 == (undefined8 *)0x0) goto LAB_710077febc;
    uVar9 = *(uint *)(param_1 + 0x674);
  }
  else {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x4b68) + -0x20);
    *(undefined8 **)(param_1 + 0x4b68) = puVar3;
LAB_710077fd14:
    *(undefined8 **)(param_1 + 0x648) = puVar3;
    *(undefined8 **)(param_1 + 0x658) = puVar3;
  }
  puVar3[3] = 0;
  puVar4 = *(undefined2 **)(param_1 + 0x648);
  *(uint *)(param_1 + 0x670) = uVar9;
  *puVar4 = 0x100;
  puVar4[4] = 0x101;
  lVar10 = param_1 + (ulong)*(byte *)(param_1 + 0x4b55) * 8;
  puVar3 = *(undefined8 **)(lVar10 + 0x4b70);
  lVar13 = *(long *)(param_1 + 0x648);
  if (puVar3 == (undefined8 *)0x0) {
    lVar10 = *(long *)(param_1 + 0x4b60);
    uVar2 = lVar10 + (ulong)*(byte *)(param_1 + (int)(uint)*(byte *)(param_1 + 0x4b55) + 0x4ab0) *
                     0x20;
    *(ulong *)(param_1 + 0x4b60) = uVar2;
    if (*(ulong *)(param_1 + 0x4b68) < uVar2) {
      *(long *)(param_1 + 0x4b60) = lVar10;
      lVar10 = FUN_710077fad0(lVar5);
      *(long *)(lVar13 + 0x10) = lVar10;
      *(long *)(param_1 + 0x660) = lVar10;
    }
    else {
      *(long *)(lVar13 + 0x10) = lVar10;
      *(long *)(param_1 + 0x660) = lVar10;
    }
    if (lVar10 == 0) {
LAB_710077febc:
      puVar3 = (undefined8 *)FUN_71007adf60(8);
      *puVar3 = &PTR_FUN_7100aec478;
                    /* WARNING: Subroutine does not return */
      FUN_71007af000(puVar3,&PTR_PTR_FUN_7100aea210,FUN_71007ad880);
    }
  }
  else {
    *(undefined8 *)(lVar10 + 0x4b70) = *puVar3;
    *(undefined8 **)(lVar13 + 0x10) = puVar3;
    *(undefined8 **)(param_1 + 0x660) = puVar3;
  }
  lVar5 = 0;
  *(undefined1 *)(param_1 + 0xa81) = 0;
  *(undefined4 *)(param_1 + 0x678) = *(undefined4 *)(param_1 + 0x67c);
  do {
    lVar10 = lVar5 * 0x10;
    *(char *)(*(long *)(*(long *)(param_1 + 0x648) + 0x10) + lVar10) = (char)lVar5;
    lVar5 = lVar5 + 1;
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x648) + 0x10) + lVar10 + 1) = 1;
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x648) + 0x10) + lVar10 + 8) = 0;
  } while (lVar5 != 0x100);
  lVar5 = param_1 + 0xa74;
  uVar12 = 2;
  lVar10 = 0;
  do {
    lVar13 = 0;
    uVar9 = 0x3cdd;
    lVar11 = lVar5;
    while( true ) {
      sVar8 = 0;
      if (uVar12 != 0) {
        sVar8 = (short)(uVar9 / uVar12);
      }
      lVar6 = 8;
      do {
        *(short *)(lVar11 + lVar6 * 2) = 0x4000 - sVar8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0x48);
      lVar13 = lVar13 + 1;
      lVar11 = lVar11 + 2;
      if (lVar13 == 8) break;
      uVar9 = (uint)*(ushort *)(&UNK_71009c5e80 + lVar13 * 2);
    }
    lVar10 = lVar10 + 0x40;
    lVar5 = lVar5 + 0x80;
    uVar12 = uVar12 + 1;
  } while (lVar10 != 0x2000);
  puVar3 = (undefined8 *)(param_1 + 0x40);
  sVar8 = 0x50;
  do {
    puVar1 = puVar3 + -8;
    do {
      puVar7 = puVar1;
      puVar1 = (undefined8 *)((long)puVar7 + 4);
      *(short *)((long)puVar7 + 2) = sVar8;
      *(undefined1 *)puVar1 = 3;
      *(undefined1 *)((long)puVar7 + 5) = 4;
    } while (puVar1 != puVar3);
    puVar3 = (undefined8 *)((long)puVar7 + 0x44);
    sVar8 = sVar8 + 0x28;
  } while (puVar3 != (undefined8 *)(param_1 + 0x680));
  return;
}



// ===== FUN_710077ff30 @ 710077ff30 (size=240) =====

void FUN_710077ff30(long param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 0x674) = param_2;
  *(undefined1 *)(param_1 + 0xa80) = 1;
  FUN_710077fc90();
  *(undefined2 *)(param_1 + 0x880) = 0x200;
  iVar4 = 1;
  pcVar2 = (char *)(param_1 + 0x783);
  *(undefined8 *)(param_1 + 0x882) = 0x404040404040404;
  iVar1 = 1;
  *(undefined1 *)(param_1 + 0x88a) = 4;
  cVar3 = '\x03';
  *(undefined8 *)(param_1 + 0x973) = 0x606060606060606;
  *(undefined8 *)(param_1 + 0x96b) = 0x606060606060606;
  *(undefined8 *)(param_1 + 0x893) = 0x606060606060606;
  *(undefined8 *)(param_1 + 0x88b) = 0x606060606060606;
  *(undefined8 *)(param_1 + 0x8a3) = 0x606060606060606;
  *(undefined8 *)(param_1 + 0x89b) = 0x606060606060606;
  *(undefined8 *)(param_1 + 0x8b3) = 0x606060606060606;
  *(undefined8 *)(param_1 + 0x8ab) = 0x606060606060606;
  *(undefined8 *)(param_1 + 0x8c3) = 0x606060606060606;
  *(undefined8 *)(param_1 + 0x8bb) = 0x606060606060606;
  *(undefined8 *)(param_1 + 0x8d3) = 0x606060606060606;
  *(undefined8 *)(param_1 + 0x8cb) = 0x606060606060606;
  *(undefined8 *)(param_1 + 0x8e3) = 0x606060606060606;
  *(undefined8 *)(param_1 + 0x8db) = 0x606060606060606;
  *(undefined8 *)(param_1 + 0x8f3) = 0x606060606060606;
  *(undefined8 *)(param_1 + 0x8eb) = 0x606060606060606;
  *(undefined8 *)(param_1 + 0x903) = 0x606060606060606;
  *(undefined8 *)(param_1 + 0x8fb) = 0x606060606060606;
  *(undefined8 *)(param_1 + 0x913) = 0x606060606060606;
  *(undefined8 *)(param_1 + 0x90b) = 0x606060606060606;
  *(undefined8 *)(param_1 + 0x923) = 0x606060606060606;
  *(undefined8 *)(param_1 + 0x91b) = 0x606060606060606;
  *(undefined8 *)(param_1 + 0x933) = 0x606060606060606;
  *(undefined8 *)(param_1 + 0x92b) = 0x606060606060606;
  *(undefined8 *)(param_1 + 0x943) = 0x606060606060606;
  *(undefined8 *)(param_1 + 0x93b) = 0x606060606060606;
  *(undefined8 *)(param_1 + 0x953) = 0x606060606060606;
  *(undefined8 *)(param_1 + 0x94b) = 0x606060606060606;
  *(undefined8 *)(param_1 + 0x963) = 0x606060606060606;
  *(undefined8 *)(param_1 + 0x95b) = 0x606060606060606;
  *(undefined8 *)(param_1 + 0x978) = 0x606060606060606;
  *(undefined2 *)(param_1 + 0x780) = 0x100;
  *(undefined1 *)(param_1 + 0x782) = 2;
  do {
    iVar1 = iVar1 + -1;
    *pcVar2 = cVar3;
    pcVar2 = pcVar2 + 1;
    if (iVar1 == 0) {
      iVar1 = iVar4 + 1;
      cVar3 = cVar3 + '\x01';
      iVar4 = iVar1;
    }
  } while (pcVar2 != (char *)(param_1 + 0x880));
  *(undefined8 *)(param_1 + 0x988) = 0;
  *(undefined8 *)(param_1 + 0x980) = 0;
  *(undefined8 *)(param_1 + 0x998) = 0;
  *(undefined8 *)(param_1 + 0x990) = 0;
  *(undefined8 *)(param_1 + 0x9a8) = 0;
  *(undefined8 *)(param_1 + 0x9a0) = 0;
  *(undefined8 *)(param_1 + 0x9b8) = 0;
  *(undefined8 *)(param_1 + 0x9b0) = 0;
  *(undefined8 *)(param_1 + 0x9c8) = 0x808080808080808;
  *(undefined8 *)(param_1 + 0x9c0) = 0x808080808080808;
  *(undefined8 *)(param_1 + 0x9d8) = 0x808080808080808;
  *(undefined8 *)(param_1 + 0x9d0) = 0x808080808080808;
  *(undefined8 *)(param_1 + 0x9e8) = 0x808080808080808;
  *(undefined8 *)(param_1 + 0x9e0) = 0x808080808080808;
  *(undefined8 *)(param_1 + 0x9f8) = 0x808080808080808;
  *(undefined8 *)(param_1 + 0x9f0) = 0x808080808080808;
  *(undefined8 *)(param_1 + 0xa08) = 0x808080808080808;
  *(undefined8 *)(param_1 + 0xa00) = 0x808080808080808;
  *(undefined8 *)(param_1 + 0xa18) = 0x808080808080808;
  *(undefined8 *)(param_1 + 0xa10) = 0x808080808080808;
  *(undefined8 *)(param_1 + 0xa28) = 0x808080808080808;
  *(undefined8 *)(param_1 + 0xa20) = 0x808080808080808;
  *(undefined8 *)(param_1 + 0xa38) = 0x808080808080808;
  *(undefined8 *)(param_1 + 0xa30) = 0x808080808080808;
  *(undefined8 *)(param_1 + 0xa48) = 0x808080808080808;
  *(undefined8 *)(param_1 + 0xa40) = 0x808080808080808;
  *(undefined8 *)(param_1 + 0xa58) = 0x808080808080808;
  *(undefined8 *)(param_1 + 0xa50) = 0x808080808080808;
  *(undefined8 *)(param_1 + 0xa68) = 0x808080808080808;
  *(undefined8 *)(param_1 + 0xa60) = 0x808080808080808;
  *(undefined8 *)(param_1 + 0xa78) = 0x808080808080808;
  *(undefined8 *)(param_1 + 0xa70) = 0x808080808080808;
  *(undefined1 *)(param_1 + 0x644) = 7;
  return;
}



// ===== FUN_7100780020 @ 7100780020 (size=800) =====

void FUN_7100780020(ushort *param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  ushort uVar11;
  ushort uVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  int iVar23;
  
  uVar11 = *param_1;
  puVar22 = *(undefined8 **)(param_1 + 8);
  puVar17 = *(undefined8 **)(param_2 + 0x660);
  uVar6 = *(undefined1 *)((long)puVar17 + 1);
  if (puVar22 != puVar17) {
    uVar7 = *(undefined1 *)puVar17;
    uVar21 = puVar17[1];
    do {
      puVar18 = puVar17 + -2;
      uVar4 = *puVar18;
      uVar5 = puVar17[-1];
      *(undefined1 *)puVar18 = uVar7;
      *(undefined1 *)((long)puVar17 + -0xf) = uVar6;
      puVar17[-1] = uVar21;
      *puVar17 = uVar4;
      puVar17[1] = uVar5;
      puVar22 = *(undefined8 **)(param_1 + 8);
      puVar17 = puVar18;
    } while (puVar18 != puVar22);
  }
  *(char *)((long)puVar22 + 1) = *(char *)((long)puVar22 + 1) + '\x04';
  uVar12 = param_1[4];
  bVar13 = *(int *)(param_2 + 0x670) != 0;
  param_1[4] = uVar12 + 4;
  bVar8 = *(byte *)((long)puVar22 + 1);
  uVar14 = (uint)bVar8;
  if (bVar13) {
    uVar14 = uVar14 + 1;
  }
  *(char *)((long)puVar22 + 1) = (char)((int)uVar14 >> 1);
  param_1[4] = (ushort)((int)uVar14 >> 1);
  iVar23 = (uint)(ushort)(uVar12 + 4) - (uint)bVar8;
  puVar17 = puVar22;
  do {
    while( true ) {
      puVar18 = puVar17 + 2;
      iVar23 = iVar23 - (uint)*(byte *)((long)puVar17 + 0x11);
      iVar3 = (int)((uint)*(byte *)((long)puVar17 + 0x11) + (uint)bVar13) >> 1;
      *(char *)((long)puVar17 + 0x11) = (char)iVar3;
      param_1[4] = (short)iVar3 + param_1[4];
      bVar8 = *(byte *)((long)puVar17 + 0x11);
      if (bVar8 <= *(byte *)((long)puVar17 + 1)) break;
      uVar6 = *(undefined1 *)puVar18;
      uVar21 = puVar17[3];
      puVar17 = puVar18;
      do {
        puVar19 = puVar17;
        puVar17 = puVar19 + -2;
        *puVar19 = puVar19[-2];
        puVar19[1] = puVar19[-1];
        if (*(undefined8 **)(param_1 + 8) == puVar17) break;
      } while (*(byte *)((long)puVar19 + -0x1f) < bVar8);
      *(undefined1 *)puVar17 = uVar6;
      *(byte *)((long)puVar19 + -0xf) = bVar8;
      puVar19[-1] = uVar21;
      puVar17 = puVar18;
      if (puVar18 == puVar22 + ((ulong)(uVar11 - 2) + 1) * 2) goto LAB_7100780150;
    }
    puVar17 = puVar18;
  } while (puVar18 != puVar22 + ((ulong)(uVar11 - 2) + 1) * 2);
LAB_7100780150:
  puVar22 = puVar22 + (ulong)(uVar11 - 2) * 2 + 2;
  uVar14 = (uint)*(byte *)((long)puVar22 + 1);
  uVar16 = (uint)uVar11;
  if (*(byte *)((long)puVar22 + 1) == 0) {
    do {
      pcVar1 = (char *)((long)puVar22 + -0xf);
      puVar22 = puVar22 + -2;
      uVar14 = uVar14 + 1;
    } while (*pcVar1 == '\0');
    iVar23 = iVar23 + uVar14;
    puVar22 = *(undefined8 **)(param_1 + 8);
    uVar15 = uVar16 - uVar14 & 0xffff;
    *param_1 = (ushort)(uVar16 - uVar14);
    if (uVar15 == 1) {
      uVar6 = *(undefined1 *)puVar22;
      uVar14 = (uint)*(byte *)((long)puVar22 + 1);
      uVar21 = puVar22[1];
      do {
        uVar15 = uVar14 - (uVar14 >> 1);
        iVar23 = iVar23 >> 1;
        uVar14 = uVar15 & 0xff;
      } while (1 < iVar23);
      lVar20 = param_2 + (ulong)*(byte *)(param_2 + (((int)(uVar16 + 1) >> 1) + -1) + 0x4ad6) * 8;
      *puVar22 = *(undefined8 *)(lVar20 + 0x4b70);
      *(undefined8 **)(lVar20 + 0x4b70) = puVar22;
      *(ushort **)(param_2 + 0x660) = param_1 + 4;
      *(undefined1 *)(param_1 + 4) = uVar6;
      *(char *)((long)param_1 + 9) = (char)uVar15;
      *(undefined8 *)(param_1 + 8) = uVar21;
      return;
    }
  }
  else {
    uVar15 = (uint)*param_1;
    puVar22 = *(undefined8 **)(param_1 + 8);
  }
  uVar14 = (int)(uVar16 + 1) >> 1;
  uVar16 = (int)(uVar15 + 1) >> 1;
  param_1[4] = ((short)iVar23 - (short)(iVar23 >> 1)) + param_1[4];
  if (uVar14 != uVar16) {
    lVar20 = param_2 + 0x4aa8;
    bVar8 = *(byte *)(lVar20 + (int)(uVar14 - 1) + 0x2e);
    bVar9 = *(byte *)(lVar20 + (int)(uVar16 - 1) + 0x2e);
    puVar17 = puVar22;
    if ((uint)bVar8 != (uint)bVar9) {
      lVar2 = param_2 + (ulong)bVar9 * 8;
      puVar17 = *(undefined8 **)(lVar2 + 0x4b70);
      if (puVar17 == (undefined8 *)0x0) {
        bVar9 = *(byte *)(lVar20 + (int)(uint)bVar9 + 8);
        puVar17 = puVar22 + (ulong)bVar9 * 4;
        uVar14 = (uint)*(byte *)(lVar20 + (int)(uint)bVar8 + 8) - (uint)bVar9;
        bVar8 = *(byte *)(lVar20 + (int)(uVar14 - 1) + 0x2e);
        bVar10 = *(byte *)(lVar20 + (int)(uint)bVar8 + 8);
        uVar16 = (uint)bVar10;
        if (uVar14 != bVar10) {
          lVar2 = param_2 + (ulong)bVar8 * 8;
          puVar22[(ulong)bVar9 * 4] = *(undefined8 *)(lVar2 + 0x4b68);
          *(undefined8 **)(lVar2 + 0x4b68) = puVar17;
          bVar8 = *(byte *)(lVar20 + (int)(bVar8 - 1) + 8);
          uVar16 = uVar14 - bVar8;
          puVar17 = puVar17 + (ulong)bVar8 * 4;
        }
        lVar20 = param_2 + (ulong)*(byte *)(param_2 + (int)(uVar16 - 1) + 0x4ad6) * 8;
        *puVar17 = *(undefined8 *)(lVar20 + 0x4b70);
        *(undefined8 **)(lVar20 + 0x4b70) = puVar17;
        *(undefined8 **)(param_1 + 8) = puVar22;
        goto LAB_7100780194;
      }
      lVar20 = param_2 + (ulong)bVar8 * 8;
      *(undefined8 *)(lVar2 + 0x4b70) = *puVar17;
      puVar17 = (undefined8 *)FUN_710080f900(puVar17,puVar22,(ulong)uVar16 << 5);
      *puVar22 = *(undefined8 *)(lVar20 + 0x4b70);
      *(undefined8 **)(lVar20 + 0x4b70) = puVar22;
    }
    *(undefined8 **)(param_1 + 8) = puVar17;
    puVar22 = puVar17;
  }
LAB_7100780194:
  *(undefined8 **)(param_2 + 0x660) = puVar22;
  return;
}



// ===== FUN_7100780340 @ 7100780340 (size=592) =====

/* WARNING: Type propagation algorithm not settling */

ushort * FUN_7100780340(long param_1,char param_2,ushort *param_3)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  ushort *puVar4;
  ushort *puVar5;
  char *pcVar6;
  char **ppcVar7;
  char **ppcVar8;
  ushort *puVar9;
  char cVar10;
  ushort *puVar11;
  char *local_200 [64];
  
  puVar9 = *(ushort **)(param_1 + 0x648);
  pcVar6 = *(char **)(param_1 + 0x660);
  puVar4 = *(ushort **)(puVar9 + 0xc);
  puVar11 = *(ushort **)(pcVar6 + 8);
  if (param_2 == '\0') {
    local_200[0] = pcVar6;
    if (puVar4 == (ushort *)0x0) {
      ppcVar7 = local_200 + 1;
      goto LAB_71007803a8;
    }
    ppcVar7 = local_200 + 1;
  }
  else {
    ppcVar7 = local_200;
  }
  if (param_3 == (ushort *)0x0) goto LAB_71007804f8;
  puVar5 = puVar4;
  ppcVar8 = ppcVar7;
  puVar9 = *(ushort **)(param_3 + 4);
  if (puVar11 == *(ushort **)(param_3 + 4)) {
    while( true ) {
      ppcVar7 = ppcVar8 + 1;
      *ppcVar8 = (char *)param_3;
      puVar4 = *(ushort **)(puVar5 + 0xc);
      puVar9 = puVar5;
      if (puVar4 == (ushort *)0x0) break;
LAB_71007804f8:
      param_3 = *(ushort **)(puVar4 + 8);
      if (*puVar4 == 1) {
        param_3 = puVar4 + 4;
      }
      else {
        cVar3 = (char)*param_3;
        while (cVar3 != *pcVar6) {
          param_3 = param_3 + 8;
          cVar3 = (char)*param_3;
        }
      }
      puVar9 = *(ushort **)(param_3 + 4);
      if (*(ushort **)(param_3 + 4) != puVar11) break;
      puVar5 = puVar4;
      ppcVar8 = ppcVar7;
      if (&stack0x00000000 <= ppcVar7) {
        return (ushort *)0x0;
      }
    }
  }
  if (ppcVar7 == local_200) {
    return puVar9;
  }
LAB_71007803a8:
  cVar3 = (char)*puVar11;
  if (*puVar9 == 1) {
    cVar10 = *(char *)((long)puVar9 + 9);
  }
  else {
    if (puVar9 <= *(ushort **)(param_1 + 0x4ca0)) {
      return (ushort *)0x0;
    }
    pcVar6 = *(char **)(puVar9 + 8);
    cVar10 = *pcVar6;
    while (cVar10 != cVar3) {
      pcVar6 = pcVar6 + 0x10;
      cVar10 = *pcVar6;
    }
    iVar1 = (byte)pcVar6[1] - 1;
    uVar2 = ((uint)puVar9[4] - (uint)*puVar9) - iVar1;
    if (uVar2 < (uint)(iVar1 * 2)) {
      cVar10 = '\0';
      if (uVar2 * 2 != 0) {
        cVar10 = (char)((uVar2 * 3 + (iVar1 * 2 - 1U)) / (uVar2 * 2));
      }
      cVar10 = cVar10 + '\x01';
    }
    else {
      cVar10 = (uVar2 < (uint)(iVar1 * 5)) + '\x01';
    }
  }
  do {
    ppcVar7 = ppcVar7 + -1;
    pcVar6 = *ppcVar7;
    puVar4 = (ushort *)(*(long *)(param_1 + 0x4b68) + -0x20);
    if (*(long *)(param_1 + 0x4b68) == *(long *)(param_1 + 0x4b60)) {
      puVar4 = *(ushort **)(param_1 + 0x4b70);
      if (puVar4 == (ushort *)0x0) {
        puVar4 = (ushort *)FUN_710077fad0(param_1 + 0x4aa8,0);
        if (puVar4 == (ushort *)0x0) {
          return (ushort *)0x0;
        }
        goto LAB_710078043c;
      }
      *(undefined8 *)(param_1 + 0x4b70) = *(undefined8 *)puVar4;
      *puVar4 = 1;
      *(char *)(puVar4 + 4) = cVar3;
      *(char *)((long)puVar4 + 9) = cVar10;
      *(char **)(puVar4 + 8) = (char *)((long)puVar11 + 1);
      *(ushort **)(puVar4 + 0xc) = puVar9;
      *(ushort **)(pcVar6 + 8) = puVar4;
      puVar9 = puVar4;
    }
    else {
      *(ushort **)(param_1 + 0x4b68) = puVar4;
LAB_710078043c:
      *puVar4 = 1;
      *(char *)(puVar4 + 4) = cVar3;
      *(char *)((long)puVar4 + 9) = cVar10;
      *(char **)(puVar4 + 8) = (char *)((long)puVar11 + 1);
      *(ushort **)(puVar4 + 0xc) = puVar9;
      *(ushort **)(pcVar6 + 8) = puVar4;
      puVar9 = puVar4;
    }
    if (ppcVar7 == local_200) {
      return puVar9;
    }
  } while( true );
}



// ===== FUN_7100780590 @ 7100780590 (size=1132) =====

void FUN_7100780590(long param_1)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  short sVar12;
  ushort uVar13;
  char *pcVar14;
  ushort *puVar15;
  long lVar16;
  undefined1 uVar17;
  uint uVar18;
  short *psVar20;
  short *psVar21;
  short *psVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  uint uVar26;
  ulong uVar27;
  long lVar28;
  ushort *puVar29;
  ushort *puVar30;
  ushort *puVar31;
  int iVar19;
  
  psVar21 = (short *)0x0;
  pcVar14 = *(char **)(param_1 + 0x660);
  bVar2 = pcVar14[1];
  cVar3 = *pcVar14;
  puVar31 = *(ushort **)(pcVar14 + 8);
  if ((bVar2 < 0x1f) &&
     (psVar20 = *(short **)(*(long *)(param_1 + 0x648) + 0x18), psVar20 != (short *)0x0)) {
    if (*psVar20 == 1) {
      bVar11 = *(byte *)((long)psVar20 + 9);
      psVar21 = psVar20 + 4;
      if (bVar11 < 0x20) {
        bVar11 = bVar11 + 1;
      }
      *(byte *)((long)psVar20 + 9) = bVar11;
    }
    else {
      psVar21 = *(short **)(psVar20 + 8);
      if ((char)*psVar21 == cVar3) {
        bVar11 = *(byte *)((long)psVar21 + 1);
      }
      else {
        do {
          psVar22 = psVar21;
          psVar21 = psVar22 + 8;
        } while ((char)*psVar21 != cVar3);
        bVar11 = *(byte *)((long)psVar22 + 0x11);
        if (*(byte *)((long)psVar22 + 1) <= bVar11) {
          uVar25 = *(undefined8 *)(psVar22 + 0xc);
          *(undefined8 *)psVar21 = *(undefined8 *)psVar22;
          *(undefined8 *)(psVar22 + 0xc) = *(undefined8 *)(psVar22 + 4);
          *(char *)psVar22 = cVar3;
          *(byte *)((long)psVar22 + 1) = bVar11;
          *(undefined8 *)(psVar22 + 4) = uVar25;
          psVar21 = psVar22;
        }
      }
      if (bVar11 < 0x73) {
        *(byte *)((long)psVar21 + 1) = bVar11 + 2;
        psVar20[4] = psVar20[4] + 2;
      }
    }
  }
  if (*(int *)(param_1 + 0x670) == 0) {
    lVar28 = *(long *)(param_1 + 0x660);
    lVar16 = FUN_7100780340(param_1,1,psVar21);
    *(long *)(lVar28 + 8) = lVar16;
    *(long *)(param_1 + 0x648) = lVar16;
    *(long *)(param_1 + 0x658) = lVar16;
    if (lVar16 != 0) {
      return;
    }
  }
  else {
    pcVar14 = *(char **)(param_1 + 0x4ca0);
    *(char **)(param_1 + 0x4ca0) = pcVar14 + 1;
    *pcVar14 = cVar3;
    puVar30 = *(ushort **)(param_1 + 0x4ca0);
    if (puVar30 < *(ushort **)(param_1 + 0x4cb8)) {
      if (puVar31 == (ushort *)0x0) {
        *(ushort **)(*(long *)(param_1 + 0x660) + 8) = puVar30;
        puVar15 = *(ushort **)(param_1 + 0x648);
        puVar29 = *(ushort **)(param_1 + 0x658);
        puVar31 = puVar15;
      }
      else {
        if ((puVar31 <= puVar30) &&
           (puVar31 = (ushort *)FUN_7100780340(param_1,0,psVar21), puVar31 == (ushort *)0x0))
        goto LAB_71007807c0;
        puVar15 = *(ushort **)(param_1 + 0x648);
        puVar29 = *(ushort **)(param_1 + 0x658);
        iVar19 = *(int *)(param_1 + 0x670) + -1;
        *(int *)(param_1 + 0x670) = iVar19;
        if (iVar19 == 0) {
          *(ulong *)(param_1 + 0x4ca0) = *(long *)(param_1 + 0x4ca0) - (ulong)(puVar29 != puVar15);
          puVar30 = puVar31;
        }
      }
      uVar5 = *puVar15;
      lVar16 = param_1 + 0x4aa8;
      uVar6 = puVar15[4];
      if (puVar15 != puVar29) {
        do {
          uVar7 = *puVar29;
          uVar27 = (ulong)uVar7;
          uVar26 = (uint)uVar7;
          if (uVar26 == 1) {
            lVar28 = param_1 + (ulong)*(byte *)(param_1 + 0x4ad6) * 8;
            puVar23 = *(undefined8 **)(lVar28 + 0x4b70);
            if (puVar23 == (undefined8 *)0x0) {
              bVar11 = *(byte *)(lVar16 + (int)(uint)*(byte *)(param_1 + 0x4ad6) + 8);
              puVar23 = *(undefined8 **)(param_1 + 0x4b60);
              *(undefined8 **)(param_1 + 0x4b60) = puVar23 + (ulong)bVar11 * 4;
              if (*(undefined8 **)(param_1 + 0x4b68) < puVar23 + (ulong)bVar11 * 4) {
                *(undefined8 **)(param_1 + 0x4b60) = puVar23;
                puVar23 = (undefined8 *)FUN_710077fad0(param_1 + 0x4aa8);
              }
              if (puVar23 == (undefined8 *)0x0) goto LAB_71007807c0;
            }
            else {
              *(undefined8 *)(lVar28 + 0x4b70) = *puVar23;
            }
            uVar25 = *(undefined8 *)(puVar29 + 8);
            *puVar23 = *(undefined8 *)(puVar29 + 4);
            puVar23[1] = uVar25;
            *(undefined8 **)(puVar29 + 8) = puVar23;
            if (*(byte *)((long)puVar23 + 1) < 0x1e) {
              iVar19 = (*(byte *)((long)puVar23 + 1) & 0x7f) << 1;
              uVar17 = (undefined1)iVar19;
            }
            else {
              iVar19 = 0x78;
              uVar17 = 0x78;
            }
            *(undefined1 *)((long)puVar23 + 1) = uVar17;
            iVar1 = *(int *)(param_1 + 0x66c);
            if (3 < uVar5) {
              iVar1 = iVar1 + 1;
            }
            uVar18 = iVar19 + iVar1;
            puVar23 = *(undefined8 **)(puVar29 + 8);
          }
          else {
            puVar23 = *(undefined8 **)(puVar29 + 8);
            if ((uVar7 & 1) == 0) {
              uVar13 = uVar7 >> 1;
              bVar11 = *(byte *)(lVar16 + (int)(uint)uVar13 + 0x2e);
              bVar4 = *(byte *)(lVar16 + (int)(uVar13 - 1) + 0x2e);
              if (bVar4 == bVar11) {
                if (puVar23 == (undefined8 *)0x0) goto LAB_71007807c0;
              }
              else {
                lVar28 = param_1 + (ulong)bVar11 * 8;
                puVar24 = *(undefined8 **)(lVar28 + 0x4b70);
                if (puVar24 == (undefined8 *)0x0) {
                  bVar11 = *(byte *)(lVar16 + (int)(uint)bVar11 + 8);
                  puVar24 = *(undefined8 **)(param_1 + 0x4b60);
                  *(undefined8 **)(param_1 + 0x4b60) = puVar24 + (ulong)bVar11 * 4;
                  if (*(undefined8 **)(param_1 + 0x4b68) < puVar24 + (ulong)bVar11 * 4) {
                    *(undefined8 **)(param_1 + 0x4b60) = puVar24;
                    puVar24 = (undefined8 *)FUN_710077fad0(param_1 + 0x4aa8);
                  }
                  if (puVar24 == (undefined8 *)0x0) {
                    puVar29[8] = 0;
                    puVar29[9] = 0;
                    puVar29[10] = 0;
                    puVar29[0xb] = 0;
                    goto LAB_71007807c0;
                  }
                }
                else {
                  *(undefined8 *)(lVar28 + 0x4b70) = *puVar24;
                }
                puVar24 = (undefined8 *)FUN_710080f900(puVar24,puVar23,(ulong)uVar13 << 5);
                lVar28 = param_1 + (ulong)bVar4 * 8;
                *puVar23 = *(undefined8 *)(lVar28 + 0x4b70);
                *(undefined8 **)(lVar28 + 0x4b70) = puVar23;
                *(undefined8 **)(puVar29 + 8) = puVar24;
                puVar23 = puVar24;
              }
            }
            uVar13 = puVar29[4];
            bVar9 = false;
            bVar10 = true;
            if (uVar26 << 2 <= (uint)uVar5) {
              bVar10 = (uint)uVar7 * 8 <= (uint)uVar13;
              bVar9 = (uint)uVar13 == (uint)uVar7 * 8;
            }
            uVar18 = (uint)uVar13;
            if (uVar26 * 2 < (uint)uVar5) {
              uVar18 = uVar18 + 1;
            }
            uVar18 = uVar18 + (uint)(!bVar10 || bVar9) * 2;
          }
          uVar26 = (uVar18 & 0xffff) + (((uint)uVar6 - (uint)uVar5) - (uint)bVar2) + 1;
          uVar8 = ((uVar18 & 0xffff) + 6) * (uint)bVar2 * 2;
          if (uVar8 < uVar26 * 6) {
            uVar13 = (short)uVar18 + 3;
            sVar12 = (uVar26 < uVar8) + 1;
            if (uVar26 * 4 <= uVar8) {
              sVar12 = (uVar26 < uVar8) + 2;
            }
          }
          else {
            uVar13 = (ushort)(uVar26 * 9 <= uVar8);
            sVar12 = uVar13 + 4;
            if (uVar26 * 0xc <= uVar8) {
              sVar12 = uVar13 + 5;
            }
            if (uVar26 * 0xf <= uVar8) {
              sVar12 = sVar12 + 1;
            }
            uVar13 = (short)uVar18 + sVar12;
          }
          puVar29[4] = uVar13;
          puVar23[uVar27 * 2 + 1] = puVar30;
          *(char *)(puVar23 + uVar27 * 2) = cVar3;
          *(char *)((long)puVar23 + uVar27 * 0x10 + 1) = (char)sVar12;
          *puVar29 = uVar7 + 1;
          puVar29 = *(ushort **)(puVar29 + 0xc);
        } while (*(ushort **)(param_1 + 0x648) != puVar29);
      }
      *(ushort **)(param_1 + 0x648) = puVar31;
      *(ushort **)(param_1 + 0x658) = puVar31;
      return;
    }
  }
LAB_71007807c0:
  FUN_710077fc90(param_1);
  *(undefined1 *)(param_1 + 0xa80) = 0;
  return;
}



// ===== FUN_7100780a00 @ 7100780a00 (size=672) =====

undefined8 FUN_7100780a00(ushort *param_1,long param_2)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  ulong uVar8;
  byte **ppbVar9;
  long lVar10;
  byte *pbVar11;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ushort *puVar17;
  byte *local_800 [256];
  byte *pbVar12;
  
  uVar3 = *param_1;
  iVar4 = (uint)uVar3 - *(int *)(param_2 + 0x668);
  if (uVar3 == 0x100) {
    puVar17 = (ushort *)(param_2 + 0x642);
    iVar16 = 1;
  }
  else {
    lVar10 = (ulong)(iVar4 < *(int *)(param_2 + 0x668)) * 4 +
             (ulong)((uint)param_1[4] < (uint)uVar3 * 0xb) * 2 + (ulong)*(byte *)(param_2 + 0xa82);
    if (iVar4 < (int)((uint)**(ushort **)(param_1 + 0xc) - (uint)uVar3)) {
      lVar10 = lVar10 + 1;
    }
    lVar10 = (ulong)*(byte *)(param_2 + (iVar4 + -1) + 0x780) * 0x40 + 2 + lVar10 * 4;
    puVar17 = (ushort *)(param_2 + lVar10);
    iVar16 = (int)(uint)*(ushort *)(param_2 + lVar10) >> ((byte)puVar17[1] & 0x1f);
    sVar7 = (short)iVar16;
    if (iVar16 == 0) {
      iVar16 = 1;
    }
    *(ushort *)(param_2 + lVar10) = *(ushort *)(param_2 + lVar10) - sVar7;
  }
  lVar10 = *(long *)(param_1 + 8);
  *(int *)(param_2 + 0x4a9c) = iVar16;
  iVar15 = 0;
  cVar1 = *(char *)(param_2 + 0xa80);
  pbVar11 = (byte *)(lVar10 + -0x10);
  ppbVar9 = local_800;
  iVar14 = iVar4;
  do {
    do {
      pbVar12 = pbVar11;
      pbVar11 = pbVar12 + 0x10;
    } while (*(char *)(param_2 + (ulong)*pbVar11 + 0x680) == cVar1);
    iVar15 = iVar15 + (uint)pbVar12[0x11];
    if (&stack0x00000000 <= ppbVar9) {
      return 0;
    }
    iVar14 = iVar14 + -1;
    *ppbVar9 = pbVar11;
    ppbVar9 = ppbVar9 + 1;
  } while (iVar14 != 0);
  uVar13 = iVar15 + iVar16;
  *(uint *)(param_2 + 0x4a9c) = uVar13;
  uVar5 = 0;
  if (uVar13 != 0) {
    uVar5 = *(uint *)(param_2 + 0x4a90) / uVar13;
  }
  uVar6 = 0;
  if (uVar5 != 0) {
    uVar6 = (uint)(*(int *)(param_2 + 0x4a8c) - *(int *)(param_2 + 0x4a88)) / uVar5;
  }
  *(uint *)(param_2 + 0x4a90) = uVar5;
  if ((int)uVar6 < (int)uVar13) {
    if ((int)uVar6 < iVar15) {
      uVar13 = (uint)local_800[0][1];
      ppbVar9 = local_800 + 1;
      if ((int)uVar6 < (int)(uint)local_800[0][1]) {
LAB_7100780bec:
        *(uint *)(param_2 + 0x4a98) = uVar13;
        *(uint *)(param_2 + 0x4a94) = uVar13 - local_800[0][1];
        bVar2 = (byte)puVar17[1];
        if ((bVar2 < 7) &&
           (cVar1 = *(char *)((long)puVar17 + 3) + -1, *(char *)((long)puVar17 + 3) = cVar1,
           cVar1 == '\0')) {
          *(byte *)(puVar17 + 1) = bVar2 + 1;
          *(char *)((long)puVar17 + 3) = (char)(3 << (ulong)(bVar2 & 0x1f));
          *puVar17 = (ushort)((*puVar17 & 0x7fff) << 1);
        }
        *(byte **)(param_2 + 0x660) = local_800[0];
        local_800[0][1] = local_800[0][1] + 4;
        param_1[4] = param_1[4] + 4;
        if (0x7c < local_800[0][1]) {
          FUN_7100780020(param_1);
        }
        *(undefined4 *)(param_2 + 0x678) = *(undefined4 *)(param_2 + 0x67c);
        *(char *)(param_2 + 0xa80) = *(char *)(param_2 + 0xa80) + '\x01';
        return 1;
      }
      do {
        local_800[0] = *ppbVar9;
        ppbVar9 = ppbVar9 + 1;
        uVar13 = uVar13 + local_800[0][1];
        if ((int)uVar6 < (int)uVar13) goto LAB_7100780bec;
      } while (ppbVar9 != (byte **)&stack0x00000000);
    }
    else {
      *(int *)(param_2 + 0x4a94) = iVar15;
      *(uint *)(param_2 + 0x4a98) = uVar13;
      uVar8 = 0;
      while( true ) {
        *(char *)(param_2 + (ulong)*local_800[0] + 0x680) = cVar1;
        if (iVar4 - 1 == uVar8) {
          uVar3 = *param_1;
          *puVar17 = (short)uVar13 + *puVar17;
          *(uint *)(param_2 + 0x668) = (uint)uVar3;
          return 1;
        }
        if (uVar8 == 0xff) break;
        local_800[0] = local_800[uVar8 + 1];
        uVar8 = uVar8 + 1;
      }
    }
  }
  return 0;
}



// ===== FUN_7100780ca0 @ 7100780ca0 (size=64) =====

void FUN_7100780ca0(long param_1)

{
  FUN_710077f710(param_1 + 0x4aa8);
  FUN_710077f730(param_1 + 0x4aa8,1);
  FUN_710077ff30(param_1,2);
  return;
}



// ===== FUN_7100780ce0 @ 7100780ce0 (size=380) =====

void FUN_7100780ce0(long param_1,uint param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  
  uVar8 = *(ulong *)(param_1 + 0xb8);
  uVar5 = uVar8 - (param_3 & 0xffffffff);
  uVar6 = uVar8;
  if (uVar8 < uVar5) {
    uVar6 = uVar5;
  }
  if (uVar6 < *(long *)(param_1 + 0xe948) - 0x1004U) {
    *(ulong *)(param_1 + 0xb8) = uVar8 + param_2;
    puVar10 = (undefined1 *)(*(long *)(param_1 + 0x4b88) + uVar5);
    puVar11 = (undefined1 *)(*(long *)(param_1 + 0x4b88) + uVar8);
    if (param_2 < 8) {
      if (param_2 == 0) {
        return;
      }
    }
    else {
      lVar3 = (ulong)((param_2 - 8 >> 3) + 1) * 8;
      puVar4 = puVar11;
      puVar7 = puVar10;
      do {
        puVar2 = puVar7 + 8;
        *puVar4 = *puVar7;
        puVar4[1] = puVar7[1];
        puVar4[2] = puVar7[2];
        puVar4[3] = puVar7[3];
        puVar4[4] = puVar7[4];
        puVar4[5] = puVar7[5];
        puVar4[6] = puVar7[6];
        puVar4[7] = puVar7[7];
        puVar4 = puVar4 + 8;
        puVar7 = puVar2;
      } while (puVar2 != puVar10 + lVar3);
      param_2 = param_2 & 7;
      puVar11 = puVar11 + lVar3;
      puVar10 = puVar10 + lVar3;
      if (param_2 == 0) {
        return;
      }
    }
    *puVar11 = *puVar10;
    if ((((param_2 != 1) && (puVar11[1] = puVar10[1], param_2 != 2)) &&
        (puVar11[2] = puVar10[2], param_2 != 3)) &&
       (((puVar11[3] = puVar10[3], param_2 != 4 && (puVar11[4] = puVar10[4], param_2 != 5)) &&
        (puVar11[5] = puVar10[5], param_2 == 7)))) {
      puVar11[6] = puVar10[6];
      return;
    }
  }
  else if (param_2 != 0) {
    uVar9 = *(ulong *)(param_1 + 0xe950);
    uVar6 = uVar5;
    do {
      uVar1 = uVar6 + 1;
      *(undefined1 *)(*(long *)(param_1 + 0x4b88) + uVar8) =
           *(undefined1 *)(*(long *)(param_1 + 0x4b88) + (uVar9 & uVar6));
      uVar9 = *(ulong *)(param_1 + 0xe950);
      uVar8 = *(long *)(param_1 + 0xb8) + 1U & uVar9;
      *(ulong *)(param_1 + 0xb8) = uVar8;
      uVar6 = uVar1;
    } while (uVar1 != uVar5 + param_2);
  }
  return;
}



// ===== FUN_7100780e60 @ 7100780e60 (size=64) =====

void FUN_7100780e60(long param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x58c0) = 0;
    *(undefined8 *)(param_1 + 0x58c8) = 0;
    *(undefined8 *)(param_1 + 0x58b8) = 0x3500;
    *(undefined4 *)(param_1 + 0x58d0) = 0;
    *(undefined8 *)(param_1 + 0x58e0) = 0x8000000080;
    *(undefined4 *)(param_1 + 0x58e8) = 0x2001;
  }
  *(undefined4 *)(param_1 + 0x58b4) = 0;
  *(undefined4 *)(param_1 + 0x58d4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0x58d8) = 0;
  return;
}



// ===== FUN_7100780ea0 @ 7100780ea0 (size=132) =====

void FUN_7100780ea0(undefined8 param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  ushort *puVar2;
  char cVar3;
  ushort *puVar4;
  char *pcVar5;
  ushort *puVar6;
  int iVar7;
  
  puVar6 = (ushort *)(param_2 + 0x40);
  iVar7 = 7;
  do {
    puVar2 = puVar6 + -0x20;
    do {
      puVar4 = puVar2;
      *puVar4 = (ushort)iVar7 | *puVar4 & 0xff00;
      puVar2 = puVar4 + 1;
    } while (puVar4 + 1 != puVar6);
    iVar7 = iVar7 + -1;
    puVar6 = puVar4 + 0x21;
  } while (iVar7 != -1);
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
  param_3[0xd] = 0;
  param_3[0xc] = 0;
  param_3[0xf] = 0;
  param_3[0xe] = 0;
  param_3[0x11] = 0;
  param_3[0x10] = 0;
  param_3[0x13] = 0;
  param_3[0x12] = 0;
  param_3[0x15] = 0;
  param_3[0x14] = 0;
  param_3[0x17] = 0;
  param_3[0x16] = 0;
  param_3[0x19] = 0;
  param_3[0x18] = 0;
  param_3[0x1b] = 0;
  param_3[0x1a] = 0;
  param_3[0x1d] = 0;
  param_3[0x1c] = 0;
  param_3[0x1f] = 0;
  param_3[0x1e] = 0;
  pcVar5 = (char *)((long)param_3 + 6);
  cVar3 = ' ';
  do {
    cVar1 = cVar3 + ' ';
    *pcVar5 = cVar3;
    pcVar5 = pcVar5 + -1;
    cVar3 = cVar1;
  } while (cVar1 != '\0');
  return;
}



// ===== FUN_7100780f30 @ 7100780f30 (size=196) =====

void FUN_7100780f30(long param_1)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = 0;
  psVar1 = (short *)(param_1 + 0x4db2);
  sVar2 = 0;
  do {
    psVar1[0x100] = (short)iVar3;
    iVar3 = iVar3 + 1;
    *psVar1 = sVar2;
    psVar1[0x200] = sVar2;
    psVar1[0x300] = -sVar2;
    psVar1 = psVar1 + 1;
    sVar2 = sVar2 + 0x100;
  } while (iVar3 != 0x100);
  *(undefined8 *)(param_1 + 0x55ba) = 0;
  *(undefined8 *)(param_1 + 0x55b2) = 0;
  *(undefined8 *)(param_1 + 0x55ca) = 0;
  *(undefined8 *)(param_1 + 0x55c2) = 0;
  *(undefined8 *)(param_1 + 0x55da) = 0;
  *(undefined8 *)(param_1 + 0x55d2) = 0;
  *(undefined8 *)(param_1 + 0x55ea) = 0;
  *(undefined8 *)(param_1 + 0x55e2) = 0;
  *(undefined8 *)(param_1 + 0x55fa) = 0;
  *(undefined8 *)(param_1 + 0x55f2) = 0;
  *(undefined8 *)(param_1 + 0x560a) = 0;
  *(undefined8 *)(param_1 + 0x5602) = 0;
  *(undefined8 *)(param_1 + 0x561a) = 0;
  *(undefined8 *)(param_1 + 0x5612) = 0;
  *(undefined8 *)(param_1 + 0x562a) = 0;
  *(undefined8 *)(param_1 + 0x5622) = 0;
  *(undefined8 *)(param_1 + 0x563a) = 0;
  *(undefined8 *)(param_1 + 0x5632) = 0;
  *(undefined8 *)(param_1 + 0x564a) = 0;
  *(undefined8 *)(param_1 + 0x5642) = 0;
  *(undefined8 *)(param_1 + 0x565a) = 0;
  *(undefined8 *)(param_1 + 0x5652) = 0;
  *(undefined8 *)(param_1 + 0x566a) = 0;
  *(undefined8 *)(param_1 + 0x5662) = 0;
  *(undefined8 *)(param_1 + 0x567a) = 0;
  *(undefined8 *)(param_1 + 0x5672) = 0;
  *(undefined8 *)(param_1 + 0x568a) = 0;
  *(undefined8 *)(param_1 + 0x5682) = 0;
  *(undefined8 *)(param_1 + 0x569a) = 0;
  *(undefined8 *)(param_1 + 0x5692) = 0;
  *(undefined8 *)(param_1 + 0x56aa) = 0;
  *(undefined8 *)(param_1 + 0x56a2) = 0;
  *(undefined8 *)(param_1 + 0x56ba) = 0;
  *(undefined8 *)(param_1 + 0x56b2) = 0;
  *(undefined8 *)(param_1 + 0x56ca) = 0;
  *(undefined8 *)(param_1 + 0x56c2) = 0;
  *(undefined8 *)(param_1 + 0x56da) = 0;
  *(undefined8 *)(param_1 + 0x56d2) = 0;
  *(undefined8 *)(param_1 + 0x56ea) = 0;
  *(undefined8 *)(param_1 + 0x56e2) = 0;
  *(undefined8 *)(param_1 + 0x56fa) = 0;
  *(undefined8 *)(param_1 + 0x56f2) = 0;
  *(undefined8 *)(param_1 + 0x570a) = 0;
  *(undefined8 *)(param_1 + 0x5702) = 0;
  *(undefined8 *)(param_1 + 0x571a) = 0;
  *(undefined8 *)(param_1 + 0x5712) = 0;
  *(undefined8 *)(param_1 + 0x572a) = 0;
  *(undefined8 *)(param_1 + 0x5722) = 0;
  *(undefined8 *)(param_1 + 0x573a) = 0;
  *(undefined8 *)(param_1 + 0x5732) = 0;
  *(undefined8 *)(param_1 + 0x574a) = 0;
  *(undefined8 *)(param_1 + 0x5742) = 0;
  *(undefined8 *)(param_1 + 0x575a) = 0;
  *(undefined8 *)(param_1 + 0x5752) = 0;
  *(undefined8 *)(param_1 + 0x576a) = 0;
  *(undefined8 *)(param_1 + 0x5762) = 0;
  *(undefined8 *)(param_1 + 0x577a) = 0;
  *(undefined8 *)(param_1 + 0x5772) = 0;
  *(undefined8 *)(param_1 + 0x578a) = 0;
  *(undefined8 *)(param_1 + 0x5782) = 0;
  *(undefined8 *)(param_1 + 0x579a) = 0;
  *(undefined8 *)(param_1 + 0x5792) = 0;
  *(undefined8 *)(param_1 + 0x57aa) = 0;
  *(undefined8 *)(param_1 + 0x57a2) = 0;
  *(undefined8 *)(param_1 + 0x57ba) = 0;
  *(undefined8 *)(param_1 + 0x57b2) = 0;
  *(undefined8 *)(param_1 + 0x57ca) = 0;
  *(undefined8 *)(param_1 + 0x57c2) = 0;
  *(undefined8 *)(param_1 + 0x57da) = 0;
  *(undefined8 *)(param_1 + 0x57d2) = 0;
  *(undefined8 *)(param_1 + 0x57ea) = 0;
  *(undefined8 *)(param_1 + 0x57e2) = 0;
  *(undefined8 *)(param_1 + 0x57fa) = 0;
  *(undefined8 *)(param_1 + 0x57f2) = 0;
  *(undefined8 *)(param_1 + 0x580a) = 0;
  *(undefined8 *)(param_1 + 0x5802) = 0;
  *(undefined8 *)(param_1 + 0x581a) = 0;
  *(undefined8 *)(param_1 + 0x5812) = 0;
  *(undefined8 *)(param_1 + 0x582a) = 0;
  *(undefined8 *)(param_1 + 0x5822) = 0;
  *(undefined8 *)(param_1 + 0x583a) = 0;
  *(undefined8 *)(param_1 + 0x5832) = 0;
  *(undefined8 *)(param_1 + 0x584a) = 0;
  *(undefined8 *)(param_1 + 0x5842) = 0;
  *(undefined8 *)(param_1 + 0x585a) = 0;
  *(undefined8 *)(param_1 + 0x5852) = 0;
  *(undefined8 *)(param_1 + 0x586a) = 0;
  *(undefined8 *)(param_1 + 0x5862) = 0;
  *(undefined8 *)(param_1 + 0x587a) = 0;
  *(undefined8 *)(param_1 + 0x5872) = 0;
  *(undefined8 *)(param_1 + 0x588a) = 0;
  *(undefined8 *)(param_1 + 0x5882) = 0;
  *(undefined8 *)(param_1 + 0x589a) = 0;
  *(undefined8 *)(param_1 + 0x5892) = 0;
  *(undefined8 *)(param_1 + 0x58aa) = 0;
  *(undefined8 *)(param_1 + 0x58a2) = 0;
  FUN_7100780ea0(param_1,param_1 + 0x51b2);
  return;
}



// ===== FUN_7100781000 @ 7100781000 (size=96) =====

void FUN_7100781000(long param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  
  *(ulong *)(param_1 + 0x4d98) = *(long *)(param_1 + 0x4d98) - (ulong)param_3;
  iVar2 = param_3 - 1;
  if (param_3 != 0) {
    uVar1 = *(ulong *)(param_1 + 0xb8);
    uVar3 = *(ulong *)(param_1 + 0xe950);
    do {
      iVar2 = iVar2 + -1;
      *(undefined1 *)(*(long *)(param_1 + 0x4b88) + uVar1) =
           *(undefined1 *)(*(long *)(param_1 + 0x4b88) + (uVar1 - (param_2 & 0xffffffff) & uVar3));
      uVar3 = *(ulong *)(param_1 + 0xe950);
      uVar1 = *(long *)(param_1 + 0xb8) + 1U & uVar3;
      *(ulong *)(param_1 + 0xb8) = uVar1;
    } while (iVar2 != -1);
  }
  return;
}



// ===== FUN_7100781060 @ 7100781060 (size=160) =====

int FUN_7100781060(long param_1,uint param_2,uint param_3,uint *param_4,long param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  param_2 = param_2 & 0xfff0;
  uVar3 = (ulong)param_3;
  if (param_2 < *param_4) {
    FUN_7100790bd0(param_1 + 8,param_3);
  }
  else {
    lVar1 = 4;
    do {
      lVar2 = lVar1;
      uVar3 = (ulong)((int)uVar3 + 1);
      lVar1 = lVar2 + 4;
    } while (*(uint *)((long)param_4 + lVar2) <= param_2);
    FUN_7100790bd0(param_1 + 8,uVar3);
    param_2 = param_2 - *(int *)((long)param_4 + lVar2 + -4);
  }
  return (param_2 >> (ulong)(0x10U - (int)uVar3 & 0x1f)) + *(int *)(param_5 + uVar3 * 4);
}



// ===== FUN_7100781100 @ 7100781100 (size=892) =====

void FUN_7100781100(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  undefined2 uVar6;
  byte bVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  
  lVar2 = param_1 + 8;
  *(undefined4 *)(param_1 + 0x58d0) = 0;
  uVar10 = FUN_7100790bf0(lVar2);
  uVar4 = (uint)((ulong)uVar10 >> 8);
  if (*(int *)(param_1 + 0x58d8) == 2) {
    FUN_7100790bd0(lVar2,1);
    if (0x7fff < (uint)uVar10) goto LAB_7100781460;
    uVar4 = ((uint)uVar10 << 1) >> 8;
    *(undefined4 *)(param_1 + 0x58d8) = 0;
  }
  if (*(uint *)(param_1 + 0x58c0) < 0x25) {
    uVar11 = 0;
    uVar12 = 0;
    while( true ) {
      uVar13 = (uint)uVar11;
      if (uVar11 == 1) {
        uVar1 = *(int *)(param_1 + 0x58cc) + 3;
      }
      else {
        uVar1 = (&DAT_71009c5bf0)[uVar11];
      }
      if (((uVar4 & 0xffffff ^ uVar12) & -0x100 >> (uVar1 & 0x1f)) == 0) break;
      uVar11 = uVar11 + 1;
      uVar12 = *(uint *)(&UNK_71009c5c70 + uVar11 * 4);
    }
    if (uVar13 == 1) {
LAB_7100781364:
      uVar13 = (uint)uVar11;
      iVar9 = *(int *)(param_1 + 0x58cc) + 3;
    }
    else {
      iVar9 = (&DAT_71009c5bf0)[uVar11 & 0xffffffff];
    }
    FUN_7100790bd0(lVar2,iVar9);
  }
  else {
    uVar11 = 0;
    uVar12 = 0;
    while( true ) {
      uVar13 = (uint)uVar11;
      if (uVar11 == 3) {
        uVar1 = *(int *)(param_1 + 0x58cc) + 3;
      }
      else {
        uVar1 = (&DAT_71009c5c30)[uVar11];
      }
      if (((uVar4 & 0xffffff ^ uVar12) & -0x100 >> (uVar1 & 0x1f)) == 0) break;
      uVar11 = uVar11 + 1;
      uVar12 = *(uint *)(&UNK_71009c5cb0 + uVar11 * 4);
    }
    if (uVar13 == 3) goto LAB_7100781364;
    FUN_7100790bd0(lVar2,(&DAT_71009c5c30)[uVar11 & 0xffffffff]);
  }
  if (uVar13 < 9) {
    *(undefined4 *)(param_1 + 0x58d8) = 0;
    uVar4 = uVar13 + *(int *)(param_1 + 0x58c0);
    *(uint *)(param_1 + 0x58c0) = uVar4 - (uVar4 >> 4);
    uVar8 = FUN_7100790bf0(lVar2);
    bVar7 = FUN_7100781060(param_1,uVar8,5,&DAT_7100af39e0,&DAT_7100af3aa8);
    lVar2 = param_1 + (ulong)bVar7 * 2;
    uVar5 = *(ushort *)(lVar2 + 0x4fb2);
    if (bVar7 != 0) {
      uVar6 = *(undefined2 *)(lVar2 + 0x4fb0);
      *(ushort *)(lVar2 + 0x4fb0) = uVar5;
      *(undefined2 *)(lVar2 + 0x4fb2) = uVar6;
    }
    uVar4 = *(uint *)(param_1 + 0xa8);
    iVar9 = uVar5 + 1;
    *(int *)(param_1 + (ulong)uVar4 * 4 + 0x98) = iVar9;
    *(int *)(param_1 + 0xb0) = iVar9;
    *(uint *)(param_1 + 0xa8) = uVar4 + 1 & 3;
    *(uint *)(param_1 + 0xac) = uVar13 + 2;
    FUN_7100781000(param_1);
    return;
  }
  if (uVar13 != 9) {
    if (uVar13 == 0xe) {
      *(undefined4 *)(param_1 + 0x58d8) = 0;
      uVar8 = FUN_7100790bf0(lVar2);
      iVar9 = FUN_7100781060(param_1,uVar8,3,&DAT_7100af3900,&DAT_7100af3960);
      uVar11 = FUN_7100790bf0(lVar2);
      uVar4 = (uint)(uVar11 >> 1) & 0x7fffffff | 0x8000;
      FUN_7100790bd0(lVar2,0xf);
      *(int *)(param_1 + 0xac) = iVar9 + 5;
      *(uint *)(param_1 + 0xb0) = uVar4;
      FUN_7100781000(param_1,uVar4,iVar9 + 5);
      return;
    }
    *(undefined4 *)(param_1 + 0x58d8) = 0;
    uVar4 = *(uint *)(param_1 + ((ulong)((*(int *)(param_1 + 0xa8) + 9) - uVar13) & 3) * 4 + 0x98);
    uVar8 = FUN_7100790bf0(lVar2);
    iVar9 = FUN_7100781060(param_1,uVar8,2,&DAT_7100af38d0,&DAT_7100af3928);
    if (iVar9 != 0xff || uVar13 != 10) {
      uVar12 = *(uint *)(param_1 + 0xa8);
      iVar3 = iVar9 + 3;
      if (uVar4 < 0x101) {
        iVar3 = iVar9 + 2;
      }
      uVar13 = *(uint *)(param_1 + 0x58e8);
      *(uint *)(param_1 + (ulong)uVar12 * 4 + 0x98) = uVar4;
      *(uint *)(param_1 + 0xb0) = uVar4;
      if (uVar13 <= uVar4) {
        iVar3 = iVar3 + 1;
      }
      *(uint *)(param_1 + 0xa8) = uVar12 + 1 & 3;
      *(int *)(param_1 + 0xac) = iVar3;
      FUN_7100781000(param_1,uVar4);
      return;
    }
    *(uint *)(param_1 + 0x58cc) = *(uint *)(param_1 + 0x58cc) ^ 1;
    return;
  }
  *(int *)(param_1 + 0x58d8) = *(int *)(param_1 + 0x58d8) + 1;
LAB_7100781460:
  FUN_7100781000(param_1,*(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xac));
  return;
}



// ===== FUN_7100781480 @ 7100781480 (size=888) =====

void FUN_7100781480(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  
  uVar17 = *(int *)(param_1 + 0x58e4) + 0x10;
  *(undefined4 *)(param_1 + 0x58d0) = 0;
  if (uVar17 < 0x100) {
    *(uint *)(param_1 + 0x58e4) = uVar17;
    uVar17 = *(uint *)(param_1 + 0x58c4);
    uVar5 = FUN_7100790bf0(param_1 + 8);
    uVar9 = *(uint *)(param_1 + 0x58c4);
    if (uVar9 < 0x7a) goto LAB_71007814dc;
LAB_710078170c:
    puVar13 = &DAT_7100af3960;
    puVar12 = &DAT_7100af3900;
    uVar11 = 3;
LAB_7100781740:
    uVar5 = FUN_7100781060(param_1,uVar5,uVar11,puVar12,puVar13);
    uVar9 = (uint)(uVar5 != 1 && uVar5 != 4);
  }
  else {
    *(undefined4 *)(param_1 + 0x58e4) = 0x90;
    uVar17 = *(uint *)(param_1 + 0x58c4);
    *(uint *)(param_1 + 0x58e0) = *(uint *)(param_1 + 0x58e0) >> 1;
    uVar5 = FUN_7100790bf0(param_1 + 8);
    uVar9 = *(uint *)(param_1 + 0x58c4);
    if (0x79 < uVar9) goto LAB_710078170c;
LAB_71007814dc:
    if (0x3f < uVar9) {
      puVar13 = &DAT_7100af3928;
      puVar12 = &DAT_7100af38d0;
      uVar11 = 2;
      goto LAB_7100781740;
    }
    if (uVar5 < 0x100) {
      FUN_7100790bd0(param_1 + 8,0x10);
      uVar9 = (uint)(uVar5 != 1 && uVar5 != 4);
    }
    else {
      uVar15 = uVar5 & 0x8000;
      if ((uVar5 >> 0xf & 1) == 0) {
        do {
          uVar14 = uVar15;
          uVar15 = uVar14 + 1;
        } while (((uVar5 << (ulong)(uVar15 & 0x1f)) >> 0xf & 1) == 0);
        uVar9 = (uint)(uVar15 != 1 && uVar15 != 4);
        uVar5 = uVar14 + 2;
      }
      else {
        uVar9 = 1;
        uVar15 = 0;
        uVar5 = uVar9;
      }
      FUN_7100790bd0(param_1 + 8,uVar5);
      uVar5 = uVar15;
    }
  }
  lVar16 = param_1 + 8;
  uVar15 = uVar5 + *(int *)(param_1 + 0x58c4);
  *(uint *)(param_1 + 0x58c4) = uVar15 - (uVar15 >> 5);
  uVar6 = FUN_7100790bf0(lVar16);
  if (*(uint *)(param_1 + 0x58bc) < 0x2900) {
    if (*(uint *)(param_1 + 0x58bc) < 0x700) {
      uVar8 = FUN_7100781060(param_1,uVar6,4,&DAT_7100af3998,&DAT_7100af3a38);
    }
    else {
      uVar8 = FUN_7100781060(param_1,uVar6,5,&DAT_7100af39c0,&DAT_7100af3a70);
    }
  }
  else {
    uVar8 = FUN_7100781060(param_1,uVar6,5,&DAT_7100af39e0,&DAT_7100af3aa8);
  }
  lVar1 = param_1 + (uVar8 & 0xff) * 2;
  uVar15 = (int)uVar8 + *(int *)(param_1 + 0x58bc);
  *(uint *)(param_1 + 0x58bc) = uVar15 - (uVar15 >> 8);
  lVar2 = param_1 + (ulong)(byte)*(ushort *)(lVar1 + 0x51b2);
  bVar4 = *(byte *)(lVar2 + 0x56b2);
  uVar15 = *(ushort *)(lVar1 + 0x51b2) + 1;
  *(byte *)(lVar2 + 0x56b2) = bVar4 + 1;
  if ((uVar15 & 0xff) == 0) {
    do {
      FUN_7100780ea0(param_1,param_1 + 0x51b2,param_1 + 0x56b2);
      lVar2 = param_1 + (ulong)(byte)*(ushort *)(lVar1 + 0x51b2);
      bVar4 = *(byte *)(lVar2 + 0x56b2);
      uVar15 = *(ushort *)(lVar1 + 0x51b2) + 1;
      *(byte *)(lVar2 + 0x56b2) = bVar4 + 1;
    } while ((uVar15 & 0xff) == 0);
  }
  lVar2 = param_1 + (ulong)bVar4 * 2;
  *(undefined2 *)(lVar1 + 0x51b2) = *(undefined2 *)(lVar2 + 0x51b2);
  *(short *)(lVar2 + 0x51b2) = (short)uVar15;
  uVar7 = FUN_7100790bf0(lVar16);
  FUN_7100790bd0(lVar16,7);
  uVar14 = *(uint *)(param_1 + 0x58c8);
  uVar15 = (uVar15 & 0xff00 | uVar7 >> 8) >> 1;
  if (uVar9 == 0) {
LAB_7100781658:
    iVar10 = uVar5 + 3;
    if (uVar15 < *(uint *)(param_1 + 0x58e8)) goto LAB_7100781664;
  }
  else {
    if (uVar5 != 0) {
      if (uVar14 != 0) {
LAB_71007817b4:
        *(uint *)(param_1 + 0x58c8) = uVar14 - 1;
      }
      goto LAB_7100781658;
    }
    if (uVar15 <= *(uint *)(param_1 + 0x58e8)) {
      *(uint *)(param_1 + 0x58c8) = (uVar14 + 1) - (uVar14 + 1 >> 8);
      goto LAB_7100781658;
    }
    if (uVar14 != 0) goto LAB_71007817b4;
  }
  iVar10 = uVar5 + 4;
LAB_7100781664:
  iVar3 = iVar10 + 8;
  if (0x100 < uVar15) {
    iVar3 = iVar10;
  }
  uVar6 = 0x7f00;
  if ((uVar14 < 0xb1) && (uVar6 = 0x7f00, 0x3f < uVar17 || *(uint *)(param_1 + 0x58b8) < 0x2a00)) {
    uVar6 = 0x2001;
  }
  *(undefined4 *)(param_1 + 0x58e8) = uVar6;
  uVar17 = *(uint *)(param_1 + 0xa8);
  *(uint *)(param_1 + (ulong)uVar17 * 4 + 0x98) = uVar15;
  *(uint *)(param_1 + 0xb0) = uVar15;
  *(uint *)(param_1 + 0xa8) = uVar17 + 1 & 3;
  *(int *)(param_1 + 0xac) = iVar3;
  FUN_7100781000(param_1,uVar15);
  return;
}



// ===== FUN_7100781800 @ 7100781800 (size=788) =====

void FUN_7100781800(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ushort uVar12;
  
  lVar1 = param_1 + 8;
  uVar5 = FUN_7100790bf0(lVar1);
  uVar6 = *(uint *)(param_1 + 0x58b8);
  if (uVar6 < 0x7600) {
    if (uVar6 < 0x5e00) {
      if (uVar6 < 0x3600) {
        if (0xdff < uVar6) {
          uVar6 = FUN_7100781060(param_1,uVar5,5,&DAT_7100af39c0,&DAT_7100af3a70);
          iVar8 = *(int *)(param_1 + 0x58d4);
          goto joined_r0x0071007819b8;
        }
        uVar6 = FUN_7100781060(param_1,uVar5,4,&DAT_7100af3998,&DAT_7100af3a38);
      }
      else {
        uVar6 = FUN_7100781060(param_1,uVar5,5,&DAT_7100af39e0,&DAT_7100af3aa8);
      }
    }
    else {
      uVar6 = FUN_7100781060(param_1,uVar5,6,&DAT_7100af3a00,&DAT_7100af3ae0);
    }
  }
  else {
    uVar6 = FUN_7100781060(param_1,uVar5,8,&DAT_7100af3a20,&DAT_7100af3b18);
  }
  iVar8 = *(int *)(param_1 + 0x58d4);
joined_r0x0071007819b8:
  uVar6 = uVar6 & 0xff;
  if (iVar8 == 0) {
    iVar8 = *(int *)(param_1 + 0x58d0);
    *(int *)(param_1 + 0x58d0) = iVar8 + 1;
    if ((0xf < iVar8) && (*(int *)(param_1 + 0x58dc) == 0)) {
      *(undefined4 *)(param_1 + 0x58d4) = 1;
    }
  }
  else if (uVar5 < 0x1000 || uVar6 != 0) {
    uVar6 = uVar6 - 1;
    if (uVar6 == 0xffffffff) {
      uVar10 = FUN_7100790bf0(lVar1);
      FUN_7100790bd0(lVar1,1);
      if (((uint)uVar10 >> 0xf & 1) == 0) {
        FUN_7100790bd0(lVar1,1);
        uVar7 = FUN_7100790bf0(lVar1);
        iVar8 = FUN_7100781060(param_1,uVar7,5,&DAT_7100af39e0,&DAT_7100af3aa8);
        uVar11 = FUN_7100790bf0(lVar1);
        FUN_7100790bd0(lVar1,5);
        FUN_7100781000(param_1,(uint)(uVar11 >> 0xb) & 0x1fffff | iVar8 << 5,
                       ((uint)((uVar10 & 0xffffffff) >> 0xe) & 1) + 3);
        return;
      }
      *(undefined8 *)(param_1 + 0x58d0) = 0;
      return;
    }
  }
  else {
    uVar6 = 0xff;
  }
  uVar2 = uVar6 + *(int *)(param_1 + 0x58b8);
  uVar5 = *(int *)(param_1 + 0x58e0) + 0x10;
  *(uint *)(param_1 + 0x58b8) = uVar2 - (uVar2 >> 8);
  if (uVar5 < 0x100) {
    *(uint *)(param_1 + 0x58e0) = uVar5;
  }
  else {
    *(undefined4 *)(param_1 + 0x58e0) = 0x90;
    *(uint *)(param_1 + 0x58e4) = *(uint *)(param_1 + 0x58e4) >> 1;
  }
  lVar9 = *(long *)(param_1 + 0xb8);
  lVar1 = param_1 + (long)(int)uVar6 * 2;
  uVar3 = *(undefined1 *)(lVar1 + 0x4db3);
  *(long *)(param_1 + 0xb8) = lVar9 + 1;
  *(undefined1 *)(*(long *)(param_1 + 0x4b88) + lVar9) = uVar3;
  *(long *)(param_1 + 0x4d98) = *(long *)(param_1 + 0x4d98) + -1;
  lVar9 = param_1 + (ulong)(byte)*(short *)(lVar1 + 0x4db2);
  bVar4 = *(byte *)(lVar9 + 0x55b2);
  uVar12 = *(short *)(lVar1 + 0x4db2) + 1;
  *(byte *)(lVar9 + 0x55b2) = bVar4 + 1;
  if (0xa1 < (uVar12 & 0xff)) {
    do {
      FUN_7100780ea0(param_1,param_1 + 0x4db2,param_1 + 0x55b2);
      lVar9 = param_1 + (ulong)(byte)*(short *)(lVar1 + 0x4db2);
      bVar4 = *(byte *)(lVar9 + 0x55b2);
      uVar12 = *(short *)(lVar1 + 0x4db2) + 1;
      *(byte *)(lVar9 + 0x55b2) = bVar4 + 1;
    } while (0xa1 < (uVar12 & 0xff));
  }
  param_1 = param_1 + (ulong)bVar4 * 2;
  *(undefined2 *)(lVar1 + 0x4db2) = *(undefined2 *)(param_1 + 0x4db2);
  *(ushort *)(param_1 + 0x4db2) = uVar12;
  return;
}



// ===== FUN_7100781b20 @ 7100781b20 (size=244) =====

void FUN_7100781b20(long param_1)

{
  long lVar1;
  long lVar2;
  short sVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  ushort uVar7;
  
  uVar5 = FUN_7100790bf0(param_1 + 8);
  uVar6 = FUN_7100781060(param_1,uVar5,5,&DAT_7100af39e0,&DAT_7100af3aa8);
  if (uVar6 < 0x100) {
    lVar1 = param_1 + (ulong)uVar6 * 2;
    sVar3 = *(short *)(lVar1 + 0x53b2);
    lVar2 = param_1 + (ulong)(byte)sVar3;
    uVar7 = sVar3 + 1;
    *(uint *)(param_1 + 0x58b4) = (uint)(byte)((ushort)sVar3 >> 8);
    bVar4 = *(byte *)(lVar2 + 0x57b2);
    *(byte *)(lVar2 + 0x57b2) = bVar4 + 1;
    if ((uVar7 & 0xff) == 0) {
      do {
        FUN_7100780ea0(param_1,param_1 + 0x53b2,param_1 + 0x57b2);
        sVar3 = *(short *)(lVar1 + 0x53b2);
        lVar2 = param_1 + (ulong)(byte)sVar3;
        uVar7 = sVar3 + 1;
        *(uint *)(param_1 + 0x58b4) = (uint)(byte)((ushort)sVar3 >> 8);
        bVar4 = *(byte *)(lVar2 + 0x57b2);
        *(byte *)(lVar2 + 0x57b2) = bVar4 + 1;
      } while ((uVar7 & 0xff) == 0);
    }
    param_1 = param_1 + (ulong)bVar4 * 2;
    *(undefined2 *)(lVar1 + 0x53b2) = *(undefined2 *)(param_1 + 0x53b2);
    *(ushort *)(param_1 + 0x53b2) = uVar7;
  }
  return;
}



// ===== FUN_7100781c20 @ 7100781c20 (size=44) =====

void FUN_7100781c20(long param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + (ulong)uVar1 * 4 + 0x98) = param_3;
  *(undefined4 *)(param_1 + 0xb0) = param_3;
  *(ulong *)(param_1 + 0x4d98) = *(long *)(param_1 + 0x4d98) - (ulong)param_2;
  *(uint *)(param_1 + 0xa8) = uVar1 + 1 & 3;
  *(uint *)(param_1 + 0xac) = param_2;
  FUN_7100780ce0();
  return;
}



// ===== FUN_7100781c50 @ 7100781c50 (size=160) =====

void FUN_7100781c50(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1[0x17];
  uVar2 = param_1[0x18];
  if ((uVar1 != uVar2) && (*(undefined1 *)((long)param_1 + 0x4da2) = 1, uVar1 < uVar2)) {
    FUN_710077df50(*param_1,param_1[0x971] + uVar2,(long)-(int)uVar2 & param_1[0x1d2a]);
    FUN_710077df50(*param_1,param_1[0x971],param_1[0x17]);
    *(undefined1 *)((long)param_1 + 0x4da1) = 1;
    param_1[0x18] = param_1[0x17];
    return;
  }
  FUN_710077df50(*param_1,param_1[0x971] + uVar2,uVar1 - uVar2);
  param_1[0x18] = param_1[0x17];
  return;
}



// ===== FUN_7100781cf0 @ 7100781cf0 (size=120) =====

void FUN_7100781cf0(long param_1,undefined8 param_2)

{
  if ((int)param_2 != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0xe884) = 0;
  *(undefined1 *)(param_1 + 0x98a0) = 0;
  *(undefined4 *)(param_1 + 0x98a4) = 1;
  *(undefined8 *)(param_1 + 0x98a8) = 0;
  FUN_7100808340(param_1 + 0x98b0,param_2,0x170);
  FUN_7100808340(param_1 + 0x949c,0,0x404);
  FUN_7100808340(param_1 + 0x58ec,0,0x3bb0);
  return;
}



// ===== FUN_7100781d70 @ 7100781d70 (size=888) =====

void FUN_7100781d70(long param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  
  uVar14 = -(param_2 >> 7 & 1) & 0xfffff800 | (param_2 & 0xff) << 3;
  uVar17 = -uVar14;
  if (-1 < (int)uVar14) {
    uVar17 = uVar14;
  }
  uVar6 = *(uint *)(param_1 + 0x98a8);
  uVar18 = (ulong)uVar6;
  lVar1 = param_1 + uVar18 * 0x1c + (ulong)uVar6 * 0x40;
  iVar7 = *(int *)(lVar1 + 0x98d4);
  iVar20 = *(int *)(lVar1 + 0x98b0);
  iVar23 = uVar14 - iVar7;
  iVar5 = -iVar23;
  if (-1 < iVar23) {
    iVar5 = iVar23;
  }
  iVar8 = *(int *)(lVar1 + 0x98c4);
  iVar23 = iVar7 + uVar14;
  iVar13 = -iVar23;
  if (-1 < iVar23) {
    iVar13 = iVar23;
  }
  iVar19 = *(int *)(lVar1 + 0x98b4);
  iVar9 = *(int *)(lVar1 + 0x98c8);
  iVar21 = *(int *)(lVar1 + 0x98b8);
  iVar22 = *(int *)(lVar1 + 0x98bc);
  uVar16 = *(int *)(lVar1 + 0x9904) + 1;
  iVar23 = *(int *)(lVar1 + 0x98c0);
  *(int *)(lVar1 + 0x98c4) = iVar7;
  iVar8 = iVar7 - iVar8;
  iVar10 = *(int *)(lVar1 + 0x98cc);
  iVar11 = uVar14 - iVar8;
  iVar2 = -iVar11;
  if (-1 < iVar11) {
    iVar2 = iVar11;
  }
  *(int *)(lVar1 + 0x98c8) = iVar8;
  iVar11 = iVar8 + uVar14;
  iVar3 = -iVar11;
  if (-1 < iVar11) {
    iVar3 = iVar11;
  }
  iVar12 = uVar14 - iVar9;
  *(int *)(lVar1 + 0x98cc) = iVar9;
  iVar11 = -iVar12;
  if (-1 < iVar12) {
    iVar11 = iVar12;
  }
  *(uint *)(lVar1 + 0x9904) = uVar16;
  iVar12 = iVar9 + uVar14;
  *(int *)(lVar1 + 0x98d0) = iVar10;
  iVar4 = -iVar12;
  if (-1 < iVar12) {
    iVar4 = iVar12;
  }
  iVar12 = *(int *)(param_1 + 0x98ac);
  uVar17 = uVar17 + *(int *)(lVar1 + 0x98d8);
  *(int *)(lVar1 + 0x98dc) = iVar5 + *(int *)(lVar1 + 0x98dc);
  *(uint *)(lVar1 + 0x98d8) = uVar17;
  iVar7 = ((uint)(iVar7 * iVar20 + *(int *)(lVar1 + 0x9908) * 8 + iVar8 * iVar19 + iVar9 * iVar21 +
                  iVar10 * iVar22 + iVar23 * iVar12) >> 3 & 0xff) - param_2;
  *(int *)(lVar1 + 0x98e0) = iVar13 + *(int *)(lVar1 + 0x98e0);
  *(int *)(lVar1 + 0x98e4) = iVar2 + *(int *)(lVar1 + 0x98e4);
  iVar13 = uVar14 - iVar10;
  iVar5 = -iVar13;
  if (-1 < iVar13) {
    iVar5 = iVar13;
  }
  iVar10 = iVar10 + uVar14;
  iVar13 = -iVar10;
  if (-1 < iVar10) {
    iVar13 = iVar10;
  }
  *(int *)(lVar1 + 0x98e8) = iVar3 + *(int *)(lVar1 + 0x98e8);
  iVar10 = uVar14 - iVar12;
  iVar8 = -iVar10;
  if (-1 < iVar10) {
    iVar8 = iVar10;
  }
  iVar12 = iVar12 + uVar14;
  *(int *)(lVar1 + 0x98f0) = iVar4 + *(int *)(lVar1 + 0x98f0);
  iVar10 = -iVar12;
  if (-1 < iVar12) {
    iVar10 = iVar12;
  }
  *(int *)(lVar1 + 0x98ec) = iVar11 + *(int *)(lVar1 + 0x98ec);
  *(int *)(lVar1 + 0x98f8) = iVar13 + *(int *)(lVar1 + 0x98f8);
  iVar13 = (int)(char)((char)iVar7 - (char)*(int *)(lVar1 + 0x9908));
  *(int *)(lVar1 + 0x98d4) = iVar13;
  *(int *)(lVar1 + 0x98f4) = iVar5 + *(int *)(lVar1 + 0x98f4);
  *(int *)(lVar1 + 0x98fc) = iVar8 + *(int *)(lVar1 + 0x98fc);
  *(int *)(lVar1 + 0x9900) = iVar10 + *(int *)(lVar1 + 0x9900);
  *(int *)(param_1 + 0x98ac) = iVar13;
  *(int *)(lVar1 + 0x9908) = iVar7;
  if ((uVar16 & 0x1f) != 0) {
    return;
  }
  *(undefined4 *)(lVar1 + 0x98d8) = 0;
  uVar14 = 1;
  uVar16 = 0;
  puVar15 = (uint *)(param_1 + (ulong)uVar6 * 0x5c + 0x98dc);
  do {
    uVar6 = *puVar15;
    *puVar15 = 0;
    if (uVar6 < uVar17) {
      uVar16 = uVar14;
    }
    uVar14 = uVar14 + 1;
    if (uVar6 < uVar17) {
      uVar17 = uVar6;
    }
    puVar15 = puVar15 + 1;
  } while (uVar14 != 0xb);
  if (uVar16 == 6) {
    if (0xf < iVar21) {
      return;
    }
    iVar21 = iVar21 + 1;
LAB_71007820d0:
    *(int *)(param_1 + uVar18 * 0x5c + 0x98b8) = iVar21;
  }
  else {
    if (6 < uVar16) {
      if (uVar16 == 9) {
        if (iVar23 + 0x10 < 0 != SCARRY4(iVar23,0x10)) {
          return;
        }
        iVar23 = iVar23 + -1;
      }
      else {
        if (uVar16 < 10) {
          if (uVar16 == 7) {
            if (iVar22 + 0x10 < 0 != SCARRY4(iVar22,0x10)) {
              return;
            }
            iVar22 = iVar22 + -1;
          }
          else {
            if (uVar16 != 8) {
              return;
            }
            if (0xf < iVar22) {
              return;
            }
            iVar22 = iVar22 + 1;
          }
          *(int *)(param_1 + uVar18 * 0x5c + 0x98bc) = iVar22;
          return;
        }
        if (uVar16 != 10) {
          return;
        }
        if (0xf < iVar23) {
          return;
        }
        iVar23 = iVar23 + 1;
      }
      *(int *)(param_1 + uVar18 * 0x5c + 0x98c0) = iVar23;
      return;
    }
    if (uVar16 == 3) {
      if (iVar19 + 0x10 < 0 != SCARRY4(iVar19,0x10)) {
        return;
      }
      iVar19 = iVar19 + -1;
    }
    else {
      if (uVar16 < 4) {
        if (uVar16 == 1) {
          if (iVar20 + 0x10 < 0 != SCARRY4(iVar20,0x10)) {
            return;
          }
          iVar20 = iVar20 + -1;
        }
        else {
          if (uVar16 != 2) {
            return;
          }
          if (0xf < iVar20) {
            return;
          }
          iVar20 = iVar20 + 1;
        }
        *(int *)(param_1 + uVar18 * 0x5c + 0x98b0) = iVar20;
        return;
      }
      if (uVar16 != 4) {
        if (uVar16 != 5) {
          return;
        }
        if (iVar21 + 0x10 < 0 != SCARRY4(iVar21,0x10)) {
          return;
        }
        iVar21 = iVar21 + -1;
        goto LAB_71007820d0;
      }
      if (0xf < iVar19) {
        return;
      }
      iVar19 = iVar19 + 1;
    }
    *(int *)(param_1 + uVar18 * 0x5c + 0x98b4) = iVar19;
  }
  return;
}



// ===== FUN_71007820f0 @ 71007820f0 (size=188) =====

bool FUN_71007820f0(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  iVar2 = *(int *)(param_1 + 1);
  iVar1 = *(int *)(param_1 + 0x19);
  iVar3 = iVar1 - iVar2;
  if (-1 < iVar3) {
    if (iVar2 < 0x4001) {
      lVar4 = (long)iVar1;
      iVar3 = iVar1;
    }
    else {
      lVar4 = (long)iVar3;
      if (iVar3 != 0) {
        FUN_710080f900(param_1[3],param_1[3] + (long)iVar2,lVar4);
      }
      *(undefined4 *)(param_1 + 1) = 0;
      *(int *)(param_1 + 0x19) = iVar3;
    }
    iVar1 = FUN_710077dcb0(*param_1,param_1[3] + lVar4,(long)(0x8000 - iVar3));
    iVar2 = *(int *)(param_1 + 0x19);
    if (0 < iVar1) {
      iVar2 = iVar1 + iVar2;
      *(int *)(param_1 + 0x19) = iVar2;
    }
    *(int *)((long)param_1 + 0xcc) = iVar2 + -0x1e;
    return iVar1 != -1;
  }
  return false;
}



// ===== FUN_71007821b0 @ 71007821b0 (size=20) =====

void FUN_71007821b0(long param_1,long param_2)

{
  *(int *)(param_2 + 0x1c) = (int)*(undefined8 *)(param_1 + 0x4da8);
  FUN_7100792140(param_1 + 0xe888);
  return;
}



// ===== FUN_71007821d0 @ 71007821d0 (size=164) =====

void FUN_71007821d0(long param_1,char param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (param_2 == '\0') {
    *(undefined8 *)(param_1 + 0xe920) = 0;
    *(undefined4 *)(param_1 + 0xe940) = 0;
    if (*(long *)(param_1 + 0xe8d0) != 0) {
      uVar2 = 0;
      do {
        lVar1 = *(long *)(*(long *)(param_1 + 0xe8c8) + uVar2 * 8);
        uVar2 = uVar2 + 1;
        if (lVar1 != 0) {
          thunk_FUN_710081c200(lVar1,0x40);
        }
      } while (uVar2 < *(ulong *)(param_1 + 0xe8d0));
    }
    *(undefined8 *)(param_1 + 0xe8d0) = 0;
  }
  if (*(long *)(param_1 + 0xe8f8) != 0) {
    uVar2 = 0;
    do {
      lVar1 = *(long *)(*(long *)(param_1 + 0xe8f0) + uVar2 * 8);
      uVar2 = uVar2 + 1;
      if (lVar1 != 0) {
        thunk_FUN_710081c200(lVar1,0x40);
      }
    } while (uVar2 < *(ulong *)(param_1 + 0xe8f8));
  }
  *(undefined8 *)(param_1 + 0xe8f8) = 0;
  return;
}



// ===== FUN_7100782280 @ 7100782280 (size=108) =====

void FUN_7100782280(long param_1,char param_2)

{
  if (param_2 != '\0') {
    FUN_71007821d0(param_1,param_2);
    return;
  }
  *(undefined1 *)(param_1 + 0xe885) = 0;
  FUN_7100808340(param_1 + 0xe6ec,0,0x194);
  *(undefined4 *)(param_1 + 0xe6e8) = 2;
  *(undefined4 *)(param_1 + 0xe880) = 0;
  FUN_71007821d0(param_1,0);
  return;
}



// ===== FUN_71007822f0 @ 71007822f0 (size=144) =====

int FUN_71007822f0(undefined8 param_1,int *param_2)

{
  uint uVar1;
  uint extraout_var;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  iVar4 = 0;
  uVar2 = FUN_7100790bf0(param_2);
  *param_2 = *param_2 + (param_2[1] + 2U >> 3);
  param_2[1] = param_2[1] + 2U & 7;
  do {
    FUN_7100790bf0(param_2);
    uVar1 = uVar3 & 0x1f;
    uVar3 = uVar3 + 8;
    iVar4 = iVar4 + ((extraout_var & 0xffffff) << (ulong)uVar1);
    *param_2 = *param_2 + (param_2[1] + 8U >> 3);
    param_2[1] = param_2[1] + 8U & 7;
  } while (uVar3 != (((uint)(uVar2 >> 0xe) & 0x3ffff) + 1) * 8);
  return iVar4;
}



// ===== FUN_7100782380 @ 7100782380 (size=264) =====

bool FUN_7100782380(undefined8 *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 1);
  iVar1 = *(int *)(param_1 + 0x19) - iVar3;
  if (-1 < iVar1) {
    *(int *)(param_1 + 0x1a) = *(int *)(param_1 + 0x1a) - (iVar3 - *(int *)(param_1 + 0x1b));
    iVar4 = *(int *)(param_1 + 0x19);
    if (0x4000 < iVar3) {
      if (iVar1 != 0) {
        FUN_710080f900(param_1[3],param_1[3] + (long)iVar3,(long)iVar1);
      }
      *(undefined4 *)(param_1 + 1) = 0;
      *(int *)(param_1 + 0x19) = iVar1;
      iVar4 = iVar1;
    }
    if (iVar4 == 0x8000) {
      iVar3 = *(int *)(param_1 + 0x19);
      bVar2 = true;
    }
    else {
      iVar3 = FUN_710077dcb0(*param_1,param_1[3] + (long)iVar4,(long)(0x8000 - iVar4));
      if (iVar3 < 1) {
        bVar2 = iVar3 != -1;
        iVar3 = *(int *)(param_1 + 0x19);
      }
      else {
        bVar2 = true;
        iVar3 = iVar3 + *(int *)(param_1 + 0x19);
        *(int *)(param_1 + 0x19) = iVar3;
      }
    }
    iVar3 = iVar3 + -0x1e;
    *(int *)((long)param_1 + 0xcc) = iVar3;
    *(int *)(param_1 + 0x1b) = *(int *)(param_1 + 1);
    if (*(int *)(param_1 + 0x1a) != -1) {
      iVar1 = *(int *)(param_1 + 1) + *(int *)(param_1 + 0x1a) + -1;
      if (iVar3 < iVar1) {
        iVar1 = iVar3;
      }
      *(int *)((long)param_1 + 0xcc) = iVar1;
    }
    return bVar2;
  }
  return false;
}



// ===== FUN_7100782490 @ 7100782490 (size=232) =====

undefined1 FUN_7100782490(long param_1,int *param_2,char *param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  
  if ((((char)param_2[2] == '\0') && (*(int *)(param_1 + 200) + -0xf <= *param_2)) &&
     (cVar1 = FUN_7100782380(), cVar1 == '\0')) {
    return 0;
  }
  uVar2 = FUN_71007822f0(param_1,param_2);
  *(undefined4 *)(param_3 + 4) = uVar2;
  uVar3 = FUN_71007822f0(param_1,param_2);
  if (0x400000 < uVar3) {
    uVar3 = 0;
  }
  *(uint *)(param_3 + 8) = uVar3;
  uVar4 = FUN_7100790bf0(param_2);
  *param_3 = (char)(uVar4 >> 0xd);
  FUN_7100790bd0(param_2,3);
  if (*param_3 != '\0') {
    return 1;
  }
  uVar4 = FUN_7100790bf0(param_2);
  param_3[0xc] = (char)(uVar4 >> 0xb) + '\x01';
  FUN_7100790bd0(param_2,5);
  return 1;
}



// ===== FUN_7100782580 @ 7100782580 (size=184) =====

void FUN_7100782580(undefined8 *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 4;
  uVar2 = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  param_1[3] = param_2;
  iVar1 = *(int *)(param_2 + 8);
  if (0x7fe2 < iVar1) goto LAB_7100782604;
  do {
    *(int *)(param_2 + 8) = iVar1 + 1;
    uVar2 = uVar2 | *(byte *)(*(long *)(param_2 + 0x18) + (long)iVar1);
    *(uint *)((long)param_1 + 4) = uVar2;
    while( true ) {
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        return;
      }
      param_2 = param_1[3];
      uVar2 = uVar2 << 8;
      iVar1 = *(int *)(param_2 + 8);
      if (iVar1 < 0x7fe3) break;
LAB_7100782604:
      FUN_7100782380(param_2);
      iVar1 = *(int *)(param_2 + 8);
      if (iVar1 < 0x8000) break;
      *(uint *)((long)param_1 + 4) = uVar2;
    }
  } while( true );
}



// ===== FUN_7100782640 @ 7100782640 (size=1596) =====

ulong FUN_7100782640(long param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined1 uVar3;
  ushort uVar4;
  uint uVar5;
  bool bVar6;
  char cVar7;
  ushort *puVar8;
  ulong uVar9;
  ushort *puVar10;
  ushort *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ushort *puVar15;
  uint uVar16;
  undefined8 uVar17;
  uint uVar18;
  long lVar19;
  
  puVar8 = *(ushort **)(param_1 + 0x648);
  if (puVar8 <= *(ushort **)(param_1 + 0x4ca0)) {
    return 0xffffffff;
  }
  if (*(ushort **)(param_1 + 0x4cb0) < puVar8) {
    return 0xffffffff;
  }
  if (*puVar8 == 1) {
    bVar2 = *(byte *)(param_1 + (ulong)**(byte **)(param_1 + 0x660) + 0x980);
    *(byte *)(param_1 + 0xa82) = bVar2;
    uVar18 = *(uint *)(param_1 + 0x4a88);
    uVar13 = *(uint *)(param_1 + 0x4a90) >> 0xe;
    uVar5 = 0;
    if (uVar13 != 0) {
      uVar5 = (*(int *)(param_1 + 0x4a8c) - uVar18) / uVar13;
    }
    lVar19 = param_1 + ((long)(int)((uint)*(byte *)(param_1 + (int)(**(ushort **)(puVar8 + 0xc) - 1)
                                                   + 0x880) + (uint)*(byte *)(param_1 + 0xa81) +
                                    (uint)bVar2 +
                                    (uint)*(byte *)(param_1 + (ulong)(byte)puVar8[4] + 0x980) * 2 +
                                   (*(int *)(param_1 + 0x678) >> 0x1a & 0x20U)) +
                       (long)(int)(*(byte *)((long)puVar8 + 9) - 1) * 0x40) * 2;
    uVar4 = *(ushort *)(lVar19 + 0xa84);
    uVar16 = (uint)uVar4;
    *(uint *)(param_1 + 0x4a90) = uVar13;
    if (uVar5 < uVar4) {
      *(ushort **)(param_1 + 0x660) = puVar8 + 4;
      *(byte *)((long)puVar8 + 9) =
           *(byte *)((long)puVar8 + 9) + ((byte)(~(uint)*(byte *)((long)puVar8 + 9) >> 7) & 1);
      *(undefined4 *)(param_1 + 0x4a94) = 0;
      *(uint *)(param_1 + 0x4a98) = (uint)uVar4;
      iVar12 = *(int *)(param_1 + 0x678);
      *(ushort *)(lVar19 + 0xa84) = (uVar4 + 0x80) - (short)(uVar4 + 0x20 >> 7);
      *(undefined1 *)(param_1 + 0xa81) = 1;
      puVar15 = *(ushort **)(param_1 + 0x660);
      *(int *)(param_1 + 0x678) = iVar12 + 1;
      goto LAB_7100782760;
    }
    uVar16 = (uint)uVar4;
    uVar5 = uVar16 - ((int)(uVar4 + 0x20) >> 7);
    uVar18 = uVar18 + uVar13 * uVar16;
    *(uint *)(param_1 + 0x4a94) = uVar16;
    bVar2 = (&DAT_71009c5be0)[(int)((uVar5 & 0xffff) >> 10)];
    uVar13 = (0x4000 - uVar16) * uVar13;
    *(short *)(lVar19 + 0xa84) = (short)uVar5;
    *(undefined4 *)(param_1 + 0x4a98) = 0x4000;
    *(undefined4 *)(param_1 + 0x668) = 1;
    *(uint *)(param_1 + 0x66c) = (uint)bVar2;
    *(undefined1 *)(param_1 + (ulong)(byte)puVar8[4] + 0x680) = *(undefined1 *)(param_1 + 0xa80);
    *(undefined8 *)(param_1 + 0x660) = 0;
    *(undefined1 *)(param_1 + 0xa81) = 0;
    *(uint *)(param_1 + 0x4a88) = uVar18;
    *(uint *)(param_1 + 0x4a90) = uVar13;
  }
  else {
    puVar10 = *(ushort **)(puVar8 + 8);
    if (puVar10 <= *(ushort **)(param_1 + 0x4ca0) || *(ushort **)(param_1 + 0x4cb0) < puVar10) {
      return 0xffffffff;
    }
    uVar4 = puVar8[4];
    *(uint *)(param_1 + 0x4a9c) = (uint)uVar4;
    uVar18 = *(uint *)(param_1 + 0x4a88);
    uVar13 = 0;
    if (uVar4 != 0) {
      uVar13 = *(uint *)(param_1 + 0x4a90) / (uint)uVar4;
    }
    uVar5 = 0;
    if (uVar13 != 0) {
      uVar5 = (*(int *)(param_1 + 0x4a8c) - uVar18) / uVar13;
    }
    *(uint *)(param_1 + 0x4a90) = uVar13;
    uVar16 = (uint)uVar4;
    if ((int)uVar16 <= (int)uVar5) {
      return 0xffffffff;
    }
    bVar2 = *(byte *)((long)puVar10 + 1);
    uVar14 = (uint)bVar2;
    if ((int)uVar5 < (int)(uint)bVar2) {
      bVar6 = uVar16 < uVar14 << 1;
      *(uint *)(param_1 + 0x4a98) = uVar14;
      *(ushort **)(param_1 + 0x660) = puVar10;
      *(bool *)(param_1 + 0xa81) = bVar6;
      *(uint *)(param_1 + 0x678) = *(int *)(param_1 + 0x678) + (uint)bVar6;
      *(byte *)((long)puVar10 + 1) = bVar2 + 4;
      puVar8[4] = puVar8[4] + 4;
      uVar16 = uVar14;
      if (uVar14 != 0x78 && 0x77 < bVar2) {
        FUN_7100780020(puVar8,param_1);
        uVar18 = *(uint *)(param_1 + 0x4a88);
        uVar13 = *(uint *)(param_1 + 0x4a90);
        uVar16 = *(uint *)(param_1 + 0x4a98);
      }
      puVar15 = *(ushort **)(param_1 + 0x660);
      *(undefined4 *)(param_1 + 0x4a94) = 0;
LAB_7100782760:
      uVar13 = uVar13 * uVar16;
      *(uint *)(param_1 + 0x4a88) = uVar18;
      *(uint *)(param_1 + 0x4a90) = uVar13;
      if (puVar15 != (ushort *)0x0) goto LAB_71007828d0;
    }
    else {
      if (*(byte **)(param_1 + 0x660) == (byte *)0x0) {
        return 0xffffffff;
      }
      *(undefined1 *)(param_1 + 0xa81) = 0;
      puVar15 = puVar10;
      do {
        puVar11 = puVar15 + 8;
        uVar14 = uVar14 + *(byte *)((long)puVar15 + 0x11);
        if ((int)uVar5 < (int)uVar14) {
          *(uint *)(param_1 + 0x4a98) = uVar14;
          uVar16 = (uint)*(byte *)((long)puVar15 + 0x11);
          iVar12 = uVar14 - *(byte *)((long)puVar15 + 0x11);
          *(int *)(param_1 + 0x4a94) = iVar12;
          *(ushort **)(param_1 + 0x660) = puVar11;
          *(byte *)((long)puVar15 + 0x11) = *(byte *)((long)puVar15 + 0x11) + 4;
          puVar8[4] = puVar8[4] + 4;
          if (*(byte *)((long)puVar15 + 1) < *(byte *)((long)puVar15 + 0x11)) {
            uVar1 = *(undefined8 *)puVar15;
            *(byte *)((long)puVar15 + 1) = *(byte *)((long)puVar15 + 0x11);
            uVar17 = *(undefined8 *)(puVar15 + 0xc);
            *(byte *)puVar15 = (byte)*puVar11;
            *(undefined8 *)puVar11 = uVar1;
            *(undefined8 *)(puVar15 + 0xc) = *(undefined8 *)(puVar15 + 4);
            *(undefined8 *)(puVar15 + 4) = uVar17;
            *(ushort **)(param_1 + 0x660) = puVar15;
            if (*(byte *)((long)puVar15 + 1) < 0x7d) {
              uVar18 = uVar18 + uVar13 * iVar12;
            }
            else {
              FUN_7100780020(puVar8,param_1);
              puVar15 = *(ushort **)(param_1 + 0x660);
              uVar13 = *(uint *)(param_1 + 0x4a90);
              uVar18 = *(int *)(param_1 + 0x4a88) + uVar13 * *(int *)(param_1 + 0x4a94);
              uVar16 = *(int *)(param_1 + 0x4a98) - *(int *)(param_1 + 0x4a94);
            }
          }
          else {
            puVar15 = *(ushort **)(param_1 + 0x660);
            uVar18 = uVar18 + uVar13 * iVar12;
          }
          goto LAB_7100782760;
        }
        puVar15 = puVar11;
      } while (puVar11 != puVar10 + ((ulong)(*puVar8 - 2) + 1) * 8);
      *(undefined1 *)(param_1 + 0xa82) =
           *(undefined1 *)(param_1 + (ulong)**(byte **)(param_1 + 0x660) + 0x980);
      *(uint *)(param_1 + 0x4a94) = uVar14;
      uVar3 = *(undefined1 *)(param_1 + 0xa80);
      *(undefined1 *)(param_1 + (ulong)(byte)*puVar11 + 0x680) = uVar3;
      uVar4 = *puVar8;
      *(undefined8 *)(param_1 + 0x660) = 0;
      *(uint *)(param_1 + 0x668) = (uint)uVar4;
      puVar8 = puVar11 + ~(ulong)(uVar4 - 2) * 8;
      do {
        puVar11 = puVar11 + -8;
        *(undefined1 *)(param_1 + (ulong)(byte)*puVar11 + 0x680) = uVar3;
      } while (puVar11 != puVar8);
      uVar18 = uVar18 + uVar13 * uVar14;
      *(uint *)(param_1 + 0x4a98) = uVar16;
      uVar13 = (uVar16 - uVar14) * uVar13;
      *(uint *)(param_1 + 0x4a88) = uVar18;
      *(uint *)(param_1 + 0x4a90) = uVar13;
    }
  }
  do {
    while ((uVar18 + uVar13 ^ uVar18) < 0x1000000) {
LAB_71007827d8:
      lVar19 = *(long *)(param_1 + 0x4aa0);
      iVar12 = *(int *)(lVar19 + 8);
      uVar18 = *(int *)(param_1 + 0x4a8c) << 8;
      if (iVar12 < 0x7fe3) {
LAB_7100782784:
        *(int *)(lVar19 + 8) = iVar12 + 1;
        uVar18 = uVar18 | *(byte *)(*(long *)(lVar19 + 0x18) + (long)iVar12);
      }
      else {
        FUN_7100782380(lVar19);
        iVar12 = *(int *)(lVar19 + 8);
        if (iVar12 < 0x8000) goto LAB_7100782784;
      }
      *(uint *)(param_1 + 0x4a8c) = uVar18;
      uVar18 = *(int *)(param_1 + 0x4a88) << 8;
      uVar13 = *(int *)(param_1 + 0x4a90) << 8;
      *(uint *)(param_1 + 0x4a88) = uVar18;
      *(uint *)(param_1 + 0x4a90) = uVar13;
    }
    if (uVar13 < 0x8000) {
      *(uint *)(param_1 + 0x4a90) = -uVar18 & 0x7fff;
      goto LAB_71007827d8;
    }
    iVar12 = *(int *)(param_1 + 0x670);
    puVar8 = *(ushort **)(param_1 + 0x648);
    do {
      iVar12 = iVar12 + 1;
      puVar8 = *(ushort **)(puVar8 + 0xc);
      *(ushort **)(param_1 + 0x648) = puVar8;
      if ((puVar8 <= *(ushort **)(param_1 + 0x4ca0)) || (*(ushort **)(param_1 + 0x4cb0) < puVar8)) {
        *(int *)(param_1 + 0x670) = iVar12;
        return 0xffffffff;
      }
    } while ((uint)*puVar8 == *(uint *)(param_1 + 0x668));
    *(int *)(param_1 + 0x670) = iVar12;
    cVar7 = FUN_7100780a00(puVar8,param_1);
    if (cVar7 == '\0') {
      return 0xffffffff;
    }
    puVar15 = *(ushort **)(param_1 + 0x660);
    uVar18 = *(uint *)(param_1 + 0x4a88) + *(int *)(param_1 + 0x4a90) * *(int *)(param_1 + 0x4a94);
    uVar13 = (*(int *)(param_1 + 0x4a98) - *(int *)(param_1 + 0x4a94)) * *(int *)(param_1 + 0x4a90);
    *(uint *)(param_1 + 0x4a88) = uVar18;
    *(uint *)(param_1 + 0x4a90) = uVar13;
  } while (puVar15 == (ushort *)0x0);
LAB_71007828d0:
  uVar4 = *puVar15;
  if ((*(int *)(param_1 + 0x670) == 0) &&
     (uVar9 = *(ulong *)(puVar15 + 4), *(ulong *)(param_1 + 0x4ca0) < uVar9)) {
    *(ulong *)(param_1 + 0x648) = uVar9;
    *(ulong *)(param_1 + 0x658) = uVar9;
  }
  else {
    FUN_7100780590(param_1);
    if (*(char *)(param_1 + 0xa80) == '\0') {
      *(undefined1 *)(param_1 + 0xa80) = 1;
      *(undefined8 *)(param_1 + 0x688) = 0;
      *(undefined8 *)(param_1 + 0x680) = 0;
      *(undefined8 *)(param_1 + 0x698) = 0;
      *(undefined8 *)(param_1 + 0x690) = 0;
      *(undefined8 *)(param_1 + 0x6a8) = 0;
      *(undefined8 *)(param_1 + 0x6a0) = 0;
      *(undefined8 *)(param_1 + 0x6b8) = 0;
      *(undefined8 *)(param_1 + 0x6b0) = 0;
      *(undefined8 *)(param_1 + 0x6c8) = 0;
      *(undefined8 *)(param_1 + 0x6c0) = 0;
      *(undefined8 *)(param_1 + 0x6d8) = 0;
      *(undefined8 *)(param_1 + 0x6d0) = 0;
      *(undefined8 *)(param_1 + 0x6e8) = 0;
      *(undefined8 *)(param_1 + 0x6e0) = 0;
      *(undefined8 *)(param_1 + 0x6f8) = 0;
      *(undefined8 *)(param_1 + 0x6f0) = 0;
      *(undefined8 *)(param_1 + 0x708) = 0;
      *(undefined8 *)(param_1 + 0x700) = 0;
      *(undefined8 *)(param_1 + 0x718) = 0;
      *(undefined8 *)(param_1 + 0x710) = 0;
      *(undefined8 *)(param_1 + 0x728) = 0;
      *(undefined8 *)(param_1 + 0x720) = 0;
      *(undefined8 *)(param_1 + 0x738) = 0;
      *(undefined8 *)(param_1 + 0x730) = 0;
      *(undefined8 *)(param_1 + 0x748) = 0;
      *(undefined8 *)(param_1 + 0x740) = 0;
      *(undefined8 *)(param_1 + 0x758) = 0;
      *(undefined8 *)(param_1 + 0x750) = 0;
      *(undefined8 *)(param_1 + 0x768) = 0;
      *(undefined8 *)(param_1 + 0x760) = 0;
      *(undefined8 *)(param_1 + 0x778) = 0;
      *(undefined8 *)(param_1 + 0x770) = 0;
    }
  }
  uVar18 = *(uint *)(param_1 + 0x4a88);
  uVar13 = *(uint *)(param_1 + 0x4a90);
  do {
    if (0xffffff < (uVar18 + uVar13 ^ uVar18)) {
      if (0x7fff < uVar13) {
        return (ulong)(byte)uVar4;
      }
      *(uint *)(param_1 + 0x4a90) = -uVar18 & 0x7fff;
    }
    lVar19 = *(long *)(param_1 + 0x4aa0);
    iVar12 = *(int *)(lVar19 + 8);
    uVar18 = *(int *)(param_1 + 0x4a8c) << 8;
    if (iVar12 < 0x7fe3) {
LAB_710078290c:
      *(int *)(lVar19 + 8) = iVar12 + 1;
      uVar18 = uVar18 | *(byte *)(*(long *)(lVar19 + 0x18) + (long)iVar12);
    }
    else {
      FUN_7100782380(lVar19);
      iVar12 = *(int *)(lVar19 + 8);
      if (iVar12 < 0x8000) goto LAB_710078290c;
    }
    *(uint *)(param_1 + 0x4a8c) = uVar18;
    uVar18 = *(int *)(param_1 + 0x4a88) << 8;
    uVar13 = *(int *)(param_1 + 0x4a90) << 8;
    *(uint *)(param_1 + 0x4a88) = uVar18;
    *(uint *)(param_1 + 0x4a90) = uVar13;
  } while( true );
}



// ===== FUN_7100782c80 @ 7100782c80 (size=424) =====

bool FUN_7100782c80(long param_1,long param_2,uint *param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  uint unaff_w22;
  
  iVar4 = *(int *)(param_2 + 8);
  if (0x7fe2 < iVar4) {
    FUN_7100782380(param_2);
    iVar4 = *(int *)(param_2 + 8);
    if (iVar4 < 0x8000) goto LAB_7100782cb0;
    if (*(long *)(param_1 + 0x4aa8) == 0) {
      return false;
    }
LAB_7100782cd8:
    FUN_7100782580(param_1 + 0x4a88,param_2);
    goto LAB_7100782ce8;
  }
LAB_7100782cb0:
  lVar6 = *(long *)(param_2 + 0x18);
  iVar3 = iVar4 + 1;
  *(int *)(param_2 + 8) = iVar3;
  bVar2 = *(byte *)(lVar6 + iVar4);
  if ((bVar2 >> 5 & 1) == 0) {
    if (*(long *)(param_1 + 0x4aa8) == 0) {
      return false;
    }
    if ((bVar2 >> 6 & 1) == 0) goto LAB_7100782cd8;
LAB_7100782d9c:
    iVar4 = *(int *)(param_2 + 8);
    if (iVar4 < 0x7fe3) {
LAB_7100782dac:
      *(int *)(param_2 + 8) = iVar4 + 1;
      uVar5 = (uint)*(byte *)(*(long *)(param_2 + 0x18) + (long)iVar4);
    }
    else {
      FUN_7100782380(param_2);
      iVar4 = *(int *)(param_2 + 8);
      uVar5 = 0;
      if (iVar4 < 0x8000) goto LAB_7100782dac;
    }
    *param_3 = uVar5;
    FUN_7100782580(param_1 + 0x4a88,param_2);
    if ((bVar2 & 0x20) == 0) goto LAB_7100782ce8;
  }
  else {
    if (iVar3 < 0x7fe3) {
LAB_7100782d14:
      *(int *)(param_2 + 8) = iVar3 + 1;
      unaff_w22 = (uint)*(byte *)(lVar6 + iVar3);
    }
    else {
      unaff_w22 = 0;
      FUN_7100782380(param_2);
      iVar3 = *(int *)(param_2 + 8);
      if (iVar3 < 0x8000) {
        lVar6 = *(long *)(param_2 + 0x18);
        goto LAB_7100782d14;
      }
    }
    if ((bVar2 >> 6 & 1) != 0) goto LAB_7100782d9c;
    FUN_7100782580(param_1 + 0x4a88,param_2);
  }
  uVar5 = (bVar2 & 0x1f) + 1;
  uVar1 = (bVar2 & 0x1f) * 3 - 0x1d;
  if (uVar5 < 0x11) {
    uVar1 = uVar5;
  }
  if (uVar1 == 1) {
    FUN_710077f710(param_1 + 0x4aa8);
    return false;
  }
  FUN_710077f730(param_1 + 0x4aa8,unaff_w22 + 1);
  FUN_710077ff30(param_1,uVar1);
LAB_7100782ce8:
  return *(long *)(param_1 + 0x648) != 0;
}



// ===== FUN_7100782e30 @ 7100782e30 (size=80) =====

void FUN_7100782e30(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if ((long)param_1[0x9b5] < (long)param_1[0x9b3]) {
    lVar2 = param_1[0x9b3] - param_1[0x9b5];
    lVar1 = param_3;
    if (lVar2 < param_3) {
      lVar1 = lVar2;
    }
    FUN_710077df50(*param_1,param_2,lVar1);
    param_1[0x9b5] = param_1[0x9b5] + param_3;
  }
  return;
}



// ===== FUN_7100782e80 @ 7100782e80 (size=20) =====

void FUN_7100782e80(long param_1,char param_2)

{
  if (param_2 == '\0') {
    *(undefined1 *)(param_1 + 0xe886) = 0;
  }
  return;
}



// ===== FUN_7100782ea0 @ 7100782ea0 (size=424) =====

undefined8 FUN_7100782ea0(long param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  uint extraout_var;
  uint extraout_var_00;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_2[2];
  param_3[3] = 0;
  if ((((char)uVar3 != '\0') || ((int)*param_2 < *(int *)(param_1 + 200) + -6)) ||
     (cVar4 = FUN_7100782380(), cVar4 != '\0')) {
    FUN_7100790bd0(param_2,-param_2[1] & 7);
    uVar5 = FUN_7100790bf0(param_2);
    uVar7 = (uVar5 & 0xffffffff) >> 8 & 0xff;
    FUN_7100790bd0(param_2,8);
    uVar6 = (uint)(uVar7 >> 3) & 3;
    uVar3 = (uint)((uVar5 & 0xffffffff) >> 8);
    if (uVar6 != 3) {
      uVar8 = 0;
      uVar9 = 0;
      param_3[1] = (uVar3 & 7) + 1;
      param_3[3] = uVar6 + 3;
      FUN_7100790bf0(param_2);
      FUN_7100790bd0(param_2,8);
      do {
        FUN_7100790bf0(param_2);
        uVar1 = uVar8 & 3;
        uVar8 = uVar8 + 1;
        uVar9 = ((extraout_var_00 & 0xffffff) << (ulong)(uVar1 << 3)) + uVar9;
        uVar1 = *param_2 + (param_2[1] + 8 >> 3);
        *param_2 = uVar1;
        param_2[1] = param_2[1] + 8 & 7;
      } while (uVar8 < uVar6 + 1);
      uVar6 = (uint)uVar7;
      *param_3 = uVar9;
      if ((extraout_var & 0xff) ==
          ((uVar6 ^ (int)uVar9 >> 0x10 ^ uVar9 ^ (int)uVar9 >> 8 ^ 0x5a) & 0xff)) {
        iVar2 = uVar9 + uVar1 + -1;
        param_3[2] = uVar1;
        if (*(int *)(param_1 + 0xcc) < iVar2) {
          iVar2 = *(int *)(param_1 + 0xcc);
        }
        *(int *)(param_1 + 0xcc) = iVar2;
        *(byte *)(param_3 + 4) = (byte)((uVar3 & 0xff) >> 6) & 1;
        *(char *)((long)param_3 + 0x11) = (char)(uVar6 >> 7);
        return 1;
      }
    }
  }
  return 0;
}



// ===== FUN_7100783050 @ 7100783050 (size=8) =====

void FUN_7100783050(long param_1)

{
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}



// ===== FUN_7100783060 @ 7100783060 (size=76) =====

void FUN_7100783060(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  return;
}



// ===== FUN_71007830b0 @ 71007830b0 (size=64) =====

void FUN_71007830b0(long *param_1)

{
  long *plVar1;
  
  plVar1 = param_1 + 0x20;
  do {
    if (*param_1 != 0) {
      FUN_710081c200();
      *param_1 = 0;
    }
    param_1 = param_1 + 1;
  } while (param_1 != plVar1);
  return;
}



// ===== FUN_71007830f0 @ 71007830f0 (size=20) =====

void FUN_71007830f0(void)

{
  FUN_71007830b0();
  return;
}



// ===== FUN_7100783110 @ 7100783110 (size=248) =====

void FUN_7100783110(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  FUN_71007830b0();
  if (param_2 != 0) {
    lVar5 = 1;
    uVar6 = 0;
    do {
      uVar7 = param_2 - uVar6;
      uVar1 = 0;
      if (0x21U - lVar5 != 0) {
        uVar1 = uVar7 / (0x21U - lVar5);
      }
      if (uVar1 < 0x400000) {
        uVar1 = 0x400000;
      }
      while( true ) {
        if (uVar7 < uVar1) goto LAB_71007831dc;
        lVar2 = FUN_710080e9e0(uVar7,1);
        if (lVar2 != 0) break;
        uVar7 = uVar7 - (uVar7 >> 5);
      }
      uVar6 = uVar6 + uVar7;
      *(long *)(param_1 + -8 + lVar5 * 8) = lVar2;
      uVar4 = (uint)lVar5;
      *(ulong *)(param_1 + 0xf8 + lVar5 * 8) = uVar6;
      lVar5 = lVar5 + 1;
    } while (uVar6 < param_2 && uVar4 < 0x20);
    if (uVar6 < param_2) {
LAB_71007831dc:
      puVar3 = (undefined8 *)FUN_71007adf60(8);
      *puVar3 = &PTR_FUN_7100aec478;
                    /* WARNING: Subroutine does not return */
      FUN_71007af000(puVar3,&PTR_PTR_FUN_7100aea210,FUN_71007ad880);
    }
  }
  return;
}



// ===== FUN_7100783210 @ 7100783210 (size=100) =====

long FUN_7100783210(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = 1;
  if (param_2 < (ulong)param_1[0x20]) {
    return *param_1 + param_2;
  }
  do {
    uVar1 = uVar2 + 1;
    if (param_2 < (ulong)param_1[uVar2 + 0x20]) {
      return param_1[uVar2 & 0xffffffff] + (param_2 - param_1[(ulong)((int)uVar2 - 1) + 0x20]);
    }
    uVar2 = uVar1;
  } while (uVar1 != 0x20);
  return *param_1;
}



// ===== FUN_7100783280 @ 7100783280 (size=132) =====

void FUN_7100783280(undefined8 param_1,uint param_2,ulong param_3,ulong *param_4,ulong param_5)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = *param_4 - (param_3 & 0xffffffff);
  if (param_2 != 0) {
    uVar1 = uVar5 + param_2;
    do {
      uVar4 = param_5 & uVar5;
      uVar5 = uVar5 + 1;
      puVar3 = (undefined1 *)FUN_7100783210(param_1,uVar4);
      uVar2 = *puVar3;
      puVar3 = (undefined1 *)FUN_7100783210(param_1,*param_4);
      *puVar3 = uVar2;
      *param_4 = *param_4 + 1 & param_5;
    } while (uVar5 != uVar1);
  }
  return;
}



// ===== FUN_7100783310 @ 7100783310 (size=92) =====

void FUN_7100783310(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    param_4 = param_4 + param_3;
    param_2 = param_2 - param_3;
    do {
      puVar1 = (undefined1 *)FUN_7100783210(param_1,param_3);
      *(undefined1 *)(param_2 + param_3) = *puVar1;
      param_3 = param_3 + 1;
    } while (param_3 != param_4);
    return;
  }
  return;
}



// ===== FUN_7100783370 @ 7100783370 (size=60) =====

ulong FUN_7100783370(long param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  
  puVar1 = (ulong *)(param_1 + 0x100);
  do {
    uVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    if (param_2 < uVar2) {
      uVar2 = uVar2 - param_2;
      if (param_3 < uVar2) {
        uVar2 = param_3;
      }
      return uVar2;
    }
  } while (puVar1 != (ulong *)(param_1 + 0x200));
  return 0;
}



// ===== FUN_71007833b0 @ 71007833b0 (size=272) =====

void FUN_71007833b0(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((param_3 == param_2) || (*(undefined1 *)(param_1 + 0x4da2) = 1, param_2 <= param_3)) {
    if (*(char *)(param_1 + 0x4d90) == '\0') {
      FUN_7100782e30(param_1,*(long *)(param_1 + 0x4b88) + param_2,param_3 - param_2);
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x4da1) = 1;
    if (*(char *)(param_1 + 0x4d90) == '\0') {
      FUN_7100782e30(param_1,*(long *)(param_1 + 0x4b88) + param_2,
                     *(long *)(param_1 + 0xe948) - param_2);
      FUN_7100782e30(param_1,*(undefined8 *)(param_1 + 0x4b88),param_3);
      return;
    }
  }
  for (uVar1 = param_3 - param_2 & *(ulong *)(param_1 + 0xe950); uVar1 != 0; uVar1 = uVar1 - lVar2)
  {
    lVar2 = FUN_7100783370(param_1 + 0x4b90,param_2,uVar1);
    uVar3 = FUN_7100783210(param_1 + 0x4b90,param_2);
    FUN_7100782e30(param_1,uVar3,lVar2);
    param_2 = param_2 + lVar2 & *(ulong *)(param_1 + 0xe950);
  }
  return;
}



// ===== FUN_71007834c0 @ 71007834c0 (size=784) =====

void FUN_71007834c0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  uint *puVar14;
  ulong local_18;
  
  local_18 = param_1[0x18] & 0xffffffff;
  uVar8 = (int)param_1[0x17] - (int)param_1[0x18] & (uint)param_1[0x1d2a];
  if (param_1[0x1d1f] != 0) {
    uVar10 = 0;
    puVar2 = param_1 + 0x1d11;
    do {
      lVar12 = uVar10 * 8;
      puVar14 = *(uint **)(param_1[0x1d1e] + uVar10 * 8);
      if (puVar14 == (uint *)0x0) {
LAB_7100783558:
        uVar10 = uVar10 + 1;
      }
      else if ((char)puVar14[2] == '\0') {
        uVar3 = *puVar14;
        uVar11 = puVar14[1];
        if ((ulong)uVar8 <= ((ulong)(uVar3 - (uint)local_18) & param_1[0x1d2a]))
        goto LAB_7100783558;
        if (uVar3 != (uint)local_18) {
          FUN_71007833b0(param_1,local_18);
          uVar8 = (int)param_1[0x17] - uVar3 & (uint)param_1[0x1d2a];
        }
        if (uVar8 < uVar11) {
          uVar5 = param_1[0x1d1f];
          if (uVar10 < uVar5) {
            lVar9 = param_1[0x1d1e];
            plVar7 = (long *)(lVar9 + lVar12);
            do {
              plVar1 = plVar7 + 1;
              lVar12 = *plVar7;
              if ((lVar12 != 0) && (*(char *)(lVar12 + 8) != '\0')) {
                *(undefined1 *)(lVar12 + 8) = 0;
              }
              plVar7 = plVar1;
            } while ((long *)(lVar9 + uVar5 * 8) != plVar1);
          }
          param_1[0x18] = (ulong)uVar3;
          return;
        }
        uVar8 = uVar3 + uVar11 & (uint)param_1[0x1d2a];
        local_18 = (ulong)uVar8;
        lVar9 = param_1[0x971] + (ulong)uVar3;
        if (uVar8 - 1 < uVar3) {
          iVar4 = (int)param_1[0x1d29] - uVar3;
          FUN_7100791a10(puVar2,0,lVar9,iVar4);
          FUN_7100791a10(puVar2,iVar4,param_1[0x971],uVar8);
        }
        else {
          FUN_7100791a10(puVar2,0,lVar9,uVar11);
        }
        FUN_71007821b0(param_1,puVar14 + 4);
        lVar9 = param_1[0x1d1e];
        uVar11 = puVar14[0xe];
        uVar13 = *(undefined8 *)(puVar14 + 0xc);
        if (*(long *)(lVar9 + lVar12) != 0) {
          thunk_FUN_710081c200(*(long *)(lVar9 + lVar12),0x40);
          lVar9 = param_1[0x1d1e];
        }
        uVar5 = param_1[0x1d1f];
        uVar10 = uVar10 + 1;
        *(undefined8 *)(lVar9 + lVar12) = 0;
        if (uVar10 < uVar5) {
          do {
            puVar14 = *(uint **)(lVar9 + uVar10 * 8);
            lVar12 = uVar10 * 8;
            uVar5 = (ulong)uVar11;
            if ((((puVar14 == (uint *)0x0) || (*puVar14 != uVar3)) || (puVar14[1] != uVar11)) ||
               ((char)puVar14[2] != '\0')) goto LAB_71007836ec;
            FUN_7100791a10(puVar2,0,uVar13,uVar5);
            FUN_71007821b0(param_1,puVar14 + 4);
            lVar9 = param_1[0x1d1e];
            uVar10 = uVar10 + 1;
            uVar11 = puVar14[0xe];
            uVar13 = *(undefined8 *)(puVar14 + 0xc);
            lVar6 = *(long *)(lVar9 + lVar12);
            if (lVar6 != 0) {
              thunk_FUN_710081c200(lVar6,0x40);
              lVar9 = param_1[0x1d1e];
            }
            uVar5 = param_1[0x1d1f];
            *(undefined8 *)(lVar9 + lVar12) = 0;
          } while (uVar10 < uVar5);
        }
        uVar5 = (ulong)uVar11;
LAB_71007836ec:
        FUN_710077df50(*param_1,uVar13,uVar5);
        *(undefined1 *)((long)param_1 + 0x4da2) = 1;
        param_1[0x9b5] = param_1[0x9b5] + uVar5;
        uVar8 = (int)param_1[0x17] - uVar8 & (uint)param_1[0x1d2a];
      }
      else {
        uVar10 = uVar10 + 1;
        *(undefined1 *)(puVar14 + 2) = 0;
      }
    } while (uVar10 < (ulong)param_1[0x1d1f]);
  }
  FUN_71007833b0(param_1,local_18);
  param_1[0x18] = param_1[0x17];
  return;
}



// ===== FUN_71007837d0 @ 71007837d0 (size=340) =====

void FUN_71007837d0(long param_1)

{
  long lVar1;
  
  FUN_71007821d0(param_1,0);
  if (*(long *)(param_1 + 0x4b88) != 0) {
    FUN_710081c200();
  }
  lVar1 = *(long *)(param_1 + 0xe918);
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0xe938) != '\0') {
      FUN_710077e260(lVar1,*(long *)(param_1 + 0xe928) << 2);
      lVar1 = *(long *)(param_1 + 0xe918);
    }
    FUN_710081c200(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0xe8f0);
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0xe910) != '\0') {
      FUN_710077e260(lVar1,*(long *)(param_1 + 0xe900) << 3);
      lVar1 = *(long *)(param_1 + 0xe8f0);
    }
    FUN_710081c200(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0xe8c8);
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0xe8e8) != '\0') {
      FUN_710077e260(lVar1,*(long *)(param_1 + 0xe8d8) << 3);
      lVar1 = *(long *)(param_1 + 0xe8c8);
    }
    FUN_710081c200(lVar1);
  }
  FUN_7100790bb0(param_1 + 0xe8b0);
  FUN_71007917c0(param_1 + 0xe888);
  FUN_710077f710(param_1 + 0xe4d0);
  FUN_71007830f0(param_1 + 0x4b90);
  lVar1 = *(long *)(param_1 + 0x70);
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x90) != '\0') {
      FUN_710077e260(lVar1,*(long *)(param_1 + 0x80) << 4);
      lVar1 = *(long *)(param_1 + 0x70);
    }
    FUN_710081c200(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x68) != '\0') {
      FUN_710077e260(lVar1,*(undefined8 *)(param_1 + 0x58));
      lVar1 = *(long *)(param_1 + 0x48);
    }
    FUN_710081c200(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x40) != '\0') {
      FUN_710077e260(lVar1,*(undefined8 *)(param_1 + 0x30));
      lVar1 = *(long *)(param_1 + 0x20);
    }
    FUN_710081c200(lVar1);
  }
  FUN_7100790bb0(param_1 + 8);
  return;
}



// ===== FUN_7100783930 @ 7100783930 (size=448) =====

void FUN_7100783930(long param_1,ulong param_2,char param_3)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  uVar1 = param_2;
  if (param_2 < 0x40000) {
    uVar1 = 0x40000;
  }
  if (param_2 == 0) {
    FUN_7100778a60(&DAT_7100d1bd98);
    uVar8 = *(ulong *)(param_1 + 0xe948);
    if (0x3ffff < uVar8) {
      return;
    }
    cVar2 = *(char *)(param_1 + 0x4d90);
    if (param_3 != '\0') goto LAB_710078398c;
LAB_7100783a3c:
    if (cVar2 == '\0') goto LAB_7100783a9c;
LAB_7100783a40:
    if (0xffffff < param_2) {
      if (*(long *)(param_1 + 0x4b88) != 0) {
        FUN_710081c200();
        *(undefined8 *)(param_1 + 0x4b88) = 0;
      }
      FUN_7100783110(param_1 + 0x4b90,uVar1);
      *(undefined1 *)(param_1 + 0x4d90) = 1;
      *(ulong *)(param_1 + 0xe948) = uVar1;
      *(ulong *)(param_1 + 0xe950) = uVar1 - 1;
      return;
    }
LAB_7100783ac4:
    puVar4 = (undefined8 *)FUN_71007adf60(8);
    *puVar4 = &PTR_FUN_7100aec478;
                    /* WARNING: Subroutine does not return */
    FUN_71007af000(puVar4,&PTR_PTR_FUN_7100aea210,FUN_71007ad880);
  }
  uVar8 = *(ulong *)(param_1 + 0xe948);
  if (uVar1 <= uVar8) {
    return;
  }
  if (0x10000 < uVar1 >> 0x10) {
    return;
  }
  cVar2 = *(char *)(param_1 + 0x4d90);
  if (param_3 == '\0') goto LAB_7100783a3c;
LAB_710078398c:
  lVar9 = *(long *)(param_1 + 0x4b88);
  if (lVar9 == 0) {
    if (cVar2 != '\0') goto LAB_7100783ac4;
LAB_7100783a9c:
    lVar3 = FUN_710080e9e0(uVar1,1);
    if (lVar3 == 0) goto LAB_7100783a40;
    lVar9 = *(long *)(param_1 + 0x4b88);
    if (lVar9 == 0) {
      *(long *)(param_1 + 0x4b88) = lVar3;
      goto LAB_71007839e0;
    }
  }
  else {
    if ((cVar2 != '\0') || (lVar3 = FUN_710080e9e0(uVar1,1), lVar3 == 0)) goto LAB_7100783ac4;
    if (uVar8 != 0) {
      lVar7 = *(long *)(param_1 + 0xb8);
      uVar6 = 1;
      do {
        uVar5 = lVar7 - uVar6;
        uVar6 = uVar6 + 1;
        *(undefined1 *)(lVar3 + (uVar5 & uVar1 - 1)) = *(undefined1 *)(lVar9 + (uVar5 & uVar8 - 1));
      } while (uVar6 <= uVar8);
    }
  }
  FUN_710081c200(lVar9);
  *(long *)(param_1 + 0x4b88) = lVar3;
LAB_71007839e0:
  *(ulong *)(param_1 + 0xe948) = uVar1;
  *(ulong *)(param_1 + 0xe950) = uVar1 - 1;
  return;
}



// ===== FUN_7100783af0 @ 7100783af0 (size=172) =====

void FUN_7100783af0(long param_1,char param_2)

{
  ulong uVar1;
  
  if (param_2 == '\0') {
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    FUN_7100808340(param_1 + 0xe4,0,0x4a9c);
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    uVar1 = *(ulong *)(param_1 + 0xe948);
    if (0x400000 < uVar1) {
      uVar1 = 0x400000;
    }
    *(ulong *)(param_1 + 0x4b80) = uVar1 & *(ulong *)(param_1 + 0xe950);
  }
  FUN_7100783050(param_1);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0x4da8) = 0;
  FUN_7100781cf0(param_1,param_2);
  FUN_7100782280(param_1,param_2);
  FUN_7100782e80(param_1,param_2);
  return;
}



// ===== FUN_7100783ba0 @ 7100783ba0 (size=480) =====

void FUN_7100783ba0(long param_1,char param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  FUN_7100783af0(param_1,param_2);
  FUN_7100780e60(param_1,param_2);
  FUN_7100782380(param_1);
  if (param_2 == '\0') {
    FUN_7100780f30(param_1);
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0xc0);
  }
  *(undefined8 *)(param_1 + 0xb8) = uVar4;
  lVar5 = *(long *)(param_1 + 0x4d98) + -1;
  *(long *)(param_1 + 0x4d98) = lVar5;
  if (-1 < lVar5) {
    FUN_7100781b20(param_1);
    *(undefined4 *)(param_1 + 0x58dc) = 8;
    if (-1 < *(long *)(param_1 + 0x4d98)) {
      do {
        uVar6 = *(ulong *)(param_1 + 0xe950) & *(ulong *)(param_1 + 0xb8);
        *(ulong *)(param_1 + 0xb8) = uVar6;
        if (*(int *)(param_1 + 8) < *(int *)(param_1 + 200) + -0x1d) {
          if ((*(ulong *)(param_1 + 0xc0) - uVar6 & *(ulong *)(param_1 + 0xe950)) < 0x10e &&
              *(ulong *)(param_1 + 0xc0) != uVar6) {
LAB_7100783d30:
            FUN_7100781c50(param_1);
          }
        }
        else {
          cVar2 = FUN_7100782380(param_1);
          if (cVar2 == '\0') break;
          if ((*(long *)(param_1 + 0xc0) - *(long *)(param_1 + 0xb8) & *(ulong *)(param_1 + 0xe950))
              < 0x10e && *(long *)(param_1 + 0xc0) != *(long *)(param_1 + 0xb8))
          goto LAB_7100783d30;
        }
        if (*(int *)(param_1 + 0x58d4) == 0) {
          iVar1 = *(int *)(param_1 + 0x58dc) + -1;
          *(int *)(param_1 + 0x58dc) = iVar1;
          if (iVar1 < 0) {
            FUN_7100781b20(param_1);
            *(undefined4 *)(param_1 + 0x58dc) = 7;
          }
          uVar3 = *(uint *)(param_1 + 0x58b4) << 1;
          if ((*(uint *)(param_1 + 0x58b4) >> 7 & 1) == 0) {
            *(uint *)(param_1 + 0x58b4) = uVar3;
            iVar1 = *(int *)(param_1 + 0x58dc) + -1;
            *(int *)(param_1 + 0x58dc) = iVar1;
            if (iVar1 < 0) {
              FUN_7100781b20(param_1);
              uVar3 = *(uint *)(param_1 + 0x58b4);
              *(undefined4 *)(param_1 + 0x58dc) = 7;
            }
            if ((uVar3 >> 7 & 1) != 0) {
              *(uint *)(param_1 + 0x58b4) = uVar3 << 1;
              if (*(uint *)(param_1 + 0x58e4) <= *(uint *)(param_1 + 0x58e0)) goto LAB_7100783c3c;
              goto LAB_7100783cdc;
            }
            *(uint *)(param_1 + 0x58b4) = uVar3 << 1;
            FUN_7100781100(param_1);
          }
          else {
            *(uint *)(param_1 + 0x58b4) = uVar3;
            if (*(uint *)(param_1 + 0x58e4) <= *(uint *)(param_1 + 0x58e0)) goto LAB_7100783cdc;
LAB_7100783c3c:
            FUN_7100781480(param_1);
          }
          lVar5 = *(long *)(param_1 + 0x4d98);
        }
        else {
LAB_7100783cdc:
          FUN_7100781800(param_1);
          lVar5 = *(long *)(param_1 + 0x4d98);
        }
      } while (-1 < lVar5);
      FUN_7100781c50(param_1);
      return;
    }
  }
  FUN_7100781c50(param_1);
  return;
}



// ===== FUN_7100783d80 @ 7100783d80 (size=520) =====

void FUN_7100783d80(undefined8 param_1,byte *param_2,uint *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  undefined2 uVar6;
  uint *puVar7;
  uint uVar8;
  long lVar9;
  byte *pbVar10;
  int iVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  byte *pbVar11;
  
  uVar13 = (ulong)param_4;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  *param_3 = param_4;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (uVar13 == 0) {
    lVar9 = 0;
  }
  else {
    pbVar11 = param_2;
    do {
      pbVar10 = pbVar11 + 1;
      *(int *)((long)&local_80 + ((ulong)*pbVar11 & 0xf) * 4) =
           *(int *)((long)&local_80 + ((ulong)*pbVar11 & 0xf) * 4) + 1;
      pbVar11 = pbVar10;
    } while (pbVar10 != param_2 + uVar13);
    lVar9 = uVar13 << 1;
  }
  local_80 = local_80 & 0xffffffff00000000;
  FUN_7100808340(param_3 + 0x322,0,lVar9);
  lVar9 = 2;
  iVar14 = 0;
  param_3[1] = 0;
  uVar8 = 0;
  iVar12 = 0;
  param_3[0x11] = 0;
  do {
    uVar8 = uVar8 + iVar14;
    bVar3 = lVar9 != 0x10;
    iVar14 = *(int *)(&stack0xffffffffffffff7c + lVar9 * 4);
    iVar1 = iVar14 + iVar12;
    iVar12 = iVar1 * 2;
    param_3[lVar9] = iVar1 << (ulong)(0x11U - (int)lVar9 & 0x1f);
    param_3[lVar9 + 0x10] = uVar8;
    lVar9 = lVar9 + 1;
  } while (bVar3);
  uStack_38 = *(undefined8 *)(param_3 + 0x13);
  local_40 = *(undefined8 *)(param_3 + 0x11);
  uStack_28 = *(undefined8 *)(param_3 + 0x17);
  uStack_30 = *(undefined8 *)(param_3 + 0x15);
  uStack_18 = *(undefined8 *)(param_3 + 0x1b);
  local_20 = *(undefined8 *)(param_3 + 0x19);
  uStack_8 = *(undefined8 *)(param_3 + 0x1f);
  uStack_10 = *(undefined8 *)(param_3 + 0x1d);
  if (param_4 == 0) {
LAB_7100783f58:
    uVar8 = 7;
    uVar15 = 0x80;
    lVar9 = 9;
  }
  else {
    lVar9 = 0;
    do {
      lVar5 = (long)(int)(param_2[lVar9] & 0xf);
      if ((param_2[lVar9] & 0xf) != 0) {
        uVar8 = *(uint *)((long)&local_40 + lVar5 * 4);
        *(short *)((long)param_3 + (ulong)uVar8 * 2 + 0xc88) = (short)lVar9;
        *(uint *)((long)&local_40 + lVar5 * 4) = uVar8 + 1;
      }
      lVar9 = lVar9 + 1;
    } while ((uint)lVar9 < param_4);
    if (param_4 < 300) {
      if (param_4 < 0x12a) goto LAB_7100783f58;
    }
    else if (param_4 != 0x132) goto LAB_7100783f58;
    uVar8 = 10;
    uVar15 = 0x400;
    lVar9 = 6;
  }
  lVar5 = 0;
  uVar4 = 1;
  param_3[0x21] = uVar8;
  do {
    uVar8 = (int)lVar5 << lVar9;
    if (uVar4 < 0x10) {
      puVar7 = param_3 + (uVar4 + 1);
      do {
        uVar2 = *puVar7;
        puVar7 = puVar7 + 1;
        if (uVar8 < uVar2) {
          *(char *)((long)param_3 + lVar5 + 0x88) = (char)uVar4;
          uVar8 = (uVar8 - param_3[(ulong)(uVar4 - 1) + 1] >> (ulong)(0x10 - uVar4 & 0x1f)) +
                  param_3[(ulong)uVar4 + 0x11];
          if (uVar8 < param_4) {
            uVar6 = *(undefined2 *)((long)param_3 + (ulong)uVar8 * 2 + 0xc88);
          }
          else {
            uVar6 = 0;
          }
          goto LAB_7100783f30;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 != 0x10);
    }
    uVar6 = 0;
    *(char *)((long)param_3 + lVar5 + 0x88) = (char)uVar4;
LAB_7100783f30:
    *(undefined2 *)((long)param_3 + lVar5 * 2 + 0x488) = uVar6;
    lVar5 = lVar5 + 1;
    if (uVar15 <= (uint)lVar5) {
      return;
    }
  } while( true );
}



// ===== FUN_7100783f90 @ 7100783f90 (size=1288) =====

undefined8 FUN_7100783f90(long param_1)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  int iVar22;
  uint uVar23;
  long lVar24;
  byte abStack_420 [19];
  byte abStack_40d [5];
  byte local_408 [298];
  undefined1 auStack_2de [48];
  undefined1 auStack_2ae [686];
  
  iVar22 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 200) + -0x18 <= iVar22) {
    cVar11 = FUN_7100782380();
    if (cVar11 == '\0') {
      return 0;
    }
    iVar22 = *(int *)(param_1 + 8);
  }
  lVar24 = *(long *)(param_1 + 0x18);
  iVar13 = *(int *)(param_1 + 0xc);
  uVar20 = ((uint)*(byte *)(lVar24 + iVar22 + 2) | (uint)*(byte *)(lVar24 + iVar22) << 0x10 |
           (uint)*(byte *)(lVar24 + iVar22 + 1) << 8) >> (ulong)(8U - iVar13 & 0x1f);
  *(byte *)(param_1 + 0x98a0) = (byte)(uVar20 >> 0xf) & 1;
  if ((uVar20 >> 0xe & 1) == 0) {
    FUN_7100808340(param_1 + 0x949c,0,0x404);
  }
  uVar12 = iVar13 + 2;
  piVar2 = (int *)(param_1 + 8);
  iVar22 = iVar22 + (uVar12 >> 3);
  uVar12 = uVar12 & 7;
  uVar23 = 0x176;
  *(int *)(param_1 + 8) = iVar22;
  *(uint *)(param_1 + 0xc) = uVar12;
  if ((uVar20 & 0x8000) != 0) {
    uVar23 = (uVar20 >> 0xc & 3) + 1;
    *(uint *)(param_1 + 0x98a4) = uVar23;
    if (uVar23 <= *(uint *)(param_1 + 0x98a8)) {
      *(undefined4 *)(param_1 + 0x98a8) = 0;
    }
    uVar23 = uVar23 * 0x101;
    iVar22 = iVar22 + (uVar12 + 2 >> 3);
    uVar12 = uVar12 + 2 & 7;
    *(int *)(param_1 + 8) = iVar22;
    *(uint *)(param_1 + 0xc) = uVar12;
  }
  pbVar17 = abStack_420;
  do {
    bVar8 = *(byte *)(lVar24 + iVar22);
    lVar15 = (long)iVar22;
    uVar20 = 8 - uVar12;
    bVar6 = *(byte *)(lVar24 + lVar15 + 2);
    iVar22 = iVar22 + (uVar12 + 4 >> 3);
    uVar12 = uVar12 + 4 & 7;
    bVar7 = *(byte *)(lVar24 + lVar15 + 1);
    *piVar2 = iVar22;
    *(uint *)(param_1 + 0xc) = uVar12;
    pbVar18 = pbVar17 + 1;
    *pbVar17 = (byte)((((uint)bVar6 | (uint)bVar8 << 0x10 | (uint)bVar7 << 8) >>
                      (ulong)(uVar20 & 0x1f)) >> 0xc) & 0xf;
    pbVar17 = pbVar18;
  } while (abStack_40d != pbVar18);
  FUN_7100783d80(param_1,abStack_420,param_1 + 0x3c94,0x13);
  iVar22 = *(int *)(param_1 + 8);
  uVar20 = 0;
  puVar3 = (uint *)(param_1 + 0x3c94);
  do {
    iVar13 = uVar20 + 3;
    if (*(int *)(param_1 + 200) + -4 <= iVar22) {
      cVar11 = FUN_7100782380(param_1);
      if (cVar11 == '\0') {
        return 0;
      }
      iVar22 = *(int *)(param_1 + 8);
    }
    lVar24 = *(long *)(param_1 + 0x18);
    iVar5 = *(int *)(param_1 + 0xc);
    uVar12 = *(uint *)(param_1 + 0x3d18);
    uVar4 = ((uint)*(byte *)(lVar24 + iVar22 + 2) | (uint)*(byte *)(lVar24 + iVar22) << 0x10 |
            (uint)*(byte *)(lVar24 + iVar22 + 1) << 8) >> (ulong)(8U - iVar5 & 0x1f) & 0xfffe;
    if (uVar4 < puVar3[(ulong)uVar12 + 1]) {
      uVar19 = (ulong)(uVar4 >> (ulong)(0x10 - uVar12 & 0x1f));
      uVar9 = *(ushort *)((long)puVar3 + uVar19 * 2 + 0x488);
      uVar12 = (uint)*(byte *)((long)puVar3 + uVar19 + 0x88) + iVar5;
      iVar22 = iVar22 + (uVar12 >> 3);
      *piVar2 = iVar22;
      *(uint *)(param_1 + 0xc) = uVar12 & 7;
    }
    else {
      uVar12 = uVar12 + 1;
      if (uVar12 < 0xf) {
        lVar15 = param_1 + (ulong)uVar12 * 4;
        do {
          puVar1 = (uint *)(lVar15 + 0x3c98);
          lVar15 = lVar15 + 4;
          if (uVar4 < *puVar1) {
            uVar14 = uVar12 - 1;
            uVar16 = 0x10 - uVar12;
            goto LAB_710078414c;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 != 0xf);
        uVar16 = 1;
        uVar14 = 0xe;
      }
      else {
        uVar16 = 1;
        uVar14 = 0xe;
        uVar12 = 0xf;
      }
LAB_710078414c:
      iVar22 = iVar22 + (uVar12 + iVar5 >> 3);
      *piVar2 = iVar22;
      *(uint *)(param_1 + 0xc) = uVar12 + iVar5 & 7;
      uVar12 = (uVar4 - puVar3[(ulong)uVar14 + 1] >> (ulong)(uVar16 & 0x1f)) +
               puVar3[(ulong)uVar12 + 0x11];
      if (*puVar3 <= uVar12) {
        uVar12 = 0;
      }
      uVar9 = *(ushort *)((long)puVar3 + (ulong)uVar12 * 2 + 0xc88);
    }
    if (uVar9 < 0x10) {
      local_408[uVar20] = (char)uVar9 + *(char *)(param_1 + (ulong)uVar20 + 0x949c) & 0xf;
      uVar20 = uVar20 + 1;
    }
    else {
      iVar5 = *(int *)(param_1 + 0xc);
      uVar12 = ((uint)*(byte *)(lVar24 + iVar22 + 2) | (uint)*(byte *)(lVar24 + iVar22) << 0x10 |
               (uint)*(byte *)(lVar24 + iVar22 + 1) << 8) >> (ulong)(8U - iVar5 & 0x1f);
      if (uVar9 == 0x10) {
        iVar22 = iVar22 + (iVar5 + 2U >> 3);
        *piVar2 = iVar22;
        *(uint *)(param_1 + 0xc) = iVar5 + 2U & 7;
        if (uVar20 == 0) {
          return 0;
        }
        if (uVar23 <= uVar20) break;
        do {
          local_408[uVar20] = local_408[uVar20 - 1];
          uVar20 = uVar20 + 1;
          bVar10 = ((uVar12 >> 0xe & 3) - uVar20) + iVar13 == 0;
        } while ((!bVar10 && uVar20 <= uVar23) && (bVar10 || uVar23 != uVar20));
      }
      else {
        if (uVar9 == 0x11) {
          uVar4 = iVar5 + 3;
          iVar13 = (uVar12 >> 0xd & 7) + 3;
        }
        else {
          uVar4 = iVar5 + 7;
          iVar13 = (uVar12 >> 9 & 0x7f) + 0xb;
        }
        iVar22 = iVar22 + (uVar4 >> 3);
        *piVar2 = iVar22;
        *(uint *)(param_1 + 0xc) = uVar4 & 7;
        if (uVar23 <= uVar20) break;
        uVar12 = iVar13 + uVar20;
        do {
          uVar19 = (ulong)uVar20;
          uVar20 = uVar20 + 1;
          bVar10 = uVar12 == uVar20;
          local_408[uVar19] = 0;
        } while ((!bVar10 && uVar20 <= uVar23) && (bVar10 || uVar23 != uVar20));
      }
    }
  } while (uVar20 < uVar23);
  *(undefined1 *)(param_1 + 0xe884) = 1;
  if (iVar22 <= *(int *)(param_1 + 200)) {
    if (*(char *)(param_1 + 0x98a0) == '\0') {
      FUN_7100783d80(param_1,local_408,param_1 + 0xe4,0x12a);
      FUN_7100783d80(param_1,auStack_2de,param_1 + 0xfd0,0x30);
      FUN_7100783d80(param_1,auStack_2ae,param_1 + 0x2da8,0x1c);
    }
    else {
      uVar21 = 0;
      uVar19 = 0;
      if (*(int *)(param_1 + 0x98a4) != 0) {
        do {
          lVar24 = uVar19 * 0xeec;
          pbVar17 = local_408 + uVar21;
          uVar21 = (ulong)((int)uVar21 + 0x101);
          uVar20 = (int)uVar19 + 1;
          uVar19 = (ulong)uVar20;
          FUN_7100783d80(param_1,pbVar17,param_1 + lVar24 + 0x58ec);
        } while (uVar20 < *(uint *)(param_1 + 0x98a4));
      }
    }
    FUN_710080f900(param_1 + 0x949c,local_408,uVar23);
    return 1;
  }
  return 1;
}



// ===== FUN_71007844a0 @ 71007844a0 (size=692) =====

void FUN_71007844a0(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  ulong uVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  
  iVar2 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 200) <= iVar2 + 4) {
    return;
  }
  lVar11 = *(long *)(param_1 + 0x18) + (long)iVar2;
  iVar3 = *(int *)(param_1 + 0xc);
  uVar1 = ((uint)*(byte *)(lVar11 + 2) |
           (uint)*(byte *)(*(long *)(param_1 + 0x18) + (long)iVar2) << 0x10 |
          (uint)*(byte *)(lVar11 + 1) << 8) >> (ulong)(8U - iVar3 & 0x1f) & 0xfffe;
  if (*(char *)(param_1 + 0x98a0) == '\0') {
    lVar11 = param_1 + 0xe4;
    uVar6 = *(uint *)(param_1 + 0x168);
    if (uVar1 < *(uint *)(lVar11 + (ulong)uVar6 * 4 + 4)) {
      uVar10 = (ulong)(uVar1 >> (ulong)(0x10 - uVar6 & 0x1f));
      sVar4 = *(short *)(lVar11 + uVar10 * 2 + 0x488);
      uVar1 = (uint)*(byte *)(lVar11 + uVar10 + 0x88) + iVar3;
      *(uint *)(param_1 + 8) = iVar2 + (uVar1 >> 3);
      *(uint *)(param_1 + 0xc) = uVar1 & 7;
    }
    else {
      uVar6 = uVar6 + 1;
      if (uVar6 < 0xf) {
        lVar8 = param_1 + (ulong)uVar6 * 4;
        do {
          puVar7 = (uint *)(lVar8 + 0xe8);
          lVar8 = lVar8 + 4;
          if (uVar1 < *puVar7) {
            uVar9 = uVar6 - 1;
            uVar12 = 0x10 - uVar6;
            goto LAB_7100784654;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != 0xf);
        uVar12 = 1;
        uVar9 = 0xe;
      }
      else {
        uVar12 = 1;
        uVar9 = 0xe;
        uVar6 = 0xf;
      }
LAB_7100784654:
      *(uint *)(param_1 + 8) = iVar2 + (uVar6 + iVar3 >> 3);
      *(uint *)(param_1 + 0xc) = uVar6 + iVar3 & 7;
      uVar1 = (uVar1 - *(int *)(lVar11 + (ulong)uVar9 * 4 + 4) >> (ulong)(uVar12 & 0x1f)) +
              *(int *)(lVar11 + (ulong)uVar6 * 4 + 0x44);
      if (*(uint *)(param_1 + 0xe4) <= uVar1) {
        uVar1 = 0;
      }
      sVar4 = *(short *)(lVar11 + (ulong)uVar1 * 2 + 0xc88);
    }
    if (sVar4 != 0x10d) {
      return;
    }
  }
  else {
    uVar10 = (ulong)*(uint *)(param_1 + 0x98a8);
    lVar11 = param_1 + uVar10 * 0xeec;
    uVar6 = *(uint *)(lVar11 + 0x5970);
    if (uVar1 < *(uint *)(param_1 + (uVar10 * 0x3bb + (ulong)uVar6 + 0x1638) * 4 + 0x10)) {
      uVar5 = (ulong)(uVar1 >> (ulong)(0x10 - uVar6 & 0x1f));
      uVar1 = (uint)*(byte *)(lVar11 + uVar5 + 0x5974) + iVar3;
      *(uint *)(param_1 + 8) = iVar2 + (uVar1 >> 3);
      *(uint *)(param_1 + 0xc) = uVar1 & 7;
      sVar4 = *(short *)(param_1 + (uVar5 + uVar10 * 0x776 + 0x2eb0) * 2 + 0x14);
    }
    else {
      uVar6 = uVar6 + 1;
      if (uVar6 < 0xf) {
        puVar7 = (uint *)(param_1 +
                         ((ulong)*(uint *)(param_1 + 0x98a8) * 0x3bb + 0x163c + (ulong)uVar6) * 4);
        do {
          uVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          if (uVar1 < uVar9) {
            uVar9 = uVar6 - 1;
            uVar12 = 0x10 - uVar6;
            goto LAB_7100784578;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != 0xf);
        uVar12 = 1;
        uVar9 = 0xe;
      }
      else {
        uVar12 = 1;
        uVar9 = 0xe;
        uVar6 = 0xf;
      }
LAB_7100784578:
      *(uint *)(param_1 + 8) = iVar2 + (uVar6 + iVar3 >> 3);
      *(uint *)(param_1 + 0xc) = uVar6 + iVar3 & 7;
      uVar1 = (uVar1 - *(int *)(param_1 + (uVar10 * 0x3bb + (ulong)uVar9 + 0x1638) * 4 + 0x10) >>
              (ulong)(uVar12 & 0x1f)) +
              *(int *)(param_1 + (uVar10 * 0x3bb + (ulong)uVar6 + 0x1648) * 4 + 0x10);
      if (*(uint *)(param_1 + uVar10 * 0xeec + 0x58ec) <= uVar1) {
        uVar1 = 0;
      }
      sVar4 = *(short *)(param_1 + ((ulong)uVar1 + uVar10 * 0x776 + 0x32b0) * 2 + 0x14);
    }
    if (sVar4 != 0x100) {
      return;
    }
  }
  FUN_7100783f90();
  return;
}



// ===== FUN_7100784760 @ 7100784760 (size=2308) =====

void FUN_7100784760(long param_1,char param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  short sVar8;
  ushort uVar9;
  undefined1 uVar10;
  char cVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  uint *puVar19;
  long lVar20;
  int *piVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  
  if (*(char *)(param_1 + 0x4da0) == '\0') {
    FUN_7100783af0(param_1,param_2);
    cVar11 = FUN_7100782380(param_1);
    if ((cVar11 == '\0') ||
       (((param_2 == '\0' || (*(char *)(param_1 + 0xe884) == '\0')) &&
        (cVar11 = FUN_7100783f90(param_1), cVar11 == '\0')))) {
      return;
    }
    lVar13 = *(long *)(param_1 + 0x4d98) + -1;
    *(long *)(param_1 + 0x4d98) = lVar13;
  }
  else {
    lVar13 = *(long *)(param_1 + 0x4d98);
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0xc0);
  }
  if (-1 < lVar13) {
    puVar1 = (uint *)(param_1 + 0x2da8);
LAB_71007847ac:
    do {
      uVar14 = *(ulong *)(param_1 + 0xe950) & *(ulong *)(param_1 + 0xb8);
      *(ulong *)(param_1 + 0xb8) = uVar14;
      if (*(int *)(param_1 + 8) < *(int *)(param_1 + 200) + -0x1d) {
        if ((*(ulong *)(param_1 + 0xc0) - uVar14 & *(ulong *)(param_1 + 0xe950)) < 0x10e &&
            *(ulong *)(param_1 + 0xc0) != uVar14) {
LAB_7100784ab4:
          FUN_7100781c50(param_1);
          if (*(char *)(param_1 + 0x4da0) != '\0') {
            return;
          }
        }
      }
      else {
        cVar11 = FUN_7100782380(param_1);
        if (cVar11 == '\0') break;
        if ((*(long *)(param_1 + 0xc0) - *(long *)(param_1 + 0xb8) & *(ulong *)(param_1 + 0xe950)) <
            0x10e && *(long *)(param_1 + 0xc0) != *(long *)(param_1 + 0xb8)) goto LAB_7100784ab4;
      }
      iVar17 = *(int *)(param_1 + 8);
      iVar2 = *(int *)(param_1 + 0xc);
      lVar13 = *(long *)(param_1 + 0x18);
      uVar22 = ((uint)*(byte *)(lVar13 + iVar17 + 2) | (uint)*(byte *)(lVar13 + iVar17) << 0x10 |
               (uint)*(byte *)(lVar13 + iVar17 + 1) << 8) >> (ulong)(8U - iVar2 & 0x1f) & 0xfffe;
      if (*(char *)(param_1 + 0x98a0) == '\0') {
        lVar18 = param_1 + 0xe4;
        uVar16 = *(uint *)(param_1 + 0x168);
        if (uVar22 < *(uint *)(lVar18 + (ulong)uVar16 * 4 + 4)) {
          uVar14 = (ulong)(uVar22 >> (ulong)(0x10 - uVar16 & 0x1f));
          uVar9 = *(ushort *)(lVar18 + uVar14 * 2 + 0x488);
          uVar16 = (uint)uVar9;
          uVar22 = (uint)*(byte *)(lVar18 + uVar14 + 0x88) + iVar2;
          uVar12 = (uint)uVar9;
          *(uint *)(param_1 + 8) = iVar17 + (uVar22 >> 3);
          *(uint *)(param_1 + 0xc) = uVar22 & 7;
          if (0xff < uVar12) goto LAB_7100784a34;
        }
        else {
          uVar16 = uVar16 + 1;
          if (uVar16 < 0xf) {
            lVar20 = param_1 + (ulong)uVar16 * 4;
            do {
              puVar19 = (uint *)(lVar20 + 0xe8);
              lVar20 = lVar20 + 4;
              if (uVar22 < *puVar19) {
                uVar12 = uVar16 - 1;
                uVar23 = 0x10 - uVar16;
                goto LAB_71007849e4;
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 != 0xf);
            uVar23 = 1;
            uVar12 = 0xe;
          }
          else {
            uVar23 = 1;
            uVar12 = 0xe;
            uVar16 = 0xf;
          }
LAB_71007849e4:
          *(uint *)(param_1 + 8) = iVar17 + (uVar16 + iVar2 >> 3);
          *(uint *)(param_1 + 0xc) = uVar16 + iVar2 & 7;
          uVar22 = (uVar22 - *(int *)(lVar18 + (ulong)uVar12 * 4 + 4) >> (ulong)(uVar23 & 0x1f)) +
                   *(int *)(lVar18 + (ulong)uVar16 * 4 + 0x44);
          if (*(uint *)(param_1 + 0xe4) <= uVar22) {
            uVar22 = 0;
          }
          uVar9 = *(ushort *)(lVar18 + (ulong)uVar22 * 2 + 0xc88);
          uVar12 = (uint)uVar9;
          uVar16 = uVar12;
          if (0xff < uVar9) {
LAB_7100784a34:
            piVar21 = (int *)(param_1 + 8);
            if (uVar12 < 0x10e) {
              if (uVar12 == 0x10d) goto LAB_7100784ae0;
              if (uVar12 == 0x100) {
                FUN_7100781c20(param_1,*(undefined4 *)(param_1 + 0xac),
                               *(undefined4 *)(param_1 + 0xb0));
                lVar13 = *(long *)(param_1 + 0x4d98);
                goto joined_r0x007100784fd8;
              }
              if (uVar12 < 0x105) {
                iVar17 = *(int *)(param_1 + 8);
                iVar2 = *(int *)(param_1 + 0xc);
                uVar16 = *(uint *)(param_1 + 0x2e2c);
                uVar23 = ((uint)*(byte *)(lVar13 + iVar17 + 2) |
                          (uint)*(byte *)(lVar13 + iVar17) << 0x10 |
                         (uint)*(byte *)(lVar13 + iVar17 + 1) << 8) >> (ulong)(8U - iVar2 & 0x1f) &
                         0xfffe;
                uVar22 = *(uint *)(param_1 + ((ulong)(*(int *)(param_1 + 0xa8) - uVar12) & 3) * 4 +
                                  0x98);
                if (uVar23 < puVar1[(ulong)uVar16 + 1]) {
                  uVar14 = (ulong)(uVar23 >> (ulong)(0x10 - uVar16 & 0x1f));
                  uVar9 = *(ushort *)((long)puVar1 + uVar14 * 2 + 0x488);
                  uVar16 = (uint)*(byte *)((long)puVar1 + uVar14 + 0x88) + iVar2;
                  *piVar21 = iVar17 + (uVar16 >> 3);
                  *(uint *)(param_1 + 0xc) = uVar16 & 7;
                }
                else {
                  uVar16 = uVar16 + 1;
                  if (uVar16 < 0xf) {
                    lVar18 = param_1 + (ulong)uVar16 * 4;
                    do {
                      puVar19 = (uint *)(lVar18 + 0x2dac);
                      lVar18 = lVar18 + 4;
                      if (uVar23 < *puVar19) {
                        uVar12 = uVar16 - 1;
                        uVar24 = 0x10 - uVar16;
                        goto LAB_7100784eb8;
                      }
                      uVar16 = uVar16 + 1;
                    } while (uVar16 != 0xf);
                    uVar24 = 1;
                    uVar12 = 0xe;
                  }
                  else {
                    uVar24 = 1;
                    uVar12 = 0xe;
                    uVar16 = 0xf;
                  }
LAB_7100784eb8:
                  *piVar21 = iVar17 + (uVar16 + iVar2 >> 3);
                  *(uint *)(param_1 + 0xc) = uVar16 + iVar2 & 7;
                  uVar16 = (uVar23 - puVar1[(ulong)uVar12 + 1] >> (ulong)(uVar24 & 0x1f)) +
                           puVar1[(ulong)uVar16 + 0x11];
                  if (*puVar1 <= uVar16) {
                    uVar16 = 0;
                  }
                  uVar9 = *(ushort *)((long)puVar1 + (ulong)uVar16 * 2 + 0xc88);
                }
                bVar6 = (&DAT_71009c5d20)[uVar9];
                iVar17 = (byte)(&DAT_71009c5e08)[uVar9] + 2;
                if (bVar6 != 0) {
                  iVar2 = *(int *)(param_1 + 8);
                  iVar3 = *(int *)(param_1 + 0xc);
                  bVar4 = *(byte *)(lVar13 + iVar2 + 2);
                  bVar5 = *(byte *)(lVar13 + iVar2 + 1);
                  bVar7 = *(byte *)(lVar13 + iVar2);
                  uVar16 = iVar3 + (uint)bVar6;
                  *piVar21 = iVar2 + (uVar16 >> 3);
                  *(uint *)(param_1 + 0xc) = uVar16 & 7;
                  iVar17 = iVar17 + ((((uint)bVar4 | (uint)bVar7 << 0x10 | (uint)bVar5 << 8) >>
                                      (ulong)(8U - iVar3 & 0x1f) & 0xffff) >>
                                    (ulong)(0x10 - bVar6 & 0x1f));
                }
                if (0x100 < uVar22) {
                  if (uVar22 < 0x2000) {
                    iVar17 = iVar17 + 1;
                  }
                  else {
                    if (0x3ffff < uVar22) {
                      iVar17 = iVar17 + 1;
                    }
                    iVar17 = iVar17 + 2;
                  }
                }
              }
              else {
                bVar6 = (&DAT_71009c5d40)[uVar12 - 0x105];
                uVar22 = (byte)(&DAT_71009c5e28)[uVar12 - 0x105] + 1;
                if (bVar6 != 0) {
                  iVar17 = *(int *)(param_1 + 8);
                  iVar2 = *(int *)(param_1 + 0xc);
                  bVar4 = *(byte *)(lVar13 + iVar17 + 2);
                  bVar5 = *(byte *)(lVar13 + iVar17 + 1);
                  bVar7 = *(byte *)(lVar13 + iVar17);
                  uVar16 = iVar2 + (uint)bVar6;
                  *piVar21 = iVar17 + (uVar16 >> 3);
                  *(uint *)(param_1 + 0xc) = uVar16 & 7;
                  uVar22 = uVar22 + ((((uint)bVar4 | (uint)bVar7 << 0x10 | (uint)bVar5 << 8) >>
                                      (ulong)(8U - iVar2 & 0x1f) & 0xffff) >>
                                    (ulong)(0x10 - bVar6 & 0x1f));
                }
                iVar17 = 2;
              }
            }
            else {
              bVar6 = (&DAT_71009c5d20)[uVar12 - 0x10e];
              iVar2 = *(int *)(param_1 + 8);
              uVar22 = *(uint *)(param_1 + 0xc);
              iVar17 = (byte)(&DAT_71009c5e08)[uVar12 - 0x10e] + 3;
              if (bVar6 != 0) {
                bVar7 = *(byte *)(lVar13 + iVar2);
                lVar18 = (long)iVar2;
                uVar16 = uVar22 + bVar6;
                bVar4 = *(byte *)(lVar13 + lVar18 + 2);
                iVar2 = iVar2 + (uVar16 >> 3);
                uVar12 = 8 - uVar22;
                uVar22 = uVar16 & 7;
                bVar5 = *(byte *)(lVar13 + lVar18 + 1);
                *piVar21 = iVar2;
                *(uint *)(param_1 + 0xc) = uVar22;
                iVar17 = iVar17 + ((((uint)bVar4 | (uint)bVar7 << 0x10 | (uint)bVar5 << 8) >>
                                    (ulong)(uVar12 & 0x1f) & 0xffff) >> (ulong)(0x10 - bVar6 & 0x1f)
                                  );
              }
              lVar18 = param_1 + 0xfd0;
              uVar16 = *(uint *)(param_1 + 0x1054);
              uVar12 = ((uint)*(byte *)(lVar13 + iVar2 + 2) |
                        (uint)*(byte *)(lVar13 + iVar2) << 0x10 |
                       (uint)*(byte *)(lVar13 + iVar2 + 1) << 8) >> (ulong)(8 - uVar22 & 0x1f) &
                       0xfffe;
              if (uVar12 < *(uint *)(lVar18 + (ulong)uVar16 * 4 + 4)) {
                uVar14 = (ulong)(uVar12 >> (ulong)(0x10 - uVar16 & 0x1f));
                uVar9 = *(ushort *)(lVar18 + uVar14 * 2 + 0x488);
                uVar22 = *(byte *)(lVar18 + uVar14 + 0x88) + uVar22;
                *piVar21 = iVar2 + (uVar22 >> 3);
                *(uint *)(param_1 + 0xc) = uVar22 & 7;
              }
              else {
                uVar16 = uVar16 + 1;
                if (uVar16 < 0xf) {
                  lVar20 = param_1 + (ulong)uVar16 * 4;
                  do {
                    puVar19 = (uint *)(lVar20 + 0xfd4);
                    lVar20 = lVar20 + 4;
                    if (uVar12 < *puVar19) {
                      uVar23 = uVar16 - 1;
                      uVar24 = 0x10 - uVar16;
                      goto LAB_7100784c70;
                    }
                    uVar16 = uVar16 + 1;
                  } while (uVar16 != 0xf);
                  uVar24 = 1;
                  uVar23 = 0xe;
                }
                else {
                  uVar24 = 1;
                  uVar23 = 0xe;
                  uVar16 = 0xf;
                }
LAB_7100784c70:
                *piVar21 = iVar2 + (uVar16 + uVar22 >> 3);
                *(uint *)(param_1 + 0xc) = uVar16 + uVar22 & 7;
                uVar22 = (uVar12 - *(int *)(lVar18 + (ulong)uVar23 * 4 + 4) >>
                         (ulong)(uVar24 & 0x1f)) + *(int *)(lVar18 + (ulong)uVar16 * 4 + 0x44);
                if (*(uint *)(param_1 + 0xfd0) <= uVar22) {
                  uVar22 = 0;
                }
                uVar9 = *(ushort *)(lVar18 + (ulong)uVar22 * 2 + 0xc88);
              }
              bVar6 = (&DAT_71009c5cf0)[uVar9];
              uVar22 = *(int *)(&DAT_71009c5d48 + (ulong)uVar9 * 4) + 1;
              if (bVar6 != 0) {
                iVar2 = *(int *)(param_1 + 8);
                iVar3 = *(int *)(param_1 + 0xc);
                bVar4 = *(byte *)(lVar13 + iVar2 + 2);
                bVar5 = *(byte *)(lVar13 + iVar2 + 1);
                bVar7 = *(byte *)(lVar13 + iVar2);
                uVar16 = iVar3 + (uint)bVar6;
                *piVar21 = iVar2 + (uVar16 >> 3);
                *(uint *)(param_1 + 0xc) = uVar16 & 7;
                uVar22 = uVar22 + ((((uint)bVar4 | (uint)bVar7 << 0x10 | (uint)bVar5 << 8) >>
                                    (ulong)(8U - iVar3 & 0x1f) & 0xffff) >>
                                  (ulong)(0x10 - bVar6 & 0x1f));
              }
              if (0x1fff < uVar22) {
                if (0x3ffff < uVar22) {
                  iVar17 = iVar17 + 1;
                }
                iVar17 = iVar17 + 1;
              }
            }
            FUN_7100781c20(param_1,iVar17,uVar22);
            goto LAB_7100784a78;
          }
        }
        lVar13 = *(long *)(param_1 + 0xb8);
        *(long *)(param_1 + 0xb8) = lVar13 + 1;
        *(char *)(*(long *)(param_1 + 0x4b88) + lVar13) = (char)uVar16;
        lVar13 = *(long *)(param_1 + 0x4d98) + -1;
        *(long *)(param_1 + 0x4d98) = lVar13;
        if (lVar13 < 0) break;
        goto LAB_71007847ac;
      }
      uVar14 = (ulong)*(uint *)(param_1 + 0x98a8);
      lVar13 = param_1 + uVar14 * 0xeec;
      uVar16 = *(uint *)(lVar13 + 0x5970);
      if (uVar22 < *(uint *)(param_1 + (uVar14 * 0x3bb + (ulong)uVar16 + 0x1638) * 4 + 0x10)) {
        uVar15 = (ulong)(uVar22 >> (ulong)(0x10 - uVar16 & 0x1f));
        uVar22 = (uint)*(byte *)(lVar13 + uVar15 + 0x5974) + iVar2;
        *(uint *)(param_1 + 8) = iVar17 + (uVar22 >> 3);
        *(uint *)(param_1 + 0xc) = uVar22 & 7;
        sVar8 = *(short *)(param_1 + (uVar15 + uVar14 * 0x776 + 0x2eb0) * 2 + 0x14);
      }
      else {
        uVar16 = uVar16 + 1;
        if (uVar16 < 0xf) {
          puVar19 = (uint *)(param_1 +
                            ((ulong)*(uint *)(param_1 + 0x98a8) * 0x3bb + 0x163c + (ulong)uVar16) *
                            4);
          do {
            uVar12 = *puVar19;
            puVar19 = puVar19 + 1;
            if (uVar22 < uVar12) {
              uVar12 = uVar16 - 1;
              uVar23 = 0x10 - uVar16;
              goto LAB_71007848a8;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 != 0xf);
          uVar23 = 1;
          uVar12 = 0xe;
        }
        else {
          uVar23 = 1;
          uVar12 = 0xe;
          uVar16 = 0xf;
        }
LAB_71007848a8:
        *(uint *)(param_1 + 8) = iVar17 + (uVar16 + iVar2 >> 3);
        *(uint *)(param_1 + 0xc) = uVar16 + iVar2 & 7;
        uVar22 = (uVar22 - *(int *)(param_1 + (uVar14 * 0x3bb + (ulong)uVar12 + 0x1638) * 4 + 0x10)
                 >> (ulong)(uVar23 & 0x1f)) +
                 *(int *)(param_1 + (uVar14 * 0x3bb + (ulong)uVar16 + 0x1648) * 4 + 0x10);
        if (*(uint *)(param_1 + uVar14 * 0xeec + 0x58ec) <= uVar22) {
          uVar22 = 0;
        }
        sVar8 = *(short *)(param_1 + ((ulong)uVar22 + uVar14 * 0x776 + 0x32b0) * 2 + 0x14);
      }
      if (sVar8 == 0x100) {
LAB_7100784ae0:
        cVar11 = FUN_7100783f90(param_1);
        if (cVar11 == '\0') {
          FUN_71007844a0(param_1);
          FUN_7100781c50(param_1);
          return;
        }
LAB_7100784a78:
        lVar13 = *(long *)(param_1 + 0x4d98);
      }
      else {
        uVar10 = FUN_7100781d70();
        lVar13 = *(long *)(param_1 + 0xb8);
        *(long *)(param_1 + 0xb8) = lVar13 + 1;
        *(undefined1 *)(*(long *)(param_1 + 0x4b88) + lVar13) = uVar10;
        iVar17 = *(int *)(param_1 + 0x98a8) + 1;
        if (iVar17 == *(int *)(param_1 + 0x98a4)) {
          iVar17 = 0;
        }
        *(int *)(param_1 + 0x98a8) = iVar17;
        lVar13 = *(long *)(param_1 + 0x4d98) + -1;
        *(long *)(param_1 + 0x4d98) = lVar13;
      }
joined_r0x007100784fd8:
    } while (-1 < lVar13);
  }
  FUN_71007844a0(param_1);
  FUN_7100781c50(param_1);
  return;
}



// ===== FUN_7100785070 @ 7100785070 (size=1228) =====

undefined8 FUN_7100785070(long param_1)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  ushort uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  undefined1 local_1b0 [24];
  byte local_198 [299];
  undefined1 auStack_6d [60];
  undefined1 auStack_31 [17];
  undefined1 auStack_20 [32];
  
  if ((*(int *)(param_1 + 8) < *(int *)(param_1 + 200) + -0x18) ||
     (cVar5 = FUN_71007820f0(), cVar5 != '\0')) {
    piVar2 = (int *)(param_1 + 8);
    FUN_7100790bd0(piVar2,-*(int *)(param_1 + 0xc) & 7);
    uVar6 = FUN_7100790bf0(piVar2);
    if ((uVar6 >> 0xf & 1) != 0) {
      *(undefined4 *)(param_1 + 0xe880) = 1;
      uVar9 = FUN_7100782c80(param_1 + 0x9a28,param_1,param_1 + 0xe6e8);
      return uVar9;
    }
    *(undefined4 *)(param_1 + 0xe880) = 0;
    *(undefined8 *)(param_1 + 0x9a20) = 0;
    if ((uVar6 >> 0xe & 1) == 0) {
      FUN_7100808340(param_1 + 0xe6ec,0,0x194);
    }
    uVar15 = 0;
    FUN_7100790bd0(piVar2,2);
    do {
      uVar8 = FUN_7100790bf0(piVar2);
      FUN_7100790bd0(piVar2,4);
      iVar14 = (int)uVar15;
      if (((uint)(uVar8 >> 0xc) & 0xff) == 0xf) {
        uVar10 = FUN_7100790bf0(piVar2);
        FUN_7100790bd0(piVar2,4);
        if ((uVar10 >> 0xc & 0xff) == 0) {
          local_1b0[uVar15] = (char)(uVar8 >> 0xc);
          uVar15 = (ulong)(iVar14 + 1);
        }
        else {
          local_1b0[uVar15] = 0;
          uVar6 = iVar14 + 2 + ((uint)(uVar10 >> 0xc) & 0xff);
          uVar15 = (ulong)uVar6;
          uVar7 = iVar14 + 1;
          do {
            uVar11 = uVar7 + 1;
            if (uVar7 == 0x14) goto LAB_7100785130;
            local_1b0[uVar7] = 0;
            uVar7 = uVar11;
          } while (uVar11 != uVar6);
        }
      }
      else {
        local_1b0[uVar15] = (char)((uVar8 & 0xffffffff) >> 0xc);
        uVar15 = (ulong)(iVar14 + 1);
      }
    } while ((int)uVar15 != 0x14);
LAB_7100785130:
    puVar3 = (uint *)(param_1 + 0x3c94);
    uVar15 = 0;
    FUN_7100783d80(param_1,local_1b0,puVar3,0x14);
    do {
      iVar14 = *(int *)(param_1 + 8);
      if (*(int *)(param_1 + 200) + -4 <= iVar14) {
        cVar5 = FUN_71007820f0(param_1);
        if (cVar5 == '\0') {
          return 0;
        }
        iVar14 = *(int *)(param_1 + 8);
      }
      lVar12 = *(long *)(param_1 + 0x18) + (long)iVar14;
      iVar16 = *(int *)(param_1 + 0xc);
      uVar6 = *(uint *)(param_1 + 0x3d18);
      uVar7 = ((uint)*(byte *)(lVar12 + 2) |
               (uint)*(byte *)(*(long *)(param_1 + 0x18) + (long)iVar14) << 0x10 |
              (uint)*(byte *)(lVar12 + 1) << 8) >> (ulong)(8U - iVar16 & 0x1f) & 0xfffe;
      if (uVar7 < puVar3[(ulong)uVar6 + 1]) {
        uVar8 = (ulong)(uVar7 >> (ulong)(0x10 - uVar6 & 0x1f));
        uVar4 = *(ushort *)((long)puVar3 + uVar8 * 2 + 0x488);
        uVar6 = (uint)*(byte *)((long)puVar3 + uVar8 + 0x88) + iVar16;
        *piVar2 = iVar14 + (uVar6 >> 3);
        *(uint *)(param_1 + 0xc) = uVar6 & 7;
      }
      else {
        uVar6 = uVar6 + 1;
        if (uVar6 < 0xf) {
          lVar12 = param_1 + (ulong)uVar6 * 4;
          do {
            puVar1 = (uint *)(lVar12 + 0x3c98);
            lVar12 = lVar12 + 4;
            if (uVar7 < *puVar1) {
              uVar11 = uVar6 - 1;
              uVar13 = 0x10 - uVar6;
              goto LAB_71007851fc;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 != 0xf);
          uVar13 = 1;
          uVar11 = 0xe;
        }
        else {
          uVar13 = 1;
          uVar11 = 0xe;
          uVar6 = 0xf;
        }
LAB_71007851fc:
        *piVar2 = iVar14 + (uVar6 + iVar16 >> 3);
        *(uint *)(param_1 + 0xc) = uVar6 + iVar16 & 7;
        uVar6 = (uVar7 - puVar3[(ulong)uVar11 + 1] >> (ulong)(uVar13 & 0x1f)) +
                puVar3[(ulong)uVar6 + 0x11];
        if (*puVar3 <= uVar6) {
          uVar6 = 0;
        }
        uVar4 = *(ushort *)((long)puVar3 + (ulong)uVar6 * 2 + 0xc88);
      }
      iVar14 = (int)uVar15;
      if (uVar4 < 0x10) {
        local_198[uVar15] = (char)uVar4 + *(char *)(param_1 + uVar15 + 0xe6ec) & 0xf;
        uVar15 = (ulong)(iVar14 + 1);
      }
      else if (uVar4 < 0x12) {
        if (uVar4 == 0x10) {
          uVar8 = FUN_7100790bf0(piVar2);
          iVar16 = ((uint)(uVar8 >> 0xd) & 0x7ffff) + 3;
          FUN_7100790bd0(piVar2);
        }
        else {
          uVar8 = FUN_7100790bf0(piVar2);
          iVar16 = ((uint)(uVar8 >> 9) & 0x7fffff) + 0xb;
          FUN_7100790bd0(piVar2,7);
        }
        if (iVar14 == 0) {
          return 0;
        }
        if (iVar14 == 0x194) break;
        uVar6 = iVar14 + 1;
        local_198[uVar15] = local_198[iVar14 - 1];
        uVar15 = (ulong)(uint)(iVar14 + iVar16);
        do {
          if (uVar6 == 0x194) {
            *(undefined1 *)(param_1 + 0xe885) = 1;
            if (*(int *)(param_1 + 200) < *(int *)(param_1 + 8)) {
              return 0;
            }
            goto LAB_7100785484;
          }
          local_198[uVar6] = local_198[uVar6 - 1];
          uVar6 = uVar6 + 1;
        } while (iVar14 + iVar16 != uVar6);
      }
      else {
        if (uVar4 == 0x12) {
          uVar8 = FUN_7100790bf0(piVar2);
          iVar16 = ((uint)(uVar8 >> 0xd) & 0x7ffff) + 3;
          FUN_7100790bd0(piVar2);
        }
        else {
          uVar8 = FUN_7100790bf0(piVar2);
          iVar16 = ((uint)(uVar8 >> 9) & 0x7fffff) + 0xb;
          FUN_7100790bd0(piVar2,7);
        }
        if (iVar14 == 0x194) break;
        local_198[uVar15] = 0;
        uVar15 = (ulong)(uint)(iVar14 + iVar16);
        uVar6 = iVar14 + 1;
        do {
          uVar7 = uVar6 + 1;
          if (uVar6 == 0x194) goto LAB_710078526c;
          local_198[uVar6] = 0;
          uVar6 = uVar7;
        } while (iVar14 + iVar16 != uVar7);
      }
    } while ((int)uVar15 != 0x194);
LAB_710078526c:
    *(undefined1 *)(param_1 + 0xe885) = 1;
    if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 200)) {
LAB_7100785484:
      FUN_7100783d80(param_1,local_198,param_1 + 0xe4,299);
      FUN_7100783d80(param_1,auStack_6d,param_1 + 0xfd0,0x3c);
      FUN_7100783d80(param_1,auStack_31,param_1 + 0x1ebc,0x11);
      FUN_7100783d80(param_1,auStack_20,param_1 + 0x2da8,0x1c);
      FUN_710080f900(param_1 + 0xe6ec,local_198,0x194);
      return 1;
    }
  }
  return 0;
}



// ===== FUN_7100785540 @ 7100785540 (size=124) =====

undefined8 FUN_7100785540(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  iVar2 = *(int *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x18) + (long)iVar2;
  iVar3 = *(int *)(param_1 + 0xc);
  uVar4 = ((uint)*(byte *)(lVar1 + 2) |
           (uint)*(byte *)(*(long *)(param_1 + 0x18) + (long)iVar2) << 0x10 |
          (uint)*(byte *)(lVar1 + 1) << 8) >> (ulong)(8U - iVar3 & 0x1f);
  if ((uVar4 >> 0xf & 1) != 0) {
    *(uint *)(param_1 + 8) = iVar2 + (iVar3 + 1U >> 3);
    *(uint *)(param_1 + 0xc) = iVar3 + 1U & 7;
    *(undefined1 *)(param_1 + 0xe885) = 0;
    uVar5 = FUN_7100785070();
    return uVar5;
  }
  *(uint *)(param_1 + 8) = iVar2 + (iVar3 + 2U >> 3);
  *(uint *)(param_1 + 0xc) = iVar3 + 2U & 7;
  *(byte *)(param_1 + 0xe885) = (byte)(((ulong)uVar4 ^ 0x4000) >> 0xe) & 1;
  return 0;
}



// ===== FUN_71007855c0 @ 71007855c0 (size=1052) =====

undefined8 FUN_71007855c0(long param_1,int *param_2,long param_3)

{
  uint *puVar1;
  uint *puVar2;
  ushort uVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  undefined1 local_1c8 [24];
  undefined1 local_1b0 [306];
  undefined1 auStack_7e [64];
  undefined1 auStack_3e [16];
  undefined1 auStack_2e [46];
  
  uVar13 = 0;
  do {
    uVar6 = FUN_7100790bf0(param_2);
    FUN_7100790bd0(param_2,4);
    iVar12 = (int)uVar13;
    if (((uint)(uVar6 >> 0xc) & 0xff) == 0xf) {
      uVar7 = FUN_7100790bf0(param_2);
      FUN_7100790bd0(param_2,4);
      if ((uVar7 >> 0xc & 0xff) == 0) {
        local_1c8[uVar13] = (char)(uVar6 >> 0xc);
        uVar13 = (ulong)(iVar12 + 1);
      }
      else {
        local_1c8[uVar13] = 0;
        uVar10 = iVar12 + 2 + ((uint)(uVar7 >> 0xc) & 0xff);
        uVar13 = (ulong)uVar10;
        uVar5 = iVar12 + 1;
        do {
          uVar8 = uVar5 + 1;
          if (uVar5 == 0x14) goto LAB_710078562c;
          local_1c8[uVar5] = 0;
          uVar5 = uVar8;
        } while (uVar8 != uVar10);
      }
    }
    else {
      local_1c8[uVar13] = (char)((uVar6 & 0xffffffff) >> 0xc);
      uVar13 = (ulong)(iVar12 + 1);
    }
  } while ((int)uVar13 != 0x14);
LAB_710078562c:
  puVar2 = (uint *)(param_3 + 0x3bb0);
  uVar13 = 0;
  FUN_7100783d80(param_1,local_1c8,puVar2,0x14);
  do {
    iVar12 = *param_2;
    if (((char)param_2[2] == '\0') && (*(int *)(param_1 + 200) + -4 <= iVar12)) {
      cVar4 = FUN_7100782380(param_1);
      if (cVar4 == '\0') {
        return 0;
      }
      iVar12 = *param_2;
    }
    lVar9 = *(long *)(param_2 + 4) + (long)iVar12;
    iVar14 = param_2[1];
    uVar10 = *(uint *)(param_3 + 0x3c34);
    uVar5 = ((uint)*(byte *)(lVar9 + 2) |
             (uint)*(byte *)(*(long *)(param_2 + 4) + (long)iVar12) << 0x10 |
            (uint)*(byte *)(lVar9 + 1) << 8) >> (ulong)(8U - iVar14 & 0x1f) & 0xfffe;
    if (uVar5 < puVar2[(ulong)uVar10 + 1]) {
      uVar6 = (ulong)(uVar5 >> (ulong)(0x10 - uVar10 & 0x1f));
      uVar3 = *(ushort *)((long)puVar2 + uVar6 * 2 + 0x488);
      uVar10 = (uint)*(byte *)((long)puVar2 + uVar6 + 0x88) + iVar14;
      *param_2 = iVar12 + (uVar10 >> 3);
      param_2[1] = uVar10 & 7;
    }
    else {
      uVar10 = uVar10 + 1;
      if (uVar10 < 0xf) {
        lVar9 = param_3 + (ulong)uVar10 * 4;
        do {
          puVar1 = (uint *)(lVar9 + 0x3bb4);
          lVar9 = lVar9 + 4;
          if (uVar5 < *puVar1) {
            uVar8 = uVar10 - 1;
            uVar11 = 0x10 - uVar10;
            goto LAB_71007856e8;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 != 0xf);
        uVar11 = 1;
        uVar8 = 0xe;
      }
      else {
        uVar11 = 1;
        uVar8 = 0xe;
        uVar10 = 0xf;
      }
LAB_71007856e8:
      *param_2 = iVar12 + (uVar10 + iVar14 >> 3);
      param_2[1] = uVar10 + iVar14 & 7;
      uVar10 = (uVar5 - puVar2[(ulong)uVar8 + 1] >> (ulong)(uVar11 & 0x1f)) +
               puVar2[(ulong)uVar10 + 0x11];
      if (*puVar2 <= uVar10) {
        uVar10 = 0;
      }
      uVar3 = *(ushort *)((long)puVar2 + (ulong)uVar10 * 2 + 0xc88);
    }
    iVar12 = (int)uVar13;
    if (uVar3 < 0x10) {
      local_1b0[uVar13] = (char)uVar3;
      uVar13 = (ulong)(iVar12 + 1);
    }
    else if (uVar3 < 0x12) {
      if (uVar3 == 0x10) {
        uVar6 = FUN_7100790bf0(param_2);
        iVar14 = ((uint)(uVar6 >> 0xd) & 0x7ffff) + 3;
        FUN_7100790bd0(param_2);
      }
      else {
        uVar6 = FUN_7100790bf0(param_2);
        iVar14 = ((uint)(uVar6 >> 9) & 0x7fffff) + 0xb;
        FUN_7100790bd0(param_2,7);
      }
      if (iVar12 == 0) {
        return 0;
      }
      if (iVar12 == 0x1ae) break;
      uVar10 = iVar12 + 1;
      local_1b0[uVar13] = local_1b0[iVar12 - 1];
      uVar13 = (ulong)(uint)(iVar12 + iVar14);
      do {
        if (uVar10 == 0x1ae) {
          *(undefined1 *)(param_1 + 0xe886) = 1;
          cVar4 = (char)param_2[2];
          goto joined_r0x007100785864;
        }
        local_1b0[uVar10] = local_1b0[uVar10 - 1];
        uVar10 = uVar10 + 1;
      } while (uVar10 != iVar12 + iVar14);
    }
    else {
      if (uVar3 == 0x12) {
        uVar6 = FUN_7100790bf0(param_2);
        iVar14 = ((uint)(uVar6 >> 0xd) & 0x7ffff) + 3;
        FUN_7100790bd0(param_2);
      }
      else {
        uVar6 = FUN_7100790bf0(param_2);
        iVar14 = ((uint)(uVar6 >> 9) & 0x7fffff) + 0xb;
        FUN_7100790bd0(param_2,7);
      }
      if (iVar12 == 0x1ae) break;
      local_1b0[uVar13] = 0;
      uVar13 = (ulong)(uint)(iVar12 + iVar14);
      uVar10 = iVar12 + 1;
      do {
        uVar5 = uVar10 + 1;
        if (uVar10 == 0x1ae) goto LAB_7100785744;
        local_1b0[uVar10] = 0;
        uVar10 = uVar5;
      } while (uVar5 != iVar12 + iVar14);
    }
  } while ((int)uVar13 != 0x1ae);
LAB_7100785744:
  *(undefined1 *)(param_1 + 0xe886) = 1;
  cVar4 = (char)param_2[2];
joined_r0x007100785864:
  if ((cVar4 == '\0') && (*(int *)(param_1 + 200) < *param_2)) {
    return 0;
  }
  FUN_7100783d80(param_1,local_1b0,param_3,0x132);
  FUN_7100783d80(param_1,auStack_7e,param_3 + 0xeec,0x40);
  FUN_7100783d80(param_1,auStack_3e,param_3 + 0x1dd8,0x10);
  FUN_7100783d80(param_1,auStack_2e,param_3 + 0x2cc4,0x2c);
  return 1;
}



// ===== FUN_71007859e0 @ 71007859e0 (size=112) =====

ulong FUN_71007859e0(long param_1,int *param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  ulong uVar2;
  
  if (*(char *)(param_3 + 0x11) == '\0') {
    return 1;
  }
  if ((char)param_2[2] == '\0') {
    if (*(int *)(param_1 + 200) + -0x18 <= *param_2) {
      bVar1 = FUN_7100782380();
      if (bVar1 == 0) {
        return (ulong)bVar1;
      }
    }
  }
  uVar2 = FUN_71007855c0(param_1,param_2,param_4);
  return uVar2;
}



// ===== FUN_7100785a50 @ 7100785a50 (size=80) =====

void FUN_7100785a50(long *param_1)

{
  if (*param_1 == 0) {
    return;
  }
  if ((char)param_1[4] == '\0') {
    FUN_710081c200();
    return;
  }
  FUN_710077e260(*param_1,param_1[2]);
  FUN_710081c200(*param_1);
  return;
}



// ===== FUN_7100785aa0 @ 7100785aa0 (size=296) =====

void FUN_7100785aa0(long *param_1,long param_2)

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
    lVar2 = FUN_71008141e0(*param_1,uVar1 << 3);
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
      FUN_710080f900(lVar2,lVar5,lVar6 << 3);
      FUN_710077e260(lVar5,lVar6 << 3);
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



// ===== FUN_7100785c30 @ 7100785c30 (size=328) =====

void FUN_7100785c30(undefined8 *param_1,undefined8 param_2)

{
  FUN_7100790b60(param_1 + 1,1);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_7100783060(param_1 + 0x972);
  FUN_710077fc50(param_1 + 0x1345);
  FUN_71007917b0(param_1 + 0x1d11);
  FUN_7100790b60(param_1 + 0x1d16,1);
  param_1[0x1d19] = 0;
  param_1[0x1d1a] = 0;
  param_1[0x1d1b] = 0;
  param_1[0x1d1c] = 0;
  *(undefined1 *)(param_1 + 0x1d1d) = 0;
  param_1[0x1d1e] = 0;
  param_1[0x1d1f] = 0;
  param_1[0x1d20] = 0;
  param_1[0x1d21] = 0;
  *(undefined1 *)(param_1 + 0x1d22) = 0;
  param_1[0x1d23] = 0;
  param_1[0x1d24] = 0;
  param_1[0x1d25] = 0;
  param_1[0x1d26] = 0;
  *(undefined1 *)(param_1 + 0x1d27) = 0;
  *param_1 = param_2;
  param_1[0x971] = 0;
  *(undefined1 *)(param_1 + 0x9b2) = 0;
  *(undefined2 *)(param_1 + 0x9b4) = 0;
  *(undefined1 *)((long)param_1 + 0x4da2) = 0;
  param_1[0x1d29] = 0;
  param_1[0x1d2a] = 0;
  FUN_7100783af0(param_1,0);
  FUN_7100780e60(param_1,0);
  FUN_7100780f30(param_1);
  return;
}



// ===== FUN_7100785e50 @ 7100785e50 (size=292) =====

void FUN_7100785e50(long *param_1,long param_2)

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
    lVar2 = FUN_71008141e0(*param_1,uVar1);
    if (lVar2 == 0) {
      FUN_7100778a60(&DAT_7100d1bd98);
    }
  }
  else {
    lVar2 = FUN_710081c1c0(uVar1);
    if (lVar2 == 0) {
      FUN_7100778a60(&DAT_7100d1bd98);
    }
    lVar5 = *param_1;
    if (lVar5 != 0) {
      lVar6 = param_1[2];
      FUN_710080f900(lVar2,lVar5,lVar6);
      FUN_710077e260(lVar5,lVar6);
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



// ===== FUN_7100785f80 @ 7100785f80 (size=496) =====

byte * FUN_7100785f80(long param_1,byte *param_2,uint param_3,byte *param_4)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  byte bVar10;
  
  bVar3 = *param_4;
  if (bVar3 < 3) {
    if (bVar3 == 0) {
      uVar9 = (ulong)param_3;
      bVar3 = param_4[0xc];
      if (*(ulong *)(param_1 + 0x58) < uVar9) {
        FUN_7100785e50(param_1 + 0x48,uVar9 - *(long *)(param_1 + 0x50));
      }
      else {
        *(ulong *)(param_1 + 0x50) = uVar9;
      }
      uVar7 = 0;
      uVar9 = 0;
      pbVar4 = *(byte **)(param_1 + 0x48);
      if (bVar3 != 0) {
        do {
          bVar10 = 0;
          for (uVar1 = uVar7; uVar1 < param_3; uVar1 = uVar1 + bVar3) {
            pbVar5 = param_2 + uVar9;
            uVar9 = (ulong)((int)uVar9 + 1);
            bVar10 = bVar10 - *pbVar5;
            pbVar4[uVar1] = bVar10;
          }
          uVar7 = uVar7 + 1;
        } while (bVar3 != uVar7);
        return pbVar4;
      }
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x4da8);
      pbVar4 = param_2;
      iVar2 = 0;
      while (iVar8 = iVar2, pbVar5 = pbVar4, pbVar4 = param_2, iVar8 + 4U < param_3) {
        pbVar4 = pbVar5 + 1;
        iVar2 = iVar8 + 1;
        if (*pbVar5 == 0xe8 || (bVar3 == 2) + 0xe8 == (uint)*pbVar5) {
          uVar7 = (int)uVar6 + iVar8 + 1 & 0xffffff;
          iVar2 = (uint)pbVar5[1] + (uint)pbVar5[2] * 0x100 + (uint)pbVar5[3] * 0x10000 +
                  (uint)pbVar5[4] * 0x1000000;
          if (iVar2 < 0) {
            if (-1 < (int)(uVar7 + iVar2)) {
              *(int *)pbVar4 = iVar2 + 0x1000000;
            }
          }
          else if (iVar2 + -0x1000000 < 0) {
            *(uint *)pbVar4 = iVar2 - uVar7;
          }
          pbVar4 = pbVar5 + 5;
          iVar2 = iVar8 + 5;
        }
      }
    }
  }
  else {
    pbVar4 = (byte *)0x0;
    if ((bVar3 == 3) && (uVar6 = *(undefined8 *)(param_1 + 0x4da8), pbVar4 = param_2, 3 < param_3))
    {
      pbVar5 = param_2;
      do {
        if (pbVar5[3] == 0xeb) {
          iVar2 = ((uint)*pbVar5 - ((uint)(((int)uVar6 - (int)param_2) + (int)pbVar5) >> 2)) +
                  ((uint)pbVar5[1] + (uint)pbVar5[2] * 0x100) * 0x100;
          *pbVar5 = (byte)iVar2;
          pbVar5[1] = (byte)((uint)iVar2 >> 8);
          pbVar5[2] = (byte)((uint)iVar2 >> 0x10);
        }
        pbVar5 = pbVar5 + 4;
      } while (pbVar5 != param_2 + (ulong)((param_3 - 4 >> 2) + 1) * 4);
    }
  }
  return pbVar4;
}



// ===== FUN_7100786170 @ 7100786170 (size=296) =====

void FUN_7100786170(long *param_1,long param_2)

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



// ===== FUN_71007862a0 @ 71007862a0 (size=1248) =====

undefined8 FUN_71007862a0(long param_1,uint param_2,undefined8 param_3,uint param_4)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 extraout_var;
  uint *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long local_28 [4];
  char local_8;
  
  lVar2 = param_1 + 0xe8b0;
  uVar5 = param_4;
  if (0x8000 < param_4) {
    uVar5 = 0x8000;
  }
  *(undefined8 *)(param_1 + 0xe8b0) = 0;
  FUN_710080f900(*(undefined8 *)(param_1 + 0xe8c0),param_3,uVar5);
  FUN_71007917d0(param_1 + 0xe888);
  if ((param_2 >> 7 & 1) == 0) {
    uVar5 = *(uint *)(param_1 + 0xe940);
LAB_710078630c:
    uVar8 = (ulong)uVar5;
    uVar14 = *(ulong *)(param_1 + 0xe8d0);
    if (uVar14 < uVar8) {
      return 0;
    }
    if (*(ulong *)(param_1 + 0xe920) < uVar8) {
      return 0;
    }
    *(uint *)(param_1 + 0xe940) = uVar5;
    puVar6 = (uint *)FUN_71007af5c0(0x40);
    puVar6[4] = 0;
    puVar6[0xe] = 0;
    if (uVar8 != uVar14) goto LAB_710078638c;
    if (0x2000 < uVar5) {
      thunk_FUN_710081c200(puVar6,0x40);
      return 0;
    }
LAB_710078654c:
    FUN_7100785aa0(param_1 + 0xe8c8,1);
    lVar15 = FUN_71007af5c0(0x40);
    lVar12 = *(long *)(param_1 + 0xe8c8);
    lVar11 = *(long *)(param_1 + 0xe8d0);
    *(undefined4 *)(lVar15 + 0x10) = 0;
    *(undefined4 *)(lVar15 + 0x38) = 0;
    *(long *)(lVar12 + (lVar11 + -1) * 8) = lVar15;
    puVar6[3] = (int)lVar11 - 1;
    FUN_7100786170(param_1 + 0xe918,1);
    *(undefined4 *)(*(long *)(param_1 + 0xe918) + (*(long *)(param_1 + 0xe920) + -1) * 4) = 0;
  }
  else {
    iVar4 = FUN_71007918e0(lVar2);
    if (iVar4 != 0) {
      uVar5 = iVar4 - 1;
      goto LAB_710078630c;
    }
    uVar8 = 0;
    FUN_71007821d0(param_1,0);
    uVar14 = *(ulong *)(param_1 + 0xe8d0);
    *(undefined4 *)(param_1 + 0xe940) = 0;
    puVar6 = (uint *)FUN_71007af5c0(0x40);
    puVar6[4] = 0;
    puVar6[0xe] = 0;
    if (uVar14 == 0) goto LAB_710078654c;
    uVar5 = 0;
LAB_710078638c:
    lVar15 = *(long *)(*(long *)(param_1 + 0xe8c8) + uVar8 * 8);
    puVar6[3] = uVar5;
  }
  uVar13 = *(ulong *)(param_1 + 0xe8f8);
  if (uVar13 != 0) {
    lVar12 = *(long *)(param_1 + 0xe8f0);
    uVar7 = 0;
    uVar9 = 0;
    do {
      lVar11 = *(long *)(lVar12 + uVar7 * 8);
      uVar5 = (uint)uVar9;
      *(long *)(lVar12 + (ulong)((int)uVar7 - uVar5) * 8) = lVar11;
      if (lVar11 == 0) {
        uVar5 = uVar5 + 1;
      }
      uVar9 = (ulong)uVar5;
      if (uVar5 != 0) {
        *(undefined8 *)(lVar12 + uVar7 * 8) = 0;
      }
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (uVar7 < uVar13);
    if (uVar5 != 0) goto LAB_7100786408;
    if (0x2000 < uVar13) {
      thunk_FUN_710081c200(puVar6,0x40);
      return 0;
    }
  }
  FUN_7100785aa0(param_1 + 0xe8f0,1);
  uVar9 = 1;
  lVar12 = *(long *)(param_1 + 0xe8f0);
  uVar13 = *(ulong *)(param_1 + 0xe8f8);
LAB_7100786408:
  *(uint **)(lVar12 + (uVar13 - uVar9) * 8) = puVar6;
  uVar3 = FUN_71007918e0(lVar2);
  lVar12 = *(long *)(param_1 + 0xb8);
  uVar5 = uVar3 + 0x102;
  if ((param_2 & 0x40) == 0) {
    uVar5 = uVar3;
  }
  uVar3 = param_2 & 0x20;
  *puVar6 = uVar5 + (int)lVar12 & (uint)*(undefined8 *)(param_1 + 0xe950);
  if ((param_2 >> 5 & 1) == 0) {
    if (uVar8 < *(ulong *)(param_1 + 0xe920)) {
      uVar3 = *(uint *)(*(long *)(param_1 + 0xe918) + uVar8 * 4);
    }
    puVar6[1] = uVar3;
  }
  else {
    uVar3 = FUN_71007918e0(lVar2);
    lVar11 = *(long *)(param_1 + 0xe918);
    puVar6[1] = uVar3;
    lVar12 = *(long *)(param_1 + 0xb8);
    *(uint *)(lVar11 + uVar8 * 4) = uVar3;
  }
  bVar10 = false;
  if (*(long *)(param_1 + 0xc0) != lVar12) {
    bVar10 = (*(long *)(param_1 + 0xc0) - lVar12 & *(ulong *)(param_1 + 0xe950)) <= (ulong)uVar5;
  }
  puVar1 = puVar6 + 5;
  *(bool *)(puVar6 + 2) = bVar10;
  puVar1[0] = 0;
  puVar1[1] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[9] = puVar6[1];
  if ((param_2 >> 4 & 1) != 0) {
    lVar12 = 0;
    uVar13 = FUN_7100790bf0(lVar2);
    FUN_7100790bd0(lVar2,7);
    do {
      if ((1 << (ulong)((uint)lVar12 & 0x1f) & (uint)((uVar13 & 0xffffffff) >> 9)) != 0) {
        uVar5 = FUN_71007918e0(lVar2);
        puVar1[lVar12] = uVar5;
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 != 7);
  }
  if (uVar8 == uVar14) {
    uVar5 = FUN_71007918e0(lVar2);
    if ((0xfffe < uVar5 - 1) || (param_4 < uVar5 + *(int *)(param_1 + 0xe8b0))) {
      return 0;
    }
    local_28[0] = 0;
    local_28[1] = 0;
    lVar12 = 0;
    local_28[2] = 0;
    local_28[3] = 0;
    local_8 = '\0';
    FUN_7100785e50(local_28,uVar5);
    do {
      lVar11 = local_28[0];
      if (0x7fff < *(int *)(param_1 + 0xe8b0) + 3U) {
        if (local_28[0] == 0) {
          return 0;
        }
        if (local_8 != '\0') {
          FUN_710077e260(local_28[0],local_28[2]);
        }
        FUN_710081c200(lVar11);
        return 0;
      }
      FUN_7100790bf0(lVar2);
      lVar11 = local_28[0];
      *(undefined1 *)(local_28[0] + lVar12) = extraout_var;
      FUN_7100790bd0(lVar2,8);
      lVar12 = lVar12 + 1;
    } while ((uint)lVar12 < uVar5);
    FUN_7100791810(param_1 + 0xe888,lVar11,uVar5,lVar15 + 0x10);
    if (lVar11 != 0) {
      if (local_8 != '\0') {
        FUN_710077e260(lVar11,local_28[2]);
      }
      FUN_710081c200(lVar11);
    }
  }
  puVar6[4] = *(uint *)(lVar15 + 0x10);
  return 1;
}



// ===== FUN_71007867a0 @ 71007867a0 (size=584) =====

undefined1 FUN_71007867a0(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  long lVar9;
  char cVar10;
  undefined1 uVar11;
  int iVar12;
  long lVar13;
  long local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  char local_8;
  
  iVar4 = *(int *)(param_1 + 8);
  lVar13 = *(long *)(param_1 + 0x18);
  uVar3 = *(int *)(param_1 + 0xc) + 8;
  iVar12 = iVar4 + (uVar3 >> 3);
  uVar3 = uVar3 & 7;
  uVar8 = ((uint)*(byte *)(lVar13 + iVar4 + 2) | (uint)*(byte *)(lVar13 + iVar4) << 0x10 |
          (uint)*(byte *)(lVar13 + iVar4 + 1) << 8) >> (ulong)(8U - *(int *)(param_1 + 0xc) & 0x1f);
  *(int *)(param_1 + 8) = iVar12;
  uVar2 = uVar8 >> 8 & 7;
  *(uint *)(param_1 + 0xc) = uVar3;
  if (uVar2 == 6) {
    bVar7 = *(byte *)(lVar13 + iVar12);
    bVar5 = *(byte *)(lVar13 + iVar12 + 2);
    bVar6 = *(byte *)(lVar13 + iVar12 + 1);
    *(int *)(param_1 + 8) = iVar12 + 1;
    uVar2 = ((((uint)bVar5 | (uint)bVar7 << 0x10 | (uint)bVar6 << 8) >> (ulong)(8 - uVar3 & 0x1f))
             >> 8 & 0xff) + 7;
  }
  else {
    uVar2 = uVar2 + 1;
    if (uVar2 == 8) {
      bVar7 = *(byte *)(lVar13 + iVar12);
      bVar5 = *(byte *)(lVar13 + iVar12 + 2);
      bVar6 = *(byte *)(lVar13 + iVar12 + 1);
      *(int *)(param_1 + 8) = iVar12 + 2;
      *(uint *)(param_1 + 0xc) = uVar3;
      uVar2 = ((uint)bVar5 | (uint)bVar7 << 0x10 | (uint)bVar6 << 8) >> (ulong)(8 - uVar3 & 0x1f) &
              0xffff;
      if (uVar2 == 0) {
        return 0;
      }
    }
  }
  lVar13 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  local_8 = '\0';
  FUN_7100785e50(&local_28,uVar2);
  iVar12 = *(int *)(param_1 + 8);
  do {
    if (*(int *)(param_1 + 200) + -1 <= iVar12) {
      cVar10 = FUN_71007820f0(param_1);
      if ((cVar10 == '\0') && (uVar11 = 0, lVar9 = local_28, (uint)lVar13 < uVar2 - 1))
      goto joined_r0x0071007869b4;
      iVar12 = *(int *)(param_1 + 8);
    }
    lVar9 = local_28;
    lVar1 = *(long *)(param_1 + 0x18) + (long)iVar12;
    *(char *)(local_28 + lVar13) =
         (char)((((uint)*(byte *)(lVar1 + 2) |
                  (uint)*(byte *)(*(long *)(param_1 + 0x18) + (long)iVar12) << 0x10 |
                 (uint)*(byte *)(lVar1 + 1) << 8) >> (ulong)(8U - *(int *)(param_1 + 0xc) & 0x1f))
               >> 8);
    lVar13 = lVar13 + 1;
    uVar3 = *(int *)(param_1 + 0xc) + 8;
    iVar12 = *(int *)(param_1 + 8) + (uVar3 >> 3);
    *(int *)(param_1 + 8) = iVar12;
    *(uint *)(param_1 + 0xc) = uVar3 & 7;
  } while ((uint)lVar13 < uVar2);
  uVar11 = FUN_71007862a0(param_1,uVar8 >> 8 & 0xff,local_28,uVar2);
joined_r0x0071007869b4:
  if (lVar9 == 0) {
    return uVar11;
  }
  if (local_8 != '\0') {
    FUN_710077e260(lVar9,local_18);
  }
  FUN_710081c200(lVar9);
  return uVar11;
}



// ===== FUN_7100786a00 @ 7100786a00 (size=456) =====

undefined1 FUN_7100786a00(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  long local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  char local_8;
  
  lVar1 = param_1 + 0x9a28;
  uVar4 = FUN_7100782640(lVar1);
  if (uVar4 == 0xffffffff) {
    FUN_7100780ca0(lVar1);
    *(undefined4 *)(param_1 + 0xe880) = 0;
    return 0;
  }
  uVar8 = (uVar4 & 7) + 1;
  if ((uVar4 & 7) == 6) {
    iVar5 = FUN_7100782640(lVar1);
    uVar8 = iVar5 + 7;
  }
  else {
    if (uVar8 != 8) goto LAB_7100786a4c;
    iVar6 = FUN_7100782640(lVar1);
    if (iVar6 == -1) goto LAB_7100786bb0;
    iVar5 = FUN_7100782640(lVar1);
    uVar8 = iVar5 + iVar6 * 0x100;
  }
  if (iVar5 == -1) {
LAB_7100786bb0:
    FUN_7100780ca0(lVar1);
    *(undefined4 *)(param_1 + 0xe880) = 0;
    return 0;
  }
  if (uVar8 == 0) {
    return 0;
  }
LAB_7100786a4c:
  lVar7 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  local_8 = '\0';
  FUN_7100785e50(&local_28,uVar8);
  do {
    iVar5 = FUN_7100782640(lVar1);
    lVar2 = local_28;
    if (iVar5 == -1) {
      FUN_7100780ca0(lVar1);
      uVar3 = 0;
      *(undefined4 *)(param_1 + 0xe880) = 0;
      lVar2 = local_28;
      goto joined_r0x007100786ab0;
    }
    *(char *)(local_28 + lVar7) = (char)iVar5;
    lVar7 = lVar7 + 1;
  } while ((uint)lVar7 < uVar8);
  uVar3 = FUN_71007862a0(param_1,uVar4,local_28,uVar8);
joined_r0x007100786ab0:
  if (lVar2 == 0) {
    return uVar3;
  }
  if (local_8 != '\0') {
    FUN_710077e260(lVar2,local_18);
  }
  FUN_710081c200(lVar2);
  return uVar3;
}



// ===== FUN_7100786be0 @ 7100786be0 (size=3136) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100786be0(long param_1,char param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  int iVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  int iVar23;
  uint uVar24;
  uint *puVar25;
  uint uVar26;
  int iVar27;
  int *piVar28;
  ulong uVar29;
  
  if (_DAT_7100d1bdec == 0) {
    iVar13 = 0;
    uVar29 = 0;
    iVar27 = 4;
    iVar16 = 0;
    while( true ) {
      if (0 < iVar27) {
        iVar10 = 1 << (ulong)((uint)uVar29 & 0x1f);
        lVar19 = 0;
        lVar18 = (long)iVar13;
        iVar23 = iVar16;
        do {
          *(int *)((long)iVar13 * 4 + 0x7100d1bde8 + lVar19 * 4) = iVar23;
          lVar19 = lVar19 + 1;
          iVar23 = iVar23 + iVar10;
        } while ((int)lVar19 < iVar27);
        iVar13 = iVar13 + iVar27;
        iVar16 = (iVar27 + -1 << (ulong)((uint)uVar29 & 0x1f)) + iVar10 + iVar16;
        FUN_7100808340(lVar18 + 0x7100d1bda8,uVar29 & 0xffffffff,iVar27);
      }
      uVar29 = uVar29 + 1;
      if (uVar29 == 0x13) break;
      iVar27 = *(int *)(&UNK_71009c5e30 + uVar29 * 4);
    }
  }
  *(undefined1 *)(param_1 + 0x4db0) = 1;
  if (*(char *)(param_1 + 0x4da0) == '\0') {
    FUN_7100783af0(param_1,param_2);
    cVar12 = FUN_71007820f0(param_1);
    if ((cVar12 == '\0') ||
       (((param_2 == '\0' || (*(char *)(param_1 + 0xe885) == '\0')) &&
        (cVar12 = FUN_7100785070(param_1), cVar12 == '\0')))) {
      return;
    }
  }
  uVar29 = *(ulong *)(param_1 + 0xb8);
  uVar20 = *(ulong *)(param_1 + 0xe950);
  puVar1 = (uint *)(param_1 + 0x2da8);
LAB_7100786ce0:
  uVar29 = uVar29 & uVar20;
  *(ulong *)(param_1 + 0xb8) = uVar29;
  if (*(int *)(param_1 + 0xcc) < *(int *)(param_1 + 8)) goto LAB_7100786f28;
  do {
    if ((*(ulong *)(param_1 + 0xc0) - uVar29 & uVar20) < 0x104 &&
        *(ulong *)(param_1 + 0xc0) != uVar29) goto LAB_7100786f58;
LAB_7100786d10:
    if (*(int *)(param_1 + 0xe880) == 1) {
      lVar19 = param_1 + 0x9a28;
      iVar13 = FUN_7100782640(lVar19);
      if (iVar13 == -1) goto LAB_710078721c;
      if (*(int *)(param_1 + 0xe6e8) == iVar13) {
        iVar16 = FUN_7100782640(lVar19);
        if (iVar16 == -1) goto LAB_710078721c;
        if (iVar16 == 0) {
          cVar12 = FUN_7100785070(param_1);
          if (cVar12 == '\0') {
            FUN_71007834c0(param_1);
            return;
          }
          goto LAB_71007872f4;
        }
        if (iVar16 == 2) goto LAB_7100787228;
        if (iVar16 == 3) {
          cVar12 = FUN_7100786a00(param_1);
joined_r0x00710078771c:
          if (cVar12 != '\0') goto LAB_71007872f4;
          goto LAB_7100787228;
        }
        if (iVar16 == 4) {
          iVar13 = 0;
          uVar17 = FUN_7100782640(lVar19);
          iVar16 = 0;
          goto joined_r0x007100787748;
        }
        if (iVar16 != 5) goto LAB_7100786fc0;
        iVar13 = FUN_7100782640(lVar19);
        if (iVar13 == -1) goto LAB_710078721c;
        FUN_7100780ce0(param_1,iVar13 + 4,1);
        uVar29 = *(ulong *)(param_1 + 0xb8);
        uVar20 = *(ulong *)(param_1 + 0xe950);
      }
      else {
LAB_7100786fc0:
        lVar19 = *(long *)(param_1 + 0xb8);
        *(long *)(param_1 + 0xb8) = lVar19 + 1;
        *(char *)(*(long *)(param_1 + 0x4b88) + lVar19) = (char)iVar13;
        uVar29 = *(ulong *)(param_1 + 0xb8);
        uVar20 = *(ulong *)(param_1 + 0xe950);
      }
      goto LAB_7100786ce0;
    }
    iVar13 = *(int *)(param_1 + 8);
    iVar16 = *(int *)(param_1 + 0xc);
    lVar19 = param_1 + 0xe4;
    lVar18 = *(long *)(param_1 + 0x18);
    uVar17 = *(uint *)(param_1 + 0x168);
    uVar14 = ((uint)*(byte *)(lVar18 + iVar13 + 2) | (uint)*(byte *)(lVar18 + iVar13) << 0x10 |
             (uint)*(byte *)(lVar18 + iVar13 + 1) << 8) >> (ulong)(8U - iVar16 & 0x1f) & 0xfffe;
    if (uVar14 < *(uint *)(lVar19 + (ulong)uVar17 * 4 + 4)) {
      uVar29 = (ulong)(uVar14 >> (ulong)(0x10 - uVar17 & 0x1f));
      uVar9 = *(ushort *)(lVar19 + uVar29 * 2 + 0x488);
      uVar14 = (uint)uVar9;
      uVar17 = (uint)*(byte *)(lVar19 + uVar29 + 0x88) + iVar16;
      uVar15 = (uint)uVar9;
      *(uint *)(param_1 + 8) = iVar13 + (uVar17 >> 3);
      *(uint *)(param_1 + 0xc) = uVar17 & 7;
      if (uVar15 < 0x100) goto LAB_710078701c;
    }
    else {
      uVar17 = uVar17 + 1;
      if (uVar17 < 0xf) {
        lVar21 = param_1 + (ulong)uVar17 * 4;
        do {
          puVar25 = (uint *)(lVar21 + 0xe8);
          lVar21 = lVar21 + 4;
          if (uVar14 < *puVar25) {
            uVar15 = uVar17 - 1;
            uVar24 = 0x10 - uVar17;
            goto LAB_7100786da4;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 != 0xf);
        uVar24 = 1;
        uVar15 = 0xe;
      }
      else {
        uVar24 = 1;
        uVar15 = 0xe;
        uVar17 = 0xf;
      }
LAB_7100786da4:
      *(uint *)(param_1 + 8) = iVar13 + (uVar17 + iVar16 >> 3);
      *(uint *)(param_1 + 0xc) = uVar17 + iVar16 & 7;
      uVar17 = (uVar14 - *(int *)(lVar19 + (ulong)uVar15 * 4 + 4) >> (ulong)(uVar24 & 0x1f)) +
               *(int *)(lVar19 + (ulong)uVar17 * 4 + 0x44);
      if (*(uint *)(param_1 + 0xe4) <= uVar17) {
        uVar17 = 0;
      }
      uVar9 = *(ushort *)(lVar19 + (ulong)uVar17 * 2 + 0xc88);
      uVar15 = (uint)uVar9;
      uVar14 = uVar15;
      if (uVar9 < 0x100) {
LAB_710078701c:
        lVar19 = *(long *)(param_1 + 0xb8);
        *(long *)(param_1 + 0xb8) = lVar19 + 1;
        *(char *)(*(long *)(param_1 + 0x4b88) + lVar19) = (char)uVar14;
        uVar29 = *(ulong *)(param_1 + 0xb8);
        uVar20 = *(ulong *)(param_1 + 0xe950);
        goto LAB_7100786ce0;
      }
    }
    piVar28 = (int *)(param_1 + 8);
    if (0x10e < uVar15) {
      bVar7 = (&DAT_71009c5d20)[uVar15 - 0x10f];
      iVar16 = *(int *)(param_1 + 8);
      uVar17 = *(uint *)(param_1 + 0xc);
      iVar13 = (byte)(&DAT_71009c5e08)[uVar15 - 0x10f] + 3;
      if (bVar7 != 0) {
        bVar8 = *(byte *)(lVar18 + iVar16);
        lVar19 = (long)iVar16;
        uVar14 = uVar17 + bVar7;
        bVar5 = *(byte *)(lVar18 + lVar19 + 2);
        iVar16 = iVar16 + (uVar14 >> 3);
        uVar15 = 8 - uVar17;
        uVar17 = uVar14 & 7;
        bVar6 = *(byte *)(lVar18 + lVar19 + 1);
        *piVar28 = iVar16;
        *(uint *)(param_1 + 0xc) = uVar17;
        iVar13 = iVar13 + ((((uint)bVar5 | (uint)bVar8 << 0x10 | (uint)bVar6 << 8) >>
                            (ulong)(uVar15 & 0x1f) & 0xffff) >> (ulong)(0x10 - bVar7 & 0x1f));
      }
      lVar19 = param_1 + 0xfd0;
      uVar14 = *(uint *)(param_1 + 0x1054);
      uVar15 = ((uint)*(byte *)(lVar18 + iVar16 + 2) | (uint)*(byte *)(lVar18 + iVar16) << 0x10 |
               (uint)*(byte *)(lVar18 + iVar16 + 1) << 8) >> (ulong)(8 - uVar17 & 0x1f) & 0xfffe;
      if (uVar15 < *(uint *)(lVar19 + (ulong)uVar14 * 4 + 4)) {
        uVar29 = (ulong)(uVar15 >> (ulong)(0x10 - uVar14 & 0x1f));
        uVar9 = *(ushort *)(lVar19 + uVar29 * 2 + 0x488);
        uVar17 = *(byte *)(lVar19 + uVar29 + 0x88) + uVar17;
        *piVar28 = iVar16 + (uVar17 >> 3);
        *(uint *)(param_1 + 0xc) = uVar17 & 7;
        goto LAB_710078712c;
      }
      uVar14 = uVar14 + 1;
      if (uVar14 < 0xf) {
        lVar21 = param_1 + (ulong)uVar14 * 4;
        goto LAB_71007870d0;
      }
      uVar26 = 1;
      uVar24 = 0xe;
      uVar14 = 0xf;
      goto LAB_71007870ec;
    }
    if (uVar15 == 0x100) {
      cVar12 = FUN_7100785540(param_1);
      goto joined_r0x00710078771c;
    }
    if (uVar15 == 0x101) {
      cVar12 = FUN_71007867a0(param_1);
      if (cVar12 == '\0') {
        FUN_71007834c0(param_1);
        return;
      }
LAB_71007872f4:
      uVar29 = *(ulong *)(param_1 + 0xb8);
      uVar20 = *(ulong *)(param_1 + 0xe950);
      goto LAB_7100786ce0;
    }
    if (uVar15 == 0x102) {
      if (*(int *)(param_1 + 0xac) == 0) goto LAB_71007872f4;
      FUN_7100780ce0(param_1,*(int *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0x98));
      uVar29 = *(ulong *)(param_1 + 0xb8);
      uVar20 = *(ulong *)(param_1 + 0xe950);
      goto LAB_7100786ce0;
    }
    if (uVar15 < 0x107) {
      uVar2 = *(undefined4 *)(param_1 + (ulong)(uVar15 - 0x103) * 4 + 0x98);
      if (uVar15 != 0x103) {
        FUN_710080f900(param_1 + (ulong)(uVar15 - 0x104) * -4 + (ulong)(uVar15 - 0xdd) * 4,
                       param_1 + 0x98);
      }
      iVar13 = *(int *)(param_1 + 8);
      iVar16 = *(int *)(param_1 + 0xc);
      *(undefined4 *)(param_1 + 0x98) = uVar2;
      uVar17 = *(uint *)(param_1 + 0x2e2c);
      uVar14 = ((uint)*(byte *)(lVar18 + iVar13 + 2) | (uint)*(byte *)(lVar18 + iVar13) << 0x10 |
               (uint)*(byte *)(lVar18 + iVar13 + 1) << 8) >> (ulong)(8U - iVar16 & 0x1f) & 0xfffe;
      if (uVar14 < puVar1[(ulong)uVar17 + 1]) {
        uVar29 = (ulong)(uVar14 >> (ulong)(0x10 - uVar17 & 0x1f));
        uVar9 = *(ushort *)((long)puVar1 + uVar29 * 2 + 0x488);
        uVar17 = (uint)*(byte *)((long)puVar1 + uVar29 + 0x88) + iVar16;
        *piVar28 = iVar13 + (uVar17 >> 3);
        *(uint *)(param_1 + 0xc) = uVar17 & 7;
        goto LAB_71007875ac;
      }
      uVar17 = uVar17 + 1;
      if (uVar17 < 0xf) {
        lVar19 = param_1 + (ulong)uVar17 * 4;
        goto LAB_7100787454;
      }
      uVar24 = 1;
      uVar15 = 0xe;
      uVar17 = 0xf;
      goto LAB_7100787470;
    }
    bVar7 = (&DAT_71009c5d40)[uVar15 - 0x107];
    uVar17 = (byte)(&DAT_71009c5e28)[uVar15 - 0x107] + 1;
    if (bVar7 != 0) {
      iVar13 = *(int *)(param_1 + 8);
      iVar16 = *(int *)(param_1 + 0xc);
      bVar5 = *(byte *)(lVar18 + iVar13 + 2);
      bVar6 = *(byte *)(lVar18 + iVar13 + 1);
      uVar14 = iVar16 + (uint)bVar7;
      bVar8 = *(byte *)(lVar18 + iVar13);
      *piVar28 = iVar13 + (uVar14 >> 3);
      *(uint *)(param_1 + 0xc) = uVar14 & 7;
      uVar17 = uVar17 + ((((uint)bVar5 | (uint)bVar8 << 0x10 | (uint)bVar6 << 8) >>
                          (ulong)(8U - iVar16 & 0x1f) & 0xffff) >> (ulong)(0x10 - bVar7 & 0x1f));
    }
    uVar4 = *(undefined4 *)(param_1 + 0x98);
    *(uint *)(param_1 + 0x98) = uVar17;
    uVar22 = *(ulong *)(param_1 + 0xb8);
    uVar20 = uVar22 - uVar17;
    *(undefined4 *)(param_1 + 0xac) = 2;
    uVar2 = *(undefined4 *)(param_1 + 0x9c);
    uVar3 = *(undefined4 *)(param_1 + 0xa0);
    uVar29 = uVar22;
    if (uVar22 < uVar20) {
      uVar29 = uVar20;
    }
    lVar19 = *(long *)(param_1 + 0x4b88);
    *(undefined4 *)(param_1 + 0x9c) = uVar4;
    *(undefined4 *)(param_1 + 0xa0) = uVar2;
    *(undefined4 *)(param_1 + 0xa4) = uVar3;
    if (uVar29 < *(long *)(param_1 + 0xe948) - 0x1004U) {
      *(ulong *)(param_1 + 0xb8) = uVar22 + 2;
      *(undefined1 *)(lVar19 + uVar22) = *(undefined1 *)(lVar19 + uVar20);
      *(undefined1 *)(lVar19 + uVar22 + 1) = *(undefined1 *)(lVar19 + uVar20 + 1);
      uVar29 = *(ulong *)(param_1 + 0xb8);
      uVar20 = *(ulong *)(param_1 + 0xe950);
      goto LAB_7100786ce0;
    }
    *(undefined1 *)(lVar19 + uVar22) =
         *(undefined1 *)(lVar19 + (uVar20 & *(ulong *)(param_1 + 0xe950)));
    uVar29 = *(long *)(param_1 + 0xb8) + 1U & *(ulong *)(param_1 + 0xe950);
    *(ulong *)(param_1 + 0xb8) = uVar29;
    *(undefined1 *)(*(long *)(param_1 + 0x4b88) + uVar29) =
         *(undefined1 *)(*(long *)(param_1 + 0x4b88) + (uVar20 + 1 & *(ulong *)(param_1 + 0xe950)));
    uVar20 = *(ulong *)(param_1 + 0xe950);
    uVar29 = *(long *)(param_1 + 0xb8) + 1U & uVar20 & uVar20;
    *(ulong *)(param_1 + 0xb8) = uVar29;
  } while (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0xcc));
LAB_7100786f28:
  cVar12 = FUN_71007820f0(param_1);
  if (cVar12 == '\0') goto LAB_7100787228;
  if ((*(long *)(param_1 + 0xc0) - *(long *)(param_1 + 0xb8) & *(ulong *)(param_1 + 0xe950)) < 0x104
      && *(long *)(param_1 + 0xc0) != *(long *)(param_1 + 0xb8)) {
LAB_7100786f58:
    FUN_71007834c0(param_1);
    if (*(long *)(param_1 + 0x4d98) < *(long *)(param_1 + 0x4da8)) {
      return;
    }
    if (*(char *)(param_1 + 0x4da0) != '\0') {
      *(undefined1 *)(param_1 + 0x4db0) = 0;
      return;
    }
  }
  goto LAB_7100786d10;
joined_r0x007100787748:
  if (uVar17 == 0xffffffff) {
LAB_710078721c:
    FUN_7100780ca0(lVar19);
    *(undefined4 *)(param_1 + 0xe880) = 0;
LAB_7100787228:
    FUN_71007834c0(param_1);
    return;
  }
  bVar11 = iVar13 == 3;
  iVar13 = iVar13 + 1;
  if (bVar11) goto LAB_71007877f4;
  iVar16 = (uVar17 & 0xff) + iVar16 * 0x100;
  uVar17 = FUN_7100782640(lVar19);
  goto joined_r0x007100787748;
LAB_71007877f4:
  FUN_7100780ce0(param_1,(uVar17 & 0xff) + 0x20,iVar16 + 2);
  uVar29 = *(ulong *)(param_1 + 0xb8);
  uVar20 = *(ulong *)(param_1 + 0xe950);
  goto LAB_7100786ce0;
  while (uVar14 = uVar14 + 1, uVar14 != 0xf) {
LAB_71007870d0:
    puVar25 = (uint *)(lVar21 + 0xfd4);
    lVar21 = lVar21 + 4;
    if (uVar15 < *puVar25) {
      uVar24 = uVar14 - 1;
      uVar26 = 0x10 - uVar14;
      goto LAB_71007870ec;
    }
  }
  uVar26 = 1;
  uVar24 = 0xe;
LAB_71007870ec:
  *piVar28 = iVar16 + (uVar14 + uVar17 >> 3);
  *(uint *)(param_1 + 0xc) = uVar14 + uVar17 & 7;
  uVar17 = (uVar15 - *(int *)(lVar19 + (ulong)uVar24 * 4 + 4) >> (ulong)(uVar26 & 0x1f)) +
           *(int *)(lVar19 + (ulong)uVar14 * 4 + 0x44);
  if (*(uint *)(param_1 + 0xfd0) <= uVar17) {
    uVar17 = 0;
  }
  uVar9 = *(ushort *)(lVar19 + (ulong)uVar17 * 2 + 0xc88);
LAB_710078712c:
  bVar7 = *(byte *)((ulong)uVar9 + 0x7100d1bda8);
  uVar17 = *(int *)((ulong)uVar9 * 4 + 0x7100d1bde8) + 1;
  if (bVar7 != 0) {
    if (uVar9 < 10) {
      iVar16 = *(int *)(param_1 + 8);
      iVar27 = *(int *)(param_1 + 0xc);
      bVar5 = *(byte *)(lVar18 + iVar16 + 2);
      bVar6 = *(byte *)(lVar18 + iVar16 + 1);
      uVar14 = iVar27 + (uint)bVar7;
      bVar8 = *(byte *)(lVar18 + iVar16);
      *piVar28 = iVar16 + (uVar14 >> 3);
      *(uint *)(param_1 + 0xc) = uVar14 & 7;
      uVar17 = uVar17 + ((((uint)bVar5 | (uint)bVar8 << 0x10 | (uint)bVar6 << 8) >>
                          (ulong)(8U - iVar27 & 0x1f) & 0xffff) >> (ulong)(0x10 - bVar7 & 0x1f));
    }
    else {
      if (4 < bVar7) {
        iVar16 = *(int *)(param_1 + 8);
        iVar27 = *(int *)(param_1 + 0xc);
        bVar5 = *(byte *)(lVar18 + iVar16 + 2);
        bVar6 = *(byte *)(lVar18 + iVar16 + 1);
        bVar8 = *(byte *)(lVar18 + iVar16);
        uVar14 = iVar27 + -4 + (uint)bVar7;
        *piVar28 = iVar16 + (uVar14 >> 3);
        *(uint *)(param_1 + 0xc) = uVar14 & 7;
        uVar17 = uVar17 + ((((uint)bVar5 | (uint)bVar8 << 0x10 | (uint)bVar6 << 8) >>
                            (ulong)(8U - iVar27 & 0x1f) & 0xffff) >> (ulong)(0x14 - bVar7 & 0x1f)) *
                          0x10;
      }
      if (*(int *)(param_1 + 0x9a24) < 1) {
        iVar16 = *(int *)(param_1 + 8);
        iVar27 = *(int *)(param_1 + 0xc);
        lVar19 = param_1 + 0x1ebc;
        uVar14 = *(uint *)(param_1 + 8000);
        uVar15 = ((uint)*(byte *)(lVar18 + iVar16 + 2) | (uint)*(byte *)(lVar18 + iVar16) << 0x10 |
                 (uint)*(byte *)(lVar18 + iVar16 + 1) << 8) >> (ulong)(8U - iVar27 & 0x1f) & 0xfffe;
        if (uVar15 < *(uint *)(lVar19 + (ulong)uVar14 * 4 + 4)) {
          uVar29 = (ulong)(uVar15 >> (ulong)(0x10 - uVar14 & 0x1f));
          uVar9 = *(ushort *)(lVar19 + uVar29 * 2 + 0x488);
          uVar14 = (uint)*(byte *)(lVar19 + uVar29 + 0x88) + iVar27;
          *piVar28 = iVar16 + (uVar14 >> 3);
          *(uint *)(param_1 + 0xc) = uVar14 & 7;
        }
        else {
          uVar14 = uVar14 + 1;
          if (uVar14 < 0xf) {
            lVar19 = param_1 + (ulong)uVar14 * 4;
            do {
              puVar25 = (uint *)(lVar19 + 0x1ec0);
              lVar19 = lVar19 + 4;
              if (uVar15 < *puVar25) {
                uVar24 = uVar14 - 1;
                uVar26 = 0x10 - uVar14;
                goto LAB_71007876b8;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 != 0xf);
            uVar26 = 1;
            uVar24 = 0xe;
          }
          else {
            uVar26 = 1;
            uVar24 = 0xe;
            uVar14 = 0xf;
          }
LAB_71007876b8:
          puVar25 = (uint *)(param_1 + 0x1ebc);
          *piVar28 = iVar16 + (uVar14 + iVar27 >> 3);
          *(uint *)(param_1 + 0xc) = uVar14 + iVar27 & 7;
          uVar14 = (uVar15 - puVar25[(ulong)uVar24 + 1] >> (ulong)(uVar26 & 0x1f)) +
                   puVar25[(ulong)uVar14 + 0x11];
          if (*puVar25 <= uVar14) {
            uVar14 = 0;
          }
          uVar9 = *(ushort *)((long)puVar25 + (ulong)uVar14 * 2 + 0xc88);
        }
        uVar14 = (uint)uVar9;
        if (uVar14 == 0x10) {
          *(undefined4 *)(param_1 + 0x9a24) = 0xf;
          uVar17 = uVar17 + *(int *)(param_1 + 0x9a20);
        }
        else {
          uVar17 = uVar17 + uVar14;
          *(uint *)(param_1 + 0x9a20) = uVar14;
        }
      }
      else {
        *(int *)(param_1 + 0x9a24) = *(int *)(param_1 + 0x9a24) + -1;
        uVar17 = uVar17 + *(int *)(param_1 + 0x9a20);
      }
    }
  }
  if (0x1fff < uVar17) {
    if (0x3ffff < uVar17) {
      iVar13 = iVar13 + 1;
    }
    iVar13 = iVar13 + 1;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x98);
  uVar3 = *(undefined4 *)(param_1 + 0x9c);
  *(int *)(param_1 + 0xac) = iVar13;
  uVar4 = *(undefined4 *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0x98) = uVar17;
  *(undefined4 *)(param_1 + 0x9c) = uVar2;
  *(undefined4 *)(param_1 + 0xa0) = uVar3;
  *(undefined4 *)(param_1 + 0xa4) = uVar4;
  FUN_7100780ce0(param_1);
  uVar29 = *(ulong *)(param_1 + 0xb8);
  uVar20 = *(ulong *)(param_1 + 0xe950);
  goto LAB_7100786ce0;
  while (uVar17 = uVar17 + 1, uVar17 != 0xf) {
LAB_7100787454:
    puVar25 = (uint *)(lVar19 + 0x2dac);
    lVar19 = lVar19 + 4;
    if (uVar14 < *puVar25) {
      uVar15 = uVar17 - 1;
      uVar24 = 0x10 - uVar17;
      goto LAB_7100787470;
    }
  }
  uVar24 = 1;
  uVar15 = 0xe;
LAB_7100787470:
  *piVar28 = iVar13 + (uVar17 + iVar16 >> 3);
  *(uint *)(param_1 + 0xc) = uVar17 + iVar16 & 7;
  uVar17 = (uVar14 - puVar1[(ulong)uVar15 + 1] >> (ulong)(uVar24 & 0x1f)) +
           puVar1[(ulong)uVar17 + 0x11];
  if (*puVar1 <= uVar17) {
    uVar17 = 0;
  }
  uVar9 = *(ushort *)((long)puVar1 + (ulong)uVar17 * 2 + 0xc88);
LAB_71007875ac:
  bVar7 = (&DAT_71009c5d20)[uVar9];
  iVar13 = (byte)(&DAT_71009c5e08)[uVar9] + 2;
  if (bVar7 != 0) {
    iVar16 = *(int *)(param_1 + 8);
    iVar27 = *(int *)(param_1 + 0xc);
    bVar5 = *(byte *)(lVar18 + iVar16 + 2);
    bVar6 = *(byte *)(lVar18 + iVar16 + 1);
    uVar17 = iVar27 + (uint)bVar7;
    bVar8 = *(byte *)(lVar18 + iVar16);
    *piVar28 = iVar16 + (uVar17 >> 3);
    *(uint *)(param_1 + 0xc) = uVar17 & 7;
    iVar13 = iVar13 + ((((uint)bVar5 | (uint)bVar8 << 0x10 | (uint)bVar6 << 8) >>
                        (ulong)(8U - iVar27 & 0x1f) & 0xffff) >> (ulong)(0x10 - bVar7 & 0x1f));
  }
  *(int *)(param_1 + 0xac) = iVar13;
  FUN_7100780ce0(param_1,iVar13,uVar2);
  uVar29 = *(ulong *)(param_1 + 0xb8);
  uVar20 = *(ulong *)(param_1 + 0xe950);
  goto LAB_7100786ce0;
}



// ===== FUN_7100787820 @ 7100787820 (size=296) =====

void FUN_7100787820(long *param_1,long param_2)

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
    lVar2 = FUN_71008141e0(*param_1,uVar1 << 4);
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
      FUN_710080f900(lVar2,lVar5,lVar6 << 4);
      FUN_710077e260(lVar5,lVar6 << 4);
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



// ===== FUN_7100787950 @ 7100787950 (size=1184) =====

void FUN_7100787950(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  long lVar8;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  char *pcVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  
  uVar15 = param_1[0x17];
  uVar19 = param_1[0x18];
  plVar1 = param_1 + 0xe;
  uVar10 = uVar15 - uVar19 & param_1[0x1d2a];
  if (param_1[0xf] != 0) {
    uVar17 = 0;
    puVar2 = param_1 + 0x972;
    uVar12 = uVar10;
LAB_71007879b8:
    do {
      lVar18 = uVar17 * 0x10;
      lVar8 = *plVar1 + lVar18;
      if (*(char *)(*plVar1 + lVar18) == '\b') goto LAB_7100787ac0;
      uVar5 = *(uint *)(lVar8 + 4);
      uVar11 = (ulong)uVar5;
      if (*(char *)(lVar8 + 0xd) != '\0') {
        if ((uVar11 - param_1[0x18] & param_1[0x1d2a]) <= uVar10) {
          *(undefined1 *)(lVar8 + 0xd) = 0;
        }
        goto LAB_7100787ac0;
      }
      uVar6 = *(uint *)(lVar8 + 8);
      if (uVar12 <= (uVar11 - uVar19 & param_1[0x1d2a])) goto LAB_7100787ac0;
      if (uVar19 != uVar11) {
        FUN_71007833b0(param_1,uVar19,uVar11);
        uVar15 = param_1[0x17];
        uVar12 = uVar15 - uVar11 & param_1[0x1d2a];
      }
      uVar14 = (ulong)uVar6;
      if (uVar12 < uVar14) {
        param_1[0x18] = uVar11;
        uVar14 = param_1[0xf];
        if (uVar17 < uVar14) {
          lVar8 = param_1[0xe];
          pcVar9 = (char *)(lVar8 + lVar18);
          do {
            if (*pcVar9 != '\b') {
              pcVar9[0xd] = '\0';
            }
            pcVar9 = pcVar9 + 0x10;
          } while ((char *)(lVar8 + uVar14 * 0x10) != pcVar9);
          bVar7 = true;
          goto LAB_7100787ad4;
        }
        bVar7 = true;
        if (uVar14 == 0) goto LAB_7100787b58;
        goto LAB_7100787ad8;
      }
      uVar19 = uVar11;
      if (uVar6 == 0) goto LAB_7100787ac0;
      uVar6 = uVar6 + uVar5 & (uint)param_1[0x1d2a];
      uVar19 = (ulong)uVar6;
      if ((ulong)param_1[6] < uVar14) {
        FUN_7100785e50(param_1 + 4,uVar14 - param_1[5]);
      }
      else {
        param_1[5] = uVar14;
      }
      lVar13 = param_1[4];
      if (uVar6 - 1 < uVar5) {
        lVar3 = lVar13 + (param_1[0x1d29] - uVar11);
        if (*(char *)(param_1 + 0x9b2) == '\0') {
          FUN_710080f900(lVar13,param_1[0x971] + uVar11);
          FUN_710080f900(lVar3,param_1[0x971],uVar19);
        }
        else {
          FUN_7100783310(puVar2,lVar13,uVar11,param_1[0x1d29] - uVar11);
          FUN_7100783310(puVar2,lVar3,0,uVar19);
        }
      }
      else if (*(char *)(param_1 + 0x9b2) == '\0') {
        lVar13 = FUN_710080f900(lVar13,param_1[0x971] + uVar11,uVar14);
      }
      else {
        FUN_7100783310(puVar2,lVar13,uVar11,uVar14);
      }
      lVar8 = FUN_7100785f80(param_1,lVar13,uVar14,lVar8);
      *(undefined1 *)(*plVar1 + lVar18) = 8;
      if (lVar8 != 0) {
        FUN_710077df50(*param_1,lVar8,uVar14);
      }
      uVar17 = uVar17 + 1;
      uVar15 = param_1[0x17];
      *(undefined1 *)((long)param_1 + 0x4da2) = 1;
      param_1[0x9b5] = param_1[0x9b5] + uVar14;
      uVar14 = param_1[0xf];
      uVar12 = uVar15 - uVar19 & param_1[0x1d2a];
      uVar11 = uVar19;
    } while (uVar17 < uVar14);
    goto LAB_7100787ad0;
  }
LAB_7100787d10:
  FUN_71007833b0(param_1,uVar19,uVar15);
  uVar10 = param_1[0x17];
  param_1[0x18] = uVar10;
  uVar15 = param_1[0x1d29];
  if (0x400000 < uVar15) {
    uVar15 = 0x400000;
  }
  uVar15 = uVar15 + uVar10 & param_1[0x1d2a];
  param_1[0x970] = uVar15;
  if (uVar10 != uVar15) {
    return;
  }
LAB_7100787ba8:
  param_1[0x970] = uVar10;
  return;
LAB_7100787ac0:
  uVar14 = param_1[0xf];
  uVar17 = uVar17 + 1;
  uVar11 = uVar19;
  if (uVar14 <= uVar17) goto LAB_7100787ad0;
  goto LAB_71007879b8;
LAB_7100787ad0:
  bVar7 = false;
LAB_7100787ad4:
  uVar19 = uVar11;
  if (uVar14 != 0) {
LAB_7100787ad8:
    pcVar16 = (char *)param_1[0xe];
    uVar19 = 1;
    uVar10 = (ulong)(*pcVar16 == '\b');
    lVar8 = 1 - uVar10;
    pcVar9 = pcVar16;
    if (uVar14 != 1) {
      do {
        if (uVar10 != 0) {
          uVar4 = *(undefined8 *)(pcVar9 + 0x18);
          *(undefined8 *)(pcVar16 + lVar8 * 0x10) = *(undefined8 *)(pcVar9 + 0x10);
          *(undefined8 *)(pcVar16 + lVar8 * 0x10 + 8) = uVar4;
        }
        uVar19 = uVar19 + 1;
        pcVar9 = pcVar9 + 0x10;
        if (*pcVar9 == '\b') {
          uVar10 = uVar10 + 1;
        }
        lVar8 = uVar19 - uVar10;
      } while (uVar14 != uVar19);
    }
    uVar19 = uVar11;
    if (uVar10 != 0) {
      if ((ulong)param_1[0x10] < uVar14 - uVar10) {
        FUN_7100787820(plVar1,-uVar10);
        uVar15 = param_1[0x17];
      }
      else {
        param_1[0xf] = uVar14 - uVar10;
        uVar15 = param_1[0x17];
      }
    }
  }
  if (bVar7) {
LAB_7100787b58:
    uVar19 = param_1[0x1d29];
    uVar17 = param_1[0x1d2a];
    uVar10 = param_1[0x18];
    if (0x400000 < uVar19) {
      uVar19 = 0x400000;
    }
    uVar19 = uVar19 + uVar15 & uVar17;
    param_1[0x970] = uVar19;
    if (uVar19 == uVar15) {
      param_1[0x970] = uVar10;
      return;
    }
    if (uVar15 == uVar10) {
      return;
    }
    if ((uVar19 - uVar15 & uVar17) <= (uVar10 - uVar15 & uVar17)) {
      return;
    }
    goto LAB_7100787ba8;
  }
  goto LAB_7100787d10;
}



// ===== FUN_7100787df0 @ 7100787df0 (size=228) =====

undefined8 FUN_7100787df0(long param_1,undefined1 *param_2)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long lVar6;
  ulong uVar7;
  bool bVar8;
  
  if ((0x1fff < *(ulong *)(param_1 + 0x78)) &&
     (FUN_7100787950(), 0x1fff < *(ulong *)(param_1 + 0x78))) {
    FUN_7100783050(param_1);
  }
  lVar2 = *(long *)(param_1 + 0xb8);
  bVar8 = false;
  uVar7 = *(ulong *)(param_1 + 0xe950);
  if (*(long *)(param_1 + 0xc0) != lVar2) {
    bVar8 = (*(long *)(param_1 + 0xc0) - lVar2 & uVar7) <= (ulong)*(uint *)(param_2 + 4);
  }
  param_2[0xd] = bVar8;
  uVar1 = *(uint *)(param_2 + 4) + (int)lVar2 & (uint)uVar7;
  uVar4 = *param_2;
  *(uint *)(param_2 + 4) = uVar1;
  uVar5 = param_2[0xc];
  uVar3 = *(undefined4 *)(param_2 + 8);
  FUN_7100787820(param_1 + 0x70,1);
  lVar6 = (*(long *)(param_1 + 0x78) + -1) * 0x10;
  lVar2 = *(long *)(param_1 + 0x70) + lVar6;
  *(undefined1 *)(*(long *)(param_1 + 0x70) + lVar6) = uVar4;
  *(undefined1 *)(lVar2 + 0xc) = uVar5;
  *(bool *)(lVar2 + 0xd) = bVar8;
  *(uint *)(lVar2 + 4) = uVar1;
  *(undefined4 *)(lVar2 + 8) = uVar3;
  return 1;
}



// ===== FUN_7100787ee0 @ 7100787ee0 (size=2416) =====

void FUN_7100787ee0(long param_1,undefined1 param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  ushort uVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  undefined1 *puVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined1 auStack_10 [16];
  
  *(undefined1 *)(param_1 + 0x4db0) = 1;
  if (*(char *)(param_1 + 0x4da0) != '\0') {
LAB_7100787f08:
    piVar1 = (int *)(param_1 + 8);
    puVar2 = (uint *)(param_1 + 0x2da8);
LAB_7100787f20:
    uVar20 = *(ulong *)(param_1 + 0xe950);
    iVar24 = *(int *)(param_1 + 8);
    uVar17 = uVar20 & *(ulong *)(param_1 + 0xb8);
    *(ulong *)(param_1 + 0xb8) = uVar17;
    if (*(int *)(param_1 + 0xcc) <= iVar24) {
      while ((iVar19 = *(int *)(param_1 + 0xd8) + *(int *)(param_1 + 0xd0), iVar19 <= iVar24 ||
             ((iVar19 + -1 == iVar24 && (*(int *)(param_1 + 0xd4) <= *(int *)(param_1 + 0xc)))))) {
        if (*(char *)(param_1 + 0xe0) != '\0') goto LAB_71007880e8;
        cVar13 = FUN_7100782ea0(param_1);
        if (cVar13 == '\0') {
          return;
        }
        cVar13 = FUN_71007859e0(param_1,piVar1,param_1 + 0xd0,param_1 + 0xe4);
        if (cVar13 == '\0') {
          return;
        }
        iVar24 = *(int *)(param_1 + 8);
      }
      cVar13 = FUN_7100782380(param_1,piVar1,param_1 + 0xd0);
      if (cVar13 == '\0') goto LAB_71007880e8;
      uVar17 = *(ulong *)(param_1 + 0xb8);
      uVar20 = *(ulong *)(param_1 + 0xe950);
    }
    if ((*(ulong *)(param_1 + 0x4b80) - uVar17 & uVar20) < 0x1004 &&
        *(ulong *)(param_1 + 0x4b80) != uVar17) {
      FUN_7100787950(param_1);
      if (*(long *)(param_1 + 0x4d98) < *(long *)(param_1 + 0x4da8)) {
        return;
      }
      if (*(char *)(param_1 + 0x4da0) != '\0') {
        *(undefined1 *)(param_1 + 0x4db0) = 0;
        return;
      }
    }
    iVar24 = *(int *)(param_1 + 8);
    iVar19 = *(int *)(param_1 + 0xc);
    lVar26 = param_1 + 0xe4;
    lVar27 = *(long *)(param_1 + 0x18);
    uVar14 = *(uint *)(param_1 + 0x168);
    uVar15 = ((uint)*(byte *)(lVar27 + iVar24 + 2) | (uint)*(byte *)(lVar27 + iVar24) << 0x10 |
             (uint)*(byte *)(lVar27 + iVar24 + 1) << 8) >> (ulong)(8U - iVar19 & 0x1f) & 0xfffe;
    if (uVar15 < *(uint *)(lVar26 + (ulong)uVar14 * 4 + 4)) {
      uVar17 = (ulong)(uVar15 >> (ulong)(0x10 - uVar14 & 0x1f));
      uVar12 = *(ushort *)(lVar26 + uVar17 * 2 + 0x488);
      uVar15 = (uint)uVar12;
      uVar14 = (uint)*(byte *)(lVar26 + uVar17 + 0x88) + iVar19;
      uVar16 = (uint)uVar12;
      *piVar1 = iVar24 + (uVar14 >> 3);
      *(uint *)(param_1 + 0xc) = uVar14 & 7;
      if (uVar16 < 0x100) goto LAB_7100788138;
    }
    else {
      uVar14 = uVar14 + 1;
      if (uVar14 < 0xf) {
        lVar25 = param_1 + (ulong)uVar14 * 4;
        do {
          puVar23 = (uint *)(lVar25 + 0xe8);
          lVar25 = lVar25 + 4;
          if (uVar15 < *puVar23) {
            uVar16 = uVar14 - 1;
            uVar21 = 0x10 - uVar14;
            goto LAB_7100787fe8;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 != 0xf);
        uVar21 = 1;
        uVar16 = 0xe;
      }
      else {
        uVar21 = 1;
        uVar16 = 0xe;
        uVar14 = 0xf;
      }
LAB_7100787fe8:
      *piVar1 = iVar24 + (uVar14 + iVar19 >> 3);
      *(uint *)(param_1 + 0xc) = uVar14 + iVar19 & 7;
      uVar14 = (uVar15 - *(int *)(lVar26 + (ulong)uVar16 * 4 + 4) >> (ulong)(uVar21 & 0x1f)) +
               *(int *)(lVar26 + (ulong)uVar14 * 4 + 0x44);
      if (*(uint *)(param_1 + 0xe4) <= uVar14) {
        uVar14 = 0;
      }
      uVar12 = *(ushort *)(lVar26 + (ulong)uVar14 * 2 + 0xc88);
      uVar16 = (uint)uVar12;
      uVar15 = uVar16;
      if (uVar12 < 0x100) {
LAB_7100788138:
        lVar27 = *(long *)(param_1 + 0xb8);
        lVar26 = lVar27 + 1;
        if (*(char *)(param_1 + 0x4d90) == '\0') {
          *(long *)(param_1 + 0xb8) = lVar26;
          *(char *)(*(long *)(param_1 + 0x4b88) + lVar27) = (char)uVar15;
        }
        else {
          *(long *)(param_1 + 0xb8) = lVar26;
          puVar18 = (undefined1 *)FUN_7100783210(param_1 + 0x4b90);
          *puVar18 = (char)uVar15;
        }
        goto LAB_7100787f20;
      }
    }
    if (uVar16 < 0x106) {
      if (uVar16 == 0x100) {
        cVar13 = FUN_7100782490(param_1,piVar1,auStack_10);
        if (cVar13 == '\0') {
LAB_71007880e8:
          FUN_7100787950(param_1);
          return;
        }
        cVar13 = FUN_7100787df0(param_1,auStack_10);
        if (cVar13 == '\0') {
          FUN_7100787950(param_1);
          return;
        }
      }
      else {
        if (uVar16 != 0x101) {
          uVar14 = *(uint *)(param_1 + (ulong)(uVar16 - 0x102) * 4 + 0x98);
          if (uVar16 != 0x102) {
            FUN_710080f900(param_1 + (ulong)(uVar16 - 0xdc) * 4 + (ulong)(uVar16 - 0x103) * -4,
                           param_1 + 0x98,((ulong)(uVar16 - 0x103) + 1) * 4);
          }
          iVar24 = *(int *)(param_1 + 8);
          iVar19 = *(int *)(param_1 + 0xc);
          *(uint *)(param_1 + 0x98) = uVar14;
          uVar15 = *(uint *)(param_1 + 0x2e2c);
          uVar16 = ((uint)*(byte *)(lVar27 + iVar24 + 2) | (uint)*(byte *)(lVar27 + iVar24) << 0x10
                   | (uint)*(byte *)(lVar27 + iVar24 + 1) << 8) >> (ulong)(8U - iVar19 & 0x1f) &
                   0xfffe;
          if (uVar16 < puVar2[(ulong)uVar15 + 1]) {
            uVar17 = (ulong)(uVar16 >> (ulong)(0x10 - uVar15 & 0x1f));
            uVar12 = *(ushort *)((long)puVar2 + uVar17 * 2 + 0x488);
            uVar15 = (uint)*(byte *)((long)puVar2 + uVar17 + 0x88) + iVar19;
            *piVar1 = iVar24 + (uVar15 >> 3);
            *(uint *)(param_1 + 0xc) = uVar15 & 7;
          }
          else {
            uVar15 = uVar15 + 1;
            if (uVar15 < 0xf) {
              lVar26 = param_1 + (ulong)uVar15 * 4;
              do {
                puVar23 = (uint *)(lVar26 + 0x2dac);
                lVar26 = lVar26 + 4;
                if (uVar16 < *puVar23) {
                  uVar21 = uVar15 - 1;
                  uVar22 = 0x10 - uVar15;
                  goto LAB_71007883c4;
                }
                uVar15 = uVar15 + 1;
              } while (uVar15 != 0xf);
              uVar22 = 1;
              uVar21 = 0xe;
            }
            else {
              uVar22 = 1;
              uVar21 = 0xe;
              uVar15 = 0xf;
            }
LAB_71007883c4:
            *piVar1 = iVar24 + (uVar15 + iVar19 >> 3);
            *(uint *)(param_1 + 0xc) = uVar15 + iVar19 & 7;
            uVar15 = (uVar16 - puVar2[(ulong)uVar21 + 1] >> (ulong)(uVar22 & 0x1f)) +
                     puVar2[(ulong)uVar15 + 0x11];
            if (*puVar2 <= uVar15) {
              uVar15 = 0;
            }
            uVar12 = *(ushort *)((long)puVar2 + (ulong)uVar15 * 2 + 0xc88);
          }
          uVar15 = (uint)uVar12;
          iVar19 = uVar15 + 2;
          if (7 < uVar15) {
            iVar24 = *(int *)(param_1 + 8);
            iVar19 = *(int *)(param_1 + 0xc);
            bVar7 = *(byte *)(lVar27 + iVar24 + 2);
            uVar21 = (uVar12 >> 2) - 1;
            bVar8 = *(byte *)(lVar27 + iVar24 + 1);
            uVar16 = iVar19 + uVar21;
            bVar11 = *(byte *)(lVar27 + iVar24);
            *piVar1 = iVar24 + (uVar16 >> 3);
            *(uint *)(param_1 + 0xc) = uVar16 & 7;
            iVar19 = ((((uint)bVar7 | (uint)bVar11 << 0x10 | (uint)bVar8 << 8) >>
                       (ulong)(8U - iVar19 & 0x1f) & 0xffff) >> (ulong)(0x10 - uVar21 & 0x1f)) +
                     ((uVar15 & 3 | 4) << (ulong)(uVar21 & 0x1f)) + 2;
          }
          cVar13 = *(char *)(param_1 + 0x4d90);
          *(int *)(param_1 + 0xac) = iVar19;
          goto joined_r0x0071007882e8;
        }
        iVar19 = *(int *)(param_1 + 0xac);
        if (iVar19 != 0) {
          uVar14 = *(uint *)(param_1 + 0x98);
          if (*(char *)(param_1 + 0x4d90) == '\0') goto LAB_7100788484;
          FUN_7100783280(param_1 + 0x4b90,iVar19,uVar14,param_1 + 0xb8,
                         *(undefined8 *)(param_1 + 0xe950));
        }
      }
    }
    else {
      uVar15 = uVar16 - 0x106;
      iVar24 = *(int *)(param_1 + 8);
      uVar14 = *(uint *)(param_1 + 0xc);
      if (uVar15 < 8) {
        iVar19 = uVar16 - 0x104;
      }
      else {
        bVar11 = *(byte *)(lVar27 + iVar24);
        uVar16 = (uVar15 >> 2) - 1;
        bVar7 = *(byte *)(lVar27 + iVar24 + 2);
        uVar21 = 8 - uVar14;
        bVar8 = *(byte *)(lVar27 + iVar24 + 1);
        iVar24 = iVar24 + (uVar14 + uVar16 >> 3);
        uVar14 = uVar14 + uVar16 & 7;
        *piVar1 = iVar24;
        *(uint *)(param_1 + 0xc) = uVar14;
        iVar19 = ((((uint)bVar7 | (uint)bVar11 << 0x10 | (uint)bVar8 << 8) >> (ulong)(uVar21 & 0x1f)
                  & 0xffff) >> (ulong)(0x10 - uVar16 & 0x1f)) +
                 ((uVar15 & 3 | 4) << (ulong)(uVar16 & 0x1f)) + 2;
      }
      lVar26 = param_1 + 0xfd0;
      uVar15 = *(uint *)(param_1 + 0x1054);
      uVar16 = ((uint)*(byte *)(lVar27 + iVar24 + 2) | (uint)*(byte *)(lVar27 + iVar24) << 0x10 |
               (uint)*(byte *)(lVar27 + iVar24 + 1) << 8) >> (ulong)(8 - uVar14 & 0x1f) & 0xfffe;
      if (uVar16 < *(uint *)(lVar26 + (ulong)uVar15 * 4 + 4)) {
        uVar17 = (ulong)(uVar16 >> (ulong)(0x10 - uVar15 & 0x1f));
        uVar12 = *(ushort *)(lVar26 + uVar17 * 2 + 0x488);
        uVar14 = *(byte *)(lVar26 + uVar17 + 0x88) + uVar14;
        *piVar1 = iVar24 + (uVar14 >> 3);
        *(uint *)(param_1 + 0xc) = uVar14 & 7;
      }
      else {
        uVar15 = uVar15 + 1;
        if (uVar15 < 0xf) {
          lVar25 = param_1 + (ulong)uVar15 * 4;
          do {
            puVar23 = (uint *)(lVar25 + 0xfd4);
            lVar25 = lVar25 + 4;
            if (uVar16 < *puVar23) {
              uVar21 = uVar15 - 1;
              uVar22 = 0x10 - uVar15;
              goto LAB_7100788284;
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 != 0xf);
          uVar22 = 1;
          uVar21 = 0xe;
        }
        else {
          uVar22 = 1;
          uVar21 = 0xe;
          uVar15 = 0xf;
        }
LAB_7100788284:
        *piVar1 = iVar24 + (uVar15 + uVar14 >> 3);
        *(uint *)(param_1 + 0xc) = uVar15 + uVar14 & 7;
        uVar14 = (uVar16 - *(int *)(lVar26 + (ulong)uVar21 * 4 + 4) >> (ulong)(uVar22 & 0x1f)) +
                 *(int *)(lVar26 + (ulong)uVar15 * 4 + 0x44);
        if (*(uint *)(param_1 + 0xfd0) <= uVar14) {
          uVar14 = 0;
        }
        uVar12 = *(ushort *)(lVar26 + (ulong)uVar14 * 2 + 0xc88);
      }
      uVar14 = (uint)uVar12;
      if (uVar14 < 4) {
        uVar14 = uVar14 + 1;
      }
      else {
        iVar4 = *(int *)(param_1 + 8);
        uVar15 = *(uint *)(param_1 + 0xc);
        uVar16 = (uVar12 >> 1) - 1;
        iVar24 = ((uVar14 & 1 | 2) << (ulong)(uVar16 & 0x1f)) + 1;
        lVar25 = (long)iVar4;
        uVar14 = 8 - uVar15;
        bVar11 = *(byte *)(lVar27 + iVar4);
        lVar26 = lVar27 + lVar25;
        bVar7 = *(byte *)(lVar26 + 1);
        bVar8 = *(byte *)(lVar26 + 2);
        if (uVar16 < 4) {
          bVar9 = *(byte *)(lVar26 + 3);
          bVar10 = *(byte *)(lVar26 + 4);
          *piVar1 = iVar4 + (uVar16 + uVar15 >> 3);
          *(uint *)(param_1 + 0xc) = uVar16 + uVar15 & 7;
          uVar14 = (((uint)(bVar10 >> (ulong)(uVar14 & 0x1f)) |
                    ((uint)bVar8 << 8 | (uint)bVar7 << 0x10 | (uint)bVar9 | (uint)bVar11 << 0x18) <<
                    (ulong)(uVar15 & 0x1f)) >> (ulong)(-uVar16 & 0x1f)) + iVar24;
        }
        else {
          if (uVar16 != 4) {
            bVar9 = *(byte *)(lVar26 + 3);
            uVar21 = (uVar15 - 5) + (uint)(uVar12 >> 1);
            bVar10 = *(byte *)(lVar26 + 4);
            iVar4 = iVar4 + (uVar21 >> 3);
            lVar25 = (long)iVar4;
            uVar22 = uVar15 & 0x1f;
            uVar15 = uVar21 & 7;
            *piVar1 = iVar4;
            *(uint *)(param_1 + 0xc) = uVar15;
            iVar24 = iVar24 + (((uint)(bVar10 >> (ulong)(uVar14 & 0x1f)) |
                               ((uint)bVar8 << 8 | (uint)bVar7 << 0x10 |
                               (uint)bVar9 | (uint)bVar11 << 0x18) << (ulong)uVar22) >>
                              (ulong)(0x24 - uVar16 & 0x1f)) * 0x10;
          }
          lVar26 = param_1 + 0x1ebc;
          uVar14 = *(uint *)(param_1 + 8000);
          uVar16 = ((uint)*(byte *)(lVar27 + lVar25 + 2) | (uint)*(byte *)(lVar27 + lVar25) << 0x10
                   | (uint)*(byte *)(lVar27 + lVar25 + 1) << 8) >> (ulong)(8 - uVar15 & 0x1f) &
                   0xfffe;
          if (uVar16 < *(uint *)(lVar26 + (ulong)uVar14 * 4 + 4)) {
            uVar17 = (ulong)(uVar16 >> (ulong)(0x10 - uVar14 & 0x1f));
            uVar15 = *(byte *)(lVar26 + uVar17 + 0x88) + uVar15;
            uVar14 = iVar24 + (uint)*(ushort *)(lVar26 + uVar17 * 2 + 0x488);
            *piVar1 = iVar4 + (uVar15 >> 3);
            *(uint *)(param_1 + 0xc) = uVar15 & 7;
          }
          else {
            uVar14 = uVar14 + 1;
            if (uVar14 < 0xf) {
              lVar26 = param_1 + (ulong)uVar14 * 4;
              do {
                puVar23 = (uint *)(lVar26 + 0x1ec0);
                lVar26 = lVar26 + 4;
                if (uVar16 < *puVar23) {
                  uVar21 = uVar14 - 1;
                  uVar22 = 0x10 - uVar14;
                  goto LAB_7100788640;
                }
                uVar14 = uVar14 + 1;
              } while (uVar14 != 0xf);
              uVar22 = 1;
              uVar21 = 0xe;
            }
            else {
              uVar22 = 1;
              uVar21 = 0xe;
              uVar14 = 0xf;
            }
LAB_7100788640:
            puVar23 = (uint *)(param_1 + 0x1ebc);
            *piVar1 = iVar4 + (uVar14 + uVar15 >> 3);
            *(uint *)(param_1 + 0xc) = uVar14 + uVar15 & 7;
            uVar14 = (uVar16 - puVar23[(ulong)uVar21 + 1] >> (ulong)(uVar22 & 0x1f)) +
                     puVar23[(ulong)uVar14 + 0x11];
            if (*puVar23 <= uVar14) {
              uVar14 = 0;
            }
            uVar14 = iVar24 + (uint)*(ushort *)((long)puVar23 + (ulong)uVar14 * 2 + 0xc88);
          }
        }
        if (0x100 < uVar14) {
          if (uVar14 < 0x2001) {
            iVar19 = iVar19 + 1;
          }
          else {
            if (0x40000 < uVar14) {
              iVar19 = iVar19 + 1;
            }
            iVar19 = iVar19 + 2;
          }
        }
      }
      uVar3 = *(undefined4 *)(param_1 + 0x98);
      uVar5 = *(undefined4 *)(param_1 + 0x9c);
      *(int *)(param_1 + 0xac) = iVar19;
      uVar6 = *(undefined4 *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0x98) = uVar14;
      *(undefined4 *)(param_1 + 0x9c) = uVar3;
      cVar13 = *(char *)(param_1 + 0x4d90);
      *(undefined4 *)(param_1 + 0xa0) = uVar5;
      *(undefined4 *)(param_1 + 0xa4) = uVar6;
joined_r0x0071007882e8:
      if (cVar13 == '\0') {
LAB_7100788484:
        FUN_7100780ce0(param_1,iVar19,uVar14);
      }
      else {
        FUN_7100783280(param_1 + 0x4b90,iVar19,uVar14,param_1 + 0xb8,
                       *(undefined8 *)(param_1 + 0xe950));
      }
    }
    goto LAB_7100787f20;
  }
  FUN_7100783af0(param_1,param_2);
  cVar13 = FUN_7100782380(param_1);
  if (cVar13 != '\0') {
    cVar13 = FUN_7100782ea0(param_1,param_1 + 8,param_1 + 0xd0);
    if (((cVar13 != '\0') &&
        (cVar13 = FUN_71007859e0(param_1,param_1 + 8,param_1 + 0xd0,param_1 + 0xe4), cVar13 != '\0')
        ) && (*(char *)(param_1 + 0xe886) != '\0')) goto LAB_7100787f08;
  }
  return;
}



// ===== FUN_7100788850 @ 7100788850 (size=128) =====

void FUN_7100788850(long param_1,uint param_2,undefined1 param_3)

{
  if (param_2 == 0x1d) {
    if (*(char *)(param_1 + 0x4d90) == '\0') {
      FUN_7100786be0(param_1,param_3);
      return;
    }
  }
  else if (param_2 < 0x1e) {
    if ((param_2 == 0x14) || (param_2 == 0x1a)) {
      if (*(char *)(param_1 + 0x4d90) == '\0') {
        FUN_7100784760(param_1,param_3);
        return;
      }
    }
    else if ((param_2 == 0xf) && (*(char *)(param_1 + 0x4d90) == '\0')) {
      FUN_7100783ba0(param_1,param_3);
      return;
    }
  }
  else if (param_2 == 0x32) {
    FUN_7100787ee0(param_1,param_3);
    return;
  }
  return;
}



// ===== FUN_71007888d0 @ 71007888d0 (size=1584) =====

undefined1 FUN_71007888d0(long *param_1,long param_2)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined1 uVar11;
  long lVar12;
  undefined8 local_5030;
  long *local_5018;
  undefined1 auStack_5000 [2048];
  undefined1 auStack_4800 [2048];
  undefined1 auStack_4000 [8192];
  long local_2000;
  long *local_1ff8;
  undefined *local_1ff0;
  undefined *local_1fe8;
  undefined *local_1fe0;
  undefined *local_1fd8;
  undefined *local_1fd0;
  undefined *local_1fc8;
  undefined8 local_1fc0;
  undefined8 uStack_1fb8;
  undefined8 local_1fb0;
  undefined8 uStack_1fa8;
  undefined8 local_1fa0;
  undefined4 local_1f98;
  
  iVar8 = *(int *)((long)param_1 + 0x3a34);
  lVar12 = param_1[0x744];
  if (iVar8 == 3) {
    local_5018 = param_1 + 0x12f8;
LAB_7100788c5c:
    cVar3 = *(char *)((long)local_5018 + 0x20a9);
    if (cVar3 == '\0') goto LAB_7100788930;
    if (param_2 == 0) {
      cVar6 = *(char *)((long)param_1 + 0xdec4);
      local_5030 = (**(code **)(*param_1 + 0x30))(param_1);
      goto LAB_7100788960;
    }
    if (((int)param_1[0x1bd7] == 3) ||
       ((0x13 < *(uint *)((long)local_5018 + 0x1c) && (*(int *)((long)local_5018 + 0x2084) != -1))))
    {
      lVar10 = (long)local_5018 + 0x20db;
      if (*(char *)((long)local_5018 + 0x20da) == '\0') {
        lVar10 = 0;
      }
      cVar6 = FUN_710077c8e0(param_2 + 0xd8,local_5018 + 0x410,lVar10);
      if (cVar6 == '\0') {
        local_1fc0 = 0;
        uStack_1fb8 = 0;
        local_1ff0 = &DAT_71009952f8;
        local_1fe8 = &DAT_71009952f8;
        local_1fe0 = &DAT_71009952f8;
        local_1fd8 = &DAT_71009952f8;
        local_1ff8 = local_5018 + 5;
        local_1fd0 = &DAT_71009952f8;
        local_1fc8 = &DAT_71009952f8;
        local_1fb0 = 0;
        uStack_1fa8 = 0;
        local_1fa0 = 2;
        local_1f98 = 5;
        local_2000 = (long)param_1 + 0x34;
        FUN_710077edd0(&local_2000);
      }
    }
    cVar6 = *(char *)((long)param_1 + 0xdec4);
    local_5030 = (**(code **)(*param_1 + 0x30))(param_1);
  }
  else {
    local_5018 = param_1 + 0xa8b;
    if (iVar8 - 2U < 2) goto LAB_7100788c5c;
LAB_7100788930:
    cVar3 = '\0';
    cVar6 = *(char *)((long)param_1 + 0xdec4);
    local_5030 = (**(code **)(*param_1 + 0x30))(param_1);
    if (param_2 == 0) goto LAB_7100788960;
  }
  *(long *)(param_2 + 0xc0) = *(long *)(param_2 + 0xc0) + *(long *)(param_2 + 200);
LAB_7100788960:
  lVar10 = (long)param_1 + 0x34;
  bVar4 = false;
  (**(code **)(*param_1 + 0x18))(param_1);
  FUN_710077e5f0(auStack_4000,lVar10,0x800);
  FUN_710077d520(auStack_4000,0x800,*(byte *)((long)param_1 + 0xdec2) ^ 1);
  bVar2 = *(byte *)(lVar12 + 0xe2c5);
  cVar5 = (**(code **)(*param_1 + 0x10))(param_1,auStack_4000,(ulong)bVar2 << 2);
  do {
    if (cVar5 != '\0') {
LAB_7100788ab4:
      FUN_710078a5e0(param_1,1);
      FUN_710077ee10(auStack_4000,&local_2000,0x800);
      if (((*(code **)(lVar12 + 0x14818) == (code *)0x0) ||
          ((iVar7 = (**(code **)(lVar12 + 0x14818))
                              (3,*(undefined8 *)(lVar12 + 0x14810),auStack_4000,1), iVar7 != -1 &&
           (iVar7 = (**(code **)(lVar12 + 0x14818))
                              (0,*(undefined8 *)(lVar12 + 0x14810),&local_2000,1), iVar7 != -1))))
         && ((*(code **)(lVar12 + 84000) == (code *)0x0 ||
             (iVar7 = (**(code **)(lVar12 + 84000))(&local_2000,1), iVar7 != 0)))) {
        if (*(char *)((long)param_1 + 0xdec4) != cVar6) {
          FUN_7100779430(0x39,lVar10);
          FUN_7100778a30(&DAT_7100d1bd98,2);
        }
        if (cVar3 == '\0') {
          FUN_710078cce0(param_1);
          iVar7 = *(int *)((long)param_1 + 0x3a34);
        }
        else {
          FUN_710078cd90(param_1,iVar8);
          iVar7 = *(int *)((long)param_1 + 0x3a34);
        }
        if (iVar7 == 2) {
          FUN_710078b130(param_1);
          (**(code **)(*param_1 + 0x28))(param_1,param_1[0x1bd6] - param_1[0xe98],0);
        }
        uVar11 = 1;
        if (param_2 != 0) {
          if (iVar8 == 5) {
            *(undefined1 *)(param_2 + 0x99) = 0;
          }
          else {
            lVar10 = local_5018[0x40d];
            uVar11 = *(undefined1 *)((long)local_5018 + 0x20a9);
            *(long *)(param_2 + 0x40) = lVar10;
            *(long *)(param_2 + 0x48) = lVar10;
            *(undefined1 *)(param_2 + 0x99) = uVar11;
          }
          FUN_710077e190(param_2,param_1);
          uVar11 = 1;
          uVar1 = *(undefined4 *)(lVar12 + 0x12800);
          lVar12 = local_5018[0x410];
          *(undefined8 *)(param_2 + 0xb0) = 0;
          FUN_710077c6f0(param_2 + 0xd8,(int)lVar12,uVar1);
        }
      }
      else {
        uVar11 = 0;
      }
      return uVar11;
    }
    if (param_2 != 0) {
      *(undefined8 *)(param_2 + 0xd0) = 0;
    }
    if (!bVar4) {
      FUN_710077e5f0(&local_2000,lVar10,0x800);
      FUN_710077d520(&local_2000,0x800,1);
      cVar5 = (**(code **)(*param_1 + 0x10))(param_1,&local_2000,(ulong)bVar2 << 2);
      if (cVar5 != '\0') {
        FUN_710077e5f0(auStack_4000,&local_2000,0x800);
        goto LAB_7100788ab4;
      }
    }
    if (*(long *)(lVar12 + 0x14818) == 0) {
      if (*(long *)(lVar12 + 84000) == 0) goto LAB_7100788be0;
LAB_7100788d50:
      FUN_710077ee10(auStack_4000,&local_2000,0x800);
      iVar7 = (**(code **)(lVar12 + 84000))(&local_2000,0);
      if (iVar7 == 0) goto LAB_7100788be0;
      FUN_710077f030(&local_2000,auStack_4000,0x800);
LAB_7100788a80:
      if (*(long *)(lVar12 + 0x14818) == 0) {
        lVar9 = *(long *)(lVar12 + 84000);
        goto joined_r0x007100788de8;
      }
    }
    else {
      FUN_710077e5f0(&local_2000,auStack_4000,0x800);
      iVar7 = (**(code **)(lVar12 + 0x14818))(3,*(undefined8 *)(lVar12 + 0x14810),auStack_4000,0);
      if (iVar7 == -1) {
LAB_7100788d08:
        if (*(long *)(lVar12 + 84000) != 0) {
          FUN_710077ee10(auStack_4000,&local_2000,0x800);
          iVar8 = (**(code **)(lVar12 + 84000))(&local_2000,0);
          if (iVar8 != 0) {
            FUN_710077f030(&local_2000,auStack_4000,0x800);
          }
        }
        goto LAB_7100788be0;
      }
      iVar7 = FUN_710080c900(&local_2000,auStack_4000);
      if (iVar7 != 0) goto LAB_7100788a80;
      FUN_710077ee10(auStack_4000,auStack_5000,0x800);
      FUN_710077e590(auStack_4800,auStack_5000,0x800);
      iVar7 = (**(code **)(lVar12 + 0x14818))(0,*(undefined8 *)(lVar12 + 0x14810),auStack_5000,0);
      if (iVar7 == -1) goto LAB_7100788d08;
      iVar7 = FUN_710080aec0(auStack_4800,auStack_5000);
      if (iVar7 != 0) {
        FUN_710077f030(auStack_5000,auStack_4000,0x800);
        goto LAB_7100788a80;
      }
      if (*(long *)(lVar12 + 84000) != 0) goto LAB_7100788d50;
      lVar9 = *(long *)(lVar12 + 0x14818);
joined_r0x007100788de8:
      if (lVar9 == 0) {
LAB_7100788be0:
        *(undefined4 *)(lVar12 + 0x14808) = 0xf;
        FUN_7100779430(0x45,auStack_4000);
        (**(code **)(*param_1 + 0x10))(param_1,lVar10,(ulong)bVar2 << 2);
        (**(code **)(*param_1 + 0x28))(param_1,local_5030,0);
        return 0;
      }
    }
    bVar4 = true;
    cVar5 = (**(code **)(*param_1 + 0x10))(param_1,auStack_4000,(ulong)bVar2 << 2);
  } while( true );
}



// ===== FUN_7100788f00 @ 7100788f00 (size=216) =====

void FUN_7100788f00(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_7100aec308;
  if ((*(char *)(param_1 + 0x743) != '\0') && (lVar1 = param_1[0x744], lVar1 != 0)) {
    FUN_710077cdc0(lVar1);
    thunk_FUN_710081c200(lVar1,0x14830);
  }
  lVar1 = param_1[0x16fd];
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x1701) != '\0') {
      FUN_710077e260(lVar1,param_1[0x16ff]);
      lVar1 = param_1[0x16fd];
    }
    FUN_710081c200(lVar1);
  }
  lVar1 = param_1[0xe90];
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0xe94) != '\0') {
      FUN_710077e260(lVar1,param_1[0xe92]);
      lVar1 = param_1[0xe90];
    }
    FUN_710081c200(lVar1);
  }
  FUN_7100790dc0(param_1 + 0x748);
  FUN_710077db90(param_1 + 0x721);
  FUN_710078f9f0(param_1 + 0x407);
  FUN_710077b390(param_1);
  return;
}



// ===== FUN_7100788fe0 @ 7100788fe0 (size=40) =====

void FUN_7100788fe0(undefined8 param_1)

{
  FUN_7100788f00();
  thunk_FUN_710081c200(param_1,0xff08);
  return;
}



// ===== FUN_7100789010 @ 7100789010 (size=208) =====

ulong FUN_7100789010(char *param_1,ulong param_2)

{
  char cVar1;
  
  if ((param_2 != 0) && (*param_1 == 'R')) {
    if ((param_2 < 4) || (param_1[1] != 'E')) {
      if ((((6 < param_2) && (param_1[1] == 'a')) && (param_1[2] == 'r')) &&
         (((param_1[3] == '!' && (param_1[4] == '\x1a')) && (param_1[5] == '\a')))) {
        cVar1 = param_1[6];
        if (cVar1 == '\0') {
          return 2;
        }
        if (cVar1 != '\x01') {
          return (ulong)((byte)(cVar1 - 2U) < 3) << 2;
        }
        return 3;
      }
    }
    else if (param_1[2] == '~') {
      return (ulong)(param_1[3] == '^');
    }
  }
  return 0;
}



// ===== FUN_71007890e0 @ 71007890e0 (size=60) =====

long FUN_71007890e0(long param_1,long param_2)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0xdec4) != '\0') {
    lVar1 = (-param_2 & 0xfU) + param_2;
    param_2 = lVar1 + 8;
    if (*(int *)(param_1 + 0xdeb8) == 3) {
      param_2 = lVar1 + 0x10;
    }
  }
  return param_2;
}



// ===== FUN_7100789120 @ 7100789120 (size=408) =====

void FUN_7100789120(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  
  FUN_710077b1f0();
  *param_1 = &PTR_FUN_7100aec308;
  FUN_710078f830(param_1 + 0x407);
  FUN_710077dac0(param_1 + 0x721);
  param_1[0x745] = 0;
  FUN_7100790e40(param_1 + 0x748);
  param_1[0xe90] = 0;
  param_1[0xe91] = 0;
  *(undefined1 *)(param_1 + 0xe94) = 0;
  param_1[0xe92] = 0;
  param_1[0xe93] = 0;
  param_1[0xe95] = 0;
  param_1[0xe96] = 0;
  param_1[0xe97] = 0;
  param_1[0x16fd] = 0;
  param_1[0x16fe] = 0;
  param_1[0x16ff] = 0;
  param_1[0x1700] = 0;
  *(undefined1 *)(param_1 + 0x1701) = 0;
  param_1[0x1702] = 0;
  param_1[0x1703] = 0;
  param_1[0x1704] = 0;
  param_1[0x744] = 0;
  *(bool *)(param_1 + 0x743) = param_2 == 0;
  if (param_2 == 0) {
    param_2 = FUN_71007af5c0(0x14830);
    FUN_710077ce70();
  }
  param_1[0x744] = param_2;
  uVar1 = *(undefined1 *)(param_2 + 0xe2c5);
  param_1[0x745] = 0;
  *(undefined1 *)(param_1 + 6) = uVar1;
  param_1[0x1bd9] = 0;
  *(undefined2 *)(param_1 + 0x1bda) = 0;
  *(undefined4 *)(param_1 + 0x746) = 0;
  param_1[0x1bd5] = 0;
  param_1[0x1bd6] = 0;
  param_1[0x1bd7] = 2;
  *(undefined4 *)(param_1 + 0x1bd8) = 0;
  *(undefined1 *)((long)param_1 + 0xdec4) = 0;
  param_1[0xa7d] = 0;
  param_1[0xa7c] = 0;
  param_1[0xa7f] = 0;
  param_1[0xa7e] = 0;
  param_1[0xa81] = 0;
  param_1[0xa80] = 0;
  param_1[0xa83] = 0;
  param_1[0xa82] = 0;
  param_1[0xa85] = 0;
  param_1[0xa84] = 0;
  param_1[0xa87] = 0;
  param_1[0xa86] = 0;
  param_1[0xa89] = 0;
  param_1[0xa88] = 0;
  *(undefined4 *)(param_1 + 0xa8a) = 0;
  param_1[0x12f0] = 0;
  param_1[0x12f1] = 0;
  param_1[0x12f2] = 0;
  param_1[0x12f3] = 0;
  *(undefined4 *)((long)param_1 + 0xdee4) = 0;
  param_1[0x1bdd] = 0;
  param_1[0x1bde] = 0;
  param_1[0x1bdf] = 0;
  *(undefined4 *)((long)param_1 + 0xdf04) = 0;
  *(undefined1 *)((long)param_1 + 0xdee2) = 0;
  *(undefined1 *)(param_1 + 0x1be0) = 0;
  *(undefined1 *)(param_1 + 0x747) = 0;
  *(undefined1 *)(param_1 + 0xa77) = 0;
  return;
}



// ===== FUN_7100789330 @ 7100789330 (size=348) =====

uint FUN_7100789330(long param_1,long *param_2)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long local_28;
  ulong local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  char local_8;
  
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  local_8 = '\0';
  uVar2 = FUN_710078cf00(param_1,&local_28,0,0);
  uVar4 = local_20;
  if ((uVar2 & 0xff) == 0) goto LAB_7100789378;
  FUN_7100785e50(&local_28,1);
  uVar1 = uVar4 + 1;
  *(undefined1 *)(local_28 + local_20 + -1) = 0;
  if ((ulong)param_2[2] < uVar1) {
    FUN_7100777680(param_2,uVar1 - param_2[1]);
  }
  else {
    param_2[1] = uVar1;
  }
  lVar3 = *param_2;
  if (*(int *)(param_1 + 0xdeb8) == 3) {
    FUN_710077f3e0(local_28,lVar3,param_2[1]);
LAB_710078944c:
    uVar4 = FUN_710081f600(*param_2);
    if (uVar4 <= (ulong)param_2[2]) {
LAB_7100789464:
      param_2[1] = uVar4;
      goto LAB_7100789378;
    }
  }
  else {
    if ((*(uint *)(param_1 + 0x97e4) & 1) == 0) {
      FUN_710077f030(local_28,lVar3,param_2[1]);
      goto LAB_710078944c;
    }
    uVar4 = uVar4 >> 1;
    FUN_710077f230(local_28,lVar3,uVar4);
    *(undefined4 *)(*param_2 + uVar4 * 4) = 0;
    uVar4 = FUN_710081f600();
    if (uVar4 <= (ulong)param_2[2]) goto LAB_7100789464;
  }
  FUN_7100777680(param_2,uVar4 - param_2[1]);
LAB_7100789378:
  if (local_28 != 0) {
    if (local_8 != '\0') {
      FUN_710077e260(local_28,local_18);
    }
    FUN_710081c200(local_28);
  }
  return uVar2;
}



// ===== FUN_71007894a0 @ 71007894a0 (size=16) =====

void FUN_71007894a0(long param_1)

{
  *(undefined1 *)(param_1 + 0x5340) = 0;
  FUN_710077af50();
  return;
}



// ===== FUN_71007894b0 @ 71007894b0 (size=104) =====

ulong FUN_71007894b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  ulong uVar2;
  uint local_8 [2];
  
  cVar1 = FUN_7100791550(param_1 + 0x3a40,param_2,param_3,local_8);
  if (cVar1 != '\0') {
    return (ulong)local_8[0];
  }
  uVar2 = FUN_710077be90(param_1,param_2,param_3);
  return uVar2;
}



// ===== FUN_7100789520 @ 7100789520 (size=92) =====

void FUN_7100789520(long param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_71007916d0(param_1 + 0x3a40);
  if (cVar1 != '\0') {
    return;
  }
  FUN_710077b9f0(param_1,param_2,param_3);
  return;
}



// ===== FUN_7100789580 @ 7100789580 (size=136) =====

void FUN_7100789580(long *param_1)

{
  char cVar1;
  long lVar2;
  
  lVar2 = param_1[0x1bd6];
  if (*(code **)(*param_1 + 0x28) != FUN_7100789520) {
                    /* WARNING: Could not recover jumptable at 0x007100789604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1,lVar2,0);
    return;
  }
  cVar1 = FUN_71007916d0(param_1 + 0x748,lVar2,0);
  if (cVar1 != '\0') {
    return;
  }
  FUN_710077b9f0(param_1,lVar2,0);
  return;
}



// ===== FUN_7100789610 @ 7100789610 (size=1612) =====

ulong FUN_7100789610(long *param_1,undefined8 *param_2)

{
  ushort uVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  code *pcVar11;
  ulong uVar12;
  undefined8 local_ea78;
  long local_ea70;
  uint local_ea68 [16];
  ulong local_ea28;
  ulong uStack_ea20;
  undefined1 local_ea18;
  undefined1 local_ea17;
  undefined1 local_ea15;
  undefined1 auStack_e970 [24];
  long local_e958;
  ulong local_e950;
  ulong local_e948;
  undefined8 uStack_e940;
  char local_e938;
  ulong local_9bc0;
  undefined1 local_9ba8;
  
  pcVar11 = *(code **)(*param_1 + 0x28);
  if ((int)param_1[0x1bd7] == 1) {
    lVar8 = param_1[0x1bd9] + 7;
    if (pcVar11 == FUN_7100789520) {
      cVar2 = FUN_71007916d0(param_1 + 0x748,lVar8,0);
      if (cVar2 == '\0') {
        FUN_710077b9f0(param_1,lVar8,0);
      }
    }
    else {
      (*pcVar11)(param_1,lVar8,0);
    }
    uVar5 = FUN_710077beb0(param_1);
    uVar6 = FUN_710077beb0(param_1);
    uVar5 = (uVar6 & 0xff) * 0x100 + (uVar5 & 0xff);
  }
  else {
    if (*(char *)((long)param_1 + 0x53fc) == '\0') {
      uVar9 = FUN_710078b1f0();
      if (pcVar11 == FUN_7100789520) {
        cVar2 = FUN_71007916d0(param_1 + 0x748,uVar9,0);
        if (cVar2 == '\0') {
          FUN_710077b9f0(param_1,uVar9,0);
        }
      }
      else {
        (*pcVar11)(param_1,uVar9,0);
      }
      lVar8 = FUN_710078ce40(param_1,&DAT_7100995310);
      if (lVar8 == 0) {
        return 0;
      }
      uVar12 = FUN_7100789330(param_1,param_2);
      return uVar12;
    }
    lVar8 = param_1[0x1bd9] + 0x14;
    if (pcVar11 == FUN_7100789520) {
      cVar2 = FUN_71007916d0(param_1 + 0x748,lVar8,0);
      if (cVar2 == '\0') {
        FUN_710077b9f0(param_1,lVar8,0);
      }
    }
    else {
      (*pcVar11)(param_1,lVar8,0);
    }
    lVar8 = FUN_710078cce0(param_1);
    if (lVar8 == 0) {
      return 0;
    }
    if (*(int *)((long)param_1 + 0x3a34) != 0x75) {
      return 0;
    }
    if (((char)param_1[0x1bda] != '\0') ||
       (uVar5 = *(uint *)((long)param_1 + 0xdaf4) - 0xd, *(uint *)((long)param_1 + 0xdaf4) < 0xd)) {
      FUN_7100779430(0x3a,(long)param_1 + 0x34);
      return 0;
    }
  }
  uVar12 = (ulong)uVar5;
  if ((int)param_1[0x1bd7] == 1) {
    if (*(char *)((long)param_1 + 0x53fd) == '\0') goto LAB_710078996c;
  }
  else {
    if (*(byte *)((long)param_1 + 0xdaff) == 0x30) {
LAB_710078996c:
      if (uVar5 == 0) {
        return 0;
      }
      local_e958 = 0;
      local_e950 = 0;
      local_e948 = 0;
      uStack_e940 = 0;
      local_e938 = '\0';
      FUN_7100785e50(&local_e958,uVar5);
      lVar8 = local_e958;
      if (*(code **)(*param_1 + 0x20) == FUN_71007894b0) {
        cVar2 = FUN_7100791550(param_1 + 0x748,local_e958,uVar5,local_ea68);
        if (cVar2 == '\0') {
          local_ea68[0] = FUN_710077be90(param_1,lVar8,uVar5);
        }
      }
      else {
        local_ea68[0] = (**(code **)(*param_1 + 0x20))(param_1,local_e958,uVar5);
      }
      if (-1 < (int)local_ea68[0] && local_ea68[0] < uVar5) {
        uVar10 = (ulong)local_ea68[0];
        if (local_e948 < uVar10) {
          FUN_7100785e50(&local_e958,uVar10 - local_e950);
          uVar12 = (ulong)local_ea68[0];
        }
        else {
          uVar12 = (ulong)local_ea68[0];
          local_e950 = uVar10;
        }
      }
      lVar8 = local_e958;
      if (((int)param_1[0x1bd7] != 1) &&
         (uVar1 = *(ushort *)(param_1 + 0x1b60),
         uVar4 = FUN_710078e3a0(0xffffffff,local_e958,uVar12), uVar1 != (ushort)~uVar4)) {
        FUN_7100779430(0x3a,(long)param_1 + 0x34);
        if (lVar8 == 0) {
          return 0;
        }
        if (local_e938 != '\0') {
          FUN_710077e260(lVar8,local_e948);
        }
        FUN_710081c200(lVar8);
        return 0;
      }
      uVar12 = (ulong)((int)uVar12 + 1);
      if ((ulong)param_2[2] < uVar12) {
        FUN_7100777680(param_2,uVar12 - param_2[1]);
      }
      else {
        param_2[1] = uVar12;
      }
      FUN_7100785e50(&local_e958,1);
      lVar8 = local_e958;
      *(undefined1 *)(local_e958 + local_e950 + -1) = 0;
      FUN_710077f030(local_e958,*param_2,param_2[1]);
      uVar12 = FUN_710081f600(*param_2);
      if ((ulong)param_2[2] < uVar12) {
        FUN_7100777680(param_2,uVar12 - param_2[1]);
      }
      else {
        param_2[1] = uVar12;
      }
      if (lVar8 != 0) {
        if (local_e938 != '\0') {
          FUN_710077e260(lVar8,local_e948);
        }
        FUN_710081c200(lVar8);
      }
      goto LAB_7100789920;
    }
    if (0xe < (byte)(*(char *)((long)param_1 + 0xdafe) - 0xfU)) {
      return 0;
    }
    if (0x35 < *(byte *)((long)param_1 + 0xdaff)) {
      return 0;
    }
  }
  FUN_710077dac0(local_ea68);
  local_ea17 = 1;
  if ((int)param_1[0x1bd7] == 1) {
    uVar6 = FUN_710077beb0(param_1);
    uVar7 = FUN_710077beb0(param_1);
    if (uVar5 < 2) goto LAB_7100789aa8;
    uVar12 = (ulong)(uVar5 - 2);
    FUN_710077e160(local_ea68);
    local_9bc0 = (ulong)((uVar6 & 0xff) + (uVar7 & 0xff) * 0x100);
    *(undefined1 *)((long)param_1 + 0xdafe) = 0xf;
  }
  else {
    local_9bc0 = (ulong)*(ushort *)((long)param_1 + 0xdafc);
  }
  FUN_710077e0b0(local_ea68,param_1,0);
  local_ea18 = 0;
  local_ea28 = uVar12;
  uStack_ea20 = uVar12;
  FUN_710077c6f0(auStack_e970,2,1);
  local_ea15 = 1;
  FUN_7100785c30(&local_e958,local_ea68);
  FUN_7100783930(&local_e958,0x10000,0);
  local_9ba8 = 0;
  FUN_7100788850(&local_e958,*(undefined1 *)((long)param_1 + 0xdafe),0);
  if (((int)param_1[0x1bd7] == 1) ||
     (sVar3 = FUN_710077c8c0(auStack_e970), (short)param_1[0x1b60] == sVar3)) {
    FUN_710077e0d0(local_ea68,&local_ea78,&local_ea70);
    if (local_ea70 != 0) {
      uVar12 = local_ea70 + 1;
      if ((ulong)param_2[2] < uVar12) {
        FUN_7100777680(param_2,uVar12 - param_2[1]);
        uVar12 = param_2[1];
      }
      else {
        param_2[1] = uVar12;
      }
      FUN_7100808340(*param_2,0,uVar12 << 2);
      FUN_710077f030(local_ea78,*param_2,param_2[1]);
      uVar12 = FUN_710081f600(*param_2);
      if ((ulong)param_2[2] < uVar12) {
        FUN_7100777680(param_2,uVar12 - param_2[1]);
      }
      else {
        param_2[1] = uVar12;
      }
    }
    FUN_71007837d0(&local_e958);
    FUN_710077db90(local_ea68);
LAB_7100789920:
    return (ulong)(param_2[1] != 0);
  }
  FUN_7100779430(0x3a,(long)param_1 + 0x34);
  FUN_71007837d0(&local_e958);
LAB_7100789aa8:
  FUN_710077db90(local_ea68);
  return 0;
}



// ===== FUN_7100789ca0 @ 7100789ca0 (size=76) =====

undefined8 FUN_7100789ca0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_8;
  
  cVar1 = FUN_7100790e20(param_1 + 0x3a40,&local_8);
  if (cVar1 != '\0') {
    return local_8;
  }
  uVar2 = FUN_710077b0e0(param_1);
  return uVar2;
}



// ===== FUN_7100789cf0 @ 7100789cf0 (size=276) =====

char FUN_7100789cf0(long *param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  undefined8 local_8;
  
  cVar1 = *(char *)((long)param_1 + 0xdebe);
  if (cVar1 != '\0') {
    if (*(code **)(*param_1 + 0x30) == FUN_7100789ca0) {
      cVar1 = FUN_7100790e20(param_1 + 0x748,&local_8);
      if (cVar1 == '\0') {
        local_8 = FUN_710077b0e0(param_1);
      }
    }
    else {
      local_8 = (**(code **)(*param_1 + 0x30))();
    }
    cVar1 = FUN_7100789610(param_1,param_2);
    if (*(code **)(*param_1 + 0x28) != FUN_7100789520) {
      (**(code **)(*param_1 + 0x28))(param_1,local_8,0);
      return cVar1;
    }
    cVar2 = FUN_71007916d0(param_1 + 0x748,local_8,0);
    if (cVar2 == '\0') {
      FUN_710077b9f0(param_1,local_8,0);
      return cVar1;
    }
  }
  return cVar1;
}



// ===== FUN_7100789e10 @ 7100789e10 (size=1968) =====

char FUN_7100789e10(long *param_1,char param_2)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  uint uVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long local_90;
  long local_70;
  long lStack_68;
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
  
  *(undefined1 *)((long)param_1 + 0xdec4) = 0;
  *(undefined1 *)(param_1 + 0x1bda) = 0;
  cVar4 = FUN_710077bf20();
  if (cVar4 != '\0') {
    local_30 = 0;
    uStack_28 = 0;
    local_70 = (long)param_1 + 0x34;
    local_60 = &DAT_71009952f8;
    puStack_58 = &DAT_71009952f8;
    local_50 = &DAT_71009952f8;
    puStack_48 = &DAT_71009952f8;
    local_40 = &DAT_71009952f8;
    puStack_38 = &DAT_71009952f8;
    local_20 = 0;
    uStack_18 = 0;
    local_10 = 2;
    local_8 = 0x3b;
    lStack_68 = local_70;
    FUN_710077edd0(&local_70);
    return '\0';
  }
  plVar1 = param_1 + 0xa7a;
  if (*(code **)(*param_1 + 0x20) == FUN_71007894b0) {
    cVar4 = FUN_7100791550(param_1 + 0x748,plVar1,7,&local_70);
    if (cVar4 == '\0') {
      iVar6 = FUN_710077be90(param_1,plVar1,7);
    }
    else {
      iVar6 = (int)local_70;
    }
  }
  else {
    iVar6 = (**(code **)(*param_1 + 0x20))(param_1,plVar1,7);
  }
  if (iVar6 != 7) {
    return '\0';
  }
  param_1[0x1bd9] = 0;
  iVar6 = FUN_7100789010(plVar1,7);
  if (iVar6 == 0) {
    lVar8 = FUN_710081c1c0(0x200000);
    if (lVar8 == 0) {
      FUN_7100778a60(&DAT_7100d1bd98);
    }
    if (*(code **)(*param_1 + 0x30) == FUN_7100789ca0) {
      cVar4 = FUN_7100790e20(param_1 + 0x748,&local_70);
      if (cVar4 == '\0') {
        local_90 = FUN_710077b0e0(param_1);
      }
      else {
        local_90 = local_70;
      }
    }
    else {
      local_90 = (**(code **)(*param_1 + 0x30))(param_1);
    }
    if (*(code **)(*param_1 + 0x20) == FUN_71007894b0) {
      cVar4 = FUN_7100791550(param_1 + 0x748,lVar8,0x1ffff0,&local_70);
      if (cVar4 == '\0') {
        iVar6 = FUN_710077be90(param_1,lVar8,0x1ffff0);
      }
      else {
        iVar6 = (int)local_70;
      }
    }
    else {
      iVar6 = (**(code **)(*param_1 + 0x20))(param_1,lVar8,0x1ffff0);
    }
    lVar13 = 0;
    lVar14 = lVar8 - local_90;
    if (0 < iVar6) {
      do {
        iVar3 = (int)lVar13;
        if (((*(char *)(lVar8 + lVar13) == 'R') &&
            (iVar7 = FUN_7100789010(lVar8 + lVar13,(long)(iVar6 - iVar3)), iVar7 != 0)) &&
           (((*(int *)(param_1 + 0x1bd7) = iVar7, iVar7 != 1 ||
             ((iVar3 < 1 || 0x1b < local_90) || iVar6 < 0x20)) ||
            ((((*(char *)(lVar14 + 0x1c) == 'R' && (*(char *)(lVar14 + 0x1d) == 'S')) &&
              (*(char *)(lVar14 + 0x1e) == 'F')) && (*(char *)(lVar14 + 0x1f) == 'X')))))) {
          local_90 = local_90 + iVar3;
          pcVar12 = *(code **)(*param_1 + 0x28);
          param_1[0x1bd9] = local_90;
          if (pcVar12 == FUN_7100789520) {
            cVar4 = FUN_71007916d0(param_1 + 0x748,local_90,0);
            if (cVar4 == '\0') {
              FUN_710077b9f0(param_1,local_90,0);
            }
          }
          else {
            (*pcVar12)(param_1,local_90,0);
          }
          if ((int)param_1[0x1bd7] - 2U < 2) {
            if (*(code **)(*param_1 + 0x20) == FUN_71007894b0) {
              cVar4 = FUN_7100791550(param_1 + 0x748,plVar1,7,&local_70);
              if (cVar4 == '\0') {
                FUN_710077be90(param_1,plVar1,7);
              }
              if (param_1[0x1bd9] == 0) goto LAB_710078a3ec;
              goto LAB_710078a254;
            }
            (**(code **)(*param_1 + 0x20))(param_1,plVar1,7);
          }
          break;
        }
        lVar13 = lVar13 + 1;
      } while ((int)lVar13 < iVar6);
    }
    if (param_1[0x1bd9] == 0) {
      if (lVar8 == 0) {
        return '\0';
      }
LAB_710078a3ec:
      FUN_710081c200(lVar8);
      return '\0';
    }
    if (lVar8 != 0) {
LAB_710078a254:
      FUN_710081c200(lVar8);
    }
LAB_710078a370:
    iVar6 = (int)param_1[0x1bd7];
  }
  else {
    *(int *)(param_1 + 0x1bd7) = iVar6;
    if (iVar6 == 1) {
      pcVar12 = *(code **)(*param_1 + 0x28);
      pcVar2 = *(code **)(*param_1 + 0x30);
      if (pcVar2 == FUN_7100789ca0) {
        cVar4 = FUN_7100790e20(param_1 + 0x748,&local_70);
        lVar8 = local_70;
        if (cVar4 == '\0') {
          lVar8 = FUN_710077b0e0(param_1);
        }
      }
      else {
        lVar8 = (*pcVar2)(param_1);
      }
      lVar8 = lVar8 + -7;
      if (pcVar12 == FUN_7100789520) {
        cVar4 = FUN_71007916d0(param_1 + 0x748,lVar8,0);
        if (cVar4 != '\0') goto LAB_710078a370;
        FUN_710077b9f0(param_1,lVar8,0);
        iVar6 = (int)param_1[0x1bd7];
      }
      else {
        (*pcVar12)(param_1,lVar8,0);
        iVar6 = (int)param_1[0x1bd7];
      }
    }
  }
  if (iVar6 == 4) {
    FUN_7100779430(0x3c,(long)param_1 + 0x34);
    return '\0';
  }
  uVar10 = 7;
  if (iVar6 == 3) {
    lVar8 = (long)param_1 + 0x53d7;
    if (*(code **)(*param_1 + 0x20) == FUN_71007894b0) {
      cVar4 = FUN_7100791550(param_1 + 0x748,lVar8,1,&local_70);
      if (cVar4 == '\0') {
        iVar6 = FUN_710077be90(param_1,lVar8,1);
      }
      else {
        iVar6 = (int)local_70;
      }
    }
    else {
      iVar6 = (**(code **)(*param_1 + 0x20))(param_1,lVar8,1);
    }
    if (iVar6 != 1) {
      return '\0';
    }
    if (*(char *)((long)param_1 + 0x53d7) != '\0') {
      return '\0';
    }
    uVar10 = 8;
  }
  lVar8 = *(long *)(param_1[0x744] + 0x14818);
  *(undefined4 *)(param_1 + 0xa7b) = uVar10;
  if (lVar8 == 0) {
    *(undefined1 *)(param_1 + 0x747) = 1;
  }
  while (lVar8 = FUN_710078cce0(param_1), lVar8 != 0) {
    FUN_7100789580(param_1);
    uVar11 = *(uint *)((long)param_1 + 0x3a34);
    if ((uVar11 == 1) || (uVar11 = (uint)(uVar11 == 4 & *(byte *)(param_1 + 0x747)), uVar11 != 0))
    goto LAB_7100789f74;
  }
  uVar11 = 0;
LAB_7100789f74:
  if (*(char *)((long)param_1 + 0xded1) == '\0') {
    if (((char)param_1[0x1bda] == '\0') && (uVar11 != 0)) goto LAB_7100789f98;
    FUN_7100779430(0x1b,(long)param_1 + 0x34);
  }
  if (param_2 == '\0') {
    return '\0';
  }
LAB_7100789f98:
  *(undefined1 *)((long)param_1 + 0xdebe) = *(undefined1 *)((long)param_1 + 0x53fc);
  if ((lVar8 != 0) &&
     ((((char)param_1[0x747] == '\0' || (*(char *)((long)param_1 + 0xdec4) == '\0')) &&
      (*(int *)((long)param_1 + 0x14) != 1)))) {
    if (*(code **)(*param_1 + 0x30) == FUN_7100789ca0) {
      cVar4 = FUN_7100790e20(param_1 + 0x748,&local_70);
      lVar8 = local_70;
      if (cVar4 == '\0') {
        lVar8 = FUN_710077b0e0(param_1);
      }
    }
    else {
      lVar8 = (**(code **)(*param_1 + 0x30))(param_1);
    }
    uVar10 = *(undefined4 *)((long)param_1 + 0x3a34);
    lVar14 = param_1[0x1bd5];
    lVar13 = param_1[0x1bd6];
    while (lVar9 = FUN_710078cce0(param_1), lVar9 != 0) {
      iVar6 = *(int *)((long)param_1 + 0x3a34);
      if (iVar6 == 3) {
        bVar5 = *(byte *)((long)param_1 + 0xdebd);
        if (bVar5 != 0) {
          bVar5 = *(byte *)(param_1 + 0x170d) ^ 1;
        }
        *(byte *)((long)param_1 + 0xdec1) = bVar5;
      }
      else {
        if (iVar6 == 2) {
          bVar5 = *(byte *)((long)param_1 + 0xdebd);
          if (bVar5 != 0) {
            bVar5 = *(byte *)(param_1 + 0xea0) ^ 1;
          }
          *(byte *)((long)param_1 + 0xdec1) = bVar5;
          break;
        }
        if (iVar6 == 5) break;
      }
      FUN_7100789580(param_1);
    }
    pcVar12 = *(code **)(*param_1 + 0x28);
    param_1[0x1bd5] = lVar14;
    param_1[0x1bd6] = lVar13;
    *(undefined4 *)((long)param_1 + 0x3a34) = uVar10;
    if (pcVar12 == FUN_7100789520) {
      cVar4 = FUN_71007916d0(param_1 + 0x748,lVar8,0);
      if (cVar4 == '\0') {
        FUN_710077b9f0(param_1,lVar8,0);
      }
    }
    else {
      (*pcVar12)(param_1,lVar8,0);
    }
  }
  cVar4 = *(char *)((long)param_1 + 0xdebd);
  if ((cVar4 == '\0') || (*(char *)((long)param_1 + 0xdec1) != '\0')) {
    FUN_710077e5f0((long)param_1 + 0xdf04,(long)param_1 + 0x34,0x800);
    cVar4 = '\x01';
  }
  return cVar4;
}



// ===== FUN_710078a5e0 @ 710078a5e0 (size=112) =====

void FUN_710078a5e0(long param_1)

{
  char cVar1;
  
  cVar1 = FUN_7100789e10();
  if (cVar1 != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0xded1) != '\0') {
    FUN_7100778a30(&DAT_7100d1bd98,2);
    return;
  }
  FUN_7100779430(0x39,param_1 + 0x34);
  FUN_7100778a30(&DAT_7100d1bd98,2);
  return;
}



// ===== FUN_710078a650 @ 710078a650 (size=288) =====

void FUN_710078a650(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = param_1[2];
  param_1[1] = param_2;
  if (param_2 <= uVar1) {
    return;
  }
  uVar3 = param_1[3];
  if ((uVar3 != 0 && uVar3 <= param_2) && (uVar3 == 0 || param_2 != uVar3)) {
    FUN_7100778ac0(&DAT_7100d1bd98,L"Maximum allowed array size (%u) is exceeded");
    FUN_7100778a60(&DAT_7100d1bd98);
    param_2 = param_1[1];
    uVar1 = param_1[2];
  }
  uVar1 = uVar1 + 0x20 + (uVar1 >> 2);
  if (uVar1 < param_2) {
    uVar1 = param_2;
  }
  if ((char)param_1[4] == '\0') {
    lVar2 = FUN_71008141e0(*param_1,uVar1);
    if (lVar2 == 0) {
      FUN_7100778a60(&DAT_7100d1bd98);
    }
  }
  else {
    lVar2 = FUN_710081c1c0(uVar1);
    if (lVar2 == 0) {
      FUN_7100778a60(&DAT_7100d1bd98);
    }
    lVar4 = *param_1;
    if (lVar4 != 0) {
      lVar5 = param_1[2];
      FUN_710080f900(lVar2,lVar4,lVar5);
      FUN_710077e260(lVar4,lVar5);
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



// ===== FUN_710078a770 @ 710078a770 (size=88) =====

void FUN_710078a770(long param_1,undefined8 param_2,undefined8 param_3)

{
  long local_70;
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
  
  local_70 = param_1 + 0x34;
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
  local_8 = 0x22;
  uStack_68 = param_2;
  local_60 = param_3;
  FUN_710077edd0(&local_70);
  FUN_71007788e0(&DAT_7100d1bd98,1);
  return;
}



// ===== FUN_710078a7d0 @ 710078a7d0 (size=1900) =====

void FUN_710078a7d0(long param_1,long param_2,long param_3)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint uVar13;
  int local_2028 [2];
  int local_2020 [8];
  undefined1 local_2000 [8192];
  
  if (1 < (ulong)(*(long *)(param_2 + 0x30) - *(long *)(param_2 + 0x38))) {
    do {
      while( true ) {
        lVar8 = FUN_71007922e0(param_2);
        if (lVar8 < 1) {
          return;
        }
        lVar10 = *(long *)(param_2 + 0x38);
        if (*(long *)(param_2 + 0x30) == lVar10) {
          return;
        }
        if (*(long *)(param_2 + 0x30) - lVar10 < lVar8) {
          return;
        }
        lVar8 = lVar8 + lVar10;
        uVar9 = FUN_71007922e0(param_2);
        uVar12 = lVar8 - *(long *)(param_2 + 0x38);
        if ((long)uVar12 < 0) {
          return;
        }
        iVar6 = *(int *)(param_3 + 4);
        if (uVar9 != 1 || iVar6 != 1) break;
        *(undefined1 *)(param_3 + 0x1e) = 1;
        uVar7 = FUN_71007922e0(param_2);
        if (((uVar7 & 1) != 0) && (lVar10 = FUN_71007922e0(param_2), lVar10 != 0)) {
          *(long *)(param_3 + 0x20) = *(long *)(param_1 + 57000) + lVar10;
        }
        if (((uVar7 >> 1 & 1) != 0) && (lVar10 = FUN_71007922e0(param_2), lVar10 != 0)) {
          *(long *)(param_3 + 0x30) = *(long *)(param_1 + 57000) + lVar10;
        }
        if (*(int *)(param_3 + 4) - 2U < 2) {
          iVar6 = FUN_71007922e0(param_2);
joined_r0x00710078aa5c:
          if (iVar6 == 0) {
            uVar7 = FUN_71007922e0(param_2);
            *(byte *)(param_3 + 0x20d1) = (byte)uVar7 & 1;
            *(byte *)(param_3 + 0x20da) = (byte)(uVar7 >> 1) & 1;
            uVar7 = FUN_71007921f0(param_2);
            *(uint *)(param_3 + 0x20fc) = uVar7 & 0xff;
            if (0x18 < (uVar7 & 0xff)) {
              FUN_710081d0a0(local_2000,0x14,&DAT_7100995330);
              FUN_710078a770(param_1,param_3 + 0x28,local_2000);
            }
            FUN_7100792390(param_2,param_3 + 0x20b1,0x10);
            FUN_7100792390(param_2,param_3 + 0x20c1,0x10);
            if (*(char *)(param_3 + 0x20d1) != '\0') {
              FUN_7100792390(param_2,param_3 + 0x20d2,8);
              FUN_7100792390(param_2,local_2028,4);
              FUN_7100794a90(local_2000);
              FUN_7100794ae0(local_2000,param_3 + 0x20d2,8);
              FUN_7100794b80(local_2000,local_2020);
              *(bool *)(param_3 + 0x20d1) = local_2020[0] == local_2028[0];
              if ((*(int *)(param_3 + 4) == 3) && (*(long *)(param_3 + 0x20d2) == 0)) {
                *(undefined1 *)(param_3 + 0x20d1) = 0;
              }
            }
            *(undefined4 *)(param_3 + 0x20ab) = 0x501;
            *(undefined2 *)(param_3 + 0x20af) = 0x100;
          }
          else {
            FUN_710081d0a0(local_2000,0x14,&DAT_7100995320,iVar6);
            FUN_710078a770(param_1,param_3 + 0x28,local_2000);
          }
        }
LAB_710078a82c:
        *(long *)(param_2 + 0x38) = lVar8;
        if ((ulong)(*(long *)(param_2 + 0x30) - lVar8) < 2) {
          return;
        }
      }
      if (1 < iVar6 - 2U) goto LAB_710078a82c;
      if (uVar9 == 4) {
        if (uVar12 != 0) {
          FUN_71007922e0(param_2);
          iVar6 = FUN_71007922e0(param_2);
          if (iVar6 != 0) {
            *(undefined1 *)(param_3 + 0x2103) = 1;
            FUN_710081d0a0(local_2000,0x14,&DAT_7100995348,iVar6);
            FUN_710077e630(param_3 + 0x28,local_2000,0x800);
          }
        }
        goto LAB_710078a82c;
      }
      if (uVar9 < 5) {
        if (uVar9 == 2) {
          iVar6 = FUN_71007922e0(param_2);
          if (iVar6 == 0) {
            *(undefined4 *)(param_3 + 0x2080) = 3;
            FUN_7100792390(param_2,param_3 + 0x2084,0x20);
          }
        }
        else if (uVar9 == 3) {
          if (4 < (long)uVar12) {
            uVar4 = FUN_71007922e0(param_2);
            uVar7 = uVar4 & 1;
            if ((uVar4 >> 1 & 1) == 0) {
              if (((uVar4 & 0xff) >> 2 & 1) != 0) {
                if (uVar7 == 0) goto LAB_710078af14;
LAB_710078ae3c:
                uVar13 = uVar4 & 8;
                uVar7 = uVar4 & 4;
                uVar5 = FUN_7100792260(param_2);
                FUN_710077ea70(param_3 + 0x2058,uVar5);
                if (uVar13 != 0) {
LAB_710078ae08:
                  uVar13 = uVar4 & 8;
                  uVar7 = uVar4 & 4;
                  uVar5 = FUN_7100792260(param_2);
                  FUN_710077ea70(param_3 + 0x2060,uVar5);
                }
                goto LAB_710078a9a8;
              }
              if (((uVar4 & 0xff) >> 3 & 1) != 0) {
                if (uVar7 != 0) goto LAB_710078ae08;
                goto LAB_710078ae94;
              }
              if (uVar7 != 0) goto LAB_710078a9a0;
            }
            else if (uVar7 == 0) {
              uVar11 = FUN_71007922b0(param_2);
              FUN_710077e950(param_3 + 0x2050,uVar11);
              if ((uVar4 & 4) != 0) {
LAB_710078af14:
                uVar11 = FUN_71007922b0(param_2);
                FUN_710077e950(param_3 + 0x2058,uVar11);
              }
              if ((uVar4 & 8) != 0) {
LAB_710078ae94:
                uVar11 = FUN_71007922b0(param_2);
                FUN_710077e950(param_3 + 0x2060,uVar11);
              }
            }
            else {
              uVar5 = FUN_7100792260(param_2);
              FUN_710077ea70(param_3 + 0x2050,uVar5);
              if ((uVar4 & 4) != 0) goto LAB_710078ae3c;
              if ((uVar4 & 8) != 0) goto LAB_710078ae08;
LAB_710078a9a0:
              uVar13 = 0;
              uVar7 = 0;
LAB_710078a9a8:
              if (((uVar4 & 0xff) >> 4 & 1) != 0) {
                if ((uVar4 & 2) != 0) {
                  uVar4 = FUN_7100792260(param_2);
                  if ((uVar4 & 0x3fffffff) < 1000000000) {
                    FUN_710077ebd0(param_3 + 0x2050,uVar4 & 0x3fffffff);
                  }
                }
                if (uVar7 != 0) {
                  uVar7 = FUN_7100792260(param_2);
                  if ((uVar7 & 0x3fffffff) < 1000000000) {
                    FUN_710077ebd0(param_3 + 0x2058,uVar7 & 0x3fffffff);
                  }
                }
                if (uVar13 != 0) {
                  uVar7 = FUN_7100792260(param_2);
                  if ((uVar7 & 0x3fffffff) < 1000000000) {
                    FUN_710077ebd0(param_3 + 0x2060,uVar7 & 0x3fffffff);
                  }
                }
              }
            }
          }
        }
        else if (uVar9 == 1) {
          iVar6 = FUN_71007922e0(param_2);
          goto joined_r0x00710078aa5c;
        }
        goto LAB_710078a82c;
      }
      if (uVar9 == 6) {
        uVar7 = FUN_71007922e0(param_2);
        *(undefined1 *)(param_3 + 0x4120) = 0;
        *(undefined1 *)(param_3 + 0x4220) = 0;
        *(byte *)(param_3 + 0x411e) = (byte)(uVar7 >> 2) & 1;
        *(byte *)(param_3 + 0x411f) = (byte)(uVar7 >> 3) & 1;
        if ((uVar7 & 1) == 0) {
          if ((uVar7 >> 1 & 1) == 0) goto LAB_710078ab98;
LAB_710078ace4:
          uVar12 = FUN_71007922e0(param_2);
          if (0xff < uVar12) {
            uVar12 = 0xff;
          }
          FUN_7100792390(param_2,param_3 + 0x4220,uVar12);
          *(undefined1 *)(param_3 + uVar12 + 0x4220) = 0;
          if (*(char *)(param_3 + 0x411e) != '\0') goto LAB_710078ad24;
LAB_710078aba0:
          cVar1 = *(char *)(param_3 + 0x411f);
        }
        else {
          uVar12 = FUN_71007922e0(param_2);
          if (0xff < uVar12) {
            uVar12 = 0xff;
          }
          FUN_7100792390(param_2,param_3 + 0x4120,uVar12);
          *(undefined1 *)(param_3 + uVar12 + 0x4120) = 0;
          if ((uVar7 >> 1 & 1) != 0) goto LAB_710078ace4;
LAB_710078ab98:
          if (*(char *)(param_3 + 0x411e) == '\0') goto LAB_710078aba0;
LAB_710078ad24:
          uVar3 = FUN_71007922e0(param_2);
          *(undefined2 *)(param_3 + 0x4320) = uVar3;
          cVar1 = *(char *)(param_3 + 0x411f);
        }
        if (cVar1 != '\0') {
          uVar3 = FUN_71007922e0(param_2);
          *(undefined2 *)(param_3 + 0x4322) = uVar3;
        }
        *(undefined1 *)(param_3 + 0x411d) = 1;
        goto LAB_710078a82c;
      }
      if (uVar9 != 7) {
        if (uVar9 == 5) {
          uVar5 = FUN_71007922e0(param_2);
          *(undefined4 *)(param_3 + 0x2118) = uVar5;
          bVar2 = FUN_71007922e0(param_2);
          *(byte *)(param_3 + 0x411c) = bVar2 & 1;
          uVar12 = FUN_71007922e0(param_2);
          local_2000[0] = 0;
          if (uVar12 < 0x1fff) {
            FUN_7100792390(param_2,local_2000,uVar12);
            local_2000[uVar12] = 0;
            FUN_710077f3e0(local_2000,param_3 + 0x211c,0x800);
          }
          else {
            FUN_710077f3e0(local_2000,param_3 + 0x211c,0x800);
          }
        }
        goto LAB_710078a82c;
      }
      if (iVar6 == 3) {
        if (*(long *)(param_2 + 0x30) - lVar8 == 1) {
          uVar12 = uVar12 + 1;
        }
        if (*(ulong *)(param_3 + 0x2038) < uVar12) goto LAB_710078ac70;
LAB_710078a8d8:
        *(ulong *)(param_3 + 0x2030) = uVar12;
      }
      else {
        if (uVar12 <= *(ulong *)(param_3 + 0x2038)) goto LAB_710078a8d8;
LAB_710078ac70:
        FUN_710078a650(param_3 + 0x2028,uVar12);
      }
      FUN_7100792390(param_2,*(undefined8 *)(param_3 + 0x2028),uVar12);
      *(long *)(param_2 + 0x38) = lVar8;
    } while (1 < (ulong)(*(long *)(param_2 + 0x30) - lVar8));
  }
  return;
}



// ===== FUN_710078af40 @ 710078af40 (size=336) =====

void FUN_710078af40(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined1 local_280 [128];
  int local_200 [128];
  
  lVar2 = param_1[0x744];
  if (*(char *)(lVar2 + 0xc230) != '\0') {
    return;
  }
  if (*(code **)(lVar2 + 0x14818) != (code *)0x0) {
    local_200[0] = 0;
    iVar1 = (**(code **)(lVar2 + 0x14818))(4,*(undefined8 *)(lVar2 + 0x14810),local_200,0x80);
    if (iVar1 == -1) {
      local_200[0] = 0;
LAB_710078b028:
      local_280[0] = 0;
      iVar1 = (**(code **)(param_1[0x744] + 0x14818))
                        (2,*(undefined8 *)(param_1[0x744] + 0x14810),local_280,0x80);
      if (iVar1 == -1) {
        local_280[0] = 0;
      }
      FUN_710077da00(local_280,0,local_200,0x80);
      FUN_710077e260(local_280,0x80);
    }
    else if (local_200[0] == 0) goto LAB_710078b028;
    FUN_710077e460(param_1[0x744] + 0xc030,local_200);
    FUN_710077e260(local_200,0x200);
    lVar2 = param_1[0x744];
    if (*(char *)(lVar2 + 0xc230) != '\0') goto LAB_710078afd0;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined4 *)(param_1[0x744] + 0x14808) = 0x16;
  FUN_7100778a30(&DAT_7100d1bd98,0xff);
  lVar2 = param_1[0x744];
LAB_710078afd0:
  *(undefined1 *)(lVar2 + 0xc236) = 1;
  return;
}



// ===== FUN_710078b090 @ 710078b090 (size=32) =====

void FUN_710078b090(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  
  uVar1 = *(long *)(param_2 + 0x30) - param_3;
  if (*(ulong *)(param_2 + 0x38) <= uVar1) {
    *(ulong *)(param_2 + 0x38) = uVar1;
    FUN_710078a7d0(param_1,param_2,param_4);
    return;
  }
  return;
}



// ===== FUN_710078b0b0 @ 710078b0b0 (size=104) =====

void FUN_710078b0b0(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x3a20) + 0xe2b4);
  if (iVar1 == 1) {
    FUN_710077f600(param_2);
    iVar1 = *(int *)(*(long *)(param_1 + 0x3a20) + 0xe2b4);
  }
  if (iVar1 == 2) {
    FUN_710077f5c0(param_2);
    return;
  }
  return;
}



// ===== FUN_710078b120 @ 710078b120 (size=12) =====

undefined1 FUN_710078b120(long param_1)

{
  return *(undefined1 *)(param_1 + 0x7559);
}



// ===== FUN_710078b130 @ 710078b130 (size=28) =====

void FUN_710078b130(long param_1)

{
  if ((*(int *)(param_1 + 0x756c) == 0) || (*(int *)(param_1 + 0x756c) != 1)) {
    *(undefined4 *)(param_1 + 0x547c) = 0;
  }
  return;
}



// ===== FUN_710078b150 @ 710078b150 (size=156) =====

void FUN_710078b150(long param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_2 + 0x2114);
  if (iVar1 == 2) {
    uVar3 = 0x10;
    if (*(char *)(param_2 + 0x2101) == '\0') {
      uVar3 = 0x20;
    }
    *(undefined4 *)(param_2 + 0x24) = uVar3;
  }
  iVar4 = *(int *)(param_2 + 0x28);
  piVar2 = (int *)(param_2 + 0x28);
  do {
    if (iVar4 == 0) {
      return;
    }
    while ((iVar4 == 0x5c && (iVar1 == 0 && *(int *)(param_1 + 0xdeb8) == 3))) {
      *piVar2 = 0x5f;
      piVar2 = piVar2 + 1;
      iVar4 = *piVar2;
      if (iVar4 == 0) {
        return;
      }
    }
    if ((*piVar2 == 0x2f) || ((*piVar2 == 0x5c && (*(int *)(param_1 + 0xdeb8) != 3)))) {
      *piVar2 = 0x2f;
    }
    piVar2 = piVar2 + 1;
    iVar4 = *piVar2;
  } while( true );
}



// ===== FUN_710078b1f0 @ 710078b1f0 (size=100) =====

long FUN_710078b1f0(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = (ulong)*(uint *)(param_1 + 0x53d8) + *(long *)(param_1 + 0xdec8);
  if (*(int *)(param_1 + 0xdeb8) == 2) {
    return lVar1 + (ulong)*(uint *)(param_1 + 0x53ec);
  }
  iVar2 = *(int *)(param_1 + 0x542c);
  iVar3 = FUN_71007890e0(param_1,(ulong)*(uint *)(param_1 + 0x53ec));
  return (ulong)(uint)(iVar2 + iVar3) + lVar1;
}



// ===== FUN_710078b260 @ 710078b260 (size=96) =====

void FUN_710078b260(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_710077b630();
  if ((*(long *)(param_1 + 57000) == lVar1) &&
     (*(long *)(param_1 + 0xdeb0) == *(long *)(param_1 + 57000))) {
    return;
  }
  FUN_7100779430(0x38,param_1 + 0x34);
  FUN_71007788e0(&DAT_7100d1bd98,1);
  return;
}



// ===== FUN_710078b2c0 @ 710078b2c0 (size=64) =====

void FUN_710078b2c0(long param_1)

{
  FUN_7100779430(0x1a,param_1 + 0x34);
  *(undefined1 *)(param_1 + 0xded0) = 1;
  FUN_71007788e0(&DAT_7100d1bd98,3);
  return;
}



// ===== FUN_710078b300 @ 710078b300 (size=768) =====

long FUN_710078b300(long param_1)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  ushort uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long local_848 [2];
  undefined8 local_838;
  char local_828;
  long local_818;
  undefined1 auStack_800 [2048];
  
  FUN_71007924d0(local_848,param_1);
  if (*(long *)(param_1 + 0xdec8) < *(long *)(param_1 + 57000)) {
    FUN_7100792520(local_848,0x15);
    FUN_7100790c50(param_1 + 0x5458,0);
    *(undefined4 *)(param_1 + 0x545c) = 2;
    uVar5 = FUN_7100792260(local_848);
    *(undefined4 *)(param_1 + 0x546c) = uVar5;
    uVar8 = FUN_7100792260(local_848);
    *(ulong *)(param_1 + 0x74c8) = uVar8 & 0xffffffff;
    *(undefined4 *)(param_1 + 0x74d8) = 1;
    uVar6 = FUN_7100792220(local_848);
    *(uint *)(param_1 + 0x74dc) = uVar6 & 0xffff;
    uVar6 = FUN_7100792220(local_848);
    *(uint *)(param_1 + 0x5464) = uVar6 & 0xffff;
    if (0x14 < (uVar6 & 0xffff)) {
      uVar7 = FUN_7100792260(local_848);
      uVar6 = FUN_71007921f0(local_848);
      *(uint *)(param_1 + 0x547c) = uVar6 & 0xff;
      uVar6 = FUN_71007921f0(local_848);
      *(uint *)(param_1 + 0x5460) = uVar6 & 0xff | 0x8000;
      cVar2 = FUN_71007921f0(local_848);
      uVar5 = 0xd;
      if (cVar2 != '\x02') {
        uVar5 = 10;
      }
      *(undefined4 *)(param_1 + 0x5474) = uVar5;
      uVar8 = FUN_71007921f0(local_848);
      uVar8 = uVar8 & 0xff;
      uVar3 = FUN_71007921f0(local_848);
      *(undefined1 *)(param_1 + 0x5478) = uVar3;
      uVar6 = *(uint *)(param_1 + 0x5460);
      uVar1 = uVar6 >> 2 & 1;
      *(byte *)(param_1 + 0x7500) = (byte)uVar6 & 1;
      *(byte *)(param_1 + 0x7501) = (byte)(uVar6 >> 1) & 1;
      *(char *)(param_1 + 0x7503) = (char)uVar1;
      *(uint *)(param_1 + 0x7504) = uVar1;
      *(ulong *)(param_1 + 0x74c0) = (ulong)*(uint *)(param_1 + 0x546c);
      *(undefined8 *)(param_1 + 0x7560) = 0x10000;
      *(byte *)(param_1 + 0x7559) = (byte)(*(uint *)(param_1 + 0x547c) >> 4) & 1;
      *(undefined1 *)(param_1 + 0x5470) = 0;
      *(undefined4 *)(param_1 + 0x756c) = 0;
      FUN_710077eb50(param_1 + 0x74a8,uVar7);
      FUN_7100792520(local_848,uVar8);
      FUN_7100792390(local_848,auStack_800,uVar8);
      auStack_800[uVar8] = 0;
      FUN_710077e5d0(auStack_800,auStack_800,0x800);
      FUN_710077f030(auStack_800,param_1 + 0x5480,0x800);
      FUN_710078b0b0(param_1,param_1 + 0x5480);
      FUN_710078b150(param_1,param_1 + 0x5458);
      lVar10 = *(long *)(param_1 + 57000);
      if (local_818 == 0) {
        lVar9 = *(long *)(param_1 + 0xdeb0);
      }
      else {
        lVar9 = (ulong)*(uint *)(param_1 + 0x5464) + lVar10 + *(long *)(param_1 + 0x74c0);
        *(long *)(param_1 + 0xdeb0) = lVar9;
      }
      *(undefined4 *)(param_1 + 0x3a34) = 2;
      goto LAB_710078b5c8;
    }
  }
  else {
    FUN_7100792520(local_848,7);
    FUN_7100790c30(param_1 + 0x53e0);
    FUN_7100792390(local_848,auStack_800,4);
    uVar4 = FUN_7100792220(local_848);
    if (6 < uVar4) {
      uVar8 = FUN_71007921f0(local_848);
      lVar10 = *(long *)(param_1 + 57000);
      lVar9 = lVar10 + (ulong)uVar4;
      *(long *)(param_1 + 0xdeb0) = lVar9;
      *(undefined4 *)(param_1 + 0x3a34) = 1;
      *(byte *)(param_1 + 0xdebc) = (byte)(uVar8 >> 3) & 1;
      *(byte *)(param_1 + 0xdebd) = (byte)uVar8 & 1;
      *(byte *)(param_1 + 0xdebf) = (byte)(uVar8 >> 2) & 1;
      *(byte *)(param_1 + 0x53fc) = (byte)(uVar8 >> 1) & 1;
      *(byte *)(param_1 + 0x53fd) = (byte)(uVar8 >> 4) & 1;
LAB_710078b5c8:
      lVar11 = local_818;
      if (lVar9 <= lVar10) {
        lVar11 = 0;
      }
      goto LAB_710078b388;
    }
  }
  lVar11 = 0;
LAB_710078b388:
  if (local_848[0] != 0) {
    if (local_828 != '\0') {
      FUN_710077e260(local_848[0],local_838);
    }
    FUN_710081c200(local_848[0]);
  }
  return lVar11;
}



// ===== FUN_710078b620 @ 710078b620 (size=3480) =====

long FUN_710078b620(long *param_1)

{
  int iVar1;
  uint *puVar2;
  undefined8 uVar3;
  short sVar4;
  byte bVar5;
  bool bVar6;
  char cVar7;
  undefined1 uVar8;
  char cVar9;
  undefined2 uVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  ulong uVar18;
  ushort uVar19;
  ulong uVar20;
  byte bVar21;
  byte bVar22;
  long lVar23;
  char cVar24;
  long lVar25;
  long *plVar26;
  long local_20b8;
  uint *local_20b0;
  uint local_20a0;
  long *local_2088 [3];
  undefined1 auStack_2070 [20];
  int local_205c;
  uint local_2058;
  long local_2048 [2];
  undefined8 local_2038;
  char local_2028;
  long local_2018;
  long *local_2008;
  undefined1 auStack_2000 [8192];
  
  FUN_71007924d0(local_2048,param_1);
  cVar24 = *(char *)((long)param_1 + 0xdec4);
  if (cVar24 == '\0') {
LAB_710078b680:
    FUN_7100792520(local_2048,7);
    if (local_2018 == 0) goto LAB_710078b8b8;
    uVar12 = FUN_7100792220(local_2048);
    *(uint *)((long)param_1 + 0x53bc) = uVar12 & 0xffff;
    *(undefined1 *)((long)param_1 + 0x53cc) = 0;
    uVar12 = FUN_71007921f0(local_2048);
    uVar12 = uVar12 & 0xff;
    uVar13 = FUN_7100792220(local_2048);
    *(uint *)((long)param_1 + 0x53c4) = uVar13 & 0xffff;
    *(byte *)((long)param_1 + 0x53cc) = (byte)((uVar13 & 0xffff) >> 0xe) & 1;
    uVar13 = FUN_7100792220(local_2048);
    uVar13 = uVar13 & 0xffff;
    *(uint *)(param_1 + 0xa78) = uVar12;
    *(uint *)(param_1 + 0xa79) = uVar13;
    if (6 < uVar13) {
      if (uVar12 == 0x7a) {
        uVar16 = 3;
LAB_710078b718:
        *(undefined4 *)(param_1 + 0xa78) = uVar16;
        *(undefined4 *)((long)param_1 + 0x3a34) = uVar16;
LAB_710078b720:
        if ((param_1[0xa78] & 0x2ffffffffU) == 0x200000001) goto LAB_710078ba34;
        FUN_7100792520(local_2048,uVar13 - 7);
      }
      else {
        if (uVar12 < 0x7b) {
          if (uVar12 == 0x73) {
            uVar16 = 1;
          }
          else {
            uVar16 = 2;
            if (uVar12 != 0x74) goto LAB_710078ba28;
          }
          goto LAB_710078b718;
        }
        uVar16 = 5;
        if (uVar12 == 0x7b) goto LAB_710078b718;
LAB_710078ba28:
        *(uint *)((long)param_1 + 0x3a34) = uVar12;
        if (uVar12 != 0x75) goto LAB_710078b720;
LAB_710078ba34:
        FUN_7100792520(local_2048,6);
      }
      lVar25 = param_1[0x1bd5];
      uVar18 = FUN_71007890e0(param_1,(int)param_1[0xa79]);
      uVar12 = *(uint *)(param_1 + 0xa78);
      param_1[0x1bd6] = lVar25 + (uVar18 & 0xffffffff);
      if (uVar12 == 0x75) {
        param_1[0x1b5d] = *(long *)((long)param_1 + 0x53bc);
        param_1[0x1b5e] = *(long *)((long)param_1 + 0x53c4);
        *(undefined4 *)(param_1 + 0x1b5f) = *(undefined4 *)((long)param_1 + 0x53cc);
        uVar10 = FUN_7100792220(local_2048);
        *(undefined2 *)((long)param_1 + 0xdafc) = uVar10;
        uVar8 = FUN_71007921f0(local_2048);
        *(undefined1 *)((long)param_1 + 0xdafe) = uVar8;
        uVar8 = FUN_71007921f0(local_2048);
        *(undefined1 *)((long)param_1 + 0xdaff) = uVar8;
        uVar10 = FUN_7100792220(local_2048);
        *(undefined2 *)(param_1 + 0x1b60) = uVar10;
      }
      else if (uVar12 < 0x76) {
        if (uVar12 < 4) {
          if (uVar12 < 2) {
            if (uVar12 == 1) {
              FUN_7100790c30(param_1 + 0xa7c);
              param_1[0xa7c] = *(long *)((long)param_1 + 0x53bc);
              param_1[0xa7d] = *(long *)((long)param_1 + 0x53c4);
              *(undefined4 *)(param_1 + 0xa7e) = *(undefined4 *)((long)param_1 + 0x53cc);
              uVar10 = FUN_7100792220(local_2048);
              *(undefined2 *)((long)param_1 + 0x53f4) = uVar10;
              iVar14 = FUN_7100792260(local_2048);
              uVar12 = *(uint *)(param_1 + 0xa7d);
              bVar6 = true;
              *(int *)(param_1 + 0xa7f) = iVar14;
              *(byte *)((long)param_1 + 0xdebc) = (byte)(uVar12 >> 3) & 1;
              *(byte *)((long)param_1 + 0xdebd) = (byte)uVar12 & 1;
              *(byte *)((long)param_1 + 0xdebf) = (byte)(uVar12 >> 2) & 1;
              *(byte *)((long)param_1 + 0xdec3) = (byte)(uVar12 >> 6) & 1;
              *(byte *)((long)param_1 + 0xdec4) = (byte)(uVar12 >> 7) & 1;
              if (iVar14 == 0) {
                bVar6 = *(short *)((long)param_1 + 0x53f4) != 0;
              }
              *(bool *)(param_1 + 0x1bd8) = bVar6;
              *(byte *)((long)param_1 + 0x53fc) = (byte)(uVar12 >> 1) & 1;
              *(byte *)((long)param_1 + 0xdec1) = (byte)(uVar12 >> 8) & 1;
              *(byte *)((long)param_1 + 0xdec2) = (byte)(uVar12 >> 4) & 1;
              goto LAB_710078b818;
            }
LAB_710078bc20:
            if ((*(uint *)((long)param_1 + 0x53c4) >> 0xf & 1) != 0) {
              uVar18 = FUN_7100792260(local_2048);
              param_1[0x1bd6] = param_1[0x1bd6] + (uVar18 & 0xffffffff);
            }
          }
          else {
            puVar2 = (uint *)(param_1 + 0x12f8);
            if (uVar12 == 2) {
              puVar2 = (uint *)(param_1 + 0xa8b);
            }
            FUN_7100790c50(puVar2,0);
            uVar3 = *(undefined8 *)((long)param_1 + 0x53c4);
            *(undefined8 *)puVar2 = *(undefined8 *)((long)param_1 + 0x53bc);
            *(undefined8 *)(puVar2 + 2) = uVar3;
            uVar13 = puVar2[2];
            puVar2[4] = *(uint *)((long)param_1 + 0x53cc);
            bVar5 = (byte)(uVar13 >> 4) & 1;
            bVar22 = 0;
            bVar21 = bVar5;
            if (uVar12 == 2) {
              bVar21 = 0;
              bVar22 = bVar5;
            }
            bVar6 = (uVar13 & 0xe0) == 0xe0;
            *(byte *)(puVar2 + 0x82a) = (byte)uVar13 & 1;
            *(byte *)((long)puVar2 + 0x20a9) = (byte)(uVar13 >> 1) & 1;
            lVar25 = (long)(0x10000 << ((ulong)(uVar13 >> 5) & 7));
            if (bVar6) {
              lVar25 = 0;
            }
            *(byte *)((long)puVar2 + 0x20ab) = (byte)(uVar13 >> 2) & 1;
            *(byte *)(puVar2 + 0x82c) = (byte)(uVar13 >> 10) & 1;
            *(byte *)(puVar2 + 0x840) = bVar22;
            *(bool *)((long)puVar2 + 0x2101) = bVar6;
            *(byte *)((long)puVar2 + 0x2112) = bVar21;
            *(long *)(puVar2 + 0x842) = lVar25;
            *(byte *)((long)puVar2 + 0x2102) = (byte)(uVar13 >> 3) & 1;
            *(byte *)((long)puVar2 + 0x2103) = (byte)(uVar13 >> 0xb) & 1;
            uVar13 = FUN_7100792260(local_2048);
            puVar2[5] = uVar13;
            uVar15 = FUN_7100792260(local_2048);
            uVar8 = FUN_71007921f0(local_2048);
            *(undefined1 *)(puVar2 + 6) = uVar8;
            puVar2[0x820] = 2;
            uVar13 = FUN_7100792260(local_2048);
            puVar2[0x821] = uVar13;
            uVar16 = FUN_7100792260(local_2048);
            uVar13 = FUN_71007921f0(local_2048);
            puVar2[7] = uVar13 & 0xff;
            cVar9 = FUN_71007921f0(local_2048);
            *(char *)(puVar2 + 8) = cVar9 + -0x30;
            uVar18 = FUN_7100792220(local_2048);
            uVar18 = uVar18 & 0xffff;
            iVar14 = (int)uVar18;
            uVar17 = FUN_7100792260(local_2048);
            uVar13 = puVar2[7];
            puVar2[9] = uVar17;
            if ((uVar13 < 0x14) && ((uVar17 >> 4 & 1) != 0)) {
              *(undefined1 *)((long)puVar2 + 0x2101) = 1;
            }
            puVar2[0x82b] = 0;
            if (*(char *)((long)puVar2 + 0x20ab) != '\0') {
              if (uVar13 == 0xf) {
                puVar2[0x82b] = 2;
              }
              else if (uVar13 < 0x10) {
                if (uVar13 == 0xd) {
                  puVar2[0x82b] = 1;
                }
                else {
LAB_710078c374:
                  puVar2[0x82b] = 4;
                }
              }
              else {
                if ((uVar13 != 0x14) && (uVar13 != 0x1a)) goto LAB_710078c374;
                puVar2[0x82b] = 3;
              }
            }
            bVar5 = (byte)puVar2[6];
            puVar2[0x845] = 2;
            if ((bVar5 - 3 & 0xfd) == 0) {
              puVar2[0x845] = 1;
              puVar2[0x846] = 0;
              if ((bVar5 == 3) && ((uVar17 & 0xf000) == 0xa000)) {
                puVar2[0x846] = 1;
                puVar2[0x847] = 0;
              }
            }
            else {
              if (bVar5 < 6) {
                puVar2[0x845] = 0;
              }
              puVar2[0x846] = 0;
            }
            bVar5 = (byte)(uVar17 >> 0x1f);
            if (uVar12 == 2) {
              bVar5 = 0;
            }
            *(byte *)(puVar2 + 0x844) = bVar5;
            bVar6 = (puVar2[2] & 0x100) != 0;
            *(bool *)((long)puVar2 + 0x2111) = bVar6;
            if (bVar6) {
              lVar23 = FUN_7100792260(local_2048);
              uVar13 = FUN_7100792260(local_2048);
              lVar25 = (ulong)uVar13 << 0x20;
              lVar23 = lVar23 << 0x20;
              uVar13 = uVar15 & uVar13;
            }
            else {
              lVar25 = 0;
              lVar23 = 0;
              uVar13 = uVar15;
            }
            *(bool *)((long)puVar2 + 0x20aa) = uVar13 == 0xffffffff;
            lVar25 = lVar25 + (ulong)uVar15;
            if (uVar13 == 0xffffffff) {
              lVar25 = 0x7fffffff7fffffff;
            }
            *(long *)(puVar2 + 0x81c) = lVar25;
            *(ulong *)(puVar2 + 0x81a) = (ulong)puVar2[5] + lVar23;
            if (0x1fff < uVar18) {
              uVar18 = 0x1fff;
            }
            FUN_7100792390(local_2048,auStack_2000);
            auStack_2000[uVar18] = 0;
            if (uVar12 == 2) {
              puVar2[10] = 0;
              if ((puVar2[2] >> 9 & 1) == 0) {
LAB_710078bec0:
                local_20b0 = puVar2 + 10;
                FUN_710077e520(auStack_2000,local_20b0,0x800,1);
              }
              else {
                FUN_710078fca0(auStack_2070);
                lVar25 = FUN_710081ce00(auStack_2000);
                uVar20 = lVar25 + 1;
                if (uVar20 < uVar18) {
                  FUN_710078fcb0(auStack_2070,auStack_2000,uVar18,auStack_2000 + uVar20,
                                 uVar18 - uVar20,puVar2 + 10,0x800);
                }
                if (puVar2[10] == 0) goto LAB_710078bec0;
              }
              local_20b0 = puVar2 + 10;
              FUN_710078b0b0(param_1,local_20b0);
              FUN_710078b150(param_1,puVar2);
            }
            else {
              FUN_710077f030(auStack_2000,puVar2 + 10,0x800);
              iVar14 = puVar2[3] - iVar14;
              iVar1 = iVar14 + -0x28;
              if ((puVar2[2] & 0x400) == 0) {
                iVar1 = iVar14 + -0x20;
              }
              if (0 < iVar1) {
                uVar18 = (ulong)iVar1;
                if (*(ulong *)(puVar2 + 0x80e) < uVar18) {
                  FUN_710078a650(puVar2 + 0x80a,uVar18);
                }
                else {
                  *(ulong *)(puVar2 + 0x80c) = uVar18;
                }
                FUN_7100792390(local_2048,*(undefined8 *)(puVar2 + 0x80a),uVar18);
              }
              iVar14 = FUN_710080c900(puVar2 + 10,&DAT_7100995310);
              if (iVar14 == 0) {
                *(undefined1 *)((long)param_1 + 0xdebe) = 1;
              }
            }
            local_20b0 = puVar2 + 10;
            if ((puVar2[2] >> 10 & 1) != 0) {
              FUN_7100792390(local_2048,(long)puVar2 + 0x20b1,8);
            }
            FUN_710077eb50(puVar2 + 0x814,uVar16);
            if ((puVar2[2] >> 0xc & 1) != 0) {
              uVar12 = FUN_7100792220(local_2048);
              local_2088[2] = (long *)0x0;
              local_20b8 = 0;
              local_2088[0] = param_1 + 0xe96;
              local_20a0 = 0xc;
              local_2088[1] = param_1 + 0xe97;
              plVar26 = param_1 + 0xe95;
              while( true ) {
                uVar13 = (int)(uVar12 & 0xffff) >> (local_20a0 & 0x1f);
                if ((uVar13 & 8) != 0 && plVar26 != (long *)0x0) {
                  if (local_20b8 != 0) {
                    uVar16 = FUN_7100792260(local_2048);
                    FUN_710077eb50(plVar26,uVar16);
                  }
                  FUN_710077e9c0(plVar26,auStack_2070);
                  if ((uVar13 >> 2 & 1) != 0) {
                    local_205c = local_205c + 1;
                  }
                  uVar13 = uVar13 & 3;
                  local_2058 = 0;
                  if (uVar13 != 0) {
                    uVar13 = (3 - uVar13) * 8;
                    do {
                      uVar17 = FUN_71007921f0(local_2048);
                      uVar15 = uVar13 & 0x1f;
                      uVar13 = uVar13 + 8;
                      local_2058 = (uVar17 & 0xff) << (ulong)uVar15 | local_2058;
                    } while (uVar13 != 0x18);
                    uVar13 = local_2058 * 100;
                  }
                  local_2058 = uVar13;
                  FUN_710077ea80(plVar26,auStack_2070);
                }
                local_20a0 = local_20a0 - 4;
                if (local_20b8 == 3) break;
                plVar26 = local_2088[local_20b8];
                local_20b8 = local_20b8 + 1;
              }
            }
            uVar20 = *(ulong *)(puVar2 + 0x81a);
            lVar25 = 0;
            uVar18 = param_1[0x1bd6];
            if ((-1 < (long)(uVar18 | uVar20)) &&
               (lVar25 = uVar18 + uVar20, (long)(0x7fffffffffffffff - uVar20) < (long)uVar18)) {
              lVar25 = 0;
            }
            param_1[0x1bd6] = lVar25;
            uVar11 = FUN_7100792440(local_2048,*(undefined1 *)((long)puVar2 + 0x2102));
            if (*puVar2 != (uint)uVar11) {
              *(undefined1 *)(param_1 + 0x1bda) = 1;
              FUN_71007788e0(&DAT_7100d1bd98,1);
              if (cVar24 == '\0') {
                FUN_7100779510(0x1c,(long)param_1 + 0x34,local_20b0);
              }
            }
          }
        }
        else {
          if (uVar12 != 5) goto LAB_710078bc20;
          param_1[0x12f0] = *(long *)((long)param_1 + 0x53bc);
          param_1[0x12f1] = *(long *)((long)param_1 + 0x53c4);
          *(undefined4 *)(param_1 + 0x12f2) = *(undefined4 *)((long)param_1 + 0x53cc);
          uVar12 = *(uint *)(param_1 + 0x12f1);
          uVar13 = uVar12 >> 3 & 1;
          bVar6 = (uVar12 & 2) != 0;
          *(byte *)((long)param_1 + 0x979c) = (byte)uVar12 & 1;
          *(bool *)((long)param_1 + 0x979d) = bVar6;
          *(byte *)((long)param_1 + 0x979e) = (byte)(uVar12 >> 2) & 1;
          *(char *)((long)param_1 + 0x979f) = (char)uVar13;
          if (bVar6) {
            uVar16 = FUN_7100792260(local_2048);
            *(undefined4 *)((long)param_1 + 0x9794) = uVar16;
            if (*(char *)((long)param_1 + 0x979f) != '\0') goto LAB_710078b968;
          }
          else if (uVar13 != 0) {
LAB_710078b968:
            uVar12 = FUN_7100792220(local_2048);
            *(uint *)(param_1 + 0x12f3) = uVar12 & 0xffff;
            *(uint *)((long)param_1 + 0xdee4) = uVar12 & 0xffff;
          }
        }
      }
      else if (uVar12 == 0x77) {
        param_1[0x12f4] = *(long *)((long)param_1 + 0x53bc);
        param_1[0x12f5] = *(long *)((long)param_1 + 0x53c4);
        *(undefined4 *)(param_1 + 0x12f6) = *(undefined4 *)((long)param_1 + 0x53cc);
        uVar12 = FUN_7100792260(local_2048);
        param_1[0x1bd6] = param_1[0x1bd6] + (ulong)uVar12;
        *(uint *)((long)param_1 + 0x97b4) = uVar12;
        uVar10 = FUN_7100792220(local_2048);
        *(undefined2 *)(param_1 + 0x12f7) = uVar10;
        uVar8 = FUN_71007921f0(local_2048);
        *(undefined1 *)((long)param_1 + 0x97ba) = uVar8;
        sVar4 = (short)param_1[0x12f7];
        if (sVar4 == 0x104) {
          *(long *)((long)param_1 + 0xdd54) = param_1[0x12f5];
          *(long *)((long)param_1 + 0xdd4c) = param_1[0x12f4];
          *(undefined8 *)((long)param_1 + 0xdd5f) = *(undefined8 *)((long)param_1 + 0x97b3);
          *(undefined8 *)((long)param_1 + 0xdd57) = *(undefined8 *)((long)param_1 + 0x97ab);
          uVar16 = FUN_7100792260(local_2048);
          *(undefined4 *)(param_1 + 0x1bad) = uVar16;
          uVar8 = FUN_71007921f0(local_2048);
          *(undefined1 *)((long)param_1 + 0xdd6c) = uVar8;
          uVar8 = FUN_71007921f0(local_2048);
          *(undefined1 *)((long)param_1 + 0xdd6d) = uVar8;
          uVar16 = FUN_7100792260(local_2048);
          *(undefined4 *)(param_1 + 0x1bae) = uVar16;
        }
        else if (sVar4 == 0x105) {
          *(long *)((long)param_1 + 0xdd7c) = param_1[0x12f5];
          *(long *)((long)param_1 + 0xdd74) = param_1[0x12f4];
          *(undefined8 *)((long)param_1 + 0xdd87) = *(undefined8 *)((long)param_1 + 0x97b3);
          *(undefined8 *)((long)param_1 + 0xdd7f) = *(undefined8 *)((long)param_1 + 0x97ab);
          uVar16 = FUN_7100792260(local_2048);
          *(undefined4 *)(param_1 + 0x1bb2) = uVar16;
          uVar8 = FUN_71007921f0(local_2048);
          *(undefined1 *)((long)param_1 + 0xdd94) = uVar8;
          uVar8 = FUN_71007921f0(local_2048);
          *(undefined1 *)((long)param_1 + 0xdd95) = uVar8;
          uVar16 = FUN_7100792260(local_2048);
          *(undefined4 *)(param_1 + 0x1bb3) = uVar16;
          uVar11 = FUN_7100792220(local_2048);
          if (0x103 < uVar11) {
            uVar11 = 0x103;
          }
          *(ushort *)((long)param_1 + 0xdd9c) = uVar11;
          FUN_7100792390(local_2048,(long)param_1 + 0xdd9e,uVar11);
          *(undefined1 *)((long)param_1 + (ulong)*(ushort *)((long)param_1 + 0xdd9c) + 0xdd9e) = 0;
        }
        else if (sVar4 == 0x101) {
          *(long *)((long)param_1 + 0xdb34) = param_1[0x12f5];
          *(long *)((long)param_1 + 0xdb2c) = param_1[0x12f4];
          *(undefined8 *)((long)param_1 + 0xdb3f) = *(undefined8 *)((long)param_1 + 0x97b3);
          *(undefined8 *)((long)param_1 + 0xdb37) = *(undefined8 *)((long)param_1 + 0x97ab);
          uVar10 = FUN_7100792220(local_2048);
          *(undefined2 *)(param_1 + 0x1b69) = uVar10;
          uVar11 = FUN_7100792220(local_2048);
          uVar19 = *(ushort *)(param_1 + 0x1b69);
          if (0xff < uVar19) {
            uVar19 = 0xff;
            *(undefined2 *)(param_1 + 0x1b69) = 0xff;
          }
          if (0xff < uVar11) {
            uVar11 = 0xff;
          }
          *(ushort *)((long)param_1 + 0xdb4a) = uVar11;
          FUN_7100792390(local_2048,(long)param_1 + 0xdb4c,uVar19);
          FUN_7100792390(local_2048,(long)param_1 + 0xdc4c,*(undefined2 *)((long)param_1 + 0xdb4a));
          *(undefined1 *)((long)param_1 + (ulong)*(ushort *)(param_1 + 0x1b69) + 0xdb4c) = 0;
          *(undefined1 *)((long)param_1 + (ulong)*(ushort *)((long)param_1 + 0xdb4a) + 0xdc4c) = 0;
        }
      }
      else {
        if (uVar12 != 0x78) goto LAB_710078bc20;
        *(undefined8 *)((long)param_1 + 0xdb04) = *(undefined8 *)((long)param_1 + 0x53bc);
        *(undefined8 *)((long)param_1 + 0xdb0c) = *(undefined8 *)((long)param_1 + 0x53c4);
        *(undefined4 *)((long)param_1 + 0xdb14) = *(undefined4 *)((long)param_1 + 0x53cc);
        uVar16 = FUN_7100792260(local_2048);
        *(undefined4 *)(param_1 + 0x1b63) = uVar16;
        uVar8 = FUN_71007921f0(local_2048);
        *(undefined1 *)((long)param_1 + 0xdb1c) = uVar8;
        uVar10 = FUN_7100792220(local_2048);
        *(undefined2 *)((long)param_1 + 0xdb1e) = uVar10;
        uVar16 = FUN_7100792260(local_2048);
        *(undefined4 *)(param_1 + 0x1b64) = uVar16;
        FUN_7100792390(local_2048,(long)param_1 + 0xdb24,8);
        param_1[0x1bd6] = param_1[0x1bd6] + (ulong)*(uint *)(param_1 + 0x1b63);
      }
LAB_710078b818:
      uVar11 = FUN_7100792440(local_2048,0);
      lVar25 = local_2018;
      if ((*(uint *)((long)param_1 + 0x53bc) != (uint)uVar11) &&
         (iVar14 = (int)param_1[0xa78], iVar14 != 0x79 && iVar14 != 0x76)) {
        if ((iVar14 == 5) && (cVar9 = *(char *)((long)param_1 + 0x979e), cVar9 != '\0')) {
          lVar25 = (**(code **)(*param_1 + 0x30))(param_1);
          (**(code **)(*param_1 + 0x28))(param_1,lVar25 + -7,0);
          iVar14 = 7;
          do {
            cVar7 = FUN_710077beb0(param_1);
            if (cVar7 != '\0') {
              cVar9 = '\0';
            }
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
          lVar25 = local_2018;
          if (cVar9 != '\0') goto LAB_710078b8c4;
        }
        *(undefined1 *)(param_1 + 0x1bda) = 1;
        FUN_71007788e0(&DAT_7100d1bd98,3);
        lVar25 = local_2018;
        if (cVar24 != '\0') {
          FUN_7100779510(4,(long)param_1 + 0x34);
          *(undefined1 *)((long)param_1 + 0xded1) = 1;
          lVar25 = 0;
        }
      }
      goto LAB_710078b8c4;
    }
    FUN_710078b2c0(param_1);
  }
  else {
    if (param_1[0x1bd5] <= param_1[0x1bd9] + 7) {
      cVar24 = '\0';
      goto LAB_710078b680;
    }
    FUN_710078af40(param_1);
    iVar14 = (**(code **)(*param_1 + 0x20))(param_1,auStack_2000,8);
    if (iVar14 == 8) {
      FUN_710078fb20(param_1 + 0x407,0,4,param_1[0x744] + 0xc030,auStack_2000,0,0,0,0);
      local_2008 = param_1 + 0x407;
      goto LAB_710078b680;
    }
LAB_710078b8b8:
    FUN_710078b260(param_1);
  }
  lVar25 = 0;
LAB_710078b8c4:
  if (local_2048[0] != 0) {
    if (local_2028 != '\0') {
      FUN_710077e260(local_2048[0],local_2038);
    }
    FUN_710081c200(local_2048[0]);
  }
  return lVar25;
}



// ===== FUN_710078c3d0 @ 710078c3d0 (size=2300) =====

ulong FUN_710078c3d0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  byte bVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  char cVar17;
  long lVar18;
  ulong local_2080;
  int local_2070 [2];
  int local_2068;
  undefined4 uStack_2064;
  long local_2048 [2];
  undefined8 local_2038;
  char local_2028;
  ulong local_2018;
  long *local_2008;
  undefined1 auStack_2000 [8192];
  
  FUN_71007924d0(local_2048,param_1);
  cVar17 = *(char *)((long)param_1 + 0xdec4);
  plVar2 = local_2008;
  if (cVar17 == '\0') {
LAB_710078c548:
    local_2008 = plVar2;
    uVar13 = FUN_7100792520(local_2048,7);
    if (uVar13 < 7) {
LAB_710078c958:
      FUN_710078b260(param_1);
    }
    else {
      *(undefined1 *)((long)param_1 + 0x53cc) = 0;
      uVar10 = FUN_7100792260(local_2048);
      *(undefined4 *)((long)param_1 + 0x53bc) = uVar10;
      iVar9 = FUN_7100792350(local_2048,4);
      lVar14 = FUN_71007922e0(local_2048);
      bVar5 = lVar14 == 0 || iVar9 == 0;
      if (lVar14 != 0 && iVar9 != 0) {
        iVar9 = iVar9 + (int)lVar14;
        if (-1 < iVar9 + -3) {
          FUN_7100792520(local_2048,(long)(iVar9 + -3));
          if (local_2018 < iVar9 + 4) goto LAB_710078c958;
          iVar11 = FUN_7100792490(local_2048);
          uVar10 = FUN_71007922e0(local_2048);
          *(undefined4 *)(param_1 + 0xa78) = uVar10;
          uVar12 = FUN_71007922e0(local_2048);
          iVar3 = *(int *)((long)param_1 + 0x53bc);
          *(uint *)((long)param_1 + 0x53c4) = uVar12;
          *(byte *)((long)param_1 + 0x53cc) = (byte)(uVar12 >> 2) & 1;
          *(int *)(param_1 + 0xa79) = iVar9 + 4;
          *(int *)((long)param_1 + 0x3a34) = (int)param_1[0xa78];
          if (iVar3 != iVar11) {
            FUN_710078b2c0(param_1);
            *(undefined1 *)(param_1 + 0x1bda) = 1;
            FUN_71007788e0(&DAT_7100d1bd98,3);
            if (cVar17 != '\0') {
              FUN_7100779510(4,(long)param_1 + 0x34);
              *(undefined1 *)((long)param_1 + 0xded1) = 1;
              uVar13 = 0;
              goto LAB_710078c90c;
            }
            uVar12 = *(uint *)((long)param_1 + 0x53c4);
          }
          local_2080 = 0;
          if ((uVar12 & 1) != 0) {
            local_2080 = FUN_71007922e0(local_2048);
            if (*(uint *)(param_1 + 0xa79) <= local_2080) goto LAB_710078c900;
            uVar12 = *(uint *)((long)param_1 + 0x53c4);
          }
          if ((uVar12 >> 1 & 1) == 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = FUN_71007922e0(local_2048);
          }
          lVar18 = param_1[0x1bd5];
          uVar13 = FUN_71007890e0(param_1,(int)param_1[0xa79]);
          lVar18 = lVar18 + (uVar13 & 0xffffffff);
          lVar15 = 0;
          if ((-1 < lVar14 && -1 < lVar18) &&
             (lVar15 = lVar18 + lVar14, 0x7fffffffffffffff - lVar14 < lVar18)) {
            lVar15 = 0;
          }
          uVar12 = *(uint *)(param_1 + 0xa78);
          param_1[0x1bd6] = lVar15;
          if (uVar12 == 4) {
            param_1[0xa84] = *(long *)((long)param_1 + 0x53bc);
            param_1[0xa85] = *(long *)((long)param_1 + 0x53c4);
            *(undefined4 *)(param_1 + 0xa86) = *(undefined4 *)((long)param_1 + 0x53cc);
            uVar12 = FUN_71007922e0(local_2048);
            if (uVar12 == 0) {
              bVar8 = FUN_71007922e0(local_2048);
              *(byte *)((long)param_1 + 0x5434) = bVar8 & 1;
              uVar12 = FUN_71007921f0(local_2048);
              uVar12 = uVar12 & 0xff;
              *(uint *)(param_1 + 0xa87) = uVar12;
              if (uVar12 < 0x19) {
                FUN_7100792390(local_2048,(long)param_1 + 0x543c,0x10);
                if (*(char *)((long)param_1 + 0x5434) != '\0') {
                  FUN_7100792390(local_2048,(long)param_1 + 0x544c,8);
                  FUN_7100792390(local_2048,local_2070,4);
                  FUN_7100794a90(auStack_2000);
                  FUN_7100794ae0(auStack_2000,(long)param_1 + 0x544c,8);
                  FUN_7100794b80(auStack_2000,&local_2068);
                  *(bool *)((long)param_1 + 0x5434) = local_2068 == local_2070[0];
                }
                *(undefined1 *)((long)param_1 + 0xdec4) = 1;
                uVar13 = local_2018;
                goto LAB_710078c90c;
              }
              puVar16 = &DAT_7100995368;
            }
            else {
              puVar16 = &DAT_7100995358;
            }
            FUN_710081d0a0(auStack_2000,0x14,puVar16,uVar12);
            FUN_710078a770(param_1,(long)param_1 + 0x34,auStack_2000);
            goto LAB_710078c908;
          }
          uVar13 = local_2018;
          if (4 < uVar12) {
            if (uVar12 == 5) {
              param_1[0x12f0] = *(long *)((long)param_1 + 0x53bc);
              param_1[0x12f1] = *(long *)((long)param_1 + 0x53c4);
              *(undefined4 *)(param_1 + 0x12f2) = *(undefined4 *)((long)param_1 + 0x53cc);
              bVar8 = FUN_71007922e0(local_2048);
              *(byte *)((long)param_1 + 0x979c) = bVar8 & 1;
              *(undefined1 *)((long)param_1 + 0x979d) = 0;
              *(undefined2 *)((long)param_1 + 0x979e) = 0;
              uVar13 = local_2018;
            }
            goto LAB_710078c90c;
          }
          if (uVar12 != 1) {
            if (uVar12 - 2 < 2) {
              plVar2 = param_1 + 0xa8b;
              if (uVar12 != 2) {
                plVar2 = param_1 + 0x12f8;
              }
              FUN_7100790c50(plVar2,0);
              lVar18 = *(long *)((long)param_1 + 0x53c4);
              *plVar2 = *(long *)((long)param_1 + 0x53bc);
              plVar2[1] = lVar18;
              *(undefined4 *)(plVar2 + 2) = *(undefined4 *)((long)param_1 + 0x53cc);
              lVar18 = param_1[0xa78];
              *(undefined1 *)((long)plVar2 + 0x2111) = 1;
              plVar2[0x40d] = lVar14;
              uVar10 = FUN_71007922e0(local_2048);
              *(undefined4 *)((long)plVar2 + 0x20a4) = uVar10;
              lVar14 = FUN_71007922e0(local_2048);
              bVar5 = (*(uint *)((long)plVar2 + 0x20a4) & 8) != 0;
              *(bool *)((long)plVar2 + 0x20aa) = bVar5;
              if (bVar5) {
                lVar14 = 0x7fffffff7fffffff;
              }
              plVar2[0x40e] = lVar14;
              lVar15 = plVar2[0x40d];
              if (plVar2[0x40d] < lVar14) {
                lVar15 = lVar14;
              }
              plVar2[0x40f] = lVar15;
              uVar10 = FUN_71007922e0(local_2048);
              uVar12 = *(uint *)((long)plVar2 + 0x20a4);
              *(undefined4 *)((long)plVar2 + 0x24) = uVar10;
              if ((uVar12 >> 1 & 1) != 0) {
                uVar10 = FUN_7100792260(local_2048);
                FUN_710077ea70(plVar2 + 0x40a,uVar10);
                uVar12 = *(uint *)((long)plVar2 + 0x20a4);
              }
              if ((uVar12 >> 2 & 1) == 0) {
                *(undefined4 *)(plVar2 + 0x410) = 0;
              }
              else {
                *(undefined4 *)(plVar2 + 0x410) = 2;
                uVar10 = FUN_7100792260(local_2048);
                *(undefined4 *)((long)plVar2 + 0x2084) = uVar10;
              }
              *(undefined4 *)(plVar2 + 0x423) = 0;
              uVar12 = FUN_71007922e0(local_2048);
              uVar10 = 0x32;
              if ((uVar12 & 0x3f) != 0) {
                uVar10 = 9999;
              }
              *(undefined4 *)((long)plVar2 + 0x1c) = uVar10;
              *(byte *)(plVar2 + 4) = (byte)(uVar12 >> 7) & 7;
              uVar7 = FUN_71007922e0(local_2048);
              *(undefined1 *)(plVar2 + 3) = uVar7;
              uVar13 = FUN_71007922e0(local_2048);
              *(byte *)(plVar2 + 0x422) = (byte)(*(uint *)((long)param_1 + 0x53c4) >> 6) & 1;
              *(undefined4 *)((long)plVar2 + 0x2114) = 2;
              if ((char)plVar2[3] == '\x01') {
                *(undefined4 *)((long)plVar2 + 0x2114) = 1;
              }
              else if ((char)plVar2[3] == '\0') {
                *(undefined4 *)((long)plVar2 + 0x2114) = 0;
              }
              uVar4 = *(uint *)(plVar2 + 1);
              bVar8 = (byte)(uVar12 >> 6) & 1;
              if ((int)lVar18 != 2) {
                bVar8 = 0;
              }
              lVar14 = 0x20000L << (uVar12 >> 10 & 0xf);
              *(byte *)(plVar2 + 0x420) = bVar8;
              uVar12 = *(uint *)((long)plVar2 + 0x20a4) & 1;
              if (uVar12 != 0) {
                lVar14 = 0;
              }
              *(byte *)(plVar2 + 0x415) = (byte)(uVar4 >> 3) & 1;
              *(byte *)((long)plVar2 + 0x20a9) = (byte)(uVar4 >> 4) & 1;
              *(char *)((long)plVar2 + 0x2101) = (char)uVar12;
              uVar10 = 5;
              if (*(char *)((long)plVar2 + 0x20ab) == '\0') {
                uVar10 = 0;
              }
              *(byte *)((long)plVar2 + 0x2112) = (byte)(uVar4 >> 5) & 1;
              if (0x1fff < uVar13) {
                uVar13 = 0x1fff;
              }
              *(undefined4 *)((long)plVar2 + 0x20ac) = uVar10;
              plVar2[0x421] = lVar14;
              FUN_7100792390(local_2048,auStack_2000,uVar13);
              plVar1 = plVar2 + 5;
              auStack_2000[uVar13] = 0;
              FUN_710077f3e0(auStack_2000,plVar1,0x800);
              if (local_2080 != 0) {
                FUN_710078b090(param_1,local_2048,local_2080,plVar2);
              }
              if ((int)lVar18 == 2) {
                FUN_710078b0b0(param_1,plVar1);
                FUN_710078b150(param_1,plVar2);
              }
              else {
                iVar9 = FUN_710080c900(plVar1,&DAT_7100995310);
                if (iVar9 == 0) {
                  *(undefined1 *)((long)param_1 + 0xdebe) = 1;
                }
              }
              uVar13 = local_2018;
              if (iVar3 != iVar11) {
                FUN_7100779510(0x1c,(long)param_1 + 0x34,plVar1);
                uVar13 = local_2018;
              }
            }
            goto LAB_710078c90c;
          }
          FUN_7100790c30(param_1 + 0xa7c);
          param_1[0xa7c] = *(long *)((long)param_1 + 0x53bc);
          param_1[0xa7d] = *(long *)((long)param_1 + 0x53c4);
          *(undefined4 *)(param_1 + 0xa7e) = *(undefined4 *)((long)param_1 + 0x53cc);
          uVar12 = FUN_71007922e0(local_2048);
          *(undefined1 *)(param_1 + 0x1bd8) = 0;
          *(undefined1 *)((long)param_1 + 0xdec2) = 1;
          *(byte *)((long)param_1 + 0xdebc) = (byte)(uVar12 >> 2) & 1;
          *(char *)((long)param_1 + 0xdebd) = (char)(uVar12 & 1);
          *(byte *)((long)param_1 + 0xdebf) = (byte)(uVar12 >> 4) & 1;
          *(byte *)((long)param_1 + 0xdec3) = (byte)(uVar12 >> 3) & 1;
          if ((uVar12 >> 1 & 1) == 0) {
            *(undefined4 *)((long)param_1 + 0xdee4) = 0;
            if ((uVar12 & 1) != 0) {
LAB_710078cc30:
              bVar5 = true;
            }
          }
          else {
            iVar9 = FUN_71007922e0(local_2048);
            *(int *)((long)param_1 + 0xdee4) = iVar9;
            if ((*(char *)((long)param_1 + 0xdebd) != '\0') && (iVar9 == 0)) goto LAB_710078cc30;
          }
          *(bool *)((long)param_1 + 0xdec1) = bVar5;
          if (local_2080 != 0) {
            FUN_710078b090(param_1,local_2048,local_2080,param_1 + 0xa7c);
          }
          uVar13 = local_2018;
          if (((((char)param_1[0xa77] == '\0') && (*(char *)((long)param_1 + 0x53fe) != '\0')) &&
              (param_1[0xa80] != 0)) && (*(int *)(param_1[0x744] + 0x4018) != 0)) {
            uVar10 = *(undefined4 *)((long)param_1 + 0x3a34);
            lVar18 = param_1[0x1bd5];
            lVar14 = param_1[0x1bd6];
            FUN_7100790d40(param_1 + 0x748,param_1,0);
            FUN_7100790fe0(param_1 + 0x748,param_1[0xa80]);
            param_1[0x1bd5] = lVar18;
            param_1[0x1bd6] = lVar14;
            *(undefined4 *)((long)param_1 + 0x3a34) = uVar10;
            uVar13 = local_2018;
          }
          goto LAB_710078c90c;
        }
      }
LAB_710078c900:
      FUN_710078b2c0(param_1);
    }
  }
  else {
    if (param_1[0x1bd5] <= param_1[0x1bd9] + 8) {
      cVar17 = '\0';
      goto LAB_710078c548;
    }
    if (*(char *)(param_1[0x744] + 0xc235) == '\0') {
      iVar9 = (**(code **)(*param_1 + 0x20))(param_1,auStack_2000,0x10);
      if (iVar9 == 0x10) {
        cVar6 = *(char *)(param_1[0x744] + 0xc230);
        if (cVar6 == '\0') {
          cVar6 = FUN_710077ede0();
        }
        FUN_710078af40(param_1);
        plVar2 = param_1 + 0x407;
        FUN_710078fb20(plVar2,0,5,param_1[0x744] + 0xc030,(long)param_1 + 0x543c,auStack_2000,
                       (int)param_1[0xa87],0,&local_2068);
        if ((*(char *)((long)param_1 + 0x5434) != '\0') &&
           (*(long *)((long)param_1 + 0x544c) != CONCAT44(uStack_2064,local_2068))) {
          if (cVar6 != '\0') {
            FUN_7100779510(6,(long)param_1 + 0x34);
            *(undefined1 *)((long)param_1 + 0xded1) = 1;
            FUN_71007788e0(&DAT_7100d1bd98,0xb);
            goto LAB_710078c908;
          }
          FUN_7100779510(0x83,(long)param_1 + 0x34);
          FUN_710077e290(param_1[0x744] + 0xc030);
          FUN_71007788e0(&DAT_7100d1bd98,0xb);
          *(undefined4 *)(param_1[0x744] + 0x14808) = 0x18;
          FUN_7100778a30(&DAT_7100d1bd98,0xb);
        }
        goto LAB_710078c548;
      }
      goto LAB_710078c958;
    }
    FUN_7100779430(0x7f,(long)param_1 + 0x34);
    *(undefined1 *)((long)param_1 + 0xded1) = 1;
  }
LAB_710078c908:
  uVar13 = 0;
LAB_710078c90c:
  if (local_2048[0] != 0) {
    if (local_2028 != '\0') {
      FUN_710077e260(local_2048[0],local_2038);
    }
    FUN_710081c200(local_2048[0]);
  }
  return uVar13;
}



// ===== FUN_710078cce0 @ 710078cce0 (size=176) =====

long FUN_710078cce0(long *param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(char *)((long)param_1 + 0xded1) != '\0') {
    return 0;
  }
  lVar2 = (**(code **)(*param_1 + 0x30))();
  iVar1 = (int)param_1[0x1bd7];
  param_1[0x1bd5] = lVar2;
  if (iVar1 == 2) {
    lVar2 = FUN_710078b620(param_1);
  }
  else if (iVar1 == 3) {
    lVar2 = FUN_710078c3d0(param_1);
  }
  else {
    if (iVar1 != 1) goto LAB_710078cd30;
    lVar2 = FUN_710078b300(param_1);
  }
  if (lVar2 != 0) {
    if (param_1[0x1bd5] < param_1[0x1bd6]) {
      return lVar2;
    }
    FUN_710078b2c0(param_1);
  }
LAB_710078cd30:
  *(undefined4 *)((long)param_1 + 0x3a34) = 0xff;
  return 0;
}



// ===== FUN_710078cd90 @ 710078cd90 (size=164) =====

long FUN_710078cd90(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = 0;
  while( true ) {
    uVar3 = uVar3 + 1;
    lVar2 = FUN_710078cce0(param_1);
    if (lVar2 == 0) {
      return 0;
    }
    if ((param_2 != 5) && (*(int *)(param_1 + 0x3a34) == 5)) break;
    if ((uVar3 & 0x7f) == 0) {
      FUN_710077e900();
      iVar1 = *(int *)(param_1 + 0x3a34);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x3a34);
    }
    if (param_2 == iVar1) {
      return lVar2;
    }
    FUN_7100789580(param_1);
  }
  return 0;
}



// ===== FUN_710078ce40 @ 710078ce40 (size=180) =====

long FUN_710078ce40(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = 0;
  while( true ) {
    uVar3 = uVar3 + 1;
    lVar2 = FUN_710078cce0(param_1);
    if (lVar2 == 0) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0x3a34);
    if (iVar1 == 5) break;
    if ((uVar3 & 0x7f) == 0) {
      FUN_710077e900();
      iVar1 = *(int *)(param_1 + 0x3a34);
    }
    if ((iVar1 == 3) && (iVar1 = FUN_710080c900(param_1 + 0x97e8,param_2), iVar1 == 0)) {
      return lVar2;
    }
    FUN_7100789580(param_1);
  }
  return 0;
}



// ===== FUN_710078cf00 @ 710078cf00 (size=840) =====

char FUN_710078cf00(long param_1,long *param_2,long param_3,undefined1 param_4)

{
  long lVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 auStack_e958 [19864];
  undefined8 local_9bc0;
  undefined1 local_9ba8;
  
  if (*(char *)(param_1 + 0xded0) != '\0') {
    FUN_7100779430(0x1d,param_1 + 0x34);
    FUN_71007788e0(&DAT_7100d1bd98,3);
    return '\0';
  }
  if (5 < *(byte *)(param_1 + 0x97e0)) {
LAB_710078d114:
    FUN_7100779430(0x1e,param_1 + 0x34);
    return '\0';
  }
  uVar4 = 0x32;
  if (*(int *)(param_1 + 0xdeb8) != 3) {
    uVar4 = 0x1d;
  }
  if (uVar4 < *(uint *)(param_1 + 0x97dc)) goto LAB_710078d114;
  if ((*(long *)(param_1 + 0xb828) == 0) && (*(char *)(param_1 + 0xb869) == '\0')) {
    return '\x01';
  }
  lVar1 = param_1 + 0x3908;
  FUN_710077da70(lVar1);
  FUN_7100785c30(auStack_e958,lVar1);
  FUN_7100783930(auStack_e958,*(undefined8 *)(param_1 + 0xb8c8),0);
  if (param_3 == 0) {
    uVar5 = *(ulong *)(param_1 + 0xb830);
    if ((long)uVar5 < 0x1000001) {
      if (param_2 == (long *)0x0) {
        *(undefined1 *)(param_1 + 0x3959) = 1;
      }
      else {
        if ((ulong)param_2[2] < uVar5) {
          FUN_710078a650(param_2);
        }
        else {
          param_2[1] = uVar5;
        }
        FUN_710077e170(lVar1,*param_2,*(undefined4 *)(param_1 + 0xb830));
      }
      goto LAB_710078cfc0;
    }
    FUN_7100779430(0x1e,param_1 + 0x34);
  }
  else {
LAB_710078cfc0:
    if (*(char *)(param_1 + 0xb86b) != '\0') {
      if (*(char *)(*(long *)(param_1 + 0x3a20) + 0xc230) == '\0') goto LAB_710078d1a8;
      lVar2 = param_1 + 0xb871;
      if (*(char *)(param_1 + 0xb870) == '\0') {
        lVar2 = 0;
      }
      FUN_710077e0f0(lVar1,0,*(undefined4 *)(param_1 + 0xb86c),*(long *)(param_1 + 0x3a20) + 0xc030,
                     lVar2,param_1 + 0xb881,*(undefined4 *)(param_1 + 0xb8bc),param_1 + 0xb89b,
                     param_1 + 0xb892);
    }
    FUN_710077c6f0(param_1 + 0x3a00,*(undefined4 *)(param_1 + 0xb840),1);
    *(undefined1 *)(param_1 + 0x3958) = 0;
    *(undefined8 *)(param_1 + 0x3948) = *(undefined8 *)(param_1 + 0xb828);
    *(undefined8 *)(param_1 + 0x3950) = *(undefined8 *)(param_1 + 0xb828);
    FUN_710077e0b0(lVar1,param_1,param_3);
    local_9bc0 = *(undefined8 *)(param_1 + 0xb830);
    *(undefined1 *)(param_1 + 0x3959) = param_4;
    local_9ba8 = 0;
    *(undefined1 *)(param_1 + 0x39a1) = *(undefined1 *)(param_1 + 0xb869);
    *(long *)(param_1 + 0x3978) = param_1 + 0x97c0;
    *(undefined8 *)(param_1 + 0x3980) = 0;
    if (*(char *)(param_1 + 0x97e0) == '\0') {
      FUN_7100778f10(lVar1);
    }
    else {
      FUN_7100788850(auStack_e958,*(undefined4 *)(param_1 + 0x97dc),0);
    }
    lVar1 = param_1 + 0xb89b;
    if (*(char *)(param_1 + 0xb89a) == '\0') {
      lVar1 = 0;
    }
    cVar3 = FUN_710077c8e0(param_1 + 0x3a00,param_1 + 0xb840,lVar1);
    if (cVar3 != '\0') goto LAB_710078d0dc;
    FUN_7100779510(0x1f,param_1 + 0x34,param_1 + 0x97e8);
    FUN_71007788e0(&DAT_7100d1bd98,3);
    if (param_2 != (long *)0x0) {
      if (*param_2 != 0) {
        FUN_710081c200();
        *param_2 = 0;
      }
      param_2[1] = 0;
      param_2[2] = 0;
      goto LAB_710078d0dc;
    }
  }
LAB_710078d1a8:
  cVar3 = '\0';
LAB_710078d0dc:
  FUN_71007837d0(auStack_e958);
  return cVar3;
}



// ===== FUN_710078d260 @ 710078d260 (size=1080) =====

void FUN_710078d260(long param_1,byte *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  byte *pbVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  int aiStack_80 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  uint local_20 [4];
  uint uStack_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  piVar12 = aiStack_80;
  do {
    piVar13 = piVar12 + 1;
    *piVar12 = (uint)*param_2 + (uint)param_2[1] * 0x100 + (uint)param_2[2] * 0x10000 +
               (uint)param_2[3] * 0x1000000;
    param_2 = param_2 + 4;
    piVar12 = piVar13;
  } while ((int *)&local_40 != piVar13);
  puVar1 = *(undefined8 **)(param_1 + 0xf8);
  uStack_38 = puVar1[1];
  local_40 = *puVar1;
  local_28 = puVar1[3];
  local_30 = puVar1[2];
  local_20[3] = 0xa54ff53a;
  local_98 = 0xd;
  local_20[2] = 0x3c6ef372;
  local_9c = 0xc;
  local_20[1] = 0xbb67ae85;
  local_20[0] = 0x6a09e667;
  local_a0 = 0xb;
  uVar25 = 0xf;
  uVar19 = 8;
  local_a4 = 9;
  local_4 = (*(uint **)(param_1 + 0x108))[1] ^ 0x5be0cd19;
  local_8 = **(uint **)(param_1 + 0x108) ^ 0x1f83d9ab;
  local_94 = 0;
  uVar18 = 7;
  uVar20 = 5;
  local_28._4_4_ = (uint)((ulong)local_28 >> 0x20);
  uStack_10 = **(uint **)(param_1 + 0x100) ^ 0x510e527f;
  local_c = (*(uint **)(param_1 + 0x100))[1] ^ 0x9b05688c;
  uVar21 = 3;
  uVar17 = 1;
  local_40._4_4_ = (uint)((ulong)local_40 >> 0x20);
  uVar9 = 6;
  uStack_38._4_4_ = (uint)((ulong)uStack_38 >> 0x20);
  uVar11 = 4;
  local_30._4_4_ = (uint)((ulong)local_30 >> 0x20);
  uVar22 = 2;
  uVar24 = 0xe;
  uVar23 = 10;
  pbVar14 = &DAT_71009c5ec0;
  uVar16 = (uint)local_40;
  while( true ) {
    local_40._4_4_ = local_30._4_4_ + aiStack_80[(int)uVar22] + local_40._4_4_;
    local_c = local_40._4_4_ ^ local_c;
    uVar2 = local_c >> 0x10 | local_c << 0x10;
    local_20[1] = uVar2 + local_20[1];
    uStack_38._4_4_ = local_28._4_4_ + aiStack_80[(int)uVar9] + uStack_38._4_4_;
    local_30._4_4_ = local_20[1] ^ local_30._4_4_;
    local_4 = uStack_38._4_4_ ^ local_4;
    uVar3 = local_30._4_4_ >> 0xc | local_30._4_4_ << 0x14;
    uVar22 = local_4 >> 0x10 | local_4 << 0x10;
    local_20[3] = uVar22 + local_20[3];
    uVar16 = (uint)local_30 + aiStack_80[(int)local_94] + uVar16;
    local_28._4_4_ = local_20[3] ^ local_28._4_4_;
    uStack_10 = uVar16 ^ uStack_10;
    uVar4 = local_28._4_4_ >> 0xc | local_28._4_4_ << 0x14;
    uVar5 = uStack_10 >> 0x10 | uStack_10 << 0x10;
    uStack_38._0_4_ = (uint)local_28 + aiStack_80[(int)uVar11] + (uint)uStack_38;
    local_20[0] = uVar5 + local_20[0];
    local_8 = (uint)uStack_38 ^ local_8;
    local_30._0_4_ = local_20[0] ^ (uint)local_30;
    uVar6 = local_8 >> 0x10 | local_8 << 0x10;
    uVar7 = (uint)local_30 >> 0xc | (uint)local_30 << 0x14;
    local_20[2] = uVar6 + local_20[2];
    local_28._0_4_ = local_20[2] ^ (uint)local_28;
    uVar8 = (uint)local_28 >> 0xc | (uint)local_28 << 0x14;
    uVar9 = uStack_38._4_4_ + aiStack_80[(int)uVar18] + uVar4;
    uVar16 = uVar16 + aiStack_80[(int)uVar17] + uVar7;
    uVar11 = local_40._4_4_ + aiStack_80[(int)uVar21] + uVar3;
    uVar17 = (uint)uStack_38 + aiStack_80[(int)uVar20] + uVar8;
    uVar22 = uVar22 ^ uVar9;
    uVar5 = uVar5 ^ uVar16;
    uVar2 = uVar2 ^ uVar11;
    uVar6 = uVar6 ^ uVar17;
    uVar18 = uVar22 >> 8 | uVar22 << 0x18;
    uVar20 = uVar5 >> 8 | uVar5 << 0x18;
    uVar22 = uVar2 >> 8 | uVar2 << 0x18;
    uVar21 = uVar6 >> 8 | uVar6 << 0x18;
    local_20[3] = local_20[3] + uVar18;
    local_20[0] = local_20[0] + uVar20;
    local_20[1] = local_20[1] + uVar22;
    local_20[2] = local_20[2] + uVar21;
    uVar4 = uVar4 ^ local_20[3];
    uVar7 = uVar7 ^ local_20[0];
    uVar3 = uVar3 ^ local_20[1];
    uVar8 = uVar8 ^ local_20[2];
    uVar4 = uVar4 >> 7 | uVar4 << 0x19;
    uVar6 = uVar7 >> 7 | uVar7 << 0x19;
    uVar5 = uVar3 >> 7 | uVar3 << 0x19;
    uVar2 = uVar8 >> 7 | uVar8 << 0x19;
    uVar17 = uVar17 + aiStack_80[(int)local_9c] + uVar4;
    uVar16 = uVar16 + aiStack_80[(int)uVar19] + uVar5;
    uVar11 = uVar11 + aiStack_80[(int)uVar23] + uVar2;
    uVar9 = uVar9 + aiStack_80[(int)uVar24] + uVar6;
    uVar18 = uVar18 ^ uVar16;
    uVar20 = uVar20 ^ uVar11;
    uVar21 = uVar21 ^ uVar9;
    uVar22 = uVar22 ^ uVar17;
    uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
    uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
    uVar19 = uVar21 >> 0x10 | uVar21 << 0x10;
    uVar21 = uVar22 >> 0x10 | uVar22 << 0x10;
    local_20[2] = local_20[2] + uVar18;
    local_20[3] = local_20[3] + uVar20;
    local_20[1] = local_20[1] + uVar19;
    local_20[0] = local_20[0] + uVar21;
    uVar5 = uVar5 ^ local_20[2];
    uVar2 = uVar2 ^ local_20[3];
    uVar6 = uVar6 ^ local_20[1];
    uVar4 = uVar4 ^ local_20[0];
    uVar23 = uVar5 >> 0xc | uVar5 << 0x14;
    uVar24 = uVar2 >> 0xc | uVar2 << 0x14;
    uVar22 = uVar6 >> 0xc | uVar6 << 0x14;
    uVar5 = uVar4 >> 0xc | uVar4 << 0x14;
    uVar16 = uVar16 + aiStack_80[(int)local_a4] + uVar23;
    uStack_38._4_4_ = uVar9 + aiStack_80[(int)uVar25] + uVar22;
    uVar18 = uVar18 ^ uVar16;
    uVar19 = uVar19 ^ uStack_38._4_4_;
    local_4 = uVar18 >> 8 | uVar18 << 0x18;
    local_40._4_4_ = uVar11 + aiStack_80[(int)local_a0] + uVar24;
    uStack_38._0_4_ = uVar17 + aiStack_80[(int)local_98] + uVar5;
    uVar20 = uVar20 ^ local_40._4_4_;
    uVar21 = uVar21 ^ (uint)uStack_38;
    local_8 = uVar19 >> 8 | uVar19 << 0x18;
    uStack_10 = uVar20 >> 8 | uVar20 << 0x18;
    local_c = uVar21 >> 8 | uVar21 << 0x18;
    local_20[1] = local_20[1] + local_8;
    local_20[2] = local_20[2] + local_4;
    local_20[3] = local_20[3] + uStack_10;
    local_20[0] = local_20[0] + local_c;
    uVar22 = uVar22 ^ local_20[1];
    uVar23 = uVar23 ^ local_20[2];
    uVar24 = uVar24 ^ local_20[3];
    uVar5 = uVar5 ^ local_20[0];
    local_30._0_4_ = uVar22 >> 7 | uVar22 << 0x19;
    local_30._4_4_ = uVar23 >> 7 | uVar23 << 0x19;
    local_28._0_4_ = uVar24 >> 7 | uVar24 << 0x19;
    local_28._4_4_ = uVar5 >> 7 | uVar5 << 0x19;
    if (pbVar14 == &DAT_71009c5f50) break;
    uVar17 = (uint)pbVar14[1];
    uVar22 = (uint)pbVar14[2];
    local_94 = (uint)*pbVar14;
    uVar21 = (uint)pbVar14[3];
    uVar11 = (uint)pbVar14[4];
    local_a4 = (uint)pbVar14[9];
    uVar20 = (uint)pbVar14[5];
    uVar9 = (uint)pbVar14[6];
    local_a0 = (uint)pbVar14[0xb];
    uVar18 = (uint)pbVar14[7];
    uVar19 = (uint)pbVar14[8];
    local_9c = (uint)pbVar14[0xc];
    uVar23 = (uint)pbVar14[10];
    uVar24 = (uint)pbVar14[0xe];
    uVar25 = (uint)pbVar14[0xf];
    local_98 = (uint)pbVar14[0xd];
    pbVar14 = pbVar14 + 0x10;
  }
  lVar10 = 0;
  puVar15 = (uint *)((long)&local_40 + 4);
  while( true ) {
    *(uint *)((long)puVar1 + lVar10 * 4) =
         *(uint *)((long)puVar1 + lVar10 * 4) ^ puVar15[7] ^ uVar16;
    lVar10 = lVar10 + 1;
    if (lVar10 == 8) break;
    uVar16 = *puVar15;
    puVar15 = puVar15 + 1;
  }
  return;
}



// ===== FUN_710078d6a0 @ 710078d6a0 (size=140) =====

void FUN_710078d6a0(undefined8 *param_1,uint param_2,int param_3)

{
  long lVar1;
  undefined4 uVar2;
  uint *puVar3;
  
  uVar2 = 0x6a09e667;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  puVar3 = (uint *)param_1[0x1f];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  lVar1 = 0;
  while( true ) {
    *(undefined4 *)((long)puVar3 + lVar1) = uVar2;
    if (lVar1 + 4 == 0x20) break;
    uVar2 = *(undefined4 *)((long)&DAT_71009c5e94 + lVar1);
    lVar1 = lVar1 + 4;
  }
  *puVar3 = *puVar3 ^ 0x2080020;
  puVar3[2] = puVar3[2] ^ param_2;
  puVar3[3] = puVar3[3] ^ (param_3 << 0x10 | 0x20000000U);
  return;
}



// ===== FUN_710078d730 @ 710078d730 (size=236) =====

void FUN_710078d730(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  
  if (param_3 == 0) {
    return;
  }
  lVar7 = *(long *)(param_1 + 0x110);
  do {
    uVar6 = 0x80 - lVar7;
    lVar1 = *(long *)(param_1 + 0xf0) + lVar7;
    if (param_3 <= uVar6) {
      FUN_710080f900(lVar1,param_2,param_3);
      *(ulong *)(param_1 + 0x110) = *(long *)(param_1 + 0x110) + param_3;
      return;
    }
    FUN_710080f900(lVar1,param_2,uVar6);
    puVar4 = *(uint **)(param_1 + 0x100);
    param_2 = param_2 + uVar6;
    puVar5 = *(undefined8 **)(param_1 + 0xf0);
    uVar2 = *puVar4;
    uVar3 = puVar4[1];
    *(ulong *)(param_1 + 0x110) = *(long *)(param_1 + 0x110) + uVar6;
    if (uVar2 + 0x40 < 0x40) {
      uVar3 = uVar3 + 1;
    }
    *puVar4 = uVar2 + 0x40;
    puVar4[1] = uVar3;
    FUN_710078d260(param_1,puVar5);
    param_3 = (lVar7 + param_3) - 0x80;
    puVar5[1] = puVar5[9];
    *puVar5 = puVar5[8];
    puVar5[3] = puVar5[0xb];
    puVar5[2] = puVar5[10];
    puVar5[5] = puVar5[0xd];
    puVar5[4] = puVar5[0xc];
    puVar5[7] = puVar5[0xf];
    puVar5[6] = puVar5[0xe];
    lVar7 = *(long *)(param_1 + 0x110) + -0x40;
    *(long *)(param_1 + 0x110) = lVar7;
  } while (param_3 != 0);
  return;
}



// ===== FUN_710078d820 @ 710078d820 (size=260) =====

void FUN_710078d820(long param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)(param_1 + 0x110);
  if (0x40 < uVar6) {
    puVar5 = *(uint **)(param_1 + 0x100);
    lVar4 = *(long *)(param_1 + 0xf0);
    uVar1 = puVar5[1];
    if (*puVar5 + 0x40 < 0x40) {
      uVar1 = uVar1 + 1;
    }
    *puVar5 = *puVar5 + 0x40;
    puVar5[1] = uVar1;
    FUN_710078d260(param_1,lVar4);
    *(ulong *)(param_1 + 0x110) = uVar6 - 0x40;
    FUN_710080f900(lVar4,lVar4 + 0x40);
    uVar6 = *(ulong *)(param_1 + 0x110);
  }
  puVar5 = *(uint **)(param_1 + 0x100);
  puVar2 = *(undefined4 **)(param_1 + 0x108);
  uVar1 = puVar5[1];
  if (CARRY4((uint)uVar6,*puVar5)) {
    uVar1 = uVar1 + 1;
  }
  *puVar5 = (uint)uVar6 + *puVar5;
  puVar5[1] = uVar1;
  if (*(char *)(param_1 + 0x118) != '\0') {
    puVar2[1] = 0xffffffff;
  }
  lVar4 = *(long *)(param_1 + 0xf0);
  *puVar2 = 0xffffffff;
  FUN_7100808340(lVar4 + uVar6,0,0x80 - uVar6);
  FUN_710078d260(param_1,*(undefined8 *)(param_1 + 0xf0));
  lVar4 = 0;
  do {
    uVar3 = *(undefined4 *)(*(long *)(param_1 + 0xf8) + lVar4);
    lVar4 = lVar4 + 4;
    *param_2 = (char)uVar3;
    param_2[1] = (char)((uint)uVar3 >> 8);
    param_2[2] = (char)((uint)uVar3 >> 0x10);
    param_2[3] = (char)((uint)uVar3 >> 0x18);
    param_2 = param_2 + 4;
  } while (lVar4 != 0x20);
  return;
}



// ===== FUN_710078d930 @ 710078d930 (size=120) =====

void FUN_710078d930(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_7100808340(param_1 + 0xa20,0,0x200);
  *(undefined8 *)(param_1 + 0xc20) = 0;
  uVar2 = 0;
  FUN_710078d6a0(param_1 + 0x900,0,1);
  lVar3 = param_1;
  do {
    uVar1 = uVar2 & 0xffffffff;
    uVar2 = (ulong)((int)uVar2 + 1);
    FUN_710078d6a0(lVar3,uVar1,0);
    lVar3 = lVar3 + 0x120;
  } while ((int)uVar2 != 8);
  *(undefined1 *)(param_1 + 0x8f8) = 1;
  *(undefined1 *)(param_1 + 0xa18) = 1;
  return;
}



// ===== FUN_710078d9b0 @ 710078d9b0 (size=92) =====

void FUN_710078d9b0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = param_1[1];
  uVar3 = param_1[2];
  if (0x1ff < uVar3) {
    lVar4 = lVar2;
    do {
      lVar1 = lVar4 + 0x200;
      FUN_710078d730(*param_1,lVar4,0x40);
      lVar4 = lVar1;
    } while (lVar1 != lVar2 + (uVar3 - 0x200 & 0xfffffffffffffe00) + 0x200);
  }
  return;
}



// ===== FUN_710078da10 @ 710078da10 (size=292) =====

void FUN_710078da10(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long local_c0;
  long lStack_b8;
  ulong local_b0;
  
  lVar3 = *(long *)(param_1 + 0xc20);
  uVar5 = 0x200 - lVar3;
  if (lVar3 != 0 && uVar5 <= param_3) {
    lVar4 = param_1 + 0xa20;
    FUN_710080f900(lVar4 + lVar3,param_2,uVar5);
    lVar2 = param_1;
    do {
      lVar1 = lVar2 + 0x120;
      FUN_710078d730(lVar2,lVar4,0x40);
      lVar4 = lVar4 + 0x40;
      lVar2 = lVar1;
    } while (lVar1 != param_1 + 0x900);
    param_2 = param_2 + uVar5;
    param_3 = lVar3 + (param_3 - 0x200);
    lVar3 = 0;
  }
  uVar5 = 0;
  do {
    lVar4 = uVar5 * 0x40;
    if (uVar5 < 8) {
      local_c0 = param_1 + uVar5 * 0x120;
      uVar5 = uVar5 + 1;
      lStack_b8 = param_2 + lVar4;
      local_b0 = param_3;
      FUN_710078d9b0(&local_c0);
    }
  } while (uVar5 != 8);
  uVar5 = param_3 & 0x1ff;
  if (uVar5 == 0) {
    *(long *)(param_1 + 0xc20) = lVar3;
    return;
  }
  FUN_710080f900(param_1 + 0xa20 + lVar3,param_2 + (param_3 & 0xfffffffffffffe00),uVar5);
  *(ulong *)(param_1 + 0xc20) = lVar3 + uVar5;
  return;
}



// ===== FUN_710078db40 @ 710078db40 (size=232) =====

void FUN_710078db40(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_100 [256];
  
  uVar3 = 0;
  lVar5 = param_1;
  puVar4 = auStack_100;
  do {
    while (uVar3 < *(ulong *)(param_1 + 0xc20)) {
      uVar2 = *(ulong *)(param_1 + 0xc20) - uVar3;
      if (0x40 < uVar2) {
        uVar2 = 0x40;
      }
      FUN_710078d730(lVar5,param_1 + 0xa20 + uVar3,uVar2);
      uVar3 = uVar3 + 0x40;
      FUN_710078d820(lVar5,puVar4);
      lVar5 = lVar5 + 0x120;
      puVar4 = puVar4 + 0x20;
      if (uVar3 == 0x200) goto LAB_710078dbe0;
    }
    uVar3 = uVar3 + 0x40;
    FUN_710078d820(lVar5,puVar4);
    lVar5 = lVar5 + 0x120;
    puVar4 = puVar4 + 0x20;
  } while (uVar3 != 0x200);
LAB_710078dbe0:
  puVar4 = auStack_100;
  do {
    puVar1 = puVar4 + 0x20;
    FUN_710078d730(param_1 + 0x900,puVar4);
    puVar4 = puVar1;
  } while (puVar1 != &stack0x00000000);
  FUN_710078d820(param_1 + 0x900,param_2);
  return;
}



// ===== FUN_710078dc30 @ 710078dc30 (size=432) =====

char FUN_710078dc30(undefined8 param_1,char param_2,undefined8 param_3,char param_4,
                   undefined4 param_5)

{
  char cVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  int local_6008 [2048];
  undefined1 auStack_4008 [8192];
  undefined8 local_2008;
  undefined1 auStack_2000 [8192];
  
  puVar2 = (undefined8 *)FUN_710077d120(param_3,0,0);
  local_6008[0] = 0;
  FUN_710077e790(param_1);
  do {
    while( true ) {
      cVar1 = FUN_710077e720(param_1,auStack_4008,0x800);
      if (cVar1 == '\0') {
        return '\0';
      }
      puVar3 = (undefined4 *)FUN_710077cf20(auStack_4008);
      cVar1 = FUN_710077cf80(*puVar3);
      if (param_2 == '\0') {
        if (cVar1 != '\0') {
          FUN_710077e630(auStack_4008,&DAT_71009951f0,0x800);
        }
      }
      else if (cVar1 != '\0') {
        *puVar3 = 0;
      }
      if ((param_4 != '\0') && (cVar1 = FUN_710077d890(auStack_4008), cVar1 != '\0')) break;
      piVar4 = (int *)FUN_710077d120(auStack_4008,0,0);
      puVar5 = puVar2;
      if ((*piVar4 == 0x2a) && (cVar1 = FUN_710077cf80(piVar4[1]), cVar1 != '\0')) {
        local_2008 = 0x2f0000002e;
        FUN_710077e5f0(auStack_2000,puVar2,0x800);
        puVar5 = &local_2008;
      }
      cVar1 = FUN_710077cb10(piVar4,puVar5,param_5);
      if (cVar1 != '\0') {
        return cVar1;
      }
    }
    if (local_6008[0] == 0) {
      FUN_710077d8a0(param_3,local_6008,0x800);
    }
    cVar1 = FUN_710077cb10(auStack_4008,local_6008,param_5);
  } while (cVar1 == '\0');
  return cVar1;
}



// ===== FUN_710078dde0 @ 710078dde0 (size=152) =====

byte FUN_710078dde0(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                   char param_5)

{
  byte bVar1;
  
  bVar1 = FUN_710078dc30(param_1 + 0x18940,param_3,param_2,param_4,6);
  if (((bVar1 == 0) && (param_5 != '\0')) && (*(long *)(param_1 + 0x18a30) != 0)) {
    bVar1 = FUN_710078dc30(param_1 + 0x18a00,param_3,param_2,param_4,6);
    bVar1 = bVar1 ^ 1;
  }
  return bVar1;
}



// ===== FUN_710078de80 @ 710078de80 (size=304) =====

char FUN_710078de80(long param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  
  if (*(ulong *)(param_1 + 0xe6d0) == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = *(char *)(param_1 + 0xe6e8);
    if (*param_2 < *(ulong *)(param_1 + 0xe6d0)) {
      if (cVar2 != '\0') {
        return '\0';
      }
    }
    else if (cVar2 == '\0') {
      return '\x01';
    }
  }
  if (*(ulong *)(param_1 + 0xe6f0) != 0) {
    cVar3 = *(char *)(param_1 + 0xe708);
    if (*param_2 < *(ulong *)(param_1 + 0xe6f0)) {
      cVar2 = cVar3;
      if (cVar3 == '\0') {
        return '\x01';
      }
    }
    else if (cVar3 != '\0') {
      return '\0';
    }
  }
  cVar3 = cVar2;
  if (*(ulong *)(param_1 + 0xe6d8) != 0) {
    cVar3 = *(char *)(param_1 + 0xe6e9);
    if (*param_3 < *(ulong *)(param_1 + 0xe6d8)) {
      bVar1 = cVar3 != '\0';
      cVar3 = cVar2;
      if (bVar1) {
        return '\0';
      }
    }
    else if (cVar3 == '\0') {
      return '\x01';
    }
  }
  if (*(ulong *)(param_1 + 0xe6f8) != 0) {
    cVar2 = *(char *)(param_1 + 0xe709);
    if (*param_3 < *(ulong *)(param_1 + 0xe6f8)) {
      cVar3 = cVar2;
      if (cVar2 == '\0') {
        return '\x01';
      }
    }
    else if (cVar2 != '\0') {
      return '\0';
    }
  }
  cVar2 = cVar3;
  if (*(ulong *)(param_1 + 0xe6e0) != 0) {
    cVar2 = *(char *)(param_1 + 0xe6ea);
    if (*param_4 < *(ulong *)(param_1 + 0xe6e0)) {
      bVar1 = cVar2 != '\0';
      cVar2 = cVar3;
      if (bVar1) {
        return '\0';
      }
    }
    else if (cVar2 == '\0') {
      return '\x01';
    }
  }
  if (*(ulong *)(param_1 + 0xe700) != 0) {
    if (*param_4 < *(ulong *)(param_1 + 0xe700)) {
      return '\x01';
    }
    if (*(char *)(param_1 + 0xe70a) != '\0') {
      cVar2 = '\0';
    }
    return cVar2;
  }
  return cVar2;
}



// ===== FUN_710078dfb0 @ 710078dfb0 (size=80) =====

bool FUN_710078dfb0(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  if (param_2 != 0x7fffffff7fffffff) {
    lVar2 = *(long *)(param_1 + 0xe710);
    bVar1 = lVar2 <= param_2 && lVar2 != 0x7fffffff7fffffff;
    if (lVar2 > param_2 || lVar2 == 0x7fffffff7fffffff) {
      bVar1 = *(long *)(param_1 + 0xe718) != 0x7fffffff7fffffff &&
              param_2 <= *(long *)(param_1 + 0xe718);
    }
    return bVar1;
  }
  return false;
}



// ===== FUN_710078e000 @ 710078e000 (size=408) =====

int FUN_710078e000(uint *param_1,long param_2,long param_3,undefined4 param_4,undefined8 param_5,
                  undefined4 *param_6,int param_7)

{
  long lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  
  if (param_6 != (undefined4 *)0x0 && param_7 != 0) {
    *param_6 = 0;
  }
  lVar1 = param_2 + 0x28;
  cVar3 = *(char *)(param_2 + 0x2101);
  cVar2 = FUN_710078dde0(param_1,lVar1,cVar3,0,1);
  if (((cVar2 == '\0') &&
      (cVar2 = FUN_710078de80(param_1,param_2 + 0x2050,param_2 + 0x2058,param_2 + 0x2060),
      cVar2 == '\0')) && ((*(uint *)(param_2 + 0x24) & *param_1) == 0)) {
    if (*(char *)(param_2 + 0x2101) == '\0') {
      if ((*(char *)((long)param_1 + 10) != '\0') && ((*(uint *)(param_2 + 0x24) & param_1[1]) == 0)
         ) {
        return 0;
      }
    }
    else {
      if ((char)param_1[2] != '\0') {
        return 0;
      }
      if ((*(char *)((long)param_1 + 10) != '\0') && (*(char *)((long)param_1 + 9) == '\0')) {
        return 0;
      }
    }
    if ((cVar3 != '\0') ||
       (cVar3 = FUN_710078dfb0(param_1,*(undefined8 *)(param_2 + 0x2070)), cVar3 == '\0')) {
      iVar6 = 1;
      FUN_710077e790(param_1 + 0x6220);
      while (lVar5 = FUN_710077e770(param_1 + 0x6220), lVar5 != 0) {
        cVar3 = FUN_710077cb10(lVar5,lVar1,param_4);
        if (cVar3 != '\0') {
          if (param_3 != 0) {
            iVar4 = thunk_FUN_710080c900(lVar5,lVar1);
            *(bool *)param_3 = iVar4 == 0;
          }
          if (param_6 != (undefined4 *)0x0) {
            FUN_710077e5f0(param_6,lVar5,param_7);
            return iVar6;
          }
          return iVar6;
        }
        iVar6 = iVar6 + 1;
      }
    }
  }
  return 0;
}



// ===== FUN_710078e1a0 @ 710078e1a0 (size=160) =====

void FUN_710078e1a0(long param_1)

{
  FUN_710077ce00();
  *(undefined2 *)(param_1 + 0x14830) = 0;
  *(undefined4 *)(param_1 + 0x14834) = 0;
  *(undefined1 *)(param_1 + 0x14838) = 0;
  *(undefined4 *)(param_1 + 0x1483c) = 0;
  *(undefined4 *)(param_1 + 0x1687c) = 0;
  FUN_710077e7a0(param_1 + 0x18880);
  FUN_710077e7a0(param_1 + 0x18940);
  FUN_710077e7a0(param_1 + 0x18a00);
  FUN_710077e7a0(param_1 + 0x18b80);
  FUN_710077e7a0(param_1 + 0x18ac0);
  if (*(long *)(param_1 + 0xe280) != 0) {
    FUN_710081c200();
    *(long *)(param_1 + 0xe280) = 0;
  }
  *(undefined8 *)(param_1 + 0xe288) = 0;
  *(undefined8 *)(param_1 + 58000) = 0;
  return;
}



// ===== FUN_710078e240 @ 710078e240 (size=12) =====

void FUN_710078e240(long param_1)

{
  FUN_710077e890(param_1 + 0x18ac0);
  return;
}



// ===== FUN_710078e250 @ 710078e250 (size=136) =====

void FUN_710078e250(long param_1)

{
  FUN_710077ce70();
  FUN_710077e840(param_1 + 0x18880);
  FUN_710077e840(param_1 + 0x18940);
  FUN_710077e840(param_1 + 0x18a00);
  FUN_710077e840(param_1 + 0x18ac0);
  FUN_710077e840(param_1 + 0x18b80);
  FUN_710078e1a0(param_1);
  return;
}



// ===== FUN_710078e350 @ 710078e350 (size=76) =====

void FUN_710078e350(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar5 = 0;
    do {
      uVar3 = uVar5 & 0xffffffff;
      iVar4 = 8;
      do {
        uVar2 = (uint)uVar3 >> 1;
        uVar1 = uVar2 ^ 0xedb88320;
        if ((uVar3 & 1) == 0) {
          uVar1 = uVar2;
        }
        uVar3 = (ulong)uVar1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      *(uint *)(param_1 + uVar5 * 4) = uVar1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0x100);
  }
  return;
}



// ===== FUN_710078e3a0 @ 710078e3a0 (size=288) =====

void FUN_710078e3a0(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  
  if (param_3 == 0) {
    return;
  }
  uVar1 = param_2 & 7;
  while (uVar1 != 0) {
    param_2 = param_2 + 1;
    param_3 = param_3 - 1;
    if (param_3 == 0) {
      return;
    }
    uVar1 = param_2 & 7;
  }
  uVar1 = param_2;
  if (7 < param_3) {
    uVar1 = param_2 + (param_3 - 8 & 0xfffffffffffffff8) + 8;
    do {
      param_2 = param_2 + 8;
    } while (param_2 != uVar1);
    param_3 = param_3 & 7;
    if (param_3 == 0) {
      return;
    }
  }
  param_3 = uVar1 + param_3;
  do {
    uVar1 = uVar1 + 1;
  } while (uVar1 != param_3);
  return;
}



// ===== FUN_710078e4c0 @ 710078e4c0 (size=48) =====

uint FUN_710078e4c0(uint param_1,byte *param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  
  param_1 = param_1 & 0xffff;
  if (param_3 != 0) {
    pbVar2 = param_2;
    do {
      pbVar1 = pbVar2 + 1;
      param_1 = param_1 + *pbVar2 >> 0xf & 1 | (param_1 + *pbVar2 & 0x7fff) << 1;
      pbVar2 = pbVar1;
    } while (param_2 + param_3 != pbVar1);
  }
  return param_1;
}



// ===== FUN_710078e4f0 @ 710078e4f0 (size=672) =====

void FUN_710078e4f0(undefined1 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 *param_6,char *param_7,undefined8 *param_8,
                   char *param_9)

{
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 auStack_150 [32];
  undefined1 auStack_130 [31];
  byte abStack_111 [65];
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
  
  if (param_2 < 0x41) {
    puVar3 = param_1;
    if ((param_6 != (undefined8 *)0x0) && (*param_7 != '\0')) goto LAB_710078e548;
    if (param_2 != 0) goto LAB_710078e5f8;
LAB_710078e62c:
    FUN_7100808340(abStack_111 + param_2 + 1,0x36,0x40 - param_2);
    puVar3 = param_1;
LAB_710078e640:
    FUN_7100794a90(&local_d0);
    FUN_7100794ae0(&local_d0,abStack_111 + 1,0x40);
    if ((param_6 != (undefined8 *)0x0) && (*param_7 == '\0')) {
      param_6[1] = uStack_c8;
      *param_6 = local_d0;
      param_6[3] = uStack_b8;
      param_6[2] = uStack_c0;
      param_6[5] = uStack_a8;
      param_6[4] = local_b0;
      param_6[7] = uStack_98;
      param_6[6] = uStack_a0;
      param_6[9] = uStack_88;
      param_6[8] = local_90;
      param_6[0xb] = uStack_78;
      param_6[10] = uStack_80;
      param_6[0xc] = local_70;
      *param_7 = '\x01';
    }
  }
  else {
    puVar3 = auStack_150;
    FUN_7100794a90(&local_68);
    FUN_7100794ae0(&local_68,param_1,param_2);
    param_2 = 0x20;
    FUN_7100794b80(&local_68,puVar3);
    if ((param_6 == (undefined8 *)0x0) || (param_2 = 0x20, *param_7 == '\0')) {
LAB_710078e5f8:
      uVar2 = 1;
      do {
        bVar1 = param_2 != uVar2;
        abStack_111[uVar2] = puVar3[uVar2 - 1] ^ 0x36;
        uVar2 = uVar2 + 1;
      } while (bVar1);
      param_1 = puVar3;
      if (param_2 != 0x40) goto LAB_710078e62c;
      goto LAB_710078e640;
    }
LAB_710078e548:
    uStack_c8 = param_6[1];
    local_d0 = *param_6;
    uStack_b8 = param_6[3];
    uStack_c0 = param_6[2];
    uStack_a8 = param_6[5];
    local_b0 = param_6[4];
    uStack_98 = param_6[7];
    uStack_a0 = param_6[6];
    uStack_88 = param_6[9];
    local_90 = param_6[8];
    uStack_78 = param_6[0xb];
    uStack_80 = param_6[10];
    local_70 = param_6[0xc];
  }
  FUN_7100794ae0(&local_d0,param_3,param_4);
  FUN_7100794b80(&local_d0,auStack_130);
  if ((param_8 != (undefined8 *)0x0) && (*param_9 != '\0')) {
    uStack_60 = param_8[1];
    local_68 = *param_8;
    uStack_50 = param_8[3];
    uStack_58 = param_8[2];
    uStack_40 = param_8[5];
    local_48 = param_8[4];
    uStack_30 = param_8[7];
    uStack_38 = param_8[6];
    uStack_20 = param_8[9];
    local_28 = param_8[8];
    uStack_10 = param_8[0xb];
    uStack_18 = param_8[10];
    local_8 = param_8[0xc];
    goto LAB_710078e5bc;
  }
  uVar2 = 1;
  if (param_2 == 0) {
LAB_710078e6d4:
    FUN_7100808340(abStack_111 + 1 + param_2,0x5c,0x40 - param_2);
  }
  else {
    do {
      bVar1 = param_2 != uVar2;
      abStack_111[uVar2] = puVar3[uVar2 - 1] ^ 0x5c;
      uVar2 = uVar2 + 1;
    } while (bVar1);
    if (param_2 != 0x40) goto LAB_710078e6d4;
  }
  FUN_7100794a90(&local_68);
  FUN_7100794ae0(&local_68,abStack_111 + 1,0x40);
  if ((param_8 != (undefined8 *)0x0) && (*param_9 == '\0')) {
    param_8[1] = uStack_60;
    *param_8 = local_68;
    param_8[3] = uStack_50;
    param_8[2] = uStack_58;
    param_8[0xc] = local_8;
    param_8[5] = uStack_40;
    param_8[4] = local_48;
    param_8[7] = uStack_30;
    param_8[6] = uStack_38;
    param_8[9] = uStack_20;
    param_8[8] = local_28;
    param_8[0xb] = uStack_10;
    param_8[10] = uStack_18;
    *param_9 = '\x01';
  }
LAB_710078e5bc:
  FUN_7100794ae0(&local_68,auStack_130,0x20);
  FUN_7100794b80(&local_68,param_5);
  return;
}



// ===== FUN_710078e790 @ 710078e790 (size=92) =====

void FUN_710078e790(long param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  
  *(undefined2 *)(param_1 + 0x18c4) = 0;
  *(undefined1 *)(param_1 + 0x18c6) = 0;
  uVar4 = (uint)*param_2;
  if (*param_2 != 0) {
    uVar2 = 0;
    uVar5 = 0;
    uVar3 = 0;
    pbVar6 = param_2 + 1;
    do {
      uVar1 = uVar4 + uVar3;
      uVar5 = uVar4 ^ uVar5;
      uVar3 = uVar1 & 0xff;
      uVar2 = (uVar4 + uVar2 & 0x7f) << 1 | uVar4 + uVar2 >> 7 & 1;
      *(char *)(param_1 + 0x18c4) = (char)uVar1;
      *(char *)(param_1 + 0x18c5) = (char)uVar5;
      *(char *)(param_1 + 0x18c6) = (char)uVar2;
      uVar4 = (uint)*pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (uVar4 != 0);
  }
  return;
}



// ===== FUN_710078e7f0 @ 710078e7f0 (size=148) =====

void FUN_710078e7f0(long param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  FUN_710078e350(param_1 + 0x13b4);
  uVar4 = FUN_710081ce00(param_2);
  uVar3 = FUN_710078e3a0(0xffffffff,param_2,uVar4);
  *(undefined4 *)(param_1 + 0x18c8) = uVar3;
  *(undefined4 *)(param_1 + 0x18cc) = 0;
  uVar6 = (uint)*param_2;
  if (*param_2 != 0) {
    uVar8 = 0;
    uVar7 = 0;
    pbVar5 = param_2 + 1;
    do {
      uVar2 = *(uint *)(param_1 + (long)(int)uVar6 * 4 + 0x13b4);
      uVar1 = uVar7 ^ uVar6 ^ uVar2;
      uVar6 = uVar8 + uVar6 + (uVar2 >> 0x10);
      uVar7 = uVar1 & 0xffff;
      uVar8 = uVar6 & 0xffff;
      *(short *)(param_1 + 0x18cc) = (short)uVar1;
      *(short *)(param_1 + 0x18ce) = (short)uVar6;
      uVar6 = (uint)*pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (uVar6 != 0);
  }
  return;
}



// ===== FUN_710078e890 @ 710078e890 (size=32) =====

void FUN_710078e890(long param_1)

{
  *(undefined4 *)(param_1 + 0x12a8) = 1;
  *(undefined2 *)(param_1 + 0x18c4) = 0x700;
  *(undefined1 *)(param_1 + 0x18c6) = 0x4d;
  return;
}



// ===== FUN_710078e8b0 @ 710078e8b0 (size=76) =====

void FUN_710078e8b0(long param_1,char *param_2,long param_3)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (param_3 != 0) {
    pcVar3 = param_2;
    do {
      cVar1 = *(char *)(param_1 + 0x18c5) + *(char *)(param_1 + 0x18c6);
      cVar2 = cVar1 + *(char *)(param_1 + 0x18c4);
      *(char *)(param_1 + 0x18c5) = cVar1;
      *(char *)(param_1 + 0x18c4) = cVar2;
      pcVar4 = pcVar3 + 1;
      *pcVar3 = *pcVar3 - cVar2;
      pcVar3 = pcVar4;
    } while (pcVar4 != param_2 + param_3);
  }
  return;
}



// ===== FUN_710078e900 @ 710078e900 (size=140) =====

void FUN_710078e900(long param_1,byte *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  if (param_3 != 0) {
    pbVar5 = param_2;
    do {
      uVar1 = *(ushort *)(param_1 + 0x18c8) + 0x1234;
      uVar3 = *(uint *)(param_1 + ((ulong)(uVar1 >> 1) & 0xff) * 4 + 0x13b4);
      uVar2 = uVar3 ^ *(ushort *)(param_1 + 0x18ca);
      uVar4 = (uint)*(ushort *)(param_1 + 0x18cc) - (uVar3 >> 0x10);
      uVar3 = uVar2 & 0xffff ^
              ((uint)*(ushort *)(param_1 + 0x18ce) << 0xf |
              (uint)(*(ushort *)(param_1 + 0x18ce) >> 1));
      *(short *)(param_1 + 0x18ca) = (short)uVar2;
      uVar2 = (uVar3 & 1) << 0xf | uVar3 >> 1 & 0x7fff;
      *(short *)(param_1 + 0x18cc) = (short)uVar4;
      uVar1 = uVar2 ^ uVar1 & 0xffff ^ uVar4 & 0xffff;
      *(short *)(param_1 + 0x18ce) = (short)uVar2;
      *(short *)(param_1 + 0x18c8) = (short)uVar1;
      pbVar6 = pbVar5 + 1;
      *pbVar5 = *pbVar5 ^ (byte)(uVar1 >> 8);
      pbVar5 = pbVar6;
    } while (pbVar6 != param_2 + param_3);
  }
  return;
}



// ===== FUN_710078e990 @ 710078e990 (size=116) =====

void FUN_710078e990(long param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1 + 0x18b4);
  uVar5 = *(uint *)(param_1 + 0x18b8);
  uVar4 = *(uint *)(param_1 + 0x18bc);
  uVar3 = *(uint *)(param_1 + 0x18c0);
  pbVar2 = param_2;
  do {
    pbVar1 = pbVar2 + 4;
    uVar6 = uVar6 ^ *(uint *)(param_1 + (ulong)*pbVar2 * 4 + 0x13b4);
    *(uint *)(param_1 + 0x18b4) = uVar6;
    uVar5 = uVar5 ^ *(uint *)(param_1 + (ulong)pbVar2[1] * 4 + 0x13b4);
    *(uint *)(param_1 + 0x18b8) = uVar5;
    uVar4 = uVar4 ^ *(uint *)(param_1 + (ulong)pbVar2[2] * 4 + 0x13b4);
    *(uint *)(param_1 + 0x18bc) = uVar4;
    uVar3 = uVar3 ^ *(uint *)(param_1 + (ulong)pbVar2[3] * 4 + 0x13b4);
    *(uint *)(param_1 + 0x18c0) = uVar3;
    pbVar2 = pbVar1;
  } while (param_2 + 0x10 != pbVar1);
  return;
}



// ===== FUN_710078ea10 @ 710078ea10 (size=424) =====

void FUN_710078ea10(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar4;
  
  uVar8 = 0;
  uVar7 = *(uint *)(param_1 + 0x18b4);
  uVar9 = (uint)(byte)*param_2 + (uint)*(byte *)((long)param_2 + 1) * 0x100 +
          (uint)*(byte *)((long)param_2 + 2) * 0x10000 +
          (uint)*(byte *)((long)param_2 + 3) * 0x1000000 ^ uVar7;
  uVar10 = (uint)(byte)param_2[1] + (uint)*(byte *)((long)param_2 + 5) * 0x100 +
           (uint)*(byte *)((long)param_2 + 6) * 0x10000 +
           (uint)*(byte *)((long)param_2 + 7) * 0x1000000 ^ *(uint *)(param_1 + 0x18b8);
  uVar5 = uVar7;
  uVar3 = (uint)(byte)param_2[2] + (uint)*(byte *)((long)param_2 + 9) * 0x100 +
          (uint)*(byte *)((long)param_2 + 10) * 0x10000 +
          (uint)*(byte *)((long)param_2 + 0xb) * 0x1000000 ^ *(uint *)(param_1 + 0x18bc);
  uVar4 = (uint)(byte)param_2[3] + (uint)*(byte *)((long)param_2 + 0xd) * 0x100 +
          (uint)*(byte *)((long)param_2 + 0xe) * 0x10000 +
          (uint)*(byte *)((long)param_2 + 0xf) * 0x1000000 ^ *(uint *)(param_1 + 0x18c0);
  while( true ) {
    uVar1 = (int)uVar8 + 1;
    uVar8 = (ulong)uVar1;
    uVar2 = (uVar4 ^ (uVar3 >> 0xf | uVar3 << 0x11)) + uVar5;
    uVar5 = (uVar4 >> 0x15 | uVar4 << 0xb) + uVar3 ^ uVar5;
    uVar6 = ((uint)*(byte *)(param_1 + ((ulong)(uVar5 >> 0x10) & 0xff) + 0x17b4) << 0x10 |
             (uint)*(byte *)(param_1 + ((ulong)(uVar5 >> 8) & 0xff) + 0x17b4) << 8 |
            (uint)*(byte *)(param_1 + (ulong)(byte)uVar5 + 0x17b4) |
            (uint)*(byte *)(param_1 + (ulong)(uVar5 >> 0x18) + 0x17b4) << 0x18) ^ uVar9;
    uVar2 = ((uint)*(byte *)(param_1 + ((ulong)(uVar2 >> 0x10) & 0xff) + 0x17b4) << 0x10 |
             (uint)*(byte *)(param_1 + ((ulong)(uVar2 >> 8) & 0xff) + 0x17b4) << 8 |
            (uint)*(byte *)(param_1 + (ulong)(byte)uVar2 + 0x17b4) |
            (uint)*(byte *)(param_1 + (ulong)(uVar2 >> 0x18) + 0x17b4) << 0x18) ^ uVar10;
    if (uVar1 == 0x20) break;
    uVar5 = *(uint *)(param_1 + (uVar8 & 3) * 4 + 0x18b4);
    uVar9 = uVar3;
    uVar10 = uVar4;
    uVar3 = uVar6;
    uVar4 = uVar2;
  }
  *param_2 = uVar7 ^ uVar6;
  param_2[1] = *(uint *)(param_1 + 0x18b8) ^ uVar2;
  param_2[2] = *(uint *)(param_1 + 0x18bc) ^ uVar3;
  param_2[3] = *(uint *)(param_1 + 0x18c0) ^ uVar4;
  FUN_710078e990();
  return;
}



// ===== FUN_710078ebc0 @ 710078ebc0 (size=452) =====

void FUN_710078ebc0(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 local_10;
  undefined8 uStack_8;
  uint uVar3;
  
  uVar8 = 0x1f;
  local_10 = *(undefined8 *)param_2;
  uStack_8 = *(undefined8 *)(param_2 + 2);
  uVar7 = *(uint *)(param_1 + 0x18c0);
  uVar9 = (uint)(byte)*param_2 + (uint)*(byte *)((long)param_2 + 1) * 0x100 +
          (uint)*(byte *)((long)param_2 + 2) * 0x10000 +
          (uint)*(byte *)((long)param_2 + 3) * 0x1000000 ^ *(uint *)(param_1 + 0x18b4);
  uVar6 = (uint)(byte)param_2[1] + (uint)*(byte *)((long)param_2 + 5) * 0x100 +
          (uint)*(byte *)((long)param_2 + 6) * 0x10000 +
          (uint)*(byte *)((long)param_2 + 7) * 0x1000000 ^ *(uint *)(param_1 + 0x18b8);
  uVar2 = (uint)(byte)param_2[2] + (uint)*(byte *)((long)param_2 + 9) * 0x100 +
          (uint)*(byte *)((long)param_2 + 10) * 0x10000 +
          (uint)*(byte *)((long)param_2 + 0xb) * 0x1000000 ^ *(uint *)(param_1 + 0x18bc);
  uVar3 = (uint)(byte)param_2[3] + (uint)*(byte *)((long)param_2 + 0xd) * 0x100 +
          (uint)*(byte *)((long)param_2 + 0xe) * 0x10000 +
          (uint)*(byte *)((long)param_2 + 0xf) * 0x1000000 ^ uVar7;
  while( true ) {
    uVar5 = (int)uVar8 - 1;
    uVar8 = (ulong)uVar5;
    uVar1 = (uVar3 ^ (uVar2 >> 0xf | uVar2 << 0x11)) + uVar7;
    uVar7 = (uVar3 >> 0x15 | uVar3 << 0xb) + uVar2 ^ uVar7;
    uVar4 = ((uint)*(byte *)(param_1 + ((ulong)(uVar7 >> 0x10) & 0xff) + 0x17b4) << 0x10 |
             (uint)*(byte *)(param_1 + ((ulong)(uVar7 >> 8) & 0xff) + 0x17b4) << 8 |
            (uint)*(byte *)(param_1 + (ulong)(byte)uVar7 + 0x17b4) |
            (uint)*(byte *)(param_1 + (ulong)(uVar7 >> 0x18) + 0x17b4) << 0x18) ^ uVar9;
    uVar1 = ((uint)*(byte *)(param_1 + ((ulong)(uVar1 >> 0x10) & 0xff) + 0x17b4) << 0x10 |
             (uint)*(byte *)(param_1 + ((ulong)(uVar1 >> 8) & 0xff) + 0x17b4) << 8 |
            (uint)*(byte *)(param_1 + (ulong)(byte)uVar1 + 0x17b4) |
            (uint)*(byte *)(param_1 + (ulong)(uVar1 >> 0x18) + 0x17b4) << 0x18) ^ uVar6;
    if (uVar5 == 0xffffffff) break;
    uVar7 = *(uint *)(param_1 + (uVar8 & 3) * 4 + 0x18b4);
    uVar9 = uVar2;
    uVar6 = uVar3;
    uVar2 = uVar4;
    uVar3 = uVar1;
  }
  *param_2 = *(uint *)(param_1 + 0x18b4) ^ uVar4;
  param_2[1] = *(uint *)(param_1 + 0x18b8) ^ uVar1;
  param_2[2] = *(uint *)(param_1 + 0x18bc) ^ uVar2;
  param_2[3] = *(uint *)(param_1 + 0x18c0) ^ uVar3;
  FUN_710078e990(param_1,&local_10);
  return;
}



// ===== FUN_710078ed90 @ 710078ed90 (size=20) =====

void FUN_710078ed90(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = *param_2;
  *param_2 = *param_3;
  *param_3 = uVar1;
  return;
}



// ===== FUN_710078edb0 @ 710078edb0 (size=504) =====

void FUN_710078edb0(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_80 [128];
  
  iVar5 = 0;
  FUN_710078e350(param_1 + 0x13b4);
  FUN_710077e590(auStack_80,param_2,0x80);
  uVar3 = FUN_710081ce00(auStack_80);
  *(undefined8 *)(param_1 + 0x18b4) = 0x3f6d12f7d3a3b879;
  *(undefined8 *)(param_1 + 0x18bc) = 0xa4e7f1237515a235;
  *(undefined8 *)(param_1 + 0x17bc) = 0x2a02dd3077101cf9;
  *(undefined8 *)(param_1 + 0x17b4) = 0xcdc0c549239513d7;
  *(undefined8 *)(param_1 + 0x17cc) = 0x8999ef575af4c3df;
  *(undefined8 *)(param_1 + 0x17c4) = 0x19db580ee9b101e8;
  *(undefined8 *)(param_1 + 0x17dc) = 0x656e6d91d3e28d8;
  *(undefined8 *)(param_1 + 0x17d4) = 0xdf6425c4693c7ff;
  *(undefined8 *)(param_1 + 0x17ec) = 0xeb2c43cab2a35b5d;
  *(undefined8 *)(param_1 + 0x17e4) = 0x7bda7165c4ab1847;
  *(undefined8 *)(param_1 + 0x17fc) = 0x248fc120909d7253;
  *(undefined8 *)(param_1 + 0x17f4) = 0xd37da731ea4bfa6b;
  *(undefined8 *)(param_1 + 0x180c) = 0xfbaec2d5823de479;
  *(undefined8 *)(param_1 + 0x1804) = 0x2f8dd659bbf77c9e;
  *(undefined8 *)(param_1 + 0x181c) = 0xb3ff5d137d4f369;
  *(undefined8 *)(param_1 + 0x1814) = 0x5e983973e5366e61;
  *(undefined8 *)(param_1 + 0x182c) = 0x33f8117fbc8b634c;
  *(undefined8 *)(param_1 + 0x1824) = 0x15e3b0519c1fc8a4;
  *(undefined8 *)(param_1 + 0x183c) = 0x7623ca6a587cbb7;
  *(undefined8 *)(param_1 + 0x1834) = 0x4829e208d2bd78cf;
  *(undefined8 *)(param_1 + 0x184c) = 0x50f01bec803b8627;
  *(undefined8 *)(param_1 + 0x1844) = 0xeefcac45aa9b267a;
  *(undefined8 *)(param_1 + 0x185c) = 0x8114404a85c9dc9f;
  *(undefined8 *)(param_1 + 0x1854) = 0x8e9a4f91ce550383;
  *(undefined8 *)(param_1 + 0x186c) = 0xa3ab4e797c652fe;
  *(undefined8 *)(param_1 + 0x1864) = 0x222bb6ad678ab9e0;
  *(undefined8 *)(param_1 + 0x187c) = 0x6c94042db3a26f88;
  *(undefined8 *)(param_1 + 0x1874) = 0xbf1684320c661a76;
  *(undefined8 *)(param_1 + 0x188c) = 0xe14dbeb5f1211792;
  *(undefined8 *)(param_1 + 0x1884) = 0xaf0fdef27e4e38a1;
  *(undefined8 *)(param_1 + 0x189c) = 0x34641209a8fdd035;
  *(undefined8 *)(param_1 + 0x1894) = 0x41ed5f44baa92e00;
  *(undefined8 *)(param_1 + 0x18ac) = 0x547075cc0596688c;
  *(undefined8 *)(param_1 + 0x18a4) = 0x6a1e256d60a0b874;
  do {
    uVar4 = 0;
    if (uVar3 != 0) {
      do {
        lVar7 = 1;
        uVar1 = *(uint *)(param_1 + (ulong)(byte)(*(char *)(param_2 + 1 + uVar4) + (char)iVar5) * 4
                         + 0x13b4);
        for (uVar2 = *(uint *)(param_1 + (ulong)(byte)(*(char *)(param_2 + uVar4) - (char)iVar5) * 4
                              + 0x13b4); (uVar1 & 0xff) != (uVar2 & 0xff);
            uVar2 = (uVar2 & 0xff) + 1) {
          FUN_710078ed90(param_1,param_1 + (ulong)(byte)uVar2 + 0x17b4,
                         param_1 + (lVar7 + (ulong)(byte)uVar2 + uVar4 & 0xff) + 0x17b4);
          lVar7 = lVar7 + 1;
        }
        uVar4 = uVar4 + 2;
      } while (uVar4 < uVar3);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0x100);
  if ((uVar3 & 0xf) == 0) {
    if (uVar3 == 0) {
      return;
    }
  }
  else if (uVar3 <= (uVar3 | 0xf)) {
    FUN_7100808340(auStack_80 + uVar3,0,((uVar3 | 0xf) - uVar3) + 1);
  }
  uVar4 = 0;
  puVar6 = auStack_80;
  do {
    uVar4 = uVar4 + 0x10;
    FUN_710078ea10(param_1,puVar6);
    puVar6 = puVar6 + 0x10;
  } while (uVar4 < uVar3);
  return;
}



// ===== FUN_710078efb0 @ 710078efb0 (size=772) =====

void FUN_710078efb0(long param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                   long *param_5)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined2 local_1f8;
  undefined1 local_1f6;
  long local_1f0;
  long lStack_1e8;
  undefined8 local_1e0;
  long lStack_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long alStack_108 [33];
  
  plVar8 = (long *)(param_1 + 0x204);
  do {
    cVar4 = FUN_710077e3d0((long)plVar8 + -0x204,param_3);
    if (cVar4 != '\0') {
      if (param_5 == (long *)0x0) {
        if ((char)plVar8[5] == '\0') goto LAB_710078f260;
      }
      else if (((char)plVar8[5] != '\0') && (*param_5 == *plVar8)) {
LAB_710078f260:
        local_1e0 = plVar8[1];
        lStack_1d8 = plVar8[2];
        FUN_710077e2c0(&local_1e0,0x10,0,0);
        local_1f0 = plVar8[3];
        lStack_1e8 = plVar8[4];
        goto LAB_710078f208;
      }
    }
    plVar8 = plVar8 + 0x46;
  } while (plVar8 != (long *)(param_1 + 0xac4));
  FUN_710077f1e0(param_4,alStack_108,0x108);
  lVar6 = FUN_710081f600(param_4);
  lVar6 = lVar6 * 2;
  if (param_5 != (long *)0x0) {
    *(long *)((long)alStack_108 + lVar6) = *param_5;
    lVar6 = lVar6 + 8;
  }
  uVar5 = 0;
  FUN_7100794540(&local_1c8);
  do {
    while( true ) {
      FUN_7100794680(&local_1c8,alStack_108,lVar6);
      local_1f8 = (undefined2)uVar5;
      local_1f6 = (undefined1)(uVar5 >> 0x10);
      FUN_7100794580(&local_1c8,&local_1f8,3);
      if ((uVar5 & 0x3fff) != 0) break;
      uStack_160 = uStack_1c0;
      local_168 = local_1c8;
      uStack_150 = uStack_1b0;
      uStack_158 = uStack_1b8;
      uStack_140 = uStack_1a0;
      local_148 = local_1a8;
      uStack_130 = uStack_190;
      uStack_138 = uStack_198;
      uStack_120 = uStack_180;
      local_128 = local_188;
      uStack_110 = uStack_170;
      uStack_118 = uStack_178;
      FUN_71007947d0(&local_168,&local_1e0);
      uVar3 = uVar5 >> 0xe;
      uVar5 = uVar5 + 1;
      *(char *)((long)&local_1f0 + (ulong)uVar3) = (char)local_1d0;
      if (uVar5 == 0x40000) goto LAB_710078f118;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 != 0x40000);
LAB_710078f118:
  FUN_71007947d0(&local_1c8,&local_168);
  lVar6 = 1;
  puVar7 = &local_1e0;
  do {
    lVar1 = lVar6 * 4;
    lVar6 = lVar6 + 1;
    uVar2 = *(undefined4 *)((long)&uStack_170 + lVar1 + 4);
    *(char *)puVar7 = (char)uVar2;
    *(char *)((long)puVar7 + 1) = (char)((uint)uVar2 >> 8);
    *(char *)((long)puVar7 + 2) = (char)((uint)uVar2 >> 0x10);
    *(char *)((long)puVar7 + 3) = (char)((uint)uVar2 >> 0x18);
    puVar7 = (undefined8 *)((long)puVar7 + 4);
  } while (lVar6 != 5);
  FUN_710080f900(param_1 + (ulong)*(uint *)(param_1 + 0x8c0) * 0x230,param_3,0x202);
  uVar5 = *(uint *)(param_1 + 0x8c0);
  *(bool *)(param_1 + ((ulong)uVar5 * 3 + (ulong)uVar5 * 0x20) * 0x10 + 0x22c) =
       param_5 != (long *)0x0;
  if (param_5 != (long *)0x0) {
    *(long *)(param_1 + (ulong)uVar5 * 0x230 + 0x204) = *param_5;
    uVar5 = *(uint *)(param_1 + 0x8c0);
  }
  plVar8 = (long *)(param_1 + (ulong)uVar5 * 0x230 + 0x20c);
  *plVar8 = local_1e0;
  plVar8[1] = lStack_1d8;
  FUN_710077e2c0(param_1 + (ulong)*(uint *)(param_1 + 0x8c0) * 0x230 + 0x20c,0x10,1,0);
  lVar6 = param_1 + (ulong)*(uint *)(param_1 + 0x8c0) * 0x230;
  *(long *)(lVar6 + 0x21c) = local_1f0;
  *(long *)(lVar6 + 0x224) = lStack_1e8;
  *(uint *)(param_1 + 0x8c0) = *(int *)(param_1 + 0x8c0) + 1U & 3;
  FUN_710077e260(alStack_108,0x108);
LAB_710078f208:
  FUN_7100793090(param_1 + 0x12ac,param_2,&local_1e0,0x80,&local_1f0);
  FUN_710077e260(&local_1e0,0x10);
  FUN_710077e260(&local_1f0,0x10);
  return;
}



// ===== FUN_710078f2c0 @ 710078f2c0 (size=472) =====

void FUN_710078f2c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                   undefined8 *param_5,long param_6,undefined8 param_7,int param_8)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long local_1d8;
  undefined8 *local_1d0;
  undefined1 local_1a2;
  undefined1 local_1a1 [5];
  int local_19c [5];
  long local_188;
  undefined8 uStack_180;
  byte bStack_179;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [72];
  undefined1 auStack_d0 [104];
  undefined1 auStack_68 [104];
  
  param_8 = param_8 + -1;
  uVar2 = param_4;
  if (0x3f < param_4) {
    uVar2 = 0x40;
  }
  FUN_710080f900(auStack_118,param_3,uVar2);
  auStack_118[param_4] = 0;
  auStack_118[param_4 + 1] = 0;
  auStack_118[param_4 + 2] = 0;
  auStack_118[param_4 + 3] = 1;
  FUN_710078e4f0(param_1,param_2,auStack_118,param_4 + 4,&local_178,0,0,0,0);
  local_1d8 = 0;
  local_1a2 = 0;
  local_1a1[0] = 0;
  uStack_150 = uStack_170;
  local_158 = local_178;
  uStack_140 = uStack_160;
  uStack_148 = uStack_168;
  local_19c[0] = 0x10;
  local_19c[1] = 0x10;
  local_188 = param_6;
  uStack_180 = param_7;
  local_1d0 = param_5;
  while( true ) {
    iVar4 = 0;
    if (param_8 != 0) {
      do {
        FUN_710078e4f0(param_1,param_2,&local_178,0x20,&local_138,auStack_d0,&local_1a2,auStack_68,
                       local_1a1);
        uStack_170 = uStack_130;
        local_178 = local_138;
        uStack_160 = uStack_120;
        uStack_168 = uStack_128;
        lVar3 = 1;
        do {
          lVar1 = lVar3 + 1;
          *(byte *)((long)&uStack_160 + lVar3 + 7) =
               *(byte *)((long)&uStack_160 + lVar3 + 7) ^ (&bStack_179)[lVar3];
          lVar3 = lVar1;
        } while (lVar1 != 0x21);
        iVar4 = iVar4 + 1;
      } while (iVar4 != param_8);
    }
    local_1d0[1] = uStack_150;
    *local_1d0 = local_158;
    local_1d0[3] = uStack_140;
    local_1d0[2] = uStack_148;
    if (local_1d8 == 2) break;
    local_1d0 = (undefined8 *)(&local_188)[local_1d8];
    param_8 = local_19c[local_1d8];
    local_1d8 = local_1d8 + 1;
  }
  FUN_710077e260(auStack_118,0x44);
  FUN_710077e260(&local_158,0x20);
  FUN_710077e260(&local_178,0x20);
  FUN_710077e260(&local_138,0x20);
  return;
}



// ===== FUN_710078f4a0 @ 710078f4a0 (size=612) =====

void FUN_710078f4a0(long param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                   long *param_5,long param_6,uint param_7,undefined8 *param_8,undefined8 *param_9)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [512];
  
  lVar7 = param_1 + 0x8c4;
  do {
    if (*(uint *)(lVar7 + 0x234) == param_7) {
      cVar1 = FUN_710077e3d0(lVar7,param_3);
      if (((cVar1 != '\0') && (*(long *)(lVar7 + 0x204) == *param_5)) &&
         (*(long *)(lVar7 + 0x20c) == param_5[1])) {
        uStack_258 = *(undefined8 *)(lVar7 + 0x21c);
        local_260 = *(undefined8 *)(lVar7 + 0x214);
        uStack_248 = *(undefined8 *)(lVar7 + 0x22c);
        uStack_250 = *(undefined8 *)(lVar7 + 0x224);
        FUN_710077e2c0(&local_260,0x20,0,0);
        uStack_238 = *(undefined8 *)(lVar7 + 0x240);
        local_240 = *(undefined8 *)(lVar7 + 0x238);
        uStack_228 = *(undefined8 *)(lVar7 + 0x250);
        uStack_230 = *(undefined8 *)(lVar7 + 0x248);
        uStack_218 = *(undefined8 *)(lVar7 + 0x260);
        local_220 = *(undefined8 *)(lVar7 + 600);
        uStack_208 = *(undefined8 *)(lVar7 + 0x270);
        uStack_210 = *(undefined8 *)(lVar7 + 0x268);
        goto LAB_710078f5e0;
      }
    }
    lVar7 = lVar7 + 0x278;
    if (param_1 + 0x12a4 == lVar7) {
      FUN_710077f270(param_4,auStack_200,0x200);
      uVar2 = FUN_710081ce00(auStack_200);
      FUN_710078f2c0(auStack_200,uVar2,param_5,0x10,&local_260,&local_220,&local_240,
                     1 << (ulong)(param_7 & 0x1f));
      FUN_710077e260(auStack_200,0x200);
      lVar7 = param_1 + 0x8c4 + (ulong)(*(uint *)(param_1 + 0x12a4) & 3) * 0x278;
      *(uint *)(param_1 + 0x12a4) = *(uint *)(param_1 + 0x12a4) + 1;
      *(uint *)(lVar7 + 0x234) = param_7;
      lVar3 = FUN_710080f900(lVar7,param_3,0x202);
      lVar7 = param_5[1];
      *(long *)(lVar3 + 0x204) = *param_5;
      *(long *)(lVar3 + 0x20c) = lVar7;
      *(undefined8 *)(lVar3 + 0x21c) = uStack_258;
      *(undefined8 *)(lVar3 + 0x214) = local_260;
      *(undefined8 *)(lVar3 + 0x22c) = uStack_248;
      *(undefined8 *)(lVar3 + 0x224) = uStack_250;
      *(undefined8 *)(lVar3 + 0x240) = uStack_238;
      *(undefined8 *)(lVar3 + 0x238) = local_240;
      *(undefined8 *)(lVar3 + 0x250) = uStack_228;
      *(undefined8 *)(lVar3 + 0x248) = uStack_230;
      *(undefined8 *)(lVar3 + 0x260) = uStack_218;
      *(undefined8 *)(lVar3 + 600) = local_220;
      *(undefined8 *)(lVar3 + 0x270) = uStack_208;
      *(undefined8 *)(lVar3 + 0x268) = uStack_210;
      FUN_710077e2c0((undefined8 *)(lVar3 + 0x214),0x20,1,0);
LAB_710078f5e0:
      if (param_8 != (undefined8 *)0x0) {
        param_8[1] = uStack_218;
        *param_8 = local_220;
        param_8[3] = uStack_208;
        param_8[2] = uStack_210;
      }
      if (param_9 != (undefined8 *)0x0) {
        bVar5 = 0;
        *param_9 = 0;
        uVar4 = 0;
        uVar6 = 0;
        pbVar8 = (byte *)&local_240;
        while( true ) {
          uVar4 = uVar4 + 1;
          *(byte *)((long)param_9 + uVar6) = bVar5 ^ *pbVar8;
          uVar6 = (ulong)(uVar4 & 7);
          if (uVar4 == 0x20) break;
          bVar5 = *(byte *)((long)param_9 + uVar6);
          pbVar8 = pbVar8 + 1;
        }
        FUN_710077e260(&local_240,0x20);
      }
      if (param_6 != 0) {
        FUN_7100793090(param_1 + 0x12ac,param_2,&local_260,0x100,param_6);
      }
      FUN_710077e260(&local_260,0x20);
      return;
    }
  } while( true );
}



// ===== FUN_710078f710 @ 710078f710 (size=20) =====

void FUN_710078f710(undefined8 param_1,undefined1 param_2)

{
  uint in_w6;
  
  if (in_w6 < 0x19) {
    FUN_710078f4a0(param_1,param_2);
    return;
  }
  return;
}



// ===== FUN_710078f730 @ 710078f730 (size=256) =====

void FUN_710078f730(int *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  int local_28 [2];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  iVar1 = *param_1;
  if (iVar1 == 2) {
    local_28[0] = param_1[1];
    FUN_710078e4f0(param_2,0x20,local_28,4,&local_20,0,0,0,0);
    uVar5 = 0;
    uVar3 = 0;
    pbVar4 = (byte *)&local_20;
    do {
      uVar2 = uVar3 & 3;
      uVar3 = uVar3 + 1;
      uVar5 = uVar5 ^ (uint)*pbVar4 << (ulong)(uVar2 << 3);
      pbVar4 = pbVar4 + 1;
    } while (uVar3 != 0x20);
    iVar1 = *param_1;
    param_1[1] = uVar5;
  }
  if (iVar1 == 3) {
    FUN_710078e4f0(param_2,0x20,param_1 + 1,0x20,&local_20,0,0,0,0);
    *(undefined8 *)(param_1 + 3) = uStack_18;
    *(undefined8 *)(param_1 + 1) = local_20;
    *(undefined8 *)(param_1 + 7) = uStack_8;
    *(undefined8 *)(param_1 + 5) = uStack_10;
    return;
  }
  return;
}



// ===== FUN_710078f830 @ 710078f830 (size=172) =====

void FUN_710078f830(long param_1)

{
  FUN_710077e4d0();
  FUN_710077e4d0(param_1 + 0x230);
  FUN_710077e4d0(param_1 + 0x460);
  FUN_710077e4d0(param_1 + 0x690);
  FUN_710077e4d0(param_1 + 0x8c4);
  FUN_710077e4d0(param_1 + 0xb3c);
  FUN_710077e4d0(param_1 + 0xdb4);
  FUN_710077e4d0(param_1 + 0x102c);
  FUN_71007934c0(param_1 + 0x12ac);
  FUN_7100808340(param_1,0,0x8c0);
  FUN_7100808340(param_1 + 0x8c4,0,0x9e0);
  *(undefined4 *)(param_1 + 0x8c0) = 0;
  *(undefined8 *)(param_1 + 0x12a4) = 0;
  FUN_7100808340(param_1 + 0x13b4,0,0x400);
  return;
}



// ===== FUN_710078f9f0 @ 710078f9f0 (size=112) =====

void FUN_710078f9f0(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  FUN_710077e260(param_1,0x8c0);
  FUN_710077e260(param_1 + 0x8c4,0x9e0);
  lVar3 = param_1 + 0x102c;
  do {
    lVar2 = lVar3 + -0x278;
    FUN_710077e2a0(lVar3);
    lVar3 = lVar2;
  } while (lVar2 != param_1 + 0x64c);
  lVar3 = param_1 + 0x690;
  do {
    FUN_710077e2a0(lVar3);
    bVar1 = lVar3 != param_1;
    lVar3 = lVar3 + -0x230;
  } while (bVar1);
  return;
}



// ===== FUN_710078fa60 @ 710078fa60 (size=184) =====

void FUN_710078fa60(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x12a8);
  if (uVar2 == 3) {
    uVar3 = 0;
    if (param_3 != 0) {
      do {
        lVar1 = param_2 + uVar3;
        uVar3 = uVar3 + 0x10;
        FUN_710078ebc0(param_1,lVar1);
      } while (uVar3 < param_3);
    }
  }
  else if (uVar2 < 4) {
    if (uVar2 == 1) {
      FUN_710078e8b0();
      return;
    }
    if (uVar2 == 2) {
      FUN_710078e900();
      return;
    }
  }
  else if (uVar2 - 4 < 2) {
    FUN_7100792690(param_1 + 0x12ac,param_2,param_3,param_2);
    return;
  }
  return;
}



// ===== FUN_710078fb20 @ 710078fb20 (size=380) =====

undefined8
FUN_710078fb20(long param_1,undefined1 param_2,uint param_3,long param_4,undefined8 param_5,
              undefined8 param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined1 auStack_280 [128];
  undefined1 auStack_200 [512];
  
  if (param_3 == 0 || *(char *)(param_4 + 0x200) != '\x01') {
    return 0;
  }
  *(uint *)(param_1 + 0x12a8) = param_3;
  FUN_710077e370(param_4,auStack_200,0x80);
  FUN_710077ee10(auStack_200,auStack_280,0x80);
  if (param_3 == 3) {
    FUN_710078edb0(param_1,auStack_280);
  }
  else if (param_3 < 4) {
    if (param_3 == 1) {
      FUN_710078e790(param_1,auStack_280);
    }
    else if (param_3 == 2) {
      FUN_710078e7f0(param_1,auStack_280);
    }
  }
  else if (param_3 == 4) {
    FUN_710078efb0(param_1,param_2,param_4,auStack_200,param_5);
  }
  else if (param_3 == 5) {
    FUN_710078f710(param_1,param_2,param_4,auStack_200,param_5,param_6,param_7,param_8,param_9);
  }
  FUN_710077e260(auStack_280,0x80);
  FUN_710077e260(auStack_200,0x200);
  return 1;
}



// ===== FUN_710078fca0 @ 710078fca0 (size=16) =====

void FUN_710078fca0(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// ===== FUN_710078fcb0 @ 710078fcb0 (size=688) =====

void FUN_710078fcb0(byte *param_1,long param_2,ulong param_3,byte *param_4,ulong param_5,
                   long param_6,ulong param_7)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar13 = param_5;
  if (param_5 != 0) {
    bVar6 = *param_4;
    if (param_7 == 0 || param_5 < 2) {
      uVar13 = 0;
    }
    else {
      iVar11 = *(int *)(param_1 + 4);
      uVar13 = 0;
      uVar12 = 1;
      do {
        if (iVar11 == 0) {
          bVar7 = param_4[uVar12];
          uVar9 = (uint)bVar7;
          uVar12 = uVar12 + 1;
          param_1[4] = 8;
          param_1[5] = 0;
          param_1[6] = 0;
          param_1[7] = 0;
          bVar8 = bVar7 >> 6;
          *param_1 = bVar7;
          if (bVar8 == 2) {
LAB_710078fdbc:
            if (uVar12 + 1 < param_5) {
              bVar1 = uVar13 + 1 < param_7;
              *(uint *)(param_6 + uVar13 * 4) =
                   (uint)param_4[uVar12] + (uint)param_4[uVar12 + 1] * 0x100;
              iVar11 = *(int *)(param_1 + 4) + -2;
              uVar12 = uVar12 + 2;
              uVar13 = uVar13 + 1;
            }
            else {
              bVar1 = uVar13 < param_7;
              iVar11 = *(int *)(param_1 + 4) + -2;
            }
          }
          else if (bVar8 == 3) {
            uVar10 = (uint)bVar7;
            if (uVar12 < param_5) goto LAB_710078fe00;
            bVar1 = uVar13 < param_7;
            iVar11 = 6;
          }
          else {
            uVar9 = (uint)bVar7;
            uVar10 = (uint)bVar7;
            if (bVar8 != 1) goto LAB_710078fd08;
LAB_710078fd68:
            if (param_5 <= uVar12) goto LAB_710078fd10;
            bVar1 = uVar13 + 1 < param_7;
            *(uint *)(param_6 + uVar13 * 4) = (uint)param_4[uVar12] + (uint)bVar6 * 0x100;
            iVar11 = *(int *)(param_1 + 4) + -2;
            uVar12 = uVar12 + 1;
            uVar13 = uVar13 + 1;
          }
        }
        else {
          bVar7 = *param_1;
          uVar10 = (uint)bVar7;
          uVar9 = (uint)bVar7;
          bVar7 = bVar7 >> 6;
          if (bVar7 == 2) goto LAB_710078fdbc;
          if (bVar7 == 3) {
LAB_710078fe00:
            uVar9 = uVar10;
            bVar7 = param_4[uVar12];
            uVar2 = uVar12 + 1;
            iVar11 = (int)uVar13;
            if ((char)bVar7 < '\0') {
              if (param_5 <= uVar2) goto LAB_710078fd10;
              uVar5 = param_7;
              if (param_3 < param_7) {
                uVar5 = param_3;
              }
              bVar8 = param_4[uVar2];
              if (uVar13 < uVar5) {
                do {
                  *(uint *)(param_6 + uVar13 * 4) =
                       (uint)bVar6 * 0x100 + (uint)(byte)(bVar8 + *(char *)(param_2 + uVar13));
                  uVar13 = uVar13 + 1;
                  iVar3 = iVar11 + 2 + ((bVar7 & 0x7f) - (int)uVar13);
                } while ((0 < iVar3 && uVar13 <= uVar5) && (iVar3 < 1 || uVar5 != uVar13));
                bVar1 = uVar13 < param_7;
                iVar11 = *(int *)(param_1 + 4) + -2;
                uVar12 = uVar12 + 2;
              }
              else {
                bVar1 = uVar13 < param_7;
                iVar11 = *(int *)(param_1 + 4) + -2;
                uVar12 = uVar12 + 2;
              }
            }
            else {
              uVar5 = param_7;
              if (param_3 < param_7) {
                uVar5 = param_3;
              }
              uVar12 = uVar2;
              if (uVar13 < uVar5) {
                do {
                  *(uint *)(param_6 + uVar13 * 4) = (uint)*(byte *)(param_2 + uVar13);
                  uVar13 = uVar13 + 1;
                } while (0 < (int)(((uint)bVar7 - (int)uVar13) + iVar11 + 2) && uVar13 < uVar5);
                bVar1 = uVar13 < param_7;
                iVar11 = *(int *)(param_1 + 4) + -2;
              }
              else {
                bVar1 = uVar13 < param_7;
                iVar11 = *(int *)(param_1 + 4) + -2;
              }
            }
          }
          else {
            uVar9 = uVar10;
            if (bVar7 == 1) goto LAB_710078fd68;
LAB_710078fd08:
            uVar9 = uVar10;
            if (param_5 <= uVar12) {
LAB_710078fd10:
              *param_1 = (byte)((uVar9 & 0x3f) << 2);
              *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -2;
              break;
            }
            bVar1 = uVar13 + 1 < param_7;
            *(uint *)(param_6 + uVar13 * 4) = (uint)param_4[uVar12];
            iVar11 = *(int *)(param_1 + 4) + -2;
            uVar12 = uVar12 + 1;
            uVar13 = uVar13 + 1;
          }
        }
        *(int *)(param_1 + 4) = iVar11;
        *param_1 = (byte)((uVar9 & 0x3f) << 2);
      } while (bVar1 && uVar12 < param_5);
    }
  }
  lVar4 = (param_7 - 1) * 4;
  if (uVar13 < param_7) {
    lVar4 = uVar13 << 2;
  }
  *(undefined4 *)(param_6 + lVar4) = 0;
  return;
}



// ===== FUN_710078ff60 @ 710078ff60 (size=268) =====

int FUN_710078ff60(int *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_1;
  iVar4 = 0;
joined_r0x00710078ff7c:
  do {
    if (iVar3 == 0) {
      return iVar4;
    }
    while( true ) {
      cVar1 = FUN_710077cf80();
      iVar3 = param_1[1];
      if (cVar1 == '\0') break;
      if (iVar3 == 0) {
        return iVar4;
      }
      cVar2 = FUN_710077cf80();
      iVar3 = param_1[1];
      if (cVar2 != '\0') break;
      if (iVar3 != 0x2e) {
LAB_710078ffc0:
        iVar4 = iVar4 + 1;
        break;
      }
      cVar2 = FUN_710077cf80(param_1[2]);
      if (cVar2 == '\0') {
        iVar3 = param_1[1];
        if (param_1[2] == 0) goto LAB_710078ffe8;
        if (iVar3 != 0x2e) goto LAB_710078ffc0;
        cVar1 = '\0';
        if (param_1[2] == 0x2e) goto LAB_7100790024;
        iVar4 = iVar4 + 1;
        param_1 = param_1 + 1;
      }
      else {
        iVar3 = param_1[1];
LAB_710078ffe8:
        if (iVar3 != 0x2e) break;
        if (param_1[2] == 0x2e) {
LAB_7100790024:
          cVar2 = FUN_710077cf80(param_1[3]);
          if (cVar2 == '\0') {
            iVar3 = param_1[1];
            if (param_1[3] != 0) {
              if (cVar1 == '\0') goto LAB_710078ffc0;
              param_1 = param_1 + 1;
              goto joined_r0x00710078ff7c;
            }
          }
          else {
            iVar3 = param_1[1];
          }
          break;
        }
        param_1 = param_1 + 1;
      }
    }
    param_1 = param_1 + 1;
  } while( true );
}



// ===== FUN_7100790070 @ 7100790070 (size=296) =====

char FUN_7100790070(undefined8 param_1)

{
  bool bVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 auStack_4030 [2048];
  undefined1 auStack_2030 [8204];
  char local_24;
  char local_23;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar3 = FUN_710081f600();
  if (0x7ff < uVar3) {
    return '\x01';
  }
  uVar3 = 0;
  FUN_710077e5f0(auStack_4030,param_1,0x800);
  lVar4 = FUN_710081f600(auStack_4030);
  puVar5 = auStack_4030 + lVar4 + -1;
  if (auStack_4030 < puVar5) {
    do {
      cVar2 = FUN_710077cf80(*puVar5);
      if (cVar2 != '\0') {
        *puVar5 = 0;
        local_20 = 0;
        local_18 = 0;
        local_10 = 0;
        cVar2 = FUN_710077c2e0(auStack_4030,auStack_2030,1);
        if ((cVar2 != '\0') && ((local_23 != '\0' || (local_24 == '\0')))) {
          return cVar2;
        }
      }
      bVar1 = uVar3 != lVar4 * 4 - 5U >> 2;
      puVar5 = puVar5 + -1;
      uVar3 = uVar3 + 1;
    } while (bVar1);
  }
  return '\0';
}



// ===== FUN_71007901a0 @ 71007901a0 (size=156) =====

char FUN_71007901a0(char *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  cVar3 = FUN_710077f030(param_1,param_2,0x800);
  if (cVar3 != '\0') {
    iVar5 = *param_2;
    cVar3 = '\0';
    if (iVar5 != 0) {
      cVar3 = *param_1;
      if (cVar3 == '\0') {
        iVar7 = 0;
      }
      else {
        uVar6 = 0;
        iVar7 = 0;
        do {
          bVar1 = cVar3 - 0x2e;
          uVar6 = uVar6 + 1;
          cVar3 = param_1[uVar6];
          if (bVar1 < 2) {
            iVar7 = iVar7 + 1;
          }
        } while (cVar3 != '\0');
      }
      uVar6 = 0;
      iVar4 = 0;
      do {
        uVar6 = uVar6 + 1;
        uVar2 = iVar5 - 0x2e;
        iVar5 = param_2[uVar6];
        if (uVar2 < 2) {
          iVar4 = iVar4 + 1;
        }
      } while (iVar5 != 0);
      cVar3 = iVar4 == iVar7;
    }
  }
  return cVar3;
}



// ===== FUN_7100790240 @ 7100790240 (size=180) =====

void FUN_7100790240(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long local_870;
  undefined8 uStack_868;
  undefined *local_860;
  undefined *puStack_858;
  undefined *local_850;
  undefined *puStack_848;
  undefined *local_840;
  undefined *puStack_838;
  undefined8 local_830;
  undefined8 uStack_828;
  undefined8 local_820;
  undefined8 uStack_818;
  undefined8 local_810;
  undefined4 local_808;
  undefined1 auStack_800 [2048];
  
  FUN_710077ee10(param_2,auStack_800,0x800);
  if (*(char *)(param_1 + 0xded0) == '\0') {
    uVar1 = FUN_710077c200(param_2);
    FUN_710077c250(param_2,uVar1);
    return;
  }
  local_830 = 0;
  uStack_828 = 0;
  local_870 = param_1 + 0x34;
  local_860 = &DAT_71009952f8;
  puStack_858 = &DAT_71009952f8;
  local_850 = &DAT_71009952f8;
  puStack_848 = &DAT_71009952f8;
  local_840 = &DAT_71009952f8;
  puStack_838 = &DAT_71009952f8;
  local_820 = 0;
  uStack_818 = 0;
  local_810 = 2;
  local_808 = 0x59;
  uStack_868 = param_2;
  FUN_710077edd0(&local_870);
  FUN_71007788e0(&DAT_7100d1bd98,3);
  return;
}



// ===== FUN_7100790300 @ 7100790300 (size=72) =====

void FUN_7100790300(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_800 [2048];
  
  FUN_710077ee10(param_2,auStack_800,0x800);
  uVar1 = FUN_710077c200(param_2);
  FUN_710077c250(param_2,uVar1);
  return;
}



// ===== FUN_7100790350 @ 7100790350 (size=100) =====

void FUN_7100790350(long param_1,undefined8 param_2)

{
  undefined1 auStack_800 [2048];
  
  FUN_710077ee10(param_2,auStack_800,0x800);
  if (*(char *)(param_1 + 0x9578) != '\0') {
    *(undefined2 *)(param_1 + 0x9778) = 0;
  }
  if (*(char *)(param_1 + 0x9678) != '\0') {
    *(undefined2 *)(param_1 + 0x977a) = 0;
  }
  return;
}



// ===== FUN_71007903c0 @ 71007903c0 (size=52) =====

void FUN_71007903c0(long param_1,long param_2,undefined8 param_3)

{
  if (((*(char *)(param_1 + 0xe721) == '\0') && (*(short *)(param_2 + 0x97b8) == 0x101)) &&
     (*(char *)(param_1 + 0xe2b8) != '\0')) {
    FUN_7100790240(param_2,param_3);
    return;
  }
  return;
}



// ===== FUN_7100790400 @ 7100790400 (size=120) =====

void FUN_7100790400(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0xe721) == '\0') && (*(char *)(param_1 + 0xe2b8) != '\0')) {
    if (*(int *)(param_2 + 0xdeb8) == 2) {
      iVar1 = FUN_710080c900(param_2 + 0x97e8,&DAT_7100995380);
      if (iVar1 == 0) {
        FUN_7100790300(param_2,param_3);
        return;
      }
    }
    return;
  }
  return;
}



// ===== FUN_7100790480 @ 7100790480 (size=56) =====

void FUN_7100790480(long param_1,long param_2,undefined8 param_3)

{
  if (((*(char *)(param_1 + 0xe2b8) != '\0') && (*(int *)(param_2 + 0xdeb8) == 3)) &&
     (*(char *)(param_2 + 0x9575) != '\0')) {
    FUN_7100790350(param_2,param_3);
    return;
  }
  return;
}



// ===== FUN_71007904c0 @ 71007904c0 (size=368) =====

bool FUN_71007904c0(long param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  
  cVar2 = FUN_710077d970(param_2);
  if ((cVar2 != '\0') || (cVar2 = FUN_710077d970(param_4), cVar2 != '\0')) {
    return false;
  }
  iVar3 = *param_4;
  iVar6 = 0;
  if (iVar3 != 0) {
    iVar4 = 0;
LAB_710079053c:
    do {
      bVar1 = iVar3 == 0x2e;
      iVar3 = param_4[1];
      if ((bVar1) && (iVar3 == 0x2e)) {
        cVar2 = FUN_710077cf80(param_4[2]);
        if (((cVar2 != '\0') || (param_4[2] == 0)) &&
           ((iVar4 == 0 || (cVar2 = FUN_710077cf80(param_4[-1]), cVar2 != '\0')))) {
          iVar3 = param_4[1];
          iVar6 = iVar6 + 1;
          param_4 = param_4 + 1;
          iVar4 = iVar4 + 1;
          if (iVar3 == 0) break;
          goto LAB_710079053c;
        }
        iVar3 = param_4[1];
      }
      param_4 = param_4 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar3 != 0);
    if ((iVar6 != 0) && (cVar2 = FUN_7100790070(param_3), cVar2 != '\0')) {
      return false;
    }
  }
  iVar3 = FUN_710078ff60(param_2);
  lVar5 = FUN_710081f600(&DAT_00004020 + param_1);
  if ((lVar5 != 0) && (iVar4 = FUN_71008141a0(param_3,&DAT_00004020 + param_1,lVar5), iVar4 == 0)) {
    param_3 = param_3 + lVar5;
    while (cVar2 = FUN_710077cf80(*param_3), cVar2 != '\0') {
      param_3 = param_3 + 1;
    }
  }
  iVar4 = FUN_710078ff60(param_3);
  if (iVar4 < iVar3) {
    iVar3 = iVar4;
  }
  return iVar6 <= iVar3;
}



// ===== FUN_7100790630 @ 7100790630 (size=424) =====

char FUN_7100790630(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 auStack_3000 [2048];
  undefined1 auStack_2800 [2048];
  undefined1 auStack_2000 [8192];
  
  uVar7 = *(ulong *)(param_3 + 0x74c0);
  if (uVar7 < 0x800) {
    iVar5 = FUN_710077dcb0(param_2,auStack_3000,uVar7);
    if (uVar7 == (long)iVar5) {
      param_2 = param_2 + 0xf8;
      uVar2 = *(undefined4 *)(param_3 + 0x74d8);
      auStack_3000[uVar7] = 0;
      FUN_710077c6f0(param_2,uVar2,1);
      uVar6 = FUN_710081ce00(auStack_3000);
      FUN_710077c7d0(param_2,auStack_3000,uVar6);
      FUN_710077c870(param_2,param_3 + 0x74d8);
      lVar1 = param_3 + 0x7533;
      if (*(char *)(param_3 + 0x7532) == '\0') {
        lVar1 = 0;
      }
      cVar3 = FUN_710077c8e0(param_2,param_3 + 0x74d8,lVar1);
      if (cVar3 == '\0') {
        return '\x01';
      }
      cVar3 = FUN_71007901a0(auStack_3000,auStack_2000);
      if ((cVar3 != '\0') &&
         ((*(char *)(param_1 + 0xe2bb) != '\0' ||
          ((cVar4 = FUN_710077d890(auStack_2000), cVar4 == '\0' &&
           (cVar4 = FUN_71007904c0(param_1,param_3 + 0x5480,param_4,auStack_2000), cVar4 != '\0'))))
         )) {
        FUN_710077bfe0(param_4,1,*(undefined1 *)(param_1 + 0xe257));
        FUN_710077c2a0(param_4);
        FUN_710077ee10(param_4,auStack_2800,0x800);
        return cVar3;
      }
    }
  }
  return '\0';
}



// ===== FUN_71007907e0 @ 71007907e0 (size=104) =====

undefined8 FUN_71007907e0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_710077c1a0(*(undefined4 *)(param_3 + 0x547c));
  if (cVar1 != '\0') {
    uVar2 = FUN_7100790630(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}



// ===== FUN_7100790850 @ 7100790850 (size=332) =====

char FUN_7100790850(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  char cVar2;
  int local_3000 [512];
  undefined1 auStack_2800 [2048];
  undefined1 auStack_2000 [8192];
  
  FUN_710077ee10(param_3 + 0x211c,local_3000,0x800);
  if (*(int *)(param_3 + 0x2118) - 2U < 2) {
    if (local_3000[0] == 0x5c3f3f5c) {
      return '\0';
    }
    if (local_3000[0] == 0x2f3f3f2f) {
      return '\0';
    }
    FUN_710077d7f0(local_3000,local_3000,0x800);
  }
  cVar1 = FUN_71007901a0(local_3000,auStack_2000);
  if ((cVar1 != '\0') &&
     ((*(char *)(param_1 + 0xe2bb) != '\0' ||
      ((cVar2 = FUN_710077d890(auStack_2000), cVar2 == '\0' &&
       (cVar2 = FUN_71007904c0(param_1,param_3 + 0x28,param_2,auStack_2000), cVar2 != '\0')))))) {
    FUN_710077bfe0(param_2,1,*(undefined1 *)(param_1 + 0xe257));
    FUN_710077c2a0(param_2);
    FUN_710077ee10(param_2,auStack_2800,0x800);
    return cVar1;
  }
  return '\0';
}



// ===== FUN_71007909a0 @ 71007909a0 (size=52) =====

undefined8 FUN_71007909a0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (*(int *)(param_3 + 0xdeb8) == 2) {
    uVar1 = FUN_71007907e0();
    return uVar1;
  }
  if (*(int *)(param_3 + 0xdeb8) != 3) {
    return 0;
  }
  uVar1 = FUN_7100790850(param_1,param_4,param_3 + 0x5458);
  return uVar1;
}



// ===== FUN_71007909e0 @ 71007909e0 (size=376) =====

bool FUN_71007909e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_1000 [2048];
  undefined *local_800;
  undefined *puStack_7f8;
  undefined *local_7f0;
  undefined *puStack_7e8;
  undefined *local_7e0;
  undefined *puStack_7d8;
  undefined *local_7d0;
  undefined *puStack_7c8;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined8 local_7b0;
  undefined8 uStack_7a8;
  undefined8 local_7a0;
  undefined4 local_798;
  
  FUN_710077d830(param_3,param_3,param_4);
  cVar2 = FUN_710077c140(param_3);
  if (cVar2 == '\0') {
    FUN_7100779430(0x16,param_2);
    local_7c0 = 0;
    uStack_7b8 = 0;
    local_800 = &DAT_71009952f8;
    puStack_7f8 = &DAT_71009952f8;
    local_7f0 = &DAT_71009952f8;
    puStack_7e8 = &DAT_71009952f8;
    local_7e0 = &DAT_71009952f8;
    puStack_7d8 = &DAT_71009952f8;
    local_7d0 = &DAT_71009952f8;
    puStack_7c8 = &DAT_71009952f8;
    local_7b0 = 0;
    uStack_7a8 = 0;
    local_7a0 = 0;
    local_798 = 0x17;
    FUN_710077edd0(&local_800);
    FUN_71007788e0(&DAT_7100d1bd98,9);
    return false;
  }
  FUN_710077bfe0(param_2,1,*(undefined1 *)(param_1 + 0xe257));
  FUN_710077ee10(param_3,auStack_1000,0x800);
  FUN_710077ee10(param_2,&local_800,0x800);
  iVar3 = FUN_710081c3c0(auStack_1000,&local_800);
  bVar1 = iVar3 == 0;
  if (bVar1) {
    return bVar1;
  }
  FUN_7100779430(0x16,param_2);
  FUN_7100778ab0(&DAT_7100d1bd98);
  FUN_71007788e0(&DAT_7100d1bd98,9);
  return bVar1;
}



// ===== FUN_7100790b60 @ 7100790b60 (size=76) =====

void FUN_7100790b60(long param_1,char param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 8) = 0;
  if (param_2 == '\0') {
    *(undefined8 *)(param_1 + 0x10) = 0;
    return;
  }
  uVar1 = thunk_FUN_71007af5c0(0x8003);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  FUN_7100808340(uVar1,0,0x8003);
  return;
}



// ===== FUN_7100790bb0 @ 7100790bb0 (size=24) =====

void FUN_7100790bb0(long param_1)

{
  if ((*(char *)(param_1 + 8) == '\0') && (*(long *)(param_1 + 0x10) != 0)) {
    thunk_FUN_710081c200();
    return;
  }
  return;
}



// ===== FUN_7100790bd0 @ 7100790bd0 (size=24) =====

void FUN_7100790bd0(int *param_1,int param_2)

{
  *param_1 = *param_1 + ((uint)(param_2 + param_1[1]) >> 3);
  param_1[1] = param_2 + param_1[1] & 7;
  return;
}



// ===== FUN_7100790bf0 @ 7100790bf0 (size=56) =====

uint FUN_7100790bf0(int *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 4) + (long)*param_1;
  return ((uint)*(byte *)(lVar1 + 2) |
          (uint)*(byte *)(*(long *)(param_1 + 4) + (long)*param_1) << 0x10 |
         (uint)*(byte *)(lVar1 + 1) << 8) >> (ulong)(8U - param_1[1] & 0x1f) & 0xffff;
}



// ===== FUN_7100790c30 @ 7100790c30 (size=28) =====

void FUN_7100790c30(long param_1)

{
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// ===== FUN_7100790c50 @ 7100790c50 (size=156) =====

void FUN_7100790c50(long param_1,ulong param_2)

{
  if (*(ulong *)(param_1 + 0x2038) < param_2) {
    FUN_7100785e50(param_1 + 0x2028,param_2 - *(long *)(param_1 + 0x2030));
  }
  else {
    *(ulong *)(param_1 + 0x2030) = param_2;
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_710077c580(param_1 + 0x2080,0);
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x2050) = 0;
  *(undefined8 *)(param_1 + 0x2058) = 0;
  *(undefined8 *)(param_1 + 0x2060) = 0;
  *(undefined8 *)(param_1 + 0x20a8) = 0;
  *(undefined1 *)(param_1 + 0x20b0) = 0;
  *(undefined1 *)(param_1 + 0x20d1) = 0;
  *(undefined1 *)(param_1 + 0x20da) = 0;
  *(undefined8 *)(param_1 + 0x20fc) = 0;
  *(undefined8 *)(param_1 + 0x2108) = 0;
  *(undefined2 *)(param_1 + 0x2110) = 0;
  *(undefined1 *)(param_1 + 0x2112) = 0;
  *(undefined4 *)(param_1 + 0x2118) = 0;
  *(undefined2 *)(param_1 + 0x411c) = 0;
  return;
}



// ===== FUN_7100790cf0 @ 7100790cf0 (size=72) =====

void FUN_7100790cf0(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_1 + 0x10);
  while (plVar1 != (long *)0x0) {
    plVar2 = (long *)plVar1[3];
    if (*plVar1 != 0) {
      thunk_FUN_710081c200();
    }
    thunk_FUN_710081c200(plVar1,0x20);
    plVar1 = plVar2;
  }
  return;
}



// ===== FUN_7100790d40 @ 7100790d40 (size=124) =====

void FUN_7100790d40(long *param_1,long param_2,undefined1 param_3)

{
  long lVar1;
  
  if (param_2 != 0) {
    FUN_7100790cf0();
  }
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_1[4] != 0) {
    param_1[5] = 0;
    *(undefined1 *)(param_1 + 800) = 0;
    return;
  }
  lVar1 = thunk_FUN_71007af5c0(0x10000);
  param_1[4] = lVar1;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 800) = 0;
  return;
}



// ===== FUN_7100790dc0 @ 7100790dc0 (size=92) =====

void FUN_7100790dc0(long param_1)

{
  long lVar1;
  
  FUN_7100790cf0();
  if (*(long *)(param_1 + 0x20) != 0) {
    thunk_FUN_710081c200();
  }
  lVar1 = *(long *)(param_1 + 0x1938);
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x1958) != '\0') {
      FUN_710077e260(lVar1,*(undefined8 *)(param_1 + 0x1948));
      lVar1 = *(long *)(param_1 + 0x1938);
    }
    FUN_710081c200(lVar1);
  }
  FUN_710078f9f0(param_1 + 0x30);
  return;
}



// ===== FUN_7100790e20 @ 7100790e20 (size=28) =====

void FUN_7100790e20(long param_1,undefined8 *param_2)

{
  if (*(char *)(param_1 + 0x1900) != '\0') {
    *param_2 = *(undefined8 *)(param_1 + 0x1968);
  }
  return;
}



// ===== FUN_7100790e40 @ 7100790e40 (size=88) =====

void FUN_7100790e40(long param_1)

{
  FUN_710078f830(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x1938) = 0;
  *(undefined8 *)(param_1 + 0x1950) = 0;
  *(undefined8 *)(param_1 + 0x1940) = 0;
  *(undefined8 *)(param_1 + 0x1948) = 0;
  *(undefined1 *)(param_1 + 0x1958) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_7100790d40(param_1,0,0);
  return;
}



// ===== FUN_7100790ec0 @ 7100790ec0 (size=288) =====

uint FUN_7100790ec0(long *param_1)

{
  ulong uVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  
  uVar2 = 0;
  uVar3 = (**(code **)(*(long *)*param_1 + 0x30))();
  FUN_710077b9f0(*param_1,param_1[0x322] + param_1[0x324],0);
  plVar4 = (long *)*param_1;
  uVar5 = 0x10000 - param_1[0x325];
  uVar1 = param_1[0x323] - param_1[0x324];
  if (uVar5 < (ulong)(param_1[0x323] - param_1[0x324])) {
    uVar1 = uVar5;
  }
  uVar5 = uVar1 & 0xfffffffffffffff0;
  if (*(char *)((long)plVar4 + 0xb86b) == '\0') {
    uVar5 = uVar1;
  }
  if (uVar5 != 0) {
    uVar2 = FUN_710077be90(plVar4,param_1[4] + param_1[0x325]);
    if ((int)uVar2 < 1) {
      uVar2 = 0;
      plVar4 = (long *)*param_1;
    }
    else {
      plVar4 = (long *)*param_1;
      if (*(char *)((long)plVar4 + 0xb86b) != '\0') {
        FUN_710078fa60(param_1 + 6,param_1[4] + param_1[0x325],(long)(int)(uVar2 & 0xfffffff0));
        plVar4 = (long *)*param_1;
      }
      param_1[0x324] = param_1[0x324] + (long)(int)uVar2;
      param_1[0x325] = param_1[0x325] + (long)(int)uVar2;
    }
  }
  (**(code **)(*plVar4 + 0x28))(plVar4,uVar3,0);
  return uVar2;
}



// ===== FUN_7100790fe0 @ 7100790fe0 (size=500) =====

void FUN_7100790fe0(long *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  plVar2 = (long *)*param_1;
  if ((char)param_1[800] != '\0') {
LAB_7100791108:
    if (*(char *)((long)plVar2 + 0xb86b) != '\0') {
      if (*(char *)(plVar2[0x744] + 0xc230) == '\0') {
        *(undefined1 *)(param_1 + 800) = 0;
        return;
      }
      FUN_710078fb20(param_1 + 6,0,5,plVar2[0x744] + 0xc030,(long)plVar2 + 0xb871,
                     (long)plVar2 + 0xb881,*(undefined4 *)((long)plVar2 + 0xb8bc),
                     (long)plVar2 + 0xb89b,(long)plVar2 + 0xb892);
    }
    param_1[0x324] = 0;
    param_1[0x325] = 0;
    param_1[0x326] = 0;
    if (param_1[0x327] != 0) {
      FUN_710081c200();
      param_1[0x327] = 0;
    }
    param_1[0x328] = 0;
    param_1[0x329] = 0;
    param_1[0x32c] = 0;
    FUN_7100790ec0(param_1);
    return;
  }
  lVar3 = (**(code **)(*plVar2 + 0x30))();
  pcVar5 = *(code **)(*(long *)*param_1 + 0x28);
  param_1[0x32d] = lVar3;
  *(undefined1 *)(param_1 + 0x32e) = 0;
  (*pcVar5)((long *)*param_1,param_2,0);
  *(undefined1 *)(*param_1 + 0x53b8) = 1;
  lVar4 = FUN_710078cce0();
  plVar2 = (long *)*param_1;
  *(undefined1 *)(plVar2 + 0xa77) = 0;
  if ((lVar4 != 0) && (*(int *)((long)plVar2 + 0x3a34) == 3)) {
    iVar1 = FUN_710080c900(plVar2 + 0x12fd,&DAT_7100995390);
    if (iVar1 == 0) {
      pcVar5 = *(code **)(*(long *)*param_1 + 0x30);
      param_1[0x321] = ((long *)*param_1)[0x1bd5];
      lVar4 = (*pcVar5)();
      plVar2 = (long *)*param_1;
      param_1[0x322] = lVar4;
      pcVar5 = *(code **)(*plVar2 + 0x28);
      param_1[0x323] = plVar2[0x1706];
      (*pcVar5)(plVar2,lVar3,0);
      plVar2 = (long *)*param_1;
      *(undefined1 *)(param_1 + 800) = 1;
      goto LAB_7100791108;
    }
    plVar2 = (long *)*param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x007100791098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2,lVar3,0);
  return;
}



// ===== FUN_71007911e0 @ 71007911e0 (size=396) =====

bool FUN_71007911e0(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar4 = *(long *)(param_1 + 0x1930);
  if (0x10000U - lVar4 < 0x100) {
    lVar5 = *(long *)(param_1 + 0x1928) - lVar4;
    FUN_710080f900(*(long *)(param_1 + 0x20),*(long *)(param_1 + 0x20) + lVar4,lVar5);
    *(long *)(param_1 + 0x1928) = lVar5;
    *(undefined8 *)(param_1 + 0x1930) = 0;
    FUN_7100790ec0(param_1);
    lVar4 = *(long *)(param_1 + 0x1930);
  }
  if (lVar4 + 7U <= *(ulong *)(param_1 + 0x1928)) {
    FUN_7100792630(param_2,*(long *)(param_1 + 0x20) + lVar4,7);
    *(long *)(param_1 + 0x1930) = *(long *)(param_1 + 0x1930) + 7;
    iVar1 = FUN_7100792260(param_2);
    iVar2 = FUN_7100792350(param_2,4);
    lVar4 = FUN_71007922e0(param_2);
    iVar3 = iVar2 + -3 + (int)lVar4;
    if (((lVar4 != 0 && iVar2 != 0) && iVar3 < 0) != (lVar4 == 0 || iVar2 == 0)) {
      *(undefined1 *)(param_1 + 0x1900) = 0;
      return false;
    }
    if (iVar3 == 0) {
LAB_7100791330:
      iVar3 = FUN_7100792490(param_2);
      return iVar1 == iVar3;
    }
    do {
      uVar6 = *(long *)(param_1 + 0x1928) - *(long *)(param_1 + 0x1930);
      if ((ulong)(long)iVar3 < uVar6) {
        uVar6 = (long)iVar3;
      }
      iVar3 = iVar3 - (int)uVar6;
      FUN_7100792630(param_2,*(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x1930),uVar6);
      if (iVar3 < 1) {
        *(ulong *)(param_1 + 0x1930) = *(long *)(param_1 + 0x1930) + uVar6;
        goto LAB_7100791330;
      }
      *(undefined8 *)(param_1 + 0x1928) = 0;
      *(undefined8 *)(param_1 + 0x1930) = 0;
      iVar2 = FUN_7100790ec0(param_1);
    } while (iVar2 != 0);
  }
  return false;
}



// ===== FUN_7100791370 @ 7100791370 (size=460) =====

char FUN_7100791370(long param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long local_48 [2];
  undefined8 local_38;
  char local_28;
  
  FUN_71007924d0(local_48,0);
  cVar1 = FUN_71007911e0(param_1,local_48);
  if (cVar1 != '\0') {
    FUN_71007922e0(local_48);
    lVar2 = FUN_71007922e0(local_48);
    uVar3 = FUN_71007922e0(local_48);
    if (uVar3 < 0x200001) {
      uVar4 = *(ulong *)(param_1 + 0x1948);
      if (uVar4 < uVar3) {
        uVar6 = *(ulong *)(param_1 + 0x1950);
        *(ulong *)(param_1 + 0x1940) = uVar3;
        uVar5 = uVar3;
        if ((uVar6 != 0 && uVar6 <= uVar3) && (uVar6 == 0 || uVar3 != uVar6)) {
          FUN_7100778ac0(&DAT_7100d1bd98,L"Maximum allowed array size (%u) is exceeded");
          FUN_7100778a60(&DAT_7100d1bd98);
          uVar5 = *(ulong *)(param_1 + 0x1940);
          uVar4 = *(ulong *)(param_1 + 0x1948);
        }
        uVar4 = uVar4 + 0x20 + (uVar4 >> 2);
        if (uVar4 < uVar5) {
          uVar4 = uVar5;
        }
        if (*(char *)(param_1 + 0x1958) == '\0') {
          lVar7 = FUN_71008141e0(*(undefined8 *)(param_1 + 0x1938),uVar4);
          if (lVar7 == 0) {
            FUN_7100778a60(&DAT_7100d1bd98);
          }
        }
        else {
          lVar7 = FUN_710081c1c0(uVar4);
          if (lVar7 == 0) {
            FUN_7100778a60(&DAT_7100d1bd98);
          }
          lVar8 = *(long *)(param_1 + 0x1938);
          if (lVar8 != 0) {
            uVar9 = *(undefined8 *)(param_1 + 0x1948);
            FUN_710080f900(lVar7,lVar8,uVar9);
            FUN_710077e260(lVar8,uVar9);
            FUN_710081c200(*(undefined8 *)(param_1 + 0x1938));
          }
        }
        *(long *)(param_1 + 0x1938) = lVar7;
        *(ulong *)(param_1 + 0x1948) = uVar4;
      }
      else {
        lVar7 = *(long *)(param_1 + 0x1938);
        *(ulong *)(param_1 + 0x1940) = uVar3;
      }
      FUN_7100792390(local_48,lVar7,uVar3);
      *(long *)(param_1 + 0x1960) = *(long *)(param_1 + 0x1908) - lVar2;
      goto LAB_71007913b8;
    }
  }
  cVar1 = '\0';
LAB_71007913b8:
  if (local_48[0] != 0) {
    if (local_28 != '\0') {
      FUN_710077e260(local_48[0],local_38);
    }
    FUN_710081c200(local_48[0]);
  }
  return cVar1;
}



// ===== FUN_7100791550 @ 7100791550 (size=380) =====

char FUN_7100791550(undefined8 *param_1,undefined8 param_2,long param_3,long *param_4)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (*(char *)(param_1 + 800) == '\0') {
    return '\0';
  }
  do {
    if ((ulong)param_1[0x32d] < (ulong)(param_1[0x32c] + param_1[0x328])) break;
    cVar1 = FUN_7100791370(param_1);
  } while (cVar1 != '\0');
  cVar1 = *(char *)(param_1 + 800);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x32e) == '\0') {
      return '\0';
    }
    FUN_710077b9f0(*param_1,param_1[0x32d],0);
  }
  else {
    uVar3 = param_1[0x32c];
    uVar4 = param_1[0x32d];
    if ((uVar4 < uVar3) || (uVar3 + param_1[0x328] < uVar4 + param_3)) {
      if (*(char *)(param_1 + 0x32e) != '\0') {
        FUN_710077b9f0(*param_1,uVar4,0);
        *(undefined1 *)(param_1 + 0x32e) = 0;
      }
      iVar2 = FUN_710077be90(*param_1,param_2,param_3);
      if (iVar2 < 0) {
        cVar1 = '\0';
        *(undefined1 *)(param_1 + 800) = 0;
      }
      else {
        *param_4 = (long)iVar2;
        param_1[0x32d] = param_1[0x32d] + (long)iVar2;
      }
    }
    else {
      FUN_710080f900(param_2,param_1[0x327] + (uVar4 - uVar3),param_3);
      *param_4 = param_3;
      param_1[0x32d] = param_1[0x32d] + param_3;
      *(undefined1 *)(param_1 + 0x32e) = 1;
    }
  }
  return cVar1;
}



// ===== FUN_71007916d0 @ 71007916d0 (size=212) =====

char FUN_71007916d0(undefined8 *param_1,ulong param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 800);
  if (cVar1 == '\0') {
    return '\0';
  }
  if (param_3 == 0) {
    if ((param_2 < (ulong)param_1[0x32d]) && (param_2 < (ulong)param_1[0x32c])) {
      FUN_7100790fe0(param_1,param_1[0x321]);
    }
    param_1[0x32d] = param_2;
    *(undefined1 *)(param_1 + 0x32e) = 1;
  }
  else {
    if (param_3 == 1) {
      param_1[0x32d] = param_1[0x32d] + param_2;
      *(undefined1 *)(param_1 + 0x32e) = 1;
      return cVar1;
    }
    *(undefined1 *)(param_1 + 0x32e) = 1;
    if (param_3 == 2) {
      FUN_710077b9f0(*param_1);
      uVar2 = FUN_710077b0e0(*param_1);
      param_1[0x32d] = uVar2;
      *(undefined1 *)(param_1 + 0x32e) = 0;
      return cVar1;
    }
  }
  return cVar1;
}



// ===== FUN_71007917b0 @ 71007917b0 (size=8) =====

void FUN_71007917b0(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



// ===== FUN_71007917c0 @ 71007917c0 (size=16) =====

void FUN_71007917c0(long *param_1)

{
  if (*param_1 != 0) {
    thunk_FUN_710081c200();
    return;
  }
  return;
}



// ===== FUN_71007917d0 @ 71007917d0 (size=60) =====

void FUN_71007917d0(long *param_1)

{
  long lVar1;
  
  if (*param_1 != 0) {
    return;
  }
  lVar1 = thunk_FUN_71007af5c0(0x40004);
  *param_1 = lVar1;
  return;
}



// ===== FUN_7100791810 @ 7100791810 (size=204) =====

void FUN_7100791810(undefined8 param_1,byte *param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  byte *pbVar2;
  uint *puVar4;
  ulong uVar5;
  byte bVar6;
  uint uVar7;
  byte *pbVar3;
  
  if (param_3 < 2) {
    bVar6 = 0;
  }
  else {
    bVar6 = 0;
    pbVar3 = param_2 + 1;
    do {
      pbVar2 = pbVar3 + 1;
      bVar6 = *pbVar3 ^ bVar6;
      pbVar3 = pbVar2;
    } while (pbVar2 != param_2 + (ulong)(param_3 - 2) + 2);
  }
  if (*param_2 == bVar6) {
    uVar1 = FUN_710078e3a0(0xffffffff,param_2,param_3);
    uVar7 = 0xad576887;
    uVar5 = 0;
    puVar4 = &DAT_71009c6060;
    while ((~uVar1 != uVar7 || (*puVar4 != param_3))) {
      uVar7 = (int)uVar5 + 1;
      uVar5 = (ulong)uVar7;
      if (uVar7 == 6) {
        return;
      }
      uVar7 = puVar4[4];
      puVar4 = puVar4 + 3;
    }
    *param_4 = (&DAT_71009c6068)[uVar5 * 3];
  }
  return;
}



// ===== FUN_71007918e0 @ 71007918e0 (size=292) =====

ulong FUN_71007918e0(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = FUN_7100790bf0();
  uVar2 = (uint)uVar3 & 0xc000;
  if (uVar2 == 0x4000) {
    if ((uVar3 & 0x3c00) == 0) {
      FUN_7100790bd0(param_1,0xe);
      return (ulong)((uint)uVar3 >> 2 | 0xffffff00);
    }
    FUN_7100790bd0(param_1,10);
    return (uVar3 & 0xffffffff) >> 6 & 0xff;
  }
  if (uVar2 != 0x8000) {
    if ((uVar3 & 0xc000) != 0) {
      FUN_7100790bd0(param_1,2);
      iVar1 = FUN_7100790bf0(param_1);
      FUN_7100790bd0(param_1,0x10);
      uVar2 = FUN_7100790bf0(param_1);
      FUN_7100790bd0(param_1,0x10);
      return (ulong)(iVar1 << 0x10 | uVar2);
    }
    FUN_7100790bd0(param_1,6);
    return (uVar3 & 0xffffffff) >> 10 & 0xf;
  }
  FUN_7100790bd0(param_1,2);
  uVar3 = FUN_7100790bf0(param_1);
  FUN_7100790bd0(param_1,0x10);
  return uVar3 & 0xffffffff;
}



// ===== FUN_7100791a10 @ 7100791a10 (size=64) =====

void FUN_7100791a10(long *param_1,ulong param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  
  if ((param_2 < 0x40000) && (*param_1 + param_2 != param_3)) {
    uVar1 = 0x40000 - param_2;
    if (param_4 < 0x40000 - param_2) {
      uVar1 = param_4;
    }
    if (uVar1 != 0) {
      FUN_710080f900(*param_1 + param_2,param_3);
      return;
    }
  }
  return;
}



// ===== FUN_7100791a50 @ 7100791a50 (size=76) =====

uint FUN_7100791a50(undefined8 param_1,long param_2,ulong param_3,int param_4)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = param_3 >> 3 & 0x1fffffff;
  iVar1 = (int)uVar2;
  return 0xffffffffU >> (ulong)(-param_4 & 0x1f) &
         ((uint)*(byte *)(param_2 + (ulong)(iVar1 + 2)) << 0x10 |
          (uint)*(byte *)(param_2 + (ulong)(iVar1 + 1)) << 8 |
         (uint)*(byte *)(param_2 + uVar2) | (uint)*(byte *)(param_2 + (ulong)(iVar1 + 3)) << 0x18)
         >> (ulong)((uint)param_3 & 7);
}



// ===== FUN_7100791aa0 @ 7100791aa0 (size=84) =====

void FUN_7100791aa0(undefined8 param_1,long param_2,int param_3,uint param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = param_3 << (ulong)(param_4 & 7);
  uVar6 = ~((0xffffffffU >> (ulong)(-param_5 & 0x1f)) << (ulong)(param_4 & 7));
  pbVar3 = (byte *)(param_2 + (ulong)(param_4 >> 3));
  do {
    bVar2 = (byte)uVar6;
    uVar6 = uVar6 >> 8 | 0xff000000;
    bVar1 = (byte)uVar5;
    uVar5 = uVar5 >> 8;
    pbVar4 = pbVar3 + 1;
    *pbVar3 = bVar2 & *pbVar3 | bVar1;
    pbVar3 = pbVar4;
  } while ((byte *)(param_2 + 4 + (ulong)(param_4 >> 3)) != pbVar4);
  return;
}



// ===== FUN_7100791b00 @ 7100791b00 (size=1588) =====

undefined8 FUN_7100791b00(long *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  uint *puVar19;
  int iVar20;
  uint uVar21;
  byte *pbVar22;
  int iVar23;
  byte *pbVar24;
  byte *pbVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  uint auStack_1c [5];
  int local_8;
  
  if (param_2 == 4) {
    uVar21 = *(uint *)(param_1 + 3);
    if (uVar21 - 3 < 0x1fffe) {
      uVar28 = *(uint *)(param_1 + 1);
      uVar31 = *(uint *)((long)param_1 + 0xc);
      uVar30 = uVar28 - 3;
      if (uVar30 <= uVar21 && uVar31 < 3) {
        uVar27 = 0;
        pbVar24 = (byte *)*param_1;
        pbVar25 = pbVar24;
        do {
          uVar16 = 0;
          pbVar22 = pbVar25;
          uVar13 = uVar27;
          do {
            uVar18 = (ulong)uVar13;
            if (uVar28 <= uVar13) {
              lVar11 = uVar18 - uVar30;
              bVar3 = pbVar24[lVar11 + (ulong)uVar21];
              bVar4 = pbVar24[lVar11 + (ulong)uVar21 + -3];
              iVar32 = (bVar3 + uVar16) - (uint)bVar4;
              iVar9 = iVar32 - (uint)bVar3;
              iVar23 = -iVar9;
              if (-1 < iVar9) {
                iVar23 = iVar9;
              }
              iVar26 = iVar32 - (uint)bVar4;
              iVar9 = -iVar26;
              if (-1 < iVar26) {
                iVar9 = iVar26;
              }
              iVar26 = iVar23;
              if (iVar9 < iVar23) {
                iVar26 = iVar9;
              }
              iVar32 = iVar32 - uVar16;
              iVar17 = -iVar32;
              if (-1 < iVar32) {
                iVar17 = iVar32;
              }
              if (iVar26 < iVar17) {
                if (iVar9 < iVar23) {
                  bVar3 = bVar4;
                }
                uVar16 = (uint)bVar3;
              }
            }
            pbVar25 = pbVar22 + 1;
            uVar13 = uVar13 + 3;
            uVar10 = uVar16 - *pbVar22;
            uVar16 = uVar10 & 0xff;
            pbVar24[uVar18 + uVar21] = (byte)uVar10;
            pbVar22 = pbVar25;
          } while (uVar13 < uVar21);
          uVar27 = uVar27 + 1;
        } while (uVar27 != 3);
        if (uVar21 - 2 <= uVar31) {
          return 1;
        }
        uVar28 = uVar31 + 2;
        uVar30 = uVar31 + 1;
        pbVar25 = pbVar24 + (ulong)uVar28 + (ulong)uVar21;
        do {
          bVar3 = pbVar25[(ulong)uVar30 - (ulong)uVar28];
          pbVar24[(ulong)uVar31 + (ulong)uVar21] = bVar3 + pbVar24[(ulong)uVar31 + (ulong)uVar21];
          uVar31 = uVar31 + 3;
          *pbVar25 = bVar3 + *pbVar25;
          pbVar25 = pbVar25 + 3;
        } while (uVar31 < uVar21 - 2);
        return 1;
      }
    }
    return 0;
  }
  if (param_2 < 5) {
    if (param_2 == 3) {
      iVar23 = (int)param_1[3];
      if (0x3ffeb < iVar23 - 0x15U) {
        return 0;
      }
      if (iVar23 != 0x15) {
        uVar21 = (*(uint *)(param_1 + 4) >> 4) + 1;
        pbVar25 = (byte *)*param_1;
        uVar31 = *(uint *)(param_1 + 4) >> 4;
        uVar28 = uVar21;
        while( true ) {
          iVar32 = (*pbVar25 & 0x1f) - 0x10;
          if ((-1 < iVar32) && (bVar3 = (&DAT_71009c6050)[iVar32], bVar3 != 0)) {
            iVar32 = 0x12;
            uVar30 = 1;
            if ((bVar3 & 1) != 0) goto LAB_7100791c0c;
            while (iVar32 = iVar32 + 0x29, uVar30 != 3) {
              uVar27 = uVar30 & 0x1f;
              uVar30 = uVar30 + 1;
              if (((int)(uint)bVar3 >> uVar27 & 1U) != 0) {
LAB_7100791c0c:
                iVar9 = FUN_7100791a50(param_1,pbVar25,iVar32 + 0x18,4);
                if (iVar9 == 5) {
                  iVar9 = FUN_7100791a50(param_1,pbVar25,iVar32,0x14);
                  FUN_7100791aa0(param_1,pbVar25,iVar9 - uVar31 & 0xfffff,iVar32,0x14);
                }
              }
            }
          }
          pbVar25 = pbVar25 + 0x10;
          if (uVar28 == uVar21 + (iVar23 - 0x16U >> 4)) break;
          uVar31 = uVar28;
          uVar28 = uVar28 + 1;
        }
      }
    }
    else if (param_2 != 0) {
      uVar21 = (int)param_1[3] - 4;
      if (0x3fffc < uVar21) {
        return 0;
      }
      lVar11 = param_1[4];
      pbVar25 = (byte *)*param_1;
      uVar31 = 0;
      while (uVar28 = uVar31, pbVar24 = pbVar25, uVar28 < uVar21) {
        pbVar25 = pbVar24 + 1;
        uVar31 = uVar28 + 1;
        if (*pbVar24 == 0xe8 || (param_2 == 2) + 0xe8 == (uint)*pbVar24) {
          iVar23 = (int)lVar11 + uVar28 + 1;
          iVar32 = (uint)pbVar24[1] + (uint)pbVar24[2] * 0x100 + (uint)pbVar24[3] * 0x10000 +
                   (uint)pbVar24[4] * 0x1000000;
          if (iVar32 < 0) {
            if (-1 < iVar23 + iVar32) {
              *(int *)pbVar25 = iVar32 + 0x1000000;
            }
          }
          else if (iVar32 + -0x1000000 < 0) {
            *(int *)pbVar25 = iVar32 - iVar23;
          }
          pbVar25 = pbVar24 + 5;
          uVar31 = uVar28 + 5;
        }
      }
    }
  }
  else if (param_2 == 5) {
    uVar21 = *(uint *)(param_1 + 1);
    uVar31 = *(uint *)(param_1 + 3);
    if (0x7f < uVar21 - 1 || 0x20000 < uVar31) {
      return 0;
    }
    uVar28 = 0;
    pbVar24 = (byte *)*param_1;
    pbVar25 = pbVar24;
    do {
      if (uVar28 < uVar31) {
        local_8 = 0;
        auStack_1c[4] = 0;
        auStack_1c[3] = 0;
        auStack_1c[2] = 0;
        auStack_1c[1] = 0;
        uVar16 = 0;
        uVar13 = 0;
        uVar30 = 0;
        iVar32 = 0;
        iVar26 = 0;
        iVar9 = 0;
        pbVar22 = pbVar25;
        iVar23 = 0;
        iVar17 = 0;
        iVar20 = 0;
        iVar29 = 0;
        uVar27 = uVar28;
        do {
          iVar17 = iVar20 - iVar17;
          pbVar25 = pbVar22 + 1;
          bVar3 = *pbVar22;
          uVar15 = -(uint)(bVar3 >> 7) & 0xfffff800 | (uint)bVar3 << 3;
          uVar10 = -uVar15;
          if (-1 < (int)uVar15) {
            uVar10 = uVar15;
          }
          uVar13 = uVar13 + uVar10;
          iVar6 = uVar15 - iVar20;
          iVar1 = -iVar6;
          if (-1 < iVar6) {
            iVar1 = iVar6;
          }
          uVar16 = iVar1 + uVar16;
          iVar1 = iVar20 + uVar15;
          iVar6 = -iVar1;
          if (-1 < iVar1) {
            iVar6 = iVar1;
          }
          iVar7 = uVar15 - iVar17;
          iVar1 = -iVar7;
          if (-1 < iVar7) {
            iVar1 = iVar7;
          }
          iVar7 = iVar17 + uVar15;
          iVar5 = ((uint)(iVar17 * iVar26 + iVar20 * iVar9 + iVar32 * iVar23 + iVar29 * 8) >> 3 &
                  0xff) - (uint)bVar3;
          iVar2 = -iVar7;
          if (-1 < iVar7) {
            iVar2 = iVar7;
          }
          iVar8 = uVar15 - iVar23;
          iVar7 = -iVar8;
          if (-1 < iVar8) {
            iVar7 = iVar8;
          }
          bVar3 = (byte)iVar5;
          iVar23 = uVar15 + iVar23;
          iVar8 = -iVar23;
          if (-1 < iVar23) {
            iVar8 = iVar23;
          }
          pbVar24[(ulong)uVar27 + (ulong)uVar31] = bVar3;
          auStack_1c[1] = iVar6 + auStack_1c[1];
          auStack_1c[2] = iVar1 + auStack_1c[2];
          auStack_1c[3] = iVar2 + auStack_1c[3];
          auStack_1c[4] = iVar7 + auStack_1c[4];
          local_8 = iVar8 + local_8;
          if ((uVar30 & 0x1f) == 0) {
            uVar15 = 0;
            uVar10 = 1;
            puVar19 = auStack_1c;
            uVar14 = uVar16;
            while( true ) {
              if (uVar14 < uVar13) {
                uVar15 = uVar10;
              }
              uVar10 = uVar10 + 1;
              if (uVar14 < uVar13) {
                uVar13 = uVar14;
              }
              *puVar19 = 0;
              if (uVar10 == 7) break;
              uVar14 = puVar19[1];
              puVar19 = puVar19 + 1;
            }
            if (uVar15 == 4) {
              uVar13 = 0;
              iVar26 = iVar26 + (uint)(iVar26 < 0x10);
            }
            else if (uVar15 < 5) {
              if (uVar15 == 2) {
                uVar13 = 0;
                iVar9 = iVar9 + (uint)(iVar9 < 0x10);
              }
              else if (uVar15 == 3) {
                uVar13 = 0;
                iVar26 = iVar26 - (uint)(iVar26 != -0x11 &&
                                        iVar26 + 0x11 < 0 == SCARRY4(iVar26,0x11));
              }
              else {
                if (uVar15 != 1) goto LAB_7100792080;
                uVar13 = 0;
                iVar9 = iVar9 - (uint)(iVar9 != -0x11 && iVar9 + 0x11 < 0 == SCARRY4(iVar9,0x11));
              }
            }
            else if (uVar15 == 5) {
              uVar13 = 0;
              iVar32 = iVar32 - (uint)(iVar32 != -0x11 && iVar32 + 0x11 < 0 == SCARRY4(iVar32,0x11))
              ;
            }
            else if (uVar15 == 6) {
              uVar13 = 0;
              iVar32 = iVar32 + (uint)(iVar32 < 0x10);
            }
            else {
LAB_7100792080:
              uVar13 = 0;
            }
          }
          if (uVar31 <= uVar27 + uVar21) break;
          uVar27 = uVar27 + uVar21;
          uVar30 = uVar30 + 1;
          pbVar22 = pbVar25;
          iVar23 = iVar17;
          iVar17 = iVar20;
          iVar20 = (int)(char)(bVar3 - (char)iVar29);
          iVar29 = iVar5;
        } while( true );
      }
      uVar28 = uVar28 + 1;
    } while (uVar28 < uVar21);
  }
  else if (param_2 == 6) {
    uVar31 = *(uint *)(param_1 + 1);
    uVar21 = *(uint *)(param_1 + 3);
    if (0x3ff < uVar31 - 1 || 0x20000 < uVar21) {
      return 0;
    }
    uVar27 = uVar21 << 1;
    uVar30 = 0;
    uVar28 = 0;
    do {
      if (uVar21 < uVar27) {
        cVar12 = '\0';
        uVar16 = uVar28;
        uVar13 = uVar21;
        do {
          uVar28 = uVar16 + 1;
          cVar12 = cVar12 - *(char *)(*param_1 + (ulong)uVar16);
          *(char *)(*param_1 + (ulong)uVar13) = cVar12;
          uVar13 = uVar13 + uVar31;
          uVar16 = uVar28;
        } while (uVar13 < uVar27);
      }
      uVar30 = uVar30 + 1;
      uVar21 = uVar21 + 1;
    } while (uVar30 < uVar31);
  }
  return 1;
}



// ===== FUN_7100792140 @ 7100792140 (size=152) =====

void FUN_7100792140(long *param_1,int *param_2)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_2 + 1);
  param_1[2] = *(long *)(param_2 + 3);
  param_1[1] = lVar3;
  uVar4 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)((long)param_1 + 0x1c) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)((long)param_1 + 0x14) = uVar4;
  param_2[8] = 0;
  param_2[9] = 0;
  if (*param_2 == 0) {
    return;
  }
  cVar2 = FUN_7100791b00();
  uVar1 = param_2[5] & 0x3ffff;
  param_2[10] = uVar1;
  if (*param_2 - 4U < 3) {
    lVar3 = *param_1 + (ulong)uVar1;
    if (0x20000 < uVar1 || cVar2 == '\0') {
      lVar3 = *param_1;
    }
    *(long *)(param_2 + 8) = lVar3;
    return;
  }
  *(long *)(param_2 + 8) = *param_1;
  return;
}



// ===== FUN_71007921e0 @ 71007921e0 (size=16) =====

void FUN_71007921e0(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



// ===== FUN_71007921f0 @ 71007921f0 (size=40) =====

undefined1 FUN_71007921f0(long *param_1)

{
  ulong uVar1;
  
  uVar1 = param_1[7];
  if (uVar1 < (ulong)param_1[6]) {
    param_1[7] = uVar1 + 1;
    return *(undefined1 *)(*param_1 + uVar1);
  }
  return 0;
}



// ===== FUN_7100792220 @ 7100792220 (size=60) =====

short FUN_7100792220(long *param_1)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  
  lVar1 = param_1[7];
  if ((ulong)param_1[6] <= lVar1 + 1U) {
    return 0;
  }
  bVar2 = *(byte *)(*param_1 + lVar1 + 1U);
  bVar3 = *(byte *)(*param_1 + lVar1);
  param_1[7] = lVar1 + 2;
  return (ushort)bVar2 * 0x100 + (ushort)bVar3;
}



// ===== FUN_7100792260 @ 7100792260 (size=72) =====

int FUN_7100792260(long *param_1)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  
  lVar1 = param_1[7];
  if ((ulong)param_1[6] <= lVar1 + 3U) {
    return 0;
  }
  lVar6 = *param_1;
  bVar4 = *(byte *)(lVar6 + lVar1);
  bVar2 = *(byte *)(lVar6 + lVar1 + 1);
  bVar3 = *(byte *)(lVar6 + lVar1 + 2);
  bVar5 = *(byte *)(lVar6 + lVar1 + 3U);
  param_1[7] = lVar1 + 4;
  return (uint)bVar4 + (uint)bVar2 * 0x100 + (uint)bVar3 * 0x10000 + (uint)bVar5 * 0x1000000;
}



// ===== FUN_71007922b0 @ 71007922b0 (size=48) =====

long FUN_71007922b0(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_7100792260();
  lVar2 = FUN_7100792260(param_1);
  return (uVar1 & 0xffffffff) + (lVar2 << 0x20);
}



// ===== FUN_71007922e0 @ 71007922e0 (size=104) =====

long FUN_71007922e0(long *param_1)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_1[7];
  if (uVar5 < (ulong)param_1[6]) {
    uVar6 = 0;
    lVar4 = 0;
    do {
      uVar5 = uVar5 + 1;
      param_1[7] = uVar5;
      bVar2 = *(byte *)(*param_1 + -1 + uVar5);
      uVar3 = uVar6 & 0x3f;
      uVar1 = (int)uVar6 + 7;
      uVar6 = (ulong)uVar1;
      lVar4 = lVar4 + (((ulong)bVar2 & 0x7f) << uVar3);
      if (-1 < (char)bVar2) {
        return lVar4;
      }
    } while (uVar1 < 0x40 && uVar5 < (ulong)param_1[6]);
  }
  return 0;
}



// ===== FUN_7100792350 @ 7100792350 (size=64) =====

int FUN_7100792350(long *param_1,ulong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  if (param_2 < (ulong)param_1[6]) {
    do {
      if (-1 < *(char *)(*param_1 + param_2)) {
        return ((int)param_2 - iVar1) + 1;
      }
      param_2 = param_2 + 1;
    } while (param_2 != param_1[6]);
  }
  return 0;
}



// ===== FUN_7100792390 @ 7100792390 (size=168) =====

ulong FUN_7100792390(long *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = param_1[6] - param_1[7];
  if (param_3 < uVar1) {
    uVar1 = param_3;
  }
  if (uVar1 == 0) {
    if (param_3 != 0) {
LAB_7100792408:
      FUN_7100808340(param_2 + uVar1,0,param_3 - uVar1);
      param_1[7] = param_1[7] + uVar1;
      return uVar1;
    }
  }
  else {
    param_2 = FUN_710080f900(param_2,*param_1 + param_1[7],uVar1);
    if (uVar1 < param_3) goto LAB_7100792408;
  }
  param_1[7] = param_1[7] + uVar1;
  return uVar1;
}



// ===== FUN_7100792440 @ 7100792440 (size=80) =====

ushort FUN_7100792440(long *param_1,char param_2)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar2 = param_1[6];
  if (2 < uVar2) {
    if (param_2 != '\0') {
      uVar2 = param_1[7];
    }
    uVar1 = FUN_710078e3a0(0xffffffff,*param_1 + 2,uVar2 - 2);
    return ~uVar1;
  }
  return 0;
}



// ===== FUN_7100792490 @ 7100792490 (size=60) =====

uint FUN_7100792490(long *param_1)

{
  uint uVar1;
  
  if (4 < (ulong)param_1[6]) {
    uVar1 = FUN_710078e3a0(0xffffffff,*param_1 + 4,param_1[6] - 4);
    return ~uVar1;
  }
  return 0xffffffff;
}



// ===== FUN_71007924d0 @ 71007924d0 (size=48) =====

void FUN_71007924d0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = param_2;
  FUN_71007921e0();
  return;
}



// ===== FUN_7100792520 @ 7100792520 (size=260) =====

ulong FUN_7100792520(long *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_1[8] == 0) {
    uVar3 = 0;
    if (param_2 != 0) {
      FUN_7100785e50();
      iVar2 = (**(code **)(*(long *)param_1[5] + 0x20))
                        ((long *)param_1[5],*param_1 + param_1[6],param_2);
      uVar3 = (ulong)iVar2;
      param_1[6] = param_1[6] + uVar3;
    }
  }
  else {
    lVar4 = param_1[1];
    uVar3 = lVar4 - param_1[6];
    lVar1 = param_1[6] + param_2;
    if (uVar3 < param_2) {
      lVar1 = (uVar3 - param_2 & 0xf) + (lVar1 - lVar4);
      FUN_7100785e50(param_1,lVar1);
      iVar2 = (**(code **)(*(long *)param_1[5] + 0x20))((long *)param_1[5],*param_1 + lVar4,lVar1);
      FUN_710078fa60(param_1[8],*param_1 + lVar4,lVar1);
      lVar1 = param_1[6] + param_2;
      if ((long)iVar2 == 0) {
        lVar1 = param_1[6];
      }
      param_1[6] = lVar1;
      return (long)iVar2;
    }
    param_1[6] = lVar1;
    uVar3 = param_2;
  }
  return uVar3;
}



// ===== FUN_7100792630 @ 7100792630 (size=96) =====

void FUN_7100792630(long *param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    return;
  }
  FUN_7100785e50(param_1,param_3);
  FUN_710080f900(*param_1 + param_1[6],param_2,param_3);
  param_1[6] = param_1[6] + param_3;
  return;
}



// ===== FUN_7100792690 @ 7100792690 (size=1360) =====

void FUN_7100792690(char *param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  byte local_30 [16];
  undefined8 local_20;
  undefined8 uStack_18;
  byte local_10 [16];
  
  if (param_3 == 0) {
    return;
  }
  local_20 = *(undefined8 *)(param_1 + 8);
  uStack_18 = *(undefined8 *)(param_1 + 0x10);
  if (param_3 >> 4 != 0) {
    lVar9 = (long)param_2 + -1;
    puVar12 = param_2;
    do {
      iVar2 = *(int *)(param_1 + 4);
      lVar11 = ((long)iVar2 + 1) * 0x10;
      lVar7 = 1;
      do {
        lVar1 = lVar7 + 1;
        local_10[lVar7 + -1] = param_1[lVar7 + lVar11 + 7] ^ *(byte *)(lVar9 + lVar7);
        lVar7 = lVar1;
      } while (lVar1 != 0x11);
      uVar17 = (ulong)local_10[0];
      lVar7 = 0;
      uVar16 = (ulong)local_10[0xd];
      uVar15 = (ulong)local_10[10];
      uVar14 = (ulong)local_10[7];
      pbVar8 = local_30;
      do {
        lVar1 = lVar7 + uVar17 * 4;
        lVar4 = lVar7 + uVar16 * 4;
        lVar5 = lVar7 + uVar15 * 4;
        lVar6 = lVar7 + uVar14 * 4;
        lVar7 = lVar7 + 1;
        *pbVar8 = (&DAT_7100d1efe8)[lVar1] ^ (&DAT_7100d1f3e8)[lVar4] ^
                  (&DAT_7100d1f7e8)[lVar5] ^ (&DAT_7100d1fbe8)[lVar6];
        pbVar8 = pbVar8 + 1;
      } while (lVar7 != 4);
      lVar7 = 0;
      do {
        lVar1 = lVar7 + 1;
        local_30[lVar7 + 4] =
             (&DAT_7100d1efe8)[lVar7 + (ulong)local_10[4] * 4] ^
             (&DAT_7100d1f3e8)[lVar7 + (ulong)local_10[1] * 4] ^
             (&DAT_7100d1f7e8)[lVar7 + (ulong)local_10[0xe] * 4] ^
             (&DAT_7100d1fbe8)[lVar7 + (ulong)local_10[0xb] * 4];
        lVar7 = lVar1;
      } while (lVar1 != 4);
      lVar7 = 0;
      do {
        lVar1 = lVar7 + 1;
        local_30[lVar7 + 8] =
             (&DAT_7100d1efe8)[lVar7 + (ulong)local_10[8] * 4] ^
             (&DAT_7100d1f3e8)[lVar7 + (ulong)local_10[5] * 4] ^
             (&DAT_7100d1f7e8)[lVar7 + (ulong)local_10[2] * 4] ^
             (&DAT_7100d1fbe8)[lVar7 + (ulong)local_10[0xf] * 4];
        lVar7 = lVar1;
      } while (lVar1 != 4);
      lVar7 = 0;
      do {
        lVar1 = lVar7 + 1;
        local_30[lVar7 + 0xc] =
             (&DAT_7100d1efe8)[lVar7 + (ulong)local_10[0xc] * 4] ^
             (&DAT_7100d1f3e8)[lVar7 + (ulong)local_10[9] * 4] ^
             (&DAT_7100d1f7e8)[lVar7 + (ulong)local_10[6] * 4] ^
             (&DAT_7100d1fbe8)[lVar7 + (ulong)local_10[3] * 4];
        lVar7 = lVar1;
      } while (lVar1 != 4);
      if (2 < iVar2) {
        pcVar10 = param_1 + lVar11 + -9;
        do {
          lVar7 = 1;
          do {
            lVar1 = lVar7 + 1;
            local_10[lVar7 + -1] = (&stack0xffffffffffffffcf)[lVar7] ^ pcVar10[lVar7];
            lVar7 = lVar1;
          } while (lVar1 != 0x11);
          uVar17 = (ulong)local_10[0];
          lVar7 = 0;
          uVar16 = (ulong)local_10[0xd];
          uVar15 = (ulong)local_10[10];
          uVar14 = (ulong)local_10[7];
          pbVar8 = local_30;
          do {
            lVar1 = lVar7 + uVar17 * 4;
            lVar4 = lVar7 + uVar16 * 4;
            lVar5 = lVar7 + uVar15 * 4;
            lVar6 = lVar7 + uVar14 * 4;
            lVar7 = lVar7 + 1;
            *pbVar8 = (&DAT_7100d1efe8)[lVar1] ^ (&DAT_7100d1f3e8)[lVar4] ^
                      (&DAT_7100d1f7e8)[lVar5] ^ (&DAT_7100d1fbe8)[lVar6];
            pbVar8 = pbVar8 + 1;
          } while (lVar7 != 4);
          lVar7 = 0;
          do {
            lVar1 = lVar7 + 1;
            local_30[lVar7 + 4] =
                 (&DAT_7100d1efe8)[lVar7 + (ulong)local_10[4] * 4] ^
                 (&DAT_7100d1f3e8)[lVar7 + (ulong)local_10[1] * 4] ^
                 (&DAT_7100d1f7e8)[lVar7 + (ulong)local_10[0xe] * 4] ^
                 (&DAT_7100d1fbe8)[lVar7 + (ulong)local_10[0xb] * 4];
            lVar7 = lVar1;
          } while (lVar1 != 4);
          lVar7 = 0;
          do {
            lVar1 = lVar7 + 1;
            local_30[lVar7 + 8] =
                 (&DAT_7100d1efe8)[lVar7 + (ulong)local_10[8] * 4] ^
                 (&DAT_7100d1f3e8)[lVar7 + (ulong)local_10[5] * 4] ^
                 (&DAT_7100d1f7e8)[lVar7 + (ulong)local_10[2] * 4] ^
                 (&DAT_7100d1fbe8)[lVar7 + (ulong)local_10[0xf] * 4];
            lVar7 = lVar1;
          } while (lVar1 != 4);
          lVar7 = 0;
          do {
            lVar1 = lVar7 + 1;
            local_30[lVar7 + 0xc] =
                 (&DAT_7100d1f7e8)[lVar7 + (ulong)local_10[6] * 4] ^
                 (&DAT_7100d1fbe8)[lVar7 + (ulong)local_10[3] * 4] ^
                 (&DAT_7100d1efe8)[lVar7 + (ulong)local_10[0xc] * 4] ^
                 (&DAT_7100d1f3e8)[lVar7 + (ulong)local_10[9] * 4];
            lVar7 = lVar1;
          } while (lVar1 != 4);
          pcVar10 = pcVar10 + -0x10;
        } while (param_1 + lVar11 + (ulong)(iVar2 - 3) * -0x10 + -0x19 != pcVar10);
      }
      lVar7 = 1;
      do {
        lVar11 = lVar7 + 1;
        local_10[lVar7 + -1] = param_1[lVar7 + 0x27] ^ (&stack0xffffffffffffffcf)[lVar7];
        lVar7 = lVar11;
      } while (lVar11 != 0x11);
      local_30[6] = (&DAT_7100d1dee8)[(int)(uint)local_10[0xe]];
      local_30[7] = (&DAT_7100d1dee8)[(int)(uint)local_10[0xb]];
      bVar3 = (&DAT_7100d1dee8)[(int)(uint)local_10[0]];
      local_30[8] = (&DAT_7100d1dee8)[(int)(uint)local_10[8]];
      local_30[9] = (&DAT_7100d1dee8)[(int)(uint)local_10[5]];
      local_30[0] = bVar3;
      local_30[1] = (&DAT_7100d1dee8)[(int)(uint)local_10[0xd]];
      local_30[2] = (&DAT_7100d1dee8)[(int)(uint)local_10[10]];
      local_30[3] = (&DAT_7100d1dee8)[(int)(uint)local_10[7]];
      local_30[4] = (&DAT_7100d1dee8)[(int)(uint)local_10[4]];
      local_30[5] = (&DAT_7100d1dee8)[(int)(uint)local_10[1]];
      local_30[10] = (&DAT_7100d1dee8)[(int)(uint)local_10[2]];
      local_30[0xb] = (&DAT_7100d1dee8)[(int)(uint)local_10[0xf]];
      local_30[0xc] = (&DAT_7100d1dee8)[(int)(uint)local_10[0xc]];
      local_30[0xd] = (&DAT_7100d1dee8)[(int)(uint)local_10[9]];
      local_30[0xe] = (&DAT_7100d1dee8)[(int)(uint)local_10[6]];
      local_30[0xf] = (&DAT_7100d1dee8)[(int)(uint)local_10[3]];
      lVar7 = 1;
      while( true ) {
        (&stack0xffffffffffffffcf)[lVar7] = bVar3 ^ param_1[lVar7 + 0x17];
        if (lVar7 + 1 == 0x11) break;
        bVar3 = local_30[lVar7];
        lVar7 = lVar7 + 1;
      }
      if (*param_1 != '\0') {
        lVar7 = 1;
        do {
          lVar11 = lVar7 + 1;
          (&stack0xffffffffffffffcf)[lVar7] =
               (&stack0xffffffffffffffcf)[lVar7] ^ local_30[lVar7 + 0xf];
          lVar7 = lVar11;
        } while (lVar11 != 0x11);
      }
      puVar13 = puVar12 + 2;
      local_20 = *puVar12;
      uStack_18 = puVar12[1];
      lVar9 = lVar9 + 0x10;
      *param_4 = CONCAT17(local_30[7],
                          CONCAT16(local_30[6],
                                   CONCAT15(local_30[5],
                                            CONCAT14(local_30[4],
                                                     CONCAT13(local_30[3],
                                                              CONCAT12(local_30[2],
                                                                       CONCAT11(local_30[1],
                                                                                local_30[0])))))));
      param_4[1] = CONCAT17(local_30[0xf],
                            CONCAT16(local_30[0xe],
                                     CONCAT15(local_30[0xd],
                                              CONCAT14(local_30[0xc],
                                                       CONCAT13(local_30[0xb],
                                                                CONCAT12(local_30[10],
                                                                         CONCAT11(local_30[9],
                                                                                  local_30[8])))))))
      ;
      puVar12 = puVar13;
      param_4 = param_4 + 2;
    } while (puVar13 != param_2 + (param_3 >> 4) * 2);
  }
  *(undefined8 *)(param_1 + 8) = local_20;
  *(undefined8 *)(param_1 + 0x10) = uStack_18;
  return;
}



// ===== FUN_7100792be0 @ 7100792be0 (size=976) =====

void FUN_7100792be0(long param_1,undefined8 *param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  int iVar7;
  byte *pbVar8;
  byte bVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  int iVar16;
  ulong uVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte *pbVar21;
  byte bVar22;
  undefined8 uVar23;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  iVar11 = 0;
  iVar16 = 0;
  uVar23 = *param_2;
  iVar3 = *(int *)(param_1 + 4);
  iVar7 = iVar3 + -6;
  uStack_18 = param_2[1];
  local_20 = uVar23;
  uVar23 = local_20;
  uStack_8 = param_2[3];
  local_10 = param_2[2];
  if (iVar7 < 1) {
LAB_7100792c9c:
    if (iVar16 <= iVar3) {
      local_20._0_1_ = (byte)uVar23;
      pbVar21 = &UNK_71009c61a8;
      uVar17 = -(ulong)(iVar3 - 7U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar3 - 7U) << 2;
      local_20._1_1_ = (byte)((ulong)uVar23 >> 8);
      bVar9 = 1;
      local_20._2_1_ = (byte)((ulong)uVar23 >> 0x10);
      local_20._3_1_ = (byte)((ulong)uVar23 >> 0x18);
      bVar18 = (byte)local_20;
      bVar22 = local_20._1_1_;
      bVar20 = local_20._2_1_;
      bVar19 = local_20._3_1_;
      local_20 = uVar23;
      while( true ) {
        uVar23 = local_20;
        pbVar21 = pbVar21 + 1;
        bVar2 = (&DAT_71009c60a8)[(int)(uint)*(byte *)((long)&local_20 + uVar17 + 1)] ^ bVar18;
        bVar18 = bVar2 ^ bVar9;
        local_20 = CONCAT71(local_20._1_7_,bVar2);
        bVar20 = (&DAT_71009c60a8)[(int)(uint)*(byte *)((long)&local_20 + uVar17 + 3)] ^ bVar20;
        bVar22 = (&DAT_71009c60a8)[(int)(uint)*(byte *)((long)&local_20 + uVar17 + 2)] ^ bVar22;
        local_20._0_2_ = CONCAT11(bVar22,bVar18);
        bVar19 = (&DAT_71009c60a8)[(int)(uint)*(byte *)((long)&local_20 + uVar17)] ^ bVar19;
        local_20._4_4_ = SUB84(uVar23,4);
        local_20._0_4_ = CONCAT13(bVar19,CONCAT12(bVar20,(undefined2)local_20));
        if (iVar7 == 8) {
          lVar14 = 0;
          lVar13 = -4;
          pbVar15 = (byte *)((long)&local_20 + 4);
          bVar9 = bVar18;
          while( true ) {
            iVar12 = 1;
            *pbVar15 = bVar9 ^ *pbVar15;
            pbVar8 = pbVar15;
            do {
              pbVar8 = pbVar8 + 1;
              iVar12 = iVar12 + 1;
              *pbVar8 = pbVar8[lVar14 + lVar13] ^ *pbVar8;
              uVar23 = local_10;
            } while (iVar12 != 4);
            lVar13 = lVar13 + -4;
            if (lVar14 == 8) break;
            bVar9 = *pbVar15;
            lVar14 = lVar14 + 4;
            pbVar15 = pbVar15 + 4;
          }
          lVar14 = 0x10;
          lVar13 = -0x14;
          bVar9 = (&DAT_71009c60a8)[(int)(uint)uStack_18._4_1_] ^ (byte)local_10;
          local_10._1_1_ = (&DAT_71009c60a8)[(int)(uint)uStack_18._5_1_] ^ local_10._1_1_;
          local_10._0_2_ = CONCAT11(local_10._1_1_,bVar9);
          local_10._3_1_ = SUB81(uVar23,3);
          local_10._2_1_ = (&DAT_71009c60a8)[(int)(uint)uStack_18._6_1_] ^ local_10._2_1_;
          local_10._3_1_ = (&DAT_71009c60a8)[(int)(uint)uStack_18._7_1_] ^ local_10._3_1_;
          local_10._4_4_ = SUB84(uVar23,4);
          pbVar15 = (byte *)((long)&local_10 + 4);
          while( true ) {
            iVar12 = 1;
            *pbVar15 = bVar9 ^ *pbVar15;
            pbVar8 = pbVar15;
            do {
              pbVar8 = pbVar8 + 1;
              iVar12 = iVar12 + 1;
              *pbVar8 = pbVar8[lVar14 + lVar13] ^ *pbVar8;
            } while (iVar12 != 4);
            lVar13 = lVar13 + -4;
            if (lVar14 == 0x18) break;
            bVar9 = *pbVar15;
            lVar14 = lVar14 + 4;
            pbVar15 = pbVar15 + 4;
          }
        }
        else if (1 < iVar7) {
          lVar14 = 0;
          lVar13 = -4;
          pbVar15 = (byte *)((long)&local_20 + 4);
          bVar9 = bVar18;
          while( true ) {
            iVar12 = 1;
            *pbVar15 = bVar9 ^ *pbVar15;
            pbVar8 = pbVar15;
            do {
              pbVar8 = pbVar8 + 1;
              iVar12 = iVar12 + 1;
              *pbVar8 = pbVar8[lVar14 + lVar13] ^ *pbVar8;
            } while (iVar12 != 4);
            lVar13 = lVar13 + -4;
            if ((ulong)(iVar3 - 8) * 4 - lVar14 == 0) break;
            bVar9 = *pbVar15;
            lVar14 = lVar14 + 4;
            pbVar15 = pbVar15 + 4;
          }
        }
        iVar12 = 0;
        if (0 < iVar7 && iVar16 <= iVar3) {
          do {
            bVar1 = iVar12 < iVar7;
            if (bVar1 && iVar11 < 4) {
              lVar14 = param_1 + ((long)iVar11 + (long)iVar16 * 4) * 4;
              puVar10 = (undefined1 *)((long)&local_20 + (long)iVar12 * 4);
              do {
                iVar12 = iVar12 + 1;
                iVar11 = iVar11 + 1;
                bVar1 = iVar12 < iVar7;
                uVar4 = puVar10[1];
                uVar5 = puVar10[2];
                *(undefined1 *)(lVar14 + 0x18) = *puVar10;
                uVar6 = puVar10[3];
                *(undefined1 *)(lVar14 + 0x19) = uVar4;
                *(undefined1 *)(lVar14 + 0x1a) = uVar5;
                *(undefined1 *)(lVar14 + 0x1b) = uVar6;
                lVar14 = lVar14 + 4;
                puVar10 = puVar10 + 4;
              } while (iVar12 < iVar7 && iVar11 < 4);
            }
            if (iVar11 == 4) {
              iVar16 = iVar16 + 1;
              iVar11 = 0;
            }
          } while (bVar1 && iVar16 <= iVar3);
        }
        if (iVar3 < iVar16) break;
        bVar9 = *pbVar21;
      }
      return;
    }
  }
  else {
    iVar12 = 0;
    if (-1 < iVar3) {
      do {
        if (iVar11 < 4 && iVar12 < iVar7) {
          lVar14 = param_1 + ((long)iVar11 + (long)iVar16 * 4) * 4;
          puVar10 = (undefined1 *)((long)&local_20 + (long)iVar12 * 4);
          do {
            iVar12 = iVar12 + 1;
            iVar11 = iVar11 + 1;
            uVar4 = puVar10[1];
            uVar5 = puVar10[2];
            *(undefined1 *)(lVar14 + 0x18) = *puVar10;
            uVar6 = puVar10[3];
            *(undefined1 *)(lVar14 + 0x19) = uVar4;
            *(undefined1 *)(lVar14 + 0x1a) = uVar5;
            *(undefined1 *)(lVar14 + 0x1b) = uVar6;
            lVar14 = lVar14 + 4;
            puVar10 = puVar10 + 4;
          } while (iVar12 < iVar7 && iVar11 < 4);
        }
        if (iVar11 == 4) {
          iVar16 = iVar16 + 1;
          iVar11 = 0;
        }
        if (iVar7 <= iVar12) goto LAB_7100792c9c;
      } while (iVar16 <= iVar3);
    }
  }
  return;
}



// ===== FUN_7100792fb0 @ 7100792fb0 (size=220) =====

void FUN_7100792fb0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  undefined8 local_10;
  undefined8 uStack_8;
  
  if (1 < *(int *)(param_1 + 4)) {
    iVar7 = 1;
    lVar6 = param_1 + 0x10;
    do {
      iVar5 = 0;
      puVar4 = &local_10;
      do {
        lVar3 = 0;
        lVar2 = (long)iVar5;
        lVar1 = lVar6;
        do {
          *(byte *)((long)puVar4 + lVar3) =
               *(byte *)((ulong)*(byte *)(lVar1 + 0x18) * 4 + 0x7100d1ffe8 + lVar2) ^
               *(byte *)((ulong)*(byte *)(lVar1 + 0x19) * 4 + 0x7100d203e8 + lVar2) ^
               *(byte *)((ulong)*(byte *)(lVar1 + 0x1a) * 4 + 0x7100d207e8 + lVar2) ^
               *(byte *)((ulong)*(byte *)(lVar1 + 0x1b) * 4 + 0x7100d20be8 + lVar2);
          lVar3 = lVar3 + 4;
          lVar1 = lVar1 + 4;
        } while (lVar3 != 0x10);
        iVar5 = iVar5 + 1;
        puVar4 = (undefined8 *)((long)puVar4 + 1);
      } while (iVar5 != 4);
      iVar7 = iVar7 + 1;
      *(undefined8 *)(lVar6 + 0x18) = local_10;
      *(undefined8 *)(lVar6 + 0x20) = uStack_8;
      lVar6 = lVar6 + 0x10;
    } while (iVar7 < *(int *)(param_1 + 4));
    return;
  }
  return;
}



// ===== FUN_7100793090 @ 7100793090 (size=232) =====

void FUN_7100793090(long param_1,char param_2,long param_3,int param_4,long param_5)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  undefined1 local_20 [32];
  
  if (param_4 == 0xc0) {
    uVar2 = 0xc;
    uVar7 = 0x18;
  }
  else if (param_4 == 0x100) {
    uVar2 = 0xe;
    uVar7 = 0x20;
  }
  else {
    uVar2 = 10;
    uVar7 = 0x10;
    if (param_4 != 0x80) goto joined_r0x007100793140;
  }
  uVar4 = 0;
  *(undefined4 *)(param_1 + 4) = uVar2;
  do {
    uVar5 = uVar4 & 0xfffffffc;
    puVar1 = (undefined1 *)(param_3 + uVar4);
    uVar6 = uVar4 & 3;
    uVar4 = uVar4 + 1;
    local_20[uVar6 + uVar5] = *puVar1;
  } while ((uint)uVar4 < uVar7);
joined_r0x007100793140:
  lVar3 = 0;
  if (param_5 == 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    FUN_7100792be0(param_1,local_20);
  }
  else {
    do {
      *(undefined1 *)(param_1 + 8 + lVar3) = *(undefined1 *)(param_5 + lVar3);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x10);
    FUN_7100792be0(param_1,local_20);
  }
  if (param_2 == '\0') {
    FUN_7100792fb0(param_1);
    return;
  }
  return;
}



// ===== FUN_7100793180 @ 7100793180 (size=824) =====

void FUN_7100793180(void)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  undefined1 *puVar22;
  ulong uVar23;
  int iVar24;
  long lVar25;
  
  uVar14 = 99;
  lVar8 = 0;
  while( true ) {
    (&DAT_7100d1dee8)[(int)uVar14] = (char)lVar8;
    if (lVar8 + 1 == 0x100) break;
    uVar14 = (uint)(byte)(&DAT_71009c60a9)[lVar8];
    lVar8 = lVar8 + 1;
  }
  pbVar21 = &DAT_7100d1ebe8;
  pbVar20 = &DAT_7100d1e7e8;
  pbVar19 = &DAT_7100d1e3e8;
  pbVar18 = &DAT_7100d1dfe8;
  puVar17 = &DAT_7100d1fbe8;
  puVar16 = &DAT_7100d1f7e8;
  puVar15 = &DAT_7100d1f3e8;
  uVar14 = 99;
  puVar22 = &DAT_7100d1efe8;
  lVar8 = 0;
  while( true ) {
    bVar3 = (&DAT_7100d1dee8)[lVar8];
    uVar9 = (ulong)bVar3;
    bVar6 = (byte)uVar14;
    bVar1 = (byte)(uVar14 << 1) ^ 0x1b;
    bVar7 = (byte)((uVar14 & 0x7f) << 1);
    *pbVar21 = bVar6;
    iVar24 = 4;
    bVar4 = bVar7;
    if ((char)bVar6 < '\0') {
      bVar4 = bVar1;
    }
    if ((char)bVar6 >= '\0') {
      bVar1 = bVar7;
    }
    bVar4 = bVar4 ^ bVar6;
    uVar23 = 0xb;
    *pbVar20 = bVar6;
    *pbVar19 = bVar4;
    *pbVar18 = bVar1;
    pbVar21[1] = bVar6;
    pbVar18[1] = bVar6;
    pbVar20[1] = bVar4;
    pbVar19[1] = bVar1;
    pbVar19[2] = bVar6;
    pbVar18[2] = bVar6;
    pbVar21[2] = bVar4;
    pbVar20[2] = bVar1;
    pbVar20[3] = bVar6;
    pbVar19[3] = bVar6;
    pbVar18[3] = bVar4;
    pbVar21[3] = bVar1;
    uVar11 = uVar9;
    uVar14 = 0;
    do {
      uVar10 = (uint)uVar11;
      uVar13 = uVar10 ^ uVar14;
      if ((uVar23 & 1) == 0) {
        uVar13 = uVar14;
      }
      uVar23 = uVar23 >> 1;
      uVar14 = (uVar10 & 0x7f) << 1;
      if ((uVar11 & 0x80) != 0) {
        uVar14 = (uVar10 << 1 ^ 0x1b) & 0xff;
      }
      uVar11 = (ulong)uVar14;
      iVar24 = iVar24 + -1;
      uVar14 = uVar13;
    } while (iVar24 != 0);
    lVar12 = uVar9 * 4;
    uVar5 = (undefined1)uVar13;
    *puVar15 = uVar5;
    puVar16[1] = uVar5;
    uVar14 = (uint)bVar3;
    lVar25 = (long)(int)uVar14;
    *(undefined1 *)(lVar12 + 0x7100d203e8) = uVar5;
    iVar24 = 4;
    *(undefined1 *)(lVar12 + 0x7100d207e9) = uVar5;
    uVar23 = 9;
    puVar17[2] = uVar5;
    *(undefined1 *)(lVar12 + 0x7100d20bea) = uVar5;
    puVar22[3] = uVar5;
    *(undefined1 *)(lVar12 + 0x7100d1ffeb) = uVar5;
    uVar13 = 0;
    do {
      uVar10 = uVar14 << 1;
      uVar2 = uVar14 ^ uVar13;
      if ((uVar23 & 1) == 0) {
        uVar2 = uVar13;
      }
      uVar13 = uVar14 & 0x80;
      uVar23 = uVar23 >> 1;
      uVar14 = (uVar14 & 0x7f) << 1;
      if (uVar13 != 0) {
        uVar14 = (uVar10 ^ 0x1b) & 0xff;
      }
      iVar24 = iVar24 + -1;
      uVar13 = uVar2;
    } while (iVar24 != 0);
    lVar12 = lVar25 * 4;
    uVar5 = (undefined1)uVar2;
    *puVar17 = uVar5;
    puVar22[1] = uVar5;
    iVar24 = 4;
    *(undefined1 *)(lVar12 + 0x7100d20be8) = uVar5;
    uVar23 = 0xd;
    puVar15[2] = uVar5;
    *(undefined1 *)(lVar12 + 0x7100d1ffe9) = uVar5;
    *(undefined1 *)(lVar12 + 0x7100d203ea) = uVar5;
    puVar16[3] = uVar5;
    *(undefined1 *)(lVar12 + 0x7100d207eb) = uVar5;
    uVar11 = uVar9;
    uVar14 = 0;
    do {
      uVar10 = (uint)uVar11;
      uVar13 = uVar10 ^ uVar14;
      if ((uVar23 & 1) == 0) {
        uVar13 = uVar14;
      }
      uVar23 = uVar23 >> 1;
      uVar14 = (uVar10 & 0x7f) << 1;
      if ((uVar11 & 0x80) != 0) {
        uVar14 = (uVar10 << 1 ^ 0x1b) & 0xff;
      }
      uVar11 = (ulong)uVar14;
      iVar24 = iVar24 + -1;
      uVar14 = uVar13;
    } while (iVar24 != 0);
    lVar25 = lVar25 * 4;
    iVar24 = 4;
    uVar5 = (undefined1)uVar13;
    *puVar16 = uVar5;
    puVar17[1] = uVar5;
    uVar14 = 0xe;
    *(undefined1 *)(lVar25 + 0x7100d207e8) = uVar5;
    *(undefined1 *)(lVar25 + 0x7100d20be9) = uVar5;
    puVar22[2] = uVar5;
    *(undefined1 *)(lVar25 + 0x7100d1ffea) = uVar5;
    puVar15[3] = uVar5;
    *(undefined1 *)(lVar25 + 0x7100d203eb) = uVar5;
    uVar23 = uVar9;
    uVar13 = 0;
    while( true ) {
      uVar10 = uVar13;
      uVar14 = uVar14 >> 1;
      uVar13 = ((uint)uVar23 & 0x7f) << 1;
      if ((uVar23 & 0x80) != 0) {
        uVar13 = ((uint)uVar23 << 1 ^ 0x1b) & 0xff;
      }
      uVar23 = (ulong)uVar13;
      iVar24 = iVar24 + -1;
      if (iVar24 == 0) break;
      uVar13 = uVar10 ^ uVar13;
      if ((uVar14 & 1) == 0) {
        uVar13 = uVar10;
      }
    }
    lVar12 = uVar9 * 4;
    uVar5 = (undefined1)uVar10;
    puVar15[1] = uVar5;
    puVar16[2] = uVar5;
    *(undefined1 *)(lVar12 + 0x7100d1ffe8) = uVar5;
    *(undefined1 *)(lVar12 + 0x7100d207ea) = uVar5;
    pbVar21 = pbVar21 + 4;
    pbVar20 = pbVar20 + 4;
    *(undefined1 *)(lVar12 + 0x7100d203e9) = uVar5;
    pbVar19 = pbVar19 + 4;
    pbVar18 = pbVar18 + 4;
    puVar17[3] = uVar5;
    puVar16 = puVar16 + 4;
    puVar17 = puVar17 + 4;
    *(undefined1 *)(lVar12 + 0x7100d20beb) = uVar5;
    puVar15 = puVar15 + 4;
    *puVar22 = uVar5;
    if (lVar8 + 1 == 0x100) break;
    uVar14 = (uint)(byte)(&DAT_71009c60a9)[lVar8];
    puVar22 = puVar22 + 4;
    lVar8 = lVar8 + 1;
  }
  return;
}



// ===== FUN_71007934c0 @ 71007934c0 (size=72) =====

void FUN_71007934c0(undefined1 *param_1)

{
  if (DAT_7100d1dee8 != '\0') {
    *param_1 = 1;
    return;
  }
  FUN_7100793180();
  *param_1 = 1;
  return;
}



// ===== FUN_7100793510 @ 7100793510 (size=4140) =====

void FUN_7100793510(uint *param_1,uint *param_2,uint *param_3,char param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  
  if (param_4 == '\0') {
    uVar26 = *(undefined8 *)param_3;
    uVar28 = *(undefined8 *)(param_3 + 6);
    uVar27 = *(undefined8 *)(param_3 + 4);
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)param_2 = uVar26;
    *(undefined8 *)(param_2 + 6) = uVar28;
    *(undefined8 *)(param_2 + 4) = uVar27;
    uVar26 = *(undefined8 *)(param_3 + 8);
    uVar28 = *(undefined8 *)(param_3 + 0xe);
    uVar27 = *(undefined8 *)(param_3 + 0xc);
    *(undefined8 *)(param_2 + 10) = *(undefined8 *)(param_3 + 10);
    *(undefined8 *)(param_2 + 8) = uVar26;
    *(undefined8 *)(param_2 + 0xe) = uVar28;
    *(undefined8 *)(param_2 + 0xc) = uVar27;
    param_3 = param_2;
  }
  uVar1 = param_1[2];
  uVar3 = param_1[3];
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar9 = uVar4 >> 2 | uVar4 << 0x1e;
  uVar10 = uVar2 >> 2 | uVar2 << 0x1e;
  uVar5 = (*param_3 & 0xff00ff00) >> 8 | (*param_3 & 0xff00ff) << 8;
  uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
  uVar6 = (param_3[1] & 0xff00ff00) >> 8 | (param_3[1] & 0xff00ff) << 8;
  uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
  uVar4 = uVar5 + ((uVar1 ^ uVar3) & uVar4 ^ uVar3) + (uVar2 >> 0x1b | uVar2 << 5) +
                  param_1[4] + 0x5a827999;
  uVar11 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar2 = (uVar4 >> 0x1b | uVar4 * 0x20) +
          ((uVar1 ^ uVar9) & uVar2 ^ uVar1) + uVar6 + uVar3 + 0x5a827999;
  uVar3 = (param_3[2] & 0xff00ff00) >> 8 | (param_3[2] & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar7 = (param_3[3] & 0xff00ff00) >> 8 | (param_3[3] & 0xff00ff) << 8;
  uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar12 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar4 = (uVar2 >> 0x1b | uVar2 * 0x20) +
          ((uVar9 ^ uVar10) & uVar4 ^ uVar9) + uVar3 + uVar1 + 0x5a827999;
  uVar13 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar2 = (uVar4 >> 0x1b | uVar4 * 0x20) +
          ((uVar10 ^ uVar11) & uVar2 ^ uVar10) + uVar7 + uVar9 + 0x5a827999;
  uVar1 = (param_3[4] & 0xff00ff00) >> 8 | (param_3[4] & 0xff00ff) << 8;
  uVar9 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_3[5] & 0xff00ff00) >> 8 | (param_3[5] & 0xff00ff) << 8;
  uVar8 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar14 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar4 = (uVar2 >> 0x1b | uVar2 * 0x20) +
          ((uVar11 ^ uVar12) & uVar4 ^ uVar11) + uVar9 + uVar10 + 0x5a827999;
  uVar15 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar2 = (uVar4 >> 0x1b | uVar4 * 0x20) +
          ((uVar12 ^ uVar13) & uVar2 ^ uVar12) + uVar11 + uVar8 + 0x5a827999;
  uVar1 = (param_3[6] & 0xff00ff00) >> 8 | (param_3[6] & 0xff00ff) << 8;
  uVar10 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_3[7] & 0xff00ff00) >> 8 | (param_3[7] & 0xff00ff) << 8;
  uVar11 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar16 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar4 = (uVar2 >> 0x1b | uVar2 * 0x20) +
          ((uVar13 ^ uVar14) & uVar4 ^ uVar13) + uVar12 + uVar10 + 0x5a827999;
  uVar17 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar1 = (param_3[8] & 0xff00ff00) >> 8 | (param_3[8] & 0xff00ff) << 8;
  uVar12 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar2 = (uVar4 >> 0x1b | uVar4 * 0x20) +
          ((uVar14 ^ uVar15) & uVar2 ^ uVar14) + uVar13 + uVar11 + 0x5a827999;
  uVar1 = (param_3[9] & 0xff00ff00) >> 8 | (param_3[9] & 0xff00ff) << 8;
  uVar13 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar18 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar4 = (uVar2 >> 0x1b | uVar2 * 0x20) +
          ((uVar15 ^ uVar16) & uVar4 ^ uVar15) + uVar14 + uVar12 + 0x5a827999;
  uVar19 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar1 = (param_3[10] & 0xff00ff00) >> 8 | (param_3[10] & 0xff00ff) << 8;
  uVar14 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar2 = (uVar4 >> 0x1b | uVar4 * 0x20) +
          ((uVar16 ^ uVar17) & uVar2 ^ uVar16) + uVar15 + uVar13 + 0x5a827999;
  uVar1 = (param_3[0xb] & 0xff00ff00) >> 8 | (param_3[0xb] & 0xff00ff) << 8;
  uVar15 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar20 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar4 = (uVar2 >> 0x1b | uVar2 * 0x20) +
          ((uVar17 ^ uVar18) & uVar4 ^ uVar17) + uVar16 + uVar14 + 0x5a827999;
  uVar21 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar1 = (param_3[0xc] & 0xff00ff00) >> 8 | (param_3[0xc] & 0xff00ff) << 8;
  uVar16 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar2 = (uVar4 >> 0x1b | uVar4 * 0x20) +
          ((uVar18 ^ uVar19) & uVar2 ^ uVar18) + uVar17 + uVar15 + 0x5a827999;
  uVar1 = (param_3[0xd] & 0xff00ff00) >> 8 | (param_3[0xd] & 0xff00ff) << 8;
  uVar17 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar22 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar4 = (uVar2 >> 0x1b | uVar2 * 0x20) +
          ((uVar19 ^ uVar20) & uVar4 ^ uVar19) + uVar18 + uVar16 + 0x5a827999;
  uVar23 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar1 = (param_3[0xe] & 0xff00ff00) >> 8 | (param_3[0xe] & 0xff00ff) << 8;
  uVar18 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar2 = (uVar4 >> 0x1b | uVar4 * 0x20) +
          ((uVar20 ^ uVar21) & uVar2 ^ uVar20) + uVar19 + uVar17 + 0x5a827999;
  uVar1 = (param_3[0xf] & 0xff00ff00) >> 8 | (param_3[0xf] & 0xff00ff) << 8;
  uVar19 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar4 = (uVar2 >> 0x1b | uVar2 * 0x20) +
          ((uVar21 ^ uVar22) & uVar4 ^ uVar21) + uVar20 + uVar18 + 0x5a827999;
  uVar20 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar2 = (uVar4 >> 0x1b | uVar4 * 0x20) +
          ((uVar22 ^ uVar23) & uVar2 ^ uVar22) + uVar21 + uVar19 + 0x5a827999;
  uVar1 = uVar17 ^ uVar12 ^ uVar3 ^ uVar5;
  uVar5 = uVar1 >> 0x1f | uVar1 << 1;
  uVar21 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar1 = uVar18 ^ uVar13 ^ uVar7 ^ uVar6;
  uVar6 = uVar1 >> 0x1f | uVar1 << 1;
  uVar24 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar4 = (uVar2 >> 0x1b | uVar2 * 0x20) +
          ((uVar23 ^ uVar20) & uVar4 ^ uVar23) + uVar22 + uVar5 + 0x5a827999;
  uVar1 = uVar19 ^ uVar14 ^ uVar9 ^ uVar3;
  uVar2 = (uVar4 >> 0x1b | uVar4 * 0x20) +
          ((uVar20 ^ uVar21) & uVar2 ^ uVar20) + uVar23 + uVar6 + 0x5a827999;
  uVar3 = uVar1 >> 0x1f | uVar1 << 1;
  uVar22 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar4 = (uVar2 >> 0x1b | uVar2 * 0x20) +
          ((uVar21 ^ uVar24) & uVar4 ^ uVar21) + uVar20 + uVar3 + 0x5a827999;
  uVar1 = uVar5 ^ uVar15 ^ uVar8 ^ uVar7;
  uVar7 = uVar1 >> 0x1f | uVar1 << 1;
  uVar20 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar1 = uVar6 ^ uVar16 ^ uVar10 ^ uVar9;
  uVar9 = uVar1 >> 0x1f | uVar1 << 1;
  uVar23 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar2 = (uVar4 >> 0x1b | uVar4 * 0x20) +
          ((uVar24 ^ uVar22) & uVar2 ^ uVar24) + uVar21 + uVar7 + 0x5a827999;
  uVar1 = uVar3 ^ uVar17 ^ uVar11 ^ uVar8;
  uVar8 = uVar1 >> 0x1f | uVar1 << 1;
  uVar21 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar4 = (uVar2 >> 0x1b | uVar2 * 0x20) + (uVar22 ^ uVar20 ^ uVar4) + uVar24 + uVar9 + 0x6ed9eba1;
  uVar1 = uVar7 ^ uVar18 ^ uVar12 ^ uVar10;
  uVar10 = uVar1 >> 0x1f | uVar1 << 1;
  uVar24 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar2 = (uVar4 >> 0x1b | uVar4 * 0x20) + (uVar20 ^ uVar23 ^ uVar2) + uVar22 + uVar8 + 0x6ed9eba1;
  uVar1 = uVar9 ^ uVar19 ^ uVar13 ^ uVar11;
  uVar11 = uVar1 >> 0x1f | uVar1 << 1;
  uVar22 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar4 = (uVar2 >> 0x1b | uVar2 * 0x20) + (uVar23 ^ uVar21 ^ uVar4) + uVar20 + uVar10 + 0x6ed9eba1;
  uVar1 = uVar5 ^ uVar8 ^ uVar14 ^ uVar12;
  uVar12 = uVar1 >> 0x1f | uVar1 << 1;
  uVar20 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar2 = (uVar4 >> 0x1b | uVar4 * 0x20) + (uVar21 ^ uVar24 ^ uVar2) + uVar23 + uVar11 + 0x6ed9eba1;
  uVar1 = uVar6 ^ uVar10 ^ uVar15 ^ uVar13;
  uVar13 = uVar1 >> 0x1f | uVar1 << 1;
  uVar23 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar4 = (uVar2 >> 0x1b | uVar2 * 0x20) + (uVar24 ^ uVar22 ^ uVar4) + uVar21 + uVar12 + 0x6ed9eba1;
  uVar1 = uVar3 ^ uVar11 ^ uVar16 ^ uVar14;
  uVar14 = uVar1 >> 0x1f | uVar1 << 1;
  uVar21 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar2 = (uVar4 >> 0x1b | uVar4 * 0x20) + (uVar22 ^ uVar20 ^ uVar2) + uVar24 + uVar13 + 0x6ed9eba1;
  uVar1 = uVar7 ^ uVar12 ^ uVar17 ^ uVar15;
  uVar15 = uVar1 >> 0x1f | uVar1 << 1;
  uVar24 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar4 = (uVar2 >> 0x1b | uVar2 * 0x20) + (uVar20 ^ uVar23 ^ uVar4) + uVar22 + uVar14 + 0x6ed9eba1;
  uVar1 = uVar9 ^ uVar13 ^ uVar18 ^ uVar16;
  uVar16 = uVar1 >> 0x1f | uVar1 << 1;
  uVar22 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar2 = (uVar4 >> 0x1b | uVar4 * 0x20) + (uVar23 ^ uVar21 ^ uVar2) + uVar20 + uVar15 + 0x6ed9eba1;
  uVar1 = uVar8 ^ uVar14 ^ uVar17 ^ uVar19;
  uVar17 = uVar1 >> 0x1f | uVar1 << 1;
  uVar20 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar4 = (uVar2 >> 0x1b | uVar2 * 0x20) + (uVar21 ^ uVar24 ^ uVar4) + uVar23 + uVar16 + 0x6ed9eba1;
  uVar1 = uVar10 ^ uVar15 ^ uVar5 ^ uVar18;
  uVar18 = uVar1 >> 0x1f | uVar1 << 1;
  uVar23 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar2 = (uVar4 >> 0x1b | uVar4 * 0x20) + (uVar24 ^ uVar22 ^ uVar2) + uVar21 + uVar17 + 0x6ed9eba1;
  uVar1 = uVar11 ^ uVar16 ^ uVar6 ^ uVar19;
  uVar19 = uVar1 >> 0x1f | uVar1 << 1;
  uVar21 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar4 = (uVar2 >> 0x1b | uVar2 * 0x20) + (uVar22 ^ uVar20 ^ uVar4) + uVar24 + uVar18 + 0x6ed9eba1;
  uVar1 = uVar12 ^ uVar17 ^ uVar5 ^ uVar3;
  uVar24 = uVar1 >> 0x1f | uVar1 << 1;
  uVar5 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar2 = (uVar4 >> 0x1b | uVar4 * 0x20) + (uVar20 ^ uVar23 ^ uVar2) + uVar22 + uVar19 + 0x6ed9eba1;
  uVar1 = uVar13 ^ uVar18 ^ uVar6 ^ uVar7;
  uVar6 = uVar1 >> 0x1f | uVar1 << 1;
  uVar22 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar4 = (uVar2 >> 0x1b | uVar2 * 0x20) + (uVar23 ^ uVar21 ^ uVar4) + uVar20 + uVar24 + 0x6ed9eba1;
  uVar1 = uVar14 ^ uVar19 ^ uVar3 ^ uVar9;
  uVar20 = uVar1 >> 0x1f | uVar1 << 1;
  uVar25 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar2 = (uVar4 >> 0x1b | uVar4 * 0x20) + (uVar21 ^ uVar5 ^ uVar2) + uVar23 + uVar6 + 0x6ed9eba1;
  uVar1 = uVar15 ^ uVar24 ^ uVar7 ^ uVar8;
  uVar7 = uVar1 >> 0x1f | uVar1 << 1;
  uVar23 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar4 = (uVar2 >> 0x1b | uVar2 * 0x20) + (uVar5 ^ uVar22 ^ uVar4) + uVar21 + uVar20 + 0x6ed9eba1;
  uVar1 = uVar16 ^ uVar6 ^ uVar9 ^ uVar10;
  uVar9 = uVar1 >> 0x1f | uVar1 << 1;
  uVar21 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar2 = (uVar4 >> 0x1b | uVar4 * 0x20) + (uVar22 ^ uVar25 ^ uVar2) + uVar5 + uVar7 + 0x6ed9eba1;
  uVar1 = uVar17 ^ uVar20 ^ uVar8 ^ uVar11;
  uVar8 = uVar1 >> 0x1f | uVar1 << 1;
  uVar1 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar4 = (uVar2 >> 0x1b | uVar2 * 0x20) + (uVar25 ^ uVar23 ^ uVar4) + uVar22 + uVar9 + 0x6ed9eba1;
  uVar3 = uVar18 ^ uVar7 ^ uVar10 ^ uVar12;
  uVar10 = uVar3 >> 0x1f | uVar3 << 1;
  uVar22 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar2 = (uVar4 >> 0x1b | uVar4 * 0x20) + (uVar23 ^ uVar21 ^ uVar2) + uVar25 + uVar8 + 0x6ed9eba1;
  uVar3 = uVar19 ^ uVar9 ^ uVar11 ^ uVar13;
  uVar11 = uVar3 >> 0x1f | uVar3 << 1;
  uVar4 = (uVar2 >> 0x1b | uVar2 * 0x20) + (uVar21 ^ uVar1 ^ uVar4) + uVar23 + uVar10 + 0x6ed9eba1;
  uVar3 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar5 = uVar24 ^ uVar8 ^ uVar12 ^ uVar14;
  uVar2 = (uVar4 >> 0x1b | uVar4 * 0x20) + (uVar1 ^ uVar22 ^ uVar2) + uVar21 + uVar11 + 0x6ed9eba1;
  uVar12 = uVar5 >> 0x1f | uVar5 << 1;
  uVar21 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar5 = uVar6 ^ uVar10 ^ uVar13 ^ uVar15;
  uVar13 = uVar5 >> 0x1f | uVar5 << 1;
  uVar1 = ((uVar4 | uVar3) & uVar22 | uVar4 & uVar3) + (uVar2 >> 0x1b | uVar2 * 0x20) +
          uVar12 + 0x8f1bbcdc + uVar1;
  uVar5 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar4 = (uVar1 >> 0x1b | uVar1 * 0x20) +
          ((uVar2 | uVar21) & uVar3 | uVar2 & uVar21) + uVar22 + uVar13 + 0x8f1bbcdc;
  uVar2 = uVar20 ^ uVar11 ^ uVar14 ^ uVar16;
  uVar14 = uVar2 >> 0x1f | uVar2 << 1;
  uVar22 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar2 = uVar7 ^ uVar12 ^ uVar15 ^ uVar17;
  uVar15 = uVar2 >> 0x1f | uVar2 << 1;
  uVar2 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar3 = ((uVar1 | uVar5) & uVar21 | uVar1 & uVar5) + (uVar4 >> 0x1b | uVar4 * 0x20) +
          uVar14 + 0x8f1bbcdc + uVar3;
  uVar4 = (uVar3 >> 0x1b | uVar3 * 0x20) +
          ((uVar4 | uVar22) & uVar5 | uVar4 & uVar22) + uVar21 + uVar15 + 0x8f1bbcdc;
  uVar1 = uVar9 ^ uVar13 ^ uVar16 ^ uVar18;
  uVar16 = uVar1 >> 0x1f | uVar1 << 1;
  uVar21 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar1 = uVar8 ^ uVar14 ^ uVar17 ^ uVar19;
  uVar17 = uVar1 >> 0x1f | uVar1 << 1;
  uVar5 = ((uVar3 | uVar2) & uVar22 | uVar3 & uVar2) + (uVar4 >> 0x1b | uVar4 * 0x20) +
          uVar16 + 0x8f1bbcdc + uVar5;
  uVar1 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar3 = uVar10 ^ uVar15 ^ uVar18 ^ uVar24;
  uVar4 = (uVar5 >> 0x1b | uVar5 * 0x20) +
          ((uVar4 | uVar21) & uVar2 | uVar4 & uVar21) + uVar22 + uVar17 + 0x8f1bbcdc;
  uVar18 = uVar3 >> 0x1f | uVar3 << 1;
  uVar22 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar3 = uVar11 ^ uVar16 ^ uVar19 ^ uVar6;
  uVar19 = uVar3 >> 0x1f | uVar3 << 1;
  uVar2 = ((uVar5 | uVar1) & uVar21 | uVar5 & uVar1) + (uVar4 >> 0x1b | uVar4 * 0x20) +
          uVar18 + 0x8f1bbcdc + uVar2;
  uVar3 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar4 = (uVar2 >> 0x1b | uVar2 * 0x20) +
          ((uVar4 | uVar22) & uVar1 | uVar4 & uVar22) + uVar21 + uVar19 + 0x8f1bbcdc;
  uVar5 = uVar12 ^ uVar17 ^ uVar24 ^ uVar20;
  uVar21 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar23 = uVar5 >> 0x1f | uVar5 << 1;
  uVar5 = uVar13 ^ uVar18 ^ uVar6 ^ uVar7;
  uVar6 = uVar5 >> 0x1f | uVar5 << 1;
  uVar1 = ((uVar2 | uVar3) & uVar22 | uVar2 & uVar3) + (uVar4 >> 0x1b | uVar4 * 0x20) +
          uVar23 + 0x8f1bbcdc + uVar1;
  uVar2 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar4 = (uVar1 >> 0x1b | uVar1 * 0x20) +
          ((uVar4 | uVar21) & uVar3 | uVar4 & uVar21) + uVar22 + uVar6 + 0x8f1bbcdc;
  uVar5 = uVar14 ^ uVar19 ^ uVar20 ^ uVar9;
  uVar20 = uVar5 >> 0x1f | uVar5 << 1;
  uVar22 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar5 = uVar15 ^ uVar23 ^ uVar7 ^ uVar8;
  uVar7 = uVar5 >> 0x1f | uVar5 << 1;
  uVar3 = ((uVar1 | uVar2) & uVar21 | uVar1 & uVar2) + (uVar4 >> 0x1b | uVar4 * 0x20) +
          uVar20 + 0x8f1bbcdc + uVar3;
  uVar1 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar4 = (uVar3 >> 0x1b | uVar3 * 0x20) +
          ((uVar4 | uVar22) & uVar2 | uVar4 & uVar22) + uVar21 + uVar7 + 0x8f1bbcdc;
  uVar5 = uVar16 ^ uVar6 ^ uVar9 ^ uVar10;
  uVar9 = uVar5 >> 0x1f | uVar5 << 1;
  uVar21 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar5 = uVar17 ^ uVar20 ^ uVar8 ^ uVar11;
  uVar8 = uVar5 >> 0x1f | uVar5 << 1;
  uVar5 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar2 = ((uVar3 | uVar1) & uVar22 | uVar3 & uVar1) + (uVar4 >> 0x1b | uVar4 * 0x20) +
          uVar9 + 0x8f1bbcdc + uVar2;
  uVar4 = (uVar2 >> 0x1b | uVar2 * 0x20) +
          ((uVar4 | uVar21) & uVar1 | uVar4 & uVar21) + uVar22 + uVar8 + 0x8f1bbcdc;
  uVar3 = uVar18 ^ uVar7 ^ uVar10 ^ uVar12;
  uVar10 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar22 = uVar3 >> 0x1f | uVar3 << 1;
  uVar3 = uVar19 ^ uVar9 ^ uVar11 ^ uVar13;
  uVar11 = uVar3 >> 0x1f | uVar3 << 1;
  uVar1 = ((uVar2 | uVar5) & uVar21 | uVar2 & uVar5) + (uVar4 >> 0x1b | uVar4 * 0x20) +
          uVar22 + 0x8f1bbcdc + uVar1;
  uVar2 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar4 = (uVar1 >> 0x1b | uVar1 * 0x20) +
          ((uVar4 | uVar10) & uVar5 | uVar4 & uVar10) + uVar21 + uVar11 + 0x8f1bbcdc;
  uVar3 = uVar23 ^ uVar8 ^ uVar12 ^ uVar14;
  uVar12 = uVar3 >> 0x1f | uVar3 << 1;
  uVar21 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar3 = uVar6 ^ uVar22 ^ uVar13 ^ uVar15;
  uVar3 = uVar3 >> 0x1f | uVar3 << 1;
  uVar5 = ((uVar1 | uVar2) & uVar10 | uVar1 & uVar2) + (uVar4 >> 0x1b | uVar4 * 0x20) +
          uVar12 + 0x8f1bbcdc + uVar5;
  uVar13 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar4 = (uVar5 >> 0x1b | uVar5 * 0x20) +
          ((uVar4 | uVar21) & uVar2 | uVar4 & uVar21) + uVar10 + uVar3 + 0x8f1bbcdc;
  uVar1 = uVar20 ^ uVar11 ^ uVar14 ^ uVar16;
  uVar10 = uVar1 >> 0x1f | uVar1 << 1;
  uVar14 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar2 = ((uVar5 | uVar13) & uVar21 | uVar5 & uVar13) + (uVar4 >> 0x1b | uVar4 * 0x20) +
          uVar10 + 0x8f1bbcdc + uVar2;
  uVar1 = uVar7 ^ uVar12 ^ uVar15 ^ uVar17;
  uVar5 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar15 = uVar1 >> 0x1f | uVar1 << 1;
  uVar1 = uVar9 ^ uVar3 ^ uVar16 ^ uVar18;
  uVar16 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar24 = uVar1 >> 0x1f | uVar1 << 1;
  uVar4 = (uVar2 >> 0x1b | uVar2 * 0x20) +
          ((uVar4 | uVar14) & uVar13 | uVar4 & uVar14) + uVar21 + uVar15 + 0x8f1bbcdc;
  uVar1 = uVar8 ^ uVar10 ^ uVar17 ^ uVar19;
  uVar17 = uVar1 >> 0x1f | uVar1 << 1;
  uVar21 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar2 = (uVar4 >> 0x1b | uVar4 * 0x20) + (uVar14 ^ uVar5 ^ uVar2) + uVar13 + uVar24 + 0xca62c1d6;
  uVar1 = uVar22 ^ uVar15 ^ uVar18 ^ uVar23;
  uVar13 = uVar1 >> 0x1f | uVar1 << 1;
  uVar18 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar4 = (uVar2 >> 0x1b | uVar2 * 0x20) + (uVar5 ^ uVar16 ^ uVar4) + uVar14 + uVar17 + 0xca62c1d6;
  uVar1 = uVar11 ^ uVar24 ^ uVar19 ^ uVar6;
  uVar14 = uVar1 >> 0x1f | uVar1 << 1;
  uVar19 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar2 = (uVar4 >> 0x1b | uVar4 * 0x20) + (uVar16 ^ uVar21 ^ uVar2) + uVar5 + uVar13 + 0xca62c1d6;
  uVar1 = uVar12 ^ uVar17 ^ uVar23 ^ uVar20;
  uVar5 = uVar1 >> 0x1f | uVar1 << 1;
  uVar23 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar4 = (uVar2 >> 0x1b | uVar2 * 0x20) + (uVar21 ^ uVar18 ^ uVar4) + uVar16 + uVar14 + 0xca62c1d6;
  uVar1 = uVar3 ^ uVar13 ^ uVar6 ^ uVar7;
  uVar6 = uVar1 >> 0x1f | uVar1 << 1;
  *param_3 = uVar5;
  param_3[1] = uVar6;
  uVar16 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar2 = (uVar4 >> 0x1b | uVar4 * 0x20) + (uVar18 ^ uVar19 ^ uVar2) + uVar21 + uVar5 + 0xca62c1d6;
  uVar1 = uVar10 ^ uVar14 ^ uVar20 ^ uVar9;
  uVar20 = uVar1 >> 0x1f | uVar1 << 1;
  uVar21 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar4 = (uVar2 >> 0x1b | uVar2 * 0x20) + (uVar19 ^ uVar23 ^ uVar4) + uVar18 + uVar6 + 0xca62c1d6;
  uVar1 = uVar15 ^ uVar5 ^ uVar7 ^ uVar8;
  uVar7 = uVar1 >> 0x1f | uVar1 << 1;
  param_3[2] = uVar20;
  param_3[3] = uVar7;
  uVar18 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar2 = (uVar4 >> 0x1b | uVar4 * 0x20) + (uVar23 ^ uVar16 ^ uVar2) + uVar19 + uVar20 + 0xca62c1d6;
  uVar1 = uVar9 ^ uVar22 ^ uVar24 ^ uVar6;
  uVar9 = uVar1 >> 0x1f | uVar1 << 1;
  uVar19 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar4 = (uVar2 >> 0x1b | uVar2 * 0x20) + (uVar16 ^ uVar21 ^ uVar4) + uVar23 + uVar7 + 0xca62c1d6;
  uVar1 = uVar17 ^ uVar20 ^ uVar8 ^ uVar11;
  uVar8 = uVar1 >> 0x1f | uVar1 << 1;
  param_3[4] = uVar9;
  param_3[5] = uVar8;
  uVar23 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar2 = (uVar4 >> 0x1b | uVar4 * 0x20) + (uVar21 ^ uVar18 ^ uVar2) + uVar16 + uVar9 + 0xca62c1d6;
  uVar1 = uVar22 ^ uVar12 ^ uVar13 ^ uVar7;
  uVar16 = uVar1 >> 0x1f | uVar1 << 1;
  uVar22 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar4 = (uVar2 >> 0x1b | uVar2 * 0x20) + (uVar18 ^ uVar19 ^ uVar4) + uVar21 + uVar8 + 0xca62c1d6;
  uVar1 = uVar11 ^ uVar3 ^ uVar14 ^ uVar9;
  uVar11 = uVar1 >> 0x1f | uVar1 << 1;
  param_3[6] = uVar16;
  param_3[7] = uVar11;
  uVar21 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar2 = (uVar4 >> 0x1b | uVar4 * 0x20) + (uVar19 ^ uVar23 ^ uVar2) + uVar18 + uVar16 + 0xca62c1d6;
  uVar1 = uVar5 ^ uVar8 ^ uVar12 ^ uVar10;
  uVar12 = uVar1 >> 0x1f | uVar1 << 1;
  uVar18 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar4 = (uVar2 >> 0x1b | uVar2 * 0x20) + (uVar23 ^ uVar22 ^ uVar4) + uVar19 + uVar11 + 0xca62c1d6;
  uVar1 = uVar3 ^ uVar15 ^ uVar6 ^ uVar16;
  uVar19 = uVar1 >> 0x1f | uVar1 << 1;
  uVar25 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar2 = (uVar4 >> 0x1b | uVar4 * 0x20) + (uVar22 ^ uVar21 ^ uVar2) + uVar23 + uVar12 + 0xca62c1d6;
  param_3[8] = uVar12;
  param_3[9] = uVar19;
  uVar23 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar1 = uVar10 ^ uVar24 ^ uVar20 ^ uVar11;
  uVar3 = uVar15 ^ uVar17 ^ uVar7 ^ uVar12;
  uVar7 = uVar1 >> 0x1f | uVar1 << 1;
  uVar1 = uVar9 ^ uVar19 ^ uVar24 ^ uVar13;
  uVar4 = (uVar2 >> 0x1b | uVar2 * 0x20) + (uVar21 ^ uVar18 ^ uVar4) + uVar22 + uVar19 + 0xca62c1d6;
  uVar9 = uVar3 >> 0x1f | uVar3 << 1;
  uVar10 = uVar4 >> 2 | uVar4 * 0x40000000;
  param_3[10] = uVar7;
  param_3[0xb] = uVar9;
  uVar12 = uVar1 >> 0x1f | uVar1 << 1;
  uVar1 = uVar17 ^ uVar14 ^ uVar8 ^ uVar7;
  uVar2 = (uVar4 >> 0x1b | uVar4 * 0x20) + (uVar18 ^ uVar25 ^ uVar2) + uVar21 + uVar7 + 0xca62c1d6;
  uVar7 = uVar1 >> 0x1f | uVar1 << 1;
  uVar1 = uVar13 ^ uVar5 ^ uVar16 ^ uVar9;
  uVar3 = uVar14 ^ uVar6 ^ uVar11 ^ uVar12;
  param_3[0xc] = uVar12;
  param_3[0xd] = uVar7;
  uVar5 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar1 = uVar1 >> 0x1f | uVar1 << 1;
  uVar3 = uVar3 >> 0x1f | uVar3 << 1;
  uVar4 = (uVar2 >> 0x1b | uVar2 * 0x20) + (uVar25 ^ uVar23 ^ uVar4) + uVar18 + uVar9 + 0xca62c1d6;
  param_3[0xe] = uVar1;
  param_3[0xf] = uVar3;
  uVar6 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar2 = (uVar4 >> 0x1b | uVar4 * 0x20) + (uVar23 ^ uVar10 ^ uVar2) + uVar25 + uVar12 + 0xca62c1d6;
  uVar4 = (uVar2 >> 0x1b | uVar2 * 0x20) + (uVar10 ^ uVar5 ^ uVar4) + uVar23 + uVar7 + 0xca62c1d6;
  uVar7 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar2 = (uVar4 >> 0x1b | uVar4 * 0x20) + (uVar5 ^ uVar6 ^ uVar2) + uVar10 + uVar1 + 0xca62c1d6;
  *param_1 = *param_1 + 0xca62c1d6 + uVar3 + uVar5 +
             (uVar6 ^ uVar7 ^ uVar4) + (uVar2 >> 0x1b | uVar2 * 0x20);
  param_1[1] = param_1[1] + uVar2;
  param_1[2] = param_1[2] + (uVar4 >> 2 | uVar4 * 0x40000000);
  param_1[3] = param_1[3] + uVar7;
  param_1[4] = param_1[4] + uVar6;
  return;
}



// ===== FUN_7100794540 @ 7100794540 (size=56) =====

void FUN_7100794540(undefined8 *param_1)

{
  param_1[3] = 0;
  *param_1 = 0xefcdab8967452301;
  param_1[1] = 0x1032547698badcfe;
  *(undefined4 *)(param_1 + 2) = 0xc3d2e1f0;
  return;
}



// ===== FUN_7100794580 @ 7100794580 (size=248) =====

void FUN_7100794580(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_40 [64];
  
  uVar2 = 0;
  uVar3 = *(ulong *)(param_1 + 0x18) & 0x3f;
  *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) + param_3;
  if (uVar3 + param_3 < 0x40) {
    if (param_3 != 0) {
LAB_7100794654:
      FUN_710080f900(param_1 + 0x20 + uVar3,param_2 + uVar2,param_3 - uVar2);
      return;
    }
  }
  else {
    FUN_710080f900(param_1 + 0x20 + uVar3,param_2,0x40 - uVar3);
    FUN_7100793510(param_1,auStack_40,param_1 + 0x20,1);
    uVar1 = 0x40 - uVar3;
    uVar3 = -uVar3;
    while (uVar2 = uVar1, uVar3 + 0x7f < param_3) {
      FUN_7100793510(param_1,auStack_40,param_2 + uVar2,0);
      uVar1 = uVar2 + 0x40;
      uVar3 = uVar2;
    }
    uVar3 = 0;
    if (uVar2 < param_3) goto LAB_7100794654;
  }
  return;
}



// ===== FUN_7100794680 @ 7100794680 (size=328) =====

void FUN_7100794680(long param_1,long param_2,ulong param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined4 auStack_40 [16];
  
  uVar7 = 0;
  uVar5 = *(ulong *)(param_1 + 0x18) & 0x3f;
  *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) + param_3;
  if (uVar5 + param_3 < 0x40) {
    if (param_3 != 0) {
LAB_71007947a4:
      FUN_710080f900(param_1 + 0x20 + uVar5,param_2 + uVar7,param_3 - uVar7);
      return;
    }
  }
  else {
    uVar7 = 0x40 - uVar5;
    FUN_710080f900(param_1 + 0x20 + uVar5,param_2,uVar7);
    FUN_7100793510(param_1,auStack_40,param_1 + 0x20,1);
    if (0x7f - uVar5 < param_3) {
      puVar8 = (undefined1 *)(param_2 + uVar7);
      puVar6 = (undefined1 *)(param_2 + 0x40 + uVar7);
      do {
        FUN_7100793510(param_1,auStack_40,puVar8,0);
        puVar3 = puVar8;
        puVar4 = auStack_40;
        do {
          uVar2 = *puVar4;
          puVar1 = puVar3 + 4;
          *puVar3 = (char)uVar2;
          puVar3[1] = (char)((uint)uVar2 >> 8);
          puVar3[2] = (char)((uint)uVar2 >> 0x10);
          puVar3[3] = (char)((uint)uVar2 >> 0x18);
          puVar3 = puVar1;
          puVar4 = puVar4 + 1;
        } while (puVar1 != puVar6);
        uVar5 = uVar7 + 0x7f;
        puVar8 = puVar8 + 0x40;
        puVar6 = puVar6 + 0x40;
        uVar7 = uVar7 + 0x40;
      } while (uVar5 < param_3);
    }
    uVar5 = 0;
    if (uVar7 < param_3) goto LAB_71007947a4;
  }
  return;
}



// ===== FUN_71007947d0 @ 71007947d0 (size=260) =====

void FUN_71007947d0(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_40 [64];
  
  lVar3 = param_1 + 0x20;
  uVar2 = (uint)*(long *)(param_1 + 0x18) & 0x3f;
  uVar4 = *(long *)(param_1 + 0x18) << 3;
  uVar1 = uVar2 + 1;
  *(undefined1 *)(param_1 + (ulong)uVar2 + 0x20) = 0x80;
  if (uVar1 != 0x38) {
    if (uVar1 < 0x39) {
      FUN_7100808340(lVar3 + (ulong)uVar1,0,0x38 - uVar1);
    }
    else {
      if (uVar1 != 0x40) {
        FUN_7100808340(param_1 + (ulong)(uVar2 + 0x21),0,0x3f - uVar2);
      }
      FUN_7100793510(param_1,auStack_40,lVar3,1);
      FUN_7100808340(lVar3,0,0x38);
    }
  }
  uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  *(ulong *)(param_1 + 0x58) = uVar4 >> 0x20 | uVar4 << 0x20;
  FUN_7100793510(param_1,auStack_40,lVar3,1);
  lVar3 = 0;
  do {
    *(undefined4 *)(param_2 + lVar3) = *(undefined4 *)(param_1 + lVar3);
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x14);
  FUN_7100794540(param_1);
  return;
}



// ===== FUN_71007948e0 @ 71007948e0 (size=424) =====

void FUN_71007948e0(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  uint local_100 [64];
  
  lVar7 = 1;
  do {
    lVar13 = lVar7 + 1;
    uVar5 = (param_1[lVar7 + 9] & 0xff00ff00) >> 8 | (param_1[lVar7 + 9] & 0xff00ff) << 8;
    local_100[lVar7 + -1] = uVar5 >> 0x10 | uVar5 << 0x10;
    lVar7 = lVar13;
  } while (lVar13 != 0x11);
  puVar6 = local_100;
  do {
    uVar5 = puVar6[1];
    puVar1 = puVar6 + 1;
    uVar4 = puVar6[0xe];
    puVar6[0x10] = ((uVar4 >> 0x13 | uVar4 << 0xd) ^ (uVar4 >> 0x11 | uVar4 << 0xf) ^ uVar4 >> 10) +
                   ((uVar5 >> 0x12 | uVar5 << 0xe) ^ (uVar5 >> 7 | uVar5 << 0x19) ^ uVar5 >> 3) +
                   puVar6[9] + *puVar6;
    puVar6 = puVar1;
  } while (local_100 + 0x30 != puVar1);
  iVar14 = 0x428a2f98;
  lVar7 = 1;
  lVar13 = 4;
  uVar12 = param_1[3];
  uVar8 = param_1[2];
  uVar9 = param_1[1];
  uVar15 = param_1[7];
  uVar10 = param_1[6];
  uVar11 = param_1[5];
  uVar5 = param_1[4];
  uVar4 = *param_1;
  while( true ) {
    lVar7 = lVar7 + 1;
    iVar14 = ((uVar5 >> 0xb | uVar5 << 0x15) ^ (uVar5 >> 6 | uVar5 << 0x1a) ^
             (uVar5 >> 0x19 | uVar5 << 7)) + (uVar10 & (uVar5 ^ 0xffffffff) ^ uVar5 & uVar11) +
             uVar15 + iVar14 + *(int *)((long)local_100 + lVar13 + -4);
    lVar13 = lVar7 * 4;
    uVar2 = iVar14 + uVar12;
    uVar3 = ((uVar4 >> 0xd | uVar4 << 0x13) ^ (uVar4 >> 2 | uVar4 << 0x1e) ^
            (uVar4 >> 0x16 | uVar4 << 10)) + ((uVar9 ^ uVar8) & uVar4 ^ uVar9 & uVar8) + iVar14;
    if (lVar7 == 0x41) break;
    iVar14 = *(int *)(&UNK_71009c61b4 + lVar13);
    uVar12 = uVar8;
    uVar8 = uVar9;
    uVar9 = uVar4;
    uVar15 = uVar10;
    uVar10 = uVar11;
    uVar11 = uVar5;
    uVar5 = uVar2;
    uVar4 = uVar3;
  }
  *param_1 = *param_1 + uVar3;
  param_1[1] = param_1[1] + uVar4;
  param_1[2] = param_1[2] + uVar9;
  param_1[3] = param_1[3] + uVar8;
  param_1[4] = param_1[4] + uVar2;
  param_1[5] = param_1[5] + uVar5;
  param_1[6] = param_1[6] + uVar11;
  param_1[7] = param_1[7] + uVar10;
  return;
}



// ===== FUN_7100794a90 @ 7100794a90 (size=80) =====

void FUN_7100794a90(undefined8 *param_1)

{
  param_1[4] = 0;
  *param_1 = 0xbb67ae856a09e667;
  param_1[1] = 0xa54ff53a3c6ef372;
  param_1[2] = 0x9b05688c510e527f;
  param_1[3] = 0x5be0cd191f83d9ab;
  return;
}



// ===== FUN_7100794ae0 @ 7100794ae0 (size=160) =====

void FUN_7100794ae0(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 0x20);
  *(ulong *)(param_1 + 0x20) = uVar3 + param_3;
  if (param_3 != 0) {
    uVar3 = uVar3 & 0x3f;
    do {
      while( true ) {
        lVar1 = param_1 + 0x28 + uVar3;
        uVar2 = 0x40 - uVar3;
        if (param_3 < 0x40 - uVar3) {
          uVar2 = param_3;
        }
        uVar3 = uVar3 + uVar2;
        FUN_710080f900(lVar1,param_2,uVar2);
        param_3 = param_3 - uVar2;
        param_2 = param_2 + uVar2;
        if (uVar3 == 0x40) break;
        if (param_3 == 0) {
          return;
        }
      }
      uVar3 = 0;
      FUN_71007948e0(param_1);
    } while (param_3 != 0);
  }
  return;
}



// ===== FUN_7100794b80 @ 7100794b80 (size=292) =====

void FUN_7100794b80(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = (uint)*(long *)(param_1 + 8) & 0x3f;
  uVar3 = *(long *)(param_1 + 8) << 3;
  uVar1 = uVar2 + 1;
  *(undefined1 *)((long)param_1 + (ulong)uVar2 + 0x28) = 0x80;
  if (uVar1 != 0x38) {
    if (uVar1 < 0x39) {
      FUN_7100808340((long)param_1 + (ulong)uVar1 + 0x28,0,0x38 - uVar1);
    }
    else {
      if (uVar1 != 0x40) {
        FUN_7100808340((long)param_1 + (ulong)(uVar2 + 0x29),0,0x3f - uVar2);
      }
      FUN_71007948e0(param_1);
      FUN_7100808340(param_1 + 10,0,0x38);
    }
  }
  uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
  uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
  *(ulong *)(param_1 + 0x18) = uVar3 >> 0x20 | uVar3 << 0x20;
  FUN_71007948e0(param_1);
  uVar1 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  *param_2 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
  param_2[1] = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_1[2] & 0xff00ff00) >> 8 | (param_1[2] & 0xff00ff) << 8;
  param_2[2] = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_1[3] & 0xff00ff00) >> 8 | (param_1[3] & 0xff00ff) << 8;
  param_2[3] = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_1[4] & 0xff00ff00) >> 8 | (param_1[4] & 0xff00ff) << 8;
  param_2[4] = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_1[5] & 0xff00ff00) >> 8 | (param_1[5] & 0xff00ff) << 8;
  param_2[5] = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_1[6] & 0xff00ff00) >> 8 | (param_1[6] & 0xff00ff) << 8;
  param_2[6] = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_1[7] & 0xff00ff00) >> 8 | (param_1[7] & 0xff00ff) << 8;
  param_2[7] = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_7100794a90();
  return;
}



// ===== FUN_7100794cb0 @ 7100794cb0 (size=52) =====

void FUN_7100794cb0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_710080e9e0(1,0x4d8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    *(undefined4 *)((long)puVar1 + 0x4d4) = 0;
  }
  return;
}



// ===== FUN_7100794cf0 @ 7100794cf0 (size=12) =====

uint FUN_7100794cf0(long param_1)

{
  return *(uint *)(param_1 + 0x468) & 0xf000;
}



// ===== FUN_7100794d00 @ 7100794d00 (size=80) =====

undefined8 FUN_7100794d00(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 local_8;
  
  iVar1 = FUN_71007a0b30(*param_1,param_1 + 0x3d,&local_8);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_710080e8e0();
    local_8 = 0;
    if (*piVar2 == 0xc) {
      lVar3 = FUN_71007a0e30(1,"No memory");
      return *(undefined8 *)(lVar3 + 0x70);
    }
  }
  return local_8;
}



// ===== FUN_7100794d50 @ 7100794d50 (size=8) =====

undefined8 FUN_7100794d50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// ===== FUN_7100794d60 @ 7100794d60 (size=248) =====

byte * FUN_7100794d60(long param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  FUN_71007a0c50(param_1 + 0xa0);
  do {
    bVar1 = *param_2;
    pbVar3 = param_2;
    if (0x2c < bVar1) {
LAB_7100794e50:
      pbVar2 = (byte *)0x0;
LAB_7100794dd8:
      do {
        do {
          do {
            param_2 = param_2 + 1;
          } while (0x2c < *param_2);
        } while ((-0x100100000202 >> ((ulong)*param_2 & 0x3f) & 1U) != 0);
        if (pbVar2 == (byte *)0x0) {
LAB_7100794e38:
          pbVar2 = pbVar3;
        }
        do {
          while( true ) {
            bVar1 = *param_2;
            pbVar3 = param_2;
            if (0x2c < bVar1) goto LAB_7100794dd8;
            if ((0x100100000200U >> ((ulong)bVar1 & 0x3f) & 1) == 0) break;
            param_2 = param_2 + 1;
          }
          if (bVar1 == 0) goto LAB_7100794e40;
        } while ((-0x100100000202 >> ((ulong)bVar1 & 0x3f) & 1U) == 0);
      } while( true );
    }
    if ((0x100100000200U >> ((ulong)bVar1 & 0x3f) & 1) == 0) {
      pbVar2 = (byte *)0x0;
      if (bVar1 == 0) {
LAB_7100794e40:
        *(undefined8 *)(param_1 + 0x108) = 0;
        *(undefined8 *)(param_1 + 0x110) = 0;
        return pbVar2;
      }
      if (bVar1 < 0x2d) {
        pbVar2 = (byte *)0x0;
        if ((-0x100100000202 >> ((ulong)bVar1 & 0x3f) & 1U) == 0) goto LAB_7100794e38;
        goto LAB_7100794dd8;
      }
      goto LAB_7100794e50;
    }
    param_2 = param_2 + 1;
  } while( true );
}



// ===== FUN_7100794e60 @ 7100794e60 (size=84) =====

void FUN_7100794e60(long param_1,long param_2,long param_3)

{
  param_2 = param_3 / 1000000000 + param_2;
  param_3 = param_3 % 1000000000;
  if (param_3 < 0) {
    param_2 = param_2 + -1;
    param_3 = param_3 + 1000000000;
  }
  *(long *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(int *)(param_1 + 0x20) = (int)param_3;
  *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) | 4;
  return;
}



// ===== FUN_7100794ec0 @ 7100794ec0 (size=84) =====

void FUN_7100794ec0(long param_1,long param_2,long param_3)

{
  param_2 = param_3 / 1000000000 + param_2;
  param_3 = param_3 % 1000000000;
  if (param_3 < 0) {
    param_2 = param_2 + -1;
    param_3 = param_3 + 1000000000;
  }
  *(long *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(int *)(param_1 + 0x30) = (int)param_3;
  *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) | 8;
  return;
}



// ===== FUN_7100794f20 @ 7100794f20 (size=12) =====

void FUN_7100794f20(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x468) = param_2;
  return;
}



// ===== FUN_7100794f30 @ 7100794f30 (size=84) =====

void FUN_7100794f30(long param_1,long param_2,long param_3)

{
  param_2 = param_3 / 1000000000 + param_2;
  param_3 = param_3 % 1000000000;
  if (param_3 < 0) {
    param_2 = param_2 + -1;
    param_3 = param_3 + 1000000000;
  }
  *(long *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(int *)(param_1 + 0x40) = (int)param_3;
  *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) | 0x10;
  return;
}



// ===== FUN_7100794f90 @ 7100794f90 (size=8) =====

void FUN_7100794f90(long param_1)

{
  FUN_71007a0cf0(param_1 + 0x1e8);
  return;
}



// ===== FUN_7100794fa0 @ 7100794fa0 (size=24) =====

void FUN_7100794fa0(long param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x70) = param_2;
  *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) | 0x40;
  return;
}



// ===== FUN_7100794fc0 @ 7100794fc0 (size=64) =====

void FUN_7100794fc0(long param_1,long param_2)

{
  uint uVar1;
  
  FUN_71007a0c50(param_1 + 0x250);
  uVar1 = *(uint *)(param_1 + 0x98) & 0xfffffffd;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x98) | 2;
  }
  *(uint *)(param_1 + 0x98) = uVar1;
  return;
}



// ===== FUN_7100795000 @ 7100795000 (size=28) =====

void FUN_7100795000(long param_1,char param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x388) & 0xfe;
  if (param_2 != '\0') {
    bVar1 = *(byte *)(param_1 + 0x388) | 1;
  }
  *(byte *)(param_1 + 0x388) = bVar1;
  return;
}



// ===== FUN_7100795020 @ 7100795020 (size=28) =====

void FUN_7100795020(long param_1,char param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x388) & 0xfd;
  if (param_2 != '\0') {
    bVar1 = *(byte *)(param_1 + 0x388) | 2;
  }
  *(byte *)(param_1 + 0x388) = bVar1;
  return;
}



// ===== FUN_7100795040 @ 7100795040 (size=124) =====

void FUN_7100795040(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  
  FUN_710081c200(*(undefined8 *)(param_1 + 0x390));
  if (param_2 == 0 || param_3 == 0) {
    *(undefined8 *)(param_1 + 0x390) = 0;
    *(undefined8 *)(param_1 + 0x398) = 0;
    return;
  }
  *(long *)(param_1 + 0x398) = param_3;
  lVar2 = FUN_710081c1c0(param_3);
  *(long *)(param_1 + 0x390) = lVar2;
  if (lVar2 != 0) {
    FUN_710080f900(lVar2,param_2,param_3);
    return;
  }
  FUN_710080f820();
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x71007950b8);
  (*pcVar1)();
}



// ===== FUN_71007950c0 @ 71007950c0 (size=156) =====

long FUN_71007950c0(long param_1)

{
  if (param_1 != 0) {
    FUN_71007a0960(param_1 + 0xa0);
    FUN_71007a0960(param_1 + 0x118);
    FUN_71007a0960(param_1 + 0x180);
    FUN_71007a0960(param_1 + 0x1e8);
    FUN_71007a0960(param_1 + 800);
    FUN_71007a0960(param_1 + 0x250);
    FUN_71007a0960(param_1 + 0x2b8);
    FUN_7100795040(param_1,0,0);
    FUN_71007a0f40(param_1 + 0x468);
    FUN_71007951d0(param_1);
    FUN_7100795190(param_1);
    FUN_710081c200(*(undefined8 *)(param_1 + 8));
    FUN_7100808340(param_1,0,0x4d8);
  }
  return param_1;
}



// ===== FUN_7100795160 @ 7100795160 (size=36) =====

void FUN_7100795160(undefined8 param_1)

{
  FUN_71007950c0();
  FUN_710081c200(param_1);
  return;
}



// ===== FUN_7100795190 @ 7100795190 (size=60) =====

void FUN_7100795190(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*(long *)(param_1 + 0x4b0);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_710081c200(plVar1);
    *(long *)(param_1 + 0x4b0) = lVar2;
    plVar1 = (long *)lVar2;
  }
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  return;
}



// ===== FUN_71007951d0 @ 71007951d0 (size=80) =====

void FUN_71007951d0(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x4a0);
  while (plVar2 != (long *)0x0) {
    puVar1 = plVar2 + 1;
    plVar2 = (long *)*plVar2;
    FUN_710081c200(*puVar1);
    FUN_710081c200(*(undefined8 *)(*(long *)(param_1 + 0x4a0) + 0x10));
    FUN_710081c200(*(undefined8 *)(param_1 + 0x4a0));
    *(long **)(param_1 + 0x4a0) = plVar2;
  }
  *(undefined8 *)(param_1 + 0x4a0) = 0;
  return;
}



// ===== FUN_7100795240 @ 7100795240 (size=196) =====

ulong FUN_7100795240(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (*(uint *)(lVar3 + 0xe4) == param_2) {
    return 0;
  }
  *(uint *)(lVar3 + 0xe4) = param_2;
  uVar6 = *(undefined8 *)(*(long *)(lVar3 + 0xf0) + (ulong)param_2 * 0x18 + 0x10);
  if (*(code **)(lVar3 + 0xd8) == (code *)0x0) {
    uVar1 = 0;
    if (*(code **)(lVar3 + 0xd0) != (code *)0x0) {
      uVar1 = (**(code **)(lVar3 + 0xd0))(lVar3,*(undefined8 *)(param_1 + 0x28));
      lVar3 = *(long *)(param_1 + 0x18);
    }
    pcVar5 = *(code **)(lVar3 + 0xb0);
    *(undefined8 *)(param_1 + 0x28) = uVar6;
    if (pcVar5 != (code *)0x0) {
      uVar2 = (*pcVar5)(lVar3,uVar6);
      if ((int)uVar2 < (int)uVar1) {
        uVar1 = uVar2;
      }
      return (ulong)uVar1;
    }
    uVar4 = (ulong)(uVar1 & (int)uVar1 >> 0x1f);
  }
  else {
    uVar4 = (**(code **)(lVar3 + 0xd8))(lVar3,*(undefined8 *)(param_1 + 0x28),uVar6);
    *(undefined8 *)(param_1 + 0x28) = uVar6;
  }
  return uVar4;
}



// ===== FUN_7100795330 @ 7100795330 (size=96) =====

long FUN_7100795330(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x278);
  if (lVar1 != 0 && param_2 == -1) {
    lVar2 = *(long *)(lVar1 + 0x10);
    if (lVar2 != 0) {
      do {
        lVar1 = lVar2;
        lVar2 = *(long *)(lVar2 + 0x10);
      } while (lVar2 != 0);
      return lVar1;
    }
  }
  else {
    if (param_2 < 0) {
      return 0;
    }
    if (param_2 != 0 && lVar1 != 0) {
      do {
        lVar1 = *(long *)(lVar1 + 0x10);
        param_2 = param_2 + -1;
      } while (param_2 != 0 && lVar1 != 0);
    }
  }
  return lVar1;
}



// ===== FUN_7100795390 @ 7100795390 (size=36) =====

undefined4 FUN_7100795390(void)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_7100795330();
  if (lVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 0x38);
  }
  return uVar1;
}



// ===== FUN_71007953c0 @ 71007953c0 (size=28) =====

long FUN_71007953c0(void)

{
  long lVar1;
  
  lVar1 = FUN_7100795330();
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x30);
  }
  return lVar1;
}



// ===== FUN_71007953e0 @ 71007953e0 (size=36) =====

undefined8 FUN_71007953e0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_7100795330();
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}



// ===== FUN_7100795410 @ 7100795410 (size=152) =====

undefined8 FUN_7100795410(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_71007a10c0(param_1,0xdeb0c5,4,"archive_read_data_block");
  if (iVar1 != -0x1e) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x818) + 0x28);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00710079547c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
      return uVar2;
    }
    FUN_71007a0da0(param_1,0x16,"Internal error: No format->read_data function registered");
  }
  return 0xffffffe2;
}



// ===== FUN_71007954b0 @ 71007954b0 (size=588) =====

long FUN_71007954b0(long *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (*(char *)((long)param_1 + 0x8a) != '\0') {
    return -1;
  }
  lVar3 = param_1[0xc];
  lVar5 = 0;
  if (lVar3 != 0) {
    lVar5 = lVar3;
    if (param_2 < lVar3) {
      lVar5 = param_2;
    }
    param_2 = param_2 - lVar5;
    param_1[0xb] = param_1[0xb] + lVar5;
    param_1[0xc] = lVar3 - lVar5;
    *param_1 = *param_1 + lVar5;
  }
  lVar3 = param_1[0x10];
  if (lVar3 != 0) {
    lVar7 = lVar3;
    if (param_2 < lVar3) {
      lVar7 = param_2;
    }
    param_2 = param_2 - lVar7;
    lVar5 = lVar5 + lVar7;
    *param_1 = *param_1 + lVar7;
    param_1[0xf] = param_1[0xf] + lVar7;
    param_1[0x10] = lVar3 - lVar7;
  }
  if (param_2 == 0) {
    return lVar5;
  }
  if (*(int *)((long)param_1 + 0x3c) != 0) {
    if (param_2 < 0) {
      FUN_71007a0e30(1,"Negative skip requested.");
                    /* WARNING: Does not return */
      pcVar4 = (code *)UndefinedInstructionException(0,0x71007956f8);
      (*pcVar4)();
    }
    lVar3 = param_1[3];
    pcVar4 = *(code **)(lVar3 + 0xc0);
    if (pcVar4 != (code *)0x0) {
      lVar7 = 0;
      lVar6 = param_2;
      while( true ) {
        lVar1 = lVar6;
        if (0x40000000 < lVar6) {
          lVar1 = 0x40000000;
        }
        lVar3 = (*pcVar4)(lVar3,param_1[5],lVar1);
        lVar7 = lVar7 + lVar3;
        if (lVar3 == 0 || lVar6 == lVar3) {
          if (lVar7 < 0) goto LAB_71007956a4;
          goto LAB_710079562c;
        }
        if (lVar6 < lVar3) break;
        lVar6 = lVar6 - lVar3;
        lVar3 = param_1[3];
        pcVar4 = *(code **)(lVar3 + 0xc0);
      }
LAB_71007956a0:
      lVar7 = -0x1e;
LAB_71007956a4:
      *(undefined1 *)((long)param_1 + 0x8a) = 1;
      return lVar7;
    }
    if ((*(code **)(lVar3 + 200) != (code *)0x0) && (0x10000 < param_2)) {
      lVar6 = *param_1;
      lVar3 = (**(code **)(lVar3 + 200))(lVar3,param_1[5],param_2,1);
      lVar7 = lVar3 - lVar6;
      if (lVar3 != param_2 + lVar6) goto LAB_71007956a0;
LAB_710079562c:
      param_2 = param_2 - lVar7;
      lVar5 = lVar5 + lVar7;
      *param_1 = *param_1 + lVar7;
      if (param_2 == 0) {
        return lVar5;
      }
    }
  }
  do {
    while( true ) {
      lVar3 = (**(code **)param_1[4])(param_1,param_1 + 0xd);
      if (lVar3 < 0) {
        param_1[0xd] = 0;
        *(undefined1 *)((long)param_1 + 0x8a) = 1;
        return lVar3;
      }
      if (lVar3 == 0) break;
      if (param_2 <= lVar3) {
        *param_1 = param_2 + *param_1;
        param_1[0x10] = lVar3 - param_2;
        param_1[0xe] = lVar3;
        param_1[0xf] = param_1[0xd] + param_2;
        return lVar5 + param_2;
      }
      lVar5 = lVar5 + lVar3;
      param_2 = param_2 - lVar3;
      *param_1 = lVar3 + *param_1;
    }
    iVar2 = *(int *)(param_1[3] + 0xe4);
  } while ((iVar2 != *(int *)(param_1[3] + 0xe0) + -1) &&
          (iVar2 = FUN_7100795240(param_1,iVar2 + 1), iVar2 == 0));
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0x11) = 1;
  return lVar5;
}



// ===== FUN_7100795700 @ 7100795700 (size=136) =====

int FUN_7100795700(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar3 = 0;
    do {
      lVar2 = *(long *)(param_1 + 0x10);
      if ((*(char *)(param_1 + 0x89) == '\0') && (*(long *)(param_1 + 0x20) != 0)) {
        iVar1 = (**(code **)(*(long *)(param_1 + 0x20) + 8))(param_1);
        if (iVar1 < iVar3) {
          iVar3 = iVar1;
        }
        *(undefined1 *)(param_1 + 0x89) = 1;
      }
      FUN_710081c200(*(undefined8 *)(param_1 + 0x48));
      *(undefined8 *)(param_1 + 0x48) = 0;
      param_1 = lVar2;
    } while (lVar2 != 0);
    return iVar3;
  }
  return 0;
}



// ===== FUN_7100795790 @ 7100795790 (size=104) =====

ulong FUN_7100795790(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_71007a10c0(param_1,0xdeb0c5,0xffff,"archive_read_close");
  if ((int)uVar2 != -0x1e) {
    uVar2 = 0;
    if (*(int *)(param_1 + 4) != 0x20) {
      FUN_71007a0d90(param_1);
      *(undefined4 *)(param_1 + 4) = 0x20;
      uVar1 = FUN_7100795700(*(undefined8 *)(param_1 + 0x278));
      uVar2 = (ulong)(uVar1 & (int)uVar1 >> 0x1f);
    }
  }
  return uVar2;
}



// ===== FUN_7100795800 @ 7100795800 (size=144) =====

int FUN_7100795800(long param_1)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  
  lVar4 = *(long *)(param_1 + 0x18);
  pcVar3 = *(code **)(lVar4 + 0xd0);
  if ((pcVar3 != (code *)0x0) && (*(int *)(lVar4 + 0xe0) != 0)) {
    iVar5 = 0;
    lVar7 = 0;
    uVar6 = 0;
    while( true ) {
      uVar6 = uVar6 + 1;
      lVar1 = *(long *)(lVar4 + 0xf0) + lVar7;
      lVar7 = lVar7 + 0x18;
      iVar2 = (*pcVar3)(lVar4,*(undefined8 *)(lVar1 + 0x10));
      if (iVar2 < iVar5) {
        iVar5 = iVar2;
      }
      if (*(uint *)(lVar4 + 0xe0) <= uVar6) break;
      pcVar3 = *(code **)(lVar4 + 0xd0);
    }
    return iVar5;
  }
  return 0;
}



// ===== FUN_7100795890 @ 7100795890 (size=404) =====

int FUN_7100795890(undefined4 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  iVar3 = 0;
  if ((param_1 != (undefined4 *)0x0) &&
     (iVar3 = FUN_71007a10c0(param_1,0xdeb0c5,0xffff,"archive_read_free"), iVar3 != -0x1e)) {
    iVar3 = 0;
    if (param_1[1] == 0x20 || param_1[1] == 0x8000) {
      pcVar5 = *(code **)(param_1 + 0x20a);
    }
    else {
      iVar3 = FUN_71007a0f00(param_1);
      pcVar5 = *(code **)(param_1 + 0x20a);
    }
    if (pcVar5 != (code *)0x0) {
      iVar3 = (*pcVar5)(param_1);
    }
    puVar7 = param_1 + 0xa6;
    do {
      pcVar5 = *(code **)(puVar7 + 0x10);
      *(undefined4 **)(param_1 + 0x206) = puVar7;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(param_1);
      }
      puVar7 = puVar7 + 0x16;
    } while (puVar7 != param_1 + 0x206);
    FUN_7100795700(*(undefined8 *)(param_1 + 0x9e));
    lVar1 = *(long *)(param_1 + 0x9e);
    while (lVar1 != 0) {
      lVar6 = *(long *)(lVar1 + 0x10);
      FUN_710081c200(lVar1);
      *(long *)(param_1 + 0x9e) = lVar6;
      lVar1 = lVar6;
    }
    puVar7 = param_1 + 0x3e;
    do {
      if ((*(long *)(puVar7 + 4) != 0) &&
         (pcVar5 = *(code **)(*(long *)(puVar7 + 4) + 0x10), pcVar5 != (code *)0x0)) {
        (*pcVar5)(puVar7);
      }
      puVar7 = puVar7 + 6;
    } while (param_1 + 0x9e != puVar7);
    puVar2 = *(undefined8 **)(param_1 + 0x20c);
    while (puVar2 != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)puVar2[1];
      uVar9 = *puVar2;
      uVar4 = FUN_710081ce00(uVar9);
      FUN_7100808340(uVar9,0,uVar4);
      FUN_710081c200(*puVar2);
      FUN_710081c200(puVar2);
      puVar2 = puVar8;
    }
    FUN_710079d790(param_1 + 0xc);
    FUN_7100795160(*(undefined8 *)(param_1 + 0x24));
    *param_1 = 0;
    FUN_71007a0d50(param_1);
    FUN_710081c200(*(undefined8 *)(param_1 + 0x3c));
    FUN_710081c200(param_1);
  }
  return iVar3;
}



// ===== FUN_7100795a30 @ 7100795a30 (size=92) =====

undefined8 * FUN_7100795a30(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_710080e9e0(1,0x858);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x100deb0c5;
    uVar2 = FUN_7100794cb0();
    puVar1[0x12] = uVar2;
    puVar1[1] = &PTR_FUN_7100ae6d98;
    puVar1[0x107] = puVar1 + 0x106;
  }
  return puVar1;
}



// ===== FUN_7100795a90 @ 7100795a90 (size=84) =====

void FUN_7100795a90(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_71007a10c0(param_1,0xdeb0c5,0x7fff,"archive_read_extract_set_skip_file");
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 0xa0) = param_2;
    *(undefined8 *)(param_1 + 0xa8) = param_3;
    *(undefined4 *)(param_1 + 0x98) = 1;
  }
  return;
}



// ===== FUN_7100795af0 @ 7100795af0 (size=72) =====

undefined8 FUN_7100795af0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_71007a10c0(param_1,0xdeb0c5,1,"archive_read_set_open_callback");
  if ((int)uVar1 != -0x1e) {
    uVar1 = 0;
    *(undefined8 *)(param_1 + 0xb0) = param_2;
  }
  return uVar1;
}



// ===== FUN_7100795b40 @ 7100795b40 (size=72) =====

undefined8 FUN_7100795b40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_71007a10c0(param_1,0xdeb0c5,1,"archive_read_set_read_callback");
  if ((int)uVar1 != -0x1e) {
    uVar1 = 0;
    *(undefined8 *)(param_1 + 0xb8) = param_2;
  }
  return uVar1;
}



// ===== FUN_7100795b90 @ 7100795b90 (size=72) =====

undefined8 FUN_7100795b90(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_71007a10c0(param_1,0xdeb0c5,1,"archive_read_set_skip_callback");
  if ((int)uVar1 != -0x1e) {
    uVar1 = 0;
    *(undefined8 *)(param_1 + 0xc0) = param_2;
  }
  return uVar1;
}



// ===== FUN_7100795be0 @ 7100795be0 (size=72) =====

undefined8 FUN_7100795be0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_71007a10c0(param_1,0xdeb0c5,1,"archive_read_set_seek_callback");
  if ((int)uVar1 != -0x1e) {
    uVar1 = 0;
    *(undefined8 *)(param_1 + 200) = param_2;
  }
  return uVar1;
}



// ===== FUN_7100795c30 @ 7100795c30 (size=72) =====

undefined8 FUN_7100795c30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_71007a10c0(param_1,0xdeb0c5,1,"archive_read_set_close_callback");
  if ((int)uVar1 != -0x1e) {
    uVar1 = 0;
    *(undefined8 *)(param_1 + 0xd0) = param_2;
  }
  return uVar1;
}



// ===== FUN_7100795c80 @ 7100795c80 (size=72) =====

undefined8 FUN_7100795c80(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_71007a10c0(param_1,0xdeb0c5,1,"archive_read_set_switch_callback");
  if ((int)uVar1 != -0x1e) {
    uVar1 = 0;
    *(undefined8 *)(param_1 + 0xd8) = param_2;
  }
  return uVar1;
}



// ===== FUN_7100795cd0 @ 7100795cd0 (size=300) =====

undefined8 FUN_7100795cd0(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  iVar2 = FUN_71007a10c0(param_1,0xdeb0c5,1,"archive_read_add_callback_data");
  if (iVar2 != -0x1e) {
    if (param_3 <= *(uint *)(param_1 + 0xe0)) {
      uVar1 = *(uint *)(param_1 + 0xe0) + 1;
      *(uint *)(param_1 + 0xe0) = uVar1;
      lVar3 = FUN_71008141e0(*(undefined8 *)(param_1 + 0xf0),(ulong)uVar1 * 0x18);
      if (lVar3 != 0) {
        iVar2 = *(int *)(param_1 + 0xe0);
        *(long *)(param_1 + 0xf0) = lVar3;
        uVar1 = iVar2 - 1;
        if (param_3 < uVar1) {
          lVar4 = (ulong)uVar1 * 0x18;
          puVar5 = (undefined8 *)(lVar3 + lVar4);
          do {
            puVar6 = puVar5 + -3;
            uVar7 = puVar5[(ulong)uVar1 * -3 + (ulong)(iVar2 - 2) * 3 + 2];
            *puVar5 = 0xffffffffffffffff;
            puVar5[1] = 0xffffffffffffffff;
            puVar5[2] = uVar7;
            puVar5 = puVar6;
          } while (puVar6 != (undefined8 *)
                             (lVar3 + (ulong)((iVar2 - param_3) - 2) * -0x18 + lVar4 + -0x18));
        }
        lVar4 = lVar3 + (ulong)param_3 * 0x18;
        *(undefined8 *)(lVar4 + 0x10) = param_2;
        *(undefined8 *)(lVar3 + (ulong)param_3 * 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(lVar4 + 8) = 0xffffffffffffffff;
        return 0;
      }
      FUN_71007a0da0(param_1,0xc,"No memory.");
      return 0xffffffe2;
    }
    FUN_71007a0da0(param_1,0x16,"Invalid index specified.");
  }
  return 0xffffffe2;
}



// ===== FUN_7100795e00 @ 7100795e00 (size=8) =====

void FUN_7100795e00(long param_1,undefined8 param_2)

{
  FUN_7100795cd0(param_1,param_2,*(undefined4 *)(param_1 + 0xe0));
  return;
}



// ===== FUN_7100795e10 @ 7100795e10 (size=144) =====

ulong FUN_7100795e10(long param_1)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  undefined1 auStack_8 [8];
  
  uVar2 = FUN_71007a10c0(param_1,0xdeb0c5,4,"archive_read_data_skip");
  if ((int)uVar2 != -0x1e) {
    pcVar3 = *(code **)(*(long *)(param_1 + 0x818) + 0x30);
    if (pcVar3 == (code *)0x0) {
      do {
        uVar1 = FUN_71007a0f30(param_1,auStack_18,auStack_10,auStack_8);
      } while (uVar1 == 0);
    }
    else {
      uVar1 = (*pcVar3)(param_1);
    }
    if (uVar1 == 1) {
      uVar1 = 0;
    }
    uVar2 = (ulong)uVar1;
    *(undefined4 *)(param_1 + 4) = 2;
  }
  return uVar2;
}



// ===== FUN_7100795ea0 @ 7100795ea0 (size=368) =====

ulong FUN_7100795ea0(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_71007a10c0(param_1,0xdeb0c5,6,"archive_read_next_header");
  if (iVar1 == -0x1e) {
    return 0xffffffe2;
  }
  uVar3 = 0;
  FUN_71007950c0(param_2);
  FUN_71007a0d90(param_1);
  if (*(int *)(param_1 + 4) == 4) {
    uVar3 = FUN_7100795e10(param_1);
    if (uVar3 == 1) {
      FUN_71007a0da0(param_1,5,"Premature end-of-file.");
LAB_7100795ff8:
      *(undefined4 *)(param_1 + 4) = 0x8000;
      return 0xffffffe2;
    }
    if (uVar3 == 0xffffffe2) goto LAB_7100795ff8;
  }
  uVar6 = **(undefined8 **)(param_1 + 0x278);
  pcVar5 = *(code **)(*(long *)(param_1 + 0x818) + 0x20);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  *(undefined8 *)(param_1 + 0x288) = uVar6;
  uVar4 = (*pcVar5)(param_1,param_2);
  uVar2 = (uint)uVar4;
  if (uVar2 != 0) {
    if (0 < (int)uVar2) {
      if (uVar2 == 1) {
        *(undefined8 *)(param_1 + 0x60) = 0;
        *(undefined8 *)(param_1 + 0x68) = 0;
        *(undefined8 *)(param_1 + 0x70) = 0;
        *(undefined8 *)(param_1 + 0x78) = 0;
        *(undefined1 *)(param_1 + 0x80) = 0;
        *(undefined4 *)(param_1 + 4) = 0x10;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
        *(undefined8 *)(param_1 + 0x88) = 0;
        *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(param_1 + 0xe4);
        return uVar4;
      }
      goto LAB_7100795f4c;
    }
    if (uVar2 == 0xffffffe2) {
      *(undefined4 *)(param_1 + 4) = 0x8000;
      goto LAB_7100795f4c;
    }
    if (uVar2 != 0xffffffec) goto LAB_7100795f4c;
  }
  *(undefined4 *)(param_1 + 4) = 4;
LAB_7100795f4c:
  if ((int)uVar3 < (int)uVar2) {
    uVar2 = uVar3;
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(param_1 + 0xe4);
  return (ulong)uVar2;
}



// ===== FUN_7100796010 @ 7100796010 (size=52) =====

void FUN_7100796010(long param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_7100795ea0(param_1,*(undefined8 *)(param_1 + 0x90));
  *param_2 = *(undefined8 *)(param_1 + 0x90);
  return;
}



// ===== FUN_7100796050 @ 7100796050 (size=64) =====

void FUN_7100796050(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_7100795700(*(undefined8 *)(param_1 + 0x278));
  lVar1 = *(long *)(param_1 + 0x278);
  while (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
    FUN_710081c200(lVar1);
    *(long *)(param_1 + 0x278) = lVar2;
    lVar1 = lVar2;
  }
  return;
}



// ===== FUN_7100796090 @ 7100796090 (size=284) =====

undefined8
FUN_7100796090(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
              undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  iVar1 = FUN_71007a10c0(param_1,0xdeb0c5,1,"__archive_read_register_format");
  if (iVar1 != -0x1e) {
    iVar1 = 0;
    plVar2 = (long *)(param_1 + 0x2a8);
    do {
      lVar3 = *plVar2;
      plVar2 = plVar2 + 0xb;
      if (lVar3 == param_4) {
        return 0xffffffec;
      }
      if (lVar3 == 0) {
        param_1 = param_1 + ((long)iVar1 * 3 + (long)iVar1 * 8) * 8;
        *(undefined8 *)(param_1 + 0x298) = param_2;
        *(undefined8 *)(param_1 + 0x2a0) = param_3;
        *(long *)(param_1 + 0x2a8) = param_4;
        *(undefined8 *)(param_1 + 0x2b0) = param_5;
        *(undefined8 *)(param_1 + 0x2b8) = param_6;
        *(undefined8 *)(param_1 + 0x2c0) = param_7;
        *(undefined8 *)(param_1 + 0x2c8) = param_8;
        *(undefined8 *)(param_1 + 0x2d0) = param_9;
        *(undefined8 *)(param_1 + 0x2d8) = param_10;
        *(undefined8 *)(param_1 + 0x2e0) = param_11;
        *(undefined8 *)(param_1 + 0x2e8) = param_12;
        return 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x10);
    FUN_71007a0da0(param_1,0xc,"Not enough slots for format registration");
  }
  return 0xffffffe2;
}



// ===== FUN_71007961b0 @ 71007961b0 (size=688) =====

long FUN_71007961b0(long param_1,ulong param_2,ulong *param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (*(char *)(param_1 + 0x8a) == '\0') {
    uVar4 = *(ulong *)(param_1 + 0x60);
    if (uVar4 == 0 || uVar4 < param_2) {
      do {
        uVar5 = *(ulong *)(param_1 + 0x80);
        uVar7 = *(ulong *)(param_1 + 0x48);
        uVar6 = uVar5 + uVar4;
        if (uVar6 <= *(ulong *)(param_1 + 0x70) && param_2 <= uVar6) {
          *(ulong *)(param_1 + 0x58) = uVar7;
          *(undefined8 *)(param_1 + 0x60) = 0;
          lVar3 = *(long *)(param_1 + 0x78) - uVar4;
          *(long *)(param_1 + 0x78) = lVar3;
          *(ulong *)(param_1 + 0x80) = uVar6;
          if (param_3 == (ulong *)0x0) {
            return lVar3;
          }
          *param_3 = uVar6;
          return lVar3;
        }
        if ((uVar7 < *(ulong *)(param_1 + 0x58)) &&
           (uVar7 + *(long *)(param_1 + 0x50) < *(ulong *)(param_1 + 0x58) + param_2)) {
          if (uVar4 == 0) {
            *(ulong *)(param_1 + 0x58) = uVar7;
          }
          else {
            FUN_710080f900(uVar7);
            uVar7 = *(ulong *)(param_1 + 0x48);
            uVar5 = *(ulong *)(param_1 + 0x80);
            *(ulong *)(param_1 + 0x58) = uVar7;
          }
        }
        if (uVar5 == 0) {
          if (*(char *)(param_1 + 0x88) != '\0') {
            if (param_3 != (ulong *)0x0) {
              *param_3 = 0;
            }
            goto LAB_71007963a8;
          }
          lVar3 = (*(code *)**(undefined8 **)(param_1 + 0x20))(param_1,param_1 + 0x68);
          if (lVar3 < 0) {
            *(undefined8 *)(param_1 + 0x68) = 0;
            *(undefined8 *)(param_1 + 0x70) = 0;
            *(undefined8 *)(param_1 + 0x78) = 0;
            *(undefined8 *)(param_1 + 0x80) = 0;
            *(undefined1 *)(param_1 + 0x8a) = 1;
            goto joined_r0x007100796414;
          }
          if (lVar3 == 0) {
            iVar2 = *(int *)(*(long *)(param_1 + 0x18) + 0xe4);
            if ((iVar2 == *(int *)(*(long *)(param_1 + 0x18) + 0xe0) + -1) ||
               (iVar2 = FUN_7100795240(param_1,iVar2 + 1), iVar2 != 0)) {
              *(undefined8 *)(param_1 + 0x68) = 0;
              *(undefined8 *)(param_1 + 0x70) = 0;
              *(undefined8 *)(param_1 + 0x78) = 0;
              *(undefined8 *)(param_1 + 0x80) = 0;
              *(undefined1 *)(param_1 + 0x88) = 1;
              if (param_3 != (ulong *)0x0) {
                *param_3 = *(ulong *)(param_1 + 0x60);
              }
              goto LAB_71007963a8;
            }
            uVar4 = *(ulong *)(param_1 + 0x60);
          }
          else {
            uVar4 = *(ulong *)(param_1 + 0x60);
            *(long *)(param_1 + 0x80) = lVar3;
            *(long *)(param_1 + 0x70) = lVar3;
            *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x68);
          }
        }
        else {
          uVar4 = *(ulong *)(param_1 + 0x50);
          if (uVar4 < param_2) {
            bVar1 = uVar4 != 0;
            uVar6 = uVar4;
            uVar4 = param_2;
            if (bVar1) {
              while (uVar4 = uVar6, uVar6 < param_2) {
                bVar1 = uVar6 << 1 <= uVar6;
                uVar6 = uVar6 << 1;
                if (bVar1) goto LAB_710079637c;
              }
            }
            uVar6 = FUN_710081c1c0(uVar4);
            if (uVar6 == 0) {
LAB_710079637c:
              FUN_71007a0da0(*(undefined8 *)(param_1 + 0x18),0xc,"Unable to allocate copy buffer");
              *(undefined1 *)(param_1 + 0x8a) = 1;
              goto joined_r0x007100796414;
            }
            if (*(long *)(param_1 + 0x60) != 0) {
              FUN_710080f900(uVar6,*(undefined8 *)(param_1 + 0x58));
            }
            FUN_710081c200(*(undefined8 *)(param_1 + 0x48));
            uVar5 = *(ulong *)(param_1 + 0x80);
            *(ulong *)(param_1 + 0x48) = uVar6;
            *(ulong *)(param_1 + 0x50) = uVar4;
            *(ulong *)(param_1 + 0x58) = uVar6;
            uVar7 = uVar6;
          }
          else {
            uVar6 = *(ulong *)(param_1 + 0x58);
          }
          lVar3 = *(long *)(param_1 + 0x60);
          uVar7 = (uVar7 + uVar4) - (uVar6 + lVar3);
          if (param_2 < lVar3 + uVar7) {
            uVar7 = param_2 - lVar3;
          }
          if (uVar5 < uVar7) {
            uVar7 = uVar5;
          }
          FUN_710080f900(uVar6 + lVar3,*(undefined8 *)(param_1 + 0x78),uVar7);
          uVar4 = uVar7 + *(long *)(param_1 + 0x60);
          *(ulong *)(param_1 + 0x60) = uVar4;
          *(ulong *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + uVar7;
          *(ulong *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) - uVar7;
        }
      } while (uVar4 == 0 || uVar4 < param_2);
    }
    if (param_3 != (ulong *)0x0) {
      *param_3 = uVar4;
    }
    lVar3 = *(long *)(param_1 + 0x58);
  }
  else {
joined_r0x007100796414:
    if (param_3 != (ulong *)0x0) {
      *param_3 = 0xffffffffffffffe2;
    }
LAB_71007963a8:
    lVar3 = 0;
  }
  return lVar3;
}



// ===== FUN_7100796460 @ 7100796460 (size=8) =====

void FUN_7100796460(long param_1)

{
  FUN_71007961b0(*(undefined8 *)(param_1 + 0x278));
  return;
}



// ===== FUN_7100796470 @ 7100796470 (size=100) =====

ulong FUN_7100796470(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (-1 < (long)param_2) {
    if (param_2 == 0) {
      return 0;
    }
    lVar2 = *(long *)(param_1 + 0x278);
    uVar1 = FUN_71007954b0(lVar2);
    if (param_2 == uVar1) {
      return param_2;
    }
    FUN_71007a0da0(*(undefined8 *)(lVar2 + 0x18),0xffffffff,
                   "Truncated input file (needed %jd bytes, only %jd available)",param_2,
                   uVar1 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU));
  }
  return 0xffffffffffffffe2;
}



// ===== FUN_71007964e0 @ 71007964e0 (size=884) =====

long FUN_71007964e0(long *param_1,long param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  
  if ((param_1[0x11] & 0xffff00U) != 0) {
    return -0x1e;
  }
  if ((int)param_1[8] == 0) {
    return -0x19;
  }
  lVar11 = param_1[3];
  if (param_3 == 1) {
    param_2 = param_2 + *param_1;
  }
  else {
    if (param_3 == 2) {
      plVar10 = *(long **)(lVar11 + 0xf0);
      lVar4 = *plVar10;
      uVar12 = 0;
      plVar7 = plVar10;
      if (-1 < lVar4) {
        while( true ) {
          uVar1 = uVar12 + 1;
          if (plVar7[1] < 0) break;
          lVar4 = lVar4 + plVar7[1];
          if (*(uint *)(lVar11 + 0xe0) <= uVar1) break;
          plVar10[(ulong)uVar1 * 3] = lVar4;
          plVar7 = plVar10 + (ulong)uVar1 * 3;
          uVar12 = uVar1;
        }
      }
      lVar4 = (ulong)uVar12 * 0x18;
      while( true ) {
        iVar3 = FUN_7100795240(param_1,uVar12);
        if (iVar3 != 0) {
          return (long)iVar3;
        }
        lVar5 = param_1[3];
        if (*(code **)(lVar5 + 200) == (code *)0x0) goto LAB_7100796820;
        lVar5 = (**(code **)(lVar5 + 200))(lVar5,param_1[5],0,2);
        uVar1 = uVar12 + 1;
        if (lVar5 < 0) {
          return lVar5;
        }
        lVar6 = *(long *)(lVar11 + 0xf0);
        uVar2 = *(uint *)(lVar11 + 0xe0);
        lVar8 = *(long *)(lVar6 + lVar4);
        lVar9 = lVar6 + lVar4;
        lVar4 = lVar4 + 0x18;
        *(long *)(lVar9 + 8) = lVar5;
        lVar9 = lVar8 + lVar5;
        if (uVar2 <= uVar1) break;
        *(long *)(lVar6 + (ulong)uVar1 * 0x18) = lVar9;
        uVar12 = uVar1;
      }
      lVar4 = param_2 + lVar9;
      if (lVar4 < lVar8) {
        do {
          param_2 = param_2 + lVar5;
          if (uVar12 == 0) {
            lVar4 = param_2 + lVar9;
            uVar12 = 0;
            break;
          }
          uVar12 = uVar12 - 1;
          lVar8 = *(long *)(lVar6 + (ulong)uVar12 * 0x18);
          lVar5 = *(long *)(lVar6 + (ulong)uVar12 * 0x18 + 8);
          lVar9 = lVar8 + lVar5;
          lVar4 = param_2 + lVar9;
        } while (lVar4 < lVar8);
      }
      iVar3 = FUN_7100795240(param_1,uVar12);
      if (iVar3 != 0) {
        return (long)iVar3;
      }
      lVar5 = param_1[3];
      if (*(code **)(lVar5 + 200) != (code *)0x0) {
        lVar5 = (**(code **)(lVar5 + 200))(lVar5,param_1[5],lVar4 - lVar8,0);
        if (lVar5 < 0) {
          return lVar5;
        }
        lVar4 = (ulong)uVar12 * 0x18;
        goto LAB_7100796758;
      }
      goto LAB_7100796820;
    }
    if (param_3 != 0) {
      return -0x1e;
    }
  }
  plVar10 = *(long **)(lVar11 + 0xf0);
  uVar12 = 0;
  lVar4 = *plVar10;
  plVar7 = plVar10;
  if (-1 < lVar4) {
    while( true ) {
      uVar1 = uVar12 + 1;
      if (plVar7[1] < 0) break;
      lVar4 = lVar4 + plVar7[1];
      if ((param_2 < lVar4 + -1) || (*(uint *)(lVar11 + 0xe0) <= uVar1)) break;
      plVar10[(ulong)uVar1 * 3] = lVar4;
      plVar7 = plVar10 + (ulong)uVar1 * 3;
      uVar12 = uVar1;
    }
  }
  lVar4 = (ulong)uVar12 * 0x18;
  while( true ) {
    iVar3 = FUN_7100795240(param_1,uVar12);
    if (iVar3 != 0) {
      return (long)iVar3;
    }
    lVar5 = param_1[3];
    if (*(code **)(lVar5 + 200) == (code *)0x0) goto LAB_7100796820;
    uVar12 = uVar12 + 1;
    lVar5 = (**(code **)(lVar5 + 200))(lVar5,param_1[5],0,2);
    if (lVar5 < 0) {
      return lVar5;
    }
    lVar6 = *(long *)(lVar11 + 0xf0);
    lVar8 = *(long *)(lVar6 + lVar4);
    *(long *)(lVar6 + lVar4 + 8) = lVar5;
    lVar9 = lVar8 + lVar5;
    if ((param_2 < lVar9 + -1) || (*(uint *)(lVar11 + 0xe0) <= uVar12)) break;
    *(long *)(lVar6 + (ulong)uVar12 * 0x18) = lVar9;
    lVar4 = lVar4 + 0x18;
  }
  param_2 = param_2 - lVar8;
  if (param_2 < 0 || lVar5 < param_2) {
    return -0x1e;
  }
  lVar5 = param_1[3];
  if (*(code **)(lVar5 + 200) != (code *)0x0) {
    lVar5 = (**(code **)(lVar5 + 200))(lVar5,param_1[5],param_2,0);
    if (lVar5 < 0) {
      return lVar5;
    }
LAB_7100796758:
    lVar5 = lVar5 + *(long *)(*(long *)(lVar11 + 0xf0) + lVar4);
    if (-1 < lVar5) {
      *(undefined1 *)(param_1 + 0x11) = 0;
      param_1[0xb] = param_1[9];
      param_1[0xc] = 0;
      *param_1 = lVar5;
      param_1[0x10] = 0;
      return lVar5;
    }
    return lVar5;
  }
LAB_7100796820:
  FUN_71007a0da0(lVar5,0xffffffff,"Current client reader does not support seeking a device");
  return -0x19;
}



// ===== FUN_7100796860 @ 7100796860 (size=8) =====

void FUN_7100796860(long param_1)

{
  FUN_71007964e0(*(undefined8 *)(param_1 + 0x278));
  return;
}



// ===== FUN_7100796870 @ 7100796870 (size=912) =====

int FUN_7100796870(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  long local_8;
  
  iVar2 = FUN_71007a10c0(param_1,0xdeb0c5,1,"archive_read_open");
  if (iVar2 == -0x1e) {
    return -0x1e;
  }
  FUN_71007a0d90(param_1);
  if (*(long *)(param_1 + 0xb8) == 0) {
    FUN_71007a0da0(param_1,0x16,"No reader function provided to archive_read_open");
    *(undefined4 *)(param_1 + 4) = 0x8000;
    return -0x1e;
  }
  if ((*(code **)(param_1 + 0xb0) != (code *)0x0) &&
     (iVar2 = (**(code **)(param_1 + 0xb0))
                        (param_1,*(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x10)), iVar2 != 0)) {
    pcVar7 = *(code **)(param_1 + 0xd0);
    if (pcVar7 == (code *)0x0) {
      return iVar2;
    }
    if (*(int *)(param_1 + 0xe0) != 0) {
      lVar5 = 0;
      uVar10 = 0;
      while( true ) {
        uVar10 = uVar10 + 1;
        lVar6 = *(long *)(param_1 + 0xf0) + lVar5;
        lVar5 = lVar5 + 0x18;
        (*pcVar7)(param_1,*(undefined8 *)(lVar6 + 0x10));
        if (*(uint *)(param_1 + 0xe0) <= uVar10) break;
        pcVar7 = *(code **)(param_1 + 0xd0);
      }
      return iVar2;
    }
    return iVar2;
  }
  lVar5 = FUN_710080e9e0(1,0x90);
  if (lVar5 == 0) {
    return -0x1e;
  }
  puVar8 = *(undefined8 **)(param_1 + 0xf0);
  lVar6 = *(long *)(param_1 + 0x278);
  uVar9 = puVar8[2];
  *(long *)(lVar5 + 0x18) = param_1;
  *(undefined **)(lVar5 + 0x30) = &DAT_7100846f10;
  *(undefined8 *)(lVar5 + 0x38) = 0x100000000;
  *(undefined ***)(lVar5 + 0x20) = &PTR_LAB_7100ae6d80;
  *(undefined8 *)(lVar5 + 0x28) = uVar9;
  *(undefined4 *)(lVar5 + 0x40) = 1;
  *puVar8 = 0;
  if ((lVar6 == 0) || (*(int *)(param_1 + 0x280) == 0)) {
    iVar2 = 0x19;
    *(long *)(param_1 + 0x278) = lVar5;
    do {
      iVar4 = 0;
      lVar5 = param_1 + 0xf8;
      lVar6 = 0;
      do {
        lVar11 = lVar6;
        iVar3 = iVar4;
        if ((*(undefined8 **)(lVar5 + 0x10) != (undefined8 *)0x0) &&
           (iVar3 = (*(code *)**(undefined8 **)(lVar5 + 0x10))
                              (lVar5,*(undefined8 *)(param_1 + 0x278)), lVar11 = lVar5,
           iVar3 <= iVar4)) {
          lVar11 = lVar6;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        lVar5 = lVar5 + 0x18;
        lVar6 = lVar11;
      } while (lVar5 != param_1 + 0x278);
      if (lVar11 == 0) {
        FUN_71007961b0(*(undefined8 *)(param_1 + 0x278),1,&local_8);
        if (-1 < local_8) goto LAB_71007969f8;
        FUN_7100796050(param_1);
        goto LAB_71007969d0;
      }
      lVar5 = FUN_710080e9e0(1,0x90);
      if (lVar5 == 0) goto LAB_71007969d0;
      uVar9 = *(undefined8 *)(param_1 + 0x278);
      pcVar7 = *(code **)(*(long *)(lVar11 + 0x10) + 8);
      *(long *)(lVar5 + 0x18) = param_1;
      *(long *)(lVar5 + 8) = lVar11;
      *(undefined8 *)(lVar5 + 0x10) = uVar9;
      *(long *)(param_1 + 0x278) = lVar5;
      iVar4 = (*pcVar7)();
      if (iVar4 != 0) {
        FUN_7100795700(*(undefined8 *)(param_1 + 0x278));
        lVar5 = *(long *)(param_1 + 0x278);
        while (lVar5 != 0) {
          lVar6 = *(long *)(lVar5 + 0x10);
          FUN_710081c200(lVar5);
          *(long *)(param_1 + 0x278) = lVar6;
          lVar5 = lVar6;
        }
        goto LAB_71007969d0;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    FUN_71007a0da0(param_1,0x4f,"Input requires too many filters for decoding");
LAB_71007969d0:
    *(undefined4 *)(param_1 + 4) = 0x8000;
    return -0x1e;
  }
  do {
    lVar11 = lVar6;
    lVar6 = *(long *)(lVar11 + 0x10);
  } while (lVar6 != 0);
  *(long *)(lVar11 + 0x10) = lVar5;
LAB_71007969f8:
  if (*(long *)(param_1 + 0x818) == 0) {
    lVar5 = param_1 + 0x298;
    uVar12 = 0xffffffff;
    uVar10 = 0;
    *(long *)(param_1 + 0x818) = lVar5;
    iVar2 = -1;
    do {
      uVar1 = uVar12;
      iVar4 = iVar2;
      if (*(code **)(lVar5 + 0x10) != (code *)0x0) {
        iVar4 = (**(code **)(lVar5 + 0x10))(param_1,iVar2);
        if (iVar4 == -0x1e) goto LAB_7100796b9c;
        if (**(long **)(param_1 + 0x278) != 0) {
          FUN_71007964e0(*(long **)(param_1 + 0x278),0,0);
        }
        lVar5 = *(long *)(param_1 + 0x818);
        uVar1 = uVar10;
        if (iVar4 <= iVar2 && uVar12 != 0xffffffff) {
          uVar1 = uVar12;
          iVar4 = iVar2;
        }
      }
      uVar12 = uVar1;
      lVar5 = lVar5 + 0x58;
      uVar10 = uVar10 + 1;
      *(long *)(param_1 + 0x818) = lVar5;
      iVar2 = iVar4;
    } while (uVar10 != 0x10);
    if (uVar12 == 0xffffffff) {
      FUN_71007a0da0(param_1,0x4f,"No formats registered");
    }
    else {
      if (0 < iVar4) {
        *(ulong *)(param_1 + 0x818) = param_1 + (ulong)uVar12 * 0x58 + 0x298;
        goto LAB_7100796a00;
      }
      FUN_71007a0da0(param_1,0x4f,"Unrecognized archive format");
    }
LAB_7100796b9c:
    FUN_7100795700(*(undefined8 *)(param_1 + 0x278));
    *(undefined4 *)(param_1 + 4) = 0x8000;
    return -0x1e;
  }
LAB_7100796a00:
  *(undefined4 *)(param_1 + 4) = 2;
  FUN_7100795240(*(undefined8 *)(param_1 + 0x278),0);
  return 0;
}



// ===== FUN_7100796c00 @ 7100796c00 (size=252) =====

long FUN_7100796c00(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  if (*(char *)(param_2 + 7) != '\0') {
    lVar1 = FUN_710081cd80(*param_2,0,1);
    if ((-1 < lVar1) && (lVar2 = FUN_710081cd80(*param_2,param_3,1), -1 < lVar2)) {
      return lVar2 - lVar1;
    }
    *(undefined1 *)(param_2 + 7) = 0;
    piVar3 = (int *)FUN_710080e8e0();
    if (*piVar3 != 0x1d) {
      if (param_2[8] == 0) {
        puVar4 = (undefined4 *)FUN_710080e8e0();
        FUN_71007a0da0(param_1,*puVar4,"Error seeking in stdin");
      }
      else if (param_2[8] == 1) {
        puVar4 = (undefined4 *)FUN_710080e8e0();
        FUN_71007a0da0(param_1,*puVar4,"Error seeking in \'%s\'",param_2 + 9);
      }
      else {
        puVar4 = (undefined4 *)FUN_710080e8e0();
        FUN_71007a0da0(param_1,*puVar4,"Error seeking in \'%S\'",param_2 + 9);
      }
      return -1;
    }
  }
  return 0;
}



// ===== FUN_7100796d00 @ 7100796d00 (size=224) =====

long FUN_7100796d00(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  long lVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  *param_3 = *(undefined8 *)(param_2 + 4);
  do {
    lVar1 = FUN_71008084a0(*param_2,*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 2));
    if (-1 < lVar1) {
      return lVar1;
    }
    piVar2 = (int *)FUN_710080e8e0();
  } while (*piVar2 == 4);
  if (param_2[8] != 0) {
    if (param_2[8] != 1) {
      puVar3 = (undefined4 *)FUN_710080e8e0();
      FUN_71007a0da0(param_1,*puVar3,"Error reading \'%S\'",param_2 + 9);
      return lVar1;
    }
    puVar3 = (undefined4 *)FUN_710080e8e0();
    FUN_71007a0da0(param_1,*puVar3,"Error reading \'%s\'",param_2 + 9);
    return lVar1;
  }
  puVar3 = (undefined4 *)FUN_710080e8e0();
  FUN_71007a0da0(param_1,*puVar3,"Error reading stdin");
  return lVar1;
}



// ===== FUN_7100796de0 @ 7100796de0 (size=436) =====

undefined4 FUN_7100796de0(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  int *piVar6;
  short local_68;
  undefined2 local_66;
  uint local_64;
  
  FUN_71007a0d90();
  if (param_2[8] == 0) {
    piVar6 = (int *)&DAT_7100853d20;
    iVar1 = 0;
  }
  else {
    if (param_2[8] != 1) {
      FUN_71007a0da0(param_1,0xffffffff,"Unexpedted operation in archive_read_open_filename");
      return 0xffffffe2;
    }
    piVar6 = param_2 + 9;
    iVar1 = FUN_710080f840(piVar6,0x50000);
    FUN_71007a0e90();
    if (iVar1 < 0) {
      puVar4 = (undefined4 *)FUN_710080e8e0();
      FUN_71007a0da0(param_1,*puVar4,"Failed to open \'%s\'",piVar6);
      return 0xffffffe2;
    }
  }
  iVar2 = FUN_7100814220(iVar1,&local_68);
  if (iVar2 == 0) {
    if ((local_64 & 0xf000) == 0x8000) {
      FUN_7100795a90(param_1,(long)local_68,local_66);
      uVar5 = 0x10000;
      if (0x10000 < *(ulong *)(param_2 + 2)) {
        do {
          uVar5 = (uVar5 & 0xffffffff) * 2;
        } while (uVar5 < 0x4000000 && uVar5 < *(ulong *)(param_2 + 2));
      }
      *(ulong *)(param_2 + 2) = uVar5;
      lVar3 = FUN_710081c1c0(uVar5);
      if (lVar3 != 0) {
        *param_2 = iVar1;
        *(long *)(param_2 + 4) = lVar3;
        *(undefined1 *)(param_2 + 7) = 1;
        param_2[6] = local_64;
        return 0;
      }
    }
    else {
      lVar3 = FUN_710081c1c0(*(undefined8 *)(param_2 + 2));
      if (lVar3 != 0) {
        *param_2 = iVar1;
        *(long *)(param_2 + 4) = lVar3;
        param_2[6] = local_64;
        return 0;
      }
    }
    FUN_71007a0da0(param_1,0xc,"No memory");
  }
  else {
    puVar4 = (undefined4 *)FUN_710080e8e0();
    FUN_71007a0da0(param_1,*puVar4,"Can\'t stat \'%s\'",piVar6);
  }
  if (iVar1 != 0) {
    FUN_710081f680(iVar1);
  }
  return 0xffffffe2;
}



// ===== FUN_7100796fa0 @ 7100796fa0 (size=172) =====

long FUN_7100796fa0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = FUN_710081cd80(*param_2,param_3,param_4);
  if (lVar1 < 0) {
    if (param_2[8] == 0) {
      puVar2 = (undefined4 *)FUN_710080e8e0();
      FUN_71007a0da0(param_1,*puVar2,"Error seeking in stdin");
      lVar1 = -0x1e;
    }
    else if (param_2[8] == 1) {
      puVar2 = (undefined4 *)FUN_710080e8e0();
      FUN_71007a0da0(param_1,*puVar2,"Error seeking in \'%s\'",param_2 + 9);
      lVar1 = -0x1e;
    }
    else {
      puVar2 = (undefined4 *)FUN_710080e8e0();
      FUN_71007a0da0(param_1,*puVar2,"Error seeking in \'%S\'",param_2 + 9);
      lVar1 = -0x1e;
    }
  }
  return lVar1;
}



// ===== FUN_7100797050 @ 7100797050 (size=164) =====

void FUN_7100797050(int *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *param_1;
  if (-1 < iVar1) {
    if ((param_1[6] & 0xf000U) == 0x8000 || (param_1[6] & 0xb000U) == 0x2000) {
      iVar1 = param_1[8];
    }
    else {
      while (lVar2 = FUN_71008084a0(iVar1,*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 2))
            , 0 < lVar2) {
        iVar1 = *param_1;
      }
      iVar1 = param_1[8];
    }
    if (iVar1 != 0) {
      FUN_710081f680(*param_1);
      FUN_710081c200(*(undefined8 *)(param_1 + 4));
      param_1[4] = 0;
      param_1[5] = 0;
      *param_1 = -1;
      return;
    }
  }
  FUN_710081c200(*(undefined8 *)(param_1 + 4));
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = -1;
  return;
}



// ===== FUN_7100797100 @ 7100797100 (size=48) =====

void FUN_7100797100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_7100797050(param_2);
  FUN_7100796de0(param_1,param_3);
  return;
}



// ===== FUN_7100797130 @ 7100797130 (size=48) =====

undefined8 FUN_7100797130(undefined8 param_1,undefined8 param_2)

{
  FUN_7100797050(param_2);
  FUN_710081c200(param_2);
  return 0;
}



// ===== FUN_7100797160 @ 7100797160 (size=368) =====

undefined8 FUN_7100797160(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if (param_2 == (undefined8 *)0x0) {
    FUN_71007a0d90();
    pcVar5 = "";
    puVar7 = (undefined8 *)0x0;
    lVar4 = 0x28;
  }
  else {
    puVar6 = param_2 + 1;
    pcVar5 = (char *)*param_2;
    FUN_71007a0d90();
    if (pcVar5 != (char *)0x0) goto LAB_71007971b4;
    pcVar5 = "";
    lVar4 = 0x28;
    puVar7 = puVar6;
  }
  while( true ) {
    puVar2 = (undefined4 *)FUN_710080e9e0(1,lVar4);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_71007a0da0(param_1,0xc,"No memory");
      return 0xffffffe2;
    }
    FUN_710081b7c0(puVar2 + 9,pcVar5);
    *(undefined8 *)(puVar2 + 2) = param_3;
    *(undefined8 *)(puVar2 + 4) = 0;
    *puVar2 = 0xffffffff;
    puVar2[6] = 0;
    *(undefined1 *)(puVar2 + 7) = 0;
    puVar2[8] = (uint)(*pcVar5 != '\0');
    iVar1 = FUN_7100795e00(param_1,puVar2);
    if (iVar1 != 0) {
      return 0xffffffe2;
    }
    if (puVar7 == (undefined8 *)0x0) break;
    puVar6 = puVar7 + 1;
    pcVar5 = (char *)*puVar7;
    if ((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) break;
LAB_71007971b4:
    lVar4 = FUN_710081ce00(pcVar5);
    lVar4 = lVar4 + 0x28;
    puVar7 = puVar6;
  }
  FUN_7100795af0(param_1,FUN_7100796de0);
  FUN_7100795b40(param_1,FUN_7100796d00);
  FUN_7100795b90(param_1,FUN_7100796c00);
  FUN_7100795c30(param_1,FUN_7100797130);
  FUN_7100795c80(param_1,FUN_7100797100);
  FUN_7100795be0(param_1,FUN_7100796fa0);
  uVar3 = FUN_7100796870(param_1);
  return uVar3;
}



// ===== FUN_71007972d0 @ 71007972d0 (size=32) =====

void FUN_71007972d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_10;
  undefined8 uStack_8;
  
  uStack_8 = 0;
  local_10 = param_2;
  FUN_7100797160(param_1,&local_10);
  return;
}



// ===== FUN_7100797330 @ 7100797330 (size=104) =====

undefined8 FUN_7100797330(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  iVar2 = (int)*(undefined8 *)(param_1 + 0x38) + -1;
  if (-1 < iVar2) {
    lVar4 = (long)iVar2;
    iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
    if (iVar2 == 0) {
LAB_7100797348:
      return *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar4 * 8);
    }
    do {
      plVar1 = (long *)(*(long *)(param_1 + 0x18) + 8);
      while (lVar3 = *plVar1, plVar1 = plVar1 + 2, lVar3 != lVar4) {
        if (plVar1 == (long *)(*(long *)(param_1 + 0x18) + 0x18 + (ulong)(iVar2 - 1) * 0x10))
        goto LAB_7100797348;
      }
      lVar4 = lVar4 + -1;
    } while (-1 < (int)lVar4);
  }
  return 0;
}



// ===== FUN_71007973a0 @ 71007973a0 (size=1100) =====

ulong FUN_71007973a0(long param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  bool bVar10;
  uint *puVar11;
  undefined2 *puVar12;
  uint *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  uint *puVar23;
  long lVar24;
  uint *puVar25;
  ulong uVar26;
  byte *pbVar27;
  byte *pbVar28;
  byte *pbVar29;
  ushort *puVar30;
  ulong uVar31;
  ulong uVar32;
  undefined4 local_8;
  undefined2 *puVar13;
  
  lVar24 = *(long *)(param_1 + 0x4e48);
  pbVar28 = (byte *)(*(long *)(param_1 + 0x4e58) +
                    (*(long *)(param_1 + 0x4e70) - *(long *)(param_1 + 0x4e88)));
  pbVar1 = (byte *)(*(long *)(param_1 + 0x4e58) + *(long *)(param_1 + 0x4e70));
  lVar22 = *(long *)(param_1 + 0x4e50);
  lVar18 = *(long *)(param_1 + 0x4e60);
  lVar16 = *(long *)(param_1 + 0x4e68);
  uVar32 = *(ulong *)(param_1 + 0x4e78);
  uVar31 = *(ulong *)(param_1 + 0x4e80);
  lVar19 = *(long *)(param_1 + 0x4e90);
  lVar20 = *(long *)(param_1 + 0x4ea0);
  uVar21 = *(ulong *)(param_1 + 0x4ea8);
  if (*(int *)(param_1 + 0x4e1c) == 0) {
    *(undefined1 *)(param_1 + 0x50b4) = 0;
    puVar12 = (undefined2 *)(param_1 + 0x4eb0);
    do {
      puVar13 = puVar12 + 1;
      *puVar12 = 0x400;
      puVar12 = puVar13;
    } while ((undefined2 *)(param_1 + 0x50b4) != puVar13);
    pbVar29 = pbVar28 + 5;
    *(undefined8 *)(param_1 + 0x50b8) = 0xffffffff;
    pbVar27 = pbVar28;
    do {
      if (pbVar1 == pbVar27) {
        return 0xffffffffffffffe7;
      }
      pbVar28 = pbVar27 + 1;
      *(uint *)(param_1 + 0x50bc) = (uint)*pbVar27 | *(int *)(param_1 + 0x50bc) << 8;
      pbVar27 = pbVar28;
    } while (pbVar28 != pbVar29);
    *(undefined4 *)(param_1 + 0x4e1c) = 1;
  }
  if (*(long *)(param_1 + 20000) == 0 || param_3 == 0) {
    if (param_3 == 0) {
      return 0;
    }
    uVar26 = 0;
  }
  else {
    uVar26 = 0;
    do {
      uVar26 = uVar26 + 1;
      *(undefined1 *)(param_2 + -1 + uVar26) = *(undefined1 *)(param_1 + 0x4e27 + uVar26);
      lVar9 = *(long *)(param_1 + 20000) + -1;
      *(long *)(param_1 + 20000) = lVar9;
    } while ((lVar9 != 0 && uVar26 <= param_3) && (lVar9 == 0 || param_3 != uVar26));
  }
  iVar2 = *(int *)(param_1 + 0x4e1c);
  puVar23 = (uint *)(lVar22 + (lVar16 - uVar31));
  uVar15 = param_3 - uVar26;
  if (uVar21 < param_3 - uVar26) {
    uVar15 = uVar21;
  }
  lVar19 = lVar19 + (lVar20 - uVar21);
  lVar16 = 0;
  puVar11 = (uint *)(lVar24 + (lVar18 - uVar32));
joined_r0x007100797518:
  bVar10 = uVar15 == 0;
  pbVar29 = pbVar28;
  lVar18 = lVar16;
  if (iVar2 == 1) goto LAB_71007975b8;
  do {
    pbVar28 = pbVar29;
    if (bVar10 || uVar26 == param_3) {
LAB_7100797754:
      lVar18 = lVar16;
      lVar16 = *(long *)(param_1 + 0x50c0);
      goto LAB_7100797758;
    }
    *(undefined4 *)(param_1 + 0x4e1c) = 1;
    lVar18 = lVar16 + 1;
    cVar4 = *(char *)(lVar19 + lVar16);
    puVar30 = (ushort *)(param_1 + 0x50b2);
    if (cVar4 == -0x17) {
      puVar30 = (ushort *)(param_1 + 0x50b0);
    }
    if (cVar4 == -0x18) {
      puVar30 = (ushort *)(param_1 + 0x4eb0 + (ulong)*(byte *)(param_1 + 0x50b4) * 2);
    }
    uVar6 = *puVar30;
    uVar3 = *(uint *)(param_1 + 0x50bc);
    uVar7 = (*(uint *)(param_1 + 0x50b8) >> 0xb) * (uint)uVar6;
    if (uVar7 <= uVar3) break;
    *(uint *)(param_1 + 0x50b8) = uVar7;
    *puVar30 = uVar6 + (short)(0x800 - uVar6 >> 5);
    if (uVar7 < 0x1000000) {
      if (pbVar29 == pbVar1) {
        return 0xffffffffffffffe7;
      }
      *(uint *)(param_1 + 0x50b8) = uVar7 * 0x100;
      pbVar28 = pbVar29 + 1;
      *(uint *)(param_1 + 0x50bc) = (uint)*pbVar29 | uVar3 << 8;
    }
    *(char *)(param_1 + 0x50b4) = cVar4;
    uVar15 = uVar21 - lVar18;
    if (param_3 - uVar26 < uVar21 - lVar18) {
      uVar15 = param_3 - uVar26;
    }
LAB_71007975b8:
    lVar20 = uVar26 + 1;
    if (uVar15 == 0) {
      lVar16 = *(long *)(param_1 + 0x50c0);
      goto LAB_7100797758;
    }
    lVar22 = uVar26 - lVar18;
    lVar16 = lVar18;
    while( true ) {
      bVar5 = *(byte *)(lVar19 + lVar16);
      uVar26 = (lVar16 - lVar18) + lVar20;
      *(byte *)(param_2 + lVar22 + lVar16) = bVar5;
      if (((bVar5 & 0xfe) == 0xe8) ||
         ((*(char *)(param_1 + 0x50b4) == '\x0f' && ((bVar5 & 0xf0) == 0x80)))) break;
      lVar16 = lVar16 + 1;
      *(byte *)(param_1 + 0x50b4) = bVar5;
      if (lVar18 + uVar15 == lVar16) goto LAB_7100797754;
    }
    bVar10 = false;
    *(undefined4 *)(param_1 + 0x4e1c) = 2;
    pbVar29 = pbVar28;
  } while( true );
  uVar8 = *(uint *)(param_1 + 0x50b8) - uVar7;
  *(uint *)(param_1 + 0x50b8) = uVar8;
  *(uint *)(param_1 + 0x50bc) = uVar3 - uVar7;
  *puVar30 = uVar6 - (uVar6 >> 5);
  if (uVar8 < 0x1000000) {
    if (pbVar29 == pbVar1) {
      return 0xffffffffffffffe7;
    }
    *(uint *)(param_1 + 0x50b8) = uVar8 * 0x100;
    pbVar28 = pbVar29 + 1;
    *(uint *)(param_1 + 0x50bc) = (uint)*pbVar29 | (uVar3 - uVar7) * 0x100;
  }
  if (cVar4 == -0x18) {
    if (uVar32 < 4) {
      return 0xffffffffffffffe7;
    }
    uVar32 = uVar32 - 4;
    puVar25 = puVar11 + 1;
    puVar14 = puVar11;
  }
  else {
    if (uVar31 < 4) {
      return 0xffffffffffffffe7;
    }
    uVar31 = uVar31 - 4;
    puVar14 = puVar23;
    puVar23 = puVar23 + 1;
    puVar25 = puVar11;
  }
  lVar16 = *(long *)(param_1 + 0x50c0);
  uVar3 = (*puVar14 & 0xff00ff00) >> 8 | (*puVar14 & 0xff00ff) << 8;
  local_8 = ((uVar3 >> 0x10 | uVar3 << 0x10) - (int)uVar26) + (-4 - (int)lVar16);
  *(char *)(param_1 + 0x50b4) = (char)((uint)local_8 >> 0x18);
  uVar15 = 0;
  if (param_3 <= uVar26) {
    uVar21 = 4;
    goto LAB_7100797730;
  }
  uVar17 = ~uVar26;
  do {
    uVar26 = uVar26 + 1;
    uVar3 = (int)uVar15 + 1;
    uVar15 = (ulong)uVar3;
    *(undefined1 *)(param_2 + -1 + uVar26) = *(undefined1 *)((long)&local_8 + uVar26 + uVar17);
  } while ((uVar3 != 4 && uVar26 <= param_3) && (uVar3 == 4 || param_3 != uVar26));
  if (uVar3 != 4) {
    lVar16 = *(long *)(param_1 + 0x50c0);
    uVar21 = (ulong)(4 - uVar3);
LAB_7100797730:
    *(ulong *)(param_1 + 20000) = uVar21;
    FUN_710080f900(param_1 + 0x4e28,(long)&local_8 + uVar15,4 - (int)uVar15);
LAB_7100797758:
    *(ulong *)(param_1 + 0x4e78) = uVar32;
    *(ulong *)(param_1 + 0x4e80) = uVar31;
    *(long *)(param_1 + 0x4e88) = (long)pbVar1 - (long)pbVar28;
    *(ulong *)(param_1 + 0x50c0) = uVar26 + lVar16;
    *(long *)(param_1 + 0x4ea8) = *(long *)(param_1 + 0x4ea8) - lVar18;
    return uVar26;
  }
  iVar2 = *(int *)(param_1 + 0x4e1c);
  lVar16 = lVar18;
  puVar11 = puVar25;
  uVar15 = param_3 - uVar26;
  if (uVar21 - lVar18 < param_3 - uVar26) {
    uVar15 = uVar21 - lVar18;
  }
  goto joined_r0x007100797518;
}



// ===== FUN_71007977f0 @ 71007977f0 (size=184) =====

void FUN_71007977f0(undefined8 param_1,int param_2)

{
  if (param_2 == 7) {
    FUN_71007a0da0(param_1,0xffffffff,"Lzma library error: format not recognized");
    return;
  }
  if (param_2 < 8) {
    if (param_2 == 5) {
      FUN_71007a0da0(param_1,0xc,"Lzma library error: Cannot allocate memory");
      return;
    }
    if (param_2 == 6) {
      FUN_71007a0da0(param_1,0xc,"Lzma library error: Out of memory");
      return;
    }
    if (param_2 == 1) {
      return;
    }
  }
  else {
    if (param_2 == 9) {
      FUN_71007a0da0(param_1,0xffffffff,"Lzma library error: Corrupted input data");
      return;
    }
    if (param_2 == 10) {
      FUN_71007a0da0(param_1,0xffffffff,"Lzma library error:  No progress is possible");
      return;
    }
    if (param_2 == 8) {
      FUN_71007a0da0(param_1,0xffffffff,"Lzma library error: Invalid options");
      return;
    }
  }
  FUN_71007a0da0(param_1,0xffffffff,"Lzma decompression failed:  Unknown error");
  return;
}



