// ===== FUN_71007c1ec0 @ 71007c1ec0 (size=180) =====

void FUN_71007c1ec0(long *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong local_8;
  
  uVar2 = param_3 - (long)param_2;
  local_8 = uVar2;
  if (uVar2 < 0x10) {
    puVar1 = (undefined1 *)*param_1;
    if (uVar2 == 1) {
      *puVar1 = *param_2;
      param_1[1] = 1;
      *(undefined1 *)(*param_1 + 1) = 0;
      return;
    }
    if (uVar2 == 0) {
      param_1[1] = 0;
      *puVar1 = 0;
      return;
    }
  }
  else {
    puVar1 = (undefined1 *)FUN_71007e2140(param_1,&local_8,0);
    *param_1 = (long)puVar1;
    param_1[2] = local_8;
  }
  FUN_710080f900(puVar1,param_2,uVar2);
  param_1[1] = local_8;
  *(undefined1 *)(*param_1 + local_8) = 0;
  return;
}



// ===== FUN_71007c1f80 @ 71007c1f80 (size=196) =====

void FUN_71007c1f80(long *param_1,undefined4 *param_2,long param_3)

{
  undefined4 *puVar1;
  long lVar2;
  long local_8;
  
  lVar2 = param_3 - (long)param_2 >> 2;
  local_8 = lVar2;
  if ((ulong)(param_3 - (long)param_2) < 0xd) {
    puVar1 = (undefined4 *)*param_1;
    if (lVar2 == 1) {
      *puVar1 = *param_2;
      param_1[1] = 1;
      puVar1[1] = 0;
      return;
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_71007f2f60(param_1,&local_8,0);
    *param_1 = (long)puVar1;
    param_1[2] = local_8;
  }
  if (lVar2 == 0) {
    param_1[1] = local_8;
    *(undefined4 *)(*param_1 + local_8 * 4) = 0;
    return;
  }
  FUN_710080e900(puVar1,param_2,lVar2);
  param_1[1] = local_8;
  *(undefined4 *)(*param_1 + local_8 * 4) = 0;
  return;
}



// ===== FUN_71007c2060 @ 71007c2060 (size=172) =====

undefined1  [16]
FUN_71007c2060(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
              undefined8 param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined1 auVar1 [16];
  undefined1 *local_28 [2];
  undefined1 auStack_18 [16];
  code *local_8;
  
  local_28[0] = auStack_18;
  local_8 = (code *)0x0;
  FUN_710004f860(local_28,*param_7,param_7[1]);
  local_8 = FUN_71007c2540;
  auVar1 = FUN_71007b56a0(0,0,*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4,param_5,
                          param_6,local_28);
  if (local_8 != (code *)0x0) {
    (*local_8)(local_28);
  }
  return auVar1;
}



// ===== FUN_71007c2140 @ 71007c2140 (size=172) =====

undefined1  [16]
FUN_71007c2140(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
              undefined8 param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined1 auVar1 [16];
  undefined1 *local_28 [2];
  undefined1 auStack_18 [16];
  code *local_8;
  
  local_28[0] = auStack_18;
  local_8 = (code *)0x0;
  FUN_71007f3740(local_28,*param_7,param_7[1]);
  local_8 = FUN_71007c2520;
  auVar1 = FUN_71007b57e0(0,0,*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4,param_5,
                          param_6,local_28);
  if (local_8 != (code *)0x0) {
    (*local_8)(local_28);
  }
  return auVar1;
}



// ===== FUN_71007c2220 @ 71007c2220 (size=144) =====

long * FUN_71007c2220(long *param_1,long param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined8 *param_6)

{
  long local_28;
  long lStack_20;
  code *local_8;
  
  local_8 = (code *)0x0;
  FUN_71007b4de0(0,*(undefined8 *)(param_2 + 0x20),&local_28,param_3,param_4,param_5,*param_6,
                 param_6[1]);
  if (local_8 != (code *)0x0) {
    *param_1 = (long)(param_1 + 2);
    if (local_28 != 0 || lStack_20 == 0) {
      FUN_71007c1ec0(param_1,local_28,local_28 + lStack_20);
      if (local_8 != (code *)0x0) {
        (*local_8)(&local_28);
      }
      return param_1;
    }
    FUN_7100003a08();
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("uninitialized __any_string");
}



// ===== FUN_71007c22e0 @ 71007c22e0 (size=136) =====

long * FUN_71007c22e0(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long local_28;
  long lStack_20;
  code *local_8;
  
  local_8 = (code *)0x0;
  FUN_71007b3f60(0,*(undefined8 *)(param_2 + 0x18),&local_28,param_3,param_4);
  if (local_8 != (code *)0x0) {
    *param_1 = (long)(param_1 + 2);
    if (local_28 != 0 || lStack_20 == 0) {
      FUN_71007c1f80(param_1,local_28,local_28 + lStack_20 * 4);
      if (local_8 != (code *)0x0) {
        (*local_8)(&local_28);
      }
      return param_1;
    }
    FUN_7100003a08();
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("uninitialized __any_string");
}



// ===== FUN_71007c23a0 @ 71007c23a0 (size=144) =====

long * FUN_71007c23a0(long *param_1,long param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined8 *param_6)

{
  long local_28;
  long lStack_20;
  code *local_8;
  
  local_8 = (code *)0x0;
  FUN_71007b4f60(0,*(undefined8 *)(param_2 + 0x20),&local_28,param_3,param_4,param_5,*param_6,
                 param_6[1]);
  if (local_8 != (code *)0x0) {
    *param_1 = (long)(param_1 + 2);
    if (local_28 != 0 || lStack_20 == 0) {
      FUN_71007c1f80(param_1,local_28,local_28 + lStack_20 * 4);
      if (local_8 != (code *)0x0) {
        (*local_8)(&local_28);
      }
      return param_1;
    }
    FUN_7100003a08();
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("uninitialized __any_string");
}



// ===== FUN_71007c2460 @ 71007c2460 (size=136) =====

long * FUN_71007c2460(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long local_28;
  long lStack_20;
  code *local_8;
  
  local_8 = (code *)0x0;
  FUN_71007b3e60(0,*(undefined8 *)(param_2 + 0x18),&local_28,param_3,param_4);
  if (local_8 != (code *)0x0) {
    *param_1 = (long)(param_1 + 2);
    if (local_28 != 0 || lStack_20 == 0) {
      FUN_71007c1ec0(param_1,local_28,local_28 + lStack_20);
      if (local_8 != (code *)0x0) {
        (*local_8)(&local_28);
      }
      return param_1;
    }
    FUN_7100003a08();
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("uninitialized __any_string");
}



// ===== FUN_71007c2520 @ 71007c2520 (size=24) =====

void FUN_71007c2520(long *param_1)

{
  if ((long *)*param_1 != param_1 + 2) {
    thunk_FUN_710081c200();
    return;
  }
  return;
}



// ===== FUN_71007c2540 @ 71007c2540 (size=24) =====

void FUN_71007c2540(long *param_1)

{
  if ((long *)*param_1 != param_1 + 2) {
    thunk_FUN_710081c200();
    return;
  }
  return;
}



// ===== FUN_71007c2920 @ 71007c2920 (size=92) =====

void FUN_71007c2920(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  *param_1 = &PTR_LAB_7100ae70a0;
  plVar5 = (long *)param_1[4];
  plVar1 = plVar5 + 1;
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar5 + 8))();
  }
  FUN_71007b9200(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007c2980 @ 71007c2980 (size=92) =====

void FUN_71007c2980(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  *param_1 = &PTR_LAB_7100ae7138;
  plVar5 = (long *)param_1[4];
  plVar1 = plVar5 + 1;
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar5 + 8))();
  }
  FUN_71007c5f60(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007c2ae0 @ 71007c2ae0 (size=108) =====

void FUN_71007c2ae0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  *param_1 = &PTR_LAB_7100ae7040;
  plVar5 = (long *)param_1[2];
  plVar1 = plVar5 + 1;
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar5 + 8))();
  }
  *param_1 = &PTR_LAB_7100aed310;
  FUN_71007afc60(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007c2b60 @ 71007c2b60 (size=108) =====

void FUN_71007c2b60(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  *param_1 = &PTR_LAB_7100ae7070;
  plVar5 = (long *)param_1[2];
  plVar1 = plVar5 + 1;
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar5 + 8))();
  }
  *param_1 = &PTR_LAB_7100aed340;
  FUN_71007afc60(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007c2be0 @ 71007c2be0 (size=108) =====

void FUN_71007c2be0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  *param_1 = &PTR_LAB_7100ae70d8;
  plVar5 = (long *)param_1[2];
  plVar1 = plVar5 + 1;
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar5 + 8))();
  }
  *param_1 = &PTR_LAB_7100aedd60;
  FUN_71007afc60(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007c2c60 @ 71007c2c60 (size=108) =====

void FUN_71007c2c60(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  *param_1 = &PTR_LAB_7100ae7108;
  plVar5 = (long *)param_1[2];
  plVar1 = plVar5 + 1;
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar5 + 8))();
  }
  *param_1 = &PTR_LAB_7100aedd90;
  FUN_71007afc60(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007c2ce0 @ 71007c2ce0 (size=108) =====

void FUN_71007c2ce0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  *param_1 = &PTR_LAB_7100aed9e8;
  plVar5 = (long *)param_1[2];
  plVar1 = plVar5 + 1;
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar5 + 8))();
  }
  *param_1 = &PTR_LAB_7100aed370;
  FUN_71007afc60(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007c2d60 @ 71007c2d60 (size=108) =====

void FUN_71007c2d60(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  *param_1 = &PTR_LAB_7100aeda40;
  plVar5 = (long *)param_1[2];
  plVar1 = plVar5 + 1;
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar5 + 8))();
  }
  *param_1 = &PTR_LAB_7100aeddc0;
  FUN_71007afc60(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007c2de0 @ 71007c2de0 (size=108) =====

void FUN_71007c2de0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_7100aed790;
  plVar5 = (long *)param_1[3];
  plVar1 = plVar5 + 1;
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar5 + 8))();
  }
  *param_1 = &PTR_FUN_7100aed188;
  FUN_71007fb180(param_1 + 2);
  FUN_71007afc60(param_1);
  return;
}



// ===== FUN_71007c2e60 @ 71007c2e60 (size=108) =====

void FUN_71007c2e60(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_7100aed8e0;
  plVar5 = (long *)param_1[3];
  plVar1 = plVar5 + 1;
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar5 + 8))();
  }
  *param_1 = &PTR_FUN_7100aedbd8;
  FUN_71007fb180(param_1 + 2);
  FUN_71007afc60(param_1);
  return;
}



// ===== FUN_71007c2ee0 @ 71007c2ee0 (size=100) =====

void FUN_71007c2ee0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  *param_1 = &PTR_LAB_7100aed748;
  *(undefined8 *)(param_1[4] + 0x18) = 0;
  plVar5 = (long *)param_1[3];
  plVar1 = plVar5 + 1;
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar5 + 8))();
  }
  FUN_71007fd280(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007c2f60 @ 71007c2f60 (size=100) =====

void FUN_71007c2f60(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  *param_1 = &PTR_LAB_7100aed898;
  *(undefined8 *)(param_1[4] + 0x18) = 0;
  plVar5 = (long *)param_1[3];
  plVar1 = plVar5 + 1;
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar5 + 8))();
  }
  FUN_71007fd420(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007c2fe0 @ 71007c2fe0 (size=116) =====

void FUN_71007c2fe0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_7100aed790;
  plVar5 = (long *)param_1[3];
  plVar1 = plVar5 + 1;
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar5 + 8))();
  }
  *param_1 = &PTR_FUN_7100aed188;
  FUN_71007fb180(param_1 + 2);
  FUN_71007afc60(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007c3060 @ 71007c3060 (size=116) =====

void FUN_71007c3060(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_7100aed8e0;
  plVar5 = (long *)param_1[3];
  plVar1 = plVar5 + 1;
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar5 + 8))();
  }
  *param_1 = &PTR_FUN_7100aedbd8;
  FUN_71007fb180(param_1 + 2);
  FUN_71007afc60(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007c34a0 @ 71007c34a0 (size=112) =====

void FUN_71007c34a0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  *param_1 = &PTR_LAB_7100aed7c8;
  lVar5 = param_1[4];
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  *(undefined8 *)(lVar5 + 0x40) = 0;
  *(undefined8 *)(lVar5 + 0x50) = 0;
  plVar6 = (long *)param_1[3];
  plVar1 = plVar6 + 1;
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar6 + 8))();
  }
  FUN_71007fc5a0(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007c3520 @ 71007c3520 (size=112) =====

void FUN_71007c3520(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  *param_1 = &PTR_LAB_7100aed830;
  lVar5 = param_1[4];
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  *(undefined8 *)(lVar5 + 0x40) = 0;
  *(undefined8 *)(lVar5 + 0x50) = 0;
  plVar6 = (long *)param_1[3];
  plVar1 = plVar6 + 1;
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar6 + 8))();
  }
  FUN_71007fc640(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007c35a0 @ 71007c35a0 (size=112) =====

void FUN_71007c35a0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  *param_1 = &PTR_LAB_7100aed918;
  lVar5 = param_1[4];
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined8 *)(lVar5 + 0x38) = 0;
  *(undefined8 *)(lVar5 + 0x48) = 0;
  *(undefined8 *)(lVar5 + 0x58) = 0;
  plVar6 = (long *)param_1[3];
  plVar1 = plVar6 + 1;
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar6 + 8))();
  }
  FUN_71007fc8a0(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007c3620 @ 71007c3620 (size=112) =====

void FUN_71007c3620(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  *param_1 = &PTR_LAB_7100aed980;
  lVar5 = param_1[4];
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined8 *)(lVar5 + 0x38) = 0;
  *(undefined8 *)(lVar5 + 0x48) = 0;
  *(undefined8 *)(lVar5 + 0x58) = 0;
  plVar6 = (long *)param_1[3];
  plVar1 = plVar6 + 1;
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar6 + 8))();
  }
  FUN_71007fc940(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007c38e0 @ 71007c38e0 (size=352) =====

void FUN_71007c38e0(undefined8 param_1,long *param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined1 *local_20;
  long local_18;
  undefined1 auStack_10 [16];
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  *(undefined1 *)(param_3 + 0x48) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0x18))(param_2);
  *(undefined1 *)(param_3 + 0x49) = uVar1;
  *(undefined1 *)(param_3 + 0x88) = 1;
  pcVar4 = *(code **)(*param_2 + 0x20);
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x28) = 0;
  *(undefined8 *)(param_3 + 0x38) = 0;
  (*pcVar4)(&local_20,param_2);
  lVar3 = local_18;
  lVar2 = thunk_FUN_71007af5c0(local_18 + 1);
  FUN_71007e2bc0(&local_20,lVar2,lVar3,0);
  *(undefined1 *)(lVar2 + lVar3) = 0;
  *(long *)(param_3 + 0x10) = lVar2;
  *(long *)(param_3 + 0x18) = lVar3;
  if (local_20 != auStack_10) {
    thunk_FUN_710081c200();
  }
  (**(code **)(*param_2 + 0x28))(&local_20,param_2);
  lVar3 = local_18;
  lVar2 = thunk_FUN_71007af5c0(local_18 + 1);
  FUN_71007e2bc0(&local_20,lVar2,lVar3,0);
  *(undefined1 *)(lVar2 + lVar3) = 0;
  *(long *)(param_3 + 0x28) = lVar2;
  *(long *)(param_3 + 0x30) = lVar3;
  if (local_20 != auStack_10) {
    thunk_FUN_710081c200();
  }
  (**(code **)(*param_2 + 0x30))(&local_20,param_2);
  lVar3 = thunk_FUN_71007af5c0(local_18 + 1);
  FUN_71007e2bc0(&local_20,lVar3,local_18,0);
  *(undefined1 *)(lVar3 + local_18) = 0;
  *(long *)(param_3 + 0x38) = lVar3;
  *(long *)(param_3 + 0x40) = local_18;
  if (local_20 != auStack_10) {
    thunk_FUN_710081c200();
  }
  return;
}



// ===== FUN_71007c3a60 @ 71007c3a60 (size=392) =====

void FUN_71007c3a60(undefined8 param_1,long *param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *local_20;
  long local_18;
  undefined1 auStack_10 [16];
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  *(undefined4 *)(param_3 + 0x48) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0x18))(param_2);
  *(undefined4 *)(param_3 + 0x4c) = uVar1;
  *(undefined1 *)(param_3 + 0x148) = 1;
  lVar2 = *param_2;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x28) = 0;
  *(undefined8 *)(param_3 + 0x38) = 0;
  (**(code **)(lVar2 + 0x20))(&local_20,param_2);
  lVar2 = local_18;
  lVar3 = thunk_FUN_71007af5c0(local_18 + 1);
  FUN_71007e2bc0(&local_20,lVar3,lVar2,0);
  *(undefined1 *)(lVar3 + lVar2) = 0;
  *(long *)(param_3 + 0x10) = lVar3;
  *(long *)(param_3 + 0x18) = lVar2;
  if (local_20 != auStack_10) {
    thunk_FUN_710081c200();
  }
  (**(code **)(*param_2 + 0x28))(&local_20,param_2);
  lVar2 = local_18;
  if (local_18 + 1 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_710000389c();
  }
  lVar3 = thunk_FUN_71007af5c0((local_18 + 1) * 4);
  FUN_71007f36a0(&local_20,lVar3,lVar2,0);
  *(undefined4 *)(lVar3 + lVar2 * 4) = 0;
  *(long *)(param_3 + 0x28) = lVar3;
  *(long *)(param_3 + 0x30) = lVar2;
  if (local_20 != auStack_10) {
    thunk_FUN_710081c200();
  }
  (**(code **)(*param_2 + 0x30))(&local_20,param_2);
  if (local_18 + 1 != 0x1fffffffffffffff) {
    lVar2 = thunk_FUN_71007af5c0((local_18 + 1) * 4);
    FUN_71007f36a0(&local_20,lVar2,local_18,0);
    *(undefined4 *)(lVar2 + local_18 * 4) = 0;
    *(long *)(param_3 + 0x38) = lVar2;
    *(long *)(param_3 + 0x40) = local_18;
    if (local_20 != auStack_10) {
      thunk_FUN_710081c200();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_710000389c();
}



// ===== FUN_71007c3ca0 @ 71007c3ca0 (size=124) =====

void FUN_71007c3ca0(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,
                   undefined8 param_5)

{
  undefined1 *local_20;
  undefined8 uStack_18;
  undefined1 auStack_10 [16];
  
  (**(code **)(*param_2 + 0x18))(&local_20,param_2,param_4,param_5);
  if ((code *)param_3[4] != (code *)0x0) {
    (*(code *)param_3[4])(param_3);
  }
  *param_3 = (long)(param_3 + 2);
  FUN_710004f860(param_3,local_20,uStack_18);
  param_3[4] = (long)FUN_71007c2540;
  if (local_20 != auStack_10) {
    thunk_FUN_710081c200();
  }
  return;
}



// ===== FUN_71007c3d40 @ 71007c3d40 (size=124) =====

void FUN_71007c3d40(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,
                   undefined8 param_5)

{
  undefined1 *local_20;
  undefined8 uStack_18;
  undefined1 auStack_10 [16];
  
  (**(code **)(*param_2 + 0x18))(&local_20,param_2,param_4,param_5);
  if ((code *)param_3[4] != (code *)0x0) {
    (*(code *)param_3[4])(param_3);
  }
  *param_3 = (long)(param_3 + 2);
  FUN_71007f3740(param_3,local_20,uStack_18);
  param_3[4] = (long)FUN_71007c2520;
  if (local_20 != auStack_10) {
    thunk_FUN_710081c200();
  }
  return;
}



// ===== FUN_71007c3de0 @ 71007c3de0 (size=496) =====

void FUN_71007c3de0(undefined8 param_1,long *param_2,long param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined1 *local_20;
  long local_18;
  undefined1 auStack_10 [16];
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  *(undefined1 *)(param_3 + 0x21) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0x18))(param_2);
  *(undefined1 *)(param_3 + 0x22) = uVar1;
  uVar2 = (**(code **)(*param_2 + 0x40))(param_2);
  *(undefined4 *)(param_3 + 0x58) = uVar2;
  *(undefined1 *)(param_3 + 0x6f) = 1;
  lVar3 = *param_2;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x28) = 0;
  *(undefined8 *)(param_3 + 0x38) = 0;
  pcVar5 = *(code **)(lVar3 + 0x20);
  *(undefined8 *)(param_3 + 0x48) = 0;
  (*pcVar5)(&local_20,param_2);
  lVar3 = local_18;
  lVar4 = thunk_FUN_71007af5c0(local_18 + 1);
  FUN_71007e2bc0(&local_20,lVar4,lVar3,0);
  *(undefined1 *)(lVar4 + lVar3) = 0;
  *(long *)(param_3 + 0x10) = lVar4;
  *(long *)(param_3 + 0x18) = lVar3;
  if (local_20 != auStack_10) {
    thunk_FUN_710081c200();
  }
  (**(code **)(*param_2 + 0x28))(&local_20,param_2);
  lVar3 = local_18;
  lVar4 = thunk_FUN_71007af5c0(local_18 + 1);
  FUN_71007e2bc0(&local_20,lVar4,lVar3,0);
  *(undefined1 *)(lVar4 + lVar3) = 0;
  *(long *)(param_3 + 0x28) = lVar4;
  *(long *)(param_3 + 0x30) = lVar3;
  if (local_20 != auStack_10) {
    thunk_FUN_710081c200();
  }
  (**(code **)(*param_2 + 0x30))(&local_20,param_2);
  lVar3 = local_18;
  lVar4 = thunk_FUN_71007af5c0(local_18 + 1);
  FUN_71007e2bc0(&local_20,lVar4,lVar3,0);
  *(undefined1 *)(lVar4 + lVar3) = 0;
  *(long *)(param_3 + 0x38) = lVar4;
  *(long *)(param_3 + 0x40) = lVar3;
  if (local_20 != auStack_10) {
    thunk_FUN_710081c200();
  }
  (**(code **)(*param_2 + 0x38))(&local_20,param_2);
  lVar3 = thunk_FUN_71007af5c0(local_18 + 1);
  FUN_71007e2bc0(&local_20,lVar3,local_18,0);
  *(undefined1 *)(lVar3 + local_18) = 0;
  *(long *)(param_3 + 0x48) = lVar3;
  *(long *)(param_3 + 0x50) = local_18;
  if (local_20 != auStack_10) {
    thunk_FUN_710081c200();
  }
  uVar2 = (**(code **)(*param_2 + 0x48))(param_2);
  *(undefined4 *)(param_3 + 0x5c) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x50))(param_2);
  *(undefined4 *)(param_3 + 0x60) = uVar2;
  return;
}



// ===== FUN_71007c4000 @ 71007c4000 (size=496) =====

void FUN_71007c4000(undefined8 param_1,long *param_2,long param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined1 *local_20;
  long local_18;
  undefined1 auStack_10 [16];
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  *(undefined1 *)(param_3 + 0x21) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0x18))(param_2);
  *(undefined1 *)(param_3 + 0x22) = uVar1;
  uVar2 = (**(code **)(*param_2 + 0x40))(param_2);
  *(undefined4 *)(param_3 + 0x58) = uVar2;
  *(undefined1 *)(param_3 + 0x6f) = 1;
  lVar3 = *param_2;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x28) = 0;
  *(undefined8 *)(param_3 + 0x38) = 0;
  pcVar5 = *(code **)(lVar3 + 0x20);
  *(undefined8 *)(param_3 + 0x48) = 0;
  (*pcVar5)(&local_20,param_2);
  lVar3 = local_18;
  lVar4 = thunk_FUN_71007af5c0(local_18 + 1);
  FUN_71007e2bc0(&local_20,lVar4,lVar3,0);
  *(undefined1 *)(lVar4 + lVar3) = 0;
  *(long *)(param_3 + 0x10) = lVar4;
  *(long *)(param_3 + 0x18) = lVar3;
  if (local_20 != auStack_10) {
    thunk_FUN_710081c200();
  }
  (**(code **)(*param_2 + 0x28))(&local_20,param_2);
  lVar3 = local_18;
  lVar4 = thunk_FUN_71007af5c0(local_18 + 1);
  FUN_71007e2bc0(&local_20,lVar4,lVar3,0);
  *(undefined1 *)(lVar4 + lVar3) = 0;
  *(long *)(param_3 + 0x28) = lVar4;
  *(long *)(param_3 + 0x30) = lVar3;
  if (local_20 != auStack_10) {
    thunk_FUN_710081c200();
  }
  (**(code **)(*param_2 + 0x30))(&local_20,param_2);
  lVar3 = local_18;
  lVar4 = thunk_FUN_71007af5c0(local_18 + 1);
  FUN_71007e2bc0(&local_20,lVar4,lVar3,0);
  *(undefined1 *)(lVar4 + lVar3) = 0;
  *(long *)(param_3 + 0x38) = lVar4;
  *(long *)(param_3 + 0x40) = lVar3;
  if (local_20 != auStack_10) {
    thunk_FUN_710081c200();
  }
  (**(code **)(*param_2 + 0x38))(&local_20,param_2);
  lVar3 = thunk_FUN_71007af5c0(local_18 + 1);
  FUN_71007e2bc0(&local_20,lVar3,local_18,0);
  *(undefined1 *)(lVar3 + local_18) = 0;
  *(long *)(param_3 + 0x48) = lVar3;
  *(long *)(param_3 + 0x50) = local_18;
  if (local_20 != auStack_10) {
    thunk_FUN_710081c200();
  }
  uVar2 = (**(code **)(*param_2 + 0x48))(param_2);
  *(undefined4 *)(param_3 + 0x5c) = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x50))(param_2);
  *(undefined4 *)(param_3 + 0x60) = uVar2;
  return;
}



// ===== FUN_71007c4220 @ 71007c4220 (size=556) =====

void FUN_71007c4220(undefined8 param_1,long *param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined1 *local_20;
  long local_18;
  undefined1 auStack_10 [16];
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  *(undefined4 *)(param_3 + 0x24) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0x18))(param_2);
  *(undefined4 *)(param_3 + 0x28) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0x40))(param_2);
  *(undefined4 *)(param_3 + 0x60) = uVar1;
  *(undefined1 *)(param_3 + 0x98) = 1;
  lVar2 = *param_2;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x30) = 0;
  *(undefined8 *)(param_3 + 0x40) = 0;
  pcVar4 = *(code **)(lVar2 + 0x20);
  *(undefined8 *)(param_3 + 0x50) = 0;
  (*pcVar4)(&local_20,param_2);
  lVar2 = local_18;
  lVar3 = thunk_FUN_71007af5c0(local_18 + 1);
  FUN_71007e2bc0(&local_20,lVar3,lVar2,0);
  *(undefined1 *)(lVar3 + lVar2) = 0;
  *(long *)(param_3 + 0x10) = lVar3;
  *(long *)(param_3 + 0x18) = lVar2;
  if (local_20 != auStack_10) {
    thunk_FUN_710081c200();
  }
  (**(code **)(*param_2 + 0x28))(&local_20,param_2);
  lVar2 = local_18;
  if (local_18 + 1 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_710000389c();
  }
  lVar3 = thunk_FUN_71007af5c0((local_18 + 1) * 4);
  FUN_71007f36a0(&local_20,lVar3,lVar2,0);
  *(undefined4 *)(lVar3 + lVar2 * 4) = 0;
  *(long *)(param_3 + 0x30) = lVar3;
  *(long *)(param_3 + 0x38) = lVar2;
  if (local_20 != auStack_10) {
    thunk_FUN_710081c200();
  }
  (**(code **)(*param_2 + 0x30))(&local_20,param_2);
  lVar2 = local_18;
  if (local_18 + 1 != 0x1fffffffffffffff) {
    lVar3 = thunk_FUN_71007af5c0((local_18 + 1) * 4);
    FUN_71007f36a0(&local_20,lVar3,lVar2,0);
    *(undefined4 *)(lVar3 + lVar2 * 4) = 0;
    *(long *)(param_3 + 0x40) = lVar3;
    *(long *)(param_3 + 0x48) = lVar2;
    if (local_20 != auStack_10) {
      thunk_FUN_710081c200();
    }
    (**(code **)(*param_2 + 0x38))(&local_20,param_2);
    if (local_18 + 1 != 0x1fffffffffffffff) {
      lVar2 = thunk_FUN_71007af5c0((local_18 + 1) * 4);
      FUN_71007f36a0(&local_20,lVar2,local_18,0);
      *(undefined4 *)(lVar2 + local_18 * 4) = 0;
      *(long *)(param_3 + 0x50) = lVar2;
      *(long *)(param_3 + 0x58) = local_18;
      if (local_20 != auStack_10) {
        thunk_FUN_710081c200();
      }
      uVar1 = (**(code **)(*param_2 + 0x48))(param_2);
      *(undefined4 *)(param_3 + 100) = uVar1;
      uVar1 = (**(code **)(*param_2 + 0x50))(param_2);
      *(undefined4 *)(param_3 + 0x68) = uVar1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_710000389c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_710000389c();
}



// ===== FUN_71007c4480 @ 71007c4480 (size=556) =====

void FUN_71007c4480(undefined8 param_1,long *param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined1 *local_20;
  long local_18;
  undefined1 auStack_10 [16];
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  *(undefined4 *)(param_3 + 0x24) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0x18))(param_2);
  *(undefined4 *)(param_3 + 0x28) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0x40))(param_2);
  *(undefined4 *)(param_3 + 0x60) = uVar1;
  *(undefined1 *)(param_3 + 0x98) = 1;
  lVar2 = *param_2;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x30) = 0;
  *(undefined8 *)(param_3 + 0x40) = 0;
  pcVar4 = *(code **)(lVar2 + 0x20);
  *(undefined8 *)(param_3 + 0x50) = 0;
  (*pcVar4)(&local_20,param_2);
  lVar2 = local_18;
  lVar3 = thunk_FUN_71007af5c0(local_18 + 1);
  FUN_71007e2bc0(&local_20,lVar3,lVar2,0);
  *(undefined1 *)(lVar3 + lVar2) = 0;
  *(long *)(param_3 + 0x10) = lVar3;
  *(long *)(param_3 + 0x18) = lVar2;
  if (local_20 != auStack_10) {
    thunk_FUN_710081c200();
  }
  (**(code **)(*param_2 + 0x28))(&local_20,param_2);
  lVar2 = local_18;
  if (local_18 + 1 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_710000389c();
  }
  lVar3 = thunk_FUN_71007af5c0((local_18 + 1) * 4);
  FUN_71007f36a0(&local_20,lVar3,lVar2,0);
  *(undefined4 *)(lVar3 + lVar2 * 4) = 0;
  *(long *)(param_3 + 0x30) = lVar3;
  *(long *)(param_3 + 0x38) = lVar2;
  if (local_20 != auStack_10) {
    thunk_FUN_710081c200();
  }
  (**(code **)(*param_2 + 0x30))(&local_20,param_2);
  lVar2 = local_18;
  if (local_18 + 1 != 0x1fffffffffffffff) {
    lVar3 = thunk_FUN_71007af5c0((local_18 + 1) * 4);
    FUN_71007f36a0(&local_20,lVar3,lVar2,0);
    *(undefined4 *)(lVar3 + lVar2 * 4) = 0;
    *(long *)(param_3 + 0x40) = lVar3;
    *(long *)(param_3 + 0x48) = lVar2;
    if (local_20 != auStack_10) {
      thunk_FUN_710081c200();
    }
    (**(code **)(*param_2 + 0x38))(&local_20,param_2);
    if (local_18 + 1 != 0x1fffffffffffffff) {
      lVar2 = thunk_FUN_71007af5c0((local_18 + 1) * 4);
      FUN_71007f36a0(&local_20,lVar2,local_18,0);
      *(undefined4 *)(lVar2 + local_18 * 4) = 0;
      *(long *)(param_3 + 0x50) = lVar2;
      *(long *)(param_3 + 0x58) = local_18;
      if (local_20 != auStack_10) {
        thunk_FUN_710081c200();
      }
      uVar1 = (**(code **)(*param_2 + 0x48))(param_2);
      *(undefined4 *)(param_3 + 100) = uVar1;
      uVar1 = (**(code **)(*param_2 + 0x50))(param_2);
      *(undefined4 *)(param_3 + 0x68) = uVar1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_710000389c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_710000389c();
}



// ===== FUN_71007c46e0 @ 71007c46e0 (size=148) =====

undefined4
FUN_71007c46e0(undefined8 param_1,long *param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 *local_20 [2];
  undefined1 auStack_10 [16];
  
  local_20[0] = auStack_10;
  if (param_3 != 0 || param_4 == 0) {
    FUN_71007c1ec0(local_20,param_3,param_3 + param_4);
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,local_20,param_5);
    if (local_20[0] != auStack_10) {
      thunk_FUN_710081c200();
    }
    return uVar1;
  }
  uVar2 = FUN_7100003a08();
  FUN_71007e21a0(local_20);
                    /* WARNING: Subroutine does not return */
  FUN_7100804760(uVar2);
}



// ===== FUN_71007c4820 @ 71007c4820 (size=256) =====

void FUN_71007c4820(undefined8 param_1,long *param_2,long *param_3,undefined4 param_4,
                   undefined4 param_5,undefined4 param_6,long param_7,long param_8)

{
  undefined8 uVar1;
  undefined1 *local_40 [2];
  undefined1 auStack_30 [16];
  undefined1 *local_20;
  undefined8 uStack_18;
  undefined1 auStack_10 [16];
  
  local_40[0] = auStack_30;
  if (param_7 != 0 || param_8 == 0) {
    FUN_71007c1ec0(local_40,param_7,param_7 + param_8);
    (**(code **)(*param_2 + 0x18))(&local_20,param_2,param_4,param_5,param_6,local_40);
    if ((code *)param_3[4] != (code *)0x0) {
      (*(code *)param_3[4])(param_3);
    }
    *param_3 = (long)(param_3 + 2);
    FUN_710004f860(param_3,local_20,uStack_18);
    param_3[4] = (long)FUN_71007c2540;
    if (local_20 != auStack_10) {
      thunk_FUN_710081c200();
    }
    if (local_40[0] != auStack_30) {
      thunk_FUN_710081c200();
    }
    return;
  }
  uVar1 = FUN_7100003a08();
  FUN_71007e21a0(&local_20);
  FUN_71007e21a0(local_40);
                    /* WARNING: Subroutine does not return */
  FUN_7100804760(uVar1);
}



// ===== FUN_71007c4940 @ 71007c4940 (size=256) =====

void FUN_71007c4940(undefined8 param_1,long *param_2,long *param_3,undefined4 param_4,
                   undefined4 param_5,undefined4 param_6,long param_7,long param_8)

{
  undefined8 uVar1;
  undefined1 *local_40 [2];
  undefined1 auStack_30 [16];
  undefined1 *local_20;
  undefined8 uStack_18;
  undefined1 auStack_10 [16];
  
  local_40[0] = auStack_30;
  if (param_7 != 0 || param_8 == 0) {
    FUN_71007c1f80(local_40,param_7,param_7 + param_8 * 4);
    (**(code **)(*param_2 + 0x18))(&local_20,param_2,param_4,param_5,param_6,local_40);
    if ((code *)param_3[4] != (code *)0x0) {
      (*(code *)param_3[4])(param_3);
    }
    *param_3 = (long)(param_3 + 2);
    FUN_71007f3740(param_3,local_20,uStack_18);
    param_3[4] = (long)FUN_71007c2520;
    if (local_20 != auStack_10) {
      thunk_FUN_710081c200();
    }
    if (local_40[0] != auStack_30) {
      thunk_FUN_710081c200();
    }
    return;
  }
  uVar1 = FUN_7100003a08();
  FUN_71007f2fe0(&local_20);
  FUN_71007f2fe0(local_40);
                    /* WARNING: Subroutine does not return */
  FUN_7100804760(uVar1);
}



// ===== FUN_71007c4a60 @ 71007c4a60 (size=24) =====

void FUN_71007c4a60(undefined8 param_1,long *param_2,undefined4 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0071007c4a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2,param_3);
  return;
}



// ===== FUN_71007c4ae0 @ 71007c4ae0 (size=224) =====

void FUN_71007c4ae0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,byte param_10)

{
  if (param_10 == 0x74) {
                    /* WARNING: Could not recover jumptable at 0x0071007c4b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x18))(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    return;
  }
  if (0x74 < param_10) {
    if (param_10 != 0x77) {
                    /* WARNING: Could not recover jumptable at 0x0071007c4b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x38))(param_2,param_3,param_4,param_5,param_6);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0071007c4bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x28))(param_2,param_3,param_4,param_5,param_6);
    return;
  }
  if (param_10 != 100) {
                    /* WARNING: Could not recover jumptable at 0x0071007c4b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x30))(param_2,param_3,param_4,param_5,param_6);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0071007c4b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2,param_3,param_4,param_5,param_6);
  return;
}



// ===== FUN_71007c4bc0 @ 71007c4bc0 (size=224) =====

void FUN_71007c4bc0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,byte param_10)

{
  if (param_10 == 0x74) {
                    /* WARNING: Could not recover jumptable at 0x0071007c4c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x18))(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    return;
  }
  if (0x74 < param_10) {
    if (param_10 != 0x77) {
                    /* WARNING: Could not recover jumptable at 0x0071007c4c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x38))(param_2,param_3,param_4,param_5,param_6);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0071007c4c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x28))(param_2,param_3,param_4,param_5,param_6);
    return;
  }
  if (param_10 != 100) {
                    /* WARNING: Could not recover jumptable at 0x0071007c4c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x30))(param_2,param_3,param_4,param_5,param_6);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0071007c4c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2,param_3,param_4,param_5,param_6);
  return;
}



// ===== FUN_71007c4ca0 @ 71007c4ca0 (size=320) =====

undefined1  [16]
FUN_71007c4ca0(undefined8 param_1,long *param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
              undefined8 param_6,undefined4 param_7,undefined8 param_8,int *param_9,long param_10,
              long *param_11)

{
  undefined1 auVar1 [16];
  undefined1 *local_20;
  undefined8 uStack_18;
  undefined1 local_10 [16];
  
  if (param_10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0071007c4cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar1 = (**(code **)(*param_2 + 0x10))(param_2,param_3,param_4,param_5,param_6);
    return auVar1;
  }
  uStack_18 = 0;
  local_10[0] = 0;
  local_20 = local_10;
  auVar1 = (**(code **)(*param_2 + 0x18))
                     (param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,&local_20);
  if (*param_9 == 0) {
    if ((code *)param_11[4] == (code *)0x0) {
      *param_11 = (long)(param_11 + 2);
    }
    else {
      (*(code *)param_11[4])(param_11);
      *param_11 = (long)(param_11 + 2);
    }
    FUN_710004f860(param_11,local_20,uStack_18);
    param_11[4] = (long)FUN_71007c2540;
  }
  if (local_20 != local_10) {
    thunk_FUN_710081c200();
  }
  auVar1._8_8_ = param_4 & 0xffffffff00000000 | auVar1._8_8_ & 0xffffffff;
  return auVar1;
}



// ===== FUN_71007c4e00 @ 71007c4e00 (size=320) =====

undefined1  [16]
FUN_71007c4e00(undefined8 param_1,long *param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
              undefined8 param_6,undefined4 param_7,undefined8 param_8,int *param_9,long param_10,
              long *param_11)

{
  undefined1 auVar1 [16];
  undefined4 *local_20;
  undefined8 uStack_18;
  undefined4 local_10 [4];
  
  if (param_10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0071007c4e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar1 = (**(code **)(*param_2 + 0x10))(param_2,param_3,param_4,param_5,param_6);
    return auVar1;
  }
  uStack_18 = 0;
  local_10[0] = 0;
  local_20 = local_10;
  auVar1 = (**(code **)(*param_2 + 0x18))
                     (param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,&local_20);
  if (*param_9 == 0) {
    if ((code *)param_11[4] == (code *)0x0) {
      *param_11 = (long)(param_11 + 2);
    }
    else {
      (*(code *)param_11[4])(param_11);
      *param_11 = (long)(param_11 + 2);
    }
    FUN_71007f3740(param_11,local_20,uStack_18);
    param_11[4] = (long)FUN_71007c2520;
  }
  if (local_20 != local_10) {
    thunk_FUN_710081c200();
  }
  auVar1._8_8_ = param_4 & 0xffffffff00000000 | auVar1._8_8_ & 0xffffffff;
  return auVar1;
}



// ===== FUN_71007c4f60 @ 71007c4f60 (size=252) =====

undefined1  [16]
FUN_71007c4f60(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
              undefined4 param_5,undefined8 param_6,undefined4 param_7,long *param_8)

{
  long lVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 *local_20 [2];
  undefined1 auStack_10 [16];
  
  if (param_8 == (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0071007c5044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (**(code **)(*param_2 + 0x10))(param_2,param_3,param_4,param_5,param_6,param_7);
    return auVar3;
  }
  if (param_8[4] != 0) {
    lVar1 = *param_8;
    local_20[0] = auStack_10;
    if (lVar1 != 0 || param_8[1] == 0) {
      FUN_71007c1ec0(local_20,lVar1,lVar1 + param_8[1]);
      auVar3 = (**(code **)(*param_2 + 0x18))
                         (param_2,param_3,param_4,param_5,param_6,param_7,local_20);
      if (local_20[0] != auStack_10) {
        thunk_FUN_710081c200();
      }
      return auVar3;
    }
    FUN_7100003a08();
                    /* WARNING: Does not return */
    pcVar2 = (code *)UndefinedInstructionException(0,0x71007c506c);
    (*pcVar2)();
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("uninitialized __any_string");
}



// ===== FUN_71007c5080 @ 71007c5080 (size=252) =====

undefined1  [16]
FUN_71007c5080(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
              undefined4 param_5,undefined8 param_6,undefined4 param_7,long *param_8)

{
  long lVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 *local_20 [2];
  undefined1 auStack_10 [16];
  
  if (param_8 == (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0071007c5164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (**(code **)(*param_2 + 0x10))(param_2,param_3,param_4,param_5,param_6,param_7);
    return auVar3;
  }
  if (param_8[4] != 0) {
    lVar1 = *param_8;
    local_20[0] = auStack_10;
    if (lVar1 != 0 || param_8[1] == 0) {
      FUN_71007c1f80(local_20,lVar1,lVar1 + param_8[1] * 4);
      auVar3 = (**(code **)(*param_2 + 0x18))
                         (param_2,param_3,param_4,param_5,param_6,param_7,local_20);
      if (local_20[0] != auStack_10) {
        thunk_FUN_710081c200();
      }
      return auVar3;
    }
    FUN_7100003a08();
                    /* WARNING: Does not return */
    pcVar2 = (code *)UndefinedInstructionException(0,0x71007c518c);
    (*pcVar2)();
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("uninitialized __any_string");
}



// ===== FUN_71007c51a0 @ 71007c51a0 (size=2128) =====

undefined8 * FUN_71007c51a0(long param_1,undefined1 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar4 = (undefined8 *)
           FUN_71007f9ea0(param_1,&PTR_PTR_FUN_7100aec798,&PTR_PTR_FUN_7100aecba8,0xfffffffffffffffe
                         );
  if (puVar4 == (undefined8 *)0x0) {
    if (param_2 == &DAT_7100d21180) {
      puVar4 = (undefined8 *)FUN_71007af5c0(0x28);
      puVar6 = (undefined8 *)FUN_71007af5c0(0x90);
      puVar6[2] = 0;
      puVar6[3] = 0;
      *puVar6 = &PTR_FUN_7100aee788;
      puVar6[5] = 0;
      puVar6[6] = 0;
      puVar6[7] = 0;
      puVar6[8] = 0;
      *puVar4 = &PTR_FUN_7100aed1c0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      puVar4[2] = puVar6;
      *(undefined1 *)(puVar6 + 4) = 0;
      *(undefined2 *)(puVar6 + 9) = 0;
      *(undefined1 *)(puVar6 + 0x11) = 0;
      FUN_71007fd160(puVar4,0);
      piVar1 = (int *)(param_1 + 8);
      puVar4[3] = param_1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *puVar4 = &PTR_LAB_7100aed748;
      puVar4[4] = puVar6;
      FUN_71007b3960(0,param_1);
    }
    else if (param_2 == &DAT_7100d21168) {
      puVar4 = (undefined8 *)FUN_71007af5c0(0x20);
      *(undefined4 *)(puVar4 + 1) = 0;
      *puVar4 = &PTR_FUN_7100aed188;
      uVar5 = FUN_71007afd60();
      puVar4[2] = uVar5;
      puVar4[3] = param_1;
      piVar1 = (int *)(param_1 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *puVar4 = &PTR_FUN_7100aed790;
    }
    else if (param_2 == &DAT_7100d21178) {
      puVar4 = (undefined8 *)FUN_71007af5c0(0x18);
      *(undefined4 *)(puVar4 + 1) = 0;
      *puVar4 = &PTR_LAB_7100aed370;
      piVar1 = (int *)(param_1 + 8);
      puVar4[2] = param_1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *puVar4 = &PTR_LAB_7100aed9e8;
    }
    else if (param_2 == &DAT_7100d211a0) {
      puVar4 = (undefined8 *)FUN_71007af5c0(0x18);
      *(undefined4 *)(puVar4 + 1) = 0;
      *puVar4 = &PTR_LAB_7100aed310;
      piVar1 = (int *)(param_1 + 8);
      puVar4[2] = param_1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *puVar4 = &PTR_LAB_7100ae7040;
    }
    else if (param_2 == &DAT_7100d21198) {
      puVar4 = (undefined8 *)FUN_71007af5c0(0x18);
      *(undefined4 *)(puVar4 + 1) = 0;
      *puVar4 = &PTR_LAB_7100aed340;
      piVar1 = (int *)(param_1 + 8);
      puVar4[2] = param_1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *puVar4 = &PTR_LAB_7100ae7070;
    }
    else if (param_2 == &DAT_7100d21188) {
      puVar4 = (undefined8 *)FUN_71007af5c0(0x28);
      puVar6 = (undefined8 *)FUN_71007af5c0(0x70);
      puVar6[2] = 0;
      puVar6[3] = 0;
      *puVar6 = &PTR_FUN_7100aee768;
      puVar6[5] = 0;
      puVar6[6] = 0;
      puVar6[7] = 0;
      puVar6[8] = 0;
      puVar6[9] = 0;
      puVar6[10] = 0;
      *puVar4 = &PTR_FUN_7100aed208;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      puVar4[2] = puVar6;
      *(undefined2 *)(puVar6 + 4) = 0;
      *(undefined1 *)((long)puVar6 + 0x22) = 0;
      *(undefined4 *)(puVar6 + 0xb) = 0;
      *(undefined8 *)((long)puVar6 + 0x5c) = 0;
      *(undefined1 *)((long)puVar6 + 0x6f) = 0;
      FUN_71007fc3e0(puVar4,0,0);
      piVar1 = (int *)(param_1 + 8);
      puVar4[3] = param_1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *puVar4 = &PTR_LAB_7100aed7c8;
      puVar4[4] = puVar6;
      FUN_71007b4060(0,param_1,puVar6);
    }
    else if (param_2 == &DAT_7100d21190) {
      puVar4 = (undefined8 *)FUN_71007af5c0(0x28);
      puVar6 = (undefined8 *)FUN_71007af5c0(0x70);
      puVar6[2] = 0;
      puVar6[3] = 0;
      *puVar6 = &PTR_FUN_7100aee748;
      puVar6[5] = 0;
      puVar6[6] = 0;
      puVar6[7] = 0;
      puVar6[8] = 0;
      puVar6[9] = 0;
      puVar6[10] = 0;
      *puVar4 = &PTR_FUN_7100aed270;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      puVar4[2] = puVar6;
      *(undefined2 *)(puVar6 + 4) = 0;
      *(undefined1 *)((long)puVar6 + 0x22) = 0;
      *(undefined4 *)(puVar6 + 0xb) = 0;
      *(undefined8 *)((long)puVar6 + 0x5c) = 0;
      *(undefined1 *)((long)puVar6 + 0x6f) = 0;
      FUN_71007fc4c0(puVar4,0,0);
      piVar1 = (int *)(param_1 + 8);
      puVar4[3] = param_1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *puVar4 = &PTR_LAB_7100aed830;
      puVar4[4] = puVar6;
      FUN_71007b4340(0,param_1,puVar6);
    }
    else if (param_2 == &DAT_7100d21170) {
      puVar4 = (undefined8 *)FUN_71007af5c0(0x28);
      FUN_71007bf4a0(puVar4,0);
      piVar1 = (int *)(param_1 + 8);
      puVar4[4] = param_1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *puVar4 = &PTR_LAB_7100ae70a0;
    }
    else if (param_2 == &DAT_7100d21200) {
      puVar4 = (undefined8 *)FUN_71007af5c0(0x28);
      puVar6 = (undefined8 *)FUN_71007af5c0(0x150);
      puVar6[2] = 0;
      puVar6[3] = 0;
      *puVar6 = &PTR_FUN_7100aef310;
      puVar6[5] = 0;
      puVar6[6] = 0;
      puVar6[7] = 0;
      puVar6[8] = 0;
      *puVar4 = &PTR_FUN_7100aedc10;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      puVar4[2] = puVar6;
      *(undefined1 *)(puVar6 + 4) = 0;
      puVar6[9] = 0;
      *(undefined1 *)(puVar6 + 0x29) = 0;
      FUN_71007fd320(puVar4,0);
      piVar1 = (int *)(param_1 + 8);
      puVar4[3] = param_1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *puVar4 = &PTR_LAB_7100aed898;
      puVar4[4] = puVar6;
      FUN_71007b3b80(0,param_1);
    }
    else if (param_2 == &DAT_7100d211e8) {
      puVar4 = (undefined8 *)FUN_71007af5c0(0x20);
      *(undefined4 *)(puVar4 + 1) = 0;
      *puVar4 = &PTR_FUN_7100aedbd8;
      uVar5 = FUN_71007afd60();
      puVar4[2] = uVar5;
      puVar4[3] = param_1;
      piVar1 = (int *)(param_1 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *puVar4 = &PTR_FUN_7100aed8e0;
    }
    else if (param_2 == &DAT_7100d211f8) {
      puVar4 = (undefined8 *)FUN_71007af5c0(0x18);
      *(undefined4 *)(puVar4 + 1) = 0;
      *puVar4 = &PTR_LAB_7100aeddc0;
      piVar1 = (int *)(param_1 + 8);
      puVar4[2] = param_1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *puVar4 = &PTR_LAB_7100aeda40;
    }
    else if (param_2 == &DAT_7100d21220) {
      puVar4 = (undefined8 *)FUN_71007af5c0(0x18);
      *(undefined4 *)(puVar4 + 1) = 0;
      *puVar4 = &PTR_LAB_7100aedd60;
      piVar1 = (int *)(param_1 + 8);
      puVar4[2] = param_1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *puVar4 = &PTR_LAB_7100ae70d8;
    }
    else if (param_2 == &DAT_7100d21218) {
      puVar4 = (undefined8 *)FUN_71007af5c0(0x18);
      *(undefined4 *)(puVar4 + 1) = 0;
      *puVar4 = &PTR_LAB_7100aedd90;
      piVar1 = (int *)(param_1 + 8);
      puVar4[2] = param_1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *puVar4 = &PTR_LAB_7100ae7108;
    }
    else if (param_2 == &DAT_7100d21208) {
      puVar4 = (undefined8 *)FUN_71007af5c0(0x28);
      puVar6 = (undefined8 *)FUN_71007af5c0(0xa0);
      puVar6[2] = 0;
      puVar6[3] = 0;
      *puVar6 = &PTR_FUN_7100aef2f0;
      puVar6[6] = 0;
      puVar6[7] = 0;
      puVar6[8] = 0;
      puVar6[9] = 0;
      puVar6[10] = 0;
      puVar6[0xb] = 0;
      *puVar4 = &PTR_FUN_7100aedc58;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      puVar4[2] = puVar6;
      *(undefined1 *)(puVar6 + 4) = 0;
      *(undefined8 *)((long)puVar6 + 0x24) = 0;
      *(undefined4 *)(puVar6 + 0xc) = 0;
      *(undefined8 *)((long)puVar6 + 100) = 0;
      *(undefined1 *)(puVar6 + 0x13) = 0;
      FUN_71007fc6e0(puVar4,0,0);
      piVar1 = (int *)(param_1 + 8);
      puVar4[3] = param_1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *puVar4 = &PTR_LAB_7100aed918;
      puVar4[4] = puVar6;
      FUN_71007b4620(0,param_1,puVar6);
    }
    else if (param_2 == &DAT_7100d21210) {
      puVar4 = (undefined8 *)FUN_71007af5c0(0x28);
      puVar6 = (undefined8 *)FUN_71007af5c0(0xa0);
      puVar6[2] = 0;
      puVar6[3] = 0;
      *puVar6 = &PTR_FUN_7100aef2d0;
      puVar6[6] = 0;
      puVar6[7] = 0;
      puVar6[8] = 0;
      puVar6[9] = 0;
      puVar6[10] = 0;
      puVar6[0xb] = 0;
      *puVar4 = &PTR_FUN_7100aedcc0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      puVar4[2] = puVar6;
      *(undefined1 *)(puVar6 + 4) = 0;
      *(undefined8 *)((long)puVar6 + 0x24) = 0;
      *(undefined4 *)(puVar6 + 0xc) = 0;
      *(undefined8 *)((long)puVar6 + 100) = 0;
      *(undefined1 *)(puVar6 + 0x13) = 0;
      FUN_71007fc7c0(puVar4,0,0);
      piVar1 = (int *)(param_1 + 8);
      puVar4[3] = param_1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *puVar4 = &PTR_LAB_7100aed980;
      puVar4[4] = puVar6;
      FUN_71007b4940(0,param_1,puVar6);
    }
    else {
      if (param_2 != &DAT_7100d211f0) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003ab8("cannot create shim for unknown locale::facet");
      }
      puVar4 = (undefined8 *)FUN_71007af5c0(0x28);
      FUN_71007cc020(puVar4,0);
      piVar1 = (int *)(param_1 + 8);
      puVar4[4] = param_1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *puVar4 = &PTR_LAB_7100ae7138;
    }
  }
  else {
    puVar4 = (undefined8 *)*puVar4;
  }
  return puVar4;
}



// ===== FUN_71007c5b00 @ 71007c5b00 (size=8) =====

void FUN_71007c5b00(undefined8 param_1,undefined8 *param_2)

{
  FUN_71007b6600(param_1,*param_2,param_2[1]);
  return;
}



// ===== FUN_71007c5b20 @ 71007c5b20 (size=48) =====

void FUN_71007c5b20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aec7b8;
  FUN_71007c5b00(param_1 + 1);
  return;
}



// ===== FUN_71007c5b80 @ 71007c5b80 (size=48) =====

void FUN_71007c5b80(undefined8 *param_1)

{
  FUN_71007c5b20();
  *param_1 = &PTR_FUN_7100aec830;
  return;
}



// ===== FUN_71007c5bc0 @ 71007c5bc0 (size=48) =====

void FUN_71007c5bc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aec880;
  FUN_71007c5b00(param_1 + 1);
  return;
}



// ===== FUN_71007c5e60 @ 71007c5e60 (size=52) =====

void FUN_71007c5e60(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_7100aedd60;
  FUN_71007afc60();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007c5ec0 @ 71007c5ec0 (size=52) =====

void FUN_71007c5ec0(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_7100aedd90;
  FUN_71007afc60();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007c5f20 @ 71007c5f20 (size=52) =====

void FUN_71007c5f20(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_7100aeddc0;
  FUN_71007afc60();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007c5f60 @ 71007c5f60 (size=52) =====

void FUN_71007c5f60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aedd28;
  FUN_71007fb180(param_1 + 2);
  FUN_71007afc60(param_1);
  return;
}



// ===== FUN_71007c5fa0 @ 71007c5fa0 (size=28) =====

void FUN_71007c5fa0(undefined8 param_1)

{
  FUN_71007c5f60();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007c5fc0 @ 71007c5fc0 (size=52) =====

void FUN_71007c5fc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aedbd8;
  FUN_71007fb180(param_1 + 2);
  FUN_71007afc60(param_1);
  return;
}



// ===== FUN_71007c6000 @ 71007c6000 (size=196) =====

void FUN_71007c6000(long *param_1,undefined4 *param_2,long param_3)

{
  undefined4 *puVar1;
  long lVar2;
  long local_8;
  
  lVar2 = param_3 - (long)param_2 >> 2;
  local_8 = lVar2;
  if ((ulong)(param_3 - (long)param_2) < 0xd) {
    puVar1 = (undefined4 *)*param_1;
    if (lVar2 == 1) {
      *puVar1 = *param_2;
      param_1[1] = 1;
      puVar1[1] = 0;
      return;
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_71007f2f60(param_1,&local_8,0);
    *param_1 = (long)puVar1;
    param_1[2] = local_8;
  }
  if (lVar2 == 0) {
    param_1[1] = local_8;
    *(undefined4 *)(*param_1 + local_8 * 4) = 0;
    return;
  }
  FUN_710080e900(puVar1,param_2,lVar2);
  param_1[1] = local_8;
  *(undefined4 *)(*param_1 + local_8 * 4) = 0;
  return;
}



// ===== FUN_71007c60e0 @ 71007c60e0 (size=60) =====

void FUN_71007c60e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aedbd8;
  FUN_71007fb180(param_1 + 2);
  FUN_71007afc60(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007c6120 @ 71007c6120 (size=244) =====

long * FUN_71007c6120(long *param_1,long param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  long *plVar3;
  undefined1 *puVar4;
  ulong local_8;
  
  plVar3 = param_1 + 2;
  puVar4 = *(undefined1 **)(*(long *)(param_2 + 0x10) + 0x10);
  *param_1 = (long)plVar3;
  if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string: construction from null is not valid");
  }
  uVar2 = FUN_710081ce00(puVar4);
  local_8 = uVar2;
  if (uVar2 < 0x10) {
    if (uVar2 == 1) {
      uVar1 = *puVar4;
      param_1[1] = 1;
      *(undefined1 *)(param_1 + 2) = uVar1;
      *(undefined1 *)((long)param_1 + 0x11) = 0;
      return param_1;
    }
    if (uVar2 == 0) {
      param_1[1] = 0;
      *(undefined1 *)plVar3 = 0;
      return param_1;
    }
  }
  else {
    plVar3 = (long *)FUN_71007e2140(param_1,&local_8,0);
    *param_1 = (long)plVar3;
    param_1[2] = local_8;
  }
  FUN_710080f900(plVar3,puVar4,uVar2);
  param_1[1] = local_8;
  *(undefined1 *)(*param_1 + local_8) = 0;
  return param_1;
}



// ===== FUN_71007c6220 @ 71007c6220 (size=244) =====

long * FUN_71007c6220(long *param_1,long param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  long *plVar3;
  undefined1 *puVar4;
  ulong local_8;
  
  plVar3 = param_1 + 2;
  puVar4 = *(undefined1 **)(*(long *)(param_2 + 0x10) + 0x10);
  *param_1 = (long)plVar3;
  if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string: construction from null is not valid");
  }
  uVar2 = FUN_710081ce00(puVar4);
  local_8 = uVar2;
  if (uVar2 < 0x10) {
    if (uVar2 == 1) {
      uVar1 = *puVar4;
      param_1[1] = 1;
      *(undefined1 *)(param_1 + 2) = uVar1;
      *(undefined1 *)((long)param_1 + 0x11) = 0;
      return param_1;
    }
    if (uVar2 == 0) {
      param_1[1] = 0;
      *(undefined1 *)plVar3 = 0;
      return param_1;
    }
  }
  else {
    plVar3 = (long *)FUN_71007e2140(param_1,&local_8,0);
    *param_1 = (long)plVar3;
    param_1[2] = local_8;
  }
  FUN_710080f900(plVar3,puVar4,uVar2);
  param_1[1] = local_8;
  *(undefined1 *)(*param_1 + local_8) = 0;
  return param_1;
}



// ===== FUN_71007c6320 @ 71007c6320 (size=244) =====

long * FUN_71007c6320(long *param_1,long param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  long *plVar3;
  undefined1 *puVar4;
  ulong local_8;
  
  plVar3 = param_1 + 2;
  puVar4 = *(undefined1 **)(*(long *)(param_2 + 0x10) + 0x10);
  *param_1 = (long)plVar3;
  if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string: construction from null is not valid");
  }
  uVar2 = FUN_710081ce00(puVar4);
  local_8 = uVar2;
  if (uVar2 < 0x10) {
    if (uVar2 == 1) {
      uVar1 = *puVar4;
      param_1[1] = 1;
      *(undefined1 *)(param_1 + 2) = uVar1;
      *(undefined1 *)((long)param_1 + 0x11) = 0;
      return param_1;
    }
    if (uVar2 == 0) {
      param_1[1] = 0;
      *(undefined1 *)plVar3 = 0;
      return param_1;
    }
  }
  else {
    plVar3 = (long *)FUN_71007e2140(param_1,&local_8,0);
    *param_1 = (long)plVar3;
    param_1[2] = local_8;
  }
  FUN_710080f900(plVar3,puVar4,uVar2);
  param_1[1] = local_8;
  *(undefined1 *)(*param_1 + local_8) = 0;
  return param_1;
}



// ===== FUN_71007c6420 @ 71007c6420 (size=88) =====

long * FUN_71007c6420(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x30);
  *param_1 = (long)(param_1 + 2);
  if (lVar2 != 0) {
    lVar1 = FUN_710081f600(lVar2);
    FUN_71007c6000(param_1,lVar2,lVar2 + lVar1 * 4);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string: construction from null is not valid");
}



// ===== FUN_71007c6480 @ 71007c6480 (size=88) =====

long * FUN_71007c6480(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x40);
  *param_1 = (long)(param_1 + 2);
  if (lVar2 != 0) {
    lVar1 = FUN_710081f600(lVar2);
    FUN_71007c6000(param_1,lVar2,lVar2 + lVar1 * 4);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string: construction from null is not valid");
}



// ===== FUN_71007c64e0 @ 71007c64e0 (size=88) =====

long * FUN_71007c64e0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x50);
  *param_1 = (long)(param_1 + 2);
  if (lVar2 != 0) {
    lVar1 = FUN_710081f600(lVar2);
    FUN_71007c6000(param_1,lVar2,lVar2 + lVar1 * 4);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string: construction from null is not valid");
}



// ===== FUN_71007c6540 @ 71007c6540 (size=88) =====

long * FUN_71007c6540(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x30);
  *param_1 = (long)(param_1 + 2);
  if (lVar2 != 0) {
    lVar1 = FUN_710081f600(lVar2);
    FUN_71007c6000(param_1,lVar2,lVar2 + lVar1 * 4);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string: construction from null is not valid");
}



// ===== FUN_71007c65a0 @ 71007c65a0 (size=88) =====

long * FUN_71007c65a0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x40);
  *param_1 = (long)(param_1 + 2);
  if (lVar2 != 0) {
    lVar1 = FUN_710081f600(lVar2);
    FUN_71007c6000(param_1,lVar2,lVar2 + lVar1 * 4);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string: construction from null is not valid");
}



// ===== FUN_71007c6600 @ 71007c6600 (size=88) =====

long * FUN_71007c6600(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x50);
  *param_1 = (long)(param_1 + 2);
  if (lVar2 != 0) {
    lVar1 = FUN_710081f600(lVar2);
    FUN_71007c6000(param_1,lVar2,lVar2 + lVar1 * 4);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string: construction from null is not valid");
}



// ===== FUN_71007c6660 @ 71007c6660 (size=88) =====

long * FUN_71007c6660(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x28);
  *param_1 = (long)(param_1 + 2);
  if (lVar2 != 0) {
    lVar1 = FUN_710081f600(lVar2);
    FUN_71007c6000(param_1,lVar2,lVar2 + lVar1 * 4);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string: construction from null is not valid");
}



// ===== FUN_71007c66c0 @ 71007c66c0 (size=88) =====

long * FUN_71007c66c0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x38);
  *param_1 = (long)(param_1 + 2);
  if (lVar2 != 0) {
    lVar1 = FUN_710081f600(lVar2);
    FUN_71007c6000(param_1,lVar2,lVar2 + lVar1 * 4);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string: construction from null is not valid");
}



// ===== FUN_71007c6720 @ 71007c6720 (size=256) =====

int FUN_71007c6720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *local_40;
  long lStack_38;
  undefined1 auStack_30 [16];
  undefined1 *local_20;
  long lStack_18;
  undefined1 auStack_10 [16];
  
  lStack_38 = 0;
  local_40 = auStack_30;
  FUN_71007c6000(&local_40);
  lStack_18 = 0;
  local_20 = auStack_10;
  FUN_71007c6000(&local_20,param_4,param_5);
  puVar1 = local_40 + lStack_38 * 4;
  puVar2 = local_20 + lStack_18 * 4;
  puVar5 = local_40;
  puVar6 = local_20;
  do {
    iVar3 = FUN_71007fb900(param_1,puVar5,puVar6);
    if (iVar3 != 0) {
LAB_71007c67d4:
      if (local_20 != auStack_10) {
        thunk_FUN_710081c200();
      }
      if (local_40 != auStack_30) {
        thunk_FUN_710081c200();
      }
      return iVar3;
    }
    lVar4 = FUN_710081f600(puVar5);
    puVar5 = puVar5 + lVar4 * 4;
    lVar4 = FUN_710081f600(puVar6);
    puVar6 = puVar6 + lVar4 * 4;
    if (puVar1 == puVar5 && puVar2 == puVar6) goto LAB_71007c67d4;
    if (puVar1 == puVar5) {
      iVar3 = -1;
      goto LAB_71007c67d4;
    }
    if (puVar2 == puVar6) {
      iVar3 = 1;
      goto LAB_71007c67d4;
    }
    puVar5 = puVar5 + 4;
    puVar6 = puVar6 + 4;
  } while( true );
}



// ===== FUN_71007c6840 @ 71007c6840 (size=644) =====

/* WARNING: Removing unreachable block (ram,0x0071007c6a1c) */

long * FUN_71007c6840(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  int *piVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined4 local_34;
  undefined1 auStack_10 [16];
  
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_71007c6000();
  uVar9 = param_4 - param_3;
  uVar11 = uVar9 * 2;
  if (uVar11 < 0x101) {
    lVar5 = -(uVar11 + 0xf & 0xfffffffffffffff0);
    puVar7 = &stack0xffffffffffffff60 + lVar5;
    puVar12 = &stack0xffffffffffffff60 + lVar5;
    puVar3 = (undefined4 *)FUN_710080e8e0();
    local_34 = *puVar3;
  }
  else {
    puVar3 = (undefined4 *)FUN_710080e8e0();
    local_34 = *puVar3;
    if (0x3ffffffffffffffc < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_710000389c();
    }
    puVar7 = (undefined1 *)thunk_FUN_71007af5c0(uVar11);
    puVar12 = (undefined1 *)0x0;
  }
  uVar9 = (long)uVar9 >> 1;
  puVar3 = (undefined4 *)FUN_710080e8e0();
  *puVar3 = 0;
  puVar10 = auStack_10;
  while( true ) {
    uVar11 = FUN_71007fb940(param_2,puVar7,puVar10,uVar9);
    if (uVar11 < uVar9) {
      lVar5 = param_1[1];
      puVar4 = puVar7;
    }
    else {
      piVar6 = (int *)FUN_710080e8e0();
      if (*piVar6 != 0) {
        puVar3 = (undefined4 *)FUN_710080e8e0();
                    /* WARNING: Subroutine does not return */
        FUN_7100003e58(*puVar3);
      }
      uVar9 = uVar11 + 1;
      if (0x1ffffffffffffffe < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_710000389c();
      }
      puVar4 = (undefined1 *)thunk_FUN_71007af5c0(uVar9 * 4);
      if (puVar7 != (undefined1 *)0x0 && puVar12 != puVar7) {
        thunk_FUN_710081c200(puVar7);
      }
      uVar11 = FUN_71007fb940(param_2,puVar4,puVar10,uVar9);
      lVar5 = param_1[1];
    }
    if (0x1ffffffffffffffeU - lVar5 < uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003b58("basic_string::append");
    }
    FUN_71007f35c0(param_1,puVar4);
    lVar5 = FUN_710081f600(puVar10);
    if (auStack_10 == puVar10 + lVar5 * 4) break;
    lVar8 = *param_1;
    lVar1 = param_1[1];
    if (param_1 + 2 == (long *)lVar8) {
      uVar11 = 3;
    }
    else {
      uVar11 = param_1[2];
    }
    if (uVar11 < lVar1 + 1U) {
      FUN_71007f30a0(param_1,lVar1,0,0,1);
      lVar8 = *param_1;
    }
    puVar10 = puVar10 + lVar5 * 4 + 4;
    *(undefined4 *)(lVar8 + lVar1 * 4) = 0;
    param_1[1] = lVar1 + 1U;
    *(undefined4 *)(lVar8 + lVar1 * 4 + 4) = 0;
    puVar7 = puVar4;
  }
  if (puVar4 == (undefined1 *)0x0 || puVar12 == puVar4) {
    piVar6 = (int *)FUN_710080e8e0();
    iVar2 = *piVar6;
  }
  else {
    thunk_FUN_710081c200(puVar4);
    piVar6 = (int *)FUN_710080e8e0();
    iVar2 = *piVar6;
  }
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)FUN_710080e8e0();
    *puVar3 = local_34;
  }
  return param_1;
}



// ===== FUN_71007c6b40 @ 71007c6b40 (size=4544) =====

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16]
FUN_71007c6b40(undefined8 param_1,long *param_2,ulong param_3,long *param_4,int param_5,long param_6
              ,uint *param_7,undefined8 param_8)

{
  ulong uVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  uint *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  undefined1 auVar24 [16];
  byte *local_d0;
  int local_bc;
  ulong local_b0;
  int local_78;
  uint local_60;
  undefined4 local_48;
  undefined1 *local_40;
  ulong local_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  char *local_20;
  ulong local_18;
  char local_10;
  undefined7 uStack_f;
  
  uVar19 = param_3 & 0xffffffff;
  lVar15 = FUN_71007b00e0(&DAT_7100d21118);
  plVar21 = *(long **)(*(long *)(*(long *)(param_6 + 0xd0) + 8) + lVar15 * 8);
  if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  lVar15 = FUN_71007b00e0(&DAT_7100d21208);
  lVar22 = *(long *)(*(long *)(param_6 + 0xd0) + 0x18);
  lVar23 = *(long *)(lVar22 + lVar15 * 8);
  if (lVar23 == 0) {
    puVar18 = (undefined8 *)FUN_71007af5c0(0xa0);
    *(undefined4 *)(puVar18 + 1) = 0;
    puVar18[2] = 0;
    puVar18[3] = 0;
    *puVar18 = &PTR_FUN_7100aef2f0;
    *(undefined1 *)(puVar18 + 4) = 0;
    *(undefined8 *)((long)puVar18 + 0x24) = 0;
    puVar18[6] = 0;
    puVar18[7] = 0;
    puVar18[8] = 0;
    puVar18[9] = 0;
    puVar18[10] = 0;
    puVar18[0xb] = 0;
    *(undefined4 *)(puVar18 + 0xc) = 0;
    *(undefined8 *)((long)puVar18 + 100) = 0;
    *(undefined1 *)(puVar18 + 0x13) = 0;
    FUN_71007e57e0(puVar18,param_6 + 0xd0);
    FUN_71007b05e0(*(undefined8 *)(param_6 + 0xd0),puVar18,lVar15);
    lVar23 = *(long *)(lVar22 + lVar15 * 8);
  }
  if (*(long *)(lVar23 + 0x48) == 0) {
    local_60 = 0;
  }
  else {
    local_60 = (uint)(*(long *)(lVar23 + 0x58) != 0);
  }
  local_38 = 0;
  local_30 = 0;
  local_40 = &local_30;
  if ((*(byte *)(lVar23 + 0x20) & 1) != 0) {
    FUN_71007e25c0(&local_40,0x20);
  }
  local_18 = 0;
  local_10 = '\0';
  local_20 = &local_10;
  FUN_71007e25c0(&local_20,0x20);
  bVar3 = 0;
  local_bc = 0;
  local_78 = 0;
  bVar8 = false;
  iVar13 = 0;
  local_48 = *(uint *)(lVar23 + 0x68);
  local_d0 = (byte *)&local_48;
  local_b0 = 0;
  uVar11 = local_48 & 0xff;
  bVar4 = uVar11 == 2;
  if (bVar4) goto LAB_71007c7210;
LAB_71007c6c5c:
  iVar12 = (int)uVar19;
  if (1 < uVar11 && !bVar4) {
    if (uVar11 != 3) {
      if (uVar11 != 4) goto LAB_71007c7628;
      bVar4 = iVar12 == -1;
      iVar12 = iVar13;
      if (param_2 != (long *)0x0 && bVar4) goto LAB_71007c6fd8;
LAB_71007c6f34:
      bVar5 = param_4 != (long *)0x0 && param_5 == -1;
      bVar6 = bVar4;
      if (param_4 != (long *)0x0 && param_5 == -1) goto LAB_71007c7020;
LAB_71007c6f4c:
      if ((param_5 == -1) != bVar6) {
        do {
          if (param_2 != (long *)0x0 && bVar4) {
            if ((uint *)param_2[2] < (uint *)param_2[3]) {
              uVar11 = *(uint *)param_2[2];
            }
            else {
              uVar11 = (**(code **)(*param_2 + 0x48))(param_2);
            }
            uVar20 = (ulong)uVar11;
            if (uVar11 == 0xffffffff) {
              param_2 = (long *)0x0;
            }
            lVar15 = FUN_710081d880(lVar23 + 0x70,uVar11,10);
            if (lVar15 == 0) goto LAB_71007c704c;
            cVar2 = PTR_DAT_7100af47a0[lVar15 - (lVar23 + 0x6c) >> 2];
LAB_71007c6f90:
            uVar17 = local_18;
            uVar19 = local_18 + 1;
            uVar20 = CONCAT71(uStack_f,local_10);
            if (local_20 == &local_10) {
              uVar20 = 0xf;
            }
            if (uVar20 < uVar19) {
              FUN_71007e2360(&local_20,local_18,0,0,1);
            }
            local_20[uVar17] = cVar2;
            iVar12 = iVar13 + 1;
            local_20[uVar19] = '\0';
            local_18 = uVar19;
LAB_71007c6fc4:
            uVar20 = param_2[2];
            if (uVar20 < (ulong)param_2[3]) goto LAB_71007c6fd0;
LAB_71007c70b8:
            (**(code **)(*param_2 + 0x50))(param_2);
            puVar16 = (uint *)param_2[2];
            if ((uint *)param_2[3] <= puVar16) goto LAB_71007c70d4;
LAB_71007c6fe4:
            uVar11 = *puVar16;
            iVar13 = iVar12;
          }
          else {
            lVar15 = FUN_710081d880(lVar23 + 0x70,uVar19,10);
            uVar20 = uVar19;
            if (lVar15 != 0) {
              cVar2 = PTR_DAT_7100af47a0[lVar15 - (lVar23 + 0x6c) >> 2];
              goto LAB_71007c6f90;
            }
LAB_71007c704c:
            uVar17 = local_38;
            if (*(int *)(lVar23 + 0x24) == (int)uVar20) {
              bVar9 = bVar3;
              if (bVar3 == 0) {
                if (0 < *(int *)(lVar23 + 0x60)) {
                  bVar3 = 1;
                  iVar12 = 0;
                  local_78 = iVar13;
                  goto LAB_71007c6fc4;
                }
                break;
              }
              goto LAB_71007c71c4;
            }
            if ((*(byte *)(lVar23 + 0x20) & 1) == 0) break;
            bVar9 = *(byte *)(lVar23 + 0x20);
            if (((*(int *)(lVar23 + 0x28) != (int)uVar20) || (bVar9 = bVar3, bVar3 != 0)) ||
               (iVar13 == 0)) goto LAB_71007c71c4;
            uVar19 = local_38 + 1;
            uVar20 = CONCAT71(uStack_2f,local_30);
            if (local_40 == &local_30) {
              uVar20 = 0xf;
            }
            if (uVar20 < uVar19) {
              FUN_71007e2360(&local_40,local_38,0,0,1);
            }
            local_40[uVar17] = (char)iVar13;
            iVar12 = 0;
            local_40[uVar19] = 0;
            uVar20 = param_2[2];
            local_38 = uVar19;
            if ((ulong)param_2[3] <= uVar20) goto LAB_71007c70b8;
LAB_71007c6fd0:
            param_2[2] = uVar20 + 4;
LAB_71007c6fd8:
            puVar16 = (uint *)param_2[2];
            if (puVar16 < (uint *)param_2[3]) goto LAB_71007c6fe4;
LAB_71007c70d4:
            uVar11 = (**(code **)(*param_2 + 0x48))(param_2);
            iVar13 = iVar12;
          }
          uVar19 = (ulong)uVar11;
          if (uVar11 == 0xffffffff) {
            param_2 = (long *)0x0;
            bVar4 = true;
            goto LAB_71007c6f34;
          }
          uVar19 = 0xffffffff;
          bVar4 = true;
          bVar5 = param_4 != (long *)0x0 && param_5 == -1;
          bVar6 = false;
          if (param_4 == (long *)0x0 || param_5 != -1) goto LAB_71007c6f4c;
LAB_71007c7020:
          if ((int *)param_4[2] < (int *)param_4[3]) {
            iVar12 = *(int *)param_4[2];
          }
          else {
            iVar12 = (**(code **)(*param_4 + 0x48))(param_4);
          }
          if (iVar12 == -1) {
            param_4 = (long *)0x0;
          }
          else {
            bVar5 = false;
          }
          if (bVar5 == bVar6) break;
        } while( true );
      }
      bVar9 = 1;
LAB_71007c71c4:
      uVar11 = (uint)(local_18 != 0 && bVar9 != 0);
      goto LAB_71007c71d8;
    }
    if (*(long *)(lVar23 + 0x48) == 0) {
      if (*(long *)(lVar23 + 0x58) != 0) {
LAB_71007c76fc:
        bVar5 = iVar12 == -1;
        bVar6 = param_2 != (long *)0x0;
        bVar4 = bVar5;
        if (bVar6 && bVar5) {
          if ((int *)param_2[2] < (int *)param_2[3]) {
            iVar12 = *(int *)param_2[2];
          }
          else {
            iVar12 = (**(code **)(*param_2 + 0x48))(param_2);
          }
          if (iVar12 == -1) {
            param_2 = (long *)0x0;
          }
          bVar4 = iVar12 == -1 && (bVar6 && bVar5);
        }
        bVar6 = param_5 == -1;
        bVar7 = param_4 != (long *)0x0;
        if (bVar7 && bVar6) {
          if ((int *)param_4[2] < (int *)param_4[3]) {
            iVar12 = *(int *)param_4[2];
          }
          else {
            iVar12 = (**(code **)(*param_4 + 0x48))(param_4);
          }
          if (iVar12 == -1) {
            param_4 = (long *)0x0;
          }
          bVar6 = iVar12 == -1 && (bVar7 && bVar6);
        }
        if (bVar6 != bVar4) {
          uVar20 = uVar19;
          if (param_2 != (long *)0x0 && bVar5) {
            if ((uint *)param_2[2] < (uint *)param_2[3]) {
              uVar20 = (ulong)*(uint *)param_2[2];
            }
            else {
              uVar20 = (**(code **)(*param_2 + 0x48))(param_2);
            }
            if ((int)uVar20 == -1) {
              param_2 = (long *)0x0;
            }
          }
          if (**(int **)(lVar23 + 0x50) == (int)uVar20) {
            local_b0 = *(ulong *)(lVar23 + 0x58);
            if ((ulong)param_2[2] < (ulong)param_2[3]) {
              param_2[2] = param_2[2] + 4;
            }
            else {
              (**(code **)(*param_2 + 0x50))(param_2);
            }
            uVar19 = 0xffffffff;
            uVar11 = 1;
            bVar8 = true;
            goto LAB_71007c71d8;
          }
        }
        if (*(long *)(lVar23 + 0x48) != 0) {
          lVar15 = *(long *)(lVar23 + 0x58);
          goto joined_r0x0071007c74f0;
        }
      }
    }
    else {
      bVar5 = iVar12 == -1;
      bVar6 = param_2 != (long *)0x0;
      bVar4 = bVar5;
      if (bVar6 && bVar5) {
        if ((int *)param_2[2] < (int *)param_2[3]) {
          iVar14 = *(int *)param_2[2];
        }
        else {
          iVar14 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        if (iVar14 == -1) {
          param_2 = (long *)0x0;
        }
        bVar4 = iVar14 == -1 && (bVar6 && bVar5);
      }
      bVar6 = param_5 == -1;
      bVar7 = param_4 != (long *)0x0;
      if (bVar7 && bVar6) {
        if ((int *)param_4[2] < (int *)param_4[3]) {
          iVar14 = *(int *)param_4[2];
        }
        else {
          iVar14 = (**(code **)(*param_4 + 0x48))(param_4);
        }
        if (iVar14 == -1) {
          param_4 = (long *)0x0;
        }
        bVar6 = iVar14 == -1 && (bVar7 && bVar6);
      }
      if (bVar6 != bVar4) {
        uVar20 = uVar19;
        if (param_2 != (long *)0x0 && bVar5) {
          if ((uint *)param_2[2] < (uint *)param_2[3]) {
            uVar20 = (ulong)*(uint *)param_2[2];
          }
          else {
            uVar20 = (**(code **)(*param_2 + 0x48))(param_2);
          }
          if ((int)uVar20 == -1) {
            param_2 = (long *)0x0;
          }
        }
        if (**(int **)(lVar23 + 0x40) == (int)uVar20) {
          local_b0 = *(ulong *)(lVar23 + 0x48);
          if ((ulong)param_2[2] < (ulong)param_2[3]) {
            param_2[2] = param_2[2] + 4;
          }
          else {
            (**(code **)(*param_2 + 0x50))(param_2);
          }
          uVar19 = 0xffffffff;
          uVar11 = 1;
          goto LAB_71007c71d8;
        }
      }
      if (*(long *)(lVar23 + 0x58) != 0) goto LAB_71007c76fc;
      lVar15 = *(long *)(lVar23 + 0x48);
joined_r0x0071007c74f0:
      if (lVar15 != 0) {
        uVar11 = 1;
        bVar8 = true;
        goto LAB_71007c71d8;
      }
    }
    uVar11 = local_60 ^ 1;
    goto LAB_71007c71d8;
  }
  if (uVar11 == 0) {
    uVar11 = 1;
joined_r0x0071007c729c:
    if (local_bc == 3) goto LAB_71007c6cb0;
    bVar4 = iVar12 == -1;
    if (param_2 == (long *)0x0 || iVar12 != -1) goto LAB_71007c72c0;
LAB_71007c7318:
    if ((uint *)param_2[2] < (uint *)param_2[3]) {
      uVar10 = *(uint *)param_2[2];
    }
    else {
      uVar10 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    uVar19 = (ulong)uVar10;
    bVar5 = true;
    if (uVar10 == 0xffffffff) {
      param_2 = (long *)0x0;
      bVar4 = bVar5;
LAB_71007c72c0:
      bVar6 = param_4 == (long *)0x0 || param_5 != -1;
      bVar5 = bVar4;
      if (param_4 != (long *)0x0 && param_5 == -1) goto LAB_71007c734c;
LAB_71007c72d0:
      bVar6 = param_5 == -1;
    }
    else {
      uVar19 = 0xffffffff;
      bVar6 = param_4 == (long *)0x0 || param_5 != -1;
      bVar4 = false;
      if (param_4 == (long *)0x0 || param_5 != -1) goto LAB_71007c72d0;
LAB_71007c734c:
      if ((int *)param_4[2] < (int *)param_4[3]) {
        iVar12 = *(int *)param_4[2];
      }
      else {
        iVar12 = (**(code **)(*param_4 + 0x48))(param_4);
      }
      if (iVar12 == -1) {
        param_4 = (long *)0x0;
      }
      bVar6 = iVar12 == -1 && !bVar6;
    }
    if (bVar6 != bVar4) {
      if (param_2 != (long *)0x0 && bVar5 != false) {
        if ((int *)param_2[2] < (int *)param_2[3]) {
          iVar12 = *(int *)param_2[2];
        }
        else {
          iVar12 = (**(code **)(*param_2 + 0x48))(param_2,*(code **)(*param_2 + 0x48),uVar19);
        }
        if (iVar12 == -1) {
          param_2 = (long *)0x0;
        }
      }
      uVar20 = (**(code **)(*plVar21 + 0x10))(plVar21,8);
      if ((uVar20 & 1) == 0) goto LAB_71007c71d8;
      if ((ulong)param_2[2] < (ulong)param_2[3]) {
        param_2[2] = param_2[2] + 4;
      }
      else {
        (**(code **)(*param_2 + 0x50))(param_2);
      }
      goto LAB_71007c7318;
    }
LAB_71007c71d8:
    do {
      local_bc = local_bc + 1;
      if (uVar11 == 0 || local_bc == 4) goto LAB_71007c6cb0;
      while( true ) {
        local_d0 = local_d0 + 1;
        uVar11 = (uint)*local_d0;
        bVar4 = uVar11 == 2;
        if (!bVar4) goto LAB_71007c6c5c;
LAB_71007c7210:
        if (((*(uint *)(param_6 + 0x18) >> 9 & 1) != 0) || (local_bc == 0 || 1 < local_b0)) break;
        if (local_bc == 1) {
          if (((local_60 != 0) || ((byte)local_48 == 3)) || (local_48._2_1_ == '\x01')) break;
        }
        else {
          if (local_bc != 2) goto LAB_71007c6dd0;
          if ((local_48._3_1_ == '\x04') || (local_60 != 0 && local_48._3_1_ == '\x03')) break;
        }
        local_bc = local_bc + 1;
      }
      bVar4 = (int)uVar19 == -1;
      uVar20 = *(ulong *)(lVar23 + 0x38);
      if (param_2 != (long *)0x0 && bVar4) {
        uVar17 = 0;
        goto LAB_71007c75a8;
      }
      uVar17 = 0;
LAB_71007c7544:
      bVar5 = param_4 != (long *)0x0 && param_5 == -1;
      bVar6 = bVar4;
      if (param_4 != (long *)0x0 && param_5 == -1) goto LAB_71007c75e4;
      while ((bool)(uVar17 < uVar20 & (param_5 == -1 ^ bVar6))) {
        while( true ) {
          if (param_2 == (long *)0x0 || bVar4 == false) {
            if (*(int *)(*(long *)(lVar23 + 0x30) + uVar17 * 4) != (int)uVar19) goto LAB_71007c7680;
          }
          else {
            if ((int *)param_2[2] < (int *)param_2[3]) {
              iVar12 = *(int *)param_2[2];
            }
            else {
              iVar12 = (**(code **)(*param_2 + 0x48))(param_2);
            }
            if (iVar12 == -1) {
              param_2 = (long *)0x0;
            }
            if (*(int *)(*(long *)(lVar23 + 0x30) + uVar17 * 4) != iVar12) goto LAB_71007c7680;
          }
          if ((ulong)param_2[2] < (ulong)param_2[3]) {
            uVar17 = uVar17 + 1;
            param_2[2] = param_2[2] + 4;
          }
          else {
            (**(code **)(*param_2 + 0x50))(param_2);
            uVar17 = uVar17 + 1;
          }
LAB_71007c75a8:
          if ((uint *)param_2[2] < (uint *)param_2[3]) {
            uVar11 = *(uint *)param_2[2];
          }
          else {
            uVar11 = (**(code **)(*param_2 + 0x48))(param_2);
          }
          uVar19 = (ulong)uVar11;
          bVar4 = true;
          if (uVar11 == 0xffffffff) {
            param_2 = (long *)0x0;
            goto LAB_71007c7544;
          }
          uVar19 = 0xffffffff;
          bVar6 = false;
          bVar5 = param_4 != (long *)0x0 && param_5 == -1;
          if (param_4 == (long *)0x0 || param_5 != -1) break;
LAB_71007c75e4:
          if ((int *)param_4[2] < (int *)param_4[3]) {
            iVar12 = *(int *)param_4[2];
          }
          else {
            iVar12 = (**(code **)(*param_4 + 0x48))(param_4);
          }
          if (iVar12 == -1) {
            param_4 = (long *)0x0;
          }
          else {
            bVar5 = false;
          }
          if (!(bool)(uVar17 < uVar20 & (bVar5 ^ bVar6))) goto LAB_71007c7620;
        }
      }
LAB_71007c7620:
      if (uVar20 == uVar17) {
LAB_71007c7628:
        uVar11 = 1;
      }
      else {
LAB_71007c7680:
        if (uVar17 != 0) goto LAB_71007c73ac;
        uVar11 = (uint)(*(ulong *)(param_6 + 0x18) >> 9) & 1 ^ 1;
      }
    } while( true );
  }
  bVar5 = iVar12 == -1;
  bVar6 = param_2 != (long *)0x0;
  bVar4 = bVar5;
  if (bVar6 && bVar5) {
    if ((int *)param_2[2] < (int *)param_2[3]) {
      iVar14 = *(int *)param_2[2];
    }
    else {
      iVar14 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    if (iVar14 == -1) {
      param_2 = (long *)0x0;
    }
    bVar4 = iVar14 == -1 && (bVar6 && bVar5);
  }
  bVar6 = param_5 == -1;
  bVar7 = param_4 != (long *)0x0;
  if (bVar7 && bVar6) {
    if ((int *)param_4[2] < (int *)param_4[3]) {
      iVar14 = *(int *)param_4[2];
    }
    else {
      iVar14 = (**(code **)(*param_4 + 0x48))(param_4);
    }
    if (iVar14 == -1) {
      param_4 = (long *)0x0;
    }
    bVar6 = iVar14 == -1 && (bVar7 && bVar6);
  }
  uVar11 = 0;
  if (bVar6 == bVar4) goto joined_r0x0071007c729c;
  if (param_2 != (long *)0x0 && bVar5) {
    if ((int *)param_2[2] < (int *)param_2[3]) {
      iVar14 = *(int *)param_2[2];
    }
    else {
      iVar14 = (**(code **)(*param_2 + 0x48))(param_2,*(code **)(*param_2 + 0x48),uVar19);
    }
    if (iVar14 == -1) {
      param_2 = (long *)0x0;
    }
  }
  uVar10 = (**(code **)(*plVar21 + 0x10))(plVar21,8);
  uVar11 = uVar10 & 0xff;
  if ((uVar10 & 1) == 0) goto joined_r0x0071007c729c;
  if ((ulong)param_2[2] < (ulong)param_2[3]) {
    param_2[2] = param_2[2] + 4;
  }
  else {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  if (local_bc != 3) goto LAB_71007c7318;
  uVar19 = 0xffffffff;
LAB_71007c6cb0:
  bVar4 = uVar11 != 0;
  bVar5 = (bVar4 && local_b0 != 0) && (uVar11 == 0 || local_b0 != 1);
  iVar12 = (int)uVar19;
  if (bVar4 && 1 < local_b0) {
    if (bVar8) {
      lVar15 = *(long *)(lVar23 + 0x50);
    }
    else {
      lVar15 = *(long *)(lVar23 + 0x40);
    }
    if (param_2 != (long *)0x0 && iVar12 == -1) {
      uVar20 = 1;
      goto LAB_71007c6d54;
    }
    uVar20 = 1;
    bVar6 = iVar12 == -1;
LAB_71007c6cf0:
    bVar7 = param_4 == (long *)0x0 || param_5 != -1;
    bVar4 = bVar6;
    if (param_4 != (long *)0x0 && param_5 == -1) goto LAB_71007c6d90;
    while ((uVar20 < local_b0 & (param_5 == -1 ^ bVar6)) != 0) {
      while( true ) {
        uVar17 = uVar19;
        if (param_2 != (long *)0x0 && bVar4 != false) {
          if ((uint *)param_2[2] < (uint *)param_2[3]) {
            uVar17 = (ulong)*(uint *)param_2[2];
          }
          else {
            uVar17 = (**(code **)(*param_2 + 0x48))(param_2);
          }
          if ((int)uVar17 == -1) {
            param_2 = (long *)0x0;
          }
        }
        if (*(int *)(lVar15 + uVar20 * 4) != (int)uVar17) goto LAB_71007c73ac;
        if ((ulong)param_2[2] < (ulong)param_2[3]) {
          uVar20 = uVar20 + 1;
          param_2[2] = param_2[2] + 4;
        }
        else {
          (**(code **)(*param_2 + 0x50))(param_2);
          uVar20 = uVar20 + 1;
        }
LAB_71007c6d54:
        if ((uint *)param_2[2] < (uint *)param_2[3]) {
          uVar11 = *(uint *)param_2[2];
        }
        else {
          uVar11 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        uVar19 = (ulong)uVar11;
        if (uVar11 == 0xffffffff) {
          param_2 = (long *)0x0;
          bVar6 = bVar5;
          goto LAB_71007c6cf0;
        }
        uVar19 = 0xffffffff;
        bVar7 = param_4 == (long *)0x0 || param_5 != -1;
        bVar6 = false;
        bVar4 = bVar5;
        if (bVar7) break;
LAB_71007c6d90:
        if ((int *)param_4[2] < (int *)param_4[3]) {
          iVar12 = *(int *)param_4[2];
        }
        else {
          iVar12 = (**(code **)(*param_4 + 0x48))(param_4);
        }
        if (iVar12 == -1) {
          param_4 = (long *)0x0;
        }
        if ((uVar20 < local_b0 & ((iVar12 == -1 && !bVar7) ^ bVar6)) == 0) goto LAB_71007c6dc4;
      }
    }
LAB_71007c6dc4:
    if (uVar20 != local_b0) goto LAB_71007c73ac;
LAB_71007c6dd0:
    if ((1 < local_18) && (uVar20 = FUN_71007e30c0(&local_20,0x30,0), uVar20 != 0)) {
      if (uVar20 == 0xffffffffffffffff) {
        uVar20 = local_18 - 1;
        if (local_18 == 0) {
          *local_20 = '\0';
        }
        else if (uVar20 != 0) goto LAB_71007c7a54;
      }
      else {
LAB_71007c7a54:
        uVar17 = local_18;
        if (uVar20 < local_18) {
          uVar17 = uVar20;
        }
        FUN_71007e24a0(&local_20,0,uVar17);
      }
    }
    if ((bVar8) && (*local_20 != '0')) {
      FUN_71007e2740(&local_20,0,0,1,0x2d);
    }
    uVar20 = local_38;
    if (local_38 != 0) {
      if (bVar3 == 0) {
        local_78 = iVar13;
      }
      uVar17 = local_38 + 1;
      uVar1 = CONCAT71(uStack_2f,local_30);
      if (local_40 == &local_30) {
        uVar1 = 0xf;
      }
      if (uVar1 < uVar17) {
        FUN_71007e2360(&local_40,local_38,0,0,1);
      }
      local_40[uVar20] = (undefined1)local_78;
      local_40[uVar17] = 0;
      local_38 = uVar17;
      uVar20 = FUN_71007fc3a0(*(undefined8 *)(lVar23 + 0x10),*(undefined8 *)(lVar23 + 0x18),
                              &local_40);
      if ((uVar20 & 1) == 0) {
        *param_7 = *param_7 | 4;
      }
    }
    bVar4 = (int)uVar19 == -1;
    if ((bVar3 != 0) && (*(int *)(lVar23 + 0x60) != iVar13)) goto LAB_71007c73ac;
    FUN_71007e2c60(param_8,&local_20);
    bVar8 = param_2 == (long *)0x0 || !bVar4;
    if (bVar8) goto LAB_71007c73cc;
LAB_71007c6ec0:
    if ((int *)param_2[2] < (int *)param_2[3]) {
      iVar13 = *(int *)param_2[2];
    }
    else {
      iVar13 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    if (iVar13 == -1) {
      param_2 = (long *)0x0;
    }
    bVar4 = iVar13 == -1 && !bVar8;
    bVar8 = param_5 == -1;
    if (param_4 == (long *)0x0 || !bVar8) goto LAB_71007c73e0;
  }
  else {
    if ((uVar11 & 1) != 0) goto LAB_71007c6dd0;
    bVar4 = iVar12 == -1;
LAB_71007c73ac:
    bVar8 = param_2 == (long *)0x0 || bVar4 == false;
    *param_7 = *param_7 | 4;
    if (param_2 != (long *)0x0 && bVar4 != false) goto LAB_71007c6ec0;
LAB_71007c73cc:
    bVar8 = param_5 == -1;
    if (param_4 == (long *)0x0 || !bVar8) goto LAB_71007c73e0;
  }
  if ((int *)param_4[2] < (int *)param_4[3]) {
    iVar13 = *(int *)param_4[2];
  }
  else {
    iVar13 = (**(code **)(*param_4 + 0x48))(param_4);
  }
  bVar8 = iVar13 == -1;
LAB_71007c73e0:
  if (bVar8 == bVar4) {
    *param_7 = *param_7 | 2;
  }
  if (local_20 != &local_10) {
    thunk_FUN_710081c200();
  }
  if (local_40 != &local_30) {
    thunk_FUN_710081c200();
  }
  auVar24._8_8_ = param_3 & 0xffffffff00000000 | uVar19;
  auVar24._0_8_ = param_2;
  return auVar24;
}



// ===== FUN_71007c7d60 @ 71007c7d60 (size=4544) =====

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16]
FUN_71007c7d60(undefined8 param_1,long *param_2,ulong param_3,long *param_4,int param_5,long param_6
              ,uint *param_7,undefined8 param_8)

{
  ulong uVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  uint *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  undefined1 auVar24 [16];
  byte *local_d0;
  int local_bc;
  ulong local_b0;
  int local_78;
  uint local_60;
  undefined4 local_48;
  undefined1 *local_40;
  ulong local_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  char *local_20;
  ulong local_18;
  char local_10;
  undefined7 uStack_f;
  
  uVar19 = param_3 & 0xffffffff;
  lVar15 = FUN_71007b00e0(&DAT_7100d21118);
  plVar21 = *(long **)(*(long *)(*(long *)(param_6 + 0xd0) + 8) + lVar15 * 8);
  if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  lVar15 = FUN_71007b00e0(&DAT_7100d21210);
  lVar22 = *(long *)(*(long *)(param_6 + 0xd0) + 0x18);
  lVar23 = *(long *)(lVar22 + lVar15 * 8);
  if (lVar23 == 0) {
    puVar18 = (undefined8 *)FUN_71007af5c0(0xa0);
    *(undefined4 *)(puVar18 + 1) = 0;
    puVar18[2] = 0;
    puVar18[3] = 0;
    *puVar18 = &PTR_FUN_7100aef2d0;
    *(undefined1 *)(puVar18 + 4) = 0;
    *(undefined8 *)((long)puVar18 + 0x24) = 0;
    puVar18[6] = 0;
    puVar18[7] = 0;
    puVar18[8] = 0;
    puVar18[9] = 0;
    puVar18[10] = 0;
    puVar18[0xb] = 0;
    *(undefined4 *)(puVar18 + 0xc) = 0;
    *(undefined8 *)((long)puVar18 + 100) = 0;
    *(undefined1 *)(puVar18 + 0x13) = 0;
    FUN_71007e5240(puVar18,param_6 + 0xd0);
    FUN_71007b05e0(*(undefined8 *)(param_6 + 0xd0),puVar18,lVar15);
    lVar23 = *(long *)(lVar22 + lVar15 * 8);
  }
  if (*(long *)(lVar23 + 0x48) == 0) {
    local_60 = 0;
  }
  else {
    local_60 = (uint)(*(long *)(lVar23 + 0x58) != 0);
  }
  local_38 = 0;
  local_30 = 0;
  local_40 = &local_30;
  if ((*(byte *)(lVar23 + 0x20) & 1) != 0) {
    FUN_71007e25c0(&local_40,0x20);
  }
  local_18 = 0;
  local_10 = '\0';
  local_20 = &local_10;
  FUN_71007e25c0(&local_20,0x20);
  bVar3 = 0;
  local_bc = 0;
  local_78 = 0;
  bVar8 = false;
  iVar13 = 0;
  local_48 = *(uint *)(lVar23 + 0x68);
  local_d0 = (byte *)&local_48;
  local_b0 = 0;
  uVar11 = local_48 & 0xff;
  bVar4 = uVar11 == 2;
  if (bVar4) goto LAB_71007c8430;
LAB_71007c7e7c:
  iVar12 = (int)uVar19;
  if (1 < uVar11 && !bVar4) {
    if (uVar11 != 3) {
      if (uVar11 != 4) goto LAB_71007c8848;
      bVar4 = iVar12 == -1;
      iVar12 = iVar13;
      if (param_2 != (long *)0x0 && bVar4) goto LAB_71007c81f8;
LAB_71007c8154:
      bVar5 = param_4 != (long *)0x0 && param_5 == -1;
      bVar6 = bVar4;
      if (param_4 != (long *)0x0 && param_5 == -1) goto LAB_71007c8240;
LAB_71007c816c:
      if ((param_5 == -1) != bVar6) {
        do {
          if (param_2 != (long *)0x0 && bVar4) {
            if ((uint *)param_2[2] < (uint *)param_2[3]) {
              uVar11 = *(uint *)param_2[2];
            }
            else {
              uVar11 = (**(code **)(*param_2 + 0x48))(param_2);
            }
            uVar20 = (ulong)uVar11;
            if (uVar11 == 0xffffffff) {
              param_2 = (long *)0x0;
            }
            lVar15 = FUN_710081d880(lVar23 + 0x70,uVar11,10);
            if (lVar15 == 0) goto LAB_71007c826c;
            cVar2 = PTR_DAT_7100af47a0[lVar15 - (lVar23 + 0x6c) >> 2];
LAB_71007c81b0:
            uVar17 = local_18;
            uVar19 = local_18 + 1;
            uVar20 = CONCAT71(uStack_f,local_10);
            if (local_20 == &local_10) {
              uVar20 = 0xf;
            }
            if (uVar20 < uVar19) {
              FUN_71007e2360(&local_20,local_18,0,0,1);
            }
            local_20[uVar17] = cVar2;
            iVar12 = iVar13 + 1;
            local_20[uVar19] = '\0';
            local_18 = uVar19;
LAB_71007c81e4:
            uVar20 = param_2[2];
            if (uVar20 < (ulong)param_2[3]) goto LAB_71007c81f0;
LAB_71007c82d8:
            (**(code **)(*param_2 + 0x50))(param_2);
            puVar16 = (uint *)param_2[2];
            if ((uint *)param_2[3] <= puVar16) goto LAB_71007c82f4;
LAB_71007c8204:
            uVar11 = *puVar16;
            iVar13 = iVar12;
          }
          else {
            lVar15 = FUN_710081d880(lVar23 + 0x70,uVar19,10);
            uVar20 = uVar19;
            if (lVar15 != 0) {
              cVar2 = PTR_DAT_7100af47a0[lVar15 - (lVar23 + 0x6c) >> 2];
              goto LAB_71007c81b0;
            }
LAB_71007c826c:
            uVar17 = local_38;
            if (*(int *)(lVar23 + 0x24) == (int)uVar20) {
              bVar9 = bVar3;
              if (bVar3 == 0) {
                if (0 < *(int *)(lVar23 + 0x60)) {
                  bVar3 = 1;
                  iVar12 = 0;
                  local_78 = iVar13;
                  goto LAB_71007c81e4;
                }
                break;
              }
              goto LAB_71007c83e4;
            }
            if ((*(byte *)(lVar23 + 0x20) & 1) == 0) break;
            bVar9 = *(byte *)(lVar23 + 0x20);
            if (((*(int *)(lVar23 + 0x28) != (int)uVar20) || (bVar9 = bVar3, bVar3 != 0)) ||
               (iVar13 == 0)) goto LAB_71007c83e4;
            uVar19 = local_38 + 1;
            uVar20 = CONCAT71(uStack_2f,local_30);
            if (local_40 == &local_30) {
              uVar20 = 0xf;
            }
            if (uVar20 < uVar19) {
              FUN_71007e2360(&local_40,local_38,0,0,1);
            }
            local_40[uVar17] = (char)iVar13;
            iVar12 = 0;
            local_40[uVar19] = 0;
            uVar20 = param_2[2];
            local_38 = uVar19;
            if ((ulong)param_2[3] <= uVar20) goto LAB_71007c82d8;
LAB_71007c81f0:
            param_2[2] = uVar20 + 4;
LAB_71007c81f8:
            puVar16 = (uint *)param_2[2];
            if (puVar16 < (uint *)param_2[3]) goto LAB_71007c8204;
LAB_71007c82f4:
            uVar11 = (**(code **)(*param_2 + 0x48))(param_2);
            iVar13 = iVar12;
          }
          uVar19 = (ulong)uVar11;
          if (uVar11 == 0xffffffff) {
            param_2 = (long *)0x0;
            bVar4 = true;
            goto LAB_71007c8154;
          }
          uVar19 = 0xffffffff;
          bVar4 = true;
          bVar5 = param_4 != (long *)0x0 && param_5 == -1;
          bVar6 = false;
          if (param_4 == (long *)0x0 || param_5 != -1) goto LAB_71007c816c;
LAB_71007c8240:
          if ((int *)param_4[2] < (int *)param_4[3]) {
            iVar12 = *(int *)param_4[2];
          }
          else {
            iVar12 = (**(code **)(*param_4 + 0x48))(param_4);
          }
          if (iVar12 == -1) {
            param_4 = (long *)0x0;
          }
          else {
            bVar5 = false;
          }
          if (bVar5 == bVar6) break;
        } while( true );
      }
      bVar9 = 1;
LAB_71007c83e4:
      uVar11 = (uint)(local_18 != 0 && bVar9 != 0);
      goto LAB_71007c83f8;
    }
    if (*(long *)(lVar23 + 0x48) == 0) {
      if (*(long *)(lVar23 + 0x58) != 0) {
LAB_71007c891c:
        bVar5 = iVar12 == -1;
        bVar6 = param_2 != (long *)0x0;
        bVar4 = bVar5;
        if (bVar6 && bVar5) {
          if ((int *)param_2[2] < (int *)param_2[3]) {
            iVar12 = *(int *)param_2[2];
          }
          else {
            iVar12 = (**(code **)(*param_2 + 0x48))(param_2);
          }
          if (iVar12 == -1) {
            param_2 = (long *)0x0;
          }
          bVar4 = iVar12 == -1 && (bVar6 && bVar5);
        }
        bVar6 = param_5 == -1;
        bVar7 = param_4 != (long *)0x0;
        if (bVar7 && bVar6) {
          if ((int *)param_4[2] < (int *)param_4[3]) {
            iVar12 = *(int *)param_4[2];
          }
          else {
            iVar12 = (**(code **)(*param_4 + 0x48))(param_4);
          }
          if (iVar12 == -1) {
            param_4 = (long *)0x0;
          }
          bVar6 = iVar12 == -1 && (bVar7 && bVar6);
        }
        if (bVar6 != bVar4) {
          uVar20 = uVar19;
          if (param_2 != (long *)0x0 && bVar5) {
            if ((uint *)param_2[2] < (uint *)param_2[3]) {
              uVar20 = (ulong)*(uint *)param_2[2];
            }
            else {
              uVar20 = (**(code **)(*param_2 + 0x48))(param_2);
            }
            if ((int)uVar20 == -1) {
              param_2 = (long *)0x0;
            }
          }
          if (**(int **)(lVar23 + 0x50) == (int)uVar20) {
            local_b0 = *(ulong *)(lVar23 + 0x58);
            if ((ulong)param_2[2] < (ulong)param_2[3]) {
              param_2[2] = param_2[2] + 4;
            }
            else {
              (**(code **)(*param_2 + 0x50))(param_2);
            }
            uVar19 = 0xffffffff;
            uVar11 = 1;
            bVar8 = true;
            goto LAB_71007c83f8;
          }
        }
        if (*(long *)(lVar23 + 0x48) != 0) {
          lVar15 = *(long *)(lVar23 + 0x58);
          goto joined_r0x0071007c8710;
        }
      }
    }
    else {
      bVar5 = iVar12 == -1;
      bVar6 = param_2 != (long *)0x0;
      bVar4 = bVar5;
      if (bVar6 && bVar5) {
        if ((int *)param_2[2] < (int *)param_2[3]) {
          iVar14 = *(int *)param_2[2];
        }
        else {
          iVar14 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        if (iVar14 == -1) {
          param_2 = (long *)0x0;
        }
        bVar4 = iVar14 == -1 && (bVar6 && bVar5);
      }
      bVar6 = param_5 == -1;
      bVar7 = param_4 != (long *)0x0;
      if (bVar7 && bVar6) {
        if ((int *)param_4[2] < (int *)param_4[3]) {
          iVar14 = *(int *)param_4[2];
        }
        else {
          iVar14 = (**(code **)(*param_4 + 0x48))(param_4);
        }
        if (iVar14 == -1) {
          param_4 = (long *)0x0;
        }
        bVar6 = iVar14 == -1 && (bVar7 && bVar6);
      }
      if (bVar6 != bVar4) {
        uVar20 = uVar19;
        if (param_2 != (long *)0x0 && bVar5) {
          if ((uint *)param_2[2] < (uint *)param_2[3]) {
            uVar20 = (ulong)*(uint *)param_2[2];
          }
          else {
            uVar20 = (**(code **)(*param_2 + 0x48))(param_2);
          }
          if ((int)uVar20 == -1) {
            param_2 = (long *)0x0;
          }
        }
        if (**(int **)(lVar23 + 0x40) == (int)uVar20) {
          local_b0 = *(ulong *)(lVar23 + 0x48);
          if ((ulong)param_2[2] < (ulong)param_2[3]) {
            param_2[2] = param_2[2] + 4;
          }
          else {
            (**(code **)(*param_2 + 0x50))(param_2);
          }
          uVar19 = 0xffffffff;
          uVar11 = 1;
          goto LAB_71007c83f8;
        }
      }
      if (*(long *)(lVar23 + 0x58) != 0) goto LAB_71007c891c;
      lVar15 = *(long *)(lVar23 + 0x48);
joined_r0x0071007c8710:
      if (lVar15 != 0) {
        uVar11 = 1;
        bVar8 = true;
        goto LAB_71007c83f8;
      }
    }
    uVar11 = local_60 ^ 1;
    goto LAB_71007c83f8;
  }
  if (uVar11 == 0) {
    uVar11 = 1;
joined_r0x0071007c84bc:
    if (local_bc == 3) goto LAB_71007c7ed0;
    bVar4 = iVar12 == -1;
    if (param_2 == (long *)0x0 || iVar12 != -1) goto LAB_71007c84e0;
LAB_71007c8538:
    if ((uint *)param_2[2] < (uint *)param_2[3]) {
      uVar10 = *(uint *)param_2[2];
    }
    else {
      uVar10 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    uVar19 = (ulong)uVar10;
    bVar5 = true;
    if (uVar10 == 0xffffffff) {
      param_2 = (long *)0x0;
      bVar4 = bVar5;
LAB_71007c84e0:
      bVar6 = param_4 == (long *)0x0 || param_5 != -1;
      bVar5 = bVar4;
      if (param_4 != (long *)0x0 && param_5 == -1) goto LAB_71007c856c;
LAB_71007c84f0:
      bVar6 = param_5 == -1;
    }
    else {
      uVar19 = 0xffffffff;
      bVar6 = param_4 == (long *)0x0 || param_5 != -1;
      bVar4 = false;
      if (param_4 == (long *)0x0 || param_5 != -1) goto LAB_71007c84f0;
LAB_71007c856c:
      if ((int *)param_4[2] < (int *)param_4[3]) {
        iVar12 = *(int *)param_4[2];
      }
      else {
        iVar12 = (**(code **)(*param_4 + 0x48))(param_4);
      }
      if (iVar12 == -1) {
        param_4 = (long *)0x0;
      }
      bVar6 = iVar12 == -1 && !bVar6;
    }
    if (bVar6 != bVar4) {
      if (param_2 != (long *)0x0 && bVar5 != false) {
        if ((int *)param_2[2] < (int *)param_2[3]) {
          iVar12 = *(int *)param_2[2];
        }
        else {
          iVar12 = (**(code **)(*param_2 + 0x48))(param_2,*(code **)(*param_2 + 0x48),uVar19);
        }
        if (iVar12 == -1) {
          param_2 = (long *)0x0;
        }
      }
      uVar20 = (**(code **)(*plVar21 + 0x10))(plVar21,8);
      if ((uVar20 & 1) == 0) goto LAB_71007c83f8;
      if ((ulong)param_2[2] < (ulong)param_2[3]) {
        param_2[2] = param_2[2] + 4;
      }
      else {
        (**(code **)(*param_2 + 0x50))(param_2);
      }
      goto LAB_71007c8538;
    }
LAB_71007c83f8:
    do {
      local_bc = local_bc + 1;
      if (uVar11 == 0 || local_bc == 4) goto LAB_71007c7ed0;
      while( true ) {
        local_d0 = local_d0 + 1;
        uVar11 = (uint)*local_d0;
        bVar4 = uVar11 == 2;
        if (!bVar4) goto LAB_71007c7e7c;
LAB_71007c8430:
        if (((*(uint *)(param_6 + 0x18) >> 9 & 1) != 0) || (local_bc == 0 || 1 < local_b0)) break;
        if (local_bc == 1) {
          if (((local_60 != 0) || ((byte)local_48 == 3)) || (local_48._2_1_ == '\x01')) break;
        }
        else {
          if (local_bc != 2) goto LAB_71007c7ff0;
          if ((local_48._3_1_ == '\x04') || (local_60 != 0 && local_48._3_1_ == '\x03')) break;
        }
        local_bc = local_bc + 1;
      }
      bVar4 = (int)uVar19 == -1;
      uVar20 = *(ulong *)(lVar23 + 0x38);
      if (param_2 != (long *)0x0 && bVar4) {
        uVar17 = 0;
        goto LAB_71007c87c8;
      }
      uVar17 = 0;
LAB_71007c8764:
      bVar5 = param_4 != (long *)0x0 && param_5 == -1;
      bVar6 = bVar4;
      if (param_4 != (long *)0x0 && param_5 == -1) goto LAB_71007c8804;
      while ((bool)(uVar17 < uVar20 & (param_5 == -1 ^ bVar6))) {
        while( true ) {
          if (param_2 == (long *)0x0 || bVar4 == false) {
            if (*(int *)(*(long *)(lVar23 + 0x30) + uVar17 * 4) != (int)uVar19) goto LAB_71007c88a0;
          }
          else {
            if ((int *)param_2[2] < (int *)param_2[3]) {
              iVar12 = *(int *)param_2[2];
            }
            else {
              iVar12 = (**(code **)(*param_2 + 0x48))(param_2);
            }
            if (iVar12 == -1) {
              param_2 = (long *)0x0;
            }
            if (*(int *)(*(long *)(lVar23 + 0x30) + uVar17 * 4) != iVar12) goto LAB_71007c88a0;
          }
          if ((ulong)param_2[2] < (ulong)param_2[3]) {
            uVar17 = uVar17 + 1;
            param_2[2] = param_2[2] + 4;
          }
          else {
            (**(code **)(*param_2 + 0x50))(param_2);
            uVar17 = uVar17 + 1;
          }
LAB_71007c87c8:
          if ((uint *)param_2[2] < (uint *)param_2[3]) {
            uVar11 = *(uint *)param_2[2];
          }
          else {
            uVar11 = (**(code **)(*param_2 + 0x48))(param_2);
          }
          uVar19 = (ulong)uVar11;
          bVar4 = true;
          if (uVar11 == 0xffffffff) {
            param_2 = (long *)0x0;
            goto LAB_71007c8764;
          }
          uVar19 = 0xffffffff;
          bVar6 = false;
          bVar5 = param_4 != (long *)0x0 && param_5 == -1;
          if (param_4 == (long *)0x0 || param_5 != -1) break;
LAB_71007c8804:
          if ((int *)param_4[2] < (int *)param_4[3]) {
            iVar12 = *(int *)param_4[2];
          }
          else {
            iVar12 = (**(code **)(*param_4 + 0x48))(param_4);
          }
          if (iVar12 == -1) {
            param_4 = (long *)0x0;
          }
          else {
            bVar5 = false;
          }
          if (!(bool)(uVar17 < uVar20 & (bVar5 ^ bVar6))) goto LAB_71007c8840;
        }
      }
LAB_71007c8840:
      if (uVar20 == uVar17) {
LAB_71007c8848:
        uVar11 = 1;
      }
      else {
LAB_71007c88a0:
        if (uVar17 != 0) goto LAB_71007c85cc;
        uVar11 = (uint)(*(ulong *)(param_6 + 0x18) >> 9) & 1 ^ 1;
      }
    } while( true );
  }
  bVar5 = iVar12 == -1;
  bVar6 = param_2 != (long *)0x0;
  bVar4 = bVar5;
  if (bVar6 && bVar5) {
    if ((int *)param_2[2] < (int *)param_2[3]) {
      iVar14 = *(int *)param_2[2];
    }
    else {
      iVar14 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    if (iVar14 == -1) {
      param_2 = (long *)0x0;
    }
    bVar4 = iVar14 == -1 && (bVar6 && bVar5);
  }
  bVar6 = param_5 == -1;
  bVar7 = param_4 != (long *)0x0;
  if (bVar7 && bVar6) {
    if ((int *)param_4[2] < (int *)param_4[3]) {
      iVar14 = *(int *)param_4[2];
    }
    else {
      iVar14 = (**(code **)(*param_4 + 0x48))(param_4);
    }
    if (iVar14 == -1) {
      param_4 = (long *)0x0;
    }
    bVar6 = iVar14 == -1 && (bVar7 && bVar6);
  }
  uVar11 = 0;
  if (bVar6 == bVar4) goto joined_r0x0071007c84bc;
  if (param_2 != (long *)0x0 && bVar5) {
    if ((int *)param_2[2] < (int *)param_2[3]) {
      iVar14 = *(int *)param_2[2];
    }
    else {
      iVar14 = (**(code **)(*param_2 + 0x48))(param_2,*(code **)(*param_2 + 0x48),uVar19);
    }
    if (iVar14 == -1) {
      param_2 = (long *)0x0;
    }
  }
  uVar10 = (**(code **)(*plVar21 + 0x10))(plVar21,8);
  uVar11 = uVar10 & 0xff;
  if ((uVar10 & 1) == 0) goto joined_r0x0071007c84bc;
  if ((ulong)param_2[2] < (ulong)param_2[3]) {
    param_2[2] = param_2[2] + 4;
  }
  else {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  if (local_bc != 3) goto LAB_71007c8538;
  uVar19 = 0xffffffff;
LAB_71007c7ed0:
  bVar4 = uVar11 != 0;
  bVar5 = (bVar4 && local_b0 != 0) && (uVar11 == 0 || local_b0 != 1);
  iVar12 = (int)uVar19;
  if (bVar4 && 1 < local_b0) {
    if (bVar8) {
      lVar15 = *(long *)(lVar23 + 0x50);
    }
    else {
      lVar15 = *(long *)(lVar23 + 0x40);
    }
    if (param_2 != (long *)0x0 && iVar12 == -1) {
      uVar20 = 1;
      goto LAB_71007c7f74;
    }
    uVar20 = 1;
    bVar6 = iVar12 == -1;
LAB_71007c7f10:
    bVar7 = param_4 == (long *)0x0 || param_5 != -1;
    bVar4 = bVar6;
    if (param_4 != (long *)0x0 && param_5 == -1) goto LAB_71007c7fb0;
    while ((uVar20 < local_b0 & (param_5 == -1 ^ bVar6)) != 0) {
      while( true ) {
        uVar17 = uVar19;
        if (param_2 != (long *)0x0 && bVar4 != false) {
          if ((uint *)param_2[2] < (uint *)param_2[3]) {
            uVar17 = (ulong)*(uint *)param_2[2];
          }
          else {
            uVar17 = (**(code **)(*param_2 + 0x48))(param_2);
          }
          if ((int)uVar17 == -1) {
            param_2 = (long *)0x0;
          }
        }
        if (*(int *)(lVar15 + uVar20 * 4) != (int)uVar17) goto LAB_71007c85cc;
        if ((ulong)param_2[2] < (ulong)param_2[3]) {
          uVar20 = uVar20 + 1;
          param_2[2] = param_2[2] + 4;
        }
        else {
          (**(code **)(*param_2 + 0x50))(param_2);
          uVar20 = uVar20 + 1;
        }
LAB_71007c7f74:
        if ((uint *)param_2[2] < (uint *)param_2[3]) {
          uVar11 = *(uint *)param_2[2];
        }
        else {
          uVar11 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        uVar19 = (ulong)uVar11;
        if (uVar11 == 0xffffffff) {
          param_2 = (long *)0x0;
          bVar6 = bVar5;
          goto LAB_71007c7f10;
        }
        uVar19 = 0xffffffff;
        bVar7 = param_4 == (long *)0x0 || param_5 != -1;
        bVar6 = false;
        bVar4 = bVar5;
        if (bVar7) break;
LAB_71007c7fb0:
        if ((int *)param_4[2] < (int *)param_4[3]) {
          iVar12 = *(int *)param_4[2];
        }
        else {
          iVar12 = (**(code **)(*param_4 + 0x48))(param_4);
        }
        if (iVar12 == -1) {
          param_4 = (long *)0x0;
        }
        if ((uVar20 < local_b0 & ((iVar12 == -1 && !bVar7) ^ bVar6)) == 0) goto LAB_71007c7fe4;
      }
    }
LAB_71007c7fe4:
    if (uVar20 != local_b0) goto LAB_71007c85cc;
LAB_71007c7ff0:
    if ((1 < local_18) && (uVar20 = FUN_71007e30c0(&local_20,0x30,0), uVar20 != 0)) {
      if (uVar20 == 0xffffffffffffffff) {
        uVar20 = local_18 - 1;
        if (local_18 == 0) {
          *local_20 = '\0';
        }
        else if (uVar20 != 0) goto LAB_71007c8c74;
      }
      else {
LAB_71007c8c74:
        uVar17 = local_18;
        if (uVar20 < local_18) {
          uVar17 = uVar20;
        }
        FUN_71007e24a0(&local_20,0,uVar17);
      }
    }
    if ((bVar8) && (*local_20 != '0')) {
      FUN_71007e2740(&local_20,0,0,1,0x2d);
    }
    uVar20 = local_38;
    if (local_38 != 0) {
      if (bVar3 == 0) {
        local_78 = iVar13;
      }
      uVar17 = local_38 + 1;
      uVar1 = CONCAT71(uStack_2f,local_30);
      if (local_40 == &local_30) {
        uVar1 = 0xf;
      }
      if (uVar1 < uVar17) {
        FUN_71007e2360(&local_40,local_38,0,0,1);
      }
      local_40[uVar20] = (undefined1)local_78;
      local_40[uVar17] = 0;
      local_38 = uVar17;
      uVar20 = FUN_71007fc3a0(*(undefined8 *)(lVar23 + 0x10),*(undefined8 *)(lVar23 + 0x18),
                              &local_40);
      if ((uVar20 & 1) == 0) {
        *param_7 = *param_7 | 4;
      }
    }
    bVar4 = (int)uVar19 == -1;
    if ((bVar3 != 0) && (*(int *)(lVar23 + 0x60) != iVar13)) goto LAB_71007c85cc;
    FUN_71007e2c60(param_8,&local_20);
    bVar8 = param_2 == (long *)0x0 || !bVar4;
    if (bVar8) goto LAB_71007c85ec;
LAB_71007c80e0:
    if ((int *)param_2[2] < (int *)param_2[3]) {
      iVar13 = *(int *)param_2[2];
    }
    else {
      iVar13 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    if (iVar13 == -1) {
      param_2 = (long *)0x0;
    }
    bVar4 = iVar13 == -1 && !bVar8;
    bVar8 = param_5 == -1;
    if (param_4 == (long *)0x0 || !bVar8) goto LAB_71007c8600;
  }
  else {
    if ((uVar11 & 1) != 0) goto LAB_71007c7ff0;
    bVar4 = iVar12 == -1;
LAB_71007c85cc:
    bVar8 = param_2 == (long *)0x0 || bVar4 == false;
    *param_7 = *param_7 | 4;
    if (param_2 != (long *)0x0 && bVar4 != false) goto LAB_71007c80e0;
LAB_71007c85ec:
    bVar8 = param_5 == -1;
    if (param_4 == (long *)0x0 || !bVar8) goto LAB_71007c8600;
  }
  if ((int *)param_4[2] < (int *)param_4[3]) {
    iVar13 = *(int *)param_4[2];
  }
  else {
    iVar13 = (**(code **)(*param_4 + 0x48))(param_4);
  }
  bVar8 = iVar13 == -1;
LAB_71007c8600:
  if (bVar8 == bVar4) {
    *param_7 = *param_7 | 2;
  }
  if (local_20 != &local_10) {
    thunk_FUN_710081c200();
  }
  if (local_40 != &local_30) {
    thunk_FUN_710081c200();
  }
  auVar24._8_8_ = param_3 & 0xffffffff00000000 | uVar19;
  auVar24._0_8_ = param_2;
  return auVar24;
}



// ===== FUN_71007c8f80 @ 71007c8f80 (size=164) =====

undefined1  [16]
FUN_71007c8f80(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
              undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8,
              undefined8 param_9)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 uStack_18;
  undefined1 local_10 [16];
  
  uStack_18 = 0;
  local_10[0] = 0;
  local_20 = local_10;
  if ((param_6 & 1) == 0) {
    auVar2 = FUN_71007c7d60();
  }
  else {
    auVar2 = FUN_71007c6b40();
  }
  puVar1 = local_20;
  local_28 = FUN_71007afd60();
  FUN_71007fb020(puVar1,param_9,param_8,&local_28);
  if (local_20 != local_10) {
    thunk_FUN_710081c200();
  }
  auVar2._8_8_ = param_3 & 0xffffffff00000000 | auVar2._8_8_ & 0xffffffff;
  return auVar2;
}



// ===== FUN_71007c9040 @ 71007c9040 (size=288) =====

undefined1  [16]
FUN_71007c9040(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
              undefined8 param_5,ulong param_6,long param_7,undefined8 param_8,undefined8 *param_9)

{
  long lVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 *local_20;
  long local_18;
  undefined1 local_10 [16];
  
  lVar1 = FUN_71007b00e0(&DAT_7100d21118);
  plVar2 = *(long **)(*(long *)(*(long *)(param_7 + 0xd0) + 8) + lVar1 * 8);
  if (plVar2 != (long *)0x0) {
    local_18 = 0;
    local_10[0] = 0;
    local_20 = local_10;
    if ((param_6 & 1) == 0) {
      auVar3 = FUN_71007c7d60(param_1,param_2,param_3,param_4,param_5,param_7,param_8,&local_20);
    }
    else {
      auVar3 = FUN_71007c6b40(param_1,param_2,param_3,param_4,param_5,param_7,param_8,&local_20);
    }
    lVar1 = local_18;
    if (local_18 != 0) {
      FUN_71007f3400(param_9,local_18,0);
      (**(code **)(*plVar2 + 0x58))(plVar2,local_20,local_20 + lVar1,*param_9);
    }
    if (local_20 != local_10) {
      thunk_FUN_710081c200();
    }
    auVar3._8_8_ = param_3 & 0xffffffff00000000 | auVar3._8_8_ & 0xffffffff;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003a84();
}



// ===== FUN_71007c9180 @ 71007c9180 (size=1668) =====

undefined1  [16]
FUN_71007c9180(undefined8 param_1,long *param_2,ulong param_3,long param_4,undefined4 param_5,
              undefined8 *param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uVar3;
  byte bVar4;
  bool bVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  byte *pbVar19;
  ulong uVar20;
  undefined1 auVar21 [16];
  undefined4 *local_a8;
  uint local_a0;
  undefined4 local_48;
  byte abStack_44 [4];
  undefined4 *local_40;
  ulong local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 *local_20;
  ulong local_18;
  undefined4 local_10;
  undefined4 uStack_c;
  
  lVar9 = FUN_71007b00e0(&DAT_7100d21118);
  plVar14 = *(long **)(*(long *)(*(long *)(param_4 + 0xd0) + 8) + lVar9 * 8);
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  lVar9 = FUN_71007b00e0(&DAT_7100d21208);
  lVar17 = *(long *)(*(long *)(param_4 + 0xd0) + 0x18);
  lVar16 = *(long *)(lVar17 + lVar9 * 8);
  if (lVar16 == 0) {
    puVar10 = (undefined8 *)FUN_71007af5c0(0xa0);
    *(undefined4 *)(puVar10 + 1) = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    *puVar10 = &PTR_FUN_7100aef2f0;
    *(undefined1 *)(puVar10 + 4) = 0;
    *(undefined8 *)((long)puVar10 + 0x24) = 0;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[8] = 0;
    puVar10[9] = 0;
    puVar10[10] = 0;
    puVar10[0xb] = 0;
    *(undefined4 *)(puVar10 + 0xc) = 0;
    *(undefined8 *)((long)puVar10 + 100) = 0;
    *(undefined1 *)(puVar10 + 0x13) = 0;
    FUN_71007e57e0(puVar10,param_4 + 0xd0);
    FUN_71007b05e0(*(undefined8 *)(param_4 + 0xd0),puVar10,lVar9);
    lVar16 = *(long *)(lVar17 + lVar9 * 8);
  }
  piVar18 = (int *)*param_6;
  if (*piVar18 == *(int *)(lVar16 + 0x6c)) {
    local_48 = *(undefined4 *)(lVar16 + 0x68);
    lVar9 = param_6[1];
    local_a8 = *(undefined4 **)(lVar16 + 0x50);
    uVar13 = *(ulong *)(lVar16 + 0x58);
    piVar11 = piVar18 + 1;
    if (lVar9 == 0) {
      piVar11 = piVar18;
    }
  }
  else {
    local_48 = *(undefined4 *)(lVar16 + 100);
    lVar9 = param_6[1];
    local_a8 = *(undefined4 **)(lVar16 + 0x40);
    uVar13 = *(ulong *)(lVar16 + 0x48);
    piVar11 = piVar18;
  }
  lVar9 = (**(code **)(*plVar14 + 0x28))(plVar14,4,piVar11,piVar11 + lVar9);
  uVar15 = lVar9 - (long)piVar11 >> 2;
  if (uVar15 == 0) goto LAB_71007c9240;
  lVar9 = uVar15 << 1;
  local_38 = 0;
  local_30 = 0;
  local_40 = &local_30;
  FUN_71007f31e0(&local_40,lVar9);
  iVar8 = *(int *)(lVar16 + 0x60);
  uVar12 = uVar15 - (long)iVar8;
  if ((long)uVar12 < 1) {
LAB_71007c94a8:
    if (0 < iVar8) {
      uVar3 = *(undefined4 *)(lVar16 + 0x24);
      goto LAB_71007c94bc;
    }
LAB_71007c9338:
    uVar7 = *(uint *)(param_4 + 0x18);
  }
  else {
    if (iVar8 < 0) {
      uVar12 = uVar15;
      if (*(long *)(lVar16 + 0x18) == 0) goto LAB_71007c948c;
    }
    else {
      if (*(long *)(lVar16 + 0x18) == 0) {
LAB_71007c948c:
        FUN_71007f3440(&local_40,0,local_38,piVar11,uVar12);
        iVar8 = *(int *)(lVar16 + 0x60);
        goto LAB_71007c94a8;
      }
      lVar9 = uVar12 * 2;
    }
    FUN_71007f32a0(&local_40,0,local_38,lVar9,0);
    puVar6 = local_40;
    lVar9 = FUN_71007e6660(local_40,*(undefined4 *)(lVar16 + 0x28),*(undefined8 *)(lVar16 + 0x10),
                           *(undefined8 *)(lVar16 + 0x18),piVar11,piVar11 + uVar12);
    uVar20 = lVar9 - (long)puVar6 >> 2;
    if (local_38 < uVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003bf8("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::erase",
                     uVar20);
    }
    *(undefined4 *)((long)local_40 + (lVar9 - (long)puVar6)) = 0;
    local_38 = uVar20;
    if (*(int *)(lVar16 + 0x60) < 1) goto LAB_71007c9338;
    uVar3 = *(undefined4 *)(lVar16 + 0x24);
LAB_71007c94bc:
    uVar2 = local_38;
    uVar20 = local_38 + 1;
    uVar1 = CONCAT44(uStack_2c,local_30);
    if (local_40 == &local_30) {
      uVar1 = 3;
    }
    if (uVar1 < uVar20) {
      FUN_71007f30a0(&local_40,local_38,0,0,1);
      local_40[uVar2] = uVar3;
      local_40[uVar2 + 1] = 0;
      if ((long)uVar12 < 0) goto LAB_71007c971c;
LAB_71007c94f4:
      uVar15 = (ulong)*(int *)(lVar16 + 0x60);
      piVar11 = piVar11 + uVar12;
      local_38 = uVar20;
      if (0x1ffffffffffffffe - uVar20 < uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003b58("basic_string::append",piVar11);
      }
    }
    else {
      local_40[local_38] = uVar3;
      local_40[local_38 + 1] = 0;
      if (-1 < (long)uVar12) goto LAB_71007c94f4;
LAB_71007c971c:
      local_38 = uVar20;
      FUN_71007f32a0(&local_40,uVar20,0,-uVar12,*(undefined4 *)(lVar16 + 0x70));
      if (0x1ffffffffffffffe - local_38 < uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003b58("basic_string::append");
      }
    }
    FUN_71007f35c0(&local_40,piVar11,uVar15);
    uVar7 = *(uint *)(param_4 + 0x18);
  }
  local_a0 = uVar7 & 0xb0;
  uVar15 = uVar13 + local_38;
  if ((uVar7 >> 9 & 1) != 0) {
    uVar15 = uVar15 + *(long *)(lVar16 + 0x38);
  }
  local_18 = 0;
  local_10 = 0;
  local_20 = &local_10;
  FUN_71007f31e0(&local_20,uVar15 << 1);
  uVar12 = *(ulong *)(param_4 + 0x10);
  pbVar19 = (byte *)&local_48;
  bVar5 = local_a0 == 0x10;
  do {
    uVar20 = local_18;
    bVar4 = *pbVar19;
    if (bVar4 == 2) {
      if ((*(uint *)(param_4 + 0x18) >> 9 & 1) != 0) {
        if (0x1ffffffffffffffe - local_18 < *(ulong *)(lVar16 + 0x38)) {
                    /* WARNING: Subroutine does not return */
          FUN_7100003b58("basic_string::append",*(undefined8 *)(lVar16 + 0x30));
        }
LAB_71007c9554:
        FUN_71007f35c0(&local_20);
      }
    }
    else if (bVar4 < 3) {
      if (bVar4 == 0) {
        if ((bVar5 && uVar15 <= uVar12) && (local_a0 != 0x10 || uVar12 != uVar15)) {
          FUN_71007f32a0(&local_20,local_18,0,uVar12 - uVar15,param_5);
        }
      }
      else if (bVar5 && (uVar15 <= uVar12 && uVar12 != uVar15)) {
        FUN_71007f32a0(&local_20,local_18,0,uVar12 - uVar15,param_5);
      }
      else {
        uVar1 = local_18 + 1;
        uVar2 = CONCAT44(uStack_c,local_10);
        if (local_20 == &local_10) {
          uVar2 = 3;
        }
        if (uVar2 < uVar1) {
          FUN_71007f30a0(&local_20,local_18,0,0,1);
        }
        local_20[uVar20] = param_5;
        local_20[uVar20 + 1] = 0;
        local_18 = uVar1;
      }
    }
    else if (bVar4 == 3) {
      if (uVar13 != 0) {
        uVar1 = local_18 + 1;
        uVar2 = CONCAT44(uStack_c,local_10);
        if (local_20 == &local_10) {
          uVar2 = 3;
        }
        uVar3 = *local_a8;
        if (uVar2 < uVar1) {
          FUN_71007f30a0(&local_20,local_18,0,0,1);
        }
        local_20[uVar20] = uVar3;
        local_20[uVar20 + 1] = 0;
        local_18 = uVar1;
      }
    }
    else if (bVar4 == 4) {
      if (0x1ffffffffffffffe - local_18 < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003b58("basic_string::append",local_40);
      }
      goto LAB_71007c9554;
    }
    pbVar19 = pbVar19 + 1;
  } while (abStack_44 != pbVar19);
  if (1 < uVar13) {
    if (0x1ffffffffffffffe - local_18 < uVar13 - 1) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003b58("basic_string::append",local_a8 + 1);
    }
    FUN_71007f35c0(&local_20);
  }
  uVar13 = local_18;
  if (local_18 < uVar12) {
    uVar13 = uVar12;
    if (local_a0 == 0x20) {
      FUN_71007f32a0(&local_20,local_18,0,uVar12 - local_18,param_5);
    }
    else {
      FUN_71007f32a0(&local_20,0,0,uVar12 - local_18,param_5);
    }
  }
  uVar7 = (uint)param_3 & 0xff;
  if (((param_3 & 1) == 0) &&
     (lVar9 = (**(code **)(*param_2 + 0x60))(param_2,local_20,(long)(int)uVar13),
     (int)uVar13 != lVar9)) {
    uVar7 = 1;
  }
  param_3 = param_3 & 0xffffffffffffff00 | (ulong)uVar7;
  if (local_20 != &local_10) {
    thunk_FUN_710081c200(local_20);
  }
  if (local_40 != &local_30) {
    thunk_FUN_710081c200();
  }
LAB_71007c9240:
  *(undefined8 *)(param_4 + 0x10) = 0;
  auVar21._8_8_ = param_3;
  auVar21._0_8_ = param_2;
  return auVar21;
}



// ===== FUN_71007c9860 @ 71007c9860 (size=1668) =====

undefined1  [16]
FUN_71007c9860(undefined8 param_1,long *param_2,ulong param_3,long param_4,undefined4 param_5,
              undefined8 *param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uVar3;
  byte bVar4;
  bool bVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  byte *pbVar19;
  ulong uVar20;
  undefined1 auVar21 [16];
  undefined4 *local_a8;
  uint local_a0;
  undefined4 local_48;
  byte abStack_44 [4];
  undefined4 *local_40;
  ulong local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 *local_20;
  ulong local_18;
  undefined4 local_10;
  undefined4 uStack_c;
  
  lVar9 = FUN_71007b00e0(&DAT_7100d21118);
  plVar14 = *(long **)(*(long *)(*(long *)(param_4 + 0xd0) + 8) + lVar9 * 8);
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  lVar9 = FUN_71007b00e0(&DAT_7100d21210);
  lVar17 = *(long *)(*(long *)(param_4 + 0xd0) + 0x18);
  lVar16 = *(long *)(lVar17 + lVar9 * 8);
  if (lVar16 == 0) {
    puVar10 = (undefined8 *)FUN_71007af5c0(0xa0);
    *(undefined4 *)(puVar10 + 1) = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    *puVar10 = &PTR_FUN_7100aef2d0;
    *(undefined1 *)(puVar10 + 4) = 0;
    *(undefined8 *)((long)puVar10 + 0x24) = 0;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[8] = 0;
    puVar10[9] = 0;
    puVar10[10] = 0;
    puVar10[0xb] = 0;
    *(undefined4 *)(puVar10 + 0xc) = 0;
    *(undefined8 *)((long)puVar10 + 100) = 0;
    *(undefined1 *)(puVar10 + 0x13) = 0;
    FUN_71007e5240(puVar10,param_4 + 0xd0);
    FUN_71007b05e0(*(undefined8 *)(param_4 + 0xd0),puVar10,lVar9);
    lVar16 = *(long *)(lVar17 + lVar9 * 8);
  }
  piVar18 = (int *)*param_6;
  if (*piVar18 == *(int *)(lVar16 + 0x6c)) {
    local_48 = *(undefined4 *)(lVar16 + 0x68);
    lVar9 = param_6[1];
    local_a8 = *(undefined4 **)(lVar16 + 0x50);
    uVar13 = *(ulong *)(lVar16 + 0x58);
    piVar11 = piVar18 + 1;
    if (lVar9 == 0) {
      piVar11 = piVar18;
    }
  }
  else {
    local_48 = *(undefined4 *)(lVar16 + 100);
    lVar9 = param_6[1];
    local_a8 = *(undefined4 **)(lVar16 + 0x40);
    uVar13 = *(ulong *)(lVar16 + 0x48);
    piVar11 = piVar18;
  }
  lVar9 = (**(code **)(*plVar14 + 0x28))(plVar14,4,piVar11,piVar11 + lVar9);
  uVar15 = lVar9 - (long)piVar11 >> 2;
  if (uVar15 == 0) goto LAB_71007c9920;
  lVar9 = uVar15 << 1;
  local_38 = 0;
  local_30 = 0;
  local_40 = &local_30;
  FUN_71007f31e0(&local_40,lVar9);
  iVar8 = *(int *)(lVar16 + 0x60);
  uVar12 = uVar15 - (long)iVar8;
  if ((long)uVar12 < 1) {
LAB_71007c9b88:
    if (0 < iVar8) {
      uVar3 = *(undefined4 *)(lVar16 + 0x24);
      goto LAB_71007c9b9c;
    }
LAB_71007c9a18:
    uVar7 = *(uint *)(param_4 + 0x18);
  }
  else {
    if (iVar8 < 0) {
      uVar12 = uVar15;
      if (*(long *)(lVar16 + 0x18) == 0) goto LAB_71007c9b6c;
    }
    else {
      if (*(long *)(lVar16 + 0x18) == 0) {
LAB_71007c9b6c:
        FUN_71007f3440(&local_40,0,local_38,piVar11,uVar12);
        iVar8 = *(int *)(lVar16 + 0x60);
        goto LAB_71007c9b88;
      }
      lVar9 = uVar12 * 2;
    }
    FUN_71007f32a0(&local_40,0,local_38,lVar9,0);
    puVar6 = local_40;
    lVar9 = FUN_71007e6660(local_40,*(undefined4 *)(lVar16 + 0x28),*(undefined8 *)(lVar16 + 0x10),
                           *(undefined8 *)(lVar16 + 0x18),piVar11,piVar11 + uVar12);
    uVar20 = lVar9 - (long)puVar6 >> 2;
    if (local_38 < uVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003bf8("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::erase",
                     uVar20);
    }
    *(undefined4 *)((long)local_40 + (lVar9 - (long)puVar6)) = 0;
    local_38 = uVar20;
    if (*(int *)(lVar16 + 0x60) < 1) goto LAB_71007c9a18;
    uVar3 = *(undefined4 *)(lVar16 + 0x24);
LAB_71007c9b9c:
    uVar2 = local_38;
    uVar20 = local_38 + 1;
    uVar1 = CONCAT44(uStack_2c,local_30);
    if (local_40 == &local_30) {
      uVar1 = 3;
    }
    if (uVar1 < uVar20) {
      FUN_71007f30a0(&local_40,local_38,0,0,1);
      local_40[uVar2] = uVar3;
      local_40[uVar2 + 1] = 0;
      if ((long)uVar12 < 0) goto LAB_71007c9dfc;
LAB_71007c9bd4:
      uVar15 = (ulong)*(int *)(lVar16 + 0x60);
      piVar11 = piVar11 + uVar12;
      local_38 = uVar20;
      if (0x1ffffffffffffffe - uVar20 < uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003b58("basic_string::append",piVar11);
      }
    }
    else {
      local_40[local_38] = uVar3;
      local_40[local_38 + 1] = 0;
      if (-1 < (long)uVar12) goto LAB_71007c9bd4;
LAB_71007c9dfc:
      local_38 = uVar20;
      FUN_71007f32a0(&local_40,uVar20,0,-uVar12,*(undefined4 *)(lVar16 + 0x70));
      if (0x1ffffffffffffffe - local_38 < uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003b58("basic_string::append");
      }
    }
    FUN_71007f35c0(&local_40,piVar11,uVar15);
    uVar7 = *(uint *)(param_4 + 0x18);
  }
  local_a0 = uVar7 & 0xb0;
  uVar15 = uVar13 + local_38;
  if ((uVar7 >> 9 & 1) != 0) {
    uVar15 = uVar15 + *(long *)(lVar16 + 0x38);
  }
  local_18 = 0;
  local_10 = 0;
  local_20 = &local_10;
  FUN_71007f31e0(&local_20,uVar15 << 1);
  uVar12 = *(ulong *)(param_4 + 0x10);
  pbVar19 = (byte *)&local_48;
  bVar5 = local_a0 == 0x10;
  do {
    uVar20 = local_18;
    bVar4 = *pbVar19;
    if (bVar4 == 2) {
      if ((*(uint *)(param_4 + 0x18) >> 9 & 1) != 0) {
        if (0x1ffffffffffffffe - local_18 < *(ulong *)(lVar16 + 0x38)) {
                    /* WARNING: Subroutine does not return */
          FUN_7100003b58("basic_string::append",*(undefined8 *)(lVar16 + 0x30));
        }
LAB_71007c9c34:
        FUN_71007f35c0(&local_20);
      }
    }
    else if (bVar4 < 3) {
      if (bVar4 == 0) {
        if ((bVar5 && uVar15 <= uVar12) && (local_a0 != 0x10 || uVar12 != uVar15)) {
          FUN_71007f32a0(&local_20,local_18,0,uVar12 - uVar15,param_5);
        }
      }
      else if (bVar5 && (uVar15 <= uVar12 && uVar12 != uVar15)) {
        FUN_71007f32a0(&local_20,local_18,0,uVar12 - uVar15,param_5);
      }
      else {
        uVar1 = local_18 + 1;
        uVar2 = CONCAT44(uStack_c,local_10);
        if (local_20 == &local_10) {
          uVar2 = 3;
        }
        if (uVar2 < uVar1) {
          FUN_71007f30a0(&local_20,local_18,0,0,1);
        }
        local_20[uVar20] = param_5;
        local_20[uVar20 + 1] = 0;
        local_18 = uVar1;
      }
    }
    else if (bVar4 == 3) {
      if (uVar13 != 0) {
        uVar1 = local_18 + 1;
        uVar2 = CONCAT44(uStack_c,local_10);
        if (local_20 == &local_10) {
          uVar2 = 3;
        }
        uVar3 = *local_a8;
        if (uVar2 < uVar1) {
          FUN_71007f30a0(&local_20,local_18,0,0,1);
        }
        local_20[uVar20] = uVar3;
        local_20[uVar20 + 1] = 0;
        local_18 = uVar1;
      }
    }
    else if (bVar4 == 4) {
      if (0x1ffffffffffffffe - local_18 < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003b58("basic_string::append",local_40);
      }
      goto LAB_71007c9c34;
    }
    pbVar19 = pbVar19 + 1;
  } while (abStack_44 != pbVar19);
  if (1 < uVar13) {
    if (0x1ffffffffffffffe - local_18 < uVar13 - 1) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003b58("basic_string::append",local_a8 + 1);
    }
    FUN_71007f35c0(&local_20);
  }
  uVar13 = local_18;
  if (local_18 < uVar12) {
    uVar13 = uVar12;
    if (local_a0 == 0x20) {
      FUN_71007f32a0(&local_20,local_18,0,uVar12 - local_18,param_5);
    }
    else {
      FUN_71007f32a0(&local_20,0,0,uVar12 - local_18,param_5);
    }
  }
  uVar7 = (uint)param_3 & 0xff;
  if (((param_3 & 1) == 0) &&
     (lVar9 = (**(code **)(*param_2 + 0x60))(param_2,local_20,(long)(int)uVar13),
     (int)uVar13 != lVar9)) {
    uVar7 = 1;
  }
  param_3 = param_3 & 0xffffffffffffff00 | (ulong)uVar7;
  if (local_20 != &local_10) {
    thunk_FUN_710081c200(local_20);
  }
  if (local_40 != &local_30) {
    thunk_FUN_710081c200();
  }
LAB_71007c9920:
  *(undefined8 *)(param_4 + 0x10) = 0;
  auVar21._8_8_ = param_3;
  auVar21._0_8_ = param_2;
  return auVar21;
}



// ===== FUN_71007c9f40 @ 71007c9f40 (size=380) =====

undefined1  [16]
FUN_71007c9f40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              ulong param_5,long param_6,undefined4 param_7)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_f0 [64];
  long local_28;
  undefined1 *local_20 [2];
  undefined1 auStack_10 [16];
  
  FUN_71007afd00(&local_28,param_6 + 0xd0);
  lVar3 = FUN_71007b00e0(&DAT_7100d21118);
  plVar4 = *(long **)(*(long *)(local_28 + 8) + lVar3 * 8);
  if (plVar4 != (long *)0x0) {
    puVar1 = auStack_f0;
    local_20[0] = (undefined1 *)FUN_71007afd60();
    iVar2 = FUN_71007b9ba0(param_1,local_20,auStack_f0,0x40,"%.*Lf",0);
    if (0x3f < iVar2) {
      lVar3 = -((long)(iVar2 + 1) + 0xfU & 0xfffffffffffffff0);
      puVar1 = auStack_f0 + lVar3;
      local_20[0] = (undefined1 *)FUN_71007afd60();
      iVar2 = FUN_71007b9ba0(param_1,local_20,auStack_f0 + lVar3,iVar2 + 1,"%.*Lf",0);
    }
    local_20[0] = auStack_10;
    FUN_71007f3000(local_20,(long)iVar2,0);
    (**(code **)(*plVar4 + 0x58))(plVar4,puVar1,puVar1 + iVar2,local_20[0]);
    if ((param_5 & 1) == 0) {
      auVar5 = FUN_71007c9860(param_2,param_3,param_4,param_6,param_7,local_20);
    }
    else {
      auVar5 = FUN_71007c9180();
    }
    if (local_20[0] != auStack_10) {
      thunk_FUN_710081c200();
    }
    FUN_71007b0080(&local_28);
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003a84();
}



// ===== FUN_71007ca100 @ 71007ca100 (size=648) =====

undefined1  [16]
FUN_71007ca100(undefined8 param_1,long *param_2,ulong param_3,long *param_4,int param_5,int *param_6
              ,int param_7,int param_8,ulong param_9,long param_10,uint *param_11)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  
  uVar10 = param_3 & 0xffffffff;
  lVar7 = FUN_71007b00e0(&DAT_7100d21118);
  plVar13 = *(long **)(*(long *)(*(long *)(param_10 + 0xd0) + 8) + lVar7 * 8);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  bVar3 = param_5 == -1;
  bVar4 = (int)param_3 == -1;
  if (param_2 != (long *)0x0 && bVar4) {
    iVar11 = 0;
    uVar12 = 0;
    goto LAB_71007ca214;
  }
  iVar11 = 0;
  uVar12 = 0;
LAB_71007ca188:
  bVar2 = param_4 == (long *)0x0 || !bVar3;
  bVar1 = bVar4;
  if (param_4 != (long *)0x0 && bVar3) goto LAB_71007ca248;
LAB_71007ca198:
  bVar4 = (bool)(uVar12 < param_9 & (bVar4 ^ bVar3));
  do {
    if (!bVar4) {
LAB_71007ca280:
      if ((uVar12 != 0 && param_7 <= iVar11) && iVar11 <= param_8) {
        *param_6 = iVar11;
        goto LAB_71007ca2a0;
      }
LAB_71007ca294:
      *param_11 = *param_11 | 4;
LAB_71007ca2a0:
      auVar14._8_8_ = param_3 & 0xffffffff00000000 | uVar10;
      auVar14._0_8_ = param_2;
      return auVar14;
    }
    uVar9 = uVar10;
    if (param_2 != (long *)0x0 && bVar1) {
      if ((uint *)param_2[2] < (uint *)param_2[3]) {
        uVar5 = *(uint *)param_2[2];
      }
      else {
        uVar5 = (**(code **)(*param_2 + 0x48))(param_2);
      }
      uVar9 = (ulong)uVar5;
      if (uVar5 == 0xffffffff) {
        param_2 = (long *)0x0;
      }
    }
    uVar5 = (**(code **)(*plVar13 + 0x60))(plVar13,uVar9,0x2a);
    uVar5 = (uVar5 & 0xff) - 0x30;
    if (9 < (uVar5 & 0xff)) goto LAB_71007ca280;
    iVar11 = uVar5 + iVar11 * 10;
    if (param_8 < iVar11) goto LAB_71007ca294;
    if ((ulong)param_2[2] < (ulong)param_2[3]) {
      uVar12 = uVar12 + 1;
      param_2[2] = param_2[2] + 4;
LAB_71007ca214:
      puVar8 = (uint *)param_2[2];
      if ((uint *)param_2[3] <= puVar8) goto LAB_71007ca304;
LAB_71007ca220:
      uVar5 = *puVar8;
    }
    else {
      uVar12 = uVar12 + 1;
      (**(code **)(*param_2 + 0x50))(param_2);
      puVar8 = (uint *)param_2[2];
      if (puVar8 < (uint *)param_2[3]) goto LAB_71007ca220;
LAB_71007ca304:
      uVar5 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    uVar10 = (ulong)uVar5;
    if (uVar5 == 0xffffffff) {
      param_2 = (long *)0x0;
      bVar4 = true;
      goto LAB_71007ca188;
    }
    uVar10 = 0xffffffff;
    bVar2 = param_4 == (long *)0x0 || !bVar3;
    bVar1 = true;
    bVar4 = false;
    if (bVar2) goto LAB_71007ca198;
LAB_71007ca248:
    if ((int *)param_4[2] < (int *)param_4[3]) {
      iVar6 = *(int *)param_4[2];
    }
    else {
      iVar6 = (**(code **)(*param_4 + 0x48))(param_4);
    }
    if (iVar6 == -1) {
      param_4 = (long *)0x0;
    }
    bVar4 = (bool)(uVar12 < param_9 & (bVar4 ^ (iVar6 == -1 && !bVar2)));
  } while( true );
}



// ===== FUN_71007caa40 @ 71007caa40 (size=3072) =====

undefined1  [16]
FUN_71007caa40(undefined8 param_1,long *param_2,ulong param_3,long *param_4,int param_5,
              undefined4 *param_6,long param_7,ulong param_8,long param_9,uint *param_10)

{
  ulong *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  ulong *puVar11;
  ulong uVar12;
  int *piVar13;
  ulong *puVar14;
  int *piVar16;
  bool bVar17;
  ulong uVar18;
  undefined4 *puVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  undefined1 auVar23 [16];
  ulong local_28;
  long *local_20;
  long *local_18;
  ulong local_10;
  ulong *puVar15;
  
  uVar18 = param_3 & 0xffffffff;
  lVar10 = FUN_71007b00e0(&DAT_7100d21118);
  plVar22 = *(long **)(*(long *)(*(long *)(param_9 + 0xd0) + 8) + lVar10 * 8);
  if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  bVar2 = (int)param_3 == -1;
  puVar11 = (ulong *)(&stack0xffffffffffffff50 + param_8 * -0x10);
  bVar3 = param_2 != (long *)0x0;
  local_18 = param_2;
  bVar17 = bVar2;
  if (bVar3 && bVar2) {
    if ((int *)param_2[2] < (int *)param_2[3]) {
      iVar6 = *(int *)param_2[2];
    }
    else {
      iVar6 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    if (iVar6 == -1) {
      param_2 = (long *)0x0;
    }
    local_18 = param_2;
    bVar17 = iVar6 == -1 && (bVar3 && bVar2);
  }
  bVar4 = param_5 == -1;
  bVar5 = param_4 != (long *)0x0;
  local_20 = param_4;
  bVar3 = bVar4;
  if (bVar5 && bVar4) {
    if ((int *)param_4[2] < (int *)param_4[3]) {
      iVar6 = *(int *)param_4[2];
    }
    else {
      iVar6 = (**(code **)(*param_4 + 0x48))(param_4);
    }
    if (iVar6 == -1) {
      param_4 = (long *)0x0;
    }
    local_20 = param_4;
    bVar3 = iVar6 == -1 && (bVar5 && bVar4);
  }
  if (bVar3 != bVar17) {
    uVar21 = uVar18;
    if (local_18 != (long *)0x0 && bVar2) {
      if ((uint *)local_18[2] < (uint *)local_18[3]) {
        uVar9 = *(uint *)local_18[2];
      }
      else {
        uVar9 = (**(code **)(*local_18 + 0x48))(local_18);
      }
      uVar21 = (ulong)uVar9;
      if (uVar9 == 0xffffffff) {
        local_18 = (long *)0x0;
      }
    }
    iVar6 = (**(code **)(*plVar22 + 0x40))(plVar22,uVar21);
    iVar7 = (**(code **)(*plVar22 + 0x30))(plVar22,uVar21);
    if (param_8 != 0) {
      puVar1 = puVar11 + param_8;
      local_28 = 0;
      uVar21 = 0;
      uVar20 = local_28;
      do {
        while ((local_28 = uVar20,
               iVar8 = (**(code **)(*plVar22 + 0x40))
                                 (plVar22,**(undefined4 **)(param_7 + local_28 * 8)), iVar6 == iVar8
               || (iVar8 = (**(code **)(*plVar22 + 0x30))
                                     (plVar22,**(undefined4 **)(param_7 + local_28 * 8)),
                  iVar7 == iVar8))) {
          uVar20 = uVar21 + 1;
          uVar12 = FUN_710081f600(*(undefined8 *)(param_7 + local_28 * 8));
          puVar1[uVar21] = uVar12;
          puVar11[uVar21] = local_28;
          uVar21 = uVar20;
          uVar20 = local_28 + 1;
          if (param_8 == local_28 + 1) goto LAB_71007cac38;
        }
        uVar20 = local_28 + 1;
      } while (param_8 != local_28 + 1);
LAB_71007cac38:
      local_28 = local_28 + 1;
      local_10 = 0;
      if (1 < uVar21) {
        do {
          uVar12 = *puVar1;
          uVar18 = 1;
          uVar20 = uVar12;
          do {
            puVar14 = puVar1 + uVar18;
            uVar18 = uVar18 + 1;
            if (*puVar14 < uVar20) {
              uVar20 = *puVar14;
            }
          } while (uVar18 < uVar21);
          local_10 = local_10 + 1;
          piVar16 = (int *)local_18[3];
          if ((int *)local_18[2] < piVar16) {
            local_18[2] = (long)((int *)local_18[2] + 1);
            if (local_10 != uVar20) goto LAB_71007cac90;
LAB_71007cafa0:
            piVar13 = (int *)local_18[2];
            if (piVar13 < piVar16) {
              if (*piVar13 == -1) {
LAB_71007cb4b8:
                if (local_20 == (long *)0x0) {
                  if (param_5 == -1) {
                    bVar17 = false;
                    local_18 = (long *)0x0;
                    goto LAB_71007cafd4;
                  }
                }
                else if (param_5 == -1) {
                  bVar2 = true;
                  local_18 = (long *)0x0;
                  goto LAB_71007cb2c4;
                }
                goto LAB_71007cb404;
              }
              if (local_20 == (long *)0x0) {
                if (param_5 != -1) {
LAB_71007cb500:
                  bVar17 = false;
                  local_20 = (long *)0x0;
                  goto LAB_71007cafd4;
                }
                goto LAB_71007cb310;
              }
LAB_71007cafc4:
              if (param_5 == -1) {
                bVar2 = false;
LAB_71007cb2c4:
                if ((int *)local_20[2] < (int *)local_20[3]) {
                  iVar6 = *(int *)local_20[2];
                }
                else {
                  iVar6 = (**(code **)(*local_20 + 0x48))(local_20);
                }
                bVar17 = false;
                if (iVar6 == -1) {
                  local_20 = (long *)0x0;
                }
                if ((iVar6 == -1) != bVar2) {
                  if (local_18 != (long *)0x0) goto LAB_71007cb300;
                  goto LAB_71007cb404;
                }
              }
              else {
                bVar17 = false;
              }
            }
            else {
              iVar6 = (**(code **)(*local_18 + 0x48))(local_18);
              if (iVar6 == -1) goto LAB_71007cb4b8;
              if (local_20 != (long *)0x0) goto LAB_71007cafc4;
              if (param_5 != -1) goto LAB_71007cb500;
LAB_71007cb300:
              piVar13 = (int *)local_18[2];
              if (piVar13 < (int *)local_18[3]) {
LAB_71007cb310:
                iVar6 = *piVar13;
              }
              else {
                iVar6 = (**(code **)(*local_18 + 0x48))(local_18);
              }
              if (iVar6 == -1) {
LAB_71007cb404:
                iVar6 = (**(code **)(*plVar22 + 0x40))(plVar22,0xffffffff);
                iVar7 = -1;
                local_18 = (long *)0x0;
              }
              else {
                iVar6 = (**(code **)(*plVar22 + 0x40))(plVar22);
                if ((int *)local_18[2] < (int *)local_18[3]) {
                  iVar7 = *(int *)local_18[2];
                }
                else {
                  iVar7 = (**(code **)(*local_18 + 0x48))(local_18);
                }
                if (iVar7 == -1) {
                  local_18 = (long *)0x0;
                }
              }
              uVar18 = 0;
              iVar7 = (**(code **)(*plVar22 + 0x30))(plVar22,iVar7);
              do {
                if (local_10 < puVar1[uVar18]) {
                  lVar10 = *(long *)(param_7 + puVar11[uVar18] * 8);
                  iVar8 = (**(code **)(*plVar22 + 0x40))
                                    (plVar22,*(undefined4 *)(lVar10 + local_10 * 4));
                  if ((iVar8 == iVar6) ||
                     (iVar8 = (**(code **)(*plVar22 + 0x30))
                                        (plVar22,*(undefined4 *)(lVar10 + local_10 * 4)),
                     iVar7 == iVar8)) {
                    bVar17 = true;
                    goto LAB_71007cafd4;
                  }
                }
                uVar18 = uVar18 + 1;
              } while (uVar18 < uVar21);
              bVar17 = false;
            }
LAB_71007cafd4:
            uVar18 = 0;
            while( true ) {
              if ((local_10 == uVar12) == bVar17) {
                uVar21 = uVar21 - 1;
                puVar11[uVar18] = puVar11[uVar21];
                puVar1[uVar18] = puVar1[uVar21];
              }
              else {
                uVar18 = uVar18 + 1;
              }
              if (uVar21 <= uVar18) break;
              uVar12 = puVar1[uVar18];
            }
            if (bVar17 == false) {
              if (uVar21 != 2) {
                uVar18 = 0xffffffff;
                if (uVar21 != 1) goto LAB_71007cab00;
                goto LAB_71007cacf4;
              }
              if ((local_28 & 1) == 0) {
                local_28 = local_28 >> 1;
                uVar21 = *puVar11;
                if (local_28 <= uVar21) {
                  uVar18 = 0xffffffff;
                  if (uVar21 - local_28 != *(ulong *)(&stack0xffffffffffffff58 + param_8 * -0x10))
                  goto LAB_71007cab00;
                  *puVar11 = uVar21 - local_28;
                  puVar11[param_8] = puVar1[1];
                  uVar21 = *puVar11;
                  goto LAB_71007cacf8;
                }
                if (uVar21 + local_28 == *(ulong *)(&stack0xffffffffffffff58 + param_8 * -0x10))
                goto LAB_71007cacf8;
              }
LAB_71007caf70:
              uVar18 = 0xffffffff;
              goto LAB_71007cab00;
            }
            uVar18 = *puVar1;
            if (1 < uVar21) {
              puVar14 = puVar1 + 1;
              do {
                puVar15 = puVar14 + 1;
                if (*puVar14 < uVar18) {
                  uVar18 = *puVar14;
                }
                puVar14 = puVar15;
              } while (puVar15 != puVar1 + uVar21);
            }
            if (local_10 < uVar18) {
              if (local_18 != (long *)0x0) goto LAB_71007cac94;
              goto LAB_71007cae78;
            }
            break;
          }
          (**(code **)(*local_18 + 0x50))(local_18);
          if (local_10 == uVar20) {
            piVar16 = (int *)local_18[3];
            goto LAB_71007cafa0;
          }
LAB_71007cac90:
          if (uVar20 <= local_10) break;
LAB_71007cac94:
          if ((int *)local_18[2] < (int *)local_18[3]) {
            iVar6 = *(int *)local_18[2];
          }
          else {
            iVar6 = (**(code **)(*local_18 + 0x48))(local_18);
          }
          if (iVar6 == -1) {
LAB_71007cae78:
            if (local_20 == (long *)0x0) {
              local_20 = (long *)0x0;
              if (param_5 == -1) {
                local_18 = (long *)0x0;
                break;
              }
            }
            else if (param_5 == -1) {
              local_18 = (long *)0x0;
              bVar17 = true;
              piVar16 = (int *)local_20[2];
              if (piVar16 < (int *)local_20[3]) goto LAB_71007cb04c;
              goto LAB_71007cb118;
            }
LAB_71007cae88:
            iVar7 = (**(code **)(*plVar22 + 0x40))(plVar22,0xffffffff);
            iVar6 = -1;
            local_18 = (long *)0x0;
          }
          else {
            if (local_20 == (long *)0x0) {
              if (param_5 != -1) break;
              piVar16 = (int *)local_18[2];
              if (piVar16 < (int *)local_18[3]) goto LAB_71007cb084;
LAB_71007cb0e8:
              iVar6 = (**(code **)(*local_18 + 0x48))(local_18);
            }
            else {
              if (param_5 != -1) break;
              bVar17 = false;
              piVar16 = (int *)local_20[2];
              if (piVar16 < (int *)local_20[3]) {
LAB_71007cb04c:
                iVar6 = *piVar16;
              }
              else {
LAB_71007cb118:
                iVar6 = (**(code **)(*local_20 + 0x48))(local_20);
              }
              if (iVar6 == -1) {
                local_20 = (long *)0x0;
              }
              if ((iVar6 == -1) == bVar17) break;
              if (local_18 == (long *)0x0) goto LAB_71007cae88;
              piVar16 = (int *)local_18[2];
              if ((int *)local_18[3] <= piVar16) goto LAB_71007cb0e8;
LAB_71007cb084:
              iVar6 = *piVar16;
            }
            if (iVar6 == -1) goto LAB_71007cae88;
            iVar7 = (**(code **)(*plVar22 + 0x40))(plVar22);
            if ((int *)local_18[2] < (int *)local_18[3]) {
              iVar6 = *(int *)local_18[2];
            }
            else {
              iVar6 = (**(code **)(*local_18 + 0x48))(local_18);
            }
            if (iVar6 == -1) {
              local_18 = (long *)0x0;
            }
          }
          iVar6 = (**(code **)(*plVar22 + 0x30))(plVar22,iVar6);
          if (uVar21 == 0) goto LAB_71007caf70;
          uVar18 = 0;
          do {
            while( true ) {
              lVar10 = *(long *)(param_7 + puVar11[uVar18] * 8);
              iVar8 = (**(code **)(*plVar22 + 0x40))(plVar22,*(undefined4 *)(lVar10 + local_10 * 4))
              ;
              if ((iVar8 != iVar7) &&
                 (iVar8 = (**(code **)(*plVar22 + 0x30))
                                    (plVar22,*(undefined4 *)(lVar10 + local_10 * 4)), iVar6 != iVar8
                 )) break;
              uVar18 = uVar18 + 1;
              if (uVar21 <= uVar18) goto LAB_71007caf40;
            }
            uVar21 = uVar21 - 1;
            puVar11[uVar18] = puVar11[uVar21];
            puVar1[uVar18] = puVar1[uVar21];
          } while (uVar18 < uVar21);
LAB_71007caf40:
        } while (1 < uVar21);
        uVar18 = 0xffffffff;
      }
      if (uVar21 == 1) {
        if ((ulong)local_18[2] < (ulong)local_18[3]) {
          local_18[2] = local_18[2] + 4;
        }
        else {
          (**(code **)(*local_18 + 0x50))(local_18);
        }
        local_10 = local_10 + 1;
LAB_71007cacf4:
        uVar21 = *puVar11;
LAB_71007cacf8:
        uVar20 = puVar11[param_8];
        if (local_10 < uVar20) {
          puVar19 = (undefined4 *)(*(long *)(param_7 + uVar21 * 8) + local_10 * 4);
          if (local_18 != (long *)0x0) goto LAB_71007cade4;
          if (local_20 != (long *)0x0 && bVar4) goto LAB_71007cb524;
          if (param_5 == -1) {
            uVar18 = 0xffffffff;
            goto LAB_71007cab00;
          }
          do {
            iVar6 = -1;
            iVar7 = (**(code **)(*plVar22 + 0x40))(plVar22,*puVar19);
            local_18 = (long *)0x0;
LAB_71007cad5c:
            while( true ) {
              iVar6 = (**(code **)(*plVar22 + 0x40))(plVar22,iVar6);
              if (iVar6 != iVar7) {
                iVar7 = (**(code **)(*plVar22 + 0x30))(plVar22,*puVar19);
                iVar6 = -1;
                if (local_18 != (long *)0x0) {
                  if ((int *)local_18[2] < (int *)local_18[3]) {
                    iVar6 = *(int *)local_18[2];
                  }
                  else {
                    iVar6 = (**(code **)(*local_18 + 0x48))(local_18);
                  }
                  if (iVar6 == -1) {
                    local_18 = (long *)0x0;
                  }
                }
                iVar6 = (**(code **)(*plVar22 + 0x30))(plVar22,iVar6);
                if (iVar6 != iVar7) goto LAB_71007cae14;
              }
              if ((ulong)local_18[2] < (ulong)local_18[3]) {
                local_18[2] = local_18[2] + 4;
              }
              else {
                (**(code **)(*local_18 + 0x50))(local_18);
              }
              local_10 = local_10 + 1;
              if (uVar20 == local_10) goto LAB_71007cae24;
              puVar19 = puVar19 + 1;
LAB_71007cade4:
              if ((int *)local_18[2] < (int *)local_18[3]) {
                iVar6 = *(int *)local_18[2];
              }
              else {
                iVar6 = (**(code **)(*local_18 + 0x48))(local_18);
              }
              if (iVar6 != -1) {
                if (local_20 == (long *)0x0) {
                  if (param_5 == -1) {
                    iVar7 = (**(code **)(*plVar22 + 0x40))(plVar22,*puVar19);
                    goto LAB_71007cb20c;
                  }
                }
                else if (param_5 == -1) {
                  bVar17 = false;
                  goto LAB_71007cb268;
                }
                goto LAB_71007cae14;
              }
              if (local_20 == (long *)0x0) break;
              if (param_5 == -1) {
LAB_71007cb524:
                bVar17 = true;
                local_18 = (long *)0x0;
LAB_71007cb268:
                if ((int *)local_20[2] < (int *)local_20[3]) {
                  iVar6 = *(int *)local_20[2];
                }
                else {
                  iVar6 = (**(code **)(*local_20 + 0x48))(local_20);
                }
                if (iVar6 == -1) {
                  local_20 = (long *)0x0;
                }
                if ((iVar6 == -1) != bVar17) goto code_r0x0071007cb298;
                goto LAB_71007cae14;
              }
              iVar7 = (**(code **)(*plVar22 + 0x40))(plVar22,*puVar19);
              local_18 = (long *)0x0;
              iVar6 = -1;
            }
          } while (param_5 != -1);
          local_18 = (long *)0x0;
        }
LAB_71007cae14:
        uVar18 = 0xffffffff;
        if (uVar20 == local_10) {
LAB_71007cae24:
          uVar18 = 0xffffffff;
          *param_6 = (int)uVar21;
          goto LAB_71007cab14;
        }
      }
    }
  }
LAB_71007cab00:
  *param_10 = *param_10 | 4;
LAB_71007cab14:
  auVar23._8_8_ = param_3 & 0xffffffff00000000 | uVar18;
  auVar23._0_8_ = local_18;
  return auVar23;
code_r0x0071007cb298:
  iVar6 = -1;
  iVar7 = (**(code **)(*plVar22 + 0x40))(plVar22,*puVar19);
  if (local_18 != (long *)0x0) {
LAB_71007cb20c:
    if ((int *)local_18[2] < (int *)local_18[3]) {
      iVar6 = *(int *)local_18[2];
    }
    else {
      iVar6 = (**(code **)(*local_18 + 0x48))(local_18);
    }
    if (iVar6 == -1) {
      local_18 = (long *)0x0;
    }
  }
  goto LAB_71007cad5c;
}



// ===== FUN_71007cb640 @ 71007cb640 (size=1364) =====

undefined1  [16]
FUN_71007cb640(undefined8 param_1,long *param_2,ulong param_3,long *param_4,int param_5,int *param_6
              ,long param_7,ulong param_8,long param_9,uint *param_10)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  uint *puVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 auVar21 [16];
  
  uVar18 = param_3 & 0xffffffff;
  lVar9 = FUN_71007b00e0(&DAT_7100d21118);
  plVar13 = *(long **)(*(long *)(*(long *)(param_9 + 0xd0) + 8) + lVar9 * 8);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  iVar8 = (int)param_3;
  bVar1 = iVar8 == -1;
  bVar2 = param_2 != (long *)0x0;
  lVar9 = -(param_8 * 8 + 0xf & 0xfffffffffffffff0);
  bVar5 = bVar1;
  if (bVar2 && bVar1) {
    if ((int *)param_2[2] < (int *)param_2[3]) {
      iVar6 = *(int *)param_2[2];
    }
    else {
      iVar6 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    if (iVar6 == -1) {
      param_2 = (long *)0x0;
    }
    bVar5 = iVar6 == -1 && (bVar2 && bVar1);
  }
  bVar3 = param_5 == -1;
  bVar4 = param_4 != (long *)0x0;
  bVar2 = bVar3;
  if (bVar4 && bVar3) {
    if ((int *)param_4[2] < (int *)param_4[3]) {
      iVar6 = *(int *)param_4[2];
    }
    else {
      iVar6 = (**(code **)(*param_4 + 0x48))(param_4);
    }
    if (iVar6 == -1) {
      param_4 = (long *)0x0;
    }
    bVar2 = iVar6 == -1 && (bVar4 && bVar3);
  }
  uVar19 = uVar18;
  if (bVar2 == bVar5) {
LAB_71007cb6fc:
    if (param_2 != (long *)0x0) {
LAB_71007cb8b0:
      if (iVar8 == -1) {
        puVar17 = (ulong *)0x0;
        uVar20 = 0;
        uVar15 = 0;
        goto LAB_71007cb828;
      }
      if ((param_4 != (long *)0x0) && (param_5 == -1)) {
        puVar17 = (ulong *)0x0;
        uVar20 = 0;
        uVar15 = 0;
        goto LAB_71007cb8d4;
      }
      goto LAB_71007cb718;
    }
  }
  else {
    if (param_2 == (long *)0x0 || !bVar1) {
      uVar15 = uVar18;
      if ((param_8 & 0x7fffffffffffffff) != 0) goto LAB_71007cb774;
      goto LAB_71007cb6fc;
    }
    if ((uint *)param_2[2] < (uint *)param_2[3]) {
      uVar7 = *(uint *)param_2[2];
    }
    else {
      uVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    uVar15 = (ulong)uVar7;
    if (uVar7 != 0xffffffff) {
      if (param_8 << 1 != 0) goto LAB_71007cb774;
      goto LAB_71007cb8b0;
    }
    param_2 = (long *)0x0;
    if (param_8 << 1 != 0) {
LAB_71007cb774:
      lVar16 = 0;
      uVar20 = 0;
      do {
        while ((**(int **)(param_7 + lVar16 * 8) != (int)uVar15 &&
               (iVar6 = (**(code **)(*plVar13 + 0x30))(plVar13), iVar6 != (int)uVar15))) {
          lVar16 = lVar16 + 1;
          if (lVar16 == param_8 << 1) goto LAB_71007cb7d8;
        }
        *(int *)(&stack0xffffffffffffff70 + uVar20 * 4 + lVar9) = (int)lVar16;
        lVar16 = lVar16 + 1;
        uVar20 = uVar20 + 1;
      } while (lVar16 != param_8 << 1);
LAB_71007cb7d8:
      if (uVar20 != 0) {
        if ((ulong)param_2[2] < (ulong)param_2[3]) {
          param_2[2] = param_2[2] + 4;
        }
        else {
          (**(code **)(*param_2 + 0x50))(param_2);
        }
        uVar15 = 0;
        lVar16 = -(uVar20 * 8 + 0xf & 0xfffffffffffffff0);
        puVar17 = (ulong *)(&stack0xffffffffffffff70 + lVar16 + lVar9);
        do {
          uVar10 = FUN_710081f600(*(undefined8 *)
                                   (param_7 +
                                   (long)*(int *)(&stack0xffffffffffffff70 + uVar15 * 4 + lVar9) * 8
                                   ));
          *(undefined8 *)(&stack0xffffffffffffff70 + uVar15 * 8 + lVar16 + lVar9) = uVar10;
          uVar15 = uVar15 + 1;
        } while (uVar20 != uVar15);
        uVar20 = 1;
        goto LAB_71007cb828;
      }
      goto LAB_71007cb6fc;
    }
  }
  bVar5 = iVar8 == -1;
  if (param_4 != (long *)0x0 && bVar3) {
    puVar17 = (ulong *)0x0;
    uVar20 = 0;
    uVar15 = 0;
    param_2 = (long *)0x0;
LAB_71007cb8d8:
    do {
      if ((int *)param_4[2] < (int *)param_4[3]) {
        iVar8 = *(int *)param_4[2];
      }
      else {
        iVar8 = (**(code **)(*param_4 + 0x48))(param_4);
      }
      if (iVar8 == -1) {
        param_4 = (long *)0x0;
      }
      uVar19 = uVar18;
      if ((iVar8 == -1) == bVar5) goto LAB_71007cb85c;
      if (param_2 != (long *)0x0 && (int)uVar18 == -1) goto LAB_71007cb9e4;
LAB_71007cb910:
      if (uVar15 == 0) goto LAB_71007cb718;
      uVar12 = 0;
      uVar14 = 0;
LAB_71007cb934:
      do {
        if (uVar20 < puVar17[uVar12]) {
          if (*(int *)(*(long *)(param_7 +
                                (long)*(int *)(&stack0xffffffffffffff70 + uVar12 * 4 + lVar9) * 8) +
                      uVar20 * 4) != (int)uVar18) {
            uVar15 = uVar15 - 1;
            *(undefined4 *)(&stack0xffffffffffffff70 + uVar12 * 4 + lVar9) =
                 *(undefined4 *)(&stack0xffffffffffffff70 + uVar15 * 4 + lVar9);
            puVar17[uVar12] = puVar17[uVar15];
            if (uVar15 <= uVar12) break;
            goto LAB_71007cb934;
          }
        }
        else {
          uVar14 = uVar14 + 1;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar15);
      if (uVar14 == uVar15) goto LAB_71007cb85c;
      if ((ulong)param_2[2] < (ulong)param_2[3]) {
        param_2[2] = param_2[2] + 4;
        uVar20 = uVar20 + 1;
        puVar11 = (uint *)param_2[2];
        if ((uint *)param_2[3] <= puVar11) goto LAB_71007cb9a4;
LAB_71007cb840:
        uVar7 = *puVar11;
        if (uVar7 != 0xffffffff) goto LAB_71007cb84c;
LAB_71007cb9c0:
        uVar18 = (ulong)uVar7;
        if (param_4 == (long *)0x0) {
          if (param_5 == -1) {
            uVar19 = 0xffffffff;
            param_2 = (long *)0x0;
            goto LAB_71007cb85c;
          }
        }
        else if (param_5 == -1) goto LAB_71007cbafc;
        param_2 = (long *)0x0;
        uVar19 = uVar18;
        goto LAB_71007cb910;
      }
      uVar20 = uVar20 + 1;
      (**(code **)(*param_2 + 0x50))(param_2);
LAB_71007cb828:
      puVar11 = (uint *)param_2[2];
      if (puVar11 < (uint *)param_2[3]) goto LAB_71007cb840;
LAB_71007cb9a4:
      uVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      if (uVar7 == 0xffffffff) goto LAB_71007cb9c0;
LAB_71007cb84c:
      if (param_4 == (long *)0x0) {
        if (param_5 == -1) {
LAB_71007cb9e4:
          if ((uint *)param_2[2] < (uint *)param_2[3]) {
            uVar7 = *(uint *)param_2[2];
          }
          else {
            uVar7 = (**(code **)(*param_2 + 0x48))(param_2);
          }
          uVar18 = (ulong)uVar7;
          uVar19 = 0xffffffff;
          if (uVar7 == 0xffffffff) {
            param_2 = (long *)0x0;
          }
          goto LAB_71007cb910;
        }
LAB_71007cb858:
        uVar19 = 0xffffffff;
        goto LAB_71007cb85c;
      }
      if (param_5 != -1) goto LAB_71007cb858;
      uVar18 = 0xffffffff;
LAB_71007cb8d4:
      bVar5 = false;
    } while( true );
  }
  param_2 = (long *)0x0;
LAB_71007cb718:
  *param_10 = *param_10 | 4;
LAB_71007cb72c:
  auVar21._8_8_ = param_3 & 0xffffffff00000000 | uVar19;
  auVar21._0_8_ = param_2;
  return auVar21;
LAB_71007cbafc:
  param_2 = (long *)0x0;
  bVar5 = true;
  goto LAB_71007cb8d8;
LAB_71007cb85c:
  if (uVar15 == 1) {
    uVar18 = *puVar17;
joined_r0x0071007cba58:
    if (uVar18 == uVar20) {
LAB_71007cb870:
      iVar6 = *(int *)(&stack0xffffffffffffff70 + lVar9);
      iVar8 = iVar6 - (int)param_8;
      if (iVar6 < (int)param_8) {
        iVar8 = iVar6;
      }
      *param_6 = iVar8;
      goto LAB_71007cb72c;
    }
  }
  else if (uVar15 == 2) {
    if (*puVar17 != uVar20) {
      uVar18 = puVar17[1];
      goto joined_r0x0071007cba58;
    }
    goto LAB_71007cb870;
  }
  goto LAB_71007cb718;
}



// ===== FUN_71007cc020 @ 71007cc020 (size=64) =====

void FUN_71007cc020(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  *param_1 = &PTR_FUN_7100aedd28;
  uVar1 = FUN_71007afd60();
  param_1[2] = uVar1;
  return;
}



// ===== FUN_71007cc080 @ 71007cc080 (size=60) =====

void FUN_71007cc080(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0 && *(int *)(param_1 + 1) == -1) {
    if ((int *)plVar2[3] <= (int *)plVar2[2]) {
      iVar1 = (**(code **)(*plVar2 + 0x48))(plVar2);
      if (iVar1 == -1) {
        *param_1 = 0;
      }
      return;
    }
    if (*(int *)plVar2[2] == -1) {
      *param_1 = 0;
      return;
    }
  }
  return;
}



// ===== FUN_71007cc0bc @ 71007cc0bc (size=56) =====

void FUN_71007cc0bc(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_3 + 0x48))(param_3);
  if (iVar1 == -1) {
    *param_2 = 0;
  }
  return;
}



// ===== FUN_71007cc100 @ 71007cc100 (size=6256) =====

undefined1  [16]
FUN_71007cc100(undefined8 param_1,long *param_2,ulong param_3,long *param_4,ulong param_5,
              long param_6,uint *param_7,uint *param_8,long param_9,uint *param_10)

{
  undefined1 auVar1 [12];
  bool bVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar13;
  undefined4 uVar14;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 *puVar20;
  ulong uVar21;
  char *pcVar22;
  int *piVar23;
  byte bVar24;
  undefined *puVar25;
  int *piVar26;
  code *pcVar27;
  ulong uVar28;
  long lVar29;
  bool bVar30;
  long *plVar31;
  undefined1 auVar32 [16];
  undefined1 local_190 [12];
  undefined4 uStack_184;
  uint local_178;
  uint local_174;
  int *local_170;
  int *piStack_168;
  undefined1 auStack_158 [40];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
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
  
  local_190._8_4_ = (undefined4)param_3;
  uStack_184 = (undefined4)(param_3 >> 0x20);
  local_190._0_8_ = param_2;
  uVar15 = FUN_71007b00e0(&DAT_7100d22830);
  if (((uVar15 < *(ulong *)(*(long *)(param_6 + 0xd0) + 0x10)) &&
      (lVar16 = *(long *)(*(long *)(*(long *)(param_6 + 0xd0) + 8) + uVar15 * 8), lVar16 != 0)) &&
     (lVar16 = FUN_71007f9ea0(lVar16,&PTR_PTR_FUN_7100aec798,&PTR_PTR_FUN_7100aeecb0,0), lVar16 != 0
     )) {
    lVar17 = FUN_71007b00e0(&DAT_7100d21118);
    plVar31 = *(long **)(*(long *)(*(long *)(param_6 + 0xd0) + 8) + lVar17 * 8);
    if (plVar31 != (long *)0x0) {
      uVar18 = FUN_710081f600(param_9);
      uVar15 = 0;
      iVar8 = (int)param_5;
      local_178 = 0;
      bVar3 = iVar8 == -1;
      uVar28 = param_3 & 0xffffffff;
LAB_71007cc1cc:
      bVar4 = (int)uVar28 == -1;
      if (param_2 != (long *)0x0 && (bool)bVar4) goto LAB_71007cc30c;
LAB_71007cc1e4:
      bVar2 = param_4 == (long *)0x0 || !bVar3;
      bVar5 = bVar4;
      if (param_4 != (long *)0x0 && bVar3) goto LAB_71007cc344;
LAB_71007cc1f4:
      uVar11 = (uint)uVar28;
      bVar2 = (bool)(uVar15 < uVar18 & (bVar3 ^ bVar4));
      bVar4 = uVar15 < uVar18 & (bVar3 ^ bVar4);
joined_r0x0071007cc214:
      if (bVar4 == 0) {
        if (local_178 == 0 && uVar18 == uVar15) goto LAB_71007cc39c;
LAB_71007cc38c:
        *param_7 = *param_7 | 4;
LAB_71007cc39c:
        auVar32._8_4_ = uVar11;
        auVar32._0_8_ = param_2;
        auVar32._12_4_ = uStack_184;
        return auVar32;
      }
      uVar11 = (uint)uVar28;
      if (local_178 != 0) goto LAB_71007cc38c;
      lVar29 = uVar15 * 4;
      lVar17 = param_9 + uVar15 * 4;
      cVar7 = (**(code **)(*plVar31 + 0x60))(plVar31,*(undefined4 *)(param_9 + lVar29),0);
      if (cVar7 != '%') {
        bVar4 = (**(code **)(*plVar31 + 0x10))(plVar31,8,*(undefined4 *)(param_9 + lVar29));
        if ((bVar4 & 1) == 0) {
          iVar9 = (**(code **)(*plVar31 + 0x40))(plVar31,*(undefined4 *)(param_9 + lVar29));
          uVar21 = uVar28;
          if (param_2 == (long *)0x0 || bVar5 == 0) {
LAB_71007cc294:
            iVar10 = (**(code **)(*plVar31 + 0x40))(plVar31,uVar21);
            if (iVar9 != iVar10) {
              iVar9 = (**(code **)(*plVar31 + 0x30))(plVar31,*(undefined4 *)(param_9 + lVar29));
              uVar21 = uVar28;
LAB_71007cc2c8:
              iVar10 = (**(code **)(*plVar31 + 0x30))(plVar31,uVar21);
              if (iVar10 != iVar9) goto switchD_71007cc418_caseD_26;
            }
          }
          else {
            if ((uint *)param_2[2] < (uint *)param_2[3]) {
              uVar11 = *(uint *)param_2[2];
            }
            else {
              uVar11 = (**(code **)(*param_2 + 0x48))(param_2);
            }
            uVar21 = (ulong)uVar11;
            if (uVar11 == 0xffffffff) {
              param_2 = (long *)0x0;
              goto LAB_71007cc294;
            }
            iVar10 = (**(code **)(*plVar31 + 0x40))(plVar31);
            if (iVar9 != iVar10) {
              iVar9 = (**(code **)(*plVar31 + 0x30))(plVar31,*(undefined4 *)(param_9 + lVar29));
              if ((uint *)param_2[2] < (uint *)param_2[3]) {
                uVar11 = *(uint *)param_2[2];
              }
              else {
                uVar11 = (**(code **)(*param_2 + 0x48))(param_2);
              }
              uVar21 = (ulong)uVar11;
              if (uVar11 == 0xffffffff) {
                param_2 = (long *)0x0;
              }
              goto LAB_71007cc2c8;
            }
          }
          if ((ulong)param_2[2] < (ulong)param_2[3]) {
            uVar15 = uVar15 + 1;
            param_2[2] = param_2[2] + 4;
          }
          else {
            uVar15 = uVar15 + 1;
            (**(code **)(*param_2 + 0x50))(param_2);
          }
          goto LAB_71007cc30c;
        }
        bVar5 = uVar11 == 0xffffffff;
        uVar21 = uVar28;
        if (param_2 == (long *)0x0) {
          bVar24 = 0;
          if (param_4 != (long *)0x0 && bVar3) {
LAB_71007cc4d0:
            do {
              if ((int *)param_4[2] < (int *)param_4[3]) {
                iVar9 = *(int *)param_4[2];
              }
              else {
                iVar9 = (**(code **)(*param_4 + 0x48))(param_4);
              }
              if (iVar9 == -1) {
                param_4 = (long *)0x0;
              }
              if ((iVar9 == -1) == (bool)bVar5) goto LAB_71007cc2ec;
              uVar21 = uVar28;
              if ((bVar24 & 1) == 0) goto LAB_71007cc468;
              while( true ) {
                if ((uint *)param_2[2] < (uint *)param_2[3]) {
                  uVar19 = (ulong)*(uint *)param_2[2];
                }
                else {
                  uVar19 = (**(code **)(*param_2 + 0x48))(param_2);
                }
                uVar21 = uVar19 & 0xffffffff;
                if ((int)uVar19 != -1) goto LAB_71007cc468;
                param_2 = (long *)0x0;
                uVar21 = (**(code **)(*plVar31 + 0x10))(plVar31,8,uVar19 & 0xffffffff);
                while( true ) {
                  if ((uVar21 & 1) == 0) {
                    uVar15 = uVar15 + 1;
                    goto LAB_71007cc1cc;
                  }
                  if ((ulong)param_2[2] < (ulong)param_2[3]) {
                    param_2[2] = param_2[2] + 4;
                  }
                  else {
                    (**(code **)(*param_2 + 0x50))(param_2);
                  }
LAB_71007cc498:
                  if ((uint *)param_2[2] < (uint *)param_2[3]) {
                    uVar11 = *(uint *)param_2[2];
                  }
                  else {
                    uVar11 = (**(code **)(*param_2 + 0x48))(param_2);
                  }
                  uVar28 = (ulong)uVar11;
                  if (uVar11 != 0xffffffff) break;
                  if (param_4 == (long *)0x0) {
                    if (iVar8 == -1) {
                      uVar15 = uVar15 + 1;
                      param_2 = (long *)0x0;
                      goto LAB_71007cc1e4;
                    }
                  }
                  else if (iVar8 == -1) {
                    bVar24 = 0;
                    param_2 = (long *)0x0;
                    bVar5 = bVar4;
                    goto LAB_71007cc4d0;
                  }
                  param_2 = (long *)0x0;
                  uVar21 = uVar28;
                  uVar28 = 0xffffffff;
LAB_71007cc468:
                  uVar21 = (**(code **)(*plVar31 + 0x10))(plVar31,8,uVar21);
                }
                if (param_4 != (long *)0x0) break;
                if (iVar8 != -1) goto LAB_71007cc4c0;
                uVar28 = 0xffffffff;
              }
              if (iVar8 != -1) goto LAB_71007cc4c0;
              uVar28 = param_5 & 0xffffffff;
              bVar5 = 0;
              bVar24 = bVar4;
            } while( true );
          }
          if (bVar3 != (bool)bVar5) goto LAB_71007cc468;
          bVar4 = uVar11 == 0xffffffff;
          uVar15 = uVar15 + 1;
        }
        else {
          if ((bool)bVar5) goto LAB_71007cc498;
          if (param_4 == (long *)0x0) {
            if (iVar8 == -1) goto LAB_71007cc468;
          }
          else if (iVar8 == -1) {
            bVar5 = 0;
            bVar24 = 0;
            goto LAB_71007cc4d0;
          }
          uVar15 = uVar15 + 1;
          bVar4 = 0;
        }
        goto LAB_71007cc1e4;
      }
      cVar7 = (**(code **)(*plVar31 + 0x60))(plVar31,*(undefined4 *)(lVar17 + 4),0);
      local_174 = 0;
      if (cVar7 == 'E' || cVar7 == 'O') {
        uVar15 = uVar15 + 2;
        cVar7 = (**(code **)(*plVar31 + 0x60))(plVar31,*(undefined4 *)(lVar17 + 8),0);
      }
      else {
        uVar15 = uVar15 + 1;
      }
      local_190._8_4_ = uVar11;
      local_190._0_8_ = param_2;
      switch(cVar7) {
      case '%':
        if (param_2 != (long *)0x0 && bVar5 != 0) {
          if ((uint *)param_2[2] < (uint *)param_2[3]) {
            uVar11 = *(uint *)param_2[2];
          }
          else {
            uVar11 = (**(code **)(*param_2 + 0x48))(param_2);
          }
          if (uVar11 == 0xffffffff) {
            param_2 = (long *)0x0;
          }
        }
        uVar13 = (**(code **)(*plVar31 + 0x50))(plVar31,0x25);
        if (uVar13 != uVar11) goto switchD_71007cc418_caseD_26;
        if ((ulong)param_2[2] < (ulong)param_2[3]) {
          param_2[2] = param_2[2] + 4;
        }
        else {
          (**(code **)(*param_2 + 0x50))(param_2);
        }
        goto LAB_71007cc69c;
      default:
        goto switchD_71007cc418_caseD_26;
      case 'A':
      case 'a':
        lVar17 = *(long *)(lVar16 + 0x10);
        uStack_e8 = *(undefined8 *)(lVar17 + 0xa0);
        local_f0 = *(undefined8 *)(lVar17 + 0x98);
        uStack_128 = *(undefined8 *)(lVar17 + 0x60);
        local_130 = *(undefined8 *)(lVar17 + 0x58);
        uStack_118 = *(undefined8 *)(lVar17 + 0x70);
        uStack_120 = *(undefined8 *)(lVar17 + 0x68);
        uStack_108 = *(undefined8 *)(lVar17 + 0x80);
        local_110 = *(undefined8 *)(lVar17 + 0x78);
        uStack_f8 = *(undefined8 *)(lVar17 + 0x90);
        uStack_100 = *(undefined8 *)(lVar17 + 0x88);
        uStack_d8 = *(undefined8 *)(lVar17 + 0xb0);
        uStack_e0 = *(undefined8 *)(lVar17 + 0xa8);
        local_d0 = *(undefined8 *)(lVar17 + 0xb8);
        uStack_c8 = *(undefined8 *)(lVar17 + 0xc0);
        auVar32 = FUN_71007caa40(param_1,param_2,CONCAT44(uStack_184,uVar11),param_4,param_5,
                                 &local_174,&local_130,0xe,param_6,&local_178);
        param_2 = auVar32._0_8_;
        uVar28 = auVar32._8_8_ & 0xffffffff;
        if (local_178 == 0) {
          uVar11 = (int)local_174 % 7;
          goto LAB_71007cc940;
        }
        goto LAB_71007cc2ec;
      case 'B':
      case 'b':
      case 'h':
        lVar17 = *(long *)(lVar16 + 0x10);
        uStack_b8 = *(undefined8 *)(lVar17 + 0xd0);
        local_c0 = *(undefined8 *)(lVar17 + 200);
        uStack_a8 = *(undefined8 *)(lVar17 + 0xe0);
        uStack_b0 = *(undefined8 *)(lVar17 + 0xd8);
        uStack_78 = *(undefined8 *)(lVar17 + 0x110);
        local_80 = *(undefined8 *)(lVar17 + 0x108);
        uStack_68 = *(undefined8 *)(lVar17 + 0x120);
        uStack_70 = *(undefined8 *)(lVar17 + 0x118);
        uStack_58 = *(undefined8 *)(lVar17 + 0x130);
        local_60 = *(undefined8 *)(lVar17 + 0x128);
        uStack_48 = *(undefined8 *)(lVar17 + 0x140);
        uStack_50 = *(undefined8 *)(lVar17 + 0x138);
        uStack_38 = *(undefined8 *)(lVar17 + 0x150);
        local_40 = *(undefined8 *)(lVar17 + 0x148);
        uStack_28 = *(undefined8 *)(lVar17 + 0x160);
        uStack_30 = *(undefined8 *)(lVar17 + 0x158);
        uStack_18 = *(undefined8 *)(lVar17 + 0x170);
        local_20 = *(undefined8 *)(lVar17 + 0x168);
        uStack_10 = *(undefined8 *)(lVar17 + 0x178);
        uStack_8 = *(undefined8 *)(lVar17 + 0x180);
        uStack_98 = *(undefined8 *)(lVar17 + 0xf0);
        local_a0 = *(undefined8 *)(lVar17 + 0xe8);
        uStack_88 = *(undefined8 *)(lVar17 + 0x100);
        uStack_90 = *(undefined8 *)(lVar17 + 0xf8);
        auVar32 = FUN_71007caa40(param_1,param_2,CONCAT44(uStack_184,uVar11),param_4,param_5,
                                 &local_174,&local_c0,0x18,param_6,&local_178);
        param_2 = auVar32._0_8_;
        uVar28 = auVar32._8_8_ & 0xffffffff;
        if (local_178 != 0) goto LAB_71007cc2ec;
        uVar15 = uVar15 + 1;
        param_8[4] = (int)local_174 % 0xc;
        *(ushort *)param_10 = (ushort)*param_10 | 0x408;
        goto LAB_71007cc1cc;
      case 'C':
        auVar32 = FUN_71007ca100(param_1,param_2,CONCAT44(uStack_184,uVar11),param_4,param_5,
                                 &local_174,0,99,2,param_6,&local_178);
        param_2 = auVar32._0_8_;
        uVar28 = auVar32._8_8_ & 0xffffffff;
        if (local_178 != 0) goto LAB_71007cc2ec;
        uVar15 = uVar15 + 1;
        param_10[1] = local_174;
        *(ushort *)param_10 = (ushort)*param_10 | 0x480;
        goto LAB_71007cc1cc;
      case 'D':
        puVar20 = auStack_158;
        (**(code **)(*plVar31 + 0x58))(plVar31,"%m/%d/%y",&DAT_7100856159,puVar20);
        goto LAB_71007ccc64;
      case 'H':
        auVar32 = FUN_71007ca100(param_1,param_2,CONCAT44(uStack_184,uVar11),param_4,param_5,
                                 &local_174,0,0x17,2,param_6,&local_178);
        param_2 = auVar32._0_8_;
        uVar28 = auVar32._8_8_ & 0xffffffff;
        if (local_178 != 0) goto LAB_71007cc2ec;
        uVar15 = uVar15 + 1;
        param_8[2] = local_174;
        *param_10 = *param_10 & 0xfffffffe;
        goto LAB_71007cc1cc;
      case 'I':
        auVar32 = FUN_71007ca100(param_1,param_2,CONCAT44(uStack_184,uVar11),param_4,param_5,
                                 &local_174,1,0xc,2,param_6,&local_178);
        param_2 = auVar32._0_8_;
        uVar28 = auVar32._8_8_ & 0xffffffff;
        if (local_178 != 0) goto LAB_71007cc2ec;
        uVar15 = uVar15 + 1;
        param_8[2] = (int)local_174 % 0xc;
        *param_10 = *param_10 | 1;
        goto LAB_71007cc1cc;
      case 'M':
        auVar32 = FUN_71007ca100(param_1,param_2,CONCAT44(uStack_184,uVar11),param_4,param_5,
                                 &local_174,0,0x3b,2,param_6,&local_178);
        param_2 = auVar32._0_8_;
        uVar28 = auVar32._8_8_ & 0xffffffff;
        if (local_178 != 0) goto LAB_71007cc2ec;
        uVar15 = uVar15 + 1;
        param_8[1] = local_174;
        goto LAB_71007cc1cc;
      case 'R':
        puVar25 = &DAT_7100856166;
        pcVar27 = *(code **)(*plVar31 + 0x58);
        pcVar22 = "%H:%M";
        goto LAB_71007ccab8;
      case 'S':
        auVar32 = FUN_71007ca100(param_1,param_2,CONCAT44(uStack_184,uVar11),param_4,param_5,
                                 &local_174,0,0x3d,2,param_6,&local_178);
        param_2 = auVar32._0_8_;
        uVar28 = auVar32._8_8_ & 0xffffffff;
        if (local_178 != 0) goto LAB_71007cc2ec;
        uVar15 = uVar15 + 1;
        *param_8 = local_174;
        goto LAB_71007cc1cc;
      case 'T':
        puVar25 = &DAT_7100856171;
        pcVar27 = *(code **)(*plVar31 + 0x58);
        pcVar22 = "%H:%M:%S";
LAB_71007ccab8:
        puVar20 = auStack_158;
        (*pcVar27)(plVar31,pcVar22,puVar25,auStack_158);
        break;
      case 'U':
        auVar32 = FUN_71007ca100(param_1,param_2,CONCAT44(uStack_184,uVar11),param_4,param_5,
                                 &local_174,0,0x35,2,param_6,&local_178);
        param_2 = auVar32._0_8_;
        uVar28 = auVar32._8_8_ & 0xffffffff;
        if (local_178 == 0) {
          uVar12 = 0xffdf;
          uVar11 = *param_10;
          uVar13 = (local_174 & 0x3f) << 0x10 | 0x20;
          goto LAB_71007cd188;
        }
        goto LAB_71007cc2ec;
      case 'W':
        auVar32 = FUN_71007ca100(param_1,param_2,CONCAT44(uStack_184,uVar11),param_4,param_5,
                                 &local_174,0,0x35,2,param_6,&local_178);
        param_2 = auVar32._0_8_;
        uVar28 = auVar32._8_8_ & 0xffffffff;
        if (local_178 != 0) goto LAB_71007cc2ec;
        uVar12 = 0xffbf;
        uVar11 = *param_10;
        uVar13 = (local_174 & 0x3f) << 0x10 | 0x40;
LAB_71007cd188:
        uVar15 = uVar15 + 1;
        *param_10 = uVar13 | uVar11 & (uVar12 | 0xffc00000);
        goto LAB_71007cc1cc;
      case 'X':
        puVar20 = *(undefined1 **)(*(long *)(lVar16 + 0x10) + 0x20);
        break;
      case 'Y':
        auVar32 = FUN_71007ca100(param_1,param_2,CONCAT44(uStack_184,uVar11),param_4,param_5,
                                 &local_174,0,9999,4,param_6,&local_178);
        param_2 = auVar32._0_8_;
        uVar28 = auVar32._8_8_ & 0xffffffff;
        if (local_178 != 0) goto LAB_71007cc2ec;
        uVar15 = uVar15 + 1;
        param_8[5] = local_174 - 0x76c;
        *(byte *)((long)param_10 + 1) = *(byte *)((long)param_10 + 1) & 0xf9 | 4;
        goto LAB_71007cc1cc;
      case 'Z':
        if (param_2 != (long *)0x0 && bVar5 != 0) {
          if ((int *)param_2[2] < (int *)param_2[3]) {
            iVar9 = *(int *)param_2[2];
          }
          else {
            iVar9 = (**(code **)(*param_2 + 0x48))(param_2,*(code **)(*param_2 + 0x48),uVar28);
          }
          if (iVar9 == -1) {
            param_2 = (long *)0x0;
          }
        }
        bVar4 = (**(code **)(*plVar31 + 0x10))(plVar31,1);
        if ((bVar4 & 1) == 0) {
switchD_71007cc418_caseD_26:
          local_178 = local_178 | 4;
          goto LAB_71007cc2ec;
        }
        local_190._0_8_ = param_2;
        local_190._8_4_ = uVar11;
        auVar32 = FUN_71007caa40(param_1,param_2,CONCAT44(uStack_184,uVar11),param_4,param_5,
                                 &local_c0,&PTR_DAT_7100af47a8,0xe,param_6,&local_178);
        param_2 = auVar32._0_8_;
        uVar21 = auVar32._8_8_ & 0xffffffff;
        uVar13 = auVar32._8_4_;
        bVar5 = uVar13 == 0xffffffff;
        uVar28 = uVar21;
        uVar11 = uVar13;
        if (param_2 == (long *)0x0) {
          if (param_4 != (long *)0x0 && bVar3) goto LAB_71007ccd40;
          if (bVar3 == (bool)bVar5) goto LAB_71007cc2ec;
LAB_71007cd4ac:
          if (local_178 != 0 || (int)local_c0 != 0) goto LAB_71007cc2ec;
        }
        else if ((bool)bVar5) {
          if ((uint *)param_2[2] < (uint *)param_2[3]) {
            uVar12 = *(uint *)param_2[2];
          }
          else {
            uVar12 = (**(code **)(*param_2 + 0x48))();
          }
          uVar28 = (ulong)uVar12;
          if (uVar12 != 0xffffffff) {
            if (param_4 != (long *)0x0) goto LAB_71007ccd30;
            uVar28 = uVar21;
            if (iVar8 != -1) goto LAB_71007cc2ec;
            if ((int)local_c0 == 0 && local_178 == 0) goto LAB_71007cd640;
            goto LAB_71007cc69c;
          }
          if (param_4 == (long *)0x0) {
            if (iVar8 == -1) goto LAB_71007cd4c8;
          }
          else if (iVar8 == -1) {
            param_2 = (long *)0x0;
            bVar5 = bVar4;
            goto LAB_71007ccd40;
          }
          uVar11 = 0xffffffff;
          if (local_178 != 0 || (int)local_c0 != 0) {
            uVar15 = uVar15 + 1;
            param_2 = (long *)0x0;
            goto LAB_71007cc1cc;
          }
LAB_71007cd658:
          param_2 = (long *)0x0;
        }
        else {
          if (param_4 == (long *)0x0) {
            if (iVar8 == -1) goto LAB_71007cd4ac;
            uVar15 = uVar15 + 1;
            goto LAB_71007cc1cc;
          }
LAB_71007ccd30:
          uVar28 = uVar21;
          bVar5 = 0;
          if (iVar8 != -1) goto LAB_71007cc2ec;
LAB_71007ccd40:
          if ((int *)param_4[2] < (int *)param_4[3]) {
            iVar9 = *(int *)param_4[2];
          }
          else {
            iVar9 = (**(code **)(*param_4 + 0x48))(param_4);
          }
          auVar1._8_4_ = local_190._8_4_;
          auVar1._0_8_ = local_190._0_8_;
          if (iVar9 == -1) {
            param_4 = (long *)0x0;
          }
          else {
            bVar4 = 0;
          }
          uVar28 = uVar21;
          if ((bVar5 == bVar4) || (local_190 = auVar1, local_178 != 0 || (int)local_c0 != 0))
          goto LAB_71007cc2ec;
          if (param_2 != (long *)0x0 && uVar13 == 0xffffffff) {
LAB_71007cd640:
            if ((uint *)param_2[2] < (uint *)param_2[3]) {
              uVar11 = *(uint *)param_2[2];
            }
            else {
              uVar11 = (**(code **)(*param_2 + 0x48))(param_2);
            }
            if (uVar11 == 0xffffffff) goto LAB_71007cd658;
          }
        }
        uVar12 = (**(code **)(*plVar31 + 0x50))(plVar31,0x2d);
        if (uVar12 != uVar11) {
          local_190._0_8_ = param_2;
          local_190._8_4_ = uVar13;
          iVar9 = FUN_71007cc080(local_190);
          uVar13 = local_190._8_4_;
          param_2 = (long *)local_190._0_8_;
          uVar28 = (ulong)(uint)local_190._8_4_;
          iVar10 = (**(code **)(*plVar31 + 0x50))(plVar31,0x2b);
          if (iVar9 != iVar10) goto LAB_71007cc2ec;
        }
        uVar15 = uVar15 + 1;
        local_190._0_8_ = param_2;
        local_190._8_4_ = uVar13;
        local_190 = FUN_71007ca100(param_1,param_2,CONCAT44(uStack_184,uVar13),param_4,param_5,
                                   &local_c0,0,0x17,2,param_6,&local_178);
        auVar32 = FUN_71007ca100(param_1,local_190._0_8_,CONCAT44(uStack_184,local_190._8_4_),
                                 param_4,param_5,&local_c0,0,0x3b,2,param_6,&local_178);
        param_2 = auVar32._0_8_;
        uVar28 = auVar32._8_8_ & 0xffffffff;
        goto LAB_71007cc1cc;
      case 'c':
        puVar20 = *(undefined1 **)(*(long *)(lVar16 + 0x10) + 0x30);
LAB_71007ccc64:
        local_190._0_8_ = param_2;
        local_190._8_4_ = uVar11;
        auVar32 = FUN_71007cc100(param_1,param_2,CONCAT44(uStack_184,uVar11),param_4,param_5,param_6
                                 ,&local_178,param_8,puVar20,param_10);
        param_2 = auVar32._0_8_;
        uVar28 = auVar32._8_8_ & 0xffffffff;
        if (local_178 != 0) goto LAB_71007cc2ec;
        uVar15 = uVar15 + 1;
        *param_10 = *param_10 | 0x400;
        goto LAB_71007cc1cc;
      case 'd':
      case 'e':
        if (param_2 != (long *)0x0 && bVar5 != 0) {
          if ((int *)param_2[2] < (int *)param_2[3]) {
            iVar9 = *(int *)param_2[2];
          }
          else {
            iVar9 = (**(code **)(*param_2 + 0x48))(param_2,*(code **)(*param_2 + 0x48),uVar28);
          }
          if (iVar9 == -1) {
            param_2 = (long *)0x0;
          }
        }
        uVar28 = (**(code **)(*plVar31 + 0x10))(plVar31,8);
        if ((uVar28 & 1) != 0) {
          if ((ulong)param_2[2] < (ulong)param_2[3]) {
            uVar11 = 0xffffffff;
            param_2[2] = param_2[2] + 4;
          }
          else {
            uVar11 = 0xffffffff;
            (**(code **)(*param_2 + 0x50))(param_2);
          }
        }
        local_190._0_8_ = param_2;
        local_190._8_4_ = uVar11;
        auVar32 = FUN_71007ca100(param_1,param_2,CONCAT44(uStack_184,uVar11),param_4,param_5,
                                 &local_174,1,0x1f,2,param_6,&local_178);
        param_2 = auVar32._0_8_;
        uVar28 = auVar32._8_8_ & 0xffffffff;
        if (local_178 != 0) goto LAB_71007cc2ec;
        uVar15 = uVar15 + 1;
        param_8[3] = local_174;
        *(ushort *)param_10 = (ushort)*param_10 | 0x410;
        goto LAB_71007cc1cc;
      case 'j':
        auVar32 = FUN_71007ca100(param_1,param_2,CONCAT44(uStack_184,uVar11),param_4,param_5,
                                 &local_174,1,0x16e,3,param_6,&local_178);
        param_2 = auVar32._0_8_;
        uVar28 = auVar32._8_8_ & 0xffffffff;
        if (local_178 != 0) goto LAB_71007cc2ec;
        uVar15 = uVar15 + 1;
        param_8[7] = local_174 - 1;
        *param_10 = *param_10 | 4;
        goto LAB_71007cc1cc;
      case 'm':
        auVar32 = FUN_71007ca100(param_1,param_2,CONCAT44(uStack_184,uVar11),param_4,param_5,
                                 &local_174,1,0xc,2,param_6,&local_178);
        param_2 = auVar32._0_8_;
        uVar28 = auVar32._8_8_ & 0xffffffff;
        if (local_178 != 0) goto LAB_71007cc2ec;
        uVar15 = uVar15 + 1;
        param_8[4] = local_174 - 1;
        *param_10 = *param_10 | 8;
        goto LAB_71007cc1cc;
      case 'n':
      case 't':
        bVar6 = uVar11 == 0xffffffff;
        if (param_2 == (long *)0x0) {
          bVar30 = false;
          if (param_4 != (long *)0x0 && bVar3) goto LAB_71007cc784;
        }
        else {
          if (bVar6) goto LAB_71007cc670;
          if (param_4 != (long *)0x0) {
            if (iVar8 == -1) {
              bVar30 = false;
              bVar6 = false;
              goto LAB_71007cc784;
            }
            goto LAB_71007cc2ec;
          }
          bVar6 = false;
        }
        uVar21 = uVar28;
        if (bVar6 == bVar3) goto LAB_71007cc2ec;
        goto LAB_71007cc644;
      case 'p':
        local_170 = *(int **)(*(long *)(lVar16 + 0x10) + 0x40);
        piStack_168 = *(int **)(*(long *)(lVar16 + 0x10) + 0x48);
        if ((*local_170 == 0) || (*piStack_168 == 0)) goto LAB_71007cc2ec;
        auVar32 = FUN_71007caa40(param_1,param_2,CONCAT44(uStack_184,uVar11),param_4,param_5,
                                 &local_174,&local_170,2,param_6,&local_178);
        param_2 = auVar32._0_8_;
        uVar28 = auVar32._8_8_ & 0xffffffff;
        if ((local_178 != 0) || (local_174 == 0)) goto LAB_71007cc2ec;
        uVar15 = uVar15 + 1;
        *param_10 = *param_10 | 0x100;
        goto LAB_71007cc1cc;
      case 'r':
        puVar20 = *(undefined1 **)(*(long *)(lVar16 + 0x10) + 0x50);
        break;
      case 'w':
        auVar32 = FUN_71007ca100(param_1,param_2,CONCAT44(uStack_184,uVar11),param_4,param_5,
                                 &local_174,0,6,1,param_6,&local_178);
        param_2 = auVar32._0_8_;
        uVar28 = auVar32._8_8_ & 0xffffffff;
        uVar11 = local_174;
        if (local_178 != 0) goto LAB_71007cc2ec;
LAB_71007cc940:
        uVar15 = uVar15 + 1;
        param_8[6] = uVar11;
        *param_10 = *param_10 | 2;
        goto LAB_71007cc1cc;
      case 'x':
        puVar20 = *(undefined1 **)(*(long *)(lVar16 + 0x10) + 0x10);
        break;
      case 'y':
        auVar32 = FUN_71007ca100(param_1,param_2,CONCAT44(uStack_184,uVar11),param_4,param_5,
                                 &local_174,0,99,2,param_6,&local_178);
        param_2 = auVar32._0_8_;
        uVar28 = auVar32._8_8_ & 0xffffffff;
        if (local_178 != 0) goto LAB_71007cc2ec;
        bVar6 = auVar32._8_4_ == -1;
        *(byte *)((long)param_10 + 1) = *(byte *)((long)param_10 + 1) | 6;
        if (param_2 == (long *)0x0) {
          if (param_4 == (long *)0x0 || !bVar3) goto LAB_71007cd4e8;
LAB_71007cd5b4:
          if ((int *)param_4[2] < (int *)param_4[3]) {
            iVar9 = *(int *)param_4[2];
          }
          else {
            iVar9 = (**(code **)(*param_4 + 0x48))(param_4);
          }
          if (iVar9 == -1) {
            param_4 = (long *)0x0;
          }
          if ((iVar9 == -1) != bVar6) {
            uVar21 = uVar28;
            if (param_2 != (long *)0x0 && auVar32._8_4_ == -1) goto LAB_71007cd5e8;
            goto LAB_71007cd4f4;
          }
LAB_71007cd308:
          uVar11 = local_174 + 100;
          if (0x44 < (int)local_174) {
            uVar11 = local_174;
          }
        }
        else {
          if (bVar6) {
            if ((uint *)param_2[2] < (uint *)param_2[3]) {
              uVar11 = *(uint *)param_2[2];
            }
            else {
              uVar11 = (**(code **)(*param_2 + 0x48))();
            }
            uVar21 = (ulong)uVar11;
            if (uVar11 == 0xffffffff) {
              if (param_4 == (long *)0x0) {
                param_2 = (long *)0x0;
                if (iVar8 == -1) goto LAB_71007cd308;
                goto LAB_71007cd4f4;
              }
              if (iVar8 == -1) {
                param_2 = (long *)0x0;
                bVar6 = bVar2;
                goto LAB_71007cd5b4;
              }
            }
            else {
              if (param_4 != (long *)0x0) goto joined_r0x0071007cd304;
              if (iVar8 != -1) goto LAB_71007cd308;
LAB_71007cd5e8:
              if ((uint *)param_2[2] < (uint *)param_2[3]) {
                uVar11 = *(uint *)param_2[2];
              }
              else {
                uVar11 = (**(code **)(*param_2 + 0x48))(param_2);
              }
              uVar21 = (ulong)uVar11;
              if (uVar11 != 0xffffffff) goto LAB_71007cd4f4;
            }
            param_2 = (long *)0x0;
          }
          else {
            if (param_4 != (long *)0x0) {
joined_r0x0071007cd304:
              if (iVar8 == -1) {
                bVar6 = false;
                goto LAB_71007cd5b4;
              }
              goto LAB_71007cd308;
            }
            bVar6 = false;
LAB_71007cd4e8:
            uVar21 = uVar28;
            if (bVar3 == bVar6) goto LAB_71007cd308;
          }
LAB_71007cd4f4:
          uVar11 = (**(code **)(*plVar31 + 0x60))(plVar31,uVar21,0x2a);
          uVar11 = (uVar11 & 0xff) - 0x30;
          if (9 < (uVar11 & 0xff)) goto LAB_71007cd308;
          piVar26 = (int *)param_2[3];
          if ((int *)param_2[2] < piVar26) {
            piVar23 = (int *)param_2[2] + 1;
            param_2[2] = (long)piVar23;
          }
          else {
            (**(code **)(*param_2 + 0x50))(param_2);
            piVar23 = (int *)param_2[2];
            piVar26 = (int *)param_2[3];
          }
          local_174 = uVar11 + local_174 * 10;
          if (piVar23 < piVar26) {
            iVar9 = *piVar23;
          }
          else {
            iVar9 = (**(code **)(*param_2 + 0x48))(param_2);
          }
          iVar10 = iVar8;
          if (iVar9 == -1) {
            if (param_4 == (long *)0x0) {
              param_2 = (long *)0x0;
              goto LAB_71007cd80c;
            }
            param_2 = (long *)0x0;
            if (iVar8 == -1) goto LAB_71007cd7f4;
LAB_71007cd820:
            local_190._8_4_ = 0xffffffff;
            local_190._0_8_ = param_2;
            uVar14 = FUN_71007cc080(local_190);
            param_2 = (long *)local_190._0_8_;
            uVar28 = (ulong)(uint)local_190._8_4_;
            uVar11 = (**(code **)(*plVar31 + 0x60))(plVar31,uVar14,0x2a);
            uVar11 = (uVar11 & 0xff) - 0x30;
            if ((uVar11 & 0xff) < 10) {
              if (*(ulong *)((undefined8)param_2 + 2) < *(ulong *)((undefined8)param_2 + 3)) {
                *(ulong *)((undefined8)param_2 + 2) = *(ulong *)((undefined8)param_2 + 2) + 4;
              }
              else {
                (**(code **)(*param_2 + 0x50))(param_2);
              }
              uVar28 = 0xffffffff;
              local_174 = uVar11 + local_174 * 10;
            }
          }
          else {
            if (param_4 == (long *)0x0) {
              bVar2 = false;
LAB_71007cd80c:
              if ((iVar10 == -1) != bVar2) goto LAB_71007cd820;
            }
            else if (iVar8 == -1) {
              bVar2 = false;
LAB_71007cd7f4:
              if ((int *)param_4[2] < (int *)param_4[3]) {
                iVar10 = *(int *)param_4[2];
              }
              else {
                iVar10 = (**(code **)(*param_4 + 0x48))(param_4);
              }
              if (iVar10 == -1) {
                param_4 = (long *)0x0;
              }
              goto LAB_71007cd80c;
            }
            uVar28 = 0xffffffff;
          }
          *param_10 = *param_10 & 0xfffffdff;
          uVar11 = local_174 - 0x76c;
        }
        uVar15 = uVar15 + 1;
        param_8[5] = uVar11;
        goto LAB_71007cc1cc;
      }
      uVar15 = uVar15 + 1;
      local_190._0_8_ = param_2;
      local_190._8_4_ = uVar11;
      auVar32 = FUN_71007cc100(param_1,param_2,CONCAT44(uStack_184,uVar11),param_4,param_5,param_6,
                               &local_178,param_8,puVar20,param_10);
      param_2 = auVar32._0_8_;
      uVar28 = auVar32._8_8_ & 0xffffffff;
      goto LAB_71007cc1cc;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003a84();
LAB_71007cc4c0:
  uVar15 = uVar15 + 1;
LAB_71007cc30c:
  if ((uint *)param_2[2] < (uint *)param_2[3]) {
    uVar11 = *(uint *)param_2[2];
  }
  else {
    uVar11 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  uVar28 = (ulong)uVar11;
  if (uVar11 == 0xffffffff) {
    param_2 = (long *)0x0;
    bVar4 = 1;
    goto LAB_71007cc1e4;
  }
  bVar5 = 1;
  bVar2 = param_4 == (long *)0x0 || !bVar3;
  uVar28 = 0xffffffff;
  bVar4 = 0;
  if (bVar2) goto LAB_71007cc1f4;
LAB_71007cc344:
  uVar11 = (uint)uVar28;
  if ((int *)param_4[2] < (int *)param_4[3]) {
    iVar9 = *(int *)param_4[2];
  }
  else {
    iVar9 = (**(code **)(*param_4 + 0x48))(param_4);
  }
  if (iVar9 == -1) {
    param_4 = (long *)0x0;
  }
  bVar4 = (iVar9 == -1 && !bVar2) ^ bVar4;
  bVar2 = (bool)(uVar15 < uVar18 & bVar4);
  bVar4 = uVar15 < uVar18 & bVar4;
  goto joined_r0x0071007cc214;
LAB_71007cc644:
  uVar21 = (**(code **)(*plVar31 + 0x10))(plVar31,8,uVar21);
  if ((uVar21 & 1) != 0) {
    if ((ulong)param_2[2] < (ulong)param_2[3]) {
      param_2[2] = param_2[2] + 4;
    }
    else {
      (**(code **)(*param_2 + 0x50))(param_2);
    }
LAB_71007cc670:
    if ((uint *)param_2[2] < (uint *)param_2[3]) {
      uVar11 = *(uint *)param_2[2];
    }
    else {
      uVar11 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    uVar28 = (ulong)uVar11;
    if (uVar11 != 0xffffffff) {
      if (param_4 == (long *)0x0) {
        if (iVar8 == -1) {
          uVar28 = 0xffffffff;
          goto LAB_71007cc7b0;
        }
        goto LAB_71007cc69c;
      }
      if (iVar8 != -1) goto LAB_71007cc69c;
      uVar28 = param_5 & 0xffffffff;
      bVar6 = false;
      bVar30 = bVar2;
LAB_71007cc784:
      if ((int *)param_4[2] < (int *)param_4[3]) {
        iVar9 = *(int *)param_4[2];
      }
      else {
        iVar9 = (**(code **)(*param_4 + 0x48))(param_4);
      }
      if (iVar9 == -1) {
        param_4 = (long *)0x0;
      }
      if ((iVar9 == -1) != bVar6) goto code_r0x0071007cc7ac;
      goto LAB_71007cc2ec;
    }
    if (param_4 == (long *)0x0) {
      if (iVar8 == -1) goto LAB_71007cd4c8;
    }
    else if (iVar8 == -1) {
      bVar30 = false;
      param_2 = (long *)0x0;
      bVar6 = bVar2;
      goto LAB_71007cc784;
    }
    param_2 = (long *)0x0;
    uVar21 = uVar28;
    uVar28 = 0xffffffff;
    goto LAB_71007cc644;
  }
LAB_71007cc2ec:
  uVar15 = uVar15 + 1;
  goto LAB_71007cc1cc;
code_r0x0071007cc7ac:
  uVar21 = uVar28;
  if (bVar30 != false) {
LAB_71007cc7b0:
    if ((uint *)param_2[2] < (uint *)param_2[3]) {
      uVar19 = (ulong)*(uint *)param_2[2];
    }
    else {
      uVar19 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    uVar21 = uVar19 & 0xffffffff;
    if ((int)uVar19 == -1) {
      param_2 = (long *)0x0;
    }
  }
  goto LAB_71007cc644;
LAB_71007cd4c8:
  uVar15 = uVar15 + 1;
  param_2 = (long *)0x0;
  uVar28 = param_5 & 0xffffffff;
  goto LAB_71007cc1cc;
LAB_71007cc69c:
  uVar15 = uVar15 + 1;
  uVar28 = 0xffffffff;
  goto LAB_71007cc1cc;
}



// ===== FUN_71007cdf2c @ 71007cdf2c (size=40) =====

int FUN_71007cdf2c(long *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x68))(param_1,0xffffffff);
  return -(uint)(iVar1 == -1);
}



// ===== FUN_71007cdf60 @ 71007cdf60 (size=112) =====

long FUN_71007cdf60(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_71007b1420(param_1 + 0x50);
  if ((uVar1 & 1) == 0) {
    if (param_2 == 0 && param_3 == 0) {
      *(undefined8 *)(param_1 + 0x88) = 1;
    }
    else if (param_2 != 0 && 0 < param_3) {
      *(long *)(param_1 + 0x80) = param_2;
      *(long *)(param_1 + 0x88) = param_3;
      return param_1;
    }
  }
  return param_1;
}



// ===== FUN_71007cdfe0 @ 71007cdfe0 (size=148) =====

long FUN_71007cdfe0(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if (((*(uint *)(param_1 + 0x60) >> 3 & 1) == 0) ||
     (uVar3 = FUN_71007b1420(param_1 + 0x50), (uVar3 & 1) == 0)) {
    lVar5 = -1;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
    if (*(long **)(param_1 + 0xb0) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003a84();
    }
    iVar2 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x28))();
    if (-1 < iVar2) {
      lVar4 = FUN_71007b17e0(param_1 + 0x50);
      iVar2 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x40))();
      lVar1 = 0;
      if ((long)iVar2 != 0) {
        lVar1 = lVar4 / (long)iVar2;
      }
      lVar5 = lVar5 + lVar1;
    }
  }
  return lVar5;
}



// ===== FUN_71007ce080 @ 71007ce080 (size=320) =====

uint FUN_71007ce080(long *param_1,uint param_2)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  long lVar5;
  byte bVar6;
  
  if ((*(uint *)(param_1 + 0xc) >> 3 & 1) == 0) {
    return 0xffffffff;
  }
  if ((*(byte *)((long)param_1 + 0x92) & 1) == 0) {
    bVar6 = *(byte *)(param_1 + 0x15);
    uVar1 = param_1[2];
    if ((ulong)param_1[1] < uVar1) {
      param_1[2] = uVar1 - 1;
      uVar3 = (uint)*(byte *)(uVar1 - 1);
      goto LAB_71007ce0c8;
    }
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x68))(param_1,0xffffffff);
    if (iVar2 == -1) {
      return 0xffffffff;
    }
    lVar5 = param_1[0x10];
    param_1[1] = lVar5;
    param_1[2] = lVar5;
    param_1[3] = lVar5;
    bVar6 = *(byte *)(param_1 + 0x15);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    *(undefined1 *)((long)param_1 + 0x92) = 0;
  }
  lVar5 = (**(code **)(*param_1 + 0x20))(param_1,0xffffffffffffffff,1,0x18);
  if (lVar5 == -1) {
    return 0xffffffff;
  }
  uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
  if (uVar3 == 0xffffffff) {
    return 0xffffffff;
  }
LAB_71007ce0c8:
  if (param_2 == 0xffffffff) {
    return 0;
  }
  if (uVar3 != param_2) {
    if ((bVar6 & 1) != 0) {
      return 0xffffffff;
    }
    puVar4 = (undefined1 *)param_1[2];
    if ((*(byte *)(param_1 + 0x15) & 1) == 0) {
      param_1[0x13] = (long)puVar4;
      param_1[0x14] = param_1[3];
      puVar4 = (undefined1 *)((long)param_1 + 0x93);
      param_1[1] = (long)puVar4;
      param_1[2] = (long)puVar4;
      param_1[3] = (long)param_1 + 0x94;
      *(undefined1 *)(param_1 + 0x15) = 1;
    }
    *(undefined1 *)((long)param_1 + 0x91) = 1;
    *puVar4 = (char)param_2;
    return param_2;
  }
  return param_2;
}



// ===== FUN_71007ce640 @ 71007ce640 (size=304) =====

long FUN_71007ce640(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = *(uint *)(param_1 + 0x60);
  if (*(long **)(param_1 + 0xb0) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  cVar2 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x30))();
  if ((cVar2 != '\0' && (uVar1 & 0x11) != 0) && ((*(byte *)(param_1 + 0x91) & 1) == 0)) {
    lVar4 = *(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28);
    lVar3 = lVar4;
    if (((*(byte *)(param_1 + 0x92) & 1) == 0) &&
       (lVar3 = *(long *)(param_1 + 0x88) + -1, *(long *)(param_1 + 0x88) == 0 || lVar3 == 0)) {
      lVar3 = lVar4;
    }
    if (lVar3 <= param_3) {
      lVar4 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20);
      lVar3 = FUN_71007b16a0(param_1 + 0x50,*(long *)(param_1 + 0x20),lVar4,param_2,param_3);
      if (param_3 + lVar4 == lVar3) {
        lVar5 = *(long *)(param_1 + 0x80);
        *(long *)(param_1 + 8) = lVar5;
        *(long *)(param_1 + 0x10) = lVar5;
        *(long *)(param_1 + 0x18) = lVar5;
        if (((*(uint *)(param_1 + 0x60) & 0x11) == 0) || (*(ulong *)(param_1 + 0x88) < 2)) {
          lVar5 = 0;
          lVar6 = 0;
        }
        else {
          lVar6 = lVar5 + (*(ulong *)(param_1 + 0x88) - 1);
        }
        *(long *)(param_1 + 0x20) = lVar5;
        *(long *)(param_1 + 0x28) = lVar5;
        *(long *)(param_1 + 0x30) = lVar6;
        *(undefined1 *)(param_1 + 0x92) = 1;
      }
      lVar5 = lVar3 - lVar4;
      if (lVar3 <= lVar4) {
        lVar5 = 0;
      }
      return lVar5;
    }
  }
  lVar3 = FUN_71007e1ee0(param_1,param_2,param_3);
  return lVar3;
}



// ===== FUN_71007ce780 @ 71007ce780 (size=520) =====

long FUN_71007ce780(long *param_1,undefined1 *param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long lVar11;
  
  if ((*(byte *)(param_1 + 0x15) & 1) == 0) {
    if ((*(byte *)((long)param_1 + 0x92) & 1) != 0) {
      iVar4 = (**(code **)(*param_1 + 0x68))(param_1,0xffffffff);
      if (iVar4 == -1) {
        return 0;
      }
      lVar11 = param_1[0x10];
      param_1[1] = lVar11;
      param_1[2] = lVar11;
      param_1[3] = lVar11;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      *(undefined1 *)((long)param_1 + 0x92) = 0;
    }
    lVar11 = 0;
  }
  else {
    puVar6 = (undefined1 *)param_1[1];
    puVar8 = (undefined1 *)param_1[2];
    lVar11 = 0;
    puVar10 = param_2;
    if ((0 < param_3) && (puVar8 == puVar6)) {
      param_3 = param_3 + -1;
      puVar10 = param_2 + 1;
      *param_2 = *puVar8;
      lVar11 = 1;
      puVar8 = (undefined1 *)(param_1[2] + 1);
      param_1[2] = (long)puVar8;
      param_2 = puVar10;
      if ((*(byte *)(param_1 + 0x15) & 1) == 0) goto LAB_71007ce7e0;
      puVar6 = (undefined1 *)param_1[1];
    }
    *(undefined1 *)(param_1 + 0x15) = 0;
    lVar5 = param_1[0x13];
    param_1[3] = param_1[0x14];
    if (puVar6 != puVar8) {
      lVar5 = lVar5 + 1;
    }
    param_1[1] = param_1[0x10];
    param_1[2] = lVar5;
    param_1[0x13] = lVar5;
    param_2 = puVar10;
  }
LAB_71007ce7e0:
  uVar9 = param_1[0x11];
  if (uVar9 < 2) {
    uVar9 = 2;
  }
  if (param_3 <= (long)(uVar9 - 1)) {
LAB_71007ce82c:
    lVar5 = FUN_71007e2020(param_1,param_2,param_3);
    return lVar11 + lVar5;
  }
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((long *)param_1[0x16] != (long *)0x0) {
    cVar3 = (**(code **)(*(long *)param_1[0x16] + 0x30))();
    bVar2 = (uVar1 & 8) != 0;
    if (!bVar2 || cVar3 == '\0') goto LAB_71007ce82c;
    lVar5 = param_1[3] - param_1[2];
    if (lVar5 != 0) {
      FUN_710080f900(param_2,param_1[2],lVar5);
      param_2 = param_2 + lVar5;
      lVar11 = lVar11 + lVar5;
      param_3 = param_3 - lVar5;
      param_1[2] = param_1[2] + lVar5;
    }
    while (lVar5 = FUN_71007b1580(param_1 + 10,param_2,param_3), lVar5 != -1) {
      if (lVar5 == 0) {
        if (param_3 != 0) {
          lVar5 = param_1[0x10];
          param_1[1] = lVar5;
          param_1[2] = lVar5;
          param_1[3] = lVar5;
          param_1[4] = 0;
          param_1[5] = 0;
          param_1[6] = 0;
          *(undefined1 *)((long)param_1 + 0x91) = 0;
          return lVar11;
        }
LAB_71007ce90c:
        *(bool *)((long)param_1 + 0x91) = bVar2 && cVar3 != '\0';
        return lVar11;
      }
      lVar11 = lVar11 + lVar5;
      param_3 = param_3 - lVar5;
      if (param_3 == 0) goto LAB_71007ce90c;
      param_2 = param_2 + lVar5;
    }
    puVar7 = (undefined4 *)FUN_710080e8e0();
    FUN_710000421c("basic_filebuf::xsgetn error reading the file",*puVar7);
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003a84();
}



// ===== FUN_71007ce9a0 @ 71007ce9a0 (size=172) =====

void FUN_71007ce9a0(undefined8 *param_1)

{
  long lVar1;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_LAB_7100aeea88;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_71007e0600(param_1 + 7);
  *param_1 = &PTR_FUN_7100aede60;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_71007b1400(param_1 + 10,param_1 + 8);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0x400;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x18] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  lVar1 = FUN_71007b00e0(&DAT_7100d22878);
  param_1[0x16] = *(undefined8 *)(*(long *)(param_1[7] + 8) + lVar1 * 8);
  return;
}



// ===== FUN_71007cea60 @ 71007cea60 (size=24) =====

void FUN_71007cea60(long param_1)

{
  undefined8 uVar1;
  
  if (((*(byte *)(param_1 + 0x90) & 1) == 0) && (*(long *)(param_1 + 0x80) == 0)) {
    uVar1 = thunk_FUN_71007af5c0(*(undefined8 *)(param_1 + 0x88));
    *(undefined8 *)(param_1 + 0x80) = uVar1;
    *(undefined1 *)(param_1 + 0x90) = 1;
    return;
  }
  return;
}



// ===== FUN_71007cea78 @ 71007cea78 (size=44) =====

void FUN_71007cea78(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_71007af5c0(*(undefined8 *)(param_2 + 0x88));
  *(undefined8 *)(param_2 + 0x80) = uVar1;
  *(undefined1 *)(param_2 + 0x90) = 1;
  return;
}



// ===== FUN_71007ceac0 @ 71007ceac0 (size=84) =====

void FUN_71007ceac0(long param_1)

{
  if ((*(byte *)(param_1 + 0x90) & 1) != 0) {
    if (*(long *)(param_1 + 0x80) != 0) {
      thunk_FUN_710081c200();
    }
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    thunk_FUN_710081c200();
  }
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  return;
}



// ===== FUN_71007ceb20 @ 71007ceb20 (size=372) =====

bool FUN_71007ceb20(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long local_10;
  undefined8 local_8;
  
  if (*(long **)(param_1 + 0xb0) == (long *)0x0) goto LAB_71007cec90;
  uVar5 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x30))();
  if ((uVar5 & 1) == 0) {
    iVar3 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x40))();
    lVar1 = -(iVar3 * param_3 + 0xfU & 0xfffffffffffffff0);
    uVar4 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x10))
                      (*(long **)(param_1 + 0xb0),param_1 + 0x6c,param_2,param_2 + param_3,&local_8,
                       &stack0xffffffffffffff90 + lVar1,
                       &stack0xffffffffffffff90 + iVar3 * param_3 + lVar1);
    lVar2 = local_10;
    if (uVar4 < 2) {
      param_3 = local_10 - (long)(&stack0xffffffffffffff90 + lVar1);
      lVar6 = FUN_71007b1600(param_1 + 0x50,&stack0xffffffffffffff90 + lVar1,param_3);
      if ((uVar4 & param_3 == lVar6) == 0) goto LAB_71007cebdc;
      iVar3 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x10))
                        (*(long **)(param_1 + 0xb0),param_1 + 0x6c,local_8,
                         *(undefined8 *)(param_1 + 0x28),&local_8,&stack0xffffffffffffff90 + lVar1,
                         lVar2,&local_10);
      if (iVar3 != 2) {
        param_3 = local_10 - (long)(&stack0xffffffffffffff90 + lVar1);
        lVar6 = FUN_71007b1600(param_1 + 0x50,&stack0xffffffffffffff90 + lVar1,param_3);
        goto LAB_71007cebdc;
      }
    }
    else if (uVar4 == 3) goto LAB_71007cebcc;
    FUN_7100004180("basic_filebuf::_M_convert_to_external conversion error");
LAB_71007cec90:
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
LAB_71007cebcc:
  lVar6 = FUN_71007b1600(param_1 + 0x50,param_2,param_3);
LAB_71007cebdc:
  return lVar6 == param_3;
}



// ===== FUN_71007ceca0 @ 71007ceca0 (size=124) =====

long FUN_71007ceca0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x30))();
  if ((uVar1 & 1) != 0) {
    return *(long *)(param_1 + 0x10) - *(long *)(param_1 + 0x18);
  }
  lVar2 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x38))
                    (*(long **)(param_1 + 0xb0),param_2,*(undefined8 *)(param_1 + 0xb8),
                     *(undefined8 *)(param_1 + 200),
                     *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8));
  return (*(long *)(param_1 + 0xb8) + lVar2) - *(long *)(param_1 + 0xd0);
}



// ===== FUN_71007ced20 @ 71007ced20 (size=308) =====

bool FUN_71007ced20(long *param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long local_88;
  undefined1 auStack_80 [128];
  
  bVar1 = true;
  if ((ulong)param_1[4] < (ulong)param_1[5]) {
    iVar3 = (**(code **)(*param_1 + 0x68))(param_1,0xffffffff);
    bVar1 = iVar3 != -1;
  }
  if ((*(byte *)((long)param_1 + 0x92) & 1) != 0) {
    if ((long *)param_1[0x16] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003a84();
    }
    bVar2 = (**(code **)(*(long *)param_1[0x16] + 0x30))();
    if (((bVar2 & 1) != 0) || (bVar1 == false)) {
      return bVar1;
    }
    do {
      uVar4 = (**(code **)(*(long *)param_1[0x16] + 0x18))
                        ((long *)param_1[0x16],(long)param_1 + 0x6c,auStack_80,&stack0x00000000,
                         &local_88);
      if (uVar4 == 2) {
        return (bool)bVar2;
      }
      if ((1 < uVar4) || (lVar6 = local_88 - (long)auStack_80, lVar6 < 1)) break;
      lVar5 = FUN_71007b1600(param_1 + 10,auStack_80);
      if (lVar6 != lVar5) {
        return (bool)bVar2;
      }
    } while ((uVar4 & 1) != 0);
    iVar3 = (**(code **)(*param_1 + 0x68))(param_1,0xffffffff);
    bVar1 = iVar3 != -1;
  }
  return bVar1;
}



// ===== FUN_71007cee60 @ 71007cee60 (size=212) =====

undefined1  [16]
FUN_71007cee60(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = FUN_71007ced20();
  if ((uVar1 & 1) == 0) {
    return ZEXT816(0xffffffffffffffff);
  }
  auVar3._0_8_ = FUN_71007b17a0(param_1 + 0x50,param_2,param_3);
  if (auVar3._0_8_ == -1) {
    return ZEXT816(0xffffffffffffffff);
  }
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0xb8);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x6c) = param_4;
  *(undefined2 *)(param_1 + 0x91) = 0;
  auVar3._8_8_ = param_4;
  return auVar3;
}



// ===== FUN_71007cef40 @ 71007cef40 (size=488) =====

int FUN_71007cef40(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 local_1;
  
  if ((*(uint *)(param_1 + 0x60) & 0x11) != 0) {
    if ((*(byte *)(param_1 + 0x91) & 1) != 0) {
      if ((*(byte *)(param_1 + 0xa8) & 1) != 0) {
        *(undefined1 *)(param_1 + 0xa8) = 0;
        lVar2 = *(long *)(param_1 + 0x98);
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0xa0);
        if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
          lVar2 = lVar2 + 1;
        }
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x80);
        *(long *)(param_1 + 0x10) = lVar2;
        *(long *)(param_1 + 0x98) = lVar2;
      }
      iVar1 = FUN_71007ceca0(param_1,param_1 + 0x74);
      lVar2 = FUN_71007cee60(param_1,(long)iVar1,1,*(undefined8 *)(param_1 + 0x74));
      if (lVar2 == -1) {
        return -1;
      }
    }
    puVar4 = *(undefined1 **)(param_1 + 0x20);
    puVar5 = *(undefined1 **)(param_1 + 0x28);
    local_1 = (undefined1)param_2;
    if (puVar5 <= puVar4) {
      if (1 < *(ulong *)(param_1 + 0x88)) {
        puVar5 = *(undefined1 **)(param_1 + 0x80);
        if ((*(uint *)(param_1 + 0x60) & 0x11) == 0) {
          puVar6 = (undefined1 *)0x0;
          puVar4 = (undefined1 *)0x0;
        }
        else {
          puVar4 = puVar5 + (*(ulong *)(param_1 + 0x88) - 1);
          puVar6 = puVar5;
        }
        *(undefined1 **)(param_1 + 8) = puVar5;
        *(undefined1 **)(param_1 + 0x10) = puVar5;
        *(undefined1 **)(param_1 + 0x18) = puVar5;
        *(undefined1 **)(param_1 + 0x20) = puVar6;
        *(undefined1 **)(param_1 + 0x28) = puVar6;
        *(undefined1 **)(param_1 + 0x30) = puVar4;
        *(undefined1 *)(param_1 + 0x92) = 1;
        if (param_2 == -1) {
          return 0;
        }
        *puVar6 = local_1;
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
        return param_2;
      }
      if (param_2 == -1) {
        *(undefined1 *)(param_1 + 0x92) = 1;
        return 0;
      }
      uVar3 = FUN_71007ceb20(param_1,&local_1,1);
      if ((uVar3 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x92) = 1;
        return param_2;
      }
      return -1;
    }
    if (param_2 != -1) {
      *puVar5 = local_1;
      puVar4 = *(undefined1 **)(param_1 + 0x20);
      puVar5 = (undefined1 *)(*(long *)(param_1 + 0x28) + 1);
      *(undefined1 **)(param_1 + 0x28) = puVar5;
    }
    uVar3 = FUN_71007ceb20(param_1,puVar4,(long)puVar5 - (long)puVar4);
    if ((uVar3 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x80);
      *(long *)(param_1 + 8) = lVar2;
      *(long *)(param_1 + 0x10) = lVar2;
      *(long *)(param_1 + 0x18) = lVar2;
      if (((*(uint *)(param_1 + 0x60) & 0x11) == 0) || (*(ulong *)(param_1 + 0x88) < 2)) {
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(undefined8 *)(param_1 + 0x30) = 0;
      }
      else {
        *(long *)(param_1 + 0x20) = lVar2;
        *(long *)(param_1 + 0x28) = lVar2;
        *(ulong *)(param_1 + 0x30) = lVar2 + (*(ulong *)(param_1 + 0x88) - 1);
      }
      if (param_2 == -1) {
        return 0;
      }
      return param_2;
    }
  }
  return -1;
}



// ===== FUN_71007cf140 @ 71007cf140 (size=520) =====

undefined1  [16] FUN_71007cf140(long param_1,long param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 local_8;
  
  if (*(long **)(param_1 + 0xb0) == (long *)0x0) {
    uVar9 = 0;
    uVar1 = FUN_71007b1420(param_1 + 0x50);
    if (param_2 == 0 && ((uVar1 ^ 1) & 1) == 0) goto LAB_71007cf1f4;
  }
  else {
    uVar1 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x28))();
    uVar9 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
    uVar2 = FUN_71007b1420(param_1 + 0x50);
    if ((param_2 == 0 || 0 < (int)uVar1) && ((uVar2 ^ 1) & 1) == 0) {
LAB_71007cf1f4:
      if (param_2 == 0 && param_3 == 1) {
        if ((*(byte *)(param_1 + 0x92) & 1) == 0) {
          local_8 = *(undefined8 *)(param_1 + 100);
          lVar8 = 0;
          if ((*(byte *)(param_1 + 0x91) & 1) != 0) {
LAB_71007cf310:
            local_8 = *(undefined8 *)(param_1 + 0x74);
            iVar3 = FUN_71007ceca0(param_1,&local_8);
            lVar8 = (long)iVar3;
            goto LAB_71007cf2f0;
          }
        }
        else {
          uVar6 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x30))();
          if ((uVar6 & 1) == 0) goto LAB_71007cf200;
          if ((*(byte *)(param_1 + 0x91) & 1) != 0) goto LAB_71007cf310;
          local_8 = *(undefined8 *)(param_1 + 100);
          lVar8 = 0;
LAB_71007cf2f0:
          if ((*(byte *)(param_1 + 0x92) & 1) != 0) {
            lVar8 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20);
          }
        }
        lVar5 = FUN_71007b17a0(param_1 + 0x50,0,1);
        if (lVar5 != -1) {
          auVar11._8_8_ = local_8;
          auVar11._0_8_ = lVar5 + lVar8;
          return auVar11;
        }
        uVar6 = 0;
        uVar7 = 0;
        uVar4 = 0xffffffffffffffff;
      }
      else {
LAB_71007cf200:
        param_2 = (int)uVar9 * param_2;
        if ((*(byte *)(param_1 + 0xa8) & 1) != 0) {
          *(undefined1 *)(param_1 + 0xa8) = 0;
          lVar8 = *(long *)(param_1 + 0x98);
          *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0xa0);
          if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
            lVar8 = lVar8 + 1;
          }
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x80);
          *(long *)(param_1 + 0x10) = lVar8;
          *(long *)(param_1 + 0x98) = lVar8;
        }
        local_8 = *(undefined8 *)(param_1 + 100);
        if (((*(byte *)(param_1 + 0x91) & 1) != 0) && (param_3 == 1)) {
          local_8 = *(undefined8 *)(param_1 + 0x74);
          iVar3 = FUN_71007ceca0(param_1,&local_8);
          param_2 = param_2 + iVar3;
        }
        auVar11 = FUN_71007cee60(param_1,param_2,param_3,local_8);
        uVar4 = auVar11._0_8_;
        uVar7 = auVar11._8_8_ & 0xffffffff;
        uVar6 = auVar11._8_8_ >> 0x20;
      }
      goto LAB_71007cf1ac;
    }
  }
  uVar6 = 0;
  uVar7 = 0;
  uVar4 = 0xffffffffffffffff;
LAB_71007cf1ac:
  auVar10._8_8_ = uVar7 | uVar6 << 0x20;
  auVar10._0_8_ = uVar4;
  return auVar10;
}



// ===== FUN_71007cf360 @ 71007cf360 (size=184) =====

undefined1  [16] FUN_71007cf360(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = FUN_71007b1420(param_1 + 0x50);
  if ((uVar2 & 1) != 0) {
    if ((*(byte *)(param_1 + 0xa8) & 1) != 0) {
      *(undefined1 *)(param_1 + 0xa8) = 0;
      lVar1 = *(long *)(param_1 + 0x98);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0xa0);
      if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
        lVar1 = lVar1 + 1;
      }
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x80);
      *(long *)(param_1 + 0x10) = lVar1;
      *(long *)(param_1 + 0x98) = lVar1;
    }
    auVar3 = FUN_71007cee60(param_1,param_2,0,param_3);
    return auVar3;
  }
  return ZEXT816(0xffffffffffffffff);
}



// ===== FUN_71007cf420 @ 71007cf420 (size=420) =====

void FUN_71007cf420(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  
  lVar2 = FUN_71007b00e0(&DAT_7100d22878);
  plVar4 = *(long **)(*(long *)(*param_2 + 8) + lVar2 * 8);
  uVar3 = FUN_71007b1420(param_1 + 10);
  if ((uVar3 & 1) == 0) goto LAB_71007cf4d8;
  if (((*(byte *)((long)param_1 + 0x91) & 1) == 0) && ((*(byte *)((long)param_1 + 0x92) & 1) == 0))
  {
    param_1[0x16] = (long)plVar4;
    return;
  }
  if ((long *)param_1[0x16] != (long *)0x0) {
    iVar1 = (**(code **)(*(long *)param_1[0x16] + 0x28))();
    if (iVar1 == -1) {
LAB_71007cf514:
      param_1[0x16] = 0;
      return;
    }
    if ((*(byte *)((long)param_1 + 0x91) & 1) == 0) {
      if ((*(byte *)((long)param_1 + 0x92) & 1) != 0) {
        uVar3 = FUN_71007ced20(param_1);
        if ((uVar3 & 1) == 0) goto LAB_71007cf514;
        lVar2 = param_1[0x10];
        param_1[1] = lVar2;
        param_1[2] = lVar2;
        param_1[3] = lVar2;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
      }
    }
    else {
      if ((long *)param_1[0x16] == (long *)0x0) goto LAB_71007cf5c0;
      uVar3 = (**(code **)(*(long *)param_1[0x16] + 0x30))();
      if ((uVar3 & 1) == 0) {
        lVar2 = param_1[0x17];
        iVar1 = (**(code **)(*(long *)param_1[0x16] + 0x38))
                          ((long *)param_1[0x16],(long)param_1 + 0x74,lVar2,param_1[0x19],
                           param_1[2] - param_1[1]);
        lVar2 = lVar2 + iVar1;
        param_1[0x19] = lVar2;
        lVar2 = param_1[0x1a] - lVar2;
        if (lVar2 != 0) {
          FUN_710080f900(param_1[0x17]);
        }
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[0x19] = param_1[0x17];
        param_1[0x1a] = param_1[0x17] + lVar2;
        lVar2 = param_1[0x10];
        param_1[1] = lVar2;
        param_1[2] = lVar2;
        param_1[3] = lVar2;
        param_1[6] = 0;
        *(undefined8 *)((long)param_1 + 0x6c) = *(undefined8 *)((long)param_1 + 100);
        *(undefined8 *)((long)param_1 + 0x74) = *(undefined8 *)((long)param_1 + 100);
      }
      else if ((plVar4 == (long *)0x0) ||
              ((uVar3 = (**(code **)(*plVar4 + 0x30))(plVar4), (uVar3 & 1) == 0 &&
               (lVar2 = (**(code **)(*param_1 + 0x20))(param_1,0,1,(int)param_1[0xc]), lVar2 == -1))
              )) goto LAB_71007cf514;
    }
LAB_71007cf4d8:
    param_1[0x16] = (long)plVar4;
    return;
  }
LAB_71007cf5c0:
                    /* WARNING: Subroutine does not return */
  FUN_7100003a84();
}



// ===== FUN_71007cf640 @ 71007cf640 (size=176) =====

long FUN_71007cf640(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = FUN_71007b1420(param_1 + 0x50);
  if ((uVar2 & 1) != 0) {
    uVar1 = FUN_71007ced20(param_1);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0xa8) = 0;
    FUN_71007ceac0(param_1);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 8) = uVar3;
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(param_1 + 100);
    *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_1 + 100);
    *(undefined2 *)(param_1 + 0x91) = 0;
    lVar4 = FUN_71007b1500(param_1 + 0x50);
    if (lVar4 != 0 && ((uVar1 ^ 1) & 1) == 0) {
      return param_1;
    }
  }
  return 0;
}



// ===== FUN_71007cf720 @ 71007cf720 (size=76) =====

void FUN_71007cf720(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aede60;
  FUN_71007cf640();
  FUN_71007b1560(param_1 + 10);
  *param_1 = &PTR_LAB_7100aeea88;
  FUN_71007b0080(param_1 + 7);
  return;
}



// ===== FUN_71007cf780 @ 71007cf780 (size=208) =====

long * FUN_71007cf780(long *param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_71007b1420(param_1 + 10);
  if ((uVar1 & 1) == 0) {
    FUN_71007b1440(param_1 + 10,param_2,param_3,0x1b4);
    uVar1 = FUN_71007b1420(param_1 + 10);
    if ((uVar1 & 1) != 0) {
      FUN_71007cea60(param_1);
      lVar2 = param_1[0x10];
      param_1[1] = lVar2;
      param_1[2] = lVar2;
      param_1[3] = lVar2;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      *(uint *)(param_1 + 0xc) = param_3;
      *(undefined8 *)((long)param_1 + 0x6c) = *(undefined8 *)((long)param_1 + 100);
      *(undefined8 *)((long)param_1 + 0x74) = *(undefined8 *)((long)param_1 + 100);
      *(undefined2 *)((long)param_1 + 0x91) = 0;
      if (((param_3 >> 1 & 1) == 0) ||
         (lVar2 = (**(code **)(*param_1 + 0x20))(param_1,0,2,param_3), lVar2 != -1)) {
        return param_1;
      }
      FUN_71007cf640(param_1);
    }
  }
  return (long *)0x0;
}



// ===== FUN_71007cf860 @ 71007cf860 (size=84) =====

void FUN_71007cf860(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aede60;
  FUN_71007cf640();
  FUN_71007b1560(param_1 + 10);
  *param_1 = &PTR_LAB_7100aeea88;
  FUN_71007b0080(param_1 + 7);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007cf8c0 @ 71007cf8c0 (size=136) =====

void FUN_71007cf8c0(undefined8 *param_1)

{
  param_1[0x1c] = &PTR_FUN_7100aee040;
  *param_1 = &PTR_FUN_7100aee018;
  param_1[1] = &PTR_FUN_7100aede60;
  FUN_71007cf640(param_1 + 1);
  FUN_71007b1560(param_1 + 0xb);
  param_1[1] = &PTR_LAB_7100aeea88;
  FUN_71007b0080(param_1 + 8);
  *param_1 = &DAT_7100aedfa8;
  param_1[0x1c] = &PTR_LAB_7100aee0b8;
  FUN_71007d01e0(param_1 + 0x1c);
  return;
}



// ===== FUN_71007cf960 @ 71007cf960 (size=160) =====

void FUN_71007cf960(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  *(undefined ***)((long)param_1 + lVar1) = &PTR_FUN_7100aee018;
  *(undefined ***)((long)param_1 + lVar1 + 0xe0) = &PTR_FUN_7100aee040;
  *(undefined ***)((long)param_1 + lVar1 + 8) = &PTR_FUN_7100aede60;
  FUN_71007cf640((long)param_1 + lVar1 + 8);
  FUN_71007b1560((long)param_1 + lVar1 + 0x58);
  *(undefined ***)((long)param_1 + lVar1 + 8) = &PTR_LAB_7100aeea88;
  FUN_71007b0080((long)param_1 + lVar1 + 0x40);
  *(undefined **)((long)param_1 + lVar1) = &DAT_7100aedfa8;
  *(undefined ***)((long)param_1 + lVar1 + 0xe0) = &PTR_LAB_7100aee0b8;
  FUN_71007d01e0((long)param_1 + lVar1 + 0xe0);
  return;
}



// ===== FUN_71007cfa20 @ 71007cfa20 (size=144) =====

void FUN_71007cfa20(undefined8 *param_1)

{
  param_1[0x1c] = &PTR_FUN_7100aee040;
  *param_1 = &PTR_FUN_7100aee018;
  param_1[1] = &PTR_FUN_7100aede60;
  FUN_71007cf640(param_1 + 1);
  FUN_71007b1560(param_1 + 0xb);
  param_1[1] = &PTR_LAB_7100aeea88;
  FUN_71007b0080(param_1 + 8);
  *param_1 = &DAT_7100aedfa8;
  param_1[0x1c] = &PTR_LAB_7100aee0b8;
  FUN_71007d01e0(param_1 + 0x1c);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007cfac0 @ 71007cfac0 (size=168) =====

void FUN_71007cfac0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*param_1 + -0x18);
  lVar1 = (long)param_1 + lVar2;
  *(undefined ***)((long)param_1 + lVar2) = &PTR_FUN_7100aee018;
  *(undefined ***)(lVar1 + 0xe0) = &PTR_FUN_7100aee040;
  *(undefined ***)(lVar1 + 8) = &PTR_FUN_7100aede60;
  FUN_71007cf640(lVar1 + 8);
  FUN_71007b1560(lVar1 + 0x58);
  *(undefined ***)(lVar1 + 8) = &PTR_LAB_7100aeea88;
  FUN_71007b0080(lVar1 + 0x40);
  *(undefined **)((long)param_1 + lVar2) = &DAT_7100aedfa8;
  *(undefined ***)(lVar1 + 0xe0) = &PTR_LAB_7100aee0b8;
  FUN_71007d01e0(lVar1 + 0xe0);
  thunk_FUN_710081c200(lVar1);
  return;
}



// ===== FUN_71007cfb80 @ 71007cfb80 (size=140) =====

void FUN_71007cfb80(undefined8 *param_1)

{
  param_1[0x1d] = &PTR_FUN_7100aedf80;
  *param_1 = &PTR_FUN_7100aedf58;
  param_1[2] = &PTR_FUN_7100aede60;
  FUN_71007cf640(param_1 + 2);
  FUN_71007b1560(param_1 + 0xc);
  param_1[2] = &PTR_LAB_7100aeea88;
  FUN_71007b0080(param_1 + 9);
  *param_1 = &DAT_7100aedee8;
  param_1[1] = 0;
  param_1[0x1d] = &PTR_LAB_7100aee0b8;
  FUN_71007d01e0(param_1 + 0x1d);
  return;
}



// ===== FUN_71007cfc20 @ 71007cfc20 (size=164) =====

void FUN_71007cfc20(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  *(undefined ***)((long)param_1 + lVar1) = &PTR_FUN_7100aedf58;
  *(undefined ***)((long)param_1 + lVar1 + 0xe8) = &PTR_FUN_7100aedf80;
  *(undefined ***)((long)param_1 + lVar1 + 0x10) = &PTR_FUN_7100aede60;
  FUN_71007cf640((long)param_1 + lVar1 + 0x10);
  FUN_71007b1560((long)param_1 + lVar1 + 0x60);
  *(undefined ***)((long)param_1 + lVar1 + 0x10) = &PTR_LAB_7100aeea88;
  FUN_71007b0080((long)param_1 + lVar1 + 0x48);
  *(undefined **)((long)param_1 + lVar1) = &DAT_7100aedee8;
  *(undefined8 *)((long)param_1 + lVar1 + 8) = 0;
  *(undefined ***)((long)param_1 + lVar1 + 0xe8) = &PTR_LAB_7100aee0b8;
  FUN_71007d01e0((long)param_1 + lVar1 + 0xe8);
  return;
}



// ===== FUN_71007cfce0 @ 71007cfce0 (size=148) =====

void FUN_71007cfce0(undefined8 *param_1)

{
  param_1[0x1d] = &PTR_FUN_7100aedf80;
  *param_1 = &PTR_FUN_7100aedf58;
  param_1[2] = &PTR_FUN_7100aede60;
  FUN_71007cf640(param_1 + 2);
  FUN_71007b1560(param_1 + 0xc);
  param_1[2] = &PTR_LAB_7100aeea88;
  FUN_71007b0080(param_1 + 9);
  *param_1 = &DAT_7100aedee8;
  param_1[1] = 0;
  param_1[0x1d] = &PTR_LAB_7100aee0b8;
  FUN_71007d01e0(param_1 + 0x1d);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007cfd80 @ 71007cfd80 (size=172) =====

void FUN_71007cfd80(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*param_1 + -0x18);
  lVar1 = (long)param_1 + lVar2;
  *(undefined ***)((long)param_1 + lVar2) = &PTR_FUN_7100aedf58;
  *(undefined ***)(lVar1 + 0xe8) = &PTR_FUN_7100aedf80;
  *(undefined ***)(lVar1 + 0x10) = &PTR_FUN_7100aede60;
  FUN_71007cf640(lVar1 + 0x10);
  FUN_71007b1560(lVar1 + 0x60);
  *(undefined ***)(lVar1 + 0x10) = &PTR_LAB_7100aeea88;
  FUN_71007b0080(lVar1 + 0x48);
  *(undefined **)((long)param_1 + lVar2) = &DAT_7100aedee8;
  *(undefined8 *)(lVar1 + 8) = 0;
  *(undefined ***)(lVar1 + 0xe8) = &PTR_LAB_7100aee0b8;
  FUN_71007d01e0(lVar1 + 0xe8);
  thunk_FUN_710081c200(lVar1);
  return;
}



// ===== FUN_71007cfe60 @ 71007cfe60 (size=20) =====

void FUN_71007cfe60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aee078;
  FUN_71007ae160();
  return;
}



// ===== FUN_71007cfe80 @ 71007cfe80 (size=28) =====

void FUN_71007cfe80(undefined8 param_1)

{
  FUN_71007cfe60();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007cfec0 @ 71007cfec0 (size=52) =====

void FUN_71007cfec0(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_7100aee0b8;
  FUN_71007d01e0();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007cff00 @ 71007cff00 (size=60) =====

void FUN_71007cff00(long param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = param_2 | 1;
  if (*(long *)(param_1 + 0xe8) != 0) {
    uVar1 = param_2;
  }
  *(uint *)(param_1 + 0x20) = uVar1;
  if ((uVar1 & *(uint *)(param_1 + 0x1c)) == 0) {
    return;
  }
  FUN_7100004180("basic_ios::clear");
                    /* WARNING: Does not return */
  pcVar2 = (code *)UndefinedInstructionException(0,0x71007cff38);
  (*pcVar2)();
}



// ===== FUN_71007cff58 @ 71007cff58 (size=16) =====

void FUN_71007cff58(void)

{
  code *pcVar1;
  
  FUN_71007af060();
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x71007cff64);
  (*pcVar1)();
}



// ===== FUN_71007cff80 @ 71007cff80 (size=116) =====

void FUN_71007cff80(long param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = FUN_71007b00e0(&DAT_7100d21120);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(*(long *)(*param_2 + 8) + lVar1 * 8);
  lVar1 = FUN_71007b00e0(&DAT_7100d212d8);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(*(long *)(*param_2 + 8) + lVar1 * 8);
  lVar1 = FUN_71007b00e0(&DAT_7100d212e0);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(*(long *)(*param_2 + 8) + lVar1 * 8);
  return;
}



// ===== FUN_71007d0000 @ 71007d0000 (size=156) =====

void FUN_71007d0000(long param_1,long param_2)

{
  undefined1 uVar1;
  long *plVar2;
  
  FUN_71007fba20();
  FUN_71007cff80(param_1,param_1 + 0xd0);
  plVar2 = *(long **)(param_1 + 0xf0);
  uVar1 = 0;
  if (plVar2 != (long *)0x0) {
    if ((char)plVar2[7] == '\0') {
      FUN_71007b8240();
      uVar1 = 0x20;
      if (*(code **)(*plVar2 + 0x30) != (code *)&LAB_71000a0210) {
        uVar1 = (**(code **)(*plVar2 + 0x30))();
      }
    }
    else {
      uVar1 = *(undefined1 *)((long)plVar2 + 0x59);
    }
    *(undefined1 *)(param_1 + 0xe0) = uVar1;
    uVar1 = 1;
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(uint *)(param_1 + 0x20) = (uint)(param_2 == 0);
  *(undefined1 *)(param_1 + 0xe1) = uVar1;
  *(long *)(param_1 + 0xe8) = param_2;
  return;
}



// ===== FUN_71007d00a0 @ 71007d00a0 (size=96) =====

void FUN_71007d00a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_7100aee0e8;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[7] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  puVar1 = param_1 + 8;
  do {
    puVar2 = puVar1 + 2;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar2;
  } while (puVar2 != param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = 8;
  param_1[0x19] = param_1 + 8;
  FUN_71007e0600(param_1 + 0x1a);
  return;
}



// ===== FUN_71007d0100 @ 71007d0100 (size=76) =====

void FUN_71007d0100(long param_1,undefined4 param_2)

{
  long *plVar1;
  
  for (plVar1 = *(long **)(param_1 + 0x28); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    (*(code *)plVar1[1])(param_2,param_1,*(undefined4 *)(plVar1 + 2));
  }
  return;
}



// ===== FUN_71007d0180 @ 71007d0180 (size=84) =====

void FUN_71007d0180(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x28);
  while (plVar5 != (long *)0x0) {
    piVar1 = (int *)((long)plVar5 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 != 0) break;
    plVar5 = (long *)*plVar5;
    thunk_FUN_710081c200();
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// ===== FUN_71007d01e0 @ 71007d01e0 (size=92) =====

void FUN_71007d01e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aee0e8;
  FUN_71007d0100(param_1,0);
  FUN_71007d0180(param_1);
  if ((undefined8 *)param_1[0x19] != param_1 + 8) {
    if ((undefined8 *)param_1[0x19] != (undefined8 *)0x0) {
      thunk_FUN_710081c200();
    }
    param_1[0x19] = 0;
  }
  FUN_71007b0080(param_1 + 0x1a);
  return;
}



// ===== FUN_71007d0240 @ 71007d0240 (size=28) =====

void FUN_71007d0240(undefined8 param_1)

{
  FUN_71007d01e0();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007d0260 @ 71007d0260 (size=408) =====

void FUN_71007d0260(undefined1 *param_1,long *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  long lVar4;
  uint uVar5;
  byte *pbVar6;
  long *plVar7;
  long lVar8;
  
  *param_1 = 0;
  lVar4 = (long)param_2 + *(long *)(*param_2 + -0x18);
  uVar5 = *(uint *)(lVar4 + 0x20);
  if (uVar5 != 0) goto LAB_71007d02c4;
  if (*(long *)(lVar4 + 0xd8) == 0) {
    if (((param_3 & 1) != 0) || ((*(uint *)(lVar4 + 0x18) >> 0xc & 1) == 0)) {
LAB_71007d02e4:
      *param_1 = 1;
      return;
    }
  }
  else {
    FUN_71007e07e0(*(long *)(lVar4 + 0xd8));
    lVar4 = (long)param_2 + *(long *)(*param_2 + -0x18);
    if (((param_3 & 1) != 0) || ((*(uint *)(lVar4 + 0x18) >> 0xc & 1) == 0)) {
LAB_71007d02bc:
      uVar5 = *(uint *)(lVar4 + 0x20);
      if (uVar5 == 0) goto LAB_71007d02e4;
      goto LAB_71007d02c4;
    }
  }
  plVar7 = *(long **)(lVar4 + 0xe8);
  if ((byte *)plVar7[2] < (byte *)plVar7[3]) {
    lVar8 = *(long *)(lVar4 + 0xf0);
    uVar5 = (uint)*(byte *)plVar7[2];
    if (lVar8 == 0) {
LAB_71007d041c:
                    /* WARNING: Subroutine does not return */
      FUN_7100003a84();
    }
LAB_71007d0318:
    do {
      bVar1 = *(byte *)(*(long *)(lVar8 + 0x30) + (long)(int)(uVar5 & 0xff));
      while( true ) {
        if ((bVar1 >> 3 & 1) == 0) {
          lVar4 = (long)param_2 + *(long *)(*param_2 + -0x18);
          goto LAB_71007d02bc;
        }
        pbVar3 = (byte *)plVar7[3];
        if ((byte *)plVar7[2] < pbVar3) {
          pbVar6 = (byte *)plVar7[2] + 1;
          plVar7[2] = (long)pbVar6;
        }
        else {
          iVar2 = (**(code **)(*plVar7 + 0x50))(plVar7);
          if (iVar2 == -1) goto LAB_71007d0380;
          pbVar6 = (byte *)plVar7[2];
          pbVar3 = (byte *)plVar7[3];
        }
        if (pbVar3 <= pbVar6) break;
        bVar1 = *(byte *)(*(long *)(lVar8 + 0x30) + (long)(int)(uint)*pbVar6);
      }
      uVar5 = (**(code **)(*plVar7 + 0x48))(plVar7);
    } while (uVar5 != 0xffffffff);
LAB_71007d0380:
    lVar4 = (long)param_2 + *(long *)(*param_2 + -0x18);
  }
  else {
    uVar5 = (**(code **)(*plVar7 + 0x48))(plVar7);
    lVar4 = (long)param_2 + *(long *)(*param_2 + -0x18);
    lVar8 = *(long *)(lVar4 + 0xf0);
    if (lVar8 == 0) goto LAB_71007d041c;
    if (uVar5 != 0xffffffff) goto LAB_71007d0318;
  }
  uVar5 = *(uint *)(lVar4 + 0x20) | 2;
LAB_71007d02c4:
  FUN_71007cff00(lVar4,uVar5 | 4);
  return;
}



// ===== FUN_71007d0460 @ 71007d0460 (size=168) =====

long * FUN_71007d0460(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  byte local_8 [8];
  
  param_1[1] = 0;
  FUN_71007d0260(local_8,param_1,1);
  if ((local_8[0] & 1) != 0) {
    plVar1 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    lVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3);
    param_1[1] = lVar2;
    if (param_3 != lVar2) {
      lVar2 = (long)param_1 + *(long *)(*param_1 + -0x18);
      FUN_71007cff00(lVar2,*(uint *)(lVar2 + 0x20) | 6);
      return param_1;
    }
  }
  return param_1;
}



// ===== FUN_71007d0580 @ 71007d0580 (size=188) =====

long * FUN_71007d0580(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  byte local_8 [8];
  
  lVar2 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_71007cff00(lVar2,*(uint *)(lVar2 + 0x20) & 0xfffffffd);
  FUN_71007d0260(local_8,param_1,1);
  if ((((local_8[0] & 1) != 0) &&
      ((*(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x20) & 5) == 0)) &&
     (plVar1 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8),
     lVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,param_2,param_3,8), lVar2 == -1)) {
    lVar2 = (long)param_1 + *(long *)(*param_1 + -0x18);
    FUN_71007cff00(lVar2,*(uint *)(lVar2 + 0x20) | 4);
  }
  return param_1;
}



// ===== FUN_71007d06c0 @ 71007d06c0 (size=172) =====

long * FUN_71007d06c0(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  byte local_8 [4];
  uint local_4;
  
  FUN_71007d0260(local_8,param_1,0);
  if ((local_8[0] & 1) != 0) {
    local_4 = 0;
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    plVar2 = *(long **)(lVar1 + 0x100);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003a84();
    }
    (**(code **)(*plVar2 + 0x18))
              (plVar2,*(undefined8 *)(lVar1 + 0xe8),0xffffffff,0,0xffffffff,lVar1,&local_4,param_2);
    if (local_4 != 0) {
      lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
      FUN_71007cff00(lVar1,local_4 | *(uint *)(lVar1 + 0x20));
      return param_1;
    }
  }
  return param_1;
}



// ===== FUN_71007d0a80 @ 71007d0a80 (size=20) =====

void FUN_71007d0a80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aee4d0;
  FUN_71007afc60();
  return;
}



// ===== FUN_71007d0ae0 @ 71007d0ae0 (size=52) =====

void FUN_71007d0ae0(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_7100aee3f8;
  FUN_71007afc60();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007d0b20 @ 71007d0b20 (size=52) =====

void FUN_71007d0b20(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_7100aee470;
  FUN_71007afc60();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007d0b60 @ 71007d0b60 (size=52) =====

void FUN_71007d0b60(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_7100aee670;
  FUN_71007afc60();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007d0ba0 @ 71007d0ba0 (size=52) =====

void FUN_71007d0ba0(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_7100aee6a0;
  FUN_71007afc60();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007d0be0 @ 71007d0be0 (size=28) =====

void FUN_71007d0be0(undefined8 param_1)

{
  FUN_71007d0a80();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007d0c00 @ 71007d0c00 (size=52) =====

void FUN_71007d0c00(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_7100aee6d0;
  FUN_71007afc60();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007d0c40 @ 71007d0c40 (size=52) =====

void FUN_71007d0c40(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_7100aee6f8;
  FUN_71007afc60();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007d0c80 @ 71007d0c80 (size=104) =====

void FUN_71007d0c80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aee748;
  if ((*(byte *)((long)param_1 + 0x6f) & 1) != 0) {
    if (param_1[2] != 0) {
      thunk_FUN_710081c200();
    }
    if (param_1[5] != 0) {
      thunk_FUN_710081c200();
    }
    if (param_1[7] != 0) {
      thunk_FUN_710081c200();
    }
    if (param_1[9] != 0) {
      thunk_FUN_710081c200();
    }
  }
  FUN_71007afc60(param_1);
  return;
}



// ===== FUN_71007d0d00 @ 71007d0d00 (size=28) =====

void FUN_71007d0d00(undefined8 param_1)

{
  FUN_71007d0c80();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007d0d20 @ 71007d0d20 (size=104) =====

void FUN_71007d0d20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aee768;
  if ((*(byte *)((long)param_1 + 0x6f) & 1) != 0) {
    if (param_1[2] != 0) {
      thunk_FUN_710081c200();
    }
    if (param_1[5] != 0) {
      thunk_FUN_710081c200();
    }
    if (param_1[7] != 0) {
      thunk_FUN_710081c200();
    }
    if (param_1[9] != 0) {
      thunk_FUN_710081c200();
    }
  }
  FUN_71007afc60(param_1);
  return;
}



// ===== FUN_71007d0da0 @ 71007d0da0 (size=28) =====

void FUN_71007d0da0(undefined8 param_1)

{
  FUN_71007d0d20();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007d0dc0 @ 71007d0dc0 (size=116) =====

void FUN_71007d0dc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aee788;
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    if (param_1[2] != 0) {
      thunk_FUN_710081c200();
    }
    if (param_1[5] != 0) {
      thunk_FUN_710081c200();
    }
    if (param_1[7] != 0) {
      thunk_FUN_710081c200();
    }
    FUN_71007afc60(param_1);
    return;
  }
  FUN_71007afc60(param_1);
  return;
}



// ===== FUN_71007d0e40 @ 71007d0e40 (size=28) =====

void FUN_71007d0e40(undefined8 param_1)

{
  FUN_71007d0dc0();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007d0e60 @ 71007d0e60 (size=52) =====

void FUN_71007d0e60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aee5e0;
  FUN_71007fb180(param_1 + 2);
  FUN_71007afc60(param_1);
  return;
}



// ===== FUN_71007d0ea0 @ 71007d0ea0 (size=28) =====

void FUN_71007d0ea0(undefined8 param_1)

{
  FUN_71007d0e60();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007d0ec0 @ 71007d0ec0 (size=52) =====

void FUN_71007d0ec0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aee378;
  FUN_71007fb180(param_1 + 2);
  FUN_71007afc60(param_1);
  return;
}



// ===== FUN_71007d0f00 @ 71007d0f00 (size=104) =====

void FUN_71007d0f00(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[4];
  *param_1 = &PTR_FUN_7100aee4f0;
  lVar1 = FUN_71007afdc0();
  if (lVar2 != 0 && lVar2 != lVar1) {
    thunk_FUN_710081c200(lVar2);
  }
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  FUN_71007fb180(param_1 + 3);
  FUN_71007afc60(param_1);
  return;
}



// ===== FUN_71007d0f80 @ 71007d0f80 (size=28) =====

void FUN_71007d0f80(undefined8 param_1)

{
  FUN_71007d0f00();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007d0fa0 @ 71007d0fa0 (size=40) =====

void FUN_71007d0fa0(long *param_1)

{
  if ((ulong)param_1[2] < (ulong)param_1[3]) {
    param_1[2] = param_1[2] + 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0071007d0fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))();
  return;
}



// ===== FUN_71007d0fe0 @ 71007d0fe0 (size=88) =====

ulong FUN_71007d0fe0(long *param_1,ulong param_2)

{
  ulong uVar1;
  
  FUN_71007b8240();
  if (*(code **)(*param_1 + 0x30) == (code *)&LAB_71000a0210) {
    return param_2 & 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x0071007d1034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2 & 0xffffffff);
  return uVar1;
}



// ===== FUN_71007d1040 @ 71007d1040 (size=180) =====

void FUN_71007d1040(long *param_1,long param_2,long param_3,undefined8 param_4)

{
  if ((char)param_1[7] != '\x01') {
    if ((char)param_1[7] == '\0') {
      FUN_71007b8240();
      if (*(code **)(*param_1 + 0x38) != FUN_71007b8200) {
                    /* WARNING: Could not recover jumptable at 0x0071007d10e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x38))(param_1);
        return;
      }
      if (param_2 != param_3) {
        FUN_710080f900(param_4,param_2,param_3 - param_2);
        return;
      }
      return;
    }
    if (*(code **)(*param_1 + 0x38) != FUN_71007b8200) {
                    /* WARNING: Could not recover jumptable at 0x0071007d10d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x38))(param_1);
      return;
    }
  }
  if (param_2 != param_3) {
    FUN_710080f900(param_4,param_2,param_3 - param_2);
    return;
  }
  return;
}



// ===== FUN_71007d1100 @ 71007d1100 (size=184) =====

long * FUN_71007d1100(undefined1 *param_1,undefined1 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1 == param_2) {
    return (long *)&DAT_7100d210f0;
  }
  if (param_1 != (undefined1 *)0x0) {
    lVar3 = (long)param_2 - (long)param_1;
    plVar1 = (long *)FUN_71007b6800(lVar3,0);
    plVar2 = plVar1 + 3;
    if (lVar3 == 1) {
      *(undefined1 *)(plVar1 + 3) = *param_1;
    }
    else {
      plVar2 = (long *)FUN_710080f900(plVar2,param_1,lVar3);
    }
    if (plVar1 != (long *)&DAT_7100d210d8) {
      *plVar1 = lVar3;
      *(undefined4 *)(plVar1 + 2) = 0;
      *(undefined1 *)((long)plVar1 + lVar3 + 0x18) = 0;
    }
    return plVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string::_S_construct null not valid");
}



// ===== FUN_71007d11c0 @ 71007d11c0 (size=80) =====

void FUN_71007d11c0(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  undefined1 auStack_8 [8];
  
  if ((undefined1 *)(param_1 + -0x18) != &DAT_7100d210d8) {
    piVar4 = (int *)(param_1 + -8);
    do {
      iVar1 = *piVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar3) {
        *piVar4 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
      thunk_FUN_710081c200((undefined1 *)(param_1 + -0x18),auStack_8);
      return;
    }
  }
  return;
}



// ===== FUN_71007d1220 @ 71007d1220 (size=60) =====

void FUN_71007d1220(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aee378;
  FUN_71007fb180(param_1 + 2);
  FUN_71007afc60(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007d1260 @ 71007d1260 (size=356) =====

undefined1  [16]
FUN_71007d1260(undefined8 param_1,long *param_2,uint param_3,long param_4,undefined8 param_5,
              undefined8 param_6,char param_7,char param_8)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 local_88;
  char local_87;
  char local_86;
  undefined1 local_85;
  undefined1 auStack_80 [128];
  
  lVar1 = FUN_71007b00e0(&DAT_7100d21120);
  plVar5 = *(long **)(*(long *)(*(long *)(param_4 + 0xd0) + 8) + lVar1 * 8);
  if (plVar5 != (long *)0x0) {
    uVar2 = FUN_71007b00e0(&DAT_7100d212a8);
    if (((uVar2 < *(ulong *)(*(long *)(param_4 + 0xd0) + 0x10)) &&
        (lVar1 = *(long *)(*(long *)(*(long *)(param_4 + 0xd0) + 8) + uVar2 * 8), lVar1 != 0)) &&
       (lVar1 = FUN_71007f9ea0(lVar1,&PTR_PTR_FUN_7100aec798,&PTR_PTR_FUN_7100aee1a8,0), lVar1 != 0)
       ) {
      if ((char)plVar5[7] == '\0') {
        FUN_71007b8240(plVar5);
        local_88 = 0x25;
        if (*(code **)(*plVar5 + 0x30) != (code *)&LAB_71000a0210) {
          local_88 = (**(code **)(*plVar5 + 0x30))(plVar5);
        }
      }
      else {
        local_88 = *(undefined1 *)((long)plVar5 + 0x5e);
      }
      local_86 = param_8;
      local_87 = param_7;
      if (param_8 != '\0') {
        local_85 = 0;
        local_86 = param_7;
        local_87 = param_8;
      }
      uVar4 = param_3 & 0xff;
      FUN_71007fd8e0(lVar1,auStack_80,0x80,&local_88,param_6);
      if ((param_3 & 1) == 0) {
        lVar1 = FUN_710081ce00(auStack_80);
        lVar3 = (**(code **)(*param_2 + 0x60))(param_2,auStack_80,lVar1);
        if (lVar1 != lVar3) {
          uVar4 = 1;
        }
      }
      auVar6._8_4_ = uVar4;
      auVar6._0_8_ = param_2;
      auVar6._12_4_ = 0;
      return auVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003a84();
}



// ===== FUN_71007d13e0 @ 71007d13e0 (size=224) =====

undefined8 * FUN_71007d13e0(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_8 [8];
  
  puVar4 = *(undefined1 **)(*(long *)(param_2 + 0x10) + 0x10);
  if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string::_S_construct null not valid");
  }
  lVar1 = FUN_710081ce00(puVar4);
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_71007b6800(lVar1,0,auStack_8);
    plVar3 = plVar2 + 3;
    if (lVar1 == 1) {
      *(undefined1 *)(plVar2 + 3) = *puVar4;
    }
    else {
      plVar3 = (long *)FUN_710080f900(plVar3,puVar4,lVar1);
    }
    if (plVar2 != (long *)&DAT_7100d210d8) {
      *plVar2 = lVar1;
      *(undefined4 *)(plVar2 + 2) = 0;
      *(undefined1 *)((long)plVar2 + lVar1 + 0x18) = 0;
    }
    *param_1 = plVar3;
    return param_1;
  }
  *param_1 = &DAT_7100d210f0;
  return param_1;
}



// ===== FUN_71007d14c0 @ 71007d14c0 (size=224) =====

undefined8 * FUN_71007d14c0(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_8 [8];
  
  puVar4 = *(undefined1 **)(*(long *)(param_2 + 0x10) + 0x28);
  if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string::_S_construct null not valid");
  }
  lVar1 = FUN_710081ce00(puVar4);
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_71007b6800(lVar1,0,auStack_8);
    plVar3 = plVar2 + 3;
    if (lVar1 == 1) {
      *(undefined1 *)(plVar2 + 3) = *puVar4;
    }
    else {
      plVar3 = (long *)FUN_710080f900(plVar3,puVar4,lVar1);
    }
    if (plVar2 != (long *)&DAT_7100d210d8) {
      *plVar2 = lVar1;
      *(undefined4 *)(plVar2 + 2) = 0;
      *(undefined1 *)((long)plVar2 + lVar1 + 0x18) = 0;
    }
    *param_1 = plVar3;
    return param_1;
  }
  *param_1 = &DAT_7100d210f0;
  return param_1;
}



// ===== FUN_71007d15a0 @ 71007d15a0 (size=224) =====

undefined8 * FUN_71007d15a0(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_8 [8];
  
  puVar4 = *(undefined1 **)(*(long *)(param_2 + 0x10) + 0x38);
  if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string::_S_construct null not valid");
  }
  lVar1 = FUN_710081ce00(puVar4);
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_71007b6800(lVar1,0,auStack_8);
    plVar3 = plVar2 + 3;
    if (lVar1 == 1) {
      *(undefined1 *)(plVar2 + 3) = *puVar4;
    }
    else {
      plVar3 = (long *)FUN_710080f900(plVar3,puVar4,lVar1);
    }
    if (plVar2 != (long *)&DAT_7100d210d8) {
      *plVar2 = lVar1;
      *(undefined4 *)(plVar2 + 2) = 0;
      *(undefined1 *)((long)plVar2 + lVar1 + 0x18) = 0;
    }
    *param_1 = plVar3;
    return param_1;
  }
  *param_1 = &DAT_7100d210f0;
  return param_1;
}



// ===== FUN_71007d1680 @ 71007d1680 (size=224) =====

undefined8 * FUN_71007d1680(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_8 [8];
  
  puVar4 = *(undefined1 **)(*(long *)(param_2 + 0x10) + 0x48);
  if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string::_S_construct null not valid");
  }
  lVar1 = FUN_710081ce00(puVar4);
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_71007b6800(lVar1,0,auStack_8);
    plVar3 = plVar2 + 3;
    if (lVar1 == 1) {
      *(undefined1 *)(plVar2 + 3) = *puVar4;
    }
    else {
      plVar3 = (long *)FUN_710080f900(plVar3,puVar4,lVar1);
    }
    if (plVar2 != (long *)&DAT_7100d210d8) {
      *plVar2 = lVar1;
      *(undefined4 *)(plVar2 + 2) = 0;
      *(undefined1 *)((long)plVar2 + lVar1 + 0x18) = 0;
    }
    *param_1 = plVar3;
    return param_1;
  }
  *param_1 = &DAT_7100d210f0;
  return param_1;
}



// ===== FUN_71007d1760 @ 71007d1760 (size=224) =====

undefined8 * FUN_71007d1760(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_8 [8];
  
  puVar4 = *(undefined1 **)(*(long *)(param_2 + 0x10) + 0x10);
  if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string::_S_construct null not valid");
  }
  lVar1 = FUN_710081ce00(puVar4);
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_71007b6800(lVar1,0,auStack_8);
    plVar3 = plVar2 + 3;
    if (lVar1 == 1) {
      *(undefined1 *)(plVar2 + 3) = *puVar4;
    }
    else {
      plVar3 = (long *)FUN_710080f900(plVar3,puVar4,lVar1);
    }
    if (plVar2 != (long *)&DAT_7100d210d8) {
      *plVar2 = lVar1;
      *(undefined4 *)(plVar2 + 2) = 0;
      *(undefined1 *)((long)plVar2 + lVar1 + 0x18) = 0;
    }
    *param_1 = plVar3;
    return param_1;
  }
  *param_1 = &DAT_7100d210f0;
  return param_1;
}



// ===== FUN_71007d1840 @ 71007d1840 (size=224) =====

undefined8 * FUN_71007d1840(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_8 [8];
  
  puVar4 = *(undefined1 **)(*(long *)(param_2 + 0x10) + 0x28);
  if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string::_S_construct null not valid");
  }
  lVar1 = FUN_710081ce00(puVar4);
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_71007b6800(lVar1,0,auStack_8);
    plVar3 = plVar2 + 3;
    if (lVar1 == 1) {
      *(undefined1 *)(plVar2 + 3) = *puVar4;
    }
    else {
      plVar3 = (long *)FUN_710080f900(plVar3,puVar4,lVar1);
    }
    if (plVar2 != (long *)&DAT_7100d210d8) {
      *plVar2 = lVar1;
      *(undefined4 *)(plVar2 + 2) = 0;
      *(undefined1 *)((long)plVar2 + lVar1 + 0x18) = 0;
    }
    *param_1 = plVar3;
    return param_1;
  }
  *param_1 = &DAT_7100d210f0;
  return param_1;
}



// ===== FUN_71007d1920 @ 71007d1920 (size=224) =====

undefined8 * FUN_71007d1920(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_8 [8];
  
  puVar4 = *(undefined1 **)(*(long *)(param_2 + 0x10) + 0x38);
  if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string::_S_construct null not valid");
  }
  lVar1 = FUN_710081ce00(puVar4);
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_71007b6800(lVar1,0,auStack_8);
    plVar3 = plVar2 + 3;
    if (lVar1 == 1) {
      *(undefined1 *)(plVar2 + 3) = *puVar4;
    }
    else {
      plVar3 = (long *)FUN_710080f900(plVar3,puVar4,lVar1);
    }
    if (plVar2 != (long *)&DAT_7100d210d8) {
      *plVar2 = lVar1;
      *(undefined4 *)(plVar2 + 2) = 0;
      *(undefined1 *)((long)plVar2 + lVar1 + 0x18) = 0;
    }
    *param_1 = plVar3;
    return param_1;
  }
  *param_1 = &DAT_7100d210f0;
  return param_1;
}



// ===== FUN_71007d1a00 @ 71007d1a00 (size=224) =====

undefined8 * FUN_71007d1a00(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_8 [8];
  
  puVar4 = *(undefined1 **)(*(long *)(param_2 + 0x10) + 0x48);
  if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string::_S_construct null not valid");
  }
  lVar1 = FUN_710081ce00(puVar4);
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_71007b6800(lVar1,0,auStack_8);
    plVar3 = plVar2 + 3;
    if (lVar1 == 1) {
      *(undefined1 *)(plVar2 + 3) = *puVar4;
    }
    else {
      plVar3 = (long *)FUN_710080f900(plVar3,puVar4,lVar1);
    }
    if (plVar2 != (long *)&DAT_7100d210d8) {
      *plVar2 = lVar1;
      *(undefined4 *)(plVar2 + 2) = 0;
      *(undefined1 *)((long)plVar2 + lVar1 + 0x18) = 0;
    }
    *param_1 = plVar3;
    return param_1;
  }
  *param_1 = &DAT_7100d210f0;
  return param_1;
}



// ===== FUN_71007d1ae0 @ 71007d1ae0 (size=224) =====

undefined8 * FUN_71007d1ae0(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_8 [8];
  
  puVar4 = *(undefined1 **)(*(long *)(param_2 + 0x10) + 0x10);
  if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string::_S_construct null not valid");
  }
  lVar1 = FUN_710081ce00(puVar4);
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_71007b6800(lVar1,0,auStack_8);
    plVar3 = plVar2 + 3;
    if (lVar1 == 1) {
      *(undefined1 *)(plVar2 + 3) = *puVar4;
    }
    else {
      plVar3 = (long *)FUN_710080f900(plVar3,puVar4,lVar1);
    }
    if (plVar2 != (long *)&DAT_7100d210d8) {
      *plVar2 = lVar1;
      *(undefined4 *)(plVar2 + 2) = 0;
      *(undefined1 *)((long)plVar2 + lVar1 + 0x18) = 0;
    }
    *param_1 = plVar3;
    return param_1;
  }
  *param_1 = &DAT_7100d210f0;
  return param_1;
}



// ===== FUN_71007d1bc0 @ 71007d1bc0 (size=224) =====

undefined8 * FUN_71007d1bc0(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_8 [8];
  
  puVar4 = *(undefined1 **)(*(long *)(param_2 + 0x10) + 0x28);
  if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string::_S_construct null not valid");
  }
  lVar1 = FUN_710081ce00(puVar4);
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_71007b6800(lVar1,0,auStack_8);
    plVar3 = plVar2 + 3;
    if (lVar1 == 1) {
      *(undefined1 *)(plVar2 + 3) = *puVar4;
    }
    else {
      plVar3 = (long *)FUN_710080f900(plVar3,puVar4,lVar1);
    }
    if (plVar2 != (long *)&DAT_7100d210d8) {
      *plVar2 = lVar1;
      *(undefined4 *)(plVar2 + 2) = 0;
      *(undefined1 *)((long)plVar2 + lVar1 + 0x18) = 0;
    }
    *param_1 = plVar3;
    return param_1;
  }
  *param_1 = &DAT_7100d210f0;
  return param_1;
}



// ===== FUN_71007d1ca0 @ 71007d1ca0 (size=224) =====

undefined8 * FUN_71007d1ca0(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_8 [8];
  
  puVar4 = *(undefined1 **)(*(long *)(param_2 + 0x10) + 0x38);
  if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string::_S_construct null not valid");
  }
  lVar1 = FUN_710081ce00(puVar4);
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_71007b6800(lVar1,0,auStack_8);
    plVar3 = plVar2 + 3;
    if (lVar1 == 1) {
      *(undefined1 *)(plVar2 + 3) = *puVar4;
    }
    else {
      plVar3 = (long *)FUN_710080f900(plVar3,puVar4,lVar1);
    }
    if (plVar2 != (long *)&DAT_7100d210d8) {
      *plVar2 = lVar1;
      *(undefined4 *)(plVar2 + 2) = 0;
      *(undefined1 *)((long)plVar2 + lVar1 + 0x18) = 0;
    }
    *param_1 = plVar3;
    return param_1;
  }
  *param_1 = &DAT_7100d210f0;
  return param_1;
}



// ===== FUN_71007d1d80 @ 71007d1d80 (size=368) =====

int FUN_71007d1d80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  undefined1 *puVar12;
  undefined1 auStack_8 [8];
  
  lVar6 = FUN_71007d1100(param_2,param_3,auStack_8);
  puVar7 = (undefined1 *)FUN_71007d1100(param_4,param_5,auStack_8);
  lVar10 = *(long *)(puVar7 + -0x18);
  lVar1 = lVar6 + *(long *)(lVar6 + -0x18);
  lVar9 = lVar6;
  puVar12 = puVar7;
  do {
    iVar5 = FUN_71007fb960(param_1,lVar9,puVar12);
    if (iVar5 != 0) {
joined_r0x0071007d1e94:
      if (puVar7 != &DAT_7100d210f0) {
        piVar11 = (int *)(puVar7 + -8);
        do {
          iVar2 = *piVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar4) {
            *piVar11 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 < 1) {
          thunk_FUN_710081c200(puVar7 + -0x18,auStack_8);
        }
      }
      if ((undefined1 *)(lVar6 + -0x18) != &DAT_7100d210d8) {
        piVar11 = (int *)(lVar6 + -8);
        do {
          iVar2 = *piVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar4) {
            *piVar11 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 < 1) {
          thunk_FUN_710081c200((undefined1 *)(lVar6 + -0x18),auStack_8);
        }
      }
      return iVar5;
    }
    lVar8 = FUN_710081ce00(lVar9);
    lVar9 = lVar9 + lVar8;
    lVar8 = FUN_710081ce00(puVar12);
    puVar12 = puVar12 + lVar8;
    if (lVar1 == lVar9 && puVar7 + lVar10 == puVar12) goto joined_r0x0071007d1e94;
    if (lVar1 == lVar9) {
      iVar5 = -1;
      goto joined_r0x0071007d1e94;
    }
    if (puVar7 + lVar10 == puVar12) {
      iVar5 = 1;
      goto joined_r0x0071007d1e94;
    }
    lVar9 = lVar9 + 1;
    puVar12 = puVar12 + 1;
  } while( true );
}



// ===== FUN_71007d1f20 @ 71007d1f20 (size=620) =====

long * FUN_71007d1f20(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulong uVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined1 auVar17 [16];
  undefined4 local_24;
  undefined1 auStack_8 [8];
  
  *param_1 = (long)&DAT_7100d210f0;
  puVar5 = (undefined1 *)FUN_71007d1100(param_3,param_4,auStack_8);
  lVar15 = *(long *)(puVar5 + -0x18);
  uVar14 = (param_4 - param_3) * 2;
  if (uVar14 < 0x101) {
    lVar10 = -(uVar14 + 0xf & 0xfffffffffffffff0);
    puVar12 = &stack0xffffffffffffff70 + lVar10;
    puVar16 = &stack0xffffffffffffff70 + lVar10;
    puVar6 = (undefined4 *)FUN_710080e8e0();
    local_24 = *puVar6;
  }
  else {
    puVar6 = (undefined4 *)FUN_710080e8e0();
    local_24 = *puVar6;
    puVar12 = (undefined1 *)thunk_FUN_71007af5c0(uVar14);
    puVar16 = (undefined1 *)0x0;
  }
  puVar6 = (undefined4 *)FUN_710080e8e0();
  *puVar6 = 0;
  puVar13 = puVar5;
  while( true ) {
    auVar17 = FUN_71007fb9a0(param_2,puVar12,puVar13,uVar14);
    uVar9 = auVar17._0_8_;
    bVar1 = puVar12 != (undefined1 *)0x0 && puVar16 != puVar12;
    puVar8 = puVar12;
    if (uVar14 <= uVar9) {
      piVar7 = (int *)FUN_710080e8e0(uVar9,auVar17._8_8_,uVar9);
      if (*piVar7 != 0) {
        puVar6 = (undefined4 *)FUN_710080e8e0();
                    /* WARNING: Subroutine does not return */
        FUN_7100003e58(*puVar6);
      }
      uVar14 = uVar9 + 1;
      puVar8 = (undefined1 *)thunk_FUN_71007af5c0(uVar14);
      if (puVar12 != (undefined1 *)0x0 && puVar16 != puVar12) {
        thunk_FUN_710081c200(puVar12);
      }
      uVar9 = FUN_71007fb9a0(param_2,puVar8,puVar13,uVar14);
      bVar1 = true;
    }
    FUN_71007b7060(param_1,puVar8,uVar9);
    lVar10 = FUN_710081ce00(puVar13);
    if (puVar5 + lVar15 == puVar13 + lVar10) break;
    lVar11 = *param_1;
    lVar2 = *(long *)(lVar11 + -0x18);
    uVar9 = lVar2 + 1;
    if ((*(ulong *)(lVar11 + -0x10) < uVar9) || (0 < (int)*(undefined8 *)(lVar11 + -8))) {
      FUN_71007b6ec0(param_1,uVar9);
    }
    puVar13 = puVar13 + lVar10 + 1;
    *(undefined1 *)(*param_1 + *(long *)(*param_1 + -0x18)) = 0;
    lVar10 = *param_1;
    puVar12 = puVar8;
    if ((undefined1 *)(lVar10 + -0x18) != &DAT_7100d210d8) {
      *(ulong *)(lVar10 + -0x18) = uVar9;
      *(undefined4 *)(lVar10 + -8) = 0;
      ((undefined1 *)(lVar10 + -0x18))[lVar2 + 0x19] = 0;
    }
  }
  if (bVar1) {
    thunk_FUN_710081c200(puVar8);
    piVar7 = (int *)FUN_710080e8e0();
    iVar3 = *piVar7;
  }
  else {
    piVar7 = (int *)FUN_710080e8e0();
    iVar3 = *piVar7;
  }
  if (iVar3 == 0) {
    puVar6 = (undefined4 *)FUN_710080e8e0();
    *puVar6 = local_24;
  }
  if (puVar5 != &DAT_7100d210f0) {
    piVar7 = (int *)(puVar5 + -8);
    do {
      iVar3 = *piVar7;
      cVar4 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar1) {
        *piVar7 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 < 1) {
      thunk_FUN_710081c200(puVar5 + -0x18,auStack_8);
    }
  }
  return param_1;
}



// ===== FUN_71007d2200 @ 71007d2200 (size=72) =====

ulong FUN_71007d2200(long *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = (uint)param_2;
  uVar4 = (ulong)uVar1;
  param_3 = param_3 & 0xff;
  bVar2 = *(byte *)((long)param_1 + uVar4 + 0x139);
  uVar5 = (ulong)bVar2;
  if (bVar2 == 0) {
    if (*(code **)(*param_1 + 0x40) != (code *)&LAB_71000a0220) {
      uVar3 = (**(code **)(*param_1 + 0x40))(param_1,uVar4,param_3);
      if (param_3 != (uVar3 & 0xff)) {
        *(char *)((long)param_1 + (ulong)uVar1 + 0x139) = (char)uVar3;
      }
      return (ulong)(uVar3 & 0xff);
    }
    uVar5 = uVar4;
    if (param_3 != uVar1) {
      *(byte *)((long)param_1 + uVar4 + 0x139) = param_2;
    }
  }
  return uVar5;
}



// ===== FUN_71007d2248 @ 71007d2248 (size=64) =====

uint FUN_71007d2248(long param_1,ulong param_2)

{
  byte bVar1;
  uint in_w5;
  code *in_x6;
  
  bVar1 = (*in_x6)(param_1,param_2,in_w5);
  if (in_w5 != bVar1) {
    *(byte *)(param_1 + (param_2 & 0xffffffff) + 0x139) = bVar1;
  }
  return (uint)bVar1;
}



// ===== FUN_71007d22a0 @ 71007d22a0 (size=1184) =====

void FUN_71007d22a0(long param_1,long *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  code *pcVar11;
  int *piVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  lVar6 = FUN_71007b00e0(&DAT_7100d212c0);
  plVar14 = *(long **)(*(long *)(*param_2 + 8) + lVar6 * 8);
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  if (*(code **)(*plVar14 + 0x28) == FUN_71007d14c0) {
    lVar6 = -1;
    lVar13 = *(long *)(plVar14[2] + 0x28);
    if (lVar13 != 0) {
      lVar6 = FUN_710081ce00(lVar13,0xffffffffffffffff);
      lVar6 = lVar13 + lVar6;
    }
    local_8 = FUN_71007d1100(lVar13,lVar6,auStack_10);
  }
  else {
    (**(code **)(*plVar14 + 0x28))(&local_8,plVar14);
  }
  uVar17 = *(undefined8 *)(local_8 + -0x18);
  uVar7 = thunk_FUN_71007af5c0(uVar17);
  FUN_71007b66e0(&local_8,uVar7,uVar17,0);
  if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210d8) {
    piVar12 = (int *)(local_8 + -8);
    do {
      iVar1 = *piVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar3) {
        *piVar12 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
    }
  }
  if (*(code **)(*plVar14 + 0x30) == FUN_71007d15a0) {
    lVar6 = -1;
    lVar13 = *(long *)(plVar14[2] + 0x38);
    if (lVar13 != 0) {
      lVar6 = FUN_710081ce00(lVar13,0xffffffffffffffff);
      lVar6 = lVar13 + lVar6;
    }
    local_8 = FUN_71007d1100(lVar13,lVar6,auStack_20);
  }
  else {
    (**(code **)(*plVar14 + 0x30))(&local_8,plVar14);
  }
  uVar16 = *(undefined8 *)(local_8 + -0x18);
  uVar8 = thunk_FUN_71007af5c0(uVar16);
  FUN_71007b66e0(&local_8,uVar8,uVar16,0);
  if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210d8) {
    piVar12 = (int *)(local_8 + -8);
    do {
      iVar1 = *piVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar3) {
        *piVar12 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
    }
  }
  if (*(code **)(*plVar14 + 0x38) == FUN_71007d1680) {
    lVar6 = -1;
    lVar13 = *(long *)(plVar14[2] + 0x48);
    if (lVar13 != 0) {
      lVar6 = FUN_710081ce00(lVar13,0xffffffffffffffff);
      lVar6 = lVar13 + lVar6;
    }
    local_8 = FUN_71007d1100(lVar13,lVar6,auStack_18);
  }
  else {
    (**(code **)(*plVar14 + 0x38))(&local_8,plVar14);
  }
  uVar15 = *(undefined8 *)(local_8 + -0x18);
  uVar9 = thunk_FUN_71007af5c0(uVar15);
  FUN_71007b66e0(&local_8,uVar9,uVar15,0);
  if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210d8) {
    piVar12 = (int *)(local_8 + -8);
    do {
      iVar1 = *piVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar3) {
        *piVar12 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
    }
  }
  if (*(code **)(*plVar14 + 0x20) == FUN_71007d13e0) {
    lVar6 = -1;
    lVar13 = *(long *)(plVar14[2] + 0x10);
    if (lVar13 != 0) {
      lVar6 = FUN_710081ce00(lVar13,0xffffffffffffffff);
      lVar6 = lVar13 + lVar6;
    }
    local_8 = FUN_71007d1100(lVar13,lVar6,auStack_10);
  }
  else {
    (**(code **)(*plVar14 + 0x20))(&local_8,plVar14);
  }
  lVar6 = *(long *)(local_8 + -0x18);
  pcVar10 = (char *)thunk_FUN_71007af5c0(lVar6);
  FUN_71007b66e0(&local_8,pcVar10,lVar6,0);
  *(char **)(param_1 + 0x10) = pcVar10;
  *(long *)(param_1 + 0x18) = lVar6;
  bVar3 = false;
  if (lVar6 != 0) {
    bVar3 = '\0' < *pcVar10;
  }
  *(bool *)(param_1 + 0x20) = bVar3;
  if (*(code **)(*plVar14 + 0x10) == (code *)&LAB_71007d07e0) {
    uVar4 = *(undefined1 *)(plVar14[2] + 0x21);
  }
  else {
    uVar4 = (**(code **)(*plVar14 + 0x10))(plVar14);
  }
  *(undefined1 *)(param_1 + 0x21) = uVar4;
  if (*(code **)(*plVar14 + 0x18) == (code *)&LAB_71007d0800) {
    uVar4 = *(undefined1 *)(plVar14[2] + 0x22);
  }
  else {
    uVar4 = (**(code **)(*plVar14 + 0x18))(plVar14);
  }
  *(undefined1 *)(param_1 + 0x22) = uVar4;
  *(undefined8 *)(param_1 + 0x28) = uVar7;
  *(undefined8 *)(param_1 + 0x30) = uVar17;
  *(undefined8 *)(param_1 + 0x38) = uVar8;
  *(undefined8 *)(param_1 + 0x40) = uVar16;
  *(undefined8 *)(param_1 + 0x48) = uVar9;
  *(undefined8 *)(param_1 + 0x50) = uVar15;
  lVar6 = *plVar14;
  if (*(code **)(lVar6 + 0x40) == (code *)&LAB_71007d0820) {
    uVar5 = *(undefined4 *)(plVar14[2] + 0x58);
  }
  else {
    uVar5 = (**(code **)(lVar6 + 0x40))(plVar14);
    lVar6 = *plVar14;
  }
  pcVar11 = *(code **)(lVar6 + 0x48);
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  if (pcVar11 == (code *)&LAB_71007d0840) {
    uVar5 = *(undefined4 *)(plVar14[2] + 0x5c);
  }
  else {
    uVar5 = (*pcVar11)(plVar14);
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar5;
  if (*(code **)(*plVar14 + 0x50) == (code *)&LAB_71007d0860) {
    uVar5 = *(undefined4 *)(plVar14[2] + 0x60);
  }
  else {
    uVar5 = (**(code **)(*plVar14 + 0x50))(plVar14);
  }
  *(undefined4 *)(param_1 + 0x60) = uVar5;
  lVar6 = FUN_71007b00e0(&DAT_7100d21120);
  lVar6 = *(long *)(*(long *)(*param_2 + 8) + lVar6 * 8);
  if (lVar6 != 0) {
    FUN_71007d1040(lVar6,PTR_DAT_7100af47a0,PTR_DAT_7100af47a0 + 0xb,param_1 + 100);
    *(undefined1 *)(param_1 + 0x6f) = 1;
    if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210d8) {
      piVar12 = (int *)(local_8 + -8);
      do {
        iVar1 = *piVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar3) {
          *piVar12 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 < 1) {
        thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003a84();
}



// ===== FUN_71007d2800 @ 71007d2800 (size=1184) =====

void FUN_71007d2800(long param_1,long *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  code *pcVar11;
  int *piVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  lVar6 = FUN_71007b00e0(&DAT_7100d212b8);
  plVar14 = *(long **)(*(long *)(*param_2 + 8) + lVar6 * 8);
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  if (*(code **)(*plVar14 + 0x28) == FUN_71007d1840) {
    lVar6 = -1;
    lVar13 = *(long *)(plVar14[2] + 0x28);
    if (lVar13 != 0) {
      lVar6 = FUN_710081ce00(lVar13,0xffffffffffffffff);
      lVar6 = lVar13 + lVar6;
    }
    local_8 = FUN_71007d1100(lVar13,lVar6,auStack_10);
  }
  else {
    (**(code **)(*plVar14 + 0x28))(&local_8,plVar14);
  }
  uVar17 = *(undefined8 *)(local_8 + -0x18);
  uVar7 = thunk_FUN_71007af5c0(uVar17);
  FUN_71007b66e0(&local_8,uVar7,uVar17,0);
  if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210d8) {
    piVar12 = (int *)(local_8 + -8);
    do {
      iVar1 = *piVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar3) {
        *piVar12 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
    }
  }
  if (*(code **)(*plVar14 + 0x30) == FUN_71007d1920) {
    lVar6 = -1;
    lVar13 = *(long *)(plVar14[2] + 0x38);
    if (lVar13 != 0) {
      lVar6 = FUN_710081ce00(lVar13,0xffffffffffffffff);
      lVar6 = lVar13 + lVar6;
    }
    local_8 = FUN_71007d1100(lVar13,lVar6,auStack_20);
  }
  else {
    (**(code **)(*plVar14 + 0x30))(&local_8,plVar14);
  }
  uVar16 = *(undefined8 *)(local_8 + -0x18);
  uVar8 = thunk_FUN_71007af5c0(uVar16);
  FUN_71007b66e0(&local_8,uVar8,uVar16,0);
  if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210d8) {
    piVar12 = (int *)(local_8 + -8);
    do {
      iVar1 = *piVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar3) {
        *piVar12 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
    }
  }
  if (*(code **)(*plVar14 + 0x38) == FUN_71007d1a00) {
    lVar6 = -1;
    lVar13 = *(long *)(plVar14[2] + 0x48);
    if (lVar13 != 0) {
      lVar6 = FUN_710081ce00(lVar13,0xffffffffffffffff);
      lVar6 = lVar13 + lVar6;
    }
    local_8 = FUN_71007d1100(lVar13,lVar6,auStack_18);
  }
  else {
    (**(code **)(*plVar14 + 0x38))(&local_8,plVar14);
  }
  uVar15 = *(undefined8 *)(local_8 + -0x18);
  uVar9 = thunk_FUN_71007af5c0(uVar15);
  FUN_71007b66e0(&local_8,uVar9,uVar15,0);
  if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210d8) {
    piVar12 = (int *)(local_8 + -8);
    do {
      iVar1 = *piVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar3) {
        *piVar12 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
    }
  }
  if (*(code **)(*plVar14 + 0x20) == FUN_71007d1760) {
    lVar6 = -1;
    lVar13 = *(long *)(plVar14[2] + 0x10);
    if (lVar13 != 0) {
      lVar6 = FUN_710081ce00(lVar13,0xffffffffffffffff);
      lVar6 = lVar13 + lVar6;
    }
    local_8 = FUN_71007d1100(lVar13,lVar6,auStack_10);
  }
  else {
    (**(code **)(*plVar14 + 0x20))(&local_8,plVar14);
  }
  lVar6 = *(long *)(local_8 + -0x18);
  pcVar10 = (char *)thunk_FUN_71007af5c0(lVar6);
  FUN_71007b66e0(&local_8,pcVar10,lVar6,0);
  *(char **)(param_1 + 0x10) = pcVar10;
  *(long *)(param_1 + 0x18) = lVar6;
  bVar3 = false;
  if (lVar6 != 0) {
    bVar3 = '\0' < *pcVar10;
  }
  *(bool *)(param_1 + 0x20) = bVar3;
  if (*(code **)(*plVar14 + 0x10) == (code *)&LAB_71007d0880) {
    uVar4 = *(undefined1 *)(plVar14[2] + 0x21);
  }
  else {
    uVar4 = (**(code **)(*plVar14 + 0x10))(plVar14);
  }
  *(undefined1 *)(param_1 + 0x21) = uVar4;
  if (*(code **)(*plVar14 + 0x18) == (code *)&LAB_71007d08a0) {
    uVar4 = *(undefined1 *)(plVar14[2] + 0x22);
  }
  else {
    uVar4 = (**(code **)(*plVar14 + 0x18))(plVar14);
  }
  *(undefined1 *)(param_1 + 0x22) = uVar4;
  *(undefined8 *)(param_1 + 0x28) = uVar7;
  *(undefined8 *)(param_1 + 0x30) = uVar17;
  *(undefined8 *)(param_1 + 0x38) = uVar8;
  *(undefined8 *)(param_1 + 0x40) = uVar16;
  *(undefined8 *)(param_1 + 0x48) = uVar9;
  *(undefined8 *)(param_1 + 0x50) = uVar15;
  lVar6 = *plVar14;
  if (*(code **)(lVar6 + 0x40) == (code *)&LAB_71007d08c0) {
    uVar5 = *(undefined4 *)(plVar14[2] + 0x58);
  }
  else {
    uVar5 = (**(code **)(lVar6 + 0x40))(plVar14);
    lVar6 = *plVar14;
  }
  pcVar11 = *(code **)(lVar6 + 0x48);
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  if (pcVar11 == (code *)&LAB_71007d08e0) {
    uVar5 = *(undefined4 *)(plVar14[2] + 0x5c);
  }
  else {
    uVar5 = (*pcVar11)(plVar14);
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar5;
  if (*(code **)(*plVar14 + 0x50) == (code *)&LAB_71007d0900) {
    uVar5 = *(undefined4 *)(plVar14[2] + 0x60);
  }
  else {
    uVar5 = (**(code **)(*plVar14 + 0x50))(plVar14);
  }
  *(undefined4 *)(param_1 + 0x60) = uVar5;
  lVar6 = FUN_71007b00e0(&DAT_7100d21120);
  lVar6 = *(long *)(*(long *)(*param_2 + 8) + lVar6 * 8);
  if (lVar6 != 0) {
    FUN_71007d1040(lVar6,PTR_DAT_7100af47a0,PTR_DAT_7100af47a0 + 0xb,param_1 + 100);
    *(undefined1 *)(param_1 + 0x6f) = 1;
    if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210d8) {
      piVar12 = (int *)(local_8 + -8);
      do {
        iVar1 = *piVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar3) {
          *piVar12 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 < 1) {
        thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003a84();
}



// ===== FUN_71007d2d60 @ 71007d2d60 (size=876) =====

void FUN_71007d2d60(long param_1,long *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  long lVar5;
  char *pcVar6;
  int *piVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  long local_18;
  long local_10;
  long local_8;
  
  lVar5 = FUN_71007b00e0(&DAT_7100d212b0);
  plVar9 = *(long **)(*(long *)(*param_2 + 8) + lVar5 * 8);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  if (*(code **)(*plVar9 + 0x20) == FUN_71007d1ae0) {
    lVar5 = -1;
    lVar10 = *(long *)(plVar9[2] + 0x10);
    if (lVar10 != 0) {
      lVar5 = FUN_710081ce00(lVar10,0xffffffffffffffff);
      lVar5 = lVar10 + lVar5;
    }
    local_18 = FUN_71007d1100(lVar10,lVar5,&local_8);
  }
  else {
    (**(code **)(*plVar9 + 0x20))(&local_18,plVar9);
  }
  uVar11 = *(undefined8 *)(local_18 + -0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar11;
  pcVar6 = (char *)thunk_FUN_71007af5c0(uVar11);
  FUN_71007b66e0(&local_18,pcVar6,uVar11,0);
  bVar3 = false;
  if (*(long *)(param_1 + 0x18) != 0) {
    bVar3 = '\0' < *pcVar6;
  }
  *(bool *)(param_1 + 0x20) = bVar3;
  if (*(code **)(*plVar9 + 0x28) == FUN_71007d1bc0) {
    lVar5 = -1;
    lVar10 = *(long *)(plVar9[2] + 0x28);
    if (lVar10 != 0) {
      lVar5 = FUN_710081ce00(lVar10,0xffffffffffffffff);
      lVar5 = lVar10 + lVar5;
    }
    local_10 = FUN_71007d1100(lVar10,lVar5,auStack_28);
  }
  else {
    (**(code **)(*plVar9 + 0x28))(&local_10,plVar9);
  }
  uVar12 = *(undefined8 *)(local_10 + -0x18);
  *(undefined8 *)(param_1 + 0x30) = uVar12;
  uVar11 = thunk_FUN_71007af5c0(uVar12);
  FUN_71007b66e0(&local_10,uVar11,uVar12,0);
  if (*(code **)(*plVar9 + 0x30) == FUN_71007d1ca0) {
    lVar5 = -1;
    lVar10 = *(long *)(plVar9[2] + 0x38);
    if (lVar10 != 0) {
      lVar5 = FUN_710081ce00(lVar10,0xffffffffffffffff);
      lVar5 = lVar10 + lVar5;
    }
    local_8 = FUN_71007d1100(lVar10,lVar5,auStack_20);
  }
  else {
    (**(code **)(*plVar9 + 0x30))(&local_8,plVar9);
  }
  uVar8 = *(undefined8 *)(local_8 + -0x18);
  *(undefined8 *)(param_1 + 0x40) = uVar8;
  uVar12 = thunk_FUN_71007af5c0(uVar8);
  FUN_71007b66e0(&local_8,uVar12,uVar8,0);
  if (*(code **)(*plVar9 + 0x10) == (code *)&LAB_71007d0920) {
    uVar4 = *(undefined1 *)(plVar9[2] + 0x48);
  }
  else {
    uVar4 = (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  *(undefined1 *)(param_1 + 0x48) = uVar4;
  if (*(code **)(*plVar9 + 0x18) == (code *)&LAB_71007d0940) {
    uVar4 = *(undefined1 *)(plVar9[2] + 0x49);
  }
  else {
    uVar4 = (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  *(undefined1 *)(param_1 + 0x49) = uVar4;
  lVar5 = FUN_71007b00e0(&DAT_7100d21120);
  lVar5 = *(long *)(*(long *)(*param_2 + 8) + lVar5 * 8);
  if (lVar5 != 0) {
    FUN_71007d1040(lVar5,PTR_s___xX0123456789abcdef0123456789AB_7100af4790,
                   PTR_s___xX0123456789abcdef0123456789AB_7100af4790 + 0x24,param_1 + 0x4a);
    FUN_71007d1040(lVar5,PTR_s___xX0123456789abcdefABCDEF_7100af4798,
                   PTR_s___xX0123456789abcdefABCDEF_7100af4798 + 0x1a,param_1 + 0x6e);
    *(char **)(param_1 + 0x10) = pcVar6;
    *(undefined8 *)(param_1 + 0x28) = uVar11;
    *(undefined8 *)(param_1 + 0x38) = uVar12;
    *(undefined1 *)(param_1 + 0x88) = 1;
    if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210d8) {
      piVar7 = (int *)(local_8 + -8);
      do {
        iVar1 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 < 1) {
        thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_20);
      }
    }
    if ((undefined1 *)(local_10 + -0x18) != &DAT_7100d210d8) {
      piVar7 = (int *)(local_10 + -8);
      do {
        iVar1 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 < 1) {
        thunk_FUN_710081c200((undefined1 *)(local_10 + -0x18),auStack_20);
      }
    }
    if ((undefined1 *)(local_18 + -0x18) != &DAT_7100d210d8) {
      piVar7 = (int *)(local_18 + -8);
      do {
        iVar1 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 < 1) {
        thunk_FUN_710081c200((undefined1 *)(local_18 + -0x18),auStack_20);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003a84();
}



// ===== FUN_71007d31a0 @ 71007d31a0 (size=168) =====

long FUN_71007d31a0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar1 = FUN_71007b00e0(&DAT_7100d212b0);
  lVar4 = *(long *)(*param_1 + 0x18);
  lVar2 = *(long *)(lVar4 + lVar1 * 8);
  if (lVar2 != 0) {
    return lVar2;
  }
  puVar3 = (undefined8 *)FUN_71007af5c0(0x90);
  *(undefined4 *)(puVar3 + 1) = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = &PTR_FUN_7100aee788;
  *(undefined1 *)(puVar3 + 4) = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined2 *)(puVar3 + 9) = 0;
  *(undefined1 *)(puVar3 + 0x11) = 0;
  FUN_71007d2d60(puVar3,param_1);
  FUN_71007b05e0(*param_1,puVar3,lVar1);
  return *(long *)(lVar4 + lVar1 * 8);
}



// ===== FUN_71007d3280 @ 71007d3280 (size=80) =====

void FUN_71007d3280(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 1) = (uint)(param_3 != 0);
  param_1[2] = param_2;
  *param_1 = &PTR_FUN_7100aee4f0;
  uVar1 = FUN_71007afdc0();
  param_1[4] = uVar1;
  FUN_71007fd9c0(param_1,0);
  return;
}



// ===== FUN_71007d3300 @ 71007d3300 (size=680) =====

undefined1  [16]
FUN_71007d3300(undefined8 param_1,long *param_2,ulong param_3,long *param_4,int param_5,int *param_6
              ,int param_7,int param_8,ulong param_9,long param_10,uint *param_11)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  
  uVar13 = param_3 & 0xffffffff;
  lVar7 = FUN_71007b00e0(&DAT_7100d21120);
  plVar12 = *(long **)(*(long *)(*(long *)(param_10 + 0xd0) + 8) + lVar7 * 8);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  bVar3 = param_5 == -1;
  bVar4 = (int)param_3 == -1;
  if (param_2 != (long *)0x0 && bVar4) {
    iVar9 = 0;
    uVar11 = 0;
    goto LAB_71007d3428;
  }
  iVar9 = 0;
  uVar11 = 0;
LAB_71007d3384:
  bVar2 = bVar4;
  if (param_4 != (long *)0x0 && bVar3) goto LAB_71007d344c;
LAB_71007d3390:
  bVar4 = (bool)(bVar4 ^ bVar3);
LAB_71007d3394:
  if (bVar4 == false || param_9 <= uVar11) {
LAB_71007d3490:
    if ((uVar11 == 0 || iVar9 < param_7) || param_8 < iVar9) {
LAB_71007d34a4:
      *param_11 = *param_11 | 4;
    }
    else {
      *param_6 = iVar9;
    }
    auVar14._8_8_ = param_3 & 0xffffffff00000000 | uVar13;
    auVar14._0_8_ = param_2;
    return auVar14;
  }
  do {
    if (param_2 != (long *)0x0 && bVar2) {
      if ((byte *)param_2[2] < (byte *)param_2[3]) {
        bVar1 = *(byte *)param_2[2];
        uVar8 = (uint)bVar1;
        uVar10 = (ulong)(int)(uint)bVar1;
      }
      else {
        uVar6 = (**(code **)(*param_2 + 0x48))(param_2);
        if (uVar6 == 0xffffffff) {
          uVar10 = 0xff;
          param_2 = (long *)0x0;
          uVar8 = 0xff;
        }
        else {
          uVar8 = uVar6 & 0xff;
          uVar10 = (ulong)(uVar6 & 0xff);
        }
      }
    }
    else {
      uVar8 = (uint)uVar13 & 0xff;
      uVar10 = (ulong)((uint)uVar13 & 0xff);
    }
    bVar1 = *(byte *)((long)plVar12 + uVar10 + 0x139);
    uVar6 = (uint)bVar1;
    if (bVar1 == 0) {
      uVar6 = uVar8;
      if (*(code **)(*plVar12 + 0x40) != (code *)&LAB_71000a0220) {
        uVar6 = (**(code **)(*plVar12 + 0x40))(plVar12,uVar8,0x2a);
        uVar6 = uVar6 & 0xff;
      }
      if (uVar6 == 0x2a) goto LAB_71007d3490;
      *(char *)((long)plVar12 + uVar10 + 0x139) = (char)uVar6;
    }
    if (9 < (uVar6 - 0x30 & 0xff)) goto LAB_71007d3490;
    iVar9 = (uVar6 - 0x30) + iVar9 * 10;
    if (param_8 < iVar9) goto LAB_71007d34a4;
    if ((ulong)param_2[2] < (ulong)param_2[3]) {
      uVar11 = uVar11 + 1;
      param_2[2] = param_2[2] + 1;
LAB_71007d3428:
      if ((ulong)param_2[3] <= (ulong)param_2[2]) {
LAB_71007d352c:
        uVar6 = (**(code **)(*param_2 + 0x48))(param_2);
        uVar13 = (ulong)uVar6;
        if (uVar6 == 0xffffffff) {
          param_2 = (long *)0x0;
          bVar4 = true;
          goto LAB_71007d3384;
        }
      }
    }
    else {
      uVar11 = uVar11 + 1;
      (**(code **)(*param_2 + 0x50))(param_2);
      if ((ulong)param_2[3] <= (ulong)param_2[2]) goto LAB_71007d352c;
    }
    bVar2 = true;
    uVar13 = 0xffffffff;
    bVar4 = false;
    if (param_4 == (long *)0x0 || !bVar3) goto LAB_71007d3390;
LAB_71007d344c:
    if ((ulong)param_4[2] < (ulong)param_4[3]) goto LAB_71007d3394;
    iVar5 = (**(code **)(*param_4 + 0x48))(param_4);
    if (iVar5 == -1) {
      param_4 = (long *)0x0;
    }
    if (bVar4 == (iVar5 == -1) || param_9 <= uVar11) goto LAB_71007d3490;
  } while( true );
}



// ===== FUN_71007d35c0 @ 71007d35c0 (size=64) =====

void FUN_71007d35c0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  *param_1 = &PTR_FUN_7100aee5e0;
  uVar1 = FUN_71007afd60();
  param_1[2] = uVar1;
  return;
}



// ===== FUN_71007d3620 @ 71007d3620 (size=372) =====

void FUN_71007d3620(undefined1 *param_1,undefined1 param_2,byte *param_3,long param_4,long param_5,
                   long param_6)

{
  byte bVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  
  uVar4 = (ulong)*param_3;
  lVar7 = param_6 - param_5;
  if ((char)*param_3 < '\x01' || lVar7 <= (long)uVar4) {
    if (param_6 == param_5) {
      return;
    }
    lVar6 = -1;
    lVar10 = 0;
    uVar5 = 0;
    lVar8 = lVar6;
    pbVar9 = param_3;
  }
  else {
    lVar10 = 0;
    uVar5 = 0;
    do {
      while (param_6 = param_6 - uVar4, uVar5 < param_4 - 1U) {
        uVar5 = uVar5 + 1;
        lVar7 = param_6 - param_5;
        uVar4 = (ulong)param_3[uVar5];
        if ((char)param_3[uVar5] < '\x01' || lVar7 <= (long)uVar4) goto LAB_71007d36a0;
      }
      uVar4 = (ulong)param_3[uVar5];
      lVar7 = param_6 - param_5;
      lVar10 = lVar10 + 1;
    } while ('\0' < (char)param_3[uVar5] && (long)uVar4 < lVar7);
LAB_71007d36a0:
    pbVar9 = param_3 + uVar5;
    lVar8 = lVar10 + -1;
    lVar6 = uVar5 - 1;
    if (param_5 == param_6) goto LAB_71007d36dc;
  }
  lVar3 = 0;
  do {
    param_1[lVar3] = *(undefined1 *)(param_5 + lVar3);
    lVar3 = lVar3 + 1;
  } while (lVar3 != lVar7);
  param_1 = param_1 + (param_6 - param_5);
LAB_71007d36dc:
  puVar2 = param_1;
  if (lVar10 != 0) {
    do {
      param_1 = puVar2 + 1;
      *puVar2 = param_2;
      bVar1 = *pbVar9;
      if (bVar1 != 0) {
        uVar4 = 0;
        do {
          param_1[uVar4] = *(undefined1 *)(param_6 + uVar4);
          uVar4 = uVar4 + 1;
        } while (uVar4 != bVar1);
        param_1 = param_1 + uVar4;
        param_6 = param_6 + uVar4;
      }
      lVar8 = lVar8 + -1;
      puVar2 = param_1;
    } while (lVar8 != -1);
  }
  if (uVar5 != 0) {
    do {
      puVar2 = param_1 + 1;
      *param_1 = param_2;
      bVar1 = param_3[lVar6];
      if (bVar1 != 0) {
        uVar4 = 0;
        do {
          puVar2[uVar4] = *(undefined1 *)(param_6 + uVar4);
          uVar4 = uVar4 + 1;
        } while (uVar4 != bVar1);
        puVar2 = param_1 + (ulong)(byte)(bVar1 - 1) + 2;
        param_6 = param_6 + 1 + (ulong)(byte)(bVar1 - 1);
      }
      lVar6 = lVar6 + -1;
      param_1 = puVar2;
    } while (lVar6 != -1);
  }
  return;
}



// ===== FUN_71007d37a0 @ 71007d37a0 (size=188) =====

void FUN_71007d37a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                   long param_5,undefined8 param_6,long param_7,int *param_8)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (param_5 != 0) {
    iVar3 = (int)param_5 - (int)param_7;
    uVar2 = FUN_71007d3620(param_6,param_4,param_2,param_3,param_7,param_7 + iVar3);
    iVar1 = 0;
    if (*param_8 - iVar3 != 0) {
      FUN_710080f900(uVar2,param_5,(long)(*param_8 - iVar3));
      iVar1 = *param_8 - iVar3;
    }
    *param_8 = iVar1 + ((int)uVar2 - (int)param_6);
    return;
  }
  iVar1 = FUN_71007d3620(param_6,param_4,param_2,param_3,param_7,param_7 + *param_8);
  *param_8 = iVar1 - (int)param_6;
  return;
}



// ===== FUN_71007d3860 @ 71007d3860 (size=76) =====

void FUN_71007d3860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                   undefined8 param_5,undefined8 param_6,long param_7,int *param_8)

{
  int iVar1;
  
  iVar1 = FUN_71007d3620(param_6,param_4,param_2,param_3,param_7,param_7 + *param_8);
  *param_8 = iVar1 - (int)param_6;
  return;
}



// ===== FUN_71007d38c0 @ 71007d38c0 (size=1268) =====

undefined1  [16]
FUN_71007d38c0(undefined8 param_1,long *param_2,ulong param_3,long param_4,undefined1 param_5,
              undefined8 *param_6)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 *local_50;
  uint local_40;
  undefined4 local_18;
  byte abStack_14 [4];
  undefined1 *local_10;
  undefined1 *local_8;
  
  lVar5 = FUN_71007b00e0(&DAT_7100d21120);
  lVar5 = *(long *)(*(long *)(*(long *)(param_4 + 0xd0) + 8) + lVar5 * 8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  lVar6 = FUN_71007b00e0(&DAT_7100d212b8);
  lVar12 = *(long *)(*(long *)(param_4 + 0xd0) + 0x18);
  lVar14 = *(long *)(lVar12 + lVar6 * 8);
  if (lVar14 == 0) {
    puVar8 = (undefined8 *)FUN_71007af5c0(0x70);
    *(undefined4 *)(puVar8 + 1) = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    *puVar8 = &PTR_FUN_7100aee768;
    *(undefined2 *)(puVar8 + 4) = 0;
    *(undefined1 *)((long)puVar8 + 0x22) = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8[10] = 0;
    *(undefined4 *)(puVar8 + 0xb) = 0;
    *(undefined8 *)((long)puVar8 + 0x5c) = 0;
    *(undefined1 *)((long)puVar8 + 0x6f) = 0;
    FUN_71007d2800(puVar8,param_4 + 0xd0);
    FUN_71007b05e0(*(undefined8 *)(param_4 + 0xd0),puVar8,lVar6);
    lVar14 = *(long *)(lVar12 + lVar6 * 8);
    pbVar13 = (byte *)*param_6;
    if (*pbVar13 == *(byte *)(lVar14 + 100)) goto LAB_71007d3a2c;
LAB_71007d3940:
    local_18 = *(undefined4 *)(lVar14 + 0x5c);
    lVar6 = *(long *)(pbVar13 + -0x18);
    local_50 = *(undefined1 **)(lVar14 + 0x38);
    uVar9 = *(ulong *)(lVar14 + 0x40);
  }
  else {
    pbVar13 = (byte *)*param_6;
    if (*(byte *)(lVar14 + 100) != *pbVar13) goto LAB_71007d3940;
LAB_71007d3a2c:
    local_18 = *(undefined4 *)(lVar14 + 0x60);
    lVar6 = *(long *)(pbVar13 + -0x18);
    local_50 = *(undefined1 **)(lVar14 + 0x48);
    uVar9 = *(ulong *)(lVar14 + 0x50);
    if (lVar6 == 0) goto LAB_71007d398c;
    pbVar13 = pbVar13 + 1;
  }
  if (pbVar13 < pbVar13 + lVar6) {
    pbVar7 = pbVar13;
    do {
      if ((*(byte *)(*(long *)(lVar5 + 0x30) + (ulong)*pbVar7) >> 2 & 1) == 0) break;
      pbVar7 = pbVar7 + 1;
    } while (pbVar13 + lVar6 != pbVar7);
    lVar5 = (long)pbVar7 - (long)pbVar13;
    if (lVar5 != 0) {
      local_10 = &DAT_7100d210f0;
      FUN_71007b6ec0();
      iVar4 = *(int *)(lVar14 + 0x58);
      lVar6 = lVar5 - iVar4;
      if (0 < lVar6) {
        lVar12 = lVar5;
        if (-1 < iVar4) {
          lVar12 = lVar6;
        }
        lVar6 = lVar12;
        if (*(long *)(lVar14 + 0x18) == 0) {
          FUN_71007b6ce0(&local_10,pbVar13,lVar6);
          iVar4 = *(int *)(lVar14 + 0x58);
        }
        else {
          FUN_71007b6bc0(&local_10,0,*(undefined8 *)(local_10 + -0x18),lVar6 * 2,0);
          if (-1 < *(int *)(local_10 + -8)) {
            FUN_71007b6b20(&local_10);
          }
          lVar12 = FUN_71007d3620(local_10,*(undefined1 *)(lVar14 + 0x22),
                                  *(undefined8 *)(lVar14 + 0x10),*(undefined8 *)(lVar14 + 0x18),
                                  pbVar13,pbVar13 + lVar6);
          if (-1 < *(int *)(local_10 + -8)) {
            FUN_71007b6b20(&local_10);
          }
          uVar10 = lVar12 - (long)local_10;
          uVar11 = *(ulong *)(local_10 + -0x18);
          if (uVar11 < uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_7100003bf8("%s: __pos (which is %zu) > this->size() (which is %zu)",
                           "basic_string::erase",uVar10,uVar11);
          }
          FUN_71007b6940(&local_10,uVar10,uVar11 - uVar10,0);
          iVar4 = *(int *)(lVar14 + 0x58);
        }
      }
      if (0 < iVar4) {
        FUN_71007b7300(&local_10,*(undefined1 *)(lVar14 + 0x21));
        if (lVar6 < 0) {
          FUN_71007b71a0(&local_10,-lVar6,*(undefined1 *)(lVar14 + 0x65));
          FUN_71007b7060(&local_10,pbVar13,lVar5);
        }
        else {
          FUN_71007b7060(&local_10,pbVar13 + lVar6,(long)*(int *)(lVar14 + 0x58));
        }
      }
      local_40 = *(uint *)(param_4 + 0x18) & 0xb0;
      uVar10 = uVar9 + *(long *)(local_10 + -0x18);
      if ((*(uint *)(param_4 + 0x18) >> 9 & 1) != 0) {
        uVar10 = uVar10 + *(long *)(lVar14 + 0x30);
      }
      local_8 = &DAT_7100d210f0;
      FUN_71007b6ec0(&local_8,uVar10 << 1);
      uVar11 = *(ulong *)(param_4 + 0x10);
      pbVar13 = (byte *)&local_18;
      bVar3 = local_40 == 0x10;
      do {
        bVar2 = *pbVar13;
        if (bVar2 == 2) {
          if ((*(uint *)(param_4 + 0x18) >> 9 & 1) != 0) {
            FUN_71007b7060(&local_8,*(undefined8 *)(lVar14 + 0x28),*(undefined8 *)(lVar14 + 0x30));
          }
        }
        else if (bVar2 < 3) {
          if (bVar2 == 0) {
            if ((bVar3 && uVar10 <= uVar11) && (local_40 != 0x10 || uVar11 != uVar10))
            goto LAB_71007d3b8c;
          }
          else if (bVar3 && (uVar10 <= uVar11 && uVar11 != uVar10)) {
LAB_71007d3b8c:
            FUN_71007b71a0(&local_8,uVar11 - uVar10,param_5);
          }
          else {
            FUN_71007b7300(&local_8,param_5);
          }
        }
        else if (bVar2 == 3) {
          if (uVar9 != 0) {
            FUN_71007b7300(&local_8,*local_50);
          }
        }
        else if (bVar2 == 4) {
          FUN_71007b6f80(&local_8,&local_10);
        }
        pbVar13 = pbVar13 + 1;
      } while (pbVar13 != abStack_14);
      if (uVar9 < 2) {
        uVar9 = *(ulong *)(local_8 + -0x18);
      }
      else {
        FUN_71007b7060(&local_8,local_50 + 1,uVar9 - 1);
        uVar9 = *(ulong *)(local_8 + -0x18);
      }
      if (uVar9 < uVar11) {
        if (local_40 == 0x20) {
          FUN_71007b71a0(&local_8,uVar11 - uVar9,param_5);
          uVar9 = uVar11;
        }
        else {
          FUN_71007b6bc0(&local_8,0,0,uVar11 - uVar9,param_5);
          uVar9 = uVar11;
        }
      }
      uVar1 = (uint)param_3 & 0xff;
      if (((param_3 & 1) == 0) &&
         (lVar5 = (**(code **)(*param_2 + 0x60))(param_2,local_8,(long)(int)uVar9),
         (int)uVar9 != lVar5)) {
        uVar1 = 1;
      }
      param_3 = param_3 & 0xffffffffffffff00 | (ulong)uVar1;
      FUN_71007d11c0(local_8);
      FUN_71007d11c0(local_10);
    }
  }
LAB_71007d398c:
  *(undefined8 *)(param_4 + 0x10) = 0;
  auVar15._8_8_ = param_3;
  auVar15._0_8_ = param_2;
  return auVar15;
}



// ===== FUN_71007d3e20 @ 71007d3e20 (size=1268) =====

undefined1  [16]
FUN_71007d3e20(undefined8 param_1,long *param_2,ulong param_3,long param_4,undefined1 param_5,
              undefined8 *param_6)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 *local_50;
  uint local_40;
  undefined4 local_18;
  byte abStack_14 [4];
  undefined1 *local_10;
  undefined1 *local_8;
  
  lVar5 = FUN_71007b00e0(&DAT_7100d21120);
  lVar5 = *(long *)(*(long *)(*(long *)(param_4 + 0xd0) + 8) + lVar5 * 8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  lVar6 = FUN_71007b00e0(&DAT_7100d212c0);
  lVar12 = *(long *)(*(long *)(param_4 + 0xd0) + 0x18);
  lVar14 = *(long *)(lVar12 + lVar6 * 8);
  if (lVar14 == 0) {
    puVar8 = (undefined8 *)FUN_71007af5c0(0x70);
    *(undefined4 *)(puVar8 + 1) = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    *puVar8 = &PTR_FUN_7100aee748;
    *(undefined2 *)(puVar8 + 4) = 0;
    *(undefined1 *)((long)puVar8 + 0x22) = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8[10] = 0;
    *(undefined4 *)(puVar8 + 0xb) = 0;
    *(undefined8 *)((long)puVar8 + 0x5c) = 0;
    *(undefined1 *)((long)puVar8 + 0x6f) = 0;
    FUN_71007d22a0(puVar8,param_4 + 0xd0);
    FUN_71007b05e0(*(undefined8 *)(param_4 + 0xd0),puVar8,lVar6);
    lVar14 = *(long *)(lVar12 + lVar6 * 8);
    pbVar13 = (byte *)*param_6;
    if (*pbVar13 == *(byte *)(lVar14 + 100)) goto LAB_71007d3f8c;
LAB_71007d3ea0:
    local_18 = *(undefined4 *)(lVar14 + 0x5c);
    lVar6 = *(long *)(pbVar13 + -0x18);
    local_50 = *(undefined1 **)(lVar14 + 0x38);
    uVar9 = *(ulong *)(lVar14 + 0x40);
  }
  else {
    pbVar13 = (byte *)*param_6;
    if (*(byte *)(lVar14 + 100) != *pbVar13) goto LAB_71007d3ea0;
LAB_71007d3f8c:
    local_18 = *(undefined4 *)(lVar14 + 0x60);
    lVar6 = *(long *)(pbVar13 + -0x18);
    local_50 = *(undefined1 **)(lVar14 + 0x48);
    uVar9 = *(ulong *)(lVar14 + 0x50);
    if (lVar6 == 0) goto LAB_71007d3eec;
    pbVar13 = pbVar13 + 1;
  }
  if (pbVar13 < pbVar13 + lVar6) {
    pbVar7 = pbVar13;
    do {
      if ((*(byte *)(*(long *)(lVar5 + 0x30) + (ulong)*pbVar7) >> 2 & 1) == 0) break;
      pbVar7 = pbVar7 + 1;
    } while (pbVar13 + lVar6 != pbVar7);
    lVar5 = (long)pbVar7 - (long)pbVar13;
    if (lVar5 != 0) {
      local_10 = &DAT_7100d210f0;
      FUN_71007b6ec0();
      iVar4 = *(int *)(lVar14 + 0x58);
      lVar6 = lVar5 - iVar4;
      if (0 < lVar6) {
        lVar12 = lVar5;
        if (-1 < iVar4) {
          lVar12 = lVar6;
        }
        lVar6 = lVar12;
        if (*(long *)(lVar14 + 0x18) == 0) {
          FUN_71007b6ce0(&local_10,pbVar13,lVar6);
          iVar4 = *(int *)(lVar14 + 0x58);
        }
        else {
          FUN_71007b6bc0(&local_10,0,*(undefined8 *)(local_10 + -0x18),lVar6 * 2,0);
          if (-1 < *(int *)(local_10 + -8)) {
            FUN_71007b6b20(&local_10);
          }
          lVar12 = FUN_71007d3620(local_10,*(undefined1 *)(lVar14 + 0x22),
                                  *(undefined8 *)(lVar14 + 0x10),*(undefined8 *)(lVar14 + 0x18),
                                  pbVar13,pbVar13 + lVar6);
          if (-1 < *(int *)(local_10 + -8)) {
            FUN_71007b6b20(&local_10);
          }
          uVar10 = lVar12 - (long)local_10;
          uVar11 = *(ulong *)(local_10 + -0x18);
          if (uVar11 < uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_7100003bf8("%s: __pos (which is %zu) > this->size() (which is %zu)",
                           "basic_string::erase",uVar10,uVar11);
          }
          FUN_71007b6940(&local_10,uVar10,uVar11 - uVar10,0);
          iVar4 = *(int *)(lVar14 + 0x58);
        }
      }
      if (0 < iVar4) {
        FUN_71007b7300(&local_10,*(undefined1 *)(lVar14 + 0x21));
        if (lVar6 < 0) {
          FUN_71007b71a0(&local_10,-lVar6,*(undefined1 *)(lVar14 + 0x65));
          FUN_71007b7060(&local_10,pbVar13,lVar5);
        }
        else {
          FUN_71007b7060(&local_10,pbVar13 + lVar6,(long)*(int *)(lVar14 + 0x58));
        }
      }
      local_40 = *(uint *)(param_4 + 0x18) & 0xb0;
      uVar10 = uVar9 + *(long *)(local_10 + -0x18);
      if ((*(uint *)(param_4 + 0x18) >> 9 & 1) != 0) {
        uVar10 = uVar10 + *(long *)(lVar14 + 0x30);
      }
      local_8 = &DAT_7100d210f0;
      FUN_71007b6ec0(&local_8,uVar10 << 1);
      uVar11 = *(ulong *)(param_4 + 0x10);
      pbVar13 = (byte *)&local_18;
      bVar3 = local_40 == 0x10;
      do {
        bVar2 = *pbVar13;
        if (bVar2 == 2) {
          if ((*(uint *)(param_4 + 0x18) >> 9 & 1) != 0) {
            FUN_71007b7060(&local_8,*(undefined8 *)(lVar14 + 0x28),*(undefined8 *)(lVar14 + 0x30));
          }
        }
        else if (bVar2 < 3) {
          if (bVar2 == 0) {
            if ((bVar3 && uVar10 <= uVar11) && (local_40 != 0x10 || uVar11 != uVar10))
            goto LAB_71007d40ec;
          }
          else if (bVar3 && (uVar10 <= uVar11 && uVar11 != uVar10)) {
LAB_71007d40ec:
            FUN_71007b71a0(&local_8,uVar11 - uVar10,param_5);
          }
          else {
            FUN_71007b7300(&local_8,param_5);
          }
        }
        else if (bVar2 == 3) {
          if (uVar9 != 0) {
            FUN_71007b7300(&local_8,*local_50);
          }
        }
        else if (bVar2 == 4) {
          FUN_71007b6f80(&local_8,&local_10);
        }
        pbVar13 = pbVar13 + 1;
      } while (pbVar13 != abStack_14);
      if (uVar9 < 2) {
        uVar9 = *(ulong *)(local_8 + -0x18);
      }
      else {
        FUN_71007b7060(&local_8,local_50 + 1,uVar9 - 1);
        uVar9 = *(ulong *)(local_8 + -0x18);
      }
      if (uVar9 < uVar11) {
        if (local_40 == 0x20) {
          FUN_71007b71a0(&local_8,uVar11 - uVar9,param_5);
          uVar9 = uVar11;
        }
        else {
          FUN_71007b6bc0(&local_8,0,0,uVar11 - uVar9,param_5);
          uVar9 = uVar11;
        }
      }
      uVar1 = (uint)param_3 & 0xff;
      if (((param_3 & 1) == 0) &&
         (lVar5 = (**(code **)(*param_2 + 0x60))(param_2,local_8,(long)(int)uVar9),
         (int)uVar9 != lVar5)) {
        uVar1 = 1;
      }
      param_3 = param_3 & 0xffffffffffffff00 | (ulong)uVar1;
      FUN_71007d11c0(local_8);
      FUN_71007d11c0(local_10);
    }
  }
LAB_71007d3eec:
  *(undefined8 *)(param_4 + 0x10) = 0;
  auVar15._8_8_ = param_3;
  auVar15._0_8_ = param_2;
  return auVar15;
}



// ===== FUN_71007d4380 @ 71007d4380 (size=584) =====

undefined1  [16]
FUN_71007d4380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              ulong param_5,long param_6,undefined4 param_7)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined1 *puVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  code *pcVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_f0 [64];
  undefined1 auStack_18 [8];
  long local_10;
  long local_8;
  
  FUN_71007afd00(&local_10,param_6 + 0xd0);
  lVar6 = FUN_71007b00e0(&DAT_7100d21120);
  plVar9 = *(long **)(*(long *)(local_10 + 8) + lVar6 * 8);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  puVar4 = auStack_f0;
  local_8 = FUN_71007afd60();
  iVar5 = FUN_71007b9ba0(param_1,&local_8,auStack_f0,0x40,"%.*Lf",0);
  if (0x3f < iVar5) {
    lVar6 = -((long)(iVar5 + 1) + 0xfU & 0xfffffffffffffff0);
    puVar4 = auStack_f0 + lVar6;
    local_8 = FUN_71007afd60();
    iVar5 = FUN_71007b9ba0(param_1,&local_8,auStack_f0 + lVar6,iVar5 + 1,"%.*Lf",0);
  }
  lVar6 = (long)iVar5;
  local_8 = FUN_71007b6880(lVar6,0,auStack_18);
  if (-1 < *(int *)(local_8 + -8)) {
    FUN_71007b6b20(&local_8);
  }
  lVar3 = local_8;
  if ((char)plVar9[7] != '\x01') {
    if ((char)plVar9[7] == '\0') {
      FUN_71007b8240(plVar9);
      pcVar8 = *(code **)(*plVar9 + 0x38);
    }
    else {
      pcVar8 = *(code **)(*plVar9 + 0x38);
    }
    if (pcVar8 != FUN_71007b8200) {
      (*pcVar8)(plVar9,puVar4);
      goto LAB_71007d44bc;
    }
  }
  if (puVar4 + lVar6 != puVar4) {
    FUN_710080f900(lVar3,puVar4,lVar6);
  }
LAB_71007d44bc:
  if ((param_5 & 1) == 0) {
    auVar10 = FUN_71007d3e20(param_2,param_3,param_4,param_6,param_7,&local_8);
  }
  else {
    auVar10 = FUN_71007d38c0();
  }
  if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210d8) {
    piVar7 = (int *)(local_8 + -8);
    do {
      iVar5 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar5 < 1) {
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_18);
    }
  }
  FUN_71007b0080(&local_10);
  return auVar10;
}



// ===== FUN_71007d4620 @ 71007d4620 (size=900) =====

void FUN_71007d4620(long param_1,undefined1 param_2,char *param_3,char *param_4,long param_5,
                   long param_6)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  
  param_5 = param_5 - param_6;
  uVar1 = *(uint *)(param_1 + 0x18) & 0xb0;
  if (uVar1 == 0x20) {
    if (param_6 != 0) {
      FUN_710080f900(param_3,param_4,param_6);
    }
    if (param_5 == 0) {
      return;
    }
    FUN_7100808340(param_3 + param_6,param_2,param_5);
    return;
  }
  if (uVar1 == 0x10) {
    lVar5 = FUN_71007b00e0(&DAT_7100d21120);
    plVar4 = *(long **)(*(long *)(*(long *)(param_1 + 0xd0) + 8) + lVar5 * 8);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003a84();
    }
    if ((char)plVar4[7] == '\0') {
      FUN_71007b8240(plVar4);
      cVar3 = '-';
      if (*(code **)(*plVar4 + 0x30) != (code *)&LAB_71000a0210) {
        cVar3 = (**(code **)(*plVar4 + 0x30))(plVar4);
      }
      if (*param_4 != cVar3) {
        cVar3 = *param_4;
        if ((char)plVar4[7] != '\0') goto LAB_71007d4894;
        FUN_71007b8240(plVar4);
        cVar3 = '+';
        if (*(code **)(*plVar4 + 0x30) != (code *)&LAB_71000a0210) {
          cVar3 = (**(code **)(*plVar4 + 0x30))(plVar4);
        }
        cVar2 = *param_4;
        if (cVar2 != cVar3) {
          if ((char)plVar4[7] != '\0') goto LAB_71007d48a0;
          FUN_71007b8240(plVar4);
          cVar3 = '0';
          if (*(code **)(*plVar4 + 0x30) != (code *)&LAB_71000a0210) {
            cVar3 = (**(code **)(*plVar4 + 0x30))(plVar4);
          }
          cVar2 = *param_4;
          if (cVar2 != cVar3 || param_6 < 2) goto LAB_71007d4658;
          if ((char)plVar4[7] != '\0') goto LAB_71007d48b0;
          cVar2 = FUN_71007d0fe0(plVar4,0x78);
          cVar3 = param_4[1];
          if (cVar3 != cVar2) {
            if ((char)plVar4[7] != '\0') goto LAB_71007d48c0;
            cVar2 = FUN_71007d0fe0(plVar4,0x58);
            cVar3 = param_4[1];
            goto LAB_71007d47c4;
          }
LAB_71007d4928:
          cVar2 = *param_4;
LAB_71007d492c:
          *param_3 = cVar2;
          lVar5 = 2;
          param_3[1] = param_4[1];
          param_3 = param_3 + 2;
          param_4 = param_4 + 2;
          goto joined_r0x0071007d48fc;
        }
      }
LAB_71007d48f0:
      *param_3 = cVar3;
      lVar5 = 1;
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
      goto joined_r0x0071007d48fc;
    }
    cVar3 = *param_4;
    if (*(char *)((long)plVar4 + 0x66) == cVar3) goto LAB_71007d48f0;
LAB_71007d4894:
    cVar2 = cVar3;
    if (*(char *)((long)plVar4 + 100) == cVar3) goto LAB_71007d48f0;
LAB_71007d48a0:
    if (*(char *)((long)plVar4 + 0x69) != cVar2 || param_6 < 2) goto LAB_71007d4658;
LAB_71007d48b0:
    cVar3 = param_4[1];
    if (*(char *)((long)plVar4 + 0xb1) == cVar3) goto LAB_71007d492c;
LAB_71007d48c0:
    cVar2 = *(char *)((long)plVar4 + 0x91);
LAB_71007d47c4:
    if (cVar2 == cVar3) goto LAB_71007d4928;
    if (param_5 == 0) goto LAB_71007d480c;
    lVar5 = 0;
LAB_71007d47e0:
    FUN_7100808340(param_3,param_2,param_5);
  }
  else {
LAB_71007d4658:
    lVar5 = 0;
joined_r0x0071007d48fc:
    if (param_5 != 0) goto LAB_71007d47e0;
  }
  param_6 = param_6 - lVar5;
  if (param_6 == 0) {
    return;
  }
  param_3 = param_3 + param_5;
LAB_71007d480c:
  FUN_710080f900(param_3,param_4,param_6);
  return;
}



// ===== FUN_71007d49c0 @ 71007d49c0 (size=60) =====

void FUN_71007d49c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,int *param_7)

{
  FUN_71007d4620(param_4,param_2,param_5,param_6,param_3,(long)*param_7);
  *param_7 = (int)param_3;
  return;
}



// ===== FUN_71007d5240 @ 71007d5240 (size=160) =====

int FUN_71007d5240(undefined1 *param_1,ulong param_2,long param_3,uint param_4,ulong param_5)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  
  puVar4 = param_1;
  if ((param_5 & 1) == 0) {
    if ((param_4 & 0x4a) == 0x40) {
      do {
        uVar3 = param_2 & 7;
        param_2 = param_2 >> 3;
        puVar4 = puVar4 + -1;
        *puVar4 = *(undefined1 *)(param_3 + uVar3 + 4);
      } while (param_2 != 0);
    }
    else {
      lVar2 = 4;
      if ((param_4 & 0x4000) != 0) {
        lVar2 = 0x14;
      }
      do {
        uVar3 = param_2 & 0xf;
        param_2 = param_2 >> 4;
        puVar4 = puVar4 + -1;
        *puVar4 = *(undefined1 *)(param_3 + lVar2 + uVar3);
      } while (param_2 != 0);
    }
  }
  else {
    do {
      puVar4 = puVar4 + -1;
      *puVar4 = *(undefined1 *)(param_3 + param_2 % 10 + 4);
      bVar1 = 9 < param_2;
      param_2 = param_2 / 10;
    } while (bVar1);
  }
  return (int)param_1 - (int)puVar4;
}



// ===== FUN_71007d52e0 @ 71007d52e0 (size=528) =====

undefined1  [16]
FUN_71007d52e0(undefined8 param_1,long *param_2,uint param_3,long param_4,undefined4 param_5,
              long param_6)

{
  uint uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_b0 [40];
  undefined1 auStack_88 [8];
  int local_4;
  
  lVar8 = FUN_71007d31a0(param_4 + 0xd0);
  uVar1 = *(uint *)(param_4 + 0x18);
  puVar3 = auStack_b0;
  puVar4 = auStack_b0;
  uVar12 = uVar1 & 0x4a;
  bVar5 = uVar12 != 0x40;
  bVar6 = uVar12 != 8;
  lVar11 = -param_6;
  if (0 < param_6 || (!bVar5 || !bVar6)) {
    lVar11 = param_6;
  }
  local_4 = FUN_71007d5240(auStack_88,lVar11,lVar8 + 0x4a,uVar1,bVar5 && bVar6);
  puVar10 = auStack_b0 + (0x28 - local_4);
  if ((*(byte *)(lVar8 + 0x20) & 1) == 0) {
    puVar9 = puVar10;
    if (bVar5 && bVar6) goto LAB_71007d5380;
LAB_71007d542c:
    puVar10 = puVar9;
    iVar7 = local_4;
    if ((uVar1 & 0x200) != 0 && param_6 != 0) {
      if (uVar12 == 0x40) {
        iVar7 = local_4 + 1;
        puVar10 = puVar9 + -1;
        *puVar10 = *(undefined1 *)(lVar8 + 0x4e);
        local_4 = iVar7;
      }
      else {
        iVar7 = local_4 + 2;
        puVar10 = puVar9 + -2;
        puVar9[-1] = *(undefined1 *)(lVar8 + 0x4a + (long)(int)((uVar1 >> 0xe & 1) + 2));
        local_4 = iVar7;
        *puVar10 = *(undefined1 *)(lVar8 + 0x4e);
      }
    }
LAB_71007d5388:
    lVar11 = *(long *)(param_4 + 0x10);
    lVar8 = (long)iVar7;
    puVar3 = puVar4;
    if (lVar11 <= lVar8) goto LAB_71007d5398;
  }
  else {
    lVar11 = -((-(ulong)(local_4 + 1U >> 0x1f) & 0xfffffffe00000000 | (ulong)(local_4 + 1U) << 1) +
               0xf & 0xfffffffffffffff0);
    puVar4 = auStack_b0 + lVar11;
    puVar3 = auStack_b0 + lVar11;
    puVar9 = auStack_b0 + lVar11 + 2;
    FUN_71007d3860(param_1,*(undefined8 *)(lVar8 + 0x10),*(undefined8 *)(lVar8 + 0x18),
                   *(undefined1 *)(lVar8 + 0x49),param_4,puVar9,puVar10,&local_4);
    if (!bVar5 || !bVar6) goto LAB_71007d542c;
LAB_71007d5380:
    puVar4 = puVar3;
    if (param_6 < 0) {
      puVar9[-1] = *(undefined1 *)(lVar8 + 0x4a);
      puVar10 = puVar9 + -1;
      iVar7 = local_4 + 1;
      local_4 = local_4 + 1;
      goto LAB_71007d5388;
    }
    puVar10 = puVar9;
    iVar7 = local_4;
    if ((uVar1 >> 0xb & 1) == 0) goto LAB_71007d5388;
    iVar7 = local_4 + 1;
    puVar9[-1] = *(undefined1 *)(lVar8 + 0x4b);
    puVar10 = puVar9 + -1;
    lVar11 = *(long *)(param_4 + 0x10);
    lVar8 = (long)iVar7;
    local_4 = iVar7;
    if (lVar11 <= lVar8) goto LAB_71007d5398;
  }
  lVar2 = -(lVar11 + 0xfU & 0xfffffffffffffff0);
  FUN_71007d49c0(param_1,param_5,lVar11,param_4,(long)puVar3 + lVar2,puVar10,&local_4);
  lVar8 = (long)local_4;
  puVar10 = puVar3 + lVar2;
LAB_71007d5398:
  *(undefined8 *)(param_4 + 0x10) = 0;
  uVar12 = param_3 & 0xff;
  if (((param_3 & 1) == 0) &&
     (lVar11 = (**(code **)(*param_2 + 0x60))(param_2,puVar10,lVar8), lVar11 != lVar8)) {
    uVar12 = 1;
  }
  auVar13._8_4_ = uVar12;
  auVar13._0_8_ = param_2;
  auVar13._12_4_ = 0;
  return auVar13;
}



// ===== FUN_71007d5520 @ 71007d5520 (size=416) =====

undefined1  [16]
FUN_71007d5520(undefined8 param_1,long *param_2,ulong param_3,long param_4,undefined1 param_5,
              ulong param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  int local_48;
  
  uVar6 = *(uint *)(param_4 + 0x18);
  if ((uVar6 & 1) == 0) {
    auVar10 = FUN_71007d52e0();
    param_2 = auVar10._0_8_;
    uVar7 = param_3 & 0xffffffffffffff00 | auVar10._8_8_ & 0xff;
    goto LAB_71007d555c;
  }
  lVar1 = FUN_71007d31a0(param_4 + 0xd0);
  if ((param_6 & 1) == 0) {
    uVar9 = *(undefined8 *)(lVar1 + 0x38);
    uVar7 = (ulong)((uint)param_3 & 0xff);
    iVar4 = (int)*(undefined8 *)(lVar1 + 0x40);
    lVar8 = (long)iVar4;
    lVar1 = *(long *)(param_4 + 0x10);
    if (iVar4 < lVar1) goto LAB_71007d55b8;
LAB_71007d5644:
    *(undefined8 *)(param_4 + 0x10) = 0;
    if ((uVar7 & 1) == 0) {
LAB_71007d564c:
      lVar1 = (**(code **)(*param_2 + 0x60))(param_2,uVar9,lVar8);
      uVar6 = (uint)uVar7;
      if (lVar8 != lVar1) {
        uVar6 = 1;
      }
      uVar7 = param_3 & 0xffffffffffffff00 | (ulong)uVar6;
      goto LAB_71007d555c;
    }
  }
  else {
    uVar9 = *(undefined8 *)(lVar1 + 0x28);
    uVar7 = (ulong)((uint)param_3 & 0xff);
    iVar4 = (int)*(undefined8 *)(lVar1 + 0x30);
    lVar8 = (long)iVar4;
    lVar1 = *(long *)(param_4 + 0x10);
    if (lVar1 <= iVar4) goto LAB_71007d5644;
LAB_71007d55b8:
    lVar2 = -((lVar1 - lVar8) + 0xfU & 0xfffffffffffffff0);
    FUN_7100808340(&stack0xffffffffffffff60 + lVar2,param_5);
    *(undefined8 *)(param_4 + 0x10) = 0;
    local_48 = (int)(lVar1 - lVar8);
    lVar1 = (long)local_48;
    uVar5 = (uint)uVar7;
    if ((uVar6 & 0xb0) == 0x20) {
      if ((uVar7 & 1) == 0) {
        lVar3 = (**(code **)(*param_2 + 0x60))(param_2,uVar9,lVar8);
        if (lVar8 == lVar3) {
          lVar8 = (**(code **)(*param_2 + 0x60))(param_2,&stack0xffffffffffffff60 + lVar2,lVar1);
          if (lVar8 != lVar1) {
            uVar5 = 1;
          }
          uVar7 = param_3 & 0xffffffffffffff00 | (ulong)uVar5;
          goto LAB_71007d555c;
        }
        goto LAB_71007d561c;
      }
    }
    else if ((uVar7 & 1) == 0) {
      lVar2 = (**(code **)(*param_2 + 0x60))(param_2,&stack0xffffffffffffff60 + lVar2,lVar1);
      if (lVar2 == lVar1) goto LAB_71007d564c;
LAB_71007d561c:
      uVar7 = 1;
    }
  }
  uVar7 = param_3 & 0xffffffffffffff00 | uVar7;
LAB_71007d555c:
  auVar10._8_8_ = uVar7;
  auVar10._0_8_ = param_2;
  return auVar10;
}



// ===== FUN_71007d56c0 @ 71007d56c0 (size=452) =====

undefined1  [16]
FUN_71007d56c0(undefined8 param_1,long *param_2,uint param_3,long param_4,undefined4 param_5,
              long param_6)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_b0 [40];
  undefined1 auStack_88 [8];
  int local_4;
  
  lVar5 = FUN_71007d31a0(param_4 + 0xd0);
  uVar1 = *(uint *)(param_4 + 0x18);
  puVar3 = auStack_b0;
  puVar2 = auStack_b0;
  uVar9 = uVar1 & 0x4a;
  local_4 = FUN_71007d5240(auStack_88,param_6,lVar5 + 0x4a,uVar1,uVar9 != 0x40 && uVar9 != 8);
  puVar6 = auStack_b0 + (0x28 - local_4);
  iVar4 = local_4;
  if ((*(byte *)(lVar5 + 0x20) & 1) != 0) {
    lVar8 = -((-(ulong)(local_4 + 1U >> 0x1f) & 0xfffffffe00000000 | (ulong)(local_4 + 1U) << 1) +
              0xf & 0xfffffffffffffff0);
    puVar2 = auStack_b0 + lVar8;
    puVar3 = auStack_b0 + lVar8;
    FUN_71007d3860(param_1,*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 0x18),
                   *(undefined1 *)(lVar5 + 0x49),param_4,auStack_b0 + lVar8 + 2,puVar6,&local_4);
    puVar6 = auStack_b0 + lVar8 + 2;
    iVar4 = local_4;
  }
  puVar7 = puVar6;
  local_4 = iVar4;
  if ((uVar9 == 0x40 || uVar9 == 8) && (puVar3 = puVar2, (uVar1 & 0x200) != 0 && param_6 != 0)) {
    if (uVar9 == 0x40) {
      iVar4 = iVar4 + 1;
      puVar7 = puVar6 + -1;
      *puVar7 = *(undefined1 *)(lVar5 + 0x4e);
      local_4 = iVar4;
    }
    else {
      iVar4 = iVar4 + 2;
      puVar7 = puVar6 + -2;
      puVar6[-1] = *(undefined1 *)(lVar5 + 0x4a + (long)(int)((uVar1 >> 0xe & 1) + 2));
      local_4 = iVar4;
      *puVar7 = *(undefined1 *)(lVar5 + 0x4e);
    }
  }
  lVar5 = *(long *)(param_4 + 0x10);
  lVar8 = (long)iVar4;
  puVar6 = puVar7;
  if (lVar8 < lVar5) {
    lVar8 = -(lVar5 + 0xfU & 0xfffffffffffffff0);
    puVar6 = puVar3 + lVar8;
    FUN_71007d49c0(param_1,param_5,lVar5,param_4,(long)puVar3 + lVar8,puVar7,&local_4);
    lVar8 = (long)local_4;
  }
  *(undefined8 *)(param_4 + 0x10) = 0;
  uVar9 = param_3 & 0xff;
  if (((param_3 & 1) == 0) &&
     (lVar5 = (**(code **)(*param_2 + 0x60))(param_2,puVar6,lVar8), lVar8 != lVar5)) {
    uVar9 = 1;
  }
  auVar10._8_4_ = uVar9;
  auVar10._0_8_ = param_2;
  auVar10._12_4_ = 0;
  return auVar10;
}



// ===== FUN_71007d58c0 @ 71007d58c0 (size=80) =====

void FUN_71007d58c0(void)

{
  uint uVar1;
  long in_x3;
  
  uVar1 = *(uint *)(in_x3 + 0x18);
  *(uint *)(in_x3 + 0x18) = uVar1 & 0xffffbfb5 | 0x208;
  FUN_71007d56c0();
  *(uint *)(in_x3 + 0x18) = uVar1;
  return;
}



// ===== FUN_71007d5920 @ 71007d5920 (size=160) =====

int FUN_71007d5920(undefined1 *param_1,ulong param_2,long param_3,uint param_4,ulong param_5)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  
  puVar4 = param_1;
  if ((param_5 & 1) == 0) {
    if ((param_4 & 0x4a) == 0x40) {
      do {
        uVar3 = param_2 & 7;
        param_2 = param_2 >> 3;
        puVar4 = puVar4 + -1;
        *puVar4 = *(undefined1 *)(param_3 + uVar3 + 4);
      } while (param_2 != 0);
    }
    else {
      lVar2 = 4;
      if ((param_4 & 0x4000) != 0) {
        lVar2 = 0x14;
      }
      do {
        uVar3 = param_2 & 0xf;
        param_2 = param_2 >> 4;
        puVar4 = puVar4 + -1;
        *puVar4 = *(undefined1 *)(param_3 + lVar2 + uVar3);
      } while (param_2 != 0);
    }
  }
  else {
    do {
      puVar4 = puVar4 + -1;
      *puVar4 = *(undefined1 *)(param_3 + param_2 % 10 + 4);
      bVar1 = 9 < param_2;
      param_2 = param_2 / 10;
    } while (bVar1);
  }
  return (int)param_1 - (int)puVar4;
}



// ===== FUN_71007d59c0 @ 71007d59c0 (size=528) =====

undefined1  [16]
FUN_71007d59c0(undefined8 param_1,long *param_2,uint param_3,long param_4,undefined4 param_5,
              long param_6)

{
  uint uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_b0 [40];
  undefined1 auStack_88 [8];
  int local_4;
  
  lVar8 = FUN_71007d31a0(param_4 + 0xd0);
  uVar1 = *(uint *)(param_4 + 0x18);
  puVar3 = auStack_b0;
  puVar4 = auStack_b0;
  uVar12 = uVar1 & 0x4a;
  bVar5 = uVar12 != 0x40;
  bVar6 = uVar12 != 8;
  lVar11 = -param_6;
  if (0 < param_6 || (!bVar5 || !bVar6)) {
    lVar11 = param_6;
  }
  local_4 = FUN_71007d5920(auStack_88,lVar11,lVar8 + 0x4a,uVar1,bVar5 && bVar6);
  puVar10 = auStack_b0 + (0x28 - local_4);
  if ((*(byte *)(lVar8 + 0x20) & 1) == 0) {
    puVar9 = puVar10;
    if (bVar5 && bVar6) goto LAB_71007d5a60;
LAB_71007d5b0c:
    puVar10 = puVar9;
    iVar7 = local_4;
    if ((uVar1 & 0x200) != 0 && param_6 != 0) {
      if (uVar12 == 0x40) {
        iVar7 = local_4 + 1;
        puVar10 = puVar9 + -1;
        *puVar10 = *(undefined1 *)(lVar8 + 0x4e);
        local_4 = iVar7;
      }
      else {
        iVar7 = local_4 + 2;
        puVar10 = puVar9 + -2;
        puVar9[-1] = *(undefined1 *)(lVar8 + 0x4a + (long)(int)((uVar1 >> 0xe & 1) + 2));
        local_4 = iVar7;
        *puVar10 = *(undefined1 *)(lVar8 + 0x4e);
      }
    }
LAB_71007d5a68:
    lVar11 = *(long *)(param_4 + 0x10);
    lVar8 = (long)iVar7;
    puVar3 = puVar4;
    if (lVar11 <= lVar8) goto LAB_71007d5a78;
  }
  else {
    lVar11 = -((-(ulong)(local_4 + 1U >> 0x1f) & 0xfffffffe00000000 | (ulong)(local_4 + 1U) << 1) +
               0xf & 0xfffffffffffffff0);
    puVar4 = auStack_b0 + lVar11;
    puVar3 = auStack_b0 + lVar11;
    puVar9 = auStack_b0 + lVar11 + 2;
    FUN_71007d3860(param_1,*(undefined8 *)(lVar8 + 0x10),*(undefined8 *)(lVar8 + 0x18),
                   *(undefined1 *)(lVar8 + 0x49),param_4,puVar9,puVar10,&local_4);
    if (!bVar5 || !bVar6) goto LAB_71007d5b0c;
LAB_71007d5a60:
    puVar4 = puVar3;
    if (param_6 < 0) {
      puVar9[-1] = *(undefined1 *)(lVar8 + 0x4a);
      puVar10 = puVar9 + -1;
      iVar7 = local_4 + 1;
      local_4 = local_4 + 1;
      goto LAB_71007d5a68;
    }
    puVar10 = puVar9;
    iVar7 = local_4;
    if ((uVar1 >> 0xb & 1) == 0) goto LAB_71007d5a68;
    iVar7 = local_4 + 1;
    puVar9[-1] = *(undefined1 *)(lVar8 + 0x4b);
    puVar10 = puVar9 + -1;
    lVar11 = *(long *)(param_4 + 0x10);
    lVar8 = (long)iVar7;
    local_4 = iVar7;
    if (lVar11 <= lVar8) goto LAB_71007d5a78;
  }
  lVar2 = -(lVar11 + 0xfU & 0xfffffffffffffff0);
  FUN_71007d49c0(param_1,param_5,lVar11,param_4,(long)puVar3 + lVar2,puVar10,&local_4);
  lVar8 = (long)local_4;
  puVar10 = puVar3 + lVar2;
LAB_71007d5a78:
  *(undefined8 *)(param_4 + 0x10) = 0;
  uVar12 = param_3 & 0xff;
  if (((param_3 & 1) == 0) &&
     (lVar11 = (**(code **)(*param_2 + 0x60))(param_2,puVar10,lVar8), lVar11 != lVar8)) {
    uVar12 = 1;
  }
  auVar13._8_4_ = uVar12;
  auVar13._0_8_ = param_2;
  auVar13._12_4_ = 0;
  return auVar13;
}



// ===== FUN_71007d5e00 @ 71007d5e00 (size=224) =====

bool FUN_71007d5e00(long *param_1,long *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  bVar1 = (int)param_1[1] == -1;
  if (plVar4 != (long *)0x0 && bVar1) {
    bVar1 = plVar4 != (long *)0x0 && bVar1;
    if (((ulong)plVar4[2] < (ulong)plVar4[3]) ||
       (iVar3 = (**(code **)(*plVar4 + 0x48))(), iVar3 != -1)) {
      bVar1 = false;
    }
    else {
      *param_1 = 0;
    }
  }
  plVar4 = (long *)*param_2;
  bVar2 = (int)param_2[1] == -1;
  if (plVar4 != (long *)0x0 && bVar2) {
    if (((ulong)plVar4[2] < (ulong)plVar4[3]) ||
       (iVar3 = (**(code **)(*plVar4 + 0x48))(), iVar3 != -1)) {
      bVar2 = false;
    }
    else {
      *param_2 = 0;
      bVar2 = plVar4 != (long *)0x0 && bVar2;
    }
  }
  return bVar1 == bVar2;
}



// ===== FUN_71007d5ee0 @ 71007d5ee0 (size=2820) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_71007d5ee0(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
              long param_6,undefined4 *param_7,long *param_8)

{
  byte bVar1;
  char cVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  byte bVar5;
  bool bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined1 *puVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined1 *puVar22;
  int *piVar23;
  long *plVar24;
  int iVar25;
  byte bVar26;
  long *plVar27;
  long *local_30;
  undefined8 local_28;
  long *local_20;
  uint local_18;
  undefined4 uStack_14;
  undefined1 auStack_10 [8];
  undefined1 *local_8;
  
  local_18 = (uint)param_3;
  uStack_14 = (undefined4)((ulong)param_3 >> 0x20);
  local_30 = param_4;
  local_28 = param_5;
  local_20 = param_2;
  lVar15 = FUN_71007d31a0(param_6 + 0xd0);
  bVar8 = FUN_71007d5e00();
  plVar24 = local_30;
  if ((bVar8 & 1) == 0) {
    iVar25 = (int)local_28;
    uVar9 = FUN_71007bf500(&local_20);
    plVar27 = local_20;
    uVar10 = uVar9 & 0xff;
    bVar5 = *(byte *)(lVar15 + 0x20);
    if ((uint)*(byte *)(lVar15 + 0x6f) == (uVar9 & 0xff)) {
      if ((bVar5 & 1) == 0) {
        bVar26 = *(byte *)(lVar15 + 0x48);
        uVar12 = 0x2b;
        goto joined_r0x0071007d61d4;
      }
LAB_71007d6144:
      if ((*(byte *)(lVar15 + 0x49) == uVar10) || (*(byte *)(lVar15 + 0x48) == uVar10)) {
        bVar7 = 1;
        goto LAB_71007d601c;
      }
      uVar12 = 0x2b;
      if (*(byte *)(lVar15 + 0x6f) != uVar10) {
        uVar12 = 0x2d;
      }
    }
    else {
      bVar7 = bVar5 & 1;
      if (*(byte *)(lVar15 + 0x6e) != uVar10) goto LAB_71007d601c;
      if ((bVar5 & 1) != 0) goto LAB_71007d6144;
      bVar26 = *(byte *)(lVar15 + 0x48);
      uVar12 = 0x2d;
joined_r0x0071007d61d4:
      bVar7 = bVar5 & 1;
      if (uVar10 == bVar26) goto LAB_71007d601c;
    }
    FUN_71007b7300(param_8,uVar12);
    FUN_71007d0fa0(plVar27);
    local_18 = 0xffffffff;
    uVar16 = FUN_71007d5e00(&local_20,&local_30);
    plVar24 = local_30;
    if ((uVar16 & 1) == 0) {
      iVar25 = (int)local_28;
      uVar10 = FUN_71007bf500(&local_20);
      bVar5 = *(byte *)(lVar15 + 0x20);
      uVar10 = uVar10 & 0xff;
      bVar7 = bVar5 & 1;
LAB_71007d601c:
      uVar9 = 0;
      bVar26 = bVar8;
      do {
        uVar14 = local_18;
        plVar27 = local_20;
        bVar1 = bVar8;
        bVar4 = bVar8;
        if ((bVar7 != 0) && (*(byte *)(lVar15 + 0x49) == uVar10)) {
          local_8 = &DAT_7100d210f0;
          FUN_71007b6ec0(&local_8,0x20);
LAB_71007d621c:
          if ((*(byte *)(lVar15 + 0x88) & 1) == 0) {
LAB_71007d65c4:
            if (9 < (uVar10 - 0x30 & 0xff)) goto LAB_71007d6698;
LAB_71007d65d4:
            lVar17 = *param_8;
            lVar19 = *(long *)(lVar17 + -0x18);
            uVar16 = lVar19 + 1;
            if ((*(ulong *)(lVar17 + -0x10) < uVar16) || (0 < (int)*(undefined8 *)(lVar17 + -8))) {
              FUN_71007b6ec0(param_8,uVar16);
            }
            bVar26 = 1;
            *(char *)(*param_8 + *(long *)(*param_8 + -0x18)) = (char)uVar10;
            lVar17 = *param_8;
            if ((undefined1 *)(lVar17 + -0x18) != &DAT_7100d210d8) {
              *(ulong *)(lVar17 + -0x18) = uVar16;
              *(undefined4 *)(lVar17 + -8) = 0;
              ((undefined1 *)(lVar17 + -0x18))[lVar19 + 0x19] = 0;
            }
            do {
              if ((ulong)plVar27[2] < (ulong)plVar27[3]) {
                uVar16 = plVar27[2] + 1;
                plVar27[2] = uVar16;
                if (uVar16 < (ulong)plVar27[3]) goto LAB_71007d6640;
LAB_71007d67ac:
                iVar13 = (**(code **)(*plVar27 + 0x48))(plVar27);
                if (iVar13 != -1) goto LAB_71007d6640;
                bVar5 = plVar24 != (long *)0x0 && iVar25 == -1;
                if ((bool)bVar5) {
                  plVar27 = (long *)0x0;
                  if ((ulong)plVar24[3] <= (ulong)plVar24[2]) goto LAB_71007d676c;
                  goto LAB_71007d668c;
                }
                uVar14 = 0xffffffff;
                if (iVar25 == -1) goto LAB_71007d69cc;
LAB_71007d67e0:
                uVar10 = 0xff;
                plVar27 = (long *)0x0;
              }
              else {
                (**(code **)(*plVar27 + 0x50))(plVar27);
                if ((ulong)plVar27[3] <= (ulong)plVar27[2]) goto LAB_71007d67ac;
LAB_71007d6640:
                bVar7 = iVar25 == -1;
                bVar5 = plVar24 != (long *)0x0 && (bool)bVar7;
                if (plVar24 != (long *)0x0 && (bool)bVar7) {
                  bVar5 = bVar8;
                  if ((ulong)plVar24[2] < (ulong)plVar24[3]) goto LAB_71007d6538;
LAB_71007d676c:
                  iVar13 = (**(code **)(*plVar24 + 0x48))(plVar24);
                  bVar7 = bVar8;
                  if (iVar13 == -1) {
                    plVar24 = (long *)0x0;
                    bVar7 = 1;
                  }
                }
                if (bVar7 == bVar5) goto LAB_71007d6538;
                if (plVar27 != (long *)0x0) {
                  if ((byte *)plVar27[2] < (byte *)plVar27[3]) {
                    uVar10 = (uint)*(byte *)plVar27[2];
                    uVar14 = 0xffffffff;
                  }
                  else {
                    uVar14 = (**(code **)(*plVar27 + 0x48))(plVar27);
                    if (uVar14 == 0xffffffff) goto LAB_71007d67e0;
                    uVar10 = uVar14 & 0xff;
                    uVar14 = 0xffffffff;
                  }
                  goto LAB_71007d65c4;
                }
LAB_71007d668c:
                uVar14 = 0xffffffff;
                uVar10 = 0xff;
                plVar27 = (long *)0x0;
              }
LAB_71007d6698:
              if ((*(byte *)(lVar15 + 0x48) != uVar10) || (bVar6 = bVar4 != 0, bVar1 != 0 || bVar6))
              {
                bVar5 = bVar1;
                if (*(byte *)(lVar15 + 0x80) == uVar10) goto LAB_71007d66bc;
                while( true ) {
                  bVar5 = bVar1;
                  if (*(byte *)(lVar15 + 0x86) != uVar10) goto LAB_71007d653c;
LAB_71007d66bc:
                  bVar1 = bVar26 & (bVar5 ^ 1);
                  if ((bVar1 & 1) == 0) goto LAB_71007d653c;
                  FUN_71007b7300(param_8,0x65);
                  FUN_71007d0fa0(plVar27);
                  local_18 = 0xffffffff;
                  local_28 = CONCAT44(local_28._4_4_,iVar25);
                  local_30 = plVar24;
                  local_20 = plVar27;
                  uVar16 = FUN_71007d5e00(&local_20,&local_30);
                  plVar24 = local_30;
                  if ((uVar16 & 1) != 0) {
                    lVar19 = *(long *)(local_8 + -0x18);
                    plVar27 = local_20;
                    uVar14 = local_18;
                    puVar18 = local_8;
                    goto joined_r0x0071007d648c;
                  }
                  iVar25 = (int)local_28;
                  uVar14 = FUN_71007bf500(&local_20);
                  plVar27 = local_20;
                  uVar10 = uVar14 & 0xff;
                  bVar26 = bVar1;
                  if ((uint)*(byte *)(lVar15 + 0x6f) == (uVar14 & 0xff)) break;
                  uVar21 = 0x2d;
                  if (*(byte *)(lVar15 + 0x6e) == uVar10) goto LAB_71007d6804;
                  if ((uVar10 - 0x30 & 0xff) < 10) goto LAB_71007d65d4;
                  uVar14 = local_18;
                  bVar5 = bVar1;
                  if (*(byte *)(lVar15 + 0x80) == uVar10) goto LAB_71007d653c;
                }
                uVar21 = 0x2b;
LAB_71007d6804:
                FUN_71007b7300(param_8,uVar21);
              }
              else {
                bVar4 = 1;
                FUN_71007b7300(param_8,0x2e);
                bVar1 = bVar1 != 0 || bVar6;
              }
            } while( true );
          }
          bVar5 = *(byte *)(lVar15 + 0x20);
LAB_71007d6228:
          goto LAB_71007d6240;
        }
        if ((*(byte *)(lVar15 + 0x48) == uVar10) || (*(byte *)(lVar15 + 0x72) != uVar10)) {
          local_8 = &DAT_7100d210f0;
          if (bVar7 != 0) {
            FUN_71007b6ec0(&local_8,0x20);
            goto LAB_71007d621c;
          }
          if ((*(byte *)(lVar15 + 0x88) & 1) != 0) goto LAB_71007d6228;
          goto LAB_71007d65c4;
        }
        if ((bVar26 & 1) == 0) {
          FUN_71007b7300(param_8,0x30);
          uVar16 = plVar27[2];
          if ((ulong)plVar27[3] <= uVar16) goto LAB_71007d60e0;
LAB_71007d606c:
          plVar27[2] = uVar16 + 1;
          local_28 = CONCAT44(local_28._4_4_,iVar25);
          local_18 = 0xffffffff;
          local_30 = plVar24;
          local_20 = plVar27;
          uVar16 = FUN_71007d5e00(&local_20,&local_30);
          plVar24 = local_30;
          plVar27 = local_20;
          uVar14 = local_18;
        }
        else {
          uVar16 = local_20[2];
          if (uVar16 < (ulong)local_20[3]) goto LAB_71007d606c;
LAB_71007d60e0:
          (**(code **)(*plVar27 + 0x50))(plVar27);
          local_28 = CONCAT44(local_28._4_4_,iVar25);
          local_18 = 0xffffffff;
          local_30 = plVar24;
          local_20 = plVar27;
          uVar16 = FUN_71007d5e00(&local_20,&local_30);
          plVar24 = local_30;
          plVar27 = local_20;
          uVar14 = local_18;
        }
        uVar9 = uVar9 + 1;
        local_30 = plVar24;
        local_20 = plVar27;
        local_18 = uVar14;
        if ((uVar16 & 1) != 0) goto LAB_71007d610c;
        bVar26 = 1;
        iVar25 = (int)local_28;
        uVar10 = FUN_71007bf500(&local_20);
        bVar5 = *(byte *)(lVar15 + 0x20);
        uVar10 = uVar10 & 0xff;
        bVar7 = bVar5 & 1;
      } while( true );
    }
  }
  uVar14 = local_18;
  plVar27 = local_20;
  local_8 = &DAT_7100d210f0;
  if ((*(byte *)(lVar15 + 0x20) & 1) != 0) {
    FUN_71007b6ec0(&local_8,0x20);
  }
  uVar9 = 0;
LAB_71007d5f58:
  lVar19 = *(long *)(local_8 + -0x18);
  goto joined_r0x0071007d6138;
LAB_71007d6240:
  if (((bVar5 & 1) == 0) || (*(byte *)(lVar15 + 0x49) != uVar10)) {
LAB_71007d6250:
    uVar11 = (uint)*(byte *)(lVar15 + 0x48);
    do {
      if (uVar11 == uVar10) {
        bVar6 = bVar1 != 0;
        bVar1 = bVar4 != 0 || bVar6;
        if (bVar4 != 0 || bVar6) goto LAB_71007d6480;
        if (*(long *)(local_8 + -0x18) != 0) {
          FUN_71007b7300(&local_8,uVar9 & 0xff);
        }
        FUN_71007b7300(param_8,0x2e);
        bVar4 = 1;
LAB_71007d6290:
        uVar16 = plVar27[2];
        uVar20 = plVar27[3];
        if (uVar16 < uVar20) goto LAB_71007d629c;
        goto LAB_71007d6340;
      }
      while( true ) {
        lVar19 = FUN_710080c980(lVar15 + 0x72,uVar10,10);
        if (lVar19 != 0) {
          FUN_71007b7300(param_8,((int)lVar19 - (int)(lVar15 + 0x72)) + 0x30);
          bVar26 = 1;
          uVar9 = uVar9 + 1;
          goto LAB_71007d6290;
        }
        bVar5 = bVar1;
        if (((*(byte *)(lVar15 + 0x80) != uVar10) && (*(byte *)(lVar15 + 0x86) != uVar10)) ||
           ((bVar26 & (bVar1 ^ 0xff) & 1) == 0)) goto LAB_71007d653c;
        if (*(long *)(local_8 + -0x18) != 0 && bVar4 == 0) {
          FUN_71007b7300(&local_8,uVar9 & 0xff);
        }
        FUN_71007b7300(param_8,0x65);
        if ((ulong)plVar27[2] < (ulong)plVar27[3]) {
          plVar27[2] = plVar27[2] + 1;
        }
        else {
          (**(code **)(*plVar27 + 0x50))(plVar27);
        }
        local_18 = 0xffffffff;
        local_28 = CONCAT44(local_28._4_4_,iVar25);
        local_30 = plVar24;
        local_20 = plVar27;
        uVar16 = FUN_71007d5e00(&local_20,&local_30);
        uVar14 = local_18;
        plVar27 = local_20;
        plVar24 = local_30;
        if ((uVar16 & 1) != 0) goto LAB_71007d6480;
        iVar25 = (int)local_28;
        if (local_20 == (long *)0x0 || local_18 != 0xffffffff) {
          uVar10 = local_18 & 0xff;
        }
        else if ((byte *)local_20[2] < (byte *)local_20[3]) {
          uVar10 = (uint)*(byte *)local_20[2];
        }
        else {
          uVar10 = (**(code **)(*local_20 + 0x48))(local_20);
          if (uVar10 == 0xffffffff) {
            plVar27 = (long *)0x0;
            uVar10 = 0xff;
          }
          else {
            uVar10 = uVar10 & 0xff;
          }
        }
        bVar5 = *(byte *)(lVar15 + 0x20);
        if (*(byte *)(lVar15 + 0x6f) == uVar10) {
          if ((bVar5 & 1) != 0) goto LAB_71007d64f4;
          if (*(byte *)(lVar15 + 0x48) == uVar10) goto LAB_71007d6480;
          uVar12 = 0x2b;
          goto LAB_71007d64dc;
        }
        if (*(byte *)(lVar15 + 0x6e) == uVar10) break;
        if ((bVar5 & 1) != 0) {
          bVar5 = *(byte *)(lVar15 + 0x49);
          goto LAB_71007d68d0;
        }
        bVar26 = 1;
        bVar1 = 1;
        if (*(byte *)(lVar15 + 0x48) == uVar10) goto LAB_71007d6480;
      }
      if ((bVar5 & 1) == 0) {
        if (*(byte *)(lVar15 + 0x48) != uVar10) {
          uVar12 = 0x2d;
LAB_71007d64dc:
          FUN_71007b7300(param_8,uVar12);
          bVar26 = 1;
          bVar1 = 1;
          goto LAB_71007d6290;
        }
        goto LAB_71007d6480;
      }
LAB_71007d64f4:
      bVar5 = *(byte *)(lVar15 + 0x49);
      if (bVar5 == uVar10) goto LAB_71007d68d0;
      uVar11 = (uint)*(byte *)(lVar15 + 0x48);
      if (uVar11 != uVar10) {
        uVar12 = 0x2b;
        if (*(byte *)(lVar15 + 0x6f) != uVar10) {
          uVar12 = 0x2d;
        }
        goto LAB_71007d64dc;
      }
      bVar26 = 1;
      bVar1 = 1;
      if (bVar5 == uVar10) goto LAB_71007d6480;
    } while( true );
  }
  bVar6 = bVar1 != 0;
  bVar1 = bVar6 || bVar4 != 0;
  if (bVar6 || bVar4 != 0) {
LAB_71007d6480:
    lVar19 = *(long *)(local_8 + -0x18);
    puVar18 = local_8;
joined_r0x0071007d648c:
    local_8 = puVar18;
    if (lVar19 == 0) goto LAB_71007d5f98;
    goto LAB_71007d5f80;
  }
  if (uVar9 == 0) {
    puVar22 = (undefined1 *)*param_8;
    puVar18 = puVar22 + -0x18;
    if ((int)*(undefined8 *)(*param_8 + -8) < 1) {
      if (puVar18 != &DAT_7100d210d8) {
        *(undefined4 *)(puVar22 + -8) = 0;
        *(undefined8 *)(puVar22 + -0x18) = 0;
        *puVar22 = 0;
      }
    }
    else {
      if (puVar18 != &DAT_7100d210d8) {
        piVar23 = (int *)(puVar22 + -8);
        do {
          iVar25 = *piVar23;
          cVar2 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar23,0x10);
          if (bVar6) {
            *piVar23 = iVar25 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar25 < 1) {
          thunk_FUN_710081c200(puVar18,auStack_10);
        }
      }
      *param_8 = (long)&DAT_7100d210f0;
    }
    goto LAB_71007d5f58;
  }
  FUN_71007b7300(&local_8,uVar9);
  uVar9 = 0;
  uVar16 = plVar27[2];
  uVar20 = plVar27[3];
  bVar4 = bVar1;
  if (uVar16 < uVar20) {
LAB_71007d629c:
    uVar16 = uVar16 + 1;
    plVar27[2] = uVar16;
  }
  else {
LAB_71007d6340:
    (**(code **)(*plVar27 + 0x50))(plVar27);
    uVar16 = plVar27[2];
    uVar20 = plVar27[3];
  }
  if ((uVar16 < uVar20) || (iVar13 = (**(code **)(*plVar27 + 0x48))(plVar27), iVar13 != -1)) {
    bVar7 = iVar25 == -1;
    bVar5 = plVar24 != (long *)0x0 && (bool)bVar7;
    if (plVar24 != (long *)0x0 && (bool)bVar7) {
      bVar5 = bVar8;
      if ((ulong)plVar24[2] < (ulong)plVar24[3]) goto LAB_71007d6538;
LAB_71007d64a4:
      iVar13 = (**(code **)(*plVar24 + 0x48))(plVar24);
      bVar7 = bVar8;
      if (iVar13 == -1) {
        plVar24 = (long *)0x0;
        bVar7 = 1;
      }
    }
    if (bVar7 == bVar5) goto LAB_71007d6538;
    if (plVar27 == (long *)0x0) goto LAB_71007d68a0;
    if ((byte *)plVar27[2] < (byte *)plVar27[3]) {
      uVar10 = (uint)*(byte *)plVar27[2];
    }
    else {
      uVar10 = (**(code **)(*plVar27 + 0x48))(plVar27);
      if (uVar10 == 0xffffffff) goto LAB_71007d68a0;
      uVar10 = uVar10 & 0xff;
    }
LAB_71007d62e0:
    bVar5 = *(byte *)(lVar15 + 0x20);
    uVar14 = 0xffffffff;
    goto LAB_71007d6240;
  }
  bVar5 = plVar24 != (long *)0x0 && iVar25 == -1;
  if ((bool)bVar5) {
    uVar10 = 0xff;
    plVar27 = (long *)0x0;
    if ((ulong)plVar24[3] <= (ulong)plVar24[2]) goto LAB_71007d64a4;
    goto LAB_71007d62e0;
  }
  if (iVar25 != -1) {
LAB_71007d68a0:
    uVar10 = 0xff;
    plVar27 = (long *)0x0;
    goto LAB_71007d62e0;
  }
LAB_71007d69cc:
  plVar27 = (long *)0x0;
  uVar14 = 0xffffffff;
  bVar5 = bVar1;
LAB_71007d653c:
  puVar18 = local_8;
  if (*(long *)(local_8 + -0x18) == 0) goto LAB_71007d5f98;
  if (bVar4 == 0 && bVar5 == 0) goto LAB_71007d5f64;
  goto LAB_71007d5f80;
LAB_71007d68d0:
  bVar26 = 1;
  bVar1 = 1;
  if (bVar5 == uVar10) goto LAB_71007d6480;
  goto LAB_71007d6250;
LAB_71007d6538:
  uVar14 = 0xffffffff;
  bVar5 = bVar1;
  goto LAB_71007d653c;
LAB_71007d610c:
  local_8 = &DAT_7100d210f0;
  if ((*(byte *)(lVar15 + 0x20) & 1) != 0) {
    FUN_71007b6ec0(&local_8,0x20);
    goto LAB_71007d5f58;
  }
  lVar19 = _DAT_7100d210d8;
  if ((*(byte *)(lVar15 + 0x88) & 1) == 0) goto LAB_71007d5f58;
joined_r0x0071007d6138:
  puVar18 = local_8;
  if (lVar19 != 0) {
LAB_71007d5f64:
    FUN_71007b7300(&local_8,uVar9 & 0xff);
LAB_71007d5f80:
    puVar18 = local_8;
    uVar16 = FUN_71007fbd00(*(undefined8 *)(lVar15 + 0x10),*(undefined8 *)(lVar15 + 0x18),&local_8);
    if ((uVar16 & 1) == 0) {
      *param_7 = 4;
    }
  }
LAB_71007d5f98:
  auVar3._8_4_ = uVar14;
  auVar3._0_8_ = plVar27;
  auVar3._12_4_ = uStack_14;
  local_20 = plVar27;
  local_18 = uVar14;
  FUN_71007d11c0(puVar18);
  return auVar3;
}



// ===== FUN_71007d6a00 @ 71007d6a00 (size=424) =====

undefined1  [16]
FUN_71007d6a00(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4,undefined8 param_5,
              undefined8 param_6,uint *param_7,undefined8 param_8)

{
  char cVar1;
  undefined1 *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  undefined1 auVar7 [16];
  long *local_18;
  undefined1 *local_10;
  undefined8 local_8;
  
  local_10 = &DAT_7100d210f0;
  FUN_71007b6ec0(&local_10,0x20);
  auVar7 = FUN_71007d5ee0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,&local_10);
  puVar2 = local_10;
  local_18 = auVar7._0_8_;
  local_8 = FUN_71007afd60();
  FUN_71007fae60(puVar2,param_8,param_7,&local_8);
  bVar3 = auVar7._8_4_ == -1;
  bVar4 = local_18 != (long *)0x0 && bVar3;
  if ((local_18 != (long *)0x0 && bVar3) &&
     (bVar3 = false, (ulong)local_18[3] <= (ulong)local_18[2])) {
    iVar5 = (**(code **)(*local_18 + 0x48))(local_18);
    if (iVar5 == -1) {
      local_18 = (long *)0x0;
    }
    bVar3 = iVar5 == -1 && bVar4;
  }
  bVar4 = (int)param_5 == -1;
  if ((param_4 != (long *)0x0 && bVar4) && (bVar4 = false, (ulong)param_4[3] <= (ulong)param_4[2]))
  {
    iVar5 = (**(code **)(*param_4 + 0x48))(param_4);
    bVar4 = iVar5 == -1;
  }
  if (bVar4 == bVar3) {
    *param_7 = *param_7 | 2;
  }
  if (local_10 + -0x18 != &DAT_7100d210d8) {
    piVar6 = (int *)(local_10 + -8);
    do {
      iVar5 = *piVar6;
      cVar1 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar4) {
        *piVar6 = iVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar5 < 1) {
      thunk_FUN_710081c200(local_10 + -0x18,&local_8);
    }
  }
  auVar7._8_8_ = param_3 & 0xffffffff00000000 | auVar7._8_8_ & 0xffffffff;
  auVar7._0_8_ = local_18;
  return auVar7;
}



// ===== FUN_71007d6bc0 @ 71007d6bc0 (size=424) =====

undefined1  [16]
FUN_71007d6bc0(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4,undefined8 param_5,
              undefined8 param_6,uint *param_7,undefined8 param_8)

{
  char cVar1;
  undefined1 *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  undefined1 auVar7 [16];
  long *local_18;
  undefined1 *local_10;
  undefined8 local_8;
  
  local_10 = &DAT_7100d210f0;
  FUN_71007b6ec0(&local_10,0x20);
  auVar7 = FUN_71007d5ee0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,&local_10);
  puVar2 = local_10;
  local_18 = auVar7._0_8_;
  local_8 = FUN_71007afd60();
  FUN_71007faf40(puVar2,param_8,param_7,&local_8);
  bVar3 = auVar7._8_4_ == -1;
  bVar4 = local_18 != (long *)0x0 && bVar3;
  if ((local_18 != (long *)0x0 && bVar3) &&
     (bVar3 = false, (ulong)local_18[3] <= (ulong)local_18[2])) {
    iVar5 = (**(code **)(*local_18 + 0x48))(local_18);
    if (iVar5 == -1) {
      local_18 = (long *)0x0;
    }
    bVar3 = iVar5 == -1 && bVar4;
  }
  bVar4 = (int)param_5 == -1;
  if ((param_4 != (long *)0x0 && bVar4) && (bVar4 = false, (ulong)param_4[3] <= (ulong)param_4[2]))
  {
    iVar5 = (**(code **)(*param_4 + 0x48))(param_4);
    bVar4 = iVar5 == -1;
  }
  if (bVar4 == bVar3) {
    *param_7 = *param_7 | 2;
  }
  if (local_10 + -0x18 != &DAT_7100d210d8) {
    piVar6 = (int *)(local_10 + -8);
    do {
      iVar5 = *piVar6;
      cVar1 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar4) {
        *piVar6 = iVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar5 < 1) {
      thunk_FUN_710081c200(local_10 + -0x18,&local_8);
    }
  }
  auVar7._8_8_ = param_3 & 0xffffffff00000000 | auVar7._8_8_ & 0xffffffff;
  auVar7._0_8_ = local_18;
  return auVar7;
}



// ===== FUN_71007d6d80 @ 71007d6d80 (size=424) =====

undefined1  [16]
FUN_71007d6d80(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4,undefined8 param_5,
              undefined8 param_6,uint *param_7,undefined8 param_8)

{
  char cVar1;
  undefined1 *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  undefined1 auVar7 [16];
  long *local_18;
  undefined1 *local_10;
  undefined8 local_8;
  
  local_10 = &DAT_7100d210f0;
  FUN_71007b6ec0(&local_10,0x20);
  auVar7 = FUN_71007d5ee0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,&local_10);
  puVar2 = local_10;
  local_18 = auVar7._0_8_;
  local_8 = FUN_71007afd60();
  FUN_71007fb020(puVar2,param_8,param_7,&local_8);
  bVar3 = auVar7._8_4_ == -1;
  bVar4 = local_18 != (long *)0x0 && bVar3;
  if ((local_18 != (long *)0x0 && bVar3) &&
     (bVar3 = false, (ulong)local_18[3] <= (ulong)local_18[2])) {
    iVar5 = (**(code **)(*local_18 + 0x48))(local_18);
    if (iVar5 == -1) {
      local_18 = (long *)0x0;
    }
    bVar3 = iVar5 == -1 && bVar4;
  }
  bVar4 = (int)param_5 == -1;
  if ((param_4 != (long *)0x0 && bVar4) && (bVar4 = false, (ulong)param_4[3] <= (ulong)param_4[2]))
  {
    iVar5 = (**(code **)(*param_4 + 0x48))(param_4);
    bVar4 = iVar5 == -1;
  }
  if (bVar4 == bVar3) {
    *param_7 = *param_7 | 2;
  }
  if (local_10 + -0x18 != &DAT_7100d210d8) {
    piVar6 = (int *)(local_10 + -8);
    do {
      iVar5 = *piVar6;
      cVar1 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar4) {
        *piVar6 = iVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar5 < 1) {
      thunk_FUN_710081c200(local_10 + -0x18,&local_8);
    }
  }
  auVar7._8_8_ = param_3 & 0xffffffff00000000 | auVar7._8_8_ & 0xffffffff;
  auVar7._0_8_ = local_18;
  return auVar7;
}



// ===== FUN_71007d6f40 @ 71007d6f40 (size=2596) =====

undefined1  [16]
FUN_71007d6f40(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
              long param_6,uint *param_7,ulong *param_8)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  int *piVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  uint uVar22;
  int iVar23;
  ulong uVar24;
  uint uVar25;
  long *plVar26;
  uint local_90;
  uint local_70;
  int local_68;
  int local_64;
  uint local_58;
  long *local_30;
  undefined8 local_28;
  long *local_20;
  int local_18;
  undefined4 uStack_14;
  undefined1 auStack_10 [8];
  undefined1 *local_8;
  
  uVar12 = 8;
  local_18 = (int)param_3;
  uStack_14 = (undefined4)((ulong)param_3 >> 0x20);
  local_30 = param_4;
  local_28 = param_5;
  local_20 = param_2;
  lVar13 = FUN_71007d31a0(param_6 + 0xd0);
  uVar25 = *(uint *)(param_6 + 0x18) & 0x4a;
  if ((uVar25 != 0x40) && (uVar12 = 10, uVar25 == 8)) {
    uVar12 = 0x10;
  }
  uVar8 = FUN_71007d5e00(&local_20,&local_30);
  plVar21 = local_30;
  local_90 = uVar8 & 0xff;
  local_64 = (int)local_28;
  if ((uVar8 & 1) == 0) {
    uVar9 = FUN_71007bf500(&local_20);
    uVar8 = uVar9 & 0xff;
    bVar2 = *(byte *)(lVar13 + 0x20);
    local_70 = local_90;
    if (((uint)*(byte *)(lVar13 + 0x6e) != (uVar9 & 0xff)) && (*(byte *)(lVar13 + 0x6f) != uVar8)) {
      iVar23 = 0;
      bVar7 = bVar2 & 1;
      local_58 = local_90;
      goto LAB_71007d7084;
    }
    local_58 = (uint)(*(byte *)(lVar13 + 0x6e) == uVar8);
    bVar7 = bVar2 & 1;
    if ((((bVar2 & 1) == 0) || (*(byte *)(lVar13 + 0x49) != uVar8)) &&
       (*(byte *)(lVar13 + 0x48) != uVar8)) {
      FUN_71007d0fa0(local_20);
      local_18 = -1;
      uVar9 = FUN_71007d5e00(&local_20,&local_30);
      plVar21 = local_30;
      local_64 = (int)local_28;
      if ((uVar9 & 1) != 0) {
        iVar23 = 0;
        bVar7 = *(byte *)(lVar13 + 0x20) & 1;
        local_90 = uVar9 & 0xff;
        goto LAB_71007d70bc;
      }
      uVar8 = FUN_71007bf500(&local_20);
      uVar8 = uVar8 & 0xff;
      bVar7 = *(byte *)(lVar13 + 0x20) & 1;
    }
    iVar23 = 0;
LAB_71007d7084:
    do {
      plVar26 = local_20;
      uVar9 = uVar12;
      if ((bVar7 != 0) && (*(byte *)(lVar13 + 0x49) == uVar8)) {
        if (uVar12 == 0x10) {
          uVar9 = 0x16;
        }
        goto LAB_71007d7468;
      }
      if (*(byte *)(lVar13 + 0x48) == uVar8) goto LAB_71007d70bc;
      if (*(byte *)(lVar13 + 0x72) == uVar8) {
        uVar22 = local_70 ^ 1;
        if ((uVar12 == 10) == 0 && (uVar22 & 1) == 0) goto LAB_71007d76b8;
        local_70 = (uint)(uVar25 == 0 || uVar12 == 8);
        if (uVar25 == 0 || uVar12 == 8) {
          iVar23 = 0;
          uVar12 = 8;
        }
        else {
          local_70 = uVar12 == 10 | uVar22;
          iVar23 = iVar23 + 1;
        }
      }
      else {
        if ((local_70 & 1) == 0) {
          local_90 = local_70;
          goto LAB_71007d70bc;
        }
LAB_71007d76b8:
        if ((*(byte *)(lVar13 + 0x70) != uVar8) && (*(byte *)(lVar13 + 0x71) != uVar8)) {
          local_70 = 1;
          goto LAB_71007d70bc;
        }
        if (uVar25 != 0 && uVar12 != 0x10) {
          local_90 = (uint)(uVar25 == 0 || uVar12 == 0x10);
          local_70 = 1;
          local_68 = local_18;
          goto joined_r0x0071007d7464;
        }
        iVar23 = 0;
        uVar12 = 0x10;
        local_70 = local_90;
      }
      FUN_71007d0fa0(local_20);
      local_18 = -1;
      local_28 = CONCAT44(local_28._4_4_,local_64);
      local_30 = plVar21;
      local_20 = plVar26;
      uVar9 = FUN_71007d5e00(&local_20,&local_30);
      plVar21 = local_30;
      local_64 = (int)local_28;
      if ((uVar9 & 1) != 0) {
        bVar7 = *(byte *)(lVar13 + 0x20) & 1;
        local_90 = uVar9 & 0xff;
        goto LAB_71007d70bc;
      }
      uVar8 = FUN_71007bf500(&local_20);
      uVar8 = uVar8 & 0xff;
      if ((local_70 & 1) == 0) goto LAB_71007d78a0;
      bVar7 = *(byte *)(lVar13 + 0x20) & 1;
    } while( true );
  }
  uVar8 = 0;
  iVar23 = 0;
  local_70 = 0;
  bVar7 = *(byte *)(lVar13 + 0x20) & 1;
  local_58 = 0;
LAB_71007d70bc:
  uVar9 = uVar12;
  plVar26 = local_20;
  local_68 = local_18;
  if (uVar12 == 0x10) {
    uVar9 = 0x16;
  }
joined_r0x0071007d7464:
  local_8 = &DAT_7100d210f0;
  local_20 = plVar26;
  local_18 = local_68;
  if (bVar7 != 0) {
LAB_71007d7468:
    local_68 = local_18;
    plVar26 = local_20;
    local_8 = &DAT_7100d210f0;
    FUN_71007b6ec0(&local_8,0x20);
  }
  uVar25 = local_90;
  uVar16 = (ulong)(int)uVar12;
  uVar15 = (ulong)local_58 + 0x7fffffffffffffff;
  bVar2 = *(byte *)(lVar13 + 0x88);
  uVar12 = (uint)bVar2;
  uVar4 = 0;
  if (uVar16 != 0) {
    uVar4 = uVar15 / uVar16;
  }
  uVar22 = local_90;
  if ((bVar2 & 1) == 0) {
    if ((local_90 & 1) == 0) {
      uVar10 = 0x38;
      if (uVar9 != 8) {
        uVar10 = 0x3a;
      }
      uVar24 = 0;
      bVar6 = local_64 == -1;
      do {
        if (uVar9 < 0xb) {
          if ((uVar8 < 0x30) || (uVar10 <= uVar8)) goto LAB_71007d74ac;
          uVar12 = uVar8 - 0x30;
        }
        else {
          uVar12 = uVar8 - 0x30;
          if (9 < (uVar12 & 0xff)) {
            if (5 < (uVar8 - 0x61 & 0xff)) goto LAB_71007d72c0;
            uVar12 = uVar8 - 0x57;
          }
        }
LAB_71007d71d0:
        if (uVar4 < uVar24) {
          uVar20 = plVar26[2];
          uVar17 = plVar26[3];
          uVar22 = 1;
          if (uVar17 <= uVar20) goto LAB_71007d71e8;
LAB_71007d716c:
          uVar20 = uVar20 + 1;
          plVar26[2] = uVar20;
        }
        else {
          iVar23 = iVar23 + 1;
          uVar19 = uVar16 * uVar24;
          uVar24 = (long)(int)uVar12 + uVar19;
          uVar20 = plVar26[2];
          uVar17 = plVar26[3];
          uVar22 = (uint)(uVar22 != 0 || uVar15 - (long)(int)uVar12 < uVar19);
          if (uVar20 < uVar17) goto LAB_71007d716c;
LAB_71007d71e8:
          (**(code **)(*plVar26 + 0x50))(plVar26);
          uVar20 = plVar26[2];
          uVar17 = plVar26[3];
        }
        if ((uVar17 <= uVar20) && (iVar11 = (**(code **)(*plVar26 + 0x48))(plVar26), iVar11 == -1))
        {
          bVar1 = plVar21 != (long *)0x0 && bVar6;
          if (plVar21 == (long *)0x0 || !bVar6) {
            if (local_64 != -1) goto LAB_71007d7848;
            local_68 = local_64;
            plVar26 = (long *)0x0;
            local_90 = 1;
            uVar25 = (uint)bVar1;
            goto LAB_71007d74ac;
          }
          if ((ulong)plVar21[3] <= (ulong)plVar21[2]) {
            plVar26 = (long *)0x0;
            uVar8 = (uint)bVar1;
            goto LAB_71007d7250;
          }
LAB_71007d7848:
          plVar26 = (long *)0x0;
          local_68 = -1;
          goto LAB_71007d74ac;
        }
        uVar12 = (uint)(plVar21 != (long *)0x0 && bVar6);
        if (plVar21 != (long *)0x0 && bVar6) {
          uVar8 = local_90;
          if ((ulong)plVar21[2] < (ulong)plVar21[3]) goto LAB_71007d7728;
LAB_71007d7250:
          uVar12 = uVar8;
          iVar11 = (**(code **)(*plVar21 + 0x48))(plVar21);
          uVar8 = local_90;
          if (iVar11 == -1) {
            plVar21 = (long *)0x0;
            uVar8 = 1;
          }
        }
        else {
          uVar8 = (uint)bVar6;
        }
        if (uVar8 == uVar12) {
          local_68 = -1;
          local_90 = 1;
          goto LAB_71007d74ac;
        }
        if (plVar26 == (long *)0x0) goto LAB_71007d7848;
        if ((byte *)plVar26[3] <= (byte *)plVar26[2]) {
          uVar12 = (**(code **)(*plVar26 + 0x48))(plVar26);
          uVar8 = uVar12 & 0xff;
          if (uVar12 != 0xffffffff) goto LAB_71007d71ac;
          if (uVar9 < 0xb) goto LAB_71007d7848;
          uVar8 = 0xff;
          plVar26 = (long *)0x0;
          local_68 = -1;
LAB_71007d72c0:
          if (5 < (uVar8 - 0x41 & 0xff)) goto LAB_71007d74ac;
          uVar12 = uVar8 - 0x37;
          goto LAB_71007d71d0;
        }
        uVar8 = (uint)*(byte *)plVar26[2];
LAB_71007d71ac:
        local_68 = -1;
      } while( true );
    }
    uVar24 = 0;
    uVar22 = uVar12;
    uVar25 = (uint)bVar2;
  }
  else {
    if ((local_90 & 1) == 0) {
      uVar24 = 0;
      bVar6 = local_64 == -1;
      do {
        if (((*(byte *)(lVar13 + 0x20) & 1) == 0) || (*(byte *)(lVar13 + 0x49) != uVar8)) {
          if ((*(byte *)(lVar13 + 0x48) == uVar8) ||
             (lVar14 = FUN_710080c980(lVar13 + 0x72,uVar8,uVar9), lVar14 == 0)) goto LAB_71007d74ac;
          iVar11 = (int)lVar14 - (int)(lVar13 + 0x72);
          if (0xf < iVar11) {
            iVar11 = iVar11 + -6;
          }
          if (uVar24 <= uVar4) {
            iVar23 = iVar23 + 1;
            uVar20 = uVar16 * uVar24;
            uVar24 = (long)iVar11 + uVar20;
            uVar22 = (uint)(uVar22 != 0 || uVar15 - (long)iVar11 < uVar20);
            goto LAB_71007d7328;
          }
          uVar20 = plVar26[2];
          uVar17 = plVar26[3];
          uVar22 = (uint)bVar2;
          if (uVar20 < uVar17) goto LAB_71007d7334;
LAB_71007d73d8:
          (**(code **)(*plVar26 + 0x50))(plVar26);
          uVar20 = plVar26[2];
          uVar17 = plVar26[3];
        }
        else {
          if (iVar23 == 0) {
            uVar25 = (uint)*(byte *)(lVar13 + 0x20);
            goto LAB_71007d74ac;
          }
          FUN_71007b7300(&local_8,iVar23);
          iVar23 = 0;
LAB_71007d7328:
          uVar20 = plVar26[2];
          uVar17 = plVar26[3];
          if (uVar17 <= uVar20) goto LAB_71007d73d8;
LAB_71007d7334:
          uVar20 = uVar20 + 1;
          plVar26[2] = uVar20;
        }
        if ((uVar20 < uVar17) || (iVar11 = (**(code **)(*plVar26 + 0x48))(plVar26), iVar11 != -1)) {
          uVar8 = (uint)(plVar21 != (long *)0x0 && bVar6);
          if (plVar21 != (long *)0x0 && bVar6) {
            uVar10 = local_90;
            if ((ulong)plVar21[2] < (ulong)plVar21[3]) {
              local_68 = -1;
              local_90 = uVar8;
              goto LAB_71007d74ac;
            }
LAB_71007d7418:
            uVar8 = uVar10;
            iVar11 = (**(code **)(*plVar21 + 0x48))(plVar21);
            uVar10 = local_90;
            if (iVar11 == -1) {
              plVar21 = (long *)0x0;
              uVar10 = uVar12;
            }
          }
          else {
            uVar10 = (uint)bVar6;
          }
          if (uVar8 == uVar10) goto LAB_71007d7728;
          if (plVar26 == (long *)0x0) goto LAB_71007d77e0;
          if ((byte *)plVar26[2] < (byte *)plVar26[3]) {
            uVar8 = (uint)*(byte *)plVar26[2];
          }
          else {
            uVar8 = (**(code **)(*plVar26 + 0x48))(plVar26);
            if (uVar8 == 0xffffffff) goto LAB_71007d77e0;
            uVar8 = uVar8 & 0xff;
          }
        }
        else {
          bVar1 = plVar21 != (long *)0x0 && bVar6;
          if (plVar21 != (long *)0x0 && bVar6) {
            plVar26 = (long *)0x0;
            uVar10 = (uint)bVar1;
            if ((ulong)plVar21[3] <= (ulong)plVar21[2]) goto LAB_71007d7418;
          }
          else if (local_64 == -1) goto LAB_71007d791c;
LAB_71007d77e0:
          uVar8 = 0xff;
          plVar26 = (long *)0x0;
        }
        local_68 = -1;
      } while( true );
    }
    uVar24 = 0;
    uVar22 = 0;
    uVar25 = 0;
  }
LAB_71007d74ac:
  if (*(long *)(local_8 + -0x18) == 0) {
    if (((uint)(iVar23 == 0) & (local_70 ^ 1)) == 0) {
LAB_71007d7580:
      if ((uVar25 & 1) == 0) {
        if ((uVar22 & 1) == 0) {
          uVar15 = -uVar24;
          if ((local_58 & 1) == 0) {
            uVar15 = uVar24;
          }
          *param_8 = uVar15;
        }
        else {
          *param_8 = -(ulong)local_58 ^ 0x7fffffffffffffff;
          *param_7 = 4;
        }
        goto LAB_71007d74e4;
      }
    }
  }
  else {
    FUN_71007b7300(&local_8,iVar23);
    uVar15 = FUN_71007fbd00(*(undefined8 *)(lVar13 + 0x10),*(undefined8 *)(lVar13 + 0x18),&local_8);
    if ((uVar15 & 1) == 0) {
      *param_7 = 4;
      uVar12 = (uint)(iVar23 == 0) & (local_70 ^ 1);
    }
    else {
      uVar12 = (uint)(iVar23 == 0) & (local_70 ^ 1);
    }
    if ((uVar12 == 0) || (*(long *)(local_8 + -0x18) != 0)) goto LAB_71007d7580;
  }
  *param_8 = 0;
  *param_7 = 4;
LAB_71007d74e4:
  if ((local_90 & 1) != 0) {
    *param_7 = *param_7 | 2;
  }
  local_18 = local_68;
  auVar5._8_4_ = local_68;
  auVar5._0_8_ = plVar26;
  auVar5._12_4_ = uStack_14;
  if (local_8 + -0x18 != &DAT_7100d210d8) {
    piVar18 = (int *)(local_8 + -8);
    do {
      iVar23 = *piVar18;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar6) {
        *piVar18 = iVar23 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar23 < 1) {
      local_20 = plVar26;
      thunk_FUN_710081c200(local_8 + -0x18,auStack_10);
    }
  }
  return auVar5;
LAB_71007d78a0:
  bVar7 = *(byte *)(lVar13 + 0x20) & 1;
  local_90 = local_70;
  goto LAB_71007d70bc;
LAB_71007d791c:
  plVar26 = (long *)0x0;
  local_68 = local_64;
  local_90 = uVar12;
  uVar25 = (uint)bVar1;
  goto LAB_71007d74ac;
LAB_71007d7728:
  local_68 = -1;
  local_90 = uVar12;
  goto LAB_71007d74ac;
}



// ===== FUN_71007d7980 @ 71007d7980 (size=1160) =====

undefined1  [16]
FUN_71007d7980(undefined8 param_1,long *param_2,ulong param_3,long *param_4,undefined8 param_5,
              long param_6,uint *param_7,byte *param_8)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  long *local_30;
  undefined8 local_28;
  undefined1 local_20 [12];
  undefined4 uStack_14;
  ulong local_8;
  
  local_20._8_4_ = (undefined4)param_3;
  uVar17 = local_20._8_4_;
  uStack_14 = (undefined4)(param_3 >> 0x20);
  local_30 = param_4;
  local_28 = param_5;
  local_20._0_8_ = param_2;
  if ((*(uint *)(param_6 + 0x18) & 1) == 0) {
    local_8 = 0xffffffffffffffff;
    local_20 = FUN_71007d6f40();
    if (local_8 < 2) {
      *param_8 = (byte)local_8 & 1;
    }
    else {
      *param_8 = 1;
      *param_7 = 4;
      uVar11 = FUN_71007d5e00(local_20,&local_30);
      if ((uVar11 & 1) != 0) {
        *param_7 = *param_7 | 2;
        auVar4._12_4_ = uStack_14;
        auVar4._0_12_ = local_20;
        return auVar4;
      }
    }
    auVar2._12_4_ = uStack_14;
    auVar2._0_12_ = local_20;
    return auVar2;
  }
  lVar10 = FUN_71007d31a0(param_6 + 0xd0);
  param_3 = param_3 & 0xffffffff;
  if (*(long *)(lVar10 + 0x40) == 0 && *(long *)(lVar10 + 0x30) == 0) {
LAB_71007d7bf0:
    *param_8 = 0;
  }
  else {
    uVar15 = 1;
    uVar12 = (uint)(*(long *)(lVar10 + 0x40) == 0);
    uVar13 = (uint)(*(long *)(lVar10 + 0x30) == 0);
    uVar18 = 1;
    uVar11 = 0;
    bVar5 = (int)local_28 == -1;
    do {
      uVar17 = (uint)param_3;
      bVar6 = uVar17 == 0xffffffff;
      bVar7 = param_2 != (long *)0x0;
      bVar16 = bVar6;
      bVar1 = bVar5;
      if (bVar7 && bVar6) {
        if ((ulong)param_2[3] <= (ulong)param_2[2]) {
          iVar9 = (**(code **)(*param_2 + 0x48))(param_2);
          if (iVar9 == -1) {
            param_2 = (long *)0x0;
          }
          bVar16 = iVar9 == -1 && (bVar7 && bVar6);
          goto LAB_71007d7a68;
        }
        bVar16 = false;
        bVar7 = param_4 == (long *)0x0 || !bVar5;
        if (param_4 != (long *)0x0 && bVar5) goto LAB_71007d7c40;
LAB_71007d7a7c:
        if (bVar1 == bVar16) {
LAB_71007d7c60:
          uVar14 = 1;
          break;
        }
      }
      else {
LAB_71007d7a68:
        bVar7 = param_4 == (long *)0x0 || !bVar5;
        if (param_4 == (long *)0x0 || !bVar5) goto LAB_71007d7a7c;
LAB_71007d7c40:
        if ((ulong)param_4[3] <= (ulong)param_4[2]) {
          iVar9 = (**(code **)(*param_4 + 0x48))(param_4);
          if (iVar9 == -1) {
            param_4 = (long *)0x0;
          }
          bVar1 = iVar9 == -1 && !bVar7;
          goto LAB_71007d7a7c;
        }
        if (bVar16 == false) goto LAB_71007d7c60;
      }
      if (param_2 != (long *)0x0 && bVar6) {
        if ((byte *)param_2[2] < (byte *)param_2[3]) {
          uVar14 = (uint)*(byte *)param_2[2];
        }
        else {
          uVar14 = (**(code **)(*param_2 + 0x48))(param_2);
          if (uVar14 == 0xffffffff) {
            uVar14 = 0xff;
            param_2 = (long *)0x0;
          }
          else {
            uVar14 = uVar14 & 0xff;
          }
        }
      }
      else {
        uVar14 = uVar17 & 0xff;
      }
      if (uVar12 == 0) {
        uVar18 = (uint)(*(byte *)(*(long *)(lVar10 + 0x38) + uVar11) == uVar14);
      }
      if ((uVar13 & (uVar18 ^ 1)) != 0) {
        uVar14 = 0;
        if (uVar15 != 0) goto LAB_71007d7b40;
        *param_8 = 0;
        goto LAB_71007d7b60;
      }
      if (uVar13 == 0) {
        uVar15 = (uint)(*(byte *)(*(long *)(lVar10 + 0x28) + uVar11) == uVar14);
      }
      uVar14 = uVar12 & (uVar15 ^ 1);
      if ((uVar12 & (uVar15 ^ 1)) != 0) {
        if (((uVar18 == 0) || (*(ulong *)(lVar10 + 0x40) != uVar11)) || (uVar11 == 0))
        goto LAB_71007d7bf0;
        *param_8 = 0;
        uVar15 = (uVar13 & (uVar18 ^ 1)) << 1;
        goto LAB_71007d7b64;
      }
      if (uVar18 == 0 && uVar15 == 0) goto LAB_71007d7bf0;
      uVar11 = uVar11 + 1;
      if ((ulong)param_2[2] < (ulong)param_2[3]) {
        param_2[2] = param_2[2] + 1;
      }
      else {
        (**(code **)(*param_2 + 0x50))(param_2);
      }
      uVar17 = (uint)(uVar18 != 0 || uVar15 != 0);
      uVar12 = uVar17;
      if ((uVar18 == 0) ||
         (uVar12 = (uint)(*(ulong *)(lVar10 + 0x40) <= uVar11), uVar8 = uVar12, uVar13 = uVar18,
         uVar15 != 0)) {
        bVar16 = *(ulong *)(lVar10 + 0x30) <= uVar11;
        uVar15 = uVar17;
        uVar8 = (uint)(bVar16 && uVar12 != 0);
        uVar13 = (uint)bVar16;
      }
      param_3 = 0xffffffff;
      uVar17 = 0xffffffff;
    } while (uVar8 == 0);
    if ((uVar18 == 0) || (*(ulong *)(lVar10 + 0x40) != uVar11)) {
      if (uVar15 != 0) {
LAB_71007d7b40:
        if (uVar11 != 0 && *(ulong *)(lVar10 + 0x30) == uVar11) {
          *param_8 = 1;
          uVar15 = uVar14 << 1;
          goto LAB_71007d7b64;
        }
      }
    }
    else if (uVar11 != 0) {
      *param_8 = 0;
      if ((uVar15 == 0) || (uVar15 = 4, *(ulong *)(lVar10 + 0x30) != uVar11)) {
        uVar15 = uVar14 << 1;
      }
      goto LAB_71007d7b64;
    }
    *param_8 = 0;
    uVar15 = 6;
    if (uVar14 != 0) goto LAB_71007d7b64;
  }
LAB_71007d7b60:
  uVar15 = 4;
LAB_71007d7b64:
  *param_7 = uVar15;
  auVar3._8_4_ = uVar17;
  auVar3._0_8_ = param_2;
  auVar3._12_4_ = uStack_14;
  return auVar3;
}



// ===== FUN_71007d9340 @ 71007d9340 (size=2612) =====

undefined1  [16]
FUN_71007d9340(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
              long param_6,uint *param_7,ulong *param_8)

{
  byte bVar1;
  char cVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  int *piVar20;
  ulong uVar21;
  ulong uVar22;
  byte bVar23;
  long *plVar24;
  int iVar25;
  long *plVar26;
  ulong uVar27;
  ulong local_78;
  ulong local_70;
  int local_38;
  long *local_30;
  undefined8 local_28;
  long *local_20;
  int local_18;
  undefined4 uStack_14;
  undefined1 auStack_10 [8];
  undefined1 *local_8;
  
  uVar11 = 8;
  local_18 = (int)param_3;
  uStack_14 = (undefined4)((ulong)param_3 >> 0x20);
  local_30 = param_4;
  local_28 = param_5;
  local_20 = param_2;
  lVar16 = FUN_71007d31a0(param_6 + 0xd0);
  uVar14 = *(uint *)(param_6 + 0x18) & 0x4a;
  if ((uVar14 != 0x40) && (uVar11 = 10, uVar14 == 8)) {
    uVar11 = 0x10;
  }
  bVar8 = FUN_71007d5e00(&local_20,&local_30);
  plVar24 = local_30;
  local_38 = (int)local_28;
  if ((bVar8 & 1) == 0) {
    uVar12 = FUN_71007bf500(&local_20);
    uVar13 = uVar12 & 0xff;
    bVar23 = *(byte *)(lVar16 + 0x20);
    bVar1 = bVar8;
    if (((uint)*(byte *)(lVar16 + 0x6e) != (uVar12 & 0xff)) && (*(byte *)(lVar16 + 0x6f) != uVar13))
    {
      bVar10 = bVar23 & 1;
      iVar25 = 0;
      bVar5 = bVar8;
      goto LAB_71007d948c;
    }
    bVar5 = *(byte *)(lVar16 + 0x6e) == uVar13;
    bVar10 = bVar23 & 1;
    if ((((bVar23 & 1) == 0) || (*(byte *)(lVar16 + 0x49) != uVar13)) &&
       (*(byte *)(lVar16 + 0x48) != uVar13)) {
      uVar13 = uVar12 & 0xff;
      FUN_71007d0fa0(local_20);
      local_18 = -1;
      bVar9 = FUN_71007d5e00(&local_20,&local_30);
      plVar24 = local_30;
      local_38 = (int)local_28;
      if ((bVar9 & 1) != 0) {
        iVar25 = 0;
        bVar10 = *(byte *)(lVar16 + 0x20) & 1;
        goto LAB_71007d94c0;
      }
      uVar13 = FUN_71007bf500(&local_20);
      bVar23 = *(byte *)(lVar16 + 0x20);
      uVar13 = uVar13 & 0xff;
      bVar10 = bVar23 & 1;
    }
    iVar25 = 0;
LAB_71007d948c:
    do {
      iVar15 = local_18;
      plVar26 = local_20;
      uVar12 = uVar11;
      if ((bVar10 != 0) && (*(byte *)(lVar16 + 0x49) == uVar13)) {
        bVar23 = bVar1;
        if (uVar11 != 0x10) {
          local_78 = (ulong)(int)uVar11;
          bVar9 = bVar8;
          goto LAB_71007d9824;
        }
        local_8 = &DAT_7100d210f0;
        FUN_71007b6ec0(&local_8,0x20);
        if ((*(byte *)(lVar16 + 0x88) & 1) != 0) {
          uVar18 = 0xfffffffffffffff;
          local_78 = 0x16;
          local_70 = 0x10;
          goto LAB_71007d96a4;
        }
        uVar11 = 0x16;
        uVar18 = 0xfffffffffffffff;
        local_70 = 0x10;
        goto LAB_71007d9508;
      }
      bVar9 = bVar8;
      if (*(byte *)(lVar16 + 0x48) == uVar13) goto LAB_71007d94c0;
      if (*(byte *)(lVar16 + 0x72) == uVar13) {
        if (uVar11 != 10 && ((bVar1 ^ 1) & 1) == 0) goto LAB_71007d9a90;
        bVar4 = uVar14 == 0 || uVar11 == 8;
        if (uVar14 == 0 || uVar11 == 8) {
          iVar25 = 0;
          uVar11 = 8;
        }
        else {
          bVar4 = uVar11 == 10 | bVar1 ^ 1;
          iVar25 = iVar25 + 1;
        }
      }
      else {
        bVar9 = bVar1;
        if ((bVar1 & 1) == 0) goto LAB_71007d94c0;
LAB_71007d9a90:
        if ((*(byte *)(lVar16 + 0x70) != uVar13) && (*(byte *)(lVar16 + 0x71) != uVar13)) {
          bVar9 = bVar8;
          bVar1 = 1;
          goto LAB_71007d94c0;
        }
        bVar9 = uVar14 == 0 || uVar11 == 0x10;
        if (uVar14 != 0 && uVar11 != 0x10) {
          local_78 = (ulong)(int)uVar11;
          local_8 = &DAT_7100d210f0;
          if (bVar10 != 0) goto LAB_71007d9824;
          bVar1 = *(byte *)(lVar16 + 0x88);
          uVar18 = 0;
          if (local_78 != 0) {
            uVar18 = 0xffffffffffffffff / local_78;
          }
          local_70 = local_78;
          if ((bVar1 & 1) != 0) goto LAB_71007d96a8;
          bVar23 = 1;
          goto LAB_71007d9508;
        }
        iVar25 = 0;
        uVar11 = 0x10;
        bVar4 = bVar8;
      }
      FUN_71007d0fa0(local_20);
      local_18 = -1;
      local_28 = CONCAT44(local_28._4_4_,local_38);
      local_30 = plVar24;
      local_20 = plVar26;
      bVar9 = FUN_71007d5e00(&local_20,&local_30);
      plVar24 = local_30;
      local_38 = (int)local_28;
      bVar1 = bVar4;
      if ((bVar9 & 1) != 0) {
        bVar10 = *(byte *)(lVar16 + 0x20) & 1;
        goto LAB_71007d94c0;
      }
      uVar13 = FUN_71007bf500(&local_20);
      uVar13 = uVar13 & 0xff;
      bVar23 = *(byte *)(lVar16 + 0x20);
      if ((bVar4 & 1) == 0) goto LAB_71007d9c5c;
      bVar10 = bVar23 & 1;
    } while( true );
  }
  uVar13 = 0;
  bVar10 = *(byte *)(lVar16 + 0x20) & 1;
  iVar25 = 0;
  bVar5 = 0;
  bVar9 = bVar8;
  bVar1 = 0;
LAB_71007d94c0:
  bVar23 = bVar1;
  if (uVar11 == 0x10) {
    local_78 = 0x16;
    uVar12 = 0x16;
  }
  else {
    local_78 = (ulong)(int)uVar11;
    uVar12 = uVar11;
  }
  local_8 = &DAT_7100d210f0;
  plVar26 = local_20;
  iVar15 = local_18;
  if (bVar10 != 0) {
LAB_71007d9824:
    iVar15 = local_18;
    plVar26 = local_20;
    local_8 = &DAT_7100d210f0;
    FUN_71007b6ec0(&local_8,0x20);
  }
  bVar8 = *(byte *)(lVar16 + 0x88);
  local_70 = (ulong)(int)uVar11;
  uVar18 = 0;
  if (local_70 != 0) {
    uVar18 = 0xffffffffffffffff / local_70;
  }
  if ((bVar8 & 1) == 0) {
    uVar11 = uVar12;
    if ((bVar9 & 1) == 0) {
LAB_71007d9508:
      uVar14 = 0x38;
      if (uVar11 != 8) {
        uVar14 = 0x3a;
      }
      bVar8 = false;
      uVar27 = 0;
      bVar6 = local_38 == -1;
      bVar1 = bVar23;
      if (10 < uVar11) goto LAB_71007d95d4;
LAB_71007d9540:
      if ((0x2f < uVar13) && (uVar13 < uVar14)) {
        uVar12 = uVar13 - 0x30;
LAB_71007d9554:
        if (uVar18 < uVar27) goto LAB_71007d9620;
LAB_71007d955c:
        iVar25 = iVar25 + 1;
        uVar21 = uVar27 * local_70;
        uVar27 = (long)(int)uVar12 + uVar21;
        uVar22 = plVar26[2];
        uVar19 = plVar26[3];
        bVar8 = CARRY8((long)(int)uVar12,uVar21) || (bool)bVar8 != false;
        if (uVar19 <= uVar22) goto LAB_71007d9630;
LAB_71007d9588:
        uVar22 = uVar22 + 1;
        plVar26[2] = uVar22;
        do {
          if ((uVar19 <= uVar22) && (iVar15 = (**(code **)(*plVar26 + 0x48))(plVar26), iVar15 == -1)
             ) {
            bVar10 = plVar24 != (long *)0x0 && bVar6;
            if (plVar24 != (long *)0x0 && bVar6) {
              if ((ulong)plVar24[3] <= (ulong)plVar24[2]) {
                plVar26 = (long *)0x0;
                goto LAB_71007d9670;
              }
            }
            else if (local_38 == -1) goto LAB_71007d9d50;
LAB_71007d9bd0:
            plVar26 = (long *)0x0;
            iVar15 = -1;
            bVar9 = 0;
            bVar10 = 0;
            goto LAB_71007d9870;
          }
          bVar10 = plVar24 != (long *)0x0 && bVar6;
          bVar7 = bVar6;
          if (plVar24 != (long *)0x0 && bVar6) {
            if ((ulong)plVar24[2] < (ulong)plVar24[3]) goto LAB_71007d9968;
            bVar10 = false;
LAB_71007d9670:
            iVar15 = (**(code **)(*plVar24 + 0x48))(plVar24);
            bVar7 = iVar15 == -1;
            if (bVar7) {
              plVar24 = (long *)0x0;
            }
          }
          if (bVar7 == (bool)bVar10) goto LAB_71007d9d64;
          if (plVar26 == (long *)0x0) goto LAB_71007d9bd0;
          if ((byte *)plVar26[2] < (byte *)plVar26[3]) {
            uVar13 = (uint)*(byte *)plVar26[2];
LAB_71007d95c8:
            iVar15 = -1;
            if (uVar11 < 0xb) goto LAB_71007d9540;
LAB_71007d95d4:
            uVar12 = uVar13 - 0x30;
            if ((uVar12 & 0xff) < 10) goto LAB_71007d9554;
          }
          else {
            uVar12 = (**(code **)(*plVar26 + 0x48))(plVar26);
            uVar13 = uVar12 & 0xff;
            if (uVar12 != 0xffffffff) goto LAB_71007d95c8;
            if (uVar11 < 0xb) goto LAB_71007d9bd0;
            uVar13 = 0xff;
            plVar26 = (long *)0x0;
            iVar15 = -1;
          }
          uVar12 = uVar13 - 0x57;
          if ((uVar13 - 0x61 & 0xff) < 6) goto LAB_71007d9554;
          if (5 < (uVar13 - 0x41 & 0xff)) break;
          uVar12 = uVar13 - 0x37;
          if (uVar27 <= uVar18) goto LAB_71007d955c;
LAB_71007d9620:
          uVar22 = plVar26[2];
          uVar19 = plVar26[3];
          bVar8 = true;
          if (uVar22 < uVar19) goto LAB_71007d9588;
LAB_71007d9630:
          (**(code **)(*plVar26 + 0x50))(plVar26);
          uVar22 = plVar26[2];
          uVar19 = plVar26[3];
        } while( true );
      }
LAB_71007d9868:
      bVar10 = 0;
      bVar23 = bVar1;
LAB_71007d986c:
      bVar9 = 0;
    }
    else {
      uVar27 = 0;
      bVar10 = bVar8;
    }
  }
  else {
    bVar1 = bVar23;
    if ((bVar9 & 1) == 0) {
LAB_71007d96a4:
      bVar23 = *(byte *)(lVar16 + 0x20);
LAB_71007d96a8:
      uVar27 = 0;
      bVar8 = false;
      bVar6 = local_38 == -1;
      bVar10 = bVar23;
      do {
        bVar23 = bVar1;
        if (((bVar10 & 1) == 0) || (*(byte *)(lVar16 + 0x49) != uVar13)) {
          if ((*(byte *)(lVar16 + 0x48) == uVar13) ||
             (lVar17 = FUN_710080c980(lVar16 + 0x72,uVar13,local_78), lVar17 == 0))
          goto LAB_71007d9868;
          iVar15 = (int)lVar17 - (int)(lVar16 + 0x72);
          if (0xf < iVar15) {
            iVar15 = iVar15 + -6;
          }
          if (uVar27 <= uVar18) {
            iVar25 = iVar25 + 1;
            uVar22 = uVar27 * local_70;
            uVar27 = (long)iVar15 + uVar22;
            bVar8 = CARRY8((long)iVar15,uVar22) || (bool)bVar8 != false;
            goto LAB_71007d9730;
          }
          uVar22 = plVar26[2];
          uVar19 = plVar26[3];
          bVar8 = true;
          if (uVar22 < uVar19) goto LAB_71007d973c;
LAB_71007d9798:
          (**(code **)(*plVar26 + 0x50))(plVar26);
          uVar22 = plVar26[2];
          uVar19 = plVar26[3];
        }
        else {
          if (iVar25 == 0) goto LAB_71007d986c;
          FUN_71007b7300(&local_8,iVar25);
          iVar25 = 0;
LAB_71007d9730:
          uVar22 = plVar26[2];
          uVar19 = plVar26[3];
          if (uVar19 <= uVar22) goto LAB_71007d9798;
LAB_71007d973c:
          uVar22 = uVar22 + 1;
          plVar26[2] = uVar22;
        }
        if ((uVar22 < uVar19) || (iVar15 = (**(code **)(*plVar26 + 0x48))(plVar26), iVar15 != -1)) {
          bVar10 = plVar24 != (long *)0x0 && bVar6;
          bVar7 = bVar6;
          if (plVar24 != (long *)0x0 && bVar6) {
            if ((ulong)plVar24[2] < (ulong)plVar24[3]) goto LAB_71007d9968;
            bVar10 = false;
LAB_71007d97d8:
            iVar15 = (**(code **)(*plVar24 + 0x48))(plVar24);
            bVar7 = iVar15 == -1;
            if (bVar7) {
              plVar24 = (long *)0x0;
            }
          }
          if (bVar7 == (bool)bVar10) goto LAB_71007d9d64;
          if (plVar26 == (long *)0x0) goto LAB_71007d9b68;
          if ((byte *)plVar26[2] < (byte *)plVar26[3]) {
            uVar13 = (uint)*(byte *)plVar26[2];
          }
          else {
            uVar13 = (**(code **)(*plVar26 + 0x48))(plVar26);
            if (uVar13 == 0xffffffff) goto LAB_71007d9b68;
            uVar13 = uVar13 & 0xff;
          }
        }
        else {
          bVar10 = plVar24 != (long *)0x0 && bVar6;
          if (plVar24 != (long *)0x0 && bVar6) {
            plVar26 = (long *)0x0;
            if ((ulong)plVar24[3] <= (ulong)plVar24[2]) goto LAB_71007d97d8;
          }
          else if (local_38 == -1) goto LAB_71007d9d50;
LAB_71007d9b68:
          uVar13 = 0xff;
          plVar26 = (long *)0x0;
        }
        bVar10 = *(byte *)(lVar16 + 0x20);
        iVar15 = -1;
      } while( true );
    }
    uVar27 = 0;
    bVar8 = 0;
    bVar10 = 0;
  }
LAB_71007d9870:
  if (*(long *)(local_8 + -0x18) == 0) {
    if ((iVar25 == 0 & (bVar23 ^ 1)) == 0) {
LAB_71007d9944:
      if ((bVar10 & 1) == 0) {
        if ((bVar8 & 1) == 0) {
          uVar18 = -uVar27;
          if ((bVar5 & 1) == 0) {
            uVar18 = uVar27;
          }
          *param_8 = uVar18;
        }
        else {
          *param_8 = 0xffffffffffffffff;
          *param_7 = 4;
        }
        goto LAB_71007d98a8;
      }
    }
  }
  else {
    FUN_71007b7300(&local_8,iVar25);
    uVar18 = FUN_71007fbd00(*(undefined8 *)(lVar16 + 0x10),*(undefined8 *)(lVar16 + 0x18),&local_8);
    if ((uVar18 & 1) == 0) {
      *param_7 = 4;
      bVar23 = iVar25 == 0 & (bVar23 ^ 1);
    }
    else {
      bVar23 = iVar25 == 0 & (bVar23 ^ 1);
    }
    if ((bVar23 == 0) || (*(long *)(local_8 + -0x18) != 0)) goto LAB_71007d9944;
  }
  *param_8 = 0;
  *param_7 = 4;
LAB_71007d98a8:
  if ((bVar9 & 1) != 0) {
    *param_7 = *param_7 | 2;
  }
  auVar3._8_4_ = iVar15;
  auVar3._0_8_ = plVar26;
  auVar3._12_4_ = uStack_14;
  if (local_8 + -0x18 != &DAT_7100d210d8) {
    piVar20 = (int *)(local_8 + -8);
    do {
      iVar25 = *piVar20;
      cVar2 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar20,0x10);
      if (bVar6) {
        *piVar20 = iVar25 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar25 < 1) {
      local_20 = plVar26;
      local_18 = iVar15;
      thunk_FUN_710081c200(local_8 + -0x18,auStack_10);
    }
  }
  return auVar3;
LAB_71007d9c5c:
  bVar10 = bVar23 & 1;
  bVar9 = bVar4;
  goto LAB_71007d94c0;
LAB_71007d9d50:
  plVar26 = (long *)0x0;
  bVar9 = 1;
  iVar15 = local_38;
  goto LAB_71007d9870;
LAB_71007d9968:
  iVar15 = -1;
  bVar9 = bVar10;
  bVar10 = 0;
  goto LAB_71007d9870;
LAB_71007d9d64:
  iVar15 = -1;
  bVar9 = 1;
  bVar10 = 0;
  goto LAB_71007d9870;
}



// ===== FUN_71007d9dc0 @ 71007d9dc0 (size=92) =====

void FUN_71007d9dc0(void)

{
  uint uVar1;
  long in_x5;
  undefined8 *in_x7;
  undefined8 local_8;
  
  uVar1 = *(uint *)(in_x5 + 0x18);
  *(uint *)(in_x5 + 0x18) = uVar1 & 0xffffffb5 | 8;
  FUN_71007d9340();
  *(uint *)(in_x5 + 0x18) = uVar1;
  *in_x7 = local_8;
  return;
}



// ===== FUN_71007db5c0 @ 71007db5c0 (size=2500) =====

undefined1  [16]
FUN_71007db5c0(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
              undefined4 *param_6,long param_7,ulong param_8,long param_9,uint *param_10)

{
  ulong *puVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  byte bVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  ulong *puVar19;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  bool bVar25;
  ulong uVar26;
  ulong uVar27;
  bool bVar28;
  long *plVar29;
  int local_30;
  uint local_2c;
  long *local_20;
  undefined8 local_18;
  long *local_10;
  uint local_8;
  undefined4 uStack_4;
  ulong *puVar20;
  
  local_8 = (uint)param_3;
  uStack_4 = (undefined4)((ulong)param_3 >> 0x20);
  local_20 = param_4;
  local_18 = param_5;
  local_10 = param_2;
  lVar13 = FUN_71007b00e0(&DAT_7100d21120);
  plVar29 = *(long **)(*(long *)(*(long *)(param_9 + 0xd0) + 8) + lVar13 * 8);
  if (plVar29 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  puVar14 = (ulong *)(&stack0xffffffffffffff10 + param_8 * -0x10);
  bVar5 = FUN_71007d5e00();
  plVar24 = local_20;
  if ((bVar5 & 1) == 0) {
    local_30 = (int)local_18;
    uVar10 = FUN_71007bf500(&local_10);
    plVar23 = local_10;
    local_2c = local_8;
    cVar6 = (**(code **)(*plVar29 + 0x20))(plVar29,uVar10);
    cVar7 = (**(code **)(*plVar29 + 0x10))(plVar29,uVar10);
    if (param_8 != 0) {
      puVar1 = puVar14 + param_8;
      uVar16 = 0;
      uVar21 = 0;
      do {
        while ((uVar27 = uVar21,
               cVar8 = (**(code **)(*plVar29 + 0x20))
                                 (plVar29,**(undefined1 **)(param_7 + uVar27 * 8)), cVar6 != cVar8
               && (cVar8 = (**(code **)(*plVar29 + 0x10))
                                     (plVar29,**(undefined1 **)(param_7 + uVar27 * 8)),
                  cVar7 != cVar8))) {
          uVar21 = uVar27 + 1;
          if (param_8 == uVar27 + 1) goto LAB_71007db778;
        }
        uVar21 = uVar16 + 1;
        uVar15 = FUN_710081ce00(*(undefined8 *)(param_7 + uVar27 * 8));
        puVar1[uVar16] = uVar15;
        puVar14[uVar16] = uVar27;
        uVar16 = uVar21;
        uVar21 = uVar27 + 1;
      } while (param_8 != uVar27 + 1);
LAB_71007db778:
      uVar21 = 0;
      if (1 < uVar16) {
LAB_71007db7a4:
        uVar22 = *puVar1;
        uVar15 = 1;
        uVar26 = uVar22;
        do {
          puVar19 = puVar1 + uVar15;
          uVar15 = uVar15 + 1;
          if (*puVar19 < uVar26) {
            uVar26 = *puVar19;
          }
        } while (uVar15 < uVar16);
        uVar21 = uVar21 + 1;
        if ((ulong)plVar23[2] < (ulong)plVar23[3]) {
          plVar23[2] = plVar23[2] + 1;
        }
        else {
          (**(code **)(*plVar23 + 0x50))(plVar23);
        }
        if (uVar26 == uVar21) {
          local_8 = 0xffffffff;
          uVar15 = (ulong)local_18 >> 0x20;
          local_18 = CONCAT44((int)uVar15,local_30);
          local_20 = plVar24;
          local_10 = plVar23;
          bVar9 = FUN_71007d5e00(&local_10,&local_20);
          plVar24 = local_20;
          iVar12 = (int)local_18;
          local_30 = (int)local_18;
          if ((bVar9 & 1) == 0) {
            bVar4 = bVar9 & 1;
            uVar10 = FUN_71007bf500(&local_10);
            cVar6 = (**(code **)(*plVar29 + 0x20))(plVar29,uVar10);
            uVar10 = FUN_71007bf500(&local_10);
            plVar23 = local_10;
            local_2c = local_8;
            cVar7 = (**(code **)(*plVar29 + 0x10))(plVar29,uVar10);
            uVar15 = 0;
            do {
              if (uVar21 < puVar1[uVar15]) {
                lVar13 = *(long *)(param_7 + puVar14[uVar15] * 8);
                cVar8 = (**(code **)(*plVar29 + 0x20))(plVar29,*(undefined1 *)(lVar13 + uVar21));
                if ((cVar6 == cVar8) ||
                   (cVar8 = (**(code **)(*plVar29 + 0x10))(plVar29,*(undefined1 *)(lVar13 + uVar21))
                   , cVar7 == cVar8)) {
                  bVar4 = 1;
                  bVar9 = 1;
                  break;
                }
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 < uVar16);
          }
          else {
            local_2c = local_8;
            bVar4 = bVar5 & 1;
            plVar23 = local_10;
            bVar9 = bVar5;
          }
          uVar15 = 0;
          do {
            if ((uVar21 == uVar22) == (bool)bVar9) {
              uVar16 = uVar16 - 1;
              puVar14[uVar15] = puVar14[uVar16];
              puVar1[uVar15] = puVar1[uVar16];
              if (uVar16 <= uVar15) goto LAB_71007dbae8;
            }
            else {
              uVar15 = uVar15 + 1;
              if (uVar16 <= uVar15) goto LAB_71007dbae8;
            }
            uVar22 = puVar1[uVar15];
          } while( true );
        }
        if (uVar21 < uVar26) goto LAB_71007db7ec;
        local_2c = 0xffffffff;
        goto LAB_71007db648;
      }
LAB_71007db90c:
      if (uVar16 == 1) {
        FUN_71007d0fa0(plVar23);
        uVar16 = *puVar14;
        uVar21 = uVar21 + 1;
        uVar27 = puVar14[param_8];
        if (uVar21 < uVar27) {
          lVar13 = *(long *)(param_7 + uVar16 * 8);
          bVar4 = local_30 == -1;
LAB_71007dbdb0:
          do {
            if (((ulong)plVar23[2] < (ulong)plVar23[3]) ||
               (iVar12 = (**(code **)(*plVar23 + 0x48))(plVar23), iVar12 != -1)) {
              local_2c = 0xffffffff;
              bVar3 = plVar24 == (long *)0x0 || (bool)bVar4 == false;
              bVar9 = bVar5;
              bVar28 = true;
              bVar25 = (bool)bVar4;
              if (plVar24 != (long *)0x0 && (bool)bVar4 != false) goto LAB_71007dbddc;
            }
            else {
              bVar9 = true;
              plVar23 = (long *)0x0;
              local_2c = 0xffffffff;
LAB_71007dbd00:
              bVar3 = plVar24 == (long *)0x0 || (bool)bVar4 == false;
              bVar28 = (bool)bVar9;
              bVar25 = (bool)bVar4;
              if (plVar24 != (long *)0x0 && (bool)bVar4 != false) {
LAB_71007dbddc:
                bVar4 = bVar5;
                if (((ulong)plVar24[3] <= (ulong)plVar24[2]) &&
                   (iVar12 = (**(code **)(*plVar24 + 0x48))(plVar24), iVar12 == -1)) {
                  plVar24 = (long *)0x0;
                  bVar4 = !bVar3;
                }
              }
            }
            if (bVar9 == bVar4) goto LAB_71007db940;
            cVar6 = (**(code **)(*plVar29 + 0x20))(plVar29,*(undefined1 *)(lVar13 + uVar21));
            uVar18 = local_2c;
            if (plVar23 == (long *)0x0 || bVar28 == false) {
LAB_71007dbd44:
              cVar7 = (**(code **)(*plVar29 + 0x20))(plVar29,uVar18);
              if (cVar6 != cVar7) {
                cVar6 = (**(code **)(*plVar29 + 0x10))(plVar29,*(undefined1 *)(lVar13 + uVar21));
                uVar18 = local_2c & 0xff;
LAB_71007dbd78:
                cVar7 = (**(code **)(*plVar29 + 0x10))(plVar29,uVar18);
                if (cVar6 != cVar7) goto LAB_71007db940;
              }
            }
            else {
              if ((byte *)plVar23[2] < (byte *)plVar23[3]) {
                uVar18 = (uint)*(byte *)plVar23[2];
              }
              else {
                uVar17 = (**(code **)(*plVar23 + 0x48))(plVar23);
                uVar18 = uVar17 & 0xff;
                if (uVar17 == 0xffffffff) {
                  plVar23 = (long *)0x0;
                  uVar18 = 0xff;
                  goto LAB_71007dbd44;
                }
              }
              cVar7 = (**(code **)(*plVar29 + 0x20))(plVar29,uVar18);
              if (cVar6 != cVar7) {
                cVar6 = (**(code **)(*plVar29 + 0x10))(plVar29,*(undefined1 *)(lVar13 + uVar21));
                if ((byte *)plVar23[2] < (byte *)plVar23[3]) {
                  uVar18 = (uint)*(byte *)plVar23[2];
                }
                else {
                  uVar18 = (**(code **)(*plVar23 + 0x48))(plVar23);
                  if (uVar18 == 0xffffffff) {
                    uVar18 = 0xff;
                    plVar23 = (long *)0x0;
                  }
                  else {
                    uVar18 = uVar18 & 0xff;
                  }
                }
                goto LAB_71007dbd78;
              }
            }
            bVar4 = bVar25;
            if ((ulong)plVar23[3] <= (ulong)plVar23[2]) {
              uVar21 = uVar21 + 1;
              (**(code **)(*plVar23 + 0x50))(plVar23);
              if (uVar21 == uVar27) break;
              goto LAB_71007dbdb0;
            }
            uVar21 = uVar21 + 1;
            plVar23[2] = plVar23[2] + 1;
          } while (uVar27 != uVar21);
          local_2c = 0xffffffff;
          *param_6 = (int)uVar16;
          goto LAB_71007db65c;
        }
        local_2c = 0xffffffff;
LAB_71007db940:
        if (uVar27 == uVar21) {
          *param_6 = (int)uVar16;
          goto LAB_71007db65c;
        }
      }
    }
  }
  else {
    local_2c = local_8;
    plVar23 = local_10;
  }
LAB_71007db648:
  *param_10 = *param_10 | 4;
LAB_71007db65c:
  auVar2._8_4_ = local_2c;
  auVar2._0_8_ = plVar23;
  auVar2._12_4_ = uStack_4;
  return auVar2;
LAB_71007dbae8:
  if (bVar4 == 0) {
    if (uVar16 == 2) {
      if ((uVar27 + 1 & 1) != 0) goto LAB_71007db648;
      uVar16 = *puVar14;
      uVar27 = uVar27 + 1 >> 1;
      if (uVar16 < uVar27) {
        if (uVar16 + uVar27 != *(ulong *)(&stack0xffffffffffffff18 + param_8 * -0x10))
        goto LAB_71007db648;
      }
      else {
        if (uVar16 - uVar27 != *(ulong *)(&stack0xffffffffffffff18 + param_8 * -0x10))
        goto LAB_71007db648;
        *puVar14 = uVar16 - uVar27;
        puVar14[param_8] = puVar1[1];
        uVar16 = *puVar14;
      }
    }
    else {
      if (uVar16 != 1) goto LAB_71007db648;
      uVar16 = *puVar14;
    }
    uVar27 = puVar14[param_8];
    if (uVar27 <= uVar21) goto LAB_71007db940;
    lVar13 = *(long *)(param_7 + uVar16 * 8);
    bVar4 = iVar12 == -1;
    bVar9 = local_2c == 0xffffffff;
    if (plVar23 == (long *)0x0 || !(bool)bVar9) goto LAB_71007dbd00;
    goto LAB_71007dbdb0;
  }
  uVar15 = *puVar1;
  if (1 < uVar16) {
    puVar19 = puVar1 + 1;
    do {
      puVar20 = puVar19 + 1;
      if (*puVar19 < uVar15) {
        uVar15 = *puVar19;
      }
      puVar19 = puVar20;
    } while (puVar1 + uVar16 != puVar20);
  }
  if (uVar15 <= uVar21) goto LAB_71007db90c;
  bVar9 = local_2c == 0xffffffff;
  if (plVar23 != (long *)0x0 && (bool)bVar9) {
LAB_71007db7ec:
    bVar9 = bVar5;
    if (((ulong)plVar23[3] <= (ulong)plVar23[2]) &&
       (iVar12 = (**(code **)(*plVar23 + 0x48))(plVar23), iVar12 == -1)) {
      plVar23 = (long *)0x0;
      bVar9 = 1;
    }
    local_2c = 0xffffffff;
    bVar4 = local_30 == -1;
    bVar28 = plVar24 != (long *)0x0 && (bool)bVar4;
    bVar25 = true;
    bVar3 = true;
    if (plVar24 != (long *)0x0 && (bool)bVar4) {
LAB_71007dbb60:
      bVar25 = bVar3;
      bVar4 = bVar5;
      if (((ulong)plVar24[3] <= (ulong)plVar24[2]) &&
         (iVar12 = (**(code **)(*plVar24 + 0x48))(plVar24), iVar12 == -1)) {
        plVar24 = (long *)0x0;
        bVar4 = bVar28;
      }
    }
  }
  else {
    bVar4 = iVar12 == -1;
    bVar28 = plVar24 != (long *)0x0 && (bool)bVar4;
    bVar25 = (bool)bVar9;
    bVar3 = (bool)bVar9;
    if (plVar24 != (long *)0x0 && (bool)bVar4) goto LAB_71007dbb60;
  }
  if (bVar9 == bVar4) goto LAB_71007db90c;
  uVar17 = local_2c & 0xff;
  uVar18 = uVar17;
  if (plVar23 != (long *)0x0 && bVar25) {
    if ((byte *)plVar23[2] < (byte *)plVar23[3]) {
      uVar18 = (uint)*(byte *)plVar23[2];
    }
    else {
      uVar11 = (**(code **)(*plVar23 + 0x48))(plVar23);
      uVar18 = uVar11 & 0xff;
      if (uVar11 == 0xffffffff) {
        uVar18 = 0xff;
        plVar23 = (long *)0x0;
        goto LAB_71007db840;
      }
    }
    cVar6 = (**(code **)(*plVar29 + 0x20))(plVar29,uVar18);
    if ((byte *)plVar23[2] < (byte *)plVar23[3]) {
      uVar17 = (uint)*(byte *)plVar23[2];
    }
    else {
      uVar17 = (**(code **)(*plVar23 + 0x48))(plVar23);
      if (uVar17 == 0xffffffff) {
        uVar17 = 0xff;
        plVar23 = (long *)0x0;
      }
    }
  }
  else {
LAB_71007db840:
    cVar6 = (**(code **)(*plVar29 + 0x20))(plVar29,uVar18);
  }
  cVar7 = (**(code **)(*plVar29 + 0x10))(plVar29,uVar17);
  if (uVar16 == 0) goto LAB_71007db648;
  uVar15 = 0;
  do {
    while( true ) {
      lVar13 = *(long *)(param_7 + puVar14[uVar15] * 8);
      cVar8 = (**(code **)(*plVar29 + 0x20))(plVar29,*(undefined1 *)(lVar13 + uVar21));
      if ((cVar6 != cVar8) &&
         (cVar8 = (**(code **)(*plVar29 + 0x10))(plVar29,*(undefined1 *)(lVar13 + uVar21)),
         cVar7 != cVar8)) break;
      uVar15 = uVar15 + 1;
      if (uVar16 <= uVar15) goto LAB_71007db8f4;
    }
    uVar16 = uVar16 - 1;
    puVar14[uVar15] = puVar14[uVar16];
    puVar1[uVar15] = puVar1[uVar16];
  } while (uVar15 < uVar16);
LAB_71007db8f4:
  if (uVar16 < 2) goto LAB_71007db90c;
  goto LAB_71007db7a4;
}



// ===== FUN_71007dbfa0 @ 71007dbfa0 (size=968) =====

undefined1  [16]
FUN_71007dbfa0(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
              int *param_6,long param_7,long param_8,long param_9,uint *param_10)

{
  int iVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  bool bVar13;
  bool bVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  ulong *puVar20;
  uint uVar21;
  long lVar22;
  long *plVar23;
  long *plVar24;
  long *local_20;
  undefined8 local_18;
  long *local_10;
  uint local_8;
  undefined4 uStack_4;
  
  local_8 = (uint)param_3;
  uStack_4 = (undefined4)((ulong)param_3 >> 0x20);
  local_20 = param_4;
  local_18 = param_5;
  local_10 = param_2;
  lVar9 = FUN_71007b00e0(&DAT_7100d21120);
  plVar19 = *(long **)(*(long *)(*(long *)(param_9 + 0xd0) + 8) + lVar9 * 8);
  if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  lVar9 = -(param_8 * 8 + 0xfU & 0xfffffffffffffff0);
  uVar10 = FUN_71007d5e00(&local_10,&local_20);
  plVar24 = local_20;
  plVar23 = local_10;
  uVar21 = local_8;
  if ((uVar10 & 1) == 0) {
    cVar6 = FUN_71007bf500(&local_10);
    uVar21 = local_8;
    plVar23 = local_10;
    lVar22 = param_8 * 2;
    if (lVar22 != 0) {
      lVar18 = 0;
      uVar10 = 0;
      do {
        while ((**(char **)(param_7 + lVar18 * 8) != cVar6 &&
               (cVar7 = (**(code **)(*plVar19 + 0x10))(plVar19), cVar6 != cVar7))) {
          lVar18 = lVar18 + 1;
          if (lVar18 == lVar22) goto LAB_71007dc2b8;
        }
        *(int *)(&stack0xffffffffffffff60 + uVar10 * 4 + lVar9) = (int)lVar18;
        lVar18 = lVar18 + 1;
        uVar10 = uVar10 + 1;
      } while (lVar18 != lVar22);
LAB_71007dc2b8:
      if (uVar10 != 0) {
        FUN_71007d0fa0(plVar23);
        uVar17 = 0;
        lVar22 = -(uVar10 * 8 + 0xf & 0xfffffffffffffff0);
        puVar20 = (ulong *)(&stack0xffffffffffffff60 + lVar22 + lVar9);
        do {
          uVar12 = FUN_710081ce00(*(undefined8 *)
                                   (param_7 +
                                   (long)*(int *)(&stack0xffffffffffffff60 + uVar17 * 4 + lVar9) * 8
                                   ));
          *(undefined8 *)(&stack0xffffffffffffff60 + uVar17 * 8 + lVar22 + lVar9) = uVar12;
          uVar17 = uVar17 + 1;
        } while (uVar10 != uVar17);
        uVar21 = 0xffffffff;
        uVar10 = 1;
        goto LAB_71007dc02c;
      }
    }
  }
  uVar17 = 0;
  uVar10 = 0;
  puVar20 = (ulong *)0x0;
LAB_71007dc02c:
  bVar4 = (int)local_18 == -1;
  bVar5 = uVar21 == 0xffffffff;
  if (plVar23 != (long *)0x0 && bVar5) goto LAB_71007dc100;
LAB_71007dc050:
  bVar3 = plVar24 == (long *)0x0 || !bVar4;
  bVar13 = bVar4;
  bVar14 = bVar5;
  if (plVar24 != (long *)0x0 && bVar4) goto LAB_71007dc128;
LAB_71007dc064:
  if (bVar5 != bVar13) {
    do {
      if (plVar23 == (long *)0x0 || bVar14 == false) {
        uVar16 = uVar21 & 0xff;
      }
      else if ((byte *)plVar23[2] < (byte *)plVar23[3]) {
        uVar16 = (uint)*(byte *)plVar23[2];
      }
      else {
        uVar16 = (**(code **)(*plVar23 + 0x48))(plVar23);
        if (uVar16 == 0xffffffff) {
          uVar16 = 0xff;
          plVar23 = (long *)0x0;
        }
        else {
          uVar16 = uVar16 & 0xff;
        }
      }
      if (uVar17 == 0) goto LAB_71007dc160;
      uVar11 = 0;
      uVar15 = 0;
      do {
        while (puVar20[uVar11] <= uVar10) {
          uVar15 = uVar15 + 1;
LAB_71007dc094:
          uVar11 = uVar11 + 1;
          if (uVar17 <= uVar11) goto LAB_71007dc0e0;
        }
        if (*(byte *)(*(long *)(param_7 +
                               (long)*(int *)(&stack0xffffffffffffff60 + uVar11 * 4 + lVar9) * 8) +
                     uVar10) == uVar16) goto LAB_71007dc094;
        uVar17 = uVar17 - 1;
        *(undefined4 *)(&stack0xffffffffffffff60 + uVar11 * 4 + lVar9) =
             *(undefined4 *)(&stack0xffffffffffffff60 + uVar17 * 4 + lVar9);
        puVar20[uVar11] = puVar20[uVar17];
      } while (uVar11 < uVar17);
LAB_71007dc0e0:
      if (uVar17 == uVar15) break;
      if ((ulong)plVar23[2] < (ulong)plVar23[3]) {
        uVar10 = uVar10 + 1;
        plVar23[2] = plVar23[2] + 1;
LAB_71007dc100:
        if ((ulong)plVar23[3] <= (ulong)plVar23[2]) {
LAB_71007dc1dc:
          iVar8 = (**(code **)(*plVar23 + 0x48))(plVar23);
          if (iVar8 == -1) {
            bVar5 = true;
            plVar23 = (long *)0x0;
            uVar21 = 0xffffffff;
            goto LAB_71007dc050;
          }
        }
      }
      else {
        uVar10 = uVar10 + 1;
        (**(code **)(*plVar23 + 0x50))(plVar23);
        if ((ulong)plVar23[3] <= (ulong)plVar23[2]) goto LAB_71007dc1dc;
      }
      bVar14 = true;
      bVar3 = plVar24 == (long *)0x0 || !bVar4;
      uVar21 = 0xffffffff;
      bVar5 = false;
      bVar13 = bVar4;
      if (bVar3) goto LAB_71007dc064;
LAB_71007dc128:
      if ((ulong)plVar24[3] <= (ulong)plVar24[2]) goto LAB_71007dc308;
      if (bVar5 == false) break;
    } while( true );
  }
  if (uVar17 == 1) {
    uVar17 = *puVar20;
joined_r0x0071007dc224:
    if (uVar10 == uVar17) {
LAB_71007dc228:
      iVar1 = *(int *)(&stack0xffffffffffffff60 + lVar9);
      iVar8 = iVar1 - (int)param_8;
      if (iVar1 < (int)param_8) {
        iVar8 = iVar1;
      }
      *param_6 = iVar8;
      goto LAB_71007dc174;
    }
  }
  else if (uVar17 == 2) {
    if (uVar10 != *puVar20) {
      uVar17 = puVar20[1];
      goto joined_r0x0071007dc224;
    }
    goto LAB_71007dc228;
  }
LAB_71007dc160:
  *param_10 = *param_10 | 4;
LAB_71007dc174:
  auVar2._8_4_ = uVar21;
  auVar2._0_8_ = plVar23;
  auVar2._12_4_ = uStack_4;
  return auVar2;
LAB_71007dc308:
  iVar8 = (**(code **)(*plVar24 + 0x48))(plVar24);
  if (iVar8 == -1) {
    plVar24 = (long *)0x0;
  }
  bVar13 = iVar8 == -1 && !bVar3;
  goto LAB_71007dc064;
}



// ===== FUN_71007dc7c0 @ 71007dc7c0 (size=4216) =====

undefined1  [16]
FUN_71007dc7c0(undefined8 param_1,long *param_2,ulong param_3,long *param_4,undefined8 param_5,
              long param_6,uint *param_7,uint *param_8,long param_9,uint *param_10)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  undefined4 uVar8;
  uint uVar11;
  char cVar6;
  char cVar7;
  int iVar9;
  uint uVar10;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined1 *puVar16;
  bool bVar17;
  ulong uVar18;
  ulong uVar19;
  byte *pbVar20;
  long lVar21;
  char *pcVar22;
  uint uVar23;
  undefined *puVar24;
  ulong uVar25;
  long *plVar26;
  bool bVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [12];
  long *local_180;
  undefined8 local_178;
  undefined1 local_170 [12];
  undefined4 uStack_164;
  uint local_158;
  uint local_154;
  undefined1 auStack_150 [16];
  char *local_140;
  char *pcStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
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
  
  uVar25 = param_3 & 0xffffffff;
  local_170._8_4_ = (undefined4)param_3;
  uStack_164 = (undefined4)(param_3 >> 0x20);
  local_180 = param_4;
  local_178 = param_5;
  local_170._0_8_ = param_2;
  uVar12 = FUN_71007b00e0(&DAT_7100d212a8);
  if (((uVar12 < *(ulong *)(*(long *)(param_6 + 0xd0) + 0x10)) &&
      (lVar13 = *(long *)(*(long *)(*(long *)(param_6 + 0xd0) + 8) + uVar12 * 8), lVar13 != 0)) &&
     (lVar13 = FUN_71007f9ea0(lVar13,&PTR_PTR_FUN_7100aec798,&PTR_PTR_FUN_7100aee1a8,0), lVar13 != 0
     )) {
    lVar14 = FUN_71007b00e0(&DAT_7100d21120);
    plVar26 = *(long **)(*(long *)(*(long *)(param_6 + 0xd0) + 8) + lVar14 * 8);
    if (plVar26 != (long *)0x0) {
      uVar15 = FUN_710081ce00(param_9);
      uVar12 = 0;
      local_158 = 0;
LAB_71007dc890:
      local_170._8_4_ = (undefined4)uVar25;
      local_180 = param_4;
      local_170._0_8_ = param_2;
      bVar5 = FUN_71007d5e00(local_170,&local_180);
      uVar8 = local_170._8_4_;
      param_2 = (long *)local_170._0_8_;
      param_4 = local_180;
      bVar1 = (bool)(uVar12 < uVar15 & (bVar5 ^ 1));
      if ((uVar12 < uVar15 & (bVar5 ^ 1)) == 0) {
        if (local_158 != 0 || uVar12 != uVar15) {
LAB_71007dcad0:
          *param_7 = *param_7 | 4;
        }
        auVar28._8_4_ = local_170._8_4_;
        auVar28._0_8_ = local_170._0_8_;
        auVar28._12_4_ = uStack_164;
        return auVar28;
      }
      if (local_158 != 0) goto LAB_71007dcad0;
      uVar18 = (ulong)*(byte *)(param_9 + uVar12);
      uVar25 = (ulong)(uint)local_170._8_4_;
      bVar5 = *(byte *)((long)plVar26 + uVar18 + 0x139);
      uVar10 = (uint)bVar5;
      if (bVar5 != 0) {
LAB_71007dc910:
        if (uVar10 != 0x25) goto LAB_71007dc918;
        lVar14 = uVar12 + 1;
        cVar6 = FUN_71007d2200(plVar26,*(undefined1 *)(param_9 + lVar14),0);
        local_154 = 0;
        if (cVar6 == 'E' || cVar6 == 'O') {
          lVar14 = uVar12 + 2;
          cVar6 = FUN_71007d2200(plVar26,*(undefined1 *)(param_9 + lVar14),0);
        }
        switch(cVar6) {
        case '%':
          cVar6 = FUN_71007bf500(local_170);
          param_2 = (long *)local_170._0_8_;
          uVar25 = (ulong)(uint)local_170._8_4_;
          if ((char)plVar26[7] == '\0') {
            cVar7 = FUN_71007d0fe0(plVar26,0x25);
          }
          else {
            cVar7 = *(char *)((long)plVar26 + 0x5e);
          }
          if (cVar6 != cVar7) goto switchD_71007dcbd0_caseD_26;
          uVar25 = 0xffffffff;
          FUN_71007d0fa0(param_2);
          break;
        default:
switchD_71007dcbd0_caseD_26:
          local_158 = local_158 | 4;
          break;
        case 'A':
        case 'a':
          lVar21 = *(long *)(lVar13 + 0x10);
          uStack_e8 = *(undefined8 *)(lVar21 + 0xa0);
          local_f0 = *(undefined8 *)(lVar21 + 0x98);
          uStack_d8 = *(undefined8 *)(lVar21 + 0xb0);
          uStack_e0 = *(undefined8 *)(lVar21 + 0xa8);
          local_d0 = *(undefined8 *)(lVar21 + 0xb8);
          uStack_c8 = *(undefined8 *)(lVar21 + 0xc0);
          uStack_128 = *(undefined8 *)(lVar21 + 0x60);
          local_130 = *(undefined8 *)(lVar21 + 0x58);
          uStack_118 = *(undefined8 *)(lVar21 + 0x70);
          uStack_120 = *(undefined8 *)(lVar21 + 0x68);
          uStack_108 = *(undefined8 *)(lVar21 + 0x80);
          local_110 = *(undefined8 *)(lVar21 + 0x78);
          uStack_f8 = *(undefined8 *)(lVar21 + 0x90);
          uStack_100 = *(undefined8 *)(lVar21 + 0x88);
          auVar28 = FUN_71007db5c0(param_1,local_170._0_8_,CONCAT44(uStack_164,local_170._8_4_),
                                   local_180,local_178,&local_154,&local_130,0xe,param_6,&local_158)
          ;
          param_2 = auVar28._0_8_;
          uVar25 = auVar28._8_8_ & 0xffffffff;
          if (local_158 == 0) {
            uVar10 = (int)local_154 % 7;
LAB_71007dce74:
            param_8[6] = uVar10;
            *param_10 = *param_10 | 2;
          }
          break;
        case 'B':
        case 'b':
        case 'h':
          lVar21 = *(long *)(lVar13 + 0x10);
          uStack_78 = *(undefined8 *)(lVar21 + 0x110);
          local_80 = *(undefined8 *)(lVar21 + 0x108);
          uStack_68 = *(undefined8 *)(lVar21 + 0x120);
          uStack_70 = *(undefined8 *)(lVar21 + 0x118);
          uStack_58 = *(undefined8 *)(lVar21 + 0x130);
          local_60 = *(undefined8 *)(lVar21 + 0x128);
          uStack_48 = *(undefined8 *)(lVar21 + 0x140);
          uStack_50 = *(undefined8 *)(lVar21 + 0x138);
          uStack_38 = *(undefined8 *)(lVar21 + 0x150);
          local_40 = *(undefined8 *)(lVar21 + 0x148);
          uStack_28 = *(undefined8 *)(lVar21 + 0x160);
          uStack_30 = *(undefined8 *)(lVar21 + 0x158);
          uStack_18 = *(undefined8 *)(lVar21 + 0x170);
          local_20 = *(undefined8 *)(lVar21 + 0x168);
          uStack_10 = *(undefined8 *)(lVar21 + 0x178);
          uStack_8 = *(undefined8 *)(lVar21 + 0x180);
          uStack_b8 = *(undefined8 *)(lVar21 + 0xd0);
          local_c0 = *(undefined8 *)(lVar21 + 200);
          uStack_a8 = *(undefined8 *)(lVar21 + 0xe0);
          uStack_b0 = *(undefined8 *)(lVar21 + 0xd8);
          uStack_98 = *(undefined8 *)(lVar21 + 0xf0);
          local_a0 = *(undefined8 *)(lVar21 + 0xe8);
          uStack_88 = *(undefined8 *)(lVar21 + 0x100);
          uStack_90 = *(undefined8 *)(lVar21 + 0xf8);
          auVar28 = FUN_71007db5c0(param_1,local_170._0_8_,CONCAT44(uStack_164,local_170._8_4_),
                                   local_180,local_178,&local_154,&local_c0,0x18,param_6,&local_158)
          ;
          uVar25 = auVar28._8_8_ & 0xffffffff;
          param_2 = auVar28._0_8_;
          if (local_158 == 0) {
            param_8[4] = (int)local_154 % 0xc;
            *(ushort *)param_10 = (ushort)*param_10 | 0x408;
          }
          break;
        case 'C':
          auVar28 = FUN_71007d3300(param_1,local_170._0_8_,CONCAT44(uStack_164,local_170._8_4_),
                                   local_180,local_178,&local_154,0,99,2,param_6,&local_158);
          param_2 = auVar28._0_8_;
          uVar25 = auVar28._8_8_ & 0xffffffff;
          if (local_158 == 0) {
            param_10[1] = local_154;
            *(ushort *)param_10 = (ushort)*param_10 | 0x480;
          }
          break;
        case 'D':
          puVar16 = auStack_150;
          FUN_71007d1040(plVar26,"%m/%d/%y",&DAT_7100856159,puVar16);
          goto LAB_71007dd030;
        case 'H':
          auVar28 = FUN_71007d3300(param_1,local_170._0_8_,CONCAT44(uStack_164,local_170._8_4_),
                                   local_180,local_178,&local_154,0,0x17,2,param_6,&local_158);
          param_2 = auVar28._0_8_;
          uVar25 = auVar28._8_8_ & 0xffffffff;
          if (local_158 == 0) {
            param_8[2] = local_154;
            *param_10 = *param_10 & 0xfffffffe;
          }
          break;
        case 'I':
          auVar28 = FUN_71007d3300(param_1,local_170._0_8_,CONCAT44(uStack_164,local_170._8_4_),
                                   local_180,local_178,&local_154,1,0xc,2,param_6,&local_158);
          param_2 = auVar28._0_8_;
          uVar25 = auVar28._8_8_ & 0xffffffff;
          if (local_158 == 0) {
            param_8[2] = (int)local_154 % 0xc;
            *param_10 = *param_10 | 1;
          }
          break;
        case 'M':
          auVar28 = FUN_71007d3300(param_1,local_170._0_8_,CONCAT44(uStack_164,local_170._8_4_),
                                   local_180,local_178,&local_154,0,0x3b,2,param_6,&local_158);
          param_2 = auVar28._0_8_;
          uVar25 = auVar28._8_8_ & 0xffffffff;
          if (local_158 == 0) {
            param_8[1] = local_154;
          }
          break;
        case 'R':
          puVar24 = &DAT_7100856166;
          pcVar22 = "%H:%M";
          goto LAB_71007dcf7c;
        case 'S':
          auVar28 = FUN_71007d3300(param_1,local_170._0_8_,CONCAT44(uStack_164,local_170._8_4_),
                                   local_180,local_178,&local_154,0,0x3d,2,param_6,&local_158);
          param_2 = auVar28._0_8_;
          uVar25 = auVar28._8_8_ & 0xffffffff;
          if (local_158 == 0) {
            *param_8 = local_154;
          }
          break;
        case 'T':
          puVar24 = &DAT_7100856171;
          pcVar22 = "%H:%M:%S";
LAB_71007dcf7c:
          puVar16 = auStack_150;
          FUN_71007d1040(plVar26,pcVar22,puVar24,auStack_150);
          goto LAB_71007dcf8c;
        case 'U':
          auVar28 = FUN_71007d3300(param_1,local_170._0_8_,CONCAT44(uStack_164,local_170._8_4_),
                                   local_180,local_178,&local_154,0,0x35,2,param_6,&local_158);
          param_2 = auVar28._0_8_;
          uVar25 = auVar28._8_8_ & 0xffffffff;
          if (local_158 == 0) {
            uVar23 = 0xffdf;
            uVar10 = *param_10;
            uVar11 = (local_154 & 0x3f) << 0x10 | 0x20;
LAB_71007dd47c:
            *param_10 = uVar11 | uVar10 & (uVar23 | 0xffc00000);
          }
          break;
        case 'W':
          auVar28 = FUN_71007d3300(param_1,local_170._0_8_,CONCAT44(uStack_164,local_170._8_4_),
                                   local_180,local_178,&local_154,0,0x35,2,param_6,&local_158);
          param_2 = auVar28._0_8_;
          uVar25 = auVar28._8_8_ & 0xffffffff;
          if (local_158 == 0) {
            uVar23 = 0xffbf;
            uVar10 = *param_10;
            uVar11 = (local_154 & 0x3f) << 0x10 | 0x40;
            goto LAB_71007dd47c;
          }
          break;
        case 'X':
          puVar16 = *(undefined1 **)(*(long *)(lVar13 + 0x10) + 0x20);
          goto LAB_71007dcf8c;
        case 'Y':
          auVar28 = FUN_71007d3300(param_1,local_170._0_8_,CONCAT44(uStack_164,local_170._8_4_),
                                   local_180,local_178,&local_154,0,9999,4,param_6,&local_158);
          param_2 = auVar28._0_8_;
          uVar25 = auVar28._8_8_ & 0xffffffff;
          if (local_158 == 0) {
            param_8[5] = local_154 - 0x76c;
            *(byte *)((long)param_10 + 1) = *(byte *)((long)param_10 + 1) & 0xf9 | 4;
          }
          break;
        case 'Z':
          uVar10 = FUN_71007bf500(local_170);
          if ((*(byte *)(plVar26[6] + (long)(int)(uVar10 & 0xff)) & 1) == 0) {
            local_158 = local_158 | 4;
            uVar25 = (ulong)(uint)local_170._8_4_;
            param_2 = (long *)local_170._0_8_;
          }
          else {
            local_170 = FUN_71007db5c0(param_1,local_170._0_8_,CONCAT44(uStack_164,local_170._8_4_),
                                       local_180,local_178,&local_c0,&PTR_DAT_7100af4818,0xe,param_6
                                       ,&local_158);
            uVar12 = FUN_71007d5e00(local_170,&local_180);
            param_4 = local_180;
            uVar25 = (ulong)(uint)local_170._8_4_;
            param_2 = (long *)local_170._0_8_;
            if (((uVar12 & 1) == 0) && (local_158 == 0 && (int)local_c0 == 0)) {
              cVar6 = FUN_71007bf500(local_170);
              auVar29 = local_170;
              if ((char)plVar26[7] == '\0') {
                cVar7 = FUN_71007d0fe0(plVar26,0x2d);
              }
              else {
                cVar7 = *(char *)((long)plVar26 + 0x66);
              }
              if (cVar6 != cVar7) {
                cVar6 = FUN_71007bf500(local_170);
                auVar29 = local_170;
                param_2 = (long *)local_170._0_8_;
                uVar25 = (ulong)(uint)local_170._8_4_;
                if ((char)plVar26[7] == '\0') {
                  cVar7 = FUN_71007d0fe0(plVar26,0x2b);
                }
                else {
                  cVar7 = *(char *)((long)plVar26 + 100);
                }
                if (cVar6 != cVar7) break;
              }
              local_170 = auVar29;
              auVar29 = FUN_71007d3300(param_1,auVar29._0_8_,CONCAT44(uStack_164,auVar29._8_4_),
                                       local_180,local_178,&local_c0,0,0x17,2,param_6,&local_158);
              local_170 = auVar29;
              auVar28 = FUN_71007d3300(param_1,auVar29._0_8_,CONCAT44(uStack_164,auVar29._8_4_),
                                       local_180,local_178,&local_c0,0,0x3b,2,param_6,&local_158);
              uVar25 = auVar28._8_8_ & 0xffffffff;
              param_2 = auVar28._0_8_;
            }
          }
          break;
        case 'c':
          puVar16 = *(undefined1 **)(*(long *)(lVar13 + 0x10) + 0x30);
LAB_71007dd030:
          auVar28 = FUN_71007dc7c0(param_1,local_170._0_8_,CONCAT44(uStack_164,local_170._8_4_),
                                   local_180,local_178,param_6,&local_158,param_8,puVar16,param_10);
          uVar25 = auVar28._8_8_ & 0xffffffff;
          param_2 = auVar28._0_8_;
          if (local_158 == 0) {
            *param_10 = *param_10 | 0x400;
          }
          break;
        case 'd':
        case 'e':
          uVar10 = FUN_71007bf500(local_170);
          if ((*(byte *)(plVar26[6] + (long)(int)(uVar10 & 0xff)) >> 3 & 1) != 0) {
            FUN_71007d0fa0(local_170._0_8_);
            local_170._8_4_ = 0xffffffff;
          }
          auVar28 = FUN_71007d3300(param_1,local_170._0_8_,CONCAT44(uStack_164,local_170._8_4_),
                                   local_180,local_178,&local_154,1,0x1f,2,param_6,&local_158);
          uVar25 = auVar28._8_8_ & 0xffffffff;
          param_2 = auVar28._0_8_;
          if (local_158 == 0) {
            param_8[3] = local_154;
            *(ushort *)param_10 = (ushort)*param_10 | 0x410;
          }
          break;
        case 'j':
          auVar28 = FUN_71007d3300(param_1,local_170._0_8_,CONCAT44(uStack_164,local_170._8_4_),
                                   local_180,local_178,&local_154,1,0x16e,3,param_6,&local_158);
          uVar25 = auVar28._8_8_ & 0xffffffff;
          param_2 = auVar28._0_8_;
          if (local_158 == 0) {
            param_8[7] = local_154 - 1;
            *param_10 = *param_10 | 4;
          }
          break;
        case 'm':
          auVar28 = FUN_71007d3300(param_1,local_170._0_8_,CONCAT44(uStack_164,local_170._8_4_),
                                   local_180,local_178,&local_154,1,0xc,2,param_6,&local_158);
          uVar25 = auVar28._8_8_ & 0xffffffff;
          param_2 = auVar28._0_8_;
          if (local_158 == 0) {
            param_8[4] = local_154 - 1;
            *param_10 = *param_10 | 8;
          }
          break;
        case 'n':
        case 't':
          while( true ) {
            local_170._8_4_ = (undefined4)uVar25;
            local_180 = param_4;
            local_170._0_8_ = param_2;
            uVar12 = FUN_71007d5e00(local_170,&local_180);
            param_4 = local_180;
            if ((uVar12 & 1) != 0) break;
            uVar10 = FUN_71007bf500(local_170);
            param_2 = (long *)local_170._0_8_;
            if ((*(byte *)(plVar26[6] + (long)(int)(uVar10 & 0xff)) >> 3 & 1) == 0) {
              uVar25 = (ulong)(uint)local_170._8_4_;
              goto LAB_71007dcb4c;
            }
            uVar25 = 0xffffffff;
            FUN_71007d0fa0(local_170._0_8_);
          }
          uVar25 = (ulong)(uint)local_170._8_4_;
          param_2 = (long *)local_170._0_8_;
          break;
        case 'p':
          local_140 = *(char **)(*(long *)(lVar13 + 0x10) + 0x40);
          pcStack_138 = *(char **)(*(long *)(lVar13 + 0x10) + 0x48);
          if ((*local_140 != '\0') && (*pcStack_138 != '\0')) {
            auVar28 = FUN_71007db5c0(param_1,local_170._0_8_,CONCAT44(uStack_164,local_170._8_4_),
                                     local_180,local_178,&local_154,&local_140,2,param_6,&local_158)
            ;
            param_2 = auVar28._0_8_;
            uVar25 = auVar28._8_8_ & 0xffffffff;
            if ((local_158 == 0) && (local_154 != 0)) {
              *param_10 = *param_10 | 0x100;
            }
          }
          break;
        case 'r':
          puVar16 = *(undefined1 **)(*(long *)(lVar13 + 0x10) + 0x50);
          goto LAB_71007dcf8c;
        case 'w':
          auVar28 = FUN_71007d3300(param_1,local_170._0_8_,CONCAT44(uStack_164,local_170._8_4_),
                                   local_180,local_178,&local_154,0,6,1,param_6,&local_158);
          param_2 = auVar28._0_8_;
          uVar25 = auVar28._8_8_ & 0xffffffff;
          uVar10 = local_154;
          if (local_158 == 0) goto LAB_71007dce74;
          break;
        case 'x':
          puVar16 = *(undefined1 **)(*(long *)(lVar13 + 0x10) + 0x10);
LAB_71007dcf8c:
          auVar28 = FUN_71007dc7c0(param_1,local_170._0_8_,CONCAT44(uStack_164,local_170._8_4_),
                                   local_180,local_178,param_6,&local_158,param_8,puVar16,param_10);
          uVar25 = auVar28._8_8_ & 0xffffffff;
          param_2 = auVar28._0_8_;
          break;
        case 'y':
          auVar28 = FUN_71007d3300(param_1,local_170._0_8_,CONCAT44(uStack_164,local_170._8_4_),
                                   local_180,local_178,&local_154,0,99,2,param_6,&local_158);
          local_170._0_8_ = auVar28._0_8_;
          uVar25 = auVar28._8_8_ & 0xffffffff;
          param_2 = (long *)local_170._0_8_;
          if (local_158 == 0) {
            local_170._8_4_ = auVar28._8_4_;
            *(byte *)((long)param_10 + 1) = *(byte *)((long)param_10 + 1) | 6;
            uVar12 = FUN_71007d5e00(local_170,&local_180);
            param_4 = local_180;
            param_2 = (long *)local_170._0_8_;
            uVar10 = local_170._8_4_;
            if ((uVar12 & 1) == 0) {
              uVar8 = FUN_71007bf500(local_170);
              uVar10 = local_170._8_4_;
              param_2 = (long *)local_170._0_8_;
              uVar11 = FUN_71007d2200(plVar26,uVar8,0x2a);
              uVar11 = (uVar11 & 0xff) - 0x30;
              if (9 < (uVar11 & 0xff)) goto LAB_71007dd1bc;
              FUN_71007d0fa0(param_2);
              local_154 = uVar11 + local_154 * 10;
              local_170._8_4_ = 0xffffffff;
              uVar12 = FUN_71007d5e00(local_170,&local_180);
              param_4 = local_180;
              if ((uVar12 & 1) == 0) {
                uVar8 = FUN_71007bf500(local_170);
                param_2 = (long *)local_170._0_8_;
                uVar25 = (ulong)(uint)local_170._8_4_;
                uVar10 = FUN_71007d2200(plVar26,uVar8,0x2a);
                uVar10 = (uVar10 & 0xff) - 0x30;
                if ((uVar10 & 0xff) < 10) {
                  FUN_71007d0fa0(param_2);
                  uVar25 = 0xffffffff;
                  local_154 = uVar10 + local_154 * 10;
                }
              }
              else {
                uVar25 = (ulong)(uint)local_170._8_4_;
                param_2 = (long *)local_170._0_8_;
              }
              *param_10 = *param_10 & 0xfffffdff;
              uVar10 = local_154 - 0x76c;
            }
            else {
LAB_71007dd1bc:
              uVar25 = (ulong)uVar10;
              uVar10 = local_154 + 100;
              if (0x44 < (int)local_154) {
                uVar10 = local_154;
              }
            }
            param_8[5] = uVar10;
          }
        }
LAB_71007dcb4c:
        uVar12 = lVar14 + 1;
        goto LAB_71007dc890;
      }
      uVar19 = uVar18;
      if (*(code **)(*plVar26 + 0x40) != (code *)&LAB_71000a0220) {
        uVar10 = (**(code **)(*plVar26 + 0x40))(plVar26,uVar18,0);
        uVar19 = (ulong)(uVar10 & 0xff);
      }
      uVar10 = (uint)uVar19;
      if (uVar10 != 0) {
        *(char *)((long)plVar26 + uVar18 + 0x139) = (char)uVar19;
        goto LAB_71007dc910;
      }
LAB_71007dc918:
      if ((*(byte *)(plVar26[6] + (ulong)*(byte *)(param_9 + uVar12)) >> 3 & 1) != 0) {
        bVar2 = (int)local_178 == -1;
        bVar3 = uVar8 == 0xffffffff;
        bVar17 = bVar3;
        if (param_2 != (long *)0x0 && bVar3) goto LAB_71007dca70;
        do {
          while( true ) {
            uVar10 = (uint)uVar25;
            bVar4 = param_4 != (long *)0x0;
            bVar27 = bVar2;
            if (bVar4 && bVar2) {
              if ((ulong)param_4[2] < (ulong)param_4[3]) {
                bVar27 = false;
              }
              else {
                iVar9 = (**(code **)(*param_4 + 0x48))(param_4);
                if (iVar9 == -1) {
                  param_4 = (long *)0x0;
                  bVar27 = bVar4 && bVar2;
                }
                else {
                  bVar27 = false;
                }
              }
            }
            if (bVar17 == bVar27) goto LAB_71007dc9bc;
            if (param_2 != (long *)0x0 && bVar3 != false) break;
LAB_71007dca4c:
            if ((*(byte *)(plVar26[6] + (long)(int)(uVar10 & 0xff)) >> 3 & 1) == 0)
            goto LAB_71007dc9bc;
            pbVar20 = (byte *)param_2[2];
            if (pbVar20 < (byte *)param_2[3]) goto LAB_71007dca68;
            (**(code **)(*param_2 + 0x50))(param_2);
            if ((ulong)param_2[3] <= (ulong)param_2[2]) goto LAB_71007dcb80;
LAB_71007dca7c:
            uVar25 = 0xffffffff;
            bVar3 = bVar1;
            bVar17 = false;
          }
          pbVar20 = (byte *)param_2[2];
          if ((byte *)param_2[3] <= pbVar20) {
            uVar10 = (**(code **)(*param_2 + 0x48))(param_2);
            if (uVar10 == 0xffffffff) {
              param_2 = (long *)0x0;
            }
            goto LAB_71007dca4c;
          }
          if ((*(byte *)(plVar26[6] + (ulong)*pbVar20) >> 3 & 1) == 0) goto code_r0x0071007dcabc;
LAB_71007dca68:
          param_2[2] = (long)(pbVar20 + 1);
LAB_71007dca70:
          if ((ulong)param_2[2] < (ulong)param_2[3]) goto LAB_71007dca7c;
LAB_71007dcb80:
          uVar18 = (**(code **)(*param_2 + 0x48))(param_2);
          uVar25 = uVar18 & 0xffffffff;
          if ((int)uVar18 != -1) goto LAB_71007dca7c;
          param_2 = (long *)0x0;
          bVar3 = bVar1;
          bVar17 = bVar1;
        } while( true );
      }
      cVar6 = (**(code **)(*plVar26 + 0x20))(plVar26);
      uVar8 = FUN_71007bf500(local_170);
      param_2 = (long *)local_170._0_8_;
      cVar7 = (**(code **)(*plVar26 + 0x20))(plVar26,uVar8);
      if (cVar6 != cVar7) {
        cVar6 = (**(code **)(*plVar26 + 0x10))(plVar26,*(byte *)(param_9 + uVar12));
        uVar8 = FUN_71007bf500(local_170);
        param_2 = (long *)local_170._0_8_;
        uVar25 = (ulong)(uint)local_170._8_4_;
        cVar7 = (**(code **)(*plVar26 + 0x10))(plVar26,uVar8);
        if (cVar6 != cVar7) {
          local_158 = local_158 | 4;
LAB_71007dc9bc:
          uVar12 = uVar12 + 1;
          goto LAB_71007dc890;
        }
      }
      uVar12 = uVar12 + 1;
      uVar25 = 0xffffffff;
      FUN_71007d0fa0(param_2);
      goto LAB_71007dc890;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003a84();
code_r0x0071007dcabc:
  uVar12 = uVar12 + 1;
  goto LAB_71007dc890;
}



// ===== FUN_71007ddb80 @ 71007ddb80 (size=3496) =====

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16]
FUN_71007ddb80(undefined8 param_1,long *param_2,ulong param_3,long *param_4,ulong param_5,
              long param_6,uint *param_7,undefined8 param_8)

{
  undefined1 auVar1 [16];
  bool bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  char *pcVar18;
  byte *pbVar19;
  ulong uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  int iVar26;
  long lVar27;
  long lVar28;
  long **local_b0;
  byte *local_a8;
  int local_9c;
  ulong local_90;
  long **local_80;
  int local_60;
  uint local_48;
  long *local_40;
  ulong local_38;
  long *local_30;
  uint local_28;
  undefined4 uStack_24;
  undefined4 local_18;
  undefined1 *local_10;
  char *local_8;
  
  uVar24 = param_3 & 0xffffffff;
  uVar25 = param_5 & 0xffffffff;
  local_28 = (uint)param_3;
  uStack_24 = (undefined4)(param_3 >> 0x20);
  local_40 = param_4;
  local_38 = param_5;
  local_30 = param_2;
  lVar16 = FUN_71007b00e0(&DAT_7100d21120);
  lVar16 = *(long *)(*(long *)(*(long *)(param_6 + 0xd0) + 8) + lVar16 * 8);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  lVar17 = FUN_71007b00e0(&DAT_7100d212b8);
  lVar28 = *(long *)(*(long *)(param_6 + 0xd0) + 0x18);
  lVar27 = *(long *)(lVar28 + lVar17 * 8);
  if (lVar27 == 0) {
    puVar21 = (undefined8 *)FUN_71007af5c0(0x70);
    *(undefined4 *)(puVar21 + 1) = 0;
    puVar21[2] = 0;
    puVar21[3] = 0;
    *puVar21 = &PTR_FUN_7100aee768;
    *(undefined2 *)(puVar21 + 4) = 0;
    *(undefined1 *)((long)puVar21 + 0x22) = 0;
    puVar21[5] = 0;
    puVar21[6] = 0;
    puVar21[7] = 0;
    puVar21[8] = 0;
    puVar21[9] = 0;
    puVar21[10] = 0;
    *(undefined4 *)(puVar21 + 0xb) = 0;
    *(undefined8 *)((long)puVar21 + 0x5c) = 0;
    *(undefined1 *)((long)puVar21 + 0x6f) = 0;
    FUN_71007d2800(puVar21,param_6 + 0xd0);
    FUN_71007b05e0(*(undefined8 *)(param_6 + 0xd0),puVar21,lVar17);
    lVar27 = *(long *)(lVar28 + lVar17 * 8);
  }
  if (*(long *)(lVar27 + 0x40) == 0) {
    local_48 = 0;
  }
  else {
    local_48 = (uint)(*(long *)(lVar27 + 0x50) != 0);
  }
  local_10 = &DAT_7100d210f0;
  if ((*(byte *)(lVar27 + 0x20) & 1) != 0) {
    FUN_71007b6ec0(&local_10,0x20);
  }
  local_8 = &DAT_7100d210f0;
  FUN_71007b6ec0(&local_8,0x20);
  bVar3 = 0;
  local_9c = 0;
  local_60 = 0;
  bVar2 = false;
  iVar12 = 0;
  local_18 = *(uint *)(lVar27 + 0x60);
  local_a8 = (byte *)&local_18;
  local_90 = 0;
  uVar11 = local_18 & 0xff;
  bVar4 = uVar11 == 2;
  if (bVar4) goto LAB_71007de0a4;
LAB_71007ddc98:
  iVar14 = (int)uVar25;
  uVar15 = (uint)uVar24;
  if (1 < uVar11 && !bVar4) {
    if (uVar11 != 3) {
      if (uVar11 != 4) goto LAB_71007de50c;
      bVar4 = uVar15 == 0xffffffff;
      iVar26 = iVar12;
      if (param_2 != (long *)0x0 && bVar4) goto LAB_71007dde88;
LAB_71007dddc8:
      bVar6 = iVar14 == -1;
      bVar5 = param_4 != (long *)0x0 && bVar6;
      bVar7 = bVar4;
      if (param_4 != (long *)0x0 && bVar6) goto LAB_71007ddec0;
LAB_71007ddde0:
      iVar12 = iVar26;
      if (bVar6 != bVar7) {
        do {
          if (param_2 != (long *)0x0 && bVar4) {
            if ((byte *)param_2[2] < (byte *)param_2[3]) {
              uVar11 = (uint)*(byte *)param_2[2];
            }
            else {
              uVar11 = (**(code **)(*param_2 + 0x48))(param_2);
              if (uVar11 == 0xffffffff) {
                param_2 = (long *)0x0;
                uVar11 = 0xff;
              }
              else {
                uVar11 = uVar11 & 0xff;
              }
            }
            lVar17 = FUN_710080c980(lVar27 + 0x65,uVar11,10);
            if (lVar17 == 0) goto LAB_71007ddf20;
            cVar10 = PTR_DAT_7100af47a0[lVar17 - (lVar27 + 100)];
LAB_71007dde1c:
            lVar17 = *(long *)(local_8 + -0x18);
            uVar24 = lVar17 + 1;
            if ((*(ulong *)(local_8 + -0x10) < uVar24) || (0 < (int)*(undefined8 *)(local_8 + -8)))
            {
              FUN_71007b6ec0(&local_8,uVar24);
            }
            local_8[*(long *)(local_8 + -0x18)] = cVar10;
            if (local_8 + -0x18 != &DAT_7100d210d8) {
              *(ulong *)(local_8 + -0x18) = uVar24;
              local_8[-8] = '\0';
              local_8[-7] = '\0';
              local_8[-6] = '\0';
              local_8[-5] = '\0';
              (local_8 + -0x18)[lVar17 + 0x19] = '\0';
            }
            iVar26 = iVar12 + 1;
LAB_71007dde74:
            uVar24 = param_2[2];
            if (uVar24 < (ulong)param_2[3]) goto LAB_71007dde80;
LAB_71007ddfa8:
            (**(code **)(*param_2 + 0x50))(param_2);
            if ((ulong)param_2[3] <= (ulong)param_2[2]) goto LAB_71007ddfc4;
          }
          else {
            uVar11 = (uint)uVar24 & 0xff;
            lVar17 = FUN_710080c980(lVar27 + 0x65,(uint)uVar24 & 0xff,10);
            if (lVar17 != 0) {
              cVar10 = PTR_DAT_7100af47a0[lVar17 - (lVar27 + 100)];
              goto LAB_71007dde1c;
            }
LAB_71007ddf20:
            if (*(byte *)(lVar27 + 0x21) == uVar11) {
              bVar9 = bVar3;
              if (bVar3 == 0) {
                if (0 < *(int *)(lVar27 + 0x58)) {
                  bVar3 = 1;
                  iVar26 = 0;
                  local_60 = iVar12;
                  goto LAB_71007dde74;
                }
                break;
              }
              goto LAB_71007de05c;
            }
            if ((*(byte *)(lVar27 + 0x20) & 1) == 0) break;
            bVar9 = *(byte *)(lVar27 + 0x20);
            if (((*(byte *)(lVar27 + 0x22) != uVar11) || (bVar9 = bVar3, bVar3 != 0)) ||
               (iVar12 == 0)) goto LAB_71007de05c;
            lVar17 = *(long *)(local_10 + -0x18);
            uVar24 = lVar17 + 1;
            if ((*(ulong *)(local_10 + -0x10) < uVar24) || (0 < (int)*(undefined8 *)(local_10 + -8))
               ) {
              FUN_71007b6ec0(&local_10,uVar24);
            }
            local_10[*(long *)(local_10 + -0x18)] = (char)iVar12;
            if (local_10 + -0x18 != &DAT_7100d210d8) {
              *(ulong *)(local_10 + -0x18) = uVar24;
              *(undefined4 *)(local_10 + -8) = 0;
              (local_10 + -0x18)[lVar17 + 0x19] = 0;
            }
            iVar26 = 0;
            uVar24 = param_2[2];
            if ((ulong)param_2[3] <= uVar24) goto LAB_71007ddfa8;
LAB_71007dde80:
            param_2[2] = uVar24 + 1;
LAB_71007dde88:
            if ((ulong)param_2[3] <= (ulong)param_2[2]) {
LAB_71007ddfc4:
              uVar22 = (**(code **)(*param_2 + 0x48))(param_2);
              uVar24 = uVar22 & 0xffffffff;
              if ((int)uVar22 == -1) {
                param_2 = (long *)0x0;
                bVar4 = true;
                goto LAB_71007dddc8;
              }
            }
          }
          bVar6 = iVar14 == -1;
          uVar24 = 0xffffffff;
          bVar4 = true;
          bVar5 = param_4 != (long *)0x0 && bVar6;
          bVar7 = false;
          if (param_4 == (long *)0x0 || !bVar6) goto LAB_71007ddde0;
LAB_71007ddec0:
          bVar6 = false;
          if ((ulong)param_4[2] < (ulong)param_4[3]) goto LAB_71007ddde0;
          iVar12 = (**(code **)(*param_4 + 0x48))(param_4);
          if (iVar12 == -1) {
            param_4 = (long *)0x0;
          }
          else {
            bVar5 = false;
          }
          iVar12 = iVar26;
          if (bVar5 == bVar7) break;
        } while( true );
      }
      bVar9 = 1;
LAB_71007de05c:
      uVar11 = (uint)(*(long *)(local_8 + -0x18) != 0 && bVar9 != 0);
      goto LAB_71007de070;
    }
    if (*(long *)(lVar27 + 0x40) == 0) {
      if (*(long *)(lVar27 + 0x50) != 0) {
LAB_71007de660:
        local_80 = &local_40;
        local_b0 = &local_30;
        local_38 = CONCAT44(local_38._4_4_,iVar14);
        local_40 = param_4;
        local_30 = param_2;
        local_28 = uVar15;
        uVar24 = FUN_71007d5e00(local_b0,local_80);
        param_4 = local_40;
        uVar25 = local_38 & 0xffffffff;
        if (((uVar24 & 1) == 0) &&
           (cVar10 = FUN_71007bf500(local_b0), param_2 = local_30,
           **(char **)(lVar27 + 0x48) == cVar10)) {
          local_90 = *(ulong *)(lVar27 + 0x50);
          FUN_71007d0fa0(local_30);
          uVar11 = 1;
          uVar24 = 0xffffffff;
          bVar2 = true;
          goto LAB_71007de070;
        }
        uVar24 = (ulong)local_28;
        param_2 = local_30;
        if (*(long *)(lVar27 + 0x40) != 0) {
          lVar17 = *(long *)(lVar27 + 0x50);
          goto joined_r0x0071007de358;
        }
      }
    }
    else {
      local_38 = CONCAT44(local_38._4_4_,iVar14);
      local_40 = param_4;
      local_30 = param_2;
      local_28 = uVar15;
      uVar24 = FUN_71007d5e00();
      param_4 = local_40;
      iVar14 = (int)local_38;
      uVar25 = local_38 & 0xffffffff;
      if (((uVar24 & 1) == 0) &&
         (cVar10 = FUN_71007bf500(&local_30), param_2 = local_30,
         **(char **)(lVar27 + 0x38) == cVar10)) {
        local_90 = *(ulong *)(lVar27 + 0x40);
        FUN_71007d0fa0(local_30);
        uVar24 = 0xffffffff;
        uVar11 = 1;
        goto LAB_71007de070;
      }
      uVar24 = (ulong)local_28;
      param_2 = local_30;
      uVar15 = local_28;
      if (*(long *)(lVar27 + 0x50) != 0) goto LAB_71007de660;
      lVar17 = *(long *)(lVar27 + 0x40);
joined_r0x0071007de358:
      local_30 = param_2;
      if (lVar17 != 0) {
        uVar11 = 1;
        bVar2 = true;
        goto LAB_71007de070;
      }
    }
    uVar11 = local_48 ^ 1;
    goto LAB_71007de070;
  }
  if (uVar11 == 0) {
    uVar11 = 1;
LAB_71007de190:
    iVar14 = (int)uVar25;
joined_r0x0071007ddce4:
    if (local_9c == 3) goto LAB_71007ddce8;
    bVar7 = (int)uVar25 == -1;
    bVar4 = (int)uVar24 == -1;
    bVar5 = bVar4;
    if (param_2 == (long *)0x0 || !bVar4) goto LAB_71007de1bc;
LAB_71007de20c:
    if ((ulong)param_2[2] < (ulong)param_2[3]) {
LAB_71007de218:
      uVar24 = 0xffffffff;
      bVar4 = true;
      bVar5 = false;
    }
    else {
      uVar22 = (**(code **)(*param_2 + 0x48))(param_2);
      uVar24 = uVar22 & 0xffffffff;
      if ((int)uVar22 != -1) goto LAB_71007de218;
      bVar4 = true;
      param_2 = (long *)0x0;
      bVar5 = true;
    }
LAB_71007de1bc:
    uVar15 = (uint)uVar24;
    bVar8 = param_4 != (long *)0x0;
    bVar6 = bVar7;
    if (bVar8 && bVar7 != false) {
      if ((ulong)param_4[2] < (ulong)param_4[3]) {
        bVar6 = false;
      }
      else {
        iVar14 = (**(code **)(*param_4 + 0x48))(param_4);
        if (iVar14 == -1) {
          param_4 = (long *)0x0;
        }
        bVar6 = iVar14 == -1 && (bVar8 && bVar7 != false);
      }
    }
    if (bVar6 != bVar5) {
      if (param_2 == (long *)0x0 || !bVar4) {
LAB_71007de1e8:
        if ((*(byte *)(*(long *)(lVar16 + 0x30) + (long)(int)(uVar15 & 0xff)) >> 3 & 1) == 0)
        goto LAB_71007de070;
        pbVar19 = (byte *)param_2[2];
        if (pbVar19 < (byte *)param_2[3]) goto LAB_71007de204;
        (**(code **)(*param_2 + 0x50))(param_2);
      }
      else {
        pbVar19 = (byte *)param_2[2];
        if ((byte *)param_2[3] <= pbVar19) {
          uVar15 = (**(code **)(*param_2 + 0x48))(param_2);
          if (uVar15 == 0xffffffff) {
            param_2 = (long *)0x0;
          }
          goto LAB_71007de1e8;
        }
        if ((*(byte *)(*(long *)(lVar16 + 0x30) + (ulong)*pbVar19) >> 3 & 1) == 0)
        goto LAB_71007de070;
LAB_71007de204:
        param_2[2] = (long)(pbVar19 + 1);
      }
      goto LAB_71007de20c;
    }
LAB_71007de070:
    do {
      iVar14 = (int)uVar25;
      local_9c = local_9c + 1;
      if (uVar11 == 0 || local_9c == 4) goto LAB_71007ddce8;
      while( true ) {
        local_a8 = local_a8 + 1;
        uVar11 = (uint)*local_a8;
        bVar4 = uVar11 == 2;
        if (!bVar4) goto LAB_71007ddc98;
LAB_71007de0a4:
        iVar26 = (int)uVar24;
        iVar14 = (int)uVar25;
        if (((*(uint *)(param_6 + 0x18) >> 9 & 1) != 0) || (local_9c == 0 || 1 < local_90)) break;
        if (local_9c == 1) {
          if (((local_48 != 0) || ((byte)local_18 == 3)) || (local_18._2_1_ == '\x01')) break;
        }
        else {
          if (local_9c != 2) goto LAB_71007de0d4;
          if ((local_18._3_1_ == '\x04') || (local_48 != 0 && local_18._3_1_ == '\x03')) break;
        }
        local_9c = local_9c + 1;
      }
      uVar20 = *(ulong *)(lVar27 + 0x30);
      uVar22 = 0;
      while( true ) {
        local_38 = CONCAT44(local_38._4_4_,(int)uVar25);
        local_28 = (uint)uVar24;
        local_40 = param_4;
        local_30 = param_2;
        bVar9 = FUN_71007d5e00(&local_30,&local_40);
        param_2 = local_30;
        param_4 = local_40;
        iVar14 = (int)local_38;
        uVar25 = local_38 & 0xffffffff;
        uVar24 = (ulong)local_28;
        if ((uVar22 < uVar20 & (bVar9 ^ 1)) == 0) break;
        uVar23 = uVar24;
        if (local_30 == (long *)0x0 || local_28 != 0xffffffff) {
LAB_71007de3e0:
          if (*(char *)(*(long *)(lVar27 + 0x28) + uVar22) != (char)uVar23) goto LAB_71007de484;
          pcVar18 = (char *)param_2[2];
          if (pcVar18 < (char *)param_2[3]) goto LAB_71007de3fc;
          (**(code **)(*param_2 + 0x50))(param_2);
        }
        else {
          pcVar18 = (char *)local_30[2];
          if ((char *)local_30[3] <= pcVar18) {
            uVar23 = (**(code **)(*local_30 + 0x48))(local_30);
            if ((int)uVar23 == -1) {
              param_2 = (long *)0x0;
            }
            goto LAB_71007de3e0;
          }
          if (*pcVar18 != *(char *)(*(long *)(lVar27 + 0x28) + uVar22)) {
            uVar24 = 0xffffffff;
            goto LAB_71007de484;
          }
LAB_71007de3fc:
          param_2[2] = (long)(pcVar18 + 1);
        }
        uVar22 = uVar22 + 1;
        uVar24 = 0xffffffff;
      }
      if (uVar22 == uVar20) {
LAB_71007de50c:
        uVar11 = 1;
      }
      else {
LAB_71007de484:
        iVar26 = (int)uVar24;
        if (uVar22 != 0) goto LAB_71007de29c;
        uVar11 = (uint)(*(ulong *)(param_6 + 0x18) >> 9) & 1 ^ 1;
      }
    } while( true );
  }
  local_38 = CONCAT44(local_38._4_4_,iVar14);
  local_40 = param_4;
  local_30 = param_2;
  local_28 = uVar15;
  uVar11 = FUN_71007d5e00(&local_30,&local_40);
  param_4 = local_40;
  iVar14 = (int)local_38;
  uVar25 = local_38 & 0xffffffff;
  if ((uVar11 & 1) != 0) {
    uVar11 = 0;
    uVar24 = (ulong)local_28;
    param_2 = local_30;
    goto joined_r0x0071007ddce4;
  }
  uVar15 = FUN_71007bf500(&local_30);
  param_2 = local_30;
  if ((*(byte *)(*(long *)(lVar16 + 0x30) + (long)(int)(uVar15 & 0xff)) >> 3 & 1) == 0) {
    uVar11 = uVar11 & 0xff;
    uVar24 = (ulong)local_28;
    goto LAB_71007de190;
  }
  FUN_71007d0fa0(local_30);
  if (local_9c != 3) {
    bVar7 = iVar14 == -1;
    uVar11 = 1;
    goto LAB_71007de20c;
  }
  uVar24 = 0xffffffff;
  uVar11 = 1;
LAB_71007ddce8:
  iVar26 = (int)uVar24;
  bVar5 = uVar11 != 0;
  bVar4 = (bVar5 && local_90 != 0) && (uVar11 == 0 || local_90 != 1);
  if (bVar5 && 1 < local_90) {
    if (bVar2) {
      lVar16 = *(long *)(lVar27 + 0x48);
    }
    else {
      lVar16 = *(long *)(lVar27 + 0x38);
    }
    bVar5 = iVar26 == -1;
    if (param_2 != (long *)0x0 && bVar5) {
      uVar25 = 1;
      goto LAB_71007ddd84;
    }
    uVar25 = 1;
    bVar7 = bVar5;
    while( true ) {
      iVar26 = (int)uVar24;
      if (param_4 != (long *)0x0 && iVar14 == -1) {
        if ((ulong)param_4[3] <= (ulong)param_4[2]) {
          iVar13 = (**(code **)(*param_4 + 0x48))(param_4);
          if (iVar13 == -1) {
            param_4 = (long *)0x0;
          }
          bVar7 = (bool)(bVar7 ^ iVar13 == -1);
        }
      }
      else {
        bVar7 = (bool)(bVar7 ^ iVar14 == -1);
      }
      if (!bVar7 || local_90 <= uVar25) break;
      if (param_2 != (long *)0x0 && bVar5) {
        pcVar18 = (char *)param_2[2];
        if ((char *)param_2[3] <= pcVar18) {
          uVar24 = (**(code **)(*param_2 + 0x48))(param_2);
          if ((int)uVar24 == -1) {
            param_2 = (long *)0x0;
          }
          goto LAB_71007ddd60;
        }
        if (*pcVar18 != *(char *)(lVar16 + uVar25)) goto LAB_71007de29c;
LAB_71007ddd78:
        uVar25 = uVar25 + 1;
        param_2[2] = (long)(pcVar18 + 1);
      }
      else {
LAB_71007ddd60:
        if (*(char *)(lVar16 + uVar25) != (char)uVar24) goto LAB_71007de29c;
        pcVar18 = (char *)param_2[2];
        if (pcVar18 < (char *)param_2[3]) goto LAB_71007ddd78;
        (**(code **)(*param_2 + 0x50))(param_2);
        uVar25 = uVar25 + 1;
      }
LAB_71007ddd84:
      bVar5 = bVar4;
      if ((ulong)param_2[2] < (ulong)param_2[3]) {
LAB_71007ddd90:
        uVar24 = 0xffffffff;
        bVar7 = false;
      }
      else {
        uVar22 = (**(code **)(*param_2 + 0x48))(param_2);
        uVar24 = uVar22 & 0xffffffff;
        if ((int)uVar22 != -1) goto LAB_71007ddd90;
        param_2 = (long *)0x0;
        bVar7 = bVar4;
      }
    }
    if (uVar25 == local_90) {
      if (*(ulong *)(local_8 + -0x18) < 2) goto LAB_71007de0e4;
      goto LAB_71007de598;
    }
  }
  else if ((uVar11 & 1) != 0) {
LAB_71007de0d4:
    if (1 < *(ulong *)(local_8 + -0x18)) {
LAB_71007de598:
      uVar25 = FUN_71007b67c0(&local_8,0x30,0);
      if (uVar25 != 0) {
        uVar22 = *(ulong *)(local_8 + -0x18);
        uVar24 = uVar22 - 1;
        if (uVar25 != 0xffffffffffffffff) {
          uVar24 = uVar25;
        }
        if (uVar24 < uVar22) {
          uVar22 = uVar24;
        }
        FUN_71007b6940(&local_8,0,uVar22,0);
      }
    }
LAB_71007de0e4:
    if (bVar2) {
      if (-1 < *(int *)(local_8 + -8)) {
        FUN_71007b6b20(&local_8);
      }
      if (*local_8 != '0') {
        FUN_71007b6ba0(&local_8);
        FUN_71007b6bc0(&local_8,0,0,1,0x2d);
        local_8[-8] = -1;
        local_8[-7] = -1;
        local_8[-6] = -1;
        local_8[-5] = -1;
      }
    }
    if (*(long *)(local_10 + -0x18) != 0) {
      if (bVar3 == 0) {
        local_60 = iVar12;
      }
      FUN_71007b7300(&local_10,local_60);
      uVar25 = FUN_71007fbd00(*(undefined8 *)(lVar27 + 0x10),*(undefined8 *)(lVar27 + 0x18),
                              &local_10);
      if ((uVar25 & 1) == 0) {
        *param_7 = *param_7 | 4;
      }
    }
    if ((bVar3 == 0) || (*(int *)(lVar27 + 0x58) == iVar12)) {
      FUN_71007b6780(param_8,&local_8);
      goto LAB_71007de2ac;
    }
  }
LAB_71007de29c:
  *param_7 = *param_7 | 4;
LAB_71007de2ac:
  local_80 = &local_40;
  local_b0 = &local_30;
  local_38 = CONCAT44(local_38._4_4_,iVar14);
  local_40 = param_4;
  local_30 = param_2;
  local_28 = iVar26;
  uVar25 = FUN_71007d5e00(local_b0,local_80);
  if ((uVar25 & 1) != 0) {
    *param_7 = *param_7 | 2;
  }
  auVar1._8_4_ = local_28;
  auVar1._0_8_ = local_30;
  auVar1._12_4_ = uStack_24;
  FUN_71007d11c0(local_8);
  FUN_71007d11c0(local_10);
  return auVar1;
}



// ===== FUN_71007de980 @ 71007de980 (size=3496) =====

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16]
FUN_71007de980(undefined8 param_1,long *param_2,ulong param_3,long *param_4,ulong param_5,
              long param_6,uint *param_7,undefined8 param_8)

{
  undefined1 auVar1 [16];
  bool bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  char *pcVar18;
  byte *pbVar19;
  ulong uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  int iVar26;
  long lVar27;
  long lVar28;
  long **local_b0;
  byte *local_a8;
  int local_9c;
  ulong local_90;
  long **local_80;
  int local_60;
  uint local_48;
  long *local_40;
  ulong local_38;
  long *local_30;
  uint local_28;
  undefined4 uStack_24;
  undefined4 local_18;
  undefined1 *local_10;
  char *local_8;
  
  uVar24 = param_3 & 0xffffffff;
  uVar25 = param_5 & 0xffffffff;
  local_28 = (uint)param_3;
  uStack_24 = (undefined4)(param_3 >> 0x20);
  local_40 = param_4;
  local_38 = param_5;
  local_30 = param_2;
  lVar16 = FUN_71007b00e0(&DAT_7100d21120);
  lVar16 = *(long *)(*(long *)(*(long *)(param_6 + 0xd0) + 8) + lVar16 * 8);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  lVar17 = FUN_71007b00e0(&DAT_7100d212c0);
  lVar28 = *(long *)(*(long *)(param_6 + 0xd0) + 0x18);
  lVar27 = *(long *)(lVar28 + lVar17 * 8);
  if (lVar27 == 0) {
    puVar21 = (undefined8 *)FUN_71007af5c0(0x70);
    *(undefined4 *)(puVar21 + 1) = 0;
    puVar21[2] = 0;
    puVar21[3] = 0;
    *puVar21 = &PTR_FUN_7100aee748;
    *(undefined2 *)(puVar21 + 4) = 0;
    *(undefined1 *)((long)puVar21 + 0x22) = 0;
    puVar21[5] = 0;
    puVar21[6] = 0;
    puVar21[7] = 0;
    puVar21[8] = 0;
    puVar21[9] = 0;
    puVar21[10] = 0;
    *(undefined4 *)(puVar21 + 0xb) = 0;
    *(undefined8 *)((long)puVar21 + 0x5c) = 0;
    *(undefined1 *)((long)puVar21 + 0x6f) = 0;
    FUN_71007d22a0(puVar21,param_6 + 0xd0);
    FUN_71007b05e0(*(undefined8 *)(param_6 + 0xd0),puVar21,lVar17);
    lVar27 = *(long *)(lVar28 + lVar17 * 8);
  }
  if (*(long *)(lVar27 + 0x40) == 0) {
    local_48 = 0;
  }
  else {
    local_48 = (uint)(*(long *)(lVar27 + 0x50) != 0);
  }
  local_10 = &DAT_7100d210f0;
  if ((*(byte *)(lVar27 + 0x20) & 1) != 0) {
    FUN_71007b6ec0(&local_10,0x20);
  }
  local_8 = &DAT_7100d210f0;
  FUN_71007b6ec0(&local_8,0x20);
  bVar3 = 0;
  local_9c = 0;
  local_60 = 0;
  bVar2 = false;
  iVar12 = 0;
  local_18 = *(uint *)(lVar27 + 0x60);
  local_a8 = (byte *)&local_18;
  local_90 = 0;
  uVar11 = local_18 & 0xff;
  bVar4 = uVar11 == 2;
  if (bVar4) goto LAB_71007deea4;
LAB_71007dea98:
  iVar14 = (int)uVar25;
  uVar15 = (uint)uVar24;
  if (1 < uVar11 && !bVar4) {
    if (uVar11 != 3) {
      if (uVar11 != 4) goto LAB_71007df30c;
      bVar4 = uVar15 == 0xffffffff;
      iVar26 = iVar12;
      if (param_2 != (long *)0x0 && bVar4) goto LAB_71007dec88;
LAB_71007debc8:
      bVar6 = iVar14 == -1;
      bVar5 = param_4 != (long *)0x0 && bVar6;
      bVar7 = bVar4;
      if (param_4 != (long *)0x0 && bVar6) goto LAB_71007decc0;
LAB_71007debe0:
      iVar12 = iVar26;
      if (bVar6 != bVar7) {
        do {
          if (param_2 != (long *)0x0 && bVar4) {
            if ((byte *)param_2[2] < (byte *)param_2[3]) {
              uVar11 = (uint)*(byte *)param_2[2];
            }
            else {
              uVar11 = (**(code **)(*param_2 + 0x48))(param_2);
              if (uVar11 == 0xffffffff) {
                param_2 = (long *)0x0;
                uVar11 = 0xff;
              }
              else {
                uVar11 = uVar11 & 0xff;
              }
            }
            lVar17 = FUN_710080c980(lVar27 + 0x65,uVar11,10);
            if (lVar17 == 0) goto LAB_71007ded20;
            cVar10 = PTR_DAT_7100af47a0[lVar17 - (lVar27 + 100)];
LAB_71007dec1c:
            lVar17 = *(long *)(local_8 + -0x18);
            uVar24 = lVar17 + 1;
            if ((*(ulong *)(local_8 + -0x10) < uVar24) || (0 < (int)*(undefined8 *)(local_8 + -8)))
            {
              FUN_71007b6ec0(&local_8,uVar24);
            }
            local_8[*(long *)(local_8 + -0x18)] = cVar10;
            if (local_8 + -0x18 != &DAT_7100d210d8) {
              *(ulong *)(local_8 + -0x18) = uVar24;
              local_8[-8] = '\0';
              local_8[-7] = '\0';
              local_8[-6] = '\0';
              local_8[-5] = '\0';
              (local_8 + -0x18)[lVar17 + 0x19] = '\0';
            }
            iVar26 = iVar12 + 1;
LAB_71007dec74:
            uVar24 = param_2[2];
            if (uVar24 < (ulong)param_2[3]) goto LAB_71007dec80;
LAB_71007deda8:
            (**(code **)(*param_2 + 0x50))(param_2);
            if ((ulong)param_2[3] <= (ulong)param_2[2]) goto LAB_71007dedc4;
          }
          else {
            uVar11 = (uint)uVar24 & 0xff;
            lVar17 = FUN_710080c980(lVar27 + 0x65,(uint)uVar24 & 0xff,10);
            if (lVar17 != 0) {
              cVar10 = PTR_DAT_7100af47a0[lVar17 - (lVar27 + 100)];
              goto LAB_71007dec1c;
            }
LAB_71007ded20:
            if (*(byte *)(lVar27 + 0x21) == uVar11) {
              bVar9 = bVar3;
              if (bVar3 == 0) {
                if (0 < *(int *)(lVar27 + 0x58)) {
                  bVar3 = 1;
                  iVar26 = 0;
                  local_60 = iVar12;
                  goto LAB_71007dec74;
                }
                break;
              }
              goto LAB_71007dee5c;
            }
            if ((*(byte *)(lVar27 + 0x20) & 1) == 0) break;
            bVar9 = *(byte *)(lVar27 + 0x20);
            if (((*(byte *)(lVar27 + 0x22) != uVar11) || (bVar9 = bVar3, bVar3 != 0)) ||
               (iVar12 == 0)) goto LAB_71007dee5c;
            lVar17 = *(long *)(local_10 + -0x18);
            uVar24 = lVar17 + 1;
            if ((*(ulong *)(local_10 + -0x10) < uVar24) || (0 < (int)*(undefined8 *)(local_10 + -8))
               ) {
              FUN_71007b6ec0(&local_10,uVar24);
            }
            local_10[*(long *)(local_10 + -0x18)] = (char)iVar12;
            if (local_10 + -0x18 != &DAT_7100d210d8) {
              *(ulong *)(local_10 + -0x18) = uVar24;
              *(undefined4 *)(local_10 + -8) = 0;
              (local_10 + -0x18)[lVar17 + 0x19] = 0;
            }
            iVar26 = 0;
            uVar24 = param_2[2];
            if ((ulong)param_2[3] <= uVar24) goto LAB_71007deda8;
LAB_71007dec80:
            param_2[2] = uVar24 + 1;
LAB_71007dec88:
            if ((ulong)param_2[3] <= (ulong)param_2[2]) {
LAB_71007dedc4:
              uVar22 = (**(code **)(*param_2 + 0x48))(param_2);
              uVar24 = uVar22 & 0xffffffff;
              if ((int)uVar22 == -1) {
                param_2 = (long *)0x0;
                bVar4 = true;
                goto LAB_71007debc8;
              }
            }
          }
          bVar6 = iVar14 == -1;
          uVar24 = 0xffffffff;
          bVar4 = true;
          bVar5 = param_4 != (long *)0x0 && bVar6;
          bVar7 = false;
          if (param_4 == (long *)0x0 || !bVar6) goto LAB_71007debe0;
LAB_71007decc0:
          bVar6 = false;
          if ((ulong)param_4[2] < (ulong)param_4[3]) goto LAB_71007debe0;
          iVar12 = (**(code **)(*param_4 + 0x48))(param_4);
          if (iVar12 == -1) {
            param_4 = (long *)0x0;
          }
          else {
            bVar5 = false;
          }
          iVar12 = iVar26;
          if (bVar5 == bVar7) break;
        } while( true );
      }
      bVar9 = 1;
LAB_71007dee5c:
      uVar11 = (uint)(*(long *)(local_8 + -0x18) != 0 && bVar9 != 0);
      goto LAB_71007dee70;
    }
    if (*(long *)(lVar27 + 0x40) == 0) {
      if (*(long *)(lVar27 + 0x50) != 0) {
LAB_71007df460:
        local_80 = &local_40;
        local_b0 = &local_30;
        local_38 = CONCAT44(local_38._4_4_,iVar14);
        local_40 = param_4;
        local_30 = param_2;
        local_28 = uVar15;
        uVar24 = FUN_71007d5e00(local_b0,local_80);
        param_4 = local_40;
        uVar25 = local_38 & 0xffffffff;
        if (((uVar24 & 1) == 0) &&
           (cVar10 = FUN_71007bf500(local_b0), param_2 = local_30,
           **(char **)(lVar27 + 0x48) == cVar10)) {
          local_90 = *(ulong *)(lVar27 + 0x50);
          FUN_71007d0fa0(local_30);
          uVar11 = 1;
          uVar24 = 0xffffffff;
          bVar2 = true;
          goto LAB_71007dee70;
        }
        uVar24 = (ulong)local_28;
        param_2 = local_30;
        if (*(long *)(lVar27 + 0x40) != 0) {
          lVar17 = *(long *)(lVar27 + 0x50);
          goto joined_r0x0071007df158;
        }
      }
    }
    else {
      local_38 = CONCAT44(local_38._4_4_,iVar14);
      local_40 = param_4;
      local_30 = param_2;
      local_28 = uVar15;
      uVar24 = FUN_71007d5e00();
      param_4 = local_40;
      iVar14 = (int)local_38;
      uVar25 = local_38 & 0xffffffff;
      if (((uVar24 & 1) == 0) &&
         (cVar10 = FUN_71007bf500(&local_30), param_2 = local_30,
         **(char **)(lVar27 + 0x38) == cVar10)) {
        local_90 = *(ulong *)(lVar27 + 0x40);
        FUN_71007d0fa0(local_30);
        uVar24 = 0xffffffff;
        uVar11 = 1;
        goto LAB_71007dee70;
      }
      uVar24 = (ulong)local_28;
      param_2 = local_30;
      uVar15 = local_28;
      if (*(long *)(lVar27 + 0x50) != 0) goto LAB_71007df460;
      lVar17 = *(long *)(lVar27 + 0x40);
joined_r0x0071007df158:
      local_30 = param_2;
      if (lVar17 != 0) {
        uVar11 = 1;
        bVar2 = true;
        goto LAB_71007dee70;
      }
    }
    uVar11 = local_48 ^ 1;
    goto LAB_71007dee70;
  }
  if (uVar11 == 0) {
    uVar11 = 1;
LAB_71007def90:
    iVar14 = (int)uVar25;
joined_r0x0071007deae4:
    if (local_9c == 3) goto LAB_71007deae8;
    bVar7 = (int)uVar25 == -1;
    bVar4 = (int)uVar24 == -1;
    bVar5 = bVar4;
    if (param_2 == (long *)0x0 || !bVar4) goto LAB_71007defbc;
LAB_71007df00c:
    if ((ulong)param_2[2] < (ulong)param_2[3]) {
LAB_71007df018:
      uVar24 = 0xffffffff;
      bVar4 = true;
      bVar5 = false;
    }
    else {
      uVar22 = (**(code **)(*param_2 + 0x48))(param_2);
      uVar24 = uVar22 & 0xffffffff;
      if ((int)uVar22 != -1) goto LAB_71007df018;
      bVar4 = true;
      param_2 = (long *)0x0;
      bVar5 = true;
    }
LAB_71007defbc:
    uVar15 = (uint)uVar24;
    bVar8 = param_4 != (long *)0x0;
    bVar6 = bVar7;
    if (bVar8 && bVar7 != false) {
      if ((ulong)param_4[2] < (ulong)param_4[3]) {
        bVar6 = false;
      }
      else {
        iVar14 = (**(code **)(*param_4 + 0x48))(param_4);
        if (iVar14 == -1) {
          param_4 = (long *)0x0;
        }
        bVar6 = iVar14 == -1 && (bVar8 && bVar7 != false);
      }
    }
    if (bVar6 != bVar5) {
      if (param_2 == (long *)0x0 || !bVar4) {
LAB_71007defe8:
        if ((*(byte *)(*(long *)(lVar16 + 0x30) + (long)(int)(uVar15 & 0xff)) >> 3 & 1) == 0)
        goto LAB_71007dee70;
        pbVar19 = (byte *)param_2[2];
        if (pbVar19 < (byte *)param_2[3]) goto LAB_71007df004;
        (**(code **)(*param_2 + 0x50))(param_2);
      }
      else {
        pbVar19 = (byte *)param_2[2];
        if ((byte *)param_2[3] <= pbVar19) {
          uVar15 = (**(code **)(*param_2 + 0x48))(param_2);
          if (uVar15 == 0xffffffff) {
            param_2 = (long *)0x0;
          }
          goto LAB_71007defe8;
        }
        if ((*(byte *)(*(long *)(lVar16 + 0x30) + (ulong)*pbVar19) >> 3 & 1) == 0)
        goto LAB_71007dee70;
LAB_71007df004:
        param_2[2] = (long)(pbVar19 + 1);
      }
      goto LAB_71007df00c;
    }
LAB_71007dee70:
    do {
      iVar14 = (int)uVar25;
      local_9c = local_9c + 1;
      if (uVar11 == 0 || local_9c == 4) goto LAB_71007deae8;
      while( true ) {
        local_a8 = local_a8 + 1;
        uVar11 = (uint)*local_a8;
        bVar4 = uVar11 == 2;
        if (!bVar4) goto LAB_71007dea98;
LAB_71007deea4:
        iVar26 = (int)uVar24;
        iVar14 = (int)uVar25;
        if (((*(uint *)(param_6 + 0x18) >> 9 & 1) != 0) || (local_9c == 0 || 1 < local_90)) break;
        if (local_9c == 1) {
          if (((local_48 != 0) || ((byte)local_18 == 3)) || (local_18._2_1_ == '\x01')) break;
        }
        else {
          if (local_9c != 2) goto LAB_71007deed4;
          if ((local_18._3_1_ == '\x04') || (local_48 != 0 && local_18._3_1_ == '\x03')) break;
        }
        local_9c = local_9c + 1;
      }
      uVar20 = *(ulong *)(lVar27 + 0x30);
      uVar22 = 0;
      while( true ) {
        local_38 = CONCAT44(local_38._4_4_,(int)uVar25);
        local_28 = (uint)uVar24;
        local_40 = param_4;
        local_30 = param_2;
        bVar9 = FUN_71007d5e00(&local_30,&local_40);
        param_2 = local_30;
        param_4 = local_40;
        iVar14 = (int)local_38;
        uVar25 = local_38 & 0xffffffff;
        uVar24 = (ulong)local_28;
        if ((uVar22 < uVar20 & (bVar9 ^ 1)) == 0) break;
        uVar23 = uVar24;
        if (local_30 == (long *)0x0 || local_28 != 0xffffffff) {
LAB_71007df1e0:
          if (*(char *)(*(long *)(lVar27 + 0x28) + uVar22) != (char)uVar23) goto LAB_71007df284;
          pcVar18 = (char *)param_2[2];
          if (pcVar18 < (char *)param_2[3]) goto LAB_71007df1fc;
          (**(code **)(*param_2 + 0x50))(param_2);
        }
        else {
          pcVar18 = (char *)local_30[2];
          if ((char *)local_30[3] <= pcVar18) {
            uVar23 = (**(code **)(*local_30 + 0x48))(local_30);
            if ((int)uVar23 == -1) {
              param_2 = (long *)0x0;
            }
            goto LAB_71007df1e0;
          }
          if (*pcVar18 != *(char *)(*(long *)(lVar27 + 0x28) + uVar22)) {
            uVar24 = 0xffffffff;
            goto LAB_71007df284;
          }
LAB_71007df1fc:
          param_2[2] = (long)(pcVar18 + 1);
        }
        uVar22 = uVar22 + 1;
        uVar24 = 0xffffffff;
      }
      if (uVar22 == uVar20) {
LAB_71007df30c:
        uVar11 = 1;
      }
      else {
LAB_71007df284:
        iVar26 = (int)uVar24;
        if (uVar22 != 0) goto LAB_71007df09c;
        uVar11 = (uint)(*(ulong *)(param_6 + 0x18) >> 9) & 1 ^ 1;
      }
    } while( true );
  }
  local_38 = CONCAT44(local_38._4_4_,iVar14);
  local_40 = param_4;
  local_30 = param_2;
  local_28 = uVar15;
  uVar11 = FUN_71007d5e00(&local_30,&local_40);
  param_4 = local_40;
  iVar14 = (int)local_38;
  uVar25 = local_38 & 0xffffffff;
  if ((uVar11 & 1) != 0) {
    uVar11 = 0;
    uVar24 = (ulong)local_28;
    param_2 = local_30;
    goto joined_r0x0071007deae4;
  }
  uVar15 = FUN_71007bf500(&local_30);
  param_2 = local_30;
  if ((*(byte *)(*(long *)(lVar16 + 0x30) + (long)(int)(uVar15 & 0xff)) >> 3 & 1) == 0) {
    uVar11 = uVar11 & 0xff;
    uVar24 = (ulong)local_28;
    goto LAB_71007def90;
  }
  FUN_71007d0fa0(local_30);
  if (local_9c != 3) {
    bVar7 = iVar14 == -1;
    uVar11 = 1;
    goto LAB_71007df00c;
  }
  uVar24 = 0xffffffff;
  uVar11 = 1;
LAB_71007deae8:
  iVar26 = (int)uVar24;
  bVar5 = uVar11 != 0;
  bVar4 = (bVar5 && local_90 != 0) && (uVar11 == 0 || local_90 != 1);
  if (bVar5 && 1 < local_90) {
    if (bVar2) {
      lVar16 = *(long *)(lVar27 + 0x48);
    }
    else {
      lVar16 = *(long *)(lVar27 + 0x38);
    }
    bVar5 = iVar26 == -1;
    if (param_2 != (long *)0x0 && bVar5) {
      uVar25 = 1;
      goto LAB_71007deb84;
    }
    uVar25 = 1;
    bVar7 = bVar5;
    while( true ) {
      iVar26 = (int)uVar24;
      if (param_4 != (long *)0x0 && iVar14 == -1) {
        if ((ulong)param_4[3] <= (ulong)param_4[2]) {
          iVar13 = (**(code **)(*param_4 + 0x48))(param_4);
          if (iVar13 == -1) {
            param_4 = (long *)0x0;
          }
          bVar7 = (bool)(bVar7 ^ iVar13 == -1);
        }
      }
      else {
        bVar7 = (bool)(bVar7 ^ iVar14 == -1);
      }
      if (!bVar7 || local_90 <= uVar25) break;
      if (param_2 != (long *)0x0 && bVar5) {
        pcVar18 = (char *)param_2[2];
        if ((char *)param_2[3] <= pcVar18) {
          uVar24 = (**(code **)(*param_2 + 0x48))(param_2);
          if ((int)uVar24 == -1) {
            param_2 = (long *)0x0;
          }
          goto LAB_71007deb60;
        }
        if (*pcVar18 != *(char *)(lVar16 + uVar25)) goto LAB_71007df09c;
LAB_71007deb78:
        uVar25 = uVar25 + 1;
        param_2[2] = (long)(pcVar18 + 1);
      }
      else {
LAB_71007deb60:
        if (*(char *)(lVar16 + uVar25) != (char)uVar24) goto LAB_71007df09c;
        pcVar18 = (char *)param_2[2];
        if (pcVar18 < (char *)param_2[3]) goto LAB_71007deb78;
        (**(code **)(*param_2 + 0x50))(param_2);
        uVar25 = uVar25 + 1;
      }
LAB_71007deb84:
      bVar5 = bVar4;
      if ((ulong)param_2[2] < (ulong)param_2[3]) {
LAB_71007deb90:
        uVar24 = 0xffffffff;
        bVar7 = false;
      }
      else {
        uVar22 = (**(code **)(*param_2 + 0x48))(param_2);
        uVar24 = uVar22 & 0xffffffff;
        if ((int)uVar22 != -1) goto LAB_71007deb90;
        param_2 = (long *)0x0;
        bVar7 = bVar4;
      }
    }
    if (uVar25 == local_90) {
      if (*(ulong *)(local_8 + -0x18) < 2) goto LAB_71007deee4;
      goto LAB_71007df398;
    }
  }
  else if ((uVar11 & 1) != 0) {
LAB_71007deed4:
    if (1 < *(ulong *)(local_8 + -0x18)) {
LAB_71007df398:
      uVar25 = FUN_71007b67c0(&local_8,0x30,0);
      if (uVar25 != 0) {
        uVar22 = *(ulong *)(local_8 + -0x18);
        uVar24 = uVar22 - 1;
        if (uVar25 != 0xffffffffffffffff) {
          uVar24 = uVar25;
        }
        if (uVar24 < uVar22) {
          uVar22 = uVar24;
        }
        FUN_71007b6940(&local_8,0,uVar22,0);
      }
    }
LAB_71007deee4:
    if (bVar2) {
      if (-1 < *(int *)(local_8 + -8)) {
        FUN_71007b6b20(&local_8);
      }
      if (*local_8 != '0') {
        FUN_71007b6ba0(&local_8);
        FUN_71007b6bc0(&local_8,0,0,1,0x2d);
        local_8[-8] = -1;
        local_8[-7] = -1;
        local_8[-6] = -1;
        local_8[-5] = -1;
      }
    }
    if (*(long *)(local_10 + -0x18) != 0) {
      if (bVar3 == 0) {
        local_60 = iVar12;
      }
      FUN_71007b7300(&local_10,local_60);
      uVar25 = FUN_71007fbd00(*(undefined8 *)(lVar27 + 0x10),*(undefined8 *)(lVar27 + 0x18),
                              &local_10);
      if ((uVar25 & 1) == 0) {
        *param_7 = *param_7 | 4;
      }
    }
    if ((bVar3 == 0) || (*(int *)(lVar27 + 0x58) == iVar12)) {
      FUN_71007b6780(param_8,&local_8);
      goto LAB_71007df0ac;
    }
  }
LAB_71007df09c:
  *param_7 = *param_7 | 4;
LAB_71007df0ac:
  local_80 = &local_40;
  local_b0 = &local_30;
  local_38 = CONCAT44(local_38._4_4_,iVar14);
  local_40 = param_4;
  local_30 = param_2;
  local_28 = iVar26;
  uVar25 = FUN_71007d5e00(local_b0,local_80);
  if ((uVar25 & 1) != 0) {
    *param_7 = *param_7 | 2;
  }
  auVar1._8_4_ = local_28;
  auVar1._0_8_ = local_30;
  auVar1._12_4_ = uStack_24;
  FUN_71007d11c0(local_8);
  FUN_71007d11c0(local_10);
  return auVar1;
}



// ===== FUN_71007df780 @ 71007df780 (size=208) =====

/* WARNING: Removing unreachable block (ram,0x0071007df828) */
/* WARNING: Removing unreachable block (ram,0x0071007df82c) */
/* WARNING: Removing unreachable block (ram,0x0071007df834) */
/* WARNING: Removing unreachable block (ram,0x0071007df83c) */
/* WARNING: Removing unreachable block (ram,0x0071007df844) */

undefined1  [16]
FUN_71007df780(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
              undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8,
              undefined8 param_9)

{
  undefined1 auVar1 [16];
  undefined8 local_8;
  
  if ((param_6 & 1) == 0) {
    auVar1 = FUN_71007de980();
  }
  else {
    auVar1 = FUN_71007ddb80();
  }
  local_8 = FUN_71007afd60();
  FUN_71007fb020(&DAT_7100d210f0,param_9,param_8,&local_8);
  auVar1._8_8_ = param_3 & 0xffffffff00000000 | auVar1._8_8_ & 0xffffffff;
  return auVar1;
}



// ===== FUN_71007df880 @ 71007df880 (size=492) =====

undefined1  [16]
FUN_71007df880(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
              undefined8 param_5,ulong param_6,long param_7,undefined8 param_8,long *param_9)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_10 [8];
  undefined1 *local_8;
  
  lVar5 = FUN_71007b00e0(&DAT_7100d21120);
  plVar7 = *(long **)(*(long *)(*(long *)(param_7 + 0xd0) + 8) + lVar5 * 8);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  local_8 = &DAT_7100d210f0;
  if ((param_6 & 1) == 0) {
    auVar9 = FUN_71007de980(param_1,param_2,param_3,param_4,param_5,param_7,param_8,&local_8);
  }
  else {
    auVar9 = FUN_71007ddb80(param_1,param_2,param_3,param_4,param_5,param_7,param_8,&local_8);
  }
  lVar5 = *(long *)(local_8 + -0x18);
  if (lVar5 != 0) {
    FUN_71007b72a0(param_9,lVar5,0);
    puVar4 = local_8;
    lVar8 = *param_9;
    if (*(int *)(lVar8 + -8) < 0) {
      cVar2 = (char)plVar7[7];
    }
    else {
      FUN_71007b6b20(param_9);
      lVar8 = *param_9;
      cVar2 = (char)plVar7[7];
    }
    if (cVar2 != '\x01') {
      if (cVar2 == '\0') {
        FUN_71007b8240(plVar7);
      }
      if (*(code **)(*plVar7 + 0x38) != FUN_71007b8200) {
        (**(code **)(*plVar7 + 0x38))(plVar7,puVar4,puVar4 + lVar5,lVar8);
        goto joined_r0x0071007dfa3c;
      }
    }
    if (puVar4 + lVar5 != puVar4) {
      FUN_710080f900(lVar8,puVar4,lVar5);
    }
  }
joined_r0x0071007dfa3c:
  if (local_8 + -0x18 != &DAT_7100d210d8) {
    piVar6 = (int *)(local_8 + -8);
    do {
      iVar1 = *piVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
      thunk_FUN_710081c200(local_8 + -0x18,auStack_10);
    }
  }
  auVar9._8_8_ = param_3 & 0xffffffff00000000 | auVar9._8_8_ & 0xffffffff;
  return auVar9;
}



// ===== FUN_71007dfa80 @ 71007dfa80 (size=2556) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71007dfa80(undefined4 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  undefined1 *local_18;
  undefined1 *local_10;
  undefined1 *local_8;
  
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 4) = 0x30;
  uVar1 = FUN_7100808340(0x7100d225a0,0,0x180);
  *(undefined8 *)(param_1 + 2) = uVar1;
  uVar1 = FUN_7100808340(0x7100d22420,0,0x180);
  _DAT_7100d22738 = 0;
  _DAT_7100d22740 = 0;
  _DAT_7100d22748 = 0;
  _DAT_7100d22750 = 0;
  _DAT_7100d22758 = 0;
  *(undefined8 *)(param_1 + 6) = uVar1;
  *(undefined1 **)(param_1 + 8) = &DAT_7100d22730;
  _DAT_7100d22730 = &DAT_7100d22720;
  puVar2 = (undefined2 *)FUN_71007afdc0();
  _DAT_7100d22720 = *puVar2;
  FUN_71007b8480(0x7100d221e0,0,0,1);
  FUN_71007b0140(param_1,&DAT_7100d21120,0x7100d221e0);
  FUN_71007fb3e0(0x7100d22160,1);
  FUN_71007b0140(param_1,&DAT_7100d22878,0x7100d22160);
  _DAT_7100d21980 = &PTR_FUN_7100aee788;
  _DAT_7100d21990 = 0;
  _DAT_7100d21998 = 0;
  _DAT_7100d219a8 = 0;
  _DAT_7100d219b0 = 0;
  _DAT_7100d219b8 = 0;
  _DAT_7100d219c0 = 0;
  _DAT_7100d21988 = 1;
  _DAT_7100d221a8 = 1;
  _DAT_7100d221b0 = &DAT_7100d21980;
  DAT_7100d219a0 = 0;
  _DAT_7100d221a0 = &PTR_FUN_7100aed1c0;
  _DAT_7100d219c8 = 0;
  DAT_7100d21a08 = 0;
  FUN_71007fd160(&DAT_7100d221a0,0);
  FUN_71007b0140(param_1,&DAT_7100d21180,&DAT_7100d221a0);
  _DAT_7100d22198 = 1;
  _DAT_7100d22190 = &PTR_LAB_7100aee3f8;
  FUN_71007b0140(param_1,&DAT_7100d212e0);
  _DAT_7100d22188 = 1;
  _DAT_7100d22180 = &PTR_LAB_7100aee470;
  FUN_71007b0140(param_1,&DAT_7100d212d8);
  _DAT_7100d221c8 = 1;
  _DAT_7100d221c0 = &PTR_FUN_7100aed188;
  _DAT_7100d221d0 = FUN_71007afd60();
  FUN_71007b0140(param_1,&DAT_7100d21168);
  _DAT_7100d218a0 = &PTR_FUN_7100aee748;
  _DAT_7100d218b0 = 0;
  _DAT_7100d218b8 = 0;
  _DAT_7100d218c8 = 0;
  _DAT_7100d218d0 = 0;
  _DAT_7100d218d8 = 0;
  _DAT_7100d218e0 = 0;
  _DAT_7100d218e8 = 0;
  _DAT_7100d218f0 = 0;
  _DAT_7100d218a8 = 1;
  _DAT_7100d22128 = 1;
  _DAT_7100d22130 = &DAT_7100d218a0;
  _DAT_7100d218c0 = 0;
  _DAT_7100d22120 = &PTR_FUN_7100aed270;
  DAT_7100d218c2 = 0;
  _DAT_7100d218f8 = 0;
  _DAT_7100d218fc = 0;
  DAT_7100d2190f = 0;
  FUN_71007fc4c0(&DAT_7100d22120,0,0);
  FUN_71007b0140(param_1,&DAT_7100d21190,&DAT_7100d22120);
  _DAT_7100d21910 = &PTR_FUN_7100aee768;
  _DAT_7100d21920 = 0;
  _DAT_7100d21928 = 0;
  _DAT_7100d21938 = 0;
  _DAT_7100d21940 = 0;
  _DAT_7100d21948 = 0;
  _DAT_7100d21950 = 0;
  _DAT_7100d21958 = 0;
  _DAT_7100d21960 = 0;
  _DAT_7100d21918 = 1;
  _DAT_7100d22148 = 1;
  _DAT_7100d22150 = &DAT_7100d21910;
  _DAT_7100d21930 = 0;
  _DAT_7100d22140 = &PTR_FUN_7100aed208;
  DAT_7100d21932 = 0;
  _DAT_7100d21968 = 0;
  _DAT_7100d2196c = 0;
  DAT_7100d2197f = 0;
  FUN_71007fc3e0(&DAT_7100d22140,0,0);
  FUN_71007b0140(param_1,&DAT_7100d21188,&DAT_7100d22140);
  _DAT_7100d22118 = 1;
  _DAT_7100d22110 = &PTR_LAB_7100aed310;
  FUN_71007b0140(param_1,&DAT_7100d211a0);
  _DAT_7100d22108 = 1;
  _DAT_7100d22100 = &PTR_LAB_7100aed340;
  FUN_71007b0140(param_1,&DAT_7100d21198);
  _DAT_7100d21718 = 1;
  _DAT_7100d21890 = 0;
  _DAT_7100d21880 = 0;
  uRam0000007100d21888 = 0;
  _DAT_7100d21710 = &PTR_FUN_7100aee4d0;
  DAT_7100d21898 = 0;
  _DAT_7100d21720 = 0;
  uRam0000007100d21728 = 0;
  _DAT_7100d21730 = 0;
  uRam0000007100d21738 = 0;
  _DAT_7100d21740 = 0;
  uRam0000007100d21748 = 0;
  _DAT_7100d21750 = 0;
  uRam0000007100d21758 = 0;
  _DAT_7100d21760 = 0;
  uRam0000007100d21768 = 0;
  _DAT_7100d21770 = 0;
  uRam0000007100d21778 = 0;
  _DAT_7100d21780 = 0;
  uRam0000007100d21788 = 0;
  _DAT_7100d21790 = 0;
  uRam0000007100d21798 = 0;
  _DAT_7100d217a0 = 0;
  uRam0000007100d217a8 = 0;
  _DAT_7100d217b0 = 0;
  uRam0000007100d217b8 = 0;
  _DAT_7100d217c0 = 0;
  uRam0000007100d217c8 = 0;
  _DAT_7100d217d0 = 0;
  uRam0000007100d217d8 = 0;
  _DAT_7100d217e0 = 0;
  uRam0000007100d217e8 = 0;
  _DAT_7100d217f0 = 0;
  uRam0000007100d217f8 = 0;
  _DAT_7100d21800 = 0;
  uRam0000007100d21808 = 0;
  _DAT_7100d21810 = 0;
  uRam0000007100d21818 = 0;
  _DAT_7100d21820 = 0;
  uRam0000007100d21828 = 0;
  _DAT_7100d21830 = 0;
  uRam0000007100d21838 = 0;
  _DAT_7100d21840 = 0;
  uRam0000007100d21848 = 0;
  _DAT_7100d21850 = 0;
  uRam0000007100d21858 = 0;
  _DAT_7100d21860 = 0;
  uRam0000007100d21868 = 0;
  _DAT_7100d21870 = 0;
  uRam0000007100d21878 = 0;
  FUN_71007d3280(0x7100d220d0,&DAT_7100d21710,1);
  FUN_71007b0140(param_1,&DAT_7100d212a8,0x7100d220d0);
  _DAT_7100d220c8 = 1;
  _DAT_7100d220c0 = &PTR_LAB_7100aed370;
  FUN_71007b0140(param_1,&DAT_7100d21178);
  _DAT_7100d220b8 = 1;
  _DAT_7100d220b0 = &PTR_LAB_7100aee6d0;
  FUN_71007b0140(param_1,&DAT_7100d212a0);
  FUN_71007bf4a0(0x7100d22090,1);
  FUN_71007b0140(param_1,&DAT_7100d21170,0x7100d22090);
  FUN_71007b83a0(0x7100d21ba0,1);
  FUN_71007b0140(param_1,&DAT_7100d21118,0x7100d21ba0);
  FUN_71007fb460(0x7100d21b20,1);
  FUN_71007b0140(param_1,&DAT_7100d22870,0x7100d21b20);
  _DAT_7100d215c0 = &PTR_FUN_7100aef310;
  _DAT_7100d215d0 = 0;
  _DAT_7100d215d8 = 0;
  _DAT_7100d215e8 = 0;
  _DAT_7100d215f0 = 0;
  _DAT_7100d215f8 = 0;
  _DAT_7100d21600 = 0;
  _DAT_7100d215c8 = 1;
  _DAT_7100d21b68 = 1;
  _DAT_7100d21b70 = &DAT_7100d215c0;
  DAT_7100d215e0 = 0;
  _DAT_7100d21b60 = &PTR_FUN_7100aedc10;
  _DAT_7100d21608 = 0;
  DAT_7100d21708 = 0;
  FUN_71007fd320(&DAT_7100d21b60,0);
  FUN_71007b0140(param_1,&DAT_7100d21200,&DAT_7100d21b60);
  _DAT_7100d21b58 = 1;
  _DAT_7100d21b50 = &PTR_LAB_7100aeef80;
  FUN_71007b0140(param_1,&DAT_7100d22868);
  _DAT_7100d21b48 = 1;
  _DAT_7100d21b40 = &PTR_LAB_7100aeeff8;
  FUN_71007b0140(param_1,&DAT_7100d22860);
  _DAT_7100d21b88 = 1;
  _DAT_7100d21b80 = &PTR_FUN_7100aedbd8;
  _DAT_7100d21b90 = FUN_71007afd60();
  FUN_71007b0140(param_1,&DAT_7100d211e8);
  _DAT_7100d21480 = &PTR_FUN_7100aef2d0;
  _DAT_7100d21490 = 0;
  _DAT_7100d21498 = 0;
  _DAT_7100d214b0 = 0;
  _DAT_7100d214b8 = 0;
  _DAT_7100d214c0 = 0;
  _DAT_7100d214c8 = 0;
  _DAT_7100d214d0 = 0;
  _DAT_7100d214d8 = 0;
  _DAT_7100d21488 = 1;
  _DAT_7100d21ae8 = 1;
  _DAT_7100d21af0 = &DAT_7100d21480;
  DAT_7100d214a0 = 0;
  _DAT_7100d21ae0 = &PTR_FUN_7100aedcc0;
  _DAT_7100d214a4 = 0;
  _DAT_7100d214e0 = 0;
  _DAT_7100d214e4 = 0;
  DAT_7100d21518 = 0;
  FUN_71007fc7c0(&DAT_7100d21ae0,0,0);
  FUN_71007b0140(param_1,&DAT_7100d21210,&DAT_7100d21ae0);
  _DAT_7100d21520 = &PTR_FUN_7100aef2f0;
  _DAT_7100d21530 = 0;
  _DAT_7100d21538 = 0;
  _DAT_7100d21550 = 0;
  _DAT_7100d21558 = 0;
  _DAT_7100d21560 = 0;
  _DAT_7100d21568 = 0;
  _DAT_7100d21570 = 0;
  _DAT_7100d21578 = 0;
  _DAT_7100d21528 = 1;
  _DAT_7100d21b08 = 1;
  _DAT_7100d21b10 = &DAT_7100d21520;
  DAT_7100d21540 = 0;
  _DAT_7100d21b00 = &PTR_FUN_7100aedc58;
  _DAT_7100d21544 = 0;
  _DAT_7100d21580 = 0;
  _DAT_7100d21584 = 0;
  DAT_7100d215b8 = 0;
  FUN_71007fc6e0(&DAT_7100d21b00,0,0);
  FUN_71007b0140(param_1,&DAT_7100d21208,&DAT_7100d21b00);
  _DAT_7100d21ad8 = 1;
  _DAT_7100d21ad0 = &PTR_LAB_7100aedd60;
  FUN_71007b0140(param_1,&DAT_7100d21220);
  _DAT_7100d21ac8 = 1;
  _DAT_7100d21ac0 = &PTR_LAB_7100aedd90;
  FUN_71007b0140(param_1,&DAT_7100d21218);
  _DAT_7100d212f8 = 1;
  _DAT_7100d21470 = 0;
  _DAT_7100d21460 = 0;
  uRam0000007100d21468 = 0;
  _DAT_7100d212f0 = &PTR_FUN_7100aef058;
  DAT_7100d21478 = 0;
  _DAT_7100d21300 = 0;
  uRam0000007100d21308 = 0;
  _DAT_7100d21310 = 0;
  uRam0000007100d21318 = 0;
  _DAT_7100d21320 = 0;
  uRam0000007100d21328 = 0;
  _DAT_7100d21330 = 0;
  uRam0000007100d21338 = 0;
  _DAT_7100d21340 = 0;
  uRam0000007100d21348 = 0;
  _DAT_7100d21350 = 0;
  uRam0000007100d21358 = 0;
  _DAT_7100d21360 = 0;
  uRam0000007100d21368 = 0;
  _DAT_7100d21370 = 0;
  uRam0000007100d21378 = 0;
  _DAT_7100d21380 = 0;
  uRam0000007100d21388 = 0;
  _DAT_7100d21390 = 0;
  uRam0000007100d21398 = 0;
  _DAT_7100d213a0 = 0;
  uRam0000007100d213a8 = 0;
  _DAT_7100d213b0 = 0;
  uRam0000007100d213b8 = 0;
  _DAT_7100d213c0 = 0;
  uRam0000007100d213c8 = 0;
  _DAT_7100d213d0 = 0;
  uRam0000007100d213d8 = 0;
  _DAT_7100d213e0 = 0;
  uRam0000007100d213e8 = 0;
  _DAT_7100d213f0 = 0;
  uRam0000007100d213f8 = 0;
  _DAT_7100d21400 = 0;
  uRam0000007100d21408 = 0;
  _DAT_7100d21410 = 0;
  uRam0000007100d21418 = 0;
  _DAT_7100d21420 = 0;
  uRam0000007100d21428 = 0;
  _DAT_7100d21430 = 0;
  uRam0000007100d21438 = 0;
  _DAT_7100d21440 = 0;
  uRam0000007100d21448 = 0;
  _DAT_7100d21450 = 0;
  uRam0000007100d21458 = 0;
  FUN_71007e62e0(0x7100d21a90,&DAT_7100d212f0,1);
  FUN_71007b0140(param_1,&DAT_7100d22830,0x7100d21a90);
  _DAT_7100d21a88 = 1;
  _DAT_7100d21a80 = &PTR_LAB_7100aeddc0;
  FUN_71007b0140(param_1,&DAT_7100d211f8);
  _DAT_7100d21a78 = 1;
  _DAT_7100d21a70 = &PTR_LAB_7100aef258;
  FUN_71007b0140(param_1,&DAT_7100d22828);
  FUN_71007cc020(0x7100d21a50,1);
  FUN_71007b0140(param_1,&DAT_7100d211f0,0x7100d21a50);
  _DAT_7100d21a48 = 1;
  _DAT_7100d21a40 = &PTR_FUN_7100aef998;
  FUN_71007b0140(param_1,&DAT_7100d22898);
  _DAT_7100d21a38 = 1;
  _DAT_7100d21a30 = &PTR_FUN_7100aef9f0;
  FUN_71007b0140(param_1,&DAT_7100d22890);
  _DAT_7100d21a28 = 1;
  _DAT_7100d21a20 = &PTR_FUN_7100aefa48;
  FUN_71007b0140(param_1,&DAT_7100d22888);
  _DAT_7100d21a18 = 1;
  _DAT_7100d21a10 = &PTR_FUN_7100aefaa0;
  FUN_71007b0140(param_1,&DAT_7100d22880);
  local_30 = &DAT_7100d21980;
  local_28 = &DAT_7100d218a0;
  local_20 = &DAT_7100d21910;
  local_18 = &DAT_7100d215c0;
  local_10 = &DAT_7100d21480;
  local_8 = &DAT_7100d21520;
  FUN_71007ff080(param_1,&local_30);
  lVar5 = *(long *)(param_1 + 6);
  lVar3 = FUN_71007b00e0(&DAT_7100d21180);
  *(undefined1 **)(lVar5 + lVar3 * 8) = &DAT_7100d21980;
  lVar5 = *(long *)(param_1 + 6);
  lVar3 = FUN_71007b00e0(&DAT_7100d21190);
  *(undefined1 **)(lVar5 + lVar3 * 8) = &DAT_7100d218a0;
  lVar5 = *(long *)(param_1 + 6);
  lVar3 = FUN_71007b00e0(&DAT_7100d21188);
  *(undefined1 **)(lVar5 + lVar3 * 8) = &DAT_7100d21910;
  lVar5 = *(long *)(param_1 + 6);
  lVar3 = FUN_71007b00e0(&DAT_7100d212a8);
  *(undefined1 **)(lVar5 + lVar3 * 8) = &DAT_7100d21710;
  lVar5 = *(long *)(param_1 + 6);
  lVar3 = FUN_71007b00e0(&DAT_7100d21200);
  *(undefined1 **)(lVar5 + lVar3 * 8) = &DAT_7100d215c0;
  lVar5 = *(long *)(param_1 + 6);
  lVar3 = FUN_71007b00e0(&DAT_7100d21210);
  *(undefined1 **)(lVar5 + lVar3 * 8) = &DAT_7100d21480;
  lVar4 = *(long *)(param_1 + 6);
  lVar3 = FUN_71007b00e0(&DAT_7100d21208);
  lVar5 = *(long *)(param_1 + 6);
  *(undefined1 **)(lVar4 + lVar3 * 8) = &DAT_7100d21520;
  lVar3 = FUN_71007b00e0(&DAT_7100d22830);
  *(undefined1 **)(lVar5 + lVar3 * 8) = &DAT_7100d212f0;
  return;
}



// ===== FUN_71007e0560 @ 71007e0560 (size=88) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71007e0560(void)

{
  if (_DAT_7100d210b8 != 0) {
    return;
  }
  FUN_71007dfa80(0x7100d22770,2);
  _DAT_7100d210b8 = 0x7100d22770;
  _DAT_7100d210b0 = 0x7100d22770;
  FUN_71007afd40(0x7100d22760,0x7100d22770);
  return;
}



// ===== FUN_71007e05c0 @ 71007e05c0 (size=60) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71007e05c0(void)

{
  FUN_7100835a40(&DAT_7100d210a8,FUN_71007e0560);
  if (_DAT_7100d210b8 != 0) {
    return;
  }
  FUN_71007e0560();
  return;
}



// ===== FUN_71007e0600 @ 71007e0600 (size=216) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71007e0600(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  long extraout_x1;
  long lVar5;
  long extraout_x1_00;
  
  *param_1 = 0;
  FUN_71007e05c0();
  piVar3 = _DAT_7100d210b0;
  *param_1 = _DAT_7100d210b0;
  if (piVar3 != _DAT_7100d210b8) {
    if (((_DAT_7100d22798 & 1) == 0) && (iVar4 = FUN_71007af260(&DAT_7100d22798), iVar4 != 0)) {
      _DAT_7100d227a0 = 0;
      FUN_71007af440(&DAT_7100d22798);
    }
    iVar4 = FUN_7100835660(&DAT_7100d227a0);
    piVar3 = _DAT_7100d210b0;
    if (iVar4 != 0) {
      FUN_7100003834();
      lVar5 = extraout_x1;
      goto LAB_71007e06c0;
    }
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *param_1 = _DAT_7100d210b0;
    iVar4 = FUN_71008356e0(&DAT_7100d227a0);
    if (iVar4 != 0) {
      while( true ) {
        FUN_7100003868();
        lVar5 = extraout_x1_00;
LAB_71007e06c0:
        if (lVar5 != -1) break;
        FUN_71007aedc0();
      }
                    /* WARNING: Subroutine does not return */
      FUN_7100804760();
    }
  }
  return;
}



// ===== FUN_71007e07e0 @ 71007e07e0 (size=284) =====

long * FUN_71007e07e0(long *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  byte local_10 [8];
  long *local_8;
  
  if (*(long *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8) != 0) {
    FUN_71007e09c0(local_10,param_1);
    if (((local_10[0] & 1) != 0) &&
       (iVar3 = (**(code **)(**(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8) + 0x30)
                )(), iVar3 == -1)) {
      lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
      FUN_71007cff00(lVar5,*(uint *)(lVar5 + 0x20) | 1);
    }
    plVar2 = local_8;
    lVar5 = (long)local_8 + *(long *)(*local_8 + -0x18);
    if (((*(uint *)(lVar5 + 0x18) >> 0xd & 1) != 0) && (*(int *)(lVar5 + 0x20) == 0)) {
      uVar4 = FUN_71007ae140();
      if ((uVar4 & 1) == 0) {
        uVar1 = *(undefined4 *)(lVar5 + 0x1c);
        *(undefined4 *)(lVar5 + 0x1c) = 0;
        if (*(long **)(lVar5 + 0xe8) != (long *)0x0) {
          iVar3 = (**(code **)(**(long **)(lVar5 + 0xe8) + 0x30))();
          if (iVar3 == -1) {
            lVar5 = (long)local_8 + *(long *)(*local_8 + -0x18);
            FUN_71007cff00(lVar5,*(uint *)(lVar5 + 0x20) | 1);
          }
          lVar5 = (long)plVar2 + *(long *)(*plVar2 + -0x18);
        }
        *(undefined4 *)(lVar5 + 0x1c) = uVar1;
      }
    }
  }
  return param_1;
}



// ===== FUN_71007e09c0 @ 71007e09c0 (size=152) =====

void FUN_71007e09c0(undefined1 *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  
  *param_1 = 0;
  *(long **)(param_1 + 8) = param_2;
  lVar1 = (long)param_2 + *(long *)(*param_2 + -0x18);
  uVar2 = *(uint *)(lVar1 + 0x20);
  if (*(long *)(lVar1 + 0xd8) == 0) {
    if (uVar2 == 0) {
      *param_1 = 1;
      return;
    }
  }
  else if (uVar2 == 0) {
    FUN_71007e07e0();
    lVar1 = (long)param_2 + *(long *)(*param_2 + -0x18);
    uVar2 = *(uint *)(lVar1 + 0x20);
    if (uVar2 == 0) {
      *param_1 = 1;
    }
    else if ((uVar2 & 1) != 0) {
      FUN_71007cff00(lVar1,uVar2 | 4);
      return;
    }
    return;
  }
  if ((uVar2 & 1) == 0) {
    return;
  }
  FUN_71007cff00(lVar1,uVar2 | 4);
  return;
}



// ===== FUN_71007e0a60 @ 71007e0a60 (size=264) =====

long * FUN_71007e0a60(long *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  byte local_10 [8];
  long *local_8;
  
  FUN_71007e09c0(local_10,param_1);
  if (((local_10[0] & 1) != 0) &&
     (plVar3 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8),
     lVar4 = (**(code **)(*plVar3 + 0x60))(plVar3,param_2,param_3), param_3 != lVar4)) {
    lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
    FUN_71007cff00(lVar4,*(uint *)(lVar4 + 0x20) | 1);
  }
  plVar3 = local_8;
  lVar4 = (long)local_8 + *(long *)(*local_8 + -0x18);
  if ((((*(uint *)(lVar4 + 0x18) >> 0xd & 1) != 0) && (*(int *)(lVar4 + 0x20) == 0)) &&
     (uVar5 = FUN_71007ae140(), (uVar5 & 1) == 0)) {
    uVar1 = *(undefined4 *)(lVar4 + 0x1c);
    *(undefined4 *)(lVar4 + 0x1c) = 0;
    if (*(long **)(lVar4 + 0xe8) != (long *)0x0) {
      iVar2 = (**(code **)(**(long **)(lVar4 + 0xe8) + 0x30))();
      if (iVar2 == -1) {
        lVar4 = (long)local_8 + *(long *)(*local_8 + -0x18);
        FUN_71007cff00(lVar4,*(uint *)(lVar4 + 0x20) | 1);
      }
      lVar4 = (long)plVar3 + *(long *)(*plVar3 + -0x18);
    }
    *(undefined4 *)(lVar4 + 0x1c) = uVar1;
  }
  return param_1;
}



// ===== FUN_71007e0c20 @ 71007e0c20 (size=288) =====

long * FUN_71007e0c20(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_10 [8];
  long *local_8;
  
  FUN_71007e09c0(auStack_10,param_1);
  if (((*(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x20) & 5) == 0) &&
     (plVar3 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8),
     lVar4 = (**(code **)(*plVar3 + 0x28))(plVar3,param_2,param_3,0x10), lVar4 == -1)) {
    lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
    FUN_71007cff00(lVar4,*(uint *)(lVar4 + 0x20) | 4);
  }
  plVar3 = local_8;
  lVar4 = (long)local_8 + *(long *)(*local_8 + -0x18);
  if (((*(uint *)(lVar4 + 0x18) >> 0xd & 1) != 0) && (*(int *)(lVar4 + 0x20) == 0)) {
    uVar5 = FUN_71007ae140();
    if ((uVar5 & 1) == 0) {
      uVar1 = *(undefined4 *)(lVar4 + 0x1c);
      *(undefined4 *)(lVar4 + 0x1c) = 0;
      if (*(long **)(lVar4 + 0xe8) != (long *)0x0) {
        iVar2 = (**(code **)(**(long **)(lVar4 + 0xe8) + 0x30))();
        if (iVar2 == -1) {
          lVar4 = (long)local_8 + *(long *)(*local_8 + -0x18);
          FUN_71007cff00(lVar4,*(uint *)(lVar4 + 0x20) | 1);
        }
        lVar4 = (long)plVar3 + *(long *)(*plVar3 + -0x18);
      }
      *(undefined4 *)(lVar4 + 0x1c) = uVar1;
    }
  }
  return param_1;
}



// ===== FUN_71007e0da0 @ 71007e0da0 (size=392) =====

void FUN_71007e0da0(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined1 *local_20 [2];
  undefined1 auStack_10 [16];
  
  (**(code **)(*param_3 + 0x20))(local_20,param_3);
  puVar1 = (undefined8 *)FUN_71007e28e0(local_20,0,0,": ",2);
  puVar3 = puVar1 + 2;
  local_40 = (undefined8 *)*puVar1;
  if (local_40 == puVar3) {
    local_40 = local_30;
    FUN_710080f900(local_30,puVar3,puVar1[1] + 1);
  }
  else {
    local_30[0] = puVar1[2];
  }
  local_38 = puVar1[1];
  *puVar1 = puVar3;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  uVar2 = FUN_710081ce00(param_4);
  puVar1 = (undefined8 *)FUN_71007e28e0(&local_40,0,0,param_4,uVar2);
  puVar3 = puVar1 + 2;
  local_60 = (undefined8 *)*puVar1;
  if (local_60 == puVar3) {
    local_60 = local_50;
    FUN_710080f900(local_50,puVar3,puVar1[1] + 1);
  }
  else {
    local_50[0] = puVar1[2];
  }
  local_58 = puVar1[1];
  *puVar1 = puVar3;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  FUN_71007c5bc0(param_1,&local_60);
  if (local_60 != local_50) {
    thunk_FUN_710081c200();
  }
  if (local_40 != local_30) {
    thunk_FUN_710081c200();
  }
  if (local_20[0] != auStack_10) {
    thunk_FUN_710081c200();
  }
  param_1[2] = param_2;
  param_1[3] = param_3;
  *param_1 = &PTR_FUN_7100aeebe8;
  return;
}



// ===== FUN_71007e0f60 @ 71007e0f60 (size=4) =====

void FUN_71007e0f60(void)

{
  return;
}



// ===== FUN_71007e1100 @ 71007e1100 (size=352) =====

void FUN_71007e1100(uint *param_1,long *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  char *local_8;
  
  piVar1 = (int *)*param_2;
  if (param_2[1] == 7) {
    if ((((*piVar1 != 0x61666564) || ((short)piVar1[1] != 0x6c75)) ||
        (*(char *)((long)piVar1 + 6) != 't')) &&
       (((*piVar1 != 0x3931746d || ((short)piVar1[1] != 0x3339)) ||
        (*(char *)((long)piVar1 + 6) != '7')))) goto LAB_71007e101c;
  }
  else if ((param_2[1] != 4) || (*piVar1 != 0x676e7270)) {
LAB_71007e101c:
    uVar2 = FUN_710080daa0(piVar1,&local_8,0);
    if (((char)*piVar1 == '\0') || (*local_8 != '\0')) {
      uVar3 = FUN_71007adf60(0x20);
      uVar4 = FUN_71007e37c0();
      FUN_71007e0da0(uVar3,0x16,uVar4,"random_device::_M_init_pretr1(const std::string&)");
                    /* WARNING: Subroutine does not return */
      FUN_71007af000(uVar3,&PTR_PTR_FUN_7100aec0c8,FUN_71007e3540);
    }
    goto LAB_71007e0f80;
  }
  uVar2 = 0x1571;
LAB_71007e0f80:
  lVar5 = 1;
  *param_1 = uVar2;
  do {
    uVar2 = (int)lVar5 + (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965;
    param_1[lVar5] = uVar2;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x270);
  param_1[0x270] = 0x270;
  param_1[0x271] = 0;
  return;
}



// ===== thunk_FUN_7100457980 @ 71007e1120 (size=4) =====

uint thunk_FUN_7100457980(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x9c0);
  if (0x26f < uVar2) {
    FUN_7100315390();
    uVar2 = *(ulong *)(param_1 + 0x9c0);
  }
  *(ulong *)(param_1 + 0x9c0) = uVar2 + 1;
  uVar1 = *(uint *)(param_1 + uVar2 * 4);
  uVar1 = uVar1 ^ uVar1 >> 0xb;
  uVar1 = (uVar1 & 0x13a58ad) << 7 ^ uVar1;
  uVar1 = (uVar1 & 0x1df8c) << 0xf ^ uVar1;
  return uVar1 ^ uVar1 >> 0x12;
}



// ===== FUN_71007e1140 @ 71007e1140 (size=20) =====

void FUN_71007e1140(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aee8e0;
  FUN_71007b09c0();
  return;
}



// ===== FUN_71007e1160 @ 71007e1160 (size=28) =====

void FUN_71007e1160(undefined8 param_1)

{
  FUN_71007e1140();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007e1180 @ 71007e1180 (size=280) =====

void FUN_71007e1180(undefined8 *param_1,undefined4 param_2)

{
  char *pcVar1;
  
  switch(param_2) {
  case 0:
    pcVar1 = "Invalid collating element in regular expression";
    break;
  case 1:
    pcVar1 = "Invalid character class in regular expression";
    break;
  case 2:
    pcVar1 = "Invalid escape in regular expression";
    break;
  case 3:
    pcVar1 = "Invalid back reference in regular expression";
    break;
  case 4:
    pcVar1 = "Mismatched \'[\' and \']\' in regular expression";
    break;
  case 5:
    pcVar1 = "Mismatched \'(\' and \')\' in regular expression";
    break;
  case 6:
    pcVar1 = "Mismatched \'{\' and \'}\' in regular expression";
    break;
  case 7:
    pcVar1 = "Invalid range in \'{}\' in regular expression";
    break;
  case 8:
    pcVar1 = "Invalid character range in regular expression";
    break;
  case 9:
    pcVar1 = "Insufficient memory to compile regular expression";
    break;
  case 10:
    pcVar1 = "Invalid \'?\', \'*\', or \'+\' in regular expression";
    break;
  case 0xb:
    pcVar1 = "Complexity of regex match exceeded implementation limits";
    break;
  case 0xc:
    pcVar1 = "Insufficient memory to determine regex match";
    break;
  case 0xd:
    pcVar1 = "Unexpected null character in regular expression";
    break;
  case 0xe:
    pcVar1 = "Conflicting regex grammar options";
    break;
  default:
    pcVar1 = "regex error";
  }
  FUN_71007b6500(param_1,pcVar1);
  *(undefined4 *)(param_1 + 2) = param_2;
  *param_1 = &PTR_FUN_7100aee8e0;
  return;
}



// ===== FUN_71007e12a0 @ 71007e12a0 (size=48) =====

bool FUN_71007e12a0(long param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*(char **)(param_1 + 8) == "St19_Sp_make_shared_tag") {
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



// ===== FUN_71007e12c4 @ 71007e12c4 (size=32) =====

bool FUN_71007e12c4(void)

{
  int iVar1;
  
  iVar1 = FUN_710080aec0();
  return iVar1 == 0;
}



// ===== FUN_71007e13c0 @ 71007e13c0 (size=76) =====

void FUN_71007e13c0(undefined8 *param_1)

{
  if ((undefined8 *)param_1[9] != param_1 + 0xb) {
    thunk_FUN_710081c200();
  }
  *param_1 = &PTR_LAB_7100aeea88;
  FUN_71007b0080(param_1 + 7);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007e1420 @ 71007e1420 (size=128) =====

void FUN_71007e1420(undefined8 *param_1)

{
  param_1[0xf] = &PTR_FUN_7100aeea58;
  *param_1 = &PTR_FUN_7100aeea30;
  if ((undefined8 *)param_1[0xb] != param_1 + 0xd) {
    thunk_FUN_710081c200();
  }
  param_1[2] = &PTR_LAB_7100aeea88;
  FUN_71007b0080(param_1 + 9);
  *param_1 = &DAT_7100aee9c0;
  param_1[1] = 0;
  param_1[0xf] = &PTR_LAB_7100aee0b8;
  FUN_71007d01e0(param_1 + 0xf);
  return;
}



// ===== FUN_71007e14a0 @ 71007e14a0 (size=152) =====

void FUN_71007e14a0(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  *(undefined ***)((long)param_1 + lVar1) = &PTR_FUN_7100aeea30;
  *(undefined ***)((long)param_1 + lVar1 + 0x78) = &PTR_FUN_7100aeea58;
  if (*(long *)((long)param_1 + lVar1 + 0x58) != (long)param_1 + lVar1 + 0x68) {
    thunk_FUN_710081c200();
  }
  *(undefined ***)((long)param_1 + lVar1 + 0x10) = &PTR_LAB_7100aeea88;
  FUN_71007b0080((long)param_1 + lVar1 + 0x48);
  *(undefined **)((long)param_1 + lVar1) = &DAT_7100aee9c0;
  *(undefined8 *)((long)param_1 + lVar1 + 8) = 0;
  *(undefined ***)((long)param_1 + lVar1 + 0x78) = &PTR_LAB_7100aee0b8;
  FUN_71007d01e0((long)param_1 + lVar1 + 0x78);
  return;
}



// ===== FUN_71007e1540 @ 71007e1540 (size=136) =====

void FUN_71007e1540(undefined8 *param_1)

{
  param_1[0xf] = &PTR_FUN_7100aeea58;
  *param_1 = &PTR_FUN_7100aeea30;
  if ((undefined8 *)param_1[0xb] != param_1 + 0xd) {
    thunk_FUN_710081c200();
  }
  param_1[2] = &PTR_LAB_7100aeea88;
  FUN_71007b0080(param_1 + 9);
  *param_1 = &DAT_7100aee9c0;
  param_1[1] = 0;
  param_1[0xf] = &PTR_LAB_7100aee0b8;
  FUN_71007d01e0(param_1 + 0xf);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007e15c8 @ 71007e15c8 (size=160) =====

void FUN_71007e15c8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*param_1 + -0x18);
  lVar1 = (long)param_1 + lVar2;
  *(undefined ***)((long)param_1 + lVar2) = &PTR_FUN_7100aeea30;
  *(undefined ***)(lVar1 + 0x78) = &PTR_FUN_7100aeea58;
  if (*(long *)(lVar1 + 0x58) != lVar1 + 0x68) {
    thunk_FUN_710081c200();
  }
  *(undefined ***)(lVar1 + 0x10) = &PTR_LAB_7100aeea88;
  FUN_71007b0080(lVar1 + 0x48);
  *(undefined **)((long)param_1 + lVar2) = &DAT_7100aee9c0;
  *(undefined8 *)(lVar1 + 8) = 0;
  *(undefined ***)(lVar1 + 0x78) = &PTR_LAB_7100aee0b8;
  FUN_71007d01e0(lVar1 + 0x78);
  thunk_FUN_710081c200(lVar1);
  return;
}



// ===== FUN_71007e1720 @ 71007e1720 (size=72) =====

void FUN_71007e1720(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  *(long *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x30) = param_3;
  lVar2 = param_4;
  if (0x7fffffff < param_4) {
    do {
      lVar1 = lVar2;
      lVar2 = lVar1 + -0x7fffffff;
    } while (0x7fffffff < lVar2);
    param_2 = (param_2 - lVar1) + param_4 + 0x7fffffff;
  }
  *(long *)(param_1 + 0x28) = param_2 + (int)lVar2;
  return;
}



// ===== FUN_71007e1a60 @ 71007e1a60 (size=140) =====

void FUN_71007e1a60(long param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x48) == param_1 + 0x58) {
    lVar2 = 0xf;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x58);
  }
  lVar3 = param_2 + *(long *)(param_1 + 0x50);
  lVar2 = param_2 + lVar2;
  uVar1 = *(uint *)(param_1 + 0x40) & 0x10;
  if (param_2 != *(long *)(param_1 + 0x48)) {
    lVar2 = lVar3 + param_3;
    param_3 = 0;
    lVar3 = lVar2;
  }
  if ((*(uint *)(param_1 + 0x40) & 8) == 0) {
    if (uVar1 != 0) {
      FUN_71007e1720(param_1,param_2,lVar2);
      *(long *)(param_1 + 8) = lVar3;
      *(long *)(param_1 + 0x10) = lVar3;
      *(long *)(param_1 + 0x18) = lVar3;
      return;
    }
  }
  else {
    *(long *)(param_1 + 8) = param_2;
    *(long *)(param_1 + 0x10) = param_2 + param_3;
    *(long *)(param_1 + 0x18) = lVar3;
    if (uVar1 != 0) {
      FUN_71007e1720(param_1,param_2,lVar2);
      return;
    }
  }
  return;
}



// ===== FUN_71007e1b10 @ 71007e1b10 (size=48) =====

long FUN_71007e1b10(long param_1)

{
  *(undefined8 *)(param_1 + 0x50) = 0;
  **(undefined1 **)(param_1 + 0x48) = 0;
  FUN_71007e1a60();
  return param_1;
}



// ===== FUN_71007e1b40 @ 71007e1b40 (size=520) =====

int FUN_71007e1b40(long param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *local_20;
  ulong local_18;
  undefined1 local_10;
  undefined7 uStack_f;
  
  if ((*(uint *)(param_1 + 0x40) >> 4 & 1) == 0) {
    return -1;
  }
  if (param_2 == -1) {
    param_2 = 0;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x48);
    if (lVar6 == param_1 + 0x58) {
      uVar7 = 0xf;
    }
    else {
      uVar7 = *(ulong *)(param_1 + 0x58);
    }
    puVar3 = *(undefined1 **)(param_1 + 0x28);
    uVar4 = (undefined1)param_2;
    if ((ulong)((long)*(undefined1 **)(param_1 + 0x30) - *(long *)(param_1 + 0x20)) < uVar7) {
      FUN_71007e1720(param_1,lVar6,lVar6 + uVar7,(long)puVar3 - *(long *)(param_1 + 0x20));
      if ((*(uint *)(param_1 + 0x40) >> 3 & 1) != 0) {
        lVar2 = *(long *)(param_1 + 8);
        *(long *)(param_1 + 8) = lVar6;
        *(long *)(param_1 + 0x10) = lVar6 + (*(long *)(param_1 + 0x10) - lVar2);
        *(long *)(param_1 + 0x18) = lVar6 + (*(long *)(param_1 + 0x18) - lVar2) + 1;
      }
      **(undefined1 **)(param_1 + 0x28) = uVar4;
    }
    else if (puVar3 < *(undefined1 **)(param_1 + 0x30)) {
      *puVar3 = uVar4;
    }
    else {
      if (uVar7 == 0x7ffffffffffffffe) {
        return -1;
      }
      uVar7 = uVar7 << 1;
      local_18 = 0;
      if (uVar7 < 0x200) {
        uVar7 = 0x200;
      }
      if (0x7ffffffffffffffe < uVar7) {
        uVar7 = 0x7ffffffffffffffe;
      }
      local_10 = 0;
      local_20 = &local_10;
      FUN_71007e25c0(&local_20,uVar7);
      lVar6 = *(long *)(param_1 + 0x20);
      if (lVar6 != 0) {
        FUN_71007e28e0(&local_20,0,local_18,lVar6,*(long *)(param_1 + 0x30) - lVar6);
      }
      uVar5 = local_18;
      uVar7 = local_18 + 1;
      uVar1 = CONCAT71(uStack_f,local_10);
      if (local_20 == &local_10) {
        uVar1 = 0xf;
      }
      if (uVar1 < uVar7) {
        FUN_71007e2360(&local_20,local_18,0,0,1);
      }
      local_20[uVar5] = uVar4;
      local_20[uVar7] = 0;
      local_18 = uVar7;
      FUN_71007e2c60(param_1 + 0x48,&local_20);
      FUN_71007e1a60(param_1,*(undefined8 *)(param_1 + 0x48),
                     *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8),
                     *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20));
      if (local_20 != &local_10) {
        thunk_FUN_710081c200();
      }
    }
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  }
  return param_2;
}



// ===== FUN_71007e1ea0 @ 71007e1ea0 (size=52) =====

void FUN_71007e1ea0(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_7100aeea88;
  FUN_71007b0080(param_1 + 7);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007e1ee0 @ 71007e1ee0 (size=200) =====

long FUN_71007e1ee0(long *param_1,undefined1 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = 0;
LAB_71007e1f0c:
  if (param_3 <= lVar4) {
    return lVar4;
  }
  lVar2 = param_1[6] - param_1[5];
  if (lVar2 != 0) goto code_r0x0071007e1f20;
  goto LAB_71007e1f60;
code_r0x0071007e1f20:
  lVar1 = param_3 - lVar4;
  if (lVar2 < param_3 - lVar4) {
    lVar1 = lVar2;
  }
  lVar4 = lVar4 + lVar1;
  FUN_710080f900(param_1[5],param_2,lVar1);
  param_2 = param_2 + lVar1;
  param_1[5] = param_1[5] + lVar1;
  if (lVar4 < param_3) {
LAB_71007e1f60:
    if (*(code **)(*param_1 + 0x68) == (code *)&LAB_71007e1e60) {
      return lVar4;
    }
    iVar3 = (**(code **)(*param_1 + 0x68))(param_1,*param_2);
    if (iVar3 == -1) {
      return lVar4;
    }
    lVar4 = lVar4 + 1;
    param_2 = param_2 + 1;
  }
  goto LAB_71007e1f0c;
}



// ===== FUN_71007e2020 @ 71007e2020 (size=268) =====

long FUN_71007e2020(long *param_1,undefined1 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  int iVar4;
  code *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  
  lVar7 = 0;
LAB_71007e2060:
  if (param_3 <= lVar7) {
    return lVar7;
  }
  lVar2 = param_1[3] - param_1[2];
  puVar6 = param_2;
  if (lVar2 != 0) goto code_r0x0071007e2074;
  goto LAB_71007e20a8;
code_r0x0071007e2074:
  lVar1 = param_3 - lVar7;
  if (lVar2 < param_3 - lVar7) {
    lVar1 = lVar2;
  }
  lVar7 = lVar7 + lVar1;
  FUN_710080f900(param_2,param_1[2],lVar1);
  param_2 = param_2 + lVar1;
  param_1[2] = param_1[2] + lVar1;
  puVar6 = param_2;
  if (lVar7 < param_3) {
LAB_71007e20a8:
    pcVar5 = *(code **)(*param_1 + 0x50);
    if (pcVar5 == (code *)&LAB_71007e1fc0) {
      pcVar5 = *(code **)(*param_1 + 0x48);
      if (pcVar5 == (code *)&LAB_71007e1e20) {
        return lVar7;
      }
      iVar4 = (*pcVar5)(param_1);
      if (iVar4 == -1) {
        return lVar7;
      }
      uVar3 = *(undefined1 *)param_1[2];
      param_1[2] = (long)((undefined1 *)param_1[2] + 1);
    }
    else {
      iVar4 = (*pcVar5)(param_1);
      if (iVar4 == -1) {
        return lVar7;
      }
      uVar3 = (undefined1)iVar4;
    }
    lVar7 = lVar7 + 1;
    param_2 = puVar6 + 1;
    *puVar6 = uVar3;
  }
  goto LAB_71007e2060;
}



// ===== FUN_71007e2140 @ 71007e2140 (size=92) =====

void FUN_71007e2140(undefined8 param_1,ulong *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  if (0x7ffffffffffffffe < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::_M_create");
  }
  lVar1 = uVar2 + 1;
  if ((param_3 < uVar2) && (param_3 = param_3 * 2, uVar2 < param_3)) {
    if (param_3 < 0x7fffffffffffffff) {
      *param_2 = param_3;
      FUN_71007af5c0(param_3 + 1);
      return;
    }
    lVar1 = 0x7fffffffffffffff;
    *param_2 = 0x7ffffffffffffffe;
  }
  FUN_71007af5c0(lVar1);
  return;
}



// ===== FUN_71007e21a0 @ 71007e21a0 (size=24) =====

void FUN_71007e21a0(long *param_1)

{
  if ((long *)*param_1 != param_1 + 2) {
    thunk_FUN_710081c200();
    return;
  }
  return;
}



// ===== FUN_71007e21c0 @ 71007e21c0 (size=160) =====

void FUN_71007e21c0(long *param_1,ulong param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  ulong local_8;
  
  local_8 = param_2;
  if (param_2 < 0x10) {
    puVar1 = (undefined1 *)*param_1;
  }
  else {
    puVar1 = (undefined1 *)FUN_71007e2140(param_1,&local_8,0);
    *param_1 = (long)puVar1;
    param_1[2] = local_8;
  }
  if (local_8 != 0) {
    if (local_8 == 1) {
      *puVar1 = param_3;
      param_1[1] = 1;
      *(undefined1 *)(*param_1 + 1) = 0;
      return;
    }
    FUN_7100808340(puVar1,param_3,local_8);
    puVar1 = (undefined1 *)*param_1;
  }
  param_1[1] = local_8;
  puVar1[local_8] = 0;
  return;
}



// ===== FUN_71007e2260 @ 71007e2260 (size=252) =====

void FUN_71007e2260(long *param_1,long *param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong local_8;
  
  if (param_1 == param_2) {
    return;
  }
  plVar4 = (long *)*param_1;
  uVar3 = param_2[1];
  if (param_1 + 2 == plVar4) {
    uVar2 = 0xf;
  }
  else {
    uVar2 = param_1[2];
  }
  if (uVar2 < uVar3) {
    local_8 = uVar3;
    plVar4 = (long *)FUN_71007e2140(param_1,&local_8);
    if (param_1 + 2 != (long *)*param_1) {
      thunk_FUN_710081c200();
    }
    *param_1 = (long)plVar4;
    param_1[2] = local_8;
    puVar1 = (undefined1 *)*param_2;
  }
  else {
    if (uVar3 == 0) {
      param_1[1] = 0;
      *(undefined1 *)plVar4 = 0;
      return;
    }
    puVar1 = (undefined1 *)*param_2;
    if (uVar3 == 1) {
      *(undefined1 *)plVar4 = *puVar1;
      param_1[1] = 1;
      *(undefined1 *)(*param_1 + 1) = 0;
      return;
    }
  }
  FUN_710080f900(plVar4,puVar1,uVar3);
  param_1[1] = uVar3;
  *(undefined1 *)(*param_1 + uVar3) = 0;
  return;
}



// ===== FUN_71007e2360 @ 71007e2360 (size=296) =====

void FUN_71007e2360(long *param_1,long param_2,long param_3,undefined1 *param_4,long param_5)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long local_8;
  
  local_8 = (param_5 - param_3) + param_1[1];
  if (param_1 + 2 == (long *)*param_1) {
    lVar2 = 0xf;
  }
  else {
    lVar2 = param_1[2];
  }
  param_3 = param_2 + param_3;
  lVar3 = param_1[1] - param_3;
  puVar1 = (undefined1 *)FUN_71007e2140(param_1,&local_8,lVar2);
  if (param_2 != 0) {
    if (param_2 == 1) {
      *puVar1 = *(undefined1 *)*param_1;
    }
    else {
      FUN_710080f900(puVar1,(undefined1 *)*param_1,param_2);
    }
  }
  if (param_4 != (undefined1 *)0x0 && param_5 != 0) {
    if (param_5 == 1) {
      puVar1[param_2] = *param_4;
    }
    else {
      FUN_710080f900(puVar1 + param_2,param_4,param_5);
    }
  }
  if (lVar3 != 0) {
    if (lVar3 == 1) {
      puVar1[param_2 + param_5] = *(undefined1 *)(*param_1 + param_3);
    }
    else {
      FUN_710080f900(puVar1 + param_2 + param_5,*param_1 + param_3,lVar3);
    }
  }
  if (param_1 + 2 != (long *)*param_1) {
    thunk_FUN_710081c200();
  }
  *param_1 = (long)puVar1;
  param_1[2] = local_8;
  return;
}



// ===== FUN_71007e24a0 @ 71007e24a0 (size=144) =====

void FUN_71007e24a0(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar3 = param_2 + param_3;
  if (lVar1 == lVar3 || param_3 == 0) {
    param_1[1] = lVar1 - param_3;
    *(undefined1 *)(*param_1 + (lVar1 - param_3)) = 0;
    return;
  }
  lVar2 = *param_1;
  if (lVar1 - lVar3 != 1) {
    FUN_710080f900(lVar2 + param_2,lVar2 + lVar3);
    lVar3 = param_1[1];
    param_1[1] = lVar3 - param_3;
    *(undefined1 *)(*param_1 + (lVar3 - param_3)) = 0;
    return;
  }
  *(undefined1 *)(lVar2 + param_2) = *(undefined1 *)(lVar2 + lVar3);
  lVar3 = param_1[1];
  param_1[1] = lVar3 - param_3;
  *(undefined1 *)(*param_1 + (lVar3 - param_3)) = 0;
  return;
}



// ===== FUN_71007e2540 @ 71007e2540 (size=116) =====

void FUN_71007e2540(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  *param_1 = (long)(param_1 + 2);
  plVar2 = param_2 + 2;
  lVar3 = *param_2;
  if (plVar2 != (long *)lVar3) {
    param_1[2] = param_2[2];
    lVar1 = param_2[1];
    *(undefined1 *)(param_2 + 2) = 0;
    *param_1 = lVar3;
    param_1[1] = lVar1;
    *param_2 = (long)plVar2;
    param_2[1] = 0;
    return;
  }
  FUN_710080f900(param_1 + 2,plVar2,param_2[1] + 1);
  param_1[1] = param_2[1];
  *param_2 = (long)plVar2;
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  return;
}



// ===== FUN_71007e25c0 @ 71007e25c0 (size=164) =====

void FUN_71007e25c0(undefined8 *param_1,ulong param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong local_8;
  
  if (param_1 + 2 == (undefined8 *)*param_1) {
    uVar2 = 0xf;
  }
  else {
    uVar2 = param_1[2];
  }
  if (param_2 <= uVar2) {
    return;
  }
  local_8 = param_2;
  puVar1 = (undefined1 *)FUN_71007e2140(param_1,&local_8);
  if (param_1[1] == 0) {
    *puVar1 = *(undefined1 *)*param_1;
  }
  else {
    FUN_710080f900(puVar1,(undefined1 *)*param_1,param_1[1] + 1);
  }
  if (param_1 + 2 != (undefined8 *)*param_1) {
    thunk_FUN_710081c200();
  }
  *param_1 = puVar1;
  param_1[2] = local_8;
  return;
}



// ===== FUN_71007e2680 @ 71007e2680 (size=144) =====

void FUN_71007e2680(long *param_1,undefined1 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = param_1[1];
  if ((long *)*param_1 == param_1 + 2) {
    uVar3 = 0xf;
  }
  else {
    uVar3 = param_1[2];
  }
  uVar1 = lVar2 + 1;
  if (uVar1 <= uVar3) {
    *(undefined1 *)(*param_1 + lVar2) = param_2;
    param_1[1] = uVar1;
    *(undefined1 *)(*param_1 + uVar1) = 0;
    return;
  }
  FUN_71007e2360(param_1,lVar2,0,0,1);
  *(undefined1 *)(*param_1 + lVar2) = param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(*param_1 + uVar1) = 0;
  return;
}



// ===== FUN_71007e2720 @ 71007e2720 (size=32) =====

void FUN_71007e2720(long param_1)

{
  FUN_71007e24a0(param_1,*(long *)(param_1 + 8) + -1,1);
  return;
}



// ===== FUN_71007e2740 @ 71007e2740 (size=336) =====

long * FUN_71007e2740(long *param_1,long param_2,ulong param_3,ulong param_4,undefined1 param_5)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = param_1[1];
  if ((param_3 + 0x7ffffffffffffffe) - lVar4 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::_M_replace_aux");
  }
  plVar3 = (long *)*param_1;
  if (plVar3 == param_1 + 2) {
    uVar2 = 0xf;
  }
  else {
    uVar2 = param_1[2];
  }
  uVar1 = (param_4 - param_3) + lVar4;
  if (uVar2 < uVar1) {
    FUN_71007e2360(param_1,param_2,param_3,0,param_4);
    plVar3 = (long *)*param_1;
  }
  else {
    lVar4 = lVar4 - (param_3 + param_2);
    if (lVar4 != 0 && param_3 != param_4) {
      if (lVar4 == 1) {
        *(undefined1 *)((long)plVar3 + param_4 + param_2) =
             *(undefined1 *)((long)plVar3 + param_3 + param_2);
        plVar3 = (long *)*param_1;
      }
      else {
        FUN_710080f900((long)plVar3 + param_4 + param_2,(long)plVar3 + param_3 + param_2,lVar4);
        plVar3 = (long *)*param_1;
      }
    }
  }
  if (param_4 != 0) {
    if (param_4 == 1) {
      *(undefined1 *)((long)plVar3 + param_2) = param_5;
      param_1[1] = uVar1;
      *(undefined1 *)(*param_1 + uVar1) = 0;
      return param_1;
    }
    FUN_7100808340((long)plVar3 + param_2,param_5,param_4);
    plVar3 = (long *)*param_1;
  }
  param_1[1] = uVar1;
  *(undefined1 *)((long)plVar3 + uVar1) = 0;
  return param_1;
}



// ===== FUN_71007e28a0 @ 71007e28a0 (size=56) =====

void FUN_71007e28a0(long *param_1,ulong param_2,undefined4 param_3)

{
  ulong uVar1;
  
  uVar1 = param_1[1];
  if (param_2 <= uVar1) {
    if (param_2 < uVar1) {
      param_1[1] = param_2;
      *(undefined1 *)(*param_1 + param_2) = 0;
    }
    return;
  }
  FUN_71007e2740(param_1,uVar1,0,param_2 - uVar1,param_3);
  return;
}



// ===== FUN_71007e28e0 @ 71007e28e0 (size=372) =====

long * FUN_71007e28e0(long *param_1,long param_2,ulong param_3,long *param_4,ulong param_5)

{
  ulong uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar4 = param_1[1];
  if ((param_3 + 0x7ffffffffffffffe) - lVar4 < param_5) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::_M_replace");
  }
  plVar6 = (long *)*param_1;
  if (plVar6 == param_1 + 2) {
    uVar3 = 0xf;
  }
  else {
    uVar3 = param_1[2];
  }
  uVar1 = (param_5 - param_3) + lVar4;
  if (uVar1 <= uVar3) {
    puVar2 = (undefined1 *)((long)plVar6 + param_2);
    lVar5 = lVar4 - (param_3 + param_2);
    if ((param_4 < plVar6) || ((long *)((long)plVar6 + lVar4) < param_4)) {
      if (lVar5 != 0 && param_3 != param_5) {
        if (lVar5 == 1) {
          puVar2[param_5] = puVar2[param_3];
        }
        else {
          FUN_710080f900(puVar2 + param_5,puVar2 + param_3,lVar5);
        }
      }
      if (param_5 != 0) {
        if (param_5 == 1) {
          *(char *)((long)plVar6 + param_2) = (char)*param_4;
          param_1[1] = uVar1;
          *(undefined1 *)(*param_1 + uVar1) = 0;
          return param_1;
        }
        FUN_710080f900(puVar2,param_4,param_5);
      }
    }
    else {
      FUN_7100003cd8(param_1,puVar2);
    }
    param_1[1] = uVar1;
    *(undefined1 *)(*param_1 + uVar1) = 0;
    return param_1;
  }
  FUN_71007e2360(param_1,param_2);
  param_1[1] = uVar1;
  *(undefined1 *)(*param_1 + uVar1) = 0;
  return param_1;
}



// ===== FUN_71007e2a60 @ 71007e2a60 (size=188) =====

long * FUN_71007e2a60(long *param_1,undefined1 *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  lVar2 = param_1[1];
  if (plVar4 == param_1 + 2) {
    uVar3 = 0xf;
  }
  else {
    uVar3 = param_1[2];
  }
  uVar1 = param_3 + lVar2;
  if (uVar1 <= uVar3) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        *(undefined1 *)((long)plVar4 + lVar2) = *param_2;
        param_1[1] = uVar1;
        *(undefined1 *)(*param_1 + uVar1) = 0;
        return param_1;
      }
      FUN_710080f900((long)plVar4 + lVar2);
      plVar4 = (long *)*param_1;
    }
    param_1[1] = uVar1;
    *(undefined1 *)((long)plVar4 + uVar1) = 0;
    return param_1;
  }
  FUN_71007e2360(param_1,lVar2,0,param_2,param_3);
  param_1[1] = uVar1;
  *(undefined1 *)(*param_1 + uVar1) = 0;
  return param_1;
}



// ===== FUN_71007e2b20 @ 71007e2b20 (size=44) =====

void FUN_71007e2b20(long param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 <= 0x7ffffffffffffffeU - *(long *)(param_1 + 8)) {
    FUN_71007e2a60();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003b58("basic_string::append");
}



// ===== FUN_71007e2b60 @ 71007e2b60 (size=84) =====

void FUN_71007e2b60(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_710081ce00(param_2);
  if (uVar1 <= 0x7ffffffffffffffeU - *(long *)(param_1 + 8)) {
    FUN_71007e2a60(param_1,param_2,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003b58("basic_string::append",param_2);
}



// ===== FUN_71007e2bc0 @ 71007e2bc0 (size=132) =====

ulong FUN_71007e2bc0(long *param_1,undefined1 *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  
  if ((ulong)param_1[1] < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003bf8("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::copy",
                   param_4);
  }
  uVar1 = param_1[1] - param_4;
  if (param_3 < uVar1) {
    uVar1 = param_3;
  }
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      *param_2 = *(undefined1 *)(*param_1 + param_4);
      return 1;
    }
    FUN_710080f900(param_2,*param_1 + param_4);
  }
  return uVar1;
}



// ===== FUN_71007e2c60 @ 71007e2c60 (size=420) =====

void FUN_71007e2c60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_10 [16];
  
  if (param_1 == param_2) {
    return;
  }
  puVar3 = param_1 + 2;
  puVar6 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)*param_2;
  if (puVar3 == puVar6) {
    puVar6 = param_2 + 2;
    lVar2 = param_1[1];
    if (puVar6 == puVar4) {
      lVar5 = param_2[1];
      if (lVar2 == 0) {
        uVar7 = 0;
        if (lVar5 != 0) {
          FUN_710080f900(puVar3,puVar6,lVar5 + 1);
          param_1[1] = param_2[1];
          param_2[1] = 0;
          *(undefined1 *)*param_2 = 0;
          return;
        }
        goto LAB_71007e2cb8;
      }
      if (lVar5 == 0) {
        FUN_710080f900(puVar6,puVar3,lVar2 + 1);
        param_2[1] = param_1[1];
        param_1[1] = 0;
        *(undefined1 *)*param_1 = 0;
        return;
      }
      FUN_710080f900(auStack_10,puVar6,lVar5 + 1);
      FUN_710080f900(puVar6,puVar3,lVar2 + 1);
      FUN_710080f900(puVar3,auStack_10,lVar5 + 1);
    }
    else {
      uVar1 = param_2[2];
      uVar7 = FUN_710080f900(puVar6,puVar3,lVar2 + 1);
      *param_1 = puVar4;
      *param_2 = uVar7;
      param_1[2] = uVar1;
    }
  }
  else {
    uVar7 = param_1[2];
    if (puVar4 == param_2 + 2) {
      uVar1 = FUN_710080f900(puVar3,puVar4,param_2[1] + 1);
      *param_2 = puVar6;
      *param_1 = uVar1;
    }
    else {
      *param_1 = puVar4;
      *param_2 = puVar6;
      param_1[2] = param_2[2];
    }
    param_2[2] = uVar7;
  }
  uVar7 = param_2[1];
  lVar5 = param_1[1];
LAB_71007e2cb8:
  param_1[1] = uVar7;
  param_2[1] = lVar5;
  return;
}



// ===== FUN_71007e2e20 @ 71007e2e20 (size=208) =====

ulong FUN_71007e2e20(long *param_1,undefined1 *param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  uVar8 = param_1[1];
  uVar6 = param_3;
  if (uVar8 < param_3) {
    uVar6 = 0xffffffffffffffff;
  }
  if (((param_4 != 0) && (uVar6 = 0xffffffffffffffff, param_3 < uVar8)) &&
     (uVar5 = uVar8 - param_3, param_4 <= uVar5)) {
    lVar7 = *param_1;
    uVar2 = *param_2;
    lVar4 = lVar7 + param_3;
    do {
      lVar1 = (1 - param_4) + uVar5;
      if ((lVar1 == 0) || (lVar4 = FUN_710080c980(lVar4,uVar2,lVar1), lVar4 == 0)) break;
      iVar3 = FUN_710081ec40(lVar4,param_2,param_4);
      if (iVar3 == 0) {
        return lVar4 - lVar7;
      }
      lVar4 = lVar4 + 1;
      uVar5 = (lVar7 + uVar8) - lVar4;
    } while (param_4 <= uVar5);
    uVar6 = 0xffffffffffffffff;
  }
  return uVar6;
}



// ===== FUN_71007e2f40 @ 71007e2f40 (size=80) =====

long FUN_71007e2f40(long *param_1,undefined1 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 < (ulong)param_1[1]) {
    lVar2 = *param_1;
    lVar1 = FUN_710080c980(lVar2 + param_3,param_2,param_1[1] - param_3);
    lVar2 = lVar1 - lVar2;
    if (lVar1 == 0) {
      lVar2 = -1;
    }
    return lVar2;
  }
  return -1;
}



// ===== FUN_71007e2fa0 @ 71007e2fa0 (size=144) =====

ulong FUN_71007e2fa0(long *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  if ((ulong)param_1[1] < param_4) {
    return 0xffffffffffffffff;
  }
  uVar2 = param_1[1] - param_4;
  if (param_3 < uVar2) {
    uVar2 = param_3;
  }
  if (param_4 != 0) {
    lVar3 = *param_1;
    while (iVar1 = FUN_710081ec40(lVar3 + uVar2,param_2,param_4), iVar1 != 0) {
      if (uVar2 == 0) {
        return 0xffffffffffffffff;
      }
      uVar2 = uVar2 - 1;
    }
  }
  return uVar2;
}



// ===== FUN_71007e3080 @ 71007e3080 (size=64) =====

long FUN_71007e3080(long *param_1,char param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  
  if (param_1[1] != 0) {
    uVar2 = param_1[1] - 1;
    if (param_3 < uVar2) {
      uVar2 = param_3;
    }
    lVar1 = uVar2 + 1;
    do {
      lVar1 = lVar1 + -1;
      if (*(char *)(*param_1 + lVar1) == param_2) {
        return lVar1;
      }
    } while (lVar1 != 0);
  }
  return -1;
}



// ===== FUN_71007e30c0 @ 71007e30c0 (size=56) =====

ulong FUN_71007e30c0(long *param_1,char param_2,ulong param_3)

{
  while( true ) {
    if ((ulong)param_1[1] <= param_3) {
      return 0xffffffffffffffff;
    }
    if (*(char *)(*param_1 + param_3) != param_2) break;
    param_3 = param_3 + 1;
  }
  return param_3;
}



// ===== FUN_71007e3100 @ 71007e3100 (size=180) =====

void FUN_71007e3100(long *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong local_8;
  
  uVar2 = param_3 - (long)param_2;
  local_8 = uVar2;
  if (uVar2 < 0x10) {
    puVar1 = (undefined1 *)*param_1;
    if (uVar2 == 1) {
      *puVar1 = *param_2;
      param_1[1] = 1;
      *(undefined1 *)(*param_1 + 1) = 0;
      return;
    }
    if (uVar2 == 0) {
      param_1[1] = 0;
      *puVar1 = 0;
      return;
    }
  }
  else {
    puVar1 = (undefined1 *)FUN_71007e2140(param_1,&local_8,0);
    *param_1 = (long)puVar1;
    param_1[2] = local_8;
  }
  FUN_710080f900(puVar1,param_2,uVar2);
  param_1[1] = local_8;
  *(undefined1 *)(*param_1 + local_8) = 0;
  return;
}



// ===== FUN_71007e31c0 @ 71007e31c0 (size=116) =====

long * FUN_71007e31c0(long *param_1,long *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  
  uVar1 = param_2[1];
  if (param_3 <= uVar1) {
    *param_1 = (long)(param_1 + 2);
    uVar1 = uVar1 - param_3;
    if (param_4 < uVar1) {
      uVar1 = param_4;
    }
    FUN_71007e3100(param_1,*param_2 + param_3,*param_2 + param_3 + uVar1,0);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003bf8("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::substr",
                 param_3);
}



// ===== FUN_71007e3380 @ 71007e3380 (size=72) =====

bool FUN_71007e3380(long *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  long extraout_x1;
  
  iVar1 = (**(code **)(*param_1 + 0x28))();
  if (*(long *)(param_3 + 2) != extraout_x1) {
    return false;
  }
  return *param_3 == iVar1;
}



// ===== FUN_71007e3420 @ 71007e3420 (size=224) =====

long * FUN_71007e3420(long *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  
  lVar4 = 0x3c;
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  do {
    FUN_71007e25c0(param_1,lVar4);
    pcVar3 = (char *)*param_1;
    *pcVar3 = '\0';
    iVar1 = FUN_710081c220(param_3,pcVar3,lVar4);
    if (iVar1 == 0) {
LAB_71007e3454:
      lVar2 = FUN_710081ce00(pcVar3);
LAB_71007e345c:
      param_1[1] = lVar2;
      *(undefined1 *)(*param_1 + lVar2) = 0;
      lVar2 = param_1[1];
    }
    else {
      if (iVar1 != 0x22) {
        if (*pcVar3 != '\0') goto LAB_71007e3454;
        builtin_strncpy(pcVar3,"Unknown error",0xd);
        lVar2 = 0xd;
        goto LAB_71007e345c;
      }
      param_1[1] = 0;
      lVar4 = lVar4 << 1;
      *(undefined1 *)*param_1 = 0;
      lVar2 = param_1[1];
    }
    if (lVar2 != 0) {
      return param_1;
    }
  } while( true );
}



// ===== FUN_71007e3540 @ 71007e3540 (size=20) =====

void FUN_71007e3540(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aeebe8;
  FUN_71007b09c0();
  return;
}



// ===== FUN_71007e3560 @ 71007e3560 (size=28) =====

void FUN_71007e3560(undefined8 param_1)

{
  FUN_71007e3540();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007e3580 @ 71007e3580 (size=80) =====

undefined8 FUN_71007e3580(undefined8 param_1,long *param_2)

{
  undefined1 *local_20;
  undefined8 uStack_18;
  undefined1 auStack_10 [16];
  
  (**(code **)(*param_2 + 0x20))(&local_20);
  FUN_71007b6600(param_1,local_20,uStack_18);
  if (local_20 != auStack_10) {
    thunk_FUN_710081c200();
  }
  return param_1;
}



// ===== FUN_71007e36c0 @ 71007e36c0 (size=4) =====

void FUN_71007e36c0(void)

{
  return;
}



// ===== FUN_71007e3700 @ 71007e3700 (size=48) =====

void FUN_71007e3700(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_7100aeeb48;
  FUN_71007e36c0();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007e3760 @ 71007e3760 (size=48) =====

void FUN_71007e3760(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_7100aeeb98;
  FUN_71007e36c0();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007e37a0 @ 71007e37a0 (size=12) =====

undefined ** FUN_71007e37a0(void)

{
  return &PTR_PTR_LAB_7100af4778;
}



// ===== FUN_71007e37c0 @ 71007e37c0 (size=12) =====

undefined ** FUN_71007e37c0(void)

{
  return &PTR_PTR_LAB_7100af4780;
}



// ===== FUN_71007e3a80 @ 71007e3a80 (size=20) =====

void FUN_71007e3a80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aef058;
  FUN_71007afc60();
  return;
}



// ===== FUN_71007e3ae0 @ 71007e3ae0 (size=52) =====

void FUN_71007e3ae0(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_7100aeef80;
  FUN_71007afc60();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007e3b20 @ 71007e3b20 (size=52) =====

void FUN_71007e3b20(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_7100aeeff8;
  FUN_71007afc60();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007e3b60 @ 71007e3b60 (size=52) =====

void FUN_71007e3b60(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_7100aef1f8;
  FUN_71007afc60();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007e3ba0 @ 71007e3ba0 (size=52) =====

void FUN_71007e3ba0(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_7100aef228;
  FUN_71007afc60();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007e3be0 @ 71007e3be0 (size=28) =====

void FUN_71007e3be0(undefined8 param_1)

{
  FUN_71007e3a80();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007e3c00 @ 71007e3c00 (size=52) =====

void FUN_71007e3c00(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_7100aef258;
  FUN_71007afc60();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007e3c40 @ 71007e3c40 (size=52) =====

void FUN_71007e3c40(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_7100aef280;
  FUN_71007afc60();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007e3c80 @ 71007e3c80 (size=104) =====

void FUN_71007e3c80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aef2d0;
  if ((*(byte *)(param_1 + 0x13) & 1) != 0) {
    if (param_1[2] != 0) {
      thunk_FUN_710081c200();
    }
    if (param_1[6] != 0) {
      thunk_FUN_710081c200();
    }
    if (param_1[8] != 0) {
      thunk_FUN_710081c200();
    }
    if (param_1[10] != 0) {
      thunk_FUN_710081c200();
    }
  }
  FUN_71007afc60(param_1);
  return;
}



// ===== FUN_71007e3d00 @ 71007e3d00 (size=28) =====

void FUN_71007e3d00(undefined8 param_1)

{
  FUN_71007e3c80();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007e3d20 @ 71007e3d20 (size=104) =====

void FUN_71007e3d20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aef2f0;
  if ((*(byte *)(param_1 + 0x13) & 1) != 0) {
    if (param_1[2] != 0) {
      thunk_FUN_710081c200();
    }
    if (param_1[6] != 0) {
      thunk_FUN_710081c200();
    }
    if (param_1[8] != 0) {
      thunk_FUN_710081c200();
    }
    if (param_1[10] != 0) {
      thunk_FUN_710081c200();
    }
  }
  FUN_71007afc60(param_1);
  return;
}



// ===== FUN_71007e3da0 @ 71007e3da0 (size=28) =====

void FUN_71007e3da0(undefined8 param_1)

{
  FUN_71007e3d20();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007e3dc0 @ 71007e3dc0 (size=116) =====

void FUN_71007e3dc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aef310;
  if ((*(byte *)(param_1 + 0x29) & 1) != 0) {
    if (param_1[2] != 0) {
      thunk_FUN_710081c200();
    }
    if (param_1[5] != 0) {
      thunk_FUN_710081c200();
    }
    if (param_1[7] != 0) {
      thunk_FUN_710081c200();
    }
    FUN_71007afc60(param_1);
    return;
  }
  FUN_71007afc60(param_1);
  return;
}



// ===== FUN_71007e3e40 @ 71007e3e40 (size=28) =====

void FUN_71007e3e40(undefined8 param_1)

{
  FUN_71007e3dc0();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007e3e60 @ 71007e3e60 (size=52) =====

void FUN_71007e3e60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aef168;
  FUN_71007fb180(param_1 + 2);
  FUN_71007afc60(param_1);
  return;
}



// ===== FUN_71007e3ea0 @ 71007e3ea0 (size=28) =====

void FUN_71007e3ea0(undefined8 param_1)

{
  FUN_71007e3e60();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007e3ec0 @ 71007e3ec0 (size=52) =====

void FUN_71007e3ec0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aeee80;
  FUN_71007fb180(param_1 + 2);
  FUN_71007afc60(param_1);
  return;
}



// ===== FUN_71007e3f00 @ 71007e3f00 (size=104) =====

void FUN_71007e3f00(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[4];
  *param_1 = &PTR_FUN_7100aef078;
  lVar1 = FUN_71007afdc0();
  if (lVar2 != 0 && lVar2 != lVar1) {
    thunk_FUN_710081c200(lVar2);
  }
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  FUN_71007fb180(param_1 + 3);
  FUN_71007afc60(param_1);
  return;
}



// ===== FUN_71007e3f80 @ 71007e3f80 (size=28) =====

void FUN_71007e3f80(undefined8 param_1)

{
  FUN_71007e3f00();
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007e3fa0 @ 71007e3fa0 (size=40) =====

void FUN_71007e3fa0(long *param_1)

{
  if ((ulong)param_1[2] < (ulong)param_1[3]) {
    param_1[2] = param_1[2] + 4;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0071007e3fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))();
  return;
}



// ===== FUN_71007e3fe0 @ 71007e3fe0 (size=184) =====

long * FUN_71007e3fe0(undefined1 *param_1,undefined1 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1 == param_2) {
    return (long *)&DAT_7100d210f0;
  }
  if (param_1 != (undefined1 *)0x0) {
    lVar3 = (long)param_2 - (long)param_1;
    plVar1 = (long *)FUN_71007b6800(lVar3,0);
    plVar2 = plVar1 + 3;
    if (lVar3 == 1) {
      *(undefined1 *)(plVar1 + 3) = *param_1;
    }
    else {
      plVar2 = (long *)FUN_710080f900(plVar2,param_1,lVar3);
    }
    if (plVar1 != (long *)&DAT_7100d210d8) {
      *plVar1 = lVar3;
      *(undefined4 *)(plVar1 + 2) = 0;
      *(undefined1 *)((long)plVar1 + lVar3 + 0x18) = 0;
    }
    return plVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string::_S_construct null not valid");
}



// ===== FUN_71007e40a0 @ 71007e40a0 (size=200) =====

long * FUN_71007e40a0(undefined4 *param_1,undefined4 *param_2)

{
  long *plVar1;
  long lVar2;
  
  if (param_1 == param_2) {
    return (long *)0x7100d21110;
  }
  if (param_1 != (undefined4 *)0x0) {
    lVar2 = (long)param_2 - (long)param_1 >> 2;
    plVar1 = (long *)FUN_71007b7480(lVar2,0);
    if (lVar2 == 1) {
      *(undefined4 *)(plVar1 + 3) = *param_1;
    }
    else if (lVar2 != 0) {
      FUN_710080e900(plVar1 + 3,param_1,lVar2);
    }
    if (plVar1 != (long *)&DAT_7100d210f8) {
      *plVar1 = lVar2;
      *(undefined4 *)(plVar1 + 2) = 0;
      *(undefined4 *)((long)plVar1 + ((long)param_2 - (long)param_1) + 0x18) = 0;
    }
    return plVar1 + 3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string::_S_construct null not valid");
}



// ===== FUN_71007e4180 @ 71007e4180 (size=60) =====

void FUN_71007e4180(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100aeee80;
  FUN_71007fb180(param_1 + 2);
  FUN_71007afc60(param_1);
  thunk_FUN_710081c200(param_1);
  return;
}



// ===== FUN_71007e41c0 @ 71007e41c0 (size=224) =====

undefined8 * FUN_71007e41c0(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_8 [8];
  
  puVar4 = *(undefined1 **)(*(long *)(param_2 + 0x10) + 0x10);
  if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string::_S_construct null not valid");
  }
  lVar1 = FUN_710081ce00(puVar4);
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_71007b6800(lVar1,0,auStack_8);
    plVar3 = plVar2 + 3;
    if (lVar1 == 1) {
      *(undefined1 *)(plVar2 + 3) = *puVar4;
    }
    else {
      plVar3 = (long *)FUN_710080f900(plVar3,puVar4,lVar1);
    }
    if (plVar2 != (long *)&DAT_7100d210d8) {
      *plVar2 = lVar1;
      *(undefined4 *)(plVar2 + 2) = 0;
      *(undefined1 *)((long)plVar2 + lVar1 + 0x18) = 0;
    }
    *param_1 = plVar3;
    return param_1;
  }
  *param_1 = &DAT_7100d210f0;
  return param_1;
}



// ===== FUN_71007e42a0 @ 71007e42a0 (size=224) =====

undefined8 * FUN_71007e42a0(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_8 [8];
  
  puVar4 = *(undefined1 **)(*(long *)(param_2 + 0x10) + 0x10);
  if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string::_S_construct null not valid");
  }
  lVar1 = FUN_710081ce00(puVar4);
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_71007b6800(lVar1,0,auStack_8);
    plVar3 = plVar2 + 3;
    if (lVar1 == 1) {
      *(undefined1 *)(plVar2 + 3) = *puVar4;
    }
    else {
      plVar3 = (long *)FUN_710080f900(plVar3,puVar4,lVar1);
    }
    if (plVar2 != (long *)&DAT_7100d210d8) {
      *plVar2 = lVar1;
      *(undefined4 *)(plVar2 + 2) = 0;
      *(undefined1 *)((long)plVar2 + lVar1 + 0x18) = 0;
    }
    *param_1 = plVar3;
    return param_1;
  }
  *param_1 = &DAT_7100d210f0;
  return param_1;
}



// ===== FUN_71007e4380 @ 71007e4380 (size=224) =====

undefined8 * FUN_71007e4380(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_8 [8];
  
  puVar4 = *(undefined1 **)(*(long *)(param_2 + 0x10) + 0x10);
  if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string::_S_construct null not valid");
  }
  lVar1 = FUN_710081ce00(puVar4);
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_71007b6800(lVar1,0,auStack_8);
    plVar3 = plVar2 + 3;
    if (lVar1 == 1) {
      *(undefined1 *)(plVar2 + 3) = *puVar4;
    }
    else {
      plVar3 = (long *)FUN_710080f900(plVar3,puVar4,lVar1);
    }
    if (plVar2 != (long *)&DAT_7100d210d8) {
      *plVar2 = lVar1;
      *(undefined4 *)(plVar2 + 2) = 0;
      *(undefined1 *)((long)plVar2 + lVar1 + 0x18) = 0;
    }
    *param_1 = plVar3;
    return param_1;
  }
  *param_1 = &DAT_7100d210f0;
  return param_1;
}



// ===== FUN_71007e4460 @ 71007e4460 (size=368) =====

int FUN_71007e4460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  undefined1 auStack_8 [8];
  
  lVar7 = FUN_71007e40a0(param_2,param_3,auStack_8);
  lVar8 = FUN_71007e40a0(param_4,param_5,auStack_8);
  lVar1 = lVar7 + *(long *)(lVar7 + -0x18) * 4;
  lVar2 = lVar8 + *(long *)(lVar8 + -0x18) * 4;
  lVar10 = lVar7;
  lVar12 = lVar8;
  do {
    iVar6 = FUN_71007fb9c0(param_1,lVar10,lVar12);
    if (iVar6 != 0) {
joined_r0x0071007e4574:
      if (lVar8 != 0x7100d21110) {
        piVar11 = (int *)(lVar8 + -8);
        do {
          iVar3 = *piVar11;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar5) {
            *piVar11 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 < 1) {
          thunk_FUN_710081c200(lVar8 + -0x18,auStack_8);
        }
      }
      if ((undefined1 *)(lVar7 + -0x18) != &DAT_7100d210f8) {
        piVar11 = (int *)(lVar7 + -8);
        do {
          iVar3 = *piVar11;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar5) {
            *piVar11 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 < 1) {
          thunk_FUN_710081c200((undefined1 *)(lVar7 + -0x18),auStack_8);
        }
      }
      return iVar6;
    }
    lVar9 = FUN_710081f600(lVar10);
    lVar10 = lVar10 + lVar9 * 4;
    lVar9 = FUN_710081f600(lVar12);
    lVar12 = lVar12 + lVar9 * 4;
    if (lVar1 == lVar10 && lVar2 == lVar12) goto joined_r0x0071007e4574;
    if (lVar1 == lVar10) {
      iVar6 = -1;
      goto joined_r0x0071007e4574;
    }
    if (lVar2 == lVar12) {
      iVar6 = 1;
      goto joined_r0x0071007e4574;
    }
    lVar10 = lVar10 + 4;
    lVar12 = lVar12 + 4;
  } while( true );
}



// ===== FUN_71007e4740 @ 71007e4740 (size=232) =====

undefined8 * FUN_71007e4740(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined1 auStack_8 [8];
  
  puVar3 = *(undefined4 **)(*(long *)(param_2 + 0x10) + 0x30);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string::_S_construct null not valid");
  }
  lVar1 = FUN_710081f600(puVar3);
  lVar1 = lVar1 * 4;
  if (lVar1 == 0) {
    *param_1 = 0x7100d21110;
    return param_1;
  }
  lVar4 = lVar1 >> 2;
  plVar2 = (long *)FUN_71007b7480(lVar4,0,auStack_8);
  if (lVar4 == 1) {
    *(undefined4 *)(plVar2 + 3) = *puVar3;
  }
  else if (lVar4 != 0) {
    FUN_710080e900(plVar2 + 3,puVar3,lVar4);
  }
  if (plVar2 != (long *)&DAT_7100d210f8) {
    *plVar2 = lVar4;
    *(undefined4 *)(plVar2 + 2) = 0;
    *(undefined4 *)((long)plVar2 + lVar1 + 0x18) = 0;
  }
  *param_1 = plVar2 + 3;
  return param_1;
}



// ===== FUN_71007e4840 @ 71007e4840 (size=232) =====

undefined8 * FUN_71007e4840(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined1 auStack_8 [8];
  
  puVar3 = *(undefined4 **)(*(long *)(param_2 + 0x10) + 0x40);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string::_S_construct null not valid");
  }
  lVar1 = FUN_710081f600(puVar3);
  lVar1 = lVar1 * 4;
  if (lVar1 == 0) {
    *param_1 = 0x7100d21110;
    return param_1;
  }
  lVar4 = lVar1 >> 2;
  plVar2 = (long *)FUN_71007b7480(lVar4,0,auStack_8);
  if (lVar4 == 1) {
    *(undefined4 *)(plVar2 + 3) = *puVar3;
  }
  else if (lVar4 != 0) {
    FUN_710080e900(plVar2 + 3,puVar3,lVar4);
  }
  if (plVar2 != (long *)&DAT_7100d210f8) {
    *plVar2 = lVar4;
    *(undefined4 *)(plVar2 + 2) = 0;
    *(undefined4 *)((long)plVar2 + lVar1 + 0x18) = 0;
  }
  *param_1 = plVar2 + 3;
  return param_1;
}



// ===== FUN_71007e4940 @ 71007e4940 (size=232) =====

undefined8 * FUN_71007e4940(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined1 auStack_8 [8];
  
  puVar3 = *(undefined4 **)(*(long *)(param_2 + 0x10) + 0x50);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string::_S_construct null not valid");
  }
  lVar1 = FUN_710081f600(puVar3);
  lVar1 = lVar1 * 4;
  if (lVar1 == 0) {
    *param_1 = 0x7100d21110;
    return param_1;
  }
  lVar4 = lVar1 >> 2;
  plVar2 = (long *)FUN_71007b7480(lVar4,0,auStack_8);
  if (lVar4 == 1) {
    *(undefined4 *)(plVar2 + 3) = *puVar3;
  }
  else if (lVar4 != 0) {
    FUN_710080e900(plVar2 + 3,puVar3,lVar4);
  }
  if (plVar2 != (long *)&DAT_7100d210f8) {
    *plVar2 = lVar4;
    *(undefined4 *)(plVar2 + 2) = 0;
    *(undefined4 *)((long)plVar2 + lVar1 + 0x18) = 0;
  }
  *param_1 = plVar2 + 3;
  return param_1;
}



// ===== FUN_71007e4a40 @ 71007e4a40 (size=232) =====

undefined8 * FUN_71007e4a40(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined1 auStack_8 [8];
  
  puVar3 = *(undefined4 **)(*(long *)(param_2 + 0x10) + 0x30);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string::_S_construct null not valid");
  }
  lVar1 = FUN_710081f600(puVar3);
  lVar1 = lVar1 * 4;
  if (lVar1 == 0) {
    *param_1 = 0x7100d21110;
    return param_1;
  }
  lVar4 = lVar1 >> 2;
  plVar2 = (long *)FUN_71007b7480(lVar4,0,auStack_8);
  if (lVar4 == 1) {
    *(undefined4 *)(plVar2 + 3) = *puVar3;
  }
  else if (lVar4 != 0) {
    FUN_710080e900(plVar2 + 3,puVar3,lVar4);
  }
  if (plVar2 != (long *)&DAT_7100d210f8) {
    *plVar2 = lVar4;
    *(undefined4 *)(plVar2 + 2) = 0;
    *(undefined4 *)((long)plVar2 + lVar1 + 0x18) = 0;
  }
  *param_1 = plVar2 + 3;
  return param_1;
}



// ===== FUN_71007e4b40 @ 71007e4b40 (size=232) =====

undefined8 * FUN_71007e4b40(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined1 auStack_8 [8];
  
  puVar3 = *(undefined4 **)(*(long *)(param_2 + 0x10) + 0x40);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string::_S_construct null not valid");
  }
  lVar1 = FUN_710081f600(puVar3);
  lVar1 = lVar1 * 4;
  if (lVar1 == 0) {
    *param_1 = 0x7100d21110;
    return param_1;
  }
  lVar4 = lVar1 >> 2;
  plVar2 = (long *)FUN_71007b7480(lVar4,0,auStack_8);
  if (lVar4 == 1) {
    *(undefined4 *)(plVar2 + 3) = *puVar3;
  }
  else if (lVar4 != 0) {
    FUN_710080e900(plVar2 + 3,puVar3,lVar4);
  }
  if (plVar2 != (long *)&DAT_7100d210f8) {
    *plVar2 = lVar4;
    *(undefined4 *)(plVar2 + 2) = 0;
    *(undefined4 *)((long)plVar2 + lVar1 + 0x18) = 0;
  }
  *param_1 = plVar2 + 3;
  return param_1;
}



// ===== FUN_71007e4c40 @ 71007e4c40 (size=232) =====

undefined8 * FUN_71007e4c40(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined1 auStack_8 [8];
  
  puVar3 = *(undefined4 **)(*(long *)(param_2 + 0x10) + 0x50);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string::_S_construct null not valid");
  }
  lVar1 = FUN_710081f600(puVar3);
  lVar1 = lVar1 * 4;
  if (lVar1 == 0) {
    *param_1 = 0x7100d21110;
    return param_1;
  }
  lVar4 = lVar1 >> 2;
  plVar2 = (long *)FUN_71007b7480(lVar4,0,auStack_8);
  if (lVar4 == 1) {
    *(undefined4 *)(plVar2 + 3) = *puVar3;
  }
  else if (lVar4 != 0) {
    FUN_710080e900(plVar2 + 3,puVar3,lVar4);
  }
  if (plVar2 != (long *)&DAT_7100d210f8) {
    *plVar2 = lVar4;
    *(undefined4 *)(plVar2 + 2) = 0;
    *(undefined4 *)((long)plVar2 + lVar1 + 0x18) = 0;
  }
  *param_1 = plVar2 + 3;
  return param_1;
}



// ===== FUN_71007e4d40 @ 71007e4d40 (size=232) =====

undefined8 * FUN_71007e4d40(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined1 auStack_8 [8];
  
  puVar3 = *(undefined4 **)(*(long *)(param_2 + 0x10) + 0x28);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string::_S_construct null not valid");
  }
  lVar1 = FUN_710081f600(puVar3);
  lVar1 = lVar1 * 4;
  if (lVar1 == 0) {
    *param_1 = 0x7100d21110;
    return param_1;
  }
  lVar4 = lVar1 >> 2;
  plVar2 = (long *)FUN_71007b7480(lVar4,0,auStack_8);
  if (lVar4 == 1) {
    *(undefined4 *)(plVar2 + 3) = *puVar3;
  }
  else if (lVar4 != 0) {
    FUN_710080e900(plVar2 + 3,puVar3,lVar4);
  }
  if (plVar2 != (long *)&DAT_7100d210f8) {
    *plVar2 = lVar4;
    *(undefined4 *)(plVar2 + 2) = 0;
    *(undefined4 *)((long)plVar2 + lVar1 + 0x18) = 0;
  }
  *param_1 = plVar2 + 3;
  return param_1;
}



// ===== FUN_71007e4e40 @ 71007e4e40 (size=232) =====

undefined8 * FUN_71007e4e40(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined1 auStack_8 [8];
  
  puVar3 = *(undefined4 **)(*(long *)(param_2 + 0x10) + 0x38);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string::_S_construct null not valid");
  }
  lVar1 = FUN_710081f600(puVar3);
  lVar1 = lVar1 * 4;
  if (lVar1 == 0) {
    *param_1 = 0x7100d21110;
    return param_1;
  }
  lVar4 = lVar1 >> 2;
  plVar2 = (long *)FUN_71007b7480(lVar4,0,auStack_8);
  if (lVar4 == 1) {
    *(undefined4 *)(plVar2 + 3) = *puVar3;
  }
  else if (lVar4 != 0) {
    FUN_710080e900(plVar2 + 3,puVar3,lVar4);
  }
  if (plVar2 != (long *)&DAT_7100d210f8) {
    *plVar2 = lVar4;
    *(undefined4 *)(plVar2 + 2) = 0;
    *(undefined4 *)((long)plVar2 + lVar1 + 0x18) = 0;
  }
  *param_1 = plVar2 + 3;
  return param_1;
}



// ===== FUN_71007e4f40 @ 71007e4f40 (size=644) =====

long * FUN_71007e4f40(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined1 auVar15 [16];
  undefined4 local_24;
  undefined1 auStack_8 [8];
  
  *param_1 = 0x7100d21110;
  lVar4 = FUN_71007e40a0(param_3,param_4,auStack_8);
  uVar11 = param_4 - param_3;
  lVar13 = *(long *)(lVar4 + -0x18);
  uVar10 = uVar11 * 2;
  if (uVar10 < 0x101) {
    lVar12 = -(uVar10 + 0xf & 0xfffffffffffffff0);
    puVar9 = &stack0xffffffffffffff70 + lVar12;
    puVar14 = &stack0xffffffffffffff70 + lVar12;
    puVar5 = (undefined4 *)FUN_710080e8e0();
    local_24 = *puVar5;
  }
  else {
    puVar5 = (undefined4 *)FUN_710080e8e0();
    local_24 = *puVar5;
    if (0x3ffffffffffffffc < uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_710000389c();
    }
    puVar9 = (undefined1 *)thunk_FUN_71007af5c0(uVar10);
    puVar14 = (undefined1 *)0x0;
  }
  uVar11 = (long)uVar11 >> 1;
  puVar5 = (undefined4 *)FUN_710080e8e0();
  *puVar5 = 0;
  lVar12 = lVar4;
  do {
    auVar15 = FUN_71007fba00(param_2,puVar9,lVar12,uVar11);
    uVar10 = auVar15._0_8_;
    bVar1 = puVar9 != (undefined1 *)0x0 && puVar14 != puVar9;
    puVar7 = puVar9;
    if (uVar11 <= uVar10) {
      piVar6 = (int *)FUN_710080e8e0(uVar10,auVar15._8_8_,uVar10);
      if (*piVar6 != 0) {
        puVar5 = (undefined4 *)FUN_710080e8e0();
                    /* WARNING: Subroutine does not return */
        FUN_7100003e58(*puVar5);
      }
      uVar11 = uVar10 + 1;
      if (0x1ffffffffffffffe < uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_710000389c();
      }
      puVar7 = (undefined1 *)thunk_FUN_71007af5c0(uVar11 * 4);
      if (puVar9 != (undefined1 *)0x0 && puVar14 != puVar9) {
        thunk_FUN_710081c200(puVar9);
      }
      uVar10 = FUN_71007fba00(param_2,puVar7,lVar12,uVar11);
      bVar1 = true;
    }
    FUN_71007b7d40(param_1,puVar7,uVar10);
    lVar8 = FUN_710081f600(lVar12);
    lVar12 = lVar12 + lVar8 * 4;
    if (lVar4 + lVar13 * 4 == lVar12) {
      if (bVar1) {
        thunk_FUN_710081c200(puVar7);
        piVar6 = (int *)FUN_710080e8e0();
        iVar2 = *piVar6;
      }
      else {
        piVar6 = (int *)FUN_710080e8e0();
        iVar2 = *piVar6;
      }
      if (iVar2 == 0) {
        puVar5 = (undefined4 *)FUN_710080e8e0();
        *puVar5 = local_24;
      }
      if (lVar4 != 0x7100d21110) {
        piVar6 = (int *)(lVar4 + -8);
        do {
          iVar2 = *piVar6;
          cVar3 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar1) {
            *piVar6 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 < 1) {
          thunk_FUN_710081c200(lVar4 + -0x18,auStack_8);
        }
      }
      return param_1;
    }
    lVar8 = *param_1;
    uVar10 = *(long *)(lVar8 + -0x18) + 1;
    if ((*(ulong *)(lVar8 + -0x10) < uVar10) || (0 < (int)*(undefined8 *)(lVar8 + -8))) {
      FUN_71007b7b80(param_1,uVar10);
    }
    lVar8 = *param_1;
    lVar12 = lVar12 + 4;
    *(undefined4 *)(lVar8 + *(long *)(lVar8 + -0x18) * 4) = 0;
    puVar9 = puVar7;
    if (lVar8 != 0x7100d21110) {
      *(ulong *)(lVar8 + -0x18) = uVar10;
      *(undefined4 *)(lVar8 + -8) = 0;
      *(undefined4 *)(lVar8 + uVar10 * 4) = 0;
    }
  } while( true );
}



// ===== FUN_71007e5240 @ 71007e5240 (size=1244) =====

void FUN_71007e5240(long param_1,long *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  int *piVar10;
  code *pcVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  lVar5 = FUN_71007b00e0(&DAT_7100d22848);
  plVar13 = *(long **)(*(long *)(*param_2 + 8) + lVar5 * 8);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  if (*(code **)(*plVar13 + 0x28) == FUN_71007e4740) {
    lVar5 = -4;
    lVar12 = *(long *)(plVar13[2] + 0x30);
    if (lVar12 != 0) {
      lVar5 = FUN_710081f600(lVar12,0xfffffffffffffffc);
      lVar5 = lVar12 + lVar5 * 4;
    }
    local_8 = FUN_71007e40a0(lVar12,lVar5,auStack_10);
  }
  else {
    (**(code **)(*plVar13 + 0x28))(&local_8,plVar13);
  }
  uVar16 = *(ulong *)(local_8 + -0x18);
  if (0x1ffffffffffffffe < uVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_710000389c();
  }
  uVar6 = thunk_FUN_71007af5c0(uVar16 << 2);
  FUN_71007b73a0(&local_8,uVar6,uVar16,0);
  if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210f8) {
    piVar10 = (int *)(local_8 + -8);
    do {
      iVar1 = *piVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar3) {
        *piVar10 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
    }
  }
  if (*(code **)(*plVar13 + 0x30) == FUN_71007e4840) {
    lVar5 = -4;
    lVar12 = *(long *)(plVar13[2] + 0x40);
    if (lVar12 != 0) {
      lVar5 = FUN_710081f600(lVar12,0xfffffffffffffffc);
      lVar5 = lVar12 + lVar5 * 4;
    }
    local_8 = FUN_71007e40a0(lVar12,lVar5,auStack_20);
  }
  else {
    (**(code **)(*plVar13 + 0x30))(&local_8,plVar13);
  }
  uVar15 = *(ulong *)(local_8 + -0x18);
  if (0x1ffffffffffffffe < uVar15) {
                    /* WARNING: Subroutine does not return */
    FUN_710000389c();
  }
  uVar7 = thunk_FUN_71007af5c0(uVar15 << 2);
  FUN_71007b73a0(&local_8,uVar7,uVar15,0);
  if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210f8) {
    piVar10 = (int *)(local_8 + -8);
    do {
      iVar1 = *piVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar3) {
        *piVar10 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
    }
  }
  if (*(code **)(*plVar13 + 0x38) == FUN_71007e4940) {
    lVar5 = -4;
    lVar12 = *(long *)(plVar13[2] + 0x50);
    if (lVar12 != 0) {
      lVar5 = FUN_710081f600(lVar12,0xfffffffffffffffc);
      lVar5 = lVar12 + lVar5 * 4;
    }
    local_8 = FUN_71007e40a0(lVar12,lVar5,auStack_18);
  }
  else {
    (**(code **)(*plVar13 + 0x38))(&local_8,plVar13);
  }
  uVar14 = *(ulong *)(local_8 + -0x18);
  if (0x1ffffffffffffffe < uVar14) {
                    /* WARNING: Subroutine does not return */
    FUN_710000389c();
  }
  uVar8 = thunk_FUN_71007af5c0(uVar14 << 2);
  FUN_71007b73a0(&local_8,uVar8,uVar14,0);
  if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210f8) {
    piVar10 = (int *)(local_8 + -8);
    do {
      iVar1 = *piVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar3) {
        *piVar10 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
    }
  }
  if (*(code **)(*plVar13 + 0x20) == FUN_71007e41c0) {
    lVar5 = -1;
    lVar12 = *(long *)(plVar13[2] + 0x10);
    if (lVar12 != 0) {
      lVar5 = FUN_710081ce00(lVar12,0xffffffffffffffff);
      lVar5 = lVar12 + lVar5;
    }
    local_8 = FUN_71007e3fe0(lVar12,lVar5,auStack_10);
  }
  else {
    (**(code **)(*plVar13 + 0x20))(&local_8,plVar13);
  }
  lVar5 = *(long *)(local_8 + -0x18);
  pcVar9 = (char *)thunk_FUN_71007af5c0(lVar5);
  FUN_71007b66e0(&local_8,pcVar9,lVar5,0);
  *(char **)(param_1 + 0x10) = pcVar9;
  *(long *)(param_1 + 0x18) = lVar5;
  bVar3 = false;
  if (lVar5 != 0) {
    bVar3 = '\0' < *pcVar9;
  }
  lVar5 = *plVar13;
  *(bool *)(param_1 + 0x20) = bVar3;
  if (*(code **)(lVar5 + 0x10) == (code *)&LAB_71007e37e0) {
    uVar4 = *(undefined4 *)(plVar13[2] + 0x24);
  }
  else {
    uVar4 = (**(code **)(lVar5 + 0x10))(plVar13);
    lVar5 = *plVar13;
  }
  pcVar11 = *(code **)(lVar5 + 0x18);
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  if (pcVar11 == (code *)&LAB_71007e3800) {
    uVar4 = *(undefined4 *)(plVar13[2] + 0x28);
  }
  else {
    uVar4 = (*pcVar11)(plVar13);
    lVar5 = *plVar13;
  }
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x30) = uVar6;
  *(ulong *)(param_1 + 0x38) = uVar16;
  *(undefined8 *)(param_1 + 0x40) = uVar7;
  *(ulong *)(param_1 + 0x48) = uVar15;
  *(undefined8 *)(param_1 + 0x50) = uVar8;
  *(ulong *)(param_1 + 0x58) = uVar14;
  if (*(code **)(lVar5 + 0x40) == (code *)&LAB_71007e3820) {
    uVar4 = *(undefined4 *)(plVar13[2] + 0x60);
  }
  else {
    uVar4 = (**(code **)(lVar5 + 0x40))(plVar13);
    lVar5 = *plVar13;
  }
  pcVar11 = *(code **)(lVar5 + 0x48);
  *(undefined4 *)(param_1 + 0x60) = uVar4;
  if (pcVar11 == (code *)&LAB_71007e3840) {
    uVar4 = *(undefined4 *)(plVar13[2] + 100);
  }
  else {
    uVar4 = (*pcVar11)(plVar13);
  }
  *(undefined4 *)(param_1 + 100) = uVar4;
  if (*(code **)(*plVar13 + 0x50) == (code *)&LAB_71007e3860) {
    uVar4 = *(undefined4 *)(plVar13[2] + 0x68);
  }
  else {
    uVar4 = (**(code **)(*plVar13 + 0x50))(plVar13);
  }
  *(undefined4 *)(param_1 + 0x68) = uVar4;
  lVar5 = FUN_71007b00e0(&DAT_7100d21118);
  plVar13 = *(long **)(*(long *)(*param_2 + 8) + lVar5 * 8);
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x58))
              (plVar13,PTR_DAT_7100af47a0,PTR_DAT_7100af47a0 + 0xb,param_1 + 0x6c);
    *(undefined1 *)(param_1 + 0x98) = 1;
    if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210d8) {
      piVar10 = (int *)(local_8 + -8);
      do {
        iVar1 = *piVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 < 1) {
        thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003a84();
}



// ===== FUN_71007e57e0 @ 71007e57e0 (size=1244) =====

void FUN_71007e57e0(long param_1,long *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  int *piVar10;
  code *pcVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  lVar5 = FUN_71007b00e0(&DAT_7100d22840);
  plVar13 = *(long **)(*(long *)(*param_2 + 8) + lVar5 * 8);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  if (*(code **)(*plVar13 + 0x28) == FUN_71007e4a40) {
    lVar5 = -4;
    lVar12 = *(long *)(plVar13[2] + 0x30);
    if (lVar12 != 0) {
      lVar5 = FUN_710081f600(lVar12,0xfffffffffffffffc);
      lVar5 = lVar12 + lVar5 * 4;
    }
    local_8 = FUN_71007e40a0(lVar12,lVar5,auStack_10);
  }
  else {
    (**(code **)(*plVar13 + 0x28))(&local_8,plVar13);
  }
  uVar16 = *(ulong *)(local_8 + -0x18);
  if (0x1ffffffffffffffe < uVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_710000389c();
  }
  uVar6 = thunk_FUN_71007af5c0(uVar16 << 2);
  FUN_71007b73a0(&local_8,uVar6,uVar16,0);
  if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210f8) {
    piVar10 = (int *)(local_8 + -8);
    do {
      iVar1 = *piVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar3) {
        *piVar10 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
    }
  }
  if (*(code **)(*plVar13 + 0x30) == FUN_71007e4b40) {
    lVar5 = -4;
    lVar12 = *(long *)(plVar13[2] + 0x40);
    if (lVar12 != 0) {
      lVar5 = FUN_710081f600(lVar12,0xfffffffffffffffc);
      lVar5 = lVar12 + lVar5 * 4;
    }
    local_8 = FUN_71007e40a0(lVar12,lVar5,auStack_20);
  }
  else {
    (**(code **)(*plVar13 + 0x30))(&local_8,plVar13);
  }
  uVar15 = *(ulong *)(local_8 + -0x18);
  if (0x1ffffffffffffffe < uVar15) {
                    /* WARNING: Subroutine does not return */
    FUN_710000389c();
  }
  uVar7 = thunk_FUN_71007af5c0(uVar15 << 2);
  FUN_71007b73a0(&local_8,uVar7,uVar15,0);
  if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210f8) {
    piVar10 = (int *)(local_8 + -8);
    do {
      iVar1 = *piVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar3) {
        *piVar10 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
    }
  }
  if (*(code **)(*plVar13 + 0x38) == FUN_71007e4c40) {
    lVar5 = -4;
    lVar12 = *(long *)(plVar13[2] + 0x50);
    if (lVar12 != 0) {
      lVar5 = FUN_710081f600(lVar12,0xfffffffffffffffc);
      lVar5 = lVar12 + lVar5 * 4;
    }
    local_8 = FUN_71007e40a0(lVar12,lVar5,auStack_18);
  }
  else {
    (**(code **)(*plVar13 + 0x38))(&local_8,plVar13);
  }
  uVar14 = *(ulong *)(local_8 + -0x18);
  if (0x1ffffffffffffffe < uVar14) {
                    /* WARNING: Subroutine does not return */
    FUN_710000389c();
  }
  uVar8 = thunk_FUN_71007af5c0(uVar14 << 2);
  FUN_71007b73a0(&local_8,uVar8,uVar14,0);
  if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210f8) {
    piVar10 = (int *)(local_8 + -8);
    do {
      iVar1 = *piVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar3) {
        *piVar10 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
    }
  }
  if (*(code **)(*plVar13 + 0x20) == FUN_71007e42a0) {
    lVar5 = -1;
    lVar12 = *(long *)(plVar13[2] + 0x10);
    if (lVar12 != 0) {
      lVar5 = FUN_710081ce00(lVar12,0xffffffffffffffff);
      lVar5 = lVar12 + lVar5;
    }
    local_8 = FUN_71007e3fe0(lVar12,lVar5,auStack_10);
  }
  else {
    (**(code **)(*plVar13 + 0x20))(&local_8,plVar13);
  }
  lVar5 = *(long *)(local_8 + -0x18);
  pcVar9 = (char *)thunk_FUN_71007af5c0(lVar5);
  FUN_71007b66e0(&local_8,pcVar9,lVar5,0);
  *(char **)(param_1 + 0x10) = pcVar9;
  *(long *)(param_1 + 0x18) = lVar5;
  bVar3 = false;
  if (lVar5 != 0) {
    bVar3 = '\0' < *pcVar9;
  }
  lVar5 = *plVar13;
  *(bool *)(param_1 + 0x20) = bVar3;
  if (*(code **)(lVar5 + 0x10) == (code *)&LAB_71007e3880) {
    uVar4 = *(undefined4 *)(plVar13[2] + 0x24);
  }
  else {
    uVar4 = (**(code **)(lVar5 + 0x10))(plVar13);
    lVar5 = *plVar13;
  }
  pcVar11 = *(code **)(lVar5 + 0x18);
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  if (pcVar11 == (code *)&LAB_71007e38a0) {
    uVar4 = *(undefined4 *)(plVar13[2] + 0x28);
  }
  else {
    uVar4 = (*pcVar11)(plVar13);
    lVar5 = *plVar13;
  }
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x30) = uVar6;
  *(ulong *)(param_1 + 0x38) = uVar16;
  *(undefined8 *)(param_1 + 0x40) = uVar7;
  *(ulong *)(param_1 + 0x48) = uVar15;
  *(undefined8 *)(param_1 + 0x50) = uVar8;
  *(ulong *)(param_1 + 0x58) = uVar14;
  if (*(code **)(lVar5 + 0x40) == (code *)&LAB_71007e38c0) {
    uVar4 = *(undefined4 *)(plVar13[2] + 0x60);
  }
  else {
    uVar4 = (**(code **)(lVar5 + 0x40))(plVar13);
    lVar5 = *plVar13;
  }
  pcVar11 = *(code **)(lVar5 + 0x48);
  *(undefined4 *)(param_1 + 0x60) = uVar4;
  if (pcVar11 == (code *)&LAB_71007e38e0) {
    uVar4 = *(undefined4 *)(plVar13[2] + 100);
  }
  else {
    uVar4 = (*pcVar11)(plVar13);
  }
  *(undefined4 *)(param_1 + 100) = uVar4;
  if (*(code **)(*plVar13 + 0x50) == (code *)&LAB_71007e3900) {
    uVar4 = *(undefined4 *)(plVar13[2] + 0x68);
  }
  else {
    uVar4 = (**(code **)(*plVar13 + 0x50))(plVar13);
  }
  *(undefined4 *)(param_1 + 0x68) = uVar4;
  lVar5 = FUN_71007b00e0(&DAT_7100d21118);
  plVar13 = *(long **)(*(long *)(*param_2 + 8) + lVar5 * 8);
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x58))
              (plVar13,PTR_DAT_7100af47a0,PTR_DAT_7100af47a0 + 0xb,param_1 + 0x6c);
    *(undefined1 *)(param_1 + 0x98) = 1;
    if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210d8) {
      piVar10 = (int *)(local_8 + -8);
      do {
        iVar1 = *piVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 < 1) {
        thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_10);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003a84();
}



// ===== FUN_71007e5d80 @ 71007e5d80 (size=936) =====

void FUN_71007e5d80(long param_1,long *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  code *pcVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  long local_18;
  long local_10;
  long local_8;
  
  lVar5 = FUN_71007b00e0(&DAT_7100d22838);
  plVar10 = *(long **)(*(long *)(*param_2 + 8) + lVar5 * 8);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  if (*(code **)(*plVar10 + 0x20) == FUN_71007e4380) {
    lVar5 = -1;
    lVar11 = *(long *)(plVar10[2] + 0x10);
    if (lVar11 != 0) {
      lVar5 = FUN_710081ce00(lVar11,0xffffffffffffffff);
      lVar5 = lVar11 + lVar5;
    }
    local_18 = FUN_71007e3fe0(lVar11,lVar5,&local_8);
  }
  else {
    (**(code **)(*plVar10 + 0x20))(&local_18,plVar10);
  }
  uVar12 = *(undefined8 *)(local_18 + -0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar12;
  pcVar6 = (char *)thunk_FUN_71007af5c0(uVar12);
  FUN_71007b66e0(&local_18,pcVar6,uVar12,0);
  bVar3 = false;
  if (*(long *)(param_1 + 0x18) != 0) {
    bVar3 = '\0' < *pcVar6;
  }
  *(bool *)(param_1 + 0x20) = bVar3;
  if (*(code **)(*plVar10 + 0x28) == FUN_71007e4d40) {
    lVar5 = -4;
    lVar11 = *(long *)(plVar10[2] + 0x28);
    if (lVar11 != 0) {
      lVar5 = FUN_710081f600(lVar11,0xfffffffffffffffc);
      lVar5 = lVar11 + lVar5 * 4;
    }
    local_10 = FUN_71007e40a0(lVar11,lVar5,auStack_28);
  }
  else {
    (**(code **)(*plVar10 + 0x28))(&local_10,plVar10);
  }
  uVar13 = *(ulong *)(local_10 + -0x18);
  *(ulong *)(param_1 + 0x30) = uVar13;
  if (0x1ffffffffffffffe < uVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_710000389c();
  }
  uVar12 = thunk_FUN_71007af5c0(uVar13 << 2);
  FUN_71007b73a0(&local_10,uVar12,uVar13,0);
  if (*(code **)(*plVar10 + 0x30) == FUN_71007e4e40) {
    lVar5 = -4;
    lVar11 = *(long *)(plVar10[2] + 0x38);
    if (lVar11 != 0) {
      lVar5 = FUN_710081f600(lVar11,0xfffffffffffffffc);
      lVar5 = lVar11 + lVar5 * 4;
    }
    local_8 = FUN_71007e40a0(lVar11,lVar5,auStack_20);
  }
  else {
    (**(code **)(*plVar10 + 0x30))(&local_8,plVar10);
  }
  uVar13 = *(ulong *)(local_8 + -0x18);
  *(ulong *)(param_1 + 0x40) = uVar13;
  if (0x1ffffffffffffffe < uVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_710000389c();
  }
  uVar7 = thunk_FUN_71007af5c0(uVar13 << 2);
  FUN_71007b73a0(&local_8,uVar7,uVar13,0);
  lVar5 = *plVar10;
  if (*(code **)(lVar5 + 0x10) == (code *)&LAB_71007e3920) {
    uVar4 = *(undefined4 *)(plVar10[2] + 0x48);
  }
  else {
    uVar4 = (**(code **)(lVar5 + 0x10))(plVar10);
    lVar5 = *plVar10;
  }
  pcVar8 = *(code **)(lVar5 + 0x18);
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  if (pcVar8 == (code *)&LAB_71007e3940) {
    uVar4 = *(undefined4 *)(plVar10[2] + 0x4c);
  }
  else {
    uVar4 = (*pcVar8)(plVar10);
  }
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  lVar5 = FUN_71007b00e0(&DAT_7100d21118);
  plVar10 = *(long **)(*(long *)(*param_2 + 8) + lVar5 * 8);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x58))
              (plVar10,PTR_s___xX0123456789abcdef0123456789AB_7100af4790,
               PTR_s___xX0123456789abcdef0123456789AB_7100af4790 + 0x24,param_1 + 0x50);
    (**(code **)(*plVar10 + 0x58))
              (plVar10,PTR_s___xX0123456789abcdefABCDEF_7100af4798,
               PTR_s___xX0123456789abcdefABCDEF_7100af4798 + 0x1a,param_1 + 0xe0);
    *(char **)(param_1 + 0x10) = pcVar6;
    *(undefined8 *)(param_1 + 0x28) = uVar12;
    *(undefined8 *)(param_1 + 0x38) = uVar7;
    *(undefined1 *)(param_1 + 0x148) = 1;
    if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210f8) {
      piVar9 = (int *)(local_8 + -8);
      do {
        iVar1 = *piVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 < 1) {
        thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_20);
      }
    }
    if ((undefined1 *)(local_10 + -0x18) != &DAT_7100d210f8) {
      piVar9 = (int *)(local_10 + -8);
      do {
        iVar1 = *piVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 < 1) {
        thunk_FUN_710081c200((undefined1 *)(local_10 + -0x18),auStack_20);
      }
    }
    if ((undefined1 *)(local_18 + -0x18) != &DAT_7100d210d8) {
      piVar9 = (int *)(local_18 + -8);
      do {
        iVar1 = *piVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 < 1) {
        thunk_FUN_710081c200((undefined1 *)(local_18 + -0x18),auStack_20);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003a84();
}



// ===== FUN_71007e6200 @ 71007e6200 (size=168) =====

long FUN_71007e6200(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar1 = FUN_71007b00e0(&DAT_7100d22838);
  lVar4 = *(long *)(*param_1 + 0x18);
  lVar2 = *(long *)(lVar4 + lVar1 * 8);
  if (lVar2 != 0) {
    return lVar2;
  }
  puVar3 = (undefined8 *)FUN_71007af5c0(0x150);
  *(undefined4 *)(puVar3 + 1) = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = &PTR_FUN_7100aef310;
  *(undefined1 *)(puVar3 + 4) = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  *(undefined1 *)(puVar3 + 0x29) = 0;
  FUN_71007e5d80(puVar3,param_1);
  FUN_71007b05e0(*param_1,puVar3,lVar1);
  return *(long *)(lVar4 + lVar1 * 8);
}



// ===== FUN_71007e62e0 @ 71007e62e0 (size=80) =====

void FUN_71007e62e0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 1) = (uint)(param_3 != 0);
  param_1[2] = param_2;
  *param_1 = &PTR_FUN_7100aef078;
  uVar1 = FUN_71007afdc0();
  param_1[4] = uVar1;
  FUN_71007fdce0(param_1,0);
  return;
}



// ===== FUN_71007e6360 @ 71007e6360 (size=648) =====

undefined1  [16]
FUN_71007e6360(undefined8 param_1,long *param_2,ulong param_3,long *param_4,int param_5,int *param_6
              ,int param_7,int param_8,ulong param_9,long param_10,uint *param_11)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  
  uVar10 = param_3 & 0xffffffff;
  lVar7 = FUN_71007b00e0(&DAT_7100d21118);
  plVar13 = *(long **)(*(long *)(*(long *)(param_10 + 0xd0) + 8) + lVar7 * 8);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  bVar3 = param_5 == -1;
  bVar4 = (int)param_3 == -1;
  if (param_2 != (long *)0x0 && bVar4) {
    iVar11 = 0;
    uVar12 = 0;
    goto LAB_71007e6474;
  }
  iVar11 = 0;
  uVar12 = 0;
LAB_71007e63e8:
  bVar2 = param_4 == (long *)0x0 || !bVar3;
  bVar1 = bVar4;
  if (param_4 != (long *)0x0 && bVar3) goto LAB_71007e64a8;
LAB_71007e63f8:
  bVar4 = (bool)(uVar12 < param_9 & (bVar4 ^ bVar3));
  do {
    if (!bVar4) {
LAB_71007e64e0:
      if ((uVar12 != 0 && param_7 <= iVar11) && iVar11 <= param_8) {
        *param_6 = iVar11;
        goto LAB_71007e6500;
      }
LAB_71007e64f4:
      *param_11 = *param_11 | 4;
LAB_71007e6500:
      auVar14._8_8_ = param_3 & 0xffffffff00000000 | uVar10;
      auVar14._0_8_ = param_2;
      return auVar14;
    }
    uVar9 = uVar10;
    if (param_2 != (long *)0x0 && bVar1) {
      if ((uint *)param_2[2] < (uint *)param_2[3]) {
        uVar5 = *(uint *)param_2[2];
      }
      else {
        uVar5 = (**(code **)(*param_2 + 0x48))(param_2);
      }
      uVar9 = (ulong)uVar5;
      if (uVar5 == 0xffffffff) {
        param_2 = (long *)0x0;
      }
    }
    uVar5 = (**(code **)(*plVar13 + 0x60))(plVar13,uVar9,0x2a);
    uVar5 = (uVar5 & 0xff) - 0x30;
    if (9 < (uVar5 & 0xff)) goto LAB_71007e64e0;
    iVar11 = uVar5 + iVar11 * 10;
    if (param_8 < iVar11) goto LAB_71007e64f4;
    if ((ulong)param_2[2] < (ulong)param_2[3]) {
      uVar12 = uVar12 + 1;
      param_2[2] = param_2[2] + 4;
LAB_71007e6474:
      puVar8 = (uint *)param_2[2];
      if ((uint *)param_2[3] <= puVar8) goto LAB_71007e6564;
LAB_71007e6480:
      uVar5 = *puVar8;
    }
    else {
      uVar12 = uVar12 + 1;
      (**(code **)(*param_2 + 0x50))(param_2);
      puVar8 = (uint *)param_2[2];
      if (puVar8 < (uint *)param_2[3]) goto LAB_71007e6480;
LAB_71007e6564:
      uVar5 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    uVar10 = (ulong)uVar5;
    if (uVar5 == 0xffffffff) {
      param_2 = (long *)0x0;
      bVar4 = true;
      goto LAB_71007e63e8;
    }
    uVar10 = 0xffffffff;
    bVar2 = param_4 == (long *)0x0 || !bVar3;
    bVar1 = true;
    bVar4 = false;
    if (bVar2) goto LAB_71007e63f8;
LAB_71007e64a8:
    if ((int *)param_4[2] < (int *)param_4[3]) {
      iVar6 = *(int *)param_4[2];
    }
    else {
      iVar6 = (**(code **)(*param_4 + 0x48))(param_4);
    }
    if (iVar6 == -1) {
      param_4 = (long *)0x0;
    }
    bVar4 = (bool)(uVar12 < param_9 & (bVar4 ^ (iVar6 == -1 && !bVar2)));
  } while( true );
}



// ===== FUN_71007e6600 @ 71007e6600 (size=64) =====

void FUN_71007e6600(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  *param_1 = &PTR_FUN_7100aef168;
  uVar1 = FUN_71007afd60();
  param_1[2] = uVar1;
  return;
}



// ===== FUN_71007e6660 @ 71007e6660 (size=344) =====

void FUN_71007e6660(undefined4 *param_1,undefined4 param_2,byte *param_3,long param_4,long param_5,
                   long param_6)

{
  byte bVar1;
  undefined4 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  
  uVar4 = (ulong)*param_3;
  lVar7 = param_6 - param_5;
  if ((char)*param_3 < '\x01' || lVar7 >> 2 <= (long)uVar4) {
    if (param_6 == param_5) {
      return;
    }
    lVar6 = -1;
    lVar10 = 0;
    uVar5 = 0;
    lVar8 = lVar6;
    pbVar9 = param_3;
  }
  else {
    lVar10 = 0;
    uVar5 = 0;
    do {
      param_6 = param_6 + uVar4 * -4;
      if (uVar5 < param_4 - 1U) {
        uVar5 = uVar5 + 1;
      }
      else {
        lVar10 = lVar10 + 1;
      }
      uVar4 = (ulong)param_3[uVar5];
      lVar7 = param_6 - param_5;
      pbVar9 = param_3 + uVar5;
    } while ('\0' < (char)param_3[uVar5] && (long)uVar4 < lVar7 >> 2);
    lVar8 = lVar10 + -1;
    lVar6 = uVar5 - 1;
    if (param_5 == param_6) goto LAB_71007e66fc;
  }
  lVar3 = 0;
  do {
    *(undefined4 *)((long)param_1 + lVar3) = *(undefined4 *)(param_5 + lVar3);
    lVar3 = lVar3 + 4;
  } while (lVar7 != lVar3);
  param_1 = (undefined4 *)((long)param_1 + (param_6 - param_5));
LAB_71007e66fc:
  puVar2 = param_1;
  if (lVar10 != 0) {
    do {
      param_1 = puVar2 + 1;
      *puVar2 = param_2;
      bVar1 = *pbVar9;
      if (bVar1 != 0) {
        lVar10 = (ulong)bVar1 * 4;
        lVar7 = 0;
        do {
          *(undefined4 *)((long)param_1 + lVar7) = *(undefined4 *)(param_6 + lVar7);
          lVar7 = lVar7 + 4;
        } while (lVar10 != lVar7);
        param_1 = param_1 + bVar1;
        param_6 = param_6 + lVar10;
      }
      lVar8 = lVar8 + -1;
      puVar2 = param_1;
    } while (lVar8 != -1);
  }
  if (uVar5 != 0) {
    do {
      puVar2 = param_1 + 1;
      *param_1 = param_2;
      bVar1 = param_3[lVar6];
      if (bVar1 != 0) {
        lVar7 = 0;
        do {
          *(undefined4 *)((long)puVar2 + lVar7) = *(undefined4 *)(param_6 + lVar7);
          lVar7 = lVar7 + 4;
        } while ((ulong)bVar1 << 2 != lVar7);
        puVar2 = param_1 + (ulong)(byte)(bVar1 - 1) + 2;
        param_6 = param_6 + 4 + (ulong)(byte)(bVar1 - 1) * 4;
      }
      lVar6 = lVar6 + -1;
      param_1 = puVar2;
    } while (lVar6 != -1);
  }
  return;
}



// ===== FUN_71007e67c0 @ 71007e67c0 (size=204) =====

void FUN_71007e67c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                   long param_5,long param_6,long param_7,int *param_8)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  if (param_5 != 0) {
    lVar2 = FUN_71007e6660(param_6,param_4,param_2,param_3,param_7,
                           param_7 + ((param_5 - param_7) * 0x40000000 >> 0x20) * 4);
    iVar3 = 0;
    iVar4 = (int)(param_5 - param_7 >> 2);
    iVar1 = *param_8 - iVar4;
    if (iVar1 != 0) {
      FUN_710080e900(lVar2,param_5,(long)iVar1);
      iVar3 = *param_8 - iVar4;
    }
    *param_8 = iVar3 + (int)(lVar2 - param_6 >> 2);
    return;
  }
  lVar2 = FUN_71007e6660(param_6,param_4,param_2,param_3,param_7,param_7 + (long)*param_8 * 4);
  *param_8 = (int)((ulong)(lVar2 - param_6) >> 2);
  return;
}



// ===== FUN_71007e68a0 @ 71007e68a0 (size=80) =====

void FUN_71007e68a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                   undefined8 param_5,long param_6,long param_7,int *param_8)

{
  long lVar1;
  
  lVar1 = FUN_71007e6660(param_6,param_4,param_2,param_3,param_7,param_7 + (long)*param_8 * 4);
  *param_8 = (int)(lVar1 - param_6 >> 2);
  return;
}



// ===== FUN_71007e6900 @ 71007e6900 (size=1448) =====

undefined1  [16]
FUN_71007e6900(undefined8 param_1,long *param_2,ulong param_3,long param_4,undefined4 param_5,
              undefined8 *param_6)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  int *piVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  byte *pbVar18;
  undefined1 auVar19 [16];
  undefined4 *local_50;
  undefined1 auStack_20 [8];
  undefined4 local_18;
  byte abStack_14 [4];
  long local_10;
  long local_8;
  
  lVar7 = FUN_71007b00e0(&DAT_7100d21118);
  plVar14 = *(long **)(*(long *)(*(long *)(param_4 + 0xd0) + 8) + lVar7 * 8);
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  lVar7 = FUN_71007b00e0(&DAT_7100d22840);
  lVar15 = *(long *)(*(long *)(param_4 + 0xd0) + 0x18);
  lVar16 = *(long *)(lVar15 + lVar7 * 8);
  if (lVar16 == 0) {
    puVar8 = (undefined8 *)FUN_71007af5c0(0xa0);
    *(undefined4 *)(puVar8 + 1) = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    *puVar8 = &PTR_FUN_7100aef2f0;
    *(undefined1 *)(puVar8 + 4) = 0;
    *(undefined8 *)((long)puVar8 + 0x24) = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    *(undefined4 *)(puVar8 + 0xc) = 0;
    *(undefined8 *)((long)puVar8 + 100) = 0;
    *(undefined1 *)(puVar8 + 0x13) = 0;
    FUN_71007e57e0(puVar8,param_4 + 0xd0);
    FUN_71007b05e0(*(undefined8 *)(param_4 + 0xd0),puVar8,lVar7);
    lVar16 = *(long *)(lVar15 + lVar7 * 8);
    piVar12 = (int *)*param_6;
    if (*piVar12 == *(int *)(lVar16 + 0x6c)) goto LAB_71007e6a60;
LAB_71007e6980:
    local_18 = *(undefined4 *)(lVar16 + 100);
    lVar7 = *(long *)(piVar12 + -6);
    local_50 = *(undefined4 **)(lVar16 + 0x40);
    uVar11 = *(ulong *)(lVar16 + 0x48);
    piVar13 = piVar12;
  }
  else {
    piVar12 = (int *)*param_6;
    if (*(int *)(lVar16 + 0x6c) != *piVar12) goto LAB_71007e6980;
LAB_71007e6a60:
    local_18 = *(undefined4 *)(lVar16 + 0x68);
    lVar7 = *(long *)(piVar12 + -6);
    local_50 = *(undefined4 **)(lVar16 + 0x50);
    uVar11 = *(ulong *)(lVar16 + 0x58);
    piVar13 = piVar12 + 1;
    if (lVar7 == 0) {
      piVar13 = piVar12;
    }
  }
  lVar7 = (**(code **)(*plVar14 + 0x28))(plVar14,4,piVar13,piVar13 + lVar7);
  lVar7 = lVar7 - (long)piVar13 >> 2;
  if (lVar7 == 0) goto LAB_71007e69bc;
  lVar17 = lVar7 << 1;
  local_10 = 0x7100d21110;
  FUN_71007b7b80(&local_10,lVar17);
  iVar6 = *(int *)(lVar16 + 0x60);
  lVar15 = lVar7 - iVar6;
  if (0 < lVar15) {
    if (iVar6 < 0) {
      lVar15 = lVar7;
      if (*(long *)(lVar16 + 0x18) == 0) goto LAB_71007e6dec;
    }
    else {
      if (*(long *)(lVar16 + 0x18) == 0) {
LAB_71007e6dec:
        FUN_71007b79a0(&local_10,piVar13,lVar15);
        iVar6 = *(int *)(lVar16 + 0x60);
        goto LAB_71007e6b4c;
      }
      lVar17 = lVar15 * 2;
    }
    FUN_71007b7880(&local_10,0,*(undefined8 *)(local_10 + -0x18),lVar17,0);
    if (-1 < *(int *)(local_10 + -8)) {
      FUN_71007b7800(&local_10);
    }
    lVar17 = FUN_71007e6660(local_10,*(undefined4 *)(lVar16 + 0x28),*(undefined8 *)(lVar16 + 0x10),
                            *(undefined8 *)(lVar16 + 0x18),piVar13,piVar13 + lVar15);
    if (-1 < *(int *)(local_10 + -8)) {
      FUN_71007b7800(&local_10);
    }
    uVar10 = *(ulong *)(local_10 + -0x18);
    uVar9 = lVar17 - local_10 >> 2;
    if (uVar10 < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003bf8("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::erase",
                     uVar9,uVar10);
    }
    FUN_71007b7600(&local_10,uVar9,uVar10 - uVar9,0);
    iVar6 = *(int *)(lVar16 + 0x60);
  }
LAB_71007e6b4c:
  if (0 < iVar6) {
    uVar2 = *(undefined4 *)(lVar16 + 0x24);
    uVar9 = *(long *)(local_10 + -0x18) + 1;
    if ((*(ulong *)(local_10 + -0x10) < uVar9) || (0 < (int)*(undefined8 *)(local_10 + -8))) {
      FUN_71007b7b80(&local_10,uVar9);
    }
    *(undefined4 *)(local_10 + *(long *)(local_10 + -0x18) * 4) = uVar2;
    if (local_10 != 0x7100d21110) {
      *(ulong *)(local_10 + -0x18) = uVar9;
      *(undefined4 *)(local_10 + -8) = 0;
      *(undefined4 *)(local_10 + uVar9 * 4) = 0;
    }
    if (lVar15 < 0) {
      FUN_71007b7e80(&local_10,-lVar15,*(undefined4 *)(lVar16 + 0x70));
      FUN_71007b7d40(&local_10,piVar13,lVar7);
    }
    else {
      FUN_71007b7d40(&local_10,piVar13 + lVar15,(long)*(int *)(lVar16 + 0x60));
    }
  }
  uVar1 = *(uint *)(param_4 + 0x18) & 0xb0;
  uVar9 = uVar11 + *(long *)(local_10 + -0x18);
  if ((*(uint *)(param_4 + 0x18) >> 9 & 1) != 0) {
    uVar9 = uVar9 + *(long *)(lVar16 + 0x38);
  }
  local_8 = 0x7100d21110;
  FUN_71007b7b80(&local_8,uVar9 << 1);
  uVar10 = *(ulong *)(param_4 + 0x10);
  pbVar18 = (byte *)&local_18;
  do {
    bVar3 = *pbVar18;
    if (bVar3 == 2) {
      if ((*(uint *)(param_4 + 0x18) >> 9 & 1) != 0) {
        FUN_71007b7d40(&local_8,*(undefined8 *)(lVar16 + 0x30),*(undefined8 *)(lVar16 + 0x38));
      }
    }
    else if (bVar3 < 3) {
      if (bVar3 == 0) {
        if (uVar1 == 0x10 && uVar9 < uVar10) goto LAB_71007e6bcc;
      }
      else if (uVar1 != 0x10 || uVar10 <= uVar9) {
        FUN_71007b8000(&local_8,param_5);
      }
      else {
LAB_71007e6bcc:
        FUN_71007b7e80(&local_8,uVar10 - uVar9,param_5);
      }
    }
    else if (bVar3 == 3) {
      if (uVar11 != 0) {
        FUN_71007b8000(&local_8,*local_50);
      }
    }
    else if (bVar3 == 4) {
      FUN_71007b7c40(&local_8,&local_10);
    }
    pbVar18 = pbVar18 + 1;
  } while (pbVar18 != abStack_14);
  if (uVar11 < 2) {
    uVar11 = *(ulong *)(local_8 + -0x18);
  }
  else {
    FUN_71007b7d40(&local_8,local_50 + 1,uVar11 - 1);
    uVar11 = *(ulong *)(local_8 + -0x18);
  }
  if (uVar11 < uVar10) {
    if (uVar1 == 0x20) {
      FUN_71007b7e80(&local_8,uVar10 - uVar11,param_5);
      uVar11 = uVar10;
    }
    else {
      FUN_71007b7880(&local_8,0,0,uVar10 - uVar11,param_5);
      uVar11 = uVar10;
    }
  }
  uVar1 = (uint)param_3 & 0xff;
  if (((param_3 & 1) == 0) &&
     (lVar7 = (**(code **)(*param_2 + 0x60))(param_2,local_8,(long)(int)uVar11),
     (int)uVar11 != lVar7)) {
    uVar1 = 1;
  }
  param_3 = param_3 & 0xffffffffffffff00 | (ulong)uVar1;
  if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210f8) {
    piVar12 = (int *)(local_8 + -8);
    do {
      iVar6 = *piVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 < 1) {
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_20);
    }
  }
  if ((undefined1 *)(local_10 + -0x18) != &DAT_7100d210f8) {
    piVar12 = (int *)(local_10 + -8);
    do {
      iVar6 = *piVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 < 1) {
      thunk_FUN_710081c200((undefined1 *)(local_10 + -0x18),auStack_20);
    }
  }
LAB_71007e69bc:
  *(undefined8 *)(param_4 + 0x10) = 0;
  auVar19._8_8_ = param_3;
  auVar19._0_8_ = param_2;
  return auVar19;
}



// ===== FUN_71007e6f00 @ 71007e6f00 (size=1352) =====

undefined1  [16]
FUN_71007e6f00(undefined8 param_1,long *param_2,ulong param_3,long param_4,undefined4 param_5,
              undefined8 *param_6)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  int *piVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  byte *pbVar17;
  undefined1 auVar18 [16];
  undefined4 *local_58;
  uint local_48;
  undefined1 auStack_20 [8];
  undefined4 local_18;
  byte abStack_14 [4];
  long local_10;
  long local_8;
  
  lVar6 = FUN_71007b00e0(&DAT_7100d21118);
  plVar14 = *(long **)(*(long *)(*(long *)(param_4 + 0xd0) + 8) + lVar6 * 8);
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  lVar6 = FUN_71007b00e0(&DAT_7100d22848);
  lVar15 = *(long *)(*(long *)(param_4 + 0xd0) + 0x18);
  lVar16 = *(long *)(lVar15 + lVar6 * 8);
  if (lVar16 == 0) {
    puVar7 = (undefined8 *)FUN_71007af5c0(0xa0);
    *(undefined4 *)(puVar7 + 1) = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *puVar7 = &PTR_FUN_7100aef2d0;
    *(undefined1 *)(puVar7 + 4) = 0;
    *(undefined8 *)((long)puVar7 + 0x24) = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    *(undefined4 *)(puVar7 + 0xc) = 0;
    *(undefined8 *)((long)puVar7 + 100) = 0;
    *(undefined1 *)(puVar7 + 0x13) = 0;
    FUN_71007e5240(puVar7,param_4 + 0xd0);
    FUN_71007b05e0(*(undefined8 *)(param_4 + 0xd0),puVar7,lVar6);
    lVar16 = *(long *)(lVar15 + lVar6 * 8);
  }
  piVar12 = (int *)*param_6;
  if (*piVar12 == *(int *)(lVar16 + 0x6c)) {
    local_18 = *(undefined4 *)(lVar16 + 0x68);
    lVar6 = *(long *)(piVar12 + -6);
    local_58 = *(undefined4 **)(lVar16 + 0x50);
    uVar11 = *(ulong *)(lVar16 + 0x58);
    piVar13 = piVar12 + 1;
    if (lVar6 == 0) {
      piVar13 = piVar12;
    }
  }
  else {
    local_18 = *(undefined4 *)(lVar16 + 100);
    lVar6 = *(long *)(piVar12 + -6);
    local_58 = *(undefined4 **)(lVar16 + 0x40);
    uVar11 = *(ulong *)(lVar16 + 0x48);
    piVar13 = piVar12;
  }
  lVar6 = (**(code **)(*plVar14 + 0x28))(plVar14,4,piVar13,piVar13 + lVar6);
  lVar6 = lVar6 - (long)piVar13 >> 2;
  if (lVar6 == 0) goto LAB_71007e6fbc;
  lVar8 = lVar6 << 1;
  local_10 = 0x7100d21110;
  FUN_71007b7b80();
  iVar5 = *(int *)(lVar16 + 0x60);
  lVar15 = lVar6 - iVar5;
  if (0 < lVar15) {
    if (iVar5 < 0) {
      lVar15 = lVar6;
      if (*(long *)(lVar16 + 0x18) == 0) goto LAB_71007e7390;
    }
    else {
      if (*(long *)(lVar16 + 0x18) == 0) {
LAB_71007e7390:
        FUN_71007b79a0(&local_10,piVar13,lVar15);
        iVar5 = *(int *)(lVar16 + 0x60);
        goto LAB_71007e70cc;
      }
      lVar8 = lVar15 * 2;
    }
    FUN_71007b7880(&local_10,0,*(undefined8 *)(local_10 + -0x18),lVar8,0);
    if (-1 < *(int *)(local_10 + -8)) {
      FUN_71007b7800(&local_10);
    }
    lVar8 = FUN_71007e6660(local_10,*(undefined4 *)(lVar16 + 0x28),*(undefined8 *)(lVar16 + 0x10),
                           *(undefined8 *)(lVar16 + 0x18),piVar13,piVar13 + lVar15);
    if (-1 < *(int *)(local_10 + -8)) {
      FUN_71007b7800(&local_10);
    }
    uVar10 = *(ulong *)(local_10 + -0x18);
    uVar9 = lVar8 - local_10 >> 2;
    if (uVar10 < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003bf8("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::erase",
                     uVar9,uVar10);
    }
    FUN_71007b7600(&local_10,uVar9,uVar10 - uVar9,0);
    iVar5 = *(int *)(lVar16 + 0x60);
  }
LAB_71007e70cc:
  if (0 < iVar5) {
    FUN_71007b8000(&local_10,*(undefined4 *)(lVar16 + 0x24));
    if (lVar15 < 0) {
      FUN_71007b7e80(&local_10,-lVar15,*(undefined4 *)(lVar16 + 0x70));
      FUN_71007b7d40(&local_10,piVar13,lVar6);
    }
    else {
      FUN_71007b7d40(&local_10,piVar13 + lVar15,(long)*(int *)(lVar16 + 0x60));
    }
  }
  local_48 = *(uint *)(param_4 + 0x18) & 0xb0;
  uVar9 = uVar11 + *(long *)(local_10 + -0x18);
  if ((*(uint *)(param_4 + 0x18) >> 9 & 1) != 0) {
    uVar9 = uVar9 + *(long *)(lVar16 + 0x38);
  }
  local_8 = 0x7100d21110;
  FUN_71007b7b80(&local_8,uVar9 << 1);
  uVar10 = *(ulong *)(param_4 + 0x10);
  pbVar17 = (byte *)&local_18;
  do {
    bVar2 = *pbVar17;
    if (bVar2 == 2) {
      if ((*(uint *)(param_4 + 0x18) >> 9 & 1) != 0) {
        FUN_71007b7d40(&local_8,*(undefined8 *)(lVar16 + 0x30),*(undefined8 *)(lVar16 + 0x38));
      }
    }
    else if (bVar2 < 3) {
      if (bVar2 == 0) {
        if (local_48 == 0x10 && uVar9 < uVar10) goto LAB_71007e714c;
      }
      else if (local_48 != 0x10 || uVar10 <= uVar9) {
        FUN_71007b8000(&local_8,param_5);
      }
      else {
LAB_71007e714c:
        FUN_71007b7e80(&local_8,uVar10 - uVar9,param_5);
      }
    }
    else if (bVar2 == 3) {
      if (uVar11 != 0) {
        FUN_71007b8000(&local_8,*local_58);
      }
    }
    else if (bVar2 == 4) {
      FUN_71007b7c40(&local_8,&local_10);
    }
    pbVar17 = pbVar17 + 1;
  } while (pbVar17 != abStack_14);
  if (uVar11 < 2) {
    uVar11 = *(ulong *)(local_8 + -0x18);
  }
  else {
    FUN_71007b7d40(&local_8,local_58 + 1,uVar11 - 1);
    uVar11 = *(ulong *)(local_8 + -0x18);
  }
  if (uVar11 < uVar10) {
    if (local_48 == 0x20) {
      FUN_71007b7e80(&local_8,uVar10 - uVar11,param_5);
      uVar11 = uVar10;
    }
    else {
      FUN_71007b7880(&local_8,0,0,uVar10 - uVar11,param_5);
      uVar11 = uVar10;
    }
  }
  uVar1 = (uint)param_3 & 0xff;
  if (((param_3 & 1) == 0) &&
     (lVar6 = (**(code **)(*param_2 + 0x60))(param_2,local_8,(long)(int)uVar11),
     (int)uVar11 != lVar6)) {
    uVar1 = 1;
  }
  param_3 = param_3 & 0xffffffffffffff00 | (ulong)uVar1;
  if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210f8) {
    piVar12 = (int *)(local_8 + -8);
    do {
      iVar5 = *piVar12;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar4) {
        *piVar12 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 < 1) {
      thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_20);
    }
  }
  if ((undefined1 *)(local_10 + -0x18) != &DAT_7100d210f8) {
    piVar12 = (int *)(local_10 + -8);
    do {
      iVar5 = *piVar12;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar4) {
        *piVar12 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 < 1) {
      thunk_FUN_710081c200((undefined1 *)(local_10 + -0x18),auStack_20);
    }
  }
LAB_71007e6fbc:
  *(undefined8 *)(param_4 + 0x10) = 0;
  auVar18._8_8_ = param_3;
  auVar18._0_8_ = param_2;
  return auVar18;
}



// ===== FUN_71007e74a0 @ 71007e74a0 (size=476) =====

undefined1  [16]
FUN_71007e74a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              ulong param_5,long param_6,undefined4 param_7)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_e0 [64];
  undefined1 auStack_18 [8];
  long local_10;
  long local_8;
  
  FUN_71007afd00(&local_10,param_6 + 0xd0);
  lVar5 = FUN_71007b00e0(&DAT_7100d21118);
  plVar7 = *(long **)(*(long *)(local_10 + 8) + lVar5 * 8);
  if (plVar7 != (long *)0x0) {
    puVar3 = auStack_e0;
    local_8 = FUN_71007afd60();
    iVar4 = FUN_71007b9ba0(param_1,&local_8,auStack_e0,0x40,"%.*Lf",0);
    if (0x3f < iVar4) {
      lVar5 = -((long)(iVar4 + 1) + 0xfU & 0xfffffffffffffff0);
      puVar3 = auStack_e0 + lVar5;
      local_8 = FUN_71007afd60();
      iVar4 = FUN_71007b9ba0(param_1,&local_8,auStack_e0 + lVar5,iVar4 + 1,"%.*Lf",0);
    }
    local_8 = FUN_71007b7520((long)iVar4,0,auStack_18);
    if (-1 < *(int *)(local_8 + -8)) {
      FUN_71007b7800(&local_8);
    }
    (**(code **)(*plVar7 + 0x58))(plVar7,puVar3,puVar3 + iVar4,local_8);
    if ((param_5 & 1) == 0) {
      auVar8 = FUN_71007e6f00(param_2,param_3,param_4,param_6,param_7,&local_8);
    }
    else {
      auVar8 = FUN_71007e6900();
    }
    if ((undefined1 *)(local_8 + -0x18) != &DAT_7100d210f8) {
      piVar6 = (int *)(local_8 + -8);
      do {
        iVar4 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar4 < 1) {
        thunk_FUN_710081c200((undefined1 *)(local_8 + -0x18),auStack_18);
      }
    }
    FUN_71007b0080(&local_10);
    return auVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003a84();
}



// ===== FUN_71007e76c0 @ 71007e76c0 (size=556) =====

void FUN_71007e76c0(long param_1,undefined4 param_2,int *param_3,int *param_4,long param_5,
                   long param_6)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  
  param_5 = param_5 - param_6;
  uVar1 = *(uint *)(param_1 + 0x18) & 0xb0;
  if (uVar1 == 0x20) {
    if (param_6 != 0) {
      FUN_710080e900(param_3,param_4,param_6);
    }
    if (param_5 == 0) {
      return;
    }
    FUN_710081fbc0(param_3 + param_6,param_2,param_5);
    return;
  }
  if (uVar1 == 0x10) {
    lVar3 = FUN_71007b00e0(&DAT_7100d21118);
    plVar4 = *(long **)(*(long *)(*(long *)(param_1 + 0xd0) + 8) + lVar3 * 8);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003a84();
    }
    iVar2 = (**(code **)(*plVar4 + 0x50))(plVar4,0x2d);
    if ((*param_4 == iVar2) ||
       (iVar2 = (**(code **)(*plVar4 + 0x50))(plVar4,0x2b), *param_4 == iVar2)) {
      *param_3 = iVar2;
      param_4 = param_4 + 1;
      lVar3 = 1;
      param_3 = param_3 + 1;
      goto joined_r0x0071007e78e0;
    }
    iVar2 = (**(code **)(*plVar4 + 0x50))(plVar4,0x30);
    if (*param_4 != iVar2 || param_6 < 2) goto LAB_71007e7704;
    iVar2 = (**(code **)(*plVar4 + 0x50))(plVar4,0x78);
    if ((param_4[1] == iVar2) ||
       (iVar2 = (**(code **)(*plVar4 + 0x50))(plVar4,0x58), param_4[1] == iVar2)) {
      *param_3 = *param_4;
      lVar3 = 2;
      param_3[1] = param_4[1];
      param_3 = param_3 + 2;
      param_4 = param_4 + 2;
      goto joined_r0x0071007e78e0;
    }
    if (param_5 == 0) goto LAB_71007e7848;
    FUN_710081fbc0(param_3,param_2,param_5);
  }
  else {
LAB_71007e7704:
    lVar3 = 0;
joined_r0x0071007e78e0:
    if (param_5 != 0) {
      FUN_710081fbc0(param_3,param_2,param_5);
    }
    param_6 = param_6 - lVar3;
    if (param_6 == 0) {
      return;
    }
  }
  param_3 = param_3 + param_5;
LAB_71007e7848:
  FUN_710080e900(param_3,param_4,param_6);
  return;
}



// ===== FUN_71007e7900 @ 71007e7900 (size=60) =====

void FUN_71007e7900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,int *param_7)

{
  FUN_71007e76c0(param_4,param_2,param_5,param_6,param_3,(long)*param_7);
  *param_7 = (int)param_3;
  return;
}



// ===== FUN_71007e8060 @ 71007e8060 (size=164) =====

ulong FUN_71007e8060(undefined4 *param_1,ulong param_2,long param_3,uint param_4,ulong param_5)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  
  puVar4 = param_1;
  if ((param_5 & 1) == 0) {
    if ((param_4 & 0x4a) == 0x40) {
      do {
        uVar3 = param_2 & 7;
        param_2 = param_2 >> 3;
        puVar4 = puVar4 + -1;
        *puVar4 = *(undefined4 *)(param_3 + uVar3 * 4 + 0x10);
      } while (param_2 != 0);
    }
    else {
      lVar2 = 4;
      if ((param_4 & 0x4000) != 0) {
        lVar2 = 0x14;
      }
      do {
        uVar3 = param_2 & 0xf;
        param_2 = param_2 >> 4;
        puVar4 = puVar4 + -1;
        *puVar4 = *(undefined4 *)(param_3 + (uVar3 + lVar2) * 4);
      } while (param_2 != 0);
    }
  }
  else {
    do {
      puVar4 = puVar4 + -1;
      *puVar4 = *(undefined4 *)(param_3 + (ulong)((int)param_2 + (int)(param_2 / 10) * -10 + 4) * 4)
      ;
      bVar1 = 9 < param_2;
      param_2 = param_2 / 10;
    } while (bVar1);
  }
  return (ulong)((long)param_1 - (long)puVar4) >> 2 & 0xffffffff;
}



// ===== FUN_71007e8120 @ 71007e8120 (size=532) =====

undefined1  [16]
FUN_71007e8120(undefined8 param_1,long *param_2,uint param_3,long param_4,undefined4 param_5,
              long param_6)

{
  uint uVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  long lVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined4 auStack_120 [40];
  int local_4;
  
  lVar8 = FUN_71007e6200(param_4 + 0xd0);
  uVar1 = *(uint *)(param_4 + 0x18);
  puVar3 = auStack_120;
  puVar4 = auStack_120;
  uVar12 = uVar1 & 0x4a;
  bVar5 = uVar12 != 0x40;
  bVar6 = uVar12 != 8;
  lVar11 = -param_6;
  if (0 < param_6 || (!bVar5 || !bVar6)) {
    lVar11 = param_6;
  }
  local_4 = FUN_71007e8060(&stack0xffffffffffffff80,lVar11,lVar8 + 0x50,uVar1,bVar5 && bVar6);
  puVar9 = auStack_120 + (0x28 - local_4);
  if ((*(byte *)(lVar8 + 0x20) & 1) == 0) {
    puVar10 = puVar9;
    if (bVar5 && bVar6) goto LAB_71007e81c0;
LAB_71007e826c:
    puVar9 = puVar10;
    iVar7 = local_4;
    if ((uVar1 & 0x200) != 0 && param_6 != 0) {
      if (uVar12 == 0x40) {
        iVar7 = local_4 + 1;
        puVar9 = puVar10 + -1;
        *puVar9 = *(undefined4 *)(lVar8 + 0x60);
        local_4 = iVar7;
      }
      else {
        iVar7 = local_4 + 2;
        puVar9 = puVar10 + -2;
        puVar10[-1] = *(undefined4 *)(lVar8 + 0x50 + (((ulong)(uVar1 >> 0xe) & 1) + 2) * 4);
        local_4 = iVar7;
        *puVar9 = *(undefined4 *)(lVar8 + 0x60);
      }
    }
LAB_71007e81c8:
    lVar11 = *(long *)(param_4 + 0x10);
    lVar8 = (long)iVar7;
    puVar3 = puVar4;
    if (lVar11 <= lVar8) goto LAB_71007e81d8;
  }
  else {
    lVar11 = -((-(ulong)(local_4 + 1U >> 0x1f) & 0xfffffff800000000 | (ulong)(local_4 + 1U) << 3) +
               0xf & 0xfffffffffffffff0);
    puVar4 = (undefined4 *)((long)auStack_120 + lVar11);
    puVar3 = (undefined4 *)((long)auStack_120 + lVar11);
    puVar10 = (undefined4 *)((long)auStack_120 + lVar11 + 8);
    FUN_71007e68a0(param_1,*(undefined8 *)(lVar8 + 0x10),*(undefined8 *)(lVar8 + 0x18),
                   *(undefined4 *)(lVar8 + 0x4c),param_4,puVar10,puVar9,&local_4);
    if (!bVar5 || !bVar6) goto LAB_71007e826c;
LAB_71007e81c0:
    puVar4 = puVar3;
    if (param_6 < 0) {
      puVar10[-1] = *(undefined4 *)(lVar8 + 0x50);
      puVar9 = puVar10 + -1;
      iVar7 = local_4 + 1;
      local_4 = local_4 + 1;
      goto LAB_71007e81c8;
    }
    puVar9 = puVar10;
    iVar7 = local_4;
    if ((uVar1 >> 0xb & 1) == 0) goto LAB_71007e81c8;
    iVar7 = local_4 + 1;
    puVar10[-1] = *(undefined4 *)(lVar8 + 0x54);
    puVar9 = puVar10 + -1;
    lVar11 = *(long *)(param_4 + 0x10);
    lVar8 = (long)iVar7;
    local_4 = iVar7;
    if (lVar11 <= lVar8) goto LAB_71007e81d8;
  }
  lVar2 = -(lVar11 * 4 + 0xfU & 0xfffffffffffffff0);
  FUN_71007e7900(param_1,param_5,lVar11,param_4,(long)puVar3 + lVar2,puVar9,&local_4);
  lVar8 = (long)local_4;
  puVar9 = (undefined4 *)((long)puVar3 + lVar2);
LAB_71007e81d8:
  *(undefined8 *)(param_4 + 0x10) = 0;
  uVar12 = param_3 & 0xff;
  if (((param_3 & 1) == 0) &&
     (lVar11 = (**(code **)(*param_2 + 0x60))(param_2,puVar9,lVar8), lVar11 != lVar8)) {
    uVar12 = 1;
  }
  auVar13._8_4_ = uVar12;
  auVar13._0_8_ = param_2;
  auVar13._12_4_ = 0;
  return auVar13;
}



// ===== FUN_71007e8360 @ 71007e8360 (size=412) =====

undefined1  [16]
FUN_71007e8360(undefined8 param_1,long *param_2,ulong param_3,long param_4,undefined4 param_5,
              ulong param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  int local_48;
  
  uVar6 = *(uint *)(param_4 + 0x18);
  if ((uVar6 & 1) == 0) {
    auVar10 = FUN_71007e8120();
    param_2 = auVar10._0_8_;
    uVar7 = param_3 & 0xffffffffffffff00 | auVar10._8_8_ & 0xff;
    goto LAB_71007e839c;
  }
  lVar1 = FUN_71007e6200(param_4 + 0xd0);
  if ((param_6 & 1) == 0) {
    uVar9 = *(undefined8 *)(lVar1 + 0x38);
    uVar7 = (ulong)((uint)param_3 & 0xff);
    iVar4 = (int)*(undefined8 *)(lVar1 + 0x40);
    lVar8 = (long)iVar4;
    lVar1 = *(long *)(param_4 + 0x10);
    if (iVar4 < lVar1) goto LAB_71007e83f8;
LAB_71007e8480:
    *(undefined8 *)(param_4 + 0x10) = 0;
    if ((uVar7 & 1) == 0) {
LAB_71007e8488:
      lVar1 = (**(code **)(*param_2 + 0x60))(param_2,uVar9,lVar8);
      uVar6 = (uint)uVar7;
      if (lVar8 != lVar1) {
        uVar6 = 1;
      }
      uVar7 = param_3 & 0xffffffffffffff00 | (ulong)uVar6;
      goto LAB_71007e839c;
    }
  }
  else {
    uVar9 = *(undefined8 *)(lVar1 + 0x28);
    uVar7 = (ulong)((uint)param_3 & 0xff);
    iVar4 = (int)*(undefined8 *)(lVar1 + 0x30);
    lVar8 = (long)iVar4;
    lVar1 = *(long *)(param_4 + 0x10);
    if (lVar1 <= iVar4) goto LAB_71007e8480;
LAB_71007e83f8:
    lVar2 = -((lVar1 - lVar8) * 4 + 0xfU & 0xfffffffffffffff0);
    FUN_710081fbc0(&stack0xffffffffffffff50 + lVar2,param_5);
    *(undefined8 *)(param_4 + 0x10) = 0;
    local_48 = (int)(lVar1 - lVar8);
    lVar1 = (long)local_48;
    uVar5 = (uint)uVar7;
    if ((uVar6 & 0xb0) == 0x20) {
      if ((uVar7 & 1) == 0) {
        lVar3 = (**(code **)(*param_2 + 0x60))(param_2,uVar9,lVar8);
        if (lVar8 == lVar3) {
          lVar8 = (**(code **)(*param_2 + 0x60))(param_2,&stack0xffffffffffffff50 + lVar2,lVar1);
          if (lVar8 != lVar1) {
            uVar5 = 1;
          }
          uVar7 = param_3 & 0xffffffffffffff00 | (ulong)uVar5;
          goto LAB_71007e839c;
        }
        goto LAB_71007e8458;
      }
    }
    else if ((uVar7 & 1) == 0) {
      lVar2 = (**(code **)(*param_2 + 0x60))(param_2,&stack0xffffffffffffff50 + lVar2,lVar1);
      if (lVar2 == lVar1) goto LAB_71007e8488;
LAB_71007e8458:
      uVar7 = 1;
    }
  }
  uVar7 = param_3 & 0xffffffffffffff00 | uVar7;
LAB_71007e839c:
  auVar10._8_8_ = uVar7;
  auVar10._0_8_ = param_2;
  return auVar10;
}



// ===== FUN_71007e8500 @ 71007e8500 (size=456) =====

undefined1  [16]
FUN_71007e8500(undefined8 param_1,long *param_2,uint param_3,long param_4,undefined4 param_5,
              long param_6)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined4 auStack_120 [40];
  int local_4;
  
  lVar5 = FUN_71007e6200(param_4 + 0xd0);
  uVar1 = *(uint *)(param_4 + 0x18);
  puVar3 = auStack_120;
  puVar2 = auStack_120;
  uVar9 = uVar1 & 0x4a;
  local_4 = FUN_71007e8060(&stack0xffffffffffffff80,param_6,lVar5 + 0x50,uVar1,
                           uVar9 != 0x40 && uVar9 != 8);
  puVar7 = auStack_120 + (0x28 - local_4);
  iVar4 = local_4;
  if ((*(byte *)(lVar5 + 0x20) & 1) != 0) {
    lVar8 = -((-(ulong)(local_4 + 1U >> 0x1f) & 0xfffffff800000000 | (ulong)(local_4 + 1U) << 3) +
              0xf & 0xfffffffffffffff0);
    puVar2 = (undefined4 *)((long)auStack_120 + lVar8);
    puVar3 = (undefined4 *)((long)auStack_120 + lVar8);
    puVar6 = (undefined4 *)((long)auStack_120 + lVar8 + 8);
    FUN_71007e68a0(param_1,*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 0x18),
                   *(undefined4 *)(lVar5 + 0x4c),param_4,puVar6,puVar7,&local_4);
    puVar7 = puVar6;
    iVar4 = local_4;
  }
  puVar6 = puVar7;
  local_4 = iVar4;
  if ((uVar9 == 0x40 || uVar9 == 8) && (puVar3 = puVar2, (uVar1 & 0x200) != 0 && param_6 != 0)) {
    if (uVar9 == 0x40) {
      iVar4 = iVar4 + 1;
      puVar6 = puVar7 + -1;
      *puVar6 = *(undefined4 *)(lVar5 + 0x60);
      local_4 = iVar4;
    }
    else {
      iVar4 = iVar4 + 2;
      puVar6 = puVar7 + -2;
      puVar7[-1] = *(undefined4 *)(lVar5 + 0x50 + (((ulong)(uVar1 >> 0xe) & 1) + 2) * 4);
      local_4 = iVar4;
      *puVar6 = *(undefined4 *)(lVar5 + 0x60);
    }
  }
  lVar5 = *(long *)(param_4 + 0x10);
  lVar8 = (long)iVar4;
  puVar7 = puVar6;
  if (lVar8 < lVar5) {
    lVar8 = -(lVar5 * 4 + 0xfU & 0xfffffffffffffff0);
    puVar7 = (undefined4 *)((long)puVar3 + lVar8);
    FUN_71007e7900(param_1,param_5,lVar5,param_4,(long)puVar3 + lVar8,puVar6,&local_4);
    lVar8 = (long)local_4;
  }
  *(undefined8 *)(param_4 + 0x10) = 0;
  uVar9 = param_3 & 0xff;
  if (((param_3 & 1) == 0) &&
     (lVar5 = (**(code **)(*param_2 + 0x60))(param_2,puVar7,lVar8), lVar8 != lVar5)) {
    uVar9 = 1;
  }
  auVar10._8_4_ = uVar9;
  auVar10._0_8_ = param_2;
  auVar10._12_4_ = 0;
  return auVar10;
}



// ===== FUN_71007e8700 @ 71007e8700 (size=80) =====

void FUN_71007e8700(void)

{
  uint uVar1;
  long in_x3;
  
  uVar1 = *(uint *)(in_x3 + 0x18);
  *(uint *)(in_x3 + 0x18) = uVar1 & 0xffffbfb5 | 0x208;
  FUN_71007e8500();
  *(uint *)(in_x3 + 0x18) = uVar1;
  return;
}



// ===== FUN_71007e8760 @ 71007e8760 (size=164) =====

ulong FUN_71007e8760(undefined4 *param_1,ulong param_2,long param_3,uint param_4,ulong param_5)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  
  puVar4 = param_1;
  if ((param_5 & 1) == 0) {
    if ((param_4 & 0x4a) == 0x40) {
      do {
        uVar3 = param_2 & 7;
        param_2 = param_2 >> 3;
        puVar4 = puVar4 + -1;
        *puVar4 = *(undefined4 *)(param_3 + uVar3 * 4 + 0x10);
      } while (param_2 != 0);
    }
    else {
      lVar2 = 4;
      if ((param_4 & 0x4000) != 0) {
        lVar2 = 0x14;
      }
      do {
        uVar3 = param_2 & 0xf;
        param_2 = param_2 >> 4;
        puVar4 = puVar4 + -1;
        *puVar4 = *(undefined4 *)(param_3 + (uVar3 + lVar2) * 4);
      } while (param_2 != 0);
    }
  }
  else {
    do {
      puVar4 = puVar4 + -1;
      *puVar4 = *(undefined4 *)(param_3 + (ulong)((int)param_2 + (int)(param_2 / 10) * -10 + 4) * 4)
      ;
      bVar1 = 9 < param_2;
      param_2 = param_2 / 10;
    } while (bVar1);
  }
  return (ulong)((long)param_1 - (long)puVar4) >> 2 & 0xffffffff;
}



// ===== FUN_71007e8c60 @ 71007e8c60 (size=236) =====

bool FUN_71007e8c60(long *param_1,long *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  bool bVar5;
  
  plVar4 = (long *)*param_1;
  bVar1 = (int)param_1[1] == -1;
  bVar5 = bVar1;
  if (plVar4 != (long *)0x0 && bVar1) {
    if ((int *)plVar4[2] < (int *)plVar4[3]) {
      iVar3 = *(int *)plVar4[2];
    }
    else {
      iVar3 = (**(code **)(*plVar4 + 0x48))();
    }
    bVar5 = false;
    if (iVar3 == -1) {
      *param_1 = 0;
      bVar5 = plVar4 != (long *)0x0 && bVar1;
    }
  }
  plVar4 = (long *)*param_2;
  bVar2 = (int)param_2[1] == -1;
  bVar1 = bVar2;
  if (plVar4 != (long *)0x0 && bVar2) {
    if ((int *)plVar4[2] < (int *)plVar4[3]) {
      iVar3 = *(int *)plVar4[2];
    }
    else {
      iVar3 = (**(code **)(*plVar4 + 0x48))();
    }
    bVar1 = false;
    if (iVar3 == -1) {
      *param_2 = 0;
      bVar1 = plVar4 != (long *)0x0 && bVar2;
    }
  }
  return bVar5 == bVar1;
}



// ===== FUN_71007e8d60 @ 71007e8d60 (size=2892) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_71007e8d60(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
              long param_6,undefined4 *param_7,long *param_8)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  int *piVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  byte bVar19;
  byte bVar20;
  int *piVar21;
  long *plVar22;
  byte bVar23;
  uint uVar24;
  long *plVar25;
  undefined1 auVar26 [16];
  int local_5c;
  int local_50;
  long *local_30;
  undefined8 local_28;
  long *local_20;
  undefined8 local_18;
  undefined1 auStack_10 [8];
  undefined1 *local_8;
  
  local_30 = param_4;
  local_28 = param_5;
  local_20 = param_2;
  local_18 = param_3;
  lVar11 = FUN_71007e6200(param_6 + 0xd0);
  bVar5 = FUN_71007e8c60();
  plVar22 = local_30;
  if ((bVar5 & 1) == 0) {
    local_50 = (int)local_28;
    iVar7 = FUN_71007cc080(&local_20);
    plVar25 = local_20;
    bVar6 = *(byte *)(lVar11 + 0x20);
    if (*(int *)(lVar11 + 0xe4) == iVar7) {
      if ((bVar6 & 1) == 0) {
        iVar10 = *(int *)(lVar11 + 0x48);
        uVar9 = 0x2b;
        goto joined_r0x0071007e9098;
      }
LAB_71007e9000:
      if ((*(int *)(lVar11 + 0x4c) == iVar7) || (*(int *)(lVar11 + 0x48) == iVar7)) {
        bVar19 = 1;
        goto LAB_71007e8ea8;
      }
      uVar9 = 0x2b;
      if (*(int *)(lVar11 + 0xe4) != iVar7) {
        uVar9 = 0x2d;
      }
    }
    else {
      bVar19 = bVar6 & 1;
      if (*(int *)(lVar11 + 0xe0) != iVar7) goto LAB_71007e8ea8;
      if ((bVar6 & 1) != 0) goto LAB_71007e9000;
      iVar10 = *(int *)(lVar11 + 0x48);
      uVar9 = 0x2d;
joined_r0x0071007e9098:
      bVar19 = bVar6 & 1;
      if (iVar7 == iVar10) goto LAB_71007e8ea8;
    }
    FUN_71007b7300(param_8,uVar9);
    FUN_71007e3fa0(plVar25);
    local_18 = CONCAT44(local_18._4_4_,0xffffffff);
    uVar12 = FUN_71007e8c60(&local_20,&local_30);
    plVar22 = local_30;
    if ((uVar12 & 1) == 0) {
      local_50 = (int)local_28;
      iVar7 = FUN_71007cc080(&local_20);
      bVar6 = *(byte *)(lVar11 + 0x20);
      bVar19 = bVar6 & 1;
LAB_71007e8ea8:
      local_5c = 0;
      iVar10 = (int)local_18;
      bVar20 = bVar5;
      do {
        plVar25 = local_20;
        bVar2 = bVar5;
        bVar23 = bVar5;
        if ((bVar19 != 0) && (*(int *)(lVar11 + 0x4c) == iVar7)) {
          local_8 = &DAT_7100d210f0;
          FUN_71007b6ec0(&local_8,0x20);
LAB_71007e90e0:
          if ((*(byte *)(lVar11 + 0x148) & 1) == 0) {
LAB_71007e9500:
            uVar24 = iVar7 - 0x30;
            if (9 < uVar24) goto LAB_71007e95ec;
LAB_71007e950c:
            lVar13 = *param_8;
            lVar15 = *(long *)(lVar13 + -0x18);
            uVar12 = lVar15 + 1;
            if ((*(ulong *)(lVar13 + -0x10) < uVar12) || (0 < (int)*(undefined8 *)(lVar13 + -8))) {
              FUN_71007b6ec0(param_8,uVar12);
            }
            bVar20 = 1;
            *(char *)(*param_8 + *(long *)(*param_8 + -0x18)) = (char)uVar24 + '0';
            lVar13 = *param_8;
            if ((undefined1 *)(lVar13 + -0x18) != &DAT_7100d210d8) {
              *(ulong *)(lVar13 + -0x18) = uVar12;
              *(undefined4 *)(lVar13 + -8) = 0;
              ((undefined1 *)(lVar13 + -0x18))[lVar15 + 0x19] = 0;
            }
            do {
              if ((int *)plVar25[2] < (int *)plVar25[3]) {
                piVar21 = (int *)plVar25[2] + 1;
                plVar25[2] = (long)piVar21;
                if (piVar21 < (int *)plVar25[3]) goto LAB_71007e957c;
LAB_71007e9700:
                iVar7 = (**(code **)(*plVar25 + 0x48))(plVar25);
              }
              else {
                (**(code **)(*plVar25 + 0x50))(plVar25);
                piVar21 = (int *)plVar25[2];
                if ((int *)plVar25[3] <= piVar21) goto LAB_71007e9700;
LAB_71007e957c:
                iVar7 = *piVar21;
              }
              if (iVar7 == -1) {
                plVar25 = (long *)0x0;
              }
              bVar3 = local_50 == -1;
              bVar4 = plVar22 != (long *)0x0;
              bVar6 = bVar3;
              if (bVar4 && bVar3) {
                if ((int *)plVar22[2] < (int *)plVar22[3]) {
                  iVar10 = *(int *)plVar22[2];
                }
                else {
                  iVar10 = (**(code **)(*plVar22 + 0x48))(plVar22);
                }
                bVar6 = bVar5;
                if (iVar10 == -1) {
                  plVar22 = (long *)0x0;
                  bVar6 = bVar4 && bVar3;
                }
              }
              if ((iVar7 == -1) == (bool)bVar6) goto LAB_71007e93e0;
              if (plVar25 != (long *)0x0) {
                if ((int *)plVar25[2] < (int *)plVar25[3]) {
                  iVar7 = *(int *)plVar25[2];
                }
                else {
                  iVar7 = (**(code **)(*plVar25 + 0x48))(plVar25);
                }
                iVar10 = -1;
                if (iVar7 != -1) goto LAB_71007e9500;
              }
              iVar10 = -1;
              iVar7 = -1;
              plVar25 = (long *)0x0;
LAB_71007e95ec:
              if ((*(int *)(lVar11 + 0x48) != iVar7) || (bVar3 = bVar2 != 0, bVar23 != 0 || bVar3))
              {
                bVar6 = bVar23;
                if (*(int *)(lVar11 + 0x128) == iVar7) goto LAB_71007e9610;
                while( true ) {
                  bVar6 = bVar23;
                  if (*(int *)(lVar11 + 0x140) != iVar7) goto LAB_71007e93e4;
LAB_71007e9610:
                  bVar23 = bVar20 & (bVar6 ^ 1);
                  if ((bVar23 & 1) == 0) goto LAB_71007e93e4;
                  FUN_71007b7300(param_8,0x65);
                  FUN_71007e3fa0(plVar25);
                  local_18 = CONCAT44(local_18._4_4_,0xffffffff);
                  local_28 = CONCAT44(local_28._4_4_,local_50);
                  local_30 = plVar22;
                  local_20 = plVar25;
                  uVar12 = FUN_71007e8c60(&local_20,&local_30);
                  plVar22 = local_30;
                  if ((uVar12 & 1) != 0) {
                    lVar15 = *(long *)(local_8 + -0x18);
                    plVar25 = local_20;
                    iVar10 = (int)local_18;
                    puVar14 = local_8;
                    goto joined_r0x0071007e9370;
                  }
                  local_50 = (int)local_28;
                  iVar7 = FUN_71007cc080(&local_20);
                  plVar25 = local_20;
                  bVar20 = bVar23;
                  if (*(int *)(lVar11 + 0xe4) == iVar7) break;
                  uVar17 = 0x2d;
                  if (iVar7 == *(int *)(lVar11 + 0xe0)) goto LAB_71007e9730;
                  uVar24 = iVar7 - 0x30;
                  if (uVar24 < 10) goto LAB_71007e950c;
                  iVar10 = (int)local_18;
                  bVar6 = bVar23;
                  if (iVar7 == *(int *)(lVar11 + 0x128)) goto LAB_71007e93e4;
                }
                uVar17 = 0x2b;
LAB_71007e9730:
                FUN_71007b7300(param_8,uVar17);
              }
              else {
                bVar2 = 1;
                FUN_71007b7300(param_8,0x2e);
                bVar23 = bVar23 != 0 || bVar3;
              }
            } while( true );
          }
          bVar6 = *(byte *)(lVar11 + 0x20);
LAB_71007e90ec:
          goto LAB_71007e9100;
        }
        if ((*(int *)(lVar11 + 0x48) == iVar7) || (*(int *)(lVar11 + 0xf0) != iVar7)) {
          local_8 = &DAT_7100d210f0;
          if (bVar19 != 0) {
            FUN_71007b6ec0(&local_8,0x20);
            goto LAB_71007e90e0;
          }
          if ((*(byte *)(lVar11 + 0x148) & 1) != 0) goto LAB_71007e90ec;
          goto LAB_71007e9500;
        }
        if ((bVar20 & 1) == 0) {
          FUN_71007b7300(param_8,0x30);
          uVar12 = plVar25[2];
          if ((ulong)plVar25[3] <= uVar12) goto LAB_71007e8f78;
LAB_71007e8ef8:
          plVar25[2] = uVar12 + 4;
        }
        else {
          uVar12 = local_20[2];
          if (uVar12 < (ulong)local_20[3]) goto LAB_71007e8ef8;
LAB_71007e8f78:
          (**(code **)(*plVar25 + 0x50))(plVar25);
        }
        local_5c = local_5c + 1;
        local_28 = CONCAT44(local_28._4_4_,local_50);
        local_18 = CONCAT44(local_18._4_4_,0xffffffff);
        local_30 = plVar22;
        local_20 = plVar25;
        uVar12 = FUN_71007e8c60(&local_20,&local_30);
        plVar25 = local_20;
        plVar22 = local_30;
        if ((uVar12 & 1) != 0) goto LAB_71007e8f8c;
        bVar20 = 1;
        local_50 = (int)local_28;
        iVar7 = FUN_71007cc080(&local_20);
        bVar6 = *(byte *)(lVar11 + 0x20);
        bVar19 = bVar6 & 1;
        iVar10 = (int)local_18;
      } while( true );
    }
  }
  plVar25 = local_20;
  local_8 = &DAT_7100d210f0;
  iVar10 = (int)local_18;
  if ((*(byte *)(lVar11 + 0x20) & 1) != 0) {
    FUN_71007b6ec0(&local_8,0x20);
  }
  local_5c = 0;
LAB_71007e8ddc:
  puVar14 = local_8;
  if (*(long *)(local_8 + -0x18) != 0) goto LAB_71007e8de8;
  goto LAB_71007e8e1c;
LAB_71007e9498:
  iVar8 = *(int *)(lVar11 + 0x4c);
LAB_71007e949c:
  bVar23 = 1;
  bVar20 = 1;
  if (iVar8 == iVar7) goto LAB_71007e9364;
  goto LAB_71007e9110;
LAB_71007e8f8c:
  local_8 = &DAT_7100d210f0;
  iVar10 = (int)local_18;
  if ((*(byte *)(lVar11 + 0x20) & 1) != 0) {
    FUN_71007b6ec0(&local_8,0x20);
    goto LAB_71007e8ddc;
  }
  if ((*(byte *)(lVar11 + 0x148) & 1) == 0) goto LAB_71007e8ddc;
  if (_DAT_7100d210d8 == 0) goto LAB_71007e8e34;
LAB_71007e8de8:
  FUN_71007b7300(&local_8,(undefined1)local_5c);
  goto LAB_71007e8e04;
LAB_71007e9100:
  if (((bVar6 & 1) == 0) || (*(int *)(lVar11 + 0x4c) != iVar7)) {
LAB_71007e9110:
    if (*(int *)(lVar11 + 0x48) != iVar7) {
      do {
        lVar15 = FUN_710081d880(lVar11 + 0xf0,iVar7,10);
        if (lVar15 != 0) {
          FUN_71007b7300(param_8,(int)(lVar15 - (lVar11 + 0xf0) >> 2) + 0x30);
          bVar20 = 1;
          local_5c = local_5c + 1;
          piVar21 = (int *)plVar25[2];
          piVar16 = (int *)plVar25[3];
          if (piVar16 <= piVar21) goto LAB_71007e9264;
          goto LAB_71007e91ac;
        }
        bVar6 = bVar23;
        if (((*(int *)(lVar11 + 0x128) != iVar7) && (*(int *)(lVar11 + 0x140) != iVar7)) ||
           ((bVar20 & (bVar23 ^ 0xff) & 1) == 0)) goto LAB_71007e93e4;
        if (*(long *)(local_8 + -0x18) != 0 && bVar2 == 0) {
          FUN_71007b7300(&local_8,(undefined1)local_5c);
        }
        FUN_71007b7300(param_8,0x65);
        if ((ulong)plVar25[2] < (ulong)plVar25[3]) {
          plVar25[2] = plVar25[2] + 4;
        }
        else {
          (**(code **)(*plVar25 + 0x50))(plVar25);
        }
        local_18 = CONCAT44(local_18._4_4_,0xffffffff);
        local_28 = CONCAT44(local_28._4_4_,local_50);
        local_30 = plVar22;
        local_20 = plVar25;
        uVar12 = FUN_71007e8c60(&local_20,&local_30);
        plVar25 = local_20;
        plVar22 = local_30;
        iVar10 = (int)local_18;
        if ((uVar12 & 1) != 0) goto LAB_71007e9364;
        local_50 = (int)local_28;
        iVar7 = (int)local_18;
        if (local_20 != (long *)0x0 && (int)local_18 == -1) {
          if ((int *)local_20[2] < (int *)local_20[3]) {
            iVar7 = *(int *)local_20[2];
          }
          else {
            iVar7 = (**(code **)(*local_20 + 0x48))(local_20);
          }
          if (iVar7 == -1) {
            plVar25 = (long *)0x0;
          }
        }
        bVar6 = *(byte *)(lVar11 + 0x20);
        if (*(int *)(lVar11 + 0xe4) == iVar7) {
          if ((bVar6 & 1) == 0) {
            iVar8 = *(int *)(lVar11 + 0x48);
            if (iVar8 == iVar7) goto LAB_71007e9354;
            uVar9 = 0x2b;
          }
          else {
LAB_71007e9430:
            iVar8 = *(int *)(lVar11 + 0x4c);
            if ((iVar8 == iVar7) || (*(int *)(lVar11 + 0x48) == iVar7)) goto LAB_71007e949c;
            uVar9 = 0x2b;
            if (*(int *)(lVar11 + 0xe4) != iVar7) {
              uVar9 = 0x2d;
            }
          }
LAB_71007e941c:
          FUN_71007b7300(param_8,uVar9);
          bVar23 = true;
          bVar20 = 1;
          goto LAB_71007e91a0;
        }
        if (*(int *)(lVar11 + 0xe0) == iVar7) {
          if ((bVar6 & 1) != 0) goto LAB_71007e9430;
          iVar8 = *(int *)(lVar11 + 0x48);
          if (iVar7 != iVar8) {
            uVar9 = 0x2d;
            goto LAB_71007e941c;
          }
        }
        else {
          if ((bVar6 & 1) != 0) goto LAB_71007e9498;
          iVar8 = *(int *)(lVar11 + 0x48);
        }
LAB_71007e9354:
        bVar23 = 1;
        bVar20 = 1;
        if (iVar7 == iVar8) goto LAB_71007e9364;
      } while( true );
    }
    bVar3 = bVar23 != 0;
    bVar23 = bVar2 != 0 || bVar3;
    if (bVar2 == 0 && !bVar3) {
      if (*(long *)(local_8 + -0x18) != 0) {
        FUN_71007b7300(&local_8,(undefined1)local_5c);
      }
      lVar13 = *param_8;
      lVar15 = *(long *)(lVar13 + -0x18);
      uVar12 = lVar15 + 1;
      if ((*(ulong *)(lVar13 + -0x10) < uVar12) || (0 < (int)*(undefined8 *)(lVar13 + -8))) {
        FUN_71007b6ec0(param_8,uVar12);
      }
      *(undefined1 *)(*param_8 + *(long *)(*param_8 + -0x18)) = 0x2e;
      lVar13 = *param_8;
      if ((undefined1 *)(lVar13 + -0x18) != &DAT_7100d210d8) {
        *(ulong *)(lVar13 + -0x18) = uVar12;
        *(undefined4 *)(lVar13 + -8) = 0;
        ((undefined1 *)(lVar13 + -0x18))[lVar15 + 0x19] = 0;
      }
      bVar2 = 1;
      goto LAB_71007e91a0;
    }
    goto LAB_71007e9364;
  }
  bVar3 = bVar23 != 0;
  bVar23 = bVar3 || bVar2 != 0;
  if (bVar3 || bVar2 != 0) {
LAB_71007e9364:
    lVar15 = *(long *)(local_8 + -0x18);
    puVar14 = local_8;
joined_r0x0071007e9370:
    local_8 = puVar14;
    if (lVar15 != 0) goto LAB_71007e8e04;
    goto LAB_71007e8e1c;
  }
  if (local_5c == 0) {
    puVar18 = (undefined1 *)*param_8;
    puVar14 = puVar18 + -0x18;
    if ((int)*(undefined8 *)(*param_8 + -8) < 1) {
      if (puVar14 != &DAT_7100d210d8) {
        *(undefined4 *)(puVar18 + -8) = 0;
        *(undefined8 *)(puVar18 + -0x18) = 0;
        *puVar18 = 0;
      }
    }
    else {
      if (puVar14 != &DAT_7100d210d8) {
        piVar21 = (int *)(puVar18 + -8);
        do {
          iVar7 = *piVar21;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar21,0x10);
          if (bVar3) {
            *piVar21 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar7 < 1) {
          thunk_FUN_710081c200(puVar14,auStack_10);
        }
      }
      *param_8 = (long)&DAT_7100d210f0;
    }
    goto LAB_71007e8ddc;
  }
  FUN_71007b7300(&local_8,local_5c);
  local_5c = 0;
  bVar2 = bVar23;
LAB_71007e91a0:
  piVar21 = (int *)plVar25[2];
  piVar16 = (int *)plVar25[3];
  if (piVar21 < piVar16) {
LAB_71007e91ac:
    piVar21 = piVar21 + 1;
    plVar25[2] = (long)piVar21;
  }
  else {
LAB_71007e9264:
    (**(code **)(*plVar25 + 0x50))(plVar25);
    piVar21 = (int *)plVar25[2];
    piVar16 = (int *)plVar25[3];
  }
  if (piVar21 < piVar16) {
    iVar7 = *piVar21;
  }
  else {
    iVar7 = (**(code **)(*plVar25 + 0x48))(plVar25);
  }
  if (iVar7 == -1) {
    plVar25 = (long *)0x0;
  }
  bVar3 = local_50 == -1;
  bVar4 = plVar22 != (long *)0x0;
  if (!bVar4 || !bVar3) {
LAB_71007e91e4:
    if ((iVar7 == -1) != bVar3) goto LAB_71007e91f4;
    goto LAB_71007e93e0;
  }
  if ((int *)plVar22[2] < (int *)plVar22[3]) {
    iVar10 = *(int *)plVar22[2];
  }
  else {
    iVar10 = (**(code **)(*plVar22 + 0x48))(plVar22);
  }
  if (iVar10 == -1) {
    plVar22 = (long *)0x0;
    bVar3 = bVar4 && bVar3;
    goto LAB_71007e91e4;
  }
  if ((iVar7 == -1) != (bool)bVar5) {
LAB_71007e91f4:
    if (plVar25 == (long *)0x0) {
      bVar6 = *(byte *)(lVar11 + 0x20);
      iVar7 = -1;
      iVar10 = -1;
    }
    else {
      if ((int *)plVar25[2] < (int *)plVar25[3]) {
        iVar7 = *(int *)plVar25[2];
      }
      else {
        iVar7 = (**(code **)(*plVar25 + 0x48))(plVar25);
      }
      bVar6 = *(byte *)(lVar11 + 0x20);
      if (iVar7 == -1) {
        plVar25 = (long *)0x0;
      }
      iVar10 = -1;
    }
    goto LAB_71007e9100;
  }
LAB_71007e93e0:
  iVar10 = -1;
  bVar6 = bVar23;
LAB_71007e93e4:
  puVar14 = local_8;
  if (*(long *)(local_8 + -0x18) == 0) goto LAB_71007e8e1c;
  if (bVar2 == 0 && bVar6 == 0) goto LAB_71007e8de8;
LAB_71007e8e04:
  puVar14 = local_8;
  uVar12 = FUN_71007fbd00(*(undefined8 *)(lVar11 + 0x10),*(undefined8 *)(lVar11 + 0x18),&local_8);
  if ((uVar12 & 1) == 0) {
    *param_7 = 4;
  }
LAB_71007e8e1c:
  local_18 = CONCAT44(local_18._4_4_,iVar10);
  uVar17 = local_18;
  local_20 = plVar25;
  local_18 = uVar17;
  if (puVar14 + -0x18 != &DAT_7100d210d8) {
    piVar21 = (int *)(puVar14 + -8);
    do {
      iVar7 = *piVar21;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar21,0x10);
      if (bVar3) {
        *piVar21 = iVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar7 < 1) {
      thunk_FUN_710081c200(puVar14 + -0x18,auStack_10);
      local_20 = plVar25;
      local_18 = uVar17;
    }
  }
LAB_71007e8e34:
  auVar26._8_8_ = local_18;
  auVar26._0_8_ = local_20;
  return auVar26;
}



// ===== FUN_71007e98c0 @ 71007e98c0 (size=460) =====

undefined1  [16]
FUN_71007e98c0(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4,undefined8 param_5,
              undefined8 param_6,uint *param_7,undefined8 param_8)

{
  char cVar1;
  undefined1 *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  undefined1 *local_10;
  undefined8 local_8;
  
  local_10 = &DAT_7100d210f0;
  FUN_71007b6ec0(&local_10,0x20);
  auVar8 = FUN_71007e8d60(param_1,param_2,param_3,param_4,param_5,param_6,param_7,&local_10);
  puVar2 = local_10;
  plVar7 = auVar8._0_8_;
  local_8 = FUN_71007afd60();
  FUN_71007fae60(puVar2,param_8,param_7,&local_8);
  bVar3 = auVar8._8_4_ == -1;
  bVar4 = plVar7 != (long *)0x0;
  if (bVar4 && bVar3) {
    if ((int *)plVar7[2] < (int *)plVar7[3]) {
      iVar5 = *(int *)plVar7[2];
    }
    else {
      iVar5 = (**(code **)(*plVar7 + 0x48))(plVar7);
    }
    if (iVar5 == -1) {
      plVar7 = (long *)0x0;
    }
    bVar3 = iVar5 == -1 && (bVar4 && bVar3);
    bVar4 = (int)param_5 == -1;
    if (param_4 == (long *)0x0 || !bVar4) goto LAB_71007e999c;
  }
  else {
    bVar4 = (int)param_5 == -1;
    if (param_4 == (long *)0x0 || !bVar4) goto LAB_71007e999c;
  }
  if ((int *)param_4[2] < (int *)param_4[3]) {
    iVar5 = *(int *)param_4[2];
  }
  else {
    iVar5 = (**(code **)(*param_4 + 0x48))(param_4);
  }
  bVar4 = iVar5 == -1;
LAB_71007e999c:
  if (bVar4 == bVar3) {
    *param_7 = *param_7 | 2;
  }
  if (local_10 + -0x18 != &DAT_7100d210d8) {
    piVar6 = (int *)(local_10 + -8);
    do {
      iVar5 = *piVar6;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar5 < 1) {
      thunk_FUN_710081c200(local_10 + -0x18,&local_8);
    }
  }
  auVar8._8_8_ = param_3 & 0xffffffff00000000 | auVar8._8_8_ & 0xffffffff;
  auVar8._0_8_ = plVar7;
  return auVar8;
}



// ===== FUN_71007e9aa0 @ 71007e9aa0 (size=460) =====

undefined1  [16]
FUN_71007e9aa0(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4,undefined8 param_5,
              undefined8 param_6,uint *param_7,undefined8 param_8)

{
  char cVar1;
  undefined1 *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  undefined1 *local_10;
  undefined8 local_8;
  
  local_10 = &DAT_7100d210f0;
  FUN_71007b6ec0(&local_10,0x20);
  auVar8 = FUN_71007e8d60(param_1,param_2,param_3,param_4,param_5,param_6,param_7,&local_10);
  puVar2 = local_10;
  plVar7 = auVar8._0_8_;
  local_8 = FUN_71007afd60();
  FUN_71007faf40(puVar2,param_8,param_7,&local_8);
  bVar3 = auVar8._8_4_ == -1;
  bVar4 = plVar7 != (long *)0x0;
  if (bVar4 && bVar3) {
    if ((int *)plVar7[2] < (int *)plVar7[3]) {
      iVar5 = *(int *)plVar7[2];
    }
    else {
      iVar5 = (**(code **)(*plVar7 + 0x48))(plVar7);
    }
    if (iVar5 == -1) {
      plVar7 = (long *)0x0;
    }
    bVar3 = iVar5 == -1 && (bVar4 && bVar3);
    bVar4 = (int)param_5 == -1;
    if (param_4 == (long *)0x0 || !bVar4) goto LAB_71007e9b7c;
  }
  else {
    bVar4 = (int)param_5 == -1;
    if (param_4 == (long *)0x0 || !bVar4) goto LAB_71007e9b7c;
  }
  if ((int *)param_4[2] < (int *)param_4[3]) {
    iVar5 = *(int *)param_4[2];
  }
  else {
    iVar5 = (**(code **)(*param_4 + 0x48))(param_4);
  }
  bVar4 = iVar5 == -1;
LAB_71007e9b7c:
  if (bVar4 == bVar3) {
    *param_7 = *param_7 | 2;
  }
  if (local_10 + -0x18 != &DAT_7100d210d8) {
    piVar6 = (int *)(local_10 + -8);
    do {
      iVar5 = *piVar6;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar5 < 1) {
      thunk_FUN_710081c200(local_10 + -0x18,&local_8);
    }
  }
  auVar8._8_8_ = param_3 & 0xffffffff00000000 | auVar8._8_8_ & 0xffffffff;
  auVar8._0_8_ = plVar7;
  return auVar8;
}



// ===== FUN_71007e9c80 @ 71007e9c80 (size=460) =====

undefined1  [16]
FUN_71007e9c80(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4,undefined8 param_5,
              undefined8 param_6,uint *param_7,undefined8 param_8)

{
  char cVar1;
  undefined1 *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  undefined1 *local_10;
  undefined8 local_8;
  
  local_10 = &DAT_7100d210f0;
  FUN_71007b6ec0(&local_10,0x20);
  auVar8 = FUN_71007e8d60(param_1,param_2,param_3,param_4,param_5,param_6,param_7,&local_10);
  puVar2 = local_10;
  plVar7 = auVar8._0_8_;
  local_8 = FUN_71007afd60();
  FUN_71007fb020(puVar2,param_8,param_7,&local_8);
  bVar3 = auVar8._8_4_ == -1;
  bVar4 = plVar7 != (long *)0x0;
  if (bVar4 && bVar3) {
    if ((int *)plVar7[2] < (int *)plVar7[3]) {
      iVar5 = *(int *)plVar7[2];
    }
    else {
      iVar5 = (**(code **)(*plVar7 + 0x48))(plVar7);
    }
    if (iVar5 == -1) {
      plVar7 = (long *)0x0;
    }
    bVar3 = iVar5 == -1 && (bVar4 && bVar3);
    bVar4 = (int)param_5 == -1;
    if (param_4 == (long *)0x0 || !bVar4) goto LAB_71007e9d5c;
  }
  else {
    bVar4 = (int)param_5 == -1;
    if (param_4 == (long *)0x0 || !bVar4) goto LAB_71007e9d5c;
  }
  if ((int *)param_4[2] < (int *)param_4[3]) {
    iVar5 = *(int *)param_4[2];
  }
  else {
    iVar5 = (**(code **)(*param_4 + 0x48))(param_4);
  }
  bVar4 = iVar5 == -1;
LAB_71007e9d5c:
  if (bVar4 == bVar3) {
    *param_7 = *param_7 | 2;
  }
  if (local_10 + -0x18 != &DAT_7100d210d8) {
    piVar6 = (int *)(local_10 + -8);
    do {
      iVar5 = *piVar6;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar5 < 1) {
      thunk_FUN_710081c200(local_10 + -0x18,&local_8);
    }
  }
  auVar8._8_8_ = param_3 & 0xffffffff00000000 | auVar8._8_8_ & 0xffffffff;
  auVar8._0_8_ = plVar7;
  return auVar8;
}



// ===== FUN_71007e9e60 @ 71007e9e60 (size=2548) =====

undefined1  [16]
FUN_71007e9e60(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
              long param_6,uint *param_7,ulong *param_8)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  int *piVar17;
  int *piVar18;
  ulong uVar19;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  undefined4 uVar23;
  long *plVar24;
  long *plVar25;
  uint local_98;
  uint local_90;
  uint local_70;
  uint local_60;
  int local_38;
  long *local_30;
  undefined8 local_28;
  long *local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined1 auStack_10 [8];
  undefined1 *local_8;
  
  uVar7 = 8;
  local_18 = (undefined4)param_3;
  uStack_14 = (undefined4)((ulong)param_3 >> 0x20);
  local_30 = param_4;
  local_28 = param_5;
  local_20 = param_2;
  lVar13 = FUN_71007e6200(param_6 + 0xd0);
  uVar20 = *(uint *)(param_6 + 0x18) & 0x4a;
  if ((uVar20 != 0x40) && (uVar7 = 10, uVar20 == 8)) {
    uVar7 = 0x10;
  }
  uVar8 = FUN_71007e8c60(&local_20,&local_30);
  plVar24 = local_30;
  local_98 = uVar8 & 0xff;
  local_38 = (int)local_28;
  if ((uVar8 & 1) == 0) {
    uVar8 = FUN_71007cc080(&local_20);
    bVar1 = *(byte *)(lVar13 + 0x20);
    local_70 = local_98;
    if ((*(uint *)(lVar13 + 0xe0) != uVar8) && (*(uint *)(lVar13 + 0xe4) != uVar8)) {
      iVar21 = 0;
      bVar6 = bVar1 & 1;
      local_60 = local_98;
      goto LAB_71007e9f9c;
    }
    local_60 = (uint)(*(uint *)(lVar13 + 0xe0) == uVar8);
    bVar6 = bVar1 & 1;
    if ((((bVar1 & 1) == 0) || (*(uint *)(lVar13 + 0x4c) != uVar8)) &&
       (*(uint *)(lVar13 + 0x48) != uVar8)) {
      FUN_71007e3fa0(local_20);
      local_18 = 0xffffffff;
      uVar9 = FUN_71007e8c60(&local_20,&local_30);
      plVar24 = local_30;
      local_38 = (int)local_28;
      if ((uVar9 & 1) != 0) {
        iVar21 = 0;
        bVar6 = *(byte *)(lVar13 + 0x20) & 1;
        local_98 = uVar9 & 0xff;
        goto LAB_71007e9fd4;
      }
      uVar8 = FUN_71007cc080(&local_20);
      bVar6 = *(byte *)(lVar13 + 0x20) & 1;
    }
    iVar21 = 0;
LAB_71007e9f9c:
    do {
      plVar25 = local_20;
      uVar9 = uVar7;
      if ((bVar6 != 0) && (*(uint *)(lVar13 + 0x4c) == uVar8)) {
        if (uVar7 == 0x10) {
          uVar9 = 0x16;
        }
        goto LAB_71007ea45c;
      }
      if (*(uint *)(lVar13 + 0x48) == uVar8) goto LAB_71007e9fd4;
      if (*(uint *)(lVar13 + 0xf0) == uVar8) {
        uVar10 = local_70 ^ 1;
        if ((uVar7 == 10) == 0 && (uVar10 & 1) == 0) goto LAB_71007ea60c;
        local_70 = (uint)(uVar20 == 0 || uVar7 == 8);
        if (uVar20 == 0 || uVar7 == 8) {
          iVar21 = 0;
          uVar7 = 8;
        }
        else {
          local_70 = uVar7 == 10 | uVar10;
          iVar21 = iVar21 + 1;
        }
      }
      else {
        if ((local_70 & 1) == 0) {
          local_98 = local_70;
          goto LAB_71007e9fd4;
        }
LAB_71007ea60c:
        if ((*(uint *)(lVar13 + 0xe8) != uVar8) && (*(uint *)(lVar13 + 0xec) != uVar8)) {
          local_70 = 1;
          goto LAB_71007e9fd4;
        }
        if (uVar20 != 0 && uVar7 != 0x10) {
          local_98 = (uint)(uVar20 == 0 || uVar7 == 0x10);
          local_70 = 1;
          uVar23 = local_18;
          goto joined_r0x0071007ea458;
        }
        iVar21 = 0;
        uVar7 = 0x10;
        local_70 = local_98;
      }
      FUN_71007e3fa0(local_20);
      local_18 = 0xffffffff;
      local_28 = CONCAT44(local_28._4_4_,local_38);
      local_30 = plVar24;
      local_20 = plVar25;
      uVar9 = FUN_71007e8c60(&local_20,&local_30);
      plVar24 = local_30;
      local_38 = (int)local_28;
      if ((uVar9 & 1) != 0) {
        bVar6 = *(byte *)(lVar13 + 0x20) & 1;
        local_98 = uVar9 & 0xff;
        goto LAB_71007e9fd4;
      }
      uVar8 = FUN_71007cc080(&local_20);
      if ((local_70 & 1) == 0) goto LAB_71007ea7e8;
      bVar6 = *(byte *)(lVar13 + 0x20) & 1;
    } while( true );
  }
  uVar8 = 0;
  bVar6 = *(byte *)(lVar13 + 0x20) & 1;
  iVar21 = 0;
  local_70 = 0;
  local_60 = 0;
LAB_71007e9fd4:
  plVar25 = local_20;
  uVar23 = local_18;
  uVar9 = uVar7;
  if (uVar7 == 0x10) {
    uVar9 = 0x16;
  }
joined_r0x0071007ea458:
  local_8 = &DAT_7100d210f0;
  local_20 = plVar25;
  local_18 = uVar23;
  if (bVar6 != 0) {
LAB_71007ea45c:
    uVar23 = local_18;
    plVar25 = local_20;
    local_8 = &DAT_7100d210f0;
    FUN_71007b6ec0(&local_8,0x20);
  }
  uVar16 = (ulong)(int)uVar7;
  uVar15 = (ulong)local_60 + 0x7fffffffffffffff;
  uVar3 = 0;
  if (uVar16 != 0) {
    uVar3 = uVar15 / uVar16;
  }
  uVar7 = (uint)*(byte *)(lVar13 + 0x148);
  uVar20 = local_98;
  local_90 = local_98;
  if ((*(byte *)(lVar13 + 0x148) & 1) == 0) {
    if ((local_98 & 1) == 0) {
      uVar7 = 0x38;
      if (uVar9 != 8) {
        uVar7 = 0x3a;
      }
      uVar22 = 0;
      bVar5 = local_38 == -1;
LAB_71007ea050:
      if (uVar9 < 0xb) {
        if ((uVar8 < 0x30) || (uVar7 <= uVar8)) goto LAB_71007ea4a8;
        uVar10 = uVar8 - 0x30;
      }
      else {
        uVar10 = uVar8 - 0x30;
        if (9 < uVar10) {
          if (5 < uVar8 - 0x61) goto LAB_71007ea278;
          uVar10 = uVar8 - 0x57;
        }
      }
      do {
        if (uVar3 < uVar22) {
          piVar18 = (int *)plVar25[2];
          piVar17 = (int *)plVar25[3];
          uVar20 = 1;
          if (piVar17 <= piVar18) goto LAB_71007ea1bc;
LAB_71007ea0a8:
          piVar18 = piVar18 + 1;
          plVar25[2] = (long)piVar18;
        }
        else {
          iVar21 = iVar21 + 1;
          uVar19 = uVar16 * uVar22;
          uVar22 = (long)(int)uVar10 + uVar19;
          piVar18 = (int *)plVar25[2];
          piVar17 = (int *)plVar25[3];
          uVar20 = (uint)(uVar20 != 0 || uVar15 - (long)(int)uVar10 < uVar19);
          if (piVar18 < piVar17) goto LAB_71007ea0a8;
LAB_71007ea1bc:
          (**(code **)(*plVar25 + 0x50))(plVar25);
          piVar18 = (int *)plVar25[2];
          piVar17 = (int *)plVar25[3];
        }
        if (piVar18 < piVar17) {
          iVar12 = *piVar18;
        }
        else {
          iVar12 = (**(code **)(*plVar25 + 0x48))(plVar25);
        }
        if (iVar12 != -1) {
          if (plVar24 != (long *)0x0 && bVar5) goto LAB_71007ea200;
          if ((iVar12 == -1) != bVar5) goto LAB_71007ea0e4;
          goto LAB_71007ea230;
        }
        if (plVar24 != (long *)0x0 && bVar5) goto LAB_71007ea1fc;
        uVar23 = 0xffffffff;
        if (local_38 == -1) {
          plVar25 = (long *)0x0;
          local_98 = 1;
          local_90 = (uint)(plVar24 != (long *)0x0 && bVar5);
          goto LAB_71007ea4a8;
        }
        if (uVar9 < 0xb) goto LAB_71007ea104;
        uVar8 = 0xffffffff;
        plVar25 = (long *)0x0;
LAB_71007ea278:
        if (5 < uVar8 - 0x41) goto LAB_71007ea4a8;
        uVar10 = uVar8 - 0x37;
      } while( true );
    }
    uVar22 = 0;
    uVar20 = uVar7;
    local_90 = uVar7;
  }
  else if ((local_98 & 1) == 0) {
    uVar22 = 0;
    bVar5 = local_38 == -1;
LAB_71007ea2b0:
    local_90 = (uint)*(byte *)(lVar13 + 0x20);
    if (((*(byte *)(lVar13 + 0x20) & 1) == 0) || (*(uint *)(lVar13 + 0x4c) != uVar8)) {
      local_90 = local_98;
      if ((*(uint *)(lVar13 + 0x48) == uVar8) ||
         (lVar14 = FUN_710081d880(lVar13 + 0xf0,uVar8,uVar9), lVar14 == 0)) goto LAB_71007ea4a8;
      iVar12 = (int)(lVar14 - (lVar13 + 0xf0) >> 2);
      if (0xf < iVar12) {
        iVar12 = iVar12 + -6;
      }
      if (uVar22 <= uVar3) {
        iVar21 = iVar21 + 1;
        uVar19 = uVar16 * uVar22;
        uVar22 = (long)iVar12 + uVar19;
        uVar20 = (uint)(uVar20 != 0 || uVar15 - (long)iVar12 < uVar19);
        goto LAB_71007ea328;
      }
      piVar18 = (int *)plVar25[2];
      piVar17 = (int *)plVar25[3];
      uVar20 = uVar7;
      if (piVar17 <= piVar18) goto LAB_71007ea3a4;
LAB_71007ea334:
      piVar18 = piVar18 + 1;
      plVar25[2] = (long)piVar18;
    }
    else {
      if (iVar21 == 0) goto LAB_71007ea4a8;
      FUN_71007b7300(&local_8,iVar21);
      iVar21 = 0;
LAB_71007ea328:
      piVar18 = (int *)plVar25[2];
      piVar17 = (int *)plVar25[3];
      if (piVar18 < piVar17) goto LAB_71007ea334;
LAB_71007ea3a4:
      (**(code **)(*plVar25 + 0x50))(plVar25);
      piVar18 = (int *)plVar25[2];
      piVar17 = (int *)plVar25[3];
    }
    if (piVar18 < piVar17) {
      iVar12 = *piVar18;
    }
    else {
      iVar12 = (**(code **)(*plVar25 + 0x48))(plVar25);
    }
    if (iVar12 != -1) {
      if (plVar24 != (long *)0x0 && bVar5) goto LAB_71007ea3e4;
      if ((iVar12 == -1) == bVar5) goto LAB_71007ea420;
LAB_71007ea370:
      if (plVar25 == (long *)0x0) {
        uVar8 = 0xffffffff;
        uVar23 = 0xffffffff;
      }
      else {
        if ((uint *)plVar25[2] < (uint *)plVar25[3]) {
          uVar8 = *(uint *)plVar25[2];
        }
        else {
          uVar8 = (**(code **)(*plVar25 + 0x48))(plVar25);
        }
        uVar23 = 0xffffffff;
        if (uVar8 == 0xffffffff) {
          plVar25 = (long *)0x0;
        }
      }
      goto LAB_71007ea2b0;
    }
    if (plVar24 != (long *)0x0 && bVar5) {
      plVar25 = (long *)0x0;
LAB_71007ea3e4:
      if ((int *)plVar24[2] < (int *)plVar24[3]) {
        iVar11 = *(int *)plVar24[2];
      }
      else {
        iVar11 = (**(code **)(*plVar24 + 0x48))(plVar24);
      }
      uVar8 = local_98;
      if (iVar11 == -1) {
        plVar24 = (long *)0x0;
        uVar8 = uVar7;
      }
      if ((iVar12 == -1) == uVar8) {
LAB_71007ea420:
        uVar23 = 0xffffffff;
        local_90 = local_98;
        local_98 = uVar7;
        goto LAB_71007ea4a8;
      }
      goto LAB_71007ea370;
    }
    if (local_38 != -1) {
      plVar25 = (long *)0x0;
      uVar23 = 0xffffffff;
      uVar8 = 0xffffffff;
      goto LAB_71007ea2b0;
    }
    plVar25 = (long *)0x0;
    local_90 = (uint)(plVar24 != (long *)0x0 && bVar5);
    uVar23 = 0xffffffff;
    local_98 = uVar7;
  }
  else {
    uVar22 = 0;
    uVar20 = 0;
    local_90 = 0;
  }
LAB_71007ea4a8:
  lVar14 = *(long *)(local_8 + -0x18);
joined_r0x0071007ea11c:
  if (lVar14 == 0) {
    if (((uint)(iVar21 == 0) & (local_70 ^ 1)) == 0) {
LAB_71007ea16c:
      if ((local_90 & 1) == 0) {
        if ((uVar20 & 1) == 0) {
          uVar15 = -uVar22;
          if ((local_60 & 1) == 0) {
            uVar15 = uVar22;
          }
          *param_8 = uVar15;
        }
        else {
          *param_8 = -(ulong)local_60 ^ 0x7fffffffffffffff;
          *param_7 = 4;
        }
        goto LAB_71007ea4e0;
      }
    }
  }
  else {
    FUN_71007b7300(&local_8,iVar21);
    uVar15 = FUN_71007fbd00(*(undefined8 *)(lVar13 + 0x10),*(undefined8 *)(lVar13 + 0x18),&local_8);
    if ((uVar15 & 1) == 0) {
      *param_7 = 4;
    }
    if ((((uint)(iVar21 == 0) & (local_70 ^ 1)) == 0) || (*(long *)(local_8 + -0x18) != 0))
    goto LAB_71007ea16c;
  }
  *param_8 = 0;
  *param_7 = 4;
LAB_71007ea4e0:
  if ((local_98 & 1) != 0) {
    *param_7 = *param_7 | 2;
  }
  auVar4._8_4_ = uVar23;
  auVar4._0_8_ = plVar25;
  auVar4._12_4_ = uStack_14;
  if (local_8 + -0x18 != &DAT_7100d210d8) {
    piVar18 = (int *)(local_8 + -8);
    do {
      iVar21 = *piVar18;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar5) {
        *piVar18 = iVar21 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar21 < 1) {
      local_20 = plVar25;
      local_18 = uVar23;
      thunk_FUN_710081c200(local_8 + -0x18,auStack_10);
    }
  }
  return auVar4;
LAB_71007ea7e8:
  bVar6 = *(byte *)(lVar13 + 0x20) & 1;
  local_98 = local_70;
  goto LAB_71007e9fd4;
LAB_71007ea1fc:
  plVar25 = (long *)0x0;
LAB_71007ea200:
  if ((int *)plVar24[2] < (int *)plVar24[3]) {
    iVar11 = *(int *)plVar24[2];
  }
  else {
    iVar11 = (**(code **)(*plVar24 + 0x48))(plVar24);
  }
  uVar8 = local_98;
  if (iVar11 == -1) {
    plVar24 = (long *)0x0;
    uVar8 = 1;
  }
  if ((iVar12 == -1) == uVar8) {
LAB_71007ea230:
    uVar23 = 0xffffffff;
    local_98 = 1;
    goto LAB_71007ea4a8;
  }
LAB_71007ea0e4:
  if (plVar25 == (long *)0x0) goto LAB_71007ea104;
  if ((uint *)plVar25[2] < (uint *)plVar25[3]) {
    uVar8 = *(uint *)plVar25[2];
  }
  else {
    uVar8 = (**(code **)(*plVar25 + 0x48))(plVar25);
  }
  uVar23 = 0xffffffff;
  if (uVar8 == 0xffffffff) goto LAB_71007ea104;
  goto LAB_71007ea050;
LAB_71007ea104:
  uVar23 = 0xffffffff;
  plVar25 = (long *)0x0;
  lVar14 = *(long *)(local_8 + -0x18);
  goto joined_r0x0071007ea11c;
}



// ===== FUN_71007ea880 @ 71007ea880 (size=1132) =====

undefined1  [16]
FUN_71007ea880(undefined8 param_1,long *param_2,ulong param_3,long *param_4,undefined8 param_5,
              long param_6,uint *param_7,byte *param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  long *local_30;
  undefined8 local_28;
  undefined1 local_20 [12];
  undefined4 uStack_14;
  ulong local_8;
  
  local_20._8_4_ = (undefined4)param_3;
  iVar16 = local_20._8_4_;
  uStack_14 = (undefined4)(param_3 >> 0x20);
  local_30 = param_4;
  local_28 = param_5;
  local_20._0_8_ = param_2;
  if ((*(uint *)(param_6 + 0x18) & 1) == 0) {
    local_8 = 0xffffffffffffffff;
    local_20 = FUN_71007e9e60();
    if (local_8 < 2) {
      *param_8 = (byte)local_8 & 1;
    }
    else {
      *param_8 = 1;
      *param_7 = 4;
      uVar11 = FUN_71007e8c60(local_20,&local_30);
      if ((uVar11 & 1) != 0) {
        *param_7 = *param_7 | 2;
        auVar3._12_4_ = uStack_14;
        auVar3._0_12_ = local_20;
        return auVar3;
      }
    }
    auVar1._12_4_ = uStack_14;
    auVar1._0_12_ = local_20;
    return auVar1;
  }
  lVar10 = FUN_71007e6200(param_6 + 0xd0);
  param_3 = param_3 & 0xffffffff;
  if (*(long *)(lVar10 + 0x40) == 0 && *(long *)(lVar10 + 0x30) == 0) {
LAB_71007eab0c:
    *param_8 = 0;
  }
  else {
    uVar15 = 1;
    uVar12 = (uint)(*(long *)(lVar10 + 0x40) == 0);
    uVar13 = (uint)(*(long *)(lVar10 + 0x30) == 0);
    uVar17 = 1;
    uVar11 = 0;
    bVar5 = (int)local_28 == -1;
    do {
      iVar16 = (int)param_3;
      bVar6 = iVar16 == -1;
      bVar7 = param_2 != (long *)0x0;
      if (bVar7 && bVar6) {
        if ((int *)param_2[2] < (int *)param_2[3]) {
          iVar9 = *(int *)param_2[2];
        }
        else {
          iVar9 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        if (iVar9 == -1) {
          param_2 = (long *)0x0;
        }
        bVar7 = iVar9 == -1 && (bVar7 && bVar6);
        bVar4 = param_4 == (long *)0x0 || !bVar5;
        if (param_4 == (long *)0x0 || !bVar5) goto LAB_71007ea978;
LAB_71007eab64:
        if ((int *)param_4[2] < (int *)param_4[3]) {
          iVar9 = *(int *)param_4[2];
        }
        else {
          iVar9 = (**(code **)(*param_4 + 0x48))(param_4);
        }
        if (iVar9 == -1) {
          param_4 = (long *)0x0;
        }
        if ((iVar9 == -1 && !bVar4) == bVar7) {
LAB_71007eab88:
          uVar18 = 1;
          break;
        }
      }
      else {
        bVar4 = param_4 == (long *)0x0 || !bVar5;
        bVar7 = bVar6;
        if (param_4 != (long *)0x0 && bVar5) goto LAB_71007eab64;
LAB_71007ea978:
        if (bVar5 == bVar7) goto LAB_71007eab88;
      }
      iVar9 = iVar16;
      if (param_2 != (long *)0x0 && bVar6) {
        if ((int *)param_2[2] < (int *)param_2[3]) {
          iVar9 = *(int *)param_2[2];
        }
        else {
          iVar9 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        if (iVar9 == -1) {
          param_2 = (long *)0x0;
        }
      }
      if (uVar12 == 0) {
        uVar17 = (uint)(*(int *)(*(long *)(lVar10 + 0x38) + uVar11 * 4) == iVar9);
      }
      if ((uVar13 & (uVar17 ^ 1)) != 0) {
        uVar18 = 0;
        if (uVar15 != 0) goto LAB_71007eaa40;
        *param_8 = 0;
        goto LAB_71007eaa60;
      }
      if (uVar13 == 0) {
        uVar15 = (uint)(*(int *)(*(long *)(lVar10 + 0x28) + uVar11 * 4) == iVar9);
      }
      uVar18 = uVar12 & (uVar15 ^ 1);
      if ((uVar12 & (uVar15 ^ 1)) != 0) {
        if (((uVar17 == 0) || (uVar11 != *(ulong *)(lVar10 + 0x40))) || (uVar11 == 0))
        goto LAB_71007eab0c;
        *param_8 = 0;
        uVar15 = (uVar13 & (uVar17 ^ 1)) << 1;
        goto LAB_71007eaa64;
      }
      if (uVar17 == 0 && uVar15 == 0) goto LAB_71007eab0c;
      uVar11 = uVar11 + 1;
      if ((ulong)param_2[2] < (ulong)param_2[3]) {
        param_2[2] = param_2[2] + 4;
      }
      else {
        (**(code **)(*param_2 + 0x50))(param_2);
      }
      uVar14 = (uint)(uVar17 != 0 || uVar15 != 0);
      uVar12 = uVar14;
      if ((uVar17 == 0) ||
         (uVar12 = (uint)(*(ulong *)(lVar10 + 0x40) <= uVar11), uVar8 = uVar12, uVar13 = uVar17,
         uVar15 != 0)) {
        bVar6 = *(ulong *)(lVar10 + 0x30) <= uVar11;
        uVar15 = uVar14;
        uVar8 = (uint)(bVar6 && uVar12 != 0);
        uVar13 = (uint)bVar6;
      }
      param_3 = 0xffffffff;
      iVar16 = -1;
    } while (uVar8 == 0);
    if ((uVar17 == 0) || (*(ulong *)(lVar10 + 0x40) != uVar11)) {
      if (uVar15 != 0) {
LAB_71007eaa40:
        if (uVar11 != 0 && *(ulong *)(lVar10 + 0x30) == uVar11) {
          *param_8 = 1;
          uVar15 = uVar18 << 1;
          goto LAB_71007eaa64;
        }
      }
    }
    else if (uVar11 != 0) {
      *param_8 = 0;
      if ((uVar15 == 0) || (uVar15 = 4, *(ulong *)(lVar10 + 0x30) != uVar11)) {
        uVar15 = uVar18 << 1;
      }
      goto LAB_71007eaa64;
    }
    *param_8 = 0;
    uVar15 = 6;
    if (uVar18 != 0) goto LAB_71007eaa64;
  }
LAB_71007eaa60:
  uVar15 = 4;
LAB_71007eaa64:
  *param_7 = uVar15;
  auVar2._8_4_ = iVar16;
  auVar2._0_8_ = param_2;
  auVar2._12_4_ = uStack_14;
  return auVar2;
}



// ===== FUN_71007ec1a0 @ 71007ec1a0 (size=2536) =====

undefined1  [16]
FUN_71007ec1a0(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
              long param_6,uint *param_7,ulong *param_8)

{
  char cVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  int *piVar20;
  ulong uVar21;
  byte bVar22;
  byte bVar23;
  int iVar24;
  ulong uVar25;
  long *plVar26;
  undefined4 uVar27;
  long *plVar28;
  ulong local_78;
  ulong local_70;
  int local_38;
  long *local_30;
  undefined8 local_28;
  long *local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined1 auStack_10 [8];
  undefined1 *local_8;
  
  local_18 = (undefined4)param_3;
  uStack_14 = (undefined4)((ulong)param_3 >> 0x20);
  local_30 = param_4;
  local_28 = param_5;
  local_20 = param_2;
  lVar16 = FUN_71007e6200(param_6 + 0xd0);
  uVar12 = *(uint *)(param_6 + 0x18) & 0x4a;
  uVar10 = 8;
  if ((uVar12 != 0x40) && (uVar10 = 10, uVar12 == 8)) {
    uVar10 = 0x10;
  }
  bVar7 = FUN_71007e8c60(&local_20,&local_30);
  plVar26 = local_30;
  local_38 = (int)local_28;
  if ((bVar7 & 1) == 0) {
    uVar11 = FUN_71007cc080(&local_20);
    bVar22 = *(byte *)(lVar16 + 0x20);
    bVar23 = bVar7;
    if ((*(uint *)(lVar16 + 0xe0) != uVar11) && (*(uint *)(lVar16 + 0xe4) != uVar11)) {
      bVar9 = bVar22 & 1;
      iVar24 = 0;
      bVar4 = bVar7;
      goto LAB_71007ec2d4;
    }
    bVar4 = *(uint *)(lVar16 + 0xe0) == uVar11;
    bVar9 = bVar22 & 1;
    if ((((bVar22 & 1) == 0) || (*(uint *)(lVar16 + 0x4c) != uVar11)) &&
       (*(uint *)(lVar16 + 0x48) != uVar11)) {
      FUN_71007e3fa0(local_20);
      local_18 = 0xffffffff;
      bVar8 = FUN_71007e8c60(&local_20,&local_30);
      plVar26 = local_30;
      local_38 = (int)local_28;
      if ((bVar8 & 1) != 0) {
        iVar24 = 0;
        bVar9 = *(byte *)(lVar16 + 0x20) & 1;
        goto LAB_71007ec308;
      }
      uVar11 = FUN_71007cc080(&local_20);
      bVar22 = *(byte *)(lVar16 + 0x20);
      bVar9 = bVar22 & 1;
    }
    iVar24 = 0;
LAB_71007ec2d4:
    do {
      uVar27 = local_18;
      plVar28 = local_20;
      uVar13 = uVar10;
      if ((bVar9 != 0) && (*(uint *)(lVar16 + 0x4c) == uVar11)) {
        if (uVar10 != 0x10) {
          local_78 = (ulong)(int)uVar10;
          bVar22 = bVar23;
          bVar8 = bVar7;
          goto LAB_71007ec7a4;
        }
        local_8 = &DAT_7100d210f0;
        FUN_71007b6ec0(&local_8,0x20);
        if ((*(byte *)(lVar16 + 0x148) & 1) == 0) {
          uVar10 = 0x16;
          uVar17 = 0xfffffffffffffff;
          local_70 = 0x10;
          goto LAB_71007ec350;
        }
        uVar17 = 0xfffffffffffffff;
        local_78 = 0x16;
        local_70 = 0x10;
        goto LAB_71007ec60c;
      }
      bVar8 = bVar7;
      if (*(uint *)(lVar16 + 0x48) == uVar11) goto LAB_71007ec308;
      if (*(uint *)(lVar16 + 0xf0) == uVar11) {
        if (uVar10 != 10 && ((bVar23 ^ 1) & 1) == 0) goto LAB_71007ec80c;
        bVar3 = uVar12 == 0 || uVar10 == 8;
        if (uVar12 == 0 || uVar10 == 8) {
          iVar24 = 0;
          uVar10 = 8;
        }
        else {
          bVar3 = uVar10 == 10 | bVar23 ^ 1;
          iVar24 = iVar24 + 1;
        }
      }
      else {
        bVar8 = bVar23;
        if ((bVar23 & 1) == 0) goto LAB_71007ec308;
LAB_71007ec80c:
        if ((*(uint *)(lVar16 + 0xe8) != uVar11) && (*(uint *)(lVar16 + 0xec) != uVar11)) {
          bVar8 = bVar7;
          bVar23 = 1;
          goto LAB_71007ec308;
        }
        bVar8 = uVar12 == 0 || uVar10 == 0x10;
        if (uVar12 != 0 && uVar10 != 0x10) {
          local_78 = (ulong)(int)uVar10;
          local_8 = &DAT_7100d210f0;
          if (bVar9 != 0) goto LAB_71007ec7a4;
          bVar23 = *(byte *)(lVar16 + 0x148);
          uVar17 = 0;
          if (local_78 != 0) {
            uVar17 = 0xffffffffffffffff / local_78;
          }
          local_70 = local_78;
          if ((bVar23 & 1) != 0) goto LAB_71007ec610;
          bVar23 = 1;
          goto LAB_71007ec350;
        }
        iVar24 = 0;
        uVar10 = 0x10;
        bVar3 = bVar7;
      }
      FUN_71007e3fa0(local_20);
      local_18 = 0xffffffff;
      local_28 = CONCAT44(local_28._4_4_,local_38);
      local_30 = plVar26;
      local_20 = plVar28;
      bVar8 = FUN_71007e8c60(&local_20,&local_30);
      plVar26 = local_30;
      local_38 = (int)local_28;
      bVar23 = bVar3;
      if ((bVar8 & 1) != 0) {
        bVar9 = *(byte *)(lVar16 + 0x20) & 1;
        goto LAB_71007ec308;
      }
      uVar11 = FUN_71007cc080(&local_20);
      bVar22 = *(byte *)(lVar16 + 0x20);
      if ((bVar3 & 1) == 0) goto LAB_71007ecabc;
      bVar9 = bVar22 & 1;
    } while( true );
  }
  uVar11 = 0;
  bVar9 = *(byte *)(lVar16 + 0x20) & 1;
  iVar24 = 0;
  bVar4 = 0;
  bVar8 = bVar7;
  bVar23 = 0;
LAB_71007ec308:
  bVar22 = bVar23;
  if (uVar10 == 0x10) {
    local_78 = 0x16;
    uVar13 = 0x16;
  }
  else {
    local_78 = (ulong)(int)uVar10;
    uVar13 = uVar10;
  }
  local_8 = &DAT_7100d210f0;
  plVar28 = local_20;
  uVar27 = local_18;
  if (bVar9 != 0) {
LAB_71007ec7a4:
    uVar27 = local_18;
    plVar28 = local_20;
    local_8 = &DAT_7100d210f0;
    FUN_71007b6ec0(&local_8,0x20);
  }
  bVar7 = *(byte *)(lVar16 + 0x148);
  local_70 = (ulong)(int)uVar10;
  uVar17 = 0;
  if (local_70 != 0) {
    uVar17 = 0xffffffffffffffff / local_70;
  }
  bVar23 = bVar22;
  if ((bVar7 & 1) != 0) {
    if ((bVar8 & 1) == 0) {
LAB_71007ec60c:
      bVar22 = *(byte *)(lVar16 + 0x20);
LAB_71007ec610:
      uVar25 = 0;
      bVar7 = false;
      bVar5 = local_38 == -1;
      bVar9 = bVar22;
      do {
        bVar22 = bVar23;
        if (((bVar9 & 1) == 0) || (*(uint *)(lVar16 + 0x4c) != uVar11)) {
          if ((*(uint *)(lVar16 + 0x48) == uVar11) ||
             (lVar18 = FUN_710081d880(lVar16 + 0xf0,uVar11,local_78), lVar18 == 0))
          goto LAB_71007ec7e8;
          iVar15 = (int)(lVar18 - (lVar16 + 0xf0) >> 2);
          if (0xf < iVar15) {
            iVar15 = iVar15 + -6;
          }
          if (uVar25 <= uVar17) {
            iVar24 = iVar24 + 1;
            uVar21 = uVar25 * local_70;
            uVar25 = (long)iVar15 + uVar21;
            bVar7 = CARRY8((long)iVar15,uVar21) || (bool)bVar7 != false;
            goto LAB_71007ec69c;
          }
          piVar20 = (int *)plVar28[2];
          piVar19 = (int *)plVar28[3];
          bVar7 = true;
          if (piVar19 <= piVar20) goto LAB_71007ec71c;
LAB_71007ec6a8:
          piVar20 = piVar20 + 1;
          plVar28[2] = (long)piVar20;
        }
        else {
          if (iVar24 == 0) goto LAB_71007ec7ec;
          FUN_71007b7300(&local_8,iVar24);
          iVar24 = 0;
LAB_71007ec69c:
          piVar20 = (int *)plVar28[2];
          piVar19 = (int *)plVar28[3];
          if (piVar20 < piVar19) goto LAB_71007ec6a8;
LAB_71007ec71c:
          (**(code **)(*plVar28 + 0x50))(plVar28);
          piVar20 = (int *)plVar28[2];
          piVar19 = (int *)plVar28[3];
        }
        if (piVar20 < piVar19) {
          iVar15 = *piVar20;
        }
        else {
          iVar15 = (**(code **)(*plVar28 + 0x48))(plVar28);
        }
        if (iVar15 == -1) {
          bVar6 = plVar26 == (long *)0x0 || !bVar5;
          if (plVar26 != (long *)0x0 && bVar5) {
            plVar28 = (long *)0x0;
            goto LAB_71007ec760;
          }
          if (local_38 == -1) goto LAB_71007ecab0;
          plVar28 = (long *)0x0;
          uVar11 = 0xffffffff;
        }
        else {
          bVar6 = bVar5;
          if (plVar26 != (long *)0x0 && bVar5) {
LAB_71007ec760:
            if ((int *)plVar26[2] < (int *)plVar26[3]) {
              iVar14 = *(int *)plVar26[2];
            }
            else {
              iVar14 = (**(code **)(*plVar26 + 0x48))(plVar26);
            }
            bVar6 = iVar14 == -1;
            if (bVar6) {
              plVar26 = (long *)0x0;
            }
          }
          if ((iVar15 == -1) == bVar6) goto LAB_71007ec5ac;
          if (plVar28 == (long *)0x0) {
            uVar11 = 0xffffffff;
          }
          else {
            if ((uint *)plVar28[2] < (uint *)plVar28[3]) {
              uVar11 = *(uint *)plVar28[2];
            }
            else {
              uVar11 = (**(code **)(*plVar28 + 0x48))(plVar28);
            }
            if (uVar11 == 0xffffffff) {
              plVar28 = (long *)0x0;
            }
          }
        }
        bVar9 = *(byte *)(lVar16 + 0x20);
        uVar27 = 0xffffffff;
      } while( true );
    }
    uVar25 = 0;
    bVar7 = 0;
    bVar9 = 0;
    goto LAB_71007ec5b8;
  }
  uVar10 = uVar13;
  if ((bVar8 & 1) != 0) {
    uVar25 = 0;
    bVar9 = bVar7;
    goto LAB_71007ec5b8;
  }
LAB_71007ec350:
  uVar12 = 0x38;
  if (uVar10 != 8) {
    uVar12 = 0x3a;
  }
  uVar25 = 0;
  bVar7 = false;
  bVar5 = local_38 == -1;
  do {
    if (uVar10 < 0xb) {
      if ((uVar11 < 0x30) || (uVar12 <= uVar11)) goto LAB_71007ec7e8;
      uVar13 = uVar11 - 0x30;
    }
    else {
      uVar13 = uVar11 - 0x30;
      if (9 < uVar13) goto LAB_71007ec560;
    }
LAB_71007ec390:
    if (uVar17 < uVar25) {
      piVar20 = (int *)plVar28[2];
      piVar19 = (int *)plVar28[3];
      bVar7 = true;
      if (piVar19 <= piVar20) goto LAB_71007ec534;
LAB_71007ec3c4:
      piVar20 = piVar20 + 1;
      plVar28[2] = (long)piVar20;
    }
    else {
      iVar24 = iVar24 + 1;
      uVar21 = uVar25 * local_70;
      uVar25 = (long)(int)uVar13 + uVar21;
      piVar20 = (int *)plVar28[2];
      piVar19 = (int *)plVar28[3];
      bVar7 = CARRY8((long)(int)uVar13,uVar21) || (bool)bVar7 != false;
      if (piVar20 < piVar19) goto LAB_71007ec3c4;
LAB_71007ec534:
      (**(code **)(*plVar28 + 0x50))(plVar28);
      piVar20 = (int *)plVar28[2];
      piVar19 = (int *)plVar28[3];
    }
    if (piVar20 < piVar19) {
      iVar15 = *piVar20;
    }
    else {
      iVar15 = (**(code **)(*plVar28 + 0x48))(plVar28);
    }
    bVar22 = bVar23;
    if (iVar15 != -1) {
      if (plVar26 != (long *)0x0 && bVar5) goto LAB_71007ec580;
      if ((iVar15 == -1) != bVar5) goto LAB_71007ec400;
      goto LAB_71007ec5ac;
    }
    bVar6 = plVar26 == (long *)0x0 || !bVar5;
    if (plVar26 == (long *)0x0 || !bVar5) {
      if (local_38 == -1) goto LAB_71007ecab0;
      if (uVar10 < 0xb) break;
      uVar11 = 0xffffffff;
      plVar28 = (long *)0x0;
      uVar27 = 0xffffffff;
LAB_71007ec560:
      if (uVar11 - 0x61 < 6) {
        uVar13 = uVar11 - 0x57;
      }
      else {
        if (5 < uVar11 - 0x41) goto LAB_71007ec7e8;
        uVar13 = uVar11 - 0x37;
      }
      goto LAB_71007ec390;
    }
    plVar28 = (long *)0x0;
LAB_71007ec580:
    if ((int *)plVar26[2] < (int *)plVar26[3]) {
      iVar14 = *(int *)plVar26[2];
    }
    else {
      iVar14 = (**(code **)(*plVar26 + 0x48))(plVar26);
    }
    if (iVar14 == -1) {
      plVar26 = (long *)0x0;
    }
    if ((iVar15 == -1) == (iVar14 == -1)) goto LAB_71007ec5ac;
LAB_71007ec400:
    if (plVar28 == (long *)0x0) break;
    if ((uint *)plVar28[2] < (uint *)plVar28[3]) {
      uVar11 = *(uint *)plVar28[2];
    }
    else {
      uVar11 = (**(code **)(*plVar28 + 0x48))(plVar28);
    }
    uVar27 = 0xffffffff;
  } while (uVar11 != 0xffffffff);
  uVar27 = 0xffffffff;
  plVar28 = (long *)0x0;
  bVar9 = 0;
  bVar8 = 0;
  bVar23 = 0;
  if (*(long *)(local_8 + -0x18) == 0) goto LAB_71007ec5c4;
  goto LAB_71007ec440;
LAB_71007ecabc:
  bVar9 = bVar22 & 1;
  bVar8 = bVar3;
  goto LAB_71007ec308;
LAB_71007ecab0:
  uVar27 = 0xffffffff;
  plVar28 = (long *)0x0;
  bVar8 = 1;
  bVar9 = !bVar6;
  goto LAB_71007ec5b8;
LAB_71007ec5ac:
  uVar27 = 0xffffffff;
  bVar8 = 1;
  bVar9 = 0;
  goto LAB_71007ec5b8;
LAB_71007ec7e8:
  bVar9 = 0;
  bVar22 = bVar23;
LAB_71007ec7ec:
  bVar8 = 0;
LAB_71007ec5b8:
  bVar23 = bVar9;
  if (*(long *)(local_8 + -0x18) == 0) {
LAB_71007ec5c4:
    if ((iVar24 == 0 & (bVar22 ^ 1)) == 0) goto LAB_71007ec494;
  }
  else {
LAB_71007ec440:
    FUN_71007b7300(&local_8,iVar24);
    uVar17 = FUN_71007fbd00(*(undefined8 *)(lVar16 + 0x10),*(undefined8 *)(lVar16 + 0x18),&local_8);
    if ((uVar17 & 1) == 0) {
      *param_7 = 4;
    }
    bVar9 = bVar23;
    if (((iVar24 == 0 & (bVar22 ^ 1)) == 0) || (*(long *)(local_8 + -0x18) != 0)) {
LAB_71007ec494:
      if ((bVar9 & 1) == 0) {
        if ((bVar7 & 1) == 0) {
          uVar17 = -uVar25;
          if ((bVar4 & 1) == 0) {
            uVar17 = uVar25;
          }
          *param_8 = uVar17;
        }
        else {
          *param_8 = 0xffffffffffffffff;
          *param_7 = 4;
        }
        goto LAB_71007ec4c0;
      }
    }
  }
  *param_8 = 0;
  *param_7 = 4;
LAB_71007ec4c0:
  if ((bVar8 & 1) != 0) {
    *param_7 = *param_7 | 2;
  }
  auVar2._8_4_ = uVar27;
  auVar2._0_8_ = plVar28;
  auVar2._12_4_ = uStack_14;
  if (local_8 + -0x18 != &DAT_7100d210d8) {
    piVar20 = (int *)(local_8 + -8);
    do {
      iVar24 = *piVar20;
      cVar1 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar20,0x10);
      if (bVar5) {
        *piVar20 = iVar24 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar24 < 1) {
      local_20 = plVar28;
      local_18 = uVar27;
      thunk_FUN_710081c200(local_8 + -0x18,auStack_10);
    }
  }
  return auVar2;
}



// ===== FUN_71007ecbc0 @ 71007ecbc0 (size=92) =====

void FUN_71007ecbc0(void)

{
  uint uVar1;
  long in_x5;
  undefined8 *in_x7;
  undefined8 local_8;
  
  uVar1 = *(uint *)(in_x5 + 0x18);
  *(uint *)(in_x5 + 0x18) = uVar1 & 0xffffffb5 | 8;
  FUN_71007ec1a0();
  *(uint *)(in_x5 + 0x18) = uVar1;
  *in_x7 = local_8;
  return;
}



// ===== FUN_71007ee3a0 @ 71007ee3a0 (size=2536) =====

undefined1  [16]
FUN_71007ee3a0(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
              undefined4 *param_6,long param_7,ulong param_8,long param_9,uint *param_10)

{
  ulong *puVar1;
  undefined1 auVar2 [16];
  long *plVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  bool bVar7;
  byte bVar8;
  byte bVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong *puVar20;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  ulong uVar25;
  ulong uVar26;
  bool bVar27;
  long *local_38;
  int local_30;
  int local_2c;
  long *local_20;
  undefined8 local_18;
  long *local_10;
  int local_8;
  undefined4 uStack_4;
  ulong *puVar21;
  
  local_8 = (int)param_3;
  uStack_4 = (undefined4)((ulong)param_3 >> 0x20);
  local_20 = param_4;
  local_18 = param_5;
  local_10 = param_2;
  lVar15 = FUN_71007b00e0(&DAT_7100d21118);
  plVar24 = *(long **)(*(long *)(*(long *)(param_9 + 0xd0) + 8) + lVar15 * 8);
  if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  puVar16 = (ulong *)(&stack0xffffffffffffff10 + param_8 * -0x10);
  bVar8 = FUN_71007e8c60();
  if ((bVar8 & 1) == 0) {
    local_38 = local_20;
    local_30 = (int)local_18;
    uVar10 = FUN_71007cc080(&local_10);
    plVar22 = local_10;
    local_2c = local_8;
    iVar11 = (**(code **)(*plVar24 + 0x40))(plVar24,uVar10);
    iVar12 = (**(code **)(*plVar24 + 0x30))(plVar24,uVar10);
    if (param_8 != 0) {
      puVar1 = puVar16 + param_8;
      uVar17 = 0;
      uVar19 = 0;
      do {
        while ((uVar26 = uVar17,
               iVar13 = (**(code **)(*plVar24 + 0x40))
                                  (plVar24,**(undefined4 **)(param_7 + uVar26 * 8)),
               iVar11 != iVar13 &&
               (iVar13 = (**(code **)(*plVar24 + 0x30))
                                   (plVar24,**(undefined4 **)(param_7 + uVar26 * 8)),
               iVar12 != iVar13))) {
          uVar17 = uVar26 + 1;
          if (param_8 == uVar26 + 1) goto LAB_71007ee554;
        }
        uVar18 = uVar19 + 1;
        uVar17 = FUN_710081f600(*(undefined8 *)(param_7 + uVar26 * 8));
        puVar1[uVar19] = uVar17;
        puVar16[uVar19] = uVar26;
        uVar17 = uVar26 + 1;
        uVar19 = uVar18;
      } while (param_8 != uVar26 + 1);
LAB_71007ee554:
      uVar17 = 0;
      if (1 < uVar19) {
LAB_71007ee580:
        uVar25 = *puVar1;
        uVar18 = 1;
        uVar23 = uVar25;
        do {
          puVar20 = puVar1 + uVar18;
          uVar18 = uVar18 + 1;
          if (*puVar20 < uVar23) {
            uVar23 = *puVar20;
          }
        } while (uVar18 < uVar19);
        uVar17 = uVar17 + 1;
        if ((ulong)plVar22[2] < (ulong)plVar22[3]) {
          plVar22[2] = plVar22[2] + 4;
        }
        else {
          (**(code **)(*plVar22 + 0x50))(plVar22);
        }
        if (uVar17 == uVar23) {
          local_8 = -1;
          local_20 = local_38;
          uVar18 = (ulong)local_18 >> 0x20;
          local_18 = CONCAT44((int)uVar18,local_30);
          local_10 = plVar22;
          bVar9 = FUN_71007e8c60(&local_10,&local_20);
          plVar3 = local_20;
          local_38 = local_20;
          iVar11 = (int)local_18;
          bVar6 = bVar9 & 1;
          local_30 = (int)local_18;
          if ((bVar9 & 1) == 0) {
            uVar10 = FUN_71007cc080(&local_10);
            iVar12 = (**(code **)(*plVar24 + 0x40))(plVar24,uVar10);
            uVar10 = FUN_71007cc080(&local_10);
            plVar22 = local_10;
            local_2c = local_8;
            iVar13 = (**(code **)(*plVar24 + 0x30))(plVar24,uVar10);
            uVar18 = 0;
            do {
              if (uVar17 < puVar1[uVar18]) {
                lVar15 = *(long *)(param_7 + puVar16[uVar18] * 8);
                iVar14 = (**(code **)(*plVar24 + 0x40))
                                   (plVar24,*(undefined4 *)(lVar15 + uVar17 * 4));
                if ((iVar12 == iVar14) ||
                   (iVar14 = (**(code **)(*plVar24 + 0x30))
                                       (plVar24,*(undefined4 *)(lVar15 + uVar17 * 4)),
                   iVar13 == iVar14)) {
                  bVar6 = 1;
                  bVar9 = 1;
                  break;
                }
              }
              uVar18 = uVar18 + 1;
            } while (uVar18 < uVar19);
          }
          else {
            local_2c = local_8;
            bVar6 = bVar8 & 1;
            plVar22 = local_10;
            bVar9 = bVar8;
          }
          uVar18 = 0;
          do {
            if ((uVar17 == uVar25) == (bool)bVar9) {
              uVar19 = uVar19 - 1;
              puVar16[uVar18] = puVar16[uVar19];
              puVar1[uVar18] = puVar1[uVar19];
              if (uVar19 <= uVar18) goto LAB_71007ee8dc;
            }
            else {
              uVar18 = uVar18 + 1;
              if (uVar19 <= uVar18) goto LAB_71007ee8dc;
            }
            uVar25 = puVar1[uVar18];
          } while( true );
        }
        if (uVar17 < uVar23) goto LAB_71007ee5c8;
        local_2c = -1;
        goto LAB_71007ee428;
      }
LAB_71007ee70c:
      if (uVar19 == 1) {
        FUN_71007e3fa0(plVar22);
        uVar19 = *puVar16;
        uVar17 = uVar17 + 1;
        uVar26 = puVar16[param_8];
        if (uVar17 < uVar26) {
          lVar15 = *(long *)(param_7 + uVar19 * 8);
          bVar7 = local_30 == -1;
LAB_71007eeba4:
          do {
            if ((int *)plVar22[2] < (int *)plVar22[3]) {
              local_2c = *(int *)plVar22[2];
            }
            else {
              local_2c = (**(code **)(*plVar22 + 0x48))(plVar22);
            }
            if (local_2c == -1) {
              bVar6 = true;
              plVar22 = (long *)0x0;
LAB_71007eeaf0:
              bVar4 = local_38 == (long *)0x0 || bVar7 == false;
              bVar9 = bVar7;
              bVar27 = (bool)bVar6;
              if (local_38 != (long *)0x0 && bVar7 != false) goto LAB_71007eebe8;
            }
            else {
              local_2c = -1;
              bVar4 = local_38 == (long *)0x0 || bVar7 == false;
              bVar6 = bVar8;
              bVar9 = bVar7;
              bVar27 = true;
              if (local_38 != (long *)0x0 && bVar7 != false) {
LAB_71007eebe8:
                if ((int *)local_38[2] < (int *)local_38[3]) {
                  iVar11 = *(int *)local_38[2];
                }
                else {
                  iVar11 = (**(code **)(*local_38 + 0x48))(local_38);
                }
                bVar9 = bVar8;
                if (iVar11 == -1) {
                  local_38 = (long *)0x0;
                  bVar9 = !bVar4;
                }
              }
            }
            if (bVar9 == bVar6) goto LAB_71007ee740;
            iVar12 = (**(code **)(*plVar24 + 0x40))(plVar24,*(undefined4 *)(lVar15 + uVar17 * 4));
            iVar11 = local_2c;
            if (plVar22 == (long *)0x0 || bVar27 == false) {
LAB_71007eeb38:
              iVar11 = (**(code **)(*plVar24 + 0x40))(plVar24,iVar11);
              if (iVar12 != iVar11) {
                iVar11 = (**(code **)(*plVar24 + 0x30))
                                   (plVar24,*(undefined4 *)(lVar15 + uVar17 * 4));
                iVar12 = local_2c;
LAB_71007eeb6c:
                iVar12 = (**(code **)(*plVar24 + 0x30))(plVar24,iVar12);
                if (iVar11 != iVar12) goto LAB_71007ee740;
              }
            }
            else {
              if ((int *)plVar22[2] < (int *)plVar22[3]) {
                iVar11 = *(int *)plVar22[2];
              }
              else {
                iVar11 = (**(code **)(*plVar22 + 0x48))(plVar22);
              }
              if (iVar11 == -1) {
                plVar22 = (long *)0x0;
                iVar11 = -1;
                goto LAB_71007eeb38;
              }
              iVar11 = (**(code **)(*plVar24 + 0x40))(plVar24);
              if (iVar12 != iVar11) {
                iVar11 = (**(code **)(*plVar24 + 0x30))
                                   (plVar24,*(undefined4 *)(lVar15 + uVar17 * 4));
                if ((int *)plVar22[2] < (int *)plVar22[3]) {
                  iVar12 = *(int *)plVar22[2];
                }
                else {
                  iVar12 = (**(code **)(*plVar22 + 0x48))(plVar22);
                }
                if (iVar12 == -1) {
                  plVar22 = (long *)0x0;
                }
                goto LAB_71007eeb6c;
              }
            }
            if ((ulong)plVar22[3] <= (ulong)plVar22[2]) {
              uVar17 = uVar17 + 1;
              (**(code **)(*plVar22 + 0x50))(plVar22);
              if (uVar26 == uVar17) break;
              goto LAB_71007eeba4;
            }
            uVar17 = uVar17 + 1;
            plVar22[2] = plVar22[2] + 4;
          } while (uVar26 != uVar17);
          local_2c = -1;
          *param_6 = (int)uVar19;
          goto LAB_71007ee43c;
        }
        local_2c = -1;
LAB_71007ee740:
        if (uVar26 == uVar17) {
          *param_6 = (int)uVar19;
          goto LAB_71007ee43c;
        }
      }
    }
  }
  else {
    local_2c = local_8;
    plVar22 = local_10;
  }
LAB_71007ee428:
  *param_10 = *param_10 | 4;
LAB_71007ee43c:
  auVar2._8_4_ = local_2c;
  auVar2._0_8_ = plVar22;
  auVar2._12_4_ = uStack_4;
  return auVar2;
LAB_71007ee8dc:
  if (bVar6 == 0) {
    if (uVar19 == 2) {
      if ((uVar26 + 1 & 1) != 0) goto LAB_71007ee428;
      uVar19 = *puVar16;
      uVar26 = uVar26 + 1 >> 1;
      if (uVar19 < uVar26) {
        if (uVar19 + uVar26 != *(ulong *)(&stack0xffffffffffffff18 + param_8 * -0x10))
        goto LAB_71007ee428;
      }
      else {
        if (uVar19 - uVar26 != *(ulong *)(&stack0xffffffffffffff18 + param_8 * -0x10))
        goto LAB_71007ee428;
        *puVar16 = uVar19 - uVar26;
        puVar16[param_8] = puVar1[1];
        uVar19 = *puVar16;
      }
    }
    else {
      if (uVar19 != 1) goto LAB_71007ee428;
      uVar19 = *puVar16;
    }
    uVar26 = puVar16[param_8];
    if (uVar26 <= uVar17) goto LAB_71007ee740;
    lVar15 = *(long *)(param_7 + uVar19 * 8);
    bVar7 = iVar11 == -1;
    bVar6 = local_2c == -1;
    if (plVar22 == (long *)0x0 || !(bool)bVar6) goto LAB_71007eeaf0;
    goto LAB_71007eeba4;
  }
  uVar18 = *puVar1;
  if (1 < uVar19) {
    puVar20 = puVar1 + 1;
    do {
      puVar21 = puVar20 + 1;
      if (*puVar20 < uVar18) {
        uVar18 = *puVar20;
      }
      puVar20 = puVar21;
    } while (puVar1 + uVar19 != puVar21);
  }
  if (uVar18 <= uVar17) goto LAB_71007ee70c;
  bVar6 = local_2c == -1;
  if (plVar22 != (long *)0x0 && (bool)bVar6) {
LAB_71007ee5c8:
    if ((int *)plVar22[2] < (int *)plVar22[3]) {
      local_2c = *(int *)plVar22[2];
    }
    else {
      local_2c = (**(code **)(*plVar22 + 0x48))(plVar22);
    }
    if (local_2c == -1) {
      plVar22 = (long *)0x0;
      bVar6 = 1;
    }
    else {
      local_2c = -1;
      bVar6 = bVar8;
    }
    bVar5 = local_30 != -1;
    bVar4 = local_38 == (long *)0x0 || bVar5;
    bVar9 = local_30 == -1;
    bVar7 = true;
    bVar27 = true;
    if (local_38 != (long *)0x0 && !bVar5) {
LAB_71007ee960:
      bVar7 = bVar27;
      if ((int *)local_38[2] < (int *)local_38[3]) {
        iVar11 = *(int *)local_38[2];
      }
      else {
        iVar11 = (**(code **)(*local_38 + 0x48))(local_38);
      }
      bVar9 = bVar8;
      if (iVar11 == -1) {
        local_38 = (long *)0x0;
        bVar9 = !bVar4;
      }
    }
  }
  else {
    bVar5 = iVar11 != -1;
    bVar4 = plVar3 == (long *)0x0 || bVar5;
    bVar9 = iVar11 == -1;
    bVar7 = (bool)bVar6;
    bVar27 = (bool)bVar6;
    if (plVar3 != (long *)0x0 && !bVar5) goto LAB_71007ee960;
  }
  if (bVar9 == bVar6) goto LAB_71007ee70c;
  iVar11 = local_2c;
  if (plVar22 != (long *)0x0 && bVar7) {
    if ((int *)plVar22[2] < (int *)plVar22[3]) {
      iVar11 = *(int *)plVar22[2];
    }
    else {
      iVar11 = (**(code **)(*plVar22 + 0x48))(plVar22);
    }
    if (iVar11 != -1) {
      iVar11 = (**(code **)(*plVar24 + 0x40))(plVar24);
      if ((int *)plVar22[2] < (int *)plVar22[3]) {
        iVar12 = *(int *)plVar22[2];
      }
      else {
        iVar12 = (**(code **)(*plVar22 + 0x48))(plVar22);
      }
      if (iVar12 == -1) {
        plVar22 = (long *)0x0;
      }
      goto LAB_71007ee648;
    }
    plVar22 = (long *)0x0;
    iVar11 = -1;
  }
  iVar11 = (**(code **)(*plVar24 + 0x40))(plVar24,iVar11);
  iVar12 = local_2c;
LAB_71007ee648:
  iVar12 = (**(code **)(*plVar24 + 0x30))(plVar24,iVar12);
  if (uVar19 == 0) goto LAB_71007ee428;
  uVar18 = 0;
  do {
    while( true ) {
      lVar15 = *(long *)(param_7 + puVar16[uVar18] * 8);
      iVar13 = (**(code **)(*plVar24 + 0x40))(plVar24,*(undefined4 *)(lVar15 + uVar17 * 4));
      if ((iVar13 != iVar11) &&
         (iVar13 = (**(code **)(*plVar24 + 0x30))(plVar24,*(undefined4 *)(lVar15 + uVar17 * 4)),
         iVar12 != iVar13)) break;
      uVar18 = uVar18 + 1;
      if (uVar19 <= uVar18) goto LAB_71007ee6f0;
    }
    uVar19 = uVar19 - 1;
    puVar16[uVar18] = puVar16[uVar19];
    puVar1[uVar18] = puVar1[uVar19];
  } while (uVar18 < uVar19);
LAB_71007ee6f0:
  if (uVar19 < 2) goto LAB_71007ee70c;
  goto LAB_71007ee580;
}



// ===== FUN_71007eeda0 @ 71007eeda0 (size=1200) =====

undefined1  [16]
FUN_71007eeda0(undefined8 param_1,long *param_2,ulong param_3,long *param_4,int param_5,int *param_6
              ,long param_7,long param_8,long param_9,uint *param_10)

{
  int iVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  uint *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong *puVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  long *local_10;
  uint local_8;
  undefined4 uStack_4;
  
  uVar20 = param_3 & 0xffffffff;
  local_8 = (uint)param_3;
  uVar9 = local_8;
  uStack_4 = (undefined4)(param_3 >> 0x20);
  local_10 = param_2;
  lVar10 = FUN_71007b00e0(&DAT_7100d21118);
  plVar19 = *(long **)(*(long *)(*(long *)(param_9 + 0xd0) + 8) + lVar10 * 8);
  if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  bVar3 = uVar9 == 0xffffffff;
  bVar4 = param_2 != (long *)0x0;
  lVar10 = -(param_8 * 8 + 0xfU & 0xfffffffffffffff0);
  if (bVar4 && bVar3) {
    if ((int *)param_2[2] < (int *)param_2[3]) {
      iVar7 = *(int *)param_2[2];
    }
    else {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    if (iVar7 == -1) {
      param_2 = (long *)0x0;
    }
    bVar3 = iVar7 == -1 && (bVar4 && bVar3);
  }
  bVar5 = param_5 == -1;
  bVar6 = param_4 != (long *)0x0;
  bVar4 = bVar5;
  if (bVar6 && bVar5) {
    if ((int *)param_4[2] < (int *)param_4[3]) {
      iVar7 = *(int *)param_4[2];
    }
    else {
      iVar7 = (**(code **)(*param_4 + 0x48))(param_4);
    }
    if (iVar7 == -1) {
      param_4 = (long *)0x0;
    }
    bVar4 = iVar7 == -1 && (bVar6 && bVar5);
  }
  if (bVar4 != bVar3) {
    local_10 = param_2;
    iVar7 = FUN_71007cc080(&local_10);
    param_2 = local_10;
    uVar20 = (ulong)local_8;
    lVar15 = param_8 << 1;
    if (lVar15 != 0) {
      lVar17 = 0;
      uVar21 = 0;
      do {
        while ((**(int **)(param_7 + lVar17 * 8) != iVar7 &&
               (iVar8 = (**(code **)(*plVar19 + 0x30))(plVar19), iVar7 != iVar8))) {
          lVar17 = lVar17 + 1;
          if (lVar17 == lVar15) goto LAB_71007ef058;
        }
        *(int *)(&stack0xffffffffffffff70 + uVar21 * 4 + lVar10) = (int)lVar17;
        lVar17 = lVar17 + 1;
        uVar21 = uVar21 + 1;
      } while (lVar17 != lVar15);
LAB_71007ef058:
      if (uVar21 != 0) {
        FUN_71007e3fa0(param_2);
        uVar16 = 0;
        lVar15 = -(uVar21 * 8 + 0xf & 0xfffffffffffffff0);
        puVar18 = (ulong *)(&stack0xffffffffffffff70 + lVar15 + lVar10);
        do {
          uVar12 = FUN_710081f600(*(undefined8 *)
                                   (param_7 +
                                   (long)*(int *)(&stack0xffffffffffffff70 + uVar16 * 4 + lVar10) *
                                   8));
          *(undefined8 *)(&stack0xffffffffffffff70 + uVar16 * 8 + lVar15 + lVar10) = uVar12;
          uVar16 = uVar16 + 1;
        } while (uVar21 != uVar16);
        uVar21 = 1;
        goto LAB_71007ef0a0;
      }
    }
  }
  iVar7 = (int)uVar20;
  bVar3 = iVar7 == -1;
  if (param_2 == (long *)0x0) {
    if (param_4 != (long *)0x0 && bVar5) {
      puVar18 = (ulong *)0x0;
      uVar21 = 0;
      uVar16 = 0;
LAB_71007eeed0:
      do {
        iVar7 = (int)uVar20;
        if ((int *)param_4[2] < (int *)param_4[3]) {
          iVar8 = *(int *)param_4[2];
        }
        else {
          iVar8 = (**(code **)(*param_4 + 0x48))(param_4);
        }
        if (iVar8 == -1) {
          param_4 = (long *)0x0;
        }
        if ((iVar8 == -1) == bVar3) goto LAB_71007ef0c8;
        uVar14 = uVar20;
        if (param_2 != (long *)0x0 && iVar7 == -1) goto LAB_71007ef104;
LAB_71007eef08:
        iVar7 = (int)uVar14;
        if (uVar16 == 0) break;
        uVar11 = 0;
        uVar14 = 0;
LAB_71007eef2c:
        do {
          if (uVar21 < puVar18[uVar11]) {
            if (*(int *)(*(long *)(param_7 +
                                  (long)*(int *)(&stack0xffffffffffffff70 + uVar11 * 4 + lVar10) * 8
                                  ) + uVar21 * 4) != (int)uVar20) {
              uVar16 = uVar16 - 1;
              *(undefined4 *)(&stack0xffffffffffffff70 + uVar11 * 4 + lVar10) =
                   *(undefined4 *)(&stack0xffffffffffffff70 + uVar16 * 4 + lVar10);
              puVar18[uVar11] = puVar18[uVar16];
              if (uVar16 <= uVar11) break;
              goto LAB_71007eef2c;
            }
          }
          else {
            uVar14 = uVar14 + 1;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar16);
        if (uVar14 == uVar16) goto LAB_71007ef0c8;
        if ((ulong)param_2[2] < (ulong)param_2[3]) {
          param_2[2] = param_2[2] + 4;
          uVar21 = uVar21 + 1;
          puVar13 = (uint *)param_2[2];
          if ((uint *)param_2[3] <= puVar13) goto LAB_71007eef9c;
LAB_71007ef0ac:
          uVar20 = (ulong)*puVar13;
          if (*puVar13 != 0xffffffff) goto LAB_71007ef0b8;
LAB_71007eefb8:
          if (param_4 == (long *)0x0) {
            if (param_5 == -1) {
              param_2 = (long *)0x0;
              iVar7 = -1;
              goto LAB_71007ef0c8;
            }
          }
          else if (param_5 == -1) goto LAB_71007ef210;
          param_2 = (long *)0x0;
          uVar14 = uVar20;
          goto LAB_71007eef08;
        }
        uVar21 = uVar21 + 1;
        (**(code **)(*param_2 + 0x50))(param_2);
LAB_71007ef0a0:
        puVar13 = (uint *)param_2[2];
        if (puVar13 < (uint *)param_2[3]) goto LAB_71007ef0ac;
LAB_71007eef9c:
        uVar14 = (**(code **)(*param_2 + 0x48))(param_2);
        uVar20 = uVar14 & 0xffffffff;
        if ((int)uVar14 == -1) goto LAB_71007eefb8;
LAB_71007ef0b8:
        if (param_4 == (long *)0x0) {
          if (param_5 == -1) {
LAB_71007ef104:
            if ((uint *)param_2[2] < (uint *)param_2[3]) {
              uVar9 = *(uint *)param_2[2];
            }
            else {
              uVar9 = (**(code **)(*param_2 + 0x48))(param_2);
            }
            uVar20 = (ulong)uVar9;
            uVar14 = 0xffffffff;
            if (uVar9 == 0xffffffff) {
              param_2 = (long *)0x0;
            }
            goto LAB_71007eef08;
          }
LAB_71007ef0c4:
          iVar7 = -1;
          goto LAB_71007ef0c8;
        }
        if (param_5 != -1) goto LAB_71007ef0c4;
        uVar20 = 0xffffffff;
LAB_71007eeecc:
        bVar3 = false;
      } while( true );
    }
  }
  else {
    if (bVar3) {
      puVar18 = (ulong *)0x0;
      uVar21 = 0;
      uVar16 = 0;
      goto LAB_71007ef0a0;
    }
    if ((param_4 != (long *)0x0) && (param_5 == -1)) {
      puVar18 = (ulong *)0x0;
      uVar21 = 0;
      uVar16 = 0;
      goto LAB_71007eeecc;
    }
  }
LAB_71007eee6c:
  *param_10 = *param_10 | 4;
LAB_71007eee80:
  auVar2._8_4_ = iVar7;
  auVar2._0_8_ = param_2;
  auVar2._12_4_ = uStack_4;
  return auVar2;
LAB_71007ef210:
  param_2 = (long *)0x0;
  bVar3 = true;
  goto LAB_71007eeed0;
LAB_71007ef0c8:
  if (uVar16 == 1) {
    uVar20 = *puVar18;
joined_r0x0071007ef174:
    if (uVar20 == uVar21) {
LAB_71007ef0dc:
      iVar1 = *(int *)(&stack0xffffffffffffff70 + lVar10);
      iVar8 = iVar1 - (int)param_8;
      if (iVar1 < (int)param_8) {
        iVar8 = iVar1;
      }
      *param_6 = iVar8;
      goto LAB_71007eee80;
    }
  }
  else if (uVar16 == 2) {
    if (*puVar18 != uVar21) {
      uVar20 = puVar18[1];
      goto joined_r0x0071007ef174;
    }
    goto LAB_71007ef0dc;
  }
  goto LAB_71007eee6c;
}



// ===== FUN_71007ef6e0 @ 71007ef6e0 (size=4636) =====

undefined1  [16]
FUN_71007ef6e0(undefined8 param_1,long *param_2,ulong param_3,long *param_4,undefined8 param_5,
              long param_6,uint *param_7,uint *param_8,long param_9,uint *param_10)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined8 uVar14;
  bool bVar15;
  byte bVar16;
  bool bVar17;
  byte bVar18;
  char cVar19;
  int iVar20;
  uint uVar25;
  undefined4 uVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  ulong uVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  undefined1 *puVar31;
  char *pcVar32;
  uint uVar33;
  undefined *puVar34;
  code *pcVar35;
  byte bVar36;
  long *plVar37;
  ulong uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [12];
  long *local_1a0;
  undefined8 local_198;
  undefined1 local_190 [12];
  undefined4 uStack_184;
  uint local_178;
  uint local_174;
  int *local_170;
  int *piStack_168;
  undefined1 auStack_158 [40];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
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
  
  uVar38 = param_3 & 0xffffffff;
  local_190._8_4_ = (undefined4)param_3;
  uVar21 = local_190._8_4_;
  uStack_184 = (undefined4)(param_3 >> 0x20);
  local_1a0 = param_4;
  local_198 = param_5;
  local_190._0_8_ = param_2;
  uVar26 = FUN_71007b00e0(&DAT_7100d22830);
  if (((uVar26 < *(ulong *)(*(long *)(param_6 + 0xd0) + 0x10)) &&
      (lVar27 = *(long *)(*(long *)(*(long *)(param_6 + 0xd0) + 8) + uVar26 * 8), lVar27 != 0)) &&
     (lVar27 = FUN_71007f9ea0(lVar27,&PTR_PTR_FUN_7100aec798,&PTR_PTR_FUN_7100aeecb0,0), lVar27 != 0
     )) {
    lVar28 = FUN_71007b00e0(&DAT_7100d21118);
    plVar37 = *(long **)(*(long *)(*(long *)(param_6 + 0xd0) + 8) + lVar28 * 8);
    if (plVar37 != (long *)0x0) {
      uVar29 = FUN_710081f600(param_9);
      auVar40._8_4_ = local_190._8_4_;
      auVar40._0_8_ = local_190._0_8_;
      bVar16 = uVar21 == -1;
      local_178 = 0;
      uVar26 = 0;
      iVar24 = (int)local_198;
      local_190 = auVar40;
      if (param_2 != (long *)0x0 && (bool)bVar16) goto LAB_71007ef900;
LAB_71007ef7bc:
      bVar17 = iVar24 == -1;
      bVar15 = param_4 == (long *)0x0 || !bVar17;
      if (param_4 != (long *)0x0 && bVar17) goto LAB_71007ef940;
LAB_71007ef7d4:
      uVar23 = (uint)uVar38;
      bVar16 = uVar26 < uVar29 & (bVar16 ^ bVar17);
      do {
        if (bVar16 == 0) {
          if (local_178 == 0 && uVar29 == uVar26) goto LAB_71007ef9a0;
LAB_71007ef990:
          *param_7 = *param_7 | 4;
LAB_71007ef9a0:
          auVar39._8_4_ = uVar23;
          auVar39._0_8_ = param_2;
          auVar39._12_4_ = uStack_184;
          return auVar39;
        }
        uVar23 = (uint)uVar38;
        if (local_178 != 0) goto LAB_71007ef990;
        lVar28 = param_9 + uVar26 * 4;
        cVar19 = (**(code **)(*plVar37 + 0x60))(plVar37,*(undefined4 *)(param_9 + uVar26 * 4),0);
        if (cVar19 != '%') {
          bVar16 = (**(code **)(*plVar37 + 0x10))(plVar37,8,*(undefined4 *)(param_9 + uVar26 * 4));
          if ((bVar16 & 1) == 0) {
            iVar20 = (**(code **)(*plVar37 + 0x40))(plVar37,*(undefined4 *)(param_9 + uVar26 * 4));
            local_190._0_8_ = param_2;
            local_190._8_4_ = uVar23;
            uVar21 = FUN_71007cc080(local_190);
            param_2 = (long *)local_190._0_8_;
            iVar22 = (**(code **)(*plVar37 + 0x40))(plVar37,uVar21);
            if (iVar20 != iVar22) {
              iVar20 = (**(code **)(*plVar37 + 0x30))(plVar37,*(undefined4 *)(param_9 + uVar26 * 4))
              ;
              uVar21 = FUN_71007cc080(local_190);
              param_2 = (long *)local_190._0_8_;
              uVar38 = (ulong)(uint)local_190._8_4_;
              iVar22 = (**(code **)(*plVar37 + 0x30))(plVar37,uVar21);
              if (iVar20 != iVar22) goto LAB_71007ef8d0;
            }
            uVar26 = uVar26 + 1;
            FUN_71007e3fa0(param_2);
            auVar40._8_4_ = local_190._8_4_;
            auVar40._0_8_ = local_190._0_8_;
            goto LAB_71007ef900;
          }
          bVar18 = uVar23 == 0xffffffff;
          uVar30 = uVar38;
          if (param_2 == (long *)0x0) {
            if (param_4 != (long *)0x0 && bVar17 != false) {
              bVar36 = 0;
              goto LAB_71007efb68;
            }
            if ((bool)bVar18 != bVar17) {
LAB_71007efa50:
              while( true ) {
                uVar30 = (**(code **)(*plVar37 + 0x10))(plVar37,8,uVar30);
                auVar40 = local_190;
                if ((uVar30 & 1) == 0) break;
                if ((ulong)param_2[2] < (ulong)param_2[3]) {
                  param_2[2] = param_2[2] + 4;
                }
                else {
                  (**(code **)(*param_2 + 0x50))(param_2);
                }
LAB_71007efa80:
                if ((uint *)param_2[2] < (uint *)param_2[3]) {
                  uVar23 = *(uint *)param_2[2];
                  auVar40 = local_190;
                }
                else {
                  uVar23 = (**(code **)(*param_2 + 0x48))(param_2);
                  auVar40 = local_190;
                }
                uVar38 = (ulong)uVar23;
                local_190 = auVar40;
                if (uVar23 != 0xffffffff) {
                  if (param_4 == (long *)0x0) {
                    if (iVar24 != -1) goto LAB_71007efaa4;
                    uVar38 = 0xffffffff;
                    goto LAB_71007efb94;
                  }
                  if (iVar24 == -1) {
                    uVar38 = 0xffffffff;
                    bVar18 = 0;
                    bVar36 = bVar16;
                    goto LAB_71007efb68;
                  }
LAB_71007efaa4:
                  uVar26 = uVar26 + 1;
                  goto LAB_71007ef900;
                }
                if (param_4 != (long *)0x0) {
                  if (iVar24 != -1) goto LAB_71007efbd8;
                  uVar38 = 0xffffffff;
                  bVar36 = 0;
                  param_2 = (long *)0x0;
                  bVar18 = bVar16;
LAB_71007efb68:
                  if ((int *)param_4[2] < (int *)param_4[3]) {
                    iVar20 = *(int *)param_4[2];
                  }
                  else {
                    iVar20 = (**(code **)(*param_4 + 0x48))(param_4);
                  }
                  if (iVar20 == -1) {
                    param_4 = (long *)0x0;
                  }
                  if ((iVar20 == -1) != (bool)bVar18) goto code_r0x0071007efb8c;
                  goto LAB_71007efde0;
                }
                if (iVar24 == -1) {
                  uVar26 = uVar26 + 1;
                  param_2 = (long *)0x0;
                  goto LAB_71007ef7bc;
                }
LAB_71007efbd8:
                param_2 = (long *)0x0;
                uVar30 = uVar38;
              }
              goto LAB_71007ef8dc;
            }
            bVar16 = uVar23 == 0xffffffff;
            uVar26 = uVar26 + 1;
          }
          else {
            if ((bool)bVar18) goto LAB_71007efa80;
            if (param_4 == (long *)0x0) {
              if (iVar24 == -1) goto LAB_71007efa50;
            }
            else if (iVar24 == -1) {
              bVar36 = 0;
              bVar18 = 0;
              goto LAB_71007efb68;
            }
            uVar26 = uVar26 + 1;
            bVar16 = 0;
          }
          goto LAB_71007ef7bc;
        }
        cVar19 = (**(code **)(*plVar37 + 0x60))(plVar37,*(undefined4 *)(lVar28 + 4),0);
        local_174 = 0;
        if (cVar19 == 'E' || cVar19 == 'O') {
          uVar26 = uVar26 + 2;
          cVar19 = (**(code **)(*plVar37 + 0x60))(plVar37,*(undefined4 *)(lVar28 + 8),0);
        }
        else {
          uVar26 = uVar26 + 1;
        }
        auVar40 = local_190;
        switch(cVar19) {
        case '%':
          local_190._0_8_ = param_2;
          local_190._8_4_ = uVar23;
          iVar20 = FUN_71007cc080(local_190);
          param_2 = (long *)local_190._0_8_;
          uVar38 = (ulong)(uint)local_190._8_4_;
          iVar22 = (**(code **)(*plVar37 + 0x50))(plVar37,0x25);
          if (iVar20 == iVar22) {
            uVar38 = 0xffffffff;
            FUN_71007e3fa0(param_2);
            auVar40._8_4_ = local_190._8_4_;
            auVar40._0_8_ = local_190._0_8_;
          }
          else {
LAB_71007ef8d0:
            auVar40._8_4_ = local_190._8_4_;
            auVar40._0_8_ = local_190._0_8_;
            local_178 = local_178 | 4;
          }
          break;
        default:
          local_178 = local_178 | 4;
          break;
        case 'A':
        case 'a':
          lVar28 = *(long *)(lVar27 + 0x10);
          uStack_e8 = *(undefined8 *)(lVar28 + 0xa0);
          local_f0 = *(undefined8 *)(lVar28 + 0x98);
          uStack_128 = *(undefined8 *)(lVar28 + 0x60);
          local_130 = *(undefined8 *)(lVar28 + 0x58);
          uStack_118 = *(undefined8 *)(lVar28 + 0x70);
          uStack_120 = *(undefined8 *)(lVar28 + 0x68);
          uStack_108 = *(undefined8 *)(lVar28 + 0x80);
          local_110 = *(undefined8 *)(lVar28 + 0x78);
          uStack_f8 = *(undefined8 *)(lVar28 + 0x90);
          uStack_100 = *(undefined8 *)(lVar28 + 0x88);
          uStack_d8 = *(undefined8 *)(lVar28 + 0xb0);
          uStack_e0 = *(undefined8 *)(lVar28 + 0xa8);
          local_d0 = *(undefined8 *)(lVar28 + 0xb8);
          uStack_c8 = *(undefined8 *)(lVar28 + 0xc0);
          local_1a0 = param_4;
          local_190._0_8_ = param_2;
          local_190._8_4_ = uVar23;
          auVar39 = FUN_71007ee3a0(param_1,param_2,CONCAT44(uStack_184,uVar23),param_4,local_198,
                                   &local_174,&local_130,0xe,param_6,&local_178);
          auVar40._8_4_ = local_190._8_4_;
          auVar40._0_8_ = local_190._0_8_;
          param_2 = auVar39._0_8_;
          uVar38 = auVar39._8_8_ & 0xffffffff;
          if (local_178 == 0) {
            uVar23 = (int)local_174 % 7;
LAB_71007eff54:
            auVar40._8_4_ = local_190._8_4_;
            auVar40._0_8_ = local_190._0_8_;
            param_8[6] = uVar23;
            *param_10 = *param_10 | 2;
          }
          break;
        case 'B':
        case 'b':
        case 'h':
          lVar28 = *(long *)(lVar27 + 0x10);
          uStack_78 = *(undefined8 *)(lVar28 + 0x110);
          local_80 = *(undefined8 *)(lVar28 + 0x108);
          uStack_68 = *(undefined8 *)(lVar28 + 0x120);
          uStack_70 = *(undefined8 *)(lVar28 + 0x118);
          uStack_58 = *(undefined8 *)(lVar28 + 0x130);
          local_60 = *(undefined8 *)(lVar28 + 0x128);
          uStack_48 = *(undefined8 *)(lVar28 + 0x140);
          uStack_50 = *(undefined8 *)(lVar28 + 0x138);
          uStack_38 = *(undefined8 *)(lVar28 + 0x150);
          local_40 = *(undefined8 *)(lVar28 + 0x148);
          uStack_28 = *(undefined8 *)(lVar28 + 0x160);
          uStack_30 = *(undefined8 *)(lVar28 + 0x158);
          uStack_18 = *(undefined8 *)(lVar28 + 0x170);
          local_20 = *(undefined8 *)(lVar28 + 0x168);
          uStack_10 = *(undefined8 *)(lVar28 + 0x178);
          uStack_8 = *(undefined8 *)(lVar28 + 0x180);
          uStack_b8 = *(undefined8 *)(lVar28 + 0xd0);
          local_c0 = *(undefined8 *)(lVar28 + 200);
          uStack_a8 = *(undefined8 *)(lVar28 + 0xe0);
          uStack_b0 = *(undefined8 *)(lVar28 + 0xd8);
          uStack_98 = *(undefined8 *)(lVar28 + 0xf0);
          local_a0 = *(undefined8 *)(lVar28 + 0xe8);
          uStack_88 = *(undefined8 *)(lVar28 + 0x100);
          uStack_90 = *(undefined8 *)(lVar28 + 0xf8);
          local_1a0 = param_4;
          local_190._0_8_ = param_2;
          local_190._8_4_ = uVar23;
          auVar39 = FUN_71007ee3a0(param_1,param_2,CONCAT44(uStack_184,uVar23),param_4,local_198,
                                   &local_174,&local_c0,0x18,param_6,&local_178);
          auVar5._8_4_ = local_190._8_4_;
          auVar5._0_8_ = local_190._0_8_;
          auVar40._8_4_ = local_190._8_4_;
          auVar40._0_8_ = local_190._0_8_;
          param_2 = auVar39._0_8_;
          uVar38 = auVar39._8_8_ & 0xffffffff;
          if (local_178 == 0) {
            param_8[4] = (int)local_174 % 0xc;
            *(ushort *)param_10 = (ushort)*param_10 | 0x408;
            auVar40 = auVar5;
          }
          break;
        case 'C':
          local_1a0 = param_4;
          local_190._0_8_ = param_2;
          local_190._8_4_ = uVar23;
          auVar39 = FUN_71007e6360(param_1,param_2,CONCAT44(uStack_184,uVar23),param_4,local_198,
                                   &local_174,0,99,2,param_6,&local_178);
          auVar13._8_4_ = local_190._8_4_;
          auVar13._0_8_ = local_190._0_8_;
          auVar40._8_4_ = local_190._8_4_;
          auVar40._0_8_ = local_190._0_8_;
          param_2 = auVar39._0_8_;
          uVar38 = auVar39._8_8_ & 0xffffffff;
          if (local_178 == 0) {
            param_10[1] = local_174;
            *(ushort *)param_10 = (ushort)*param_10 | 0x480;
            auVar40 = auVar13;
          }
          break;
        case 'D':
          puVar31 = auStack_158;
          (**(code **)(*plVar37 + 0x58))(plVar37,"%m/%d/%y",&DAT_7100856159,puVar31);
          goto LAB_71007f0054;
        case 'H':
          local_1a0 = param_4;
          local_190._0_8_ = param_2;
          local_190._8_4_ = uVar23;
          auVar39 = FUN_71007e6360(param_1,param_2,CONCAT44(uStack_184,uVar23),param_4,local_198,
                                   &local_174,0,0x17,2,param_6,&local_178);
          auVar12._8_4_ = local_190._8_4_;
          auVar12._0_8_ = local_190._0_8_;
          auVar40._8_4_ = local_190._8_4_;
          auVar40._0_8_ = local_190._0_8_;
          param_2 = auVar39._0_8_;
          uVar38 = auVar39._8_8_ & 0xffffffff;
          if (local_178 == 0) {
            param_8[2] = local_174;
            *param_10 = *param_10 & 0xfffffffe;
            auVar40 = auVar12;
          }
          break;
        case 'I':
          local_1a0 = param_4;
          local_190._0_8_ = param_2;
          local_190._8_4_ = uVar23;
          auVar39 = FUN_71007e6360(param_1,param_2,CONCAT44(uStack_184,uVar23),param_4,local_198,
                                   &local_174,1,0xc,2,param_6,&local_178);
          auVar11._8_4_ = local_190._8_4_;
          auVar11._0_8_ = local_190._0_8_;
          auVar40._8_4_ = local_190._8_4_;
          auVar40._0_8_ = local_190._0_8_;
          param_2 = auVar39._0_8_;
          uVar38 = auVar39._8_8_ & 0xffffffff;
          if (local_178 == 0) {
            param_8[2] = (int)local_174 % 0xc;
            *param_10 = *param_10 | 1;
            auVar40 = auVar11;
          }
          break;
        case 'M':
          local_1a0 = param_4;
          local_190._0_8_ = param_2;
          local_190._8_4_ = uVar23;
          auVar39 = FUN_71007e6360(param_1,param_2,CONCAT44(uStack_184,uVar23),param_4,local_198,
                                   &local_174,0,0x3b,2,param_6,&local_178);
          auVar10._8_4_ = local_190._8_4_;
          auVar10._0_8_ = local_190._0_8_;
          auVar40._8_4_ = local_190._8_4_;
          auVar40._0_8_ = local_190._0_8_;
          param_2 = auVar39._0_8_;
          uVar38 = auVar39._8_8_ & 0xffffffff;
          if (local_178 == 0) {
            param_8[1] = local_174;
            auVar40 = auVar10;
          }
          break;
        case 'R':
          puVar34 = &DAT_7100856166;
          pcVar35 = *(code **)(*plVar37 + 0x58);
          pcVar32 = "%H:%M";
          goto LAB_71007f02c4;
        case 'S':
          local_1a0 = param_4;
          local_190._0_8_ = param_2;
          local_190._8_4_ = uVar23;
          auVar39 = FUN_71007e6360(param_1,param_2,CONCAT44(uStack_184,uVar23),param_4,local_198,
                                   &local_174,0,0x3d,2,param_6,&local_178);
          auVar9._8_4_ = local_190._8_4_;
          auVar9._0_8_ = local_190._0_8_;
          auVar40._8_4_ = local_190._8_4_;
          auVar40._0_8_ = local_190._0_8_;
          param_2 = auVar39._0_8_;
          uVar38 = auVar39._8_8_ & 0xffffffff;
          if (local_178 == 0) {
            *param_8 = local_174;
            auVar40 = auVar9;
          }
          break;
        case 'T':
          puVar34 = &DAT_7100856171;
          pcVar35 = *(code **)(*plVar37 + 0x58);
          pcVar32 = "%H:%M:%S";
LAB_71007f02c4:
          puVar31 = auStack_158;
          (*pcVar35)(plVar37,pcVar32,puVar34,auStack_158);
          goto LAB_71007f019c;
        case 'U':
          local_1a0 = param_4;
          local_190._0_8_ = param_2;
          local_190._8_4_ = uVar23;
          auVar39 = FUN_71007e6360(param_1,param_2,CONCAT44(uStack_184,uVar23),param_4,local_198,
                                   &local_174,0,0x35,2,param_6,&local_178);
          auVar40._8_4_ = local_190._8_4_;
          auVar40._0_8_ = local_190._0_8_;
          param_2 = auVar39._0_8_;
          uVar38 = auVar39._8_8_ & 0xffffffff;
          if (local_178 == 0) {
            uVar33 = 0xffdf;
            uVar23 = *param_10;
            uVar25 = (local_174 & 0x3f) << 0x10 | 0x20;
LAB_71007f0224:
            auVar40._8_4_ = local_190._8_4_;
            auVar40._0_8_ = local_190._0_8_;
            *param_10 = uVar25 | uVar23 & (uVar33 | 0xffc00000);
          }
          break;
        case 'W':
          local_1a0 = param_4;
          local_190._0_8_ = param_2;
          local_190._8_4_ = uVar23;
          auVar39 = FUN_71007e6360(param_1,param_2,CONCAT44(uStack_184,uVar23),param_4,local_198,
                                   &local_174,0,0x35,2,param_6,&local_178);
          auVar40._8_4_ = local_190._8_4_;
          auVar40._0_8_ = local_190._0_8_;
          param_2 = auVar39._0_8_;
          uVar38 = auVar39._8_8_ & 0xffffffff;
          if (local_178 == 0) {
            uVar33 = 0xffbf;
            uVar23 = *param_10;
            uVar25 = (local_174 & 0x3f) << 0x10 | 0x40;
            goto LAB_71007f0224;
          }
          break;
        case 'X':
          puVar31 = *(undefined1 **)(*(long *)(lVar27 + 0x10) + 0x20);
          goto LAB_71007f019c;
        case 'Y':
          local_1a0 = param_4;
          local_190._0_8_ = param_2;
          local_190._8_4_ = uVar23;
          auVar39 = FUN_71007e6360(param_1,param_2,CONCAT44(uStack_184,uVar23),param_4,local_198,
                                   &local_174,0,9999,4,param_6,&local_178);
          auVar8._8_4_ = local_190._8_4_;
          auVar8._0_8_ = local_190._0_8_;
          auVar40._8_4_ = local_190._8_4_;
          auVar40._0_8_ = local_190._0_8_;
          param_2 = auVar39._0_8_;
          uVar38 = auVar39._8_8_ & 0xffffffff;
          if (local_178 == 0) {
            param_8[5] = local_174 - 0x76c;
            *(byte *)((long)param_10 + 1) = *(byte *)((long)param_10 + 1) & 0xf9 | 4;
            auVar40 = auVar8;
          }
          break;
        case 'Z':
          local_190._0_8_ = param_2;
          local_190._8_4_ = uVar23;
          uVar21 = FUN_71007cc080(local_190);
          param_2 = (long *)local_190._0_8_;
          uVar38 = (ulong)(uint)local_190._8_4_;
          uVar30 = (**(code **)(*plVar37 + 0x10))(plVar37,1,uVar21);
          if ((uVar30 & 1) == 0) goto LAB_71007ef8d0;
          local_1a0 = param_4;
          local_190 = FUN_71007ee3a0(param_1,local_190._0_8_,CONCAT44(uStack_184,local_190._8_4_),
                                     param_4,local_198,&local_c0,&PTR_DAT_7100af47a8,0xe,param_6,
                                     &local_178);
          uVar30 = FUN_71007e8c60(local_190,&local_1a0);
          param_4 = local_1a0;
          uVar38 = (ulong)(uint)local_190._8_4_;
          param_2 = (long *)local_190._0_8_;
          if (((uVar30 & 1) == 0) && (local_178 == 0 && (int)local_c0 == 0)) {
            iVar24 = FUN_71007cc080(local_190);
            auVar40 = local_190;
            iVar20 = (**(code **)(*plVar37 + 0x50))(plVar37,0x2d);
            if (iVar24 != iVar20) {
              iVar24 = FUN_71007cc080(local_190);
              auVar40 = local_190;
              param_2 = (long *)local_190._0_8_;
              uVar38 = (ulong)(uint)local_190._8_4_;
              iVar20 = (**(code **)(*plVar37 + 0x50))(plVar37,0x2b);
              if (iVar24 != iVar20) goto LAB_71007efde0;
            }
            local_190 = auVar40;
            auVar40 = FUN_71007e6360(param_1,auVar40._0_8_,CONCAT44(uStack_184,auVar40._8_4_),
                                     local_1a0,local_198,&local_c0,0,0x17,2,param_6,&local_178);
            local_190 = auVar40;
            auVar39 = FUN_71007e6360(param_1,auVar40._0_8_,CONCAT44(uStack_184,auVar40._8_4_),
                                     local_1a0,local_198,&local_c0,0,0x3b,2,param_6,&local_178);
            param_2 = auVar39._0_8_;
            uVar38 = auVar39._8_8_ & 0xffffffff;
          }
LAB_71007efde0:
          iVar24 = (int)local_198;
          auVar40 = local_190;
          break;
        case 'c':
          puVar31 = *(undefined1 **)(*(long *)(lVar27 + 0x10) + 0x30);
LAB_71007f0054:
          local_1a0 = param_4;
          local_190._0_8_ = param_2;
          local_190._8_4_ = uVar23;
          auVar39 = FUN_71007ef6e0(param_1,param_2,CONCAT44(uStack_184,uVar23),param_4,local_198,
                                   param_6,&local_178,param_8,puVar31,param_10);
          auVar7._8_4_ = local_190._8_4_;
          auVar7._0_8_ = local_190._0_8_;
          auVar40._8_4_ = local_190._8_4_;
          auVar40._0_8_ = local_190._0_8_;
          param_2 = auVar39._0_8_;
          uVar38 = auVar39._8_8_ & 0xffffffff;
          if (local_178 == 0) {
            *param_10 = *param_10 | 0x400;
            auVar40 = auVar7;
          }
          break;
        case 'd':
        case 'e':
          local_190._0_8_ = param_2;
          local_190._8_4_ = uVar23;
          uVar21 = FUN_71007cc080(local_190);
          uVar23 = local_190._8_4_;
          uVar14 = local_190._0_8_;
          uVar38 = (**(code **)(*plVar37 + 0x10))(plVar37,8,uVar21);
          if ((uVar38 & 1) != 0) {
            uVar23 = 0xffffffff;
            FUN_71007e3fa0(uVar14);
          }
          local_1a0 = param_4;
          local_190._8_4_ = uVar23;
          auVar39 = FUN_71007e6360(param_1,local_190._0_8_,CONCAT44(uStack_184,uVar23),param_4,
                                   local_198,&local_174,1,0x1f,2,param_6,&local_178);
          auVar6._8_4_ = local_190._8_4_;
          auVar6._0_8_ = local_190._0_8_;
          auVar40._8_4_ = local_190._8_4_;
          auVar40._0_8_ = local_190._0_8_;
          param_2 = auVar39._0_8_;
          uVar38 = auVar39._8_8_ & 0xffffffff;
          if (local_178 == 0) {
            param_8[3] = local_174;
            *(ushort *)param_10 = (ushort)*param_10 | 0x410;
            auVar40 = auVar6;
          }
          break;
        case 'j':
          local_1a0 = param_4;
          local_190._0_8_ = param_2;
          local_190._8_4_ = uVar23;
          auVar39 = FUN_71007e6360(param_1,param_2,CONCAT44(uStack_184,uVar23),param_4,local_198,
                                   &local_174,1,0x16e,3,param_6,&local_178);
          auVar4._8_4_ = local_190._8_4_;
          auVar4._0_8_ = local_190._0_8_;
          auVar40._8_4_ = local_190._8_4_;
          auVar40._0_8_ = local_190._0_8_;
          param_2 = auVar39._0_8_;
          uVar38 = auVar39._8_8_ & 0xffffffff;
          if (local_178 == 0) {
            param_8[7] = local_174 - 1;
            *param_10 = *param_10 | 4;
            auVar40 = auVar4;
          }
          break;
        case 'm':
          local_1a0 = param_4;
          local_190._0_8_ = param_2;
          local_190._8_4_ = uVar23;
          auVar39 = FUN_71007e6360(param_1,param_2,CONCAT44(uStack_184,uVar23),param_4,local_198,
                                   &local_174,1,0xc,2,param_6,&local_178);
          auVar3._8_4_ = local_190._8_4_;
          auVar3._0_8_ = local_190._0_8_;
          auVar40._8_4_ = local_190._8_4_;
          auVar40._0_8_ = local_190._0_8_;
          param_2 = auVar39._0_8_;
          uVar38 = auVar39._8_8_ & 0xffffffff;
          if (local_178 == 0) {
            param_8[4] = local_174 - 1;
            *param_10 = *param_10 | 8;
            auVar40 = auVar3;
          }
          break;
        case 'n':
        case 't':
          while( true ) {
            local_190._8_4_ = (undefined4)uVar38;
            local_1a0 = param_4;
            local_190._0_8_ = param_2;
            uVar38 = FUN_71007e8c60(local_190,&local_1a0);
            param_4 = local_1a0;
            auVar40._8_4_ = local_190._8_4_;
            auVar40._0_8_ = local_190._0_8_;
            if ((uVar38 & 1) != 0) break;
            uVar21 = FUN_71007cc080(local_190);
            param_2 = (long *)local_190._0_8_;
            uVar38 = (ulong)(uint)local_190._8_4_;
            uVar30 = (**(code **)(*plVar37 + 0x10))(plVar37,8,uVar21);
            if ((uVar30 & 1) == 0) goto LAB_71007efde0;
            uVar38 = 0xffffffff;
            FUN_71007e3fa0(param_2);
          }
          uVar38 = (ulong)(uint)local_190._8_4_;
          param_2 = (long *)local_190._0_8_;
          iVar24 = (int)local_198;
          break;
        case 'p':
          local_170 = *(int **)(*(long *)(lVar27 + 0x10) + 0x40);
          piStack_168 = *(int **)(*(long *)(lVar27 + 0x10) + 0x48);
          if ((*local_170 != 0) && (*piStack_168 != 0)) {
            local_1a0 = param_4;
            local_190._0_8_ = param_2;
            local_190._8_4_ = uVar23;
            auVar39 = FUN_71007ee3a0(param_1,param_2,CONCAT44(uStack_184,uVar23),param_4,local_198,
                                     &local_174,&local_170,2,param_6,&local_178);
            auVar2._8_4_ = local_190._8_4_;
            auVar2._0_8_ = local_190._0_8_;
            auVar1._8_4_ = local_190._8_4_;
            auVar1._0_8_ = local_190._0_8_;
            auVar40._8_4_ = local_190._8_4_;
            auVar40._0_8_ = local_190._0_8_;
            param_2 = auVar39._0_8_;
            uVar38 = auVar39._8_8_ & 0xffffffff;
            if ((local_178 == 0) && (auVar40 = auVar1, local_174 != 0)) {
              *param_10 = *param_10 | 0x100;
              auVar40 = auVar2;
            }
          }
          break;
        case 'r':
          puVar31 = *(undefined1 **)(*(long *)(lVar27 + 0x10) + 0x50);
          goto LAB_71007f019c;
        case 'w':
          local_1a0 = param_4;
          local_190._0_8_ = param_2;
          local_190._8_4_ = uVar23;
          auVar39 = FUN_71007e6360(param_1,param_2,CONCAT44(uStack_184,uVar23),param_4,local_198,
                                   &local_174,0,6,1,param_6,&local_178);
          auVar40._8_4_ = local_190._8_4_;
          auVar40._0_8_ = local_190._0_8_;
          param_2 = auVar39._0_8_;
          uVar38 = auVar39._8_8_ & 0xffffffff;
          uVar23 = local_174;
          if (local_178 == 0) goto LAB_71007eff54;
          break;
        case 'x':
          puVar31 = *(undefined1 **)(*(long *)(lVar27 + 0x10) + 0x10);
LAB_71007f019c:
          local_1a0 = param_4;
          local_190._0_8_ = param_2;
          local_190._8_4_ = uVar23;
          auVar39 = FUN_71007ef6e0(param_1,param_2,CONCAT44(uStack_184,uVar23),param_4,local_198,
                                   param_6,&local_178,param_8,puVar31,param_10);
          auVar40._8_4_ = local_190._8_4_;
          auVar40._0_8_ = local_190._0_8_;
          uVar38 = auVar39._8_8_ & 0xffffffff;
          param_2 = auVar39._0_8_;
          break;
        case 'y':
          local_1a0 = param_4;
          local_190._0_8_ = param_2;
          local_190._8_4_ = uVar23;
          auVar39 = FUN_71007e6360(param_1,param_2,CONCAT44(uStack_184,uVar23),param_4,local_198,
                                   &local_174,0,99,2,param_6,&local_178);
          auVar40._8_4_ = local_190._8_4_;
          auVar40._0_8_ = local_190._0_8_;
          local_190._0_8_ = auVar39._0_8_;
          uVar38 = auVar39._8_8_ & 0xffffffff;
          param_2 = (long *)local_190._0_8_;
          if (local_178 == 0) {
            local_190._8_4_ = auVar39._8_4_;
            *(byte *)((long)param_10 + 1) = *(byte *)((long)param_10 + 1) | 6;
            uVar38 = FUN_71007e8c60(local_190,&local_1a0);
            param_4 = local_1a0;
            param_2 = (long *)local_190._0_8_;
            uVar23 = local_190._8_4_;
            if ((uVar38 & 1) == 0) {
              uVar21 = FUN_71007cc080(local_190);
              uVar23 = local_190._8_4_;
              param_2 = (long *)local_190._0_8_;
              uVar25 = (**(code **)(*plVar37 + 0x60))(plVar37,uVar21,0x2a);
              uVar25 = (uVar25 & 0xff) - 0x30;
              if (9 < (uVar25 & 0xff)) goto LAB_71007f0554;
              FUN_71007e3fa0(param_2);
              local_174 = uVar25 + local_174 * 10;
              local_190._8_4_ = 0xffffffff;
              uVar38 = FUN_71007e8c60(local_190,&local_1a0);
              param_4 = local_1a0;
              if ((uVar38 & 1) == 0) {
                uVar21 = FUN_71007cc080(local_190);
                param_2 = (long *)local_190._0_8_;
                uVar38 = (ulong)(uint)local_190._8_4_;
                uVar23 = (**(code **)(*plVar37 + 0x60))(plVar37,uVar21,0x2a);
                uVar23 = (uVar23 & 0xff) - 0x30;
                if ((uVar23 & 0xff) < 10) {
                  FUN_71007e3fa0(param_2);
                  uVar38 = 0xffffffff;
                  local_174 = uVar23 + local_174 * 10;
                }
              }
              else {
                uVar38 = (ulong)(uint)local_190._8_4_;
                param_2 = (long *)local_190._0_8_;
              }
              *param_10 = *param_10 & 0xfffffdff;
              uVar23 = local_174 - 0x76c;
            }
            else {
LAB_71007f0554:
              uVar38 = (ulong)uVar23;
              uVar23 = local_174 + 100;
              if (0x44 < (int)local_174) {
                uVar23 = local_174;
              }
            }
            auVar40._8_4_ = local_190._8_4_;
            auVar40._0_8_ = local_190._0_8_;
            param_8[5] = uVar23;
            iVar24 = (int)local_198;
          }
        }
LAB_71007ef8dc:
        uVar26 = uVar26 + 1;
        bVar16 = (int)uVar38 == -1;
        local_190 = auVar40;
        if (param_2 == (long *)0x0 || !(bool)bVar16) goto LAB_71007ef7bc;
LAB_71007ef900:
        local_190 = auVar40;
        if ((uint *)param_2[2] < (uint *)param_2[3]) {
          uVar23 = *(uint *)param_2[2];
        }
        else {
          uVar23 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        uVar38 = (ulong)uVar23;
        if (uVar23 == 0xffffffff) {
          bVar16 = 1;
          param_2 = (long *)0x0;
          goto LAB_71007ef7bc;
        }
        bVar17 = iVar24 == -1;
        uVar38 = 0xffffffff;
        bVar15 = param_4 == (long *)0x0 || !bVar17;
        bVar16 = 0;
        if (bVar15) goto LAB_71007ef7d4;
LAB_71007ef940:
        uVar23 = (uint)uVar38;
        if ((int *)param_4[2] < (int *)param_4[3]) {
          iVar20 = *(int *)param_4[2];
        }
        else {
          iVar20 = (**(code **)(*param_4 + 0x48))(param_4);
        }
        if (iVar20 == -1) {
          param_4 = (long *)0x0;
        }
        bVar16 = uVar26 < uVar29 & (bVar16 ^ (iVar20 == -1 && !bVar15));
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003a84();
code_r0x0071007efb8c:
  uVar30 = uVar38;
  auVar40 = local_190;
  if ((bVar36 & 1) != 0) {
LAB_71007efb94:
    local_190 = auVar40;
    if ((uint *)param_2[2] < (uint *)param_2[3]) {
      uVar23 = *(uint *)param_2[2];
    }
    else {
      uVar23 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    uVar30 = (ulong)uVar23;
    if (uVar23 == 0xffffffff) {
      param_2 = (long *)0x0;
    }
  }
  goto LAB_71007efa50;
}



// ===== FUN_71007f0cc0 @ 71007f0cc0 (size=3992) =====

undefined1  [16]
FUN_71007f0cc0(undefined8 param_1,long *param_2,ulong param_3,long *param_4,ulong param_5,
              long param_6,uint *param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  uint *puVar19;
  undefined8 *puVar20;
  int *piVar21;
  ulong uVar22;
  int iVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  long *plVar27;
  ulong uVar28;
  ulong local_98;
  int local_68;
  uint local_50;
  long *local_40;
  ulong local_38;
  long *local_30;
  uint local_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [8];
  undefined4 local_18;
  undefined1 *local_10;
  char *local_8;
  
  uVar25 = param_5 & 0xffffffff;
  uVar22 = param_3 & 0xffffffff;
  local_28 = (uint)param_3;
  uStack_24 = (undefined4)(param_3 >> 0x20);
  local_40 = param_4;
  local_38 = param_5;
  local_30 = param_2;
  lVar17 = FUN_71007b00e0(&DAT_7100d21118);
  plVar27 = *(long **)(*(long *)(*(long *)(param_6 + 0xd0) + 8) + lVar17 * 8);
  if (plVar27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  lVar17 = FUN_71007b00e0(&DAT_7100d22840);
  lVar26 = *(long *)(*(long *)(param_6 + 0xd0) + 0x18);
  lVar24 = *(long *)(lVar26 + lVar17 * 8);
  if (lVar24 == 0) {
    puVar20 = (undefined8 *)FUN_71007af5c0(0xa0);
    *(undefined4 *)(puVar20 + 1) = 0;
    puVar20[2] = 0;
    puVar20[3] = 0;
    *puVar20 = &PTR_FUN_7100aef2f0;
    *(undefined1 *)(puVar20 + 4) = 0;
    *(undefined8 *)((long)puVar20 + 0x24) = 0;
    puVar20[6] = 0;
    puVar20[7] = 0;
    puVar20[8] = 0;
    puVar20[9] = 0;
    puVar20[10] = 0;
    puVar20[0xb] = 0;
    *(undefined4 *)(puVar20 + 0xc) = 0;
    *(undefined8 *)((long)puVar20 + 100) = 0;
    *(undefined1 *)(puVar20 + 0x13) = 0;
    FUN_71007e57e0(puVar20,param_6 + 0xd0);
    FUN_71007b05e0(*(undefined8 *)(param_6 + 0xd0),puVar20,lVar17);
    lVar24 = *(long *)(lVar26 + lVar17 * 8);
  }
  if (*(long *)(lVar24 + 0x48) == 0) {
    local_50 = 0;
  }
  else {
    local_50 = (uint)(*(long *)(lVar24 + 0x58) != 0);
  }
  local_10 = &DAT_7100d210f0;
  if ((*(byte *)(lVar24 + 0x20) & 1) != 0) {
    FUN_71007b6ec0(&local_10,0x20);
  }
  local_8 = &DAT_7100d210f0;
  FUN_71007b6ec0(&local_8,0x20);
  local_68 = 0;
  bVar4 = false;
  iVar15 = 0;
  local_18 = *(undefined4 *)(lVar24 + 0x68);
  iVar23 = 0;
  bVar2 = false;
  local_98 = 0;
LAB_71007f0dd0:
  do {
    bVar10 = *(byte *)((long)&local_18 + (long)iVar15);
    iVar13 = (int)uVar25;
    uVar14 = (uint)uVar22;
    if (bVar10 == 2) {
      if ((*(uint *)(param_6 + 0x18) >> 9 & 1) == 0) {
        while (iVar15 != 0 && local_98 < 2) {
          if (iVar15 == 1) {
            if (((local_50 != 0) || ((char)local_18 == '\x03')) || (local_18._2_1_ == 1)) break;
            if (local_18._2_1_ != 2) {
              iVar15 = 2;
              bVar10 = local_18._2_1_;
              if (2 < local_18._2_1_) goto LAB_71007f0f68;
              if (local_18._2_1_ != 0) goto LAB_71007f0de8;
              uVar16 = 1;
              goto LAB_71007f0e24;
            }
            iVar15 = 2;
          }
          else {
            if (iVar15 != 2) goto LAB_71007f140c;
            if ((local_18._3_1_ == 4) || (local_50 != 0 && local_18._3_1_ == 3)) break;
            if (local_18._3_1_ != 2) {
              iVar15 = 3;
              bVar10 = local_18._3_1_;
              if (2 < local_18._3_1_) goto LAB_71007f0f68;
              if (local_18._3_1_ == 0) goto LAB_71007f1284;
              goto LAB_71007f0de8;
            }
            iVar15 = 3;
          }
        }
      }
      bVar7 = uVar14 == 0xffffffff;
      uVar18 = *(ulong *)(lVar24 + 0x38);
      if (param_2 != (long *)0x0 && bVar7) {
        uVar28 = 0;
        goto LAB_71007f1698;
      }
      uVar28 = 0;
      do {
        bVar9 = iVar13 == -1;
        bVar8 = bVar7;
        bVar5 = param_4 != (long *)0x0 && bVar9;
        if (param_4 != (long *)0x0 && bVar9) goto LAB_71007f16e0;
LAB_71007f164c:
        uVar14 = (uint)uVar22;
        if (!(bool)(uVar28 < uVar18 & (bVar9 ^ bVar7))) {
          if (uVar18 == uVar28) goto joined_r0x0071007f15c0;
LAB_71007f1744:
          if (uVar28 != 0) goto LAB_71007f14d8;
          iVar15 = iVar15 + 1;
          uVar16 = (uint)(*(ulong *)(param_6 + 0x18) >> 9) & 1 ^ 1;
          uVar14 = (uint)(uVar16 != 0 && iVar15 != 4);
          goto LAB_71007f1258;
        }
        if (param_2 != (long *)0x0 && bVar8) {
          if ((int *)param_2[2] < (int *)param_2[3]) {
            iVar12 = *(int *)param_2[2];
          }
          else {
            iVar12 = (**(code **)(*param_2 + 0x48))(param_2);
          }
          if (iVar12 == -1) {
            param_2 = (long *)0x0;
          }
          if (*(int *)(*(long *)(lVar24 + 0x30) + uVar28 * 4) != iVar12) goto LAB_71007f1744;
        }
        else if (*(uint *)(*(long *)(lVar24 + 0x30) + uVar28 * 4) != uVar14) goto LAB_71007f1744;
        if ((ulong)param_2[2] < (ulong)param_2[3]) {
          uVar28 = uVar28 + 1;
          param_2[2] = param_2[2] + 4;
        }
        else {
          (**(code **)(*param_2 + 0x50))(param_2);
          uVar28 = uVar28 + 1;
        }
LAB_71007f1698:
        if ((uint *)param_2[2] < (uint *)param_2[3]) {
          uVar14 = *(uint *)param_2[2];
        }
        else {
          uVar14 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        uVar22 = (ulong)uVar14;
        bVar8 = true;
        if (uVar14 != 0xffffffff) {
          bVar9 = iVar13 == -1;
          uVar22 = 0xffffffff;
          bVar7 = false;
          bVar5 = param_4 != (long *)0x0 && bVar9;
          if (param_4 != (long *)0x0 && bVar9) {
LAB_71007f16e0:
            bVar9 = bVar5;
            if ((int *)param_4[2] < (int *)param_4[3]) {
              iVar12 = *(int *)param_4[2];
            }
            else {
              iVar12 = (**(code **)(*param_4 + 0x48))(param_4);
            }
            if (iVar12 == -1) {
              param_4 = (long *)0x0;
            }
            else {
              bVar9 = false;
            }
          }
          goto LAB_71007f164c;
        }
        bVar7 = true;
        param_2 = (long *)0x0;
      } while( true );
    }
    if (bVar10 < 3) {
      if (bVar10 == 0) {
        uVar16 = 1;
LAB_71007f12cc:
        iVar13 = (int)uVar25;
      }
      else {
LAB_71007f0de8:
        local_38 = CONCAT44(local_38._4_4_,iVar13);
        local_40 = param_4;
        local_30 = param_2;
        local_28 = uVar14;
        uVar22 = FUN_71007e8c60(&local_30,&local_40);
        param_4 = local_40;
        iVar13 = (int)local_38;
        uVar25 = local_38 & 0xffffffff;
        if ((uVar22 & 1) == 0) {
          uVar11 = FUN_71007cc080(&local_30);
          param_2 = local_30;
          uVar22 = (ulong)local_28;
          uVar14 = (**(code **)(*plVar27 + 0x10))(plVar27,8,uVar11);
          uVar16 = uVar14 & 0xff;
          if ((uVar14 & 1) == 0) goto LAB_71007f12cc;
          FUN_71007e3fa0(param_2);
          if (iVar15 != 3) {
            bVar7 = iVar13 == -1;
            goto LAB_71007f0e9c;
          }
          uVar22 = 0xffffffff;
          goto LAB_71007f12d4;
        }
        uVar16 = 0;
        uVar22 = (ulong)local_28;
        param_2 = local_30;
      }
      if (iVar15 == 3) goto LAB_71007f12d4;
LAB_71007f0e24:
      bVar7 = (int)uVar25 == -1;
      bVar8 = (int)uVar22 == -1;
      if (param_2 != (long *)0x0 && bVar8) goto LAB_71007f0e9c;
LAB_71007f0e44:
      bVar5 = param_4 == (long *)0x0 || bVar7 == false;
      bVar9 = bVar8;
      if (param_4 != (long *)0x0 && bVar7 != false) goto LAB_71007f0ed0;
      while (bVar7 != bVar8) {
        while( true ) {
          if (param_2 != (long *)0x0 && bVar9 != false) {
            if ((int *)param_2[2] < (int *)param_2[3]) {
              iVar13 = *(int *)param_2[2];
            }
            else {
              iVar13 = (**(code **)(*param_2 + 0x48))(param_2,*(code **)(*param_2 + 0x48),uVar22);
            }
            if (iVar13 == -1) {
              param_2 = (long *)0x0;
            }
          }
          uVar18 = (**(code **)(*plVar27 + 0x10))(plVar27,8);
          if ((uVar18 & 1) == 0) goto LAB_71007f0f00;
          if ((ulong)param_2[2] < (ulong)param_2[3]) {
            param_2[2] = param_2[2] + 4;
          }
          else {
            (**(code **)(*param_2 + 0x50))(param_2);
          }
LAB_71007f0e9c:
          if ((uint *)param_2[2] < (uint *)param_2[3]) {
            uVar14 = *(uint *)param_2[2];
          }
          else {
            uVar14 = (**(code **)(*param_2 + 0x48))(param_2);
          }
          uVar22 = (ulong)uVar14;
          if (uVar14 == 0xffffffff) {
            bVar8 = true;
            param_2 = (long *)0x0;
            goto LAB_71007f0e44;
          }
          uVar22 = 0xffffffff;
          bVar5 = param_4 == (long *)0x0 || bVar7 == false;
          bVar9 = true;
          bVar8 = false;
          if (bVar5) break;
LAB_71007f0ed0:
          if ((int *)param_4[2] < (int *)param_4[3]) {
            iVar13 = *(int *)param_4[2];
          }
          else {
            iVar13 = (**(code **)(*param_4 + 0x48))(param_4);
          }
          if (iVar13 == -1) {
            param_4 = (long *)0x0;
          }
          if ((iVar13 == -1 && !bVar5) == bVar8) goto LAB_71007f0f00;
        }
      }
LAB_71007f0f00:
      iVar15 = iVar15 + 1;
      uVar14 = uVar16;
LAB_71007f1258:
      iVar13 = (int)uVar25;
      if ((uVar14 & 1) == 0) goto LAB_71007f12d4;
      goto LAB_71007f0dd0;
    }
LAB_71007f0f68:
    if (bVar10 != 3) {
      if (bVar10 == 4) {
        bVar7 = uVar14 == 0xffffffff;
        if (param_2 != (long *)0x0 && bVar7) goto LAB_71007f1058;
LAB_71007f0f90:
        bVar8 = param_4 != (long *)0x0 && iVar13 == -1;
        bVar9 = bVar7;
        if (param_4 != (long *)0x0 && iVar13 == -1) goto LAB_71007f10a0;
LAB_71007f0fa8:
        if ((iVar13 == -1) != bVar9) {
          do {
            iVar12 = (int)uVar22;
            if (param_2 != (long *)0x0 && bVar7) {
              if ((int *)param_2[2] < (int *)param_2[3]) {
                iVar12 = *(int *)param_2[2];
              }
              else {
                iVar12 = (**(code **)(*param_2 + 0x48))(param_2);
              }
              if (iVar12 == -1) {
                param_2 = (long *)0x0;
              }
              lVar17 = FUN_710081d880(lVar24 + 0x70,iVar12,10);
              if (lVar17 != 0) {
                cVar1 = PTR_DAT_7100af47a0[lVar17 - (lVar24 + 0x6c) >> 2];
                goto LAB_71007f0fec;
              }
LAB_71007f10e8:
              if (*(int *)(lVar24 + 0x24) == iVar12) {
                if ((bVar2) || (*(int *)(lVar24 + 0x60) < 1)) break;
                bVar2 = true;
                local_68 = iVar23;
              }
              else {
                if ((((*(byte *)(lVar24 + 0x20) & 1) == 0) || (*(int *)(lVar24 + 0x28) != iVar12))
                   || (bVar2)) break;
                if (iVar23 == 0) {
                  uVar16 = 0;
                  goto LAB_71007f12d4;
                }
                lVar17 = *(long *)(local_10 + -0x18);
                uVar22 = lVar17 + 1;
                if ((*(ulong *)(local_10 + -0x10) < uVar22) ||
                   (0 < (int)*(undefined8 *)(local_10 + -8))) {
                  FUN_71007b6ec0(&local_10,uVar22);
                }
                local_10[*(long *)(local_10 + -0x18)] = (char)iVar23;
                if (local_10 + -0x18 != &DAT_7100d210d8) {
                  *(ulong *)(local_10 + -0x18) = uVar22;
                  *(undefined4 *)(local_10 + -8) = 0;
                  (local_10 + -0x18)[lVar17 + 0x19] = 0;
                }
              }
              iVar23 = 0;
              uVar22 = param_2[2];
              if (uVar22 < (ulong)param_2[3]) goto LAB_71007f1050;
LAB_71007f1170:
              (**(code **)(*param_2 + 0x50))(param_2);
              puVar19 = (uint *)param_2[2];
              if (puVar19 < (uint *)param_2[3]) goto LAB_71007f1064;
LAB_71007f118c:
              uVar18 = (**(code **)(*param_2 + 0x48))(param_2);
              uVar22 = uVar18 & 0xffffffff;
              uVar14 = (uint)uVar18;
            }
            else {
              lVar17 = FUN_710081d880(lVar24 + 0x70,uVar22,10);
              if (lVar17 == 0) goto LAB_71007f10e8;
              cVar1 = PTR_DAT_7100af47a0[lVar17 - (lVar24 + 0x6c) >> 2];
LAB_71007f0fec:
              lVar17 = *(long *)(local_8 + -0x18);
              uVar22 = lVar17 + 1;
              if ((*(ulong *)(local_8 + -0x10) < uVar22) || (0 < (int)*(undefined8 *)(local_8 + -8))
                 ) {
                FUN_71007b6ec0(&local_8,uVar22);
              }
              local_8[*(long *)(local_8 + -0x18)] = cVar1;
              if (local_8 + -0x18 != &DAT_7100d210d8) {
                *(ulong *)(local_8 + -0x18) = uVar22;
                local_8[-8] = '\0';
                local_8[-7] = '\0';
                local_8[-6] = '\0';
                local_8[-5] = '\0';
                (local_8 + -0x18)[lVar17 + 0x19] = '\0';
              }
              uVar22 = param_2[2];
              iVar23 = iVar23 + 1;
              if ((ulong)param_2[3] <= uVar22) goto LAB_71007f1170;
LAB_71007f1050:
              param_2[2] = uVar22 + 4;
LAB_71007f1058:
              puVar19 = (uint *)param_2[2];
              if ((uint *)param_2[3] <= puVar19) goto LAB_71007f118c;
LAB_71007f1064:
              uVar14 = *puVar19;
              uVar22 = (ulong)uVar14;
            }
            if (uVar14 == 0xffffffff) {
              param_2 = (long *)0x0;
              bVar7 = true;
              goto LAB_71007f0f90;
            }
            uVar22 = 0xffffffff;
            bVar7 = true;
            bVar8 = param_4 != (long *)0x0 && iVar13 == -1;
            bVar9 = false;
            if (param_4 == (long *)0x0 || iVar13 != -1) goto LAB_71007f0fa8;
LAB_71007f10a0:
            if ((int *)param_4[2] < (int *)param_4[3]) {
              iVar12 = *(int *)param_4[2];
            }
            else {
              iVar12 = (**(code **)(*param_4 + 0x48))(param_4);
            }
            if (iVar12 == -1) {
              param_4 = (long *)0x0;
            }
            else {
              bVar8 = false;
            }
            if (bVar8 == bVar9) break;
          } while( true );
        }
        bVar7 = iVar15 != 3;
        iVar15 = iVar15 + 1;
        uVar16 = (uint)(*(long *)(local_8 + -0x18) != 0);
        uVar14 = (uint)(bVar7 && uVar16 != 0);
        goto LAB_71007f1258;
      }
joined_r0x0071007f15c0:
      iVar15 = iVar15 + 1;
      if (iVar15 == 4) break;
      goto LAB_71007f0dd0;
    }
    if (*(long *)(lVar24 + 0x48) == 0) {
      if (*(long *)(lVar24 + 0x58) != 0) {
LAB_71007f17d4:
        local_38 = CONCAT44(local_38._4_4_,iVar13);
        local_40 = param_4;
        local_30 = param_2;
        local_28 = uVar14;
        uVar22 = FUN_71007e8c60(&local_30,&local_40);
        param_4 = local_40;
        iVar13 = (int)local_38;
        uVar25 = local_38 & 0xffffffff;
        if (((uVar22 & 1) == 0) &&
           (iVar12 = FUN_71007cc080(&local_30), param_2 = local_30,
           **(int **)(lVar24 + 0x50) == iVar12)) {
          local_98 = *(ulong *)(lVar24 + 0x58);
          FUN_71007e3fa0(local_30);
          bVar4 = true;
          uVar22 = 0xffffffff;
          goto joined_r0x0071007f15c0;
        }
        uVar22 = (ulong)local_28;
        param_2 = local_30;
        if (*(long *)(lVar24 + 0x48) != 0) {
          lVar17 = *(long *)(lVar24 + 0x58);
          goto joined_r0x0071007f180c;
        }
      }
LAB_71007f12a4:
      iVar15 = iVar15 + 1;
      uVar16 = local_50 ^ 1;
      uVar14 = (uint)(uVar16 != 0 && iVar15 != 4);
      goto LAB_71007f1258;
    }
    local_38 = CONCAT44(local_38._4_4_,iVar13);
    local_40 = param_4;
    local_30 = param_2;
    local_28 = uVar14;
    uVar22 = FUN_71007e8c60(&local_30);
    param_4 = local_40;
    iVar13 = (int)local_38;
    uVar25 = local_38 & 0xffffffff;
    if (((uVar22 & 1) != 0) ||
       (iVar12 = FUN_71007cc080(&local_30), param_2 = local_30, **(int **)(lVar24 + 0x40) != iVar12)
       ) {
      uVar22 = (ulong)local_28;
      param_2 = local_30;
      uVar14 = local_28;
      if (*(long *)(lVar24 + 0x58) != 0) goto LAB_71007f17d4;
      lVar17 = *(long *)(lVar24 + 0x48);
joined_r0x0071007f180c:
      local_30 = param_2;
      if (lVar17 == 0) {
        iVar13 = (int)uVar25;
        bVar4 = true;
        goto joined_r0x0071007f15c0;
      }
      goto LAB_71007f12a4;
    }
    local_98 = *(ulong *)(lVar24 + 0x48);
    FUN_71007e3fa0(local_30);
    iVar15 = iVar15 + 1;
    uVar22 = 0xffffffff;
  } while (iVar15 != 4);
LAB_71007f1284:
  uVar16 = 1;
LAB_71007f12d4:
  uVar14 = (uint)uVar22;
  bVar8 = uVar16 != 0;
  bVar7 = (bVar8 && local_98 != 0) && (uVar16 == 0 || local_98 != 1);
  if (bVar8 && 1 < local_98) {
    if (bVar4) {
      lVar17 = *(long *)(lVar24 + 0x50);
    }
    else {
      lVar17 = *(long *)(lVar24 + 0x40);
    }
    if (param_2 != (long *)0x0 && uVar14 == 0xffffffff) {
      uVar25 = 1;
      goto LAB_71007f1378;
    }
    uVar25 = 1;
    bVar8 = uVar14 == 0xffffffff;
LAB_71007f1314:
    bVar6 = param_4 == (long *)0x0 || iVar13 != -1;
    bVar9 = bVar8;
    bVar5 = bVar8;
    if (param_4 != (long *)0x0 && iVar13 == -1) goto LAB_71007f13c0;
    while (uVar14 = (uint)uVar22, (bool)(uVar25 < local_98 & (iVar13 == -1 ^ bVar8))) {
      while( true ) {
        uVar14 = (uint)uVar22;
        uVar16 = uVar14;
        if (param_2 != (long *)0x0 && bVar9) {
          if ((uint *)param_2[2] < (uint *)param_2[3]) {
            uVar16 = *(uint *)param_2[2];
          }
          else {
            uVar16 = (**(code **)(*param_2 + 0x48))(param_2);
          }
          if (uVar16 == 0xffffffff) {
            param_2 = (long *)0x0;
          }
        }
        if (*(uint *)(lVar17 + uVar25 * 4) != uVar16) goto LAB_71007f14d8;
        if ((ulong)param_2[2] < (ulong)param_2[3]) {
          uVar25 = uVar25 + 1;
          param_2[2] = param_2[2] + 4;
        }
        else {
          (**(code **)(*param_2 + 0x50))(param_2);
          uVar25 = uVar25 + 1;
        }
LAB_71007f1378:
        if ((uint *)param_2[2] < (uint *)param_2[3]) {
          uVar14 = *(uint *)param_2[2];
        }
        else {
          uVar14 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        uVar22 = (ulong)uVar14;
        if (uVar14 == 0xffffffff) {
          param_2 = (long *)0x0;
          bVar8 = bVar7;
          goto LAB_71007f1314;
        }
        uVar22 = 0xffffffff;
        bVar6 = param_4 == (long *)0x0 || iVar13 != -1;
        bVar8 = false;
        bVar5 = false;
        bVar9 = bVar7;
        if (bVar6) break;
LAB_71007f13c0:
        uVar14 = (uint)uVar22;
        if ((int *)param_4[2] < (int *)param_4[3]) {
          iVar15 = *(int *)param_4[2];
        }
        else {
          iVar15 = (**(code **)(*param_4 + 0x48))(param_4);
        }
        if (iVar15 == -1) {
          param_4 = (long *)0x0;
        }
        if (!(bool)(uVar25 < local_98 & ((iVar15 == -1 && !bVar6) ^ bVar5))) goto LAB_71007f1400;
      }
    }
LAB_71007f1400:
    if (local_98 == uVar25) {
LAB_71007f140c:
      if ((1 < *(ulong *)(local_8 + -0x18)) &&
         (uVar22 = FUN_71007b67c0(&local_8,0x30,0), uVar22 != 0)) {
        uVar18 = *(ulong *)(local_8 + -0x18);
        uVar25 = uVar18 - 1;
        if (uVar22 != 0xffffffffffffffff) {
          uVar25 = uVar22;
        }
        if (uVar18 < uVar25) {
          uVar25 = uVar18;
        }
        FUN_71007b6940(&local_8,0,uVar25,0);
      }
      if (bVar4) {
        if (-1 < *(int *)(local_8 + -8)) {
          FUN_71007b6b20(&local_8);
        }
        if (*local_8 != '0') {
          if (-1 < *(int *)(local_8 + -8)) {
            FUN_71007b6b20(&local_8);
          }
          FUN_71007b6bc0(&local_8,0,0,1,0x2d);
          local_8[-8] = -1;
          local_8[-7] = -1;
          local_8[-6] = -1;
          local_8[-5] = -1;
        }
      }
      if (*(long *)(local_10 + -0x18) != 0) {
        if (!bVar2) {
          local_68 = iVar23;
        }
        FUN_71007b7300(&local_10,local_68);
        uVar22 = FUN_71007fbd00(*(undefined8 *)(lVar24 + 0x10),*(undefined8 *)(lVar24 + 0x18),
                                &local_10);
        if ((uVar22 & 1) == 0) {
          *param_7 = *param_7 | 4;
        }
      }
      if ((!bVar2) || (*(int *)(lVar24 + 0x60) == iVar23)) {
        FUN_71007b6780(param_8,&local_8);
        goto LAB_71007f14e8;
      }
    }
  }
  else if ((uVar16 & 1) != 0) goto LAB_71007f140c;
LAB_71007f14d8:
  *param_7 = *param_7 | 4;
LAB_71007f14e8:
  local_38 = CONCAT44(local_38._4_4_,iVar13);
  local_40 = param_4;
  local_30 = param_2;
  local_28 = uVar14;
  uVar22 = FUN_71007e8c60(&local_30,&local_40);
  if ((uVar22 & 1) != 0) {
    *param_7 = *param_7 | 2;
  }
  auVar3._8_4_ = local_28;
  auVar3._0_8_ = local_30;
  auVar3._12_4_ = uStack_24;
  if (local_8 + -0x18 != &DAT_7100d210d8) {
    piVar21 = (int *)(local_8 + -8);
    do {
      iVar23 = *piVar21;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar21,0x10);
      if (bVar2) {
        *piVar21 = iVar23 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar23 < 1) {
      thunk_FUN_710081c200(local_8 + -0x18,auStack_20);
    }
  }
  if (local_10 + -0x18 != &DAT_7100d210d8) {
    piVar21 = (int *)(local_10 + -8);
    do {
      iVar23 = *piVar21;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar21,0x10);
      if (bVar2) {
        *piVar21 = iVar23 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar23 < 1) {
      thunk_FUN_710081c200(local_10 + -0x18,auStack_20);
    }
  }
  return auVar3;
}



// ===== FUN_71007f1cc0 @ 71007f1cc0 (size=3992) =====

undefined1  [16]
FUN_71007f1cc0(undefined8 param_1,long *param_2,ulong param_3,long *param_4,ulong param_5,
              long param_6,uint *param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  uint *puVar19;
  undefined8 *puVar20;
  int *piVar21;
  ulong uVar22;
  int iVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  long *plVar27;
  ulong uVar28;
  ulong local_98;
  int local_68;
  uint local_50;
  long *local_40;
  ulong local_38;
  long *local_30;
  uint local_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [8];
  undefined4 local_18;
  undefined1 *local_10;
  char *local_8;
  
  uVar25 = param_5 & 0xffffffff;
  uVar22 = param_3 & 0xffffffff;
  local_28 = (uint)param_3;
  uStack_24 = (undefined4)(param_3 >> 0x20);
  local_40 = param_4;
  local_38 = param_5;
  local_30 = param_2;
  lVar17 = FUN_71007b00e0(&DAT_7100d21118);
  plVar27 = *(long **)(*(long *)(*(long *)(param_6 + 0xd0) + 8) + lVar17 * 8);
  if (plVar27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003a84();
  }
  lVar17 = FUN_71007b00e0(&DAT_7100d22848);
  lVar26 = *(long *)(*(long *)(param_6 + 0xd0) + 0x18);
  lVar24 = *(long *)(lVar26 + lVar17 * 8);
  if (lVar24 == 0) {
    puVar20 = (undefined8 *)FUN_71007af5c0(0xa0);
    *(undefined4 *)(puVar20 + 1) = 0;
    puVar20[2] = 0;
    puVar20[3] = 0;
    *puVar20 = &PTR_FUN_7100aef2d0;
    *(undefined1 *)(puVar20 + 4) = 0;
    *(undefined8 *)((long)puVar20 + 0x24) = 0;
    puVar20[6] = 0;
    puVar20[7] = 0;
    puVar20[8] = 0;
    puVar20[9] = 0;
    puVar20[10] = 0;
    puVar20[0xb] = 0;
    *(undefined4 *)(puVar20 + 0xc) = 0;
    *(undefined8 *)((long)puVar20 + 100) = 0;
    *(undefined1 *)(puVar20 + 0x13) = 0;
    FUN_71007e5240(puVar20,param_6 + 0xd0);
    FUN_71007b05e0(*(undefined8 *)(param_6 + 0xd0),puVar20,lVar17);
    lVar24 = *(long *)(lVar26 + lVar17 * 8);
  }
  if (*(long *)(lVar24 + 0x48) == 0) {
    local_50 = 0;
  }
  else {
    local_50 = (uint)(*(long *)(lVar24 + 0x58) != 0);
  }
  local_10 = &DAT_7100d210f0;
  if ((*(byte *)(lVar24 + 0x20) & 1) != 0) {
    FUN_71007b6ec0(&local_10,0x20);
  }
  local_8 = &DAT_7100d210f0;
  FUN_71007b6ec0(&local_8,0x20);
  local_68 = 0;
  bVar4 = false;
  iVar15 = 0;
  local_18 = *(undefined4 *)(lVar24 + 0x68);
  iVar23 = 0;
  bVar2 = false;
  local_98 = 0;
LAB_71007f1dd0:
  do {
    bVar10 = *(byte *)((long)&local_18 + (long)iVar15);
    iVar13 = (int)uVar25;
    uVar14 = (uint)uVar22;
    if (bVar10 == 2) {
      if ((*(uint *)(param_6 + 0x18) >> 9 & 1) == 0) {
        while (iVar15 != 0 && local_98 < 2) {
          if (iVar15 == 1) {
            if (((local_50 != 0) || ((char)local_18 == '\x03')) || (local_18._2_1_ == 1)) break;
            if (local_18._2_1_ != 2) {
              iVar15 = 2;
              bVar10 = local_18._2_1_;
              if (2 < local_18._2_1_) goto LAB_71007f1f68;
              if (local_18._2_1_ != 0) goto LAB_71007f1de8;
              uVar16 = 1;
              goto LAB_71007f1e24;
            }
            iVar15 = 2;
          }
          else {
            if (iVar15 != 2) goto LAB_71007f240c;
            if ((local_18._3_1_ == 4) || (local_50 != 0 && local_18._3_1_ == 3)) break;
            if (local_18._3_1_ != 2) {
              iVar15 = 3;
              bVar10 = local_18._3_1_;
              if (2 < local_18._3_1_) goto LAB_71007f1f68;
              if (local_18._3_1_ == 0) goto LAB_71007f2284;
              goto LAB_71007f1de8;
            }
            iVar15 = 3;
          }
        }
      }
      bVar7 = uVar14 == 0xffffffff;
      uVar18 = *(ulong *)(lVar24 + 0x38);
      if (param_2 != (long *)0x0 && bVar7) {
        uVar28 = 0;
        goto LAB_71007f2698;
      }
      uVar28 = 0;
      do {
        bVar9 = iVar13 == -1;
        bVar8 = bVar7;
        bVar5 = param_4 != (long *)0x0 && bVar9;
        if (param_4 != (long *)0x0 && bVar9) goto LAB_71007f26e0;
LAB_71007f264c:
        uVar14 = (uint)uVar22;
        if (!(bool)(uVar28 < uVar18 & (bVar9 ^ bVar7))) {
          if (uVar18 == uVar28) goto joined_r0x0071007f25c0;
LAB_71007f2744:
          if (uVar28 != 0) goto LAB_71007f24d8;
          iVar15 = iVar15 + 1;
          uVar16 = (uint)(*(ulong *)(param_6 + 0x18) >> 9) & 1 ^ 1;
          uVar14 = (uint)(uVar16 != 0 && iVar15 != 4);
          goto LAB_71007f2258;
        }
        if (param_2 != (long *)0x0 && bVar8) {
          if ((int *)param_2[2] < (int *)param_2[3]) {
            iVar12 = *(int *)param_2[2];
          }
          else {
            iVar12 = (**(code **)(*param_2 + 0x48))(param_2);
          }
          if (iVar12 == -1) {
            param_2 = (long *)0x0;
          }
          if (*(int *)(*(long *)(lVar24 + 0x30) + uVar28 * 4) != iVar12) goto LAB_71007f2744;
        }
        else if (*(uint *)(*(long *)(lVar24 + 0x30) + uVar28 * 4) != uVar14) goto LAB_71007f2744;
        if ((ulong)param_2[2] < (ulong)param_2[3]) {
          uVar28 = uVar28 + 1;
          param_2[2] = param_2[2] + 4;
        }
        else {
          (**(code **)(*param_2 + 0x50))(param_2);
          uVar28 = uVar28 + 1;
        }
LAB_71007f2698:
        if ((uint *)param_2[2] < (uint *)param_2[3]) {
          uVar14 = *(uint *)param_2[2];
        }
        else {
          uVar14 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        uVar22 = (ulong)uVar14;
        bVar8 = true;
        if (uVar14 != 0xffffffff) {
          bVar9 = iVar13 == -1;
          uVar22 = 0xffffffff;
          bVar7 = false;
          bVar5 = param_4 != (long *)0x0 && bVar9;
          if (param_4 != (long *)0x0 && bVar9) {
LAB_71007f26e0:
            bVar9 = bVar5;
            if ((int *)param_4[2] < (int *)param_4[3]) {
              iVar12 = *(int *)param_4[2];
            }
            else {
              iVar12 = (**(code **)(*param_4 + 0x48))(param_4);
            }
            if (iVar12 == -1) {
              param_4 = (long *)0x0;
            }
            else {
              bVar9 = false;
            }
          }
          goto LAB_71007f264c;
        }
        bVar7 = true;
        param_2 = (long *)0x0;
      } while( true );
    }
    if (bVar10 < 3) {
      if (bVar10 == 0) {
        uVar16 = 1;
LAB_71007f22cc:
        iVar13 = (int)uVar25;
      }
      else {
LAB_71007f1de8:
        local_38 = CONCAT44(local_38._4_4_,iVar13);
        local_40 = param_4;
        local_30 = param_2;
        local_28 = uVar14;
        uVar22 = FUN_71007e8c60(&local_30,&local_40);
        param_4 = local_40;
        iVar13 = (int)local_38;
        uVar25 = local_38 & 0xffffffff;
        if ((uVar22 & 1) == 0) {
          uVar11 = FUN_71007cc080(&local_30);
          param_2 = local_30;
          uVar22 = (ulong)local_28;
          uVar14 = (**(code **)(*plVar27 + 0x10))(plVar27,8,uVar11);
          uVar16 = uVar14 & 0xff;
          if ((uVar14 & 1) == 0) goto LAB_71007f22cc;
          FUN_71007e3fa0(param_2);
          if (iVar15 != 3) {
            bVar7 = iVar13 == -1;
            goto LAB_71007f1e9c;
          }
          uVar22 = 0xffffffff;
          goto LAB_71007f22d4;
        }
        uVar16 = 0;
        uVar22 = (ulong)local_28;
        param_2 = local_30;
      }
      if (iVar15 == 3) goto LAB_71007f22d4;
LAB_71007f1e24:
      bVar7 = (int)uVar25 == -1;
      bVar8 = (int)uVar22 == -1;
      if (param_2 != (long *)0x0 && bVar8) goto LAB_71007f1e9c;
LAB_71007f1e44:
      bVar5 = param_4 == (long *)0x0 || bVar7 == false;
      bVar9 = bVar8;
      if (param_4 != (long *)0x0 && bVar7 != false) goto LAB_71007f1ed0;
      while (bVar7 != bVar8) {
        while( true ) {
          if (param_2 != (long *)0x0 && bVar9 != false) {
            if ((int *)param_2[2] < (int *)param_2[3]) {
              iVar13 = *(int *)param_2[2];
            }
            else {
              iVar13 = (**(code **)(*param_2 + 0x48))(param_2,*(code **)(*param_2 + 0x48),uVar22);
            }
            if (iVar13 == -1) {
              param_2 = (long *)0x0;
            }
          }
          uVar18 = (**(code **)(*plVar27 + 0x10))(plVar27,8);
          if ((uVar18 & 1) == 0) goto LAB_71007f1f00;
          if ((ulong)param_2[2] < (ulong)param_2[3]) {
            param_2[2] = param_2[2] + 4;
          }
          else {
            (**(code **)(*param_2 + 0x50))(param_2);
          }
LAB_71007f1e9c:
          if ((uint *)param_2[2] < (uint *)param_2[3]) {
            uVar14 = *(uint *)param_2[2];
          }
          else {
            uVar14 = (**(code **)(*param_2 + 0x48))(param_2);
          }
          uVar22 = (ulong)uVar14;
          if (uVar14 == 0xffffffff) {
            bVar8 = true;
            param_2 = (long *)0x0;
            goto LAB_71007f1e44;
          }
          uVar22 = 0xffffffff;
          bVar5 = param_4 == (long *)0x0 || bVar7 == false;
          bVar9 = true;
          bVar8 = false;
          if (bVar5) break;
LAB_71007f1ed0:
          if ((int *)param_4[2] < (int *)param_4[3]) {
            iVar13 = *(int *)param_4[2];
          }
          else {
            iVar13 = (**(code **)(*param_4 + 0x48))(param_4);
          }
          if (iVar13 == -1) {
            param_4 = (long *)0x0;
          }
          if ((iVar13 == -1 && !bVar5) == bVar8) goto LAB_71007f1f00;
        }
      }
LAB_71007f1f00:
      iVar15 = iVar15 + 1;
      uVar14 = uVar16;
LAB_71007f2258:
      iVar13 = (int)uVar25;
      if ((uVar14 & 1) == 0) goto LAB_71007f22d4;
      goto LAB_71007f1dd0;
    }
LAB_71007f1f68:
    if (bVar10 != 3) {
      if (bVar10 == 4) {
        bVar7 = uVar14 == 0xffffffff;
        if (param_2 != (long *)0x0 && bVar7) goto LAB_71007f2058;
LAB_71007f1f90:
        bVar8 = param_4 != (long *)0x0 && iVar13 == -1;
        bVar9 = bVar7;
        if (param_4 != (long *)0x0 && iVar13 == -1) goto LAB_71007f20a0;
LAB_71007f1fa8:
        if ((iVar13 == -1) != bVar9) {
          do {
            iVar12 = (int)uVar22;
            if (param_2 != (long *)0x0 && bVar7) {
              if ((int *)param_2[2] < (int *)param_2[3]) {
                iVar12 = *(int *)param_2[2];
              }
              else {
                iVar12 = (**(code **)(*param_2 + 0x48))(param_2);
              }
              if (iVar12 == -1) {
                param_2 = (long *)0x0;
              }
              lVar17 = FUN_710081d880(lVar24 + 0x70,iVar12,10);
              if (lVar17 != 0) {
                cVar1 = PTR_DAT_7100af47a0[lVar17 - (lVar24 + 0x6c) >> 2];
                goto LAB_71007f1fec;
              }
LAB_71007f20e8:
              if (*(int *)(lVar24 + 0x24) == iVar12) {
                if ((bVar2) || (*(int *)(lVar24 + 0x60) < 1)) break;
                bVar2 = true;
                local_68 = iVar23;
              }
              else {
                if ((((*(byte *)(lVar24 + 0x20) & 1) == 0) || (*(int *)(lVar24 + 0x28) != iVar12))
                   || (bVar2)) break;
                if (iVar23 == 0) {
                  uVar16 = 0;
                  goto LAB_71007f22d4;
                }
                lVar17 = *(long *)(local_10 + -0x18);
                uVar22 = lVar17 + 1;
                if ((*(ulong *)(local_10 + -0x10) < uVar22) ||
                   (0 < (int)*(undefined8 *)(local_10 + -8))) {
                  FUN_71007b6ec0(&local_10,uVar22);
                }
                local_10[*(long *)(local_10 + -0x18)] = (char)iVar23;
                if (local_10 + -0x18 != &DAT_7100d210d8) {
                  *(ulong *)(local_10 + -0x18) = uVar22;
                  *(undefined4 *)(local_10 + -8) = 0;
                  (local_10 + -0x18)[lVar17 + 0x19] = 0;
                }
              }
              iVar23 = 0;
              uVar22 = param_2[2];
              if (uVar22 < (ulong)param_2[3]) goto LAB_71007f2050;
LAB_71007f2170:
              (**(code **)(*param_2 + 0x50))(param_2);
              puVar19 = (uint *)param_2[2];
              if (puVar19 < (uint *)param_2[3]) goto LAB_71007f2064;
LAB_71007f218c:
              uVar18 = (**(code **)(*param_2 + 0x48))(param_2);
              uVar22 = uVar18 & 0xffffffff;
              uVar14 = (uint)uVar18;
            }
            else {
              lVar17 = FUN_710081d880(lVar24 + 0x70,uVar22,10);
              if (lVar17 == 0) goto LAB_71007f20e8;
              cVar1 = PTR_DAT_7100af47a0[lVar17 - (lVar24 + 0x6c) >> 2];
LAB_71007f1fec:
              lVar17 = *(long *)(local_8 + -0x18);
              uVar22 = lVar17 + 1;
              if ((*(ulong *)(local_8 + -0x10) < uVar22) || (0 < (int)*(undefined8 *)(local_8 + -8))
                 ) {
                FUN_71007b6ec0(&local_8,uVar22);
              }
              local_8[*(long *)(local_8 + -0x18)] = cVar1;
              if (local_8 + -0x18 != &DAT_7100d210d8) {
                *(ulong *)(local_8 + -0x18) = uVar22;
                local_8[-8] = '\0';
                local_8[-7] = '\0';
                local_8[-6] = '\0';
                local_8[-5] = '\0';
                (local_8 + -0x18)[lVar17 + 0x19] = '\0';
              }
              uVar22 = param_2[2];
              iVar23 = iVar23 + 1;
              if ((ulong)param_2[3] <= uVar22) goto LAB_71007f2170;
LAB_71007f2050:
              param_2[2] = uVar22 + 4;
LAB_71007f2058:
              puVar19 = (uint *)param_2[2];
              if ((uint *)param_2[3] <= puVar19) goto LAB_71007f218c;
LAB_71007f2064:
              uVar14 = *puVar19;
              uVar22 = (ulong)uVar14;
            }
            if (uVar14 == 0xffffffff) {
              param_2 = (long *)0x0;
              bVar7 = true;
              goto LAB_71007f1f90;
            }
            uVar22 = 0xffffffff;
            bVar7 = true;
            bVar8 = param_4 != (long *)0x0 && iVar13 == -1;
            bVar9 = false;
            if (param_4 == (long *)0x0 || iVar13 != -1) goto LAB_71007f1fa8;
LAB_71007f20a0:
            if ((int *)param_4[2] < (int *)param_4[3]) {
              iVar12 = *(int *)param_4[2];
            }
            else {
              iVar12 = (**(code **)(*param_4 + 0x48))(param_4);
            }
            if (iVar12 == -1) {
              param_4 = (long *)0x0;
            }
            else {
              bVar8 = false;
            }
            if (bVar8 == bVar9) break;
          } while( true );
        }
        bVar7 = iVar15 != 3;
        iVar15 = iVar15 + 1;
        uVar16 = (uint)(*(long *)(local_8 + -0x18) != 0);
        uVar14 = (uint)(bVar7 && uVar16 != 0);
        goto LAB_71007f2258;
      }
joined_r0x0071007f25c0:
      iVar15 = iVar15 + 1;
      if (iVar15 == 4) break;
      goto LAB_71007f1dd0;
    }
    if (*(long *)(lVar24 + 0x48) == 0) {
      if (*(long *)(lVar24 + 0x58) != 0) {
LAB_71007f27d4:
        local_38 = CONCAT44(local_38._4_4_,iVar13);
        local_40 = param_4;
        local_30 = param_2;
        local_28 = uVar14;
        uVar22 = FUN_71007e8c60(&local_30,&local_40);
        param_4 = local_40;
        iVar13 = (int)local_38;
        uVar25 = local_38 & 0xffffffff;
        if (((uVar22 & 1) == 0) &&
           (iVar12 = FUN_71007cc080(&local_30), param_2 = local_30,
           **(int **)(lVar24 + 0x50) == iVar12)) {
          local_98 = *(ulong *)(lVar24 + 0x58);
          FUN_71007e3fa0(local_30);
          bVar4 = true;
          uVar22 = 0xffffffff;
          goto joined_r0x0071007f25c0;
        }
        uVar22 = (ulong)local_28;
        param_2 = local_30;
        if (*(long *)(lVar24 + 0x48) != 0) {
          lVar17 = *(long *)(lVar24 + 0x58);
          goto joined_r0x0071007f280c;
        }
      }
LAB_71007f22a4:
      iVar15 = iVar15 + 1;
      uVar16 = local_50 ^ 1;
      uVar14 = (uint)(uVar16 != 0 && iVar15 != 4);
      goto LAB_71007f2258;
    }
    local_38 = CONCAT44(local_38._4_4_,iVar13);
    local_40 = param_4;
    local_30 = param_2;
    local_28 = uVar14;
    uVar22 = FUN_71007e8c60(&local_30);
    param_4 = local_40;
    iVar13 = (int)local_38;
    uVar25 = local_38 & 0xffffffff;
    if (((uVar22 & 1) != 0) ||
       (iVar12 = FUN_71007cc080(&local_30), param_2 = local_30, **(int **)(lVar24 + 0x40) != iVar12)
       ) {
      uVar22 = (ulong)local_28;
      param_2 = local_30;
      uVar14 = local_28;
      if (*(long *)(lVar24 + 0x58) != 0) goto LAB_71007f27d4;
      lVar17 = *(long *)(lVar24 + 0x48);
joined_r0x0071007f280c:
      local_30 = param_2;
      if (lVar17 == 0) {
        iVar13 = (int)uVar25;
        bVar4 = true;
        goto joined_r0x0071007f25c0;
      }
      goto LAB_71007f22a4;
    }
    local_98 = *(ulong *)(lVar24 + 0x48);
    FUN_71007e3fa0(local_30);
    iVar15 = iVar15 + 1;
    uVar22 = 0xffffffff;
  } while (iVar15 != 4);
LAB_71007f2284:
  uVar16 = 1;
LAB_71007f22d4:
  uVar14 = (uint)uVar22;
  bVar8 = uVar16 != 0;
  bVar7 = (bVar8 && local_98 != 0) && (uVar16 == 0 || local_98 != 1);
  if (bVar8 && 1 < local_98) {
    if (bVar4) {
      lVar17 = *(long *)(lVar24 + 0x50);
    }
    else {
      lVar17 = *(long *)(lVar24 + 0x40);
    }
    if (param_2 != (long *)0x0 && uVar14 == 0xffffffff) {
      uVar25 = 1;
      goto LAB_71007f2378;
    }
    uVar25 = 1;
    bVar8 = uVar14 == 0xffffffff;
LAB_71007f2314:
    bVar6 = param_4 == (long *)0x0 || iVar13 != -1;
    bVar9 = bVar8;
    bVar5 = bVar8;
    if (param_4 != (long *)0x0 && iVar13 == -1) goto LAB_71007f23c0;
    while (uVar14 = (uint)uVar22, (bool)(uVar25 < local_98 & (iVar13 == -1 ^ bVar8))) {
      while( true ) {
        uVar14 = (uint)uVar22;
        uVar16 = uVar14;
        if (param_2 != (long *)0x0 && bVar9) {
          if ((uint *)param_2[2] < (uint *)param_2[3]) {
            uVar16 = *(uint *)param_2[2];
          }
          else {
            uVar16 = (**(code **)(*param_2 + 0x48))(param_2);
          }
          if (uVar16 == 0xffffffff) {
            param_2 = (long *)0x0;
          }
        }
        if (*(uint *)(lVar17 + uVar25 * 4) != uVar16) goto LAB_71007f24d8;
        if ((ulong)param_2[2] < (ulong)param_2[3]) {
          uVar25 = uVar25 + 1;
          param_2[2] = param_2[2] + 4;
        }
        else {
          (**(code **)(*param_2 + 0x50))(param_2);
          uVar25 = uVar25 + 1;
        }
LAB_71007f2378:
        if ((uint *)param_2[2] < (uint *)param_2[3]) {
          uVar14 = *(uint *)param_2[2];
        }
        else {
          uVar14 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        uVar22 = (ulong)uVar14;
        if (uVar14 == 0xffffffff) {
          param_2 = (long *)0x0;
          bVar8 = bVar7;
          goto LAB_71007f2314;
        }
        uVar22 = 0xffffffff;
        bVar6 = param_4 == (long *)0x0 || iVar13 != -1;
        bVar8 = false;
        bVar5 = false;
        bVar9 = bVar7;
        if (bVar6) break;
LAB_71007f23c0:
        uVar14 = (uint)uVar22;
        if ((int *)param_4[2] < (int *)param_4[3]) {
          iVar15 = *(int *)param_4[2];
        }
        else {
          iVar15 = (**(code **)(*param_4 + 0x48))(param_4);
        }
        if (iVar15 == -1) {
          param_4 = (long *)0x0;
        }
        if (!(bool)(uVar25 < local_98 & ((iVar15 == -1 && !bVar6) ^ bVar5))) goto LAB_71007f2400;
      }
    }
LAB_71007f2400:
    if (local_98 == uVar25) {
LAB_71007f240c:
      if ((1 < *(ulong *)(local_8 + -0x18)) &&
         (uVar22 = FUN_71007b67c0(&local_8,0x30,0), uVar22 != 0)) {
        uVar18 = *(ulong *)(local_8 + -0x18);
        uVar25 = uVar18 - 1;
        if (uVar22 != 0xffffffffffffffff) {
          uVar25 = uVar22;
        }
        if (uVar18 < uVar25) {
          uVar25 = uVar18;
        }
        FUN_71007b6940(&local_8,0,uVar25,0);
      }
      if (bVar4) {
        if (-1 < *(int *)(local_8 + -8)) {
          FUN_71007b6b20(&local_8);
        }
        if (*local_8 != '0') {
          if (-1 < *(int *)(local_8 + -8)) {
            FUN_71007b6b20(&local_8);
          }
          FUN_71007b6bc0(&local_8,0,0,1,0x2d);
          local_8[-8] = -1;
          local_8[-7] = -1;
          local_8[-6] = -1;
          local_8[-5] = -1;
        }
      }
      if (*(long *)(local_10 + -0x18) != 0) {
        if (!bVar2) {
          local_68 = iVar23;
        }
        FUN_71007b7300(&local_10,local_68);
        uVar22 = FUN_71007fbd00(*(undefined8 *)(lVar24 + 0x10),*(undefined8 *)(lVar24 + 0x18),
                                &local_10);
        if ((uVar22 & 1) == 0) {
          *param_7 = *param_7 | 4;
        }
      }
      if ((!bVar2) || (*(int *)(lVar24 + 0x60) == iVar23)) {
        FUN_71007b6780(param_8,&local_8);
        goto LAB_71007f24e8;
      }
    }
  }
  else if ((uVar16 & 1) != 0) goto LAB_71007f240c;
LAB_71007f24d8:
  *param_7 = *param_7 | 4;
LAB_71007f24e8:
  local_38 = CONCAT44(local_38._4_4_,iVar13);
  local_40 = param_4;
  local_30 = param_2;
  local_28 = uVar14;
  uVar22 = FUN_71007e8c60(&local_30,&local_40);
  if ((uVar22 & 1) != 0) {
    *param_7 = *param_7 | 2;
  }
  auVar3._8_4_ = local_28;
  auVar3._0_8_ = local_30;
  auVar3._12_4_ = uStack_24;
  if (local_8 + -0x18 != &DAT_7100d210d8) {
    piVar21 = (int *)(local_8 + -8);
    do {
      iVar23 = *piVar21;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar21,0x10);
      if (bVar2) {
        *piVar21 = iVar23 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar23 < 1) {
      thunk_FUN_710081c200(local_8 + -0x18,auStack_20);
    }
  }
  if (local_10 + -0x18 != &DAT_7100d210d8) {
    piVar21 = (int *)(local_10 + -8);
    do {
      iVar23 = *piVar21;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar21,0x10);
      if (bVar2) {
        *piVar21 = iVar23 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar23 < 1) {
      thunk_FUN_710081c200(local_10 + -0x18,auStack_20);
    }
  }
  return auVar3;
}



// ===== FUN_71007f2cc0 @ 71007f2cc0 (size=208) =====

/* WARNING: Removing unreachable block (ram,0x0071007f2d68) */
/* WARNING: Removing unreachable block (ram,0x0071007f2d6c) */
/* WARNING: Removing unreachable block (ram,0x0071007f2d74) */
/* WARNING: Removing unreachable block (ram,0x0071007f2d7c) */
/* WARNING: Removing unreachable block (ram,0x0071007f2d84) */

undefined1  [16]
FUN_71007f2cc0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
              undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8,
              undefined8 param_9)

{
  undefined1 auVar1 [16];
  undefined8 local_8;
  
  if ((param_6 & 1) == 0) {
    auVar1 = FUN_71007f1cc0();
  }
  else {
    auVar1 = FUN_71007f0cc0();
  }
  local_8 = FUN_71007afd60();
  FUN_71007fb020(&DAT_7100d210f0,param_9,param_8,&local_8);
  auVar1._8_8_ = param_3 & 0xffffffff00000000 | auVar1._8_8_ & 0xffffffff;
  return auVar1;
}



// ===== FUN_71007f2dc0 @ 71007f2dc0 (size=368) =====

undefined1  [16]
FUN_71007f2dc0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
              undefined8 param_5,ulong param_6,long param_7,undefined8 param_8,long *param_9)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_10 [8];
  undefined1 *local_8;
  
  lVar5 = FUN_71007b00e0(&DAT_7100d21118);
  plVar8 = *(long **)(*(long *)(*(long *)(param_7 + 0xd0) + 8) + lVar5 * 8);
  if (plVar8 != (long *)0x0) {
    local_8 = &DAT_7100d210f0;
    if ((param_6 & 1) == 0) {
      auVar9 = FUN_71007f1cc0(param_1,param_2,param_3,param_4,param_5,param_7,param_8,&local_8);
    }
    else {
      auVar9 = FUN_71007f0cc0(param_1,param_2,param_3,param_4,param_5,param_7,param_8,&local_8);
    }
    lVar5 = *(long *)(local_8 + -0x18);
    if (lVar5 != 0) {
      FUN_71007b7fa0(param_9,lVar5,0);
      puVar4 = local_8;
      lVar7 = *param_9;
      if (-1 < *(int *)(lVar7 + -8)) {
        FUN_71007b7800(param_9);
        lVar7 = *param_9;
      }
      (**(code **)(*plVar8 + 0x58))(plVar8,puVar4,puVar4 + lVar5,lVar7);
    }
    if (local_8 + -0x18 != &DAT_7100d210d8) {
      piVar6 = (int *)(local_8 + -8);
      do {
        iVar1 = *piVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 < 1) {
        thunk_FUN_710081c200(local_8 + -0x18,auStack_10);
      }
    }
    auVar9._8_8_ = param_3 & 0xffffffff00000000 | auVar9._8_8_ & 0xffffffff;
    return auVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003a84();
}



// ===== FUN_71007f2f60 @ 71007f2f60 (size=84) =====

void FUN_71007f2f60(undefined8 param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (0x1ffffffffffffffe < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::_M_create");
  }
  if ((param_3 < uVar1) && (param_3 = param_3 * 2, uVar1 < param_3)) {
    if (0x1ffffffffffffffe < param_3) {
      *param_2 = 0x1ffffffffffffffe;
      FUN_71007af5c0(0x7ffffffffffffffc);
      return;
    }
    *param_2 = param_3;
    uVar1 = param_3;
  }
  FUN_71007af5c0((uVar1 + 1) * 4);
  return;
}



// ===== FUN_71007f2fb4 @ 71007f2fb4 (size=20) =====

void FUN_71007f2fb4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_7100003b58("basic_string::_M_create");
}



// ===== FUN_71007f2fe0 @ 71007f2fe0 (size=24) =====

void FUN_71007f2fe0(long *param_1)

{
  if ((long *)*param_1 != param_1 + 2) {
    thunk_FUN_710081c200();
    return;
  }
  return;
}



// ===== FUN_71007f3000 @ 71007f3000 (size=152) =====

void FUN_71007f3000(long *param_1,ulong param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  ulong local_8;
  
  local_8 = param_2;
  if (param_2 < 4) {
    puVar1 = (undefined4 *)*param_1;
  }
  else {
    puVar1 = (undefined4 *)FUN_71007f2f60(param_1,&local_8,0);
    *param_1 = (long)puVar1;
    param_1[2] = local_8;
  }
  if (local_8 != 0) {
    if (local_8 == 1) {
      *puVar1 = param_3;
      param_1[1] = 1;
      puVar1[1] = 0;
      return;
    }
    FUN_710081fbc0(puVar1,param_3,local_8);
    puVar1 = (undefined4 *)*param_1;
  }
  param_1[1] = local_8;
  puVar1[local_8] = 0;
  return;
}



// ===== FUN_71007f30a0 @ 71007f30a0 (size=304) =====

void FUN_71007f30a0(undefined8 *param_1,long param_2,long param_3,undefined4 *param_4,long param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long local_8;
  
  local_8 = (param_5 - param_3) + param_1[1];
  if (param_1 + 2 == (undefined8 *)*param_1) {
    uVar3 = 3;
  }
  else {
    uVar3 = param_1[2];
  }
  param_3 = param_2 + param_3;
  lVar4 = param_1[1] - param_3;
  puVar1 = (undefined4 *)FUN_71007f2f60(param_1,&local_8,uVar3);
  if (param_2 != 0) {
    if (param_2 == 1) {
      *puVar1 = *(undefined4 *)*param_1;
    }
    else {
      FUN_710080e900(puVar1,(undefined4 *)*param_1,param_2);
    }
  }
  if (param_4 != (undefined4 *)0x0 && param_5 != 0) {
    if (param_5 == 1) {
      puVar1[param_2] = *param_4;
    }
    else {
      FUN_710080e900(puVar1 + param_2,param_4,param_5);
    }
  }
  puVar2 = (undefined8 *)*param_1;
  if (lVar4 != 0) {
    if (lVar4 == 1) {
      puVar1[param_2 + param_5] = *(undefined4 *)((long)puVar2 + param_3 * 4);
    }
    else {
      FUN_710080e900(puVar1 + param_2 + param_5,(long)puVar2 + param_3 * 4,lVar4);
      puVar2 = (undefined8 *)*param_1;
    }
  }
  if (puVar2 != param_1 + 2) {
    thunk_FUN_710081c200();
  }
  *param_1 = puVar1;
  param_1[2] = local_8;
  return;
}



// ===== FUN_71007f31e0 @ 71007f31e0 (size=180) =====

void FUN_71007f31e0(undefined8 *param_1,ulong param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong local_8;
  
  if (param_1 + 2 == (undefined8 *)*param_1) {
    uVar3 = 3;
  }
  else {
    uVar3 = param_1[2];
  }
  if (uVar3 < param_2) {
    local_8 = param_2;
    puVar1 = (undefined4 *)FUN_71007f2f60(param_1,&local_8);
    puVar2 = (undefined8 *)*param_1;
    if (param_1[1] == 0) {
      *puVar1 = *(undefined4 *)puVar2;
    }
    else {
      FUN_710080e900(puVar1,puVar2,param_1[1] + 1);
      puVar2 = (undefined8 *)*param_1;
    }
    if (param_1 + 2 != puVar2) {
      thunk_FUN_710081c200(puVar2);
    }
    *param_1 = puVar1;
    param_1[2] = local_8;
    return;
  }
  return;
}



// ===== FUN_71007f32a0 @ 71007f32a0 (size=332) =====

long * FUN_71007f32a0(long *param_1,long param_2,ulong param_3,ulong param_4,undefined4 param_5)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = param_1[1];
  if ((param_3 + 0x1ffffffffffffffe) - lVar4 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::_M_replace_aux");
  }
  plVar3 = (long *)*param_1;
  if (plVar3 == param_1 + 2) {
    uVar2 = 3;
  }
  else {
    uVar2 = param_1[2];
  }
  uVar1 = (param_4 - param_3) + lVar4;
  if (uVar2 < uVar1) {
    FUN_71007f30a0(param_1,param_2,param_3,0,param_4);
    plVar3 = (long *)*param_1;
  }
  else {
    lVar4 = lVar4 - (param_3 + param_2);
    if (lVar4 != 0 && param_3 != param_4) {
      if (lVar4 == 1) {
        *(undefined4 *)((long)plVar3 + param_4 * 4 + param_2 * 4) =
             *(undefined4 *)((long)plVar3 + param_3 * 4 + param_2 * 4);
      }
      else {
        FUN_7100806820((long)plVar3 + param_4 * 4 + param_2 * 4,
                       (long)plVar3 + param_3 * 4 + param_2 * 4,lVar4);
        plVar3 = (long *)*param_1;
      }
    }
  }
  if (param_4 != 0) {
    if (param_4 == 1) {
      *(undefined4 *)((long)plVar3 + param_2 * 4) = param_5;
      param_1[1] = uVar1;
      *(undefined4 *)((long)plVar3 + uVar1 * 4) = 0;
      return param_1;
    }
    FUN_710081fbc0((long)plVar3 + param_2 * 4,param_5,param_4);
    plVar3 = (long *)*param_1;
  }
  param_1[1] = uVar1;
  *(undefined4 *)((long)plVar3 + uVar1 * 4) = 0;
  return param_1;
}



// ===== FUN_71007f3400 @ 71007f3400 (size=56) =====

void FUN_71007f3400(long *param_1,ulong param_2,undefined4 param_3)

{
  ulong uVar1;
  
  uVar1 = param_1[1];
  if (param_2 <= uVar1) {
    if (param_2 < uVar1) {
      param_1[1] = param_2;
      *(undefined4 *)(*param_1 + param_2 * 4) = 0;
    }
    return;
  }
  FUN_71007f32a0(param_1,uVar1,0,param_2 - uVar1,param_3);
  return;
}



// ===== FUN_71007f3440 @ 71007f3440 (size=372) =====

long * FUN_71007f3440(long *param_1,long param_2,ulong param_3,long *param_4,ulong param_5)

{
  ulong uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = param_1[1];
  if ((param_3 + 0x1ffffffffffffffe) - lVar5 < param_5) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::_M_replace");
  }
  plVar6 = (long *)*param_1;
  if (plVar6 == param_1 + 2) {
    uVar3 = 3;
  }
  else {
    uVar3 = param_1[2];
  }
  uVar1 = (param_5 - param_3) + lVar5;
  if (uVar1 <= uVar3) {
    puVar2 = (undefined4 *)((long)plVar6 + param_2 * 4);
    lVar4 = lVar5 - (param_3 + param_2);
    if ((param_4 < plVar6) || ((long *)((long)plVar6 + lVar5 * 4) < param_4)) {
      if (lVar4 != 0 && param_3 != param_5) {
        if (lVar4 == 1) {
          puVar2[param_5] = puVar2[param_3];
        }
        else {
          FUN_7100806820(puVar2 + param_5,puVar2 + param_3,lVar4);
        }
      }
      if (param_5 != 0) {
        if (param_5 == 1) {
          *(int *)((long)plVar6 + param_2 * 4) = (int)*param_4;
          param_1[1] = uVar1;
          *(undefined4 *)(*param_1 + uVar1 * 4) = 0;
          return param_1;
        }
        FUN_710080e900(puVar2,param_4,param_5);
      }
    }
    else {
      FUN_7100003fac(param_1,puVar2);
    }
    param_1[1] = uVar1;
    *(undefined4 *)(*param_1 + uVar1 * 4) = 0;
    return param_1;
  }
  FUN_71007f30a0(param_1);
  param_1[1] = uVar1;
  *(undefined4 *)(*param_1 + uVar1 * 4) = 0;
  return param_1;
}



// ===== FUN_71007f35c0 @ 71007f35c0 (size=196) =====

long * FUN_71007f35c0(long *param_1,undefined4 *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  lVar2 = param_1[1];
  if (plVar4 == param_1 + 2) {
    uVar3 = 3;
  }
  else {
    uVar3 = param_1[2];
  }
  uVar1 = param_3 + lVar2;
  if (uVar1 <= uVar3) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        *(undefined4 *)((long)plVar4 + lVar2 * 4) = *param_2;
        param_1[1] = uVar1;
        *(undefined4 *)((long)plVar4 + uVar1 * 4) = 0;
        return param_1;
      }
      FUN_710080e900((long)plVar4 + lVar2 * 4);
      plVar4 = (long *)*param_1;
    }
    param_1[1] = uVar1;
    *(undefined4 *)((long)plVar4 + uVar1 * 4) = 0;
    return param_1;
  }
  FUN_71007f30a0(param_1,lVar2,0,param_2,param_3);
  param_1[1] = uVar1;
  *(undefined4 *)(*param_1 + uVar1 * 4) = 0;
  return param_1;
}



// ===== FUN_71007f36a0 @ 71007f36a0 (size=132) =====

ulong FUN_71007f36a0(long *param_1,undefined4 *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  
  if ((ulong)param_1[1] < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003bf8("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::copy",
                   param_4);
  }
  uVar1 = param_1[1] - param_4;
  if (param_3 < uVar1) {
    uVar1 = param_3;
  }
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      *param_2 = *(undefined4 *)(*param_1 + param_4 * 4);
      return 1;
    }
    FUN_710080e900(param_2,*param_1 + param_4 * 4);
  }
  return uVar1;
}



// ===== FUN_71007f3740 @ 71007f3740 (size=160) =====

void FUN_71007f3740(undefined8 *param_1,undefined4 *param_2,ulong param_3)

{
  undefined4 *puVar1;
  long lVar2;
  ulong local_8;
  
  local_8 = param_3;
  if (param_3 < 4) {
    puVar1 = (undefined4 *)*param_1;
    lVar2 = param_3 + 1;
    if (param_3 == 0) {
LAB_71007f378c:
      *puVar1 = *param_2;
      param_1[1] = 0;
      return;
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_71007f2f60(param_1,&local_8,0);
    *param_1 = puVar1;
    param_1[2] = local_8;
    lVar2 = local_8 + 1;
    if (local_8 == 0) goto LAB_71007f378c;
    if (lVar2 == 0) {
      param_1[1] = 0xffffffffffffffff;
      return;
    }
  }
  FUN_710080e900(puVar1,param_2,lVar2);
  param_1[1] = local_8;
  return;
}



// ===== FUN_71007f38c0 @ 71007f38c0 (size=740) =====

void FUN_71007f38c0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  
  if (*(long *)(param_1 + 0x60) != param_1 + 0x70) {
    thunk_FUN_710081c200(*(long *)(param_1 + 0x60),*(long *)(param_1 + 0x70) + 1);
  }
  plVar2 = *(long **)(param_1 + 0x30);
  puVar4 = *(undefined8 **)(param_1 + 0x38);
  puVar10 = *(undefined8 **)(param_1 + 0x58);
  plVar9 = *(long **)(param_1 + 0x20);
  plVar3 = *(long **)(param_1 + 0x40);
  plVar5 = *(long **)(param_1 + 0x48);
  puVar8 = puVar4;
  while (puVar8 = puVar8 + 1, puVar8 < puVar10) {
    plVar7 = (long *)*puVar8;
    plVar1 = plVar7 + 0x3c;
    do {
      if (plVar7[10] != 0) {
        FUN_71007f5e80(plVar7 + 10);
      }
      if ((long *)plVar7[6] != plVar7 + 8) {
        thunk_FUN_710081c200((long *)plVar7[6],plVar7[8] + 1);
      }
      if (plVar7[5] != 0) {
        FUN_71007f5e80(plVar7 + 5);
      }
      if ((long *)plVar7[1] != plVar7 + 3) {
        thunk_FUN_710081c200((long *)plVar7[1],plVar7[3] + 1);
      }
      if (*plVar7 != 0) {
        FUN_7100834320();
      }
      plVar7 = plVar7 + 0xc;
    } while (plVar7 != plVar1);
  }
  if (puVar4 == puVar10) {
    if (plVar9 != plVar3) {
      do {
        if (plVar9[10] != 0) {
          FUN_71007f5e80(plVar9 + 10);
        }
        if ((long *)plVar9[6] != plVar9 + 8) {
          thunk_FUN_710081c200((long *)plVar9[6],plVar9[8] + 1);
        }
        if (plVar9[5] != 0) {
          FUN_71007f5e80(plVar9 + 5);
        }
        if ((long *)plVar9[1] != plVar9 + 3) {
          thunk_FUN_710081c200((long *)plVar9[1],plVar9[3] + 1);
        }
        if (*plVar9 != 0) {
          FUN_7100834320();
        }
        plVar9 = plVar9 + 0xc;
      } while (plVar3 != plVar9);
      lVar6 = *(long *)(param_1 + 0x10);
      goto joined_r0x0071007f3b84;
    }
  }
  else {
    for (; plVar9 != plVar2; plVar9 = plVar9 + 0xc) {
      if (plVar9[10] != 0) {
        FUN_71007f5e80(plVar9 + 10);
      }
      if ((long *)plVar9[6] != plVar9 + 8) {
        thunk_FUN_710081c200((long *)plVar9[6],plVar9[8] + 1);
      }
      if (plVar9[5] != 0) {
        FUN_71007f5e80(plVar9 + 5);
      }
      if ((long *)plVar9[1] != plVar9 + 3) {
        thunk_FUN_710081c200((long *)plVar9[1],plVar9[3] + 1);
      }
      if (*plVar9 != 0) {
        FUN_7100834320();
      }
    }
    for (; plVar3 != plVar5; plVar5 = plVar5 + 0xc) {
      if (plVar5[10] != 0) {
        FUN_71007f5e80(plVar5 + 10);
      }
      if ((long *)plVar5[6] != plVar5 + 8) {
        thunk_FUN_710081c200((long *)plVar5[6],plVar5[8] + 1);
      }
      if (plVar5[5] != 0) {
        FUN_71007f5e80(plVar5 + 5);
      }
      if ((long *)plVar5[1] != plVar5 + 3) {
        thunk_FUN_710081c200((long *)plVar5[1],plVar5[3] + 1);
      }
      if (*plVar5 != 0) {
        FUN_7100834320();
      }
    }
  }
  lVar6 = *(long *)(param_1 + 0x10);
joined_r0x0071007f3b84:
  if (lVar6 == 0) {
    return;
  }
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x58) + 8);
  puVar8 = *(undefined8 **)(param_1 + 0x38);
  if (*(undefined8 **)(param_1 + 0x38) < puVar4) {
    do {
      puVar10 = puVar8 + 1;
      thunk_FUN_710081c200(*puVar8,0x1e0);
      puVar8 = puVar10;
    } while (puVar10 < puVar4);
    lVar6 = *(long *)(param_1 + 0x10);
  }
  thunk_FUN_710081c200(lVar6,*(long *)(param_1 + 0x18) << 3);
  return;
}



// ===== FUN_71007f3bc0 @ 71007f3bc0 (size=1160) =====

undefined8 FUN_71007f3bc0(undefined8 *param_1,char param_2,int *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  undefined8 ****ppppuVar7;
  long lVar8;
  ulong ***pppuVar9;
  undefined8 ***pppuVar10;
  undefined1 uVar11;
  undefined8 ***local_60;
  ulong ***local_58;
  undefined8 ***local_50;
  undefined8 ***local_48 [2];
  long local_38;
  ulong ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20 [2];
  long local_10;
  ulong local_8;
  
  uVar4 = FUN_71007e37a0();
  do {
    *param_3 = 0;
    *(undefined8 *)(param_3 + 2) = uVar4;
    piVar5 = (int *)FUN_710080e8e0();
    iVar2 = *piVar5;
    *piVar5 = 0;
    lVar6 = FUN_7100834500(*param_1);
    piVar5 = (int *)FUN_710080e8e0();
    iVar3 = *piVar5;
    *piVar5 = iVar2;
    if (lVar6 == 0) {
      if ((iVar3 != 0) && (param_2 == '\0' || iVar3 != 0xd)) {
        uVar4 = FUN_71007e37c0();
        *param_3 = iVar3;
        *(undefined8 *)(param_3 + 2) = uVar4;
        return 0;
      }
      if (*param_3 != 0) {
        return 0;
      }
      local_28 = (undefined8 ***)0x0;
      local_20[0] = (undefined8 ***)((ulong)local_20[0] & 0xffffffffffffff00);
      local_8 = 0;
      local_30 = (ulong ***)local_20;
      FUN_71007f6080(&local_10);
      ppppuVar7 = (undefined8 ****)param_1[6];
      local_8 = local_8 & 0xffffffffffffff00;
      if (ppppuVar7 == (undefined8 ****)(param_1 + 8)) {
        if ((undefined8 ****)local_30 != local_20) {
          param_1[6] = local_30;
          param_1[7] = local_28;
          param_1[8] = local_20[0];
          local_30 = (ulong ***)local_20;
          goto LAB_71007f3e8c;
        }
      }
      else if ((undefined8 ****)local_30 != local_20) {
        pppuVar10 = (undefined8 ***)param_1[8];
        param_1[6] = local_30;
        param_1[7] = local_28;
        param_1[8] = local_20[0];
        local_30 = (ulong ***)local_20;
        if (ppppuVar7 != (undefined8 ****)0x0) {
          local_30 = (ulong ***)ppppuVar7;
          local_20[0] = pppuVar10;
        }
        goto LAB_71007f3e8c;
      }
      if (local_28 != (undefined8 ***)0x0) {
        if (local_28 == (undefined8 ***)0x1) {
          *(undefined1 *)ppppuVar7 = local_20[0]._0_1_;
        }
        else {
          FUN_710080f900(ppppuVar7,local_20);
        }
        ppppuVar7 = (undefined8 ****)param_1[6];
      }
      param_1[7] = local_28;
      *(undefined1 *)((long)ppppuVar7 + (long)local_28) = 0;
LAB_71007f3e8c:
      local_28 = (undefined8 ***)0x0;
      *(undefined1 *)local_30 = 0;
      lVar6 = param_1[10];
      param_1[10] = local_10;
      local_10 = 0;
      if (lVar6 != 0) {
        FUN_71007f5e80(param_1 + 10);
      }
      local_28 = (undefined8 ***)0x0;
      *(undefined1 *)local_30 = 0;
      FUN_71007f6bc0(&local_30);
      *(undefined1 *)(param_1 + 0xb) = (undefined1)local_8;
      if (local_10 != 0) {
        FUN_71007f5e80(&local_10);
      }
      if ((undefined8 ****)local_30 != local_20) {
        thunk_FUN_710081c200(local_30,(long)local_20[0] + 1);
      }
      return 0;
    }
  } while (((*(char *)(lVar6 + 3) == '.') && (*(char *)(lVar6 + 4) == '\0')) ||
          ((*(char *)(lVar6 + 3) == '.' &&
           ((*(char *)(lVar6 + 4) == '.' && (*(char *)(lVar6 + 5) == '\0'))))));
  puVar1 = (undefined1 *)param_1[1];
  local_30 = (ulong ***)param_1[2];
  local_58 = (ulong ***)local_48;
  if (local_30 < (ulong ***)0x10) {
    lVar8 = (long)local_30 + 1;
    if (local_30 == (ulong ***)0x0) {
LAB_71007f3efc:
      *(undefined1 *)local_58 = *puVar1;
      local_50 = local_30;
    }
    else {
LAB_71007f3c78:
      FUN_710080f900(local_58,puVar1,lVar8);
      local_50 = local_30;
    }
  }
  else {
    local_58 = (ulong ***)FUN_71007e2140(&local_58,&local_30,0);
    local_48[0] = local_30;
    lVar8 = (long)local_30 + 1;
    if (local_30 == (ulong ***)0x0) goto LAB_71007f3efc;
    local_50 = (ulong ***)0xffffffffffffffff;
    if (lVar8 != 0) goto LAB_71007f3c78;
  }
  FUN_71007f84a0(&local_38,param_1 + 5);
  uVar4 = FUN_710081ce00(lVar6 + 3);
  FUN_71007f7700(&local_58,uVar4,lVar6 + 3);
  pppuVar9 = local_58;
  uVar11 = 0;
  if ((*(byte *)(lVar6 + 2) - 1 & 0xff) < 0xc) {
    uVar11 = (&DAT_71009ce360)[(uint)*(byte *)(lVar6 + 2)];
  }
  local_60 = local_50;
  local_30 = (ulong ***)local_20;
  if (local_50 < (ulong ***)0x10) {
    lVar6 = (long)local_50 + 1;
    if (local_50 == (ulong ***)0x0) {
LAB_71007f3f70:
      *(undefined1 *)local_30 = *(undefined1 *)pppuVar9;
      local_28 = local_60;
    }
    else {
LAB_71007f3cec:
      FUN_710080f900(local_30,pppuVar9,lVar6);
      local_28 = local_60;
    }
  }
  else {
    local_30 = (ulong ***)FUN_71007e2140(&local_30,&local_60,0);
    local_20[0] = local_60;
    lVar6 = (long)local_60 + 1;
    if (local_60 == (ulong ***)0x0) goto LAB_71007f3f70;
    local_28 = (ulong ***)0xffffffffffffffff;
    if (lVar6 != 0) goto LAB_71007f3cec;
  }
  FUN_71007f84a0(&local_10,&local_38);
  ppppuVar7 = (undefined8 ****)param_1[6];
  local_8 = CONCAT71(local_8._1_7_,uVar11);
  if (ppppuVar7 == (undefined8 ****)(param_1 + 8)) {
    if ((undefined8 ****)local_30 == local_20) goto LAB_71007f3fb4;
    param_1[6] = local_30;
    param_1[7] = local_28;
    param_1[8] = local_20[0];
  }
  else {
    if ((undefined8 ****)local_30 == local_20) {
LAB_71007f3fb4:
      if (local_28 != (ulong ***)0x0) {
        if (local_28 == (ulong ***)0x1) {
          *(undefined1 *)ppppuVar7 = local_20[0]._0_1_;
        }
        else {
          FUN_710080f900(ppppuVar7,local_20);
        }
        ppppuVar7 = (undefined8 ****)param_1[6];
      }
      param_1[7] = local_28;
      *(undefined1 *)((long)ppppuVar7 + (long)local_28) = 0;
      pppuVar9 = local_20[0];
      goto LAB_71007f3d48;
    }
    pppuVar9 = (ulong ***)param_1[8];
    param_1[6] = local_30;
    param_1[7] = local_28;
    param_1[8] = local_20[0];
    local_30 = (ulong ***)ppppuVar7;
    if (ppppuVar7 != (undefined8 ****)0x0) goto LAB_71007f3d48;
  }
  local_30 = (ulong ***)local_20;
  pppuVar9 = local_20[0];
LAB_71007f3d48:
  local_20[0] = pppuVar9;
  local_28 = (undefined8 ***)0x0;
  *(undefined1 *)local_30 = 0;
  lVar6 = param_1[10];
  param_1[10] = local_10;
  local_10 = 0;
  if (lVar6 != 0) {
    FUN_71007f5e80(param_1 + 10);
  }
  local_28 = (undefined8 ***)0x0;
  *(undefined1 *)local_30 = 0;
  FUN_71007f6bc0(&local_30);
  *(undefined1 *)(param_1 + 0xb) = (undefined1)local_8;
  if (local_10 != 0) {
    FUN_71007f5e80(&local_10);
  }
  if ((undefined8 ****)local_30 != local_20) {
    thunk_FUN_710081c200(local_30,(long)local_20[0] + 1);
  }
  if (local_38 != 0) {
    FUN_71007f5e80(&local_38);
  }
  if ((undefined8 ****)local_58 != local_48) {
    thunk_FUN_710081c200(local_58,(long)local_48[0] + 1);
  }
  return 1;
}



// ===== FUN_71007f4100 @ 71007f4100 (size=44) =====

long FUN_71007f4100(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(long *)(lVar1 + 0x30) != *(long *)(lVar1 + 0x38)) {
    return *(long *)(lVar1 + 0x30) + -0x30;
  }
  return *(long *)(*(long *)(lVar1 + 0x48) + -8) + 0x1b0;
}



// ===== FUN_71007f4140 @ 71007f4140 (size=56) =====

void FUN_71007f4140(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    if (*plVar1 == 0x100000001) {
      plVar5[1] = 0;
      (**(code **)(*plVar5 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x0071007f41a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x18))();
      return;
    }
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      FUN_71000a22d0();
      return;
    }
  }
  return;
}



// ===== FUN_71007f4174 @ 71007f4174 (size=52) =====

void FUN_71007f4174(long *param_1)

{
  param_1[1] = 0;
  (**(code **)(*param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x0071007f41a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}



// ===== FUN_71007f4480 @ 71007f4480 (size=408) =====

void FUN_71007f4480(long *param_1,ulong param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  plVar3 = (long *)param_1[5];
  lVar4 = param_1[9];
  uVar7 = param_1[1];
  lVar9 = lVar4 - (long)plVar3;
  lVar1 = (lVar9 >> 3) + 1 + param_2;
  if ((ulong)(lVar1 * 2) < uVar7) {
    lVar8 = *param_1;
    uVar7 = uVar7 - lVar1 >> 1;
    lVar1 = param_2 * 8 + uVar7 * 8;
    if ((param_3 & 1) == 0) {
      lVar1 = uVar7 << 3;
    }
    lVar4 = (lVar4 + 8) - (long)plVar3;
    plVar6 = (long *)(lVar8 + lVar1);
    if (plVar6 < plVar3) {
      if (8 < lVar4) {
        FUN_710080f900(plVar6);
        lVar1 = *(long *)(lVar8 + lVar1);
        goto LAB_71007f4584;
      }
      if (lVar4 == 8) {
        lVar1 = *plVar3;
        *plVar6 = lVar1;
        goto LAB_71007f4584;
      }
    }
    else {
      if (8 < lVar4) {
        FUN_710080f900();
        lVar1 = *plVar6;
        goto LAB_71007f4584;
      }
      if (lVar4 == 8) {
        *(long *)((long)plVar6 + lVar9 + 8 + ((lVar4 << 0x3d) - lVar4)) = *plVar3;
        lVar1 = *plVar6;
        goto LAB_71007f4584;
      }
    }
  }
  else {
    uVar5 = uVar7;
    if (uVar7 < param_2) {
      uVar5 = param_2;
    }
    lVar8 = uVar5 + uVar7 + 2;
    lVar2 = FUN_71007af5c0(lVar8 * 8);
    uVar5 = (ulong)(lVar8 - lVar1) >> 1;
    lVar1 = param_2 * 8 + uVar5 * 8;
    if ((param_3 & 1) == 0) {
      lVar1 = uVar5 << 3;
    }
    plVar6 = (long *)(lVar2 + lVar1);
    lVar1 = (lVar4 + 8) - (long)plVar3;
    if (lVar1 < 9) {
      if (lVar1 == 8) {
        *plVar6 = *plVar3;
      }
    }
    else {
      FUN_710080f900(plVar6);
    }
    thunk_FUN_710081c200(*param_1,uVar7 << 3);
    *param_1 = lVar2;
    param_1[1] = lVar8;
  }
  lVar1 = *plVar6;
LAB_71007f4584:
  param_1[3] = lVar1;
  param_1[4] = lVar1 + 0x1e0;
  param_1[9] = (long)plVar6 + lVar9;
  lVar1 = *(long *)((long)plVar6 + lVar9);
  param_1[5] = (long)plVar6;
  param_1[7] = lVar1;
  param_1[8] = lVar1 + 0x1e0;
  return;
}



// ===== FUN_71007f4620 @ 71007f4620 (size=764) =====

void FUN_71007f4620(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar2 = (undefined8 *)param_1[6];
  if (puVar2 != (undefined8 *)(param_1[8] + -0x60)) {
    puVar3 = param_2 + 3;
    *puVar2 = *param_2;
    *param_2 = 0;
    puVar2[1] = puVar2 + 3;
    if ((undefined8 *)param_2[1] == puVar3) {
      FUN_710080f900(puVar2 + 3,puVar3,param_2[2] + 1);
    }
    else {
      uVar1 = param_2[3];
      puVar2[1] = (undefined8 *)param_2[1];
      puVar2[3] = uVar1;
    }
    puVar2[2] = param_2[2];
    param_2[1] = puVar3;
    puVar2[5] = param_2[5];
    param_2[5] = 0;
    puVar3 = param_2 + 8;
    param_2[2] = 0;
    *(undefined1 *)(param_2 + 3) = 0;
    FUN_71007f6bc0(param_2 + 1);
    puVar2[6] = puVar2 + 8;
    if ((undefined8 *)param_2[6] == puVar3) {
      FUN_710080f900(puVar2 + 8,puVar3,param_2[7] + 1);
    }
    else {
      uVar1 = param_2[8];
      puVar2[6] = (undefined8 *)param_2[6];
      puVar2[8] = uVar1;
    }
    puVar2[7] = param_2[7];
    param_2[6] = puVar3;
    puVar2[10] = param_2[10];
    param_2[10] = 0;
    param_2[7] = 0;
    *(undefined1 *)(param_2 + 8) = 0;
    FUN_71007f6bc0(param_2 + 6);
    *(undefined1 *)(puVar2 + 0xb) = *(undefined1 *)(param_2 + 0xb);
    param_1[6] = param_1[6] + 0x60;
    return;
  }
  lVar4 = param_1[9];
  if (((lVar4 - param_1[5] >> 3) - (ulong)(lVar4 != 0)) * 5 +
      ((long)puVar2 - param_1[7] >> 5) * -0x5555555555555555 +
      (param_1[4] - param_1[2] >> 5) * -0x5555555555555555 != 0x155555555555555) {
    if ((ulong)(param_1[1] - (lVar4 - *param_1 >> 3)) < 2) {
      FUN_71007f4480(param_1,1,0);
      lVar4 = param_1[9];
    }
    uVar1 = FUN_71007af5c0(0x1e0);
    *(undefined8 *)(lVar4 + 8) = uVar1;
    uVar1 = *param_2;
    puVar2 = param_2 + 3;
    puVar3 = (undefined8 *)param_1[6];
    *param_2 = 0;
    *puVar3 = uVar1;
    puVar3[1] = puVar3 + 3;
    if ((undefined8 *)param_2[1] == puVar2) {
      FUN_710080f900(puVar3 + 3,puVar2,param_2[2] + 1);
    }
    else {
      uVar1 = param_2[3];
      puVar3[1] = (undefined8 *)param_2[1];
      puVar3[3] = uVar1;
    }
    puVar3[2] = param_2[2];
    param_2[1] = puVar2;
    puVar3[5] = param_2[5];
    param_2[5] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_2 + 3) = 0;
    FUN_71007f6bc0(param_2 + 1);
    puVar3[6] = puVar3 + 8;
    puVar2 = param_2 + 8;
    if ((undefined8 *)param_2[6] == puVar2) {
      FUN_710080f900(puVar3 + 8,puVar2,param_2[7] + 1);
    }
    else {
      uVar1 = param_2[8];
      puVar3[6] = (undefined8 *)param_2[6];
      puVar3[8] = uVar1;
    }
    puVar3[7] = param_2[7];
    param_2[6] = puVar2;
    puVar3[10] = param_2[10];
    param_2[10] = 0;
    param_2[7] = 0;
    *(undefined1 *)(param_2 + 8) = 0;
    FUN_71007f6bc0(param_2 + 6);
    *(undefined1 *)(puVar3 + 0xb) = *(undefined1 *)(param_2 + 0xb);
    lVar4 = *(long *)(param_1[9] + 8);
    param_1[9] = param_1[9] + 8;
    param_1[7] = lVar4;
    param_1[8] = lVar4 + 0x1e0;
    param_1[6] = lVar4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003b58("cannot create std::deque larger than max_size()");
}



// ===== FUN_71007f4920 @ 71007f4920 (size=1408) =====

long * FUN_71007f4920(long *param_1,int *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  int *piVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  ulong local_68;
  long local_60;
  ulong *local_58;
  ulong local_50;
  ulong local_48 [2];
  long local_38;
  undefined1 *local_30;
  undefined8 uStack_28;
  undefined1 local_20;
  undefined7 uStack_1f;
  long local_10;
  undefined1 local_8;
  
  lVar17 = *param_1;
  if (lVar17 == 0) {
    uVar11 = FUN_71007e37c0();
    *(undefined8 *)(param_2 + 2) = uVar11;
    *param_2 = 0x16;
    return param_1;
  }
  lVar14 = *(long *)(lVar17 + 0x30);
  lVar15 = *(long *)(lVar17 + 0x38);
  bVar4 = *(byte *)(lVar17 + 0x70);
  lVar16 = *(long *)(lVar17 + 0x48);
  bVar7 = bVar4 >> 1 & 1;
  lVar19 = lVar14;
  if (lVar14 == lVar15) {
    lVar19 = *(long *)(lVar16 + -8) + 0x1e0;
  }
  bVar5 = *(byte *)(lVar17 + 0x71);
  *(undefined1 *)(lVar17 + 0x71) = 1;
  if ((bVar5 & 1) == 0) goto LAB_71007f4a28;
  uVar9 = (uint)*(byte *)(lVar19 + -8);
  if (*(byte *)(lVar19 + -8) == 0) {
    cVar8 = FUN_71007f5920(lVar19 + -0x30,param_2);
    if (*param_2 == 0) {
      uVar9 = (uint)cVar8;
      goto LAB_71007f4b60;
    }
  }
  else {
LAB_71007f4b60:
    if ((uVar9 == 2) ||
       (((bVar4 & uVar9 == 3) != 0 &&
        (cVar8 = FUN_71007f57e0(lVar19 + -0x30,param_2), cVar8 == '\x02')))) {
      lVar17 = FUN_7100834200(*(undefined8 *)(lVar19 + -0x30));
      if ((lVar17 == 0) && (piVar12 = (int *)FUN_710080e8e0(), bVar7 == 0 || *piVar12 != 0xd)) {
        piVar12 = (int *)FUN_710080e8e0();
        iVar13 = *piVar12;
        uVar11 = FUN_71007e37c0();
        *param_2 = iVar13;
        *(undefined8 *)(param_2 + 2) = uVar11;
      }
      else {
        uVar11 = FUN_71007e37a0();
        *param_2 = 0;
        *(undefined8 *)(param_2 + 2) = uVar11;
      }
      puVar2 = (undefined8 *)(lVar19 + -0x30);
      if (*(long *)(lVar19 + -0x50) == 0) {
        puVar2 = (undefined8 *)(lVar19 + -0x58);
      }
      puVar3 = (undefined1 *)*puVar2;
      local_68 = puVar2[1];
      local_58 = local_48;
      local_60 = lVar17;
      if (local_68 < 0x10) {
        lVar17 = local_68 + 1;
        if (local_68 == 0) {
LAB_71007f4d40:
          *(undefined1 *)local_58 = *puVar3;
          local_50 = local_68;
        }
        else {
LAB_71007f4c54:
          FUN_710080f900(local_58,puVar3,lVar17);
          local_50 = local_68;
        }
      }
      else {
        local_58 = (ulong *)FUN_71007e2140(&local_58,&local_68,0);
        local_48[0] = local_68;
        lVar17 = local_68 + 1;
        if (local_68 == 0) goto LAB_71007f4d40;
        local_50 = 0xffffffffffffffff;
        if (lVar17 != 0) goto LAB_71007f4c54;
      }
      FUN_71007f84a0(&local_38,puVar2 + 4);
      uStack_28 = 0;
      local_20 = 0;
      local_30 = &local_20;
      FUN_71007f6080();
      local_8 = 0;
      if (*param_2 != 0) {
        plVar18 = (long *)param_1[1];
        *param_1 = 0;
        param_1[1] = 0;
        if (plVar18 != (long *)0x0) {
          plVar1 = plVar18 + 1;
          if (*plVar1 == 0x100000001) {
            plVar18[1] = 0;
            (**(code **)(*plVar18 + 0x10))(plVar18);
            (**(code **)(*plVar18 + 0x18))(plVar18);
          }
          else {
            do {
              iVar13 = (int)*plVar1 + -1;
              cVar8 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *(int *)plVar1 = iVar13;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar13 == 0) {
              FUN_71000a22d0(plVar18);
            }
          }
        }
        if (local_10 != 0) {
          FUN_71007f5e80(&local_10);
        }
        if (local_30 != &local_20) {
          thunk_FUN_710081c200(local_30,CONCAT71(uStack_1f,local_20) + 1);
        }
        if (local_38 != 0) {
          FUN_71007f5e80(&local_38);
        }
        if (local_58 != local_48) {
          thunk_FUN_710081c200(local_58,local_48[0] + 1);
        }
        if (local_60 == 0) {
          return param_1;
        }
        FUN_7100834320();
        return param_1;
      }
      if (local_60 != 0) {
        FUN_71007f4620(*param_1,&local_60);
      }
      if (local_10 != 0) {
        FUN_71007f5e80(&local_10);
      }
      if (local_30 != &local_20) {
        thunk_FUN_710081c200(local_30,CONCAT71(uStack_1f,local_20) + 1);
      }
      if (local_38 != 0) {
        FUN_71007f5e80(&local_38);
      }
      if (local_58 != local_48) {
        thunk_FUN_710081c200(local_58,local_48[0] + 1);
      }
      if (local_60 != 0) {
        FUN_7100834320();
      }
      lVar17 = *param_1;
      lVar14 = *(long *)(lVar17 + 0x30);
      lVar15 = *(long *)(lVar17 + 0x38);
      lVar16 = *(long *)(lVar17 + 0x48);
      goto LAB_71007f4a28;
    }
  }
  lVar17 = *param_1;
  lVar14 = *(long *)(lVar17 + 0x30);
  lVar15 = *(long *)(lVar17 + 0x38);
  lVar16 = *(long *)(lVar17 + 0x48);
LAB_71007f4a28:
  while (lVar15 != lVar14) {
    uVar10 = FUN_71007f3bc0(lVar14 + -0x60,bVar7,param_2);
    iVar13 = *param_2;
    if ((uVar10 & 1) != 0) goto LAB_71007f4a50;
LAB_71007f498c:
    if (iVar13 != 0) goto LAB_71007f4b10;
    lVar19 = *param_1;
    lVar17 = *(long *)(lVar19 + 0x30);
    if (lVar17 == *(long *)(lVar19 + 0x38)) {
      thunk_FUN_710081c200(lVar17,0x1e0);
      lVar14 = *(long *)(*(long *)(lVar19 + 0x48) + -8);
      *(long *)(lVar19 + 0x38) = lVar14;
      *(long *)(lVar19 + 0x40) = lVar14 + 0x1e0;
      lVar17 = *(long *)(lVar14 + 0x1d0);
      *(long *)(lVar19 + 0x30) = lVar14 + 0x180;
      *(long *)(lVar19 + 0x48) = *(long *)(lVar19 + 0x48) + -8;
      if (lVar17 != 0) {
        FUN_71007f5e80(lVar14 + 0x1d0);
      }
      if (*(long *)(lVar14 + 0x1b0) != lVar14 + 0x1c0) {
        thunk_FUN_710081c200(*(long *)(lVar14 + 0x1b0),*(long *)(lVar14 + 0x1c0) + 1);
      }
      if (*(long *)(lVar14 + 0x1a8) != 0) {
        FUN_71007f5e80(lVar14 + 0x1a8);
      }
      if (*(long *)(lVar14 + 0x188) != lVar14 + 0x198) {
        thunk_FUN_710081c200(*(long *)(lVar14 + 0x188),*(long *)(lVar14 + 0x198) + 1);
      }
      if (*(long *)(lVar14 + 0x180) == 0) goto LAB_71007f4a0c;
      FUN_7100834320();
      lVar17 = *param_1;
      lVar14 = *(long *)(lVar17 + 0x30);
      if (lVar14 == *(long *)(lVar17 + 0x10)) goto LAB_71007f4b10;
    }
    else {
      lVar14 = *(long *)(lVar17 + -0x10);
      *(long *)(lVar19 + 0x30) = lVar17 + -0x60;
      if (lVar14 != 0) {
        FUN_71007f5e80(lVar17 + -0x10);
      }
      if (*(long *)(lVar17 + -0x30) != lVar17 + -0x20) {
        thunk_FUN_710081c200(*(long *)(lVar17 + -0x30),*(long *)(lVar17 + -0x20) + 1);
      }
      if (*(long *)(lVar17 + -0x38) != 0) {
        FUN_71007f5e80(lVar17 + -0x38);
      }
      if (*(long *)(lVar17 + -0x58) != lVar17 + -0x48) {
        thunk_FUN_710081c200(*(long *)(lVar17 + -0x58),*(long *)(lVar17 + -0x48) + 1);
      }
      if (*(long *)(lVar17 + -0x60) != 0) {
        FUN_7100834320();
      }
LAB_71007f4a0c:
      lVar17 = *param_1;
      lVar14 = *(long *)(lVar17 + 0x30);
      if (lVar14 == *(long *)(lVar17 + 0x10)) goto LAB_71007f4b10;
    }
    lVar16 = *(long *)(lVar17 + 0x48);
    lVar15 = *(long *)(lVar17 + 0x38);
  }
  uVar10 = FUN_71007f3bc0(*(long *)(lVar16 + -8) + 0x180,bVar7,param_2);
  iVar13 = *param_2;
  if ((uVar10 & 1) == 0) goto LAB_71007f498c;
LAB_71007f4a50:
  if (iVar13 == 0) {
    return param_1;
  }
LAB_71007f4b10:
  plVar18 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if (plVar18 != (long *)0x0) {
    plVar1 = plVar18 + 1;
    if (*plVar1 == 0x100000001) {
      plVar18[1] = 0;
      (**(code **)(*plVar18 + 0x10))(plVar18);
      (**(code **)(*plVar18 + 0x18))(plVar18);
    }
    else {
      do {
        iVar13 = (int)*plVar1 + -1;
        cVar8 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = iVar13;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar13 == 0) {
        FUN_71000a22d0(plVar18);
      }
    }
  }
  return param_1;
}



// ===== FUN_71007f4ee0 @ 71007f4ee0 (size=148) =====

undefined8 FUN_71007f4ee0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  int local_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined1 auStack_20 [32];
  
  local_30 = 0;
  local_28 = FUN_71007e37a0();
  FUN_71007f4920(param_1,&local_30);
  if (local_30 == 0) {
    return param_1;
  }
  uVar1 = FUN_71007adf60(0x30);
  FUN_710006ec60(auStack_20,"cannot increment recursive directory iterator",auStack_38);
  FUN_71007f9a20(uVar1,auStack_20,CONCAT44(uStack_2c,local_30),local_28);
  FUN_71007e21a0(auStack_20);
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(uVar1,&PTR_PTR_FUN_7100aef398,FUN_71007f74a0);
}



// ===== FUN_71007f4fa0 @ 71007f4fa0 (size=1024) =====

void FUN_71007f4fa0(undefined8 *param_1,undefined8 *param_2,uint param_3,int *param_4)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  int iVar10;
  long *plVar11;
  undefined1 local_c0;
  undefined1 local_b4;
  undefined1 auStack_98 [8];
  int local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined1 auStack_80 [32];
  long local_60;
  undefined1 *local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined7 uStack_47;
  long local_38;
  undefined1 *local_30;
  undefined8 uStack_28;
  undefined1 local_20;
  undefined7 uStack_1f;
  long local_10;
  undefined1 local_8;
  
  uVar3 = param_3 >> 1 & 1;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = FUN_71007e37a0();
  local_60 = FUN_7100834200(*param_2);
  if ((local_60 == 0) && (piVar8 = (int *)FUN_710080e8e0(), uVar3 == 0 || *piVar8 != 0xd)) {
    piVar8 = (int *)FUN_710080e8e0();
    iVar10 = *piVar8;
    uVar9 = FUN_71007e37c0();
    local_58 = &local_48;
    uStack_50 = 0;
    local_48 = 0;
    FUN_71007f6080(&local_38);
    uStack_28 = 0;
    local_20 = 0;
    local_30 = &local_20;
    FUN_71007f6080(&local_10);
    local_8 = 0;
    if (iVar10 == 0) goto LAB_71007f502c;
    if (local_60 == 0) {
      if (param_4 == (int *)0x0) {
        uVar4 = FUN_71007adf60(0x30);
        FUN_710006ec60(auStack_80,"recursive directory iterator cannot open directory",&local_90);
        FUN_71007f9c20(uVar4,auStack_80,param_2,iVar10,uVar9);
        FUN_71007e21a0(auStack_80);
                    /* WARNING: Subroutine does not return */
        FUN_71007af000(uVar4,&PTR_PTR_FUN_7100aef398,FUN_71007f74a0);
      }
      goto LAB_71007f5280;
    }
  }
  else {
    local_58 = &local_48;
    uStack_50 = 0;
    local_48 = 0;
    FUN_71007f6080(&local_38);
    uStack_28 = 0;
    local_20 = 0;
    local_30 = &local_20;
    FUN_71007f6080(&local_10);
    uVar9 = uVar4;
LAB_71007f502c:
    local_8 = 0;
    FUN_71007f8a60(&local_58,param_2);
    if (local_60 == 0) {
      if (param_4 == (int *)0x0) goto LAB_71007f5148;
      iVar10 = 0;
LAB_71007f5280:
      *param_4 = iVar10;
      *(undefined8 *)(param_4 + 2) = uVar9;
      goto LAB_71007f5148;
    }
  }
  plVar5 = (long *)FUN_71007af5c0(0x88);
  plVar5[1] = 0x100000001;
  *plVar5 = (long)&PTR_LAB_7100aef370;
  plVar5[2] = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  plVar5[8] = 0;
  plVar5[9] = 0;
  plVar5[10] = 0;
  plVar5[0xb] = 0;
  plVar5[3] = 8;
  lVar6 = FUN_71007af5c0(0x40);
  plVar5[2] = lVar6;
  lVar7 = FUN_71007af5c0(0x1e0);
  *(long *)(lVar6 + 0x18) = lVar7;
  plVar5[5] = lVar7;
  plVar5[6] = lVar7 + 0x1e0;
  plVar5[7] = lVar6 + 0x18;
  plVar5[9] = lVar7;
  plVar5[10] = lVar7 + 0x1e0;
  plVar5[0xb] = lVar6 + 0x18;
  plVar5[4] = lVar7;
  plVar5[8] = lVar7;
  plVar5[0xc] = (long)(plVar5 + 0xe);
  local_c0 = (undefined1)param_3;
  plVar5[0xd] = 0;
  *(undefined1 *)(plVar5 + 0xe) = 0;
  *(undefined1 *)(plVar5 + 0x10) = local_c0;
  *(undefined1 *)((long)plVar5 + 0x81) = 1;
  FUN_71007f4620(plVar5 + 2,&local_60);
  lVar6 = plVar5[8];
  local_b4 = (undefined1)uVar3;
  if (param_4 == (int *)0x0) {
    if (lVar6 == plVar5[9]) {
      lVar6 = *(long *)(plVar5[0xb] + -8) + 0x1e0;
    }
    local_90 = 0;
    local_88 = uVar4;
    uVar3 = FUN_71007f3bc0(lVar6 + -0x60,local_b4,&local_90);
    if (local_90 != 0) {
      uVar4 = FUN_71007adf60(0x30);
      FUN_710006ec60(auStack_80,"directory iterator cannot advance",auStack_98);
      FUN_71007f9a20(uVar4,auStack_80,CONCAT44(uStack_8c,local_90),local_88);
      FUN_71007e21a0(auStack_80);
                    /* WARNING: Subroutine does not return */
      FUN_71007af000(uVar4,&PTR_PTR_FUN_7100aef398,FUN_71007f74a0);
    }
  }
  else {
    if (lVar6 == plVar5[9]) {
      lVar6 = *(long *)(plVar5[0xb] + -8) + 0x1e0;
    }
    uVar3 = FUN_71007f3bc0(lVar6 + -0x60,local_b4,param_4);
  }
  plVar11 = plVar5;
  if ((uVar3 & 1) != 0) {
    plVar11 = (long *)param_1[1];
    *param_1 = plVar5 + 2;
    param_1[1] = plVar5;
    if ((param_3 & 0xff) >> 7 != 0) {
      FUN_71007e2260(plVar5 + 0xc,param_2);
    }
    if (plVar11 == (long *)0x0) goto LAB_71007f5148;
  }
  plVar5 = plVar11 + 1;
  if (*plVar5 == 0x100000001) {
    plVar11[1] = 0;
    (**(code **)(*plVar11 + 0x10))(plVar11);
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  else {
    do {
      iVar10 = (int)*plVar5 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *(int *)plVar5 = iVar10;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar10 == 0) {
      FUN_71000a22d0(plVar11);
    }
  }
LAB_71007f5148:
  if (local_10 != 0) {
    FUN_71007f5e80(&local_10);
  }
  if (local_30 != &local_20) {
    thunk_FUN_710081c200(local_30,CONCAT71(uStack_1f,local_20) + 1);
  }
  if (local_38 != 0) {
    FUN_71007f5e80(&local_38);
  }
  if (local_58 != &local_48) {
    thunk_FUN_710081c200(local_58,CONCAT71(uStack_47,local_48) + 1);
  }
  if (local_60 != 0) {
    FUN_7100834320();
  }
  return;
}



// ===== FUN_71007f5500 @ 71007f5500 (size=180) =====

void FUN_71007f5500(long *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong local_8;
  
  uVar2 = param_3 - (long)param_2;
  local_8 = uVar2;
  if (uVar2 < 0x10) {
    puVar1 = (undefined1 *)*param_1;
    if (uVar2 == 1) {
      *puVar1 = *param_2;
      param_1[1] = 1;
      *(undefined1 *)(*param_1 + 1) = 0;
      return;
    }
    if (uVar2 == 0) {
      param_1[1] = 0;
      *puVar1 = 0;
      return;
    }
  }
  else {
    puVar1 = (undefined1 *)FUN_71007e2140(param_1,&local_8,0);
    *param_1 = (long)puVar1;
    param_1[2] = local_8;
  }
  FUN_710080f900(puVar1,param_2,uVar2);
  param_1[1] = local_8;
  *(undefined1 *)(*param_1 + local_8) = 0;
  return;
}



// ===== FUN_71007f55c0 @ 71007f55c0 (size=160) =====

undefined8 FUN_71007f55c0(undefined8 *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined1 auStack_68 [4];
  uint local_64;
  undefined8 local_58;
  
  iVar1 = FUN_7100809640(*param_1,auStack_68);
  if (iVar1 == 0) {
    uVar2 = FUN_71007e37a0();
    *param_2 = 0;
    *(undefined8 *)(param_2 + 2) = uVar2;
    if ((local_64 & 0xf000) == 0x8000) {
      return local_58;
    }
    uVar2 = FUN_71007e37c0();
    if ((local_64 & 0xf000) == 0x4000) {
      *param_2 = 0x15;
      *(undefined8 *)(param_2 + 2) = uVar2;
      return 0xffffffffffffffff;
    }
  }
  else {
    piVar3 = (int *)FUN_710080e8e0();
    iVar1 = *piVar3;
    uVar2 = FUN_71007e37c0();
    *param_2 = iVar1;
    *(undefined8 *)(param_2 + 2) = uVar2;
    if (iVar1 != 0) {
      return 0xffffffffffffffff;
    }
  }
  *param_2 = 0x86;
  *(undefined8 *)(param_2 + 2) = uVar2;
  return 0xffffffffffffffff;
}



// ===== FUN_71007f5660 @ 71007f5660 (size=148) =====

void FUN_71007f5660(undefined8 param_1)

{
  undefined8 uVar1;
  int local_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined1 auStack_20 [32];
  
  local_30 = 0;
  local_28 = FUN_71007e37a0();
  FUN_71007f55c0(param_1,&local_30);
  if (local_30 == 0) {
    return;
  }
  uVar1 = FUN_71007adf60(0x30);
  FUN_7100004134(auStack_20,"cannot get file size");
  FUN_71007f9c20(uVar1,auStack_20,param_1,CONCAT44(uStack_2c,local_30),local_28);
  FUN_71007e21a0(auStack_20);
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(uVar1,&PTR_PTR_FUN_7100aef398,FUN_71007f74a0);
}



// ===== FUN_71007f5720 @ 71007f5720 (size=168) =====

undefined8 FUN_71007f5720(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  iVar2 = FUN_7100823540(*param_1);
  if (iVar2 == 0) {
    uVar3 = FUN_71007e37a0();
    *param_2 = 0;
    *(undefined8 *)(param_2 + 2) = uVar3;
    return 1;
  }
  piVar4 = (int *)FUN_710080e8e0();
  if (*piVar4 == 2) {
    uVar3 = FUN_71007e37a0();
    *param_2 = 0;
    *(undefined8 *)(param_2 + 2) = uVar3;
    return 0;
  }
  puVar5 = (undefined4 *)FUN_710080e8e0();
  uVar1 = *puVar5;
  uVar3 = FUN_71007e37c0();
  *param_2 = uVar1;
  *(undefined8 *)(param_2 + 2) = uVar3;
  return 0;
}



// ===== FUN_71007f57e0 @ 71007f57e0 (size=304) =====

ulong FUN_71007f57e0(undefined8 *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uVar5;
  undefined1 auStack_68 [4];
  uint local_64;
  
  iVar2 = FUN_7100809640(*param_1,auStack_68);
  if (iVar2 == 0) {
    uVar5 = 1;
    uVar1 = local_64 & 0xf000;
    if (uVar1 != 0x8000) {
      if (uVar1 == 0x4000) {
        uVar5 = 2;
      }
      else if (uVar1 == 0x2000) {
        uVar5 = 5;
      }
      else if (uVar1 == 0x6000) {
        uVar5 = 4;
      }
      else if (uVar1 == 0x1000) {
        uVar5 = 6;
      }
      else if (uVar1 == 0xa000) {
        uVar5 = 3;
      }
      else {
        uVar5 = (ulong)((uVar1 != 0xc000) + 7);
      }
    }
    uVar3 = FUN_71007e37a0();
    *param_2 = 0;
    *(undefined8 *)(param_2 + 2) = uVar3;
    return uVar5 | (ulong)(local_64 & 0xfff) << 0x20;
  }
  piVar4 = (int *)FUN_710080e8e0();
  iVar2 = *piVar4;
  uVar3 = FUN_71007e37c0();
  if (iVar2 == 2 || iVar2 == 0x14) {
    *param_2 = iVar2;
    *(undefined8 *)(param_2 + 2) = uVar3;
    return 0xffff000000ff;
  }
  *param_2 = iVar2;
  *(undefined8 *)(param_2 + 2) = uVar3;
  return (ulong)(iVar2 == 0x8b) << 3 | 0xffff00000000;
}



// ===== FUN_71007f5920 @ 71007f5920 (size=252) =====

ulong FUN_71007f5920(undefined8 *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uVar5;
  undefined1 auStack_68 [4];
  uint local_64;
  
  iVar2 = FUN_7100835420(*param_1,auStack_68);
  if (iVar2 == 0) {
    uVar5 = 1;
    uVar1 = local_64 & 0xf000;
    if (uVar1 != 0x8000) {
      if (uVar1 == 0x4000) {
        uVar5 = 2;
      }
      else if (uVar1 == 0x2000) {
        uVar5 = 5;
      }
      else if (uVar1 == 0x6000) {
        uVar5 = 4;
      }
      else if (uVar1 == 0x1000) {
        uVar5 = 6;
      }
      else if (uVar1 == 0xa000) {
        uVar5 = 3;
      }
      else {
        uVar5 = (ulong)((uVar1 != 0xc000) + 7);
      }
    }
    uVar3 = FUN_71007e37a0();
    *param_2 = 0;
    *(undefined8 *)(param_2 + 2) = uVar3;
    return uVar5 | (ulong)(local_64 & 0xfff) << 0x20;
  }
  piVar4 = (int *)FUN_710080e8e0();
  iVar2 = *piVar4;
  uVar3 = FUN_71007e37c0();
  *param_2 = iVar2;
  *(undefined8 *)(param_2 + 2) = uVar3;
  return (ulong)-(uint)(iVar2 == 2 || iVar2 == 0x14) & 0xff | 0xffff00000000;
}



// ===== FUN_71007f5a20 @ 71007f5a20 (size=148) =====

void FUN_71007f5a20(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined1 auStack_20 [32];
  
  local_30 = 0;
  local_28 = FUN_71007e37a0();
  cVar1 = FUN_71007f57e0(param_1,&local_30);
  if (cVar1 != '\0') {
    return;
  }
  uVar2 = FUN_71007adf60(0x30);
  FUN_7100004134(auStack_20,"status");
  FUN_71007f9c20(uVar2,auStack_20,param_1,CONCAT44(uStack_2c,local_30),local_28);
  FUN_71007e21a0(auStack_20);
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(uVar2,&PTR_PTR_FUN_7100aef398,FUN_71007f74a0);
}



// ===== FUN_71007f5be0 @ 71007f5be0 (size=180) =====

void FUN_71007f5be0(long *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong local_8;
  
  uVar2 = param_3 - (long)param_2;
  local_8 = uVar2;
  if (uVar2 < 0x10) {
    puVar1 = (undefined1 *)*param_1;
    if (uVar2 == 1) {
      *puVar1 = *param_2;
      param_1[1] = 1;
      *(undefined1 *)(*param_1 + 1) = 0;
      return;
    }
    if (uVar2 == 0) {
      param_1[1] = 0;
      *puVar1 = 0;
      return;
    }
  }
  else {
    puVar1 = (undefined1 *)FUN_71007e2140(param_1,&local_8,0);
    *param_1 = (long)puVar1;
    param_1[2] = local_8;
  }
  FUN_710080f900(puVar1,param_2,uVar2);
  param_1[1] = local_8;
  *(undefined1 *)(*param_1 + local_8) = 0;
  return;
}



// ===== FUN_71007f5ca0 @ 71007f5ca0 (size=404) =====

void FUN_71007f5ca0(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long *local_60;
  undefined8 local_58;
  long local_50 [2];
  long *local_40;
  undefined8 local_38;
  long local_30 [2];
  long *local_20 [2];
  long local_10 [2];
  
  (**(code **)(*param_3 + 0x20))(local_20,param_3);
  puVar1 = (undefined8 *)FUN_71007e28e0(local_20,0,0,": ",2);
  plVar2 = puVar1 + 2;
  local_40 = (long *)*puVar1;
  if (local_40 == plVar2) {
    local_40 = local_30;
    FUN_710080f900(local_30,plVar2,puVar1[1] + 1);
  }
  else {
    local_30[0] = puVar1[2];
  }
  local_38 = puVar1[1];
  *puVar1 = plVar2;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1 = (undefined8 *)FUN_71007e28e0(&local_40,0,0,*param_4,param_4[1]);
  plVar2 = puVar1 + 2;
  local_60 = (long *)*puVar1;
  if (local_60 == plVar2) {
    local_60 = local_50;
    FUN_710080f900(local_50,plVar2,puVar1[1] + 1);
  }
  else {
    local_50[0] = puVar1[2];
  }
  local_58 = puVar1[1];
  *puVar1 = plVar2;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  FUN_71007c5bc0(param_1,&local_60);
  if (local_60 != local_50) {
    thunk_FUN_710081c200(local_60,local_50[0] + 1);
  }
  if (local_40 != local_30) {
    thunk_FUN_710081c200(local_40,local_30[0] + 1);
  }
  if (local_20[0] != local_10) {
    thunk_FUN_710081c200(local_20[0],local_10[0] + 1);
  }
  param_1[2] = param_2;
  param_1[3] = param_3;
  *param_1 = &PTR_FUN_7100aeebe8;
  return;
}



// ===== FUN_71007f5e80 @ 71007f5e80 (size=160) =====

void FUN_71007f5e80(undefined8 param_1,ulong param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_2 < 4) {
    return;
  }
  piVar3 = (int *)(param_2 & 0xfffffffffffffffc);
  iVar1 = *piVar3;
  if (0 < iVar1) {
    piVar2 = piVar3 + 2;
    do {
      if (*(long *)(piVar2 + 8) != 0) {
        FUN_71007f5e80(piVar2 + 8);
      }
      if (*(int **)piVar2 != piVar2 + 4) {
        thunk_FUN_710081c200(*(int **)piVar2,*(long *)(piVar2 + 4) + 1);
      }
      piVar2 = piVar2 + 0xc;
    } while (piVar3 + (ulong)(iVar1 - 1) * 0xc + 0xe != piVar2);
  }
  *piVar3 = 0;
  thunk_FUN_710081c200(piVar3,(long)piVar3[1] * 0x30 + 8);
  return;
}



// ===== FUN_71007f5f20 @ 71007f5f20 (size=168) =====

void FUN_71007f5f20(int *param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  
  param_2 = param_2 - (long)(param_1 + 2);
  iVar1 = *param_1;
  lVar3 = (long)iVar1 * 0x30;
  if (param_2 != lVar3) {
    piVar2 = (int *)((long)param_1 + param_2 + 8);
    do {
      if (*(long *)(piVar2 + 8) != 0) {
        FUN_71007f5e80(piVar2 + 8);
      }
      if (*(int **)piVar2 != piVar2 + 4) {
        thunk_FUN_710081c200(*(int **)piVar2,*(long *)(piVar2 + 4) + 1);
      }
      piVar2 = piVar2 + 0xc;
    } while (param_1 + (long)iVar1 * 0xc + 2 != piVar2);
    iVar1 = *param_1;
  }
  *param_1 = iVar1 + (int)(lVar3 - param_2 >> 4) * 0x55555555;
  return;
}



// ===== FUN_71007f5fe0 @ 71007f5fe0 (size=152) =====

void FUN_71007f5fe0(long param_1)

{
  if (*(long *)(param_1 + 0x60) != param_1 + 0x70) {
    thunk_FUN_710081c200(*(long *)(param_1 + 0x60),*(long *)(param_1 + 0x70) + 1);
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_71007f5e80(param_1 + 0x58);
  }
  if (*(long *)(param_1 + 0x38) != param_1 + 0x48) {
    thunk_FUN_710081c200(*(long *)(param_1 + 0x38),*(long *)(param_1 + 0x48) + 1);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_71007f5e80(param_1 + 0x30);
  }
  if (*(long *)(param_1 + 0x10) != param_1 + 0x20) {
    thunk_FUN_710081c200(*(long *)(param_1 + 0x10),*(long *)(param_1 + 0x20) + 1);
    return;
  }
  return;
}



// ===== FUN_71007f6080 @ 71007f6080 (size=12) =====

void FUN_71007f6080(undefined8 *param_1)

{
  *param_1 = 3;
  return;
}



// ===== FUN_71007f60a0 @ 71007f60a0 (size=24) =====

long FUN_71007f60a0(ulong *param_1)

{
  long lVar1;
  
  lVar1 = (*param_1 & 0xfffffffffffffffc) + 8;
  if (*param_1 < 4) {
    lVar1 = 0;
  }
  return lVar1;
}



// ===== FUN_71007f60c0 @ 71007f60c0 (size=48) =====

int * FUN_71007f60c0(ulong *param_1)

{
  int *piVar1;
  
  if (3 < *param_1) {
    piVar1 = (int *)(*param_1 & 0xfffffffffffffffc);
    return piVar1 + (long)*piVar1 * 0xc + 2;
  }
  return (int *)0x0;
}



// ===== FUN_71007f6100 @ 71007f6100 (size=144) =====

void FUN_71007f6100(ulong *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (*param_1 < 4) {
    return;
  }
  piVar3 = (int *)(*param_1 & 0xfffffffffffffffc);
  iVar1 = *piVar3;
  if (0 < iVar1) {
    piVar2 = piVar3 + 2;
    do {
      if (*(long *)(piVar2 + 8) != 0) {
        FUN_71007f5e80(piVar2 + 8);
      }
      if (*(int **)piVar2 != piVar2 + 4) {
        thunk_FUN_710081c200(*(int **)piVar2,*(long *)(piVar2 + 4) + 1);
      }
      piVar2 = piVar2 + 0xc;
    } while (piVar2 != piVar3 + (ulong)(iVar1 - 1) * 0xc + 0xe);
  }
  *piVar3 = 0;
  return;
}



// ===== FUN_71007f61a0 @ 71007f61a0 (size=156) =====

bool FUN_71007f61a0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 0x20);
  if (((uint)uVar3 & 3) == 2) {
    return true;
  }
  if ((3 < uVar3) && (*(int *)(uVar3 & 0xfffffffffffffffc) != 0)) {
    lVar2 = FUN_71007f60a0(param_1 + 0x20);
    lVar1 = lVar2 + 0x30;
    if (((uint)*(undefined8 *)(lVar2 + 0x20) & 3) != 1) {
      lVar1 = lVar2;
    }
    lVar2 = FUN_71007f60c0(param_1 + 0x20);
    if (lVar2 != lVar1) {
      return ((uint)*(undefined8 *)(lVar1 + 0x20) & 3) == 2;
    }
    return false;
  }
  return false;
}



// ===== FUN_71007f6240 @ 71007f6240 (size=1920) =====

ulong FUN_71007f6240(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  uVar12 = param_1[1];
  uVar14 = param_2[1];
  if (uVar12 == uVar14) {
    if (uVar12 == 0) {
      return 0;
    }
    iVar2 = FUN_710081ec40(*param_1,*param_2,uVar12);
    if (iVar2 == 0) {
      return 0;
    }
  }
  uVar9 = param_1[4];
  if (((uint)uVar9 & 3) == 1) {
    uVar4 = *param_1;
LAB_71007f62c4:
    uVar9 = param_2[4];
    if (((uint)uVar9 & 3) == 1) {
      uVar10 = *param_2;
LAB_71007f63f8:
      uVar9 = uVar14;
      if (uVar12 < uVar14) {
        uVar9 = uVar12;
      }
      if ((uVar9 != 0) && (uVar9 = FUN_710081ec40(uVar4,uVar10), (int)uVar9 != 0)) {
        return uVar9;
      }
LAB_71007f640c:
      uVar12 = uVar12 - uVar14;
      if (0x7fffffff < (long)uVar12) {
        return 0x7fffffff;
      }
LAB_71007f65b0:
      if ((long)uVar12 < -0x80000000) {
        return 0x80000000;
      }
    }
    else {
      if (((uVar9 & 3) == 0) && (((uint)*(undefined8 *)(uVar9 + 0x28) & 3) == 1)) {
        uVar10 = *(undefined8 *)(uVar9 + 8);
        uVar14 = *(ulong *)(uVar9 + 0x10);
        goto LAB_71007f63f8;
      }
      if (0x7fffffff < uVar12) {
        return 0x7fffffff;
      }
    }
LAB_71007f62f4:
    if ((int)uVar12 != 0) {
      return uVar12 & 0xffffffff;
    }
  }
  else {
    if (((uVar9 & 3) == 0) && (((uint)*(undefined8 *)(uVar9 + 0x28) & 3) == 1)) {
      uVar4 = *(undefined8 *)(uVar9 + 8);
      uVar12 = *(ulong *)(uVar9 + 0x10);
      goto LAB_71007f62c4;
    }
    uVar9 = param_2[4];
    uVar12 = -uVar14;
    if (((uint)uVar9 & 3) == 1) goto LAB_71007f65b0;
    if ((uVar9 & 3) == 0) {
      uVar12 = 0;
      if (((uint)*(undefined8 *)(uVar9 + 0x28) & 3) != 1) goto LAB_71007f62f4;
      uVar14 = *(ulong *)(uVar9 + 0x10);
      goto LAB_71007f640c;
    }
  }
  uVar12 = FUN_71007f61a0(param_1);
  if (((uVar12 & 1) == 0) && (uVar12 = FUN_71007f61a0(param_2), (uVar12 & 1) != 0)) {
    return 0xffffffff;
  }
  uVar12 = FUN_71007f61a0(param_1);
  if (((uVar12 & 1) != 0) && (uVar12 = FUN_71007f61a0(param_2), (uVar12 & 1) == 0)) {
    return 1;
  }
  if ((param_1[4] & 3) == 0) {
    puVar13 = (undefined8 *)FUN_71007f60a0(param_1 + 4);
    puVar5 = (undefined8 *)FUN_71007f60c0(param_1 + 4);
    puVar15 = puVar5;
    if (puVar13 != puVar5) {
      uVar14 = ((ulong)((long)puVar5 + (-0x30 - (long)puVar13)) >> 4) * 0xaaaaaaaaaaaaaab;
      uVar12 = uVar14 & 0xfffffffffffffff;
      if ((uVar12 < 0xf) || (((long)puVar5 - (long)puVar13 & 0xfU) != 0)) {
        do {
          puVar15 = puVar5;
          if (((uint)puVar13[4] & 3) == 3) break;
          puVar13 = puVar13 + 6;
          puVar15 = puVar13;
        } while (puVar5 != puVar13);
      }
      else {
        puVar15 = puVar13;
        if ((uVar14 & 0xffffffffffffff0) != 0) {
          uVar12 = uVar12 + 1;
          puVar7 = puVar13 + 4;
          puVar6 = puVar13 + 6;
          uVar14 = 0;
          while( true ) {
            auVar17._0_8_ =
                 CONCAT17((char)puVar7[0x2a],
                          CONCAT16((char)puVar7[0x24],
                                   CONCAT15((char)puVar7[0x1e],
                                            CONCAT14((char)puVar7[0x18],
                                                     CONCAT13((char)puVar7[0x12],
                                                              CONCAT12((char)puVar7[0xc],
                                                                       CONCAT11((char)puVar7[6],
                                                                                (char)*puVar7)))))))
                 & 0x303030303030303;
            auVar17[8] = (byte)puVar7[0x30] & 3;
            auVar17[9] = (byte)puVar7[0x36] & 3;
            auVar17[10] = (byte)puVar7[0x3c] & 3;
            auVar17[0xb] = (byte)puVar7[0x42] & 3;
            auVar17[0xc] = (byte)puVar7[0x48] & 3;
            auVar17[0xd] = (byte)puVar7[0x4e] & 3;
            auVar17[0xe] = (byte)puVar7[0x54] & 3;
            auVar17[0xf] = (byte)puVar7[0x5a] & 3;
            auVar19[8] = 3;
            auVar19._0_8_ = 0x303030303030303;
            auVar19[9] = 3;
            auVar19[10] = 3;
            auVar19[0xb] = 3;
            auVar19[0xc] = 3;
            auVar19[0xd] = 3;
            auVar19[0xe] = 3;
            auVar19[0xf] = 3;
            auVar19 = NEON_cmeq(auVar17,auVar19,1);
            auVar19 = NEON_umaxp(auVar19,auVar19,4);
            if (auVar19._0_8_ != 0) break;
            uVar14 = uVar14 + 1;
            puVar7 = puVar7 + 0x60;
            if (uVar12 >> 4 == uVar14) {
              if ((uVar12 & 0xf) == 0) {
                puVar13 = puVar6 + 0x5a;
                puVar15 = puVar13;
                goto LAB_71007f632c;
              }
              puVar15 = puVar13 + (uVar12 & 0xfffffffffffffff0) * 6;
              break;
            }
            puVar15 = puVar15 + 0x60;
            puVar6 = puVar6 + 0x60;
          }
        }
        do {
          puVar13 = puVar15;
          puVar15 = puVar5;
          if (((uint)puVar13[4] & 3) == 3) break;
          puVar13 = puVar13 + 6;
          puVar15 = puVar13;
        } while (puVar5 != puVar13);
      }
    }
  }
  else {
    puVar13 = (undefined8 *)0x0;
    puVar15 = (undefined8 *)0x0;
  }
LAB_71007f632c:
  uVar3 = (uint)param_2[4] & 3;
  if ((param_2[4] & 3) == 0) {
    puVar6 = (undefined8 *)FUN_71007f60a0(param_2 + 4);
    puVar7 = (undefined8 *)FUN_71007f60c0(param_2 + 4);
    puVar5 = puVar6;
    if (puVar6 == puVar7) {
      uVar8 = (uint)param_1[4];
      uVar3 = (uint)param_2[4];
    }
    else {
      uVar14 = ((ulong)((long)puVar7 + (-0x30 - (long)puVar6)) >> 4) * 0xaaaaaaaaaaaaaab;
      uVar12 = uVar14 & 0xfffffffffffffff;
      if ((uVar12 < 0xf) || (((long)puVar7 - (long)puVar6 & 0xfU) != 0)) {
        do {
          if (((uint)puVar5[4] & 3) == 3) goto LAB_71007f6728;
          puVar5 = puVar5 + 6;
        } while (puVar5 != puVar7);
      }
      else {
        if ((uVar14 & 0xffffffffffffff0) != 0) {
          uVar12 = uVar12 + 1;
          puVar11 = puVar6 + 4;
          puVar16 = puVar6 + 6;
          uVar14 = 0;
          while( true ) {
            auVar18._0_8_ =
                 CONCAT17((char)puVar11[0x2a],
                          CONCAT16((char)puVar11[0x24],
                                   CONCAT15((char)puVar11[0x1e],
                                            CONCAT14((char)puVar11[0x18],
                                                     CONCAT13((char)puVar11[0x12],
                                                              CONCAT12((char)puVar11[0xc],
                                                                       CONCAT11((char)puVar11[6],
                                                                                (char)*puVar11))))))
                         ) & 0x303030303030303;
            auVar18[8] = (byte)puVar11[0x30] & 3;
            auVar18[9] = (byte)puVar11[0x36] & 3;
            auVar18[10] = (byte)puVar11[0x3c] & 3;
            auVar18[0xb] = (byte)puVar11[0x42] & 3;
            auVar18[0xc] = (byte)puVar11[0x48] & 3;
            auVar18[0xd] = (byte)puVar11[0x4e] & 3;
            auVar18[0xe] = (byte)puVar11[0x54] & 3;
            auVar18[0xf] = (byte)puVar11[0x5a] & 3;
            auVar1[8] = 3;
            auVar1._0_8_ = 0x303030303030303;
            auVar1[9] = 3;
            auVar1[10] = 3;
            auVar1[0xb] = 3;
            auVar1[0xc] = 3;
            auVar1[0xd] = 3;
            auVar1[0xe] = 3;
            auVar1[0xf] = 3;
            auVar19 = NEON_cmeq(auVar18,auVar1,1);
            auVar19 = NEON_umaxp(auVar19,auVar19,4);
            if (auVar19._0_8_ != 0) break;
            uVar14 = uVar14 + 1;
            puVar11 = puVar11 + 0x60;
            if (uVar12 >> 4 == uVar14) {
              if ((uVar12 & 0xf) == 0) {
                puVar5 = puVar16 + 0x5a;
                goto LAB_71007f6820;
              }
              puVar5 = puVar6 + (uVar12 & 0xfffffffffffffff0) * 6;
              break;
            }
            puVar5 = puVar5 + 0x60;
            puVar16 = puVar16 + 0x60;
          }
        }
        do {
          if (((uint)puVar5[4] & 3) == 3) goto LAB_71007f6728;
          puVar5 = puVar5 + 6;
        } while (puVar7 != puVar5);
      }
LAB_71007f6820:
      uVar8 = (uint)param_1[4];
      uVar3 = (uint)param_2[4];
      puVar7 = puVar5;
    }
    uVar3 = uVar3 & 3;
    if ((uVar8 & 3) != 3) goto LAB_71007f6740;
  }
  else if (((uint)param_1[4] & 3) != 3) {
    if (uVar3 != 3) {
      if (puVar13 != puVar15) {
        return 1;
      }
      return 0;
    }
    goto LAB_71007f6350;
  }
  if (uVar3 != 3) {
    return 1;
  }
LAB_71007f6854:
  uVar14 = param_1[1];
  uVar9 = param_2[1];
  uVar12 = uVar14;
  if (uVar9 < uVar14) {
    uVar12 = uVar9;
  }
  if ((uVar12 != 0) && (uVar12 = FUN_710081ec40(*param_1,*param_2), (int)uVar12 != 0)) {
    return uVar12;
  }
  uVar14 = uVar14 - uVar9;
  if (0x7fffffff < (long)uVar14) {
    return 0x7fffffff;
  }
  if ((long)uVar14 < -0x80000000) {
    return 0x80000000;
  }
  return uVar14;
LAB_71007f6728:
  uVar3 = (uint)param_2[4] & 3;
  if (((uint)param_1[4] & 3) == 3) {
    if (uVar3 != 3) {
      if (puVar7 == puVar5) {
        return 1;
      }
      uVar9 = puVar5[1];
      uVar14 = param_1[1];
      uVar12 = uVar14;
      if (uVar9 < uVar14) {
        uVar12 = uVar9;
      }
      if ((uVar12 != 0) && (uVar12 = FUN_710081ec40(*param_1,*puVar5), (int)uVar12 != 0)) {
        return uVar12;
      }
      uVar14 = uVar14 - uVar9;
      if (0x7fffffff < (long)uVar14) {
        return 0x7fffffff;
      }
      if ((long)uVar14 < -0x80000000) {
        return 0x80000000;
      }
      if ((int)uVar14 != 0) {
        return uVar14 & 0xffffffff;
      }
      return (ulong)-(uint)(puVar7 != puVar5 + 6);
    }
    goto LAB_71007f6854;
  }
LAB_71007f6740:
  if (uVar3 != 3) {
    uVar3 = 1;
    if (puVar13 != puVar15 && puVar7 != puVar5) {
      do {
        uVar14 = puVar13[1];
        uVar9 = puVar5[1];
        uVar12 = uVar14;
        if (uVar9 < uVar14) {
          uVar12 = uVar9;
        }
        if ((uVar12 != 0) && (uVar12 = FUN_710081ec40(*puVar13,*puVar5), (int)uVar12 != 0)) {
          return uVar12;
        }
        uVar14 = uVar14 - uVar9;
        if (0x7fffffff < (long)uVar14) {
          return 0x7fffffff;
        }
        if ((long)uVar14 < -0x80000000) {
          return 0x80000000;
        }
        if ((int)uVar14 != 0) {
          return uVar14 & 0xffffffff;
        }
        puVar13 = puVar13 + 6;
        puVar5 = puVar5 + 6;
        uVar3 = uVar3 + 1;
      } while (puVar15 != puVar13 && puVar5 != puVar7);
    }
    if (puVar15 != puVar13) {
      return (ulong)uVar3;
    }
    if (puVar5 == puVar7) {
      return 0;
    }
    return (ulong)-uVar3;
  }
LAB_71007f6350:
  if (puVar13 == puVar15) {
    return 0xffffffff;
  }
  uVar14 = puVar13[1];
  uVar9 = param_2[1];
  uVar12 = uVar14;
  if (uVar9 < uVar14) {
    uVar12 = uVar9;
  }
  if ((uVar12 != 0) && (uVar12 = FUN_710081ec40(*puVar13,*param_2), (int)uVar12 != 0)) {
    return uVar12;
  }
  uVar14 = uVar14 - uVar9;
  if (0x7fffffff < (long)uVar14) {
    return 0x7fffffff;
  }
  if ((long)uVar14 < -0x80000000) {
    return 0x80000000;
  }
  if ((int)uVar14 == 0) {
    return (ulong)(puVar15 != puVar13 + 6);
  }
  return uVar14 & 0xffffffff;
}



// ===== FUN_71007f69c0 @ 71007f69c0 (size=212) =====

bool FUN_71007f69c0(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 0x20);
  if ((((uint)uVar5 & 3) == 3) && (*(long *)(param_1 + 8) != 0)) {
    return true;
  }
  if ((3 < uVar5) && (*(int *)(uVar5 & 0xfffffffffffffffc) != 0)) {
    param_1 = param_1 + 0x20;
    lVar2 = FUN_71007f60a0(param_1);
    lVar4 = lVar2 + 0x30;
    if (((uint)*(undefined8 *)(lVar2 + 0x20) & 3) != 1) {
      lVar4 = lVar2;
    }
    lVar3 = FUN_71007f60c0(param_1);
    lVar2 = lVar4;
    if ((lVar3 != lVar4) && (lVar2 = lVar4 + 0x30, ((uint)*(undefined8 *)(lVar4 + 0x20) & 3) != 2))
    {
      lVar2 = lVar4;
    }
    lVar4 = FUN_71007f60c0(param_1);
    bVar1 = false;
    if (lVar4 != lVar2) {
      bVar1 = *(long *)(lVar2 + 8) != 0;
    }
    return bVar1;
  }
  return false;
}



// ===== FUN_71007f6aa0 @ 71007f6aa0 (size=96) =====

undefined8 FUN_71007f6aa0(long *param_1)

{
  int *piVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  while( true ) {
    if (lVar2 == 0) {
      return 0;
    }
    piVar1 = (int *)param_1[4];
    if (((uint)piVar1 & 3) == 3) {
      return 1;
    }
    if (((ulong)piVar1 & 3) != 0) {
      return 0;
    }
    if (*(char *)(*param_1 + lVar2 + -1) == '/') break;
    param_1 = (long *)(piVar1 + (long)*piVar1 * 0xc + -10);
    lVar2 = param_1[1];
  }
  return 0;
}



// ===== FUN_71007f6b00 @ 71007f6b00 (size=184) =====

undefined1  [16] FUN_71007f6b00(int *param_1)

{
  long lVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  piVar2 = *(int **)(param_1 + 8);
  if (((((uint)piVar2 & 3) == 3) ||
      ((((((ulong)piVar2 & 3) == 0 && ((int *)0x3 < piVar2)) &&
        (*(int *)((ulong)piVar2 & 0xfffffffffffffffc) != 0)) &&
       (param_1 = piVar2 + (long)*piVar2 * 0xc + -10, ((uint)*(undefined8 *)(param_1 + 8) & 3) == 3)
       ))) && (*(ulong *)(param_1 + 2) != 0)) {
    if ((*(ulong *)(param_1 + 2) < 3) && (**(char **)param_1 == '.')) {
      auVar4._8_8_ = 0xffffffffffffffff;
      auVar4._0_8_ = param_1;
      return auVar4;
    }
    lVar1 = FUN_71007e3080(param_1,0x2e,0xffffffffffffffff);
    if (lVar1 == 0) {
      lVar1 = -1;
    }
    auVar3._8_8_ = lVar1;
    auVar3._0_8_ = param_1;
    return auVar3;
  }
  return ZEXT816(0);
}



// ===== FUN_71007f6bc0 @ 71007f6bc0 (size=1424) =====

void FUN_71007f6bc0(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  char *pcVar12;
  long lVar13;
  ulong uVar14;
  char *pcVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong uVar18;
  int local_614;
  ulong local_600;
  char *pcStack_5f8;
  byte local_5f0;
  ulong local_5e8 [189];
  
  if (3 < (ulong)param_1[4]) {
    piVar4 = (int *)(param_1[4] & 0xfffffffffffffffc);
    iVar8 = *piVar4;
    if (0 < iVar8) {
      piVar6 = piVar4 + 2;
      do {
        if (*(long *)(piVar6 + 8) != 0) {
          FUN_71007f5e80(piVar6 + 8);
        }
        if (*(int **)piVar6 != piVar6 + 4) {
          thunk_FUN_710081c200(*(int **)piVar6,*(long *)(piVar6 + 4) + 1);
        }
        piVar6 = piVar6 + 0xc;
      } while (piVar6 != piVar4 + (ulong)(iVar8 - 1) * 0xc + 0xe);
    }
    *piVar4 = 0;
  }
  uVar18 = param_1[1];
  if (uVar18 == 0) {
    param_1[4] = param_1[4] | 3;
    return;
  }
  puVar2 = param_1 + 4;
  pcVar12 = (char *)*param_1;
  puVar17 = &local_600;
  FUN_7100808340(puVar17,0,0x600);
  if (*pcVar12 == '/') {
    pcStack_5f8 = pcVar12;
    if (uVar18 == 1) {
      puVar11 = local_5e8;
      local_5f0 = 2;
      local_600 = 1;
      goto LAB_71007f6ecc;
    }
    uVar9 = 1;
    do {
      if (pcVar12[uVar9] != '/') {
        local_600 = 1;
        local_5f0 = 2;
        iVar8 = (int)uVar9;
        if (uVar18 <= uVar9) goto LAB_71007f70fc;
        puVar11 = local_5e8;
        goto LAB_71007f6c40;
      }
      uVar9 = uVar9 + 1;
    } while (uVar18 != uVar9);
    iVar8 = (int)uVar18;
LAB_71007f70fc:
    local_5f0 = 2;
    local_600 = 1;
    puVar11 = local_5e8;
  }
  else {
    iVar8 = 0;
    uVar9 = 0;
    puVar11 = puVar17;
LAB_71007f6c40:
    do {
      if (pcVar12[uVar9] != '/') {
        if (uVar9 < uVar18) {
          uVar16 = uVar18 - uVar9;
          lVar3 = FUN_710080c980(pcVar12 + uVar9,0x2f,uVar16);
          uVar5 = lVar3 - (long)pcVar12;
          if (lVar3 == 0) {
            uVar5 = 0xffffffffffffffff;
          }
          uVar14 = uVar5 - uVar9;
        }
        else {
          uVar14 = ~uVar9;
          if (uVar18 < uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_7100003bf8("%s: __pos (which is %zu) > __size (which is %zu)",
                           "basic_string_view::substr",uVar9,uVar18);
          }
          uVar16 = 0;
          uVar5 = 0xffffffffffffffff;
        }
        pcVar15 = pcVar12 + uVar9;
        if (uVar16 < uVar14) {
          uVar14 = uVar16;
        }
        goto LAB_71007f6c84;
      }
      uVar9 = uVar9 + 1;
    } while (uVar18 != uVar9);
  }
  if (iVar8 == 0) {
    pcVar15 = pcVar12 + uVar18;
    uVar5 = 0xffffffffffffffff;
    uVar14 = 0;
LAB_71007f6c84:
    do {
      puVar10 = puVar11 + 3;
      *puVar11 = uVar14;
      puVar11[1] = (ulong)pcVar15;
      *(undefined1 *)(puVar11 + 2) = 3;
      if (uVar5 == 0xffffffffffffffff) {
LAB_71007f6de4:
        puVar11 = puVar10;
        if (puVar10 != (ulong *)&stack0x00000000) break;
        uVar14 = 0;
        pcVar15 = (char *)0x0;
        uVar5 = 0xffffffffffffffff;
        local_614 = 0;
      }
      else {
        uVar9 = uVar5;
        if (uVar5 < uVar18) {
          do {
            if (pcVar12[uVar9] != '/') {
              if (uVar18 <= uVar9) {
                if (uVar18 < uVar9) {
                    /* WARNING: Subroutine does not return */
                  FUN_7100003bf8("%s: __pos (which is %zu) > __size (which is %zu)",
                                 "basic_string_view::substr",uVar9,uVar18);
                }
                pcVar15 = pcVar12 + uVar9;
                uVar14 = uVar18 - uVar9;
                if (~uVar9 < uVar18 - uVar9) {
                  uVar14 = ~uVar9;
                }
                if (puVar10 == (ulong *)&stack0x00000000) {
                  uVar5 = 0xffffffffffffffff;
                  goto LAB_71007f6d0c;
                }
                puVar10 = puVar11 + 6;
                puVar11[3] = uVar14;
                puVar11[4] = (ulong)pcVar15;
                *(undefined1 *)(puVar11 + 5) = 3;
                goto LAB_71007f6de4;
              }
              uVar16 = uVar18 - uVar9;
              pcVar15 = pcVar12 + uVar9;
              lVar3 = FUN_710080c980(pcVar15,0x2f,uVar16);
              uVar5 = lVar3 - (long)pcVar12;
              if (lVar3 == 0) {
                uVar5 = 0xffffffffffffffff;
              }
              uVar14 = uVar5 - uVar9;
              if (uVar16 < uVar5 - uVar9) {
                uVar14 = uVar16;
              }
              puVar11 = puVar10;
              if (puVar10 != (ulong *)&stack0x00000000) goto LAB_71007f6c84;
              goto LAB_71007f6d0c;
            }
            uVar9 = uVar9 + 1;
          } while (uVar18 != uVar9);
        }
        pcVar15 = pcVar12 + uVar18;
        if (puVar10 != (ulong *)&stack0x00000000) {
          puVar10 = puVar11 + 6;
          puVar11[3] = 0;
          puVar11[4] = (ulong)pcVar15;
          *(undefined1 *)(puVar11 + 5) = 3;
          goto LAB_71007f6de4;
        }
        uVar14 = 0;
        uVar5 = 0xffffffffffffffff;
LAB_71007f6d0c:
        local_614 = 3;
      }
      iVar8 = 0x40;
      piVar4 = (int *)(param_1[4] & 0xfffffffffffffffc);
      param_1[4] = piVar4;
      if ((int *)0x3 < piVar4) {
        iVar8 = *piVar4 + 0x40;
      }
      FUN_71007f7180(puVar2,iVar8,0);
      plVar7 = (long *)((int *)param_1[4] + (long)*(int *)param_1[4] * 0xc + 2);
      puVar11 = puVar17;
      do {
        uVar9 = *puVar11;
        uVar16 = puVar11[1];
        *plVar7 = (long)(plVar7 + 2);
        uVar1 = puVar11[2];
        if (uVar16 == 0 && uVar9 != 0) goto LAB_71007f7150;
        FUN_71007f5be0(plVar7,uVar16,uVar16 + uVar9);
        FUN_71007f6080(plVar7 + 4);
        puVar11 = puVar11 + 3;
        plVar7[4] = plVar7[4] & 0xfffffffffffffffcU | (ulong)(byte)uVar1;
        plVar7[5] = uVar16 - (long)pcVar12;
        *(int *)param_1[4] = *(int *)param_1[4] + 1;
        plVar7 = plVar7 + 6;
      } while (puVar11 != (ulong *)&stack0x00000000);
      puVar11 = puVar17;
    } while (local_614 != 0);
  }
  if (puVar11 == puVar17) {
    return;
  }
LAB_71007f6ecc:
  lVar3 = (long)puVar11 - (long)puVar17;
  piVar4 = (int *)(param_1[4] & 0xfffffffffffffffc);
  if (lVar3 == 0x18) {
    if (((ulong)param_1[4] < 4) || (iVar8 = *piVar4, iVar8 == 0)) {
      param_1[4] = (ulong)local_5f0 | (ulong)piVar4;
      return;
    }
    param_1[4] = piVar4;
    lVar13 = 1;
    FUN_71007f7180(puVar2,iVar8 + 1,1);
  }
  else {
    param_1[4] = piVar4;
    iVar8 = 0;
    if ((int *)0x3 < piVar4) {
      iVar8 = *piVar4;
    }
    lVar13 = (lVar3 >> 3) * -0x5555555555555555;
    FUN_71007f7180(puVar2,iVar8 + (int)lVar13,1);
    if (lVar3 < 1) {
      return;
    }
  }
  lVar3 = 0;
  plVar7 = (long *)((int *)param_1[4] + (long)*(int *)param_1[4] * 0xc + 2);
  while( true ) {
    uVar18 = *puVar17;
    uVar9 = puVar17[1];
    *plVar7 = (long)(plVar7 + 2);
    uVar14 = puVar17[2];
    if (uVar9 == 0 && uVar18 != 0) break;
    FUN_71007f5be0(plVar7,uVar9,uVar9 + uVar18);
    FUN_71007f6080(plVar7 + 4);
    lVar3 = lVar3 + 1;
    puVar17 = puVar17 + 3;
    plVar7[4] = plVar7[4] & 0xfffffffffffffffcU | (ulong)(byte)uVar14;
    plVar7[5] = uVar9 - (long)pcVar12;
    *(int *)param_1[4] = *(int *)param_1[4] + 1;
    plVar7 = plVar7 + 6;
    if (lVar13 <= lVar3) {
      return;
    }
  }
LAB_71007f7150:
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string: construction from null is not valid");
}



// ===== FUN_71007f7180 @ 71007f7180 (size=384) =====

long * FUN_71007f7180(ulong *param_1,int param_2,uint param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined1 *puVar5;
  ulong uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  long *local_8;
  
  uVar6 = *param_1;
  local_8 = (long *)0x0;
  piVar8 = (int *)(uVar6 & 0xfffffffffffffffc);
  if (3 < uVar6) {
    local_8 = (long *)(ulong)(uint)piVar8[1];
  }
  iVar2 = (int)local_8;
  if (iVar2 < param_2) {
    if (((param_3 & 1) == 0) && (iVar2 = iVar2 + iVar2 / 2, param_2 < iVar2)) {
      param_2 = iVar2;
    }
    if (0x1ffffffe < param_2) {
      plVar4 = (long *)FUN_7100003a1c();
      uVar6 = plVar4[4];
      if ((uVar6 & 3) == 0) {
        if (3 < uVar6) {
          piVar8 = (int *)(uVar6 & 0xfffffffffffffffc);
          if (((*piVar8 != 0) &&
              (lVar3 = (long)*piVar8, ((uint)*(undefined8 *)(piVar8 + lVar3 * 0xc + -2) & 3) == 3))
             && (*(long *)(piVar8 + lVar3 * 0xc + -8) != 0)) {
            uVar6 = *(ulong *)(piVar8 + lVar3 * 0xc);
            if ((ulong)plVar4[1] < uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_7100003bf8("%s: __pos (which is %zu) > this->size() (which is %zu)",
                             "basic_string::erase");
            }
            plVar4[1] = uVar6;
            *(undefined1 *)(*plVar4 + uVar6) = 0;
            if ((((uint)*(undefined8 *)(piVar8 + lVar3 * 0xc + -0xe) & 3) - 1 & 0xff) < 2) {
              piVar8 = (int *)plVar4[4];
              lVar3 = (long)*piVar8;
              if (*(long *)(piVar8 + lVar3 * 0xc + -2) != 0) {
                FUN_71007f5e80(piVar8 + lVar3 * 0xc + -2);
              }
              if (*(int **)(piVar8 + lVar3 * 0xc + -10) != piVar8 + lVar3 * 0xc + -6) {
                thunk_FUN_710081c200
                          (*(int **)(piVar8 + lVar3 * 0xc + -10),
                           *(long *)(piVar8 + lVar3 * 0xc + -6) + 1);
              }
              *piVar8 = *piVar8 + -1;
              uVar6 = plVar4[4];
              if ((3 < uVar6) && (*(int *)(uVar6 & 0xfffffffffffffffc) == 1)) {
                plVar4[4] = uVar6 & 0xfffffffffffffffc | *(ulong *)(uVar6 + 0x28) & 3;
                FUN_71007f6100();
              }
            }
            else {
              puVar5 = *(undefined1 **)(piVar8 + lVar3 * 0xc + -10);
              (piVar8 + lVar3 * 0xc + -8)[0] = 0;
              (piVar8 + lVar3 * 0xc + -8)[1] = 0;
              *puVar5 = 0;
              FUN_71007f6bc0();
            }
          }
        }
      }
      else if (((uint)uVar6 & 3) == 3) {
        plVar4[1] = 0;
        *(undefined1 *)*plVar4 = 0;
        FUN_71007f6bc0();
        return plVar4;
      }
      return plVar4;
    }
    local_8 = (long *)FUN_71007af5c0((long)param_2 * 0x30 + 8);
    *local_8 = 0;
    *(int *)((long)local_8 + 4) = param_2;
    if ((3 < uVar6) && (iVar2 = *piVar8, iVar2 != 0)) {
      piVar7 = piVar8 + 2;
      plVar4 = local_8 + 1;
      piVar9 = piVar8 + 6;
      do {
        *plVar4 = (long)(plVar4 + 2);
        if (*(int **)piVar7 == piVar9) {
          FUN_710080f900(plVar4 + 2,piVar9,*(long *)(piVar7 + 2) + 1);
        }
        else {
          lVar3 = *(long *)(piVar7 + 4);
          *plVar4 = (long)*(int **)piVar7;
          plVar4[2] = lVar3;
        }
        *(int **)piVar7 = piVar9;
        plVar4[1] = *(long *)(piVar7 + 2);
        piVar9 = piVar9 + 0xc;
        plVar4[4] = *(long *)(piVar7 + 8);
        piVar7[2] = 0;
        piVar7[3] = 0;
        *(undefined1 *)(piVar7 + 4) = 0;
        piVar7[8] = 0;
        piVar7[9] = 0;
        FUN_71007f6bc0(piVar7);
        plVar1 = (long *)(piVar7 + 10);
        piVar7 = piVar7 + 0xc;
        plVar4[5] = *plVar1;
        plVar4 = plVar4 + 6;
      } while (piVar8 + (long)iVar2 * 0xc + 2 != piVar7);
      *(int *)local_8 = iVar2;
    }
    plVar4 = (long *)*param_1;
    *param_1 = (ulong)local_8;
    if (plVar4 != (long *)0x0) {
      local_8 = plVar4;
      local_8 = (long *)FUN_71007f5e80(&local_8);
    }
  }
  return local_8;
}



// ===== FUN_71007f7300 @ 71007f7300 (size=408) =====

long * FUN_71007f7300(long *param_1)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  undefined1 *puVar4;
  
  uVar2 = param_1[4];
  if ((uVar2 & 3) == 0) {
    if (3 < uVar2) {
      piVar3 = (int *)(uVar2 & 0xfffffffffffffffc);
      if (((*piVar3 != 0) &&
          (lVar1 = (long)*piVar3, ((uint)*(undefined8 *)(piVar3 + lVar1 * 0xc + -2) & 3) == 3)) &&
         (*(long *)(piVar3 + lVar1 * 0xc + -8) != 0)) {
        uVar2 = *(ulong *)(piVar3 + lVar1 * 0xc);
        if ((ulong)param_1[1] < uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_7100003bf8("%s: __pos (which is %zu) > this->size() (which is %zu)",
                         "basic_string::erase");
        }
        param_1[1] = uVar2;
        *(undefined1 *)(*param_1 + uVar2) = 0;
        if ((((uint)*(undefined8 *)(piVar3 + lVar1 * 0xc + -0xe) & 3) - 1 & 0xff) < 2) {
          piVar3 = (int *)param_1[4];
          lVar1 = (long)*piVar3;
          if (*(long *)(piVar3 + lVar1 * 0xc + -2) != 0) {
            FUN_71007f5e80(piVar3 + lVar1 * 0xc + -2);
          }
          if (*(int **)(piVar3 + lVar1 * 0xc + -10) != piVar3 + lVar1 * 0xc + -6) {
            thunk_FUN_710081c200
                      (*(int **)(piVar3 + lVar1 * 0xc + -10),
                       *(long *)(piVar3 + lVar1 * 0xc + -6) + 1);
          }
          *piVar3 = *piVar3 + -1;
          uVar2 = param_1[4];
          if (3 < uVar2) {
            if (*(int *)(uVar2 & 0xfffffffffffffffc) == 1) {
              param_1[4] = uVar2 & 0xfffffffffffffffc | *(ulong *)(uVar2 + 0x28) & 3;
              FUN_71007f6100();
            }
          }
        }
        else {
          puVar4 = *(undefined1 **)(piVar3 + lVar1 * 0xc + -10);
          (piVar3 + lVar1 * 0xc + -8)[0] = 0;
          (piVar3 + lVar1 * 0xc + -8)[1] = 0;
          *puVar4 = 0;
          FUN_71007f6bc0();
        }
      }
    }
  }
  else if (((uint)uVar2 & 3) == 3) {
    param_1[1] = 0;
    *(undefined1 *)*param_1 = 0;
    FUN_71007f6bc0();
    return param_1;
  }
  return param_1;
}



// ===== FUN_71007f74a0 @ 71007f74a0 (size=164) =====

void FUN_71007f74a0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_7100aef3d8;
  plVar5 = (long *)param_1[5];
  if (plVar5 == (long *)0x0) {
    FUN_71007e3540(param_1);
    return;
  }
  plVar1 = plVar5 + 1;
  if (*plVar1 != 0x100000001) {
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      FUN_71000a22d0();
    }
    FUN_71007e3540(param_1);
    return;
  }
  plVar5[1] = 0;
  (**(code **)(*plVar5 + 0x10))();
  (**(code **)(*plVar5 + 0x18))();
  FUN_71007e3540(param_1);
  return;
}



// ===== FUN_71007f7560 @ 71007f7560 (size=32) =====

void FUN_71007f7560(undefined8 param_1)

{
  FUN_71007f74a0();
  thunk_FUN_710081c200(param_1,0x30);
  return;
}



// ===== FUN_71007f7580 @ 71007f7580 (size=336) =====

void FUN_71007f7580(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *local_28;
  long local_20;
  long local_18 [2];
  long local_8;
  
  lVar1 = FUN_710081ce00(param_2);
  local_28 = local_18;
  FUN_71007f5be0(&local_28,param_2,param_2 + lVar1);
  FUN_71007f6080(&local_8);
  FUN_71007f6bc0(&local_28);
  plVar2 = (long *)*param_1;
  if (plVar2 == param_1 + 2) {
    if (local_28 != local_18) {
      *param_1 = local_28;
      param_1[1] = local_20;
      param_1[2] = local_18[0];
      local_28 = local_18;
      goto LAB_71007f7604;
    }
  }
  else if (local_28 != local_18) {
    *param_1 = local_28;
    param_1[1] = local_20;
    lVar1 = param_1[2];
    param_1[2] = local_18[0];
    local_28 = local_18;
    if (plVar2 != (long *)0x0) {
      local_28 = plVar2;
      local_18[0] = lVar1;
    }
    goto LAB_71007f7604;
  }
  if (local_20 != 0) {
    if (local_20 == 1) {
      *(undefined1 *)plVar2 = (undefined1)local_18[0];
    }
    else {
      FUN_710080f900(plVar2,local_18);
    }
    plVar2 = (long *)*param_1;
  }
  param_1[1] = local_20;
  *(undefined1 *)((long)plVar2 + local_20) = 0;
LAB_71007f7604:
  local_20 = 0;
  *(undefined1 *)local_28 = 0;
  lVar1 = param_1[4];
  param_1[4] = local_8;
  local_8 = 0;
  if (lVar1 != 0) {
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
  return;
}



// ===== FUN_71007f7700 @ 71007f7700 (size=2340) =====

void FUN_71007f7700(long *param_1,ulong param_2,char *param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long **pplVar9;
  long *plVar10;
  int iVar11;
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  undefined *puVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  long **pplVar22;
  long **pplVar23;
  long *plVar24;
  long *plVar25;
  long lVar26;
  int local_630;
  long *local_600;
  long local_5f8;
  long local_5f0;
  long *local_5e8;
  long local_5e0 [188];
  
  if (((param_2 != 0) && (*param_3 == '/')) || (uVar5 = param_1[1], uVar5 == 0)) {
    local_600 = &local_5f0;
    FUN_71007f5be0(&local_600,param_3,param_3 + param_2);
    FUN_71007f6080(local_5e0);
    FUN_71007f6bc0(&local_600);
    plVar24 = (long *)*param_1;
    if (plVar24 == param_1 + 2) {
      if (local_600 != &local_5f0) {
        *param_1 = (long)local_600;
        param_1[1] = local_5f8;
        param_1[2] = local_5f0;
        local_600 = &local_5f0;
        goto LAB_71007f79bc;
      }
    }
    else if (local_600 != &local_5f0) {
      *param_1 = (long)local_600;
      param_1[1] = local_5f8;
      lVar26 = param_1[2];
      param_1[2] = local_5f0;
      local_600 = &local_5f0;
      if (plVar24 != (long *)0x0) {
        local_600 = plVar24;
        local_5f0 = lVar26;
      }
      goto LAB_71007f79bc;
    }
    if (local_5f8 != 0) {
      if (local_5f8 == 1) {
        *(undefined1 *)plVar24 = (undefined1)local_5f0;
      }
      else {
        FUN_710080f900(plVar24,&local_5f0);
      }
      plVar24 = (long *)*param_1;
    }
    param_1[1] = local_5f8;
    *(undefined1 *)((long)plVar24 + local_5f8) = 0;
LAB_71007f79bc:
    local_5f8 = 0;
    *(undefined1 *)local_600 = 0;
    lVar26 = param_1[4];
    param_1[4] = local_5e0[0];
    local_5e0[0] = 0;
    if (lVar26 != 0) {
      FUN_71007f5e80(param_1 + 4);
    }
    local_5f8 = 0;
    *(undefined1 *)local_600 = 0;
    FUN_71007f6bc0(&local_600);
    if (local_5e0[0] != 0) {
      FUN_71007f5e80(local_5e0);
    }
    if (local_600 == &local_5f0) {
      return;
    }
    thunk_FUN_710081c200(local_600,local_5f0 + 1);
    return;
  }
  uVar19 = param_1[4];
  if (uVar19 < 4) {
    uVar6 = FUN_71007f6aa0(param_1);
    if ((uVar6 & 1) != 0) goto LAB_71007f778c;
LAB_71007f7760:
    if (param_2 == 0) {
      return;
    }
    puVar17 = (undefined *)0x0;
    lVar26 = 0;
  }
  else {
    uVar6 = FUN_71007f6aa0(param_1);
    if ((uVar6 & 1) == 0) goto LAB_71007f7760;
LAB_71007f778c:
    puVar17 = &DAT_71009ce502;
    lVar26 = 1;
  }
  if (0x7ffffffffffffffeU - param_1[1] < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::append");
  }
  FUN_71007e2a60(param_1,param_3,param_2);
  if ((ulong)param_1[1] < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003bf8("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::replace",
                   uVar5);
  }
  FUN_71007e28e0(param_1,uVar5,0,puVar17,lVar26);
  lVar2 = *param_1;
  uVar6 = param_1[1];
  pplVar22 = &local_600;
  lVar1 = lVar2 + lVar26 + uVar5;
  uVar18 = uVar6 - (lVar26 + uVar5);
  FUN_7100808340(pplVar22,0,0x600);
  uVar14 = param_1[4];
  if ((uVar14 & 3) == 0) {
    uVar15 = 0;
    if (3 < uVar14) {
      uVar15 = *(uint *)(uVar14 & 0xfffffffffffffffc);
    }
  }
  else {
    uVar15 = (uint)(uVar6 != 0);
  }
  if (uVar18 == 0) {
    iVar11 = uVar15 + (int)lVar26;
    plVar25 = (long *)0x0;
    uVar13 = 0xffffffffffffffff;
    plVar24 = (long *)0x0;
    local_630 = 0;
    pplVar23 = pplVar22;
  }
  else {
    uVar16 = 0;
    do {
      if (*(char *)(lVar1 + uVar16) != '/') {
        if (uVar16 < uVar18) {
          plVar25 = (long *)(uVar18 - uVar16);
          lVar7 = FUN_710080c980(lVar1 + uVar16,0x2f,plVar25);
          uVar13 = lVar7 - lVar1;
          if (lVar7 == 0) {
            uVar13 = 0xffffffffffffffff;
          }
          plVar8 = (long *)(uVar13 - uVar16);
        }
        else {
          plVar8 = (long *)~uVar16;
          if (uVar18 < uVar16) {
                    /* WARNING: Subroutine does not return */
            FUN_7100003bf8("%s: __pos (which is %zu) > __size (which is %zu)",
                           "basic_string_view::substr",uVar16,uVar18);
          }
          plVar25 = (long *)0x0;
          uVar13 = 0xffffffffffffffff;
        }
        plVar24 = (long *)(lVar1 + uVar16);
        pplVar9 = pplVar22;
        if (plVar8 < plVar25) {
          plVar25 = plVar8;
        }
        goto LAB_71007f78a8;
      }
      uVar16 = uVar16 + 1;
    } while (uVar18 != uVar16);
    pplVar23 = &local_5e8;
    local_5f8 = lVar2 + uVar6;
    local_5f0 = CONCAT71(local_5f0._1_7_,3);
LAB_71007f7a94:
    plVar25 = (long *)0x0;
    uVar13 = 0xffffffffffffffff;
    plVar24 = (long *)0x0;
    local_630 = 0;
    iVar11 = uVar15 + (int)((long)pplVar23 - (long)pplVar22 >> 3) * -0x55555555;
  }
LAB_71007f7ab8:
  param_1[4] = uVar14 & 0xfffffffffffffffc;
  uVar14 = uVar6;
  if (uVar5 < uVar6) {
    uVar14 = uVar5;
  }
  FUN_71007f7180(param_1 + 4,iVar11,0);
  piVar12 = (int *)param_1[4];
  lVar7 = (long)*piVar12;
  plVar8 = (long *)(piVar12 + lVar7 * 0xc + 2);
  if ((uVar19 & 3) == 0) {
    plVar10 = (long *)(piVar12 + lVar7 * 0xc + -10);
    plVar21 = plVar8;
    if (plVar10[1] == 0) {
      if (plVar10[4] != 0) {
        FUN_71007f5e80(plVar10 + 4);
      }
      if (*(long **)(piVar12 + lVar7 * 0xc + -10) != plVar10 + 2) {
        thunk_FUN_710081c200(*(long **)(piVar12 + lVar7 * 0xc + -10),plVar10[2] + 1);
      }
      *piVar12 = *piVar12 + -1;
      plVar21 = plVar10;
    }
  }
  else {
    *(long **)(piVar12 + lVar7 * 0xc + 2) = plVar8 + 2;
    if (lVar2 == 0 && uVar14 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    FUN_71007f5be0(plVar8,lVar2,lVar2 + uVar14);
    FUN_71007f6080(plVar8 + 4);
    plVar21 = plVar8 + 6;
    plVar8[4] = plVar8[4] & 0xfffffffffffffffcU | (ulong)((uint)uVar19 & 3);
    plVar8[5] = 0;
    *(int *)param_1[4] = *(int *)param_1[4] + 1;
  }
  lVar7 = uVar14 + lVar26;
  if (pplVar23 == pplVar22) {
    if (lVar26 != 0) {
      *plVar21 = (long)(plVar21 + 2);
      FUN_71007f5be0(plVar21,0,0);
      FUN_71007f6080(plVar21 + 4);
      plVar21[4] = plVar21[4] | 3;
      plVar21[5] = lVar7;
      *(int *)param_1[4] = *(int *)param_1[4] + 1;
      return;
    }
  }
  else {
    do {
      plVar20 = plVar21;
      plVar8 = *pplVar22;
      plVar21 = plVar20 + 6;
      bVar3 = *(byte *)(pplVar22 + 2);
      plVar10 = pplVar22[1];
      *plVar20 = (long)(plVar20 + 2);
      if (plVar10 == (long *)0x0 && plVar8 != (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003ab8("basic_string: construction from null is not valid");
      }
      FUN_71007f5be0(plVar20,plVar10,(long)plVar10 + (long)plVar8);
      FUN_71007f6080(plVar20 + 4);
      pplVar22 = pplVar22 + 3;
      plVar20[4] = plVar20[4] & 0xfffffffffffffffcU | (ulong)bVar3;
      plVar20[5] = (long)plVar10 + (lVar7 - lVar1);
      *(int *)param_1[4] = *(int *)param_1[4] + 1;
    } while (pplVar23 != pplVar22);
    if (local_630 != 0) {
      *plVar21 = (long)(plVar20 + 8);
      lVar26 = (long)plVar24 + (lVar7 - lVar1);
      if (plVar24 == (long *)0x0 && plVar25 != (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003ab8("basic_string: construction from null is not valid");
      }
      while( true ) {
        FUN_71007f5be0(plVar21,plVar24,(long)plVar24 + (long)plVar25);
        FUN_71007f6080(plVar21 + 4);
        plVar21[4] = plVar21[4] | 3;
        plVar21[5] = lVar26;
        *(int *)param_1[4] = *(int *)param_1[4] + 1;
        if (uVar13 == 0xffffffffffffffff) break;
        for (; uVar13 < uVar18; uVar13 = uVar13 + 1) {
          if (*(char *)(lVar1 + uVar13) != '/') {
            if (uVar13 < uVar18) {
              plVar25 = (long *)(uVar18 - uVar13);
              lVar26 = FUN_710080c980(lVar1 + uVar13,0x2f,plVar25);
              uVar5 = lVar26 - lVar1;
              if (lVar26 == 0) {
                uVar5 = 0xffffffffffffffff;
              }
              plVar8 = (long *)(uVar5 - uVar13);
            }
            else {
              plVar8 = (long *)~uVar13;
              if (uVar18 < uVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_7100003bf8("%s: __pos (which is %zu) > __size (which is %zu)",
                               "basic_string_view::substr",uVar13,uVar18);
              }
              plVar25 = (long *)0x0;
              uVar5 = 0xffffffffffffffff;
            }
            plVar24 = (long *)(lVar1 + uVar13);
            if (plVar8 < plVar25) {
              plVar25 = plVar8;
            }
            goto LAB_71007f7c6c;
          }
        }
        uVar5 = 0xffffffffffffffff;
        plVar24 = (long *)(lVar2 + uVar6);
        plVar25 = (long *)0x0;
LAB_71007f7c6c:
        lVar26 = (long)plVar24 + (lVar7 - lVar1);
        plVar21[6] = (long)(plVar21 + 8);
        uVar13 = uVar5;
        plVar21 = plVar21 + 6;
      }
    }
  }
  return;
LAB_71007f78a8:
  do {
    pplVar23 = pplVar9 + 3;
    *pplVar9 = plVar25;
    pplVar9[1] = plVar24;
    *(undefined1 *)(pplVar9 + 2) = 3;
    if (uVar13 == 0xffffffffffffffff) goto LAB_71007f7a94;
    uVar16 = uVar13;
    if (uVar18 <= uVar13) {
      plVar24 = (long *)(lVar2 + uVar6);
      if (pplVar23 != (long **)&stack0x00000000) {
        pplVar23 = pplVar9 + 6;
        pplVar9[3] = (long *)0x0;
        pplVar9[4] = plVar24;
        *(undefined1 *)(pplVar9 + 5) = 3;
        goto LAB_71007f7a94;
      }
LAB_71007f7cdc:
      plVar25 = (long *)0x0;
      uVar13 = 0xffffffffffffffff;
      break;
    }
    while (*(char *)(lVar1 + uVar16) == '/') {
      uVar16 = uVar16 + 1;
      if (uVar18 <= uVar16) {
        plVar24 = (long *)(lVar2 + uVar6);
        goto joined_r0x0071007f7a80;
      }
    }
    if (uVar18 <= uVar16) {
      if (uVar18 < uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003bf8("%s: __pos (which is %zu) > __size (which is %zu)",
                       "basic_string_view::substr",uVar16,uVar18);
      }
      plVar24 = (long *)(lVar1 + uVar16);
joined_r0x0071007f7a80:
      if (pplVar23 == (long **)&stack0x00000000) goto LAB_71007f7cdc;
      pplVar23 = pplVar9 + 6;
      pplVar9[3] = (long *)0x0;
      pplVar9[4] = plVar24;
      *(undefined1 *)(pplVar9 + 5) = 3;
      goto LAB_71007f7a94;
    }
    plVar8 = (long *)(uVar18 - uVar16);
    plVar24 = (long *)(lVar1 + uVar16);
    lVar7 = FUN_710080c980(plVar24,0x2f,plVar8);
    uVar13 = lVar7 - lVar1;
    if (lVar7 == 0) {
      uVar13 = 0xffffffffffffffff;
    }
    plVar25 = (long *)(uVar13 - uVar16);
    if (plVar8 < (long *)(uVar13 - uVar16)) {
      plVar25 = plVar8;
    }
    pplVar9 = pplVar23;
  } while (pplVar23 != (long **)&stack0x00000000);
  uVar16 = uVar13;
  iVar4 = uVar15 + (int)((long)pplVar23 - (long)pplVar22 >> 3) * -0x55555555;
  while (iVar11 = iVar4 + 1, uVar16 != 0xffffffffffffffff) {
    while( true ) {
      if (uVar18 <= uVar16) goto LAB_71007f7d64;
      if (*(char *)(lVar1 + uVar16) != '/') break;
      uVar16 = uVar16 + 1;
    }
    if (uVar18 <= uVar16) {
      iVar11 = iVar4 + 2;
      if (uVar18 < uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003bf8("%s: __pos (which is %zu) > __size (which is %zu)",
                       "basic_string_view::substr",uVar16,uVar18);
      }
      break;
    }
    lVar7 = FUN_710080c980(lVar1 + uVar16,0x2f,uVar18 - uVar16);
    if (lVar7 == 0) {
LAB_71007f7d64:
      iVar11 = iVar4 + 2;
      break;
    }
    iVar4 = iVar11;
    uVar16 = lVar7 - lVar1;
  }
  local_630 = 3;
  goto LAB_71007f7ab8;
}



// ===== FUN_71007f8100 @ 71007f8100 (size=728) =====

long * FUN_71007f8100(long *param_1,ulong param_2,undefined8 param_3,undefined8 *param_4,
                     undefined8 *param_5)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *local_40;
  ulong local_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  undefined1 *local_20;
  ulong local_18;
  undefined1 local_10;
  undefined7 uStack_f;
  
  local_40 = &local_30;
  if (param_4 == (undefined8 *)0x0) {
    local_38 = 0;
    local_30 = 0;
  }
  else {
    FUN_710004f860(&local_40,*param_4,param_4[1]);
  }
  local_20 = &local_10;
  if (param_5 == (undefined8 *)0x0) {
    local_18 = 0;
    local_10 = 0;
  }
  else {
    FUN_710004f860(&local_20,*param_5,param_5[1]);
  }
  plVar1 = param_1 + 2;
  uVar5 = local_38 + param_2 + 3;
  if (local_38 == 0) {
    uVar5 = param_2;
  }
  lVar4 = local_18 + 3;
  *param_1 = (long)plVar1;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (local_18 == 0) {
    lVar4 = 0;
  }
  FUN_71007e25c0(param_1,uVar5 + 0x12 + lVar4);
  FUN_71007e28e0(param_1,0,param_1[1],"filesystem error: ",0x12);
  if (0x7ffffffffffffffeU - param_1[1] < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::append");
  }
  FUN_71007e2a60(param_1,param_3,param_2);
  if (param_4 != (undefined8 *)0x0) {
    if (param_1[1] + 0x8000000000000003U < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003b58("basic_string::append");
    }
    FUN_71007e2a60(param_1,&DAT_71008400b8,2);
    if (0x7ffffffffffffffeU - param_1[1] < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003b58("basic_string::append",local_40);
    }
    FUN_71007e2a60(param_1);
    lVar4 = param_1[1];
    if (plVar1 == (long *)*param_1) {
      uVar5 = 0xf;
    }
    else {
      uVar5 = param_1[2];
    }
    uVar2 = lVar4 + 1;
    if (uVar5 < uVar2) {
      FUN_71007e2360(param_1,lVar4,0,0,1);
      *(undefined1 *)(*param_1 + lVar4) = 0x5d;
      param_1[1] = uVar2;
      *(undefined1 *)(*param_1 + uVar2) = 0;
    }
    else {
      *(undefined1 *)(*param_1 + lVar4) = 0x5d;
      param_1[1] = uVar2;
      *(undefined1 *)(*param_1 + uVar2) = 0;
    }
    if (param_5 != (undefined8 *)0x0) {
      if (param_1[1] + 0x8000000000000003U < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003b58("basic_string::append");
      }
      FUN_71007e2a60(param_1,&DAT_71008400b8,2);
      if (0x7ffffffffffffffeU - param_1[1] < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003b58("basic_string::append",local_20);
      }
      FUN_71007e2a60(param_1);
      lVar4 = *param_1;
      lVar3 = param_1[1];
      if (plVar1 == (long *)lVar4) {
        uVar5 = 0xf;
      }
      else {
        uVar5 = param_1[2];
      }
      uVar2 = lVar3 + 1;
      if (uVar5 < uVar2) {
        FUN_71007e2360(param_1,lVar3,0,0,1);
        lVar4 = *param_1;
      }
      *(undefined1 *)(lVar4 + lVar3) = 0x5d;
      param_1[1] = uVar2;
      *(undefined1 *)(*param_1 + uVar2) = 0;
    }
  }
  if (local_20 != &local_10) {
    thunk_FUN_710081c200(local_20,CONCAT71(uStack_f,local_10) + 1);
  }
  if (local_40 != &local_30) {
    thunk_FUN_710081c200(local_40,CONCAT71(uStack_2f,local_30) + 1);
  }
  return param_1;
}



// ===== FUN_71007f842c @ 71007f842c (size=96) =====

void FUN_71007f842c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)*param_2;
  for (param_1 = (long *)*param_1; param_1 != plVar1; param_1 = param_1 + 6) {
    if (param_1[4] != 0) {
      FUN_71007f5e80(param_1 + 4);
    }
    if ((long *)*param_1 != param_1 + 2) {
      thunk_FUN_710081c200((long *)*param_1,param_1[2] + 1);
    }
  }
  return;
}



