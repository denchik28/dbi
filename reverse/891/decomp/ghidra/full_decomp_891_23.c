// ===== FUN_710081f600 @ 710081f600 (size=40) =====

long FUN_710081f600(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1;
  if (*param_1 == 0) {
    return 0;
  }
  do {
    piVar1 = piVar1 + 1;
  } while (*piVar1 != 0);
  return (long)piVar1 - (long)param_1 >> 2;
}



// ===== FUN_710081f640 @ 710081f640 (size=56) =====

void FUN_710081f640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_7100829080(uVar1,param_1,param_2,0xffffffffffffffff,param_3,param_4);
  return;
}



// ===== FUN_710081f680 @ 710081f680 (size=28) =====

void FUN_710081f680(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_7100834ec0(uVar1,param_1);
  return;
}



// ===== FUN_710081f6a0 @ 710081f6a0 (size=40) =====

void FUN_710081f6a0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_7100834b00();
  FUN_710081de40(param_1,lVar1 + 0xa4);
  return;
}



// ===== FUN_710081f6e0 @ 710081f6e0 (size=112) =====

ulong FUN_710081f6e0(long param_1,long *param_2)

{
  int iVar1;
  byte *pbVar2;
  ulong uVar3;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x48) == 0)) {
    FUN_710080d840();
  }
  iVar1 = FUN_710081ca20(param_1,param_2);
  if (iVar1 == 0) {
    *(int *)(param_2 + 1) = (int)param_2[1] + -1;
    pbVar2 = (byte *)*param_2;
    *param_2 = (long)(pbVar2 + 1);
    uVar3 = (ulong)*pbVar2;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



// ===== FUN_710081f760 @ 710081f760 (size=172) =====

void FUN_710081f760(ulong *param_1,ulong *param_2,ulong param_3)

{
  char cVar1;
  ulong uVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar5;
  
  bVar3 = (((ulong)param_2 | (ulong)param_1) & 7) != 0;
  uVar2 = param_3;
  if ((!bVar3 && 6 < param_3) && (bVar3 || param_3 != 7)) {
    do {
      uVar7 = *param_2;
      uVar2 = param_3;
      if ((uVar7 + 0xfefefefefefefeff & (uVar7 ^ 0xffffffffffffffff) & 0x8080808080808080) != 0)
      break;
      param_3 = param_3 - 8;
      puVar6 = param_1 + 1;
      *param_1 = uVar7;
      param_2 = param_2 + 1;
      param_1 = puVar6;
      uVar2 = param_3;
    } while (7 < param_3);
  }
  do {
    puVar6 = param_1;
    uVar7 = uVar2;
    if (uVar7 == 0) {
      return;
    }
    cVar1 = *(char *)((long)param_2 + (param_3 - uVar7));
    *(char *)puVar6 = cVar1;
    uVar2 = uVar7 - 1;
    param_1 = (ulong *)((long)puVar6 + 1);
  } while (cVar1 != '\0');
  puVar5 = (ulong *)((long)puVar6 + 1);
  if (uVar7 - 1 == 0) {
    return;
  }
  do {
    puVar4 = (ulong *)((long)puVar5 + 1);
    *(char *)puVar5 = '\0';
    puVar5 = puVar4;
  } while (puVar4 != (ulong *)((long)puVar6 + uVar7));
  return;
}



// ===== thunk_FUN_710082d4c0 @ 710081f820 (size=4) =====

long thunk_FUN_710082d4c0(undefined4 *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((param_1 != (undefined4 *)0x0) && (*(long *)(param_1 + 0x12) == 0)) {
    FUN_710080d840();
  }
  if (((*(uint *)((long)param_2 + 0xb4) & 1) == 0) && ((*(ushort *)(param_2 + 2) >> 9 & 1) == 0)) {
    FUN_7100836200(param_2 + 0x14);
  }
  if ((code *)param_2[9] == (code *)0x0) {
    *param_1 = 0x1d;
LAB_710082d600:
    if (((*(uint *)((long)param_2 + 0xb4) & 1) == 0) && ((*(ushort *)(param_2 + 2) >> 9 & 1) == 0))
    {
      FUN_7100836220(param_2 + 0x14);
      lVar2 = -1;
    }
    else {
      lVar2 = -1;
    }
  }
  else {
    uVar1 = (uint)(short)param_2[2];
    if ((((param_2[2] & 0xcU) == 8) && (*param_2 != 0)) && (0 < *param_2 - param_2[3])) {
      uVar3 = 2;
      if ((uVar1 >> 8 & 1) == 0) {
        if ((uVar1 >> 0xc & 1) != 0) goto LAB_710082d56c;
LAB_710082d50c:
        uVar3 = 1;
      }
      lVar2 = (*(code *)param_2[9])(param_1,param_2[6],0,uVar3);
      if (lVar2 == -1) goto LAB_710082d600;
      uVar1 = (uint)(short)param_2[2];
      if (((uint)(int)(short)param_2[2] >> 2 & 1) == 0) goto LAB_710082d574;
LAB_710082d53c:
      lVar2 = lVar2 - (int)param_2[1];
      if (param_2[0xb] != 0) {
        lVar2 = lVar2 - (int)param_2[0xe];
      }
    }
    else {
      if ((uVar1 >> 0xc & 1) == 0) goto LAB_710082d50c;
LAB_710082d56c:
      lVar2 = param_2[0x12];
      if ((uVar1 >> 2 & 1) != 0) goto LAB_710082d53c;
LAB_710082d574:
      if (((uVar1 >> 3 & 1) != 0) && (*param_2 != 0)) {
        lVar2 = lVar2 + (*param_2 - param_2[3]);
      }
    }
    if (((*(uint *)((long)param_2 + 0xb4) & 1) == 0) && ((uVar1 >> 9 & 1) == 0)) {
      FUN_7100836220(param_2 + 0x14);
      return lVar2;
    }
  }
  return lVar2;
}



// ===== FUN_710081f840 @ 710081f840 (size=28) =====

void FUN_710081f840(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  thunk_FUN_710082d4c0(uVar1,param_1);
  return;
}



// ===== FUN_710081f860 @ 710081f860 (size=420) =====

ulong FUN_710081f860(undefined4 *param_1,byte *param_2,undefined8 *param_3,uint param_4)

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
    goto LAB_710081f8b4;
  }
  if ((int)uVar7 == 0x30) {
    if ((*pbVar9 & 0xdf) == 0x58) {
      uVar7 = (ulong)pbVar9[1];
      uVar13 = 0x10;
      pbVar9 = pbVar9 + 2;
      param_4 = 0x10;
      uVar12 = 0xf;
      uVar11 = 0xfffffffffffffff;
      goto LAB_710081f8b4;
    }
    if (param_4 == 0) {
      uVar13 = 8;
      uVar12 = 7;
      param_4 = 8;
      uVar11 = 0x1fffffffffffffff;
      goto LAB_710081f8b4;
    }
  }
  else if (param_4 == 0) {
    uVar13 = 10;
    uVar12 = 5;
    param_4 = 10;
    uVar11 = 0x1999999999999999;
    goto LAB_710081f8b4;
  }
  uVar13 = 0x10;
  uVar12 = 0xf;
  param_4 = 0x10;
  uVar11 = 0xfffffffffffffff;
LAB_710081f8b4:
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
LAB_710081f92c:
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
    if ((int)param_4 <= (int)uVar2) goto LAB_710081f92c;
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



// ===== FUN_710081fa20 @ 710081fa20 (size=52) =====

void FUN_710081fa20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_7100834b00();
  FUN_710081f860(param_1,param_2,param_3,param_4);
  return;
}



// ===== FUN_710081fa60 @ 710081fa60 (size=64) =====

void FUN_710081fa60(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_7100834b00();
  FUN_710081f860(uVar1,param_1,param_2,param_3);
  return;
}



// ===== FUN_710081faa0 @ 710081faa0 (size=192) =====

undefined8 FUN_710081faa0(undefined4 *param_1,undefined4 *param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 *local_b8;
  int local_ac;
  undefined2 local_a8;
  undefined2 local_a6;
  undefined4 *local_a0;
  int local_98;
  undefined4 local_4;
  
  if (param_3 < 0x20000000) {
    local_a8 = 0x208;
    local_4 = 0;
    local_b8 = param_2;
    local_a0 = param_2;
    if (param_3 == 0) {
      local_ac = 0;
      local_a6 = 0xffff;
      local_98 = 0;
      FUN_7100829c84(param_1,&local_b8,param_4);
    }
    else {
      local_ac = ((int)param_3 + -1) * 4;
      local_a6 = 0xffff;
      local_98 = local_ac;
      uVar1 = FUN_7100829c84(param_1,&local_b8,param_4);
      *local_b8 = 0;
      if ((ulong)(long)(int)uVar1 < param_3) {
        return uVar1;
      }
    }
  }
  *param_1 = 0x8b;
  return 0xffffffff;
}



// ===== FUN_710081fb60 @ 710081fb60 (size=72) =====

void FUN_710081fb60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_710081faa0(uVar1,param_1,param_2,param_3);
  return;
}



// ===== FUN_710081fbc0 @ 710081fbc0 (size=28) =====

void FUN_710081fbc0(long param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined4 *)(param_1 + lVar1 * 4) = param_2;
      lVar1 = lVar1 + 1;
    } while (param_3 != lVar1);
  }
  return;
}



// ===== FUN_710081fbe0 @ 710081fbe0 (size=16) =====

void FUN_710081fbe0(void)

{
  FUN_71008286a0();
  return;
}



// ===== FUN_710081fc00 @ 710081fc00 (size=56) =====

void FUN_710081fc00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_71008286a0(uVar1,param_1,param_2,0xffffffffffffffff,param_3,param_4);
  return;
}



// ===== thunk_FUN_710080c900 @ 710081fc40 (size=4) =====

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



// ===== FUN_710081fc44 @ 710081fc44 (size=1936) =====

long FUN_710081fc44(undefined8 param_1,int param_2,byte *param_3,ulong *param_4,uint *param_5,
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
      if (iVar9 < 1) goto LAB_710082020c;
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
      goto LAB_71008201fc;
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
            if (bVar4 == 0x6a) goto LAB_710081fe08;
            if (bVar4 != 0x4c) goto LAB_710081fdf0;
          }
        }
        else {
          if ((bVar4 != 0x74) && (uVar16 != 0x7a)) {
LAB_710081fdf0:
            if (pbVar13[1] == 0x6c) {
              iVar8 = 1;
              pbVar21 = pbVar13 + 2;
              break;
            }
          }
LAB_710081fe08:
          bVar7 = true;
        }
        break;
      case 4:
        uVar1 = (uint)uVar22 & 0x1f;
        uVar22 = (ulong)uVar1;
        if (uVar16 == 0x61) {
switchD_710081fe4c_caseD_0:
          if (iVar9 != -1) {
            uVar17 = 4;
            goto LAB_710081fecc;
          }
LAB_71008200a0:
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
          if (0x17 < (uVar16 - 0x41 & 0xff)) goto switchD_710081fe4c_caseD_1;
          switch(uVar16 - 0x41) {
          case 0:
          case 4:
          case 5:
          case 6:
            goto switchD_710081fe4c_caseD_0;
          case 2:
switchD_710081fe4c_caseD_2:
            if (iVar9 == -1) goto LAB_710081ff9c;
            uVar17 = 6;
            goto LAB_710081fecc;
          case 3:
          case 0xe:
          case 0x14:
switchD_710081fe4c_caseD_3:
            if (iVar9 != -1) {
              uVar17 = 1;
              goto LAB_710081fecc;
            }
            goto LAB_710081ff00;
          case 0x12:
switchD_710081fe4c_caseD_12:
            if (iVar9 != -1) {
              uVar17 = 3;
              goto LAB_710081fecc;
            }
            goto LAB_710082004c;
          case 0x17:
switchD_710081fe4c_caseD_17:
            if (bVar7 != false) goto switchD_710081fe4c_caseD_3;
            uVar17 = (ulong)(uint)(iVar8 << 1);
          }
switchD_710081fe4c_caseD_1:
          if (iVar9 == -1) {
            uVar16 = (uint)uVar17;
            if (uVar16 == 6) {
LAB_710081ff9c:
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
              if (uVar16 != 1) goto LAB_710081fff8;
LAB_710081ff00:
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
              if (uVar16 != 3) goto LAB_71008200a0;
LAB_710082004c:
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
LAB_710081fecc:
            param_7[iVar9] = (int)uVar17;
          }
        }
        else {
          if (uVar16 != 99) {
            uVar16 = uVar16 - 100 & 0xff;
            if (uVar16 < 0x15) {
              uVar11 = 1L << ((ulong)uVar16 & 0x3f);
              if ((uVar11 & 0x120821) != 0) goto switchD_710081fe4c_caseD_17;
              if ((uVar11 & 0x9400) != 0) goto switchD_710081fe4c_caseD_12;
              if ((uVar11 & 0xe) != 0) goto switchD_710081fe4c_caseD_0;
            }
            goto switchD_710081fe4c_caseD_1;
          }
          uVar17 = (ulong)bVar7 << 4;
          if (bVar7) goto switchD_710081fe4c_caseD_2;
          if (iVar9 != -1) goto LAB_710081fecc;
LAB_710081fff8:
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
LAB_71008201fc:
      pbVar13 = pbVar21;
    } while ((int)uVar18 != 0xb);
  }
LAB_710082020c:
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
LAB_710082031c:
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
      if (iVar9 != 5) goto LAB_710082031c;
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



// ===== FUN_71008203d4 @ 71008203d4 (size=10380) =====

/* WARNING: Type propagation algorithm not settling */

int FUN_71008203d4(undefined4 *param_1,long *param_2,byte *param_3,ulong *param_4)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  undefined4 *puVar15;
  short *psVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong *puVar19;
  ushort *puVar20;
  byte *pbVar21;
  long *plVar22;
  undefined2 *puVar23;
  undefined1 *puVar24;
  int *piVar25;
  uint *puVar26;
  undefined4 uVar27;
  byte *pbVar28;
  ulong uVar29;
  uint uVar30;
  long lVar31;
  long *plVar32;
  byte *pbVar33;
  uint uVar34;
  int iVar35;
  code *pcVar36;
  uint uVar37;
  char *pcVar38;
  uint uVar39;
  char *pcVar40;
  uint uVar41;
  ulong local_440;
  int local_42c;
  uint local_428;
  byte *local_420;
  long local_418;
  char *local_410;
  undefined8 local_408;
  undefined *local_3d8;
  char local_3b1;
  undefined2 local_3b0;
  uint local_3a8;
  int local_3a4;
  undefined8 local_3a0;
  undefined1 auStack_398 [8];
  undefined1 auStack_390 [8];
  char *local_388;
  long *local_380;
  int local_378;
  long local_370;
  char local_368 [98];
  char local_306 [6];
  undefined4 local_300 [32];
  long local_280 [16];
  ulong local_200 [64];
  
  FUN_7100808340(auStack_398,0,8);
  if (((*(ushort *)(param_2 + 2) >> 7 & 1) != 0) && (param_2[3] == 0)) {
    lVar14 = FUN_7100814ca0(param_1,0x40);
    *param_2 = lVar14;
    param_2[3] = lVar14;
    if (lVar14 == 0) {
      *param_1 = 0xc;
      return -1;
    }
    *(undefined4 *)(param_2 + 4) = 0x40;
  }
  local_300[0] = 0xffffffff;
  local_440 = 0;
  local_42c = 0;
  local_420 = (byte *)0x0;
  local_418 = 0;
  local_410 = (char *)0x0;
  local_408 = 0;
  local_3d8 = &DAT_7100af4978;
  local_3a8 = 0;
  local_3a0 = 0;
  local_378 = 0;
  local_370 = 0;
  pbVar21 = param_3;
  local_380 = local_280;
  plVar32 = local_280;
LAB_71008204c0:
  do {
    lVar14 = FUN_7100834b00();
    puVar1 = *(undefined **)(lVar14 + 0x40);
    if (*(undefined **)(lVar14 + 0x40) == (undefined *)0x0) {
      puVar1 = local_3d8;
    }
    pcVar36 = *(code **)(puVar1 + 0xe8);
    iVar10 = FUN_7100809520();
    iVar10 = (*pcVar36)(param_1,&local_3a4,pbVar21,(long)iVar10,auStack_398);
    if (iVar10 == 0) {
LAB_710082052c:
      iVar35 = (int)pbVar21 - (int)param_3;
      if ((int)pbVar21 != (int)param_3) {
        *plVar32 = (long)param_3;
        plVar32[1] = (long)iVar35;
        local_370 = local_370 + iVar35;
        local_378 = local_378 + 1;
        if (local_378 < 8) {
          plVar32 = plVar32 + 2;
        }
        else {
          iVar11 = FUN_7100825060(param_1,param_2,&local_380);
          plVar32 = local_280;
          if (iVar11 != 0) goto LAB_7100822c2c;
        }
        local_42c = local_42c + iVar35;
      }
      if (iVar10 != 0) {
        uVar41 = 0;
        bVar9 = false;
        bVar7 = false;
        bVar6 = false;
        bVar5 = false;
        bVar4 = false;
        bVar3 = false;
        bVar2 = false;
        uVar37 = 0;
        uVar12 = 0xffffffff;
        local_3b1 = '\0';
        uVar29 = local_440;
        pbVar28 = pbVar21 + 1;
LAB_71008205bc:
        bVar8 = false;
        param_3 = pbVar28;
LAB_71008205c0:
        uVar39 = local_3a8;
        uVar30 = (uint)local_440;
        uVar34 = (uint)*param_3;
        param_3 = param_3 + 1;
        uVar13 = uVar37;
LAB_71008205c4:
        uVar37 = uVar13;
        iVar10 = (int)uVar29;
        pbVar33 = param_3;
        switch(uVar34) {
        case 0x20:
          if (local_3b1 == '\0') {
            local_3b1 = ' ';
          }
          goto LAB_71008205c0;
        default:
          if (uVar34 == 0) goto LAB_7100822bdc;
          pcVar38 = local_368;
          pcVar40 = (char *)0x0;
          uVar12 = 1;
          local_428 = 0;
          local_3b1 = '\0';
          local_368[0] = (char)uVar34;
          goto LAB_71008226d4;
        case 0x23:
          bVar6 = true;
          goto LAB_71008205c0;
        case 0x27:
          lVar14 = FUN_710080fb60(param_1);
          local_408 = *(undefined8 *)(lVar14 + 8);
          local_418 = FUN_710081ce00();
          lVar14 = FUN_710080fb60(param_1);
          local_420 = *(byte **)(lVar14 + 0x10);
          if ((local_418 != 0 && local_420 != (byte *)0x0) && (*local_420 != 0)) {
            bVar7 = true;
          }
          goto LAB_71008205c0;
        case 0x2a:
          uVar13 = (uint)*param_3;
          if (9 < *param_3 - 0x30) {
            uVar13 = uVar30 + 1;
            if ((int)uVar30 < (int)local_3a8) {
              uVar37 = *(uint *)((long)local_200 +
                                (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              uVar30 = uVar13;
            }
            else {
              puVar26 = (uint *)*param_4;
              iVar10 = (int)param_4[3];
              if ((int)local_3a8 < 0x20) {
                if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                  puVar26 = (uint *)(param_4[1] + (long)iVar10);
                }
                else {
                  *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                }
                uVar37 = *puVar26;
                *(uint *)((long)local_200 +
                         (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | (ulong)local_3a8 << 4))
                     = uVar37;
                uVar30 = uVar13;
                local_3a8 = local_3a8 + 1;
              }
              else {
                if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                  puVar26 = (uint *)(param_4[1] + (long)iVar10);
                }
                else {
                  *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                }
                uVar37 = *puVar26;
                uVar30 = uVar13;
              }
            }
            goto LAB_71008207ac;
          }
          iVar10 = 0;
          pbVar28 = param_3 + 1;
          do {
            iVar10 = (uVar13 - 0x30) + iVar10 * 10;
            pbVar33 = pbVar28 + 1;
            uVar13 = (uint)*pbVar28;
            pbVar28 = pbVar33;
          } while (uVar13 - 0x30 < 10);
          pbVar28 = param_3;
          if (uVar13 == 0x24) goto code_r0x0071008206a8;
          goto LAB_71008205bc;
        case 0x2b:
          local_3b1 = '+';
          goto LAB_71008205c0;
        case 0x2d:
          goto switchD_71008205e0_caseD_2d;
        case 0x2e:
          pbVar28 = param_3 + 1;
          uVar34 = (uint)*param_3;
          if (uVar34 != 0x2a) {
            uVar12 = 0;
            param_3 = pbVar28;
            while (uVar34 - 0x30 < 10) {
              uVar12 = (uVar34 - 0x30) + uVar12 * 10;
              uVar34 = (uint)*param_3;
              param_3 = param_3 + 1;
            }
            uVar13 = uVar37;
            if ((int)uVar12 < 0) {
              uVar12 = 0xffffffff;
            }
            goto LAB_71008205c4;
          }
          uVar13 = (uint)param_3[1];
          if (9 < param_3[1] - 0x30) {
            local_440 = (ulong)(uVar30 + 1);
            if ((int)uVar30 < (int)local_3a8) {
              uVar12 = *(uint *)((long)local_200 +
                                (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              param_3 = pbVar28;
            }
            else {
              puVar26 = (uint *)*param_4;
              iVar10 = (int)param_4[3];
              if ((int)local_3a8 < 0x20) {
                if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                  puVar26 = (uint *)(param_4[1] + (long)iVar10);
                }
                else {
                  *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                }
                uVar12 = *puVar26;
                *(uint *)((long)local_200 +
                         (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | (ulong)local_3a8 << 4))
                     = uVar12;
                param_3 = pbVar28;
                local_3a8 = local_3a8 + 1;
              }
              else {
                if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                  puVar26 = (uint *)(param_4[1] + (long)iVar10);
                }
                else {
                  *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                }
                uVar12 = *puVar26;
                param_3 = pbVar28;
              }
            }
            goto LAB_7100820928;
          }
          iVar10 = 0;
          pbVar33 = param_3 + 2;
          do {
            iVar10 = (uVar13 - 0x30) + iVar10 * 10;
            param_3 = pbVar33 + 1;
            uVar13 = (uint)*pbVar33;
            pbVar33 = param_3;
          } while (uVar13 - 0x30 < 10);
          if (uVar13 == 0x24) goto LAB_7100820828;
          goto LAB_71008205bc;
        case 0x30:
          uVar41 = uVar41 | 0x80;
          goto LAB_71008205c0;
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
          goto switchD_71008205e0_caseD_31;
        case 0x43:
        case 99:
          pcVar38 = local_368;
          if ((uVar34 == 0x43) || (bVar2)) {
            FUN_7100808340(&local_388,0,8);
            if (bVar8) {
              if (iVar10 < (int)uVar39) {
                uVar27 = *(undefined4 *)
                          ((long)local_200 + (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4))
                ;
              }
              else {
                puVar15 = (undefined4 *)
                          FUN_710081fc44(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200,
                                         local_300,&local_3a0);
                uVar27 = *puVar15;
              }
            }
            else {
              local_440 = (ulong)(uVar30 + 1);
              if ((int)uVar30 < (int)uVar39) {
                uVar27 = *(undefined4 *)
                          ((long)local_200 + (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4))
                ;
              }
              else {
                puVar15 = (undefined4 *)*param_4;
                iVar10 = (int)param_4[3];
                if ((int)uVar39 < 0x20) {
                  local_3a8 = uVar39 + 1;
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar15 = (undefined4 *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar15 + 0xbU & 0xfffffffffffffff8;
                  }
                  uVar27 = *puVar15;
                  *(undefined4 *)
                   ((long)local_200 +
                   (-(ulong)(uVar39 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar39 << 4)) = uVar27;
                }
                else {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar15 = (undefined4 *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar15 + 0xbU & 0xfffffffffffffff8;
                  }
                  uVar27 = *puVar15;
                }
              }
            }
            uVar12 = FUN_7100816a40(param_1,pcVar38,uVar27,&local_388);
            if (uVar12 == 0xffffffff) goto LAB_7100821c00;
          }
          else {
            if (bVar8) {
              if (iVar10 < (int)local_3a8) {
                local_368[0] = *(char *)((long)local_200 +
                                        (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              }
              else {
                pcVar40 = (char *)FUN_710081fc44(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200
                                                 ,local_300,&local_3a0);
                local_368[0] = *pcVar40;
              }
            }
            else {
              local_440 = (ulong)(uVar30 + 1);
              if ((int)uVar30 < (int)local_3a8) {
                local_368[0] = *(char *)((long)local_200 +
                                        (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              }
              else {
                pcVar40 = (char *)*param_4;
                iVar10 = (int)param_4[3];
                if ((int)local_3a8 < 0x20) {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    pcVar40 = (char *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (ulong)(pcVar40 + 0xb) & 0xfffffffffffffff8;
                  }
                  uVar27 = *(undefined4 *)pcVar40;
                  *(undefined4 *)
                   ((long)local_200 +
                   (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | (ulong)local_3a8 << 4)) =
                       uVar27;
                  local_368[0] = (char)uVar27;
                  local_3a8 = local_3a8 + 1;
                }
                else {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    pcVar40 = (char *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (ulong)(pcVar40 + 0xb) & 0xfffffffffffffff8;
                  }
                  local_368[0] = *pcVar40;
                }
              }
            }
            uVar12 = 1;
          }
          pcVar40 = (char *)0x0;
          local_428 = 0;
          local_3b1 = '\0';
          goto LAB_71008226d4;
        case 0x44:
          bVar2 = true;
          break;
        case 0x4f:
          bVar2 = true;
          goto LAB_71008214bc;
        case 0x53:
        case 0x73:
          if (bVar8) {
            if (iVar10 < (int)local_3a8) {
              pcVar38 = *(char **)((long)local_200 +
                                  (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
            }
            else {
              puVar17 = (undefined8 *)
                        FUN_710081fc44(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200,local_300
                                       ,&local_3a0);
              pcVar38 = (char *)*puVar17;
            }
          }
          else {
            local_440 = (ulong)(uVar30 + 1);
            if ((int)uVar30 < (int)local_3a8) {
              pcVar38 = *(char **)((long)local_200 +
                                  (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
            }
            else {
              puVar17 = (undefined8 *)*param_4;
              iVar10 = (int)param_4[3];
              if ((int)local_3a8 < 0x20) {
                if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                  puVar17 = (undefined8 *)(param_4[1] + (long)iVar10);
                }
                else {
                  *param_4 = (long)puVar17 + 0xfU & 0xfffffffffffffff8;
                }
                pcVar38 = (char *)*puVar17;
                *(char **)((long)local_200 +
                          (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | (ulong)local_3a8 << 4)
                          ) = pcVar38;
                local_3a8 = local_3a8 + 1;
              }
              else {
                if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                  puVar17 = (undefined8 *)(param_4[1] + (long)iVar10);
                }
                else {
                  *param_4 = (long)puVar17 + 0xfU & 0xfffffffffffffff8;
                }
                pcVar38 = (char *)*puVar17;
              }
            }
          }
          local_3b1 = '\0';
          if (pcVar38 == (char *)0x0) {
            if (6 < uVar12) {
              uVar12 = 6;
            }
            pcVar38 = "(null)";
            pcVar40 = (char *)0x0;
            local_428 = 0;
            goto LAB_71008226d4;
          }
          if ((uVar34 != 0x53) && (local_428 = (uint)bVar2 << 4, !bVar2)) {
            if ((int)uVar12 < 0) {
              uVar13 = FUN_710081ce00(pcVar38);
            }
            else {
              pcVar40 = (char *)FUN_710080c980(pcVar38,0,(long)(int)uVar12);
              if (pcVar40 == (char *)0x0) goto LAB_71008226d4;
              uVar13 = (int)pcVar40 - (int)pcVar38;
            }
            goto LAB_7100822698;
          }
          local_388 = pcVar38;
          FUN_7100808340(auStack_390,0,8);
          if (-1 < (int)uVar12) {
            lVar14 = 0;
            uVar39 = 0;
            goto LAB_7100821b48;
          }
          uVar13 = FUN_710081fbe0(param_1,0,&local_388,0,auStack_390);
          local_388 = pcVar38;
          if (uVar13 == 0xffffffff) goto LAB_7100821c00;
          goto LAB_7100821bdc;
        case 0x55:
          bVar2 = true;
          goto LAB_7100821cec;
        case 0x58:
          local_410 = "0123456789ABCDEF";
          goto LAB_71008220e4;
        case 100:
        case 0x69:
          break;
        case 0x68:
          if (*param_3 == 0x68) {
            bVar5 = true;
            param_3 = param_3 + 1;
          }
          else {
            bVar4 = true;
          }
          goto LAB_71008205c0;
        case 0x6a:
        case 0x74:
        case 0x7a:
          goto switchD_71008205e0_caseD_6a;
        case 0x6c:
          if (*param_3 == 0x6c) {
            param_3 = param_3 + 1;
            goto switchD_71008205e0_caseD_71;
          }
switchD_71008205e0_caseD_6a:
          bVar2 = true;
          goto LAB_71008205c0;
        case 0x6e:
          uVar18 = (ulong)local_3a8;
          if ((bVar3) || (bVar2)) {
            if (bVar8) {
              if (iVar10 < (int)local_3a8) {
                plVar22 = *(long **)((long)local_200 +
                                    (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              }
              else {
                puVar17 = (undefined8 *)
                          FUN_710081fc44(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200,
                                         local_300,&local_3a0);
                plVar22 = (long *)*puVar17;
              }
            }
            else {
              local_440 = (ulong)(uVar30 + 1);
              if ((int)uVar30 < (int)local_3a8) {
                plVar22 = *(long **)((long)local_200 +
                                    (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              }
              else {
                puVar17 = (undefined8 *)*param_4;
                iVar10 = (int)param_4[3];
                if ((int)local_3a8 < 0x20) {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar17 = (undefined8 *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar17 + 0xfU & 0xfffffffffffffff8;
                  }
                  plVar22 = (long *)*puVar17;
                  *(long **)((long)local_200 +
                            (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) =
                       plVar22;
                  local_3a8 = local_3a8 + 1;
                }
                else {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar17 = (undefined8 *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar17 + 0xfU & 0xfffffffffffffff8;
                  }
                  plVar22 = (long *)*puVar17;
                }
              }
            }
            *plVar22 = (long)local_42c;
            pbVar21 = param_3;
          }
          else if (bVar4) {
            if (bVar8) {
              if (iVar10 < (int)local_3a8) {
                puVar23 = *(undefined2 **)
                           ((long)local_200 + (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4)
                           );
              }
              else {
                puVar17 = (undefined8 *)
                          FUN_710081fc44(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200,
                                         local_300,&local_3a0);
                puVar23 = (undefined2 *)*puVar17;
              }
            }
            else {
              local_440 = (ulong)(uVar30 + 1);
              if ((int)uVar30 < (int)local_3a8) {
                puVar23 = *(undefined2 **)
                           ((long)local_200 + (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4)
                           );
              }
              else {
                puVar17 = (undefined8 *)*param_4;
                iVar10 = (int)param_4[3];
                if ((int)local_3a8 < 0x20) {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar17 = (undefined8 *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar17 + 0xfU & 0xfffffffffffffff8;
                  }
                  puVar23 = (undefined2 *)*puVar17;
                  *(undefined2 **)
                   ((long)local_200 +
                   (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) = puVar23;
                  local_3a8 = local_3a8 + 1;
                }
                else {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar17 = (undefined8 *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar17 + 0xfU & 0xfffffffffffffff8;
                  }
                  puVar23 = (undefined2 *)*puVar17;
                }
              }
            }
            *puVar23 = (undefined2)local_42c;
            pbVar21 = param_3;
          }
          else if (bVar5) {
            if (bVar8) {
              if (iVar10 < (int)local_3a8) {
                puVar24 = *(undefined1 **)
                           ((long)local_200 + (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4)
                           );
              }
              else {
                puVar17 = (undefined8 *)
                          FUN_710081fc44(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200,
                                         local_300,&local_3a0);
                puVar24 = (undefined1 *)*puVar17;
              }
            }
            else {
              local_440 = (ulong)(uVar30 + 1);
              if ((int)uVar30 < (int)local_3a8) {
                puVar24 = *(undefined1 **)
                           ((long)local_200 + (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4)
                           );
              }
              else {
                puVar17 = (undefined8 *)*param_4;
                iVar10 = (int)param_4[3];
                if ((int)local_3a8 < 0x20) {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar17 = (undefined8 *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar17 + 0xfU & 0xfffffffffffffff8;
                  }
                  puVar24 = (undefined1 *)*puVar17;
                  *(undefined1 **)
                   ((long)local_200 +
                   (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) = puVar24;
                  local_3a8 = local_3a8 + 1;
                }
                else {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar17 = (undefined8 *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar17 + 0xfU & 0xfffffffffffffff8;
                  }
                  puVar24 = (undefined1 *)*puVar17;
                }
              }
            }
            *puVar24 = (undefined1)local_42c;
            pbVar21 = param_3;
          }
          else {
            if (bVar8) {
              if (iVar10 < (int)local_3a8) {
                piVar25 = *(int **)((long)local_200 +
                                   (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              }
              else {
                puVar17 = (undefined8 *)
                          FUN_710081fc44(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200,
                                         local_300,&local_3a0);
                piVar25 = (int *)*puVar17;
              }
            }
            else {
              local_440 = (ulong)(uVar30 + 1);
              if ((int)uVar30 < (int)local_3a8) {
                piVar25 = *(int **)((long)local_200 +
                                   (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              }
              else {
                puVar17 = (undefined8 *)*param_4;
                iVar10 = (int)param_4[3];
                if ((int)local_3a8 < 0x20) {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar17 = (undefined8 *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar17 + 0xfU & 0xfffffffffffffff8;
                  }
                  piVar25 = (int *)*puVar17;
                  *(int **)((long)local_200 +
                           (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) =
                       piVar25;
                  local_3a8 = local_3a8 + 1;
                }
                else {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar17 = (undefined8 *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar17 + 0xfU & 0xfffffffffffffff8;
                  }
                  piVar25 = (int *)*puVar17;
                }
              }
            }
            *piVar25 = local_42c;
            pbVar21 = param_3;
          }
          goto LAB_71008204c0;
        case 0x6f:
LAB_71008214bc:
          uVar18 = (ulong)local_3a8;
          if ((bVar3) || (bVar2)) {
            if (!bVar8) {
              if ((int)uVar30 < (int)local_3a8) {
                uVar29 = *(ulong *)((long)local_200 +
                                   (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              }
              else {
                puVar19 = (ulong *)*param_4;
                iVar10 = (int)param_4[3];
                if ((int)local_3a8 < 0x20) {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar19 = (ulong *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                  }
                  uVar29 = *puVar19;
                  *(ulong *)((long)local_200 +
                            (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) =
                       uVar29;
                  local_3a8 = local_3a8 + 1;
                }
                else {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar19 = (ulong *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                  }
                  uVar29 = *puVar19;
                }
              }
              goto LAB_7100821888;
            }
            if (iVar10 < (int)local_3a8) {
              uVar29 = *(ulong *)((long)local_200 +
                                 (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
            }
            else {
              puVar19 = (ulong *)FUN_710081fc44(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200,
                                                local_300,&local_3a0);
              uVar29 = *puVar19;
            }
          }
          else if (bVar4) {
            if (!bVar8) {
              if ((int)uVar30 < (int)local_3a8) {
                uVar29 = (ulong)*(ushort *)
                                 ((long)local_200 +
                                 (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              }
              else {
                puVar26 = (uint *)*param_4;
                iVar10 = (int)param_4[3];
                if ((int)local_3a8 < 0x20) {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar26 = (uint *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                  }
                  uVar13 = *puVar26;
                  *(uint *)((long)local_200 +
                           (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) =
                       uVar13;
                  uVar29 = (ulong)uVar13 & 0xffff;
                  local_3a8 = local_3a8 + 1;
                }
                else {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar26 = (uint *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                  }
                  uVar29 = (ulong)(ushort)*puVar26;
                }
              }
              goto LAB_7100821888;
            }
            if (iVar10 < (int)local_3a8) {
              uVar29 = (ulong)*(ushort *)
                               ((long)local_200 +
                               (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
            }
            else {
              puVar20 = (ushort *)
                        FUN_710081fc44(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200,local_300
                                       ,&local_3a0);
              uVar29 = (ulong)*puVar20;
            }
          }
          else if (bVar5) {
            if (bVar8) {
              if (iVar10 < (int)local_3a8) {
                uVar29 = (ulong)*(byte *)((long)local_200 +
                                         (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              }
              else {
                pbVar21 = (byte *)FUN_710081fc44(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200
                                                 ,local_300,&local_3a0);
                uVar29 = (ulong)*pbVar21;
              }
            }
            else {
              if ((int)uVar30 < (int)local_3a8) {
                uVar29 = (ulong)*(byte *)((long)local_200 +
                                         (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              }
              else {
                puVar26 = (uint *)*param_4;
                iVar10 = (int)param_4[3];
                if ((int)local_3a8 < 0x20) {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar26 = (uint *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                  }
                  uVar13 = *puVar26;
                  *(uint *)((long)local_200 +
                           (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) =
                       uVar13;
                  uVar29 = (ulong)uVar13 & 0xff;
                  local_3a8 = local_3a8 + 1;
                }
                else {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar26 = (uint *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                  }
                  uVar29 = (ulong)(byte)*puVar26;
                }
              }
LAB_7100821888:
              uVar30 = uVar30 + 1;
            }
          }
          else {
            if (!bVar8) {
              if ((int)uVar30 < (int)local_3a8) {
                uVar29 = (ulong)*(uint *)((long)local_200 +
                                         (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              }
              else {
                puVar26 = (uint *)*param_4;
                iVar10 = (int)param_4[3];
                if ((int)local_3a8 < 0x20) {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar26 = (uint *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                  }
                  uVar13 = *puVar26;
                  *(uint *)((long)local_200 +
                           (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) =
                       uVar13;
                  uVar29 = (ulong)uVar13;
                  local_3a8 = local_3a8 + 1;
                }
                else {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar26 = (uint *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                  }
                  uVar29 = (ulong)*puVar26;
                }
              }
              goto LAB_7100821888;
            }
            if (iVar10 < (int)local_3a8) {
              uVar29 = (ulong)*(uint *)((long)local_200 +
                                       (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
            }
            else {
              puVar26 = (uint *)FUN_710081fc44(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200,
                                               local_300,&local_3a0);
              uVar29 = (ulong)*puVar26;
            }
          }
          bVar9 = false;
          bVar7 = false;
          iVar10 = 0;
LAB_71008224ec:
          local_3b1 = '\0';
          goto LAB_71008224f0;
        case 0x70:
          if (bVar8) {
            if (iVar10 < (int)local_3a8) {
              uVar29 = *(ulong *)((long)local_200 +
                                 (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
            }
            else {
              puVar19 = (ulong *)FUN_710081fc44(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200,
                                                local_300,&local_3a0);
              uVar29 = *puVar19;
            }
          }
          else {
            uVar13 = uVar30 + 1;
            if ((int)uVar30 < (int)local_3a8) {
              uVar29 = *(ulong *)((long)local_200 +
                                 (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              uVar30 = uVar13;
            }
            else {
              puVar19 = (ulong *)*param_4;
              iVar10 = (int)param_4[3];
              if ((int)local_3a8 < 0x20) {
                if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                  puVar19 = (ulong *)(param_4[1] + (long)iVar10);
                }
                else {
                  *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                }
                uVar29 = *puVar19;
                *(ulong *)((long)local_200 +
                          (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | (ulong)local_3a8 << 4)
                          ) = uVar29;
                uVar30 = uVar13;
                local_3a8 = local_3a8 + 1;
              }
              else {
                if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                  puVar19 = (ulong *)(param_4[1] + (long)iVar10);
                }
                else {
                  *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                }
                uVar29 = *puVar19;
                uVar30 = uVar13;
              }
            }
          }
          bVar9 = true;
          local_3b0 = 0x7830;
          local_410 = "0123456789abcdef";
          goto LAB_71008224e8;
        case 0x71:
          goto switchD_71008205e0_caseD_71;
        case 0x75:
LAB_7100821cec:
          uVar18 = (ulong)local_3a8;
          if ((bVar3) || (bVar2)) {
            if (!bVar8) {
              if ((int)uVar30 < (int)local_3a8) {
                uVar29 = *(ulong *)((long)local_200 +
                                   (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              }
              else {
                puVar19 = (ulong *)*param_4;
                iVar10 = (int)param_4[3];
                if ((int)local_3a8 < 0x20) {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar19 = (ulong *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                  }
                  uVar29 = *puVar19;
                  *(ulong *)((long)local_200 +
                            (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) =
                       uVar29;
                  local_3a8 = local_3a8 + 1;
                }
                else {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar19 = (ulong *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                  }
                  uVar29 = *puVar19;
                }
              }
              goto LAB_7100821fcc;
            }
            if (iVar10 < (int)local_3a8) {
              uVar29 = *(ulong *)((long)local_200 +
                                 (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
            }
            else {
              puVar19 = (ulong *)FUN_710081fc44(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200,
                                                local_300,&local_3a0);
              uVar29 = *puVar19;
            }
          }
          else if (bVar4) {
            if (!bVar8) {
              if ((int)uVar30 < (int)local_3a8) {
                uVar29 = (ulong)*(ushort *)
                                 ((long)local_200 +
                                 (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              }
              else {
                puVar26 = (uint *)*param_4;
                iVar10 = (int)param_4[3];
                if ((int)local_3a8 < 0x20) {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar26 = (uint *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                  }
                  uVar13 = *puVar26;
                  *(uint *)((long)local_200 +
                           (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) =
                       uVar13;
                  uVar29 = (ulong)uVar13 & 0xffff;
                  local_3a8 = local_3a8 + 1;
                }
                else {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar26 = (uint *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                  }
                  uVar29 = (ulong)(ushort)*puVar26;
                }
              }
              goto LAB_7100821fcc;
            }
            if (iVar10 < (int)local_3a8) {
              uVar29 = (ulong)*(ushort *)
                               ((long)local_200 +
                               (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
            }
            else {
              puVar20 = (ushort *)
                        FUN_710081fc44(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200,local_300
                                       ,&local_3a0);
              uVar29 = (ulong)*puVar20;
            }
          }
          else if (bVar5) {
            if (bVar8) {
              if (iVar10 < (int)local_3a8) {
                uVar29 = (ulong)*(byte *)((long)local_200 +
                                         (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              }
              else {
                pbVar21 = (byte *)FUN_710081fc44(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200
                                                 ,local_300,&local_3a0);
                uVar29 = (ulong)*pbVar21;
              }
            }
            else {
              if ((int)uVar30 < (int)local_3a8) {
                uVar29 = (ulong)*(byte *)((long)local_200 +
                                         (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              }
              else {
                puVar26 = (uint *)*param_4;
                iVar10 = (int)param_4[3];
                if ((int)local_3a8 < 0x20) {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar26 = (uint *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                  }
                  uVar13 = *puVar26;
                  *(uint *)((long)local_200 +
                           (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) =
                       uVar13;
                  uVar29 = (ulong)uVar13 & 0xff;
                  local_3a8 = local_3a8 + 1;
                }
                else {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar26 = (uint *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                  }
                  uVar29 = (ulong)(byte)*puVar26;
                }
              }
LAB_7100821fcc:
              uVar30 = uVar30 + 1;
            }
          }
          else {
            if (!bVar8) {
              if ((int)uVar30 < (int)local_3a8) {
                uVar29 = (ulong)*(uint *)((long)local_200 +
                                         (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              }
              else {
                puVar26 = (uint *)*param_4;
                iVar10 = (int)param_4[3];
                if ((int)local_3a8 < 0x20) {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar26 = (uint *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                  }
                  uVar13 = *puVar26;
                  *(uint *)((long)local_200 +
                           (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) =
                       uVar13;
                  uVar29 = (ulong)uVar13;
                  local_3a8 = local_3a8 + 1;
                }
                else {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar26 = (uint *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                  }
                  uVar29 = (ulong)*puVar26;
                }
              }
              goto LAB_7100821fcc;
            }
            if (iVar10 < (int)local_3a8) {
              uVar29 = (ulong)*(uint *)((long)local_200 +
                                       (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
            }
            else {
              puVar26 = (uint *)FUN_710081fc44(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200,
                                               local_300,&local_3a0);
              uVar29 = (ulong)*puVar26;
            }
          }
          iVar10 = 1;
          goto LAB_71008224ec;
        case 0x78:
          local_410 = "0123456789abcdef";
LAB_71008220e4:
          uVar18 = (ulong)local_3a8;
          if ((bVar3) || (bVar2)) {
            if (!bVar8) {
              if ((int)uVar30 < (int)local_3a8) {
                uVar29 = *(ulong *)((long)local_200 +
                                   (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              }
              else {
                puVar19 = (ulong *)*param_4;
                iVar10 = (int)param_4[3];
                if ((int)local_3a8 < 0x20) {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar19 = (ulong *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                  }
                  uVar29 = *puVar19;
                  *(ulong *)((long)local_200 +
                            (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) =
                       uVar29;
                  local_3a8 = local_3a8 + 1;
                }
                else {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar19 = (ulong *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                  }
                  uVar29 = *puVar19;
                }
              }
              goto LAB_71008224c8;
            }
            if (iVar10 < (int)local_3a8) {
              uVar29 = *(ulong *)((long)local_200 +
                                 (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
            }
            else {
              puVar19 = (ulong *)FUN_710081fc44(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200,
                                                local_300,&local_3a0);
              uVar29 = *puVar19;
            }
          }
          else if (bVar4) {
            if (!bVar8) {
              if ((int)uVar30 < (int)local_3a8) {
                uVar29 = (ulong)*(ushort *)
                                 ((long)local_200 +
                                 (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              }
              else {
                puVar26 = (uint *)*param_4;
                iVar10 = (int)param_4[3];
                if ((int)local_3a8 < 0x20) {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar26 = (uint *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                  }
                  uVar13 = *puVar26;
                  *(uint *)((long)local_200 +
                           (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) =
                       uVar13;
                  uVar29 = (ulong)uVar13 & 0xffff;
                  local_3a8 = local_3a8 + 1;
                }
                else {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar26 = (uint *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                  }
                  uVar29 = (ulong)(ushort)*puVar26;
                }
              }
              goto LAB_71008224c8;
            }
            if (iVar10 < (int)local_3a8) {
              uVar29 = (ulong)*(ushort *)
                               ((long)local_200 +
                               (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
            }
            else {
              puVar20 = (ushort *)
                        FUN_710081fc44(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200,local_300
                                       ,&local_3a0);
              uVar29 = (ulong)*puVar20;
            }
          }
          else if (bVar5) {
            if (bVar8) {
              if (iVar10 < (int)local_3a8) {
                uVar29 = (ulong)*(byte *)((long)local_200 +
                                         (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              }
              else {
                pbVar21 = (byte *)FUN_710081fc44(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200
                                                 ,local_300,&local_3a0);
                uVar29 = (ulong)*pbVar21;
              }
            }
            else {
              if ((int)uVar30 < (int)local_3a8) {
                uVar29 = (ulong)*(byte *)((long)local_200 +
                                         (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              }
              else {
                puVar26 = (uint *)*param_4;
                iVar10 = (int)param_4[3];
                if ((int)local_3a8 < 0x20) {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar26 = (uint *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                  }
                  uVar13 = *puVar26;
                  *(uint *)((long)local_200 +
                           (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) =
                       uVar13;
                  uVar29 = (ulong)uVar13 & 0xff;
                  local_3a8 = local_3a8 + 1;
                }
                else {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar26 = (uint *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                  }
                  uVar29 = (ulong)(byte)*puVar26;
                }
              }
LAB_71008224c8:
              uVar30 = uVar30 + 1;
            }
          }
          else {
            if (!bVar8) {
              if ((int)uVar30 < (int)local_3a8) {
                uVar29 = (ulong)*(uint *)((long)local_200 +
                                         (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              }
              else {
                puVar26 = (uint *)*param_4;
                iVar10 = (int)param_4[3];
                if ((int)local_3a8 < 0x20) {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar26 = (uint *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                  }
                  uVar13 = *puVar26;
                  *(uint *)((long)local_200 +
                           (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) =
                       uVar13;
                  uVar29 = (ulong)uVar13;
                  local_3a8 = local_3a8 + 1;
                }
                else {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar26 = (uint *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                  }
                  uVar29 = (ulong)*puVar26;
                }
              }
              goto LAB_71008224c8;
            }
            if (iVar10 < (int)local_3a8) {
              uVar29 = (ulong)*(uint *)((long)local_200 +
                                       (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
            }
            else {
              puVar26 = (uint *)FUN_710081fc44(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200,
                                               local_300,&local_3a0);
              uVar29 = (ulong)*puVar26;
            }
          }
          if ((bVar6) && (uVar29 != 0)) {
            bVar9 = true;
            local_3b0 = CONCAT11((char)uVar34,0x30);
          }
          bVar7 = false;
LAB_71008224e8:
          iVar10 = 2;
          goto LAB_71008224ec;
        }
        uVar18 = (ulong)local_3a8;
        if ((bVar3) || (bVar2)) {
          if (!bVar8) {
            if ((int)uVar30 < (int)local_3a8) {
              uVar29 = *(ulong *)((long)local_200 +
                                 (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
            }
            else {
              puVar19 = (ulong *)*param_4;
              iVar10 = (int)param_4[3];
              if ((int)local_3a8 < 0x20) {
                if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                  puVar19 = (ulong *)(param_4[1] + (long)iVar10);
                }
                else {
                  *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                }
                uVar29 = *puVar19;
                *(ulong *)((long)local_200 +
                          (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) = uVar29
                ;
                local_3a8 = local_3a8 + 1;
              }
              else {
                if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                  puVar19 = (ulong *)(param_4[1] + (long)iVar10);
                }
                else {
                  *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                }
                uVar29 = *puVar19;
              }
            }
            goto LAB_7100821068;
          }
          if (iVar10 < (int)local_3a8) {
            uVar29 = *(ulong *)((long)local_200 +
                               (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
          }
          else {
            puVar19 = (ulong *)FUN_710081fc44(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200,
                                              local_300,&local_3a0);
            uVar29 = *puVar19;
          }
        }
        else if (bVar4) {
          if (!bVar8) {
            if ((int)uVar30 < (int)local_3a8) {
              uVar29 = (ulong)*(short *)((long)local_200 +
                                        (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
            }
            else {
              psVar16 = (short *)*param_4;
              iVar10 = (int)param_4[3];
              if ((int)local_3a8 < 0x20) {
                if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                  psVar16 = (short *)(param_4[1] + (long)iVar10);
                }
                else {
                  *param_4 = (long)psVar16 + 0xbU & 0xfffffffffffffff8;
                }
                uVar27 = *(undefined4 *)psVar16;
                *(undefined4 *)
                 ((long)local_200 + (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)
                 ) = uVar27;
                uVar29 = (ulong)(short)uVar27;
                local_3a8 = local_3a8 + 1;
              }
              else {
                if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                  psVar16 = (short *)(param_4[1] + (long)iVar10);
                }
                else {
                  *param_4 = (long)psVar16 + 0xbU & 0xfffffffffffffff8;
                }
                uVar29 = (ulong)*psVar16;
              }
            }
            goto LAB_7100821068;
          }
          if (iVar10 < (int)local_3a8) {
            uVar29 = (ulong)*(short *)((long)local_200 +
                                      (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
          }
          else {
            psVar16 = (short *)FUN_710081fc44(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200,
                                              local_300,&local_3a0);
            uVar29 = (ulong)*psVar16;
          }
        }
        else if (bVar5) {
          if (bVar8) {
            if (iVar10 < (int)local_3a8) {
              uVar29 = (ulong)*(char *)((long)local_200 +
                                       (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
            }
            else {
              pcVar38 = (char *)FUN_710081fc44(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200,
                                               local_300,&local_3a0);
              uVar29 = (ulong)*pcVar38;
            }
          }
          else {
            if ((int)uVar30 < (int)local_3a8) {
              uVar29 = (ulong)*(char *)((long)local_200 +
                                       (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
            }
            else {
              pcVar38 = (char *)*param_4;
              iVar10 = (int)param_4[3];
              if ((int)local_3a8 < 0x20) {
                if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                  pcVar38 = (char *)(param_4[1] + (long)iVar10);
                }
                else {
                  *param_4 = (ulong)(pcVar38 + 0xb) & 0xfffffffffffffff8;
                }
                uVar27 = *(undefined4 *)pcVar38;
                *(undefined4 *)
                 ((long)local_200 + (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)
                 ) = uVar27;
                uVar29 = (ulong)(char)uVar27;
                local_3a8 = local_3a8 + 1;
              }
              else {
                if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                  pcVar38 = (char *)(param_4[1] + (long)iVar10);
                }
                else {
                  *param_4 = (ulong)(pcVar38 + 0xb) & 0xfffffffffffffff8;
                }
                uVar29 = (ulong)*pcVar38;
              }
            }
LAB_7100821068:
            uVar30 = uVar30 + 1;
          }
        }
        else {
          if (!bVar8) {
            if ((int)uVar30 < (int)local_3a8) {
              uVar29 = (ulong)*(int *)((long)local_200 +
                                      (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
            }
            else {
              piVar25 = (int *)*param_4;
              iVar10 = (int)param_4[3];
              if ((int)local_3a8 < 0x20) {
                if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                  piVar25 = (int *)(param_4[1] + (long)iVar10);
                }
                else {
                  *param_4 = (long)piVar25 + 0xbU & 0xfffffffffffffff8;
                }
                iVar10 = *piVar25;
                *(int *)((long)local_200 +
                        (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) = iVar10;
                uVar29 = (ulong)iVar10;
                local_3a8 = local_3a8 + 1;
              }
              else {
                if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                  piVar25 = (int *)(param_4[1] + (long)iVar10);
                }
                else {
                  *param_4 = (long)piVar25 + 0xbU & 0xfffffffffffffff8;
                }
                uVar29 = (ulong)*piVar25;
              }
            }
            goto LAB_7100821068;
          }
          if (iVar10 < (int)local_3a8) {
            uVar29 = (ulong)*(int *)((long)local_200 +
                                    (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
          }
          else {
            piVar25 = (int *)FUN_710081fc44(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200,
                                            local_300,&local_3a0);
            uVar29 = (ulong)*piVar25;
          }
        }
        if (-1 < (long)uVar29) {
          if ((int)uVar12 < 0) goto LAB_7100822564;
          iVar10 = 1;
LAB_710082250c:
          uVar41 = uVar41 & 0xffffff7f;
          if (uVar29 != 0 || uVar12 != 0) goto LAB_710082251c;
          if (iVar10 == 0) {
            uVar12 = (uint)bVar6;
            if (bVar6 != false) {
              uVar12 = 0;
              local_306[1] = '0';
              goto LAB_710082265c;
            }
          }
          else {
            uVar12 = 0;
          }
          pcVar38 = local_306 + 2;
          goto LAB_7100822688;
        }
        uVar29 = -uVar29;
        local_3b1 = '-';
        iVar10 = 1;
LAB_71008224f0:
        if (-1 < (int)uVar12) goto LAB_710082250c;
LAB_710082251c:
        if (iVar10 != 1) {
          pcVar38 = local_306 + 2;
          if (iVar10 == 2) {
            do {
              uVar18 = uVar29 & 0xf;
              uVar29 = uVar29 >> 4;
              pcVar38 = pcVar38 + -1;
              *pcVar38 = local_410[uVar18];
            } while (uVar29 != 0);
          }
          else {
            do {
              pcVar40 = pcVar38;
              iVar10 = ((uint)uVar29 & 7) + 0x30;
              pcVar38 = pcVar40 + -1;
              *pcVar38 = (char)iVar10;
              uVar29 = uVar29 >> 3;
            } while (uVar29 != 0);
            if ((bVar6 != false) && (iVar10 != 0x30)) {
              pcVar40[-2] = '0';
              pcVar38 = pcVar40 + -2;
            }
          }
          goto LAB_7100822688;
        }
LAB_7100822564:
        if (9 < uVar29) {
          pcVar40 = local_306 + 2;
          uVar13 = 0;
          goto LAB_71008225a0;
        }
        local_306[1] = (char)uVar29 + '0';
LAB_710082265c:
        pcVar38 = local_306 + 1;
        goto LAB_7100822688;
      }
LAB_7100822bdc:
      if (local_370 != 0) {
        FUN_7100825060(param_1,param_2,&local_380);
      }
      goto LAB_7100822c2c;
    }
    if (iVar10 < 0) {
      iVar10 = 1;
      FUN_7100808340(auStack_398,0,8);
    }
    else if (local_3a4 == 0x25) goto LAB_710082052c;
    pbVar21 = pbVar21 + iVar10;
  } while( true );
switchD_71008205e0_caseD_71:
  bVar3 = true;
  goto LAB_71008205c0;
LAB_7100821b48:
  uVar13 = uVar39;
  if (*(int *)(local_388 + lVar14) == 0) goto LAB_7100821bdc;
  iVar10 = FUN_7100816a40(param_1,local_368,*(int *)(local_388 + lVar14),auStack_390);
  if (iVar10 == -1) goto LAB_7100821c00;
  uVar39 = uVar39 + iVar10;
  if (((int)uVar12 < (int)uVar39) || (lVar14 = lVar14 + 4, uVar13 = uVar12, uVar39 == uVar12))
  goto LAB_7100821bdc;
  goto LAB_7100821b48;
LAB_7100821bdc:
  uVar12 = uVar13;
  if (uVar12 != 0) {
    if ((int)uVar12 < 100) {
      pcVar38 = local_368;
      pcVar40 = (char *)0x0;
    }
    else {
      pcVar38 = (char *)FUN_7100814ca0(param_1,(long)(int)(uVar12 + 1));
      pcVar40 = pcVar38;
      if (pcVar38 == (char *)0x0) {
LAB_7100821c00:
        *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | 0x40;
        goto LAB_7100822c2c;
      }
    }
    FUN_7100808340(auStack_390,0,8);
    lVar31 = (long)(int)uVar12;
    lVar14 = FUN_710081fbe0(param_1,pcVar38,&local_388,lVar31,auStack_390);
    if (lVar31 != lVar14) {
      *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | 0x40;
LAB_7100822c14:
      if (pcVar40 != (char *)0x0) {
        FUN_7100816da0(param_1,pcVar40);
      }
LAB_7100822c2c:
      if ((*(ushort *)(param_2 + 2) >> 6 & 1) != 0) {
        return -1;
      }
      return local_42c;
    }
    pcVar38[lVar31] = '\0';
    local_428 = 0;
    goto LAB_71008226d4;
  }
  local_428 = 0;
  uVar13 = uVar12;
  goto LAB_7100822698;
LAB_71008225a0:
  pcVar38 = pcVar40 + -1;
  uVar13 = uVar13 + 1;
  pcVar40[-1] = (char)uVar29 + (char)(uVar29 / 10) * -10 + '0';
  if (((bVar7) && (*local_420 == uVar13)) && (uVar13 != 0xff)) {
    if (uVar29 < 10) goto LAB_7100822688;
    pcVar40 = pcVar38 + -local_418;
    FUN_710081f760(pcVar40,local_408,local_418);
    if (local_420[1] == 0) {
      uVar13 = 0;
    }
    else {
      local_420 = local_420 + 1;
      uVar13 = 0;
    }
  }
  else {
    pcVar40 = pcVar38;
    if (uVar29 < 10) goto LAB_7100822688;
  }
  uVar29 = uVar29 / 10;
  goto LAB_71008225a0;
LAB_7100822688:
  local_440 = (ulong)uVar30;
  uVar13 = ((int)local_306 + 2) - (int)pcVar38;
  local_428 = uVar12;
LAB_7100822698:
  uVar12 = uVar13;
  pcVar40 = (char *)0x0;
LAB_71008226d4:
  uVar13 = local_428;
  if ((int)local_428 < (int)uVar12) {
    uVar13 = uVar12;
  }
  if (local_3b1 != '\0') {
    uVar13 = uVar13 + 1;
  }
  if (bVar9) {
    uVar13 = uVar13 + 2;
  }
  if ((uVar41 == 0) && (iVar10 = uVar37 - uVar13, 0 < iVar10)) {
    while( true ) {
      local_378 = local_378 + 1;
      if (iVar10 < 0x11) break;
      *plVar32 = (long)"                ";
      plVar32[1] = 0x10;
      local_370 = local_370 + 0x10;
      plVar32 = plVar32 + 2;
      if ((7 < local_378) &&
         (iVar35 = FUN_7100825060(param_1,param_2,&local_380), plVar32 = local_280, iVar35 != 0))
      goto LAB_7100822c14;
      iVar10 = iVar10 + -0x10;
    }
    *plVar32 = (long)"                ";
    plVar32[1] = (long)iVar10;
    local_370 = iVar10 + local_370;
    plVar32 = plVar32 + 2;
    if ((7 < local_378) &&
       (iVar10 = FUN_7100825060(param_1,param_2,&local_380), plVar32 = local_280, iVar10 != 0))
    goto LAB_7100822c14;
  }
  if (local_3b1 != '\0') {
    *plVar32 = (long)&local_3b1;
    plVar32[1] = 1;
    local_370 = local_370 + 1;
    local_378 = local_378 + 1;
    if (local_378 < 8) {
      plVar32 = plVar32 + 2;
    }
    else {
      iVar10 = FUN_7100825060(param_1,param_2,&local_380);
      plVar32 = local_280;
      if (iVar10 != 0) goto LAB_7100822c14;
    }
  }
  if (bVar9) {
    *plVar32 = (long)&local_3b0;
    plVar32[1] = 2;
    local_370 = local_370 + 2;
    local_378 = local_378 + 1;
    if (local_378 < 8) {
      plVar32 = plVar32 + 2;
    }
    else {
      iVar10 = FUN_7100825060(param_1,param_2,&local_380);
      plVar32 = local_280;
      if (iVar10 != 0) goto LAB_7100822c14;
    }
  }
  if ((uVar41 == 0x80) && (iVar10 = uVar37 - uVar13, 0 < iVar10)) {
    while( true ) {
      local_378 = local_378 + 1;
      if (iVar10 < 0x11) break;
      *plVar32 = (long)"0000000000000000                ";
      plVar32[1] = 0x10;
      local_370 = local_370 + 0x10;
      plVar32 = plVar32 + 2;
      if ((7 < local_378) &&
         (iVar35 = FUN_7100825060(param_1,param_2,&local_380), plVar32 = local_280, iVar35 != 0))
      goto LAB_7100822c14;
      iVar10 = iVar10 + -0x10;
    }
    *plVar32 = (long)"0000000000000000                ";
    plVar32[1] = (long)iVar10;
    local_370 = iVar10 + local_370;
    plVar32 = plVar32 + 2;
    if ((7 < local_378) &&
       (iVar10 = FUN_7100825060(param_1,param_2,&local_380), plVar32 = local_280, iVar10 != 0))
    goto LAB_7100822c14;
  }
  iVar10 = local_428 - uVar12;
  if (0 < iVar10) {
    while( true ) {
      local_378 = local_378 + 1;
      if (iVar10 < 0x11) break;
      *plVar32 = (long)"0000000000000000                ";
      plVar32[1] = 0x10;
      local_370 = local_370 + 0x10;
      plVar32 = plVar32 + 2;
      if ((7 < local_378) &&
         (iVar35 = FUN_7100825060(param_1,param_2,&local_380), plVar32 = local_280, iVar35 != 0))
      goto LAB_7100822c14;
      iVar10 = iVar10 + -0x10;
    }
    *plVar32 = (long)"0000000000000000                ";
    plVar32[1] = (long)iVar10;
    local_370 = iVar10 + local_370;
    plVar32 = plVar32 + 2;
    if ((7 < local_378) &&
       (iVar10 = FUN_7100825060(param_1,param_2,&local_380), plVar32 = local_280, iVar10 != 0))
    goto LAB_7100822c14;
  }
  *plVar32 = (long)pcVar38;
  plVar32[1] = (long)(int)uVar12;
  local_370 = local_370 + (int)uVar12;
  local_378 = local_378 + 1;
  if (local_378 < 8) {
    plVar32 = plVar32 + 2;
  }
  else {
    iVar10 = FUN_7100825060(param_1,param_2,&local_380);
    plVar32 = local_280;
    if (iVar10 != 0) goto LAB_7100822c14;
  }
  if (((uVar41 >> 2 & 1) != 0) && (iVar10 = uVar37 - uVar13, 0 < iVar10)) {
    for (; local_378 = local_378 + 1, 0x10 < iVar10; iVar10 = iVar10 + -0x10) {
      *plVar32 = (long)"                ";
      plVar32[1] = 0x10;
      local_370 = local_370 + 0x10;
      if (local_378 < 8) {
        plVar32 = plVar32 + 2;
      }
      else {
        iVar35 = FUN_7100825060(param_1,param_2,&local_380);
        plVar32 = local_280;
        if (iVar35 != 0) goto LAB_7100822c14;
      }
    }
    *plVar32 = (long)"                ";
    plVar32[1] = (long)iVar10;
    local_370 = iVar10 + local_370;
    if ((7 < local_378) && (iVar10 = FUN_7100825060(param_1,param_2,&local_380), iVar10 != 0))
    goto LAB_7100822c14;
  }
  if ((int)uVar37 < (int)uVar13) {
    uVar37 = uVar13;
  }
  local_42c = local_42c + uVar37;
  if ((local_370 != 0) && (iVar10 = FUN_7100825060(param_1,param_2,&local_380), iVar10 != 0))
  goto LAB_7100822c14;
  local_378 = 0;
  pbVar21 = param_3;
  plVar32 = local_280;
  if (pcVar40 != (char *)0x0) {
    FUN_7100816da0(param_1,pcVar40);
  }
  goto LAB_71008204c0;
switchD_71008205e0_caseD_31:
  uVar13 = 0;
  pbVar28 = param_3;
  do {
    uVar13 = (uVar34 - 0x30) + uVar13 * 10;
    param_3 = pbVar28 + 1;
    uVar34 = (uint)*pbVar28;
    pbVar28 = param_3;
  } while (uVar34 - 0x30 < 10);
  if (uVar34 == 0x24) goto code_r0x0071008209a4;
  goto LAB_71008205c4;
code_r0x0071008209a4:
  if (0x20 < (int)uVar13) goto LAB_7100822c2c;
  uVar29 = (ulong)(uVar13 - 1);
  bVar8 = true;
  goto LAB_71008205c0;
LAB_7100820828:
  if (0x20 < iVar10) goto LAB_7100822c2c;
  uVar12 = iVar10 - 1;
  if ((int)uVar12 < (int)local_3a8) {
    uVar12 = *(uint *)((long)local_200 +
                      (-(ulong)(uVar12 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar12 << 4));
  }
  else {
    puVar26 = (uint *)FUN_710081fc44(param_1,(ulong)uVar12,pbVar21,param_4,&local_3a8,local_200,
                                     local_300,&local_3a0);
    uVar12 = *puVar26;
  }
LAB_7100820928:
  if ((int)uVar12 < 0) {
    uVar12 = 0xffffffff;
  }
  goto LAB_71008205c0;
code_r0x0071008206a8:
  if (0x20 < iVar10) goto LAB_7100822c2c;
  uVar37 = iVar10 - 1;
  if ((int)uVar37 < (int)local_3a8) {
    uVar37 = *(uint *)((long)local_200 +
                      (-(ulong)(uVar37 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar37 << 4));
  }
  else {
    puVar26 = (uint *)FUN_710081fc44(param_1,(ulong)uVar37,pbVar21,param_4,&local_3a8,local_200,
                                     local_300,&local_3a0);
    uVar37 = *puVar26;
  }
LAB_71008207ac:
  if ((int)uVar37 < 0) {
    uVar37 = -uVar37;
    local_440 = (ulong)uVar30;
switchD_71008205e0_caseD_2d:
    uVar41 = uVar41 | 4;
    param_3 = pbVar33;
  }
  else {
    local_440 = (ulong)uVar30;
    param_3 = pbVar33;
  }
  goto LAB_71008205c0;
}



// ===== FUN_7100822c60 @ 7100822c60 (size=72) =====

undefined8 FUN_7100822c60(long *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)*param_1;
  do {
    bVar2 = *param_2;
    pbVar4 = pbVar4 + 1;
    if (bVar2 == 0) {
      *param_1 = (long)pbVar4;
      return 1;
    }
    bVar1 = *pbVar4;
    param_2 = param_2 + 1;
    uVar3 = bVar1 + 0x20;
    if (0x19 < bVar1 - 0x41) {
      uVar3 = (uint)bVar1;
    }
  } while (uVar3 == bVar2);
  return 0;
}



// ===== FUN_7100822cc0 @ 7100822cc0 (size=604) =====

undefined8 FUN_7100822cc0(long *param_1,uint *param_2,uint *param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  uint *puVar14;
  int iVar15;
  uint *puVar16;
  int iVar17;
  
  uVar2 = *param_2 & 0x1f;
  puVar6 = param_3 + ((int)*param_2 >> 5);
  if (uVar2 == 0) {
    puVar14 = puVar6 + -1;
    puVar16 = puVar6;
  }
  else {
    puVar16 = puVar6 + 1;
    puVar14 = puVar6;
  }
  lVar13 = *param_1;
  puVar16[-1] = 0;
  bVar3 = *(byte *)(lVar13 + 1);
  uVar12 = (ulong)bVar3;
  if (bVar3 != 0) {
    iVar10 = 0;
    iVar17 = 0;
    iVar15 = 0;
    puVar6 = puVar14;
    puVar5 = puVar14;
    do {
      while( true ) {
        bVar3 = (&DAT_71009cf7e8)[uVar12];
        puVar7 = puVar6;
        if (bVar3 == 0) break;
        iVar10 = iVar10 + 1;
        iVar15 = iVar15 + 1;
        if (iVar10 < 9) {
          uVar11 = *puVar6 << 4;
        }
        else {
          if (puVar6 <= param_3) goto LAB_7100822d50;
          puVar6 = puVar6 + -1;
          uVar11 = 0;
          iVar10 = 1;
          *puVar6 = 0;
        }
        *puVar6 = bVar3 & 0xf | uVar11;
        pbVar1 = (byte *)(lVar13 + 2);
        uVar12 = (ulong)*pbVar1;
        lVar13 = lVar13 + 1;
        if (*pbVar1 == 0) goto LAB_7100822d94;
      }
      if (0x20 < (uint)uVar12) {
        if ((uint)uVar12 != 0x29) {
          return 4;
        }
        *param_1 = lVar13 + 2;
        break;
      }
      if (iVar17 < iVar15) {
        if (puVar6 < puVar5 && iVar10 < 8) {
          uVar11 = *puVar6;
          puVar8 = puVar6;
          do {
            uVar4 = puVar8[1] << (ulong)((8 - iVar10) * -4 + 0x20U & 0x1f) | uVar11;
            uVar11 = puVar8[1] >> (ulong)((8 - iVar10) * 4 & 0x1f);
            puVar9 = puVar8 + 1;
            *puVar8 = uVar4;
            puVar8[1] = uVar11;
            puVar8 = puVar9;
          } while (puVar9 < puVar5);
        }
        iVar10 = 8;
        if (param_3 < puVar6) {
          puVar7 = puVar6 + -1;
          puVar6[-1] = 0;
          iVar10 = 0;
          puVar5 = puVar7;
          iVar17 = iVar15;
        }
      }
LAB_7100822d50:
      pbVar1 = (byte *)(lVar13 + 2);
      uVar12 = (ulong)*pbVar1;
      lVar13 = lVar13 + 1;
      puVar6 = puVar7;
    } while (*pbVar1 != 0);
LAB_7100822d94:
    if (iVar15 != 0) {
      if (puVar6 < puVar5 && iVar10 < 8) {
        uVar11 = *puVar6;
        puVar7 = puVar6;
        do {
          uVar4 = puVar7[1] << (ulong)((8 - iVar10) * -4 + 0x20U & 0x1f) | uVar11;
          uVar11 = puVar7[1] >> (ulong)((8 - iVar10) * 4 & 0x1f);
          puVar8 = puVar7 + 1;
          *puVar7 = uVar4;
          puVar7[1] = uVar11;
          puVar7 = puVar8;
        } while (puVar8 < puVar5);
      }
      puVar5 = puVar6;
      puVar7 = param_3;
      if (param_3 < puVar6) {
        do {
          puVar8 = puVar5 + 1;
          *puVar7 = *puVar5;
          puVar5 = puVar8;
          puVar7 = puVar7 + 1;
        } while (puVar8 <= puVar14);
        uVar12 = (long)puVar14 - (long)puVar6 & 0xfffffffffffffffc;
        if ((long)puVar14 + 1U < (long)puVar6 + 1U) {
          uVar12 = 0;
        }
        puVar6 = (uint *)((long)param_3 + uVar12 + 4);
        do {
          puVar5 = puVar6 + 1;
          *puVar6 = 0;
          puVar6 = puVar5;
        } while (puVar5 <= puVar14);
        uVar11 = puVar16[-1];
      }
      else {
        uVar11 = puVar16[-1];
        if (uVar2 != 0) {
          uVar11 = uVar11 & 0xffffffffU >> (ulong)(-uVar2 & 0x1f);
          puVar16[-1] = uVar11;
        }
      }
      while( true ) {
        if (uVar11 != 0) {
          return 5;
        }
        if (param_3 == puVar14) break;
        puVar14 = puVar14 + -1;
        uVar11 = *puVar14;
      }
      *param_3 = 1;
      return 5;
    }
  }
  return 4;
}



// ===== FUN_7100822f20 @ 7100822f20 (size=8) =====

void FUN_7100822f20(undefined8 param_1)

{
  FUN_7100828740(param_1,1);
  return;
}



// ===== FUN_7100822f40 @ 7100822f40 (size=176) =====

void FUN_7100822f40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                   undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 uVar1;
  undefined8 local_168;
  undefined4 local_160;
  undefined2 local_158;
  undefined2 local_156;
  undefined8 local_150;
  undefined4 local_148;
  undefined1 *local_130;
  undefined8 local_110;
  undefined8 local_f0;
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
  
  local_158 = 0x204;
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
  local_160 = FUN_710081ce00();
  local_130 = &LAB_7100823d60;
  local_156 = 0xffff;
  local_110 = 0;
  local_f0 = 0;
  local_148 = local_160;
  uVar1 = FUN_7100834b00();
  FUN_710082d69c(uVar1,&local_168,param_10);
  return;
}



// ===== FUN_7100823000 @ 7100823000 (size=24) =====

byte FUN_7100823000(int param_1)

{
  return (&DAT_71009d32f0)[param_1 + 1] & 7;
}



// ===== FUN_7100823020 @ 7100823020 (size=140) =====

ulong FUN_7100823020(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = FUN_7100834b00();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x48) == 0)) {
    FUN_710080d840();
  }
  uVar2 = (ulong)(long)*(short *)(param_1 + 0x10) >> 6 & 1;
  if (((*(uint *)(param_1 + 0xb4) & 1) == 0) &&
     (((uint)(int)*(short *)(param_1 + 0x10) >> 9 & 1) == 0)) {
    FUN_7100836200();
    uVar2 = (ulong)(long)*(short *)(param_1 + 0x10) >> 6 & 1;
    if (((*(uint *)(param_1 + 0xb4) & 1) == 0) &&
       (((uint)(int)*(short *)(param_1 + 0x10) >> 9 & 1) == 0)) {
      FUN_7100836220(param_1 + 0xa0);
      return uVar2;
    }
  }
  return uVar2;
}



// ===== FUN_71008230c0 @ 71008230c0 (size=76) =====

int * FUN_71008230c0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *param_1;
  if (iVar4 != 0) {
    iVar1 = *param_2;
    piVar3 = param_2;
    iVar2 = iVar1;
    if (iVar1 == 0) {
      do {
        param_1 = param_1 + 1;
      } while (*param_1 != 0);
    }
    else {
      do {
        do {
          if (iVar2 == iVar4) {
            return param_1;
          }
          iVar2 = piVar3[1];
          piVar3 = piVar3 + 1;
        } while (iVar2 != 0);
        param_1 = param_1 + 1;
        iVar4 = *param_1;
        piVar3 = param_2;
        iVar2 = iVar1;
      } while (iVar4 != 0);
    }
  }
  return (int *)0x0;
}



// ===== FUN_7100823120 @ 7100823120 (size=44) =====

void FUN_7100823120(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_71008365a0(uVar1,param_1,param_2,param_3);
  return;
}



// ===== FUN_7100823160 @ 7100823160 (size=216) =====

long FUN_7100823160(undefined4 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                   undefined4 *param_5)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  
  puVar1 = param_1 + 0x4b;
  if (param_5 != (undefined4 *)0x0) {
    puVar1 = param_5;
  }
  if (param_3 == 0) {
    lVar4 = FUN_7100834b00();
    puVar2 = *(undefined **)(lVar4 + 0x40);
    if (*(undefined **)(lVar4 + 0x40) == (undefined *)0x0) {
      puVar2 = &DAT_7100af4978;
    }
    iVar3 = (**(code **)(puVar2 + 0xe8))(param_1,0,&DAT_7100853d20,1,puVar1);
  }
  else {
    lVar4 = FUN_7100834b00();
    puVar2 = *(undefined **)(lVar4 + 0x40);
    if (*(undefined **)(lVar4 + 0x40) == (undefined *)0x0) {
      puVar2 = &DAT_7100af4978;
    }
    iVar3 = (**(code **)(puVar2 + 0xe8))(param_1,param_2,param_3,param_4,puVar1);
  }
  if (iVar3 != -1) {
    return (long)iVar3;
  }
  *puVar1 = 0;
  *param_1 = 0x8a;
  return -1;
}



// ===== FUN_7100823240 @ 7100823240 (size=256) =====

long FUN_7100823240(undefined8 param_1,long param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  
  puVar4 = (undefined4 *)FUN_7100834b00();
  puVar1 = puVar4 + 0x4b;
  if (param_4 != (undefined4 *)0x0) {
    puVar1 = param_4;
  }
  if (param_2 == 0) {
    lVar5 = FUN_7100834b00();
    puVar2 = *(undefined **)(lVar5 + 0x40);
    if (*(undefined **)(lVar5 + 0x40) == (undefined *)0x0) {
      puVar2 = &DAT_7100af4978;
    }
    iVar3 = (**(code **)(puVar2 + 0xe8))(puVar4,0,&DAT_7100853d20,1,puVar1);
  }
  else {
    lVar5 = FUN_7100834b00();
    puVar2 = *(undefined **)(lVar5 + 0x40);
    if (*(undefined **)(lVar5 + 0x40) == (undefined *)0x0) {
      puVar2 = &DAT_7100af4978;
    }
    iVar3 = (**(code **)(puVar2 + 0xe8))(puVar4,param_1,param_2,param_3,puVar1);
  }
  if (iVar3 != -1) {
    return (long)iVar3;
  }
  *puVar1 = 0;
  *puVar4 = 0x8a;
  return -1;
}



// ===== FUN_7100823340 @ 7100823340 (size=92) =====

undefined8 FUN_7100823340(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  switch(param_2) {
  case 1:
    uVar1 = FUN_7100823ce0();
    return uVar1;
  case 2:
    uVar1 = FUN_7100828700();
    return uVar1;
  case 3:
    uVar1 = FUN_7100825140();
    return uVar1;
  case 4:
    uVar1 = FUN_71008291c0();
    return uVar1;
  case 5:
    uVar1 = FUN_7100828e60();
    return uVar1;
  case 6:
    uVar1 = FUN_710082d4a0();
    return uVar1;
  case 7:
    uVar1 = FUN_7100825160();
    return uVar1;
  case 8:
    uVar1 = FUN_71008291a0();
    return uVar1;
  case 9:
    uVar1 = FUN_71008309e0();
    return uVar1;
  case 10:
    uVar1 = FUN_7100828e40();
    return uVar1;
  case 0xb:
    uVar1 = FUN_710082d480();
    return uVar1;
  case 0xc:
    uVar1 = FUN_71008291e0();
    return uVar1;
  default:
    return 0;
  }
}



// ===== FUN_71008233a0 @ 71008233a0 (size=300) =====

undefined8 FUN_71008233a0(undefined4 *param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  ushort uVar4;
  
  lVar2 = FUN_7100834b00();
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x48) == 0)) {
    FUN_710080d840();
  }
  uVar4 = *(ushort *)(param_2 + 2);
  if (((uint)(int)(short)uVar4 >> 3 & 1) == 0) {
    if (((uint)(int)(short)uVar4 >> 4 & 1) == 0) {
      *param_1 = 9;
      *(ushort *)(param_2 + 2) = uVar4 | 0x40;
      return 0xffffffff;
    }
    if (((uint)(int)(short)uVar4 >> 2 & 1) == 0) {
      lVar2 = param_2[3];
    }
    else {
      if (param_2[0xb] != 0) {
        if (param_2[0xb] != (long)param_2 + 0x74) {
          FUN_7100816da0(param_1);
          uVar4 = *(ushort *)(param_2 + 2);
        }
        param_2[0xb] = 0;
      }
      lVar2 = param_2[3];
      uVar4 = uVar4 & 0xffdb;
      *param_2 = lVar2;
      *(undefined4 *)(param_2 + 1) = 0;
    }
    *(ushort *)(param_2 + 2) = uVar4 | 8;
  }
  else {
    lVar2 = param_2[3];
  }
  if ((lVar2 == 0) && ((param_2[2] & 0x280U) != 0x200)) {
    FUN_710081cc80(param_1,param_2);
    uVar4 = *(ushort *)(param_2 + 2);
    lVar2 = param_2[3];
  }
  else {
    uVar4 = *(ushort *)(param_2 + 2);
  }
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
    if (((uint)(int)(short)uVar4 >> 1 & 1) == 0) {
      uVar1 = (undefined4)param_2[4];
    }
    *(undefined4 *)((long)param_2 + 0xc) = uVar1;
  }
  else {
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    *(int *)(param_2 + 5) = -(int)param_2[4];
  }
  uVar3 = 0;
  if ((lVar2 == 0) && (uVar3 = 0, ((uint)(int)(short)uVar4 >> 7 & 1) != 0)) {
    uVar3 = 0xffffffff;
    *(ushort *)(param_2 + 2) = uVar4 | 0x40;
  }
  return uVar3;
}



// ===== FUN_71008234e0 @ 71008234e0 (size=88) =====

int FUN_71008234e0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_7100836420();
  if (iVar1 != -1) {
    return 0;
  }
  puVar2 = (undefined4 *)FUN_710080e8e0();
  *puVar2 = 0;
  iVar1 = FUN_7100835e40(param_1,param_2);
  return -(uint)(iVar1 == -1);
}



// ===== FUN_7100823540 @ 7100823540 (size=28) =====

void FUN_7100823540(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_71008234e0(uVar1,param_1);
  return;
}



// ===== FUN_7100823560 @ 7100823560 (size=124) =====

double FUN_7100823560(double param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  *param_2 = 0;
  uVar1 = (uint)((ulong)param_1 >> 0x20);
  uVar2 = uVar1 & 0x7fffffff;
  if ((uVar2 < 0x7ff00000) && (((ulong)param_1 & 0x7fffffff00000000) != 0 || SUB84(param_1,0) != 0))
  {
    iVar3 = 0;
    if (((ulong)param_1 >> 0x20 & 0x7ff00000) == 0) {
      iVar3 = -0x36;
      param_1 = param_1 * 18014398509481984.0;
      uVar1 = (uint)((ulong)param_1 >> 0x20);
      uVar2 = uVar1 & 0x7fffffff;
    }
    *param_2 = ((int)uVar2 >> 0x14) + -0x3fe + iVar3;
    param_1 = (double)((ulong)param_1 & 0xffffffff |
                      (ulong)(uVar1 & 0x800fffff | 0x3fe00000) << 0x20);
  }
  return param_1;
}



// ===== FUN_71008235e0 @ 71008235e0 (size=1188) =====

undefined8 FUN_71008235e0(undefined4 *param_1,ulong *param_2,undefined8 *param_3)

{
  short sVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  
  if (param_3[2] != 0) {
    sVar1 = (short)param_2[2];
    uVar9 = (uint)sVar1;
    if (((uVar9 >> 3 & 1) == 0) || (param_2[3] == 0)) {
      iVar4 = FUN_71008233a0(param_1,param_2);
      if (iVar4 != 0) {
        return 0xffffffff;
      }
      sVar1 = (short)param_2[2];
      plVar10 = (long *)*param_3;
      uVar9 = (uint)sVar1;
    }
    else {
      plVar10 = (long *)*param_3;
    }
    if ((uVar9 >> 1 & 1) == 0) {
      uVar9 = (uint)sVar1;
      if ((uVar9 & 1) != 0) {
LAB_71008237ec:
        do {
          plVar11 = plVar10;
          uVar12 = plVar11[1];
          plVar10 = plVar11 + 2;
        } while (uVar12 == 0);
        lVar15 = *plVar11;
        do {
          lVar6 = FUN_710080c980(lVar15,10,uVar12);
          iVar4 = ((int)lVar6 + 1) - (int)lVar15;
          if (lVar6 == 0) {
            iVar4 = (int)uVar12 + 1;
          }
          do {
            uVar7 = *param_2;
            iVar14 = (int)param_2[4] + *(int *)((long)param_2 + 0xc);
            uVar13 = (long)iVar4;
            if (uVar12 < (ulong)(long)iVar4) {
              uVar13 = uVar12;
            }
            uVar16 = (ulong)iVar14;
            if ((uVar7 > param_2[3] && uVar13 != uVar16) &&
                (uVar7 <= param_2[3] || (long)uVar16 <= (long)uVar13)) {
              FUN_710080f900(uVar7,lVar15,uVar16);
              *param_2 = *param_2 + uVar16;
              iVar5 = FUN_710081c760(param_1,param_2);
              if (iVar5 != 0) goto LAB_71008238e0;
            }
            else if ((long)uVar13 < (long)(int)param_2[4]) {
              FUN_710080f900(uVar7,lVar15,uVar13);
              iVar14 = (int)uVar13;
              *(int *)((long)param_2 + 0xc) = *(int *)((long)param_2 + 0xc) - iVar14;
              *param_2 = *param_2 + uVar13;
              uVar16 = uVar13;
            }
            else {
              uVar16 = (*(code *)param_2[8])(param_1,param_2[6],lVar15);
              if ((long)uVar16 < 1) goto LAB_71008238e0;
              iVar14 = (int)uVar16;
            }
            iVar4 = iVar4 - iVar14;
            iVar14 = 1;
            if ((iVar4 == 0) && (iVar14 = FUN_710081c760(param_1,param_2), iVar14 != 0))
            goto LAB_71008238e0;
            lVar6 = param_3[2];
            param_3[2] = lVar6 - uVar16;
            if (lVar6 - uVar16 == 0) {
              return 0;
            }
            lVar15 = lVar15 + uVar16;
            uVar12 = uVar12 - uVar16;
            if (uVar12 == 0) goto LAB_71008237ec;
          } while (iVar14 != 0);
        } while( true );
      }
      uVar12 = *param_2;
      lVar15 = 0;
      iVar4 = *(int *)((long)param_2 + 0xc);
      uVar13 = 0;
LAB_71008236e0:
      do {
        if (uVar13 != 0) {
          if ((uVar9 >> 9 & 1) == 0) {
            if ((param_2[3] < uVar12) || (iVar14 = (int)param_2[4], uVar13 < (ulong)(long)iVar14)) {
              uVar7 = (long)iVar4;
              if (uVar13 < (ulong)(long)iVar4) {
                uVar7 = uVar13;
              }
              FUN_710080f900(uVar12,lVar15,uVar7);
              *param_2 = *param_2 + uVar7;
              iVar4 = *(int *)((long)param_2 + 0xc) - (int)uVar7;
              *(int *)((long)param_2 + 0xc) = iVar4;
              if ((iVar4 == 0) && (iVar4 = FUN_710081c760(param_1,param_2), iVar4 != 0))
              goto LAB_71008238e0;
            }
            else {
              uVar12 = uVar13;
              if (0x7fffffff < uVar13) {
                uVar12 = 0x7fffffff;
              }
              iVar4 = 0;
              if (iVar14 != 0) {
                iVar4 = (int)uVar12 / iVar14;
              }
              uVar7 = (*(code *)param_2[8])(param_1,param_2[6],lVar15,(long)(iVar4 * iVar14));
              if ((long)uVar7 < 1) goto LAB_71008238e0;
            }
            lVar6 = param_3[2];
            uVar13 = uVar13 - uVar7;
            param_3[2] = lVar6 - uVar7;
            if (lVar6 - uVar7 == 0) {
              return 0;
            }
            uVar12 = *param_2;
            lVar15 = lVar15 + uVar7;
            uVar9 = (uint)(short)param_2[2];
            iVar4 = *(int *)((long)param_2 + 0xc);
            goto LAB_71008236e0;
          }
          uVar7 = uVar13;
          if (((ulong)(long)iVar4 <= uVar13) && (uVar7 = (long)iVar4, (uVar9 & 0x480) != 0)) {
            iVar14 = (int)uVar12 - (int)param_2[3];
            lVar6 = (long)iVar14;
            iVar4 = ((int)param_2[4] * 3) / 2;
            uVar12 = (ulong)iVar4;
            bVar2 = uVar12 < lVar6 + 1 + uVar13;
            if (bVar2) {
              iVar4 = iVar14 + (int)uVar13 + 1;
            }
            uVar7 = (long)iVar4;
            if (!bVar2) {
              uVar7 = uVar12;
            }
            if ((uVar9 >> 10 & 1) == 0) {
              uVar7 = FUN_710081d8c0(param_1);
              if (uVar7 == 0) {
                FUN_7100816da0(param_1,param_2[3]);
                uVar12 = param_2[2];
                *param_1 = 0xc;
                uVar3 = (ushort)uVar12 & 0xff7f;
                goto LAB_71008238e8;
              }
            }
            else {
              uVar7 = FUN_7100814ca0(param_1,uVar7);
              if (uVar7 == 0) {
                *param_1 = 0xc;
                uVar3 = (ushort)param_2[2];
                goto LAB_71008238e8;
              }
              FUN_710080f900(uVar7,param_2[3],lVar6);
              *(ushort *)(param_2 + 2) = (ushort)param_2[2] & 0xfb7f | 0x80;
            }
            uVar12 = uVar7 + lVar6;
            *param_2 = uVar12;
            param_2[3] = uVar7;
            *(int *)(param_2 + 4) = iVar4;
            *(int *)((long)param_2 + 0xc) = iVar4 - iVar14;
            uVar7 = uVar13;
          }
          FUN_710080f900(uVar12,lVar15,uVar7);
          lVar15 = param_3[2];
          uVar12 = *param_2 + uVar7;
          *param_2 = uVar12;
          iVar4 = *(int *)((long)param_2 + 0xc) - (int)uVar7;
          *(int *)((long)param_2 + 0xc) = iVar4;
          param_3[2] = lVar15 - uVar13;
          if (lVar15 - uVar13 == 0) {
            return 0;
          }
          uVar9 = (uint)(short)param_2[2];
        }
        lVar15 = *plVar10;
        uVar13 = plVar10[1];
        plVar10 = plVar10 + 2;
      } while( true );
    }
    lVar15 = 0;
    uVar12 = 0;
    while( true ) {
      while (uVar12 == 0) {
        lVar15 = *plVar10;
        uVar12 = plVar10[1];
        plVar10 = plVar10 + 2;
      }
      uVar13 = uVar12;
      if (0x7ffffc00 < uVar12) {
        uVar13 = 0x7ffffc00;
      }
      lVar6 = (*(code *)param_2[8])(param_1,param_2[6],lVar15,uVar13);
      if (lVar6 < 1) {
        uVar3 = (ushort)param_2[2];
        goto LAB_71008238e8;
      }
      lVar8 = param_3[2];
      param_3[2] = lVar8 - lVar6;
      if (lVar8 - lVar6 == 0) break;
      lVar15 = lVar15 + lVar6;
      uVar12 = uVar12 - lVar6;
    }
  }
  return 0;
LAB_71008238e0:
  uVar3 = (ushort)param_2[2];
LAB_71008238e8:
  *(ushort *)(param_2 + 2) = uVar3 | 0x40;
  return 0xffffffff;
}



// ===== FUN_7100823aa0 @ 7100823aa0 (size=460) =====

ulong FUN_7100823aa0(undefined4 *param_1,uint *param_2,undefined8 *param_3,uint param_4,
                    undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  
  puVar11 = param_2;
  do {
    puVar10 = puVar11;
    puVar11 = puVar10 + 1;
    uVar7 = *puVar10;
    iVar3 = FUN_7100808140(uVar7,param_5);
  } while (iVar3 != 0);
  if (uVar7 == 0x2d) {
    uVar7 = *puVar11;
    bVar1 = true;
    puVar11 = puVar10 + 2;
  }
  else {
    bVar1 = false;
    if (uVar7 == 0x2b) {
      uVar7 = *puVar11;
      puVar11 = puVar10 + 2;
    }
  }
  if ((param_4 & 0xffffffef) != 0) {
    uVar9 = (ulong)(int)param_4;
    uVar5 = 0;
    if (uVar9 != 0) {
      uVar5 = 0xffffffffffffffff / uVar9;
    }
    uVar8 = ~((int)uVar5 * param_4);
    goto LAB_7100823b1c;
  }
  if (uVar7 == 0x30) {
    if ((*puVar11 & 0xffffffdf) == 0x58) {
      uVar7 = puVar11[1];
      uVar9 = 0x10;
      puVar11 = puVar11 + 2;
      param_4 = 0x10;
      uVar8 = 0xf;
      uVar5 = 0xfffffffffffffff;
      goto LAB_7100823b1c;
    }
    if (param_4 == 0) {
      uVar9 = 8;
      uVar8 = 7;
      param_4 = 8;
      uVar5 = 0x1fffffffffffffff;
      goto LAB_7100823b1c;
    }
  }
  else if (param_4 == 0) {
    uVar9 = 10;
    uVar8 = 5;
    param_4 = 10;
    uVar5 = 0x1999999999999999;
    goto LAB_7100823b1c;
  }
  uVar9 = 0x10;
  uVar8 = 0xf;
  param_4 = 0x10;
  uVar5 = 0xfffffffffffffff;
LAB_7100823b1c:
  uVar4 = 0;
  iVar3 = 0;
  do {
    uVar6 = uVar7 - 0x30;
    if ((9 < uVar6) && (uVar6 = uVar7 - 0x37, 0x19 < uVar7 - 0x41)) {
      if (0x19 < uVar7 - 0x61) break;
      uVar6 = uVar7 - 0x57;
    }
    if ((int)param_4 <= (int)uVar6) break;
    bVar2 = iVar3 != -1;
    iVar3 = -1;
    if ((uVar4 <= uVar5 && bVar2) && (uVar4 != uVar5 || (int)uVar6 <= (int)uVar8)) {
      iVar3 = 1;
      uVar4 = (long)(int)uVar6 + uVar4 * uVar9;
    }
    uVar7 = *puVar11;
    puVar11 = puVar11 + 1;
  } while( true );
  if (iVar3 == -1) {
    *param_1 = 0x22;
    uVar5 = 0xffffffffffffffff;
    if (param_3 == (undefined8 *)0x0) {
      return 0xffffffffffffffff;
    }
  }
  else {
    uVar5 = -uVar4;
    if (!bVar1) {
      uVar5 = uVar4;
    }
    if (param_3 == (undefined8 *)0x0) {
      return uVar5;
    }
    if (iVar3 == 0) goto LAB_7100823b9c;
  }
  param_2 = puVar11 + -1;
LAB_7100823b9c:
  *param_3 = param_2;
  return uVar5;
}



// ===== FUN_7100823c80 @ 7100823c80 (size=84) =====

void FUN_7100823c80(undefined8 param_1,undefined8 param_2,undefined4 param_3)

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
  FUN_7100823aa0(uVar2,param_1,param_2,param_3,puVar1);
  return;
}



// ===== FUN_7100823ce0 @ 7100823ce0 (size=8) =====

void FUN_7100823ce0(undefined8 param_1)

{
  FUN_71008309a0(param_1,0);
  return;
}



// ===== FUN_7100823d00 @ 7100823d00 (size=76) =====

void FUN_7100823d00(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_7100835cc0(param_1,(long)*(short *)(param_2 + 0x12));
  if (-1 < lVar1) {
    *(long *)(param_2 + 0x90) = *(long *)(param_2 + 0x90) + lVar1;
    return;
  }
  *(ushort *)(param_2 + 0x10) = *(ushort *)(param_2 + 0x10) & 0xefff;
  return;
}



// ===== FUN_7100823e00 @ 7100823e00 (size=80) =====

void FUN_7100823e00(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_7100835380(param_1,(long)*(short *)(param_2 + 0x12));
  if (lVar1 != -1) {
    *(ushort *)(param_2 + 0x10) = *(ushort *)(param_2 + 0x10) | 0x1000;
    *(long *)(param_2 + 0x90) = lVar1;
    return;
  }
  *(ushort *)(param_2 + 0x10) = *(ushort *)(param_2 + 0x10) & 0xefff;
  return;
}



// ===== FUN_7100823e80 @ 7100823e80 (size=12) =====

void FUN_7100823e80(void)

{
  FUN_7100836200(0x7100d22f98);
  return;
}



// ===== FUN_7100823ea0 @ 7100823ea0 (size=12) =====

void FUN_7100823ea0(void)

{
  FUN_7100836220(0x7100d22f98);
  return;
}



// ===== FUN_7100823ec0 @ 7100823ec0 (size=164) =====

undefined8 * FUN_7100823ec0(long param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x68);
  if (lVar4 == 0) {
    lVar4 = FUN_7100814000(param_1,8,0x41);
    *(long *)(param_1 + 0x68) = lVar4;
    if (lVar4 != 0) goto LAB_7100823ed8;
LAB_7100823f20:
    puVar2 = (undefined8 *)0x0;
  }
  else {
LAB_7100823ed8:
    uVar3 = -(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)param_2 << 3;
    puVar2 = *(undefined8 **)(lVar4 + uVar3);
    if (puVar2 == (undefined8 *)0x0) {
      iVar1 = 1 << (ulong)(param_2 & 0x1f);
      puVar2 = (undefined8 *)FUN_7100814000(param_1,1,((long)iVar1 + 7) * 4);
      if (puVar2 == (undefined8 *)0x0) goto LAB_7100823f20;
      *(uint *)(puVar2 + 1) = param_2;
      *(int *)((long)puVar2 + 0xc) = iVar1;
    }
    else {
      *(undefined8 *)(lVar4 + uVar3) = *puVar2;
    }
    puVar2[2] = 0;
  }
  return puVar2;
}



// ===== FUN_7100823f80 @ 7100823f80 (size=32) =====

void FUN_7100823f80(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    lVar1 = *(long *)(param_1 + 0x68);
    *param_2 = *(undefined8 *)(lVar1 + (long)*(int *)(param_2 + 1) * 8);
    *(undefined8 **)(lVar1 + (long)*(int *)(param_2 + 1) * 8) = param_2;
  }
  return;
}



// ===== FUN_7100823fa0 @ 7100823fa0 (size=284) =====

long FUN_7100823fa0(undefined8 param_1,long param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  
  iVar1 = *(int *)(param_2 + 0x14);
  lVar5 = 0;
  do {
    uVar2 = *(uint *)(param_2 + 0x18 + lVar5 * 4);
    uVar3 = param_4 + (uVar2 & 0xffff) * param_3;
    uVar2 = (uVar3 >> 0x10) + (uVar2 >> 0x10) * param_3;
    param_4 = uVar2 >> 0x10;
    *(uint *)(param_2 + 0x18 + lVar5 * 4) = (uVar3 & 0xffff) + uVar2 * 0x10000;
    lVar5 = lVar5 + 1;
  } while ((int)lVar5 < iVar1);
  if (param_4 != 0) {
    if (*(int *)(param_2 + 0xc) <= iVar1) {
      lVar5 = FUN_7100823ec0(param_1,*(int *)(param_2 + 8) + 1);
      if (lVar5 != 0) {
        FUN_710080f900(lVar5 + 0x10,param_2 + 0x10,((long)*(int *)(param_2 + 0x14) + 2) * 4);
        FUN_7100823f80(param_1,param_2);
        *(uint *)(lVar5 + (long)iVar1 * 4 + 0x18) = param_4;
        *(int *)(lVar5 + 0x14) = iVar1 + 1;
        return lVar5;
      }
      FUN_7100806b40("../../../../../newlib-4.5.0.20241231/newlib/libc/stdlib/mprec.c",0xba,0,
                     "Balloc succeeded");
                    /* WARNING: Does not return */
      pcVar4 = (code *)UndefinedInstructionException(0,0x71008240b8);
      (*pcVar4)();
    }
    *(uint *)(param_2 + (long)iVar1 * 4 + 0x18) = param_4;
    *(int *)(param_2 + 0x14) = iVar1 + 1;
  }
  return param_2;
}



// ===== FUN_71008240c0 @ 71008240c0 (size=328) =====

long FUN_71008240c0(undefined8 param_1,long param_2,uint param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  if (param_4 < 10) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    uVar4 = 1;
    do {
      uVar1 = uVar4 * 2;
      iVar6 = iVar6 + 1;
      uVar7 = (param_4 + 8U) / 9;
      iVar3 = uVar4 * -2;
      uVar4 = uVar1;
    } while (uVar7 != uVar1 && (int)(uVar7 + iVar3) < 0 == SBORROW4(uVar7,uVar1));
  }
  lVar5 = FUN_7100823ec0(param_1,iVar6);
  if (lVar5 != 0) {
    *(undefined4 *)(lVar5 + 0x14) = 1;
    *(undefined4 *)(lVar5 + 0x18) = param_5;
    if ((int)param_3 < 10) {
      pbVar8 = (byte *)(param_2 + 10);
      param_3 = 9;
    }
    else {
      pbVar8 = (byte *)(param_2 + 9);
      do {
        pbVar10 = pbVar8 + 1;
        lVar5 = FUN_7100823fa0(param_1,lVar5,10,*pbVar8 - 0x30);
        pbVar8 = pbVar10;
      } while (pbVar10 != (byte *)(param_2 + (ulong)param_3));
      pbVar8 = (byte *)(param_2 + 9) + (ulong)(param_3 - 10) + 2;
    }
    if ((int)param_3 < param_4) {
      pbVar10 = pbVar8;
      do {
        pbVar9 = pbVar10 + 1;
        lVar5 = FUN_7100823fa0(param_1,lVar5,10,*pbVar10 - 0x30);
        pbVar10 = pbVar9;
      } while (pbVar9 != pbVar8 + (param_4 - param_3));
    }
    return lVar5;
  }
  FUN_7100806b40("../../../../../newlib-4.5.0.20241231/newlib/libc/stdlib/mprec.c",0xd3,0,
                 "Balloc succeeded");
                    /* WARNING: Does not return */
  pcVar2 = (code *)UndefinedInstructionException(0,0x7100824204);
  (*pcVar2)();
}



// ===== FUN_7100824220 @ 7100824220 (size=148) =====

int FUN_7100824220(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = param_1 << 0x10;
  if (0xffff < param_1) {
    uVar4 = param_1;
  }
  iVar2 = 0;
  if (param_1 < 0x10000) {
    iVar2 = 0x10;
  }
  iVar3 = iVar2 + 8;
  if (0xffffff < uVar4) {
    iVar3 = iVar2;
  }
  uVar1 = uVar4 << 8;
  if (0xffffff < uVar4) {
    uVar1 = uVar4;
  }
  if (uVar1 < 0x10000000) {
    iVar3 = iVar3 + 4;
    uVar4 = uVar1 << 4;
    if (0x3fffffff < uVar1 << 4) goto LAB_71008242a0;
    if ((uVar1 >> 0x19 & 1) != 0) goto LAB_71008242ac;
    if (((uVar1 << 6) >> 0x1e & 1) == 0) {
      return 0x20;
    }
  }
  else {
    uVar4 = uVar1;
    if (0x3fffffff < uVar1) {
LAB_71008242a0:
      return iVar3 - ((int)~uVar4 >> 0x1f);
    }
    if ((uVar1 >> 0x1d & 1) != 0) {
LAB_71008242ac:
      return iVar3 + 2;
    }
  }
  return iVar3 + 3;
}



// ===== FUN_71008242c0 @ 71008242c0 (size=256) =====

int FUN_71008242c0(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if ((uVar3 & 7) != 0) {
    iVar2 = 0;
    if ((uVar3 & 1) == 0) {
      if ((uVar3 >> 1 & 1) == 0) {
        *param_1 = uVar3 >> 2;
        return 2;
      }
      iVar2 = 1;
      *param_1 = uVar3 >> 1;
    }
    return iVar2;
  }
  if ((uVar3 & 0xffff) == 0) {
    iVar2 = 0x10;
    uVar1 = uVar3 >> 0x10;
    if ((uVar3 >> 0x10 & 0xff) == 0) {
      iVar2 = 0x18;
      uVar1 = uVar3 >> 0x18;
    }
LAB_710082430c:
    uVar3 = uVar1;
    if ((uVar3 & 0xf) != 0) goto joined_r0x007100824354;
    iVar2 = iVar2 + 4;
  }
  else {
    if ((uVar3 & 0xff) == 0) {
      iVar2 = 8;
      uVar1 = uVar3 >> 8;
      goto LAB_710082430c;
    }
    if ((uVar3 & 0xf) != 0) {
      *param_1 = uVar3 >> 3;
      return 3;
    }
    iVar2 = 4;
  }
  uVar3 = uVar3 >> 4;
joined_r0x007100824354:
  if ((uVar3 & 3) == 0) {
    if ((uVar3 >> 2 & 1) == 0) {
      if (uVar3 >> 3 == 0) {
        return 0x20;
      }
      iVar2 = iVar2 + 3;
      *param_1 = uVar3 >> 3;
    }
    else {
      iVar2 = iVar2 + 2;
      *param_1 = uVar3 >> 2;
    }
  }
  else {
    if ((uVar3 & 1) == 0) {
      iVar2 = iVar2 + 1;
      uVar3 = uVar3 >> 1;
    }
    *param_1 = uVar3;
  }
  return iVar2;
}



// ===== FUN_71008243c0 @ 71008243c0 (size=80) =====

void FUN_71008243c0(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = FUN_7100823ec0(param_1,1);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x14) = 1;
    *(undefined4 *)(lVar2 + 0x18) = param_2;
    return;
  }
  FUN_7100806b40("../../../../../newlib-4.5.0.20241231/newlib/libc/stdlib/mprec.c",0x145,0,
                 "Balloc succeeded");
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x710082440c);
  (*pcVar1)();
}



// ===== FUN_7100824420 @ 7100824420 (size=532) =====

void FUN_7100824420(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  ulong uVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  
  iVar20 = *(int *)(param_2 + 0x14);
  iVar22 = *(int *)(param_3 + 0x14);
  lVar7 = param_3;
  iVar21 = iVar20;
  if (iVar22 <= iVar20) {
    lVar7 = param_2;
    param_2 = param_3;
    iVar21 = iVar22;
    iVar22 = iVar20;
  }
  iVar4 = *(int *)(lVar7 + 8);
  iVar20 = iVar22 + iVar21;
  if (*(int *)(lVar7 + 0xc) < iVar20) {
    iVar4 = iVar4 + 1;
  }
  lVar6 = FUN_7100823ec0(param_1,iVar4);
  if (lVar6 == 0) {
    FUN_7100806b40("../../../../../newlib-4.5.0.20241231/newlib/libc/stdlib/mprec.c",0x162,0,
                   "Balloc succeeded");
                    /* WARNING: Does not return */
    pcVar5 = (code *)UndefinedInstructionException(0,0x7100824630);
    (*pcVar5)();
  }
  puVar11 = (uint *)(lVar6 + 0x18);
  puVar12 = puVar11 + iVar20;
  for (puVar9 = puVar11; puVar9 < puVar12; puVar9 = puVar9 + 1) {
    *puVar9 = 0;
  }
  puVar10 = (uint *)(param_2 + 0x18);
  puVar9 = puVar10 + iVar21;
  if (puVar10 < puVar9) {
    puVar3 = (uint *)(lVar7 + 0x18);
    puVar2 = puVar3 + iVar22;
    bVar1 = puVar2 < (uint *)(lVar7 + 0x19U);
    uVar13 = (ulong)((long)puVar2 + (-0x19 - lVar7)) >> 2;
    do {
      while( true ) {
        uVar8 = *puVar10;
        if ((uVar8 & 0xffff) != 0) break;
        uVar8 = uVar8 >> 0x10;
        if (uVar8 == 0) goto LAB_71008244d4;
LAB_7100824560:
        uVar18 = *puVar11;
        uVar19 = 0;
        puVar15 = puVar3;
        puVar16 = puVar11;
        uVar17 = uVar18;
        do {
          uVar19 = uVar19 + (ushort)*puVar15 * uVar8 + (uVar17 >> 0x10);
          *puVar16 = uVar18 & 0xffff | uVar19 * 0x10000;
          puVar14 = puVar15 + 1;
          uVar17 = puVar16[1];
          uVar18 = (uVar17 & 0xffff) + (*puVar15 >> 0x10) * uVar8 + (uVar19 >> 0x10);
          uVar19 = uVar18 >> 0x10;
          puVar15 = puVar14;
          puVar16 = puVar16 + 1;
        } while (puVar14 < puVar2);
        lVar7 = uVar13 << 2;
        if (bVar1) {
          lVar7 = 0;
        }
        puVar10 = puVar10 + 1;
        *(uint *)((long)puVar11 + lVar7 + 4) = uVar18;
        puVar11 = puVar11 + 1;
        if (puVar9 <= puVar10) goto LAB_71008245e0;
      }
      uVar18 = 0;
      puVar15 = puVar3;
      puVar16 = puVar11;
      do {
        puVar14 = puVar15 + 1;
        uVar17 = (*puVar16 & 0xffff) + (*puVar15 & 0xffff) * (uVar8 & 0xffff) + uVar18;
        uVar19 = (*puVar16 >> 0x10) + (*puVar15 >> 0x10) * (uVar8 & 0xffff) + (uVar17 >> 0x10);
        uVar18 = uVar19 >> 0x10;
        *puVar16 = uVar17 & 0xffff | uVar19 * 0x10000;
        puVar15 = puVar14;
        puVar16 = puVar16 + 1;
      } while (puVar14 < puVar2);
      lVar7 = uVar13 << 2;
      if (bVar1) {
        lVar7 = 0;
      }
      *(uint *)((long)puVar11 + lVar7 + 4) = uVar18;
      uVar8 = *puVar10 >> 0x10;
      if (uVar8 != 0) goto LAB_7100824560;
LAB_71008244d4:
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    } while (puVar10 < puVar9);
  }
LAB_71008245e0:
  if (0 < iVar20) {
    do {
      puVar12 = puVar12 + -1;
      if (*puVar12 != 0) break;
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
  }
  *(int *)(lVar6 + 0x14) = iVar20;
  return;
}



// ===== FUN_7100824640 @ 7100824640 (size=260) =====

undefined8 FUN_7100824640(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if ((param_3 & 3) != 0) {
    param_2 = FUN_7100823fa0(param_1,param_2,
                             *(undefined4 *)(&DAT_71009d3700 + (long)(int)((param_3 & 3) - 1) * 4),0
                            );
  }
  if ((int)param_3 >> 2 != 0) {
    puVar6 = *(undefined8 **)(param_1 + 0x60);
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)FUN_71008243c0(param_1,0x271);
      *(undefined8 **)(param_1 + 0x60) = puVar6;
      *puVar6 = 0;
    }
    uVar3 = (int)param_3 >> 3;
    uVar2 = (int)param_3 >> 2;
    do {
      uVar1 = uVar3;
      if ((uVar2 & 1) == 0) {
        puVar4 = (undefined8 *)*puVar6;
      }
      else {
        uVar5 = FUN_7100824420(param_1,param_2,puVar6);
        FUN_7100823f80(param_1,param_2);
        if (uVar1 == 0) {
          return uVar5;
        }
        puVar4 = (undefined8 *)*puVar6;
        param_2 = uVar5;
      }
      if (puVar4 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)FUN_7100824420(param_1,puVar6,puVar6);
        *puVar6 = puVar4;
        *puVar4 = 0;
      }
      uVar3 = (int)uVar1 >> 1;
      puVar6 = puVar4;
      uVar2 = uVar1;
    } while( true );
  }
  return param_2;
}



// ===== FUN_7100824760 @ 7100824760 (size=376) =====

long FUN_7100824760(undefined8 param_1,long param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  
  uVar12 = (int)param_3 >> 5;
  iVar1 = uVar12 + *(int *)(param_2 + 0x14);
  iVar8 = *(int *)(param_2 + 8);
  iVar15 = iVar1 + 1;
  iVar5 = *(int *)(param_2 + 0xc);
  if (*(int *)(param_2 + 0xc) < iVar15) {
    do {
      iVar2 = iVar5 * 2;
      iVar8 = iVar8 + 1;
      iVar4 = iVar5 * -2;
      iVar5 = iVar2;
    } while (iVar15 != iVar2 && iVar15 + iVar4 < 0 == SBORROW4(iVar15,iVar2));
  }
  lVar6 = FUN_7100823ec0(param_1,iVar8);
  if (lVar6 == 0) {
    FUN_7100806b40("../../../../../newlib-4.5.0.20241231/newlib/libc/stdlib/mprec.c",0x1de,0,
                   "Balloc succeeded");
                    /* WARNING: Does not return */
    pcVar3 = (code *)UndefinedInstructionException(0,0x71008248d4);
    (*pcVar3)();
  }
  puVar13 = (uint *)(lVar6 + 0x18);
  if (0 < (int)uVar12) {
    puVar11 = puVar13;
    do {
      puVar9 = puVar11 + 1;
      *puVar11 = 0;
      puVar11 = puVar9;
    } while (puVar9 != (uint *)(lVar6 + (ulong)(uVar12 + 6) * 4));
    puVar13 = puVar13 + uVar12;
  }
  puVar11 = (uint *)(param_2 + 0x18);
  puVar9 = puVar11 + *(int *)(param_2 + 0x14);
  if ((param_3 & 0x1f) == 0) {
    do {
      puVar14 = puVar11 + 1;
      puVar10 = puVar13 + 1;
      *puVar13 = *puVar11;
      if (puVar9 <= puVar14) break;
      puVar11 = puVar11 + 2;
      puVar13 = puVar13 + 2;
      *puVar10 = *puVar14;
    } while (puVar11 < puVar9);
  }
  else {
    uVar12 = 0;
    puVar14 = puVar13;
    do {
      *puVar14 = *puVar11 << (ulong)(param_3 & 0x1f) | uVar12;
      puVar10 = puVar11 + 1;
      uVar12 = *puVar11 >> (ulong)(0x20 - (param_3 & 0x1f) & 0x1f);
      puVar11 = puVar10;
      puVar14 = puVar14 + 1;
    } while (puVar10 < puVar9);
    uVar7 = (long)puVar9 + (-0x19 - param_2) & 0xfffffffffffffffc;
    if (puVar9 < (uint *)(param_2 + 0x19U)) {
      uVar7 = 0;
    }
    *(uint *)((long)puVar13 + uVar7 + 4) = uVar12;
    if (uVar12 != 0) goto LAB_7100824868;
  }
  iVar15 = iVar1;
LAB_7100824868:
  *(int *)(lVar6 + 0x14) = iVar15;
  FUN_7100823f80(param_1,param_2);
  return lVar6;
}



// ===== FUN_71008248e0 @ 71008248e0 (size=80) =====

int FUN_71008248e0(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_2 + 0x14);
  iVar2 = *(int *)(param_1 + 0x14) - uVar1;
  if (iVar2 == 0) {
    uVar5 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
    puVar4 = (uint *)((long)(param_1 + 0x18U) + uVar5);
    puVar3 = (uint *)(param_2 + 0x18 + uVar5);
    do {
      puVar4 = puVar4 + -1;
      puVar3 = puVar3 + -1;
      if (*puVar4 != *puVar3) {
        if (*puVar4 < *puVar3) {
          return -1;
        }
        return 1;
      }
    } while ((uint *)(param_1 + 0x18U) < puVar4);
  }
  return iVar2;
}



// ===== FUN_7100824940 @ 7100824940 (size=456) =====

void FUN_7100824940(undefined8 param_1,long param_2,long param_3)

{
  uint *puVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  uint *puVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  uint *puVar16;
  
  iVar8 = FUN_71008248e0(param_2,param_3);
  if (iVar8 == 0) {
    lVar10 = FUN_7100823ec0(param_1,0);
    if (lVar10 != 0) {
      *(undefined8 *)(lVar10 + 0x14) = 1;
      return;
    }
    FUN_7100806b40("../../../../../newlib-4.5.0.20241231/newlib/libc/stdlib/mprec.c",0x237,0,
                   "Balloc succeeded");
  }
  else {
    lVar10 = param_3;
    if (iVar8 < 0) {
      lVar10 = param_2;
      param_2 = param_3;
    }
    lVar9 = FUN_7100823ec0(param_1,*(undefined4 *)(param_2 + 8));
    if (lVar9 != 0) {
      iVar5 = *(int *)(param_2 + 0x14);
      param_2 = param_2 + 0x18;
      lVar2 = lVar9 + 0x18;
      lVar14 = 0;
      puVar1 = (uint *)(param_2 + (long)iVar5 * 4);
      iVar15 = 0;
      puVar3 = (uint *)(lVar10 + 0x18) + *(int *)(lVar10 + 0x14);
      *(uint *)(lVar9 + 0x10) = (uint)(iVar8 < 0);
      puVar16 = (uint *)(lVar10 + 0x18);
      do {
        puVar11 = puVar16 + 1;
        uVar4 = ((*(uint *)(param_2 + lVar14) & 0xffff) - (*puVar16 & 0xffff)) + iVar15;
        iVar8 = ((*(uint *)(param_2 + lVar14) >> 0x10) - (*puVar16 >> 0x10)) + ((int)uVar4 >> 0x10);
        iVar15 = iVar8 >> 0x10;
        uVar4 = uVar4 & 0xffff | iVar8 * 0x10000;
        *(uint *)(lVar2 + lVar14) = uVar4;
        lVar14 = lVar14 + 4;
        puVar16 = puVar11;
      } while (puVar11 < puVar3);
      uVar13 = (long)puVar3 + (-0x19 - lVar10) & 0xfffffffffffffffc;
      if (puVar3 < (uint *)(lVar10 + 0x19U)) {
        uVar13 = 0;
      }
      puVar16 = (uint *)(uVar13 + lVar2);
      puVar3 = (uint *)(param_2 + uVar13 + 4);
      puVar11 = puVar3;
      if (puVar3 < puVar1) {
        do {
          puVar12 = puVar11 + 1;
          uVar6 = *puVar11;
          uVar4 = uVar6 + iVar15;
          iVar8 = (uVar6 >> 0x10) + ((int)(iVar15 + (uVar6 & 0xffff)) >> 0x10);
          iVar15 = iVar8 >> 0x10;
          uVar4 = uVar4 & 0xffff | iVar8 * 0x10000;
          *(uint *)((long)puVar11 + (lVar2 - param_2)) = uVar4;
          puVar11 = puVar12;
        } while (puVar12 < puVar1);
        puVar16 = (uint *)((long)puVar16 +
                          ((long)puVar1 + (-1 - (long)puVar3) & 0xfffffffffffffffcU) + 4);
      }
      while (uVar4 == 0) {
        puVar16 = puVar16 + -1;
        iVar5 = iVar5 + -1;
        uVar4 = *puVar16;
      }
      *(int *)(lVar9 + 0x14) = iVar5;
      return;
    }
  }
  FUN_7100806b40("../../../../../newlib-4.5.0.20241231/newlib/libc/stdlib/mprec.c",0x245,0,
                 "Balloc succeeded");
                    /* WARNING: Does not return */
  pcVar7 = (code *)UndefinedInstructionException(0,0x7100824b04);
  (*pcVar7)();
}



// ===== FUN_7100824b20 @ 7100824b20 (size=132) =====

undefined1  [16] FUN_7100824b20(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((uint)((ulong)param_1 >> 0x20) & 0x7ff00000) + 0xfcc00000;
  if (0 < (int)uVar1) {
    return ZEXT416(uVar1) << 0x20;
  }
  uVar1 = (int)-uVar1 >> 0x14;
  if ((int)uVar1 < 0x14) {
    return ZEXT416((uint)(0x80000 >> (uVar1 & 0x1f))) << 0x20;
  }
  uVar2 = 0x80000000 >> (ulong)(uVar1 - 0x14 & 0x1f);
  if (0x1e < (int)(uVar1 - 0x14)) {
    uVar2 = 1;
  }
  return ZEXT416(uVar2);
}



// ===== FUN_7100824bc0 @ 7100824bc0 (size=360) =====

undefined1  [16] FUN_7100824bc0(long param_1,int *param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  uVar1 = param_1 + 0x18;
  lVar2 = uVar1 + (long)*(int *)(param_1 + 0x14) * 4;
  uVar3 = *(uint *)(lVar2 + -4);
  iVar5 = FUN_7100824220(uVar3);
  *param_2 = 0x20 - iVar5;
  if (iVar5 < 0xb) {
    uVar7 = 0;
    if (uVar1 < lVar2 - 4U) {
      uVar7 = *(uint *)(lVar2 + -8) >> (ulong)(0xbU - iVar5 & 0x1f);
    }
    auVar10._8_8_ = 0;
    auVar10._0_8_ =
         CONCAT44(uVar3 >> (ulong)(0xbU - iVar5 & 0x1f),
                  uVar3 << (ulong)(iVar5 + 0x15U & 0x1f) | uVar7) | 0x3ff0000000000000;
    return auVar10;
  }
  uVar7 = iVar5 - 0xb;
  if (uVar1 < lVar2 - 4U) {
    uVar4 = *(uint *)(lVar2 + -8);
    uVar6 = (ulong)uVar4;
    if (uVar7 != 0) {
      uVar3 = uVar3 << (ulong)(uVar7 & 0x1f) | uVar4 >> (ulong)(0x20 - uVar7 & 0x1f);
      uVar4 = uVar4 << (ulong)(uVar7 & 0x1f);
      uVar6 = (ulong)uVar4;
      if (uVar1 < lVar2 - 8U) {
        auVar8._8_8_ = 0;
        auVar8._0_8_ = CONCAT44(uVar3,uVar4 | *(uint *)(lVar2 + -0xc) >>
                                              (ulong)(0x20 - uVar7 & 0x1f)) | 0x3ff0000000000000;
        return auVar8;
      }
    }
  }
  else {
    if (iVar5 != 0xb) {
      return ZEXT416(uVar3 << (ulong)(uVar7 & 0x1f) | 0x3ff00000) << 0x20;
    }
    uVar6 = 0;
  }
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (ulong)(uVar3 | 0x3ff00000) << 0x20 | uVar6;
  return auVar9;
}



// ===== FUN_7100824d40 @ 7100824d40 (size=336) =====

long FUN_7100824d40(undefined8 param_1,undefined8 param_2,int *param_3,int *param_4)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint local_8;
  uint local_4;
  
  lVar5 = FUN_7100823ec0(param_2,1);
  if (lVar5 == 0) {
    FUN_7100806b40("../../../../../newlib-4.5.0.20241231/newlib/libc/stdlib/mprec.c",0x30f,0,
                   "Balloc succeeded");
                    /* WARNING: Does not return */
    pcVar2 = (code *)UndefinedInstructionException(0,0x7100824e8c);
    (*pcVar2)();
  }
  uVar7 = (uint)((ulong)param_1 >> 0x20);
  uVar4 = uVar7 & 0xfffff;
  uVar7 = uVar7 >> 0x14 & 0x7ff;
  local_4 = uVar4 | 0x100000;
  if (uVar7 == 0) {
    local_4 = uVar4;
  }
  if ((uint)param_1 == 0) {
    iVar3 = FUN_71008242c0(&local_4);
    iVar6 = 1;
    *(undefined4 *)(lVar5 + 0x14) = 1;
    uVar4 = iVar3 + 0x20;
    *(uint *)(lVar5 + 0x18) = local_4;
  }
  else {
    local_8 = (uint)param_1;
    uVar4 = FUN_71008242c0(&local_8);
    if (uVar4 == 0) {
      *(uint *)(lVar5 + 0x18) = local_8;
    }
    else {
      uVar1 = local_4 << (ulong)(-uVar4 & 0x1f);
      local_4 = local_4 >> (ulong)(uVar4 & 0x1f);
      *(uint *)(lVar5 + 0x18) = uVar1 | local_8;
    }
    *(uint *)(lVar5 + 0x1c) = local_4;
    iVar6 = (local_4 != 0) + 1;
    *(int *)(lVar5 + 0x14) = iVar6;
  }
  if (uVar7 != 0) {
    *param_3 = (uVar7 - 0x433) + uVar4;
    *param_4 = 0x35 - uVar4;
    return lVar5;
  }
  *param_3 = uVar4 - 0x432;
  iVar3 = FUN_7100824220(*(undefined4 *)(lVar5 + (ulong)(iVar6 - 1) * 4 + 0x18));
  *param_4 = iVar6 * 0x20 - iVar3;
  return lVar5;
}



// ===== FUN_7100824ea0 @ 7100824ea0 (size=176) =====

undefined1  [16] FUN_7100824ea0(long param_1,long param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int local_8;
  int iStack_4;
  
  dVar2 = (double)FUN_7100824bc0(param_1,&local_8);
  dVar3 = (double)FUN_7100824bc0(param_2,&iStack_4);
  iVar1 = (local_8 - iStack_4) + (*(int *)(param_1 + 0x14) - *(int *)(param_2 + 0x14)) * 0x20;
  if (0 < iVar1) {
    auVar4._0_8_ = (double)((ulong)dVar2 & 0xffffffff |
                           (ulong)(uint)((int)((ulong)dVar2 >> 0x20) + iVar1 * 0x100000) << 0x20) /
                   dVar3;
    auVar4._8_8_ = 0;
    return auVar4;
  }
  auVar5._0_8_ = dVar2 / (double)((ulong)dVar3 & 0xffffffff |
                                 (ulong)(uint)((int)((ulong)dVar3 >> 0x20) + iVar1 * -0x100000) <<
                                 0x20);
  auVar5._8_8_ = 0;
  return auVar5;
}



// ===== FUN_7100824f60 @ 7100824f60 (size=116) =====

void FUN_7100824f60(undefined4 *param_1,int param_2,long param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = param_3 + 0x18;
  uVar4 = uVar2 + (long)*(int *)(param_3 + 0x14) * 4;
  puVar1 = param_1 + ((param_2 + -1 >> 5) + 1);
  if (uVar2 < uVar4) {
    lVar3 = 0;
    uVar4 = (uVar4 - param_3) - 0x19 >> 2;
    do {
      param_1[lVar3] = *(undefined4 *)(uVar2 + lVar3 * 4);
      lVar3 = lVar3 + 1;
    } while (lVar3 != uVar4 + 1);
    param_1 = param_1 + uVar4 + 1;
  }
  for (; param_1 < puVar1; param_1 = param_1 + 1) {
    *param_1 = 0;
  }
  return;
}



// ===== FUN_7100824fe0 @ 7100824fe0 (size=104) =====

undefined8 FUN_7100824fe0(long param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = *(int *)(param_1 + 0x14);
  piVar1 = (int *)(param_1 + 0x18);
  iVar2 = (int)param_2 >> 5;
  if (iVar3 < iVar2) {
    piVar4 = piVar1 + iVar3;
  }
  else {
    piVar4 = piVar1 + iVar2;
    if (((iVar2 < iVar3) && (param_2 = param_2 & 0x1f, param_2 != 0)) &&
       (piVar1[iVar2] != ((uint)piVar1[iVar2] >> (ulong)param_2) << (ulong)param_2)) {
      return 1;
    }
  }
  do {
    if (piVar4 <= piVar1) {
      return 0;
    }
    piVar4 = piVar4 + -1;
  } while (*piVar4 == 0);
  return 1;
}



// ===== FUN_7100825060 @ 7100825060 (size=200) =====

undefined8 FUN_7100825060(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar3 = param_3[2];
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)*param_3;
    do {
      while( true ) {
        iVar1 = *(int *)(param_3 + 1);
        *(int *)(param_3 + 1) = iVar1 + -1;
        if (iVar1 < 1) goto LAB_71008250f4;
        lVar5 = puVar4[1];
        if (lVar5 == 0) break;
        uVar2 = FUN_710082d2e0(param_1,param_2,*puVar4,lVar5);
        if ((int)uVar2 == -1) {
          *(undefined4 *)(param_3 + 1) = 0;
          param_3[2] = 0;
          return uVar2;
        }
        puVar4 = puVar4 + 2;
        lVar3 = param_3[2] - lVar5;
        param_3[2] = lVar3;
        if (lVar3 == 0) goto LAB_71008250f4;
      }
      puVar4 = puVar4 + 2;
    } while (lVar3 != 0);
  }
LAB_71008250f4:
  *(undefined4 *)(param_3 + 1) = 0;
  param_3[2] = 0;
  return 0;
}



// ===== FUN_7100825140 @ 7100825140 (size=8) =====

void FUN_7100825140(undefined8 param_1)

{
  FUN_7100830960(param_1,0);
  return;
}



// ===== FUN_7100825160 @ 7100825160 (size=8) =====

void FUN_7100825160(undefined8 param_1)

{
  FUN_7100830900(param_1,0);
  return;
}



// ===== FUN_7100825168 @ 7100825168 (size=1936) =====

long FUN_7100825168(undefined8 param_1,int param_2,byte *param_3,ulong *param_4,uint *param_5,
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
      if (iVar9 < 1) goto LAB_7100825730;
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
      goto LAB_7100825720;
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
            if (bVar4 == 0x6a) goto LAB_710082532c;
            if (bVar4 != 0x4c) goto LAB_7100825314;
          }
        }
        else {
          if ((bVar4 != 0x74) && (uVar16 != 0x7a)) {
LAB_7100825314:
            if (pbVar13[1] == 0x6c) {
              iVar8 = 1;
              pbVar21 = pbVar13 + 2;
              break;
            }
          }
LAB_710082532c:
          bVar7 = true;
        }
        break;
      case 4:
        uVar1 = (uint)uVar22 & 0x1f;
        uVar22 = (ulong)uVar1;
        if (uVar16 == 0x61) {
switchD_7100825370_caseD_0:
          if (iVar9 != -1) {
            uVar17 = 4;
            goto LAB_71008253f0;
          }
LAB_71008255c4:
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
          if (0x17 < (uVar16 - 0x41 & 0xff)) goto switchD_7100825370_caseD_1;
          switch(uVar16 - 0x41) {
          case 0:
          case 4:
          case 5:
          case 6:
            goto switchD_7100825370_caseD_0;
          case 2:
switchD_7100825370_caseD_2:
            if (iVar9 == -1) goto LAB_71008254c0;
            uVar17 = 6;
            goto LAB_71008253f0;
          case 3:
          case 0xe:
          case 0x14:
switchD_7100825370_caseD_3:
            if (iVar9 != -1) {
              uVar17 = 1;
              goto LAB_71008253f0;
            }
            goto LAB_7100825424;
          case 0x12:
switchD_7100825370_caseD_12:
            if (iVar9 != -1) {
              uVar17 = 3;
              goto LAB_71008253f0;
            }
            goto LAB_7100825570;
          case 0x17:
switchD_7100825370_caseD_17:
            if (bVar7 != false) goto switchD_7100825370_caseD_3;
            uVar17 = (ulong)(uint)(iVar8 << 1);
          }
switchD_7100825370_caseD_1:
          if (iVar9 == -1) {
            uVar16 = (uint)uVar17;
            if (uVar16 == 6) {
LAB_71008254c0:
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
              if (uVar16 != 1) goto LAB_710082551c;
LAB_7100825424:
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
              if (uVar16 != 3) goto LAB_71008255c4;
LAB_7100825570:
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
LAB_71008253f0:
            param_7[iVar9] = (int)uVar17;
          }
        }
        else {
          if (uVar16 != 99) {
            uVar16 = uVar16 - 100 & 0xff;
            if (uVar16 < 0x15) {
              uVar11 = 1L << ((ulong)uVar16 & 0x3f);
              if ((uVar11 & 0x120821) != 0) goto switchD_7100825370_caseD_17;
              if ((uVar11 & 0x9400) != 0) goto switchD_7100825370_caseD_12;
              if ((uVar11 & 0xe) != 0) goto switchD_7100825370_caseD_0;
            }
            goto switchD_7100825370_caseD_1;
          }
          uVar17 = (ulong)bVar7 << 4;
          if (bVar7) goto switchD_7100825370_caseD_2;
          if (iVar9 != -1) goto LAB_71008253f0;
LAB_710082551c:
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
LAB_7100825720:
      pbVar13 = pbVar21;
    } while ((int)uVar18 != 0xb);
  }
LAB_7100825730:
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
LAB_7100825840:
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
      if (iVar9 != 5) goto LAB_7100825840;
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



// ===== FUN_71008258f8 @ 71008258f8 (size=10596) =====

/* WARNING: Type propagation algorithm not settling */

int FUN_71008258f8(long param_1,long param_2,byte *param_3,ulong *param_4)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  undefined4 *puVar15;
  short *psVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong *puVar19;
  ushort *puVar20;
  byte *pbVar21;
  long *plVar22;
  undefined2 *puVar23;
  undefined1 *puVar24;
  int *piVar25;
  uint *puVar26;
  undefined4 uVar27;
  byte *pbVar28;
  ulong uVar29;
  uint uVar30;
  long lVar31;
  long *plVar32;
  byte *pbVar33;
  uint uVar34;
  int iVar35;
  code *pcVar36;
  uint uVar37;
  char *pcVar38;
  uint uVar39;
  char *pcVar40;
  uint uVar41;
  ulong local_460;
  int local_454;
  uint local_448;
  byte *local_440;
  long local_438;
  char *local_430;
  undefined8 local_428;
  undefined *local_3f8;
  char local_3b1;
  undefined2 local_3b0;
  uint local_3a8;
  int local_3a4;
  undefined8 local_3a0;
  undefined1 auStack_398 [8];
  undefined1 auStack_390 [8];
  char *local_388;
  long *local_380;
  int local_378;
  long local_370;
  char local_368 [98];
  char local_306 [6];
  undefined4 local_300 [32];
  long local_280 [16];
  ulong local_200 [64];
  
  FUN_7100808340(auStack_398,0,8);
  if ((param_1 != 0) && (*(long *)(param_1 + 0x48) == 0)) {
    FUN_710080d840(param_1);
  }
  if (((*(uint *)(param_2 + 0xb4) & 1) == 0) && ((*(ushort *)(param_2 + 0x10) >> 9 & 1) == 0)) {
    FUN_7100836200(param_2 + 0xa0);
  }
  if ((((*(ushort *)(param_2 + 0x10) >> 3 & 1) == 0) || (*(long *)(param_2 + 0x18) == 0)) &&
     (iVar10 = FUN_71008233a0(param_1,param_2), iVar10 != 0)) {
    if (((*(uint *)(param_2 + 0xb4) & 1) == 0) && ((*(ushort *)(param_2 + 0x10) >> 9 & 1) == 0)) {
      FUN_7100836220(param_2 + 0xa0);
    }
    return -1;
  }
  if ((((int)*(short *)(param_2 + 0x10) & 0x1aU) == 10) && (-1 < *(short *)(param_2 + 0x12))) {
    if (((*(uint *)(param_2 + 0xb4) & 1) == 0) &&
       (((uint)(int)*(short *)(param_2 + 0x10) >> 9 & 1) == 0)) {
      FUN_7100836220(param_2 + 0xa0);
    }
    iVar10 = FUN_710082825c(param_1,param_2,param_3);
    return iVar10;
  }
  local_300[0] = 0xffffffff;
  local_460 = 0;
  local_454 = 0;
  local_440 = (byte *)0x0;
  local_438 = 0;
  local_430 = (char *)0x0;
  local_428 = 0;
  local_3f8 = &DAT_7100af4978;
  local_3a8 = 0;
  local_3a0 = 0;
  local_378 = 0;
  local_370 = 0;
  pbVar21 = param_3;
  local_380 = local_280;
  plVar32 = local_280;
LAB_7100825a64:
  do {
    lVar14 = FUN_7100834b00();
    puVar1 = *(undefined **)(lVar14 + 0x40);
    if (*(undefined **)(lVar14 + 0x40) == (undefined *)0x0) {
      puVar1 = local_3f8;
    }
    pcVar36 = *(code **)(puVar1 + 0xe8);
    iVar10 = FUN_7100809520();
    iVar10 = (*pcVar36)(param_1,&local_3a4,pbVar21,(long)iVar10,auStack_398);
    if (iVar10 == 0) {
LAB_7100825ad0:
      iVar35 = (int)pbVar21 - (int)param_3;
      if ((int)pbVar21 != (int)param_3) {
        *plVar32 = (long)param_3;
        plVar32[1] = (long)iVar35;
        local_370 = local_370 + iVar35;
        local_378 = local_378 + 1;
        if (local_378 < 8) {
          plVar32 = plVar32 + 2;
        }
        else {
          iVar11 = FUN_7100828d40(param_1,param_2,&local_380);
          plVar32 = local_280;
          if (iVar11 != 0) goto LAB_7100828218;
        }
        local_454 = local_454 + iVar35;
      }
      if (iVar10 != 0) {
        bVar8 = false;
        uVar37 = 0;
        bVar9 = false;
        bVar7 = false;
        bVar6 = false;
        bVar5 = false;
        bVar4 = false;
        bVar3 = false;
        bVar2 = false;
        uVar12 = 0xffffffff;
        uVar41 = 0;
        local_3b1 = '\0';
        uVar29 = local_460;
        param_3 = pbVar21 + 1;
LAB_7100825b64:
        do {
          uVar39 = local_3a8;
          uVar30 = (uint)local_460;
          uVar34 = (uint)*param_3;
          param_3 = param_3 + 1;
          uVar13 = uVar41;
LAB_7100825b68:
          uVar41 = uVar13;
          iVar10 = (int)uVar29;
          pbVar33 = param_3;
          switch(uVar34) {
          case 0x20:
            if (local_3b1 == '\0') {
              local_3b1 = ' ';
            }
            goto LAB_7100825b64;
          default:
            if (uVar34 == 0) goto LAB_71008281a8;
            pcVar38 = local_368;
            pcVar40 = (char *)0x0;
            uVar12 = 1;
            local_448 = 0;
            local_3b1 = '\0';
            local_368[0] = (char)uVar34;
            goto LAB_7100827c60;
          case 0x23:
            bVar6 = true;
            goto LAB_7100825b64;
          case 0x27:
            lVar14 = FUN_710080fb60(param_1);
            local_428 = *(undefined8 *)(lVar14 + 8);
            local_438 = FUN_710081ce00();
            lVar14 = FUN_710080fb60(param_1);
            local_440 = *(byte **)(lVar14 + 0x10);
            if ((local_438 != 0 && local_440 != (byte *)0x0) && (*local_440 != 0)) {
              bVar7 = true;
            }
            goto LAB_7100825b64;
          case 0x2a:
            uVar13 = (uint)*param_3;
            if (9 < *param_3 - 0x30) {
              uVar13 = uVar30 + 1;
              if ((int)uVar30 < (int)local_3a8) {
                uVar41 = *(uint *)((long)local_200 +
                                  (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
                uVar30 = uVar13;
              }
              else {
                puVar26 = (uint *)*param_4;
                iVar10 = (int)param_4[3];
                if ((int)local_3a8 < 0x20) {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar26 = (uint *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                  }
                  uVar41 = *puVar26;
                  *(uint *)((long)local_200 +
                           (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | (ulong)local_3a8 << 4
                           )) = uVar41;
                  uVar30 = uVar13;
                  local_3a8 = local_3a8 + 1;
                }
                else {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar26 = (uint *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                  }
                  uVar41 = *puVar26;
                  uVar30 = uVar13;
                }
              }
              goto LAB_7100825d54;
            }
            iVar10 = 0;
            pbVar28 = param_3 + 1;
            do {
              iVar10 = (uVar13 - 0x30) + iVar10 * 10;
              pbVar33 = pbVar28 + 1;
              uVar13 = (uint)*pbVar28;
              pbVar28 = pbVar33;
            } while (uVar13 - 0x30 < 10);
            pbVar28 = param_3;
            if (uVar13 == 0x24) goto LAB_7100825c50;
            break;
          case 0x2b:
            local_3b1 = '+';
            goto LAB_7100825b64;
          case 0x2d:
            goto switchD_7100825b84_caseD_2d;
          case 0x2e:
            pbVar28 = param_3 + 1;
            uVar34 = (uint)*param_3;
            if (uVar34 != 0x2a) {
              uVar12 = 0;
              param_3 = pbVar28;
              while (uVar34 - 0x30 < 10) {
                uVar12 = (uVar34 - 0x30) + uVar12 * 10;
                uVar34 = (uint)*param_3;
                param_3 = param_3 + 1;
              }
              uVar13 = uVar41;
              if ((int)uVar12 < 0) {
                uVar12 = 0xffffffff;
              }
              goto LAB_7100825b68;
            }
            uVar13 = (uint)param_3[1];
            if (9 < param_3[1] - 0x30) {
              local_460 = (ulong)(uVar30 + 1);
              if ((int)uVar30 < (int)local_3a8) {
                uVar12 = *(uint *)((long)local_200 +
                                  (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
                param_3 = pbVar28;
              }
              else {
                puVar26 = (uint *)*param_4;
                iVar10 = (int)param_4[3];
                if ((int)local_3a8 < 0x20) {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar26 = (uint *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                  }
                  uVar12 = *puVar26;
                  *(uint *)((long)local_200 +
                           (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | (ulong)local_3a8 << 4
                           )) = uVar12;
                  param_3 = pbVar28;
                  local_3a8 = local_3a8 + 1;
                }
                else {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar26 = (uint *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                  }
                  uVar12 = *puVar26;
                  param_3 = pbVar28;
                }
              }
              goto LAB_7100825ed0;
            }
            iVar10 = 0;
            pbVar33 = param_3 + 2;
            do {
              iVar10 = (uVar13 - 0x30) + iVar10 * 10;
              param_3 = pbVar33 + 1;
              uVar13 = (uint)*pbVar33;
              pbVar33 = param_3;
            } while (uVar13 - 0x30 < 10);
            if (uVar13 == 0x24) goto LAB_7100825dd0;
            break;
          case 0x30:
            uVar37 = uVar37 | 0x80;
            goto LAB_7100825b64;
          case 0x31:
          case 0x32:
          case 0x33:
          case 0x34:
          case 0x35:
          case 0x36:
          case 0x37:
          case 0x38:
          case 0x39:
            goto switchD_7100825b84_caseD_31;
          case 0x43:
          case 99:
            pcVar38 = local_368;
            if ((uVar34 == 0x43) || (bVar2)) {
              FUN_7100808340(&local_388,0,8);
              if (bVar8) {
                if (iVar10 < (int)uVar39) {
                  uVar27 = *(undefined4 *)
                            ((long)local_200 +
                            (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
                }
                else {
                  puVar15 = (undefined4 *)
                            FUN_7100825168(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200,
                                           local_300,&local_3a0);
                  uVar27 = *puVar15;
                }
              }
              else {
                local_460 = (ulong)(uVar30 + 1);
                if ((int)uVar30 < (int)uVar39) {
                  uVar27 = *(undefined4 *)
                            ((long)local_200 +
                            (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
                }
                else {
                  puVar15 = (undefined4 *)*param_4;
                  iVar10 = (int)param_4[3];
                  if ((int)uVar39 < 0x20) {
                    local_3a8 = uVar39 + 1;
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      puVar15 = (undefined4 *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)puVar15 + 0xbU & 0xfffffffffffffff8;
                    }
                    uVar27 = *puVar15;
                    *(undefined4 *)
                     ((long)local_200 +
                     (-(ulong)(uVar39 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar39 << 4)) = uVar27;
                  }
                  else {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      puVar15 = (undefined4 *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)puVar15 + 0xbU & 0xfffffffffffffff8;
                    }
                    uVar27 = *puVar15;
                  }
                }
              }
              uVar12 = FUN_7100816a40(param_1,pcVar38,uVar27,&local_388);
              if (uVar12 == 0xffffffff) goto LAB_7100827198;
            }
            else {
              if (bVar8) {
                if (iVar10 < (int)local_3a8) {
                  local_368[0] = *(char *)((long)local_200 +
                                          (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
                }
                else {
                  pcVar40 = (char *)FUN_7100825168(param_1,uVar29,pbVar21,param_4,&local_3a8,
                                                   local_200,local_300,&local_3a0);
                  local_368[0] = *pcVar40;
                }
              }
              else {
                local_460 = (ulong)(uVar30 + 1);
                if ((int)uVar30 < (int)local_3a8) {
                  local_368[0] = *(char *)((long)local_200 +
                                          (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
                }
                else {
                  pcVar40 = (char *)*param_4;
                  iVar10 = (int)param_4[3];
                  if ((int)local_3a8 < 0x20) {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      pcVar40 = (char *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (ulong)(pcVar40 + 0xb) & 0xfffffffffffffff8;
                    }
                    uVar27 = *(undefined4 *)pcVar40;
                    *(undefined4 *)
                     ((long)local_200 +
                     (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | (ulong)local_3a8 << 4)) =
                         uVar27;
                    local_368[0] = (char)uVar27;
                    local_3a8 = local_3a8 + 1;
                  }
                  else {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      pcVar40 = (char *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (ulong)(pcVar40 + 0xb) & 0xfffffffffffffff8;
                    }
                    local_368[0] = *pcVar40;
                  }
                }
              }
              uVar12 = 1;
            }
            pcVar40 = (char *)0x0;
            local_448 = 0;
            local_3b1 = '\0';
            goto LAB_7100827c60;
          case 0x44:
            bVar2 = true;
            goto LAB_7100826220;
          case 0x4f:
            bVar2 = true;
            goto LAB_7100826a2c;
          case 0x53:
          case 0x73:
            if (bVar8) {
              if (iVar10 < (int)local_3a8) {
                pcVar38 = *(char **)((long)local_200 +
                                    (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              }
              else {
                puVar17 = (undefined8 *)
                          FUN_7100825168(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200,
                                         local_300,&local_3a0);
                pcVar38 = (char *)*puVar17;
              }
            }
            else {
              local_460 = (ulong)(uVar30 + 1);
              if ((int)uVar30 < (int)local_3a8) {
                pcVar38 = *(char **)((long)local_200 +
                                    (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              }
              else {
                puVar17 = (undefined8 *)*param_4;
                iVar10 = (int)param_4[3];
                if ((int)local_3a8 < 0x20) {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar17 = (undefined8 *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar17 + 0xfU & 0xfffffffffffffff8;
                  }
                  pcVar38 = (char *)*puVar17;
                  *(char **)((long)local_200 +
                            (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 |
                            (ulong)local_3a8 << 4)) = pcVar38;
                  local_3a8 = local_3a8 + 1;
                }
                else {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar17 = (undefined8 *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar17 + 0xfU & 0xfffffffffffffff8;
                  }
                  pcVar38 = (char *)*puVar17;
                }
              }
            }
            local_3b1 = '\0';
            if (pcVar38 == (char *)0x0) {
              if (6 < uVar12) {
                uVar12 = 6;
              }
              pcVar38 = "(null)";
              pcVar40 = (char *)0x0;
              local_448 = 0;
              goto LAB_7100827c60;
            }
            if ((uVar34 != 0x53) && (local_448 = (uint)bVar2 << 4, !bVar2)) {
              if ((int)uVar12 < 0) {
                uVar13 = FUN_710081ce00(pcVar38);
              }
              else {
                pcVar40 = (char *)FUN_710080c980(pcVar38,0,(long)(int)uVar12);
                if (pcVar40 == (char *)0x0) goto LAB_7100827c60;
                uVar13 = (int)pcVar40 - (int)pcVar38;
              }
              goto LAB_7100827c28;
            }
            local_388 = pcVar38;
            FUN_7100808340(auStack_390,0,8);
            if (-1 < (int)uVar12) {
              lVar14 = 0;
              uVar39 = 0;
              goto LAB_71008270c8;
            }
            uVar13 = FUN_710081fbe0(param_1,0,&local_388,0,auStack_390);
            pcVar40 = pcVar38;
            if (uVar13 == 0xffffffff) goto LAB_7100827198;
            goto LAB_7100827174;
          case 0x55:
            bVar2 = true;
            goto LAB_7100827264;
          case 0x58:
            local_430 = "0123456789ABCDEF";
            goto LAB_7100827664;
          case 100:
          case 0x69:
LAB_7100826220:
            uVar18 = (ulong)local_3a8;
            if ((bVar3) || (bVar2)) {
              if (!bVar8) {
                if ((int)uVar30 < (int)local_3a8) {
                  uVar29 = *(ulong *)((long)local_200 +
                                     (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
                }
                else {
                  puVar19 = (ulong *)*param_4;
                  iVar10 = (int)param_4[3];
                  if ((int)local_3a8 < 0x20) {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      puVar19 = (ulong *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                    }
                    uVar29 = *puVar19;
                    *(ulong *)((long)local_200 +
                              (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) =
                         uVar29;
                    local_3a8 = local_3a8 + 1;
                  }
                  else {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      puVar19 = (ulong *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                    }
                    uVar29 = *puVar19;
                  }
                }
                goto LAB_71008265f8;
              }
              if (iVar10 < (int)local_3a8) {
                uVar29 = *(ulong *)((long)local_200 +
                                   (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              }
              else {
                puVar19 = (ulong *)FUN_7100825168(param_1,uVar29,pbVar21,param_4,&local_3a8,
                                                  local_200,local_300,&local_3a0);
                uVar29 = *puVar19;
              }
            }
            else if (bVar4) {
              if (!bVar8) {
                if ((int)uVar30 < (int)local_3a8) {
                  uVar29 = (ulong)*(short *)((long)local_200 +
                                            (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
                }
                else {
                  psVar16 = (short *)*param_4;
                  iVar10 = (int)param_4[3];
                  if ((int)local_3a8 < 0x20) {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      psVar16 = (short *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)psVar16 + 0xbU & 0xfffffffffffffff8;
                    }
                    uVar27 = *(undefined4 *)psVar16;
                    *(undefined4 *)
                     ((long)local_200 +
                     (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) = uVar27;
                    uVar29 = (ulong)(short)uVar27;
                    local_3a8 = local_3a8 + 1;
                  }
                  else {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      psVar16 = (short *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)psVar16 + 0xbU & 0xfffffffffffffff8;
                    }
                    uVar29 = (ulong)*psVar16;
                  }
                }
                goto LAB_71008265f8;
              }
              if (iVar10 < (int)local_3a8) {
                uVar29 = (ulong)*(short *)((long)local_200 +
                                          (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              }
              else {
                psVar16 = (short *)FUN_7100825168(param_1,uVar29,pbVar21,param_4,&local_3a8,
                                                  local_200,local_300,&local_3a0);
                uVar29 = (ulong)*psVar16;
              }
            }
            else if (bVar5) {
              if (bVar8) {
                if (iVar10 < (int)local_3a8) {
                  uVar29 = (ulong)*(char *)((long)local_200 +
                                           (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
                }
                else {
                  pcVar38 = (char *)FUN_7100825168(param_1,uVar29,pbVar21,param_4,&local_3a8,
                                                   local_200,local_300,&local_3a0);
                  uVar29 = (ulong)*pcVar38;
                }
              }
              else {
                if ((int)uVar30 < (int)local_3a8) {
                  uVar29 = (ulong)*(char *)((long)local_200 +
                                           (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
                }
                else {
                  pcVar38 = (char *)*param_4;
                  iVar10 = (int)param_4[3];
                  if ((int)local_3a8 < 0x20) {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      pcVar38 = (char *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (ulong)(pcVar38 + 0xb) & 0xfffffffffffffff8;
                    }
                    uVar27 = *(undefined4 *)pcVar38;
                    *(undefined4 *)
                     ((long)local_200 +
                     (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) = uVar27;
                    uVar29 = (ulong)(char)uVar27;
                    local_3a8 = local_3a8 + 1;
                  }
                  else {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      pcVar38 = (char *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (ulong)(pcVar38 + 0xb) & 0xfffffffffffffff8;
                    }
                    uVar29 = (ulong)*pcVar38;
                  }
                }
LAB_71008265f8:
                uVar30 = uVar30 + 1;
              }
            }
            else {
              if (!bVar8) {
                if ((int)uVar30 < (int)local_3a8) {
                  uVar29 = (ulong)*(int *)((long)local_200 +
                                          (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
                }
                else {
                  piVar25 = (int *)*param_4;
                  iVar10 = (int)param_4[3];
                  if ((int)local_3a8 < 0x20) {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      piVar25 = (int *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)piVar25 + 0xbU & 0xfffffffffffffff8;
                    }
                    iVar10 = *piVar25;
                    *(int *)((long)local_200 +
                            (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) =
                         iVar10;
                    uVar29 = (ulong)iVar10;
                    local_3a8 = local_3a8 + 1;
                  }
                  else {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      piVar25 = (int *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)piVar25 + 0xbU & 0xfffffffffffffff8;
                    }
                    uVar29 = (ulong)*piVar25;
                  }
                }
                goto LAB_71008265f8;
              }
              if (iVar10 < (int)local_3a8) {
                uVar29 = (ulong)*(int *)((long)local_200 +
                                        (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              }
              else {
                piVar25 = (int *)FUN_7100825168(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200,
                                                local_300,&local_3a0);
                uVar29 = (ulong)*piVar25;
              }
            }
            if (-1 < (long)uVar29) {
              if ((int)uVar12 < 0) goto LAB_7100827ae4;
              iVar10 = 1;
LAB_7100827a8c:
              uVar37 = uVar37 & 0xffffff7f;
              if (uVar29 != 0 || uVar12 != 0) goto LAB_7100827a9c;
              if (iVar10 == 0) {
                uVar12 = (uint)bVar6;
                if (bVar6 != false) {
                  uVar12 = 0;
                  local_306[1] = '0';
                  goto LAB_7100827be4;
                }
              }
              else {
                uVar12 = 0;
              }
              pcVar38 = local_306 + 2;
              goto LAB_7100827c18;
            }
            uVar29 = -uVar29;
            local_3b1 = '-';
            iVar10 = 1;
LAB_7100827a70:
            if (-1 < (int)uVar12) goto LAB_7100827a8c;
LAB_7100827a9c:
            if (iVar10 != 1) {
              pcVar38 = local_306 + 2;
              if (iVar10 == 2) {
                do {
                  uVar18 = uVar29 & 0xf;
                  uVar29 = uVar29 >> 4;
                  pcVar38 = pcVar38 + -1;
                  *pcVar38 = local_430[uVar18];
                } while (uVar29 != 0);
              }
              else {
                do {
                  pcVar40 = pcVar38;
                  iVar10 = ((uint)uVar29 & 7) + 0x30;
                  pcVar38 = pcVar40 + -1;
                  *pcVar38 = (char)iVar10;
                  uVar29 = uVar29 >> 3;
                } while (uVar29 != 0);
                if ((bVar6 != false) && (iVar10 != 0x30)) {
                  pcVar40[-2] = '0';
                  pcVar38 = pcVar40 + -2;
                }
              }
              goto LAB_7100827c18;
            }
LAB_7100827ae4:
            if (9 < uVar29) {
              pcVar40 = local_306 + 2;
              uVar13 = 0;
              goto LAB_7100827b28;
            }
            local_306[1] = (char)uVar29 + '0';
LAB_7100827be4:
            pcVar38 = local_306 + 1;
            goto LAB_7100827c18;
          case 0x68:
            if (*param_3 == 0x68) {
              bVar5 = true;
              param_3 = param_3 + 1;
            }
            else {
              bVar4 = true;
            }
            goto LAB_7100825b64;
          case 0x6a:
          case 0x74:
          case 0x7a:
            goto switchD_7100825b84_caseD_6a;
          case 0x6c:
            if (*param_3 == 0x6c) {
              param_3 = param_3 + 1;
              goto switchD_7100825b84_caseD_71;
            }
switchD_7100825b84_caseD_6a:
            bVar2 = true;
            goto LAB_7100825b64;
          case 0x6e:
            uVar18 = (ulong)local_3a8;
            if ((bVar3) || (bVar2)) {
              if (bVar8) {
                if (iVar10 < (int)local_3a8) {
                  plVar22 = *(long **)((long)local_200 +
                                      (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
                }
                else {
                  puVar17 = (undefined8 *)
                            FUN_7100825168(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200,
                                           local_300,&local_3a0);
                  plVar22 = (long *)*puVar17;
                }
              }
              else {
                local_460 = (ulong)(uVar30 + 1);
                if ((int)uVar30 < (int)local_3a8) {
                  plVar22 = *(long **)((long)local_200 +
                                      (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
                }
                else {
                  puVar17 = (undefined8 *)*param_4;
                  iVar10 = (int)param_4[3];
                  if ((int)local_3a8 < 0x20) {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      puVar17 = (undefined8 *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)puVar17 + 0xfU & 0xfffffffffffffff8;
                    }
                    plVar22 = (long *)*puVar17;
                    *(long **)((long)local_200 +
                              (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) =
                         plVar22;
                    local_3a8 = local_3a8 + 1;
                  }
                  else {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      puVar17 = (undefined8 *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)puVar17 + 0xfU & 0xfffffffffffffff8;
                    }
                    plVar22 = (long *)*puVar17;
                  }
                }
              }
              *plVar22 = (long)local_454;
              pbVar21 = param_3;
            }
            else if (bVar4) {
              if (bVar8) {
                if (iVar10 < (int)local_3a8) {
                  puVar23 = *(undefined2 **)
                             ((long)local_200 +
                             (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
                }
                else {
                  puVar17 = (undefined8 *)
                            FUN_7100825168(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200,
                                           local_300,&local_3a0);
                  puVar23 = (undefined2 *)*puVar17;
                }
              }
              else {
                local_460 = (ulong)(uVar30 + 1);
                if ((int)uVar30 < (int)local_3a8) {
                  puVar23 = *(undefined2 **)
                             ((long)local_200 +
                             (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
                }
                else {
                  puVar17 = (undefined8 *)*param_4;
                  iVar10 = (int)param_4[3];
                  if ((int)local_3a8 < 0x20) {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      puVar17 = (undefined8 *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)puVar17 + 0xfU & 0xfffffffffffffff8;
                    }
                    puVar23 = (undefined2 *)*puVar17;
                    *(undefined2 **)
                     ((long)local_200 +
                     (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) = puVar23;
                    local_3a8 = local_3a8 + 1;
                  }
                  else {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      puVar17 = (undefined8 *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)puVar17 + 0xfU & 0xfffffffffffffff8;
                    }
                    puVar23 = (undefined2 *)*puVar17;
                  }
                }
              }
              *puVar23 = (undefined2)local_454;
              pbVar21 = param_3;
            }
            else if (bVar5) {
              if (bVar8) {
                if (iVar10 < (int)local_3a8) {
                  puVar24 = *(undefined1 **)
                             ((long)local_200 +
                             (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
                }
                else {
                  puVar17 = (undefined8 *)
                            FUN_7100825168(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200,
                                           local_300,&local_3a0);
                  puVar24 = (undefined1 *)*puVar17;
                }
              }
              else {
                local_460 = (ulong)(uVar30 + 1);
                if ((int)uVar30 < (int)local_3a8) {
                  puVar24 = *(undefined1 **)
                             ((long)local_200 +
                             (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
                }
                else {
                  puVar17 = (undefined8 *)*param_4;
                  iVar10 = (int)param_4[3];
                  if ((int)local_3a8 < 0x20) {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      puVar17 = (undefined8 *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)puVar17 + 0xfU & 0xfffffffffffffff8;
                    }
                    puVar24 = (undefined1 *)*puVar17;
                    *(undefined1 **)
                     ((long)local_200 +
                     (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) = puVar24;
                    local_3a8 = local_3a8 + 1;
                  }
                  else {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      puVar17 = (undefined8 *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)puVar17 + 0xfU & 0xfffffffffffffff8;
                    }
                    puVar24 = (undefined1 *)*puVar17;
                  }
                }
              }
              *puVar24 = (undefined1)local_454;
              pbVar21 = param_3;
            }
            else {
              if (bVar8) {
                if (iVar10 < (int)local_3a8) {
                  piVar25 = *(int **)((long)local_200 +
                                     (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
                }
                else {
                  puVar17 = (undefined8 *)
                            FUN_7100825168(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200,
                                           local_300,&local_3a0);
                  piVar25 = (int *)*puVar17;
                }
              }
              else {
                local_460 = (ulong)(uVar30 + 1);
                if ((int)uVar30 < (int)local_3a8) {
                  piVar25 = *(int **)((long)local_200 +
                                     (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
                }
                else {
                  puVar17 = (undefined8 *)*param_4;
                  iVar10 = (int)param_4[3];
                  if ((int)local_3a8 < 0x20) {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      puVar17 = (undefined8 *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)puVar17 + 0xfU & 0xfffffffffffffff8;
                    }
                    piVar25 = (int *)*puVar17;
                    *(int **)((long)local_200 +
                             (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) =
                         piVar25;
                    local_3a8 = local_3a8 + 1;
                  }
                  else {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      puVar17 = (undefined8 *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)puVar17 + 0xfU & 0xfffffffffffffff8;
                    }
                    piVar25 = (int *)*puVar17;
                  }
                }
              }
              *piVar25 = local_454;
              pbVar21 = param_3;
            }
            goto LAB_7100825a64;
          case 0x6f:
LAB_7100826a2c:
            uVar18 = (ulong)local_3a8;
            if ((bVar3) || (bVar2)) {
              if (!bVar8) {
                if ((int)uVar30 < (int)local_3a8) {
                  uVar29 = *(ulong *)((long)local_200 +
                                     (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
                }
                else {
                  puVar19 = (ulong *)*param_4;
                  iVar10 = (int)param_4[3];
                  if ((int)local_3a8 < 0x20) {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      puVar19 = (ulong *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                    }
                    uVar29 = *puVar19;
                    *(ulong *)((long)local_200 +
                              (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) =
                         uVar29;
                    local_3a8 = local_3a8 + 1;
                  }
                  else {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      puVar19 = (ulong *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                    }
                    uVar29 = *puVar19;
                  }
                }
                goto LAB_7100826e04;
              }
              if (iVar10 < (int)local_3a8) {
                uVar29 = *(ulong *)((long)local_200 +
                                   (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              }
              else {
                puVar19 = (ulong *)FUN_7100825168(param_1,uVar29,pbVar21,param_4,&local_3a8,
                                                  local_200,local_300,&local_3a0);
                uVar29 = *puVar19;
              }
            }
            else if (bVar4) {
              if (!bVar8) {
                if ((int)uVar30 < (int)local_3a8) {
                  uVar29 = (ulong)*(ushort *)
                                   ((long)local_200 +
                                   (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
                }
                else {
                  puVar26 = (uint *)*param_4;
                  iVar10 = (int)param_4[3];
                  if ((int)local_3a8 < 0x20) {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      puVar26 = (uint *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                    }
                    uVar13 = *puVar26;
                    *(uint *)((long)local_200 +
                             (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) =
                         uVar13;
                    uVar29 = (ulong)uVar13 & 0xffff;
                    local_3a8 = local_3a8 + 1;
                  }
                  else {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      puVar26 = (uint *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                    }
                    uVar29 = (ulong)(ushort)*puVar26;
                  }
                }
                goto LAB_7100826e04;
              }
              if (iVar10 < (int)local_3a8) {
                uVar29 = (ulong)*(ushort *)
                                 ((long)local_200 +
                                 (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              }
              else {
                puVar20 = (ushort *)
                          FUN_7100825168(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200,
                                         local_300,&local_3a0);
                uVar29 = (ulong)*puVar20;
              }
            }
            else if (bVar5) {
              if (bVar8) {
                if (iVar10 < (int)local_3a8) {
                  uVar29 = (ulong)*(byte *)((long)local_200 +
                                           (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
                }
                else {
                  pbVar21 = (byte *)FUN_7100825168(param_1,uVar29,pbVar21,param_4,&local_3a8,
                                                   local_200,local_300,&local_3a0);
                  uVar29 = (ulong)*pbVar21;
                }
              }
              else {
                if ((int)uVar30 < (int)local_3a8) {
                  uVar29 = (ulong)*(byte *)((long)local_200 +
                                           (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
                }
                else {
                  puVar26 = (uint *)*param_4;
                  iVar10 = (int)param_4[3];
                  if ((int)local_3a8 < 0x20) {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      puVar26 = (uint *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                    }
                    uVar13 = *puVar26;
                    *(uint *)((long)local_200 +
                             (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) =
                         uVar13;
                    uVar29 = (ulong)uVar13 & 0xff;
                    local_3a8 = local_3a8 + 1;
                  }
                  else {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      puVar26 = (uint *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                    }
                    uVar29 = (ulong)(byte)*puVar26;
                  }
                }
LAB_7100826e04:
                uVar30 = uVar30 + 1;
              }
            }
            else {
              if (!bVar8) {
                if ((int)uVar30 < (int)local_3a8) {
                  uVar29 = (ulong)*(uint *)((long)local_200 +
                                           (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
                }
                else {
                  puVar26 = (uint *)*param_4;
                  iVar10 = (int)param_4[3];
                  if ((int)local_3a8 < 0x20) {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      puVar26 = (uint *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                    }
                    uVar13 = *puVar26;
                    *(uint *)((long)local_200 +
                             (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) =
                         uVar13;
                    uVar29 = (ulong)uVar13;
                    local_3a8 = local_3a8 + 1;
                  }
                  else {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      puVar26 = (uint *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                    }
                    uVar29 = (ulong)*puVar26;
                  }
                }
                goto LAB_7100826e04;
              }
              if (iVar10 < (int)local_3a8) {
                uVar29 = (ulong)*(uint *)((long)local_200 +
                                         (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              }
              else {
                puVar26 = (uint *)FUN_7100825168(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200
                                                 ,local_300,&local_3a0);
                uVar29 = (ulong)*puVar26;
              }
            }
            bVar9 = false;
            bVar7 = false;
            iVar10 = 0;
LAB_7100827a6c:
            local_3b1 = '\0';
            goto LAB_7100827a70;
          case 0x70:
            if (bVar8) {
              if (iVar10 < (int)local_3a8) {
                uVar29 = *(ulong *)((long)local_200 +
                                   (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              }
              else {
                puVar19 = (ulong *)FUN_7100825168(param_1,uVar29,pbVar21,param_4,&local_3a8,
                                                  local_200,local_300,&local_3a0);
                uVar29 = *puVar19;
              }
            }
            else {
              uVar13 = uVar30 + 1;
              if ((int)uVar30 < (int)local_3a8) {
                uVar29 = *(ulong *)((long)local_200 +
                                   (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
                uVar30 = uVar13;
              }
              else {
                puVar19 = (ulong *)*param_4;
                iVar10 = (int)param_4[3];
                if ((int)local_3a8 < 0x20) {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar19 = (ulong *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                  }
                  uVar29 = *puVar19;
                  *(ulong *)((long)local_200 +
                            (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 |
                            (ulong)local_3a8 << 4)) = uVar29;
                  uVar30 = uVar13;
                  local_3a8 = local_3a8 + 1;
                }
                else {
                  if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                    puVar19 = (ulong *)(param_4[1] + (long)iVar10);
                  }
                  else {
                    *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                  }
                  uVar29 = *puVar19;
                  uVar30 = uVar13;
                }
              }
            }
            bVar9 = true;
            local_3b0 = 0x7830;
            local_430 = "0123456789abcdef";
            goto LAB_7100827a68;
          case 0x71:
switchD_7100825b84_caseD_71:
            bVar3 = true;
            goto LAB_7100825b64;
          case 0x75:
LAB_7100827264:
            uVar18 = (ulong)local_3a8;
            if ((bVar3) || (bVar2)) {
              if (!bVar8) {
                if ((int)uVar30 < (int)local_3a8) {
                  uVar29 = *(ulong *)((long)local_200 +
                                     (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
                }
                else {
                  puVar19 = (ulong *)*param_4;
                  iVar10 = (int)param_4[3];
                  if ((int)local_3a8 < 0x20) {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      puVar19 = (ulong *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                    }
                    uVar29 = *puVar19;
                    *(ulong *)((long)local_200 +
                              (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) =
                         uVar29;
                    local_3a8 = local_3a8 + 1;
                  }
                  else {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      puVar19 = (ulong *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                    }
                    uVar29 = *puVar19;
                  }
                }
                goto LAB_7100827550;
              }
              if (iVar10 < (int)local_3a8) {
                uVar29 = *(ulong *)((long)local_200 +
                                   (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              }
              else {
                puVar19 = (ulong *)FUN_7100825168(param_1,uVar29,pbVar21,param_4,&local_3a8,
                                                  local_200,local_300,&local_3a0);
                uVar29 = *puVar19;
              }
            }
            else if (bVar4) {
              if (!bVar8) {
                if ((int)uVar30 < (int)local_3a8) {
                  uVar29 = (ulong)*(ushort *)
                                   ((long)local_200 +
                                   (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
                }
                else {
                  puVar26 = (uint *)*param_4;
                  iVar10 = (int)param_4[3];
                  if ((int)local_3a8 < 0x20) {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      puVar26 = (uint *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                    }
                    uVar13 = *puVar26;
                    *(uint *)((long)local_200 +
                             (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) =
                         uVar13;
                    uVar29 = (ulong)uVar13 & 0xffff;
                    local_3a8 = local_3a8 + 1;
                  }
                  else {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      puVar26 = (uint *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                    }
                    uVar29 = (ulong)(ushort)*puVar26;
                  }
                }
                goto LAB_7100827550;
              }
              if (iVar10 < (int)local_3a8) {
                uVar29 = (ulong)*(ushort *)
                                 ((long)local_200 +
                                 (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              }
              else {
                puVar20 = (ushort *)
                          FUN_7100825168(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200,
                                         local_300,&local_3a0);
                uVar29 = (ulong)*puVar20;
              }
            }
            else if (bVar5) {
              if (bVar8) {
                if (iVar10 < (int)local_3a8) {
                  uVar29 = (ulong)*(byte *)((long)local_200 +
                                           (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
                }
                else {
                  pbVar21 = (byte *)FUN_7100825168(param_1,uVar29,pbVar21,param_4,&local_3a8,
                                                   local_200,local_300,&local_3a0);
                  uVar29 = (ulong)*pbVar21;
                }
              }
              else {
                if ((int)uVar30 < (int)local_3a8) {
                  uVar29 = (ulong)*(byte *)((long)local_200 +
                                           (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
                }
                else {
                  puVar26 = (uint *)*param_4;
                  iVar10 = (int)param_4[3];
                  if ((int)local_3a8 < 0x20) {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      puVar26 = (uint *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                    }
                    uVar13 = *puVar26;
                    *(uint *)((long)local_200 +
                             (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) =
                         uVar13;
                    uVar29 = (ulong)uVar13 & 0xff;
                    local_3a8 = local_3a8 + 1;
                  }
                  else {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      puVar26 = (uint *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                    }
                    uVar29 = (ulong)(byte)*puVar26;
                  }
                }
LAB_7100827550:
                uVar30 = uVar30 + 1;
              }
            }
            else {
              if (!bVar8) {
                if ((int)uVar30 < (int)local_3a8) {
                  uVar29 = (ulong)*(uint *)((long)local_200 +
                                           (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
                }
                else {
                  puVar26 = (uint *)*param_4;
                  iVar10 = (int)param_4[3];
                  if ((int)local_3a8 < 0x20) {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      puVar26 = (uint *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                    }
                    uVar13 = *puVar26;
                    *(uint *)((long)local_200 +
                             (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) =
                         uVar13;
                    uVar29 = (ulong)uVar13;
                    local_3a8 = local_3a8 + 1;
                  }
                  else {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      puVar26 = (uint *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                    }
                    uVar29 = (ulong)*puVar26;
                  }
                }
                goto LAB_7100827550;
              }
              if (iVar10 < (int)local_3a8) {
                uVar29 = (ulong)*(uint *)((long)local_200 +
                                         (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              }
              else {
                puVar26 = (uint *)FUN_7100825168(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200
                                                 ,local_300,&local_3a0);
                uVar29 = (ulong)*puVar26;
              }
            }
            iVar10 = 1;
            goto LAB_7100827a6c;
          case 0x78:
            local_430 = "0123456789abcdef";
LAB_7100827664:
            uVar18 = (ulong)local_3a8;
            if ((bVar3) || (bVar2)) {
              if (!bVar8) {
                if ((int)uVar30 < (int)local_3a8) {
                  uVar29 = *(ulong *)((long)local_200 +
                                     (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
                }
                else {
                  puVar19 = (ulong *)*param_4;
                  iVar10 = (int)param_4[3];
                  if ((int)local_3a8 < 0x20) {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      puVar19 = (ulong *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                    }
                    uVar29 = *puVar19;
                    *(ulong *)((long)local_200 +
                              (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) =
                         uVar29;
                    local_3a8 = local_3a8 + 1;
                  }
                  else {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      puVar19 = (ulong *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                    }
                    uVar29 = *puVar19;
                  }
                }
                goto LAB_7100827a48;
              }
              if (iVar10 < (int)local_3a8) {
                uVar29 = *(ulong *)((long)local_200 +
                                   (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              }
              else {
                puVar19 = (ulong *)FUN_7100825168(param_1,uVar29,pbVar21,param_4,&local_3a8,
                                                  local_200,local_300,&local_3a0);
                uVar29 = *puVar19;
              }
            }
            else if (bVar4) {
              if (!bVar8) {
                if ((int)uVar30 < (int)local_3a8) {
                  uVar29 = (ulong)*(ushort *)
                                   ((long)local_200 +
                                   (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
                }
                else {
                  puVar26 = (uint *)*param_4;
                  iVar10 = (int)param_4[3];
                  if ((int)local_3a8 < 0x20) {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      puVar26 = (uint *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                    }
                    uVar13 = *puVar26;
                    *(uint *)((long)local_200 +
                             (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) =
                         uVar13;
                    uVar29 = (ulong)uVar13 & 0xffff;
                    local_3a8 = local_3a8 + 1;
                  }
                  else {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      puVar26 = (uint *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                    }
                    uVar29 = (ulong)(ushort)*puVar26;
                  }
                }
                goto LAB_7100827a48;
              }
              if (iVar10 < (int)local_3a8) {
                uVar29 = (ulong)*(ushort *)
                                 ((long)local_200 +
                                 (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              }
              else {
                puVar20 = (ushort *)
                          FUN_7100825168(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200,
                                         local_300,&local_3a0);
                uVar29 = (ulong)*puVar20;
              }
            }
            else if (bVar5) {
              if (bVar8) {
                if (iVar10 < (int)local_3a8) {
                  uVar29 = (ulong)*(byte *)((long)local_200 +
                                           (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
                }
                else {
                  pbVar21 = (byte *)FUN_7100825168(param_1,uVar29,pbVar21,param_4,&local_3a8,
                                                   local_200,local_300,&local_3a0);
                  uVar29 = (ulong)*pbVar21;
                }
              }
              else {
                if ((int)uVar30 < (int)local_3a8) {
                  uVar29 = (ulong)*(byte *)((long)local_200 +
                                           (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
                }
                else {
                  puVar26 = (uint *)*param_4;
                  iVar10 = (int)param_4[3];
                  if ((int)local_3a8 < 0x20) {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      puVar26 = (uint *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                    }
                    uVar13 = *puVar26;
                    *(uint *)((long)local_200 +
                             (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) =
                         uVar13;
                    uVar29 = (ulong)uVar13 & 0xff;
                    local_3a8 = local_3a8 + 1;
                  }
                  else {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      puVar26 = (uint *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                    }
                    uVar29 = (ulong)(byte)*puVar26;
                  }
                }
LAB_7100827a48:
                uVar30 = uVar30 + 1;
              }
            }
            else {
              if (!bVar8) {
                if ((int)uVar30 < (int)local_3a8) {
                  uVar29 = (ulong)*(uint *)((long)local_200 +
                                           (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
                }
                else {
                  puVar26 = (uint *)*param_4;
                  iVar10 = (int)param_4[3];
                  if ((int)local_3a8 < 0x20) {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      puVar26 = (uint *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                    }
                    uVar13 = *puVar26;
                    *(uint *)((long)local_200 +
                             (-(ulong)(local_3a8 >> 0x1f) & 0xfffffff000000000 | uVar18 << 4)) =
                         uVar13;
                    uVar29 = (ulong)uVar13;
                    local_3a8 = local_3a8 + 1;
                  }
                  else {
                    if ((iVar10 < 0) && (*(int *)(param_4 + 3) = iVar10 + 8, iVar10 + 8 < 1)) {
                      puVar26 = (uint *)(param_4[1] + (long)iVar10);
                    }
                    else {
                      *param_4 = (long)puVar26 + 0xbU & 0xfffffffffffffff8;
                    }
                    uVar29 = (ulong)*puVar26;
                  }
                }
                goto LAB_7100827a48;
              }
              if (iVar10 < (int)local_3a8) {
                uVar29 = (ulong)*(uint *)((long)local_200 +
                                         (-(uVar29 >> 0x1f) & 0xfffffff000000000 | uVar29 << 4));
              }
              else {
                puVar26 = (uint *)FUN_7100825168(param_1,uVar29,pbVar21,param_4,&local_3a8,local_200
                                                 ,local_300,&local_3a0);
                uVar29 = (ulong)*puVar26;
              }
            }
            if ((bVar6) && (uVar29 != 0)) {
              bVar9 = true;
              local_3b0 = CONCAT11((char)uVar34,0x30);
            }
            bVar7 = false;
LAB_7100827a68:
            iVar10 = 2;
            goto LAB_7100827a6c;
          }
          bVar8 = false;
          param_3 = pbVar28;
        } while( true );
      }
LAB_71008281a8:
      if ((local_370 == 0) || (iVar10 = FUN_7100828d40(param_1,param_2,&local_380), iVar10 == 0)) {
        local_378 = 0;
      }
      goto LAB_7100828218;
    }
    if (iVar10 < 0) {
      iVar10 = 1;
      FUN_7100808340(auStack_398,0,8);
    }
    else if (local_3a4 == 0x25) goto LAB_7100825ad0;
    pbVar21 = pbVar21 + iVar10;
  } while( true );
LAB_71008270c8:
  uVar13 = uVar39;
  pcVar40 = local_388;
  if (*(int *)(local_388 + lVar14) == 0) goto LAB_7100827174;
  iVar10 = FUN_7100816a40(param_1,local_368,*(int *)(local_388 + lVar14),auStack_390);
  if (iVar10 == -1) goto LAB_7100827198;
  uVar39 = uVar39 + iVar10;
  pcVar40 = local_388;
  if (((int)uVar12 < (int)uVar39) || (lVar14 = lVar14 + 4, uVar13 = uVar12, uVar39 == uVar12))
  goto LAB_7100827174;
  goto LAB_71008270c8;
LAB_7100827174:
  local_388 = pcVar40;
  uVar12 = uVar13;
  if (uVar12 != 0) {
    if ((int)uVar12 < 100) {
      pcVar38 = local_368;
      pcVar40 = (char *)0x0;
    }
    else {
      pcVar38 = (char *)FUN_7100814ca0(param_1,(long)(int)(uVar12 + 1));
      pcVar40 = pcVar38;
      if (pcVar38 == (char *)0x0) {
LAB_7100827198:
        *(ushort *)(param_2 + 0x10) = *(ushort *)(param_2 + 0x10) | 0x40;
        goto LAB_7100828218;
      }
    }
    FUN_7100808340(auStack_390,0,8);
    lVar31 = (long)(int)uVar12;
    lVar14 = FUN_710081fbe0(param_1,pcVar38,&local_388,lVar31,auStack_390);
    if (lVar31 != lVar14) {
      *(ushort *)(param_2 + 0x10) = *(ushort *)(param_2 + 0x10) | 0x40;
LAB_7100828200:
      if (pcVar40 != (char *)0x0) {
        FUN_7100816da0(param_1,pcVar40);
      }
LAB_7100828218:
      if (((*(uint *)(param_2 + 0xb4) & 1) == 0) && ((*(ushort *)(param_2 + 0x10) >> 9 & 1) == 0)) {
        FUN_7100836220(param_2 + 0xa0);
      }
      if ((*(ushort *)(param_2 + 0x10) >> 6 & 1) != 0) {
        return -1;
      }
      return local_454;
    }
    pcVar38[lVar31] = '\0';
    local_448 = 0;
    goto LAB_7100827c60;
  }
  local_448 = 0;
  uVar13 = uVar12;
  goto LAB_7100827c28;
LAB_7100827b28:
  pcVar38 = pcVar40 + -1;
  uVar13 = uVar13 + 1;
  pcVar40[-1] = (char)uVar29 + (char)(uVar29 / 10) * -10 + '0';
  if (((bVar7) && (*local_440 == uVar13)) && (uVar13 != 0xff)) {
    if (uVar29 < 10) goto LAB_7100827c18;
    pcVar40 = pcVar38 + -local_438;
    FUN_710081f760(pcVar40,local_428,local_438);
    if (local_440[1] == 0) {
      uVar13 = 0;
    }
    else {
      local_440 = local_440 + 1;
      uVar13 = 0;
    }
  }
  else {
    pcVar40 = pcVar38;
    if (uVar29 < 10) goto LAB_7100827c18;
  }
  uVar29 = uVar29 / 10;
  goto LAB_7100827b28;
LAB_7100827c18:
  local_460 = (ulong)uVar30;
  uVar13 = ((int)local_306 + 2) - (int)pcVar38;
  local_448 = uVar12;
LAB_7100827c28:
  uVar12 = uVar13;
  pcVar40 = (char *)0x0;
LAB_7100827c60:
  uVar13 = local_448;
  if ((int)local_448 < (int)uVar12) {
    uVar13 = uVar12;
  }
  if (local_3b1 != '\0') {
    uVar13 = uVar13 + 1;
  }
  if (bVar9) {
    uVar13 = uVar13 + 2;
  }
  if ((uVar37 == 0) && (iVar10 = uVar41 - uVar13, 0 < iVar10)) {
    while( true ) {
      local_378 = local_378 + 1;
      if (iVar10 < 0x11) break;
      *plVar32 = (long)&DAT_71009d3910;
      plVar32[1] = 0x10;
      local_370 = local_370 + 0x10;
      plVar32 = plVar32 + 2;
      if ((7 < local_378) &&
         (iVar35 = FUN_7100828d40(param_1,param_2,&local_380), plVar32 = local_280, iVar35 != 0))
      goto LAB_7100828200;
      iVar10 = iVar10 + -0x10;
    }
    *plVar32 = (long)&DAT_71009d3910;
    plVar32[1] = (long)iVar10;
    local_370 = iVar10 + local_370;
    plVar32 = plVar32 + 2;
    if ((7 < local_378) &&
       (iVar10 = FUN_7100828d40(param_1,param_2,&local_380), plVar32 = local_280, iVar10 != 0))
    goto LAB_7100828200;
  }
  if (local_3b1 != '\0') {
    *plVar32 = (long)&local_3b1;
    plVar32[1] = 1;
    local_370 = local_370 + 1;
    local_378 = local_378 + 1;
    if (local_378 < 8) {
      plVar32 = plVar32 + 2;
    }
    else {
      iVar10 = FUN_7100828d40(param_1,param_2,&local_380);
      plVar32 = local_280;
      if (iVar10 != 0) goto LAB_7100828200;
    }
  }
  if (bVar9) {
    *plVar32 = (long)&local_3b0;
    plVar32[1] = 2;
    local_370 = local_370 + 2;
    local_378 = local_378 + 1;
    if (local_378 < 8) {
      plVar32 = plVar32 + 2;
    }
    else {
      iVar10 = FUN_7100828d40(param_1,param_2,&local_380);
      plVar32 = local_280;
      if (iVar10 != 0) goto LAB_7100828200;
    }
  }
  if ((uVar37 == 0x80) && (iVar10 = uVar41 - uVar13, 0 < iVar10)) {
    while( true ) {
      local_378 = local_378 + 1;
      if (iVar10 < 0x11) break;
      *plVar32 = (long)&DAT_71009d3900;
      plVar32[1] = 0x10;
      local_370 = local_370 + 0x10;
      plVar32 = plVar32 + 2;
      if ((7 < local_378) &&
         (iVar35 = FUN_7100828d40(param_1,param_2,&local_380), plVar32 = local_280, iVar35 != 0))
      goto LAB_7100828200;
      iVar10 = iVar10 + -0x10;
    }
    *plVar32 = (long)&DAT_71009d3900;
    plVar32[1] = (long)iVar10;
    local_370 = iVar10 + local_370;
    plVar32 = plVar32 + 2;
    if ((7 < local_378) &&
       (iVar10 = FUN_7100828d40(param_1,param_2,&local_380), plVar32 = local_280, iVar10 != 0))
    goto LAB_7100828200;
  }
  iVar10 = local_448 - uVar12;
  if (0 < iVar10) {
    while( true ) {
      local_378 = local_378 + 1;
      if (iVar10 < 0x11) break;
      *plVar32 = (long)&DAT_71009d3900;
      plVar32[1] = 0x10;
      local_370 = local_370 + 0x10;
      plVar32 = plVar32 + 2;
      if ((7 < local_378) &&
         (iVar35 = FUN_7100828d40(param_1,param_2,&local_380), plVar32 = local_280, iVar35 != 0))
      goto LAB_7100828200;
      iVar10 = iVar10 + -0x10;
    }
    *plVar32 = (long)&DAT_71009d3900;
    plVar32[1] = (long)iVar10;
    local_370 = iVar10 + local_370;
    plVar32 = plVar32 + 2;
    if ((7 < local_378) &&
       (iVar10 = FUN_7100828d40(param_1,param_2,&local_380), plVar32 = local_280, iVar10 != 0))
    goto LAB_7100828200;
  }
  *plVar32 = (long)pcVar38;
  plVar32[1] = (long)(int)uVar12;
  local_370 = local_370 + (int)uVar12;
  local_378 = local_378 + 1;
  if (local_378 < 8) {
    plVar32 = plVar32 + 2;
  }
  else {
    iVar10 = FUN_7100828d40(param_1,param_2,&local_380);
    plVar32 = local_280;
    if (iVar10 != 0) goto LAB_7100828200;
  }
  if (((uVar37 >> 2 & 1) != 0) && (iVar10 = uVar41 - uVar13, 0 < iVar10)) {
    for (; local_378 = local_378 + 1, 0x10 < iVar10; iVar10 = iVar10 + -0x10) {
      *plVar32 = (long)&DAT_71009d3910;
      plVar32[1] = 0x10;
      local_370 = local_370 + 0x10;
      if (local_378 < 8) {
        plVar32 = plVar32 + 2;
      }
      else {
        iVar35 = FUN_7100828d40(param_1,param_2,&local_380);
        plVar32 = local_280;
        if (iVar35 != 0) goto LAB_7100828200;
      }
    }
    *plVar32 = (long)&DAT_71009d3910;
    plVar32[1] = (long)iVar10;
    local_370 = iVar10 + local_370;
    if ((7 < local_378) && (iVar10 = FUN_7100828d40(param_1,param_2,&local_380), iVar10 != 0))
    goto LAB_7100828200;
  }
  if ((int)uVar41 < (int)uVar13) {
    uVar41 = uVar13;
  }
  local_454 = local_454 + uVar41;
  if ((local_370 != 0) && (iVar10 = FUN_7100828d40(param_1,param_2,&local_380), iVar10 != 0))
  goto LAB_7100828200;
  local_378 = 0;
  pbVar21 = param_3;
  plVar32 = local_280;
  if (pcVar40 != (char *)0x0) {
    FUN_7100816da0(param_1,pcVar40);
  }
  goto LAB_7100825a64;
switchD_7100825b84_caseD_31:
  uVar13 = 0;
  do {
    uVar13 = (uVar34 - 0x30) + uVar13 * 10;
    param_3 = pbVar33 + 1;
    uVar34 = (uint)*pbVar33;
    pbVar33 = param_3;
  } while (uVar34 - 0x30 < 10);
  if (uVar34 == 0x24) goto code_r0x007100825f4c;
  goto LAB_7100825b68;
code_r0x007100825f4c:
  if (0x20 < (int)uVar13) goto LAB_7100828218;
  uVar29 = (ulong)(uVar13 - 1);
  bVar8 = true;
  goto LAB_7100825b64;
LAB_7100825dd0:
  if (0x20 < iVar10) goto LAB_7100828218;
  uVar12 = iVar10 - 1;
  if ((int)uVar12 < (int)local_3a8) {
    uVar12 = *(uint *)((long)local_200 +
                      (-(ulong)(uVar12 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar12 << 4));
  }
  else {
    puVar26 = (uint *)FUN_7100825168(param_1,(ulong)uVar12,pbVar21,param_4,&local_3a8,local_200,
                                     local_300,&local_3a0);
    uVar12 = *puVar26;
  }
LAB_7100825ed0:
  if ((int)uVar12 < 0) {
    uVar12 = 0xffffffff;
  }
  goto LAB_7100825b64;
LAB_7100825c50:
  if (0x20 < iVar10) goto LAB_7100828218;
  uVar41 = iVar10 - 1;
  if ((int)uVar41 < (int)local_3a8) {
    uVar41 = *(uint *)((long)local_200 +
                      (-(ulong)(uVar41 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar41 << 4));
  }
  else {
    puVar26 = (uint *)FUN_7100825168(param_1,(ulong)uVar41,pbVar21,param_4,&local_3a8,local_200,
                                     local_300,&local_3a0);
    uVar41 = *puVar26;
  }
LAB_7100825d54:
  if ((int)uVar41 < 0) {
    uVar41 = -uVar41;
    local_460 = (ulong)uVar30;
switchD_7100825b84_caseD_2d:
    uVar37 = uVar37 | 4;
    param_3 = pbVar33;
  }
  else {
    local_460 = (ulong)uVar30;
    param_3 = pbVar33;
  }
  goto LAB_7100825b64;
}



// ===== FUN_710082825c @ 710082825c (size=208) =====

int FUN_710082825c(undefined8 param_1,long param_2)

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
  iVar1 = FUN_71008258f8();
  if ((-1 < iVar1) && (iVar2 = FUN_710081c760(param_1,&local_4b8), iVar2 != 0)) {
    iVar1 = -1;
  }
  if ((local_4a8 >> 6 & 1) != 0) {
    *(ushort *)(param_2 + 0x10) = *(ushort *)(param_2 + 0x10) | 0x40;
  }
  return iVar1;
}



// ===== FUN_7100828340 @ 7100828340 (size=396) =====

ulong FUN_7100828340(undefined4 *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_2 < 0x11) {
    uVar7 = FUN_7100814ca0(param_1,param_3);
    return uVar7;
  }
  if (param_2 < 0x20) {
    param_2 = 0x20;
  }
  uVar7 = param_3 + 0x17 & 0xfffffffffffffff0;
  if (param_3 + 0x17 < 0x2f) {
    uVar7 = 0x20;
  }
  if (-param_2 - 0x21 < uVar7 || uVar7 < param_3) {
    *param_1 = 0xc;
  }
  else {
    uVar2 = FUN_7100814ca0(param_1,param_2 + 0x20 + uVar7);
    if (uVar2 != 0) {
      FUN_710081e680(param_1);
      uVar3 = 0;
      if (param_2 != 0) {
        uVar3 = uVar2 / param_2;
      }
      lVar6 = uVar2 - 0x10;
      if (uVar2 == uVar3 * param_2) {
        uVar3 = (*(ulong *)(uVar2 - 8) & 0xfffffffffffffffc) - uVar7;
      }
      else {
        lVar4 = (uVar2 + (param_2 - 1) & -param_2) - 0x10;
        lVar1 = lVar4 + param_2;
        uVar3 = lVar1 - lVar6;
        if (0x1f < lVar4 - lVar6) {
          uVar3 = lVar4 - lVar6;
          lVar1 = lVar4;
        }
        uVar5 = (*(ulong *)(uVar2 - 8) & 0xfffffffffffffffc) - uVar3;
        lVar6 = lVar1 + uVar5;
        *(ulong *)(lVar1 + 8) = uVar5 | 1;
        *(ulong *)(lVar6 + 8) = *(ulong *)(lVar6 + 8) | 1;
        *(ulong *)(uVar2 - 8) = *(ulong *)(uVar2 - 8) & 1 | uVar3;
        FUN_7100816da0(param_1,uVar2);
        uVar2 = lVar1 + 0x10;
        uVar3 = (*(ulong *)(lVar1 + 8) & 0xfffffffffffffffc) - uVar7;
        lVar6 = lVar1;
      }
      if (0x1f < (long)uVar3) {
        *(ulong *)(lVar6 + uVar7 + 8) = uVar3 | 1;
        *(ulong *)(lVar6 + 8) = *(ulong *)(lVar6 + 8) & 1 | uVar7;
        FUN_7100816da0(param_1);
      }
      FUN_710081e6a0(param_1);
      return uVar2;
    }
  }
  return 0;
}



// ===== FUN_71008284e0 @ 71008284e0 (size=28) =====

undefined8 FUN_71008284e0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_1 / param_2;
  }
  return CONCAT44(param_1 - iVar1 * param_2,iVar1);
}



// ===== FUN_7100828500 @ 7100828500 (size=392) =====

ulong FUN_7100828500(undefined4 *param_1,long param_2,long *param_3,long param_4,ulong param_5,
                    undefined8 *param_6,long param_7)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 local_18;
  undefined1 local_10 [16];
  
  uVar6 = 0;
  puVar2 = (undefined8 *)(param_1 + 0x51);
  if (param_6 != (undefined8 *)0x0) {
    puVar2 = param_6;
  }
  piVar7 = (int *)*param_3;
  lVar5 = param_2;
  if (param_2 == 0) {
    param_5 = 0xffffffffffffffff;
  }
  while( true ) {
    if (param_5 <= uVar6) {
      return uVar6;
    }
    if (param_4 == 0) {
      return uVar6;
    }
    local_18 = *puVar2;
    iVar3 = (**(code **)(param_7 + 0xe0))(param_1,local_10,*piVar7,puVar2);
    if (iVar3 == -1) {
      *param_1 = 0x8a;
      *(undefined4 *)puVar2 = 0;
      return 0xffffffffffffffff;
    }
    uVar1 = (long)iVar3 + uVar6;
    if (param_5 < uVar1) break;
    param_4 = param_4 + -1;
    if (param_2 == 0) {
      iVar3 = *piVar7;
    }
    else {
      if (0 < iVar3) {
        lVar4 = 1;
        do {
          *(undefined1 *)(lVar5 + -1 + lVar4) = local_10[lVar4 + -1];
          lVar4 = lVar4 + 1;
        } while ((long)iVar3 + 1 != lVar4);
        lVar5 = lVar5 + 1 + (ulong)(iVar3 - 1);
      }
      *param_3 = *param_3 + 4;
      iVar3 = *piVar7;
    }
    if (iVar3 == 0) {
      if (param_2 != 0) {
        *param_3 = 0;
      }
      *(undefined4 *)puVar2 = 0;
      return uVar1 - 1;
    }
    piVar7 = piVar7 + 1;
    uVar6 = uVar1;
  }
  *puVar2 = local_18;
  return uVar6;
}



// ===== FUN_71008286a0 @ 71008286a0 (size=84) =====

void FUN_71008286a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

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
  FUN_7100828500(uVar2,param_2,param_3,param_4,param_5,param_6,puVar1);
  return;
}



// ===== FUN_7100828700 @ 7100828700 (size=8) =====

void FUN_7100828700(undefined8 param_1)

{
  FUN_7100828f80(param_1,0);
  return;
}



// ===== FUN_7100828720 @ 7100828720 (size=32) =====

void FUN_7100828720(undefined8 param_1,undefined4 param_2,int param_3)

{
  if (1 < param_3 - 1U) {
    return;
  }
  FUN_71008334e0(param_2,param_3,0);
  return;
}



// ===== FUN_7100828740 @ 7100828740 (size=44) =====

void FUN_7100828740(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_7100828720(uVar1,param_1,param_2);
  return;
}



// ===== FUN_7100828780 @ 7100828780 (size=228) =====

uint FUN_7100828780(long param_1,byte param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x48) == 0)) {
    FUN_710080d840();
  }
  if (((*(uint *)((long)param_3 + 0xb4) & 1) == 0) && ((*(ushort *)(param_3 + 2) >> 9 & 1) == 0)) {
    FUN_7100836200(param_3 + 0x14);
  }
  iVar1 = *(int *)((long)param_3 + 0xc) + -1;
  *(int *)((long)param_3 + 0xc) = iVar1;
  if ((iVar1 < 0) && (iVar1 < (int)param_3[5] || param_2 == 10)) {
    uVar2 = FUN_7100830a00(param_1);
  }
  else {
    pbVar3 = (byte *)*param_3;
    uVar2 = (uint)param_2;
    *param_3 = (long)(pbVar3 + 1);
    *pbVar3 = param_2;
  }
  if (((*(uint *)((long)param_3 + 0xb4) & 1) == 0) && ((*(ushort *)(param_3 + 2) >> 9 & 1) == 0)) {
    FUN_7100836220(param_3 + 0x14);
    return uVar2;
  }
  return uVar2;
}



// ===== FUN_7100828880 @ 7100828880 (size=1216) =====

undefined8 FUN_7100828880(undefined4 *param_1,long *param_2,ulong param_3,uint param_4)

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
  uint local_64;
  long local_58;
  
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
        if ((iVar4 == 0) && ((local_64 & 0xf000) == 0x8000)) {
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
      uVar2 = param_3 + local_58;
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



// ===== FUN_7100828d40 @ 7100828d40 (size=56) =====

undefined8 FUN_7100828d40(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_3 + 0x10) == 0) {
    *(undefined4 *)(param_3 + 8) = 0;
    return 0;
  }
  uVar1 = FUN_71008235e0();
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined8 *)(param_3 + 0x10) = 0;
  return uVar1;
}



// ===== FUN_7100828d80 @ 7100828d80 (size=176) =====

void FUN_7100828d80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                   undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 uVar1;
  undefined8 local_168;
  undefined4 local_160;
  undefined2 local_158;
  undefined2 local_156;
  undefined8 local_150;
  undefined4 local_148;
  undefined1 *local_130;
  undefined8 local_110;
  undefined8 local_f0;
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
  
  local_158 = 0x204;
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
  local_160 = FUN_710081ce00();
  local_130 = &LAB_7100823d60;
  local_156 = 0xffff;
  local_110 = 0;
  local_f0 = 0;
  local_148 = local_160;
  uVar1 = FUN_7100834b00();
  FUN_7100830dc8(uVar1,&local_168,param_10);
  return;
}



// ===== FUN_7100828e40 @ 7100828e40 (size=8) =====

void FUN_7100828e40(undefined8 param_1)

{
  FUN_7100808140(param_1,0);
  return;
}



// ===== FUN_7100828e60 @ 7100828e60 (size=16) =====

bool FUN_7100828e60(int param_1)

{
  return param_1 - 0x30U < 10;
}



// ===== FUN_7100828e80 @ 7100828e80 (size=232) =====

long FUN_7100828e80(undefined8 param_1,long param_2,long param_3,long param_4,undefined4 *param_5)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  if (param_2 == 0) {
    param_4 = 1;
  }
  else if (param_4 == 0) {
    return 0;
  }
  lVar4 = 0;
  while( true ) {
    lVar3 = FUN_7100834b00();
    puVar1 = *(undefined **)(lVar3 + 0x40);
    if (*(undefined **)(lVar3 + 0x40) == (undefined *)0x0) {
      puVar1 = &DAT_7100af4978;
    }
    pcVar5 = *(code **)(puVar1 + 0xe8);
    iVar2 = FUN_7100809520();
    iVar2 = (*pcVar5)(param_1,param_2,param_3,(long)iVar2,param_5);
    if (iVar2 < 0) break;
    if (iVar2 == 0) {
      return lVar4;
    }
    lVar4 = lVar4 + 1;
    if (param_2 != 0) {
      param_4 = param_4 + -1;
      if (param_4 == 0) {
        return lVar4;
      }
      param_2 = param_2 + 4;
    }
    param_3 = param_3 + iVar2;
  }
  *param_5 = 0;
  return -1;
}



// ===== FUN_7100828f80 @ 7100828f80 (size=36) =====

bool FUN_7100828f80(void)

{
  int iVar1;
  
  iVar1 = FUN_710081ba40();
  return iVar1 - 3U < 6 || iVar1 == 0xd;
}



// ===== FUN_7100828fc0 @ 7100828fc0 (size=184) =====

uint FUN_7100828fc0(undefined4 *param_1,char *param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  cVar2 = *param_2;
  if (cVar2 == 'r') {
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 4;
  }
  else if (cVar2 == 'w') {
    uVar6 = 0x600;
    uVar5 = 1;
    uVar4 = 8;
  }
  else {
    if (cVar2 != 'a') {
      *param_1 = 0x16;
      return 0;
    }
    uVar6 = 0x208;
    uVar5 = 1;
    uVar4 = 0x108;
  }
LAB_7100829000:
  do {
    param_2 = param_2 + 1;
    cVar2 = *param_2;
    uVar1 = uVar4;
    while( true ) {
      uVar4 = uVar1;
      if (cVar2 == '\0') {
        *param_3 = uVar6 | uVar5;
        return uVar4;
      }
      if (cVar2 == 'b') {
        uVar5 = uVar5 | 0x10000;
        goto LAB_7100829000;
      }
      if (cVar2 == 'x') break;
      bVar3 = cVar2 != '+';
      uVar1 = uVar5 & 0xfffffffc | 2;
      if (bVar3) {
        uVar1 = uVar5;
      }
      param_2 = param_2 + 1;
      cVar2 = *param_2;
      uVar5 = uVar1;
      uVar1 = uVar4 & 0xffffffe3 | 0x10;
      if (bVar3) {
        uVar1 = uVar4;
      }
    }
    uVar5 = uVar5 | 0x800;
  } while( true );
}



// ===== FUN_7100829080 @ 7100829080 (size=284) =====

long FUN_7100829080(undefined4 *param_1,long param_2,long *param_3,long param_4,long param_5,
                   undefined4 *param_6)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_8;
  
  puVar1 = param_1 + 0x4d;
  if (param_6 != (undefined4 *)0x0) {
    puVar1 = param_6;
  }
  if (param_2 == 0) {
    lVar3 = *param_3;
    param_3 = &local_8;
    param_5 = -1;
    local_8 = lVar3;
  }
  else {
    if (param_5 == 0) {
      return 0;
    }
    lVar3 = *param_3;
  }
  lVar5 = 0;
  lVar4 = param_2;
  do {
    iVar2 = FUN_7100823160(param_1,lVar4,lVar3,param_4,puVar1);
    if (iVar2 < 1) {
      if (iVar2 == -2) {
        param_4 = *param_3 + param_4;
      }
      else {
        if (iVar2 != 0) {
          *puVar1 = 0;
          *param_1 = 0x8a;
          return -1;
        }
        param_4 = 0;
      }
      *param_3 = param_4;
      return lVar5;
    }
    lVar4 = lVar4 + 4;
    lVar5 = lVar5 + 1;
    param_4 = param_4 - iVar2;
    if (param_2 == 0) {
      lVar4 = 0;
    }
    lVar3 = *param_3 + (long)iVar2;
    *param_3 = lVar3;
  } while (param_5 != lVar5);
  return param_5;
}



// ===== FUN_71008291a0 @ 71008291a0 (size=8) =====

void FUN_71008291a0(undefined8 param_1)

{
  FUN_71008337e0(param_1,0);
  return;
}



// ===== FUN_71008291c0 @ 71008291c0 (size=8) =====

void FUN_71008291c0(undefined8 param_1)

{
  FUN_7100833800(param_1,0);
  return;
}



// ===== FUN_71008291e0 @ 71008291e0 (size=32) =====

uint FUN_71008291e0(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(0x7e0000007e03ff >> ((ulong)(param_1 - 0x30U) & 0x3f)) & 1;
  if (0x36 < param_1 - 0x30U) {
    uVar1 = 0;
  }
  return uVar1;
}



// ===== FUN_7100829200 @ 7100829200 (size=220) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_7100829200(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  
  FUN_7100836200(&DAT_7100d232d0);
  if (_DAT_7100d232c8 == (undefined1 *)0x0) {
    _DAT_7100d232c8 = &DAT_7100d22fb0;
  }
  puVar3 = _DAT_7100d232c8;
  uVar1 = *(uint *)(_DAT_7100d232c8 + 8);
  if ((int)uVar1 < 0x20) {
    if (param_1 != 0) {
      uVar2 = 1 << (ulong)(uVar1 & 0x1f);
      *(undefined8 *)(_DAT_7100d232c8 + (long)(int)uVar1 * 8 + 0x110) = param_3;
      *(uint *)(puVar3 + 0x310) = *(uint *)(puVar3 + 0x310) | uVar2;
      *(undefined8 *)(puVar3 + (long)(int)uVar1 * 8 + 0x210) = param_4;
      if (param_1 == 2) {
        *(uint *)(puVar3 + 0x314) = *(uint *)(puVar3 + 0x314) | uVar2;
      }
    }
    *(uint *)(puVar3 + 8) = uVar1 + 1;
    *(undefined8 *)(puVar3 + ((long)(int)uVar1 + 2) * 8) = param_2;
    FUN_7100836220(&DAT_7100d232d0);
    uVar4 = 0;
  }
  else {
    FUN_7100836220(&DAT_7100d232d0);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



// ===== FUN_71008292dc @ 71008292dc (size=616) =====

wchar_t * FUN_71008292dc(double param_1,undefined8 param_2,int param_3,ulong param_4,
                        undefined4 *param_5,int *param_6,uint param_7,int *param_8,wchar_t *param_9,
                        int param_10)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  undefined4 uVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  uint uVar9;
  wchar_t wVar10;
  int iVar11;
  double dVar12;
  undefined1 auStack_14 [4];
  char *local_10;
  char *local_8;
  
  if ((long)param_1 < 0) {
    param_1 = -param_1;
    uVar3 = 0x2d;
  }
  else {
    uVar3 = 0;
  }
  uVar9 = param_7 & 0xffffffdf;
  *param_5 = uVar3;
  if (uVar9 == 0x41) {
    dVar12 = (double)FUN_7100823560(param_6);
    dVar12 = dVar12 * 0.125;
    if (dVar12 == 0.0) {
      *param_6 = 1;
    }
    pwVar4 = param_9;
    pwVar1 = L"0123456789ABCDEF";
    if (param_7 == 0x61) {
      pwVar1 = L"0123456789abcdef";
    }
    do {
      uVar9 = (uint)(dVar12 * 16.0);
      pwVar5 = pwVar4 + 1;
      *pwVar4 = pwVar1[(int)uVar9];
      dVar12 = dVar12 * 16.0 - (double)(int)uVar9;
      if (param_3 == 0) {
        if ((dVar12 != 0.5 && dVar12 < 0.5 == NAN(dVar12)) ||
           ((dVar12 == 0.5 && ((uVar9 & 1) != 0)))) {
          wVar2 = pwVar1[0xf];
          pwVar4 = pwVar5;
          while( true ) {
            pwVar4 = pwVar4 + -1;
            wVar10 = *pwVar4;
            if (wVar10 != wVar2) break;
            *pwVar4 = L'0';
          }
          if (wVar10 == L'9') {
            wVar10 = pwVar1[10];
          }
          else {
            wVar10 = wVar10 + L'\x01';
          }
          *pwVar4 = wVar10;
          goto LAB_7100829438;
        }
        param_3 = -1;
        break;
      }
      param_3 = param_3 + -1;
      pwVar4 = pwVar5;
    } while (dVar12 != 0.0);
    for (lVar6 = 0; -1 < param_3 - (int)lVar6; lVar6 = lVar6 + 1) {
      pwVar5[lVar6] = L'0';
    }
    lVar6 = (ulong)(param_3 + 1) << 2;
    if (param_3 + 1 < 0 != SCARRY4(param_3,1)) {
      lVar6 = 0;
    }
    pwVar5 = (wchar_t *)((long)pwVar5 + lVar6);
LAB_7100829438:
    *param_8 = (int)((long)pwVar5 - (long)param_9 >> 2);
    return param_9;
  }
  if (uVar9 == 0x46) {
    uVar7 = 3;
  }
  else {
    uVar7 = 2;
    if (uVar9 == 0x45) {
      param_3 = param_3 + 1;
    }
  }
  local_10 = (char *)FUN_7100815720(param_2,uVar7,param_3,param_6,auStack_14,&local_8);
  if (uVar9 == 0x47) {
    if ((param_4 & 1) == 0) goto LAB_7100829494;
    pcVar8 = local_10 + param_3;
  }
  else {
    pcVar8 = local_10 + param_3;
    if (uVar9 == 0x46) {
      if ((*local_10 == '0') && (param_1 != 0.0)) {
        *param_6 = 1 - param_3;
      }
      pcVar8 = pcVar8 + *param_6;
    }
  }
  if (param_1 == 0.0) {
    local_8 = pcVar8;
  }
  while (local_8 < pcVar8) {
    *local_8 = '0';
    local_8 = local_8 + 1;
  }
LAB_7100829494:
  iVar11 = (int)local_8 - (int)local_10;
  *param_8 = iVar11;
  FUN_7100829080(param_2,param_9,&local_10,(long)iVar11,(long)param_10,0);
  return param_9;
}



// ===== FUN_7100829544 @ 7100829544 (size=1856) =====

long FUN_7100829544(int param_1,uint *param_2,ulong *param_3,uint *param_4,long param_5,int *param_6
                   ,long *param_7)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  bool bVar6;
  undefined8 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  uint *puVar20;
  undefined8 uVar21;
  
  puVar20 = (uint *)*param_7;
  if ((uint *)*param_7 == (uint *)0x0) {
    puVar20 = param_2;
  }
  uVar17 = (ulong)*param_4;
  iVar19 = param_1;
  while ((iVar16 = (int)uVar17, iVar14 = iVar19, *puVar20 != 0 &&
         (iVar14 = param_1, iVar16 <= param_1))) {
    while( true ) {
      uVar12 = *puVar20;
      if (uVar12 == 0x25 || uVar12 == 0) break;
      puVar20 = puVar20 + 1;
    }
    iVar14 = iVar19;
    if (uVar12 == 0) break;
    uVar13 = 0;
    iVar14 = 0;
    iVar16 = -1;
    iVar5 = 0;
    bVar4 = false;
    uVar18 = 0;
    puVar8 = puVar20;
    do {
      uVar12 = *puVar8;
      puVar20 = puVar8 + 1;
      if (uVar12 < 0x100) {
        uVar15 = (ulong)(byte)(&DAT_71009d35f0)[uVar12];
      }
      else {
        uVar15 = 8;
      }
      lVar11 = uVar18 * 9;
      bVar3 = (&DAT_71009d3580)[uVar15 + lVar11];
      uVar18 = (ulong)bVar3;
      switch("0000000000000000                "[uVar15 + lVar11 + 0x20]) {
      case '\x01':
        iVar14 = uVar12 - 0x30;
        for (; *puVar20 - 0x30 < 10; puVar20 = puVar20 + 1) {
          iVar14 = (*puVar20 - 0x30) + iVar14 * 10;
        }
        break;
      case '\x02':
        for (; *puVar20 - 0x30 < 10; puVar20 = puVar20 + 1) {
        }
        break;
      case '\x03':
        if (uVar12 == 0x71) {
          iVar5 = 1;
        }
        else if (uVar12 < 0x72) {
          if (uVar12 != 0x68) {
            if (uVar12 == 0x6a) goto LAB_71008296bc;
            if (uVar12 != 0x4c) goto LAB_71008296a4;
          }
        }
        else {
          if ((uVar12 != 0x74) && (uVar12 != 0x7a)) {
LAB_71008296a4:
            if (puVar8[1] == 0x6c) {
              iVar5 = 1;
              puVar20 = puVar8 + 2;
              break;
            }
          }
LAB_71008296bc:
          bVar4 = true;
        }
        break;
      case '\x04':
        uVar1 = (uint)uVar17 & 0x1f;
        uVar17 = (ulong)uVar1;
        if (uVar12 == 99) {
          uVar13 = (ulong)bVar4 << 4;
          if (bVar4) {
LAB_710082977c:
            if (iVar16 == -1) {
LAB_710082985c:
              iVar16 = (int)param_3[3];
              puVar9 = (undefined4 *)*param_3;
              if ((iVar16 < 0) && (*(int *)(param_3 + 3) = iVar16 + 8, iVar16 + 8 < 1)) {
                puVar9 = (undefined4 *)(param_3[1] + (long)iVar16);
              }
              else {
                *param_3 = (long)puVar9 + 0xbU & 0xfffffffffffffff8;
              }
              iVar16 = -1;
              *(undefined4 *)(param_5 + uVar17 * 0x10) = *puVar9;
              uVar17 = (ulong)(uVar1 + 1);
              uVar13 = 6;
            }
            else {
              uVar13 = 6;
LAB_7100829788:
              param_6[iVar16] = (int)uVar13;
            }
          }
          else {
            if (iVar16 != -1) goto LAB_7100829788;
LAB_71008298b8:
            iVar16 = (int)param_3[3];
            puVar9 = (undefined4 *)*param_3;
            if ((iVar16 < 0) && (*(int *)(param_3 + 3) = iVar16 + 8, iVar16 + 8 < 1)) {
              puVar9 = (undefined4 *)(param_3[1] + (long)iVar16);
            }
            else {
              *param_3 = (long)puVar9 + 0xbU & 0xfffffffffffffff8;
            }
            iVar16 = -1;
            *(undefined4 *)(param_5 + uVar17 * 0x10) = *puVar9;
            uVar17 = (ulong)(uVar1 + 1);
            uVar13 = 0;
          }
        }
        else if (uVar12 < 100) {
          if (uVar12 == 0x43) goto LAB_710082977c;
          if (uVar12 < 0x44) {
            bVar6 = uVar12 == 0x41;
LAB_7100829710:
            if (bVar6) goto LAB_7100829c20;
            goto LAB_7100829770;
          }
          if (uVar12 != 0x53) {
            if (uVar12 < 0x54) {
              if (uVar12 - 0x45 < 3) goto LAB_7100829c20;
              goto LAB_7100829770;
            }
            if (uVar12 == 0x58) goto LAB_7100829754;
            bVar6 = uVar12 == 0x61;
            goto LAB_7100829710;
          }
LAB_7100829c30:
          if (iVar16 != -1) {
            uVar13 = 3;
            goto LAB_7100829788;
          }
LAB_710082990c:
          iVar16 = (int)param_3[3];
          puVar7 = (undefined8 *)*param_3;
          if ((iVar16 < 0) && (*(int *)(param_3 + 3) = iVar16 + 8, iVar16 + 8 < 1)) {
            puVar7 = (undefined8 *)(param_3[1] + (long)iVar16);
          }
          else {
            *param_3 = (long)puVar7 + 0xfU & 0xfffffffffffffff8;
          }
          iVar16 = -1;
          *(undefined8 *)(param_5 + uVar17 * 0x10) = *puVar7;
          uVar17 = (ulong)(uVar1 + 1);
          uVar13 = 3;
        }
        else if (uVar12 - 100 < 0x15) {
          uVar15 = 1L << ((ulong)(uVar12 - 100) & 0x3f);
          if ((uVar15 & 0x120821) == 0) {
            if ((uVar15 & 0x9400) != 0) goto LAB_7100829c30;
            if ((uVar15 & 0xe) == 0) goto LAB_7100829770;
LAB_7100829c20:
            if (iVar16 != -1) {
              uVar13 = 4;
              goto LAB_7100829788;
            }
LAB_7100829960:
            iVar16 = *(int *)((long)param_3 + 0x1c);
            puVar7 = (undefined8 *)*param_3;
            if ((iVar16 < 0) && (*(int *)((long)param_3 + 0x1c) = iVar16 + 0x10, iVar16 + 0x10 < 1))
            {
              puVar7 = (undefined8 *)(param_3[2] + (long)iVar16);
            }
            else {
              *param_3 = (long)puVar7 + 0xfU & 0xfffffffffffffff8;
            }
            iVar16 = -1;
            *(undefined8 *)(param_5 + uVar17 * 0x10) = *puVar7;
            uVar17 = (ulong)(uVar1 + 1);
            uVar13 = 4;
          }
          else {
LAB_7100829754:
            if (bVar4 == false) {
              uVar13 = (ulong)(uint)(iVar5 << 1);
              goto LAB_7100829770;
            }
            if (iVar16 != -1) {
              uVar13 = 1;
              goto LAB_7100829788;
            }
LAB_71008297bc:
            iVar16 = (int)param_3[3];
            puVar7 = (undefined8 *)*param_3;
            if ((iVar16 < 0) && (*(int *)(param_3 + 3) = iVar16 + 8, iVar16 + 8 < 1)) {
              puVar7 = (undefined8 *)(param_3[1] + (long)iVar16);
            }
            else {
              *param_3 = (long)puVar7 + 0xfU & 0xfffffffffffffff8;
            }
            iVar16 = -1;
            *(undefined8 *)(param_5 + uVar17 * 0x10) = *puVar7;
            uVar17 = (ulong)(uVar1 + 1);
            uVar13 = 1;
          }
        }
        else {
LAB_7100829770:
          if (iVar16 != -1) goto LAB_7100829788;
          uVar12 = (uint)uVar13;
          if (uVar12 != 2) {
            if (uVar12 < 3) {
              if (uVar12 != 1) goto LAB_71008298b8;
              goto LAB_71008297bc;
            }
            if (uVar12 == 6) goto LAB_710082985c;
            if (uVar12 != 3) goto LAB_7100829960;
            goto LAB_710082990c;
          }
          iVar2 = (int)param_3[3];
          puVar7 = (undefined8 *)*param_3;
          if ((iVar2 < 0) && (*(int *)(param_3 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
            puVar7 = (undefined8 *)(param_3[1] + (long)iVar2);
          }
          else {
            *param_3 = (long)puVar7 + 0xfU & 0xfffffffffffffff8;
          }
          *(undefined8 *)(param_5 + uVar17 * 0x10) = *puVar7;
          uVar17 = (ulong)(uVar1 + 1);
        }
        break;
      case '\x05':
        puVar8 = puVar20;
      case '\x06':
        iVar2 = (int)param_3[3];
        puVar9 = (undefined4 *)*param_3;
        if ((iVar2 < 0) && (*(int *)(param_3 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
          puVar9 = (undefined4 *)(param_3[1] + (long)iVar2);
        }
        else {
          *param_3 = (long)puVar9 + 0xbU & 0xfffffffffffffff8;
        }
        *(undefined4 *)(param_5 + (-(uVar17 >> 0x1f) & 0xfffffff000000000 | uVar17 << 4)) = *puVar9;
        uVar17 = (ulong)((uint)uVar17 + 1);
        puVar20 = puVar8;
        break;
      case '\a':
        if (*param_6 == -1) {
          FUN_7100808340(param_6,0,0x80);
        }
        iVar16 = iVar14 + -1;
        if (iVar19 < iVar16) {
          iVar19 = iVar16;
        }
        break;
      case '\b':
        if (*param_6 == -1) {
          FUN_7100808340(param_6,0,0x80);
        }
        iVar14 = iVar14 + -1;
        if (iVar19 < iVar14) {
          iVar19 = iVar14;
        }
        param_6[iVar14] = 0;
      }
      puVar8 = puVar20;
    } while (bVar3 != 0xb);
  }
  lVar11 = (long)iVar16;
  puVar7 = (undefined8 *)(param_5 + (long)iVar16 * 0x10);
  do {
    if (iVar14 < (int)lVar11) {
      iVar19 = 0;
      if (iVar16 <= iVar14 + 1) {
        iVar19 = (iVar14 - iVar16) + 1;
      }
      *param_4 = iVar19 + iVar16;
      *param_7 = (long)puVar20;
      return param_5 + (long)param_1 * 0x10;
    }
    iVar19 = param_6[lVar11];
    puVar10 = (undefined8 *)*param_3;
    if (iVar19 == 4) {
      iVar19 = *(int *)((long)param_3 + 0x1c);
      if ((iVar19 < 0) && (*(int *)((long)param_3 + 0x1c) = iVar19 + 0x10, iVar19 + 0x10 < 1)) {
        puVar10 = (undefined8 *)(param_3[2] + (long)iVar19);
      }
      else {
        *param_3 = (long)puVar10 + 0xfU & 0xfffffffffffffff8;
      }
      *puVar7 = *puVar10;
    }
    else if (iVar19 < 5) {
      iVar5 = (int)param_3[3];
      if (((iVar19 == 2) || (iVar19 == 3)) || (iVar19 == 1)) {
        if ((iVar5 < 0) && (*(int *)(param_3 + 3) = iVar5 + 8, iVar5 + 8 < 1)) {
          puVar10 = (undefined8 *)(param_3[1] + (long)iVar5);
        }
        else {
          *param_3 = (long)puVar10 + 0xfU & 0xfffffffffffffff8;
        }
        *puVar7 = *puVar10;
      }
      else {
LAB_7100829bcc:
        iVar19 = (int)param_3[3];
        if ((iVar19 < 0) && (*(int *)(param_3 + 3) = iVar19 + 8, iVar19 + 8 < 1)) {
          puVar10 = (undefined8 *)(param_3[1] + (long)iVar19);
        }
        else {
          *param_3 = (long)puVar10 + 0xbU & 0xfffffffffffffff8;
        }
        *(undefined4 *)puVar7 = *(undefined4 *)puVar10;
      }
    }
    else {
      if (iVar19 != 5) goto LAB_7100829bcc;
      iVar19 = *(int *)((long)param_3 + 0x1c);
      if ((iVar19 < 0) && (*(int *)((long)param_3 + 0x1c) = iVar19 + 0x10, iVar19 + 0x10 < 1)) {
        puVar10 = (undefined8 *)(param_3[2] + (long)iVar19);
      }
      else {
        puVar10 = (undefined8 *)((long)puVar10 + 0xfU & 0xfffffffffffffff0);
        *param_3 = (ulong)(puVar10 + 2);
      }
      uVar21 = *puVar10;
      puVar7[1] = puVar10[1];
      *puVar7 = uVar21;
    }
    lVar11 = lVar11 + 1;
    puVar7 = puVar7 + 2;
  } while( true );
}



// ===== FUN_7100829c84 @ 7100829c84 (size=13908) =====

/* WARNING: Type propagation algorithm not settling */

int FUN_7100829c84(undefined4 *param_1,long *param_2,uint *param_3,ulong *param_4)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t wVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  uint *puVar16;
  undefined4 *puVar17;
  short *psVar18;
  char *pcVar19;
  double *pdVar20;
  int *piVar21;
  ulong uVar22;
  ulong *puVar23;
  ushort *puVar24;
  uint *puVar25;
  byte *pbVar26;
  long *plVar27;
  long *plVar28;
  undefined2 *puVar29;
  undefined1 *puVar30;
  int *piVar31;
  ulong uVar32;
  uint uVar33;
  int *piVar34;
  int *piVar35;
  uint uVar36;
  undefined8 uVar37;
  double *pdVar38;
  double *pdVar39;
  wchar_t *pwVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  double dVar44;
  double dVar45;
  double *local_5c0;
  ulong local_5b8;
  uint *local_5a8;
  int local_59c;
  byte *local_598;
  wchar_t *local_578;
  uint local_568;
  uint local_560;
  int local_540;
  uint local_524;
  int local_520;
  wchar_t local_51c;
  undefined4 local_518;
  int local_514;
  uint local_510;
  uint local_50c;
  undefined8 local_508;
  undefined1 auStack_500 [8];
  undefined8 local_4f8;
  undefined1 auStack_4f0 [8];
  long *local_4e8;
  int local_4e0;
  long local_4d8;
  int local_4d0;
  undefined4 local_4cc;
  int local_4c8 [11];
  int local_49c [4];
  undefined1 auStack_48c [124];
  long local_410 [16];
  uint local_390;
  undefined4 local_38c;
  int local_208 [2];
  double local_200 [64];
  
  local_51c = L'\0';
  local_50c = 0;
  FUN_7100808340(auStack_500,0,8);
  puVar13 = (undefined8 *)FUN_710080fb60(param_1);
  uVar37 = *puVar13;
  iVar6 = FUN_7100809520();
  uVar14 = FUN_7100823160(param_1,&local_518,uVar37,(long)iVar6,auStack_500);
  if (0xfffffffffffffffd < uVar14) {
    local_518 = 0x2e;
  }
  if (((*(ushort *)(param_2 + 2) >> 7 & 1) != 0) && (param_2[3] == 0)) {
    lVar15 = FUN_7100814ca0(param_1,0x40);
    *param_2 = lVar15;
    param_2[3] = lVar15;
    if (lVar15 == 0) {
      *param_1 = 0xc;
      return -1;
    }
    *(undefined4 *)(param_2 + 4) = 0x40;
  }
  local_4e8 = local_410;
  dVar44 = 0.0;
  local_49c[3] = 0xffffffff;
  local_59c = 0;
  local_598 = (byte *)0x0;
  local_578 = (wchar_t *)0x0;
  local_540 = 0;
  local_524 = 0;
  local_508 = 0;
  local_4e0 = 0;
  local_4d8 = 0;
  local_5a8 = param_3;
  plVar27 = local_4e8;
  uVar14 = 0;
LAB_7100829db0:
  for (; *param_3 != 0x25 && *param_3 != 0; param_3 = param_3 + 1) {
  }
  iVar6 = (int)((long)param_3 - (long)local_5a8 >> 2);
  if (iVar6 != 0) {
    *plVar27 = (long)local_5a8;
    plVar27[1] = (long)iVar6;
    local_4d8 = local_4d8 + iVar6;
    local_4e0 = local_4e0 + 1;
    if (local_4e0 < 8) {
      plVar27 = plVar27 + 2;
    }
    else {
      iVar12 = FUN_7100833700(param_1,param_2,&local_4e8);
      if (iVar12 != 0) goto LAB_710082d2a0;
      plVar27 = local_410;
    }
    local_59c = local_59c + iVar6;
  }
  if (*param_3 != 0) {
    local_5a8 = param_3 + 1;
    uVar36 = 0xffffffff;
    bVar1 = false;
    uVar41 = 0;
    uVar43 = 0;
    local_520 = 0;
    local_5b8 = uVar14;
LAB_7100829e60:
    uVar10 = (uint)local_5b8;
    uVar7 = *local_5a8;
    local_5a8 = local_5a8 + 1;
    uVar9 = uVar43;
LAB_7100829e68:
    uVar43 = uVar9;
    iVar6 = (int)uVar14;
    uVar9 = uVar41;
    switch(uVar7) {
    case 0x20:
      if (local_520 == 0) {
        local_520 = 0x20;
      }
      goto LAB_7100829e60;
    default:
      if (uVar7 != 0) {
        local_390 = uVar7;
        goto LAB_710082c3d0;
      }
      goto LAB_710082d250;
    case 0x23:
      uVar41 = uVar41 | 1;
      goto LAB_7100829e60;
    case 0x27:
      FUN_7100808340(auStack_500,0,8);
      lVar15 = FUN_710080fb60(param_1);
      uVar37 = *(undefined8 *)(lVar15 + 8);
      iVar6 = FUN_7100809520();
      uVar32 = FUN_7100823160(param_1,&local_51c,uVar37,(long)iVar6,auStack_500);
      if (0xfffffffffffffffd < uVar32) {
        local_51c = L'\0';
      }
      lVar15 = FUN_710080fb60(param_1);
      local_598 = *(byte **)(lVar15 + 0x10);
      if (((local_51c != L'\0') && (local_598 != (byte *)0x0)) && (*local_598 != 0)) {
        uVar41 = uVar41 | 0x400;
      }
      goto LAB_7100829e60;
    case 0x2a:
      uVar7 = *local_5a8;
      if (uVar7 - 0x30 < 10) {
        iVar6 = 0;
        puVar25 = local_5a8 + 1;
        do {
          iVar12 = uVar7 + iVar6 * 10;
          puVar16 = puVar25 + 1;
          uVar7 = *puVar25;
          iVar6 = iVar12 + -0x30;
          puVar25 = puVar16;
        } while (uVar7 - 0x30 < 10);
        puVar25 = local_5a8;
        if (uVar7 != 0x24) goto LAB_7100829f5c;
        if (0x20 < iVar6) goto LAB_710082d2a0;
        uVar43 = iVar12 - 0x31;
        local_5a8 = puVar16;
        if ((int)uVar43 < (int)local_524) {
          uVar43 = *(uint *)((long)local_200 +
                            (-(ulong)(uVar43 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar43 << 4));
        }
        else {
          puVar25 = (uint *)FUN_7100829544((ulong)uVar43,param_3,param_4,&local_524,local_200,
                                           local_49c + 3,&local_508);
          uVar43 = *puVar25;
        }
      }
      else {
        uVar7 = uVar10 + 1;
        if ((int)uVar10 < (int)local_524) {
          uVar43 = *(uint *)((long)local_200 +
                            (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
          uVar10 = uVar7;
        }
        else {
          puVar25 = (uint *)*param_4;
          iVar6 = (int)param_4[3];
          if ((int)local_524 < 0x20) {
            if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
              puVar25 = (uint *)(param_4[1] + (long)iVar6);
            }
            else {
              *param_4 = (long)puVar25 + 0xbU & 0xfffffffffffffff8;
            }
            uVar43 = *puVar25;
            *(uint *)((long)local_200 +
                     (-(ulong)(local_524 >> 0x1f) & 0xfffffff000000000 | (ulong)local_524 << 4)) =
                 uVar43;
            uVar10 = uVar7;
            local_524 = local_524 + 1;
          }
          else {
            if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
              puVar25 = (uint *)(param_4[1] + (long)iVar6);
            }
            else {
              *param_4 = (long)puVar25 + 0xbU & 0xfffffffffffffff8;
            }
            uVar43 = *puVar25;
            uVar10 = uVar7;
          }
        }
      }
      if ((int)uVar43 < 0) {
        uVar43 = -uVar43;
        local_5b8 = (ulong)uVar10;
switchD_7100829e84_caseD_2d:
        uVar41 = uVar41 | 4;
      }
      else {
        local_5b8 = (ulong)uVar10;
      }
      goto LAB_7100829e60;
    case 0x2b:
      local_520 = 0x2b;
      goto LAB_7100829e60;
    case 0x2d:
      goto switchD_7100829e84_caseD_2d;
    case 0x2e:
      puVar25 = local_5a8 + 1;
      uVar7 = *local_5a8;
      if (uVar7 != 0x2a) {
        uVar36 = 0;
        local_5a8 = puVar25;
        while (uVar7 - 0x30 < 10) {
          uVar36 = (uVar7 - 0x30) + uVar36 * 10;
          uVar7 = *local_5a8;
          local_5a8 = local_5a8 + 1;
        }
        uVar9 = uVar43;
        if ((int)uVar36 < 0) {
          uVar36 = 0xffffffff;
        }
        goto LAB_7100829e68;
      }
      uVar7 = local_5a8[1];
      if (9 < uVar7 - 0x30) {
        local_5b8 = (ulong)(uVar10 + 1);
        if ((int)uVar10 < (int)local_524) {
          uVar36 = *(uint *)((long)local_200 +
                            (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
          local_5a8 = puVar25;
        }
        else {
          puVar16 = (uint *)*param_4;
          iVar6 = (int)param_4[3];
          if ((int)local_524 < 0x20) {
            if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
              puVar16 = (uint *)(param_4[1] + (long)iVar6);
            }
            else {
              *param_4 = (long)puVar16 + 0xbU & 0xfffffffffffffff8;
            }
            uVar36 = *puVar16;
            *(uint *)((long)local_200 +
                     (-(ulong)(local_524 >> 0x1f) & 0xfffffff000000000 | (ulong)local_524 << 4)) =
                 uVar36;
            local_5a8 = puVar25;
            local_524 = local_524 + 1;
          }
          else {
            if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
              puVar16 = (uint *)(param_4[1] + (long)iVar6);
            }
            else {
              *param_4 = (long)puVar16 + 0xbU & 0xfffffffffffffff8;
            }
            uVar36 = *puVar16;
            local_5a8 = puVar25;
          }
        }
        goto LAB_710082a1dc;
      }
      iVar6 = 0;
      puVar16 = local_5a8 + 2;
      do {
        iVar12 = uVar7 + iVar6 * 10;
        local_5a8 = puVar16 + 1;
        uVar7 = *puVar16;
        iVar6 = iVar12 + -0x30;
        puVar16 = local_5a8;
      } while (uVar7 - 0x30 < 10);
      if (uVar7 == 0x24) {
        if (0x20 < iVar6) goto LAB_710082d2a0;
        uVar36 = iVar12 - 0x31;
        if ((int)uVar36 < (int)local_524) {
          uVar36 = *(uint *)((long)local_200 +
                            (-(ulong)(uVar36 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar36 << 4));
        }
        else {
          puVar25 = (uint *)FUN_7100829544((ulong)uVar36,param_3,param_4,&local_524,local_200,
                                           local_49c + 3,&local_508);
          uVar36 = *puVar25;
        }
LAB_710082a1dc:
        if ((int)uVar36 < 0) {
          uVar36 = 0xffffffff;
        }
      }
      else {
LAB_7100829f5c:
        local_5a8 = puVar25;
        bVar1 = false;
      }
      goto LAB_7100829e60;
    case 0x30:
      uVar41 = uVar41 | 0x80;
      goto LAB_7100829e60;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      goto switchD_7100829e84_caseD_31;
    case 0x41:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x61:
    case 0x65:
    case 0x66:
    case 0x67:
      if ((uVar41 >> 3 & 1) == 0) {
        if (bVar1) {
          if (iVar6 < (int)local_524) {
            dVar44 = *(double *)
                      ((long)local_200 + (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
          }
          else {
            pdVar20 = (double *)
                      FUN_7100829544(uVar14,param_3,param_4,&local_524,local_200,local_49c + 3,
                                     &local_508);
            dVar44 = *pdVar20;
          }
        }
        else {
          local_5b8 = (ulong)(uVar10 + 1);
          if ((int)uVar10 < (int)local_524) {
            dVar44 = *(double *)
                      ((long)local_200 + (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
          }
          else {
            pdVar20 = (double *)*param_4;
            iVar6 = *(int *)((long)param_4 + 0x1c);
            if ((int)local_524 < 0x20) {
              if ((iVar6 < 0) && (*(int *)((long)param_4 + 0x1c) = iVar6 + 0x10, iVar6 + 0x10 < 1))
              {
                pdVar20 = (double *)(param_4[2] + (long)iVar6);
              }
              else {
                *param_4 = (long)pdVar20 + 0xfU & 0xfffffffffffffff8;
              }
              dVar44 = *pdVar20;
              *(double *)
               ((long)local_200 +
               (-(ulong)(local_524 >> 0x1f) & 0xfffffff000000000 | (ulong)local_524 << 4)) = dVar44;
              local_524 = local_524 + 1;
            }
            else {
              if ((iVar6 < 0) && (*(int *)((long)param_4 + 0x1c) = iVar6 + 0x10, iVar6 + 0x10 < 1))
              {
                pdVar20 = (double *)(param_4[2] + (long)iVar6);
              }
              else {
                *param_4 = (long)pdVar20 + 0xfU & 0xfffffffffffffff8;
              }
              dVar44 = *pdVar20;
            }
          }
        }
      }
      else {
        if (bVar1) {
          if (iVar6 < (int)local_524) {
            dVar44 = local_200[(long)iVar6 * 2];
          }
          else {
            pdVar20 = (double *)
                      FUN_7100829544(uVar14,param_3,param_4,&local_524,local_200,local_49c + 3,
                                     &local_508);
            dVar44 = *pdVar20;
          }
        }
        else {
          local_5b8 = (ulong)(uVar10 + 1);
          if ((int)uVar10 < (int)local_524) {
            dVar44 = local_200[(long)iVar6 * 2];
          }
          else {
            iVar6 = *(int *)((long)param_4 + 0x1c);
            if ((int)local_524 < 0x20) {
              if ((iVar6 < 0) && (*(int *)((long)param_4 + 0x1c) = iVar6 + 0x10, iVar6 + 0x10 < 1))
              {
                pdVar20 = (double *)(param_4[2] + (long)iVar6);
              }
              else {
                pdVar20 = (double *)(*param_4 + 0xf & 0xfffffffffffffff0);
                *param_4 = (ulong)(pdVar20 + 2);
              }
              dVar44 = *pdVar20;
              local_200[(long)(int)local_524 * 2 + 1] = pdVar20[1];
              local_200[(long)(int)local_524 * 2] = dVar44;
              local_524 = local_524 + 1;
            }
            else {
              if ((iVar6 < 0) && (*(int *)((long)param_4 + 0x1c) = iVar6 + 0x10, iVar6 + 0x10 < 1))
              {
                pdVar20 = (double *)(param_4[2] + (long)iVar6);
              }
              else {
                pdVar20 = (double *)(*param_4 + 0xf & 0xfffffffffffffff0);
                *param_4 = (ulong)(pdVar20 + 2);
              }
              dVar44 = *pdVar20;
            }
          }
        }
        dVar44 = (double)FUN_7100801340(dVar44);
      }
      dVar45 = ABS(dVar44);
      if (dVar45 != 1.79769313486232e+308 && dVar45 < 1.79769313486232e+308 == NAN(dVar45)) {
        if (dVar44 < 0.0) {
          local_520 = 0x2d;
        }
        pdVar20 = (double *)&UNK_71009d3a08;
        pdVar39 = (double *)&UNK_71009d3a18;
LAB_710082ab18:
        if (uVar7 < 0x48) {
          pdVar39 = pdVar20;
        }
        uVar41 = uVar41 & 0xffffff7f;
        uVar10 = 3;
        local_5c0 = (double *)0x0;
        goto LAB_710082c3f0;
      }
      if (NAN(dVar44)) {
        if ((long)dVar44 < 0) {
          local_520 = 0x2d;
        }
        pdVar20 = (double *)&UNK_71009d3a28;
        pdVar39 = (double *)&UNK_71009d3a38;
        goto LAB_710082ab18;
      }
      uVar10 = uVar7 & 0xffffffdf;
      if (uVar10 == 0x41) {
        uVar8 = 0x58;
        if (uVar7 == 0x61) {
          uVar8 = 0x78;
        }
        local_4f8 = CONCAT44(uVar8,0x30);
        uVar41 = uVar41 | 2;
        if ((int)uVar36 < 100) goto LAB_710082abac;
        pdVar20 = (double *)FUN_7100814ca0(param_1,(ulong)(uVar36 + 1) << 2);
        local_5c0 = pdVar20;
        if (pdVar20 == (double *)0x0) goto LAB_710082ac30;
      }
      else {
        if (uVar36 == 0xffffffff) {
          uVar36 = 6;
        }
        else if ((uVar10 == 0x47) && (uVar36 == 0)) {
          uVar36 = 1;
        }
LAB_710082abac:
        local_5c0 = (double *)0x0;
        pdVar20 = (double *)&local_390;
      }
      uVar9 = uVar41 | 0x100;
      pdVar20 = (double *)
                FUN_71008292dc(dVar44,param_1,uVar36,uVar9,&local_514,&local_510,uVar7,&local_50c,
                               pdVar20,100);
      uVar42 = local_50c;
      if (((pdVar20 == (double *)&local_390) && (100 < (int)local_50c)) &&
         (local_5c0 == (double *)0x0)) {
        local_5c0 = (double *)FUN_7100814ca0(param_1,(ulong)local_50c << 2);
        if (local_5c0 == (double *)0x0) goto LAB_710082ac30;
        pdVar20 = (double *)
                  FUN_71008292dc(dVar44,param_1,uVar36,uVar9,&local_514,&local_510,uVar7,&local_50c,
                                 local_5c0,uVar42);
      }
      if (uVar10 == 0x47) {
        if (((int)(local_510 + 3) < 0 == SCARRY4(local_510,3)) && ((int)local_510 <= (int)uVar36)) {
          if ((int)local_510 < (int)local_50c) {
            iVar6 = 2 - local_510;
            if (0 < (int)local_510) {
              iVar6 = 1;
            }
            uVar10 = iVar6 + local_50c;
          }
          else {
            uVar10 = (uVar41 & 1) + local_510;
          }
          uVar7 = 0x67;
LAB_710082ae38:
          uVar33 = uVar41 & 0x400;
          iVar6 = 0;
          uVar42 = local_510;
          if (uVar41 >> 10 != 0) {
            if ((int)local_510 < 1) {
              uVar33 = 0;
            }
            else {
              uVar33 = 0;
              while( true ) {
                bVar4 = *local_598;
                if ((bVar4 == 0xff) || ((int)uVar42 <= (int)(uint)bVar4)) break;
                uVar42 = uVar42 - bVar4;
                if (local_598[1] == 0) {
                  iVar6 = iVar6 + 1;
                }
                else {
                  uVar33 = uVar33 + 1;
                  local_598 = local_598 + 1;
                }
              }
              uVar10 = uVar10 + uVar33 + iVar6;
            }
          }
          goto LAB_710082aea4;
        }
        uVar7 = uVar7 - 2;
      }
      else if (uVar10 == 0x46) {
        if ((int)local_510 < 1) {
          if ((uVar41 & 1) == 0 && uVar36 == 0) {
            uVar7 = 0x66;
            uVar10 = 1;
            goto LAB_710082ae38;
          }
          uVar10 = uVar36 + 2;
        }
        else {
          uVar10 = local_510;
          if ((uVar41 & 1) != 0 || uVar36 != 0) {
            uVar10 = uVar36 + 1 + local_510;
          }
        }
        uVar7 = 0x66;
        goto LAB_710082ae38;
      }
      uVar36 = local_510 - 1;
      local_4d0 = 0xf;
      if ((uVar7 & 0xffffffdf) != 0x41) {
        local_4d0 = 0;
      }
      local_4d0 = local_4d0 + uVar7;
      if ((int)uVar36 < 0) {
        local_4cc = 0x2d;
        uVar9 = 1 - local_510;
      }
      else {
        local_4cc = 0x2b;
        uVar9 = uVar36;
      }
      if ((int)uVar9 < 10) {
        if ((uVar7 & 0xffffffdf) == 0x41) {
          piVar31 = local_4c8;
        }
        else {
          piVar31 = local_4c8 + 1;
          local_4c8[0] = 0x30;
        }
        piVar21 = piVar31 + 1;
        *piVar31 = uVar9 + 0x30;
      }
      else {
        piVar31 = local_49c + 2;
        piVar21 = piVar31;
        do {
          piVar34 = piVar21;
          uVar10 = uVar9 / 10;
          piVar34[-1] = uVar9 % 10 + 0x30;
          bVar1 = 99 < (int)uVar9;
          piVar21 = piVar34 + -1;
          uVar9 = uVar10;
        } while (bVar1);
        piVar34[-2] = uVar10 + 0x30;
        piVar21 = &local_4d0;
        for (piVar35 = piVar34 + -2; piVar35 < piVar31; piVar35 = piVar35 + 1) {
          piVar21[2] = *piVar35;
          piVar21 = piVar21 + 1;
        }
        puVar30 = auStack_48c + -(long)piVar34;
        if (piVar31 < (int *)((long)piVar34 - 0xbU)) {
          puVar30 = (undefined1 *)0x0;
        }
        piVar21 = (int *)(puVar30 + (long)local_4c8);
      }
      local_540 = (int)((long)piVar21 - (long)&local_4d0 >> 2);
      uVar10 = local_50c + local_540;
      if ((1 < (int)local_50c) || ((uVar41 & 1) != 0)) {
        uVar10 = uVar10 + 1;
      }
      iVar6 = 0;
      uVar9 = uVar41 & 0xfffffbff | 0x100;
      uVar33 = 0;
      uVar42 = 0;
      local_510 = uVar36;
LAB_710082aea4:
      if (local_514 != 0) {
        local_520 = 0x2d;
      }
      uVar36 = 0;
      goto LAB_710082c400;
    case 0x43:
    case 99:
      if ((uVar7 == 99) && ((uVar41 >> 4 & 1) == 0)) {
        if (bVar1) {
          if (iVar6 < (int)local_524) {
            uVar8 = *(undefined4 *)
                     ((long)local_200 + (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
          }
          else {
            puVar17 = (undefined4 *)
                      FUN_7100829544(uVar14,param_3,param_4,&local_524,local_200,local_49c + 3,
                                     &local_508);
            uVar8 = *puVar17;
          }
        }
        else {
          local_5b8 = (ulong)(uVar10 + 1);
          if ((int)uVar10 < (int)local_524) {
            uVar8 = *(undefined4 *)
                     ((long)local_200 + (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
          }
          else {
            puVar17 = (undefined4 *)*param_4;
            iVar6 = (int)param_4[3];
            if ((int)local_524 < 0x20) {
              if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                puVar17 = (undefined4 *)(param_4[1] + (long)iVar6);
              }
              else {
                *param_4 = (long)puVar17 + 0xbU & 0xfffffffffffffff8;
              }
              uVar8 = *puVar17;
              *(undefined4 *)
               ((long)local_200 +
               (-(ulong)(local_524 >> 0x1f) & 0xfffffff000000000 | (ulong)local_524 << 4)) = uVar8;
              local_524 = local_524 + 1;
            }
            else {
              if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                puVar17 = (undefined4 *)(param_4[1] + (long)iVar6);
              }
              else {
                *param_4 = (long)puVar17 + 0xbU & 0xfffffffffffffff8;
              }
              uVar8 = *puVar17;
            }
          }
        }
        local_390 = FUN_710081c940(uVar8);
        if (local_390 == 0xffffffff) {
LAB_710082ac30:
          *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | 0x40;
          goto LAB_710082d2a0;
        }
      }
      else if (bVar1) {
        if (iVar6 < (int)local_524) {
          local_390 = *(uint *)((long)local_200 +
                               (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
        }
        else {
          puVar25 = (uint *)FUN_7100829544(uVar14,param_3,param_4,&local_524,local_200,local_49c + 3
                                           ,&local_508);
          local_390 = *puVar25;
        }
      }
      else {
        local_5b8 = (ulong)(uVar10 + 1);
        if ((int)uVar10 < (int)local_524) {
          local_390 = *(uint *)((long)local_200 +
                               (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
        }
        else {
          puVar25 = (uint *)*param_4;
          iVar6 = (int)param_4[3];
          if ((int)local_524 < 0x20) {
            if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
              puVar25 = (uint *)(param_4[1] + (long)iVar6);
            }
            else {
              *param_4 = (long)puVar25 + 0xbU & 0xfffffffffffffff8;
            }
            local_390 = *puVar25;
            *(uint *)((long)local_200 +
                     (-(ulong)(local_524 >> 0x1f) & 0xfffffff000000000 | (ulong)local_524 << 4)) =
                 local_390;
            local_524 = local_524 + 1;
          }
          else {
            if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
              puVar25 = (uint *)(param_4[1] + (long)iVar6);
            }
            else {
              *param_4 = (long)puVar25 + 0xbU & 0xfffffffffffffff8;
            }
            local_390 = *puVar25;
          }
        }
      }
      local_38c = 0;
LAB_710082c3d0:
      local_520 = 0;
      pdVar20 = (double *)&local_390;
      uVar10 = 1;
      uVar36 = 0;
      iVar6 = 0;
      uVar42 = 0;
      local_5c0 = (double *)0x0;
      uVar33 = 0;
      goto LAB_710082c400;
    case 0x4c:
      uVar41 = uVar41 | 8;
      goto LAB_7100829e60;
    case 0x53:
    case 0x73:
      if (bVar1) {
        if (iVar6 < (int)local_524) {
          pdVar39 = *(double **)
                     ((long)local_200 + (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
        }
        else {
          puVar13 = (undefined8 *)
                    FUN_7100829544(uVar14,param_3,param_4,&local_524,local_200,local_49c + 3,
                                   &local_508);
          pdVar39 = (double *)*puVar13;
        }
      }
      else {
        local_5b8 = (ulong)(uVar10 + 1);
        if ((int)uVar10 < (int)local_524) {
          pdVar39 = *(double **)
                     ((long)local_200 + (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
        }
        else {
          puVar13 = (undefined8 *)*param_4;
          iVar6 = (int)param_4[3];
          if ((int)local_524 < 0x20) {
            if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
              puVar13 = (undefined8 *)(param_4[1] + (long)iVar6);
            }
            else {
              *param_4 = (long)puVar13 + 0xfU & 0xfffffffffffffff8;
            }
            pdVar39 = (double *)*puVar13;
            *(double **)
             ((long)local_200 +
             (-(ulong)(local_524 >> 0x1f) & 0xfffffff000000000 | (ulong)local_524 << 4)) = pdVar39;
            local_524 = local_524 + 1;
          }
          else {
            if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
              puVar13 = (undefined8 *)(param_4[1] + (long)iVar6);
            }
            else {
              *param_4 = (long)puVar13 + 0xfU & 0xfffffffffffffff8;
            }
            pdVar39 = (double *)*puVar13;
          }
        }
      }
      local_520 = 0;
      if ((uVar7 != 0x53) && (uVar42 = uVar41 & 0x10, (uVar41 >> 4 & 1) == 0)) {
        if (-1 < (int)uVar36) {
          uVar14 = 0;
          FUN_7100808340(auStack_4f0,0,8);
          uVar32 = 0;
          pdVar20 = pdVar39;
          goto LAB_710082b8e4;
        }
        uVar14 = FUN_710081ce00(pdVar39);
        goto LAB_710082b960;
      }
      if ((int)uVar36 < 0) {
        uVar10 = FUN_710081f600(pdVar39);
LAB_710082ba74:
        local_5c0 = (double *)0x0;
      }
      else {
        local_5c0 = (double *)FUN_710081d880(pdVar39,0,(long)(int)uVar36);
        uVar10 = uVar36;
        if (local_5c0 != (double *)0x0) {
          uVar9 = (uint)((long)local_5c0 - (long)pdVar39 >> 2);
          if ((int)uVar9 < (int)uVar36) {
            uVar10 = uVar9;
          }
          goto LAB_710082ba74;
        }
      }
LAB_710082c3f0:
      uVar36 = 0;
      pdVar20 = pdVar39;
      goto LAB_710082c3f4;
    case 0x58:
      local_578 = L"0123456789ABCDEF";
      goto LAB_710082be88;
    case 100:
    case 0x69:
      uVar32 = (ulong)local_524;
      if (((uVar41 >> 5 & 1) == 0) && ((uVar41 >> 4 & 1) == 0)) {
        if ((uVar41 >> 6 & 1) == 0) {
          if ((uVar41 >> 9 & 1) == 0) {
            if (!bVar1) {
              if ((int)uVar10 < (int)local_524) {
                uVar14 = (ulong)*(int *)((long)local_200 +
                                        (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
              }
              else {
                piVar31 = (int *)*param_4;
                iVar6 = (int)param_4[3];
                if ((int)local_524 < 0x20) {
                  if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    piVar31 = (int *)(param_4[1] + (long)iVar6);
                  }
                  else {
                    *param_4 = (long)piVar31 + 0xbU & 0xfffffffffffffff8;
                  }
                  iVar6 = *piVar31;
                  *(int *)((long)local_200 +
                          (-(ulong)(local_524 >> 0x1f) & 0xfffffff000000000 | uVar32 << 4)) = iVar6;
                  uVar14 = (ulong)iVar6;
                  local_524 = local_524 + 1;
                }
                else {
                  if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    piVar31 = (int *)(param_4[1] + (long)iVar6);
                  }
                  else {
                    *param_4 = (long)piVar31 + 0xbU & 0xfffffffffffffff8;
                  }
                  uVar14 = (ulong)*piVar31;
                }
              }
              goto LAB_710082a87c;
            }
            if (iVar6 < (int)local_524) {
              uVar14 = (ulong)*(int *)((long)local_200 +
                                      (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
            }
            else {
              piVar31 = (int *)FUN_7100829544(uVar14,param_3,param_4,&local_524,local_200,
                                              local_49c + 3,&local_508);
              uVar14 = (ulong)*piVar31;
            }
          }
          else if (bVar1) {
            if (iVar6 < (int)local_524) {
              uVar14 = (ulong)*(char *)((long)local_200 +
                                       (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
            }
            else {
              pcVar19 = (char *)FUN_7100829544(uVar14,param_3,param_4,&local_524,local_200,
                                               local_49c + 3,&local_508);
              uVar14 = (ulong)*pcVar19;
            }
          }
          else {
            if ((int)uVar10 < (int)local_524) {
              uVar14 = (ulong)*(char *)((long)local_200 +
                                       (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
            }
            else {
              pcVar19 = (char *)*param_4;
              iVar6 = (int)param_4[3];
              if ((int)local_524 < 0x20) {
                if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                  pcVar19 = (char *)(param_4[1] + (long)iVar6);
                }
                else {
                  *param_4 = (ulong)(pcVar19 + 0xb) & 0xfffffffffffffff8;
                }
                uVar8 = *(undefined4 *)pcVar19;
                *(undefined4 *)
                 ((long)local_200 + (-(ulong)(local_524 >> 0x1f) & 0xfffffff000000000 | uVar32 << 4)
                 ) = uVar8;
                uVar14 = (ulong)(char)uVar8;
                local_524 = local_524 + 1;
              }
              else {
                if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                  pcVar19 = (char *)(param_4[1] + (long)iVar6);
                }
                else {
                  *param_4 = (ulong)(pcVar19 + 0xb) & 0xfffffffffffffff8;
                }
                uVar14 = (ulong)*pcVar19;
              }
            }
LAB_710082a87c:
            uVar10 = uVar10 + 1;
          }
        }
        else {
          if (!bVar1) {
            if ((int)uVar10 < (int)local_524) {
              uVar14 = (ulong)*(short *)((long)local_200 +
                                        (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
            }
            else {
              psVar18 = (short *)*param_4;
              iVar6 = (int)param_4[3];
              if ((int)local_524 < 0x20) {
                if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                  psVar18 = (short *)(param_4[1] + (long)iVar6);
                }
                else {
                  *param_4 = (long)psVar18 + 0xbU & 0xfffffffffffffff8;
                }
                uVar8 = *(undefined4 *)psVar18;
                *(undefined4 *)
                 ((long)local_200 + (-(ulong)(local_524 >> 0x1f) & 0xfffffff000000000 | uVar32 << 4)
                 ) = uVar8;
                uVar14 = (ulong)(short)uVar8;
                local_524 = local_524 + 1;
              }
              else {
                if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                  psVar18 = (short *)(param_4[1] + (long)iVar6);
                }
                else {
                  *param_4 = (long)psVar18 + 0xbU & 0xfffffffffffffff8;
                }
                uVar14 = (ulong)*psVar18;
              }
            }
            goto LAB_710082a87c;
          }
          if (iVar6 < (int)local_524) {
            uVar14 = (ulong)*(short *)((long)local_200 +
                                      (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
          }
          else {
            psVar18 = (short *)FUN_7100829544(uVar14,param_3,param_4,&local_524,local_200,
                                              local_49c + 3,&local_508);
            uVar14 = (ulong)*psVar18;
          }
        }
      }
      else {
        if (!bVar1) {
          if ((int)uVar10 < (int)local_524) {
            uVar14 = *(ulong *)((long)local_200 +
                               (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
          }
          else {
            puVar23 = (ulong *)*param_4;
            iVar6 = (int)param_4[3];
            if ((int)local_524 < 0x20) {
              if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                puVar23 = (ulong *)(param_4[1] + (long)iVar6);
              }
              else {
                *param_4 = (long)puVar23 + 0xfU & 0xfffffffffffffff8;
              }
              uVar14 = *puVar23;
              *(ulong *)((long)local_200 +
                        (-(ulong)(local_524 >> 0x1f) & 0xfffffff000000000 | uVar32 << 4)) = uVar14;
              local_524 = local_524 + 1;
            }
            else {
              if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                puVar23 = (ulong *)(param_4[1] + (long)iVar6);
              }
              else {
                *param_4 = (long)puVar23 + 0xfU & 0xfffffffffffffff8;
              }
              uVar14 = *puVar23;
            }
          }
          goto LAB_710082a87c;
        }
        if (iVar6 < (int)local_524) {
          uVar14 = *(ulong *)((long)local_200 +
                             (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
        }
        else {
          puVar23 = (ulong *)FUN_7100829544(uVar14,param_3,param_4,&local_524,local_200,
                                            local_49c + 3,&local_508);
          uVar14 = *puVar23;
        }
      }
      if ((long)uVar14 < 0) {
        uVar14 = -uVar14;
        local_520 = 0x2d;
        iVar6 = 1;
        goto LAB_710082c234;
      }
      if (-1 < (int)uVar36) {
        iVar6 = 1;
        goto LAB_710082c250;
      }
      goto LAB_710082c2a8;
    case 0x68:
      if (*local_5a8 == 0x68) {
        local_5a8 = local_5a8 + 1;
        uVar41 = uVar41 | 0x200;
      }
      else {
        uVar41 = uVar41 | 0x40;
      }
      goto LAB_7100829e60;
    case 0x6a:
    case 0x74:
    case 0x7a:
      goto switchD_7100829e84_caseD_6a;
    case 0x6c:
      if (*local_5a8 == 0x6c) {
        local_5a8 = local_5a8 + 1;
        goto switchD_7100829e84_caseD_71;
      }
switchD_7100829e84_caseD_6a:
      uVar41 = uVar41 | 0x10;
      goto LAB_7100829e60;
    case 0x6e:
      uVar32 = (ulong)local_524;
      if (((uVar41 >> 5 & 1) == 0) && ((uVar41 >> 4 & 1) == 0)) {
        if ((uVar41 >> 6 & 1) == 0) {
          if ((uVar41 >> 9 & 1) == 0) {
            if (bVar1) {
              if (iVar6 < (int)local_524) {
                piVar31 = *(int **)((long)local_200 +
                                   (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
              }
              else {
                puVar13 = (undefined8 *)
                          FUN_7100829544(uVar14,param_3,param_4,&local_524,local_200,local_49c + 3,
                                         &local_508);
                piVar31 = (int *)*puVar13;
              }
            }
            else {
              local_5b8 = (ulong)(uVar10 + 1);
              if ((int)uVar10 < (int)local_524) {
                piVar31 = *(int **)((long)local_200 +
                                   (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
              }
              else {
                puVar13 = (undefined8 *)*param_4;
                iVar6 = (int)param_4[3];
                if ((int)local_524 < 0x20) {
                  if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    puVar13 = (undefined8 *)(param_4[1] + (long)iVar6);
                  }
                  else {
                    *param_4 = (long)puVar13 + 0xfU & 0xfffffffffffffff8;
                  }
                  piVar31 = (int *)*puVar13;
                  *(int **)((long)local_200 +
                           (-(ulong)(local_524 >> 0x1f) & 0xfffffff000000000 | uVar32 << 4)) =
                       piVar31;
                  local_524 = local_524 + 1;
                }
                else {
                  if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    puVar13 = (undefined8 *)(param_4[1] + (long)iVar6);
                  }
                  else {
                    *param_4 = (long)puVar13 + 0xfU & 0xfffffffffffffff8;
                  }
                  piVar31 = (int *)*puVar13;
                }
              }
            }
            *piVar31 = local_59c;
            param_3 = local_5a8;
            uVar14 = local_5b8;
          }
          else {
            if (bVar1) {
              if (iVar6 < (int)local_524) {
                puVar30 = *(undefined1 **)
                           ((long)local_200 + (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4)
                           );
              }
              else {
                puVar13 = (undefined8 *)
                          FUN_7100829544(uVar14,param_3,param_4,&local_524,local_200,local_49c + 3,
                                         &local_508);
                puVar30 = (undefined1 *)*puVar13;
              }
            }
            else {
              local_5b8 = (ulong)(uVar10 + 1);
              if ((int)uVar10 < (int)local_524) {
                puVar30 = *(undefined1 **)
                           ((long)local_200 + (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4)
                           );
              }
              else {
                puVar13 = (undefined8 *)*param_4;
                iVar6 = (int)param_4[3];
                if ((int)local_524 < 0x20) {
                  if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    puVar13 = (undefined8 *)(param_4[1] + (long)iVar6);
                  }
                  else {
                    *param_4 = (long)puVar13 + 0xfU & 0xfffffffffffffff8;
                  }
                  puVar30 = (undefined1 *)*puVar13;
                  *(undefined1 **)
                   ((long)local_200 +
                   (-(ulong)(local_524 >> 0x1f) & 0xfffffff000000000 | uVar32 << 4)) = puVar30;
                  local_524 = local_524 + 1;
                }
                else {
                  if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    puVar13 = (undefined8 *)(param_4[1] + (long)iVar6);
                  }
                  else {
                    *param_4 = (long)puVar13 + 0xfU & 0xfffffffffffffff8;
                  }
                  puVar30 = (undefined1 *)*puVar13;
                }
              }
            }
            *puVar30 = (undefined1)local_59c;
            param_3 = local_5a8;
            uVar14 = local_5b8;
          }
        }
        else {
          if (bVar1) {
            if (iVar6 < (int)local_524) {
              puVar29 = *(undefined2 **)
                         ((long)local_200 + (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
            }
            else {
              puVar13 = (undefined8 *)
                        FUN_7100829544(uVar14,param_3,param_4,&local_524,local_200,local_49c + 3,
                                       &local_508);
              puVar29 = (undefined2 *)*puVar13;
            }
          }
          else {
            local_5b8 = (ulong)(uVar10 + 1);
            if ((int)uVar10 < (int)local_524) {
              puVar29 = *(undefined2 **)
                         ((long)local_200 + (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
            }
            else {
              puVar13 = (undefined8 *)*param_4;
              iVar6 = (int)param_4[3];
              if ((int)local_524 < 0x20) {
                if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                  puVar13 = (undefined8 *)(param_4[1] + (long)iVar6);
                }
                else {
                  *param_4 = (long)puVar13 + 0xfU & 0xfffffffffffffff8;
                }
                puVar29 = (undefined2 *)*puVar13;
                *(undefined2 **)
                 ((long)local_200 + (-(ulong)(local_524 >> 0x1f) & 0xfffffff000000000 | uVar32 << 4)
                 ) = puVar29;
                local_524 = local_524 + 1;
              }
              else {
                if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                  puVar13 = (undefined8 *)(param_4[1] + (long)iVar6);
                }
                else {
                  *param_4 = (long)puVar13 + 0xfU & 0xfffffffffffffff8;
                }
                puVar29 = (undefined2 *)*puVar13;
              }
            }
          }
          *puVar29 = (undefined2)local_59c;
          param_3 = local_5a8;
          uVar14 = local_5b8;
        }
      }
      else {
        if (bVar1) {
          if (iVar6 < (int)local_524) {
            plVar28 = *(long **)((long)local_200 +
                                (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
          }
          else {
            puVar13 = (undefined8 *)
                      FUN_7100829544(uVar14,param_3,param_4,&local_524,local_200,local_49c + 3,
                                     &local_508);
            plVar28 = (long *)*puVar13;
          }
        }
        else {
          local_5b8 = (ulong)(uVar10 + 1);
          if ((int)uVar10 < (int)local_524) {
            plVar28 = *(long **)((long)local_200 +
                                (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
          }
          else {
            puVar13 = (undefined8 *)*param_4;
            iVar6 = (int)param_4[3];
            if ((int)local_524 < 0x20) {
              if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                puVar13 = (undefined8 *)(param_4[1] + (long)iVar6);
              }
              else {
                *param_4 = (long)puVar13 + 0xfU & 0xfffffffffffffff8;
              }
              plVar28 = (long *)*puVar13;
              *(long **)((long)local_200 +
                        (-(ulong)(local_524 >> 0x1f) & 0xfffffff000000000 | uVar32 << 4)) = plVar28;
              local_524 = local_524 + 1;
            }
            else {
              if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                puVar13 = (undefined8 *)(param_4[1] + (long)iVar6);
              }
              else {
                *param_4 = (long)puVar13 + 0xfU & 0xfffffffffffffff8;
              }
              plVar28 = (long *)*puVar13;
            }
          }
        }
        *plVar28 = (long)local_59c;
        param_3 = local_5a8;
        uVar14 = local_5b8;
      }
      goto LAB_7100829db0;
    case 0x6f:
      uVar32 = (ulong)local_524;
      if (((uVar41 >> 5 & 1) == 0) && ((uVar41 >> 4 & 1) == 0)) {
        if ((uVar41 >> 6 & 1) == 0) {
          if ((uVar41 >> 9 & 1) == 0) {
            if (!bVar1) {
              if ((int)uVar10 < (int)local_524) {
                uVar14 = (ulong)*(uint *)((long)local_200 +
                                         (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
              }
              else {
                puVar25 = (uint *)*param_4;
                iVar6 = (int)param_4[3];
                if ((int)local_524 < 0x20) {
                  if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    puVar25 = (uint *)(param_4[1] + (long)iVar6);
                  }
                  else {
                    *param_4 = (long)puVar25 + 0xbU & 0xfffffffffffffff8;
                  }
                  uVar9 = *puVar25;
                  *(uint *)((long)local_200 +
                           (-(ulong)(local_524 >> 0x1f) & 0xfffffff000000000 | uVar32 << 4)) = uVar9
                  ;
                  uVar14 = (ulong)uVar9;
                  local_524 = local_524 + 1;
                }
                else {
                  if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    puVar25 = (uint *)(param_4[1] + (long)iVar6);
                  }
                  else {
                    *param_4 = (long)puVar25 + 0xbU & 0xfffffffffffffff8;
                  }
                  uVar14 = (ulong)*puVar25;
                }
              }
              goto LAB_710082b65c;
            }
            if (iVar6 < (int)local_524) {
              uVar14 = (ulong)*(uint *)((long)local_200 +
                                       (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
            }
            else {
              puVar25 = (uint *)FUN_7100829544(uVar14,param_3,param_4,&local_524,local_200,
                                               local_49c + 3,&local_508);
              uVar14 = (ulong)*puVar25;
            }
          }
          else if (bVar1) {
            if (iVar6 < (int)local_524) {
              uVar14 = (ulong)*(byte *)((long)local_200 +
                                       (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
            }
            else {
              pbVar26 = (byte *)FUN_7100829544(uVar14,param_3,param_4,&local_524,local_200,
                                               local_49c + 3,&local_508);
              uVar14 = (ulong)*pbVar26;
            }
          }
          else {
            if ((int)uVar10 < (int)local_524) {
              uVar14 = (ulong)*(byte *)((long)local_200 +
                                       (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
            }
            else {
              puVar25 = (uint *)*param_4;
              iVar6 = (int)param_4[3];
              if ((int)local_524 < 0x20) {
                if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                  puVar25 = (uint *)(param_4[1] + (long)iVar6);
                }
                else {
                  *param_4 = (long)puVar25 + 0xbU & 0xfffffffffffffff8;
                }
                uVar9 = *puVar25;
                *(uint *)((long)local_200 +
                         (-(ulong)(local_524 >> 0x1f) & 0xfffffff000000000 | uVar32 << 4)) = uVar9;
                uVar14 = (ulong)uVar9 & 0xff;
                local_524 = local_524 + 1;
              }
              else {
                if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                  puVar25 = (uint *)(param_4[1] + (long)iVar6);
                }
                else {
                  *param_4 = (long)puVar25 + 0xbU & 0xfffffffffffffff8;
                }
                uVar14 = (ulong)(byte)*puVar25;
              }
            }
LAB_710082b65c:
            uVar10 = uVar10 + 1;
          }
        }
        else {
          if (!bVar1) {
            if ((int)uVar10 < (int)local_524) {
              uVar14 = (ulong)*(ushort *)
                               ((long)local_200 +
                               (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
            }
            else {
              puVar25 = (uint *)*param_4;
              iVar6 = (int)param_4[3];
              if ((int)local_524 < 0x20) {
                if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                  puVar25 = (uint *)(param_4[1] + (long)iVar6);
                }
                else {
                  *param_4 = (long)puVar25 + 0xbU & 0xfffffffffffffff8;
                }
                uVar9 = *puVar25;
                *(uint *)((long)local_200 +
                         (-(ulong)(local_524 >> 0x1f) & 0xfffffff000000000 | uVar32 << 4)) = uVar9;
                uVar14 = (ulong)uVar9 & 0xffff;
                local_524 = local_524 + 1;
              }
              else {
                if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                  puVar25 = (uint *)(param_4[1] + (long)iVar6);
                }
                else {
                  *param_4 = (long)puVar25 + 0xbU & 0xfffffffffffffff8;
                }
                uVar14 = (ulong)(ushort)*puVar25;
              }
            }
            goto LAB_710082b65c;
          }
          if (iVar6 < (int)local_524) {
            uVar14 = (ulong)*(ushort *)
                             ((long)local_200 +
                             (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
          }
          else {
            puVar24 = (ushort *)
                      FUN_7100829544(uVar14,param_3,param_4,&local_524,local_200,local_49c + 3,
                                     &local_508);
            uVar14 = (ulong)*puVar24;
          }
        }
      }
      else if (bVar1) {
        if (iVar6 < (int)local_524) {
          uVar14 = *(ulong *)((long)local_200 +
                             (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
        }
        else {
          puVar23 = (ulong *)FUN_7100829544(uVar14,param_3,param_4,&local_524,local_200,
                                            local_49c + 3,&local_508);
          uVar14 = *puVar23;
        }
      }
      else {
        uVar9 = uVar10 + 1;
        if ((int)uVar10 < (int)local_524) {
          uVar14 = *(ulong *)((long)local_200 +
                             (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
          uVar10 = uVar9;
        }
        else {
          puVar23 = (ulong *)*param_4;
          iVar6 = (int)param_4[3];
          if ((int)local_524 < 0x20) {
            if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
              puVar23 = (ulong *)(param_4[1] + (long)iVar6);
            }
            else {
              *param_4 = (long)puVar23 + 0xfU & 0xfffffffffffffff8;
            }
            uVar14 = *puVar23;
            *(ulong *)((long)local_200 +
                      (-(ulong)(local_524 >> 0x1f) & 0xfffffff000000000 | uVar32 << 4)) = uVar14;
            uVar10 = uVar9;
            local_524 = local_524 + 1;
          }
          else {
            if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
              puVar23 = (ulong *)(param_4[1] + (long)iVar6);
            }
            else {
              *param_4 = (long)puVar23 + 0xfU & 0xfffffffffffffff8;
            }
            uVar14 = *puVar23;
            uVar10 = uVar9;
          }
        }
      }
      uVar41 = uVar41 & 0xfffffbff;
      iVar6 = 0;
      break;
    case 0x70:
      if (bVar1) {
        if (iVar6 < (int)local_524) {
          uVar14 = *(ulong *)((long)local_200 +
                             (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
        }
        else {
          puVar23 = (ulong *)FUN_7100829544(uVar14,param_3,param_4,&local_524,local_200,
                                            local_49c + 3,&local_508);
          uVar14 = *puVar23;
        }
      }
      else {
        uVar7 = uVar10 + 1;
        if ((int)uVar10 < (int)local_524) {
          uVar14 = *(ulong *)((long)local_200 +
                             (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
          uVar10 = uVar7;
        }
        else {
          puVar23 = (ulong *)*param_4;
          iVar6 = (int)param_4[3];
          if ((int)local_524 < 0x20) {
            if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
              puVar23 = (ulong *)(param_4[1] + (long)iVar6);
            }
            else {
              *param_4 = (long)puVar23 + 0xfU & 0xfffffffffffffff8;
            }
            uVar14 = *puVar23;
            *(ulong *)((long)local_200 +
                      (-(ulong)(local_524 >> 0x1f) & 0xfffffff000000000 | (ulong)local_524 << 4)) =
                 uVar14;
            uVar10 = uVar7;
            local_524 = local_524 + 1;
          }
          else {
            if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
              puVar23 = (ulong *)(param_4[1] + (long)iVar6);
            }
            else {
              *param_4 = (long)puVar23 + 0xfU & 0xfffffffffffffff8;
            }
            uVar14 = *puVar23;
            uVar10 = uVar7;
          }
        }
      }
      local_4f8 = 0x7800000030;
      uVar41 = uVar41 | 2;
      uVar7 = 0x78;
      local_578 = L"0123456789abcdef";
      iVar6 = 2;
      break;
    case 0x71:
      goto switchD_7100829e84_caseD_71;
    case 0x75:
      uVar32 = (ulong)local_524;
      if (((uVar41 >> 5 & 1) == 0) && ((uVar41 >> 4 & 1) == 0)) {
        if ((uVar41 >> 6 & 1) == 0) {
          if ((uVar41 >> 9 & 1) == 0) {
            if (!bVar1) {
              if ((int)uVar10 < (int)local_524) {
                uVar14 = (ulong)*(uint *)((long)local_200 +
                                         (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
              }
              else {
                puVar25 = (uint *)*param_4;
                iVar6 = (int)param_4[3];
                if ((int)local_524 < 0x20) {
                  if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    puVar25 = (uint *)(param_4[1] + (long)iVar6);
                  }
                  else {
                    *param_4 = (long)puVar25 + 0xbU & 0xfffffffffffffff8;
                  }
                  uVar9 = *puVar25;
                  *(uint *)((long)local_200 +
                           (-(ulong)(local_524 >> 0x1f) & 0xfffffff000000000 | uVar32 << 4)) = uVar9
                  ;
                  uVar14 = (ulong)uVar9;
                  local_524 = local_524 + 1;
                }
                else {
                  if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    puVar25 = (uint *)(param_4[1] + (long)iVar6);
                  }
                  else {
                    *param_4 = (long)puVar25 + 0xbU & 0xfffffffffffffff8;
                  }
                  uVar14 = (ulong)*puVar25;
                }
              }
              goto LAB_710082bd48;
            }
            if (iVar6 < (int)local_524) {
              uVar14 = (ulong)*(uint *)((long)local_200 +
                                       (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
            }
            else {
              puVar25 = (uint *)FUN_7100829544(uVar14,param_3,param_4,&local_524,local_200,
                                               local_49c + 3,&local_508);
              uVar14 = (ulong)*puVar25;
            }
          }
          else if (bVar1) {
            if (iVar6 < (int)local_524) {
              uVar14 = (ulong)*(byte *)((long)local_200 +
                                       (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
            }
            else {
              pbVar26 = (byte *)FUN_7100829544(uVar14,param_3,param_4,&local_524,local_200,
                                               local_49c + 3,&local_508);
              uVar14 = (ulong)*pbVar26;
            }
          }
          else {
            if ((int)uVar10 < (int)local_524) {
              uVar14 = (ulong)*(byte *)((long)local_200 +
                                       (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
            }
            else {
              puVar25 = (uint *)*param_4;
              iVar6 = (int)param_4[3];
              if ((int)local_524 < 0x20) {
                if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                  puVar25 = (uint *)(param_4[1] + (long)iVar6);
                }
                else {
                  *param_4 = (long)puVar25 + 0xbU & 0xfffffffffffffff8;
                }
                uVar9 = *puVar25;
                *(uint *)((long)local_200 +
                         (-(ulong)(local_524 >> 0x1f) & 0xfffffff000000000 | uVar32 << 4)) = uVar9;
                uVar14 = (ulong)uVar9 & 0xff;
                local_524 = local_524 + 1;
              }
              else {
                if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                  puVar25 = (uint *)(param_4[1] + (long)iVar6);
                }
                else {
                  *param_4 = (long)puVar25 + 0xbU & 0xfffffffffffffff8;
                }
                uVar14 = (ulong)(byte)*puVar25;
              }
            }
LAB_710082bd48:
            uVar10 = uVar10 + 1;
          }
        }
        else {
          if (!bVar1) {
            if ((int)uVar10 < (int)local_524) {
              uVar14 = (ulong)*(ushort *)
                               ((long)local_200 +
                               (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
            }
            else {
              puVar25 = (uint *)*param_4;
              iVar6 = (int)param_4[3];
              if ((int)local_524 < 0x20) {
                if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                  puVar25 = (uint *)(param_4[1] + (long)iVar6);
                }
                else {
                  *param_4 = (long)puVar25 + 0xbU & 0xfffffffffffffff8;
                }
                uVar9 = *puVar25;
                *(uint *)((long)local_200 +
                         (-(ulong)(local_524 >> 0x1f) & 0xfffffff000000000 | uVar32 << 4)) = uVar9;
                uVar14 = (ulong)uVar9 & 0xffff;
                local_524 = local_524 + 1;
              }
              else {
                if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                  puVar25 = (uint *)(param_4[1] + (long)iVar6);
                }
                else {
                  *param_4 = (long)puVar25 + 0xbU & 0xfffffffffffffff8;
                }
                uVar14 = (ulong)(ushort)*puVar25;
              }
            }
            goto LAB_710082bd48;
          }
          if (iVar6 < (int)local_524) {
            uVar14 = (ulong)*(ushort *)
                             ((long)local_200 +
                             (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
          }
          else {
            puVar24 = (ushort *)
                      FUN_7100829544(uVar14,param_3,param_4,&local_524,local_200,local_49c + 3,
                                     &local_508);
            uVar14 = (ulong)*puVar24;
          }
        }
      }
      else {
        if (!bVar1) {
          if ((int)uVar10 < (int)local_524) {
            uVar14 = *(ulong *)((long)local_200 +
                               (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
          }
          else {
            puVar23 = (ulong *)*param_4;
            iVar6 = (int)param_4[3];
            if ((int)local_524 < 0x20) {
              if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                puVar23 = (ulong *)(param_4[1] + (long)iVar6);
              }
              else {
                *param_4 = (long)puVar23 + 0xfU & 0xfffffffffffffff8;
              }
              uVar14 = *puVar23;
              *(ulong *)((long)local_200 +
                        (-(ulong)(local_524 >> 0x1f) & 0xfffffff000000000 | uVar32 << 4)) = uVar14;
              local_524 = local_524 + 1;
            }
            else {
              if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                puVar23 = (ulong *)(param_4[1] + (long)iVar6);
              }
              else {
                *param_4 = (long)puVar23 + 0xfU & 0xfffffffffffffff8;
              }
              uVar14 = *puVar23;
            }
          }
          goto LAB_710082bd48;
        }
        if (iVar6 < (int)local_524) {
          uVar14 = *(ulong *)((long)local_200 +
                             (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
        }
        else {
          puVar23 = (ulong *)FUN_7100829544(uVar14,param_3,param_4,&local_524,local_200,
                                            local_49c + 3,&local_508);
          uVar14 = *puVar23;
        }
      }
      iVar6 = 1;
      break;
    case 0x78:
      local_578 = L"0123456789abcdef";
LAB_710082be88:
      uVar32 = (ulong)local_524;
      if (((uVar41 >> 5 & 1) == 0) && ((uVar41 >> 4 & 1) == 0)) {
        if ((uVar41 >> 6 & 1) == 0) {
          if ((uVar41 >> 9 & 1) == 0) {
            if (!bVar1) {
              if ((int)uVar10 < (int)local_524) {
                uVar14 = (ulong)*(uint *)((long)local_200 +
                                         (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
              }
              else {
                puVar25 = (uint *)*param_4;
                iVar6 = (int)param_4[3];
                if ((int)local_524 < 0x20) {
                  if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    puVar25 = (uint *)(param_4[1] + (long)iVar6);
                  }
                  else {
                    *param_4 = (long)puVar25 + 0xbU & 0xfffffffffffffff8;
                  }
                  uVar9 = *puVar25;
                  *(uint *)((long)local_200 +
                           (-(ulong)(local_524 >> 0x1f) & 0xfffffff000000000 | uVar32 << 4)) = uVar9
                  ;
                  uVar14 = (ulong)uVar9;
                  local_524 = local_524 + 1;
                }
                else {
                  if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    puVar25 = (uint *)(param_4[1] + (long)iVar6);
                  }
                  else {
                    *param_4 = (long)puVar25 + 0xbU & 0xfffffffffffffff8;
                  }
                  uVar14 = (ulong)*puVar25;
                }
              }
              goto LAB_710082c20c;
            }
            if (iVar6 < (int)local_524) {
              uVar14 = (ulong)*(uint *)((long)local_200 +
                                       (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
            }
            else {
              puVar25 = (uint *)FUN_7100829544(uVar14,param_3,param_4,&local_524,local_200,
                                               local_49c + 3,&local_508);
              uVar14 = (ulong)*puVar25;
            }
          }
          else if (bVar1) {
            if (iVar6 < (int)local_524) {
              uVar14 = (ulong)*(byte *)((long)local_200 +
                                       (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
            }
            else {
              pbVar26 = (byte *)FUN_7100829544(uVar14,param_3,param_4,&local_524,local_200,
                                               local_49c + 3,&local_508);
              uVar14 = (ulong)*pbVar26;
            }
          }
          else {
            if ((int)uVar10 < (int)local_524) {
              uVar14 = (ulong)*(byte *)((long)local_200 +
                                       (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
            }
            else {
              puVar25 = (uint *)*param_4;
              iVar6 = (int)param_4[3];
              if ((int)local_524 < 0x20) {
                if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                  puVar25 = (uint *)(param_4[1] + (long)iVar6);
                }
                else {
                  *param_4 = (long)puVar25 + 0xbU & 0xfffffffffffffff8;
                }
                uVar9 = *puVar25;
                *(uint *)((long)local_200 +
                         (-(ulong)(local_524 >> 0x1f) & 0xfffffff000000000 | uVar32 << 4)) = uVar9;
                uVar14 = (ulong)uVar9 & 0xff;
                local_524 = local_524 + 1;
              }
              else {
                if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                  puVar25 = (uint *)(param_4[1] + (long)iVar6);
                }
                else {
                  *param_4 = (long)puVar25 + 0xbU & 0xfffffffffffffff8;
                }
                uVar14 = (ulong)(byte)*puVar25;
              }
            }
LAB_710082c20c:
            uVar10 = uVar10 + 1;
          }
        }
        else {
          if (!bVar1) {
            if ((int)uVar10 < (int)local_524) {
              uVar14 = (ulong)*(ushort *)
                               ((long)local_200 +
                               (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
            }
            else {
              puVar25 = (uint *)*param_4;
              iVar6 = (int)param_4[3];
              if ((int)local_524 < 0x20) {
                if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                  puVar25 = (uint *)(param_4[1] + (long)iVar6);
                }
                else {
                  *param_4 = (long)puVar25 + 0xbU & 0xfffffffffffffff8;
                }
                uVar9 = *puVar25;
                *(uint *)((long)local_200 +
                         (-(ulong)(local_524 >> 0x1f) & 0xfffffff000000000 | uVar32 << 4)) = uVar9;
                uVar14 = (ulong)uVar9 & 0xffff;
                local_524 = local_524 + 1;
              }
              else {
                if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                  puVar25 = (uint *)(param_4[1] + (long)iVar6);
                }
                else {
                  *param_4 = (long)puVar25 + 0xbU & 0xfffffffffffffff8;
                }
                uVar14 = (ulong)(ushort)*puVar25;
              }
            }
            goto LAB_710082c20c;
          }
          if (iVar6 < (int)local_524) {
            uVar14 = (ulong)*(ushort *)
                             ((long)local_200 +
                             (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
          }
          else {
            puVar24 = (ushort *)
                      FUN_7100829544(uVar14,param_3,param_4,&local_524,local_200,local_49c + 3,
                                     &local_508);
            uVar14 = (ulong)*puVar24;
          }
        }
      }
      else {
        if (!bVar1) {
          if ((int)uVar10 < (int)local_524) {
            uVar14 = *(ulong *)((long)local_200 +
                               (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
          }
          else {
            puVar23 = (ulong *)*param_4;
            iVar6 = (int)param_4[3];
            if ((int)local_524 < 0x20) {
              if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                puVar23 = (ulong *)(param_4[1] + (long)iVar6);
              }
              else {
                *param_4 = (long)puVar23 + 0xfU & 0xfffffffffffffff8;
              }
              uVar14 = *puVar23;
              *(ulong *)((long)local_200 +
                        (-(ulong)(local_524 >> 0x1f) & 0xfffffff000000000 | uVar32 << 4)) = uVar14;
              local_524 = local_524 + 1;
            }
            else {
              if ((iVar6 < 0) && (*(int *)(param_4 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                puVar23 = (ulong *)(param_4[1] + (long)iVar6);
              }
              else {
                *param_4 = (long)puVar23 + 0xfU & 0xfffffffffffffff8;
              }
              uVar14 = *puVar23;
            }
          }
          goto LAB_710082c20c;
        }
        if (iVar6 < (int)local_524) {
          uVar14 = *(ulong *)((long)local_200 +
                             (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4));
        }
        else {
          puVar23 = (ulong *)FUN_7100829544(uVar14,param_3,param_4,&local_524,local_200,
                                            local_49c + 3,&local_508);
          uVar14 = *puVar23;
        }
      }
      if (((uVar41 & 1) != 0) && (uVar14 != 0)) {
        uVar41 = uVar41 | 2;
        local_4f8 = CONCAT44(uVar7,0x30);
      }
      uVar41 = uVar41 & 0xfffffbff;
      iVar6 = 2;
    }
    local_520 = 0;
LAB_710082c234:
    uVar9 = uVar41;
    if (-1 < (int)uVar36) {
LAB_710082c250:
      uVar9 = uVar41 & 0xffffff7f;
      if (uVar14 != 0 || uVar36 != 0) goto LAB_710082c260;
      if (iVar6 == 0) {
        uVar36 = uVar41 & 1;
        if ((uVar41 & 1) == 0) goto LAB_710082c38c;
        uVar36 = 0;
        local_208[1] = 0x30;
LAB_710082c380:
        pdVar20 = (double *)(local_208 + 1);
        uVar41 = uVar9;
      }
      else {
        uVar36 = 0;
LAB_710082c38c:
        pdVar20 = local_200;
        uVar41 = uVar9;
      }
      goto LAB_710082c390;
    }
LAB_710082c260:
    uVar41 = uVar9;
    if (iVar6 != 1) {
      pdVar20 = local_200;
      if (iVar6 == 2) {
        do {
          uVar32 = uVar14 & 0xf;
          uVar14 = uVar14 >> 4;
          pdVar20 = (double *)((long)pdVar20 + -4);
          *(wchar_t *)pdVar20 = local_578[uVar32];
        } while (uVar14 != 0);
      }
      else {
        do {
          pdVar39 = pdVar20;
          wVar3 = ((uint)uVar14 & 7) + L'0';
          pdVar20 = (double *)((long)pdVar39 + -4);
          *(wchar_t *)pdVar20 = wVar3;
          uVar14 = uVar14 >> 3;
        } while (uVar14 != 0);
        if (((uVar41 & 1) != 0) && (wVar3 != L'0')) {
          *(wchar_t *)(pdVar39 + -1) = L'0';
          pdVar20 = pdVar39 + -1;
        }
      }
      goto LAB_710082c390;
    }
LAB_710082c2a8:
    if (uVar14 < 10) {
      local_208[1] = (int)uVar14 + 0x30;
      uVar9 = uVar41;
      goto LAB_710082c380;
    }
    pdVar39 = local_200;
    local_50c = 0;
    goto LAB_710082c2d0;
  }
LAB_710082d250:
  if (local_4d8 != 0) {
    FUN_7100833700(param_1,param_2,&local_4e8);
  }
  goto LAB_710082d2a0;
switchD_7100829e84_caseD_71:
  uVar41 = uVar41 | 0x20;
  goto LAB_7100829e60;
LAB_710082c2d0:
  pdVar20 = (double *)((long)pdVar39 + -4);
  local_50c = local_50c + 1;
  *(wchar_t *)((long)pdVar39 + -4) = (int)uVar14 + (int)(uVar14 / 10) * -10 + L'0';
  if ((((uVar41 & 0x400) == 0) || (local_50c != *local_598)) || (local_50c == 0xff)) {
    pdVar39 = pdVar20;
    if (uVar14 < 10) goto LAB_710082c390;
  }
  else {
    if (uVar14 < 10) goto LAB_710082c390;
    *(wchar_t *)(pdVar39 + -1) = local_51c;
    if (local_598[1] != 0) {
      local_598 = local_598 + 1;
    }
    local_50c = 0;
    pdVar39 = pdVar39 + -1;
  }
  uVar14 = uVar14 / 10;
  goto LAB_710082c2d0;
LAB_710082c390:
  local_5c0 = (double *)0x0;
  local_5b8 = (ulong)uVar10;
  uVar10 = (uint)((ulong)((long)local_200 - (long)pdVar20) >> 2);
LAB_710082c3f4:
  iVar6 = 0;
  uVar42 = 0;
  uVar33 = 0;
  uVar9 = uVar41;
  goto LAB_710082c400;
LAB_710082b8e4:
  if ((ulong)(long)(int)uVar36 <= uVar32) goto LAB_710082b960;
  iVar6 = FUN_7100809520();
  uVar22 = FUN_710081c8e0(pdVar20,(long)iVar6,auStack_4f0);
  if (0xfffffffffffffffc < uVar22 - 1) {
    if (0xfffffffffffffffd < uVar22) {
      local_5c0 = (double *)0x0;
      uVar5 = *(ushort *)(param_2 + 2) | 0x40;
      goto LAB_710082ba2c;
    }
    goto LAB_710082b960;
  }
  pdVar20 = (double *)((long)pdVar20 + uVar22);
  uVar32 = uVar32 + 1;
  uVar14 = uVar14 + uVar22;
  goto LAB_710082b8e4;
LAB_710082b960:
  if (uVar14 < 100) {
    local_5c0 = (double *)0x0;
    pdVar20 = (double *)&local_390;
  }
  else {
    local_5c0 = (double *)FUN_7100814ca0(param_1,(uVar14 + 1) * 4);
    pdVar20 = local_5c0;
    if (local_5c0 == (double *)0x0) {
      uVar5 = *(ushort *)(param_2 + 2) | 0x40;
LAB_710082ba2c:
      *(ushort *)(param_2 + 2) = uVar5;
LAB_710082d28c:
      if (local_5c0 != (double *)0x0) {
        FUN_7100816da0(param_1);
      }
LAB_710082d2a0:
      if ((*(ushort *)(param_2 + 2) >> 6 & 1) != 0) {
        return -1;
      }
      return local_59c;
    }
  }
  FUN_7100808340(auStack_4f0,0,8);
  pdVar38 = pdVar20;
  for (; uVar14 != 0; uVar14 = uVar14 - uVar32) {
    uVar32 = FUN_7100823160(param_1,pdVar38,pdVar39,uVar14,auStack_4f0);
    if (0xfffffffffffffffc < uVar32 - 1) {
      if (0xfffffffffffffffd < uVar32) {
        uVar5 = *(ushort *)(param_2 + 2) | 0x40;
        goto LAB_710082ba2c;
      }
      break;
    }
    pdVar38 = (double *)((long)pdVar38 + 4);
    pdVar39 = (double *)((long)pdVar39 + uVar32);
  }
  *(wchar_t *)pdVar38 = L'\0';
  uVar36 = 0;
  uVar10 = (uint)((ulong)((long)pdVar38 - (long)pdVar20) >> 2);
  iVar6 = 0;
  uVar7 = 0x73;
  uVar33 = 0;
LAB_710082c400:
  uVar41 = uVar36;
  if ((int)uVar36 < (int)uVar10) {
    uVar41 = uVar10;
  }
  if (local_520 != 0) {
    uVar41 = uVar41 + 1;
  }
  local_568 = uVar9 & 2;
  if ((uVar9 >> 1 & 1) != 0) {
    uVar41 = uVar41 + 2;
  }
  local_560 = uVar9 & 0x84;
  if (((uVar9 & 0x84) == 0) && (iVar12 = uVar43 - uVar41, plVar28 = plVar27, 0 < iVar12)) {
    while( true ) {
      plVar27 = plVar28 + 2;
      local_4e0 = local_4e0 + 1;
      if (iVar12 < 0x11) break;
      *plVar28 = (long)&DAT_71009d3b60;
      plVar28[1] = 0x10;
      local_4d8 = local_4d8 + 0x10;
      if (7 < local_4e0) {
        iVar11 = FUN_7100833700(param_1,param_2,&local_4e8);
        if (iVar11 != 0) goto LAB_710082d28c;
        plVar27 = local_410;
      }
      iVar12 = iVar12 + -0x10;
      plVar28 = plVar27;
    }
    *plVar28 = (long)&DAT_71009d3b60;
    plVar28[1] = (long)iVar12;
    local_4d8 = iVar12 + local_4d8;
    if (7 < local_4e0) {
      iVar12 = FUN_7100833700(param_1,param_2,&local_4e8);
      if (iVar12 != 0) goto LAB_710082d28c;
      plVar27 = local_410;
    }
  }
  if (local_520 != 0) {
    *plVar27 = (long)&local_520;
    plVar27[1] = 1;
    local_4d8 = local_4d8 + 1;
    local_4e0 = local_4e0 + 1;
    if (local_4e0 < 8) {
      plVar27 = plVar27 + 2;
    }
    else {
      iVar12 = FUN_7100833700(param_1,param_2,&local_4e8);
      if (iVar12 != 0) goto LAB_710082d28c;
      plVar27 = local_410;
    }
  }
  if (local_568 != 0) {
    *plVar27 = (long)&local_4f8;
    plVar27[1] = 2;
    local_4d8 = local_4d8 + 2;
    local_4e0 = local_4e0 + 1;
    if (local_4e0 < 8) {
      plVar27 = plVar27 + 2;
    }
    else {
      iVar12 = FUN_7100833700(param_1,param_2,&local_4e8);
      if (iVar12 != 0) goto LAB_710082d28c;
      plVar27 = local_410;
    }
  }
  if ((local_560 == 0x80) && (iVar12 = uVar43 - uVar41, plVar28 = plVar27, 0 < iVar12)) {
    while( true ) {
      plVar27 = plVar28 + 2;
      local_4e0 = local_4e0 + 1;
      if (iVar12 < 0x11) break;
      *plVar28 = (long)&DAT_71009d3b20;
      plVar28[1] = 0x10;
      local_4d8 = local_4d8 + 0x10;
      if (7 < local_4e0) {
        iVar11 = FUN_7100833700(param_1,param_2,&local_4e8);
        if (iVar11 != 0) goto LAB_710082d28c;
        plVar27 = local_410;
      }
      iVar12 = iVar12 + -0x10;
      plVar28 = plVar27;
    }
    *plVar28 = (long)&DAT_71009d3b20;
    plVar28[1] = (long)iVar12;
    local_4d8 = iVar12 + local_4d8;
    if (7 < local_4e0) {
      iVar12 = FUN_7100833700(param_1,param_2,&local_4e8);
      if (iVar12 != 0) goto LAB_710082d28c;
      plVar27 = local_410;
    }
  }
  iVar12 = uVar36 - uVar10;
  if (0 < iVar12) {
    plVar28 = plVar27;
    while( true ) {
      plVar27 = plVar28 + 2;
      local_4e0 = local_4e0 + 1;
      if (iVar12 < 0x11) break;
      *plVar28 = (long)&DAT_71009d3b20;
      plVar28[1] = 0x10;
      local_4d8 = local_4d8 + 0x10;
      if (7 < local_4e0) {
        iVar11 = FUN_7100833700(param_1,param_2,&local_4e8);
        if (iVar11 != 0) goto LAB_710082d28c;
        plVar27 = local_410;
      }
      iVar12 = iVar12 + -0x10;
      plVar28 = plVar27;
    }
    *plVar28 = (long)&DAT_71009d3b20;
    plVar28[1] = (long)iVar12;
    local_4d8 = iVar12 + local_4d8;
    if (7 < local_4e0) {
      iVar12 = FUN_7100833700(param_1,param_2,&local_4e8);
      if (iVar12 != 0) goto LAB_710082d28c;
      plVar27 = local_410;
    }
  }
  uVar36 = local_50c;
  if ((uVar9 >> 8 & 1) == 0) {
    *plVar27 = (long)pdVar20;
    plVar27[1] = (long)(int)uVar10;
    local_4d8 = (int)uVar10 + local_4d8;
    local_4e0 = local_4e0 + 1;
    if (local_4e0 < 8) {
      plVar28 = plVar27 + 2;
      goto LAB_710082d13c;
    }
  }
  else if (uVar7 < 0x66) {
    local_4d8 = local_4d8 + 1;
    *plVar27 = (long)pdVar20;
    plVar27[1] = 1;
    local_4e0 = local_4e0 + 1;
    plVar27 = plVar27 + 2;
    if (((int)local_50c < 2) && ((uVar9 & 1) == 0)) {
joined_r0x00710082d0e0:
      if (7 < local_4e0) {
LAB_710082d040:
        iVar6 = FUN_7100833700(param_1,param_2,&local_4e8);
        if (iVar6 != 0) goto LAB_710082d28c;
        plVar27 = local_410;
      }
    }
    else {
      if (7 < local_4e0) {
        iVar6 = FUN_7100833700(param_1,param_2,&local_4e8);
        if (iVar6 != 0) goto LAB_710082d28c;
        plVar27 = local_410;
      }
      *plVar27 = (long)&local_518;
      plVar27[1] = 1;
      local_4d8 = local_4d8 + 1;
      local_4e0 = local_4e0 + 1;
      if (local_4e0 < 8) {
        plVar27 = plVar27 + 2;
      }
      else {
        iVar6 = FUN_7100833700(param_1,param_2,&local_4e8);
        if (iVar6 != 0) goto LAB_710082d28c;
        plVar27 = local_410;
      }
      iVar6 = uVar36 - 1;
      if (dVar44 == 0.0) {
        if (1 < (int)uVar36) {
          while( true ) {
            local_4e0 = local_4e0 + 1;
            if (iVar6 < 0x11) break;
            *plVar27 = (long)&DAT_71009d3b20;
            plVar27[1] = 0x10;
            local_4d8 = local_4d8 + 0x10;
            plVar27 = plVar27 + 2;
            if (7 < local_4e0) {
              iVar12 = FUN_7100833700(param_1,param_2,&local_4e8);
              if (iVar12 != 0) goto LAB_710082d28c;
              plVar27 = local_410;
            }
            iVar6 = iVar6 + -0x10;
          }
          *plVar27 = (long)&DAT_71009d3b20;
          plVar27[1] = (long)iVar6;
          local_4d8 = iVar6 + local_4d8;
          plVar27 = plVar27 + 2;
          goto joined_r0x00710082d0e0;
        }
      }
      else {
        *plVar27 = (long)((long)pdVar20 + 4);
        plVar27[1] = (long)iVar6;
        local_4d8 = iVar6 + local_4d8;
        local_4e0 = local_4e0 + 1;
        if (7 < local_4e0) goto LAB_710082d040;
        plVar27 = plVar27 + 2;
      }
    }
    *plVar27 = (long)&local_4d0;
    plVar27[1] = (long)local_540;
    local_4d8 = local_4d8 + local_540;
    local_4e0 = local_4e0 + 1;
    if (local_4e0 < 8) {
      plVar28 = plVar27 + 2;
      goto LAB_710082d13c;
    }
  }
  else {
    if (dVar44 == 0.0) {
      *plVar27 = (long)&DAT_71009d3a48;
      plVar27[1] = 1;
      local_4d8 = local_4d8 + 1;
      local_4e0 = local_4e0 + 1;
      if (local_4e0 < 8) {
        plVar28 = plVar27 + 2;
      }
      else {
        iVar6 = FUN_7100833700(param_1,param_2,&local_4e8);
        if (iVar6 != 0) goto LAB_710082d28c;
        plVar28 = local_410;
      }
      uVar36 = local_50c;
      if (((int)local_50c <= (int)local_510) && ((uVar9 & 1) == 0)) goto LAB_710082d13c;
      *plVar28 = (long)&local_518;
      plVar28[1] = 1;
      local_4d8 = local_4d8 + 1;
      local_4e0 = local_4e0 + 1;
      if (local_4e0 < 8) {
        plVar27 = plVar28 + 2;
      }
      else {
        iVar6 = FUN_7100833700(param_1,param_2,&local_4e8);
        if (iVar6 != 0) goto LAB_710082d28c;
        plVar27 = local_410;
      }
      iVar6 = uVar36 - 1;
      plVar28 = plVar27;
      if (iVar6 < 1) goto LAB_710082d13c;
      while( true ) {
        plVar28 = plVar27 + 2;
        local_4e0 = local_4e0 + 1;
        if (iVar6 < 0x11) break;
        *plVar27 = (long)&DAT_71009d3b20;
        plVar27[1] = 0x10;
        local_4d8 = local_4d8 + 0x10;
        if (7 < local_4e0) {
          iVar12 = FUN_7100833700(param_1,param_2,&local_4e8);
          if (iVar12 != 0) goto LAB_710082d28c;
          plVar28 = local_410;
        }
        iVar6 = iVar6 + -0x10;
        plVar27 = plVar28;
      }
      *plVar27 = (long)&DAT_71009d3b20;
      plVar27[1] = (long)iVar6;
      local_4d8 = iVar6 + local_4d8;
    }
    else {
      if ((int)local_510 < 1) {
        *plVar27 = (long)&DAT_71009d3a48;
        plVar27[1] = 1;
        local_4d8 = local_4d8 + 1;
        local_4e0 = local_4e0 + 1;
        if (local_4e0 < 8) {
          plVar28 = plVar27 + 2;
        }
        else {
          iVar6 = FUN_7100833700(param_1,param_2,&local_4e8);
          if (iVar6 != 0) goto LAB_710082d28c;
          plVar28 = local_410;
        }
        uVar36 = local_50c;
        if ((local_50c == 0 && local_510 == 0) && (uVar9 & 1) == 0) goto LAB_710082d13c;
        *plVar28 = (long)&local_518;
        plVar28[1] = 1;
        local_4d8 = local_4d8 + 1;
        local_4e0 = local_4e0 + 1;
        if (local_4e0 < 8) {
          plVar28 = plVar28 + 2;
        }
        else {
          iVar6 = FUN_7100833700(param_1,param_2,&local_4e8);
          if (iVar6 != 0) goto LAB_710082d28c;
          plVar28 = local_410;
        }
        if ((int)local_510 < 0) {
          iVar6 = -local_510;
          plVar27 = plVar28;
          while( true ) {
            plVar28 = plVar27 + 2;
            local_4e0 = local_4e0 + 1;
            if (iVar6 < 0x11) break;
            *plVar27 = (long)&DAT_71009d3b20;
            plVar27[1] = 0x10;
            local_4d8 = local_4d8 + 0x10;
            if (7 < local_4e0) {
              iVar12 = FUN_7100833700(param_1,param_2,&local_4e8);
              if (iVar12 != 0) goto LAB_710082d28c;
              plVar28 = local_410;
            }
            iVar6 = iVar6 + -0x10;
            plVar27 = plVar28;
          }
          *plVar27 = (long)&DAT_71009d3b20;
          plVar27[1] = (long)iVar6;
          local_4d8 = iVar6 + local_4d8;
          if (7 < local_4e0) {
            iVar6 = FUN_7100833700(param_1,param_2,&local_4e8);
            if (iVar6 != 0) goto LAB_710082d28c;
            plVar28 = local_410;
          }
        }
        *plVar28 = (long)pdVar20;
        plVar28[1] = (long)(int)uVar36;
        local_4d8 = local_4d8 + (int)uVar36;
        local_4e0 = local_4e0 + 1;
        if (local_4e0 < 8) {
          plVar28 = plVar28 + 2;
          goto LAB_710082d13c;
        }
        goto LAB_710082d11c;
      }
      uVar7 = local_50c;
      if ((int)uVar42 < (int)local_50c) {
        uVar7 = uVar42;
      }
      if (0 < (int)uVar7) {
        *plVar27 = (long)pdVar20;
        plVar27[1] = (long)(int)uVar7;
        local_4d8 = (int)uVar7 + local_4d8;
        local_4e0 = local_4e0 + 1;
        if (local_4e0 < 8) {
          plVar27 = plVar27 + 2;
        }
        else {
          iVar12 = FUN_7100833700(param_1,param_2,&local_4e8);
          if (iVar12 != 0) goto LAB_710082d28c;
          plVar27 = local_410;
        }
      }
      iVar12 = uVar42 - (uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU));
      if (0 < iVar12) {
        plVar28 = plVar27;
        while( true ) {
          plVar27 = plVar28 + 2;
          local_4e0 = local_4e0 + 1;
          if (iVar12 < 0x11) break;
          *plVar28 = (long)&DAT_71009d3b20;
          plVar28[1] = 0x10;
          local_4d8 = local_4d8 + 0x10;
          if (7 < local_4e0) {
            iVar11 = FUN_7100833700(param_1,param_2,&local_4e8);
            if (iVar11 != 0) goto LAB_710082d28c;
            plVar27 = local_410;
          }
          iVar12 = iVar12 + -0x10;
          plVar28 = plVar27;
        }
        *plVar28 = (long)&DAT_71009d3b20;
        plVar28[1] = (long)iVar12;
        local_4d8 = iVar12 + local_4d8;
        if (7 < local_4e0) {
          iVar12 = FUN_7100833700(param_1,param_2,&local_4e8);
          if (iVar12 != 0) goto LAB_710082d28c;
          plVar27 = local_410;
        }
      }
      pwVar40 = (wchar_t *)((long)pdVar20 + (long)(int)uVar42 * 4);
      if (uVar9 >> 10 != 0) {
        while (0 < (int)uVar33 || 0 < iVar6) {
          if (iVar6 < 1) {
            local_598 = local_598 + -1;
            uVar33 = uVar33 - 1;
          }
          else {
            iVar6 = iVar6 + -1;
          }
          *plVar27 = (long)&local_51c;
          plVar27[1] = 1;
          local_4d8 = local_4d8 + 1;
          local_4e0 = local_4e0 + 1;
          if (local_4e0 < 8) {
            plVar27 = plVar27 + 2;
          }
          else {
            iVar12 = FUN_7100833700(param_1,param_2,&local_4e8);
            if (iVar12 != 0) goto LAB_710082d28c;
            plVar27 = local_410;
          }
          uVar10 = (uint)((long)pdVar20 + ((long)(int)uVar36 * 4 - (long)pwVar40) >> 2);
          uVar7 = (uint)*local_598;
          if ((int)uVar10 <= (int)(uint)*local_598) {
            uVar7 = uVar10;
          }
          if (0 < (int)uVar7) {
            *plVar27 = (long)pwVar40;
            plVar27[1] = (long)(int)uVar7;
            local_4d8 = (int)uVar7 + local_4d8;
            local_4e0 = local_4e0 + 1;
            if (local_4e0 < 8) {
              plVar27 = plVar27 + 2;
            }
            else {
              iVar12 = FUN_7100833700(param_1,param_2,&local_4e8);
              if (iVar12 != 0) goto LAB_710082d28c;
              plVar27 = local_410;
            }
          }
          iVar12 = (uint)*local_598 - (uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU));
          plVar28 = plVar27;
          if (0 < iVar12) {
            while( true ) {
              local_4e0 = local_4e0 + 1;
              plVar27 = plVar28 + 2;
              if (iVar12 < 0x11) break;
              *plVar28 = (long)&DAT_71009d3b20;
              plVar28[1] = 0x10;
              local_4d8 = local_4d8 + 0x10;
              if (7 < local_4e0) {
                iVar11 = FUN_7100833700(param_1,param_2,&local_4e8);
                if (iVar11 != 0) goto LAB_710082d28c;
                plVar27 = local_410;
              }
              iVar12 = iVar12 + -0x10;
              plVar28 = plVar27;
            }
            *plVar28 = (long)&DAT_71009d3b20;
            plVar28[1] = (long)iVar12;
            local_4d8 = iVar12 + local_4d8;
            if (7 < local_4e0) {
              iVar12 = FUN_7100833700(param_1,param_2,&local_4e8);
              if (iVar12 != 0) goto LAB_710082d28c;
              plVar27 = local_410;
            }
          }
          pwVar40 = pwVar40 + *local_598;
        }
        pwVar2 = (wchar_t *)((long)pdVar20 + (long)(int)uVar36 * 4);
        if (pwVar2 < pwVar40) {
          pwVar40 = pwVar2;
        }
      }
      if (((int)local_510 < (int)uVar36) || ((uVar9 & 1) != 0)) {
        *plVar27 = (long)&local_518;
        plVar27[1] = 1;
        local_4d8 = local_4d8 + 1;
        local_4e0 = local_4e0 + 1;
        if (local_4e0 < 8) {
          plVar27 = plVar27 + 2;
        }
        else {
          iVar6 = FUN_7100833700(param_1,param_2,&local_4e8);
          if (iVar6 != 0) goto LAB_710082d28c;
          plVar27 = local_410;
        }
      }
      uVar10 = (uint)((long)pdVar20 + ((long)(int)uVar36 * 4 - (long)pwVar40) >> 2);
      uVar7 = uVar36 - local_510;
      if ((int)uVar10 <= (int)(uVar36 - local_510)) {
        uVar7 = uVar10;
      }
      if (0 < (int)uVar7) {
        *plVar27 = (long)pwVar40;
        plVar27[1] = (long)(int)uVar7;
        local_4d8 = (int)uVar7 + local_4d8;
        local_4e0 = local_4e0 + 1;
        if (local_4e0 < 8) {
          plVar27 = plVar27 + 2;
        }
        else {
          iVar6 = FUN_7100833700(param_1,param_2,&local_4e8);
          if (iVar6 != 0) goto LAB_710082d28c;
          plVar27 = local_410;
        }
      }
      iVar6 = (uVar36 - local_510) - (uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU));
      plVar28 = plVar27;
      if (iVar6 < 1) goto LAB_710082d13c;
      while( true ) {
        plVar28 = plVar27 + 2;
        local_4e0 = local_4e0 + 1;
        if (iVar6 < 0x11) break;
        *plVar27 = (long)&DAT_71009d3b20;
        plVar27[1] = 0x10;
        local_4d8 = local_4d8 + 0x10;
        if (7 < local_4e0) {
          iVar12 = FUN_7100833700(param_1,param_2,&local_4e8);
          if (iVar12 != 0) goto LAB_710082d28c;
          plVar28 = local_410;
        }
        iVar6 = iVar6 + -0x10;
        plVar27 = plVar28;
      }
      *plVar27 = (long)&DAT_71009d3b20;
      plVar27[1] = (long)iVar6;
      local_4d8 = iVar6 + local_4d8;
    }
    if (local_4e0 < 8) goto LAB_710082d13c;
  }
LAB_710082d11c:
  iVar6 = FUN_7100833700(param_1,param_2,&local_4e8);
  if (iVar6 != 0) goto LAB_710082d28c;
  plVar28 = local_410;
LAB_710082d13c:
  if (((uVar9 >> 2 & 1) != 0) && (iVar6 = uVar43 - uVar41, 0 < iVar6)) {
    for (; local_4e0 = local_4e0 + 1, 0x10 < iVar6; iVar6 = iVar6 + -0x10) {
      *plVar28 = (long)&DAT_71009d3b60;
      plVar28[1] = 0x10;
      local_4d8 = local_4d8 + 0x10;
      if (local_4e0 < 8) {
        plVar28 = plVar28 + 2;
      }
      else {
        iVar12 = FUN_7100833700(param_1,param_2,&local_4e8);
        if (iVar12 != 0) goto LAB_710082d28c;
        plVar28 = local_410;
      }
    }
    *plVar28 = (long)&DAT_71009d3b60;
    plVar28[1] = (long)iVar6;
    local_4d8 = iVar6 + local_4d8;
    if ((7 < local_4e0) && (iVar6 = FUN_7100833700(param_1,param_2,&local_4e8), iVar6 != 0))
    goto LAB_710082d28c;
  }
  if ((int)uVar43 < (int)uVar41) {
    uVar43 = uVar41;
  }
  local_59c = local_59c + uVar43;
  if ((local_4d8 != 0) && (iVar6 = FUN_7100833700(param_1,param_2,&local_4e8), iVar6 != 0))
  goto LAB_710082d28c;
  local_4e0 = 0;
  if (local_5c0 != (double *)0x0) {
    FUN_7100816da0(param_1,local_5c0);
  }
  plVar27 = local_410;
  param_3 = local_5a8;
  uVar14 = local_5b8;
  goto LAB_7100829db0;
switchD_7100829e84_caseD_31:
  uVar9 = 0;
  puVar25 = local_5a8;
  do {
    iVar6 = uVar7 + uVar9 * 10;
    local_5a8 = puVar25 + 1;
    uVar7 = *puVar25;
    uVar9 = iVar6 - 0x30;
    puVar25 = local_5a8;
  } while (uVar7 - 0x30 < 10);
  if (uVar7 == 0x24) goto code_r0x00710082a258;
  goto LAB_7100829e68;
code_r0x00710082a258:
  if (0x20 < (int)uVar9) goto LAB_710082d2a0;
  uVar14 = (ulong)(iVar6 - 0x31);
  bVar1 = true;
  goto LAB_7100829e60;
}



// ===== FUN_710082d2e0 @ 710082d2e0 (size=392) =====

undefined8 FUN_710082d2e0(undefined4 *param_1,long *param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  
  uVar6 = (ulong)*(int *)((long)param_2 + 0xc);
  iVar3 = (int)param_4;
  if (uVar6 <= param_4) {
    lVar4 = *param_2;
    iVar7 = *(int *)((long)param_2 + 0xc);
    if (((int)(short)param_2[2] & 0x480U) == 0) goto LAB_710082d318;
    iVar5 = (int)lVar4 - (int)param_2[3];
    iVar7 = ((int)param_2[4] * 3) / 2;
    uVar6 = (ulong)iVar7;
    bVar2 = uVar6 < param_4 + 1 + (long)iVar5;
    if (bVar2) {
      iVar7 = iVar3 + iVar5 + 1;
    }
    uVar1 = (long)iVar7;
    if (!bVar2) {
      uVar1 = uVar6;
    }
    if (((uint)(int)(short)param_2[2] >> 10 & 1) == 0) {
      lVar4 = FUN_710081d8c0();
      if (lVar4 == 0) {
        FUN_7100816da0(param_1,param_2[3]);
        goto LAB_710082d44c;
      }
    }
    else {
      lVar4 = FUN_7100814ca0(param_1,uVar1);
      if (lVar4 == 0) {
LAB_710082d44c:
        *param_1 = 0xc;
        *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | 0x40;
        return 0xffffffff;
      }
      FUN_710080f900(lVar4,param_2[3],(long)iVar5);
      *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) & 0xfb7f | 0x80;
    }
    uVar6 = (ulong)iVar3;
    param_2[3] = lVar4;
    lVar4 = lVar4 + iVar5;
    *param_2 = lVar4;
    *(int *)(param_2 + 4) = iVar7;
    *(int *)((long)param_2 + 0xc) = iVar7 - iVar5;
    iVar7 = iVar3;
    if (uVar6 <= param_4) goto LAB_710082d318;
  }
  uVar6 = (ulong)iVar3;
  lVar4 = *param_2;
  iVar7 = iVar3;
LAB_710082d318:
  FUN_710080f900(lVar4,param_3,uVar6);
  *(int *)((long)param_2 + 0xc) = *(int *)((long)param_2 + 0xc) - iVar7;
  *param_2 = *param_2 + uVar6;
  return 0;
}



// ===== FUN_710082d480 @ 710082d480 (size=8) =====

void FUN_710082d480(undefined8 param_1)

{
  FUN_7100833840(param_1,0);
  return;
}



// ===== FUN_710082d4a0 @ 710082d4a0 (size=8) =====

void FUN_710082d4a0(undefined8 param_1)

{
  FUN_71008338a0(param_1,0);
  return;
}



// ===== FUN_710082d4c0 @ 710082d4c0 (size=360) =====

long FUN_710082d4c0(undefined4 *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((param_1 != (undefined4 *)0x0) && (*(long *)(param_1 + 0x12) == 0)) {
    FUN_710080d840();
  }
  if (((*(uint *)((long)param_2 + 0xb4) & 1) == 0) && ((*(ushort *)(param_2 + 2) >> 9 & 1) == 0)) {
    FUN_7100836200(param_2 + 0x14);
  }
  if ((code *)param_2[9] == (code *)0x0) {
    *param_1 = 0x1d;
LAB_710082d600:
    if (((*(uint *)((long)param_2 + 0xb4) & 1) == 0) && ((*(ushort *)(param_2 + 2) >> 9 & 1) == 0))
    {
      FUN_7100836220(param_2 + 0x14);
      lVar2 = -1;
    }
    else {
      lVar2 = -1;
    }
  }
  else {
    uVar1 = (uint)(short)param_2[2];
    if ((((param_2[2] & 0xcU) == 8) && (*param_2 != 0)) && (0 < *param_2 - param_2[3])) {
      uVar3 = 2;
      if ((uVar1 >> 8 & 1) == 0) {
        if ((uVar1 >> 0xc & 1) != 0) goto LAB_710082d56c;
LAB_710082d50c:
        uVar3 = 1;
      }
      lVar2 = (*(code *)param_2[9])(param_1,param_2[6],0,uVar3);
      if (lVar2 == -1) goto LAB_710082d600;
      uVar1 = (uint)(short)param_2[2];
      if (((uint)(int)(short)param_2[2] >> 2 & 1) == 0) goto LAB_710082d574;
LAB_710082d53c:
      lVar2 = lVar2 - (int)param_2[1];
      if (param_2[0xb] != 0) {
        lVar2 = lVar2 - (int)param_2[0xe];
      }
    }
    else {
      if ((uVar1 >> 0xc & 1) == 0) goto LAB_710082d50c;
LAB_710082d56c:
      lVar2 = param_2[0x12];
      if ((uVar1 >> 2 & 1) != 0) goto LAB_710082d53c;
LAB_710082d574:
      if (((uVar1 >> 3 & 1) != 0) && (*param_2 != 0)) {
        lVar2 = lVar2 + (*param_2 - param_2[3]);
      }
    }
    if (((*(uint *)((long)param_2 + 0xb4) & 1) == 0) && ((uVar1 >> 9 & 1) == 0)) {
      FUN_7100836220(param_2 + 0x14);
      return lVar2;
    }
  }
  return lVar2;
}



// ===== FUN_710082d628 @ 710082d628 (size=116) =====

undefined8 FUN_710082d628(int param_1,ulong *param_2,int *param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  iVar1 = *param_3;
  for (lVar5 = (long)iVar1; (int)lVar5 <= param_1; lVar5 = lVar5 + 1) {
    iVar2 = (int)param_2[3];
    puVar4 = (undefined8 *)*param_2;
    if ((iVar2 < 0) && (*(int *)(param_2 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
      puVar4 = (undefined8 *)(param_2[1] + (long)iVar2);
    }
    else {
      *param_2 = (long)puVar4 + 0xfU & 0xfffffffffffffff8;
    }
    *(undefined8 *)(param_4 + lVar5 * 8) = *puVar4;
  }
  iVar2 = (param_1 + 1) - iVar1;
  if (param_1 + 1 < iVar1) {
    iVar2 = 0;
  }
  uVar3 = *(undefined8 *)(param_4 + (long)param_1 * 8);
  *param_3 = iVar2 + iVar1;
  return uVar3;
}



// ===== FUN_710082d69c @ 710082d69c (size=12896) =====

int FUN_710082d69c(undefined4 *param_1,long *param_2,byte *param_3,ulong *param_4)

{
  uint uVar1;
  undefined *puVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  undefined1 *puVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  int *piVar18;
  undefined8 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  long lVar22;
  uint *puVar23;
  uint *puVar24;
  byte *pbVar25;
  undefined8 uVar26;
  undefined2 *puVar27;
  double *pdVar28;
  byte bVar29;
  byte *pbVar30;
  ulong uVar31;
  ulong uVar32;
  uint uVar33;
  undefined8 extraout_x10;
  undefined8 extraout_x10_00;
  undefined8 extraout_x10_01;
  undefined8 extraout_x10_02;
  int iVar34;
  long lVar35;
  int iVar36;
  code *pcVar37;
  ulong uVar38;
  byte *pbVar39;
  float *pfVar40;
  undefined1 *puVar41;
  long *plVar42;
  uint uVar43;
  long *plVar44;
  byte *pbVar45;
  ulong uVar46;
  int iVar47;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  float fVar48;
  double dVar49;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined8 extraout_var_02;
  undefined8 local_4b0;
  undefined4 local_4a8 [2];
  undefined *local_428;
  byte *local_408;
  long local_400;
  undefined *local_3f8;
  long local_3e8;
  code *local_3e0;
  long local_3d8;
  byte *local_3a8;
  int local_398;
  int local_394;
  int local_390;
  uint local_38c;
  undefined1 auStack_388 [8];
  int local_380 [2];
  undefined1 auStack_378 [8];
  uint local_370 [2];
  long local_368 [32];
  char local_268 [256];
  byte local_168 [335];
  byte bStack_19;
  byte abStack_18 [24];
  
  puVar8 = &stack0xfffffffffffffb60;
  plVar42 = (long *)0x0;
  iVar47 = 0;
  local_390 = 0;
  FUN_7100808340(auStack_388,0,8);
  local_428 = &DAT_7100af4978;
  local_3e0 = (code *)0x0;
  local_3d8 = 0;
  iVar34 = 0;
  local_398 = 0;
  local_394 = 0;
  local_3a8 = param_3;
LAB_710082d720:
  do {
    lVar17 = FUN_7100834b00();
    puVar23 = &local_38c;
    puVar2 = *(undefined **)(lVar17 + 0x40);
    if (*(undefined **)(lVar17 + 0x40) == (undefined *)0x0) {
      puVar2 = local_428;
    }
    pcVar37 = *(code **)(puVar2 + 0xe8);
    iVar12 = FUN_7100809520();
    iVar12 = (*pcVar37)(param_1,puVar23,local_3a8,(long)iVar12,auStack_388);
    if (iVar12 < 0) {
      local_38c = 0xfffd;
      iVar12 = 1;
      FUN_7100808340(auStack_388,0,8);
    }
    if (local_38c == 0) goto switchD_710082d858_caseD_26;
    local_3a8 = local_3a8 + iVar12;
    if ((iVar12 != 1) || (((byte)(&DAT_71009d32f1)[(int)local_38c] >> 3 & 1) == 0)) {
      if (local_38c == 0x25) {
        bVar9 = false;
        uVar43 = 0;
        uVar38 = 0;
        pbVar25 = local_3a8;
        iVar13 = iVar47;
LAB_710082d834:
        local_3a8 = pbVar25 + 1;
        iVar36 = (int)uVar38;
        switch((uint)*pbVar25) {
        case 0x24:
          if (uVar43 != 0) goto switchD_710082d858_caseD_26;
          if (0x20 < uVar38) {
            *param_1 = 0x16;
            goto LAB_71008307e0;
          }
          iVar13 = iVar36 + -1;
          bVar9 = true;
          uVar38 = 0;
          pbVar25 = local_3a8;
          goto LAB_710082d834;
        case 0x25:
          goto switchD_710082d858_caseD_25;
        default:
          goto switchD_710082d858_caseD_26;
        case 0x2a:
          if ((uVar43 != 0) || (uVar38 != 0)) goto switchD_710082d858_caseD_26;
          uVar43 = 0x10;
          pbVar25 = local_3a8;
          goto LAB_710082d834;
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
          if ((uVar43 & 0x8f) != 0) goto switchD_710082d858_caseD_26;
          uVar38 = uVar38 * 10 + -0x30 + (ulong)(uint)*pbVar25;
          pbVar25 = local_3a8;
          goto LAB_710082d834;
        case 0x41:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x61:
        case 0x65:
        case 0x66:
        case 0x67:
          iVar12 = 4;
          break;
        case 0x43:
          uVar43 = uVar43 | 1;
          goto LAB_710082da78;
        case 0x44:
          uVar43 = uVar43 | 1;
          goto LAB_710082de84;
        case 0x4c:
          if ((uVar43 & 0xf) == 0) goto LAB_710082d928;
          goto switchD_710082d858_caseD_26;
        case 0x4f:
          uVar43 = uVar43 | 1;
          goto LAB_710082d9f0;
        case 0x53:
          uVar43 = uVar43 | 1;
          goto LAB_710082da34;
        case 0x58:
        case 0x78:
          uVar43 = uVar43 | 0x200;
          goto LAB_710082da90;
        case 0x5b:
          uVar43 = uVar43 | 0x40;
          local_3a8 = (byte *)FUN_7100833a40(local_268,local_3a8);
          iVar12 = 1;
          break;
        case 99:
LAB_710082da78:
          uVar43 = uVar43 | 0x40;
          iVar12 = 0;
          break;
        case 100:
LAB_710082de84:
          local_3e0 = FUN_710081b6a0;
LAB_710082de8c:
          iVar34 = 10;
LAB_710082de98:
          iVar12 = 3;
          break;
        case 0x68:
          if ((uVar43 & 0xf) != 0) goto switchD_710082d858_caseD_26;
          if (pbVar25[1] == 0x68) {
            uVar43 = uVar43 | 8;
            pbVar25 = pbVar25 + 2;
          }
          else {
            uVar43 = uVar43 | 4;
            pbVar25 = local_3a8;
          }
          goto LAB_710082d834;
        case 0x69:
          local_3e0 = FUN_710081b6a0;
          iVar34 = 0;
          goto LAB_710082de98;
        case 0x6a:
        case 0x74:
        case 0x7a:
          if ((uVar43 & 0xf) != 0) goto switchD_710082d858_caseD_26;
LAB_710082d960:
          uVar43 = uVar43 | 1;
          pbVar25 = local_3a8;
          goto LAB_710082d834;
        case 0x6c:
          if ((uVar43 & 0xf) != 0) goto switchD_710082d858_caseD_26;
          if (pbVar25[1] != 0x6c) goto LAB_710082d960;
          local_3a8 = pbVar25 + 2;
LAB_710082d928:
          uVar43 = uVar43 | 2;
          pbVar25 = local_3a8;
          goto LAB_710082d834;
        case 0x6d:
          if ((uVar43 & 0x8f) == 0) goto code_r0x00710082d974;
          goto switchD_710082d858_caseD_26;
        case 0x6e:
          if ((uVar43 >> 4 & 1) == 0) {
            if ((uVar43 >> 3 & 1) == 0) {
              if ((uVar43 >> 2 & 1) == 0) {
                if (((uVar43 & 1) == 0) && ((uVar43 >> 1 & 1) == 0)) {
                  if (bVar9) {
                    if (iVar13 < local_390) {
                      piVar18 = (int *)local_368[iVar13];
                    }
                    else {
                      piVar18 = (int *)FUN_710082d628(iVar13,param_4,&local_390);
                    }
                  }
                  else {
                    iVar12 = iVar47 + 1;
                    if (iVar47 < local_390) {
                      piVar18 = (int *)local_368[iVar13];
                      iVar47 = iVar12;
                    }
                    else {
                      plVar44 = (long *)*param_4;
                      iVar47 = (int)param_4[3];
                      if (local_390 < 0x20) {
                        if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
                          plVar44 = (long *)(param_4[1] + (long)iVar47);
                        }
                        else {
                          *param_4 = (long)plVar44 + 0xfU & 0xfffffffffffffff8;
                        }
                        piVar18 = (int *)*plVar44;
                        local_368[local_390] = (long)piVar18;
                        local_390 = local_390 + 1;
                        iVar47 = iVar12;
                      }
                      else {
                        if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
                          plVar44 = (long *)(param_4[1] + (long)iVar47);
                        }
                        else {
                          *param_4 = (long)plVar44 + 0xfU & 0xfffffffffffffff8;
                        }
                        piVar18 = (int *)*plVar44;
                        iVar47 = iVar12;
                      }
                    }
                  }
                  *piVar18 = local_394;
                }
                else {
                  if (bVar9) {
                    if (iVar13 < local_390) {
                      plVar44 = (long *)local_368[iVar13];
                    }
                    else {
                      plVar44 = (long *)FUN_710082d628(iVar13,param_4,&local_390);
                    }
                  }
                  else {
                    iVar12 = iVar47 + 1;
                    if (iVar47 < local_390) {
                      plVar44 = (long *)local_368[iVar13];
                      iVar47 = iVar12;
                    }
                    else {
                      plVar44 = (long *)*param_4;
                      iVar47 = (int)param_4[3];
                      if (local_390 < 0x20) {
                        if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
                          plVar44 = (long *)(param_4[1] + (long)iVar47);
                        }
                        else {
                          *param_4 = (long)plVar44 + 0xfU & 0xfffffffffffffff8;
                        }
                        plVar44 = (long *)*plVar44;
                        local_368[local_390] = (long)plVar44;
                        local_390 = local_390 + 1;
                        iVar47 = iVar12;
                      }
                      else {
                        if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
                          plVar44 = (long *)(param_4[1] + (long)iVar47);
                        }
                        else {
                          *param_4 = (long)plVar44 + 0xfU & 0xfffffffffffffff8;
                        }
                        plVar44 = (long *)*plVar44;
                        iVar47 = iVar12;
                      }
                    }
                  }
                  *plVar44 = (long)local_394;
                }
              }
              else {
                if (bVar9) {
                  if (iVar13 < local_390) {
                    puVar27 = (undefined2 *)local_368[iVar13];
                  }
                  else {
                    puVar27 = (undefined2 *)FUN_710082d628(iVar13,param_4,&local_390);
                  }
                }
                else {
                  iVar12 = iVar47 + 1;
                  if (iVar47 < local_390) {
                    puVar27 = (undefined2 *)local_368[iVar13];
                    iVar47 = iVar12;
                  }
                  else {
                    plVar44 = (long *)*param_4;
                    iVar47 = (int)param_4[3];
                    if (local_390 < 0x20) {
                      if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
                        plVar44 = (long *)(param_4[1] + (long)iVar47);
                      }
                      else {
                        *param_4 = (long)plVar44 + 0xfU & 0xfffffffffffffff8;
                      }
                      puVar27 = (undefined2 *)*plVar44;
                      local_368[local_390] = (long)puVar27;
                      local_390 = local_390 + 1;
                      iVar47 = iVar12;
                    }
                    else {
                      if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
                        plVar44 = (long *)(param_4[1] + (long)iVar47);
                      }
                      else {
                        *param_4 = (long)plVar44 + 0xfU & 0xfffffffffffffff8;
                      }
                      puVar27 = (undefined2 *)*plVar44;
                      iVar47 = iVar12;
                    }
                  }
                }
                *puVar27 = (undefined2)local_394;
              }
            }
            else {
              if (bVar9) {
                if (iVar13 < local_390) {
                  puVar41 = (undefined1 *)local_368[iVar13];
                }
                else {
                  puVar41 = (undefined1 *)FUN_710082d628(iVar13,param_4,&local_390);
                }
              }
              else {
                iVar12 = iVar47 + 1;
                if (iVar47 < local_390) {
                  puVar41 = (undefined1 *)local_368[iVar13];
                  iVar47 = iVar12;
                }
                else {
                  plVar44 = (long *)*param_4;
                  iVar47 = (int)param_4[3];
                  if (local_390 < 0x20) {
                    if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
                      plVar44 = (long *)(param_4[1] + (long)iVar47);
                    }
                    else {
                      *param_4 = (long)plVar44 + 0xfU & 0xfffffffffffffff8;
                    }
                    puVar41 = (undefined1 *)*plVar44;
                    local_368[local_390] = (long)puVar41;
                    local_390 = local_390 + 1;
                    iVar47 = iVar12;
                  }
                  else {
                    if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
                      plVar44 = (long *)(param_4[1] + (long)iVar47);
                    }
                    else {
                      *param_4 = (long)plVar44 + 0xfU & 0xfffffffffffffff8;
                    }
                    puVar41 = (undefined1 *)*plVar44;
                    iVar47 = iVar12;
                  }
                }
              }
              *puVar41 = (undefined1)local_394;
            }
          }
          goto LAB_710082d720;
        case 0x6f:
LAB_710082d9f0:
          local_3e0 = FUN_710080da60;
          iVar34 = 8;
          goto LAB_710082de98;
        case 0x70:
          uVar43 = uVar43 | 0x220;
LAB_710082da90:
          local_3e0 = FUN_710080da60;
          iVar34 = 0x10;
          goto LAB_710082de98;
        case 0x73:
LAB_710082da34:
          iVar12 = 2;
          break;
        case 0x75:
          local_3e0 = FUN_710080da60;
          goto LAB_710082de8c;
        }
        if (((int)param_2[1] < 1) && (iVar16 = FUN_7100830c7c(param_1,param_2), iVar16 != 0))
        goto LAB_71008307e0;
        if ((uVar43 >> 6 & 1) != 0) goto LAB_710082df48;
        goto LAB_710082df10;
      }
      goto LAB_710082d874;
    }
    while (((0 < (int)param_2[1] || (iVar12 = FUN_7100830c7c(param_1,param_2), iVar12 == 0)) &&
           (((byte)(&DAT_71009d32f1)[*(byte *)*param_2] >> 3 & 1) != 0))) {
      local_394 = local_394 + 1;
      *param_2 = (long)((byte *)*param_2 + 1);
      *(int *)(param_2 + 1) = (int)param_2[1] + -1;
    }
  } while( true );
code_r0x00710082d974:
  puVar41 = puVar8;
  if (plVar42 == (long *)0x0) {
    puVar41 = puVar8 + -0x10;
    plVar42 = (long *)(puVar8 + -0x10);
    *(undefined8 *)(puVar8 + -0x10) = 0;
    *(undefined4 *)(puVar8 + -8) = 0;
  }
  uVar43 = uVar43 | 0x80;
  puVar8 = puVar41;
  pbVar25 = local_3a8;
  goto LAB_710082d834;
LAB_710082df10:
  if (((byte)(&DAT_71009d32f1)[*(byte *)*param_2] >> 3 & 1) == 0) goto LAB_710082df48;
  iVar16 = (int)param_2[1] + -1;
  *(int *)(param_2 + 1) = iVar16;
  if (iVar16 < 1) {
    iVar16 = FUN_7100830c7c(param_1,param_2);
    if (iVar16 != 0) goto LAB_71008307e0;
  }
  else {
    *param_2 = (long)((byte *)*param_2 + 1);
  }
  local_394 = local_394 + 1;
  goto LAB_710082df10;
LAB_710082df48:
  iVar16 = local_390;
  if (iVar12 == 3) {
    if (uVar38 - 1 < 0x164) {
      iVar36 = 0;
    }
    else {
      iVar36 = iVar36 + -0x164;
      uVar38 = 0x164;
    }
    uVar43 = uVar43 | 0xd80;
    bVar6 = true;
    bVar5 = true;
    bVar10 = true;
    iVar12 = 0;
    pbVar25 = local_168;
    do {
      pbVar39 = (byte *)*param_2;
      bVar29 = *pbVar39;
      if (bVar29 < 0x3a) {
        if (0x37 < bVar29) {
          iVar34 = (int)*(short *)(&UNK_71009d3ca0 + (long)iVar34 * 2);
          bVar11 = SBORROW4(iVar34,8);
          iVar16 = iVar34 + -8;
          bVar10 = iVar34 == 8;
          goto LAB_710082f910;
        }
        if (bVar29 != 0x30) {
          if (0x30 < bVar29) {
            iVar34 = (int)*(short *)(&UNK_71009d3ca0 + (long)iVar34 * 2);
            goto LAB_710082f914;
          }
          if (((bVar29 == 0x2b) || (bVar29 == 0x2d)) && (bVar10)) {
            uVar43 = uVar43 & 0xffffff7f;
            bVar10 = false;
            goto LAB_710082f944;
          }
          break;
        }
        if (!bVar6) goto LAB_710082f944;
        if (iVar34 == 0) {
          uVar43 = uVar43 | 0x200;
          iVar34 = 8;
        }
        if ((uVar43 >> 10 & 1) != 0) {
          uVar14 = 0xfffffa7f;
          bVar7 = 1;
          goto LAB_710082f8d8;
        }
        uVar43 = uVar43 & 0xfffffc7f;
        bVar5 = false;
        bVar10 = false;
        if (iVar36 != 0) {
          iVar36 = iVar36 + -1;
          uVar38 = uVar38 + 1;
        }
        iVar12 = iVar12 + 1;
      }
      else {
        if (0x66 < bVar29) {
          bVar11 = bVar29 == 0x78;
LAB_710082f8b8:
          if ((bVar11) && ((uVar43 & 0x600) == 0x200)) {
            uVar43 = uVar43 & 0xfffffdff | 0x500;
            bVar5 = true;
            iVar34 = 0x10;
            goto LAB_710082f944;
          }
          break;
        }
        if (bVar29 < 0x61) {
          if (0x46 < bVar29) {
            bVar11 = bVar29 == 0x58;
            goto LAB_710082f8b8;
          }
          if (bVar29 < 0x41) break;
        }
        bVar11 = SBORROW4(iVar34,10);
        iVar16 = iVar34 + -10;
        bVar10 = iVar34 == 10;
LAB_710082f910:
        if (bVar10 || iVar16 < 0 != bVar11) break;
LAB_710082f914:
        uVar14 = 0xfffff47f;
        bVar7 = 0;
LAB_710082f8d8:
        uVar43 = uVar43 & uVar14;
        bVar6 = (bool)(bVar6 & bVar7);
        bVar5 = false;
        bVar10 = false;
LAB_710082f944:
        *pbVar25 = bVar29;
        pbVar25 = pbVar25 + 1;
      }
      iVar16 = (int)param_2[1] + -1;
      *(int *)(param_2 + 1) = iVar16;
      if (iVar16 < 1) {
        iVar16 = FUN_7100830c7c(param_1);
        if (iVar16 != 0) break;
      }
      else {
        *param_2 = (long)(pbVar39 + 1);
      }
      uVar38 = uVar38 - 1;
    } while (uVar38 != 0);
    if (bVar5) {
      if (local_168 < pbVar25) {
        pbVar39 = pbVar25 + -1;
        pbVar25 = pbVar25 + -1;
        FUN_7100830b8c(param_1,*pbVar39,param_2);
      }
      if (pbVar25 == local_168) goto switchD_710082d858_caseD_26;
    }
    if ((uVar43 >> 4 & 1) != 0) goto LAB_710082fe90;
    *pbVar25 = 0;
    uVar26 = (*local_3e0)(param_1,local_168,0,iVar34);
    iVar36 = local_390;
    if ((uVar43 >> 5 & 1) == 0) {
      if ((uVar43 >> 3 & 1) == 0) {
        if ((uVar43 >> 2 & 1) == 0) {
          if ((uVar43 & 1) != 0) goto LAB_710082fbe0;
          if ((uVar43 >> 1 & 1) != 0) {
            if (local_3e0 == FUN_710080da60) {
              uVar26 = FUN_710081fa20();
            }
            else {
              uVar26 = FUN_71008087c0(param_1,local_168,0,iVar34);
            }
            if (bVar9) goto LAB_710082fcc8;
            if (iVar47 < iVar36) goto LAB_710082fd0c;
            plVar44 = (long *)*param_4;
            iVar13 = (int)param_4[3];
            if (iVar36 < 0x20) {
              if ((iVar13 < 0) && (*(int *)(param_4 + 3) = iVar13 + 8, iVar13 + 8 < 1)) {
                plVar44 = (long *)(param_4[1] + (long)iVar13);
              }
              else {
                *param_4 = (long)plVar44 + 0xfU & 0xfffffffffffffff8;
              }
              puVar19 = (undefined8 *)*plVar44;
              goto LAB_710082fd60;
            }
            if ((iVar13 < 0) && (*(int *)(param_4 + 3) = iVar13 + 8, iVar13 + 8 < 1)) {
              plVar44 = (long *)(param_4[1] + (long)iVar13);
            }
            else {
              *param_4 = (long)plVar44 + 0xfU & 0xfffffffffffffff8;
            }
            puVar19 = (undefined8 *)*plVar44;
            iVar47 = iVar47 + 1;
            goto LAB_710082fd9c;
          }
          if (bVar9) {
            if (iVar13 < local_390) {
              puVar20 = (undefined4 *)local_368[iVar13];
            }
            else {
              puVar20 = (undefined4 *)FUN_710082d628(iVar13,param_4,&local_390);
              uVar26 = extraout_x10_02;
            }
          }
          else {
            iVar36 = iVar47 + 1;
            if (iVar47 < local_390) {
              puVar20 = (undefined4 *)local_368[iVar13];
              iVar47 = iVar36;
            }
            else {
              plVar44 = (long *)*param_4;
              iVar47 = (int)param_4[3];
              if (local_390 < 0x20) {
                if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
                  plVar44 = (long *)(param_4[1] + (long)iVar47);
                }
                else {
                  *param_4 = (long)plVar44 + 0xfU & 0xfffffffffffffff8;
                }
                puVar20 = (undefined4 *)*plVar44;
                local_368[local_390] = (long)puVar20;
                local_390 = local_390 + 1;
                iVar47 = iVar36;
              }
              else {
                if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
                  plVar44 = (long *)(param_4[1] + (long)iVar47);
                }
                else {
                  *param_4 = (long)plVar44 + 0xfU & 0xfffffffffffffff8;
                }
                puVar20 = (undefined4 *)*plVar44;
                iVar47 = iVar36;
              }
            }
          }
          *puVar20 = (int)uVar26;
        }
        else {
          if (bVar9) {
            if (iVar13 < local_390) {
              puVar27 = (undefined2 *)local_368[iVar13];
            }
            else {
              puVar27 = (undefined2 *)FUN_710082d628(iVar13,param_4,&local_390);
              uVar26 = extraout_x10_00;
            }
          }
          else {
            iVar36 = iVar47 + 1;
            if (iVar47 < local_390) {
              puVar27 = (undefined2 *)local_368[iVar13];
              iVar47 = iVar36;
            }
            else {
              puVar19 = (undefined8 *)*param_4;
              iVar47 = (int)param_4[3];
              if (local_390 < 0x20) {
                if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
                  puVar19 = (undefined8 *)(param_4[1] + (long)iVar47);
                }
                else {
                  *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                }
                puVar27 = (undefined2 *)*puVar19;
                local_368[local_390] = (long)puVar27;
                local_390 = local_390 + 1;
                iVar47 = iVar36;
              }
              else {
                if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
                  puVar19 = (undefined8 *)(param_4[1] + (long)iVar47);
                }
                else {
                  *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                }
                puVar27 = (undefined2 *)*puVar19;
                iVar47 = iVar36;
              }
            }
          }
          *puVar27 = (short)uVar26;
        }
      }
      else {
        if (bVar9) {
          iVar36 = iVar47;
          if (iVar13 < local_390) {
            puVar41 = (undefined1 *)local_368[iVar13];
          }
          else {
            puVar41 = (undefined1 *)FUN_710082d628(iVar13,param_4,&local_390);
            uVar26 = extraout_x10;
          }
        }
        else {
          iVar36 = iVar47 + 1;
          if (iVar47 < local_390) {
            puVar41 = (undefined1 *)local_368[iVar13];
          }
          else {
            puVar19 = (undefined8 *)*param_4;
            iVar47 = (int)param_4[3];
            if (local_390 < 0x20) {
              if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
                puVar19 = (undefined8 *)(param_4[1] + (long)iVar47);
              }
              else {
                *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
              }
              puVar41 = (undefined1 *)*puVar19;
              local_368[local_390] = (long)puVar41;
              local_390 = local_390 + 1;
            }
            else {
              if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
                puVar19 = (undefined8 *)(param_4[1] + (long)iVar47);
              }
              else {
                *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
              }
              puVar41 = (undefined1 *)*puVar19;
            }
          }
        }
        *puVar41 = (char)uVar26;
        iVar47 = iVar36;
      }
    }
    else {
LAB_710082fbe0:
      if (bVar9) {
LAB_710082fcc8:
        if (iVar13 < iVar36) {
          puVar19 = (undefined8 *)local_368[iVar13];
        }
        else {
          puVar19 = (undefined8 *)FUN_710082d628(iVar13,param_4,&local_390);
          uVar26 = extraout_x10_01;
        }
      }
      else if (iVar47 < local_390) {
LAB_710082fd0c:
        puVar19 = (undefined8 *)local_368[iVar13];
        iVar47 = iVar47 + 1;
      }
      else {
        plVar44 = (long *)*param_4;
        iVar13 = (int)param_4[3];
        if (local_390 < 0x20) {
          if ((iVar13 < 0) && (*(int *)(param_4 + 3) = iVar13 + 8, iVar13 + 8 < 1)) {
            plVar44 = (long *)(param_4[1] + (long)iVar13);
          }
          else {
            *param_4 = (long)plVar44 + 0xfU & 0xfffffffffffffff8;
          }
          puVar19 = (undefined8 *)*plVar44;
LAB_710082fd60:
          local_390 = iVar36 + 1;
          local_368[iVar36] = (long)puVar19;
          iVar47 = iVar47 + 1;
        }
        else {
          if ((iVar13 < 0) && (*(int *)(param_4 + 3) = iVar13 + 8, iVar13 + 8 < 1)) {
            plVar44 = (long *)(param_4[1] + (long)iVar13);
          }
          else {
            *param_4 = (long)plVar44 + 0xfU & 0xfffffffffffffff8;
          }
          puVar19 = (undefined8 *)*plVar44;
          iVar47 = iVar47 + 1;
        }
      }
LAB_710082fd9c:
      *puVar19 = uVar26;
    }
    local_398 = local_398 + 1;
LAB_710082fe90:
    local_394 = iVar12 + local_394 + ((int)pbVar25 - (int)local_168);
    goto LAB_710082d720;
  }
  if (iVar12 == 4) {
    plVar44 = (long *)FUN_710080fb60(param_1);
    lVar17 = *plVar44;
    if (uVar38 - 1 < 0x164) {
      iVar36 = 0;
    }
    else {
      iVar36 = iVar36 + -0x164;
      uVar38 = 0x164;
    }
    uVar43 = uVar43 | 0x780;
    iVar12 = 0;
    lVar22 = 0;
    local_408 = (byte *)0x0;
    local_400 = 0;
    local_3e8 = 0;
    uVar14 = 0;
    pbVar25 = local_168;
LAB_710082ff34:
    bVar29 = *(byte *)*param_2;
    pbVar39 = pbVar25;
    switch(bVar29) {
    case 0x2b:
    case 0x2d:
      if ((uVar43 >> 7 & 1) == 0) goto LAB_71008302bc;
      uVar43 = uVar43 & 0xffffff7f;
      break;
    default:
      if ((uVar43 >> 9 & 1) != 0) {
        lVar35 = 1;
        do {
          iVar16 = (int)lVar35;
          if (*(byte *)(lVar17 + -1 + lVar35) != bVar29) {
            iVar16 = iVar16 + -1;
            if (iVar16 != 0) {
LAB_71008301cc:
              puVar41 = (undefined1 *)(lVar17 + iVar16);
              for (iVar36 = iVar16; iVar36 != 0; iVar36 = iVar36 + -1) {
                puVar41 = puVar41 + -1;
                FUN_7100830b8c(param_1,*puVar41,param_2);
              }
              local_394 = local_394 - iVar16;
            }
            break;
          }
          if (*(char *)(lVar17 + lVar35) == '\0') goto code_r0x007100830120;
          local_394 = local_394 + 1;
          iVar15 = (int)param_2[1] + -1;
          *(int *)(param_2 + 1) = iVar15;
          if (iVar15 < 1) {
            iVar15 = FUN_7100830c7c(param_1,param_2);
            if (iVar15 != 0) goto LAB_71008301cc;
          }
          else {
            *param_2 = *param_2 + 1;
          }
          lVar35 = lVar35 + 1;
          bVar29 = *(byte *)*param_2;
        } while( true );
      }
      goto LAB_71008302bc;
    case 0x30:
      if ((uVar43 >> 8 & 1) == 0) goto switchD_710082ff58_caseD_31;
      uVar43 = uVar43 & 0xffffff7f;
      lVar22 = lVar22 + 1;
      if (iVar36 != 0) {
        iVar36 = iVar36 + -1;
        uVar38 = uVar38 + 1;
      }
      goto LAB_7100830254;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      goto switchD_710082ff58_caseD_31;
    case 0x41:
    case 0x61:
      if ((uVar43 >> 0xb != 0) && (iVar12 + uVar14 == 0)) goto LAB_71008300b0;
      if (iVar12 == 1) {
        iVar12 = 2;
        break;
      }
      goto LAB_71008302bc;
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x62:
    case 99:
    case 100:
      if (uVar43 >> 0xb != 0) goto switchD_710082ff58_caseD_31;
      goto LAB_71008302bc;
    case 0x45:
    case 0x65:
      if (uVar43 >> 0xb == 0) goto LAB_71008300c0;
switchD_710082ff58_caseD_31:
      if (iVar12 + uVar14 != 0) goto LAB_71008302bc;
LAB_71008300b0:
      uVar43 = uVar43 & 0xfffffe7f;
      uVar14 = 0;
      iVar12 = 0;
      break;
    case 0x46:
    case 0x66:
      if ((uVar43 >> 0xb != 0) && (iVar12 + uVar14 == 0)) goto LAB_71008300b0;
      if (uVar14 != 2) goto LAB_71008302bc;
      uVar14 = 3;
      break;
    case 0x49:
    case 0x69:
      if (uVar14 == 0 && lVar22 == 0) {
        if ((uVar43 & 0x700) == 0x700) {
          uVar43 = uVar43 & 0xfffff87f;
          uVar14 = 1;
          goto LAB_710082ffec;
        }
        uVar14 = 0;
LAB_71008308a0:
        lVar22 = 0;
        goto LAB_71008302c4;
      }
      bVar10 = true;
      if (uVar14 != 3) {
        bVar10 = uVar14 == 5;
      }
LAB_7100830050:
      if (!bVar10) goto LAB_71008302bc;
      uVar14 = uVar14 + 1 & 0xff;
      break;
    case 0x4e:
    case 0x6e:
      if (iVar12 == 0 && lVar22 == 0) {
        if ((uVar43 & 0x700) != 0x700) goto LAB_710082fffc;
        uVar43 = uVar43 & 0xfffff87f;
        iVar12 = 1;
        goto LAB_710082ffec;
      }
      if (iVar12 != 2) {
LAB_710082fffc:
        bVar10 = uVar14 == 1 || uVar14 == 4;
        goto LAB_7100830050;
      }
      iVar12 = 3;
      break;
    case 0x50:
    case 0x70:
      if (uVar43 >> 0xb == 0) goto LAB_71008302bc;
LAB_71008300c0:
      if ((uVar43 & 0x500) != 0x400) {
        if ((uVar43 >> 10 & 1) == 0) goto LAB_71008302bc;
        if (lVar22 == 0) goto LAB_71008308a0;
      }
      if ((uVar43 >> 9 & 1) == 0) {
        local_400 = lVar22 - local_3e8;
        local_408 = pbVar25;
      }
      uVar43 = uVar43 & 0xfffff07f | 0x180;
      goto LAB_710082ffec;
    case 0x54:
    case 0x74:
      if (uVar14 != 6) goto LAB_71008302bc;
      uVar14 = 7;
      break;
    case 0x58:
    case 0x78:
      if (((uVar43 & 0x980) != 0x100) || (lVar22 != 1)) goto LAB_71008302bc;
      uVar38 = uVar38 - 1;
      uVar43 = uVar43 & 0xfffffeff | 0x800;
      *pbVar25 = 0x30;
      pbVar25 = pbVar25 + 1;
LAB_710082ffec:
      lVar22 = 0;
      pbVar39 = pbVar25;
      break;
    case 0x59:
    case 0x79:
      if (uVar14 != 7) goto LAB_71008302bc;
      uVar14 = 8;
    }
    pbVar25 = pbVar39 + 1;
    *pbVar39 = bVar29;
    goto LAB_7100830254;
  }
  uVar1 = uVar43 & 0x10;
  uVar14 = uVar43 & 1;
  if (iVar12 == 1) {
    if (uVar38 == 0) {
      uVar38 = 0xffffffffffffffff;
    }
    if (uVar14 != 0) {
      if (uVar1 == 0) {
        if ((uVar43 >> 7 & 1) == 0) {
          if (bVar9) {
            if (local_390 <= iVar13) {
              puVar23 = (uint *)FUN_710082d628(iVar13,param_4,&local_390);
              uVar46 = 0;
              puVar24 = (uint *)0x0;
              plVar44 = (long *)0x0;
              goto LAB_710082e94c;
            }
            puVar23 = (uint *)local_368[iVar13];
          }
          else {
            iVar12 = iVar47 + 1;
            if (iVar47 < local_390) {
              puVar23 = (uint *)local_368[iVar13];
              iVar47 = iVar12;
            }
            else {
              puVar19 = (undefined8 *)*param_4;
              iVar47 = (int)param_4[3];
              if (local_390 < 0x20) {
                if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
                  puVar19 = (undefined8 *)(param_4[1] + (long)iVar47);
                }
                else {
                  *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                }
                puVar23 = (uint *)*puVar19;
                local_368[local_390] = (long)puVar23;
                iVar47 = iVar12;
                local_390 = local_390 + 1;
              }
              else {
                if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
                  puVar19 = (undefined8 *)(param_4[1] + (long)iVar47);
                }
                else {
                  *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                }
                puVar23 = (uint *)*puVar19;
                iVar47 = iVar12;
              }
            }
          }
          uVar46 = 0;
          puVar24 = (uint *)0x0;
          plVar44 = (long *)0x0;
        }
        else {
          if (bVar9) {
            if (iVar13 < local_390) {
              plVar44 = (long *)local_368[iVar13];
            }
            else {
              plVar44 = (long *)FUN_710082d628(iVar13,param_4,&local_390);
            }
          }
          else {
            iVar12 = iVar47 + 1;
            if (iVar47 < local_390) {
              plVar44 = (long *)local_368[iVar13];
              iVar47 = iVar12;
            }
            else {
              puVar19 = (undefined8 *)*param_4;
              iVar47 = (int)param_4[3];
              if (local_390 < 0x20) {
                local_390 = local_390 + 1;
                if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
                  puVar19 = (undefined8 *)(param_4[1] + (long)iVar47);
                }
                else {
                  *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                }
                plVar44 = (long *)*puVar19;
                local_368[iVar16] = (long)plVar44;
                iVar47 = iVar12;
              }
              else {
                if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
                  puVar19 = (undefined8 *)(param_4[1] + (long)iVar47);
                }
                else {
                  *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                }
                plVar44 = (long *)*puVar19;
                iVar47 = iVar12;
              }
            }
          }
          if (plVar44 == (long *)0x0) goto switchD_710082d858_caseD_26;
          puVar24 = (uint *)FUN_710081c1c0(0x80);
          if (puVar24 == (uint *)0x0) goto LAB_710082f0dc;
          uVar3 = *(ushort *)((long)plVar42 + 10);
          uVar4 = *(ushort *)(plVar42 + 1);
          *plVar44 = (long)puVar24;
          if (uVar4 <= uVar3) {
            if (0xfff6 < uVar4) {
LAB_710082f0dc:
              local_398 = -1;
              goto switchD_710082d858_caseD_26;
            }
            lVar17 = FUN_71008141e0(*plVar42,(ulong)(uVar4 + 8) << 3);
            if (lVar17 == 0) goto LAB_710082f0dc;
            *plVar42 = lVar17;
            *(short *)(plVar42 + 1) = (short)(uVar4 + 8);
          }
          uVar46 = 0x20;
          *(ushort *)((long)plVar42 + 10) = uVar3 + 1;
          *(long **)(*plVar42 + (ulong)uVar3 * 8) = plVar44;
          puVar23 = puVar24;
        }
      }
      else {
        uVar46 = 0;
        puVar24 = (uint *)0x0;
        plVar44 = (long *)0x0;
      }
LAB_710082e94c:
      bVar9 = plVar44 != (long *)0x0;
      uVar43 = 0;
      local_3f8 = &DAT_7100af4978;
LAB_710082e988:
      uVar14 = FUN_7100809520();
      if (uVar14 == uVar43) goto LAB_71008307e0;
      uVar14 = uVar43 + 1;
      bVar29 = *(byte *)*param_2;
      *param_2 = (long)((byte *)*param_2 + 1);
      local_168[(int)uVar43] = bVar29;
      *(int *)(param_2 + 1) = (int)param_2[1] + -1;
      if ((local_3d8 != 3) || (local_380[0] != 4)) {
        FUN_7100808340(local_380,0,8);
      }
      local_3d8 = FUN_7100823160(param_1,puVar23,local_168,(long)(int)uVar14,local_380);
      if (local_3d8 == -1) goto LAB_71008307e0;
      if (local_3d8 == 0) {
        *puVar23 = 0;
LAB_710082ea14:
        uVar33 = *puVar23;
        if (uVar33 != 0xffffffff) {
          FUN_7100808340(auStack_378,0,8);
          lVar17 = FUN_7100834b00();
          puVar2 = *(undefined **)(lVar17 + 0x40);
          if (*(undefined **)(lVar17 + 0x40) == (undefined *)0x0) {
            puVar2 = local_3f8;
          }
          iVar12 = (**(code **)(puVar2 + 0xe0))(param_1,local_370,uVar33,auStack_378);
          uVar33 = local_370[0] & 0xff;
          if (iVar12 != 1) {
            uVar33 = 0;
          }
        }
        if (local_268[(int)uVar33] != '\0') {
          local_394 = local_394 + uVar14;
          if ((local_3d8 != 3) || (local_380[0] != 4)) {
            uVar38 = uVar38 - 1;
          }
          if (uVar1 == 0) {
            puVar23 = puVar23 + 1;
            lVar17 = (long)puVar23 - (long)puVar24;
            if (bVar9 && uVar46 <= (ulong)(lVar17 >> 2)) {
              puVar24 = (uint *)FUN_71008141e0(puVar24,uVar46 << 3);
              if (puVar24 == (uint *)0x0) goto LAB_710082f0dc;
              puVar23 = (uint *)((long)puVar24 + lVar17);
              uVar46 = uVar46 << 1;
              *plVar44 = (long)puVar24;
            }
          }
          uVar14 = 0;
          goto LAB_710082eb38;
        }
        for (uVar38 = (ulong)uVar43; (int)uVar38 != -1; uVar38 = uVar38 - 1) {
          FUN_7100830b8c(param_1,local_168[uVar38],param_2);
        }
      }
      else {
        if (local_3d8 != -2) goto LAB_710082ea14;
LAB_710082eb38:
        uVar43 = uVar14;
        if ((0 < (int)param_2[1]) || (iVar12 = FUN_7100830c7c(param_1,param_2), iVar12 == 0))
        goto LAB_710082eb70;
        if (uVar43 != 0) goto LAB_71008307e0;
      }
      goto LAB_710082eb88;
    }
    if (uVar1 != 0) {
      while (local_268[*(byte *)*param_2] != '\0') {
        *param_2 = (long)((byte *)*param_2 + 1);
        uVar14 = uVar14 + 1;
        iVar12 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar12;
        uVar38 = uVar38 - 1;
        if ((uVar38 == 0) ||
           ((iVar12 < 1 && (iVar12 = FUN_7100830c7c(param_1,param_2), iVar12 != 0))))
        goto LAB_710082ec68;
      }
      if (uVar14 == 0) goto switchD_710082d858_caseD_26;
LAB_710082ec68:
      local_394 = local_394 + uVar14;
      goto LAB_710082d720;
    }
    if ((uVar43 >> 7 & 1) == 0) {
      if (bVar9) {
        if (local_390 <= iVar13) {
          pbVar25 = (byte *)FUN_710082d628(iVar13,param_4,&local_390);
          uVar46 = 0;
          plVar44 = (long *)0x0;
          goto LAB_710082eec0;
        }
        pbVar25 = (byte *)local_368[iVar13];
      }
      else {
        iVar12 = iVar47 + 1;
        if (iVar47 < local_390) {
          pbVar25 = (byte *)local_368[iVar13];
          iVar47 = iVar12;
        }
        else {
          puVar19 = (undefined8 *)*param_4;
          iVar47 = (int)param_4[3];
          if (local_390 < 0x20) {
            local_390 = local_390 + 1;
            if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
              puVar19 = (undefined8 *)(param_4[1] + (long)iVar47);
            }
            else {
              *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
            }
            pbVar25 = (byte *)*puVar19;
            local_368[iVar16] = (long)pbVar25;
            iVar47 = iVar12;
          }
          else {
            if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
              puVar19 = (undefined8 *)(param_4[1] + (long)iVar47);
            }
            else {
              *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
            }
            pbVar25 = (byte *)*puVar19;
            iVar47 = iVar12;
          }
        }
      }
      uVar46 = 0;
      plVar44 = (long *)0x0;
    }
    else {
      if (bVar9) {
        if (iVar13 < local_390) {
          plVar44 = (long *)local_368[iVar13];
        }
        else {
          plVar44 = (long *)FUN_710082d628(iVar13,param_4,&local_390);
        }
      }
      else {
        iVar12 = iVar47 + 1;
        if (iVar47 < local_390) {
          plVar44 = (long *)local_368[iVar13];
          iVar47 = iVar12;
        }
        else {
          puVar19 = (undefined8 *)*param_4;
          iVar47 = (int)param_4[3];
          if (local_390 < 0x20) {
            local_390 = local_390 + 1;
            if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
              puVar19 = (undefined8 *)(param_4[1] + (long)iVar47);
            }
            else {
              *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
            }
            plVar44 = (long *)*puVar19;
            local_368[iVar16] = (long)plVar44;
            iVar47 = iVar12;
          }
          else {
            if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
              puVar19 = (undefined8 *)(param_4[1] + (long)iVar47);
            }
            else {
              *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
            }
            plVar44 = (long *)*puVar19;
            iVar47 = iVar12;
          }
        }
      }
      if (plVar44 == (long *)0x0) goto switchD_710082d858_caseD_26;
      pbVar25 = (byte *)FUN_710081c1c0(0x20);
      if (pbVar25 == (byte *)0x0) goto LAB_710083084c;
      uVar3 = *(ushort *)((long)plVar42 + 10);
      uVar4 = *(ushort *)(plVar42 + 1);
      *plVar44 = (long)pbVar25;
      if (uVar4 <= uVar3) {
        if (0xfff6 < uVar4) goto LAB_7100830810;
        lVar17 = FUN_71008141e0(*plVar42,(ulong)(uVar4 + 8) << 3);
        if (lVar17 == 0) goto LAB_7100830810;
        *plVar42 = lVar17;
        *(short *)(plVar42 + 1) = (short)(uVar4 + 8);
      }
      uVar46 = 0x20;
      *(ushort *)((long)plVar42 + 10) = uVar3 + 1;
      *(long **)(*plVar42 + (ulong)uVar3 * 8) = plVar44;
    }
LAB_710082eec0:
    pbVar39 = pbVar25;
    do {
      pbVar30 = (byte *)*param_2;
      pbVar45 = pbVar39;
      if (local_268[*pbVar30] == '\0') goto LAB_710082ef78;
      *(int *)(param_2 + 1) = (int)param_2[1] + -1;
      *param_2 = (long)(pbVar30 + 1);
      pbVar45 = pbVar39 + 1;
      *pbVar39 = *pbVar30;
      uVar32 = (long)pbVar45 - (long)pbVar25;
      if (plVar44 != (long *)0x0 && uVar46 <= uVar32) {
        uVar46 = uVar46 << 1;
        pbVar25 = (byte *)FUN_71008141e0(pbVar25,uVar46);
        if (pbVar25 == (byte *)0x0) goto LAB_710083084c;
        *plVar44 = (long)pbVar25;
        pbVar45 = pbVar25 + uVar32;
      }
      uVar38 = uVar38 - 1;
      if (uVar38 == 0) goto LAB_710082ef78;
      pbVar39 = pbVar45;
    } while ((0 < (int)param_2[1]) || (iVar12 = FUN_7100830c7c(param_1,param_2), iVar12 == 0));
    if (pbVar45 != pbVar25) {
LAB_710082ef78:
      iVar12 = (int)pbVar45 - (int)pbVar25;
      if ((int)pbVar45 == (int)pbVar25) goto switchD_710082d858_caseD_26;
      *pbVar45 = 0;
      if ((plVar44 != (long *)0x0 && (ulong)(long)(iVar12 + 1) < uVar46) &&
         (lVar17 = FUN_71008141e0(*plVar44), lVar17 != 0)) {
        *plVar44 = lVar17;
      }
      local_394 = local_394 + iVar12;
      goto LAB_71008307c4;
    }
  }
  else if (iVar12 == 2) {
    if (uVar38 == 0) {
      uVar38 = 0xffffffffffffffff;
    }
    if (uVar14 == 0) {
      if (uVar1 != 0) {
        while (((byte)(&DAT_71009d32f1)[*(byte *)*param_2] >> 3 & 1) == 0) {
          *param_2 = (long)((byte *)*param_2 + 1);
          uVar14 = uVar14 + 1;
          iVar12 = (int)param_2[1] + -1;
          *(int *)(param_2 + 1) = iVar12;
          uVar38 = uVar38 - 1;
          if ((uVar38 == 0) ||
             ((iVar12 < 1 && (iVar12 = FUN_7100830c7c(param_1,param_2), iVar12 != 0)))) break;
        }
        goto LAB_710082ec68;
      }
      if ((uVar43 >> 7 & 1) == 0) {
        if (bVar9) {
          if (local_390 <= iVar13) {
            pbVar25 = (byte *)FUN_710082d628(iVar13,param_4,&local_390);
            uVar46 = 0;
            plVar44 = (long *)0x0;
            goto LAB_710082f708;
          }
          pbVar25 = (byte *)local_368[iVar13];
        }
        else {
          iVar12 = iVar47 + 1;
          if (iVar47 < local_390) {
            pbVar25 = (byte *)local_368[iVar13];
            iVar47 = iVar12;
          }
          else {
            puVar19 = (undefined8 *)*param_4;
            iVar47 = (int)param_4[3];
            if (local_390 < 0x20) {
              if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
                puVar19 = (undefined8 *)(param_4[1] + (long)iVar47);
              }
              else {
                *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
              }
              pbVar25 = (byte *)*puVar19;
              local_368[local_390] = (long)pbVar25;
              local_390 = local_390 + 1;
              iVar47 = iVar12;
            }
            else {
              if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
                puVar19 = (undefined8 *)(param_4[1] + (long)iVar47);
              }
              else {
                *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
              }
              pbVar25 = (byte *)*puVar19;
              iVar47 = iVar12;
            }
          }
        }
        uVar46 = 0;
        plVar44 = (long *)0x0;
      }
      else {
        if (bVar9) {
          if (iVar13 < local_390) {
            plVar44 = (long *)local_368[iVar13];
          }
          else {
            plVar44 = (long *)FUN_710082d628(iVar13,param_4,&local_390);
          }
        }
        else {
          iVar12 = iVar47 + 1;
          if (iVar47 < local_390) {
            plVar44 = (long *)local_368[iVar13];
            iVar47 = iVar12;
          }
          else {
            puVar19 = (undefined8 *)*param_4;
            iVar47 = (int)param_4[3];
            if (local_390 < 0x20) {
              local_390 = local_390 + 1;
              if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
                puVar19 = (undefined8 *)(param_4[1] + (long)iVar47);
              }
              else {
                *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
              }
              plVar44 = (long *)*puVar19;
              local_368[iVar16] = (long)plVar44;
              iVar47 = iVar12;
            }
            else {
              if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
                puVar19 = (undefined8 *)(param_4[1] + (long)iVar47);
              }
              else {
                *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
              }
              plVar44 = (long *)*puVar19;
              iVar47 = iVar12;
            }
          }
        }
        if (plVar44 == (long *)0x0) goto switchD_710082d858_caseD_26;
        pbVar25 = (byte *)FUN_710081c1c0(0x20);
        if (pbVar25 == (byte *)0x0) goto LAB_710083084c;
        uVar3 = *(ushort *)((long)plVar42 + 10);
        uVar4 = *(ushort *)(plVar42 + 1);
        *plVar44 = (long)pbVar25;
        if (uVar4 <= uVar3) {
          if (0xfff6 < uVar4) goto LAB_7100830810;
          lVar17 = FUN_71008141e0(*plVar42,(ulong)(uVar4 + 8) << 3);
          if (lVar17 == 0) goto LAB_7100830810;
          *plVar42 = lVar17;
          *(short *)(plVar42 + 1) = (short)(uVar4 + 8);
        }
        *(ushort *)((long)plVar42 + 10) = uVar3 + 1;
        *(long **)(*plVar42 + (ulong)uVar3 * 8) = plVar44;
        uVar46 = 0x20;
      }
LAB_710082f708:
      pbVar39 = pbVar25;
      while (pbVar30 = (byte *)*param_2, pbVar45 = pbVar39,
            ((byte)(&DAT_71009d32f1)[*pbVar30] >> 3 & 1) == 0) {
        *(int *)(param_2 + 1) = (int)param_2[1] + -1;
        *param_2 = (long)(pbVar30 + 1);
        pbVar45 = pbVar39 + 1;
        *pbVar39 = *pbVar30;
        uVar32 = (long)pbVar45 - (long)pbVar25;
        if (plVar44 != (long *)0x0 && uVar46 <= uVar32) {
          uVar46 = uVar46 << 1;
          pbVar25 = (byte *)FUN_71008141e0(pbVar25,uVar46);
          if (pbVar25 == (byte *)0x0) goto LAB_710083084c;
          *plVar44 = (long)pbVar25;
          pbVar45 = pbVar25 + uVar32;
        }
        uVar38 = uVar38 - 1;
        if ((uVar38 == 0) ||
           ((pbVar39 = pbVar45, (int)param_2[1] < 1 &&
            (iVar12 = FUN_7100830c7c(param_1,param_2), iVar12 != 0)))) break;
      }
      *pbVar45 = 0;
      if ((plVar44 != (long *)0x0 && ((long)pbVar45 - (long)pbVar25) + 1U < uVar46) &&
         (lVar17 = FUN_71008141e0(*plVar44), lVar17 != 0)) {
        *plVar44 = lVar17;
      }
      iVar12 = (int)((long)pbVar45 - (long)pbVar25);
      goto LAB_710082f7f8;
    }
    if (uVar1 == 0) {
      if ((uVar43 >> 7 & 1) == 0) {
        if (bVar9) {
          if (local_390 <= iVar13) {
            puVar23 = (uint *)FUN_710082d628(iVar13,param_4,&local_390);
            uVar46 = 0;
            puVar24 = (uint *)0x0;
            plVar44 = (long *)0x0;
            goto LAB_710082f254;
          }
          puVar23 = (uint *)local_368[iVar13];
        }
        else {
          iVar12 = iVar47 + 1;
          if (iVar47 < local_390) {
            puVar23 = (uint *)local_368[iVar13];
            iVar47 = iVar12;
          }
          else {
            puVar19 = (undefined8 *)*param_4;
            iVar47 = (int)param_4[3];
            if (local_390 < 0x20) {
              if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
                puVar19 = (undefined8 *)(param_4[1] + (long)iVar47);
              }
              else {
                *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
              }
              puVar23 = (uint *)*puVar19;
              local_368[local_390] = (long)puVar23;
              iVar47 = iVar12;
              local_390 = local_390 + 1;
            }
            else {
              if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
                puVar19 = (undefined8 *)(param_4[1] + (long)iVar47);
              }
              else {
                *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
              }
              puVar23 = (uint *)*puVar19;
              iVar47 = iVar12;
            }
          }
        }
        uVar46 = 0;
        puVar24 = (uint *)0x0;
        plVar44 = (long *)0x0;
      }
      else {
        if (bVar9) {
          if (iVar13 < local_390) {
            plVar44 = (long *)local_368[iVar13];
          }
          else {
            plVar44 = (long *)FUN_710082d628(iVar13,param_4,&local_390);
          }
        }
        else {
          iVar12 = iVar47 + 1;
          if (iVar47 < local_390) {
            plVar44 = (long *)local_368[iVar13];
            iVar47 = iVar12;
          }
          else {
            puVar19 = (undefined8 *)*param_4;
            iVar47 = (int)param_4[3];
            if (local_390 < 0x20) {
              local_390 = local_390 + 1;
              if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
                puVar19 = (undefined8 *)(param_4[1] + (long)iVar47);
              }
              else {
                *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
              }
              plVar44 = (long *)*puVar19;
              local_368[iVar16] = (long)plVar44;
              iVar47 = iVar12;
            }
            else {
              if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
                puVar19 = (undefined8 *)(param_4[1] + (long)iVar47);
              }
              else {
                *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
              }
              plVar44 = (long *)*puVar19;
              iVar47 = iVar12;
            }
          }
        }
        if (plVar44 == (long *)0x0) goto switchD_710082d858_caseD_26;
        puVar23 = (uint *)FUN_710081c1c0(0x80);
        if (puVar23 == (uint *)0x0) goto LAB_710082f0dc;
        uVar3 = *(ushort *)((long)plVar42 + 10);
        uVar4 = *(ushort *)(plVar42 + 1);
        *plVar44 = (long)puVar23;
        if (uVar4 <= uVar3) {
          if (0xfff6 < uVar4) goto LAB_710082f0dc;
          lVar17 = FUN_71008141e0(*plVar42,(ulong)(uVar4 + 8) << 3);
          if (lVar17 == 0) goto LAB_710082f0dc;
          *(short *)(plVar42 + 1) = (short)(uVar4 + 8);
          *plVar42 = lVar17;
        }
        uVar46 = 0x20;
        *(ushort *)((long)plVar42 + 10) = uVar3 + 1;
        *(long **)(*plVar42 + (ulong)uVar3 * 8) = plVar44;
        puVar24 = puVar23;
      }
    }
    else {
      uVar46 = 0;
      puVar24 = (uint *)0x0;
      plVar44 = (long *)0x0;
    }
LAB_710082f254:
    uVar32 = 0;
    do {
      do {
        if ((((byte)(&DAT_71009d32f1)[*(byte *)*param_2] >> 3 & 1) != 0) || (uVar38 == 0))
        goto LAB_710082f458;
        iVar12 = FUN_7100809520();
        iVar13 = (int)uVar32;
        if (iVar12 == iVar13) goto LAB_71008307e0;
        pbVar25 = (byte *)*param_2;
        uVar43 = iVar13 + 1;
        local_168[iVar13] = *pbVar25;
        *param_2 = (long)(pbVar25 + 1);
        *(int *)(param_2 + 1) = (int)param_2[1] + -1;
        if ((local_3d8 != 3) || (local_370[0] != 4)) {
          FUN_7100808340(local_370,0,8);
        }
        local_3d8 = FUN_7100823160(param_1,puVar23,local_168,(long)(int)uVar43,local_370);
        if (local_3d8 == -1) goto LAB_71008307e0;
        if (local_3d8 == 0) {
          *puVar23 = 0;
LAB_710082f32c:
          uVar14 = FUN_7100828e40(*puVar23);
          uVar31 = (ulong)uVar14;
          if (uVar14 != 0) goto LAB_710082f354;
          local_394 = local_394 + uVar43;
          if ((local_3d8 != 3) || (local_370[0] != 4)) {
            uVar38 = uVar38 - 1;
          }
          if (uVar1 == 0) {
            puVar23 = puVar23 + 1;
            lVar17 = (long)puVar23 - (long)puVar24;
            if (plVar44 != (long *)0x0 && uVar46 <= (ulong)(lVar17 >> 2)) {
              puVar24 = (uint *)FUN_71008141e0(puVar24,uVar46 << 3);
              if (puVar24 == (uint *)0x0) goto LAB_710082f0dc;
              puVar23 = (uint *)((long)puVar24 + lVar17);
              uVar46 = uVar46 << 1;
              *plVar44 = (long)puVar24;
            }
            uVar31 = 0;
          }
        }
        else {
          if (local_3d8 != -2) goto LAB_710082f32c;
          uVar31 = (ulong)uVar43;
        }
        uVar32 = uVar31;
      } while (0 < (int)param_2[1]);
      iVar12 = FUN_7100830c7c(param_1,param_2);
    } while (iVar12 == 0);
    if ((int)uVar31 == 0) {
LAB_710082f458:
      if (uVar1 == 0) {
        lVar17 = (long)puVar23 - (long)puVar24;
        *puVar23 = 0;
        uVar38 = (lVar17 >> 2) + 1;
        bVar9 = false;
        bVar10 = false;
        if (plVar44 != (long *)0x0) {
          bVar10 = uVar38 <= uVar46;
          bVar9 = uVar46 == uVar38;
        }
LAB_710082f474:
        if ((bVar10 && !bVar9) && (lVar17 = FUN_71008141e0(*plVar44,lVar17 + 4), lVar17 != 0)) {
          *plVar44 = lVar17;
        }
        local_398 = local_398 + 1;
      }
      goto LAB_710082d720;
    }
  }
  else {
    if (uVar38 == 0) {
      uVar38 = 1;
    }
    if (uVar14 != 0) {
      if (uVar1 == 0) {
        if ((uVar43 >> 7 & 1) == 0) {
          if (bVar9) {
            if (local_390 <= iVar13) {
              puVar20 = (undefined4 *)FUN_710082d628(iVar13,param_4,&local_390);
              uVar46 = 0;
              puVar21 = (undefined4 *)0x0;
              plVar44 = (long *)0x0;
              goto LAB_710082e1ec;
            }
            puVar20 = (undefined4 *)local_368[iVar13];
          }
          else {
            iVar12 = iVar47 + 1;
            if (iVar47 < local_390) {
              puVar20 = (undefined4 *)local_368[iVar13];
              iVar47 = iVar12;
            }
            else {
              puVar19 = (undefined8 *)*param_4;
              iVar47 = (int)param_4[3];
              if (local_390 < 0x20) {
                if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
                  puVar19 = (undefined8 *)(param_4[1] + (long)iVar47);
                }
                else {
                  *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                }
                puVar20 = (undefined4 *)*puVar19;
                local_368[local_390] = (long)puVar20;
                iVar47 = iVar12;
                local_390 = local_390 + 1;
              }
              else {
                if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
                  puVar19 = (undefined8 *)(param_4[1] + (long)iVar47);
                }
                else {
                  *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                }
                puVar20 = (undefined4 *)*puVar19;
                iVar47 = iVar12;
              }
            }
          }
          uVar46 = 0;
          puVar21 = (undefined4 *)0x0;
          plVar44 = (long *)0x0;
        }
        else {
          if (bVar9) {
            if (iVar13 < local_390) {
              plVar44 = (long *)local_368[iVar13];
            }
            else {
              plVar44 = (long *)FUN_710082d628(iVar13,param_4,&local_390);
            }
          }
          else {
            iVar12 = iVar47 + 1;
            if (iVar47 < local_390) {
              plVar44 = (long *)local_368[iVar13];
              iVar47 = iVar12;
            }
            else {
              puVar19 = (undefined8 *)*param_4;
              iVar47 = (int)param_4[3];
              if (local_390 < 0x20) {
                local_390 = local_390 + 1;
                if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
                  puVar19 = (undefined8 *)(param_4[1] + (long)iVar47);
                }
                else {
                  *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                }
                plVar44 = (long *)*puVar19;
                local_368[iVar16] = (long)plVar44;
                iVar47 = iVar12;
              }
              else {
                if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
                  puVar19 = (undefined8 *)(param_4[1] + (long)iVar47);
                }
                else {
                  *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                }
                plVar44 = (long *)*puVar19;
                iVar47 = iVar12;
              }
            }
          }
          if (plVar44 == (long *)0x0) goto switchD_710082d858_caseD_26;
          puVar20 = (undefined4 *)FUN_710081c1c0(0x80);
          if (puVar20 == (undefined4 *)0x0) goto LAB_710082f0dc;
          uVar3 = *(ushort *)((long)plVar42 + 10);
          uVar4 = *(ushort *)(plVar42 + 1);
          *plVar44 = (long)puVar20;
          if (uVar4 <= uVar3) {
            if (0xfff6 < uVar4) goto LAB_710082f0dc;
            lVar17 = FUN_71008141e0(*plVar42,(ulong)(uVar4 + 8) << 3);
            if (lVar17 == 0) goto LAB_710082f0dc;
            *(short *)(plVar42 + 1) = (short)(uVar4 + 8);
            *plVar42 = lVar17;
          }
          uVar46 = 0x20;
          *(ushort *)((long)plVar42 + 10) = uVar3 + 1;
          *(long **)(*plVar42 + (ulong)uVar3 * 8) = plVar44;
          puVar21 = puVar20;
        }
      }
      else {
        uVar46 = 0;
        puVar21 = (undefined4 *)0x0;
        plVar44 = (long *)0x0;
        puVar20 = (undefined4 *)0x0;
      }
LAB_710082e1ec:
      iVar12 = 0;
      do {
        iVar13 = FUN_7100809520();
        if (iVar13 == iVar12) goto LAB_71008307e0;
        iVar13 = iVar12 + 1;
        bVar29 = *(byte *)*param_2;
        *param_2 = (long)((byte *)*param_2 + 1);
        local_168[iVar12] = bVar29;
        *(int *)(param_2 + 1) = (int)param_2[1] + -1;
        if ((local_3d8 != 3) || (local_370[0] != 4)) {
          FUN_7100808340(local_370,0,8);
        }
        local_3d8 = FUN_7100823160(param_1,puVar20,local_168,(long)iVar13,local_370);
        if (local_3d8 == -1) goto LAB_71008307e0;
        if (local_3d8 == 0) {
          if (uVar1 == 0) {
            *puVar20 = 0;
          }
LAB_710082e2dc:
          uVar38 = uVar38 - 1;
LAB_710082e2e0:
          local_394 = local_394 + iVar13;
          if (uVar1 == 0) {
            lVar17 = (long)puVar20 - (long)puVar21;
            if (plVar44 != (long *)0x0 && uVar46 <= (ulong)(lVar17 >> 2)) {
              puVar21 = (undefined4 *)FUN_71008141e0(puVar21,uVar46 << 3);
              if (puVar21 == (undefined4 *)0x0) goto LAB_710082f0dc;
              puVar20 = (undefined4 *)((long)puVar21 + lVar17);
              uVar46 = uVar46 << 1;
              *plVar44 = (long)puVar21;
            }
            puVar20 = puVar20 + 1;
          }
          iVar13 = 0;
        }
        else if (local_3d8 != -2) {
          if ((local_3d8 != 3) || (local_370[0] != 4)) goto LAB_710082e2dc;
          goto LAB_710082e2e0;
        }
        if (((int)param_2[1] < 1) && (iVar12 = FUN_7100830c7c(param_1,param_2), iVar12 != 0)) {
          if (iVar13 != 0) goto LAB_71008307e0;
          break;
        }
        iVar12 = iVar13;
      } while (uVar38 != 0);
      if ((plVar44 != (long *)0x0 && (ulong)((long)puVar20 - (long)puVar21 >> 2) < uVar46) &&
         (lVar17 = FUN_71008141e0(*plVar44), lVar17 != 0)) {
        *plVar44 = lVar17;
      }
      if (uVar1 == 0) {
        local_398 = local_398 + 1;
      }
      goto LAB_710082d720;
    }
    if (uVar1 != 0) {
      lVar17 = 0;
      do {
        iVar12 = (int)param_2[1];
        if ((int)uVar38 <= iVar12) {
          lVar17 = lVar17 + uVar38;
          *param_2 = *param_2 + uVar38;
          *(int *)(param_2 + 1) = iVar12 - (int)uVar38;
          goto LAB_710082e42c;
        }
        lVar17 = lVar17 + iVar12;
        uVar38 = uVar38 - (long)iVar12;
        *param_2 = *param_2 + (long)iVar12;
        iVar12 = FUN_7100830c7c(param_1,param_2);
      } while (iVar12 == 0);
      if (lVar17 != 0) {
LAB_710082e42c:
        local_394 = local_394 + (int)lVar17;
        goto LAB_710082d720;
      }
      goto LAB_71008307e0;
    }
    if ((uVar43 >> 7 & 1) == 0) {
      if (bVar9) {
        if (local_390 <= iVar13) {
          lVar17 = FUN_710082d628(iVar13,param_4,&local_390);
          plVar44 = (long *)0x0;
          goto LAB_710082e674;
        }
        lVar17 = local_368[iVar13];
      }
      else {
        iVar12 = iVar47 + 1;
        if (iVar47 < local_390) {
          lVar17 = local_368[iVar13];
          iVar47 = iVar12;
        }
        else {
          plVar44 = (long *)*param_4;
          iVar47 = (int)param_4[3];
          if (local_390 < 0x20) {
            if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
              plVar44 = (long *)(param_4[1] + (long)iVar47);
            }
            else {
              *param_4 = (long)plVar44 + 0xfU & 0xfffffffffffffff8;
            }
            lVar17 = *plVar44;
            local_368[local_390] = lVar17;
            local_390 = local_390 + 1;
            iVar47 = iVar12;
          }
          else {
            if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
              plVar44 = (long *)(param_4[1] + (long)iVar47);
            }
            else {
              *param_4 = (long)plVar44 + 0xfU & 0xfffffffffffffff8;
            }
            lVar17 = *plVar44;
            iVar47 = iVar12;
          }
        }
      }
      plVar44 = (long *)0x0;
    }
    else {
      if (bVar9) {
        iVar12 = iVar47;
        if (iVar13 < local_390) {
          plVar44 = (long *)local_368[iVar13];
        }
        else {
          plVar44 = (long *)FUN_710082d628(iVar13,param_4,&local_390);
        }
      }
      else {
        iVar12 = iVar47 + 1;
        if (iVar47 < local_390) {
          plVar44 = (long *)local_368[iVar13];
        }
        else {
          plVar44 = (long *)*param_4;
          iVar47 = (int)param_4[3];
          if (local_390 < 0x20) {
            local_390 = local_390 + 1;
            if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
              plVar44 = (long *)(param_4[1] + (long)iVar47);
            }
            else {
              *param_4 = (long)plVar44 + 0xfU & 0xfffffffffffffff8;
            }
            plVar44 = (long *)*plVar44;
            local_368[iVar16] = (long)plVar44;
          }
          else {
            if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
              plVar44 = (long *)(param_4[1] + (long)iVar47);
            }
            else {
              *param_4 = (long)plVar44 + 0xfU & 0xfffffffffffffff8;
            }
            plVar44 = (long *)*plVar44;
          }
        }
      }
      if (plVar44 == (long *)0x0) goto switchD_710082d858_caseD_26;
      lVar17 = FUN_710081c1c0(uVar38);
      if (lVar17 == 0) goto LAB_710083084c;
      uVar3 = *(ushort *)((long)plVar42 + 10);
      uVar4 = *(ushort *)(plVar42 + 1);
      *plVar44 = lVar17;
      if (uVar4 <= uVar3) {
        if (0xfff6 < uVar4) goto LAB_7100830810;
        lVar22 = FUN_71008141e0(*plVar42,(ulong)(uVar4 + 8) << 3);
        if (lVar22 == 0) goto LAB_7100830810;
        *plVar42 = lVar22;
        *(short *)(plVar42 + 1) = (short)(uVar4 + 8);
      }
      *(ushort *)((long)plVar42 + 10) = uVar3 + 1;
      *(long **)(*plVar42 + (ulong)uVar3 * 8) = plVar44;
      iVar47 = iVar12;
    }
LAB_710082e674:
    uVar46 = FUN_7100830cec(param_1,lVar17,1,uVar38,param_2);
    if (uVar46 != 0) {
      if ((plVar44 != (long *)0x0 && uVar46 < uVar38) &&
         (lVar17 = FUN_71008141e0(*plVar44,uVar46), lVar17 != 0)) {
        *plVar44 = lVar17;
      }
      iVar12 = (int)uVar46;
LAB_710082f7f8:
      local_394 = local_394 + iVar12;
      goto LAB_71008307c4;
    }
  }
LAB_71008307e0:
  if ((local_398 != 0) && ((*(ushort *)(param_2 + 2) >> 6 & 1) == 0))
  goto switchD_710082d858_caseD_26;
LAB_710083084c:
  if (plVar42 == (long *)0x0) {
    return -1;
  }
  goto LAB_7100830810;
code_r0x007100830120:
  uVar43 = uVar43 & 0xfffffd7f;
  pbVar25 = (byte *)FUN_7100833b40(pbVar25,lVar17,lVar35);
  local_3e8 = lVar22;
LAB_7100830254:
  local_394 = local_394 + 1;
  iVar16 = (int)param_2[1] + -1;
  *(int *)(param_2 + 1) = iVar16;
  if (iVar16 < 1) {
    iVar16 = FUN_7100830c7c(param_1,param_2);
    if (iVar16 != 0) goto LAB_71008302bc;
  }
  else {
    *param_2 = *param_2 + 1;
  }
  uVar38 = uVar38 - 1;
  if (uVar38 == 0) goto LAB_71008302bc;
  goto LAB_710082ff34;
LAB_71008302bc:
  if (lVar22 != 0) {
    uVar43 = uVar43 & 0xfffffeff;
  }
LAB_71008302c4:
  if (iVar12 - 1U < 2) goto LAB_71008302d4;
  if (uVar14 - 1 < 7) {
    if (uVar14 < 3) goto LAB_710083036c;
    pbVar39 = pbVar25;
    while (((uVar14 - (int)pbVar25) + (int)pbVar39 & 0xff) != 3) {
      pbVar39 = pbVar39 + -1;
      FUN_7100830b8c(param_1,*pbVar39,param_2);
    }
    pbVar25 = pbVar25 + -(ulong)(byte)(uVar14 - 3);
    local_394 = local_394 - (uVar14 - 3 & 0xff);
  }
  if ((uVar43 >> 8 & 1) != 0) {
    if ((uVar43 >> 10 & 1) != 0) goto LAB_7100830398;
    bVar29 = pbVar25[-1];
    if ((bVar29 & 0xdf) == 0x45) {
      pbVar25 = pbVar25 + -1;
      local_394 = local_394 + -1;
    }
    else {
      pbVar25 = pbVar25 + -2;
      FUN_7100830b8c(param_1,bVar29,param_2);
      bVar29 = *pbVar25;
      local_394 = local_394 + -2;
    }
    FUN_7100830b8c(param_1,bVar29,param_2);
  }
  if ((uVar43 >> 4 & 1) != 0) goto LAB_710082d720;
  *pbVar25 = 0;
  if ((uVar43 & 0x600) == 0x400) {
    if (lVar22 != local_3e8) {
      local_3e8 = local_3e8 - lVar22;
      local_408 = pbVar25;
LAB_7100830488:
      if (abStack_18 <= local_408) {
        local_408 = &bStack_19;
      }
      FUN_710080d3e0(local_408,&DAT_71009cfaaf,local_3e8);
    }
  }
  else if (local_400 != 0) {
    local_3e8 = FUN_710081b6a0(param_1,local_408 + 1,0,10);
    local_3e8 = local_3e8 - local_400;
    goto LAB_7100830488;
  }
  dVar49 = (double)FUN_710080ad00(param_1,local_168,0);
  if ((uVar43 & 1) == 0) {
    if ((uVar43 >> 1 & 1) == 0) {
      if (bVar9) {
        if (iVar13 < local_390) {
          pfVar40 = (float *)local_368[iVar13];
        }
        else {
          pfVar40 = (float *)FUN_710082d628(iVar13,param_4,&local_390);
          dVar49 = (double)CONCAT44(extraout_var_01,extraout_s0_01);
        }
      }
      else {
        iVar12 = iVar47 + 1;
        if (iVar47 < local_390) {
          pfVar40 = (float *)local_368[iVar13];
          iVar47 = iVar12;
        }
        else {
          plVar44 = (long *)*param_4;
          iVar47 = (int)param_4[3];
          if (local_390 < 0x20) {
            if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
              plVar44 = (long *)(param_4[1] + (long)iVar47);
            }
            else {
              *param_4 = (long)plVar44 + 0xfU & 0xfffffffffffffff8;
            }
            pfVar40 = (float *)*plVar44;
            local_368[local_390] = (long)pfVar40;
            local_390 = local_390 + 1;
            iVar47 = iVar12;
          }
          else {
            if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
              plVar44 = (long *)(param_4[1] + (long)iVar47);
            }
            else {
              *param_4 = (long)plVar44 + 0xfU & 0xfffffffffffffff8;
            }
            pfVar40 = (float *)*plVar44;
            iVar47 = iVar12;
          }
        }
      }
      if (NAN(dVar49) || NAN(dVar49)) {
        fVar48 = (float)FUN_7100800480(&DAT_71009cfaac);
      }
      else {
        fVar48 = (float)dVar49;
      }
      *pfVar40 = fVar48;
    }
    else {
      if (bVar9) {
        if (iVar13 < local_390) {
          puVar19 = (undefined8 *)local_368[iVar13];
        }
        else {
          puVar19 = (undefined8 *)FUN_710082d628(iVar13,param_4,&local_390);
        }
      }
      else {
        iVar12 = iVar47 + 1;
        if (iVar47 < local_390) {
          puVar19 = (undefined8 *)local_368[iVar13];
          iVar47 = iVar12;
        }
        else {
          puVar19 = (undefined8 *)*param_4;
          iVar47 = (int)param_4[3];
          if (local_390 < 0x20) {
            if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
              puVar19 = (undefined8 *)(param_4[1] + (long)iVar47);
            }
            else {
              *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
            }
            puVar19 = (undefined8 *)*puVar19;
            local_368[local_390] = (long)puVar19;
            local_390 = local_390 + 1;
            iVar47 = iVar12;
          }
          else {
            if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
              puVar19 = (undefined8 *)(param_4[1] + (long)iVar47);
            }
            else {
              *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
            }
            puVar19 = (undefined8 *)*puVar19;
            iVar47 = iVar12;
          }
        }
      }
      FUN_7100836660();
      puVar19[1] = extraout_var_02;
      *puVar19 = CONCAT44(extraout_var_00,extraout_s0_00);
    }
  }
  else {
    if (bVar9) {
      if (iVar13 < local_390) {
        pdVar28 = (double *)local_368[iVar13];
      }
      else {
        pdVar28 = (double *)FUN_710082d628(iVar13,param_4,&local_390);
        dVar49 = (double)CONCAT44(extraout_var,extraout_s0);
      }
    }
    else {
      iVar12 = iVar47 + 1;
      if (iVar47 < local_390) {
        pdVar28 = (double *)local_368[iVar13];
        iVar47 = iVar12;
      }
      else {
        puVar19 = (undefined8 *)*param_4;
        iVar47 = (int)param_4[3];
        if (local_390 < 0x20) {
          if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
            puVar19 = (undefined8 *)(param_4[1] + (long)iVar47);
          }
          else {
            *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
          }
          pdVar28 = (double *)*puVar19;
          local_368[local_390] = (long)pdVar28;
          local_390 = local_390 + 1;
          iVar47 = iVar12;
        }
        else {
          if ((iVar47 < 0) && (*(int *)(param_4 + 3) = iVar47 + 8, iVar47 + 8 < 1)) {
            puVar19 = (undefined8 *)(param_4[1] + (long)iVar47);
          }
          else {
            *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
          }
          pdVar28 = (double *)*puVar19;
          iVar47 = iVar12;
        }
      }
    }
    *pdVar28 = dVar49;
  }
LAB_71008307c4:
  local_398 = local_398 + 1;
  goto LAB_710082d720;
LAB_71008302d4:
  while (local_168 < pbVar25) {
    pbVar25 = pbVar25 + -1;
    FUN_7100830b8c(param_1,*pbVar25,param_2);
  }
  goto switchD_710082d858_caseD_26;
LAB_710083036c:
  while (local_168 < pbVar25) {
    pbVar25 = pbVar25 + -1;
    FUN_7100830b8c(param_1,*pbVar25,param_2);
  }
  goto switchD_710082d858_caseD_26;
LAB_710082f354:
  for (; (int)uVar32 != -1; uVar32 = uVar32 - 1) {
    FUN_7100830b8c(param_1,local_168[uVar32],param_2);
  }
  goto LAB_710082f458;
LAB_710082eb70:
  if (uVar38 == 0) goto LAB_710082eb88;
  goto LAB_710082e988;
LAB_710082eb88:
  if (uVar1 == 0) {
    lVar17 = (long)puVar23 - (long)puVar24;
    *puVar23 = 0;
    uVar38 = (lVar17 >> 2) + 1;
    bVar10 = bVar9 && uVar38 <= uVar46;
    bVar9 = bVar9 && uVar46 == uVar38;
    goto LAB_710082f474;
  }
  goto LAB_710082d720;
switchD_710082d858_caseD_25:
LAB_710082d874:
  lVar17 = 0;
  while ((int)lVar17 < iVar12) {
    if (((int)param_2[1] < 1) && (iVar13 = FUN_7100830c7c(param_1,param_2), iVar13 != 0))
    goto LAB_71008307e0;
    lVar17 = lVar17 + 1;
    if (*(byte *)*param_2 != local_3a8[lVar17 + ~(long)iVar12]) goto switchD_710082d858_caseD_26;
    *param_2 = (long)((byte *)*param_2 + 1);
    *(int *)(param_2 + 1) = (int)param_2[1] + -1;
  }
  local_394 = local_394 + (int)lVar17;
  goto LAB_710082d720;
LAB_7100830398:
  while (local_168 < pbVar25) {
    pbVar25 = pbVar25 + -1;
    FUN_7100830b8c(param_1,*pbVar25,param_2);
  }
switchD_710082d858_caseD_26:
  if (plVar42 != (long *)0x0) {
    if (local_398 == -1) {
LAB_7100830810:
      for (uVar43 = 0; (int)uVar43 < (int)(uint)*(ushort *)((long)plVar42 + 10); uVar43 = uVar43 + 1
          ) {
        lVar17 = *plVar42;
        FUN_710081c200(**(undefined8 **)(lVar17 + (ulong)uVar43 * 8));
        **(undefined8 **)(lVar17 + (ulong)uVar43 * 8) = 0;
      }
      local_398 = -1;
    }
    if (*plVar42 != 0) {
      FUN_710081c200();
    }
  }
  return local_398;
}



// ===== FUN_7100830900 @ 7100830900 (size=92) =====

bool FUN_7100830900(int param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_710081ba40();
  bVar2 = true;
  if ((iVar1 != 4) && (bVar2 = false, iVar1 == 3)) {
    iVar1 = FUN_7100822f20(param_1);
    return iVar1 == param_1;
  }
  return bVar2;
}



// ===== FUN_7100830960 @ 7100830960 (size=44) =====

bool FUN_7100830960(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_710081ba40();
  return iVar1 == 0x1c || param_1 == 9;
}



// ===== FUN_71008309a0 @ 71008309a0 (size=56) =====

bool FUN_71008309a0(void)

{
  int iVar1;
  
  iVar1 = FUN_710081ba40();
  if (5 < iVar1 - 3U) {
    return iVar1 - 0xcU < 2;
  }
  return true;
}



// ===== FUN_71008309e0 @ 71008309e0 (size=8) =====

void FUN_71008309e0(undefined8 param_1)

{
  FUN_7100833b20(param_1,0);
  return;
}



// ===== FUN_7100830a00 @ 7100830a00 (size=280) =====

uint FUN_7100830a00(long param_1,byte param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x48) == 0)) {
    FUN_710080d840();
  }
  *(int *)((long)param_3 + 0xc) = (int)param_3[5];
  if (((*(ushort *)(param_3 + 2) >> 3 & 1) == 0) || (param_3[3] == 0)) {
    iVar2 = FUN_71008233a0(param_1);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    pbVar3 = (byte *)*param_3;
    iVar2 = (int)pbVar3 - (int)param_3[3];
    if (iVar2 < (int)param_3[4]) goto LAB_7100830a50;
  }
  else {
    pbVar3 = (byte *)*param_3;
    iVar2 = (int)pbVar3 - (int)param_3[3];
    if (iVar2 < (int)param_3[4]) {
LAB_7100830a50:
      iVar2 = iVar2 + 1;
      goto LAB_7100830a54;
    }
  }
  iVar2 = FUN_710081c760(param_1);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  iVar2 = 1;
  pbVar3 = (byte *)*param_3;
LAB_7100830a54:
  uVar1 = (uint)param_2;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) + -1;
  *param_3 = (long)(pbVar3 + 1);
  *pbVar3 = param_2;
  if (((int)param_3[4] != iVar2) && (((ushort)(uVar1 == 10) & *(ushort *)(param_3 + 2)) == 0)) {
    return uVar1;
  }
  iVar2 = FUN_710081c760(param_1);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  return uVar1;
}



// ===== FUN_7100830b18 @ 7100830b18 (size=116) =====

undefined8 FUN_7100830b18(int param_1,ulong *param_2,int *param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  iVar1 = *param_3;
  for (lVar5 = (long)iVar1; (int)lVar5 <= param_1; lVar5 = lVar5 + 1) {
    iVar2 = (int)param_2[3];
    puVar4 = (undefined8 *)*param_2;
    if ((iVar2 < 0) && (*(int *)(param_2 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
      puVar4 = (undefined8 *)(param_2[1] + (long)iVar2);
    }
    else {
      *param_2 = (long)puVar4 + 0xfU & 0xfffffffffffffff8;
    }
    *(undefined8 *)(param_4 + lVar5 * 8) = *puVar4;
  }
  iVar2 = (param_1 + 1) - iVar1;
  if (param_1 + 1 < iVar1) {
    iVar2 = 0;
  }
  uVar3 = *(undefined8 *)(param_4 + (long)param_1 * 8);
  *param_3 = iVar2 + iVar1;
  return uVar3;
}



// ===== FUN_7100830b8c @ 7100830b8c (size=240) =====

uint FUN_7100830b8c(undefined8 param_1,uint param_2,ulong *param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  
  if (param_2 == 0xffffffff) {
LAB_7100830ba4:
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = param_2 & 0xff;
    *(ushort *)(param_3 + 2) = (ushort)param_3[2] & 0xffdf;
    iVar1 = (int)param_3[1];
    if (param_3[0xb] == 0) {
      uVar2 = *param_3;
      if (((param_3[3] != 0) && (param_3[3] < uVar2)) && (*(byte *)(uVar2 - 1) == uVar3)) {
        *param_3 = uVar2 - 1;
        *(int *)(param_3 + 1) = iVar1 + 1;
        return uVar3;
      }
      param_3[0xd] = uVar2;
      param_3[0xb] = (long)param_3 + 0x74;
      *(undefined4 *)(param_3 + 0xc) = 3;
      *(int *)(param_3 + 0xe) = iVar1;
      *(undefined1 *)((long)param_3 + 0x76) = (char)param_2;
      *param_3 = (ulong)((long)param_3 + 0x76);
      iVar1 = 1;
    }
    else {
      if (((int)param_3[0xc] <= iVar1) && (iVar1 = FUN_7100809680(param_1,param_3), iVar1 != 0))
      goto LAB_7100830ba4;
      uVar2 = *param_3;
      *param_3 = uVar2 - 1;
      *(char *)(uVar2 - 1) = (char)param_2;
      iVar1 = (int)param_3[1] + 1;
    }
    *(int *)(param_3 + 1) = iVar1;
  }
  return uVar3;
}



// ===== FUN_7100830c7c @ 7100830c7c (size=112) =====

undefined8 FUN_7100830c7c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2[0xb] != 0) {
    if (param_2[0xb] != (long)param_2 + 0x74) {
      FUN_7100816da0();
    }
    *(int *)(param_2 + 1) = *(int *)(param_2 + 0xe);
    param_2[0xb] = 0;
    if (*(int *)(param_2 + 0xe) != 0) {
      *param_2 = param_2[0xd];
      return 0;
    }
  }
  *param_2 = param_2[3];
  *(undefined4 *)(param_2 + 1) = 0;
  *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | 0x20;
  return 0xffffffff;
}



// ===== FUN_7100830cec @ 7100830cec (size=220) =====

ulong FUN_7100830cec(undefined8 param_1,long param_2,ulong param_3,ulong param_4,long *param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = param_4 * param_3;
  uVar3 = uVar4;
  if (uVar4 != 0) {
    while( true ) {
      uVar2 = (ulong)(int)param_5[1];
      if (uVar3 <= uVar2) break;
      FUN_710080f900(param_2,*param_5,uVar2);
      *(undefined4 *)(param_5 + 1) = 0;
      param_2 = param_2 + uVar2;
      *param_5 = *param_5 + uVar2;
      iVar1 = FUN_7100830c7c(param_1,param_5);
      if (iVar1 != 0) {
        if (param_3 == 0) {
          return 0;
        }
        return ((uVar2 + uVar4) - uVar3) / param_3;
      }
      uVar3 = uVar3 - uVar2;
    }
    FUN_710080f900(param_2,*param_5,uVar3);
    *(int *)(param_5 + 1) = (int)param_5[1] - (int)uVar3;
    *param_5 = *param_5 + uVar3;
    uVar4 = param_4;
  }
  return uVar4;
}



// ===== FUN_7100830dc8 @ 7100830dc8 (size=9984) =====

int FUN_7100830dc8(undefined4 *param_1,long *param_2,byte *param_3,ulong *param_4)

{
  undefined *puVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  bool bVar8;
  undefined1 *puVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  int *piVar18;
  undefined8 *puVar19;
  undefined4 *puVar20;
  long lVar21;
  uint *puVar22;
  byte *pbVar23;
  byte *pbVar24;
  undefined8 uVar25;
  undefined1 *puVar26;
  undefined2 *puVar27;
  uint uVar28;
  ulong uVar29;
  byte *pbVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  undefined8 extraout_x9_02;
  code *pcVar34;
  ulong uVar35;
  int iVar36;
  byte *pbVar37;
  int iVar38;
  uint uVar39;
  undefined4 *puVar40;
  long *plVar41;
  uint *puVar42;
  ulong uVar43;
  long *plVar44;
  undefined8 local_350;
  undefined4 local_348 [2];
  undefined *local_2d8;
  undefined *local_2d0;
  code *local_280;
  long local_278;
  byte *local_270;
  int local_254;
  int local_250;
  uint local_24c;
  undefined1 auStack_248 [8];
  int local_240 [2];
  undefined1 auStack_238 [8];
  uint local_230 [2];
  byte local_228 [40];
  long local_200 [32];
  char local_100 [256];
  
  puVar9 = &stack0xfffffffffffffcc0;
  iVar36 = 0;
  iVar38 = 0;
  plVar44 = (long *)0x0;
  local_250 = 0;
  FUN_7100808340(auStack_248,0,8);
  local_2d0 = &DAT_7100af4978;
  local_280 = (code *)0x0;
  local_278 = 0;
  iVar32 = 0;
  local_254 = 0;
  local_270 = param_3;
LAB_7100830e50:
  do {
    lVar17 = FUN_7100834b00();
    puVar1 = *(undefined **)(lVar17 + 0x40);
    if (*(undefined **)(lVar17 + 0x40) == (undefined *)0x0) {
      puVar1 = local_2d0;
    }
    pcVar34 = *(code **)(puVar1 + 0xe8);
    iVar12 = FUN_7100809520();
    puVar42 = &local_24c;
    iVar12 = (*pcVar34)(param_1,puVar42,local_270,(long)iVar12,auStack_248);
    if (iVar12 < 0) {
      local_24c = 0xfffd;
      iVar12 = 1;
      FUN_7100808340(auStack_248,0,8);
    }
    if (local_24c == 0) goto switchD_7100830fa8_caseD_45;
    local_270 = local_270 + iVar12;
    if ((iVar12 == 1) && (((byte)(&DAT_71009d32f1)[(int)local_24c] >> 3 & 1) != 0)) {
      while (((0 < (int)param_2[1] || (iVar12 = FUN_7100830c7c(param_1,param_2), iVar12 == 0)) &&
             (((byte)(&DAT_71009d32f1)[*(byte *)*param_2] >> 3 & 1) != 0))) {
        iVar36 = iVar36 + 1;
        *param_2 = (long)((byte *)*param_2 + 1);
        *(int *)(param_2 + 1) = (int)param_2[1] + -1;
      }
    }
    else {
      if (local_24c == 0x25) {
        bVar8 = false;
        uVar39 = 0;
        uVar35 = 0;
        pbVar23 = local_270;
        iVar13 = iVar38;
LAB_7100830f4c:
        while( true ) {
          bVar2 = *pbVar23;
          if (0x7a < bVar2) goto switchD_7100830fa8_caseD_45;
          local_270 = pbVar23 + 1;
          uVar28 = (uint)bVar2;
          if (0x42 < bVar2) break;
          if (bVar2 == 0x2a) {
            if ((uVar39 != 0) || (uVar35 != 0)) goto switchD_7100830fa8_caseD_45;
            uVar39 = 0x10;
            pbVar23 = local_270;
          }
          else if (uVar28 < 0x2b) {
            if (uVar28 != 0x24) {
              if (uVar28 == 0x25) goto LAB_7100830fd0;
              goto switchD_7100830fa8_caseD_45;
            }
            if (uVar39 != 0) goto switchD_7100830fa8_caseD_45;
            if (0x20 < uVar35) {
              *param_1 = 0x16;
              goto LAB_7100833428;
            }
            iVar13 = (int)uVar35 + -1;
            bVar8 = true;
            uVar35 = 0;
            pbVar23 = local_270;
          }
          else {
            if ((9 < (byte)(bVar2 - 0x30)) || ((uVar39 & 0x8f) != 0))
            goto switchD_7100830fa8_caseD_45;
            uVar35 = uVar35 * 10 + -0x30 + (ulong)uVar28;
            pbVar23 = local_270;
          }
        }
        switch(uVar28) {
        case 0x43:
          goto switchD_7100830fa8_caseD_43;
        case 0x44:
          uVar39 = uVar39 | 1;
          break;
        default:
          goto switchD_7100830fa8_caseD_45;
        case 0x4c:
          if ((uVar39 & 0xf) == 0) goto LAB_7100831074;
          goto switchD_7100830fa8_caseD_45;
        case 0x4f:
          uVar39 = uVar39 | 1;
          goto LAB_7100831140;
        case 0x53:
          uVar39 = uVar39 | 1;
          goto LAB_7100831178;
        case 0x58:
        case 0x78:
          uVar39 = uVar39 | 0x200;
          goto LAB_71008311cc;
        case 0x5b:
          local_270 = (byte *)FUN_7100833a40(local_100,local_270);
          uVar39 = uVar39 | 0x40;
          iVar12 = 1;
          goto LAB_710083159c;
        case 99:
          goto LAB_71008311b4;
        case 100:
          break;
        case 0x68:
          if ((uVar39 & 0xf) != 0) goto switchD_7100830fa8_caseD_45;
          if (pbVar23[1] == 0x68) {
            uVar39 = uVar39 | 8;
            pbVar23 = pbVar23 + 2;
          }
          else {
            uVar39 = uVar39 | 4;
            pbVar23 = local_270;
          }
          goto LAB_7100830f4c;
        case 0x69:
          local_280 = FUN_710081b6a0;
          iVar32 = 0;
          goto LAB_7100831598;
        case 0x6a:
        case 0x74:
        case 0x7a:
          if ((uVar39 & 0xf) != 0) goto switchD_7100830fa8_caseD_45;
LAB_71008310ac:
          uVar39 = uVar39 | 1;
          pbVar23 = local_270;
          goto LAB_7100830f4c;
        case 0x6c:
          if ((uVar39 & 0xf) != 0) goto switchD_7100830fa8_caseD_45;
          if (pbVar23[1] != 0x6c) goto LAB_71008310ac;
          local_270 = pbVar23 + 2;
LAB_7100831074:
          uVar39 = uVar39 | 2;
          pbVar23 = local_270;
          goto LAB_7100830f4c;
        case 0x6d:
          if ((uVar39 & 0x8f) == 0) goto code_r0x0071008310c0;
          goto switchD_7100830fa8_caseD_45;
        case 0x6e:
          if ((uVar39 >> 4 & 1) == 0) {
            if ((uVar39 >> 3 & 1) == 0) {
              if ((uVar39 >> 2 & 1) == 0) {
                if (((uVar39 & 1) == 0) && ((uVar39 >> 1 & 1) == 0)) {
                  if (bVar8) {
                    if (iVar13 < local_250) {
                      piVar18 = (int *)local_200[iVar13];
                    }
                    else {
                      piVar18 = (int *)FUN_7100830b18(iVar13,param_4,&local_250);
                    }
                  }
                  else {
                    iVar12 = iVar38 + 1;
                    if (iVar38 < local_250) {
                      piVar18 = (int *)local_200[iVar13];
                      iVar38 = iVar12;
                    }
                    else {
                      plVar41 = (long *)*param_4;
                      iVar38 = (int)param_4[3];
                      if (local_250 < 0x20) {
                        if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                          plVar41 = (long *)(param_4[1] + (long)iVar38);
                        }
                        else {
                          *param_4 = (long)plVar41 + 0xfU & 0xfffffffffffffff8;
                        }
                        piVar18 = (int *)*plVar41;
                        local_200[local_250] = (long)piVar18;
                        local_250 = local_250 + 1;
                        iVar38 = iVar12;
                      }
                      else {
                        if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                          plVar41 = (long *)(param_4[1] + (long)iVar38);
                        }
                        else {
                          *param_4 = (long)plVar41 + 0xfU & 0xfffffffffffffff8;
                        }
                        piVar18 = (int *)*plVar41;
                        iVar38 = iVar12;
                      }
                    }
                  }
                  *piVar18 = iVar36;
                }
                else {
                  if (bVar8) {
                    if (iVar13 < local_250) {
                      plVar41 = (long *)local_200[iVar13];
                    }
                    else {
                      plVar41 = (long *)FUN_7100830b18(iVar13,param_4,&local_250);
                    }
                  }
                  else {
                    iVar12 = iVar38 + 1;
                    if (iVar38 < local_250) {
                      plVar41 = (long *)local_200[iVar13];
                      iVar38 = iVar12;
                    }
                    else {
                      plVar41 = (long *)*param_4;
                      iVar38 = (int)param_4[3];
                      if (local_250 < 0x20) {
                        if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                          plVar41 = (long *)(param_4[1] + (long)iVar38);
                        }
                        else {
                          *param_4 = (long)plVar41 + 0xfU & 0xfffffffffffffff8;
                        }
                        plVar41 = (long *)*plVar41;
                        local_200[local_250] = (long)plVar41;
                        local_250 = local_250 + 1;
                        iVar38 = iVar12;
                      }
                      else {
                        if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                          plVar41 = (long *)(param_4[1] + (long)iVar38);
                        }
                        else {
                          *param_4 = (long)plVar41 + 0xfU & 0xfffffffffffffff8;
                        }
                        plVar41 = (long *)*plVar41;
                        iVar38 = iVar12;
                      }
                    }
                  }
                  *plVar41 = (long)iVar36;
                }
              }
              else {
                if (bVar8) {
                  if (iVar13 < local_250) {
                    puVar27 = (undefined2 *)local_200[iVar13];
                  }
                  else {
                    puVar27 = (undefined2 *)FUN_7100830b18(iVar13,param_4,&local_250);
                  }
                }
                else {
                  iVar12 = iVar38 + 1;
                  if (iVar38 < local_250) {
                    puVar27 = (undefined2 *)local_200[iVar13];
                    iVar38 = iVar12;
                  }
                  else {
                    puVar19 = (undefined8 *)*param_4;
                    iVar38 = (int)param_4[3];
                    if (local_250 < 0x20) {
                      if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                        puVar19 = (undefined8 *)(param_4[1] + (long)iVar38);
                      }
                      else {
                        *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                      }
                      puVar27 = (undefined2 *)*puVar19;
                      local_200[local_250] = (long)puVar27;
                      local_250 = local_250 + 1;
                      iVar38 = iVar12;
                    }
                    else {
                      if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                        puVar19 = (undefined8 *)(param_4[1] + (long)iVar38);
                      }
                      else {
                        *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                      }
                      puVar27 = (undefined2 *)*puVar19;
                      iVar38 = iVar12;
                    }
                  }
                }
                *puVar27 = (short)iVar36;
              }
            }
            else {
              if (bVar8) {
                if (iVar13 < local_250) {
                  puVar26 = (undefined1 *)local_200[iVar13];
                }
                else {
                  puVar26 = (undefined1 *)FUN_7100830b18(iVar13,param_4,&local_250);
                }
              }
              else {
                iVar12 = iVar38 + 1;
                if (iVar38 < local_250) {
                  puVar26 = (undefined1 *)local_200[iVar13];
                  iVar38 = iVar12;
                }
                else {
                  puVar19 = (undefined8 *)*param_4;
                  iVar38 = (int)param_4[3];
                  if (local_250 < 0x20) {
                    if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                      puVar19 = (undefined8 *)(param_4[1] + (long)iVar38);
                    }
                    else {
                      *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                    }
                    puVar26 = (undefined1 *)*puVar19;
                    local_200[local_250] = (long)puVar26;
                    local_250 = local_250 + 1;
                    iVar38 = iVar12;
                  }
                  else {
                    if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                      puVar19 = (undefined8 *)(param_4[1] + (long)iVar38);
                    }
                    else {
                      *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                    }
                    puVar26 = (undefined1 *)*puVar19;
                    iVar38 = iVar12;
                  }
                }
              }
              *puVar26 = (char)iVar36;
            }
          }
          goto LAB_7100830e50;
        case 0x6f:
LAB_7100831140:
          local_280 = FUN_710080da60;
          iVar32 = 8;
          goto LAB_7100831598;
        case 0x70:
          uVar39 = uVar39 | 0x220;
LAB_71008311cc:
          local_280 = FUN_710080da60;
          iVar32 = 0x10;
          goto LAB_7100831598;
        case 0x73:
LAB_7100831178:
          iVar12 = 2;
          goto LAB_710083159c;
        case 0x75:
          local_280 = FUN_710080da60;
          goto LAB_710083158c;
        }
        local_280 = FUN_710081b6a0;
LAB_710083158c:
        iVar32 = 10;
LAB_7100831598:
        iVar12 = 3;
        goto LAB_710083159c;
      }
LAB_7100830fd0:
      lVar17 = 0;
      while ((int)lVar17 < iVar12) {
        if (((int)param_2[1] < 1) && (iVar13 = FUN_7100830c7c(param_1,param_2), iVar13 != 0))
        goto LAB_7100833428;
        lVar17 = lVar17 + 1;
        if (*(byte *)*param_2 != local_270[lVar17 + ~(long)iVar12])
        goto switchD_7100830fa8_caseD_45;
        *param_2 = (long)((byte *)*param_2 + 1);
        *(int *)(param_2 + 1) = (int)param_2[1] + -1;
      }
      iVar36 = iVar36 + (int)lVar17;
    }
  } while( true );
code_r0x0071008310c0:
  puVar26 = puVar9;
  if (plVar44 == (long *)0x0) {
    puVar26 = puVar9 + -0x10;
    plVar44 = (long *)(puVar9 + -0x10);
    *(undefined8 *)(puVar9 + -0x10) = 0;
    *(undefined4 *)(puVar9 + -8) = 0;
  }
  uVar39 = uVar39 | 0x80;
  puVar9 = puVar26;
  pbVar23 = local_270;
  goto LAB_7100830f4c;
switchD_7100830fa8_caseD_43:
  uVar39 = uVar39 | 1;
LAB_71008311b4:
  uVar39 = uVar39 | 0x40;
  iVar12 = 0;
LAB_710083159c:
  if ((0 < (int)param_2[1]) || (iVar14 = FUN_7100830c7c(param_1,param_2), iVar14 == 0)) {
    if ((uVar39 >> 6 & 1) == 0) {
      while (((byte)(&DAT_71009d32f1)[*(byte *)*param_2] >> 3 & 1) != 0) {
        iVar14 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar14;
        if (iVar14 < 1) {
          iVar14 = FUN_7100830c7c(param_1,param_2);
          if (iVar14 != 0) goto LAB_7100833428;
        }
        else {
          *param_2 = (long)((byte *)*param_2 + 1);
        }
        iVar36 = iVar36 + 1;
      }
    }
    iVar14 = local_250;
    if (iVar12 == 2) {
      if (uVar35 == 0) {
        uVar35 = 0xffffffffffffffff;
      }
      uVar28 = uVar39 & 1;
      if ((uVar39 & 1) == 0) {
        if ((uVar39 & 0x10) != 0) {
          while (((byte)(&DAT_71009d32f1)[*(byte *)*param_2] >> 3 & 1) == 0) {
            *param_2 = (long)((byte *)*param_2 + 1);
            uVar28 = uVar28 + 1;
            iVar12 = (int)param_2[1] + -1;
            *(int *)(param_2 + 1) = iVar12;
            uVar35 = uVar35 - 1;
            if ((uVar35 == 0) ||
               ((iVar12 < 1 && (iVar12 = FUN_7100830c7c(param_1,param_2), iVar12 != 0)))) break;
          }
          iVar36 = iVar36 + uVar28;
          goto LAB_7100830e50;
        }
        if ((uVar39 >> 7 & 1) == 0) {
          if (bVar8) {
            if (iVar13 < local_250) {
              pbVar23 = (byte *)local_200[iVar13];
            }
            else {
              pbVar23 = (byte *)FUN_7100830b18(iVar13,param_4,&local_250);
            }
          }
          else {
            iVar12 = iVar38 + 1;
            if (iVar38 < local_250) {
              pbVar23 = (byte *)local_200[iVar13];
              iVar38 = iVar12;
            }
            else {
              puVar19 = (undefined8 *)*param_4;
              iVar38 = (int)param_4[3];
              if (local_250 < 0x20) {
                if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                  puVar19 = (undefined8 *)(param_4[1] + (long)iVar38);
                }
                else {
                  *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                }
                pbVar23 = (byte *)*puVar19;
                local_200[local_250] = (long)pbVar23;
                local_250 = local_250 + 1;
                iVar38 = iVar12;
              }
              else {
                if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                  puVar19 = (undefined8 *)(param_4[1] + (long)iVar38);
                }
                else {
                  *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                }
                pbVar23 = (byte *)*puVar19;
                iVar38 = iVar12;
              }
            }
          }
          uVar43 = 0;
          plVar41 = (long *)0x0;
        }
        else {
          if (bVar8) {
            if (iVar13 < local_250) {
              plVar41 = (long *)local_200[iVar13];
            }
            else {
              plVar41 = (long *)FUN_7100830b18(iVar13,param_4,&local_250);
            }
          }
          else {
            iVar12 = iVar38 + 1;
            if (iVar38 < local_250) {
              plVar41 = (long *)local_200[iVar13];
              iVar38 = iVar12;
            }
            else {
              puVar19 = (undefined8 *)*param_4;
              iVar38 = (int)param_4[3];
              if (local_250 < 0x20) {
                local_250 = local_250 + 1;
                if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                  puVar19 = (undefined8 *)(param_4[1] + (long)iVar38);
                }
                else {
                  *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                }
                plVar41 = (long *)*puVar19;
                local_200[iVar14] = (long)plVar41;
                iVar38 = iVar12;
              }
              else {
                if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                  puVar19 = (undefined8 *)(param_4[1] + (long)iVar38);
                }
                else {
                  *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                }
                plVar41 = (long *)*puVar19;
                iVar38 = iVar12;
              }
            }
          }
          if (plVar41 == (long *)0x0) goto switchD_7100830fa8_caseD_45;
          pbVar23 = (byte *)FUN_710081c1c0(0x20);
          if (pbVar23 == (byte *)0x0) goto LAB_7100833498;
          uVar3 = *(ushort *)((long)plVar44 + 10);
          uVar4 = *(ushort *)(plVar44 + 1);
          *plVar41 = (long)pbVar23;
          if (uVar4 <= uVar3) {
            if (0xfff6 < uVar4) goto LAB_7100833460;
            lVar17 = FUN_71008141e0(*plVar44,(ulong)(uVar4 + 8) << 3);
            if (lVar17 == 0) goto LAB_7100833460;
            *plVar44 = lVar17;
            *(short *)(plVar44 + 1) = (short)(uVar4 + 8);
          }
          *(ushort *)((long)plVar44 + 10) = uVar3 + 1;
          *(long **)(*plVar44 + (ulong)uVar3 * 8) = plVar41;
          uVar43 = 0x20;
        }
        pbVar30 = pbVar23;
        while (pbVar24 = (byte *)*param_2, pbVar37 = pbVar30,
              ((byte)(&DAT_71009d32f1)[*pbVar24] >> 3 & 1) == 0) {
          *(int *)(param_2 + 1) = (int)param_2[1] + -1;
          *param_2 = (long)(pbVar24 + 1);
          pbVar37 = pbVar30 + 1;
          *pbVar30 = *pbVar24;
          uVar29 = (long)pbVar37 - (long)pbVar23;
          if (plVar41 != (long *)0x0 && uVar43 <= uVar29) {
            uVar43 = uVar43 << 1;
            pbVar23 = (byte *)FUN_71008141e0(pbVar23,uVar43);
            if (pbVar23 == (byte *)0x0) goto LAB_7100833498;
            *plVar41 = (long)pbVar23;
            pbVar37 = pbVar23 + uVar29;
          }
          uVar35 = uVar35 - 1;
          if ((uVar35 == 0) ||
             ((pbVar30 = pbVar37, (int)param_2[1] < 1 &&
              (iVar12 = FUN_7100830c7c(param_1,param_2), iVar12 != 0)))) break;
        }
        *pbVar37 = 0;
        if ((plVar41 != (long *)0x0 && ((long)pbVar37 - (long)pbVar23) + 1U < uVar43) &&
           (lVar17 = FUN_71008141e0(*plVar41), lVar17 != 0)) {
          *plVar41 = lVar17;
        }
        iVar12 = (int)((long)pbVar37 - (long)pbVar23);
LAB_7100832da0:
        local_254 = local_254 + 1;
        iVar36 = iVar36 + iVar12;
        goto LAB_7100830e50;
      }
      if ((uVar39 & 0x10) == 0) {
        if ((uVar39 >> 7 & 1) == 0) {
          if (bVar8) {
            if (iVar13 < local_250) {
              puVar42 = (uint *)local_200[iVar13];
            }
            else {
              puVar42 = (uint *)FUN_7100830b18(iVar13,param_4,&local_250);
            }
          }
          else {
            iVar12 = iVar38 + 1;
            if (iVar38 < local_250) {
              puVar42 = (uint *)local_200[iVar13];
              iVar38 = iVar12;
            }
            else {
              puVar19 = (undefined8 *)*param_4;
              iVar38 = (int)param_4[3];
              if (local_250 < 0x20) {
                if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                  puVar19 = (undefined8 *)(param_4[1] + (long)iVar38);
                }
                else {
                  *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                }
                puVar42 = (uint *)*puVar19;
                local_200[local_250] = (long)puVar42;
                iVar38 = iVar12;
                local_250 = local_250 + 1;
              }
              else {
                if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                  puVar19 = (undefined8 *)(param_4[1] + (long)iVar38);
                }
                else {
                  *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                }
                puVar42 = (uint *)*puVar19;
                iVar38 = iVar12;
              }
            }
          }
          uVar43 = 0;
          puVar22 = (uint *)0x0;
          plVar41 = (long *)0x0;
        }
        else {
          if (bVar8) {
            if (iVar13 < local_250) {
              plVar41 = (long *)local_200[iVar13];
            }
            else {
              plVar41 = (long *)FUN_7100830b18(iVar13,param_4,&local_250);
            }
          }
          else {
            iVar12 = iVar38 + 1;
            if (iVar38 < local_250) {
              plVar41 = (long *)local_200[iVar13];
              iVar38 = iVar12;
            }
            else {
              puVar19 = (undefined8 *)*param_4;
              iVar38 = (int)param_4[3];
              if (local_250 < 0x20) {
                local_250 = local_250 + 1;
                if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                  puVar19 = (undefined8 *)(param_4[1] + (long)iVar38);
                }
                else {
                  *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                }
                plVar41 = (long *)*puVar19;
                local_200[iVar14] = (long)plVar41;
                iVar38 = iVar12;
              }
              else {
                if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                  puVar19 = (undefined8 *)(param_4[1] + (long)iVar38);
                }
                else {
                  *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                }
                plVar41 = (long *)*puVar19;
                iVar38 = iVar12;
              }
            }
          }
          if (plVar41 == (long *)0x0) goto switchD_7100830fa8_caseD_45;
          puVar22 = (uint *)FUN_710081c1c0(0x80);
          if (puVar22 == (uint *)0x0) goto LAB_71008326b4;
          uVar3 = *(ushort *)((long)plVar44 + 10);
          uVar4 = *(ushort *)(plVar44 + 1);
          *plVar41 = (long)puVar22;
          if (uVar4 <= uVar3) {
            if (0xfff6 < uVar4) {
LAB_71008326b4:
              local_254 = -1;
              goto LAB_710083343c;
            }
            lVar17 = FUN_71008141e0(*plVar44,(ulong)(uVar4 + 8) << 3);
            if (lVar17 == 0) goto LAB_71008326b4;
            *plVar44 = lVar17;
            *(short *)(plVar44 + 1) = (short)(uVar4 + 8);
          }
          *(ushort *)((long)plVar44 + 10) = uVar3 + 1;
          *(long **)(*plVar44 + (ulong)uVar3 * 8) = plVar41;
          uVar43 = 0x20;
          puVar42 = puVar22;
        }
      }
      else {
        uVar43 = 0;
        puVar22 = (uint *)0x0;
        plVar41 = (long *)0x0;
      }
      uVar28 = 0;
      do {
        if ((((byte)(&DAT_71009d32f1)[*(byte *)*param_2] >> 3 & 1) != 0) || (uVar35 == 0))
        goto LAB_71008329e0;
        uVar15 = FUN_7100809520();
        if (uVar15 == uVar28) goto LAB_7100833428;
        pbVar23 = (byte *)*param_2;
        uVar15 = uVar28 + 1;
        local_228[(int)uVar28] = *pbVar23;
        *param_2 = (long)(pbVar23 + 1);
        *(int *)(param_2 + 1) = (int)param_2[1] + -1;
        if ((local_278 != 3) || (local_230[0] != 4)) {
          FUN_7100808340(local_230,0,8);
        }
        local_278 = FUN_7100823160(param_1,puVar42,local_228,(long)(int)uVar15,local_230);
        if (local_278 == -1) goto LAB_7100833428;
        if (local_278 == 0) {
          *puVar42 = 0;
LAB_71008328e0:
          iVar12 = FUN_7100828e40(*puVar42);
          if (iVar12 != 0) {
            for (uVar35 = (ulong)uVar28; (int)uVar35 != -1; uVar35 = uVar35 - 1) {
              FUN_7100830b8c(param_1,local_228[uVar35],param_2);
            }
            goto LAB_71008329e0;
          }
          iVar36 = iVar36 + uVar15;
          if ((local_278 != 3) || (local_230[0] != 4)) {
            uVar35 = uVar35 - 1;
          }
          if ((uVar39 & 0x10) == 0) {
            puVar42 = puVar42 + 1;
            lVar17 = (long)puVar42 - (long)puVar22;
            if (plVar41 != (long *)0x0 && uVar43 <= (ulong)(lVar17 >> 2)) {
              puVar22 = (uint *)FUN_71008141e0(puVar22,uVar43 << 3);
              if (puVar22 == (uint *)0x0) goto LAB_71008326b4;
              puVar42 = (uint *)((long)puVar22 + lVar17);
              uVar43 = uVar43 << 1;
              *plVar41 = (long)puVar22;
            }
          }
          uVar15 = 0;
          goto LAB_7100832988;
        }
        if (local_278 != -2) goto LAB_71008328e0;
LAB_7100832988:
        uVar28 = uVar15;
      } while ((0 < (int)param_2[1]) || (iVar12 = FUN_7100830c7c(param_1,param_2), iVar12 == 0));
      if (uVar28 == 0) {
LAB_71008329e0:
        if ((uVar39 & 0x10) == 0) {
          *puVar42 = 0;
          if ((plVar41 != (long *)0x0 && ((long)puVar42 - (long)puVar22 >> 2) + 1U < uVar43) &&
             (lVar17 = FUN_71008141e0(*plVar41,((long)puVar42 - (long)puVar22) + 4), lVar17 != 0)) {
            *plVar41 = lVar17;
          }
LAB_7100832a18:
          local_254 = local_254 + 1;
        }
        goto LAB_7100830e50;
      }
    }
    else {
      if (iVar12 == 3) {
        if (uVar35 - 1 < 0x27) {
          iVar12 = 0;
        }
        else {
          iVar12 = (int)uVar35 + -0x27;
          uVar35 = 0x27;
        }
        uVar39 = uVar39 | 0xd80;
        bVar6 = true;
        bVar5 = true;
        bVar11 = true;
        iVar14 = 0;
        pbVar23 = local_228;
        do {
          pbVar30 = (byte *)*param_2;
          bVar2 = *pbVar30;
          if (bVar2 < 0x3a) {
            if (0x37 < bVar2) {
              lVar17 = (long)iVar32;
              iVar32 = (int)*(short *)(&DAT_71009d3d40 + lVar17 * 2);
              iVar33 = (int)*(short *)(&DAT_71009d3d40 + lVar17 * 2);
              bVar10 = SBORROW4(iVar33,8);
              iVar16 = iVar33 + -8;
              bVar11 = iVar33 == 8;
              goto LAB_7100832ec4;
            }
            if (bVar2 != 0x30) {
              if (0x30 < bVar2) {
                iVar32 = (int)*(short *)(&DAT_71009d3d40 + (long)iVar32 * 2);
                goto LAB_7100832ec8;
              }
              if (((bVar2 == 0x2b) || (bVar2 == 0x2d)) && (bVar11)) {
                uVar39 = uVar39 & 0xffffff7f;
                bVar11 = false;
                goto LAB_7100832ef8;
              }
              break;
            }
            if (!bVar6) goto LAB_7100832ef8;
            if (iVar32 == 0) {
              uVar39 = uVar39 | 0x200;
              iVar32 = 8;
            }
            if ((uVar39 >> 10 & 1) != 0) {
              uVar28 = 0xfffffa7f;
              bVar7 = 1;
              goto LAB_7100832e84;
            }
            uVar39 = uVar39 & 0xfffffc7f;
            bVar5 = false;
            bVar11 = false;
            if (iVar12 != 0) {
              iVar12 = iVar12 + -1;
              uVar35 = uVar35 + 1;
            }
            iVar14 = iVar14 + 1;
          }
          else {
            if (0x66 < bVar2) {
              bVar10 = bVar2 == 0x78;
LAB_7100832e64:
              if ((bVar10) && ((uVar39 & 0x600) == 0x200)) {
                uVar39 = uVar39 & 0xfffffdff | 0x500;
                bVar5 = true;
                iVar32 = 0x10;
                goto LAB_7100832ef8;
              }
              break;
            }
            if (bVar2 < 0x61) {
              if (0x46 < bVar2) {
                bVar10 = bVar2 == 0x58;
                goto LAB_7100832e64;
              }
              if (bVar2 < 0x41) break;
            }
            bVar10 = SBORROW4(iVar32,10);
            iVar16 = iVar32 + -10;
            bVar11 = iVar32 == 10;
LAB_7100832ec4:
            if (bVar11 || iVar16 < 0 != bVar10) break;
LAB_7100832ec8:
            uVar28 = 0xfffff47f;
            bVar7 = 0;
LAB_7100832e84:
            uVar39 = uVar39 & uVar28;
            bVar6 = (bool)(bVar6 & bVar7);
            bVar5 = false;
            bVar11 = false;
LAB_7100832ef8:
            *pbVar23 = bVar2;
            pbVar23 = pbVar23 + 1;
          }
          iVar16 = (int)param_2[1] + -1;
          *(int *)(param_2 + 1) = iVar16;
          if (iVar16 < 1) {
            iVar16 = FUN_7100830c7c(param_1);
            if (iVar16 != 0) break;
          }
          else {
            *param_2 = (long)(pbVar30 + 1);
          }
          uVar35 = uVar35 - 1;
        } while (uVar35 != 0);
        if (bVar5) {
          if (local_228 < pbVar23) {
            pbVar30 = pbVar23 + -1;
            pbVar23 = pbVar23 + -1;
            FUN_7100830b8c(param_1,*pbVar30,param_2);
          }
          if (pbVar23 == local_228) goto switchD_7100830fa8_caseD_45;
        }
        if ((uVar39 >> 4 & 1) != 0) goto LAB_71008333f0;
        *pbVar23 = 0;
        uVar25 = (*local_280)(param_1,local_228,0,iVar32);
        iVar12 = local_250;
        if ((uVar39 >> 5 & 1) == 0) {
          if ((uVar39 >> 3 & 1) == 0) {
            if ((uVar39 >> 2 & 1) == 0) {
              if ((uVar39 & 1) != 0) goto LAB_710083316c;
              if ((uVar39 >> 1 & 1) != 0) {
                if (local_280 == FUN_710080da60) {
                  uVar25 = FUN_710081fa20();
                }
                else {
                  uVar25 = FUN_71008087c0(param_1,local_228,0,iVar32);
                }
                if (bVar8) goto LAB_7100833240;
                if (iVar38 < iVar12) goto LAB_7100833278;
                plVar41 = (long *)*param_4;
                iVar13 = (int)param_4[3];
                if (iVar12 < 0x20) {
                  if ((iVar13 < 0) && (*(int *)(param_4 + 3) = iVar13 + 8, iVar13 + 8 < 1)) {
                    plVar41 = (long *)(param_4[1] + (long)iVar13);
                  }
                  else {
                    *param_4 = (long)plVar41 + 0xfU & 0xfffffffffffffff8;
                  }
                  puVar19 = (undefined8 *)*plVar41;
                  goto LAB_71008332cc;
                }
                if ((iVar13 < 0) && (*(int *)(param_4 + 3) = iVar13 + 8, iVar13 + 8 < 1)) {
                  plVar41 = (long *)(param_4[1] + (long)iVar13);
                }
                else {
                  *param_4 = (long)plVar41 + 0xfU & 0xfffffffffffffff8;
                }
                puVar19 = (undefined8 *)*plVar41;
                iVar38 = iVar38 + 1;
                goto LAB_7100833308;
              }
              if (bVar8) {
                if (iVar13 < local_250) {
                  puVar40 = (undefined4 *)local_200[iVar13];
                }
                else {
                  puVar40 = (undefined4 *)FUN_7100830b18(iVar13,param_4,&local_250);
                  uVar25 = extraout_x9_02;
                }
              }
              else {
                iVar12 = iVar38 + 1;
                if (iVar38 < local_250) {
                  puVar40 = (undefined4 *)local_200[iVar13];
                  iVar38 = iVar12;
                }
                else {
                  plVar41 = (long *)*param_4;
                  iVar38 = (int)param_4[3];
                  if (local_250 < 0x20) {
                    if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                      plVar41 = (long *)(param_4[1] + (long)iVar38);
                    }
                    else {
                      *param_4 = (long)plVar41 + 0xfU & 0xfffffffffffffff8;
                    }
                    puVar40 = (undefined4 *)*plVar41;
                    local_200[local_250] = (long)puVar40;
                    local_250 = local_250 + 1;
                    iVar38 = iVar12;
                  }
                  else {
                    if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                      plVar41 = (long *)(param_4[1] + (long)iVar38);
                    }
                    else {
                      *param_4 = (long)plVar41 + 0xfU & 0xfffffffffffffff8;
                    }
                    puVar40 = (undefined4 *)*plVar41;
                    iVar38 = iVar12;
                  }
                }
              }
              *puVar40 = (int)uVar25;
            }
            else {
              if (bVar8) {
                if (iVar13 < local_250) {
                  puVar27 = (undefined2 *)local_200[iVar13];
                }
                else {
                  puVar27 = (undefined2 *)FUN_7100830b18(iVar13,param_4,&local_250);
                  uVar25 = extraout_x9_00;
                }
              }
              else {
                iVar12 = iVar38 + 1;
                if (iVar38 < local_250) {
                  puVar27 = (undefined2 *)local_200[iVar13];
                  iVar38 = iVar12;
                }
                else {
                  puVar19 = (undefined8 *)*param_4;
                  iVar38 = (int)param_4[3];
                  if (local_250 < 0x20) {
                    if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                      puVar19 = (undefined8 *)(param_4[1] + (long)iVar38);
                    }
                    else {
                      *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                    }
                    puVar27 = (undefined2 *)*puVar19;
                    local_200[local_250] = (long)puVar27;
                    local_250 = local_250 + 1;
                    iVar38 = iVar12;
                  }
                  else {
                    if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                      puVar19 = (undefined8 *)(param_4[1] + (long)iVar38);
                    }
                    else {
                      *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                    }
                    puVar27 = (undefined2 *)*puVar19;
                    iVar38 = iVar12;
                  }
                }
              }
              *puVar27 = (short)uVar25;
            }
          }
          else {
            if (bVar8) {
              if (iVar13 < local_250) {
                puVar26 = (undefined1 *)local_200[iVar13];
              }
              else {
                puVar26 = (undefined1 *)FUN_7100830b18(iVar13,param_4,&local_250);
                uVar25 = extraout_x9;
              }
            }
            else {
              iVar12 = iVar38 + 1;
              if (iVar38 < local_250) {
                puVar26 = (undefined1 *)local_200[iVar13];
                iVar38 = iVar12;
              }
              else {
                puVar19 = (undefined8 *)*param_4;
                iVar38 = (int)param_4[3];
                if (local_250 < 0x20) {
                  if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                    puVar19 = (undefined8 *)(param_4[1] + (long)iVar38);
                  }
                  else {
                    *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                  }
                  puVar26 = (undefined1 *)*puVar19;
                  local_200[local_250] = (long)puVar26;
                  local_250 = local_250 + 1;
                  iVar38 = iVar12;
                }
                else {
                  if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                    puVar19 = (undefined8 *)(param_4[1] + (long)iVar38);
                  }
                  else {
                    *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                  }
                  puVar26 = (undefined1 *)*puVar19;
                  iVar38 = iVar12;
                }
              }
            }
            *puVar26 = (char)uVar25;
          }
        }
        else {
LAB_710083316c:
          if (bVar8) {
LAB_7100833240:
            if (iVar13 < iVar12) {
              puVar19 = (undefined8 *)local_200[iVar13];
            }
            else {
              puVar19 = (undefined8 *)FUN_7100830b18(iVar13,param_4,&local_250);
              uVar25 = extraout_x9_01;
            }
          }
          else if (iVar38 < local_250) {
LAB_7100833278:
            puVar19 = (undefined8 *)local_200[iVar13];
            iVar38 = iVar38 + 1;
          }
          else {
            plVar41 = (long *)*param_4;
            iVar13 = (int)param_4[3];
            if (local_250 < 0x20) {
              if ((iVar13 < 0) && (*(int *)(param_4 + 3) = iVar13 + 8, iVar13 + 8 < 1)) {
                plVar41 = (long *)(param_4[1] + (long)iVar13);
              }
              else {
                *param_4 = (long)plVar41 + 0xfU & 0xfffffffffffffff8;
              }
              puVar19 = (undefined8 *)*plVar41;
LAB_71008332cc:
              local_250 = iVar12 + 1;
              local_200[iVar12] = (long)puVar19;
              iVar38 = iVar38 + 1;
            }
            else {
              if ((iVar13 < 0) && (*(int *)(param_4 + 3) = iVar13 + 8, iVar13 + 8 < 1)) {
                plVar41 = (long *)(param_4[1] + (long)iVar13);
              }
              else {
                *param_4 = (long)plVar41 + 0xfU & 0xfffffffffffffff8;
              }
              puVar19 = (undefined8 *)*plVar41;
              iVar38 = iVar38 + 1;
            }
          }
LAB_7100833308:
          *puVar19 = uVar25;
        }
        local_254 = local_254 + 1;
LAB_71008333f0:
        iVar36 = iVar14 + iVar36 + ((int)pbVar23 - (int)local_228);
        goto LAB_7100830e50;
      }
      uVar28 = uVar39 & 0x10;
      if (iVar12 == 1) {
        if (uVar35 == 0) {
          uVar35 = 0xffffffffffffffff;
        }
        if ((uVar39 & 1) != 0) {
          if ((uVar39 & 0x10) == 0) {
            if ((uVar39 >> 7 & 1) == 0) {
              if (bVar8) {
                if (iVar13 < local_250) {
                  puVar42 = (uint *)local_200[iVar13];
                }
                else {
                  puVar42 = (uint *)FUN_7100830b18(iVar13,param_4,&local_250);
                }
              }
              else {
                iVar12 = iVar38 + 1;
                if (iVar38 < local_250) {
                  puVar42 = (uint *)local_200[iVar13];
                  iVar38 = iVar12;
                }
                else {
                  puVar19 = (undefined8 *)*param_4;
                  iVar38 = (int)param_4[3];
                  if (local_250 < 0x20) {
                    if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                      puVar19 = (undefined8 *)(param_4[1] + (long)iVar38);
                    }
                    else {
                      *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                    }
                    puVar42 = (uint *)*puVar19;
                    local_200[local_250] = (long)puVar42;
                    iVar38 = iVar12;
                    local_250 = local_250 + 1;
                  }
                  else {
                    if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                      puVar19 = (undefined8 *)(param_4[1] + (long)iVar38);
                    }
                    else {
                      *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                    }
                    puVar42 = (uint *)*puVar19;
                    iVar38 = iVar12;
                  }
                }
              }
              uVar43 = 0;
              puVar22 = (uint *)0x0;
              plVar41 = (long *)0x0;
            }
            else {
              if (bVar8) {
                if (iVar13 < local_250) {
                  plVar41 = (long *)local_200[iVar13];
                }
                else {
                  plVar41 = (long *)FUN_7100830b18(iVar13,param_4,&local_250);
                }
              }
              else {
                iVar12 = iVar38 + 1;
                if (iVar38 < local_250) {
                  plVar41 = (long *)local_200[iVar13];
                  iVar38 = iVar12;
                }
                else {
                  puVar19 = (undefined8 *)*param_4;
                  iVar38 = (int)param_4[3];
                  if (local_250 < 0x20) {
                    local_250 = local_250 + 1;
                    if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                      puVar19 = (undefined8 *)(param_4[1] + (long)iVar38);
                    }
                    else {
                      *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                    }
                    plVar41 = (long *)*puVar19;
                    local_200[iVar14] = (long)plVar41;
                    iVar38 = iVar12;
                  }
                  else {
                    if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                      puVar19 = (undefined8 *)(param_4[1] + (long)iVar38);
                    }
                    else {
                      *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                    }
                    plVar41 = (long *)*puVar19;
                    iVar38 = iVar12;
                  }
                }
              }
              if (plVar41 == (long *)0x0) goto switchD_7100830fa8_caseD_45;
              puVar22 = (uint *)FUN_710081c1c0(0x80);
              if (puVar22 == (uint *)0x0) goto LAB_71008326b4;
              uVar3 = *(ushort *)((long)plVar44 + 10);
              uVar4 = *(ushort *)(plVar44 + 1);
              *plVar41 = (long)puVar22;
              if (uVar4 <= uVar3) {
                if (0xfff6 < uVar4) goto LAB_71008326b4;
                lVar17 = FUN_71008141e0(*plVar44,(ulong)(uVar4 + 8) << 3);
                if (lVar17 == 0) goto LAB_71008326b4;
                *plVar44 = lVar17;
                *(short *)(plVar44 + 1) = (short)(uVar4 + 8);
              }
              uVar43 = 0x20;
              *(ushort *)((long)plVar44 + 10) = uVar3 + 1;
              *(long **)(*plVar44 + (ulong)uVar3 * 8) = plVar41;
              puVar42 = puVar22;
            }
          }
          else {
            uVar43 = 0;
            puVar22 = (uint *)0x0;
            plVar41 = (long *)0x0;
          }
          local_2d8 = &DAT_7100af4978;
          uVar39 = 0;
LAB_7100831ff4:
          uVar15 = FUN_7100809520();
          if (uVar15 == uVar39) goto LAB_7100833428;
          uVar15 = uVar39 + 1;
          bVar2 = *(byte *)*param_2;
          *param_2 = (long)((byte *)*param_2 + 1);
          local_228[(int)uVar39] = bVar2;
          *(int *)(param_2 + 1) = (int)param_2[1] + -1;
          if ((local_278 != 3) || (local_240[0] != 4)) {
            FUN_7100808340(local_240,0,8);
          }
          local_278 = FUN_7100823160(param_1,puVar42,local_228,(long)(int)uVar15,local_240);
          if (local_278 == -1) goto LAB_7100833428;
          if (local_278 == 0) {
            *puVar42 = 0;
LAB_7100832080:
            uVar31 = *puVar42;
            if (uVar31 != 0xffffffff) {
              FUN_7100808340(auStack_238,0,8);
              lVar17 = FUN_7100834b00();
              puVar1 = *(undefined **)(lVar17 + 0x40);
              if (*(undefined **)(lVar17 + 0x40) == (undefined *)0x0) {
                puVar1 = local_2d8;
              }
              iVar12 = (**(code **)(puVar1 + 0xe0))(param_1,local_230,uVar31,auStack_238);
              uVar31 = local_230[0] & 0xff;
              if (iVar12 != 1) {
                uVar31 = 0;
              }
            }
            if (local_100[(int)uVar31] != '\0') {
              iVar36 = iVar36 + uVar15;
              if ((local_278 != 3) || (local_240[0] != 4)) {
                uVar35 = uVar35 - 1;
              }
              if (uVar28 == 0) {
                puVar42 = puVar42 + 1;
                lVar17 = (long)puVar42 - (long)puVar22;
                if (plVar41 != (long *)0x0 && uVar43 <= (ulong)(lVar17 >> 2)) {
                  puVar22 = (uint *)FUN_71008141e0(puVar22,uVar43 << 3);
                  if (puVar22 == (uint *)0x0) goto LAB_71008326b4;
                  puVar42 = (uint *)((long)puVar22 + lVar17);
                  uVar43 = uVar43 << 1;
                  *plVar41 = (long)puVar22;
                }
              }
              uVar15 = 0;
              goto LAB_710083218c;
            }
            for (uVar35 = (ulong)uVar39; (int)uVar35 != -1; uVar35 = uVar35 - 1) {
              FUN_7100830b8c(param_1,local_228[uVar35],param_2);
            }
          }
          else {
            if (local_278 != -2) goto LAB_7100832080;
LAB_710083218c:
            uVar39 = uVar15;
            if ((0 < (int)param_2[1]) || (iVar12 = FUN_7100830c7c(param_1,param_2), iVar12 == 0))
            goto LAB_71008321c8;
            if (uVar39 != 0) goto LAB_7100833428;
          }
          goto LAB_71008321e8;
        }
        if ((uVar39 & 0x10) != 0) {
          iVar12 = 0;
          while (local_100[*(byte *)*param_2] != '\0') {
            *param_2 = (long)((byte *)*param_2 + 1);
            iVar12 = iVar12 + 1;
            iVar13 = (int)param_2[1] + -1;
            *(int *)(param_2 + 1) = iVar13;
            uVar35 = uVar35 - 1;
            if ((uVar35 == 0) ||
               ((iVar13 < 1 && (iVar13 = FUN_7100830c7c(param_1,param_2), iVar13 != 0))))
            goto LAB_7100832280;
          }
          if (iVar12 == 0) goto switchD_7100830fa8_caseD_45;
LAB_7100832280:
          iVar36 = iVar36 + iVar12;
          goto LAB_7100830e50;
        }
        if ((uVar39 >> 7 & 1) == 0) {
          if (bVar8) {
            if (iVar13 < local_250) {
              pbVar23 = (byte *)local_200[iVar13];
            }
            else {
              pbVar23 = (byte *)FUN_7100830b18(iVar13,param_4,&local_250);
            }
          }
          else {
            iVar12 = iVar38 + 1;
            if (iVar38 < local_250) {
              pbVar23 = (byte *)local_200[iVar13];
              iVar38 = iVar12;
            }
            else {
              puVar19 = (undefined8 *)*param_4;
              iVar38 = (int)param_4[3];
              if (local_250 < 0x20) {
                local_250 = local_250 + 1;
                if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                  puVar19 = (undefined8 *)(param_4[1] + (long)iVar38);
                }
                else {
                  *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                }
                pbVar23 = (byte *)*puVar19;
                local_200[iVar14] = (long)pbVar23;
                iVar38 = iVar12;
              }
              else {
                if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                  puVar19 = (undefined8 *)(param_4[1] + (long)iVar38);
                }
                else {
                  *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                }
                pbVar23 = (byte *)*puVar19;
                iVar38 = iVar12;
              }
            }
          }
          uVar43 = 0;
          plVar41 = (long *)0x0;
        }
        else {
          if (bVar8) {
            if (iVar13 < local_250) {
              plVar41 = (long *)local_200[iVar13];
            }
            else {
              plVar41 = (long *)FUN_7100830b18(iVar13,param_4,&local_250);
            }
          }
          else {
            iVar12 = iVar38 + 1;
            if (iVar38 < local_250) {
              plVar41 = (long *)local_200[iVar13];
              iVar38 = iVar12;
            }
            else {
              puVar19 = (undefined8 *)*param_4;
              iVar38 = (int)param_4[3];
              if (local_250 < 0x20) {
                local_250 = local_250 + 1;
                if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                  puVar19 = (undefined8 *)(param_4[1] + (long)iVar38);
                }
                else {
                  *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                }
                plVar41 = (long *)*puVar19;
                local_200[iVar14] = (long)plVar41;
                iVar38 = iVar12;
              }
              else {
                if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                  puVar19 = (undefined8 *)(param_4[1] + (long)iVar38);
                }
                else {
                  *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                }
                plVar41 = (long *)*puVar19;
                iVar38 = iVar12;
              }
            }
          }
          if (plVar41 == (long *)0x0) goto switchD_7100830fa8_caseD_45;
          pbVar23 = (byte *)FUN_710081c1c0(0x20);
          if (pbVar23 == (byte *)0x0) goto LAB_7100833498;
          uVar3 = *(ushort *)((long)plVar44 + 10);
          uVar4 = *(ushort *)(plVar44 + 1);
          *plVar41 = (long)pbVar23;
          if (uVar4 <= uVar3) {
            if (0xfff6 < uVar4) goto LAB_7100833460;
            lVar17 = FUN_71008141e0(*plVar44,(ulong)(uVar4 + 8) << 3);
            if (lVar17 == 0) goto LAB_7100833460;
            *plVar44 = lVar17;
            *(short *)(plVar44 + 1) = (short)(uVar4 + 8);
          }
          uVar43 = 0x20;
          *(ushort *)((long)plVar44 + 10) = uVar3 + 1;
          *(long **)(*plVar44 + (ulong)uVar3 * 8) = plVar41;
        }
        pbVar30 = pbVar23;
        do {
          pbVar24 = (byte *)*param_2;
          pbVar37 = pbVar30;
          if (local_100[*pbVar24] == '\0') goto LAB_7100832558;
          *(int *)(param_2 + 1) = (int)param_2[1] + -1;
          *param_2 = (long)(pbVar24 + 1);
          pbVar37 = pbVar30 + 1;
          *pbVar30 = *pbVar24;
          uVar29 = (long)pbVar37 - (long)pbVar23;
          if (plVar41 != (long *)0x0 && uVar43 <= uVar29) {
            uVar43 = uVar43 << 1;
            pbVar23 = (byte *)FUN_71008141e0(pbVar23,uVar43);
            if (pbVar23 == (byte *)0x0) goto LAB_7100833498;
            *plVar41 = (long)pbVar23;
            pbVar37 = pbVar23 + uVar29;
          }
          uVar35 = uVar35 - 1;
          if (uVar35 == 0) goto LAB_7100832558;
          pbVar30 = pbVar37;
        } while ((0 < (int)param_2[1]) || (iVar12 = FUN_7100830c7c(param_1,param_2), iVar12 == 0));
        if (pbVar37 != pbVar23) {
LAB_7100832558:
          iVar12 = (int)pbVar37 - (int)pbVar23;
          if ((int)pbVar37 == (int)pbVar23) goto switchD_7100830fa8_caseD_45;
          *pbVar37 = 0;
          if ((plVar41 != (long *)0x0 && (ulong)(long)(iVar12 + 1) < uVar43) &&
             (lVar17 = FUN_71008141e0(*plVar41), lVar17 != 0)) {
            *plVar41 = lVar17;
          }
          goto LAB_7100832da0;
        }
      }
      else {
        if (uVar35 == 0) {
          uVar35 = 1;
        }
        if ((uVar39 & 1) != 0) {
          if ((uVar39 & 0x10) == 0) {
            if ((uVar39 >> 7 & 1) == 0) {
              if (bVar8) {
                if (iVar13 < local_250) {
                  puVar40 = (undefined4 *)local_200[iVar13];
                }
                else {
                  puVar40 = (undefined4 *)FUN_7100830b18(iVar13,param_4,&local_250);
                }
              }
              else {
                iVar12 = iVar38 + 1;
                if (iVar38 < local_250) {
                  puVar40 = (undefined4 *)local_200[iVar13];
                  iVar38 = iVar12;
                }
                else {
                  puVar19 = (undefined8 *)*param_4;
                  iVar38 = (int)param_4[3];
                  if (local_250 < 0x20) {
                    if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                      puVar19 = (undefined8 *)(param_4[1] + (long)iVar38);
                    }
                    else {
                      *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                    }
                    puVar40 = (undefined4 *)*puVar19;
                    local_200[local_250] = (long)puVar40;
                    iVar38 = iVar12;
                    local_250 = local_250 + 1;
                  }
                  else {
                    if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                      puVar19 = (undefined8 *)(param_4[1] + (long)iVar38);
                    }
                    else {
                      *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                    }
                    puVar40 = (undefined4 *)*puVar19;
                    iVar38 = iVar12;
                  }
                }
              }
              uVar43 = 0;
              puVar20 = (undefined4 *)0x0;
              plVar41 = (long *)0x0;
            }
            else {
              if (bVar8) {
                if (iVar13 < local_250) {
                  plVar41 = (long *)local_200[iVar13];
                }
                else {
                  plVar41 = (long *)FUN_7100830b18(iVar13,param_4,&local_250);
                }
              }
              else {
                iVar12 = iVar38 + 1;
                if (iVar38 < local_250) {
                  plVar41 = (long *)local_200[iVar13];
                  iVar38 = iVar12;
                }
                else {
                  puVar19 = (undefined8 *)*param_4;
                  iVar38 = (int)param_4[3];
                  if (local_250 < 0x20) {
                    local_250 = local_250 + 1;
                    if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                      puVar19 = (undefined8 *)(param_4[1] + (long)iVar38);
                    }
                    else {
                      *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                    }
                    plVar41 = (long *)*puVar19;
                    local_200[iVar14] = (long)plVar41;
                    iVar38 = iVar12;
                  }
                  else {
                    if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                      puVar19 = (undefined8 *)(param_4[1] + (long)iVar38);
                    }
                    else {
                      *param_4 = (long)puVar19 + 0xfU & 0xfffffffffffffff8;
                    }
                    plVar41 = (long *)*puVar19;
                    iVar38 = iVar12;
                  }
                }
              }
              if (plVar41 == (long *)0x0) {
switchD_7100830fa8_caseD_45:
LAB_710083343c:
                if (plVar44 != (long *)0x0) {
                  if (local_254 == -1) {
LAB_7100833460:
                    for (uVar39 = 0; (int)uVar39 < (int)(uint)*(ushort *)((long)plVar44 + 10);
                        uVar39 = uVar39 + 1) {
                      lVar17 = *plVar44;
                      FUN_710081c200(**(undefined8 **)(lVar17 + (ulong)uVar39 * 8));
                      **(undefined8 **)(lVar17 + (ulong)uVar39 * 8) = 0;
                    }
                    local_254 = -1;
                  }
                  if (*plVar44 != 0) {
                    FUN_710081c200();
                  }
                }
                return local_254;
              }
              puVar20 = (undefined4 *)FUN_710081c1c0(0x80);
              if (puVar20 == (undefined4 *)0x0) goto LAB_71008326b4;
              uVar3 = *(ushort *)((long)plVar44 + 10);
              uVar4 = *(ushort *)(plVar44 + 1);
              *plVar41 = (long)puVar20;
              if (uVar4 <= uVar3) {
                if (0xfff6 < uVar4) goto LAB_71008326b4;
                lVar17 = FUN_71008141e0(*plVar44,(ulong)(uVar4 + 8) << 3);
                if (lVar17 == 0) goto LAB_71008326b4;
                *plVar44 = lVar17;
                *(short *)(plVar44 + 1) = (short)(uVar4 + 8);
              }
              *(ushort *)((long)plVar44 + 10) = uVar3 + 1;
              *(long **)(*plVar44 + (ulong)uVar3 * 8) = plVar41;
              uVar43 = 0x20;
              puVar40 = puVar20;
            }
          }
          else {
            uVar43 = 0;
            puVar20 = (undefined4 *)0x0;
            plVar41 = (long *)0x0;
            puVar40 = (undefined4 *)0x0;
          }
          iVar12 = 0;
          do {
            iVar13 = FUN_7100809520();
            if (iVar13 == iVar12) goto LAB_7100833428;
            iVar13 = iVar12 + 1;
            bVar2 = *(byte *)*param_2;
            *param_2 = (long)((byte *)*param_2 + 1);
            local_228[iVar12] = bVar2;
            *(int *)(param_2 + 1) = (int)param_2[1] + -1;
            if ((local_278 != 3) || (local_230[0] != 4)) {
              FUN_7100808340(local_230,0,8);
            }
            local_278 = FUN_7100823160(param_1,puVar40,local_228,(long)iVar13,local_230);
            if (local_278 == -1) goto LAB_7100833428;
            if (local_278 == 0) {
              if (uVar28 == 0) {
                *puVar40 = 0;
              }
LAB_7100831990:
              uVar35 = uVar35 - 1;
LAB_7100831994:
              iVar36 = iVar36 + iVar13;
              if (uVar28 == 0) {
                lVar17 = (long)puVar40 - (long)puVar20;
                if (plVar41 != (long *)0x0 && uVar43 <= (ulong)(lVar17 >> 2)) {
                  puVar20 = (undefined4 *)FUN_71008141e0(puVar20,uVar43 << 3);
                  if (puVar20 == (undefined4 *)0x0) goto LAB_71008326b4;
                  puVar40 = (undefined4 *)((long)puVar20 + lVar17);
                  uVar43 = uVar43 << 1;
                  *plVar41 = (long)puVar20;
                }
                puVar40 = puVar40 + 1;
              }
              iVar12 = 0;
            }
            else {
              iVar12 = iVar13;
              if (local_278 != -2) {
                if ((local_278 != 3) || (local_230[0] != 4)) goto LAB_7100831990;
                goto LAB_7100831994;
              }
            }
            if (((int)param_2[1] < 1) && (iVar13 = FUN_7100830c7c(param_1,param_2), iVar13 != 0)) {
              if (iVar12 != 0) goto LAB_7100833428;
              break;
            }
          } while (uVar35 != 0);
          if ((plVar41 != (long *)0x0 && (ulong)((long)puVar40 - (long)puVar20 >> 2) < uVar43) &&
             (lVar17 = FUN_71008141e0(*plVar41), lVar17 != 0)) {
            *plVar41 = lVar17;
          }
          if (uVar28 == 0) {
            local_254 = local_254 + 1;
          }
          goto LAB_7100830e50;
        }
        if ((uVar39 & 0x10) == 0) {
          if ((uVar39 >> 7 & 1) == 0) {
            if (bVar8) {
              if (iVar13 < local_250) {
                lVar17 = local_200[iVar13];
              }
              else {
                lVar17 = FUN_7100830b18(iVar13,param_4,&local_250);
              }
            }
            else {
              iVar12 = iVar38 + 1;
              if (iVar38 < local_250) {
                lVar17 = local_200[iVar13];
                iVar38 = iVar12;
              }
              else {
                plVar41 = (long *)*param_4;
                iVar38 = (int)param_4[3];
                if (local_250 < 0x20) {
                  if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                    plVar41 = (long *)(param_4[1] + (long)iVar38);
                  }
                  else {
                    *param_4 = (long)plVar41 + 0xfU & 0xfffffffffffffff8;
                  }
                  lVar17 = *plVar41;
                  local_200[local_250] = lVar17;
                  local_250 = local_250 + 1;
                  iVar38 = iVar12;
                }
                else {
                  if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                    plVar41 = (long *)(param_4[1] + (long)iVar38);
                  }
                  else {
                    *param_4 = (long)plVar41 + 0xfU & 0xfffffffffffffff8;
                  }
                  lVar17 = *plVar41;
                  iVar38 = iVar12;
                }
              }
            }
            plVar41 = (long *)0x0;
          }
          else {
            if (bVar8) {
              if (iVar13 < local_250) {
                plVar41 = (long *)local_200[iVar13];
              }
              else {
                plVar41 = (long *)FUN_7100830b18(iVar13,param_4,&local_250);
              }
            }
            else {
              iVar12 = iVar38 + 1;
              if (iVar38 < local_250) {
                plVar41 = (long *)local_200[iVar13];
                iVar38 = iVar12;
              }
              else {
                plVar41 = (long *)*param_4;
                iVar38 = (int)param_4[3];
                if (local_250 < 0x20) {
                  local_250 = local_250 + 1;
                  if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                    plVar41 = (long *)(param_4[1] + (long)iVar38);
                  }
                  else {
                    *param_4 = (long)plVar41 + 0xfU & 0xfffffffffffffff8;
                  }
                  plVar41 = (long *)*plVar41;
                  local_200[iVar14] = (long)plVar41;
                  iVar38 = iVar12;
                }
                else {
                  if ((iVar38 < 0) && (*(int *)(param_4 + 3) = iVar38 + 8, iVar38 + 8 < 1)) {
                    plVar41 = (long *)(param_4[1] + (long)iVar38);
                  }
                  else {
                    *param_4 = (long)plVar41 + 0xfU & 0xfffffffffffffff8;
                  }
                  plVar41 = (long *)*plVar41;
                  iVar38 = iVar12;
                }
              }
            }
            if (plVar41 == (long *)0x0) goto switchD_7100830fa8_caseD_45;
            lVar17 = FUN_710081c1c0(uVar35);
            if (lVar17 == 0) goto LAB_7100833498;
            uVar3 = *(ushort *)((long)plVar44 + 10);
            uVar4 = *(ushort *)(plVar44 + 1);
            *plVar41 = lVar17;
            if (uVar4 <= uVar3) {
              if (0xfff6 < uVar4) goto LAB_7100833460;
              lVar21 = FUN_71008141e0(*plVar44,(ulong)(uVar4 + 8) << 3);
              if (lVar21 == 0) goto LAB_7100833460;
              *plVar44 = lVar21;
              *(short *)(plVar44 + 1) = (short)(uVar4 + 8);
            }
            *(ushort *)((long)plVar44 + 10) = uVar3 + 1;
            *(long **)(*plVar44 + (ulong)uVar3 * 8) = plVar41;
          }
          uVar43 = FUN_7100830cec(param_1,lVar17,1,uVar35,param_2);
          if (uVar43 != 0) {
            if ((plVar41 != (long *)0x0 && uVar43 < uVar35) &&
               (lVar17 = FUN_71008141e0(*plVar41,uVar43), lVar17 != 0)) {
              *plVar41 = lVar17;
            }
            iVar36 = iVar36 + (int)uVar43;
            local_254 = local_254 + 1;
            goto LAB_7100830e50;
          }
        }
        else {
          lVar17 = 0;
          do {
            iVar12 = (int)param_2[1];
            if ((int)uVar35 <= iVar12) {
              lVar17 = lVar17 + uVar35;
              *param_2 = *param_2 + uVar35;
              *(int *)(param_2 + 1) = iVar12 - (int)uVar35;
              goto LAB_7100831af0;
            }
            lVar17 = lVar17 + iVar12;
            uVar35 = uVar35 - (long)iVar12;
            *param_2 = *param_2 + (long)iVar12;
            iVar12 = FUN_7100830c7c(param_1,param_2);
          } while (iVar12 == 0);
          if (lVar17 != 0) {
LAB_7100831af0:
            iVar36 = iVar36 + (int)lVar17;
            goto LAB_7100830e50;
          }
        }
      }
    }
  }
LAB_7100833428:
  if ((local_254 != 0) && ((*(ushort *)(param_2 + 2) >> 6 & 1) == 0)) goto LAB_710083343c;
LAB_7100833498:
  if (plVar44 == (long *)0x0) {
    return -1;
  }
  goto LAB_7100833460;
LAB_71008321c8:
  if (uVar35 == 0) goto LAB_71008321e8;
  goto LAB_7100831ff4;
LAB_71008321e8:
  if (uVar28 == 0) {
    *puVar42 = 0;
    if ((plVar41 != (long *)0x0 && ((long)puVar42 - (long)puVar22 >> 2) + 1U < uVar43) &&
       (lVar17 = FUN_71008141e0(*plVar41,((long)puVar42 - (long)puVar22) + 4), lVar17 != 0)) {
      *plVar41 = lVar17;
    }
    goto LAB_7100832a18;
  }
  goto LAB_7100830e50;
}



// ===== FUN_71008334e0 @ 71008334e0 (size=524) =====

ulong FUN_71008334e0(ulong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  
  uVar4 = (uint)param_1;
  uVar2 = (uint)((ulong)DAT_7100af5d28 >> 0x10);
  uVar3 = (uint)((ulong)DAT_7100af5d28 >> 0x20);
  if (param_2 == 1) {
    if ((((uint)DAT_7100af5580 & 0x1fffff) <= uVar4) &&
       (uVar4 <= (uVar2 & 0x1fffff) + (uVar3 >> 5 & 0xff))) {
      iVar7 = 0;
      iVar8 = 0x147;
      do {
        iVar1 = (iVar8 + iVar7) / 2;
        lVar6 = (long)iVar1 * 6;
        uVar2 = *(uint *)((long)&DAT_7100af5580 + lVar6);
        if ((uVar2 >> 0x15 & 0xff) + (uVar2 & 0x1fffff) < uVar4) {
          iVar7 = iVar1 + 1;
        }
        else {
          if ((uVar2 & 0x1fffff) <= uVar4) {
            uVar2 = uVar2 >> 0x1d & 3;
            if (uVar2 == 1) {
              return (ulong)(uVar4 + (int)((long)(((ulong)(*(ushort *)
                                                            ((long)&DAT_7100af5580 + lVar6 + 2) >>
                                                          0xf) |
                                                  (ulong)*(ushort *)
                                                          ((long)&DAT_7100af5580 + lVar6 + 4) << 1)
                                                 << 0x2f) >> 0x2f));
            }
            if (uVar2 == 3) {
              return (ulong)(uVar4 + 1);
            }
            if (uVar2 != 0) {
              return param_1;
            }
            uVar5 = (ulong)(*(ushort *)((long)&DAT_7100af5580 + lVar6 + 2) >> 0xf) |
                    (ulong)*(ushort *)((long)&DAT_7100af5580 + lVar6 + 4) << 1;
            if (uVar5 == 0) {
              if ((param_1 & 1) == 0) {
                uVar4 = uVar4 + 1;
              }
              return (ulong)uVar4;
            }
            uVar2 = uVar4 + 1 & 0xfffffffe;
            if ((int)((long)(uVar5 << 0x2f) >> 0x2f) != 1) {
              uVar2 = uVar4;
            }
            return (ulong)uVar2;
          }
          iVar8 = iVar1 + -1;
        }
      } while (iVar7 <= iVar8);
    }
  }
  else if (((param_2 == 2) && (((uint)DAT_7100af5580 & 0x1fffff) <= uVar4)) &&
          (uVar4 <= (uVar2 & 0x1fffff) + (uVar3 >> 5 & 0xff))) {
    iVar7 = 0;
    iVar8 = 0x147;
    do {
      iVar1 = (iVar8 + iVar7) / 2;
      lVar6 = (long)iVar1 * 6;
      uVar2 = *(uint *)((long)&DAT_7100af5580 + lVar6);
      if ((uVar2 >> 0x15 & 0xff) + (uVar2 & 0x1fffff) < uVar4) {
        iVar7 = iVar1 + 1;
      }
      else {
        if ((uVar2 & 0x1fffff) <= uVar4) {
          uVar2 = uVar2 >> 0x1d & 3;
          if (uVar2 == 2) {
            return (ulong)(uVar4 + (int)((long)(((ulong)(*(ushort *)
                                                          ((long)&DAT_7100af5580 + lVar6 + 2) >> 0xf
                                                        ) |
                                                (ulong)*(ushort *)
                                                        ((long)&DAT_7100af5580 + lVar6 + 4) << 1) <<
                                               0x2f) >> 0x2f));
          }
          if (uVar2 == 3) {
            return (ulong)(uVar4 - 1);
          }
          if (uVar2 != 0) {
            return param_1;
          }
          uVar5 = (ulong)(*(ushort *)((long)&DAT_7100af5580 + lVar6 + 2) >> 0xf) |
                  (ulong)*(ushort *)((long)&DAT_7100af5580 + lVar6 + 4) << 1;
          if (uVar5 != 0) {
            if ((int)((long)(uVar5 << 0x2f) >> 0x2f) != 1) {
              return param_1;
            }
            return (ulong)(uVar4 - ((param_1 & 1) == 0));
          }
          return (ulong)(uVar4 & 0xfffffffe);
        }
        iVar8 = iVar1 + -1;
      }
    } while (iVar7 <= iVar8);
  }
  return param_1;
}



// ===== FUN_7100833700 @ 7100833700 (size=200) =====

undefined8 FUN_7100833700(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar3 = param_3[2];
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)*param_3;
    do {
      while( true ) {
        iVar1 = *(int *)(param_3 + 1);
        *(int *)(param_3 + 1) = iVar1 + -1;
        if (iVar1 < 1) goto LAB_7100833794;
        lVar5 = puVar4[1];
        if (lVar5 == 0) break;
        uVar2 = FUN_710082d2e0(param_1,param_2,*puVar4,lVar5 << 2);
        if ((int)uVar2 == -1) {
          *(undefined4 *)(param_3 + 1) = 0;
          param_3[2] = 0;
          return uVar2;
        }
        puVar4 = puVar4 + 2;
        lVar3 = param_3[2] - lVar5;
        param_3[2] = lVar3;
        if (lVar3 == 0) goto LAB_7100833794;
      }
      puVar4 = puVar4 + 2;
    } while (lVar3 != 0);
  }
LAB_7100833794:
  *(undefined4 *)(param_3 + 1) = 0;
  param_3[2] = 0;
  return 0;
}



// ===== FUN_71008337e0 @ 71008337e0 (size=32) =====

bool FUN_71008337e0(void)

{
  int iVar1;
  
  iVar1 = FUN_710081ba40();
  return iVar1 - 3U < 0xfffffffc;
}



// ===== FUN_7100833800 @ 7100833800 (size=36) =====

bool FUN_7100833800(void)

{
  int iVar1;
  
  iVar1 = FUN_710081ba40();
  return iVar1 == 0 || (iVar1 == 0x1a || iVar1 == 0x1b);
}



// ===== FUN_7100833840 @ 7100833840 (size=92) =====

bool FUN_7100833840(int param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_710081ba40();
  bVar2 = true;
  if ((iVar1 != 8) && (bVar2 = false, iVar1 == 3)) {
    iVar1 = FUN_7100817080(param_1);
    return iVar1 == param_1;
  }
  return bVar2;
}



// ===== FUN_71008338a0 @ 71008338a0 (size=40) =====

bool FUN_71008338a0(void)

{
  int iVar1;
  
  iVar1 = FUN_710081ba40();
  return 2 < iVar1 - 0x1aU && iVar1 - 3U < 0xfffffffc;
}



// ===== FUN_71008338e0 @ 71008338e0 (size=328) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71008338e0(undefined4 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  uint uVar6;
  undefined8 *puVar7;
  
  FUN_7100836200(&DAT_7100d232d0);
joined_r0x007100833914:
  lVar4 = _DAT_7100d232c8;
  _DAT_7100d232c8 = lVar4;
  if ((lVar4 == 0) || (uVar6 = *(int *)(lVar4 + 8) - 1, (int)uVar6 < 0)) {
LAB_7100833964:
    FUN_7100836220(&DAT_7100d232d0);
    return;
  }
  puVar7 = (undefined8 *)(lVar4 + 0x10 + (ulong)uVar6 * 8);
  do {
    if (param_2 != 0) {
      while (puVar7[0x40] != param_2) {
        uVar6 = uVar6 - 1;
        puVar7 = puVar7 + -1;
        if (uVar6 == 0xffffffff) goto LAB_7100833964;
      }
    }
    pcVar5 = (code *)*puVar7;
    if (*(int *)(lVar4 + 8) - 1U == uVar6) {
      *(uint *)(lVar4 + 8) = uVar6;
    }
    else {
      *puVar7 = 0;
    }
    if (pcVar5 != (code *)0x0) {
      uVar3 = 1 << (ulong)(uVar6 & 0x1f);
      iVar1 = *(int *)(lVar4 + 8);
      if ((uVar3 & *(uint *)(lVar4 + 0x310)) == 0) {
        (*pcVar5)();
LAB_71008339b4:
        iVar2 = *(int *)(lVar4 + 8);
      }
      else {
        if ((uVar3 & *(uint *)(lVar4 + 0x314)) != 0) {
          (*pcVar5)();
          goto LAB_71008339b4;
        }
        (*pcVar5)(param_1,puVar7[0x20]);
        iVar2 = *(int *)(lVar4 + 8);
      }
      if ((iVar2 != iVar1) || (_DAT_7100d232c8 != lVar4)) goto joined_r0x007100833914;
    }
    uVar6 = uVar6 - 1;
    puVar7 = puVar7 + -1;
    if (uVar6 == 0xffffffff) goto LAB_7100833964;
  } while( true );
}



// ===== FUN_7100833a40 @ 7100833a40 (size=208) =====

byte * FUN_7100833a40(long param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  bVar1 = *param_2;
  bVar3 = bVar1 == 0x5e;
  if (bVar3) {
    bVar1 = param_2[1];
    param_2 = param_2 + 2;
  }
  else {
    param_2 = param_2 + 1;
  }
  uVar7 = (uint)bVar1;
  lVar6 = param_1;
  do {
    lVar5 = lVar6 + 0x10;
    *(bool *)lVar6 = bVar3;
    *(bool *)(lVar6 + 1) = bVar3;
    *(bool *)(lVar6 + 2) = bVar3;
    *(bool *)(lVar6 + 3) = bVar3;
    *(bool *)(lVar6 + 4) = bVar3;
    *(bool *)(lVar6 + 5) = bVar3;
    *(bool *)(lVar6 + 6) = bVar3;
    *(bool *)(lVar6 + 7) = bVar3;
    *(bool *)(lVar6 + 8) = bVar3;
    *(bool *)(lVar6 + 9) = bVar3;
    *(bool *)(lVar6 + 10) = bVar3;
    *(bool *)(lVar6 + 0xb) = bVar3;
    *(bool *)(lVar6 + 0xc) = bVar3;
    *(bool *)(lVar6 + 0xd) = bVar3;
    *(bool *)(lVar6 + 0xe) = bVar3;
    *(bool *)(lVar6 + 0xf) = bVar3;
    lVar6 = lVar5;
  } while (lVar5 != param_1 + 0x100);
  if (bVar1 == 0) {
    pbVar4 = param_2 + -1;
  }
  else {
LAB_7100833a7c:
    do {
      pbVar4 = param_2;
      *(bool *)(param_1 + (int)uVar7) = !bVar3;
      uVar8 = uVar7;
      while( true ) {
        param_2 = pbVar4 + 1;
        bVar1 = *pbVar4;
        uVar7 = (uint)bVar1;
        if (bVar1 != 0x2d) break;
        bVar1 = pbVar4[1];
        if (bVar1 == 0x5d || (int)(uint)bVar1 < (int)uVar8) goto LAB_7100833a7c;
        pbVar4 = pbVar4 + 2;
        lVar6 = param_1 + (int)uVar8;
        do {
          lVar6 = lVar6 + 1;
          *(bool *)lVar6 = !bVar3;
          uVar7 = (int)lVar6 - (int)param_1;
          uVar9 = (uint)bVar1;
        } while (uVar9 != uVar7 && (int)uVar7 <= (int)(uint)bVar1);
        iVar2 = (uVar9 - uVar8) + -1;
        if ((int)uVar9 <= (int)uVar8) {
          iVar2 = 0;
        }
        uVar8 = iVar2 + uVar8 + 1;
      }
      if (bVar1 == 0x5d) {
        return param_2;
      }
    } while (uVar7 != 0);
  }
  return pbVar4;
}



// ===== FUN_7100833b20 @ 7100833b20 (size=32) =====

bool FUN_7100833b20(void)

{
  int iVar1;
  
  iVar1 = FUN_710081ba40();
  return iVar1 - 0xeU < 0xc;
}



// ===== FUN_7100833b40 @ 7100833b40 (size=172) =====

ulong * FUN_7100833b40(ulong *param_1,ulong *param_2,ulong param_3)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar4;
  
  bVar2 = (((ulong)param_2 | (ulong)param_1) & 7) != 0;
  uVar7 = param_3;
  if ((!bVar2 && 6 < param_3) && (bVar2 || param_3 != 7)) {
    do {
      uVar6 = *param_2;
      uVar7 = param_3;
      if ((uVar6 + 0xfefefefefefefeff & (uVar6 ^ 0xffffffffffffffff) & 0x8080808080808080) != 0)
      break;
      param_3 = param_3 - 8;
      puVar5 = param_1 + 1;
      *param_1 = uVar6;
      param_2 = param_2 + 1;
      param_1 = puVar5;
      uVar7 = param_3;
    } while (7 < param_3);
  }
  do {
    puVar5 = param_1;
    uVar6 = uVar7;
    if (uVar6 == 0) {
      return puVar5;
    }
    uVar7 = uVar6 - 1;
    cVar1 = *(char *)((long)param_2 + (param_3 - uVar6));
    param_1 = (ulong *)((long)puVar5 + 1);
    *(char *)puVar5 = cVar1;
  } while (cVar1 != '\0');
  if (uVar7 != 0) {
    puVar4 = param_1;
    do {
      puVar3 = (ulong *)((long)puVar4 + 1);
      *(char *)puVar4 = '\0';
      puVar4 = puVar3;
    } while (puVar3 != (ulong *)((long)puVar5 + uVar6));
    param_1 = (ulong *)((long)param_1 + uVar7);
  }
  if (puVar5 != (ulong *)0x0) {
    param_1 = puVar5;
  }
  return param_1;
}



// ===== FUN_7100833c00 @ 7100833c00 (size=32) =====

/* WARNING: Removing unreachable block (ram,0x007100833c1c) */

void FUN_7100833c00(void)

{
  FUN_71007749f0();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ===== FUN_7100833c20 @ 7100833c20 (size=364) =====

undefined8 FUN_7100833c20(long param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  
  puVar4 = (undefined4 *)FUN_7100834b00();
  lVar5 = FUN_710081e5c0(param_1,0x400);
  if (lVar5 == 0x400) {
    *puVar4 = 0x5b;
    return 0xffffffff;
  }
  lVar5 = FUN_710080eb40(param_1,0x3a);
  if (lVar5 == 0) {
    FUN_710081f760(0x7100d232e0,&DAT_7100af5d30,0x400);
  }
  else {
    FUN_710081f760(0x7100d232e0,param_1,0x400);
    param_1 = FUN_710080eb40(param_1,0x3a);
    param_1 = param_1 + 1;
  }
  pcVar1 = (char *)0x7100d232e0;
  lVar5 = FUN_710080eb40(0x7100d232e0,0x3a);
  if (lVar5 != 0) {
    pcVar1 = (char *)(lVar5 + 1);
  }
  if (*pcVar1 == '/') {
    iVar2 = FUN_7100833f40(puVar4,0x7100d232e0,param_1,0x400);
    if (iVar2 != -1) {
      iVar2 = FUN_7100835000(0x7100d232e0);
      if (iVar2 < 0) {
        *puVar4 = 0x13;
        return 0xffffffff;
      }
      *(undefined8 *)(puVar4 + 0x5e) =
           *(undefined8 *)((&PTR_PTR_s_stdnull_7100af8170)[iVar2] + 0xb0);
      if (*(code **)((&PTR_PTR_s_stdnull_7100af8170)[iVar2] + 0x58) == (code *)0x0) {
        *puVar4 = 0x58;
        return 0xffffffff;
      }
      iVar3 = (**(code **)((&PTR_PTR_s_stdnull_7100af8170)[iVar2] + 0x58))(puVar4,0x7100d232e0);
      if (iVar3 != -1) {
        FUN_7100834fe0(iVar2);
        FUN_710081f760(&DAT_7100af5d30,0x7100d232e0,0x400);
        return 0;
      }
    }
  }
  else {
    *puVar4 = 2;
  }
  return 0xffffffff;
}



// ===== FUN_7100833da0 @ 7100833da0 (size=192) =====

long FUN_7100833da0(long param_1,ulong param_2)

{
  undefined4 *puVar1;
  long lVar2;
  
  puVar1 = (undefined4 *)FUN_7100834b00();
  if (param_2 == 0) {
    if (param_1 != 0) {
      *puVar1 = 0x16;
      return 0;
    }
    param_1 = FUN_710081c1c0(0x400);
    param_2 = 0x400;
  }
  if (param_1 == 0) {
    *puVar1 = 0x16;
  }
  else {
    lVar2 = FUN_710081e5c0(&DAT_7100af5d30,0x400);
    if (lVar2 + 1U <= param_2) {
      FUN_710081f760(param_1,&DAT_7100af5d30,param_2);
      return param_1;
    }
    *puVar1 = 0x22;
  }
  return 0;
}



// ===== FUN_7100833e60 @ 7100833e60 (size=152) =====

undefined8 FUN_7100833e60(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined4 *)FUN_7100834b00();
  iVar1 = FUN_7100835000(param_1);
  if (iVar1 < 0) {
    *puVar2 = 0x13;
  }
  else {
    if (*(long *)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0xb8) != 0) {
      *(undefined8 *)(puVar2 + 0x5e) =
           *(undefined8 *)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x007100833ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0xb8))(puVar2,param_1,param_2);
      return uVar3;
    }
    *puVar2 = 0x58;
  }
  return 0xffffffff;
}



// ===== FUN_7100833f00 @ 7100833f00 (size=48) =====

/* WARNING: Removing unreachable block (ram,0x007100833f10) */

undefined8 FUN_7100833f00(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_71007750d0();
  return uVar1;
}



// ===== FUN_7100833f40 @ 7100833f40 (size=536) =====

ulong FUN_7100833f40(undefined4 *param_1,long param_2,char *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  undefined1 *puVar7;
  char cVar8;
  
  iVar1 = FUN_710081e5c0(param_2);
  if (iVar1 < param_4) {
    puVar7 = (undefined1 *)(param_2 + iVar1);
    if ((iVar1 == 0) || (puVar7[-1] == '/')) {
      cVar8 = *param_3;
    }
    else {
      *(undefined1 *)(param_2 + iVar1) = 0x2f;
      puVar7 = puVar7 + 1;
      cVar8 = *param_3;
    }
    if (cVar8 == '/') {
      lVar3 = FUN_710080eb40(param_2,0x2f);
      *(undefined1 *)(lVar3 + 1) = 0;
      puVar7 = (undefined1 *)(lVar3 + 1);
      cVar8 = *param_3;
      goto LAB_7100834028;
    }
    do {
      lVar3 = FUN_710080eb40(param_3,0x2f);
      if (lVar3 == 0) {
        uVar6 = FUN_710081ce00(param_3);
        iVar5 = (int)uVar6;
      }
      else {
        uVar6 = (lVar3 + 1) - (long)param_3;
        iVar5 = (int)uVar6;
      }
      if (iVar5 == 0) {
        uVar4 = FUN_710081ce00(param_2);
        if (((2 < uVar4) && (puVar7[-1] == '/')) && (puVar7[-2] != ':')) {
          puVar7[-1] = 0;
        }
        return uVar6 & 0xffffffff;
      }
      if ((cVar8 != '.') || (param_3[1] != '/' && param_3[1] != '\0')) {
        if ((*param_3 == '.') && ((param_3[1] == '.' && (param_3[2] == '/' || param_3[2] == '\0'))))
        {
          if (puVar7[-1] == '/') {
            puVar7[-1] = 0;
          }
          lVar3 = FUN_7100806500(param_2,0x2f);
          if (lVar3 == 0) {
            uVar2 = 2;
            goto LAB_7100834128;
          }
          iVar1 = (int)lVar3 - (int)param_2;
          puVar7 = (undefined1 *)(lVar3 + 1);
        }
        else {
          iVar1 = iVar1 + iVar5;
          if (param_4 <= iVar1) break;
          FUN_710081f760(puVar7,param_3,(long)iVar5);
          puVar7 = puVar7 + iVar5;
        }
      }
      param_3 = param_3 + iVar5;
      *puVar7 = 0;
      while( true ) {
        cVar8 = *param_3;
LAB_7100834028:
        if (cVar8 != '/') break;
        param_3 = param_3 + 1;
      }
    } while( true );
  }
  uVar2 = 0x5b;
LAB_7100834128:
  *param_1 = uVar2;
  return 0xffffffff;
}



// ===== FUN_7100834160 @ 7100834160 (size=140) =====

undefined8 FUN_7100834160(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined4 *)FUN_7100834b00();
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if (*(long *)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0x88) != 0) {
      *(undefined8 *)(puVar2 + 0x5e) =
           *(undefined8 *)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x0071008341cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0x88))
                        (puVar2,param_1,param_2,param_3);
      return uVar3;
    }
    *puVar2 = 0x58;
  }
  return 0xffffffff;
}



// ===== FUN_7100834200 @ 7100834200 (size=272) =====

undefined8 * FUN_7100834200(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  long lVar5;
  undefined *puVar6;
  code *pcVar7;
  
  puVar2 = (undefined8 *)FUN_710081c1c0(0x118);
  if (puVar2 == (undefined8 *)0x0) {
    puVar3 = (undefined4 *)FUN_710080e8e0();
    *puVar3 = 0xc;
  }
  else {
    puVar3 = (undefined4 *)FUN_7100834b00();
    iVar1 = FUN_7100835000(param_1);
    if (iVar1 == -1) {
      *puVar3 = 0x13;
    }
    else if (*(long *)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0x78) == 0) {
      *puVar3 = 0x58;
    }
    else {
      *(undefined8 *)(puVar3 + 0x5e) =
           *(undefined8 *)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0xb0);
      puVar6 = (&PTR_PTR_s_stdnull_7100af8170)[iVar1];
      piVar4 = (int *)FUN_710081c1c0(*(long *)(puVar6 + 0x70) + 0x10);
      if (piVar4 == (int *)0x0) {
        *puVar3 = 0x3f;
      }
      else {
        *piVar4 = iVar1;
        pcVar7 = *(code **)(puVar6 + 0x78);
        *(int **)(piVar4 + 2) = piVar4 + 4;
        lVar5 = (*pcVar7)(puVar3,piVar4,param_1);
        if (lVar5 != 0) {
          *puVar2 = 0;
          puVar2[1] = piVar4;
          *(undefined4 *)(puVar2 + 2) = 0xffff;
          return puVar2;
        }
        FUN_710081c200(piVar4);
      }
    }
    FUN_710081c200(puVar2);
  }
  return (undefined8 *)0x0;
}



// ===== FUN_7100834320 @ 7100834320 (size=172) =====

undefined4 FUN_7100834320(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (param_1 == 0) {
    puVar3 = (undefined4 *)FUN_710080e8e0();
    uVar2 = 0xffffffff;
    *puVar3 = 9;
  }
  else {
    piVar4 = *(int **)(param_1 + 8);
    puVar3 = (undefined4 *)FUN_7100834b00();
    if (piVar4 == (int *)0x0) {
      uVar2 = 0xffffffff;
    }
    else {
      iVar1 = *piVar4;
      if (*(long *)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0x90) == 0) {
        uVar2 = 0xffffffff;
        *puVar3 = 0x58;
      }
      else {
        *(undefined8 *)(puVar3 + 0x5e) =
             *(undefined8 *)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0xb0);
        uVar2 = (**(code **)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0x90))(puVar3,piVar4);
      }
      FUN_710081c200(piVar4);
    }
    FUN_710081c200(param_1);
  }
  return uVar2;
}



// ===== FUN_71008343e0 @ 71008343e0 (size=260) =====

undefined4 FUN_71008343e0(long *param_1,undefined2 *param_2,long *param_3)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined1 auStack_168 [2];
  undefined2 local_166;
  uint local_164;
  undefined1 auStack_100 [256];
  
  if (param_1 == (long *)0x0) {
    return 9;
  }
  if (param_3 != (long *)0x0) {
    iVar2 = FUN_7100834160(param_1[1],auStack_100,auStack_168);
    if (iVar2 < 0) {
      puVar4 = (undefined4 *)FUN_710080e8e0();
      uVar1 = *puVar4;
      *param_3 = 0;
      piVar5 = (int *)FUN_710080e8e0();
      if (*piVar5 != 2) {
        return uVar1;
      }
      puVar4 = (undefined4 *)FUN_710080e8e0();
      *puVar4 = 0;
    }
    else {
      *param_1 = *param_1 + 1;
      lVar3 = FUN_710081e5c0(auStack_100,0x100);
      if (lVar3 == 0x100) {
        puVar4 = (undefined4 *)FUN_710080e8e0();
        *puVar4 = 0x8b;
        return 0x8b;
      }
      FUN_710081f760((long)param_2 + 3,auStack_100,0x100);
      *param_2 = local_166;
      *(byte *)(param_2 + 1) = (byte)(local_164 >> 0xc) & 0xf;
      *param_3 = (long)param_2;
    }
    return 0;
  }
  return 0xe;
}



// ===== FUN_7100834500 @ 7100834500 (size=64) =====

long FUN_7100834500(long param_1)

{
  int iVar1;
  int *piVar2;
  long local_8;
  
  local_8 = param_1 + 0x10;
  iVar1 = FUN_71008343e0(param_1,local_8,&local_8);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_710080e8e0();
    *piVar2 = iVar1;
    local_8 = 0;
  }
  return local_8;
}



// ===== FUN_7100834540 @ 7100834540 (size=1100) =====

/* WARNING: Type propagation algorithm not settling */

ulong FUN_7100834540(byte *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  bool bVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  
  pbVar5 = param_2;
LAB_7100834568:
  bVar1 = *param_1;
  bVar3 = bVar1 == 0x3f;
  pbVar2 = param_1 + 1;
  if (bVar3) goto LAB_7100834670;
  do {
    pbVar11 = pbVar2;
    uVar8 = (uint)bVar1;
    if (bVar1 < 0x3f || bVar3) {
      if (uVar8 == 0) {
        if (((param_3 >> 3 & 1) != 0) && (*pbVar5 == 0x2f)) {
          return 0;
        }
        return (ulong)(*pbVar5 != 0);
      }
      if (uVar8 == 0x2a) goto code_r0x007100834588;
    }
    else {
      if (uVar8 == 0x5b) {
        bVar1 = *pbVar5;
        uVar8 = (uint)bVar1;
        if (bVar1 == 0) {
          return 1;
        }
        if ((bVar1 == 0x2f) && ((param_3 >> 1 & 1) != 0)) {
          return 1;
        }
        bVar12 = param_1[1];
        uVar9 = (uint)bVar12;
        if (bVar12 == 0x21 || bVar12 == 0x5e) {
          uVar9 = (uint)param_1[2];
          pbVar11 = param_1 + 2;
          uVar14 = param_3 & 0x10;
          if ((param_3 >> 4 & 1) == 0) {
            param_1 = param_1 + 3;
            if (uVar9 == 0x5d) {
              pbVar5 = pbVar5 + 1;
              goto LAB_7100834568;
            }
          }
          else {
LAB_710083470c:
            param_1 = pbVar11 + 1;
            uVar8 = bVar1 + 0x20 & 0xff;
            if (((&DAT_71009d32f1)[bVar1] & 3) != 1) {
              uVar8 = (uint)bVar1;
            }
            if (uVar9 == 0x5d) {
              bVar3 = false;
              goto LAB_71008347a8;
            }
            uVar14 = 0x10;
          }
        }
        else {
          uVar14 = param_3 & 0x10;
          if ((param_3 >> 4 & 1) != 0) goto LAB_710083470c;
          if (uVar9 == 0x5d) {
            return 1;
          }
          param_1 = param_1 + 2;
        }
        bVar3 = false;
        break;
      }
      if ((uVar8 == 0x5c) && ((param_3 & 1) == 0)) {
        if (param_1[1] != 0) {
          pbVar11 = param_1 + 2;
          uVar8 = (uint)param_1[1];
        }
      }
    }
    bVar1 = *pbVar5;
    if (bVar1 != uVar8) {
      uVar9 = (uint)bVar1;
      if ((param_3 & 0x10) == 0) {
LAB_7100834914:
        if ((param_3 & 0x20) == 0 || uVar9 != 0) {
          return 1;
        }
        if (uVar8 != 0x2f || pbVar5 == param_2) {
          if (pbVar5 == param_2 + 1) {
            return (ulong)(*param_2 != 0x2f);
          }
          return 1;
        }
        return 0;
      }
      uVar14 = uVar8 + 0x20;
      if (((&DAT_71009d32f1)[uVar8] & 3) != 1) {
        uVar14 = uVar8;
      }
      uVar10 = uVar9 + 0x20;
      if (((&DAT_71009d32f1)[(uint)bVar1] & 3) != 1) {
        uVar10 = uVar9;
      }
      if (uVar14 != uVar10) goto LAB_7100834914;
    }
    while( true ) {
      pbVar5 = pbVar5 + 1;
      bVar1 = *pbVar11;
      bVar3 = bVar1 == 0x3f;
      pbVar2 = pbVar11 + 1;
      param_1 = pbVar11;
      if (!bVar3) break;
LAB_7100834670:
      pbVar11 = pbVar2;
      bVar1 = *pbVar5;
      if (bVar1 == 0) {
        return 1;
      }
      if (bVar1 == 0x2f) {
        if ((param_3 >> 1 & 1) != 0) {
          return 1;
        }
      }
      else if ((bVar1 == 0x2e) && ((param_3 >> 2 & 1) != 0)) {
        if (pbVar5 == param_2) {
          return 1;
        }
        if (((param_3 >> 1 & 1) != 0) && (pbVar5[-1] == 0x2f)) {
          return 1;
        }
      }
    }
  } while( true );
  do {
    if (uVar9 == 0x5c) {
      if ((param_3 & 1) == 0) {
        uVar9 = (uint)pbVar11[1];
        param_1 = pbVar11 + 2;
        goto joined_r0x007100834824;
      }
    }
    else {
joined_r0x007100834824:
      if (uVar9 == 0) {
        return 1;
      }
    }
    while( true ) {
      uVar10 = uVar9;
      if ((uVar14 != 0) && (uVar10 = uVar9 + 0x20 & 0xff, ((&DAT_71009d32f1)[uVar9] & 3) != 1)) {
        uVar10 = uVar9;
      }
      bVar1 = *param_1;
      if (bVar1 != 0x2d) {
        bVar4 = uVar8 == uVar10;
        pbVar11 = param_1;
        goto LAB_710083479c;
      }
      bVar1 = param_1[1];
      uVar6 = (ulong)bVar1;
      if (bVar1 != 0x5d && bVar1 != 0) break;
      param_1 = param_1 + 1;
      bVar3 = (bool)(bVar3 | uVar8 == uVar10);
      uVar9 = 0x2d;
    }
    pbVar11 = param_1 + 2;
    if ((bVar1 == 0x5c) && ((param_3 & 1) == 0)) {
      uVar6 = (ulong)param_1[2];
      if (param_1[2] == 0) {
        return 1;
      }
      pbVar11 = param_1 + 3;
    }
    uVar13 = (uint)uVar6;
    uVar9 = uVar13;
    if ((uVar14 != 0) && (uVar9 = uVar13 + 0x20 & 0xff, ((&DAT_71009d32f1)[uVar6] & 3) != 1)) {
      uVar9 = uVar13;
    }
    bVar4 = uVar10 <= uVar8 && uVar8 <= uVar9;
    bVar1 = *pbVar11;
LAB_710083479c:
    uVar9 = (uint)bVar1;
    bVar3 = (bool)(bVar3 | bVar4);
    param_1 = pbVar11 + 1;
  } while (uVar9 != 0x5d);
LAB_71008347a8:
  if ((bVar12 == 0x21 || bVar12 == 0x5e) == bVar3) {
    return 1;
  }
  pbVar5 = pbVar5 + 1;
  goto LAB_7100834568;
code_r0x007100834588:
  bVar1 = param_1[1];
  param_1 = pbVar11;
  while (bVar1 == 0x2a) {
    param_1 = param_1 + 1;
    bVar1 = *param_1;
  }
  bVar12 = *pbVar5;
  if ((bVar12 == 0x2e) && ((param_3 >> 2 & 1) != 0)) {
    if (pbVar5 == param_2) {
      return 1;
    }
    uVar6 = (ulong)(param_3 & 2);
    if ((param_3 >> 1 & 1) == 0) goto joined_r0x00710083490c;
    if (pbVar5[-1] == 0x2f) {
      return 1;
    }
    if (bVar1 == 0) {
LAB_710083496c:
      if ((param_3 >> 3 & 1) == 0) {
        lVar7 = FUN_710080eb40(pbVar5,0x2f);
        return (ulong)(lVar7 != 0);
      }
      return 0;
    }
    if (bVar1 != 0x2f) goto LAB_71008348dc;
  }
  else {
    if (bVar1 == 0) {
      if ((param_3 >> 1 & 1) == 0) {
        return (ulong)(param_3 & 2);
      }
      goto LAB_710083496c;
    }
    if ((bVar1 != 0x2f) || ((param_3 >> 1 & 1) == 0)) {
      if (bVar12 == 0) {
        return 1;
      }
LAB_71008348dc:
      while( true ) {
        uVar6 = FUN_7100834540(param_1,pbVar5,param_3 & 0xfffffffb);
        if ((int)uVar6 == 0) {
          return uVar6;
        }
        if ((bVar12 == 0x2f) && ((param_3 >> 1 & 1) != 0)) break;
        pbVar5 = pbVar5 + 1;
        bVar12 = *pbVar5;
        bVar1 = bVar12;
joined_r0x00710083490c:
        if (bVar1 == 0) {
          return uVar6;
        }
      }
      return uVar6;
    }
  }
  pbVar5 = (byte *)FUN_710080eb40(pbVar5,0x2f);
  if (pbVar5 == (byte *)0x0) {
    return 1;
  }
  goto LAB_7100834568;
}



// ===== FUN_71008349a0 @ 71008349a0 (size=156) =====

undefined8 FUN_71008349a0(undefined4 *param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  if (param_2 == -1) {
    return 0xffffffff;
  }
  puVar2 = (uint *)FUN_7100834d40(param_2);
  if (puVar2 == (uint *)0x0) {
    puVar4 = (undefined4 *)FUN_710080e8e0();
    *puVar4 = 9;
  }
  else {
    uVar1 = *puVar2;
    if (*(long *)((&PTR_PTR_s_stdnull_7100af8170)[uVar1] + 0x38) != 0) {
      *(undefined8 *)(param_1 + 0x5e) =
           *(undefined8 *)((&PTR_PTR_s_stdnull_7100af8170)[uVar1] + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x007100834a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)((&PTR_PTR_s_stdnull_7100af8170)[uVar1] + 0x38))
                        (param_1,*(undefined8 *)(puVar2 + 2),param_3);
      return uVar3;
    }
    *param_1 = 0x58;
  }
  return 0xffffffff;
}



// ===== FUN_7100834a40 @ 7100834a40 (size=156) =====

undefined8 FUN_7100834a40(undefined4 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined4 *)FUN_7100834b00();
  puVar3 = (uint *)FUN_7100834d40(param_1);
  if (puVar3 == (uint *)0x0) {
    *puVar2 = 9;
  }
  else {
    uVar1 = *puVar3;
    if (*(long *)((&PTR_PTR_s_stdnull_7100af8170)[uVar1] + 0xa0) != 0) {
      *(undefined8 *)(puVar2 + 0x5e) =
           *(undefined8 *)((&PTR_PTR_s_stdnull_7100af8170)[uVar1] + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x007100834ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)((&PTR_PTR_s_stdnull_7100af8170)[uVar1] + 0xa0))
                        (puVar2,*(undefined8 *)(puVar3 + 2),param_2);
      return uVar4;
    }
    *puVar2 = 0x58;
  }
  return 0xffffffff;
}



// ===== FUN_7100834ae0 @ 7100834ae0 (size=16) =====

undefined8 FUN_7100834ae0(undefined4 *param_1)

{
  *param_1 = 0x58;
  return 0xffffffff;
}



// ===== FUN_7100834b00 @ 7100834b00 (size=32) =====

/* WARNING: Removing unreachable block (ram,0x007100834b10) */

undefined8 FUN_7100834b00(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100774a10();
  return uVar1;
}



// ===== FUN_7100834b20 @ 7100834b20 (size=36) =====

/* WARNING: Removing unreachable block (ram,0x007100834b34) */

undefined8 FUN_7100834b20(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_71007751c0();
  return uVar1;
}



// ===== FUN_7100834b60 @ 7100834b60 (size=160) =====

void FUN_7100834b60(uint param_1)

{
  undefined *puVar1;
  
  if (0x3ff < param_1) {
    return;
  }
  FUN_71008361c0(0x7100d236e0);
  puVar1 = (&PTR_DAT_7100af6140)[(int)param_1];
  if ((puVar1 != (undefined *)0x0 && puVar1 != &DAT_7100af8160) &&
      (puVar1 != &DAT_7100af8150 && puVar1 != &DAT_7100af8140)) {
    FUN_710081c200();
  }
  (&PTR_DAT_7100af6140)[(int)param_1] = (undefined *)0x0;
  FUN_71008361e0(0x7100d236e0);
  return;
}



// ===== FUN_7100834c00 @ 7100834c00 (size=304) =====

ulong FUN_7100834c00(int param_1)

{
  long lVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  FUN_71008361c0(0x7100d236e0);
  ppuVar4 = &PTR_DAT_7100af6140;
  iVar7 = 0x400;
  iVar8 = 0;
  do {
    auVar10 = NEON_cmeq(*(undefined1 (*) [16])ppuVar4,0,8);
    auVar9 = NEON_cmeq(*(undefined1 (*) [16])((long)ppuVar4 + 0x10),0,8);
    auVar11[0] = auVar10[0] | auVar9[0];
    auVar11[1] = auVar10[1] | auVar9[1];
    auVar11[2] = auVar10[2] | auVar9[2];
    auVar11[3] = auVar10[3] | auVar9[3];
    auVar11[4] = auVar10[4] | auVar9[4];
    auVar11[5] = auVar10[5] | auVar9[5];
    auVar11[6] = auVar10[6] | auVar9[6];
    auVar11[7] = auVar10[7] | auVar9[7];
    auVar11[8] = auVar10[8] | auVar9[8];
    auVar11[9] = auVar10[9] | auVar9[9];
    auVar11[10] = auVar10[10] | auVar9[10];
    auVar11[0xb] = auVar10[0xb] | auVar9[0xb];
    auVar11[0xc] = auVar10[0xc] | auVar9[0xc];
    auVar11[0xd] = auVar10[0xd] | auVar9[0xd];
    auVar11[0xe] = auVar10[0xe] | auVar9[0xe];
    auVar11[0xf] = auVar10[0xf] | auVar9[0xf];
    auVar9 = NEON_umaxp(auVar11,auVar11,4);
    if (auVar9._0_8_ != 0) {
      uVar5 = (ulong)iVar8;
      lVar1 = uVar5 + 1;
      goto LAB_7100834ca8;
    }
    iVar8 = iVar8 + 4;
    ppuVar4 = (undefined **)((long)ppuVar4 + 0x20);
    iVar7 = iVar7 + -4;
  } while ((undefined1 (*) [16])ppuVar4 != (undefined1 (*) [16])&DAT_7100af8140);
  goto LAB_7100834d08;
  while (uVar5 = uVar5 + 1, uVar5 != (ulong)(iVar7 - 1) + lVar1) {
LAB_7100834ca8:
    if ((&PTR_DAT_7100af6140)[uVar5] == (undefined *)0x0) {
      uVar6 = uVar5 & 0xffffffff;
      piVar2 = (int *)FUN_710081c1c0(*(long *)((&PTR_PTR_s_stdnull_7100af8170)[param_1] + 8) + 0x10)
      ;
      (&PTR_DAT_7100af6140)[(int)uVar5] = (undefined *)piVar2;
      if (piVar2 == (int *)0x0) {
        puVar3 = (undefined4 *)FUN_710080e8e0();
        uVar6 = 0xffffffff;
        *puVar3 = 0xc;
      }
      else {
        piVar2[1] = 1;
        *piVar2 = param_1;
        *(int **)(piVar2 + 2) = piVar2 + 4;
      }
      goto LAB_7100834ce8;
    }
  }
LAB_7100834d08:
  puVar3 = (undefined4 *)FUN_710080e8e0();
  uVar6 = 0xffffffff;
  *puVar3 = 0x17;
LAB_7100834ce8:
  FUN_71008361e0(0x7100d236e0);
  return uVar6;
}



// ===== FUN_7100834d40 @ 7100834d40 (size=96) =====

undefined * FUN_7100834d40(uint param_1)

{
  undefined *puVar1;
  
  if (param_1 < 0x400) {
    FUN_71008361c0();
    puVar1 = (&PTR_DAT_7100af6140)[(int)param_1];
    FUN_71008361e0(0x7100d236e0);
    return puVar1;
  }
  return (undefined *)0x0;
}



// ===== FUN_7100834da0 @ 7100834da0 (size=268) =====

ulong FUN_7100834da0(int param_1)

{
  long lVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  FUN_71008361c0(0x7100d236e0);
  ppuVar2 = &PTR_DAT_7100af6140;
  puVar5 = (&PTR_DAT_7100af6140)[param_1];
  if (puVar5 == (undefined *)0x0) {
    FUN_71008361e0(0x7100d236e0);
    puVar4 = (undefined4 *)FUN_710080e8e0();
    *puVar4 = 9;
    return 0xffffffff;
  }
  iVar7 = 0x400;
  iVar8 = 0;
  do {
    auVar10 = NEON_cmeq(*(undefined1 (*) [16])ppuVar2,0,8);
    auVar9 = NEON_cmeq(*(undefined1 (*) [16])((long)ppuVar2 + 0x10),0,8);
    auVar11[0] = auVar10[0] | auVar9[0];
    auVar11[1] = auVar10[1] | auVar9[1];
    auVar11[2] = auVar10[2] | auVar9[2];
    auVar11[3] = auVar10[3] | auVar9[3];
    auVar11[4] = auVar10[4] | auVar9[4];
    auVar11[5] = auVar10[5] | auVar9[5];
    auVar11[6] = auVar10[6] | auVar9[6];
    auVar11[7] = auVar10[7] | auVar9[7];
    auVar11[8] = auVar10[8] | auVar9[8];
    auVar11[9] = auVar10[9] | auVar9[9];
    auVar11[10] = auVar10[10] | auVar9[10];
    auVar11[0xb] = auVar10[0xb] | auVar9[0xb];
    auVar11[0xc] = auVar10[0xc] | auVar9[0xc];
    auVar11[0xd] = auVar10[0xd] | auVar9[0xd];
    auVar11[0xe] = auVar10[0xe] | auVar9[0xe];
    auVar11[0xf] = auVar10[0xf] | auVar9[0xf];
    auVar9 = NEON_umaxp(auVar11,auVar11,4);
    if (auVar9._0_8_ != 0) {
      uVar3 = (ulong)iVar8;
      lVar1 = uVar3 + 1;
      goto LAB_7100834e50;
    }
    iVar8 = iVar8 + 4;
    ppuVar2 = (undefined **)((long)ppuVar2 + 0x20);
    iVar7 = iVar7 + -4;
  } while ((undefined1 (*) [16])ppuVar2 != (undefined1 (*) [16])&DAT_7100af8140);
  goto LAB_7100834e88;
  while (uVar3 = uVar3 + 1, uVar3 != (ulong)(iVar7 - 1) + lVar1) {
LAB_7100834e50:
    if ((&PTR_DAT_7100af6140)[uVar3] == (undefined *)0x0) {
      uVar6 = uVar3 & 0xffffffff;
      (&PTR_DAT_7100af6140)[(int)uVar3] = puVar5;
      *(int *)(puVar5 + 4) = *(int *)(puVar5 + 4) + 1;
      goto LAB_7100834e6c;
    }
  }
LAB_7100834e88:
  uVar6 = 0xffffffff;
LAB_7100834e6c:
  FUN_71008361e0(0x7100d236e0);
  return uVar6;
}



// ===== FUN_7100834ec0 @ 7100834ec0 (size=244) =====

undefined4 FUN_7100834ec0(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  
  if (param_2 < 0x400) {
    FUN_71008361c0();
    puVar3 = (uint *)(&PTR_DAT_7100af6140)[(int)param_2];
    if (puVar3 != (uint *)0x0) {
      uVar1 = puVar3[1];
      puVar3[1] = uVar1 - 1;
      (&PTR_DAT_7100af6140)[(int)param_2] = (undefined *)0x0;
      uVar2 = 0;
      FUN_71008361e0(0x7100d236e0);
      if (uVar1 - 1 != 0) {
        return 0;
      }
      uVar1 = *puVar3;
      if (*(long *)((&PTR_PTR_s_stdnull_7100af8170)[uVar1] + 0x18) != 0) {
        *(undefined8 *)(param_1 + 0x5e) =
             *(undefined8 *)((&PTR_PTR_s_stdnull_7100af8170)[uVar1] + 0xb0);
        uVar2 = (**(code **)((&PTR_PTR_s_stdnull_7100af8170)[uVar1] + 0x18))
                          (param_1,*(undefined8 *)(puVar3 + 2));
      }
      if ((puVar3 == (uint *)&DAT_7100af8150 || puVar3 == (uint *)&DAT_7100af8160) ||
          puVar3 == (uint *)&DAT_7100af8140) {
        return uVar2;
      }
      FUN_710081c200(puVar3);
      return uVar2;
    }
    FUN_71008361e0(0x7100d236e0);
  }
  *param_1 = 9;
  return 0xffffffff;
}



// ===== FUN_7100834fe0 @ 7100834fe0 (size=24) =====

void FUN_7100834fe0(int param_1)

{
  if (param_1 - 3U < 0x21) {
    DAT_7100af8288 = param_1;
  }
  return;
}



// ===== FUN_7100835000 @ 7100835000 (size=272) =====

ulong FUN_7100835000(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_710080eb40(param_1,0x3a);
  if (lVar3 == 0) {
    return (ulong)DAT_7100af8288;
  }
  iVar1 = (int)lVar3 - (int)param_1;
  uVar4 = 0;
  do {
    if ((undefined8 *)(&PTR_PTR_s_stdnull_7100af8170)[uVar4] != (undefined8 *)0x0) {
      uVar5 = *(undefined8 *)(&PTR_PTR_s_stdnull_7100af8170)[uVar4];
      iVar2 = FUN_710081ce00(uVar5);
      if (((iVar1 == iVar2) && (iVar2 = FUN_710080b4c0(uVar5,param_1,(long)iVar1), iVar2 == 0)) &&
         ((*(byte *)(param_1 + iVar1) == 0x3a ||
          ((((byte)(&DAT_71009d32f1)[(uint)*(byte *)(param_1 + iVar1)] >> 2 & 1) != 0 &&
           (*(char *)(param_1 + iVar1 + 1) == ':')))))) {
        return uVar4 & 0xffffffff;
      }
    }
    uVar4 = uVar4 + 1;
    if (uVar4 == 0x23) {
      return 0xffffffff;
    }
  } while( true );
}



// ===== FUN_7100835120 @ 7100835120 (size=52) =====

undefined8 FUN_7100835120(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100835000();
  if ((int)uVar1 != -1) {
    (&PTR_PTR_s_stdnull_7100af8170)[(int)uVar1] = (undefined *)&PTR_s_stdnull_7100ae7440;
    uVar1 = 0;
  }
  return uVar1;
}



// ===== FUN_7100835160 @ 7100835160 (size=196) =====

ulong FUN_7100835160(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = 3;
  uVar6 = *param_1;
  while( true ) {
    uVar5 = *(undefined8 *)(&PTR_PTR_s_stdnull_7100af8170)[uVar4];
    iVar1 = FUN_710080aec0(uVar5,uVar6);
    if (iVar1 == 0) {
      lVar2 = FUN_710081ce00(uVar5);
      lVar3 = FUN_710081ce00(uVar6);
      if (lVar2 == lVar3) break;
    }
    iVar1 = FUN_710080aec0(uVar5,"stdnull");
    if (iVar1 == 0) break;
    uVar4 = uVar4 + 1;
    if (uVar4 == 0x23) {
      return 0xffffffff;
    }
  }
  (&PTR_PTR_s_stdnull_7100af8170)[(int)uVar4] = (undefined *)param_1;
  return uVar4 & 0xffffffff;
}



// ===== FUN_7100835240 @ 7100835240 (size=52) =====

undefined * FUN_7100835240(void)

{
  uint uVar1;
  
  uVar1 = FUN_7100835000();
  if (uVar1 < 0x23) {
    return (&PTR_PTR_s_stdnull_7100af8170)[(int)uVar1];
  }
  return (undefined *)0x0;
}



// ===== FUN_7100835280 @ 7100835280 (size=8) =====

undefined8 FUN_7100835280(void)

{
  return 0;
}



// ===== FUN_71008352a0 @ 71008352a0 (size=16) =====

undefined8 FUN_71008352a0(undefined4 *param_1)

{
  *param_1 = 0x58;
  return 0xffffffff;
}



// ===== FUN_71008352c0 @ 71008352c0 (size=164) =====

undefined8 FUN_71008352c0(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_7100835000(param_2);
  iVar2 = FUN_7100835000(param_3);
  if (iVar1 == iVar2) {
    if (*(long *)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0x48) != 0) {
      *(undefined8 *)(param_1 + 0x5e) =
           *(undefined8 *)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x007100835338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0x48))(param_1,param_2,param_3);
      return uVar3;
    }
    *param_1 = 0x58;
  }
  else {
    *param_1 = 0x12;
  }
  return 0xffffffff;
}



// ===== FUN_7100835380 @ 7100835380 (size=160) =====

undefined8 FUN_7100835380(undefined4 *param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  
  if (param_2 == -1) {
    return 0xffffffffffffffff;
  }
  puVar2 = (uint *)FUN_7100834d40(param_2);
  if (puVar2 == (uint *)0x0) {
    *param_1 = 9;
  }
  else {
    uVar1 = *puVar2;
    if (*(long *)((&PTR_PTR_s_stdnull_7100af8170)[uVar1] + 0x30) != 0) {
      *(undefined8 *)(param_1 + 0x5e) =
           *(undefined8 *)((&PTR_PTR_s_stdnull_7100af8170)[uVar1] + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x0071008353f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)((&PTR_PTR_s_stdnull_7100af8170)[uVar1] + 0x30))
                        (param_1,*(undefined8 *)(puVar2 + 2),param_3,param_4);
      return uVar3;
    }
    *param_1 = 0x58;
  }
  return 0xffffffffffffffff;
}



// ===== FUN_7100835420 @ 7100835420 (size=156) =====

undefined8 FUN_7100835420(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined4 *)FUN_7100834b00();
  iVar1 = FUN_7100835000(param_1);
  if (iVar1 == -1) {
    *puVar2 = 0x13;
  }
  else {
    if (*(long *)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0xd0) != 0) {
      *(undefined8 *)(puVar2 + 0x5e) =
           *(undefined8 *)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x007100835490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0xd0))(puVar2,param_1,param_2);
      return uVar3;
    }
    *puVar2 = 0x58;
  }
  return 0xffffffff;
}



// ===== FUN_71008354c0 @ 71008354c0 (size=136) =====

undefined8 FUN_71008354c0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined4 *)FUN_7100834b00();
  iVar1 = FUN_7100835000(param_1);
  if (*(long *)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0x68) != 0) {
    *(undefined8 *)(puVar2 + 0x5e) = *(undefined8 *)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x007100835528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0x68))(puVar2,param_1,param_2);
    return uVar3;
  }
  *puVar2 = 0x58;
  return 0xffffffff;
}



// ===== FUN_7100835560 @ 7100835560 (size=24) =====

undefined8 FUN_7100835560(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    return 0;
  }
  return 0x16;
}



// ===== FUN_7100835580 @ 7100835580 (size=84) =====

undefined8 FUN_7100835580(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int aiStack_8 [2];
  
  if (param_2 != (int *)0x0) {
    if (param_1 != (int *)0x0) {
      iVar1 = *param_2;
      *param_1 = iVar1;
      if (iVar1 == 1) {
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        return 0;
      }
      if (iVar1 < 2) {
        if (iVar1 == 0) {
LAB_71008355c8:
          param_1[1] = 0;
          return 0;
        }
      }
      else if (iVar1 - 2U < 2) goto LAB_71008355c8;
    }
    return 0x16;
  }
  FUN_7100835560(aiStack_8);
  if (param_1 == (int *)0x0) goto LAB_710083560c;
  *param_1 = aiStack_8[0];
  if (aiStack_8[0] == 1) {
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
LAB_7100835624:
    uVar2 = 0;
  }
  else {
    if (aiStack_8[0] < 2) {
      if (aiStack_8[0] == 0) {
LAB_7100835620:
        param_1[1] = 0;
        goto LAB_7100835624;
      }
    }
    else if (aiStack_8[0] - 2U < 2) goto LAB_7100835620;
LAB_710083560c:
    uVar2 = 0x16;
  }
  return uVar2;
}



// ===== FUN_71008355d4 @ 71008355d4 (size=104) =====

undefined8 FUN_71008355d4(undefined8 param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  int local_8 [2];
  
  FUN_7100835560(local_8);
  if (param_3 == (int *)0x0) goto LAB_710083560c;
  *param_3 = local_8[0];
  if (local_8[0] == 1) {
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
LAB_7100835624:
    uVar1 = 0;
  }
  else {
    if (local_8[0] < 2) {
      if (local_8[0] == 0) {
LAB_7100835620:
        param_3[1] = 0;
        goto LAB_7100835624;
      }
    }
    else if (local_8[0] - 2U < 2) goto LAB_7100835620;
LAB_710083560c:
    uVar1 = 0x16;
  }
  return uVar1;
}



// ===== FUN_7100835640 @ 7100835640 (size=16) =====

undefined4 FUN_7100835640(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x16;
  if (param_1 != 0) {
    uVar1 = 0;
  }
  return uVar1;
}



// ===== FUN_7100835660 @ 7100835660 (size=108) =====

undefined8 FUN_7100835660(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return 0x16;
  }
  iVar1 = *param_1;
  if (iVar1 == 1) {
    FUN_7100836200(param_1 + 1);
  }
  else {
    if (iVar1 < 2) {
      if (iVar1 != 0) {
        return 0x16;
      }
    }
    else if (1 < iVar1 - 2U) {
      return 0x16;
    }
    FUN_71008361c0(param_1 + 1);
  }
  return 0;
}



// ===== FUN_71008356e0 @ 71008356e0 (size=108) =====

undefined8 FUN_71008356e0(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return 0x16;
  }
  iVar1 = *param_1;
  if (iVar1 == 1) {
    FUN_7100836220(param_1 + 1);
  }
  else {
    if (iVar1 < 2) {
      if (iVar1 != 0) {
        return 0x16;
      }
    }
    else if (1 < iVar1 - 2U) {
      return 0x16;
    }
    FUN_71008361e0(param_1 + 1);
  }
  return 0;
}



// ===== FUN_7100835760 @ 7100835760 (size=28) =====

undefined8 FUN_7100835760(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 1;
    return 0;
  }
  return 0x16;
}



// ===== FUN_7100835780 @ 7100835780 (size=40) =====

undefined8 FUN_7100835780(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_8;
  
  if (param_2 == (undefined8 *)0x0) {
    FUN_7100835760(&uStack_8);
    if (param_1 == (undefined8 *)0x0) {
      uVar1 = 0x16;
    }
    else {
      *param_1 = uStack_8;
      uVar1 = 0;
      *(undefined4 *)(param_1 + 1) = 0;
    }
    return uVar1;
  }
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = 0;
    return 0;
  }
  return 0x16;
}



// ===== FUN_71008357a0 @ 71008357a0 (size=64) =====

undefined8 FUN_71008357a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_8;
  
  FUN_7100835760(&local_8);
  if (param_3 == (undefined8 *)0x0) {
    uVar1 = 0x16;
  }
  else {
    *param_3 = local_8;
    uVar1 = 0;
    *(undefined4 *)(param_3 + 1) = 0;
  }
  return uVar1;
}



// ===== FUN_7100835800 @ 7100835800 (size=16) =====

undefined4 FUN_7100835800(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x16;
  if (param_1 != 0) {
    uVar1 = 0;
  }
  return uVar1;
}



// ===== FUN_7100835820 @ 7100835820 (size=20) =====

undefined8 FUN_7100835820(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_7100836240(param_1 + 8);
    return uVar1;
  }
  return 0x16;
}



// ===== FUN_7100835840 @ 7100835840 (size=20) =====

undefined8 FUN_7100835840(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_7100836260(param_1 + 8);
    return uVar1;
  }
  return 0x16;
}



// ===== FUN_7100835860 @ 7100835860 (size=84) =====

undefined8 FUN_7100835860(long param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != 0 && param_2 != (int *)0x0) {
    iVar1 = *param_2;
    if (iVar1 == 1) {
      uVar2 = FUN_71008362a0(param_1 + 8,param_2 + 1,0xffffffffffffffff);
      return uVar2;
    }
    if (iVar1 < 2) {
      if (iVar1 == 0) {
LAB_71008358a4:
        uVar2 = FUN_7100836280(param_1 + 8,param_2 + 1,0xffffffffffffffff);
        return uVar2;
      }
    }
    else if (iVar1 - 2U < 2) goto LAB_71008358a4;
  }
  return 0x16;
}



// ===== FUN_71008358c0 @ 71008358c0 (size=144) =====

undefined8 FUN_71008358c0(undefined8 *param_1,int *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == (int *)0x0 || param_3 == 0) || param_1 == (undefined8 *)0x0) {
    return 0x16;
  }
  uVar2 = FUN_71008360e0(*param_1,param_3);
  iVar1 = *param_2;
  if (iVar1 == 1) {
    uVar2 = FUN_71008362a0(param_1 + 1,param_2 + 1,uVar2);
    return uVar2;
  }
  if (iVar1 < 2) {
    if (iVar1 == 0) {
LAB_7100835934:
      uVar2 = FUN_7100836280(param_1 + 1,param_2 + 1,uVar2);
      return uVar2;
    }
  }
  else if (iVar1 - 2U < 2) goto LAB_7100835934;
  return 0x16;
}



// ===== FUN_7100835960 @ 7100835960 (size=28) =====

undefined8 FUN_7100835960(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return 0;
  }
  return 0x16;
}



// ===== FUN_7100835980 @ 7100835980 (size=124) =====

/* WARNING: Removing unreachable block (ram,0x0071008359f0) */

undefined8 FUN_7100835980(long param_1,undefined8 *param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 auStack_18 [3];
  
  if (param_2 == (undefined8 *)0x0) {
    param_2 = auStack_18;
    FUN_7100835960(param_2,param_3,param_4);
  }
  uVar1 = 0x16;
  if (param_1 != 0 && param_3 != 0) {
    uVar1 = FUN_7100774c20(param_1,param_3,param_4,*param_2,(long)*(int *)(param_2 + 1));
  }
  return uVar1;
}



// ===== FUN_7100835a00 @ 7100835a00 (size=60) =====

/* WARNING: Removing unreachable block (ram,0x007100835a34) */

undefined8 FUN_7100835a00(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100774d80();
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = uVar1;
  }
  return 0;
}



// ===== FUN_7100835a40 @ 7100835a40 (size=212) =====

undefined8 FUN_7100835a40(int *param_1,code *param_2)

{
  int iVar1;
  
  if (param_1 == (int *)0x0 || param_2 == (code *)0x0) {
    return 0x16;
  }
  FUN_71008361c0(0x7100d236fc);
  iVar1 = *param_1;
  if (iVar1 == 0) {
    *param_1 = 1;
    FUN_71008361e0(0x7100d236fc);
    (*param_2)();
    FUN_71008361c0(0x7100d236fc);
    *param_1 = 2;
    FUN_7100836260(0x7100d236f8);
    FUN_71008361e0(0x7100d236fc);
    return 0;
  }
  while (iVar1 == 1) {
    FUN_7100836280(0x7100d236f8,0x7100d236fc,0xffffffffffffffff);
    iVar1 = *param_1;
  }
  FUN_71008361e0(0x7100d236fc);
  return 0;
}



// ===== FUN_7100835b20 @ 7100835b20 (size=36) =====

/* WARNING: Removing unreachable block (ram,0x007100835b34) */

undefined8 FUN_7100835b20(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_7100774de0();
    return uVar1;
  }
  return 0x16;
}



// ===== FUN_7100835b60 @ 7100835b60 (size=24) =====

/* WARNING: Removing unreachable block (ram,0x007100835b70) */

undefined8 FUN_7100835b60(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100774e20();
  return uVar1;
}



// ===== FUN_7100835b80 @ 7100835b80 (size=24) =====

/* WARNING: Removing unreachable block (ram,0x007100835b90) */

undefined8 FUN_7100835b80(void)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_710074a2c0();
  return uVar1;
}



// ===== FUN_7100835ba0 @ 7100835ba0 (size=24) =====

/* WARNING: Removing unreachable block (ram,0x007100835bb0) */

undefined8 FUN_7100835ba0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100774e50();
  return uVar1;
}



// ===== FUN_7100835bc0 @ 7100835bc0 (size=240) =====

int FUN_7100835bc0(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = FUN_7100835000(param_2);
  if ((iVar1 == -1) || (*(long *)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0x10) == 0)) {
    iVar2 = -1;
    *param_1 = 0x58;
  }
  else {
    iVar2 = FUN_7100834c00();
    if (iVar2 == -1) {
      *param_1 = 0x3f;
      iVar2 = -1;
    }
    else {
      lVar3 = FUN_7100834d40();
      *(undefined8 *)(param_1 + 0x5e) =
           *(undefined8 *)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0xb0);
      iVar1 = (**(code **)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0x10))
                        (param_1,*(undefined8 *)(lVar3 + 8),param_2,param_3,param_4);
      if (iVar1 == -1) {
        FUN_7100834b60(iVar2);
        iVar2 = -1;
      }
    }
  }
  return iVar2;
}



// ===== FUN_7100835cc0 @ 7100835cc0 (size=176) =====

long FUN_7100835cc0(undefined4 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  
  if (param_2 == -1) {
    return -1;
  }
  puVar3 = (uint *)FUN_7100834d40(param_2);
  if (puVar3 == (uint *)0x0) {
    *param_1 = 9;
    lVar4 = -1;
  }
  else {
    uVar1 = *puVar3;
    if (*(long *)((&PTR_PTR_s_stdnull_7100af8170)[uVar1] + 0x28) == 0) {
      *param_1 = 0x58;
      return -1;
    }
    *(undefined8 *)(param_1 + 0x5e) = *(undefined8 *)((&PTR_PTR_s_stdnull_7100af8170)[uVar1] + 0xb0)
    ;
    iVar2 = (**(code **)((&PTR_PTR_s_stdnull_7100af8170)[uVar1] + 0x28))
                      (param_1,*(undefined8 *)(puVar3 + 2),param_3,param_4);
    lVar4 = (long)iVar2;
  }
  return lVar4;
}



// ===== FUN_7100835d80 @ 7100835d80 (size=168) =====

undefined8 FUN_7100835d80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined4 *)FUN_7100834b00();
  iVar1 = FUN_7100835000(param_2);
  iVar2 = FUN_7100835000(param_3);
  if (iVar1 == iVar2) {
    if (*(long *)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0x60) != 0) {
      *(undefined8 *)(puVar3 + 0x5e) =
           *(undefined8 *)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x007100835dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0x60))(puVar3,param_2,param_3);
      return uVar4;
    }
    *puVar3 = 0x58;
  }
  else {
    *puVar3 = 0x12;
  }
  return 0xffffffff;
}



// ===== FUN_7100835e40 @ 7100835e40 (size=132) =====

undefined8 FUN_7100835e40(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_7100835000(param_2);
  if (iVar1 == -1) {
    *param_1 = 0x13;
  }
  else {
    if (*(long *)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 200) != 0) {
      *(undefined8 *)(param_1 + 0x5e) =
           *(undefined8 *)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x007100835e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 200))(param_1,param_2);
      return uVar2;
    }
    *param_1 = 0x58;
  }
  return 0xffffffff;
}



// ===== FUN_7100835ee0 @ 7100835ee0 (size=28) =====

void FUN_7100835ee0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100834b00();
  FUN_7100835e40(uVar1,param_1);
  return;
}



// ===== FUN_7100835f00 @ 7100835f00 (size=120) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_7100835f00(undefined4 *param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar2 = _DAT_7100d23700;
  if ((_DAT_7100d23700 == (undefined1 *)0x0) &&
     (puVar2 = _DAT_7100d236e8, _DAT_7100d236e8 == (undefined1 *)0x0)) {
    puVar2 = &DAT_7100d52328;
  }
  puVar1 = _DAT_7100d236f0;
  if (_DAT_7100d236f0 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)register0x00000008;
  }
  if (puVar1 < puVar2 + param_2) {
    _DAT_7100d23700 = puVar2;
    *param_1 = 0xc;
    return (undefined1 *)0xffffffffffffffff;
  }
  _DAT_7100d23700 = puVar2 + param_2;
  return puVar2;
}



// ===== FUN_7100835f80 @ 7100835f80 (size=140) =====

undefined8 FUN_7100835f80(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_7100835000(param_2);
  if (iVar1 == -1) {
    *param_1 = 0x13;
  }
  else {
    if (*(long *)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0x40) != 0) {
      *(undefined8 *)(param_1 + 0x5e) =
           *(undefined8 *)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x007100835fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0x40))(param_1,param_2,param_3);
      return uVar2;
    }
    *param_1 = 0x58;
  }
  return 0xffffffff;
}



// ===== FUN_71008360c0 @ 71008360c0 (size=20) =====

long FUN_71008360c0(long *param_1)

{
  return param_1[1] + *param_1 * 1000000000;
}



// ===== FUN_71008360e0 @ 71008360e0 (size=200) =====

undefined8 FUN_71008360e0(undefined8 param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long local_20;
  long lStack_18;
  long local_10;
  long lStack_8;
  
  FUN_7100833f00(param_1,&local_10);
  lVar1 = param_2[1];
  if (lVar1 < lStack_8) {
    iVar2 = (int)((ulong)(lStack_8 - lVar1) / 1000000000);
    local_10 = local_10 + (iVar2 + 1);
    lStack_8 = lStack_8 - (iVar2 * 1000000000 + 1000000000);
  }
  lStack_18 = lVar1 - lStack_8;
  if (1000000000 < lStack_18) {
    iVar2 = (int)(lStack_18 / 1000000000);
    local_10 = local_10 - iVar2;
    lStack_18 = lVar1 - (lStack_8 + iVar2 * 1000000000);
  }
  local_20 = *param_2 - local_10;
  uVar3 = 0;
  if (local_10 <= *param_2) {
    uVar3 = FUN_71008360c0(&local_20);
  }
  return uVar3;
}



// ===== FUN_71008361c0 @ 71008361c0 (size=20) =====

/* WARNING: Removing unreachable block (ram,0x0071008361d0) */

void FUN_71008361c0(void)

{
  thunk_FUN_7100749670();
  return;
}



// ===== FUN_71008361e0 @ 71008361e0 (size=20) =====

/* WARNING: Removing unreachable block (ram,0x0071008361f0) */

void FUN_71008361e0(void)

{
  thunk_FUN_7100749740();
  return;
}



// ===== FUN_7100836200 @ 7100836200 (size=20) =====

/* WARNING: Removing unreachable block (ram,0x007100836210) */

void FUN_7100836200(void)

{
  FUN_7100774a70();
  return;
}



// ===== FUN_7100836220 @ 7100836220 (size=20) =====

/* WARNING: Removing unreachable block (ram,0x007100836230) */

void FUN_7100836220(void)

{
  FUN_7100774a80();
  return;
}



// ===== FUN_7100836240 @ 7100836240 (size=24) =====

/* WARNING: Removing unreachable block (ram,0x007100836250) */

undefined8 FUN_7100836240(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100774a90();
  return uVar1;
}



// ===== FUN_7100836260 @ 7100836260 (size=24) =====

/* WARNING: Removing unreachable block (ram,0x007100836270) */

undefined8 FUN_7100836260(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100774ab0();
  return uVar1;
}



// ===== FUN_7100836280 @ 7100836280 (size=24) =====

/* WARNING: Removing unreachable block (ram,0x007100836290) */

undefined8 FUN_7100836280(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100774ad0();
  return uVar1;
}



// ===== FUN_71008362a0 @ 71008362a0 (size=24) =====

/* WARNING: Removing unreachable block (ram,0x0071008362b0) */

undefined8 FUN_71008362a0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100774b10();
  return uVar1;
}



// ===== FUN_71008362c0 @ 71008362c0 (size=332) =====

ulong FUN_71008362c0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  uint unaff_w22;
  
  puVar3 = (undefined4 *)FUN_7100834b00();
  iVar1 = FUN_7100835000(param_1);
  if (iVar1 != -1) {
    puVar6 = (&PTR_PTR_s_stdnull_7100af8170)[iVar1];
    if (((*(long *)(puVar6 + 0x10) != 0) && (*(long *)(puVar6 + 0x18) != 0)) &&
       (*(long *)(puVar6 + 0xa0) != 0)) {
      iVar2 = FUN_7100834c00();
      if (iVar2 == -1) {
        *puVar3 = 0x3f;
      }
      else {
        lVar4 = FUN_7100834d40();
        *(undefined8 *)(puVar3 + 0x5e) =
             *(undefined8 *)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0xb0);
        unaff_w22 = (**(code **)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0x10))
                              (puVar3,*(undefined8 *)(lVar4 + 8),param_1,1,0);
        if ((int)unaff_w22 < 0) {
          FUN_7100834b60(iVar2);
        }
        else {
          unaff_w22 = (**(code **)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0xa0))
                                (puVar3,*(undefined8 *)(lVar4 + 8),param_2);
          if (-1 < (int)unaff_w22) {
                    /* WARNING: Could not recover jumptable at 0x0071008363c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar5 = (**(code **)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0x18))();
            return uVar5;
          }
          (**(code **)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0x18))
                    (puVar3,*(undefined8 *)(lVar4 + 8));
        }
      }
      goto LAB_71008363d4;
    }
  }
  *puVar3 = 0x58;
LAB_71008363d4:
  return (ulong)unaff_w22;
}



// ===== FUN_7100836420 @ 7100836420 (size=128) =====

undefined8 FUN_7100836420(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_7100835000(param_2);
  if (iVar1 < 0) {
    *param_1 = 0x13;
  }
  else {
    if (*(long *)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0x50) != 0) {
      *(undefined8 *)(param_1 + 0x5e) =
           *(undefined8 *)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x007100836478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0x50))(param_1,param_2);
      return uVar2;
    }
    *param_1 = 0x58;
  }
  return 0xffffffff;
}



// ===== FUN_71008364a0 @ 71008364a0 (size=156) =====

undefined8 FUN_71008364a0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined4 *)FUN_7100834b00();
  iVar1 = FUN_7100835000(param_1);
  if (iVar1 == -1) {
    *puVar2 = 0x13;
  }
  else {
    if (*(long *)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0xd8) != 0) {
      *(undefined8 *)(puVar2 + 0x5e) =
           *(undefined8 *)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x007100836510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0xd8))(puVar2,param_1,param_2);
      return uVar3;
    }
    *puVar2 = 0x58;
  }
  return 0xffffffff;
}



// ===== FUN_7100836540 @ 7100836540 (size=92) =====

void FUN_7100836540(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  if (param_2 == (undefined8 *)0x0) {
    iVar1 = FUN_7100816c40(&local_20);
    if (iVar1 == -1) {
      return;
    }
    uStack_8 = uStack_18;
    local_10 = local_20;
  }
  else {
    local_20 = *param_2;
    local_10 = param_2[1];
    uStack_8 = 0;
  }
  uStack_18 = uStack_8;
  FUN_71008364a0(param_1,&local_20);
  return;
}



// ===== FUN_71008365a0 @ 71008365a0 (size=176) =====

long FUN_71008365a0(undefined4 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  
  if (param_2 == -1) {
    return -1;
  }
  puVar3 = (uint *)FUN_7100834d40(param_2);
  if (puVar3 == (uint *)0x0) {
    *param_1 = 9;
    lVar4 = -1;
  }
  else {
    uVar1 = *puVar3;
    if (*(long *)((&PTR_PTR_s_stdnull_7100af8170)[uVar1] + 0x20) == 0) {
      *param_1 = 0x58;
      return -1;
    }
    *(undefined8 *)(param_1 + 0x5e) = *(undefined8 *)((&PTR_PTR_s_stdnull_7100af8170)[uVar1] + 0xb0)
    ;
    iVar2 = (**(code **)((&PTR_PTR_s_stdnull_7100af8170)[uVar1] + 0x20))
                      (param_1,*(undefined8 *)(puVar3 + 2),param_3,param_4);
    lVar4 = (long)iVar2;
  }
  return lVar4;
}



// ===== FUN_7100836660 @ 7100836660 (size=308) =====

undefined1  [16] FUN_7100836660(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  undefined1 auVar5 [16];
  long lVar6;
  ulong uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  uVar1 = fpcr;
  uVar7 = param_1 >> 0x34 & 0x7ff;
  uVar4 = param_1 & 0xfffffffffffff;
  param_1 = param_1 >> 0x3f;
  if ((uVar7 + 1 & 0x7fe) != 0) {
    auVar9._8_8_ = uVar4 >> 4 | uVar7 + 0x3c00 << 0x30 | param_1 << 0x3f;
    auVar9._0_8_ = uVar4 << 0x3c;
    return auVar9;
  }
  if (uVar7 == 0) {
    if (uVar4 != 0) {
      uVar8 = (uint)LZCOUNT(uVar4);
      if (uVar8 < 0xf) {
        uVar7 = uVar4 >> ((ulong)(0xf - uVar8) & 0x3f);
        lVar6 = uVar4 << ((ulong)(uVar8 + 0x31) & 0x3f);
      }
      else {
        uVar7 = uVar4 << ((ulong)(uVar8 - 0xf) & 0x3f);
        lVar6 = 0;
      }
      auVar10._8_8_ =
           uVar7 & 0xffffffffffff | ((ulong)(0x3c0c - uVar8) & 0x7fff) << 0x30 | param_1 << 0x3f;
      auVar10._0_8_ = lVar6;
      return auVar10;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_1 << 0x3f;
    return auVar2 << 0x40;
  }
  if (uVar4 == 0) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_1 << 0x3f | 0x7fff000000000000;
    return auVar3 << 0x40;
  }
  uVar7 = uVar4 >> 4 | 0x7fff800000000000 | param_1 << 0x3f;
  if (uVar4 < 0x8000000000000) {
    FUN_71008063a0(1);
    auVar5._8_8_ = uVar7;
    auVar5._0_8_ = uVar4 << 0x3c;
    return auVar5;
  }
  auVar11._8_8_ = uVar7;
  auVar11._0_8_ = uVar4 << 0x3c;
  return auVar11;
}



// ===== FUN_7100836798 @ 7100836798 (size=52) =====

void FUN_7100836798(void)

{
  return;
}



