// ===== FUN_710072bbf0 @ 710072bbf0 (size=680) =====

int FUN_710072bbf0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long local_88;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [8];
  long local_28;
  long lStack_20;
  undefined1 auStack_18 [24];
  
  FUN_7100729690(auStack_78);
  FUN_7100729690(auStack_60);
  FUN_7100729690(auStack_48);
  FUN_7100729690(auStack_30);
  FUN_7100729690(auStack_18);
  iVar1 = FUN_710072a6d0(auStack_78,param_1,1);
  if (iVar1 == 0) {
    uVar2 = FUN_7100729b50(auStack_78);
    iVar1 = FUN_7100729900(auStack_60,auStack_78);
    if (iVar1 == 0) {
      iVar1 = FUN_710072a030(auStack_60,uVar2);
      if (iVar1 == 0) {
        local_88 = 0;
        if (param_2 != 0) {
          do {
            iVar6 = 0x20;
            do {
              iVar1 = FUN_710072bb80(auStack_30,*(long *)(param_1 + 8) << 3,param_3,param_4);
              if (iVar1 != 0) goto LAB_710072bc74;
              uVar3 = FUN_7100729ba0(auStack_30);
              uVar4 = FUN_7100729ba0(auStack_78);
              if (uVar4 < uVar3) {
                lVar5 = local_28 * 8 + -8;
                *(ulong *)(lStack_20 + lVar5) =
                     *(ulong *)(lStack_20 + lVar5) &
                     (-1L << ((ulong)((int)uVar4 - 1) & 0x3f) ^ 0xffffffffffffffffU);
              }
              iVar6 = iVar6 + -1;
              if (iVar6 == 0) goto LAB_710072be90;
              iVar1 = FUN_710072a1c0(auStack_30,auStack_78);
            } while ((-1 < iVar1) || (iVar1 = FUN_710072a2a0(auStack_30,1), iVar1 < 1));
            iVar1 = FUN_710072b130(auStack_30,auStack_30,auStack_60,param_1,auStack_18);
            if (iVar1 != 0) goto LAB_710072bc74;
            iVar1 = FUN_710072a1c0(auStack_30,auStack_78);
            if ((iVar1 != 0) && (iVar1 = FUN_710072a2a0(auStack_30,1), iVar1 != 0)) {
              uVar3 = 1;
              if (1 < uVar2) {
                while (iVar1 = FUN_710072a1c0(auStack_30,auStack_78), iVar1 != 0) {
                  iVar1 = FUN_710072a710(auStack_48,auStack_30,auStack_30);
                  if (iVar1 != 0) goto LAB_710072bc74;
                  iVar1 = FUN_710072aee0(auStack_30,auStack_48,param_1);
                  if (iVar1 != 0) goto LAB_710072bc74;
                  iVar1 = FUN_710072a2a0(auStack_30,1);
                  uVar3 = uVar3 + 1;
                  if ((iVar1 == 0) || (uVar2 == uVar3)) break;
                }
              }
              iVar1 = FUN_710072a1c0(auStack_30,auStack_78);
              if ((iVar1 != 0) || (iVar1 = FUN_710072a2a0(auStack_30,1), iVar1 == 0)) {
LAB_710072be90:
                iVar1 = -0xe;
                goto LAB_710072bc74;
              }
            }
            local_88 = local_88 + 1;
          } while (param_2 != local_88);
        }
        iVar1 = 0;
      }
    }
  }
LAB_710072bc74:
  FUN_71007296a0(auStack_78);
  FUN_71007296a0(auStack_60);
  FUN_71007296a0(auStack_48);
  FUN_71007296a0(auStack_30);
  FUN_71007296a0(auStack_18);
  return iVar1;
}



// ===== FUN_710072bea0 @ 710072bea0 (size=400) =====

int FUN_710072bea0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int local_20;
  int local_1c;
  undefined1 auStack_18 [24];
  
  local_20 = 1;
  local_1c = 0;
  lVar4 = FUN_7100729ba0(param_3);
  if (-1 < param_2) {
    uVar1 = lVar4 + 7;
    iVar2 = FUN_710072a2a0(param_3,param_2);
    if (0 < iVar2) {
      iVar2 = 0xfa;
      if (0x27 < uVar1) {
        iVar2 = 0x1e;
      }
      FUN_7100729690(auStack_18);
      iVar3 = FUN_71007297a0(param_1,*(undefined8 *)(param_3 + 8));
      if (((iVar3 == 0) &&
          (iVar3 = FUN_71007296f0(auStack_18,*(undefined8 *)(param_3 + 8)), iVar3 == 0)) &&
         (iVar3 = FUN_7100729a10(auStack_18,param_2), iVar3 == 0)) {
        while (iVar3 = FUN_71007295b0(param_1,uVar1 >> 3,param_4,param_5), iVar3 == 0) {
          iVar3 = FUN_710072a030(param_1,(uVar1 & 0xfffffffffffffff8) - lVar4);
          iVar2 = iVar2 + -1;
          if (iVar3 != 0) break;
          if (iVar2 == 0) {
            iVar3 = -0xe;
            break;
          }
          iVar3 = FUN_710072ddb0(param_1,auStack_18,&local_20);
          if (((iVar3 != 0) || (iVar3 = FUN_710072ddb0(param_1,param_3,&local_1c), iVar3 != 0)) ||
             ((local_20 == 0 && (local_1c != 0)))) break;
        }
      }
      FUN_71007296a0(auStack_18);
      return iVar3;
    }
  }
  return -4;
}



// ===== FUN_710072c030 @ 710072c030 (size=1084) =====

int FUN_710072c030(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [16];
  ulong *local_98;
  undefined1 auStack_90 [16];
  ulong *local_80;
  undefined1 auStack_78 [16];
  ulong *local_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [16];
  ulong *local_38;
  undefined1 auStack_30 [16];
  ulong *local_20;
  undefined1 auStack_18 [16];
  ulong *local_8;
  
  iVar1 = FUN_710072a2a0(param_3,1);
  if (iVar1 < 1) {
    return -4;
  }
  FUN_7100729690(auStack_c0);
  FUN_7100729690(auStack_a8);
  FUN_7100729690(auStack_90);
  FUN_7100729690(auStack_78);
  FUN_7100729690(auStack_d8);
  FUN_7100729690(auStack_60);
  FUN_7100729690(auStack_48);
  FUN_7100729690(auStack_30);
  FUN_7100729690(auStack_18);
  iVar1 = FUN_710072b9c0(auStack_d8,param_2,param_3);
  if (iVar1 == 0) {
    iVar2 = FUN_710072a2a0(auStack_d8,1);
    iVar1 = -0xe;
    if ((((((iVar2 == 0) && (iVar1 = FUN_710072aee0(auStack_c0,param_2,param_3), iVar1 == 0)) &&
          (iVar1 = FUN_7100729900(auStack_a8,auStack_c0), iVar1 == 0)) &&
         ((iVar1 = FUN_7100729900(auStack_60,param_3), iVar1 == 0 &&
          (iVar1 = FUN_7100729900(auStack_48,param_3), iVar1 == 0)))) &&
        ((iVar1 = FUN_7100729a10(auStack_90,1), iVar1 == 0 &&
         ((iVar1 = FUN_7100729a10(auStack_78,0), iVar1 == 0 &&
          (iVar1 = FUN_7100729a10(auStack_30,0), iVar1 == 0)))))) &&
       (iVar1 = FUN_7100729a10(auStack_18,1), iVar1 == 0)) {
      do {
        while ((*local_98 & 1) == 0) {
          iVar1 = FUN_710072a030(auStack_a8,1);
          if (((iVar1 != 0) ||
              ((((*local_80 & 1) != 0 || ((*local_68 & 1) != 0)) &&
               ((iVar1 = FUN_710072a670(auStack_90,auStack_90,auStack_60), iVar1 != 0 ||
                (iVar1 = FUN_710072a680(auStack_78,auStack_78,auStack_c0), iVar1 != 0)))))) ||
             ((iVar1 = FUN_710072a030(auStack_90,1), iVar1 != 0 ||
              (iVar1 = FUN_710072a030(auStack_78,1), iVar1 != 0)))) goto LAB_710072c0f4;
        }
        while ((*local_38 & 1) == 0) {
          iVar1 = FUN_710072a030(auStack_48,1);
          if ((iVar1 != 0) ||
             (((((*local_20 & 1) != 0 || ((*local_8 & 1) != 0)) &&
               ((iVar1 = FUN_710072a670(auStack_30,auStack_30,auStack_60), iVar1 != 0 ||
                (iVar1 = FUN_710072a680(auStack_18,auStack_18,auStack_c0), iVar1 != 0)))) ||
              ((iVar1 = FUN_710072a030(auStack_30,1), iVar1 != 0 ||
               (iVar1 = FUN_710072a030(auStack_18,1), iVar1 != 0)))))) goto LAB_710072c0f4;
        }
        iVar1 = FUN_710072a1c0(auStack_a8,auStack_48);
        if (iVar1 < 0) {
          iVar1 = FUN_710072a680(auStack_48,auStack_48,auStack_a8);
          if ((iVar1 != 0) || (iVar1 = FUN_710072a680(auStack_30,auStack_30,auStack_90), iVar1 != 0)
             ) break;
          iVar1 = FUN_710072a680(auStack_18,auStack_18,auStack_78);
        }
        else {
          iVar1 = FUN_710072a680(auStack_a8,auStack_a8,auStack_48);
          if ((iVar1 != 0) || (iVar1 = FUN_710072a680(auStack_90,auStack_90,auStack_30), iVar1 != 0)
             ) break;
          iVar1 = FUN_710072a680(auStack_78,auStack_78,auStack_18);
        }
        if (iVar1 != 0) break;
        iVar1 = FUN_710072a2a0(auStack_a8,0);
        if (iVar1 == 0) goto LAB_710072c3b8;
      } while( true );
    }
  }
  goto LAB_710072c0f4;
  while (iVar1 = FUN_710072a670(auStack_30,auStack_30,param_3), iVar1 == 0) {
LAB_710072c3b8:
    iVar1 = FUN_710072a2a0(auStack_30,0);
    if (-1 < iVar1) goto LAB_710072c43c;
  }
  goto LAB_710072c0f4;
  while (iVar1 = FUN_710072a680(auStack_30,auStack_30,param_3), iVar1 == 0) {
LAB_710072c43c:
    iVar1 = FUN_710072a1c0(auStack_30,param_3);
    if (iVar1 < 0) {
      iVar1 = FUN_7100729900(param_1);
      break;
    }
  }
LAB_710072c0f4:
  FUN_71007296a0(auStack_c0);
  FUN_71007296a0(auStack_a8);
  FUN_71007296a0(auStack_90);
  FUN_71007296a0(auStack_78);
  FUN_71007296a0(auStack_d8);
  FUN_71007296a0(auStack_60);
  FUN_71007296a0(auStack_48);
  FUN_71007296a0(auStack_30);
  FUN_71007296a0(auStack_18);
  return iVar1;
}



// ===== FUN_710072c470 @ 710072c470 (size=200) =====

undefined8 FUN_710072c470(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_18 [2];
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_18[0] = 1;
  local_10 = *(undefined8 *)(param_1 + 8);
  uStack_8 = *(undefined8 *)(param_1 + 0x10);
  iVar1 = FUN_710072a2a0(local_18,0);
  if ((iVar1 == 0) || (iVar1 = FUN_710072a2a0(local_18,1), iVar1 == 0)) {
    uVar2 = 0xfffffff2;
  }
  else {
    iVar1 = FUN_710072a2a0(local_18,2);
    if (iVar1 != 0) {
      uVar2 = FUN_710072b080(local_18);
      if ((int)uVar2 == 0) {
        uVar2 = FUN_710072bbf0(local_18,(long)param_2,param_3,param_4);
        return uVar2;
      }
      if ((int)uVar2 != 1) {
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



// ===== FUN_710072c820 @ 710072c820 (size=44) =====

void FUN_710072c820(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = &DAT_7100ae4fc0;
  do {
    if (*(long *)(piVar2 + 2) == 0) {
      return;
    }
    iVar1 = *piVar2;
    piVar2 = piVar2 + 4;
  } while (iVar1 != param_1);
  return;
}



// ===== FUN_710072c850 @ 710072c850 (size=72) =====

void FUN_710072c850(int param_1,int param_2,int param_3)

{
  long lVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_7100ae4fc0;
  do {
    lVar1 = *(long *)(puVar2 + 2);
    if (lVar1 == 0) {
      return;
    }
    puVar2 = puVar2 + 4;
  } while (((**(int **)(lVar1 + 0x28) != param_1) || (*(int *)(lVar1 + 8) != param_2)) ||
          (*(int *)(lVar1 + 4) != param_3));
  return;
}



// ===== FUN_710072c8a0 @ 710072c8a0 (size=24) =====

void FUN_710072c8a0(undefined8 *param_1)

{
  param_1[10] = 0;
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
  return;
}



// ===== FUN_710072c8c0 @ 710072c8c0 (size=68) =====

void FUN_710072c8c0(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if (param_1[10] != 0) {
      (**(code **)(*(long *)(*param_1 + 0x28) + 0x58))();
    }
    FUN_710073b460(param_1,0x58);
    return;
  }
  return;
}



// ===== FUN_710072c910 @ 710072c910 (size=108) =====

undefined8 FUN_710072c910(long *param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if ((lVar2 != 0) &&
     (((*(uint *)(lVar2 + 0x1c) >> 1 & 1) != 0 || (*(int *)(lVar2 + 8) == param_3)))) {
    *(int *)(param_1 + 1) = param_3;
    *(int *)((long)param_1 + 0xc) = param_4;
    if ((param_4 == 1) || (*(int *)(lVar2 + 4) - 3U < 3)) {
                    /* WARNING: Could not recover jumptable at 0x00710072c94c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*(long *)(lVar2 + 0x28) + 0x40))(param_1[10]);
      return uVar1;
    }
    if (param_4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00710072c978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*(long *)(lVar2 + 0x28) + 0x48))(param_1[10]);
      return uVar1;
    }
  }
  return 0xffff9f00;
}



// ===== FUN_710072c980 @ 710072c980 (size=196) =====

undefined8 FUN_710072c980(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    if (0x10 < param_3) {
      return 0xffff9f80;
    }
    if ((piVar2[7] & 1U) == 0) {
      uVar3 = (ulong)(uint)piVar2[6];
      if (param_3 < uVar3) {
        return 0xffff9f00;
      }
      iVar1 = *piVar2;
    }
    else {
      iVar1 = *piVar2;
      uVar3 = param_3;
    }
    if (iVar1 == 0x48) {
      if ((param_3 == 0xc) && (iVar1 = FUN_7100746d80(param_1[10],param_2,0), iVar1 == 0))
      goto LAB_710072c9d4;
    }
    else if (iVar1 != 0x49 || param_3 == 0xc) {
LAB_710072c9d4:
      if (uVar3 != 0) {
        FUN_710080f900(param_1 + 7,param_2,uVar3);
        param_1[9] = uVar3;
      }
      return 0;
    }
  }
  return 0xffff9f00;
}



// ===== FUN_710072ca50 @ 710072ca50 (size=32) =====

undefined8 FUN_710072ca50(long *param_1)

{
  if (*param_1 != 0) {
    param_1[6] = 0;
    return 0;
  }
  return 0xffff9f00;
}



// ===== FUN_710072ca70 @ 710072ca70 (size=1036) =====

undefined8 FUN_710072ca70(long *param_1,long param_2,ulong param_3,long param_4,ulong *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  piVar3 = (int *)*param_1;
  if (piVar3 == (int *)0x0) {
    return 0xffff9f00;
  }
  uVar6 = (ulong)(uint)piVar3[8];
  *param_5 = 0;
  if (uVar6 == 0) {
    return 0xffff9c80;
  }
  iVar2 = piVar3[1];
  if (iVar2 == 1) {
    if (uVar6 == param_3) {
      lVar7 = param_1[10];
      uVar1 = *(undefined4 *)((long)param_1 + 0xc);
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(piVar3 + 10) + 8);
      *param_5 = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00710072cb74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*UNRECOVERED_JUMPTABLE)(lVar7,uVar1,param_2);
      return uVar4;
    }
    return 0xffff9d80;
  }
  if (iVar2 == 6) {
    lVar7 = param_1[10];
    *param_5 = param_3;
    uVar4 = FUN_7100737770(lVar7,param_3,param_2);
    return uVar4;
  }
  if (*piVar3 == 0x49) {
    lVar7 = param_1[10];
    *param_5 = param_3;
    uVar4 = FUN_7100747060(lVar7,param_3,param_2);
    return uVar4;
  }
  if (param_2 == param_4) {
    if (param_1[6] != 0) {
      return 0xffff9f00;
    }
    uVar5 = 0;
    if (uVar6 != 0) {
      uVar5 = param_3 / uVar6;
    }
    if (param_3 != uVar5 * uVar6) {
      return 0xffff9f00;
    }
  }
  if (iVar2 != 2) {
    if (iVar2 == 3) {
      uVar4 = (**(code **)(*(long *)(piVar3 + 10) + 0x18))
                        (param_1[10],*(undefined4 *)((long)param_1 + 0xc),param_3,param_1 + 6,
                         param_1 + 7,param_2,param_4);
      iVar2 = (int)uVar4;
    }
    else if (iVar2 == 4) {
      uVar4 = (**(code **)(*(long *)(piVar3 + 10) + 0x20))
                        (param_1[10],param_3,param_1 + 6,param_1 + 7,param_2,param_4);
      iVar2 = (int)uVar4;
    }
    else if (iVar2 == 5) {
      uVar4 = (**(code **)(*(long *)(piVar3 + 10) + 0x28))
                        (param_1[10],param_3,param_1 + 6,param_1 + 7,param_1 + 4,param_2,param_4);
      iVar2 = (int)uVar4;
    }
    else if (iVar2 == 9) {
      if (param_1[6] != 0) {
        return 0xffff9f80;
      }
      uVar4 = (**(code **)(*(long *)(piVar3 + 10) + 0x30))
                        (param_1[10],*(undefined4 *)((long)param_1 + 0xc),param_3,param_1 + 7,
                         param_2,param_4);
      iVar2 = (int)uVar4;
    }
    else {
      if (iVar2 != 7) {
        return 0xffff9f80;
      }
      uVar4 = (**(code **)(*(long *)(piVar3 + 10) + 0x38))(param_1[10],param_3,param_2,param_4);
      iVar2 = (int)uVar4;
    }
    if (iVar2 != 0) {
      return uVar4;
    }
    *param_5 = param_3;
    return uVar4;
  }
  lVar7 = param_1[6];
  if (*(int *)((long)param_1 + 0xc) == 0) {
    uVar5 = uVar6 - lVar7;
    if (param_1[2] == 0) goto joined_r0x00710072cc30;
    if (param_3 <= uVar5) goto LAB_710072cb9c;
    if (lVar7 != 0) goto LAB_710072cd64;
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = param_3 / uVar5;
    }
    uVar8 = param_3 - uVar6 * uVar5;
    if (uVar8 == 0) {
      uVar8 = uVar5;
    }
  }
  else {
    if (*(int *)((long)param_1 + 0xc) == 1) {
      uVar5 = uVar6 - lVar7;
joined_r0x00710072cc30:
      if (param_3 < uVar5) {
LAB_710072cb9c:
        FUN_710080f900((long)param_1 + lVar7 + 0x20,param_2,param_3);
        param_1[6] = param_1[6] + param_3;
        return 0;
      }
    }
    if (lVar7 != 0) {
      uVar5 = uVar6 - lVar7;
LAB_710072cd64:
      FUN_710080f900((long)param_1 + lVar7 + 0x20,param_2,uVar5);
      uVar4 = (**(code **)(*(long *)(*param_1 + 0x28) + 0x10))
                        (param_1[10],*(undefined4 *)((long)param_1 + 0xc),uVar6,param_1 + 7,
                         param_1 + 4,param_4);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      param_4 = param_4 + uVar6;
      param_3 = (param_3 + lVar7) - uVar6;
      param_2 = param_2 + uVar5;
      *param_5 = *param_5 + uVar6;
      param_1[6] = 0;
    }
    if (param_3 == 0) {
      return 0;
    }
    uVar5 = 0;
    if (uVar6 != 0) {
      uVar5 = param_3 / uVar6;
    }
    uVar8 = param_3 - uVar5 * uVar6;
    if ((uVar8 == 0) &&
       ((iVar2 = *(int *)((long)param_1 + 0xc), iVar2 != 0 || (uVar8 = uVar6, param_1[2] == 0))))
    goto LAB_710072cc50;
  }
  param_3 = param_3 - uVar8;
  FUN_710080f900(param_1 + 4,param_2 + param_3,uVar8);
  param_1[6] = param_1[6] + uVar8;
  if (param_3 == 0) {
    return 0;
  }
  iVar2 = *(int *)((long)param_1 + 0xc);
LAB_710072cc50:
  uVar4 = (**(code **)(*(long *)(*param_1 + 0x28) + 0x10))
                    (param_1[10],iVar2,param_3,param_1 + 7,param_2,param_4);
  if ((int)uVar4 == 0) {
    *param_5 = *param_5 + param_3;
    return uVar4;
  }
  return uVar4;
}



// ===== FUN_710072ce80 @ 710072ce80 (size=384) =====

undefined8 FUN_710072ce80(long *param_1,undefined8 param_2,ulong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  int *piVar6;
  
  piVar6 = (int *)*param_1;
  if (piVar6 == (int *)0x0) {
    return 0xffff9f00;
  }
  iVar1 = piVar6[1];
  *param_3 = 0;
  if ((4 < iVar1 - 3U && iVar1 != 9) && (1 < *piVar6 - 0x48U)) {
    if (iVar1 == 1) {
      if (param_1[6] != 0) {
        return 0xffff9d80;
      }
    }
    else {
      if (iVar1 != 2) {
        return 0xffff9f80;
      }
      iVar1 = *(int *)((long)param_1 + 0xc);
      uVar5 = param_1[6];
      if (iVar1 == 1) {
        if ((code *)param_1[2] == (code *)0x0) {
          if (uVar5 == 0) {
            return 0;
          }
          return 0xffff9d80;
        }
        uVar5 = param_1[9];
        if (uVar5 == 0) {
          uVar5 = (ulong)(uint)piVar6[6];
        }
        (*(code *)param_1[2])(param_1 + 4,(long)(int)uVar5);
        piVar6 = (int *)*param_1;
        iVar1 = *(int *)((long)param_1 + 0xc);
        uVar5 = (ulong)(uint)piVar6[8];
      }
      else if ((uint)piVar6[8] != uVar5) {
        if (param_1[2] == 0 && uVar5 == 0) {
          return 0;
        }
        return 0xffff9d80;
      }
      uVar2 = (**(code **)(*(long *)(piVar6 + 10) + 0x10))
                        (param_1[10],iVar1,uVar5,param_1 + 7,param_1 + 4,param_2);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      lVar3 = *param_1;
      if (*(int *)((long)param_1 + 0xc) == 0) {
        if (lVar3 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(lVar3 + 0x20);
        }
                    /* WARNING: Could not recover jumptable at 0x00710072cfa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)param_1[3])(param_2,uVar4,param_3);
        return uVar2;
      }
      if (lVar3 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (ulong)*(uint *)(lVar3 + 0x20);
      }
      *param_3 = uVar5;
    }
  }
  return 0;
}



// ===== FUN_710072d000 @ 710072d000 (size=200) =====

undefined8 FUN_710072d000(long *param_1,uint param_2)

{
  if ((*param_1 != 0) && (*(int *)(*param_1 + 4) == 2)) {
    if (param_2 == 2) {
      param_1[2] = (long)&LAB_710072c640;
      param_1[3] = (long)&LAB_710072c680;
    }
    else if (param_2 < 3) {
      if (param_2 == 0) {
        param_1[2] = (long)&LAB_710072c540;
        param_1[3] = (long)&LAB_710072c580;
      }
      else {
        param_1[2] = (long)&LAB_710072c600;
        param_1[3] = (long)&LAB_710072c790;
      }
    }
    else if (param_2 == 3) {
      param_1[2] = (long)&LAB_710072c6f0;
      param_1[3] = (long)&LAB_710072c730;
    }
    else {
      if (param_2 != 4) {
        return 0xffff9f80;
      }
      param_1[2] = 0;
      param_1[3] = (long)&LAB_710072c710;
    }
    return 0;
  }
  return 0xffff9f00;
}



// ===== FUN_710072d0d0 @ 710072d0d0 (size=112) =====

undefined8 FUN_710072d0d0(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
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
    lVar1 = (**(code **)(*(long *)(param_2 + 0x28) + 0x50))();
    param_1[10] = lVar1;
    if (lVar1 == 0) {
      uVar2 = 0xffff9e80;
    }
    else {
      *param_1 = param_2;
      FUN_710072d000(param_1,0);
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0xffff9f00;
}



// ===== FUN_710072d140 @ 710072d140 (size=152) =====

void FUN_710072d140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,long param_6,long *param_7)

{
  int iVar1;
  long local_8;
  
  iVar1 = FUN_710072c980();
  if ((((iVar1 == 0) && (iVar1 = FUN_710072ca50(param_1), iVar1 == 0)) &&
      (iVar1 = FUN_710072ca70(param_1,param_4,param_5,param_6,param_7), iVar1 == 0)) &&
     (iVar1 = FUN_710072ce80(param_1,param_6 + *param_7,&local_8), iVar1 == 0)) {
    *param_7 = *param_7 + local_8;
  }
  return;
}



// ===== FUN_710072d1e0 @ 710072d1e0 (size=36) =====

void FUN_710072d1e0(undefined8 param_1)

{
  FUN_7100747010();
  FUN_710081c200(param_1);
  return;
}



// ===== FUN_710072d210 @ 710072d210 (size=52) =====

long FUN_710072d210(void)

{
  long lVar1;
  
  lVar1 = FUN_710080e9e0(1,0xf0);
  if (lVar1 != 0) {
    FUN_7100746fe0();
  }
  return lVar1;
}



// ===== FUN_710072d258 @ 710072d258 (size=32) =====

undefined8 FUN_710072d258(void)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_7100746d10();
  if ((int)uVar1 != 0) {
    uVar1 = 0xffff9f00;
  }
  return uVar1;
}



// ===== FUN_710072d280 @ 710072d280 (size=36) =====

void FUN_710072d280(undefined8 param_1)

{
  FUN_7100746d00();
  FUN_710081c200(param_1);
  return;
}



// ===== FUN_710072d2b0 @ 710072d2b0 (size=52) =====

long FUN_710072d2b0(void)

{
  long lVar1;
  
  lVar1 = FUN_710080e9e0(1,0x88);
  if (lVar1 != 0) {
    FUN_7100746cc0();
  }
  return lVar1;
}



// ===== FUN_710072d2f8 @ 710072d2f8 (size=32) =====

undefined8 FUN_710072d2f8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100746d10();
  if ((int)uVar1 != 0) {
    uVar1 = 0xffff9f00;
  }
  return uVar1;
}



// ===== FUN_710072d320 @ 710072d320 (size=36) =====

undefined8 FUN_710072d320(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100746de0();
  if ((int)uVar1 == -0x51) {
    uVar1 = 0xffff9f00;
  }
  return uVar1;
}



// ===== FUN_710072d350 @ 710072d350 (size=36) =====

void FUN_710072d350(undefined8 param_1)

{
  FUN_710072e9a0();
  FUN_710081c200(param_1);
  return;
}



// ===== FUN_710072d380 @ 710072d380 (size=52) =====

long FUN_710072d380(void)

{
  long lVar1;
  
  lVar1 = FUN_710080e9e0(1,0x180);
  if (lVar1 != 0) {
    FUN_710072e990();
  }
  return lVar1;
}



// ===== FUN_710072d420 @ 710072d420 (size=36) =====

void FUN_710072d420(undefined8 param_1)

{
  FUN_710072e980();
  FUN_710081c200(param_1);
  return;
}



// ===== FUN_710072d450 @ 710072d450 (size=52) =====

long FUN_710072d450(void)

{
  long lVar1;
  
  lVar1 = FUN_710080e9e0(1,0x80);
  if (lVar1 != 0) {
    FUN_710072e960();
  }
  return lVar1;
}



// ===== FUN_710072d4d0 @ 710072d4d0 (size=36) =====

void FUN_710072d4d0(undefined8 param_1)

{
  FUN_7100746960();
  FUN_710081c200(param_1);
  return;
}



// ===== FUN_710072d500 @ 710072d500 (size=52) =====

long FUN_710072d500(void)

{
  long lVar1;
  
  lVar1 = FUN_710080e9e0(1,0x58);
  if (lVar1 != 0) {
    FUN_71007468b0();
  }
  return lVar1;
}



// ===== FUN_710072d560 @ 710072d560 (size=36) =====

void FUN_710072d560(undefined8 param_1)

{
  FUN_7100737940();
  FUN_710081c200(param_1);
  return;
}



// ===== FUN_710072d590 @ 710072d590 (size=52) =====

long FUN_710072d590(void)

{
  long lVar1;
  
  lVar1 = FUN_710080e9e0(1,0x1a0);
  if (lVar1 != 0) {
    FUN_71007375e0();
  }
  return lVar1;
}



// ===== FUN_710072d5f0 @ 710072d5f0 (size=36) =====

void FUN_710072d5f0(undefined8 param_1)

{
  FUN_7100745d40();
  FUN_710081c200(param_1);
  return;
}



// ===== FUN_710072d620 @ 710072d620 (size=52) =====

long FUN_710072d620(void)

{
  long lVar1;
  
  lVar1 = FUN_710080e9e0(1,0x114);
  if (lVar1 != 0) {
    FUN_7100745d30();
  }
  return lVar1;
}



// ===== FUN_710072d6c0 @ 710072d6c0 (size=36) =====

void FUN_710072d6c0(undefined8 param_1)

{
  FUN_71007456e0();
  FUN_710081c200(param_1);
  return;
}



// ===== FUN_710072d6f0 @ 710072d6f0 (size=52) =====

long FUN_710072d6f0(void)

{
  long lVar1;
  
  lVar1 = FUN_710080e9e0(1,0x1048);
  if (lVar1 != 0) {
    FUN_71007456d0();
  }
  return lVar1;
}



// ===== FUN_710072d780 @ 710072d780 (size=36) =====

void FUN_710072d780(undefined8 param_1)

{
  FUN_7100744e10();
  FUN_710081c200(param_1);
  return;
}



// ===== FUN_710072d7b0 @ 710072d7b0 (size=52) =====

long FUN_710072d7b0(void)

{
  long lVar1;
  
  lVar1 = FUN_710080e9e0(1,0x108);
  if (lVar1 != 0) {
    FUN_7100744e00();
  }
  return lVar1;
}



// ===== FUN_710072d830 @ 710072d830 (size=52) =====

long FUN_710072d830(void)

{
  long lVar1;
  
  lVar1 = FUN_710080e9e0(1,0x240);
  if (lVar1 != 0) {
    FUN_7100743790();
  }
  return lVar1;
}



// ===== FUN_710072d8b0 @ 710072d8b0 (size=36) =====

void FUN_710072d8b0(undefined8 param_1)

{
  FUN_7100743780();
  FUN_710081c200(param_1);
  return;
}



// ===== FUN_710072d8e0 @ 710072d8e0 (size=52) =====

long FUN_710072d8e0(void)

{
  long lVar1;
  
  lVar1 = FUN_710080e9e0(1,0x120);
  if (lVar1 != 0) {
    FUN_7100743770();
  }
  return lVar1;
}



// ===== FUN_710072d990 @ 710072d990 (size=44) =====

void FUN_710072d990(long param_1)

{
  if (param_1 != 0) {
    FUN_71007437c0();
    FUN_710081c200(param_1);
    return;
  }
  return;
}



// ===== FUN_710072d9c0 @ 710072d9c0 (size=68) =====

byte FUN_710072d9c0(byte *param_1,byte *param_2,long param_3)

{
  byte *pbVar1;
  byte local_1;
  byte *pbVar2;
  
  local_1 = 0;
  if (param_3 != 0) {
    pbVar2 = param_1;
    do {
      pbVar1 = pbVar2 + 1;
      local_1 = *param_2 ^ *pbVar2 | local_1;
      pbVar2 = pbVar1;
      param_2 = param_2 + 1;
    } while (pbVar1 != param_1 + param_3);
  }
  return local_1;
}



// ===== FUN_710072da10 @ 710072da10 (size=16) =====

int FUN_710072da10(uint param_1)

{
  return (int)(-param_1 | param_1) >> 0x1f;
}



// ===== FUN_710072da20 @ 710072da20 (size=16) =====

long FUN_710072da20(ulong param_1)

{
  return (long)(-param_1 | param_1) >> 0x3f;
}



// ===== FUN_710072da30 @ 710072da30 (size=24) =====

uint FUN_710072da30(ulong param_1,ulong param_2)

{
  return ((uint)(-(param_1 ^ param_2) >> 0x20) | (uint)((param_1 ^ param_2) >> 0x20)) >> 0x1f ^ 1;
}



// ===== FUN_710072da50 @ 710072da50 (size=32) =====

ulong FUN_710072da50(ulong param_1,ulong param_2)

{
  return ((param_2 ^ param_1 - param_2) & (param_1 ^ param_2) ^ param_1 - param_2) >> 0x3f;
}



// ===== FUN_710072da70 @ 710072da70 (size=48) =====

uint FUN_710072da70(undefined8 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = FUN_710072da10();
  return (param_2 ^ param_3) & uVar1 ^ param_3;
}



// ===== FUN_710072daa0 @ 710072daa0 (size=72) =====

void FUN_710072daa0(long param_1,long param_2,long param_3,uint param_4)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    do {
      *(ulong *)(param_2 + lVar1 * 8) =
           (long)(int)-(param_4 & 0xff) & *(ulong *)(param_3 + lVar1 * 8) |
           (long)(int)((param_4 & 0xff) - 1) & *(ulong *)(param_2 + lVar1 * 8);
      lVar1 = lVar1 + 1;
    } while (param_1 != lVar1);
  }
  return;
}



// ===== FUN_710072daf0 @ 710072daf0 (size=208) =====

int FUN_710072daf0(uint param_1)

{
  param_1 = param_1 & 0xff;
  return (~((0x5a - param_1 | param_1 - 0x41) >> 8) & 0xff & param_1 - 0x40 |
          ~((0x7a - param_1 | param_1 - 0x61) >> 8) & 0xff & param_1 - 0x46 |
          ~((0x2f - param_1 | param_1 - 0x2f) >> 8) & 0xff & param_1 + 0x11 |
         ~((0x39 - param_1 | param_1 - 0x30) >> 8) & 0xff & param_1 + 5 |
         ~((0x2b - param_1 | param_1 - 0x2b) >> 8) & 0xff & param_1 + 0x14) - 1;
}



// ===== FUN_710072dbc0 @ 710072dbc0 (size=220) =====

int FUN_710072dbc0(int *param_1,int *param_2,byte param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar4 = FUN_710072da20(param_3);
  iVar3 = FUN_71007296f0(param_1,*(undefined8 *)(param_2 + 2));
  if (iVar3 == 0) {
    uVar1 = *(undefined8 *)(param_2 + 2);
    uVar2 = *(undefined8 *)(param_2 + 4);
    *param_1 = ((*param_2 + 1U ^ *param_1 + 1U) & (uint)param_3 << 1 ^ *param_1 + 1U) - 1;
    FUN_710072daa0(uVar1,*(undefined8 *)(param_1 + 4),uVar2,(uint)param_3);
    uVar5 = *(ulong *)(param_2 + 2);
    if (uVar5 < *(ulong *)(param_1 + 2)) {
      lVar6 = *(long *)(param_1 + 4);
      do {
        *(ulong *)(lVar6 + uVar5 * 8) = *(ulong *)(lVar6 + uVar5 * 8) & ~uVar4;
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ulong *)(param_1 + 2));
      return 0;
    }
  }
  return iVar3;
}



// ===== FUN_710072dca0 @ 710072dca0 (size=272) =====

undefined8 FUN_710072dca0(int *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  if (param_1 == param_2) {
    return 0;
  }
  uVar3 = FUN_710072da20(param_3 & 0xff);
  uVar4 = FUN_71007296f0(param_1,*(undefined8 *)(param_2 + 2));
  if (((int)uVar4 == 0) &&
     (uVar4 = FUN_71007296f0(param_2,*(undefined8 *)(param_1 + 2)), (int)uVar4 == 0)) {
    uVar2 = (param_3 & 0xff) << 1;
    lVar6 = *(long *)(param_1 + 2);
    uVar1 = *param_1 + 1;
    *param_1 = ((*param_2 + 1U ^ uVar1) & uVar2 ^ uVar1) - 1;
    *param_2 = ((*param_2 + 1U ^ uVar1) & uVar2 ^ *param_2 + 1U) - 1;
    if (lVar6 != 0) {
      lVar9 = *(long *)(param_1 + 4);
      uVar5 = 0;
      lVar6 = *(long *)(param_2 + 4);
      do {
        uVar7 = *(ulong *)(lVar9 + uVar5 * 8);
        *(ulong *)(lVar9 + uVar5 * 8) = (*(ulong *)(lVar6 + uVar5 * 8) ^ uVar7) & uVar3 ^ uVar7;
        uVar8 = *(ulong *)(lVar6 + uVar5 * 8);
        *(ulong *)(lVar6 + uVar5 * 8) = (uVar7 ^ uVar8) & uVar3 ^ uVar8;
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ulong *)(param_1 + 2));
    }
    return 0;
  }
  return uVar4;
}



// ===== FUN_710072ddb0 @ 710072ddb0 (size=256) =====

undefined8 FUN_710072ddb0(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 2);
  if (lVar8 == *(long *)(param_2 + 2)) {
    uVar2 = (int)(*param_2 ^ *param_1) >> 1;
    uVar3 = *param_1 >> 1 & 1;
    uVar1 = uVar2 & 1;
    *param_3 = uVar3 & uVar2;
    for (; lVar8 != 0; lVar8 = lVar8 + -1) {
      lVar7 = lVar8 * 8 + -8;
      uVar4 = FUN_710072da50(*(undefined8 *)(*(long *)(param_2 + 4) + lVar7),
                             *(undefined8 *)(*(long *)(param_1 + 4) + lVar7));
      uVar2 = uVar4 | uVar1;
      lVar6 = *(long *)(param_1 + 4);
      uVar5 = *(undefined8 *)(*(long *)(param_2 + 4) + lVar7);
      *param_3 = *param_3 | 1 - uVar1 & uVar3 & uVar4;
      uVar4 = FUN_710072da50(*(undefined8 *)(lVar6 + lVar7),uVar5);
      uVar1 = uVar2 | uVar4;
      *param_3 = *param_3 | 1 - uVar2 & uVar4 & (uVar3 ^ 1);
    }
    uVar5 = 0;
  }
  else {
    uVar5 = 0xfffffffc;
  }
  return uVar5;
}



// ===== FUN_710072deb0 @ 710072deb0 (size=732) =====

int FUN_710072deb0(int param_1,byte *param_2,ulong param_3,undefined8 param_4,ulong param_5,
                  ulong *param_6)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  
  uVar1 = param_3 - 0xb;
  if (param_5 < param_3 - 0xb) {
    uVar1 = param_5;
  }
  if (param_1 == 1) {
    uVar5 = (uint)*param_2 | param_2[1] ^ 2;
    if (param_3 < 3) {
      lVar12 = 0;
      uVar4 = 0;
      uVar3 = 1;
      goto LAB_710072df78;
    }
    uVar4 = 0;
    lVar12 = 0;
    pbVar10 = param_2 + 2;
    do {
      pbVar13 = pbVar10 + 1;
      uVar4 = uVar4 | ((uint)*pbVar10 | -(uint)*pbVar10) >> 7 & 1 ^ 1;
      lVar12 = lVar12 + (((ulong)-uVar4 ^ 0x80) >> 7 & 1);
      pbVar10 = pbVar13;
    } while (param_2 + param_3 != pbVar13);
  }
  else {
    uVar5 = (uint)*param_2 | param_2[1] ^ 1;
    if (param_3 < 3) {
      lVar12 = 0;
      uVar4 = 0;
      uVar3 = 1;
      goto LAB_710072df78;
    }
    uVar4 = 0;
    lVar12 = 0;
    pbVar10 = param_2 + 2;
    do {
      uVar3 = FUN_710072da70(*pbVar10,0,1);
      uVar4 = uVar4 | uVar3 & 0xff;
      uVar8 = FUN_710072da70(uVar4,0,1);
      pbVar13 = pbVar10 + 1;
      lVar12 = lVar12 + (uVar8 & 0xffffffff);
      uVar3 = FUN_710072da70(uVar4,0,~*pbVar10);
      uVar5 = uVar5 | uVar3;
      pbVar10 = pbVar13;
    } while (param_2 + param_3 != pbVar13);
  }
  uVar3 = (uint)((ulong)(lVar12 + -8) >> 0x3f);
LAB_710072df78:
  uVar4 = FUN_710072da70(uVar4,0,1);
  uVar4 = uVar5 | uVar3 | uVar4;
  uVar5 = FUN_710072da70(uVar4,uVar1 & 0xffffffff,((int)param_3 + -3) - (int)lVar12);
  uVar6 = FUN_710072da70(uVar1 - uVar5 >> 0x3f,0x4400,0);
  iVar7 = FUN_710072da70(uVar4,0x4100,uVar6);
  uVar3 = (uint)(uVar1 - uVar5 >> 0x3f);
  bVar2 = FUN_710072da10(uVar4 | uVar3);
  if (0xb < param_3) {
    pbVar10 = param_2 + 0xb;
    do {
      pbVar13 = pbVar10 + 1;
      *pbVar10 = ~bVar2 & *pbVar10;
      pbVar10 = pbVar13;
    } while (param_2 + param_3 != pbVar13);
  }
  lVar12 = param_3 - uVar1;
  uVar8 = FUN_710072da70(uVar3,uVar1 & 0xffffffff,uVar5);
  uVar8 = uVar8 & 0xffffffff;
  pbVar10 = param_2 + lVar12;
  if (uVar1 != 0) {
    uVar11 = -uVar8;
    uVar9 = uVar11 >> 0x3f;
    if (uVar1 == 1) {
      bVar2 = FUN_710072da70(uVar9,param_2[lVar12],0);
      param_2[lVar12] = bVar2;
    }
    else {
      pbVar13 = pbVar10 + (uVar1 - 1);
      pbVar14 = pbVar10;
      while( true ) {
        do {
          pbVar15 = pbVar14 + 1;
          bVar2 = FUN_710072da70(uVar9,*pbVar14,*pbVar15);
          *pbVar14 = bVar2;
          pbVar14 = pbVar15;
        } while (pbVar13 != pbVar15);
        uVar11 = uVar11 + 1;
        bVar2 = FUN_710072da70(uVar9,*pbVar13,0);
        *pbVar13 = bVar2;
        if (uVar1 - uVar8 == uVar11) break;
        uVar9 = uVar11 >> 0x3f;
        pbVar14 = pbVar10;
      }
    }
  }
  if (param_5 != 0) {
    FUN_710080f900(param_4,pbVar10,uVar1);
  }
  *param_6 = uVar8;
  return -iVar7;
}



// ===== FUN_710072e190 @ 710072e190 (size=584) =====

int FUN_710072e190(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *local_338;
  int local_324;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 auStack_2f0 [4];
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined1 auStack_2c0 [288];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined2 local_190;
  ushort local_18e;
  undefined1 local_189;
  undefined1 auStack_188 [392];
  
  if (0x180 < param_3) {
    return -0x38;
  }
  FUN_7100808340(&uStack_1a0,0,0x1a0);
  FUN_7100743770(auStack_2c0);
  local_18e = (ushort)(param_3 >> 8) & 0xff | (ushort)(((uint)param_3 & 0xff00ff) << 8);
  local_190 = 0;
  local_189 = 0x30;
  lVar3 = FUN_710080f900(auStack_188,param_2,param_3);
  *(undefined1 *)(lVar3 + param_3) = 0x80;
  uStack_308 = 0xf0e0d0c0b0a0908;
  local_310 = 0x706050403020100;
  uStack_300 = 0x1716151413121110;
  uStack_2f8 = 0x1f1e1d1c1b1a1918;
  iVar2 = FUN_71007437f0(auStack_2c0,&local_310,0x100);
  if (iVar2 == 0) {
    local_324 = 3;
    local_338 = auStack_2f0;
    do {
      local_320 = 0;
      uStack_318 = 0;
      uVar5 = param_3 + 0x19;
      puVar6 = &uStack_1a0;
      do {
        uVar1 = uVar5;
        if (0x10 < uVar5) {
          uVar1 = 0x10;
        }
        uVar8 = puVar6[1];
        uVar4 = *puVar6;
        uVar5 = uVar5 - uVar1;
        local_320 = CONCAT17(local_320._7_1_ ^ (byte)((ulong)uVar4 >> 0x38),
                             CONCAT16(local_320._6_1_ ^ (byte)((ulong)uVar4 >> 0x30),
                                      CONCAT15(local_320._5_1_ ^ (byte)((ulong)uVar4 >> 0x28),
                                               CONCAT14(local_320._4_1_ ^
                                                        (byte)((ulong)uVar4 >> 0x20),
                                                        CONCAT13(local_320._3_1_ ^
                                                                 (byte)((ulong)uVar4 >> 0x18),
                                                                 CONCAT12(local_320._2_1_ ^
                                                                          (byte)((ulong)uVar4 >>
                                                                                0x10),
                                                                          CONCAT11(local_320._1_1_ ^
                                                                                   (byte)((ulong)
                                                  uVar4 >> 8),(byte)local_320 ^ (byte)uVar4)))))));
        uStack_318 = CONCAT17(uStack_318._7_1_ ^ (byte)((ulong)uVar8 >> 0x38),
                              CONCAT16(uStack_318._6_1_ ^ (byte)((ulong)uVar8 >> 0x30),
                                       CONCAT15(uStack_318._5_1_ ^ (byte)((ulong)uVar8 >> 0x28),
                                                CONCAT14(uStack_318._4_1_ ^
                                                         (byte)((ulong)uVar8 >> 0x20),
                                                         CONCAT13(uStack_318._3_1_ ^
                                                                  (byte)((ulong)uVar8 >> 0x18),
                                                                  CONCAT12(uStack_318._2_1_ ^
                                                                           (byte)((ulong)uVar8 >>
                                                                                 0x10),
                                                                           CONCAT11(uStack_318._1_1_
                                                                                    ^ (byte)((ulong)
                                                  uVar8 >> 8),(byte)uStack_318 ^ (byte)uVar8)))))));
        iVar2 = FUN_7100744790(auStack_2c0,1,&local_320,&local_320);
        if (iVar2 != 0) goto LAB_710072e368;
        puVar6 = puVar6 + 2;
      } while (uVar5 != 0);
      local_324 = local_324 + -1;
      uStack_1a0._3_1_ = uStack_1a0._3_1_ + '\x01';
      *local_338 = local_320;
      local_338[1] = uStack_318;
      local_338 = local_338 + 2;
    } while (local_324 != 0);
    iVar2 = FUN_71007437f0(auStack_2c0,auStack_2f0,0x100);
    if (iVar2 == 0) {
      puVar6 = param_1;
      do {
        iVar2 = FUN_7100744790(auStack_2c0,1,&local_2d0,&local_2d0);
        if (iVar2 != 0) goto LAB_710072e368;
        puVar7 = puVar6 + 2;
        *puVar6 = local_2d0;
        puVar6[1] = uStack_2c8;
        puVar6 = puVar7;
      } while (puVar7 != param_1 + 6);
      FUN_7100743780(auStack_2c0);
      FUN_710073b460(&uStack_1a0,0x1a0);
      FUN_710073b460(auStack_2f0,0x30);
      FUN_710073b460(&local_310,0x20);
      uVar4 = 0x10;
      param_1 = &local_320;
      goto LAB_710072e3a8;
    }
  }
LAB_710072e368:
  FUN_7100743780(auStack_2c0);
  FUN_710073b460(&uStack_1a0,0x1a0);
  FUN_710073b460(auStack_2f0,0x30);
  FUN_710073b460(&local_310,0x20);
  FUN_710073b460(&local_320,0x10);
  uVar4 = 0x30;
LAB_710072e3a8:
  FUN_710073b460(param_1,uVar4);
  return iVar2;
}



// ===== FUN_710072e3e0 @ 710072e3e0 (size=256) =====

int FUN_710072e3e0(char *param_1,long param_2)

{
  char cVar1;
  byte *pbVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  char *pcVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  undefined8 local_30 [6];
  
  iVar8 = 3;
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  local_30[4] = 0;
  local_30[5] = 0;
  pcVar7 = param_1 + 0xf;
  puVar6 = local_30;
LAB_710072e428:
  do {
    bVar3 = pcVar7 != param_1;
    cVar1 = *pcVar7;
    *pcVar7 = cVar1 + '\x01';
    if ((char)(cVar1 + '\x01') == '\0') {
      pcVar7 = pcVar7 + -1;
      if (bVar3) goto LAB_710072e428;
    }
    iVar4 = FUN_7100744790(param_1 + 0x28,1,param_1,puVar6);
    if (iVar4 != 0) goto LAB_710072e4b8;
    iVar8 = iVar8 + -1;
    puVar6 = puVar6 + 2;
    pcVar7 = param_1 + 0xf;
    if (iVar8 == 0) {
      lVar5 = 0;
      puVar6 = local_30;
      do {
        pbVar2 = (byte *)(param_2 + lVar5);
        bVar11 = *pbVar2;
        bVar12 = pbVar2[1];
        bVar13 = pbVar2[2];
        bVar14 = pbVar2[3];
        bVar15 = pbVar2[4];
        bVar16 = pbVar2[5];
        bVar17 = pbVar2[6];
        bVar18 = pbVar2[7];
        lVar5 = lVar5 + 0x10;
        uVar10 = puVar6[1];
        uVar9 = *puVar6;
        puVar6[1] = CONCAT17((byte)((ulong)uVar10 >> 0x38) ^ pbVar2[0xf],
                             CONCAT16((byte)((ulong)uVar10 >> 0x30) ^ pbVar2[0xe],
                                      CONCAT15((byte)((ulong)uVar10 >> 0x28) ^ pbVar2[0xd],
                                               CONCAT14((byte)((ulong)uVar10 >> 0x20) ^ pbVar2[0xc],
                                                        CONCAT13((byte)((ulong)uVar10 >> 0x18) ^
                                                                 pbVar2[0xb],
                                                                 CONCAT12((byte)((ulong)uVar10 >>
                                                                                0x10) ^ pbVar2[10],
                                                                          CONCAT11((byte)((ulong)
                                                  uVar10 >> 8) ^ pbVar2[9],(byte)uVar10 ^ pbVar2[8])
                                                  ))))));
        *puVar6 = CONCAT17((byte)((ulong)uVar9 >> 0x38) ^ bVar18,
                           CONCAT16((byte)((ulong)uVar9 >> 0x30) ^ bVar17,
                                    CONCAT15((byte)((ulong)uVar9 >> 0x28) ^ bVar16,
                                             CONCAT14((byte)((ulong)uVar9 >> 0x20) ^ bVar15,
                                                      CONCAT13((byte)((ulong)uVar9 >> 0x18) ^ bVar14
                                                               ,CONCAT12((byte)((ulong)uVar9 >> 0x10
                                                                               ) ^ bVar13,
                                                                         CONCAT11((byte)((ulong)
                                                  uVar9 >> 8) ^ bVar12,(byte)uVar9 ^ bVar11)))))));
        puVar6 = puVar6 + 2;
      } while (lVar5 != 0x30);
      iVar4 = FUN_71007437f0(param_1 + 0x28,local_30,0x100);
      if (iVar4 == 0) {
        *(undefined8 *)param_1 = local_30[4];
        *(undefined8 *)(param_1 + 8) = local_30[5];
      }
LAB_710072e4b8:
      FUN_710073b460(local_30,0x30);
      return iVar4;
    }
  } while( true );
}



// ===== FUN_710072e4e0 @ 710072e4e0 (size=308) =====

int FUN_710072e4e0(long param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_180 [384];
  
  uVar3 = *(ulong *)(param_1 + 0x18);
  if (0x180 < uVar3) {
    return -0x38;
  }
  if ((0x180 - uVar3 < param_4) || ((0x180 - param_4) - uVar3 < param_3)) {
    return -0x38;
  }
  FUN_7100808340(auStack_180,0);
  iVar2 = (**(code **)(param_1 + 0x148))(*(undefined8 *)(param_1 + 0x150),auStack_180,uVar3);
  if (iVar2 == 0) {
    lVar4 = *(long *)(param_1 + 0x18);
    if (param_4 != 0) {
      iVar2 = (**(code **)(param_1 + 0x148))
                        (*(undefined8 *)(param_1 + 0x150),auStack_180 + lVar4,param_4);
      if (iVar2 != 0) goto LAB_710072e600;
      lVar4 = lVar4 + param_4;
    }
    if (param_2 != 0 && param_3 != 0) {
      puVar1 = auStack_180 + lVar4;
      lVar4 = lVar4 + param_3;
      FUN_710080f900(puVar1,param_2,param_3);
    }
    iVar2 = FUN_710072e190(auStack_180,auStack_180,lVar4);
    if ((iVar2 == 0) && (iVar2 = FUN_710072e3e0(param_1,auStack_180), iVar2 == 0)) {
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    FUN_710073b460(auStack_180,0x180);
  }
  else {
LAB_710072e600:
    iVar2 = -0x34;
  }
  return iVar2;
}



// ===== FUN_710072e620 @ 710072e620 (size=56) =====

void FUN_710072e620(long param_1)

{
  FUN_7100808340(param_1,0,0x158);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 10000;
  return;
}



// ===== FUN_710072e660 @ 710072e660 (size=72) =====

void FUN_710072e660(long param_1)

{
  if (param_1 != 0) {
    FUN_7100743780(param_1 + 0x28);
    FUN_710073b460(param_1,0x158);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x20) = 10000;
    return;
  }
  return;
}



// ===== FUN_710072e6b0 @ 710072e6b0 (size=8) =====

void FUN_710072e6b0(void)

{
  FUN_710072e4e0();
  return;
}



// ===== FUN_710072e6c0 @ 710072e6c0 (size=196) =====

void FUN_710072e6c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_20 = 0;
  uStack_18 = 0;
  local_10 = 0;
  uStack_8 = 0;
  FUN_7100743770(param_1 + 0x28);
  uVar2 = *(ulong *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x148) = param_2;
  *(undefined8 *)(param_1 + 0x150) = param_3;
  iVar1 = *(int *)(param_1 + 0x10);
  if (uVar2 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0x30;
    if (iVar1 < 0) {
LAB_710072e77c:
      uVar2 = 0;
      goto LAB_710072e724;
    }
  }
  else if (iVar1 < 0) {
    if (uVar2 < 0x30) {
      uVar2 = uVar2 + 1 >> 1;
      goto LAB_710072e724;
    }
    goto LAB_710072e77c;
  }
  uVar2 = (ulong)iVar1;
LAB_710072e724:
  iVar1 = FUN_71007437f0(param_1 + 0x28,&local_20,0x100);
  if (iVar1 == 0) {
    FUN_710072e4e0(param_1,param_4,param_5,uVar2);
  }
  return;
}



// ===== FUN_710072e790 @ 710072e790 (size=444) =====

int FUN_710072e790(char *param_1,long param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  if (0x400 < param_3) {
    return -0x36;
  }
  if (0x100 < param_5) {
    return -0x38;
  }
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_10 = 0;
  uStack_8 = 0;
  if ((*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x10)) || (*(int *)(param_1 + 0x14) != 0)) {
    iVar4 = FUN_710072e6b0(param_1);
    if (iVar4 != 0) {
      return iVar4;
    }
  }
  else if ((param_5 != 0) &&
          ((iVar4 = FUN_710072e190(&local_30,param_4,param_5), iVar4 != 0 ||
           (iVar4 = FUN_710072e3e0(param_1,&local_30), iVar4 != 0)))) goto LAB_710072e8b0;
  pcVar5 = param_1 + 0xf;
  if (param_3 != 0) {
LAB_710072e828:
    do {
      cVar2 = *pcVar5;
      bVar3 = pcVar5 != param_1;
      *pcVar5 = cVar2 + '\x01';
      if ((char)(cVar2 + '\x01') == '\0') {
        pcVar5 = pcVar5 + -1;
        if (bVar3) goto LAB_710072e828;
      }
      iVar4 = FUN_7100744790(param_1 + 0x28,1,param_1,auStack_40);
      if (iVar4 != 0) goto LAB_710072e8b0;
      uVar1 = param_3;
      if (0x10 < param_3) {
        uVar1 = 0x10;
      }
      FUN_710080f900(param_2,auStack_40,uVar1);
      param_3 = param_3 - uVar1;
      param_2 = param_2 + uVar1;
      pcVar5 = param_1 + 0xf;
    } while (param_3 != 0);
  }
  iVar4 = FUN_710072e3e0(param_1,&local_30);
  if (iVar4 == 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
LAB_710072e8b0:
  FUN_710073b460(&local_30,0x30);
  FUN_710073b460(auStack_40,0x10);
  return iVar4;
}



// ===== FUN_710072e950 @ 710072e950 (size=12) =====

void FUN_710072e950(void)

{
  FUN_710072e790();
  return;
}



// ===== FUN_710072e960 @ 710072e960 (size=24) =====

void FUN_710072e960(undefined8 *param_1)

{
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
  return;
}



// ===== FUN_710072e980 @ 710072e980 (size=16) =====

void FUN_710072e980(long param_1)

{
  if (param_1 != 0) {
    FUN_710073b460(param_1,0x80);
    return;
  }
  return;
}



// ===== FUN_710072e990 @ 710072e990 (size=12) =====

void FUN_710072e990(undefined8 param_1)

{
  FUN_7100808340(param_1,0,0x180);
  return;
}



// ===== FUN_710072e9a0 @ 710072e9a0 (size=16) =====

void FUN_710072e9a0(long param_1)

{
  if (param_1 != 0) {
    FUN_710073b460(param_1,0x180);
    return;
  }
  return;
}



// ===== FUN_710072e9b0 @ 710072e9b0 (size=820) =====

void FUN_710072e9b0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar6 = 0;
  uVar5 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
  uVar4 = uVar5 << 0x10;
  uVar2 = uVar5 >> 0x10 | uVar4;
  uVar5 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
  uVar3 = uVar5 >> 0x10 | uVar5 << 0x10;
  uVar5 = (uVar2 ^ uVar3 >> 4) & 0xf0f0f0f;
  uVar3 = uVar3 ^ uVar5 << 4;
  uVar2 = uVar2 ^ uVar5;
  uVar3 = uVar3 ^ (uVar2 ^ uVar3) & 0x10101010;
  uVar5 = (*(uint *)(&DAT_71009c2930 + ((ulong)(uVar2 >> 0x18) & 0xf) * 4) |
           *(int *)(&DAT_71009c2930 + ((ulong)uVar2 & 0xf) * 4) << 3 |
           *(int *)(&DAT_71009c2930 + ((ulong)(uVar2 >> 0xd) & 0xf) * 4) << 6 |
           *(int *)(&DAT_71009c2930 + ((ulong)(uVar2 >> 0x15) & 0xf) * 4) << 5 |
          *(int *)(&DAT_71009c2930 + ((ulong)(uVar2 >> 0x10) & 0xf) * 4) << 1 |
          *(int *)(&DAT_71009c2930 + ((ulong)(uVar2 >> 8) & 0xf) * 4) << 2 |
          *(int *)(&DAT_71009c2930 + ((ulong)(uVar2 >> 5) & 0xf) * 4) << 7 |
          *(int *)(&DAT_71009c2930 + (ulong)(uVar4 >> 0x1d) * 4) << 4) & 0xfffffff;
  uVar2 = (*(uint *)(&DAT_71009c28f0 + ((ulong)(uVar3 >> 0x19) & 0xf) * 4) |
           *(int *)(&DAT_71009c28f0 + (ulong)(uVar3 >> 0x1c) * 4) << 4 |
           *(int *)(&DAT_71009c28f0 + ((ulong)(uVar3 >> 0x11) & 0xf) * 4) << 1 |
           *(int *)(&DAT_71009c28f0 + ((ulong)(uVar3 >> 0xc) & 0xf) * 4) << 6 |
          *(int *)(&DAT_71009c28f0 + ((ulong)(uVar3 >> 9) & 0xf) * 4) << 2 |
          *(int *)(&DAT_71009c28f0 + ((ulong)(uVar3 >> 1) & 0xf) * 4) << 3 |
          *(int *)(&DAT_71009c28f0 + ((ulong)(uVar3 >> 4) & 0xf) * 4) << 7 |
          *(int *)(&DAT_71009c28f0 + ((ulong)(uVar3 >> 0x14) & 0xf) * 4) << 5) & 0xfffffff;
  do {
    if ((int)uVar6 < 2 || (0x8100UL >> (uVar6 & 0x3f) & 1) != 0) {
      uVar3 = uVar5 >> 0x1b | uVar5 << 1;
      uVar4 = uVar2 << 1 | uVar2 >> 0x1b;
    }
    else {
      uVar3 = uVar5 >> 0x1a | uVar5 << 2;
      uVar4 = uVar2 >> 0x1a | uVar2 << 2;
    }
    uVar5 = uVar3 & 0xfffffff;
    uVar2 = uVar4 & 0xfffffff;
    uVar1 = (int)uVar6 + 1;
    uVar6 = (ulong)uVar1;
    *param_1 = (uVar3 & 1) << 0x1c | (uVar3 & 0x2400000) << 4 | (uVar3 & 0x1000) << 9 |
               (uVar3 & 0x200000) >> 1 | (uVar3 & 0x8000) << 2 | (uVar4 & 0x4000000) >> 0xd |
               (uVar4 & 0x20) << 6 | uVar2 >> 0xe & 0x200 | (uVar4 & 0x4000) >> 10 |
               (uVar4 & 0x100000) >> 0x12 | uVar2 >> 0x18 & 1 |
               (uVar3 & 0x82) << 0x12 | (uVar3 & 0x2000) << 0xe | (uVar3 & 0x40000) << 6 |
               uVar5 << 10 & 0x40000 | (uVar3 & 0x4000000) >> 10 | (uVar4 & 0x10000) >> 4 |
               (uVar4 & 0x800) >> 1 | (uVar4 & 0x400) >> 5 | uVar2 >> 3 & 8 |
               (uVar4 & 0x8000000) >> 0x1a | uVar4 & 0x100;
    param_1[1] = (uVar3 & 0x10) << 0x16 | uVar5 << 10 & 0x8000000 | (uVar3 & 0x8000000) >> 2 |
                 (uVar3 & 0x200) << 0xb | (uVar3 & 0x1000000) >> 6 | (uVar3 & 0x100000) >> 4 |
                 (uVar4 & 0x10) << 8 | (uVar4 & 0x80000) >> 9 | (uVar4 & 0x1000) >> 7 |
                 (uVar4 & 1) << 2 | uVar4 & 0x200 |
                 (uVar3 & 0x800) << 0x11 | uVar5 << 0xf & 0x20000000 | (uVar3 & 0x800000) << 1 |
                 (uVar3 & 0x20) << 0x10 | (uVar3 & 0x10000) << 3 | uVar5 << 0xf & 0x20000 |
                 (uVar4 & 0x8000) >> 2 | uVar2 >> 0xe & 0x808 | (uVar4 & 2) << 7 | uVar2 >> 3 & 0x11
                 | (uVar4 & 0x400000) >> 0x15;
    param_1 = param_1 + 2;
  } while (uVar1 != 0x10);
  return;
}



// ===== FUN_710072ecf0 @ 710072ecf0 (size=152) =====

void FUN_710072ecf0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined4 uVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_710072e9b0(param_1,param_3);
  FUN_710072e9b0(param_2 + 0x10,param_3 + 8);
  puVar3 = param_1;
  puVar4 = param_1 + 0xf;
  puVar5 = param_2 + 0x1f;
  do {
    bVar2 = puVar4 != param_1;
    *(undefined4 *)param_2 = *(undefined4 *)puVar4;
    *(undefined4 *)((long)param_2 + 4) = *(undefined4 *)((long)puVar4 + 4);
    *(undefined4 *)(puVar3 + 0x10) = *(undefined4 *)puVar5;
    uVar1 = *(undefined4 *)((long)puVar5 + 4);
    puVar3[0x20] = *puVar3;
    *(undefined4 *)((long)puVar3 + 0x84) = uVar1;
    param_2[0x20] = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + -1;
    puVar5 = puVar5 + -1;
  } while (bVar2);
  return;
}



// ===== FUN_710072ed90 @ 710072ed90 (size=168) =====

void FUN_710072ed90(undefined4 *param_1,undefined4 *param_2,long param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  FUN_710072e9b0(param_1,param_3);
  FUN_710072e9b0(param_2 + 0x20,param_3 + 8);
  FUN_710072e9b0(param_1 + 0x40,param_3 + 0x10);
  puVar2 = param_1 + 0x1e;
  puVar3 = param_1 + 0x20;
  puVar4 = param_2 + 0x3e;
  do {
    bVar1 = param_1 != puVar2;
    *param_2 = puVar2[0x40];
    param_2[1] = puVar2[0x41];
    *puVar3 = *puVar4;
    puVar3[1] = puVar4[1];
    param_2[0x40] = *puVar2;
    param_2[0x41] = puVar2[1];
    param_2 = param_2 + 2;
    puVar2 = puVar2 + -2;
    puVar3 = puVar3 + 2;
    puVar4 = puVar4 + -2;
  } while (bVar1);
  return;
}



// ===== FUN_710072ee40 @ 710072ee40 (size=24) =====

undefined8 FUN_710072ee40(void)

{
  FUN_710072e9b0();
  return 0;
}



// ===== FUN_710072ee60 @ 710072ee60 (size=72) =====

undefined8 FUN_710072ee60(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  FUN_710072e9b0();
  puVar1 = param_1;
  puVar3 = param_1 + 0xf;
  do {
    uVar4 = *puVar1;
    puVar2 = puVar1 + 1;
    *puVar1 = *puVar3;
    *puVar3 = uVar4;
    puVar1 = puVar2;
    puVar3 = puVar3 + -1;
  } while (param_1 + 8 != puVar2);
  return 0;
}



// ===== FUN_710072eeb0 @ 710072eeb0 (size=56) =====

undefined8 FUN_710072eeb0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_180 [384];
  
  FUN_710072ecf0(param_1,auStack_180,param_2);
  FUN_710073b460(auStack_180,0x180);
  return 0;
}



// ===== FUN_710072eef0 @ 710072eef0 (size=60) =====

undefined8 FUN_710072eef0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_180 [384];
  
  FUN_710072ecf0(auStack_180,param_1,param_2);
  FUN_710073b460(auStack_180,0x180);
  return 0;
}



// ===== FUN_710072ef30 @ 710072ef30 (size=56) =====

undefined8 FUN_710072ef30(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_180 [384];
  
  FUN_710072ed90(param_1,auStack_180,param_2);
  FUN_710073b460(auStack_180,0x180);
  return 0;
}



// ===== FUN_710072ef70 @ 710072ef70 (size=60) =====

undefined8 FUN_710072ef70(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_180 [384];
  
  FUN_710072ed90(auStack_180,param_1,param_2);
  FUN_710073b460(auStack_180,0x180);
  return 0;
}



// ===== FUN_710072efb0 @ 710072efb0 (size=592) =====

undefined8 FUN_710072efb0(uint *param_1,uint *param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
  uVar3 = uVar5 >> 0x10 | uVar5 << 0x10;
  uVar5 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
  uVar6 = uVar5 >> 0x10 | uVar5 << 0x10;
  uVar5 = (uVar6 ^ uVar3 >> 4) & 0xf0f0f0f;
  uVar3 = uVar3 ^ uVar5 << 4;
  uVar6 = uVar6 ^ uVar5;
  uVar5 = (uVar6 ^ uVar3 >> 0x10) & 0xffff;
  uVar3 = uVar3 ^ uVar5 << 0x10;
  uVar6 = uVar6 ^ uVar5;
  uVar5 = (uVar3 ^ uVar6 >> 2) & 0x33333333;
  uVar6 = uVar6 ^ uVar5 << 2;
  uVar3 = uVar3 ^ uVar5;
  uVar5 = (uVar3 ^ uVar6 >> 8) & 0xff00ff;
  uVar6 = uVar6 ^ uVar5 << 8;
  uVar3 = uVar3 ^ uVar5;
  uVar6 = uVar6 >> 0x1f | uVar6 << 1;
  uVar5 = (uVar3 ^ uVar6) & 0xaaaaaaaa;
  uVar3 = uVar3 ^ uVar5;
  uVar6 = uVar6 ^ uVar5;
  uVar5 = uVar3 >> 0x1f | uVar3 << 1;
  puVar4 = param_1;
  do {
    puVar1 = puVar4 + 4;
    uVar3 = puVar4[1] ^ (uVar6 >> 4 | uVar6 << 0x1c);
    uVar2 = uVar6 ^ *puVar4;
    uVar5 = uVar5 ^ *(uint *)(&DAT_71009c2b70 + ((ulong)(uVar2 >> 8) & 0x3f) * 4) ^
                    *(uint *)(&DAT_71009c2d70 + ((ulong)(uVar2 >> 0x10) & 0x3f) * 4) ^
                    *(uint *)(&DAT_71009c2c70 + ((ulong)(uVar3 >> 8) & 0x3f) * 4) ^
                    *(uint *)(&DAT_71009c3070 + ((ulong)(uVar3 >> 0x18) & 0x3f) * 4) ^
                    *(uint *)(&DAT_71009c2970 + ((ulong)uVar2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_71009c2a70 + ((ulong)uVar3 & 0x3f) * 4) ^
                    *(uint *)(&DAT_71009c2f70 + ((ulong)(uVar2 >> 0x18) & 0x3f) * 4) ^
                    *(uint *)(&DAT_71009c2e70 + ((ulong)(uVar3 >> 0x10) & 0x3f) * 4);
    uVar3 = uVar5 ^ puVar4[2];
    uVar2 = puVar4[3] ^ (uVar5 >> 4 | uVar5 << 0x1c);
    uVar6 = *(uint *)(&DAT_71009c2b70 + ((ulong)(uVar3 >> 8) & 0x3f) * 4) ^
            *(uint *)(&DAT_71009c2d70 + ((ulong)(uVar3 >> 0x10) & 0x3f) * 4) ^
            *(uint *)(&DAT_71009c2e70 + ((ulong)(uVar2 >> 0x10) & 0x3f) * 4) ^
            *(uint *)(&DAT_71009c3070 + ((ulong)(uVar2 >> 0x18) & 0x3f) * 4) ^
            uVar6 ^ *(uint *)(&DAT_71009c2970 + ((ulong)uVar3 & 0x3f) * 4) ^
            *(uint *)(&DAT_71009c2f70 + ((ulong)(uVar3 >> 0x18) & 0x3f) * 4) ^
            *(uint *)(&DAT_71009c2c70 + ((ulong)(uVar2 >> 8) & 0x3f) * 4) ^
            *(uint *)(&DAT_71009c2a70 + ((ulong)uVar2 & 0x3f) * 4);
    puVar4 = puVar1;
  } while (puVar1 != param_1 + 0x20);
  uVar3 = uVar6 >> 1 | uVar6 << 0x1f;
  uVar6 = (uVar3 ^ uVar5) & 0xaaaaaaaa;
  uVar3 = uVar3 ^ uVar6;
  uVar6 = (uVar6 ^ uVar5) >> 1 | uVar5 << 0x1f;
  uVar5 = (uVar3 ^ uVar6 >> 8) & 0xff00ff;
  uVar6 = uVar6 ^ uVar5 << 8;
  uVar3 = uVar3 ^ uVar5;
  uVar5 = (uVar3 ^ uVar6 >> 2) & 0x33333333;
  uVar6 = uVar6 ^ uVar5 << 2;
  uVar3 = uVar3 ^ uVar5;
  uVar5 = (uVar6 ^ uVar3 >> 0x10) & 0xffff;
  uVar3 = uVar3 ^ uVar5 << 0x10;
  uVar6 = uVar6 ^ uVar5;
  uVar5 = (uVar6 ^ uVar3 >> 4) & 0xf0f0f0f;
  uVar3 = uVar3 ^ uVar5 << 4;
  uVar6 = uVar6 ^ uVar5;
  *param_3 = CONCAT17((char)uVar6,
                      CONCAT16((char)(uVar6 >> 8),
                               CONCAT15((char)(uVar6 >> 0x10),
                                        CONCAT14((char)(uVar6 >> 0x18),
                                                 CONCAT13((char)uVar3,
                                                          CONCAT12((char)(uVar3 >> 8),
                                                                   CONCAT11((char)(uVar3 >> 0x10),
                                                                            (char)(uVar3 >> 0x18))))
                                                ))));
  return 0;
}



// ===== FUN_710072f200 @ 710072f200 (size=264) =====

undefined8
FUN_710072f200(undefined8 param_1,int param_2,ulong param_3,undefined8 *param_4,undefined8 *param_5,
              undefined8 *param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if ((param_3 & 7) != 0) {
    return 0xffffffce;
  }
  if (param_2 == 1) {
    puVar3 = param_6;
    if (param_3 != 0) {
      do {
        lVar2 = 0;
        do {
          *(byte *)((long)puVar3 + lVar2) =
               *(byte *)((long)param_5 + lVar2) ^ *(byte *)((long)param_4 + lVar2);
          lVar2 = lVar2 + 1;
        } while (lVar2 != 8);
        uVar1 = FUN_710072efb0(param_1,puVar3,puVar3);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        puVar4 = puVar3 + 1;
        param_5 = param_5 + 1;
        *param_4 = *puVar3;
        puVar3 = puVar4;
      } while (puVar4 != (undefined8 *)((long)param_6 + param_3));
    }
  }
  else {
    puVar3 = (undefined8 *)((long)param_5 + param_3);
    if (param_3 != 0) {
      do {
        uVar5 = *param_5;
        uVar1 = FUN_710072efb0(param_1,param_5,param_6);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        lVar2 = 0;
        do {
          *(byte *)((long)param_6 + lVar2) =
               *(byte *)((long)param_6 + lVar2) ^ *(byte *)((long)param_4 + lVar2);
          lVar2 = lVar2 + 1;
        } while (lVar2 != 8);
        param_5 = param_5 + 1;
        *param_4 = uVar5;
        param_6 = param_6 + 1;
      } while (param_5 != puVar3);
    }
  }
  return 0;
}



// ===== FUN_710072f310 @ 710072f310 (size=1184) =====

undefined8 FUN_710072f310(uint *param_1,uint *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  
  uVar4 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
  uVar2 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar4 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
  uVar3 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar4 = (uVar3 ^ uVar2 >> 4) & 0xf0f0f0f;
  uVar2 = uVar2 ^ uVar4 << 4;
  uVar3 = uVar3 ^ uVar4;
  uVar4 = (uVar3 ^ uVar2 >> 0x10) & 0xffff;
  uVar2 = uVar2 ^ uVar4 << 0x10;
  uVar3 = uVar3 ^ uVar4;
  uVar4 = (uVar2 ^ uVar3 >> 2) & 0x33333333;
  uVar3 = uVar3 ^ uVar4 << 2;
  uVar2 = uVar2 ^ uVar4;
  uVar4 = (uVar2 ^ uVar3 >> 8) & 0xff00ff;
  uVar3 = uVar3 ^ uVar4 << 8;
  uVar2 = uVar2 ^ uVar4;
  uVar3 = uVar3 >> 0x1f | uVar3 << 1;
  uVar4 = (uVar2 ^ uVar3) & 0xaaaaaaaa;
  uVar2 = uVar2 ^ uVar4;
  uVar3 = uVar3 ^ uVar4;
  uVar4 = uVar2 >> 0x1f | uVar2 << 1;
  puVar6 = param_1;
  do {
    puVar5 = puVar6 + 4;
    uVar2 = puVar6[1] ^ (uVar3 >> 4 | uVar3 << 0x1c);
    uVar1 = uVar3 ^ *puVar6;
    uVar4 = uVar4 ^ *(uint *)(&DAT_71009c2b70 + ((ulong)(uVar1 >> 8) & 0x3f) * 4) ^
                    *(uint *)(&DAT_71009c2d70 + ((ulong)(uVar1 >> 0x10) & 0x3f) * 4) ^
                    *(uint *)(&DAT_71009c2c70 + ((ulong)(uVar2 >> 8) & 0x3f) * 4) ^
                    *(uint *)(&DAT_71009c3070 + ((ulong)(uVar2 >> 0x18) & 0x3f) * 4) ^
                    *(uint *)(&DAT_71009c2970 + ((ulong)uVar1 & 0x3f) * 4) ^
                    *(uint *)(&DAT_71009c2a70 + ((ulong)uVar2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_71009c2f70 + ((ulong)(uVar1 >> 0x18) & 0x3f) * 4) ^
                    *(uint *)(&DAT_71009c2e70 + ((ulong)(uVar2 >> 0x10) & 0x3f) * 4);
    uVar2 = uVar4 ^ puVar6[2];
    uVar7 = uVar4 >> 4 | uVar4 << 0x1c;
    uVar1 = uVar7 ^ puVar6[3];
    uVar3 = *(uint *)(&DAT_71009c2b70 + ((ulong)(uVar2 >> 8) & 0x3f) * 4) ^
            *(uint *)(&DAT_71009c2d70 + ((ulong)(uVar2 >> 0x10) & 0x3f) * 4) ^
            *(uint *)(&DAT_71009c2e70 + ((ulong)(uVar1 >> 0x10) & 0x3f) * 4) ^
            *(uint *)(&DAT_71009c3070 + ((ulong)(uVar1 >> 0x18) & 0x3f) * 4) ^
            uVar3 ^ *(uint *)(&DAT_71009c2970 + ((ulong)uVar2 & 0x3f) * 4) ^
            *(uint *)(&DAT_71009c2f70 + ((ulong)(uVar2 >> 0x18) & 0x3f) * 4) ^
            *(uint *)(&DAT_71009c2c70 + ((ulong)(uVar1 >> 8) & 0x3f) * 4) ^
            *(uint *)(&DAT_71009c2a70 + ((ulong)uVar1 & 0x3f) * 4);
    puVar6 = puVar5;
  } while (puVar5 != param_1 + 0x20);
  while( true ) {
    puVar6 = puVar5 + 4;
    uVar2 = uVar4 ^ *puVar5;
    uVar7 = uVar7 ^ puVar5[1];
    uVar3 = uVar3 ^ *(uint *)(&DAT_71009c2b70 + ((ulong)(uVar2 >> 8) & 0x3f) * 4) ^
                    *(uint *)(&DAT_71009c2d70 + ((ulong)(uVar2 >> 0x10) & 0x3f) * 4) ^
                    *(uint *)(&DAT_71009c2c70 + ((ulong)(uVar7 >> 8) & 0x3f) * 4) ^
                    *(uint *)(&DAT_71009c3070 + ((ulong)(uVar7 >> 0x18) & 0x3f) * 4) ^
                    *(uint *)(&DAT_71009c2970 + ((ulong)uVar2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_71009c2a70 + ((ulong)uVar7 & 0x3f) * 4) ^
                    *(uint *)(&DAT_71009c2f70 + ((ulong)(uVar2 >> 0x18) & 0x3f) * 4) ^
                    *(uint *)(&DAT_71009c2e70 + ((ulong)(uVar7 >> 0x10) & 0x3f) * 4);
    uVar2 = uVar3 ^ puVar5[2];
    uVar7 = uVar3 >> 4 | uVar3 << 0x1c;
    uVar1 = uVar7 ^ puVar5[3];
    uVar4 = *(uint *)(&DAT_71009c2b70 + ((ulong)(uVar2 >> 8) & 0x3f) * 4) ^
            *(uint *)(&DAT_71009c2d70 + ((ulong)(uVar2 >> 0x10) & 0x3f) * 4) ^
            *(uint *)(&DAT_71009c2e70 + ((ulong)(uVar1 >> 0x10) & 0x3f) * 4) ^
            *(uint *)(&DAT_71009c3070 + ((ulong)(uVar1 >> 0x18) & 0x3f) * 4) ^
            uVar4 ^ *(uint *)(&DAT_71009c2970 + ((ulong)uVar2 & 0x3f) * 4) ^
            *(uint *)(&DAT_71009c2f70 + ((ulong)(uVar2 >> 0x18) & 0x3f) * 4) ^
            *(uint *)(&DAT_71009c2c70 + ((ulong)(uVar1 >> 8) & 0x3f) * 4) ^
            *(uint *)(&DAT_71009c2a70 + ((ulong)uVar1 & 0x3f) * 4);
    if (puVar6 == param_1 + 0x40) break;
    uVar7 = uVar4 >> 4 | uVar4 << 0x1c;
    puVar5 = puVar6;
  }
  while( true ) {
    uVar2 = uVar3 ^ *puVar6;
    uVar7 = uVar7 ^ puVar6[1];
    uVar4 = uVar4 ^ *(uint *)(&DAT_71009c2b70 + ((ulong)(uVar2 >> 8) & 0x3f) * 4) ^
                    *(uint *)(&DAT_71009c2d70 + ((ulong)(uVar2 >> 0x10) & 0x3f) * 4) ^
                    *(uint *)(&DAT_71009c2c70 + ((ulong)(uVar7 >> 8) & 0x3f) * 4) ^
                    *(uint *)(&DAT_71009c3070 + ((ulong)(uVar7 >> 0x18) & 0x3f) * 4) ^
                    *(uint *)(&DAT_71009c2970 + ((ulong)uVar2 & 0x3f) * 4) ^
                    *(uint *)(&DAT_71009c2a70 + ((ulong)uVar7 & 0x3f) * 4) ^
                    *(uint *)(&DAT_71009c2f70 + ((ulong)(uVar2 >> 0x18) & 0x3f) * 4) ^
                    *(uint *)(&DAT_71009c2e70 + ((ulong)(uVar7 >> 0x10) & 0x3f) * 4);
    uVar2 = uVar4 ^ puVar6[2];
    uVar1 = puVar6[3] ^ (uVar4 >> 4 | uVar4 << 0x1c);
    uVar3 = *(uint *)(&DAT_71009c2b70 + ((ulong)(uVar2 >> 8) & 0x3f) * 4) ^
            *(uint *)(&DAT_71009c2d70 + ((ulong)(uVar2 >> 0x10) & 0x3f) * 4) ^
            *(uint *)(&DAT_71009c2e70 + ((ulong)(uVar1 >> 0x10) & 0x3f) * 4) ^
            *(uint *)(&DAT_71009c3070 + ((ulong)(uVar1 >> 0x18) & 0x3f) * 4) ^
            uVar3 ^ *(uint *)(&DAT_71009c2970 + ((ulong)uVar2 & 0x3f) * 4) ^
            *(uint *)(&DAT_71009c2f70 + ((ulong)(uVar2 >> 0x18) & 0x3f) * 4) ^
            *(uint *)(&DAT_71009c2c70 + ((ulong)(uVar1 >> 8) & 0x3f) * 4) ^
            *(uint *)(&DAT_71009c2a70 + ((ulong)uVar1 & 0x3f) * 4);
    if (puVar6 + 4 == param_1 + 0x60) break;
    uVar7 = uVar3 >> 4 | uVar3 << 0x1c;
    puVar6 = puVar6 + 4;
  }
  uVar2 = uVar3 >> 1 | uVar3 << 0x1f;
  uVar3 = (uVar2 ^ uVar4) & 0xaaaaaaaa;
  uVar2 = uVar2 ^ uVar3;
  uVar3 = (uVar3 ^ uVar4) >> 1 | uVar4 << 0x1f;
  uVar4 = (uVar2 ^ uVar3 >> 8) & 0xff00ff;
  uVar3 = uVar3 ^ uVar4 << 8;
  uVar2 = uVar2 ^ uVar4;
  uVar4 = (uVar2 ^ uVar3 >> 2) & 0x33333333;
  uVar3 = uVar3 ^ uVar4 << 2;
  uVar2 = uVar2 ^ uVar4;
  uVar4 = (uVar3 ^ uVar2 >> 0x10) & 0xffff;
  uVar2 = uVar2 ^ uVar4 << 0x10;
  uVar3 = uVar3 ^ uVar4;
  uVar4 = (uVar3 ^ uVar2 >> 4) & 0xf0f0f0f;
  uVar2 = uVar2 ^ uVar4 << 4;
  uVar3 = uVar3 ^ uVar4;
  *param_3 = CONCAT17((char)uVar3,
                      CONCAT16((char)(uVar3 >> 8),
                               CONCAT15((char)(uVar3 >> 0x10),
                                        CONCAT14((char)(uVar3 >> 0x18),
                                                 CONCAT13((char)uVar2,
                                                          CONCAT12((char)(uVar2 >> 8),
                                                                   CONCAT11((char)(uVar2 >> 0x10),
                                                                            (char)(uVar2 >> 0x18))))
                                                ))));
  return 0;
}



// ===== FUN_710072f7b0 @ 710072f7b0 (size=264) =====

undefined8
FUN_710072f7b0(undefined8 param_1,int param_2,ulong param_3,undefined8 *param_4,undefined8 *param_5,
              undefined8 *param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if ((param_3 & 7) != 0) {
    return 0xffffffce;
  }
  if (param_2 == 1) {
    puVar3 = param_6;
    if (param_3 != 0) {
      do {
        lVar2 = 0;
        do {
          *(byte *)((long)puVar3 + lVar2) =
               *(byte *)((long)param_5 + lVar2) ^ *(byte *)((long)param_4 + lVar2);
          lVar2 = lVar2 + 1;
        } while (lVar2 != 8);
        uVar1 = FUN_710072f310(param_1,puVar3,puVar3);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        puVar4 = puVar3 + 1;
        param_5 = param_5 + 1;
        *param_4 = *puVar3;
        puVar3 = puVar4;
      } while (puVar4 != (undefined8 *)((long)param_6 + param_3));
    }
  }
  else {
    puVar3 = (undefined8 *)((long)param_5 + param_3);
    if (param_3 != 0) {
      do {
        uVar5 = *param_5;
        uVar1 = FUN_710072f310(param_1,param_5,param_6);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        lVar2 = 0;
        do {
          *(byte *)((long)param_6 + lVar2) =
               *(byte *)((long)param_6 + lVar2) ^ *(byte *)((long)param_4 + lVar2);
          lVar2 = lVar2 + 1;
        } while (lVar2 != 8);
        param_5 = param_5 + 1;
        *param_4 = uVar5;
        param_6 = param_6 + 1;
      } while (param_5 != puVar3);
    }
  }
  return 0;
}



// ===== FUN_710072f8c0 @ 710072f8c0 (size=176) =====

int FUN_710072f8c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined1 auStack_48 [72];
  
  FUN_7100731700(auStack_48);
  iVar1 = FUN_7100732cd0(param_1,auStack_48,param_4,param_3,param_5,param_6,0);
  if (iVar1 == 0) {
    iVar1 = FUN_7100732540(auStack_48);
    if (iVar1 == 0) {
      iVar1 = FUN_7100729900(param_2,auStack_48);
    }
    else {
      iVar1 = -0x4f80;
    }
  }
  FUN_71007317c0(auStack_48);
  return iVar1;
}



// ===== FUN_710072f970 @ 710072f970 (size=192) =====

ulong FUN_710072f970(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = *(long *)(param_1 + 0xb8) + 7U >> 3;
  if (param_4 < uVar5) {
    uVar5 = param_4;
  }
  uVar1 = FUN_7100729cb0(param_2,param_3,uVar5);
  if (uVar1 == 0) {
    uVar4 = *(ulong *)(param_1 + 0xb8);
    uVar5 = uVar5 * 8;
    if ((uVar4 <= uVar5 && uVar5 - uVar4 != 0) &&
       (uVar2 = FUN_710072a030(param_2,uVar5 - uVar4), uVar2 != 0)) {
      return (ulong)uVar2;
    }
    iVar3 = FUN_710072a1c0(param_2,param_1 + 0x98);
    if (-1 < iVar3) {
      uVar5 = FUN_710072a680(param_2,param_2,param_1 + 0x98);
      return uVar5;
    }
  }
  return (ulong)uVar1;
}



// ===== FUN_710072fa30 @ 710072fa30 (size=16) =====

bool FUN_710072fa30(uint param_1)

{
  return (param_1 & 0xfffffffb) != 9;
}



// ===== FUN_710072fa40 @ 710072fa40 (size=528) =====

int FUN_710072fa40(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [72];
  
  FUN_7100731700(auStack_48);
  FUN_7100729690(auStack_a8);
  FUN_7100729690(auStack_90);
  FUN_7100729690(auStack_78);
  FUN_7100729690(auStack_60);
  iVar2 = FUN_710072fa30(*param_1);
  if ((iVar2 == 0) || (*(long *)(param_1 + 0x2a) == 0)) {
    return -0x4f80;
  }
  iVar2 = FUN_710072a2a0(param_5,1);
  if (-1 < iVar2) {
    puVar1 = param_1 + 0x26;
    iVar2 = FUN_710072a1c0(param_5,puVar1);
    if ((((iVar2 < 0) && (iVar2 = FUN_710072a2a0(param_6,1), -1 < iVar2)) &&
        (iVar2 = FUN_710072a1c0(param_6,puVar1), iVar2 < 0)) &&
       (((((iVar2 = FUN_710072f970(param_1,auStack_a8,param_2,param_3), iVar2 != 0 ||
           (iVar2 = FUN_710072c030(auStack_90,param_6,puVar1), iVar2 != 0)) ||
          ((iVar2 = FUN_710072a710(auStack_78,auStack_a8,auStack_90), iVar2 != 0 ||
           ((iVar2 = FUN_710072aee0(auStack_78,auStack_78,puVar1), iVar2 != 0 ||
            (iVar2 = FUN_710072a710(auStack_60,param_5,auStack_90), iVar2 != 0)))))) ||
         (iVar2 = FUN_710072aee0(auStack_60,auStack_60,puVar1), iVar2 != 0)) ||
        ((iVar2 = FUN_71007335c0(param_1,auStack_48,auStack_78,param_1 + 0x14,auStack_60,param_4,0),
         iVar2 != 0 ||
         ((iVar2 = FUN_7100732540(auStack_48), iVar2 == 0 &&
          ((iVar2 = FUN_710072aee0(auStack_48,auStack_48,puVar1), iVar2 != 0 ||
           (iVar2 = FUN_710072a1c0(auStack_48,param_5), iVar2 == 0)))))))))) goto LAB_710072fae8;
  }
  iVar2 = -0x4e00;
LAB_710072fae8:
  FUN_71007317c0(auStack_48);
  FUN_71007296a0(auStack_a8);
  FUN_71007296a0(auStack_90);
  FUN_71007296a0(auStack_78);
  FUN_71007296a0(auStack_60);
  return iVar2;
}



// ===== FUN_710072fc50 @ 710072fc50 (size=676) =====

int FUN_710072fc50(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int local_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [72];
  
  iVar2 = FUN_710072fa30(*param_1);
  if ((iVar2 == 0) || (*(long *)(param_1 + 0x2a) == 0)) {
    iVar2 = -0x4f80;
  }
  else {
    iVar2 = FUN_710072a2a0(param_4,1);
    if (-1 < iVar2) {
      puVar1 = param_1 + 0x26;
      iVar2 = FUN_710072a1c0(param_4,puVar1);
      if (iVar2 < 0) {
        FUN_7100731700(auStack_48);
        FUN_7100729690(auStack_90);
        FUN_7100729690();
        FUN_7100729690();
        local_98 = 0xb;
        do {
          iVar2 = 0xb;
          while( true ) {
            iVar3 = FUN_71007336b0(param_1,auStack_90,param_7,param_8);
            if (((iVar3 != 0) ||
                (iVar3 = FUN_7100732cd0(param_1,auStack_48,auStack_90,param_1 + 0x14,param_9,
                                        param_10,0), iVar3 != 0)) ||
               (iVar3 = FUN_710072aee0(param_2,auStack_48,puVar1), iVar3 != 0)) goto LAB_710072fd80;
            iVar3 = FUN_710072a2a0(param_2,0);
            iVar2 = iVar2 + -1;
            if (iVar3 != 0) break;
            if (iVar2 == 0) goto LAB_710072fd7c;
          }
          iVar3 = FUN_710072f970(param_1,auStack_78,param_5,param_6);
          if (((((iVar3 != 0) ||
                (iVar3 = FUN_71007336b0(param_1,auStack_60,param_9,param_10), iVar3 != 0)) ||
               ((iVar3 = FUN_710072a710(param_3,param_2,param_4), iVar3 != 0 ||
                ((iVar3 = FUN_710072a670(auStack_78,auStack_78,param_3), iVar3 != 0 ||
                 (iVar3 = FUN_710072a710(auStack_78,auStack_78,auStack_60), iVar3 != 0)))))) ||
              (iVar3 = FUN_710072a710(auStack_90,auStack_90,auStack_60), iVar3 != 0)) ||
             ((((iVar3 = FUN_710072aee0(auStack_90,auStack_90,puVar1), iVar3 != 0 ||
                (iVar3 = FUN_710072c030(param_3,auStack_90,puVar1), iVar3 != 0)) ||
               (iVar3 = FUN_710072a710(param_3,param_3,auStack_78), iVar3 != 0)) ||
              ((iVar3 = FUN_710072aee0(param_3,param_3,puVar1), iVar3 != 0 ||
               (iVar2 = FUN_710072a2a0(param_3,0), iVar2 != 0)))))) goto LAB_710072fd80;
          local_98 = local_98 + -1;
        } while (local_98 != 0);
LAB_710072fd7c:
        iVar3 = -0x4d00;
LAB_710072fd80:
        FUN_71007317c0(auStack_48);
        FUN_71007296a0(auStack_90);
        FUN_71007296a0(auStack_78);
        FUN_71007296a0(auStack_60);
        return iVar3;
      }
    }
    iVar2 = -0x4c80;
  }
  return iVar2;
}



// ===== FUN_710072ff00 @ 710072ff00 (size=468) =====

int FUN_710072ff00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,long param_8,
                  undefined8 param_9)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [128];
  undefined1 auStack_108 [128];
  undefined1 auStack_88 [136];
  
  lVar3 = *(long *)(param_1 + 0xb8);
  lVar2 = FUN_7100737ec0(param_7);
  if (lVar2 == 0) {
    iVar1 = -0x4f80;
  }
  else {
    FUN_7100729690(auStack_1a0);
    uVar4 = lVar3 + 7U >> 3;
    FUN_7100737970(auStack_188);
    iVar1 = FUN_7100729e40(param_4,auStack_88,uVar4);
    if (iVar1 == 0) {
      iVar1 = FUN_710072f970(param_1,auStack_1a0,param_5,param_6);
      if (iVar1 == 0) {
        iVar1 = FUN_7100729e40(auStack_1a0,auStack_88 + uVar4,uVar4);
        if (iVar1 == 0) {
          FUN_7100737c10(auStack_188,lVar2,auStack_88,uVar4 << 1);
          if (param_8 == 0) {
            FUN_7100737970();
            FUN_7100737c10(auStack_108,lVar2,auStack_88,uVar4 << 1);
            iVar1 = FUN_7100737990(auStack_108,"BLINDING CONTEXT",0x10);
            if (iVar1 == 0) {
              iVar1 = FUN_710072fc50(param_1,param_2,param_3,param_4,param_5,param_6,&LAB_7100737e60
                                     ,auStack_188,&LAB_7100737e60,auStack_108);
              FUN_7100737e70(auStack_108);
            }
            else {
              FUN_7100737e70(auStack_108);
            }
          }
          else {
            iVar1 = FUN_710072fc50(param_1,param_2,param_3,param_4,param_5,param_6,&LAB_7100737e60,
                                   auStack_188,param_8,param_9);
          }
        }
      }
    }
    FUN_7100737e70(auStack_188);
    FUN_71007296a0(auStack_1a0);
  }
  return iVar1;
}



// ===== FUN_71007300e0 @ 71007300e0 (size=32) =====

void FUN_71007300e0(void)

{
  FUN_710072fc50();
  return;
}



// ===== thunk_FUN_710072fa40 @ 7100730100 (size=4) =====

int thunk_FUN_710072fa40
              (undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [72];
  
  FUN_7100731700(auStack_48);
  FUN_7100729690(auStack_a8);
  FUN_7100729690(auStack_90);
  FUN_7100729690(auStack_78);
  FUN_7100729690(auStack_60);
  iVar2 = FUN_710072fa30(*param_1);
  if ((iVar2 == 0) || (*(long *)(param_1 + 0x2a) == 0)) {
    return -0x4f80;
  }
  iVar2 = FUN_710072a2a0(param_5,1);
  if (-1 < iVar2) {
    puVar1 = param_1 + 0x26;
    iVar2 = FUN_710072a1c0(param_5,puVar1);
    if ((((iVar2 < 0) && (iVar2 = FUN_710072a2a0(param_6,1), -1 < iVar2)) &&
        (iVar2 = FUN_710072a1c0(param_6,puVar1), iVar2 < 0)) &&
       (((((iVar2 = FUN_710072f970(param_1,auStack_a8,param_2,param_3), iVar2 != 0 ||
           (iVar2 = FUN_710072c030(auStack_90,param_6,puVar1), iVar2 != 0)) ||
          ((iVar2 = FUN_710072a710(auStack_78,auStack_a8,auStack_90), iVar2 != 0 ||
           ((iVar2 = FUN_710072aee0(auStack_78,auStack_78,puVar1), iVar2 != 0 ||
            (iVar2 = FUN_710072a710(auStack_60,param_5,auStack_90), iVar2 != 0)))))) ||
         (iVar2 = FUN_710072aee0(auStack_60,auStack_60,puVar1), iVar2 != 0)) ||
        ((iVar2 = FUN_71007335c0(param_1,auStack_48,auStack_78,param_1 + 0x14,auStack_60,param_4,0),
         iVar2 != 0 ||
         ((iVar2 = FUN_7100732540(auStack_48), iVar2 == 0 &&
          ((iVar2 = FUN_710072aee0(auStack_48,auStack_48,puVar1), iVar2 != 0 ||
           (iVar2 = FUN_710072a1c0(auStack_48,param_5), iVar2 == 0)))))))))) goto LAB_710072fae8;
  }
  iVar2 = -0x4e00;
LAB_710072fae8:
  FUN_71007317c0(auStack_48);
  FUN_71007296a0(auStack_a8);
  FUN_71007296a0(auStack_90);
  FUN_71007296a0(auStack_78);
  FUN_71007296a0(auStack_60);
  return iVar2;
}



// ===== FUN_7100730110 @ 7100730110 (size=392) =====

int FUN_7100730110(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long *param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *local_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
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
  undefined3 uStack_18;
  undefined5 local_15;
  undefined3 uStack_10;
  undefined8 uStack_d;
  undefined1 auStack_5 [5];
  
  FUN_7100729690(auStack_c0);
  FUN_7100729690(auStack_a8);
  iVar2 = FUN_710072ff00(param_1,auStack_c0,auStack_a8,param_1 + 0xf8,param_3,param_4,param_2,
                         param_7,param_8);
  iVar6 = iVar2;
  if (iVar2 == 0) {
    local_c8 = auStack_5;
    local_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_18 = 0;
    local_15 = 0;
    uStack_10 = 0;
    uStack_d = 0;
    iVar3 = FUN_7100745540(&local_c8,&local_90,auStack_a8);
    iVar6 = iVar3;
    if ((-1 < iVar3) &&
       (iVar4 = FUN_7100745540(&local_c8,&local_90,auStack_c0), iVar6 = iVar4, -1 < iVar4)) {
      iVar5 = FUN_7100745380(&local_c8,&local_90,(long)iVar4 + (long)iVar3);
      iVar6 = iVar5;
      if ((-1 < iVar5) && (iVar6 = FUN_7100745500(&local_c8,&local_90,0x30), -1 < iVar6)) {
        lVar1 = (long)iVar4 + (long)iVar3 + (long)iVar5 + (long)iVar6;
        FUN_710080f900(param_5,local_c8,lVar1);
        *param_6 = lVar1;
        iVar6 = iVar2;
      }
    }
  }
  FUN_71007296a0(auStack_c0);
  FUN_71007296a0(auStack_a8);
  return iVar6;
}



// ===== FUN_71007302a0 @ 71007302a0 (size=32) =====

void FUN_71007302a0(void)

{
  FUN_7100730110();
  return;
}



// ===== FUN_71007302c0 @ 71007302c0 (size=268) =====

int FUN_71007302c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  int iVar1;
  long local_40;
  long lStack_38;
  undefined1 auStack_30 [24];
  undefined1 auStack_18 [24];
  
  param_5 = param_4 + param_5;
  local_40 = param_4;
  FUN_7100729690(auStack_30);
  FUN_7100729690(auStack_18);
  iVar1 = FUN_7100745050(&local_40,param_5,&lStack_38,0x30);
  if (iVar1 == 0) {
    if (param_5 != local_40 + lStack_38) {
      iVar1 = -0x4fe6;
      goto LAB_710073034c;
    }
    iVar1 = FUN_7100745170(&local_40,param_5,auStack_30);
    if ((iVar1 == 0) && (iVar1 = FUN_7100745170(&local_40,param_5,auStack_18), iVar1 == 0)) {
      iVar1 = FUN_710072fa40(param_1,param_2,param_3,param_1 + 0x110,auStack_30,auStack_18);
      if ((iVar1 == 0) && (iVar1 = 0, local_40 != param_5)) {
        iVar1 = -0x4c00;
      }
      goto LAB_710073034c;
    }
  }
  iVar1 = iVar1 + -0x4f80;
LAB_710073034c:
  FUN_71007296a0(auStack_30);
  FUN_71007296a0(auStack_18);
  return iVar1;
}



// ===== FUN_71007303d0 @ 71007303d0 (size=8) =====

void FUN_71007303d0(void)

{
  FUN_71007302c0();
  return;
}



// ===== FUN_71007303e0 @ 71007303e0 (size=88) =====

void FUN_71007303e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_7100735010();
  if (iVar1 != 0) {
    return;
  }
  FUN_7100733850(param_1,param_1 + 0xf8,param_1 + 0x110,param_3,param_4);
  return;
}



// ===== thunk_FUN_7100731790 @ 7100730440 (size=4) =====

void thunk_FUN_7100731790(long param_1)

{
  FUN_7100731730();
  FUN_7100729690(param_1 + 0xf8);
  FUN_7100731700(param_1 + 0x110);
  return;
}



// ===== FUN_7100730450 @ 7100730450 (size=12) =====

void FUN_7100730450(long param_1)

{
  if (param_1 != 0) {
    FUN_71007318b0();
    return;
  }
  return;
}



// ===== FUN_7100730460 @ 7100730460 (size=108) =====

int FUN_7100730460(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = FUN_7100731940();
  if (((iVar1 == 0) && (iVar1 = FUN_7100729900(param_1 + 0xf8,param_2 + 0xf8), iVar1 == 0)) &&
     (iVar1 = FUN_71007318f0(param_1 + 0x110,param_2 + 0x110), iVar1 == 0)) {
    return 0;
  }
  FUN_7100730450(param_1);
  return iVar1;
}



// ===== FUN_71007304e0 @ 71007304e0 (size=156) =====

int FUN_71007304e0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [72];
  
  puVar2 = (undefined4 *)FUN_7100737eb0();
  uVar3 = FUN_7100737ec0(*puVar2);
  if (param_3 < 0x43) {
    iVar1 = FUN_7100729e40(param_2,auStack_48,param_3);
    if (iVar1 == 0) {
      iVar1 = FUN_7100737c10(param_1,uVar3,auStack_48,param_3);
    }
  }
  else {
    iVar1 = -0x4d00;
  }
  FUN_710073b460(auStack_48,param_3);
  return iVar1;
}



// ===== FUN_7100730580 @ 7100730580 (size=292) =====

ulong FUN_7100730580(int *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  if (*(long *)(param_2 + 200) == 0) {
    uVar4 = FUN_710072aee0(param_1,param_1,param_2 + 8);
    return uVar4;
  }
  if (((*param_1 < 0) && (iVar3 = FUN_710072a2a0(param_1,0), iVar3 != 0)) ||
     (uVar4 = FUN_7100729ba0(param_1), (ulong)(*(long *)(param_2 + 0xb0) * 2) < uVar4)) {
    uVar4 = 0xffffb080;
  }
  else {
    lVar1 = param_2 + 8;
    uVar2 = (**(code **)(param_2 + 200))(param_1);
    uVar4 = (ulong)uVar2;
    if (uVar2 == 0) {
      do {
        if (-1 < *param_1) {
          iVar3 = FUN_710072a1c0(param_1,lVar1);
          goto joined_r0x007100730624;
        }
        iVar3 = FUN_710072a2a0(param_1,0);
        if (iVar3 == 0) goto LAB_7100730630;
        uVar2 = FUN_710072a670(param_1,param_1,lVar1);
      } while (uVar2 == 0);
      goto LAB_7100730664;
    }
  }
  return uVar4;
LAB_7100730630:
  do {
    iVar3 = FUN_710072a1c0(param_1,lVar1);
joined_r0x007100730624:
    if (iVar3 < 0) {
      return uVar4;
    }
    uVar2 = FUN_710072a410(param_1,param_1,lVar1);
  } while (uVar2 == 0);
LAB_7100730664:
  return (ulong)uVar2;
}



// ===== FUN_71007306b0 @ 71007306b0 (size=72) =====

void FUN_71007306b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_710072a710(param_2,param_3,param_4);
  if (iVar1 != 0) {
    return;
  }
  FUN_7100730580(param_2,param_1);
  return;
}



// ===== FUN_7100730700 @ 7100730700 (size=136) =====

int FUN_7100730700(long param_1,long param_2,byte param_3)

{
  int iVar1;
  undefined1 auStack_18 [24];
  
  param_2 = param_2 + 0x18;
  FUN_7100729690(auStack_18);
  iVar1 = FUN_710072a680(auStack_18,param_1 + 8,param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_710072a2a0(param_2,0);
    iVar1 = FUN_710072dbc0(param_2,auStack_18,param_3 & iVar1 != 0);
  }
  FUN_71007296a0(auStack_18);
  return iVar1;
}



// ===== FUN_7100730790 @ 7100730790 (size=212) =====

ulong FUN_7100730790(undefined8 param_1,long param_2,long param_3,uint param_4,uint param_5)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar5 = 0;
  while( true ) {
    bVar2 = (param_5 >> 1 & 0x3f) == uVar5;
    uVar3 = FUN_710072dbc0(param_2,param_3,bVar2);
    if (uVar3 != 0) break;
    uVar1 = uVar5 + 1;
    uVar3 = FUN_710072dbc0(param_2 + 0x18,param_3 + 0x18,bVar2);
    uVar5 = uVar1 & 0xff;
    if (uVar3 != 0) break;
    param_3 = param_3 + 0x48;
    if ((param_4 & 0xff) == (uVar1 & 0xff)) {
      uVar4 = FUN_7100730700(param_1,param_2,(param_5 & 0xff) >> 7);
      return uVar4;
    }
  }
  return (ulong)uVar3;
}



// ===== FUN_7100730870 @ 7100730870 (size=148) =====

int FUN_7100730870(long param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_710072a680(param_2,param_3,param_4);
  if (iVar1 == 0) {
    while ((*param_2 < 0 && (iVar2 = FUN_710072a2a0(param_2,0), iVar2 != 0))) {
      iVar2 = FUN_710072a670(param_2,param_2,param_1 + 8);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
  }
  return iVar1;
}



// ===== FUN_7100730910 @ 7100730910 (size=136) =====

int FUN_7100730910(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_7100729f20(param_2,1);
  if (iVar1 == 0) {
    while (iVar2 = FUN_710072a1c0(param_2,param_1 + 8), -1 < iVar2) {
      iVar2 = FUN_710072a410(param_2,param_2,param_1 + 8);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
  }
  return iVar1;
}



// ===== FUN_71007309a0 @ 71007309a0 (size=220) =====

int FUN_71007309a0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_18 [24];
  
  FUN_7100729690(auStack_18);
  iVar1 = FUN_710072bea0(auStack_18,2,param_1 + 8,param_3,param_4);
  if (iVar1 == 0) {
    iVar1 = FUN_710072a710(param_2,param_2,auStack_18);
    if (iVar1 == 0) {
      iVar1 = FUN_7100730580(param_2,param_1);
      if (iVar1 == 0) {
        param_2 = param_2 + 0x30;
        iVar1 = FUN_710072a710(param_2,param_2,auStack_18);
        if (iVar1 == 0) {
          iVar1 = FUN_7100730580(param_2,param_1);
        }
      }
    }
  }
  FUN_71007296a0(auStack_18);
  if (iVar1 == -0xe) {
    iVar1 = -0x4d00;
  }
  return iVar1;
}



// ===== FUN_7100730a80 @ 7100730a80 (size=360) =====

int FUN_7100730a80(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined1 auStack_30 [24];
  undefined1 auStack_18 [24];
  
  lVar1 = param_2 + 0x30;
  iVar2 = FUN_710072a2a0(lVar1,0);
  if (iVar2 == 0) {
    return 0;
  }
  FUN_7100729690(auStack_30);
  FUN_7100729690(auStack_18);
  iVar2 = FUN_710072c030(auStack_30,lVar1,param_1 + 8);
  if (iVar2 == 0) {
    iVar2 = FUN_710072a710(auStack_18,auStack_30,auStack_30);
    if (iVar2 == 0) {
      iVar2 = FUN_7100730580(auStack_18,param_1);
      if (iVar2 == 0) {
        iVar2 = FUN_710072a710(param_2,param_2,auStack_18);
        if (iVar2 == 0) {
          iVar2 = FUN_7100730580(param_2,param_1);
          if (iVar2 == 0) {
            param_2 = param_2 + 0x18;
            iVar2 = FUN_710072a710(param_2,param_2,auStack_18);
            if (iVar2 == 0) {
              iVar2 = FUN_7100730580(param_2,param_1);
              if (iVar2 == 0) {
                iVar2 = FUN_710072a710(param_2,param_2,auStack_30);
                if (iVar2 == 0) {
                  iVar2 = FUN_7100730580(param_2,param_1);
                  if (iVar2 == 0) {
                    iVar2 = FUN_7100729a10(lVar1,1);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_71007296a0(auStack_30);
  FUN_71007296a0(auStack_18);
  return iVar2;
}



// ===== FUN_7100730bf0 @ 7100730bf0 (size=796) =====

ulong FUN_7100730bf0(long param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [24];
  undefined1 auStack_18 [24];
  
  if (param_3 < 2) {
    uVar7 = FUN_7100730a80(param_1,*param_2);
    return uVar7;
  }
  lVar2 = FUN_710080e9e0(param_3,0x18);
  if (lVar2 == 0) {
    uVar7 = 0xffffb280;
  }
  else {
    lVar3 = (param_3 & 0xffffffff) * 0x18;
    lVar5 = lVar2;
    do {
      lVar6 = lVar5 + 0x18;
      FUN_7100729690(lVar5);
      lVar5 = lVar6;
    } while (lVar3 + lVar2 != lVar6);
    FUN_7100729690();
    FUN_7100729690(auStack_30);
    FUN_7100729690();
    uVar1 = FUN_7100729900(lVar2,*param_2 + 0x30);
    uVar7 = (ulong)uVar1;
    if (uVar1 == 0) {
      uVar7 = 1;
      lVar5 = lVar2;
      do {
        uVar4 = uVar7;
        lVar6 = lVar5 + 0x18;
        uVar1 = FUN_710072a710(lVar6,lVar5,param_2[uVar4] + 0x30);
        uVar7 = (ulong)uVar1;
        if (uVar1 != 0) goto LAB_7100730cf0;
        uVar1 = FUN_7100730580(lVar6,param_1);
        uVar7 = (ulong)uVar1;
        if (uVar1 != 0) goto LAB_7100730cf0;
        uVar7 = uVar4 + 1;
        lVar5 = lVar6;
      } while (param_3 != uVar4 + 1);
      uVar1 = FUN_710072c030(auStack_48,lVar2 + lVar3 + -0x18,param_1 + 8);
      uVar7 = (ulong)uVar1;
      if (uVar1 == 0) {
        lVar5 = lVar2 + lVar3 + -0x30;
        if (uVar4 != 0) goto LAB_7100730ea0;
        do {
          uVar1 = FUN_7100729900(auStack_30,auStack_48);
          while( true ) {
            uVar7 = (ulong)uVar1;
            if (uVar1 != 0) goto LAB_7100730cf0;
            uVar1 = FUN_710072a710(auStack_18,auStack_30,auStack_30);
            uVar7 = (ulong)uVar1;
            if (uVar1 != 0) goto LAB_7100730cf0;
            uVar1 = FUN_7100730580(auStack_18,param_1);
            uVar7 = (ulong)uVar1;
            if (uVar1 != 0) goto LAB_7100730cf0;
            lVar6 = param_2[uVar4];
            uVar1 = FUN_710072a710(lVar6,lVar6,auStack_18);
            uVar7 = (ulong)uVar1;
            if (uVar1 != 0) goto LAB_7100730cf0;
            uVar1 = FUN_7100730580(lVar6,param_1);
            uVar7 = (ulong)uVar1;
            if (uVar1 != 0) goto LAB_7100730cf0;
            lVar6 = param_2[uVar4] + 0x18;
            uVar1 = FUN_710072a710(lVar6,lVar6,auStack_18);
            uVar7 = (ulong)uVar1;
            if (uVar1 != 0) goto LAB_7100730cf0;
            uVar1 = FUN_7100730580(lVar6,param_1);
            uVar7 = (ulong)uVar1;
            if (uVar1 != 0) goto LAB_7100730cf0;
            lVar6 = param_2[uVar4] + 0x18;
            uVar1 = FUN_710072a710(lVar6,lVar6,auStack_30);
            uVar7 = (ulong)uVar1;
            if (uVar1 != 0) goto LAB_7100730cf0;
            uVar1 = FUN_7100730580(lVar6,param_1);
            uVar7 = (ulong)uVar1;
            if (uVar1 != 0) goto LAB_7100730cf0;
            uVar1 = FUN_7100729820(param_2[uVar4],*(undefined8 *)(param_1 + 0x10));
            uVar7 = (ulong)uVar1;
            if (uVar1 != 0) goto LAB_7100730cf0;
            uVar1 = FUN_7100729820(param_2[uVar4] + 0x18,*(undefined8 *)(param_1 + 0x10));
            uVar7 = (ulong)uVar1;
            if (uVar1 != 0) goto LAB_7100730cf0;
            lVar5 = lVar5 + -0x18;
            FUN_71007296a0(param_2[uVar4] + 0x30);
            if (uVar4 == 0) goto LAB_7100730cf0;
            uVar4 = uVar4 - 1;
            if (uVar4 == 0) break;
LAB_7100730ea0:
            uVar1 = FUN_710072a710(auStack_30,auStack_48,lVar5);
            uVar7 = (ulong)uVar1;
            if (uVar1 != 0) goto LAB_7100730cf0;
            uVar1 = FUN_7100730580(auStack_30,param_1);
            uVar7 = (ulong)uVar1;
            if (uVar1 != 0) goto LAB_7100730cf0;
            uVar1 = FUN_710072a710(auStack_48,auStack_48,param_2[uVar4] + 0x30);
            uVar7 = (ulong)uVar1;
            if (uVar1 != 0) goto LAB_7100730cf0;
            uVar1 = FUN_7100730580(auStack_48,param_1);
          }
        } while( true );
      }
    }
LAB_7100730cf0:
    FUN_71007296a0(auStack_48);
    FUN_71007296a0(auStack_30);
    FUN_71007296a0(auStack_18);
    lVar5 = lVar2;
    do {
      lVar6 = lVar5 + 0x18;
      FUN_71007296a0(lVar5);
      lVar5 = lVar6;
    } while (lVar6 != lVar3 + lVar2);
    FUN_710081c200(lVar2);
  }
  return uVar7;
}



// ===== FUN_7100730f10 @ 7100730f10 (size=376) =====

int FUN_7100730f10(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined1 auStack_30 [24];
  undefined1 auStack_18 [24];
  
  FUN_7100729690(auStack_30);
  FUN_7100729690(auStack_18);
  iVar2 = FUN_710072bea0(auStack_30,2,param_1 + 8,param_3,param_4);
  if (iVar2 == 0) {
    lVar1 = param_2 + 0x30;
    iVar2 = FUN_710072a710(lVar1,lVar1,auStack_30);
    if (iVar2 == 0) {
      iVar2 = FUN_7100730580(lVar1,param_1);
      if (iVar2 == 0) {
        iVar2 = FUN_710072a710(auStack_18,auStack_30,auStack_30);
        if (iVar2 == 0) {
          iVar2 = FUN_7100730580(auStack_18,param_1);
          if (iVar2 == 0) {
            iVar2 = FUN_710072a710(param_2,param_2,auStack_18);
            if (iVar2 == 0) {
              iVar2 = FUN_7100730580(param_2,param_1);
              if (iVar2 == 0) {
                iVar2 = FUN_710072a710(auStack_18,auStack_18,auStack_30);
                if (iVar2 == 0) {
                  iVar2 = FUN_7100730580(auStack_18,param_1);
                  if (iVar2 == 0) {
                    param_2 = param_2 + 0x18;
                    iVar2 = FUN_710072a710(param_2,param_2,auStack_18);
                    if (iVar2 == 0) {
                      iVar2 = FUN_7100730580(param_2,param_1);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_71007296a0(auStack_30);
  FUN_71007296a0(auStack_18);
  if (iVar2 == -0xe) {
    iVar2 = -0x4d00;
  }
  return iVar2;
}



// ===== FUN_7100731090 @ 7100731090 (size=1456) =====

int FUN_7100731090(long param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [24];
  int local_18 [6];
  
  FUN_7100729690(auStack_60);
  FUN_7100729690(auStack_48);
  FUN_7100729690(auStack_30);
  FUN_7100729690(local_18);
  if (*(long *)(param_1 + 0x30) == 0) {
    iVar2 = FUN_710072a710(auStack_48,param_3 + 0x30);
    if ((iVar2 == 0) && (iVar2 = FUN_7100730580(auStack_48,param_1), iVar2 == 0)) {
      lVar1 = param_1 + 8;
      iVar2 = FUN_710072a670(auStack_30,param_3,auStack_48);
      while (iVar2 == 0) {
        iVar2 = FUN_710072a1c0(auStack_30,lVar1);
        if (iVar2 < 0) {
          iVar2 = FUN_710072a680(local_18,param_3,auStack_48);
          goto joined_r0x0071007314c0;
        }
        iVar2 = FUN_710072a410(auStack_30,auStack_30,lVar1);
      }
    }
  }
  else {
    iVar2 = FUN_710072a710(auStack_48,param_3,param_3);
    if ((iVar2 == 0) && (iVar2 = FUN_7100730580(auStack_48,param_1), iVar2 == 0)) {
      lVar1 = param_1 + 8;
      iVar2 = FUN_710072a8c0(auStack_60,auStack_48,3);
      while (iVar2 == 0) {
        iVar2 = FUN_710072a1c0(auStack_60,lVar1);
        if (iVar2 < 0) {
          iVar2 = FUN_710072a2a0(param_1 + 0x20,0);
          if (iVar2 == 0) goto LAB_71007311bc;
          iVar2 = FUN_710072a710(auStack_48,param_3 + 0x30);
          if (((((iVar2 == 0) && (iVar2 = FUN_7100730580(auStack_48,param_1), iVar2 == 0)) &&
               (iVar2 = FUN_710072a710(auStack_30,auStack_48,auStack_48), iVar2 == 0)) &&
              ((iVar2 = FUN_7100730580(auStack_30,param_1), iVar2 == 0 &&
               (iVar2 = FUN_710072a710(auStack_48,auStack_30,param_1 + 0x20), iVar2 == 0)))) &&
             (iVar2 = FUN_7100730580(auStack_48,param_1), iVar2 == 0)) {
            iVar2 = FUN_710072a670(auStack_60,auStack_60,auStack_48);
            goto joined_r0x007100731608;
          }
          break;
        }
        iVar2 = FUN_710072a410(auStack_60,auStack_60,lVar1);
      }
    }
  }
  goto LAB_7100731108;
joined_r0x0071007314c0:
  if (iVar2 != 0) goto LAB_7100731108;
  if ((-1 < local_18[0]) || (iVar2 = FUN_710072a2a0(local_18,0), iVar2 == 0)) {
    iVar2 = FUN_710072a710(auStack_48,auStack_30,local_18);
    if ((iVar2 == 0) && (iVar2 = FUN_7100730580(auStack_48,param_1), iVar2 == 0)) {
      iVar2 = FUN_710072a8c0(auStack_60,auStack_48,3);
      goto joined_r0x00710073153c;
    }
    goto LAB_7100731108;
  }
  iVar2 = FUN_710072a670(local_18,local_18,lVar1);
  goto joined_r0x0071007314c0;
joined_r0x00710073153c:
  if (iVar2 != 0) goto LAB_7100731108;
  iVar2 = FUN_710072a1c0(auStack_60,lVar1);
  if (iVar2 < 0) goto LAB_71007311bc;
  iVar2 = FUN_710072a410(auStack_60,auStack_60,lVar1);
  goto joined_r0x00710073153c;
joined_r0x007100731608:
  if (iVar2 != 0) goto LAB_7100731108;
  iVar2 = FUN_710072a1c0(auStack_60,lVar1);
  if (iVar2 < 0) goto LAB_71007311bc;
  iVar2 = FUN_710072a410(auStack_60,auStack_60,lVar1);
  goto joined_r0x007100731608;
joined_r0x00710073126c:
  if (iVar2 != 0) goto LAB_7100731108;
  iVar2 = FUN_710072a1c0(auStack_48,lVar3);
  if (iVar2 < 0) {
    iVar2 = FUN_710072a710(local_18,auStack_30,auStack_30);
    if ((iVar2 == 0) && (iVar2 = FUN_7100730580(local_18,param_1), iVar2 == 0)) {
      iVar2 = FUN_7100729f20(local_18,1);
      goto joined_r0x0071007312dc;
    }
    goto LAB_7100731108;
  }
  iVar2 = FUN_710072a410(auStack_48,auStack_48,lVar3);
  goto joined_r0x00710073126c;
joined_r0x0071007312dc:
  if (iVar2 != 0) goto LAB_7100731108;
  iVar2 = FUN_710072a1c0(local_18,lVar3);
  if (iVar2 < 0) {
    iVar2 = FUN_710072a710(auStack_30,auStack_60,auStack_60);
    if ((((((iVar2 == 0) && (iVar2 = FUN_7100730580(auStack_30,param_1), iVar2 == 0)) &&
          (iVar2 = FUN_7100730870(param_1,auStack_30,auStack_30,auStack_48), iVar2 == 0)) &&
         (((iVar2 = FUN_7100730870(param_1,auStack_30,auStack_30,auStack_48), iVar2 == 0 &&
           (iVar2 = FUN_7100730870(param_1,auStack_48,auStack_48,auStack_30), iVar2 == 0)) &&
          ((iVar2 = FUN_71007306b0(param_1,auStack_48,auStack_48,auStack_60), iVar2 == 0 &&
           ((iVar2 = FUN_7100730870(param_1,auStack_48,auStack_48,local_18), iVar2 == 0 &&
            (iVar2 = FUN_71007306b0(param_1,local_18,lVar1,param_3 + 0x30), iVar2 == 0)))))))) &&
        (iVar2 = FUN_7100730910(param_1,local_18), iVar2 == 0)) &&
       ((iVar2 = FUN_7100729900(param_2,auStack_30), iVar2 == 0 &&
        (iVar2 = FUN_7100729900(param_2 + 0x18,auStack_48), iVar2 == 0)))) {
      iVar2 = FUN_7100729900(param_2 + 0x30,local_18);
    }
    goto LAB_7100731108;
  }
  iVar2 = FUN_710072a410(local_18,local_18,lVar3);
  goto joined_r0x0071007312dc;
LAB_71007311bc:
  lVar3 = param_1 + 8;
  lVar1 = param_3 + 0x18;
  iVar2 = FUN_710072a710(auStack_30,lVar1,lVar1);
  if ((iVar2 == 0) && (iVar2 = FUN_7100730580(auStack_30,param_1), iVar2 == 0)) {
    iVar2 = FUN_7100729f20(auStack_30,1);
    while (iVar2 == 0) {
      iVar2 = FUN_710072a1c0(auStack_30,lVar3);
      if (iVar2 < 0) {
        iVar2 = FUN_710072a710(auStack_48,param_3,auStack_30);
        if ((iVar2 == 0) && (iVar2 = FUN_7100730580(auStack_48,param_1), iVar2 == 0)) {
          iVar2 = FUN_7100729f20(auStack_48,1);
          goto joined_r0x00710073126c;
        }
        break;
      }
      iVar2 = FUN_710072a410(auStack_30,auStack_30,lVar3);
    }
  }
LAB_7100731108:
  FUN_71007296a0(auStack_60);
  FUN_71007296a0(auStack_48);
  FUN_71007296a0(auStack_30);
  FUN_71007296a0(local_18);
  return iVar2;
}



// ===== FUN_7100731640 @ 7100731640 (size=12) =====

undefined * FUN_7100731640(void)

{
  return &DAT_7100ae62c0;
}



// ===== FUN_7100731650 @ 7100731650 (size=120) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_7100731650(void)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  
  if (_DAT_7100d1471c != 0) {
    return 0x7100d14720;
  }
  piVar2 = (int *)FUN_7100731640();
  uVar3 = 0;
  iVar1 = *piVar2;
  while (iVar1 != 0) {
    uVar3 = uVar3 + 1;
    *(int *)(&DAT_7100d1471c + uVar3 * 4) = iVar1;
    iVar1 = piVar2[(uVar3 & 0xffffffff) * 4];
  }
  _DAT_7100d1471c = 1;
  *(undefined4 *)(uVar3 * 4 + 0x7100d14720) = 0;
  return 0x7100d14720;
}



// ===== FUN_71007316d0 @ 71007316d0 (size=36) =====

char FUN_71007316d0(long param_1)

{
  if (*(long *)(param_1 + 0x60) != 0) {
    return (*(long *)(param_1 + 0x78) == 0) + '\x01';
  }
  return '\0';
}



// ===== FUN_7100731700 @ 7100731700 (size=44) =====

void FUN_7100731700(long param_1)

{
  FUN_7100729690();
  FUN_7100729690(param_1 + 0x18);
  FUN_7100729690(param_1 + 0x30);
  return;
}



// ===== FUN_7100731730 @ 7100731730 (size=88) =====

void FUN_7100731730(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_7100729690(param_1 + 2);
  FUN_7100729690(param_1 + 8);
  FUN_7100729690(param_1 + 0xe);
  FUN_7100731700(param_1 + 0x14);
  FUN_7100729690(param_1 + 0x26);
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  param_1[0x30] = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  return;
}



// ===== FUN_7100731790 @ 7100731790 (size=44) =====

void FUN_7100731790(long param_1)

{
  FUN_7100731730();
  FUN_7100729690(param_1 + 0xf8);
  FUN_7100731700(param_1 + 0x110);
  return;
}



// ===== FUN_71007317c0 @ 71007317c0 (size=52) =====

void FUN_71007317c0(long param_1)

{
  if (param_1 != 0) {
    FUN_71007296a0();
    FUN_71007296a0(param_1 + 0x18);
    FUN_71007296a0(param_1 + 0x30);
    return;
  }
  return;
}



// ===== FUN_7100731800 @ 7100731800 (size=168) =====

void FUN_7100731800(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xc0) != 1) {
    FUN_71007296a0(param_1 + 8);
    FUN_71007296a0(param_1 + 0x20);
    FUN_71007296a0(param_1 + 0x38);
    FUN_71007317c0(param_1 + 0x50);
    FUN_71007296a0(param_1 + 0x98);
  }
  lVar1 = *(long *)(param_1 + 0xe8);
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0xf0) != 0) {
      uVar2 = 0;
      lVar3 = 0;
      do {
        uVar2 = uVar2 + 1;
        FUN_71007317c0(lVar1 + lVar3);
        lVar1 = *(long *)(param_1 + 0xe8);
        lVar3 = lVar3 + 0x48;
      } while (uVar2 < *(ulong *)(param_1 + 0xf0));
    }
    FUN_710081c200();
  }
  FUN_710073b460(param_1,0xf8);
  return;
}



// ===== FUN_71007318b0 @ 71007318b0 (size=52) =====

void FUN_71007318b0(long param_1)

{
  if (param_1 != 0) {
    FUN_7100731800();
    FUN_71007296a0(param_1 + 0xf8);
    FUN_71007317c0(param_1 + 0x110);
    return;
  }
  return;
}



// ===== FUN_71007318f0 @ 71007318f0 (size=76) =====

void FUN_71007318f0(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = FUN_7100729900();
  if ((iVar1 == 0) && (iVar1 = FUN_7100729900(param_1 + 0x18,param_2 + 0x18), iVar1 == 0)) {
    FUN_7100729900(param_1 + 0x30,param_2 + 0x30);
    return;
  }
  return;
}



// ===== FUN_7100731940 @ 7100731940 (size=8) =====

void FUN_7100731940(undefined8 param_1,undefined4 *param_2)

{
  FUN_7100735010(param_1,*param_2);
  return;
}



// ===== FUN_7100731950 @ 7100731950 (size=76) =====

void FUN_7100731950(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_7100729a10(param_1,1);
  if ((iVar1 == 0) && (iVar1 = FUN_7100729a10(param_1 + 0x18,1), iVar1 == 0)) {
    FUN_7100729a10(param_1 + 0x30,0);
    return;
  }
  return;
}



// ===== FUN_71007319a0 @ 71007319a0 (size=1248) =====

ulong FUN_71007319a0(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  int local_a8 [6];
  int local_90 [6];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [24];
  undefined1 auStack_18 [24];
  
  lVar1 = param_3 + 0x30;
  iVar2 = FUN_710072a2a0(lVar1,0);
  lVar5 = param_4;
  if (iVar2 == 0) {
LAB_7100731c70:
    uVar4 = FUN_71007318f0(param_2,lVar5);
    return uVar4;
  }
  if (*(long *)(param_4 + 0x40) != 0) {
    iVar2 = FUN_710072a2a0(param_4 + 0x30,0);
    lVar5 = param_3;
    if (iVar2 == 0) goto LAB_7100731c70;
    if ((*(long *)(param_4 + 0x40) != 0) && (iVar2 = FUN_710072a2a0(param_4 + 0x30,1), iVar2 != 0))
    {
      uVar3 = 0xffffb080;
      goto LAB_7100731ac4;
    }
  }
  FUN_7100729690(local_a8);
  FUN_7100729690(local_90);
  FUN_7100729690(auStack_78);
  FUN_7100729690(auStack_60);
  FUN_7100729690(auStack_48);
  FUN_7100729690(auStack_30);
  FUN_7100729690(auStack_18);
  uVar3 = FUN_710072a710(local_a8,lVar1,lVar1);
  if ((((((uVar3 == 0) && (uVar3 = FUN_7100730580(local_a8,param_1), uVar3 == 0)) &&
        (uVar3 = FUN_710072a710(local_90,local_a8,lVar1), uVar3 == 0)) &&
       ((uVar3 = FUN_7100730580(local_90,param_1), uVar3 == 0 &&
        (uVar3 = FUN_710072a710(local_a8,local_a8,param_4), uVar3 == 0)))) &&
      (uVar3 = FUN_7100730580(local_a8,param_1), uVar3 == 0)) &&
     ((uVar3 = FUN_710072a710(local_90,local_90,param_4 + 0x18), uVar3 == 0 &&
      (uVar3 = FUN_7100730580(local_90,param_1), uVar3 == 0)))) {
    uVar3 = FUN_710072a680(local_a8,local_a8,param_3);
    while (uVar3 == 0) {
      if ((-1 < local_a8[0]) || (iVar2 = FUN_710072a2a0(local_a8,0), iVar2 == 0)) {
        uVar3 = FUN_710072a680(local_90,local_90,param_3 + 0x18);
        if (uVar3 == 0) {
          goto LAB_7100731c24;
        }
        break;
      }
      uVar3 = FUN_710072a670(local_a8,local_a8,param_1 + 8);
    }
  }
  goto LAB_7100731a84;
  while (uVar3 = FUN_710072a670(local_90,local_90,param_1 + 8), uVar3 == 0) {
LAB_7100731c24:
    if ((-1 < local_90[0]) || (iVar2 = FUN_710072a2a0(local_90,0), iVar2 == 0)) {
      iVar2 = FUN_710072a2a0(local_a8,0);
      if (iVar2 == 0) {
        iVar2 = FUN_710072a2a0(local_90,0);
        if (iVar2 == 0) {
          uVar3 = FUN_7100731090(param_1,param_2,param_3);
        }
        else {
          uVar3 = FUN_7100731950(param_2);
        }
      }
      else {
        uVar3 = FUN_710072a710(auStack_18,lVar1,local_a8);
        if ((((((uVar3 == 0) && (uVar3 = FUN_7100730580(auStack_18,param_1), uVar3 == 0)) &&
              (uVar3 = FUN_710072a710(auStack_78,local_a8,local_a8), uVar3 == 0)) &&
             (((uVar3 = FUN_7100730580(auStack_78,param_1), uVar3 == 0 &&
               (uVar3 = FUN_710072a710(auStack_60,auStack_78,local_a8), uVar3 == 0)) &&
              ((uVar3 = FUN_7100730580(auStack_60,param_1), uVar3 == 0 &&
               ((uVar3 = FUN_71007306b0(param_1,auStack_78,auStack_78,param_3), uVar3 == 0 &&
                (uVar3 = FUN_7100729900(local_a8,auStack_78), uVar3 == 0)))))))) &&
            (((uVar3 = FUN_7100730910(param_1,local_a8), uVar3 == 0 &&
              (((uVar3 = FUN_71007306b0(param_1,auStack_48,local_90,local_90), uVar3 == 0 &&
                (uVar3 = FUN_7100730870(param_1,auStack_48,auStack_48,local_a8), uVar3 == 0)) &&
               (uVar3 = FUN_7100730870(param_1,auStack_48,auStack_48,auStack_60), uVar3 == 0)))) &&
             (((uVar3 = FUN_7100730870(param_1,auStack_78,auStack_78,auStack_48), uVar3 == 0 &&
               (uVar3 = FUN_71007306b0(param_1,auStack_78,auStack_78,local_90), uVar3 == 0)) &&
              ((uVar3 = FUN_71007306b0(param_1,auStack_60,auStack_60,param_3 + 0x18), uVar3 == 0 &&
               ((uVar3 = FUN_7100730870(param_1,auStack_30,auStack_78,auStack_60), uVar3 == 0 &&
                (uVar3 = FUN_7100729900(param_2,auStack_48), uVar3 == 0)))))))))) &&
           (uVar3 = FUN_7100729900(param_2 + 0x18,auStack_30), uVar3 == 0)) {
          uVar3 = FUN_7100729900(param_2 + 0x30,auStack_18);
        }
      }
      break;
    }
  }
LAB_7100731a84:
  FUN_71007296a0(local_a8);
  FUN_71007296a0(local_90);
  FUN_71007296a0(auStack_78);
  FUN_71007296a0(auStack_60);
  FUN_71007296a0(auStack_48);
  FUN_71007296a0(auStack_30);
  FUN_71007296a0(auStack_18);
LAB_7100731ac4:
  return (ulong)uVar3;
}



// ===== FUN_7100731e80 @ 7100731e80 (size=1720) =====

int FUN_7100731e80(long param_1,long param_2,undefined8 param_3,long param_4,undefined *param_5,
                  undefined1 *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  byte *pbVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong local_220;
  long local_218;
  undefined *local_210;
  undefined1 *local_208;
  ulong local_200;
  uint local_1f4;
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [72];
  undefined1 auStack_190 [120];
  long lStack_118;
  byte local_110 [272];
  
  FUN_7100737970(auStack_190);
  if (param_5 == (undefined *)0x0) {
    iVar7 = FUN_71007304e0(auStack_190,param_3,*(long *)(param_1 + 0xb8) + 7U >> 3);
    if (iVar7 != 0) {
      FUN_7100737e70(auStack_190);
      FUN_71007317c0(param_2);
      return iVar7;
    }
    local_210 = &DAT_71007304d0;
    iVar7 = FUN_710072a1c0(param_4 + 0x18,param_1 + 0x68);
    local_208 = auStack_190;
    if (iVar7 == 0) goto LAB_71007320d0;
LAB_7100731ed8:
    local_200 = *(ulong *)(param_1 + 0xb8);
    if (local_200 < 5) {
      local_200 = local_200 + 1;
      bVar6 = false;
      uVar13 = local_200 >> 1;
      uVar15 = 2;
      lVar18 = 2;
      iVar8 = 1;
      local_218 = 2;
    }
    else {
      local_200 = local_200 + 3;
      lVar18 = 8;
      uVar13 = local_200 >> 2;
      local_218 = 8;
      iVar8 = 3;
      uVar15 = 4;
LAB_7100731f00:
      bVar6 = false;
    }
LAB_7100731f34:
    lVar10 = FUN_710080e9e0(local_218,0x48);
    if (lVar10 == 0) {
      iVar7 = -0x4d80;
      FUN_7100737e70(auStack_190);
      goto LAB_7100732064;
    }
    lVar11 = lVar10;
    do {
      lVar17 = lVar11 + 0x48;
      FUN_7100731700(lVar11);
      lVar11 = lVar17;
    } while (lVar10 + lVar18 * 0x48 != lVar17);
    iVar7 = FUN_71007318f0(lVar10,param_4);
    if (iVar7 == 0) {
      uVar16 = 0;
      if ((long)iVar8 * uVar13 != 0) {
        do {
          uVar19 = 0;
          if (uVar13 != 0) {
            uVar19 = uVar16 / uVar13;
          }
          uVar12 = 1 << (ulong)((uint)uVar19 & 0x1f) & 0xff;
          lVar11 = lVar10 + (ulong)uVar12 * 0x48;
          if ((uVar16 == uVar19 * uVar13) &&
             (iVar7 = FUN_71007318f0(lVar11,lVar10 + (ulong)(uVar12 >> 1) * 0x48), iVar7 != 0))
          goto LAB_7100731ff8;
          iVar7 = FUN_7100731090(param_1,lVar11);
          uVar16 = uVar16 + 1;
          if (iVar7 != 0) goto LAB_7100731ff8;
        } while (uVar16 != (long)iVar8 * uVar13);
      }
      lVar11 = 0;
      uVar16 = 1;
      do {
        lVar11 = lVar11 + 1;
        lVar17 = uVar16 * 0x48;
        uVar12 = ((uint)uVar16 & 0x7f) << 1;
        uVar16 = (ulong)uVar12;
        (&lStack_118)[lVar11] = lVar10 + lVar17;
      } while (uVar12 < (uint)lVar18);
      iVar7 = FUN_7100730bf0(param_1,local_110);
      local_1f4 = 1;
      if (iVar7 == 0) {
        do {
          lVar17 = (ulong)local_1f4 * 0x48;
          uVar16 = (ulong)local_1f4;
          lVar11 = lVar10 + lVar17 + -0x48;
          while( true ) {
            uVar16 = uVar16 - 1;
            if (uVar16 == 0xffffffffffffffff) break;
            iVar7 = FUN_71007319a0(param_1,lVar17 + lVar11,lVar11,lVar10 + lVar17);
            lVar11 = lVar11 + -0x48;
            if (iVar7 != 0) goto LAB_7100731ff8;
          }
          local_1f4 = (local_1f4 & 0x7f) << 1;
        } while (local_1f4 < (uint)lVar18);
        lVar11 = lVar10 + 0x48;
        pbVar14 = local_110;
        do {
          *(long *)pbVar14 = lVar11;
          lVar11 = lVar11 + 0x48;
          pbVar14 = pbVar14 + 8;
        } while (lVar10 + local_218 * 0x48 != lVar11);
        iVar7 = FUN_7100730bf0(param_1,local_110,local_218 + -1);
        if (iVar7 == 0) {
          if (bVar6) {
            *(long *)(param_1 + 0xe8) = lVar10;
            *(long *)(param_1 + 0xf0) = local_218;
          }
          goto LAB_7100732114;
        }
      }
    }
  }
  else {
    iVar7 = FUN_710072a1c0(param_4 + 0x18,param_1 + 0x68);
    local_210 = param_5;
    local_208 = param_6;
    if (iVar7 != 0) goto LAB_7100731ed8;
LAB_71007320d0:
    iVar7 = FUN_710072a1c0(param_4,param_1 + 0x50);
    if (*(ulong *)(param_1 + 0xb8) < 5) {
      uVar15 = 2;
      iVar8 = 1;
      lVar18 = 2;
      local_218 = 2;
    }
    else {
      lVar18 = 8;
      uVar15 = 4;
      local_218 = 8;
      iVar8 = 3;
    }
    local_200 = (*(ulong *)(param_1 + 0xb8) + uVar15) - 1;
    uVar13 = 0;
    if (uVar15 != 0) {
      uVar13 = local_200 / uVar15;
    }
    if (iVar7 != 0) goto LAB_7100731f00;
    lVar10 = *(long *)(param_1 + 0xe8);
    if (lVar10 == 0) {
      bVar6 = true;
      goto LAB_7100731f34;
    }
LAB_7100732114:
    FUN_7100729690(auStack_1f0);
    FUN_7100729690(auStack_1d8);
    iVar7 = FUN_7100729a90(param_1 + 0x98,0);
    if (iVar7 == 1) {
      iVar8 = FUN_7100729a90(param_3,0);
      iVar7 = FUN_7100729900(auStack_1f0,param_3);
      if ((iVar7 == 0) && (iVar7 = FUN_710072a680(auStack_1d8,param_1 + 0x98,param_3), iVar7 == 0))
      {
        iVar7 = FUN_710072dbc0(auStack_1f0,auStack_1d8);
        if (iVar7 == 0) {
          FUN_7100808340(local_110,0,uVar13 + 1);
          if (uVar15 <= local_200) {
            local_220 = 0;
            pbVar14 = local_110;
            do {
              uVar16 = 0;
              uVar19 = local_220;
              do {
                iVar7 = FUN_7100729a90(auStack_1f0,uVar19);
                uVar12 = (uint)uVar16;
                uVar16 = uVar16 + 1;
                uVar19 = uVar19 + uVar13;
                *pbVar14 = (byte)(iVar7 << (ulong)(uVar12 & 0x1f)) | *pbVar14;
              } while (uVar16 != uVar15);
              pbVar14 = pbVar14 + 1;
              local_220 = local_220 + 1;
            } while (local_220 < uVar13);
            uVar12 = (uint)local_110[0];
            uVar9 = 0;
            pbVar14 = local_110;
            uVar15 = 1;
            do {
              pbVar14 = pbVar14 + 1;
              bVar4 = *pbVar14;
              uVar15 = uVar15 + 1;
              uVar2 = (uint)bVar4 ^ uVar9 ^ 0xffffffff;
              uVar3 = bVar4 ^ uVar9;
              bVar5 = (byte)uVar12;
              uVar1 = -(uVar2 & 1) & uVar12;
              uVar12 = uVar3 ^ uVar1;
              pbVar14[-1] = bVar5 | (byte)(uVar2 << 7);
              uVar9 = bVar4 & uVar9 | uVar3 & uVar1;
              *pbVar14 = (byte)uVar12;
            } while (uVar15 <= uVar13);
          }
          FUN_71007296a0(auStack_1d8);
          FUN_71007296a0(auStack_1f0);
          FUN_7100731700(auStack_1d8);
          iVar7 = FUN_7100730790(param_1,param_2,lVar10,lVar18,local_110[uVar13]);
          if (((iVar7 == 0) && (iVar7 = FUN_7100729a10(param_2 + 0x30,1), iVar7 == 0)) &&
             (iVar7 = FUN_7100730f10(param_1,param_2,local_210,local_208), iVar7 == 0)) {
            pbVar14 = local_110 + uVar13;
            do {
              if (local_110 == pbVar14) {
                FUN_71007317c0(auStack_1d8);
                iVar7 = FUN_7100730700(param_1,param_2,iVar8 == 0);
                if ((iVar7 != 0) ||
                   (iVar7 = FUN_7100730f10(param_1,param_2,local_210,local_208), iVar7 != 0))
                goto LAB_7100731ff8;
                iVar7 = FUN_7100730a80(param_1,param_2);
                FUN_7100737e70(auStack_190);
                if (lVar10 != *(long *)(param_1 + 0xe8)) goto LAB_710073200c;
                goto LAB_7100732034;
              }
              iVar7 = FUN_7100731090(param_1,param_2,param_2);
              if ((iVar7 != 0) ||
                 (iVar7 = FUN_7100730790(param_1,auStack_1d8,lVar10,lVar18,pbVar14[-1]), iVar7 != 0)
                 ) break;
              iVar7 = FUN_71007319a0(param_1,param_2,param_2,auStack_1d8);
              pbVar14 = pbVar14 + -1;
            } while (iVar7 == 0);
          }
          FUN_71007317c0(auStack_1d8);
          goto LAB_7100731ff8;
        }
      }
      FUN_71007296a0(auStack_1d8);
      FUN_71007296a0(auStack_1f0);
    }
    else {
      iVar7 = -0x4f80;
    }
  }
LAB_7100731ff8:
  FUN_7100737e70(auStack_190);
  if (lVar10 != *(long *)(param_1 + 0xe8)) {
LAB_710073200c:
    lVar11 = lVar10;
    do {
      lVar17 = lVar11 + 0x48;
      FUN_71007317c0(lVar11);
      lVar11 = lVar17;
    } while (lVar10 + lVar18 * 0x48 != lVar17);
    FUN_710081c200(lVar10);
LAB_7100732034:
    if (iVar7 == 0) {
      return 0;
    }
  }
LAB_7100732064:
  FUN_71007317c0(param_2);
  return iVar7;
}



// ===== FUN_7100732540 @ 7100732540 (size=36) =====

bool FUN_7100732540(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_710072a2a0(param_1 + 0x30,0);
  return iVar1 == 0;
}



// ===== FUN_7100732570 @ 7100732570 (size=380) =====

ulong FUN_7100732570(long param_1,long param_2,int param_3,ulong *param_4,char *param_5,
                    ulong param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  
  uVar4 = FUN_7100729c10(param_1 + 8);
  iVar2 = FUN_71007316d0(param_1);
  if (iVar2 == 2) {
    *param_4 = uVar4;
    if (param_6 < uVar4) {
      return 0xffffb100;
    }
    uVar3 = FUN_7100729d80(param_2,param_5,uVar4);
    uVar6 = (ulong)uVar3;
    if (uVar3 != 0) {
      return uVar6;
    }
    iVar2 = FUN_71007316d0(param_1);
  }
  else {
    uVar6 = 0xffffb180;
    iVar2 = FUN_71007316d0(param_1);
  }
  if (iVar2 != 1) {
    return uVar6;
  }
  iVar2 = FUN_710072a2a0(param_2 + 0x30,0);
  if (iVar2 == 0) {
    if (param_6 != 0) {
      *param_5 = '\0';
      *param_4 = 1;
      return 0;
    }
  }
  else if (param_3 == 0) {
    uVar6 = uVar4 * 2 + 1;
    *param_4 = uVar6;
    if (uVar6 <= param_6) {
      *param_5 = '\x04';
      uVar3 = FUN_7100729e40(param_2,param_5 + 1,uVar4);
      if (uVar3 != 0) {
        return (ulong)uVar3;
      }
      param_2 = param_2 + 0x18;
      pcVar5 = param_5 + uVar4 + 1;
      goto LAB_7100732684;
    }
  }
  else {
    if (param_3 != 1) {
      return uVar6;
    }
    *param_4 = uVar4 + 1;
    if (uVar4 + 1 <= param_6) {
      cVar1 = FUN_7100729a90(param_2 + 0x18,0);
      pcVar5 = param_5 + 1;
      *param_5 = cVar1 + '\x02';
LAB_7100732684:
      uVar4 = FUN_7100729e40(param_2,pcVar5,uVar4);
      return uVar4;
    }
  }
  return 0xffffb100;
}



// ===== FUN_71007326f0 @ 71007326f0 (size=412) =====

ulong FUN_71007326f0(int *param_1,long param_2,char *param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_4 != 0) {
    lVar3 = FUN_7100729c10(param_1 + 2);
    iVar1 = FUN_71007316d0(param_1);
    if (iVar1 == 2) {
      if (param_4 != lVar3) {
        return 0xffffb080;
      }
      uVar2 = FUN_7100729c30(param_2,param_3,param_4);
      if (uVar2 != 0) {
        return (ulong)uVar2;
      }
      FUN_71007296a0(param_2 + 0x18);
      if (*param_1 == 9) {
        uVar2 = FUN_7100729ac0(param_2,param_4 * 8 + -1,0);
        if (uVar2 != 0) {
          return (ulong)uVar2;
        }
      }
      uVar2 = FUN_7100729a10(param_2 + 0x30,1);
      uVar4 = (ulong)uVar2;
      if (uVar2 != 0) {
        return uVar4;
      }
      iVar1 = FUN_71007316d0(param_1);
    }
    else {
      uVar4 = 0xffffb180;
      iVar1 = FUN_71007316d0(param_1);
    }
    if (iVar1 != 1) {
      return uVar4;
    }
    if (*param_3 == '\0') {
      if (param_4 == 1) {
        uVar4 = FUN_7100731950(param_2);
        return uVar4;
      }
    }
    else {
      if (*param_3 != '\x04') {
        return 0xffffb180;
      }
      if (lVar3 * 2 + 1 == param_4) {
        uVar2 = FUN_7100729cb0(param_2,param_3 + 1,lVar3);
        if (uVar2 != 0) {
          return (ulong)uVar2;
        }
        uVar2 = FUN_7100729cb0(param_2 + 0x18,param_3 + lVar3 + 1,lVar3);
        if (uVar2 == 0) {
          uVar4 = FUN_7100729a10(param_2 + 0x30,1);
          return uVar4;
        }
        return (ulong)uVar2;
      }
    }
  }
  return 0xffffb080;
}



// ===== FUN_7100732890 @ 7100732890 (size=884) =====

int FUN_7100732890(int *param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined1 auStack_30 [24];
  int local_18 [6];
  
  iVar3 = FUN_710072a2a0(param_2 + 0x30,1);
  if (iVar3 != 0) {
    return -0x4c80;
  }
  iVar3 = FUN_71007316d0(param_1);
  if (iVar3 == 2) {
    uVar5 = FUN_7100729c10(param_2);
    if (*(long *)(param_1 + 0x2e) + 7U >> 3 < uVar5) {
      return -0x4c80;
    }
    iVar3 = FUN_710072a2a0(param_2,0);
    if (iVar3 < 0) {
      return -0x4c80;
    }
    iVar3 = *param_1;
    param_1 = param_1 + 2;
    FUN_7100729690(local_18);
    iVar4 = FUN_7100729900(local_18,param_2);
    while (iVar4 == 0) {
      iVar4 = FUN_710072a1c0(local_18,param_1);
      if (iVar4 < 0) {
        iVar4 = FUN_710072a2a0(local_18,1);
        if (((iVar4 < 1) ||
            ((iVar3 == 9 &&
             ((iVar3 = FUN_710072a1c0(local_18,&DAT_7100ae62a8), iVar3 == 0 ||
              (iVar3 = FUN_710072a1c0(local_18,&DAT_7100ae6290), iVar3 == 0)))))) ||
           ((iVar4 = FUN_710072a690(local_18,local_18,1), iVar4 == 0 &&
            (iVar3 = FUN_710072a1c0(local_18,param_1), iVar3 == 0)))) {
          iVar4 = -0x4c80;
        }
        break;
      }
      iVar4 = FUN_710072a680(local_18,local_18,param_1);
    }
    goto LAB_710073295c;
  }
  iVar3 = FUN_71007316d0(param_1);
  if (iVar3 != 1) {
    return -0x4f80;
  }
  iVar3 = FUN_710072a2a0(param_2,0);
  if (iVar3 < 0) {
    return -0x4c80;
  }
  lVar1 = param_2 + 0x18;
  iVar3 = FUN_710072a2a0(lVar1,0);
  if (iVar3 < 0) {
    return -0x4c80;
  }
  piVar2 = param_1 + 2;
  iVar3 = FUN_710072a1c0(param_2,piVar2);
  if (-1 < iVar3) {
    return -0x4c80;
  }
  iVar3 = FUN_710072a1c0(lVar1,piVar2);
  if (-1 < iVar3) {
    return -0x4c80;
  }
  FUN_7100729690(auStack_30);
  FUN_7100729690(local_18);
  iVar4 = FUN_710072a710(auStack_30,lVar1,lVar1);
  if ((((iVar4 == 0) && (iVar4 = FUN_7100730580(auStack_30,param_1), iVar4 == 0)) &&
      (iVar4 = FUN_710072a710(local_18,param_2,param_2), iVar4 == 0)) &&
     (iVar4 = FUN_7100730580(local_18,param_1), iVar4 == 0)) {
    if (*(long *)(param_1 + 0xc) == 0) {
      iVar4 = FUN_710072a6d0(local_18,local_18,3);
      while (iVar4 == 0) {
        if ((-1 < local_18[0]) || (iVar3 = FUN_710072a2a0(local_18,0), iVar3 == 0))
        goto LAB_7100732a0c;
        iVar4 = FUN_710072a670(local_18,local_18,piVar2);
      }
    }
    else {
      iVar4 = FUN_710072a670(local_18,local_18,param_1 + 8);
      while (iVar4 == 0) {
        iVar3 = FUN_710072a1c0(local_18,piVar2);
        if (iVar3 < 0) goto LAB_7100732a0c;
        iVar4 = FUN_710072a410(local_18,local_18,piVar2);
      }
    }
  }
  goto LAB_7100732954;
LAB_7100732a0c:
  iVar4 = FUN_710072a710(local_18,local_18,param_2);
  if ((iVar4 == 0) && (iVar4 = FUN_7100730580(local_18,param_1), iVar4 == 0)) {
    iVar4 = FUN_710072a670(local_18,local_18,param_1 + 0xe);
    while (iVar4 == 0) {
      iVar3 = FUN_710072a1c0(local_18,piVar2);
      if (iVar3 < 0) {
        iVar4 = FUN_710072a1c0(auStack_30);
        if (iVar4 != 0) {
          iVar4 = -0x4c80;
        }
        break;
      }
      iVar4 = FUN_710072a410(local_18,local_18,piVar2);
    }
  }
LAB_7100732954:
  FUN_71007296a0(auStack_30);
LAB_710073295c:
  FUN_71007296a0(local_18);
  return iVar4;
}



// ===== FUN_7100732c10 @ 7100732c10 (size=192) =====

undefined8 FUN_7100732c10(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_71007316d0();
  if (iVar1 == 2) {
    iVar1 = FUN_7100729a90(param_2,0);
    if ((iVar1 == 0) && (iVar1 = FUN_7100729a90(param_2,1), iVar1 == 0)) {
      lVar2 = FUN_7100729ba0(param_2);
      if (lVar2 + -1 == *(long *)(param_1 + 0xb8)) {
        if (lVar2 + -1 != 0xfe) {
          return 0;
        }
        iVar1 = FUN_7100729a90(param_2,2);
        if (iVar1 == 0) {
          return 0;
        }
      }
    }
  }
  else {
    iVar1 = FUN_71007316d0(param_1);
    if (iVar1 != 1) {
      return 0xffffb080;
    }
    iVar1 = FUN_710072a2a0(param_2,1);
    if ((-1 < iVar1) && (iVar1 = FUN_710072a1c0(param_2,param_1 + 0x98), iVar1 < 0)) {
      return 0;
    }
  }
  return 0xffffb380;
}



// ===== FUN_7100732cd0 @ 7100732cd0 (size=1932) =====

ulong FUN_7100732cd0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    undefined *param_5,undefined1 *param_6)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  int local_170 [6];
  undefined1 auStack_158 [24];
  int local_140 [6];
  undefined1 auStack_128 [24];
  int local_110 [6];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [48];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [128];
  
  uVar4 = FUN_7100732c10(param_1,param_3);
  if (uVar4 != 0) {
    return (ulong)uVar4;
  }
  uVar4 = FUN_7100732890(param_1,param_4);
  if (uVar4 != 0) {
    return (ulong)uVar4;
  }
  uVar9 = 0xffffb080;
  iVar5 = FUN_71007316d0(param_1);
  if (iVar5 != 2) {
LAB_7100732d5c:
    iVar5 = FUN_71007316d0(param_1);
    if (iVar5 != 1) {
      return uVar9;
    }
    uVar9 = FUN_7100731e80(param_1,param_2,param_3,param_4,param_5,param_6);
    return uVar9;
  }
  FUN_7100737970(auStack_80);
  FUN_7100731700(auStack_c8);
  FUN_7100729690(auStack_1b8);
  puVar7 = param_5;
  puVar8 = param_6;
  if (param_5 == (undefined *)0x0) {
    uVar4 = FUN_71007304e0(auStack_80,param_3,*(long *)(param_1 + 0xb8) + 7U >> 3);
    uVar9 = (ulong)uVar4;
    if (uVar4 != 0) goto LAB_7100732de4;
    puVar7 = &DAT_71007304d0;
    puVar8 = auStack_80;
  }
  uVar4 = FUN_7100729900(auStack_1b8,param_4);
  uVar9 = (ulong)uVar4;
  if (uVar4 == 0) {
    uVar4 = FUN_71007318f0(auStack_c8,param_4);
    uVar9 = (ulong)uVar4;
    if (uVar4 == 0) {
      uVar4 = FUN_7100729a10(param_2,1);
      uVar9 = (ulong)uVar4;
      if (uVar4 == 0) {
        lVar1 = param_2 + 0x30;
        uVar4 = FUN_7100729a10(lVar1,0);
        uVar9 = (ulong)uVar4;
        if (uVar4 == 0) {
          lVar2 = param_1 + 8;
          FUN_71007296a0(param_2 + 0x18);
          do {
            iVar5 = FUN_710072a1c0(auStack_c8,lVar2);
            if (iVar5 < 0) {
              uVar4 = FUN_71007309a0(param_1,auStack_c8,puVar7,puVar8);
              uVar9 = (ulong)uVar4;
              if (uVar4 != 0) goto LAB_7100732de4;
              lVar6 = *(long *)(param_1 + 0xb8);
              goto LAB_7100732ee0;
            }
            uVar4 = FUN_710072a410(auStack_c8,auStack_c8,lVar2);
          } while (uVar4 == 0);
          uVar9 = (ulong)uVar4;
        }
      }
    }
  }
  goto LAB_7100732de4;
joined_r0x007100732ff8:
  if (uVar4 != 0) goto LAB_71007332f0;
  if ((-1 < local_170[0]) || (iVar5 = FUN_710072a2a0(local_170,0), iVar5 == 0)) {
    uVar4 = FUN_710072a710(auStack_158,local_170,local_170);
    if ((uVar4 == 0) && (uVar4 = FUN_7100730580(auStack_158,param_1), uVar4 == 0)) {
      uVar4 = FUN_710072a680(local_140,auStack_188,auStack_158);
      goto joined_r0x007100733070;
    }
    goto LAB_71007332f0;
  }
  uVar4 = FUN_710072a670(local_170,local_170,lVar2);
  goto joined_r0x007100732ff8;
joined_r0x007100733070:
  if (uVar4 != 0) goto LAB_71007332f0;
  if ((-1 < local_140[0]) || (iVar5 = FUN_710072a2a0(local_140,0), iVar5 == 0)) {
    uVar4 = FUN_710072a670(auStack_128,auStack_c8,auStack_98);
    goto joined_r0x0071007330c0;
  }
  uVar4 = FUN_710072a670(local_140,local_140,lVar2);
  goto joined_r0x007100733070;
joined_r0x0071007330c0:
  if (uVar4 != 0) goto LAB_71007332f0;
  iVar5 = FUN_710072a1c0(auStack_128,lVar2);
  if (iVar5 < 0) {
    uVar4 = FUN_710072a680(local_110,auStack_c8,auStack_98);
    goto joined_r0x007100733108;
  }
  uVar4 = FUN_710072a410(auStack_128,auStack_128,lVar2);
  goto joined_r0x0071007330c0;
joined_r0x007100733108:
  if (uVar4 != 0) goto LAB_71007332f0;
  if ((-1 < local_110[0]) || (iVar5 = FUN_710072a2a0(local_110,0), iVar5 == 0)) {
    uVar4 = FUN_710072a710(auStack_f8,local_110,auStack_1a0);
    if ((uVar4 == 0) &&
       (((uVar4 = FUN_7100730580(auStack_f8,param_1), uVar4 == 0 &&
         (uVar4 = FUN_710072a710(auStack_e0,auStack_128,local_170), uVar4 == 0)) &&
        (uVar4 = FUN_7100730580(auStack_e0,param_1), uVar4 == 0)))) {
      uVar4 = FUN_710072a670(auStack_c8,auStack_f8,auStack_e0);
      goto joined_r0x0071007331b0;
    }
    goto LAB_71007332f0;
  }
  uVar4 = FUN_710072a670(local_110,local_110,lVar2);
  goto joined_r0x007100733108;
joined_r0x0071007331b0:
  if (uVar4 != 0) goto LAB_71007332f0;
  iVar5 = FUN_710072a1c0(auStack_c8,lVar2);
  if (iVar5 < 0) {
    uVar4 = FUN_71007306b0(param_1,auStack_c8,auStack_c8,auStack_c8);
    if ((((uVar4 == 0) &&
         (uVar4 = FUN_7100730870(param_1,auStack_98,auStack_f8,auStack_e0), uVar4 == 0)) &&
        ((uVar4 = FUN_71007306b0(param_1,auStack_98,auStack_98,auStack_98), uVar4 == 0 &&
         ((uVar4 = FUN_71007306b0(param_1,auStack_98,auStack_1b8,auStack_98), uVar4 == 0 &&
          (uVar4 = FUN_71007306b0(param_1,param_2,auStack_188,auStack_158), uVar4 == 0)))))) &&
       (uVar4 = FUN_71007306b0(param_1,lVar1,param_1 + 0x20,local_140), uVar4 == 0)) {
      uVar4 = FUN_710072a670(lVar1,auStack_158,lVar1);
      goto joined_r0x0071007332a0;
    }
    goto LAB_71007332f0;
  }
  uVar4 = FUN_710072a410(auStack_c8,auStack_c8,lVar2);
  goto joined_r0x0071007331b0;
joined_r0x0071007332a0:
  if (uVar4 != 0) goto LAB_71007332f0;
  iVar5 = FUN_710072a1c0(lVar1,lVar2);
  if (iVar5 < 0) {
    uVar4 = FUN_71007306b0(param_1,lVar1,local_140,lVar1);
    goto LAB_71007332f0;
  }
  uVar4 = FUN_710072a410(lVar1,lVar1,lVar2);
  goto joined_r0x0071007332a0;
LAB_7100732ee0:
  do {
    if (lVar6 == -1) {
      uVar4 = FUN_71007309a0(param_1,param_2,puVar7,puVar8);
      uVar9 = (ulong)uVar4;
      if (uVar4 == 0) {
        uVar4 = FUN_710072c030(lVar1,lVar1,lVar2);
        uVar9 = (ulong)uVar4;
        if (uVar4 == 0) {
          uVar4 = FUN_71007306b0(param_1,param_2,param_2,lVar1);
          uVar9 = (ulong)uVar4;
          if (uVar4 == 0) {
            uVar4 = FUN_7100729a10(lVar1,1);
            uVar9 = (ulong)uVar4;
            FUN_7100737e70(auStack_80);
            FUN_71007317c0(auStack_c8);
            FUN_71007296a0(auStack_1b8);
            if (uVar4 != 0) {
              return uVar9;
            }
            goto LAB_7100732d5c;
          }
        }
      }
      break;
    }
    uVar3 = FUN_7100729a90(param_3,lVar6);
    uVar4 = FUN_710072dca0(param_2,auStack_c8,uVar3);
    uVar9 = (ulong)uVar4;
    if (uVar4 != 0) break;
    uVar4 = FUN_710072dca0(lVar1,auStack_98,uVar3);
    uVar9 = (ulong)uVar4;
    if (uVar4 != 0) break;
    FUN_7100729690(auStack_1a0);
    FUN_7100729690(auStack_188);
    FUN_7100729690(local_170);
    FUN_7100729690(auStack_158);
    FUN_7100729690(local_140);
    FUN_7100729690(auStack_128);
    FUN_7100729690(local_110);
    FUN_7100729690(auStack_f8);
    FUN_7100729690(auStack_e0);
    uVar4 = FUN_710072a670(auStack_1a0,param_2,lVar1);
    while (uVar4 == 0) {
      iVar5 = FUN_710072a1c0(auStack_1a0,lVar2);
      if (iVar5 < 0) {
        uVar4 = FUN_710072a710(auStack_188,auStack_1a0,auStack_1a0);
        if ((uVar4 == 0) && (uVar4 = FUN_7100730580(auStack_188,param_1), uVar4 == 0)) {
          uVar4 = FUN_710072a680(local_170,param_2,lVar1);
          goto joined_r0x007100732ff8;
        }
        break;
      }
      uVar4 = FUN_710072a410(auStack_1a0,auStack_1a0,lVar2);
    }
LAB_71007332f0:
    FUN_71007296a0(auStack_1a0);
    FUN_71007296a0(auStack_188);
    FUN_71007296a0(local_170);
    FUN_71007296a0(auStack_158);
    FUN_71007296a0(local_140);
    FUN_71007296a0(auStack_128);
    FUN_71007296a0(local_110);
    FUN_71007296a0(auStack_f8);
    FUN_71007296a0(auStack_e0);
    uVar9 = (ulong)uVar4;
    if (uVar4 != 0) break;
    uVar4 = FUN_710072dca0(param_2,auStack_c8,uVar3);
    uVar9 = (ulong)uVar4;
    if (uVar4 != 0) break;
    lVar6 = lVar6 + -1;
    uVar4 = FUN_710072dca0(lVar1,auStack_98,uVar3);
    uVar9 = (ulong)uVar4;
  } while (uVar4 == 0);
LAB_7100732de4:
  FUN_7100737e70(auStack_80);
  FUN_71007317c0(auStack_c8);
  FUN_71007296a0(auStack_1b8);
  return uVar9;
}



// ===== FUN_7100733460 @ 7100733460 (size=8) =====

void FUN_7100733460(void)

{
  FUN_7100732cd0();
  return;
}



// ===== FUN_7100733470 @ 7100733470 (size=324) =====

void FUN_7100733470(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  int iVar1;
  
  iVar1 = FUN_710072a2a0(param_3,0);
  if (iVar1 == 0) {
    iVar1 = FUN_7100732890(param_1,param_4);
    if (iVar1 == 0) {
      FUN_7100731950(param_2);
      return;
    }
  }
  else {
    iVar1 = FUN_710072a2a0(param_3,1);
    if (iVar1 == 0) {
      iVar1 = FUN_7100732890(param_1,param_4);
      if (iVar1 == 0) {
        FUN_71007318f0(param_2,param_4);
        return;
      }
    }
    else {
      iVar1 = FUN_710072a2a0(param_3,0xffffffffffffffff);
      if (iVar1 != 0) {
        FUN_7100732cd0(param_1,param_2,param_3,param_4,0,0,param_5);
        return;
      }
      iVar1 = FUN_7100732890(param_1,param_4);
      if ((iVar1 == 0) && (iVar1 = FUN_71007318f0(param_2,param_4), iVar1 == 0)) {
        param_2 = param_2 + 0x18;
        iVar1 = FUN_710072a2a0(param_2,0);
        if (iVar1 != 0) {
          FUN_710072a680(param_2,param_1 + 8,param_2);
          return;
        }
      }
    }
  }
  return;
}



// ===== FUN_71007335c0 @ 71007335c0 (size=232) =====

int FUN_71007335c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined1 auStack_48 [72];
  
  iVar1 = FUN_71007316d0();
  if (iVar1 == 1) {
    FUN_7100731700(auStack_48);
    iVar1 = FUN_7100733470(param_1,auStack_48,param_3,param_4,param_7);
    if (iVar1 == 0) {
      iVar1 = FUN_7100733470(param_1,param_2,param_5,param_6,param_7);
      if (iVar1 == 0) {
        iVar1 = FUN_71007319a0(param_1,param_2,auStack_48,param_2);
        if (iVar1 == 0) {
          iVar1 = FUN_7100730a80(param_1,param_2);
        }
      }
    }
    FUN_71007317c0(auStack_48);
  }
  else {
    iVar1 = -0x4e80;
  }
  return iVar1;
}



// ===== FUN_71007336b0 @ 71007336b0 (size=288) =====

undefined8 FUN_71007336b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  iVar2 = FUN_71007316d0();
  if (iVar2 == 2) {
    uVar4 = *(ulong *)(param_1 + 0xb8);
    lVar1 = (uVar4 >> 3) + 1;
    uVar3 = FUN_710072bb80(param_2,lVar1,param_3,param_4);
    if (((((int)uVar3 == 0) && (uVar3 = FUN_710072a030(param_2,~uVar4 + lVar1 * 8), (int)uVar3 == 0)
         ) && (uVar3 = FUN_7100729ac0(param_2,uVar4,1), (int)uVar3 == 0)) &&
       (((uVar3 = FUN_7100729ac0(param_2,0,0), (int)uVar3 == 0 &&
         (uVar3 = FUN_7100729ac0(param_2,1,0), (int)uVar3 == 0)) && (uVar4 == 0xfe)))) {
      uVar3 = FUN_7100729ac0(param_2,2,0);
      return uVar3;
    }
  }
  else {
    iVar2 = FUN_71007316d0(param_1);
    if (iVar2 != 1) {
      return 0xffffb080;
    }
    uVar3 = FUN_710072bea0(param_2,1,param_1 + 0x98,param_3,param_4);
    if ((int)uVar3 == -0xe) {
      uVar3 = 0xffffb300;
    }
  }
  return uVar3;
}



// ===== FUN_71007337d0 @ 71007337d0 (size=128) =====

void FUN_71007337d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  
  iVar1 = FUN_71007336b0(param_1,param_3,param_5,param_6);
  if (iVar1 != 0) {
    return;
  }
  FUN_7100733460(param_1,param_4,param_3,param_2,param_5,param_6);
  return;
}



// ===== FUN_7100733850 @ 7100733850 (size=32) =====

void FUN_7100733850(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  FUN_71007337d0(param_1,param_1 + 0x50,param_2,param_3,param_4,param_5);
  return;
}



// ===== FUN_7100733870 @ 7100733870 (size=328) =====

int FUN_7100733870(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [248];
  
  if ((*param_1 != 0) && (*param_1 == *param_2)) {
    iVar1 = FUN_710072a1c0(param_1 + 0x44,param_2 + 0x44);
    if (iVar1 == 0) {
      iVar1 = FUN_710072a1c0(param_1 + 0x4a,param_2 + 0x4a);
      if (iVar1 == 0) {
        iVar1 = FUN_710072a1c0(param_1 + 0x50,param_2 + 0x50);
        if (iVar1 == 0) {
          FUN_7100731700(auStack_140);
          FUN_7100731730(auStack_f8);
          FUN_7100731940(auStack_f8,param_2);
          iVar1 = FUN_7100733460(auStack_f8,auStack_140,param_2 + 0x3e,param_2 + 0x14,0,0);
          if (iVar1 == 0) {
            iVar1 = FUN_710072a1c0(auStack_140,param_2 + 0x44);
            if ((iVar1 == 0) && (iVar1 = FUN_710072a1c0(auStack_128,param_2 + 0x4a), iVar1 == 0)) {
              iVar1 = FUN_710072a1c0(auStack_110,param_2 + 0x50);
              if (iVar1 != 0) {
                iVar1 = -0x4f80;
              }
            }
            else {
              iVar1 = -0x4f80;
            }
          }
          FUN_71007317c0(auStack_140);
          FUN_7100731800(auStack_f8);
          return iVar1;
        }
      }
    }
  }
  return -0x4f80;
}



// ===== FUN_7100733fa0 @ 7100733fa0 (size=1764) =====

void FUN_7100733fa0(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  ulong *puVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  
  iVar6 = FUN_71007296f0((int)param_1,0xd);
  if (iVar6 == 0) {
    puVar7 = *(ulong **)(param_1 + 4);
    uVar10 = *puVar7;
    uVar14 = puVar7[6];
    uVar1 = (uint)puVar7[10];
    uVar13 = (uint)uVar14;
    uVar12 = (uint)uVar10 + uVar13;
    uVar15 = (uint)(puVar7[10] >> 0x20);
    uVar21 = uVar12 + uVar15;
    uVar9 = (uint)CARRY4((uint)uVar10,uVar13);
    if (CARRY4(uVar12,uVar15)) {
      uVar9 = uVar9 + 1;
    }
    uVar12 = uVar21 + uVar1;
    uVar19 = (uint)(puVar7[0xb] >> 0x20);
    uVar9 = uVar9 + ((uint)CARRY4(uVar21,uVar1) - (uint)(uVar12 < uVar19)) & 0xff;
    uVar16 = (uint)(uVar10 >> 0x20);
    uVar21 = uVar16 + uVar9;
    uVar11 = (uint)CARRY4(uVar16,uVar9);
    if (uVar9 == 0xff) {
      uVar21 = uVar16 - 1;
      uVar11 = -(uint)(uVar10 >> 0x20 == 0);
    }
    uVar9 = (uint)puVar7[0xb];
    uVar16 = (uint)(uVar14 >> 0x20);
    if (CARRY4(uVar16,uVar21)) {
      uVar11 = uVar11 + 1;
    }
    uVar17 = uVar16 + uVar21 + uVar9;
    uVar18 = uVar19 + uVar17;
    uVar21 = (uint)CARRY4(uVar16 + uVar21,uVar9);
    if (CARRY4(uVar19,uVar17)) {
      uVar21 = uVar21 + 1;
    }
    uVar17 = uVar18 - uVar13;
    *puVar7 = CONCAT44(uVar17 - uVar1,uVar12 - uVar19);
    uVar12 = (uVar21 - (uVar17 < uVar1)) + ((uVar11 & 0xff) - (uint)(uVar18 < uVar13));
    uVar17 = (uint)puVar7[1];
    uVar21 = (uint)CARRY4(uVar17,uVar12 & 0xff);
    uVar11 = uVar12 & 0xff;
    if ((uVar12 >> 7 & 1) != 0) {
      uVar21 = (uint)-(uVar17 < (uint)-(int)(char)uVar12);
      uVar11 = (int)(char)uVar12;
    }
    uVar18 = (uint)puVar7[7];
    uVar12 = uVar18 + uVar17 + uVar11;
    if (CARRY4(uVar18,uVar17 + uVar11)) {
      uVar21 = uVar21 + 1;
    }
    uVar11 = uVar19 + uVar12;
    uVar17 = uVar11 - uVar16;
    uVar12 = ((uint)CARRY4(uVar19,uVar12) - (uint)(uVar11 < uVar16)) +
             ((uVar21 & 0xff) - (uint)(uVar17 < uVar15));
    uVar11 = (uint)(puVar7[1] >> 0x20);
    bVar3 = CARRY4(uVar11,uVar12 & 0xff);
    uVar21 = uVar12 & 0xff;
    if ((uVar12 >> 7 & 1) != 0) {
      bVar3 = -(uVar11 < (uint)-(int)(char)uVar12);
      uVar21 = (int)(char)uVar12;
    }
    uVar22 = (uint)(puVar7[7] >> 0x20);
    uVar12 = uVar22 + uVar11 + uVar21;
    if (CARRY4(uVar22,uVar11 + uVar21)) {
      bVar3 = bVar3 + 1;
    }
    uVar21 = uVar13 + uVar12;
    uVar11 = uVar1 + uVar21;
    uVar12 = (uint)CARRY4(uVar13,uVar12);
    if (CARRY4(uVar1,uVar21)) {
      uVar12 = uVar12 + 1;
    }
    uVar21 = uVar15 + uVar11;
    uVar20 = uVar21 - uVar18;
    uVar2 = uVar20 - uVar9;
    uVar12 = (((uint)CARRY4(uVar15,uVar11) + (uint)bVar3) - (uint)(uVar20 < uVar9)) +
             ((uVar12 - (uVar21 < uVar18)) - (uint)(uVar2 < uVar19));
    puVar7[1] = CONCAT44(uVar2 - uVar19,uVar17 - uVar15);
    uVar11 = (uint)puVar7[2];
    cVar4 = CARRY4(uVar11,uVar12 & 0xff);
    uVar21 = uVar12 & 0xff;
    if ((uVar12 >> 7 & 1) != 0) {
      cVar4 = -(uVar11 < (uint)-(int)(char)uVar12);
      uVar21 = (int)(char)uVar12;
    }
    uVar12 = uVar15 + uVar11 + uVar21;
    if (CARRY4(uVar15,uVar11 + uVar21)) {
      cVar4 = cVar4 + '\x01';
    }
    uVar21 = uVar15 + uVar12;
    uVar17 = (uint)puVar7[8];
    uVar11 = uVar21 + uVar17;
    uVar12 = (uint)CARRY4(uVar15,uVar12);
    if (CARRY4(uVar21,uVar17)) {
      uVar12 = uVar12 + 1;
    }
    uVar21 = uVar16 + uVar11;
    uVar20 = uVar13 + uVar21;
    if (CARRY4(uVar13,uVar21)) {
      uVar12 = uVar12 + 1;
    }
    uVar21 = uVar1 + uVar20;
    uVar13 = uVar9 + uVar21;
    if (CARRY4(uVar9,uVar21)) {
      uVar12 = uVar12 + 1;
    }
    uVar21 = uVar13 - uVar22;
    uVar2 = uVar21 - uVar19;
    uVar12 = (uVar12 - (uVar21 < uVar19)) +
             ((((uint)CARRY4(uVar1,uVar20) + (uint)(byte)(CARRY4(uVar16,uVar11) + cVar4) & 0xff) -
              (uint)(uVar13 < uVar22)) - (uint)(uVar2 < uVar19));
    uVar21 = (uint)(char)uVar12;
    uVar13 = (uint)(puVar7[2] >> 0x20);
    if ((uVar12 >> 7 & 1) == 0) {
      cVar4 = CARRY4(uVar13,uVar12 & 0xff);
      uVar21 = uVar12 & 0xff;
    }
    else {
      cVar4 = -(uVar13 < -uVar21);
    }
    uVar12 = uVar9 + uVar13 + uVar21;
    if (CARRY4(uVar9,uVar13 + uVar21)) {
      cVar4 = cVar4 + '\x01';
    }
    uVar21 = uVar9 + uVar12;
    uVar11 = (uint)(puVar7[8] >> 0x20);
    uVar13 = uVar21 + uVar11;
    uVar12 = (uint)CARRY4(uVar9,uVar12);
    if (CARRY4(uVar21,uVar11)) {
      uVar12 = uVar12 + 1;
    }
    uVar21 = uVar18 + uVar13;
    uVar20 = uVar16 + uVar21;
    if (CARRY4(uVar16,uVar21)) {
      uVar12 = uVar12 + 1;
    }
    uVar21 = uVar15 + uVar20;
    uVar16 = uVar19 + uVar21;
    if (CARRY4(uVar19,uVar21)) {
      uVar12 = uVar12 + 1;
    }
    uVar12 = uVar12 + (((uint)CARRY4(uVar15,uVar20) + (uint)(byte)(CARRY4(uVar18,uVar13) + cVar4) &
                       0xff) - (uint)(uVar16 < uVar17));
    uVar13 = (uint)puVar7[3];
    cVar4 = CARRY4(uVar13,uVar12 & 0xff);
    puVar7[2] = CONCAT44(uVar16 - uVar17,uVar2 - uVar19);
    uVar21 = uVar12 & 0xff;
    if ((uVar12 >> 7 & 1) != 0) {
      cVar4 = -(uVar13 < (uint)-(int)(char)uVar12);
      uVar21 = (int)(char)uVar12;
    }
    uVar12 = uVar19 + uVar13 + uVar21;
    if (CARRY4(uVar19,uVar13 + uVar21)) {
      cVar4 = cVar4 + '\x01';
    }
    uVar21 = uVar19 + uVar12;
    uVar16 = (uint)puVar7[9];
    uVar13 = uVar21 + uVar16;
    uVar12 = (uint)CARRY4(uVar19,uVar12);
    if (CARRY4(uVar21,uVar16)) {
      uVar12 = uVar12 + 1;
    }
    uVar21 = uVar22 + uVar13;
    uVar20 = uVar18 + uVar21;
    if (CARRY4(uVar18,uVar21)) {
      uVar12 = uVar12 + 1;
    }
    uVar21 = uVar9 + uVar20;
    uVar12 = (uint)CARRY4(uVar9,uVar20) + (uint)(byte)(CARRY4(uVar22,uVar13) + cVar4) +
             (uVar12 - (uVar21 < uVar11));
    uVar13 = (uint)(char)uVar12;
    uVar18 = (uint)(puVar7[3] >> 0x20);
    if ((uVar12 >> 7 & 1) == 0) {
      bVar3 = CARRY4(uVar18,uVar12 & 0xff);
      uVar13 = uVar12 & 0xff;
    }
    else {
      bVar3 = -(uVar18 < -uVar13);
    }
    uVar20 = (uint)(puVar7[9] >> 0x20);
    uVar12 = uVar20 + uVar18 + uVar13;
    if (CARRY4(uVar20,uVar18 + uVar13)) {
      bVar3 = bVar3 + 1;
    }
    uVar13 = uVar17 + uVar12;
    uVar18 = uVar22 + uVar13;
    uVar12 = (uint)CARRY4(uVar17,uVar12);
    if (CARRY4(uVar22,uVar13)) {
      uVar12 = uVar12 + 1;
    }
    uVar13 = uVar19 + uVar18;
    uVar12 = (uint)CARRY4(uVar19,uVar18) + (uint)bVar3 + (uVar12 - (uVar13 < uVar16));
    puVar7[3] = CONCAT44(uVar13 - uVar16,uVar21 - uVar11);
    uVar18 = (uint)puVar7[4];
    uVar21 = (uint)CARRY4(uVar18,uVar12 & 0xff);
    uVar13 = uVar12 & 0xff;
    if ((uVar12 >> 7 & 1) != 0) {
      uVar21 = (uint)-(uVar18 < (uint)-(int)(char)uVar12);
      uVar13 = (int)(char)uVar12;
    }
    uVar12 = uVar1 + uVar18 + uVar13;
    if (CARRY4(uVar1,uVar18 + uVar13)) {
      uVar21 = uVar21 + 1;
    }
    uVar13 = uVar11 + uVar12;
    uVar18 = uVar17 + uVar13;
    uVar12 = (uint)CARRY4(uVar11,uVar12);
    if (CARRY4(uVar17,uVar13)) {
      uVar12 = uVar12 + 1;
    }
    uVar12 = uVar12 + ((uVar21 & 0xff) - (uint)(uVar18 < uVar20));
    uVar21 = (uint)(char)uVar12;
    uVar13 = (uint)(puVar7[4] >> 0x20);
    if ((uVar12 >> 7 & 1) == 0) {
      uVar17 = (uint)CARRY4(uVar13,uVar12 & 0xff);
      uVar21 = uVar12 & 0xff;
    }
    else {
      uVar17 = (uint)-(uVar13 < -uVar21);
    }
    uVar12 = uVar15 + uVar13 + uVar21;
    if (CARRY4(uVar15,uVar13 + uVar21)) {
      uVar17 = uVar17 + 1;
    }
    uVar21 = uVar16 + uVar12;
    uVar13 = uVar11 + uVar21;
    uVar12 = (uint)CARRY4(uVar16,uVar12);
    if (CARRY4(uVar11,uVar21)) {
      uVar12 = uVar12 + 1;
    }
    uVar12 = uVar12 + ((uVar17 & 0xff) - (uint)(uVar13 < uVar1));
    uVar21 = (uint)(char)uVar12;
    puVar7[4] = CONCAT44(uVar13 - uVar1,uVar18 - uVar20);
    uVar13 = (uint)puVar7[5];
    if ((uVar12 >> 7 & 1) == 0) {
      uVar11 = (uint)CARRY4(uVar13,uVar12 & 0xff);
      uVar21 = uVar12 & 0xff;
    }
    else {
      uVar11 = (uint)-(uVar13 < -uVar21);
    }
    uVar12 = uVar9 + uVar13 + uVar21;
    if (CARRY4(uVar9,uVar13 + uVar21)) {
      uVar11 = uVar11 + 1;
    }
    uVar21 = uVar20 + uVar12;
    uVar13 = uVar16 + uVar21;
    uVar12 = (uint)CARRY4(uVar20,uVar12);
    if (CARRY4(uVar16,uVar21)) {
      uVar12 = uVar12 + 1;
    }
    uVar12 = uVar12 + ((uVar11 & 0xff) - (uint)(uVar13 < uVar15));
    uVar21 = (uint)(char)uVar12;
    uVar11 = (uint)(puVar7[5] >> 0x20);
    if ((uVar12 >> 7 & 1) == 0) {
      cVar4 = CARRY4(uVar11,uVar12 & 0xff);
      uVar21 = uVar12 & 0xff;
    }
    else {
      cVar4 = -(uVar11 < -uVar21);
    }
    uVar12 = uVar19 + uVar11 + uVar21;
    if (CARRY4(uVar19,uVar11 + uVar21)) {
      cVar4 = cVar4 + '\x01';
    }
    cVar5 = CARRY4(uVar1,uVar12);
    uVar1 = uVar1 + uVar12;
    uVar12 = uVar20 + uVar1;
    if (CARRY4(uVar20,uVar1)) {
      cVar5 = cVar5 + '\x01';
    }
    uVar10 = 0xd;
    bVar3 = cVar5 + (cVar4 - (uVar12 < uVar9));
    puVar7[5] = CONCAT44(uVar12 - uVar9,uVar13 - uVar15);
    puVar7[6] = uVar14 & 0xffffffff00000000 | (long)(char)(bVar3 & ((char)bVar3 >> 7 ^ 0xffU));
    if (0xd < (ulong)(*(long *)(param_1 + 2) * 2)) {
      do {
        while( true ) {
          uVar14 = uVar10 >> 1;
          if ((uVar10 & 1) != 0) break;
          uVar10 = uVar10 + 1;
          puVar7[uVar14] = puVar7[uVar14] & 0xffffffff00000000;
          if ((ulong)(*(long *)(param_1 + 2) << 1) <= uVar10) goto LAB_7100734530;
        }
        uVar10 = uVar10 + 1;
        puVar7[uVar14] = puVar7[uVar14] & 0xffffffff;
      } while (uVar10 < (ulong)(*(long *)(param_1 + 2) << 1));
    }
LAB_7100734530:
    if ((char)bVar3 < 0) {
      lVar8 = 0;
      do {
        puVar7[lVar8] = ~puVar7[lVar8];
        lVar8 = lVar8 + 1;
      } while (lVar8 != 7);
      lVar8 = 0;
      do {
        uVar10 = puVar7[lVar8];
        puVar7[lVar8] = uVar10 + 1;
        lVar8 = lVar8 + 1;
      } while (uVar10 + 1 == 0 && lVar8 != 7);
      uVar10 = puVar7[6];
      *param_1 = 0xffffffff;
      puVar7[6] = uVar10 + (long)-(int)(char)bVar3;
      return;
    }
  }
  return;
}



// ===== FUN_7100734690 @ 7100734690 (size=200) =====

int FUN_7100734690(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  iVar8 = FUN_71007296f0(param_1,6);
  if (iVar8 == 0) {
    lVar3 = *(long *)(param_1 + 8);
    puVar6 = *(ulong **)(param_1 + 0x10);
    uVar4 = puVar6[2];
    uVar9 = puVar6[3];
    uVar5 = puVar6[4];
    uVar7 = puVar6[5];
    uVar1 = *puVar6 + uVar9;
    uVar10 = (ulong)CARRY8(*puVar6,uVar9);
    if (CARRY8(uVar7,uVar1)) {
      uVar10 = uVar10 + 1;
    }
    uVar2 = puVar6[1] + uVar10;
    uVar11 = (ulong)CARRY8(puVar6[1],uVar10);
    uVar10 = uVar2 + uVar9;
    if (CARRY8(uVar2,uVar9)) {
      uVar11 = uVar11 + 1;
    }
    uVar9 = uVar5 + uVar10;
    *puVar6 = uVar7 + uVar1;
    puVar6[1] = uVar9 + uVar7;
    uVar9 = uVar11 + CARRY8(uVar5,uVar10) + (ulong)CARRY8(uVar9,uVar7);
    uVar1 = uVar4 + uVar9;
    uVar10 = uVar1 + uVar5;
    puVar6[2] = uVar10 + uVar7;
    puVar6[3] = (ulong)CARRY8(uVar1,uVar5) + (ulong)CARRY8(uVar4,uVar9) +
                (ulong)CARRY8(uVar10,uVar7);
    if (puVar6 + 4 < puVar6 + lVar3) {
      FUN_7100808340(puVar6 + 4,0,
                     ((long)(puVar6 + lVar3) + (-0x21 - (long)puVar6) & 0xfffffffffffffff8U) + 8);
      return 0;
    }
  }
  return iVar8;
}



// ===== FUN_7100734760 @ 7100734760 (size=788) =====

void FUN_7100734760(undefined4 *param_1)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  char cVar9;
  uint uVar10;
  ulong uVar11;
  char cVar12;
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
  undefined8 uVar23;
  undefined8 uVar24;
  
  iVar4 = FUN_71007296f0((int)param_1,8);
  if (iVar4 == 0) {
    puVar8 = *(undefined8 **)(param_1 + 4);
    cVar12 = '\0';
    uVar21 = (uint)((ulong)puVar8[3] >> 0x20);
    uVar18 = (uint)*puVar8;
    uVar22 = uVar18 - uVar21;
    uVar16 = (uint)((ulong)*puVar8 >> 0x20);
    uVar15 = (uint)((ulong)puVar8[5] >> 0x20);
    iVar4 = -((uint)(uVar18 < uVar21) + (uint)(uVar22 < uVar15));
    iVar2 = (int)(char)iVar4;
    uVar18 = uVar16;
    if (iVar4 != 0) {
      uVar18 = iVar2 + uVar16;
      cVar12 = -(uVar16 < (uint)-iVar2);
    }
    cVar9 = '\0';
    uVar19 = (uint)puVar8[4];
    uVar17 = (uint)puVar8[6];
    iVar4 = (int)(char)(cVar12 - ((uVar18 < uVar19) + (uVar18 - uVar19 < uVar17)));
    uVar16 = (uint)puVar8[1];
    *puVar8 = CONCAT44((uVar18 - uVar19) - uVar17,uVar22 - uVar15);
    uVar18 = uVar16;
    if (iVar4 != 0) {
      uVar18 = iVar4 + uVar16;
      cVar9 = -(uVar16 < (uint)-iVar4);
    }
    uVar20 = (uint)((ulong)puVar8[4] >> 0x20);
    uVar13 = (uint)((ulong)puVar8[6] >> 0x20);
    uVar10 = (uint)((ulong)puVar8[1] >> 0x20);
    iVar4 = (int)(char)(cVar9 - ((uVar18 < uVar20) + (uVar18 - uVar20 < uVar13)));
    uVar22 = 0;
    uVar16 = uVar10;
    if (iVar4 != 0) {
      uVar16 = iVar4 + uVar10;
      uVar22 = -(uint)(uVar10 < (uint)-iVar4) & 0xff;
    }
    uVar14 = (uint)puVar8[5];
    uVar10 = (uVar21 - uVar14) + uVar16;
    if (CARRY4(uVar15,uVar10)) {
      uVar22 = uVar22 + 1;
    }
    uVar22 = uVar22 + ((uint)(uVar10 < uVar21) - (uint)(uVar16 < uVar14) & 0xff);
    uVar16 = (uint)(char)uVar22;
    puVar8[1] = CONCAT44(uVar15 + uVar10,(uVar18 - uVar20) - uVar13);
    uVar18 = (uint)puVar8[2];
    if ((uVar22 >> 7 & 1) == 0) {
      uVar21 = (uint)CARRY4(uVar18,uVar22 & 0xff);
      uVar16 = uVar22 & 0xff;
    }
    else {
      uVar21 = (uint)-(uVar18 < -uVar16);
    }
    uVar22 = (uVar19 - uVar15) + uVar18 + uVar16;
    if (CARRY4(uVar17,uVar22)) {
      uVar21 = uVar21 + 1;
    }
    uVar21 = uVar21 + ((uint)(uVar22 < uVar19) - (uint)(uVar18 + uVar16 < uVar15) & 0xff);
    uVar15 = (uint)((ulong)puVar8[2] >> 0x20);
    uVar18 = (uint)CARRY4(uVar15,uVar21 & 0xff);
    uVar16 = uVar21 & 0xff;
    if ((uVar21 >> 7 & 1) != 0) {
      uVar18 = (uint)-(uVar15 < (uint)-(int)(char)uVar21);
      uVar16 = (int)(char)uVar21;
    }
    uVar21 = (uVar20 - uVar17) + uVar15 + uVar16;
    if (CARRY4(uVar13,uVar21)) {
      uVar18 = uVar18 + 1;
    }
    uVar18 = uVar18 + ((uint)(uVar21 < uVar20) - (uint)(uVar15 + uVar16 < uVar17) & 0xff);
    uVar16 = (uint)(char)uVar18;
    puVar8[2] = CONCAT44(uVar13 + uVar21,uVar17 + uVar22);
    uVar22 = (uint)puVar8[3];
    if ((uVar18 >> 7 & 1) == 0) {
      uVar15 = (uint)CARRY4(uVar22,uVar18 & 0xff);
      uVar16 = uVar18 & 0xff;
    }
    else {
      uVar15 = (uint)-(uVar22 < -uVar16);
    }
    uVar6 = 8;
    uVar18 = (uVar14 - uVar13) + uVar22 + uVar16;
    uVar15 = ((uint)(uVar18 < uVar14) - (uint)(uVar22 + uVar16 < uVar13)) + uVar15;
    uVar22 = uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU);
    puVar8[3] = (ulong)uVar18 |
                -((ulong)(uVar22 >> 7) & 1) & 0xffffff0000000000 | ((ulong)uVar22 & 0xff) << 0x20;
    if (8 < (ulong)(*(long *)(param_1 + 2) * 2)) {
      do {
        uVar11 = uVar6 >> 1;
        uVar3 = uVar6 & 1;
        uVar6 = uVar6 + 1;
        uVar1 = puVar8[uVar11] & 0xffffffff00000000;
        if (uVar3 != 0) {
          uVar1 = puVar8[uVar11] & 0xffffffff;
        }
        puVar8[uVar11] = uVar1;
      } while (uVar6 < (ulong)(*(long *)(param_1 + 2) << 1));
    }
    if ((char)uVar15 < 0) {
      uVar24 = puVar8[1];
      uVar23 = *puVar8;
      lVar5 = 0;
      puVar8[1] = CONCAT17(~(byte)((ulong)uVar24 >> 0x38),
                           CONCAT16(~(byte)((ulong)uVar24 >> 0x30),
                                    CONCAT15(~(byte)((ulong)uVar24 >> 0x28),
                                             CONCAT14(~(byte)((ulong)uVar24 >> 0x20),
                                                      CONCAT13(~(byte)((ulong)uVar24 >> 0x18),
                                                               CONCAT12(~(byte)((ulong)uVar24 >>
                                                                               0x10),
                                                                        CONCAT11(~(byte)((ulong)
                                                  uVar24 >> 8),~(byte)uVar24)))))));
      *puVar8 = CONCAT17(~(byte)((ulong)uVar23 >> 0x38),
                         CONCAT16(~(byte)((ulong)uVar23 >> 0x30),
                                  CONCAT15(~(byte)((ulong)uVar23 >> 0x28),
                                           CONCAT14(~(byte)((ulong)uVar23 >> 0x20),
                                                    CONCAT13(~(byte)((ulong)uVar23 >> 0x18),
                                                             CONCAT12(~(byte)((ulong)uVar23 >> 0x10)
                                                                      ,CONCAT11(~(byte)((ulong)
                                                  uVar23 >> 8),~(byte)uVar23)))))));
      *(byte *)(puVar8 + 2) = ~*(byte *)(puVar8 + 2);
      *(byte *)((long)puVar8 + 0x11) = ~*(byte *)((long)puVar8 + 0x11);
      *(byte *)((long)puVar8 + 0x12) = ~*(byte *)((long)puVar8 + 0x12);
      *(byte *)((long)puVar8 + 0x13) = ~*(byte *)((long)puVar8 + 0x13);
      *(byte *)((long)puVar8 + 0x14) = ~*(byte *)((long)puVar8 + 0x14);
      *(byte *)((long)puVar8 + 0x15) = ~*(byte *)((long)puVar8 + 0x15);
      *(byte *)((long)puVar8 + 0x16) = ~*(byte *)((long)puVar8 + 0x16);
      *(byte *)((long)puVar8 + 0x17) = ~*(byte *)((long)puVar8 + 0x17);
      *(byte *)(puVar8 + 3) = ~*(byte *)(puVar8 + 3);
      *(byte *)((long)puVar8 + 0x19) = ~*(byte *)((long)puVar8 + 0x19);
      *(byte *)((long)puVar8 + 0x1a) = ~*(byte *)((long)puVar8 + 0x1a);
      *(byte *)((long)puVar8 + 0x1b) = ~*(byte *)((long)puVar8 + 0x1b);
      *(byte *)((long)puVar8 + 0x1c) = ~*(byte *)((long)puVar8 + 0x1c);
      *(byte *)((long)puVar8 + 0x1d) = ~*(byte *)((long)puVar8 + 0x1d);
      *(byte *)((long)puVar8 + 0x1e) = ~*(byte *)((long)puVar8 + 0x1e);
      *(byte *)((long)puVar8 + 0x1f) = ~*(byte *)((long)puVar8 + 0x1f);
      do {
        lVar7 = puVar8[lVar5];
        puVar8[lVar5] = lVar7 + 1;
        lVar5 = lVar5 + 1;
      } while (lVar7 + 1 == 0 && lVar5 != 4);
      lVar5 = puVar8[3];
      *param_1 = 0xffffffff;
      puVar8[3] = lVar5 + ((ulong)(uint)-(int)(char)uVar15 << 0x20);
      return;
    }
  }
  return;
}



// ===== FUN_7100734a80 @ 7100734a80 (size=1412) =====

void FUN_7100734a80(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
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
  
  iVar7 = FUN_71007296f0((int)param_1,9);
  if (iVar7 == 0) {
    puVar11 = *(undefined8 **)(param_1 + 4);
    uVar12 = puVar11[4];
    uVar19 = (uint)uVar12;
    uVar8 = (uint)*puVar11;
    uVar14 = uVar8 + uVar19;
    uVar20 = (uint)(uVar12 >> 0x20);
    uVar23 = uVar14 + uVar20;
    uVar8 = (uint)CARRY4(uVar8,uVar19);
    if (CARRY4(uVar14,uVar20)) {
      uVar8 = uVar8 + 1;
    }
    uVar18 = (uint)((ulong)puVar11[5] >> 0x20);
    uVar24 = uVar23 - uVar18;
    uVar16 = (uint)puVar11[6];
    uVar1 = uVar24 - uVar16;
    uVar15 = (uint)((ulong)puVar11[6] >> 0x20);
    uVar3 = uVar1 - uVar15;
    uVar21 = (uint)puVar11[7];
    uVar14 = (uint)(uVar23 < uVar18);
    if (uVar24 < uVar16) {
      uVar14 = uVar14 + 1;
    }
    if (uVar3 < uVar21) {
      uVar14 = uVar14 + 1;
    }
    uVar14 = (uVar8 - (uVar1 < uVar15)) - uVar14;
    uVar24 = (uint)((ulong)*puVar11 >> 0x20);
    uVar23 = (uint)CARRY4(uVar24,uVar14 & 0xff);
    uVar8 = uVar14 & 0xff;
    if ((int)uVar14 < 0) {
      uVar23 = (uint)-(uVar24 < -uVar14);
      uVar8 = uVar14;
    }
    uVar14 = uVar20 + uVar24 + uVar8;
    if (CARRY4(uVar20,uVar24 + uVar8)) {
      uVar23 = uVar23 + 1;
    }
    uVar17 = (uint)puVar11[5];
    uVar8 = uVar14 + uVar17;
    uVar24 = uVar8 - uVar16;
    uVar1 = uVar24 - uVar15;
    uVar2 = uVar1 - uVar21;
    uVar22 = (uint)((ulong)puVar11[7] >> 0x20);
    uVar14 = (((uint)CARRY4(uVar14,uVar17) - (uint)(uVar8 < uVar16)) - (uint)(uVar1 < uVar21)) +
             ((uVar23 & 0xff) - ((uint)(uVar24 < uVar15) + (uint)(uVar2 < uVar22)));
    *puVar11 = CONCAT44(uVar2 - uVar22,uVar3 - uVar21);
    uVar23 = (uint)(char)uVar14;
    uVar8 = (uint)puVar11[1];
    if ((uVar14 >> 7 & 1) == 0) {
      uVar24 = (uint)CARRY4(uVar8,uVar14 & 0xff);
      uVar23 = uVar14 & 0xff;
    }
    else {
      uVar24 = (uint)-(uVar8 < -uVar23);
    }
    uVar14 = uVar17 + uVar8 + uVar23;
    if (CARRY4(uVar17,uVar8 + uVar23)) {
      uVar24 = uVar24 + 1;
    }
    uVar23 = uVar18 + uVar14;
    uVar8 = uVar23 - uVar15;
    uVar1 = uVar8 - uVar21;
    uVar14 = (((uint)CARRY4(uVar18,uVar14) - (uint)(uVar23 < uVar15)) - (uint)(uVar1 < uVar22)) +
             ((uVar24 & 0xff) - (uint)(uVar8 < uVar21));
    uVar23 = (uint)(char)uVar14;
    uVar8 = (uint)((ulong)puVar11[1] >> 0x20);
    if ((uVar14 >> 7 & 1) == 0) {
      bVar4 = CARRY4(uVar8,uVar14 & 0xff);
      uVar23 = uVar14 & 0xff;
    }
    else {
      bVar4 = -(uVar8 < -uVar23);
    }
    uVar14 = uVar18 + uVar8 + uVar23;
    if (CARRY4(uVar18,uVar8 + uVar23)) {
      bVar4 = bVar4 + 1;
    }
    uVar23 = uVar18 + uVar14;
    uVar8 = uVar16 + uVar23;
    uVar14 = (uint)CARRY4(uVar18,uVar14);
    if (CARRY4(uVar16,uVar23)) {
      uVar14 = uVar14 + 1;
    }
    uVar23 = uVar16 + uVar8;
    uVar24 = uVar15 + uVar23;
    if (CARRY4(uVar15,uVar23)) {
      uVar14 = uVar14 + 1;
    }
    uVar23 = uVar24 - uVar22;
    uVar3 = uVar23 - uVar19;
    uVar14 = (uVar14 - (uVar23 < uVar19)) +
             ((((uint)CARRY4(uVar16,uVar8) + (uint)bVar4 & 0xff) - (uint)(uVar24 < uVar22)) -
             (uint)(uVar3 < uVar20));
    puVar11[1] = CONCAT44(uVar3 - uVar20,uVar1 - uVar22);
    uVar23 = (uint)(char)uVar14;
    uVar8 = (uint)puVar11[2];
    if ((uVar14 >> 7 & 1) == 0) {
      bVar4 = CARRY4(uVar8,uVar14 & 0xff);
      uVar23 = uVar14 & 0xff;
    }
    else {
      bVar4 = -(uVar8 < -uVar23);
    }
    uVar14 = uVar16 + uVar8 + uVar23;
    if (CARRY4(uVar16,uVar8 + uVar23)) {
      bVar4 = bVar4 + 1;
    }
    uVar23 = uVar16 + uVar14;
    uVar8 = uVar15 + uVar23;
    uVar14 = (uint)CARRY4(uVar16,uVar14);
    if (CARRY4(uVar15,uVar23)) {
      uVar14 = uVar14 + 1;
    }
    uVar23 = uVar15 + uVar8;
    uVar24 = uVar21 + uVar23;
    if (CARRY4(uVar21,uVar23)) {
      uVar14 = uVar14 + 1;
    }
    uVar23 = uVar24 - uVar20;
    uVar14 = (uVar14 - (uVar23 < uVar17)) +
             (((uint)CARRY4(uVar15,uVar8) + (uint)bVar4 & 0xff) - (uint)(uVar24 < uVar20));
    uVar8 = (uint)(char)uVar14;
    uVar24 = (uint)((ulong)puVar11[2] >> 0x20);
    if ((uVar14 >> 7 & 1) == 0) {
      bVar4 = CARRY4(uVar24,uVar14 & 0xff);
      uVar8 = uVar14 & 0xff;
    }
    else {
      bVar4 = -(uVar24 < -uVar8);
    }
    uVar14 = uVar15 + uVar24 + uVar8;
    if (CARRY4(uVar15,uVar24 + uVar8)) {
      bVar4 = bVar4 + 1;
    }
    uVar8 = uVar15 + uVar14;
    uVar24 = uVar21 + uVar8;
    uVar14 = (uint)CARRY4(uVar15,uVar14);
    if (CARRY4(uVar21,uVar8)) {
      uVar14 = uVar14 + 1;
    }
    uVar8 = uVar21 + uVar24;
    uVar1 = uVar22 + uVar8;
    if (CARRY4(uVar22,uVar8)) {
      uVar14 = uVar14 + 1;
    }
    uVar8 = uVar1 - uVar17;
    uVar14 = (uVar14 - (uVar8 < uVar18)) +
             (((uint)CARRY4(uVar21,uVar24) + (uint)bVar4 & 0xff) - (uint)(uVar1 < uVar17));
    puVar11[2] = CONCAT44(uVar8 - uVar18,uVar23 - uVar17);
    uVar23 = (uint)(char)uVar14;
    uVar8 = (uint)puVar11[3];
    if ((uVar14 >> 7 & 1) == 0) {
      cVar5 = CARRY4(uVar8,uVar14 & 0xff);
      uVar23 = uVar14 & 0xff;
    }
    else {
      cVar5 = -(uVar8 < -uVar23);
    }
    uVar14 = uVar21 + uVar8 + uVar23;
    if (CARRY4(uVar21,uVar8 + uVar23)) {
      cVar5 = cVar5 + '\x01';
    }
    uVar23 = uVar21 + uVar14;
    uVar8 = uVar22 + uVar23;
    uVar14 = (uint)CARRY4(uVar21,uVar14);
    if (CARRY4(uVar22,uVar23)) {
      uVar14 = uVar14 + 1;
    }
    uVar23 = uVar22 + uVar8;
    uVar24 = uVar21 + uVar23;
    if (CARRY4(uVar21,uVar23)) {
      uVar14 = uVar14 + 1;
    }
    uVar23 = uVar15 + uVar24;
    uVar1 = uVar23 - uVar19;
    uVar14 = (((uint)CARRY4(uVar15,uVar24) + (uint)(byte)(CARRY4(uVar22,uVar8) + cVar5)) -
             (uint)(uVar1 < uVar20)) + (uVar14 - (uVar23 < uVar19));
    uVar23 = (uint)(char)uVar14;
    uVar8 = (uint)((ulong)puVar11[3] >> 0x20);
    if ((uVar14 >> 7 & 1) == 0) {
      cVar5 = CARRY4(uVar8,uVar14 & 0xff);
      uVar23 = uVar14 & 0xff;
    }
    else {
      cVar5 = -(uVar8 < -uVar23);
    }
    uVar14 = uVar22 + uVar8 + uVar23;
    if (CARRY4(uVar22,uVar8 + uVar23)) {
      cVar5 = cVar5 + '\x01';
    }
    cVar6 = CARRY4(uVar22,uVar14);
    uVar14 = uVar22 + uVar14;
    uVar9 = 9;
    uVar23 = uVar22 + uVar14;
    if (CARRY4(uVar22,uVar14)) {
      cVar6 = cVar6 + '\x01';
    }
    uVar14 = uVar19 + uVar23;
    uVar8 = uVar14 - uVar17;
    uVar24 = uVar8 - uVar18;
    uVar3 = uVar24 - uVar16;
    bVar4 = (((CARRY4(uVar19,uVar23) + cVar5) - (uVar8 < uVar18)) - (uVar3 < uVar15)) +
            ((cVar6 - (uVar14 < uVar17)) - (uVar24 < uVar16));
    puVar11[3] = CONCAT44(uVar3 - uVar15,uVar1 - uVar20);
    puVar11[4] = uVar12 & 0xffffffff00000000 | (long)(char)(bVar4 & ((char)bVar4 >> 7 ^ 0xffU));
    if (9 < (ulong)(*(long *)(param_1 + 2) * 2)) {
      do {
        while( true ) {
          uVar12 = uVar9 >> 1;
          if ((uVar9 & 1) != 0) break;
          uVar9 = uVar9 + 1;
          puVar11[uVar12] = puVar11[uVar12] & 0xffffffff00000000;
          if ((ulong)(*(long *)(param_1 + 2) << 1) <= uVar9) goto LAB_7100734edc;
        }
        uVar9 = uVar9 + 1;
        puVar11[uVar12] = puVar11[uVar12] & 0xffffffff;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 2) << 1));
    }
LAB_7100734edc:
    if ((char)bVar4 < 0) {
      lVar10 = 0;
      do {
        puVar11[lVar10] = ~puVar11[lVar10];
        lVar10 = lVar10 + 1;
      } while (lVar10 != 5);
      lVar10 = 0;
      do {
        lVar13 = puVar11[lVar10];
        puVar11[lVar10] = lVar13 + 1;
        lVar10 = lVar10 + 1;
      } while (lVar13 + 1 == 0 && lVar10 != 5);
      lVar10 = puVar11[4];
      *param_1 = 0xffffffff;
      puVar11[4] = lVar10 + -(int)(char)bVar4;
      return;
    }
  }
  return;
}



// ===== FUN_7100735010 @ 7100735010 (size=2068) =====

int FUN_7100735010(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_18 [24];
  
  FUN_7100731800();
  FUN_7100731730(param_1);
  *param_1 = param_2;
  switch(param_2) {
  case 1:
    *(code **)(param_1 + 0x32) = FUN_7100734690;
    uVar3 = 3;
    param_1[2] = 1;
    *(undefined8 *)(param_1 + 4) = 3;
    *(undefined **)(param_1 + 6) = &DAT_71009c3b50;
    puVar6 = &DAT_71009c3ad0;
    puVar5 = &DAT_71009c3b10;
    puVar4 = &DAT_71009c3af0;
    param_1[0xe] = 1;
    *(undefined8 *)(param_1 + 0x10) = 3;
    *(undefined **)(param_1 + 0x12) = &DAT_71009c3b30;
    break;
  case 2:
    *(code **)(param_1 + 0x32) = FUN_7100734760;
    uVar3 = 4;
    param_1[2] = 1;
    *(undefined8 *)(param_1 + 4) = 4;
    *(undefined **)(param_1 + 6) = &DAT_71009c3ab0;
    puVar6 = &DAT_71009c3a30;
    puVar5 = &DAT_71009c3a70;
    puVar4 = &DAT_71009c3a50;
    param_1[0xe] = 1;
    *(undefined8 *)(param_1 + 0x10) = 4;
    *(undefined **)(param_1 + 0x12) = &DAT_71009c3a90;
    break;
  case 3:
    *(code **)(param_1 + 0x32) = FUN_7100734a80;
    uVar3 = 4;
    param_1[2] = 1;
    *(undefined8 *)(param_1 + 4) = 4;
    *(undefined **)(param_1 + 6) = &DAT_71009c3a10;
    puVar6 = &DAT_71009c3990;
    puVar5 = &DAT_71009c39d0;
    puVar4 = &DAT_71009c39b0;
    param_1[0xe] = 1;
    *(undefined8 *)(param_1 + 0x10) = 4;
    *(undefined **)(param_1 + 0x12) = &DAT_71009c39f0;
    break;
  case 4:
    *(code **)(param_1 + 0x32) = FUN_7100733fa0;
    uVar3 = 6;
    param_1[2] = 1;
    *(undefined8 *)(param_1 + 4) = 6;
    *(undefined **)(param_1 + 6) = &DAT_71009c3960;
    puVar6 = &DAT_71009c38a0;
    puVar5 = &DAT_71009c3900;
    puVar4 = &DAT_71009c38d0;
    param_1[0xe] = 1;
    *(undefined8 *)(param_1 + 0x10) = 6;
    *(undefined **)(param_1 + 0x12) = &DAT_71009c3930;
    break;
  case 5:
    *(undefined1 **)(param_1 + 0x32) = &LAB_7100733c40;
    uVar3 = 9;
    param_1[2] = 1;
    *(undefined8 *)(param_1 + 4) = 9;
    *(undefined **)(param_1 + 6) = &DAT_71009c3850;
    puVar6 = &DAT_71009c3710;
    puVar5 = &DAT_71009c37b0;
    puVar4 = &DAT_71009c3760;
    param_1[0xe] = 1;
    *(undefined8 *)(param_1 + 0x10) = 9;
    *(undefined **)(param_1 + 0x12) = &DAT_71009c3800;
    break;
  case 6:
    uVar3 = 4;
    param_1[2] = 1;
    *(undefined8 *)(param_1 + 4) = 4;
    *(undefined **)(param_1 + 6) = &DAT_71009c3540;
    puVar6 = &DAT_71009c34a0;
    param_1[8] = 1;
    *(undefined8 *)(param_1 + 10) = 4;
    *(undefined **)(param_1 + 0xc) = &DAT_71009c3520;
    puVar5 = &DAT_71009c34e0;
    puVar4 = &DAT_71009c34c0;
    param_1[0xe] = 1;
    *(undefined8 *)(param_1 + 0x10) = 4;
    *(undefined **)(param_1 + 0x12) = &DAT_71009c3500;
    goto LAB_710073541c;
  case 7:
    uVar3 = 6;
    param_1[2] = 1;
    *(undefined8 *)(param_1 + 4) = 6;
    *(undefined **)(param_1 + 6) = &DAT_71009c3470;
    puVar6 = &DAT_71009c3380;
    param_1[8] = 1;
    *(undefined8 *)(param_1 + 10) = 6;
    *(undefined **)(param_1 + 0xc) = &DAT_71009c3440;
    puVar5 = &DAT_71009c33e0;
    puVar4 = &DAT_71009c33b0;
    param_1[0xe] = 1;
    *(undefined8 *)(param_1 + 0x10) = 6;
    *(undefined **)(param_1 + 0x12) = &DAT_71009c3410;
    goto LAB_710073541c;
  case 8:
    uVar3 = 8;
    param_1[2] = 1;
    *(undefined8 *)(param_1 + 4) = 8;
    *(undefined **)(param_1 + 6) = &DAT_71009c3340;
    puVar6 = &DAT_71009c3200;
    param_1[8] = 1;
    *(undefined8 *)(param_1 + 10) = 8;
    *(undefined **)(param_1 + 0xc) = &DAT_71009c3300;
    puVar5 = &DAT_71009c3280;
    puVar4 = &DAT_71009c3240;
    param_1[0xe] = 1;
    *(undefined8 *)(param_1 + 0x10) = 8;
    *(undefined **)(param_1 + 0x12) = &DAT_71009c32c0;
LAB_710073541c:
    param_1[0x26] = 1;
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    *(undefined **)(param_1 + 0x2a) = puVar6;
    param_1[0x14] = 1;
    *(undefined8 *)(param_1 + 0x16) = uVar3;
    *(undefined **)(param_1 + 0x18) = puVar5;
    param_1[0x1a] = 1;
    *(undefined8 *)(param_1 + 0x1c) = uVar3;
    *(undefined **)(param_1 + 0x1e) = puVar4;
    param_1[0x20] = 1;
    *(undefined8 *)(param_1 + 0x22) = 1;
    *(undefined **)(param_1 + 0x24) = &DAT_7100af3850;
    goto LAB_7100735118;
  case 9:
    *(undefined1 **)(param_1 + 0x32) = &LAB_7100733b30;
    iVar2 = FUN_7100729a10(param_1 + 8,0x1db42);
    if (iVar2 == 0) {
      puVar1 = param_1 + 2;
      iVar2 = FUN_7100729a10(puVar1,1);
      if (((iVar2 == 0) && (iVar2 = FUN_7100729f20(puVar1,0xff), iVar2 == 0)) &&
         (iVar2 = FUN_710072a6d0(puVar1,puVar1,0x13), iVar2 == 0)) {
        uVar3 = FUN_7100729ba0(puVar1);
        *(undefined8 *)(param_1 + 0x2c) = uVar3;
        iVar2 = FUN_7100729cb0(param_1 + 0x26,&DAT_71009c31f0,0x10);
        if (((iVar2 == 0) && (iVar2 = FUN_7100729ac0(param_1 + 0x26,0xfc,1), iVar2 == 0)) &&
           ((iVar2 = FUN_7100729a10(param_1 + 0x14,9), iVar2 == 0 &&
            (iVar2 = FUN_7100729a10(param_1 + 0x20,1), iVar2 == 0)))) {
          FUN_71007296a0(param_1 + 0x1a);
          *(undefined8 *)(param_1 + 0x2e) = 0xfe;
          return 0;
        }
      }
    }
    goto LAB_7100735180;
  case 10:
    *(undefined1 **)(param_1 + 0x32) = &LAB_7100733f80;
    uVar3 = 3;
    param_1[2] = 1;
    *(undefined8 *)(param_1 + 4) = 3;
    *(undefined **)(param_1 + 6) = &DAT_71009c36f0;
    puVar6 = &DAT_71009c3680;
    param_1[8] = 1;
    *(undefined8 *)(param_1 + 10) = 1;
    *(undefined **)(param_1 + 0xc) = &DAT_71009c36e0;
    puVar5 = &DAT_71009c36c0;
    puVar4 = &DAT_71009c36a0;
    param_1[0xe] = 1;
    *(undefined8 *)(param_1 + 0x10) = 1;
    *(undefined **)(param_1 + 0x12) = &DAT_71009c36d8;
    goto LAB_71007350ec;
  case 0xb:
    *(undefined1 **)(param_1 + 0x32) = &LAB_7100733f60;
    uVar3 = 4;
    param_1[2] = 1;
    *(undefined8 *)(param_1 + 4) = 4;
    *(undefined **)(param_1 + 6) = &DAT_71009c3660;
    puVar6 = &DAT_71009c35f0;
    param_1[8] = 1;
    *(undefined8 *)(param_1 + 10) = 1;
    *(undefined **)(param_1 + 0xc) = &DAT_71009c3658;
    puVar5 = &DAT_71009c3630;
    puVar4 = &DAT_71009c3610;
    param_1[0xe] = 1;
    *(undefined8 *)(param_1 + 0x10) = 1;
    *(undefined **)(param_1 + 0x12) = &DAT_71009c3650;
    goto LAB_71007350ec;
  case 0xc:
    *(undefined1 **)(param_1 + 0x32) = &LAB_7100733f40;
    uVar3 = 4;
    param_1[2] = 1;
    *(undefined8 *)(param_1 + 4) = 4;
    *(undefined **)(param_1 + 6) = &DAT_71009c35d0;
    puVar6 = &DAT_71009c3560;
    param_1[8] = 1;
    *(undefined8 *)(param_1 + 10) = 1;
    *(undefined **)(param_1 + 0xc) = &DAT_71009c35c8;
    puVar5 = &DAT_71009c35a0;
    puVar4 = &DAT_71009c3580;
    param_1[0xe] = 1;
    *(undefined8 *)(param_1 + 0x10) = 1;
    *(undefined **)(param_1 + 0x12) = &DAT_71009c35c0;
LAB_71007350ec:
    param_1[0x26] = 1;
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    *(undefined **)(param_1 + 0x2a) = puVar6;
    param_1[0x14] = 1;
    *(undefined8 *)(param_1 + 0x16) = uVar3;
    *(undefined **)(param_1 + 0x18) = puVar5;
    param_1[0x1a] = 1;
    *(undefined8 *)(param_1 + 0x1c) = uVar3;
    *(undefined **)(param_1 + 0x1e) = puVar4;
    param_1[0x20] = 1;
    *(undefined8 *)(param_1 + 0x22) = 1;
    *(undefined **)(param_1 + 0x24) = &DAT_7100af3850;
    goto LAB_7100735118;
  case 0xd:
    *(undefined1 **)(param_1 + 0x32) = &LAB_71007339c0;
    FUN_7100729690(auStack_18);
    iVar2 = FUN_7100729a10(param_1 + 8,0x98aa);
    if (iVar2 == 0) {
      puVar1 = param_1 + 2;
      iVar2 = FUN_7100729a10(puVar1,1);
      if ((((iVar2 == 0) && (iVar2 = FUN_7100729f20(puVar1,0xe0), iVar2 == 0)) &&
          (iVar2 = FUN_710072a6d0(puVar1,puVar1,1), iVar2 == 0)) &&
         ((iVar2 = FUN_7100729f20(puVar1,0xe0), iVar2 == 0 &&
          (iVar2 = FUN_710072a6d0(puVar1,puVar1,1), iVar2 == 0)))) {
        uVar3 = FUN_7100729ba0(puVar1);
        *(undefined8 *)(param_1 + 0x2c) = uVar3;
        iVar2 = FUN_7100729a10(param_1 + 0x14,5);
        if ((iVar2 == 0) && (iVar2 = FUN_7100729a10(param_1 + 0x20,1), iVar2 == 0)) {
          puVar1 = param_1 + 0x26;
          FUN_71007296a0(param_1 + 0x1a);
          iVar2 = FUN_7100729ac0(puVar1,0x1be,1);
          if (((iVar2 == 0) && (iVar2 = FUN_7100729cb0(auStack_18,&DAT_71009c31d0,0x1c), iVar2 == 0)
              ) && (iVar2 = FUN_710072a680(puVar1,puVar1,auStack_18), iVar2 == 0)) {
            *(undefined8 *)(param_1 + 0x2e) = 0x1bf;
            FUN_71007296a0(auStack_18);
            return 0;
          }
        }
      }
    }
    FUN_71007296a0(auStack_18);
LAB_7100735180:
    FUN_7100731800(param_1);
    return iVar2;
  default:
    *param_1 = 0;
    return -0x4e80;
  }
  param_1[0x26] = 1;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined **)(param_1 + 0x2a) = puVar6;
  param_1[0x14] = 1;
  *(undefined8 *)(param_1 + 0x16) = uVar3;
  *(undefined **)(param_1 + 0x18) = puVar5;
  param_1[0x1a] = 1;
  *(undefined8 *)(param_1 + 0x1c) = uVar3;
  *(undefined **)(param_1 + 0x1e) = puVar4;
  param_1[0x20] = 1;
  *(undefined8 *)(param_1 + 0x22) = 1;
  *(undefined **)(param_1 + 0x24) = &DAT_7100af3850;
LAB_7100735118:
  uVar3 = FUN_7100729ba0();
  *(undefined8 *)(param_1 + 0x2c) = uVar3;
  uVar3 = FUN_7100729ba0(param_1 + 0x26);
  *(undefined8 *)(param_1 + 0x2e) = uVar3;
  param_1[0x30] = 1;
  return 0;
}



// ===== FUN_7100735830 @ 7100735830 (size=56) =====

undefined8
FUN_7100735830(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  FUN_71007512e0(param_2,param_3);
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = param_3;
  }
  return 0;
}



// ===== FUN_7100735870 @ 7100735870 (size=232) =====

int FUN_7100735870(int *param_1,undefined1 param_2,undefined1 *param_3,ulong param_4)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 auStack_40 [64];
  
  if (param_4 < 0x41) {
    local_47 = (undefined1)param_4;
    puVar3 = param_3;
  }
  else {
    puVar3 = auStack_40;
    iVar2 = FUN_7100743300(param_3,param_4,puVar3,0);
    if (iVar2 != 0) goto LAB_71007358ec;
    local_47 = 0x40;
    param_4 = 0x40;
  }
  piVar1 = param_1 + 2;
  local_48 = param_2;
  if (*param_1 == 0) {
    iVar2 = FUN_7100742540(piVar1,0);
    if (iVar2 != 0) goto LAB_71007358ec;
  }
  *param_1 = 1;
  iVar2 = FUN_7100742e10(piVar1,&local_48,2);
  if (iVar2 == 0) {
    iVar2 = FUN_7100742e10(piVar1,puVar3,param_4);
  }
LAB_71007358ec:
  FUN_710073b460(auStack_40,0x40);
  return iVar2;
}



// ===== FUN_7100735960 @ 7100735960 (size=292) =====

int FUN_7100735960(long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  long local_88;
  undefined1 auStack_80 [128];
  
  if (0 < *(int *)(param_1 + 0xe0)) {
    bVar1 = false;
    iVar5 = 0;
    puVar4 = (undefined8 *)(param_1 + 0xe8);
    do {
      while( true ) {
        local_88 = 0;
        bVar1 = (bool)(bVar1 | *(int *)(puVar4 + 4) == 1);
        iVar2 = (*(code *)*puVar4)(puVar4[1],auStack_80,0x80,&local_88);
        if (iVar2 != 0) goto LAB_7100735a34;
        if (local_88 == 0) break;
        iVar3 = FUN_7100735870(param_1,iVar5,auStack_80);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar5 = iVar5 + 1;
        puVar4[2] = puVar4[2] + local_88;
        puVar4 = puVar4 + 5;
        if (*(int *)(param_1 + 0xe0) <= iVar5) goto LAB_7100735a28;
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 5;
    } while (iVar5 < *(int *)(param_1 + 0xe0));
LAB_7100735a28:
    if (bVar1) goto LAB_7100735a34;
  }
  iVar2 = -0x3d;
LAB_7100735a34:
  FUN_710073b460(auStack_80,0x80);
  return iVar2;
}



// ===== FUN_7100735a90 @ 7100735a90 (size=72) =====

void FUN_7100735a90(int *param_1)

{
  if (*param_1 != -1) {
    FUN_7100742530(param_1 + 2);
    param_1[0x38] = 0;
    FUN_710073b460(param_1 + 0x3a,800);
    *param_1 = -1;
  }
  return;
}



// ===== FUN_7100735ae0 @ 7100735ae0 (size=64) =====

undefined8
FUN_7100735ae0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined4 param_5)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0xe0);
  if ((int)uVar2 < 0x14) {
    lVar1 = param_1 + ((-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2) +
                      (long)(int)uVar2) * 8;
    *(undefined8 *)(lVar1 + 0xe8) = param_2;
    *(undefined8 *)(lVar1 + 0xf0) = param_3;
    *(undefined8 *)(lVar1 + 0x100) = param_4;
    *(undefined4 *)(lVar1 + 0x108) = param_5;
    *(uint *)(param_1 + 0xe0) = uVar2 + 1;
    return 0;
  }
  return 0xffffffc2;
}



// ===== FUN_7100735b20 @ 7100735b20 (size=112) =====

void FUN_7100735b20(undefined4 *param_1)

{
  param_1[0x38] = 0;
  FUN_7100808340(param_1 + 0x3a,0,800);
  *param_1 = 0;
  FUN_7100742500(param_1 + 2);
  FUN_7100735ae0(param_1,FUN_7100735d50,0,4,0);
  FUN_7100735ae0(param_1,FUN_7100735830,0,0x20,1);
  return;
}



// ===== FUN_7100735b90 @ 7100735b90 (size=444) =====

int FUN_7100735b90(long param_1,undefined8 param_2,ulong param_3)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  ulong *puVar7;
  ulong uVar8;
  int iVar9;
  ulong *puVar10;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (param_3 < 0x41) {
    iVar9 = 0x101;
    uVar4 = *(uint *)(param_1 + 0xe0);
    do {
      if (uVar4 == 0) {
        iVar6 = -0x40;
        goto LAB_7100735c68;
      }
      while( true ) {
        iVar6 = FUN_7100735960(param_1);
        if (iVar6 != 0) goto LAB_7100735c68;
        uVar4 = *(uint *)(param_1 + 0xe0);
        if ((int)uVar4 < 1) break;
        puVar1 = (ulong *)(param_1 + 0xf8);
        bVar5 = true;
        puVar7 = puVar1;
        uVar8 = 0;
        do {
          puVar10 = puVar7 + 5;
          bVar5 = (bool)(bVar5 & puVar7[1] <= *puVar7);
          uVar3 = uVar8 + *puVar7;
          if ((int)puVar7[2] != 1) {
            uVar3 = uVar8;
          }
          puVar7 = puVar10;
          uVar8 = uVar3;
        } while (puVar10 != puVar1 + (ulong)uVar4 * 5);
        if (bVar5 && 0x3f < uVar3) {
          lVar2 = param_1 + 8;
          local_40 = 0;
          uStack_38 = 0;
          uStack_30 = 0;
          uStack_28 = 0;
          local_20 = 0;
          uStack_18 = 0;
          uStack_10 = 0;
          uStack_8 = 0;
          iVar6 = FUN_7100742f30(lVar2,&local_40);
          if (iVar6 == 0) {
            FUN_7100742530(lVar2);
            FUN_7100742500(lVar2);
            iVar6 = FUN_7100742540(lVar2,0);
            if (iVar6 == 0) {
              iVar6 = FUN_7100742e10(lVar2,&local_40,0x40);
              if (iVar6 == 0) {
                iVar6 = FUN_7100743300(&local_40,0x40,&local_40,0);
                if (iVar6 == 0) {
                  uVar4 = *(uint *)(param_1 + 0xe0);
                  if (0 < (int)uVar4) {
                    puVar7 = puVar1;
                    do {
                      puVar10 = puVar7 + 5;
                      *puVar7 = 0;
                      puVar7 = puVar10;
                    } while (puVar1 + (ulong)uVar4 * 5 != puVar10);
                  }
                  FUN_710080f900(param_2,&local_40,param_3);
                }
              }
            }
          }
          goto LAB_7100735c68;
        }
        iVar9 = iVar9 + -1;
        if (iVar9 == 0) goto LAB_7100735c48;
      }
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
LAB_7100735c48:
    iVar6 = -0x3c;
LAB_7100735c68:
    FUN_710073b460(&local_40,0x40);
  }
  else {
    iVar6 = -0x3c;
  }
  return iVar6;
}



// ===== FUN_7100735d50 @ 7100735d50 (size=76) =====

undefined8 FUN_7100735d50(undefined8 param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_71007433b0();
  *param_4 = 0;
  if (7 < param_3) {
    *param_2 = uVar1;
    *param_4 = 8;
  }
  return 0;
}



// ===== FUN_7100735da0 @ 7100735da0 (size=4404) =====

char * FUN_7100735da0(uint param_1)

{
  char *pcVar1;
  uint uVar2;
  
  uVar2 = -param_1;
  if (-1 < (int)param_1) {
    uVar2 = param_1;
  }
  uVar2 = uVar2 & 0xff80;
  if (uVar2 == 0x4c80) {
    return "ECP - Invalid private or public key";
  }
  if (0x4c80 < uVar2) {
    if (uVar2 == 0x6c80) {
      return "SSL - Unknown identity received (eg, PSK identity)";
    }
    if (0x6c80 < uVar2) {
      if (uVar2 == 0x7680) {
        return "SSL - No CA Chain is set, but required to operate";
      }
      if (0x7680 < uVar2) {
        if (uVar2 == 0x7b80) {
          return "SSL - Processing of the ServerHelloDone handshake message failed";
        }
        if (0x7b80 < uVar2) {
          if (uVar2 == 0x7e00) {
            return "SSL - Processing of the ChangeCipherSpec handshake message failed";
          }
          if (0x7e00 < uVar2) {
            if (uVar2 == 0x7f00) {
              return "SSL - Memory allocation failed";
            }
            if (uVar2 != 0x7f80) {
              pcVar1 = "SSL - Processing of the Finished handshake message failed";
              if (uVar2 != 0x7e80) {
                pcVar1 = (char *)0x0;
              }
              return pcVar1;
            }
            return "SSL - Hardware acceleration function returned with error";
          }
          if (uVar2 == 32000) {
            return 
            "SSL - Processing of the ClientKeyExchange handshake message failed in DHM / ECDH Calculate Secret"
            ;
          }
          if (uVar2 < 0x7d01) {
            if (uVar2 == 0x7c00) {
              return "SSL - Processing of the ClientKeyExchange handshake message failed";
            }
            if (uVar2 == 0x7c80) {
              return 
              "SSL - Processing of the ClientKeyExchange handshake message failed in DHM / ECDH Read Public"
              ;
            }
            return (char *)0x0;
          }
          if (uVar2 == 0x7d80) {
            return "SSL - Processing of the CertificateVerify handshake message failed";
          }
          return (char *)0x0;
        }
        if (uVar2 == 0x7900) {
          return "SSL - Processing of the ClientHello handshake message failed";
        }
        if (uVar2 < 0x7901) {
          if (uVar2 == 0x7800) {
            return "SSL - Verification of our peer failed";
          }
          if (0x7800 < uVar2) {
            if (uVar2 == 0x7880) {
              return "SSL - The peer notified us that the connection is going to be closed";
            }
            return (char *)0x0;
          }
          if (uVar2 == 0x7700) {
            return "SSL - An unexpected message was received from our peer";
          }
          if (uVar2 == 0x7780) {
            return "SSL - A fatal alert message was received from our peer";
          }
          return (char *)0x0;
        }
        if (uVar2 == 0x7a80) {
          return "SSL - Processing of the CertificateRequest handshake message failed";
        }
        if (0x7a80 < uVar2) {
          if (uVar2 == 0x7b00) {
            return "SSL - Processing of the ServerKeyExchange handshake message failed";
          }
          return (char *)0x0;
        }
        if (uVar2 == 0x7980) {
          return "SSL - Processing of the ServerHello handshake message failed";
        }
        if (uVar2 == 0x7a00) {
          return "SSL - Processing of the Certificate handshake message failed";
        }
        return (char *)0x0;
      }
      if (uVar2 == 0x7180) {
        return "SSL - Verification of the message MAC failed";
      }
      if (uVar2 < 0x7181) {
        if (uVar2 == 0x6f00) {
          return "SSL - Processing of the compression / decompression failed";
        }
        if (0x6f00 < uVar2) {
          if (uVar2 == 0x7080) {
            return "SSL - The requested feature is not available";
          }
          if (0x7080 < uVar2) {
            if (uVar2 == 0x7100) {
              return "SSL - Bad input parameters to function";
            }
            return (char *)0x0;
          }
          if (uVar2 == 0x6f80) {
            return "SSL - Hardware acceleration function skipped / left alone data";
          }
          if (uVar2 == 0x7000) {
            return "SSL - A cryptographic operation is in progress. Try again later";
          }
          return (char *)0x0;
        }
        if (uVar2 == 0x6e00) {
          return "SSL - Processing of the NewSessionTicket handshake message failed";
        }
        if (0x6e00 < uVar2) {
          if (uVar2 == 0x6e80) {
            return "SSL - Handshake protocol not within min/max boundaries";
          }
          return (char *)0x0;
        }
        if (uVar2 == 0x6d00) {
          return 
          "SSL - Public key type mismatch (eg, asked for RSA key exchange and presented EC key)";
        }
        if (uVar2 == 0x6d80) {
          return "SSL - Session ticket has expired";
        }
        return (char *)0x0;
      }
      if (uVar2 == 0x7400) {
        return "SSL - No RNG was provided to the SSL module";
      }
      if (0x7400 < uVar2) {
        if (uVar2 == 0x7580) {
          return "SSL - The own certificate is not set, but needed by the server";
        }
        if (0x7580 < uVar2) {
          if (uVar2 == 0x7600) {
            return "SSL - The own private key or pre-shared key is not set, but needed";
          }
          return (char *)0x0;
        }
        if (uVar2 == 0x7480) {
          return 
          "SSL - No client certification received from the client, but required by the authentication mode"
          ;
        }
        if (uVar2 == 0x7500) {
          return "SSL - Our own certificate(s) is/are too large to send in an SSL message";
        }
        return (char *)0x0;
      }
      if (uVar2 == 0x7300) {
        return "SSL - An unknown cipher was received";
      }
      if (0x7300 < uVar2) {
        if (uVar2 == 0x7380) {
          return "SSL - The server has no ciphersuites in common with the client";
        }
        return (char *)0x0;
      }
      if (uVar2 == 0x7200) {
        return "SSL - An invalid SSL record was received";
      }
      if (uVar2 == 0x7280) {
        return "SSL - The connection indicated an EOF";
      }
      return (char *)0x0;
    }
    if (uVar2 == 0x6300) {
      return "CIPHER - Authentication failed (for AEAD modes)";
    }
    if (0x6300 < uVar2) {
      if (uVar2 == 0x6800) {
        return "SSL - The operation timed out";
      }
      if (0x6800 < uVar2) {
        if (uVar2 == 0x6a80) {
          return "SSL - DTLS client must retry for hello verification";
        }
        if (0x6a80 < uVar2) {
          if (uVar2 == 0x6b80) {
            return "SSL - A counter would wrap (eg, too many messages exchanged)";
          }
          if (uVar2 != 0x6c00) {
            pcVar1 = "SSL - Unexpected message at ServerHello in renegotiation";
            if (uVar2 != 0x6b00) {
              pcVar1 = (char *)0x0;
            }
            return pcVar1;
          }
          return "SSL - Internal error (eg, unexpected failure in lower-level module)";
        }
        if (uVar2 == 0x6980) {
          return 
          "SSL - None of the common ciphersuites is usable (eg, no suitable certificate, see debug messages)"
          ;
        }
        if (uVar2 < 0x6981) {
          if (uVar2 == 0x6880) {
            return "SSL - Connection requires a write call";
          }
          if (uVar2 == 0x6900) {
            return "SSL - No data of requested type currently available on underlying transport";
          }
          return (char *)0x0;
        }
        if (uVar2 == 0x6a00) {
          return "SSL - A buffer is too small to receive or write a message";
        }
        return (char *)0x0;
      }
      if (uVar2 == 0x6580) {
        return 
        "SSL - Internal-only message signaling that further message-processing should be done";
      }
      if (uVar2 < 0x6581) {
        if (uVar2 == 0x6480) {
          return "SSL - Internal-only message signaling that a message arrived early";
        }
        if (0x6480 < uVar2) {
          if (uVar2 == 0x6500) {
            return "SSL - The asynchronous operation is not completed yet";
          }
          return (char *)0x0;
        }
        if (uVar2 == 0x6380) {
          return "CIPHER - The context is invalid. For example, because it was freed";
        }
        if (uVar2 == 0x6400) {
          return "CIPHER - Cipher hardware accelerator failed";
        }
        return (char *)0x0;
      }
      if (uVar2 == 0x6700) {
        return "SSL - Record header looks valid but is not expected";
      }
      if (0x6700 < uVar2) {
        if (uVar2 == 0x6780) {
          return "SSL - The client initiated a reconnect from the same port";
        }
        return (char *)0x0;
      }
      if (uVar2 == 0x6600) {
        return "SSL - Couldn\'t set the hash for verifying CertificateVerify";
      }
      if (uVar2 == 0x6680) {
        return "SSL - The alert message received indicates a non-fatal error";
      }
      return (char *)0x0;
    }
    if (uVar2 == 0x5200) {
      return "MD - Opening or reading of file failed";
    }
    if (uVar2 < 0x5201) {
      if (uVar2 == 0x4f00) {
        return "ECP - The buffer is too small to write to";
      }
      if (0x4f00 < uVar2) {
        if (uVar2 == 0x5100) {
          return "MD - Bad input parameters to function";
        }
        if (0x5100 < uVar2) {
          if (uVar2 == 0x5180) {
            return "MD - Failed to allocate memory";
          }
          return (char *)0x0;
        }
        if (uVar2 == 0x4f80) {
          return "ECP - Bad input parameters to function";
        }
        if (uVar2 == 0x5080) {
          return "MD - The selected feature is not available";
        }
        return (char *)0x0;
      }
      if (uVar2 == 0x4e00) {
        return "ECP - The signature is not valid";
      }
      if (0x4e00 < uVar2) {
        if (uVar2 == 0x4e80) {
          return 
          "ECP - The requested feature is not available, for example, the requested curve is not supported"
          ;
        }
        return (char *)0x0;
      }
      if (uVar2 == 0x4d00) {
        return "ECP - Generation of random value, such as ephemeral key, failed";
      }
      if (uVar2 == 0x4d80) {
        return "ECP - Memory allocation failed";
      }
      return (char *)0x0;
    }
    if (uVar2 == 0x6080) {
      return "CIPHER - The selected feature is not available";
    }
    if (0x6080 < uVar2) {
      if (uVar2 == 0x6200) {
        return "CIPHER - Input data contains invalid padding and is rejected";
      }
      if (0x6200 < uVar2) {
        if (uVar2 == 0x6280) {
          return "CIPHER - Decryption of block requires a full block";
        }
        return (char *)0x0;
      }
      if (uVar2 == 0x6100) {
        return "CIPHER - Bad input parameters";
      }
      if (uVar2 == 0x6180) {
        return "CIPHER - Failed to allocate memory";
      }
      return (char *)0x0;
    }
    if (uVar2 == 0x5f00) {
      return "SSL - An operation failed due to an unexpected version or configuration";
    }
    if (0x5f00 < uVar2) {
      if (uVar2 == 0x6000) {
        return "SSL - An encrypted DTLS-frame with an unexpected CID was received";
      }
      return (char *)0x0;
    }
    if (uVar2 == 0x5280) {
      return "MD - MD hardware accelerator failed";
    }
    if (uVar2 == 0x5e80) {
      return "SSL - Invalid value in SSL config";
    }
    return (char *)0x0;
  }
  if (uVar2 == 0x3100) {
    return "DHM - Reading of the DHM parameters failed";
  }
  if (0x3100 < uVar2) {
    if (uVar2 == 0x3d80) {
      return "PK - Unsupported key version";
    }
    if (0x3d80 < uVar2) {
      if (uVar2 == 0x4300) {
        return "RSA - The private key operation failed";
      }
      if (0x4300 < uVar2) {
        if (uVar2 == 0x4580) {
          return "RSA - RSA hardware accelerator failed";
        }
        if (0x4580 < uVar2) {
          if (uVar2 == 0x4b80) {
            return "ECP - The ECP hardware accelerator failed";
          }
          if (uVar2 != 0x4c00) {
            pcVar1 = "ECP - Operation in progress, call again with the same parameters to continue";
            if (uVar2 != 0x4b00) {
              pcVar1 = (char *)0x0;
            }
            return pcVar1;
          }
          return "ECP - The buffer contains a valid signature followed by more data";
        }
        if (uVar2 == 0x4480) {
          return "RSA - The random generator failed to generate non-zeros";
        }
        if (uVar2 < 0x4481) {
          if (uVar2 == 0x4380) {
            return "RSA - The PKCS#1 verification failed";
          }
          if (uVar2 == 0x4400) {
            return "RSA - The output buffer for decryption is not large enough";
          }
          return (char *)0x0;
        }
        if (uVar2 == 0x4500) {
          return 
          "RSA - The implementation does not offer the requested operation, for example, because of security violations or lack of functionality"
          ;
        }
        return (char *)0x0;
      }
      if (uVar2 == 0x4080) {
        return "RSA - Bad input parameters to function";
      }
      if (uVar2 < 0x4081) {
        if (uVar2 == 0x3f00) {
          return "PK - Type mismatch, eg attempt to encrypt with an ECDSA key";
        }
        if (0x3f00 < uVar2) {
          if (uVar2 == 0x3f80) {
            return "PK - Memory allocation failed";
          }
          return (char *)0x0;
        }
        if (uVar2 == 0x3e00) {
          return "PK - Read/write of file failed";
        }
        if (uVar2 == 16000) {
          return "PK - Bad input parameters to function";
        }
        return (char *)0x0;
      }
      if (uVar2 == 0x4200) {
        return "RSA - Key failed to pass the validity check of the library";
      }
      if (0x4200 < uVar2) {
        if (uVar2 == 0x4280) {
          return "RSA - The public key operation failed";
        }
        return (char *)0x0;
      }
      if (uVar2 == 0x4100) {
        return "RSA - Input data contains invalid padding and is rejected";
      }
      if (uVar2 == 0x4180) {
        return "RSA - Something failed during generation of a key";
      }
      return (char *)0x0;
    }
    if (uVar2 == 0x3880) {
      return "PK - PK hardware accelerator failed";
    }
    if (uVar2 < 0x3881) {
      if (uVar2 == 0x3380) {
        return "DHM - The ASN.1 data is not formatted correctly";
      }
      if (0x3380 < uVar2) {
        if (uVar2 == 0x3500) {
          return "DHM - DHM hardware accelerator failed";
        }
        if (0x3500 < uVar2) {
          if (uVar2 == 0x3580) {
            return "DHM - Setting the modulus and generator failed";
          }
          return (char *)0x0;
        }
        if (uVar2 == 0x3400) {
          return "DHM - Allocation of memory failed";
        }
        if (uVar2 == 0x3480) {
          return "DHM - Read or write of file failed";
        }
        return (char *)0x0;
      }
      if (uVar2 == 0x3280) {
        return "DHM - Making of the public value failed";
      }
      if (0x3280 < uVar2) {
        if (uVar2 == 0x3300) {
          return "DHM - Calculation of the DHM secret failed";
        }
        return (char *)0x0;
      }
      if (uVar2 == 0x3180) {
        return "DHM - Making of the DHM parameters failed";
      }
      if (uVar2 == 0x3200) {
        return "DHM - Reading of the public values failed";
      }
      return (char *)0x0;
    }
    if (uVar2 == 0x3b00) {
      return "PK - The pubkey tag or value is invalid (only RSA and EC are supported)";
    }
    if (0x3b00 < uVar2) {
      if (uVar2 == 0x3c80) {
        return "PK - Key algorithm is unsupported (only RSA and EC are supported)";
      }
      if (0x3c80 < uVar2) {
        if (uVar2 == 0x3d00) {
          return "PK - Invalid key tag or value";
        }
        return (char *)0x0;
      }
      if (uVar2 == 0x3b80) {
        return "PK - Given private key password does not allow for correct decryption";
      }
      if (uVar2 == 0x3c00) {
        return "PK - Private key password can\'t be empty";
      }
      return (char *)0x0;
    }
    if (uVar2 == 0x3a00) {
      return "PK - Elliptic curve is unsupported (only NIST curves are supported)";
    }
    if (0x3a00 < uVar2) {
      if (uVar2 == 0x3a80) {
        return "PK - The algorithm tag or value is invalid";
      }
      return (char *)0x0;
    }
    if (uVar2 == 0x3900) {
      return "PK - The buffer contains a valid signature followed by more data";
    }
    if (uVar2 == 0x3980) {
      return "PK - Unavailable feature, e.g. RSA disabled for RSA key";
    }
    return (char *)0x0;
  }
  if (uVar2 == 0x2380) {
    return "X509 - The name tag or value is invalid";
  }
  if (0x2380 < uVar2) {
    if (uVar2 == 0x2880) {
      return "X509 - Allocation of memory failed";
    }
    if (0x2880 < uVar2) {
      if (uVar2 == 0x2f00) {
        return "PKCS5 - Unexpected ASN.1 data";
      }
      if (0x2f00 < uVar2) {
        if (uVar2 == 0x3000) {
          return 
          "X509 - A fatal error occurred, eg the chain is too long or the vrfy callback failed";
        }
        if (uVar2 != 0x3080) {
          pcVar1 = "PKCS5 - Bad input parameters to function";
          if (uVar2 != 0x2f80) {
            pcVar1 = (char *)0x0;
          }
          return pcVar1;
        }
        return "DHM - Bad input parameters";
      }
      if (uVar2 == 0x2e00) {
        return "PKCS5 - Given private key password does not allow for correct decryption";
      }
      if (uVar2 < 0x2e01) {
        if (uVar2 == 0x2900) {
          return "X509 - Read/write of file failed";
        }
        if (uVar2 == 0x2980) {
          return "X509 - Destination buffer is too small";
        }
        return (char *)0x0;
      }
      if (uVar2 == 0x2e80) {
        return "PKCS5 - Requested encryption or digest alg not available";
      }
      return (char *)0x0;
    }
    if (uVar2 == 0x2600) {
      return "X509 - Signature algorithm (oid) is unsupported";
    }
    if (uVar2 < 0x2601) {
      if (uVar2 == 0x2500) {
        return "X509 - The extension tag or value is invalid";
      }
      if (0x2500 < uVar2) {
        if (uVar2 == 0x2580) {
          return "X509 - CRT/CRL/CSR has an unsupported version number";
        }
        return (char *)0x0;
      }
      if (uVar2 == 0x2400) {
        return "X509 - The date tag or value is invalid";
      }
      if (uVar2 == 0x2480) {
        return "X509 - The signature tag or value invalid";
      }
      return (char *)0x0;
    }
    if (uVar2 == 0x2780) {
      return "X509 - Format not recognized as DER or PEM";
    }
    if (0x2780 < uVar2) {
      if (uVar2 == 0x2800) {
        return "X509 - Input invalid";
      }
      return (char *)0x0;
    }
    if (uVar2 == 0x2680) {
      return "X509 - Signature algorithms do not match. (see \\c ::mbedtls_x509_crt sig_oid)";
    }
    if (uVar2 == 0x2700) {
      return "X509 - Certificate verification failed, e.g. CRL, CA or signature check failed";
    }
    return (char *)0x0;
  }
  if (uVar2 == 0x1e00) {
    return "PKCS12 - Given private key password does not allow for correct decryption";
  }
  if (uVar2 < 0x1e01) {
    if (uVar2 == 0x1280) {
      return "PEM - Unsupported key encryption algorithm";
    }
    if (0x1280 < uVar2) {
      if (uVar2 == 0x1400) {
        return "PEM - Unavailable feature, e.g. hashing/encryption combination";
      }
      if (0x1400 < uVar2) {
        if (uVar2 == 0x1480) {
          return "PEM - Bad input parameters to function";
        }
        return (char *)0x0;
      }
      if (uVar2 == 0x1300) {
        return "PEM - Private key password can\'t be empty";
      }
      if (uVar2 == 0x1380) {
        return "PEM - Given private key password does not allow for correct decryption";
      }
      return (char *)0x0;
    }
    if (uVar2 == 0x1180) {
      return "PEM - Failed to allocate memory";
    }
    if (0x1180 < uVar2) {
      if (uVar2 == 0x1200) {
        return "PEM - RSA IV is not in hex-format";
      }
      return (char *)0x0;
    }
    if (uVar2 == 0x1080) {
      return "PEM - No PEM header or footer found";
    }
    if (uVar2 == 0x1100) {
      return "PEM - PEM string is not as expected";
    }
    return (char *)0x0;
  }
  if (uVar2 == 0x2100) {
    return "X509 - Requested OID is unknown";
  }
  if (0x2100 < uVar2) {
    if (uVar2 == 0x2280) {
      return "X509 - The serial tag or value is invalid";
    }
    if (0x2280 < uVar2) {
      if (uVar2 == 0x2300) {
        return "X509 - The algorithm tag or value is invalid";
      }
      return (char *)0x0;
    }
    if (uVar2 == 0x2180) {
      return "X509 - The CRT/CRL/CSR format is invalid, e.g. different type expected";
    }
    if (uVar2 == 0x2200) {
      return "X509 - The CRT/CRL/CSR version element is invalid";
    }
    return (char *)0x0;
  }
  if (uVar2 == 0x1f80) {
    return "PKCS12 - Bad input parameters to function";
  }
  if (0x1f80 < uVar2) {
    if (uVar2 == 0x2080) {
      return "X509 - Unavailable feature, e.g. RSA hashing/encryption combination";
    }
    return (char *)0x0;
  }
  if (uVar2 == 0x1e80) {
    return "PKCS12 - PBE ASN.1 data not as expected";
  }
  if (uVar2 == 0x1f00) {
    return "PKCS12 - Feature not available, e.g. unsupported encryption scheme";
  }
  return (char *)0x0;
}



// ===== FUN_7100736ee0 @ 7100736ee0 (size=1112) =====

char * FUN_7100736ee0(uint param_1)

{
  uint uVar1;
  
  uVar1 = -param_1;
  if (-1 < (int)param_1) {
    uVar1 = param_1;
  }
  switch(uVar1 & 0xffff007f) {
  case 1:
    return "ERROR - Generic error";
  case 2:
    return "BIGNUM - An error occurred while reading from or writing to a file";
  case 3:
    return "HMAC_DRBG - Too many random requested in single call";
  case 4:
    return "BIGNUM - Bad input parameters to function";
  case 5:
    return "HMAC_DRBG - Input too large (Entropy + additional)";
  case 6:
    return "BIGNUM - There is an invalid character in the digit string";
  case 7:
    return "HMAC_DRBG - Read/write error in file";
  case 8:
    return "BIGNUM - The buffer is too small to write to";
  case 9:
    return "HMAC_DRBG - The entropy source failed";
  case 10:
    return "BIGNUM - The input arguments are negative or result in illegal output";
  case 0xb:
    return "OID - output buffer is too small";
  case 0xc:
    return "BIGNUM - The input argument for division is zero, which is not allowed";
  case 0xd:
    return "CCM - Bad input parameters to the function";
  case 0xe:
    return "BIGNUM - The input arguments are not acceptable";
  case 0xf:
    return "CCM - Authenticated decryption failed";
  case 0x10:
    return "BIGNUM - Memory allocation failed";
  case 0x11:
    return "CCM - CCM hardware accelerator failed";
  case 0x12:
    return "GCM - Authenticated decryption failed";
  case 0x13:
    return "GCM - GCM hardware accelerator failed";
  case 0x14:
    return "GCM - Bad input parameters to function";
  default:
    return (char *)0x0;
  case 0x16:
    return "BLOWFISH - Bad input data";
  case 0x17:
    return "BLOWFISH - Blowfish hardware accelerator failed";
  case 0x18:
    return "BLOWFISH - Invalid data input length";
  case 0x19:
    return "ARC4 - ARC4 hardware accelerator failed";
  case 0x20:
    return "AES - Invalid key length";
  case 0x21:
    return "AES - Invalid input data";
  case 0x22:
    return "AES - Invalid data input length";
  case 0x23:
    return "AES - Feature not available. For example, an unsupported AES key size";
  case 0x24:
    return "CAMELLIA - Bad input data";
  case 0x25:
    return "AES - AES hardware accelerator failed";
  case 0x26:
    return "CAMELLIA - Invalid data input length";
  case 0x27:
    return "CAMELLIA - Camellia hardware accelerator failed";
  case 0x28:
    return "XTEA - The data input has an invalid length";
  case 0x29:
    return "XTEA - XTEA hardware accelerator failed";
  case 0x2a:
    return "BASE64 - Output buffer too small";
  case 0x2c:
    return "BASE64 - Invalid character in input";
  case 0x2e:
    return "OID - OID is not found";
  case 0x2f:
    return "MD5 - MD5 hardware accelerator failed";
  case 0x30:
    return "PADLOCK - Input data should be aligned";
  case 0x31:
    return "RIPEMD160 - RIPEMD160 hardware accelerator failed";
  case 0x32:
    return "DES - The data input has an invalid length";
  case 0x33:
    return "DES - DES hardware accelerator failed";
  case 0x34:
    return "CTR_DRBG - The entropy source failed";
  case 0x35:
    return "SHA1 - SHA-1 hardware accelerator failed";
  case 0x36:
    return "CTR_DRBG - The requested random buffer length is too big";
  case 0x37:
    return "SHA256 - SHA-256 hardware accelerator failed";
  case 0x38:
    return "CTR_DRBG - The input (entropy + additional data) is too large";
  case 0x39:
    return "SHA512 - SHA-512 hardware accelerator failed";
  case 0x3a:
    return "CTR_DRBG - Read or write error in file";
  case 0x3c:
    return "ENTROPY - Critical entropy source failure";
  case 0x3d:
    return "ENTROPY - No strong sources have been added to poll";
  case 0x3e:
    return "ENTROPY - No more sources can be added";
  case 0x3f:
    return "ENTROPY - Read/write error in file";
  case 0x40:
    return "ENTROPY - No sources have been added to poll";
  case 0x42:
    return "NET - Failed to open a socket";
  case 0x43:
    return "NET - Buffer is too small to hold the data";
  case 0x44:
    return "NET - The connection to the given server / port failed";
  case 0x45:
    return "NET - The context is invalid, eg because it was free()ed";
  case 0x46:
    return "NET - Binding of the socket failed";
  case 0x47:
    return "NET - Polling the net context failed";
  case 0x48:
    return "NET - Could not listen on the socket";
  case 0x49:
    return "NET - Input invalid";
  case 0x4a:
    return "NET - Could not accept the incoming connection";
  case 0x4c:
    return "NET - Reading information from the socket failed";
  case 0x4e:
    return "NET - Sending information through the socket failed";
  case 0x50:
    return "NET - Connection was reset by peer";
  case 0x51:
    return "CHACHA20 - Invalid input parameter(s)";
  case 0x52:
    return "NET - Failed to get an IP address for the given hostname";
  case 0x53:
    return "CHACHA20 - Feature not available. For example, s part of the API is not implemented";
  case 0x54:
    return "CHACHAPOLY - The requested operation is not permitted in the current state";
  case 0x55:
    return "CHACHA20 - Chacha20 hardware accelerator failed";
  case 0x56:
    return "CHACHAPOLY - Authenticated decryption failed: data was not authentic";
  case 0x57:
    return "POLY1305 - Invalid input parameter(s)";
  case 0x59:
    return "POLY1305 - Feature not available. For example, s part of the API is not implemented";
  case 0x5b:
    return "POLY1305 - Poly1305 hardware accelerator failed";
  case 0x60:
    return "ASN1 - Out of data when parsing an ASN1 data structure";
  case 0x62:
    return "ASN1 - ASN1 tag was of an unexpected value";
  case 100:
    return "ASN1 - Error when trying to determine the length or invalid length";
  case 0x66:
    return "ASN1 - Actual length differs from expected length";
  case 0x68:
    return "ASN1 - Data is invalid";
  case 0x6a:
    return "ASN1 - Memory allocation failed";
  case 0x6c:
    return "ASN1 - Buffer too small when writing ASN.1 data structure";
  case 0x6e:
    return "ERROR - This is a bug in the library";
  case 0x70:
    return "PLATFORM - Hardware accelerator failed";
  case 0x72:
    return "PLATFORM - The requested feature is not supported by the platform";
  case 0x73:
    return "SHA1 - SHA-1 input data was malformed";
  case 0x74:
    return "SHA256 - SHA-256 input data was malformed";
  case 0x75:
    return "SHA512 - SHA-512 input data was malformed";
  }
}



// ===== FUN_7100737340 @ 7100737340 (size=8) =====

void FUN_7100737340(uint param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_3 == 0) {
    return;
  }
  FUN_7100808340(param_2,0);
  uVar3 = -param_1;
  if (-1 < (int)param_1) {
    uVar3 = param_1;
  }
  uVar2 = uVar3 & 0xff80;
  if (uVar2 != 0) {
    lVar4 = FUN_7100735da0(uVar3);
    if (lVar4 == 0) {
      FUN_71008170a0(param_2,param_3,"UNKNOWN ERROR CODE (%04X)",uVar2);
    }
    else {
      FUN_71008170a0(param_2,param_3,"%s",lVar4);
    }
    if (uVar2 == 0x7780) {
      return;
    }
  }
  if ((uVar3 & 0xffff007f) == 0) {
    return;
  }
  lVar4 = FUN_710081ce00(param_2);
  if (lVar4 != 0) {
    uVar5 = param_3 - lVar4;
    if (uVar5 < 5) {
      return;
    }
    lVar1 = param_2 + lVar4;
    param_3 = uVar5 - 3;
    param_2 = param_2 + lVar4 + 3;
    FUN_71008170a0(lVar1,uVar5,&DAT_710083ab88);
  }
  lVar4 = FUN_7100736ee0(uVar3);
  if (lVar4 != 0) {
    FUN_71008170a0(param_2,param_3,"%s",lVar4);
    return;
  }
  FUN_71008170a0(param_2,param_3,"UNKNOWN ERROR CODE (%04X)",uVar3 & 0xffff007f);
  return;
}



// ===== FUN_7100737348 @ 7100737348 (size=320) =====

void FUN_7100737348(uint param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  FUN_7100808340(param_2,0);
  uVar3 = -param_1;
  if (-1 < (int)param_1) {
    uVar3 = param_1;
  }
  uVar2 = uVar3 & 0xff80;
  if (uVar2 != 0) {
    lVar4 = FUN_7100735da0(uVar3);
    if (lVar4 == 0) {
      FUN_71008170a0(param_2,param_3,"UNKNOWN ERROR CODE (%04X)",uVar2);
    }
    else {
      FUN_71008170a0(param_2,param_3,"%s",lVar4);
    }
    if (uVar2 == 0x7780) {
      return;
    }
  }
  if ((uVar3 & 0xffff007f) == 0) {
    return;
  }
  lVar4 = FUN_710081ce00(param_2);
  if (lVar4 != 0) {
    uVar5 = param_3 - lVar4;
    if (uVar5 < 5) {
      return;
    }
    lVar1 = param_2 + lVar4;
    param_3 = uVar5 - 3;
    param_2 = param_2 + lVar4 + 3;
    FUN_71008170a0(lVar1,uVar5,&DAT_710083ab88);
  }
  lVar4 = FUN_7100736ee0(uVar3);
  if (lVar4 != 0) {
    FUN_71008170a0(param_2,param_3,"%s",lVar4);
    return;
  }
  FUN_71008170a0(param_2,param_3,"UNKNOWN ERROR CODE (%04X)",uVar3 & 0xffff007f);
  return;
}



// ===== FUN_7100737490 @ 7100737490 (size=332) =====

void FUN_7100737490(long param_1,long param_2,undefined1 *param_3)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  
  lVar10 = 0xf;
  lVar2 = param_1 + ((ulong)*(byte *)(param_2 + 0xf) & 0xf) * 8;
  uVar7 = *(ulong *)(lVar2 + 0x58);
  uVar4 = *(ulong *)(lVar2 + 0xd8);
  do {
    uVar8 = uVar4 << 0x3c;
    pbVar1 = (byte *)(param_2 + lVar10);
    iVar9 = (int)lVar10;
    uVar11 = uVar7 >> 4;
    uVar6 = (uint)uVar7;
    lVar10 = lVar10 + -1;
    uVar4 = uVar4 >> 4;
    lVar2 = param_1 + (ulong)(*pbVar1 & 0xf) * 8;
    lVar3 = param_1 + (ulong)(*pbVar1 >> 4) * 8;
    if (iVar9 != 0xf) {
      uVar4 = uVar4 ^ *(ulong *)(lVar2 + 0xd8);
      uVar11 = (uVar11 | uVar8) ^ *(ulong *)(lVar2 + 0x58);
      uVar8 = uVar4 << 0x3c;
      uVar6 = (uint)uVar11;
      uVar4 = (uVar4 ^ *(long *)(&DAT_71009c3c60 + (uVar7 & 0xf) * 8) << 0x30) >> 4;
      uVar11 = uVar11 >> 4;
    }
    uVar5 = uVar4 ^ *(ulong *)(lVar3 + 0xd8);
    uVar4 = uVar5 ^ *(long *)(&DAT_71009c3c60 + (ulong)(uVar6 & 0xf) * 8) << 0x30;
    uVar7 = (uVar8 | uVar11) ^ *(ulong *)(lVar3 + 0x58);
  } while (lVar10 != -1);
  *param_3 = (char)(uVar4 >> 0x38);
  param_3[1] = (char)(uVar4 >> 0x30);
  param_3[2] = (char)(uVar5 >> 0x28);
  param_3[3] = (char)(uVar5 >> 0x20);
  param_3[4] = (char)(uVar5 >> 0x18);
  param_3[5] = (char)(uVar5 >> 0x10);
  param_3[6] = (char)(uVar5 >> 8);
  param_3[7] = (char)uVar5;
  param_3[8] = (char)(uVar7 >> 0x38);
  param_3[9] = (char)(uVar7 >> 0x30);
  param_3[10] = (char)(uVar7 >> 0x28);
  param_3[0xb] = (char)(uVar7 >> 0x20);
  param_3[0xc] = (char)(uVar7 >> 0x18);
  param_3[0xd] = (char)(uVar7 >> 0x10);
  param_3[0xe] = (char)(uVar7 >> 8);
  param_3[0xf] = (char)uVar7;
  return;
}



// ===== FUN_71007375e0 @ 71007375e0 (size=12) =====

void FUN_71007375e0(undefined8 param_1)

{
  FUN_7100808340(param_1,0,0x1a0);
  return;
}



// ===== FUN_71007375f0 @ 71007375f0 (size=376) =====

undefined8 FUN_71007375f0(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  undefined8 local_18;
  ulong local_10;
  ulong uStack_8;
  
  lVar1 = FUN_710072c850(param_2,param_4,1);
  if ((lVar1 == 0) || (*(int *)(lVar1 + 0x20) != 0x10)) {
    uVar2 = 0xffffffec;
  }
  else {
    FUN_710072c8c0(param_1);
    uVar2 = FUN_710072d0d0(param_1,lVar1);
    if (((int)uVar2 == 0) && (uVar2 = FUN_710072c910(param_1,param_3,param_4,1), (int)uVar2 == 0)) {
      local_18 = 0;
      local_10 = 0;
      uStack_8 = 0;
      uVar2 = FUN_710072ca70(param_1,&local_10,0x10,&local_10,&local_18);
      if ((int)uVar2 == 0) {
        iVar9 = 3;
        uVar8 = 4;
        *(undefined8 *)(param_1 + 0x58) = 0;
        *(undefined8 *)(param_1 + 0xd8) = 0;
        uVar5 = (local_10 & 0xff00ff00ff00ff00) >> 8 | (local_10 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar5 >> 0x20 | uVar5 << 0x20;
        uVar5 = (uStack_8 & 0xff00ff00ff00ff00) >> 8 | (uStack_8 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
        *(ulong *)(param_1 + 0x98) = uVar5;
        *(ulong *)(param_1 + 0x118) = uVar6;
        do {
          uVar4 = (uint)uVar5;
          uVar5 = uVar5 >> 1 | uVar6 << 0x3f;
          lVar1 = param_1 + uVar8 * 8;
          iVar9 = iVar9 + -1;
          *(ulong *)(lVar1 + 0x58) = uVar5;
          uVar8 = (ulong)(uint)((int)uVar8 >> 1);
          uVar6 = (ulong)(-(uVar4 & 1) & 0xe1000000) << 0x20 ^ uVar6 >> 1;
          *(ulong *)(lVar1 + 0xd8) = uVar6;
        } while (iVar9 != 0);
        lVar1 = param_1 + 0x58;
        iVar9 = 3;
        uVar5 = 2;
        param_1 = param_1 + 0xd8;
        do {
          iVar7 = (int)uVar5;
          uVar5 = -(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3;
          uVar8 = *(ulong *)(param_1 + (long)iVar7 * 8);
          lVar3 = 1;
          uVar6 = *(ulong *)(lVar1 + (long)iVar7 * 8);
          if (1 < iVar7) {
            do {
              *(ulong *)(param_1 + uVar5 + lVar3 * 8) = *(ulong *)(param_1 + lVar3 * 8) ^ uVar8;
              *(ulong *)(lVar1 + uVar5 + lVar3 * 8) = *(ulong *)(lVar1 + lVar3 * 8) ^ uVar6;
              lVar3 = lVar3 + 1;
            } while ((int)lVar3 < iVar7);
          }
          iVar9 = iVar9 + -1;
          uVar5 = (ulong)(uint)(iVar7 << 1);
        } while (iVar9 != 0);
        return uVar2;
      }
    }
  }
  return uVar2;
}



// ===== FUN_7100737770 @ 7100737770 (size=456) =====

undefined8 FUN_7100737770(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 local_18;
  byte local_10 [16];
  
  local_18 = 0;
  if (((param_3 < param_4) && (param_4 - param_3 < param_2)) ||
     (uVar3 = *(ulong *)(param_1 + 0x158) + param_2,
     CARRY8(*(ulong *)(param_1 + 0x158),param_2) || 0xfffffffe0 < uVar3)) {
    uVar10 = 0xffffffec;
  }
  else {
    *(ulong *)(param_1 + 0x158) = uVar3;
    if (param_2 != 0) {
      pcVar1 = (char *)(param_1 + 0x187);
      lVar2 = param_1 + 0x188;
      do {
        pcVar8 = pcVar1;
        uVar3 = param_2;
        if (0x10 < param_2) {
          uVar3 = 0x10;
        }
        do {
          cVar4 = *pcVar8;
          pcVar9 = pcVar8 + -1;
          *pcVar8 = cVar4 + '\x01';
          if ((char)(cVar4 + '\x01') != '\0') break;
          pcVar8 = pcVar9;
        } while (pcVar9 != (char *)(param_1 + 0x183));
        uVar10 = FUN_710072ca70(param_1,param_1 + 0x178,0x10,local_10,&local_18);
        if ((int)uVar10 != 0) {
          return uVar10;
        }
        iVar7 = *(int *)(param_1 + 0x198);
        uVar11 = 1;
        do {
          uVar12 = uVar11;
          if (iVar7 == 0) {
            pcVar1[uVar11] = pcVar1[uVar11] ^ *(byte *)((param_3 - 1) + uVar11);
          }
          while( true ) {
            bVar5 = local_10[uVar12 - 1] ^ *(byte *)((param_3 - 1) + uVar12);
            *(byte *)((param_4 - 1) + uVar12) = bVar5;
            iVar7 = *(int *)(param_1 + 0x198);
            if (iVar7 != 1) break;
            bVar6 = uVar3 == uVar12;
            pcVar1[uVar12] = bVar5 ^ pcVar1[uVar12];
            uVar12 = uVar12 + 1;
            if (bVar6) {
              FUN_7100737490(param_1,lVar2,lVar2);
              goto joined_r0x0071007378b0;
            }
          }
          uVar11 = uVar12 + 1;
        } while (uVar3 != uVar12);
        FUN_7100737490(param_1,lVar2,lVar2);
joined_r0x0071007378b0:
        param_2 = param_2 - uVar3;
        param_4 = param_4 + uVar3;
        param_3 = param_3 + uVar3;
      } while (param_2 != 0);
    }
    uVar10 = 0;
  }
  return uVar10;
}



// ===== FUN_7100737940 @ 7100737940 (size=48) =====

void FUN_7100737940(long param_1)

{
  if (param_1 != 0) {
    FUN_710072c8c0();
    FUN_710073b460(param_1,0x1a0);
    return;
  }
  return;
}



// ===== FUN_7100737970 @ 7100737970 (size=32) =====

void FUN_7100737970(undefined8 *param_1)

{
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
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
  *(undefined4 *)((long)param_1 + 0x6c) = 10000;
  return;
}



// ===== FUN_7100737990 @ 7100737990 (size=340) =====

int FUN_7100737990(undefined8 *param_1,long param_2,long param_3)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 *puVar4;
  byte local_48 [8];
  undefined1 auStack_40 [64];
  
  puVar4 = param_1 + 3;
  uVar2 = FUN_7100738660(*param_1);
  local_48[0] = 0;
  bVar1 = (param_2 != 0 && param_3 != 0) + 1;
  while ((iVar3 = FUN_71007385f0(param_1), iVar3 == 0 &&
         (iVar3 = FUN_7100738510(param_1,puVar4,uVar2), iVar3 == 0))) {
    iVar3 = FUN_7100738510(param_1,local_48,1);
    if ((((iVar3 != 0) ||
         (((bVar1 == 2 && (iVar3 = FUN_7100738510(param_1,param_2,param_3), iVar3 != 0)) ||
          (iVar3 = FUN_7100738530(param_1,auStack_40), iVar3 != 0)))) ||
        (((iVar3 = FUN_71007383b0(param_1,auStack_40,uVar2), iVar3 != 0 ||
          (iVar3 = FUN_7100738510(param_1,puVar4,uVar2), iVar3 != 0)) ||
         (iVar3 = FUN_7100738530(param_1,puVar4), iVar3 != 0)))) ||
       (local_48[0] = local_48[0] + 1, bVar1 <= local_48[0])) break;
  }
  FUN_710073b460(auStack_40,0x40);
  return iVar3;
}



// ===== FUN_7100737af0 @ 7100737af0 (size=288) =====

int FUN_7100737af0(long param_1,long param_2,ulong param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_180 [384];
  
  uVar3 = *(ulong *)(param_1 + 0x60);
  uVar4 = uVar3 * 3 >> 1;
  if (param_4 == 0) {
    uVar4 = uVar3;
  }
  if ((0x100 < param_3) || (0x180 < uVar4 + param_3)) {
    return -5;
  }
  FUN_7100808340(auStack_180,0,0x180);
  iVar2 = (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x78),auStack_180,uVar3);
  if (iVar2 == 0) {
    uVar4 = *(ulong *)(param_1 + 0x60);
    if (param_4 == 0) {
      if (param_2 != 0 && param_3 != 0) {
LAB_7100737be4:
        puVar1 = auStack_180 + uVar4;
        uVar4 = uVar4 + param_3;
        FUN_710080f900(puVar1,param_2,param_3);
      }
    }
    else {
      iVar2 = (**(code **)(param_1 + 0x70))
                        (*(undefined8 *)(param_1 + 0x78),auStack_180 + uVar4,uVar4 >> 1);
      if (iVar2 != 0) goto LAB_7100737c04;
      uVar4 = uVar4 + (*(ulong *)(param_1 + 0x60) >> 1);
      if (param_2 != 0 && param_3 != 0) goto LAB_7100737be4;
    }
    iVar2 = FUN_7100737990(param_1,auStack_180,uVar4);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x58) = 1;
    }
    FUN_710073b460(auStack_180,uVar4);
  }
  else {
LAB_7100737c04:
    iVar2 = -9;
  }
  return iVar2;
}



// ===== FUN_7100737c10 @ 7100737c10 (size=172) =====

void FUN_7100737c10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_7100738050(param_1,param_2,1);
  if (iVar2 != 0) {
    return;
  }
  uVar1 = FUN_7100738660(param_2);
  iVar2 = FUN_71007383b0(param_1,param_1 + 0x18,uVar1);
  if (iVar2 == 0) {
    uVar1 = FUN_7100738660(param_2);
    FUN_7100808340(param_1 + 0x18,1,uVar1);
    FUN_7100737990(param_1,param_3,param_4);
    return;
  }
  return;
}



// ===== FUN_7100737cc0 @ 7100737cc0 (size=8) =====

void FUN_7100737cc0(void)

{
  FUN_7100737af0();
  return;
}



// ===== FUN_7100737e70 @ 7100737e70 (size=60) =====

void FUN_7100737e70(long param_1)

{
  if (param_1 != 0) {
    FUN_7100737f60();
    FUN_710073b460(param_1,0x80);
    *(undefined4 *)(param_1 + 0x6c) = 10000;
    return;
  }
  return;
}



// ===== FUN_7100737eb0 @ 7100737eb0 (size=12) =====

undefined * FUN_7100737eb0(void)

{
  return &DAT_71009c3ce0;
}



// ===== FUN_7100737ec0 @ 7100737ec0 (size=144) =====

undefined ** FUN_7100737ec0(uint param_1)

{
  undefined **ppuVar1;
  
  if (param_1 == 6) {
    return &PTR_s_SHA256_7100ae63c0;
  }
  if (6 < param_1) {
    if (param_1 == 8) {
      return &PTR_s_SHA512_7100ae63a0;
    }
    if (param_1 != 9) {
      ppuVar1 = &PTR_s_SHA384_7100ae63b0;
      if (param_1 != 7) {
        ppuVar1 = (undefined **)0x0;
      }
      return ppuVar1;
    }
    return &PTR_s_RIPEMD160_7100ae63f0;
  }
  if (param_1 == 4) {
    return &PTR_DAT_7100ae63e0;
  }
  if (param_1 != 5) {
    ppuVar1 = &PTR_DAT_7100ae6400;
    if (param_1 != 3) {
      ppuVar1 = (undefined **)0x0;
    }
    return ppuVar1;
  }
  return &PTR_s_SHA224_7100ae63d0;
}



// ===== FUN_7100737f50 @ 7100737f50 (size=12) =====

void FUN_7100737f50(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// ===== FUN_7100737f60 @ 7100737f60 (size=232) =====

void FUN_7100737f60(long *param_1)

{
  uint uVar1;
  long lVar2;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  if (*param_1 == 0) {
    return;
  }
  lVar2 = param_1[1];
  if (lVar2 == 0) goto LAB_7100737fb4;
  uVar1 = *(uint *)(*param_1 + 8);
  if (uVar1 < 7) {
    if (4 < uVar1) {
      FUN_7100741750();
      FUN_710081c200(param_1[1]);
      goto LAB_7100737fb4;
    }
    if (uVar1 == 3) {
      FUN_71007386a0();
      FUN_710081c200(param_1[1]);
      goto LAB_7100737fb4;
    }
    if (uVar1 == 4) {
      FUN_7100740330();
      lVar2 = param_1[1];
    }
  }
  else {
    if (uVar1 < 9) {
      FUN_7100742530();
      FUN_710081c200(param_1[1]);
      goto LAB_7100737fb4;
    }
    if (uVar1 == 9) {
      FUN_710073b4a0();
      FUN_710081c200(param_1[1]);
      goto LAB_7100737fb4;
    }
  }
  FUN_710081c200(lVar2);
LAB_7100737fb4:
  if (param_1[2] != 0) {
    FUN_710073b460(param_1[2],(ulong)*(byte *)(*param_1 + 0xd) << 1);
    FUN_710081c200(param_1[2]);
  }
  FUN_710073b460(param_1,0x18);
  return;
}



// ===== FUN_7100738050 @ 7100738050 (size=324) =====

undefined8 FUN_7100738050(long *param_1,long param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  
  if (param_2 == 0 || param_1 == (long *)0x0) {
    return 0xffffaf00;
  }
  uVar1 = *(uint *)(param_2 + 8);
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  if (uVar1 < 7) {
    if (uVar1 < 5) {
      if (uVar1 == 3) {
        lVar2 = FUN_710080e9e0(1,0x58);
        param_1[1] = lVar2;
        if (lVar2 == 0) {
          return 0xffffae80;
        }
        FUN_7100738680();
      }
      else {
        if (uVar1 != 4) {
          return 0xffffaf00;
        }
        lVar2 = FUN_710080e9e0(1,0x5c);
        param_1[1] = lVar2;
        if (lVar2 == 0) {
          return 0xffffae80;
        }
        FUN_7100740310();
      }
    }
    else {
      lVar2 = FUN_710080e9e0(1,0x6c);
      param_1[1] = lVar2;
      if (lVar2 == 0) {
        return 0xffffae80;
      }
      FUN_7100741730();
    }
  }
  else if (uVar1 < 9) {
    lVar2 = FUN_710080e9e0(1,0xd8);
    param_1[1] = lVar2;
    if (lVar2 == 0) {
      return 0xffffae80;
    }
    FUN_7100742500();
  }
  else {
    if (uVar1 != 9) {
      return 0xffffaf00;
    }
    lVar2 = FUN_710080e9e0(1,0x5c);
    param_1[1] = lVar2;
    if (lVar2 == 0) {
      return 0xffffae80;
    }
    FUN_710073b480();
  }
  if (param_3 != 0) {
    lVar2 = FUN_710080e9e0(2,*(undefined1 *)(param_2 + 0xd));
    param_1[2] = lVar2;
    if (lVar2 == 0) {
      FUN_7100737f60(param_1);
      return 0xffffae80;
    }
  }
  return 0;
}



// ===== FUN_71007381a0 @ 71007381a0 (size=156) =====

undefined8 FUN_71007381a0(long *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    uVar1 = *(uint *)(*param_1 + 8);
    if (uVar1 == 6) {
      uVar2 = FUN_7100741760(param_1[1],0);
      return uVar2;
    }
    if (uVar1 < 7) {
      if (uVar1 == 4) {
        uVar2 = FUN_7100740340(param_1[1]);
        return uVar2;
      }
      if (uVar1 == 5) {
        uVar2 = FUN_7100741760(param_1[1],1);
        return uVar2;
      }
      if (uVar1 == 3) {
        uVar2 = FUN_71007386b0(param_1[1]);
        return uVar2;
      }
    }
    else {
      if (uVar1 == 8) {
        uVar2 = FUN_7100742540(param_1[1],0);
        return uVar2;
      }
      if (uVar1 == 9) {
        uVar2 = FUN_710073b4b0(param_1[1]);
        return uVar2;
      }
      if (uVar1 == 7) {
        uVar2 = FUN_7100742540(param_1[1],1);
        return uVar2;
      }
    }
  }
  return 0xffffaf00;
}



// ===== FUN_7100738240 @ 7100738240 (size=112) =====

undefined8 FUN_7100738240(long *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    uVar1 = *(uint *)(*param_1 + 8);
    if (uVar1 < 7) {
      if (4 < uVar1) {
        uVar2 = FUN_7100742100(param_1[1]);
        return uVar2;
      }
      if (uVar1 == 3) {
        uVar2 = FUN_7100739120(param_1[1]);
        return uVar2;
      }
      if (uVar1 == 4) {
        uVar2 = FUN_71007413b0(param_1[1]);
        return uVar2;
      }
    }
    else {
      if (uVar1 < 9) {
        uVar2 = FUN_7100742e10(param_1[1]);
        return uVar2;
      }
      if (uVar1 == 9) {
        uVar2 = FUN_710073cb90(param_1[1]);
        return uVar2;
      }
    }
  }
  return 0xffffaf00;
}



// ===== FUN_71007382b0 @ 71007382b0 (size=112) =====

undefined8 FUN_71007382b0(long *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    uVar1 = *(uint *)(*param_1 + 8);
    if (uVar1 < 7) {
      if (4 < uVar1) {
        uVar2 = FUN_7100742220(param_1[1]);
        return uVar2;
      }
      if (uVar1 == 3) {
        uVar2 = FUN_7100739240(param_1[1]);
        return uVar2;
      }
      if (uVar1 == 4) {
        uVar2 = FUN_71007414d0(param_1[1]);
        return uVar2;
      }
    }
    else {
      if (uVar1 < 9) {
        uVar2 = FUN_7100742f30(param_1[1]);
        return uVar2;
      }
      if (uVar1 == 9) {
        uVar2 = FUN_710073ccb0(param_1[1]);
        return uVar2;
      }
    }
  }
  return 0xffffaf00;
}



// ===== FUN_7100738320 @ 7100738320 (size=136) =====

undefined8 FUN_7100738320(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 8);
    if (uVar1 == 6) {
      uVar2 = FUN_7100742450(param_2,param_3,param_4,0);
      return uVar2;
    }
    if (uVar1 < 7) {
      if (uVar1 == 4) {
        uVar2 = FUN_7100741680();
        return uVar2;
      }
      if (uVar1 == 5) {
        uVar2 = FUN_7100742450(param_2,param_3,param_4,1);
        return uVar2;
      }
      if (uVar1 == 3) {
        uVar2 = FUN_71007393d0();
        return uVar2;
      }
    }
    else {
      if (uVar1 == 8) {
        uVar2 = FUN_7100743300();
        return uVar2;
      }
      if (uVar1 == 9) {
        uVar2 = FUN_710073ce20();
        return uVar2;
      }
      if (uVar1 == 7) {
        uVar2 = FUN_7100743300();
        return uVar2;
      }
    }
  }
  return 0xffffaf00;
}



// ===== FUN_71007383b0 @ 71007383b0 (size=344) =====

int FUN_71007383b0(long *param_1,undefined1 *param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 auStack_40 [64];
  
  if (param_1 == (long *)0x0) {
    return -0x5100;
  }
  if ((*param_1 == 0) || (lVar4 = param_1[2], lVar4 == 0)) {
    return -0x5100;
  }
  uVar3 = (ulong)*(byte *)(*param_1 + 0xd);
  puVar5 = param_2;
  if (uVar3 < param_3) {
    iVar2 = FUN_71007381a0();
    puVar5 = auStack_40;
    if (iVar2 != 0) goto LAB_710073845c;
    iVar2 = FUN_7100738240(param_1,param_2,param_3);
    if (iVar2 != 0) goto LAB_710073845c;
    iVar2 = FUN_71007382b0(param_1,puVar5);
    if (iVar2 != 0) goto LAB_710073845c;
    lVar4 = param_1[2];
    param_3 = (ulong)*(byte *)(*param_1 + 0xc);
    uVar3 = (ulong)*(byte *)(*param_1 + 0xd);
  }
  lVar1 = lVar4 + uVar3;
  FUN_7100808340(lVar4,0x36);
  FUN_7100808340(lVar1,0x5c,*(undefined1 *)(*param_1 + 0xd));
  uVar3 = 0;
  if (param_3 != 0) {
    do {
      *(byte *)(lVar4 + uVar3) = *(byte *)(lVar4 + uVar3) ^ puVar5[uVar3];
      *(byte *)(lVar1 + uVar3) = *(byte *)(lVar1 + uVar3) ^ puVar5[uVar3];
      uVar3 = uVar3 + 1;
    } while (param_3 != uVar3);
  }
  iVar2 = FUN_71007381a0(param_1);
  if (iVar2 == 0) {
    iVar2 = FUN_7100738240(param_1,lVar4,*(undefined1 *)(*param_1 + 0xd));
  }
LAB_710073845c:
  FUN_710073b460(auStack_40,0x40);
  return iVar2;
}



// ===== FUN_7100738510 @ 7100738510 (size=32) =====

undefined8 FUN_7100738510(long *param_1)

{
  undefined8 uVar1;
  
  if (((param_1 != (long *)0x0) && (*param_1 != 0)) && (param_1[2] != 0)) {
    uVar1 = FUN_7100738240();
    return uVar1;
  }
  return 0xffffaf00;
}



// ===== FUN_7100738530 @ 7100738530 (size=188) =====

undefined8 FUN_7100738530(long *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [64];
  
  if (param_1 == (long *)0x0) {
    return 0xffffaf00;
  }
  if ((*param_1 == 0) || (lVar3 = param_1[2], lVar3 == 0)) {
    uVar2 = 0xffffaf00;
  }
  else {
    bVar1 = *(byte *)(*param_1 + 0xd);
    uVar2 = FUN_71007382b0(param_1,auStack_40);
    if (((((int)uVar2 == 0) && (uVar2 = FUN_71007381a0(param_1), (int)uVar2 == 0)) &&
        (uVar2 = FUN_7100738240(param_1,lVar3 + (ulong)bVar1,*(undefined1 *)(*param_1 + 0xd)),
        (int)uVar2 == 0)) &&
       (uVar2 = FUN_7100738240(param_1,auStack_40,*(undefined1 *)(*param_1 + 0xc)), (int)uVar2 == 0)
       ) {
      uVar2 = FUN_71007382b0(param_1,param_2);
    }
  }
  return uVar2;
}



// ===== FUN_71007385f0 @ 71007385f0 (size=100) =====

undefined8 FUN_71007385f0(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 == (long *)0x0) {
    return 0xffffaf00;
  }
  if ((*param_1 == 0) || (lVar2 = param_1[2], lVar2 == 0)) {
    uVar1 = 0xffffaf00;
  }
  else {
    uVar1 = FUN_71007381a0();
    if ((int)uVar1 == 0) {
      uVar1 = FUN_7100738240(param_1,lVar2,*(undefined1 *)(*param_1 + 0xd));
      return uVar1;
    }
  }
  return uVar1;
}



// ===== FUN_7100738660 @ 7100738660 (size=20) =====

undefined1 FUN_7100738660(long param_1)

{
  if (param_1 != 0) {
    return *(undefined1 *)(param_1 + 0xc);
  }
  return 0;
}



// ===== FUN_7100738680 @ 7100738680 (size=24) =====

void FUN_7100738680(undefined8 *param_1)

{
  param_1[10] = 0;
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
  return;
}



// ===== FUN_71007386a0 @ 71007386a0 (size=16) =====

void FUN_71007386a0(long param_1)

{
  if (param_1 != 0) {
    FUN_710073b460(param_1,0x58);
    return;
  }
  return;
}



// ===== FUN_71007386b0 @ 71007386b0 (size=52) =====

undefined8 FUN_71007386b0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xefcdab8967452301;
  param_1[2] = 0x1032547698badcfe;
  return 0;
}



// ===== FUN_71007386f0 @ 71007386f0 (size=2608) =====

undefined8 FUN_71007386f0(long param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int local_50;
  int local_4c;
  int iStack_48;
  int local_44;
  int iStack_40;
  int local_3c;
  int iStack_38;
  int local_34;
  int iStack_30;
  int local_2c;
  int iStack_28;
  int local_24;
  int iStack_20;
  int local_1c;
  int iStack_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  uint local_4;
  
  local_50 = *param_2;
  local_4c = param_2[1];
  iStack_48 = param_2[2];
  local_44 = param_2[3];
  iStack_40 = param_2[4];
  local_3c = param_2[5];
  iStack_38 = param_2[6];
  local_34 = param_2[7];
  iStack_30 = param_2[8];
  local_2c = param_2[9];
  iStack_28 = param_2[10];
  local_24 = param_2[0xb];
  iStack_20 = param_2[0xc];
  local_1c = param_2[0xd];
  iStack_18 = param_2[0xe];
  local_14 = param_2[0xf];
  uVar5 = *(uint *)(param_1 + 0x10);
  uVar6 = *(uint *)(param_1 + 0x14);
  uVar7 = *(uint *)(param_1 + 0xc);
  uVar1 = ((uVar5 ^ uVar6) & uVar7 ^ uVar6) + local_50 + *(int *)(param_1 + 8) + -0x28955b88;
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar7;
  uVar2 = ((uVar7 ^ uVar5) & uVar1 ^ uVar5) + local_4c + uVar6 + 0xe8c7b756;
  uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
  uVar3 = ((uVar7 ^ uVar1) & uVar2 ^ uVar7) + iStack_48 + uVar5 + 0x242070db;
  uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
  uVar4 = ((uVar1 ^ uVar2) & uVar3 ^ uVar1) + local_44 + uVar7 + 0xc1bdceee;
  uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
  uVar1 = ((uVar2 ^ uVar3) & uVar4 ^ uVar2) + uVar1 + iStack_40 + -0xa83f051;
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4;
  uVar2 = ((uVar3 ^ uVar4) & uVar1 ^ uVar3) + uVar2 + local_3c + 0x4787c62a;
  uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
  uVar3 = ((uVar4 ^ uVar1) & uVar2 ^ uVar4) + uVar3 + iStack_38 + -0x57cfb9ed;
  uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
  uVar4 = ((uVar1 ^ uVar2) & uVar3 ^ uVar1) + uVar4 + local_34 + -0x2b96aff;
  uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
  uVar1 = ((uVar2 ^ uVar3) & uVar4 ^ uVar2) + uVar1 + iStack_30 + 0x698098d8;
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4;
  uVar2 = ((uVar3 ^ uVar4) & uVar1 ^ uVar3) + uVar2 + local_2c + -0x74bb0851;
  uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
  uVar3 = ((uVar4 ^ uVar1) & uVar2 ^ uVar4) + uVar3 + iStack_28 + -0xa44f;
  uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
  uVar4 = ((uVar1 ^ uVar2) & uVar3 ^ uVar1) + uVar4 + local_24 + -0x76a32842;
  uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
  uVar1 = ((uVar2 ^ uVar3) & uVar4 ^ uVar2) + uVar1 + iStack_20 + 0x6b901122;
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4;
  uVar2 = ((uVar3 ^ uVar4) & uVar1 ^ uVar3) + uVar2 + local_1c + -0x2678e6d;
  uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
  uVar3 = ((uVar4 ^ uVar1) & uVar2 ^ uVar4) + uVar3 + iStack_18 + -0x5986bc72;
  uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
  uVar4 = ((uVar1 ^ uVar2) & uVar3 ^ uVar1) + uVar4 + local_14 + 0x49b40821;
  uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
  uVar1 = ((uVar3 ^ uVar4) & uVar2 ^ uVar3) + uVar1 + local_4c + -0x9e1da9e;
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
  uVar2 = ((uVar4 ^ uVar1) & uVar3 ^ uVar4) + uVar2 + iStack_38 + -0x3fbf4cc0;
  uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
  uVar3 = ((uVar1 ^ uVar2) & uVar4 ^ uVar1) + uVar3 + local_24 + 0x265e5a51;
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
  uVar4 = ((uVar2 ^ uVar3) & uVar1 ^ uVar2) + uVar4 + local_50 + -0x16493856;
  uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
  uVar1 = ((uVar3 ^ uVar4) & uVar2 ^ uVar3) + uVar1 + local_3c + -0x29d0efa3;
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
  uVar2 = ((uVar4 ^ uVar1) & uVar3 ^ uVar4) + uVar2 + iStack_28 + 0x2441453;
  uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
  uVar3 = ((uVar1 ^ uVar2) & uVar4 ^ uVar1) + uVar3 + local_14 + -0x275e197f;
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
  uVar4 = ((uVar2 ^ uVar3) & uVar1 ^ uVar2) + uVar4 + iStack_40 + -0x182c0438;
  uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
  uVar1 = ((uVar3 ^ uVar4) & uVar2 ^ uVar3) + uVar1 + local_2c + 0x21e1cde6;
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
  uVar2 = ((uVar4 ^ uVar1) & uVar3 ^ uVar4) + uVar2 + iStack_18 + -0x3cc8f82a;
  uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
  uVar3 = ((uVar1 ^ uVar2) & uVar4 ^ uVar1) + uVar3 + local_44 + -0xb2af279;
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
  uVar4 = ((uVar2 ^ uVar3) & uVar1 ^ uVar2) + uVar4 + iStack_30 + 0x455a14ed;
  uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
  uVar1 = ((uVar3 ^ uVar4) & uVar2 ^ uVar3) + uVar1 + local_1c + -0x561c16fb;
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
  uVar2 = ((uVar4 ^ uVar1) & uVar3 ^ uVar4) + uVar2 + iStack_48 + -0x3105c08;
  uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
  uVar3 = ((uVar1 ^ uVar2) & uVar4 ^ uVar1) + uVar3 + local_34 + 0x676f02d9;
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
  uVar4 = (uVar1 & (uVar2 ^ uVar3) ^ uVar2) + uVar4 + iStack_20 + -0x72d5b376;
  uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
  uVar1 = (uVar2 ^ uVar3 ^ uVar4) + uVar1 + local_3c + -0x5c6be;
  uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
  uVar2 = (uVar3 ^ uVar4 ^ uVar1) + uVar2 + iStack_30 + -0x788e097f;
  uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
  uVar3 = (uVar4 ^ uVar1 ^ uVar2) + uVar3 + local_24 + 0x6d9d6122;
  uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
  uVar4 = (uVar1 ^ uVar2 ^ uVar3) + uVar4 + iStack_18 + -0x21ac7f4;
  uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
  uVar1 = (uVar2 ^ uVar3 ^ uVar4) + uVar1 + local_4c + -0x5b4115bc;
  uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
  uVar2 = (uVar3 ^ uVar4 ^ uVar1) + uVar2 + iStack_40 + 0x4bdecfa9;
  uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
  uVar3 = (uVar4 ^ uVar1 ^ uVar2) + uVar3 + local_34 + -0x944b4a0;
  uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
  uVar4 = (uVar1 ^ uVar2 ^ uVar3) + uVar4 + iStack_28 + -0x41404390;
  uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
  uVar1 = (uVar2 ^ uVar3 ^ uVar4) + uVar1 + local_1c + 0x289b7ec6;
  uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
  uVar2 = (uVar3 ^ uVar4 ^ uVar1) + uVar2 + local_50 + -0x155ed806;
  uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
  uVar3 = (uVar4 ^ uVar1 ^ uVar2) + uVar3 + local_44 + -0x2b10cf7b;
  uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
  uVar4 = (uVar1 ^ uVar2 ^ uVar3) + uVar4 + iStack_38 + 0x4881d05;
  uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
  uVar1 = (uVar2 ^ uVar3 ^ uVar4) + uVar1 + local_2c + -0x262b2fc7;
  uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
  uVar2 = (uVar3 ^ uVar4 ^ uVar1) + uVar2 + iStack_20 + -0x1924661b;
  uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
  uVar3 = (uVar4 ^ uVar1 ^ uVar2) + uVar3 + local_14 + 0x1fa27cf8;
  uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
  uVar4 = (uVar1 ^ uVar2 ^ uVar3) + uVar4 + iStack_48 + -0x3b53a99b;
  uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
  uVar1 = ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3) + uVar1 + local_50 + -0xbd6ddbc;
  uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
  uVar2 = ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4) + uVar2 + local_34 + 0x432aff97;
  uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
  uVar3 = ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1) + uVar3 + iStack_18 + -0x546bdc59;
  uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
  uVar4 = ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2) + uVar4 + local_3c + -0x36c5fc7;
  uVar4 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar3;
  uVar1 = ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3) + uVar1 + iStack_20 + 0x655b59c3;
  uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
  uVar2 = ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4) + uVar2 + local_44 + -0x70f3336e;
  uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
  uVar3 = ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1) + uVar3 + iStack_28 + -0x100b83;
  uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
  uVar4 = ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2) + uVar4 + local_4c + -0x7a7ba22f;
  uVar4 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar3;
  uVar1 = ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3) + uVar1 + iStack_30 + 0x6fa87e4f;
  uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
  uVar2 = ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4) + uVar2 + local_14 + -0x1d31920;
  uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
  uVar3 = ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1) + uVar3 + iStack_38 + -0x5cfebcec;
  uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
  uVar4 = ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2) + uVar4 + local_1c + 0x4e0811a1;
  uVar4 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar3;
  uVar1 = ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3) + uVar1 + iStack_40 + -0x8ac817e;
  local_10 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
  uVar1 = ((local_10 | uVar3 ^ 0xffffffff) ^ uVar4) + uVar2 + local_24 + -0x42c50dcb;
  local_4 = (uVar1 >> 0x16 | uVar1 * 0x400) + local_10;
  uVar1 = ((local_4 | uVar4 ^ 0xffffffff) ^ local_10) + uVar3 + iStack_48 + 0x2ad7d2bb;
  local_8 = (uVar1 >> 0x11 | uVar1 * 0x8000) + local_4;
  *(uint *)(param_1 + 0x10) = uVar5 + local_8;
  *(uint *)(param_1 + 0x14) = uVar6 + local_4;
  uVar1 = ((local_8 | local_10 ^ 0xffffffff) ^ local_4) + uVar4 + local_2c + -0x14792c6f;
  local_c = (uVar1 >> 0xb | uVar1 * 0x200000) + local_8;
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + local_10;
  *(uint *)(param_1 + 0xc) = uVar7 + local_c;
  FUN_710073b460(&local_50,0x50);
  return 0;
}



// ===== FUN_7100739120 @ 7100739120 (size=284) =====

undefined8 FUN_7100739120(uint *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar1 = *param_1;
  uVar3 = uVar1 & 0x3f;
  uVar4 = (ulong)(0x40 - uVar3);
  *param_1 = uVar1 + (uint)param_3;
  if (CARRY4(uVar1,(uint)param_3)) {
    param_1[1] = param_1[1] + 1;
  }
  if (uVar3 != 0 && uVar4 <= param_3) {
    FUN_710080f900((long)(param_1 + 6) + (ulong)uVar3,param_2,uVar4);
    uVar2 = FUN_71007386f0(param_1,param_1 + 6);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    param_3 = param_3 - uVar4;
    param_2 = param_2 + uVar4;
    uVar3 = 0;
    goto joined_r0x0071007391f0;
  }
  if (0x3f < param_3) {
    do {
      param_3 = param_3 - 0x40;
      uVar2 = FUN_71007386f0(param_1,param_2);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      param_2 = param_2 + 0x40;
joined_r0x0071007391f0:
    } while (0x3f < param_3);
    if (param_3 == 0) {
      return 0;
    }
  }
  FUN_710080f900((long)param_1 + (ulong)uVar3 + 0x18,param_2,param_3);
  return 0;
}



// ===== FUN_7100739240 @ 7100739240 (size=392) =====

void FUN_7100739240(ulong *param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)*param_1 & 0x3f;
  uVar1 = uVar2 + 1;
  *(undefined1 *)((long)param_1 + (ulong)uVar2 + 0x18) = 0x80;
  if (uVar1 < 0x39) {
    FUN_7100808340((long)param_1 + (ulong)uVar1 + 0x18,0,0x38 - uVar1);
  }
  else {
    FUN_7100808340((long)(param_1 + 3) + (ulong)uVar1,0,0x40 - uVar1);
    iVar3 = FUN_71007386f0(param_1,param_1 + 3);
    if (iVar3 != 0) {
      return;
    }
    *(undefined1 (*) [16])(param_1 + 3) = ZEXT216(0);
    *(undefined1 (*) [16])(param_1 + 5) = ZEXT216(0);
    *(undefined1 (*) [16])(param_1 + 7) = ZEXT216(0);
    param_1[9] = 0;
  }
  uVar1 = (uint)*param_1;
  uVar2 = *(uint *)((long)param_1 + 4);
  param_1[10] = CONCAT17((char)(uVar2 >> 0x15),
                         CONCAT16((char)(uVar2 >> 0xd),
                                  CONCAT15((char)(uVar2 >> 5),
                                           CONCAT14((char)(*param_1 >> 0x1d),
                                                    CONCAT13((char)(uVar1 >> 0x15),
                                                             CONCAT12((char)(uVar1 >> 0xd),
                                                                      CONCAT11((char)(uVar1 >> 5),
                                                                               (char)uVar1 << 3)))))
                                 ));
  iVar3 = FUN_71007386f0(param_1,param_1 + 3);
  if (iVar3 == 0) {
    *param_2 = (char)(uint)param_1[1];
    param_2[1] = (char)((uint)param_1[1] >> 8);
    param_2[2] = (char)*(undefined2 *)((long)param_1 + 10);
    param_2[3] = *(undefined1 *)((long)param_1 + 0xb);
    param_2[4] = (char)*(uint *)((long)param_1 + 0xc);
    param_2[5] = (char)(*(uint *)((long)param_1 + 0xc) >> 8);
    param_2[6] = (char)*(undefined2 *)((long)param_1 + 0xe);
    param_2[7] = *(undefined1 *)((long)param_1 + 0xf);
    param_2[8] = (char)(uint)param_1[2];
    param_2[9] = (char)((uint)param_1[2] >> 8);
    param_2[10] = (char)*(undefined2 *)((long)param_1 + 0x12);
    param_2[0xb] = *(undefined1 *)((long)param_1 + 0x13);
    param_2[0xc] = (char)*(uint *)((long)param_1 + 0x14);
    param_2[0xd] = (char)(*(uint *)((long)param_1 + 0x14) >> 8);
    param_2[0xe] = (char)*(undefined2 *)((long)param_1 + 0x16);
    param_2[0xf] = *(undefined1 *)((long)param_1 + 0x17);
  }
  return;
}



// ===== FUN_71007393d0 @ 71007393d0 (size=164) =====

int FUN_71007393d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_58 [88];
  
  FUN_7100738680(auStack_58);
  iVar1 = FUN_71007386b0(auStack_58);
  if ((iVar1 == 0) && (iVar1 = FUN_7100739120(auStack_58,param_1,param_2), iVar1 == 0)) {
    iVar1 = FUN_7100739240(auStack_58,param_3);
    FUN_71007386a0(auStack_58);
    return iVar1;
  }
  FUN_71007386a0(auStack_58);
  return iVar1;
}



// ===== FUN_7100739480 @ 7100739480 (size=8) =====

void FUN_7100739480(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// ===== FUN_7100739490 @ 7100739490 (size=64) =====

void FUN_7100739490(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if (*param_1 != 0) {
      (**(code **)(*param_1 + 0x50))(param_1[1]);
    }
    FUN_710073b460(param_1,0x10);
    return;
  }
  return;
}



// ===== FUN_71007394d0 @ 71007394d0 (size=84) =====

undefined * FUN_71007394d0(uint param_1)

{
  undefined *puVar1;
  
  if (param_1 == 3) {
    return &DAT_7100ae6470;
  }
  if (param_1 < 4) {
    if (param_1 != 1) {
      puVar1 = &DAT_7100ae64d0;
      if (param_1 != 2) {
        puVar1 = (undefined *)0x0;
      }
      return puVar1;
    }
    return &DAT_7100ae6530;
  }
  puVar1 = &DAT_7100ae6410;
  if (param_1 != 4) {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}



// ===== FUN_7100739530 @ 7100739530 (size=92) =====

undefined8 FUN_7100739530(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    if (*param_1 == 0) {
      lVar1 = (**(code **)(param_2 + 0x48))();
      param_1[1] = lVar1;
      if (lVar1 == 0) {
        uVar2 = 0xffffc080;
      }
      else {
        uVar2 = 0;
        *param_1 = param_2;
      }
    }
    else {
      uVar2 = 0xffffc180;
    }
    return uVar2;
  }
  return 0xffffc180;
}



// ===== FUN_7100739590 @ 7100739590 (size=256) =====

undefined8
FUN_7100739590(long *param_1,int param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return 0xffffc180;
  }
  if (param_4 == 0) {
    lVar3 = FUN_7100737ec0(param_2);
    if (lVar3 == 0) {
      return 0xffffc180;
    }
  }
  else {
    if (param_2 == 0) goto LAB_7100739608;
    lVar3 = FUN_7100737ec0(param_2);
    if (lVar3 == 0) {
      return 0xffffc180;
    }
    uVar1 = FUN_7100738660();
    if (param_4 != (uVar1 & 0xff)) {
      return 0xffffc180;
    }
  }
  param_4 = FUN_7100738660(lVar3);
  lVar3 = *param_1;
  param_4 = param_4 & 0xff;
LAB_7100739608:
  if (*(code **)(lVar3 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00710073964c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar3 + 0x28))
                      (param_1[1],param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0xffffc100;
}



// ===== FUN_7100739690 @ 7100739690 (size=32) =====

void FUN_7100739690(void)

{
  FUN_7100739590();
  return;
}



// ===== FUN_71007396b0 @ 71007396b0 (size=28) =====

undefined4 FUN_71007396b0(undefined8 *param_1)

{
  if ((param_1 != (undefined8 *)0x0) && ((undefined4 *)*param_1 != (undefined4 *)0x0)) {
    return *(undefined4 *)*param_1;
  }
  return 0;
}



// ===== FUN_7100739780 @ 7100739780 (size=36) =====

void FUN_7100739780(undefined8 param_1)

{
  FUN_710073f6d0();
  FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007397b0 @ 71007397b0 (size=60) =====

long FUN_71007397b0(void)

{
  long lVar1;
  
  lVar1 = FUN_710080e9e0(1,0x150);
  if (lVar1 != 0) {
    FUN_710073d7f0(lVar1,0,0);
  }
  return lVar1;
}



// ===== FUN_7100739800 @ 7100739800 (size=24) =====

long FUN_7100739800(void)

{
  long lVar1;
  
  lVar1 = FUN_710073d840();
  return lVar1 << 3;
}



// ===== FUN_7100739820 @ 7100739820 (size=152) =====

undefined8
FUN_7100739820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              ulong *param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_710073d840();
  *param_5 = uVar1;
  if (uVar1 <= param_6) {
    uVar2 = FUN_710073eb90(param_1,param_7,param_8,0,param_3,param_2,param_4);
    return uVar2;
  }
  return 0xffffbc00;
}



// ===== FUN_71007398c0 @ 71007398c0 (size=152) =====

undefined8
FUN_71007398c0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_710073d840();
  if (lVar1 == param_3) {
    uVar2 = FUN_710073ef90(param_1,param_7,param_8,1,param_5,param_2,param_4,param_6);
    return uVar2;
  }
  return 0xffffbf80;
}



// ===== FUN_71007399f0 @ 71007399f0 (size=172) =====

ulong FUN_71007399f0(undefined8 param_1,int param_2,undefined8 param_3,ulong param_4,
                    undefined8 param_5,ulong param_6)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = FUN_710073d840();
  if ((param_2 == 0 && 0xfffffffe < param_4) && (param_2 != 0 || param_4 != 0xffffffff)) {
    uVar3 = 0xffffc180;
  }
  else if (param_6 < uVar2) {
    uVar3 = 0xffffbc80;
  }
  else {
    uVar3 = FUN_710073f6b0(param_1,0,0,0,param_2,param_4 & 0xffffffff,param_3,param_5);
    if ((int)uVar3 == 0) {
      uVar1 = 0;
      if (uVar2 < param_6) {
        uVar1 = 0xffffc700;
      }
      uVar3 = (ulong)uVar1;
    }
  }
  return uVar3;
}



// ===== FUN_7100739aa0 @ 7100739aa0 (size=36) =====

void FUN_7100739aa0(undefined8 param_1)

{
  FUN_71007318b0();
  FUN_710081c200(param_1);
  return;
}



// ===== FUN_7100739ad0 @ 7100739ad0 (size=52) =====

long FUN_7100739ad0(void)

{
  long lVar1;
  
  lVar1 = FUN_710080e9e0(1,0x158);
  if (lVar1 != 0) {
    FUN_7100731790();
  }
  return lVar1;
}



// ===== FUN_7100739b20 @ 7100739b20 (size=52) =====

long FUN_7100739b20(void)

{
  long lVar1;
  
  lVar1 = FUN_710080e9e0(1,0x158);
  if (lVar1 != 0) {
    thunk_FUN_7100731790();
  }
  return lVar1;
}



// ===== FUN_7100739b60 @ 7100739b60 (size=36) =====

void FUN_7100739b60(undefined8 param_1)

{
  FUN_7100730450();
  FUN_710081c200(param_1);
  return;
}



// ===== FUN_7100739ba0 @ 7100739ba0 (size=176) =====

int FUN_7100739ba0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined1 auStack_158 [344];
  
  thunk_FUN_7100731790(auStack_158);
  iVar1 = FUN_7100730460(auStack_158,param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_71007302a0(auStack_158,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  FUN_7100730450(auStack_158);
  return iVar1;
}



// ===== FUN_7100739c50 @ 7100739c50 (size=52) =====

int FUN_7100739c50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  
  iVar1 = FUN_71007303d0(param_1,param_3,param_4,param_5,param_6);
  if (iVar1 == -0x4c00) {
    iVar1 = -0x3900;
  }
  return iVar1;
}



// ===== FUN_7100739c90 @ 7100739c90 (size=180) =====

int FUN_7100739c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined1 auStack_158 [344];
  
  thunk_FUN_7100731790(auStack_158);
  iVar1 = FUN_7100730460(auStack_158,param_1);
  if (iVar1 != 0) {
    FUN_7100730450(auStack_158);
    return iVar1;
  }
  iVar1 = FUN_71007303d0(auStack_158,param_3,param_4,param_5,param_6);
  if (iVar1 == -0x4c00) {
    iVar1 = -0x3900;
  }
  FUN_7100730450(auStack_158);
  return iVar1;
}



// ===== FUN_7100739d50 @ 7100739d50 (size=60) =====

ulong FUN_7100739d50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = FUN_7100745170();
  if ((int)uVar2 == 0) {
    iVar1 = FUN_710072a2a0(param_3,0);
    uVar3 = 0;
    if (iVar1 == 0) {
      uVar3 = 0xffffc300;
    }
    uVar2 = (ulong)uVar3;
  }
  return uVar2;
}



// ===== FUN_7100739d90 @ 7100739d90 (size=164) =====

ulong FUN_7100739d90(undefined8 param_1,undefined8 param_2,int *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 auStack_18 [24];
  
  param_4[0] = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  param_4[3] = 0;
  param_4[4] = 0;
  param_4[5] = 0;
  iVar1 = FUN_7100745220(param_1,param_2,auStack_18);
  if (iVar1 == 0) {
    uVar3 = FUN_7100747160(auStack_18,param_3);
    if ((int)uVar3 == 0) {
      if (*param_3 == 1) {
        if (*param_4 == 0 || *param_4 == 5) {
          uVar2 = 0;
          if (*(long *)(param_4 + 2) != 0) {
            uVar2 = 0xffffc580;
          }
          return (ulong)uVar2;
        }
        uVar3 = 0xffffc580;
      }
    }
    else {
      uVar3 = 0xffffc380;
    }
  }
  else {
    uVar3 = (ulong)(iVar1 - 0x3a80);
  }
  return uVar3;
}



// ===== FUN_7100739e40 @ 7100739e40 (size=1348) =====

int FUN_7100739e40(int *param_1,int *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  int local_1fc;
  byte *local_1f8;
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  long local_140;
  long local_138;
  long local_f8;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  long local_48;
  long local_40;
  
  if (*param_1 == 6) {
    iVar4 = FUN_71007471f0(param_1,&local_1f8);
    if (iVar4 != 0) {
      return -0x3a00;
    }
    goto LAB_710073a084;
  }
  FUN_7100731730(auStack_1f0);
  local_1f8 = *(byte **)(param_1 + 4);
  pbVar1 = local_1f8 + *(long *)(param_1 + 2);
  iVar3 = FUN_7100745160(&local_1f8,pbVar1,&local_1fc);
  iVar4 = iVar3 + -0x3d00;
  if (iVar3 == 0) {
    if (2 < local_1fc - 1U) goto LAB_710073a350;
    iVar4 = FUN_7100745050(&local_1f8,pbVar1,&local_f8,0x30);
    if (iVar4 != 0) goto LAB_7100739f30;
    pbVar2 = local_1f8 + local_f8;
    iVar4 = FUN_7100745050(&local_1f8,pbVar2,&local_f8,6);
    if (iVar4 != 0) {
LAB_710073a0b8:
      FUN_7100731800(auStack_1f0);
      return iVar4;
    }
    if ((((local_f8 != 7) || (*(int *)local_1f8 != -0x31b779d6)) ||
        (*(short *)(local_1f8 + 4) != 0x13d)) || (local_1f8[6] != 1)) {
      iVar4 = -0x3980;
      goto LAB_7100739f30;
    }
    local_1f8 = local_1f8 + 7;
    iVar4 = FUN_7100745170(&local_1f8,pbVar2,auStack_1e8);
    if (iVar4 != 0) {
LAB_7100739f54:
      iVar4 = iVar4 + -0x3d00;
      goto LAB_7100739f60;
    }
    local_140 = FUN_7100729ba0(auStack_1e8);
    if (pbVar2 != local_1f8) {
LAB_710073a360:
      iVar4 = -0x3d66;
      goto LAB_7100739f30;
    }
    iVar4 = FUN_7100745050(&local_1f8,pbVar1,&local_f8,0x30);
    if (iVar4 != 0) goto LAB_710073a0b8;
    pbVar2 = local_1f8 + local_f8;
    iVar4 = FUN_7100745050(&local_1f8,pbVar2,&local_f8,4);
    if ((iVar4 != 0) || (iVar4 = FUN_7100729cb0(auStack_1d0,local_1f8,local_f8), iVar4 != 0)) {
LAB_710073a320:
      iVar4 = iVar4 + -0x3d00;
      goto LAB_7100739f60;
    }
    local_1f8 = local_1f8 + local_f8;
    iVar4 = FUN_7100745050(&local_1f8,pbVar2,&local_f8,4);
    if ((iVar4 != 0) || (iVar4 = FUN_7100729cb0(auStack_1b8,local_1f8,local_f8), iVar4 != 0))
    goto LAB_710073a320;
    local_1f8 = local_1f8 + local_f8;
    iVar4 = FUN_7100745050(&local_1f8,pbVar2,&local_f8,3);
    if (iVar4 == 0) {
      local_1f8 = local_1f8 + local_f8;
    }
    if (pbVar2 != local_1f8) goto LAB_710073a360;
    iVar4 = FUN_7100745050(&local_1f8,pbVar1,&local_f8,4);
    if (iVar4 != 0) goto LAB_7100739f54;
    iVar4 = FUN_71007326f0(auStack_1f0,auStack_1a0,local_1f8,local_f8);
    if (iVar4 != 0) {
      if (iVar4 == -0x4e80) {
        if (1 < (byte)(*local_1f8 - 2)) {
          FUN_7100731800(auStack_1f0);
          return -0x3d00;
        }
        lVar6 = FUN_7100729c10(auStack_1e8);
        if (((lVar6 + 1 == local_f8) &&
            (iVar4 = FUN_7100729cb0(auStack_1a0,local_1f8 + 1,lVar6), iVar4 == 0)) &&
           ((iVar4 = FUN_7100729a10(auStack_188,(long)(int)(*local_1f8 - 2)), iVar4 == 0 &&
            (iVar4 = FUN_7100729a10(auStack_170,1), iVar4 == 0)))) goto LAB_710073a2e0;
      }
LAB_710073a350:
      iVar4 = -0x3d00;
      goto LAB_7100739f30;
    }
LAB_710073a2e0:
    local_1f8 = local_1f8 + local_f8;
    iVar4 = FUN_7100745170(&local_1f8,pbVar1,auStack_158);
    if (iVar4 != 0) goto LAB_7100739f54;
    local_138 = FUN_7100729ba0(auStack_158);
  }
  else {
LAB_7100739f60:
    if (iVar4 != 0) {
LAB_7100739f30:
      FUN_7100731800(auStack_1f0);
      return iVar4;
    }
  }
  FUN_7100731730(&local_f8);
  piVar5 = (int *)FUN_7100731650();
  iVar4 = *piVar5;
  while (iVar4 != 0) {
    FUN_7100731800(&local_f8);
    iVar4 = FUN_7100735010(&local_f8,*piVar5);
    if (iVar4 != 0) {
      FUN_7100731800(&local_f8);
      local_1f8 = (byte *)CONCAT44(local_1f8._4_4_,*piVar5);
      FUN_7100731800(auStack_1f0);
      return iVar4;
    }
    if (((((local_140 == local_48) && (local_138 == local_40)) &&
         (iVar4 = FUN_710072a1c0(auStack_1e8,auStack_f0), iVar4 == 0)) &&
        ((iVar4 = FUN_710072a1c0(auStack_1d0,auStack_d8), iVar4 == 0 &&
         (iVar4 = FUN_710072a1c0(auStack_1b8,auStack_c0), iVar4 == 0)))) &&
       ((iVar4 = FUN_710072a1c0(auStack_158,auStack_60), iVar4 == 0 &&
        ((iVar4 = FUN_710072a1c0(auStack_1a0,auStack_a8), iVar4 == 0 &&
         (iVar4 = FUN_710072a1c0(auStack_170,auStack_78), iVar4 == 0)))))) {
      iVar4 = FUN_7100729a90(auStack_188,0);
      iVar3 = FUN_7100729a90(auStack_90,0);
      if (iVar4 == iVar3) break;
    }
    piVar5 = piVar5 + 1;
    iVar4 = *piVar5;
  }
  FUN_7100731800(&local_f8);
  local_1f8 = (byte *)CONCAT44(local_1f8._4_4_,*piVar5);
  if (*piVar5 == 0) {
    FUN_7100731800(auStack_1f0);
    return -0x4e80;
  }
  FUN_7100731800(auStack_1f0);
LAB_710073a084:
  if ((*param_2 != 0) && (*param_2 != (int)local_1f8)) {
    return -0x3d00;
  }
  iVar4 = FUN_7100735010(param_2);
  return iVar4;
}



// ===== FUN_710073a390 @ 710073a390 (size=748) =====

int FUN_710073a390(long param_1,byte *param_2,long param_3)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  int local_2c;
  long local_28;
  byte *local_20;
  uint local_18 [2];
  long local_10;
  byte *local_8;
  
  local_20 = param_2;
  iVar4 = FUN_7100745050(&local_20,param_2 + param_3,&local_28,0x30);
  if (iVar4 != 0) {
    return iVar4 + -0x3d00;
  }
  pbVar2 = local_20 + local_28;
  iVar4 = FUN_7100745160(&local_20,pbVar2,&local_2c);
  if (iVar4 != 0) goto LAB_710073a4e4;
  if (local_2c != 1) {
    return -0x3d80;
  }
  iVar4 = FUN_7100745050(&local_20,pbVar2,&local_28,4);
  if (iVar4 != 0) goto LAB_710073a430;
  lVar1 = param_1 + 0xf8;
  iVar4 = FUN_7100729cb0(lVar1,local_20,local_28);
  if (iVar4 == 0) {
    local_20 = local_20 + local_28;
    if (local_20 == pbVar2) {
LAB_710073a508:
      iVar4 = FUN_7100733460(param_1,param_1 + 0x110,lVar1,param_1 + 0x50,0,0);
      if (iVar4 != 0) goto LAB_710073a4d8;
    }
    else {
      iVar4 = FUN_7100745050(&local_20,pbVar2,&local_28,0xa0);
      if (iVar4 == 0) {
        pbVar3 = local_20 + local_28;
        if (local_28 < 1) {
          iVar4 = -0x3d60;
          goto LAB_710073a5ac;
        }
        local_18[0] = (uint)*local_20;
        if (local_18[0] != 0x30 && *local_20 != 6) {
          iVar4 = -0x3d62;
          goto LAB_710073a5ac;
        }
        iVar4 = FUN_7100745050(&local_20,pbVar3,&local_10);
        if (iVar4 == 0) {
          local_8 = local_20;
          local_20 = local_20 + local_10;
          if (pbVar3 != local_20) {
            iVar4 = -0x3d66;
            goto LAB_710073a5ac;
          }
        }
        else {
          iVar4 = iVar4 + -0x3d00;
          if (iVar4 != 0) goto LAB_710073a5ac;
        }
        iVar4 = FUN_7100739e40(local_18,param_1);
        if (iVar4 != 0) goto LAB_710073a5ac;
      }
      else if (iVar4 != -0x62) goto LAB_710073a4d8;
      if (local_20 == pbVar2) goto LAB_710073a508;
      iVar4 = FUN_7100745050(&local_20,pbVar2,&local_28,0xa1);
      if (iVar4 != 0) {
        if (iVar4 != -0x62) goto LAB_710073a4d8;
        goto LAB_710073a508;
      }
      pbVar2 = local_20 + local_28;
      iVar4 = FUN_71007451c0(&local_20,pbVar2,&local_28);
      if (iVar4 != 0) {
LAB_710073a4e4:
        return iVar4 + -0x3d00;
      }
      if (pbVar2 != local_20 + local_28) {
        return -0x3d66;
      }
      iVar4 = FUN_71007326f0(param_1,param_1 + 0x110,local_20,(long)pbVar2 - (long)local_20);
      if ((iVar4 != 0) || (iVar4 = FUN_7100732890(param_1), local_20 = pbVar2, iVar4 != 0)) {
        local_20 = pbVar2;
        if (iVar4 != -0x4e80) {
          return -0x3d00;
        }
        goto LAB_710073a508;
      }
    }
    iVar4 = FUN_7100732c10(param_1,lVar1);
    if (iVar4 == 0) {
      return 0;
    }
LAB_710073a5ac:
    FUN_71007318b0(param_1);
    return iVar4;
  }
LAB_710073a4d8:
  FUN_71007318b0(param_1);
LAB_710073a430:
  return iVar4 + -0x3d00;
}



// ===== FUN_710073a680 @ 710073a680 (size=828) =====

int FUN_710073a680(long param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int local_2c;
  long local_28;
  long local_20;
  undefined1 auStack_18 [24];
  
  FUN_7100729690(auStack_18);
  local_20 = param_2;
  iVar2 = FUN_7100745050(&local_20,param_2 + param_3,&local_28,0x30);
  if (iVar2 != 0) {
    return iVar2 + -0x3d00;
  }
  lVar1 = local_20 + local_28;
  iVar2 = FUN_7100745160(&local_20,lVar1,&local_2c);
  if (iVar2 != 0) {
    return iVar2 + -0x3d00;
  }
  if (local_2c != 0) {
    return -0x3d80;
  }
  uVar3 = FUN_7100745170(&local_20,lVar1,auStack_18);
  if (uVar3 == 0) {
    iVar2 = FUN_710072a2a0(auStack_18,0);
    if (iVar2 != 0) {
      uVar3 = FUN_710073d340(param_1,auStack_18,0,0,0,0);
      if ((uVar3 != 0) || (uVar3 = FUN_7100745170(&local_20,lVar1,auStack_18), uVar3 != 0))
      goto LAB_710073a728;
      iVar2 = FUN_710072a2a0(auStack_18,0);
      if (iVar2 != 0) {
        uVar3 = FUN_710073d340(param_1,0,0,0,0,auStack_18);
        if ((uVar3 != 0) || (uVar3 = FUN_7100745170(&local_20,lVar1,auStack_18), uVar3 != 0))
        goto LAB_710073a728;
        iVar2 = FUN_710072a2a0(auStack_18,0);
        if (iVar2 != 0) {
          uVar3 = FUN_710073d340(param_1,0,0,0,auStack_18,0);
          if ((uVar3 != 0) || (uVar3 = FUN_7100745170(&local_20,lVar1,auStack_18), uVar3 != 0))
          goto LAB_710073a728;
          iVar2 = FUN_710072a2a0(auStack_18,0);
          if (iVar2 != 0) {
            uVar3 = FUN_710073d340(param_1,0,auStack_18,0,0,0);
            if ((uVar3 != 0) || (uVar3 = FUN_7100745170(&local_20,lVar1,auStack_18), uVar3 != 0))
            goto LAB_710073a728;
            iVar2 = FUN_710072a2a0(auStack_18,0);
            if (iVar2 != 0) {
              uVar3 = FUN_710073d340(param_1,0,0,auStack_18,0,0);
              if ((((((uVar3 != 0) ||
                     (uVar3 = FUN_7100739d50(&local_20,lVar1,auStack_18), uVar3 != 0)) ||
                    (uVar3 = FUN_7100729900(param_1 + 0x88,auStack_18), uVar3 != 0)) ||
                   ((uVar3 = FUN_7100739d50(&local_20,lVar1,auStack_18), uVar3 != 0 ||
                    (uVar3 = FUN_7100729900(param_1 + 0xa0,auStack_18), uVar3 != 0)))) ||
                  ((uVar3 = FUN_7100739d50(&local_20,lVar1,auStack_18), uVar3 != 0 ||
                   ((uVar3 = FUN_7100729900(param_1 + 0xb8,auStack_18), uVar3 != 0 ||
                    (uVar3 = FUN_710073d500(param_1), uVar3 != 0)))))) ||
                 (uVar3 = FUN_710073d850(param_1), uVar3 != 0)) goto LAB_710073a728;
              if (local_20 == lVar1) {
                FUN_71007296a0(auStack_18);
                return 0;
              }
            }
          }
        }
      }
    }
    FUN_71007296a0(auStack_18);
  }
  else {
LAB_710073a728:
    FUN_71007296a0(auStack_18);
    if ((uVar3 & 0xff80) == 0) {
      iVar2 = uVar3 - 0x3d00;
      goto LAB_710073a740;
    }
  }
  iVar2 = -0x3d00;
LAB_710073a740:
  FUN_710073f6d0(param_1);
  return iVar2;
}



// ===== FUN_710073a9c0 @ 710073a9c0 (size=524) =====

int FUN_710073a9c0(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  int local_40;
  int local_3c;
  long local_38;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 auStack_18 [24];
  
  local_3c = 0;
  local_30 = param_2;
  iVar2 = FUN_7100745050(&local_30,param_2 + param_3,&local_38,0x30);
  if (iVar2 != 0) {
    return iVar2 + -0x3d00;
  }
  lVar3 = local_30 + local_38;
  iVar2 = FUN_7100745160(&local_30,lVar3,&local_40);
  if (iVar2 != 0) {
LAB_710073aa80:
    return iVar2 + -0x3d00;
  }
  if (local_40 != 0) {
    return -0x3d80;
  }
  iVar2 = FUN_7100739d90(&local_30,lVar3,&local_3c,auStack_18);
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar2 = FUN_7100745050(&local_30,lVar3,&local_38,4);
  if (iVar2 != 0) goto LAB_710073aa80;
  if (local_38 == 0) {
    return -0x3d60;
  }
  lVar3 = FUN_71007394d0(local_3c);
  if (lVar3 == 0) {
LAB_710073abb4:
    iVar2 = -0x3c80;
  }
  else {
    iVar2 = FUN_7100739530(param_1,lVar3);
    if (iVar2 != 0) {
      return iVar2;
    }
    if (local_3c == 1) {
      local_28 = *param_1;
      local_20 = param_1[1];
      iVar2 = FUN_71007396b0(&local_28);
      uVar1 = local_20;
      if (iVar2 != 1) {
        uVar1 = 0;
      }
      iVar2 = FUN_710073a680(uVar1,local_30,local_38);
      if (iVar2 == 0) {
        return 0;
      }
    }
    else {
      if (1 < local_3c - 2U) goto LAB_710073abb4;
      local_28 = *param_1;
      local_20 = param_1[1];
      iVar2 = FUN_71007396b0(&local_28);
      uVar1 = local_20;
      if (2 < iVar2 - 2U) {
        uVar1 = 0;
      }
      iVar2 = FUN_7100739e40(auStack_18,uVar1);
      if (iVar2 == 0) {
        local_28 = *param_1;
        local_20 = param_1[1];
        iVar2 = FUN_71007396b0(&local_28);
        uVar1 = local_20;
        if (2 < iVar2 - 2U) {
          uVar1 = 0;
        }
        iVar2 = FUN_710073a390(uVar1,local_30,local_38);
        if (iVar2 == 0) {
          return 0;
        }
      }
    }
    FUN_7100739490(param_1);
  }
  return iVar2;
}



// ===== FUN_710073abd0 @ 710073abd0 (size=620) =====

ulong FUN_710073abd0(undefined8 param_1,char *param_2,long param_3,undefined8 param_4,long param_5)

{
  char *pcVar1;
  int iVar2;
  ulong uVar3;
  undefined4 local_48;
  undefined4 uStack_44;
  long local_40;
  char *local_38;
  undefined1 auStack_30 [8];
  long local_28;
  long *local_20;
  undefined1 auStack_18 [24];
  
  if (param_5 == 0) {
    return 0xffffc400;
  }
  local_38 = param_2;
  iVar2 = FUN_7100745050(&local_38,param_2 + param_3,&local_40,0x30);
  if (iVar2 != 0) {
    return (ulong)(iVar2 - 0x3d00);
  }
  pcVar1 = local_38 + local_40;
  iVar2 = FUN_7100745220(&local_38,pcVar1,auStack_30,auStack_18);
  if (iVar2 != 0) {
    return (ulong)(iVar2 - 0x3d00);
  }
  iVar2 = FUN_7100745050(&local_38,pcVar1,&local_40,4);
  pcVar1 = local_38;
  if (iVar2 != 0) {
    return (ulong)(iVar2 - 0x3d00);
  }
  iVar2 = FUN_71007473f0(auStack_30,&uStack_44,&local_48);
  if (iVar2 == 0) {
    uVar3 = FUN_7100748860(auStack_18,0,local_48,uStack_44,param_4,param_5,local_38,local_40,pcVar1)
    ;
    if ((int)uVar3 == 0) {
LAB_710073adc8:
      uVar3 = FUN_710073a9c0(param_1,pcVar1,local_40);
      return uVar3;
    }
    if ((int)uVar3 != -0x1e00) {
      return uVar3;
    }
LAB_710073ae1c:
    uVar3 = 0xffffc480;
  }
  else {
    if (local_28 == 10) {
      if ((*local_20 == 0xc010df78648862a) && ((short)local_20[1] == 0x101)) {
        uVar3 = FUN_7100748790(auStack_18,0,param_4,param_5,local_38,local_40,pcVar1);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        if (*pcVar1 == '0') goto LAB_710073adc8;
        goto LAB_710073ae1c;
      }
    }
    else if (((local_28 == 9) && (*local_20 == 0x5010df78648862a)) && ((char)local_20[1] == '\r')) {
      uVar3 = FUN_7100748c30(auStack_18,0,param_4,param_5,local_38,local_40,pcVar1);
      if ((int)uVar3 == 0) goto LAB_710073adc8;
      if ((int)uVar3 != -0x2e00) {
        return uVar3;
      }
      goto LAB_710073ae1c;
    }
    uVar3 = 0xffffc680;
  }
  return uVar3;
}



// ===== FUN_710073ae40 @ 710073ae40 (size=280) =====

undefined8 FUN_710073ae40(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = FUN_710081f2a0(param_1,&DAT_7100837de0);
  if (lVar1 != 0) {
    FUN_7100814b40(lVar1,0,2);
    lVar2 = FUN_710081f840(lVar1);
    if (lVar2 == -1) {
      FUN_71008082e0(lVar1);
      return 0xffffc200;
    }
    FUN_7100814b40(lVar1,0,0);
    *param_3 = lVar2;
    lVar3 = FUN_710080e9e0(1,lVar2 + 1);
    *param_2 = lVar3;
    if (lVar3 == 0) {
      FUN_71008082e0(lVar1);
      return 0xffffc080;
    }
    lVar2 = FUN_710081e580(lVar3,1,lVar2,lVar1);
    if (lVar2 == *param_3) {
      FUN_71008082e0(lVar1);
      *(undefined1 *)(*param_2 + *param_3) = 0;
      lVar1 = FUN_710081d620(*param_2,"-----BEGIN ");
      if (lVar1 != 0) {
        *param_3 = *param_3 + 1;
      }
      return 0;
    }
    FUN_71008082e0(lVar1);
    FUN_710073b460(*param_2,*param_3);
    FUN_710081c200(*param_2);
  }
  return 0xffffc200;
}



// ===== FUN_710073af60 @ 710073af60 (size=1116) =====

int FUN_710073af60(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_3 == 0) {
LAB_710073b208:
    iVar1 = -0x3d00;
  }
  else {
    lVar3 = param_3 + -1;
    FUN_71007477d0(&local_18);
    if (*(char *)(param_2 + lVar3) == '\0') {
      iVar1 = FUN_71007477e0(&local_18,"-----BEGIN RSA PRIVATE KEY-----",
                             "-----END RSA PRIVATE KEY-----",param_2,param_4,param_5,auStack_30);
      if (iVar1 == 0) {
        uVar2 = FUN_71007394d0(1);
        iVar1 = FUN_7100739530(param_1,uVar2);
        if (iVar1 == 0) {
          local_28 = *param_1;
          local_20 = param_1[1];
          iVar1 = FUN_71007396b0(&local_28);
          uVar2 = local_20;
          if (iVar1 != 1) {
            uVar2 = 0;
          }
          iVar1 = FUN_710073a680(uVar2,local_18,uStack_10);
          goto joined_r0x00710073b364;
        }
LAB_710073b18c:
        FUN_7100739490(param_1);
LAB_710073b194:
        FUN_7100748180(&local_18);
        return iVar1;
      }
      if (iVar1 == -0x1380) {
        return -0x3b80;
      }
      if (iVar1 == -0x1300) {
        return -0x3c00;
      }
      if (iVar1 != -0x1080) {
        return iVar1;
      }
      if (*(char *)(param_2 + lVar3) == '\0') {
        iVar1 = FUN_71007477e0(&local_18,"-----BEGIN EC PRIVATE KEY-----",
                               "-----END EC PRIVATE KEY-----",param_2,param_4,param_5,auStack_30);
        if (iVar1 == 0) {
          uVar2 = FUN_71007394d0(2);
          iVar1 = FUN_7100739530(param_1,uVar2);
          if (iVar1 != 0) goto LAB_710073b18c;
          local_28 = *param_1;
          local_20 = param_1[1];
          iVar1 = FUN_71007396b0(&local_28);
          uVar2 = local_20;
          if (2 < iVar1 - 2U) {
            uVar2 = 0;
          }
          iVar1 = FUN_710073a390(uVar2,local_18,uStack_10);
joined_r0x00710073b364:
          if (iVar1 == 0) goto LAB_710073b194;
          goto LAB_710073b18c;
        }
        if (iVar1 == -0x1380) {
          return -0x3b80;
        }
        if (iVar1 == -0x1300) {
          return -0x3c00;
        }
        if (iVar1 != -0x1080) {
          return iVar1;
        }
        if (*(char *)(param_2 + lVar3) == '\0') {
          iVar1 = FUN_71007477e0(&local_18,"-----BEGIN PRIVATE KEY-----","-----END PRIVATE KEY-----"
                                 ,param_2,0,0,auStack_30);
          if (iVar1 == 0) {
            iVar1 = FUN_710073a9c0(param_1,local_18,uStack_10);
            goto joined_r0x00710073b364;
          }
          if (iVar1 != -0x1080) {
            return iVar1;
          }
          if (*(char *)(param_2 + lVar3) == '\0') {
            iVar1 = FUN_71007477e0(&local_18,"-----BEGIN ENCRYPTED PRIVATE KEY-----",
                                   "-----END ENCRYPTED PRIVATE KEY-----",param_2,0,0,auStack_30);
            if (iVar1 == 0) {
              iVar1 = FUN_710073abd0(param_1,local_18,uStack_10,param_4,param_5);
              goto joined_r0x00710073b364;
            }
            if (iVar1 != -0x1080) {
              return iVar1;
            }
          }
        }
      }
    }
    lVar3 = FUN_710080e9e0(1,param_3);
    if (lVar3 == 0) {
      return -0x3f80;
    }
    FUN_710080f900(lVar3,param_2,param_3);
    iVar1 = FUN_710073abd0(param_1,lVar3,param_3,param_4,param_5);
    FUN_710073b460(lVar3,param_3);
    FUN_710081c200(lVar3);
    if (iVar1 != 0) {
      FUN_7100739490(param_1);
      FUN_7100739480(param_1);
      if (iVar1 == -0x3b80) {
        return -0x3b80;
      }
      iVar1 = FUN_710073a9c0(param_1,param_2,param_3);
      if (iVar1 != 0) {
        FUN_7100739490(param_1);
        FUN_7100739480(param_1);
        uVar2 = FUN_71007394d0(1);
        iVar1 = FUN_7100739530(param_1,uVar2);
        if (iVar1 == 0) {
          local_28 = *param_1;
          local_20 = param_1[1];
          iVar1 = FUN_71007396b0(&local_28);
          uVar2 = local_20;
          if (iVar1 != 1) {
            uVar2 = 0;
          }
          iVar1 = FUN_710073a680(uVar2,param_2,param_3);
          if (iVar1 == 0) goto LAB_710073b0e0;
        }
        FUN_7100739490(param_1);
        FUN_7100739480(param_1);
        uVar2 = FUN_71007394d0(2);
        iVar1 = FUN_7100739530(param_1,uVar2);
        if (iVar1 == 0) {
          local_28 = *param_1;
          local_20 = param_1[1];
          iVar1 = FUN_71007396b0(&local_28);
          uVar2 = local_20;
          if (2 < iVar1 - 2U) {
            uVar2 = 0;
          }
          iVar1 = FUN_710073a390(uVar2,param_2,param_3);
          if (iVar1 == 0) goto LAB_710073b0e0;
        }
        FUN_7100739490(param_1);
        goto LAB_710073b208;
      }
    }
LAB_710073b0e0:
    iVar1 = 0;
  }
  return iVar1;
}



// ===== FUN_710073b3c0 @ 710073b3c0 (size=160) =====

int FUN_710073b3c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_10;
  undefined8 local_8;
  
  iVar3 = FUN_710073ae40(param_2,&local_8,&local_10);
  uVar2 = local_8;
  uVar1 = local_10;
  if (iVar3 == 0) {
    if (param_3 == 0) {
      iVar3 = FUN_710073af60(param_1,local_8,local_10,0,0);
    }
    else {
      uVar4 = FUN_710081ce00(param_3);
      iVar3 = FUN_710073af60(param_1,uVar2,uVar1,param_3,uVar4);
    }
    FUN_710073b460(local_8,local_10);
    FUN_710081c200(local_8);
  }
  return iVar3;
}



// ===== FUN_710073b460 @ 710073b460 (size=32) =====

void FUN_710073b460(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    (*(code *)PTR_FUN_7100aec290)(param_1,0,param_2);
    return;
  }
  return;
}



// ===== FUN_710073b480 @ 710073b480 (size=24) =====

void FUN_710073b480(undefined8 *param_1)

{
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  return;
}



// ===== FUN_710073b4a0 @ 710073b4a0 (size=16) =====

void FUN_710073b4a0(long param_1)

{
  if (param_1 != 0) {
    FUN_710073b460(param_1,0x5c);
    return;
  }
  return;
}



// ===== FUN_710073b4b0 @ 710073b4b0 (size=64) =====

undefined8 FUN_710073b4b0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xefcdab8967452301;
  param_1[2] = 0x1032547698badcfe;
  *(undefined4 *)(param_1 + 3) = 0xc3d2e1f0;
  return 0;
}



// ===== FUN_710073b4f0 @ 710073b4f0 (size=5788) =====

undefined8 FUN_710073b4f0(long param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint local_70;
  int local_6c;
  int local_68;
  uint local_64;
  uint local_60;
  uint uStack_5c;
  int local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int iStack_40;
  int local_3c;
  int iStack_38;
  int local_34;
  int iStack_30;
  int local_2c;
  int iStack_28;
  int local_24;
  int iStack_20;
  int local_1c;
  int iStack_18;
  int local_14;
  int iStack_10;
  int local_c;
  
  local_48 = *param_2;
  local_44 = param_2[1];
  iStack_40 = param_2[2];
  local_3c = param_2[3];
  iStack_38 = param_2[4];
  local_34 = param_2[5];
  iStack_30 = param_2[6];
  local_2c = param_2[7];
  iStack_28 = param_2[8];
  local_24 = param_2[9];
  iStack_20 = param_2[10];
  local_1c = param_2[0xb];
  iStack_18 = param_2[0xc];
  local_14 = param_2[0xd];
  iStack_10 = param_2[0xe];
  local_c = param_2[0xf];
  iVar6 = *(int *)(param_1 + 8);
  uVar8 = *(uint *)(param_1 + 0xc);
  uVar7 = *(uint *)(param_1 + 0x10);
  uVar9 = *(uint *)(param_1 + 0x14);
  iVar10 = *(int *)(param_1 + 0x18);
  uVar11 = uVar8 >> 0x16 | uVar8 << 10;
  uVar12 = uVar7 >> 0x16 | uVar7 << 10;
  uVar1 = (uVar8 ^ uVar7 ^ uVar9) + local_48 + iVar6;
  uVar1 = (uVar1 >> 0x15 | uVar1 * 0x800) + iVar10;
  uVar2 = (uVar8 ^ uVar12 ^ uVar1) + local_44 + iVar10;
  uVar3 = ((uVar7 | uVar9 ^ 0xffffffff) ^ uVar8) + local_34 + iVar6 + 0x50a28be6;
  uVar2 = (uVar2 >> 0x12 | uVar2 * 0x4000) + uVar9;
  uVar3 = (uVar3 >> 0x18 | uVar3 * 0x100) + iVar10;
  uVar4 = (uVar1 ^ uVar11 ^ uVar2) + iStack_40 + uVar9;
  uVar13 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = (uVar4 >> 0x11 | uVar4 * 0x8000) + uVar12;
  uVar4 = (uVar2 ^ uVar13 ^ uVar1) + local_3c + uVar12;
  uVar14 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = ((uVar8 | uVar12 ^ 0xffffffff) ^ uVar3) + iStack_10 + iVar10 + 0x50a28be6;
  uVar4 = (uVar4 >> 0x14 | uVar4 * 0x1000) + uVar11;
  uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar9;
  uVar5 = (uVar1 ^ uVar14 ^ uVar4) + iStack_38 + uVar11;
  uVar15 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = ((uVar3 | uVar11 ^ 0xffffffff) ^ uVar2) + local_2c + uVar9 + 0x50a28be6;
  uVar5 = (uVar5 >> 0x1b | uVar5 * 0x20) + uVar13;
  uVar16 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar1 = (uVar1 >> 0x17 | uVar1 * 0x200) + uVar12;
  uVar3 = (uVar4 ^ uVar15 ^ uVar5) + local_34 + uVar13;
  uVar13 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar4 = ((uVar2 | uVar16 ^ 0xffffffff) ^ uVar1) + 0x50a28be6 + local_48 + uVar12;
  uVar3 = (uVar3 >> 0x18 | uVar3 * 0x100) + uVar14;
  uVar12 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = (uVar4 >> 0x15 | uVar4 * 0x800) + uVar11;
  uVar4 = (uVar5 ^ uVar13 ^ uVar3) + iStack_30 + uVar14;
  uVar14 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar4 = (uVar4 >> 0x19 | uVar4 * 0x80) + uVar15;
  uVar5 = ((uVar1 | uVar12 ^ 0xffffffff) ^ uVar2) + 0x50a28be6 + local_24 + uVar11;
  uVar11 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = (uVar5 >> 0x13 | uVar5 * 0x2000) + uVar16;
  uVar5 = (uVar3 ^ uVar14 ^ uVar4) + local_2c + uVar15;
  uVar15 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = ((uVar2 | uVar11 ^ 0xffffffff) ^ uVar1) + uVar16 + iStack_40 + 0x50a28be6;
  uVar16 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = (uVar5 >> 0x17 | uVar5 * 0x200) + uVar13;
  uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar12;
  uVar5 = (uVar4 ^ uVar15 ^ uVar2) + iStack_28 + uVar13;
  uVar13 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = ((uVar1 | uVar16 ^ 0xffffffff) ^ uVar3) + uVar12 + local_1c + 0x50a28be6;
  uVar12 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar4 = (uVar5 >> 0x15 | uVar5 * 0x800) + uVar14;
  uVar1 = (uVar1 >> 0x11 | uVar1 * 0x8000) + uVar11;
  uVar5 = (uVar2 ^ uVar12 ^ uVar4) + local_24 + uVar14;
  uVar14 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = ((uVar3 | uVar13 ^ 0xffffffff) ^ uVar1) + uVar11 + iStack_38 + 0x50a28be6;
  uVar5 = (uVar5 >> 0x13 | uVar5 * 0x2000) + uVar15;
  uVar11 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar2 = (uVar2 >> 0x1b | uVar2 * 0x20) + uVar16;
  uVar3 = (uVar4 ^ uVar14 ^ uVar5) + iStack_20 + uVar15;
  uVar15 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar12;
  uVar4 = ((uVar1 | uVar11 ^ 0xffffffff) ^ uVar2) + uVar16 + local_14 + 0x50a28be6;
  uVar16 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = (uVar5 ^ uVar15 ^ uVar3) + local_1c + uVar12;
  uVar4 = (uVar4 >> 0x19 | uVar4 * 0x80) + uVar13;
  uVar12 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar1 = (uVar1 >> 0x11 | uVar1 * 0x8000) + uVar14;
  uVar5 = (uVar3 ^ uVar12 ^ uVar1) + iStack_18 + uVar14;
  uVar14 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar17 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar3 = (uVar5 >> 0x1a | uVar5 * 0x40) + uVar15;
  uVar2 = ((uVar2 | uVar16 ^ 0xffffffff) ^ uVar4) + uVar13 + iStack_30 + 0x50a28be6;
  uVar5 = (uVar1 ^ uVar14 ^ uVar3) + local_14 + uVar15;
  uVar2 = (uVar2 >> 0x19 | uVar2 * 0x80) + uVar11;
  uVar13 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = (uVar5 >> 0x19 | uVar5 * 0x80) + uVar12;
  uVar15 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar18 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = (uVar3 ^ uVar13 ^ uVar1) + iStack_10 + uVar12;
  uVar12 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar4 = ((uVar4 | uVar17 ^ 0xffffffff) ^ uVar2) + uVar11 + local_c + 0x50a28be6;
  uVar3 = (uVar3 >> 0x17 | uVar3 * 0x200) + uVar14;
  uVar4 = (uVar4 >> 0x18 | uVar4 * 0x100) + uVar16;
  uVar11 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = (uVar1 ^ uVar18 ^ uVar3) + local_c + uVar14;
  uVar2 = ((uVar2 | uVar15 ^ 0xffffffff) ^ uVar4) + uVar16 + iStack_28 + 0x50a28be6;
  uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar17;
  uVar1 = (uVar1 >> 0x18 | uVar1 * 0x100) + uVar13;
  uVar5 = ((uVar4 | uVar12 ^ 0xffffffff) ^ uVar2) + uVar17 + local_44 + 0x50a28be6;
  uVar14 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar4 = (uVar5 >> 0x12 | uVar5 * 0x4000) + uVar15;
  uVar5 = ((uVar3 ^ uVar11) & uVar1 ^ uVar11) + uVar13 + local_2c + 0x5a827999;
  uVar13 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = (uVar5 >> 0x19 | uVar5 * 0x80) + uVar18;
  uVar5 = ((uVar2 | uVar14 ^ 0xffffffff) ^ uVar4) + uVar15 + iStack_20 + 0x50a28be6;
  uVar15 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = (uVar5 >> 0x12 | uVar5 * 0x4000) + uVar12;
  uVar5 = ((uVar1 ^ uVar13) & uVar3 ^ uVar13) + uVar18 + iStack_38 + 0x5a827999;
  uVar16 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = (uVar5 >> 0x1a | uVar5 * 0x40) + uVar11;
  uVar17 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar18 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar4 = ((uVar4 | uVar15 ^ 0xffffffff) ^ uVar2) + uVar12 + local_3c + 0x50a28be6;
  uVar3 = ((uVar3 ^ uVar16) & uVar1 ^ uVar16) + uVar11 + local_14 + 0x5a827999;
  uVar4 = (uVar4 >> 0x14 | uVar4 * 0x1000) + uVar14;
  uVar5 = ((uVar2 | uVar17 ^ 0xffffffff) ^ uVar4) + uVar14 + iStack_18 + 0x50a28be6;
  uVar3 = (uVar3 >> 0x18 | uVar3 * 0x100) + uVar13;
  uVar5 = (uVar5 >> 0x1a | uVar5 * 0x40) + uVar15;
  uVar11 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = ((uVar1 ^ uVar18) & uVar3 ^ uVar18) + uVar13 + local_44 + 0x5a827999;
  uVar12 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = (uVar2 >> 0x13 | uVar2 * 0x2000) + uVar16;
  uVar2 = ((uVar4 ^ uVar5) & uVar11 ^ uVar4) + uVar15 + iStack_30 + 0x5c4dd124;
  uVar13 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar17;
  uVar14 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar3 = ((uVar3 ^ uVar12) & uVar1 ^ uVar12) + uVar16 + iStack_20 + 0x5a827999;
  uVar3 = (uVar3 >> 0x15 | uVar3 * 0x800) + uVar18;
  uVar4 = ((uVar5 ^ uVar2) & uVar14 ^ uVar5) + uVar17 + local_1c + 0x5c4dd124;
  uVar4 = (uVar4 >> 0x13 | uVar4 * 0x2000) + uVar11;
  uVar15 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar5 = ((uVar1 ^ uVar13) & uVar3 ^ uVar13) + uVar18 + iStack_30 + 0x5a827999;
  uVar16 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = (uVar5 >> 0x17 | uVar5 * 0x200) + uVar12;
  uVar17 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = ((uVar2 ^ uVar4) & uVar15 ^ uVar2) + uVar11 + local_3c + 0x5c4dd124;
  uVar2 = (uVar2 >> 0x11 | uVar2 * 0x8000) + uVar14;
  uVar11 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = ((uVar3 ^ uVar16) & uVar1 ^ uVar16) + uVar12 + local_c + 0x5a827999;
  uVar3 = (uVar3 >> 0x19 | uVar3 * 0x80) + uVar13;
  uVar12 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = ((uVar1 ^ uVar11) & uVar3 ^ uVar11) + uVar13 + local_3c + 0x5a827999;
  uVar1 = (uVar1 >> 0x11 | uVar1 * 0x8000) + uVar16;
  uVar5 = ((uVar4 ^ uVar2) & uVar17 ^ uVar4) + uVar14 + local_2c + 0x5c4dd124;
  uVar5 = (uVar5 >> 0x19 | uVar5 * 0x80) + uVar15;
  uVar13 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar14 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar18 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar3 = ((uVar3 ^ uVar12) & uVar1 ^ uVar12) + uVar16 + iStack_18 + 0x5a827999;
  uVar3 = (uVar3 >> 0x19 | uVar3 * 0x80) + uVar11;
  uVar2 = ((uVar2 ^ uVar5) & uVar13 ^ uVar2) + uVar15 + local_48 + 0x5c4dd124;
  uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar17;
  uVar15 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar16 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = ((uVar1 ^ uVar14) & uVar3 ^ uVar14) + uVar11 + local_48 + 0x5a827999;
  uVar4 = ((uVar5 ^ uVar2) & uVar18 ^ uVar5) + uVar17 + local_14 + 0x5c4dd124;
  uVar1 = (uVar1 >> 0x14 | uVar1 * 0x1000) + uVar12;
  uVar4 = (uVar4 >> 0x18 | uVar4 * 0x100) + uVar13;
  uVar11 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = ((uVar3 ^ uVar16) & uVar1 ^ uVar16) + uVar12 + local_24 + 0x5a827999;
  uVar5 = ((uVar2 ^ uVar4) & uVar15 ^ uVar2) + uVar13 + local_34 + 0x5c4dd124;
  uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar14;
  uVar12 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar5 = (uVar5 >> 0x17 | uVar5 * 0x200) + uVar18;
  uVar13 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar1 = ((uVar1 ^ uVar11) & uVar3 ^ uVar11) + uVar14 + local_34 + 0x5a827999;
  uVar1 = (uVar1 >> 0x17 | uVar1 * 0x200) + uVar16;
  uVar2 = ((uVar4 ^ uVar5) & uVar13 ^ uVar4) + uVar18 + iStack_20 + 0x5c4dd124;
  uVar14 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar15;
  uVar4 = ((uVar3 ^ uVar12) & uVar1 ^ uVar12) + uVar16 + iStack_40 + 0x5a827999;
  uVar16 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = (uVar4 >> 0x15 | uVar4 * 0x800) + uVar11;
  uVar4 = ((uVar5 ^ uVar2) & uVar14 ^ uVar5) + uVar15 + iStack_10 + 0x5c4dd124;
  uVar4 = (uVar4 >> 0x19 | uVar4 * 0x80) + uVar13;
  uVar11 = ((uVar1 ^ uVar16) & uVar3 ^ uVar16) + uVar11 + iStack_10 + 0x5a827999;
  uVar15 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar17 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar1 = (uVar11 >> 0x19 | uVar11 * 0x80) + uVar12;
  uVar5 = ((uVar2 ^ uVar4) & uVar17 ^ uVar2) + uVar13 + local_c + 0x5c4dd124;
  uVar11 = ((uVar3 ^ uVar15) & uVar1 ^ uVar15) + uVar12 + local_1c + 0x5a827999;
  uVar5 = (uVar5 >> 0x19 | uVar5 * 0x80) + uVar14;
  uVar12 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = (uVar11 >> 0x13 | uVar11 * 0x2000) + uVar16;
  uVar13 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = ((uVar4 ^ uVar5) & uVar13 ^ uVar4) + uVar14 + iStack_28 + 0x5c4dd124;
  uVar11 = ((uVar1 ^ uVar12) & uVar3 ^ uVar12) + uVar16 + iStack_28 + 0x5a827999;
  uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar17;
  uVar14 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar4 = (uVar11 >> 0x14 | uVar11 * 0x1000) + uVar15;
  uVar16 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = ((uVar5 ^ uVar2) & uVar14 ^ uVar5) + uVar17 + iStack_18 + 0x5c4dd124;
  uVar11 = ((uVar4 | uVar3 ^ 0xffffffff) ^ uVar16) + uVar15 + local_3c + 0x6ed9eba1;
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar13;
  uVar15 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar5 = (uVar11 >> 0x15 | uVar11 * 0x800) + uVar12;
  uVar17 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = ((uVar5 | uVar4 ^ 0xffffffff) ^ uVar17) + uVar12 + iStack_20 + 0x6ed9eba1;
  uVar11 = ((uVar2 ^ uVar1) & uVar15 ^ uVar2) + uVar13 + iStack_38 + 0x5c4dd124;
  uVar3 = (uVar3 >> 0x13 | uVar3 * 0x2000) + uVar16;
  uVar11 = (uVar11 >> 0x1a | uVar11 * 0x40) + uVar14;
  uVar12 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar13 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar2 = ((uVar3 | uVar5 ^ 0xffffffff) ^ uVar13) + uVar16 + iStack_10 + 0x6ed9eba1;
  uVar2 = (uVar2 >> 0x1a | uVar2 * 0x40) + uVar17;
  uVar4 = ((uVar1 ^ uVar11) & uVar12 ^ uVar1) + uVar14 + local_24 + 0x5c4dd124;
  uVar14 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar4 = (uVar4 >> 0x11 | uVar4 * 0x8000) + uVar15;
  uVar16 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = ((uVar2 | uVar3 ^ 0xffffffff) ^ uVar14) + uVar17 + iStack_38 + 0x6ed9eba1;
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar13;
  uVar17 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = ((uVar11 ^ uVar4) & uVar16 ^ uVar11) + uVar15 + local_44 + 0x5c4dd124;
  uVar3 = (uVar3 >> 0x13 | uVar3 * 0x2000) + uVar12;
  uVar11 = uVar11 >> 0x16 | uVar11 * 0x400;
  uVar5 = ((uVar1 | uVar2 ^ 0xffffffff) ^ uVar17) + uVar13 + local_24 + 0x6ed9eba1;
  uVar5 = (uVar5 >> 0x12 | uVar5 * 0x4000) + uVar14;
  uVar13 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = ((uVar4 ^ uVar3) & uVar11 ^ uVar4) + uVar12 + iStack_40 + 0x5c4dd124;
  uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar16;
  uVar12 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar4 = ((uVar5 | uVar1 ^ 0xffffffff) ^ uVar13) + uVar14 + local_c + 0x6ed9eba1;
  uVar4 = (uVar4 >> 0x17 | uVar4 * 0x200) + uVar17;
  uVar14 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = ((uVar2 | uVar3 ^ 0xffffffff) ^ uVar12) + uVar16 + local_c + 0x6d703ef3;
  uVar1 = (uVar1 >> 0x17 | uVar1 * 0x200) + uVar11;
  uVar15 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = ((uVar4 | uVar5 ^ 0xffffffff) ^ uVar14) + uVar17 + iStack_28 + 0x6ed9eba1;
  uVar3 = (uVar3 >> 0x13 | uVar3 * 0x2000) + uVar13;
  uVar16 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar5 = ((uVar1 | uVar2 ^ 0xffffffff) ^ uVar15) + uVar11 + local_34 + 0x6d703ef3;
  uVar5 = (uVar5 >> 0x19 | uVar5 * 0x80) + uVar12;
  uVar11 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = ((uVar3 | uVar4 ^ 0xffffffff) ^ uVar16) + uVar13 + local_44 + 0x6ed9eba1;
  uVar2 = (uVar2 >> 0x11 | uVar2 * 0x8000) + uVar14;
  uVar13 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar4 = ((uVar5 | uVar1 ^ 0xffffffff) ^ uVar11) + uVar12 + local_44 + 0x6d703ef3;
  uVar4 = (uVar4 >> 0x11 | uVar4 * 0x8000) + uVar15;
  uVar12 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = ((uVar2 | uVar3 ^ 0xffffffff) ^ uVar13) + uVar14 + iStack_40 + 0x6ed9eba1;
  uVar1 = (uVar1 >> 0x12 | uVar1 * 0x4000) + uVar16;
  uVar14 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = ((uVar4 | uVar5 ^ 0xffffffff) ^ uVar12) + uVar15 + local_3c + 0x6d703ef3;
  uVar3 = (uVar3 >> 0x15 | uVar3 * 0x800) + uVar11;
  uVar15 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar5 = ((uVar1 | uVar2 ^ 0xffffffff) ^ uVar14) + uVar16 + local_2c + 0x6ed9eba1;
  uVar5 = (uVar5 >> 0x18 | uVar5 * 0x100) + uVar13;
  uVar16 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = ((uVar3 | uVar4 ^ 0xffffffff) ^ uVar15) + uVar11 + local_2c + 0x6d703ef3;
  uVar2 = (uVar2 >> 0x18 | uVar2 * 0x100) + uVar12;
  uVar11 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar17 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = ((uVar5 | uVar1 ^ 0xffffffff) ^ uVar16) + uVar13 + local_48 + 0x6ed9eba1;
  uVar1 = (uVar1 >> 0x13 | uVar1 * 0x2000) + uVar14;
  uVar13 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = ((uVar2 | uVar3 ^ 0xffffffff) ^ uVar11) + uVar12 + iStack_10 + 0x6d703ef3;
  uVar3 = (uVar3 >> 0x1a | uVar3 * 0x40) + uVar15;
  uVar12 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar4 = ((uVar1 | uVar5 ^ 0xffffffff) ^ uVar17) + uVar14 + iStack_30 + 0x6ed9eba1;
  uVar4 = (uVar4 >> 0x1a | uVar4 * 0x40) + uVar16;
  uVar5 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = ((uVar3 | uVar2 ^ 0xffffffff) ^ uVar13) + uVar15 + iStack_30 + 0x6d703ef3;
  uVar2 = (uVar2 >> 0x1a | uVar2 * 0x40) + uVar11;
  uVar14 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = ((uVar4 | uVar1 ^ 0xffffffff) ^ uVar12) + uVar16 + local_14 + 0x6ed9eba1;
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar17;
  uVar15 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = ((uVar2 | uVar3 ^ 0xffffffff) ^ uVar5) + uVar11 + local_24 + 0x6d703ef3;
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar13;
  uVar16 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar4 = ((uVar1 | uVar4 ^ 0xffffffff) ^ uVar14) + uVar17 + local_1c + 0x6ed9eba1;
  uVar4 = (uVar4 >> 0x14 | uVar4 * 0x1000) + uVar12;
  uVar17 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = ((uVar3 | uVar2 ^ 0xffffffff) ^ uVar15) + uVar13 + local_1c + 0x6d703ef3;
  uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar5;
  uVar13 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = ((uVar4 | uVar1 ^ 0xffffffff) ^ uVar16) + uVar12 + local_34 + 0x6ed9eba1;
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar14;
  uVar5 = ((uVar2 | uVar3 ^ 0xffffffff) ^ uVar17) + uVar5 + iStack_28 + 0x6d703ef3;
  uVar5 = (uVar5 >> 0x13 | uVar5 * 0x2000) + uVar15;
  uVar12 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = ((uVar1 | uVar4 ^ 0xffffffff) ^ uVar13) + uVar14 + iStack_18 + 0x6ed9eba1;
  uVar3 = (uVar3 >> 0x1b | uVar3 * 0x20) + uVar16;
  uVar11 = ((uVar5 | uVar2 ^ 0xffffffff) ^ uVar12) + uVar15 + iStack_18 + 0x6d703ef3;
  uVar14 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar4 = (uVar11 >> 0x1b | uVar11 * 0x20) + uVar17;
  uVar15 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = ((uVar1 ^ uVar3) & uVar14 ^ uVar1) + uVar16 + local_44 + -0x70e44324;
  uVar11 = ((uVar4 | uVar5 ^ 0xffffffff) ^ uVar15) + uVar17 + iStack_40 + 0x6d703ef3;
  uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar13;
  uVar16 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = (uVar11 >> 0x12 | uVar11 * 0x4000) + uVar12;
  uVar11 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar5 = ((uVar1 | uVar4 ^ 0xffffffff) ^ uVar11) + uVar12 + iStack_20 + 0x6d703ef3;
  uVar12 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar4 = (uVar5 >> 0x13 | uVar5 * 0x2000) + uVar15;
  uVar5 = ((uVar3 ^ uVar2) & uVar16 ^ uVar3) + uVar13 + local_24 + -0x70e44324;
  uVar5 = (uVar5 >> 0x14 | uVar5 * 0x1000) + uVar14;
  uVar13 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar17 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = ((uVar2 ^ uVar5) & uVar13 ^ uVar2) + uVar14 + local_1c + -0x70e44324;
  uVar3 = ((uVar4 | uVar1 ^ 0xffffffff) ^ uVar12) + uVar15 + local_48 + 0x6d703ef3;
  uVar2 = (uVar2 >> 0x12 | uVar2 * 0x4000) + uVar16;
  uVar3 = (uVar3 >> 0x13 | uVar3 * 0x2000) + uVar11;
  uVar14 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = ((uVar3 | uVar4 ^ 0xffffffff) ^ uVar14) + uVar11 + iStack_38 + 0x6d703ef3;
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar12;
  uVar15 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar4 = ((uVar5 ^ uVar2) & uVar17 ^ uVar5) + uVar16 + iStack_20 + -0x70e44324;
  uVar11 = ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar15) + uVar12 + local_14 + 0x6d703ef3;
  uVar4 = (uVar4 >> 0x11 | uVar4 * 0x8000) + uVar13;
  uVar12 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar16 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = (uVar11 >> 0x1b | uVar11 * 0x20) + uVar14;
  uVar5 = ((uVar2 ^ uVar4) & uVar12 ^ uVar2) + uVar13 + local_48 + -0x70e44324;
  uVar5 = (uVar5 >> 0x12 | uVar5 * 0x4000) + uVar17;
  uVar13 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = ((uVar1 ^ uVar16) & uVar3 ^ uVar16) + uVar14 + iStack_28 + 0x7a6d76e9;
  uVar14 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = (uVar2 >> 0x11 | uVar2 * 0x8000) + uVar15;
  uVar2 = ((uVar4 ^ uVar5) & uVar13 ^ uVar4) + uVar17 + iStack_28 + -0x70e44324;
  uVar2 = (uVar2 >> 0x11 | uVar2 * 0x8000) + uVar12;
  uVar17 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar4 = ((uVar3 ^ uVar14) & uVar1 ^ uVar14) + uVar15 + iStack_30 + 0x7a6d76e9;
  uVar15 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = (uVar4 >> 0x1b | uVar4 * 0x20) + uVar16;
  uVar4 = ((uVar5 ^ uVar2) & uVar17 ^ uVar5) + uVar12 + iStack_18 + -0x70e44324;
  uVar11 = ((uVar1 ^ uVar15) & uVar3 ^ uVar15) + uVar16 + iStack_38 + 0x7a6d76e9;
  uVar4 = (uVar4 >> 0x17 | uVar4 * 0x200) + uVar13;
  uVar12 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar16 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar1 = (uVar11 >> 0x18 | uVar11 * 0x100) + uVar14;
  uVar5 = ((uVar2 ^ uVar4) & uVar16 ^ uVar2) + uVar13 + iStack_38 + -0x70e44324;
  uVar11 = ((uVar3 ^ uVar12) & uVar1 ^ uVar12) + uVar14 + local_44 + 0x7a6d76e9;
  uVar13 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = (uVar5 >> 0x18 | uVar5 * 0x100) + uVar17;
  uVar5 = (uVar11 >> 0x15 | uVar11 * 0x800) + uVar15;
  uVar14 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = ((uVar1 ^ uVar13) & uVar5 ^ uVar13) + uVar15 + local_3c + 0x7a6d76e9;
  uVar11 = ((uVar4 ^ uVar3) & uVar14 ^ uVar4) + uVar17 + local_14 + -0x70e44324;
  uVar15 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = (uVar2 >> 0x12 | uVar2 * 0x4000) + uVar12;
  uVar2 = (uVar11 >> 0x17 | uVar11 * 0x200) + uVar16;
  uVar17 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar4 = ((uVar5 ^ uVar15) & uVar1 ^ uVar15) + uVar12 + local_1c + 0x7a6d76e9;
  uVar11 = ((uVar3 ^ uVar2) & uVar17 ^ uVar3) + uVar16 + local_3c + -0x70e44324;
  uVar12 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar5 = (uVar11 >> 0x12 | uVar11 * 0x4000) + uVar14;
  uVar4 = (uVar4 >> 0x12 | uVar4 * 0x4000) + uVar13;
  uVar11 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = ((uVar2 ^ uVar5) & uVar11 ^ uVar2) + uVar14 + local_2c + -0x70e44324;
  uVar14 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = (uVar3 >> 0x1b | uVar3 * 0x20) + uVar17;
  uVar3 = ((uVar1 ^ uVar12) & uVar4 ^ uVar12) + uVar13 + local_c + 0x7a6d76e9;
  uVar13 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = (uVar3 >> 0x1a | uVar3 * 0x40) + uVar15;
  uVar16 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar3 = ((uVar4 ^ uVar13) & uVar1 ^ uVar13) + uVar15 + local_48 + 0x7a6d76e9;
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar12;
  uVar15 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar18 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = ((uVar1 ^ uVar16) & uVar3 ^ uVar16) + uVar12 + local_34 + 0x7a6d76e9;
  uVar4 = ((uVar5 ^ uVar2) & uVar14 ^ uVar5) + uVar17 + local_c + -0x70e44324;
  uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar13;
  uVar4 = (uVar4 >> 0x1a | uVar4 * 0x40) + uVar11;
  uVar5 = ((uVar2 ^ uVar4) & uVar15 ^ uVar2) + uVar11 + iStack_10 + -0x70e44324;
  uVar11 = ((uVar3 ^ uVar18) & uVar1 ^ uVar18) + uVar13 + iStack_18 + 0x7a6d76e9;
  uVar12 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = (uVar5 >> 0x18 | uVar5 * 0x100) + uVar14;
  uVar13 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = (uVar11 >> 0x17 | uVar11 * 0x200) + uVar16;
  uVar5 = ((uVar4 ^ uVar3) & uVar13 ^ uVar4) + uVar14 + local_34 + -0x70e44324;
  uVar11 = ((uVar1 ^ uVar12) & uVar2 ^ uVar12) + uVar16 + iStack_40 + 0x7a6d76e9;
  uVar5 = (uVar5 >> 0x1a | uVar5 * 0x40) + uVar15;
  uVar14 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = (uVar11 >> 0x14 | uVar11 * 0x1000) + uVar18;
  uVar16 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar4 = ((uVar3 ^ uVar5) & uVar16 ^ uVar3) + uVar15 + iStack_30 + -0x70e44324;
  uVar11 = ((uVar2 ^ uVar14) & uVar1 ^ uVar14) + uVar18 + local_14 + 0x7a6d76e9;
  uVar4 = (uVar4 >> 0x1b | uVar4 * 0x20) + uVar13;
  uVar11 = (uVar11 >> 0x17 | uVar11 * 0x200) + uVar12;
  uVar15 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar17 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = ((uVar5 ^ uVar4) & uVar15 ^ uVar5) + uVar13 + iStack_40 + -0x70e44324;
  uVar13 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar16;
  uVar3 = ((uVar1 ^ uVar17) & uVar11 ^ uVar17) + uVar12 + local_24 + 0x7a6d76e9;
  uVar12 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = (uVar3 >> 0x14 | uVar3 * 0x1000) + uVar14;
  uVar3 = ((uVar4 | uVar13 ^ 0xffffffff) ^ uVar2) + uVar16 + iStack_38 + -0x56ac02b2;
  uVar16 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar3 = (uVar3 >> 0x17 | uVar3 * 0x200) + uVar15;
  uVar4 = ((uVar11 ^ uVar12) & uVar1 ^ uVar12) + uVar14 + local_2c + 0x7a6d76e9;
  uVar11 = uVar11 >> 0x16 | uVar11 * 0x400;
  uVar4 = (uVar4 >> 0x1b | uVar4 * 0x20) + uVar17;
  uVar14 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = ((uVar1 ^ uVar11) & uVar4 ^ uVar11) + uVar17 + iStack_20 + 0x7a6d76e9;
  uVar5 = ((uVar2 | uVar16 ^ 0xffffffff) ^ uVar3) + uVar15 + local_48 + -0x56ac02b2;
  uVar15 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar1 = (uVar1 >> 0x11 | uVar1 * 0x8000) + uVar12;
  uVar2 = (uVar5 >> 0x11 | uVar5 * 0x8000) + uVar13;
  uVar5 = ((uVar3 | uVar15 ^ 0xffffffff) ^ uVar2) + uVar13 + local_34 + -0x56ac02b2;
  uVar13 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = ((uVar4 ^ uVar14) & uVar1 ^ uVar14) + uVar12 + iStack_10 + 0x7a6d76e9;
  uVar5 = (uVar5 >> 0x1b | uVar5 * 0x20) + uVar16;
  uVar12 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar3 = (uVar3 >> 0x18 | uVar3 * 0x100) + uVar11;
  uVar4 = ((uVar2 | uVar13 ^ 0xffffffff) ^ uVar5) + uVar16 + local_24 + -0x56ac02b2;
  uVar11 = (uVar1 ^ uVar12 ^ uVar3) + iStack_18 + uVar11;
  uVar16 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar17 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = (uVar4 >> 0x15 | uVar4 * 0x800) + uVar15;
  uVar2 = (uVar11 >> 0x18 | uVar11 * 0x100) + uVar14;
  uVar4 = (uVar3 ^ uVar17 ^ uVar2) + local_c + uVar14;
  uVar11 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = ((uVar5 | uVar16 ^ 0xffffffff) ^ uVar1) + uVar15 + local_2c + -0x56ac02b2;
  uVar14 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar4 = (uVar4 >> 0x1b | uVar4 * 0x20) + uVar12;
  uVar3 = (uVar3 >> 0x1a | uVar3 * 0x40) + uVar13;
  uVar5 = (uVar2 ^ uVar11 ^ uVar4) + iStack_20 + uVar12;
  uVar12 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = (uVar5 >> 0x14 | uVar5 * 0x1000) + uVar17;
  uVar5 = ((uVar1 | uVar14 ^ 0xffffffff) ^ uVar3) + uVar13 + iStack_18 + -0x56ac02b2;
  uVar13 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = (uVar5 >> 0x18 | uVar5 * 0x100) + uVar16;
  uVar5 = (uVar4 ^ uVar12 ^ uVar2) + iStack_38 + uVar17;
  uVar15 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar4 = (uVar5 >> 0x17 | uVar5 * 0x200) + uVar11;
  uVar5 = ((uVar3 | uVar13 ^ 0xffffffff) ^ uVar1) + uVar16 + iStack_40 + -0x56ac02b2;
  uVar16 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = (uVar2 ^ uVar15 ^ uVar4) + local_44 + uVar11;
  uVar5 = (uVar5 >> 0x13 | uVar5 * 0x2000) + uVar14;
  uVar17 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = (uVar3 >> 0x14 | uVar3 * 0x1000) + uVar12;
  uVar3 = ((uVar1 | uVar16 ^ 0xffffffff) ^ uVar5) + uVar14 + iStack_20 + -0x56ac02b2;
  uVar11 = (uVar4 ^ uVar17 ^ uVar2) + local_34 + uVar12;
  uVar12 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar14 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar1 = (uVar3 >> 0x14 | uVar3 * 0x1000) + uVar13;
  uVar3 = (uVar11 >> 0x1b | uVar11 * 0x20) + uVar15;
  uVar4 = (uVar2 ^ uVar14 ^ uVar3) + iStack_28 + uVar15;
  uVar11 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = ((uVar5 | uVar12 ^ 0xffffffff) ^ uVar1) + uVar13 + iStack_10 + -0x56ac02b2;
  uVar13 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar4 = (uVar4 >> 0x12 | uVar4 * 0x4000) + uVar17;
  uVar2 = (uVar2 >> 0x1b | uVar2 * 0x20) + uVar16;
  uVar5 = (uVar3 ^ uVar11 ^ uVar4) + local_2c + uVar17;
  uVar15 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = (uVar5 >> 0x1a | uVar5 * 0x40) + uVar14;
  uVar5 = ((uVar1 | uVar13 ^ 0xffffffff) ^ uVar2) + uVar16 + local_44 + -0x56ac02b2;
  uVar16 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = (uVar5 >> 0x14 | uVar5 * 0x1000) + uVar12;
  uVar5 = (uVar4 ^ uVar15 ^ uVar3) + iStack_30 + uVar14;
  uVar14 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar4 = (uVar5 >> 0x18 | uVar5 * 0x100) + uVar11;
  uVar5 = ((uVar2 | uVar16 ^ 0xffffffff) ^ uVar1) + uVar12 + local_3c + -0x56ac02b2;
  uVar12 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = (uVar3 ^ uVar14 ^ uVar4) + iStack_40 + uVar11;
  uVar5 = (uVar5 >> 0x13 | uVar5 * 0x2000) + uVar13;
  uVar17 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar2 = (uVar2 >> 0x13 | uVar2 * 0x2000) + uVar15;
  uVar3 = (uVar4 ^ uVar17 ^ uVar2) + local_14 + uVar15;
  uVar11 = ((uVar1 | uVar12 ^ 0xffffffff) ^ uVar5) + uVar13 + iStack_28 + -0x56ac02b2;
  uVar13 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar3 = (uVar3 >> 0x1a | uVar3 * 0x40) + uVar14;
  uVar15 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = (uVar11 >> 0x12 | uVar11 * 0x4000) + uVar16;
  uVar4 = (uVar2 ^ uVar13 ^ uVar3) + iStack_10 + uVar14;
  uVar11 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = (uVar4 >> 0x1b | uVar4 * 0x20) + uVar17;
  uVar4 = ((uVar5 | uVar15 ^ 0xffffffff) ^ uVar1) + uVar16 + local_1c + -0x56ac02b2;
  uVar14 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar4 = (uVar4 >> 0x15 | uVar4 * 0x800) + uVar12;
  uVar5 = (uVar3 ^ uVar11 ^ uVar2) + local_48 + uVar17;
  uVar16 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = (uVar5 >> 0x11 | uVar5 * 0x8000) + uVar13;
  local_70 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = ((uVar1 | uVar14 ^ 0xffffffff) ^ uVar4) + uVar12 + iStack_30 + -0x56ac02b2;
  uVar5 = (uVar2 ^ uVar16 ^ uVar3) + local_3c + uVar13;
  uStack_5c = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar1 = (uVar1 >> 0x18 | uVar1 * 0x100) + uVar15;
  uVar2 = (uVar5 >> 0x13 | uVar5 * 0x2000) + uVar11;
  uVar5 = ((uVar4 | local_70 ^ 0xffffffff) ^ uVar1) + uVar15 + local_c + -0x56ac02b2;
  uVar11 = (uVar3 ^ uStack_5c ^ uVar2) + local_24 + uVar11;
  local_60 = uVar4 >> 0x16 | uVar4 * 0x400;
  local_4c = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = (uVar5 >> 0x1b | uVar5 * 0x20) + uVar14;
  local_54 = (uVar11 >> 0x15 | uVar11 * 0x800) + uVar16;
  uVar4 = (uVar2 ^ local_4c ^ local_54) + local_1c + uVar16;
  uVar5 = ((uVar1 | local_60 ^ 0xffffffff) ^ uVar3) + uVar14 + local_14 + -0x56ac02b2;
  local_58 = (uVar4 >> 0x15 | uVar4 * 0x800) + uStack_5c;
  local_6c = (uVar5 >> 0x1a | uVar5 * 0x40) + local_70;
  local_50 = uVar2 >> 0x16 | uVar2 * 0x400;
  local_64 = uVar1 >> 0x16 | uVar1 * 0x400;
  local_68 = uVar8 + local_50 + uVar3;
  *(int *)(param_1 + 8) = local_68;
  *(uint *)(param_1 + 0xc) = uVar7 + local_4c + local_64;
  *(uint *)(param_1 + 0x10) = uVar9 + uStack_5c + local_60;
  *(uint *)(param_1 + 0x14) = iVar10 + local_70 + local_58;
  *(uint *)(param_1 + 0x18) = iVar6 + local_54 + local_6c;
  FUN_710073b460(&local_70,0x68);
  return 0;
}



// ===== FUN_710073cb90 @ 710073cb90 (size=284) =====

undefined8 FUN_710073cb90(uint *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar1 = *param_1;
  uVar3 = uVar1 & 0x3f;
  uVar4 = (ulong)(0x40 - uVar3);
  *param_1 = uVar1 + (uint)param_3;
  if (CARRY4(uVar1,(uint)param_3)) {
    param_1[1] = param_1[1] + 1;
  }
  if (uVar3 != 0 && uVar4 <= param_3) {
    FUN_710080f900((long)(param_1 + 7) + (ulong)uVar3,param_2,uVar4);
    uVar2 = FUN_710073b4f0(param_1,param_1 + 7);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    param_3 = param_3 - uVar4;
    param_2 = param_2 + uVar4;
    uVar3 = 0;
    goto joined_r0x00710073cc60;
  }
  if (0x3f < param_3) {
    do {
      param_3 = param_3 - 0x40;
      uVar2 = FUN_710073b4f0(param_1,param_2);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      param_2 = param_2 + 0x40;
joined_r0x00710073cc60:
    } while (0x3f < param_3);
    if (param_3 == 0) {
      return 0;
    }
  }
  FUN_710080f900((long)param_1 + (ulong)uVar3 + 0x1c,param_2,param_3);
  return 0;
}



// ===== FUN_710073ccb0 @ 710073ccb0 (size=360) =====

void FUN_710073ccb0(ulong *param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 local_8;
  
  uVar2 = (uint)*param_1;
  uVar3 = *(uint *)((long)param_1 + 4);
  uVar1 = uVar2 & 0x3f;
  iVar4 = 0x78 - uVar1;
  if (uVar1 < 0x38) {
    iVar4 = 0x38 - uVar1;
  }
  local_8 = CONCAT17((char)(uVar3 >> 0x15),
                     CONCAT16((char)(uVar3 >> 0xd),
                              CONCAT15((char)(uVar3 >> 5),
                                       CONCAT14((char)(*param_1 >> 0x1d),
                                                CONCAT13((char)(uVar2 >> 0x15),
                                                         CONCAT12((char)(uVar2 >> 0xd),
                                                                  CONCAT11((char)(uVar2 >> 5),
                                                                           (char)uVar2 << 3)))))));
  iVar4 = FUN_710073cb90(param_1,&DAT_71009c3d00,iVar4);
  if ((iVar4 == 0) && (iVar4 = FUN_710073cb90(param_1,&local_8,8), iVar4 == 0)) {
    *param_2 = (char)(uint)param_1[1];
    param_2[1] = (char)((uint)param_1[1] >> 8);
    param_2[2] = (char)*(undefined2 *)((long)param_1 + 10);
    param_2[3] = *(undefined1 *)((long)param_1 + 0xb);
    param_2[4] = (char)*(uint *)((long)param_1 + 0xc);
    param_2[5] = (char)(*(uint *)((long)param_1 + 0xc) >> 8);
    param_2[6] = (char)*(undefined2 *)((long)param_1 + 0xe);
    param_2[7] = *(undefined1 *)((long)param_1 + 0xf);
    param_2[8] = (char)(uint)param_1[2];
    param_2[9] = (char)((uint)param_1[2] >> 8);
    param_2[10] = (char)*(undefined2 *)((long)param_1 + 0x12);
    param_2[0xb] = *(undefined1 *)((long)param_1 + 0x13);
    param_2[0xc] = (char)*(uint *)((long)param_1 + 0x14);
    param_2[0xd] = (char)(*(uint *)((long)param_1 + 0x14) >> 8);
    param_2[0xe] = (char)*(undefined2 *)((long)param_1 + 0x16);
    param_2[0xf] = *(undefined1 *)((long)param_1 + 0x17);
    param_2[0x10] = (char)(uint)param_1[3];
    param_2[0x11] = (char)((uint)param_1[3] >> 8);
    param_2[0x12] = (char)*(undefined2 *)((long)param_1 + 0x1a);
    param_2[0x13] = *(undefined1 *)((long)param_1 + 0x1b);
    return;
  }
  return;
}



// ===== FUN_710073ce20 @ 710073ce20 (size=164) =====

int FUN_710073ce20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_60 [96];
  
  FUN_710073b480(auStack_60);
  iVar1 = FUN_710073b4b0(auStack_60);
  if ((iVar1 == 0) && (iVar1 = FUN_710073cb90(auStack_60,param_1,param_2), iVar1 == 0)) {
    iVar1 = FUN_710073ccb0(auStack_60,param_3);
    FUN_710073b4a0(auStack_60);
    return iVar1;
  }
  FUN_710073b4a0(auStack_60);
  return iVar1;
}



// ===== FUN_710073ced0 @ 710073ced0 (size=312) =====

int FUN_710073ced0(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined3 local_48;
  char cStack_45;
  byte bStack_41;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  local_48 = 0;
  cStack_45 = '\0';
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  uStack_18 = 0;
  uStack_10 = 0;
  uStack_8 = 0;
  uVar4 = FUN_7100738660(*param_5);
  if (param_2 != 0) {
    do {
      while( true ) {
        uVar1 = uVar4 & 0xff;
        if (param_2 < (uVar4 & 0xff)) {
          uVar1 = param_2;
        }
        iVar3 = FUN_71007381a0(param_5);
        if (iVar3 != 0) goto LAB_710073cfcc;
        iVar3 = FUN_7100738240(param_5,param_3,param_4);
        if (iVar3 != 0) goto LAB_710073cfcc;
        iVar3 = FUN_7100738240(param_5,&local_48,4);
        if (iVar3 != 0) goto LAB_710073cfcc;
        iVar3 = FUN_71007382b0(param_5,&local_40);
        if (iVar3 != 0) goto LAB_710073cfcc;
        uVar5 = 1;
        if (uVar1 != 0) break;
        cStack_45 = cStack_45 + '\x01';
      }
      do {
        bVar2 = uVar1 != uVar5;
        *(byte *)(param_1 + -1 + uVar5) = *(byte *)(param_1 + -1 + uVar5) ^ (&bStack_41)[uVar5];
        uVar5 = uVar5 + 1;
      } while (bVar2);
      param_2 = param_2 - uVar1;
      param_1 = param_1 + uVar1;
      cStack_45 = cStack_45 + '\x01';
    } while (param_2 != 0);
  }
  iVar3 = 0;
LAB_710073cfcc:
  FUN_710073b460(&local_40,0x40);
  return iVar3;
}



// ===== FUN_710073d010 @ 710073d010 (size=484) =====

undefined8
FUN_710073d010(int param_1,ulong param_2,undefined8 param_3,ulong param_4,undefined2 *param_5)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined2 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong local_10;
  undefined8 uStack_8;
  
  local_10 = 0;
  uStack_8 = 0;
  if (param_1 == 0) {
    param_2 = param_2 & 0xffffffff;
    if ((param_2 <= param_4) && (param_4 = param_4 - param_2, 10 < param_4)) {
      puVar7 = param_5 + 1;
      *param_5 = 0x100;
      FUN_7100808340(puVar7,0xff,param_4 - 3);
      *(undefined1 *)((long)puVar7 + (param_4 - 3)) = 0;
      FUN_710080f900((long)puVar7 + (param_4 - 2),param_3,param_2);
      return 0;
    }
  }
  else {
    lVar5 = FUN_7100737ec0();
    if ((lVar5 != 0) && (iVar4 = FUN_7100747310(param_1,&uStack_8,&local_10), iVar4 == 0)) {
      bVar3 = FUN_7100738660(lVar5);
      uVar1 = (uint)bVar3;
      if (((uVar1 + 8) + local_10 < 0x80) &&
         ((uVar8 = local_10 + (uVar1 + 10),
          !CARRY8(local_10,(ulong)(uVar1 + 10)) && uVar8 <= param_4 &&
          (uVar8 = param_4 - uVar8, 10 < uVar8)))) {
        lVar9 = uVar8 - 3;
        *param_5 = 0x100;
        lVar6 = FUN_7100808340(param_5 + 1,0xff,lVar9);
        lVar5 = lVar6 + lVar9;
        *(undefined2 *)(lVar6 + lVar9) = 0x3000;
        *(undefined1 *)(lVar5 + 3) = 0x30;
        cVar2 = (char)local_10;
        *(byte *)(lVar5 + 2) = bVar3 + cVar2 + '\b';
        *(undefined1 *)(lVar5 + 5) = 6;
        *(char *)(lVar5 + 4) = cVar2 + '\x04';
        *(char *)(lVar5 + 6) = cVar2;
        lVar6 = FUN_710080f900(lVar5 + 7,uStack_8,local_10);
        lVar5 = lVar6 + local_10;
        *(undefined2 *)(lVar6 + local_10) = 5;
        *(undefined1 *)(lVar5 + 2) = 4;
        *(byte *)(lVar5 + 3) = bVar3;
        lVar5 = FUN_710080f900(lVar5 + 4,param_3,(ulong)uVar1);
        if ((long)param_5 + param_4 == lVar5 + (ulong)uVar1) {
          return 0;
        }
        FUN_710073b460(param_5,param_4);
      }
    }
  }
  return 0xffffbf80;
}



// ===== FUN_710073d200 @ 710073d200 (size=320) =====

undefined8 FUN_710073d200(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x10;
  lVar4 = *(long *)(param_1 + 8);
  lVar3 = FUN_7100729c10(lVar1);
  if (lVar4 != lVar3) {
    return 0xffffbf80;
  }
  if (0x400 < *(ulong *)(param_1 + 8)) {
    return 0xffffbf80;
  }
  iVar2 = FUN_710072a2a0(lVar1,0);
  if (iVar2 < 1) {
    return 0xffffbf80;
  }
  iVar2 = FUN_7100729a90(lVar1,0);
  if (iVar2 == 0) {
    return 0xffffbf80;
  }
  if (param_2 == 0) {
    iVar2 = FUN_710072a2a0(param_1 + 0x28,0);
  }
  else {
    iVar2 = FUN_710072a2a0(param_1 + 0x58,0);
    if (iVar2 < 1) {
      return 0xffffbf80;
    }
    iVar2 = FUN_7100729a90(param_1 + 0x58,0);
    if (iVar2 == 0) {
      return 0xffffbf80;
    }
    iVar2 = FUN_710072a2a0(param_1 + 0x70,0);
    if (iVar2 < 1) {
      return 0xffffbf80;
    }
    iVar2 = FUN_7100729a90(param_1 + 0x70,0);
    if (iVar2 == 0) {
      return 0xffffbf80;
    }
    iVar2 = FUN_710072a2a0(param_1 + 0x28,0);
    if (iVar2 < 1) {
      return 0xffffbf80;
    }
    iVar2 = FUN_710072a2a0(param_1 + 0x88,0);
    if (iVar2 < 1) {
      return 0xffffbf80;
    }
    iVar2 = FUN_710072a2a0(param_1 + 0xa0,0);
    if (iVar2 < 1) {
      return 0xffffbf80;
    }
    iVar2 = FUN_710072a2a0(param_1 + 0xb8,0);
  }
  if (iVar2 < 1) {
    return 0xffffbf80;
  }
  return 0;
}



// ===== FUN_710073d340 @ 710073d340 (size=208) =====

int FUN_710073d340(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((((((param_2 == 0) || (iVar1 = FUN_7100729900(param_1 + 0x10), iVar1 == 0)) &&
        ((param_3 == 0 || (iVar1 = FUN_7100729900(param_1 + 0x58,param_3), iVar1 == 0)))) &&
       ((param_4 == 0 || (iVar1 = FUN_7100729900(param_1 + 0x70,param_4), iVar1 == 0)))) &&
      ((param_5 == 0 || (iVar1 = FUN_7100729900(param_1 + 0x40,param_5), iVar1 == 0)))) &&
     ((param_6 == 0 || (iVar1 = FUN_7100729900(param_1 + 0x28,param_6), iVar1 == 0)))) {
    if (param_2 != 0) {
      uVar2 = FUN_7100729c10(param_1 + 0x10);
      *(undefined8 *)(param_1 + 8) = uVar2;
    }
    return 0;
  }
  return iVar1 + -0x4080;
}



// ===== FUN_710073d410 @ 710073d410 (size=236) =====

int FUN_710073d410(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6,undefined8 param_7,long param_8,undefined8 param_9,long param_10,
                  undefined8 param_11)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    iVar1 = FUN_7100729cb0(param_1 + 0x10);
    if (iVar1 != 0) goto LAB_710073d4e0;
    uVar2 = FUN_7100729c10(param_1 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar2;
  }
  if (((((param_4 == 0) || (iVar1 = FUN_7100729cb0(param_1 + 0x58,param_4,param_5), iVar1 == 0)) &&
       ((param_6 == 0 || (iVar1 = FUN_7100729cb0(param_1 + 0x70,param_6,param_7), iVar1 == 0)))) &&
      ((param_8 == 0 || (iVar1 = FUN_7100729cb0(param_1 + 0x40,param_8,param_9), iVar1 == 0)))) &&
     ((param_10 == 0 || (iVar1 = FUN_7100729cb0(param_1 + 0x28,param_10,param_11), iVar1 == 0)))) {
    return 0;
  }
LAB_710073d4e0:
  return iVar1 + -0x4080;
}



// ===== FUN_710073d500 @ 710073d500 (size=732) =====

ulong FUN_710073d500(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  
  lVar1 = param_1 + 0x10;
  lVar2 = param_1 + 0x40;
  lVar3 = param_1 + 0x58;
  lVar4 = param_1 + 0x70;
  lVar5 = param_1 + 0x28;
  iVar6 = FUN_710072a2a0(lVar1,0);
  iVar7 = FUN_710072a2a0(lVar3,0);
  iVar8 = FUN_710072a2a0(lVar4,0);
  iVar9 = FUN_710072a2a0(lVar2,0);
  iVar10 = FUN_710072a2a0(lVar5,0);
  iVar11 = FUN_710072a2a0(param_1 + 0x88,0);
  iVar12 = FUN_710072a2a0(param_1 + 0xa0,0);
  iVar13 = FUN_710072a2a0(param_1 + 0xb8,0);
  if (iVar7 == 0 || iVar8 == 0) {
    if (iVar6 == 0 || iVar7 != 0) {
      return 0xffffbf80;
    }
    if (iVar8 != 0 || iVar9 == 0) {
      if (iVar8 != 0 || iVar9 != 0) {
        return 0xffffbf80;
      }
      if (iVar10 == 0) {
        return 0xffffbf80;
      }
      uVar16 = 0;
      goto LAB_710073d64c;
    }
    if (iVar10 == 0) {
      return 0xffffbf80;
    }
    iVar6 = FUN_710073f8b0(lVar1,lVar5,lVar2,lVar3,lVar4);
joined_r0x00710073d6d4:
    if (iVar6 != 0) {
LAB_710073d6d8:
      return (ulong)(iVar6 - 0x4080);
    }
  }
  else {
    if (iVar9 == 0 || iVar10 == 0) {
      if (iVar9 != 0 || iVar10 == 0) {
        return 0xffffbf80;
      }
      if (iVar6 == 0) {
        iVar6 = FUN_710072a710(lVar1,lVar3,lVar4);
        if (iVar6 != 0) goto LAB_710073d6d8;
        uVar15 = FUN_7100729c10(lVar1);
        *(undefined8 *)(param_1 + 8) = uVar15;
      }
      iVar6 = FUN_710073fbe0(lVar3,lVar4,lVar5,lVar2);
      goto joined_r0x00710073d6d4;
    }
    if (iVar6 == 0) {
      iVar6 = FUN_710072a710(lVar1,lVar3,lVar4);
      if (iVar6 != 0) goto LAB_710073d6d8;
      uVar15 = FUN_7100729c10(lVar1);
      *(undefined8 *)(param_1 + 8) = uVar15;
    }
  }
  if (((iVar11 == 0 || iVar12 == 0) || iVar13 == 0) &&
     (iVar6 = FUN_7100740220(lVar3,lVar4,lVar2,param_1 + 0x88,param_1 + 0xa0,param_1 + 0xb8),
     iVar6 != 0)) {
    return (ulong)(iVar6 - 0x4080);
  }
  uVar16 = 1;
LAB_710073d64c:
  uVar14 = FUN_710073d200(param_1,uVar16);
  return uVar14;
}



// ===== FUN_710073d7e0 @ 710073d7e0 (size=12) =====

void FUN_710073d7e0(long param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x148) = param_2;
  *(undefined4 *)(param_1 + 0x14c) = param_3;
  return;
}



// ===== FUN_710073d7f0 @ 710073d7f0 (size=68) =====

void FUN_710073d7f0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_7100808340(param_1,0,0x150);
  FUN_710073d7e0(param_1,param_2,param_3);
  return;
}



// ===== FUN_710073d840 @ 710073d840 (size=8) =====

undefined8 FUN_710073d840(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ===== FUN_710073d850 @ 710073d850 (size=140) =====

undefined8 FUN_710073d850(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  iVar2 = FUN_710073d200(param_1,0);
  if (iVar2 == 0) {
    uVar3 = FUN_7100729ba0(param_1 + 0x10);
    if (0x7f < uVar3) {
      lVar1 = param_1 + 0x28;
      iVar2 = FUN_7100729a90(lVar1,0);
      if (((iVar2 != 0) && (uVar3 = FUN_7100729ba0(lVar1), 1 < uVar3)) &&
         (iVar2 = FUN_710072a1c0(lVar1,param_1 + 0x10), iVar2 < 0)) {
        return 0;
      }
    }
  }
  return 0xffffbe00;
}



// ===== FUN_710073d8e0 @ 710073d8e0 (size=152) =====

undefined8 FUN_710073d8e0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_710073d850();
  if ((iVar1 == 0) && (iVar1 = FUN_710073d200(param_1,1), iVar1 == 0)) {
    iVar1 = FUN_710073fee0(param_1 + 0x10,param_1 + 0x58,param_1 + 0x70,param_1 + 0x40,
                           param_1 + 0x28,0,0);
    if ((iVar1 == 0) &&
       (uVar2 = FUN_710073fd30(param_1 + 0x58,param_1 + 0x70,param_1 + 0x40,param_1 + 0x88,
                               param_1 + 0xa0,param_1 + 0xb8), (int)uVar2 == 0)) {
      return uVar2;
    }
  }
  return 0xffffbe00;
}



// ===== FUN_710073d980 @ 710073d980 (size=92) =====

undefined8 FUN_710073d980(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_710073d850();
  if ((((iVar1 != 0) || (iVar1 = FUN_710073d8e0(param_2), iVar1 != 0)) ||
      (iVar1 = FUN_710072a1c0(param_1 + 0x10,param_2 + 0x10), iVar1 != 0)) ||
     (uVar2 = FUN_710072a1c0(param_1 + 0x28,param_2 + 0x28), (int)uVar2 != 0)) {
    uVar2 = 0xffffbe00;
  }
  return uVar2;
}



// ===== FUN_710073d9e0 @ 710073d9e0 (size=292) =====

int FUN_710073d9e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_18 [24];
  
  iVar1 = FUN_710073d200(param_1,0);
  if (iVar1 == 0) {
    FUN_7100729690(auStack_18);
    iVar1 = FUN_7100729cb0(auStack_18,param_2,*(undefined8 *)(param_1 + 8));
    if (iVar1 == 0) {
      iVar1 = FUN_710072a1c0(auStack_18,param_1 + 0x10);
      if (-1 < iVar1) {
        FUN_71007296a0(auStack_18);
        return -0x4284;
      }
      uVar2 = *(undefined8 *)(param_1 + 8);
      iVar1 = FUN_710072b130(auStack_18,auStack_18,param_1 + 0x28,param_1 + 0x10,param_1 + 0xd0);
      if (iVar1 == 0) {
        iVar1 = FUN_7100729e40(auStack_18,param_3,uVar2);
        FUN_71007296a0(auStack_18);
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = iVar1 + -0x4280;
        }
      }
      else {
        FUN_71007296a0(auStack_18);
        iVar1 = iVar1 + -0x4280;
      }
    }
    else {
      FUN_71007296a0(auStack_18);
      iVar1 = iVar1 + -0x4280;
    }
  }
  else {
    iVar1 = -0x4080;
  }
  return iVar1;
}



// ===== FUN_710073db10 @ 710073db10 (size=2308) =====

int FUN_710073db10(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  long local_160;
  undefined1 *local_150;
  undefined1 *local_148;
  long local_138;
  long local_130;
  int local_11c;
  long local_118;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [24];
  undefined1 auStack_18 [24];
  
  iVar3 = FUN_710073d200(param_1,1);
  if (iVar3 != 0) {
    return -0x4080;
  }
  FUN_7100729690(auStack_108);
  FUN_7100729690(auStack_f0);
  FUN_7100729690(auStack_d8);
  FUN_7100729690(auStack_c0);
  if (param_2 == 0) {
    FUN_7100729690(auStack_a8);
    FUN_7100729690(auStack_90);
    FUN_7100729690(auStack_48);
    FUN_7100729690(auStack_30);
    iVar3 = FUN_7100729cb0(auStack_108,param_4,*(undefined8 *)(param_1 + 8));
    if (iVar3 != 0) {
LAB_710073dd58:
      FUN_71007296a0(auStack_f0);
      FUN_71007296a0(auStack_d8);
      FUN_71007296a0(auStack_c0);
      iVar4 = -0x4300;
      if (iVar3 + 0x7f < 0 != SCARRY4(iVar3,0x7f)) {
        iVar4 = 0;
      }
      iVar4 = iVar4 + iVar3;
      goto LAB_710073dc1c;
    }
    iVar3 = FUN_710072a1c0(auStack_108);
    if (-1 < iVar3) {
      iVar4 = -0x4304;
      FUN_71007296a0(auStack_f0);
      FUN_71007296a0(auStack_d8);
      FUN_71007296a0(auStack_c0);
      goto LAB_710073dc1c;
    }
    iVar3 = FUN_7100729900(auStack_48,auStack_108);
    if (iVar3 == 0) {
      iVar3 = FUN_710072b130(auStack_a8,auStack_108,param_1 + 0x88,param_1 + 0x58,param_1 + 0xe8);
      if (iVar3 != 0) goto LAB_710073dd58;
      puVar5 = (undefined1 *)(param_1 + 0xa0);
LAB_710073df34:
      local_130 = param_1 + 0x70;
      local_138 = param_1 + 0x58;
      local_160 = param_1 + 0x10;
      iVar3 = FUN_710072b130(auStack_90,auStack_108,puVar5,local_130,param_1 + 0x100);
      if (((((iVar3 != 0) || (iVar3 = FUN_710072a680(auStack_108,auStack_a8,auStack_90), iVar3 != 0)
            ) || (iVar3 = FUN_710072a710(auStack_a8,auStack_108,param_1 + 0xb8), iVar3 != 0)) ||
          ((iVar3 = FUN_710072aee0(auStack_108,auStack_a8,local_138), iVar3 != 0 ||
           (iVar3 = FUN_710072a710(auStack_a8,auStack_108,local_130), iVar3 != 0)))) ||
         (iVar3 = FUN_710072a670(auStack_108,auStack_90,auStack_a8), iVar3 != 0))
      goto LAB_710073de04;
      if (param_2 != 0) {
        iVar3 = FUN_710072a710(auStack_108,auStack_108,param_1 + 0x130);
        if (iVar3 == 0) {
          iVar3 = FUN_710072aee0(auStack_108,auStack_108,local_160);
          if ((iVar3 == 0) &&
             (iVar3 = FUN_710072b130(auStack_30,auStack_108,param_1 + 0x28,local_160,param_1 + 0xd0)
             , iVar3 == 0)) {
            iVar3 = FUN_710072a1c0(auStack_30,auStack_48);
            if (iVar3 != 0) {
              iVar4 = -0x4380;
              FUN_71007296a0(auStack_f0);
              FUN_71007296a0(auStack_d8);
              FUN_71007296a0(auStack_c0);
              goto LAB_710073dc0c;
            }
            goto LAB_710073e3e4;
          }
          FUN_71007296a0(auStack_f0);
          FUN_71007296a0(auStack_d8);
          FUN_71007296a0(auStack_c0);
        }
        else {
          FUN_71007296a0(auStack_f0);
          FUN_71007296a0(auStack_d8);
          FUN_71007296a0(auStack_c0);
        }
        iVar4 = -0x4300;
        if (iVar3 + 0x7f < 0 != SCARRY4(iVar3,0x7f)) {
          iVar4 = 0;
        }
        iVar4 = iVar4 + iVar3;
        goto LAB_710073dc0c;
      }
      iVar3 = FUN_710072b130(auStack_30,auStack_108,param_1 + 0x28,local_160,param_1 + 0xd0);
      if (iVar3 != 0) goto LAB_710073dd58;
      iVar3 = FUN_710072a1c0(auStack_30,auStack_48);
      if (iVar3 != 0) {
        iVar4 = -0x4380;
        FUN_71007296a0(auStack_f0);
        FUN_71007296a0(auStack_d8);
        FUN_71007296a0(auStack_c0);
        goto LAB_710073dc1c;
      }
LAB_710073e3e4:
      iVar4 = FUN_7100729e40(auStack_108,param_5,*(undefined8 *)(param_1 + 8));
      iVar4 = (-(uint)(iVar4 != 0 && -0x80 < iVar4) & 0xffffbd00) + iVar4;
    }
    else {
LAB_710073de04:
      iVar4 = -0x4300;
      if (iVar3 + 0x7f < 0 != SCARRY4(iVar3,0x7f)) {
        iVar4 = 0;
      }
      iVar4 = iVar4 + iVar3;
    }
    FUN_71007296a0(auStack_f0);
    FUN_71007296a0(auStack_d8);
    FUN_71007296a0(auStack_c0);
    if (param_2 == 0) goto LAB_710073dc1c;
  }
  else {
    FUN_7100729690();
    puVar5 = auStack_60;
    FUN_7100729690();
    FUN_7100729690(auStack_a8);
    FUN_7100729690(auStack_90);
    FUN_7100729690(auStack_48);
    FUN_7100729690(auStack_30);
    iVar3 = FUN_7100729cb0(auStack_108,param_4,*(undefined8 *)(param_1 + 8));
    if (iVar3 != 0) goto LAB_710073dbdc;
    lVar1 = param_1 + 0x10;
    iVar3 = FUN_710072a1c0(auStack_108);
    if (-1 < iVar3) {
      iVar4 = -0x4304;
      FUN_71007296a0(auStack_f0);
      FUN_71007296a0(auStack_d8);
      FUN_71007296a0(auStack_c0);
      goto LAB_710073dc0c;
    }
    iVar3 = FUN_7100729900(auStack_48,auStack_108);
    if (iVar3 != 0) goto LAB_710073de04;
    FUN_7100729690();
    if (*(long *)(param_1 + 0x140) == 0) {
      local_11c = 0xb;
      lVar2 = param_1 + 0x118;
      do {
        iVar3 = FUN_710072bb80(param_1 + 0x130,*(long *)(param_1 + 8) + -1,param_2,param_3);
        if (iVar3 != 0) {
          iVar4 = -0x4300;
          if (iVar3 + 0x7f < 0 != SCARRY4(iVar3,0x7f)) {
            iVar4 = 0;
          }
          iVar4 = iVar4 + iVar3;
          goto LAB_710073df04;
        }
        iVar3 = FUN_710072bb80(auStack_18,*(long *)(param_1 + 8) + -1,param_2,param_3);
        if (((iVar3 != 0) || (iVar3 = FUN_710072a710(lVar2,param_1 + 0x130,auStack_18), iVar3 != 0))
           || (iVar3 = FUN_710072aee0(lVar2,lVar2,lVar1), iVar3 != 0)) {
          iVar4 = -0x4300;
          if (iVar3 + 0x7f < 0 != SCARRY4(iVar3,0x7f)) {
            iVar4 = 0;
          }
          iVar4 = iVar4 + iVar3;
          goto LAB_710073df04;
        }
        iVar3 = FUN_710072c030(lVar2,lVar2,lVar1);
        if (iVar3 != 0 && iVar3 != -0xe) {
          iVar4 = -0x4300;
          if (iVar3 + 0x7f < 0 != SCARRY4(iVar3,0x7f)) {
            iVar4 = 0;
          }
          iVar4 = iVar4 + iVar3;
          goto LAB_710073df04;
        }
        if (iVar3 != -0xe) {
          iVar3 = FUN_710072a710(lVar2,lVar2,auStack_18);
          if ((iVar3 != 0) || (iVar3 = FUN_710072aee0(lVar2,lVar2,lVar1), iVar3 != 0))
          goto LAB_710073e058;
          iVar3 = FUN_710072b130(lVar2,lVar2,param_1 + 0x28,lVar1,param_1 + 0xd0);
          goto joined_r0x00710073e0c4;
        }
        local_11c = local_11c + -1;
      } while (local_11c != 0);
      iVar4 = -0x4480;
LAB_710073df04:
      FUN_71007296a0(auStack_18);
    }
    else {
      lVar2 = param_1 + 0x118;
      iVar3 = FUN_710072a710(lVar2,lVar2,lVar2);
      if (iVar3 != 0) {
        FUN_71007296a0(auStack_18);
LAB_710073ddd4:
        FUN_71007296a0(auStack_f0);
        FUN_71007296a0(auStack_d8);
        FUN_71007296a0(auStack_c0);
        iVar4 = -0x4300;
        if (iVar3 + 0x7f < 0 != SCARRY4(iVar3,0x7f)) {
          iVar4 = 0;
        }
        iVar4 = iVar4 + iVar3;
        goto LAB_710073dc0c;
      }
      iVar3 = FUN_710072aee0(lVar2,lVar2,lVar1);
      if (iVar3 == 0) {
        lVar2 = param_1 + 0x130;
        iVar3 = FUN_710072a710(lVar2,lVar2,lVar2);
        if (iVar3 != 0) {
          FUN_71007296a0(auStack_18);
          iVar4 = -0x4300;
          if (iVar3 + 0x7f < 0 != SCARRY4(iVar3,0x7f)) {
            iVar4 = 0;
          }
          iVar4 = iVar4 + iVar3;
          goto LAB_710073df0c;
        }
        iVar3 = FUN_710072aee0(lVar2,lVar2,lVar1);
joined_r0x00710073e0c4:
        if (iVar3 == 0) {
          local_118 = param_1 + 0x118;
          FUN_71007296a0(auStack_18);
          iVar3 = FUN_710072a710(auStack_108,auStack_108,local_118);
          if (iVar3 == 0) {
            iVar3 = FUN_710072aee0(auStack_108,auStack_108,lVar1);
            if (iVar3 != 0) goto LAB_710073ddd4;
            iVar3 = FUN_710072a6d0(auStack_f0,param_1 + 0x58,1);
            if (iVar3 == 0) {
              iVar3 = FUN_710072a6d0(auStack_d8,param_1 + 0x70,1);
              if (((iVar3 == 0) &&
                  (iVar3 = FUN_710072bb80(auStack_c0,0x1c,param_2,param_3), iVar3 == 0)) &&
                 ((iVar3 = FUN_710072a710(auStack_78,auStack_f0,auStack_c0), iVar3 == 0 &&
                  (iVar3 = FUN_710072a670(auStack_78,auStack_78,param_1 + 0x88), iVar3 == 0)))) {
                iVar3 = FUN_710072bb80(auStack_c0,0x1c,param_2,param_3);
                if ((iVar3 == 0) &&
                   (iVar3 = FUN_710072a710(puVar5,auStack_d8,auStack_c0), iVar3 == 0)) {
                  iVar3 = FUN_710072a670(puVar5,puVar5,param_1 + 0xa0);
                  if ((iVar3 == 0) &&
                     (iVar3 = FUN_710072b130(auStack_a8,auStack_108,auStack_78,param_1 + 0x58,
                                             param_1 + 0xe8), iVar3 == 0)) goto LAB_710073df34;
                  goto LAB_710073dbdc;
                }
                FUN_71007296a0(auStack_f0);
                FUN_71007296a0(auStack_d8);
                FUN_71007296a0(auStack_c0);
                iVar4 = -0x4300;
                if (iVar3 + 0x7f < 0 != SCARRY4(iVar3,0x7f)) {
                  iVar4 = 0;
                }
                iVar4 = iVar4 + iVar3;
              }
              else {
                FUN_71007296a0(auStack_f0);
                FUN_71007296a0(auStack_d8);
                FUN_71007296a0(auStack_c0);
                iVar4 = -0x4300;
                if (iVar3 + 0x7f < 0 != SCARRY4(iVar3,0x7f)) {
                  iVar4 = 0;
                }
                iVar4 = iVar4 + iVar3;
              }
            }
            else {
              FUN_71007296a0(auStack_f0);
              FUN_71007296a0(auStack_d8);
              FUN_71007296a0(auStack_c0);
              iVar4 = -0x4300;
              if (iVar3 + 0x7f < 0 != SCARRY4(iVar3,0x7f)) {
                iVar4 = 0;
              }
              iVar4 = iVar4 + iVar3;
            }
          }
          else {
LAB_710073dbdc:
            FUN_71007296a0(auStack_f0);
            FUN_71007296a0(auStack_d8);
            FUN_71007296a0(auStack_c0);
            iVar4 = -0x4300;
            if (iVar3 + 0x7f < 0 != SCARRY4(iVar3,0x7f)) {
              iVar4 = 0;
            }
            iVar4 = iVar4 + iVar3;
          }
          goto LAB_710073dc0c;
        }
      }
LAB_710073e058:
      FUN_71007296a0(auStack_18);
      iVar4 = -0x4300;
      if (iVar3 + 0x7f < 0 != SCARRY4(iVar3,0x7f)) {
        iVar4 = 0;
      }
      iVar4 = iVar4 + iVar3;
    }
LAB_710073df0c:
    FUN_71007296a0(auStack_f0);
    FUN_71007296a0(auStack_d8);
    FUN_71007296a0(auStack_c0);
  }
LAB_710073dc0c:
  local_148 = auStack_60;
  local_150 = auStack_78;
  FUN_71007296a0(local_150);
  FUN_71007296a0(local_148);
LAB_710073dc1c:
  FUN_71007296a0(auStack_108);
  FUN_71007296a0(auStack_a8);
  FUN_71007296a0(auStack_90);
  FUN_71007296a0(auStack_30);
  FUN_71007296a0(auStack_48);
  return iVar4;
}



// ===== FUN_710073e420 @ 710073e420 (size=796) =====

int FUN_710073e420(long param_1,code *param_2,undefined8 param_3,int param_4,int param_5,
                  uint param_6,undefined8 param_7,int param_8,byte *param_9)

{
  byte *pbVar1;
  byte *pbVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint local_50;
  undefined1 auStack_18 [24];
  
  uVar9 = (ulong)param_8;
  if (((param_4 == 1) && (*(int *)(param_1 + 0x148) != 1)) || (param_2 == (code *)0x0)) {
    return -0x4080;
  }
  uVar11 = *(ulong *)(param_1 + 8);
  local_50 = param_6;
  if (param_5 != 0) {
    lVar5 = FUN_7100737ec0(param_5);
    if (lVar5 == 0) {
      return -0x4080;
    }
    local_50 = FUN_7100738660();
    local_50 = local_50 & 0xff;
  }
  lVar5 = FUN_7100737ec0(*(undefined4 *)(param_1 + 0x14c));
  if (lVar5 != 0) {
    uVar6 = FUN_7100738660();
    uVar10 = uVar6 & 0xff;
    if (param_8 == -1) {
      if (uVar10 * 2 <= uVar11) {
        uVar9 = (uVar11 - 2) - uVar10;
        if (uVar10 * 2 + 2 <= uVar11) {
          uVar9 = uVar10;
        }
        goto LAB_710073e4ac;
      }
    }
    else if ((-1 < param_8) && (uVar9 + 2 + uVar10 <= uVar11)) {
LAB_710073e4ac:
      FUN_7100808340(param_9,0,uVar11);
      lVar7 = FUN_7100729ba0();
      lVar8 = ((uVar11 - uVar10) + -2) - uVar9;
      pbVar1 = param_9 + lVar8 + 1;
      param_9[lVar8] = 1;
      iVar4 = (*param_2)(param_3,pbVar1,uVar9);
      if (iVar4 != 0) {
        return iVar4 + -0x4480;
      }
      FUN_7100737f50(auStack_18);
      iVar4 = FUN_7100738050(auStack_18,lVar5,0);
      if ((iVar4 == 0) && (iVar4 = FUN_71007381a0(auStack_18), iVar4 == 0)) {
        pbVar2 = pbVar1 + uVar9;
        iVar4 = FUN_7100738240(auStack_18,pbVar2,8);
        if ((iVar4 == 0) &&
           (((iVar4 = FUN_7100738240(auStack_18,param_7,local_50), iVar4 == 0 &&
             (iVar4 = FUN_7100738240(auStack_18,pbVar1,uVar9), iVar4 == 0)) &&
            (iVar4 = FUN_71007382b0(auStack_18,pbVar2), iVar4 == 0)))) {
          bVar3 = (lVar7 - 1U & 7) == 0;
          pbVar1 = param_9;
          if (bVar3) {
            pbVar1 = param_9 + 1;
          }
          iVar4 = FUN_710073ced0(pbVar1,((uVar11 - uVar10) + -1) - (ulong)bVar3,pbVar2,uVar10,
                                 auStack_18);
          if (iVar4 == 0) {
            iVar4 = FUN_7100729ba0(param_1 + 0x10);
            *param_9 = (byte)(0xff >> ((int)uVar11 * 8 - (iVar4 + -1) & 0x1fU)) & *param_9;
            pbVar2[(uint)uVar6 & 0xff] = 0xbc;
            FUN_7100737f60(auStack_18);
            if (param_4 != 0) {
              iVar4 = FUN_710073db10(param_1,param_2,param_3,param_9,param_9);
              return iVar4;
            }
            iVar4 = FUN_710073d9e0(param_1,param_9,param_9);
            return iVar4;
          }
        }
      }
      FUN_7100737f60(auStack_18);
      return iVar4;
    }
  }
  return -0x4080;
}



// ===== FUN_710073e740 @ 710073e740 (size=612) =====

int FUN_710073e740(long param_1,code *param_2,undefined8 param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,ulong param_7,undefined8 param_8,undefined1 *param_9)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 auStack_18 [24];
  
  if ((((param_4 != 1) || (*(int *)(param_1 + 0x148) == 1)) && (param_2 != (code *)0x0)) &&
     (lVar4 = FUN_7100737ec0(*(undefined4 *)(param_1 + 0x14c)), lVar4 != 0)) {
    uVar7 = *(ulong *)(param_1 + 8);
    uVar5 = FUN_7100738660();
    uVar6 = uVar5 & 0xff;
    uVar1 = param_7 + 2 + (uVar5 & 0xff) * 2;
    if (param_7 <= uVar1 && uVar1 <= uVar7) {
      FUN_7100808340(param_9,0,uVar7);
      puVar8 = param_9 + 1;
      *param_9 = 0;
      iVar3 = (*param_2)(param_3,puVar8,uVar6);
      if (iVar3 != 0) {
        return iVar3 + -0x4480;
      }
      iVar3 = FUN_7100738320(lVar4,param_5,param_6);
      if (iVar3 != 0) {
        return iVar3;
      }
      lVar2 = (-2 - param_7) + (uVar5 & 0xff) * -2 + uVar6 + uVar7;
      puVar8[lVar2 + uVar6] = 1;
      if (param_7 != 0) {
        FUN_710080f900(puVar8 + lVar2 + uVar6 + 1,param_8,param_7);
      }
      FUN_7100737f50(auStack_18);
      iVar3 = FUN_7100738050(auStack_18,lVar4,0);
      if (iVar3 == 0) {
        lVar4 = (uVar7 - 1) - uVar6;
        iVar3 = FUN_710073ced0(param_9 + uVar6 + 1,lVar4,puVar8,uVar6,auStack_18);
        if (iVar3 == 0) {
          iVar3 = FUN_710073ced0(puVar8,uVar6,param_9 + uVar6 + 1,lVar4,auStack_18);
          FUN_7100737f60(auStack_18);
          if (iVar3 != 0) {
            return iVar3;
          }
          if (param_4 != 0) {
            iVar3 = FUN_710073db10(param_1,param_2,param_3,param_9);
            return iVar3;
          }
          iVar3 = FUN_710073d9e0(param_1,param_9);
          return iVar3;
        }
      }
      FUN_7100737f60(auStack_18);
      return iVar3;
    }
  }
  return -0x4080;
}



// ===== FUN_710073e9b0 @ 710073e9b0 (size=480) =====

ulong FUN_710073e9b0(long param_1,code *param_2,undefined8 param_3,int param_4,ulong param_5,
                    undefined8 param_6,undefined1 *param_7)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  long lVar6;
  int iVar7;
  
  if ((((param_4 != 1) || (*(int *)(param_1 + 0x148) == 0)) && (param_5 < 0xfffffffffffffff5)) &&
     (param_5 + 0xb <= *(ulong *)(param_1 + 8))) {
    lVar3 = *(ulong *)(param_1 + 8) - param_5;
    *param_7 = 0;
    lVar6 = lVar3 + -3;
    if (param_4 != 0) {
      param_7[1] = 1;
      if (lVar6 == 0) {
        param_7[2] = 0;
        FUN_710080f900(param_7 + 3,param_6,param_5);
      }
      else {
        lVar3 = FUN_7100808340(param_7 + 2,0xff,lVar6);
        *(undefined1 *)(lVar3 + lVar6) = 0;
        if (param_5 != 0) {
          FUN_710080f900(lVar3 + lVar6 + 1,param_6,param_5);
        }
      }
      uVar4 = FUN_710073db10(param_1,param_2,param_3,param_7,param_7);
      return uVar4;
    }
    if (param_2 != (code *)0x0) {
      param_7[1] = 2;
      if (lVar6 == 0) {
        param_7[2] = 0;
        FUN_710080f900(param_7 + 3,param_6,param_5);
      }
      else {
        pcVar1 = param_7 + 2;
        do {
          pcVar5 = pcVar1;
          iVar7 = 100;
          while( true ) {
            iVar2 = (*param_2)(param_3,pcVar5,1);
            iVar7 = iVar7 + -1;
            if (*pcVar5 != '\0') break;
            if ((iVar7 == 0) || (iVar2 != 0)) goto LAB_710073ead0;
          }
          if (iVar2 != 0) {
LAB_710073ead0:
            return (ulong)(iVar2 - 0x4480);
          }
          pcVar1 = pcVar5 + 1;
        } while (param_7 + ((lVar3 + -1) - (long)(pcVar5 + 1)) != (undefined1 *)0x0);
        pcVar5[1] = '\0';
        if (param_5 != 0) {
          FUN_710080f900(pcVar5 + 2,param_6,param_5);
        }
      }
      uVar4 = FUN_710073d9e0(param_1,param_7,param_7);
      return uVar4;
    }
  }
  return 0xffffbf80;
}



// ===== FUN_710073eb90 @ 710073eb90 (size=28) =====

undefined8 FUN_710073eb90(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x148) == 0) {
    uVar1 = FUN_710073e9b0();
    return uVar1;
  }
  if (*(int *)(param_1 + 0x148) != 1) {
    return 0xffffbf00;
  }
  uVar1 = FUN_710073e740();
  return uVar1;
}



// ===== FUN_710073eba8 @ 710073eba8 (size=52) =====

void FUN_710073eba8(void)

{
  FUN_710073e740();
  return;
}



// ===== FUN_710073ebe0 @ 710073ebe0 (size=696) =====

int FUN_710073ebe0(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  ,undefined8 param_6,ulong *param_7,undefined8 param_8,undefined8 param_9,
                  ulong param_10)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar10;
  byte *pbVar11;
  undefined1 auStack_458 [23];
  byte abStack_441 [65];
  byte local_400 [1024];
  byte *pbVar9;
  
  if ((((param_4 != 1) || (*(int *)(param_1 + 0x148) == 1)) &&
      (uVar10 = *(ulong *)(param_1 + 8), uVar10 - 0x10 < 0x3f1)) &&
     (lVar3 = FUN_7100737ec0(*(undefined4 *)(param_1 + 0x14c)), lVar3 != 0)) {
    uVar4 = FUN_7100738660();
    uVar4 = uVar4 & 0xff;
    uVar5 = (int)uVar4 + 1;
    if ((ulong)uVar5 << 1 <= uVar10) {
      if (param_4 == 0) {
        iVar2 = FUN_710073d9e0(param_1,param_8,local_400);
      }
      else {
        iVar2 = FUN_710073db10(param_1,param_2,param_3,param_8,local_400);
      }
      if (iVar2 == 0) {
        FUN_7100737f50(auStack_458);
        iVar2 = FUN_7100738050(auStack_458,lVar3,0);
        if (iVar2 == 0) {
          lVar7 = (uVar10 - 1) - uVar4;
          pbVar9 = local_400 + uVar4 + 1;
          pbVar11 = local_400 + 1;
          iVar2 = FUN_710073ced0(pbVar11,uVar4,pbVar9,lVar7,auStack_458);
          if ((iVar2 == 0) &&
             (iVar2 = FUN_710073ced0(pbVar9,lVar7,pbVar11,uVar4,auStack_458), iVar2 == 0)) {
            FUN_7100737f60(auStack_458);
            iVar2 = FUN_7100738320(lVar3,param_5,param_6,abStack_441 + 1);
            if (iVar2 == 0) {
              pbVar11 = pbVar11 + uVar4;
              if (uVar4 != 0) {
                uVar6 = 1;
                do {
                  bVar1 = uVar4 != uVar6;
                  local_400[0] = local_400[0] | local_400[uVar6 + uVar4] ^ abStack_441[uVar6];
                  uVar6 = uVar6 + 1;
                } while (bVar1);
                pbVar11 = pbVar11 + uVar4;
              }
              lVar3 = (uVar10 - (uVar5 * 2 - 2)) + -2;
              if (lVar3 != 0) {
                uVar5 = 0;
                lVar7 = 0;
                pbVar9 = pbVar11;
                do {
                  pbVar8 = pbVar9 + 1;
                  uVar5 = *pbVar9 | uVar5;
                  lVar7 = lVar7 + (((ulong)(uVar5 | -uVar5) ^ 0x80) >> 7 & 1);
                  pbVar9 = pbVar8;
                } while (pbVar8 != pbVar11 + lVar3);
                pbVar11 = pbVar11 + lVar7;
              }
              if (local_400[0] == 0 && *pbVar11 == 1) {
                uVar10 = uVar10 - (long)(pbVar11 + (1 - (long)local_400));
                if (param_10 < uVar10) {
                  iVar2 = -0x4400;
                }
                else {
                  *param_7 = uVar10;
                  if (uVar10 != 0) {
                    FUN_710080f900(param_9);
                  }
                }
              }
              else {
                iVar2 = -0x4100;
              }
            }
          }
          else {
            FUN_7100737f60(auStack_458);
          }
        }
        else {
          FUN_7100737f60(auStack_458);
        }
      }
      FUN_710073b460(local_400,0x400);
      FUN_710073b460(abStack_441 + 1,0x40);
      return iVar2;
    }
  }
  return -0x4080;
}



// ===== FUN_710073eea0 @ 710073eea0 (size=232) =====

int FUN_710073eea0(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_400 [1024];
  
  lVar2 = *(long *)(param_1 + 8);
  if (param_4 == 1) {
    if (*(int *)(param_1 + 0x148) != 0) {
      return -0x4080;
    }
    if (0x3f0 < lVar2 - 0x10U) {
      return -0x4080;
    }
  }
  else {
    if (0x3f0 < lVar2 - 0x10U) {
      return -0x4080;
    }
    if (param_4 == 0) {
      iVar1 = FUN_710073d9e0(param_1,param_6,auStack_400);
      goto LAB_710073ef00;
    }
  }
  iVar1 = FUN_710073db10(param_1,param_2,param_3,param_6,auStack_400);
LAB_710073ef00:
  if (iVar1 == 0) {
    iVar1 = FUN_710072deb0(param_4,auStack_400,lVar2,param_7,param_8,param_5);
  }
  FUN_710073b460(auStack_400,0x400);
  return iVar1;
}



// ===== FUN_710073ef90 @ 710073ef90 (size=28) =====

undefined8 FUN_710073ef90(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x148) == 0) {
    uVar1 = FUN_710073eea0();
    return uVar1;
  }
  if (*(int *)(param_1 + 0x148) != 1) {
    return 0xffffbf00;
  }
  uVar1 = FUN_710073ebe0();
  return uVar1;
}



// ===== FUN_710073efa8 @ 710073efa8 (size=56) =====

void FUN_710073efa8(void)

{
  FUN_710073ebe0();
  return;
}



// ===== FUN_710073eff0 @ 710073eff0 (size=40) =====

void FUN_710073eff0(void)

{
  FUN_710073e420();
  return;
}



// ===== FUN_710073f020 @ 710073f020 (size=448) =====

ulong FUN_710073f020(long param_1,undefined8 param_2,undefined8 param_3,int param_4,
                    undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  if (param_4 == 1) {
    if ((*(int *)(param_1 + 0x148) != 0) ||
       (iVar1 = FUN_710073d010(param_5,param_6,param_7,*(undefined8 *)(param_1 + 8),param_8),
       iVar1 != 0)) {
      return 0xffffbf80;
    }
  }
  else {
    iVar1 = FUN_710073d010(param_5,param_6,param_7,*(undefined8 *)(param_1 + 8),param_8);
    if (iVar1 != 0) {
      return 0xffffbf80;
    }
    if (param_4 == 0) {
      uVar6 = FUN_710073d9e0(param_1,param_8,param_8);
      return uVar6;
    }
  }
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar3 = FUN_710080e9e0(1,uVar5);
  if (lVar3 != 0) {
    lVar4 = FUN_710080e9e0(1,uVar5);
    if (lVar4 != 0) {
      uVar2 = FUN_710073db10(param_1,param_2,param_3,param_8,lVar3);
      uVar6 = (ulong)uVar2;
      if (uVar2 == 0) {
        uVar2 = FUN_710073d9e0(param_1,lVar3,lVar4);
        uVar6 = (ulong)uVar2;
        if (uVar2 == 0) {
          uVar2 = FUN_710072d9c0(lVar4,param_8,*(undefined8 *)(param_1 + 8));
          if (uVar2 == 0) {
            FUN_710080f900(param_8,lVar3,*(undefined8 *)(param_1 + 8));
            FUN_710073b460(lVar3,*(undefined8 *)(param_1 + 8));
            FUN_710073b460(lVar4,*(undefined8 *)(param_1 + 8));
            FUN_710081c200(lVar3);
            FUN_710081c200(lVar4);
            return (ulong)uVar2;
          }
          uVar6 = 0xffffbd00;
        }
      }
      FUN_710073b460(lVar3,*(undefined8 *)(param_1 + 8));
      FUN_710073b460(lVar4,*(undefined8 *)(param_1 + 8));
      FUN_710081c200(lVar3);
      FUN_710081c200(lVar4);
      FUN_7100808340(param_8,0x21,*(undefined8 *)(param_1 + 8));
      return uVar6;
    }
    FUN_710081c200(lVar3);
  }
  return 0xfffffff0;
}



// ===== FUN_710073f1e0 @ 710073f1e0 (size=32) =====

undefined8 FUN_710073f1e0(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x148) == 0) {
    uVar1 = FUN_710073f020();
    return uVar1;
  }
  if (*(int *)(param_1 + 0x148) != 1) {
    return 0xffffbf00;
  }
  uVar1 = FUN_710073eff0();
  return uVar1;
}



// ===== FUN_710073f200 @ 710073f200 (size=708) =====

int FUN_710073f200(long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
                  uint param_6,undefined8 param_7,undefined4 param_8,int param_9,undefined8 param_10
                  )

{
  char *pcVar1;
  ulong uVar2;
  char *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 local_460;
  undefined1 auStack_458 [24];
  undefined1 auStack_440 [63];
  char acStack_401 [16];
  char acStack_3f1 [1009];
  
  if (param_4 == 1) {
    if (*(int *)(param_1 + 0x148) != 1) {
      return -0x4080;
    }
    uVar11 = *(ulong *)(param_1 + 8);
    if (0x3f0 < uVar11 - 0x10) {
      return -0x4080;
    }
  }
  else {
    uVar11 = *(ulong *)(param_1 + 8);
    if (0x3f0 < uVar11 - 0x10) {
      return -0x4080;
    }
    if (param_4 == 0) {
      iVar6 = FUN_710073d9e0(param_1,param_10,acStack_401 + 1);
      goto LAB_710073f264;
    }
  }
  iVar6 = FUN_710073db10(param_1,param_2,param_3,param_10,acStack_401 + 1);
LAB_710073f264:
  if (iVar6 != 0) {
    return iVar6;
  }
  if ((acStack_401 + 1)[uVar11 - 1] != -0x44) {
    return -0x4100;
  }
  if (param_5 != 0) {
    lVar8 = FUN_7100737ec0(param_5);
    if (lVar8 == 0) {
      return -0x4080;
    }
    param_6 = FUN_7100738660();
    param_6 = param_6 & 0xff;
  }
  lVar8 = FUN_7100737ec0(param_8);
  if (lVar8 != 0) {
    uVar7 = FUN_7100738660();
    local_460 = 0;
    iVar6 = FUN_7100729ba0(param_1 + 0x10);
    uVar12 = iVar6 - 1;
    if ((int)(uint)(byte)acStack_401[1] >> (uVar12 + (1 - (int)uVar11) * 8 & 0x1f) == 0) {
      bVar4 = (uVar12 & 7) != 0;
      uVar2 = uVar11 - 1;
      if (bVar4) {
        uVar2 = uVar11;
      }
      pcVar3 = acStack_401 + 2;
      if (bVar4) {
        pcVar3 = acStack_401 + 1;
      }
      if ((uVar7 & 0xff) + 2 <= uVar2) {
        FUN_7100737f50(auStack_458);
        iVar6 = FUN_7100738050(auStack_458,lVar8,0);
        if (iVar6 == 0) {
          uVar11 = (ulong)(uVar7 & 0xff);
          lVar8 = (uVar2 - uVar11) + -1;
          pcVar1 = pcVar3 + lVar8;
          iVar6 = FUN_710073ced0(pcVar3,lVar8,pcVar1,uVar11,auStack_458);
          if (iVar6 == 0) {
            pcVar10 = pcVar1 + -1;
            acStack_401[1] = (byte)(0xff >> ((int)uVar2 * 8 - uVar12 & 0x1f)) & acStack_401[1];
            if (pcVar3 < pcVar10) {
              do {
                pcVar9 = pcVar3;
                cVar5 = *pcVar9;
                if (cVar5 != '\0') goto LAB_710073f380;
                pcVar3 = pcVar9 + 1;
              } while (pcVar10 != pcVar9 + 1);
              cVar5 = pcVar9[1];
              pcVar9 = pcVar10;
            }
            else {
              cVar5 = *pcVar3;
              pcVar9 = pcVar3;
            }
LAB_710073f380:
            iVar6 = -0x4100;
            if (cVar5 == '\x01') {
              lVar8 = (long)pcVar1 - (long)(pcVar9 + 1);
              if (((((param_9 == -1) || (lVar8 == param_9)) &&
                   (iVar6 = FUN_71007381a0(auStack_458), iVar6 == 0)) &&
                  ((iVar6 = FUN_7100738240(auStack_458,&local_460,8), iVar6 == 0 &&
                   (iVar6 = FUN_7100738240(auStack_458,param_7,param_6), iVar6 == 0)))) &&
                 (iVar6 = FUN_7100738240(auStack_458,pcVar9 + 1,lVar8), iVar6 == 0)) {
                iVar6 = FUN_71007382b0(auStack_458,auStack_440);
                if ((iVar6 == 0) && (iVar6 = FUN_710081ec40(pcVar1,auStack_440,uVar11), iVar6 != 0))
                {
                  iVar6 = -0x4380;
                }
              }
            }
          }
        }
        FUN_7100737f60(auStack_458);
        return iVar6;
      }
    }
  }
  return -0x4080;
}



// ===== FUN_710073f4d0 @ 710073f4d0 (size=52) =====

void FUN_710073f4d0(void)

{
  FUN_710073f200();
  return;
}



// ===== FUN_710073f510 @ 710073f510 (size=404) =====

int FUN_710073f510(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined4 param_5
                  ,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  if ((param_4 == 1) && (*(int *)(param_1 + 0x148) != 0)) {
    iVar1 = -0x4080;
  }
  else {
    lVar2 = FUN_710080e9e0(1,uVar4);
    if (lVar2 != 0) {
      lVar3 = FUN_710080e9e0(1,uVar4);
      if (lVar3 != 0) {
        iVar1 = FUN_710073d010(param_5,param_6,param_7,uVar4,lVar3);
        if (iVar1 == 0) {
          if (param_4 == 0) {
            iVar1 = FUN_710073d9e0(param_1,param_8,lVar2);
          }
          else {
            iVar1 = FUN_710073db10(param_1,param_2,param_3,param_8,lVar2);
          }
          if ((iVar1 == 0) && (iVar1 = FUN_710072d9c0(lVar2,lVar3,uVar4), iVar1 != 0)) {
            FUN_710073b460(lVar2,uVar4);
            iVar1 = -0x4380;
            FUN_710081c200(lVar2);
          }
          else {
            FUN_710073b460(lVar2,uVar4);
            FUN_710081c200(lVar2);
          }
        }
        else {
          FUN_710073b460(lVar2,uVar4);
          iVar1 = -0x4080;
          FUN_710081c200(lVar2);
        }
        FUN_710073b460(lVar3,uVar4);
        FUN_710081c200(lVar3);
        return iVar1;
      }
      FUN_710073b460(lVar2,uVar4);
      FUN_710081c200(lVar2);
    }
    iVar1 = -0x10;
  }
  return iVar1;
}



// ===== FUN_710073f6b0 @ 710073f6b0 (size=32) =====

undefined8 FUN_710073f6b0(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x148) == 0) {
    uVar1 = FUN_710073f510();
    return uVar1;
  }
  if (*(int *)(param_1 + 0x148) != 1) {
    return 0xffffbf00;
  }
  uVar1 = FUN_710073f4d0();
  return uVar1;
}



// ===== FUN_710073f6d0 @ 710073f6d0 (size=136) =====

void FUN_710073f6d0(long param_1)

{
  if (param_1 != 0) {
    FUN_71007296a0(param_1 + 0x118);
    FUN_71007296a0(param_1 + 0x130);
    FUN_71007296a0(param_1 + 0xd0);
    FUN_71007296a0(param_1 + 0x40);
    FUN_71007296a0(param_1 + 0x70);
    FUN_71007296a0(param_1 + 0x58);
    FUN_71007296a0(param_1 + 0x28);
    FUN_71007296a0(param_1 + 0x10);
    FUN_71007296a0(param_1 + 0x100);
    FUN_71007296a0(param_1 + 0xe8);
    FUN_71007296a0(param_1 + 0xb8);
    FUN_71007296a0(param_1 + 0xa0);
    FUN_71007296a0(param_1 + 0x88);
    return;
  }
  return;
}



// ===== FUN_710073f760 @ 710073f760 (size=332) =====

int FUN_710073f760(long param_1,long param_2)

{
  int iVar1;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  iVar1 = FUN_7100729900(param_1 + 0x10,param_2 + 0x10);
  if (iVar1 == 0) {
    iVar1 = FUN_7100729900(param_1 + 0x28,param_2 + 0x28);
    if (iVar1 == 0) {
      iVar1 = FUN_7100729900(param_1 + 0x40,param_2 + 0x40);
      if (iVar1 == 0) {
        iVar1 = FUN_7100729900(param_1 + 0x58,param_2 + 0x58);
        if (iVar1 == 0) {
          iVar1 = FUN_7100729900(param_1 + 0x70,param_2 + 0x70);
          if (iVar1 == 0) {
            iVar1 = FUN_7100729900(param_1 + 0x88,param_2 + 0x88);
            if (iVar1 == 0) {
              iVar1 = FUN_7100729900(param_1 + 0xa0,param_2 + 0xa0);
              if (iVar1 == 0) {
                iVar1 = FUN_7100729900(param_1 + 0xb8,param_2 + 0xb8);
                if (iVar1 == 0) {
                  iVar1 = FUN_7100729900(param_1 + 0xe8,param_2 + 0xe8);
                  if (iVar1 == 0) {
                    iVar1 = FUN_7100729900(param_1 + 0x100,param_2 + 0x100);
                    if (iVar1 == 0) {
                      iVar1 = FUN_7100729900(param_1 + 0xd0,param_2 + 0xd0);
                      if (iVar1 == 0) {
                        iVar1 = FUN_7100729900(param_1 + 0x118,param_2 + 0x118);
                        if (iVar1 == 0) {
                          iVar1 = FUN_7100729900(param_1 + 0x130,param_2 + 0x130);
                          if (iVar1 == 0) {
                            *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0x148);
                            return 0;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_710073f6d0(param_1);
  return iVar1;
}



// ===== FUN_710073f8b0 @ 710073f8b0 (size=804) =====

/* WARNING: Type propagation algorithm not settling */

int FUN_710073f8b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  undefined8 *puVar4;
  ushort uVar5;
  ulong uVar6;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 local_38 [8];
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined6 uStack_10;
  undefined2 uStack_a;
  undefined6 uStack_8;
  
  puVar4 = (undefined8 *)local_38;
  local_38 = (undefined1  [8])0x13110d0b07050302;
  uStack_30 = 0x352f2b29251f1d17;
  uStack_20 = 0x837f716d6b676561;
  uStack_28 = 0x59534f4947433d3b;
  uStack_10 = 0xc7c5c1bfb5b3;
  local_18 = 0xada7a39d97958b89;
  uStack_a = 0xdfd3;
  uStack_8 = 0xfbf1efe9e5e3;
  if (((((param_4 == 0 || param_5 == 0) || (*(long *)(param_4 + 0x10) != 0)) ||
       (*(long *)(param_5 + 0x10) != 0)) ||
      ((iVar3 = FUN_710072a2a0(), iVar3 < 1 || (iVar3 = FUN_710072a2a0(param_3,1), iVar3 < 1)))) ||
     ((iVar3 = FUN_710072a1c0(param_3,param_1), -1 < iVar3 ||
      ((iVar3 = FUN_710072a2a0(param_2,1), iVar3 < 1 ||
       (iVar3 = FUN_710072a1c0(param_2,param_1), -1 < iVar3)))))) {
    return -4;
  }
  FUN_7100729690(auStack_50);
  FUN_7100729690(auStack_68);
  iVar3 = FUN_710072a710(auStack_68,param_3,param_2);
  if ((iVar3 == 0) && (iVar3 = FUN_710072a6d0(auStack_68,auStack_68,1), iVar3 == 0)) {
    uVar2 = FUN_7100729b50(auStack_68);
    if (uVar2 != 0) {
      iVar3 = FUN_710072a030(auStack_68,uVar2);
      if (iVar3 != 0) goto LAB_710073f9a0;
      bVar1 = (**(ulong **)(param_1 + 0x10) & 7) == 1;
      if (bVar1) {
        puVar4 = (undefined8 *)((long)local_38 + 1);
      }
      uVar6 = (ulong)(0x35 - bVar1) & 0xffff;
      if (bVar1) {
        uVar6 = uVar6 + 1;
      }
      do {
        FUN_7100729a10(auStack_50,*(undefined1 *)puVar4);
        iVar3 = FUN_710072b9c0(param_4,auStack_50,param_1);
        if (iVar3 != 0) goto LAB_710073f9a0;
        iVar3 = FUN_710072a2a0(param_4,1);
        if (iVar3 == 0) {
          iVar3 = FUN_710072b130(auStack_50,auStack_50,auStack_68,param_1,param_5);
          if (iVar3 != 0) goto LAB_710073f9a0;
          uVar5 = 1;
          do {
            iVar3 = FUN_710072a2a0(auStack_50,1);
            if (iVar3 == 0) break;
            iVar3 = FUN_710072a690(auStack_50,auStack_50,1);
            if ((iVar3 != 0) || (iVar3 = FUN_710072b9c0(param_4,auStack_50,param_1), iVar3 != 0))
            goto LAB_710073f9a0;
            iVar3 = FUN_710072a2a0(param_4,1);
            if ((iVar3 == 1) && (iVar3 = FUN_710072a1c0(param_4,param_1), iVar3 == -1)) {
              iVar3 = FUN_710072a980(param_5,0,param_1,param_4);
              goto LAB_710073f9a0;
            }
            iVar3 = FUN_710072a6d0(auStack_50,auStack_50,1);
            if ((iVar3 != 0) ||
               (iVar3 = FUN_710072a710(auStack_50,auStack_50,auStack_50), iVar3 != 0))
            goto LAB_710073f9a0;
            uVar5 = uVar5 + 1;
            iVar3 = FUN_710072aee0(auStack_50,auStack_50,param_1);
            if (iVar3 != 0) goto LAB_710073f9a0;
          } while (uVar5 <= uVar2);
          iVar3 = FUN_710072a2a0(auStack_50,1);
          if (iVar3 != 0) break;
        }
        puVar4 = (undefined8 *)((long)puVar4 + 1);
      } while (puVar4 != (undefined8 *)(local_38 + uVar6 + 1));
    }
    iVar3 = -4;
  }
LAB_710073f9a0:
  FUN_71007296a0(auStack_50);
  FUN_71007296a0(auStack_68);
  return iVar3;
}



// ===== FUN_710073fbe0 @ 710073fbe0 (size=336) =====

int FUN_710073fbe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined1 auStack_30 [24];
  undefined1 auStack_18 [24];
  
  if ((((param_4 == 0) || (iVar1 = FUN_710072a2a0(param_4,0), iVar1 != 0)) ||
      (iVar1 = FUN_710072a2a0(param_1,1), iVar1 < 1)) ||
     ((iVar1 = FUN_710072a2a0(param_2,1), iVar1 < 1 ||
      (iVar1 = FUN_710072a2a0(param_3,0), iVar1 == 0)))) {
    iVar1 = -4;
  }
  else {
    FUN_7100729690(auStack_30);
    FUN_7100729690(auStack_18);
    iVar1 = FUN_710072a6d0(auStack_30,param_1,1);
    if (iVar1 == 0) {
      iVar1 = FUN_710072a6d0(auStack_18,param_2,1);
      if (iVar1 == 0) {
        iVar1 = FUN_710072b9c0(param_4,auStack_30,auStack_18);
        if (iVar1 == 0) {
          iVar1 = FUN_710072a710(auStack_30,auStack_30,auStack_18);
          if (iVar1 == 0) {
            iVar1 = FUN_710072a980(auStack_30,0,auStack_30,param_4);
            if (iVar1 == 0) {
              iVar1 = FUN_710072c030(param_4,param_3,auStack_30);
            }
          }
        }
      }
    }
    FUN_71007296a0(auStack_30);
    FUN_71007296a0(auStack_18);
  }
  return iVar1;
}



// ===== FUN_710073fd30 @ 710073fd30 (size=432) =====

int FUN_710073fd30(long param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6)

{
  int iVar1;
  undefined1 auStack_30 [24];
  undefined1 auStack_18 [24];
  
  FUN_7100729690(auStack_30);
  FUN_7100729690(auStack_18);
  if (param_4 == 0) {
LAB_710073fde0:
    if (param_5 != 0) {
      if (param_2 == 0) goto LAB_710073fde8;
      iVar1 = FUN_710072a6d0(auStack_30,param_2,1);
      if (((iVar1 != 0) || (iVar1 = FUN_710072a680(auStack_18,param_5,param_3), iVar1 != 0)) ||
         (iVar1 = FUN_710072aee0(auStack_18,auStack_18,auStack_30), iVar1 != 0))
      goto LAB_710073fda8;
      iVar1 = FUN_710072a2a0(auStack_18,0);
      if (iVar1 != 0) goto LAB_710073fdb4;
    }
    if (param_6 != 0) {
      if (param_1 == 0 || param_2 == 0) goto LAB_710073fde8;
      iVar1 = FUN_710072a710(auStack_30,param_6,param_2);
      if (((iVar1 != 0) || (iVar1 = FUN_710072a6d0(auStack_30,auStack_30,1), iVar1 != 0)) ||
         (iVar1 = FUN_710072aee0(auStack_30,auStack_30,param_1), iVar1 != 0)) goto LAB_710073fda8;
      iVar1 = FUN_710072a2a0(auStack_30,0);
      if (iVar1 != 0) goto LAB_710073fdb4;
    }
    iVar1 = 0;
    goto LAB_710073fdec;
  }
  if (param_1 == 0) {
LAB_710073fde8:
    iVar1 = -0x4080;
  }
  else {
    iVar1 = FUN_710072a6d0(auStack_30,param_1,1);
    if (((iVar1 == 0) && (iVar1 = FUN_710072a680(auStack_18,param_4,param_3), iVar1 == 0)) &&
       (iVar1 = FUN_710072aee0(auStack_18,auStack_18,auStack_30), iVar1 == 0)) {
      iVar1 = FUN_710072a2a0(auStack_18,0);
      if (iVar1 == 0) goto LAB_710073fde0;
    }
    else {
LAB_710073fda8:
      if (iVar1 != -0x4200) {
        if (iVar1 != -0x4080) {
          iVar1 = iVar1 + -0x4200;
          goto LAB_710073fdec;
        }
        goto LAB_710073fde8;
      }
    }
LAB_710073fdb4:
    iVar1 = -0x4200;
  }
LAB_710073fdec:
  FUN_71007296a0(auStack_30);
  FUN_71007296a0(auStack_18);
  return iVar1;
}



// ===== FUN_710073fee0 @ 710073fee0 (size=832) =====

int FUN_710073fee0(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  undefined8 param_7)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined1 auStack_30 [24];
  undefined1 auStack_18 [24];
  
  FUN_7100729690(auStack_30);
  FUN_7100729690(auStack_18);
  if (((param_6 != 0 && param_2 != 0) &&
      (iVar3 = FUN_710072c470(param_2,0x32,param_6,param_7), iVar3 != 0)) ||
     ((param_6 != 0 && param_3 != 0 &&
      (iVar3 = FUN_710072c470(param_3,0x32,param_6,param_7), iVar3 != 0)))) goto LAB_7100740010;
  bVar2 = param_2 == 0;
  bVar1 = param_3 == 0;
  if (bVar2 || bVar1) {
    if (param_1 == 0 || param_4 == 0) goto LAB_7100740068;
LAB_710073ffd4:
    if (param_5 == 0) goto LAB_7100740068;
    iVar3 = FUN_710072a2a0(param_4,1);
    if ((((iVar3 < 1) || (iVar3 = FUN_710072a2a0(param_5,1), iVar3 < 1)) ||
        (iVar3 = FUN_710072a1c0(param_4,param_1), -1 < iVar3)) ||
       (iVar3 = FUN_710072a1c0(param_5,param_1), -1 < iVar3)) goto LAB_7100740010;
    if (bVar2 || bVar1) goto LAB_7100740068;
  }
  else {
    if (param_1 != 0) {
      iVar3 = FUN_710072a710(auStack_30,param_2,param_3);
      if (iVar3 != 0) goto LAB_710073ff8c;
      iVar3 = FUN_710072a2a0(param_1,1);
      if ((iVar3 < 1) || (iVar3 = FUN_710072a1c0(auStack_30,param_1), iVar3 != 0))
      goto LAB_7100740010;
      if (param_4 == 0) goto LAB_7100740068;
      goto LAB_710073ffd4;
    }
    if (param_5 == 0 || param_4 == 0) goto LAB_7100740068;
  }
  iVar3 = FUN_710072a2a0(param_2,1);
  if ((0 < iVar3) && (iVar3 = FUN_710072a2a0(param_3,1), 0 < iVar3)) {
    iVar3 = FUN_710072a710(auStack_30,param_4,param_5);
    if (((iVar3 != 0) ||
        ((iVar3 = FUN_710072a6d0(auStack_30,auStack_30,1), iVar3 != 0 ||
         (iVar3 = FUN_710072a6d0(auStack_18,param_2,1), iVar3 != 0)))) ||
       (iVar3 = FUN_710072aee0(auStack_30,auStack_30,auStack_18), iVar3 != 0)) {
LAB_710073ff8c:
      FUN_71007296a0(auStack_30);
      FUN_71007296a0(auStack_18);
      if (iVar3 == -0x4200) {
        iVar3 = 0;
      }
      return iVar3 + -0x4200;
    }
    iVar3 = FUN_710072a2a0(auStack_30,0);
    if (iVar3 == 0) {
      iVar3 = FUN_710072a710(auStack_30,param_4,param_5);
      if ((((iVar3 != 0) || (iVar3 = FUN_710072a6d0(auStack_30,auStack_30,1), iVar3 != 0)) ||
          (iVar3 = FUN_710072a6d0(auStack_18,param_3,1), iVar3 != 0)) ||
         (iVar3 = FUN_710072aee0(auStack_30,auStack_30,auStack_18), iVar3 != 0))
      goto LAB_710073ff8c;
      iVar3 = FUN_710072a2a0(auStack_30,0);
      if (iVar3 == 0) {
LAB_7100740068:
        FUN_71007296a0(auStack_30);
        FUN_71007296a0(auStack_18);
        return 0;
      }
    }
  }
LAB_7100740010:
  FUN_71007296a0(auStack_30);
  FUN_71007296a0(auStack_18);
  return -0x4200;
}



// ===== FUN_7100740220 @ 7100740220 (size=232) =====

int FUN_7100740220(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6)

{
  int iVar1;
  undefined1 auStack_18 [24];
  
  FUN_7100729690(auStack_18);
  if (param_4 != 0) {
    iVar1 = FUN_710072a6d0(auStack_18,param_1,1);
    if (iVar1 != 0) goto LAB_7100740278;
    iVar1 = FUN_710072aee0(param_4,param_3,auStack_18);
    if (iVar1 != 0) goto LAB_7100740278;
  }
  if (param_5 != 0) {
    iVar1 = FUN_710072a6d0(auStack_18,param_2,1);
    if (iVar1 != 0) goto LAB_7100740278;
    iVar1 = FUN_710072aee0(param_5,param_3,auStack_18);
    if (iVar1 != 0) goto LAB_7100740278;
  }
  iVar1 = 0;
  if (param_6 != 0) {
    iVar1 = FUN_710072c030(param_6,param_2,param_1);
  }
LAB_7100740278:
  FUN_71007296a0(auStack_18);
  return iVar1;
}



// ===== FUN_7100740310 @ 7100740310 (size=24) =====

void FUN_7100740310(undefined8 *param_1)

{
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  return;
}



// ===== FUN_7100740330 @ 7100740330 (size=16) =====

void FUN_7100740330(long param_1)

{
  if (param_1 != 0) {
    FUN_710073b460(param_1,0x5c);
    return;
  }
  return;
}



// ===== FUN_7100740340 @ 7100740340 (size=64) =====

undefined8 FUN_7100740340(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xefcdab8967452301;
  param_1[2] = 0x1032547698badcfe;
  *(undefined4 *)(param_1 + 3) = 0xc3d2e1f0;
  return 0;
}



// ===== FUN_7100740380 @ 7100740380 (size=4132) =====

undefined8 FUN_7100740380(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar7;
  uint uVar8;
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
  uint uVar26;
  uint uVar27;
  uint local_60;
  uint local_5c;
  uint uStack_58;
  uint local_54;
  uint uStack_50;
  uint local_4c;
  uint uStack_48;
  uint local_44;
  uint uStack_40;
  uint local_3c;
  uint uStack_38;
  uint local_34;
  uint uStack_30;
  uint local_2c;
  uint uStack_28;
  uint local_24;
  uint uStack_20;
  int local_1c;
  uint uStack_18;
  uint local_14;
  uint local_10;
  uint uStack_c;
  uint uVar6;
  uint uVar9;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar3 = *(uint *)(param_1 + 0x14);
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = *(uint *)(param_1 + 0xc);
  uVar12 = uVar4 >> 2 | uVar4 << 0x1e;
  uVar5 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
  uVar6 = uVar5 >> 0x10 | uVar5 << 0x10;
  uVar5 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
  uVar7 = uVar5 >> 0x10 | uVar5 << 0x10;
  uVar13 = uVar2 >> 2 | uVar2 << 0x1e;
  uVar5 = ((uVar1 ^ uVar3) & uVar4 ^ uVar3) + (uVar2 >> 0x1b | uVar2 << 5) +
          *(int *)(param_1 + 0x18) + 0x5a827999 + uVar6;
  uVar8 = (param_2[2] & 0xff00ff00) >> 8 | (param_2[2] & 0xff00ff) << 8;
  uVar9 = uVar8 >> 0x10 | uVar8 << 0x10;
  uVar14 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar8 = ((uVar1 ^ uVar12) & uVar2 ^ uVar1) + uVar7 +
          (uVar5 >> 0x1b | uVar5 * 0x20) + uVar3 + 0x5a827999;
  uVar5 = ((uVar12 ^ uVar13) & uVar5 ^ uVar12) + uVar9 +
          (uVar8 >> 0x1b | uVar8 * 0x20) + uVar1 + 0x5a827999;
  uVar10 = (param_2[3] & 0xff00ff00) >> 8 | (param_2[3] & 0xff00ff) << 8;
  uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
  uVar15 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar8 = ((uVar13 ^ uVar14) & uVar8 ^ uVar13) + uVar10 +
          (uVar5 >> 0x1b | uVar5 * 0x20) + uVar12 + 0x5a827999;
  uVar12 = (param_2[4] & 0xff00ff00) >> 8 | (param_2[4] & 0xff00ff) << 8;
  uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
  uVar16 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar5 = ((uVar14 ^ uVar15) & uVar5 ^ uVar14) + uVar12 +
          (uVar8 >> 0x1b | uVar8 * 0x20) + uVar13 + 0x5a827999;
  uVar13 = (param_2[5] & 0xff00ff00) >> 8 | (param_2[5] & 0xff00ff) << 8;
  uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
  uVar17 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar8 = ((uVar15 ^ uVar16) & uVar8 ^ uVar15) + uVar14 +
          (uVar5 >> 0x1b | uVar5 * 0x20) + uVar13 + 0x5a827999;
  uVar14 = (param_2[6] & 0xff00ff00) >> 8 | (param_2[6] & 0xff00ff) << 8;
  uVar14 = uVar14 >> 0x10 | uVar14 << 0x10;
  uVar18 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar11 = (param_2[7] & 0xff00ff00) >> 8 | (param_2[7] & 0xff00ff) << 8;
  uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
  uVar5 = ((uVar16 ^ uVar17) & uVar5 ^ uVar16) + uVar15 +
          (uVar8 >> 0x1b | uVar8 * 0x20) + uVar14 + 0x5a827999;
  uVar19 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar15 = (param_2[8] & 0xff00ff00) >> 8 | (param_2[8] & 0xff00ff) << 8;
  uVar15 = uVar15 >> 0x10 | uVar15 << 0x10;
  uVar8 = ((uVar17 ^ uVar18) & uVar8 ^ uVar17) + uVar16 +
          (uVar5 >> 0x1b | uVar5 * 0x20) + uVar11 + 0x5a827999;
  uVar20 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar16 = (param_2[9] & 0xff00ff00) >> 8 | (param_2[9] & 0xff00ff) << 8;
  uVar16 = uVar16 >> 0x10 | uVar16 << 0x10;
  uVar5 = ((uVar18 ^ uVar19) & uVar5 ^ uVar18) + uVar17 +
          (uVar8 >> 0x1b | uVar8 * 0x20) + uVar15 + 0x5a827999;
  uVar21 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar17 = (param_2[10] & 0xff00ff00) >> 8 | (param_2[10] & 0xff00ff) << 8;
  uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
  uVar8 = ((uVar19 ^ uVar20) & uVar8 ^ uVar19) + uVar18 +
          (uVar5 >> 0x1b | uVar5 * 0x20) + uVar16 + 0x5a827999;
  uVar22 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar18 = (param_2[0xb] & 0xff00ff00) >> 8 | (param_2[0xb] & 0xff00ff) << 8;
  uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
  uVar5 = ((uVar20 ^ uVar21) & uVar5 ^ uVar20) + uVar19 +
          (uVar8 >> 0x1b | uVar8 * 0x20) + uVar17 + 0x5a827999;
  uVar23 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar19 = (param_2[0xc] & 0xff00ff00) >> 8 | (param_2[0xc] & 0xff00ff) << 8;
  uVar19 = uVar19 >> 0x10 | uVar19 << 0x10;
  uVar8 = ((uVar21 ^ uVar22) & uVar8 ^ uVar21) + uVar20 +
          (uVar5 >> 0x1b | uVar5 * 0x20) + uVar18 + 0x5a827999;
  uVar24 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar20 = (param_2[0xd] & 0xff00ff00) >> 8 | (param_2[0xd] & 0xff00ff) << 8;
  uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
  uVar5 = ((uVar22 ^ uVar23) & uVar5 ^ uVar22) + uVar21 +
          (uVar8 >> 0x1b | uVar8 * 0x20) + uVar19 + 0x5a827999;
  uVar25 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar21 = (param_2[0xe] & 0xff00ff00) >> 8 | (param_2[0xe] & 0xff00ff) << 8;
  uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
  uVar8 = ((uVar23 ^ uVar24) & uVar8 ^ uVar23) + uVar22 +
          (uVar5 >> 0x1b | uVar5 * 0x20) + uVar20 + 0x5a827999;
  uVar26 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar22 = (param_2[0xf] & 0xff00ff00) >> 8 | (param_2[0xf] & 0xff00ff) << 8;
  uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
  uVar5 = ((uVar24 ^ uVar25) & uVar5 ^ uVar24) + uVar23 +
          (uVar8 >> 0x1b | uVar8 * 0x20) + uVar21 + 0x5a827999;
  uVar23 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar6 = uVar20 ^ uVar15 ^ uVar9 ^ uVar6;
  uVar27 = uVar6 >> 0x1f | uVar6 << 1;
  uVar8 = ((uVar25 ^ uVar26) & uVar8 ^ uVar25) + uVar24 +
          (uVar5 >> 0x1b | uVar5 * 0x20) + uVar22 + 0x5a827999;
  uVar24 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar5 = ((uVar26 ^ uVar23) & uVar5 ^ uVar26) + uVar25 +
          (uVar8 >> 0x1b | uVar8 * 0x20) + uVar27 + 0x5a827999;
  uVar6 = uVar21 ^ uVar16 ^ uVar10 ^ uVar7;
  uVar7 = uVar6 >> 0x1f | uVar6 << 1;
  uVar25 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar6 = uVar22 ^ uVar17 ^ uVar12 ^ uVar9;
  uVar9 = uVar6 >> 0x1f | uVar6 << 1;
  uVar8 = ((uVar23 ^ uVar24) & uVar8 ^ uVar23) + uVar26 +
          (uVar5 >> 0x1b | uVar5 * 0x20) + uVar7 + 0x5a827999;
  uVar26 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar5 = ((uVar24 ^ uVar25) & uVar5 ^ uVar24) + uVar23 +
          (uVar8 >> 0x1b | uVar8 * 0x20) + uVar9 + 0x5a827999;
  uVar6 = uVar18 ^ uVar27 ^ uVar13 ^ uVar10;
  uVar10 = uVar6 >> 0x1f | uVar6 << 1;
  uVar23 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar6 = uVar19 ^ uVar7 ^ uVar14 ^ uVar12;
  uVar8 = ((uVar25 ^ uVar26) & uVar8 ^ uVar25) + uVar24 +
          (uVar5 >> 0x1b | uVar5 * 0x20) + uVar10 + 0x5a827999;
  uVar12 = uVar6 >> 0x1f | uVar6 << 1;
  uVar24 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar5 = (uVar8 >> 0x1b | uVar8 * 0x20) + uVar12 + 0x6ed9eba1 + (uVar26 ^ uVar23 ^ uVar5) + uVar25;
  uVar6 = uVar20 ^ uVar9 ^ uVar11 ^ uVar13;
  uVar13 = uVar6 >> 0x1f | uVar6 << 1;
  uVar25 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar6 = uVar21 ^ uVar10 ^ uVar15 ^ uVar14;
  uVar8 = (uVar5 >> 0x1b | uVar5 * 0x20) + uVar13 + 0x6ed9eba1 + (uVar23 ^ uVar24 ^ uVar8) + uVar26;
  uVar14 = uVar6 >> 0x1f | uVar6 << 1;
  uVar26 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar5 = (uVar8 >> 0x1b | uVar8 * 0x20) + uVar14 + 0x6ed9eba1 + (uVar24 ^ uVar25 ^ uVar5) + uVar23;
  uVar6 = uVar22 ^ uVar12 ^ uVar16 ^ uVar11;
  uVar11 = uVar6 >> 0x1f | uVar6 << 1;
  uVar23 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar6 = uVar27 ^ uVar13 ^ uVar17 ^ uVar15;
  uVar8 = (uVar5 >> 0x1b | uVar5 * 0x20) + uVar11 + 0x6ed9eba1 + (uVar25 ^ uVar26 ^ uVar8) + uVar24;
  uVar15 = uVar6 >> 0x1f | uVar6 << 1;
  uVar24 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar5 = (uVar8 >> 0x1b | uVar8 * 0x20) + uVar15 + 0x6ed9eba1 + (uVar26 ^ uVar23 ^ uVar5) + uVar25;
  uVar6 = uVar7 ^ uVar14 ^ uVar18 ^ uVar16;
  uVar16 = uVar6 >> 0x1f | uVar6 << 1;
  uVar25 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar6 = uVar9 ^ uVar11 ^ uVar19 ^ uVar17;
  uVar8 = (uVar5 >> 0x1b | uVar5 * 0x20) + uVar16 + 0x6ed9eba1 + (uVar23 ^ uVar24 ^ uVar8) + uVar26;
  uVar17 = uVar6 >> 0x1f | uVar6 << 1;
  uVar26 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar5 = (uVar8 >> 0x1b | uVar8 * 0x20) + uVar17 + 0x6ed9eba1 + (uVar24 ^ uVar25 ^ uVar5) + uVar23;
  uVar6 = uVar10 ^ uVar15 ^ uVar20 ^ uVar18;
  uVar18 = uVar6 >> 0x1f | uVar6 << 1;
  uVar23 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar6 = uVar12 ^ uVar16 ^ uVar21 ^ uVar19;
  uVar8 = (uVar5 >> 0x1b | uVar5 * 0x20) + uVar18 + 0x6ed9eba1 + (uVar25 ^ uVar26 ^ uVar8) + uVar24;
  uVar19 = uVar6 >> 0x1f | uVar6 << 1;
  uVar24 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar5 = (uVar8 >> 0x1b | uVar8 * 0x20) + uVar19 + 0x6ed9eba1 + (uVar26 ^ uVar23 ^ uVar5) + uVar25;
  uVar6 = uVar13 ^ uVar17 ^ uVar22 ^ uVar20;
  uVar20 = uVar6 >> 0x1f | uVar6 << 1;
  uVar25 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar6 = uVar14 ^ uVar18 ^ uVar21 ^ uVar27;
  uVar8 = (uVar5 >> 0x1b | uVar5 * 0x20) + uVar20 + 0x6ed9eba1 + (uVar23 ^ uVar24 ^ uVar8) + uVar26;
  uVar21 = uVar6 >> 0x1f | uVar6 << 1;
  uVar26 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar5 = (uVar8 >> 0x1b | uVar8 * 0x20) + uVar21 + 0x6ed9eba1 + (uVar24 ^ uVar25 ^ uVar5) + uVar23;
  uVar6 = uVar11 ^ uVar19 ^ uVar22 ^ uVar7;
  uVar22 = uVar6 >> 0x1f | uVar6 << 1;
  uVar23 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar6 = uVar15 ^ uVar20 ^ uVar27 ^ uVar9;
  uVar8 = (uVar5 >> 0x1b | uVar5 * 0x20) + uVar22 + 0x6ed9eba1 + (uVar25 ^ uVar26 ^ uVar8) + uVar24;
  uVar24 = uVar6 >> 0x1f | uVar6 << 1;
  uVar27 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar5 = (uVar8 >> 0x1b | uVar8 * 0x20) + uVar24 + 0x6ed9eba1 + (uVar26 ^ uVar23 ^ uVar5) + uVar25;
  uVar6 = uVar16 ^ uVar21 ^ uVar7 ^ uVar10;
  uVar7 = uVar6 >> 0x1f | uVar6 << 1;
  uVar25 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar6 = uVar17 ^ uVar22 ^ uVar9 ^ uVar12;
  uVar8 = (uVar5 >> 0x1b | uVar5 * 0x20) + uVar7 + 0x6ed9eba1 + (uVar23 ^ uVar27 ^ uVar8) + uVar26;
  uVar9 = uVar6 >> 0x1f | uVar6 << 1;
  uVar26 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar5 = (uVar8 >> 0x1b | uVar8 * 0x20) + uVar9 + 0x6ed9eba1 + (uVar27 ^ uVar25 ^ uVar5) + uVar23;
  uVar6 = uVar18 ^ uVar24 ^ uVar10 ^ uVar13;
  uVar10 = uVar6 >> 0x1f | uVar6 << 1;
  uVar23 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar6 = uVar19 ^ uVar7 ^ uVar12 ^ uVar14;
  uVar12 = uVar6 >> 0x1f | uVar6 << 1;
  uVar8 = (uVar5 >> 0x1b | uVar5 * 0x20) + uVar10 + 0x6ed9eba1 + (uVar25 ^ uVar26 ^ uVar8) + uVar27;
  uVar27 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar6 = uVar20 ^ uVar9 ^ uVar13 ^ uVar11;
  uVar5 = (uVar8 >> 0x1b | uVar8 * 0x20) + uVar12 + 0x6ed9eba1 + (uVar26 ^ uVar23 ^ uVar5) + uVar25;
  uVar13 = uVar6 >> 0x1f | uVar6 << 1;
  uVar25 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar8 = (uVar5 >> 0x1b | uVar5 * 0x20) + uVar13 + 0x6ed9eba1 + (uVar23 ^ uVar27 ^ uVar8) + uVar26;
  uVar6 = uVar21 ^ uVar10 ^ uVar14 ^ uVar15;
  uVar14 = uVar6 >> 0x1f | uVar6 << 1;
  uVar26 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar6 = uVar22 ^ uVar12 ^ uVar11 ^ uVar16;
  uVar5 = (uVar8 >> 0x1b | uVar8 * 0x20) + uVar14 + 0x6ed9eba1 + (uVar27 ^ uVar25 ^ uVar5) + uVar23;
  uVar11 = uVar6 >> 0x1f | uVar6 << 1;
  uVar23 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar6 = uVar24 ^ uVar13 ^ uVar15 ^ uVar17;
  uVar8 = (uVar5 >> 0x1b | uVar5 * 0x20) + uVar11 + 0x6ed9eba1 + (uVar25 ^ uVar26 ^ uVar8) + uVar27;
  uVar15 = uVar6 >> 0x1f | uVar6 << 1;
  uVar27 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar6 = uVar7 ^ uVar14 ^ uVar16 ^ uVar18;
  uVar5 = ((uVar5 | uVar23) & uVar26 | uVar5 & uVar23) + (uVar8 >> 0x1b | uVar8 * 0x20) +
          uVar15 + 0x8f1bbcdc + uVar25;
  uVar16 = uVar6 >> 0x1f | uVar6 << 1;
  uVar25 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar6 = uVar9 ^ uVar11 ^ uVar17 ^ uVar19;
  uVar8 = ((uVar8 | uVar27) & uVar23 | uVar8 & uVar27) + uVar26 +
          (uVar5 >> 0x1b | uVar5 * 0x20) + uVar16 + 0x8f1bbcdc;
  uVar17 = uVar6 >> 0x1f | uVar6 << 1;
  uVar26 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar6 = uVar10 ^ uVar15 ^ uVar18 ^ uVar20;
  uVar5 = ((uVar5 | uVar25) & uVar27 | uVar5 & uVar25) + (uVar8 >> 0x1b | uVar8 * 0x20) +
          uVar17 + 0x8f1bbcdc + uVar23;
  uVar18 = uVar6 >> 0x1f | uVar6 << 1;
  uVar23 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar6 = uVar12 ^ uVar16 ^ uVar19 ^ uVar21;
  uVar8 = ((uVar8 | uVar26) & uVar25 | uVar8 & uVar26) + uVar27 +
          (uVar5 >> 0x1b | uVar5 * 0x20) + uVar18 + 0x8f1bbcdc;
  uVar19 = uVar6 >> 0x1f | uVar6 << 1;
  uVar27 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar6 = uVar13 ^ uVar17 ^ uVar20 ^ uVar22;
  uVar5 = ((uVar5 | uVar23) & uVar26 | uVar5 & uVar23) + (uVar8 >> 0x1b | uVar8 * 0x20) +
          uVar19 + 0x8f1bbcdc + uVar25;
  uVar20 = uVar6 >> 0x1f | uVar6 << 1;
  uVar25 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar6 = uVar14 ^ uVar18 ^ uVar21 ^ uVar24;
  uVar8 = ((uVar8 | uVar27) & uVar23 | uVar8 & uVar27) + uVar26 +
          (uVar5 >> 0x1b | uVar5 * 0x20) + uVar20 + 0x8f1bbcdc;
  uVar21 = uVar6 >> 0x1f | uVar6 << 1;
  uVar26 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar6 = uVar11 ^ uVar19 ^ uVar22 ^ uVar7;
  uVar5 = ((uVar5 | uVar25) & uVar27 | uVar5 & uVar25) + (uVar8 >> 0x1b | uVar8 * 0x20) +
          uVar21 + 0x8f1bbcdc + uVar23;
  uVar22 = uVar6 >> 0x1f | uVar6 << 1;
  uVar23 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar6 = uVar15 ^ uVar20 ^ uVar24 ^ uVar9;
  uVar8 = ((uVar8 | uVar26) & uVar25 | uVar8 & uVar26) + uVar27 +
          (uVar5 >> 0x1b | uVar5 * 0x20) + uVar22 + 0x8f1bbcdc;
  uVar24 = uVar6 >> 0x1f | uVar6 << 1;
  uVar27 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar6 = uVar16 ^ uVar21 ^ uVar7 ^ uVar10;
  uVar5 = ((uVar5 | uVar23) & uVar26 | uVar5 & uVar23) + (uVar8 >> 0x1b | uVar8 * 0x20) +
          uVar24 + 0x8f1bbcdc + uVar25;
  uVar7 = uVar6 >> 0x1f | uVar6 << 1;
  uVar25 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar6 = uVar17 ^ uVar22 ^ uVar9 ^ uVar12;
  uVar8 = ((uVar8 | uVar27) & uVar23 | uVar8 & uVar27) + uVar26 +
          (uVar5 >> 0x1b | uVar5 * 0x20) + uVar7 + 0x8f1bbcdc;
  uVar9 = uVar6 >> 0x1f | uVar6 << 1;
  uVar26 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar6 = uVar18 ^ uVar24 ^ uVar10 ^ uVar13;
  uVar5 = ((uVar5 | uVar25) & uVar27 | uVar5 & uVar25) + (uVar8 >> 0x1b | uVar8 * 0x20) +
          uVar9 + 0x8f1bbcdc + uVar23;
  uVar10 = uVar6 >> 0x1f | uVar6 << 1;
  uVar23 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar6 = uVar19 ^ uVar7 ^ uVar12 ^ uVar14;
  uVar8 = ((uVar8 | uVar26) & uVar25 | uVar8 & uVar26) + uVar27 +
          (uVar5 >> 0x1b | uVar5 * 0x20) + uVar10 + 0x8f1bbcdc;
  uVar12 = uVar6 >> 0x1f | uVar6 << 1;
  uVar27 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar6 = uVar20 ^ uVar9 ^ uVar13 ^ uVar11;
  uVar5 = ((uVar5 | uVar23) & uVar26 | uVar5 & uVar23) + (uVar8 >> 0x1b | uVar8 * 0x20) +
          uVar12 + 0x8f1bbcdc + uVar25;
  uVar13 = uVar6 >> 0x1f | uVar6 << 1;
  uVar25 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar6 = uVar21 ^ uVar10 ^ uVar14 ^ uVar15;
  uVar8 = ((uVar8 | uVar27) & uVar23 | uVar8 & uVar27) + uVar26 +
          (uVar5 >> 0x1b | uVar5 * 0x20) + uVar13 + 0x8f1bbcdc;
  uVar14 = uVar6 >> 0x1f | uVar6 << 1;
  uVar26 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar6 = uVar22 ^ uVar12 ^ uVar11 ^ uVar16;
  uVar5 = ((uVar5 | uVar25) & uVar27 | uVar5 & uVar25) + (uVar8 >> 0x1b | uVar8 * 0x20) +
          uVar14 + 0x8f1bbcdc + uVar23;
  uVar11 = uVar6 >> 0x1f | uVar6 << 1;
  uVar23 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar6 = uVar24 ^ uVar13 ^ uVar15 ^ uVar17;
  uVar8 = ((uVar8 | uVar26) & uVar25 | uVar8 & uVar26) + uVar27 +
          (uVar5 >> 0x1b | uVar5 * 0x20) + uVar11 + 0x8f1bbcdc;
  uVar15 = uVar6 >> 0x1f | uVar6 << 1;
  uVar27 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar6 = uVar7 ^ uVar14 ^ uVar16 ^ uVar18;
  uVar5 = ((uVar5 | uVar23) & uVar26 | uVar5 & uVar23) + (uVar8 >> 0x1b | uVar8 * 0x20) +
          uVar15 + 0x8f1bbcdc + uVar25;
  uVar16 = uVar6 >> 0x1f | uVar6 << 1;
  uVar25 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar6 = uVar9 ^ uVar11 ^ uVar17 ^ uVar19;
  uVar8 = ((uVar8 | uVar27) & uVar23 | uVar8 & uVar27) + uVar26 +
          (uVar5 >> 0x1b | uVar5 * 0x20) + uVar16 + 0x8f1bbcdc;
  uVar17 = uVar6 >> 0x1f | uVar6 << 1;
  uVar26 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar6 = uVar10 ^ uVar15 ^ uVar18 ^ uVar20;
  uVar5 = ((uVar5 | uVar25) & uVar27 | uVar5 & uVar25) + (uVar8 >> 0x1b | uVar8 * 0x20) +
          uVar17 + 0x8f1bbcdc + uVar23;
  uVar18 = uVar6 >> 0x1f | uVar6 << 1;
  uVar23 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar6 = uVar12 ^ uVar16 ^ uVar19 ^ uVar21;
  uVar8 = ((uVar8 | uVar26) & uVar25 | uVar8 & uVar26) + uVar27 +
          (uVar5 >> 0x1b | uVar5 * 0x20) + uVar18 + 0x8f1bbcdc;
  uVar19 = uVar6 >> 0x1f | uVar6 << 1;
  uVar27 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar6 = uVar13 ^ uVar17 ^ uVar20 ^ uVar22;
  uVar5 = (uVar8 >> 0x1b | uVar8 * 0x20) + uVar19 + 0xca62c1d6 + (uVar26 ^ uVar23 ^ uVar5) + uVar25;
  uVar20 = uVar6 >> 0x1f | uVar6 << 1;
  uVar25 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar6 = uVar14 ^ uVar18 ^ uVar21 ^ uVar24;
  uVar8 = (uVar5 >> 0x1b | uVar5 * 0x20) + uVar20 + 0xca62c1d6 + (uVar23 ^ uVar27 ^ uVar8) + uVar26;
  uVar21 = uVar6 >> 0x1f | uVar6 << 1;
  uVar26 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar6 = uVar11 ^ uVar19 ^ uVar22 ^ uVar7;
  uVar5 = (uVar8 >> 0x1b | uVar8 * 0x20) + uVar21 + 0xca62c1d6 + (uVar27 ^ uVar25 ^ uVar5) + uVar23;
  uVar22 = uVar6 >> 0x1f | uVar6 << 1;
  uVar23 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar6 = uVar15 ^ uVar20 ^ uVar24 ^ uVar9;
  uVar8 = (uVar5 >> 0x1b | uVar5 * 0x20) + uVar22 + 0xca62c1d6 + (uVar25 ^ uVar26 ^ uVar8) + uVar27;
  local_5c = uVar6 >> 0x1f | uVar6 << 1;
  uVar24 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar6 = uVar16 ^ uVar21 ^ uVar7 ^ uVar10;
  uVar5 = (uVar8 >> 0x1b | uVar8 * 0x20) + local_5c + 0xca62c1d6 +
          (uVar26 ^ uVar23 ^ uVar5) + uVar25;
  uStack_58 = uVar6 >> 0x1f | uVar6 << 1;
  uVar7 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar6 = uVar17 ^ uVar22 ^ uVar9 ^ uVar12;
  uVar8 = (uVar5 >> 0x1b | uVar5 * 0x20) + uStack_58 + 0xca62c1d6 +
          (uVar23 ^ uVar24 ^ uVar8) + uVar26;
  local_54 = uVar6 >> 0x1f | uVar6 << 1;
  uVar9 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar6 = uVar18 ^ local_5c ^ uVar10 ^ uVar13;
  uVar5 = (uVar8 >> 0x1b | uVar8 * 0x20) + local_54 + 0xca62c1d6 + (uVar24 ^ uVar7 ^ uVar5) + uVar23
  ;
  uStack_50 = uVar6 >> 0x1f | uVar6 << 1;
  uVar10 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar6 = uVar19 ^ uStack_58 ^ uVar12 ^ uVar14;
  uVar8 = (uVar5 >> 0x1b | uVar5 * 0x20) + uStack_50 + 0xca62c1d6 + (uVar7 ^ uVar9 ^ uVar8) + uVar24
  ;
  local_4c = uVar6 >> 0x1f | uVar6 << 1;
  uVar12 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar6 = uVar20 ^ local_54 ^ uVar13 ^ uVar11;
  uVar5 = (uVar8 >> 0x1b | uVar8 * 0x20) + local_4c + 0xca62c1d6 + (uVar9 ^ uVar10 ^ uVar5) + uVar7;
  uStack_48 = uVar6 >> 0x1f | uVar6 << 1;
  uVar7 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar6 = uVar21 ^ uStack_50 ^ uVar14 ^ uVar15;
  uVar8 = (uVar5 >> 0x1b | uVar5 * 0x20) + uStack_48 + 0xca62c1d6 +
          (uVar10 ^ uVar12 ^ uVar8) + uVar9;
  local_44 = uVar6 >> 0x1f | uVar6 << 1;
  uVar9 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar6 = uVar22 ^ local_4c ^ uVar11 ^ uVar16;
  uVar5 = (uVar8 >> 0x1b | uVar8 * 0x20) + local_44 + 0xca62c1d6 + (uVar12 ^ uVar7 ^ uVar5) + uVar10
  ;
  uStack_40 = uVar6 >> 0x1f | uVar6 << 1;
  uVar10 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar6 = local_5c ^ uStack_48 ^ uVar15 ^ uVar17;
  local_3c = uVar6 >> 0x1f | uVar6 << 1;
  uVar8 = (uVar5 >> 0x1b | uVar5 * 0x20) + uStack_40 + 0xca62c1d6 + (uVar7 ^ uVar9 ^ uVar8) + uVar12
  ;
  uVar12 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar6 = uStack_58 ^ local_44 ^ uVar16 ^ uVar18;
  uStack_38 = uVar6 >> 0x1f | uVar6 << 1;
  uVar5 = (uVar8 >> 0x1b | uVar8 * 0x20) + local_3c + 0xca62c1d6 + (uVar9 ^ uVar10 ^ uVar5) + uVar7;
  uVar7 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar6 = local_54 ^ uStack_40 ^ uVar17 ^ uVar19;
  uVar8 = (uVar5 >> 0x1b | uVar5 * 0x20) + uStack_38 + 0xca62c1d6 +
          (uVar10 ^ uVar12 ^ uVar8) + uVar9;
  local_34 = uVar6 >> 0x1f | uVar6 << 1;
  uVar9 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar6 = uStack_50 ^ local_3c ^ uVar18 ^ uVar20;
  uStack_30 = uVar6 >> 0x1f | uVar6 << 1;
  uVar5 = (uVar8 >> 0x1b | uVar8 * 0x20) + local_34 + 0xca62c1d6 + (uVar12 ^ uVar7 ^ uVar5) + uVar10
  ;
  uVar10 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar6 = local_4c ^ uStack_38 ^ uVar19 ^ uVar21;
  local_2c = uVar6 >> 0x1f | uVar6 << 1;
  uVar8 = (uVar5 >> 0x1b | uVar5 * 0x20) + uStack_30 + 0xca62c1d6 + (uVar7 ^ uVar9 ^ uVar8) + uVar12
  ;
  uVar6 = uStack_48 ^ local_34 ^ uVar20 ^ uVar22;
  uVar12 = uVar5 >> 2 | uVar5 * 0x40000000;
  uStack_28 = uVar6 >> 0x1f | uVar6 << 1;
  uVar5 = (uVar8 >> 0x1b | uVar8 * 0x20) + local_2c + 0xca62c1d6 + (uVar9 ^ uVar10 ^ uVar5) + uVar7;
  uVar6 = local_44 ^ uStack_30 ^ uVar21 ^ local_5c;
  uStack_c = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar8 = (uVar5 >> 0x1b | uVar5 * 0x20) + uStack_28 + 0xca62c1d6 +
          (uVar10 ^ uVar12 ^ uVar8) + uVar9;
  local_24 = uVar6 >> 0x1f | uVar6 << 1;
  local_60 = uStack_40 ^ local_2c ^ uVar22 ^ uStack_58;
  uStack_20 = local_60 >> 0x1f | local_60 << 1;
  local_10 = uVar5 >> 2 | uVar5 * 0x40000000;
  uStack_18 = (uVar8 >> 0x1b | uVar8 * 0x20) + local_24 + 0xca62c1d6 +
              (uVar12 ^ uStack_c ^ uVar5) + uVar10;
  local_14 = uVar8 >> 2 | uVar8 * 0x40000000;
  local_1c = (uStack_18 >> 0x1b | uStack_18 * 0x20) + uStack_20 + 0xca62c1d6 +
             (uStack_c ^ local_10 ^ uVar8) + uVar12;
  *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + uStack_c;
  *(uint *)(param_1 + 0x10) = uVar1 + local_14;
  *(uint *)(param_1 + 0x14) = uVar3 + local_10;
  *(uint *)(param_1 + 8) = uVar2 + local_1c;
  *(uint *)(param_1 + 0xc) = uVar4 + uStack_18;
  FUN_710073b460(&local_60,0x58);
  return 0;
}



// ===== FUN_71007413b0 @ 71007413b0 (size=284) =====

undefined8 FUN_71007413b0(uint *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar1 = *param_1;
  uVar3 = uVar1 & 0x3f;
  uVar4 = (ulong)(0x40 - uVar3);
  *param_1 = uVar1 + (uint)param_3;
  if (CARRY4(uVar1,(uint)param_3)) {
    param_1[1] = param_1[1] + 1;
  }
  if (uVar3 != 0 && uVar4 <= param_3) {
    FUN_710080f900((long)(param_1 + 7) + (ulong)uVar3,param_2,uVar4);
    uVar2 = FUN_7100740380(param_1,param_1 + 7);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    param_3 = param_3 - uVar4;
    param_2 = param_2 + uVar4;
    uVar3 = 0;
    goto joined_r0x007100741480;
  }
  if (0x3f < param_3) {
    do {
      param_3 = param_3 - 0x40;
      uVar2 = FUN_7100740380(param_1,param_2);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      param_2 = param_2 + 0x40;
joined_r0x007100741480:
    } while (0x3f < param_3);
    if (param_3 == 0) {
      return 0;
    }
  }
  FUN_710080f900((long)param_1 + (ulong)uVar3 + 0x1c,param_2,param_3);
  return 0;
}



// ===== FUN_71007414d0 @ 71007414d0 (size=432) =====

void FUN_71007414d0(ulong *param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)*param_1 & 0x3f;
  uVar1 = uVar2 + 1;
  *(undefined1 *)((long)param_1 + (ulong)uVar2 + 0x1c) = 0x80;
  if (uVar1 < 0x39) {
    FUN_7100808340((long)param_1 + (ulong)uVar1 + 0x1c,0,0x38 - uVar1);
  }
  else {
    FUN_7100808340((long)param_1 + 0x1c + (ulong)uVar1,0,0x40 - uVar1);
    iVar3 = FUN_7100740380(param_1,(uint *)((long)param_1 + 0x1c));
    if (iVar3 != 0) {
      return;
    }
    *(undefined1 (*) [16])((long)param_1 + 0x1c) = ZEXT216(0);
    *(undefined1 (*) [16])((long)param_1 + 0x2c) = ZEXT216(0);
    *(undefined1 (*) [16])((long)param_1 + 0x3c) = ZEXT216(0);
    ((uint *)((long)param_1 + 0x4c))[0] = 0;
    ((uint *)((long)param_1 + 0x4c))[1] = 0;
  }
  uVar1 = (uint)*param_1;
  uVar2 = *(uint *)((long)param_1 + 4);
  *(ulong *)((long)param_1 + 0x54) =
       CONCAT17((char)(uVar1 << 3),
                CONCAT16((char)(uVar1 >> 5),
                         CONCAT15((char)(uVar1 >> 0xd),
                                  CONCAT14((char)(uVar1 >> 0x15),
                                           CONCAT13((char)(*param_1 >> 0x1d),
                                                    CONCAT12((char)(uVar2 >> 5),
                                                             CONCAT11((char)(uVar2 >> 0xd),
                                                                      (char)(uVar2 >> 0x15))))))));
  iVar3 = FUN_7100740380(param_1,(uint *)((long)param_1 + 0x1c));
  if (iVar3 == 0) {
    *param_2 = *(undefined1 *)((long)param_1 + 0xb);
    param_2[1] = (char)*(undefined2 *)((long)param_1 + 10);
    param_2[2] = (char)((uint)param_1[1] >> 8);
    param_2[3] = (char)(uint)param_1[1];
    param_2[4] = *(undefined1 *)((long)param_1 + 0xf);
    param_2[5] = (char)*(undefined2 *)((long)param_1 + 0xe);
    param_2[6] = (char)(*(uint *)((long)param_1 + 0xc) >> 8);
    param_2[7] = (char)*(uint *)((long)param_1 + 0xc);
    param_2[8] = *(undefined1 *)((long)param_1 + 0x13);
    param_2[9] = (char)*(undefined2 *)((long)param_1 + 0x12);
    param_2[10] = (char)((uint)param_1[2] >> 8);
    param_2[0xb] = (char)(uint)param_1[2];
    param_2[0xc] = *(undefined1 *)((long)param_1 + 0x17);
    param_2[0xd] = (char)*(undefined2 *)((long)param_1 + 0x16);
    param_2[0xe] = (char)(*(uint *)((long)param_1 + 0x14) >> 8);
    param_2[0xf] = (char)*(uint *)((long)param_1 + 0x14);
    param_2[0x10] = *(undefined1 *)((long)param_1 + 0x1b);
    param_2[0x11] = (char)*(undefined2 *)((long)param_1 + 0x1a);
    param_2[0x12] = (char)((uint)param_1[3] >> 8);
    param_2[0x13] = (char)(uint)param_1[3];
  }
  return;
}



// ===== FUN_7100741680 @ 7100741680 (size=164) =====

int FUN_7100741680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_60 [96];
  
  FUN_7100740310(auStack_60);
  iVar1 = FUN_7100740340(auStack_60);
  if ((iVar1 == 0) && (iVar1 = FUN_71007413b0(auStack_60,param_1,param_2), iVar1 == 0)) {
    iVar1 = FUN_71007414d0(auStack_60,param_3);
    FUN_7100740330(auStack_60);
    return iVar1;
  }
  FUN_7100740330(auStack_60);
  return iVar1;
}



// ===== FUN_7100741730 @ 7100741730 (size=24) =====

void FUN_7100741730(undefined8 *param_1)

{
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  return;
}



// ===== FUN_7100741750 @ 7100741750 (size=16) =====

void FUN_7100741750(long param_1)

{
  if (param_1 != 0) {
    FUN_710073b460(param_1,0x6c);
    return;
  }
  return;
}



// ===== FUN_7100741760 @ 7100741760 (size=200) =====

undefined8 FUN_7100741760(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = 0;
    *(int *)(param_1 + 0xd) = param_2;
    *(undefined4 *)(param_1 + 1) = 0xc1059ed8;
    *(undefined4 *)((long)param_1 + 0xc) = 0x367cd507;
    *(undefined4 *)(param_1 + 2) = 0x3070dd17;
    *(undefined4 *)((long)param_1 + 0x14) = 0xf70e5939;
    *(undefined4 *)(param_1 + 3) = 0xffc00b31;
    *(undefined4 *)((long)param_1 + 0x1c) = 0x68581511;
    *(undefined4 *)(param_1 + 4) = 0x64f98fa7;
    *(undefined4 *)((long)param_1 + 0x24) = 0xbefa4fa4;
    return 0;
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 1) = 0x6a09e667;
  *(undefined4 *)((long)param_1 + 0xc) = 0xbb67ae85;
  *(undefined4 *)(param_1 + 2) = 0x3c6ef372;
  *(undefined4 *)((long)param_1 + 0x14) = 0xa54ff53a;
  *(undefined4 *)(param_1 + 3) = 0x510e527f;
  *(undefined4 *)((long)param_1 + 0x1c) = 0x9b05688c;
  *(undefined4 *)(param_1 + 4) = 0x1f83d9ab;
  *(undefined4 *)((long)param_1 + 0x24) = 0x5be0cd19;
  return 0;
}



// ===== FUN_7100741830 @ 7100741830 (size=2256) =====

undefined8 FUN_7100741830(long param_1,undefined1 *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  int *piVar28;
  uint uVar29;
  int *piVar30;
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint *puVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint local_14c;
  int local_130;
  int iStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  uint local_e8 [45];
  uint local_34;
  uint uStack_30;
  uint local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined1 auVar48 [12];
  
  piVar28 = &DAT_71009c3d40;
  bVar15 = false;
  local_28 = *(ulong *)(param_1 + 8);
  uVar22 = *(ulong *)(param_1 + 0x10);
  uVar20 = *(ulong *)(param_1 + 0x20);
  local_18 = *(ulong *)(param_1 + 0x18);
  uStack_20 = uVar22;
  uStack_10 = uVar20;
  uStack_10._4_4_ = (uint)(uVar20 >> 0x20);
  uStack_20._4_4_ = (uint)(uVar22 >> 0x20);
  uVar27 = local_18 & 0xffffffff;
  uVar33 = local_28 & 0xffffffff;
  uVar24 = local_28 >> 0x20;
  uVar22 = uVar22 & 0xffffffff;
  local_18._4_4_ = (uint)(local_18 >> 0x20);
  uVar20 = uVar20 & 0xffffffff;
  uVar47 = CONCAT13(param_2[0x20],CONCAT12(param_2[0x21],CONCAT11(param_2[0x22],param_2[0x23])));
  auVar48._0_8_ =
       CONCAT17(param_2[0x24],
                CONCAT16(param_2[0x25],CONCAT15(param_2[0x26],CONCAT14(param_2[0x27],uVar47))));
  auVar48[8] = param_2[0x2b];
  auVar48[9] = param_2[0x2a];
  auVar48[10] = param_2[0x29];
  auVar48[0xb] = param_2[0x28];
  local_108[0xc] = param_2[0x2f];
  local_108._0_12_ = auVar48;
  local_108[0xd] = param_2[0x2e];
  local_108[0xe] = param_2[0x2d];
  local_108[0xf] = param_2[0x2c];
  uStack_120 = CONCAT17(param_2[0xc],
                        CONCAT16(param_2[0xd],
                                 CONCAT15(param_2[0xe],
                                          CONCAT14(param_2[0xf],
                                                   CONCAT13(param_2[8],
                                                            CONCAT12(param_2[9],
                                                                     CONCAT11(param_2[10],
                                                                              param_2[0xb])))))));
  local_128 = CONCAT17(param_2[4],
                       CONCAT16(param_2[5],
                                CONCAT15(param_2[6],
                                         CONCAT14(param_2[7],
                                                  CONCAT13(*param_2,CONCAT12(param_2[1],
                                                                             CONCAT11(param_2[2],
                                                                                      param_2[3]))))
                                        )));
  uStack_110 = CONCAT17(param_2[0x1c],
                        CONCAT16(param_2[0x1d],
                                 CONCAT15(param_2[0x1e],
                                          CONCAT14(param_2[0x1f],
                                                   CONCAT13(param_2[0x18],
                                                            CONCAT12(param_2[0x19],
                                                                     CONCAT11(param_2[0x1a],
                                                                              param_2[0x1b])))))));
  local_118 = CONCAT17(param_2[0x14],
                       CONCAT16(param_2[0x15],
                                CONCAT15(param_2[0x16],
                                         CONCAT14(param_2[0x17],
                                                  CONCAT13(param_2[0x10],
                                                           CONCAT12(param_2[0x11],
                                                                    CONCAT11(param_2[0x12],
                                                                             param_2[0x13])))))));
  uStack_f0 = CONCAT17(param_2[0x3c],
                       CONCAT16(param_2[0x3d],
                                CONCAT15(param_2[0x3e],
                                         CONCAT14(param_2[0x3f],
                                                  CONCAT13(param_2[0x38],
                                                           CONCAT12(param_2[0x39],
                                                                    CONCAT11(param_2[0x3a],
                                                                             param_2[0x3b])))))));
  local_f8 = CONCAT17(param_2[0x34],
                      CONCAT16(param_2[0x35],
                               CONCAT15(param_2[0x36],
                                        CONCAT14(param_2[0x37],
                                                 CONCAT13(param_2[0x30],
                                                          CONCAT12(param_2[0x31],
                                                                   CONCAT11(param_2[0x32],
                                                                            param_2[0x33])))))));
  piVar30 = &local_130;
  while( true ) {
    uVar25 = (uint)uVar27;
    uVar18 = (uint)uVar20;
    uVar31 = (uint)uVar33;
    uVar19 = (uint)uVar24;
    iVar2 = ((uVar25 >> 0xb | uVar25 << 0x15) ^ (uVar25 >> 6 | uVar25 << 0x1a) ^
            (uVar25 >> 0x19 | uVar25 << 7)) + ((uVar18 ^ local_18._4_4_) & uVar25 ^ uVar18) +
            *piVar28 + piVar30[2] + uStack_10._4_4_;
    uStack_20._4_4_ = iVar2 + uStack_20._4_4_;
    uStack_10._4_4_ =
         ((uVar31 >> 0xd | uVar31 << 0x13) ^ (uVar31 >> 2 | uVar31 << 0x1e) ^
         (uVar31 >> 0x16 | uVar31 << 10)) + iVar2 +
         ((uVar31 | uVar19) & (uint)uVar22 | uVar31 & uVar19);
    iVar2 = ((uStack_20._4_4_ >> 0xb | uStack_20._4_4_ * 0x200000) ^
             (uStack_20._4_4_ >> 6 | uStack_20._4_4_ * 0x4000000) ^
            (uStack_20._4_4_ >> 0x19 | uStack_20._4_4_ * 0x80)) + piVar28[1] + piVar30[3] +
            ((uVar25 ^ local_18._4_4_) & uStack_20._4_4_ ^ local_18._4_4_) + uVar18;
    uVar18 = iVar2 + (uint)uVar22;
    uVar21 = ((uStack_10._4_4_ >> 0xd | uStack_10._4_4_ * 0x80000) ^
              (uStack_10._4_4_ >> 2 | uStack_10._4_4_ * 0x40000000) ^
             (uStack_10._4_4_ >> 0x16 | uStack_10._4_4_ * 0x400)) + iVar2 +
             ((uStack_10._4_4_ | uVar31) & uVar19 | uStack_10._4_4_ & uVar31);
    iVar2 = ((uVar18 >> 0xb | uVar18 * 0x200000) ^ (uVar18 >> 6 | uVar18 * 0x4000000) ^
            (uVar18 >> 0x19 | uVar18 * 0x80)) + piVar28[2] + piVar30[4] +
            ((uStack_20._4_4_ ^ uVar25) & uVar18 ^ uVar25) + local_18._4_4_;
    uVar19 = iVar2 + uVar19;
    local_18._4_4_ =
         ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 >> 2 | uVar21 * 0x40000000) ^
         (uVar21 >> 0x16 | uVar21 * 0x400)) + iVar2 +
         ((uStack_10._4_4_ | uVar21) & uVar31 | uStack_10._4_4_ & uVar21);
    iVar2 = ((uVar19 >> 0xb | uVar19 * 0x200000) ^ (uVar19 >> 6 | uVar19 * 0x4000000) ^
            (uVar19 >> 0x19 | uVar19 * 0x80)) + piVar28[3] + piVar30[5] +
            ((uStack_20._4_4_ ^ uVar18) & uVar19 ^ uStack_20._4_4_) + uVar25;
    uVar31 = iVar2 + uVar31;
    uVar25 = ((local_18._4_4_ >> 0xd | local_18._4_4_ * 0x80000) ^
              (local_18._4_4_ >> 2 | local_18._4_4_ * 0x40000000) ^
             (local_18._4_4_ >> 0x16 | local_18._4_4_ * 0x400)) + iVar2 +
             ((uVar21 | local_18._4_4_) & uStack_10._4_4_ | uVar21 & local_18._4_4_);
    piVar10 = piVar28 + 7;
    iVar2 = ((uVar31 >> 0xb | uVar31 * 0x200000) ^ (uVar31 >> 6 | uVar31 * 0x4000000) ^
            (uVar31 >> 0x19 | uVar31 * 0x80)) + piVar28[4] + piVar30[6] +
            ((uVar18 ^ uVar19) & uVar31 ^ uVar18) + uStack_20._4_4_;
    uStack_10._4_4_ = uStack_10._4_4_ + iVar2;
    uStack_20._4_4_ =
         ((uVar25 >> 0xd | uVar25 * 0x80000) ^ (uVar25 >> 2 | uVar25 * 0x40000000) ^
         (uVar25 >> 0x16 | uVar25 * 0x400)) + iVar2 +
         ((local_18._4_4_ | uVar25) & uVar21 | local_18._4_4_ & uVar25);
    iVar2 = ((uStack_10._4_4_ >> 0xb | uStack_10._4_4_ * 0x200000) ^
             (uStack_10._4_4_ >> 6 | uStack_10._4_4_ * 0x4000000) ^
            (uStack_10._4_4_ >> 0x19 | uStack_10._4_4_ * 0x80)) + piVar28[5] + piVar30[7] +
            ((uVar19 ^ uVar31) & uStack_10._4_4_ ^ uVar19) + uVar18;
    uVar21 = uVar21 + iVar2;
    uVar20 = (ulong)uVar21;
    uVar18 = ((uStack_20._4_4_ >> 0xd | uStack_20._4_4_ * 0x80000) ^
              (uStack_20._4_4_ >> 2 | uStack_20._4_4_ * 0x40000000) ^
             (uStack_20._4_4_ >> 0x16 | uStack_20._4_4_ * 0x400)) + iVar2 +
             ((uVar25 | uStack_20._4_4_) & local_18._4_4_ | uVar25 & uStack_20._4_4_);
    uVar22 = (ulong)uVar18;
    iVar2 = ((uVar21 >> 0xb | uVar21 * 0x200000) ^ (uVar21 >> 6 | uVar21 * 0x4000000) ^
            (uVar21 >> 0x19 | uVar21 * 0x80)) + piVar28[6] + piVar30[8] +
            ((uVar31 ^ uStack_10._4_4_) & uVar21 ^ uVar31) + uVar19;
    local_18._4_4_ = local_18._4_4_ + iVar2;
    uVar19 = ((uVar18 >> 0xd | uVar18 * 0x80000) ^ (uVar18 >> 2 | uVar18 * 0x40000000) ^
             (uVar18 >> 0x16 | uVar18 * 0x400)) + iVar2 +
             ((uStack_20._4_4_ | uVar18) & uVar25 | uStack_20._4_4_ & uVar18);
    uVar24 = (ulong)uVar19;
    piVar28 = piVar28 + 8;
    iVar2 = ((local_18._4_4_ >> 0xb | local_18._4_4_ * 0x200000) ^
             (local_18._4_4_ >> 6 | local_18._4_4_ * 0x4000000) ^
            (local_18._4_4_ >> 0x19 | local_18._4_4_ * 0x80)) + *piVar10 + piVar30[9] +
            ((uStack_10._4_4_ ^ uVar21) & local_18._4_4_ ^ uStack_10._4_4_) + uVar31;
    uVar27 = (ulong)(uVar25 + iVar2);
    uVar33 = (ulong)(((uVar19 >> 0xd | uVar19 * 0x80000) ^ (uVar19 >> 2 | uVar19 * 0x40000000) ^
                     (uVar19 >> 0x16 | uVar19 * 0x400)) + iVar2 +
                    ((uVar18 | uVar19) & uStack_20._4_4_ | uVar18 & uVar19));
    if (bVar15) break;
    bVar15 = true;
    piVar30 = piVar30 + 8;
  }
  piVar28 = &DAT_71009c3d80;
  puVar37 = local_e8;
  uVar18 = uStack_20._4_4_;
  uVar31 = local_108._12_4_;
  uVar19 = auVar48._8_4_;
  uVar40 = CONCAT13(param_2[0x14],CONCAT12(param_2[0x15],CONCAT11(param_2[0x16],param_2[0x17])));
  uVar44 = CONCAT13(param_2[0x34],CONCAT12(param_2[0x35],CONCAT11(param_2[0x36],param_2[0x37])));
  uVar39 = CONCAT13(param_2[0x10],CONCAT12(param_2[0x11],CONCAT11(param_2[0x12],param_2[0x13])));
  uVar29 = CONCAT13(param_2[0x30],CONCAT12(param_2[0x31],CONCAT11(param_2[0x32],param_2[0x33])));
  uVar42 = CONCAT13(param_2[0xc],CONCAT12(param_2[0xd],CONCAT11(param_2[0xe],param_2[0xf])));
  uVar41 = CONCAT13(param_2[8],CONCAT12(param_2[9],CONCAT11(param_2[10],param_2[0xb])));
  uVar34 = CONCAT13(param_2[0x1c],CONCAT12(param_2[0x1d],CONCAT11(param_2[0x1e],param_2[0x1f])));
  uVar38 = CONCAT13(param_2[0x3c],CONCAT12(param_2[0x3d],CONCAT11(param_2[0x3e],param_2[0x3f])));
  uVar17 = CONCAT13(param_2[4],CONCAT12(param_2[5],CONCAT11(param_2[6],param_2[7])));
  uVar35 = CONCAT13(param_2[0x18],CONCAT12(param_2[0x19],CONCAT11(param_2[0x1a],param_2[0x1b])));
  uVar36 = CONCAT13(param_2[0x38],CONCAT12(param_2[0x39],CONCAT11(param_2[0x3a],param_2[0x3b])));
  uVar16 = (uint)((ulong)auVar48._0_8_ >> 0x20);
  local_14c = CONCAT13(*param_2,CONCAT12(param_2[1],CONCAT11(param_2[2],param_2[3])));
  uVar25 = uStack_10._4_4_;
  uVar21 = local_18._4_4_;
  do {
    uVar46 = uVar19;
    uVar45 = uVar31;
    uVar43 = uVar47;
    uVar26 = (uint)uVar27;
    uVar19 = (uint)uVar20;
    puVar1 = puVar37 + 8;
    iVar11 = piVar28[1];
    uVar47 = ((uVar36 >> 0x13 | uVar36 << 0xd) ^ (uVar36 >> 0x11 | uVar36 << 0xf) ^ uVar36 >> 10) +
             ((uVar17 >> 0x12 | uVar17 << 0xe) ^ (uVar17 >> 7 | uVar17 << 0x19) ^ uVar17 >> 3) +
             uVar16 + local_14c;
    uVar32 = (uint)uVar33;
    uVar23 = (uint)uVar24;
    iVar2 = uVar25 + ((uVar26 >> 0xb | uVar26 << 0x15) ^ (uVar26 >> 6 | uVar26 << 0x1a) ^
                     (uVar26 >> 0x19 | uVar26 << 7)) + ((uVar19 ^ uVar21) & uVar26 ^ uVar19) +
                     uVar47 + *piVar28;
    uVar18 = uVar18 + iVar2;
    uVar25 = ((uVar32 >> 0xd | uVar32 << 0x13) ^ (uVar32 >> 2 | uVar32 << 0x1e) ^
             (uVar32 >> 0x16 | uVar32 << 10)) + ((uVar32 | uVar23) & (uint)uVar22 | uVar32 & uVar23)
             + iVar2;
    uVar3 = ((uVar38 >> 0x13 | uVar38 << 0xd) ^ (uVar38 >> 0x11 | uVar38 << 0xf) ^ uVar38 >> 10) +
            ((uVar41 >> 0x12 | uVar41 << 0xe) ^ (uVar41 >> 7 | uVar41 << 0x19) ^ uVar41 >> 3) +
            uVar46 + uVar17;
    *puVar37 = uVar47;
    puVar37[1] = uVar3;
    iVar12 = piVar28[3];
    iVar2 = ((uVar26 ^ uVar21) & uVar18 ^ uVar21) + uVar3 +
            ((uVar18 >> 0xb | uVar18 * 0x200000) ^ (uVar18 >> 6 | uVar18 * 0x4000000) ^
            (uVar18 >> 0x19 | uVar18 * 0x80)) + uVar19 + iVar11;
    uVar17 = (uint)uVar22 + iVar2;
    iVar11 = piVar28[4];
    iVar13 = piVar28[5];
    uVar19 = ((uVar47 >> 0x13 | uVar47 * 0x2000) ^ (uVar47 >> 0x11 | uVar47 * 0x8000) ^ uVar47 >> 10
             ) + ((uVar42 >> 0x12 | uVar42 << 0xe) ^ (uVar42 >> 7 | uVar42 << 0x19) ^ uVar42 >> 3) +
             uVar45 + uVar41;
    uVar4 = ((uVar25 >> 0xd | uVar25 * 0x80000) ^ (uVar25 >> 2 | uVar25 * 0x40000000) ^
            (uVar25 >> 0x16 | uVar25 * 0x400)) + ((uVar32 | uVar25) & uVar23 | uVar32 & uVar25) +
            iVar2;
    iVar2 = ((uVar26 ^ uVar18) & uVar17 ^ uVar26) + uVar19 +
            ((uVar17 >> 0xb | uVar17 * 0x200000) ^ (uVar17 >> 6 | uVar17 * 0x4000000) ^
            (uVar17 >> 0x19 | uVar17 * 0x80)) + uVar21 + piVar28[2];
    uVar23 = uVar23 + iVar2;
    uVar31 = ((uVar3 >> 0x13 | uVar3 * 0x2000) ^ (uVar3 >> 0x11 | uVar3 * 0x8000) ^ uVar3 >> 10) +
             ((uVar39 >> 0x12 | uVar39 << 0xe) ^ (uVar39 >> 7 | uVar39 << 0x19) ^ uVar39 >> 3) +
             uVar29 + uVar42;
    uVar21 = ((uVar4 >> 0xd | uVar4 * 0x80000) ^ (uVar4 >> 2 | uVar4 * 0x40000000) ^
             (uVar4 >> 0x16 | uVar4 * 0x400)) + ((uVar25 | uVar4) & uVar32 | uVar25 & uVar4) + iVar2
    ;
    puVar37[2] = uVar19;
    puVar37[3] = uVar31;
    iVar9 = piVar28[6];
    iVar14 = piVar28[7];
    iVar2 = ((uVar18 ^ uVar17) & uVar23 ^ uVar18) + uVar31 +
            ((uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 >> 6 | uVar23 * 0x4000000) ^
            (uVar23 >> 0x19 | uVar23 * 0x80)) + uVar26 + iVar12;
    uVar32 = uVar32 + iVar2;
    uVar5 = ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 >> 2 | uVar21 * 0x40000000) ^
            (uVar21 >> 0x16 | uVar21 * 0x400)) + ((uVar4 | uVar21) & uVar25 | uVar4 & uVar21) +
            iVar2;
    uVar42 = ((uVar19 >> 0x13 | uVar19 * 0x2000) ^ (uVar19 >> 0x11 | uVar19 * 0x8000) ^ uVar19 >> 10
             ) + ((uVar40 >> 0x12 | uVar40 << 0xe) ^ (uVar40 >> 7 | uVar40 << 0x19) ^ uVar40 >> 3) +
             uVar39 + uVar44;
    iVar2 = ((uVar17 ^ uVar23) & uVar32 ^ uVar17) + uVar42 +
            ((uVar32 >> 0xb | uVar32 * 0x200000) ^ (uVar32 >> 6 | uVar32 * 0x4000000) ^
            (uVar32 >> 0x19 | uVar32 * 0x80)) + uVar18 + iVar11;
    uVar25 = uVar25 + iVar2;
    uVar18 = ((uVar5 >> 0xd | uVar5 * 0x80000) ^ (uVar5 >> 2 | uVar5 * 0x40000000) ^
             (uVar5 >> 0x16 | uVar5 * 0x400)) + ((uVar21 | uVar5) & uVar4 | uVar21 & uVar5) + iVar2;
    uVar26 = ((uVar31 >> 0x13 | uVar31 * 0x2000) ^ (uVar31 >> 0x11 | uVar31 * 0x8000) ^ uVar31 >> 10
             ) + ((uVar35 >> 0x12 | uVar35 << 0xe) ^ (uVar35 >> 7 | uVar35 << 0x19) ^ uVar35 >> 3) +
             uVar40 + uVar36;
    iVar2 = ((uVar23 ^ uVar32) & uVar25 ^ uVar23) + uVar26 +
            ((uVar25 >> 0xb | uVar25 * 0x200000) ^ (uVar25 >> 6 | uVar25 * 0x4000000) ^
            (uVar25 >> 0x19 | uVar25 * 0x80)) + uVar17 + iVar13;
    uVar4 = uVar4 + iVar2;
    uVar20 = (ulong)uVar4;
    puVar37[4] = uVar42;
    puVar37[5] = uVar26;
    uVar6 = ((uVar18 >> 0xd | uVar18 * 0x80000) ^ (uVar18 >> 2 | uVar18 * 0x40000000) ^
            (uVar18 >> 0x16 | uVar18 * 0x400)) + ((uVar5 | uVar18) & uVar21 | uVar5 & uVar18) +
            iVar2;
    uVar22 = (ulong)uVar6;
    uVar7 = ((uVar42 >> 0x13 | uVar42 * 0x2000) ^ (uVar42 >> 0x11 | uVar42 * 0x8000) ^ uVar42 >> 10)
            + ((uVar34 >> 0x12 | uVar34 << 0xe) ^ (uVar34 >> 7 | uVar34 << 0x19) ^ uVar34 >> 3) +
            uVar38 + uVar35;
    iVar2 = ((uVar32 ^ uVar25) & uVar4 ^ uVar32) + uVar7 +
            ((uVar4 >> 0xb | uVar4 * 0x200000) ^ (uVar4 >> 6 | uVar4 * 0x4000000) ^
            (uVar4 >> 0x19 | uVar4 * 0x80)) + uVar23 + iVar9;
    uVar23 = ((uVar6 >> 0xd | uVar6 * 0x80000) ^ (uVar6 >> 2 | uVar6 * 0x40000000) ^
             (uVar6 >> 0x16 | uVar6 * 0x400)) + ((uVar18 | uVar6) & uVar5 | uVar18 & uVar6) + iVar2;
    uVar24 = (ulong)uVar23;
    uVar21 = uVar21 + iVar2;
    uVar8 = ((uVar26 >> 0x13 | uVar26 * 0x2000) ^ (uVar26 >> 0x11 | uVar26 * 0x8000) ^ uVar26 >> 10)
            + uVar47 +
            ((uVar43 >> 0x12 | uVar43 << 0xe) ^ (uVar43 >> 7 | uVar43 << 0x19) ^ uVar43 >> 3) +
            uVar34;
    puVar37[6] = uVar7;
    puVar37[7] = uVar8;
    local_130 = ((uVar25 ^ uVar4) & uVar21 ^ uVar25) + uVar32 +
                ((uVar21 >> 0xb | uVar21 * 0x200000) ^ (uVar21 >> 6 | uVar21 * 0x4000000) ^
                (uVar21 >> 0x19 | uVar21 * 0x80)) + uVar8 + iVar14;
    iStack_12c = ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 >> 2 | uVar23 * 0x40000000) ^
                 (uVar23 >> 0x16 | uVar23 * 0x400)) + ((uVar6 | uVar23) & uVar18 | uVar6 & uVar23);
    piVar28 = piVar28 + 8;
    uVar5 = uVar5 + local_130;
    uVar27 = (ulong)uVar5;
    uVar32 = local_130 + iStack_12c;
    uVar33 = (ulong)uVar32;
    puVar37 = puVar1;
    uVar40 = uVar44;
    uVar44 = uVar26;
    uVar39 = uVar29;
    uVar29 = uVar42;
    uVar42 = uVar45;
    uVar41 = uVar46;
    uVar34 = uVar38;
    uVar38 = uVar8;
    uVar17 = uVar16;
    uVar35 = uVar36;
    uVar36 = uVar7;
    uVar16 = uVar3;
    local_14c = uVar43;
  } while (puVar1 != (uint *)&local_28);
  local_28 = CONCAT44(uVar23,uVar32);
  uStack_20 = CONCAT44(uVar18,uVar6);
  local_18 = CONCAT44(uVar21,uVar5);
  uStack_10 = CONCAT44(uVar25,uVar4);
  *(ulong *)(param_1 + 0x10) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) + uVar18,
                (int)*(undefined8 *)(param_1 + 0x10) + uVar6);
  *(ulong *)(param_1 + 8) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) + uVar23,
                (int)*(undefined8 *)(param_1 + 8) + uVar32);
  *(ulong *)(param_1 + 0x20) =
       CONCAT44(*(int *)(param_1 + 0x24) + uVar25,*(int *)(param_1 + 0x20) + uVar4);
  *(ulong *)(param_1 + 0x18) =
       CONCAT44(*(int *)(param_1 + 0x1c) + uVar21,*(int *)(param_1 + 0x18) + uVar5);
  local_34 = uVar26;
  uStack_30 = uVar7;
  local_2c = uVar8;
  FUN_710073b460(&local_130,0x128);
  return 0;
}



// ===== FUN_7100742100 @ 7100742100 (size=284) =====

undefined8 FUN_7100742100(uint *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar1 = *param_1;
  uVar3 = uVar1 & 0x3f;
  uVar4 = (ulong)(0x40 - uVar3);
  *param_1 = uVar1 + (uint)param_3;
  if (CARRY4(uVar1,(uint)param_3)) {
    param_1[1] = param_1[1] + 1;
  }
  if (uVar3 != 0 && uVar4 <= param_3) {
    FUN_710080f900((long)(param_1 + 10) + (ulong)uVar3,param_2,uVar4);
    uVar2 = FUN_7100741830(param_1,param_1 + 10);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    param_3 = param_3 - uVar4;
    param_2 = param_2 + uVar4;
    uVar3 = 0;
    goto joined_r0x0071007421d0;
  }
  if (0x3f < param_3) {
    do {
      param_3 = param_3 - 0x40;
      uVar2 = FUN_7100741830(param_1,param_2);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      param_2 = param_2 + 0x40;
joined_r0x0071007421d0:
    } while (0x3f < param_3);
    if (param_3 == 0) {
      return 0;
    }
  }
  FUN_710080f900((long)param_1 + (ulong)uVar3 + 0x28,param_2,param_3);
  return 0;
}



// ===== FUN_7100742220 @ 7100742220 (size=548) =====

void FUN_7100742220(ulong *param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)*param_1 & 0x3f;
  uVar1 = uVar2 + 1;
  *(undefined1 *)((long)param_1 + (ulong)uVar2 + 0x28) = 0x80;
  if (uVar1 < 0x39) {
    FUN_7100808340((long)param_1 + (ulong)uVar1 + 0x28,0,0x38 - uVar1);
  }
  else {
    FUN_7100808340((long)(param_1 + 5) + (ulong)uVar1,0,0x40 - uVar1);
    iVar3 = FUN_7100741830(param_1,param_1 + 5);
    if (iVar3 != 0) {
      return;
    }
    *(undefined1 (*) [16])(param_1 + 5) = ZEXT216(0);
    *(undefined1 (*) [16])(param_1 + 7) = ZEXT216(0);
    *(undefined1 (*) [16])(param_1 + 9) = ZEXT216(0);
    param_1[0xb] = 0;
  }
  uVar1 = (uint)*param_1;
  uVar2 = *(uint *)((long)param_1 + 4);
  param_1[0xc] = CONCAT17((char)(uVar1 << 3),
                          CONCAT16((char)(uVar1 >> 5),
                                   CONCAT15((char)(uVar1 >> 0xd),
                                            CONCAT14((char)(uVar1 >> 0x15),
                                                     CONCAT13((char)(*param_1 >> 0x1d),
                                                              CONCAT12((char)(uVar2 >> 5),
                                                                       CONCAT11((char)(uVar2 >> 0xd)
                                                                                ,(char)(uVar2 >> 
                                                  0x15))))))));
  iVar3 = FUN_7100741830(param_1,param_1 + 5);
  if (iVar3 == 0) {
    *param_2 = *(undefined1 *)((long)param_1 + 0xb);
    param_2[1] = (char)*(undefined2 *)((long)param_1 + 10);
    param_2[2] = (char)((uint)param_1[1] >> 8);
    param_2[3] = (char)(uint)param_1[1];
    param_2[4] = *(undefined1 *)((long)param_1 + 0xf);
    param_2[5] = (char)*(undefined2 *)((long)param_1 + 0xe);
    param_2[6] = (char)(*(uint *)((long)param_1 + 0xc) >> 8);
    param_2[7] = (char)*(uint *)((long)param_1 + 0xc);
    param_2[8] = *(undefined1 *)((long)param_1 + 0x13);
    param_2[9] = (char)*(undefined2 *)((long)param_1 + 0x12);
    param_2[10] = (char)((uint)param_1[2] >> 8);
    param_2[0xb] = (char)(uint)param_1[2];
    param_2[0xc] = *(undefined1 *)((long)param_1 + 0x17);
    param_2[0xd] = (char)*(undefined2 *)((long)param_1 + 0x16);
    param_2[0xe] = (char)(*(uint *)((long)param_1 + 0x14) >> 8);
    param_2[0xf] = (char)*(uint *)((long)param_1 + 0x14);
    param_2[0x10] = *(undefined1 *)((long)param_1 + 0x1b);
    param_2[0x11] = (char)*(undefined2 *)((long)param_1 + 0x1a);
    param_2[0x12] = (char)((uint)param_1[3] >> 8);
    param_2[0x13] = (char)(uint)param_1[3];
    param_2[0x14] = *(undefined1 *)((long)param_1 + 0x1f);
    param_2[0x15] = (char)*(undefined2 *)((long)param_1 + 0x1e);
    param_2[0x16] = (char)(*(uint *)((long)param_1 + 0x1c) >> 8);
    param_2[0x17] = (char)*(uint *)((long)param_1 + 0x1c);
    param_2[0x18] = *(undefined1 *)((long)param_1 + 0x23);
    param_2[0x19] = (char)*(undefined2 *)((long)param_1 + 0x22);
    param_2[0x1a] = (char)((uint)param_1[4] >> 8);
    param_2[0x1b] = (char)(uint)param_1[4];
    if ((uint)param_1[0xd] == 0) {
      param_2[0x1c] = *(undefined1 *)((long)param_1 + 0x27);
      param_2[0x1d] = (char)*(undefined2 *)((long)param_1 + 0x26);
      param_2[0x1e] = (char)(*(uint *)((long)param_1 + 0x24) >> 8);
      param_2[0x1f] = (char)*(uint *)((long)param_1 + 0x24);
    }
  }
  return;
}



// ===== FUN_7100742450 @ 7100742450 (size=172) =====

int FUN_7100742450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_70 [112];
  
  FUN_7100741730(auStack_70);
  iVar1 = FUN_7100741760(auStack_70,param_4);
  if ((iVar1 == 0) && (iVar1 = FUN_7100742100(auStack_70,param_1,param_2), iVar1 == 0)) {
    iVar1 = FUN_7100742220(auStack_70,param_3);
    FUN_7100741750(auStack_70);
    return iVar1;
  }
  FUN_7100741750(auStack_70);
  return iVar1;
}



// ===== FUN_7100742500 @ 7100742500 (size=40) =====

void FUN_7100742500(undefined8 *param_1)

{
  param_1[0x1a] = 0;
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
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  return;
}



// ===== FUN_7100742530 @ 7100742530 (size=16) =====

void FUN_7100742530(long param_1)

{
  if (param_1 != 0) {
    FUN_710073b460(param_1,0xd8);
    return;
  }
  return;
}



// ===== FUN_7100742540 @ 7100742540 (size=328) =====

undefined8 FUN_7100742540(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = 0;
    param_1[1] = 0;
    *(int *)(param_1 + 0x1a) = param_2;
    param_1[2] = 0xcbbb9d5dc1059ed8;
    param_1[3] = 0x629a292a367cd507;
    param_1[4] = 0x9159015a3070dd17;
    param_1[5] = 0x152fecd8f70e5939;
    param_1[6] = 0x67332667ffc00b31;
    param_1[7] = 0x8eb44a8768581511;
    param_1[8] = 0xdb0c2e0d64f98fa7;
    param_1[9] = 0x47b5481dbefa4fa4;
    return 0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[2] = 0x6a09e667f3bcc908;
  param_1[3] = 0xbb67ae8584caa73b;
  param_1[4] = 0x3c6ef372fe94f82b;
  param_1[5] = 0xa54ff53a5f1d36f1;
  param_1[6] = 0x510e527fade682d1;
  param_1[7] = 0x9b05688c2b3e6c1f;
  param_1[8] = 0x1f83d9abfb41bd6b;
  param_1[9] = 0x5be0cd19137e2179;
  return 0;
}



// ===== FUN_7100742690 @ 7100742690 (size=1912) =====

undefined8 FUN_7100742690(long param_1,unkbyte9 *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulong uVar25;
  unkbyte9 Var26;
  unkbyte9 Var27;
  unkbyte9 Var28;
  unkbyte9 Var29;
  unkbyte9 Var30;
  unkbyte9 Var31;
  unkbyte9 Var32;
  unkbyte9 Var33;
  unkbyte9 Var34;
  unkbyte9 Var35;
  unkbyte9 Var36;
  unkbyte9 Var37;
  uint3 uVar38;
  uint3 uVar39;
  uint6 uVar40;
  uint3 uVar41;
  uint3 uVar42;
  uint6 uVar43;
  long *plVar44;
  long lVar45;
  long *plVar46;
  byte bVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  long lVar69;
  long lVar71;
  undefined1 auVar70 [16];
  long local_2d0;
  long lStack_2c8;
  long local_2c0 [10];
  undefined1 uStack_270;
  undefined1 uStack_26f;
  undefined1 uStack_26e;
  undefined1 uStack_26d;
  undefined1 uStack_26c;
  undefined1 uStack_26b;
  undefined1 uStack_26a;
  undefined1 uStack_269;
  undefined1 uStack_268;
  undefined1 uStack_267;
  undefined1 uStack_266;
  undefined1 uStack_265;
  undefined1 uStack_264;
  undefined1 uStack_263;
  undefined1 uStack_262;
  undefined1 uStack_261;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long alStack_240 [72];
  
  uVar21 = *(undefined8 *)((long)param_2 + 8);
  uVar66 = (undefined1)((ulong)uVar21 >> 0x10);
  uVar67 = (undefined1)((ulong)uVar21 >> 0x28);
  uVar68 = (undefined1)((ulong)uVar21 >> 0x38);
  Var27 = *param_2;
  Var26 = *param_2;
  uVar18 = *(undefined8 *)((long)param_2 + 0x28);
  uVar65 = (undefined1)((ulong)uVar18 >> 0x38);
  Var30 = param_2[2];
  Var28 = param_2[2];
  uVar23 = *(undefined8 *)((long)param_2 + 0x38);
  Var31 = param_2[3];
  Var29 = param_2[3];
  uVar15 = *(undefined8 *)((long)param_2 + 0x58);
  Var33 = param_2[5];
  Var32 = param_2[5];
  uVar24 = *(undefined8 *)((long)param_2 + 0x68);
  Var37 = param_2[6];
  Var35 = param_2[6];
  uVar13 = *(undefined8 *)((long)param_2 + 0x78);
  uVar58 = (undefined1)((ulong)uVar13 >> 8);
  uVar59 = (undefined1)((ulong)uVar13 >> 0x10);
  uVar60 = (undefined1)((ulong)uVar13 >> 0x18);
  uVar61 = (undefined1)((ulong)uVar13 >> 0x20);
  uVar62 = (undefined1)((ulong)uVar13 >> 0x28);
  uVar63 = (undefined1)((ulong)uVar13 >> 0x30);
  uVar64 = (undefined1)((ulong)uVar13 >> 0x38);
  Var36 = param_2[7];
  Var34 = param_2[7];
  bVar47 = (byte)Var34;
  uVar49 = (undefined1)((unkuint9)Var34 >> 0x10);
  uVar51 = (undefined1)((unkuint9)Var34 >> 0x20);
  uVar53 = (undefined1)((unkuint9)Var34 >> 0x30);
  bVar55 = (byte)((unkuint9)Var34 >> 0x40);
  uVar48 = (undefined1)((unkuint9)Var36 >> 8);
  uVar50 = (undefined1)((unkuint9)Var36 >> 0x18);
  uVar52 = (undefined1)((unkuint9)Var36 >> 0x28);
  uVar54 = (undefined1)((unkuint9)Var36 >> 0x38);
  alStack_240[0x41] = *(ulong *)(param_1 + 0x18);
  alStack_240[0x40] = *(ulong *)(param_1 + 0x10);
  alStack_240[0x43] = *(ulong *)(param_1 + 0x28);
  alStack_240[0x42] = *(ulong *)(param_1 + 0x20);
  alStack_240[0x45] = *(ulong *)(param_1 + 0x38);
  alStack_240[0x44] = *(ulong *)(param_1 + 0x30);
  alStack_240[0x47] = *(ulong *)(param_1 + 0x48);
  alStack_240[0x46] = *(ulong *)(param_1 + 0x40);
  uVar38 = CONCAT12(uVar68,CONCAT11(uVar68,(char)((unkuint9)Var27 >> 0x38))) & 0xff00ff;
  uVar39 = CONCAT12(uVar66,CONCAT11(uVar66,(char)((unkuint9)Var26 >> 0x10))) & 0xff00ff;
  uVar40 = (uint6)CONCAT14(uVar65,(uint)CONCAT12(uVar65,(ushort)(byte)((unkuint9)Var30 >> 0x38))) &
           0xffff0000ffff;
  uVar41 = CONCAT12(*(undefined1 *)((long)param_2 + 0x4f),
                    CONCAT11(*(undefined1 *)((long)param_2 + 0x4f),
                             *(undefined1 *)((long)param_2 + 0x47))) & 0xff00ff;
  uVar42 = CONCAT12(*(undefined1 *)((long)param_2 + 0x4a),
                    CONCAT11(*(undefined1 *)((long)param_2 + 0x4a),
                             *(undefined1 *)((long)param_2 + 0x42))) & 0xff00ff;
  uVar43 = (uint6)CONCAT14((char)(uVar41 >> 0x10),(uint)uVar41) & 0xffff0000ffff;
  uVar41 = CONCAT12(uVar67,CONCAT11(uVar67,(char)((unkuint9)Var27 >> 0x28))) & 0xff00ff;
  local_2c0[1] = CONCAT17((char)((unkuint9)Var26 >> 0x40),
                          CONCAT16((char)((ulong)uVar21 >> 8),
                                   CONCAT15((char)(uVar39 >> 0x10),
                                            CONCAT14((char)((ulong)uVar21 >> 0x18),
                                                     CONCAT13((char)((ulong)uVar21 >> 0x20),
                                                              CONCAT12((char)(uVar41 >> 0x10),
                                                                       CONCAT11((char)((ulong)uVar21
                                                                                      >> 0x30),
                                                                                (char)(uVar38 >>
                                                                                      0x10))))))));
  local_2c0[0] = CONCAT17((char)Var26,
                          CONCAT16((char)((unkuint9)Var27 >> 8),
                                   CONCAT15((char)uVar39,
                                            CONCAT14((char)((unkuint9)Var27 >> 0x18),
                                                     CONCAT13((char)((unkuint9)Var26 >> 0x20),
                                                              CONCAT12((char)uVar41,
                                                                       CONCAT11((char)((unkuint9)
                                                                                       Var26 >> 0x30
                                                                                      ),(char)uVar38
                                                                               )))))));
  local_2c0[3] = CONCAT17(*(undefined1 *)((long)param_2 + 0x18),
                          CONCAT16(*(undefined1 *)((long)param_2 + 0x19),
                                   CONCAT15(*(undefined1 *)((long)param_2 + 0x1a),
                                            CONCAT14(*(undefined1 *)((long)param_2 + 0x1b),
                                                     CONCAT13(*(undefined1 *)((long)param_2 + 0x1c),
                                                              CONCAT12(*(undefined1 *)
                                                                        ((long)param_2 + 0x1d),
                                                                       CONCAT11(*(undefined1 *)
                                                                                 ((long)param_2 +
                                                                                 0x1e),*(undefined1
                                                                                         *)((long)
                                                  param_2 + 0x1f))))))));
  local_2c0[2] = CONCAT17(*(undefined1 *)(param_2 + 1),
                          CONCAT16(*(undefined1 *)((long)param_2 + 0x11),
                                   CONCAT15(*(undefined1 *)((long)param_2 + 0x12),
                                            CONCAT14(*(undefined1 *)((long)param_2 + 0x13),
                                                     CONCAT13(*(undefined1 *)((long)param_2 + 0x14),
                                                              CONCAT12(*(undefined1 *)
                                                                        ((long)param_2 + 0x15),
                                                                       CONCAT11(*(undefined1 *)
                                                                                 ((long)param_2 +
                                                                                 0x16),*(undefined1
                                                                                         *)((long)
                                                  param_2 + 0x17))))))));
  local_2c0[5] = CONCAT17((char)((unkuint9)Var28 >> 0x40),
                          CONCAT16((char)((ulong)uVar18 >> 8),
                                   CONCAT15((char)((ulong)uVar18 >> 0x10),
                                            CONCAT14((char)((ulong)uVar18 >> 0x18),
                                                     CONCAT13((char)((ulong)uVar18 >> 0x20),
                                                              CONCAT12((char)((ulong)uVar18 >> 0x28)
                                                                       ,CONCAT11((char)((ulong)
                                                  uVar18 >> 0x30),(char)(uVar40 >> 0x20))))))));
  local_2c0[4] = CONCAT17((char)Var28,
                          CONCAT16((char)((unkuint9)Var30 >> 8),
                                   CONCAT15((char)((unkuint9)Var28 >> 0x10),
                                            CONCAT14((char)((unkuint9)Var30 >> 0x18),
                                                     CONCAT13((char)((unkuint9)Var28 >> 0x20),
                                                              CONCAT12((char)((unkuint9)Var30 >>
                                                                             0x28),
                                                                       CONCAT11((char)((unkuint9)
                                                                                       Var28 >> 0x30
                                                                                      ),(char)uVar40
                                                                               )))))));
  local_2c0[7] = CONCAT17((char)((unkuint9)Var29 >> 0x40),
                          CONCAT16((char)((ulong)uVar23 >> 8),
                                   CONCAT15((char)((ulong)uVar23 >> 0x10),
                                            CONCAT14((char)((ulong)uVar23 >> 0x18),
                                                     CONCAT13((char)((ulong)uVar23 >> 0x20),
                                                              CONCAT12((char)((ulong)uVar23 >> 0x28)
                                                                       ,CONCAT11((char)((ulong)
                                                  uVar23 >> 0x30),(char)((ulong)uVar23 >> 0x38))))))
                                  ));
  local_2c0[6] = CONCAT17((char)Var29,
                          CONCAT16((char)((unkuint9)Var31 >> 8),
                                   CONCAT15((char)((unkuint9)Var29 >> 0x10),
                                            CONCAT14((char)((unkuint9)Var31 >> 0x18),
                                                     CONCAT13((char)((unkuint9)Var29 >> 0x20),
                                                              CONCAT12((char)((unkuint9)Var31 >>
                                                                             0x28),
                                                                       CONCAT11((char)((unkuint9)
                                                                                       Var29 >> 0x30
                                                                                      ),(char)((
                                                  unkuint9)Var31 >> 0x38))))))));
  local_2c0[9] = CONCAT17(*(undefined1 *)((long)param_2 + 0x48),
                          CONCAT16(*(undefined1 *)((long)param_2 + 0x49),
                                   CONCAT15((char)(uVar42 >> 0x10),
                                            CONCAT14(*(undefined1 *)((long)param_2 + 0x4b),
                                                     CONCAT13(*(undefined1 *)((long)param_2 + 0x4c),
                                                              CONCAT12(*(undefined1 *)
                                                                        ((long)param_2 + 0x4d),
                                                                       CONCAT11(*(undefined1 *)
                                                                                 ((long)param_2 +
                                                                                 0x4e),(char)(uVar43
                                                                                             >> 0x20
                                                  ))))))));
  local_2c0[8] = CONCAT17(*(undefined1 *)(param_2 + 4),
                          CONCAT16(*(undefined1 *)((long)param_2 + 0x41),
                                   CONCAT15((char)uVar42,
                                            CONCAT14(*(undefined1 *)((long)param_2 + 0x43),
                                                     CONCAT13(*(undefined1 *)((long)param_2 + 0x44),
                                                              CONCAT12(*(undefined1 *)
                                                                        ((long)param_2 + 0x45),
                                                                       CONCAT11(*(undefined1 *)
                                                                                 ((long)param_2 +
                                                                                 0x46),(char)uVar43)
                                                                      ))))));
  uStack_270 = (char)((unkuint9)Var33 >> 0x38);
  uStack_26f = (char)((unkuint9)Var32 >> 0x30);
  uStack_26e = (char)((unkuint9)Var33 >> 0x28);
  uStack_26d = (char)((unkuint9)Var32 >> 0x20);
  uStack_26c = (char)((unkuint9)Var33 >> 0x18);
  uStack_26b = (char)((unkuint9)Var32 >> 0x10);
  uStack_26a = (char)((unkuint9)Var33 >> 8);
  uStack_269 = (char)Var32;
  uStack_268 = (char)((ulong)uVar15 >> 0x38);
  uStack_267 = (char)((ulong)uVar15 >> 0x30);
  uStack_266 = (char)((ulong)uVar15 >> 0x28);
  uStack_265 = (char)((ulong)uVar15 >> 0x20);
  uStack_264 = (char)((ulong)uVar15 >> 0x18);
  uStack_263 = (char)((ulong)uVar15 >> 0x10);
  uStack_262 = (char)((ulong)uVar15 >> 8);
  uStack_261 = (char)((unkuint9)Var32 >> 0x40);
  uStack_258 = CONCAT17((char)((unkuint9)Var35 >> 0x40),
                        CONCAT16((char)((ulong)uVar24 >> 8),
                                 CONCAT15((char)((ulong)uVar24 >> 0x10),
                                          CONCAT14((char)((ulong)uVar24 >> 0x18),
                                                   CONCAT13((char)((ulong)uVar24 >> 0x20),
                                                            CONCAT12((char)((ulong)uVar24 >> 0x28),
                                                                     CONCAT11((char)((ulong)uVar24
                                                                                    >> 0x30),
                                                                              (char)((ulong)uVar24
                                                                                    >> 0x38))))))));
  local_260 = CONCAT17((char)Var35,
                       CONCAT16((char)((unkuint9)Var37 >> 8),
                                CONCAT15((char)((unkuint9)Var35 >> 0x10),
                                         CONCAT14((char)((unkuint9)Var37 >> 0x18),
                                                  CONCAT13((char)((unkuint9)Var35 >> 0x20),
                                                           CONCAT12((char)((unkuint9)Var37 >> 0x28),
                                                                    CONCAT11((char)((unkuint9)Var35
                                                                                   >> 0x30),
                                                                             (char)((unkuint9)Var37
                                                                                   >> 0x38))))))));
  uStack_248 = CONCAT17(bVar55,CONCAT16(uVar58,CONCAT15(uVar59,CONCAT14(uVar60,CONCAT13(uVar61,
                                                  CONCAT12(uVar62,CONCAT11(uVar63,uVar64)))))));
  uStack_250 = CONCAT17(bVar47,CONCAT16(uVar48,CONCAT15(uVar49,CONCAT14(uVar50,CONCAT13(uVar51,
                                                  CONCAT12(uVar52,CONCAT11(uVar53,uVar54)))))));
  plVar44 = alStack_240;
  do {
    uVar19 = plVar44[-0xe];
    uVar16 = plVar44[-0xf];
    uVar40 = CONCAT15(bVar47,CONCAT14(uVar48,CONCAT13(uVar49,CONCAT12(uVar50,CONCAT11(uVar51,uVar52)
                                                                     )))) >> 3;
    uVar43 = CONCAT15(bVar55,CONCAT14(uVar58,CONCAT13(uVar59,CONCAT12(uVar60,CONCAT11(uVar61,uVar62)
                                                                     )))) >> 3;
    lVar69 = CONCAT17(bVar47,CONCAT16(uVar48,CONCAT15(uVar49,CONCAT14(uVar50,CONCAT13(uVar51,
                                                  CONCAT12(uVar52,CONCAT11(uVar53,uVar54))))))) << 3
    ;
    lVar71 = CONCAT17(bVar55,CONCAT16(uVar58,CONCAT15(uVar59,CONCAT14(uVar60,CONCAT13(uVar61,
                                                  CONCAT12(uVar62,CONCAT11(uVar63,uVar64))))))) << 3
    ;
    lVar45 = CONCAT17(bVar47,CONCAT16(uVar48,CONCAT15(uVar49,CONCAT14(uVar50,CONCAT13(uVar51,
                                                  CONCAT12(uVar52,CONCAT11(uVar53,uVar54))))))) <<
             0x2d;
    lVar14 = CONCAT17(bVar55,CONCAT16(uVar58,CONCAT15(uVar59,CONCAT14(uVar60,CONCAT13(uVar61,
                                                  CONCAT12(uVar62,CONCAT11(uVar63,uVar64))))))) <<
             0x2d;
    uVar22 = CONCAT17(bVar47,CONCAT16(uVar48,CONCAT15(uVar49,CONCAT14(uVar50,CONCAT13(uVar51,
                                                  CONCAT12(uVar52,CONCAT11(uVar53,uVar54))))))) >> 6
    ;
    uVar25 = CONCAT17(bVar55,CONCAT16(uVar58,CONCAT15(uVar59,CONCAT14(uVar60,CONCAT13(uVar61,
                                                  CONCAT12(uVar62,CONCAT11(uVar63,uVar64))))))) >> 6
    ;
    bVar56 = (byte)(uVar16 >> 0x38);
    bVar57 = (byte)(uVar19 >> 0x38);
    uVar11 = uVar16 >> 1;
    uVar12 = uVar19 >> 1;
    uVar17 = uVar16 >> 7;
    uVar20 = uVar19 >> 7;
    auVar70._0_8_ =
         CONCAT17((byte)((ulong)lVar69 >> 0x38) ^ (byte)((ulong)lVar45 >> 0x38) ^ bVar47 >> 6,
                  CONCAT16((byte)((ulong)lVar69 >> 0x30) ^ (byte)((ulong)lVar45 >> 0x30) ^
                           (byte)(uVar22 >> 0x30),
                           CONCAT15((byte)((ulong)lVar69 >> 0x28) ^
                                    ((byte)((ulong)lVar45 >> 0x28) | bVar47 >> 3) ^
                                    (byte)(uVar22 >> 0x28),
                                    CONCAT14((byte)((ulong)lVar69 >> 0x20) ^ (byte)(uVar40 >> 0x20)
                                             ^ (byte)(uVar22 >> 0x20),
                                             CONCAT13((byte)((ulong)lVar69 >> 0x18) ^
                                                      (byte)(uVar40 >> 0x18) ^
                                                      (byte)(uVar22 >> 0x18),
                                                      CONCAT12((byte)((ulong)lVar69 >> 0x10) ^
                                                               (byte)(uVar40 >> 0x10) ^
                                                               (byte)(uVar22 >> 0x10),
                                                               CONCAT11((byte)((ulong)lVar69 >> 8) ^
                                                                        (byte)(uVar40 >> 8) ^
                                                                        (byte)(uVar22 >> 8),
                                                                        ((byte)lVar69 | bVar47 >> 5)
                                                                        ^ (byte)uVar40 ^
                                                                        (byte)uVar22)))))));
    auVar70[8] = ((byte)lVar71 | bVar55 >> 5) ^ (byte)uVar43 ^ (byte)uVar25;
    auVar70[9] = (byte)((ulong)lVar71 >> 8) ^ (byte)(uVar43 >> 8) ^ (byte)(uVar25 >> 8);
    auVar70[10] = (byte)((ulong)lVar71 >> 0x10) ^ (byte)(uVar43 >> 0x10) ^ (byte)(uVar25 >> 0x10);
    auVar70[0xb] = (byte)((ulong)lVar71 >> 0x18) ^ (byte)(uVar43 >> 0x18) ^ (byte)(uVar25 >> 0x18);
    auVar70[0xc] = (byte)((ulong)lVar71 >> 0x20) ^ (byte)(uVar43 >> 0x20) ^ (byte)(uVar25 >> 0x20);
    auVar70[0xd] = (byte)((ulong)lVar71 >> 0x28) ^ ((byte)((ulong)lVar14 >> 0x28) | bVar55 >> 3) ^
                   (byte)(uVar25 >> 0x28);
    auVar70[0xe] = (byte)((ulong)lVar71 >> 0x30) ^ (byte)((ulong)lVar14 >> 0x30) ^
                   (byte)(uVar25 >> 0x30);
    auVar70[0xf] = (byte)((ulong)lVar71 >> 0x38) ^ (byte)((ulong)lVar14 >> 0x38) ^ bVar55 >> 6;
    lVar45 = auVar70._0_8_ + plVar44[-7] + plVar44[-0x10] +
             CONCAT17((byte)uVar16 ^ ((byte)((uVar16 << 0x3f) >> 0x38) | bVar56 >> 1) ^ bVar56 >> 7,
                      CONCAT16(bVar56 ^ (byte)(uVar11 >> 0x30) ^ (byte)(uVar17 >> 0x30),
                               CONCAT15((byte)(uVar16 >> 0x30) ^ (byte)(uVar11 >> 0x28) ^
                                        (byte)(uVar17 >> 0x28),
                                        CONCAT14((byte)(uVar16 >> 0x28) ^ (byte)(uVar11 >> 0x20) ^
                                                 (byte)(uVar17 >> 0x20),
                                                 CONCAT13((byte)(uVar16 >> 0x20) ^
                                                          (byte)(uVar11 >> 0x18) ^
                                                          (byte)(uVar17 >> 0x18),
                                                          CONCAT12((byte)(uVar16 >> 0x18) ^
                                                                   (byte)(uVar11 >> 0x10) ^
                                                                   (byte)(uVar17 >> 0x10),
                                                                   CONCAT11((byte)(uVar16 >> 0x10) ^
                                                                            (byte)(uVar11 >> 8) ^
                                                                            (byte)(uVar17 >> 8),
                                                                            (byte)(uVar16 >> 8) ^
                                                                            (byte)uVar11 ^
                                                                            (byte)uVar17)))))));
    uVar54 = (undefined1)lVar45;
    uVar53 = (undefined1)((ulong)lVar45 >> 8);
    uVar52 = (undefined1)((ulong)lVar45 >> 0x10);
    uVar51 = (undefined1)((ulong)lVar45 >> 0x18);
    uVar50 = (undefined1)((ulong)lVar45 >> 0x20);
    uVar49 = (undefined1)((ulong)lVar45 >> 0x28);
    uVar48 = (undefined1)((ulong)lVar45 >> 0x30);
    bVar47 = (byte)((ulong)lVar45 >> 0x38);
    lVar14 = auVar70._8_8_ + plVar44[-6] + plVar44[-0xf] +
             CONCAT17((byte)uVar19 ^ ((byte)((uVar19 << 0x3f) >> 0x38) | bVar57 >> 1) ^ bVar57 >> 7,
                      CONCAT16(bVar57 ^ (byte)(uVar12 >> 0x30) ^ (byte)(uVar20 >> 0x30),
                               CONCAT15((byte)(uVar19 >> 0x30) ^ (byte)(uVar12 >> 0x28) ^
                                        (byte)(uVar20 >> 0x28),
                                        CONCAT14((byte)(uVar19 >> 0x28) ^ (byte)(uVar12 >> 0x20) ^
                                                 (byte)(uVar20 >> 0x20),
                                                 CONCAT13((byte)(uVar19 >> 0x20) ^
                                                          (byte)(uVar12 >> 0x18) ^
                                                          (byte)(uVar20 >> 0x18),
                                                          CONCAT12((byte)(uVar19 >> 0x18) ^
                                                                   (byte)(uVar12 >> 0x10) ^
                                                                   (byte)(uVar20 >> 0x10),
                                                                   CONCAT11((byte)(uVar19 >> 0x10) ^
                                                                            (byte)(uVar12 >> 8) ^
                                                                            (byte)(uVar20 >> 8),
                                                                            (byte)(uVar19 >> 8) ^
                                                                            (byte)uVar12 ^
                                                                            (byte)uVar20)))))));
    uVar64 = (undefined1)lVar14;
    uVar63 = (undefined1)((ulong)lVar14 >> 8);
    uVar62 = (undefined1)((ulong)lVar14 >> 0x10);
    uVar61 = (undefined1)((ulong)lVar14 >> 0x18);
    uVar60 = (undefined1)((ulong)lVar14 >> 0x20);
    uVar59 = (undefined1)((ulong)lVar14 >> 0x28);
    uVar58 = (undefined1)((ulong)lVar14 >> 0x30);
    bVar55 = (byte)((ulong)lVar14 >> 0x38);
    plVar46 = plVar44 + 2;
    plVar44[1] = lVar14;
    *plVar44 = lVar45;
    plVar44 = plVar46;
  } while (alStack_240 + 0x40 != plVar46);
  plVar44 = &DAT_71009c3e40;
  plVar46 = local_2c0;
  do {
    plVar5 = plVar46 + 3;
    lVar45 = (((ulong)alStack_240[0x44] >> 0x12 | alStack_240[0x44] << 0x2e) ^
              ((ulong)alStack_240[0x44] >> 0xe | alStack_240[0x44] << 0x32) ^
             ((ulong)alStack_240[0x44] >> 0x29 | alStack_240[0x44] << 0x17)) +
             ((alStack_240[0x45] ^ alStack_240[0x46]) & alStack_240[0x44] ^ alStack_240[0x46]) +
             *plVar44 + *plVar46 + alStack_240[0x47];
    alStack_240[0x43] = alStack_240[0x43] + lVar45;
    plVar6 = plVar44 + 3;
    alStack_240[0x47] =
         (((ulong)alStack_240[0x40] >> 0x22 | alStack_240[0x40] << 0x1e) ^
          ((ulong)alStack_240[0x40] >> 0x1c | alStack_240[0x40] << 0x24) ^
         ((ulong)alStack_240[0x40] >> 0x27 | alStack_240[0x40] << 0x19)) + lVar45 +
         ((alStack_240[0x40] | alStack_240[0x41]) & alStack_240[0x42] |
         alStack_240[0x40] & alStack_240[0x41]);
    lVar45 = (((ulong)alStack_240[0x43] >> 0x12 | alStack_240[0x43] << 0x2e) ^
              ((ulong)alStack_240[0x43] >> 0xe | alStack_240[0x43] << 0x32) ^
             ((ulong)alStack_240[0x43] >> 0x29 | alStack_240[0x43] * 0x800000)) +
             plVar44[1] + plVar46[1] +
             ((alStack_240[0x45] ^ alStack_240[0x44]) & alStack_240[0x43] ^ alStack_240[0x45]) +
             alStack_240[0x46];
    alStack_240[0x42] = alStack_240[0x42] + lVar45;
    plVar1 = plVar46 + 6;
    plVar7 = plVar46 + 7;
    alStack_240[0x46] =
         (((ulong)alStack_240[0x47] >> 0x22 | alStack_240[0x47] * 0x40000000) ^
          ((ulong)alStack_240[0x47] >> 0x1c | alStack_240[0x47] << 0x24) ^
         ((ulong)alStack_240[0x47] >> 0x27 | alStack_240[0x47] * 0x2000000)) + lVar45 +
         ((alStack_240[0x40] | alStack_240[0x47]) & alStack_240[0x41] |
         alStack_240[0x40] & alStack_240[0x47]);
    plVar2 = plVar44 + 4;
    plVar8 = plVar44 + 5;
    lVar45 = (((ulong)alStack_240[0x42] >> 0x12 | alStack_240[0x42] << 0x2e) ^
              ((ulong)alStack_240[0x42] >> 0xe | alStack_240[0x42] << 0x32) ^
             ((ulong)alStack_240[0x42] >> 0x29 | alStack_240[0x42] * 0x800000)) +
             plVar44[2] + plVar46[2] +
             ((alStack_240[0x43] ^ alStack_240[0x44]) & alStack_240[0x42] ^ alStack_240[0x44]) +
             alStack_240[0x45];
    alStack_240[0x41] = alStack_240[0x41] + lVar45;
    plVar3 = plVar46 + 4;
    plVar9 = plVar46 + 5;
    plVar46 = plVar46 + 8;
    alStack_240[0x45] =
         (((ulong)alStack_240[0x46] >> 0x22 | alStack_240[0x46] * 0x40000000) ^
          ((ulong)alStack_240[0x46] >> 0x1c | alStack_240[0x46] << 0x24) ^
         ((ulong)alStack_240[0x46] >> 0x27 | alStack_240[0x46] * 0x2000000)) + lVar45 +
         ((alStack_240[0x47] | alStack_240[0x46]) & alStack_240[0x40] |
         alStack_240[0x47] & alStack_240[0x46]);
    plVar4 = plVar44 + 6;
    plVar10 = plVar44 + 7;
    plVar44 = plVar44 + 8;
    lVar45 = (((ulong)alStack_240[0x41] >> 0x12 | alStack_240[0x41] << 0x2e) ^
              ((ulong)alStack_240[0x41] >> 0xe | alStack_240[0x41] << 0x32) ^
             ((ulong)alStack_240[0x41] >> 0x29 | alStack_240[0x41] * 0x800000)) + *plVar6 + *plVar5
             + ((alStack_240[0x42] ^ alStack_240[0x43]) & alStack_240[0x41] ^ alStack_240[0x43]) +
               alStack_240[0x44];
    alStack_240[0x40] = alStack_240[0x40] + lVar45;
    alStack_240[0x44] =
         (((ulong)alStack_240[0x45] >> 0x22 | alStack_240[0x45] * 0x40000000) ^
          ((ulong)alStack_240[0x45] >> 0x1c | alStack_240[0x45] << 0x24) ^
         ((ulong)alStack_240[0x45] >> 0x27 | alStack_240[0x45] * 0x2000000)) + lVar45 +
         ((alStack_240[0x46] | alStack_240[0x45]) & alStack_240[0x47] |
         alStack_240[0x46] & alStack_240[0x45]);
    lVar45 = (((ulong)alStack_240[0x40] >> 0x12 | alStack_240[0x40] << 0x2e) ^
              ((ulong)alStack_240[0x40] >> 0xe | alStack_240[0x40] << 0x32) ^
             ((ulong)alStack_240[0x40] >> 0x29 | alStack_240[0x40] * 0x800000)) + *plVar2 + *plVar3
             + ((alStack_240[0x41] ^ alStack_240[0x42]) & alStack_240[0x40] ^ alStack_240[0x42]) +
               alStack_240[0x43];
    alStack_240[0x47] = alStack_240[0x47] + lVar45;
    alStack_240[0x43] =
         (((ulong)alStack_240[0x44] >> 0x22 | alStack_240[0x44] * 0x40000000) ^
          ((ulong)alStack_240[0x44] >> 0x1c | alStack_240[0x44] << 0x24) ^
         ((ulong)alStack_240[0x44] >> 0x27 | alStack_240[0x44] * 0x2000000)) + lVar45 +
         ((alStack_240[0x45] | alStack_240[0x44]) & alStack_240[0x46] |
         alStack_240[0x45] & alStack_240[0x44]);
    lVar45 = (((ulong)alStack_240[0x47] >> 0x12 | alStack_240[0x47] << 0x2e) ^
              ((ulong)alStack_240[0x47] >> 0xe | alStack_240[0x47] << 0x32) ^
             ((ulong)alStack_240[0x47] >> 0x29 | alStack_240[0x47] * 0x800000)) + *plVar8 + *plVar9
             + ((alStack_240[0x40] ^ alStack_240[0x41]) & alStack_240[0x47] ^ alStack_240[0x41]) +
               alStack_240[0x42];
    alStack_240[0x46] = alStack_240[0x46] + lVar45;
    alStack_240[0x42] =
         (((ulong)alStack_240[0x43] >> 0x22 | alStack_240[0x43] * 0x40000000) ^
          ((ulong)alStack_240[0x43] >> 0x1c | alStack_240[0x43] << 0x24) ^
         ((ulong)alStack_240[0x43] >> 0x27 | alStack_240[0x43] * 0x2000000)) + lVar45 +
         ((alStack_240[0x44] | alStack_240[0x43]) & alStack_240[0x45] |
         alStack_240[0x44] & alStack_240[0x43]);
    lVar45 = (((ulong)alStack_240[0x46] >> 0x12 | alStack_240[0x46] << 0x2e) ^
              ((ulong)alStack_240[0x46] >> 0xe | alStack_240[0x46] << 0x32) ^
             ((ulong)alStack_240[0x46] >> 0x29 | alStack_240[0x46] * 0x800000)) + *plVar4 + *plVar1
             + ((alStack_240[0x47] ^ alStack_240[0x40]) & alStack_240[0x46] ^ alStack_240[0x40]) +
               alStack_240[0x41];
    alStack_240[0x45] = alStack_240[0x45] + lVar45;
    alStack_240[0x41] =
         (((ulong)alStack_240[0x42] >> 0x22 | alStack_240[0x42] * 0x40000000) ^
          ((ulong)alStack_240[0x42] >> 0x1c | alStack_240[0x42] << 0x24) ^
         ((ulong)alStack_240[0x42] >> 0x27 | alStack_240[0x42] * 0x2000000)) + lVar45 +
         ((alStack_240[0x43] | alStack_240[0x42]) & alStack_240[0x44] |
         alStack_240[0x43] & alStack_240[0x42]);
    local_2d0 = (((ulong)alStack_240[0x45] >> 0x12 | alStack_240[0x45] << 0x2e) ^
                 ((ulong)alStack_240[0x45] >> 0xe | alStack_240[0x45] << 0x32) ^
                ((ulong)alStack_240[0x45] >> 0x29 | alStack_240[0x45] * 0x800000)) +
                *plVar10 + *plVar7 +
                ((alStack_240[0x46] ^ alStack_240[0x47]) & alStack_240[0x45] ^ alStack_240[0x47]) +
                alStack_240[0x40];
    lStack_2c8 = (((ulong)alStack_240[0x41] >> 0x22 | alStack_240[0x41] * 0x40000000) ^
                  ((ulong)alStack_240[0x41] >> 0x1c | alStack_240[0x41] << 0x24) ^
                 ((ulong)alStack_240[0x41] >> 0x27 | alStack_240[0x41] * 0x2000000)) +
                 ((alStack_240[0x42] | alStack_240[0x41]) & alStack_240[0x43] |
                 alStack_240[0x42] & alStack_240[0x41]);
    alStack_240[0x44] = alStack_240[0x44] + local_2d0;
    alStack_240[0x40] = local_2d0 + lStack_2c8;
  } while (plVar44 != (long *)&DAT_71009c40c0);
  lVar45 = 0;
  do {
    plVar44 = (long *)(param_1 + 0x10 + lVar45);
    lVar69 = *plVar44;
    lVar14 = *(long *)((long)alStack_240 + lVar45 + 0x200);
    plVar46 = (long *)(param_1 + 0x10 + lVar45);
    plVar46[1] = plVar44[1] + *(long *)((long)alStack_240 + lVar45 + 0x208);
    *plVar46 = lVar69 + lVar14;
    lVar45 = lVar45 + 0x10;
  } while (lVar45 != 0x40);
  FUN_710073b460(&local_2d0,0x2d0);
  return 0;
}



// ===== FUN_7100742e10 @ 7100742e10 (size=284) =====

undefined8 FUN_7100742e10(ulong *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar1 = *param_1;
  uVar3 = (uint)uVar1 & 0x7f;
  uVar4 = (ulong)(0x80 - uVar3);
  *param_1 = uVar1 + param_3;
  if (CARRY8(uVar1,param_3)) {
    param_1[1] = param_1[1] + 1;
  }
  if ((uVar1 & 0x7f) != 0 && uVar4 <= param_3) {
    FUN_710080f900((long)(param_1 + 10) + (ulong)uVar3,param_2,uVar4);
    uVar2 = FUN_7100742690(param_1,param_1 + 10);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    param_3 = param_3 - uVar4;
    param_2 = param_2 + uVar4;
    uVar3 = 0;
    goto joined_r0x007100742ee0;
  }
  if (0x7f < param_3) {
    do {
      param_3 = param_3 - 0x80;
      uVar2 = FUN_7100742690(param_1,param_2);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      param_2 = param_2 + 0x80;
joined_r0x007100742ee0:
    } while (0x7f < param_3);
    if (param_3 == 0) {
      return 0;
    }
  }
  FUN_710080f900((long)param_1 + (ulong)uVar3 + 0x50,param_2,param_3);
  return 0;
}



// ===== FUN_7100742f30 @ 7100742f30 (size=972) =====

void FUN_7100742f30(ulong *param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar2 = (uint)*param_1 & 0x7f;
  uVar1 = uVar2 + 1;
  *(undefined1 *)((long)param_1 + (ulong)uVar2 + 0x50) = 0x80;
  if (uVar1 < 0x71) {
    FUN_7100808340((long)param_1 + (ulong)uVar1 + 0x50,0,0x70 - uVar1);
  }
  else {
    FUN_7100808340((long)(param_1 + 10) + (ulong)uVar1,0,0x80 - uVar1);
    iVar5 = FUN_7100742690(param_1,param_1 + 10);
    if (iVar5 != 0) {
      return;
    }
    *(undefined1 (*) [16])(param_1 + 10) = ZEXT216(0);
    *(undefined1 (*) [16])(param_1 + 0xc) = ZEXT216(0);
    *(undefined1 (*) [16])(param_1 + 0xe) = ZEXT216(0);
    *(undefined1 (*) [16])(param_1 + 0x10) = ZEXT216(0);
    *(undefined1 (*) [16])(param_1 + 0x12) = ZEXT216(0);
    *(undefined1 (*) [16])(param_1 + 0x14) = ZEXT216(0);
    *(undefined1 (*) [16])(param_1 + 0x16) = ZEXT216(0);
  }
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar6 = NEON_shl(uVar3,3);
  *(char *)(param_1 + 0x18) = (char)(uVar4 >> 0x35);
  *(char *)((long)param_1 + 0xc1) = (char)(uVar4 >> 0x2d);
  *(char *)((long)param_1 + 0xc2) = (char)(uVar4 >> 0x25);
  *(char *)((long)param_1 + 0xc3) = (char)(uVar4 >> 0x1d);
  *(char *)((long)param_1 + 0xc4) = (char)(uVar4 >> 0x15);
  *(char *)((long)param_1 + 0xc5) = (char)(uVar4 >> 0xd);
  *(char *)((long)param_1 + 0xc6) = (char)(uVar4 >> 5);
  *(byte *)((long)param_1 + 199) = (byte)(uVar3 >> 0x3d) | (byte)(uVar4 << 3);
  *(char *)(param_1 + 0x19) = (char)(uVar3 >> 0x35);
  *(char *)((long)param_1 + 0xc9) = (char)(uVar3 >> 0x2d);
  *(char *)((long)param_1 + 0xca) = (char)(uVar3 >> 0x25);
  *(char *)((long)param_1 + 0xcb) = (char)(uVar3 >> 0x1d);
  *(char *)((long)param_1 + 0xcc) = (char)(uVar3 >> 0x15);
  *(char *)((long)param_1 + 0xcd) = (char)(uVar3 >> 0xd);
  *(char *)((long)param_1 + 0xce) = (char)(uVar3 >> 5);
  *(char *)((long)param_1 + 0xcf) = (char)uVar6;
  iVar5 = FUN_7100742690(param_1,param_1 + 10);
  if (iVar5 == 0) {
    *param_2 = *(undefined1 *)((long)param_1 + 0x17);
    param_2[1] = (char)*(undefined2 *)((long)param_1 + 0x16);
    param_2[2] = (char)(param_1[2] >> 0x28);
    param_2[3] = (char)*(undefined4 *)((long)param_1 + 0x14);
    param_2[4] = (char)(param_1[2] >> 0x18);
    param_2[5] = (char)(param_1[2] >> 0x10);
    param_2[6] = (char)(param_1[2] >> 8);
    param_2[7] = (char)param_1[2];
    param_2[8] = *(undefined1 *)((long)param_1 + 0x1f);
    param_2[9] = (char)*(undefined2 *)((long)param_1 + 0x1e);
    param_2[10] = (char)(param_1[3] >> 0x28);
    param_2[0xb] = (char)*(undefined4 *)((long)param_1 + 0x1c);
    param_2[0xc] = (char)(param_1[3] >> 0x18);
    param_2[0xd] = (char)(param_1[3] >> 0x10);
    param_2[0xe] = (char)(param_1[3] >> 8);
    param_2[0xf] = (char)param_1[3];
    param_2[0x10] = *(undefined1 *)((long)param_1 + 0x27);
    param_2[0x11] = (char)*(undefined2 *)((long)param_1 + 0x26);
    param_2[0x12] = (char)(param_1[4] >> 0x28);
    param_2[0x13] = (char)*(undefined4 *)((long)param_1 + 0x24);
    param_2[0x14] = (char)(param_1[4] >> 0x18);
    param_2[0x15] = (char)(param_1[4] >> 0x10);
    param_2[0x16] = (char)(param_1[4] >> 8);
    param_2[0x17] = (char)param_1[4];
    param_2[0x18] = *(undefined1 *)((long)param_1 + 0x2f);
    param_2[0x19] = (char)*(undefined2 *)((long)param_1 + 0x2e);
    param_2[0x1a] = (char)(param_1[5] >> 0x28);
    param_2[0x1b] = (char)*(undefined4 *)((long)param_1 + 0x2c);
    param_2[0x1c] = (char)(param_1[5] >> 0x18);
    param_2[0x1d] = (char)(param_1[5] >> 0x10);
    param_2[0x1e] = (char)(param_1[5] >> 8);
    param_2[0x1f] = (char)param_1[5];
    param_2[0x20] = *(undefined1 *)((long)param_1 + 0x37);
    param_2[0x21] = (char)*(undefined2 *)((long)param_1 + 0x36);
    param_2[0x22] = (char)(param_1[6] >> 0x28);
    param_2[0x23] = (char)*(undefined4 *)((long)param_1 + 0x34);
    param_2[0x24] = (char)(param_1[6] >> 0x18);
    param_2[0x25] = (char)(param_1[6] >> 0x10);
    param_2[0x26] = (char)(param_1[6] >> 8);
    param_2[0x27] = (char)param_1[6];
    param_2[0x28] = *(undefined1 *)((long)param_1 + 0x3f);
    param_2[0x29] = (char)*(undefined2 *)((long)param_1 + 0x3e);
    param_2[0x2a] = (char)(param_1[7] >> 0x28);
    param_2[0x2b] = (char)*(undefined4 *)((long)param_1 + 0x3c);
    param_2[0x2c] = (char)(param_1[7] >> 0x18);
    param_2[0x2d] = (char)(param_1[7] >> 0x10);
    param_2[0x2e] = (char)(param_1[7] >> 8);
    param_2[0x2f] = (char)param_1[7];
    if ((int)param_1[0x1a] == 0) {
      param_2[0x30] = *(undefined1 *)((long)param_1 + 0x47);
      param_2[0x31] = (char)*(undefined2 *)((long)param_1 + 0x46);
      param_2[0x32] = (char)(param_1[8] >> 0x28);
      param_2[0x33] = (char)*(undefined4 *)((long)param_1 + 0x44);
      param_2[0x34] = (char)(param_1[8] >> 0x18);
      param_2[0x35] = (char)(param_1[8] >> 0x10);
      param_2[0x36] = (char)(param_1[8] >> 8);
      param_2[0x37] = (char)param_1[8];
      param_2[0x38] = *(undefined1 *)((long)param_1 + 0x4f);
      param_2[0x39] = (char)*(undefined2 *)((long)param_1 + 0x4e);
      param_2[0x3a] = (char)(param_1[9] >> 0x28);
      param_2[0x3b] = (char)*(undefined4 *)((long)param_1 + 0x4c);
      param_2[0x3c] = (char)(param_1[9] >> 0x18);
      param_2[0x3d] = (char)(param_1[9] >> 0x10);
      param_2[0x3e] = (char)(param_1[9] >> 8);
      param_2[0x3f] = (char)param_1[9];
    }
  }
  return;
}



// ===== FUN_7100743300 @ 7100743300 (size=172) =====

int FUN_7100743300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_d8 [216];
  
  FUN_7100742500(auStack_d8);
  iVar1 = FUN_7100742540(auStack_d8,param_4);
  if ((iVar1 == 0) && (iVar1 = FUN_7100742e10(auStack_d8,param_1,param_2), iVar1 == 0)) {
    iVar1 = FUN_7100742f30(auStack_d8,param_3);
    FUN_7100742530(auStack_d8);
    return iVar1;
  }
  FUN_7100742530(auStack_d8);
  return iVar1;
}



// ===== FUN_71007433b0 @ 71007433b0 (size=8) =====

undefined8 FUN_71007433b0(void)

{
  undefined8 uVar1;
  
  uVar1 = cntpct_el0;
  return uVar1;
}



// ===== FUN_71007433c0 @ 71007433c0 (size=768) =====

void FUN_71007433c0(void)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int aiStack_800 [256];
  uint auStack_400 [256];
  
  iVar6 = 0;
  uVar5 = 1;
  puVar8 = auStack_400;
  do {
    uVar12 = 0x1b;
    if ((uVar5 & 0x80) == 0) {
      uVar12 = 0;
    }
    *puVar8 = uVar5;
    aiStack_800[(int)uVar5] = iVar6;
    iVar6 = iVar6 + 1;
    uVar5 = (uVar12 ^ (uVar5 & 0x7f) << 1 ^ (int)(char)uVar5) & 0xff;
    puVar8 = puVar8 + 1;
  } while (iVar6 != 0x100);
  uVar5 = 1;
  puVar8 = (uint *)&DAT_7100d147a0;
  do {
    uVar12 = (uVar5 & 0x7f) << 1;
    puVar9 = puVar8 + 1;
    *puVar8 = uVar5;
    if ((uVar5 & 0x80) != 0) {
      uVar12 = (int)(char)((byte)uVar12 ^ 0x1b);
    }
    uVar5 = uVar12 & 0xff;
    puVar8 = puVar9;
  } while (puVar9 != (uint *)0x7100d147c8);
  DAT_7100d168d0 = 99;
  DAT_7100d15833 = 0;
  lVar7 = 0;
  do {
    lVar10 = lVar7 + 1;
    uVar12 = auStack_400[0xff - aiStack_800[lVar7 + 1]];
    uVar14 = (int)uVar12 >> 7 | uVar12 << 1;
    uVar13 = uVar14 >> 7 & 1 | uVar14 << 1;
    uVar5 = uVar13 << 1;
    uVar11 = (uVar14 << 1) >> 7 & 1 | uVar5;
    uVar5 = (uVar11 ^ uVar13) & 0xff ^
            ((uVar5 >> 7 & 1 | uVar11 << 1) ^ 99) & 0xff ^ uVar12 ^ uVar14 & 0xff;
    *(char *)((long)(int)uVar5 + 0x7100d157d0) = (char)lVar7 + '\x01';
    *(char *)(lVar7 + 0x7100d168d1) = (char)uVar5;
    lVar7 = lVar10;
  } while (lVar10 != 0xff);
  lVar7 = 0;
  do {
    bVar2 = (&DAT_7100d168d0)[lVar7];
    uVar11 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar12 = 0;
    bVar3 = *(byte *)(lVar7 + 0x7100d157d0);
    lVar10 = lVar7 * 4;
    uVar5 = (bVar2 & 0x7f) << 1;
    if ((bVar2 & 0x80) != 0) {
      uVar5 = (int)(char)((byte)uVar5 ^ 0x1b);
    }
    uVar5 = uVar5 & 0xff;
    uVar4 = uVar5 | ((uint)bVar2 + (uint)bVar2 * 0x100) * 0x100;
    uVar1 = uVar4 ^ (bVar2 ^ uVar5) << 0x18;
    *(uint *)(lVar7 * 4 + 0x7100d164d0) = uVar1;
    *(uint *)(lVar7 * 4 + 0x7100d160d0) = uVar1 >> 0x18 | uVar4 << 8;
    *(uint *)(lVar7 * 4 + 0x7100d15cd0) = uVar1 >> 0x10 | uVar4 << 0x10;
    *(uint *)(lVar7 * 4 + 0x7100d158d0) = uVar1 >> 8 | uVar5 << 0x18;
    if (bVar3 != 0) {
      iVar6 = aiStack_800[bVar3];
      uVar5 = auStack_400[(aiStack_800[0xe] + iVar6) % 0xff];
      uVar12 = auStack_400[(iVar6 + aiStack_800[0xd]) % 0xff] << 0x10 ^
               auStack_400[(iVar6 + aiStack_800[9]) % 0xff] << 8 ^
               uVar5 ^ auStack_400[(iVar6 + aiStack_800[0xb]) % 0xff] << 0x18;
      uVar14 = uVar12 >> 0x18 | uVar12 << 8;
      uVar13 = uVar12 >> 0x10 | uVar12 << 0x10;
      uVar11 = uVar12 >> 8 | uVar5 << 0x18;
    }
    lVar7 = lVar7 + 1;
    *(uint *)(lVar10 + 0x7100d153d0) = uVar12;
    *(uint *)(lVar10 + 0x7100d14fd0) = uVar14;
    *(uint *)(lVar10 + 0x7100d14bd0) = uVar13;
    *(uint *)(lVar10 + 0x7100d147d0) = uVar11;
  } while (lVar7 != 0x100);
  return;
}



// ===== FUN_7100743770 @ 7100743770 (size=12) =====

void FUN_7100743770(undefined8 param_1)

{
  FUN_7100808340(param_1,0,0x120);
  return;
}



// ===== FUN_7100743780 @ 7100743780 (size=16) =====

void FUN_7100743780(long param_1)

{
  if (param_1 != 0) {
    FUN_710073b460(param_1,0x120);
    return;
  }
  return;
}



// ===== FUN_7100743790 @ 7100743790 (size=36) =====

void FUN_7100743790(long param_1)

{
  FUN_7100743770();
  FUN_7100743770(param_1 + 0x120);
  return;
}



// ===== FUN_71007437c0 @ 71007437c0 (size=44) =====

void FUN_71007437c0(long param_1)

{
  if (param_1 != 0) {
    FUN_7100743780();
    FUN_7100743780(param_1 + 0x120);
    return;
  }
  return;
}



// ===== FUN_71007437f0 @ 71007437f0 (size=724) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_71007437f0(int *param_1,byte *param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  
  if (param_3 == 0xc0) {
    iVar3 = 0xc;
  }
  else {
    if (param_3 == 0x100) {
      *param_1 = 0xe;
      goto joined_r0x0071007438c0;
    }
    if (param_3 != 0x80) {
      return 0xffffffe0;
    }
    iVar3 = 10;
  }
  *param_1 = iVar3;
joined_r0x0071007438c0:
  if (_DAT_7100d14794 == 0) {
    FUN_71007433c0();
    _DAT_7100d14794 = 1;
  }
  puVar6 = (uint *)(param_1 + 4);
  *(uint **)(param_1 + 2) = puVar6;
  pbVar4 = param_2;
  puVar14 = puVar6;
  do {
    pbVar5 = pbVar4 + 4;
    *puVar14 = (uint)pbVar4[2] << 0x10 | (uint)pbVar4[1] << 8 |
               (uint)*pbVar4 | (uint)pbVar4[3] << 0x18;
    pbVar4 = pbVar5;
    puVar14 = puVar14 + 1;
  } while (pbVar5 != param_2 + (ulong)(param_3 >> 5) * 4);
  iVar3 = *param_1;
  if (iVar3 == 0xc) {
    uVar8 = param_1[4];
    uVar10 = param_1[5];
    uVar7 = param_1[6];
    uVar12 = param_1[7];
    uVar11 = param_1[8];
    uVar13 = param_1[9];
    puVar14 = (uint *)&DAT_7100d147a0;
    do {
      puVar1 = puVar6 + 6;
      uVar8 = uVar8 ^ ((uint)(byte)(&DAT_7100d168d0)[(int)(uVar13 >> 8 & 0xff)] |
                      (uint)(byte)(&DAT_7100d168d0)[(int)(uVar13 >> 0x18)] << 0x10) ^ *puVar14 ^
                      ((uint)(byte)(&DAT_7100d168d0)[(int)(uVar13 & 0xff)] << 0x18 |
                      (uint)(byte)(&DAT_7100d168d0)[(int)(uVar13 >> 0x10 & 0xff)] << 8);
      uVar10 = uVar10 ^ uVar8;
      uVar7 = uVar7 ^ uVar10;
      uVar12 = uVar12 ^ uVar7;
      *puVar1 = uVar8;
      puVar6[7] = uVar10;
      uVar11 = uVar11 ^ uVar12;
      uVar13 = uVar13 ^ uVar11;
      puVar6[8] = uVar7;
      puVar6[9] = uVar12;
      puVar6[10] = uVar11;
      puVar6[0xb] = uVar13;
      puVar6 = puVar1;
      puVar14 = puVar14 + 1;
    } while (puVar1 != (uint *)(param_1 + 0x34));
  }
  else if (iVar3 == 0xe) {
    uVar8 = param_1[4];
    uVar10 = param_1[5];
    uVar7 = param_1[6];
    uVar12 = param_1[7];
    uVar11 = param_1[8];
    uVar13 = param_1[9];
    uVar9 = param_1[10];
    uVar2 = param_1[0xb];
    puVar14 = (uint *)&DAT_7100d147a0;
    do {
      puVar1 = puVar6 + 8;
      uVar8 = uVar8 ^ ((uint)(byte)(&DAT_7100d168d0)[(int)(uVar2 >> 8 & 0xff)] |
                      (uint)(byte)(&DAT_7100d168d0)[(int)(uVar2 >> 0x18)] << 0x10) ^ *puVar14 ^
                      ((uint)(byte)(&DAT_7100d168d0)[(int)(uVar2 & 0xff)] << 0x18 |
                      (uint)(byte)(&DAT_7100d168d0)[(int)(uVar2 >> 0x10 & 0xff)] << 8);
      uVar10 = uVar10 ^ uVar8;
      uVar7 = uVar7 ^ uVar10;
      uVar12 = uVar12 ^ uVar7;
      *puVar1 = uVar8;
      puVar6[9] = uVar10;
      puVar6[10] = uVar7;
      puVar6[0xb] = uVar12;
      uVar11 = uVar11 ^ ((uint)(byte)(&DAT_7100d168d0)[(int)(uVar12 >> 0x10 & 0xff)] << 0x10 |
                        (uint)(byte)(&DAT_7100d168d0)[(int)(uVar12 >> 8 & 0xff)] << 8) ^
                        ((uint)(byte)(&DAT_7100d168d0)[(int)(uVar12 & 0xff)] |
                        (uint)(byte)(&DAT_7100d168d0)[(int)(uVar12 >> 0x18)] << 0x18);
      uVar13 = uVar13 ^ uVar11;
      uVar9 = uVar9 ^ uVar13;
      uVar2 = uVar2 ^ uVar9;
      puVar6[0xc] = uVar11;
      puVar6[0xd] = uVar13;
      puVar6[0xe] = uVar9;
      puVar6[0xf] = uVar2;
      puVar6 = puVar1;
      puVar14 = puVar14 + 1;
    } while (puVar1 != (uint *)(param_1 + 0x3c));
  }
  else if (iVar3 == 10) {
    uVar8 = param_1[4];
    uVar10 = param_1[5];
    uVar7 = param_1[6];
    uVar12 = param_1[7];
    puVar14 = (uint *)&DAT_7100d147a0;
    do {
      puVar1 = puVar6 + 4;
      uVar8 = uVar8 ^ ((uint)(byte)(&DAT_7100d168d0)[(int)(uVar12 >> 8 & 0xff)] |
                      (uint)(byte)(&DAT_7100d168d0)[(int)(uVar12 >> 0x18)] << 0x10) ^ *puVar14 ^
                      ((uint)(byte)(&DAT_7100d168d0)[(int)(uVar12 & 0xff)] << 0x18 |
                      (uint)(byte)(&DAT_7100d168d0)[(int)(uVar12 >> 0x10 & 0xff)] << 8);
      uVar10 = uVar10 ^ uVar8;
      uVar7 = uVar7 ^ uVar10;
      uVar12 = uVar12 ^ uVar7;
      *puVar1 = uVar8;
      puVar6[5] = uVar10;
      puVar6[6] = uVar7;
      puVar6[7] = uVar12;
      puVar6 = puVar1;
      puVar14 = puVar14 + 1;
    } while (puVar1 != (uint *)(param_1 + 0x2c));
  }
  return 0;
}



// ===== FUN_7100743ad0 @ 7100743ad0 (size=380) =====

int FUN_7100743ad0(int *param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int local_120 [2];
  long local_118;
  
  FUN_7100743770(local_120);
  *(int **)(param_1 + 2) = param_1 + 4;
  iVar2 = FUN_71007437f0(local_120,param_2,param_3);
  if (iVar2 == 0) {
    piVar7 = param_1 + 8;
    lVar3 = local_118 + (long)(local_120[0] << 2) * 4;
    *param_1 = local_120[0];
    piVar6 = (int *)(lVar3 + -0x10);
    param_1[4] = *(int *)(local_118 + (long)(local_120[0] << 2) * 4);
    param_1[5] = *(int *)(lVar3 + 4);
    param_1[6] = *(int *)(lVar3 + 8);
    param_1[7] = *(int *)(lVar3 + 0xc);
    if (1 < local_120[0]) {
      piVar4 = piVar7;
      piVar5 = piVar6;
      do {
        lVar3 = 0;
        do {
          uVar1 = *(uint *)((long)piVar5 + lVar3);
          *(uint *)((long)piVar4 + lVar3) =
               *(uint *)((ulong)(byte)(&DAT_7100d168d0)[(ulong)(uVar1 >> 8) & 0xff] * 4 +
                        0x7100d14fd0) ^
               *(uint *)((ulong)(byte)(&DAT_7100d168d0)[(ulong)(uVar1 >> 0x10) & 0xff] * 4 +
                        0x7100d14bd0) ^
               *(uint *)((ulong)(byte)(&DAT_7100d168d0)[uVar1 & 0xff] * 4 + 0x7100d153d0) ^
               *(uint *)((ulong)(byte)(&DAT_7100d168d0)[uVar1 >> 0x18] * 4 + 0x7100d147d0);
          lVar3 = lVar3 + 4;
        } while (lVar3 != 0x10);
        piVar4 = piVar4 + 4;
        piVar5 = piVar5 + -4;
      } while (param_1 + (ulong)(local_120[0] + 1) * 4 != piVar4);
      piVar6 = piVar6 + (ulong)(local_120[0] - 2) * -4 + -4;
      piVar7 = piVar7 + (ulong)(local_120[0] - 2) * 4 + 4;
    }
    *piVar7 = *piVar6;
    piVar7[1] = piVar6[1];
    piVar7[2] = piVar6[2];
    piVar7[3] = piVar6[3];
  }
  FUN_7100743780(local_120);
  return iVar2;
}



// ===== FUN_7100743c50 @ 7100743c50 (size=24) =====

undefined8 FUN_7100743c50(long param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  
  if ((param_3 - 0x100 & 0xfffffeff) != 0) {
    return 0xffffffe0;
  }
  uVar1 = FUN_71007437f0(param_1 + 0x120,param_2 + (ulong)(param_3 >> 4),param_3 >> 1);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  uVar1 = FUN_71007437f0(param_1,param_2,param_3 >> 1);
  return uVar1;
}



// ===== FUN_7100743c68 @ 7100743c68 (size=96) =====

void FUN_7100743c68(long param_1,long param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = param_4 >> 1 & 0x7fffffff;
  iVar1 = FUN_71007437f0(param_1 + 0x120,param_2 + (param_4 >> 4 & 0xfffffff),uVar2);
  if (iVar1 != 0) {
    return;
  }
  FUN_71007437f0(param_1,param_2,uVar2);
  return;
}



// ===== FUN_7100743cd0 @ 7100743cd0 (size=24) =====

undefined8 FUN_7100743cd0(long param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  
  if ((param_3 - 0x100 & 0xfffffeff) != 0) {
    return 0xffffffe0;
  }
  uVar1 = FUN_71007437f0(param_1 + 0x120,param_2 + (ulong)(param_3 >> 4),param_3 >> 1);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  uVar1 = FUN_7100743ad0(param_1,param_2,param_3 >> 1);
  return uVar1;
}



// ===== FUN_7100743ce8 @ 7100743ce8 (size=96) =====

void FUN_7100743ce8(long param_1,long param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = param_4 >> 1 & 0x7fffffff;
  iVar1 = FUN_71007437f0(param_1 + 0x120,param_2 + (param_4 >> 4 & 0xfffffff),uVar2);
  if (iVar1 != 0) {
    return;
  }
  FUN_7100743ad0(param_1,param_2,uVar2);
  return;
}



// ===== FUN_7100743d50 @ 7100743d50 (size=1308) =====

undefined8 FUN_7100743d50(int *param_1,uint *param_2,undefined1 *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  uint *puVar17;
  uint *puVar18;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  puVar18 = *(uint **)(param_1 + 2);
  puVar17 = puVar18 + 4;
  uVar13 = (ulong)(*param_2 ^ *puVar18);
  uVar14 = (ulong)(param_2[1] ^ puVar18[1]);
  uVar15 = (ulong)(param_2[2] ^ puVar18[2]);
  uVar12 = (ulong)(param_2[3] ^ puVar18[3]);
  if (3 < *param_1) {
    uVar16 = (ulong)((*param_1 >> 1) - 2);
    do {
      puVar1 = puVar17 + 8;
      uVar2 = *(uint *)((uVar13 & 0xff) * 4 + 0x7100d164d0) ^
              *(uint *)((uVar12 >> 0x18) * 4 + 0x7100d158d0) ^ *puVar17 ^
              *(uint *)((uVar14 >> 8 & 0xff) * 4 + 0x7100d160d0) ^
              *(uint *)((uVar15 >> 0x10 & 0xff) * 4 + 0x7100d15cd0);
      uVar3 = *(uint *)((uVar14 & 0xff) * 4 + 0x7100d164d0) ^
              *(uint *)((uVar13 >> 0x18) * 4 + 0x7100d158d0) ^ puVar17[1] ^
              *(uint *)((uVar15 >> 8 & 0xff) * 4 + 0x7100d160d0) ^
              *(uint *)((uVar12 >> 0x10 & 0xff) * 4 + 0x7100d15cd0);
      uVar4 = *(uint *)((uVar15 & 0xff) * 4 + 0x7100d164d0) ^
              *(uint *)((uVar14 >> 0x18) * 4 + 0x7100d158d0) ^ puVar17[2] ^
              *(uint *)((uVar12 >> 8 & 0xff) * 4 + 0x7100d160d0) ^
              *(uint *)((uVar13 >> 0x10 & 0xff) * 4 + 0x7100d15cd0);
      uVar5 = *(uint *)((uVar12 & 0xff) * 4 + 0x7100d164d0) ^
              *(uint *)((uVar15 >> 0x18) * 4 + 0x7100d158d0) ^ puVar17[3] ^
              *(uint *)((uVar13 >> 8 & 0xff) * 4 + 0x7100d160d0) ^
              *(uint *)((uVar14 >> 0x10 & 0xff) * 4 + 0x7100d15cd0);
      uVar13 = (ulong)(*(uint *)(((ulong)uVar2 & 0xff) * 4 + 0x7100d164d0) ^
                       *(uint *)((ulong)(uVar5 >> 0x18) * 4 + 0x7100d158d0) ^ puVar17[4] ^
                      *(uint *)(((ulong)(uVar3 >> 8) & 0xff) * 4 + 0x7100d160d0) ^
                      *(uint *)(((ulong)(uVar4 >> 0x10) & 0xff) * 4 + 0x7100d15cd0));
      uVar14 = (ulong)(*(uint *)(((ulong)uVar3 & 0xff) * 4 + 0x7100d164d0) ^
                       *(uint *)((ulong)(uVar2 >> 0x18) * 4 + 0x7100d158d0) ^ puVar17[5] ^
                      *(uint *)(((ulong)(uVar4 >> 8) & 0xff) * 4 + 0x7100d160d0) ^
                      *(uint *)(((ulong)(uVar5 >> 0x10) & 0xff) * 4 + 0x7100d15cd0));
      uVar15 = (ulong)(*(uint *)(((ulong)uVar4 & 0xff) * 4 + 0x7100d164d0) ^
                       *(uint *)((ulong)(uVar3 >> 0x18) * 4 + 0x7100d158d0) ^ puVar17[6] ^
                      *(uint *)(((ulong)(uVar5 >> 8) & 0xff) * 4 + 0x7100d160d0) ^
                      *(uint *)(((ulong)(uVar2 >> 0x10) & 0xff) * 4 + 0x7100d15cd0));
      uVar12 = (ulong)(*(uint *)(((ulong)uVar5 & 0xff) * 4 + 0x7100d164d0) ^
                       *(uint *)((ulong)(uVar4 >> 0x18) * 4 + 0x7100d158d0) ^ puVar17[7] ^
                      *(uint *)(((ulong)(uVar2 >> 8) & 0xff) * 4 + 0x7100d160d0) ^
                      *(uint *)(((ulong)(uVar3 >> 0x10) & 0xff) * 4 + 0x7100d15cd0));
      puVar17 = puVar1;
    } while (puVar18 + uVar16 * 8 + 0xc != puVar1);
    puVar17 = puVar18 + uVar16 * 8 + 0xc;
  }
  local_10 = *(uint *)((uVar13 & 0xff) * 4 + 0x7100d164d0) ^
             *(uint *)((uVar12 >> 0x18) * 4 + 0x7100d158d0) ^ *puVar17 ^
             *(uint *)((uVar14 >> 8 & 0xff) * 4 + 0x7100d160d0) ^
             *(uint *)((uVar15 >> 0x10 & 0xff) * 4 + 0x7100d15cd0);
  local_c = *(uint *)((uVar14 & 0xff) * 4 + 0x7100d164d0) ^
            *(uint *)((uVar13 >> 0x18) * 4 + 0x7100d158d0) ^ puVar17[1] ^
            *(uint *)((uVar15 >> 8 & 0xff) * 4 + 0x7100d160d0) ^
            *(uint *)((uVar12 >> 0x10 & 0xff) * 4 + 0x7100d15cd0);
  local_8 = *(uint *)((uVar15 & 0xff) * 4 + 0x7100d164d0) ^
            *(uint *)((uVar14 >> 0x18) * 4 + 0x7100d158d0) ^ puVar17[2] ^
            *(uint *)((uVar12 >> 8 & 0xff) * 4 + 0x7100d160d0) ^
            *(uint *)((uVar13 >> 0x10 & 0xff) * 4 + 0x7100d15cd0);
  local_4 = *(uint *)((uVar12 & 0xff) * 4 + 0x7100d164d0) ^
            *(uint *)((uVar15 >> 0x18) * 4 + 0x7100d158d0) ^ puVar17[3] ^
            *(uint *)((uVar13 >> 8 & 0xff) * 4 + 0x7100d160d0) ^
            *(uint *)((uVar14 >> 0x10 & 0xff) * 4 + 0x7100d15cd0);
  uVar7 = puVar17[5];
  uVar2 = (uint)(byte)(&DAT_7100d168d0)[(int)(local_10 & 0xff)] ^ puVar17[4] ^
          (uint)(byte)(&DAT_7100d168d0)[(int)(local_4 >> 0x18)] << 0x18;
  local_20 = ((uint)(byte)(&DAT_7100d168d0)[(int)(local_8 >> 0x10 & 0xff)] << 0x10 |
             (uint)(byte)(&DAT_7100d168d0)[(int)(local_c >> 8 & 0xff)] << 8) ^ uVar2;
  bVar9 = (&DAT_7100d168d0)[(int)(local_c & 0xff)];
  bVar10 = (&DAT_7100d168d0)[(int)(local_4 & 0xff)];
  uVar3 = bVar9 ^ uVar7 ^ (uint)(byte)(&DAT_7100d168d0)[(int)(local_10 >> 0x18)] << 0x18;
  bVar11 = (&DAT_7100d168d0)[(int)(local_8 & 0xff)];
  local_1c = ((uint)(byte)(&DAT_7100d168d0)[(int)(local_4 >> 0x10 & 0xff)] << 0x10 |
             (uint)(byte)(&DAT_7100d168d0)[(int)(local_8 >> 8 & 0xff)] << 8) ^ uVar3;
  uVar6 = puVar17[6];
  uVar8 = puVar17[7];
  uVar4 = bVar11 ^ uVar6 ^ (uint)(byte)(&DAT_7100d168d0)[(int)(local_c >> 0x18)] << 0x18;
  local_18 = ((uint)(byte)(&DAT_7100d168d0)[(int)(local_10 >> 0x10 & 0xff)] << 0x10 |
             (uint)(byte)(&DAT_7100d168d0)[(int)(local_4 >> 8 & 0xff)] << 8) ^ uVar4;
  uVar5 = bVar10 ^ uVar8 ^ (uint)(byte)(&DAT_7100d168d0)[(int)(local_8 >> 0x18)] << 0x18;
  local_14 = ((uint)(byte)(&DAT_7100d168d0)[(int)(local_c >> 0x10 & 0xff)] << 0x10 |
             (uint)(byte)(&DAT_7100d168d0)[(int)(local_10 >> 8 & 0xff)] << 8) ^ uVar5;
  *param_3 = (char)((uint)(byte)(&DAT_7100d168d0)[(int)(local_10 & 0xff)] ^ puVar17[4]);
  param_3[1] = (char)(local_20 >> 8);
  param_3[2] = (char)(local_20 >> 0x10);
  param_3[3] = (char)(uVar2 >> 0x18);
  param_3[4] = (char)(bVar9 ^ uVar7);
  param_3[5] = (char)(local_1c >> 8);
  param_3[6] = (char)(local_1c >> 0x10);
  param_3[7] = (char)(uVar3 >> 0x18);
  param_3[8] = (char)(bVar11 ^ uVar6);
  param_3[9] = (char)(local_18 >> 8);
  param_3[10] = (char)(local_18 >> 0x10);
  param_3[0xb] = (char)(uVar4 >> 0x18);
  param_3[0xc] = (char)(bVar10 ^ uVar8);
  param_3[0xd] = (char)(local_14 >> 8);
  param_3[0xe] = (char)(local_14 >> 0x10);
  param_3[0xf] = (char)(uVar5 >> 0x18);
  FUN_710073b460(&local_20,0x20);
  return 0;
}



// ===== FUN_7100744270 @ 7100744270 (size=1308) =====

undefined8 FUN_7100744270(int *param_1,uint *param_2,undefined1 *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  puVar16 = *(uint **)(param_1 + 2);
  puVar15 = puVar16 + 4;
  uVar12 = (ulong)(*param_2 ^ *puVar16);
  uVar11 = (ulong)(param_2[1] ^ puVar16[1]);
  uVar10 = (ulong)(param_2[2] ^ puVar16[2]);
  uVar13 = (ulong)(param_2[3] ^ puVar16[3]);
  if (3 < *param_1) {
    uVar14 = (ulong)((*param_1 >> 1) - 2);
    do {
      puVar1 = puVar15 + 8;
      uVar2 = *(uint *)((uVar12 & 0xff) * 4 + 0x7100d153d0) ^
              *(uint *)((uVar11 >> 0x18) * 4 + 0x7100d147d0) ^ *puVar15 ^
              *(uint *)((uVar13 >> 8 & 0xff) * 4 + 0x7100d14fd0) ^
              *(uint *)((uVar10 >> 0x10 & 0xff) * 4 + 0x7100d14bd0);
      uVar3 = *(uint *)((uVar11 & 0xff) * 4 + 0x7100d153d0) ^
              *(uint *)((uVar10 >> 0x18) * 4 + 0x7100d147d0) ^ puVar15[1] ^
              *(uint *)((uVar12 >> 8 & 0xff) * 4 + 0x7100d14fd0) ^
              *(uint *)((uVar13 >> 0x10 & 0xff) * 4 + 0x7100d14bd0);
      uVar4 = *(uint *)((uVar10 & 0xff) * 4 + 0x7100d153d0) ^
              *(uint *)((uVar13 >> 0x18) * 4 + 0x7100d147d0) ^ puVar15[2] ^
              *(uint *)((uVar11 >> 8 & 0xff) * 4 + 0x7100d14fd0) ^
              *(uint *)((uVar12 >> 0x10 & 0xff) * 4 + 0x7100d14bd0);
      uVar5 = *(uint *)((uVar13 & 0xff) * 4 + 0x7100d153d0) ^
              *(uint *)((uVar12 >> 0x18) * 4 + 0x7100d147d0) ^ puVar15[3] ^
              *(uint *)((uVar10 >> 8 & 0xff) * 4 + 0x7100d14fd0) ^
              *(uint *)((uVar11 >> 0x10 & 0xff) * 4 + 0x7100d14bd0);
      uVar12 = (ulong)(*(uint *)(((ulong)uVar2 & 0xff) * 4 + 0x7100d153d0) ^
                       *(uint *)((ulong)(uVar3 >> 0x18) * 4 + 0x7100d147d0) ^ puVar15[4] ^
                      *(uint *)(((ulong)(uVar5 >> 8) & 0xff) * 4 + 0x7100d14fd0) ^
                      *(uint *)(((ulong)(uVar4 >> 0x10) & 0xff) * 4 + 0x7100d14bd0));
      uVar11 = (ulong)(*(uint *)(((ulong)uVar3 & 0xff) * 4 + 0x7100d153d0) ^
                       *(uint *)((ulong)(uVar4 >> 0x18) * 4 + 0x7100d147d0) ^ puVar15[5] ^
                      *(uint *)(((ulong)(uVar2 >> 8) & 0xff) * 4 + 0x7100d14fd0) ^
                      *(uint *)(((ulong)(uVar5 >> 0x10) & 0xff) * 4 + 0x7100d14bd0));
      uVar10 = (ulong)(*(uint *)(((ulong)uVar4 & 0xff) * 4 + 0x7100d153d0) ^
                       *(uint *)((ulong)(uVar5 >> 0x18) * 4 + 0x7100d147d0) ^ puVar15[6] ^
                      *(uint *)(((ulong)(uVar3 >> 8) & 0xff) * 4 + 0x7100d14fd0) ^
                      *(uint *)(((ulong)(uVar2 >> 0x10) & 0xff) * 4 + 0x7100d14bd0));
      uVar13 = (ulong)(*(uint *)(((ulong)uVar5 & 0xff) * 4 + 0x7100d153d0) ^
                       *(uint *)((ulong)(uVar2 >> 0x18) * 4 + 0x7100d147d0) ^ puVar15[7] ^
                      *(uint *)(((ulong)(uVar4 >> 8) & 0xff) * 4 + 0x7100d14fd0) ^
                      *(uint *)(((ulong)(uVar3 >> 0x10) & 0xff) * 4 + 0x7100d14bd0));
      puVar15 = puVar1;
    } while (puVar16 + uVar14 * 8 + 0xc != puVar1);
    puVar15 = puVar16 + uVar14 * 8 + 0xc;
  }
  local_10 = *(uint *)((uVar12 & 0xff) * 4 + 0x7100d153d0) ^
             *(uint *)((uVar11 >> 0x18) * 4 + 0x7100d147d0) ^ *puVar15 ^
             *(uint *)((uVar13 >> 8 & 0xff) * 4 + 0x7100d14fd0) ^
             *(uint *)((uVar10 >> 0x10 & 0xff) * 4 + 0x7100d14bd0);
  local_c = *(uint *)((uVar11 & 0xff) * 4 + 0x7100d153d0) ^
            *(uint *)((uVar10 >> 0x18) * 4 + 0x7100d147d0) ^ puVar15[1] ^
            *(uint *)((uVar12 >> 8 & 0xff) * 4 + 0x7100d14fd0) ^
            *(uint *)((uVar13 >> 0x10 & 0xff) * 4 + 0x7100d14bd0);
  local_8 = *(uint *)((uVar10 & 0xff) * 4 + 0x7100d153d0) ^
            *(uint *)((uVar13 >> 0x18) * 4 + 0x7100d147d0) ^ puVar15[2] ^
            *(uint *)((uVar11 >> 8 & 0xff) * 4 + 0x7100d14fd0) ^
            *(uint *)((uVar12 >> 0x10 & 0xff) * 4 + 0x7100d14bd0);
  local_4 = *(uint *)((uVar13 & 0xff) * 4 + 0x7100d153d0) ^
            *(uint *)((uVar12 >> 0x18) * 4 + 0x7100d147d0) ^ puVar15[3] ^
            *(uint *)((uVar10 >> 8 & 0xff) * 4 + 0x7100d14fd0) ^
            *(uint *)((uVar11 >> 0x10 & 0xff) * 4 + 0x7100d14bd0);
  uVar2 = (uint)*(byte *)((long)(int)(local_10 & 0xff) + 0x7100d157d0) ^ puVar15[4];
  uVar3 = uVar2 ^ (uint)*(byte *)((long)(int)(local_c >> 0x18) + 0x7100d157d0) << 0x18;
  local_20 = ((uint)*(byte *)((long)(int)(local_8 >> 0x10 & 0xff) + 0x7100d157d0) << 0x10 |
             (uint)*(byte *)((long)(int)(local_4 >> 8 & 0xff) + 0x7100d157d0) << 8) ^ uVar3;
  uVar4 = (uint)*(byte *)((long)(int)(local_c & 0xff) + 0x7100d157d0) ^ puVar15[5];
  uVar5 = uVar4 ^ (uint)*(byte *)((long)(int)(local_8 >> 0x18) + 0x7100d157d0) << 0x18;
  local_1c = ((uint)*(byte *)((long)(int)(local_4 >> 0x10 & 0xff) + 0x7100d157d0) << 0x10 |
             (uint)*(byte *)((long)(int)(local_10 >> 8 & 0xff) + 0x7100d157d0) << 8) ^ uVar5;
  uVar6 = (uint)*(byte *)((long)(int)(local_8 & 0xff) + 0x7100d157d0) ^ puVar15[6];
  uVar7 = uVar6 ^ (uint)*(byte *)((long)(int)(local_4 >> 0x18) + 0x7100d157d0) << 0x18;
  local_18 = ((uint)*(byte *)((long)(int)(local_10 >> 0x10 & 0xff) + 0x7100d157d0) << 0x10 |
             (uint)*(byte *)((long)(int)(local_c >> 8 & 0xff) + 0x7100d157d0) << 8) ^ uVar7;
  uVar8 = (uint)*(byte *)((long)(int)(local_4 & 0xff) + 0x7100d157d0) ^ puVar15[7];
  uVar9 = uVar8 ^ (uint)*(byte *)((long)(int)(local_10 >> 0x18) + 0x7100d157d0) << 0x18;
  local_14 = ((uint)*(byte *)((long)(int)(local_c >> 0x10 & 0xff) + 0x7100d157d0) << 0x10 |
             (uint)*(byte *)((long)(int)(local_8 >> 8 & 0xff) + 0x7100d157d0) << 8) ^ uVar9;
  *param_3 = (char)uVar2;
  param_3[1] = (char)(local_20 >> 8);
  param_3[2] = (char)(local_20 >> 0x10);
  param_3[3] = (char)(uVar3 >> 0x18);
  param_3[4] = (char)uVar4;
  param_3[5] = (char)(local_1c >> 8);
  param_3[6] = (char)(local_1c >> 0x10);
  param_3[7] = (char)(uVar5 >> 0x18);
  param_3[8] = (char)uVar6;
  param_3[9] = (char)(local_18 >> 8);
  param_3[10] = (char)(local_18 >> 0x10);
  param_3[0xb] = (char)(uVar7 >> 0x18);
  param_3[0xc] = (char)uVar8;
  param_3[0xd] = (char)(local_14 >> 8);
  param_3[0xe] = (char)(local_14 >> 0x10);
  param_3[0xf] = (char)(uVar9 >> 0x18);
  FUN_710073b460(&local_20,0x20);
  return 0;
}



// ===== FUN_7100744790 @ 7100744790 (size=24) =====

void FUN_7100744790(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != 1) {
    FUN_7100744270();
    return;
  }
  FUN_7100743d50(param_1,param_3,param_4);
  return;
}



// ===== FUN_71007447b0 @ 71007447b0 (size=312) =====

undefined8
FUN_71007447b0(undefined8 param_1,int param_2,ulong param_3,undefined8 *param_4,undefined8 *param_5,
              undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if ((param_3 & 0xf) != 0) {
    return 0xffffffde;
  }
  if (param_2 == 0) {
    if (param_3 != 0) {
      puVar5 = (undefined8 *)((long)param_5 + param_3);
      do {
        uVar3 = *param_5;
        uVar1 = param_5[1];
        uVar2 = FUN_7100744790(param_1,0,param_5,param_6);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        lVar4 = 0;
        do {
          *(byte *)((long)param_6 + lVar4) =
               *(byte *)((long)param_6 + lVar4) ^ *(byte *)((long)param_4 + lVar4);
          lVar4 = lVar4 + 1;
        } while (lVar4 != 0x10);
        param_5 = param_5 + 2;
        *param_4 = uVar3;
        param_4[1] = uVar1;
        param_6 = param_6 + 2;
      } while (param_5 != puVar5);
    }
  }
  else {
    puVar5 = param_6;
    if (param_3 != 0) {
      do {
        lVar4 = 0;
        do {
          *(byte *)((long)puVar5 + lVar4) =
               *(byte *)((long)param_5 + lVar4) ^ *(byte *)((long)param_4 + lVar4);
          lVar4 = lVar4 + 1;
        } while (lVar4 != 0x10);
        uVar3 = FUN_7100744790(param_1,param_2,puVar5,puVar5);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        puVar6 = puVar5 + 2;
        uVar3 = puVar5[1];
        param_5 = param_5 + 2;
        *param_4 = *puVar5;
        param_4[1] = uVar3;
        puVar5 = puVar6;
      } while (puVar6 != (undefined8 *)((long)param_6 + param_3));
    }
  }
  return 0;
}



// ===== FUN_7100744b00 @ 7100744b00 (size=300) =====

undefined8
FUN_7100744b00(undefined8 param_1,int param_2,long param_3,ulong *param_4,long param_5,byte *param_6
              ,byte *param_7)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  uVar3 = *param_4;
  if (uVar3 < 0x10) {
    if (param_2 == 0) {
      if (param_3 != 0) {
        pbVar4 = param_6;
        do {
          if ((uVar3 == 0) && (uVar2 = FUN_7100744790(param_1,1,param_5,param_5), (int)uVar2 != 0))
          {
            return uVar2;
          }
          pbVar5 = pbVar4 + 1;
          bVar1 = *pbVar4;
          *param_7 = bVar1 ^ *(byte *)(param_5 + uVar3);
          *(byte *)(param_5 + uVar3) = bVar1;
          uVar3 = uVar3 + 1 & 0xf;
          pbVar4 = pbVar5;
          param_7 = param_7 + 1;
        } while (param_6 + param_3 != pbVar5);
      }
    }
    else {
      pbVar4 = param_6;
      if (param_3 != 0) {
        do {
          if ((uVar3 == 0) && (uVar2 = FUN_7100744790(param_1,1,param_5,param_5), (int)uVar2 != 0))
          {
            return uVar2;
          }
          pbVar5 = pbVar4 + 1;
          bVar1 = *(byte *)(param_5 + uVar3) ^ *pbVar4;
          *param_7 = bVar1;
          *(byte *)(param_5 + uVar3) = bVar1;
          uVar3 = uVar3 + 1 & 0xf;
          param_7 = param_7 + 1;
          pbVar4 = pbVar5;
        } while (pbVar5 != param_6 + param_3);
      }
    }
    *param_4 = uVar3;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffdf;
  }
  return uVar2;
}



// ===== FUN_7100744c30 @ 7100744c30 (size=188) =====

undefined8
FUN_7100744c30(undefined8 param_1,long param_2,ulong *param_3,long param_4,byte *param_5,
              byte *param_6)

{
  byte *pbVar1;
  undefined8 uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  uVar3 = *param_3;
  if (uVar3 < 0x10) {
    if (param_2 != 0) {
      pbVar4 = param_5;
      do {
        if ((uVar3 == 0) && (uVar2 = FUN_7100744790(param_1,1,param_4,param_4), (int)uVar2 != 0)) {
          return uVar2;
        }
        pbVar1 = (byte *)(param_4 + uVar3);
        uVar3 = uVar3 + 1 & 0xf;
        pbVar5 = pbVar4 + 1;
        *param_6 = *pbVar1 ^ *pbVar4;
        pbVar4 = pbVar5;
        param_6 = param_6 + 1;
      } while (param_5 + param_2 != pbVar5);
    }
    uVar2 = 0;
    *param_3 = uVar3;
  }
  else {
    uVar2 = 0xffffffdf;
  }
  return uVar2;
}



// ===== FUN_7100744cf0 @ 7100744cf0 (size=260) =====

undefined8
FUN_7100744cf0(undefined8 param_1,long param_2,ulong *param_3,char *param_4,long param_5,
              byte *param_6,byte *param_7)

{
  byte *pbVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  char *pcVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  uVar6 = *param_3;
  if (uVar6 < 0x10) {
    if (param_2 != 0) {
      pbVar7 = param_6;
      do {
        if (uVar6 == 0) {
          uVar4 = FUN_7100744790(param_1,1,param_4,param_5);
          pcVar5 = param_4 + 0xf;
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          do {
            cVar2 = *pcVar5;
            bVar3 = param_4 != pcVar5;
            *pcVar5 = cVar2 + '\x01';
            if ((char)(cVar2 + '\x01') != '\0') break;
            pcVar5 = pcVar5 + -1;
          } while (bVar3);
        }
        pbVar1 = (byte *)(param_5 + uVar6);
        uVar6 = uVar6 + 1 & 0xf;
        pbVar8 = pbVar7 + 1;
        *param_7 = *pbVar1 ^ *pbVar7;
        pbVar7 = pbVar8;
        param_7 = param_7 + 1;
      } while (param_6 + param_2 != pbVar8);
    }
    uVar4 = 0;
    *param_3 = uVar6;
  }
  else {
    uVar4 = 0xffffffdf;
  }
  return uVar4;
}



// ===== FUN_7100744e00 @ 7100744e00 (size=12) =====

void FUN_7100744e00(undefined8 param_1)

{
  FUN_7100808340(param_1,0,0x108);
  return;
}



// ===== FUN_7100744e10 @ 7100744e10 (size=16) =====

void FUN_7100744e10(long param_1)

{
  if (param_1 != 0) {
    FUN_710073b460(param_1,0x108);
    return;
  }
  return;
}



// ===== FUN_7100744e20 @ 7100744e20 (size=176) =====

void FUN_7100744e20(undefined8 *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulong uVar4;
  byte *pbVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  
  pbVar5 = (byte *)(param_1 + 1);
  *param_1 = 0;
  pbVar2 = pbVar5;
  bVar9 = 3;
  bVar8 = 2;
  bVar6 = 0;
  bVar7 = 1;
  do {
    pbVar3 = pbVar2 + 0x10;
    pbVar2[0x10] = bVar6 + 8;
    pbVar2[0x11] = bVar7 + 8;
    pbVar2[0x12] = bVar8 + 8;
    pbVar2[0x13] = bVar9 + 8;
    pbVar2[0x14] = bVar6 + 0xc;
    pbVar2[0x15] = bVar7 + 0xc;
    pbVar2[0x16] = bVar8 + 0xc;
    pbVar2[0x17] = bVar9 + 0xc;
    *pbVar2 = bVar6;
    pbVar2[1] = bVar7;
    pbVar2[2] = bVar8;
    pbVar2[3] = bVar9;
    pbVar2[4] = bVar6 + 4;
    pbVar2[5] = bVar7 + 4;
    pbVar2[6] = bVar8 + 4;
    pbVar2[7] = bVar9 + 4;
    pbVar2 = pbVar3;
    bVar9 = bVar9 + 0x10;
    bVar8 = bVar8 + 0x10;
    bVar6 = bVar6 + 0x10;
    bVar7 = bVar7 + 0x10;
  } while ((byte *)(param_1 + 0x21) != pbVar3);
  uVar4 = 0;
  uVar1 = 0;
  pbVar2 = pbVar5;
  do {
    if ((uint)uVar4 < param_3) {
      pbVar3 = param_2 + uVar4;
      uVar4 = (ulong)((uint)uVar4 + 1);
    }
    else {
      uVar4 = 1;
      pbVar3 = param_2;
    }
    bVar9 = *pbVar2;
    uVar1 = bVar9 + uVar1 + (uint)*pbVar3 & 0xff;
    pbVar3 = pbVar2 + 1;
    *pbVar2 = pbVar5[(int)uVar1];
    pbVar5[(int)uVar1] = bVar9;
    pbVar2 = pbVar3;
  } while (pbVar3 != (byte *)(param_1 + 0x21));
  return;
}



// ===== FUN_7100744ed0 @ 7100744ed0 (size=104) =====

undefined8 FUN_7100744ed0(uint *param_1,long param_2,long param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  if (param_2 != 0) {
    lVar5 = 0;
    do {
      uVar3 = uVar3 + 1 & 0xff;
      bVar1 = *(byte *)((long)param_1 + (long)(int)uVar3 + 8);
      uVar4 = bVar1 + uVar4 & 0xff;
      bVar2 = *(byte *)((long)param_1 + (long)(int)uVar4 + 8);
      *(byte *)((long)param_1 + (long)(int)uVar3 + 8) = bVar2;
      *(byte *)((long)param_1 + (long)(int)uVar4 + 8) = bVar1;
      *(byte *)(param_4 + lVar5) =
           *(byte *)((long)param_1 + ((ulong)((uint)bVar1 + (uint)bVar2) & 0xff) + 8) ^
           *(byte *)(param_3 + lVar5);
      lVar5 = lVar5 + 1;
    } while (param_2 != lVar5);
  }
  *param_1 = uVar3;
  param_1[1] = uVar4;
  return 0;
}



// ===== FUN_7100744f40 @ 7100744f40 (size=264) =====

undefined8 FUN_7100744f40(long *param_1,long param_2,ulong *param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  
  pbVar4 = (byte *)*param_1;
  lVar6 = param_2 - (long)pbVar4;
  if (0 < lVar6) {
    bVar2 = *pbVar4;
    if ((char)bVar2 < '\0') {
      bVar1 = bVar2 & 0x7f;
      if (bVar1 == 3) {
        if (lVar6 < 4) {
          return 0xffffffa0;
        }
        pbVar7 = pbVar4 + 4;
        uVar5 = (ulong)pbVar4[2] << 8 | (ulong)pbVar4[1] << 0x10 | (ulong)pbVar4[3];
        *param_3 = uVar5;
        *param_1 = (long)pbVar7;
      }
      else if ((bVar2 & 0x7c) == 0) {
        if (bVar1 == 1) {
          if (lVar6 == 1) {
            return 0xffffffa0;
          }
          uVar5 = (ulong)pbVar4[1];
          pbVar7 = pbVar4 + 2;
          *param_3 = uVar5;
          *param_1 = (long)pbVar7;
        }
        else {
          if (bVar1 != 2) {
            return 0xffffff9c;
          }
          if (lVar6 < 3) {
            return 0xffffffa0;
          }
          pbVar7 = pbVar4 + 3;
          uVar5 = (ulong)((uint)(*(ushort *)(pbVar4 + 1) >> 8) |
                         (*(ushort *)(pbVar4 + 1) & 0xff00ff) << 8);
          *param_3 = uVar5;
          *param_1 = (long)pbVar7;
        }
      }
      else {
        if (bVar1 != 4) {
          return 0xffffff9c;
        }
        if (lVar6 < 5) {
          return 0xffffffa0;
        }
        pbVar7 = pbVar4 + 5;
        uVar3 = (*(uint *)(pbVar4 + 1) & 0xff00ff00) >> 8 | (*(uint *)(pbVar4 + 1) & 0xff00ff) << 8;
        uVar5 = (ulong)(uVar3 >> 0x10 | uVar3 << 0x10);
        *param_3 = uVar5;
        *param_1 = (long)pbVar7;
      }
    }
    else {
      pbVar7 = pbVar4 + 1;
      *param_1 = (long)pbVar7;
      uVar5 = (ulong)*pbVar4;
      *param_3 = uVar5;
    }
    if (uVar5 <= (ulong)(param_2 - (long)pbVar7)) {
      return 0;
    }
  }
  return 0xffffffa0;
}



// ===== FUN_7100745050 @ 7100745050 (size=56) =====

undefined8 FUN_7100745050(long *param_1,long param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)*param_1;
  if (param_2 - (long)pbVar2 < 1) {
    return 0xffffffa0;
  }
  if (*pbVar2 == param_4) {
    *param_1 = (long)(pbVar2 + 1);
    uVar1 = FUN_7100744f40();
    return uVar1;
  }
  return 0xffffff9e;
}



// ===== FUN_7100745090 @ 7100745090 (size=208) =====

undefined8 FUN_7100745090(long *param_1,undefined8 param_2,undefined4 param_3,uint *param_4)

{
  char cVar1;
  undefined8 uVar2;
  byte *pbVar3;
  char *pcVar5;
  uint uVar6;
  byte *pbVar7;
  ulong local_8;
  byte *pbVar4;
  
  uVar2 = FUN_7100745050(param_1,param_2,&local_8,param_3);
  if ((int)uVar2 == 0) {
    if (local_8 != 0) {
      pcVar5 = (char *)*param_1;
      cVar1 = *pcVar5;
      if (-1 < cVar1) {
        while (pcVar5 = pcVar5 + 1, cVar1 == '\0') {
          local_8 = local_8 - 1;
          *param_1 = (long)pcVar5;
          if (local_8 == 0) goto LAB_7100745100;
          cVar1 = *pcVar5;
        }
        if ((local_8 < 5) && ((local_8 != 4 || (-1 < *(char *)*param_1)))) {
LAB_7100745100:
          *param_4 = 0;
          if (local_8 == 0) {
            return uVar2;
          }
          pbVar7 = (byte *)*param_1;
          uVar6 = 0;
          pbVar4 = pbVar7;
          do {
            pbVar3 = pbVar4 + 1;
            uVar6 = (uint)*pbVar4 | uVar6 << 8;
            *param_4 = uVar6;
            *param_1 = (long)pbVar3;
            pbVar4 = pbVar3;
          } while (pbVar7 + local_8 != pbVar3);
          return uVar2;
        }
      }
    }
    uVar2 = 0xffffff9c;
  }
  return uVar2;
}



// ===== FUN_7100745160 @ 7100745160 (size=12) =====

void FUN_7100745160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_7100745090(param_1,param_2,2,param_3);
  return;
}



// ===== FUN_7100745170 @ 7100745170 (size=80) =====

void FUN_7100745170(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long local_8;
  
  iVar1 = FUN_7100745050(param_1,param_2,&local_8,2);
  if (iVar1 == 0) {
    FUN_7100729cb0(param_3,*param_1,local_8);
    *param_1 = *param_1 + local_8;
  }
  return;
}



// ===== FUN_71007451c0 @ 71007451c0 (size=88) =====

undefined8 FUN_71007451c0(long *param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  
  uVar1 = FUN_7100745050();
  if ((int)uVar1 == 0) {
    if (*param_3 != 0) {
      pcVar2 = (char *)*param_1;
      *param_3 = *param_3 + -1;
      if (*pcVar2 == '\0') {
        *param_1 = (long)(pcVar2 + 1);
        return uVar1;
      }
    }
    uVar1 = 0xffffff98;
  }
  return uVar1;
}



// ===== FUN_7100745220 @ 7100745220 (size=264) =====

int FUN_7100745220(long *param_1,long param_2,uint *param_3,uint *param_4)

{
  byte *pbVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  long local_8;
  
  iVar2 = FUN_7100745050(param_1,param_2,&local_8,0x30);
  if (iVar2 == 0) {
    pbVar5 = (byte *)*param_1;
    if (param_2 - (long)pbVar5 < 1) {
      iVar2 = -0x60;
    }
    else {
      pbVar1 = pbVar5 + local_8;
      *param_3 = (uint)*pbVar5;
      iVar2 = FUN_7100745050(param_1,pbVar1,param_3 + 2,6);
      if (iVar2 == 0) {
        lVar3 = *param_1;
        lVar4 = *(long *)(param_3 + 2);
        *(long *)(param_3 + 4) = lVar3;
        pbVar5 = (byte *)(lVar3 + lVar4);
        *param_1 = (long)pbVar5;
        if (pbVar5 == pbVar1) {
          FUN_710073b460(param_4,0x18);
        }
        else {
          *param_4 = (uint)*(byte *)(lVar3 + lVar4);
          *param_1 = (long)(pbVar5 + 1);
          iVar2 = FUN_7100744f40(param_1,pbVar1,param_4 + 2);
          if (iVar2 == 0) {
            lVar3 = *param_1;
            *(long *)(param_4 + 4) = lVar3;
            pbVar5 = (byte *)(lVar3 + *(long *)(param_4 + 2));
            iVar2 = 0;
            if (pbVar5 != pbVar1) {
              iVar2 = -0x66;
            }
            *param_1 = (long)pbVar5;
          }
        }
      }
    }
  }
  return iVar2;
}



// ===== FUN_7100745330 @ 7100745330 (size=76) =====

/* WARNING: Removing unreachable block (ram,0x007100745368) */
/* WARNING: Removing unreachable block (ram,0x007100745354) */
/* WARNING: Removing unreachable block (ram,0x007100745374) */

undefined8 FUN_7100745330(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_7100745220();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



// ===== FUN_7100745380 @ 7100745380 (size=372) =====

undefined8 FUN_7100745380(long *param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar6 = (undefined1)param_3;
  if (param_3 < 0x80) {
    lVar2 = *param_1;
    if (0 < lVar2 - param_2) {
      *param_1 = lVar2 + -1;
      *(undefined1 *)(lVar2 + -1) = uVar6;
      return 1;
    }
  }
  else {
    if (0xff < param_3) {
      uVar4 = (undefined1)(param_3 >> 8);
      if (param_3 < 0x10000) {
        lVar2 = *param_1;
        if (lVar2 - param_2 < 3) {
          return 0xffffff94;
        }
        uVar3 = 0x82;
        uVar1 = 3;
        *param_1 = lVar2 + -1;
        *(undefined1 *)(lVar2 + -1) = uVar6;
      }
      else {
        uVar5 = (undefined1)(param_3 >> 0x10);
        if (param_3 < 0x1000000) {
          lVar2 = *param_1;
          if (lVar2 - param_2 < 4) {
            return 0xffffff94;
          }
          uVar3 = 0x83;
          *param_1 = lVar2 + -1;
          uVar1 = 4;
          *(undefined1 *)(lVar2 + -1) = uVar6;
          uVar6 = uVar4;
          uVar4 = uVar5;
        }
        else {
          if (0xffffffff < param_3) {
            return 0xffffff9c;
          }
          lVar2 = *param_1;
          if (lVar2 - param_2 < 5) {
            return 0xffffff94;
          }
          *param_1 = lVar2 + -1;
          uVar3 = 0x84;
          uVar1 = 5;
          *(undefined1 *)(lVar2 + -1) = uVar6;
          lVar2 = *param_1;
          *param_1 = lVar2 + -1;
          *(undefined1 *)(lVar2 + -1) = uVar4;
          uVar6 = uVar5;
          uVar4 = (char)(param_3 >> 0x18);
        }
        lVar2 = *param_1;
        *param_1 = lVar2 + -1;
        *(undefined1 *)(lVar2 + -1) = uVar6;
      }
      lVar2 = *param_1;
      *param_1 = lVar2 + -1;
      *(undefined1 *)(lVar2 + -1) = uVar4;
      lVar2 = *param_1;
      *param_1 = lVar2 + -1;
      *(undefined1 *)(lVar2 + -1) = uVar3;
      return uVar1;
    }
    lVar2 = *param_1;
    if (1 < lVar2 - param_2) {
      *param_1 = lVar2 + -1;
      *(undefined1 *)(lVar2 + -1) = uVar6;
      lVar2 = *param_1;
      *param_1 = lVar2 + -1;
      *(undefined1 *)(lVar2 + -1) = 0x81;
      return 2;
    }
  }
  return 0xffffff94;
}



// ===== FUN_7100745500 @ 7100745500 (size=52) =====

undefined8 FUN_7100745500(long *param_1,long param_2,undefined1 param_3)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (0 < lVar1 - param_2) {
    *param_1 = lVar1 + -1;
    *(undefined1 *)(lVar1 + -1) = param_3;
    return 1;
  }
  return 0xffffff94;
}



// ===== FUN_7100745540 @ 7100745540 (size=268) =====

int FUN_7100745540(ulong *param_1,ulong param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  ulong uVar5;
  
  uVar3 = FUN_7100729c10(param_3);
  uVar5 = *param_1;
  if (uVar3 == 0) {
    uVar3 = 1;
  }
  if ((uVar5 < param_2) || (uVar5 - param_2 < uVar3)) {
LAB_7100745644:
    iVar2 = -0x6c;
  }
  else {
    *param_1 = uVar5 - uVar3;
    iVar1 = FUN_7100729e40(param_3,uVar5 - uVar3,uVar3);
    if (iVar1 != 0) {
      return iVar1;
    }
    if ((*param_3 == 1) && (pcVar4 = (char *)*param_1, *pcVar4 < '\0')) {
      if ((long)((long)pcVar4 - param_2) < 1) goto LAB_7100745644;
      uVar3 = uVar3 + 1;
      *param_1 = (ulong)(pcVar4 + -1);
      pcVar4[-1] = '\0';
      iVar1 = FUN_7100745380(param_1,param_2,uVar3);
    }
    else {
      iVar1 = FUN_7100745380(param_1,param_2,uVar3);
    }
    iVar2 = iVar1;
    if (-1 < iVar1) {
      iVar2 = FUN_7100745500(param_1,param_2,2);
      if (-1 < iVar2) {
        iVar2 = (int)uVar3 + iVar1 + iVar2;
      }
    }
  }
  return iVar2;
}



// ===== FUN_7100745650 @ 7100745650 (size=120) =====

void FUN_7100745650(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  
  uVar2 = *param_2;
  puVar4 = param_1;
  uVar3 = *param_3;
  do {
    puVar5 = puVar4 + 1;
    uVar1 = uVar2 ^ *puVar4;
    uVar2 = (param_1[((ulong)(uVar1 >> 0x10) & 0xff) + 0x112] +
             param_1[(ulong)(uVar1 >> 0x18) + 0x12] ^ param_1[((ulong)(uVar1 >> 8) & 0xff) + 0x212])
            + param_1[(ulong)(byte)uVar1 + 0x312] ^ uVar3;
    puVar4 = puVar5;
    uVar3 = uVar1;
  } while (param_1 + 0x10 != puVar5);
  uVar3 = param_1[0x10];
  *param_2 = param_1[0x11] ^ uVar1;
  *param_3 = uVar2 ^ uVar3;
  return;
}



// ===== FUN_71007456d0 @ 71007456d0 (size=12) =====

void FUN_71007456d0(undefined8 param_1)

{
  FUN_7100808340(param_1,0,0x1048);
  return;
}



// ===== FUN_71007456e0 @ 71007456e0 (size=16) =====

void FUN_71007456e0(long param_1)

{
  if (param_1 != 0) {
    FUN_710073b460(param_1,0x1048);
    return;
  }
  return;
}



// ===== FUN_71007456f0 @ 71007456f0 (size=372) =====

undefined8 FUN_71007456f0(uint *param_1,long param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  uint *puVar8;
  uint *extraout_x1;
  uint uVar9;
  long lVar10;
  uint *puVar11;
  uint *puVar13;
  uint *extraout_x11;
  uint local_8;
  uint uStack_4;
  uint *puVar12;
  
  if ((param_3 - 0x20 < 0x1a1) && ((param_3 & 7) == 0)) {
    FUN_710080f900(param_1 + 0x12,&DAT_71009c40c0,0x1000);
    uVar5 = 0;
    lVar10 = 0;
    do {
      uVar9 = 0;
      iVar7 = 4;
      do {
        pbVar1 = (byte *)(param_2 + uVar5);
        uVar2 = (int)uVar5 + 1;
        if (param_3 >> 3 <= uVar2) {
          uVar2 = 0;
        }
        uVar5 = (ulong)uVar2;
        iVar7 = iVar7 + -1;
        uVar9 = (uint)*pbVar1 | uVar9 << 8;
      } while (iVar7 != 0);
      *(uint *)((long)param_1 + lVar10) = *(uint *)((long)&DAT_71009c50c0 + lVar10) ^ uVar9;
      lVar10 = lVar10 + 4;
    } while (lVar10 != 0x48);
    local_8 = 0;
    uStack_4 = 0;
    puVar8 = &local_8;
    do {
      FUN_7100745650(param_1,puVar8);
      *extraout_x11 = local_8;
      extraout_x11[1] = uStack_4;
      puVar8 = extraout_x1;
    } while (extraout_x11 + 2 != param_1 + 0x12);
    uVar9 = param_1[0x10];
    uVar2 = param_1[0x11];
    puVar8 = param_1 + 0x112;
    do {
      puVar11 = param_1;
      puVar4 = puVar8 + -0x100;
      do {
        do {
          puVar13 = puVar4;
          puVar12 = puVar11 + 1;
          uVar3 = local_8 ^ *puVar11;
          local_8 = (param_1[((ulong)(uVar3 >> 0x10) & 0xff) + 0x112] +
                     param_1[(ulong)(uVar3 >> 0x18) + 0x12] ^
                    param_1[((ulong)(uVar3 >> 8) & 0xff) + 0x212]) +
                    param_1[(ulong)(byte)uVar3 + 0x312] ^ uStack_4;
          puVar11 = puVar12;
          uStack_4 = uVar3;
          puVar4 = puVar13;
        } while (param_1 + 0x10 != puVar12);
        uStack_4 = local_8 ^ uVar9;
        local_8 = uVar3 ^ uVar2;
        *puVar13 = local_8;
        puVar13[1] = uStack_4;
        puVar11 = param_1;
        puVar4 = puVar13 + 2;
      } while (puVar13 + 2 != puVar8);
      puVar8 = puVar13 + 0x102;
    } while (param_1 + 0x512 != puVar8);
    param_1[0x410] = local_8;
    uVar6 = 0;
    param_1[0x411] = uStack_4;
  }
  else {
    uVar6 = 0xffffffea;
  }
  return uVar6;
}



// ===== FUN_7100745870 @ 7100745870 (size=236) =====

undefined8 FUN_7100745870(uint *param_1,int param_2,uint *param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 *extraout_x11;
  uint local_8;
  uint uStack_4;
  uint *puVar4;
  
  uVar2 = (*param_3 & 0xff00ff00) >> 8 | (*param_3 & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar1 = (param_3[1] & 0xff00ff00) >> 8 | (param_3[1] & 0xff00ff) << 8;
  uStack_4 = uVar1 >> 0x10 | uVar1 << 0x10;
  if (param_2 == 0) {
    puVar3 = param_1 + 0x11;
    do {
      puVar4 = puVar3 + -1;
      local_8 = uVar2 ^ *puVar3;
      uVar2 = (param_1[((ulong)(local_8 >> 0x10) & 0xff) + 0x112] +
               param_1[(ulong)(local_8 >> 0x18) + 0x12] ^
              param_1[((ulong)(local_8 >> 8) & 0xff) + 0x212]) +
              param_1[(ulong)(byte)local_8 + 0x312] ^ uStack_4;
      puVar3 = puVar4;
      uStack_4 = local_8;
    } while (param_1 + 1 != puVar4);
    local_8 = local_8 ^ *param_1;
    uStack_4 = uVar2 ^ param_1[1];
  }
  else {
    local_8 = uVar2;
    FUN_7100745650(param_1,&local_8,&uStack_4);
    param_4 = extraout_x11;
  }
  *param_4 = CONCAT17((char)uStack_4,
                      CONCAT16((char)(uStack_4 >> 8),
                               CONCAT15((char)(uStack_4 >> 0x10),
                                        CONCAT14((char)(uStack_4 >> 0x18),
                                                 CONCAT13((char)local_8,
                                                          CONCAT12((char)(local_8 >> 8),
                                                                   CONCAT11((char)(local_8 >> 0x10),
                                                                            (char)(local_8 >> 0x18))
                                                                  ))))));
  return 0;
}



// ===== FUN_7100745960 @ 7100745960 (size=284) =====

undefined8
FUN_7100745960(undefined8 param_1,int param_2,ulong param_3,undefined8 *param_4,undefined8 *param_5,
              undefined8 *param_6)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if ((param_3 & 7) != 0) {
    return 0xffffffe8;
  }
  if (param_2 == 0) {
    if (param_3 != 0) {
      puVar2 = (undefined8 *)((long)param_5 + param_3);
      do {
        uVar4 = *param_5;
        FUN_7100745870(param_1,0,param_5,param_6);
        lVar1 = 0;
        do {
          *(byte *)((long)param_6 + lVar1) =
               *(byte *)((long)param_6 + lVar1) ^ *(byte *)((long)param_4 + lVar1);
          lVar1 = lVar1 + 1;
        } while (lVar1 != 8);
        param_5 = param_5 + 1;
        *param_4 = uVar4;
        param_6 = param_6 + 1;
      } while (param_5 != puVar2);
    }
  }
  else {
    puVar2 = param_6;
    if (param_3 != 0) {
      do {
        lVar1 = 0;
        do {
          *(byte *)((long)puVar2 + lVar1) =
               *(byte *)((long)param_5 + lVar1) ^ *(byte *)((long)param_4 + lVar1);
          lVar1 = lVar1 + 1;
        } while (lVar1 != 8);
        FUN_7100745870(param_1,param_2,puVar2,puVar2);
        puVar3 = puVar2 + 1;
        param_5 = param_5 + 1;
        *param_4 = *puVar2;
        puVar2 = puVar3;
      } while (puVar3 != (undefined8 *)((long)param_6 + param_3));
      return 0;
    }
  }
  return 0;
}



// ===== FUN_7100745a80 @ 7100745a80 (size=260) =====

undefined8
FUN_7100745a80(undefined8 param_1,int param_2,long param_3,ulong *param_4,long param_5,byte *param_6
              ,byte *param_7)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  uVar3 = *param_4;
  if (uVar3 < 8) {
    if (param_2 == 0) {
      if (param_3 != 0) {
        pbVar4 = param_6;
        do {
          if (uVar3 == 0) {
            FUN_7100745870(param_1,1,param_5,param_5);
          }
          pbVar5 = pbVar4 + 1;
          bVar1 = *pbVar4;
          *param_7 = bVar1 ^ *(byte *)(param_5 + uVar3);
          *(byte *)(param_5 + uVar3) = bVar1;
          uVar3 = uVar3 + 1 & 7;
          pbVar4 = pbVar5;
          param_7 = param_7 + 1;
        } while (param_6 + param_3 != pbVar5);
      }
    }
    else {
      pbVar4 = param_6;
      if (param_3 != 0) {
        do {
          if (uVar3 == 0) {
            FUN_7100745870(param_1,1,param_5,param_5);
          }
          pbVar5 = pbVar4 + 1;
          bVar1 = *(byte *)(param_5 + uVar3) ^ *pbVar4;
          *param_7 = bVar1;
          *(byte *)(param_5 + uVar3) = bVar1;
          uVar3 = uVar3 + 1 & 7;
          param_7 = param_7 + 1;
          pbVar4 = pbVar5;
        } while (param_6 + param_3 != pbVar5);
      }
    }
    *param_4 = uVar3;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffea;
  }
  return uVar2;
}



// ===== FUN_7100745c70 @ 7100745c70 (size=180) =====

void FUN_7100745c70(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_1 ^ *param_2;
  uVar2 = param_1[1] ^ param_2[1];
  uVar3 = (uint)(byte)(&DAT_71009c5200)[(int)(uVar2 >> 8 & 0xff)] << 8 |
          (uint)(byte)(&DAT_71009c5300)[(int)(uVar2 >> 0x10 & 0xff)] << 0x10 |
          (uint)(byte)(&DAT_71009c5500)[(int)(uVar2 & 0xff)] |
          (uint)(byte)(&DAT_71009c5400)[(int)(uVar2 >> 0x18)] << 0x18;
  uVar1 = ((uint)(byte)(&DAT_71009c5300)[(int)(uVar1 >> 8 & 0xff)] << 8 |
           (uint)(byte)(&DAT_71009c5400)[(int)(uVar1 >> 0x10 & 0xff)] << 0x10 |
          (uint)(byte)(&DAT_71009c5200)[(int)(uVar1 & 0xff)] |
          (uint)(byte)(&DAT_71009c5500)[(int)(uVar1 >> 0x18)] << 0x18) ^
          ((uint)(byte)(&DAT_71009c5400)[(int)(uVar2 >> 0x18)] | uVar3 << 8);
  uVar3 = uVar3 ^ (uVar1 >> 0x10 | uVar1 << 0x10);
  uVar1 = uVar1 ^ (uVar3 >> 8 | uVar3 << 0x18);
  *param_3 = uVar3 ^ *param_3 ^ (uVar1 >> 8 | uVar1 << 0x18);
  param_3[1] = param_3[1] ^ uVar1;
  return;
}



// ===== FUN_7100745d30 @ 7100745d30 (size=12) =====

void FUN_7100745d30(undefined8 param_1)

{
  FUN_7100808340(param_1,0,0x114);
  return;
}



// ===== FUN_7100745d40 @ 7100745d40 (size=16) =====

void FUN_7100745d40(long param_1)

{
  if (param_1 != 0) {
    FUN_710073b460(param_1,0x114);
    return;
  }
  return;
}



// ===== FUN_7100745d50 @ 7100745d50 (size=1416) =====

undefined8 FUN_7100745d50(undefined4 *param_1,undefined8 *param_2,uint param_3)

{
  long lVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  byte *pbVar12;
  char *pcVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  uint *puVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  long extraout_x14;
  long extraout_x14_00;
  ulong extraout_x15;
  ulong extraout_x15_00;
  ulong uVar21;
  undefined8 extraout_x18;
  undefined8 extraout_x18_00;
  undefined8 extraout_x18_01;
  undefined8 extraout_x18_02;
  undefined8 extraout_d28;
  undefined8 uVar22;
  undefined8 extraout_d29;
  undefined8 extraout_d29_00;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 extraout_d30;
  undefined8 extraout_d30_00;
  undefined8 extraout_d30_01;
  undefined8 uVar25;
  undefined8 uVar26;
  uint auStack_100 [2];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 local_90 [16];
  undefined1 auStack_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40 [16];
  
  puVar2 = param_1 + 1;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  FUN_7100808340(puVar2,0,0x110);
  if ((param_3 - 0xc0 & 0xffffffbf) == 0) {
    *param_1 = 4;
    FUN_710080f900(&local_d0,param_2,param_3 >> 3);
    if (param_3 == 0xc0) {
      local_b8 = CONCAT17(~(byte)((ulong)local_c0 >> 0x38),
                          CONCAT16(~(byte)((ulong)local_c0 >> 0x30),
                                   CONCAT15(~(byte)((ulong)local_c0 >> 0x28),
                                            CONCAT14(~(byte)((ulong)local_c0 >> 0x20),
                                                     CONCAT13(~(byte)((ulong)local_c0 >> 0x18),
                                                              CONCAT12(~(byte)((ulong)local_c0 >>
                                                                              0x10),
                                                                       CONCAT11(~(byte)((ulong)
                                                  local_c0 >> 8),~(byte)local_c0)))))));
    }
  }
  else {
    if (param_3 != 0x80) {
      return 0xffffffdc;
    }
    *param_1 = 3;
    local_d0 = *param_2;
    uStack_c8 = param_2[1];
  }
  puVar17 = auStack_100;
  pbVar12 = &DAT_71009c5600;
  do {
    pbVar3 = pbVar12 + 8;
    bVar5 = pbVar12[5];
    bVar6 = pbVar12[6];
    bVar7 = pbVar12[4];
    bVar8 = pbVar12[7];
    *puVar17 = (uint)pbVar12[1] << 0x10 | (uint)*pbVar12 << 0x18 |
               (uint)CONCAT11(pbVar12[2],pbVar12[3]);
    puVar17[1] = (uint)bVar5 << 0x10 | (uint)bVar7 << 0x18 | (uint)CONCAT11(bVar6,bVar8);
    puVar17 = puVar17 + 2;
    pbVar12 = pbVar3;
  } while (pbVar3 != &DAT_71009c5630);
  local_90._0_12_ = ZEXT812(0);
  local_90._12_4_ = 0;
  lVar18 = 1;
  auStack_80 = local_90;
  local_70 = local_90;
  local_60 = local_90;
  pbVar12 = (byte *)&local_d0;
  do {
    lVar16 = lVar18 * 4;
    lVar18 = lVar18 + 1;
    *(uint *)(local_90 + lVar16 + -4) =
         (uint)pbVar12[1] << 0x10 | (uint)*pbVar12 << 0x18 | (uint)CONCAT11(pbVar12[2],pbVar12[3]);
    pbVar12 = pbVar12 + 4;
  } while (lVar18 != 9);
  local_70._8_8_ =
       CONCAT17(auStack_80[0xf] ^ local_90[0xf],
                CONCAT16(auStack_80[0xe] ^ local_90[0xe],
                         CONCAT15(auStack_80[0xd] ^ local_90[0xd],
                                  CONCAT14(auStack_80[0xc] ^ local_90[0xc],
                                           CONCAT13(auStack_80[0xb] ^ local_90[0xb],
                                                    CONCAT12(auStack_80[10] ^ local_90[10],
                                                             CONCAT11(auStack_80[9] ^ local_90[9],
                                                                      auStack_80[8] ^ local_90[8])))
                                          ))));
  local_70._0_8_ =
       CONCAT17(auStack_80[7] ^ local_90[7],
                CONCAT16(auStack_80[6] ^ local_90[6],
                         CONCAT15(auStack_80[5] ^ local_90[5],
                                  CONCAT14(auStack_80[4] ^ local_90[4],
                                           CONCAT13(auStack_80[3] ^ local_90[3],
                                                    CONCAT12(auStack_80[2] ^ local_90[2],
                                                             CONCAT11(auStack_80[1] ^ local_90[1],
                                                                      auStack_80[0] ^ local_90[0])))
                                          ))));
  uVar24 = auStack_80._8_8_;
  uVar26 = local_90._8_8_;
  FUN_7100745c70(local_70,auStack_100,local_70 + 8);
  FUN_7100745c70(extraout_x18,auStack_f8,local_70);
  local_70._0_8_ =
       CONCAT17(SUB81(local_70._0_8_,7) ^ (byte)((ulong)extraout_d30 >> 0x38),
                CONCAT16(SUB81(local_70._0_8_,6) ^ (byte)((ulong)extraout_d30 >> 0x30),
                         CONCAT15(SUB81(local_70._0_8_,5) ^ (byte)((ulong)extraout_d30 >> 0x28),
                                  CONCAT14(SUB81(local_70._0_8_,4) ^
                                           (byte)((ulong)extraout_d30 >> 0x20),
                                           CONCAT13(SUB81(local_70._0_8_,3) ^
                                                    (byte)((ulong)extraout_d30 >> 0x18),
                                                    CONCAT12(SUB81(local_70._0_8_,2) ^
                                                             (byte)((ulong)extraout_d30 >> 0x10),
                                                             CONCAT11(SUB81(local_70._0_8_,1) ^
                                                                      (byte)((ulong)extraout_d30 >>
                                                                            8),(byte)local_70._0_8_
                                                                               ^ (byte)extraout_d30)
                                                            ))))));
  local_70._8_8_ =
       CONCAT17(SUB81(local_70._8_8_,7) ^ (byte)((ulong)uVar26 >> 0x38),
                CONCAT16(SUB81(local_70._8_8_,6) ^ (byte)((ulong)uVar26 >> 0x30),
                         CONCAT15(SUB81(local_70._8_8_,5) ^ (byte)((ulong)uVar26 >> 0x28),
                                  CONCAT14(SUB81(local_70._8_8_,4) ^ (byte)((ulong)uVar26 >> 0x20),
                                           CONCAT13(SUB81(local_70._8_8_,3) ^
                                                    (byte)((ulong)uVar26 >> 0x18),
                                                    CONCAT12(SUB81(local_70._8_8_,2) ^
                                                             (byte)((ulong)uVar26 >> 0x10),
                                                             CONCAT11(SUB81(local_70._8_8_,1) ^
                                                                      (byte)((ulong)uVar26 >> 8),
                                                                      (byte)local_70._8_8_ ^
                                                                      (byte)uVar26)))))));
  FUN_7100745c70(local_70,auStack_f0,extraout_x18_00);
  FUN_7100745c70(extraout_x18_01,auStack_e8,local_70);
  lVar18 = extraout_x14;
  uVar21 = extraout_x15;
  uVar22 = local_70._8_8_;
  uVar23 = extraout_d29;
  uVar25 = extraout_d30_00;
  if (param_3 != 0x80) {
    local_60[9] = SUB81(local_70._8_8_,1) ^ (byte)((ulong)uVar24 >> 8);
    local_60[8] = (byte)local_70._8_8_ ^ (byte)uVar24;
    local_60[10] = SUB81(local_70._8_8_,2) ^ (byte)((ulong)uVar24 >> 0x10);
    local_60[0xb] = SUB81(local_70._8_8_,3) ^ (byte)((ulong)uVar24 >> 0x18);
    local_60[0xc] = SUB81(local_70._8_8_,4) ^ (byte)((ulong)uVar24 >> 0x20);
    local_60[0xd] = SUB81(local_70._8_8_,5) ^ (byte)((ulong)uVar24 >> 0x28);
    local_60[0xe] = SUB81(local_70._8_8_,6) ^ (byte)((ulong)uVar24 >> 0x30);
    local_60[0xf] = SUB81(local_70._8_8_,7) ^ (byte)((ulong)uVar24 >> 0x38);
    local_60[1] = SUB81(local_70._0_8_,1) ^ (byte)((ulong)extraout_d29 >> 8);
    local_60[0] = (byte)local_70._0_8_ ^ (byte)extraout_d29;
    local_60[2] = SUB81(local_70._0_8_,2) ^ (byte)((ulong)extraout_d29 >> 0x10);
    local_60[3] = SUB81(local_70._0_8_,3) ^ (byte)((ulong)extraout_d29 >> 0x18);
    local_60[4] = SUB81(local_70._0_8_,4) ^ (byte)((ulong)extraout_d29 >> 0x20);
    local_60[5] = SUB81(local_70._0_8_,5) ^ (byte)((ulong)extraout_d29 >> 0x28);
    local_60[6] = SUB81(local_70._0_8_,6) ^ (byte)((ulong)extraout_d29 >> 0x30);
    local_60[7] = SUB81(local_70._0_8_,7) ^ (byte)((ulong)extraout_d29 >> 0x38);
    FUN_7100745c70(local_60,auStack_e0,local_60 + 8);
    FUN_7100745c70(extraout_x18_02,auStack_d8,local_60);
    lVar18 = extraout_x14_00;
    uVar21 = extraout_x15_00;
    local_70._0_8_ = extraout_d28;
    uVar23 = extraout_d29_00;
    uVar25 = extraout_d30_01;
  }
  puVar20 = &local_50;
  lVar16 = (uVar21 & 1) * 0x10;
  uStack_48 = uVar26;
  local_50 = uVar25;
  pcVar13 = &DAT_71009c51e0 + lVar16;
  uVar11 = 0xf;
  puVar15 = puVar20;
  do {
    uVar4 = uVar11 & 0x1f;
    uVar11 = uVar11 + 0xf;
    uVar9 = 0x20 - uVar4;
    if (*pcVar13 != '\0') {
      local_50._0_4_ = (uint)uVar25;
      local_50._4_4_ = (uint)((ulong)uVar25 >> 0x20);
      *(uint *)(puVar15 + 2) =
           (uint)local_50 << (ulong)uVar4 ^ local_50._4_4_ >> (ulong)(uVar9 & 0x1f);
      uStack_48._0_4_ = (uint)uVar26;
      *(uint *)((long)puVar15 + 0x14) =
           local_50._4_4_ << (ulong)uVar4 ^ (uint)uStack_48 >> (ulong)(uVar9 & 0x1f);
      uStack_48._4_4_ = (uint)((ulong)uVar26 >> 0x20);
      *(uint *)(puVar15 + 3) =
           (uint)uStack_48 << (ulong)uVar4 ^ uStack_48._4_4_ >> (ulong)(uVar9 & 0x1f);
      *(uint *)((long)puVar15 + 0x1c) =
           uStack_48._4_4_ << (ulong)uVar4 ^ (uint)local_50 >> (ulong)(uVar9 & 0x1f);
    }
    pcVar13 = pcVar13 + 1;
    puVar15 = puVar15 + 2;
  } while (uVar11 != 0x4b);
  lVar14 = 1;
  lVar19 = (uVar21 & 0xffffffff) * 0x50;
  do {
    lVar10 = lVar14 + lVar19;
    lVar1 = lVar14 * 4;
    lVar14 = lVar14 + 1;
    if ((char)(&UNK_71009c513f)[lVar10] != -1) {
      puVar2[(int)(char)(&UNK_71009c513f)[lVar10]] = *(undefined4 *)(local_60 + lVar1 + 0xc);
    }
  } while (lVar14 != 0x15);
  if (param_3 != 0x80) {
    uStack_48 = uVar24;
    local_50 = uVar23;
    pcVar13 = &DAT_71009c51e4 + lVar16;
    uVar11 = 0xf;
    puVar15 = puVar20;
    do {
      uVar4 = uVar11 & 0x1f;
      uVar11 = uVar11 + 0xf;
      uVar9 = 0x20 - uVar4;
      if (*pcVar13 != '\0') {
        local_50._0_4_ = (uint)uVar23;
        local_50._4_4_ = (uint)((ulong)uVar23 >> 0x20);
        *(uint *)(puVar15 + 2) =
             (uint)local_50 << (ulong)uVar4 ^ local_50._4_4_ >> (ulong)(uVar9 & 0x1f);
        uStack_48._0_4_ = (uint)uVar24;
        *(uint *)((long)puVar15 + 0x14) =
             local_50._4_4_ << (ulong)uVar4 ^ (uint)uStack_48 >> (ulong)(uVar9 & 0x1f);
        uStack_48._4_4_ = (uint)((ulong)uVar24 >> 0x20);
        *(uint *)(puVar15 + 3) =
             (uint)uStack_48 << (ulong)uVar4 ^ uStack_48._4_4_ >> (ulong)(uVar9 & 0x1f);
        *(uint *)((long)puVar15 + 0x1c) =
             uStack_48._4_4_ << (ulong)uVar4 ^ (uint)local_50 >> (ulong)(uVar9 & 0x1f);
      }
      pcVar13 = pcVar13 + 1;
      puVar15 = puVar15 + 2;
    } while (uVar11 != 0x4b);
    lVar14 = 1;
    do {
      lVar10 = lVar14 + lVar19;
      lVar1 = lVar14 * 4;
      lVar14 = lVar14 + 1;
      if ((char)(&UNK_71009c5153)[lVar10] != -1) {
        puVar2[(int)(char)(&UNK_71009c5153)[lVar10]] = *(undefined4 *)(local_60 + lVar1 + 0xc);
      }
    } while (lVar14 != 0x15);
  }
  uStack_48 = uVar22;
  local_50 = local_70._0_8_;
  pcVar13 = &DAT_71009c51e8 + lVar16;
  uVar11 = 0xf;
  puVar15 = puVar20;
  do {
    uVar4 = uVar11 & 0x1f;
    uVar11 = uVar11 + 0xf;
    uVar9 = 0x20 - uVar4;
    if (*pcVar13 != '\0') {
      local_50._0_4_ = (uint)local_70._0_8_;
      local_50._4_4_ = (uint)((ulong)local_70._0_8_ >> 0x20);
      *(uint *)(puVar15 + 2) =
           (uint)local_50 << (ulong)uVar4 ^ local_50._4_4_ >> (ulong)(uVar9 & 0x1f);
      uStack_48._0_4_ = (uint)uVar22;
      *(uint *)((long)puVar15 + 0x14) =
           local_50._4_4_ << (ulong)uVar4 ^ (uint)uStack_48 >> (ulong)(uVar9 & 0x1f);
      uStack_48._4_4_ = (uint)((ulong)uVar22 >> 0x20);
      *(uint *)(puVar15 + 3) =
           (uint)uStack_48 << (ulong)uVar4 ^ uStack_48._4_4_ >> (ulong)(uVar9 & 0x1f);
      *(uint *)((long)puVar15 + 0x1c) =
           uStack_48._4_4_ << (ulong)uVar4 ^ (uint)local_50 >> (ulong)(uVar9 & 0x1f);
    }
    pcVar13 = pcVar13 + 1;
    puVar15 = puVar15 + 2;
  } while (uVar11 != 0x4b);
  lVar14 = 1;
  do {
    lVar10 = lVar14 + lVar19;
    lVar1 = lVar14 * 4;
    lVar14 = lVar14 + 1;
    if ((char)(&UNK_71009c5167)[lVar10] != -1) {
      puVar2[(int)(char)(&UNK_71009c5167)[lVar10]] = *(undefined4 *)(local_60 + lVar1 + 0xc);
    }
  } while (lVar14 != 0x15);
  if (param_3 != 0x80) {
    pcVar13 = &DAT_71009c51ec + lVar16;
    uVar11 = 0xf;
    local_50 = local_60._0_8_;
    uStack_48 = local_60._8_8_;
    do {
      uVar4 = uVar11 & 0x1f;
      uVar11 = uVar11 + 0xf;
      uVar9 = 0x20 - uVar4;
      if (*pcVar13 != '\0') {
        local_50._0_4_ = local_60._0_4_;
        local_50._4_4_ = local_60._4_4_;
        *(uint *)(puVar20 + 2) =
             (uint)local_50 << (ulong)uVar4 ^ local_50._4_4_ >> (ulong)(uVar9 & 0x1f);
        uStack_48._0_4_ = local_60._8_4_;
        *(uint *)((long)puVar20 + 0x14) =
             local_50._4_4_ << (ulong)uVar4 ^ (uint)uStack_48 >> (ulong)(uVar9 & 0x1f);
        uStack_48._4_4_ = local_60._12_4_;
        *(uint *)(puVar20 + 3) =
             (uint)uStack_48 << (ulong)uVar4 ^ uStack_48._4_4_ >> (ulong)(uVar9 & 0x1f);
        *(uint *)((long)puVar20 + 0x1c) =
             uStack_48._4_4_ << (ulong)uVar4 ^ (uint)local_50 >> (ulong)(uVar9 & 0x1f);
      }
      pcVar13 = pcVar13 + 1;
      puVar20 = puVar20 + 2;
    } while (uVar11 != 0x4b);
    lVar16 = 1;
    do {
      lVar1 = lVar16 + lVar19;
      lVar14 = lVar16 * 4;
      lVar16 = lVar16 + 1;
      if ((char)(&UNK_71009c517b)[lVar1] != -1) {
        puVar2[(int)(char)(&UNK_71009c517b)[lVar1]] = *(undefined4 *)(local_60 + lVar14 + 0xc);
      }
    } while (lVar16 != 0x15);
  }
  lVar16 = 0;
  do {
    if ((char)(&DAT_71009c5110)[lVar16 + (uVar21 & 0xffffffff) * 0x14] != -1) {
      param_1[lVar18 + 1 + lVar16] =
           puVar2[(int)(char)(&DAT_71009c5110)[lVar16 + (uVar21 & 0xffffffff) * 0x14]];
    }
    lVar16 = lVar16 + 1;
  } while (lVar16 != 0x14);
  return 0;
}



// ===== FUN_71007462e0 @ 71007462e0 (size=216) =====

int FUN_71007462e0(int *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_11c [8];
  undefined8 auStack_114 [24];
  undefined8 auStack_54 [10];
  
  puVar1 = auStack_11c + 4;
  FUN_7100745d30(puVar1);
  iVar3 = FUN_7100745d50(puVar1,param_2,param_3);
  if (iVar3 == 0) {
    uVar4 = 0;
    bVar2 = auStack_11c._4_4_ == 4;
    *param_1 = auStack_11c._4_4_;
    lVar7 = (ulong)((uint)bVar2 * 0x10 + 0x30) * 4;
    uVar8 = *(undefined8 *)((long)auStack_114 + lVar7 + 8);
    uVar6 = (ulong)(int)((uint)bVar2 * 8 + 0x16);
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)((long)auStack_114 + lVar7);
    *(undefined8 *)(param_1 + 3) = uVar8;
    puVar5 = (undefined8 *)(puVar1 + ((ulong)bVar2 * 0x10 + 0x2f) * 4);
    do {
      *(undefined8 *)(param_1 + uVar4 * 2 + 5) = *puVar5;
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + -1;
    } while (uVar4 < uVar6);
    lVar7 = uVar6 * -8 + lVar7 + -0x114;
    uVar8 = *(undefined8 *)(auStack_11c + lVar7 + 0x114);
    *(undefined8 *)(param_1 + (uVar6 - 1 & 0xffffffff) * 2 + 7) =
         *(undefined8 *)((long)auStack_114 + lVar7 + 0x104);
    *(undefined8 *)(param_1 + (uVar6 - 1 & 0xffffffff) * 2 + 7 + 2) = uVar8;
  }
  FUN_7100745d40(puVar1);
  return iVar3;
}



// ===== FUN_71007463c0 @ 71007463c0 (size=464) =====

undefined8 FUN_71007463c0(int *param_1,undefined8 param_2,uint *param_3,undefined8 *param_4)

{
  uint uVar1;
  uint *puVar2;
  long extraout_x14;
  long extraout_x14_00;
  long extraout_x14_01;
  long extraout_x14_02;
  long extraout_x14_03;
  int *extraout_x14_04;
  uint *puVar3;
  undefined8 extraout_x15;
  undefined8 extraout_x15_00;
  undefined8 extraout_x15_01;
  undefined8 extraout_x15_02;
  undefined8 extraout_x15_03;
  uint *extraout_x15_04;
  uint *puVar4;
  undefined8 extraout_x18;
  undefined8 extraout_x18_00;
  undefined8 extraout_x18_01;
  undefined8 extraout_x18_02;
  undefined8 extraout_x18_03;
  uint *extraout_x18_04;
  ulong uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint local_10;
  uint uStack_c;
  uint local_8;
  uint uStack_4;
  
  puVar6 = (uint *)(param_1 + 5);
  uVar7 = (*param_3 & 0xff00ff00) >> 8 | (*param_3 & 0xff00ff) << 8;
  uVar8 = (param_3[1] & 0xff00ff00) >> 8 | (param_3[1] & 0xff00ff) << 8;
  local_10 = (uVar7 >> 0x10 | uVar7 << 0x10) ^ param_1[1];
  uVar7 = (param_3[2] & 0xff00ff00) >> 8 | (param_3[2] & 0xff00ff) << 8;
  uVar1 = (param_3[3] & 0xff00ff00) >> 8 | (param_3[3] & 0xff00ff) << 8;
  uStack_c = (uVar8 >> 0x10 | uVar8 << 0x10) ^ param_1[2];
  uVar7 = (uVar7 >> 0x10 | uVar7 << 0x10) ^ param_1[3];
  uVar8 = (uVar1 >> 0x10 | uVar1 << 0x10) ^ param_1[4];
  if (*param_1 != 0) {
    uVar5 = (ulong)(*param_1 - 1);
    puVar4 = &local_10;
    puVar3 = &local_8;
    puVar2 = puVar6;
    while( true ) {
      local_8 = uVar7;
      uStack_4 = uVar8;
      FUN_7100745c70(puVar4,puVar2,puVar3);
      FUN_7100745c70(extraout_x15,extraout_x14 + 8,extraout_x18);
      FUN_7100745c70(extraout_x18_00,extraout_x14_00 + 0x10,extraout_x15_00);
      FUN_7100745c70(extraout_x15_01,extraout_x14_01 + 0x18,extraout_x18_01);
      FUN_7100745c70(extraout_x18_02,extraout_x14_02 + 0x20,extraout_x15_02);
      uVar8 = uStack_4;
      uVar7 = local_8;
      FUN_7100745c70(extraout_x15_03,extraout_x14_03 + 0x28,extraout_x18_03);
      if (param_1 + uVar5 * 0x10 + 5 == extraout_x14_04) break;
      puVar2 = (uint *)(extraout_x14_04 + 0x10);
      uStack_c = uStack_c ^
                 ((local_10 & extraout_x14_04[0xc]) >> 0x1f | (local_10 & extraout_x14_04[0xc]) << 1
                 );
      uVar7 = uVar7 ^ (uVar8 | extraout_x14_04[0xf]);
      local_10 = local_10 ^ (uStack_c | extraout_x14_04[0xd]);
      uVar8 = uVar8 ^ ((uVar7 & extraout_x14_04[0xe]) >> 0x1f | (uVar7 & extraout_x14_04[0xe]) << 1)
      ;
      puVar3 = extraout_x15_04;
      puVar4 = extraout_x18_04;
    }
    puVar6 = puVar6 + uVar5 * 0x10 + 0xc;
  }
  uVar7 = uVar7 ^ *puVar6;
  uVar8 = uVar8 ^ puVar6[1];
  local_10 = local_10 ^ puVar6[2];
  uStack_c = uStack_c ^ puVar6[3];
  param_4[1] = CONCAT17((char)uStack_c,
                        CONCAT16((char)(uStack_c >> 8),
                                 CONCAT15((char)(uStack_c >> 0x10),
                                          CONCAT14((char)(uStack_c >> 0x18),
                                                   CONCAT13((char)local_10,
                                                            CONCAT12((char)(local_10 >> 8),
                                                                     CONCAT11((char)(local_10 >>
                                                                                    0x10),
                                                                              (char)(local_10 >>
                                                                                    0x18))))))));
  *param_4 = CONCAT17((char)uVar8,
                      CONCAT16((char)(uVar8 >> 8),
                               CONCAT15((char)(uVar8 >> 0x10),
                                        CONCAT14((char)(uVar8 >> 0x18),
                                                 CONCAT13((char)uVar7,
                                                          CONCAT12((char)(uVar7 >> 8),
                                                                   CONCAT11((char)(uVar7 >> 0x10),
                                                                            (char)(uVar7 >> 0x18))))
                                                ))));
  return 0;
}



// ===== FUN_7100746590 @ 7100746590 (size=292) =====

undefined8
FUN_7100746590(undefined8 param_1,int param_2,ulong param_3,undefined8 *param_4,undefined8 *param_5,
              undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if ((param_3 & 0xf) != 0) {
    return 0xffffffda;
  }
  if (param_2 == 0) {
    if (param_3 != 0) {
      puVar4 = (undefined8 *)((long)param_5 + param_3);
      do {
        uVar1 = *param_5;
        uVar2 = param_5[1];
        FUN_71007463c0(param_1,0,param_5,param_6);
        lVar3 = 0;
        do {
          *(byte *)((long)param_6 + lVar3) =
               *(byte *)((long)param_6 + lVar3) ^ *(byte *)((long)param_4 + lVar3);
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0x10);
        param_5 = param_5 + 2;
        *param_4 = uVar1;
        param_4[1] = uVar2;
        param_6 = param_6 + 2;
      } while (param_5 != puVar4);
    }
  }
  else {
    puVar4 = param_6;
    if (param_3 != 0) {
      do {
        lVar3 = 0;
        do {
          *(byte *)((long)puVar4 + lVar3) =
               *(byte *)((long)param_5 + lVar3) ^ *(byte *)((long)param_4 + lVar3);
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0x10);
        FUN_71007463c0(param_1,param_2,puVar4,puVar4);
        puVar5 = puVar4 + 2;
        uVar1 = puVar4[1];
        param_5 = param_5 + 2;
        *param_4 = *puVar4;
        param_4[1] = uVar1;
        puVar4 = puVar5;
      } while (puVar5 != (undefined8 *)((long)param_6 + param_3));
      return 0;
    }
  }
  return 0;
}



// ===== FUN_71007466c0 @ 71007466c0 (size=260) =====

undefined8
FUN_71007466c0(undefined8 param_1,int param_2,long param_3,ulong *param_4,long param_5,byte *param_6
              ,byte *param_7)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  uVar3 = *param_4;
  if (uVar3 < 0x10) {
    if (param_2 == 0) {
      if (param_3 != 0) {
        pbVar4 = param_6;
        do {
          if (uVar3 == 0) {
            FUN_71007463c0(param_1,1,param_5,param_5);
          }
          pbVar5 = pbVar4 + 1;
          bVar1 = *pbVar4;
          *param_7 = bVar1 ^ *(byte *)(param_5 + uVar3);
          *(byte *)(param_5 + uVar3) = bVar1;
          uVar3 = uVar3 + 1 & 0xf;
          pbVar4 = pbVar5;
          param_7 = param_7 + 1;
        } while (param_6 + param_3 != pbVar5);
      }
    }
    else {
      pbVar4 = param_6;
      if (param_3 != 0) {
        do {
          if (uVar3 == 0) {
            FUN_71007463c0(param_1,1,param_5,param_5);
          }
          pbVar5 = pbVar4 + 1;
          bVar1 = *(byte *)(param_5 + uVar3) ^ *pbVar4;
          *param_7 = bVar1;
          *(byte *)(param_5 + uVar3) = bVar1;
          uVar3 = uVar3 + 1 & 0xf;
          param_7 = param_7 + 1;
          pbVar4 = pbVar5;
        } while (param_6 + param_3 != pbVar5);
      }
    }
    *param_4 = uVar3;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffdc;
  }
  return uVar2;
}



// ===== FUN_71007468b0 @ 71007468b0 (size=24) =====

void FUN_71007468b0(undefined8 *param_1)

{
  param_1[10] = 0;
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
  return;
}



// ===== FUN_71007468d0 @ 71007468d0 (size=144) =====

undefined8
FUN_71007468d0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_710072c850(param_2,param_4,1);
  if ((lVar1 == 0) || (*(int *)(lVar1 + 0x20) != 0x10)) {
    uVar2 = 0xfffffff3;
  }
  else {
    FUN_710072c8c0(param_1);
    uVar2 = FUN_710072d0d0(param_1,lVar1);
    if ((int)uVar2 == 0) {
      uVar2 = FUN_710072c910(param_1,param_3,param_4,1);
      return uVar2;
    }
  }
  return uVar2;
}



// ===== FUN_7100746960 @ 7100746960 (size=48) =====

void FUN_7100746960(long param_1)

{
  if (param_1 != 0) {
    FUN_710072c8c0();
    FUN_710073b460(param_1,0x58);
    return;
  }
  return;
}



// ===== FUN_7100746990 @ 7100746990 (size=804) =====

void FUN_7100746990(ulong *param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
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
  uint3 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  int local_40;
  int iStack_3c;
  int iStack_38;
  uint uStack_34;
  int local_30;
  int iStack_2c;
  int local_28;
  uint local_24;
  int local_20;
  int iStack_1c;
  int iStack_18;
  uint uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 local_8;
  undefined4 local_4;
  
  lVar23 = 10;
  uVar26 = param_1[2] & 0xffffffff;
  uVar33 = *param_1 & 0xffffffff;
  uVar32 = *param_1 >> 0x20;
  uVar31 = param_1[1] & 0xffffffff;
  uVar24 = param_1[3] & 0xffffffff;
  uVar27 = param_1[6] & 0xffffffff;
  uVar29 = param_1[6] >> 0x20;
  uVar34 = param_1[4] & 0xffffffff;
  uVar30 = param_1[4] >> 0x20;
  uVar28 = param_1[7] & 0xffffffff;
  uVar35 = param_1[5] & 0xffffffff;
  uVar25 = param_1[2] >> 0x20;
  uStack_34 = (uint)(param_1[1] >> 0x20);
  local_24 = (uint)(param_1[3] >> 0x20);
  uStack_14 = (uint)(param_1[5] >> 0x20);
  local_4 = (uint)(param_1[7] >> 0x20);
  do {
    uVar1 = (uint)uVar26 + (int)uVar33;
    uVar2 = (uint)uVar25 + (int)uVar32;
    uVar3 = (uint)uVar24 + (int)uVar31;
    uVar8 = (uint)uVar29 ^ uVar2;
    uVar9 = (uint)uVar27 ^ uVar1;
    uVar10 = (uint)uVar28 ^ uVar3;
    local_4 = local_4 ^ local_24 + uStack_34;
    uVar15 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar16 = uVar8 >> 0x10 | uVar8 << 0x10;
    uVar17 = uVar10 >> 0x10 | uVar10 << 0x10;
    uVar18 = local_4 >> 0x10 | local_4 << 0x10;
    uVar10 = (int)uVar34 + uVar15;
    uVar8 = (int)uVar30 + uVar16;
    uVar9 = (int)uVar35 + uVar17;
    uStack_14 = uStack_14 + uVar18;
    uVar11 = (uint)uVar26 ^ uVar10;
    uVar12 = (uint)uVar25 ^ uVar8;
    uVar13 = (uint)uVar24 ^ uVar9;
    uVar14 = local_24 ^ uStack_14;
    uVar11 = uVar11 >> 0x14 | uVar11 << 0xc;
    uVar12 = uVar12 >> 0x14 | uVar12 << 0xc;
    uVar13 = uVar13 >> 0x14 | uVar13 << 0xc;
    uVar14 = uVar14 >> 0x14 | uVar14 << 0xc;
    uVar1 = uVar1 + uVar11;
    uVar2 = uVar2 + uVar12;
    uVar3 = uVar3 + uVar13;
    uStack_34 = local_24 + uStack_34 + uVar14;
    uVar15 = uVar15 ^ uVar1;
    uVar16 = uVar16 ^ uVar2;
    uVar17 = uVar17 ^ uVar3;
    uVar18 = uVar18 ^ uStack_34;
    uVar15 = uVar15 >> 0x18 | uVar15 << 8;
    uVar19 = uVar16 >> 0x18 | uVar16 << 8;
    uVar16 = uVar17 >> 0x18 | uVar17 << 8;
    uVar17 = uVar18 >> 0x18 | uVar18 << 8;
    uVar10 = uVar10 + uVar15;
    uVar8 = uVar8 + uVar19;
    uVar9 = uVar9 + uVar16;
    uStack_14 = uStack_14 + uVar17;
    uVar11 = uVar11 ^ uVar10;
    uVar12 = uVar12 ^ uVar8;
    uVar13 = uVar13 ^ uVar9;
    uVar14 = uVar14 ^ uStack_14;
    uVar11 = uVar11 >> 0x19 | uVar11 << 7;
    uVar12 = uVar12 >> 0x19 | uVar12 << 7;
    uVar13 = uVar13 >> 0x19 | uVar13 << 7;
    uVar14 = uVar14 >> 0x19 | uVar14 << 7;
    uVar1 = uVar12 + uVar1;
    uVar2 = uVar13 + uVar2;
    uStack_34 = uStack_34 + uVar11;
    uVar3 = uVar14 + uVar3;
    uVar15 = uVar2 ^ uVar15;
    uVar16 = uStack_34 ^ uVar16;
    uVar17 = uVar1 ^ uVar17;
    uVar19 = uVar3 ^ uVar19;
    uVar18 = uVar15 >> 0x10 | uVar15 << 0x10;
    uVar15 = uVar16 >> 0x10 | uVar16 << 0x10;
    uVar16 = uVar17 >> 0x10 | uVar17 << 0x10;
    uVar17 = uVar19 >> 0x10 | uVar19 << 0x10;
    uVar8 = uVar15 + uVar8;
    uVar9 = uVar16 + uVar9;
    uStack_14 = uVar18 + uStack_14;
    uVar10 = uVar17 + uVar10;
    uVar11 = uVar8 ^ uVar11;
    uVar12 = uVar9 ^ uVar12;
    uVar13 = uStack_14 ^ uVar13;
    uVar14 = uVar10 ^ uVar14;
    uVar11 = uVar11 >> 0x14 | uVar11 << 0xc;
    uVar12 = uVar12 >> 0x14 | uVar12 << 0xc;
    uVar13 = uVar13 >> 0x14 | uVar13 << 0xc;
    uVar14 = uVar14 >> 0x14 | uVar14 << 0xc;
    uStack_34 = uStack_34 + uVar11;
    uVar1 = uVar1 + uVar12;
    uVar33 = (ulong)uVar1;
    uVar2 = uVar2 + uVar13;
    uVar32 = (ulong)uVar2;
    uVar3 = uVar3 + uVar14;
    uVar31 = (ulong)uVar3;
    uVar15 = uVar15 ^ uStack_34;
    uVar16 = uVar16 ^ uVar1;
    uVar18 = uVar18 ^ uVar2;
    uVar17 = uVar17 ^ uVar3;
    uVar15 = uVar15 >> 0x18 | uVar15 << 8;
    uVar28 = (ulong)uVar15;
    local_4 = uVar16 >> 0x18 | uVar16 << 8;
    uVar16 = uVar18 >> 0x18 | uVar18 << 8;
    uVar27 = (ulong)uVar16;
    uVar17 = uVar17 >> 0x18 | uVar17 << 8;
    uVar29 = (ulong)uVar17;
    uVar8 = uVar8 + uVar15;
    uVar30 = (ulong)uVar8;
    uVar9 = uVar9 + local_4;
    uVar35 = (ulong)uVar9;
    uStack_14 = uStack_14 + uVar16;
    uVar10 = uVar10 + uVar17;
    uVar34 = (ulong)uVar10;
    uVar11 = uVar11 ^ uVar8;
    uVar12 = uVar12 ^ uVar9;
    uVar13 = uVar13 ^ uStack_14;
    uVar14 = uVar14 ^ uVar10;
    lVar23 = lVar23 + -1;
    uVar11 = uVar11 >> 0x19 | uVar11 << 7;
    uVar26 = (ulong)uVar11;
    uVar12 = uVar12 >> 0x19 | uVar12 << 7;
    uVar25 = (ulong)uVar12;
    uVar13 = uVar13 >> 0x19 | uVar13 << 7;
    uVar24 = (ulong)uVar13;
    local_24 = uVar14 >> 0x19 | uVar14 << 7;
  } while (lVar23 != 0);
  local_40 = (int)*param_1 + uVar1;
  iStack_3c = *(int *)((long)param_1 + 4) + uVar2;
  iStack_38 = (int)param_1[1] + uVar3;
  uStack_34 = *(int *)((long)param_1 + 0xc) + uStack_34;
  local_30 = (int)param_1[2] + uVar11;
  iStack_2c = *(int *)((long)param_1 + 0x14) + uVar12;
  local_24 = *(int *)((long)param_1 + 0x1c) + local_24;
  local_28 = (int)param_1[3] + uVar13;
  local_20 = (int)param_1[4] + uVar10;
  iStack_1c = *(int *)((long)param_1 + 0x24) + uVar8;
  iStack_18 = (int)param_1[5] + uVar9;
  uStack_14 = *(int *)((long)param_1 + 0x2c) + uStack_14;
  iVar4 = (int)param_1[6] + uVar16;
  iVar5 = *(int *)((long)param_1 + 0x34) + uVar17;
  _local_10 = CONCAT44(iVar5,iVar4);
  uVar21 = _local_10;
  iVar6 = (int)param_1[7] + uVar15;
  iVar7 = *(int *)((long)param_1 + 0x3c) + local_4;
  _local_8 = CONCAT44(iVar7,iVar6);
  uVar22 = _local_8;
  local_10._0_1_ = (undefined1)iVar4;
  local_10._1_1_ = (undefined1)((uint)iVar4 >> 8);
  local_10._2_1_ = (undefined1)((uint)iVar4 >> 0x10);
  local_10._3_1_ = (undefined1)((uint)iVar4 >> 0x18);
  uStack_c._0_1_ = (undefined1)iVar5;
  uStack_c._1_1_ = (undefined1)((uint)iVar5 >> 8);
  uStack_c._2_1_ = (undefined1)((uint)iVar5 >> 0x10);
  uStack_c._3_1_ = (undefined1)((uint)iVar5 >> 0x18);
  local_8._0_1_ = (undefined1)iVar6;
  local_8._1_1_ = (undefined1)((uint)iVar6 >> 8);
  local_8._2_1_ = (undefined1)((uint)iVar6 >> 0x10);
  local_8._3_1_ = (undefined1)((uint)iVar6 >> 0x18);
  local_4._0_1_ = (undefined1)iVar7;
  local_4._1_1_ = (undefined1)((uint)iVar7 >> 8);
  local_4._2_1_ = (undefined1)((uint)iVar7 >> 0x10);
  local_4._3_1_ = (undefined1)((uint)iVar7 >> 0x18);
  uVar20 = CONCAT12((char)((uint)iStack_1c >> 0x10),(short)((uint)local_20 >> 0x10)) & 0xff00ff;
  *param_2 = (char)local_40;
  param_2[1] = (char)((uint)local_40 >> 8);
  param_2[2] = (char)((uint)local_40 >> 0x10);
  param_2[3] = (char)((uint)local_40 >> 0x18);
  param_2[4] = (char)iStack_3c;
  param_2[5] = (char)((uint)iStack_3c >> 8);
  param_2[6] = (char)((uint)iStack_3c >> 0x10);
  param_2[7] = (char)((uint)iStack_3c >> 0x18);
  param_2[8] = (char)iStack_38;
  param_2[9] = (char)((uint)iStack_38 >> 8);
  param_2[10] = (char)((uint)iStack_38 >> 0x10);
  param_2[0xb] = (char)((uint)iStack_38 >> 0x18);
  param_2[0xc] = (char)uStack_34;
  param_2[0xd] = (char)(uStack_34 >> 8);
  param_2[0xe] = (char)(uStack_34 >> 0x10);
  param_2[0xf] = (char)(uStack_34 >> 0x18);
  param_2[0x10] = (char)local_30;
  param_2[0x11] = (char)((uint)local_30 >> 8);
  param_2[0x12] = (char)((uint)local_30 >> 0x10);
  param_2[0x13] = (char)((uint)local_30 >> 0x18);
  param_2[0x14] = (char)iStack_2c;
  param_2[0x15] = (char)((uint)iStack_2c >> 8);
  param_2[0x16] = (char)((uint)iStack_2c >> 0x10);
  param_2[0x17] = (char)((uint)iStack_2c >> 0x18);
  param_2[0x18] = (char)local_28;
  param_2[0x19] = (char)((uint)local_28 >> 8);
  param_2[0x1a] = (char)((uint)local_28 >> 0x10);
  param_2[0x1b] = (char)((uint)local_28 >> 0x18);
  param_2[0x1c] = (char)local_24;
  param_2[0x1d] = (char)(local_24 >> 8);
  param_2[0x1e] = (char)(local_24 >> 0x10);
  param_2[0x1f] = (char)(local_24 >> 0x18);
  param_2[0x20] = (char)local_20;
  param_2[0x21] = (char)((uint)local_20 >> 8);
  param_2[0x22] = (char)uVar20;
  param_2[0x23] = (char)((uint)local_20 >> 0x18);
  param_2[0x24] = (char)iStack_1c;
  param_2[0x25] = (char)((uint)iStack_1c >> 8);
  param_2[0x26] = (char)(uVar20 >> 0x10);
  param_2[0x27] = (char)((uint)iStack_1c >> 0x18);
  param_2[0x28] = (char)iStack_18;
  param_2[0x29] = (char)((uint)iStack_18 >> 8);
  param_2[0x2a] = (char)((uint)iStack_18 >> 0x10);
  param_2[0x2b] = (char)((uint)iStack_18 >> 0x18);
  param_2[0x2c] = (char)uStack_14;
  param_2[0x2d] = (char)(uStack_14 >> 8);
  param_2[0x2e] = (char)(uStack_14 >> 0x10);
  param_2[0x2f] = (char)(uStack_14 >> 0x18);
  param_2[0x30] = (undefined1)local_10;
  param_2[0x31] = local_10._1_1_;
  param_2[0x32] = local_10._2_1_;
  param_2[0x33] = local_10._3_1_;
  param_2[0x34] = (undefined1)uStack_c;
  param_2[0x35] = uStack_c._1_1_;
  param_2[0x36] = uStack_c._2_1_;
  param_2[0x37] = uStack_c._3_1_;
  param_2[0x38] = (undefined1)local_8;
  param_2[0x39] = local_8._1_1_;
  param_2[0x3a] = local_8._2_1_;
  param_2[0x3b] = local_8._3_1_;
  param_2[0x3c] = (undefined1)local_4;
  param_2[0x3d] = local_4._1_1_;
  param_2[0x3e] = local_4._2_1_;
  param_2[0x3f] = local_4._3_1_;
  _local_10 = uVar21;
  _local_8 = uVar22;
  FUN_710073b460(&local_40,0x40);
  return;
}



// ===== FUN_7100746cc0 @ 7100746cc0 (size=56) =====

void FUN_7100746cc0(long param_1)

{
  FUN_710073b460(param_1,0x40);
  FUN_710073b460(param_1 + 0x40,0x40);
  *(undefined8 *)(param_1 + 0x80) = 0x40;
  return;
}



// ===== FUN_7100746d00 @ 7100746d00 (size=16) =====

void FUN_7100746d00(long param_1)

{
  if (param_1 != 0) {
    FUN_710073b460(param_1,0x88);
    return;
  }
  return;
}



// ===== FUN_7100746d10 @ 7100746d10 (size=112) =====

undefined8 FUN_7100746d10(undefined8 *param_1,undefined4 *param_2)

{
  *param_1 = 0x3320646e61707865;
  param_1[1] = 0x6b20657479622d32;
  *(undefined4 *)(param_1 + 2) = *param_2;
  *(undefined4 *)((long)param_1 + 0x14) = param_2[1];
  *(undefined4 *)(param_1 + 3) = param_2[2];
  *(undefined4 *)((long)param_1 + 0x1c) = param_2[3];
  *(undefined4 *)(param_1 + 4) = param_2[4];
  *(undefined4 *)((long)param_1 + 0x24) = param_2[5];
  *(undefined4 *)(param_1 + 5) = param_2[6];
  *(undefined4 *)((long)param_1 + 0x2c) = param_2[7];
  return 0;
}



// ===== FUN_7100746d80 @ 7100746d80 (size=84) =====

undefined8 FUN_7100746d80(long param_1,undefined4 *param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x30) = param_3;
  *(undefined4 *)(param_1 + 0x34) = *param_2;
  *(undefined4 *)(param_1 + 0x38) = param_2[1];
  *(undefined4 *)(param_1 + 0x3c) = param_2[2];
  FUN_710073b460(param_1 + 0x40,0x40);
  *(undefined8 *)(param_1 + 0x80) = 0x40;
  return 0;
}



// ===== FUN_7100746de0 @ 7100746de0 (size=512) =====

undefined8 FUN_7100746de0(long param_1,long param_2,long param_3,long param_4)

{
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  long lVar8;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar8 = 0;
  uVar3 = *(ulong *)(param_1 + 0x80);
  while (uVar3 < 0x40) {
    *(byte *)(param_4 + lVar8) = *(byte *)(param_3 + lVar8) ^ *(byte *)(param_1 + uVar3 + 0x40);
    lVar8 = lVar8 + 1;
    uVar3 = *(long *)(param_1 + 0x80) + 1;
    *(ulong *)(param_1 + 0x80) = uVar3;
    if (param_2 == lVar8) {
      return 0;
    }
  }
  uVar3 = param_2 - lVar8;
  if (0x3f < uVar3) {
    lVar2 = (uVar3 - 0x40 & 0xffffffffffffffc0) + lVar8 + 0x40;
    lVar4 = lVar8 + 0x40;
    while( true ) {
      FUN_7100746990(param_1,(byte *)(param_1 + 0x40));
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      pbVar5 = (byte *)(param_4 + lVar8);
      pbVar6 = (byte *)(param_1 + 0x40);
      pbVar7 = (byte *)(param_3 + lVar8);
      do {
        pbVar1 = pbVar6 + 8;
        *pbVar5 = *pbVar7 ^ *pbVar6;
        pbVar5[1] = pbVar7[1] ^ pbVar6[1];
        pbVar5[2] = pbVar7[2] ^ pbVar6[2];
        pbVar5[3] = pbVar7[3] ^ pbVar6[3];
        pbVar5[4] = pbVar7[4] ^ pbVar6[4];
        pbVar5[5] = pbVar7[5] ^ pbVar6[5];
        pbVar5[6] = pbVar7[6] ^ pbVar6[6];
        pbVar5[7] = pbVar7[7] ^ pbVar6[7];
        pbVar5 = pbVar5 + 8;
        pbVar6 = pbVar1;
        pbVar7 = pbVar7 + 8;
      } while (pbVar1 != (byte *)(param_1 + 0x80));
      if (lVar4 == lVar2) break;
      lVar8 = lVar4;
      lVar4 = lVar4 + 0x40;
    }
    uVar3 = uVar3 & 0x3f;
    lVar8 = lVar2;
    if (uVar3 == 0) {
      return 0;
    }
  }
  FUN_7100746990(param_1,param_1 + 0x40);
  lVar2 = uVar3 + lVar8;
  lVar4 = param_1 - lVar8;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  do {
    *(byte *)(param_4 + lVar8) = *(byte *)(lVar4 + 0x40 + lVar8) ^ *(byte *)(param_3 + lVar8);
    lVar8 = lVar8 + 1;
  } while (lVar2 != lVar8);
  *(ulong *)(param_1 + 0x80) = uVar3;
  return 0;
}



// ===== FUN_7100746fe0 @ 7100746fe0 (size=48) =====

void FUN_7100746fe0(long param_1)

{
  FUN_7100746cc0();
  FUN_71007491c0(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  return;
}



// ===== FUN_7100747010 @ 7100747010 (size=56) =====

void FUN_7100747010(long param_1)

{
  if (param_1 != 0) {
    FUN_7100746d00();
    FUN_71007491d0(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    return;
  }
  return;
}



// ===== thunk_FUN_7100746d10 @ 7100747050 (size=4) =====

undefined8 thunk_FUN_7100746d10(undefined8 *param_1,undefined4 *param_2)

{
  *param_1 = 0x3320646e61707865;
  param_1[1] = 0x6b20657479622d32;
  *(undefined4 *)(param_1 + 2) = *param_2;
  *(undefined4 *)((long)param_1 + 0x14) = param_2[1];
  *(undefined4 *)(param_1 + 3) = param_2[2];
  *(undefined4 *)((long)param_1 + 0x1c) = param_2[3];
  *(undefined4 *)(param_1 + 4) = param_2[4];
  *(undefined4 *)((long)param_1 + 0x24) = param_2[5];
  *(undefined4 *)(param_1 + 5) = param_2[6];
  *(undefined4 *)((long)param_1 + 0x2c) = param_2[7];
  return 0;
}



// ===== FUN_7100747060 @ 7100747060 (size=256) =====

undefined8 FUN_7100747060(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined7 local_10;
  undefined1 uStack_9;
  undefined7 uStack_8;
  
  if (*(int *)(param_1 + 0xe8) - 1U < 2) {
    if (*(int *)(param_1 + 0xe8) == 1) {
      *(undefined4 *)(param_1 + 0xe8) = 2;
      if ((*(ulong *)(param_1 + 0xd8) & 0xf) != 0) {
        local_10 = 0;
        uStack_9 = 0;
        uStack_8 = 0;
        uVar1 = FUN_71007491e0(param_1 + 0x88,&local_10,
                               0x10 - ((uint)*(ulong *)(param_1 + 0xd8) & 0xf));
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      }
    }
    *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xe0) + param_2;
    if (*(int *)(param_1 + 0xec) == 0) {
      uVar1 = FUN_7100746de0(param_1,param_2,param_3,param_4);
      if ((int)uVar1 == 0) {
        uVar1 = FUN_71007491e0(param_1 + 0x88,param_4,param_2);
        return uVar1;
      }
    }
    else {
      uVar1 = FUN_71007491e0(param_1 + 0x88,param_3,param_2);
      if ((int)uVar1 == 0) {
        uVar1 = FUN_7100746de0(param_1,param_2,param_3,param_4);
        return uVar1;
      }
    }
  }
  else {
    uVar1 = 0xffffffac;
  }
  return uVar1;
}



// ===== FUN_7100747160 @ 7100747160 (size=140) =====

undefined8 FUN_7100747160(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_1 == 0) {
    return 0xffffffd2;
  }
  puVar1 = &DAT_7100853d08;
  puVar3 = (undefined8 *)0x7100ae6a90;
  lVar4 = *(long *)(param_1 + 8);
  while ((puVar3[1] != lVar4 ||
         (uVar2 = FUN_710081ec40(puVar1,*(undefined8 *)(param_1 + 0x10),lVar4), (int)uVar2 != 0))) {
    puVar3 = puVar3 + 5;
    puVar1 = (undefined *)*puVar3;
    if (puVar1 == (undefined *)0x0) {
      return 0xffffffd2;
    }
  }
  *param_2 = *(undefined4 *)(puVar3 + 4);
  return uVar2;
}



// ===== FUN_71007471f0 @ 71007471f0 (size=140) =====

undefined8 FUN_71007471f0(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_1 == 0) {
    return 0xffffffd2;
  }
  puVar1 = &DAT_7100853d18;
  puVar3 = (undefined8 *)0x7100ae68b0;
  lVar4 = *(long *)(param_1 + 8);
  while ((puVar3[1] != lVar4 ||
         (uVar2 = FUN_710081ec40(puVar1,*(undefined8 *)(param_1 + 0x10),lVar4), (int)uVar2 != 0))) {
    puVar3 = puVar3 + 5;
    puVar1 = (undefined *)*puVar3;
    if (puVar1 == (undefined *)0x0) {
      return 0xffffffd2;
    }
  }
  *param_2 = *(undefined4 *)(puVar3 + 4);
  return uVar2;
}



// ===== FUN_7100747280 @ 7100747280 (size=140) =====

undefined8 FUN_7100747280(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_1 == 0) {
    return 0xffffffd2;
  }
  puVar1 = &DAT_7100853d28;
  puVar3 = (undefined8 *)0x7100ae6838;
  lVar4 = *(long *)(param_1 + 8);
  while ((puVar3[1] != lVar4 ||
         (uVar2 = FUN_710081ec40(puVar1,*(undefined8 *)(param_1 + 0x10),lVar4), (int)uVar2 != 0))) {
    puVar3 = puVar3 + 5;
    puVar1 = (undefined *)*puVar3;
    if (puVar1 == (undefined *)0x0) {
      return 0xffffffd2;
    }
  }
  *param_2 = *(undefined4 *)(puVar3 + 4);
  return uVar2;
}



// ===== FUN_7100747310 @ 7100747310 (size=68) =====

undefined8 FUN_7100747310(int param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = (undefined8 *)0x7100ae66f8;
  puVar3 = &DAT_7100853d30;
  do {
    if (*(int *)(puVar1 + 4) == param_1) {
      uVar2 = puVar1[1];
      *param_2 = puVar3;
      *param_3 = uVar2;
      return 0;
    }
    puVar1 = puVar1 + 5;
    puVar3 = (undefined *)*puVar1;
  } while (puVar3 != (undefined *)0x0);
  return 0xffffffd2;
}



// ===== FUN_7100747360 @ 7100747360 (size=140) =====

undefined8 FUN_7100747360(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_1 == 0) {
    return 0xffffffd2;
  }
  puVar1 = &DAT_7100853d40;
  puVar3 = (undefined8 *)0x7100ae6608;
  lVar4 = *(long *)(param_1 + 8);
  while ((puVar3[1] != lVar4 ||
         (uVar2 = FUN_710081ec40(puVar1,*(undefined8 *)(param_1 + 0x10),lVar4), (int)uVar2 != 0))) {
    puVar3 = puVar3 + 5;
    puVar1 = (undefined *)*puVar3;
    if (puVar1 == (undefined *)0x0) {
      return 0xffffffd2;
    }
  }
  *param_2 = *(undefined4 *)(puVar3 + 4);
  return uVar2;
}



// ===== FUN_71007473f0 @ 71007473f0 (size=164) =====

undefined8 FUN_71007473f0(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  
  if (param_1 == 0) {
    return 0xffffffd2;
  }
  ppuVar3 = &PTR_DAT_7100ae6590;
  puVar1 = &DAT_7100853d50;
  puVar4 = *(undefined **)(param_1 + 8);
  while ((ppuVar3[1] != puVar4 ||
         (uVar2 = FUN_710081ec40(puVar1,*(undefined8 *)(param_1 + 0x10),puVar4), (int)uVar2 != 0)))
  {
    ppuVar3 = ppuVar3 + 5;
    puVar1 = *ppuVar3;
    if (puVar1 == (undefined *)0x0) {
      return 0xffffffd2;
    }
  }
  *param_2 = *(undefined4 *)(ppuVar3 + 4);
  *param_3 = *(undefined4 *)((long)ppuVar3 + 0x24);
  return uVar2;
}



// ===== FUN_71007474a0 @ 71007474a0 (size=372) =====

int FUN_71007474a0(undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [88];
  
  FUN_7100738680(auStack_58);
  iVar1 = FUN_71007386b0(auStack_58);
  if (iVar1 == 0) {
    iVar1 = FUN_7100739120(auStack_58,param_4,param_5);
    if (((iVar1 == 0) && (iVar1 = FUN_7100739120(auStack_58,param_3,8), iVar1 == 0)) &&
       (iVar1 = FUN_7100739240(auStack_58,&local_68), iVar1 == 0)) {
      if (param_2 < 0x11) {
        FUN_710080f900(param_1,&local_68,param_2);
      }
      else {
        *param_1 = local_68;
        param_1[1] = uStack_60;
        iVar1 = FUN_71007386b0(auStack_58);
        if (((iVar1 == 0) && (iVar1 = FUN_7100739120(auStack_58,&local_68,0x10), iVar1 == 0)) &&
           ((iVar1 = FUN_7100739120(auStack_58,param_4,param_5), iVar1 == 0 &&
            ((iVar1 = FUN_7100739120(auStack_58,param_3,8), iVar1 == 0 &&
             (iVar1 = FUN_7100739240(auStack_58,&local_68), iVar1 == 0)))))) {
          if (0x20 < param_2) {
            param_2 = 0x20;
          }
          FUN_710080f900(param_1 + 2,&local_68,param_2 - 0x10);
        }
      }
    }
  }
  FUN_71007386a0(auStack_58);
  FUN_710073b460(&local_68,0x10);
  return iVar1;
}



// ===== FUN_7100747620 @ 7100747620 (size=196) =====

int FUN_7100747620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [384];
  
  FUN_710072e990(auStack_180);
  iVar1 = FUN_71007474a0(auStack_198,0x18,param_1,param_4,param_5);
  if (iVar1 == 0) {
    iVar1 = FUN_710072ef70(auStack_180,auStack_198);
    if (iVar1 == 0) {
      iVar1 = FUN_710072f7b0(auStack_180,0,param_3,param_1,param_2,param_2);
    }
  }
  FUN_710072e9a0(auStack_180);
  FUN_710073b460(auStack_198,0x18);
  return iVar1;
}



// ===== FUN_71007476f0 @ 71007476f0 (size=212) =====

int FUN_71007476f0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [288];
  
  FUN_7100743770(auStack_120);
  iVar1 = FUN_71007474a0(auStack_140,param_2,param_1,param_5,param_6);
  if (iVar1 == 0) {
    iVar1 = FUN_7100743ad0(auStack_120,auStack_140,param_2 << 3);
    if (iVar1 == 0) {
      iVar1 = FUN_71007447b0(auStack_120,0,param_4,param_1,param_3,param_3);
    }
  }
  FUN_7100743780(auStack_120);
  FUN_710073b460(auStack_140,param_2);
  return iVar1;
}



// ===== FUN_71007477d0 @ 71007477d0 (size=12) =====

void FUN_71007477d0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// ===== FUN_71007477e0 @ 71007477e0 (size=2460) =====

int FUN_71007477e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6,long *param_7)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  ulong uVar9;
  char cVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  ulong *puVar15;
  ulong *puVar16;
  long lVar17;
  char *pcVar18;
  char *pcVar19;
  ulong uVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ulong local_a0;
  undefined1 auStack_98 [8];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [128];
  uint uVar14;
  
  if (param_1 == (undefined8 *)0x0) {
    return -0x1480;
  }
  puVar15 = (ulong *)FUN_710081d620(param_4);
  if ((puVar15 == (ulong *)0x0) ||
     (puVar16 = (ulong *)FUN_710081d620(param_4,param_3), puVar16 <= puVar15)) {
    return -0x1080;
  }
  lVar17 = FUN_710081ce00(param_2);
  cVar10 = *(char *)((long)puVar15 + lVar17);
  pcVar18 = (char *)((long)puVar15 + lVar17);
  if (cVar10 == ' ') {
    cVar10 = pcVar18[1];
    pcVar18 = pcVar18 + 1;
  }
  if (cVar10 == '\r') {
    cVar10 = pcVar18[1];
    pcVar18 = pcVar18 + 1;
  }
  if (cVar10 != '\n') {
    return -0x1080;
  }
  puVar15 = (ulong *)(pcVar18 + 1);
  lVar17 = FUN_710081ce00(param_3);
  cVar10 = *(char *)((long)puVar16 + lVar17);
  pcVar19 = (char *)((long)puVar16 + lVar17);
  if (cVar10 == ' ') {
    cVar10 = pcVar19[1];
    pcVar19 = pcVar19 + 1;
  }
  if (cVar10 == '\r') {
    cVar10 = pcVar19[1];
    pcVar19 = pcVar19 + 1;
  }
  if (cVar10 == '\n') {
    pcVar19 = pcVar19 + 1;
  }
  *param_7 = (long)pcVar19 - param_4;
  if ((((0x15 < (long)puVar16 - (long)puVar15) &&
       (auVar23._0_8_ = *puVar15 ^ 0x7079542d636f7250, auVar23[8] = pcVar18[9] ^ 'e',
       auVar23[9] = pcVar18[10] ^ ':', auVar23[10] = pcVar18[0xb] ^ ' ',
       auVar23[0xb] = pcVar18[0xc] ^ '4', auVar23[0xc] = pcVar18[0xd] ^ ',',
       auVar23[0xd] = pcVar18[0xe] ^ 'E', auVar23[0xe] = pcVar18[0xf] ^ 'N',
       auVar23[0xf] = pcVar18[0x10] ^ 'C', auVar23 = NEON_umaxp(auVar23,auVar23,4),
       auVar23._0_8_ == 0)) && (*(int *)(pcVar18 + 0x11) == 0x54505952)) &&
     (*(short *)(pcVar18 + 0x15) == 0x4445)) {
    cVar10 = pcVar18[0x17];
    if (cVar10 == '\r') {
      cVar10 = pcVar18[0x18];
      pcVar18 = pcVar18 + 0x18;
    }
    else {
      pcVar18 = pcVar18 + 0x17;
    }
    if (cVar10 != '\n') {
      return -0x1100;
    }
    puVar15 = (ulong *)(pcVar18 + 1);
    lVar17 = (long)puVar16 - (long)puVar15;
    if (lVar17 < 0x17) {
      if (lVar17 < 0x12) {
        return -0x1280;
      }
    }
    else {
      auVar24._0_8_ = *(ulong *)(pcVar18 + 1) ^ 0x6f666e492d4b4544;
      auVar24[8] = pcVar18[9] ^ ':';
      auVar24[9] = pcVar18[10] ^ ' ';
      auVar24[10] = pcVar18[0xb] ^ 'D';
      auVar24[0xb] = pcVar18[0xc] ^ 'E';
      auVar24[0xc] = pcVar18[0xd] ^ 'S';
      auVar24[0xd] = pcVar18[0xe] ^ '-';
      auVar24[0xe] = pcVar18[0xf] ^ 'E';
      auVar24[0xf] = pcVar18[0x10] ^ 'D';
      auVar23 = NEON_umaxp(auVar24,auVar24,4);
      if (((auVar23._0_8_ == 0) && (*(int *)(pcVar18 + 0x11) == 0x432d3345)) &&
         ((*(short *)(pcVar18 + 0x15) == 0x4342 && (pcVar18[0x17] == ',')))) {
        pcVar19 = pcVar18 + 0x18;
        if ((long)puVar16 - (long)pcVar19 < 0x10) {
          return -0x1200;
        }
        uVar20 = 0;
        local_90 = 0;
LAB_7100747cf8:
        uVar21 = (uint)(byte)pcVar19[uVar20];
        uVar14 = uVar21 - 0x30;
        if ((uVar21 - 0x30 & 0xff) < 10) goto LAB_7100747d38;
        do {
          uVar14 = uVar21 - 0x37;
          if ((5 < (uVar21 - 0x41 & 0xff)) && (uVar14 = uVar21 - 0x57, 5 < (uVar21 - 0x61 & 0xff)))
          {
            return -0x1200;
          }
LAB_7100747d38:
          bVar11 = (byte)uVar14;
          do {
            uVar9 = uVar20 >> 1;
            if ((uVar20 & 1) != 0) {
              uVar20 = uVar20 + 1;
              *(byte *)((long)&local_90 + uVar9) = *(byte *)((long)&local_90 + uVar9) | bVar11;
              if (uVar20 != 0x10) goto LAB_7100747cf8;
              puVar15 = (ulong *)(pcVar18 + 0x28);
              lVar17 = (long)puVar16 - (long)puVar15;
              if ((((0xd < lVar17) && (*(long *)(pcVar18 + 0x28) == 0x6f666e492d4b4544)) &&
                  (*(int *)(pcVar18 + 0x30) == 0x4541203a)) &&
                 (*(short *)(pcVar18 + 0x34) == 0x2d53)) goto LAB_7100747e14;
              iVar13 = 0x25;
              goto LAB_7100747ddc;
            }
            uVar20 = uVar20 + 1;
            uVar21 = (uint)(byte)pcVar19[uVar20];
            *(byte *)((long)&local_90 + uVar9) =
                 *(byte *)((long)&local_90 + uVar9) | (byte)(uVar14 << 4);
            uVar14 = uVar21 - 0x30;
            bVar11 = (byte)uVar14;
          } while ((uVar14 & 0xff) < 10);
        } while( true );
      }
    }
    auVar25._0_8_ = *puVar15 ^ 0x6f666e492d4b4544;
    auVar25[8] = pcVar18[9] ^ ':';
    auVar25[9] = pcVar18[10] ^ ' ';
    auVar25[10] = pcVar18[0xb] ^ 'D';
    auVar25[0xb] = pcVar18[0xc] ^ 'E';
    auVar25[0xc] = pcVar18[0xd] ^ 'S';
    auVar25[0xd] = pcVar18[0xe] ^ '-';
    auVar25[0xe] = pcVar18[0xf] ^ 'C';
    auVar25[0xf] = pcVar18[0x10] ^ 'B';
    auVar23 = NEON_umaxp(auVar25,auVar25,4);
    if ((auVar23._0_8_ == 0) && (*(short *)(pcVar18 + 0x11) == 0x2c43)) {
      pcVar19 = pcVar18 + 0x13;
      if (0xf < (long)puVar16 - (long)pcVar19) {
        uVar20 = 0;
        local_90 = 0;
LAB_7100747fc8:
        uVar21 = (uint)(byte)pcVar19[uVar20];
        uVar14 = uVar21 - 0x30;
        if ((uVar21 - 0x30 & 0xff) < 10) goto LAB_7100748008;
        while( true ) {
          uVar14 = uVar21 - 0x37;
          if ((5 < (uVar21 - 0x41 & 0xff)) && (uVar14 = uVar21 - 0x57, 5 < (uVar21 - 0x61 & 0xff)))
          break;
LAB_7100748008:
          bVar11 = (byte)uVar14;
          do {
            uVar9 = uVar20 >> 1;
            if ((uVar20 & 1) != 0) {
              uVar20 = uVar20 + 1;
              *(byte *)((long)&local_90 + uVar9) = *(byte *)((long)&local_90 + uVar9) | bVar11;
              if (uVar20 != 0x10) goto LAB_7100747fc8;
              puVar15 = (ulong *)(pcVar18 + 0x23);
              lVar17 = (long)puVar16 - (long)puVar15;
              if (((lVar17 < 0xe) || (*(long *)(pcVar18 + 0x23) != 0x6f666e492d4b4544)) ||
                 (*(int *)(pcVar18 + 0x2b) != 0x4541203a)) {
                iVar13 = 0x21;
              }
              else {
                if (*(short *)(pcVar18 + 0x2f) == 0x2d53) goto LAB_7100747e14;
                iVar13 = 0x21;
              }
              goto LAB_7100747ddc;
            }
            uVar20 = uVar20 + 1;
            uVar21 = (uint)(byte)pcVar19[uVar20];
            *(byte *)((long)&local_90 + uVar9) =
                 *(byte *)((long)&local_90 + uVar9) | (byte)(uVar14 << 4);
            uVar14 = uVar21 - 0x30;
            bVar11 = (byte)uVar14;
          } while ((uVar14 & 0xff) < 10);
        }
      }
      return -0x1200;
    }
    if (((*puVar15 == 0x6f666e492d4b4544) && (*(int *)(pcVar18 + 9) == 0x4541203a)) &&
       (*(short *)(pcVar18 + 0xd) == 0x2d53)) {
LAB_7100747e14:
      if (0x15 < lVar17) {
        bVar11 = (byte)puVar15[1];
        bVar2 = *(byte *)((long)puVar15 + 9);
        bVar3 = *(byte *)((long)puVar15 + 10);
        bVar4 = *(byte *)((long)puVar15 + 0xb);
        bVar5 = *(byte *)((long)puVar15 + 0xc);
        bVar6 = *(byte *)((long)puVar15 + 0xd);
        bVar7 = *(byte *)((long)puVar15 + 0xe);
        bVar8 = *(byte *)((long)puVar15 + 0xf);
        auVar26._0_8_ = *puVar15 ^ 0x6f666e492d4b4544;
        auVar26[8] = bVar11 ^ ':';
        auVar26[9] = bVar2 ^ ' ';
        auVar26[10] = bVar3 ^ 'A';
        auVar26[0xb] = bVar4 ^ 'E';
        auVar26[0xc] = bVar5 ^ 'S';
        auVar26[0xd] = bVar6 ^ '-';
        auVar26[0xe] = bVar7 ^ '1';
        auVar26[0xf] = bVar8 ^ '2';
        auVar23 = NEON_umaxp(auVar26,auVar26,4);
        if ((((auVar23._0_8_ != 0) || ((int)puVar15[2] != 0x42432d38)) ||
            (iVar13 = 5, *(short *)((long)puVar15 + 0x14) != 0x2c43)) &&
           (((auVar27._0_8_ = *puVar15 ^ 0x6f666e492d4b4544, auVar27[8] = bVar11 ^ ':',
             auVar27[9] = bVar2 ^ ' ', auVar27[10] = bVar3 ^ 'A', auVar27[0xb] = bVar4 ^ 'E',
             auVar27[0xc] = bVar5 ^ 'S', auVar27[0xd] = bVar6 ^ '-', auVar27[0xe] = bVar7 ^ '1',
             auVar27[0xf] = bVar8 ^ '9', auVar23 = NEON_umaxp(auVar27,auVar27,4), auVar23._0_8_ != 0
             || ((int)puVar15[2] != 0x42432d32)) ||
            (iVar13 = 6, *(short *)((long)puVar15 + 0x14) != 0x2c43)))) {
          auVar22._0_8_ = *puVar15 ^ 0x6f666e492d4b4544;
          auVar22[8] = bVar11 ^ ':';
          auVar22[9] = bVar2 ^ ' ';
          auVar22[10] = bVar3 ^ 'A';
          auVar22[0xb] = bVar4 ^ 'E';
          auVar22[0xc] = bVar5 ^ 'S';
          auVar22[0xd] = bVar6 ^ '-';
          auVar22[0xe] = bVar7 ^ '2';
          auVar22[0xf] = bVar8 ^ '5';
          auVar23 = NEON_umaxp(auVar22,auVar22,4);
          if (auVar23._0_8_ != 0) {
            return -0x1280;
          }
          if ((int)puVar15[2] != 0x42432d36) {
            return -0x1280;
          }
          if (*(short *)((long)puVar15 + 0x14) != 0x2c43) {
            return -0x1280;
          }
          iVar13 = 7;
        }
        pcVar18 = (char *)((long)puVar15 + 0x16);
        if ((long)puVar16 - (long)pcVar18 < 0x20) {
          return -0x1200;
        }
        uVar20 = 0;
        local_90 = 0;
        uStack_88 = 0;
LAB_7100747ed8:
        uVar21 = (uint)(byte)pcVar18[uVar20];
        uVar14 = uVar21 - 0x30;
        if ((uVar21 - 0x30 & 0xff) < 10) goto LAB_7100747f18;
LAB_7100747ef8:
        uVar14 = uVar21 - 0x37;
        if ((5 < (uVar21 - 0x41 & 0xff)) && (uVar14 = uVar21 - 0x57, 5 < (uVar21 - 0x61 & 0xff))) {
          return -0x1200;
        }
LAB_7100747f18:
        bVar11 = (byte)uVar14;
joined_r0x007100747f20:
        uVar9 = uVar20 >> 1;
        if ((uVar20 & 1) == 0) goto LAB_7100747f24;
        uVar20 = uVar20 + 1;
        *(byte *)((long)&local_90 + uVar9) = *(byte *)((long)&local_90 + uVar9) | bVar11;
        if (uVar20 == 0x20) {
          puVar15 = (ulong *)((long)puVar15 + 0x36);
LAB_7100747ddc:
          cVar10 = (char)*puVar15;
          if (cVar10 == '\r') {
            cVar10 = *(char *)((long)puVar15 + 1);
            puVar15 = (ulong *)((long)puVar15 + 1);
          }
          if (cVar10 != '\n') {
            return -0x1100;
          }
          puVar15 = (ulong *)((long)puVar15 + 1);
          bVar1 = true;
          goto LAB_71007478d8;
        }
        goto LAB_7100747ed8;
      }
    }
    return -0x1280;
  }
  iVar13 = 0;
  bVar1 = false;
LAB_71007478d8:
  if (puVar16 <= puVar15) {
    return -0x1100;
  }
  iVar12 = FUN_71007492f0(0,0,&local_a0,puVar15,(long)puVar16 - (long)puVar15);
  uVar20 = local_a0;
  if (iVar12 == -0x2c) {
    return -0x112c;
  }
  pcVar18 = (char *)FUN_710080e9e0(1,local_a0);
  if (pcVar18 == (char *)0x0) {
    return -0x1180;
  }
  iVar12 = FUN_71007492f0(pcVar18,uVar20,&local_a0,puVar15,(long)puVar16 - (long)puVar15);
  uVar20 = local_a0;
  if (iVar12 != 0) {
    FUN_710073b460(pcVar18,local_a0);
    FUN_710081c200(pcVar18);
    return iVar12 + -0x1100;
  }
  if (!bVar1) goto LAB_7100747990;
  if (param_5 == 0) {
    FUN_710073b460(pcVar18,local_a0);
    FUN_710081c200(pcVar18);
    return -0x1300;
  }
  if (iVar13 == 0x25) {
    iVar13 = FUN_7100747620(&local_90,pcVar18,local_a0,param_5,param_6);
LAB_7100747ae0:
    if (iVar13 != 0) {
LAB_7100747b94:
      FUN_710081c200(pcVar18);
      return iVar13;
    }
  }
  else {
    if (iVar13 == 0x21) {
      FUN_710072e960(auStack_80);
      iVar13 = FUN_71007474a0(auStack_98,8,&local_90,param_5,param_6);
      if ((iVar13 != 0) || (iVar13 = FUN_710072ee60(auStack_80,auStack_98), iVar13 != 0)) {
        FUN_710072e980(auStack_80);
        FUN_710073b460(auStack_98,8);
        goto LAB_7100747b94;
      }
      iVar13 = FUN_710072f200(auStack_80,0,uVar20,&local_90,pcVar18,pcVar18);
      FUN_710072e980(auStack_80);
      FUN_710073b460(auStack_98,8);
      goto LAB_7100747ae0;
    }
    if (iVar13 == 5) {
      iVar13 = FUN_71007476f0(&local_90,0x10,pcVar18,local_a0,param_5,param_6);
      goto LAB_7100747ae0;
    }
    if (iVar13 == 6) {
      iVar13 = FUN_71007476f0(&local_90,0x18,pcVar18,local_a0,param_5,param_6);
      goto LAB_7100747ae0;
    }
    if (iVar13 == 7) {
      iVar13 = FUN_71007476f0(&local_90,0x20,pcVar18,local_a0,param_5,param_6);
      goto LAB_7100747ae0;
    }
  }
  if (((local_a0 < 3) || (*pcVar18 != '0')) || (0x83 < (byte)pcVar18[1])) {
    FUN_710073b460(pcVar18,local_a0);
    FUN_710081c200(pcVar18);
    return -0x1380;
  }
LAB_7100747990:
  *param_1 = pcVar18;
  param_1[1] = local_a0;
  return 0;
LAB_7100747f24:
  uVar20 = uVar20 + 1;
  uVar21 = (uint)(byte)pcVar18[uVar20];
  *(byte *)((long)&local_90 + uVar9) = *(byte *)((long)&local_90 + uVar9) | (byte)(uVar14 << 4);
  uVar14 = uVar21 - 0x30;
  bVar11 = (byte)uVar14;
  if (9 < (uVar14 & 0xff)) goto LAB_7100747ef8;
  goto joined_r0x007100747f20;
}



// ===== FUN_7100748180 @ 7100748180 (size=68) =====

void FUN_7100748180(long *param_1)

{
  if (*param_1 != 0) {
    FUN_710073b460(*param_1,param_1[1]);
    FUN_710081c200(*param_1);
  }
  FUN_710081c200(param_1[2]);
  FUN_710073b460(param_1,0x18);
  return;
}



// ===== FUN_71007481d0 @ 71007481d0 (size=1052) =====

ulong FUN_71007481d0(long param_1,ulong param_2,long param_3,ulong param_4,long param_5,
                    ulong param_6,undefined4 param_7,undefined1 param_8,int param_9)

{
  bool bVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong uVar17;
  long local_278;
  undefined1 auStack_258 [24];
  undefined1 auStack_240 [64];
  undefined1 auStack_200 [127];
  byte abStack_181 [128];
  byte abStack_101 [128];
  byte abStack_81 [129];
  
  if ((param_4 < 0x41 && param_6 < 0x41) && param_2 < 0x81) {
    bVar6 = param_4 != 0;
    if ((param_3 == 0 && bVar6) || (bVar7 = param_6 != 0, param_5 == 0 && bVar7)) {
      uVar11 = 0xffffe080;
    }
    else {
      lVar10 = FUN_7100737ec0(param_7);
      if (lVar10 == 0) {
        uVar11 = 0xffffe100;
      }
      else {
        FUN_7100737f50(auStack_258);
        uVar11 = FUN_7100738050(auStack_258,lVar10,0);
        if ((int)uVar11 == 0) {
          uVar12 = FUN_7100738660(lVar10);
          uVar12 = uVar12 & 0xff;
          uVar11 = 0x80;
          if (uVar12 < 0x21) {
            uVar11 = 0x40;
          }
          bVar1 = param_5 != 0 && bVar7;
          FUN_7100808340(auStack_200,param_8,uVar11);
          pbVar2 = abStack_181 + 1;
          uVar17 = uVar11;
          pbVar16 = pbVar2;
          if (bVar1) {
            do {
              uVar5 = param_6;
              if (uVar17 < param_6) {
                uVar5 = uVar17;
              }
              lVar13 = FUN_710080f900(pbVar16,param_5,uVar5);
              uVar17 = uVar17 - uVar5;
              pbVar16 = (byte *)(lVar13 + uVar5);
            } while (uVar17 != 0);
          }
          bVar8 = param_3 != 0;
          pbVar16 = abStack_101 + 1;
          pbVar15 = pbVar16;
          uVar17 = uVar11;
          if (bVar8 && bVar6) {
            do {
              uVar5 = param_4;
              if (uVar17 < param_4) {
                uVar5 = uVar17;
              }
              lVar13 = FUN_710080f900(pbVar15,param_3,uVar5);
              uVar17 = uVar17 - uVar5;
              pbVar15 = (byte *)(lVar13 + uVar5);
            } while (uVar17 != 0);
          }
          if (param_2 == 0) {
LAB_71007485d0:
            uVar9 = 0;
          }
          else {
            local_278 = param_1;
            while ((((uVar9 = FUN_71007381a0(auStack_258), uVar9 == 0 &&
                     (uVar9 = FUN_7100738240(auStack_258,auStack_200,uVar11), uVar9 == 0)) &&
                    ((param_5 == 0 || !bVar7 ||
                     (uVar9 = FUN_7100738240(auStack_258,pbVar2,uVar11), uVar9 == 0)))) &&
                   (((!bVar8 || !bVar6 ||
                     (uVar9 = FUN_7100738240(auStack_258,pbVar16,uVar11), uVar9 == 0)) &&
                    (uVar9 = FUN_71007382b0(auStack_258,auStack_240), uVar9 == 0))))) {
              if (1 < (ulong)(long)param_9) {
                uVar17 = 1;
                do {
                  uVar9 = FUN_7100738320(lVar10,auStack_240,uVar12,auStack_240);
                  uVar17 = uVar17 + 1;
                  if (uVar9 != 0) goto LAB_71007483c8;
                } while (uVar17 != (long)param_9);
              }
              uVar17 = uVar12;
              if (param_2 < uVar12) {
                uVar17 = param_2;
              }
              FUN_710080f900(local_278,auStack_240,uVar17);
              local_278 = local_278 + uVar17;
              param_2 = param_2 - uVar17;
              pbVar15 = abStack_81 + 1;
              uVar17 = uVar11;
              uVar5 = uVar12;
              if (param_2 == 0) goto LAB_71007485d0;
              while (uVar14 = uVar11, uVar5 != 0) {
                uVar5 = uVar12;
                if (uVar17 < uVar12) {
                  uVar5 = uVar17;
                }
                lVar13 = FUN_710080f900(pbVar15,auStack_240,uVar5);
                uVar17 = uVar17 - uVar5;
                pbVar15 = (byte *)(lVar13 + uVar5);
                uVar5 = uVar17;
              }
              do {
                uVar17 = uVar14 - 1;
                bVar4 = abStack_81[uVar14];
                abStack_81[uVar14] = bVar4 + 1;
                if ((byte)(bVar4 + 1) != 0) break;
                uVar14 = uVar17;
              } while (uVar17 != 0);
              if (bVar1) {
                uVar9 = 0;
                uVar17 = uVar11;
                do {
                  uVar5 = uVar17 - 1;
                  uVar3 = (uint)abStack_181[uVar17] + (uint)abStack_81[uVar17] + uVar9;
                  uVar9 = uVar3 >> 8;
                  abStack_181[uVar17] = (byte)uVar3;
                  uVar17 = uVar5;
                } while (uVar5 != 0);
              }
              if (bVar8 && bVar6) {
                uVar9 = 0;
                uVar17 = uVar11;
                do {
                  uVar5 = uVar17 - 1;
                  uVar3 = (uint)abStack_101[uVar17] + (uint)abStack_81[uVar17] + uVar9;
                  uVar9 = uVar3 >> 8;
                  abStack_101[uVar17] = (byte)uVar3;
                  uVar17 = uVar5;
                } while (uVar5 != 0);
              }
            }
          }
LAB_71007483c8:
          FUN_710073b460(pbVar2,0x80);
          FUN_710073b460(pbVar16,0x80);
          FUN_710073b460(abStack_81 + 1,0x80);
          FUN_710073b460(auStack_240,0x40);
          FUN_7100737f60(auStack_258);
          return (ulong)uVar9;
        }
      }
    }
  }
  else {
    uVar11 = 0xffffe080;
  }
  return uVar11;
}



// ===== FUN_71007485f0 @ 71007485f0 (size=412) =====

ulong FUN_71007485f0(int *param_1,undefined4 param_2,long param_3,ulong param_4,undefined8 param_5,
                    undefined8 param_6,long param_7,long param_8)

{
  ulong uVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined4 local_12c;
  undefined8 local_128;
  long local_120;
  long local_118;
  undefined1 uStack_110;
  undefined1 local_10f [271];
  
  local_12c = 0;
  if (0x80 < param_4) {
    return 0xffffe080;
  }
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  FUN_7100808340(&uStack_110,0,0x102);
  lVar5 = *(long *)(param_1 + 4) + *(long *)(param_1 + 2);
  if (*param_1 != 0x30) {
    return 0xffffe11e;
  }
  iVar3 = FUN_7100745050(param_1 + 4,lVar5,&local_120,4);
  if (iVar3 == 0) {
    local_118 = *(long *)(param_1 + 4);
    *(long *)(param_1 + 4) = local_118 + local_120;
    iVar3 = FUN_7100745160(param_1 + 4,lVar5,&local_12c);
    if (iVar3 == 0) {
      if (lVar5 != *(long *)(param_1 + 4)) {
        return 0xffffe11a;
      }
      goto LAB_7100748694;
    }
  }
  if (iVar3 - 0x1e80U != 0) {
    return (ulong)(iVar3 - 0x1e80U);
  }
LAB_7100748694:
  uVar4 = 0;
  if (param_4 != 0) {
    do {
      puVar2 = (undefined1 *)(param_3 + uVar4);
      uVar1 = uVar4 & 0xffffffff;
      uVar4 = uVar4 + 1;
      local_10f[uVar1 * 2] = *puVar2;
    } while (param_4 != uVar4);
  }
  lVar5 = (ulong)((int)param_4 + 1) << 1;
  uVar4 = FUN_71007481d0(param_5,param_6,&uStack_110,lVar5,local_118,local_120,param_2,1,local_12c);
  if (((int)uVar4 == 0) && (param_7 != 0 && param_8 != 0)) {
    uVar4 = FUN_71007481d0(param_7,param_8,&uStack_110,lVar5,local_118,local_120,param_2,2,local_12c
                          );
  }
  return uVar4;
}



// ===== FUN_7100748790 @ 7100748790 (size=196) =====

int FUN_7100748790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [264];
  
  FUN_7100744e00(auStack_108);
  iVar1 = FUN_71007485f0(param_1,4,param_3,param_4,auStack_118,0x10,0,0);
  if (iVar1 == 0) {
    FUN_7100744e20(auStack_108,auStack_118,0x10);
    iVar1 = FUN_7100744ed0(auStack_108,param_6,param_5,param_7);
    FUN_710073b460(auStack_118,0x10);
    FUN_7100744e10(auStack_108);
  }
  return iVar1;
}



// ===== FUN_7100748860 @ 7100748860 (size=452) =====

int FUN_7100748860(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long local_90;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [88];
  
  local_90 = 0;
  if (param_5 == 0 && param_6 != 0) {
    iVar2 = -0x1f80;
  }
  else {
    lVar3 = FUN_710072c820(param_3);
    if (lVar3 == 0) {
      iVar2 = -0x1f00;
    }
    else {
      uVar1 = *(uint *)(lVar3 + 8);
      iVar2 = FUN_71007485f0(param_1,param_4,param_5,param_6,auStack_78,uVar1 >> 3,auStack_88,
                             *(undefined4 *)(lVar3 + 0x18));
      if (iVar2 == 0) {
        FUN_710072c8a0(auStack_58);
        iVar2 = FUN_710072d0d0(auStack_58,lVar3);
        if ((((iVar2 == 0) &&
             (iVar2 = FUN_710072c910(auStack_58,auStack_78,uVar1 & 0xfffffff8,param_2), iVar2 == 0))
            && (iVar2 = FUN_710072c980(auStack_58,auStack_88,*(undefined4 *)(lVar3 + 0x18)),
               iVar2 == 0)) && (iVar2 = FUN_710072ca50(auStack_58), iVar2 == 0)) {
          iVar2 = FUN_710072ca70(auStack_58,param_7,param_8,param_9,&local_90);
          if ((iVar2 == 0) &&
             (iVar2 = FUN_710072ce80(auStack_58,param_9 + local_90,&local_90), iVar2 != 0)) {
            iVar2 = -0x1e00;
          }
        }
        FUN_710073b460(auStack_78,0x20);
        FUN_710073b460(auStack_88,0x10);
        FUN_710072c8c0(auStack_58);
        return iVar2;
      }
    }
  }
  return iVar2;
}



// ===== FUN_7100748a30 @ 7100748a30 (size=508) =====

int FUN_7100748a30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6,uint param_7,long param_8)

{
  char cVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  uint uVar12;
  long local_a0;
  undefined2 auStack_8c [2];
  undefined2 local_88;
  undefined1 local_86;
  undefined1 local_85;
  byte abStack_81 [64];
  byte abStack_41 [65];
  
  uVar6 = FUN_7100738660(*param_1);
  local_88 = 0;
  uVar6 = uVar6 & 0xff;
  local_86 = 0;
  local_85 = 1;
  iVar7 = FUN_71007383b0(param_1,param_2,param_3);
  if (iVar7 == 0) {
    iVar8 = iVar7;
    if (param_7 != 0) {
      pbVar2 = abStack_41 + 1;
      pbVar3 = abStack_81 + 1;
      local_a0 = param_8;
      do {
        iVar8 = FUN_7100738510(param_1,param_4,param_5);
        if ((((iVar8 != 0) || (iVar8 = FUN_7100738510(param_1,&local_88,4), iVar8 != 0)) ||
            (iVar8 = FUN_7100738530(param_1,pbVar2), iVar8 != 0)) ||
           (iVar8 = FUN_71007385f0(param_1), iVar8 != 0)) break;
        FUN_710080f900(pbVar3,pbVar2,uVar6);
        if (1 < param_6) {
          uVar12 = 1;
          do {
            iVar8 = FUN_7100738510(param_1,pbVar3,uVar6);
            if (((iVar8 != 0) || (iVar8 = FUN_7100738530(param_1,pbVar3), iVar8 != 0)) ||
               (iVar8 = FUN_71007385f0(param_1), iVar8 != 0)) goto LAB_7100748be8;
            if (uVar6 != 0) {
              uVar9 = 1;
              do {
                uVar4 = uVar9 + 1;
                abStack_41[uVar9] = abStack_41[uVar9] ^ abStack_81[uVar9];
                uVar9 = uVar4;
              } while (uVar4 != uVar6 + 1);
            }
            uVar12 = uVar12 + 1;
          } while (param_6 != uVar12);
        }
        uVar12 = uVar6;
        if (param_7 < uVar6) {
          uVar12 = param_7;
        }
        uVar5 = uVar6;
        if (param_7 < uVar6) {
          uVar5 = param_7;
        }
        FUN_710080f900(local_a0,pbVar2,(ulong)uVar12);
        local_a0 = local_a0 + (ulong)uVar12;
        param_7 = param_7 - uVar5;
        puVar10 = &local_88;
        do {
          puVar11 = (undefined2 *)((long)puVar10 + -1);
          cVar1 = *(char *)((long)puVar10 + 3) + '\x01';
          *(char *)((long)puVar10 + 3) = cVar1;
          if (cVar1 != '\0') break;
          puVar10 = puVar11;
        } while (auStack_8c != puVar11);
        iVar8 = iVar7;
      } while (param_7 != 0);
    }
LAB_7100748be8:
    iVar7 = iVar8;
    FUN_710073b460(abStack_41 + 1,0x40);
    FUN_710073b460(abStack_81 + 1,0x40);
  }
  return iVar7;
}



// ===== FUN_7100748c30 @ 7100748c30 (size=920) =====

/* WARNING: Type propagation algorithm not settling */

int FUN_7100748c30(int *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 local_148;
  uint local_144;
  undefined4 local_140;
  undefined4 local_13c;
  long local_138 [2];
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined1 auStack_110 [24];
  int local_f8 [2];
  long local_f0;
  long lStack_e8;
  int local_e0 [2];
  ulong local_d8;
  undefined8 uStack_d0;
  long local_c0;
  long local_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [32];
  long local_78 [4];
  undefined1 auStack_58 [88];
  
  local_148 = 0;
  local_144 = 0;
  local_140 = 4;
  local_138[1] = 0;
  local_138[0] = *(long *)(param_1 + 4);
  lVar3 = local_138[0] + *(long *)(param_1 + 2);
  if (*param_1 != 0x30) {
    return -0x2f62;
  }
  iVar1 = FUN_7100745220(local_138,lVar3,auStack_128,local_f8);
  if (iVar1 != 0) goto LAB_7100748d00;
  if (local_120 != 9) {
    return -0x2e80;
  }
  if (*local_118 != 0x5010df78648862a) {
    return -0x2e80;
  }
  if ((char)local_118[1] != '\f') {
    return -0x2e80;
  }
  local_78[0] = lStack_e8;
  lVar2 = lStack_e8 + local_f0;
  if (local_f8[0] != 0x30) {
    return -0x2f62;
  }
  iVar1 = FUN_7100745050(local_78,lVar2,&local_c0,4);
  if (iVar1 == 0) {
    local_b8 = local_78[0];
    local_78[0] = local_78[0] + local_c0;
    iVar1 = FUN_7100745160(local_78,lVar2,&local_148);
    if (iVar1 != 0) goto LAB_7100748dd8;
    if (lVar2 != local_78[0]) {
      iVar1 = FUN_7100745160(local_78,lVar2,&local_144);
      if (iVar1 != 0 && iVar1 != -0x62) goto LAB_7100748dd8;
      if (lVar2 != local_78[0]) {
        iVar1 = FUN_7100745330(local_78,lVar2);
        if (iVar1 != 0) goto LAB_7100748dd8;
        iVar1 = FUN_7100747360(auStack_58,&local_140);
        if (iVar1 != 0) {
          return -0x2e80;
        }
        if (lVar2 != local_78[0]) {
          return -0x2f66;
        }
      }
    }
  }
  else {
LAB_7100748dd8:
    if (iVar1 + -0x2f00 != 0) {
      return iVar1 + -0x2f00;
    }
  }
  lVar2 = FUN_7100737ec0(local_140);
  if (lVar2 != 0) {
    iVar1 = FUN_7100745220(local_138,lVar3,auStack_110,local_e0);
    if (iVar1 != 0) {
LAB_7100748d00:
      return iVar1 + -0x2f00;
    }
    iVar1 = FUN_7100747280(auStack_110,&local_13c);
    if ((iVar1 == 0) && (lVar3 = FUN_710072c820(local_13c), lVar3 != 0)) {
      local_144 = *(uint *)(lVar3 + 8) >> 3;
      if ((local_e0[0] == 4) && (local_d8 == *(uint *)(lVar3 + 0x18))) {
        FUN_7100737f50(auStack_b0);
        FUN_710072c8a0();
        FUN_710080f900(local_78,uStack_d0,local_d8);
        iVar1 = FUN_7100738050(auStack_b0,lVar2,1);
        if (iVar1 == 0) {
          iVar1 = FUN_7100748a30(auStack_b0,param_3,param_4,local_b8,local_c0,local_148,local_144,
                                 auStack_98);
          if ((((iVar1 == 0) && (iVar1 = FUN_710072d0d0(auStack_58,lVar3), iVar1 == 0)) &&
              (iVar1 = FUN_710072c910(auStack_58,auStack_98,local_144 << 3,param_2), iVar1 == 0)) &&
             (iVar1 = FUN_710072d140(auStack_58,local_78,local_d8,param_5,param_6,param_7,
                                     local_138 + 1), iVar1 != 0)) {
            iVar1 = -0x2e00;
          }
        }
        FUN_7100737f60(auStack_b0);
        FUN_710072c8c0(auStack_58);
        return iVar1;
      }
      return -0x2f00;
    }
  }
  return -0x2e80;
}



// ===== FUN_7100748fd0 @ 7100748fd0 (size=484) =====

void FUN_7100748fd0(uint *param_1,long param_2,byte *param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  
  uVar13 = param_1[2];
  uVar14 = param_1[3];
  uVar18 = param_1[1];
  uVar5 = uVar13 + (uVar13 >> 2);
  uVar6 = uVar14 + (uVar14 >> 2);
  uVar21 = param_1[8];
  uVar24 = param_1[9];
  uVar7 = uVar18 + (uVar18 >> 2);
  uVar22 = (ulong)*param_1;
  uVar23 = (ulong)uVar18;
  uVar19 = param_1[10];
  uVar20 = param_1[0xb];
  uVar18 = param_1[0xc];
  pbVar17 = param_3;
  do {
    pbVar4 = pbVar17 + 0x10;
    uVar15 = (uint)pbVar17[2] << 0x10 | (uint)pbVar17[1] << 8;
    uVar16 = (uint)*pbVar17 | (uint)pbVar17[3] << 0x18;
    uVar8 = (uVar15 | uVar16) + uVar21;
    uVar1 = (ulong)((uint)pbVar17[6] << 0x10 | (uint)pbVar17[5] << 8 |
                   (uint)pbVar17[4] | (uint)pbVar17[7] << 0x18) +
            ((ulong)(uVar15 | uVar16) + (ulong)uVar21 >> 0x20) + (ulong)uVar24;
    uVar2 = (ulong)((uint)pbVar17[10] << 0x10 | (uint)pbVar17[9] << 8 |
                   (uint)pbVar17[8] | (uint)pbVar17[0xb] << 0x18) + (uVar1 >> 0x20) + (ulong)uVar19;
    uVar3 = (ulong)((uint)pbVar17[0xe] << 0x10 | (uint)pbVar17[0xd] << 8 |
                   (uint)pbVar17[0xc] | (uint)pbVar17[0xf] << 0x18) + (uVar2 >> 0x20) +
            (ulong)uVar20;
    uVar18 = param_4 + (int)(uVar3 >> 0x20) + uVar18;
    uVar9 = uVar8 * uVar22 + (uVar1 & 0xffffffff) * (ulong)uVar6 +
            (uVar2 & 0xffffffff) * (ulong)uVar5 + (uVar3 & 0xffffffff) * (ulong)uVar7;
    uVar10 = (uVar2 & 0xffffffff) * (ulong)uVar6 + (uVar3 & 0xffffffff) * (ulong)uVar5 +
             (ulong)uVar18 * (ulong)uVar7 +
             uVar8 * uVar23 + (uVar1 & 0xffffffff) * uVar22 + (uVar9 >> 0x20);
    uVar11 = (ulong)uVar8 * (ulong)uVar13 + (uVar1 & 0xffffffff) * uVar23 +
             (ulong)uVar18 * (ulong)uVar5 +
             (uVar2 & 0xffffffff) * uVar22 + (uVar3 & 0xffffffff) * (ulong)uVar6 + (uVar10 >> 0x20);
    uVar2 = (uVar1 & 0xffffffff) * (ulong)uVar13 + (ulong)uVar8 * (ulong)uVar14 +
            (ulong)uVar18 * (ulong)uVar6 +
            (uVar3 & 0xffffffff) * uVar22 + (uVar2 & 0xffffffff) * uVar23 + (uVar11 >> 0x20);
    uVar18 = (int)(uVar2 >> 0x20) + *param_1 * uVar18;
    uVar1 = (ulong)(uVar18 >> 2) + ((ulong)uVar18 & 0xfffffffc) + (uVar9 & 0xffffffff);
    uVar3 = (uVar10 & 0xffffffff) + (uVar1 >> 0x20);
    uVar21 = (uint)uVar1;
    uVar1 = (uVar11 & 0xffffffff) + (uVar3 >> 0x20);
    uVar24 = (uint)uVar3;
    lVar12 = (uVar2 & 0xffffffff) + (uVar1 >> 0x20);
    uVar19 = (uint)uVar1;
    uVar18 = (uVar18 & 3) + (int)((ulong)lVar12 >> 0x20);
    uVar20 = (uint)lVar12;
    pbVar17 = pbVar4;
  } while (pbVar4 != param_3 + param_2 * 0x10);
  param_1[8] = uVar21;
  param_1[9] = uVar24;
  param_1[10] = uVar19;
  param_1[0xb] = uVar20;
  param_1[0xc] = uVar18;
  return;
}



// ===== FUN_71007491c0 @ 71007491c0 (size=8) =====

void FUN_71007491c0(undefined8 param_1)

{
  FUN_710073b460(param_1,0x50);
  return;
}



// ===== FUN_71007491d0 @ 71007491d0 (size=16) =====

void FUN_71007491d0(long param_1)

{
  if (param_1 != 0) {
    FUN_710073b460(param_1,0x50);
    return;
  }
  return;
}



// ===== FUN_71007491e0 @ 71007491e0 (size=272) =====

undefined8 FUN_71007491e0(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_3 == 0) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 == 0) {
    if (param_3 < 0x10) goto LAB_710074925c;
    uVar4 = 0;
    lVar3 = param_2;
LAB_71007492d0:
    uVar2 = param_3 >> 4;
    uVar4 = (param_3 & 0xfffffffffffffff0) + uVar4;
    param_3 = param_3 & 0xf;
    FUN_7100748fd0(param_1,uVar2,lVar3,1);
  }
  else {
    uVar4 = 0x10 - lVar3;
    lVar1 = param_1 + lVar3 + 0x34;
    if (param_3 < uVar4) {
      FUN_710080f900(lVar1);
      *(ulong *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + param_3;
      return 0;
    }
    FUN_710080f900(lVar1,param_2,uVar4);
    *(undefined8 *)(param_1 + 0x48) = 0;
    param_3 = param_3 + lVar3 + -0x10;
    FUN_7100748fd0(param_1,1,param_1 + 0x34,1);
    lVar3 = param_2 + uVar4;
    if (0xf < param_3) goto LAB_71007492d0;
  }
  if (param_3 == 0) {
    return 0;
  }
  param_2 = param_2 + uVar4;
LAB_710074925c:
  *(ulong *)(param_1 + 0x48) = param_3;
  FUN_710080f900(param_1 + 0x34,param_2,param_3);
  return 0;
}



// ===== FUN_71007492f0 @ 71007492f0 (size=604) =====

undefined8
FUN_71007492f0(undefined1 *param_1,ulong param_2,ulong *param_3,byte *param_4,ulong param_5)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  
  if (param_5 != 0) {
    uVar13 = 0;
    uVar11 = 0;
    uVar8 = 0;
    do {
      bVar3 = false;
      bVar4 = false;
      uVar9 = param_5;
      if (uVar8 < param_5) {
        while (bVar3 = bVar4, param_4[uVar8] == 0x20) {
          uVar8 = uVar8 + 1;
          bVar4 = true;
          if (param_5 == uVar8) goto LAB_71007493b8;
        }
      }
      if (param_5 == uVar8) break;
      bVar2 = param_4[uVar8];
      if ((param_5 - uVar8 == 1) || (bVar2 != 0xd)) {
        if (bVar2 != 10) {
          if (bVar3) {
            return 0xffffffd4;
          }
          if ((char)bVar2 < '\0') {
            return 0xffffffd4;
          }
          if (bVar2 != 0x3d) goto LAB_7100749394;
          uVar6 = (int)uVar13 + 1;
          uVar13 = (ulong)uVar6;
          if (2 < uVar6) {
            return 0xffffffd4;
          }
          goto LAB_71007493a0;
        }
      }
      else if (param_4[uVar8 + 1] != 10) {
        if (bVar3) {
          return 0xffffffd4;
        }
LAB_7100749394:
        if (((int)uVar13 != 0) || (uVar6 = FUN_710072daf0(), (uVar6 >> 7 & 1) != 0)) {
          return 0xffffffd4;
        }
LAB_71007493a0:
        uVar11 = uVar11 + 1;
      }
      uVar8 = uVar8 + 1;
      uVar9 = uVar8;
    } while (uVar8 < param_5);
LAB_71007493b8:
    if (uVar11 != 0) {
      uVar8 = ((uVar11 >> 3) * 6 - uVar13) + ((uVar11 & 7) * 6 + 7 >> 3);
      if (param_1 == (undefined1 *)0x0 || param_2 < uVar8) {
        *param_3 = uVar8;
        return 0xffffffd6;
      }
      uVar6 = 0;
      iVar10 = 0;
      pbVar1 = param_4 + uVar9;
      uVar7 = 0;
      puVar12 = param_1;
      do {
        while( true ) {
          bVar2 = *param_4;
          if (0x20 < bVar2) break;
          if ((0x100002400U >> ((ulong)bVar2 & 0x3f) & 1) == 0) {
LAB_710074941c:
            cVar5 = FUN_710072daf0();
            uVar7 = uVar7 << 6 | (int)cVar5;
            goto joined_r0x007100749430;
          }
LAB_7100749434:
          param_4 = param_4 + 1;
          if (param_4 == pbVar1) goto LAB_710074948c;
        }
        if (bVar2 != 0x3d) goto LAB_710074941c;
        uVar6 = uVar6 + 1;
        uVar7 = uVar7 << 6;
joined_r0x007100749430:
        iVar10 = iVar10 + 1;
        if (iVar10 != 4) goto LAB_7100749434;
        *puVar12 = (char)(uVar7 >> 0x10);
        if (uVar6 < 2) {
          puVar12[1] = (char)(uVar7 >> 8);
          if (uVar6 == 0) {
            iVar10 = 0;
            puVar12[2] = (char)uVar7;
            puVar12 = puVar12 + 3;
          }
          else {
            puVar12 = puVar12 + 2;
            uVar6 = 1;
            iVar10 = 0;
          }
          goto LAB_7100749434;
        }
        param_4 = param_4 + 1;
        puVar12 = puVar12 + 1;
        iVar10 = 0;
      } while (param_4 != pbVar1);
LAB_710074948c:
      uVar8 = (long)puVar12 - (long)param_1;
      goto LAB_710074949c;
    }
  }
  uVar8 = 0;
LAB_710074949c:
  *param_3 = uVar8;
  return 0;
}



// ===== FUN_7100749550 @ 7100749550 (size=56) =====

void FUN_7100749550(undefined8 *param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = FUN_710076d0ec((long)param_1 + 4,param_1);
  *(undefined1 *)(param_1 + 1) = param_2;
  if (iVar1 != 0) {
    *param_1 = 0;
  }
  return;
}



// ===== FUN_7100749590 @ 7100749590 (size=12) =====

void FUN_7100749590(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = param_3;
  return;
}



// ===== FUN_71007495a0 @ 71007495a0 (size=52) =====

void FUN_71007495a0(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_14 [4];
  uint local_10 [2];
  undefined4 local_8;
  
  local_8 = *param_1;
  local_10[0] = (uint)*(byte *)(param_1 + 2);
  FUN_710074a9b0(auStack_14,local_10,1,param_2);
  return;
}



// ===== FUN_71007495e0 @ 71007495e0 (size=36) =====

undefined8 FUN_71007495e0(int *param_1)

{
  undefined8 uVar1;
  
  if (param_1[1] != 0) {
    uVar1 = FUN_710076d034(param_1[1]);
    return uVar1;
  }
  if (*param_1 == 0) {
    return 0x1159;
  }
  uVar1 = FUN_710076d068();
  return uVar1;
}



// ===== FUN_7100749610 @ 7100749610 (size=84) =====

void FUN_7100749610(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 0) {
    iVar1 = param_1[1];
  }
  else {
    FUN_710076d060();
    iVar1 = param_1[1];
  }
  if (iVar1 == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    return;
  }
  FUN_710076d060();
  param_1[0] = 0;
  param_1[1] = 0;
  return;
}



// ===== FUN_7100749670 @ 7100749670 (size=200) =====

void FUN_7100749670(uint *param_1)

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



// ===== FUN_7100749740 @ 7100749740 (size=104) =====

void FUN_7100749740(uint *param_1)

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



// ===== FUN_71007497b0 @ 71007497b0 (size=28) =====

bool FUN_71007497b0(uint *param_1)

{
  long lVar1;
  
  lVar1 = tpidrro_el0;
  return (*param_1 & 0xbfffffff) == *(uint *)(lVar1 + 0x1e4);
}



// ===== FUN_71007497d0 @ 71007497d0 (size=80) =====

void FUN_71007497d0(long param_1)

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



// ===== FUN_7100749820 @ 7100749820 (size=24) =====

void FUN_7100749820(long param_1)

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



// ===== FUN_7100749840 @ 7100749840 (size=1040) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100749840(byte *param_1,long param_2)

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
  int iVar11;
  ulong uVar12;
  int *piVar13;
  ulong *puVar14;
  uint uVar15;
  ulong uVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  uint local_c0;
  uint uStack_b8;
  uint local_b0;
  uint uStack_a8;
  uint local_a0;
  uint uStack_98;
  uint local_90;
  uint local_88;
  ulong local_80 [5];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  FUN_7100749670(0x7100d169d0);
  if ((DAT_7100d169d4 & 1) == 0) {
    puVar22 = &local_40;
    lVar21 = 0;
    do {
      iVar11 = FUN_710076d0d8(puVar22,0xb,0,lVar21);
      if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_71007697d0(0x4559);
      }
      lVar21 = lVar21 + 1;
      puVar22 = puVar22 + 1;
    } while (lVar21 != 4);
    uVar12 = FUN_7100769b60();
    if ((uVar12 & 1) != 0) {
      FUN_7100769b70(local_80);
      local_40 = local_40 ^ local_80[1];
      uStack_38 = uStack_38 ^ local_40;
      local_30 = local_30 ^ local_80[0];
      uStack_28 = uStack_28 ^ local_30;
    }
    _DAT_7100d16a10 = 0;
    _DAT_7100d16a18 = 0;
    _DAT_7100d169e0 = 0x3320646e61707865;
    _DAT_7100d169e8 = 0x6b20657479622d32;
    DAT_7100d169d4 = 1;
    _DAT_7100d169f0 = local_40;
    uRam0000007100d169f8 = uStack_38;
    uRam0000007100d16a08 = uStack_28;
    _DAT_7100d16a00 = local_30;
  }
  FUN_7100808340(param_1,0,param_2);
  if (param_2 != 0) {
    pbVar17 = param_1;
    while( true ) {
      iVar11 = 4;
      local_c0 = (uint)_DAT_7100d169e0;
      uStack_b8 = (uint)_DAT_7100d169e8;
      uVar20 = _DAT_7100d169e0 >> 0x20;
      uVar16 = _DAT_7100d169f0 >> 0x20;
      local_b0 = (uint)_DAT_7100d169f0;
      uVar12 = _DAT_7100d16a10 >> 0x20;
      uStack_a8 = (uint)uRam0000007100d169f8;
      uVar23 = _DAT_7100d16a00 >> 0x20;
      local_a0 = (uint)_DAT_7100d16a00;
      uStack_98 = (uint)uRam0000007100d16a08;
      local_90 = (uint)_DAT_7100d16a10;
      local_88 = (uint)_DAT_7100d16a18;
      uStack_8._4_4_ = (uint)((ulong)_DAT_7100d16a18 >> 0x20);
      uStack_38._4_4_ = (uint)((ulong)_DAT_7100d169e8 >> 0x20);
      uStack_28._4_4_ = (uint)(uRam0000007100d169f8 >> 0x20);
      uStack_18._4_4_ = (uint)(uRam0000007100d16a08 >> 0x20);
      uVar15 = local_90;
      do {
        uVar1 = (uint)uVar16 + (int)uVar20;
        uVar15 = local_b0 + local_c0 ^ uVar15;
        uVar2 = uVar1 ^ (uint)uVar12;
        local_88 = local_88 ^ uStack_a8 + uStack_b8;
        uStack_8._4_4_ = uStack_8._4_4_ ^ uStack_28._4_4_ + uStack_38._4_4_;
        uVar6 = uVar15 >> 0x10 | uVar15 << 0x10;
        uVar7 = uVar2 >> 0x10 | uVar2 << 0x10;
        uVar8 = local_88 >> 0x10 | local_88 << 0x10;
        uVar9 = uStack_8._4_4_ >> 0x10 | uStack_8._4_4_ << 0x10;
        local_a0 = uVar6 + local_a0;
        uVar2 = uVar7 + (int)uVar23;
        uStack_98 = uStack_98 + uVar8;
        uStack_18._4_4_ = uStack_18._4_4_ + uVar9;
        uVar15 = local_a0 ^ local_b0;
        uVar3 = uVar2 ^ (uint)uVar16;
        uVar4 = uStack_98 ^ uStack_a8;
        uVar5 = uStack_18._4_4_ ^ uStack_28._4_4_;
        uVar15 = uVar15 >> 0x14 | uVar15 << 0xc;
        uVar3 = uVar3 >> 0x14 | uVar3 << 0xc;
        uVar4 = uVar4 >> 0x14 | uVar4 << 0xc;
        uVar5 = uVar5 >> 0x14 | uVar5 << 0xc;
        local_c0 = local_b0 + local_c0 + uVar15;
        uVar1 = uVar1 + uVar3;
        uStack_b8 = uStack_a8 + uStack_b8 + uVar4;
        uStack_38._4_4_ = uStack_28._4_4_ + uStack_38._4_4_ + uVar5;
        uVar6 = uVar6 ^ local_c0;
        uVar7 = uVar7 ^ uVar1;
        uVar8 = uVar8 ^ uStack_b8;
        uVar9 = uVar9 ^ uStack_38._4_4_;
        uVar10 = uVar6 >> 0x18 | uVar6 << 8;
        uVar7 = uVar7 >> 0x18 | uVar7 << 8;
        uVar8 = uVar8 >> 0x18 | uVar8 << 8;
        uVar6 = uVar9 >> 0x18 | uVar9 << 8;
        local_a0 = local_a0 + uVar10;
        uVar2 = uVar2 + uVar7;
        uStack_98 = uStack_98 + uVar8;
        uStack_18._4_4_ = uStack_18._4_4_ + uVar6;
        uVar15 = uVar15 ^ local_a0;
        uVar3 = uVar3 ^ uVar2;
        uVar4 = uVar4 ^ uStack_98;
        uVar5 = uVar5 ^ uStack_18._4_4_;
        uVar9 = uVar15 >> 0x19 | uVar15 << 7;
        uVar15 = uVar3 >> 0x19 | uVar3 << 7;
        uVar3 = uVar4 >> 0x19 | uVar4 << 7;
        uVar4 = uVar5 >> 0x19 | uVar5 << 7;
        local_c0 = local_c0 + uVar15;
        uVar1 = uVar1 + uVar3;
        uStack_b8 = uStack_b8 + uVar4;
        uStack_38._4_4_ = uVar9 + uStack_38._4_4_;
        uVar6 = uVar6 ^ local_c0;
        uVar10 = uVar10 ^ uVar1;
        uVar7 = uVar7 ^ uStack_b8;
        uVar8 = uVar8 ^ uStack_38._4_4_;
        uVar5 = uVar6 >> 0x10 | uVar6 << 0x10;
        uVar6 = uVar10 >> 0x10 | uVar10 << 0x10;
        uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
        uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
        uStack_98 = uStack_98 + uVar5;
        uStack_18._4_4_ = uStack_18._4_4_ + uVar6;
        local_a0 = local_a0 + uVar7;
        uVar2 = uVar2 + uVar8;
        uVar15 = uVar15 ^ uStack_98;
        uVar3 = uVar3 ^ uStack_18._4_4_;
        uVar4 = uVar4 ^ local_a0;
        uVar9 = uVar9 ^ uVar2;
        uVar10 = uVar15 >> 0x14 | uVar15 << 0xc;
        uVar3 = uVar3 >> 0x14 | uVar3 << 0xc;
        uVar4 = uVar4 >> 0x14 | uVar4 << 0xc;
        uVar9 = uVar9 >> 0x14 | uVar9 << 0xc;
        local_c0 = local_c0 + uVar10;
        uVar1 = uVar1 + uVar3;
        uVar20 = (ulong)uVar1;
        uStack_b8 = uStack_b8 + uVar4;
        uStack_38._4_4_ = uStack_38._4_4_ + uVar9;
        uVar5 = uVar5 ^ local_c0;
        uVar6 = uVar6 ^ uVar1;
        uVar7 = uVar7 ^ uStack_b8;
        uVar8 = uVar8 ^ uStack_38._4_4_;
        uStack_8._4_4_ = uVar5 >> 0x18 | uVar5 << 8;
        uVar15 = uVar6 >> 0x18 | uVar6 << 8;
        uVar5 = uVar7 >> 0x18 | uVar7 << 8;
        uVar12 = (ulong)uVar5;
        local_88 = uVar8 >> 0x18 | uVar8 << 8;
        uStack_98 = uStack_98 + uStack_8._4_4_;
        uStack_18._4_4_ = uStack_18._4_4_ + uVar15;
        local_a0 = local_a0 + uVar5;
        uVar2 = uVar2 + local_88;
        uVar23 = (ulong)uVar2;
        uVar10 = uVar10 ^ uStack_98;
        uVar3 = uVar3 ^ uStack_18._4_4_;
        uVar4 = uVar4 ^ local_a0;
        uVar9 = uVar9 ^ uVar2;
        iVar11 = iVar11 + -1;
        uVar6 = uVar10 >> 0x19 | uVar10 << 7;
        uVar16 = (ulong)uVar6;
        uStack_a8 = uVar3 >> 0x19 | uVar3 << 7;
        uStack_28._4_4_ = uVar4 >> 0x19 | uVar4 << 7;
        local_b0 = uVar9 >> 0x19 | uVar9 << 7;
      } while (iVar11 != 0);
      uStack_28 = CONCAT44(uStack_28._4_4_,uStack_a8);
      uStack_8 = CONCAT44(uStack_8._4_4_,local_88);
      lVar21 = 0;
      local_40 = CONCAT44(uVar1,local_c0);
      uStack_38 = CONCAT44(uStack_38._4_4_,uStack_b8);
      local_30 = CONCAT44(uVar6,local_b0);
      local_20 = CONCAT44(uVar2,local_a0);
      uStack_18 = CONCAT44(uStack_18._4_4_,uStack_98);
      local_10 = CONCAT44(uVar5,uVar15);
      piVar13 = (int *)&local_40;
      do {
        puVar22 = (undefined8 *)(&DAT_7100d169e8 + lVar21);
        uVar24 = *(undefined8 *)(&DAT_7100d169e0 + lVar21);
        lVar21 = lVar21 + 0x10;
        *(ulong *)(piVar13 + 2) =
             CONCAT44(piVar13[3] + (int)((ulong)*puVar22 >> 0x20),piVar13[2] + (int)*puVar22);
        *(ulong *)piVar13 =
             CONCAT44(piVar13[1] + (int)((ulong)uVar24 >> 0x20),*piVar13 + (int)uVar24);
        piVar13 = piVar13 + 4;
      } while (lVar21 != 0x40);
      local_80[0] = local_40;
      local_80[1] = uStack_38;
      local_80[3] = uStack_28;
      local_80[2] = local_30;
      local_80[4] = local_20;
      uStack_58 = uStack_18;
      uStack_48 = uStack_8;
      uStack_50 = local_10;
      if (local_90 + 1 == 0) {
        _DAT_7100d16a14 = _DAT_7100d16a14 + 1;
      }
      _DAT_7100d16a10 = CONCAT44(_DAT_7100d16a14,local_90 + 1);
      if (pbVar17 == param_1 + (param_2 - 1U & 0xffffffffffffffc0)) break;
      lVar21 = 0;
      puVar14 = local_80;
      do {
        uVar25 = *(undefined8 *)(pbVar17 + lVar21 + 8);
        uVar24 = *(undefined8 *)(pbVar17 + lVar21);
        uVar16 = puVar14[1];
        uVar12 = *puVar14;
        *(ulong *)(pbVar17 + lVar21 + 8) =
             CONCAT17((byte)((ulong)uVar25 >> 0x38) ^ (byte)(uVar16 >> 0x38),
                      CONCAT16((byte)((ulong)uVar25 >> 0x30) ^ (byte)(uVar16 >> 0x30),
                               CONCAT15((byte)((ulong)uVar25 >> 0x28) ^ (byte)(uVar16 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar25 >> 0x20) ^
                                                 (byte)(uVar16 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar25 >> 0x18) ^
                                                          (byte)(uVar16 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar25 >> 0x10) ^
                                                                   (byte)(uVar16 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar25 >>
                                                                                  8) ^
                                                                            (byte)(uVar16 >> 8),
                                                                            (byte)uVar25 ^
                                                                            (byte)uVar16)))))));
        *(ulong *)(pbVar17 + lVar21) =
             CONCAT17((byte)((ulong)uVar24 >> 0x38) ^ (byte)(uVar12 >> 0x38),
                      CONCAT16((byte)((ulong)uVar24 >> 0x30) ^ (byte)(uVar12 >> 0x30),
                               CONCAT15((byte)((ulong)uVar24 >> 0x28) ^ (byte)(uVar12 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar24 >> 0x20) ^
                                                 (byte)(uVar12 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar24 >> 0x18) ^
                                                          (byte)(uVar12 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar24 >> 0x10) ^
                                                                   (byte)(uVar12 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar24 >>
                                                                                  8) ^
                                                                            (byte)(uVar12 >> 8),
                                                                            (byte)uVar24 ^
                                                                            (byte)uVar12)))))));
        lVar21 = lVar21 + 0x10;
        puVar14 = puVar14 + 2;
      } while (lVar21 != 0x40);
      pbVar17 = pbVar17 + 0x40;
    }
    pbVar18 = pbVar17;
    do {
      pbVar19 = pbVar18 + 1;
      *pbVar18 = pbVar18[(long)local_80 - (long)pbVar17] ^ *pbVar18;
      pbVar18 = pbVar19;
    } while (param_1 + param_2 != pbVar19);
  }
  FUN_7100749740(0x7100d169d0);
  return;
}



// ===== FUN_7100749c50 @ 7100749c50 (size=32) =====

undefined8 FUN_7100749c50(void)

{
  undefined8 local_8;
  
  FUN_7100749840(&local_8,8);
  return local_8;
}



// ===== FUN_7100749c70 @ 7100749c70 (size=176) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100749c70(void)

{
  long lVar1;
  undefined1 auStack_2c [4];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  _DAT_7100d16a90 = FUN_7100769a00();
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  local_8 = 0;
  FUN_710076cfe4(&local_28,auStack_2c);
  DAT_7100d16a94 = 0;
  _DAT_7100d16a98 = 0;
  _DAT_7100d16aa0 = local_28;
  _DAT_7100d16aa8 = local_20;
  FUN_7100749670(0x7100d16ad0);
  _DAT_7100d16ab0 = tpidrro_el0;
  _DAT_7100d16ac0 = &DAT_7100d16ac8;
  _DAT_7100d16ab0 = _DAT_7100d16ab0 + 0x180;
  _DAT_7100d16ab8 = (long)_DAT_7100d16ac8;
  if (_DAT_7100d16ac8 != (undefined1 *)0x0) {
    *(undefined1 **)((long)_DAT_7100d16ac8 + 0x30) = &DAT_7100d16ab8;
  }
  _DAT_7100d16ac8 = &DAT_7100d16a90;
  FUN_7100749740(0x7100d16ad0);
  lVar1 = tpidrro_el0;
  *(undefined1 **)(lVar1 + 0x1e8) = &DAT_7100d16a90;
  return;
}



// ===== FUN_7100749d20 @ 7100749d20 (size=844) =====

/* WARNING: Removing unreachable block (ram,0x00710074a018) */
/* WARNING: Removing unreachable block (ram,0x007100749da0) */

int FUN_7100749d20(undefined4 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  ulong param_5,undefined4 param_6,undefined4 param_7)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined4 local_4;
  
  iVar3 = 0x1759;
  if ((param_5 & 0xfff) == 0) {
    if (param_4 == 0) {
      param_4 = FUN_71007697a0(0x1000,param_5 + 0x2eda0);
      if (param_4 == 0) {
        return 0x559;
      }
      bVar2 = true;
    }
    else {
      if ((param_4 & 0xfff) != 0) {
        return 0x1759;
      }
      if (param_5 < 0x2edd1) {
        return 0x559;
      }
      param_5 = param_5 - 0x2eda0;
      bVar2 = false;
    }
    FUN_710074a8f0();
    uVar6 = param_5 + 0x2fd9f & 0xfffffffffffff000;
    lVar4 = FUN_710074a960(uVar6,0x4000);
    iVar3 = FUN_710076cfd4(lVar4,param_4,uVar6);
    FUN_710074a900();
    if (iVar3 == 0) {
      lVar1 = lVar4 + param_5;
      *param_1 = 0;
      *(bool *)(param_1 + 1) = bVar2;
      *(ulong *)(param_1 + 2) = param_4;
      *(long *)(param_1 + 4) = lVar4;
      *(ulong *)(param_1 + 6) = param_5 - 0x30;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 10) = 0;
      *(undefined8 *)(param_1 + 0xc) = 0;
      *(undefined4 **)(lVar1 + -0x30) = param_1;
      *(undefined8 *)(lVar1 + -0x28) = param_2;
      *(undefined8 *)(lVar1 + -0x20) = param_3;
      *(long *)(lVar1 + -0x18) = lVar1 + 0x2ec20;
      *(long *)(lVar1 + -0x10) = lVar1;
      iVar3 = FUN_710076d000(&local_4,FUN_710074a120,lVar1 + -0x30,lVar1 + -0x30,param_6,param_7);
      if (iVar3 == 0) {
        *param_1 = local_4;
        FUN_7100808340(*(undefined8 *)(lVar1 + -0x18),0,0x180);
        lVar4 = *(long *)(lVar1 + -0x18);
        *(undefined1 **)(lVar4 + 8) = &DAT_7100d22ca0;
        *(undefined1 **)(lVar4 + 0x10) = &DAT_7100d22d58;
        *(undefined1 **)(lVar4 + 0x18) = &DAT_7100d22e10;
        *(undefined8 *)(lVar4 + 0xd0) = 1;
        *(undefined2 *)(*(long *)(lVar1 + -0x18) + 0xd8) = 0x330e;
        *(undefined2 *)(*(long *)(lVar1 + -0x18) + 0xda) = 0xabcd;
        *(undefined2 *)(*(long *)(lVar1 + -0x18) + 0xdc) = 0x1234;
        *(undefined2 *)(*(long *)(lVar1 + -0x18) + 0xde) = 0xe66d;
        *(undefined2 *)(*(long *)(lVar1 + -0x18) + 0xe0) = 0xdeec;
        *(undefined2 *)(*(long *)(lVar1 + -0x18) + 0xe2) = 5;
        *(undefined2 *)(*(long *)(lVar1 + -0x18) + 0xe4) = 0xb;
        lVar4 = tpidrro_el0;
        lVar5 = *(long *)(lVar4 + 0x1f0);
        lVar4 = *(long *)(lVar1 + -0x18);
        *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar5 + 8);
        *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar5 + 0x10);
        *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar5 + 0x18);
        FUN_710080f900(*(undefined8 *)(lVar1 + -0x10),&DAT_7100af8290,8);
        FUN_7100808340(*(long *)(lVar1 + -0x10) + 8,0,0x2ec18);
        return 0;
      }
      FUN_710076cfdc(lVar4,param_4,uVar6);
    }
    if (bVar2) {
      thunk_FUN_710081c200(param_4);
      return iVar3;
    }
  }
  return iVar3;
}



// ===== FUN_710074a070 @ 710074a070 (size=164) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710074a070(void)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  
  uVar3 = _DAT_7100d16a80;
  lVar6 = tpidrro_el0;
  lVar6 = *(long *)(lVar6 + 0x1e8);
  if (lVar6 != 0) {
    uVar5 = 0;
    do {
      if ((uVar3 >> (uVar5 & 0x3f) & 1) != 0) {
        if (*(long *)(*(long *)(lVar6 + 0x20) + (uVar5 & 0xffffffff) * 8) != 0) {
          *(undefined8 *)(*(long *)(lVar6 + 0x20) + (uVar5 & 0xffffffff) * 8) = 0;
          pcVar4 = *(code **)(uVar5 * 8 + 0x7100d16a20);
          if (pcVar4 != (code *)0x0) {
            (*pcVar4)();
          }
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0xc);
    FUN_7100749670(0x7100d16ad0);
    lVar1 = *(long *)(lVar6 + 0x28);
    plVar2 = *(long **)(lVar6 + 0x30);
    *plVar2 = lVar1;
    if (lVar1 != 0) {
      *(long **)(lVar1 + 0x30) = plVar2;
    }
    *(undefined8 *)(lVar6 + 0x20) = 0;
    *(undefined8 *)(lVar6 + 0x28) = 0;
    *(undefined8 *)(lVar6 + 0x30) = 0;
    FUN_7100749740(0x7100d16ad0);
    FUN_710076d01c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_71007697d0(0x1159);
}



// ===== FUN_710074a120 @ 710074a120 (size=176) =====

/* WARNING: Removing unreachable block (ram,0x00710074a16c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710074a120(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  
  lVar2 = tpidrro_el0;
  puVar4 = (undefined4 *)*param_1;
  *(undefined4 *)(lVar2 + 0x1e0) = 0x21545624;
  lVar3 = param_1[3];
  *(undefined4 **)(lVar2 + 0x1e8) = puVar4;
  *(long *)(lVar2 + 0x1f0) = lVar3;
  *(long *)(lVar2 + 0x1f8) = param_1[4] + -0x10;
  *(undefined4 *)(lVar2 + 0x1e4) = *puVar4;
  FUN_7100749670(0x7100d16ad0);
  lVar3 = *param_1;
  *(undefined1 **)(lVar3 + 0x30) = &DAT_7100d16ac8;
  *(long *)(lVar3 + 0x20) = lVar2 + 0x180;
  *(long *)(lVar3 + 0x28) = _DAT_7100d16ac8;
  if (_DAT_7100d16ac8 != 0) {
    *(long *)(_DAT_7100d16ac8 + 0x30) = lVar3 + 0x28;
  }
  _DAT_7100d16ac8 = lVar3;
  FUN_7100749740(0x7100d16ad0);
  (*(code *)param_1[1])(param_1[2]);
  FUN_710074a070();
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x710074a1cc);
  (*pcVar1)();
}



// ===== FUN_710074a1d0 @ 710074a1d0 (size=8) =====

void FUN_710074a1d0(undefined4 *param_1)

{
  FUN_710076d014(*param_1);
  return;
}



// ===== FUN_710074a1e0 @ 710074a1e0 (size=44) =====

void FUN_710074a1e0(undefined4 *param_1)

{
  undefined4 local_8;
  undefined1 auStack_4 [4];
  
  local_8 = *param_1;
  FUN_710074af30(auStack_4,&local_8,1,0xffffffffffffffff);
  return;
}



// ===== FUN_710074a210 @ 710074a210 (size=164) =====

int FUN_710074a210(undefined4 *param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 8) != 0) {
    return 0x1759;
  }
  iVar1 = FUN_710076cfdc(*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 2),
                         *(long *)(param_1 + 6) + 0x2fdcfU & 0xfffffffffffff000);
  if (iVar1 == 0) {
    if ((*(byte *)(param_1 + 1) & 1) != 0) {
      thunk_FUN_710081c200(*(undefined8 *)(param_1 + 2));
    }
    FUN_710076d060(*param_1);
    iVar1 = 0;
  }
  return iVar1;
}



// ===== FUN_710074a2c0 @ 710074a2c0 (size=16) =====

undefined8 FUN_710074a2c0(int param_1)

{
  long lVar1;
  
  lVar1 = tpidrro_el0;
  return *(undefined8 *)(lVar1 + (long)param_1 * 8 + 0x180);
}



// ===== FUN_710074a2d0 @ 710074a2d0 (size=16) =====

void FUN_710074a2d0(int param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = tpidrro_el0;
  *(undefined8 *)(lVar1 + (long)param_1 * 8 + 0x180) = param_2;
  return;
}



// ===== FUN_710074a2e0 @ 710074a2e0 (size=216) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710074a2e0(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  uVar8 = _DAT_7100d16a80;
  do {
    uVar2 = ~(uint)uVar8;
    uVar3 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1;
    uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
    uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    iVar1 = 0;
    if (uVar2 != 0) {
      iVar1 = (int)LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10) + 1;
    }
    uVar2 = iVar1 - 1;
    uVar10 = (ulong)uVar2;
    if (0xb < uVar2) {
      return 0xffffffff;
    }
    do {
      uVar6 = _DAT_7100d16a80;
      bVar7 = _DAT_7100d16a80 != uVar8;
      if (bVar7) break;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(0x7100d16a80,0x10);
      if (bVar5) {
        cVar4 = ExclusiveMonitorsStatus();
        _DAT_7100d16a80 = 1L << (uVar10 & 0x3f) | uVar8;
      }
    } while (cVar4 != '\0');
    uVar8 = uVar6;
    if (!bVar7) {
      FUN_710074a2d0(uVar10,0);
      FUN_7100749670(0x7100d16ad0);
      if (_DAT_7100d16ac8 != 0) {
        lVar9 = _DAT_7100d16ac8;
        do {
          *(undefined8 *)(*(long *)(lVar9 + 0x20) + uVar10 * 8) = 0;
          lVar9 = *(long *)(lVar9 + 0x28);
        } while (lVar9 != 0);
      }
      FUN_7100749740(0x7100d16ad0);
      *(undefined8 *)((long)(int)uVar2 * 8 + 0x7100d16a20) = param_1;
      return uVar10;
    }
  } while( true );
}



// ===== FUN_710074a3c0 @ 710074a3c0 (size=68) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710074a3c0(ulong param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  bool bVar4;
  ulong uVar5;
  
  *(undefined8 *)((long)(int)param_1 * 8 + 0x7100d16a20) = 0;
  uVar5 = _DAT_7100d16a80;
  do {
    do {
      uVar3 = _DAT_7100d16a80;
      bVar4 = _DAT_7100d16a80 != uVar5;
      if (bVar4) break;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x7100d16a80,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        _DAT_7100d16a80 = uVar5 & (1L << (param_1 & 0x3f) ^ 0xffffffffffffffffU);
      }
    } while (cVar1 != '\0');
    uVar5 = uVar3;
    if (!bVar4) {
      return;
    }
  } while( true );
}



// ===== FUN_710074a420 @ 710074a420 (size=84) =====

undefined8 FUN_710074a420(long param_1)

{
  undefined8 uVar1;
  
  FUN_7100749670(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x21) & 1) != 0) {
    uVar1 = 0xec01;
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) goto LAB_710074a458;
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  uVar1 = 0;
LAB_710074a458:
  FUN_7100749740(param_1 + 0x18);
  return uVar1;
}



// ===== FUN_710074a480 @ 710074a480 (size=136) =====

byte FUN_710074a480(long param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  
  FUN_7100749670();
  bVar1 = *(byte *)(param_1 + 0x20) ^ 1;
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    lVar2 = param_2[2];
    param_2[1] = *(long *)(lVar2 + 0x10);
    *(long **)(lVar2 + 0x10) = param_2;
    *param_2 = lVar2 + 8;
  }
  else if ((*(byte *)(param_1 + 0x21) & 1) != 0) {
    *(undefined1 *)(param_1 + 0x20) = 0;
    FUN_7100749740(param_1 + 0x18);
    return bVar1;
  }
  FUN_7100749740(param_1 + 0x18);
  return bVar1;
}



// ===== FUN_710074a5c0 @ 710074a5c0 (size=100) =====

void FUN_710074a5c0(long *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long local_10;
  long lStack_8;
  
  iVar1 = FUN_710076d0d8(&local_10,param_2,0xffff8001,0);
  if ((iVar1 == 0) && (iVar1 = FUN_710076d0d8(&lStack_8,param_3,0xffff8001,0), iVar1 == 0)) {
    *param_1 = local_10;
    param_1[1] = lStack_8 + local_10;
    return;
  }
  return;
}



// ===== thunk_FUN_7100749c50 @ 710074a630 (size=4) =====

undefined8 thunk_FUN_7100749c50(void)

{
  undefined8 uStack_8;
  
  FUN_7100749840(&uStack_8,8);
  return uStack_8;
}



// ===== FUN_710074a640 @ 710074a640 (size=356) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_710074a640(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  undefined1 auStack_34 [4];
  long local_30;
  long lStack_28;
  int local_20;
  
  uVar6 = param_2 + 0xfffU & 0xfffffffffffff000;
  if (uVar6 <= (ulong)(param_1[1] - *param_1)) {
    uVar7 = param_3 + 0xfffU & 0xfffffffffffff000;
    uVar1 = ((param_1[1] - *param_1) - uVar6 >> 0xc) + 1;
    iVar8 = 0x200;
    do {
      do {
        uVar5 = thunk_FUN_7100749c50();
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = uVar5 / uVar1;
        }
        uVar2 = *param_1 + (uVar5 - uVar2 * uVar1) * 0x1000;
        uVar5 = uVar6 + uVar2;
      } while (((uVar2 < _DAT_7100d16b18) && (_DAT_7100d16b10 < uVar5)) ||
              ((uVar2 < _DAT_7100d16b08 && (_DAT_7100d16b00 < uVar5))));
      uVar9 = uVar2 - uVar7;
      iVar4 = FUN_710076cfe4(&local_30,auStack_34,uVar9);
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_71007697d0(0xd59);
      }
      uVar5 = uVar5 + uVar7;
      plVar3 = _DAT_7100d16ad8;
      if (local_20 == 0 && uVar5 <= (ulong)(local_30 + lStack_28)) {
        while( true ) {
          if (plVar3 == (long *)0x0) {
            return uVar2;
          }
          if ((uVar9 < (ulong)plVar3[3]) && ((ulong)plVar3[2] < uVar5)) break;
          plVar3 = (long *)*plVar3;
        }
      }
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return 0;
}



// ===== FUN_710074a7b0 @ 710074a7b0 (size=320) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710074a7b0(void)

{
  int iVar1;
  uint uVar2;
  long local_8;
  
  iVar1 = FUN_710074a5c0(&DAT_7100d16b10,2,3);
  if (iVar1 == 0) {
    iVar1 = FUN_710076d0d8(&local_8,0x1c,0xffff8001,0);
    if (iVar1 == 0) {
      _DAT_7100d16b18 = _DAT_7100d16b18 - local_8;
    }
    iVar1 = FUN_710074a5c0(&DAT_7100d16b00,4,5);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_71007697d0(0xb59);
    }
    iVar1 = FUN_710074a5c0(&DAT_7100d16af0,0xc,0xd);
    if (iVar1 == 0) {
      iVar1 = FUN_710074a5c0(&DAT_7100d16ae0,0xe,0xf);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_71007697d0(0x959);
      }
    }
    else {
      DAT_7100d16ad4 = 1;
      uVar2 = FUN_710076cfdc(0xffffffffffffe000,0xfffffe000,0x1000);
      if ((uVar2 & 0x3fffff) == 0xd401) {
        _DAT_7100d16af0 = 0x200000;
        _DAT_7100d16af8 = 0x100000000;
        _DAT_7100d16ae0 = 0x200000;
        _DAT_7100d16ae8 = 0x40000000;
        return;
      }
      if ((uVar2 & 0x3fffff) != 0xdc01) goto LAB_710074a8e0;
      _DAT_7100d16af0 = 0x8000000;
      _DAT_7100d16af8 = 0x1000000000;
      _DAT_7100d16ae0 = 0x8000000;
      _DAT_7100d16ae8 = 0x80000000;
    }
    return;
  }
LAB_710074a8e0:
                    /* WARNING: Subroutine does not return */
  FUN_71007697d0(0x4959);
}



// ===== FUN_710074a8f0 @ 710074a8f0 (size=12) =====

void FUN_710074a8f0(void)

{
  FUN_7100749670(0x7100d16b20);
  return;
}



// ===== FUN_710074a900 @ 710074a900 (size=12) =====

void FUN_710074a900(void)

{
  FUN_7100749740(0x7100d16b20);
  return;
}



// ===== FUN_710074a910 @ 710074a910 (size=80) =====

undefined8 FUN_710074a910(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_71007497b0(0x7100d16b20);
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_710074a640(&DAT_7100d16af0,param_1,param_2);
    return uVar2;
  }
  return 0;
}



// ===== FUN_710074a960 @ 710074a960 (size=80) =====

undefined8 FUN_710074a960(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_71007497b0(0x7100d16b20);
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_710074a640(&DAT_7100d16ae0,param_1,param_2);
    return uVar2;
  }
  return 0;
}



// ===== FUN_710074a9b0 @ 710074a9b0 (size=1404) =====

uint FUN_710074a9b0(uint *param_1,uint *param_2,uint param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  long *plVar15;
  ulong uVar16;
  undefined4 uVar17;
  ulong uVar18;
  uint *puVar19;
  long local_70;
  ulong local_58;
  ulong local_50;
  long *local_30;
  long local_18;
  uint local_c;
  ulong local_8;
  
  local_70 = 0;
  if (param_4 != -1) {
    local_70 = cntpct_el0;
    local_70 = local_70 + (ulong)(param_4 * 0xc) / 0x271;
  }
  uVar9 = (ulong)param_3;
  if (param_4 == -1) {
    if (param_3 < 0x41) goto LAB_710074ad2c;
  }
  else {
LAB_710074aa34:
    lVar10 = cntpct_el0;
    lVar10 = local_70 - lVar10;
    uVar6 = 0;
    if (lVar10 < 1) goto LAB_710074aa64;
    while( true ) {
      uVar6 = (ulong)(lVar10 * 0x271) / 0xc;
LAB_710074aa64:
      if (0x40 < param_3) break;
LAB_710074aa90:
      local_50 = uVar9 * 4 + 0xf;
      local_58 = uVar9 * 0x30 + 0xf;
      lVar10 = tpidrro_el0;
      uVar17 = *(undefined4 *)(lVar10 + 0x1e4);
      lVar10 = -(local_50 & 0x7fffffff0);
      puVar14 = &stack0xffffffffffffff20 + lVar10;
      local_18 = cntpct_el0;
      uVar12 = 0xffffffff;
      local_c = 0xffffffff;
      local_30 = (long *)(&stack0xffffffffffffff20 + -(local_58 & 0x7ffffffff0) + lVar10);
      uVar6 = (uVar6 * 0xc) / 0x271;
      puVar4 = &stack0xffffffffffffff20 + lVar10;
      plVar15 = (long *)(&stack0xffffffffffffff20 + -(local_58 & 0x7ffffffff0) + lVar10);
      if (uVar9 == 0) {
        uVar18 = 0;
        goto LAB_710074abdc;
      }
LAB_710074aaf0:
      local_30 = plVar15;
      puVar14 = puVar4;
      local_c = 0xffffffff;
      uVar12 = 0xffffffff;
      uVar16 = 0;
      uVar18 = 0;
      plVar15 = local_30;
      puVar19 = param_2;
      do {
        while (*puVar19 < 2) {
          *(uint *)(puVar14 + uVar16 * 4) = puVar19[2];
LAB_710074ab34:
          uVar16 = uVar16 + 1;
          puVar19 = puVar19 + 4;
          plVar15 = plVar15 + 6;
          if (uVar9 <= uVar16) goto LAB_710074abc4;
        }
        if (*puVar19 != 2) goto LAB_710074ab34;
        puVar7 = *(undefined8 **)(puVar19 + 2);
        *(undefined4 *)(plVar15 + 3) = uVar17;
        plVar15[4] = (long)&local_c;
        puVar11 = (undefined8 *)*puVar7;
        plVar15[2] = (long)puVar7;
        uVar5 = (uint)uVar16;
        *(uint *)(plVar15 + 5) = uVar5;
        local_8 = 0xffffffffffffffff;
        uVar8 = (*(code *)*puVar11)(puVar7,plVar15,local_18,&local_8);
        uVar3 = local_8;
        if ((uVar8 & 1) == 0) {
          uVar13 = 0;
          *param_1 = uVar5;
          uVar5 = 0;
          goto LAB_710074ac34;
        }
        puVar19 = puVar19 + 4;
        plVar15 = plVar15 + 6;
        *(undefined4 *)(puVar14 + uVar16 * 4) = uVar17;
        uVar8 = uVar3;
        if (uVar6 <= uVar3) {
          uVar8 = uVar6;
        }
        uVar1 = uVar16 & 0x3f;
        if (uVar6 > uVar3) {
          uVar12 = uVar5;
        }
        uVar16 = uVar16 + 1;
        uVar18 = uVar18 | 1L << uVar1;
        uVar6 = uVar8;
      } while (uVar16 < uVar9);
LAB_710074abc4:
      uVar16 = 0xffffffffffffffff;
      if (uVar6 != 0xffffffffffffffff) {
LAB_710074abdc:
        uVar16 = (uVar6 * 0x271) / 0xc;
      }
      uVar5 = FUN_710076d070(param_1,puVar14,param_3,uVar16);
      plVar15 = local_30;
      if (uVar5 != 0) goto LAB_710074ad98;
      while( true ) {
        if (param_2[(long)(int)*param_1 * 4] != 1) goto joined_r0x00710074ac28;
        uVar5 = FUN_710076d068(*(undefined4 *)(puVar14 + (long)(int)*param_1 * 4));
        uVar13 = uVar5 & 0x3fffff;
        if (uVar13 != 0xfa01) goto joined_r0x00710074ad04;
        uVar13 = 0xec01;
        uVar5 = 0xec01;
        if (uVar9 != 0) goto LAB_710074ac34;
        if (param_4 != -1) break;
LAB_710074ad2c:
        while( true ) {
          local_50 = uVar9 * 4 + 0xf;
          local_58 = uVar9 * 0x30 + 0xf;
          lVar10 = tpidrro_el0;
          uVar17 = *(undefined4 *)(lVar10 + 0x1e4);
          lVar10 = -(local_50 & 0x7fffffff0);
          puVar14 = &stack0xffffffffffffff20 + lVar10;
          local_18 = cntpct_el0;
          uVar6 = 0xffffffffffffffff;
          uVar12 = 0xffffffff;
          local_c = 0xffffffff;
          uVar18 = 0;
          lVar2 = -(local_58 & 0x7ffffffff0);
          local_30 = (long *)(&stack0xffffffffffffff20 + lVar2 + lVar10);
          puVar4 = &stack0xffffffffffffff20 + lVar10;
          plVar15 = (long *)(&stack0xffffffffffffff20 + lVar2 + lVar10);
          if (uVar9 != 0) goto LAB_710074aaf0;
          uVar5 = FUN_710076d070(param_1,&stack0xffffffffffffff20 + lVar10,param_3,
                                 0xffffffffffffffff);
          plVar15 = (long *)(&stack0xffffffffffffff20 + lVar2 + lVar10);
          if (uVar5 == 0) break;
LAB_710074ad98:
          local_30 = plVar15;
          uVar13 = uVar5 & 0x3fffff;
          if (uVar13 == 0xea01) {
            if (uVar12 == 0xffffffff) goto LAB_710074adb4;
            uVar5 = (**(code **)(**(long **)(param_2 + (ulong)uVar12 * 4 + 2) + 8))
                              (*(long **)(param_2 + (ulong)uVar12 * 4 + 2),uVar6 + local_18);
            if (uVar5 != 0) goto LAB_710074ae40;
            *param_1 = uVar12;
joined_r0x00710074ac28:
            if (uVar9 == 0) {
              return 0;
            }
            uVar13 = 0;
            uVar5 = 0;
LAB_710074ac34:
            uVar6 = 0;
            do {
              while ((uVar18 >> (uVar6 & 0x3f) & 1) == 0) {
                uVar6 = uVar6 + 1;
                local_30 = local_30 + 6;
                if (uVar9 <= uVar6) goto joined_r0x00710074ad18;
              }
              uVar6 = uVar6 + 1;
              FUN_7100749670(local_30[2] + 0x18);
              lVar10 = *local_30;
              plVar15 = (long *)local_30[1];
              *(long **)(lVar10 + 8) = plVar15;
              *plVar15 = lVar10;
              FUN_7100749740(local_30[2] + 0x18);
              local_30 = local_30 + 6;
            } while (uVar6 < uVar9);
joined_r0x00710074ad18:
            if (param_4 != -1) {
              if (uVar13 == 0xea01) {
                return uVar5;
              }
              if (uVar13 != 0xec01) {
                return uVar5;
              }
              lVar10 = cntpct_el0;
              if (local_70 - lVar10 < 1) goto LAB_710074aef0;
              uVar6 = (ulong)((local_70 - lVar10) * 0x271) / 0xc;
              goto LAB_710074aa90;
            }
            if (uVar13 != 0xec01) {
              return uVar5;
            }
          }
          else {
            if (uVar13 != 0xec01) {
LAB_710074adb4:
              if (uVar9 == 0) {
                return uVar5;
              }
              goto LAB_710074ac34;
            }
            if (local_c != 0xffffffff) {
              uVar5 = (**(code **)(**(long **)(param_2 + (long)(int)local_c * 4 + 2) + 0x10))();
              if (uVar5 == 0) {
                *param_1 = local_c;
                goto joined_r0x00710074ac28;
              }
LAB_710074ae40:
              uVar13 = uVar5 & 0x3fffff;
joined_r0x00710074ad04:
              if (uVar9 != 0) goto LAB_710074ac34;
              goto joined_r0x00710074ad18;
            }
            if (uVar9 != 0) goto LAB_710074ac34;
            if (param_4 != -1) goto LAB_710074aa34;
          }
        }
      }
      lVar10 = cntpct_el0;
      lVar10 = local_70 - lVar10;
      if (lVar10 < 1) {
LAB_710074aef0:
        uVar6 = 0;
        goto LAB_710074aa90;
      }
    }
  }
  return 0xee01;
}



// ===== FUN_710074af30 @ 710074af30 (size=280) =====

void FUN_710074af30(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  if (param_4 == -1) {
    do {
      uVar2 = FUN_710076d070(param_1,param_2,param_3,0xffffffffffffffff);
    } while ((uVar2 & 0x3fffff) == 0xec01);
    return;
  }
  lVar1 = cntpct_el0;
  do {
    lVar3 = cntpct_el0;
    lVar3 = (lVar1 + (ulong)(param_4 * 0xc) / 0x271) - lVar3;
    if (lVar3 < 1) {
      uVar2 = FUN_710076d070(param_1,param_2,param_3,0);
    }
    else {
      uVar2 = FUN_710076d070(param_1,param_2,param_3,(ulong)(lVar3 * 0x271) / 0xc);
    }
  } while (((uVar2 & 0x3fffff) != 0xea01) && ((uVar2 & 0x3fffff) == 0xec01));
  return;
}



// ===== FUN_710074b050 @ 710074b050 (size=120) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_710074b050(void)

{
  undefined8 *puVar1;
  
  if (_DAT_7100d16b54 == 0) {
    _DAT_7100d16b50 = 0;
    _DAT_7100d16b58 = 0;
    return;
  }
  puVar1 = (undefined8 *)tpidrro_el0;
  *puVar1 = 2;
  FUN_710076d0c0(_DAT_7100d16b50 & 0xffffffff);
  if (_DAT_7100d16b54 == 0) {
    _DAT_7100d16b50 = 0;
    _DAT_7100d16b58 = 0;
    return;
  }
  FUN_710076d060(_DAT_7100d16b50 & 0xffffffff);
  _DAT_7100d16b50 = 0;
  _DAT_7100d16b58 = 0;
  return;
}



