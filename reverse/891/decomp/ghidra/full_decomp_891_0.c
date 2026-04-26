// ===== FUN_71000000e0 @ 71000000e0 (size=16) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000000e0(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x0071000000ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// ===== FUN_7100000160 @ 7100000160 (size=84) =====

undefined8
FUN_7100000160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_710081ce00(param_4);
  FUN_710005d1f0(param_1,param_2,param_3,param_4,uVar1);
  return param_1;
}



// ===== FUN_71000001e4 @ 71000001e4 (size=60) =====

void FUN_71000001e4(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_71007adf60(0x10);
  FUN_71007b6500(uVar1,"Truncate not implemented");
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(uVar1,&PTR_PTR_FUN_7100ae75b0,FUN_71007b09c0);
}



// ===== FUN_7100000234 @ 7100000234 (size=60) =====

void FUN_7100000234(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_71007adf60(0x10);
  FUN_71007b6500(uVar1,"Not supported");
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(uVar1,&PTR_PTR_FUN_7100ae75b0,FUN_71007b09c0);
}



// ===== FUN_7100000284 @ 7100000284 (size=60) =====

void FUN_7100000284(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_71007adf60(0x10);
  FUN_71007b6500(uVar1,"Not supported");
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(uVar1,&PTR_PTR_FUN_7100ae75b0,FUN_71007b09c0);
}



// ===== FUN_71000002d4 @ 71000002d4 (size=60) =====

void FUN_71000002d4(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_71007adf60(0x10);
  FUN_71007b6500(uVar1,"Not supported");
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(uVar1,&PTR_PTR_FUN_7100ae75b0,FUN_71007b09c0);
}



// ===== FUN_7100000324 @ 7100000324 (size=60) =====

void FUN_7100000324(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_71007adf60(0x10);
  FUN_71007b6500(uVar1,"Not supported");
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(uVar1,&PTR_PTR_FUN_7100ae75b0,FUN_71007b09c0);
}



// ===== FUN_7100000374 @ 7100000374 (size=60) =====

void FUN_7100000374(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_71007adf60(0x10);
  FUN_71007b6500(uVar1,"Not supported");
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(uVar1,&PTR_PTR_FUN_7100ae75b0,FUN_71007b09c0);
}



// ===== FUN_71000003c4 @ 71000003c4 (size=176) =====

void FUN_71000003c4(long *param_1,undefined1 *param_2,ulong param_3)

{
  long *plVar1;
  ulong local_8;
  
  plVar1 = param_1 + 2;
  *param_1 = (long)plVar1;
  if (param_2 == (undefined1 *)0x0 && param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string: construction from null is not valid");
  }
  local_8 = param_3;
  if (param_3 < 0x10) {
    if (param_3 == 1) {
      *(undefined1 *)(param_1 + 2) = *param_2;
      goto LAB_7100000454;
    }
    if (param_3 == 0) goto LAB_7100000454;
  }
  else {
    plVar1 = (long *)FUN_71007e2140(param_1,&local_8,0);
    *param_1 = (long)plVar1;
    param_1[2] = local_8;
  }
  FUN_710080f900(plVar1,param_2,param_3);
LAB_7100000454:
  param_1[1] = local_8;
  *(undefined1 *)(*param_1 + local_8) = 0;
  return;
}



// ===== FUN_7100000474 @ 7100000474 (size=60) =====

void FUN_7100000474(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_71007adf60(0x10);
  FUN_71007b6500(uVar1,"Not supported");
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(uVar1,&PTR_PTR_FUN_7100ae75b0,FUN_71007b09c0);
}



// ===== FUN_71000004c4 @ 71000004c4 (size=176) =====

void FUN_71000004c4(long *param_1,undefined1 *param_2,ulong param_3)

{
  long *plVar1;
  ulong local_8;
  
  plVar1 = param_1 + 2;
  *param_1 = (long)plVar1;
  if (param_2 == (undefined1 *)0x0 && param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string: construction from null is not valid");
  }
  local_8 = param_3;
  if (param_3 < 0x10) {
    if (param_3 == 1) {
      *(undefined1 *)(param_1 + 2) = *param_2;
      goto LAB_7100000554;
    }
    if (param_3 == 0) goto LAB_7100000554;
  }
  else {
    plVar1 = (long *)FUN_71007e2140(param_1,&local_8,0);
    *param_1 = (long)plVar1;
    param_1[2] = local_8;
  }
  FUN_710080f900(plVar1,param_2,param_3);
LAB_7100000554:
  param_1[1] = local_8;
  *(undefined1 *)(*param_1 + local_8) = 0;
  return;
}



// ===== FUN_7100000574 @ 7100000574 (size=60) =====

void FUN_7100000574(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_71007adf60(0x10);
  FUN_71007b6500(uVar1,"Not supported");
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(uVar1,&PTR_PTR_FUN_7100ae75b0,FUN_71007b09c0);
}



// ===== FUN_7100000614 @ 7100000614 (size=20) =====

void FUN_7100000614(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string: construction from null is not valid");
}



// ===== FUN_7100000628 @ 7100000628 (size=168) =====

void FUN_7100000628(long *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  ulong local_8;
  
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  plVar2 = param_1 + 2;
  *param_1 = (long)plVar2;
  if (param_2 == 0 && param_3 != 0) {
    auVar3 = FUN_7100000614();
  }
  plVar1 = auVar3._0_8_;
  local_8 = param_3;
  if (param_3 < 0x10) {
    if (param_3 == 1) {
      *(undefined1 *)(plVar1 + 2) = *auVar3._8_8_;
      goto LAB_71000006b0;
    }
    if (param_3 == 0) goto LAB_71000006b0;
  }
  else {
    plVar2 = (long *)FUN_71007e2140(plVar1,&local_8,0);
    *plVar1 = (long)plVar2;
    plVar1[2] = local_8;
  }
  FUN_710080f900(plVar2,auVar3._8_8_,param_3);
LAB_71000006b0:
  plVar1[1] = local_8;
  *(undefined1 *)(*plVar1 + local_8) = 0;
  return;
}



// ===== FUN_71000006d0 @ 71000006d0 (size=32) =====

void FUN_71000006d0(undefined8 param_1)

{
  FUN_7100076f90();
  thunk_FUN_710081c200(param_1,0x10);
  return;
}



// ===== FUN_71000006f0 @ 71000006f0 (size=184) =====

long * FUN_71000006f0(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  
  uVar1 = FUN_710081ce00();
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0;
  FUN_71007e25c0(param_1,uVar1 + param_4);
  if (0x7ffffffffffffffeU - param_1[1] < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::append");
  }
  FUN_71007e2a60(param_1,param_2);
  if (0x7ffffffffffffffeU - param_1[1] < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::append");
  }
  FUN_71007e2a60(param_1,param_3,param_4);
  return param_1;
}



// ===== FUN_71000007bc @ 71000007bc (size=84) =====

void FUN_71000007bc(undefined4 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_71007adf60(0x18);
  FUN_71007b6500(puVar1,param_2);
  *(undefined4 *)(puVar1 + 2) = param_1;
  *puVar1 = &PTR_FUN_7100aee8e0;
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(puVar1,&PTR_PTR_FUN_7100ae7fa8,FUN_71007e1140);
}



// ===== FUN_7100000914 @ 7100000914 (size=152) =====

long * FUN_7100000914(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  
  lVar1 = FUN_710081ce00();
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0;
  FUN_71007e25c0(param_1,lVar1 + param_4);
  FUN_71007e2b20(param_1,param_2,lVar1);
  if (0x7ffffffffffffffeU - param_1[1] < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::append");
  }
  FUN_71007e2a60(param_1,param_3,param_4);
  return param_1;
}



// ===== FUN_7100000a54 @ 7100000a54 (size=20) =====

void FUN_7100000a54(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string: construction from null is not valid");
}



// ===== FUN_7100000a68 @ 7100000a68 (size=168) =====

void FUN_7100000a68(long *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  ulong local_8;
  
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  plVar2 = param_1 + 2;
  *param_1 = (long)plVar2;
  if (param_2 == 0 && param_3 != 0) {
    auVar3 = FUN_7100000a54();
  }
  plVar1 = auVar3._0_8_;
  local_8 = param_3;
  if (param_3 < 0x10) {
    if (param_3 == 1) {
      *(undefined1 *)(plVar1 + 2) = *auVar3._8_8_;
      goto LAB_7100000af0;
    }
    if (param_3 == 0) goto LAB_7100000af0;
  }
  else {
    plVar2 = (long *)FUN_71007e2140(plVar1,&local_8,0);
    *plVar1 = (long)plVar2;
    plVar1[2] = local_8;
  }
  FUN_710080f900(plVar2,auVar3._8_8_,param_3);
LAB_7100000af0:
  plVar1[1] = local_8;
  *(undefined1 *)(*plVar1 + local_8) = 0;
  return;
}



// ===== FUN_7100000b10 @ 7100000b10 (size=60) =====

void FUN_7100000b10(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_71007adf60(0x10);
  FUN_71007b6500(uVar1,"Not supported");
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(uVar1,&PTR_PTR_FUN_7100ae75b0,FUN_71007b09c0);
}



// ===== FUN_7100000b98 @ 7100000b98 (size=192) =====

long * FUN_7100000b98(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  
  uVar1 = FUN_710081ce00(param_4);
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0;
  FUN_71007e25c0(param_1,uVar1 + param_3);
  if (0x7ffffffffffffffeU - param_1[1] < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::append");
  }
  FUN_71007e2a60(param_1,param_2,param_3);
  if (0x7ffffffffffffffeU - param_1[1] < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::append");
  }
  FUN_71007e2a60(param_1,param_4,uVar1);
  return param_1;
}



// ===== FUN_7100000c6c @ 7100000c6c (size=148) =====

long * FUN_7100000c6c(long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (0x7ffffffffffffffeU - *(long *)(param_2 + 8) < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::append");
  }
  plVar1 = (long *)FUN_71007e2a60();
  *param_1 = (long)(param_1 + 2);
  plVar3 = plVar1 + 2;
  if ((long *)*plVar1 == plVar3) {
    FUN_710080f900(param_1 + 2,plVar3,plVar1[1] + 1);
  }
  else {
    lVar2 = plVar1[2];
    *param_1 = *plVar1;
    param_1[2] = lVar2;
  }
  param_1[1] = plVar1[1];
  *plVar1 = (long)plVar3;
  plVar1[1] = 0;
  *(undefined1 *)(plVar1 + 2) = 0;
  return param_1;
}



// ===== FUN_7100000d00 @ 7100000d00 (size=180) =====

void FUN_7100000d00(long *param_1,undefined1 *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong local_8;
  
  plVar2 = param_1 + 2;
  *param_1 = (long)plVar2;
  if (param_2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string: construction from null is not valid");
  }
  uVar1 = FUN_710081ce00(param_2);
  local_8 = uVar1;
  if (uVar1 < 0x10) {
    if (uVar1 == 1) {
      *(undefined1 *)(param_1 + 2) = *param_2;
      goto LAB_7100000d94;
    }
    if (uVar1 == 0) goto LAB_7100000d94;
  }
  else {
    plVar2 = (long *)FUN_71007e2140(param_1,&local_8,0);
    *param_1 = (long)plVar2;
    param_1[2] = local_8;
  }
  FUN_710080f900(plVar2,param_2,uVar1);
LAB_7100000d94:
  param_1[1] = local_8;
  *(undefined1 *)(*param_1 + local_8) = 0;
  return;
}



// ===== FUN_7100000db4 @ 7100000db4 (size=60) =====

void FUN_7100000db4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_71007adc20(lVar1,*(long *)(param_1 + 0x18) - lVar1,0x1000);
  }
  thunk_FUN_710081c200(param_1,0x30);
  return;
}



// ===== FUN_7100000df0 @ 7100000df0 (size=32) =====

void FUN_7100000df0(undefined8 param_1)

{
  FUN_7100076f90();
  thunk_FUN_710081c200(param_1,0x10);
  return;
}



// ===== FUN_7100000e10 @ 7100000e10 (size=60) =====

void FUN_7100000e10(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_71007adf60(0x10);
  FUN_71007b6500(uVar1,"Not supported");
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(uVar1,&PTR_PTR_FUN_7100ae75b0,FUN_71007b09c0);
}



// ===== FUN_7100000e60 @ 7100000e60 (size=48) =====

void FUN_7100000e60(long *param_1,long param_2,long param_3)

{
  *param_1 = (long)(param_1 + 2);
  if (param_2 == 0 && param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string: construction from null is not valid");
  }
  FUN_710017a120(param_1,param_2,param_2 + param_3);
  return;
}



// ===== FUN_7100000e90 @ 7100000e90 (size=176) =====

void FUN_7100000e90(long *param_1,undefined1 *param_2,ulong param_3)

{
  long *plVar1;
  ulong local_8;
  
  plVar1 = param_1 + 2;
  *param_1 = (long)plVar1;
  if (param_2 == (undefined1 *)0x0 && param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string: construction from null is not valid");
  }
  local_8 = param_3;
  if (param_3 < 0x10) {
    if (param_3 == 1) {
      *(undefined1 *)(param_1 + 2) = *param_2;
      goto LAB_7100000f20;
    }
    if (param_3 == 0) goto LAB_7100000f20;
  }
  else {
    plVar1 = (long *)FUN_71007e2140(param_1,&local_8,0);
    *param_1 = (long)plVar1;
    param_1[2] = local_8;
  }
  FUN_710080f900(plVar1,param_2,param_3);
LAB_7100000f20:
  param_1[1] = local_8;
  *(undefined1 *)(*param_1 + local_8) = 0;
  return;
}



// ===== FUN_7100000f40 @ 7100000f40 (size=60) =====

void FUN_7100000f40(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_71007adf60(0x10);
  FUN_71007b6500(uVar1,"Not supported");
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(uVar1,&PTR_PTR_FUN_7100ae75b0,FUN_71007b09c0);
}



// ===== FUN_7100000fd8 @ 7100000fd8 (size=48) =====

void FUN_7100000fd8(long *param_1,long param_2,long param_3)

{
  *param_1 = (long)(param_1 + 2);
  if (param_2 == 0 && param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string: construction from null is not valid");
  }
  FUN_7100184050(param_1,param_2,param_2 + param_3);
  return;
}



// ===== FUN_7100001008 @ 7100001008 (size=100) =====

void FUN_7100001008(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[5];
  while (lVar1 != 0) {
    FUN_7100184110(*(undefined8 *)(lVar1 + 0x18));
    lVar2 = *(long *)(lVar1 + 0x10);
    thunk_FUN_710081c200(lVar1,0x88);
    lVar1 = lVar2;
  }
  if (*param_1 != 0) {
    thunk_FUN_710081c200(*param_1,0x20);
  }
  thunk_FUN_710081c200(param_1,0x48);
  return;
}



// ===== FUN_710000106c @ 710000106c (size=176) =====

void FUN_710000106c(long *param_1,undefined1 *param_2,ulong param_3)

{
  long *plVar1;
  ulong local_8;
  
  plVar1 = param_1 + 2;
  *param_1 = (long)plVar1;
  if (param_2 == (undefined1 *)0x0 && param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string: construction from null is not valid");
  }
  local_8 = param_3;
  if (param_3 < 0x10) {
    if (param_3 == 1) {
      *(undefined1 *)(param_1 + 2) = *param_2;
      goto LAB_71000010fc;
    }
    if (param_3 == 0) goto LAB_71000010fc;
  }
  else {
    plVar1 = (long *)FUN_71007e2140(param_1,&local_8,0);
    *param_1 = (long)plVar1;
    param_1[2] = local_8;
  }
  FUN_710080f900(plVar1,param_2,param_3);
LAB_71000010fc:
  param_1[1] = local_8;
  *(undefined1 *)(*param_1 + local_8) = 0;
  return;
}



// ===== FUN_710000111c @ 710000111c (size=176) =====

void FUN_710000111c(long *param_1,undefined1 *param_2,ulong param_3)

{
  long *plVar1;
  ulong local_8;
  
  plVar1 = param_1 + 2;
  *param_1 = (long)plVar1;
  if (param_2 == (undefined1 *)0x0 && param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string: construction from null is not valid");
  }
  local_8 = param_3;
  if (param_3 < 0x10) {
    if (param_3 == 1) {
      *(undefined1 *)(param_1 + 2) = *param_2;
      goto LAB_71000011ac;
    }
    if (param_3 == 0) goto LAB_71000011ac;
  }
  else {
    plVar1 = (long *)FUN_71007e2140(param_1,&local_8,0);
    *param_1 = (long)plVar1;
    param_1[2] = local_8;
  }
  FUN_710080f900(plVar1,param_2,param_3);
LAB_71000011ac:
  param_1[1] = local_8;
  *(undefined1 *)(*param_1 + local_8) = 0;
  return;
}



// ===== FUN_71000011cc @ 71000011cc (size=60) =====

void FUN_71000011cc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_71007adc20(lVar1,*(long *)(param_1 + 0x18) - lVar1,0x1000);
  }
  thunk_FUN_710081c200(param_1,0x30);
  return;
}



// ===== FUN_7100001208 @ 7100001208 (size=176) =====

void FUN_7100001208(long *param_1,undefined1 *param_2,ulong param_3)

{
  long *plVar1;
  ulong local_8;
  
  plVar1 = param_1 + 2;
  *param_1 = (long)plVar1;
  if (param_2 == (undefined1 *)0x0 && param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string: construction from null is not valid");
  }
  local_8 = param_3;
  if (param_3 < 0x10) {
    if (param_3 == 1) {
      *(undefined1 *)(param_1 + 2) = *param_2;
      goto LAB_7100001298;
    }
    if (param_3 == 0) goto LAB_7100001298;
  }
  else {
    plVar1 = (long *)FUN_71007e2140(param_1,&local_8,0);
    *param_1 = (long)plVar1;
    param_1[2] = local_8;
  }
  FUN_710080f900(plVar1,param_2,param_3);
LAB_7100001298:
  param_1[1] = local_8;
  *(undefined1 *)(*param_1 + local_8) = 0;
  return;
}



// ===== FUN_71000012b8 @ 71000012b8 (size=60) =====

void FUN_71000012b8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_71007adc20(lVar1,*(long *)(param_1 + 0x18) - lVar1,0x1000);
  }
  thunk_FUN_710081c200(param_1,0x28);
  return;
}



// ===== FUN_71000012f4 @ 71000012f4 (size=20) =====

void FUN_71000012f4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string: construction from null is not valid");
}



// ===== FUN_7100001308 @ 7100001308 (size=192) =====

long * FUN_7100001308(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  
  uVar1 = FUN_710081ce00(param_4);
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0;
  FUN_71007e25c0(param_1,uVar1 + param_3);
  if (0x7ffffffffffffffeU - param_1[1] < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::append");
  }
  FUN_71007e2a60(param_1,param_2,param_3);
  if (0x7ffffffffffffffeU - param_1[1] < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::append");
  }
  FUN_71007e2a60(param_1,param_4,uVar1);
  return param_1;
}



// ===== FUN_7100001470 @ 7100001470 (size=176) =====

void FUN_7100001470(long *param_1,undefined1 *param_2,ulong param_3)

{
  long *plVar1;
  ulong local_8;
  
  plVar1 = param_1 + 2;
  *param_1 = (long)plVar1;
  if (param_2 == (undefined1 *)0x0 && param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string: construction from null is not valid");
  }
  local_8 = param_3;
  if (param_3 < 0x10) {
    if (param_3 == 1) {
      *(undefined1 *)(param_1 + 2) = *param_2;
      goto LAB_7100001500;
    }
    if (param_3 == 0) goto LAB_7100001500;
  }
  else {
    plVar1 = (long *)FUN_71007e2140(param_1,&local_8,0);
    *param_1 = (long)plVar1;
    param_1[2] = local_8;
  }
  FUN_710080f900(plVar1,param_2,param_3);
LAB_7100001500:
  param_1[1] = local_8;
  *(undefined1 *)(*param_1 + local_8) = 0;
  return;
}



// ===== FUN_7100001520 @ 7100001520 (size=148) =====

long * FUN_7100001520(long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (0x7ffffffffffffffeU - *(long *)(param_2 + 8) < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::append");
  }
  plVar1 = (long *)FUN_71007e2a60();
  *param_1 = (long)(param_1 + 2);
  plVar3 = plVar1 + 2;
  if ((long *)*plVar1 == plVar3) {
    FUN_710080f900(param_1 + 2,plVar3,plVar1[1] + 1);
  }
  else {
    lVar2 = plVar1[2];
    *param_1 = *plVar1;
    param_1[2] = lVar2;
  }
  param_1[1] = plVar1[1];
  *plVar1 = (long)plVar3;
  plVar1[1] = 0;
  *(undefined1 *)(plVar1 + 2) = 0;
  return param_1;
}



// ===== FUN_71000015b4 @ 71000015b4 (size=176) =====

void FUN_71000015b4(long *param_1,undefined1 *param_2,ulong param_3)

{
  long *plVar1;
  ulong local_8;
  
  plVar1 = param_1 + 2;
  *param_1 = (long)plVar1;
  if (param_2 == (undefined1 *)0x0 && param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string: construction from null is not valid");
  }
  local_8 = param_3;
  if (param_3 < 0x10) {
    if (param_3 == 1) {
      *(undefined1 *)(param_1 + 2) = *param_2;
      goto LAB_7100001644;
    }
    if (param_3 == 0) goto LAB_7100001644;
  }
  else {
    plVar1 = (long *)FUN_71007e2140(param_1,&local_8,0);
    *param_1 = (long)plVar1;
    param_1[2] = local_8;
  }
  FUN_710080f900(plVar1,param_2,param_3);
LAB_7100001644:
  param_1[1] = local_8;
  *(undefined1 *)(*param_1 + local_8) = 0;
  return;
}



// ===== FUN_7100001664 @ 7100001664 (size=60) =====

void FUN_7100001664(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_71007adc20(lVar1,*(long *)(param_1 + 0x18) - lVar1,0x1000);
  }
  thunk_FUN_710081c200(param_1,0x30);
  return;
}



// ===== FUN_71000016a0 @ 71000016a0 (size=192) =====

long * FUN_71000016a0(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  
  uVar1 = FUN_710081ce00(param_4);
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0;
  FUN_71007e25c0(param_1,uVar1 + param_3);
  if (0x7ffffffffffffffeU - param_1[1] < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::append");
  }
  FUN_71007e2a60(param_1,param_2,param_3);
  if (0x7ffffffffffffffeU - param_1[1] < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::append");
  }
  FUN_71007e2a60(param_1,param_4,uVar1);
  return param_1;
}



// ===== FUN_7100001774 @ 7100001774 (size=148) =====

long * FUN_7100001774(long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (0x7ffffffffffffffeU - *(long *)(param_2 + 8) < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::append");
  }
  plVar1 = (long *)FUN_71007e2a60();
  *param_1 = (long)(param_1 + 2);
  plVar3 = plVar1 + 2;
  if ((long *)*plVar1 == plVar3) {
    FUN_710080f900(param_1 + 2,plVar3,plVar1[1] + 1);
  }
  else {
    lVar2 = plVar1[2];
    *param_1 = *plVar1;
    param_1[2] = lVar2;
  }
  param_1[1] = plVar1[1];
  *plVar1 = (long)plVar3;
  plVar1[1] = 0;
  *(undefined1 *)(plVar1 + 2) = 0;
  return param_1;
}



// ===== FUN_7100001808 @ 7100001808 (size=176) =====

void FUN_7100001808(long *param_1,undefined1 *param_2,ulong param_3)

{
  long *plVar1;
  ulong local_8;
  
  plVar1 = param_1 + 2;
  *param_1 = (long)plVar1;
  if (param_2 == (undefined1 *)0x0 && param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string: construction from null is not valid");
  }
  local_8 = param_3;
  if (param_3 < 0x10) {
    if (param_3 == 1) {
      *(undefined1 *)(param_1 + 2) = *param_2;
      goto LAB_7100001898;
    }
    if (param_3 == 0) goto LAB_7100001898;
  }
  else {
    plVar1 = (long *)FUN_71007e2140(param_1,&local_8,0);
    *param_1 = (long)plVar1;
    param_1[2] = local_8;
  }
  FUN_710080f900(plVar1,param_2,param_3);
LAB_7100001898:
  param_1[1] = local_8;
  *(undefined1 *)(*param_1 + local_8) = 0;
  return;
}



// ===== FUN_71000018b8 @ 71000018b8 (size=60) =====

void FUN_71000018b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_710081ce00(param_2);
  FUN_71007e28e0(param_1,0,*(undefined8 *)(param_1 + 8),param_2,uVar1);
  return;
}



// ===== FUN_71000018f4 @ 71000018f4 (size=20) =====

void FUN_71000018f4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string: construction from null is not valid");
}



// ===== FUN_7100001908 @ 7100001908 (size=20) =====

void FUN_7100001908(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string: construction from null is not valid");
}



// ===== FUN_710000191c @ 710000191c (size=20) =====

void FUN_710000191c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string: construction from null is not valid");
}



// ===== FUN_7100001930 @ 7100001930 (size=168) =====

void FUN_7100001930(long *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  ulong local_8;
  
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  plVar2 = param_1 + 2;
  *param_1 = (long)plVar2;
  if (param_2 == 0 && param_3 != 0) {
    auVar3 = FUN_710000191c();
  }
  plVar1 = auVar3._0_8_;
  local_8 = param_3;
  if (param_3 < 0x10) {
    if (param_3 == 1) {
      *(undefined1 *)(plVar1 + 2) = *auVar3._8_8_;
      goto LAB_71000019b8;
    }
    if (param_3 == 0) goto LAB_71000019b8;
  }
  else {
    plVar2 = (long *)FUN_71007e2140(plVar1,&local_8,0);
    *plVar1 = (long)plVar2;
    plVar1[2] = local_8;
  }
  FUN_710080f900(plVar2,auVar3._8_8_,param_3);
LAB_71000019b8:
  plVar1[1] = local_8;
  *(undefined1 *)(*plVar1 + local_8) = 0;
  return;
}



// ===== FUN_71000019d8 @ 71000019d8 (size=20) =====

void FUN_71000019d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string: construction from null is not valid");
}



// ===== FUN_71000019ec @ 71000019ec (size=108) =====

undefined8 *
FUN_71000019ec(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 *local_20 [2];
  undefined1 auStack_10 [16];
  
  uVar1 = FUN_71007af5c0(0x68);
  local_20[0] = auStack_10;
  FUN_710004f860(local_20,param_3,param_4);
  FUN_710007b970(uVar1,param_2,local_20);
  *param_1 = uVar1;
  FUN_71007e21a0(local_20);
  return param_1;
}



// ===== FUN_7100001a80 @ 7100001a80 (size=104) =====

void FUN_7100001a80(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_71007adf60(0x28);
  *puVar1 = &PTR_FUN_7100ade280;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
  FUN_71007b6280(puVar1 + 2,param_1 + 0x10);
  *puVar1 = &PTR_FUN_7100ade2a8;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(puVar1,&PTR_PTR_FUN_7100ae9880,FUN_71003325b0);
}



// ===== FUN_7100001ae8 @ 7100001ae8 (size=20) =====

void FUN_7100001ae8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string: construction from null is not valid");
}



// ===== FUN_7100001afc @ 7100001afc (size=96) =====

void FUN_7100001afc(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_71007adf60(0x20);
  *puVar1 = &PTR_FUN_7100ade280;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
  FUN_71007b6280(puVar1 + 2,param_1 + 0x10);
  *puVar1 = &PTR_FUN_7100ade320;
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(puVar1,&PTR_PTR_FUN_7100ae9868,FUN_7100332520);
}



// ===== FUN_7100001b5c @ 7100001b5c (size=144) =====

char * FUN_7100001b5c(byte param_1)

{
  char *pcVar1;
  
  if (param_1 == 3) {
    pcVar1 = "string";
  }
  else if (param_1 < 4) {
    if (param_1 == 1) {
      pcVar1 = "object";
    }
    else {
      pcVar1 = "array";
      if (param_1 != 2) {
        pcVar1 = "null";
      }
    }
  }
  else if (param_1 == 8) {
    pcVar1 = "binary";
  }
  else if (param_1 == 9) {
    pcVar1 = "discarded";
  }
  else {
    pcVar1 = "boolean";
    if (param_1 != 4) {
      pcVar1 = "number";
    }
  }
  return pcVar1;
}



// ===== FUN_7100001bec @ 7100001bec (size=84) =====

void FUN_7100001bec(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_710081ce00(param_2);
  if (0x7ffffffffffffffeU - *(long *)(param_1 + 8) < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::append");
  }
  FUN_71007e2a60(param_1,param_2,uVar1);
  return;
}



// ===== FUN_7100001c40 @ 7100001c40 (size=192) =====

undefined8 * FUN_7100001c40(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 local_80 [4];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  undefined1 auStack_20 [32];
  
  FUN_7100332720(auStack_40,"type_error");
  FUN_7100333030(auStack_20,auStack_40,param_2);
  FUN_7100332720(auStack_60,&DAT_7100853d20);
  FUN_7100334b10(local_80,auStack_20,auStack_60,param_3);
  FUN_71007e21a0(auStack_60);
  FUN_71007e21a0(auStack_20);
  FUN_71007e21a0(auStack_40);
  FUN_7100332fe0(param_1,param_2,local_80[0]);
  *param_1 = &PTR_FUN_7100ade2f8;
  FUN_71007e21a0(local_80);
  return param_1;
}



// ===== FUN_7100001d48 @ 7100001d48 (size=192) =====

undefined8 * FUN_7100001d48(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 local_80 [4];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  undefined1 auStack_20 [32];
  
  FUN_7100332720(auStack_40,"invalid_iterator");
  FUN_7100333030(auStack_20,auStack_40,param_2);
  FUN_7100332720(auStack_60,&DAT_7100853d20);
  FUN_7100334b10(local_80,auStack_20,auStack_60,param_3);
  FUN_71007e21a0(auStack_60);
  FUN_71007e21a0(auStack_20);
  FUN_71007e21a0(auStack_40);
  FUN_7100332fe0(param_1,param_2,local_80[0]);
  *param_1 = &PTR_FUN_7100ade2d0;
  FUN_71007e21a0(local_80);
  return param_1;
}



// ===== FUN_7100001e50 @ 7100001e50 (size=192) =====

undefined8 * FUN_7100001e50(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 local_80 [4];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  undefined1 auStack_20 [32];
  
  FUN_7100332720(auStack_40,"type_error");
  FUN_7100333030(auStack_20,auStack_40,param_2);
  FUN_7100332720(auStack_60,&DAT_7100853d20);
  FUN_7100334b10(local_80,auStack_20,auStack_60,param_3);
  FUN_71007e21a0(auStack_60);
  FUN_71007e21a0(auStack_20);
  FUN_71007e21a0(auStack_40);
  FUN_7100332fe0(param_1,param_2,local_80[0]);
  *param_1 = &PTR_FUN_7100ade2f8;
  FUN_71007e21a0(local_80);
  return param_1;
}



// ===== FUN_7100001f58 @ 7100001f58 (size=20) =====

void FUN_7100001f58(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string: construction from null is not valid");
}



// ===== FUN_7100001f6c @ 7100001f6c (size=168) =====

void FUN_7100001f6c(long *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  ulong local_8;
  
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  plVar2 = param_1 + 2;
  *param_1 = (long)plVar2;
  if (param_2 == 0 && param_3 != 0) {
    auVar3 = FUN_7100001f58();
  }
  plVar1 = auVar3._0_8_;
  local_8 = param_3;
  if (param_3 < 0x10) {
    if (param_3 == 1) {
      *(undefined1 *)(plVar1 + 2) = *auVar3._8_8_;
      goto LAB_7100001ff4;
    }
    if (param_3 == 0) goto LAB_7100001ff4;
  }
  else {
    plVar2 = (long *)FUN_71007e2140(plVar1,&local_8,0);
    *plVar1 = (long)plVar2;
    plVar1[2] = local_8;
  }
  FUN_710080f900(plVar2,auVar3._8_8_,param_3);
LAB_7100001ff4:
  plVar1[1] = local_8;
  *(undefined1 *)(*plVar1 + local_8) = 0;
  return;
}



// ===== FUN_7100002014 @ 7100002014 (size=60) =====

void FUN_7100002014(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_71007adf60(0x18);
  puVar1[2] = 0;
  *puVar1 = &PTR_LAB_7100ade588;
  puVar1[1] = "Expression does not evaluate to node set";
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(puVar1,&PTR_PTR_FUN_7100aea1f8,&LAB_710034c700);
}



// ===== FUN_7100002050 @ 7100002050 (size=52) =====

void FUN_7100002050(long *param_1)

{
  while (param_1 = (long *)*param_1, param_1 != (long *)0x0) {
    (*(code *)PTR_thunk_FUN_710081c200_7100af34c0)();
  }
  return;
}



// ===== FUN_7100002084 @ 7100002084 (size=32) =====

void FUN_7100002084(undefined8 param_1)

{
  FUN_7100076f90();
  thunk_FUN_710081c200(param_1,0x10);
  return;
}



// ===== FUN_71000020a4 @ 71000020a4 (size=188) =====

void FUN_71000020a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100adf700;
  if ((code *)param_1[0x17] != (code *)0x0) {
    (*(code *)param_1[0x17])(param_1 + 0x15,param_1 + 0x15,3);
  }
  if ((undefined8 *)param_1[0xf] != param_1 + 0x11) {
    thunk_FUN_710081c200((undefined8 *)param_1[0xf],param_1[0x11] + 1);
  }
  if ((undefined8 *)param_1[0xb] != param_1 + 0xd) {
    thunk_FUN_710081c200((undefined8 *)param_1[0xb],param_1[0xd] + 1);
  }
  if ((undefined8 *)param_1[6] != param_1 + 8) {
    thunk_FUN_710081c200((undefined8 *)param_1[6],param_1[8] + 1);
  }
  if ((undefined8 *)param_1[1] != param_1 + 3) {
    thunk_FUN_710081c200((undefined8 *)param_1[1],param_1[3] + 1);
  }
  thunk_FUN_710081c200(param_1,200);
  return;
}



// ===== FUN_7100002160 @ 7100002160 (size=20) =====

void FUN_7100002160(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string: construction from null is not valid");
}



// ===== FUN_7100002174 @ 7100002174 (size=188) =====

void FUN_7100002174(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100adf700;
  if ((code *)param_1[0x17] != (code *)0x0) {
    (*(code *)param_1[0x17])(param_1 + 0x15,param_1 + 0x15,3);
  }
  if ((undefined8 *)param_1[0xf] != param_1 + 0x11) {
    thunk_FUN_710081c200((undefined8 *)param_1[0xf],param_1[0x11] + 1);
  }
  if ((undefined8 *)param_1[0xb] != param_1 + 0xd) {
    thunk_FUN_710081c200((undefined8 *)param_1[0xb],param_1[0xd] + 1);
  }
  if ((undefined8 *)param_1[6] != param_1 + 8) {
    thunk_FUN_710081c200((undefined8 *)param_1[6],param_1[8] + 1);
  }
  if ((undefined8 *)param_1[1] != param_1 + 3) {
    thunk_FUN_710081c200((undefined8 *)param_1[1],param_1[3] + 1);
  }
  thunk_FUN_710081c200(param_1,200);
  return;
}



// ===== FUN_7100002230 @ 7100002230 (size=188) =====

void FUN_7100002230(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100adf700;
  if ((code *)param_1[0x17] != (code *)0x0) {
    (*(code *)param_1[0x17])(param_1 + 0x15,param_1 + 0x15,3);
  }
  if ((undefined8 *)param_1[0xf] != param_1 + 0x11) {
    thunk_FUN_710081c200((undefined8 *)param_1[0xf],param_1[0x11] + 1);
  }
  if ((undefined8 *)param_1[0xb] != param_1 + 0xd) {
    thunk_FUN_710081c200((undefined8 *)param_1[0xb],param_1[0xd] + 1);
  }
  if ((undefined8 *)param_1[6] != param_1 + 8) {
    thunk_FUN_710081c200((undefined8 *)param_1[6],param_1[8] + 1);
  }
  if ((undefined8 *)param_1[1] != param_1 + 3) {
    thunk_FUN_710081c200((undefined8 *)param_1[1],param_1[3] + 1);
  }
  thunk_FUN_710081c200(param_1,200);
  return;
}



// ===== FUN_71000022ec @ 71000022ec (size=192) =====

long * FUN_71000022ec(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  
  uVar1 = FUN_710081ce00(param_4);
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0;
  FUN_71007e25c0(param_1,uVar1 + param_3);
  if (0x7ffffffffffffffeU - param_1[1] < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::append");
  }
  FUN_71007e2a60(param_1,param_2,param_3);
  if (0x7ffffffffffffffeU - param_1[1] < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::append");
  }
  FUN_71007e2a60(param_1,param_4,uVar1);
  return param_1;
}



// ===== FUN_7100002454 @ 7100002454 (size=56) =====

void FUN_7100002454(long *param_1)

{
  if ((long *)*param_1 != (long *)0x0) {
    (**(code **)(*(long *)*param_1 + 0x20))();
  }
  thunk_FUN_710081c200(param_1,0x17e8);
  return;
}



// ===== FUN_710000248c @ 710000248c (size=60) =====

void FUN_710000248c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_71007adc20(lVar1,*(long *)(param_1 + 0x18) - lVar1,0x1000);
  }
  thunk_FUN_710081c200(param_1,0x30);
  return;
}



// ===== FUN_71000024c8 @ 71000024c8 (size=192) =====

long * FUN_71000024c8(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  
  uVar1 = FUN_710081ce00(param_4);
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0;
  FUN_71007e25c0(param_1,uVar1 + param_3);
  if (0x7ffffffffffffffeU - param_1[1] < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::append");
  }
  FUN_71007e2a60(param_1,param_2,param_3);
  if (0x7ffffffffffffffeU - param_1[1] < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::append");
  }
  FUN_71007e2a60(param_1,param_4,uVar1);
  return param_1;
}



// ===== FUN_7100002630 @ 7100002630 (size=176) =====

void FUN_7100002630(long *param_1,undefined1 *param_2,ulong param_3)

{
  long *plVar1;
  ulong local_8;
  
  plVar1 = param_1 + 2;
  *param_1 = (long)plVar1;
  if (param_2 == (undefined1 *)0x0 && param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string: construction from null is not valid");
  }
  local_8 = param_3;
  if (param_3 < 0x10) {
    if (param_3 == 1) {
      *(undefined1 *)(param_1 + 2) = *param_2;
      goto LAB_71000026c0;
    }
    if (param_3 == 0) goto LAB_71000026c0;
  }
  else {
    plVar1 = (long *)FUN_71007e2140(param_1,&local_8,0);
    *param_1 = (long)plVar1;
    param_1[2] = local_8;
  }
  FUN_710080f900(plVar1,param_2,param_3);
LAB_71000026c0:
  param_1[1] = local_8;
  *(undefined1 *)(*param_1 + local_8) = 0;
  return;
}



// ===== FUN_71000026e0 @ 71000026e0 (size=144) =====

char * FUN_71000026e0(byte param_1)

{
  char *pcVar1;
  
  if (param_1 == 3) {
    pcVar1 = "string";
  }
  else if (param_1 < 4) {
    if (param_1 == 1) {
      pcVar1 = "object";
    }
    else {
      pcVar1 = "array";
      if (param_1 != 2) {
        pcVar1 = "null";
      }
    }
  }
  else if (param_1 == 8) {
    pcVar1 = "binary";
  }
  else if (param_1 == 9) {
    pcVar1 = "discarded";
  }
  else {
    pcVar1 = "boolean";
    if (param_1 != 4) {
      pcVar1 = "number";
    }
  }
  return pcVar1;
}



// ===== FUN_7100002770 @ 7100002770 (size=176) =====

void FUN_7100002770(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  
  lVar2 = param_1[1];
  for (lVar7 = *param_1; lVar2 != lVar7; lVar7 = lVar7 + 0x10) {
    plVar6 = *(long **)(lVar7 + 8);
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      if (*plVar1 == 0x100000001) {
        pcVar8 = *(code **)(*plVar6 + 0x10);
        plVar6[1] = 0;
        (*pcVar8)();
        (**(code **)(*plVar6 + 0x18))();
      }
      else {
        do {
          iVar5 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          FUN_71000a22d0();
        }
      }
    }
  }
  lVar7 = *param_1;
  if (lVar7 != 0) {
    thunk_FUN_710081c200(lVar7,param_1[2] - lVar7);
  }
  thunk_FUN_710081c200(param_1,0x50);
  return;
}



// ===== FUN_7100002820 @ 7100002820 (size=192) =====

undefined8 * FUN_7100002820(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 local_80 [4];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  undefined1 auStack_20 [32];
  
  FUN_710043f830(auStack_40,"type_error");
  FUN_7100333030(auStack_20,auStack_40,param_2);
  FUN_710043f830(auStack_60,&DAT_7100853d20);
  FUN_7100334b10(local_80,auStack_20,auStack_60,param_3);
  FUN_71007e21a0(auStack_60);
  FUN_71007e21a0(auStack_20);
  FUN_71007e21a0(auStack_40);
  FUN_7100332fe0(param_1,param_2,local_80[0]);
  *param_1 = &PTR_FUN_7100ade2f8;
  FUN_71007e21a0(local_80);
  return param_1;
}



// ===== FUN_7100002928 @ 7100002928 (size=192) =====

undefined8 * FUN_7100002928(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 local_80 [4];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  undefined1 auStack_20 [32];
  
  FUN_710043f830(auStack_40,"type_error");
  FUN_7100333030(auStack_20,auStack_40,param_2);
  FUN_710043f830(auStack_60,&DAT_7100853d20);
  FUN_7100334b10(local_80,auStack_20,auStack_60,param_3);
  FUN_71007e21a0(auStack_60);
  FUN_71007e21a0(auStack_20);
  FUN_71007e21a0(auStack_40);
  FUN_7100332fe0(param_1,param_2,local_80[0]);
  *param_1 = &PTR_FUN_7100ade2f8;
  FUN_71007e21a0(local_80);
  return param_1;
}



// ===== FUN_7100002a30 @ 7100002a30 (size=144) =====

char * FUN_7100002a30(byte param_1)

{
  char *pcVar1;
  
  if (param_1 == 3) {
    pcVar1 = "string";
  }
  else if (param_1 < 4) {
    if (param_1 == 1) {
      pcVar1 = "object";
    }
    else {
      pcVar1 = "array";
      if (param_1 != 2) {
        pcVar1 = "null";
      }
    }
  }
  else if (param_1 == 8) {
    pcVar1 = "binary";
  }
  else if (param_1 == 9) {
    pcVar1 = "discarded";
  }
  else {
    pcVar1 = "boolean";
    if (param_1 != 4) {
      pcVar1 = "number";
    }
  }
  return pcVar1;
}



// ===== FUN_7100002ac0 @ 7100002ac0 (size=192) =====

undefined8 * FUN_7100002ac0(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 local_80 [4];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  undefined1 auStack_20 [32];
  
  FUN_710046a0c0(auStack_40,"type_error");
  FUN_7100333030(auStack_20,auStack_40,param_2);
  FUN_710046a0c0(auStack_60,&DAT_7100853d20);
  FUN_7100334b10(local_80,auStack_20,auStack_60,param_3);
  FUN_71007e21a0(auStack_60);
  FUN_71007e21a0(auStack_20);
  FUN_71007e21a0(auStack_40);
  FUN_7100332fe0(param_1,param_2,local_80[0]);
  *param_1 = &PTR_FUN_7100ade2f8;
  FUN_71007e21a0(local_80);
  return param_1;
}



// ===== FUN_7100002f94 @ 7100002f94 (size=20) =====

void FUN_7100002f94(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string: construction from null is not valid");
}



// ===== FUN_7100002fa8 @ 7100002fa8 (size=188) =====

void FUN_7100002fa8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100adf700;
  if ((code *)param_1[0x17] != (code *)0x0) {
    (*(code *)param_1[0x17])(param_1 + 0x15,param_1 + 0x15,3);
  }
  if ((undefined8 *)param_1[0xf] != param_1 + 0x11) {
    thunk_FUN_710081c200((undefined8 *)param_1[0xf],param_1[0x11] + 1);
  }
  if ((undefined8 *)param_1[0xb] != param_1 + 0xd) {
    thunk_FUN_710081c200((undefined8 *)param_1[0xb],param_1[0xd] + 1);
  }
  if ((undefined8 *)param_1[6] != param_1 + 8) {
    thunk_FUN_710081c200((undefined8 *)param_1[6],param_1[8] + 1);
  }
  if ((undefined8 *)param_1[1] != param_1 + 3) {
    thunk_FUN_710081c200((undefined8 *)param_1[1],param_1[3] + 1);
  }
  thunk_FUN_710081c200(param_1,200);
  return;
}



// ===== FUN_7100003064 @ 7100003064 (size=192) =====

long * FUN_7100003064(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  
  uVar1 = FUN_710081ce00(param_4);
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0;
  FUN_71007e25c0(param_1,uVar1 + param_3);
  if (0x7ffffffffffffffeU - param_1[1] < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::append");
  }
  FUN_71007e2a60(param_1,param_2,param_3);
  if (0x7ffffffffffffffeU - param_1[1] < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("basic_string::append");
  }
  FUN_71007e2a60(param_1,param_4,uVar1);
  return param_1;
}



// ===== FUN_71000031cc @ 71000031cc (size=188) =====

void FUN_71000031cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_7100adf700;
  if ((code *)param_1[0x17] != (code *)0x0) {
    (*(code *)param_1[0x17])(param_1 + 0x15,param_1 + 0x15,3);
  }
  if ((undefined8 *)param_1[0xf] != param_1 + 0x11) {
    thunk_FUN_710081c200((undefined8 *)param_1[0xf],param_1[0x11] + 1);
  }
  if ((undefined8 *)param_1[0xb] != param_1 + 0xd) {
    thunk_FUN_710081c200((undefined8 *)param_1[0xb],param_1[0xd] + 1);
  }
  if ((undefined8 *)param_1[6] != param_1 + 8) {
    thunk_FUN_710081c200((undefined8 *)param_1[6],param_1[8] + 1);
  }
  if ((undefined8 *)param_1[1] != param_1 + 3) {
    thunk_FUN_710081c200((undefined8 *)param_1[1],param_1[3] + 1);
  }
  thunk_FUN_710081c200(param_1,200);
  return;
}



// ===== FUN_7100003288 @ 7100003288 (size=92) =====

void FUN_7100003288(long param_1)

{
  if (*(long *)(param_1 + 0x28) != param_1 + 0x38) {
    thunk_FUN_710081c200(*(long *)(param_1 + 0x28),*(long *)(param_1 + 0x38) + 1);
  }
  if (*(long *)(param_1 + 8) != param_1 + 0x18) {
    thunk_FUN_710081c200(*(long *)(param_1 + 8),*(long *)(param_1 + 0x18) + 1);
  }
  thunk_FUN_710081c200(param_1,0x48);
  return;
}



// ===== FUN_71000032e4 @ 71000032e4 (size=188) =====

void FUN_71000032e4(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)(param_1 + 0x30);
  for (plVar3 = *(long **)(param_1 + 0x28); plVar1 != plVar3; plVar3 = plVar3 + 1) {
    lVar2 = *plVar3;
    if (lVar2 != 0) {
      if (*(long *)(lVar2 + 0x28) != lVar2 + 0x38) {
        thunk_FUN_710081c200(*(long *)(lVar2 + 0x28),*(long *)(lVar2 + 0x38) + 1);
      }
      if (*(long *)(lVar2 + 8) != lVar2 + 0x18) {
        thunk_FUN_710081c200(*(long *)(lVar2 + 8),*(long *)(lVar2 + 0x18) + 1);
      }
      thunk_FUN_710081c200(lVar2,0x48);
    }
  }
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    thunk_FUN_710081c200(lVar2,*(long *)(param_1 + 0x38) - lVar2);
  }
  if (*(long *)(param_1 + 8) != param_1 + 0x18) {
    thunk_FUN_710081c200(*(long *)(param_1 + 8),*(long *)(param_1 + 0x18) + 1);
  }
  thunk_FUN_710081c200(param_1,0x40);
  return;
}



// ===== FUN_71000033a0 @ 71000033a0 (size=20) =====

void FUN_71000033a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string: construction from null is not valid");
}



// ===== FUN_71000033b4 @ 71000033b4 (size=60) =====

void FUN_71000033b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_71007adf60(0x38);
  FUN_71005f6cc0(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(uVar1,&PTR_PTR_FUN_7100aebdb0,FUN_71005f6850);
}



// ===== FUN_7100003404 @ 7100003404 (size=72) =====

void FUN_7100003404(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_71007adf60(0x38);
  FUN_71005f6cc0(puVar1,param_1);
  *puVar1 = &PTR_LAB_7100ae1ca0;
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(puVar1,&PTR_PTR_FUN_7100aebdc8,&LAB_71005f68d0);
}



// ===== FUN_71000034bc @ 71000034bc (size=16) =====

void FUN_71000034bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    FUN_710080f900(param_1,param_2,param_3 << 1);
    return;
  }
  return;
}



// ===== FUN_71000034cc @ 71000034cc (size=396) =====

void FUN_71000034cc(undefined8 param_1,undefined2 *param_2,ulong param_3,undefined2 *param_4,
                   ulong param_5,long param_6)

{
  long lVar1;
  undefined2 *puVar2;
  long lVar3;
  long lVar4;
  
  if (param_5 - 1 < param_3) {
    if (param_5 == 1) {
      *param_2 = *param_4;
    }
    else {
      FUN_71000034bc(param_2,param_4,param_5);
    }
  }
  if (param_6 != 0 && param_5 != param_3) {
    if (param_6 == 1) {
      param_2[param_5] = param_2[param_3];
    }
    else {
      FUN_71000034bc(param_2 + param_5,param_2 + param_3,param_6);
    }
  }
  if (param_3 < param_5) {
    puVar2 = param_2 + param_3;
    if (puVar2 < param_4 + param_5) {
      if (param_4 < puVar2) {
        lVar3 = (long)puVar2 - (long)param_4;
        if (lVar3 == 2) {
          *param_2 = *param_4;
        }
        else {
          FUN_71000034bc(param_2,param_4,lVar3 >> 1);
        }
        lVar4 = param_5 - (lVar3 >> 1);
        lVar1 = param_5 * 2;
        puVar2 = (undefined2 *)((long)param_2 + lVar3);
        if (lVar4 == 1) {
          *(undefined2 *)((long)param_2 + lVar3) = param_2[param_5];
        }
        else if (lVar4 != 0) {
          lVar4 = lVar4 * 2;
          goto LAB_7100003630;
        }
      }
      else {
        lVar3 = (param_5 + ((long)param_4 - (long)param_2 >> 1)) - param_3;
        lVar1 = lVar3 * 2;
        if (param_5 != 1) {
          lVar4 = param_5 << 1;
          puVar2 = param_2;
LAB_7100003630:
          FUN_710080f900(puVar2,(long)param_2 + lVar1,lVar4);
          return;
        }
        *param_2 = param_2[lVar3];
      }
    }
    else {
      if (param_5 != 1) {
        FUN_71000034bc(param_2,param_4,param_5);
        return;
      }
      *param_2 = *param_4;
    }
  }
  return;
}



// ===== FUN_7100003658 @ 7100003658 (size=136) =====

void FUN_7100003658(long *param_1,undefined1 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong local_8;
  
  uVar2 = param_3 - (long)param_2;
  local_8 = uVar2;
  if (0xf < uVar2) {
    lVar1 = FUN_71007e2140(param_1,&local_8,0);
    *param_1 = lVar1;
    param_1[2] = local_8;
  }
  if (uVar2 == 1) {
    *(undefined1 *)*param_1 = *param_2;
  }
  else if (uVar2 != 0) {
    FUN_710080f900((undefined1 *)*param_1,param_2,uVar2);
  }
  param_1[1] = local_8;
  *(undefined1 *)(*param_1 + local_8) = 0;
  return;
}



// ===== FUN_71000036e0 @ 71000036e0 (size=176) =====

void FUN_71000036e0(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  
  lVar2 = param_1[1];
  for (lVar7 = *param_1; lVar2 != lVar7; lVar7 = lVar7 + 0x10) {
    plVar6 = *(long **)(lVar7 + 8);
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      if (*plVar1 == 0x100000001) {
        pcVar8 = *(code **)(*plVar6 + 0x10);
        plVar6[1] = 0;
        (*pcVar8)();
        (**(code **)(*plVar6 + 0x18))();
      }
      else {
        do {
          iVar5 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          FUN_71000a22d0();
        }
      }
    }
  }
  lVar7 = *param_1;
  if (lVar7 != 0) {
    thunk_FUN_710081c200(lVar7,param_1[2] - lVar7);
  }
  thunk_FUN_710081c200(param_1,0x20);
  return;
}



// ===== FUN_7100003790 @ 7100003790 (size=72) =====

void FUN_7100003790(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_71007adf60(0x10);
  FUN_71007b6500(puVar1,param_1);
  *puVar1 = &PTR_LAB_7100aec0f0;
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(puVar1,&PTR_PTR_FUN_7100aec0b0,&LAB_71006612f0);
}



// ===== FUN_71000037ec @ 71000037ec (size=72) =====

void FUN_71000037ec(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_710081ce00();
  do {
    if (lVar1 == 0) {
      return;
    }
    lVar2 = FUN_7100823120(2,param_1,lVar1);
    param_1 = param_1 + lVar2;
    lVar1 = lVar1 - lVar2;
  } while (0 < lVar2);
  return;
}



// ===== FUN_7100003834 @ 7100003834 (size=52) =====

void FUN_7100003834(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_71007adf60(8);
  *puVar1 = &PTR_LAB_7100aec540;
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(puVar1,&PTR_PTR_FUN_7100aec500,&LAB_71007adca0);
}



// ===== FUN_7100003868 @ 7100003868 (size=52) =====

void FUN_7100003868(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_71007adf60(8);
  *puVar1 = &PTR_LAB_7100aec568;
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(puVar1,&PTR_PTR_FUN_7100aec518,&LAB_71007add00);
}



// ===== FUN_710000389c @ 710000389c (size=52) =====

void FUN_710000389c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_71007adf60(8);
  *puVar1 = &PTR_FUN_7100aef450;
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(puVar1,&PTR_PTR_FUN_7100aef428,FUN_71007f9dc0);
}



// ===== FUN_71000038d0 @ 71000038d0 (size=68) =====

void FUN_71000038d0(long *param_1)

{
  if (param_1 != (long *)0x0) {
    FUN_71007ae000();
    if (*param_1 + 0xb8b1aabcbcd4d500U < 2) {
      FUN_71007aeec0(param_1[-7]);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003914();
}



// ===== FUN_7100003914 @ 7100003914 (size=16) =====

void FUN_7100003914(void)

{
  undefined8 *puVar1;
  
  FUN_71007aeee0();
  FUN_71007aeec0();
  FUN_71007aef20();
  FUN_71007aef00();
  puVar1 = (undefined8 *)FUN_71007adf60(8);
  *puVar1 = &PTR_LAB_7100aec678;
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(puVar1,&PTR_PTR_FUN_7100aec638,&LAB_71007af200);
}



// ===== FUN_7100003924 @ 7100003924 (size=16) =====

void FUN_7100003924(void)

{
  undefined8 *puVar1;
  
  FUN_71007aef20();
  FUN_71007aef00();
  puVar1 = (undefined8 *)FUN_71007adf60(8);
  *puVar1 = &PTR_LAB_7100aec678;
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(puVar1,&PTR_PTR_FUN_7100aec638,&LAB_71007af200);
}



// ===== FUN_7100003934 @ 7100003934 (size=52) =====

void FUN_7100003934(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_71007adf60(8);
  *puVar1 = &PTR_LAB_7100aec678;
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(puVar1,&PTR_PTR_FUN_7100aec638,&LAB_71007af200);
}



// ===== FUN_7100003a08 @ 7100003a08 (size=20) =====

void FUN_7100003a08(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string: construction from null is not valid");
}



// ===== FUN_7100003a1c @ 7100003a1c (size=52) =====

void FUN_7100003a1c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_71007adf60(8);
  *puVar1 = &PTR_FUN_7100aec478;
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(puVar1,&PTR_PTR_FUN_7100aea210,FUN_71007ad880);
}



// ===== FUN_7100003a50 @ 7100003a50 (size=52) =====

void FUN_7100003a50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_71007adf60(8);
  *puVar1 = &PTR_FUN_7100aef450;
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(puVar1,&PTR_PTR_FUN_7100aef428,FUN_71007f9dc0);
}



// ===== FUN_7100003a84 @ 7100003a84 (size=52) =====

void FUN_7100003a84(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_71007adf60(8);
  *puVar1 = &PTR_FUN_7100aef490;
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(puVar1,&PTR_PTR_FUN_7100aef468,FUN_71007f9e20);
}



// ===== FUN_7100003ab8 @ 7100003ab8 (size=60) =====

void FUN_7100003ab8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_71007adf60(0x10);
  FUN_71007b6300(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(uVar1,&PTR_PTR_FUN_7100ae7550,FUN_71007b0820);
}



// ===== FUN_7100003b08 @ 7100003b08 (size=60) =====

void FUN_7100003b08(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_71007adf60(0x10);
  FUN_71007b6440(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(uVar1,&PTR_PTR_FUN_7100ae82a0,FUN_71007b0900);
}



// ===== FUN_7100003b58 @ 7100003b58 (size=60) =====

void FUN_7100003b58(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_71007adf60(0x10);
  FUN_71007b6480(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(uVar1,&PTR_PTR_FUN_7100ae7568,FUN_71007b0940);
}



// ===== FUN_7100003ba8 @ 7100003ba8 (size=60) =====

void FUN_7100003ba8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_71007adf60(0x10);
  FUN_71007b64c0(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(uVar1,&PTR_PTR_FUN_7100ae7580,FUN_71007b0980);
}



// ===== FUN_7100003bf8 @ 7100003bf8 (size=12) =====

void FUN_7100003bf8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_7100003ba8();
}



// ===== FUN_7100003c04 @ 7100003c04 (size=60) =====

void FUN_7100003c04(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_71007adf60(0x10);
  FUN_71007b6500(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(uVar1,&PTR_PTR_FUN_7100ae75b0,FUN_71007b09c0);
}



// ===== FUN_7100003c54 @ 7100003c54 (size=52) =====

void FUN_7100003c54(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_71007adf60(8);
  *puVar1 = &PTR_FUN_7100aee078;
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(puVar1,&PTR_PTR_FUN_7100aee050,FUN_71007cfe60);
}



// ===== FUN_7100003c88 @ 7100003c88 (size=60) =====

void FUN_7100003c88(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_71007adf60(0x18);
  FUN_71007e1180(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(uVar1,&PTR_PTR_FUN_7100ae7fa8,FUN_71007e1140);
}



// ===== FUN_7100003cd8 @ 7100003cd8 (size=384) =====

void FUN_7100003cd8(undefined8 param_1,undefined1 *param_2,ulong param_3,undefined1 *param_4,
                   ulong param_5,long param_6)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_5 - 1 < param_3) {
    if (param_5 == 1) {
      *param_2 = *param_4;
    }
    else {
      FUN_710080f900(param_2,param_4,param_5);
    }
  }
  if (param_6 != 0 && param_5 != param_3) {
    if (param_6 == 1) {
      param_2[param_5] = param_2[param_3];
    }
    else {
      FUN_710080f900(param_2 + param_5,param_2 + param_3,param_6);
    }
  }
  if (param_3 < param_5) {
    puVar1 = param_2 + param_3;
    if (puVar1 < param_4 + param_5) {
      if (param_4 < puVar1) {
        lVar3 = (long)puVar1 - (long)param_4;
        if (lVar3 == 1) {
          *param_2 = *param_4;
        }
        else {
          FUN_710080f900(param_2,param_4,lVar3);
        }
        uVar2 = param_5 - lVar3;
        puVar1 = param_2 + param_5;
        if (uVar2 == 1) {
          param_2[lVar3] = param_2[param_5];
        }
        else {
          param_2 = param_2 + lVar3;
          param_5 = uVar2;
          if (uVar2 != 0) goto LAB_7100003e30;
        }
      }
      else {
        puVar1 = param_2 + (long)(param_4 + ((param_5 - param_3) - (long)param_2));
        if (param_5 != 1) {
LAB_7100003e30:
          FUN_710080f900(param_2,puVar1,param_5);
          return;
        }
        *param_2 = param_2[(long)(param_4 + ((param_5 - param_3) - (long)param_2))];
      }
    }
    else {
      if (param_5 != 1) {
        FUN_710080f900(param_2,param_4,param_5);
        return;
      }
      *param_2 = *param_4;
    }
  }
  return;
}



// ===== FUN_7100003e58 @ 7100003e58 (size=144) =====

void FUN_7100003e58(undefined4 param_1)

{
  undefined8 *puVar1;
  undefined1 *local_20 [2];
  undefined1 auStack_10 [16];
  
  puVar1 = (undefined8 *)FUN_71007adf60(0x20);
  (**(code **)(PTR_PTR_LAB_7100af4780 + 0x20))(local_20,&PTR_PTR_LAB_7100af4780,param_1);
  FUN_71007c5bc0(puVar1,local_20);
  if (local_20[0] != auStack_10) {
    thunk_FUN_710081c200();
  }
  *puVar1 = &PTR_FUN_7100aeebe8;
  *(undefined4 *)(puVar1 + 2) = param_1;
  puVar1[3] = &PTR_PTR_LAB_7100af4780;
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(puVar1,&PTR_PTR_FUN_7100aec0c8,FUN_71007e3540);
}



// ===== FUN_7100003fac @ 7100003fac (size=392) =====

void FUN_7100003fac(undefined8 param_1,undefined4 *param_2,ulong param_3,undefined4 *param_4,
                   ulong param_5,long param_6)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_5 - 1 < param_3) {
    if (param_5 == 1) {
      *param_2 = *param_4;
    }
    else {
      FUN_7100806820(param_2,param_4,param_5);
    }
  }
  if (param_6 != 0 && param_5 != param_3) {
    if (param_6 == 1) {
      param_2[param_5] = param_2[param_3];
    }
    else {
      FUN_7100806820(param_2 + param_5,param_2 + param_3,param_6);
    }
  }
  if (param_3 < param_5) {
    puVar2 = param_2 + param_3;
    if (puVar2 < param_4 + param_5) {
      if (param_4 < puVar2) {
        lVar3 = (long)puVar2 - (long)param_4;
        if (lVar3 == 4) {
          *param_2 = *param_4;
        }
        else {
          FUN_7100806820(param_2,param_4,lVar3 >> 2);
        }
        uVar4 = param_5 - (lVar3 >> 2);
        lVar1 = param_5 * 4;
        if (uVar4 == 1) {
          *(undefined4 *)((long)param_2 + lVar3) = param_2[param_5];
        }
        else {
          puVar2 = (undefined4 *)((long)param_2 + lVar3);
          param_5 = uVar4;
          if (uVar4 != 0) goto LAB_710000410c;
        }
      }
      else {
        lVar3 = (param_5 + ((long)param_4 - (long)param_2 >> 2)) - param_3;
        lVar1 = lVar3 * 4;
        puVar2 = param_2;
        if (param_5 != 1) {
LAB_710000410c:
          FUN_710080e900(puVar2,(long)param_2 + lVar1,param_5);
          return;
        }
        *param_2 = param_2[lVar3];
      }
    }
    else {
      if (param_5 != 1) {
        FUN_7100806820(param_2,param_4,param_5);
        return;
      }
      *param_2 = *param_4;
    }
  }
  return;
}



// ===== FUN_7100004134 @ 7100004134 (size=76) =====

void FUN_7100004134(long *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = (long)(param_1 + 2);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string: construction from null is not valid");
  }
  lVar1 = FUN_710081ce00(param_2);
  FUN_71007f5500(param_1,param_2,param_2 + lVar1);
  return;
}



// ===== FUN_7100004180 @ 7100004180 (size=120) =====

void FUN_7100004180(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 local_10 [2];
  undefined8 local_8;
  
  puVar1 = (undefined8 *)FUN_71007adf60(0x30);
  local_8 = FUN_71007ffba0();
  local_10[0] = 1;
  FUN_71007ff8a0(puVar1,param_1,local_10);
  *puVar1 = &PTR_FUN_7100aefb78;
  uVar2 = FUN_71007b0800(puVar1);
  FUN_71007ffd40(puVar1 + 4,uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(puVar1,&PTR_PTR_FUN_7100aefb00,FUN_71007ff820);
}



// ===== FUN_710000421c @ 710000421c (size=148) =====

void FUN_710000421c(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int local_10 [2];
  undefined8 local_8;
  
  puVar1 = (undefined8 *)FUN_71007adf60(0x30);
  if (param_2 == 0) {
    local_8 = FUN_71007ffba0();
    local_10[0] = 1;
  }
  else {
    local_8 = FUN_71007e37c0();
    local_10[0] = param_2;
  }
  FUN_71007ff8a0(puVar1,param_1,local_10);
  *puVar1 = &PTR_FUN_7100aefb78;
  uVar2 = FUN_71007b0800(puVar1);
  FUN_71007ffd40(puVar1 + 4,uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(puVar1,&PTR_PTR_FUN_7100aefb00,FUN_71007ff820);
}



// ===== FUN_71000042e0 @ 71000042e0 (size=972) =====

void FUN_71000042e0(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  bool bVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 *puStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  plVar18 = DAT_7100af8430;
  plVar16 = DAT_7100af8428;
  if (DAT_7100af8428 != DAT_7100af8430) {
    do {
      if ((long *)plVar16[8] != plVar16 + 10) {
        thunk_FUN_710081c200((long *)plVar16[8],plVar16[10] + 1);
      }
      if ((long *)plVar16[4] != plVar16 + 6) {
        thunk_FUN_710081c200((long *)plVar16[4],plVar16[6] + 1);
      }
      if ((long *)*plVar16 != plVar16 + 2) {
        thunk_FUN_710081c200((long *)*plVar16,plVar16[2] + 1);
      }
      plVar16 = plVar16 + 0xc;
    } while (plVar18 != plVar16);
  }
  plVar16 = DAT_7100af8410;
  plVar18 = DAT_7100af8418;
  if (DAT_7100af8428 != (long *)0x0) {
    thunk_FUN_710081c200(DAT_7100af8428,DAT_7100af8438 - (long)DAT_7100af8428);
    plVar16 = DAT_7100af8410;
    plVar18 = DAT_7100af8418;
  }
  for (; plVar4 = DAT_7100af8418, plVar16 != DAT_7100af8418; plVar16 = plVar16 + 0xc) {
    DAT_7100af8418 = plVar18;
    if ((long *)plVar16[8] != plVar16 + 10) {
      thunk_FUN_710081c200((long *)plVar16[8],plVar16[10] + 1);
    }
    if ((long *)plVar16[4] != plVar16 + 6) {
      thunk_FUN_710081c200((long *)plVar16[4],plVar16[6] + 1);
    }
    if ((long *)*plVar16 != plVar16 + 2) {
      thunk_FUN_710081c200((long *)*plVar16,plVar16[2] + 1);
    }
    plVar18 = DAT_7100af8418;
    DAT_7100af8418 = plVar4;
  }
  plVar16 = DAT_7100af83f8;
  plVar4 = DAT_7100af8400;
  DAT_7100af8418 = plVar18;
  if (DAT_7100af8410 != (long *)0x0) {
    thunk_FUN_710081c200(DAT_7100af8410,DAT_7100af8420 - (long)DAT_7100af8410);
    plVar16 = DAT_7100af83f8;
    plVar4 = DAT_7100af8400;
  }
  for (; plVar18 = DAT_7100af8400, plVar16 != DAT_7100af8400; plVar16 = plVar16 + 0xc) {
    DAT_7100af8400 = plVar4;
    if ((long *)plVar16[8] != plVar16 + 10) {
      thunk_FUN_710081c200((long *)plVar16[8],plVar16[10] + 1);
    }
    if ((long *)plVar16[4] != plVar16 + 6) {
      thunk_FUN_710081c200((long *)plVar16[4],plVar16[6] + 1);
    }
    if ((long *)*plVar16 != plVar16 + 2) {
      thunk_FUN_710081c200((long *)*plVar16,plVar16[2] + 1);
    }
    plVar4 = DAT_7100af8400;
    DAT_7100af8400 = plVar18;
  }
  lVar5 = DAT_7100af83a0;
  lVar6 = DAT_7100af83b0;
  plVar18 = DAT_7100af83b8;
  lVar7 = DAT_7100af83c0;
  lVar8 = DAT_7100af83c8;
  plVar9 = DAT_7100af83d8;
  DAT_7100af8400 = plVar4;
  plVar16 = DAT_7100af83b8;
  plVar10 = DAT_7100af83d8;
  lVar2 = DAT_7100af83c8;
  lVar11 = DAT_7100af83c0;
  plVar12 = DAT_7100af83b8;
  lVar13 = DAT_7100af83b0;
  lVar14 = DAT_7100af83a0;
  if (DAT_7100af83f8 != (long *)0x0) {
    thunk_FUN_710081c200(DAT_7100af83f8,DAT_7100af8408 - (long)DAT_7100af83f8);
    lVar5 = DAT_7100af83a0;
    lVar6 = DAT_7100af83b0;
    plVar18 = DAT_7100af83b8;
    lVar7 = DAT_7100af83c0;
    lVar8 = DAT_7100af83c8;
    plVar9 = DAT_7100af83d8;
    plVar16 = DAT_7100af83b8;
    plVar10 = DAT_7100af83d8;
    lVar2 = DAT_7100af83c8;
    lVar11 = DAT_7100af83c0;
    plVar12 = DAT_7100af83b8;
    lVar13 = DAT_7100af83b0;
    lVar14 = DAT_7100af83a0;
  }
  while (DAT_7100af83a0 = lVar14, DAT_7100af83b0 = lVar13, DAT_7100af83b8 = plVar12,
        DAT_7100af83c0 = lVar11, DAT_7100af83c8 = lVar2, DAT_7100af83d8 = plVar10,
        plVar10 = DAT_7100af83d8, lVar2 = DAT_7100af83c8, lVar11 = DAT_7100af83c0,
        plVar12 = DAT_7100af83b8, lVar13 = DAT_7100af83b0, lVar14 = DAT_7100af83a0,
        plVar16 = plVar16 + 1, DAT_7100af83b0 = lVar6, DAT_7100af83c0 = lVar7,
        DAT_7100af83c8 = lVar8, plVar16 < DAT_7100af83d8) {
    lVar17 = *plVar16;
    lVar1 = lVar17 + 0x1e0;
    DAT_7100af83a0 = lVar5;
    DAT_7100af83b8 = plVar18;
    DAT_7100af83d8 = plVar9;
    do {
      if (*(long *)(lVar17 + 8) != lVar17 + 0x18) {
        thunk_FUN_710081c200(*(long *)(lVar17 + 8),*(long *)(lVar17 + 0x18) + 1);
      }
      lVar17 = lVar17 + 0x28;
      lVar5 = DAT_7100af83a0;
      lVar6 = DAT_7100af83b0;
      plVar18 = DAT_7100af83b8;
      lVar7 = DAT_7100af83c0;
      lVar8 = DAT_7100af83c8;
      plVar9 = DAT_7100af83d8;
    } while (lVar17 != lVar1);
  }
  bVar15 = DAT_7100af83b8 == DAT_7100af83d8;
  lVar6 = DAT_7100af83a0;
  DAT_7100af83b8 = plVar18;
  DAT_7100af83d8 = plVar9;
  if (bVar15) {
    for (; DAT_7100af83a0 = lVar5, lVar6 != lVar11; lVar6 = lVar6 + 0x28) {
      if (*(long *)(lVar6 + 8) != lVar6 + 0x18) {
        thunk_FUN_710081c200(*(long *)(lVar6 + 8),*(long *)(lVar6 + 0x18) + 1);
      }
      lVar5 = DAT_7100af83a0;
    }
  }
  else {
    for (; DAT_7100af83a0 = lVar5, lVar6 != lVar13; lVar6 = lVar6 + 0x28) {
      if (*(long *)(lVar6 + 8) != lVar6 + 0x18) {
        thunk_FUN_710081c200(*(long *)(lVar6 + 8),*(long *)(lVar6 + 0x18) + 1);
      }
      lVar5 = DAT_7100af83a0;
    }
    for (; lVar11 != lVar2; lVar2 = lVar2 + 0x28) {
      if (*(long *)(lVar2 + 8) != lVar2 + 0x18) {
        thunk_FUN_710081c200(*(long *)(lVar2 + 8),*(long *)(lVar2 + 0x18) + 1);
      }
    }
  }
  if (DAT_7100af8390 != 0) {
    plVar16 = DAT_7100af83d8 + 1;
    for (plVar18 = DAT_7100af83b8; plVar18 < plVar16; plVar18 = plVar18 + 1) {
      thunk_FUN_710081c200(*plVar18,0x1e0);
    }
    thunk_FUN_710081c200(DAT_7100af8390,DAT_7100af8398 << 3);
  }
  if (DAT_7100af8368 != 0) {
    thunk_FUN_710081c200(DAT_7100af8368,DAT_7100af8378 - DAT_7100af8368);
  }
  uStack_38 = DAT_7100af8320;
  local_40 = DAT_7100af8318;
  puStack_28 = DAT_7100af8330;
  uStack_30 = DAT_7100af8328;
  uStack_18 = DAT_7100af8340;
  local_20 = DAT_7100af8338;
  uStack_10 = DAT_7100af8348;
  lStack_8 = DAT_7100af8350;
  FUN_71000508b0(&local_40,&local_20);
  if (DAT_7100af8308 != 0) {
    puVar3 = (undefined8 *)(DAT_7100af8350 + 8);
    for (puVar19 = DAT_7100af8330; puVar19 < puVar3; puVar19 = puVar19 + 1) {
      thunk_FUN_710081c200(*puVar19,0x1f8);
    }
    thunk_FUN_710081c200(DAT_7100af8308,DAT_7100af8310 << 3);
  }
  if (DAT_7100af82e0 != 0) {
    thunk_FUN_710081c200(DAT_7100af82e0,DAT_7100af82f0 - DAT_7100af82e0);
  }
  if (DAT_7100af82d8 != 0) {
    FUN_710004ef30();
    return;
  }
  return;
}



// ===== FUN_71000046b0 @ 71000046b0 (size=132) =====

void FUN_71000046b0(void)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = DAT_7100af8488;
  plVar2 = DAT_7100af8480;
  if (DAT_7100af8480 != DAT_7100af8488) {
    do {
      if ((long *)*plVar2 != plVar2 + 2) {
        thunk_FUN_710081c200((long *)*plVar2,plVar2[2] + 1);
      }
      plVar2 = plVar2 + 6;
    } while (plVar1 != plVar2);
  }
  if (DAT_7100af8480 != (long *)0x0) {
    thunk_FUN_710081c200(DAT_7100af8480,DAT_7100af8490 - (long)DAT_7100af8480);
    return;
  }
  return;
}



// ===== FUN_7100004740 @ 7100004740 (size=308) =====

void FUN_7100004740(void)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = DAT_7100af84b0;
  plVar2 = DAT_7100af84a8;
  if (DAT_7100af84a8 != DAT_7100af84b0) {
    do {
      if ((long *)*plVar2 != plVar2 + 2) {
        thunk_FUN_710081c200((long *)*plVar2,plVar2[2] + 1);
      }
      plVar2 = plVar2 + 4;
    } while (plVar1 != plVar2);
  }
  if (DAT_7100af84a8 != (long *)0x0) {
    thunk_FUN_710081c200(DAT_7100af84a8,DAT_7100af84b8 - (long)DAT_7100af84a8);
  }
  FUN_71007e21a0(&DAT_7100af84e0);
  FUN_71007e21a0(&DAT_7100af84c0);
  FUN_71007e21a0(&DAT_7100af8528);
  FUN_71007e21a0(&DAT_7100af8508);
  DAT_7100af8548 = DAT_7100af8548 + -1;
  if (DAT_7100af8548 == 0) {
    FUN_7100066ce0(&DAT_7100af2040);
  }
  DAT_7100af8550 = DAT_7100af8550 + -1;
  if (DAT_7100af8550 == 0) {
    FUN_7100066ce0(&DAT_7100af20b8);
  }
  DAT_7100af8558 = DAT_7100af8558 + -1;
  if (DAT_7100af8558 == 0) {
    FUN_7100066ce0(&DAT_7100af2130);
  }
  DAT_7100af8560 = DAT_7100af8560 + -1;
  if (DAT_7100af8560 != 0) {
    return;
  }
  FUN_7100066ce0(&DAT_7100af21a8);
  return;
}



// ===== FUN_7100004880 @ 7100004880 (size=52) =====

void FUN_7100004880(void)

{
  FUN_71007e21a0(&DAT_7100af85a8);
  FUN_71007e21a0(&DAT_7100af8588);
  FUN_71007e21a0(&DAT_7100af8568);
  return;
}



// ===== FUN_71000048c0 @ 71000048c0 (size=80) =====

void FUN_71000048c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_7100af8968;
  while( true ) {
    if ((undefined8 *)*puVar1 != puVar1 + 2) {
      thunk_FUN_710081c200((undefined8 *)*puVar1,puVar1[2] + 1);
    }
    if (puVar1 == (undefined8 *)&DAT_7100af85c8) break;
    puVar1 = puVar1 + -4;
  }
  return;
}



// ===== FUN_7100004910 @ 7100004910 (size=164) =====

void FUN_7100004910(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = DAT_7100af8f00;
  lVar3 = DAT_7100af8ef8;
  if (DAT_7100af8ef8 != DAT_7100af8f00) {
    do {
      lVar2 = *(long *)(lVar3 + 0x20);
      if (lVar2 != 0) {
        thunk_FUN_710081c200(lVar2,*(long *)(lVar3 + 0x30) - lVar2);
      }
      lVar3 = lVar3 + 0x68;
    } while (lVar1 != lVar3);
  }
  if (DAT_7100af8ef8 != 0) {
    thunk_FUN_710081c200(DAT_7100af8ef8,DAT_7100af8f08 - DAT_7100af8ef8);
  }
  if (DAT_7100af8ee0 != 0) {
    thunk_FUN_710081c200(DAT_7100af8ee0,DAT_7100af8ef0 - DAT_7100af8ee0);
  }
  if (DAT_7100af8ec8 != 0) {
    thunk_FUN_710081c200(DAT_7100af8ec8,DAT_7100af8ed8 - DAT_7100af8ec8);
  }
  FUN_7100081570(&DAT_7100af8df0);
  return;
}



// ===== FUN_71000049c0 @ 71000049c0 (size=640) =====

void FUN_71000049c0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 == 0) {
    return;
  }
  do {
    lVar4 = *(long *)(param_1 + 0x18);
    while (lVar4 != 0) {
      lVar3 = *(long *)(lVar4 + 0x18);
      while (lVar3 != 0) {
        lVar2 = *(long *)(lVar3 + 0x18);
        while (lVar2 != 0) {
          lVar1 = *(long *)(lVar2 + 0x18);
          while (lVar1 != 0) {
            lVar5 = *(long *)(lVar1 + 0x18);
            while (lVar5 != 0) {
              lVar6 = *(long *)(lVar5 + 0x18);
              while (lVar6 != 0) {
                lVar7 = *(long *)(lVar6 + 0x18);
                while (lVar7 != 0) {
                  lVar9 = *(long *)(lVar7 + 0x18);
                  while (lVar9 != 0) {
                    FUN_71000049c0(*(undefined8 *)(lVar9 + 0x18));
                    lVar8 = *(long *)(lVar9 + 0x10);
                    if (*(long *)(lVar9 + 0x20) != lVar9 + 0x30) {
                      thunk_FUN_710081c200(*(long *)(lVar9 + 0x20),*(long *)(lVar9 + 0x30) + 1);
                    }
                    thunk_FUN_710081c200(lVar9,0x48);
                    lVar9 = lVar8;
                  }
                  lVar9 = *(long *)(lVar7 + 0x10);
                  if (*(long *)(lVar7 + 0x20) != lVar7 + 0x30) {
                    thunk_FUN_710081c200(*(long *)(lVar7 + 0x20),*(long *)(lVar7 + 0x30) + 1);
                  }
                  thunk_FUN_710081c200(lVar7,0x48);
                  lVar7 = lVar9;
                }
                lVar7 = *(long *)(lVar6 + 0x10);
                if (*(long *)(lVar6 + 0x20) != lVar6 + 0x30) {
                  thunk_FUN_710081c200(*(long *)(lVar6 + 0x20),*(long *)(lVar6 + 0x30) + 1);
                }
                thunk_FUN_710081c200(lVar6,0x48);
                lVar6 = lVar7;
              }
              lVar6 = *(long *)(lVar5 + 0x10);
              if (*(long *)(lVar5 + 0x20) != lVar5 + 0x30) {
                thunk_FUN_710081c200(*(long *)(lVar5 + 0x20),*(long *)(lVar5 + 0x30) + 1);
              }
              thunk_FUN_710081c200(lVar5,0x48);
              lVar5 = lVar6;
            }
            lVar5 = *(long *)(lVar1 + 0x10);
            if (*(long *)(lVar1 + 0x20) != lVar1 + 0x30) {
              thunk_FUN_710081c200(*(long *)(lVar1 + 0x20),*(long *)(lVar1 + 0x30) + 1);
            }
            thunk_FUN_710081c200(lVar1,0x48);
            lVar1 = lVar5;
          }
          lVar1 = *(long *)(lVar2 + 0x10);
          if (*(long *)(lVar2 + 0x20) != lVar2 + 0x30) {
            thunk_FUN_710081c200(*(long *)(lVar2 + 0x20),*(long *)(lVar2 + 0x30) + 1);
          }
          thunk_FUN_710081c200(lVar2,0x48);
          lVar2 = lVar1;
        }
        lVar2 = *(long *)(lVar3 + 0x10);
        if (*(long *)(lVar3 + 0x20) != lVar3 + 0x30) {
          thunk_FUN_710081c200(*(long *)(lVar3 + 0x20),*(long *)(lVar3 + 0x30) + 1);
        }
        thunk_FUN_710081c200(lVar3,0x48);
        lVar3 = lVar2;
      }
      lVar3 = *(long *)(lVar4 + 0x10);
      if (*(long *)(lVar4 + 0x20) != lVar4 + 0x30) {
        thunk_FUN_710081c200(*(long *)(lVar4 + 0x20),*(long *)(lVar4 + 0x30) + 1);
      }
      thunk_FUN_710081c200(lVar4,0x48);
      lVar4 = lVar3;
    }
    lVar4 = *(long *)(param_1 + 0x10);
    if (*(long *)(param_1 + 0x20) != param_1 + 0x30) {
      thunk_FUN_710081c200(*(long *)(param_1 + 0x20),*(long *)(param_1 + 0x30) + 1);
    }
    thunk_FUN_710081c200(param_1,0x48);
    param_1 = lVar4;
  } while (lVar4 != 0);
  return;
}



// ===== FUN_7100004c40 @ 7100004c40 (size=116) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100004c40(void)

{
  FUN_71000049c0(_DAT_7100af90f8);
  FUN_71000049c0(_DAT_7100af90c8);
  FUN_7100097030(_DAT_7100af9130);
  FUN_7100099c60(&DAT_7100af9070);
  FUN_7100096c30(_DAT_7100af9098);
  FUN_7100096a50(_DAT_7100af9050);
  FUN_71000974a0(_DAT_7100af9020);
  FUN_7100097430(DAT_7100af8f58);
  FUN_7100096ab0(DAT_7100af8ff0);
  FUN_7100097030(DAT_7100af8fc0);
  FUN_7100096c30(DAT_7100af8f88);
  return;
}



// ===== FUN_7100004cc0 @ 7100004cc0 (size=152) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100004cc0(void)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = _DAT_7100af91e0;
  plVar2 = _DAT_7100af91d8;
  if (_DAT_7100af91d8 != _DAT_7100af91e0) {
    do {
      if ((long *)plVar2[5] != plVar2 + 7) {
        thunk_FUN_710081c200((long *)plVar2[5],plVar2[7] + 1);
      }
      if ((long *)*plVar2 != plVar2 + 2) {
        thunk_FUN_710081c200((long *)*plVar2,plVar2[2] + 1);
      }
      plVar2 = plVar2 + 9;
    } while (plVar1 != plVar2);
  }
  if (_DAT_7100af91d8 != (long *)0x0) {
    thunk_FUN_710081c200(_DAT_7100af91d8,_DAT_7100af91e8 - (long)_DAT_7100af91d8);
  }
  FUN_71007e21a0(&DAT_7100af91b0);
  return;
}



// ===== FUN_7100004d90 @ 7100004d90 (size=384) =====

void FUN_7100004d90(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 == 0) {
    return;
  }
  do {
    lVar4 = *(long *)(param_1 + 0x18);
    while (lVar4 != 0) {
      lVar3 = *(long *)(lVar4 + 0x18);
      while (lVar3 != 0) {
        lVar2 = *(long *)(lVar3 + 0x18);
        while (lVar2 != 0) {
          lVar1 = *(long *)(lVar2 + 0x18);
          while (lVar1 != 0) {
            lVar5 = *(long *)(lVar1 + 0x18);
            while (lVar5 != 0) {
              lVar6 = *(long *)(lVar5 + 0x18);
              while (lVar6 != 0) {
                lVar7 = *(long *)(lVar6 + 0x18);
                while (lVar7 != 0) {
                  lVar9 = *(long *)(lVar7 + 0x18);
                  while (lVar9 != 0) {
                    FUN_7100004d90(*(undefined8 *)(lVar9 + 0x18));
                    lVar8 = *(long *)(lVar9 + 0x10);
                    thunk_FUN_710081c200(lVar9,0x28);
                    lVar9 = lVar8;
                  }
                  lVar9 = *(long *)(lVar7 + 0x10);
                  thunk_FUN_710081c200(lVar7,0x28);
                  lVar7 = lVar9;
                }
                lVar7 = *(long *)(lVar6 + 0x10);
                thunk_FUN_710081c200(lVar6,0x28);
                lVar6 = lVar7;
              }
              lVar6 = *(long *)(lVar5 + 0x10);
              thunk_FUN_710081c200(lVar5,0x28);
              lVar5 = lVar6;
            }
            lVar5 = *(long *)(lVar1 + 0x10);
            thunk_FUN_710081c200(lVar1,0x28);
            lVar1 = lVar5;
          }
          lVar1 = *(long *)(lVar2 + 0x10);
          thunk_FUN_710081c200(lVar2,0x28);
          lVar2 = lVar1;
        }
        lVar2 = *(long *)(lVar3 + 0x10);
        thunk_FUN_710081c200(lVar3,0x28);
        lVar3 = lVar2;
      }
      lVar3 = *(long *)(lVar4 + 0x10);
      thunk_FUN_710081c200(lVar4,0x28);
      lVar4 = lVar3;
    }
    lVar4 = *(long *)(param_1 + 0x10);
    thunk_FUN_710081c200(param_1,0x28);
    param_1 = lVar4;
  } while (lVar4 != 0);
  return;
}



// ===== FUN_7100004f20 @ 7100004f20 (size=32) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100004f20(void)

{
  FUN_71000a2330();
  FUN_7100004d90(_DAT_7100af9358);
  return;
}



// ===== FUN_7100004f50 @ 7100004f50 (size=240) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100004f50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_7100af9ba8;
  FUN_7100125480(_DAT_7100af93c0);
  while( true ) {
    if ((undefined8 *)puVar1[8] != puVar1 + 10) {
      thunk_FUN_710081c200((undefined8 *)puVar1[8],puVar1[10] + 1);
    }
    if ((undefined8 *)puVar1[4] != puVar1 + 6) {
      thunk_FUN_710081c200((undefined8 *)puVar1[4],puVar1[6] + 1);
    }
    if ((undefined8 *)*puVar1 != puVar1 + 2) {
      thunk_FUN_710081c200((undefined8 *)*puVar1,puVar1[2] + 1);
    }
    if (puVar1 == (undefined8 *)&DAT_7100af9608) break;
    puVar1 = puVar1 + -0xc;
  }
  puVar1 = (undefined8 *)&DAT_7100af95c8;
  while( true ) {
    if ((undefined8 *)puVar1[4] != puVar1 + 6) {
      thunk_FUN_710081c200((undefined8 *)puVar1[4],puVar1[6] + 1);
    }
    if ((undefined8 *)*puVar1 != puVar1 + 2) {
      thunk_FUN_710081c200((undefined8 *)*puVar1,puVar1[2] + 1);
    }
    if (puVar1 == (undefined8 *)&DAT_7100af9408) break;
    puVar1 = puVar1 + -8;
  }
  return;
}



// ===== FUN_7100005040 @ 7100005040 (size=240) =====

void FUN_7100005040(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    return;
  }
  do {
    FUN_7100005040(*(undefined8 *)(param_1 + 0x18));
    lVar1 = *(long *)(param_1 + 0x10);
    if (*(long *)(param_1 + 200) != param_1 + 0xd8) {
      thunk_FUN_710081c200(*(long *)(param_1 + 200),*(long *)(param_1 + 0xd8) + 1);
    }
    if (*(long *)(param_1 + 0xa8) != param_1 + 0xb8) {
      thunk_FUN_710081c200(*(long *)(param_1 + 0xa8),*(long *)(param_1 + 0xb8) + 1);
    }
    if (*(long *)(param_1 + 0x80) != param_1 + 0x90) {
      thunk_FUN_710081c200(*(long *)(param_1 + 0x80),*(long *)(param_1 + 0x90) + 1);
    }
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_71007f5e80(param_1 + 0x70);
    }
    if (*(long *)(param_1 + 0x50) != param_1 + 0x60) {
      thunk_FUN_710081c200(*(long *)(param_1 + 0x50),*(long *)(param_1 + 0x60) + 1);
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_71007f5e80(param_1 + 0x40);
    }
    if (*(long *)(param_1 + 0x20) != param_1 + 0x30) {
      thunk_FUN_710081c200(*(long *)(param_1 + 0x20),*(long *)(param_1 + 0x30) + 1);
    }
    thunk_FUN_710081c200(param_1,0x2f0);
    param_1 = lVar1;
  } while (lVar1 != 0);
  return;
}



// ===== FUN_7100005130 @ 7100005130 (size=640) =====

void FUN_7100005130(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 == 0) {
    return;
  }
  do {
    lVar4 = *(long *)(param_1 + 0x18);
    while (lVar4 != 0) {
      lVar3 = *(long *)(lVar4 + 0x18);
      while (lVar3 != 0) {
        lVar2 = *(long *)(lVar3 + 0x18);
        while (lVar2 != 0) {
          lVar1 = *(long *)(lVar2 + 0x18);
          while (lVar1 != 0) {
            lVar5 = *(long *)(lVar1 + 0x18);
            while (lVar5 != 0) {
              lVar6 = *(long *)(lVar5 + 0x18);
              while (lVar6 != 0) {
                lVar7 = *(long *)(lVar6 + 0x18);
                while (lVar7 != 0) {
                  lVar9 = *(long *)(lVar7 + 0x18);
                  while (lVar9 != 0) {
                    FUN_7100005130(*(undefined8 *)(lVar9 + 0x18));
                    lVar8 = *(long *)(lVar9 + 0x10);
                    if (*(long *)(lVar9 + 0x20) != lVar9 + 0x30) {
                      thunk_FUN_710081c200(*(long *)(lVar9 + 0x20),*(long *)(lVar9 + 0x30) + 1);
                    }
                    thunk_FUN_710081c200(lVar9,0x48);
                    lVar9 = lVar8;
                  }
                  lVar9 = *(long *)(lVar7 + 0x10);
                  if (*(long *)(lVar7 + 0x20) != lVar7 + 0x30) {
                    thunk_FUN_710081c200(*(long *)(lVar7 + 0x20),*(long *)(lVar7 + 0x30) + 1);
                  }
                  thunk_FUN_710081c200(lVar7,0x48);
                  lVar7 = lVar9;
                }
                lVar7 = *(long *)(lVar6 + 0x10);
                if (*(long *)(lVar6 + 0x20) != lVar6 + 0x30) {
                  thunk_FUN_710081c200(*(long *)(lVar6 + 0x20),*(long *)(lVar6 + 0x30) + 1);
                }
                thunk_FUN_710081c200(lVar6,0x48);
                lVar6 = lVar7;
              }
              lVar6 = *(long *)(lVar5 + 0x10);
              if (*(long *)(lVar5 + 0x20) != lVar5 + 0x30) {
                thunk_FUN_710081c200(*(long *)(lVar5 + 0x20),*(long *)(lVar5 + 0x30) + 1);
              }
              thunk_FUN_710081c200(lVar5,0x48);
              lVar5 = lVar6;
            }
            lVar5 = *(long *)(lVar1 + 0x10);
            if (*(long *)(lVar1 + 0x20) != lVar1 + 0x30) {
              thunk_FUN_710081c200(*(long *)(lVar1 + 0x20),*(long *)(lVar1 + 0x30) + 1);
            }
            thunk_FUN_710081c200(lVar1,0x48);
            lVar1 = lVar5;
          }
          lVar1 = *(long *)(lVar2 + 0x10);
          if (*(long *)(lVar2 + 0x20) != lVar2 + 0x30) {
            thunk_FUN_710081c200(*(long *)(lVar2 + 0x20),*(long *)(lVar2 + 0x30) + 1);
          }
          thunk_FUN_710081c200(lVar2,0x48);
          lVar2 = lVar1;
        }
        lVar2 = *(long *)(lVar3 + 0x10);
        if (*(long *)(lVar3 + 0x20) != lVar3 + 0x30) {
          thunk_FUN_710081c200(*(long *)(lVar3 + 0x20),*(long *)(lVar3 + 0x30) + 1);
        }
        thunk_FUN_710081c200(lVar3,0x48);
        lVar3 = lVar2;
      }
      lVar3 = *(long *)(lVar4 + 0x10);
      if (*(long *)(lVar4 + 0x20) != lVar4 + 0x30) {
        thunk_FUN_710081c200(*(long *)(lVar4 + 0x20),*(long *)(lVar4 + 0x30) + 1);
      }
      thunk_FUN_710081c200(lVar4,0x48);
      lVar4 = lVar3;
    }
    lVar4 = *(long *)(param_1 + 0x10);
    if (*(long *)(param_1 + 0x20) != param_1 + 0x30) {
      thunk_FUN_710081c200(*(long *)(param_1 + 0x20),*(long *)(param_1 + 0x30) + 1);
    }
    thunk_FUN_710081c200(param_1,0x48);
    param_1 = lVar4;
  } while (lVar4 != 0);
  return;
}



// ===== FUN_71000053b0 @ 71000053b0 (size=60) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000053b0(void)

{
  FUN_7100005040(_DAT_7100af9cf0);
  FUN_7100005130(_DAT_7100af9cc0);
  FUN_710014bf30(_DAT_7100af9c90);
  FUN_710014d3b0(&DAT_7100af9c60);
  return;
}



// ===== FUN_71000053f0 @ 71000053f0 (size=64) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000053f0(void)

{
  if (_DAT_7100af9f48 != 0) {
    thunk_FUN_710081c200();
  }
  if (_DAT_7100af9f40 != 0) {
    thunk_FUN_710081c200();
  }
  FUN_71001708c0(&DAT_7100af9d60);
  return;
}



// ===== FUN_7100005430 @ 7100005430 (size=256) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100005430(void)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar5;
  undefined8 *puVar4;
  
  plVar2 = _DAT_7100cfa418;
  if (_DAT_7100cfa460 != 0) {
    puVar1 = (undefined8 *)(_DAT_7100cfa4a8 + 8);
    puVar3 = _DAT_7100cfa488;
    if (_DAT_7100cfa488 < puVar1) {
      do {
        puVar4 = puVar3 + 1;
        thunk_FUN_710081c200(*puVar3,0x1f8);
        puVar3 = puVar4;
      } while (puVar4 < puVar1);
    }
    thunk_FUN_710081c200(_DAT_7100cfa460,_DAT_7100cfa468 << 3);
    plVar2 = _DAT_7100cfa418;
  }
  while (plVar2 != (long *)0x0) {
    lVar5 = *plVar2;
    thunk_FUN_710081c200(plVar2,0x10);
    plVar2 = (long *)lVar5;
  }
  if (_DAT_7100cfa408 != &DAT_7100cfa438) {
    thunk_FUN_710081c200(_DAT_7100cfa408,_DAT_7100cfa410 << 3);
  }
  FUN_71007b1900(0x7100cfa3f8);
  plVar2 = (long *)_DAT_7100cfa3a8;
  while (plVar2 != (long *)0x0) {
    lVar5 = *plVar2;
    thunk_FUN_710081c200(plVar2,0x10);
    plVar2 = (long *)lVar5;
  }
  if (_DAT_7100cfa398 != &DAT_7100cfa3c8) {
    thunk_FUN_710081c200(_DAT_7100cfa398,_DAT_7100cfa3a0 << 3);
  }
  FUN_71007b1900(0x7100cfa388);
  return;
}



// ===== FUN_7100005530 @ 7100005530 (size=132) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100005530(void)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = _DAT_7100cfa5a8;
  plVar2 = _DAT_7100cfa5a0;
  if (_DAT_7100cfa5a0 != _DAT_7100cfa5a8) {
    do {
      if ((long *)*plVar2 != plVar2 + 2) {
        thunk_FUN_710081c200((long *)*plVar2,plVar2[2] + 1);
      }
      plVar2 = plVar2 + 4;
    } while (plVar1 != plVar2);
  }
  if (_DAT_7100cfa5a0 != (long *)0x0) {
    thunk_FUN_710081c200(_DAT_7100cfa5a0,_DAT_7100cfa5b0 - (long)_DAT_7100cfa5a0);
    return;
  }
  return;
}



// ===== FUN_71000055c0 @ 71000055c0 (size=168) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000055c0(void)

{
  long lVar1;
  long lVar2;
  
  _DAT_7100cfb380 = &PTR_FUN_7100adc408;
  _DAT_7100cfb3e8 = &PTR_FUN_7100adb838;
  FUN_7100199ce0();
  _DAT_7100cfb3f0 = &PTR_LAB_7100adb6a8;
  FUN_710019a1c0();
  _DAT_7100cfb3c8 = &PTR_LAB_7100adb6a8;
  FUN_710019a1c0();
  _DAT_7100cfb3a8 = &PTR_LAB_7100adb6a8;
  FUN_710019a1c0();
  _DAT_7100cfb388 = &PTR_LAB_7100adb6a8;
  FUN_710019a1c0();
  lVar1 = _DAT_7100cfb338;
  while (lVar1 != 0) {
    FUN_7100189180(*(undefined8 *)(lVar1 + 0x18));
    lVar2 = *(long *)(lVar1 + 0x10);
    FUN_710019c190(lVar1 + 0x24);
    thunk_FUN_710081c200(lVar1,0x48);
    lVar1 = lVar2;
  }
  return;
}



// ===== FUN_71000056b0 @ 71000056b0 (size=668) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000056b0(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  plVar8 = _DAT_7100d002c8;
  if (_DAT_7100d002c8 != (long *)0x0) {
    plVar4 = _DAT_7100d002c8 + 1;
    if (*plVar4 == 0x100000001) {
      pcVar7 = *(code **)(*_DAT_7100d002c8 + 0x10);
      _DAT_7100d002c8[1] = 0;
      (*pcVar7)(plVar8);
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    else {
      do {
        iVar3 = (int)*plVar4 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *(int *)plVar4 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 == 0) {
        FUN_71000a22d0(plVar8);
      }
    }
  }
  lVar11 = 3;
  FUN_71007b0080(0x7100d002b8);
  FUN_71007e21a0(0x7100d00290);
  FUN_71007e21a0(0x7100d00270);
  plVar8 = (long *)0x7100d00270;
  do {
    plVar4 = (long *)plVar8[-4];
    if (plVar4 != plVar8 + -2) {
      thunk_FUN_710081c200(plVar4,plVar8[-2] + 1);
    }
    lVar11 = lVar11 + -1;
    plVar8 = plVar8 + -4;
  } while (lVar11 != 0);
  lVar11 = 2;
  puVar9 = (undefined8 *)&DAT_7100d001f0;
  puVar5 = _DAT_7100d001f0;
  puVar10 = puVar9;
  if (_DAT_7100d001f0 == (undefined8 *)&DAT_7100d00200) goto LAB_7100005770;
  do {
    thunk_FUN_710081c200(puVar5,puVar9[2] + 1);
    puVar10 = puVar9;
LAB_7100005770:
    do {
      if (lVar11 == 1) {
        lVar11 = 2;
        puVar9 = (undefined8 *)&DAT_7100d001b0;
        puVar5 = _DAT_7100d001b0;
        puVar10 = puVar9;
        if (_DAT_7100d001b0 == (undefined8 *)&DAT_7100d001c0) goto LAB_71000057c0;
        do {
          thunk_FUN_710081c200(puVar5,puVar9[2] + 1);
          puVar10 = puVar9;
LAB_71000057c0:
          do {
            if (lVar11 == 1) {
              lVar11 = 2;
              puVar9 = (undefined8 *)&DAT_7100d00170;
              puVar5 = _DAT_7100d00170;
              puVar10 = puVar9;
              if (_DAT_7100d00170 == (undefined8 *)&DAT_7100d00180) goto LAB_7100005810;
              do {
                thunk_FUN_710081c200(puVar5,puVar9[2] + 1);
                puVar10 = puVar9;
LAB_7100005810:
                do {
                  if (lVar11 == 1) {
                    puVar5 = (undefined8 *)&DAT_7100d00150;
                    do {
                      puVar10 = puVar5 + -4;
                      if ((undefined8 *)*puVar10 != puVar5 + -2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar10,puVar5[-2] + 1);
                      }
                      puVar5 = puVar10;
                    } while (puVar10 != (undefined8 *)&DAT_7100d00070);
                    FUN_71007e21a0(0x7100d00050);
                    puVar5 = (undefined8 *)&DAT_7100d00030;
                    while( true ) {
                      if ((undefined8 *)*puVar5 != puVar5 + 2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar5,puVar5[2] + 1);
                      }
                      if (puVar5 == (undefined8 *)&DAT_7100cffdf0) break;
                      puVar5 = puVar5 + -4;
                    }
                    puVar5 = (undefined8 *)&DAT_7100cffdf0;
                    do {
                      puVar10 = puVar5 + -4;
                      if ((undefined8 *)*puVar10 != puVar5 + -2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar10,puVar5[-2] + 1);
                      }
                      puVar5 = puVar10;
                    } while (puVar10 != (undefined8 *)&DAT_7100cffd70);
                    puVar5 = (undefined8 *)&DAT_7100cffd50;
                    while( true ) {
                      if ((undefined8 *)*puVar5 != puVar5 + 2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar5,puVar5[2] + 1);
                      }
                      if (puVar5 == (undefined8 *)&DAT_7100cffcb0) break;
                      puVar5 = puVar5 + -4;
                    }
                    return;
                  }
                  puVar9 = puVar10 + -4;
                  lVar11 = 1;
                  puVar6 = puVar10 + -2;
                  puVar5 = (undefined8 *)*puVar9;
                  puVar10 = puVar9;
                } while (puVar5 == puVar6);
              } while( true );
            }
            puVar9 = puVar10 + -4;
            lVar11 = 1;
            puVar6 = puVar10 + -2;
            puVar5 = (undefined8 *)*puVar9;
            puVar10 = puVar9;
          } while (puVar5 == puVar6);
        } while( true );
      }
      puVar9 = puVar10 + -4;
      lVar11 = 1;
      puVar6 = puVar10 + -2;
      puVar5 = (undefined8 *)*puVar9;
      puVar10 = puVar9;
    } while (puVar5 == puVar6);
  } while( true );
}



// ===== FUN_7100005950 @ 7100005950 (size=668) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100005950(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  plVar8 = _DAT_7100d008e8;
  if (_DAT_7100d008e8 != (long *)0x0) {
    plVar4 = _DAT_7100d008e8 + 1;
    if (*plVar4 == 0x100000001) {
      pcVar7 = *(code **)(*_DAT_7100d008e8 + 0x10);
      _DAT_7100d008e8[1] = 0;
      (*pcVar7)(plVar8);
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    else {
      do {
        iVar3 = (int)*plVar4 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *(int *)plVar4 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 == 0) {
        FUN_71000a22d0(plVar8);
      }
    }
  }
  lVar11 = 3;
  FUN_71007b0080(0x7100d008d8);
  FUN_71007e21a0(0x7100d008b0);
  FUN_71007e21a0(0x7100d00890);
  plVar8 = (long *)0x7100d00890;
  do {
    plVar4 = (long *)plVar8[-4];
    if (plVar4 != plVar8 + -2) {
      thunk_FUN_710081c200(plVar4,plVar8[-2] + 1);
    }
    lVar11 = lVar11 + -1;
    plVar8 = plVar8 + -4;
  } while (lVar11 != 0);
  lVar11 = 2;
  puVar9 = (undefined8 *)&DAT_7100d00810;
  puVar5 = _DAT_7100d00810;
  puVar10 = puVar9;
  if (_DAT_7100d00810 == (undefined8 *)&DAT_7100d00820) goto LAB_7100005a10;
  do {
    thunk_FUN_710081c200(puVar5,puVar9[2] + 1);
    puVar10 = puVar9;
LAB_7100005a10:
    do {
      if (lVar11 == 1) {
        lVar11 = 2;
        puVar9 = (undefined8 *)&DAT_7100d007d0;
        puVar5 = _DAT_7100d007d0;
        puVar10 = puVar9;
        if (_DAT_7100d007d0 == (undefined8 *)&DAT_7100d007e0) goto LAB_7100005a60;
        do {
          thunk_FUN_710081c200(puVar5,puVar9[2] + 1);
          puVar10 = puVar9;
LAB_7100005a60:
          do {
            if (lVar11 == 1) {
              lVar11 = 2;
              puVar9 = (undefined8 *)&DAT_7100d00790;
              puVar5 = _DAT_7100d00790;
              puVar10 = puVar9;
              if (_DAT_7100d00790 == (undefined8 *)&DAT_7100d007a0) goto LAB_7100005ab0;
              do {
                thunk_FUN_710081c200(puVar5,puVar9[2] + 1);
                puVar10 = puVar9;
LAB_7100005ab0:
                do {
                  if (lVar11 == 1) {
                    puVar5 = (undefined8 *)&DAT_7100d00770;
                    do {
                      puVar10 = puVar5 + -4;
                      if ((undefined8 *)*puVar10 != puVar5 + -2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar10,puVar5[-2] + 1);
                      }
                      puVar5 = puVar10;
                    } while (puVar10 != (undefined8 *)&DAT_7100d00690);
                    FUN_71007e21a0(0x7100d00670);
                    puVar5 = (undefined8 *)&DAT_7100d00650;
                    while( true ) {
                      if ((undefined8 *)*puVar5 != puVar5 + 2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar5,puVar5[2] + 1);
                      }
                      if (puVar5 == (undefined8 *)&DAT_7100d00410) break;
                      puVar5 = puVar5 + -4;
                    }
                    puVar5 = (undefined8 *)&DAT_7100d00410;
                    do {
                      puVar10 = puVar5 + -4;
                      if ((undefined8 *)*puVar10 != puVar5 + -2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar10,puVar5[-2] + 1);
                      }
                      puVar5 = puVar10;
                    } while (puVar10 != (undefined8 *)&DAT_7100d00390);
                    puVar5 = (undefined8 *)&DAT_7100d00370;
                    while( true ) {
                      if ((undefined8 *)*puVar5 != puVar5 + 2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar5,puVar5[2] + 1);
                      }
                      if (puVar5 == (undefined8 *)&DAT_7100d002d0) break;
                      puVar5 = puVar5 + -4;
                    }
                    return;
                  }
                  puVar9 = puVar10 + -4;
                  lVar11 = 1;
                  puVar6 = puVar10 + -2;
                  puVar5 = (undefined8 *)*puVar9;
                  puVar10 = puVar9;
                } while (puVar5 == puVar6);
              } while( true );
            }
            puVar9 = puVar10 + -4;
            lVar11 = 1;
            puVar6 = puVar10 + -2;
            puVar5 = (undefined8 *)*puVar9;
            puVar10 = puVar9;
          } while (puVar5 == puVar6);
        } while( true );
      }
      puVar9 = puVar10 + -4;
      lVar11 = 1;
      puVar6 = puVar10 + -2;
      puVar5 = (undefined8 *)*puVar9;
      puVar10 = puVar9;
    } while (puVar5 == puVar6);
  } while( true );
}



// ===== FUN_7100005bf0 @ 7100005bf0 (size=568) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100005bf0(void)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  lVar7 = 3;
  FUN_71000e1a40(0x7100d00ef0);
  FUN_71007e21a0(&DAT_7100d00ed0);
  FUN_71007e21a0(0x7100d00eb0);
  plVar4 = (long *)0x7100d00eb0;
  do {
    plVar1 = (long *)plVar4[-4];
    if (plVar1 != plVar4 + -2) {
      thunk_FUN_710081c200(plVar1,plVar4[-2] + 1);
    }
    lVar7 = lVar7 + -1;
    plVar4 = plVar4 + -4;
  } while (lVar7 != 0);
  lVar7 = 2;
  puVar5 = (undefined8 *)&DAT_7100d00e30;
  puVar2 = _DAT_7100d00e30;
  puVar6 = puVar5;
  if (_DAT_7100d00e30 == (undefined8 *)&DAT_7100d00e40) goto LAB_7100005c7c;
  do {
    thunk_FUN_710081c200(puVar2,puVar5[2] + 1);
    puVar6 = puVar5;
LAB_7100005c7c:
    do {
      if (lVar7 == 1) {
        lVar7 = 2;
        puVar5 = (undefined8 *)&DAT_7100d00df0;
        puVar2 = _DAT_7100d00df0;
        puVar6 = puVar5;
        if (_DAT_7100d00df0 == (undefined8 *)&DAT_7100d00e00) goto LAB_7100005ccc;
        do {
          thunk_FUN_710081c200(puVar2,puVar5[2] + 1);
          puVar6 = puVar5;
LAB_7100005ccc:
          do {
            if (lVar7 == 1) {
              lVar7 = 2;
              puVar5 = (undefined8 *)&DAT_7100d00db0;
              puVar2 = _DAT_7100d00db0;
              puVar6 = puVar5;
              if (_DAT_7100d00db0 == (undefined8 *)&DAT_7100d00dc0) goto LAB_7100005d1c;
              do {
                thunk_FUN_710081c200(puVar2,puVar5[2] + 1);
                puVar6 = puVar5;
LAB_7100005d1c:
                do {
                  if (lVar7 == 1) {
                    puVar2 = (undefined8 *)&DAT_7100d00d90;
                    do {
                      puVar6 = puVar2 + -4;
                      if ((undefined8 *)*puVar6 != puVar2 + -2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar6,puVar2[-2] + 1);
                      }
                      puVar2 = puVar6;
                    } while (puVar6 != (undefined8 *)&DAT_7100d00cb0);
                    FUN_71007e21a0(0x7100d00c90);
                    puVar2 = (undefined8 *)&DAT_7100d00c70;
                    while( true ) {
                      if ((undefined8 *)*puVar2 != puVar2 + 2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar2,puVar2[2] + 1);
                      }
                      if (puVar2 == (undefined8 *)&DAT_7100d00a30) break;
                      puVar2 = puVar2 + -4;
                    }
                    puVar2 = (undefined8 *)&DAT_7100d00a30;
                    do {
                      puVar6 = puVar2 + -4;
                      if ((undefined8 *)*puVar6 != puVar2 + -2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar6,puVar2[-2] + 1);
                      }
                      puVar2 = puVar6;
                    } while (puVar6 != (undefined8 *)&DAT_7100d009b0);
                    puVar2 = (undefined8 *)&DAT_7100d00990;
                    while( true ) {
                      if ((undefined8 *)*puVar2 != puVar2 + 2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar2,puVar2[2] + 1);
                      }
                      if (puVar2 == (undefined8 *)&DAT_7100d008f0) break;
                      puVar2 = puVar2 + -4;
                    }
                    return;
                  }
                  puVar5 = puVar6 + -4;
                  lVar7 = 1;
                  puVar3 = puVar6 + -2;
                  puVar2 = (undefined8 *)*puVar5;
                  puVar6 = puVar5;
                } while (puVar2 == puVar3);
              } while( true );
            }
            puVar5 = puVar6 + -4;
            lVar7 = 1;
            puVar3 = puVar6 + -2;
            puVar2 = (undefined8 *)*puVar5;
            puVar6 = puVar5;
          } while (puVar2 == puVar3);
        } while( true );
      }
      puVar5 = puVar6 + -4;
      lVar7 = 1;
      puVar3 = puVar6 + -2;
      puVar2 = (undefined8 *)*puVar5;
      puVar6 = puVar5;
    } while (puVar2 == puVar3);
  } while( true );
}



// ===== FUN_7100005e30 @ 7100005e30 (size=84) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100005e30(void)

{
  FUN_71001f7700(_DAT_7100d01060);
  FUN_71001f7700(_DAT_7100d01030);
  FUN_71001f7700(_DAT_7100d01000);
  FUN_71001f7700(_DAT_7100d00fd0);
  FUN_71001f7700(_DAT_7100d00fa0);
  FUN_71001f7700(_DAT_7100d00f70);
  FUN_71001f7700(_DAT_7100d00f40);
  return;
}



// ===== FUN_7100005ea0 @ 7100005ea0 (size=92) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100005ea0(void)

{
  FUN_7100202b80(&DAT_7100d06b70);
  FUN_7100203430(&DAT_7100d06b40);
  _DAT_7100d06b08 = &PTR_LAB_7100ae89d0;
  FUN_71002004e0(&DAT_7100d06b08);
  _DAT_7100d06ad0 = &PTR_LAB_7100ae89a0;
  FUN_71002004e0(&DAT_7100d06ad0);
  FUN_7100202e50(&DAT_7100d06aa0);
  return;
}



// ===== FUN_7100005f00 @ 7100005f00 (size=572) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100005f00(void)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  lVar7 = 3;
  FUN_71000e1a40(0x7100d071b0);
  FUN_71007e21a0(&DAT_7100d06bb0);
  FUN_71007e21a0(0x7100d07190);
  plVar4 = (long *)0x7100d07190;
  do {
    plVar1 = (long *)plVar4[-4];
    if (plVar1 != plVar4 + -2) {
      thunk_FUN_710081c200(plVar1,plVar4[-2] + 1);
    }
    lVar7 = lVar7 + -1;
    plVar4 = plVar4 + -4;
  } while (lVar7 != 0);
  lVar7 = 2;
  puVar5 = (undefined8 *)&DAT_7100d07110;
  puVar2 = _DAT_7100d07110;
  puVar6 = puVar5;
  if (_DAT_7100d07110 == (undefined8 *)&DAT_7100d07120) goto LAB_7100005f8c;
  do {
    thunk_FUN_710081c200(puVar2,puVar5[2] + 1);
    puVar6 = puVar5;
LAB_7100005f8c:
    do {
      if (lVar7 == 1) {
        lVar7 = 2;
        puVar5 = (undefined8 *)&DAT_7100d070d0;
        puVar2 = _DAT_7100d070d0;
        puVar6 = puVar5;
        if (_DAT_7100d070d0 == (undefined8 *)&DAT_7100d070e0) goto LAB_7100005fdc;
        do {
          thunk_FUN_710081c200(puVar2,puVar5[2] + 1);
          puVar6 = puVar5;
LAB_7100005fdc:
          do {
            if (lVar7 == 1) {
              lVar7 = 2;
              puVar5 = (undefined8 *)&DAT_7100d07090;
              puVar2 = _DAT_7100d07090;
              puVar6 = puVar5;
              if (_DAT_7100d07090 == (undefined8 *)&DAT_7100d070a0) goto LAB_710000602c;
              do {
                thunk_FUN_710081c200(puVar2,puVar5[2] + 1);
                puVar6 = puVar5;
LAB_710000602c:
                do {
                  if (lVar7 == 1) {
                    puVar2 = (undefined8 *)&DAT_7100d07070;
                    do {
                      puVar6 = puVar2 + -4;
                      if ((undefined8 *)*puVar6 != puVar2 + -2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar6,puVar2[-2] + 1);
                      }
                      puVar2 = puVar6;
                    } while (puVar6 != (undefined8 *)&DAT_7100d06f90);
                    FUN_71007e21a0(0x7100d06f70);
                    puVar2 = (undefined8 *)&DAT_7100d06f50;
                    while( true ) {
                      if ((undefined8 *)*puVar2 != puVar2 + 2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar2,puVar2[2] + 1);
                      }
                      if (puVar2 == (undefined8 *)&DAT_7100d06d10) break;
                      puVar2 = puVar2 + -4;
                    }
                    puVar2 = (undefined8 *)&DAT_7100d06d10;
                    do {
                      puVar6 = puVar2 + -4;
                      if ((undefined8 *)*puVar6 != puVar2 + -2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar6,puVar2[-2] + 1);
                      }
                      puVar2 = puVar6;
                    } while (puVar6 != (undefined8 *)&DAT_7100d06c90);
                    puVar2 = (undefined8 *)&DAT_7100d06c70;
                    while( true ) {
                      if ((undefined8 *)*puVar2 != puVar2 + 2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar2,puVar2[2] + 1);
                      }
                      if (puVar2 == (undefined8 *)&DAT_7100d06bd0) break;
                      puVar2 = puVar2 + -4;
                    }
                    return;
                  }
                  puVar5 = puVar6 + -4;
                  lVar7 = 1;
                  puVar3 = puVar6 + -2;
                  puVar2 = (undefined8 *)*puVar5;
                  puVar6 = puVar5;
                } while (puVar2 == puVar3);
              } while( true );
            }
            puVar5 = puVar6 + -4;
            lVar7 = 1;
            puVar3 = puVar6 + -2;
            puVar2 = (undefined8 *)*puVar5;
            puVar6 = puVar5;
          } while (puVar2 == puVar3);
        } while( true );
      }
      puVar5 = puVar6 + -4;
      lVar7 = 1;
      puVar3 = puVar6 + -2;
      puVar2 = (undefined8 *)*puVar5;
      puVar6 = puVar5;
    } while (puVar2 == puVar3);
  } while( true );
}



// ===== FUN_7100006140 @ 7100006140 (size=60) =====

void FUN_7100006140(void)

{
  FUN_71001f4710(0x7100d07218);
  FUN_71001f4710(0x7100d07200);
  FUN_71001f4710(0x7100d071e8);
  FUN_71001f4710(0x7100d071d0);
  return;
}



// ===== FUN_7100006180 @ 7100006180 (size=668) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100006180(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  plVar8 = _DAT_7100d07858;
  if (_DAT_7100d07858 != (long *)0x0) {
    plVar4 = _DAT_7100d07858 + 1;
    if (*plVar4 == 0x100000001) {
      pcVar7 = *(code **)(*_DAT_7100d07858 + 0x10);
      _DAT_7100d07858[1] = 0;
      (*pcVar7)(plVar8);
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    else {
      do {
        iVar3 = (int)*plVar4 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *(int *)plVar4 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 == 0) {
        FUN_71000a22d0(plVar8);
      }
    }
  }
  lVar11 = 3;
  FUN_71007b0080(0x7100d07848);
  FUN_71007e21a0(0x7100d07820);
  FUN_71007e21a0(0x7100d07800);
  plVar8 = (long *)0x7100d07800;
  do {
    plVar4 = (long *)plVar8[-4];
    if (plVar4 != plVar8 + -2) {
      thunk_FUN_710081c200(plVar4,plVar8[-2] + 1);
    }
    lVar11 = lVar11 + -1;
    plVar8 = plVar8 + -4;
  } while (lVar11 != 0);
  lVar11 = 2;
  puVar9 = (undefined8 *)&DAT_7100d07780;
  puVar5 = _DAT_7100d07780;
  puVar10 = puVar9;
  if (_DAT_7100d07780 == (undefined8 *)&DAT_7100d07790) goto LAB_7100006240;
  do {
    thunk_FUN_710081c200(puVar5,puVar9[2] + 1);
    puVar10 = puVar9;
LAB_7100006240:
    do {
      if (lVar11 == 1) {
        lVar11 = 2;
        puVar9 = (undefined8 *)&DAT_7100d07740;
        puVar5 = _DAT_7100d07740;
        puVar10 = puVar9;
        if (_DAT_7100d07740 == (undefined8 *)&DAT_7100d07750) goto LAB_7100006290;
        do {
          thunk_FUN_710081c200(puVar5,puVar9[2] + 1);
          puVar10 = puVar9;
LAB_7100006290:
          do {
            if (lVar11 == 1) {
              lVar11 = 2;
              puVar9 = (undefined8 *)&DAT_7100d07700;
              puVar5 = _DAT_7100d07700;
              puVar10 = puVar9;
              if (_DAT_7100d07700 == (undefined8 *)&DAT_7100d07710) goto LAB_71000062e0;
              do {
                thunk_FUN_710081c200(puVar5,puVar9[2] + 1);
                puVar10 = puVar9;
LAB_71000062e0:
                do {
                  if (lVar11 == 1) {
                    puVar5 = (undefined8 *)&DAT_7100d076e0;
                    do {
                      puVar10 = puVar5 + -4;
                      if ((undefined8 *)*puVar10 != puVar5 + -2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar10,puVar5[-2] + 1);
                      }
                      puVar5 = puVar10;
                    } while (puVar10 != (undefined8 *)&DAT_7100d07600);
                    FUN_71007e21a0(0x7100d075e0);
                    puVar5 = (undefined8 *)&DAT_7100d075c0;
                    while( true ) {
                      if ((undefined8 *)*puVar5 != puVar5 + 2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar5,puVar5[2] + 1);
                      }
                      if (puVar5 == (undefined8 *)&DAT_7100d07380) break;
                      puVar5 = puVar5 + -4;
                    }
                    puVar5 = (undefined8 *)&DAT_7100d07380;
                    do {
                      puVar10 = puVar5 + -4;
                      if ((undefined8 *)*puVar10 != puVar5 + -2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar10,puVar5[-2] + 1);
                      }
                      puVar5 = puVar10;
                    } while (puVar10 != (undefined8 *)&DAT_7100d07300);
                    puVar5 = (undefined8 *)&DAT_7100d072e0;
                    while( true ) {
                      if ((undefined8 *)*puVar5 != puVar5 + 2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar5,puVar5[2] + 1);
                      }
                      if (puVar5 == (undefined8 *)&DAT_7100d07240) break;
                      puVar5 = puVar5 + -4;
                    }
                    return;
                  }
                  puVar9 = puVar10 + -4;
                  lVar11 = 1;
                  puVar6 = puVar10 + -2;
                  puVar5 = (undefined8 *)*puVar9;
                  puVar10 = puVar9;
                } while (puVar5 == puVar6);
              } while( true );
            }
            puVar9 = puVar10 + -4;
            lVar11 = 1;
            puVar6 = puVar10 + -2;
            puVar5 = (undefined8 *)*puVar9;
            puVar10 = puVar9;
          } while (puVar5 == puVar6);
        } while( true );
      }
      puVar9 = puVar10 + -4;
      lVar11 = 1;
      puVar6 = puVar10 + -2;
      puVar5 = (undefined8 *)*puVar9;
      puVar10 = puVar9;
    } while (puVar5 == puVar6);
  } while( true );
}



// ===== FUN_7100006420 @ 7100006420 (size=640) =====

void FUN_7100006420(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 == 0) {
    return;
  }
  do {
    lVar4 = *(long *)(param_1 + 0x18);
    while (lVar4 != 0) {
      lVar3 = *(long *)(lVar4 + 0x18);
      while (lVar3 != 0) {
        lVar2 = *(long *)(lVar3 + 0x18);
        while (lVar2 != 0) {
          lVar1 = *(long *)(lVar2 + 0x18);
          while (lVar1 != 0) {
            lVar5 = *(long *)(lVar1 + 0x18);
            while (lVar5 != 0) {
              lVar6 = *(long *)(lVar5 + 0x18);
              while (lVar6 != 0) {
                lVar7 = *(long *)(lVar6 + 0x18);
                while (lVar7 != 0) {
                  lVar9 = *(long *)(lVar7 + 0x18);
                  while (lVar9 != 0) {
                    FUN_7100006420(*(undefined8 *)(lVar9 + 0x18));
                    lVar8 = *(long *)(lVar9 + 0x10);
                    if (*(long *)(lVar9 + 0x20) != lVar9 + 0x30) {
                      thunk_FUN_710081c200(*(long *)(lVar9 + 0x20),*(long *)(lVar9 + 0x30) + 1);
                    }
                    thunk_FUN_710081c200(lVar9,0x48);
                    lVar9 = lVar8;
                  }
                  lVar9 = *(long *)(lVar7 + 0x10);
                  if (*(long *)(lVar7 + 0x20) != lVar7 + 0x30) {
                    thunk_FUN_710081c200(*(long *)(lVar7 + 0x20),*(long *)(lVar7 + 0x30) + 1);
                  }
                  thunk_FUN_710081c200(lVar7,0x48);
                  lVar7 = lVar9;
                }
                lVar7 = *(long *)(lVar6 + 0x10);
                if (*(long *)(lVar6 + 0x20) != lVar6 + 0x30) {
                  thunk_FUN_710081c200(*(long *)(lVar6 + 0x20),*(long *)(lVar6 + 0x30) + 1);
                }
                thunk_FUN_710081c200(lVar6,0x48);
                lVar6 = lVar7;
              }
              lVar6 = *(long *)(lVar5 + 0x10);
              if (*(long *)(lVar5 + 0x20) != lVar5 + 0x30) {
                thunk_FUN_710081c200(*(long *)(lVar5 + 0x20),*(long *)(lVar5 + 0x30) + 1);
              }
              thunk_FUN_710081c200(lVar5,0x48);
              lVar5 = lVar6;
            }
            lVar5 = *(long *)(lVar1 + 0x10);
            if (*(long *)(lVar1 + 0x20) != lVar1 + 0x30) {
              thunk_FUN_710081c200(*(long *)(lVar1 + 0x20),*(long *)(lVar1 + 0x30) + 1);
            }
            thunk_FUN_710081c200(lVar1,0x48);
            lVar1 = lVar5;
          }
          lVar1 = *(long *)(lVar2 + 0x10);
          if (*(long *)(lVar2 + 0x20) != lVar2 + 0x30) {
            thunk_FUN_710081c200(*(long *)(lVar2 + 0x20),*(long *)(lVar2 + 0x30) + 1);
          }
          thunk_FUN_710081c200(lVar2,0x48);
          lVar2 = lVar1;
        }
        lVar2 = *(long *)(lVar3 + 0x10);
        if (*(long *)(lVar3 + 0x20) != lVar3 + 0x30) {
          thunk_FUN_710081c200(*(long *)(lVar3 + 0x20),*(long *)(lVar3 + 0x30) + 1);
        }
        thunk_FUN_710081c200(lVar3,0x48);
        lVar3 = lVar2;
      }
      lVar3 = *(long *)(lVar4 + 0x10);
      if (*(long *)(lVar4 + 0x20) != lVar4 + 0x30) {
        thunk_FUN_710081c200(*(long *)(lVar4 + 0x20),*(long *)(lVar4 + 0x30) + 1);
      }
      thunk_FUN_710081c200(lVar4,0x48);
      lVar4 = lVar3;
    }
    lVar4 = *(long *)(param_1 + 0x10);
    if (*(long *)(param_1 + 0x20) != param_1 + 0x30) {
      thunk_FUN_710081c200(*(long *)(param_1 + 0x20),*(long *)(param_1 + 0x30) + 1);
    }
    thunk_FUN_710081c200(param_1,0x48);
    param_1 = lVar4;
  } while (lVar4 != 0);
  return;
}



// ===== FUN_71000066a0 @ 71000066a0 (size=640) =====

void FUN_71000066a0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 == 0) {
    return;
  }
  do {
    lVar4 = *(long *)(param_1 + 0x18);
    while (lVar4 != 0) {
      lVar3 = *(long *)(lVar4 + 0x18);
      while (lVar3 != 0) {
        lVar2 = *(long *)(lVar3 + 0x18);
        while (lVar2 != 0) {
          lVar1 = *(long *)(lVar2 + 0x18);
          while (lVar1 != 0) {
            lVar5 = *(long *)(lVar1 + 0x18);
            while (lVar5 != 0) {
              lVar6 = *(long *)(lVar5 + 0x18);
              while (lVar6 != 0) {
                lVar7 = *(long *)(lVar6 + 0x18);
                while (lVar7 != 0) {
                  lVar9 = *(long *)(lVar7 + 0x18);
                  while (lVar9 != 0) {
                    FUN_71000066a0(*(undefined8 *)(lVar9 + 0x18));
                    lVar8 = *(long *)(lVar9 + 0x10);
                    if (*(long *)(lVar9 + 0x30) != lVar9 + 0x40) {
                      thunk_FUN_710081c200(*(long *)(lVar9 + 0x30),*(long *)(lVar9 + 0x40) + 1);
                    }
                    thunk_FUN_710081c200(lVar9,0x50);
                    lVar9 = lVar8;
                  }
                  lVar9 = *(long *)(lVar7 + 0x10);
                  if (*(long *)(lVar7 + 0x30) != lVar7 + 0x40) {
                    thunk_FUN_710081c200(*(long *)(lVar7 + 0x30),*(long *)(lVar7 + 0x40) + 1);
                  }
                  thunk_FUN_710081c200(lVar7,0x50);
                  lVar7 = lVar9;
                }
                lVar7 = *(long *)(lVar6 + 0x10);
                if (*(long *)(lVar6 + 0x30) != lVar6 + 0x40) {
                  thunk_FUN_710081c200(*(long *)(lVar6 + 0x30),*(long *)(lVar6 + 0x40) + 1);
                }
                thunk_FUN_710081c200(lVar6,0x50);
                lVar6 = lVar7;
              }
              lVar6 = *(long *)(lVar5 + 0x10);
              if (*(long *)(lVar5 + 0x30) != lVar5 + 0x40) {
                thunk_FUN_710081c200(*(long *)(lVar5 + 0x30),*(long *)(lVar5 + 0x40) + 1);
              }
              thunk_FUN_710081c200(lVar5,0x50);
              lVar5 = lVar6;
            }
            lVar5 = *(long *)(lVar1 + 0x10);
            if (*(long *)(lVar1 + 0x30) != lVar1 + 0x40) {
              thunk_FUN_710081c200(*(long *)(lVar1 + 0x30),*(long *)(lVar1 + 0x40) + 1);
            }
            thunk_FUN_710081c200(lVar1,0x50);
            lVar1 = lVar5;
          }
          lVar1 = *(long *)(lVar2 + 0x10);
          if (*(long *)(lVar2 + 0x30) != lVar2 + 0x40) {
            thunk_FUN_710081c200(*(long *)(lVar2 + 0x30),*(long *)(lVar2 + 0x40) + 1);
          }
          thunk_FUN_710081c200(lVar2,0x50);
          lVar2 = lVar1;
        }
        lVar2 = *(long *)(lVar3 + 0x10);
        if (*(long *)(lVar3 + 0x30) != lVar3 + 0x40) {
          thunk_FUN_710081c200(*(long *)(lVar3 + 0x30),*(long *)(lVar3 + 0x40) + 1);
        }
        thunk_FUN_710081c200(lVar3,0x50);
        lVar3 = lVar2;
      }
      lVar3 = *(long *)(lVar4 + 0x10);
      if (*(long *)(lVar4 + 0x30) != lVar4 + 0x40) {
        thunk_FUN_710081c200(*(long *)(lVar4 + 0x30),*(long *)(lVar4 + 0x40) + 1);
      }
      thunk_FUN_710081c200(lVar4,0x50);
      lVar4 = lVar3;
    }
    lVar4 = *(long *)(param_1 + 0x10);
    if (*(long *)(param_1 + 0x30) != param_1 + 0x40) {
      thunk_FUN_710081c200(*(long *)(param_1 + 0x30),*(long *)(param_1 + 0x40) + 1);
    }
    thunk_FUN_710081c200(param_1,0x50);
    param_1 = lVar4;
  } while (lVar4 != 0);
  return;
}



// ===== FUN_7100006920 @ 7100006920 (size=68) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100006920(void)

{
  FUN_7100006420(_DAT_7100d078d0);
  FUN_7100274200(_DAT_7100d078a0);
  FUN_71000066a0(_DAT_7100d07870);
  FUN_71007e21a0(&DAT_7100d07910);
  FUN_71007e21a0(&DAT_7100d078f0);
  return;
}



// ===== FUN_7100006970 @ 7100006970 (size=132) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100006970(void)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = _DAT_7100d07958;
  plVar2 = _DAT_7100d07950;
  if (_DAT_7100d07950 != _DAT_7100d07958) {
    do {
      if ((long *)*plVar2 != plVar2 + 2) {
        thunk_FUN_710081c200((long *)*plVar2,plVar2[2] + 1);
      }
      plVar2 = plVar2 + 6;
    } while (plVar1 != plVar2);
  }
  if (_DAT_7100d07950 != (long *)0x0) {
    thunk_FUN_710081c200(_DAT_7100d07950,_DAT_7100d07960 - (long)_DAT_7100d07950);
    return;
  }
  return;
}



// ===== FUN_7100006a00 @ 7100006a00 (size=892) =====

void FUN_7100006a00(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 == 0) {
    return;
  }
  do {
    lVar4 = *(long *)(param_1 + 0x18);
    while (lVar4 != 0) {
      lVar3 = *(long *)(lVar4 + 0x18);
      while (lVar3 != 0) {
        lVar2 = *(long *)(lVar3 + 0x18);
        while (lVar2 != 0) {
          lVar1 = *(long *)(lVar2 + 0x18);
          while (lVar1 != 0) {
            lVar5 = *(long *)(lVar1 + 0x18);
            while (lVar5 != 0) {
              lVar6 = *(long *)(lVar5 + 0x18);
              while (lVar6 != 0) {
                lVar7 = *(long *)(lVar6 + 0x18);
                while (lVar7 != 0) {
                  lVar9 = *(long *)(lVar7 + 0x18);
                  while (lVar9 != 0) {
                    FUN_7100006a00(*(undefined8 *)(lVar9 + 0x18));
                    lVar8 = *(long *)(lVar9 + 0x10);
                    if (*(long *)(lVar9 + 0x40) != lVar9 + 0x50) {
                      thunk_FUN_710081c200(*(long *)(lVar9 + 0x40),*(long *)(lVar9 + 0x50) + 1);
                    }
                    if (*(long *)(lVar9 + 0x20) != lVar9 + 0x30) {
                      thunk_FUN_710081c200(*(long *)(lVar9 + 0x20),*(long *)(lVar9 + 0x30) + 1);
                    }
                    thunk_FUN_710081c200(lVar9,0x60);
                    lVar9 = lVar8;
                  }
                  lVar9 = *(long *)(lVar7 + 0x10);
                  if (*(long *)(lVar7 + 0x40) != lVar7 + 0x50) {
                    thunk_FUN_710081c200(*(long *)(lVar7 + 0x40),*(long *)(lVar7 + 0x50) + 1);
                  }
                  if (*(long *)(lVar7 + 0x20) != lVar7 + 0x30) {
                    thunk_FUN_710081c200(*(long *)(lVar7 + 0x20),*(long *)(lVar7 + 0x30) + 1);
                  }
                  thunk_FUN_710081c200(lVar7,0x60);
                  lVar7 = lVar9;
                }
                lVar7 = *(long *)(lVar6 + 0x10);
                if (*(long *)(lVar6 + 0x40) != lVar6 + 0x50) {
                  thunk_FUN_710081c200(*(long *)(lVar6 + 0x40),*(long *)(lVar6 + 0x50) + 1);
                }
                if (*(long *)(lVar6 + 0x20) != lVar6 + 0x30) {
                  thunk_FUN_710081c200(*(long *)(lVar6 + 0x20),*(long *)(lVar6 + 0x30) + 1);
                }
                thunk_FUN_710081c200(lVar6,0x60);
                lVar6 = lVar7;
              }
              lVar6 = *(long *)(lVar5 + 0x10);
              if (*(long *)(lVar5 + 0x40) != lVar5 + 0x50) {
                thunk_FUN_710081c200(*(long *)(lVar5 + 0x40),*(long *)(lVar5 + 0x50) + 1);
              }
              if (*(long *)(lVar5 + 0x20) != lVar5 + 0x30) {
                thunk_FUN_710081c200(*(long *)(lVar5 + 0x20),*(long *)(lVar5 + 0x30) + 1);
              }
              thunk_FUN_710081c200(lVar5,0x60);
              lVar5 = lVar6;
            }
            lVar5 = *(long *)(lVar1 + 0x10);
            if (*(long *)(lVar1 + 0x40) != lVar1 + 0x50) {
              thunk_FUN_710081c200(*(long *)(lVar1 + 0x40),*(long *)(lVar1 + 0x50) + 1);
            }
            if (*(long *)(lVar1 + 0x20) != lVar1 + 0x30) {
              thunk_FUN_710081c200(*(long *)(lVar1 + 0x20),*(long *)(lVar1 + 0x30) + 1);
            }
            thunk_FUN_710081c200(lVar1,0x60);
            lVar1 = lVar5;
          }
          lVar1 = *(long *)(lVar2 + 0x10);
          if (*(long *)(lVar2 + 0x40) != lVar2 + 0x50) {
            thunk_FUN_710081c200(*(long *)(lVar2 + 0x40),*(long *)(lVar2 + 0x50) + 1);
          }
          if (*(long *)(lVar2 + 0x20) != lVar2 + 0x30) {
            thunk_FUN_710081c200(*(long *)(lVar2 + 0x20),*(long *)(lVar2 + 0x30) + 1);
          }
          thunk_FUN_710081c200(lVar2,0x60);
          lVar2 = lVar1;
        }
        lVar2 = *(long *)(lVar3 + 0x10);
        if (*(long *)(lVar3 + 0x40) != lVar3 + 0x50) {
          thunk_FUN_710081c200(*(long *)(lVar3 + 0x40),*(long *)(lVar3 + 0x50) + 1);
        }
        if (*(long *)(lVar3 + 0x20) != lVar3 + 0x30) {
          thunk_FUN_710081c200(*(long *)(lVar3 + 0x20),*(long *)(lVar3 + 0x30) + 1);
        }
        thunk_FUN_710081c200(lVar3,0x60);
        lVar3 = lVar2;
      }
      lVar3 = *(long *)(lVar4 + 0x10);
      if (*(long *)(lVar4 + 0x40) != lVar4 + 0x50) {
        thunk_FUN_710081c200(*(long *)(lVar4 + 0x40),*(long *)(lVar4 + 0x50) + 1);
      }
      if (*(long *)(lVar4 + 0x20) != lVar4 + 0x30) {
        thunk_FUN_710081c200(*(long *)(lVar4 + 0x20),*(long *)(lVar4 + 0x30) + 1);
      }
      thunk_FUN_710081c200(lVar4,0x60);
      lVar4 = lVar3;
    }
    lVar4 = *(long *)(param_1 + 0x10);
    if (*(long *)(param_1 + 0x40) != param_1 + 0x50) {
      thunk_FUN_710081c200(*(long *)(param_1 + 0x40),*(long *)(param_1 + 0x50) + 1);
    }
    if (*(long *)(param_1 + 0x20) != param_1 + 0x30) {
      thunk_FUN_710081c200(*(long *)(param_1 + 0x20),*(long *)(param_1 + 0x30) + 1);
    }
    thunk_FUN_710081c200(param_1,0x60);
    param_1 = lVar4;
  } while (lVar4 != 0);
  return;
}



// ===== FUN_7100006e30 @ 7100006e30 (size=60) =====

void FUN_7100006e30(void)

{
  FUN_71007e21a0(&DAT_7100d08ab8);
  FUN_71007e21a0(&DAT_7100d08a98);
  FUN_71007e21a0(&DAT_7100d08ae0);
  FUN_71007e21a0(&DAT_7100d08b00);
  return;
}



// ===== FUN_7100006e70 @ 7100006e70 (size=568) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100006e70(void)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  lVar7 = 3;
  FUN_71000e1a40(0x7100d09120);
  FUN_71007e21a0(0x7100d09100);
  FUN_71007e21a0(0x7100d090e0);
  plVar4 = (long *)0x7100d090e0;
  do {
    plVar1 = (long *)plVar4[-4];
    if (plVar1 != plVar4 + -2) {
      thunk_FUN_710081c200(plVar1,plVar4[-2] + 1);
    }
    lVar7 = lVar7 + -1;
    plVar4 = plVar4 + -4;
  } while (lVar7 != 0);
  lVar7 = 2;
  puVar5 = (undefined8 *)&DAT_7100d09060;
  puVar2 = _DAT_7100d09060;
  puVar6 = puVar5;
  if (_DAT_7100d09060 == (undefined8 *)&DAT_7100d09070) goto LAB_7100006efc;
  do {
    thunk_FUN_710081c200(puVar2,puVar5[2] + 1);
    puVar6 = puVar5;
LAB_7100006efc:
    do {
      if (lVar7 == 1) {
        lVar7 = 2;
        puVar5 = (undefined8 *)&DAT_7100d09020;
        puVar2 = _DAT_7100d09020;
        puVar6 = puVar5;
        if (_DAT_7100d09020 == (undefined8 *)&DAT_7100d09030) goto LAB_7100006f4c;
        do {
          thunk_FUN_710081c200(puVar2,puVar5[2] + 1);
          puVar6 = puVar5;
LAB_7100006f4c:
          do {
            if (lVar7 == 1) {
              lVar7 = 2;
              puVar5 = (undefined8 *)&DAT_7100d08fe0;
              puVar2 = _DAT_7100d08fe0;
              puVar6 = puVar5;
              if (_DAT_7100d08fe0 == (undefined8 *)&DAT_7100d08ff0) goto LAB_7100006f9c;
              do {
                thunk_FUN_710081c200(puVar2,puVar5[2] + 1);
                puVar6 = puVar5;
LAB_7100006f9c:
                do {
                  if (lVar7 == 1) {
                    puVar2 = (undefined8 *)&DAT_7100d08fc0;
                    do {
                      puVar6 = puVar2 + -4;
                      if ((undefined8 *)*puVar6 != puVar2 + -2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar6,puVar2[-2] + 1);
                      }
                      puVar2 = puVar6;
                    } while (puVar6 != (undefined8 *)&DAT_7100d08ee0);
                    FUN_71007e21a0(0x7100d08ec0);
                    puVar2 = (undefined8 *)&DAT_7100d08ea0;
                    while( true ) {
                      if ((undefined8 *)*puVar2 != puVar2 + 2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar2,puVar2[2] + 1);
                      }
                      if (puVar2 == (undefined8 *)&DAT_7100d08c60) break;
                      puVar2 = puVar2 + -4;
                    }
                    puVar2 = (undefined8 *)&DAT_7100d08c60;
                    do {
                      puVar6 = puVar2 + -4;
                      if ((undefined8 *)*puVar6 != puVar2 + -2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar6,puVar2[-2] + 1);
                      }
                      puVar2 = puVar6;
                    } while (puVar6 != (undefined8 *)&DAT_7100d08be0);
                    puVar2 = (undefined8 *)&DAT_7100d08bc0;
                    while( true ) {
                      if ((undefined8 *)*puVar2 != puVar2 + 2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar2,puVar2[2] + 1);
                      }
                      if (puVar2 == (undefined8 *)&DAT_7100d08b20) break;
                      puVar2 = puVar2 + -4;
                    }
                    return;
                  }
                  puVar5 = puVar6 + -4;
                  lVar7 = 1;
                  puVar3 = puVar6 + -2;
                  puVar2 = (undefined8 *)*puVar5;
                  puVar6 = puVar5;
                } while (puVar2 == puVar3);
              } while( true );
            }
            puVar5 = puVar6 + -4;
            lVar7 = 1;
            puVar3 = puVar6 + -2;
            puVar2 = (undefined8 *)*puVar5;
            puVar6 = puVar5;
          } while (puVar2 == puVar3);
        } while( true );
      }
      puVar5 = puVar6 + -4;
      lVar7 = 1;
      puVar3 = puVar6 + -2;
      puVar2 = (undefined8 *)*puVar5;
      puVar6 = puVar5;
    } while (puVar2 == puVar3);
  } while( true );
}



// ===== FUN_71000070b0 @ 71000070b0 (size=812) =====

void FUN_71000070b0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 == 0) {
    return;
  }
  do {
    lVar4 = *(long *)(param_1 + 0x18);
    while (lVar4 != 0) {
      lVar3 = *(long *)(lVar4 + 0x18);
      while (lVar3 != 0) {
        lVar2 = *(long *)(lVar3 + 0x18);
        while (lVar2 != 0) {
          lVar1 = *(long *)(lVar2 + 0x18);
          while (lVar1 != 0) {
            lVar5 = *(long *)(lVar1 + 0x18);
            while (lVar5 != 0) {
              lVar6 = *(long *)(lVar5 + 0x18);
              while (lVar6 != 0) {
                lVar7 = *(long *)(lVar6 + 0x18);
                while (lVar7 != 0) {
                  lVar9 = *(long *)(lVar7 + 0x18);
                  while (lVar9 != 0) {
                    FUN_71000070b0(*(undefined8 *)(lVar9 + 0x18));
                    lVar8 = *(long *)(lVar9 + 0x10);
                    FUN_71007e21a0(lVar9 + 0x40);
                    FUN_71007e21a0(lVar9 + 0x20);
                    thunk_FUN_710081c200(lVar9,0x60);
                    lVar9 = lVar8;
                  }
                  lVar9 = *(long *)(lVar7 + 0x10);
                  FUN_71007e21a0(lVar7 + 0x40);
                  FUN_71007e21a0(lVar7 + 0x20);
                  thunk_FUN_710081c200(lVar7,0x60);
                  lVar7 = lVar9;
                }
                lVar7 = *(long *)(lVar6 + 0x10);
                if (*(long *)(lVar6 + 0x40) != lVar6 + 0x50) {
                  thunk_FUN_710081c200(*(long *)(lVar6 + 0x40),*(long *)(lVar6 + 0x50) + 1);
                }
                if (*(long *)(lVar6 + 0x20) != lVar6 + 0x30) {
                  thunk_FUN_710081c200(*(long *)(lVar6 + 0x20),*(long *)(lVar6 + 0x30) + 1);
                }
                thunk_FUN_710081c200(lVar6,0x60);
                lVar6 = lVar7;
              }
              lVar6 = *(long *)(lVar5 + 0x10);
              if (*(long *)(lVar5 + 0x40) != lVar5 + 0x50) {
                thunk_FUN_710081c200(*(long *)(lVar5 + 0x40),*(long *)(lVar5 + 0x50) + 1);
              }
              if (*(long *)(lVar5 + 0x20) != lVar5 + 0x30) {
                thunk_FUN_710081c200(*(long *)(lVar5 + 0x20),*(long *)(lVar5 + 0x30) + 1);
              }
              thunk_FUN_710081c200(lVar5,0x60);
              lVar5 = lVar6;
            }
            lVar5 = *(long *)(lVar1 + 0x10);
            if (*(long *)(lVar1 + 0x40) != lVar1 + 0x50) {
              thunk_FUN_710081c200(*(long *)(lVar1 + 0x40),*(long *)(lVar1 + 0x50) + 1);
            }
            if (*(long *)(lVar1 + 0x20) != lVar1 + 0x30) {
              thunk_FUN_710081c200(*(long *)(lVar1 + 0x20),*(long *)(lVar1 + 0x30) + 1);
            }
            thunk_FUN_710081c200(lVar1,0x60);
            lVar1 = lVar5;
          }
          lVar1 = *(long *)(lVar2 + 0x10);
          if (*(long *)(lVar2 + 0x40) != lVar2 + 0x50) {
            thunk_FUN_710081c200(*(long *)(lVar2 + 0x40),*(long *)(lVar2 + 0x50) + 1);
          }
          if (*(long *)(lVar2 + 0x20) != lVar2 + 0x30) {
            thunk_FUN_710081c200(*(long *)(lVar2 + 0x20),*(long *)(lVar2 + 0x30) + 1);
          }
          thunk_FUN_710081c200(lVar2,0x60);
          lVar2 = lVar1;
        }
        lVar2 = *(long *)(lVar3 + 0x10);
        if (*(long *)(lVar3 + 0x40) != lVar3 + 0x50) {
          thunk_FUN_710081c200(*(long *)(lVar3 + 0x40),*(long *)(lVar3 + 0x50) + 1);
        }
        if (*(long *)(lVar3 + 0x20) != lVar3 + 0x30) {
          thunk_FUN_710081c200(*(long *)(lVar3 + 0x20),*(long *)(lVar3 + 0x30) + 1);
        }
        thunk_FUN_710081c200(lVar3,0x60);
        lVar3 = lVar2;
      }
      lVar3 = *(long *)(lVar4 + 0x10);
      if (*(long *)(lVar4 + 0x40) != lVar4 + 0x50) {
        thunk_FUN_710081c200(*(long *)(lVar4 + 0x40),*(long *)(lVar4 + 0x50) + 1);
      }
      if (*(long *)(lVar4 + 0x20) != lVar4 + 0x30) {
        thunk_FUN_710081c200(*(long *)(lVar4 + 0x20),*(long *)(lVar4 + 0x30) + 1);
      }
      thunk_FUN_710081c200(lVar4,0x60);
      lVar4 = lVar3;
    }
    lVar4 = *(long *)(param_1 + 0x10);
    if (*(long *)(param_1 + 0x40) != param_1 + 0x50) {
      thunk_FUN_710081c200(*(long *)(param_1 + 0x40),*(long *)(param_1 + 0x50) + 1);
    }
    if (*(long *)(param_1 + 0x20) != param_1 + 0x30) {
      thunk_FUN_710081c200(*(long *)(param_1 + 0x20),*(long *)(param_1 + 0x30) + 1);
    }
    thunk_FUN_710081c200(param_1,0x60);
    param_1 = lVar4;
  } while (lVar4 != 0);
  return;
}



// ===== FUN_71000073e0 @ 71000073e0 (size=580) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000073e0(void)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  lVar7 = 3;
  FUN_71000070b0(_DAT_7100d09150);
  FUN_71000e1a40(0x7100d09770);
  FUN_71007e21a0(&DAT_7100d09170);
  FUN_71007e21a0(0x7100d09750);
  plVar4 = (long *)0x7100d09750;
  do {
    plVar1 = (long *)plVar4[-4];
    if (plVar1 != plVar4 + -2) {
      thunk_FUN_710081c200(plVar1,plVar4[-2] + 1);
    }
    lVar7 = lVar7 + -1;
    plVar4 = plVar4 + -4;
  } while (lVar7 != 0);
  lVar7 = 2;
  puVar5 = (undefined8 *)&DAT_7100d096d0;
  puVar2 = _DAT_7100d096d0;
  puVar6 = puVar5;
  if (_DAT_7100d096d0 == (undefined8 *)&DAT_7100d096e0) goto LAB_7100007474;
  do {
    thunk_FUN_710081c200(puVar2,puVar5[2] + 1);
    puVar6 = puVar5;
LAB_7100007474:
    do {
      if (lVar7 == 1) {
        lVar7 = 2;
        puVar5 = (undefined8 *)&DAT_7100d09690;
        puVar2 = _DAT_7100d09690;
        puVar6 = puVar5;
        if (_DAT_7100d09690 == (undefined8 *)&DAT_7100d096a0) goto LAB_71000074c4;
        do {
          thunk_FUN_710081c200(puVar2,puVar5[2] + 1);
          puVar6 = puVar5;
LAB_71000074c4:
          do {
            if (lVar7 == 1) {
              lVar7 = 2;
              puVar5 = (undefined8 *)&DAT_7100d09650;
              puVar2 = _DAT_7100d09650;
              puVar6 = puVar5;
              if (_DAT_7100d09650 == (undefined8 *)&DAT_7100d09660) goto LAB_7100007514;
              do {
                thunk_FUN_710081c200(puVar2,puVar5[2] + 1);
                puVar6 = puVar5;
LAB_7100007514:
                do {
                  if (lVar7 == 1) {
                    puVar2 = (undefined8 *)&DAT_7100d09630;
                    do {
                      puVar6 = puVar2 + -4;
                      if ((undefined8 *)*puVar6 != puVar2 + -2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar6,puVar2[-2] + 1);
                      }
                      puVar2 = puVar6;
                    } while (puVar6 != (undefined8 *)&DAT_7100d09550);
                    FUN_71007e21a0(0x7100d09530);
                    puVar2 = (undefined8 *)&DAT_7100d09510;
                    while( true ) {
                      if ((undefined8 *)*puVar2 != puVar2 + 2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar2,puVar2[2] + 1);
                      }
                      if (puVar2 == (undefined8 *)&DAT_7100d092d0) break;
                      puVar2 = puVar2 + -4;
                    }
                    puVar2 = (undefined8 *)&DAT_7100d092d0;
                    do {
                      puVar6 = puVar2 + -4;
                      if ((undefined8 *)*puVar6 != puVar2 + -2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar6,puVar2[-2] + 1);
                      }
                      puVar2 = puVar6;
                    } while (puVar6 != (undefined8 *)&DAT_7100d09250);
                    puVar2 = (undefined8 *)&DAT_7100d09230;
                    while( true ) {
                      if ((undefined8 *)*puVar2 != puVar2 + 2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar2,puVar2[2] + 1);
                      }
                      if (puVar2 == (undefined8 *)&DAT_7100d09190) break;
                      puVar2 = puVar2 + -4;
                    }
                    return;
                  }
                  puVar5 = puVar6 + -4;
                  lVar7 = 1;
                  puVar3 = puVar6 + -2;
                  puVar2 = (undefined8 *)*puVar5;
                  puVar6 = puVar5;
                } while (puVar2 == puVar3);
              } while( true );
            }
            puVar5 = puVar6 + -4;
            lVar7 = 1;
            puVar3 = puVar6 + -2;
            puVar2 = (undefined8 *)*puVar5;
            puVar6 = puVar5;
          } while (puVar2 == puVar3);
        } while( true );
      }
      puVar5 = puVar6 + -4;
      lVar7 = 1;
      puVar3 = puVar6 + -2;
      puVar2 = (undefined8 *)*puVar5;
      puVar6 = puVar5;
    } while (puVar2 == puVar3);
  } while( true );
}



// ===== FUN_7100007630 @ 7100007630 (size=668) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100007630(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  plVar8 = _DAT_7100d09da8;
  if (_DAT_7100d09da8 != (long *)0x0) {
    plVar4 = _DAT_7100d09da8 + 1;
    if (*plVar4 == 0x100000001) {
      pcVar7 = *(code **)(*_DAT_7100d09da8 + 0x10);
      _DAT_7100d09da8[1] = 0;
      (*pcVar7)(plVar8);
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    else {
      do {
        iVar3 = (int)*plVar4 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *(int *)plVar4 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 == 0) {
        FUN_71000a22d0(plVar8);
      }
    }
  }
  lVar11 = 3;
  FUN_71007b0080(0x7100d09d98);
  FUN_71007e21a0(0x7100d09d70);
  FUN_71007e21a0(0x7100d09d50);
  plVar8 = (long *)0x7100d09d50;
  do {
    plVar4 = (long *)plVar8[-4];
    if (plVar4 != plVar8 + -2) {
      thunk_FUN_710081c200(plVar4,plVar8[-2] + 1);
    }
    lVar11 = lVar11 + -1;
    plVar8 = plVar8 + -4;
  } while (lVar11 != 0);
  lVar11 = 2;
  puVar9 = (undefined8 *)&DAT_7100d09cd0;
  puVar5 = _DAT_7100d09cd0;
  puVar10 = puVar9;
  if (_DAT_7100d09cd0 == (undefined8 *)&DAT_7100d09ce0) goto LAB_71000076f0;
  do {
    thunk_FUN_710081c200(puVar5,puVar9[2] + 1);
    puVar10 = puVar9;
LAB_71000076f0:
    do {
      if (lVar11 == 1) {
        lVar11 = 2;
        puVar9 = (undefined8 *)&DAT_7100d09c90;
        puVar5 = _DAT_7100d09c90;
        puVar10 = puVar9;
        if (_DAT_7100d09c90 == (undefined8 *)&DAT_7100d09ca0) goto LAB_7100007740;
        do {
          thunk_FUN_710081c200(puVar5,puVar9[2] + 1);
          puVar10 = puVar9;
LAB_7100007740:
          do {
            if (lVar11 == 1) {
              lVar11 = 2;
              puVar9 = (undefined8 *)&DAT_7100d09c50;
              puVar5 = _DAT_7100d09c50;
              puVar10 = puVar9;
              if (_DAT_7100d09c50 == (undefined8 *)&DAT_7100d09c60) goto LAB_7100007790;
              do {
                thunk_FUN_710081c200(puVar5,puVar9[2] + 1);
                puVar10 = puVar9;
LAB_7100007790:
                do {
                  if (lVar11 == 1) {
                    puVar5 = (undefined8 *)&DAT_7100d09c30;
                    do {
                      puVar10 = puVar5 + -4;
                      if ((undefined8 *)*puVar10 != puVar5 + -2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar10,puVar5[-2] + 1);
                      }
                      puVar5 = puVar10;
                    } while (puVar10 != (undefined8 *)&DAT_7100d09b50);
                    FUN_71007e21a0(0x7100d09b30);
                    puVar5 = (undefined8 *)&DAT_7100d09b10;
                    while( true ) {
                      if ((undefined8 *)*puVar5 != puVar5 + 2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar5,puVar5[2] + 1);
                      }
                      if (puVar5 == (undefined8 *)&DAT_7100d098d0) break;
                      puVar5 = puVar5 + -4;
                    }
                    puVar5 = (undefined8 *)&DAT_7100d098d0;
                    do {
                      puVar10 = puVar5 + -4;
                      if ((undefined8 *)*puVar10 != puVar5 + -2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar10,puVar5[-2] + 1);
                      }
                      puVar5 = puVar10;
                    } while (puVar10 != (undefined8 *)&DAT_7100d09850);
                    puVar5 = (undefined8 *)&DAT_7100d09830;
                    while( true ) {
                      if ((undefined8 *)*puVar5 != puVar5 + 2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar5,puVar5[2] + 1);
                      }
                      if (puVar5 == (undefined8 *)&DAT_7100d09790) break;
                      puVar5 = puVar5 + -4;
                    }
                    return;
                  }
                  puVar9 = puVar10 + -4;
                  lVar11 = 1;
                  puVar6 = puVar10 + -2;
                  puVar5 = (undefined8 *)*puVar9;
                  puVar10 = puVar9;
                } while (puVar5 == puVar6);
              } while( true );
            }
            puVar9 = puVar10 + -4;
            lVar11 = 1;
            puVar6 = puVar10 + -2;
            puVar5 = (undefined8 *)*puVar9;
            puVar10 = puVar9;
          } while (puVar5 == puVar6);
        } while( true );
      }
      puVar9 = puVar10 + -4;
      lVar11 = 1;
      puVar6 = puVar10 + -2;
      puVar5 = (undefined8 *)*puVar9;
      puVar10 = puVar9;
    } while (puVar5 == puVar6);
  } while( true );
}



// ===== FUN_71000078d0 @ 71000078d0 (size=732) =====

void FUN_71000078d0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 == 0) {
    return;
  }
  do {
    lVar4 = *(long *)(param_1 + 0x18);
    while (lVar4 != 0) {
      lVar3 = *(long *)(lVar4 + 0x18);
      while (lVar3 != 0) {
        lVar2 = *(long *)(lVar3 + 0x18);
        while (lVar2 != 0) {
          lVar1 = *(long *)(lVar2 + 0x18);
          while (lVar1 != 0) {
            lVar5 = *(long *)(lVar1 + 0x18);
            while (lVar5 != 0) {
              lVar6 = *(long *)(lVar5 + 0x18);
              while (lVar6 != 0) {
                lVar7 = *(long *)(lVar6 + 0x18);
                while (lVar7 != 0) {
                  lVar9 = *(long *)(lVar7 + 0x18);
                  while (lVar9 != 0) {
                    FUN_71000078d0(*(undefined8 *)(lVar9 + 0x18));
                    lVar8 = *(long *)(lVar9 + 0x10);
                    FUN_71007e21a0(lVar9 + 0x40);
                    FUN_71007e21a0(lVar9 + 0x20);
                    thunk_FUN_710081c200(lVar9,0x60);
                    lVar9 = lVar8;
                  }
                  lVar9 = *(long *)(lVar7 + 0x10);
                  FUN_71007e21a0(lVar7 + 0x40);
                  FUN_71007e21a0(lVar7 + 0x20);
                  thunk_FUN_710081c200(lVar7,0x60);
                  lVar7 = lVar9;
                }
                lVar7 = *(long *)(lVar6 + 0x10);
                FUN_71007e21a0(lVar6 + 0x40);
                FUN_71007e21a0(lVar6 + 0x20);
                thunk_FUN_710081c200(lVar6,0x60);
                lVar6 = lVar7;
              }
              lVar6 = *(long *)(lVar5 + 0x10);
              FUN_71007e21a0(lVar5 + 0x40);
              FUN_71007e21a0(lVar5 + 0x20);
              thunk_FUN_710081c200(lVar5,0x60);
              lVar5 = lVar6;
            }
            lVar5 = *(long *)(lVar1 + 0x10);
            if (*(long *)(lVar1 + 0x40) != lVar1 + 0x50) {
              thunk_FUN_710081c200(*(long *)(lVar1 + 0x40),*(long *)(lVar1 + 0x50) + 1);
            }
            if (*(long *)(lVar1 + 0x20) != lVar1 + 0x30) {
              thunk_FUN_710081c200(*(long *)(lVar1 + 0x20),*(long *)(lVar1 + 0x30) + 1);
            }
            thunk_FUN_710081c200(lVar1,0x60);
            lVar1 = lVar5;
          }
          lVar1 = *(long *)(lVar2 + 0x10);
          if (*(long *)(lVar2 + 0x40) != lVar2 + 0x50) {
            thunk_FUN_710081c200(*(long *)(lVar2 + 0x40),*(long *)(lVar2 + 0x50) + 1);
          }
          if (*(long *)(lVar2 + 0x20) != lVar2 + 0x30) {
            thunk_FUN_710081c200(*(long *)(lVar2 + 0x20),*(long *)(lVar2 + 0x30) + 1);
          }
          thunk_FUN_710081c200(lVar2,0x60);
          lVar2 = lVar1;
        }
        lVar2 = *(long *)(lVar3 + 0x10);
        if (*(long *)(lVar3 + 0x40) != lVar3 + 0x50) {
          thunk_FUN_710081c200(*(long *)(lVar3 + 0x40),*(long *)(lVar3 + 0x50) + 1);
        }
        if (*(long *)(lVar3 + 0x20) != lVar3 + 0x30) {
          thunk_FUN_710081c200(*(long *)(lVar3 + 0x20),*(long *)(lVar3 + 0x30) + 1);
        }
        thunk_FUN_710081c200(lVar3,0x60);
        lVar3 = lVar2;
      }
      lVar3 = *(long *)(lVar4 + 0x10);
      if (*(long *)(lVar4 + 0x40) != lVar4 + 0x50) {
        thunk_FUN_710081c200(*(long *)(lVar4 + 0x40),*(long *)(lVar4 + 0x50) + 1);
      }
      if (*(long *)(lVar4 + 0x20) != lVar4 + 0x30) {
        thunk_FUN_710081c200(*(long *)(lVar4 + 0x20),*(long *)(lVar4 + 0x30) + 1);
      }
      thunk_FUN_710081c200(lVar4,0x60);
      lVar4 = lVar3;
    }
    lVar4 = *(long *)(param_1 + 0x10);
    if (*(long *)(param_1 + 0x40) != param_1 + 0x50) {
      thunk_FUN_710081c200(*(long *)(param_1 + 0x40),*(long *)(param_1 + 0x50) + 1);
    }
    if (*(long *)(param_1 + 0x20) != param_1 + 0x30) {
      thunk_FUN_710081c200(*(long *)(param_1 + 0x20),*(long *)(param_1 + 0x30) + 1);
    }
    thunk_FUN_710081c200(param_1,0x60);
    param_1 = lVar4;
  } while (lVar4 != 0);
  return;
}



// ===== FUN_7100007bb0 @ 7100007bb0 (size=712) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100007bb0(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  FUN_71000078d0(_DAT_7100d09dc0);
  if (_DAT_7100d09df8 != &DAT_7100d09de8) {
    (*(code *)PTR_thunk_FUN_710081c200_7100af34c0)();
  }
  plVar8 = _DAT_7100d0a428;
  if (_DAT_7100d0a428 != (long *)0x0) {
    plVar4 = _DAT_7100d0a428 + 1;
    if (*plVar4 == 0x100000001) {
      pcVar7 = *(code **)(*_DAT_7100d0a428 + 0x10);
      _DAT_7100d0a428[1] = 0;
      (*pcVar7)(plVar8);
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    else {
      do {
        iVar3 = (int)*plVar4 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *(int *)plVar4 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 == 0) {
        FUN_71000a22d0(plVar8);
      }
    }
  }
  lVar11 = 3;
  FUN_71007b0080(0x7100d0a418);
  FUN_71007e21a0(0x7100d0a3e8);
  FUN_71007e21a0(0x7100d0a3c8);
  plVar8 = (long *)0x7100d0a3c8;
  do {
    plVar4 = (long *)plVar8[-4];
    if (plVar4 != plVar8 + -2) {
      thunk_FUN_710081c200(plVar4,plVar8[-2] + 1);
    }
    lVar11 = lVar11 + -1;
    plVar8 = plVar8 + -4;
  } while (lVar11 != 0);
  lVar11 = 2;
  puVar9 = (undefined8 *)&DAT_7100d09e28;
  puVar5 = _DAT_7100d09e28;
  puVar10 = puVar9;
  if (_DAT_7100d09e28 == (undefined8 *)&DAT_7100d09e38) goto LAB_7100007c98;
  do {
    thunk_FUN_710081c200(puVar5,puVar9[2] + 1);
    puVar10 = puVar9;
LAB_7100007c98:
    do {
      if (lVar11 == 1) {
        lVar11 = 2;
        puVar9 = (undefined8 *)&DAT_7100d0a348;
        puVar5 = _DAT_7100d0a348;
        puVar10 = puVar9;
        if (_DAT_7100d0a348 == (undefined8 *)&DAT_7100d0a358) goto LAB_7100007ce8;
        do {
          thunk_FUN_710081c200(puVar5,puVar9[2] + 1);
          puVar10 = puVar9;
LAB_7100007ce8:
          do {
            if (lVar11 == 1) {
              lVar11 = 2;
              puVar9 = (undefined8 *)&DAT_7100d0a308;
              puVar5 = _DAT_7100d0a308;
              puVar10 = puVar9;
              if (_DAT_7100d0a308 == (undefined8 *)&DAT_7100d0a318) goto LAB_7100007d38;
              do {
                thunk_FUN_710081c200(puVar5,puVar9[2] + 1);
                puVar10 = puVar9;
LAB_7100007d38:
                do {
                  if (lVar11 == 1) {
                    puVar5 = (undefined8 *)&DAT_7100d0a2e8;
                    do {
                      puVar10 = puVar5 + -4;
                      if ((undefined8 *)*puVar10 != puVar5 + -2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar10,puVar5[-2] + 1);
                      }
                      puVar5 = puVar10;
                    } while (puVar10 != (undefined8 *)&DAT_7100d0a208);
                    FUN_71007e21a0(0x7100d0a1e8);
                    puVar5 = (undefined8 *)&DAT_7100d0a1c8;
                    while( true ) {
                      if ((undefined8 *)*puVar5 != puVar5 + 2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar5,puVar5[2] + 1);
                      }
                      if (puVar5 == (undefined8 *)&DAT_7100d09f88) break;
                      puVar5 = puVar5 + -4;
                    }
                    puVar5 = (undefined8 *)&DAT_7100d09f88;
                    do {
                      puVar10 = puVar5 + -4;
                      if ((undefined8 *)*puVar10 != puVar5 + -2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar10,puVar5[-2] + 1);
                      }
                      puVar5 = puVar10;
                    } while (puVar10 != (undefined8 *)&DAT_7100d09f08);
                    puVar5 = (undefined8 *)&DAT_7100d09ee8;
                    while( true ) {
                      if ((undefined8 *)*puVar5 != puVar5 + 2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar5,puVar5[2] + 1);
                      }
                      if (puVar5 == (undefined8 *)&DAT_7100d09e48) break;
                      puVar5 = puVar5 + -4;
                    }
                    return;
                  }
                  puVar9 = puVar10 + -4;
                  lVar11 = 1;
                  puVar6 = puVar10 + -2;
                  puVar5 = (undefined8 *)*puVar9;
                  puVar10 = puVar9;
                } while (puVar5 == puVar6);
              } while( true );
            }
            puVar9 = puVar10 + -4;
            lVar11 = 1;
            puVar6 = puVar10 + -2;
            puVar5 = (undefined8 *)*puVar9;
            puVar10 = puVar9;
          } while (puVar5 == puVar6);
        } while( true );
      }
      puVar9 = puVar10 + -4;
      lVar11 = 1;
      puVar6 = puVar10 + -2;
      puVar5 = (undefined8 *)*puVar9;
      puVar10 = puVar9;
    } while (puVar5 == puVar6);
  } while( true );
}



// ===== FUN_7100007e80 @ 7100007e80 (size=4) =====

void FUN_7100007e80(void)

{
  DAT_7100af8548 = DAT_7100af8548 + -1;
  if (DAT_7100af8548 == 0) {
    FUN_7100066ce0(&DAT_7100af2040);
  }
  DAT_7100af8550 = DAT_7100af8550 + -1;
  if (DAT_7100af8550 == 0) {
    FUN_7100066ce0(&DAT_7100af20b8);
  }
  DAT_7100af8558 = DAT_7100af8558 + -1;
  if (DAT_7100af8558 == 0) {
    FUN_7100066ce0(&DAT_7100af2130);
  }
  DAT_7100af8560 = DAT_7100af8560 + -1;
  if (DAT_7100af8560 != 0) {
    return;
  }
  FUN_7100066ce0(&DAT_7100af21a8);
  return;
}



// ===== FUN_7100007e84 @ 7100007e84 (size=156) =====

void FUN_7100007e84(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x548) + -1;
  *(long *)(param_2 + 0x548) = lVar1;
  if (lVar1 == 0) {
    FUN_7100066ce0(&DAT_7100af2040);
  }
  DAT_7100af8550 = DAT_7100af8550 + -1;
  if (DAT_7100af8550 == 0) {
    FUN_7100066ce0(&DAT_7100af20b8);
  }
  DAT_7100af8558 = DAT_7100af8558 + -1;
  if (DAT_7100af8558 == 0) {
    FUN_7100066ce0(&DAT_7100af2130);
  }
  DAT_7100af8560 = DAT_7100af8560 + -1;
  if (DAT_7100af8560 != 0) {
    return;
  }
  FUN_7100066ce0(&DAT_7100af21a8);
  return;
}



// ===== FUN_7100007f20 @ 7100007f20 (size=4) =====

void FUN_7100007f20(void)

{
  DAT_7100af8548 = DAT_7100af8548 + -1;
  if (DAT_7100af8548 == 0) {
    FUN_7100066ce0(&DAT_7100af2040);
  }
  DAT_7100af8550 = DAT_7100af8550 + -1;
  if (DAT_7100af8550 == 0) {
    FUN_7100066ce0(&DAT_7100af20b8);
  }
  DAT_7100af8558 = DAT_7100af8558 + -1;
  if (DAT_7100af8558 == 0) {
    FUN_7100066ce0(&DAT_7100af2130);
  }
  DAT_7100af8560 = DAT_7100af8560 + -1;
  if (DAT_7100af8560 != 0) {
    return;
  }
  FUN_7100066ce0(&DAT_7100af21a8);
  return;
}



// ===== FUN_7100007f24 @ 7100007f24 (size=156) =====

void FUN_7100007f24(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x548) + -1;
  *(long *)(param_2 + 0x548) = lVar1;
  if (lVar1 == 0) {
    FUN_7100066ce0(&DAT_7100af2040);
  }
  DAT_7100af8550 = DAT_7100af8550 + -1;
  if (DAT_7100af8550 == 0) {
    FUN_7100066ce0(&DAT_7100af20b8);
  }
  DAT_7100af8558 = DAT_7100af8558 + -1;
  if (DAT_7100af8558 == 0) {
    FUN_7100066ce0(&DAT_7100af2130);
  }
  DAT_7100af8560 = DAT_7100af8560 + -1;
  if (DAT_7100af8560 != 0) {
    return;
  }
  FUN_7100066ce0(&DAT_7100af21a8);
  return;
}



// ===== FUN_7100007fc0 @ 7100007fc0 (size=4) =====

void FUN_7100007fc0(void)

{
  DAT_7100af8548 = DAT_7100af8548 + -1;
  if (DAT_7100af8548 == 0) {
    FUN_7100066ce0(&DAT_7100af2040);
  }
  DAT_7100af8550 = DAT_7100af8550 + -1;
  if (DAT_7100af8550 == 0) {
    FUN_7100066ce0(&DAT_7100af20b8);
  }
  DAT_7100af8558 = DAT_7100af8558 + -1;
  if (DAT_7100af8558 == 0) {
    FUN_7100066ce0(&DAT_7100af2130);
  }
  DAT_7100af8560 = DAT_7100af8560 + -1;
  if (DAT_7100af8560 != 0) {
    return;
  }
  FUN_7100066ce0(&DAT_7100af21a8);
  return;
}



// ===== FUN_7100007fc4 @ 7100007fc4 (size=156) =====

void FUN_7100007fc4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x548) + -1;
  *(long *)(param_2 + 0x548) = lVar1;
  if (lVar1 == 0) {
    FUN_7100066ce0(&DAT_7100af2040);
  }
  DAT_7100af8550 = DAT_7100af8550 + -1;
  if (DAT_7100af8550 == 0) {
    FUN_7100066ce0(&DAT_7100af20b8);
  }
  DAT_7100af8558 = DAT_7100af8558 + -1;
  if (DAT_7100af8558 == 0) {
    FUN_7100066ce0(&DAT_7100af2130);
  }
  DAT_7100af8560 = DAT_7100af8560 + -1;
  if (DAT_7100af8560 != 0) {
    return;
  }
  FUN_7100066ce0(&DAT_7100af21a8);
  return;
}



// ===== FUN_7100008060 @ 7100008060 (size=4) =====

void FUN_7100008060(void)

{
  DAT_7100af8548 = DAT_7100af8548 + -1;
  if (DAT_7100af8548 == 0) {
    FUN_7100066ce0(&DAT_7100af2040);
  }
  DAT_7100af8550 = DAT_7100af8550 + -1;
  if (DAT_7100af8550 == 0) {
    FUN_7100066ce0(&DAT_7100af20b8);
  }
  DAT_7100af8558 = DAT_7100af8558 + -1;
  if (DAT_7100af8558 == 0) {
    FUN_7100066ce0(&DAT_7100af2130);
  }
  DAT_7100af8560 = DAT_7100af8560 + -1;
  if (DAT_7100af8560 != 0) {
    return;
  }
  FUN_7100066ce0(&DAT_7100af21a8);
  return;
}



// ===== FUN_7100008064 @ 7100008064 (size=156) =====

void FUN_7100008064(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x548) + -1;
  *(long *)(param_2 + 0x548) = lVar1;
  if (lVar1 == 0) {
    FUN_7100066ce0(&DAT_7100af2040);
  }
  DAT_7100af8550 = DAT_7100af8550 + -1;
  if (DAT_7100af8550 == 0) {
    FUN_7100066ce0(&DAT_7100af20b8);
  }
  DAT_7100af8558 = DAT_7100af8558 + -1;
  if (DAT_7100af8558 == 0) {
    FUN_7100066ce0(&DAT_7100af2130);
  }
  DAT_7100af8560 = DAT_7100af8560 + -1;
  if (DAT_7100af8560 != 0) {
    return;
  }
  FUN_7100066ce0(&DAT_7100af21a8);
  return;
}



// ===== FUN_7100008100 @ 7100008100 (size=4) =====

void FUN_7100008100(void)

{
  DAT_7100af8548 = DAT_7100af8548 + -1;
  if (DAT_7100af8548 == 0) {
    FUN_7100066ce0(&DAT_7100af2040);
  }
  DAT_7100af8550 = DAT_7100af8550 + -1;
  if (DAT_7100af8550 == 0) {
    FUN_7100066ce0(&DAT_7100af20b8);
  }
  DAT_7100af8558 = DAT_7100af8558 + -1;
  if (DAT_7100af8558 == 0) {
    FUN_7100066ce0(&DAT_7100af2130);
  }
  DAT_7100af8560 = DAT_7100af8560 + -1;
  if (DAT_7100af8560 != 0) {
    return;
  }
  FUN_7100066ce0(&DAT_7100af21a8);
  return;
}



// ===== FUN_7100008104 @ 7100008104 (size=156) =====

void FUN_7100008104(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x548) + -1;
  *(long *)(param_2 + 0x548) = lVar1;
  if (lVar1 == 0) {
    FUN_7100066ce0(&DAT_7100af2040);
  }
  DAT_7100af8550 = DAT_7100af8550 + -1;
  if (DAT_7100af8550 == 0) {
    FUN_7100066ce0(&DAT_7100af20b8);
  }
  DAT_7100af8558 = DAT_7100af8558 + -1;
  if (DAT_7100af8558 == 0) {
    FUN_7100066ce0(&DAT_7100af2130);
  }
  DAT_7100af8560 = DAT_7100af8560 + -1;
  if (DAT_7100af8560 != 0) {
    return;
  }
  FUN_7100066ce0(&DAT_7100af21a8);
  return;
}



// ===== FUN_71000081a0 @ 71000081a0 (size=4) =====

void FUN_71000081a0(void)

{
  DAT_7100af8548 = DAT_7100af8548 + -1;
  if (DAT_7100af8548 == 0) {
    FUN_7100066ce0(&DAT_7100af2040);
  }
  DAT_7100af8550 = DAT_7100af8550 + -1;
  if (DAT_7100af8550 == 0) {
    FUN_7100066ce0(&DAT_7100af20b8);
  }
  DAT_7100af8558 = DAT_7100af8558 + -1;
  if (DAT_7100af8558 == 0) {
    FUN_7100066ce0(&DAT_7100af2130);
  }
  DAT_7100af8560 = DAT_7100af8560 + -1;
  if (DAT_7100af8560 != 0) {
    return;
  }
  FUN_7100066ce0(&DAT_7100af21a8);
  return;
}



// ===== FUN_71000081a4 @ 71000081a4 (size=156) =====

void FUN_71000081a4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x548) + -1;
  *(long *)(param_2 + 0x548) = lVar1;
  if (lVar1 == 0) {
    FUN_7100066ce0(&DAT_7100af2040);
  }
  DAT_7100af8550 = DAT_7100af8550 + -1;
  if (DAT_7100af8550 == 0) {
    FUN_7100066ce0(&DAT_7100af20b8);
  }
  DAT_7100af8558 = DAT_7100af8558 + -1;
  if (DAT_7100af8558 == 0) {
    FUN_7100066ce0(&DAT_7100af2130);
  }
  DAT_7100af8560 = DAT_7100af8560 + -1;
  if (DAT_7100af8560 != 0) {
    return;
  }
  FUN_7100066ce0(&DAT_7100af21a8);
  return;
}



// ===== FUN_7100008240 @ 7100008240 (size=276) =====

void FUN_7100008240(void)

{
  FUN_710004f7e0(0x7100d0a700);
  FUN_710004f7e0(0x7100d0a6e8);
  FUN_710004f7e0(0x7100d0a6d0);
  FUN_710004f7e0(0x7100d0a6b8);
  FUN_710004f7e0(0x7100d0a6a0);
  FUN_710004f7e0(0x7100d0a688);
  FUN_710004f7e0(0x7100d0a670);
  FUN_710004f7e0(0x7100d0a658);
  FUN_710004f7e0(&DAT_7100d0a460);
  FUN_710004f7e0(&DAT_7100d0a448);
  FUN_710004f7e0(&DAT_7100d0a430);
  FUN_710004f7e0(0x7100d0a640);
  FUN_710004f7e0(0x7100d0a628);
  FUN_710004f7e0(0x7100d0a610);
  FUN_710004f7e0(0x7100d0a5f8);
  FUN_710004f7e0(0x7100d0a5e0);
  FUN_710004f7e0(0x7100d0a5c8);
  FUN_710004f7e0(0x7100d0a5b0);
  FUN_710004f7e0(0x7100d0a598);
  FUN_710004f7e0(0x7100d0a580);
  FUN_710004f7e0(0x7100d0a568);
  FUN_710004f7e0(0x7100d0a550);
  FUN_710004f7e0(0x7100d0a538);
  FUN_710004f7e0(0x7100d0a520);
  FUN_710004f7e0(0x7100d0a508);
  FUN_710004f7e0(0x7100d0a4f0);
  FUN_710004f7e0(0x7100d0a4d8);
  FUN_710004f7e0(0x7100d0a4c0);
  FUN_710004f7e0(0x7100d0a4a8);
  FUN_710004f7e0(0x7100d0a490);
  FUN_710004f7e0(0x7100d0a478);
  return;
}



// ===== FUN_7100008360 @ 7100008360 (size=4) =====

void FUN_7100008360(void)

{
  DAT_7100af8548 = DAT_7100af8548 + -1;
  if (DAT_7100af8548 == 0) {
    FUN_7100066ce0(&DAT_7100af2040);
  }
  DAT_7100af8550 = DAT_7100af8550 + -1;
  if (DAT_7100af8550 == 0) {
    FUN_7100066ce0(&DAT_7100af20b8);
  }
  DAT_7100af8558 = DAT_7100af8558 + -1;
  if (DAT_7100af8558 == 0) {
    FUN_7100066ce0(&DAT_7100af2130);
  }
  DAT_7100af8560 = DAT_7100af8560 + -1;
  if (DAT_7100af8560 != 0) {
    return;
  }
  FUN_7100066ce0(&DAT_7100af21a8);
  return;
}



// ===== FUN_7100008364 @ 7100008364 (size=156) =====

void FUN_7100008364(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x548) + -1;
  *(long *)(param_2 + 0x548) = lVar1;
  if (lVar1 == 0) {
    FUN_7100066ce0(&DAT_7100af2040);
  }
  DAT_7100af8550 = DAT_7100af8550 + -1;
  if (DAT_7100af8550 == 0) {
    FUN_7100066ce0(&DAT_7100af20b8);
  }
  DAT_7100af8558 = DAT_7100af8558 + -1;
  if (DAT_7100af8558 == 0) {
    FUN_7100066ce0(&DAT_7100af2130);
  }
  DAT_7100af8560 = DAT_7100af8560 + -1;
  if (DAT_7100af8560 != 0) {
    return;
  }
  FUN_7100066ce0(&DAT_7100af21a8);
  return;
}



// ===== FUN_7100008420 @ 7100008420 (size=4) =====

void FUN_7100008420(void)

{
  DAT_7100af8548 = DAT_7100af8548 + -1;
  if (DAT_7100af8548 == 0) {
    FUN_7100066ce0(&DAT_7100af2040);
  }
  DAT_7100af8550 = DAT_7100af8550 + -1;
  if (DAT_7100af8550 == 0) {
    FUN_7100066ce0(&DAT_7100af20b8);
  }
  DAT_7100af8558 = DAT_7100af8558 + -1;
  if (DAT_7100af8558 == 0) {
    FUN_7100066ce0(&DAT_7100af2130);
  }
  DAT_7100af8560 = DAT_7100af8560 + -1;
  if (DAT_7100af8560 != 0) {
    return;
  }
  FUN_7100066ce0(&DAT_7100af21a8);
  return;
}



// ===== FUN_7100008424 @ 7100008424 (size=156) =====

void FUN_7100008424(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x548) + -1;
  *(long *)(param_2 + 0x548) = lVar1;
  if (lVar1 == 0) {
    FUN_7100066ce0(&DAT_7100af2040);
  }
  DAT_7100af8550 = DAT_7100af8550 + -1;
  if (DAT_7100af8550 == 0) {
    FUN_7100066ce0(&DAT_7100af20b8);
  }
  DAT_7100af8558 = DAT_7100af8558 + -1;
  if (DAT_7100af8558 == 0) {
    FUN_7100066ce0(&DAT_7100af2130);
  }
  DAT_7100af8560 = DAT_7100af8560 + -1;
  if (DAT_7100af8560 != 0) {
    return;
  }
  FUN_7100066ce0(&DAT_7100af21a8);
  return;
}



// ===== FUN_71000084c0 @ 71000084c0 (size=4) =====

void FUN_71000084c0(void)

{
  DAT_7100af8548 = DAT_7100af8548 + -1;
  if (DAT_7100af8548 == 0) {
    FUN_7100066ce0(&DAT_7100af2040);
  }
  DAT_7100af8550 = DAT_7100af8550 + -1;
  if (DAT_7100af8550 == 0) {
    FUN_7100066ce0(&DAT_7100af20b8);
  }
  DAT_7100af8558 = DAT_7100af8558 + -1;
  if (DAT_7100af8558 == 0) {
    FUN_7100066ce0(&DAT_7100af2130);
  }
  DAT_7100af8560 = DAT_7100af8560 + -1;
  if (DAT_7100af8560 != 0) {
    return;
  }
  FUN_7100066ce0(&DAT_7100af21a8);
  return;
}



// ===== FUN_71000084c4 @ 71000084c4 (size=156) =====

void FUN_71000084c4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x548) + -1;
  *(long *)(param_2 + 0x548) = lVar1;
  if (lVar1 == 0) {
    FUN_7100066ce0(&DAT_7100af2040);
  }
  DAT_7100af8550 = DAT_7100af8550 + -1;
  if (DAT_7100af8550 == 0) {
    FUN_7100066ce0(&DAT_7100af20b8);
  }
  DAT_7100af8558 = DAT_7100af8558 + -1;
  if (DAT_7100af8558 == 0) {
    FUN_7100066ce0(&DAT_7100af2130);
  }
  DAT_7100af8560 = DAT_7100af8560 + -1;
  if (DAT_7100af8560 != 0) {
    return;
  }
  FUN_7100066ce0(&DAT_7100af21a8);
  return;
}



// ===== FUN_7100008560 @ 7100008560 (size=4) =====

void FUN_7100008560(void)

{
  DAT_7100af8548 = DAT_7100af8548 + -1;
  if (DAT_7100af8548 == 0) {
    FUN_7100066ce0(&DAT_7100af2040);
  }
  DAT_7100af8550 = DAT_7100af8550 + -1;
  if (DAT_7100af8550 == 0) {
    FUN_7100066ce0(&DAT_7100af20b8);
  }
  DAT_7100af8558 = DAT_7100af8558 + -1;
  if (DAT_7100af8558 == 0) {
    FUN_7100066ce0(&DAT_7100af2130);
  }
  DAT_7100af8560 = DAT_7100af8560 + -1;
  if (DAT_7100af8560 != 0) {
    return;
  }
  FUN_7100066ce0(&DAT_7100af21a8);
  return;
}



// ===== FUN_7100008564 @ 7100008564 (size=156) =====

void FUN_7100008564(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x548) + -1;
  *(long *)(param_2 + 0x548) = lVar1;
  if (lVar1 == 0) {
    FUN_7100066ce0(&DAT_7100af2040);
  }
  DAT_7100af8550 = DAT_7100af8550 + -1;
  if (DAT_7100af8550 == 0) {
    FUN_7100066ce0(&DAT_7100af20b8);
  }
  DAT_7100af8558 = DAT_7100af8558 + -1;
  if (DAT_7100af8558 == 0) {
    FUN_7100066ce0(&DAT_7100af2130);
  }
  DAT_7100af8560 = DAT_7100af8560 + -1;
  if (DAT_7100af8560 != 0) {
    return;
  }
  FUN_7100066ce0(&DAT_7100af21a8);
  return;
}



// ===== FUN_7100008600 @ 7100008600 (size=4) =====

void FUN_7100008600(void)

{
  DAT_7100af8548 = DAT_7100af8548 + -1;
  if (DAT_7100af8548 == 0) {
    FUN_7100066ce0(&DAT_7100af2040);
  }
  DAT_7100af8550 = DAT_7100af8550 + -1;
  if (DAT_7100af8550 == 0) {
    FUN_7100066ce0(&DAT_7100af20b8);
  }
  DAT_7100af8558 = DAT_7100af8558 + -1;
  if (DAT_7100af8558 == 0) {
    FUN_7100066ce0(&DAT_7100af2130);
  }
  DAT_7100af8560 = DAT_7100af8560 + -1;
  if (DAT_7100af8560 != 0) {
    return;
  }
  FUN_7100066ce0(&DAT_7100af21a8);
  return;
}



// ===== FUN_7100008604 @ 7100008604 (size=156) =====

void FUN_7100008604(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x548) + -1;
  *(long *)(param_2 + 0x548) = lVar1;
  if (lVar1 == 0) {
    FUN_7100066ce0(&DAT_7100af2040);
  }
  DAT_7100af8550 = DAT_7100af8550 + -1;
  if (DAT_7100af8550 == 0) {
    FUN_7100066ce0(&DAT_7100af20b8);
  }
  DAT_7100af8558 = DAT_7100af8558 + -1;
  if (DAT_7100af8558 == 0) {
    FUN_7100066ce0(&DAT_7100af2130);
  }
  DAT_7100af8560 = DAT_7100af8560 + -1;
  if (DAT_7100af8560 != 0) {
    return;
  }
  FUN_7100066ce0(&DAT_7100af21a8);
  return;
}



// ===== FUN_71000086b0 @ 71000086b0 (size=4) =====

void FUN_71000086b0(void)

{
  DAT_7100af8548 = DAT_7100af8548 + -1;
  if (DAT_7100af8548 == 0) {
    FUN_7100066ce0(&DAT_7100af2040);
  }
  DAT_7100af8550 = DAT_7100af8550 + -1;
  if (DAT_7100af8550 == 0) {
    FUN_7100066ce0(&DAT_7100af20b8);
  }
  DAT_7100af8558 = DAT_7100af8558 + -1;
  if (DAT_7100af8558 == 0) {
    FUN_7100066ce0(&DAT_7100af2130);
  }
  DAT_7100af8560 = DAT_7100af8560 + -1;
  if (DAT_7100af8560 != 0) {
    return;
  }
  FUN_7100066ce0(&DAT_7100af21a8);
  return;
}



// ===== FUN_71000086b4 @ 71000086b4 (size=156) =====

void FUN_71000086b4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x548) + -1;
  *(long *)(param_2 + 0x548) = lVar1;
  if (lVar1 == 0) {
    FUN_7100066ce0(&DAT_7100af2040);
  }
  DAT_7100af8550 = DAT_7100af8550 + -1;
  if (DAT_7100af8550 == 0) {
    FUN_7100066ce0(&DAT_7100af20b8);
  }
  DAT_7100af8558 = DAT_7100af8558 + -1;
  if (DAT_7100af8558 == 0) {
    FUN_7100066ce0(&DAT_7100af2130);
  }
  DAT_7100af8560 = DAT_7100af8560 + -1;
  if (DAT_7100af8560 != 0) {
    return;
  }
  FUN_7100066ce0(&DAT_7100af21a8);
  return;
}



// ===== FUN_7100008750 @ 7100008750 (size=276) =====

void FUN_7100008750(void)

{
  FUN_710004f7e0(0x7100d0bdb8);
  FUN_710004f7e0(0x7100d0bda0);
  FUN_710004f7e0(0x7100d0bd88);
  FUN_710004f7e0(0x7100d0bd70);
  FUN_710004f7e0(0x7100d0bd58);
  FUN_710004f7e0(0x7100d0bd40);
  FUN_710004f7e0(0x7100d0bd28);
  FUN_710004f7e0(0x7100d0bd10);
  FUN_710004f7e0(0x7100d0bcf8);
  FUN_710004f7e0(0x7100d0bce0);
  FUN_710004f7e0(0x7100d0bcc8);
  FUN_710004f7e0(0x7100d0bcb0);
  FUN_710004f7e0(0x7100d0bc98);
  FUN_710004f7e0(0x7100d0bc80);
  FUN_710004f7e0(0x7100d0bc68);
  FUN_710004f7e0(0x7100d0bc50);
  FUN_710004f7e0(0x7100d0bc38);
  FUN_710004f7e0(0x7100d0bc20);
  FUN_710004f7e0(0x7100d0bc08);
  FUN_710004f7e0(0x7100d0bbf0);
  FUN_710004f7e0(0x7100d0bbd8);
  FUN_710004f7e0(0x7100d0bbc0);
  FUN_710004f7e0(0x7100d0bba8);
  FUN_710004f7e0(0x7100d0bb90);
  FUN_710004f7e0(0x7100d0bb78);
  FUN_710004f7e0(0x7100d0bb60);
  FUN_710004f7e0(0x7100d0bb48);
  FUN_710004f7e0(0x7100d0bb30);
  FUN_710004f7e0(0x7100d0bb18);
  FUN_710004f7e0(0x7100d0bb00);
  FUN_710004f7e0(0x7100d0bae8);
  return;
}



// ===== FUN_7100008878 @ 7100008878 (size=188) =====

void FUN_7100008878(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + 0x18) != param_2 + 8) {
    (*(code *)PTR_thunk_FUN_710081c200_7100af34c0)();
  }
  DAT_7100af8548 = DAT_7100af8548 + -1;
  if (DAT_7100af8548 == 0) {
    FUN_7100066ce0(&DAT_7100af2040);
  }
  DAT_7100af8550 = DAT_7100af8550 + -1;
  if (DAT_7100af8550 == 0) {
    FUN_7100066ce0(&DAT_7100af20b8);
  }
  DAT_7100af8558 = DAT_7100af8558 + -1;
  if (DAT_7100af8558 == 0) {
    FUN_7100066ce0(&DAT_7100af2130);
  }
  DAT_7100af8560 = DAT_7100af8560 + -1;
  if (DAT_7100af8560 != 0) {
    return;
  }
  FUN_7100066ce0(&DAT_7100af21a8);
  return;
}



// ===== FUN_7100008940 @ 7100008940 (size=276) =====

void FUN_7100008940(void)

{
  FUN_710004f7e0(0x7100d0c0c8);
  FUN_710004f7e0(0x7100d0c0b0);
  FUN_710004f7e0(0x7100d0c098);
  FUN_710004f7e0(0x7100d0c080);
  FUN_710004f7e0(0x7100d0c068);
  FUN_710004f7e0(0x7100d0c050);
  FUN_710004f7e0(0x7100d0c038);
  FUN_710004f7e0(0x7100d0c020);
  FUN_710004f7e0(0x7100d0c008);
  FUN_710004f7e0(0x7100d0bff0);
  FUN_710004f7e0(0x7100d0bfd8);
  FUN_710004f7e0(0x7100d0bfc0);
  FUN_710004f7e0(0x7100d0bfa8);
  FUN_710004f7e0(0x7100d0bf90);
  FUN_710004f7e0(0x7100d0bf78);
  FUN_710004f7e0(0x7100d0bf60);
  FUN_710004f7e0(0x7100d0bf48);
  FUN_710004f7e0(0x7100d0bf30);
  FUN_710004f7e0(0x7100d0bf18);
  FUN_710004f7e0(0x7100d0bf00);
  FUN_710004f7e0(0x7100d0bee8);
  FUN_710004f7e0(0x7100d0bed0);
  FUN_710004f7e0(0x7100d0beb8);
  FUN_710004f7e0(0x7100d0bea0);
  FUN_710004f7e0(0x7100d0be88);
  FUN_710004f7e0(0x7100d0be70);
  FUN_710004f7e0(0x7100d0be58);
  FUN_710004f7e0(0x7100d0be40);
  FUN_710004f7e0(0x7100d0be28);
  FUN_710004f7e0(0x7100d0be10);
  FUN_710004f7e0(0x7100d0bdf8);
  return;
}



// ===== FUN_7100008a60 @ 7100008a60 (size=276) =====

void FUN_7100008a60(void)

{
  FUN_710004f7e0(0x7100d0c0f8);
  FUN_710004f7e0(0x7100d0c0e0);
  FUN_710004f7e0(0x7100d0c110);
  FUN_710004f7e0(0x7100d0c3b0);
  FUN_710004f7e0(0x7100d0c398);
  FUN_710004f7e0(0x7100d0c380);
  FUN_710004f7e0(0x7100d0c368);
  FUN_710004f7e0(0x7100d0c350);
  FUN_710004f7e0(0x7100d0c338);
  FUN_710004f7e0(0x7100d0c320);
  FUN_710004f7e0(0x7100d0c308);
  FUN_710004f7e0(0x7100d0c2f0);
  FUN_710004f7e0(0x7100d0c2d8);
  FUN_710004f7e0(0x7100d0c2c0);
  FUN_710004f7e0(0x7100d0c2a8);
  FUN_710004f7e0(0x7100d0c290);
  FUN_710004f7e0(0x7100d0c278);
  FUN_710004f7e0(0x7100d0c260);
  FUN_710004f7e0(0x7100d0c248);
  FUN_710004f7e0(0x7100d0c230);
  FUN_710004f7e0(0x7100d0c218);
  FUN_710004f7e0(0x7100d0c200);
  FUN_710004f7e0(0x7100d0c1e8);
  FUN_710004f7e0(0x7100d0c1d0);
  FUN_710004f7e0(0x7100d0c1b8);
  FUN_710004f7e0(0x7100d0c1a0);
  FUN_710004f7e0(0x7100d0c188);
  FUN_710004f7e0(0x7100d0c170);
  FUN_710004f7e0(0x7100d0c158);
  FUN_710004f7e0(0x7100d0c140);
  FUN_710004f7e0(0x7100d0c128);
  return;
}



// ===== FUN_7100008b80 @ 7100008b80 (size=4) =====

void FUN_7100008b80(void)

{
  DAT_7100af8548 = DAT_7100af8548 + -1;
  if (DAT_7100af8548 == 0) {
    FUN_7100066ce0(&DAT_7100af2040);
  }
  DAT_7100af8550 = DAT_7100af8550 + -1;
  if (DAT_7100af8550 == 0) {
    FUN_7100066ce0(&DAT_7100af20b8);
  }
  DAT_7100af8558 = DAT_7100af8558 + -1;
  if (DAT_7100af8558 == 0) {
    FUN_7100066ce0(&DAT_7100af2130);
  }
  DAT_7100af8560 = DAT_7100af8560 + -1;
  if (DAT_7100af8560 != 0) {
    return;
  }
  FUN_7100066ce0(&DAT_7100af21a8);
  return;
}



// ===== FUN_7100008b84 @ 7100008b84 (size=156) =====

void FUN_7100008b84(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x548) + -1;
  *(long *)(param_2 + 0x548) = lVar1;
  if (lVar1 == 0) {
    FUN_7100066ce0(&DAT_7100af2040);
  }
  DAT_7100af8550 = DAT_7100af8550 + -1;
  if (DAT_7100af8550 == 0) {
    FUN_7100066ce0(&DAT_7100af20b8);
  }
  DAT_7100af8558 = DAT_7100af8558 + -1;
  if (DAT_7100af8558 == 0) {
    FUN_7100066ce0(&DAT_7100af2130);
  }
  DAT_7100af8560 = DAT_7100af8560 + -1;
  if (DAT_7100af8560 != 0) {
    return;
  }
  FUN_7100066ce0(&DAT_7100af21a8);
  return;
}



// ===== FUN_7100008c20 @ 7100008c20 (size=4) =====

void FUN_7100008c20(void)

{
  DAT_7100af8548 = DAT_7100af8548 + -1;
  if (DAT_7100af8548 == 0) {
    FUN_7100066ce0(&DAT_7100af2040);
  }
  DAT_7100af8550 = DAT_7100af8550 + -1;
  if (DAT_7100af8550 == 0) {
    FUN_7100066ce0(&DAT_7100af20b8);
  }
  DAT_7100af8558 = DAT_7100af8558 + -1;
  if (DAT_7100af8558 == 0) {
    FUN_7100066ce0(&DAT_7100af2130);
  }
  DAT_7100af8560 = DAT_7100af8560 + -1;
  if (DAT_7100af8560 != 0) {
    return;
  }
  FUN_7100066ce0(&DAT_7100af21a8);
  return;
}



// ===== FUN_7100008c24 @ 7100008c24 (size=156) =====

void FUN_7100008c24(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x548) + -1;
  *(long *)(param_2 + 0x548) = lVar1;
  if (lVar1 == 0) {
    FUN_7100066ce0(&DAT_7100af2040);
  }
  DAT_7100af8550 = DAT_7100af8550 + -1;
  if (DAT_7100af8550 == 0) {
    FUN_7100066ce0(&DAT_7100af20b8);
  }
  DAT_7100af8558 = DAT_7100af8558 + -1;
  if (DAT_7100af8558 == 0) {
    FUN_7100066ce0(&DAT_7100af2130);
  }
  DAT_7100af8560 = DAT_7100af8560 + -1;
  if (DAT_7100af8560 != 0) {
    return;
  }
  FUN_7100066ce0(&DAT_7100af21a8);
  return;
}



// ===== FUN_7100008cc0 @ 7100008cc0 (size=4) =====

void FUN_7100008cc0(void)

{
  DAT_7100af8548 = DAT_7100af8548 + -1;
  if (DAT_7100af8548 == 0) {
    FUN_7100066ce0(&DAT_7100af2040);
  }
  DAT_7100af8550 = DAT_7100af8550 + -1;
  if (DAT_7100af8550 == 0) {
    FUN_7100066ce0(&DAT_7100af20b8);
  }
  DAT_7100af8558 = DAT_7100af8558 + -1;
  if (DAT_7100af8558 == 0) {
    FUN_7100066ce0(&DAT_7100af2130);
  }
  DAT_7100af8560 = DAT_7100af8560 + -1;
  if (DAT_7100af8560 != 0) {
    return;
  }
  FUN_7100066ce0(&DAT_7100af21a8);
  return;
}



// ===== FUN_7100008cc4 @ 7100008cc4 (size=156) =====

void FUN_7100008cc4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x548) + -1;
  *(long *)(param_2 + 0x548) = lVar1;
  if (lVar1 == 0) {
    FUN_7100066ce0(&DAT_7100af2040);
  }
  DAT_7100af8550 = DAT_7100af8550 + -1;
  if (DAT_7100af8550 == 0) {
    FUN_7100066ce0(&DAT_7100af20b8);
  }
  DAT_7100af8558 = DAT_7100af8558 + -1;
  if (DAT_7100af8558 == 0) {
    FUN_7100066ce0(&DAT_7100af2130);
  }
  DAT_7100af8560 = DAT_7100af8560 + -1;
  if (DAT_7100af8560 != 0) {
    return;
  }
  FUN_7100066ce0(&DAT_7100af21a8);
  return;
}



// ===== FUN_7100008d60 @ 7100008d60 (size=820) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100008d60(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  plVar8 = _DAT_7100d0c9e8;
  if (_DAT_7100d0c9e8 != (long *)0x0) {
    plVar4 = _DAT_7100d0c9e8 + 1;
    if (*plVar4 == 0x100000001) {
      pcVar7 = *(code **)(*_DAT_7100d0c9e8 + 0x10);
      _DAT_7100d0c9e8[1] = 0;
      (*pcVar7)(plVar8);
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    else {
      do {
        iVar3 = (int)*plVar4 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *(int *)plVar4 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 == 0) {
        FUN_71000a22d0(plVar8);
      }
    }
  }
  lVar11 = 3;
  FUN_71007b0080(0x7100d0c9d8);
  FUN_71007e21a0(0x7100d0c9b0);
  FUN_71007e21a0(0x7100d0c990);
  plVar8 = (long *)0x7100d0c990;
  do {
    plVar4 = (long *)plVar8[-4];
    if (plVar4 != plVar8 + -2) {
      thunk_FUN_710081c200(plVar4,plVar8[-2] + 1);
    }
    lVar11 = lVar11 + -1;
    plVar8 = plVar8 + -4;
  } while (lVar11 != 0);
  lVar11 = 2;
  puVar9 = (undefined8 *)&DAT_7100d0c910;
  puVar5 = _DAT_7100d0c910;
  puVar10 = puVar9;
  if (_DAT_7100d0c910 == (undefined8 *)&DAT_7100d0c920) goto LAB_7100008e20;
  do {
    thunk_FUN_710081c200(puVar5,puVar9[2] + 1);
    puVar10 = puVar9;
LAB_7100008e20:
    do {
      if (lVar11 == 1) {
        lVar11 = 2;
        puVar9 = (undefined8 *)&DAT_7100d0c8d0;
        puVar5 = _DAT_7100d0c8d0;
        puVar10 = puVar9;
        if (_DAT_7100d0c8d0 == (undefined8 *)&DAT_7100d0c8e0) goto LAB_7100008e70;
        do {
          thunk_FUN_710081c200(puVar5,puVar9[2] + 1);
          puVar10 = puVar9;
LAB_7100008e70:
          do {
            if (lVar11 == 1) {
              lVar11 = 2;
              puVar9 = (undefined8 *)&DAT_7100d0c890;
              puVar5 = _DAT_7100d0c890;
              puVar10 = puVar9;
              if (_DAT_7100d0c890 == (undefined8 *)&DAT_7100d0c8a0) goto LAB_7100008ec0;
              do {
                thunk_FUN_710081c200(puVar5,puVar9[2] + 1);
                puVar10 = puVar9;
LAB_7100008ec0:
                do {
                  if (lVar11 == 1) {
                    puVar5 = (undefined8 *)&DAT_7100d0c870;
                    do {
                      puVar10 = puVar5 + -4;
                      if ((undefined8 *)*puVar10 != puVar5 + -2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar10,puVar5[-2] + 1);
                      }
                      puVar5 = puVar10;
                    } while (puVar10 != (undefined8 *)&DAT_7100d0c790);
                    FUN_71007e21a0(0x7100d0c770);
                    puVar5 = (undefined8 *)&DAT_7100d0c750;
                    while( true ) {
                      if ((undefined8 *)*puVar5 != puVar5 + 2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar5,puVar5[2] + 1);
                      }
                      if (puVar5 == (undefined8 *)&DAT_7100d0c510) break;
                      puVar5 = puVar5 + -4;
                    }
                    puVar5 = (undefined8 *)&DAT_7100d0c510;
                    do {
                      puVar10 = puVar5 + -4;
                      if ((undefined8 *)*puVar10 != puVar5 + -2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar10,puVar5[-2] + 1);
                      }
                      puVar5 = puVar10;
                    } while (puVar10 != (undefined8 *)&DAT_7100d0c490);
                    puVar5 = (undefined8 *)&DAT_7100d0c470;
                    while( true ) {
                      if ((undefined8 *)*puVar5 != puVar5 + 2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar5,puVar5[2] + 1);
                      }
                      if (puVar5 == (undefined8 *)&DAT_7100d0c3d0) break;
                      puVar5 = puVar5 + -4;
                    }
                    DAT_7100af8548 = DAT_7100af8548 + -1;
                    if (DAT_7100af8548 == 0) {
                      FUN_7100066ce0(&DAT_7100af2040);
                    }
                    DAT_7100af8550 = DAT_7100af8550 + -1;
                    if (DAT_7100af8550 == 0) {
                      FUN_7100066ce0(&DAT_7100af20b8);
                    }
                    DAT_7100af8558 = DAT_7100af8558 + -1;
                    if (DAT_7100af8558 == 0) {
                      FUN_7100066ce0(&DAT_7100af2130);
                    }
                    DAT_7100af8560 = DAT_7100af8560 + -1;
                    if (DAT_7100af8560 == 0) {
                      FUN_7100066ce0(&DAT_7100af21a8);
                      return;
                    }
                    return;
                  }
                  puVar9 = puVar10 + -4;
                  lVar11 = 1;
                  puVar6 = puVar10 + -2;
                  puVar5 = (undefined8 *)*puVar9;
                  puVar10 = puVar9;
                } while (puVar5 == puVar6);
              } while( true );
            }
            puVar9 = puVar10 + -4;
            lVar11 = 1;
            puVar6 = puVar10 + -2;
            puVar5 = (undefined8 *)*puVar9;
            puVar10 = puVar9;
          } while (puVar5 == puVar6);
        } while( true );
      }
      puVar9 = puVar10 + -4;
      lVar11 = 1;
      puVar6 = puVar10 + -2;
      puVar5 = (undefined8 *)*puVar9;
      puVar10 = puVar9;
    } while (puVar5 == puVar6);
  } while( true );
}



// ===== FUN_71000090a0 @ 71000090a0 (size=724) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000090a0(void)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  lVar7 = 3;
  FUN_71000e1a40(0x7100d0c9f0);
  FUN_71007e21a0(&DAT_7100d0ca10);
  FUN_71007e21a0(0x7100d0cff0);
  plVar4 = (long *)0x7100d0cff0;
  do {
    plVar1 = (long *)plVar4[-4];
    if (plVar1 != plVar4 + -2) {
      thunk_FUN_710081c200(plVar1,plVar4[-2] + 1);
    }
    lVar7 = lVar7 + -1;
    plVar4 = plVar4 + -4;
  } while (lVar7 != 0);
  lVar7 = 2;
  puVar5 = (undefined8 *)&DAT_7100d0cf70;
  puVar2 = _DAT_7100d0cf70;
  puVar6 = puVar5;
  if (_DAT_7100d0cf70 == (undefined8 *)&DAT_7100d0cf80) goto LAB_710000912c;
  do {
    thunk_FUN_710081c200(puVar2,puVar5[2] + 1);
    puVar6 = puVar5;
LAB_710000912c:
    do {
      if (lVar7 == 1) {
        lVar7 = 2;
        puVar5 = (undefined8 *)&DAT_7100d0cf30;
        puVar2 = _DAT_7100d0cf30;
        puVar6 = puVar5;
        if (_DAT_7100d0cf30 == (undefined8 *)&DAT_7100d0cf40) goto LAB_710000917c;
        do {
          thunk_FUN_710081c200(puVar2,puVar5[2] + 1);
          puVar6 = puVar5;
LAB_710000917c:
          do {
            if (lVar7 == 1) {
              lVar7 = 2;
              puVar5 = (undefined8 *)&DAT_7100d0cef0;
              puVar2 = _DAT_7100d0cef0;
              puVar6 = puVar5;
              if (_DAT_7100d0cef0 == (undefined8 *)&DAT_7100d0cf00) goto LAB_71000091cc;
              do {
                thunk_FUN_710081c200(puVar2,puVar5[2] + 1);
                puVar6 = puVar5;
LAB_71000091cc:
                do {
                  if (lVar7 == 1) {
                    puVar2 = (undefined8 *)&DAT_7100d0ced0;
                    do {
                      puVar6 = puVar2 + -4;
                      if ((undefined8 *)*puVar6 != puVar2 + -2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar6,puVar2[-2] + 1);
                      }
                      puVar2 = puVar6;
                    } while (puVar6 != (undefined8 *)&DAT_7100d0cdf0);
                    FUN_71007e21a0(0x7100d0cdd0);
                    puVar2 = (undefined8 *)&DAT_7100d0cdb0;
                    while( true ) {
                      if ((undefined8 *)*puVar2 != puVar2 + 2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar2,puVar2[2] + 1);
                      }
                      if (puVar2 == (undefined8 *)&DAT_7100d0cb70) break;
                      puVar2 = puVar2 + -4;
                    }
                    puVar2 = (undefined8 *)&DAT_7100d0cb70;
                    do {
                      puVar6 = puVar2 + -4;
                      if ((undefined8 *)*puVar6 != puVar2 + -2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar6,puVar2[-2] + 1);
                      }
                      puVar2 = puVar6;
                    } while (puVar6 != (undefined8 *)&DAT_7100d0caf0);
                    puVar2 = (undefined8 *)&DAT_7100d0cad0;
                    while( true ) {
                      if ((undefined8 *)*puVar2 != puVar2 + 2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar2,puVar2[2] + 1);
                      }
                      if (puVar2 == (undefined8 *)&DAT_7100d0ca30) break;
                      puVar2 = puVar2 + -4;
                    }
                    DAT_7100af8548 = DAT_7100af8548 + -1;
                    if (DAT_7100af8548 == 0) {
                      FUN_7100066ce0(&DAT_7100af2040);
                    }
                    DAT_7100af8550 = DAT_7100af8550 + -1;
                    if (DAT_7100af8550 == 0) {
                      FUN_7100066ce0(&DAT_7100af20b8);
                    }
                    DAT_7100af8558 = DAT_7100af8558 + -1;
                    if (DAT_7100af8558 == 0) {
                      FUN_7100066ce0(&DAT_7100af2130);
                    }
                    DAT_7100af8560 = DAT_7100af8560 + -1;
                    if (DAT_7100af8560 == 0) {
                      FUN_7100066ce0(&DAT_7100af21a8);
                      return;
                    }
                    return;
                  }
                  puVar5 = puVar6 + -4;
                  lVar7 = 1;
                  puVar3 = puVar6 + -2;
                  puVar2 = (undefined8 *)*puVar5;
                  puVar6 = puVar5;
                } while (puVar2 == puVar3);
              } while( true );
            }
            puVar5 = puVar6 + -4;
            lVar7 = 1;
            puVar3 = puVar6 + -2;
            puVar2 = (undefined8 *)*puVar5;
            puVar6 = puVar5;
          } while (puVar2 == puVar3);
        } while( true );
      }
      puVar5 = puVar6 + -4;
      lVar7 = 1;
      puVar3 = puVar6 + -2;
      puVar2 = (undefined8 *)*puVar5;
      puVar6 = puVar5;
    } while (puVar2 == puVar3);
  } while( true );
}



// ===== FUN_7100009380 @ 7100009380 (size=720) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100009380(void)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  lVar7 = 3;
  FUN_71000e1a40(0x7100d0d610);
  FUN_71007e21a0(0x7100d0d5f0);
  FUN_71007e21a0(0x7100d0d5d0);
  plVar4 = (long *)0x7100d0d5d0;
  do {
    plVar1 = (long *)plVar4[-4];
    if (plVar1 != plVar4 + -2) {
      thunk_FUN_710081c200(plVar1,plVar4[-2] + 1);
    }
    lVar7 = lVar7 + -1;
    plVar4 = plVar4 + -4;
  } while (lVar7 != 0);
  lVar7 = 2;
  puVar5 = (undefined8 *)&DAT_7100d0d550;
  puVar2 = _DAT_7100d0d550;
  puVar6 = puVar5;
  if (_DAT_7100d0d550 == (undefined8 *)&DAT_7100d0d560) goto LAB_710000940c;
  do {
    thunk_FUN_710081c200(puVar2,puVar5[2] + 1);
    puVar6 = puVar5;
LAB_710000940c:
    do {
      if (lVar7 == 1) {
        lVar7 = 2;
        puVar5 = (undefined8 *)&DAT_7100d0d510;
        puVar2 = _DAT_7100d0d510;
        puVar6 = puVar5;
        if (_DAT_7100d0d510 == (undefined8 *)&DAT_7100d0d520) goto LAB_710000945c;
        do {
          thunk_FUN_710081c200(puVar2,puVar5[2] + 1);
          puVar6 = puVar5;
LAB_710000945c:
          do {
            if (lVar7 == 1) {
              lVar7 = 2;
              puVar5 = (undefined8 *)&DAT_7100d0d4d0;
              puVar2 = _DAT_7100d0d4d0;
              puVar6 = puVar5;
              if (_DAT_7100d0d4d0 == (undefined8 *)&DAT_7100d0d4e0) goto LAB_71000094ac;
              do {
                thunk_FUN_710081c200(puVar2,puVar5[2] + 1);
                puVar6 = puVar5;
LAB_71000094ac:
                do {
                  if (lVar7 == 1) {
                    puVar2 = (undefined8 *)&DAT_7100d0d4b0;
                    do {
                      puVar6 = puVar2 + -4;
                      if ((undefined8 *)*puVar6 != puVar2 + -2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar6,puVar2[-2] + 1);
                      }
                      puVar2 = puVar6;
                    } while (puVar6 != (undefined8 *)&DAT_7100d0d3d0);
                    FUN_71007e21a0(0x7100d0d3b0);
                    puVar2 = (undefined8 *)&DAT_7100d0d390;
                    while( true ) {
                      if ((undefined8 *)*puVar2 != puVar2 + 2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar2,puVar2[2] + 1);
                      }
                      if (puVar2 == (undefined8 *)&DAT_7100d0d150) break;
                      puVar2 = puVar2 + -4;
                    }
                    puVar2 = (undefined8 *)&DAT_7100d0d150;
                    do {
                      puVar6 = puVar2 + -4;
                      if ((undefined8 *)*puVar6 != puVar2 + -2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar6,puVar2[-2] + 1);
                      }
                      puVar2 = puVar6;
                    } while (puVar6 != (undefined8 *)&DAT_7100d0d0d0);
                    puVar2 = (undefined8 *)&DAT_7100d0d0b0;
                    while( true ) {
                      if ((undefined8 *)*puVar2 != puVar2 + 2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar2,puVar2[2] + 1);
                      }
                      if (puVar2 == (undefined8 *)&DAT_7100d0d010) break;
                      puVar2 = puVar2 + -4;
                    }
                    DAT_7100af8548 = DAT_7100af8548 + -1;
                    if (DAT_7100af8548 == 0) {
                      FUN_7100066ce0(&DAT_7100af2040);
                    }
                    DAT_7100af8550 = DAT_7100af8550 + -1;
                    if (DAT_7100af8550 == 0) {
                      FUN_7100066ce0(&DAT_7100af20b8);
                    }
                    DAT_7100af8558 = DAT_7100af8558 + -1;
                    if (DAT_7100af8558 == 0) {
                      FUN_7100066ce0(&DAT_7100af2130);
                    }
                    DAT_7100af8560 = DAT_7100af8560 + -1;
                    if (DAT_7100af8560 == 0) {
                      FUN_7100066ce0(&DAT_7100af21a8);
                      return;
                    }
                    return;
                  }
                  puVar5 = puVar6 + -4;
                  lVar7 = 1;
                  puVar3 = puVar6 + -2;
                  puVar2 = (undefined8 *)*puVar5;
                  puVar6 = puVar5;
                } while (puVar2 == puVar3);
              } while( true );
            }
            puVar5 = puVar6 + -4;
            lVar7 = 1;
            puVar3 = puVar6 + -2;
            puVar2 = (undefined8 *)*puVar5;
            puVar6 = puVar5;
          } while (puVar2 == puVar3);
        } while( true );
      }
      puVar5 = puVar6 + -4;
      lVar7 = 1;
      puVar3 = puVar6 + -2;
      puVar2 = (undefined8 *)*puVar5;
      puVar6 = puVar5;
    } while (puVar2 == puVar3);
  } while( true );
}



// ===== FUN_7100009650 @ 7100009650 (size=736) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100009650(void)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if (_DAT_7100d0dc48 != 0) {
    FUN_71000a2330();
  }
  lVar7 = 3;
  FUN_71007b0080(&DAT_7100d0dc38);
  FUN_71007e21a0(0x7100d0dc10);
  FUN_71007e21a0(0x7100d0dbf0);
  plVar4 = (long *)0x7100d0dbf0;
  do {
    plVar1 = (long *)plVar4[-4];
    if (plVar1 != plVar4 + -2) {
      thunk_FUN_710081c200(plVar1,plVar4[-2] + 1);
    }
    lVar7 = lVar7 + -1;
    plVar4 = plVar4 + -4;
  } while (lVar7 != 0);
  lVar7 = 2;
  puVar5 = (undefined8 *)&DAT_7100d0db70;
  puVar2 = _DAT_7100d0db70;
  puVar6 = puVar5;
  if (_DAT_7100d0db70 == (undefined8 *)&DAT_7100d0db80) goto LAB_71000096ec;
  do {
    thunk_FUN_710081c200(puVar2,puVar5[2] + 1);
    puVar6 = puVar5;
LAB_71000096ec:
    do {
      if (lVar7 == 1) {
        lVar7 = 2;
        puVar5 = (undefined8 *)&DAT_7100d0db30;
        puVar2 = _DAT_7100d0db30;
        puVar6 = puVar5;
        if (_DAT_7100d0db30 == (undefined8 *)&DAT_7100d0db40) goto LAB_710000973c;
        do {
          thunk_FUN_710081c200(puVar2,puVar5[2] + 1);
          puVar6 = puVar5;
LAB_710000973c:
          do {
            if (lVar7 == 1) {
              lVar7 = 2;
              puVar5 = (undefined8 *)&DAT_7100d0daf0;
              puVar2 = _DAT_7100d0daf0;
              puVar6 = puVar5;
              if (_DAT_7100d0daf0 == (undefined8 *)&DAT_7100d0db00) goto LAB_710000978c;
              do {
                thunk_FUN_710081c200(puVar2,puVar5[2] + 1);
                puVar6 = puVar5;
LAB_710000978c:
                do {
                  if (lVar7 == 1) {
                    puVar2 = (undefined8 *)&DAT_7100d0dad0;
                    do {
                      puVar6 = puVar2 + -4;
                      if ((undefined8 *)*puVar6 != puVar2 + -2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar6,puVar2[-2] + 1);
                      }
                      puVar2 = puVar6;
                    } while (puVar6 != (undefined8 *)&DAT_7100d0d9f0);
                    FUN_71007e21a0(0x7100d0d9d0);
                    puVar2 = (undefined8 *)&DAT_7100d0d9b0;
                    while( true ) {
                      if ((undefined8 *)*puVar2 != puVar2 + 2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar2,puVar2[2] + 1);
                      }
                      if (puVar2 == (undefined8 *)&DAT_7100d0d770) break;
                      puVar2 = puVar2 + -4;
                    }
                    puVar2 = (undefined8 *)&DAT_7100d0d770;
                    do {
                      puVar6 = puVar2 + -4;
                      if ((undefined8 *)*puVar6 != puVar2 + -2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar6,puVar2[-2] + 1);
                      }
                      puVar2 = puVar6;
                    } while (puVar6 != (undefined8 *)&DAT_7100d0d6f0);
                    puVar2 = (undefined8 *)&DAT_7100d0d6d0;
                    while( true ) {
                      if ((undefined8 *)*puVar2 != puVar2 + 2) {
                        thunk_FUN_710081c200((undefined8 *)*puVar2,puVar2[2] + 1);
                      }
                      if (puVar2 == (undefined8 *)&DAT_7100d0d630) break;
                      puVar2 = puVar2 + -4;
                    }
                    DAT_7100af8548 = DAT_7100af8548 + -1;
                    if (DAT_7100af8548 == 0) {
                      FUN_7100066ce0(&DAT_7100af2040);
                    }
                    DAT_7100af8550 = DAT_7100af8550 + -1;
                    if (DAT_7100af8550 == 0) {
                      FUN_7100066ce0(&DAT_7100af20b8);
                    }
                    DAT_7100af8558 = DAT_7100af8558 + -1;
                    if (DAT_7100af8558 == 0) {
                      FUN_7100066ce0(&DAT_7100af2130);
                    }
                    DAT_7100af8560 = DAT_7100af8560 + -1;
                    if (DAT_7100af8560 == 0) {
                      FUN_7100066ce0(&DAT_7100af21a8);
                      return;
                    }
                    return;
                  }
                  puVar5 = puVar6 + -4;
                  lVar7 = 1;
                  puVar3 = puVar6 + -2;
                  puVar2 = (undefined8 *)*puVar5;
                  puVar6 = puVar5;
                } while (puVar2 == puVar3);
              } while( true );
            }
            puVar5 = puVar6 + -4;
            lVar7 = 1;
            puVar3 = puVar6 + -2;
            puVar2 = (undefined8 *)*puVar5;
            puVar6 = puVar5;
          } while (puVar2 == puVar3);
        } while( true );
      }
      puVar5 = puVar6 + -4;
      lVar7 = 1;
      puVar3 = puVar6 + -2;
      puVar2 = (undefined8 *)*puVar5;
      puVar6 = puVar5;
    } while (puVar2 == puVar3);
  } while( true );
}



// ===== FUN_7100009930 @ 7100009930 (size=400) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100009930(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  
  FUN_71005f1840(0x7100d0dd30);
  FUN_71005f1840(0x7100d0dd48);
  FUN_7100078aa0(&DAT_7100d0dd00);
  puVar7 = _DAT_7100d0ddb8;
  plVar3 = _DAT_7100d0dda8;
  plVar6 = _DAT_7100d0dda0;
  puVar9 = _DAT_7100d0dd98;
  plVar5 = _DAT_7100d0dd90;
  plVar2 = _DAT_7100d0dd80;
  puVar4 = _DAT_7100d0dd98;
  while (puVar4 = puVar4 + 1, puVar4 < puVar7) {
    plVar8 = (long *)*puVar4;
    plVar1 = plVar8 + 0x40;
    do {
      if ((long *)*plVar8 != (long *)0x0) {
        (**(code **)(*(long *)*plVar8 + 0x48))();
      }
      plVar8 = plVar8 + 1;
    } while (plVar1 != plVar8);
  }
  if (puVar9 == puVar7) {
    for (; plVar2 != plVar6; plVar2 = plVar2 + 1) {
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 0x48))();
      }
    }
  }
  else {
    for (; plVar2 != plVar5; plVar2 = plVar2 + 1) {
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 0x48))();
      }
    }
    for (; plVar6 != plVar3; plVar3 = plVar3 + 1) {
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 0x48))();
      }
    }
  }
  if (_DAT_7100d0dd70 != 0) {
    puVar4 = _DAT_7100d0ddb8 + 1;
    for (puVar9 = _DAT_7100d0dd98; puVar9 < puVar4; puVar9 = puVar9 + 1) {
      thunk_FUN_710081c200(*puVar9,0x200);
    }
    thunk_FUN_710081c200(_DAT_7100d0dd70,_DAT_7100d0dd78 << 3);
    return;
  }
  return;
}



// ===== FUN_7100009ac0 @ 7100009ac0 (size=60) =====

void FUN_7100009ac0(void)

{
  FUN_71000b7680(&DAT_7100d0dfd0);
  FUN_71000b7680(&DAT_7100d0df38);
  FUN_71000b7680(&DAT_7100d0dea0);
  FUN_71000b7680(&DAT_7100d0de08);
  return;
}



// ===== FUN_7100009b10 @ 7100009b10 (size=68) =====

void FUN_7100009b10(void)

{
  FUN_71007e21a0(0x7100d0e088);
  FUN_71007e21a0(0x7100d0e0c8);
  FUN_71007e21a0(0x7100d0e0e8);
  FUN_71007e21a0(0x7100d0e0a8);
  FUN_71007e21a0(&DAT_7100d0e108);
  return;
}



// ===== FUN_7100009b60 @ 7100009b60 (size=276) =====

void FUN_7100009b60(void)

{
  FUN_710004f7e0(0x7100d0e418);
  FUN_710004f7e0(0x7100d0e400);
  FUN_710004f7e0(0x7100d0e3e8);
  FUN_710004f7e0(0x7100d0e3d0);
  FUN_710004f7e0(0x7100d0e3b8);
  FUN_710004f7e0(0x7100d0e3a0);
  FUN_710004f7e0(0x7100d0e388);
  FUN_710004f7e0(0x7100d0e370);
  FUN_710004f7e0(0x7100d0e358);
  FUN_710004f7e0(0x7100d0e340);
  FUN_710004f7e0(0x7100d0e328);
  FUN_710004f7e0(0x7100d0e310);
  FUN_710004f7e0(0x7100d0e2f8);
  FUN_710004f7e0(0x7100d0e2e0);
  FUN_710004f7e0(0x7100d0e2c8);
  FUN_710004f7e0(0x7100d0e2b0);
  FUN_710004f7e0(0x7100d0e298);
  FUN_710004f7e0(0x7100d0e280);
  FUN_710004f7e0(0x7100d0e268);
  FUN_710004f7e0(0x7100d0e250);
  FUN_710004f7e0(0x7100d0e238);
  FUN_710004f7e0(0x7100d0e220);
  FUN_710004f7e0(0x7100d0e208);
  FUN_710004f7e0(0x7100d0e1f0);
  FUN_710004f7e0(0x7100d0e1d8);
  FUN_710004f7e0(0x7100d0e1c0);
  FUN_710004f7e0(0x7100d0e1a8);
  FUN_710004f7e0(0x7100d0e190);
  FUN_710004f7e0(0x7100d0e178);
  FUN_710004f7e0(0x7100d0e160);
  FUN_710004f7e0(0x7100d0e148);
  return;
}



// ===== FUN_7100009c90 @ 7100009c90 (size=384) =====

void FUN_7100009c90(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 == 0) {
    return;
  }
  do {
    lVar4 = *(long *)(param_1 + 0x18);
    while (lVar4 != 0) {
      lVar3 = *(long *)(lVar4 + 0x18);
      while (lVar3 != 0) {
        lVar2 = *(long *)(lVar3 + 0x18);
        while (lVar2 != 0) {
          lVar1 = *(long *)(lVar2 + 0x18);
          while (lVar1 != 0) {
            lVar5 = *(long *)(lVar1 + 0x18);
            while (lVar5 != 0) {
              lVar6 = *(long *)(lVar5 + 0x18);
              while (lVar6 != 0) {
                lVar7 = *(long *)(lVar6 + 0x18);
                while (lVar7 != 0) {
                  lVar9 = *(long *)(lVar7 + 0x18);
                  while (lVar9 != 0) {
                    FUN_7100009c90(*(undefined8 *)(lVar9 + 0x18));
                    lVar8 = *(long *)(lVar9 + 0x10);
                    thunk_FUN_710081c200(lVar9,0x28);
                    lVar9 = lVar8;
                  }
                  lVar9 = *(long *)(lVar7 + 0x10);
                  thunk_FUN_710081c200(lVar7,0x28);
                  lVar7 = lVar9;
                }
                lVar7 = *(long *)(lVar6 + 0x10);
                thunk_FUN_710081c200(lVar6,0x28);
                lVar6 = lVar7;
              }
              lVar6 = *(long *)(lVar5 + 0x10);
              thunk_FUN_710081c200(lVar5,0x28);
              lVar5 = lVar6;
            }
            lVar5 = *(long *)(lVar1 + 0x10);
            thunk_FUN_710081c200(lVar1,0x28);
            lVar1 = lVar5;
          }
          lVar1 = *(long *)(lVar2 + 0x10);
          thunk_FUN_710081c200(lVar2,0x28);
          lVar2 = lVar1;
        }
        lVar2 = *(long *)(lVar3 + 0x10);
        thunk_FUN_710081c200(lVar3,0x28);
        lVar3 = lVar2;
      }
      lVar3 = *(long *)(lVar4 + 0x10);
      thunk_FUN_710081c200(lVar4,0x28);
      lVar4 = lVar3;
    }
    lVar4 = *(long *)(param_1 + 0x10);
    thunk_FUN_710081c200(param_1,0x28);
    param_1 = lVar4;
  } while (lVar4 != 0);
  return;
}



// ===== FUN_7100009e10 @ 7100009e10 (size=496) =====

void FUN_7100009e10(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 == 0) {
    return;
  }
  do {
    lVar4 = *(long *)(param_1 + 0x18);
    while (lVar4 != 0) {
      lVar3 = *(long *)(lVar4 + 0x18);
      while (lVar3 != 0) {
        lVar2 = *(long *)(lVar3 + 0x18);
        while (lVar2 != 0) {
          lVar1 = *(long *)(lVar2 + 0x18);
          while (lVar1 != 0) {
            lVar5 = *(long *)(lVar1 + 0x18);
            while (lVar5 != 0) {
              lVar6 = *(long *)(lVar5 + 0x18);
              while (lVar6 != 0) {
                lVar7 = *(long *)(lVar6 + 0x18);
                while (lVar7 != 0) {
                  lVar9 = *(long *)(lVar7 + 0x18);
                  while (lVar9 != 0) {
                    FUN_7100009e10(*(undefined8 *)(lVar9 + 0x18));
                    lVar8 = *(long *)(lVar9 + 0x10);
                    if (*(long *)(lVar9 + 0x30) != 0) {
                      thunk_FUN_710081c200();
                    }
                    thunk_FUN_710081c200(lVar9,0x50);
                    lVar9 = lVar8;
                  }
                  lVar9 = *(long *)(lVar7 + 0x10);
                  if (*(long *)(lVar7 + 0x30) != 0) {
                    thunk_FUN_710081c200();
                  }
                  thunk_FUN_710081c200(lVar7,0x50);
                  lVar7 = lVar9;
                }
                lVar7 = *(long *)(lVar6 + 0x10);
                if (*(long *)(lVar6 + 0x30) != 0) {
                  thunk_FUN_710081c200();
                }
                thunk_FUN_710081c200(lVar6,0x50);
                lVar6 = lVar7;
              }
              lVar6 = *(long *)(lVar5 + 0x10);
              if (*(long *)(lVar5 + 0x30) != 0) {
                thunk_FUN_710081c200();
              }
              thunk_FUN_710081c200(lVar5,0x50);
              lVar5 = lVar6;
            }
            lVar5 = *(long *)(lVar1 + 0x10);
            if (*(long *)(lVar1 + 0x30) != 0) {
              thunk_FUN_710081c200();
            }
            thunk_FUN_710081c200(lVar1,0x50);
            lVar1 = lVar5;
          }
          lVar1 = *(long *)(lVar2 + 0x10);
          if (*(long *)(lVar2 + 0x30) != 0) {
            thunk_FUN_710081c200();
          }
          thunk_FUN_710081c200(lVar2,0x50);
          lVar2 = lVar1;
        }
        lVar2 = *(long *)(lVar3 + 0x10);
        if (*(long *)(lVar3 + 0x30) != 0) {
          thunk_FUN_710081c200();
        }
        thunk_FUN_710081c200(lVar3,0x50);
        lVar3 = lVar2;
      }
      lVar3 = *(long *)(lVar4 + 0x10);
      if (*(long *)(lVar4 + 0x30) != 0) {
        thunk_FUN_710081c200();
      }
      thunk_FUN_710081c200(lVar4,0x50);
      lVar4 = lVar3;
    }
    lVar4 = *(long *)(param_1 + 0x10);
    if (*(long *)(param_1 + 0x30) != 0) {
      thunk_FUN_710081c200();
    }
    thunk_FUN_710081c200(param_1,0x50);
    param_1 = lVar4;
  } while (lVar4 != 0);
  return;
}



// ===== FUN_710000a000 @ 710000a000 (size=64) =====

void FUN_710000a000(long *param_1)

{
  FUN_7100009e10(param_1[0x1f]);
  FUN_7100009c90(param_1[0x19]);
  if (*param_1 != 0) {
    thunk_FUN_710081c200();
    return;
  }
  return;
}



// ===== FUN_710000a040 @ 710000a040 (size=76) =====

void FUN_710000a040(void)

{
  FUN_710000a000(&DAT_7100d0e8b0);
  FUN_710000a000(&DAT_7100d0e798);
  FUN_710000a000(&DAT_7100d0e680);
  FUN_710000a000(&DAT_7100d0e568);
  FUN_710000a000(&DAT_7100d0e450);
  FUN_71007e21a0(&DAT_7100d0e9c8);
  return;
}



// ===== FUN_710000a0a0 @ 710000a0a0 (size=44) =====

void FUN_710000a0a0(void)

{
  FUN_710074a1e0(0x7100d14758);
  FUN_710074a210(0x7100d14758);
  return;
}



// ===== FUN_710000a0f4 @ 710000a0f4 (size=32) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000a0f4(undefined1 *param_1)

{
  *param_1 = 0;
  FUN_7100835ba0(_DAT_7100d21028);
  return;
}



// ===== FUN_710000a120 @ 710000a120 (size=56) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000a120(ulong param_1)

{
  code *pcVar1;
  
  FUN_71008338e0(param_1,0);
  if (_DAT_7100d22ec8 != (code *)0x0) {
    (*_DAT_7100d22ec8)();
  }
  FUN_7100833c00(param_1 & 0xffffffff);
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x710000a154);
  (*pcVar1)();
}



// ===== FUN_710000a160 @ 710000a160 (size=472) =====

void FUN_710000a160(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  DAT_7100af82d8 = 0;
  DAT_7100af82e0 = 0;
  DAT_7100af82e8 = 0;
  DAT_7100af82f0 = 0;
  if (((DAT_7100af8460 & 1) == 0) && (iVar1 = FUN_71007af260(&DAT_7100af8460), iVar1 != 0)) {
    DAT_7100af8468 = 0xffffffff;
    FUN_71007af440(&DAT_7100af8460);
  }
  DAT_7100af82f8 = &DAT_7100af8468;
  DAT_7100af8300 = 0;
  DAT_7100af8308 = 0;
  DAT_7100af8310 = 8;
  DAT_7100af8318 = 0;
  DAT_7100af8320 = 0;
  DAT_7100af8328 = 0;
  DAT_7100af8330 = 0;
  DAT_7100af8338 = 0;
  DAT_7100af8340 = 0;
  DAT_7100af8348 = 0;
  DAT_7100af8350 = 0;
  lVar2 = FUN_71007af5c0(0x40);
  lVar3 = lVar2 + 0x18;
  DAT_7100af8308 = lVar2;
  DAT_7100af8318 = FUN_71007af5c0(0x1f8);
  DAT_7100af8328 = DAT_7100af8318 + 0x1f8;
  *(long *)(lVar2 + 0x18) = DAT_7100af8318;
  DAT_7100af8360 = 0x3f400000;
  DAT_7100af8364 = 0;
  DAT_7100af8368 = 0;
  DAT_7100af8370 = 0;
  DAT_7100af8378 = 0;
  DAT_7100af8358 = (long)((float)(DAT_7100af82e8 - DAT_7100af82e0 >> 3) * 0.75);
  DAT_7100af8320 = DAT_7100af8318;
  DAT_7100af8330 = lVar3;
  DAT_7100af8338 = DAT_7100af8318;
  DAT_7100af8340 = DAT_7100af8318;
  DAT_7100af8348 = DAT_7100af8328;
  DAT_7100af8350 = lVar3;
  if (((DAT_7100af8450 & 1) == 0) && (iVar1 = FUN_71007af260(&DAT_7100af8450), iVar1 != 0)) {
    DAT_7100af8458 = 0xffffffff;
    FUN_71007af440(&DAT_7100af8450);
  }
  DAT_7100af8380 = &DAT_7100af8458;
  DAT_7100af8388 = 0;
  DAT_7100af8390 = 0;
  DAT_7100af8398 = 8;
  DAT_7100af83a0 = 0;
  DAT_7100af83a8 = 0;
  DAT_7100af83b0 = 0;
  DAT_7100af83b8 = 0;
  DAT_7100af83c0 = 0;
  DAT_7100af83c8 = 0;
  DAT_7100af83d0 = 0;
  DAT_7100af83d8 = 0;
  lVar3 = FUN_71007af5c0(0x40);
  DAT_7100af8390 = lVar3;
  DAT_7100af83a0 = FUN_71007af5c0(0x1e0);
  *(long *)(lVar3 + 0x18) = DAT_7100af83a0;
  DAT_7100af83a8 = DAT_7100af83a0;
  DAT_7100af83b0 = DAT_7100af83a0 + 0x1e0;
  DAT_7100af83b8 = lVar3 + 0x18;
  DAT_7100af83c0 = DAT_7100af83a0;
  DAT_7100af83c8 = DAT_7100af83a0;
  DAT_7100af83d0 = DAT_7100af83a0 + 0x1e0;
  DAT_7100af83d8 = lVar3 + 0x18;
  DAT_7100af83f8 = 0;
  DAT_7100af8400 = 0;
  DAT_7100af8408 = 0;
  DAT_7100af8410 = 0;
  DAT_7100af83e8 = 0x3f400000;
  DAT_7100af83ec = 0;
  DAT_7100af8418 = 0;
  DAT_7100af8420 = 0;
  DAT_7100af8428 = 0;
  DAT_7100af8430 = 0;
  DAT_7100af83f0 = 0;
  DAT_7100af8438 = 0;
  DAT_7100af83e0 = (long)((float)(DAT_7100af8370 - DAT_7100af8368 >> 3) * 0.75);
  DAT_7100af8440 = 1;
  return;
}



// ===== FUN_710000a400 @ 710000a400 (size=184) =====

void FUN_710000a400(long *param_1,undefined1 *param_2,ulong param_3)

{
  long *plVar1;
  ulong local_8;
  
  plVar1 = param_1 + 2;
  *param_1 = (long)plVar1;
  if (param_2 == (undefined1 *)0x0 && param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string: construction from null is not valid");
  }
  local_8 = param_3;
  if (param_3 < 0x10) {
    if (param_3 == 1) {
      *(undefined1 *)(param_1 + 2) = *param_2;
      goto LAB_710000a444;
    }
    if (param_3 == 0) goto LAB_710000a444;
  }
  else {
    plVar1 = (long *)FUN_71007e2140(param_1,&local_8,0);
    *param_1 = (long)plVar1;
    param_1[2] = local_8;
  }
  FUN_710080f900(plVar1,param_2,param_3);
LAB_710000a444:
  param_1[1] = local_8;
  *(undefined1 *)(*param_1 + local_8) = 0;
  return;
}



// ===== FUN_7100014de0 @ 7100014de0 (size=396) =====

void FUN_7100014de0(void)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = DAT_7100af8560 + 1;
  bVar2 = DAT_7100af8560 == 0;
  DAT_7100af8560 = lVar1;
  if (bVar2) {
    FUN_7100062da0(&DAT_7100af21b0,&DAT_7100838080);
    FUN_7100062da0(&DAT_7100af21d8,&DAT_7100853d20);
    FUN_7100062da0(&DAT_7100af21f8,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8558 + 1;
  bVar2 = DAT_7100af8558 == 0;
  DAT_7100af8558 = lVar1;
  if (bVar2) {
    FUN_7100062da0(&DAT_7100af2138,&DAT_7100838080);
    FUN_7100062da0(&DAT_7100af2160,&DAT_7100853d20);
    FUN_7100062da0(&DAT_7100af2180,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8550 + 1;
  bVar2 = DAT_7100af8550 == 0;
  DAT_7100af8550 = lVar1;
  if (bVar2) {
    FUN_7100062da0(&DAT_7100af20c0,&DAT_7100838080);
    FUN_7100062da0(&DAT_7100af20e8,&DAT_7100853d20);
    FUN_7100062da0(&DAT_7100af2108,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8548 + 1;
  bVar2 = DAT_7100af8548 == 0;
  DAT_7100af8548 = lVar1;
  if (bVar2) {
    FUN_7100062da0(&DAT_7100af2048,&DAT_7100838088);
    FUN_7100062da0(&DAT_7100af2070,&DAT_7100853d20);
    FUN_7100062da0(&DAT_7100af2090,&DAT_7100853d20);
  }
  FUN_7100062da0(&DAT_7100af8508,&DAT_7100853d20);
  FUN_7100062da0(&DAT_7100af8528,&DAT_7100853d20);
  FUN_7100062da0(&DAT_7100af84c0,&DAT_7100853d20);
  FUN_7100062da0(&DAT_7100af84e0,&DAT_7100853d20);
  DAT_7100af84a8 = 0;
  DAT_7100af84b0 = 0;
  DAT_7100af84b8 = 0;
  return;
}



// ===== FUN_7100015010 @ 7100015010 (size=92) =====

void FUN_7100015010(void)

{
  undefined1 auStack_8 [8];
  
  FUN_710006ec60(&DAT_7100af8568,"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/",
                 auStack_8);
  FUN_710006ec60(&DAT_7100af8588,&DAT_7100853d20,auStack_8);
  FUN_710006ec60(&DAT_7100af85a8,&DAT_7100853d20,auStack_8);
  return;
}



// ===== FUN_7100015070 @ 7100015070 (size=76) =====

void FUN_7100015070(long *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = (long)(param_1 + 2);
  if (param_2 != 0) {
    lVar1 = FUN_710081ce00(param_2);
    FUN_7100071af0(param_1,param_2,param_2 + lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003ab8("basic_string: construction from null is not valid");
}



// ===== FUN_71000150c0 @ 71000150c0 (size=624) =====

void FUN_71000150c0(void)

{
  FUN_7100015070(&DAT_7100af85c8,&DAT_7100853d20);
  FUN_7100015070(&DAT_7100af85e8,"not initialized");
  FUN_7100015070(&DAT_7100af8608,"invalid entry name");
  FUN_7100015070(&DAT_7100af8628,"entry not found");
  FUN_7100015070(&DAT_7100af8648,"invalid zip mode");
  FUN_7100015070(&DAT_7100af8668,"invalid compression level");
  FUN_7100015070(&DAT_7100af8688,"no zip 64 support");
  FUN_7100015070(&DAT_7100af86a8,"memset error");
  FUN_7100015070(&DAT_7100af86c8,"cannot write data to entry");
  FUN_7100015070(&DAT_7100af86e8,"cannot initialize tdefl compressor");
  FUN_7100015070(&DAT_7100af8708,"invalid index");
  FUN_7100015070(&DAT_7100af8728,"header not found");
  FUN_7100015070(&DAT_7100af8748,"cannot flush tdefl buffer");
  FUN_7100015070(&DAT_7100af8768,"cannot write entry header");
  FUN_7100015070(&DAT_7100af8788,"cannot create entry header");
  FUN_7100015070(&DAT_7100af87a8,"cannot write to central dir");
  FUN_7100015070(&DAT_7100af87c8,"cannot open file");
  FUN_7100015070(&DAT_7100af87e8,"invalid entry type");
  FUN_7100015070(&DAT_7100af8808,"extracting data using no memory allocation");
  FUN_7100015070(&DAT_7100af8828,"file not found");
  FUN_7100015070(&DAT_7100af8848,"no permission");
  FUN_7100015070(&DAT_7100af8868,"out of memory");
  FUN_7100015070(&DAT_7100af8888,"invalid zip archive name");
  FUN_7100015070(&DAT_7100af88a8,"make dir error");
  FUN_7100015070(&DAT_7100af88c8,"symlink error");
  FUN_7100015070(&DAT_7100af88e8,"close archive error");
  FUN_7100015070(&DAT_7100af8908,"capacity size too small");
  FUN_7100015070(&DAT_7100af8928,"fseek error");
  FUN_7100015070(&DAT_7100af8948,"fread error");
  FUN_7100015070(&DAT_7100af8968,"fwrite error");
  return;
}



// ===== FUN_71000154d0 @ 71000154d0 (size=136) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000154d0(void)

{
  FUN_71005f58c0(&DAT_7100af8df0,3,&DAT_71008388d0,0,0);
  DAT_7100af8e98 = 0;
  DAT_7100af8df0 = &PTR_FUN_7100ae7f08;
  DAT_7100af8e88 = &DAT_7100af8e98;
  DAT_7100af8e90 = 0;
  FUN_71007e25c0(&DAT_7100af8e88,0x20000);
  DAT_7100af8eb0 = 1;
  DAT_7100af8eb8 = 0;
  DAT_7100af8ef8 = 0;
  DAT_7100af8f00 = 0;
  DAT_7100af8ec8 = 0;
  uRam0000007100af8ed0 = 0;
  DAT_7100af8ed8 = 0;
  DAT_7100af8ee0 = 0;
  _DAT_7100af8ee8 = 0;
  DAT_7100af8ef0 = 0;
  DAT_7100af8f08 = 0;
  return;
}



// ===== FUN_71000155e0 @ 71000155e0 (size=180) =====

void FUN_71000155e0(long *param_1,undefined1 *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong local_8;
  
  plVar2 = param_1 + 2;
  *param_1 = (long)plVar2;
  if (param_2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string: construction from null is not valid");
  }
  uVar1 = FUN_710081ce00(param_2);
  local_8 = uVar1;
  if (uVar1 < 0x10) {
    if (uVar1 == 1) {
      *(undefined1 *)(param_1 + 2) = *param_2;
      goto LAB_710001562c;
    }
    if (uVar1 == 0) goto LAB_710001562c;
  }
  else {
    plVar2 = (long *)FUN_71007e2140(param_1,&local_8,0);
    *param_1 = (long)plVar2;
    param_1[2] = local_8;
  }
  FUN_710080f900(plVar2,param_2,uVar1);
LAB_710001562c:
  param_1[1] = local_8;
  *(undefined1 *)(*param_1 + local_8) = 0;
  return;
}



// ===== FUN_7100017190 @ 7100017190 (size=184) =====

void FUN_7100017190(long *param_1,undefined1 *param_2,ulong param_3)

{
  long *plVar1;
  ulong local_8;
  
  plVar1 = param_1 + 2;
  *param_1 = (long)plVar1;
  if (param_2 == (undefined1 *)0x0 && param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string: construction from null is not valid");
  }
  local_8 = param_3;
  if (param_3 < 0x10) {
    if (param_3 == 1) {
      *(undefined1 *)(param_1 + 2) = *param_2;
      goto LAB_71000171d4;
    }
    if (param_3 == 0) goto LAB_71000171d4;
  }
  else {
    plVar1 = (long *)FUN_71007e2140(param_1,&local_8,0);
    *param_1 = (long)plVar1;
    param_1[2] = local_8;
  }
  FUN_710080f900(plVar1,param_2,param_3);
LAB_71000171d4:
  param_1[1] = local_8;
  *(undefined1 *)(*param_1 + local_8) = 0;
  return;
}



// ===== FUN_7100019b50 @ 7100019b50 (size=120) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100019b50(void)

{
  _DAT_7100af9350 = 0;
  _DAT_7100af9358 = 0;
  _DAT_7100af9360 = &DAT_7100af9350;
  _DAT_7100af9368 = &DAT_7100af9350;
  _DAT_7100af9370 = 0;
  _DAT_7100af9388 = (undefined8 *)FUN_71007af5c0(0x70);
  _DAT_7100af9388[0xb] = 0;
  _DAT_7100af9388[0xc] = 0;
  _DAT_7100af9388[0xd] = 0;
  *_DAT_7100af9388 = &PTR_LAB_7100adc028;
  _DAT_7100af9388[1] = 0x100000001;
  _DAT_7100af9388[2] = 3;
  _DAT_7100af9388[3] = 0;
  _DAT_7100af9388[4] = 0;
  _DAT_7100af9388[5] = 0;
  _DAT_7100af9388[6] = 0;
  _DAT_7100af9388[7] = 0;
  _DAT_7100af9388[8] = 0;
  _DAT_7100af9388[9] = 0;
  _DAT_7100af9388[10] = 0;
  _DAT_7100af9380 = _DAT_7100af9388 + 2;
  return;
}



// ===== FUN_710001dcd0 @ 710001dcd0 (size=492) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001dcd0(void)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  
  _DAT_7100af9d60 = 1;
  _DAT_7100af9d78 = 0;
  _DAT_7100af9d80 = 0;
  _DAT_7100af9d88 = 0xffffffffffffffff;
  _DAT_7100af9d90 = 0;
  _DAT_7100af9d68 = 0xffffffffffffffff;
  DAT_7100af9d70 = 0;
  FUN_71007b18e0(0x7100af9d98);
  _DAT_7100af9db8 = 0;
  _DAT_7100af9dc0 = 0;
  _DAT_7100af9da8 = &DAT_7100af9dd8;
  _DAT_7100af9db0 = 1;
  _DAT_7100af9dd0 = 0;
  _DAT_7100af9dd8 = 0;
  _DAT_7100af9de8 = 0;
  _DAT_7100af9df0 = 0;
  _DAT_7100af9df8 = 0xffffffffffffffff;
  _DAT_7100af9e00 = 0;
  _DAT_7100af9dc8 = 0x3f800000;
  FUN_71007b18e0(0x7100af9e08);
  _DAT_7100af9e28 = 0;
  _DAT_7100af9e30 = 0;
  _DAT_7100af9e18 = &DAT_7100af9e48;
  _DAT_7100af9e20 = 1;
  _DAT_7100af9e40 = 0;
  _DAT_7100af9e48 = 0;
  _DAT_7100af9e68 = 0xffffffffffffffff;
  _DAT_7100af9e70 = 0;
  _DAT_7100af9e78 = 8;
  _DAT_7100af9e80 = 0;
  _DAT_7100af9e88 = 0;
  _DAT_7100af9e90 = 0;
  _DAT_7100af9e98 = 0;
  _DAT_7100af9ea0 = 0;
  _DAT_7100af9ea8 = 0;
  _DAT_7100af9eb0 = 0;
  _DAT_7100af9eb8 = 0;
  _DAT_7100af9e38 = 0x3f800000;
  _DAT_7100af9e58 = 0;
  lVar2 = FUN_71007af5c0(0x40);
  _DAT_7100af9e70 = lVar2;
  _DAT_7100af9e80 = FUN_71007af5c0(0x1f8);
  *(long *)(lVar2 + 0x18) = _DAT_7100af9e80;
  _DAT_7100af9e90 = _DAT_7100af9e80 + 0x1f8;
  _DAT_7100af9d88 = 0xffffffffffffffff;
  _DAT_7100af9df8 = 0xffffffffffffffff;
  _DAT_7100af9ee0 = 0;
  _DAT_7100af9ee8 = 0x1000100000;
  _DAT_7100af9ec0 = 1;
  _DAT_7100af9ec8 = 0;
  _DAT_7100af9ed0 = 1;
  _DAT_7100af9ed8 = 0;
  _DAT_7100af9ef0 = 0;
  uRam0000007100af9ef8 = 0;
  _DAT_7100af9f00 = 0;
  uRam0000007100af9f08 = 0;
  _DAT_7100af9f10 = 0;
  uRam0000007100af9f18 = 0;
  _DAT_7100af9f20 = 0;
  DAT_7100af9f28 = 0;
  _DAT_7100af9f2c = 0x2d00000050;
  _DAT_7100af9f34 = 0x2d000000500;
  _DAT_7100af9e88 = _DAT_7100af9e80;
  _DAT_7100af9e98 = lVar2 + 0x18;
  _DAT_7100af9ea0 = _DAT_7100af9e80;
  _DAT_7100af9ea8 = _DAT_7100af9e80;
  _DAT_7100af9eb0 = _DAT_7100af9e90;
  _DAT_7100af9eb8 = lVar2 + 0x18;
  _DAT_7100af9f40 = (undefined4 *)thunk_FUN_71007af5c0(0xa8c0);
  puVar3 = _DAT_7100af9f40;
  do {
    puVar1 = puVar3 + 3;
    *puVar3 = 0;
    *(undefined2 *)(puVar3 + 1) = 0;
    *(undefined2 *)((long)puVar3 + 6) = 0;
    puVar3[2] = 0;
    puVar3 = puVar1;
  } while (puVar1 != _DAT_7100af9f40 + 0x2a30);
  _DAT_7100af9f48 = (undefined4 *)thunk_FUN_71007af5c0(0xa8c0);
  puVar3 = _DAT_7100af9f48;
  do {
    puVar1 = puVar3 + 3;
    *puVar3 = 0;
    *(undefined2 *)(puVar3 + 1) = 0;
    *(undefined2 *)((long)puVar3 + 6) = 0;
    puVar3[2] = 0;
    puVar3 = puVar1;
  } while (_DAT_7100af9f48 + 0x2a30 != puVar1);
  _DAT_7100af9f50 = 3;
  _DAT_7100af9f58 = 0;
  _DAT_7100af9f60 = 0x5000000000;
  DAT_7100af9f94 = 0;
  _DAT_7100af9f68 = 0x70000002d;
  _DAT_7100af9f70 = 0;
  _DAT_7100af9f78 = 0;
  _DAT_7100af9f80 = 0x5000000000;
  _DAT_7100af9f88 = 0x70000002d;
  _DAT_7100af9f90 = 0;
  _DAT_7100af9ff4 = 1;
  _DAT_7100af9ffc = 0;
  return;
}



// ===== FUN_710001df50 @ 710001df50 (size=272) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001df50(void)

{
  long lVar1;
  
  _DAT_7100cfa350 = 1;
  _DAT_7100cfa368 = 0;
  _DAT_7100cfa370 = 0;
  _DAT_7100cfa358 = 5;
  _DAT_7100cfa378 = 0xffffffffffffffff;
  _DAT_7100cfa380 = 0;
  DAT_7100cfa360 = 0;
  FUN_71007b18e0(0x7100cfa388);
  _DAT_7100cfa3a8 = 0;
  _DAT_7100cfa3b0 = 0;
  _DAT_7100cfa398 = &DAT_7100cfa3c8;
  _DAT_7100cfa3a0 = 1;
  _DAT_7100cfa3c0 = 0;
  _DAT_7100cfa3c8 = 0;
  _DAT_7100cfa3d8 = 0;
  _DAT_7100cfa3e0 = 0;
  _DAT_7100cfa3e8 = 0xffffffffffffffff;
  _DAT_7100cfa3f0 = 0;
  _DAT_7100cfa3b8 = 0x3f800000;
  FUN_71007b18e0(0x7100cfa3f8);
  _DAT_7100cfa408 = &DAT_7100cfa438;
  _DAT_7100cfa410 = 1;
  _DAT_7100cfa418 = 0;
  _DAT_7100cfa420 = 0;
  _DAT_7100cfa430 = 0;
  _DAT_7100cfa438 = 0;
  _DAT_7100cfa458 = 0xffffffffffffffff;
  _DAT_7100cfa460 = 0;
  _DAT_7100cfa468 = 8;
  _DAT_7100cfa470 = 0;
  _DAT_7100cfa478 = 0;
  _DAT_7100cfa480 = 0;
  _DAT_7100cfa488 = 0;
  _DAT_7100cfa490 = 0;
  _DAT_7100cfa498 = 0;
  _DAT_7100cfa4a0 = 0;
  _DAT_7100cfa4a8 = 0;
  _DAT_7100cfa428 = 0x3f800000;
  _DAT_7100cfa448 = 0;
  lVar1 = FUN_71007af5c0(0x40);
  _DAT_7100cfa460 = lVar1;
  _DAT_7100cfa470 = FUN_71007af5c0(0x1f8);
  *(long *)(lVar1 + 0x18) = _DAT_7100cfa470;
  _DAT_7100cfa478 = _DAT_7100cfa470;
  _DAT_7100cfa490 = _DAT_7100cfa470;
  _DAT_7100cfa498 = _DAT_7100cfa470;
  _DAT_7100cfa480 = _DAT_7100cfa470 + 0x1f8;
  _DAT_7100cfa488 = lVar1 + 0x18;
  _DAT_7100cfa4a0 = _DAT_7100cfa470 + 0x1f8;
  _DAT_7100cfa4a8 = lVar1 + 0x18;
  _DAT_7100cfa378 = 5;
  _DAT_7100cfa3e8 = 5;
  _DAT_7100cfa458 = 5;
  return;
}



// ===== FUN_710001e1f0 @ 710001e1f0 (size=876) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001e1f0(void)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_8 [8];
  
  lVar5 = 0;
  puVar3 = (undefined8 *)&DAT_7100cffcb0;
  do {
    puVar4 = (&PTR_DAT_7100adc760)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_71001ad560(puVar3,puVar4,puVar4 + lVar2);
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
  } while (lVar5 != 6);
  puVar3 = (undefined8 *)&DAT_7100cffd70;
  lVar5 = 0;
  do {
    puVar4 = (&PTR_DAT_7100adc790)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_71001ad560(puVar3,puVar4,puVar4 + lVar2);
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
  } while (lVar5 != 4);
  puVar3 = (undefined8 *)&DAT_7100cffdf0;
  lVar5 = 0;
  do {
    puVar4 = (&PTR_s__txt_7100adc7b0)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_71001ad560(puVar3,puVar4,puVar4 + lVar2);
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
  } while (lVar5 != 0x13);
  puVar3 = (undefined8 *)&DAT_7100d00070;
  lVar5 = 0;
  FUN_710006ec60(0x7100d00050,&DAT_710083b658,auStack_8);
  do {
    puVar4 = (&PTR_DAT_7100adc848)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_71001ad560(puVar3,puVar4,puVar4 + lVar2);
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
  } while (lVar5 != 7);
  puVar3 = (undefined8 *)&DAT_7100d00150;
  lVar5 = 0;
  do {
    puVar4 = (&PTR_DAT_7100adc880)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_71001ad560(puVar3,puVar4,puVar4 + lVar2);
    puVar3 = puVar3 + 4;
    bVar1 = lVar5 != 1;
    lVar5 = 1;
  } while (bVar1);
  puVar3 = (undefined8 *)&DAT_7100d00190;
  lVar5 = 0;
  do {
    puVar4 = (&PTR_DAT_7100adc890)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_71001ad560(puVar3,puVar4,puVar4 + lVar2);
    puVar3 = puVar3 + 4;
    bVar1 = lVar5 != 1;
    lVar5 = 1;
  } while (bVar1);
  puVar3 = (undefined8 *)&DAT_7100d001d0;
  lVar5 = 0;
  do {
    puVar4 = (&PTR_DAT_7100adc8a0)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_71001ad560(puVar3,puVar4,puVar4 + lVar2);
    puVar3 = puVar3 + 4;
    bVar1 = lVar5 != 1;
    lVar5 = 1;
  } while (bVar1);
  puVar3 = (undefined8 *)&DAT_7100d00210;
  lVar5 = 0;
  do {
    puVar4 = (&PTR_DAT_7100adc8b0)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_71001ad560(puVar3,puVar4,puVar4 + lVar2);
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
  } while (lVar5 != 3);
  FUN_710006ec60(0x7100d00270,&DAT_710083b660,auStack_8);
  FUN_710006ec60(0x7100d00290,".*\\.?\\[?([0-9a-fA-F]{16})\\]?(\\[v([0-9]+)\\])?\\.romfs\\.bin",
                 auStack_8);
  FUN_71007e0600(0x7100d002b8);
  _DAT_7100d002c0 = 0;
  _DAT_7100d002c8 = 0;
  FUN_71001ad7e0(0x7100d002b0,&DAT_710083b6a8,&DAT_710083b6ee,1);
  return;
}



// ===== FUN_710001e6f0 @ 710001e6f0 (size=856) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001e6f0(void)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = 0;
  puVar3 = (undefined8 *)&DAT_7100d002d0;
  do {
    puVar4 = (&PTR_DAT_7100adc8c8)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_71001b6580(puVar3,puVar4,puVar4 + lVar2);
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
  } while (lVar5 != 6);
  puVar3 = (undefined8 *)&DAT_7100d00390;
  lVar5 = 0;
  do {
    puVar4 = (&PTR_DAT_7100adc8f8)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_71001b6580(puVar3,puVar4,puVar4 + lVar2);
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
  } while (lVar5 != 4);
  puVar3 = (undefined8 *)&DAT_7100d00410;
  lVar5 = 0;
  do {
    puVar4 = (&PTR_s__txt_7100adc918)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_71001b6580(puVar3,puVar4,puVar4 + lVar2);
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
  } while (lVar5 != 0x13);
  puVar3 = (undefined8 *)&DAT_7100d00690;
  lVar5 = 0;
  FUN_71001b6890(0x7100d00670,&DAT_710083b658);
  do {
    puVar4 = (&PTR_DAT_7100adc9b0)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_71001b6580(puVar3,puVar4,puVar4 + lVar2);
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
  } while (lVar5 != 7);
  puVar3 = (undefined8 *)&DAT_7100d00770;
  lVar5 = 0;
  do {
    puVar4 = (&PTR_DAT_7100adc9e8)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_71001b6580(puVar3,puVar4,puVar4 + lVar2);
    puVar3 = puVar3 + 4;
    bVar1 = lVar5 != 1;
    lVar5 = 1;
  } while (bVar1);
  puVar3 = (undefined8 *)&DAT_7100d007b0;
  lVar5 = 0;
  do {
    puVar4 = (&PTR_DAT_7100adc9f8)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_71001b6580(puVar3,puVar4,puVar4 + lVar2);
    puVar3 = puVar3 + 4;
    bVar1 = lVar5 != 1;
    lVar5 = 1;
  } while (bVar1);
  puVar3 = (undefined8 *)&DAT_7100d007f0;
  lVar5 = 0;
  do {
    puVar4 = (&PTR_DAT_7100adca08)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_71001b6580(puVar3,puVar4,puVar4 + lVar2);
    puVar3 = puVar3 + 4;
    bVar1 = lVar5 != 1;
    lVar5 = 1;
  } while (bVar1);
  puVar3 = (undefined8 *)&DAT_7100d00830;
  lVar5 = 0;
  do {
    puVar4 = (&PTR_DAT_7100adca18)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_71001b6580(puVar3,puVar4,puVar4 + lVar2);
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
  } while (lVar5 != 3);
  FUN_71001b6890(0x7100d00890,&DAT_710083b660);
  FUN_71001b6890(0x7100d008b0,".*\\.?\\[?([0-9a-fA-F]{16})\\]?(\\[v([0-9]+)\\])?\\.romfs\\.bin");
  FUN_71007e0600(0x7100d008d8);
  _DAT_7100d008e0 = 0;
  _DAT_7100d008e8 = 0;
  FUN_71001ad7e0(0x7100d008d0,&DAT_710083b6a8,&DAT_710083b6ee,1);
  return;
}



// ===== FUN_710001ebd0 @ 710001ebd0 (size=876) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001ebd0(void)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_8 [8];
  
  lVar5 = 0;
  puVar3 = (undefined8 *)&DAT_7100d008f0;
  do {
    puVar4 = (&PTR_DAT_7100adcb88)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_71001ced10(puVar3,puVar4,puVar4 + lVar2);
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
  } while (lVar5 != 6);
  puVar3 = (undefined8 *)&DAT_7100d009b0;
  lVar5 = 0;
  do {
    puVar4 = (&PTR_DAT_7100adcbb8)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_71001ced10(puVar3,puVar4,puVar4 + lVar2);
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
  } while (lVar5 != 4);
  puVar3 = (undefined8 *)&DAT_7100d00a30;
  lVar5 = 0;
  do {
    puVar4 = (&PTR_s__txt_7100adcbd8)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_71001ced10(puVar3,puVar4,puVar4 + lVar2);
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
  } while (lVar5 != 0x13);
  puVar3 = (undefined8 *)&DAT_7100d00cb0;
  lVar5 = 0;
  FUN_710006ec60(0x7100d00c90,&DAT_710083b658,auStack_8);
  do {
    puVar4 = (&PTR_DAT_7100adcc70)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_71001ced10(puVar3,puVar4,puVar4 + lVar2);
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
  } while (lVar5 != 7);
  puVar3 = (undefined8 *)&DAT_7100d00d90;
  lVar5 = 0;
  do {
    puVar4 = (&PTR_DAT_7100adcca8)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_71001ced10(puVar3,puVar4,puVar4 + lVar2);
    puVar3 = puVar3 + 4;
    bVar1 = lVar5 != 1;
    lVar5 = 1;
  } while (bVar1);
  puVar3 = (undefined8 *)&DAT_7100d00dd0;
  lVar5 = 0;
  do {
    puVar4 = (&PTR_DAT_7100adccb8)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_71001ced10(puVar3,puVar4,puVar4 + lVar2);
    puVar3 = puVar3 + 4;
    bVar1 = lVar5 != 1;
    lVar5 = 1;
  } while (bVar1);
  puVar3 = (undefined8 *)&DAT_7100d00e10;
  lVar5 = 0;
  do {
    puVar4 = (&PTR_DAT_7100adccc8)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_71001ced10(puVar3,puVar4,puVar4 + lVar2);
    puVar3 = puVar3 + 4;
    bVar1 = lVar5 != 1;
    lVar5 = 1;
  } while (bVar1);
  puVar3 = (undefined8 *)&DAT_7100d00e50;
  lVar5 = 0;
  do {
    puVar4 = (&PTR_DAT_7100adccd8)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_71001ced10(puVar3,puVar4,puVar4 + lVar2);
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
  } while (lVar5 != 3);
  FUN_710006ec60(0x7100d00eb0,&DAT_710083b660,auStack_8);
  FUN_710006ec60(&DAT_7100d00ed0,".*\\.?\\[?([0-9a-fA-F]{16})\\]?(\\[v([0-9]+)\\])?\\.romfs\\.bin",
                 auStack_8);
  FUN_71007e0600(0x7100d00ef8);
  _DAT_7100d00f00 = 0;
  _DAT_7100d00f08 = 0;
  FUN_71001ad7e0(0x7100d00ef0,&DAT_710083b6a8,&DAT_710083b6ee,1);
  return;
}



// ===== FUN_710001f0d0 @ 710001f0d0 (size=184) =====

void FUN_710001f0d0(long *param_1,undefined1 *param_2,ulong param_3)

{
  long *plVar1;
  ulong local_8;
  
  plVar1 = param_1 + 2;
  *param_1 = (long)plVar1;
  if (param_2 == (undefined1 *)0x0 && param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string: construction from null is not valid");
  }
  local_8 = param_3;
  if (param_3 < 0x10) {
    if (param_3 == 1) {
      *(undefined1 *)(param_1 + 2) = *param_2;
      goto LAB_710001f114;
    }
    if (param_3 == 0) goto LAB_710001f114;
  }
  else {
    plVar1 = (long *)FUN_71007e2140(param_1,&local_8,0);
    *param_1 = (long)plVar1;
    param_1[2] = local_8;
  }
  FUN_710080f900(plVar1,param_2,param_3);
LAB_710001f114:
  param_1[1] = local_8;
  *(undefined1 *)(*param_1 + local_8) = 0;
  return;
}



// ===== FUN_71000420c0 @ 71000420c0 (size=92) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000420c0(void)

{
  FUN_7100202f60(&DAT_7100d06aa0);
  FUN_7100200620(&DAT_7100d06ad0);
  _DAT_7100d06ad0 = &PTR_LAB_7100ae89a0;
  FUN_7100200620(&DAT_7100d06b08);
  _DAT_7100d06b08 = &PTR_LAB_7100ae89d0;
  FUN_7100203570(&DAT_7100d06b40);
  FUN_7100202c00(&DAT_7100d06b70);
  return;
}



// ===== FUN_7100042120 @ 7100042120 (size=892) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100042120(void)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar3 = (undefined8 *)&DAT_7100d06bd0;
  lVar5 = 0;
  do {
    puVar4 = (&PTR_DAT_7100add310)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_7100232690(puVar3,puVar4,puVar4 + lVar2);
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
  } while (lVar5 != 6);
  puVar3 = (undefined8 *)&DAT_7100d06c90;
  lVar5 = 0;
  DAT_7100af30d8 = &DAT_7100d06bd0;
  do {
    puVar4 = (&PTR_DAT_7100add340)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_7100232690(puVar3,puVar4,puVar4 + lVar2);
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
  } while (lVar5 != 4);
  puVar3 = (undefined8 *)&DAT_7100d06d10;
  lVar5 = 0;
  DAT_7100af30e8 = &DAT_7100d06c90;
  do {
    puVar4 = (&PTR_s__txt_7100add360)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_7100232690(puVar3,puVar4,puVar4 + lVar2);
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
  } while (lVar5 != 0x13);
  puVar3 = (undefined8 *)&DAT_7100d06f90;
  lVar5 = 0;
  FUN_7100232ab0(0x7100d06f70,&DAT_710083b658);
  do {
    puVar4 = (&PTR_DAT_7100add3f8)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_7100232690(puVar3,puVar4,puVar4 + lVar2);
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
  } while (lVar5 != 7);
  puVar3 = (undefined8 *)&DAT_7100d07070;
  lVar5 = 0;
  do {
    puVar4 = (&PTR_DAT_7100add430)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_7100232690(puVar3,puVar4,puVar4 + lVar2);
    puVar3 = puVar3 + 4;
    bVar1 = lVar5 != 1;
    lVar5 = 1;
  } while (bVar1);
  puVar3 = (undefined8 *)&DAT_7100d070b0;
  lVar5 = 0;
  do {
    puVar4 = (&PTR_DAT_7100add440)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_7100232690(puVar3,puVar4,puVar4 + lVar2);
    puVar3 = puVar3 + 4;
    bVar1 = lVar5 != 1;
    lVar5 = 1;
  } while (bVar1);
  puVar3 = (undefined8 *)&DAT_7100d070f0;
  lVar5 = 0;
  do {
    puVar4 = (&PTR_DAT_7100add450)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_7100232690(puVar3,puVar4,puVar4 + lVar2);
    puVar3 = puVar3 + 4;
    bVar1 = lVar5 != 1;
    lVar5 = 1;
  } while (bVar1);
  puVar3 = (undefined8 *)&DAT_7100d07130;
  lVar5 = 0;
  do {
    puVar4 = (&PTR_DAT_7100add460)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_7100232690(puVar3,puVar4,puVar4 + lVar2);
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
  } while (lVar5 != 3);
  FUN_7100232ab0(0x7100d07190,&DAT_710083b660);
  FUN_7100232ab0(&DAT_7100d06bb0,".*\\.?\\[?([0-9a-fA-F]{16})\\]?(\\[v([0-9]+)\\])?\\.romfs\\.bin");
  FUN_71007e0600(0x7100d071b8);
  _DAT_7100d071c0 = 0;
  _DAT_7100d071c8 = 0;
  FUN_71001ad7e0(0x7100d071b0,&DAT_710083b6a8,&DAT_710083b6ee,1);
  return;
}



// ===== FUN_7100042630 @ 7100042630 (size=132) =====

void FUN_7100042630(void)

{
  undefined1 auStack_8 [8];
  
  FUN_710025ffd0(0x7100d071d0,&DAT_71008f7940,7,auStack_8);
  FUN_710025ffd0(0x7100d071e8,&DAT_7100858b80,2,auStack_8);
  FUN_710025ffd0(0x7100d07200,&DAT_7100858b78,2,auStack_8);
  FUN_710025ffd0(0x7100d07218,&DAT_7100858b78,2,auStack_8);
  return;
}



// ===== FUN_71000426c0 @ 71000426c0 (size=1676) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000426c0(void)

{
  bool bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong local_8;
  
  lVar5 = 0;
  puVar3 = (undefined8 *)&DAT_7100d07240;
  do {
    while( true ) {
      puVar4 = puVar3 + 2;
      puVar6 = (&PTR_DAT_7100addae0)[lVar5];
      *puVar3 = puVar4;
      if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003ab8("basic_string: construction from null is not valid");
      }
      uVar2 = FUN_710081ce00(puVar6);
      local_8 = uVar2;
      if (uVar2 < 0x10) break;
      puVar4 = (undefined8 *)FUN_71007e2140(puVar3,&local_8,0);
      *puVar3 = puVar4;
      puVar3[2] = local_8;
LAB_7100042b04:
      FUN_710080f900(puVar4,puVar6,uVar2);
      puVar4 = (undefined8 *)*puVar3;
LAB_71000426fc:
      puVar3[1] = local_8;
      lVar5 = lVar5 + 1;
      puVar3 = puVar3 + 4;
      *(undefined1 *)((long)puVar4 + local_8) = 0;
      if (lVar5 == 6) goto LAB_7100042760;
    }
    if (uVar2 == 1) {
      *(undefined1 *)(puVar3 + 2) = *puVar6;
      goto LAB_71000426fc;
    }
    if (uVar2 != 0) goto LAB_7100042b04;
    puVar3[1] = 0;
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
    *(undefined1 *)puVar4 = 0;
  } while (lVar5 != 6);
LAB_7100042760:
  puVar3 = (undefined8 *)&DAT_7100d07300;
  lVar5 = 0;
  do {
    puVar4 = puVar3 + 2;
    puVar6 = (&PTR_DAT_7100addb10)[lVar5];
    *puVar3 = puVar4;
    if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    uVar2 = FUN_710081ce00(puVar6);
    local_8 = uVar2;
    if (uVar2 < 0x10) {
      if (uVar2 == 1) {
        *(undefined1 *)(puVar3 + 2) = *puVar6;
      }
      else if (uVar2 != 0) goto LAB_7100042b84;
    }
    else {
      puVar4 = (undefined8 *)FUN_71007e2140(puVar3,&local_8,0);
      *puVar3 = puVar4;
      puVar3[2] = local_8;
LAB_7100042b84:
      FUN_710080f900(puVar4,puVar6,uVar2);
      puVar4 = (undefined8 *)*puVar3;
    }
    puVar3[1] = local_8;
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
    *(undefined1 *)((long)puVar4 + local_8) = 0;
  } while (lVar5 != 4);
  puVar3 = (undefined8 *)&DAT_7100d07380;
  lVar5 = 0;
  do {
    while( true ) {
      puVar4 = puVar3 + 2;
      puVar6 = (&PTR_s__txt_7100addb30)[lVar5];
      *puVar3 = puVar4;
      if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003ab8("basic_string: construction from null is not valid");
      }
      uVar2 = FUN_710081ce00(puVar6);
      local_8 = uVar2;
      if (uVar2 < 0x10) break;
      puVar4 = (undefined8 *)FUN_71007e2140(puVar3,&local_8,0);
      *puVar3 = puVar4;
      puVar3[2] = local_8;
LAB_7100042b40:
      FUN_710080f900(puVar4,puVar6,uVar2);
      puVar4 = (undefined8 *)*puVar3;
LAB_71000427e4:
      puVar3[1] = local_8;
      lVar5 = lVar5 + 1;
      puVar3 = puVar3 + 4;
      *(undefined1 *)((long)puVar4 + local_8) = 0;
      if (lVar5 == 0x13) goto LAB_7100042848;
    }
    if (uVar2 == 1) {
      *(undefined1 *)(puVar3 + 2) = *puVar6;
      goto LAB_71000427e4;
    }
    if (uVar2 != 0) goto LAB_7100042b40;
    puVar3[1] = 0;
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
    *(undefined1 *)puVar4 = 0;
  } while (lVar5 != 0x13);
LAB_7100042848:
  puVar3 = (undefined8 *)&DAT_7100d07600;
  lVar5 = 0;
  FUN_7100272c10(0x7100d075e0,&DAT_710083b658);
  do {
    while( true ) {
      puVar4 = puVar3 + 2;
      puVar6 = (&PTR_DAT_7100addbc8)[lVar5];
      *puVar3 = puVar4;
      if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003ab8("basic_string: construction from null is not valid");
      }
      uVar2 = FUN_710081ce00(puVar6);
      local_8 = uVar2;
      if (uVar2 < 0x10) break;
      puVar4 = (undefined8 *)FUN_71007e2140(puVar3,&local_8,0);
      *puVar3 = puVar4;
      puVar3[2] = local_8;
LAB_7100042bc0:
      FUN_710080f900(puVar4,puVar6,uVar2);
      puVar4 = (undefined8 *)*puVar3;
LAB_7100042878:
      puVar3[1] = local_8;
      lVar5 = lVar5 + 1;
      puVar3 = puVar3 + 4;
      *(undefined1 *)((long)puVar4 + local_8) = 0;
      if (lVar5 == 7) goto LAB_71000428dc;
    }
    if (uVar2 == 1) {
      *(undefined1 *)(puVar3 + 2) = *puVar6;
      goto LAB_7100042878;
    }
    if (uVar2 != 0) goto LAB_7100042bc0;
    puVar3[1] = 0;
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
    *(undefined1 *)puVar4 = 0;
  } while (lVar5 != 7);
LAB_71000428dc:
  puVar3 = (undefined8 *)&DAT_7100d076e0;
  lVar5 = 0;
  do {
    puVar4 = puVar3 + 2;
    puVar6 = (&PTR_DAT_7100addc00)[lVar5];
    *puVar3 = puVar4;
    if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    uVar2 = FUN_710081ce00(puVar6);
    local_8 = uVar2;
    if (uVar2 < 0x10) {
      if (uVar2 == 1) {
        *(undefined1 *)(puVar3 + 2) = *puVar6;
      }
      else if (uVar2 != 0) goto LAB_7100042cd0;
    }
    else {
      puVar4 = (undefined8 *)FUN_71007e2140(puVar3,&local_8,0);
      *puVar3 = puVar4;
      puVar3[2] = local_8;
LAB_7100042cd0:
      FUN_710080f900(puVar4,puVar6,uVar2);
      puVar4 = (undefined8 *)*puVar3;
    }
    puVar3[1] = local_8;
    puVar3 = puVar3 + 4;
    *(undefined1 *)((long)puVar4 + local_8) = 0;
    bVar1 = lVar5 != 1;
    lVar5 = 1;
  } while (bVar1);
  puVar3 = (undefined8 *)&DAT_7100d07720;
  lVar5 = 0;
  do {
    puVar4 = puVar3 + 2;
    puVar6 = (&PTR_DAT_7100addc10)[lVar5];
    *puVar3 = puVar4;
    if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    uVar2 = FUN_710081ce00(puVar6);
    local_8 = uVar2;
    if (uVar2 < 0x10) {
      if (uVar2 == 1) {
        *(undefined1 *)(puVar3 + 2) = *puVar6;
      }
      else if (uVar2 != 0) goto LAB_7100042c94;
    }
    else {
      puVar4 = (undefined8 *)FUN_71007e2140(puVar3,&local_8,0);
      *puVar3 = puVar4;
      puVar3[2] = local_8;
LAB_7100042c94:
      FUN_710080f900(puVar4,puVar6,uVar2);
      puVar4 = (undefined8 *)*puVar3;
    }
    puVar3[1] = local_8;
    puVar3 = puVar3 + 4;
    *(undefined1 *)((long)puVar4 + local_8) = 0;
    bVar1 = lVar5 != 1;
    lVar5 = 1;
  } while (bVar1);
  puVar3 = (undefined8 *)&DAT_7100d07760;
  lVar5 = 0;
  do {
    puVar4 = puVar3 + 2;
    puVar6 = (&PTR_DAT_7100addc20)[lVar5];
    *puVar3 = puVar4;
    if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    uVar2 = FUN_710081ce00(puVar6);
    local_8 = uVar2;
    if (uVar2 < 0x10) {
      if (uVar2 == 1) {
        *(undefined1 *)(puVar3 + 2) = *puVar6;
      }
      else if (uVar2 != 0) goto LAB_7100042c58;
    }
    else {
      puVar4 = (undefined8 *)FUN_71007e2140(puVar3,&local_8,0);
      *puVar3 = puVar4;
      puVar3[2] = local_8;
LAB_7100042c58:
      FUN_710080f900(puVar4,puVar6,uVar2);
      puVar4 = (undefined8 *)*puVar3;
    }
    puVar3[1] = local_8;
    puVar3 = puVar3 + 4;
    *(undefined1 *)((long)puVar4 + local_8) = 0;
    bVar1 = lVar5 != 1;
    lVar5 = 1;
  } while (bVar1);
  puVar3 = (undefined8 *)&DAT_7100d077a0;
  lVar5 = 0;
  do {
    puVar4 = puVar3 + 2;
    puVar6 = (&PTR_DAT_7100addc30)[lVar5];
    *puVar3 = puVar4;
    if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    uVar2 = FUN_710081ce00(puVar6);
    local_8 = uVar2;
    if (uVar2 < 0x10) {
      if (uVar2 == 1) {
        *(undefined1 *)(puVar3 + 2) = *puVar6;
      }
      else if (uVar2 != 0) goto LAB_7100042c04;
    }
    else {
      puVar4 = (undefined8 *)FUN_71007e2140(puVar3,&local_8,0);
      *puVar3 = puVar4;
      puVar3[2] = local_8;
LAB_7100042c04:
      FUN_710080f900(puVar4,puVar6,uVar2);
      puVar4 = (undefined8 *)*puVar3;
    }
    puVar3[1] = local_8;
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
    *(undefined1 *)((long)puVar4 + local_8) = 0;
    if (lVar5 == 3) {
      FUN_7100272c10(0x7100d07800,&DAT_710083b660);
      FUN_7100272c10(0x7100d07820,".*\\.?\\[?([0-9a-fA-F]{16})\\]?(\\[v([0-9]+)\\])?\\.romfs\\.bin")
      ;
      FUN_71007e0600(0x7100d07848);
      _DAT_7100d07850 = 0;
      _DAT_7100d07858 = 0;
      FUN_71001ad7e0(0x7100d07840,&DAT_710083b6a8,&DAT_710083b6ee,1);
      return;
    }
  } while( true );
}



// ===== FUN_7100042ee0 @ 7100042ee0 (size=500) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100042ee0(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  lVar1 = FUN_710076d158();
  if ((*(ulong *)(lVar1 + 0x11fa0) & 1) == 0) {
    *(undefined1 *)(lVar1 + 0x11fc0) = 1;
    *(undefined8 *)(lVar1 + 0x11fb0) = 0xa2cb1f508baaa76c;
    *(undefined8 *)(lVar1 + 0x11fb8) = 0xc8db115f61bdea42;
    *(ulong *)(lVar1 + 0x11fa0) = 1;
    FUN_71007ad7e0(&DAT_7100273f70,lVar1 + 0x11fb0,0);
  }
  lVar1 = FUN_710076d158();
  if ((*(byte *)(lVar1 + 0x11fc0) & 1) != 0) {
    uVar4 = 0xc7a77331ffd9c925;
    uVar2 = 0;
    do {
      uVar2 = (uVar2 & 7) << 3;
      auVar5 = FUN_710076d158();
      lVar3 = auVar5._8_8_;
      lVar1 = auVar5._0_8_ + 0x11fb0;
      *(byte *)(lVar3 + lVar1) =
           (char)(auVar5._8_4_ >> 3) + (char)(uVar4 >> (uVar2 & 0x3f)) ^ *(byte *)(lVar3 + lVar1);
      uVar2 = lVar3 + 1;
    } while (uVar2 != 0x10);
    *(undefined1 *)(auVar5._0_8_ + 0x11fc0) = 0;
  }
  lVar1 = FUN_710076d158();
  FUN_7100274a40(&DAT_7100d078f0,lVar1 + 0x11fb0,0xf);
  if ((*(ulong *)(lVar1 + 0x11fc8) & 1) == 0) {
    *(undefined8 *)(lVar1 + 0x11fd0) = 0x69e00d72772e2516;
    *(undefined8 *)(lVar1 + 0x11fd8) = 0x63ef1b653a2c2928;
    *(undefined2 *)(lVar1 + 0x11fe0) = 0x4d36;
    *(undefined1 *)(lVar1 + 0x11fe2) = 1;
    *(undefined8 *)(lVar1 + 0x11fc8) = 1;
    FUN_71007ad7e0(&DAT_7100273f80,lVar1 + 0x11fd0,0);
  }
  lVar1 = FUN_710076d158();
  if ((*(byte *)(lVar1 + 0x11fe2) & 1) != 0) {
    uVar4 = 0x581790119474b43;
    uVar2 = 0;
    do {
      uVar2 = (uVar2 & 7) << 3;
      auVar5 = FUN_710076d158();
      lVar3 = auVar5._8_8_;
      lVar1 = auVar5._0_8_ + 0x11fd0;
      *(byte *)(lVar3 + lVar1) =
           (char)(auVar5._8_4_ >> 3) + (char)(uVar4 >> (uVar2 & 0x3f)) ^ *(byte *)(lVar3 + lVar1);
      uVar2 = lVar3 + 1;
    } while (uVar2 != 0x12);
    *(undefined1 *)(auVar5._0_8_ + 0x11fe2) = 0;
  }
  lVar1 = FUN_710076d158();
  FUN_7100274a40(&DAT_7100d07910,lVar1 + 0x11fd0,0x11);
  _DAT_7100d07868 = 0;
  _DAT_7100d07898 = 0;
  _DAT_7100d07870 = 0;
  _DAT_7100d07878 = &DAT_7100d07868;
  _DAT_7100d07880 = &DAT_7100d07868;
  _DAT_7100d07888 = 0;
  _DAT_7100d078a0 = 0;
  _DAT_7100d078a8 = &DAT_7100d07898;
  _DAT_7100d078b0 = &DAT_7100d07898;
  _DAT_7100d078b8 = 0;
  _DAT_7100d078c8 = 0;
  _DAT_7100d078d0 = 0;
  _DAT_7100d078d8 = &DAT_7100d078c8;
  _DAT_7100d078e0 = &DAT_7100d078c8;
  _DAT_7100d078e8 = 0;
  return;
}



// ===== FUN_7100046480 @ 7100046480 (size=56) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100046480(void)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_71007af5c0(0x80000);
  FUN_7100808340(uVar1,0,0x80000);
  _DAT_7100d08a50 = uVar1;
  return;
}



// ===== FUN_71000464c0 @ 71000464c0 (size=56) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000464c0(void)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_71007af5c0(0x100000);
  FUN_7100808340(uVar1,0,0x100000);
  _DAT_7100d08a70 = uVar1;
  return;
}



// ===== FUN_7100046500 @ 7100046500 (size=740) =====

void FUN_7100046500(void)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined8 extraout_d23;
  undefined8 uVar11;
  undefined8 extraout_d24;
  undefined8 uVar12;
  undefined8 extraout_d25;
  undefined8 uVar13;
  undefined8 extraout_d26;
  undefined8 uVar14;
  undefined8 extraout_d27;
  undefined8 uVar15;
  undefined8 extraout_d28;
  undefined8 uVar16;
  undefined8 extraout_d29;
  undefined8 uVar17;
  undefined8 extraout_d30;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined7 uStack_10;
  undefined1 uStack_9;
  
  uVar13 = 0x533f01586806ac9a;
  uVar12 = 0x250d8bff6a24c688;
  uVar19 = 0x397983c34b15cf9d;
  uVar20 = 0x73c3bcc0286ae0be;
  uVar18 = 0x2c10dabe166cf694;
  uVar15 = 0xf74aec18f17e2d1f;
  uVar14 = 0x3c748a2f4be193c1;
  uVar17 = 0x5f07898040ff2907;
  uVar16 = 0x48318fbf3b7113d8;
  uVar11 = 0x460f898d615369de;
  uVar7 = 0xab99c5410be98b46;
  lVar3 = FUN_710076d158();
  uStack_10 = (undefined7)uVar11;
  uStack_9 = (undefined1)uVar7;
  if ((*(ulong *)(lVar3 + 0x18708) & 1) == 0) {
    *(undefined8 *)(lVar3 + 0x18718) = uVar13;
    *(undefined8 *)(lVar3 + 0x18710) = extraout_d25;
    *(undefined8 *)(lVar3 + 0x18728) = uVar12;
    *(undefined8 *)(lVar3 + 0x18720) = extraout_d24;
    *(undefined8 *)(lVar3 + 0x18738) = uVar15;
    *(undefined8 *)(lVar3 + 0x18730) = extraout_d27;
    *(undefined8 *)(lVar3 + 0x18748) = uVar14;
    *(undefined8 *)(lVar3 + 0x18740) = extraout_d26;
    *(undefined8 *)(lVar3 + 0x18758) = uVar17;
    *(undefined8 *)(lVar3 + 0x18750) = extraout_d29;
    *(undefined8 *)(lVar3 + 0x18768) = uVar16;
    *(undefined8 *)(lVar3 + 0x18760) = extraout_d28;
    *(undefined8 *)(lVar3 + 0x18770) = uVar19;
    *(undefined8 *)(lVar3 + 0x18778) = uVar20;
    *(undefined8 *)(lVar3 + 0x18788) = uVar18;
    *(undefined8 *)(lVar3 + 0x18780) = extraout_d30;
    *(undefined1 *)(lVar3 + 0x187a7) = 1;
    *(ulong *)(lVar3 + 0x18798) = CONCAT17(uStack_9,uStack_10);
    *(undefined8 *)(lVar3 + 0x18790) = extraout_d23;
    *(undefined8 *)(lVar3 + 0x1879f) = uVar7;
    *(undefined8 *)(lVar3 + 0x18708) = 1;
    FUN_71007ad7e0(&DAT_710030c6a0,(undefined8 *)(lVar3 + 0x18710),0);
  }
  lVar3 = FUN_710076d158();
  if ((*(byte *)(lVar3 + 0x187a7) & 1) != 0) {
    uVar10 = 0xe9992ff7e7c5134d;
    uVar4 = 0;
    do {
      uVar4 = (uVar4 & 7) << 3;
      auVar21 = FUN_710076d158();
      lVar5 = auVar21._8_8_;
      lVar3 = auVar21._0_8_;
      pbVar6 = (byte *)(lVar3 + 0x18710);
      pbVar6[lVar5] = (char)(auVar21._8_4_ >> 3) + (char)(uVar10 >> (uVar4 & 0x3f)) ^ pbVar6[lVar5];
      uVar4 = lVar5 + 1;
    } while (uVar4 != 0x97);
    pbVar8 = pbVar6;
    do {
      pbVar9 = pbVar8 + 0x10;
      *(ulong *)(pbVar8 + 8) =
           CONCAT17(pbVar8[0xf] * '@' + (pbVar8[0xf] >> 2),
                    CONCAT16(pbVar8[0xe] * '@' + (pbVar8[0xe] >> 2),
                             CONCAT15(pbVar8[0xd] * '@' + (pbVar8[0xd] >> 2),
                                      CONCAT14(pbVar8[0xc] * '@' + (pbVar8[0xc] >> 2),
                                               CONCAT13(pbVar8[0xb] * '@' + (pbVar8[0xb] >> 2),
                                                        CONCAT12(pbVar8[10] * '@' +
                                                                 (pbVar8[10] >> 2),
                                                                 CONCAT11(pbVar8[9] * '@' +
                                                                          (pbVar8[9] >> 2),
                                                                          pbVar8[8] * '@' +
                                                                          (pbVar8[8] >> 2))))))));
      *(ulong *)pbVar8 =
           CONCAT17(pbVar8[7] * '@' + (pbVar8[7] >> 2),
                    CONCAT16(pbVar8[6] * '@' + (pbVar8[6] >> 2),
                             CONCAT15(pbVar8[5] * '@' + (pbVar8[5] >> 2),
                                      CONCAT14(pbVar8[4] * '@' + (pbVar8[4] >> 2),
                                               CONCAT13(pbVar8[3] * '@' + (pbVar8[3] >> 2),
                                                        CONCAT12(pbVar8[2] * '@' + (pbVar8[2] >> 2),
                                                                 CONCAT11(pbVar8[1] * '@' +
                                                                          (pbVar8[1] >> 2),
                                                                          *pbVar8 * '@' +
                                                                          (*pbVar8 >> 2))))))));
      pbVar8 = pbVar9;
    } while (pbVar9 != (byte *)(lVar3 + 0x187a0));
    do {
      pbVar8 = pbVar6 + 1;
      pbVar6[0x90] = pbVar6[0x90] * '@' + (pbVar6[0x90] >> 2);
      pbVar6 = pbVar8;
    } while (pbVar8 != (byte *)(lVar3 + 0x18717));
    lVar3 = FUN_710076d158();
    *(undefined1 *)(lVar3 + 0x187a7) = 0;
  }
  lVar3 = FUN_710076d158();
  FUN_710030cdf0(&DAT_7100d08b00,lVar3 + 0x18710,0x96);
  if ((*(ulong *)(lVar3 + 0x187a8) & 1) == 0) {
    *(undefined2 *)(lVar3 + 0x187c0) = 0x9b21;
    *(undefined8 *)(lVar3 + 0x187b0) = 0x6d6fa17c6d65d1e1;
    *(undefined8 *)(lVar3 + 0x187b8) = 0x6f2f3ebd4c443228;
    *(undefined8 *)(lVar3 + 0x187a8) = 1;
    *(undefined1 *)(lVar3 + 0x187c2) = 1;
    FUN_71007ad7e0(&DAT_710030c6b0,(undefined8 *)(lVar3 + 0x187b0),0);
  }
  lVar3 = FUN_710076d158();
  if ((*(byte *)(lVar3 + 0x187c2) & 1) != 0) {
    uVar10 = 0x47055b5525ed99a9;
    uVar4 = 0;
    do {
      uVar4 = (uVar4 & 7) << 3;
      auVar21 = FUN_710076d158();
      lVar5 = auVar21._8_8_;
      lVar3 = auVar21._0_8_ + 0x187b0;
      *(byte *)(lVar5 + lVar3) =
           (char)(auVar21._8_4_ >> 3) + (char)(uVar10 >> (uVar4 & 0x3f)) ^ *(byte *)(lVar5 + lVar3);
      uVar4 = lVar5 + 1;
    } while (uVar4 != 0x12);
    uVar10 = 0x47055b5525ed99a9;
    uVar4 = 0;
    do {
      lVar3 = FUN_710076d158();
      bVar2 = *(byte *)(uVar4 + lVar3 + 0x187b0);
      uVar1 = (uint)(uVar10 >> ((uVar4 & 7) << 3)) & 7;
      *(byte *)(uVar4 + lVar3 + 0x187b0) = bVar2 >> (ulong)uVar1 | bVar2 << (ulong)(-uVar1 & 7);
      uVar4 = uVar4 + 1;
    } while (uVar4 != 0x12);
    *(undefined1 *)(lVar3 + 0x187c2) = 0;
  }
  lVar3 = FUN_710076d158();
  FUN_710030cdf0(&DAT_7100d08ae0,lVar3 + 0x187b0,0x11);
  FUN_710030ceb0(&DAT_7100d08a98,&DAT_7100853d20);
  FUN_710030ceb0(&DAT_7100d08ab8,&DAT_7100853d20);
  return;
}



// ===== FUN_71000467f0 @ 71000467f0 (size=1672) =====

void FUN_71000467f0(void)

{
  bool bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong local_8;
  
  lVar5 = 0;
  puVar3 = (undefined8 *)&DAT_7100d08b20;
  do {
    while( true ) {
      puVar4 = puVar3 + 2;
      puVar6 = (&PTR_DAT_7100addf40)[lVar5];
      *puVar3 = puVar4;
      if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003ab8("basic_string: construction from null is not valid");
      }
      uVar2 = FUN_710081ce00(puVar6);
      local_8 = uVar2;
      if (uVar2 < 0x10) break;
      puVar4 = (undefined8 *)FUN_71007e2140(puVar3,&local_8,0);
      *puVar3 = puVar4;
      puVar3[2] = local_8;
LAB_7100046c30:
      FUN_710080f900(puVar4,puVar6,uVar2);
      puVar4 = (undefined8 *)*puVar3;
LAB_710004682c:
      puVar3[1] = local_8;
      lVar5 = lVar5 + 1;
      puVar3 = puVar3 + 4;
      *(undefined1 *)((long)puVar4 + local_8) = 0;
      if (lVar5 == 6) goto LAB_7100046890;
    }
    if (uVar2 == 1) {
      *(undefined1 *)(puVar3 + 2) = *puVar6;
      goto LAB_710004682c;
    }
    if (uVar2 != 0) goto LAB_7100046c30;
    puVar3[1] = 0;
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
    *(undefined1 *)puVar4 = 0;
  } while (lVar5 != 6);
LAB_7100046890:
  lVar5 = 0;
  DAT_7100af34b0 = &DAT_7100d08b20;
  puVar3 = (undefined8 *)&DAT_7100d08be0;
  do {
    puVar4 = puVar3 + 2;
    puVar6 = (&PTR_DAT_7100addf70)[lVar5];
    *puVar3 = puVar4;
    if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    uVar2 = FUN_710081ce00(puVar6);
    local_8 = uVar2;
    if (uVar2 < 0x10) {
      if (uVar2 == 1) {
        *(undefined1 *)(puVar3 + 2) = *puVar6;
      }
      else if (uVar2 != 0) goto LAB_7100046cb0;
    }
    else {
      puVar4 = (undefined8 *)FUN_71007e2140(puVar3,&local_8,0);
      *puVar3 = puVar4;
      puVar3[2] = local_8;
LAB_7100046cb0:
      FUN_710080f900(puVar4,puVar6,uVar2);
      puVar4 = (undefined8 *)*puVar3;
    }
    puVar3[1] = local_8;
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
    *(undefined1 *)((long)puVar4 + local_8) = 0;
  } while (lVar5 != 4);
  puVar3 = (undefined8 *)&DAT_7100d08c60;
  lVar5 = 0;
  do {
    while( true ) {
      puVar4 = puVar3 + 2;
      puVar6 = (&PTR_s__txt_7100addf90)[lVar5];
      *puVar3 = puVar4;
      if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003ab8("basic_string: construction from null is not valid");
      }
      uVar2 = FUN_710081ce00(puVar6);
      local_8 = uVar2;
      if (uVar2 < 0x10) break;
      puVar4 = (undefined8 *)FUN_71007e2140(puVar3,&local_8,0);
      *puVar3 = puVar4;
      puVar3[2] = local_8;
LAB_7100046c6c:
      FUN_710080f900(puVar4,puVar6,uVar2);
      puVar4 = (undefined8 *)*puVar3;
LAB_710004691c:
      puVar3[1] = local_8;
      lVar5 = lVar5 + 1;
      puVar3 = puVar3 + 4;
      *(undefined1 *)((long)puVar4 + local_8) = 0;
      if (lVar5 == 0x13) goto LAB_7100046980;
    }
    if (uVar2 == 1) {
      *(undefined1 *)(puVar3 + 2) = *puVar6;
      goto LAB_710004691c;
    }
    if (uVar2 != 0) goto LAB_7100046c6c;
    puVar3[1] = 0;
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
    *(undefined1 *)puVar4 = 0;
  } while (lVar5 != 0x13);
LAB_7100046980:
  puVar3 = (undefined8 *)&DAT_7100d08ee0;
  lVar5 = 0;
  FUN_710006ec60(0x7100d08ec0,&DAT_710083b658,&local_8);
  do {
    while( true ) {
      puVar4 = puVar3 + 2;
      puVar6 = (&PTR_DAT_7100ade028)[lVar5];
      *puVar3 = puVar4;
      if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003ab8("basic_string: construction from null is not valid");
      }
      uVar2 = FUN_710081ce00(puVar6);
      local_8 = uVar2;
      if (uVar2 < 0x10) break;
      puVar4 = (undefined8 *)FUN_71007e2140(puVar3,&local_8,0);
      *puVar3 = puVar4;
      puVar3[2] = local_8;
LAB_7100046cec:
      FUN_710080f900(puVar4,puVar6,uVar2);
      puVar4 = (undefined8 *)*puVar3;
LAB_71000469b8:
      puVar3[1] = local_8;
      lVar5 = lVar5 + 1;
      puVar3 = puVar3 + 4;
      *(undefined1 *)((long)puVar4 + local_8) = 0;
      if (lVar5 == 7) goto LAB_7100046a1c;
    }
    if (uVar2 == 1) {
      *(undefined1 *)(puVar3 + 2) = *puVar6;
      goto LAB_71000469b8;
    }
    if (uVar2 != 0) goto LAB_7100046cec;
    puVar3[1] = 0;
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
    *(undefined1 *)puVar4 = 0;
  } while (lVar5 != 7);
LAB_7100046a1c:
  puVar3 = (undefined8 *)&DAT_7100d08fc0;
  lVar5 = 0;
  do {
    puVar4 = puVar3 + 2;
    puVar6 = (&PTR_DAT_7100ade060)[lVar5];
    *puVar3 = puVar4;
    if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    uVar2 = FUN_710081ce00(puVar6);
    local_8 = uVar2;
    if (uVar2 < 0x10) {
      if (uVar2 == 1) {
        *(undefined1 *)(puVar3 + 2) = *puVar6;
      }
      else if (uVar2 != 0) goto LAB_7100046dfc;
    }
    else {
      puVar4 = (undefined8 *)FUN_71007e2140(puVar3,&local_8,0);
      *puVar3 = puVar4;
      puVar3[2] = local_8;
LAB_7100046dfc:
      FUN_710080f900(puVar4,puVar6,uVar2);
      puVar4 = (undefined8 *)*puVar3;
    }
    puVar3[1] = local_8;
    puVar3 = puVar3 + 4;
    *(undefined1 *)((long)puVar4 + local_8) = 0;
    bVar1 = lVar5 != 1;
    lVar5 = 1;
  } while (bVar1);
  puVar3 = (undefined8 *)&DAT_7100d09000;
  lVar5 = 0;
  do {
    puVar4 = puVar3 + 2;
    puVar6 = (&PTR_DAT_7100ade070)[lVar5];
    *puVar3 = puVar4;
    if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    uVar2 = FUN_710081ce00(puVar6);
    local_8 = uVar2;
    if (uVar2 < 0x10) {
      if (uVar2 == 1) {
        *(undefined1 *)(puVar3 + 2) = *puVar6;
      }
      else if (uVar2 != 0) goto LAB_7100046dc0;
    }
    else {
      puVar4 = (undefined8 *)FUN_71007e2140(puVar3,&local_8,0);
      *puVar3 = puVar4;
      puVar3[2] = local_8;
LAB_7100046dc0:
      FUN_710080f900(puVar4,puVar6,uVar2);
      puVar4 = (undefined8 *)*puVar3;
    }
    puVar3[1] = local_8;
    puVar3 = puVar3 + 4;
    *(undefined1 *)((long)puVar4 + local_8) = 0;
    bVar1 = lVar5 != 1;
    lVar5 = 1;
  } while (bVar1);
  puVar3 = (undefined8 *)&DAT_7100d09040;
  lVar5 = 0;
  do {
    puVar4 = puVar3 + 2;
    puVar6 = (&PTR_DAT_7100ade080)[lVar5];
    *puVar3 = puVar4;
    if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    uVar2 = FUN_710081ce00(puVar6);
    local_8 = uVar2;
    if (uVar2 < 0x10) {
      if (uVar2 == 1) {
        *(undefined1 *)(puVar3 + 2) = *puVar6;
      }
      else if (uVar2 != 0) goto LAB_7100046d84;
    }
    else {
      puVar4 = (undefined8 *)FUN_71007e2140(puVar3,&local_8,0);
      *puVar3 = puVar4;
      puVar3[2] = local_8;
LAB_7100046d84:
      FUN_710080f900(puVar4,puVar6,uVar2);
      puVar4 = (undefined8 *)*puVar3;
    }
    puVar3[1] = local_8;
    puVar3 = puVar3 + 4;
    *(undefined1 *)((long)puVar4 + local_8) = 0;
    bVar1 = lVar5 != 1;
    lVar5 = 1;
  } while (bVar1);
  puVar3 = (undefined8 *)&DAT_7100d09080;
  lVar5 = 0;
  do {
    puVar4 = puVar3 + 2;
    puVar6 = (&PTR_DAT_7100ade090)[lVar5];
    *puVar3 = puVar4;
    if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    uVar2 = FUN_710081ce00(puVar6);
    local_8 = uVar2;
    if (uVar2 < 0x10) {
      if (uVar2 == 1) {
        *(undefined1 *)(puVar3 + 2) = *puVar6;
      }
      else if (uVar2 != 0) goto LAB_7100046d30;
    }
    else {
      puVar4 = (undefined8 *)FUN_71007e2140(puVar3,&local_8,0);
      *puVar3 = puVar4;
      puVar3[2] = local_8;
LAB_7100046d30:
      FUN_710080f900(puVar4,puVar6,uVar2);
      puVar4 = (undefined8 *)*puVar3;
    }
    puVar3[1] = local_8;
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
    *(undefined1 *)((long)puVar4 + local_8) = 0;
    if (lVar5 == 3) {
      FUN_710006ec60(0x7100d090e0,&DAT_710083b660,&local_8);
      FUN_710006ec60(0x7100d09100,".*\\.?\\[?([0-9a-fA-F]{16})\\]?(\\[v([0-9]+)\\])?\\.romfs\\.bin",
                     &local_8);
      FUN_710031c5e0(0x7100d09120,&DAT_710083b6a8,1);
      return;
    }
  } while( true );
}



// ===== FUN_7100046fe0 @ 7100046fe0 (size=1268) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100046fe0(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong local_8;
  
  puVar2 = (undefined8 *)&DAT_7100d09190;
  lVar4 = 0;
  do {
    while( true ) {
      puVar3 = puVar2 + 2;
      puVar5 = (&PTR_DAT_7100ade0f0)[lVar4];
      *puVar2 = puVar3;
      if (puVar5 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003ab8("basic_string: construction from null is not valid");
      }
      uVar1 = FUN_710081ce00(puVar5);
      local_8 = uVar1;
      if (uVar1 < 0x10) break;
      puVar3 = (undefined8 *)FUN_71007e2140(puVar2,&local_8,0);
      *puVar2 = puVar3;
      puVar2[2] = local_8;
LAB_710004737c:
      FUN_710080f900(puVar3,puVar5,uVar1);
      puVar3 = (undefined8 *)*puVar2;
LAB_7100047020:
      puVar2[1] = local_8;
      lVar4 = lVar4 + 1;
      puVar2 = puVar2 + 4;
      *(undefined1 *)((long)puVar3 + local_8) = 0;
      if (lVar4 == 6) goto LAB_7100047084;
    }
    if (uVar1 == 1) {
      *(undefined1 *)(puVar2 + 2) = *puVar5;
      goto LAB_7100047020;
    }
    if (uVar1 != 0) goto LAB_710004737c;
    puVar2[1] = 0;
    lVar4 = lVar4 + 1;
    puVar2 = puVar2 + 4;
    *(undefined1 *)puVar3 = 0;
  } while (lVar4 != 6);
LAB_7100047084:
  puVar2 = (undefined8 *)&DAT_7100d09250;
  lVar4 = 0;
  do {
    puVar3 = puVar2 + 2;
    puVar5 = (&PTR_DAT_7100ade120)[lVar4];
    *puVar2 = puVar3;
    if (puVar5 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    uVar1 = FUN_710081ce00(puVar5);
    local_8 = uVar1;
    if (uVar1 < 0x10) {
      if (uVar1 == 1) {
        *(undefined1 *)(puVar2 + 2) = *puVar5;
      }
      else if (uVar1 != 0) goto LAB_71000473fc;
    }
    else {
      puVar3 = (undefined8 *)FUN_71007e2140(puVar2,&local_8,0);
      *puVar2 = puVar3;
      puVar2[2] = local_8;
LAB_71000473fc:
      FUN_710080f900(puVar3,puVar5,uVar1);
      puVar3 = (undefined8 *)*puVar2;
    }
    puVar2[1] = local_8;
    lVar4 = lVar4 + 1;
    puVar2 = puVar2 + 4;
    *(undefined1 *)((long)puVar3 + local_8) = 0;
  } while (lVar4 != 4);
  puVar2 = (undefined8 *)&DAT_7100d092d0;
  lVar4 = 0;
  do {
    while( true ) {
      puVar3 = puVar2 + 2;
      puVar5 = (&PTR_s__txt_7100ade140)[lVar4];
      *puVar2 = puVar3;
      if (puVar5 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003ab8("basic_string: construction from null is not valid");
      }
      uVar1 = FUN_710081ce00(puVar5);
      local_8 = uVar1;
      if (uVar1 < 0x10) break;
      puVar3 = (undefined8 *)FUN_71007e2140(puVar2,&local_8,0);
      *puVar2 = puVar3;
      puVar2[2] = local_8;
LAB_71000473b8:
      FUN_710080f900(puVar3,puVar5,uVar1);
      puVar3 = (undefined8 *)*puVar2;
LAB_7100047108:
      puVar2[1] = local_8;
      lVar4 = lVar4 + 1;
      puVar2 = puVar2 + 4;
      *(undefined1 *)((long)puVar3 + local_8) = 0;
      if (lVar4 == 0x13) goto LAB_710004716c;
    }
    if (uVar1 == 1) {
      *(undefined1 *)(puVar2 + 2) = *puVar5;
      goto LAB_7100047108;
    }
    if (uVar1 != 0) goto LAB_71000473b8;
    puVar2[1] = 0;
    lVar4 = lVar4 + 1;
    puVar2 = puVar2 + 4;
    *(undefined1 *)puVar3 = 0;
  } while (lVar4 != 0x13);
LAB_710004716c:
  puVar2 = (undefined8 *)&DAT_7100d09550;
  lVar4 = 0;
  FUN_7100324570(0x7100d09530,&DAT_710083b658);
  do {
    while( true ) {
      puVar3 = puVar2 + 2;
      puVar5 = (&PTR_DAT_7100ade1d8)[lVar4];
      *puVar2 = puVar3;
      if (puVar5 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003ab8("basic_string: construction from null is not valid");
      }
      uVar1 = FUN_710081ce00(puVar5);
      local_8 = uVar1;
      if (uVar1 < 0x10) break;
      puVar3 = (undefined8 *)FUN_71007e2140(puVar2,&local_8,0);
      *puVar2 = puVar3;
      puVar2[2] = local_8;
LAB_7100047438:
      FUN_710080f900(puVar3,puVar5,uVar1);
      puVar3 = (undefined8 *)*puVar2;
LAB_710004719c:
      puVar2[1] = local_8;
      lVar4 = lVar4 + 1;
      puVar2 = puVar2 + 4;
      *(undefined1 *)((long)puVar3 + local_8) = 0;
      if (lVar4 == 7) goto LAB_7100047200;
    }
    if (uVar1 == 1) {
      *(undefined1 *)(puVar2 + 2) = *puVar5;
      goto LAB_710004719c;
    }
    if (uVar1 != 0) goto LAB_7100047438;
    puVar2[1] = 0;
    lVar4 = lVar4 + 1;
    puVar2 = puVar2 + 4;
    *(undefined1 *)puVar3 = 0;
  } while (lVar4 != 7);
LAB_7100047200:
  FUN_7100324570(&DAT_7100d09630,&DAT_710083a998);
  FUN_7100324570(&DAT_7100d09650,&DAT_710083b6f8);
  FUN_7100324570(&DAT_7100d09670,&DAT_710083b718);
  FUN_7100324570(&DAT_7100d09690,&DAT_710083b700);
  FUN_7100324570(&DAT_7100d096b0,&DAT_710083b710);
  FUN_7100324570(&DAT_7100d096d0,&DAT_710083b708);
  puVar2 = (undefined8 *)&DAT_7100d096f0;
  lVar4 = 0;
  do {
    puVar3 = puVar2 + 2;
    puVar5 = (&PTR_DAT_7100ade210)[lVar4];
    *puVar2 = puVar3;
    if (puVar5 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    uVar1 = FUN_710081ce00(puVar5);
    local_8 = uVar1;
    if (uVar1 < 0x10) {
      if (uVar1 == 1) {
        *(undefined1 *)(puVar2 + 2) = *puVar5;
      }
      else if (uVar1 != 0) goto LAB_710004747c;
    }
    else {
      puVar3 = (undefined8 *)FUN_71007e2140(puVar2,&local_8,0);
      *puVar2 = puVar3;
      puVar2[2] = local_8;
LAB_710004747c:
      FUN_710080f900(puVar3,puVar5,uVar1);
      puVar3 = (undefined8 *)*puVar2;
    }
    puVar2[1] = local_8;
    lVar4 = lVar4 + 1;
    puVar2 = puVar2 + 4;
    *(undefined1 *)((long)puVar3 + local_8) = 0;
    if (lVar4 == 3) {
      FUN_7100324570(0x7100d09750,&DAT_710083b660);
      FUN_7100324570(&DAT_7100d09170,
                     ".*\\.?\\[?([0-9a-fA-F]{16})\\]?(\\[v([0-9]+)\\])?\\.romfs\\.bin");
      FUN_71007e0600(0x7100d09778);
      _DAT_7100d09780 = 0;
      _DAT_7100d09788 = 0;
      FUN_71001ad7e0(0x7100d09770,&DAT_710083b6a8,&DAT_710083b6ee,1);
      _DAT_7100d09150 = 0;
      _DAT_7100d09158 = &DAT_7100d09148;
      _DAT_7100d09160 = &DAT_7100d09148;
      _DAT_7100d09168 = 0;
      _DAT_7100d09148 = 0;
      return;
    }
  } while( true );
}



// ===== FUN_71000476a0 @ 71000476a0 (size=1676) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000476a0(void)

{
  bool bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong local_8;
  
  lVar5 = 0;
  puVar3 = (undefined8 *)&DAT_7100d09790;
  do {
    while( true ) {
      puVar4 = puVar3 + 2;
      puVar6 = (&PTR_DAT_7100ade338)[lVar5];
      *puVar3 = puVar4;
      if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003ab8("basic_string: construction from null is not valid");
      }
      uVar2 = FUN_710081ce00(puVar6);
      local_8 = uVar2;
      if (uVar2 < 0x10) break;
      puVar4 = (undefined8 *)FUN_71007e2140(puVar3,&local_8,0);
      *puVar3 = puVar4;
      puVar3[2] = local_8;
LAB_7100047ae4:
      FUN_710080f900(puVar4,puVar6,uVar2);
      puVar4 = (undefined8 *)*puVar3;
LAB_71000476dc:
      puVar3[1] = local_8;
      lVar5 = lVar5 + 1;
      puVar3 = puVar3 + 4;
      *(undefined1 *)((long)puVar4 + local_8) = 0;
      if (lVar5 == 6) goto LAB_7100047740;
    }
    if (uVar2 == 1) {
      *(undefined1 *)(puVar3 + 2) = *puVar6;
      goto LAB_71000476dc;
    }
    if (uVar2 != 0) goto LAB_7100047ae4;
    puVar3[1] = 0;
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
    *(undefined1 *)puVar4 = 0;
  } while (lVar5 != 6);
LAB_7100047740:
  puVar3 = (undefined8 *)&DAT_7100d09850;
  lVar5 = 0;
  do {
    puVar4 = puVar3 + 2;
    puVar6 = (&PTR_DAT_7100ade368)[lVar5];
    *puVar3 = puVar4;
    if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    uVar2 = FUN_710081ce00(puVar6);
    local_8 = uVar2;
    if (uVar2 < 0x10) {
      if (uVar2 == 1) {
        *(undefined1 *)(puVar3 + 2) = *puVar6;
      }
      else if (uVar2 != 0) goto LAB_7100047b64;
    }
    else {
      puVar4 = (undefined8 *)FUN_71007e2140(puVar3,&local_8,0);
      *puVar3 = puVar4;
      puVar3[2] = local_8;
LAB_7100047b64:
      FUN_710080f900(puVar4,puVar6,uVar2);
      puVar4 = (undefined8 *)*puVar3;
    }
    puVar3[1] = local_8;
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
    *(undefined1 *)((long)puVar4 + local_8) = 0;
  } while (lVar5 != 4);
  puVar3 = (undefined8 *)&DAT_7100d098d0;
  lVar5 = 0;
  do {
    while( true ) {
      puVar4 = puVar3 + 2;
      puVar6 = (&PTR_s__txt_7100ade388)[lVar5];
      *puVar3 = puVar4;
      if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003ab8("basic_string: construction from null is not valid");
      }
      uVar2 = FUN_710081ce00(puVar6);
      local_8 = uVar2;
      if (uVar2 < 0x10) break;
      puVar4 = (undefined8 *)FUN_71007e2140(puVar3,&local_8,0);
      *puVar3 = puVar4;
      puVar3[2] = local_8;
LAB_7100047b20:
      FUN_710080f900(puVar4,puVar6,uVar2);
      puVar4 = (undefined8 *)*puVar3;
LAB_71000477c4:
      puVar3[1] = local_8;
      lVar5 = lVar5 + 1;
      puVar3 = puVar3 + 4;
      *(undefined1 *)((long)puVar4 + local_8) = 0;
      if (lVar5 == 0x13) goto LAB_7100047828;
    }
    if (uVar2 == 1) {
      *(undefined1 *)(puVar3 + 2) = *puVar6;
      goto LAB_71000477c4;
    }
    if (uVar2 != 0) goto LAB_7100047b20;
    puVar3[1] = 0;
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
    *(undefined1 *)puVar4 = 0;
  } while (lVar5 != 0x13);
LAB_7100047828:
  puVar3 = (undefined8 *)&DAT_7100d09b50;
  lVar5 = 0;
  FUN_7100332720(0x7100d09b30,&DAT_710083b658);
  do {
    while( true ) {
      puVar4 = puVar3 + 2;
      puVar6 = (&PTR_DAT_7100ade420)[lVar5];
      *puVar3 = puVar4;
      if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003ab8("basic_string: construction from null is not valid");
      }
      uVar2 = FUN_710081ce00(puVar6);
      local_8 = uVar2;
      if (uVar2 < 0x10) break;
      puVar4 = (undefined8 *)FUN_71007e2140(puVar3,&local_8,0);
      *puVar3 = puVar4;
      puVar3[2] = local_8;
LAB_7100047ba0:
      FUN_710080f900(puVar4,puVar6,uVar2);
      puVar4 = (undefined8 *)*puVar3;
LAB_7100047858:
      puVar3[1] = local_8;
      lVar5 = lVar5 + 1;
      puVar3 = puVar3 + 4;
      *(undefined1 *)((long)puVar4 + local_8) = 0;
      if (lVar5 == 7) goto LAB_71000478bc;
    }
    if (uVar2 == 1) {
      *(undefined1 *)(puVar3 + 2) = *puVar6;
      goto LAB_7100047858;
    }
    if (uVar2 != 0) goto LAB_7100047ba0;
    puVar3[1] = 0;
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
    *(undefined1 *)puVar4 = 0;
  } while (lVar5 != 7);
LAB_71000478bc:
  puVar3 = (undefined8 *)&DAT_7100d09c30;
  lVar5 = 0;
  do {
    puVar4 = puVar3 + 2;
    puVar6 = (&PTR_DAT_7100ade458)[lVar5];
    *puVar3 = puVar4;
    if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    uVar2 = FUN_710081ce00(puVar6);
    local_8 = uVar2;
    if (uVar2 < 0x10) {
      if (uVar2 == 1) {
        *(undefined1 *)(puVar3 + 2) = *puVar6;
      }
      else if (uVar2 != 0) goto LAB_7100047cb0;
    }
    else {
      puVar4 = (undefined8 *)FUN_71007e2140(puVar3,&local_8,0);
      *puVar3 = puVar4;
      puVar3[2] = local_8;
LAB_7100047cb0:
      FUN_710080f900(puVar4,puVar6,uVar2);
      puVar4 = (undefined8 *)*puVar3;
    }
    puVar3[1] = local_8;
    puVar3 = puVar3 + 4;
    *(undefined1 *)((long)puVar4 + local_8) = 0;
    bVar1 = lVar5 != 1;
    lVar5 = 1;
  } while (bVar1);
  puVar3 = (undefined8 *)&DAT_7100d09c70;
  lVar5 = 0;
  do {
    puVar4 = puVar3 + 2;
    puVar6 = (&PTR_DAT_7100ade468)[lVar5];
    *puVar3 = puVar4;
    if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    uVar2 = FUN_710081ce00(puVar6);
    local_8 = uVar2;
    if (uVar2 < 0x10) {
      if (uVar2 == 1) {
        *(undefined1 *)(puVar3 + 2) = *puVar6;
      }
      else if (uVar2 != 0) goto LAB_7100047c74;
    }
    else {
      puVar4 = (undefined8 *)FUN_71007e2140(puVar3,&local_8,0);
      *puVar3 = puVar4;
      puVar3[2] = local_8;
LAB_7100047c74:
      FUN_710080f900(puVar4,puVar6,uVar2);
      puVar4 = (undefined8 *)*puVar3;
    }
    puVar3[1] = local_8;
    puVar3 = puVar3 + 4;
    *(undefined1 *)((long)puVar4 + local_8) = 0;
    bVar1 = lVar5 != 1;
    lVar5 = 1;
  } while (bVar1);
  puVar3 = (undefined8 *)&DAT_7100d09cb0;
  lVar5 = 0;
  do {
    puVar4 = puVar3 + 2;
    puVar6 = (&PTR_DAT_7100ade478)[lVar5];
    *puVar3 = puVar4;
    if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    uVar2 = FUN_710081ce00(puVar6);
    local_8 = uVar2;
    if (uVar2 < 0x10) {
      if (uVar2 == 1) {
        *(undefined1 *)(puVar3 + 2) = *puVar6;
      }
      else if (uVar2 != 0) goto LAB_7100047c38;
    }
    else {
      puVar4 = (undefined8 *)FUN_71007e2140(puVar3,&local_8,0);
      *puVar3 = puVar4;
      puVar3[2] = local_8;
LAB_7100047c38:
      FUN_710080f900(puVar4,puVar6,uVar2);
      puVar4 = (undefined8 *)*puVar3;
    }
    puVar3[1] = local_8;
    puVar3 = puVar3 + 4;
    *(undefined1 *)((long)puVar4 + local_8) = 0;
    bVar1 = lVar5 != 1;
    lVar5 = 1;
  } while (bVar1);
  puVar3 = (undefined8 *)&DAT_7100d09cf0;
  lVar5 = 0;
  do {
    puVar4 = puVar3 + 2;
    puVar6 = (&PTR_DAT_7100ade488)[lVar5];
    *puVar3 = puVar4;
    if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    uVar2 = FUN_710081ce00(puVar6);
    local_8 = uVar2;
    if (uVar2 < 0x10) {
      if (uVar2 == 1) {
        *(undefined1 *)(puVar3 + 2) = *puVar6;
      }
      else if (uVar2 != 0) goto LAB_7100047be4;
    }
    else {
      puVar4 = (undefined8 *)FUN_71007e2140(puVar3,&local_8,0);
      *puVar3 = puVar4;
      puVar3[2] = local_8;
LAB_7100047be4:
      FUN_710080f900(puVar4,puVar6,uVar2);
      puVar4 = (undefined8 *)*puVar3;
    }
    puVar3[1] = local_8;
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
    *(undefined1 *)((long)puVar4 + local_8) = 0;
    if (lVar5 == 3) {
      FUN_7100332720(0x7100d09d50,&DAT_710083b660);
      FUN_7100332720(0x7100d09d70,".*\\.?\\[?([0-9a-fA-F]{16})\\]?(\\[v([0-9]+)\\])?\\.romfs\\.bin")
      ;
      FUN_71007e0600(0x7100d09d98);
      _DAT_7100d09da0 = 0;
      _DAT_7100d09da8 = 0;
      FUN_71001ad7e0(0x7100d09d90,&DAT_710083b6a8,&DAT_710083b6ee,1);
      return;
    }
  } while( true );
}



// ===== FUN_7100047ec0 @ 7100047ec0 (size=1600) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100047ec0(void)

{
  bool bVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong local_8;
  
  puVar4 = (undefined8 *)&DAT_7100d09e48;
  lVar7 = 0;
  do {
    while( true ) {
      puVar6 = puVar4 + 2;
      puVar8 = (&PTR_DAT_7100ade5b0)[lVar7];
      *puVar4 = puVar6;
      if (puVar8 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003ab8("basic_string: construction from null is not valid");
      }
      uVar2 = FUN_710081ce00(puVar8);
      local_8 = uVar2;
      if (uVar2 < 0x10) break;
      puVar6 = (undefined8 *)FUN_71007e2140(puVar4,&local_8,0);
      *puVar4 = puVar6;
      puVar4[2] = local_8;
LAB_7100048308:
      FUN_710080f900(puVar6,puVar8,uVar2);
      puVar6 = (undefined8 *)*puVar4;
LAB_7100047f04:
      puVar4[1] = local_8;
      lVar7 = lVar7 + 1;
      puVar4 = puVar4 + 4;
      *(undefined1 *)((long)puVar6 + local_8) = 0;
      if (lVar7 == 6) goto LAB_7100047f68;
    }
    if (uVar2 == 1) {
      *(undefined1 *)(puVar4 + 2) = *puVar8;
      goto LAB_7100047f04;
    }
    if (uVar2 != 0) goto LAB_7100048308;
    puVar4[1] = 0;
    lVar7 = lVar7 + 1;
    puVar4 = puVar4 + 4;
    *(undefined1 *)puVar6 = 0;
  } while (lVar7 != 6);
LAB_7100047f68:
  puVar4 = (undefined8 *)&DAT_7100d09f08;
  lVar7 = 0;
  do {
    puVar6 = puVar4 + 2;
    puVar8 = (&PTR_DAT_7100ade5e0)[lVar7];
    *puVar4 = puVar6;
    if (puVar8 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    uVar2 = FUN_710081ce00(puVar8);
    local_8 = uVar2;
    if (uVar2 < 0x10) {
      if (uVar2 == 1) {
        *(undefined1 *)(puVar4 + 2) = *puVar8;
      }
      else if (uVar2 != 0) goto LAB_7100048388;
    }
    else {
      puVar6 = (undefined8 *)FUN_71007e2140(puVar4,&local_8,0);
      *puVar4 = puVar6;
      puVar4[2] = local_8;
LAB_7100048388:
      FUN_710080f900(puVar6,puVar8,uVar2);
      puVar6 = (undefined8 *)*puVar4;
    }
    puVar4[1] = local_8;
    lVar7 = lVar7 + 1;
    puVar4 = puVar4 + 4;
    *(undefined1 *)((long)puVar6 + local_8) = 0;
  } while (lVar7 != 4);
  puVar4 = (undefined8 *)&DAT_7100d09f88;
  lVar7 = 0;
  do {
    while( true ) {
      puVar6 = puVar4 + 2;
      puVar8 = (&PTR_s__txt_7100ade600)[lVar7];
      *puVar4 = puVar6;
      if (puVar8 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003ab8("basic_string: construction from null is not valid");
      }
      uVar2 = FUN_710081ce00(puVar8);
      local_8 = uVar2;
      if (uVar2 < 0x10) break;
      puVar6 = (undefined8 *)FUN_71007e2140(puVar4,&local_8,0);
      *puVar4 = puVar6;
      puVar4[2] = local_8;
LAB_7100048344:
      FUN_710080f900(puVar6,puVar8,uVar2);
      puVar6 = (undefined8 *)*puVar4;
LAB_7100047fec:
      puVar4[1] = local_8;
      lVar7 = lVar7 + 1;
      puVar4 = puVar4 + 4;
      *(undefined1 *)((long)puVar6 + local_8) = 0;
      if (lVar7 == 0x13) goto LAB_7100048050;
    }
    if (uVar2 == 1) {
      *(undefined1 *)(puVar4 + 2) = *puVar8;
      goto LAB_7100047fec;
    }
    if (uVar2 != 0) goto LAB_7100048344;
    puVar4[1] = 0;
    lVar7 = lVar7 + 1;
    puVar4 = puVar4 + 4;
    *(undefined1 *)puVar6 = 0;
  } while (lVar7 != 0x13);
LAB_7100048050:
  puVar4 = (undefined8 *)&DAT_7100d0a208;
  lVar7 = 0;
  FUN_710006ec60(0x7100d0a1e8,&DAT_710083b658,&local_8);
  do {
    while( true ) {
      puVar6 = puVar4 + 2;
      puVar8 = (&PTR_DAT_7100ade698)[lVar7];
      *puVar4 = puVar6;
      if (puVar8 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003ab8("basic_string: construction from null is not valid");
      }
      uVar2 = FUN_710081ce00(puVar8);
      local_8 = uVar2;
      if (uVar2 < 0x10) break;
      puVar6 = (undefined8 *)FUN_71007e2140(puVar4,&local_8,0);
      *puVar4 = puVar6;
      puVar4[2] = local_8;
LAB_71000483c4:
      FUN_710080f900(puVar6,puVar8,uVar2);
      puVar6 = (undefined8 *)*puVar4;
LAB_7100048088:
      puVar4[1] = local_8;
      lVar7 = lVar7 + 1;
      puVar4 = puVar4 + 4;
      *(undefined1 *)((long)puVar6 + local_8) = 0;
      if (lVar7 == 7) goto LAB_71000480ec;
    }
    if (uVar2 == 1) {
      *(undefined1 *)(puVar4 + 2) = *puVar8;
      goto LAB_7100048088;
    }
    if (uVar2 != 0) goto LAB_71000483c4;
    puVar4[1] = 0;
    lVar7 = lVar7 + 1;
    puVar4 = puVar4 + 4;
    *(undefined1 *)puVar6 = 0;
  } while (lVar7 != 7);
LAB_71000480ec:
  puVar4 = (undefined8 *)&DAT_7100d0a2e8;
  lVar7 = 0;
  do {
    puVar6 = puVar4 + 2;
    puVar8 = (&PTR_DAT_7100ade6d0)[lVar7];
    *puVar4 = puVar6;
    if (puVar8 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    uVar2 = FUN_710081ce00(puVar8);
    local_8 = uVar2;
    if (uVar2 < 0x10) {
      if (uVar2 == 1) {
        *(undefined1 *)(puVar4 + 2) = *puVar8;
      }
      else if (uVar2 != 0) goto LAB_7100048490;
    }
    else {
      puVar6 = (undefined8 *)FUN_71007e2140(puVar4,&local_8,0);
      *puVar4 = puVar6;
      puVar4[2] = local_8;
LAB_7100048490:
      FUN_710080f900(puVar6,puVar8,uVar2);
      puVar6 = (undefined8 *)*puVar4;
    }
    puVar4[1] = local_8;
    puVar4 = puVar4 + 4;
    *(undefined1 *)((long)puVar6 + local_8) = 0;
    bVar1 = lVar7 != 1;
    lVar7 = 1;
  } while (bVar1);
  puVar4 = (undefined8 *)&DAT_7100d0a328;
  lVar7 = 0;
  do {
    puVar6 = puVar4 + 2;
    puVar8 = (&PTR_DAT_7100ade6e0)[lVar7];
    *puVar4 = puVar6;
    if (puVar8 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    uVar2 = FUN_710081ce00(puVar8);
    local_8 = uVar2;
    if (uVar2 < 0x10) {
      if (uVar2 == 1) {
        *(undefined1 *)(puVar4 + 2) = *puVar8;
      }
      else if (uVar2 != 0) goto LAB_7100048454;
    }
    else {
      puVar6 = (undefined8 *)FUN_71007e2140(puVar4,&local_8,0);
      *puVar4 = puVar6;
      puVar4[2] = local_8;
LAB_7100048454:
      FUN_710080f900(puVar6,puVar8,uVar2);
      puVar6 = (undefined8 *)*puVar4;
    }
    puVar4[1] = local_8;
    puVar4 = puVar4 + 4;
    *(undefined1 *)((long)puVar6 + local_8) = 0;
    lVar5 = 1;
    bVar1 = lVar7 != 1;
    lVar7 = lVar5;
  } while (bVar1);
  ppuVar3 = &PTR_DAT_7100ade5a0;
  puVar8 = &DAT_7100d09e08;
  do {
    FUN_710006ec60(puVar8,*ppuVar3,&local_8);
    lVar5 = lVar5 + -1;
    puVar8 = puVar8 + 0x20;
    ppuVar3 = ppuVar3 + 1;
  } while (lVar5 != -1);
  puVar4 = (undefined8 *)&DAT_7100d0a368;
  lVar7 = 0;
  do {
    puVar6 = puVar4 + 2;
    puVar8 = (&PTR_DAT_7100ade6f0)[lVar7];
    *puVar4 = puVar6;
    if (puVar8 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    uVar2 = FUN_710081ce00(puVar8);
    local_8 = uVar2;
    if (uVar2 < 0x10) {
      if (uVar2 == 1) {
        *(undefined1 *)(puVar4 + 2) = *puVar8;
      }
      else if (uVar2 != 0) goto LAB_7100048408;
    }
    else {
      puVar6 = (undefined8 *)FUN_71007e2140(puVar4,&local_8,0);
      *puVar4 = puVar6;
      puVar4[2] = local_8;
LAB_7100048408:
      FUN_710080f900(puVar6,puVar8,uVar2);
      puVar6 = (undefined8 *)*puVar4;
    }
    puVar4[1] = local_8;
    lVar7 = lVar7 + 1;
    puVar4 = puVar4 + 4;
    *(undefined1 *)((long)puVar6 + local_8) = 0;
    if (lVar7 == 3) {
      FUN_710006ec60(0x7100d0a3c8,&DAT_710083b660,&local_8);
      FUN_710006ec60(0x7100d0a3e8,".*\\.?\\[?([0-9a-fA-F]{16})\\]?(\\[v([0-9]+)\\])?\\.romfs\\.bin",
                     &local_8);
      FUN_71007e0600(0x7100d0a418);
      _DAT_7100d0a420 = 0;
      _DAT_7100d0a428 = 0;
      FUN_71001ad7e0(0x7100d0a410,&DAT_710083b6a8,&DAT_710083b6ee,1);
      _DAT_7100d09de8 = 0;
      _DAT_7100d09df0 = 0;
      _DAT_7100d09dc0 = 0;
      _DAT_7100d09dc8 = &DAT_7100d09db8;
      _DAT_7100d09dd0 = &DAT_7100d09db8;
      _DAT_7100d09dd8 = 0;
      _DAT_7100d09df8 = &DAT_7100d09de8;
      _DAT_7100d09e00 = &DAT_7100d09de8;
      _DAT_7100d09db8 = 0;
      _DAT_7100d09de0 = 0;
      return;
    }
  } while( true );
}



// ===== FUN_71000486a0 @ 71000486a0 (size=180) =====

void FUN_71000486a0(long *param_1,undefined1 *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong local_8;
  
  plVar2 = param_1 + 2;
  *param_1 = (long)plVar2;
  if (param_2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string: construction from null is not valid");
  }
  uVar1 = FUN_710081ce00(param_2);
  local_8 = uVar1;
  if (uVar1 < 0x10) {
    if (uVar1 == 1) {
      *(undefined1 *)(param_1 + 2) = *param_2;
      goto LAB_71000486ec;
    }
    if (uVar1 == 0) goto LAB_71000486ec;
  }
  else {
    plVar2 = (long *)FUN_71007e2140(param_1,&local_8,0);
    *param_1 = (long)plVar2;
    param_1[2] = local_8;
  }
  FUN_710080f900(plVar2,param_2,uVar1);
LAB_71000486ec:
  param_1[1] = local_8;
  *(undefined1 *)(*param_1 + local_8) = 0;
  return;
}



// ===== FUN_7100048760 @ 7100048760 (size=344) =====

void FUN_7100048760(void)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = DAT_7100af8560 + 1;
  bVar2 = DAT_7100af8560 == 0;
  DAT_7100af8560 = lVar1;
  if (bVar2) {
    FUN_71000486a0(&DAT_7100af21b0,&DAT_7100838080);
    FUN_71000486a0(&DAT_7100af21d8,&DAT_7100853d20);
    FUN_71000486a0(&DAT_7100af21f8,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8558 + 1;
  bVar2 = DAT_7100af8558 == 0;
  DAT_7100af8558 = lVar1;
  if (bVar2) {
    FUN_71000486a0(&DAT_7100af2138,&DAT_7100838080);
    FUN_71000486a0(&DAT_7100af2160,&DAT_7100853d20);
    FUN_71000486a0(&DAT_7100af2180,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8550 + 1;
  bVar2 = DAT_7100af8550 == 0;
  DAT_7100af8550 = lVar1;
  if (bVar2) {
    FUN_71000486a0(&DAT_7100af20c0,&DAT_7100838080);
    FUN_71000486a0(&DAT_7100af20e8,&DAT_7100853d20);
    FUN_71000486a0(&DAT_7100af2108,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8548 + 1;
  bVar2 = DAT_7100af8548 == 0;
  DAT_7100af8548 = lVar1;
  if (bVar2) {
    FUN_71000486a0(&DAT_7100af2048,&DAT_7100838088);
    FUN_71000486a0(&DAT_7100af2070,&DAT_7100853d20);
    FUN_71000486a0(&DAT_7100af2090,&DAT_7100853d20);
  }
  return;
}



// ===== FUN_7100048960 @ 7100048960 (size=344) =====

void FUN_7100048960(void)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = DAT_7100af8560 + 1;
  bVar2 = DAT_7100af8560 == 0;
  DAT_7100af8560 = lVar1;
  if (bVar2) {
    FUN_710037fd20(&DAT_7100af21b0,&DAT_7100838080);
    FUN_710037fd20(&DAT_7100af21d8,&DAT_7100853d20);
    FUN_710037fd20(&DAT_7100af21f8,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8558 + 1;
  bVar2 = DAT_7100af8558 == 0;
  DAT_7100af8558 = lVar1;
  if (bVar2) {
    FUN_710037fd20(&DAT_7100af2138,&DAT_7100838080);
    FUN_710037fd20(&DAT_7100af2160,&DAT_7100853d20);
    FUN_710037fd20(&DAT_7100af2180,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8550 + 1;
  bVar2 = DAT_7100af8550 == 0;
  DAT_7100af8550 = lVar1;
  if (bVar2) {
    FUN_710037fd20(&DAT_7100af20c0,&DAT_7100838080);
    FUN_710037fd20(&DAT_7100af20e8,&DAT_7100853d20);
    FUN_710037fd20(&DAT_7100af2108,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8548 + 1;
  bVar2 = DAT_7100af8548 == 0;
  DAT_7100af8548 = lVar1;
  if (bVar2) {
    FUN_710037fd20(&DAT_7100af2048,&DAT_7100838088);
    FUN_710037fd20(&DAT_7100af2070,&DAT_7100853d20);
    FUN_710037fd20(&DAT_7100af2090,&DAT_7100853d20);
  }
  return;
}



// ===== FUN_7100048b60 @ 7100048b60 (size=344) =====

void FUN_7100048b60(void)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = DAT_7100af8560 + 1;
  bVar2 = DAT_7100af8560 == 0;
  DAT_7100af8560 = lVar1;
  if (bVar2) {
    FUN_71003a6850(&DAT_7100af21b0,&DAT_7100838080);
    FUN_71003a6850(&DAT_7100af21d8,&DAT_7100853d20);
    FUN_71003a6850(&DAT_7100af21f8,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8558 + 1;
  bVar2 = DAT_7100af8558 == 0;
  DAT_7100af8558 = lVar1;
  if (bVar2) {
    FUN_71003a6850(&DAT_7100af2138,&DAT_7100838080);
    FUN_71003a6850(&DAT_7100af2160,&DAT_7100853d20);
    FUN_71003a6850(&DAT_7100af2180,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8550 + 1;
  bVar2 = DAT_7100af8550 == 0;
  DAT_7100af8550 = lVar1;
  if (bVar2) {
    FUN_71003a6850(&DAT_7100af20c0,&DAT_7100838080);
    FUN_71003a6850(&DAT_7100af20e8,&DAT_7100853d20);
    FUN_71003a6850(&DAT_7100af2108,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8548 + 1;
  bVar2 = DAT_7100af8548 == 0;
  DAT_7100af8548 = lVar1;
  if (bVar2) {
    FUN_71003a6850(&DAT_7100af2048,&DAT_7100838088);
    FUN_71003a6850(&DAT_7100af2070,&DAT_7100853d20);
    FUN_71003a6850(&DAT_7100af2090,&DAT_7100853d20);
  }
  return;
}



// ===== FUN_7100048d60 @ 7100048d60 (size=344) =====

void FUN_7100048d60(void)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = DAT_7100af8560 + 1;
  bVar2 = DAT_7100af8560 == 0;
  DAT_7100af8560 = lVar1;
  if (bVar2) {
    FUN_71003d0220(&DAT_7100af21b0,&DAT_7100838080);
    FUN_71003d0220(&DAT_7100af21d8,&DAT_7100853d20);
    FUN_71003d0220(&DAT_7100af21f8,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8558 + 1;
  bVar2 = DAT_7100af8558 == 0;
  DAT_7100af8558 = lVar1;
  if (bVar2) {
    FUN_71003d0220(&DAT_7100af2138,&DAT_7100838080);
    FUN_71003d0220(&DAT_7100af2160,&DAT_7100853d20);
    FUN_71003d0220(&DAT_7100af2180,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8550 + 1;
  bVar2 = DAT_7100af8550 == 0;
  DAT_7100af8550 = lVar1;
  if (bVar2) {
    FUN_71003d0220(&DAT_7100af20c0,&DAT_7100838080);
    FUN_71003d0220(&DAT_7100af20e8,&DAT_7100853d20);
    FUN_71003d0220(&DAT_7100af2108,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8548 + 1;
  bVar2 = DAT_7100af8548 == 0;
  DAT_7100af8548 = lVar1;
  if (bVar2) {
    FUN_71003d0220(&DAT_7100af2048,&DAT_7100838088);
    FUN_71003d0220(&DAT_7100af2070,&DAT_7100853d20);
    FUN_71003d0220(&DAT_7100af2090,&DAT_7100853d20);
  }
  return;
}



// ===== FUN_7100048f60 @ 7100048f60 (size=392) =====

void FUN_7100048f60(void)

{
  long lVar1;
  bool bVar2;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  undefined1 auStack_8 [8];
  
  lVar1 = DAT_7100af8560 + 1;
  bVar2 = DAT_7100af8560 == 0;
  DAT_7100af8560 = lVar1;
  if (bVar2) {
    FUN_710006ec60(&DAT_7100af21b0,&DAT_7100838080,auStack_8);
    FUN_710006ec60(&DAT_7100af21d8,&DAT_7100853d20,auStack_10);
    FUN_710006ec60(&DAT_7100af21f8,&DAT_7100853d20,auStack_18);
  }
  lVar1 = DAT_7100af8558 + 1;
  bVar2 = DAT_7100af8558 == 0;
  DAT_7100af8558 = lVar1;
  if (bVar2) {
    FUN_710006ec60(&DAT_7100af2138,&DAT_7100838080,auStack_8);
    FUN_710006ec60(&DAT_7100af2160,&DAT_7100853d20,auStack_10);
    FUN_710006ec60(&DAT_7100af2180,&DAT_7100853d20,auStack_18);
  }
  lVar1 = DAT_7100af8550 + 1;
  bVar2 = DAT_7100af8550 == 0;
  DAT_7100af8550 = lVar1;
  if (bVar2) {
    FUN_710006ec60(&DAT_7100af20c0,&DAT_7100838080,auStack_8);
    FUN_710006ec60(&DAT_7100af20e8,&DAT_7100853d20,auStack_10);
    FUN_710006ec60(&DAT_7100af2108,&DAT_7100853d20,auStack_18);
  }
  lVar1 = DAT_7100af8548 + 1;
  bVar2 = DAT_7100af8548 == 0;
  DAT_7100af8548 = lVar1;
  if (bVar2) {
    FUN_710006ec60(&DAT_7100af2048,&DAT_7100838088,auStack_8);
    FUN_710006ec60(&DAT_7100af2070,&DAT_7100853d20,auStack_10);
    FUN_710006ec60(&DAT_7100af2090,&DAT_7100853d20,auStack_18);
  }
  return;
}



// ===== FUN_7100049190 @ 7100049190 (size=344) =====

void FUN_7100049190(void)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = DAT_7100af8560 + 1;
  bVar2 = DAT_7100af8560 == 0;
  DAT_7100af8560 = lVar1;
  if (bVar2) {
    FUN_7100409e50(&DAT_7100af21b0,&DAT_7100838080);
    FUN_7100409e50(&DAT_7100af21d8,&DAT_7100853d20);
    FUN_7100409e50(&DAT_7100af21f8,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8558 + 1;
  bVar2 = DAT_7100af8558 == 0;
  DAT_7100af8558 = lVar1;
  if (bVar2) {
    FUN_7100409e50(&DAT_7100af2138,&DAT_7100838080);
    FUN_7100409e50(&DAT_7100af2160,&DAT_7100853d20);
    FUN_7100409e50(&DAT_7100af2180,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8550 + 1;
  bVar2 = DAT_7100af8550 == 0;
  DAT_7100af8550 = lVar1;
  if (bVar2) {
    FUN_7100409e50(&DAT_7100af20c0,&DAT_7100838080);
    FUN_7100409e50(&DAT_7100af20e8,&DAT_7100853d20);
    FUN_7100409e50(&DAT_7100af2108,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8548 + 1;
  bVar2 = DAT_7100af8548 == 0;
  DAT_7100af8548 = lVar1;
  if (bVar2) {
    FUN_7100409e50(&DAT_7100af2048,&DAT_7100838088);
    FUN_7100409e50(&DAT_7100af2070,&DAT_7100853d20);
    FUN_7100409e50(&DAT_7100af2090,&DAT_7100853d20);
  }
  return;
}



// ===== FUN_7100049390 @ 7100049390 (size=208) =====

void FUN_7100049390(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = (long)param_3 - (long)param_2;
  if (0x1ffffffffffffff8 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("cannot create std::vector larger than max_size()");
  }
  plVar4 = (long *)0x0;
  if (uVar1 != 0) {
    plVar4 = (long *)FUN_71007af5c0(uVar1 * 4);
  }
  *param_1 = plVar4;
  param_1[2] = (long)plVar4 + uVar1 * 4;
  if (param_3 != param_2) {
    do {
      lVar3 = *param_2;
      *plVar4 = (long)(plVar4 + 2);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003ab8("basic_string: construction from null is not valid");
      }
      lVar2 = FUN_710081ce00(lVar3);
      FUN_710042eb20(plVar4,lVar3,lVar3 + lVar2);
      param_2 = param_2 + 1;
      plVar4 = plVar4 + 4;
    } while (param_3 != param_2);
  }
  param_1[1] = plVar4;
  return;
}



// ===== FUN_71000494a0 @ 71000494a0 (size=604) =====

void FUN_71000494a0(void)

{
  char *local_8;
  
  FUN_7100049390(0x7100d0a478,&PTR_s_American_English_7100ade9d0,&PTR_DAT_7100adea60);
  FUN_7100049390(0x7100d0a490,&PTR_DAT_7100adea60,&PTR_s_Disable_7100adea78);
  FUN_7100049390(0x7100d0a4a8,&PTR_s_Disable_7100adea78,&PTR_s_Allow_7100adea88);
  FUN_7100049390(0x7100d0a4c0,&PTR_s_Allow_7100adea88,&PTR_s_Disable_7100adea98);
  FUN_7100049390(0x7100d0a4d8,&PTR_s_Disable_7100adea98,&PTR_DAT_7100adeab0);
  FUN_7100049390(0x7100d0a4f0,&PTR_DAT_7100adeab0,&PTR_DAT_7100adeac0);
  FUN_7100049390(0x7100d0a508,&PTR_DAT_7100adeac0,&PTR_s_Licensed_By_Nintendo_7100adeae0);
  FUN_7100049390(0x7100d0a520,&PTR_s_Licensed_By_Nintendo_7100adeae0,&PTR_DAT_7100adeaf8);
  FUN_7100049390(0x7100d0a538,&PTR_DAT_7100adeaf8,&PTR_DAT_7100adeb08);
  FUN_7100049390(0x7100d0a550,&PTR_DAT_7100adeab0,&PTR_DAT_7100adeac0);
  FUN_7100049390(0x7100d0a568,&PTR_DAT_7100adeb08,&PTR_s_All_On_Launch_7100adeb18);
  FUN_7100049390(0x7100d0a580,&PTR_s_All_On_Launch_7100adeb18,&PTR_DAT_7100adeb28);
  local_8 = "Is optional";
  FUN_7100049390(0x7100d0a598,&local_8,&stack0x00000000);
  FUN_7100049390(0x7100d0a5b0,&PTR_DAT_7100adeb28,&PTR_DAT_7100adeb38);
  local_8 = "Free communication";
  FUN_7100049390(0x7100d0a5c8,&local_8,&stack0x00000000);
  local_8 = "Suppress Gamecard Access";
  FUN_7100049390(0x7100d0a5e0,&local_8,&stack0x00000000);
  local_8 = "Common";
  FUN_7100049390(0x7100d0a5f8,&local_8,&stack0x00000000);
  FUN_7100049390(0x7100d0a610,&PTR_DAT_7100adeb38,&PTR_s_RomFs_7100adeb48);
  FUN_7100049390(0x7100d0a628,&PTR_DAT_7100adeb08,&PTR_s_All_On_Launch_7100adeb18);
  FUN_7100049390(0x7100d0a640,&PTR_DAT_7100adeb08,&PTR_s_All_On_Launch_7100adeb18);
  FUN_7100049390(&DAT_7100d0a430,&PTR_s_RomFs_7100adeb48,&PTR_DAT_7100adeb58);
  FUN_7100049390(&DAT_7100d0a448,&PTR_DAT_7100adeb58,&PTR_DAT_7100adeb78);
  FUN_7100049390(&DAT_7100d0a460,&PTR_DAT_7100adeb78,&PTR_DAT_7100adeba0);
  FUN_7100049390(0x7100d0a658,&PTR_DAT_7100adeba0,&PTR_s_Always_7100adebb8);
  FUN_7100049390(0x7100d0a670,&PTR_s_Always_7100adebb8,&PTR_DAT_7100adebd0);
  FUN_7100049390(0x7100d0a688,&PTR_DAT_7100adebd0,&PTR_s_Address_space_32Bit_7100adebe8);
  FUN_7100049390(0x7100d0a6a0,&PTR_s_Address_space_32Bit_7100adebe8,&PTR_s_Application_7100adec08);
  FUN_7100049390(0x7100d0a6b8,&PTR_s_Application_7100adec08,&PTR_s_System_7100adec28);
  FUN_7100049390(0x7100d0a6d0,&PTR_s_System_7100adec28,&PTR_s_ApplicationInfo_7100adec40);
  FUN_7100049390(0x7100d0a6e8,&PTR_s_ApplicationInfo_7100adec40,&PTR_s_svcUnknown00_7100adee40);
  FUN_7100049390(0x7100d0a700,&PTR_s_svcUnknown00_7100adee40,&DAT_7100adf2d0);
  return;
}



// ===== FUN_7100049700 @ 7100049700 (size=344) =====

void FUN_7100049700(void)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = DAT_7100af8560 + 1;
  bVar2 = DAT_7100af8560 == 0;
  DAT_7100af8560 = lVar1;
  if (bVar2) {
    FUN_7100433920(&DAT_7100af21b0,&DAT_7100838080);
    FUN_7100433920(&DAT_7100af21d8,&DAT_7100853d20);
    FUN_7100433920(&DAT_7100af21f8,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8558 + 1;
  bVar2 = DAT_7100af8558 == 0;
  DAT_7100af8558 = lVar1;
  if (bVar2) {
    FUN_7100433920(&DAT_7100af2138,&DAT_7100838080);
    FUN_7100433920(&DAT_7100af2160,&DAT_7100853d20);
    FUN_7100433920(&DAT_7100af2180,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8550 + 1;
  bVar2 = DAT_7100af8550 == 0;
  DAT_7100af8550 = lVar1;
  if (bVar2) {
    FUN_7100433920(&DAT_7100af20c0,&DAT_7100838080);
    FUN_7100433920(&DAT_7100af20e8,&DAT_7100853d20);
    FUN_7100433920(&DAT_7100af2108,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8548 + 1;
  bVar2 = DAT_7100af8548 == 0;
  DAT_7100af8548 = lVar1;
  if (bVar2) {
    FUN_7100433920(&DAT_7100af2048,&DAT_7100838088);
    FUN_7100433920(&DAT_7100af2070,&DAT_7100853d20);
    FUN_7100433920(&DAT_7100af2090,&DAT_7100853d20);
  }
  return;
}



// ===== FUN_7100049900 @ 7100049900 (size=264) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100049900(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *local_20 [2];
  long local_10 [2];
  
  local_20[0] = local_10;
  FUN_7100452fc0(local_20,"default","");
  FUN_71007e1100(0x7100d0b100,local_20);
  if (local_20[0] != local_10) {
    thunk_FUN_710081c200(local_20[0],local_10[0] + 1);
  }
  uVar1 = thunk_FUN_7100457980(0x7100d0b100);
  lVar2 = FUN_71007b1860();
  lVar3 = FUN_71007b1860();
  _DAT_7100d0b0f0 = 1;
  uVar1 = (int)(lVar3 / 1000) + (int)(lVar2 / 1000000000) ^ uVar1;
  _DAT_7100d0a730 = uVar1;
  do {
    uVar1 = (int)_DAT_7100d0b0f0 + (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965;
    *(uint *)(&DAT_7100d0a730 + _DAT_7100d0b0f0 * 4) = uVar1;
    _DAT_7100d0b0f0 = _DAT_7100d0b0f0 + 1;
  } while (_DAT_7100d0b0f0 != 0x270);
  _DAT_7100d0a728 = 0x1300000000;
  _DAT_7100d0b0f8 = 0x900000001;
  return;
}



// ===== FUN_7100049a20 @ 7100049a20 (size=344) =====

void FUN_7100049a20(void)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = DAT_7100af8560 + 1;
  bVar2 = DAT_7100af8560 == 0;
  DAT_7100af8560 = lVar1;
  if (bVar2) {
    FUN_710045aa20(&DAT_7100af21b0,&DAT_7100838080);
    FUN_710045aa20(&DAT_7100af21d8,&DAT_7100853d20);
    FUN_710045aa20(&DAT_7100af21f8,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8558 + 1;
  bVar2 = DAT_7100af8558 == 0;
  DAT_7100af8558 = lVar1;
  if (bVar2) {
    FUN_710045aa20(&DAT_7100af2138,&DAT_7100838080);
    FUN_710045aa20(&DAT_7100af2160,&DAT_7100853d20);
    FUN_710045aa20(&DAT_7100af2180,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8550 + 1;
  bVar2 = DAT_7100af8550 == 0;
  DAT_7100af8550 = lVar1;
  if (bVar2) {
    FUN_710045aa20(&DAT_7100af20c0,&DAT_7100838080);
    FUN_710045aa20(&DAT_7100af20e8,&DAT_7100853d20);
    FUN_710045aa20(&DAT_7100af2108,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8548 + 1;
  bVar2 = DAT_7100af8548 == 0;
  DAT_7100af8548 = lVar1;
  if (bVar2) {
    FUN_710045aa20(&DAT_7100af2048,&DAT_7100838088);
    FUN_710045aa20(&DAT_7100af2070,&DAT_7100853d20);
    FUN_710045aa20(&DAT_7100af2090,&DAT_7100853d20);
  }
  return;
}



// ===== FUN_7100049c20 @ 7100049c20 (size=344) =====

void FUN_7100049c20(void)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = DAT_7100af8560 + 1;
  bVar2 = DAT_7100af8560 == 0;
  DAT_7100af8560 = lVar1;
  if (bVar2) {
    FUN_710046ec10(&DAT_7100af21b0,&DAT_7100838080);
    FUN_710046ec10(&DAT_7100af21d8,&DAT_7100853d20);
    FUN_710046ec10(&DAT_7100af21f8,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8558 + 1;
  bVar2 = DAT_7100af8558 == 0;
  DAT_7100af8558 = lVar1;
  if (bVar2) {
    FUN_710046ec10(&DAT_7100af2138,&DAT_7100838080);
    FUN_710046ec10(&DAT_7100af2160,&DAT_7100853d20);
    FUN_710046ec10(&DAT_7100af2180,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8550 + 1;
  bVar2 = DAT_7100af8550 == 0;
  DAT_7100af8550 = lVar1;
  if (bVar2) {
    FUN_710046ec10(&DAT_7100af20c0,&DAT_7100838080);
    FUN_710046ec10(&DAT_7100af20e8,&DAT_7100853d20);
    FUN_710046ec10(&DAT_7100af2108,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8548 + 1;
  bVar2 = DAT_7100af8548 == 0;
  DAT_7100af8548 = lVar1;
  if (bVar2) {
    FUN_710046ec10(&DAT_7100af2048,&DAT_7100838088);
    FUN_710046ec10(&DAT_7100af2070,&DAT_7100853d20);
    FUN_710046ec10(&DAT_7100af2090,&DAT_7100853d20);
  }
  return;
}



// ===== FUN_7100049e20 @ 7100049e20 (size=344) =====

void FUN_7100049e20(void)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = DAT_7100af8560 + 1;
  bVar2 = DAT_7100af8560 == 0;
  DAT_7100af8560 = lVar1;
  if (bVar2) {
    FUN_7100481b40(&DAT_7100af21b0,&DAT_7100838080);
    FUN_7100481b40(&DAT_7100af21d8,&DAT_7100853d20);
    FUN_7100481b40(&DAT_7100af21f8,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8558 + 1;
  bVar2 = DAT_7100af8558 == 0;
  DAT_7100af8558 = lVar1;
  if (bVar2) {
    FUN_7100481b40(&DAT_7100af2138,&DAT_7100838080);
    FUN_7100481b40(&DAT_7100af2160,&DAT_7100853d20);
    FUN_7100481b40(&DAT_7100af2180,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8550 + 1;
  bVar2 = DAT_7100af8550 == 0;
  DAT_7100af8550 = lVar1;
  if (bVar2) {
    FUN_7100481b40(&DAT_7100af20c0,&DAT_7100838080);
    FUN_7100481b40(&DAT_7100af20e8,&DAT_7100853d20);
    FUN_7100481b40(&DAT_7100af2108,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8548 + 1;
  bVar2 = DAT_7100af8548 == 0;
  DAT_7100af8548 = lVar1;
  if (bVar2) {
    FUN_7100481b40(&DAT_7100af2048,&DAT_7100838088);
    FUN_7100481b40(&DAT_7100af2070,&DAT_7100853d20);
    FUN_7100481b40(&DAT_7100af2090,&DAT_7100853d20);
  }
  return;
}



// ===== FUN_710004a020 @ 710004a020 (size=344) =====

void FUN_710004a020(void)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = DAT_7100af8560 + 1;
  bVar2 = DAT_7100af8560 == 0;
  DAT_7100af8560 = lVar1;
  if (bVar2) {
    FUN_7100499050(&DAT_7100af21b0,&DAT_7100838080);
    FUN_7100499050(&DAT_7100af21d8,&DAT_7100853d20);
    FUN_7100499050(&DAT_7100af21f8,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8558 + 1;
  bVar2 = DAT_7100af8558 == 0;
  DAT_7100af8558 = lVar1;
  if (bVar2) {
    FUN_7100499050(&DAT_7100af2138,&DAT_7100838080);
    FUN_7100499050(&DAT_7100af2160,&DAT_7100853d20);
    FUN_7100499050(&DAT_7100af2180,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8550 + 1;
  bVar2 = DAT_7100af8550 == 0;
  DAT_7100af8550 = lVar1;
  if (bVar2) {
    FUN_7100499050(&DAT_7100af20c0,&DAT_7100838080);
    FUN_7100499050(&DAT_7100af20e8,&DAT_7100853d20);
    FUN_7100499050(&DAT_7100af2108,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8548 + 1;
  bVar2 = DAT_7100af8548 == 0;
  DAT_7100af8548 = lVar1;
  if (bVar2) {
    FUN_7100499050(&DAT_7100af2048,&DAT_7100838088);
    FUN_7100499050(&DAT_7100af2070,&DAT_7100853d20);
    FUN_7100499050(&DAT_7100af2090,&DAT_7100853d20);
  }
  return;
}



// ===== FUN_710004a240 @ 710004a240 (size=344) =====

void FUN_710004a240(void)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = DAT_7100af8560 + 1;
  bVar2 = DAT_7100af8560 == 0;
  DAT_7100af8560 = lVar1;
  if (bVar2) {
    FUN_71004ab790(&DAT_7100af21b0,&DAT_7100838080);
    FUN_71004ab790(&DAT_7100af21d8,&DAT_7100853d20);
    FUN_71004ab790(&DAT_7100af21f8,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8558 + 1;
  bVar2 = DAT_7100af8558 == 0;
  DAT_7100af8558 = lVar1;
  if (bVar2) {
    FUN_71004ab790(&DAT_7100af2138,&DAT_7100838080);
    FUN_71004ab790(&DAT_7100af2160,&DAT_7100853d20);
    FUN_71004ab790(&DAT_7100af2180,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8550 + 1;
  bVar2 = DAT_7100af8550 == 0;
  DAT_7100af8550 = lVar1;
  if (bVar2) {
    FUN_71004ab790(&DAT_7100af20c0,&DAT_7100838080);
    FUN_71004ab790(&DAT_7100af20e8,&DAT_7100853d20);
    FUN_71004ab790(&DAT_7100af2108,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8548 + 1;
  bVar2 = DAT_7100af8548 == 0;
  DAT_7100af8548 = lVar1;
  if (bVar2) {
    FUN_71004ab790(&DAT_7100af2048,&DAT_7100838088);
    FUN_71004ab790(&DAT_7100af2070,&DAT_7100853d20);
    FUN_71004ab790(&DAT_7100af2090,&DAT_7100853d20);
  }
  return;
}



// ===== FUN_710004a440 @ 710004a440 (size=208) =====

void FUN_710004a440(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = (long)param_3 - (long)param_2;
  if (0x1ffffffffffffff8 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("cannot create std::vector larger than max_size()");
  }
  plVar4 = (long *)0x0;
  if (uVar1 != 0) {
    plVar4 = (long *)FUN_71007af5c0(uVar1 * 4);
  }
  *param_1 = plVar4;
  param_1[2] = (long)plVar4 + uVar1 * 4;
  if (param_3 != param_2) {
    do {
      lVar3 = *param_2;
      *plVar4 = (long)(plVar4 + 2);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003ab8("basic_string: construction from null is not valid");
      }
      lVar2 = FUN_710081ce00(lVar3);
      FUN_71004cef20(plVar4,lVar3,lVar3 + lVar2);
      param_2 = param_2 + 1;
      plVar4 = plVar4 + 4;
    } while (param_3 != param_2);
  }
  param_1[1] = plVar4;
  return;
}



// ===== FUN_710004a550 @ 710004a550 (size=604) =====

void FUN_710004a550(void)

{
  char *local_8;
  
  FUN_710004a440(0x7100d0bae8,&PTR_s_American_English_7100adf7b8,&PTR_DAT_7100adf848);
  FUN_710004a440(0x7100d0bb00,&PTR_DAT_7100adf848,&PTR_s_Disable_7100adf860);
  FUN_710004a440(0x7100d0bb18,&PTR_s_Disable_7100adf860,&PTR_s_Allow_7100adf870);
  FUN_710004a440(0x7100d0bb30,&PTR_s_Allow_7100adf870,&PTR_s_Disable_7100adf880);
  FUN_710004a440(0x7100d0bb48,&PTR_s_Disable_7100adf880,&PTR_DAT_7100adf898);
  FUN_710004a440(0x7100d0bb60,&PTR_DAT_7100adf898,&PTR_DAT_7100adf8a8);
  FUN_710004a440(0x7100d0bb78,&PTR_DAT_7100adf8a8,&PTR_s_Licensed_By_Nintendo_7100adf8c8);
  FUN_710004a440(0x7100d0bb90,&PTR_s_Licensed_By_Nintendo_7100adf8c8,&PTR_DAT_7100adf8e0);
  FUN_710004a440(0x7100d0bba8,&PTR_DAT_7100adf8e0,&PTR_DAT_7100adf8f0);
  FUN_710004a440(0x7100d0bbc0,&PTR_DAT_7100adf898,&PTR_DAT_7100adf8a8);
  FUN_710004a440(0x7100d0bbd8,&PTR_DAT_7100adf8f0,&PTR_s_All_On_Launch_7100adf900);
  FUN_710004a440(0x7100d0bbf0,&PTR_s_All_On_Launch_7100adf900,&PTR_DAT_7100adf910);
  local_8 = "Is optional";
  FUN_710004a440(0x7100d0bc08,&local_8,&stack0x00000000);
  FUN_710004a440(0x7100d0bc20,&PTR_DAT_7100adf910,&PTR_DAT_7100adf920);
  local_8 = "Free communication";
  FUN_710004a440(0x7100d0bc38,&local_8,&stack0x00000000);
  local_8 = "Suppress Gamecard Access";
  FUN_710004a440(0x7100d0bc50,&local_8,&stack0x00000000);
  local_8 = "Common";
  FUN_710004a440(0x7100d0bc68,&local_8,&stack0x00000000);
  FUN_710004a440(0x7100d0bc80,&PTR_DAT_7100adf920,&PTR_s_RomFs_7100adf930);
  FUN_710004a440(0x7100d0bc98,&PTR_DAT_7100adf8f0,&PTR_s_All_On_Launch_7100adf900);
  FUN_710004a440(0x7100d0bcb0,&PTR_DAT_7100adf8f0,&PTR_s_All_On_Launch_7100adf900);
  FUN_710004a440(0x7100d0bcc8,&PTR_s_RomFs_7100adf930,&PTR_DAT_7100adf940);
  FUN_710004a440(0x7100d0bce0,&PTR_DAT_7100adf940,&PTR_DAT_7100adf960);
  FUN_710004a440(0x7100d0bcf8,&PTR_DAT_7100adf960,&PTR_DAT_7100adf988);
  FUN_710004a440(0x7100d0bd10,&PTR_DAT_7100adf988,&PTR_s_Always_7100adf9a0);
  FUN_710004a440(0x7100d0bd28,&PTR_s_Always_7100adf9a0,&PTR_DAT_7100adf9b8);
  FUN_710004a440(0x7100d0bd40,&PTR_DAT_7100adf9b8,&PTR_s_Address_space_32Bit_7100adf9d0);
  FUN_710004a440(0x7100d0bd58,&PTR_s_Address_space_32Bit_7100adf9d0,&PTR_s_Application_7100adf9f0);
  FUN_710004a440(0x7100d0bd70,&PTR_s_Application_7100adf9f0,&PTR_s_System_7100adfa10);
  FUN_710004a440(0x7100d0bd88,&PTR_s_System_7100adfa10,&PTR_s_ApplicationInfo_7100adfa28);
  FUN_710004a440(0x7100d0bda0,&PTR_s_ApplicationInfo_7100adfa28,&PTR_s_svcUnknown00_7100adfc28);
  FUN_710004a440(0x7100d0bdb8,&PTR_s_svcUnknown00_7100adfc28,&PTR_s_American_English_7100ae00b8);
  return;
}



// ===== FUN_710004a7b0 @ 710004a7b0 (size=416) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710004a7b0(void)

{
  long lVar1;
  bool bVar2;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  undefined1 auStack_8 [8];
  
  lVar1 = DAT_7100af8560 + 1;
  bVar2 = DAT_7100af8560 == 0;
  DAT_7100af8560 = lVar1;
  if (bVar2) {
    FUN_710006ec60(&DAT_7100af21b0,&DAT_7100838080,auStack_8);
    FUN_710006ec60(&DAT_7100af21d8,&DAT_7100853d20,auStack_10);
    FUN_710006ec60(&DAT_7100af21f8,&DAT_7100853d20,auStack_18);
  }
  lVar1 = DAT_7100af8558 + 1;
  bVar2 = DAT_7100af8558 == 0;
  DAT_7100af8558 = lVar1;
  if (bVar2) {
    FUN_710006ec60(&DAT_7100af2138,&DAT_7100838080,auStack_8);
    FUN_710006ec60(&DAT_7100af2160,&DAT_7100853d20,auStack_10);
    FUN_710006ec60(&DAT_7100af2180,&DAT_7100853d20,auStack_18);
  }
  lVar1 = DAT_7100af8550 + 1;
  bVar2 = DAT_7100af8550 == 0;
  DAT_7100af8550 = lVar1;
  if (bVar2) {
    FUN_710006ec60(&DAT_7100af20c0,&DAT_7100838080,auStack_8);
    FUN_710006ec60(&DAT_7100af20e8,&DAT_7100853d20,auStack_10);
    FUN_710006ec60(&DAT_7100af2108,&DAT_7100853d20,auStack_18);
  }
  lVar1 = DAT_7100af8548 + 1;
  bVar2 = DAT_7100af8548 == 0;
  DAT_7100af8548 = lVar1;
  if (bVar2) {
    FUN_710006ec60(&DAT_7100af2048,&DAT_7100838088,auStack_8);
    FUN_710006ec60(&DAT_7100af2070,&DAT_7100853d20,auStack_10);
    FUN_710006ec60(&DAT_7100af2090,&DAT_7100853d20,auStack_18);
  }
  _DAT_7100d0bdd0 = 0;
  _DAT_7100d0bdd8 = 0;
  _DAT_7100d0bde0 = 0;
  _DAT_7100d0bde8 = &DAT_7100d0bdd8;
  _DAT_7100d0bdf0 = &DAT_7100d0bdd8;
  return;
}



// ===== FUN_710004a9f0 @ 710004a9f0 (size=232) =====

void FUN_710004a9f0(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *local_18;
  long *local_10;
  long **pplStack_8;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = (long)param_3 - (long)param_2;
  if (0x1ffffffffffffff8 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("cannot create std::vector larger than max_size()");
  }
  if (uVar1 == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = (long *)FUN_71007af5c0(uVar1 * 4);
  }
  pplStack_8 = &local_18;
  *param_1 = plVar2;
  param_1[2] = (long)plVar2 + uVar1 * 4;
  local_10 = plVar2;
  if (param_3 != param_2) {
    do {
      lVar4 = *param_2;
      *plVar2 = (long)(plVar2 + 2);
      local_18 = plVar2;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003ab8("basic_string: construction from null is not valid");
      }
      lVar3 = FUN_710081ce00(lVar4);
      FUN_710050cf20(plVar2,lVar4,lVar4 + lVar3);
      param_2 = param_2 + 1;
      plVar2 = local_18 + 4;
    } while (param_3 != param_2);
  }
  param_1[1] = plVar2;
  return;
}



// ===== FUN_710004ab00 @ 710004ab00 (size=604) =====

void FUN_710004ab00(void)

{
  char *local_8;
  
  FUN_710004a9f0(0x7100d0bdf8,&PTR_s_American_English_7100ae00b8,&PTR_DAT_7100ae0148);
  FUN_710004a9f0(0x7100d0be10,&PTR_DAT_7100ae0148,&PTR_s_Disable_7100ae0160);
  FUN_710004a9f0(0x7100d0be28,&PTR_s_Disable_7100ae0160,&PTR_s_Allow_7100ae0170);
  FUN_710004a9f0(0x7100d0be40,&PTR_s_Allow_7100ae0170,&PTR_s_Disable_7100ae0180);
  FUN_710004a9f0(0x7100d0be58,&PTR_s_Disable_7100ae0180,&PTR_DAT_7100ae0198);
  FUN_710004a9f0(0x7100d0be70,&PTR_DAT_7100ae0198,&PTR_DAT_7100ae01a8);
  FUN_710004a9f0(0x7100d0be88,&PTR_DAT_7100ae01a8,&PTR_s_Licensed_By_Nintendo_7100ae01c8);
  FUN_710004a9f0(0x7100d0bea0,&PTR_s_Licensed_By_Nintendo_7100ae01c8,&PTR_DAT_7100ae01e0);
  FUN_710004a9f0(0x7100d0beb8,&PTR_DAT_7100ae01e0,&PTR_DAT_7100ae01f0);
  FUN_710004a9f0(0x7100d0bed0,&PTR_DAT_7100ae0198,&PTR_DAT_7100ae01a8);
  FUN_710004a9f0(0x7100d0bee8,&PTR_DAT_7100ae01f0,&PTR_s_All_On_Launch_7100ae0200);
  FUN_710004a9f0(0x7100d0bf00,&PTR_s_All_On_Launch_7100ae0200,&PTR_DAT_7100ae0210);
  local_8 = "Is optional";
  FUN_710004a9f0(0x7100d0bf18,&local_8,&stack0x00000000);
  FUN_710004a9f0(0x7100d0bf30,&PTR_DAT_7100ae0210,&PTR_DAT_7100ae0220);
  local_8 = "Free communication";
  FUN_710004a9f0(0x7100d0bf48,&local_8,&stack0x00000000);
  local_8 = "Suppress Gamecard Access";
  FUN_710004a9f0(0x7100d0bf60,&local_8,&stack0x00000000);
  local_8 = "Common";
  FUN_710004a9f0(0x7100d0bf78,&local_8,&stack0x00000000);
  FUN_710004a9f0(0x7100d0bf90,&PTR_DAT_7100ae0220,&PTR_s_RomFs_7100ae0230);
  FUN_710004a9f0(0x7100d0bfa8,&PTR_DAT_7100ae01f0,&PTR_s_All_On_Launch_7100ae0200);
  FUN_710004a9f0(0x7100d0bfc0,&PTR_DAT_7100ae01f0,&PTR_s_All_On_Launch_7100ae0200);
  FUN_710004a9f0(0x7100d0bfd8,&PTR_s_RomFs_7100ae0230,&PTR_DAT_7100ae0240);
  FUN_710004a9f0(0x7100d0bff0,&PTR_DAT_7100ae0240,&PTR_DAT_7100ae0260);
  FUN_710004a9f0(0x7100d0c008,&PTR_DAT_7100ae0260,&PTR_DAT_7100ae0288);
  FUN_710004a9f0(0x7100d0c020,&PTR_DAT_7100ae0288,&PTR_s_Always_7100ae02a0);
  FUN_710004a9f0(0x7100d0c038,&PTR_s_Always_7100ae02a0,&PTR_DAT_7100ae02b8);
  FUN_710004a9f0(0x7100d0c050,&PTR_DAT_7100ae02b8,&PTR_s_Address_space_32Bit_7100ae02d0);
  FUN_710004a9f0(0x7100d0c068,&PTR_s_Address_space_32Bit_7100ae02d0,&PTR_s_Application_7100ae02f0);
  FUN_710004a9f0(0x7100d0c080,&PTR_s_Application_7100ae02f0,&PTR_s_System_7100ae0310);
  FUN_710004a9f0(0x7100d0c098,&PTR_s_System_7100ae0310,&PTR_s_ApplicationInfo_7100ae0328);
  FUN_710004a9f0(0x7100d0c0b0,&PTR_s_ApplicationInfo_7100ae0328,&PTR_s_svcUnknown00_7100ae0528);
  FUN_710004a9f0(0x7100d0c0c8,&PTR_s_svcUnknown00_7100ae0528,&PTR_s_American_English_7100ae09b8);
  return;
}



// ===== FUN_710004ad60 @ 710004ad60 (size=208) =====

void FUN_710004ad60(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = (long)param_3 - (long)param_2;
  if (0x1ffffffffffffff8 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("cannot create std::vector larger than max_size()");
  }
  plVar4 = (long *)0x0;
  if (uVar1 != 0) {
    plVar4 = (long *)FUN_71007af5c0(uVar1 * 4);
  }
  *param_1 = plVar4;
  param_1[2] = (long)plVar4 + uVar1 * 4;
  if (param_3 != param_2) {
    do {
      lVar3 = *param_2;
      *plVar4 = (long)(plVar4 + 2);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003ab8("basic_string: construction from null is not valid");
      }
      lVar2 = FUN_710081ce00(lVar3);
      FUN_710051b6a0(plVar4,lVar3,lVar3 + lVar2);
      param_2 = param_2 + 1;
      plVar4 = plVar4 + 4;
    } while (param_3 != param_2);
  }
  param_1[1] = plVar4;
  return;
}



// ===== FUN_710004ae70 @ 710004ae70 (size=604) =====

void FUN_710004ae70(void)

{
  char *local_8;
  
  FUN_710004ad60(0x7100d0c128,&PTR_s_American_English_7100ae09b8,&PTR_DAT_7100ae0a48);
  FUN_710004ad60(0x7100d0c140,&PTR_DAT_7100ae0a48,&PTR_s_Disable_7100ae0a60);
  FUN_710004ad60(0x7100d0c158,&PTR_s_Disable_7100ae0a60,&PTR_s_Allow_7100ae0a70);
  FUN_710004ad60(0x7100d0c170,&PTR_s_Allow_7100ae0a70,&PTR_s_Disable_7100ae0a80);
  FUN_710004ad60(0x7100d0c188,&PTR_s_Disable_7100ae0a80,&PTR_DAT_7100ae0a98);
  FUN_710004ad60(0x7100d0c1a0,&PTR_DAT_7100ae0a98,&PTR_DAT_7100ae0aa8);
  FUN_710004ad60(0x7100d0c1b8,&PTR_DAT_7100ae0aa8,&PTR_s_Licensed_By_Nintendo_7100ae0ac8);
  FUN_710004ad60(0x7100d0c1d0,&PTR_s_Licensed_By_Nintendo_7100ae0ac8,&PTR_DAT_7100ae0ae0);
  FUN_710004ad60(0x7100d0c1e8,&PTR_DAT_7100ae0ae0,&PTR_DAT_7100ae0af0);
  FUN_710004ad60(0x7100d0c200,&PTR_DAT_7100ae0a98,&PTR_DAT_7100ae0aa8);
  FUN_710004ad60(0x7100d0c218,&PTR_DAT_7100ae0af0,&PTR_s_All_On_Launch_7100ae0b00);
  FUN_710004ad60(0x7100d0c230,&PTR_s_All_On_Launch_7100ae0b00,&PTR_DAT_7100ae0b10);
  local_8 = "Is optional";
  FUN_710004ad60(0x7100d0c248,&local_8,&stack0x00000000);
  FUN_710004ad60(0x7100d0c260,&PTR_DAT_7100ae0b10,&PTR_DAT_7100ae0b20);
  local_8 = "Free communication";
  FUN_710004ad60(0x7100d0c278,&local_8,&stack0x00000000);
  local_8 = "Suppress Gamecard Access";
  FUN_710004ad60(0x7100d0c290,&local_8,&stack0x00000000);
  local_8 = "Common";
  FUN_710004ad60(0x7100d0c2a8,&local_8,&stack0x00000000);
  FUN_710004ad60(0x7100d0c2c0,&PTR_DAT_7100ae0b20,&PTR_s_RomFs_7100ae0b30);
  FUN_710004ad60(0x7100d0c2d8,&PTR_DAT_7100ae0af0,&PTR_s_All_On_Launch_7100ae0b00);
  FUN_710004ad60(0x7100d0c2f0,&PTR_DAT_7100ae0af0,&PTR_s_All_On_Launch_7100ae0b00);
  FUN_710004ad60(0x7100d0c308,&PTR_s_RomFs_7100ae0b30,&PTR_DAT_7100ae0b40);
  FUN_710004ad60(0x7100d0c320,&PTR_DAT_7100ae0b40,&PTR_DAT_7100ae0b60);
  FUN_710004ad60(0x7100d0c338,&PTR_DAT_7100ae0b60,&PTR_DAT_7100ae0b88);
  FUN_710004ad60(0x7100d0c350,&PTR_DAT_7100ae0b88,&PTR_s_Always_7100ae0ba0);
  FUN_710004ad60(0x7100d0c368,&PTR_s_Always_7100ae0ba0,&PTR_DAT_7100ae0bb8);
  FUN_710004ad60(0x7100d0c380,&PTR_DAT_7100ae0bb8,&PTR_s_Address_space_32Bit_7100ae0bd0);
  FUN_710004ad60(0x7100d0c398,&PTR_s_Address_space_32Bit_7100ae0bd0,&PTR_s_Application_7100ae0bf0);
  FUN_710004ad60(0x7100d0c3b0,&PTR_s_Application_7100ae0bf0,&PTR_s_System_7100ae0c10);
  FUN_710004ad60(0x7100d0c110,&PTR_s_System_7100ae0c10,&PTR_s_ApplicationInfo_7100ae0c28);
  FUN_710004ad60(0x7100d0c0e0,&PTR_s_ApplicationInfo_7100ae0c28,&PTR_s_svcUnknown00_7100ae0e28);
  FUN_710004ad60(0x7100d0c0f8,&PTR_s_svcUnknown00_7100ae0e28,&PTR_s_time_google_com_7100ae12b8);
  return;
}



// ===== FUN_710004b0d0 @ 710004b0d0 (size=180) =====

void FUN_710004b0d0(long *param_1,undefined1 *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong local_8;
  
  plVar2 = param_1 + 2;
  *param_1 = (long)plVar2;
  if (param_2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003ab8("basic_string: construction from null is not valid");
  }
  uVar1 = FUN_710081ce00(param_2);
  local_8 = uVar1;
  if (uVar1 < 0x10) {
    if (uVar1 == 1) {
      *(undefined1 *)(param_1 + 2) = *param_2;
      goto LAB_710004b11c;
    }
    if (uVar1 == 0) goto LAB_710004b11c;
  }
  else {
    plVar2 = (long *)FUN_71007e2140(param_1,&local_8,0);
    *param_1 = (long)plVar2;
    param_1[2] = local_8;
  }
  FUN_710080f900(plVar2,param_2,uVar1);
LAB_710004b11c:
  param_1[1] = local_8;
  *(undefined1 *)(*param_1 + local_8) = 0;
  return;
}



// ===== FUN_710004b190 @ 710004b190 (size=344) =====

void FUN_710004b190(void)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = DAT_7100af8560 + 1;
  bVar2 = DAT_7100af8560 == 0;
  DAT_7100af8560 = lVar1;
  if (bVar2) {
    FUN_710004b0d0(&DAT_7100af21b0,&DAT_7100838080);
    FUN_710004b0d0(&DAT_7100af21d8,&DAT_7100853d20);
    FUN_710004b0d0(&DAT_7100af21f8,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8558 + 1;
  bVar2 = DAT_7100af8558 == 0;
  DAT_7100af8558 = lVar1;
  if (bVar2) {
    FUN_710004b0d0(&DAT_7100af2138,&DAT_7100838080);
    FUN_710004b0d0(&DAT_7100af2160,&DAT_7100853d20);
    FUN_710004b0d0(&DAT_7100af2180,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8550 + 1;
  bVar2 = DAT_7100af8550 == 0;
  DAT_7100af8550 = lVar1;
  if (bVar2) {
    FUN_710004b0d0(&DAT_7100af20c0,&DAT_7100838080);
    FUN_710004b0d0(&DAT_7100af20e8,&DAT_7100853d20);
    FUN_710004b0d0(&DAT_7100af2108,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8548 + 1;
  bVar2 = DAT_7100af8548 == 0;
  DAT_7100af8548 = lVar1;
  if (bVar2) {
    FUN_710004b0d0(&DAT_7100af2048,&DAT_7100838088);
    FUN_710004b0d0(&DAT_7100af2070,&DAT_7100853d20);
    FUN_710004b0d0(&DAT_7100af2090,&DAT_7100853d20);
  }
  return;
}



// ===== FUN_710004b390 @ 710004b390 (size=344) =====

void FUN_710004b390(void)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = DAT_7100af8560 + 1;
  bVar2 = DAT_7100af8560 == 0;
  DAT_7100af8560 = lVar1;
  if (bVar2) {
    FUN_710053b650(&DAT_7100af21b0,&DAT_7100838080);
    FUN_710053b650(&DAT_7100af21d8,&DAT_7100853d20);
    FUN_710053b650(&DAT_7100af21f8,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8558 + 1;
  bVar2 = DAT_7100af8558 == 0;
  DAT_7100af8558 = lVar1;
  if (bVar2) {
    FUN_710053b650(&DAT_7100af2138,&DAT_7100838080);
    FUN_710053b650(&DAT_7100af2160,&DAT_7100853d20);
    FUN_710053b650(&DAT_7100af2180,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8550 + 1;
  bVar2 = DAT_7100af8550 == 0;
  DAT_7100af8550 = lVar1;
  if (bVar2) {
    FUN_710053b650(&DAT_7100af20c0,&DAT_7100838080);
    FUN_710053b650(&DAT_7100af20e8,&DAT_7100853d20);
    FUN_710053b650(&DAT_7100af2108,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8548 + 1;
  bVar2 = DAT_7100af8548 == 0;
  DAT_7100af8548 = lVar1;
  if (bVar2) {
    FUN_710053b650(&DAT_7100af2048,&DAT_7100838088);
    FUN_710053b650(&DAT_7100af2070,&DAT_7100853d20);
    FUN_710053b650(&DAT_7100af2090,&DAT_7100853d20);
  }
  return;
}



// ===== FUN_710004b590 @ 710004b590 (size=344) =====

void FUN_710004b590(void)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = DAT_7100af8560 + 1;
  bVar2 = DAT_7100af8560 == 0;
  DAT_7100af8560 = lVar1;
  if (bVar2) {
    FUN_7100589400(&DAT_7100af21b0,&DAT_7100838080);
    FUN_7100589400(&DAT_7100af21d8,&DAT_7100853d20);
    FUN_7100589400(&DAT_7100af21f8,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8558 + 1;
  bVar2 = DAT_7100af8558 == 0;
  DAT_7100af8558 = lVar1;
  if (bVar2) {
    FUN_7100589400(&DAT_7100af2138,&DAT_7100838080);
    FUN_7100589400(&DAT_7100af2160,&DAT_7100853d20);
    FUN_7100589400(&DAT_7100af2180,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8550 + 1;
  bVar2 = DAT_7100af8550 == 0;
  DAT_7100af8550 = lVar1;
  if (bVar2) {
    FUN_7100589400(&DAT_7100af20c0,&DAT_7100838080);
    FUN_7100589400(&DAT_7100af20e8,&DAT_7100853d20);
    FUN_7100589400(&DAT_7100af2108,&DAT_7100853d20);
  }
  lVar1 = DAT_7100af8548 + 1;
  bVar2 = DAT_7100af8548 == 0;
  DAT_7100af8548 = lVar1;
  if (bVar2) {
    FUN_7100589400(&DAT_7100af2048,&DAT_7100838088);
    FUN_7100589400(&DAT_7100af2070,&DAT_7100853d20);
    FUN_7100589400(&DAT_7100af2090,&DAT_7100853d20);
  }
  return;
}



// ===== FUN_710004bf10 @ 710004bf10 (size=1296) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710004bf10(void)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = DAT_7100af8560 + 1;
  bVar1 = DAT_7100af8560 == 0;
  DAT_7100af8560 = lVar5;
  if (bVar1) {
    FUN_710059d6f0(&DAT_7100af21b0,&DAT_7100838080);
    FUN_710059d6f0(&DAT_7100af21d8,&DAT_7100853d20);
    FUN_710059d6f0(&DAT_7100af21f8,&DAT_7100853d20);
  }
  lVar5 = DAT_7100af8558 + 1;
  bVar1 = DAT_7100af8558 == 0;
  DAT_7100af8558 = lVar5;
  if (bVar1) {
    FUN_710059d6f0(&DAT_7100af2138,&DAT_7100838080);
    FUN_710059d6f0(&DAT_7100af2160,&DAT_7100853d20);
    FUN_710059d6f0(&DAT_7100af2180,&DAT_7100853d20);
  }
  lVar5 = DAT_7100af8550 + 1;
  bVar1 = DAT_7100af8550 == 0;
  DAT_7100af8550 = lVar5;
  if (bVar1) {
    FUN_710059d6f0(&DAT_7100af20c0,&DAT_7100838080);
    FUN_710059d6f0(&DAT_7100af20e8,&DAT_7100853d20);
    FUN_710059d6f0(&DAT_7100af2108,&DAT_7100853d20);
  }
  lVar5 = DAT_7100af8548 + 1;
  bVar1 = DAT_7100af8548 == 0;
  DAT_7100af8548 = lVar5;
  if (bVar1) {
    FUN_710059d6f0(&DAT_7100af2048,&DAT_7100838088);
    FUN_710059d6f0(&DAT_7100af2070,&DAT_7100853d20);
    FUN_710059d6f0(&DAT_7100af2090,&DAT_7100853d20);
  }
  puVar3 = (undefined8 *)&DAT_7100d0ca30;
  lVar5 = 0;
  do {
    puVar4 = (&PTR_DAT_7100ae1620)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_710059cbe0(puVar3,puVar4,puVar4 + lVar2);
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
  } while (lVar5 != 6);
  puVar3 = (undefined8 *)&DAT_7100d0caf0;
  lVar5 = 0;
  DAT_7100af3550 = &DAT_7100d0ca30;
  do {
    puVar4 = (&PTR_DAT_7100ae1650)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_710059cbe0(puVar3,puVar4,puVar4 + lVar2);
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
  } while (lVar5 != 4);
  puVar3 = (undefined8 *)&DAT_7100d0cb70;
  lVar5 = 0;
  DAT_7100af3560 = &DAT_7100d0caf0;
  do {
    puVar4 = (&PTR_s__txt_7100ae1670)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_710059cbe0(puVar3,puVar4,puVar4 + lVar2);
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
  } while (lVar5 != 0x13);
  DAT_7100af3590 = &DAT_7100d0cb70;
  FUN_710059d6f0(0x7100d0cdd0,&DAT_710083b658);
  puVar3 = (undefined8 *)&DAT_7100d0cdf0;
  DAT_7100af3570 = 0x7100d0cdd0;
  lVar5 = 0;
  do {
    puVar4 = (&PTR_DAT_7100ae1708)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_710059cbe0(puVar3,puVar4,puVar4 + lVar2);
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
  } while (lVar5 != 7);
  puVar3 = (undefined8 *)&DAT_7100d0ced0;
  DAT_7100af3510 = &DAT_7100d0cdf0;
  lVar5 = 0;
  do {
    puVar4 = (&PTR_DAT_7100ae1740)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_710059cbe0(puVar3,puVar4,puVar4 + lVar2);
    puVar3 = puVar3 + 4;
    bVar1 = lVar5 != 1;
    lVar5 = 1;
  } while (bVar1);
  puVar3 = (undefined8 *)&DAT_7100d0cf10;
  DAT_7100af3520 = &DAT_7100d0ced0;
  lVar5 = 0;
  do {
    puVar4 = (&PTR_DAT_7100ae1750)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_710059cbe0(puVar3,puVar4,puVar4 + lVar2);
    puVar3 = puVar3 + 4;
    bVar1 = lVar5 != 1;
    lVar5 = 1;
  } while (bVar1);
  puVar3 = (undefined8 *)&DAT_7100d0cf50;
  DAT_7100af3530 = &DAT_7100d0cf10;
  lVar5 = 0;
  do {
    puVar4 = (&PTR_DAT_7100ae1760)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_710059cbe0(puVar3,puVar4,puVar4 + lVar2);
    puVar3 = puVar3 + 4;
    bVar1 = lVar5 != 1;
    lVar5 = 1;
  } while (bVar1);
  puVar3 = (undefined8 *)&DAT_7100d0cf90;
  lVar5 = 0;
  DAT_7100af3540 = &DAT_7100d0cf50;
  do {
    puVar4 = (&PTR_DAT_7100ae1770)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_710059cbe0(puVar3,puVar4,puVar4 + lVar2);
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
  } while (lVar5 != 3);
  DAT_7100af3580 = &DAT_7100d0cf90;
  FUN_710059d6f0(0x7100d0cff0,&DAT_710083b660);
  FUN_710059d6f0(&DAT_7100d0ca10,".*\\.?\\[?([0-9a-fA-F]{16})\\]?(\\[v([0-9]+)\\])?\\.romfs\\.bin");
  FUN_71007e0600(0x7100d0c9f8);
  _DAT_7100d0ca00 = 0;
  _DAT_7100d0ca08 = 0;
  FUN_71001ad7e0(0x7100d0c9f0,&DAT_710083b6a8,&DAT_710083b6ee,1);
  return;
}



// ===== FUN_710004c640 @ 710004c640 (size=1248) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710004c640(void)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = DAT_7100af8560 + 1;
  bVar1 = DAT_7100af8560 == 0;
  DAT_7100af8560 = lVar5;
  if (bVar1) {
    FUN_71005ae290(&DAT_7100af21b0,&DAT_7100838080);
    FUN_71005ae290(&DAT_7100af21d8,&DAT_7100853d20);
    FUN_71005ae290(&DAT_7100af21f8,&DAT_7100853d20);
  }
  lVar5 = DAT_7100af8558 + 1;
  bVar1 = DAT_7100af8558 == 0;
  DAT_7100af8558 = lVar5;
  if (bVar1) {
    FUN_71005ae290(&DAT_7100af2138,&DAT_7100838080);
    FUN_71005ae290(&DAT_7100af2160,&DAT_7100853d20);
    FUN_71005ae290(&DAT_7100af2180,&DAT_7100853d20);
  }
  lVar5 = DAT_7100af8550 + 1;
  bVar1 = DAT_7100af8550 == 0;
  DAT_7100af8550 = lVar5;
  if (bVar1) {
    FUN_71005ae290(&DAT_7100af20c0,&DAT_7100838080);
    FUN_71005ae290(&DAT_7100af20e8,&DAT_7100853d20);
    FUN_71005ae290(&DAT_7100af2108,&DAT_7100853d20);
  }
  lVar5 = DAT_7100af8548 + 1;
  bVar1 = DAT_7100af8548 == 0;
  DAT_7100af8548 = lVar5;
  if (bVar1) {
    FUN_71005ae290(&DAT_7100af2048,&DAT_7100838088);
    FUN_71005ae290(&DAT_7100af2070,&DAT_7100853d20);
    FUN_71005ae290(&DAT_7100af2090,&DAT_7100853d20);
  }
  puVar3 = (undefined8 *)&DAT_7100d0d010;
  lVar5 = 0;
  do {
    puVar4 = (&PTR_DAT_7100ae1788)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_71005accd0(puVar3,puVar4,puVar4 + lVar2);
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
  } while (lVar5 != 6);
  puVar3 = (undefined8 *)&DAT_7100d0d0d0;
  lVar5 = 0;
  do {
    puVar4 = (&PTR_DAT_7100ae17b8)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_71005accd0(puVar3,puVar4,puVar4 + lVar2);
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
  } while (lVar5 != 4);
  puVar3 = (undefined8 *)&DAT_7100d0d150;
  lVar5 = 0;
  do {
    puVar4 = (&PTR_s__txt_7100ae17d8)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_71005accd0(puVar3,puVar4,puVar4 + lVar2);
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
  } while (lVar5 != 0x13);
  puVar3 = (undefined8 *)&DAT_7100d0d3d0;
  lVar5 = 0;
  FUN_71005ae290(0x7100d0d3b0,&DAT_710083b658);
  do {
    puVar4 = (&PTR_DAT_7100ae1870)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_71005accd0(puVar3,puVar4,puVar4 + lVar2);
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
  } while (lVar5 != 7);
  puVar3 = (undefined8 *)&DAT_7100d0d4b0;
  DAT_7100af35e0 = &DAT_7100d0d3d0;
  lVar5 = 0;
  do {
    puVar4 = (&PTR_DAT_7100ae18a8)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_71005accd0(puVar3,puVar4,puVar4 + lVar2);
    puVar3 = puVar3 + 4;
    bVar1 = lVar5 != 1;
    lVar5 = 1;
  } while (bVar1);
  puVar3 = (undefined8 *)&DAT_7100d0d4f0;
  DAT_7100af35a0 = &DAT_7100d0d4b0;
  lVar5 = 0;
  do {
    puVar4 = (&PTR_DAT_7100ae18b8)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_71005accd0(puVar3,puVar4,puVar4 + lVar2);
    puVar3 = puVar3 + 4;
    bVar1 = lVar5 != 1;
    lVar5 = 1;
  } while (bVar1);
  puVar3 = (undefined8 *)&DAT_7100d0d530;
  DAT_7100af35b0 = &DAT_7100d0d4f0;
  lVar5 = 0;
  do {
    puVar4 = (&PTR_DAT_7100ae18c8)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_71005accd0(puVar3,puVar4,puVar4 + lVar2);
    puVar3 = puVar3 + 4;
    bVar1 = lVar5 != 1;
    lVar5 = 1;
  } while (bVar1);
  puVar3 = (undefined8 *)&DAT_7100d0d570;
  lVar5 = 0;
  DAT_7100af35c0 = &DAT_7100d0d530;
  do {
    puVar4 = (&PTR_DAT_7100ae18d8)[lVar5];
    *puVar3 = puVar3 + 2;
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_7100003ab8("basic_string: construction from null is not valid");
    }
    lVar2 = FUN_710081ce00(puVar4);
    FUN_71005accd0(puVar3,puVar4,puVar4 + lVar2);
    lVar5 = lVar5 + 1;
    puVar3 = puVar3 + 4;
  } while (lVar5 != 3);
  FUN_71005ae290(0x7100d0d5d0,&DAT_710083b660);
  DAT_7100af35d0 = 0x7100d0d5d0;
  FUN_71005ae290(0x7100d0d5f0,".*\\.?\\[?([0-9a-fA-F]{16})\\]?(\\[v([0-9]+)\\])?\\.romfs\\.bin");
  FUN_71007e0600(0x7100d0d618);
  _DAT_7100d0d620 = 0;
  _DAT_7100d0d628 = 0;
  FUN_71001ad7e0(0x7100d0d610,&DAT_710083b6a8,&DAT_710083b6ee,1);
  return;
}



// ===== FUN_710004da30 @ 710004da30 (size=444) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710004da30(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  long alStack_60 [3];
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [24];
  undefined1 local_18 [24];
  
  _DAT_7100d0dd80 = 0;
  _DAT_7100d0dd88 = 0;
  _DAT_7100d0dd90 = 0;
  _DAT_7100d0dd98 = 0;
  _DAT_7100d0dda0 = 0;
  _DAT_7100d0dda8 = 0;
  _DAT_7100d0ddb0 = 0;
  _DAT_7100d0ddb8 = 0;
  _DAT_7100d0dd78 = 8;
  lVar1 = FUN_71007af5c0(0x40);
  _DAT_7100d0dd70 = lVar1;
  _DAT_7100d0dd80 = FUN_71007af5c0(0x200);
  _DAT_7100d0dd90 = _DAT_7100d0dd80 + 0x200;
  _DAT_7100d0dd98 = lVar1 + 0x18;
  *(long *)(lVar1 + 0x18) = _DAT_7100d0dd80;
  _DAT_7100d0dd00 = 0;
  _DAT_7100d0dd08 = 0;
  _DAT_7100d0dd10 = 0;
  _DAT_7100d0dd18 = 0;
  _DAT_7100d0dd88 = _DAT_7100d0dd80;
  _DAT_7100d0dda0 = _DAT_7100d0dd80;
  _DAT_7100d0dda8 = _DAT_7100d0dd80;
  _DAT_7100d0ddb0 = _DAT_7100d0dd90;
  _DAT_7100d0ddb8 = _DAT_7100d0dd98;
  FUN_71005eff00(alStack_60,&DAT_7100900760,4,auStack_68);
  FUN_71005eff00(auStack_48,&DAT_7100900770,4,auStack_68);
  FUN_71005eff00(auStack_30,&DAT_7100900780,4,auStack_68);
  FUN_71005eff00(local_18,&DAT_7100900790,4,auStack_68);
  FUN_71005ec390(0x7100d0dd48,alStack_60,4,auStack_70);
  plVar3 = (long *)register0x00000008;
  do {
    plVar2 = plVar3 + -3;
    lVar1 = *plVar2;
    if (lVar1 != 0) {
      thunk_FUN_710081c200(lVar1,plVar3[-1] - lVar1);
    }
    plVar3 = plVar2;
  } while (plVar2 != alStack_60);
  FUN_71005eff00(alStack_60,&DAT_71009007a0,0xd,auStack_68);
  FUN_71005eff00(auStack_48,&DAT_71009007d8,0xd,auStack_68);
  FUN_71005eff00(auStack_30,&DAT_7100900810,0xd,auStack_68);
  FUN_71005eff00(local_18,&DAT_7100900848,0xd,auStack_68);
  FUN_71005ec390(0x7100d0dd30,alStack_60,4,auStack_70);
  plVar3 = (long *)register0x00000008;
  do {
    plVar2 = plVar3 + -3;
    lVar1 = *plVar2;
    if (lVar1 != 0) {
      thunk_FUN_710081c200(lVar1,plVar3[-1] - lVar1);
    }
    plVar3 = plVar2;
  } while (plVar2 != alStack_60);
  return;
}



// ===== FUN_710004dd50 @ 710004dd50 (size=140) =====

void FUN_710004dd50(void)

{
  FUN_71005f58c0(&DAT_7100d0de08,4,&DAT_7100841388,0,0);
  FUN_71005f58c0(&DAT_7100d0dea0,5,"Debug",1,0);
  FUN_71005f58c0(&DAT_7100d0df38,9,"Mtp_Debug",1,0);
  FUN_71005f58c0(&DAT_7100d0dfd0,10,"MtpI_Debug",1,0);
  return;
}



// ===== FUN_710004de00 @ 710004de00 (size=132) =====

void FUN_710004de00(void)

{
  undefined1 auStack_8 [8];
  
  FUN_710006ec60(&DAT_7100d0e108,&DAT_7100841528,auStack_8);
  FUN_710006ec60(0x7100d0e0a8,"?#/:;+@",auStack_8);
  FUN_710006ec60(0x7100d0e0e8,&DAT_7100841538,auStack_8);
  FUN_710006ec60(0x7100d0e0c8,&DAT_7100853d20,auStack_8);
  FUN_710006ec60(0x7100d0e088,"%<>{}|\\\"^`!*\'()$,[]",auStack_8);
  return;
}



// ===== FUN_710004de90 @ 710004de90 (size=208) =====

void FUN_710004de90(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = (long)param_3 - (long)param_2;
  if (0x1ffffffffffffff8 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("cannot create std::vector larger than max_size()");
  }
  plVar4 = (long *)0x0;
  if (uVar1 != 0) {
    plVar4 = (long *)FUN_71007af5c0(uVar1 * 4);
  }
  *param_1 = plVar4;
  param_1[2] = (long)plVar4 + uVar1 * 4;
  if (param_3 != param_2) {
    do {
      lVar3 = *param_2;
      *plVar4 = (long)(plVar4 + 2);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003ab8("basic_string: construction from null is not valid");
      }
      lVar2 = FUN_710081ce00(lVar3);
      FUN_71005facc0(plVar4,lVar3,lVar3 + lVar2);
      param_2 = param_2 + 1;
      plVar4 = plVar4 + 4;
    } while (param_3 != param_2);
  }
  param_1[1] = plVar4;
  return;
}



// ===== FUN_710004dfa0 @ 710004dfa0 (size=604) =====

void FUN_710004dfa0(void)

{
  char *local_8;
  
  FUN_710004de90(0x7100d0e148,&PTR_s_American_English_7100ae1d80,&PTR_DAT_7100ae1e10);
  FUN_710004de90(0x7100d0e160,&PTR_DAT_7100ae1e10,&PTR_s_Disable_7100ae1e28);
  FUN_710004de90(0x7100d0e178,&PTR_s_Disable_7100ae1e28,&PTR_s_Allow_7100ae1e38);
  FUN_710004de90(0x7100d0e190,&PTR_s_Allow_7100ae1e38,&PTR_s_Disable_7100ae1e48);
  FUN_710004de90(0x7100d0e1a8,&PTR_s_Disable_7100ae1e48,&PTR_DAT_7100ae1e60);
  FUN_710004de90(0x7100d0e1c0,&PTR_DAT_7100ae1e60,&PTR_DAT_7100ae1e70);
  FUN_710004de90(0x7100d0e1d8,&PTR_DAT_7100ae1e70,&PTR_s_Licensed_By_Nintendo_7100ae1e90);
  FUN_710004de90(0x7100d0e1f0,&PTR_s_Licensed_By_Nintendo_7100ae1e90,&PTR_DAT_7100ae1ea8);
  FUN_710004de90(0x7100d0e208,&PTR_DAT_7100ae1ea8,&PTR_DAT_7100ae1eb8);
  FUN_710004de90(0x7100d0e220,&PTR_DAT_7100ae1e60,&PTR_DAT_7100ae1e70);
  FUN_710004de90(0x7100d0e238,&PTR_DAT_7100ae1eb8,&PTR_s_All_On_Launch_7100ae1ec8);
  FUN_710004de90(0x7100d0e250,&PTR_s_All_On_Launch_7100ae1ec8,&PTR_DAT_7100ae1ed8);
  local_8 = "Is optional";
  FUN_710004de90(0x7100d0e268,&local_8,&stack0x00000000);
  FUN_710004de90(0x7100d0e280,&PTR_DAT_7100ae1ed8,&PTR_DAT_7100ae1ee8);
  local_8 = "Free communication";
  FUN_710004de90(0x7100d0e298,&local_8,&stack0x00000000);
  local_8 = "Suppress Gamecard Access";
  FUN_710004de90(0x7100d0e2b0,&local_8,&stack0x00000000);
  local_8 = "Common";
  FUN_710004de90(0x7100d0e2c8,&local_8,&stack0x00000000);
  FUN_710004de90(0x7100d0e2e0,&PTR_DAT_7100ae1ee8,&PTR_s_RomFs_7100ae1ef8);
  FUN_710004de90(0x7100d0e2f8,&PTR_DAT_7100ae1eb8,&PTR_s_All_On_Launch_7100ae1ec8);
  FUN_710004de90(0x7100d0e310,&PTR_DAT_7100ae1eb8,&PTR_s_All_On_Launch_7100ae1ec8);
  FUN_710004de90(0x7100d0e328,&PTR_s_RomFs_7100ae1ef8,&PTR_DAT_7100ae1f08);
  FUN_710004de90(0x7100d0e340,&PTR_DAT_7100ae1f08,&PTR_DAT_7100ae1f28);
  FUN_710004de90(0x7100d0e358,&PTR_DAT_7100ae1f28,&PTR_DAT_7100ae1f50);
  FUN_710004de90(0x7100d0e370,&PTR_DAT_7100ae1f50,&PTR_s_Always_7100ae1f68);
  FUN_710004de90(0x7100d0e388,&PTR_s_Always_7100ae1f68,&PTR_DAT_7100ae1f80);
  FUN_710004de90(0x7100d0e3a0,&PTR_DAT_7100ae1f80,&PTR_s_Address_space_32Bit_7100ae1f98);
  FUN_710004de90(0x7100d0e3b8,&PTR_s_Address_space_32Bit_7100ae1f98,&PTR_s_Application_7100ae1fb8);
  FUN_710004de90(0x7100d0e3d0,&PTR_s_Application_7100ae1fb8,&PTR_s_System_7100ae1fd8);
  FUN_710004de90(0x7100d0e3e8,&PTR_s_System_7100ae1fd8,&PTR_s_ApplicationInfo_7100ae1ff0);
  FUN_710004de90(0x7100d0e400,&PTR_s_ApplicationInfo_7100ae1ff0,&PTR_s_svcUnknown00_7100ae21f0);
  FUN_710004de90(0x7100d0e418,&PTR_s_svcUnknown00_7100ae21f0,&DAT_7100ae2680);
  return;
}



// ===== FUN_710004e220 @ 710004e220 (size=316) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710004e220(void)

{
  long local_8;
  
  _DAT_7100d0e9c8 = &DAT_7100d0e9d8;
  local_8 = 0x40;
  _DAT_7100d0e9c8 = (char *)FUN_71007e2140(&DAT_7100d0e9c8,&local_8,0);
  _DAT_7100d0e9d8 = local_8;
  builtin_strncpy(_DAT_7100d0e9c8,"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                  ,0x40);
  _DAT_7100d0e9d0 = local_8;
  _DAT_7100d0e9c8[local_8] = '\0';
  _DAT_7100d0e450 = 0;
  _DAT_7100d0e518 = 0;
  _DAT_7100d0e520 = &DAT_7100d0e510;
  _DAT_7100d0e528 = &DAT_7100d0e510;
  _DAT_7100d0e530 = 0;
  _DAT_7100d0e548 = 0;
  _DAT_7100d0e550 = &DAT_7100d0e540;
  _DAT_7100d0e558 = &DAT_7100d0e540;
  _DAT_7100d0e560 = 0;
  _DAT_7100d0e630 = 0;
  _DAT_7100d0e638 = &DAT_7100d0e628;
  _DAT_7100d0e640 = &DAT_7100d0e628;
  _DAT_7100d0e648 = 0;
  _DAT_7100d0e510 = 0;
  _DAT_7100d0e540 = 0;
  _DAT_7100d0e568 = 0;
  _DAT_7100d0e628 = 0;
  _DAT_7100d0e658 = 0;
  _DAT_7100d0e660 = 0;
  _DAT_7100d0e668 = &DAT_7100d0e658;
  _DAT_7100d0e670 = &DAT_7100d0e658;
  _DAT_7100d0e678 = 0;
  _DAT_7100d0e680 = 0;
  _DAT_7100d0e740 = 0;
  _DAT_7100d0e748 = 0;
  _DAT_7100d0e750 = &DAT_7100d0e740;
  _DAT_7100d0e758 = &DAT_7100d0e740;
  _DAT_7100d0e760 = 0;
  _DAT_7100d0e770 = 0;
  _DAT_7100d0e778 = 0;
  _DAT_7100d0e780 = &DAT_7100d0e770;
  _DAT_7100d0e788 = &DAT_7100d0e770;
  _DAT_7100d0e790 = 0;
  _DAT_7100d0e798 = 0;
  _DAT_7100d0e858 = 0;
  _DAT_7100d0e860 = 0;
  _DAT_7100d0e868 = &DAT_7100d0e858;
  _DAT_7100d0e870 = &DAT_7100d0e858;
  _DAT_7100d0e878 = 0;
  _DAT_7100d0e888 = 0;
  _DAT_7100d0e890 = 0;
  _DAT_7100d0e898 = &DAT_7100d0e888;
  _DAT_7100d0e8a0 = &DAT_7100d0e888;
  _DAT_7100d0e8a8 = 0;
  _DAT_7100d0e8b0 = 0;
  _DAT_7100d0e970 = 0;
  _DAT_7100d0e978 = 0;
  _DAT_7100d0e980 = &DAT_7100d0e970;
  _DAT_7100d0e988 = &DAT_7100d0e970;
  _DAT_7100d0e990 = 0;
  _DAT_7100d0e9a0 = 0;
  _DAT_7100d0e9a8 = 0;
  _DAT_7100d0e9b0 = &DAT_7100d0e9a0;
  _DAT_7100d0e9b8 = &DAT_7100d0e9a0;
  _DAT_7100d0e9c0 = 0;
  return;
}



// ===== FUN_710004e390 @ 710004e390 (size=104) =====

void FUN_710004e390(void)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)&DAT_7100d1bee8;
  FUN_710078e350(&DAT_7100d1bee8);
  do {
    uVar1 = *puVar2;
    puVar3 = puVar2 + 0x100;
    do {
      uVar1 = *(uint *)(&DAT_7100d1bee8 + ((ulong)uVar1 & 0xff) * 4) ^ uVar1 >> 8;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 0x100;
    } while (puVar3 != puVar2 + 0x800);
    puVar2 = puVar2 + 1;
  } while (puVar2 != (uint *)&DAT_7100d1c2e8);
  return;
}



// ===== FUN_710004e400 @ 710004e400 (size=496) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710004e400(void)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *local_38;
  long local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  char *local_10;
  int local_8;
  
  _DAT_7100d21000 = 0;
  _DAT_7100d21010 = (long *)0x0;
  _DAT_7100d21018 = (long *)0x0;
  _DAT_7100d21020 = 0;
  plVar3 = (long *)FUN_7100806660("GLIBCXX_TUNABLES");
  local_30 = 8;
  local_28 = "obj_size";
  local_20 = 0;
  local_18 = 9;
  local_10 = "obj_count";
  local_8 = 0x100;
  do {
    if (plVar3 == (long *)0x0) {
      iVar2 = local_8;
      if (0x1000 < local_8) {
        iVar2 = 0x1000;
      }
      if ((int)local_20 == 0) {
        local_20._0_4_ = 6;
      }
      lVar5 = ((long)(int)local_20 + 0x1e) * (long)iVar2 * 8;
      _DAT_7100d21020 = lVar5;
      if (lVar5 != 0) {
        plVar3 = (long *)FUN_710081c1c0(lVar5);
        _DAT_7100d21018 = plVar3;
        if (plVar3 == (long *)0x0) {
          _DAT_7100d21020 = 0;
        }
        else {
          _DAT_7100d21010 = plVar3;
          *plVar3 = lVar5;
          plVar3[1] = 0;
        }
      }
      return;
    }
    if ((char)*plVar3 == ':') {
      plVar3 = (long *)((long)plVar3 + 1);
    }
    if ((((*plVar3 == 0x2e78786362696c67) && ((int)plVar3[1] == 0x705f6865)) &&
        (*(short *)((long)plVar3 + 0xc) == 0x6f6f)) &&
       ((*(char *)((long)plVar3 + 0xe) == 'l' && (*(char *)((long)plVar3 + 0xf) == '.')))) {
      plVar1 = &local_30;
      plVar3 = plVar3 + 2;
      lVar5 = 2;
      lVar6 = local_30;
      while (((lVar6 != 0 && (iVar2 = FUN_710081ec40(plVar1[1],plVar3,lVar6), iVar2 != 0)) ||
             (*(char *)((long)plVar3 + lVar6) != '='))) {
        plVar1 = plVar1 + 3;
        if (lVar5 == 1) goto LAB_710004e48c;
        lVar5 = 1;
        lVar6 = *plVar1;
      }
      uVar4 = FUN_710080daa0((char *)((long)plVar3 + lVar6 + 1),&local_38,0);
      plVar3 = local_38;
      if (((char)*local_38 == ':' || (char)*local_38 == '\0') && uVar4 < 0x80000000) {
        *(int *)(plVar1 + 2) = (int)uVar4;
      }
    }
LAB_710004e48c:
    plVar3 = (long *)FUN_710080eb40(plVar3,0x3a);
  } while( true );
}



// ===== FUN_710004e600 @ 710004e600 (size=56) =====

void FUN_710004e600(void)

{
  int iVar1;
  
  iVar1 = FUN_7100835b20(&DAT_7100d21028,FUN_71007ae200);
  DAT_7100d2102c = iVar1 == 0;
  return;
}



// ===== FUN_710004ea20 @ 710004ea20 (size=36) =====

/* WARNING: Removing unreachable block (ram,0x00710004ea40) */

void FUN_710004ea20(void)

{
  FUN_7100806120(&DAT_7100a266f0,&DAT_7100af82a8);
  return;
}



// ===== FUN_710004eaf0 @ 710004eaf0 (size=696) =====

long * FUN_710004eaf0(long *param_1,long *param_2,long param_3,ulong param_4)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  
  puVar1 = (uint *)param_2[3];
  uVar9 = param_4 & param_2[4];
  lVar15 = uVar9 * 8;
  uVar6 = puVar1[uVar9 * 2];
  if (uVar6 != 0xffffffff) {
    uVar10 = 0;
    puVar4 = puVar1 + uVar9 * 2;
    do {
      while( true ) {
        uVar3 = puVar4[1];
        uVar12 = (uint)param_2[4];
        if (uVar3 == (uint)param_4) goto LAB_710004ebc4;
        uVar5 = (ulong)(uVar3 & uVar12);
        if (uVar9 < uVar5) {
          uVar7 = param_2[1] - *param_2 >> 3;
          if ((uVar7 - uVar5) + uVar9 < uVar10) goto LAB_710004eba4;
        }
        else {
          if (uVar9 - uVar5 < uVar10) goto LAB_710004eba4;
          uVar7 = param_2[1] - *param_2 >> 3;
        }
        uVar9 = uVar9 + 1;
        if (uVar9 < uVar7) break;
        lVar15 = 0;
        uVar6 = *puVar1;
        uVar9 = 0;
        uVar10 = uVar10 + 1;
        puVar4 = puVar1;
        if (uVar6 == 0xffffffff) goto LAB_710004eba4;
      }
      lVar15 = uVar9 * 8;
      uVar10 = uVar10 + 1;
      puVar4 = puVar1 + uVar9 * 2;
      uVar6 = *puVar4;
    } while (uVar6 != 0xffffffff);
  }
LAB_710004eba4:
  lVar13 = param_2[0xc];
  lVar2 = param_2[0xe];
  lVar15 = param_2[0xd];
  *param_1 = param_2[0xb];
  param_1[1] = lVar13;
  param_1[3] = lVar2;
  param_1[2] = lVar15;
  return param_1;
LAB_710004ebc4:
  lVar2 = param_2[7];
  lVar13 = param_2[8];
  plVar14 = (long *)param_2[10];
  lVar11 = (lVar2 - lVar13 >> 3) * -0x3333333333333333;
  uVar5 = lVar11 + (ulong)uVar6;
  if ((long)uVar5 < 0) {
    uVar7 = ~(~uVar5 / 0xc);
LAB_710004ece4:
    lVar8 = *(long *)(plVar14[uVar7] + (uVar5 + uVar7 * -0xc) * 0x28);
  }
  else {
    if (0xb < (long)uVar5) {
      uVar7 = (long)uVar5 / 0xc;
      goto LAB_710004ece4;
    }
    lVar8 = *(long *)(lVar2 + (ulong)uVar6 * 0x28);
  }
  if (param_3 == lVar8) {
    if (param_2[1] != *param_2 + lVar15) {
      uVar10 = (ulong)*(uint *)(*param_2 + lVar15);
      uVar9 = uVar10 + lVar11;
      if ((long)uVar9 < 0) {
        uVar10 = ~(~uVar9 / 0xc);
      }
      else {
        if ((long)uVar9 < 0xc) {
          lVar15 = param_2[9];
          lVar2 = lVar2 + uVar10 * 0x28;
          goto LAB_710004ed58;
        }
        uVar10 = (long)uVar9 / 0xc;
      }
      plVar14 = plVar14 + uVar10;
      lVar13 = *plVar14;
      lVar2 = lVar13 + (uVar9 + uVar10 * -0xc) * 0x28;
      lVar15 = lVar13 + 0x1e0;
LAB_710004ed58:
      *param_1 = lVar2;
      param_1[1] = lVar13;
      param_1[2] = lVar15;
      param_1[3] = (long)plVar14;
      return param_1;
    }
  }
  else {
    uVar5 = (ulong)(uVar3 & uVar12);
    if (uVar5 <= uVar9) goto LAB_710004ec5c;
LAB_710004ec04:
    uVar7 = param_2[1] - *param_2 >> 3;
    if (uVar10 <= (uVar7 - uVar5) + uVar9) {
      uVar9 = uVar9 + 1;
      if (uVar7 <= uVar9) goto LAB_710004ec80;
      do {
        lVar15 = uVar9 * 8;
        uVar6 = puVar1[uVar9 * 2];
        puVar4 = puVar1 + uVar9 * 2;
        while( true ) {
          if (uVar6 == 0xffffffff) goto LAB_710004ec9c;
          uVar10 = uVar10 + 1;
          uVar3 = puVar4[1];
          if (uVar3 == (uint)param_4) goto LAB_710004ebc4;
          uVar5 = (ulong)(uVar3 & uVar12);
          if (uVar9 < uVar5) goto LAB_710004ec04;
LAB_710004ec5c:
          if (uVar9 - uVar5 < uVar10) goto LAB_710004ec9c;
          uVar9 = uVar9 + 1;
          if (uVar9 < (ulong)(param_2[1] - *param_2 >> 3)) break;
LAB_710004ec80:
          lVar15 = 0;
          uVar6 = *puVar1;
          uVar9 = 0;
          puVar4 = puVar1;
        }
      } while( true );
    }
  }
LAB_710004ec9c:
  lVar13 = param_2[0xc];
  lVar2 = param_2[0xe];
  lVar15 = param_2[0xd];
  *param_1 = param_2[0xb];
  param_1[1] = lVar13;
  param_1[3] = lVar2;
  param_1[2] = lVar15;
  return param_1;
}



// ===== FUN_710004ef30 @ 710004ef30 (size=408) =====

void FUN_710004ef30(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  plVar3 = (long *)param_1[3];
  plVar6 = (long *)param_1[4];
  if (plVar3 != plVar6) {
    do {
      lVar5 = *plVar3;
      if (lVar5 != 0) {
        plVar2 = *(long **)(lVar5 + 0x28);
        plVar4 = *(long **)(lVar5 + 0x30);
        if (plVar2 != plVar4) {
          do {
            lVar1 = *plVar2;
            if (lVar1 != 0) {
              if (*(long *)(lVar1 + 0x28) != lVar1 + 0x38) {
                thunk_FUN_710081c200(*(long *)(lVar1 + 0x28),*(long *)(lVar1 + 0x38) + 1);
              }
              if (*(long *)(lVar1 + 8) != lVar1 + 0x18) {
                thunk_FUN_710081c200(*(long *)(lVar1 + 8),*(long *)(lVar1 + 0x18) + 1);
              }
              thunk_FUN_710081c200(lVar1,0x48);
            }
            plVar2 = plVar2 + 1;
          } while (plVar4 != plVar2);
          plVar4 = *(long **)(lVar5 + 0x28);
        }
        if (plVar4 != (long *)0x0) {
          thunk_FUN_710081c200(plVar4,*(long *)(lVar5 + 0x38) - (long)plVar4);
        }
        if (*(long *)(lVar5 + 8) != lVar5 + 0x18) {
          thunk_FUN_710081c200(*(long *)(lVar5 + 8),*(long *)(lVar5 + 0x18) + 1);
        }
        thunk_FUN_710081c200(lVar5,0x40);
      }
      plVar3 = plVar3 + 1;
    } while (plVar6 != plVar3);
    plVar6 = (long *)param_1[3];
  }
  if (plVar6 != (long *)0x0) {
    thunk_FUN_710081c200(plVar6,param_1[5] - (long)plVar6);
  }
  plVar3 = (long *)*param_1;
  plVar6 = (long *)param_1[1];
  if (plVar3 != plVar6) {
    do {
      lVar5 = *plVar3;
      if (lVar5 != 0) {
        if (*(long *)(lVar5 + 0x28) != lVar5 + 0x38) {
          thunk_FUN_710081c200(*(long *)(lVar5 + 0x28),*(long *)(lVar5 + 0x38) + 1);
        }
        if (*(long *)(lVar5 + 8) != lVar5 + 0x18) {
          thunk_FUN_710081c200(*(long *)(lVar5 + 8),*(long *)(lVar5 + 0x18) + 1);
        }
        thunk_FUN_710081c200(lVar5,0x48);
      }
      plVar3 = plVar3 + 1;
    } while (plVar6 != plVar3);
    plVar6 = (long *)*param_1;
  }
  if (plVar6 != (long *)0x0) {
    thunk_FUN_710081c200(plVar6,param_1[2] - (long)plVar6);
  }
  thunk_FUN_710081c200(param_1,0x30);
  return;
}



// ===== FUN_710004f0d0 @ 710004f0d0 (size=1048) =====

void FUN_710004f0d0(ulong *param_1,undefined8 *param_2,long *param_3)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  char cVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  char *local_f0;
  ulong local_e8;
  char local_e0;
  undefined7 uStack_df;
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
  undefined1 uStack_18;
  undefined7 uStack_17;
  undefined1 uStack_10;
  char acStack_f [15];
  
  lVar15 = *param_3;
  lVar2 = param_3[1];
  if (lVar15 != lVar2) {
    do {
      uVar16 = *param_1;
      uVar5 = *param_2;
      *param_1 = uVar16 + 1;
      if (uVar16 < 10) {
        uVar14 = 1;
        uVar11 = 1;
      }
      else {
        uVar14 = 1;
        for (uVar6 = uVar16; iVar13 = (int)uVar14, 99 < uVar6; uVar6 = uVar6 / 10000) {
          if (uVar6 < 1000) {
            uVar11 = iVar13 + 2;
            uVar14 = (ulong)uVar11;
            goto LAB_710004f19c;
          }
          if (uVar6 < 10000) {
            uVar11 = iVar13 + 3;
            uVar14 = (ulong)uVar11;
            goto LAB_710004f19c;
          }
          uVar11 = iVar13 + 4;
          uVar14 = (ulong)uVar11;
          if (uVar6 < 100000) goto LAB_710004f19c;
        }
        uVar11 = iVar13 + 1;
        uVar14 = (ulong)uVar11;
      }
LAB_710004f19c:
      local_e8 = 0;
      local_e0 = '\0';
      local_f0 = &local_e0;
      FUN_71007e25c0(&local_f0,uVar14);
      pcVar4 = local_f0;
      uStack_c8 = 0x3730363035303430;
      local_d0 = (undefined8 *)0x3330323031303030;
      uStack_b8 = 0x3531343133313231;
      local_c0 = 0x3131303139303830;
      uStack_a8 = 0x3332323231323032;
      uStack_b0 = 0x3931383137313631;
      uStack_98 = 0x3133303339323832;
      local_a0 = 0x3732363235323432;
      uStack_88 = 0x3933383337333633;
      uStack_90 = 0x3533343333333233;
      local_80 = 0x3334323431343034;
      uStack_78 = 0x3734363435343434;
      uStack_68 = 0x3535343533353235;
      uStack_70 = 0x3135303539343834;
      local_20 = 0x3139303939383838;
      uStack_18 = 0x39;
      uStack_58 = 0x3336323631363036;
      local_60 = 0x3935383537353635;
      uStack_48 = 0x3137303739363836;
      uStack_50 = 0x3736363635363436;
      uStack_38 = 0x3937383737373637;
      local_40 = 0x3537343733373237;
      uStack_28 = 0x3738363835383438;
      uStack_30 = 0x3338323831383038;
      uStack_17 = 0x35393439333932;
      uStack_10 = 0x39;
      builtin_strncpy(acStack_f,"6979899",8);
      if (99 < uVar16) {
        uVar11 = uVar11 - 1;
        uVar6 = uVar16;
        do {
          uVar16 = uVar6 / 100;
          lVar7 = (ulong)(uint)((int)uVar6 + (int)uVar16 * -100) * 2;
          local_f0[uVar11] = *(char *)((long)&local_d0 + lVar7 + 1);
          uVar3 = uVar11 - 1;
          uVar11 = uVar11 - 2;
          local_f0[uVar3] = *(char *)((long)&local_d0 + lVar7);
          bVar1 = 9999 < uVar6;
          uVar6 = uVar16;
        } while (bVar1);
      }
      if (uVar16 < 10) {
        cVar12 = (char)uVar16 + '0';
      }
      else {
        lVar7 = (uVar16 & 0xffffffff) * 2;
        local_f0[1] = *(char *)((long)&local_d0 + lVar7 + 1);
        cVar12 = *(char *)((long)&local_d0 + lVar7);
      }
      *pcVar4 = cVar12;
      local_f0[uVar14] = '\0';
      local_e8 = uVar14;
      puVar8 = (undefined8 *)FUN_71007e28e0(&local_f0,0,0,"Location_",9);
      puVar10 = puVar8 + 2;
      local_d0 = (undefined8 *)*puVar8;
      if (local_d0 == puVar10) {
        local_d0 = &local_c0;
        FUN_710080f900(&local_c0,puVar10,puVar8[1] + 1);
      }
      else {
        local_c0 = puVar8[2];
      }
      uStack_c8 = puVar8[1];
      *puVar8 = puVar10;
      puVar8[1] = 0;
      *(undefined1 *)(puVar8 + 2) = 0;
      puVar8 = (undefined8 *)FUN_71005f4be0(uVar5,1,&local_d0);
      if (local_d0 != &local_c0) {
        thunk_FUN_710081c200(local_d0,local_c0 + 1);
      }
      if (local_f0 != &local_e0) {
        thunk_FUN_710081c200(local_f0,CONCAT71(uStack_df,local_e0) + 1);
      }
      local_c0._4_4_ = (uint)(local_c0 >> 0x20) & 0xffffff00;
      local_c0 = CONCAT44(local_c0._4_4_,0x656d614e);
      uStack_c8 = 4;
      local_d0 = &local_c0;
      plVar9 = (long *)FUN_71005f4720(*puVar8,1,&local_d0);
      if (local_d0 != &local_c0) {
        thunk_FUN_710081c200(local_d0,local_c0 + 1);
      }
      FUN_71007e2260(*plVar9 + 0x28,lVar15);
      local_c0._4_4_ = (uint)(local_c0 >> 0x20) & 0xffffff00;
      local_c0 = CONCAT44(local_c0._4_4_,0x65707954);
      uStack_c8 = 4;
      local_d0 = &local_c0;
      plVar9 = (long *)FUN_71005f4720(*puVar8,1,&local_d0);
      if (local_d0 != &local_c0) {
        thunk_FUN_710081c200(local_d0,local_c0 + 1);
      }
      FUN_71007e2260(*plVar9 + 0x28,lVar15 + 0x40);
      local_c0 = CONCAT44(local_c0._4_4_,0x4c5255);
      uStack_c8 = 3;
      local_d0 = &local_c0;
      plVar9 = (long *)FUN_71005f4720(*puVar8,1,&local_d0);
      if (local_d0 != &local_c0) {
        thunk_FUN_710081c200(local_d0,local_c0 + 1);
      }
      FUN_71007e2260(*plVar9 + 0x28,lVar15 + 0x20);
      uStack_c8 = 0;
      local_c0 = local_c0 & 0xffffffffffffff00;
      local_d0 = &local_c0;
      FUN_71005f45a0(*puVar8,4,&local_d0);
      if (local_d0 != &local_c0) {
        thunk_FUN_710081c200(local_d0,local_c0 + 1);
      }
      lVar15 = lVar15 + 0x60;
    } while (lVar2 != lVar15);
  }
  return;
}



// ===== FUN_710004f540 @ 710004f540 (size=632) =====

long FUN_710004f540(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long local_28;
  long *local_20;
  long local_18;
  long local_10 [2];
  
  lVar1 = param_1 + 8;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(long *)(param_1 + 0x18) = lVar1;
  *(long *)(param_1 + 0x20) = lVar1;
  *(undefined8 *)(param_1 + 0x28) = 0;
  lVar6 = DAT_7100af82d8;
  if (DAT_7100af82d8 != 0) {
    local_28 = 0x24;
    local_20 = local_10;
    local_20 = (long *)FUN_71007e2140(&local_20,&local_28,0);
    local_10[0] = local_28;
    *(undefined4 *)(local_20 + 4) = 0x73657461;
    *local_20 = 0x64656c6261736944;
    local_20[1] = 0x2073656c74697420;
    local_20[3] = 0x64707520726f6620;
    local_20[2] = 0x6b63656863206f74;
    local_18 = local_28;
    *(char *)((long)local_20 + local_28) = '\0';
    plVar5 = (long *)FUN_71005f2700(lVar6,1,&local_20);
    if (local_20 != local_10) {
      thunk_FUN_710081c200(local_20,local_10[0] + 1);
    }
    lVar6 = *plVar5;
    if (lVar6 != 0) {
      puVar3 = *(undefined8 **)(lVar6 + 0x30);
      for (puVar2 = *(undefined8 **)(lVar6 + 0x28); puVar2 != puVar3; puVar2 = puVar2 + 1) {
        piVar9 = (int *)*puVar2;
        if ((*piVar9 == 5) && (0xf < *(ulong *)(piVar9 + 0xc))) {
          plVar5 = *(long **)(piVar9 + 10);
          local_28 = 0x10;
          local_20 = local_10;
          local_20 = (long *)FUN_71007e2140(&local_20,&local_28,0);
          local_10[0] = local_28;
          lVar6 = plVar5[1];
          *local_20 = *plVar5;
          local_20[1] = lVar6;
          local_18 = local_28;
          *(char *)((long)local_20 + local_28) = '\0';
          uVar7 = FUN_710080daa0(local_20,0,0x10);
          if (local_20 != local_10) {
            thunk_FUN_710081c200(local_20,local_10[0] + 1);
          }
          uVar7 = uVar7 & 0xfffffffffffff7ff;
          if (uVar7 != 0) {
            lVar8 = FUN_71007af5c0(0x28);
            lVar6 = *(long *)(param_1 + 0x10);
            *(ulong *)(lVar8 + 0x20) = uVar7;
            if (lVar6 == 0) {
              if ((*(long *)(param_1 + 0x18) != lVar1) &&
                 (lVar6 = FUN_71007b0ac0(lVar1), uVar7 <= *(ulong *)(lVar6 + 0x20))) {
LAB_710004f73c:
                thunk_FUN_710081c200(lVar8,0x28);
                goto LAB_710004f604;
              }
              bVar4 = true;
              lVar10 = lVar1;
            }
            else {
              do {
                lVar10 = lVar6;
                uVar11 = *(ulong *)(lVar10 + 0x20);
                plVar5 = (long *)(lVar10 + 0x10);
                if (uVar7 >= uVar11) {
                  plVar5 = (long *)(lVar10 + 0x18);
                }
                lVar6 = *plVar5;
              } while (*plVar5 != 0);
              uVar12 = uVar11;
              if (uVar7 < uVar11) {
                if (*(long *)(param_1 + 0x18) != lVar10) {
                  lVar6 = FUN_71007b0ac0(lVar10);
                  uVar12 = *(ulong *)(lVar6 + 0x20);
                  goto LAB_710004f6f4;
                }
              }
              else {
LAB_710004f6f4:
                if (uVar7 <= uVar12) goto LAB_710004f73c;
              }
              bVar4 = true;
              if (lVar1 != lVar10) {
                bVar4 = uVar7 < uVar11;
              }
            }
            FUN_71007b0b40(bVar4,lVar8,lVar10,lVar1);
            *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
          }
        }
LAB_710004f604:
      }
    }
  }
  return param_1;
}



// ===== FUN_710004f7e0 @ 710004f7e0 (size=124) =====

void FUN_710004f7e0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)*param_1;
  plVar2 = (long *)param_1[1];
  if (plVar1 != plVar2) {
    do {
      if ((long *)*plVar1 != plVar1 + 2) {
        thunk_FUN_710081c200((long *)*plVar1,plVar1[2] + 1);
      }
      plVar1 = plVar1 + 4;
    } while (plVar2 != plVar1);
    plVar2 = (long *)*param_1;
  }
  if (plVar2 != (long *)0x0) {
    thunk_FUN_710081c200(plVar2,param_1[2] - (long)plVar2);
    return;
  }
  return;
}



// ===== FUN_710004f860 @ 710004f860 (size=160) =====

void FUN_710004f860(undefined8 *param_1,undefined1 *param_2,ulong param_3)

{
  undefined1 *puVar1;
  long lVar2;
  ulong local_8;
  
  local_8 = param_3;
  if (param_3 < 0x10) {
    puVar1 = (undefined1 *)*param_1;
    lVar2 = param_3 + 1;
    if (param_3 == 0) {
LAB_710004f8ac:
      *puVar1 = *param_2;
      param_1[1] = local_8;
      return;
    }
  }
  else {
    puVar1 = (undefined1 *)FUN_71007e2140(param_1,&local_8,0);
    lVar2 = local_8 + 1;
    *param_1 = puVar1;
    param_1[2] = local_8;
    if (local_8 == 0) goto LAB_710004f8ac;
    if (lVar2 == 0) {
      param_1[1] = 0xffffffffffffffff;
      return;
    }
  }
  FUN_710080f900(puVar1,param_2,lVar2);
  param_1[1] = local_8;
  return;
}



// ===== FUN_710004f900 @ 710004f900 (size=1008) =====

void FUN_710004f900(long param_1)

{
  ulong uVar1;
  undefined7 uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  long *plVar13;
  undefined8 extraout_d31;
  undefined1 auVar14 [16];
  long *local_80;
  long local_70 [2];
  undefined1 *local_60;
  long local_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  long *local_40 [2];
  long local_30 [2];
  undefined7 local_20;
  undefined1 uStack_19;
  undefined2 uStack_18;
  undefined1 uStack_16;
  undefined5 uStack_15;
  undefined1 local_10;
  undefined7 uStack_f;
  
  uStack_18 = 0xb3c7;
  uStack_16 = 0x4e;
  lVar4 = FUN_710076d158();
  local_20 = (undefined7)extraout_d31;
  uStack_19 = (undefined1)((ulong)extraout_d31 >> 0x38);
  if ((*(ulong *)(lVar4 + 0x20) & 1) == 0) {
    *(undefined1 *)(lVar4 + 0x3b) = 1;
    *(undefined8 *)(lVar4 + 0x30) = extraout_d31;
    *(uint *)(lVar4 + 0x37) = CONCAT13(uStack_16,CONCAT21(uStack_18,uStack_19));
    *(ulong *)(lVar4 + 0x20) = 1;
    FUN_71007ad7e0(&DAT_710004ea80,lVar4 + 0x30,0);
  }
  lVar4 = FUN_710076d158();
  if ((*(byte *)(lVar4 + 0x3b) & 1) != 0) {
    uVar9 = 0xe59fef494b4dbfa1;
    uVar8 = 0;
    do {
      uVar8 = (uVar8 & 7) << 3;
      auVar14 = FUN_710076d158();
      lVar5 = auVar14._8_8_;
      lVar4 = auVar14._0_8_ + 0x30;
      *(byte *)(lVar5 + lVar4) =
           (char)(auVar14._8_4_ >> 3) + (char)(uVar9 >> (uVar8 & 0x3f)) ^ *(byte *)(lVar5 + lVar4);
      uVar8 = lVar5 + 1;
    } while (uVar8 != 0xb);
    *(undefined1 *)(auVar14._0_8_ + 0x3b) = 0;
  }
  lVar4 = FUN_710076d158();
  local_20 = SUB87(&local_10,0);
  uVar2 = local_20;
  uStack_19 = (undefined1)((ulong)&local_10 >> 0x38);
  uVar3 = uStack_19;
  lVar5 = FUN_710081ce00(lVar4 + 0x30);
  if (lVar5 == 1) {
    local_10 = *(undefined1 *)(lVar4 + 0x30);
  }
  else if (lVar5 != 0) {
    FUN_710080f900(&local_10,lVar4 + 0x30,lVar5);
  }
  uStack_18 = (undefined2)lVar5;
  uStack_16 = (undefined1)((ulong)lVar5 >> 0x10);
  uStack_15 = (undefined5)((ulong)lVar5 >> 0x18);
  (&local_10)[lVar5] = 0;
  puVar6 = (undefined8 *)FUN_71007e28e0(&local_20,0,0,DAT_7100af84c0,DAT_7100af84c8);
  plVar13 = puVar6 + 2;
  if ((long *)*puVar6 == plVar13) {
    FUN_710080f900(local_70,plVar13,puVar6[1] + 1);
    local_80 = local_70;
  }
  else {
    local_70[0] = puVar6[2];
    local_80 = (long *)*puVar6;
  }
  uVar7 = puVar6[1];
  *(undefined1 *)(puVar6 + 2) = 0;
  *puVar6 = plVar13;
  puVar6[1] = 0;
  if ((undefined1 *)CONCAT17(uStack_19,local_20) != &local_10) {
    thunk_FUN_710081c200((undefined1 *)CONCAT17(uStack_19,local_20),CONCAT71(uStack_f,local_10) + 1)
    ;
  }
  local_50 = 0;
  local_58 = 0;
  local_60 = &local_50;
  FUN_71007e25c0(&local_60,0x100000);
  puVar10 = *(ulong **)(param_1 + 200);
  puVar11 = *(ulong **)(param_1 + 0xd8);
  plVar13 = *(long **)(param_1 + 0xe0);
  puVar12 = *(ulong **)(param_1 + 0xe8);
  while (puVar12 != puVar10) {
    while( true ) {
      uVar9 = *puVar10;
      local_20 = uVar2;
      uStack_19 = uVar3;
      FUN_71007e21c0(&local_20,0x10,0x30);
      lVar4 = 0;
      uVar8 = 0x3c;
      do {
        uVar1 = uVar8 & 0x3f;
        uVar8 = uVar8 - 4;
        *(char *)(CONCAT17(uStack_19,local_20) + lVar4) = "0123456789ABCDEF"[uVar9 >> uVar1 & 0xf];
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0x10);
      if (0x7ffffffffffffffeU - local_58 < CONCAT53(uStack_15,CONCAT12(uStack_16,uStack_18))) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003b58("basic_string::append",CONCAT17(uStack_19,local_20));
      }
      FUN_71007e2a60(&local_60);
      if ((undefined1 *)CONCAT17(uStack_19,local_20) != &local_10) {
        thunk_FUN_710081c200
                  ((undefined1 *)CONCAT17(uStack_19,local_20),CONCAT71(uStack_f,local_10) + 1);
      }
      if (local_58 == 0x7ffffffffffffffe) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003b58("basic_string::append");
      }
      FUN_71007e2a60(&local_60,&DAT_7100841540,1);
      if (0x7ffffffffffffffeU - local_58 < puVar10[2]) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003b58("basic_string::append",puVar10[1]);
      }
      FUN_71007e2a60(&local_60);
      if (local_58 == 0x7ffffffffffffffe) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003b58("basic_string::append");
      }
      FUN_71007e2a60(&local_60,&DAT_71008542a0,1);
      puVar10 = puVar10 + 5;
      if (puVar11 != puVar10) break;
      plVar13 = plVar13 + 1;
      puVar10 = (ulong *)*plVar13;
      puVar11 = puVar10 + 0x3c;
      if (puVar12 == puVar10) goto LAB_710004fbd4;
    }
  }
LAB_710004fbd4:
  local_40[0] = local_30;
  FUN_710004f860(local_40,local_80,uVar7);
  local_20 = uVar2;
  uStack_19 = uVar3;
  FUN_710004f860(&local_20,local_60,local_58);
  FUN_710010fa10(local_40,&local_20);
  if ((undefined1 *)CONCAT17(uStack_19,local_20) != &local_10) {
    thunk_FUN_710081c200((undefined1 *)CONCAT17(uStack_19,local_20),CONCAT71(uStack_f,local_10) + 1)
    ;
  }
  if (local_40[0] != local_30) {
    thunk_FUN_710081c200(local_40[0],local_30[0] + 1);
  }
  if (local_60 != &local_50) {
    thunk_FUN_710081c200(local_60,CONCAT71(uStack_4f,local_50) + 1);
  }
  if (local_80 != local_70) {
    thunk_FUN_710081c200(local_80,local_70[0] + 1);
  }
  return;
}



// ===== FUN_710004fd60 @ 710004fd60 (size=192) =====

void FUN_710004fd60(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = (long *)0x0;
  lVar3 = param_2[1] - *param_2;
  if (lVar3 != 0) {
    plVar4 = (long *)FUN_71007af5c0(lVar3);
  }
  *param_1 = plVar4;
  param_1[1] = plVar4;
  param_1[2] = (long)plVar4 + lVar3;
  puVar2 = (undefined8 *)param_2[1];
  for (puVar1 = (undefined8 *)*param_2; puVar2 != puVar1; puVar1 = puVar1 + 0xc) {
    *plVar4 = (long)(plVar4 + 2);
    FUN_710004f860(plVar4,*puVar1,puVar1[1]);
    plVar4[4] = (long)(plVar4 + 6);
    FUN_710004f860(plVar4 + 4,puVar1[4],puVar1[5]);
    plVar4[8] = (long)(plVar4 + 10);
    FUN_710004f860(plVar4 + 8,puVar1[8],puVar1[9]);
    plVar4 = plVar4 + 0xc;
  }
  param_1[1] = plVar4;
  return;
}



// ===== FUN_710004fe90 @ 710004fe90 (size=212) =====

long * FUN_710004fe90(long *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long local_20 [4];
  
  FUN_710004eaf0(local_20,param_2 + 0x90,param_3,param_3);
  lVar2 = *(long *)(param_2 + 0xe8);
  if (lVar2 == local_20[0]) {
    *(undefined1 *)(param_1 + 2) = 0;
    *param_1 = (long)(param_1 + 2);
    param_1[1] = 0;
    return param_1;
  }
  FUN_710004eaf0(param_2 + 0x90,param_3,param_3);
  if (lVar2 != local_20[0]) {
    *param_1 = (long)(param_1 + 2);
    FUN_710004f860(param_1,*(undefined8 *)(local_20[0] + 8),*(undefined8 *)(local_20[0] + 0x10));
    return param_1;
  }
  uVar1 = FUN_71007adf60(0x10);
  FUN_71007b64c0(uVar1,"Couldn\'t find the key.");
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(uVar1,&PTR_PTR_FUN_7100ae7580,FUN_71007b0980);
}



// ===== FUN_710004ff80 @ 710004ff80 (size=748) =====

void FUN_710004ff80(long param_1)

{
  undefined6 uVar1;
  undefined2 uVar2;
  char cVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 extraout_d31;
  undefined8 *local_70;
  undefined8 uStack_68;
  long *local_60;
  undefined8 local_58;
  long local_50 [2];
  long *local_40 [2];
  long local_30 [2];
  undefined6 local_20;
  undefined2 uStack_1a;
  undefined4 local_18;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined1 local_10;
  undefined7 uStack_f;
  
  puVar4 = (undefined8 *)FUN_71007af5c0(0x30);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  uStack_68 = 0;
  local_18 = 0x9fa409f7;
  uStack_14 = 0xf3bd;
  local_70 = puVar4;
  lVar5 = FUN_710076d158();
  local_20 = (undefined6)extraout_d31;
  uStack_1a = (undefined2)((ulong)extraout_d31 >> 0x30);
  if ((*(ulong *)(lVar5 + 0x40) & 1) == 0) {
    *(undefined1 *)(lVar5 + 0x5e) = 1;
    *(undefined8 *)(lVar5 + 0x50) = extraout_d31;
    *(ulong *)(lVar5 + 0x56) = CONCAT26(uStack_14,CONCAT42(local_18,uStack_1a));
    *(undefined8 *)(lVar5 + 0x40) = 1;
    FUN_71007ad7e0(&DAT_710004ea70,lVar5 + 0x50,0);
  }
  lVar5 = FUN_710076d158();
  if ((*(byte *)(lVar5 + 0x5e) & 1) != 0) {
    uVar10 = 0x1dcb7db75fa1fbe3;
    uVar9 = 0;
    do {
      lVar5 = FUN_710076d158();
      pcVar8 = (char *)(lVar5 + 0x50);
      pcVar8[uVar9] =
           (char)((uint)uVar9 >> 3) + (char)(uVar10 >> ((uVar9 & 7) << 3)) ^ pcVar8[uVar9];
      uVar9 = uVar9 + 1;
    } while (uVar9 != 0xe);
    cVar3 = *(char *)(lVar5 + 0x50);
    do {
      cVar3 = cVar3 + pcVar8[1];
      pcVar8 = pcVar8 + 1;
      *pcVar8 = cVar3;
    } while (pcVar8 != (char *)(lVar5 + 0x5d));
    lVar5 = FUN_710076d158();
    *(undefined1 *)(lVar5 + 0x5e) = 0;
  }
  lVar5 = FUN_710076d158();
  local_20 = SUB86(&local_10,0);
  uVar1 = local_20;
  uStack_1a = (undefined2)((ulong)&local_10 >> 0x30);
  uVar2 = uStack_1a;
  lVar6 = FUN_710081ce00(lVar5 + 0x50);
  if (lVar6 == 1) {
    local_10 = *(undefined1 *)(lVar5 + 0x50);
  }
  else if (lVar6 != 0) {
    FUN_710080f900(&local_10,lVar5 + 0x50,lVar6);
  }
  local_18 = (undefined4)lVar6;
  uStack_14 = (undefined2)((ulong)lVar6 >> 0x20);
  uStack_12 = (undefined2)((ulong)lVar6 >> 0x30);
  (&local_10)[lVar6] = 0;
  puVar7 = (undefined8 *)FUN_71007e28e0(&local_20,0,0,DAT_7100af84c0,DAT_7100af84c8);
  plVar11 = puVar7 + 2;
  local_60 = (long *)*puVar7;
  if (local_60 == plVar11) {
    local_60 = local_50;
    FUN_710080f900(local_50,plVar11,puVar7[1] + 1);
  }
  else {
    local_50[0] = puVar7[2];
  }
  local_58 = puVar7[1];
  *(undefined1 *)(puVar7 + 2) = 0;
  *puVar7 = plVar11;
  puVar7[1] = 0;
  if ((undefined1 *)CONCAT26(uStack_1a,local_20) != &local_10) {
    thunk_FUN_710081c200((undefined1 *)CONCAT26(uStack_1a,local_20),CONCAT71(uStack_f,local_10) + 1)
    ;
  }
  if (*(long *)(param_1 + 0x120) != *(long *)(param_1 + 0x128)) {
    FUN_710004f0d0(&uStack_68,&local_70,param_1 + 0x120);
  }
  if (*(long *)(param_1 + 0x138) != *(long *)(param_1 + 0x140)) {
    FUN_710004f0d0(&uStack_68,&local_70,param_1 + 0x138);
  }
  if (*(long *)(param_1 + 0x150) != *(long *)(param_1 + 0x158)) {
    FUN_710004f0d0(&uStack_68,&local_70,param_1 + 0x150);
  }
  local_20 = uVar1;
  uStack_1a = uVar2;
  FUN_710004f860(&local_20,local_60,local_58);
  FUN_71005f2920(local_40,puVar4,0);
  FUN_710010fa10(&local_20,local_40);
  if (local_40[0] != local_30) {
    thunk_FUN_710081c200(local_40[0],local_30[0] + 1);
  }
  if ((undefined1 *)CONCAT26(uStack_1a,local_20) != &local_10) {
    thunk_FUN_710081c200((undefined1 *)CONCAT26(uStack_1a,local_20),CONCAT71(uStack_f,local_10) + 1)
    ;
  }
  if (local_60 != local_50) {
    thunk_FUN_710081c200(local_60,local_50[0] + 1);
  }
  FUN_710004ef30(puVar4);
  return;
}



// ===== FUN_71000502c0 @ 71000502c0 (size=872) =====

void FUN_71000502c0(long *param_1)

{
  undefined7 uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  char *pcVar10;
  char *pcVar11;
  char cVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  undefined8 extraout_d31;
  undefined1 auVar20 [16];
  long *local_60;
  long local_50 [2];
  long *local_40 [2];
  long local_30 [2];
  undefined7 local_20;
  undefined1 uStack_19;
  undefined2 uStack_18;
  undefined1 uStack_16;
  undefined5 uStack_15;
  undefined1 local_10;
  undefined7 uStack_f;
  
  if (*param_1 == 0) {
    puVar5 = (undefined8 *)FUN_71007af5c0(0x30);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    *param_1 = (long)puVar5;
  }
  uStack_18 = 0x123f;
  uStack_16 = 0xa1;
  lVar3 = FUN_710076d158();
  local_20 = (undefined7)extraout_d31;
  uStack_19 = (undefined1)((ulong)extraout_d31 >> 0x38);
  if ((*(ulong *)(lVar3 + 0x60) & 1) == 0) {
    *(undefined1 *)(lVar3 + 0x73) = 1;
    *(undefined8 *)(lVar3 + 0x68) = extraout_d31;
    *(uint *)(lVar3 + 0x6f) = CONCAT13(uStack_16,CONCAT21(uStack_18,uStack_19));
    *(undefined8 *)(lVar3 + 0x60) = 1;
    FUN_71007ad7e0(&DAT_710004ea90,lVar3 + 0x68,0);
  }
  lVar3 = FUN_710076d158();
  if ((*(byte *)(lVar3 + 0x73) & 1) != 0) {
    uVar14 = 0x3137030b2137eb3b;
    uVar9 = 0;
    do {
      uVar9 = (uVar9 & 7) << 3;
      auVar20 = FUN_710076d158();
      lVar4 = auVar20._8_8_;
      lVar3 = auVar20._0_8_;
      *(byte *)(lVar4 + lVar3 + 0x68) =
           (char)(auVar20._8_4_ >> 3) + (char)(uVar14 >> (uVar9 & 0x3f)) ^
           *(byte *)(lVar4 + lVar3 + 0x68);
      uVar9 = lVar4 + 1;
    } while (uVar9 != 0xb);
    cVar12 = *(char *)(lVar3 + 0x68);
    pcVar10 = (char *)(lVar3 + 0x69);
    do {
      cVar12 = cVar12 + *pcVar10;
      pcVar11 = pcVar10 + 1;
      *pcVar10 = cVar12;
      pcVar10 = pcVar11;
    } while ((char *)(lVar3 + 0x73) != pcVar11);
    lVar3 = FUN_710076d158();
    *(undefined1 *)(lVar3 + 0x73) = 0;
  }
  lVar3 = FUN_710076d158();
  local_20 = SUB87(&local_10,0);
  uVar1 = local_20;
  uStack_19 = (undefined1)((ulong)&local_10 >> 0x38);
  uVar2 = uStack_19;
  lVar4 = FUN_710081ce00(lVar3 + 0x68);
  if (lVar4 == 1) {
    local_10 = *(undefined1 *)(lVar3 + 0x68);
  }
  else if (lVar4 != 0) {
    FUN_710080f900(&local_10,lVar3 + 0x68,lVar4);
  }
  uStack_18 = (undefined2)lVar4;
  uStack_16 = (undefined1)((ulong)lVar4 >> 0x10);
  uStack_15 = (undefined5)((ulong)lVar4 >> 0x18);
  (&local_10)[lVar4] = 0;
  puVar5 = (undefined8 *)FUN_71007e28e0(&local_20,0,0,DAT_7100af84c0,DAT_7100af84c8);
  plVar15 = puVar5 + 2;
  if ((long *)*puVar5 == plVar15) {
    FUN_710080f900(local_50,plVar15,puVar5[1] + 1);
    local_60 = local_50;
  }
  else {
    local_50[0] = puVar5[2];
    local_60 = (long *)*puVar5;
  }
  uVar6 = puVar5[1];
  *(undefined1 *)(puVar5 + 2) = 0;
  *puVar5 = plVar15;
  puVar5[1] = 0;
  if ((undefined1 *)CONCAT17(uStack_19,local_20) != &local_10) {
    thunk_FUN_710081c200((undefined1 *)CONCAT17(uStack_19,local_20),CONCAT71(uStack_f,local_10) + 1)
    ;
  }
  lVar3 = param_1[8];
  lVar4 = param_1[10];
  plVar15 = (long *)param_1[0xb];
  lVar19 = param_1[0xc];
  while (lVar19 != lVar3) {
    plVar7 = (long *)FUN_71005f4be0(*param_1,1,lVar3);
    if (*plVar7 != 0) {
      lVar13 = *(long *)(lVar3 + 0x58);
      lVar16 = *(long *)(lVar3 + 0x68);
      plVar18 = *(long **)(lVar3 + 0x70);
      lVar17 = *(long *)(lVar3 + 0x78);
      while (lVar17 != lVar13) {
        plVar8 = (long *)FUN_71005f4720(*plVar7,1,lVar13);
        if (*plVar8 != 0) {
          FUN_71007e2260(*plVar8 + 0x28,lVar13 + 0x20);
        }
        lVar13 = lVar13 + 0x40;
        if (lVar16 == lVar13) {
          plVar18 = plVar18 + 1;
          lVar13 = *plVar18;
          lVar16 = lVar13 + 0x200;
        }
      }
    }
    lVar3 = lVar3 + 0xa8;
    if (lVar4 == lVar3) {
      plVar15 = plVar15 + 1;
      lVar3 = *plVar15;
      lVar4 = lVar3 + 0x1f8;
    }
  }
  local_20 = uVar1;
  uStack_19 = uVar2;
  FUN_710004f860(&local_20,local_60,uVar6);
  FUN_71005f2920(local_40,*param_1,0);
  FUN_710010fa10(&local_20,local_40);
  if (local_40[0] != local_30) {
    thunk_FUN_710081c200(local_40[0],local_30[0] + 1);
  }
  if ((undefined1 *)CONCAT17(uStack_19,local_20) != &local_10) {
    thunk_FUN_710081c200((undefined1 *)CONCAT17(uStack_19,local_20),CONCAT71(uStack_f,local_10) + 1)
    ;
  }
  if (local_60 != local_50) {
    thunk_FUN_710081c200(local_60,local_50[0] + 1);
  }
  return;
}



// ===== FUN_7100050670 @ 7100050670 (size=28) =====

void FUN_7100050670(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    thunk_FUN_710081c200(lVar1,param_1[2] - lVar1);
    return;
  }
  return;
}



// ===== FUN_7100050690 @ 7100050690 (size=104) =====

void FUN_7100050690(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar4;
  undefined8 *puVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar4 = param_1[9];
    puVar2 = (undefined8 *)param_1[5];
    if ((undefined8 *)param_1[5] < (undefined8 *)(lVar4 + 8U)) {
      do {
        puVar3 = puVar2 + 1;
        thunk_FUN_710081c200(*puVar2,0x200);
        puVar2 = puVar3;
      } while (puVar3 < (undefined8 *)(lVar4 + 8U));
      lVar1 = *param_1;
    }
    thunk_FUN_710081c200(lVar1,param_1[1] << 3);
    return;
  }
  return;
}



// ===== FUN_7100050700 @ 7100050700 (size=432) =====

void FUN_7100050700(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  
  plVar2 = *(long **)(param_1 + 0x20);
  puVar4 = *(undefined8 **)(param_1 + 0x28);
  plVar3 = *(long **)(param_1 + 0x30);
  plVar6 = *(long **)(param_1 + 0x38);
  puVar9 = *(undefined8 **)(param_1 + 0x48);
  plVar8 = *(long **)(param_1 + 0x10);
  puVar5 = puVar4;
  while (puVar5 = puVar5 + 1, puVar5 < puVar9) {
    plVar7 = (long *)*puVar5;
    plVar1 = plVar7 + 0x40;
    do {
      if ((long *)plVar7[4] != plVar7 + 6) {
        thunk_FUN_710081c200((long *)plVar7[4],plVar7[6] + 1);
      }
      if ((long *)*plVar7 != plVar7 + 2) {
        thunk_FUN_710081c200((long *)*plVar7,plVar7[2] + 1);
      }
      plVar7 = plVar7 + 8;
    } while (plVar7 != plVar1);
  }
  if (puVar9 == puVar4) {
    while (plVar3 != plVar8) {
      if ((long *)plVar8[4] != plVar8 + 6) {
        thunk_FUN_710081c200((long *)plVar8[4],plVar8[6] + 1);
      }
      plVar6 = (long *)*plVar8;
      if (plVar6 == plVar8 + 2) {
        plVar8 = plVar8 + 8;
      }
      else {
        plVar2 = plVar8 + 2;
        plVar8 = plVar8 + 8;
        thunk_FUN_710081c200(plVar6,*plVar2 + 1);
      }
    }
  }
  else {
    for (; plVar8 != plVar2; plVar8 = plVar8 + 8) {
      if ((long *)plVar8[4] != plVar8 + 6) {
        thunk_FUN_710081c200((long *)plVar8[4],plVar8[6] + 1);
      }
      if ((long *)*plVar8 != plVar8 + 2) {
        thunk_FUN_710081c200((long *)*plVar8,plVar8[2] + 1);
      }
    }
    for (; plVar3 != plVar6; plVar6 = plVar6 + 8) {
      if ((long *)plVar6[4] != plVar6 + 6) {
        thunk_FUN_710081c200((long *)plVar6[4],plVar6[6] + 1);
      }
      if ((long *)*plVar6 != plVar6 + 2) {
        thunk_FUN_710081c200((long *)*plVar6,plVar6[2] + 1);
      }
    }
  }
  FUN_7100050690(param_1);
  return;
}



// ===== FUN_71000508b0 @ 71000508b0 (size=856) =====

void FUN_71000508b0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *local_18;
  
  puVar7 = (undefined8 *)param_1[3];
  puVar5 = (undefined8 *)param_2[3];
  local_18 = puVar7 + 1;
  if (local_18 < puVar5) {
    do {
      plVar10 = (long *)*local_18;
      plVar8 = plVar10 + 0x3f;
      do {
        plVar2 = (long *)plVar10[0xd];
        puVar5 = (undefined8 *)plVar10[0xe];
        plVar3 = (long *)plVar10[0xf];
        plVar4 = (long *)plVar10[0x10];
        puVar11 = (undefined8 *)plVar10[0x12];
        plVar9 = (long *)plVar10[0xb];
        puVar7 = puVar5;
        while (puVar7 = puVar7 + 1, puVar7 < puVar11) {
          plVar12 = (long *)*puVar7;
          plVar1 = plVar12 + 0x40;
          do {
            if ((long *)plVar12[4] != plVar12 + 6) {
              thunk_FUN_710081c200((long *)plVar12[4],plVar12[6] + 1);
            }
            if ((long *)*plVar12 != plVar12 + 2) {
              thunk_FUN_710081c200((long *)*plVar12,plVar12[2] + 1);
            }
            plVar12 = plVar12 + 8;
          } while (plVar1 != plVar12);
        }
        if (puVar5 == puVar11) {
          for (; plVar9 != plVar3; plVar9 = plVar9 + 8) {
            if ((long *)plVar9[4] != plVar9 + 6) {
              thunk_FUN_710081c200((long *)plVar9[4],plVar9[6] + 1);
            }
            if ((long *)*plVar9 != plVar9 + 2) {
              thunk_FUN_710081c200((long *)*plVar9,plVar9[2] + 1);
            }
          }
        }
        else {
          for (; plVar9 != plVar2; plVar9 = plVar9 + 8) {
            if ((long *)plVar9[4] != plVar9 + 6) {
              thunk_FUN_710081c200((long *)plVar9[4],plVar9[6] + 1);
            }
            if ((long *)*plVar9 != plVar9 + 2) {
              thunk_FUN_710081c200((long *)*plVar9,plVar9[2] + 1);
            }
          }
          for (; plVar3 != plVar4; plVar4 = plVar4 + 8) {
            if ((long *)plVar4[4] != plVar4 + 6) {
              thunk_FUN_710081c200((long *)plVar4[4],plVar4[6] + 1);
            }
            if ((long *)*plVar4 != plVar4 + 2) {
              thunk_FUN_710081c200((long *)*plVar4,plVar4[2] + 1);
            }
          }
        }
        FUN_7100050690(plVar10 + 9);
        lVar6 = plVar10[4];
        if (lVar6 != 0) {
          thunk_FUN_710081c200(lVar6,plVar10[6] - lVar6);
        }
        if ((long *)*plVar10 != plVar10 + 2) {
          thunk_FUN_710081c200((long *)*plVar10,plVar10[2] + 1);
        }
        plVar10 = plVar10 + 0x15;
      } while (plVar10 != plVar8);
      local_18 = local_18 + 1;
      puVar5 = (undefined8 *)param_2[3];
    } while (local_18 < puVar5);
    puVar7 = (undefined8 *)param_1[3];
  }
  plVar8 = (long *)*param_1;
  if (puVar7 == puVar5) {
    param_2 = (long *)*param_2;
    if (param_2 != plVar8) {
      do {
        FUN_7100050700(plVar8 + 9);
        lVar6 = plVar8[4];
        if (lVar6 != 0) {
          thunk_FUN_710081c200(lVar6,plVar8[6] - lVar6);
        }
        if ((long *)*plVar8 != plVar8 + 2) {
          thunk_FUN_710081c200((long *)*plVar8,plVar8[2] + 1);
        }
        plVar8 = plVar8 + 0x15;
      } while (param_2 != plVar8);
      return;
    }
  }
  else {
    plVar10 = (long *)param_1[2];
    for (; plVar10 != plVar8; plVar8 = plVar8 + 0x15) {
      FUN_7100050700(plVar8 + 9);
      lVar6 = plVar8[4];
      if (lVar6 != 0) {
        thunk_FUN_710081c200(lVar6,plVar8[6] - lVar6);
      }
      if ((long *)*plVar8 != plVar8 + 2) {
        thunk_FUN_710081c200((long *)*plVar8,plVar8[2] + 1);
      }
    }
    plVar10 = (long *)*param_2;
    for (plVar8 = (long *)param_2[1]; plVar8 != plVar10; plVar8 = plVar8 + 0x15) {
      FUN_7100050700(plVar8 + 9);
      lVar6 = plVar8[4];
      if (lVar6 != 0) {
        thunk_FUN_710081c200(lVar6,plVar8[6] - lVar6);
      }
      if ((long *)*plVar8 != plVar8 + 2) {
        thunk_FUN_710081c200((long *)*plVar8,plVar8[2] + 1);
      }
    }
  }
  return;
}



// ===== FUN_7100050ca0 @ 7100050ca0 (size=184) =====

void FUN_7100050ca0(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *param_1;
  lVar5 = param_1[1] - lVar3;
  lVar4 = lVar5 >> 2;
  if (lVar4 != 0x1fffffffffffffff) {
    lVar2 = lVar4;
    if (lVar4 == 0) {
      lVar2 = 1;
    }
    uVar1 = lVar2 + lVar4;
    if (0x1fffffffffffffff < uVar1) {
      uVar1 = 0x1fffffffffffffff;
    }
    lVar4 = FUN_71007af5c0(uVar1 * 4);
    *(undefined4 *)(lVar4 + lVar5) = *param_2;
    if (lVar5 != 0) {
      FUN_710080f900(lVar4,lVar3,lVar5);
    }
    if (lVar3 != 0) {
      thunk_FUN_710081c200(lVar3,param_1[2] - lVar3);
    }
    *param_1 = lVar4;
    param_1[1] = lVar4 + lVar5 + 4;
    param_1[2] = lVar4 + uVar1 * 4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003b58("vector::_M_realloc_append");
}



// ===== FUN_7100050d60 @ 7100050d60 (size=184) =====

void FUN_7100050d60(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *param_1;
  lVar5 = param_1[1] - lVar3;
  lVar4 = lVar5 >> 2;
  if (lVar4 != 0x1fffffffffffffff) {
    lVar2 = lVar4;
    if (lVar4 == 0) {
      lVar2 = 1;
    }
    uVar1 = lVar2 + lVar4;
    if (0x1fffffffffffffff < uVar1) {
      uVar1 = 0x1fffffffffffffff;
    }
    lVar4 = FUN_71007af5c0(uVar1 * 4);
    *(undefined4 *)(lVar4 + lVar5) = *param_2;
    if (lVar5 != 0) {
      FUN_710080f900(lVar4,lVar3,lVar5);
    }
    if (lVar3 != 0) {
      thunk_FUN_710081c200(lVar3,param_1[2] - lVar3);
    }
    *param_1 = lVar4;
    param_1[1] = lVar4 + lVar5 + 4;
    param_1[2] = lVar4 + uVar1 * 4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003b58("vector::_M_realloc_append");
}



// ===== FUN_7100050e40 @ 7100050e40 (size=580) =====

void FUN_7100050e40(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  
  plVar3 = (long *)*param_1;
  plVar4 = (long *)param_1[1];
  lVar11 = (long)plVar4 - (long)plVar3;
  lVar5 = (lVar11 >> 5) * -0x5555555555555555;
  if (lVar5 != 0x155555555555555) {
    lVar2 = lVar5;
    if (lVar5 == 0) {
      lVar2 = 1;
    }
    uVar1 = lVar2 + lVar5;
    if (0x155555555555555 < (ulong)(lVar2 + lVar5)) {
      uVar1 = 0x155555555555555;
    }
    plVar6 = (long *)FUN_71007af5c0(uVar1 * 0x60);
    lVar5 = (long)plVar6 + lVar11;
    *(long *)((long)plVar6 + lVar11) = lVar5 + 0x10;
    FUN_710004f860(lVar5,*param_2,param_2[1]);
    *(long *)(lVar5 + 0x20) = lVar5 + 0x30;
    FUN_710004f860(lVar5 + 0x20,*param_3,param_3[1]);
    *(long *)(lVar5 + 0x40) = lVar5 + 0x50;
    FUN_710004f860(lVar5 + 0x40,*param_4,param_4[1]);
    plVar8 = plVar6;
    if (plVar3 != plVar4) {
      plVar10 = plVar3 + 2;
      plVar9 = plVar3 + 6;
      plVar12 = plVar3 + 10;
      plVar7 = plVar3;
      do {
        *plVar8 = (long)(plVar8 + 2);
        if ((long *)*plVar7 == plVar10) {
          FUN_710080f900(plVar8 + 2,plVar10,plVar7[1] + 1);
        }
        else {
          lVar5 = plVar7[2];
          *plVar8 = *plVar7;
          plVar8[2] = lVar5;
        }
        plVar8[1] = plVar7[1];
        *plVar7 = (long)plVar10;
        plVar7[1] = 0;
        *(undefined1 *)(plVar7 + 2) = 0;
        plVar8[4] = (long)(plVar8 + 6);
        if ((long *)plVar7[4] == plVar9) {
          FUN_710080f900(plVar8 + 6,plVar9,plVar7[5] + 1);
        }
        else {
          lVar5 = plVar7[6];
          plVar8[4] = plVar7[4];
          plVar8[6] = lVar5;
        }
        plVar8[5] = plVar7[5];
        plVar7[4] = (long)plVar9;
        plVar7[5] = 0;
        *(undefined1 *)(plVar7 + 6) = 0;
        plVar8[8] = (long)(plVar8 + 10);
        if ((long *)plVar7[8] == plVar12) {
          FUN_710080f900(plVar8 + 10,plVar12,plVar7[9] + 1);
        }
        else {
          lVar5 = plVar7[10];
          plVar8[8] = plVar7[8];
          plVar8[10] = lVar5;
        }
        plVar8[9] = plVar7[9];
        if (plVar9 != (long *)plVar7[4]) {
          thunk_FUN_710081c200((long *)plVar7[4],plVar7[6] + 1);
        }
        if (plVar10 != (long *)*plVar7) {
          thunk_FUN_710081c200((long *)*plVar7,plVar7[2] + 1);
        }
        plVar7 = plVar7 + 0xc;
        plVar8 = plVar8 + 0xc;
        plVar10 = plVar10 + 0xc;
        plVar9 = plVar9 + 0xc;
        plVar12 = plVar12 + 0xc;
      } while (plVar4 != plVar7);
    }
    if (plVar3 != (long *)0x0) {
      thunk_FUN_710081c200(plVar3,param_1[2] - (long)plVar3);
    }
    *param_1 = (long)plVar6;
    param_1[1] = (long)(plVar8 + 0xc);
    param_1[2] = (long)(plVar6 + uVar1 * 0xc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_7100003b58("vector::_M_realloc_append");
}



// ===== FUN_71000510c0 @ 71000510c0 (size=136) =====

void FUN_71000510c0(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 != *(long **)(param_1 + 0x10)) {
    *plVar1 = (long)(plVar1 + 2);
    FUN_710004f860(plVar1,*param_2,param_2[1]);
    plVar1[4] = (long)(plVar1 + 6);
    FUN_710004f860(plVar1 + 4,*param_3,param_3[1]);
    plVar1[8] = (long)(plVar1 + 10);
    FUN_710004f860(plVar1 + 8,*param_4,param_4[1]);
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x60;
    return;
  }
  FUN_7100050e40();
  return;
}



// ===== FUN_7100051170 @ 7100051170 (size=1228) =====

byte FUN_7100051170(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 **ppuVar12;
  long lVar13;
  long local_170;
  undefined8 *local_168;
  long *local_160 [2];
  long local_150 [2];
  long *local_140 [2];
  long local_130 [2];
  long *local_120;
  long local_118;
  long local_110 [2];
  long *local_100 [2];
  long local_f0 [2];
  long *local_e0 [2];
  long local_d0 [2];
  undefined8 *local_c0 [2];
  undefined8 local_b0;
  undefined8 *apuStack_60 [8];
  undefined8 *apuStack_20 [4];
  
  bVar2 = FUN_710010b550(param_2[1],*param_2);
  if ((bVar2 & 1) == 0) {
    return bVar2;
  }
  FUN_710010b630(local_160,param_2[1],*param_2);
  FUN_71005f4da0(&local_170,local_160);
  if (local_170 != 0) {
    puVar11 = *(undefined8 **)(local_170 + 0x18);
    puVar1 = *(undefined8 **)(local_170 + 0x20);
    if (puVar11 != puVar1) {
LAB_71000511f8:
      do {
        if (*(int *)*puVar11 == 1) {
          local_b0._4_4_ = local_b0._4_4_ & 0xffffff00;
          local_b0._0_2_ = 0x614e;
          local_b0._2_1_ = 0x6d;
          local_b0._3_1_ = 0x65;
          local_c0[1] = (undefined8 *)0x4;
          local_c0[0] = &local_b0;
          plVar4 = (long *)FUN_71005f4720((int *)*puVar11,1,local_c0);
          if (local_c0[0] != &local_b0) {
            thunk_FUN_710081c200
                      (local_c0[0],
                       CONCAT44(local_b0._4_4_,
                                CONCAT13(local_b0._3_1_,
                                         CONCAT12(local_b0._2_1_,(undefined2)local_b0))) + 1);
          }
          local_b0._4_4_ = local_b0._4_4_ & 0xffffff00;
          local_b0._0_2_ = 0x7954;
          local_b0._2_1_ = 0x70;
          local_b0._3_1_ = 0x65;
          local_c0[1] = (undefined8 *)0x4;
          local_c0[0] = &local_b0;
          plVar5 = (long *)FUN_71005f4720(*puVar11,1,local_c0);
          if (local_c0[0] != &local_b0) {
            thunk_FUN_710081c200
                      (local_c0[0],
                       CONCAT44(local_b0._4_4_,
                                CONCAT13(local_b0._3_1_,
                                         CONCAT12(local_b0._2_1_,(undefined2)local_b0))) + 1);
          }
          local_b0._0_1_ = 'U';
          local_b0._1_1_ = 'R';
          local_b0._2_1_ = 'L';
          local_b0._3_1_ = 0;
          local_c0[1] = (undefined8 *)0x3;
          local_c0[0] = &local_b0;
          plVar6 = (long *)FUN_71005f4720(*puVar11,1,local_c0);
          if (local_c0[0] != &local_b0) {
            thunk_FUN_710081c200
                      (local_c0[0],
                       CONCAT44(local_b0._4_4_,
                                CONCAT13(local_b0._3_1_,
                                         CONCAT12(local_b0._2_1_,(undefined2)local_b0))) + 1);
          }
          lVar7 = *plVar4;
          if (((lVar7 != 0) && (*plVar5 != 0)) && (*plVar6 != 0)) {
            local_140[0] = local_130;
            FUN_710004f860(local_140,*(undefined8 *)(lVar7 + 0x28),*(undefined8 *)(lVar7 + 0x30));
            local_120 = local_110;
            FUN_710004f860(&local_120,*(undefined8 *)(*plVar5 + 0x28),
                           *(undefined8 *)(*plVar5 + 0x30));
            local_100[0] = local_f0;
            FUN_710004f860(local_100,*(undefined8 *)(*plVar6 + 0x28),*(undefined8 *)(*plVar6 + 0x30)
                          );
            local_e0[0] = local_d0;
            FUN_710004f860(local_e0,local_120,local_118);
            ppuVar12 = local_c0;
            lVar7 = 0;
            do {
              while( true ) {
                lVar13 = lVar7;
                ppuVar9 = ppuVar12 + 2;
                *ppuVar12 = ppuVar9;
                puVar10 = (&PTR_s_ApacheHTTP_7100adb500)[lVar13];
                if (puVar10 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_7100003ab8("basic_string: construction from null is not valid");
                }
                puVar8 = (undefined8 *)FUN_710081ce00(puVar10);
                local_168 = puVar8;
                if (puVar8 < (undefined8 *)0x10) break;
                ppuVar9 = (undefined8 **)FUN_71007e2140(ppuVar12,&local_168,0);
                *ppuVar12 = ppuVar9;
                ppuVar12[2] = local_168;
LAB_7100051414:
                FUN_710080f900(ppuVar9,puVar10,puVar8);
                ppuVar12[1] = local_168;
                *(undefined1 *)((long)*ppuVar12 + (long)local_168) = 0;
                ppuVar12 = ppuVar12 + 4;
                lVar7 = lVar13 + 1;
                if (lVar13 + 1 == 6) goto LAB_7100051444;
              }
              if (puVar8 == (undefined8 *)0x1) {
                *(undefined1 *)(ppuVar12 + 2) = *puVar10;
              }
              else if (puVar8 != (undefined8 *)0x0) goto LAB_7100051414;
              ppuVar12[1] = puVar8;
              ppuVar12 = ppuVar12 + 4;
              *(undefined1 *)((long)ppuVar9 + (long)puVar8) = 0;
              lVar7 = lVar13 + 1;
            } while (lVar13 + 1 != 6);
LAB_7100051444:
            uVar3 = FUN_71000f9660(local_e0,local_c0,lVar13 + 1);
            ppuVar12 = apuStack_20;
            while( true ) {
              if ((undefined8 **)*ppuVar12 != ppuVar12 + 2) {
                thunk_FUN_710081c200(*ppuVar12,(long)ppuVar12[2] + 1);
              }
              if (local_c0 == ppuVar12) break;
              ppuVar12 = ppuVar12 + -4;
            }
            if (local_e0[0] != local_d0) {
              thunk_FUN_710081c200(local_e0[0],local_d0[0] + 1);
            }
            if ((uVar3 & 1) != 0) {
              FUN_71000510c0(param_1 + 0x120,local_140,local_100,&local_120);
            }
            if (local_118 == 5) {
              if (((int)*local_120 == 0x61636f4c) && (*(char *)((long)local_120 + 4) == 'l')) {
                FUN_71000510c0(param_1 + 0x138,local_140,local_100,&local_120);
                goto LAB_71000514b4;
              }
            }
            else {
LAB_71000514b4:
              if (((local_118 == 10) && (*local_120 == 0x61726f745350544d)) &&
                 ((short)local_120[1] == 0x6567)) {
                FUN_71000510c0(param_1 + 0x150,local_140,local_100,&local_120);
              }
            }
            if (local_100[0] != local_f0) {
              thunk_FUN_710081c200(local_100[0],local_f0[0] + 1);
            }
            if (local_120 != local_110) {
              thunk_FUN_710081c200(local_120,local_110[0] + 1);
            }
            if (local_140[0] != local_130) {
              puVar11 = puVar11 + 1;
              thunk_FUN_710081c200(local_140[0],local_130[0] + 1);
              if (puVar1 == puVar11) break;
              goto LAB_71000511f8;
            }
          }
        }
        puVar11 = puVar11 + 1;
      } while (puVar1 != puVar11);
      if (local_170 == 0) {
        if (local_160[0] == local_150) {
          return bVar2;
        }
        goto LAB_7100051548;
      }
    }
    FUN_710004ef30();
  }
  if (local_160[0] == local_150) {
    return bVar2;
  }
LAB_7100051548:
  thunk_FUN_710081c200(local_160[0],local_150[0] + 1);
  return bVar2;
}



// ===== FUN_7100051720 @ 7100051720 (size=1180) =====

bool FUN_7100051720(undefined8 param_1)

{
  uint uVar1;
  byte bVar2;
  undefined6 uVar3;
  undefined2 uVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  long *local_60;
  undefined8 local_58;
  long local_50 [2];
  long *local_40;
  undefined8 local_38;
  long local_30 [2];
  undefined6 local_20;
  undefined2 uStack_1a;
  undefined4 local_18;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined1 local_10;
  undefined5 uStack_f;
  undefined2 uStack_a;
  
  uVar19 = 0x3b6ff0c9405bd18d;
  local_18 = 0x4858b085;
  uStack_14 = 0x4746;
  lVar7 = FUN_710076d158();
  local_20 = (undefined6)uVar19;
  uStack_1a = (undefined2)((ulong)uVar19 >> 0x30);
  if ((*(ulong *)(lVar7 + 0x78) & 1) == 0) {
    *(undefined1 *)(lVar7 + 0x8e) = 1;
    *(undefined8 *)(lVar7 + 0x80) = uVar19;
    *(ulong *)(lVar7 + 0x86) = CONCAT26(uStack_14,CONCAT42(local_18,uStack_1a));
    *(undefined8 *)(lVar7 + 0x78) = 1;
    FUN_71007ad7e0(&DAT_710004ea50,lVar7 + 0x80,0);
  }
  lVar7 = FUN_710076d158();
  uVar8 = (ulong)*(byte *)(lVar7 + 0x8e);
  if ((*(byte *)(lVar7 + 0x8e) & 1) != 0) {
    uVar17 = 0xf9a947ff85ef9dbf;
    lVar7 = 0;
    do {
      auVar20 = FUN_710076d158(uVar8,lVar7);
      uVar13 = auVar20._8_8_;
      uVar8 = auVar20._0_8_ + 0x80;
      *(byte *)(uVar13 + uVar8) = (byte)(uVar17 >> ((uVar13 & 7) << 3)) ^ *(byte *)(uVar13 + uVar8);
      lVar7 = uVar13 + 1;
    } while (lVar7 != 0xe);
    uVar17 = 0xf9a947ff85ef9dbf;
    uVar8 = 0;
    do {
      lVar7 = FUN_710076d158();
      bVar2 = *(byte *)(uVar8 + lVar7 + 0x80);
      uVar1 = (uint)(uVar17 >> ((uVar8 & 7) << 3)) & 7;
      *(byte *)(uVar8 + lVar7 + 0x80) = bVar2 >> (ulong)uVar1 | bVar2 << (ulong)(-uVar1 & 7);
      uVar8 = uVar8 + 1;
    } while (uVar8 != 0xe);
    *(undefined1 *)(lVar7 + 0x8e) = 0;
  }
  lVar7 = FUN_710076d158();
  local_20 = SUB86(&local_10,0);
  uVar3 = local_20;
  uStack_1a = (undefined2)((ulong)&local_10 >> 0x30);
  uVar4 = uStack_1a;
  lVar9 = FUN_710081ce00(lVar7 + 0x80);
  if (lVar9 == 1) {
    local_10 = *(undefined1 *)(lVar7 + 0x80);
  }
  else if (lVar9 != 0) {
    FUN_710080f900(&local_10,lVar7 + 0x80,lVar9);
  }
  local_18 = (undefined4)lVar9;
  uStack_14 = (undefined2)((ulong)lVar9 >> 0x20);
  uStack_12 = (undefined2)((ulong)lVar9 >> 0x30);
  (&local_10)[lVar9] = 0;
  puVar10 = (undefined8 *)FUN_71007e28e0(&local_20,0,0,DAT_7100af84c0,DAT_7100af84c8);
  plVar11 = puVar10 + 2;
  local_60 = (long *)*puVar10;
  if (local_60 == plVar11) {
    local_60 = local_50;
    FUN_710080f900(local_50,plVar11,puVar10[1] + 1);
  }
  else {
    local_50[0] = puVar10[2];
  }
  local_58 = puVar10[1];
  *(undefined1 *)(puVar10 + 2) = 0;
  *puVar10 = plVar11;
  puVar10[1] = 0;
  if ((undefined1 *)CONCAT26(uStack_1a,local_20) != &local_10) {
    thunk_FUN_710081c200
              ((undefined1 *)CONCAT26(uStack_1a,local_20),
               CONCAT26(uStack_a,CONCAT51(uStack_f,local_10)) + 1);
  }
  uVar19 = 0x931b131b3b49c9c5;
  uVar18 = 0xa22a07ea3f2979c4;
  uVar14 = 0xe58b9ec98815a22a;
  lVar7 = FUN_710076d158();
  local_20 = (undefined6)uVar19;
  uStack_1a = (undefined2)((ulong)uVar19 >> 0x30);
  local_18 = (undefined4)uVar18;
  uStack_14 = (undefined2)((ulong)uVar18 >> 0x20);
  uStack_12 = (undefined2)uVar14;
  local_10 = (undefined1)((ulong)uVar14 >> 0x10);
  uStack_f = (undefined5)((ulong)uVar14 >> 0x18);
  if ((*(ulong *)(lVar7 + 0x90) & 1) == 0) {
    *(undefined1 *)(lVar7 + 0xb6) = 1;
    *(undefined8 *)(lVar7 + 0xa0) = uVar19;
    *(ulong *)(lVar7 + 0xa8) = CONCAT26(uStack_12,(int6)uVar18);
    *(undefined8 *)(lVar7 + 0xae) = uVar14;
    *(undefined8 *)(lVar7 + 0x90) = 1;
    FUN_71007ad7e0(&DAT_710004ea60,lVar7 + 0xa0,0);
  }
  lVar7 = FUN_710076d158();
  uVar8 = (ulong)*(byte *)(lVar7 + 0xb6);
  if ((*(byte *)(lVar7 + 0xb6) & 1) != 0) {
    uVar17 = 0x852de5ddd9dfef83;
    lVar7 = 0;
    do {
      auVar20 = FUN_710076d158(uVar8,lVar7);
      uVar13 = auVar20._8_8_;
      lVar9 = auVar20._0_8_;
      uVar8 = lVar9 + 0x20;
      *(byte *)(uVar13 + lVar9 + 0xa0) =
           (byte)(uVar17 >> ((uVar13 & 7) << 3)) ^ *(byte *)(uVar13 + lVar9 + 0xa0);
      lVar7 = uVar13 + 1;
    } while (lVar7 != 0x16);
    *(ulong *)(lVar9 + 0xa8) =
         CONCAT17(*(byte *)(lVar9 + 0xaf) * '\x10' + (*(byte *)(lVar9 + 0xaf) >> 4),
                  CONCAT16(*(byte *)(lVar9 + 0xae) * '\x10' + (*(byte *)(lVar9 + 0xae) >> 4),
                           CONCAT15(*(byte *)(lVar9 + 0xad) * '\x10' +
                                    (*(byte *)(lVar9 + 0xad) >> 4),
                                    CONCAT14(*(byte *)(lVar9 + 0xac) * '\x10' +
                                             (*(byte *)(lVar9 + 0xac) >> 4),
                                             CONCAT13(*(byte *)(lVar9 + 0xab) * '\x10' +
                                                      (*(byte *)(lVar9 + 0xab) >> 4),
                                                      CONCAT12(*(byte *)(lVar9 + 0xaa) * '\x10' +
                                                               (*(byte *)(lVar9 + 0xaa) >> 4),
                                                               CONCAT11(*(byte *)(lVar9 + 0xa9) *
                                                                        '\x10' + (*(byte *)(lVar9 + 
                                                  0xa9) >> 4),
                                                  *(byte *)(lVar9 + 0xa8) * '\x10' +
                                                  (*(byte *)(lVar9 + 0xa8) >> 4))))))));
    *(ulong *)(lVar9 + 0xa0) =
         CONCAT17(*(byte *)(lVar9 + 0xa7) * '\x10' + (*(byte *)(lVar9 + 0xa7) >> 4),
                  CONCAT16(*(byte *)(lVar9 + 0xa6) * '\x10' + (*(byte *)(lVar9 + 0xa6) >> 4),
                           CONCAT15(*(byte *)(lVar9 + 0xa5) * '\x10' +
                                    (*(byte *)(lVar9 + 0xa5) >> 4),
                                    CONCAT14(*(byte *)(lVar9 + 0xa4) * '\x10' +
                                             (*(byte *)(lVar9 + 0xa4) >> 4),
                                             CONCAT13(*(byte *)(lVar9 + 0xa3) * '\x10' +
                                                      (*(byte *)(lVar9 + 0xa3) >> 4),
                                                      CONCAT12(*(byte *)(lVar9 + 0xa2) * '\x10' +
                                                               (*(byte *)(lVar9 + 0xa2) >> 4),
                                                               CONCAT11(*(byte *)(lVar9 + 0xa1) *
                                                                        '\x10' + (*(byte *)(lVar9 + 
                                                  0xa1) >> 4),
                                                  *(byte *)(lVar9 + 0xa0) * '\x10' +
                                                  (*(byte *)(lVar9 + 0xa0) >> 4))))))));
    pbVar15 = (byte *)(lVar9 + 0xb0);
    do {
      pbVar16 = pbVar15 + 1;
      *pbVar15 = *pbVar15 * '\x10' + (*pbVar15 >> 4);
      pbVar15 = pbVar16;
    } while (pbVar16 != (byte *)(lVar9 + 0xb6));
    lVar7 = FUN_710076d158();
    *(undefined1 *)(lVar7 + 0xb6) = 0;
  }
  lVar7 = FUN_710076d158();
  local_20 = uVar3;
  uStack_1a = uVar4;
  plVar11 = (long *)FUN_710081ce00(lVar7 + 0xa0);
  local_40 = plVar11;
  if (plVar11 < (long *)0x10) {
    puVar12 = &local_10;
    if (plVar11 == (long *)0x1) {
      local_10 = *(undefined1 *)(lVar7 + 0xa0);
      goto LAB_7100051a34;
    }
    if (plVar11 == (long *)0x0) goto LAB_7100051a34;
  }
  else {
    puVar12 = (undefined1 *)FUN_71007e2140(&local_20,&local_40,0);
    local_20 = SUB86(puVar12,0);
    uStack_1a = (undefined2)((ulong)puVar12 >> 0x30);
    local_10 = SUB81(local_40,0);
    uStack_f = (undefined5)((ulong)local_40 >> 8);
    uStack_a = (undefined2)((ulong)local_40 >> 0x30);
  }
  lVar7 = FUN_710076d158();
  FUN_710080f900(puVar12,lVar7 + 0xa0,plVar11);
  puVar12 = (undefined1 *)CONCAT26(uStack_1a,local_20);
LAB_7100051a34:
  local_18 = SUB84(local_40,0);
  uStack_14 = (undefined2)((ulong)local_40 >> 0x20);
  uStack_12 = (undefined2)((ulong)local_40 >> 0x30);
  puVar12[(long)local_40] = 0;
  puVar10 = (undefined8 *)FUN_71007e28e0(&local_20,0,0,DAT_7100af84c0,DAT_7100af84c8);
  plVar11 = puVar10 + 2;
  local_40 = (long *)*puVar10;
  if (local_40 == plVar11) {
    local_40 = local_30;
    FUN_710080f900(local_30,plVar11,puVar10[1] + 1);
  }
  else {
    local_30[0] = puVar10[2];
  }
  local_38 = puVar10[1];
  *puVar10 = plVar11;
  puVar10[1] = 0;
  *(undefined1 *)(puVar10 + 2) = 0;
  if ((undefined1 *)CONCAT26(uStack_1a,local_20) != &local_10) {
    thunk_FUN_710081c200
              ((undefined1 *)CONCAT26(uStack_1a,local_20),
               CONCAT26(uStack_a,CONCAT51(uStack_f,local_10)) + 1);
  }
  cVar5 = FUN_7100051170(param_1,&local_60);
  cVar6 = FUN_7100051170(param_1,&local_40);
  if (local_40 != local_30) {
    thunk_FUN_710081c200(local_40,local_30[0] + 1);
  }
  if (local_60 != local_50) {
    thunk_FUN_710081c200(local_60,local_50[0] + 1);
  }
  return cVar5 != '\0' || cVar6 != '\0';
}



// ===== FUN_7100051c10 @ 7100051c10 (size=748) =====

void FUN_7100051c10(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  ulong local_40;
  long *local_38;
  ulong uStack_30;
  long *local_28;
  ulong *local_20;
  ulong local_18;
  ulong local_10 [2];
  
  plVar3 = (long *)*param_1;
  plVar4 = (long *)param_1[1];
  lVar13 = (long)plVar4 - (long)plVar3;
  lVar5 = (lVar13 >> 5) * -0x5555555555555555;
  if (lVar5 == 0x155555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("vector::_M_realloc_append");
  }
  lVar2 = lVar5;
  if (lVar5 == 0) {
    lVar2 = 1;
  }
  uVar1 = lVar2 + lVar5;
  if (0x155555555555555 < (ulong)(lVar2 + lVar5)) {
    uVar1 = 0x155555555555555;
  }
  plVar6 = (long *)FUN_71007af5c0(uVar1 * 0x60);
  local_38 = plVar6;
  uStack_30 = uVar1;
  local_28 = param_1;
  local_20 = local_10;
  uVar7 = FUN_710081ce00(param_4);
  local_40 = uVar7;
  if (uVar7 < 0x10) {
    puVar8 = local_10;
    if (uVar7 == 1) {
      local_10[0] = CONCAT71(local_10[0]._1_7_,*param_4);
      goto LAB_7100051ccc;
    }
    if (uVar7 == 0) goto LAB_7100051ccc;
  }
  else {
    local_20 = (ulong *)FUN_71007e2140(&local_20,&local_40,0);
    local_10[0] = local_40;
    puVar8 = local_20;
  }
  FUN_710080f900(puVar8,param_4,uVar7);
  puVar8 = local_20;
LAB_7100051ccc:
  lVar5 = (long)plVar6 + lVar13;
  *(undefined1 *)((long)puVar8 + local_40) = 0;
  *(long *)((long)plVar6 + lVar13) = lVar5 + 0x10;
  local_18 = local_40;
  FUN_710004f860(lVar5,*param_2,param_2[1]);
  *(long *)(lVar5 + 0x20) = lVar5 + 0x30;
  FUN_710004f860(lVar5 + 0x20,*param_3,param_3[1]);
  *(long *)(lVar5 + 0x40) = lVar5 + 0x50;
  FUN_710004f860(lVar5 + 0x40,local_20,local_18);
  if (local_20 != local_10) {
    thunk_FUN_710081c200(local_20,local_10[0] + 1);
  }
  plVar10 = plVar6;
  if (plVar3 != plVar4) {
    plVar12 = plVar3 + 2;
    plVar11 = plVar3 + 6;
    plVar14 = plVar3 + 10;
    plVar9 = plVar3;
    do {
      *plVar10 = (long)(plVar10 + 2);
      if ((long *)*plVar9 == plVar12) {
        FUN_710080f900(plVar10 + 2,plVar12,plVar9[1] + 1);
      }
      else {
        lVar5 = plVar9[2];
        *plVar10 = *plVar9;
        plVar10[2] = lVar5;
      }
      plVar10[1] = plVar9[1];
      *plVar9 = (long)plVar12;
      plVar9[1] = 0;
      *(undefined1 *)(plVar9 + 2) = 0;
      plVar10[4] = (long)(plVar10 + 6);
      if ((long *)plVar9[4] == plVar11) {
        FUN_710080f900(plVar10 + 6,plVar11,plVar9[5] + 1);
      }
      else {
        lVar5 = plVar9[6];
        plVar10[4] = plVar9[4];
        plVar10[6] = lVar5;
      }
      plVar10[5] = plVar9[5];
      plVar9[4] = (long)plVar11;
      plVar9[5] = 0;
      *(undefined1 *)(plVar9 + 6) = 0;
      plVar10[8] = (long)(plVar10 + 10);
      if ((long *)plVar9[8] == plVar14) {
        FUN_710080f900(plVar10 + 10,plVar14,plVar9[9] + 1);
      }
      else {
        lVar5 = plVar9[10];
        plVar10[8] = plVar9[8];
        plVar10[10] = lVar5;
      }
      plVar10[9] = plVar9[9];
      if (plVar11 != (long *)plVar9[4]) {
        thunk_FUN_710081c200((long *)plVar9[4],plVar9[6] + 1);
      }
      if (plVar12 != (long *)*plVar9) {
        thunk_FUN_710081c200((long *)*plVar9,plVar9[2] + 1);
      }
      plVar9 = plVar9 + 0xc;
      plVar10 = plVar10 + 0xc;
      plVar12 = plVar12 + 0xc;
      plVar11 = plVar11 + 0xc;
      plVar14 = plVar14 + 0xc;
    } while (plVar4 != plVar9);
  }
  if (plVar3 != (long *)0x0) {
    thunk_FUN_710081c200(plVar3,param_1[2] - (long)plVar3);
  }
  *param_1 = (long)plVar6;
  param_1[1] = (long)(plVar10 + 0xc);
  param_1[2] = (long)(plVar6 + uVar1 * 0xc);
  return;
}



// ===== FUN_7100051f50 @ 7100051f50 (size=748) =====

void FUN_7100051f50(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  ulong local_40;
  long *local_38;
  ulong uStack_30;
  long *local_28;
  ulong *local_20;
  ulong local_18;
  ulong local_10 [2];
  
  plVar3 = (long *)*param_1;
  plVar4 = (long *)param_1[1];
  lVar13 = (long)plVar4 - (long)plVar3;
  lVar5 = (lVar13 >> 5) * -0x5555555555555555;
  if (lVar5 == 0x155555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("vector::_M_realloc_append");
  }
  lVar2 = lVar5;
  if (lVar5 == 0) {
    lVar2 = 1;
  }
  uVar1 = lVar2 + lVar5;
  if (0x155555555555555 < (ulong)(lVar2 + lVar5)) {
    uVar1 = 0x155555555555555;
  }
  plVar6 = (long *)FUN_71007af5c0(uVar1 * 0x60);
  local_38 = plVar6;
  uStack_30 = uVar1;
  local_28 = param_1;
  local_20 = local_10;
  uVar7 = FUN_710081ce00(param_4);
  local_40 = uVar7;
  if (uVar7 < 0x10) {
    puVar8 = local_10;
    if (uVar7 == 1) {
      local_10[0] = CONCAT71(local_10[0]._1_7_,*param_4);
      goto LAB_710005200c;
    }
    if (uVar7 == 0) goto LAB_710005200c;
  }
  else {
    local_20 = (ulong *)FUN_71007e2140(&local_20,&local_40,0);
    local_10[0] = local_40;
    puVar8 = local_20;
  }
  FUN_710080f900(puVar8,param_4,uVar7);
  puVar8 = local_20;
LAB_710005200c:
  lVar5 = (long)plVar6 + lVar13;
  *(undefined1 *)((long)puVar8 + local_40) = 0;
  *(long *)((long)plVar6 + lVar13) = lVar5 + 0x10;
  local_18 = local_40;
  FUN_710004f860(lVar5,*param_2,param_2[1]);
  *(long *)(lVar5 + 0x20) = lVar5 + 0x30;
  FUN_710004f860(lVar5 + 0x20,*param_3,param_3[1]);
  *(long *)(lVar5 + 0x40) = lVar5 + 0x50;
  FUN_710004f860(lVar5 + 0x40,local_20,local_18);
  if (local_20 != local_10) {
    thunk_FUN_710081c200(local_20,local_10[0] + 1);
  }
  plVar10 = plVar6;
  if (plVar3 != plVar4) {
    plVar12 = plVar3 + 2;
    plVar11 = plVar3 + 6;
    plVar14 = plVar3 + 10;
    plVar9 = plVar3;
    do {
      *plVar10 = (long)(plVar10 + 2);
      if ((long *)*plVar9 == plVar12) {
        FUN_710080f900(plVar10 + 2,plVar12,plVar9[1] + 1);
      }
      else {
        lVar5 = plVar9[2];
        *plVar10 = *plVar9;
        plVar10[2] = lVar5;
      }
      plVar10[1] = plVar9[1];
      *plVar9 = (long)plVar12;
      plVar9[1] = 0;
      *(undefined1 *)(plVar9 + 2) = 0;
      plVar10[4] = (long)(plVar10 + 6);
      if ((long *)plVar9[4] == plVar11) {
        FUN_710080f900(plVar10 + 6,plVar11,plVar9[5] + 1);
      }
      else {
        lVar5 = plVar9[6];
        plVar10[4] = plVar9[4];
        plVar10[6] = lVar5;
      }
      plVar10[5] = plVar9[5];
      plVar9[4] = (long)plVar11;
      plVar9[5] = 0;
      *(undefined1 *)(plVar9 + 6) = 0;
      plVar10[8] = (long)(plVar10 + 10);
      if ((long *)plVar9[8] == plVar14) {
        FUN_710080f900(plVar10 + 10,plVar14,plVar9[9] + 1);
      }
      else {
        lVar5 = plVar9[10];
        plVar10[8] = plVar9[8];
        plVar10[10] = lVar5;
      }
      plVar10[9] = plVar9[9];
      if (plVar11 != (long *)plVar9[4]) {
        thunk_FUN_710081c200((long *)plVar9[4],plVar9[6] + 1);
      }
      if (plVar12 != (long *)*plVar9) {
        thunk_FUN_710081c200((long *)*plVar9,plVar9[2] + 1);
      }
      plVar9 = plVar9 + 0xc;
      plVar10 = plVar10 + 0xc;
      plVar12 = plVar12 + 0xc;
      plVar11 = plVar11 + 0xc;
      plVar14 = plVar14 + 0xc;
    } while (plVar4 != plVar9);
  }
  if (plVar3 != (long *)0x0) {
    thunk_FUN_710081c200(plVar3,param_1[2] - (long)plVar3);
  }
  *param_1 = (long)plVar6;
  param_1[1] = (long)(plVar10 + 0xc);
  param_1[2] = (long)(plVar6 + uVar1 * 0xc);
  return;
}



// ===== FUN_7100052290 @ 7100052290 (size=632) =====

long * FUN_7100052290(long *param_1,long *param_2,undefined8 *param_3,ulong param_4)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  puVar1 = (uint *)param_2[3];
  uVar2 = param_2[4];
  uVar15 = param_4 & uVar2;
  lVar10 = uVar15 * 8;
  uVar6 = puVar1[uVar15 * 2];
  if (uVar6 != 0xffffffff) {
    uVar16 = 0;
    puVar5 = puVar1 + uVar15 * 2;
LAB_7100052318:
    do {
      uVar3 = puVar5[1];
      if (uVar3 == (uint)param_4) {
        lVar11 = param_2[7];
        lVar12 = param_2[8];
        plVar13 = (long *)param_2[10];
        lVar9 = (lVar11 - lVar12 >> 3) * -0x30c30c30c30c30c3;
        uVar14 = lVar9 + (ulong)uVar6;
        if ((long)uVar14 < 0) {
          uVar7 = ~(~uVar14 / 3);
LAB_71000524b4:
          puVar8 = (undefined8 *)(plVar13[uVar7] + (uVar14 + uVar7 * -3) * 0xa8);
        }
        else {
          if (2 < (long)uVar14) {
            uVar7 = (long)uVar14 / 3;
            goto LAB_71000524b4;
          }
          puVar8 = (undefined8 *)(lVar11 + (ulong)uVar6 * 0xa8);
        }
        if ((param_3[1] == puVar8[1]) &&
           ((param_3[1] == 0 || (iVar4 = FUN_710081ec40(*param_3,*puVar8), iVar4 == 0)))) {
          if (param_2[1] != *param_2 + lVar10) {
            uVar15 = (ulong)*(uint *)(*param_2 + lVar10);
            uVar2 = uVar15 + lVar9;
            if ((long)uVar2 < 0) {
              uVar15 = ~(~uVar2 / 3);
            }
            else {
              if ((long)uVar2 < 3) {
                lVar10 = param_2[9];
                lVar11 = lVar11 + uVar15 * 0xa8;
                goto LAB_7100052464;
              }
              uVar15 = (long)uVar2 / 3;
            }
            plVar13 = plVar13 + uVar15;
            lVar12 = *plVar13;
            lVar10 = lVar12 + 0x1f8;
            lVar11 = lVar12 + (uVar2 + uVar15 * -3) * 0xa8;
LAB_7100052464:
            *param_1 = lVar11;
            param_1[1] = lVar12;
            param_1[2] = lVar10;
            param_1[3] = (long)plVar13;
            return param_1;
          }
          break;
        }
      }
      uVar14 = (ulong)(uVar3 & (uint)uVar2);
      if (uVar15 < uVar14) {
        uVar7 = param_2[1] - *param_2 >> 3;
        if ((uVar7 - uVar14) + uVar15 < uVar16) break;
      }
      else {
        if (uVar15 - uVar14 < uVar16) break;
        uVar7 = param_2[1] - *param_2 >> 3;
      }
      uVar15 = uVar15 + 1;
      if (uVar15 < uVar7) {
        lVar10 = uVar15 * 8;
        uVar16 = uVar16 + 1;
        puVar5 = puVar1 + uVar15 * 2;
        uVar6 = *puVar5;
        if (uVar6 == 0xffffffff) break;
        goto LAB_7100052318;
      }
      lVar10 = 0;
      uVar6 = *puVar1;
      uVar15 = 0;
      uVar16 = uVar16 + 1;
      puVar5 = puVar1;
    } while (uVar6 != 0xffffffff);
  }
  lVar12 = param_2[0xc];
  lVar11 = param_2[0xe];
  lVar10 = param_2[0xd];
  *param_1 = param_2[0xb];
  param_1[1] = lVar12;
  param_1[3] = lVar11;
  param_1[2] = lVar10;
  return param_1;
}



// ===== FUN_7100052510 @ 7100052510 (size=320) =====

void FUN_7100052510(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *unaff_x25;
  
  puVar1 = (undefined8 *)((param_2 >> 3) + 3);
  puVar2 = puVar1;
  if (puVar1 < (undefined8 *)0x8) {
    puVar2 = (undefined8 *)0x8;
  }
  param_1[1] = (long)puVar2;
  if (puVar1 < (undefined8 *)0x1000000000000000) {
    lVar5 = (param_2 >> 3) + 1;
    lVar3 = FUN_71007af5c0((long)puVar2 << 3);
    uVar7 = (ulong)((long)puVar2 - lVar5) >> 1;
    *param_1 = lVar3;
    puVar1 = (undefined8 *)(lVar3 + uVar7 * 8);
    puVar2 = puVar1 + lVar5;
    for (puVar6 = puVar1; puVar6 < puVar2; puVar6 = puVar6 + 1) {
      uVar4 = FUN_71007af5c0(0x200);
      *puVar6 = uVar4;
    }
    lVar5 = *(long *)(lVar3 + uVar7 * 8);
    param_1[5] = (long)puVar1;
    param_1[9] = (long)(puVar2 + -1);
    param_1[2] = lVar5;
    param_1[3] = lVar5;
    param_1[4] = lVar5 + 0x200;
    lVar5 = puVar2[-1];
    param_1[7] = lVar5;
    param_1[8] = lVar5 + 0x200;
    param_1[6] = lVar5 + (param_2 & 7) * 0x40;
    return;
  }
  if ((undefined8 *)0x1fffffffffffffff < puVar1) {
    FUN_7100003a50();
  }
  FUN_7100003a1c();
  FUN_71007ae000();
  for (; unaff_x25 < puVar2; unaff_x25 = unaff_x25 + 1) {
    thunk_FUN_710081c200(*unaff_x25,0x200);
  }
  uVar4 = FUN_71007af060();
  FUN_71007ae0a0();
  FUN_71007ae000(uVar4);
  thunk_FUN_710081c200(*param_1,param_1[1] << 3);
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = FUN_71007af060();
  FUN_71007ae0a0();
                    /* WARNING: Subroutine does not return */
  FUN_7100804760(uVar4);
}



// ===== FUN_7100052650 @ 7100052650 (size=284) =====

void FUN_7100052650(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  
  lVar4 = *(long *)(param_2 + 0x48);
  lVar9 = *(long *)(param_2 + 0x20);
  lVar2 = *(long *)(param_2 + 0x28);
  lVar1 = *(long *)(param_2 + 0x30);
  lVar3 = *(long *)(param_2 + 0x38);
  lVar5 = *(long *)(param_2 + 0x10);
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
  FUN_7100052510(param_1,(lVar1 - lVar3 >> 6) + ((lVar4 - lVar2 >> 3) - (ulong)(lVar4 != 0)) * 8 +
                         (lVar9 - lVar5 >> 6));
  plVar11 = (long *)param_1[2];
  plVar6 = (long *)param_1[4];
  puVar10 = (undefined8 *)param_1[5];
  puVar7 = *(undefined8 **)(param_2 + 0x20);
  lVar9 = *(long *)(param_2 + 0x28);
  puVar12 = *(undefined8 **)(param_2 + 0x10);
  puVar8 = *(undefined8 **)(param_2 + 0x30);
  do {
    if (puVar8 == puVar12) {
      return;
    }
    while( true ) {
      *plVar11 = (long)(plVar11 + 2);
      FUN_710004f860(plVar11,*puVar12,puVar12[1]);
      plVar11[4] = (long)(plVar11 + 6);
      FUN_710004f860(plVar11 + 4,puVar12[4],puVar12[5]);
      puVar12 = puVar12 + 8;
      if (puVar7 == puVar12) {
        puVar12 = *(undefined8 **)(lVar9 + 8);
        lVar9 = lVar9 + 8;
        puVar7 = puVar12 + 0x40;
      }
      plVar11 = plVar11 + 8;
      if (plVar6 != plVar11) break;
      puVar10 = puVar10 + 1;
      plVar11 = (long *)*puVar10;
      plVar6 = plVar11 + 0x40;
      if (puVar8 == puVar12) {
        return;
      }
    }
  } while( true );
}



// ===== FUN_71000527d0 @ 71000527d0 (size=3448) =====

void FUN_71000527d0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *local_178;
  undefined8 *local_168;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined8 *puStack_128;
  long local_120;
  long *local_110 [2];
  long local_100 [2];
  long *local_f0;
  long local_e8;
  long local_e0;
  char local_d8 [8];
  char *local_d0;
  undefined8 *local_c8;
  undefined5 local_c0;
  undefined2 uStack_bb;
  undefined1 uStack_b9;
  undefined5 uStack_b8;
  undefined1 local_b3;
  undefined1 uStack_b2;
  undefined1 local_b1;
  long *local_b0;
  undefined8 local_a8;
  long local_a0 [2];
  undefined8 *local_90;
  long local_88;
  long local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined8 *local_58;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  uVar10 = FUN_7100051720();
  if ((uVar10 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x118) = 1;
    return;
  }
  lVar1 = param_1 + 8;
  local_c0 = 0x6f7774654e;
  uStack_bb = 0x6b72;
  uStack_b9 = 0x20;
  uStack_b8 = 0x6372756f73;
  local_b3 = 0x65;
  uStack_b2 = 0x73;
  local_c8 = (undefined8 *)0xf;
  local_b1 = 0;
  local_d0 = (char *)&local_c0;
  uVar11 = FUN_71007af4e0(&local_c0,0xf,0xc70f6907);
  FUN_7100052290(&local_90,lVar1,&local_d0,uVar11);
  if (*(undefined8 **)(param_1 + 0x60) != local_90) {
    if (local_d0 != (char *)&local_c0) {
      thunk_FUN_710081c200(local_d0,CONCAT17(uStack_b9,CONCAT25(uStack_bb,local_c0)) + 1);
    }
    local_c0 = 0x6f7774654e;
    uStack_bb = 0x6b72;
    uStack_b9 = 0x20;
    uStack_b8 = 0x6372756f73;
    local_b3 = 0x65;
    uStack_b2 = 0x73;
    local_c8 = (undefined8 *)0xf;
    local_b1 = 0;
    local_d0 = (char *)&local_c0;
    uVar11 = FUN_71007af4e0(&local_c0,0xf,0xc70f6907);
    FUN_7100052290(&local_90,lVar1,&local_d0,uVar11);
    puVar13 = local_90;
    if (*(undefined8 **)(param_1 + 0x60) == local_90) {
      uVar11 = FUN_71007adf60(0x10);
      FUN_71007b64c0(uVar11,"Couldn\'t find the key.");
                    /* WARNING: Subroutine does not return */
      FUN_71007af000(uVar11,&PTR_PTR_FUN_7100ae7580,FUN_71007b0980);
    }
    lVar2 = local_90[4];
    lVar3 = local_90[5] - lVar2;
    if (lVar3 == 0) {
      local_90 = (undefined8 *)0x0;
      local_88 = 0;
      local_80 = 0;
      if (((DAT_7100af8470 & 1) == 0) && (iVar9 = FUN_71007af260(&DAT_7100af8470), iVar9 != 0)) {
        puVar12 = &DAT_7100af8478;
        DAT_7100af8478 = 0xffffffff;
        FUN_71007af440(&DAT_7100af8470);
      }
      else {
        puVar12 = &DAT_7100af8478;
      }
    }
    else {
      puVar12 = (undefined8 *)FUN_71007af5c0(lVar3);
      local_90 = puVar12;
      local_80 = (long)puVar12 + lVar3;
      FUN_710080f900(puVar12,lVar2,lVar3);
      local_88 = (long)puVar12 + lVar3;
    }
    uStack_70 = puVar13[8];
    local_78 = puVar12;
    FUN_7100052650(auStack_68,puVar13 + 9);
    local_18 = puVar13[0x13];
    local_10 = *(undefined4 *)(puVar13 + 0x14);
    local_c = *(undefined1 *)((long)puVar13 + 0xa4);
    if (local_d0 != (char *)&local_c0) {
      thunk_FUN_710081c200(local_d0,CONCAT17(uStack_b9,CONCAT25(uStack_bb,local_c0)) + 1);
    }
    puVar12 = local_38;
    local_168 = local_48;
    puVar13 = local_58;
    local_138 = local_40;
    do {
      local_138 = local_138 + 1;
      do {
        if (puVar12 == puVar13) {
          FUN_7100050700(auStack_68);
          if (local_90 != (undefined8 *)0x0) {
            thunk_FUN_710081c200(local_90,local_80 - (long)local_90);
          }
          goto LAB_7100052d68;
        }
        local_d0 = (char *)&local_c0;
        FUN_710004f860(&local_d0,*puVar13,puVar13[1]);
        local_b0 = local_a0;
        FUN_710004f860(&local_b0,puVar13[4],puVar13[5]);
        local_130 = (undefined8 *)0x0;
        puStack_128 = (undefined8 *)0x0;
        local_120 = 0;
        local_110[0] = local_100;
        FUN_710004f860(local_110,local_b0,local_a8);
        local_e8 = 1;
        local_e0 = CONCAT62(local_e0._2_6_,0x7c);
        local_f0 = &local_e0;
        FUN_71000fb440(local_110,&local_f0,&local_130);
        if (local_f0 != &local_e0) {
          thunk_FUN_710081c200(local_f0,local_e0 + 1);
        }
        if (local_110[0] != local_100) {
          thunk_FUN_710081c200(local_110[0],local_100[0] + 1);
        }
        puVar6 = puStack_128;
        puVar4 = local_130;
        puVar5 = puStack_128;
        if ((long)puStack_128 - (long)local_130 == 0x40) {
          local_110[0] = local_100;
          FUN_710004f860(local_110,*local_130,local_130[1]);
          local_f0 = &local_e0;
          FUN_710004f860(&local_f0,local_130[4],local_130[5]);
          plVar8 = local_f0;
          plVar14 = (long *)((long)local_f0 + local_e8);
          if (local_f0 == plVar14) {
LAB_7100052b34:
            local_e8 = 0;
            *(undefined1 *)plVar8 = 0;
          }
          else {
            uVar10 = (long)plVar14 - (long)local_f0 & 3;
            plVar15 = local_f0;
            if (uVar10 == 0) {
LAB_7100052aec:
              do {
                iVar9 = FUN_710081b9a0((char)*plVar15);
                plVar16 = plVar15;
                if (iVar9 == 0) goto LAB_7100052ce4;
                plVar16 = (long *)((long)plVar15 + 1);
                iVar9 = FUN_710081b9a0(*(undefined1 *)plVar16);
                if (iVar9 == 0) goto LAB_7100052ce4;
                plVar16 = (long *)((long)plVar15 + 2);
                iVar9 = FUN_710081b9a0(*(undefined1 *)plVar16);
                if (iVar9 == 0) goto LAB_7100052ce4;
                plVar16 = (long *)((long)plVar15 + 3);
                iVar9 = FUN_710081b9a0(*(undefined1 *)((long)plVar15 + 3));
                if (iVar9 == 0) goto LAB_7100052ce4;
                plVar15 = (long *)((long)plVar15 + 4);
              } while (plVar14 != plVar15);
              goto LAB_7100052b34;
            }
            plVar16 = local_f0;
            if (uVar10 == 1) {
LAB_7100052ad4:
              iVar9 = FUN_710081b9a0((char)*plVar16);
              if (iVar9 != 0) {
                plVar15 = (long *)((long)plVar16 + 1);
                if (plVar14 == plVar15) goto LAB_7100052b34;
                goto LAB_7100052aec;
              }
            }
            else if (uVar10 == 2) {
LAB_7100052ac4:
              iVar9 = FUN_710081b9a0((char)*plVar16);
              if (iVar9 != 0) {
                plVar16 = (long *)((long)plVar16 + 1);
                goto LAB_7100052ad4;
              }
            }
            else {
              iVar9 = FUN_710081b9a0((char)*local_f0);
              plVar16 = plVar8;
              if (iVar9 != 0) {
                plVar16 = (long *)((long)plVar8 + 1);
                goto LAB_7100052ac4;
              }
            }
LAB_7100052ce4:
            if (plVar16 == plVar14) goto LAB_7100052b34;
            FUN_71007e24a0(&local_f0,0,(long)plVar16 - (long)plVar8);
          }
          plVar8 = local_f0;
          plVar14 = (long *)((long)local_f0 + local_e8);
          plVar15 = plVar14;
          if (local_f0 != plVar14) {
            uVar10 = (long)plVar14 - (long)local_f0 & 3;
            if (uVar10 == 0) {
              do {
                iVar9 = FUN_710081b9a0(*(undefined1 *)((long)plVar14 + -1));
                plVar15 = plVar14;
                if (iVar9 == 0) break;
                plVar15 = (long *)((long)plVar14 + -1);
                iVar9 = FUN_710081b9a0(*(undefined1 *)((long)plVar14 + -2));
                if (iVar9 == 0) break;
                plVar15 = (long *)((long)plVar14 + -2);
                iVar9 = FUN_710081b9a0(*(undefined1 *)((long)plVar14 + -3));
                if (iVar9 == 0) break;
                plVar15 = (long *)((long)plVar14 + -3);
                iVar9 = FUN_710081b9a0(*(undefined1 *)((long)plVar14 + -4));
                if (iVar9 == 0) break;
                plVar14 = (long *)((long)plVar14 + -4);
joined_r0x007100052b9c:
                plVar15 = plVar14;
              } while (plVar8 != plVar14);
            }
            else {
              if (uVar10 != 1) {
                if (uVar10 != 2) {
                  iVar9 = FUN_710081b9a0(*(undefined1 *)((long)plVar14 + -1));
                  if (iVar9 == 0) goto LAB_7100052bf0;
                  plVar14 = (long *)((long)plVar14 + -1);
                }
                iVar9 = FUN_710081b9a0(*(undefined1 *)((long)plVar14 + -1));
                plVar15 = plVar14;
                if (iVar9 == 0) goto LAB_7100052bf0;
                plVar14 = (long *)((long)plVar14 + -1);
              }
              iVar9 = FUN_710081b9a0(*(undefined1 *)((long)plVar14 + -1));
              plVar15 = plVar14;
              if (iVar9 != 0) {
                plVar14 = (long *)((long)plVar14 + -1);
                goto joined_r0x007100052b9c;
              }
            }
          }
LAB_7100052bf0:
          local_e8 = (long)plVar15 - (long)plVar8;
          *(undefined1 *)plVar15 = 0;
          FUN_71000510c0(param_1 + 0x120,&local_d0,&local_f0,local_110);
          if (local_f0 != &local_e0) {
            thunk_FUN_710081c200(local_f0,local_e0 + 1);
          }
          puVar4 = local_130;
          puVar5 = puStack_128;
          puVar6 = puStack_128;
          if (local_110[0] != local_100) {
            thunk_FUN_710081c200(local_110[0],local_100[0] + 1);
            puVar4 = local_130;
            puVar5 = puStack_128;
            puVar6 = puStack_128;
          }
          for (; puVar7 = puStack_128, puVar4 != puStack_128; puVar4 = puVar4 + 4) {
            puStack_128 = puVar6;
            if ((undefined8 *)*puVar4 != puVar4 + 2) {
              thunk_FUN_710081c200((undefined8 *)*puVar4,puVar4[2] + 1);
            }
            puVar5 = local_130;
            puVar6 = puStack_128;
            puStack_128 = puVar7;
          }
          puStack_128 = puVar6;
          if (puVar5 != (undefined8 *)0x0) {
            thunk_FUN_710081c200(puVar5,local_120 - (long)puVar5);
          }
        }
        else {
          for (; puVar4 != puVar6; puVar4 = puVar4 + 4) {
            if ((undefined8 *)*puVar4 != puVar4 + 2) {
              thunk_FUN_710081c200((undefined8 *)*puVar4,puVar4[2] + 1);
            }
            puVar5 = local_130;
          }
          if (puVar5 != (undefined8 *)0x0) {
            thunk_FUN_710081c200(puVar5,local_120 - (long)puVar5);
          }
        }
        if (local_b0 != local_a0) {
          thunk_FUN_710081c200(local_b0,local_a0[0] + 1);
        }
        if (local_d0 != (char *)&local_c0) {
          thunk_FUN_710081c200(local_d0,CONCAT17(uStack_b9,CONCAT25(uStack_bb,local_c0)) + 1);
        }
        puVar13 = puVar13 + 8;
      } while (local_168 != puVar13);
      puVar13 = (undefined8 *)*local_138;
      local_168 = puVar13 + 0x40;
    } while( true );
  }
  if (local_d0 != (char *)&local_c0) {
    thunk_FUN_710081c200(local_d0,CONCAT17(uStack_b9,CONCAT25(uStack_bb,local_c0)) + 1);
  }
LAB_7100052d68:
  local_c0 = 0x6c61636f4c;
  uStack_bb = 0x7320;
  uStack_b9 = 0x6f;
  uStack_b8 = 0x7365637275;
  local_c8 = (undefined8 *)0xd;
  local_b3 = 0;
  local_d0 = (char *)&local_c0;
  uVar11 = FUN_71007af4e0(&local_c0,0xd,0xc70f6907);
  FUN_7100052290(&local_90,lVar1,&local_d0,uVar11);
  if (*(undefined8 **)(param_1 + 0x60) != local_90) {
    if (local_d0 != (char *)&local_c0) {
      thunk_FUN_710081c200(local_d0,CONCAT17(uStack_b9,CONCAT25(uStack_bb,local_c0)) + 1);
    }
    local_c0 = 0x6c61636f4c;
    uStack_bb = 0x7320;
    uStack_b9 = 0x6f;
    uStack_b8 = 0x7365637275;
    local_c8 = (undefined8 *)0xd;
    local_b3 = 0;
    local_d0 = (char *)&local_c0;
    uVar11 = FUN_71007af4e0(&local_c0,0xd,0xc70f6907);
    FUN_7100052290(&local_90,lVar1,&local_d0,uVar11);
    puVar13 = local_90;
    if (*(undefined8 **)(param_1 + 0x60) == local_90) {
      uVar11 = FUN_71007adf60(0x10);
      FUN_71007b64c0(uVar11,"Couldn\'t find the key.");
                    /* WARNING: Subroutine does not return */
      FUN_71007af000(uVar11,&PTR_PTR_FUN_7100ae7580,FUN_71007b0980);
    }
    lVar2 = local_90[4];
    lVar3 = local_90[5] - lVar2;
    if (lVar3 == 0) {
      local_90 = (undefined8 *)0x0;
      local_88 = 0;
      local_80 = 0;
      if (((DAT_7100af8470 & 1) == 0) && (iVar9 = FUN_71007af260(&DAT_7100af8470), iVar9 != 0)) {
        puVar12 = &DAT_7100af8478;
        DAT_7100af8478 = 0xffffffff;
        FUN_71007af440(&DAT_7100af8470);
      }
      else {
        puVar12 = &DAT_7100af8478;
      }
    }
    else {
      puVar12 = (undefined8 *)FUN_71007af5c0(lVar3);
      local_90 = puVar12;
      local_80 = (long)puVar12 + lVar3;
      FUN_710080f900(puVar12,lVar2,lVar3);
      local_88 = (long)puVar12 + lVar3;
    }
    uStack_70 = puVar13[8];
    local_78 = puVar12;
    FUN_7100052650(auStack_68,puVar13 + 9);
    local_18 = puVar13[0x13];
    local_10 = *(undefined4 *)(puVar13 + 0x14);
    local_c = *(undefined1 *)((long)puVar13 + 0xa4);
    if (local_d0 != (char *)&local_c0) {
      thunk_FUN_710081c200(local_d0,CONCAT17(uStack_b9,CONCAT25(uStack_bb,local_c0)) + 1);
    }
    puVar4 = local_38;
    local_178 = local_40;
    puVar13 = local_58;
    puVar12 = local_48;
    do {
      do {
        if (puVar4 == puVar13) {
          FUN_7100050700(auStack_68);
          if (local_90 != (undefined8 *)0x0) {
            thunk_FUN_710081c200(local_90,local_80 - (long)local_90);
          }
          goto LAB_7100053030;
        }
        local_d0 = (char *)&local_c0;
        FUN_710004f860(&local_d0,*puVar13,puVar13[1]);
        local_b0 = local_a0;
        FUN_710004f860(&local_b0,puVar13[4],puVar13[5]);
        plVar14 = *(long **)(param_1 + 0x140);
        if (plVar14 == *(long **)(param_1 + 0x148)) {
          FUN_7100051c10(param_1 + 0x138,&local_d0,&local_b0,"Local");
        }
        else {
          local_e8 = 5;
          local_e0 = CONCAT26(local_e0._6_2_,0x6c61636f4c);
          *plVar14 = (long)(plVar14 + 2);
          local_f0 = &local_e0;
          FUN_710004f860(plVar14,local_d0,local_c8);
          plVar14[4] = (long)(plVar14 + 6);
          FUN_710004f860(plVar14 + 4,local_b0,local_a8);
          plVar14[8] = (long)(plVar14 + 10);
          FUN_710004f860(plVar14 + 8,local_f0,local_e8);
          if (local_f0 != &local_e0) {
            thunk_FUN_710081c200(local_f0,local_e0 + 1);
          }
          *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 0x60;
        }
        if (local_b0 != local_a0) {
          thunk_FUN_710081c200(local_b0,local_a0[0] + 1);
        }
        if (local_d0 != (char *)&local_c0) {
          thunk_FUN_710081c200(local_d0,CONCAT17(uStack_b9,CONCAT25(uStack_bb,local_c0)) + 1);
        }
        puVar13 = puVar13 + 8;
      } while (puVar12 != puVar13);
      local_178 = local_178 + 1;
      puVar13 = (undefined8 *)*local_178;
      puVar12 = puVar13 + 0x40;
    } while( true );
  }
  if (local_d0 != (char *)&local_c0) {
    thunk_FUN_710081c200(local_d0,CONCAT17(uStack_b9,CONCAT25(uStack_bb,local_c0)) + 1);
  }
LAB_7100053030:
  local_90 = (undefined8 *)0x13;
  local_d0 = (char *)&local_c0;
  local_d0 = (char *)FUN_71007e2140(&local_d0,&local_90,0);
  local_c0 = SUB85(local_90,0);
  uStack_bb = (undefined2)((ulong)local_90 >> 0x28);
  uStack_b9 = (undefined1)((ulong)local_90 >> 0x38);
  builtin_strncpy(local_d0,"MTP custom storages",0x13);
  local_c8 = local_90;
  local_d0[(long)local_90] = '\0';
  uVar11 = FUN_71007af4e0(local_d0,local_90,0xc70f6907);
  FUN_7100052290(&local_90,lVar1,&local_d0,uVar11);
  if (*(undefined8 **)(param_1 + 0x60) != local_90) {
    if (local_d0 != (char *)&local_c0) {
      thunk_FUN_710081c200(local_d0,CONCAT17(uStack_b9,CONCAT25(uStack_bb,local_c0)) + 1);
    }
    local_90 = (undefined8 *)0x13;
    local_d0 = (char *)&local_c0;
    local_d0 = (char *)FUN_71007e2140(&local_d0,&local_90,0);
    local_c0 = SUB85(local_90,0);
    uStack_bb = (undefined2)((ulong)local_90 >> 0x28);
    uStack_b9 = (undefined1)((ulong)local_90 >> 0x38);
    builtin_strncpy(local_d0,"MTP custom storages",0x13);
    local_c8 = local_90;
    local_d0[(long)local_90] = '\0';
    uVar11 = FUN_71007af4e0(local_d0,local_90,0xc70f6907);
    FUN_7100052290(&local_90,lVar1,&local_d0,uVar11);
    puVar13 = local_90;
    if (*(undefined8 **)(param_1 + 0x60) == local_90) {
      uVar11 = FUN_71007adf60(0x10);
      FUN_71007b64c0(uVar11,"Couldn\'t find the key.");
                    /* WARNING: Subroutine does not return */
      FUN_71007af000(uVar11,&PTR_PTR_FUN_7100ae7580,FUN_71007b0980);
    }
    lVar1 = local_90[4];
    lVar2 = local_90[5] - lVar1;
    if (lVar2 == 0) {
      local_90 = (undefined8 *)0x0;
      local_88 = 0;
      local_80 = 0;
      if (((DAT_7100af8470 & 1) == 0) && (iVar9 = FUN_71007af260(&DAT_7100af8470), iVar9 != 0)) {
        puVar12 = &DAT_7100af8478;
        DAT_7100af8478 = 0xffffffff;
        FUN_71007af440(&DAT_7100af8470);
      }
      else {
        puVar12 = &DAT_7100af8478;
      }
    }
    else {
      puVar12 = (undefined8 *)FUN_71007af5c0(lVar2);
      local_90 = puVar12;
      local_80 = (long)puVar12 + lVar2;
      FUN_710080f900(puVar12,lVar1,lVar2);
      local_88 = (long)puVar12 + lVar2;
    }
    uStack_70 = puVar13[8];
    local_78 = puVar12;
    FUN_7100052650(auStack_68,puVar13 + 9);
    local_18 = puVar13[0x13];
    local_10 = *(undefined4 *)(puVar13 + 0x14);
    local_c = *(undefined1 *)((long)puVar13 + 0xa4);
    if (local_d0 != (char *)&local_c0) {
      thunk_FUN_710081c200(local_d0,CONCAT17(uStack_b9,CONCAT25(uStack_bb,local_c0)) + 1);
    }
    puVar13 = local_48;
    do {
      local_178 = local_40 + 1;
      puVar12 = local_58;
      do {
        if (local_38 == puVar12) {
          FUN_7100050700(auStack_68);
          if (local_90 != (undefined8 *)0x0) {
            thunk_FUN_710081c200(local_90,local_80 - (long)local_90);
          }
          goto LAB_7100053354;
        }
        local_d0 = (char *)&local_c0;
        FUN_710004f860(&local_d0,*puVar12,puVar12[1]);
        local_b0 = local_a0;
        FUN_710004f860(&local_b0,puVar12[4],puVar12[5]);
        plVar14 = *(long **)(param_1 + 0x158);
        if (plVar14 == *(long **)(param_1 + 0x160)) {
          FUN_7100051f50(param_1 + 0x150,&local_d0,&local_b0,"MTPStorage");
        }
        else {
          local_d8[0] = 'g';
          local_d8[1] = 'e';
          local_e0._0_1_ = 'M';
          local_e0._1_1_ = 'T';
          local_e0._2_1_ = 'P';
          local_e0._3_1_ = 'S';
          local_e0._4_1_ = 't';
          local_e0._5_1_ = 'o';
          local_e0._6_1_ = 'r';
          local_e0._7_1_ = 'a';
          local_e8 = 10;
          local_d8[2] = 0;
          *plVar14 = (long)(plVar14 + 2);
          local_f0 = &local_e0;
          FUN_710004f860(plVar14,local_d0,local_c8);
          plVar14[4] = (long)(plVar14 + 6);
          FUN_710004f860(plVar14 + 4,local_b0,local_a8);
          plVar14[8] = (long)(plVar14 + 10);
          FUN_710004f860(plVar14 + 8,local_f0,local_e8);
          if (local_f0 != &local_e0) {
            thunk_FUN_710081c200(local_f0,local_e0 + 1);
          }
          *(long *)(param_1 + 0x158) = *(long *)(param_1 + 0x158) + 0x60;
        }
        if (local_b0 != local_a0) {
          thunk_FUN_710081c200(local_b0,local_a0[0] + 1);
        }
        if (local_d0 != (char *)&local_c0) {
          thunk_FUN_710081c200(local_d0,CONCAT17(uStack_b9,CONCAT25(uStack_bb,local_c0)) + 1);
        }
        puVar12 = puVar12 + 8;
      } while (puVar13 != puVar12);
      local_58 = (undefined8 *)*local_178;
      puVar13 = local_58 + 0x40;
      local_40 = local_178;
    } while( true );
  }
  if (local_d0 != (char *)&local_c0) {
    thunk_FUN_710081c200(local_d0,CONCAT17(uStack_b9,CONCAT25(uStack_bb,local_c0)) + 1);
  }
LAB_7100053354:
  FUN_710004ff80(param_1);
  *(undefined1 *)(param_1 + 0x118) = 1;
  return;
}



// ===== FUN_71000536a0 @ 71000536a0 (size=24) =====

bool FUN_71000536a0(long param_1)

{
  if ((*(byte *)(param_1 + 0x118) & 1) != 0) {
    return *(long *)(param_1 + 0x120) != *(long *)(param_1 + 0x128);
  }
  FUN_71000527d0();
  return *(long *)(param_1 + 0x120) != *(long *)(param_1 + 0x128);
}



// ===== FUN_71000536b8 @ 71000536b8 (size=40) =====

bool FUN_71000536b8(long param_1)

{
  FUN_71000527d0();
  return *(long *)(param_1 + 0x120) != *(long *)(param_1 + 0x128);
}



// ===== FUN_71000536e0 @ 71000536e0 (size=24) =====

bool FUN_71000536e0(long param_1)

{
  if ((*(byte *)(param_1 + 0x118) & 1) != 0) {
    return *(long *)(param_1 + 0x138) != *(long *)(param_1 + 0x140);
  }
  FUN_71000527d0();
  return *(long *)(param_1 + 0x138) != *(long *)(param_1 + 0x140);
}



// ===== FUN_71000536f8 @ 71000536f8 (size=40) =====

bool FUN_71000536f8(long param_1)

{
  FUN_71000527d0();
  return *(long *)(param_1 + 0x138) != *(long *)(param_1 + 0x140);
}



// ===== FUN_7100053720 @ 7100053720 (size=88) =====

undefined8 FUN_7100053720(undefined8 param_1,long param_2)

{
  if ((*(byte *)(param_2 + 0x118) & 1) != 0) {
    FUN_710004fd60(param_1,param_2 + 0x120);
    return param_1;
  }
  FUN_71000527d0();
  FUN_710004fd60(param_1,param_2 + 0x120);
  return param_1;
}



// ===== FUN_7100053780 @ 7100053780 (size=88) =====

undefined8 FUN_7100053780(undefined8 param_1,long param_2)

{
  if ((*(byte *)(param_2 + 0x118) & 1) != 0) {
    FUN_710004fd60(param_1,param_2 + 0x138);
    return param_1;
  }
  FUN_71000527d0();
  FUN_710004fd60(param_1,param_2 + 0x138);
  return param_1;
}



// ===== FUN_71000537e0 @ 71000537e0 (size=88) =====

undefined8 FUN_71000537e0(undefined8 param_1,long param_2)

{
  if ((*(byte *)(param_2 + 0x118) & 1) != 0) {
    FUN_710004fd60(param_1,param_2 + 0x150);
    return param_1;
  }
  FUN_71000527d0();
  FUN_710004fd60(param_1,param_2 + 0x150);
  return param_1;
}



// ===== FUN_7100053840 @ 7100053840 (size=660) =====

void FUN_7100053840(long *param_1,ulong param_2)

{
  ulong uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  int *piVar12;
  int *piVar13;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  int *local_30;
  int *piVar14;
  
  if (0xfffffffffffffff < param_2) {
    uVar9 = FUN_71007adf60(0x10);
    FUN_71007b6480(uVar9,"The map exceeds its maximum size.");
                    /* WARNING: Subroutine does not return */
    FUN_71007af000(uVar9,&PTR_PTR_FUN_7100ae7568,FUN_71007b0940);
  }
  if ((param_2 != 0) && (uVar6 = param_2 - 1, (param_2 & uVar6) != 0)) {
    iVar5 = 6;
    uVar8 = 1;
    do {
      iVar5 = iVar5 + -1;
      uVar6 = uVar6 | uVar6 >> (uVar8 & 0x3f);
      uVar8 = uVar8 << 1;
    } while (iVar5 != 0);
    param_2 = uVar6 + 1;
  }
  piVar2 = (int *)*param_1;
  piVar3 = (int *)param_1[1];
  if (param_2 == (long)piVar3 - (long)piVar2 >> 3) {
    return;
  }
  if (0xfffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("cannot create std::vector larger than max_size()");
  }
  if (param_2 == 0) {
    lVar19 = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    piVar7 = (int *)FUN_71007af5c0(param_2 * 8);
    piVar12 = piVar7 + param_2 * 2;
    piVar13 = piVar7;
    do {
      piVar14 = piVar13 + 2;
      *piVar13 = -1;
      piVar13[1] = 0;
      piVar13 = piVar14;
    } while (piVar12 != piVar14);
    lVar19 = param_1[2];
    *param_1 = (long)piVar7;
    param_1[1] = (long)piVar12;
    param_1[2] = (long)piVar12;
    local_30 = piVar7;
    if (piVar7 != piVar12) goto LAB_71000538dc;
  }
  if (((DAT_7100af8460 & 1) == 0) && (iVar5 = FUN_71007af260(&DAT_7100af8460), iVar5 != 0)) {
    DAT_7100af8468 = 0xffffffff;
    local_30 = (int *)&DAT_7100af8468;
    FUN_71007af440(&DAT_7100af8460);
    piVar7 = (int *)*param_1;
    piVar12 = (int *)param_1[1];
  }
  else {
    local_30 = (int *)&DAT_7100af8468;
    piVar7 = (int *)*param_1;
    piVar12 = (int *)param_1[1];
  }
LAB_71000538dc:
  uVar6 = (long)piVar12 - (long)piVar7 >> 3;
  lVar11 = param_2 - (param_2 != 0);
  *(undefined1 *)((long)param_1 + 0x84) = 0;
  param_1[3] = (long)local_30;
  param_1[4] = lVar11;
  param_1[0xf] = (long)((float)(long)uVar6 * *(float *)(param_1 + 0x10));
  piVar12 = piVar2;
  do {
    if (piVar12 == piVar3) {
      if (piVar2 == (int *)0x0) {
        return;
      }
      thunk_FUN_710081c200(piVar2,lVar19 - (long)piVar2);
      return;
    }
    iVar5 = *piVar12;
    if (iVar5 != -1) {
      uVar18 = piVar12[1];
      uVar16 = 0;
      uVar10 = (uint)lVar11;
      uVar8 = (ulong)(uVar18 & uVar10);
      piVar7 = local_30 + uVar8 * 2;
      iVar17 = local_30[uVar8 * 2];
      while (iVar17 != -1) {
        while( true ) {
          uVar4 = piVar7[1];
          uVar15 = (ulong)(uVar4 & uVar10);
          uVar1 = (uVar6 + uVar8) - uVar15;
          if (uVar15 <= uVar8) {
            uVar1 = uVar8 - uVar15;
          }
          if (uVar1 < uVar16) {
            *piVar7 = iVar5;
            piVar7[1] = uVar18;
            uVar16 = uVar1;
            iVar5 = iVar17;
            uVar18 = uVar4;
          }
          uVar8 = uVar8 + 1;
          if (uVar8 < uVar6) break;
          uVar8 = 0;
          iVar17 = *local_30;
          uVar16 = uVar16 + 1;
          piVar7 = local_30;
          if (iVar17 == -1) goto LAB_71000539b4;
        }
        piVar7 = local_30 + uVar8 * 2;
        uVar16 = uVar16 + 1;
        iVar17 = *piVar7;
      }
LAB_71000539b4:
      *piVar7 = iVar5;
      piVar7[1] = uVar18;
    }
    piVar12 = piVar12 + 2;
  } while( true );
}



// ===== FUN_7100053af0 @ 7100053af0 (size=660) =====

void FUN_7100053af0(long *param_1,ulong param_2)

{
  ulong uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  int *piVar12;
  int *piVar13;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  int *local_30;
  int *piVar14;
  
  if (0xfffffffffffffff < param_2) {
    uVar9 = FUN_71007adf60(0x10);
    FUN_71007b6480(uVar9,"The map exceeds its maximum size.");
                    /* WARNING: Subroutine does not return */
    FUN_71007af000(uVar9,&PTR_PTR_FUN_7100ae7568,FUN_71007b0940);
  }
  if ((param_2 != 0) && (uVar6 = param_2 - 1, (param_2 & uVar6) != 0)) {
    iVar5 = 6;
    uVar8 = 1;
    do {
      iVar5 = iVar5 + -1;
      uVar6 = uVar6 | uVar6 >> (uVar8 & 0x3f);
      uVar8 = uVar8 << 1;
    } while (iVar5 != 0);
    param_2 = uVar6 + 1;
  }
  piVar2 = (int *)*param_1;
  piVar3 = (int *)param_1[1];
  if (param_2 == (long)piVar3 - (long)piVar2 >> 3) {
    return;
  }
  if (0xfffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("cannot create std::vector larger than max_size()");
  }
  if (param_2 == 0) {
    lVar19 = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    piVar7 = (int *)FUN_71007af5c0(param_2 * 8);
    piVar12 = piVar7 + param_2 * 2;
    piVar13 = piVar7;
    do {
      piVar14 = piVar13 + 2;
      *piVar13 = -1;
      piVar13[1] = 0;
      piVar13 = piVar14;
    } while (piVar12 != piVar14);
    lVar19 = param_1[2];
    *param_1 = (long)piVar7;
    param_1[1] = (long)piVar12;
    param_1[2] = (long)piVar12;
    local_30 = piVar7;
    if (piVar7 != piVar12) goto LAB_7100053b8c;
  }
  if (((DAT_7100af8470 & 1) == 0) && (iVar5 = FUN_71007af260(&DAT_7100af8470), iVar5 != 0)) {
    DAT_7100af8478 = 0xffffffff;
    local_30 = (int *)&DAT_7100af8478;
    FUN_71007af440(&DAT_7100af8470);
    piVar7 = (int *)*param_1;
    piVar12 = (int *)param_1[1];
  }
  else {
    local_30 = (int *)&DAT_7100af8478;
    piVar7 = (int *)*param_1;
    piVar12 = (int *)param_1[1];
  }
LAB_7100053b8c:
  uVar6 = (long)piVar12 - (long)piVar7 >> 3;
  lVar11 = param_2 - (param_2 != 0);
  *(undefined1 *)((long)param_1 + 0x84) = 0;
  param_1[3] = (long)local_30;
  param_1[4] = lVar11;
  param_1[0xf] = (long)((float)(long)uVar6 * *(float *)(param_1 + 0x10));
  piVar12 = piVar2;
  do {
    if (piVar12 == piVar3) {
      if (piVar2 == (int *)0x0) {
        return;
      }
      thunk_FUN_710081c200(piVar2,lVar19 - (long)piVar2);
      return;
    }
    iVar5 = *piVar12;
    if (iVar5 != -1) {
      uVar18 = piVar12[1];
      uVar16 = 0;
      uVar10 = (uint)lVar11;
      uVar8 = (ulong)(uVar18 & uVar10);
      piVar7 = local_30 + uVar8 * 2;
      iVar17 = local_30[uVar8 * 2];
      while (iVar17 != -1) {
        while( true ) {
          uVar4 = piVar7[1];
          uVar15 = (ulong)(uVar4 & uVar10);
          uVar1 = (uVar6 + uVar8) - uVar15;
          if (uVar15 <= uVar8) {
            uVar1 = uVar8 - uVar15;
          }
          if (uVar1 < uVar16) {
            *piVar7 = iVar5;
            piVar7[1] = uVar18;
            uVar16 = uVar1;
            iVar5 = iVar17;
            uVar18 = uVar4;
          }
          uVar8 = uVar8 + 1;
          if (uVar8 < uVar6) break;
          uVar8 = 0;
          iVar17 = *local_30;
          uVar16 = uVar16 + 1;
          piVar7 = local_30;
          if (iVar17 == -1) goto LAB_7100053c64;
        }
        piVar7 = local_30 + uVar8 * 2;
        uVar16 = uVar16 + 1;
        iVar17 = *piVar7;
      }
LAB_7100053c64:
      *piVar7 = iVar5;
      piVar7[1] = uVar18;
    }
    piVar12 = piVar12 + 2;
  } while( true );
}



// ===== FUN_7100053da0 @ 7100053da0 (size=660) =====

void FUN_7100053da0(long *param_1,ulong param_2)

{
  ulong uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  int *piVar12;
  int *piVar13;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  int *local_30;
  int *piVar14;
  
  if (0xfffffffffffffff < param_2) {
    uVar9 = FUN_71007adf60(0x10);
    FUN_71007b6480(uVar9,"The map exceeds its maximum size.");
                    /* WARNING: Subroutine does not return */
    FUN_71007af000(uVar9,&PTR_PTR_FUN_7100ae7568,FUN_71007b0940);
  }
  if ((param_2 != 0) && (uVar6 = param_2 - 1, (param_2 & uVar6) != 0)) {
    iVar5 = 6;
    uVar8 = 1;
    do {
      iVar5 = iVar5 + -1;
      uVar6 = uVar6 | uVar6 >> (uVar8 & 0x3f);
      uVar8 = uVar8 << 1;
    } while (iVar5 != 0);
    param_2 = uVar6 + 1;
  }
  piVar2 = (int *)*param_1;
  piVar3 = (int *)param_1[1];
  if (param_2 == (long)piVar3 - (long)piVar2 >> 3) {
    return;
  }
  if (0xfffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_7100003b58("cannot create std::vector larger than max_size()");
  }
  if (param_2 == 0) {
    lVar19 = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    piVar7 = (int *)FUN_71007af5c0(param_2 * 8);
    piVar12 = piVar7 + param_2 * 2;
    piVar13 = piVar7;
    do {
      piVar14 = piVar13 + 2;
      *piVar13 = -1;
      piVar13[1] = 0;
      piVar13 = piVar14;
    } while (piVar12 != piVar14);
    lVar19 = param_1[2];
    *param_1 = (long)piVar7;
    param_1[1] = (long)piVar12;
    param_1[2] = (long)piVar12;
    local_30 = piVar7;
    if (piVar7 != piVar12) goto LAB_7100053e3c;
  }
  if (((DAT_7100af8450 & 1) == 0) && (iVar5 = FUN_71007af260(&DAT_7100af8450), iVar5 != 0)) {
    DAT_7100af8458 = 0xffffffff;
    local_30 = (int *)&DAT_7100af8458;
    FUN_71007af440(&DAT_7100af8450);
    piVar7 = (int *)*param_1;
    piVar12 = (int *)param_1[1];
  }
  else {
    local_30 = (int *)&DAT_7100af8458;
    piVar7 = (int *)*param_1;
    piVar12 = (int *)param_1[1];
  }
LAB_7100053e3c:
  uVar6 = (long)piVar12 - (long)piVar7 >> 3;
  lVar11 = param_2 - (param_2 != 0);
  *(undefined1 *)((long)param_1 + 0x84) = 0;
  param_1[3] = (long)local_30;
  param_1[4] = lVar11;
  param_1[0xf] = (long)((float)(long)uVar6 * *(float *)(param_1 + 0x10));
  piVar12 = piVar2;
  do {
    if (piVar12 == piVar3) {
      if (piVar2 == (int *)0x0) {
        return;
      }
      thunk_FUN_710081c200(piVar2,lVar19 - (long)piVar2);
      return;
    }
    iVar5 = *piVar12;
    if (iVar5 != -1) {
      uVar18 = piVar12[1];
      uVar16 = 0;
      uVar10 = (uint)lVar11;
      uVar8 = (ulong)(uVar18 & uVar10);
      piVar7 = local_30 + uVar8 * 2;
      iVar17 = local_30[uVar8 * 2];
      while (iVar17 != -1) {
        while( true ) {
          uVar4 = piVar7[1];
          uVar15 = (ulong)(uVar4 & uVar10);
          uVar1 = (uVar6 + uVar8) - uVar15;
          if (uVar15 <= uVar8) {
            uVar1 = uVar8 - uVar15;
          }
          if (uVar1 < uVar16) {
            *piVar7 = iVar5;
            piVar7[1] = uVar18;
            uVar16 = uVar1;
            iVar5 = iVar17;
            uVar18 = uVar4;
          }
          uVar8 = uVar8 + 1;
          if (uVar8 < uVar6) break;
          uVar8 = 0;
          iVar17 = *local_30;
          uVar16 = uVar16 + 1;
          piVar7 = local_30;
          if (iVar17 == -1) goto LAB_7100053f14;
        }
        piVar7 = local_30 + uVar8 * 2;
        uVar16 = uVar16 + 1;
        iVar17 = *piVar7;
      }
LAB_7100053f14:
      *piVar7 = iVar5;
      piVar7[1] = uVar18;
    }
    piVar12 = piVar12 + 2;
  } while( true );
}



// ===== FUN_7100054050 @ 7100054050 (size=416) =====

void FUN_7100054050(long *param_1,ulong param_2,uint param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  
  plVar11 = (long *)param_1[5];
  lVar8 = param_1[9];
  uVar6 = param_1[1];
  lVar10 = lVar8 - (long)plVar11;
  lVar3 = (lVar10 >> 3) + 1 + param_2;
  if ((ulong)(lVar3 * 2) < uVar6) {
    lVar9 = *param_1;
    lVar7 = (uVar6 - lVar3 >> 1) * 8;
    lVar8 = (lVar8 + 8) - (long)plVar11;
    lVar3 = lVar7 + param_2 * 8;
    if ((param_3 & 1) == 0) {
      lVar3 = lVar7;
    }
    plVar5 = (long *)(lVar9 + lVar3);
    if (plVar5 < plVar11) {
      if (8 < lVar8) {
        FUN_710080f900(plVar5,plVar11);
        lVar3 = *(long *)(lVar9 + lVar3);
        goto LAB_7100054158;
      }
      if (lVar8 == 8) {
        lVar3 = *plVar11;
        *plVar5 = lVar3;
        goto LAB_7100054158;
      }
    }
    else {
      plVar1 = (long *)((long)plVar5 + lVar10 + 8 + ((lVar8 << 0x3d) - lVar8));
      if (8 < lVar8) {
        FUN_710080f900(plVar1,plVar11);
        lVar3 = *plVar5;
        goto LAB_7100054158;
      }
      if (lVar8 == 8) {
        *plVar1 = *plVar11;
        lVar3 = *plVar5;
        goto LAB_7100054158;
      }
    }
  }
  else {
    uVar2 = uVar6;
    if (uVar6 < param_2) {
      uVar2 = param_2;
    }
    lVar7 = uVar2 + uVar6 + 2;
    lVar9 = FUN_71007af5c0(lVar7 * 8);
    lVar4 = ((ulong)(lVar7 - lVar3) >> 1) * 8;
    lVar8 = (lVar8 + 8) - (long)plVar11;
    lVar3 = lVar4 + param_2 * 8;
    if ((param_3 & 1) == 0) {
      lVar3 = lVar4;
    }
    plVar5 = (long *)(lVar9 + lVar3);
    if (lVar8 < 9) {
      if (lVar8 == 8) {
        *plVar5 = *plVar11;
      }
    }
    else {
      FUN_710080f900(plVar5,plVar11);
    }
    thunk_FUN_710081c200(*param_1,uVar6 << 3);
    *param_1 = lVar9;
    param_1[1] = lVar7;
  }
  lVar3 = *plVar5;
LAB_7100054158:
  param_1[5] = (long)plVar5;
  param_1[3] = lVar3;
  param_1[4] = lVar3 + 0x1f8;
  param_1[9] = (long)plVar5 + lVar10;
  lVar3 = *(long *)((long)plVar5 + lVar10);
  param_1[7] = lVar3;
  param_1[8] = lVar3 + 0x1f8;
  return;
}



// ===== FUN_71000541f0 @ 71000541f0 (size=1992) =====

long * FUN_71000541f0(long *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint *puVar1;
  int iVar2;
  ulong uVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  
  uVar19 = 0;
  uVar3 = FUN_71007af4e0(*param_3,param_3[1],0xc70f6907);
  puVar1 = (uint *)param_2[3];
  uVar6 = param_2[4];
  uVar18 = uVar3 & uVar6;
  uVar16 = puVar1[uVar18 * 2];
  puVar4 = puVar1 + uVar18 * 2;
joined_r0x00710005424c:
  if (uVar16 != 0xffffffff) {
    do {
      uVar5 = (ulong)(puVar4[1] & (uint)uVar6);
      lVar9 = -uVar5;
      if (uVar18 < uVar5) {
        lVar9 = (param_2[1] - *param_2 >> 3) - uVar5;
      }
      if (uVar18 + lVar9 < uVar19) break;
      if (puVar4[1] == (uint)uVar3) {
        lVar9 = param_2[7];
        lVar15 = param_2[8];
        plVar20 = (long *)param_2[10];
        uVar5 = (ulong)uVar16 + (lVar9 - lVar15 >> 3) * -0x30c30c30c30c30c3;
        if ((long)uVar5 < 0) {
          uVar11 = ~(~uVar5 / 3);
LAB_7100054660:
          puVar7 = (undefined8 *)(plVar20[uVar11] + (uVar5 + uVar11 * -3) * 0xa8);
        }
        else {
          if (2 < (long)uVar5) {
            uVar11 = (long)uVar5 / 3;
            goto LAB_7100054660;
          }
          puVar7 = (undefined8 *)(lVar9 + (ulong)uVar16 * 0xa8);
        }
        if ((param_3[1] == puVar7[1]) &&
           ((param_3[1] == 0 || (iVar2 = FUN_710081ec40(*param_3,*puVar7), iVar2 == 0)))) {
          if ((long)uVar5 < 0) {
            uVar18 = ~(~uVar5 / 3);
          }
          else {
            if ((long)uVar5 < 3) {
              lVar13 = param_2[9];
              lVar9 = lVar9 + (ulong)uVar16 * 0xa8;
              goto LAB_710005462c;
            }
            uVar18 = (long)uVar5 / 3;
          }
          plVar20 = plVar20 + uVar18;
          lVar15 = *plVar20;
          lVar13 = lVar15 + 0x1f8;
          lVar9 = lVar15 + (uVar5 + uVar18 * -3) * 0xa8;
LAB_710005462c:
          *param_1 = lVar9;
          param_1[1] = lVar15;
          param_1[2] = lVar13;
          param_1[3] = (long)plVar20;
          *(undefined1 *)(param_1 + 4) = 0;
          return param_1;
        }
      }
      uVar18 = uVar18 + 1;
      if (uVar18 < (ulong)(param_2[1] - *param_2 >> 3)) goto LAB_7100054278;
      uVar18 = 0;
      uVar16 = *puVar1;
      uVar19 = uVar19 + 1;
      puVar4 = puVar1;
      if (uVar16 == 0xffffffff) break;
    } while( true );
  }
  plVar20 = (long *)param_2[0xb];
  uVar6 = ((param_2[0xe] - param_2[10] >> 3) - (ulong)(param_2[0xe] != 0)) * 3 +
          ((long)plVar20 - param_2[0xc] >> 3) * -0x30c30c30c30c30c3 +
          (param_2[9] - param_2[7] >> 3) * -0x30c30c30c30c30c3;
  if (0xfffffffd < uVar6) {
    uVar8 = FUN_71007adf60(0x10);
    FUN_71007b6480(uVar8,"We reached the maximum size for the hash table.");
                    /* WARNING: Subroutine does not return */
    FUN_71007af000(uVar8,&PTR_PTR_FUN_7100ae7568,FUN_71007b0940);
  }
  if (((*(byte *)((long)param_2 + 0x84) & 1) == 0) && (uVar6 < (ulong)param_2[0xf])) {
    if (plVar20 == (long *)(param_2[0xd] + -0xa8)) {
LAB_7100054750:
      lVar9 = param_2[0xe];
      if (((lVar9 - param_2[10] >> 3) - (ulong)(lVar9 != 0)) * 3 +
          ((long)plVar20 - param_2[0xc] >> 3) * -0x30c30c30c30c30c3 +
          (param_2[9] - param_2[7] >> 3) * -0x30c30c30c30c30c3 == 0xc30c30c30c30c3) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003b58("cannot create std::deque larger than max_size()");
      }
      if ((ulong)(param_2[6] - (lVar9 - param_2[5] >> 3)) < 2) {
        FUN_7100054050(param_2 + 5,1,0);
        lVar9 = param_2[0xe];
        uVar8 = FUN_71007af5c0(0x1f8);
        *(undefined8 *)(lVar9 + 8) = uVar8;
      }
      else {
        uVar8 = FUN_71007af5c0(0x1f8);
        *(undefined8 *)(lVar9 + 8) = uVar8;
      }
      plVar20 = (long *)param_2[0xb];
      param_4 = (undefined8 *)*param_4;
      *plVar20 = (long)(plVar20 + 2);
      FUN_710004f860(plVar20,*param_4,param_4[1]);
      plVar20[4] = 0;
      plVar20[5] = 0;
      plVar20[6] = 0;
      if (((DAT_7100af8470 & 1) == 0) && (iVar2 = FUN_71007af260(&DAT_7100af8470), iVar2 != 0)) {
        DAT_7100af8478 = 0xffffffff;
        FUN_71007af440(&DAT_7100af8470);
      }
      plVar20[7] = (long)&DAT_7100af8478;
      plVar20[8] = 0;
      plVar20[9] = 0;
      plVar20[10] = 0;
      plVar20[0xb] = 0;
      plVar20[0xc] = 0;
      plVar20[0xd] = 0;
      plVar20[0xe] = 0;
      plVar20[0xf] = 0;
      plVar20[0x10] = 0;
      plVar20[0x11] = 0;
      plVar20[0x12] = 0;
      FUN_7100052510(plVar20 + 9,0);
      uVar6 = 1;
      *(undefined1 *)((long)plVar20 + 0xa4) = 0;
      *(undefined4 *)(plVar20 + 0x14) = 0x3f400000;
      lVar10 = 0;
      plVar20[0x13] = (long)((float)(plVar20[5] - plVar20[4] >> 3) * 0.75);
      lVar9 = *(long *)(param_2[0xe] + 8);
      lVar15 = param_2[0xe] + 8;
      param_2[0xe] = lVar15;
      lVar13 = lVar9 + 0x1f8;
      param_2[0xc] = lVar9;
      param_2[0xd] = lVar13;
      param_2[0xb] = lVar9;
      lVar17 = lVar9;
      goto LAB_7100054444;
    }
  }
  else {
    uVar19 = 0;
    lVar9 = (param_2[1] - *param_2 >> 3) * 2;
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    FUN_7100053840(param_2,lVar9);
    *(undefined1 *)((long)param_2 + 0x84) = 0;
    plVar20 = (long *)param_2[0xb];
    uVar18 = uVar3 & param_2[4];
    if (plVar20 == (long *)(param_2[0xd] + -0xa8)) goto LAB_7100054750;
  }
  param_4 = (undefined8 *)*param_4;
  *plVar20 = (long)(plVar20 + 2);
  FUN_710004f860(plVar20,*param_4,param_4[1]);
  plVar20[4] = 0;
  plVar20[5] = 0;
  plVar20[6] = 0;
  if (((DAT_7100af8470 & 1) == 0) && (iVar2 = FUN_71007af260(&DAT_7100af8470), iVar2 != 0)) {
    DAT_7100af8478 = 0xffffffff;
    FUN_71007af440(&DAT_7100af8470);
  }
  plVar20[7] = (long)&DAT_7100af8478;
  plVar20[8] = 0;
  plVar20[9] = 0;
  plVar20[10] = 0;
  plVar20[0xb] = 0;
  plVar20[0xc] = 0;
  plVar20[0xd] = 0;
  plVar20[0xe] = 0;
  plVar20[0xf] = 0;
  plVar20[0x10] = 0;
  plVar20[0x11] = 0;
  plVar20[0x12] = 0;
  FUN_7100052510(plVar20 + 9,0);
  *(undefined1 *)((long)plVar20 + 0xa4) = 0;
  lVar9 = param_2[0xb];
  lVar15 = param_2[0xe];
  *(undefined4 *)(plVar20 + 0x14) = 0x3f400000;
  lVar9 = lVar9 + 0xa8;
  uVar6 = (ulong)(lVar15 != 0);
  plVar20[0x13] = (long)((float)(plVar20[5] - plVar20[4] >> 3) * 0.75);
  param_2[0xb] = lVar9;
  lVar13 = param_2[0xd];
  lVar10 = (lVar9 - param_2[0xc] >> 3) * -0x30c30c30c30c30c3;
  lVar17 = param_2[0xc];
LAB_7100054444:
  piVar14 = (int *)param_2[3];
  lVar10 = ((lVar15 - param_2[10] >> 3) - uVar6) * 3 + lVar10 +
           (param_2[9] - param_2[7] >> 3) * -0x30c30c30c30c30c3;
  piVar12 = piVar14 + uVar18 * 2;
  uVar8 = CONCAT44((uint)uVar3,(int)lVar10 + -1);
  if (piVar14[uVar18 * 2] != -1) {
    uVar5 = param_2[4];
    uVar3 = param_2[1] - *param_2 >> 3;
    uVar21 = (undefined4)*(undefined8 *)(piVar14 + uVar18 * 2);
    uVar23 = (undefined4)((ulong)*(undefined8 *)(piVar14 + uVar18 * 2) >> 0x20);
    uVar6 = (uint)piVar12[1] & uVar5;
    if (uVar6 <= uVar18) goto LAB_71000546b8;
LAB_71000544c8:
    uVar6 = (uVar3 + uVar18) - uVar6;
    if (uVar19 <= uVar6) goto LAB_71000546d0;
    uVar18 = uVar18 + 1;
    *(undefined8 *)piVar12 = uVar8;
    uVar19 = uVar6 + 1;
    uVar8 = CONCAT44(uVar23,uVar21);
    if (uVar3 <= uVar18) goto LAB_71000546e0;
LAB_71000544f4:
    piVar12 = piVar14 + uVar18 * 2;
    if (uVar19 < 0x81) goto LAB_7100054698;
    if ((*(byte *)((long)param_2 + 0x84) & 1) != 0) goto LAB_7100054698;
LAB_7100054508:
    fVar22 = (float)lVar10 / (float)(long)uVar3;
    if (fVar22 < 0.15 == NAN(fVar22)) {
      *(undefined1 *)((long)param_2 + 0x84) = 1;
      goto LAB_7100054698;
    }
    if (*piVar12 != -1) {
      do {
        uVar21 = (undefined4)*(undefined8 *)piVar12;
        uVar23 = (undefined4)((ulong)*(undefined8 *)piVar12 >> 0x20);
        uVar6 = (uint)piVar12[1] & uVar5;
        if (uVar18 < uVar6) goto LAB_71000544c8;
LAB_71000546b8:
        if (uVar18 - uVar6 < uVar19) {
          *(undefined8 *)piVar12 = uVar8;
          uVar8 = CONCAT44(uVar23,uVar21);
          uVar19 = uVar18 - uVar6;
        }
LAB_71000546d0:
        uVar18 = uVar18 + 1;
        uVar19 = uVar19 + 1;
        if (uVar18 < uVar3) goto LAB_71000544f4;
LAB_71000546e0:
        piVar12 = piVar14;
        if (uVar19 < 0x81) {
          uVar18 = 0;
        }
        else {
          uVar18 = 0;
          if ((*(byte *)((long)param_2 + 0x84) & 1) == 0 && uVar3 != 0) goto LAB_7100054508;
        }
LAB_7100054698:
        if (*piVar12 == -1) break;
      } while( true );
    }
  }
  *(undefined8 *)piVar12 = uVar8;
  if (lVar17 == lVar9) {
    lVar17 = *(long *)(lVar15 + -8);
    lVar15 = lVar15 + -8;
    lVar9 = lVar17 + 0x1f8;
    lVar13 = lVar9;
  }
  param_1[2] = lVar13;
  param_1[3] = lVar15;
  *param_1 = lVar9 + -0xa8;
  param_1[1] = lVar17;
  *(undefined1 *)(param_1 + 4) = 1;
  return param_1;
LAB_7100054278:
  puVar4 = puVar1 + uVar18 * 2;
  uVar19 = uVar19 + 1;
  uVar16 = *puVar4;
  goto joined_r0x00710005424c;
}



// ===== FUN_7100054a30 @ 7100054a30 (size=416) =====

void FUN_7100054a30(long *param_1,ulong param_2,uint param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  
  plVar11 = (long *)param_1[5];
  lVar8 = param_1[9];
  uVar6 = param_1[1];
  lVar10 = lVar8 - (long)plVar11;
  lVar3 = (lVar10 >> 3) + 1 + param_2;
  if ((ulong)(lVar3 * 2) < uVar6) {
    lVar9 = *param_1;
    lVar7 = (uVar6 - lVar3 >> 1) * 8;
    lVar8 = (lVar8 + 8) - (long)plVar11;
    lVar3 = lVar7 + param_2 * 8;
    if ((param_3 & 1) == 0) {
      lVar3 = lVar7;
    }
    plVar5 = (long *)(lVar9 + lVar3);
    if (plVar5 < plVar11) {
      if (8 < lVar8) {
        FUN_710080f900(plVar5,plVar11);
        lVar3 = *(long *)(lVar9 + lVar3);
        goto LAB_7100054b38;
      }
      if (lVar8 == 8) {
        lVar3 = *plVar11;
        *plVar5 = lVar3;
        goto LAB_7100054b38;
      }
    }
    else {
      plVar1 = (long *)((long)plVar5 + lVar10 + 8 + ((lVar8 << 0x3d) - lVar8));
      if (8 < lVar8) {
        FUN_710080f900(plVar1,plVar11);
        lVar3 = *plVar5;
        goto LAB_7100054b38;
      }
      if (lVar8 == 8) {
        *plVar1 = *plVar11;
        lVar3 = *plVar5;
        goto LAB_7100054b38;
      }
    }
  }
  else {
    uVar2 = uVar6;
    if (uVar6 < param_2) {
      uVar2 = param_2;
    }
    lVar7 = uVar2 + uVar6 + 2;
    lVar9 = FUN_71007af5c0(lVar7 * 8);
    lVar4 = ((ulong)(lVar7 - lVar3) >> 1) * 8;
    lVar8 = (lVar8 + 8) - (long)plVar11;
    lVar3 = lVar4 + param_2 * 8;
    if ((param_3 & 1) == 0) {
      lVar3 = lVar4;
    }
    plVar5 = (long *)(lVar9 + lVar3);
    if (lVar8 < 9) {
      if (lVar8 == 8) {
        *plVar5 = *plVar11;
      }
    }
    else {
      FUN_710080f900(plVar5,plVar11);
    }
    thunk_FUN_710081c200(*param_1,uVar6 << 3);
    *param_1 = lVar9;
    param_1[1] = lVar7;
  }
  lVar3 = *plVar5;
LAB_7100054b38:
  param_1[5] = (long)plVar5;
  param_1[3] = lVar3;
  param_1[4] = lVar3 + 0x200;
  param_1[9] = (long)plVar5 + lVar10;
  lVar3 = *(long *)((long)plVar5 + lVar10);
  param_1[7] = lVar3;
  param_1[8] = lVar3 + 0x200;
  return;
}



// ===== FUN_7100054bd0 @ 7100054bd0 (size=1440) =====

long * FUN_7100054bd0(long *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  float fVar23;
  undefined8 uVar24;
  
  uVar19 = 0;
  uVar4 = FUN_71007af4e0(*param_3,param_3[1],0xc70f6907);
  puVar1 = (uint *)param_2[3];
  uVar12 = param_2[4];
  uVar18 = uVar4 & uVar12;
  puVar8 = puVar1 + uVar18 * 2;
  uVar2 = puVar1[uVar18 * 2];
joined_r0x007100054c2c:
  if (uVar2 != 0xffffffff) {
    do {
      uVar15 = (ulong)(puVar8[1] & (uint)uVar12);
      lVar16 = -uVar15;
      if (uVar18 < uVar15) {
        lVar16 = (param_2[1] - *param_2 >> 3) - uVar15;
      }
      if (uVar18 + lVar16 < uVar19) break;
      if (puVar8[1] == (uint)uVar4) {
        lVar16 = param_2[7];
        lVar22 = param_2[8];
        uVar20 = (ulong)uVar2;
        plVar21 = (long *)param_2[10];
        uVar15 = uVar20 + (lVar16 - lVar22 >> 6);
        uVar7 = (long)uVar15 >> 3;
        if ((long)uVar15 < 0) {
          uVar10 = ~(~uVar15 >> 3);
LAB_7100054f38:
          puVar5 = (undefined8 *)(plVar21[uVar10] + (uVar15 + uVar10 * -8) * 0x40);
        }
        else {
          uVar10 = uVar7;
          if (7 < (long)uVar15) goto LAB_7100054f38;
          puVar5 = (undefined8 *)(lVar16 + uVar20 * 0x40);
        }
        if ((param_3[1] == puVar5[1]) &&
           ((param_3[1] == 0 || (iVar3 = FUN_710081ec40(*param_3,*puVar5), iVar3 == 0)))) {
          if ((long)uVar15 < 0) {
            uVar7 = ~(~uVar15 >> 3);
          }
          else if ((long)uVar15 < 8) {
            lVar14 = param_2[9];
            lVar16 = lVar16 + uVar20 * 0x40;
            goto LAB_7100054f08;
          }
          plVar21 = plVar21 + uVar7;
          lVar22 = *plVar21;
          lVar16 = lVar22 + (uVar15 + uVar7 * -8) * 0x40;
          lVar14 = lVar22 + 0x200;
LAB_7100054f08:
          *param_1 = lVar16;
          param_1[1] = lVar22;
          param_1[2] = lVar14;
          param_1[3] = (long)plVar21;
          *(undefined1 *)(param_1 + 4) = 0;
          return param_1;
        }
      }
      uVar18 = uVar18 + 1;
      if (uVar18 < (ulong)(param_2[1] - *param_2 >> 3)) goto LAB_7100054c34;
      uVar18 = 0;
      uVar2 = *puVar1;
      uVar19 = uVar19 + 1;
      puVar8 = puVar1;
      if (uVar2 == 0xffffffff) break;
    } while( true );
  }
  plVar21 = (long *)param_2[0xb];
  uVar12 = ((long)plVar21 - param_2[0xc] >> 6) +
           ((param_2[0xe] - param_2[10] >> 3) - (ulong)(param_2[0xe] != 0)) * 8 +
           (param_2[9] - param_2[7] >> 6);
  if (0xfffffffd < uVar12) {
    uVar6 = FUN_71007adf60(0x10);
    FUN_71007b6480(uVar6,"We reached the maximum size for the hash table.");
                    /* WARNING: Subroutine does not return */
    FUN_71007af000(uVar6,&PTR_PTR_FUN_7100ae7568,FUN_71007b0940);
  }
  if (((*(byte *)((long)param_2 + 0x84) & 1) == 0) && (uVar12 < (ulong)param_2[0xf])) {
    if (plVar21 == (long *)(param_2[0xd] + -0x40)) {
LAB_7100055018:
      lVar16 = param_2[0xe];
      if (((long)plVar21 - param_2[0xc] >> 6) +
          ((lVar16 - param_2[10] >> 3) - (ulong)(lVar16 != 0)) * 8 + (param_2[9] - param_2[7] >> 6)
          == 0x1ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003b58("cannot create std::deque larger than max_size()");
      }
      if ((ulong)(param_2[6] - (lVar16 - param_2[5] >> 3)) < 2) {
        FUN_7100054a30(param_2 + 5,1,0);
        lVar16 = param_2[0xe];
        uVar6 = FUN_71007af5c0(0x200);
        *(undefined8 *)(lVar16 + 8) = uVar6;
      }
      else {
        uVar6 = FUN_71007af5c0(0x200);
        *(undefined8 *)(lVar16 + 8) = uVar6;
      }
      plVar21 = (long *)param_2[0xb];
      param_4 = (undefined8 *)*param_4;
      *plVar21 = (long)(plVar21 + 2);
      FUN_710004f860(plVar21,*param_4,param_4[1]);
      *(undefined1 *)(plVar21 + 6) = 0;
      lVar9 = 0;
      uVar12 = 1;
      plVar21[4] = (long)(plVar21 + 6);
      plVar21[5] = 0;
      lVar14 = *(long *)(param_2[0xe] + 8);
      lVar16 = param_2[0xe] + 8;
      param_2[0xe] = lVar16;
      lVar22 = lVar14 + 0x200;
      param_2[0xc] = lVar14;
      param_2[0xd] = lVar22;
      param_2[0xb] = lVar14;
      lVar17 = lVar14;
      goto LAB_7100054d6c;
    }
  }
  else {
    uVar19 = 0;
    lVar16 = (param_2[1] - *param_2 >> 3) * 2;
    if (lVar16 == 0) {
      lVar16 = 1;
    }
    FUN_7100053af0(param_2,lVar16);
    *(undefined1 *)((long)param_2 + 0x84) = 0;
    plVar21 = (long *)param_2[0xb];
    uVar18 = uVar4 & param_2[4];
    if (plVar21 == (long *)(param_2[0xd] + -0x40)) goto LAB_7100055018;
  }
  param_4 = (undefined8 *)*param_4;
  *plVar21 = (long)(plVar21 + 2);
  FUN_710004f860(plVar21,*param_4,param_4[1]);
  *(undefined1 *)(plVar21 + 6) = 0;
  plVar21[4] = (long)(plVar21 + 6);
  plVar21[5] = 0;
  lVar16 = param_2[0xe];
  lVar14 = param_2[0xb] + 0x40;
  param_2[0xb] = lVar14;
  uVar12 = (ulong)(lVar16 != 0);
  lVar22 = param_2[0xd];
  lVar9 = lVar14 - param_2[0xc] >> 6;
  lVar17 = param_2[0xc];
LAB_7100054d6c:
  piVar13 = (int *)param_2[3];
  lVar9 = lVar9 + ((lVar16 - param_2[10] >> 3) - uVar12) * 8 + (param_2[9] - param_2[7] >> 6);
  piVar11 = piVar13 + uVar18 * 2;
  uVar6 = CONCAT44((uint)uVar4,(int)lVar9 + -1);
  if (piVar13[uVar18 * 2] != -1) {
    uVar15 = param_2[4];
    uVar4 = param_2[1] - *param_2 >> 3;
    uVar24 = *(undefined8 *)(piVar13 + uVar18 * 2);
    uVar12 = (uint)piVar11[1] & uVar15;
    if (uVar12 <= uVar18) goto LAB_7100054f80;
LAB_7100054dd8:
    uVar12 = (uVar4 + uVar18) - uVar12;
    if (uVar19 <= uVar12) goto LAB_7100054f98;
    uVar18 = uVar18 + 1;
    *(undefined8 *)piVar11 = uVar6;
    uVar19 = uVar12 + 1;
    uVar6 = uVar24;
    if (uVar4 <= uVar18) goto LAB_7100054fa8;
LAB_7100054e04:
    piVar11 = piVar13 + uVar18 * 2;
    if (uVar19 < 0x81) goto LAB_7100054f60;
    if ((*(byte *)((long)param_2 + 0x84) & 1) != 0) goto LAB_7100054f60;
LAB_7100054e18:
    fVar23 = (float)lVar9 / (float)(long)uVar4;
    if (fVar23 < 0.15 == NAN(fVar23)) {
      *(undefined1 *)((long)param_2 + 0x84) = 1;
      goto LAB_7100054f60;
    }
    if (*piVar11 != -1) {
      do {
        uVar24 = *(undefined8 *)piVar11;
        uVar12 = (uint)piVar11[1] & uVar15;
        if (uVar18 < uVar12) goto LAB_7100054dd8;
LAB_7100054f80:
        if (uVar18 - uVar12 < uVar19) {
          *(undefined8 *)piVar11 = uVar6;
          uVar19 = uVar18 - uVar12;
          uVar6 = uVar24;
        }
LAB_7100054f98:
        uVar18 = uVar18 + 1;
        uVar19 = uVar19 + 1;
        if (uVar18 < uVar4) goto LAB_7100054e04;
LAB_7100054fa8:
        piVar11 = piVar13;
        if (uVar19 < 0x81) {
          uVar18 = 0;
        }
        else {
          uVar18 = 0;
          if ((*(byte *)((long)param_2 + 0x84) & 1) == 0 && uVar4 != 0) goto LAB_7100054e18;
        }
LAB_7100054f60:
        if (*piVar11 == -1) break;
      } while( true );
    }
  }
  *(undefined8 *)piVar11 = uVar6;
  if (lVar17 == lVar14) {
    lVar17 = *(long *)(lVar16 + -8);
    lVar16 = lVar16 + -8;
    lVar14 = lVar17 + 0x200;
    lVar22 = lVar14;
  }
  param_1[2] = lVar22;
  param_1[3] = lVar16;
  *param_1 = lVar14 + -0x40;
  param_1[1] = lVar17;
  *(undefined1 *)(param_1 + 4) = 1;
  return param_1;
LAB_7100054c34:
  puVar8 = puVar1 + uVar18 * 2;
  uVar19 = uVar19 + 1;
  uVar2 = *puVar8;
  goto joined_r0x007100054c2c;
}



// ===== FUN_71000551b0 @ 71000551b0 (size=92) =====

void FUN_71000551b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_30;
  long local_28 [5];
  
  local_30 = param_2;
  FUN_71000541f0(param_1 + 8,param_2,&local_30);
  local_30 = param_3;
  FUN_7100054bd0(local_28,local_28[0] + 0x20,param_3,&local_30);
  FUN_71007e2260(local_28[0] + 0x20,param_4);
  return;
}



// ===== FUN_7100055210 @ 7100055210 (size=108) =====

void FUN_7100055210(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_30;
  long local_28 [5];
  
  local_30 = param_2;
  FUN_71000541f0(local_28,param_1 + 8,param_2,&local_30);
  local_30 = param_3;
  FUN_7100054bd0(local_28,local_28[0] + 0x20,param_3,&local_30);
  FUN_71007e2260(local_28[0] + 0x20,param_4);
  FUN_71000502c0(param_1);
  return;
}



// ===== FUN_7100055280 @ 7100055280 (size=680) =====

byte FUN_7100055280(long param_1,long param_2,long param_3,byte param_4)

{
  char *pcVar1;
  int iVar2;
  short sVar3;
  undefined8 uVar4;
  long local_80;
  long local_78;
  long *local_70;
  long local_68;
  long local_60 [2];
  long local_50 [5];
  long local_28 [5];
  
  local_50[0] = param_2;
  FUN_71000541f0(local_28,param_1 + 8,param_2,local_50);
  local_50[0] = param_3;
  FUN_7100054bd0(local_28,local_28[0] + 0x20,param_3,local_50);
  local_70 = local_60;
  FUN_710004f860(&local_70,*(undefined8 *)(local_28[0] + 0x20),*(undefined8 *)(local_28[0] + 0x28));
  if (local_68 == 4) {
    iVar2 = (int)*local_70;
    if (((iVar2 == 0x65757274) || (iVar2 == 0x45555254)) || (iVar2 == 0x65757254)) {
LAB_7100055340:
      param_4 = 1;
      goto LAB_7100055344;
    }
  }
  else if (local_68 == 3) {
    sVar3 = (short)*local_70;
    if ((((sVar3 == 0x6579) && (*(char *)((long)local_70 + 2) == 's')) ||
        ((sVar3 == 0x4559 && (*(char *)((long)local_70 + 2) == 'S')))) ||
       ((sVar3 == 0x6559 && (*(char *)((long)local_70 + 2) == 's')))) goto LAB_7100055340;
  }
  else if (local_68 == 1) {
    if ((char)*local_70 == '1') goto LAB_7100055340;
    if ((char)*local_70 == '0') {
LAB_7100055448:
      param_4 = 0;
      goto LAB_7100055344;
    }
  }
  else if (local_68 == 5) {
    iVar2 = (int)*local_70;
    if ((iVar2 == 0x736c6166) && (*(char *)((long)local_70 + 4) == 'e')) {
      param_4 = 0;
      goto LAB_7100055344;
    }
    if ((iVar2 == 0x534c4146) && (*(char *)((long)local_70 + 4) == 'E')) {
      param_4 = 0;
      goto LAB_7100055344;
    }
    if ((iVar2 == 0x736c6146) && (*(char *)((long)local_70 + 4) == 'e')) {
      param_4 = 0;
      goto LAB_7100055344;
    }
  }
  else if (local_68 == 2) {
    sVar3 = (short)*local_70;
    if ((sVar3 == 0x6f6e) || (sVar3 == 0x4f4e)) goto LAB_7100055448;
    if (sVar3 == 0x6f4e) {
      param_4 = 0;
      goto LAB_7100055344;
    }
  }
  pcVar1 = "False";
  if ((param_4 & 1) != 0) {
    pcVar1 = "True";
  }
  local_80 = param_2;
  FUN_71000541f0(local_50,param_1 + 8,param_2,&local_80);
  local_78 = param_3;
  FUN_7100054bd0(local_28,local_50[0] + 0x20,param_3,&local_78);
  uVar4 = FUN_710081ce00(pcVar1);
  FUN_71007e28e0(local_28[0] + 0x20,0,*(undefined8 *)(local_28[0] + 0x28),pcVar1,uVar4);
LAB_7100055344:
  if (local_70 != local_60) {
    thunk_FUN_710081c200(local_70,local_60[0] + 1);
  }
  return param_4;
}



// ===== FUN_7100055540 @ 7100055540 (size=240) =====

undefined4 FUN_7100055540(void)

{
  undefined4 uVar1;
  undefined4 *local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  long *local_20;
  undefined8 local_18;
  long local_10;
  char local_8;
  undefined1 local_7;
  
  if ((DAT_7100af8500 & 1) == 0) {
    return 1;
  }
  local_30 = 0x74736e49;
  uStack_2c = 0x6c6c61;
  uStack_38 = 7;
  local_7 = 0;
  local_8 = 'Z';
  local_18 = 9;
  local_10._0_1_ = 'E';
  local_10._1_1_ = 'n';
  local_10._2_1_ = 'a';
  local_10._3_1_ = 'b';
  local_10._4_1_ = 'l';
  local_10._5_1_ = 'e';
  local_10._6_1_ = 'N';
  local_10._7_1_ = 'S';
  local_40 = &local_30;
  local_20 = &local_10;
  uVar1 = FUN_7100055280(&DAT_7100af82d8,&local_40,&local_20);
  if (local_20 != &local_10) {
    thunk_FUN_710081c200(local_20,local_10 + 1);
  }
  if (local_40 != &local_30) {
    thunk_FUN_710081c200(local_40,CONCAT44(uStack_2c,local_30) + 1);
  }
  return uVar1;
}



// ===== FUN_7100055650 @ 7100055650 (size=928) =====

ulong FUN_7100055650(long param_1,long param_2,long param_3,ulong *param_4)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long local_148;
  long local_140;
  long *local_138;
  long local_130;
  long local_128 [2];
  ulong *local_118;
  ulong local_110;
  ulong local_108 [2];
  long local_f8 [5];
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
  undefined1 uStack_18;
  undefined7 uStack_17;
  undefined1 uStack_10;
  char acStack_f [15];
  
  local_f8[0] = param_2;
  FUN_71000541f0(&local_d0,param_1 + 8,param_2,local_f8);
  local_f8[0] = param_3;
  FUN_7100054bd0(&local_d0,local_d0 + 0x20,param_3,local_f8);
  local_138 = local_128;
  FUN_710004f860(&local_138,*(undefined8 *)(local_d0 + 0x20),*(undefined8 *)(local_d0 + 0x28));
  if (local_130 != 0) {
    uVar4 = FUN_710080daa0(local_138,0,10);
    if (uVar4 == 0) {
      if (local_130 == 1) {
        if ((char)*local_138 != '0') {
          uVar4 = *param_4;
        }
      }
      else {
        uVar4 = *param_4;
      }
    }
    goto LAB_71000556ec;
  }
  uVar4 = *param_4;
  if (uVar4 < 10) {
    uVar9 = 1;
  }
  else {
    uVar9 = 1;
    for (uVar5 = uVar4; iVar7 = (int)uVar9, 99 < uVar5; uVar5 = uVar5 / 10000) {
      if (uVar5 < 1000) {
        uVar9 = (ulong)(iVar7 + 2);
        goto LAB_710005579c;
      }
      if (uVar5 < 10000) {
        uVar9 = (ulong)(iVar7 + 3);
        goto LAB_710005579c;
      }
      uVar9 = (ulong)(iVar7 + 4);
      if (uVar5 < 100000) goto LAB_710005579c;
    }
    uVar9 = (ulong)(iVar7 + 1);
  }
LAB_710005579c:
  local_110 = 0;
  local_108[0] = local_108[0] & 0xffffffffffffff00;
  local_118 = local_108;
  FUN_71007e25c0(&local_118,uVar9);
  puVar6 = local_118;
  uStack_c8 = 0x3730363035303430;
  local_d0 = 0x3330323031303030;
  uStack_b8 = 0x3531343133313231;
  local_c0 = 0x3131303139303830;
  uStack_a8 = 0x3332323231323032;
  uStack_b0 = 0x3931383137313631;
  uStack_98 = 0x3133303339323832;
  local_a0 = 0x3732363235323432;
  uStack_88 = 0x3933383337333633;
  uStack_90 = 0x3533343333333233;
  local_80 = 0x3334323431343034;
  uStack_78 = 0x3734363435343434;
  uStack_68 = 0x3535343533353235;
  uStack_70 = 0x3135303539343834;
  uStack_58 = 0x3336323631363036;
  local_60 = 0x3935383537353635;
  uStack_48 = 0x3137303739363836;
  uStack_50 = 0x3736363635363436;
  uStack_38 = 0x3937383737373637;
  local_40 = 0x3537343733373237;
  uStack_28 = 0x3738363835383438;
  uStack_30 = 0x3338323831383038;
  local_20 = 0x3139303939383838;
  uStack_18 = 0x39;
  uStack_17 = 0x35393439333932;
  uStack_10 = 0x39;
  builtin_strncpy(acStack_f,"6979899",8);
  if (99 < uVar4) {
    uVar8 = (int)uVar9 - 1;
    uVar5 = uVar4;
    do {
      uVar4 = uVar5 / 100;
      lVar10 = (ulong)(uint)((int)uVar5 + (int)uVar4 * -100) * 2;
      cVar3 = *(char *)((long)&local_d0 + lVar10);
      *(char *)((long)local_118 + (ulong)uVar8) = *(char *)((long)&local_d0 + lVar10 + 1);
      uVar2 = uVar8 - 1;
      uVar8 = uVar8 - 2;
      *(char *)((long)local_118 + (ulong)uVar2) = cVar3;
      bVar1 = 9999 < uVar5;
      uVar5 = uVar4;
    } while (bVar1);
  }
  cVar3 = (char)uVar4 + '0';
  if (9 < uVar4) {
    lVar10 = (uVar4 & 0xffffffff) * 2;
    *(char *)((long)local_118 + 1) = *(char *)((long)&local_d0 + lVar10 + 1);
    cVar3 = *(char *)((long)&local_d0 + lVar10);
  }
  *(char *)puVar6 = cVar3;
  *(char *)((long)local_118 + uVar9) = '\0';
  local_148 = param_2;
  local_110 = uVar9;
  FUN_71000541f0(local_f8,param_1 + 8,param_2,&local_148);
  local_140 = param_3;
  FUN_7100054bd0(&local_d0,local_f8[0] + 0x20,param_3,&local_140);
  lVar10 = local_d0;
  puVar6 = *(ulong **)(local_d0 + 0x20);
  if (puVar6 == (ulong *)(local_d0 + 0x30)) {
    if (local_118 == local_108) goto LAB_710005599c;
    *(ulong **)(local_d0 + 0x20) = local_118;
    *(ulong *)(local_d0 + 0x28) = local_110;
    *(ulong *)(local_d0 + 0x30) = local_108[0];
    local_118 = local_108;
  }
  else if (local_118 == local_108) {
LAB_710005599c:
    if (&local_118 != (ulong **)(local_d0 + 0x20)) {
      if (local_110 != 0) {
        if (local_110 == 1) {
          *(char *)puVar6 = (char)local_108[0];
        }
        else {
          FUN_710080f900(puVar6,local_108);
        }
        puVar6 = *(ulong **)(lVar10 + 0x20);
      }
      *(ulong *)(lVar10 + 0x28) = local_110;
      *(char *)((long)puVar6 + local_110) = '\0';
    }
  }
  else {
    uVar4 = *(ulong *)(local_d0 + 0x30);
    *(ulong **)(local_d0 + 0x20) = local_118;
    *(ulong *)(local_d0 + 0x28) = local_110;
    *(ulong *)(local_d0 + 0x30) = local_108[0];
    local_118 = local_108;
    if (puVar6 != (ulong *)0x0) {
      local_118 = puVar6;
      local_108[0] = uVar4;
    }
  }
  *(char *)local_118 = '\0';
  if (local_118 != local_108) {
    thunk_FUN_710081c200(local_118,local_108[0] + 1);
  }
  uVar4 = *param_4;
LAB_71000556ec:
  if (local_138 != local_128) {
    thunk_FUN_710081c200(local_138,local_128[0] + 1);
  }
  return uVar4;
}



// ===== FUN_7100055a10 @ 7100055a10 (size=416) =====

void FUN_7100055a10(long *param_1,ulong param_2,uint param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  
  plVar11 = (long *)param_1[5];
  lVar8 = param_1[9];
  uVar6 = param_1[1];
  lVar10 = lVar8 - (long)plVar11;
  lVar3 = (lVar10 >> 3) + 1 + param_2;
  if ((ulong)(lVar3 * 2) < uVar6) {
    lVar9 = *param_1;
    lVar7 = (uVar6 - lVar3 >> 1) * 8;
    lVar8 = (lVar8 + 8) - (long)plVar11;
    lVar3 = lVar7 + param_2 * 8;
    if ((param_3 & 1) == 0) {
      lVar3 = lVar7;
    }
    plVar5 = (long *)(lVar9 + lVar3);
    if (plVar5 < plVar11) {
      if (8 < lVar8) {
        FUN_710080f900(plVar5,plVar11);
        lVar3 = *(long *)(lVar9 + lVar3);
        goto LAB_7100055b18;
      }
      if (lVar8 == 8) {
        lVar3 = *plVar11;
        *plVar5 = lVar3;
        goto LAB_7100055b18;
      }
    }
    else {
      plVar1 = (long *)((long)plVar5 + lVar10 + 8 + ((lVar8 << 0x3d) - lVar8));
      if (8 < lVar8) {
        FUN_710080f900(plVar1,plVar11);
        lVar3 = *plVar5;
        goto LAB_7100055b18;
      }
      if (lVar8 == 8) {
        *plVar1 = *plVar11;
        lVar3 = *plVar5;
        goto LAB_7100055b18;
      }
    }
  }
  else {
    uVar2 = uVar6;
    if (uVar6 < param_2) {
      uVar2 = param_2;
    }
    lVar7 = uVar2 + uVar6 + 2;
    lVar9 = FUN_71007af5c0(lVar7 * 8);
    lVar4 = ((ulong)(lVar7 - lVar3) >> 1) * 8;
    lVar8 = (lVar8 + 8) - (long)plVar11;
    lVar3 = lVar4 + param_2 * 8;
    if ((param_3 & 1) == 0) {
      lVar3 = lVar4;
    }
    plVar5 = (long *)(lVar9 + lVar3);
    if (lVar8 < 9) {
      if (lVar8 == 8) {
        *plVar5 = *plVar11;
      }
    }
    else {
      FUN_710080f900(plVar5,plVar11);
    }
    thunk_FUN_710081c200(*param_1,uVar6 << 3);
    *param_1 = lVar9;
    param_1[1] = lVar7;
  }
  lVar3 = *plVar5;
LAB_7100055b18:
  param_1[5] = (long)plVar5;
  param_1[3] = lVar3;
  param_1[4] = lVar3 + 0x1e0;
  param_1[9] = (long)plVar5 + lVar10;
  lVar3 = *(long *)((long)plVar5 + lVar10);
  param_1[7] = lVar3;
  param_1[8] = lVar3 + 0x1e0;
  return;
}



// ===== FUN_7100055bb0 @ 7100055bb0 (size=1480) =====

void FUN_7100055bb0(long param_1,ulong param_2,undefined8 param_3)

{
  long *plVar1;
  uint *puVar2;
  long lVar3;
  undefined8 uVar4;
  uint *puVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  ulong *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  float fVar18;
  undefined8 uVar19;
  
  plVar1 = (long *)(param_1 + 0x90);
  uVar10 = 0;
  puVar2 = *(uint **)(param_1 + 0xa8);
  uVar9 = *(ulong *)(param_1 + 0xb0) & param_2;
  uVar17 = puVar2[uVar9 * 2];
  puVar5 = puVar2 + uVar9 * 2;
joined_r0x007100055be8:
  if (uVar17 != 0xffffffff) {
    do {
      uVar6 = (ulong)(puVar5[1] & (uint)*(ulong *)(param_1 + 0xb0));
      lVar3 = -uVar6;
      if (uVar9 < uVar6) {
        lVar3 = (*(long *)(param_1 + 0x98) - *plVar1 >> 3) - uVar6;
      }
      if (uVar9 + lVar3 < uVar10) break;
      if (puVar5[1] == (uint)param_2) {
        lVar3 = *(long *)(param_1 + 200);
        uVar6 = (ulong)uVar17 + (lVar3 - *(long *)(param_1 + 0xd0) >> 3) * -0x3333333333333333;
        if ((long)uVar6 < 0) {
          uVar11 = ~(~uVar6 / 0xc);
LAB_7100055edc:
          puVar13 = (ulong *)(*(long *)(*(long *)(param_1 + 0xe0) + uVar11 * 8) +
                             (uVar6 + uVar11 * -0xc) * 0x28);
        }
        else {
          if (0xb < (long)uVar6) {
            uVar11 = (long)uVar6 / 0xc;
            goto LAB_7100055edc;
          }
          puVar13 = (ulong *)(lVar3 + (ulong)uVar17 * 0x28);
        }
        if (*puVar13 == param_2) {
          if ((long)uVar6 < 0) {
            uVar9 = ~(~uVar6 / 0xc);
          }
          else {
            if ((long)uVar6 < 0xc) {
              lVar3 = lVar3 + (ulong)uVar17 * 0x28;
              goto LAB_7100055e50;
            }
            uVar9 = (long)uVar6 / 0xc;
          }
          lVar3 = *(long *)(*(long *)(param_1 + 0xe0) + uVar9 * 8) + (uVar6 + uVar9 * -0xc) * 0x28;
          goto LAB_7100055e50;
        }
      }
      uVar9 = uVar9 + 1;
      if (uVar9 < (ulong)(*(long *)(param_1 + 0x98) - *plVar1 >> 3)) goto LAB_7100055c0c;
      uVar9 = 0;
      uVar17 = *puVar2;
      uVar10 = uVar10 + 1;
      puVar5 = puVar2;
      if (uVar17 == 0xffffffff) break;
    } while( true );
  }
  puVar13 = *(ulong **)(param_1 + 0xe8);
  uVar6 = ((long)puVar13 - *(long *)(param_1 + 0xf0) >> 3) * -0x3333333333333333 +
          ((*(long *)(param_1 + 0x100) - *(long *)(param_1 + 0xe0) >> 3) -
          (ulong)(*(long *)(param_1 + 0x100) != 0)) * 0xc +
          (*(long *)(param_1 + 0xd8) - *(long *)(param_1 + 200) >> 3) * -0x3333333333333333;
  if (0xfffffffd < uVar6) {
    uVar4 = FUN_71007adf60(0x10);
    FUN_71007b6480(uVar4,"We reached the maximum size for the hash table.");
                    /* WARNING: Subroutine does not return */
    FUN_71007af000(uVar4,&PTR_PTR_FUN_7100ae7568,FUN_71007b0940);
  }
  if (((*(byte *)(param_1 + 0x114) & 1) == 0) && (uVar6 < *(ulong *)(param_1 + 0x108))) {
    if (puVar13 == (ulong *)(*(long *)(param_1 + 0xf8) + -0x28)) {
LAB_7100055fdc:
      lVar3 = *(long *)(param_1 + 0x100);
      if (((long)puVar13 - *(long *)(param_1 + 0xf0) >> 3) * -0x3333333333333333 +
          ((lVar3 - *(long *)(param_1 + 0xe0) >> 3) - (ulong)(lVar3 != 0)) * 0xc +
          (*(long *)(param_1 + 0xd8) - *(long *)(param_1 + 200) >> 3) * -0x3333333333333333 ==
          0x333333333333333) {
                    /* WARNING: Subroutine does not return */
        FUN_7100003b58("cannot create std::deque larger than max_size()");
      }
      if ((ulong)(*(long *)(param_1 + 0xc0) - (lVar3 - *(long *)(param_1 + 0xb8) >> 3)) < 2) {
        FUN_7100055a10(param_1 + 0xb8,1,0);
        lVar3 = *(long *)(param_1 + 0x100);
      }
      uVar4 = FUN_71007af5c0(0x1e0);
      *(undefined8 *)(lVar3 + 8) = uVar4;
      puVar13 = *(ulong **)(param_1 + 0xe8);
      *puVar13 = param_2;
      puVar13[1] = (ulong)(puVar13 + 3);
      lVar7 = 0;
      puVar13[2] = 0;
      *(undefined1 *)(puVar13 + 3) = 0;
      lVar15 = *(long *)(param_1 + 0x100) + 8;
      lVar3 = *(long *)(*(long *)(param_1 + 0x100) + 8);
      *(long *)(param_1 + 0xf0) = lVar3;
      *(long *)(param_1 + 0xf8) = lVar3 + 0x1e0;
      *(long *)(param_1 + 0x100) = lVar15;
      *(long *)(param_1 + 0xe8) = lVar3;
      uVar6 = 1;
      lVar16 = lVar3;
      goto LAB_7100055d54;
    }
  }
  else {
    lVar3 = (*(long *)(param_1 + 0x98) - *(long *)(param_1 + 0x90) >> 3) * 2;
    if (lVar3 == 0) {
      lVar3 = 1;
    }
    FUN_7100053da0(plVar1,lVar3);
    uVar10 = 0;
    *(undefined1 *)(param_1 + 0x114) = 0;
    puVar13 = *(ulong **)(param_1 + 0xe8);
    uVar9 = param_2 & *(ulong *)(param_1 + 0xb0);
    if (puVar13 == (ulong *)(*(long *)(param_1 + 0xf8) + -0x28)) goto LAB_7100055fdc;
  }
  *puVar13 = param_2;
  puVar13[1] = (ulong)(puVar13 + 3);
  puVar13[2] = 0;
  *(undefined1 *)(puVar13 + 3) = 0;
  lVar15 = *(long *)(param_1 + 0x100);
  lVar3 = *(long *)(param_1 + 0xe8) + 0x28;
  *(long *)(param_1 + 0xe8) = lVar3;
  uVar6 = (ulong)(lVar15 != 0);
  lVar7 = (lVar3 - *(long *)(param_1 + 0xf0) >> 3) * -0x3333333333333333;
  lVar16 = *(long *)(param_1 + 0xf0);
LAB_7100055d54:
  lVar7 = lVar7 + ((lVar15 - *(long *)(param_1 + 0xe0) >> 3) - uVar6) * 0xc +
          (*(long *)(param_1 + 0xd8) - *(long *)(param_1 + 200) >> 3) * -0x3333333333333333;
  uVar4 = CONCAT44((uint)param_2,(int)lVar7 + -1);
  piVar12 = *(int **)(param_1 + 0xa8);
  piVar8 = piVar12 + uVar9 * 2;
  if (piVar12[uVar9 * 2] != -1) {
    uVar14 = *(ulong *)(param_1 + 0xb0);
    uVar19 = *(undefined8 *)(piVar12 + uVar9 * 2);
    uVar11 = *(long *)(param_1 + 0x98) - *(long *)(param_1 + 0x90) >> 3;
    uVar6 = (uint)piVar8[1] & uVar14;
    if (uVar6 <= uVar9) goto LAB_7100055f30;
LAB_7100055dd0:
    uVar6 = (uVar9 + uVar11) - uVar6;
    if (uVar10 <= uVar6) goto LAB_7100055f48;
    uVar9 = uVar9 + 1;
    *(undefined8 *)piVar8 = uVar4;
    uVar10 = uVar6 + 1;
    uVar4 = uVar19;
    if (uVar11 <= uVar9) goto LAB_7100055f58;
LAB_7100055dfc:
    piVar8 = piVar12 + uVar9 * 2;
    if (uVar10 < 0x81) goto LAB_7100055f10;
    if ((*(byte *)(param_1 + 0x114) & 1) != 0) goto LAB_7100055f10;
LAB_7100055e10:
    fVar18 = (float)lVar7 / (float)(long)uVar11;
    if (fVar18 < 0.15 == NAN(fVar18)) {
      *(undefined1 *)(param_1 + 0x114) = 1;
      goto LAB_7100055f10;
    }
    if (*piVar8 != -1) {
      do {
        uVar19 = *(undefined8 *)piVar8;
        uVar6 = (uint)piVar8[1] & uVar14;
        if (uVar9 < uVar6) goto LAB_7100055dd0;
LAB_7100055f30:
        if (uVar9 - uVar6 < uVar10) {
          *(undefined8 *)piVar8 = uVar4;
          uVar10 = uVar9 - uVar6;
          uVar4 = uVar19;
        }
LAB_7100055f48:
        uVar9 = uVar9 + 1;
        uVar10 = uVar10 + 1;
        if (uVar9 < uVar11) goto LAB_7100055dfc;
LAB_7100055f58:
        piVar8 = piVar12;
        if (uVar10 < 0x81) {
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
          if ((*(byte *)(param_1 + 0x114) & 1) == 0 && uVar11 != 0) goto LAB_7100055e10;
        }
LAB_7100055f10:
        if (*piVar8 == -1) break;
      } while( true );
    }
  }
  *(undefined8 *)piVar8 = uVar4;
  if (lVar3 == lVar16) {
    lVar3 = *(long *)(lVar15 + -8) + 0x1e0;
  }
  lVar3 = lVar3 + -0x28;
LAB_7100055e50:
  FUN_71007e2260(lVar3 + 8,param_3);
  return;
LAB_7100055c0c:
  puVar5 = puVar2 + uVar9 * 2;
  uVar10 = uVar10 + 1;
  uVar17 = *puVar5;
  goto joined_r0x007100055be8;
}



// ===== FUN_7100056190 @ 7100056190 (size=4112) =====

void FUN_7100056190(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  uint *puVar6;
  undefined2 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  undefined1 uVar11;
  undefined5 uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  int *piVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  ulong uVar22;
  uint *puVar23;
  ulong *puVar24;
  long *plVar25;
  uint uVar26;
  ulong uVar27;
  char *pcVar28;
  char *pcVar29;
  byte *pbVar30;
  char cVar31;
  undefined4 uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  long *plVar37;
  float fVar38;
  undefined8 uVar39;
  undefined1 auVar40 [16];
  long *local_90;
  long local_80 [2];
  long *local_70;
  undefined8 local_68;
  long local_60;
  char local_58 [8];
  long *local_50;
  undefined8 uStack_48;
  long local_40;
  undefined8 *local_38;
  undefined4 local_30;
  undefined2 uStack_2c;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined2 uStack_28;
  undefined1 uStack_26;
  undefined5 uStack_25;
  undefined8 local_20;
  ulong local_18 [3];
  undefined4 *puVar16;
  
  puVar4 = DAT_7100af82e8;
  puVar15 = DAT_7100af82e0;
  if (DAT_7100af82e0 != DAT_7100af82e8) {
    do {
      puVar16 = puVar15 + 2;
      *puVar15 = 0xffffffff;
      puVar15 = puVar16;
    } while (puVar16 != puVar4);
  }
  puVar5 = DAT_7100af8330;
  lVar18 = DAT_7100af8328;
  uVar21 = DAT_7100af8320;
  plVar25 = DAT_7100af8318;
  uStack_48 = DAT_7100af8320;
  local_50 = DAT_7100af8318;
  local_38 = DAT_7100af8330;
  local_40 = DAT_7100af8328;
  uStack_28 = (undefined2)DAT_7100af8340;
  uStack_26 = (undefined1)((ulong)DAT_7100af8340 >> 0x10);
  uStack_25 = (undefined5)((ulong)DAT_7100af8340 >> 0x18);
  local_30 = (uint)DAT_7100af8338;
  uStack_2c = (undefined2)((ulong)DAT_7100af8338 >> 0x20);
  uStack_2a = (undefined1)((ulong)DAT_7100af8338 >> 0x30);
  uStack_29 = (undefined1)((ulong)DAT_7100af8338 >> 0x38);
  local_20 = DAT_7100af8348;
  local_18[0] = (ulong)DAT_7100af8350;
  FUN_71000508b0(&local_50,&local_30);
  puVar20 = (undefined8 *)((long)DAT_7100af8350 + 8);
  puVar2 = puVar5;
  while (puVar2 = puVar2 + 1, puVar2 < puVar20) {
    thunk_FUN_710081c200(*puVar2,0x1f8);
  }
  DAT_7100af8364 = 0;
  DAT_7100af8338 = plVar25;
  DAT_7100af8340 = uVar21;
  DAT_7100af8350 = puVar5;
  DAT_7100af8348 = lVar18;
  if (*(long *)(param_1 + 8) == 0) {
    puVar20 = (undefined8 *)FUN_71007af5c0(0x30);
    *puVar20 = 0;
    puVar20[1] = 0;
    puVar20[2] = 0;
    puVar20[3] = 0;
    puVar20[4] = 0;
    puVar20[5] = 0;
    bVar1 = DAT_7100af82d8 == (undefined8 *)0x0;
    DAT_7100af82d8 = puVar20;
    if (bVar1) goto LAB_710005631c;
    FUN_710004ef30();
    plVar25 = (long *)DAT_7100af82d8[3];
    plVar37 = (long *)DAT_7100af82d8[4];
  }
  else {
    FUN_71005f4da0(&local_30,param_1);
    puVar20 = (undefined8 *)CONCAT17(uStack_29,CONCAT16(uStack_2a,CONCAT24(uStack_2c,local_30)));
    local_30 = 0;
    uStack_2c = 0;
    uStack_2a = 0;
    uStack_29 = 0;
    bVar1 = DAT_7100af82d8 != (undefined8 *)0x0;
    DAT_7100af82d8 = puVar20;
    if ((bVar1) &&
       (FUN_710004ef30(), CONCAT17(uStack_29,CONCAT16(uStack_2a,CONCAT24(uStack_2c,local_30))) != 0)
       ) {
      FUN_710004ef30();
    }
    plVar25 = (long *)DAT_7100af82d8[3];
    plVar37 = (long *)DAT_7100af82d8[4];
  }
  for (; plVar37 != plVar25; plVar25 = plVar25 + 1) {
    piVar17 = (int *)*plVar25;
    if (*piVar17 == 1) {
      puVar2 = *(undefined8 **)(piVar17 + 0xc);
      for (puVar20 = *(undefined8 **)(piVar17 + 10); puVar2 != puVar20; puVar20 = puVar20 + 1) {
        piVar17 = (int *)*puVar20;
        if (*piVar17 == 1) {
          FUN_71000551b0(&DAT_7100af82d8,*plVar25 + 8,piVar17 + 2,piVar17 + 10);
        }
      }
    }
  }
LAB_710005631c:
  uVar21 = 0xd9544a590e4479eb;
  uStack_28 = 0x8669;
  uStack_26 = 0xc9;
  lVar18 = FUN_710076d158();
  local_30 = (uint)uVar21;
  uStack_2c = (undefined2)((ulong)uVar21 >> 0x20);
  uStack_2a = (undefined1)((ulong)uVar21 >> 0x30);
  uStack_29 = (undefined1)((ulong)uVar21 >> 0x38);
  if ((*(ulong *)(lVar18 + 0xb8) & 1) == 0) {
    *(undefined1 *)(lVar18 + 0xcb) = 1;
    *(undefined8 *)(lVar18 + 0xc0) = uVar21;
    *(uint *)(lVar18 + 199) = CONCAT13(uStack_26,CONCAT21(uStack_28,uStack_29));
    *(undefined8 *)(lVar18 + 0xb8) = 1;
    FUN_71007ad7e0(&DAT_710004eab0,lVar18 + 0xc0,0);
  }
  lVar18 = FUN_710076d158();
  if ((*(byte *)(lVar18 + 0xcb) & 1) != 0) {
    uVar35 = 0x215fbf1fcb43878f;
    uVar27 = 0;
    do {
      uVar27 = (uVar27 & 7) << 3;
      auVar40 = FUN_710076d158();
      lVar19 = auVar40._8_8_;
      lVar18 = auVar40._0_8_;
      *(byte *)(lVar19 + lVar18 + 0xc0) =
           (char)(auVar40._8_4_ >> 3) + (char)(uVar35 >> (uVar27 & 0x3f)) ^
           *(byte *)(lVar19 + lVar18 + 0xc0);
      uVar27 = lVar19 + 1;
    } while (uVar27 != 0xb);
    cVar31 = *(char *)(lVar18 + 0xc0);
    pcVar28 = (char *)(lVar18 + 0xc1);
    do {
      cVar31 = cVar31 + *pcVar28;
      pcVar29 = pcVar28 + 1;
      *pcVar28 = cVar31;
      pcVar28 = pcVar29;
    } while ((char *)(lVar18 + 0xcb) != pcVar29);
    lVar18 = FUN_710076d158();
    *(undefined1 *)(lVar18 + 0xcb) = 0;
  }
  lVar18 = FUN_710076d158();
  local_30 = (uint)&local_20;
  uVar14 = local_30;
  uStack_2c = (undefined2)((ulong)&local_20 >> 0x20);
  uVar7 = uStack_2c;
  uStack_2a = (undefined1)((ulong)&local_20 >> 0x30);
  uVar8 = uStack_2a;
  uStack_29 = (undefined1)((ulong)&local_20 >> 0x38);
  uVar9 = uStack_29;
  lVar19 = FUN_710081ce00(lVar18 + 0xc0);
  if (lVar19 == 1) {
    local_20 = CONCAT71(local_20._1_7_,*(undefined1 *)(lVar18 + 0xc0));
  }
  else if (lVar19 != 0) {
    FUN_710080f900(&local_20,lVar18 + 0xc0,lVar19);
  }
  uStack_28 = (undefined2)lVar19;
  uStack_26 = (undefined1)((ulong)lVar19 >> 0x10);
  uStack_25 = (undefined5)((ulong)lVar19 >> 0x18);
  *(undefined1 *)((long)&local_20 + lVar19) = 0;
  puVar20 = (undefined8 *)FUN_71007e28e0(&local_30,0,0,DAT_7100af84c0,DAT_7100af84c8);
  plVar25 = puVar20 + 2;
  if ((long *)*puVar20 == plVar25) {
    FUN_710080f900(local_80,plVar25,puVar20[1] + 1);
    local_90 = local_80;
  }
  else {
    local_80[0] = puVar20[2];
    local_90 = (long *)*puVar20;
  }
  uVar21 = puVar20[1];
  *(undefined1 *)(puVar20 + 2) = 0;
  *puVar20 = plVar25;
  puVar20[1] = 0;
  puVar20 = (undefined8 *)CONCAT17(uStack_29,CONCAT16(uStack_2a,CONCAT24(uStack_2c,local_30)));
  if (puVar20 != &local_20) {
    thunk_FUN_710081c200(puVar20,local_20 + 1);
  }
  local_40._0_1_ = 'S';
  local_40._1_1_ = 'a';
  local_40._2_1_ = 'v';
  local_40._3_1_ = 'e';
  local_40._4_1_ = 'd';
  local_40._5_1_ = ' ';
  local_40._6_1_ = 'v';
  local_40._7_1_ = 'a';
  uStack_48 = 0xc;
  local_38 = (undefined8 *)CONCAT35(local_38._5_3_,0x7365756c);
  local_20._0_1_ = 't';
  local_20._1_1_ = 'i';
  local_20._2_1_ = 't';
  local_20._3_1_ = 'l';
  local_20._4_1_ = 'e';
  local_20._5_1_ = 'd';
  local_20._6_1_ = 'b';
  local_20._7_1_ = 'f';
  uStack_28 = 0xc;
  uStack_26 = 0;
  uStack_25 = 0;
  local_18[0] = CONCAT35(local_18[0]._5_3_,0x64657869);
  local_50 = &local_40;
  local_30 = uVar14;
  uStack_2c = uVar7;
  uStack_2a = uVar8;
  uStack_29 = uVar9;
  uVar13 = FUN_7100055280(&DAT_7100af82d8,&local_50,&local_30,0);
  puVar20 = (undefined8 *)CONCAT17(uStack_29,CONCAT16(uStack_2a,CONCAT24(uStack_2c,local_30)));
  if (puVar20 != &local_20) {
    thunk_FUN_710081c200(puVar20,local_20 + 1);
  }
  if (local_50 != &local_40) {
    thunk_FUN_710081c200(local_50,local_40 + 1);
  }
  if ((uVar13 & 1) == 0) {
    lVar18 = FUN_7100189350();
    FUN_710010b3a0(lVar18 + 0x60,uVar21,local_90);
    local_60._0_1_ = 'S';
    local_60._1_1_ = 'a';
    local_60._2_1_ = 'v';
    local_60._3_1_ = 'e';
    local_60._4_1_ = 'd';
    local_60._5_1_ = ' ';
    local_60._6_1_ = 'v';
    local_60._7_1_ = 'a';
    local_40._0_1_ = 't';
    local_40._1_1_ = 'i';
    local_40._2_1_ = 't';
    local_40._3_1_ = 'l';
    local_40._4_1_ = 'e';
    local_40._5_1_ = 'd';
    local_40._6_1_ = 'b';
    local_40._7_1_ = 'f';
    local_20._4_4_ = (uint)((ulong)local_20 >> 0x20) & 0xffffff00;
    builtin_strncpy(local_58,"lues",5);
    local_68 = 0xc;
    uStack_48 = 0xc;
    local_38 = (undefined8 *)CONCAT35(local_38._5_3_,0x64657869);
    local_20 = CONCAT44(local_20._4_4_,0x65757274);
    uStack_28 = 4;
    uStack_26 = 0;
    uStack_25 = 0;
    local_70 = &local_60;
    local_50 = &local_40;
    local_30 = uVar14;
    uStack_2c = uVar7;
    uStack_2a = uVar8;
    uStack_29 = uVar9;
    FUN_7100055210(&DAT_7100af82d8,&local_70,&local_50,&local_30);
    puVar20 = (undefined8 *)CONCAT17(uStack_29,CONCAT16(uStack_2a,CONCAT24(uStack_2c,local_30)));
    if (puVar20 != &local_20) {
      thunk_FUN_710081c200(puVar20,local_20 + 1);
    }
    if (local_50 != &local_40) {
      thunk_FUN_710081c200(local_50,local_40 + 1);
    }
    if (local_70 != &local_60) {
      thunk_FUN_710081c200(local_70,local_60 + 1);
    }
  }
  uVar27 = FUN_710010b550(uVar21,local_90);
  if ((uVar27 & 1) == 0) {
    plVar25 = (long *)FUN_71007af5c0(0x30);
    *plVar25 = 0;
    plVar25[1] = 0;
    plVar25[2] = 0;
    plVar25[3] = 0;
    plVar25[4] = 0;
    plVar25[5] = 0;
LAB_71000568a8:
    local_70 = (long *)0x0;
    thunk_FUN_710075d530(&local_70);
    FUN_710075d750(local_70,&DAT_7100af8440);
    lVar18 = FUN_710076d158();
    if ((*(ulong *)(lVar18 + 0xd0) & 1) == 0) {
      *(undefined1 *)(lVar18 + 0xe4) = 1;
      *(undefined4 *)(lVar18 + 0xe0) = 0xe52432e6;
      *(undefined8 *)(lVar18 + 0xd0) = 1;
      FUN_71007ad7e0(&DAT_710004eac0,lVar18 + 0xe0,0);
    }
    lVar18 = FUN_710076d158();
    if ((*(byte *)(lVar18 + 0xe4) & 1) != 0) {
      lVar19 = 0;
      *(uint *)(lVar18 + 0xe0) = *(uint *)(lVar18 + 0xe0) ^ 0xe5b5b7eb;
      puVar23 = (uint *)(lVar18 + 0xe0);
      do {
        lVar19 = lVar19 + 1;
        *(byte *)puVar23 = (byte)*puVar23 * '@' + ((byte)*puVar23 >> 2);
        puVar23 = (uint *)((long)puVar23 + 1);
      } while (lVar19 != 4);
      lVar18 = FUN_710076d158();
      *(undefined1 *)(lVar18 + 0xe4) = 0;
    }
    lVar18 = FUN_710076d158();
    local_30 = uVar14;
    uStack_2c = uVar7;
    uStack_2a = uVar8;
    uStack_29 = uVar9;
    lVar19 = FUN_710081ce00(lVar18 + 0xe0);
    if (lVar19 == 1) {
      local_20 = CONCAT71(local_20._1_7_,*(undefined1 *)(lVar18 + 0xe0));
    }
    else if (lVar19 != 0) {
      FUN_710080f900(&local_20,lVar18 + 0xe0,lVar19);
    }
    uStack_28 = (undefined2)lVar19;
    uStack_26 = (undefined1)((ulong)lVar19 >> 0x10);
    uStack_25 = (undefined5)((ulong)lVar19 >> 0x18);
    *(undefined1 *)((long)&local_20 + lVar19) = 0;
    uVar13 = FUN_710013c370(&local_50,&local_30);
    puVar20 = (undefined8 *)CONCAT17(uStack_29,CONCAT16(uStack_2a,CONCAT24(uStack_2c,local_30)));
    if (puVar20 != &local_20) {
      thunk_FUN_710081c200(puVar20,local_20 + 1);
    }
    if ((uVar13 & 1) != 0) {
      DAT_7100af8448 = 1;
      DAT_7100af8440 = 10;
    }
    lVar18 = FUN_710076d158();
    if ((*(ulong *)(lVar18 + 0xe8) & 1) == 0) {
      *(undefined1 *)(lVar18 + 0xf8) = 1;
      *(undefined8 *)(lVar18 + 0xf0) = 0xad6cf0836e7b6a;
      *(undefined8 *)(lVar18 + 0xe8) = 1;
      FUN_71007ad7e0(&DAT_710004ead0,lVar18 + 0xf0,0);
    }
    lVar18 = FUN_710076d158();
    if ((*(byte *)(lVar18 + 0xf8) & 1) != 0) {
      uVar27 = 0;
      pbVar30 = (byte *)(lVar18 + 0xf0);
      do {
        uVar35 = uVar27 & 0x3f;
        uVar13 = (int)uVar27 + 8;
        uVar27 = (ulong)uVar13;
        *pbVar30 = *pbVar30 ^ (byte)(0xd5953fc55fed97eb >> uVar35);
        pbVar30 = pbVar30 + 1;
      } while (uVar13 != 0x40);
      uVar27 = 0;
      pbVar30 = (byte *)(lVar18 + 0xf0);
      do {
        uVar35 = uVar27 & 0x3f;
        uVar13 = (int)uVar27 + 8;
        uVar27 = (ulong)uVar13;
        *pbVar30 = (*pbVar30 - (char)(0xd5953fc55fed97eb >> uVar35)) * -0x3b;
        pbVar30 = pbVar30 + 1;
      } while (uVar13 != 0x40);
      lVar18 = FUN_710076d158();
      *(undefined1 *)(lVar18 + 0xf8) = 0;
    }
    lVar18 = FUN_710076d158();
    local_30 = uVar14;
    uStack_2c = uVar7;
    uStack_2a = uVar8;
    uStack_29 = uVar9;
    lVar19 = FUN_710081ce00(lVar18 + 0xf0);
    if (lVar19 == 1) {
      local_20 = CONCAT71(local_20._1_7_,*(undefined1 *)(lVar18 + 0xf0));
    }
    else if (lVar19 != 0) {
      FUN_710080f900(&local_20,lVar18 + 0xf0,lVar19);
    }
    uStack_28 = (undefined2)lVar19;
    uStack_26 = (undefined1)((ulong)lVar19 >> 0x10);
    uStack_25 = (undefined5)((ulong)lVar19 >> 0x18);
    *(undefined1 *)((long)&local_20 + lVar19) = 0;
    uVar13 = FUN_710013c370(&local_50,&local_30);
    puVar20 = (undefined8 *)CONCAT17(uStack_29,CONCAT16(uStack_2a,CONCAT24(uStack_2c,local_30)));
    if (puVar20 != &local_20) {
      thunk_FUN_710081c200(puVar20,local_20 + 1);
    }
    if ((uVar13 & 1) != 0) {
      DAT_7100af8440 = 1;
    }
    uVar32 = 0xc5d134b1;
    uStack_2a = 0;
    uStack_2c = 0x5307;
    lVar18 = FUN_710076d158();
    local_30 = uVar32;
    if ((*(ulong *)(lVar18 + 0x100) & 1) == 0) {
      *(undefined8 *)(lVar18 + 0x110) = 0x100000000000000;
      local_30._3_1_ = (undefined1)((uint)uVar32 >> 0x18);
      *(undefined4 *)(lVar18 + 0x110) = uVar32;
      *(undefined8 *)(lVar18 + 0x100) = 1;
      *(uint *)(lVar18 + 0x113) = CONCAT13(uStack_2a,CONCAT21(uStack_2c,local_30._3_1_));
      FUN_71007ad7e0(&DAT_710004eae0,lVar18 + 0x110,0);
    }
    lVar18 = FUN_710076d158();
    if ((*(byte *)(lVar18 + 0x117) & 1) != 0) {
      uVar27 = 0;
      pbVar30 = (byte *)(lVar18 + 0x110);
      do {
        uVar35 = uVar27 & 0x3f;
        uVar13 = (int)uVar27 + 8;
        uVar27 = (ulong)uVar13;
        *pbVar30 = *pbVar30 ^ (byte)(0x59f737ab559dab69 >> uVar35);
        pbVar30 = pbVar30 + 1;
      } while (uVar13 != 0x38);
      uVar27 = 0;
      pbVar30 = (byte *)(lVar18 + 0x110);
      do {
        uVar35 = uVar27 & 0x3f;
        uVar13 = (int)uVar27 + 8;
        uVar27 = (ulong)uVar13;
        *pbVar30 = (*pbVar30 - (char)(0x59f737ab559dab69 >> uVar35)) * -0x3b;
        pbVar30 = pbVar30 + 1;
      } while (uVar13 != 0x38);
      lVar18 = FUN_710076d158();
      *(undefined1 *)(lVar18 + 0x117) = 0;
    }
    lVar18 = FUN_710076d158();
    local_30 = uVar14;
    uStack_2c = uVar7;
    uStack_2a = uVar8;
    uStack_29 = uVar9;
    lVar19 = FUN_710081ce00(lVar18 + 0x110);
    if (lVar19 == 1) {
      local_20 = CONCAT71(local_20._1_7_,*(undefined1 *)(lVar18 + 0x110));
    }
    else if (lVar19 != 0) {
      FUN_710080f900(&local_20,lVar18 + 0x110,lVar19);
    }
    uStack_28 = (undefined2)lVar19;
    uStack_26 = (undefined1)((ulong)lVar19 >> 0x10);
    uStack_25 = (undefined5)((ulong)lVar19 >> 0x18);
    *(undefined1 *)((long)&local_20 + lVar19) = 0;
    uVar14 = FUN_710013c370(&local_50,&local_30);
    puVar20 = (undefined8 *)CONCAT17(uStack_29,CONCAT16(uStack_2a,CONCAT24(uStack_2c,local_30)));
    if (puVar20 != &local_20) {
      thunk_FUN_710081c200(puVar20,local_20 + 1);
    }
    if ((uVar14 & 1) != 0) {
      DAT_7100af8440 = 1;
    }
    FUN_710004ef30(plVar25);
    if (local_90 != local_80) {
      thunk_FUN_710081c200(local_90,local_80[0] + 1);
    }
    return;
  }
  FUN_710010b630(&local_30,uVar21,local_90);
  FUN_71005f4da0(&local_50,&local_30);
  plVar25 = local_50;
  puVar20 = (undefined8 *)CONCAT17(uStack_29,CONCAT16(uStack_2a,CONCAT24(uStack_2c,local_30)));
  if (puVar20 != &local_20) {
    thunk_FUN_710081c200(puVar20,local_20 + 1);
  }
  plVar37 = (long *)*plVar25;
  plVar3 = (long *)plVar25[1];
joined_r0x007100056598:
  if (plVar3 != plVar37) {
    do {
      if ((*(int *)*plVar37 == 1) &&
         (lVar18 = FUN_710081fa60(*(undefined8 *)((int *)*plVar37 + 2),0,0x10), lVar18 != 0)) {
        local_30 = (uint)lVar18;
        uStack_2c = (undefined2)((ulong)lVar18 >> 0x20);
        uStack_2a = (undefined1)((ulong)lVar18 >> 0x30);
        uStack_29 = (undefined1)((ulong)lVar18 >> 0x38);
        uStack_28 = SUB82(local_18,0);
        uVar10 = uStack_28;
        uStack_26 = (undefined1)((ulong)local_18 >> 0x10);
        uVar11 = uStack_26;
        uStack_25 = (undefined5)((ulong)local_18 >> 0x18);
        uVar12 = uStack_25;
        FUN_710004f860(&uStack_28,*(undefined8 *)(*plVar37 + 0x28),*(undefined8 *)(*plVar37 + 0x30))
        ;
        uVar13 = local_30;
        uVar35 = CONCAT17(uStack_29,CONCAT16(uStack_2a,CONCAT24(uStack_2c,local_30)));
        uVar27 = uVar35 & DAT_7100af8388;
        uVar33 = (ulong)DAT_7100af8380[uVar27 * 2];
        if (DAT_7100af8380[uVar27 * 2] == 0xffffffff) {
          uVar34 = 0;
        }
        else {
          uVar26 = DAT_7100af8380[uVar27 * 2 + 1];
          uVar36 = DAT_7100af8370 - DAT_7100af8368 >> 3;
          uVar34 = 0;
          uVar22 = (ulong)(uVar26 & (uint)DAT_7100af8388);
          if (uVar27 < uVar22) goto LAB_7100056694;
LAB_7100056650:
          if (uVar34 <= uVar27 - uVar22) {
            do {
              if (uVar26 == local_30) {
                uVar22 = uVar33 + (DAT_7100af83a0 - DAT_7100af83a8 >> 3) * -0x3333333333333333;
                if ((long)uVar22 < 0) {
                  uVar33 = ~(~uVar22 / 0xc);
LAB_7100056d14:
                  puVar24 = (ulong *)(*(long *)(DAT_7100af83b8 + uVar33 * 8) +
                                     (uVar22 + uVar33 * -0xc) * 0x28);
                }
                else {
                  if (0xb < (long)uVar22) {
                    uVar33 = (long)uVar22 / 0xc;
                    goto LAB_7100056d14;
                  }
                  puVar24 = (ulong *)(DAT_7100af83a0 + uVar33 * 0x28);
                }
                if (uVar35 == *puVar24) goto LAB_7100056884;
              }
              uVar27 = uVar27 + 1;
              if (uVar27 < uVar36) {
                puVar23 = DAT_7100af8380 + uVar27 * 2;
              }
              else {
                uVar27 = 0;
                puVar23 = DAT_7100af8380;
              }
              uVar33 = (ulong)*puVar23;
              uVar34 = uVar34 + 1;
              if (*puVar23 == 0xffffffff) break;
              uVar26 = puVar23[1];
              uVar22 = (ulong)(uVar26 & (uint)DAT_7100af8388);
              if (uVar22 <= uVar27) goto LAB_7100056650;
LAB_7100056694:
              if ((uVar36 - uVar22) + uVar27 < uVar34) break;
            } while( true );
          }
        }
        uVar33 = ((long)DAT_7100af83c0 - (long)DAT_7100af83c8 >> 3) * -0x3333333333333333 +
                 ((DAT_7100af83d8 - DAT_7100af83b8 >> 3) - (ulong)(DAT_7100af83d8 != 0)) * 0xc +
                 (DAT_7100af83b0 - DAT_7100af83a0 >> 3) * -0x3333333333333333;
        if (0xfffffffd < uVar33) {
          uVar21 = FUN_71007adf60(0x10);
          FUN_71007b6480(uVar21,"We reached the maximum size for the hash table.");
                    /* WARNING: Subroutine does not return */
          FUN_71007af000(uVar21,&PTR_PTR_FUN_7100ae7568,FUN_71007b0940);
        }
        if (((DAT_7100af83ec & 1) == 0) && (uVar33 < DAT_7100af83e0)) {
          if (DAT_7100af83c0 == DAT_7100af83d0 + -5) goto LAB_7100056e7c;
LAB_7100056724:
          lVar18 = local_20;
          puVar20 = DAT_7100af83c0;
          *DAT_7100af83c0 = CONCAT17(uStack_29,CONCAT16(uStack_2a,CONCAT24(uStack_2c,local_30)));
          puVar20[1] = puVar20 + 3;
          puVar24 = (ulong *)CONCAT53(uStack_25,CONCAT12(uStack_26,uStack_28));
          if (puVar24 == local_18) {
            FUN_710080f900(puVar20 + 3,local_18,local_20 + 1);
          }
          else {
            puVar20[1] = puVar24;
            puVar20[3] = local_18[0];
          }
          puVar20[2] = lVar18;
          DAT_7100af83c0 = DAT_7100af83c0 + 5;
          lVar18 = ((long)DAT_7100af83c0 - (long)DAT_7100af83c8 >> 3) * -0x3333333333333333;
          uVar35 = (ulong)(DAT_7100af83d8 != 0);
        }
        else {
          lVar18 = (DAT_7100af8370 - DAT_7100af8368 >> 3) * 2;
          if (lVar18 == 0) {
            lVar18 = 1;
          }
          FUN_7100053da0(&DAT_7100af8368,lVar18);
          uVar34 = 0;
          DAT_7100af83ec = 0;
          uVar27 = uVar35 & DAT_7100af8388;
          if (DAT_7100af83c0 != DAT_7100af83d0 + -5) goto LAB_7100056724;
LAB_7100056e7c:
          if (((long)DAT_7100af83c0 - (long)DAT_7100af83c8 >> 3) * -0x3333333333333333 +
              ((DAT_7100af83d8 - DAT_7100af83b8 >> 3) - (ulong)(DAT_7100af83d8 != 0)) * 0xc +
              (DAT_7100af83b0 - DAT_7100af83a0 >> 3) * -0x3333333333333333 == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
            FUN_7100003b58("cannot create std::deque larger than max_size()");
          }
          if ((ulong)(DAT_7100af8398 - (DAT_7100af83d8 - DAT_7100af8390 >> 3)) < 2) {
            FUN_7100055a10(&DAT_7100af8390,1,0);
          }
          lVar18 = DAT_7100af83d8;
          uVar21 = FUN_71007af5c0(0x1e0);
          lVar19 = local_20;
          *(undefined8 *)(lVar18 + 8) = uVar21;
          puVar20 = DAT_7100af83c0;
          *DAT_7100af83c0 = CONCAT17(uStack_29,CONCAT16(uStack_2a,CONCAT24(uStack_2c,local_30)));
          puVar20[1] = puVar20 + 3;
          puVar24 = (ulong *)CONCAT53(uStack_25,CONCAT12(uStack_26,uStack_28));
          if (puVar24 == local_18) {
            FUN_710080f900(puVar20 + 3,local_18,local_20 + 1);
          }
          else {
            puVar20[1] = puVar24;
            puVar20[3] = local_18[0];
          }
          uVar35 = 1;
          puVar20[2] = lVar19;
          DAT_7100af83c0 = *(undefined8 **)(DAT_7100af83d8 + 8);
          DAT_7100af83d0 = DAT_7100af83c0 + 0x3c;
          lVar18 = 0;
          DAT_7100af83c8 = DAT_7100af83c0;
          DAT_7100af83d8 = DAT_7100af83d8 + 8;
        }
        uVar33 = DAT_7100af8388;
        puVar6 = DAT_7100af8380;
        local_18[0] = local_18[0] & 0xffffffffffffff00;
        lVar18 = lVar18 + ((DAT_7100af83d8 - DAT_7100af83b8 >> 3) - uVar35) * 0xc +
                 (DAT_7100af83b0 - DAT_7100af83a0 >> 3) * -0x3333333333333333;
        puVar23 = DAT_7100af8380 + uVar27 * 2;
        uVar21 = CONCAT44(uVar13,(int)lVar18 + -1);
        if (DAT_7100af8380[uVar27 * 2] != 0xffffffff) {
          uVar22 = DAT_7100af8370 - DAT_7100af8368 >> 3;
          uVar39 = *(undefined8 *)(DAT_7100af8380 + uVar27 * 2);
          uVar35 = puVar23[1] & DAT_7100af8388;
          if (uVar35 <= uVar27) goto LAB_7100056dd0;
LAB_7100056810:
          uVar35 = (uVar22 + uVar27) - uVar35;
          if (uVar34 <= uVar35) goto LAB_7100056de8;
          uVar27 = uVar27 + 1;
          *(undefined8 *)puVar23 = uVar21;
          uVar34 = uVar35 + 1;
          uVar21 = uVar39;
          if (uVar22 <= uVar27) goto LAB_7100056df8;
LAB_710005683c:
          puVar23 = puVar6 + uVar27 * 2;
          if (uVar34 < 0x81) goto LAB_7100056db0;
          if ((DAT_7100af83ec & 1) != 0) goto LAB_7100056db0;
LAB_7100056850:
          fVar38 = (float)lVar18 / (float)(long)uVar22;
          if (fVar38 < 0.15 == NAN(fVar38)) {
            DAT_7100af83ec = 1;
            goto LAB_7100056db0;
          }
          if (*puVar23 != 0xffffffff) {
            do {
              uVar39 = *(undefined8 *)puVar23;
              uVar35 = puVar23[1] & uVar33;
              if (uVar27 < uVar35) goto LAB_7100056810;
LAB_7100056dd0:
              if (uVar27 - uVar35 < uVar34) {
                *(undefined8 *)puVar23 = uVar21;
                uVar34 = uVar27 - uVar35;
                uVar21 = uVar39;
              }
LAB_7100056de8:
              uVar27 = uVar27 + 1;
              uVar34 = uVar34 + 1;
              if (uVar27 < uVar22) goto LAB_710005683c;
LAB_7100056df8:
              puVar23 = puVar6;
              if (uVar34 < 0x81) {
                uVar27 = 0;
              }
              else {
                uVar27 = 0;
                if ((DAT_7100af83ec & 1) == 0 && uVar22 != 0) goto LAB_7100056850;
              }
LAB_7100056db0:
              if (*puVar23 == 0xffffffff) break;
            } while( true );
          }
        }
        *(undefined8 *)puVar23 = uVar21;
        uStack_28 = uVar10;
        uStack_26 = uVar11;
        uStack_25 = uVar12;
LAB_7100056884:
        puVar24 = (ulong *)CONCAT53(uStack_25,CONCAT12(uStack_26,uStack_28));
        if (puVar24 != local_18) goto code_r0x007100056890;
      }
      plVar37 = plVar37 + 1;
      if (plVar3 == plVar37) break;
    } while( true );
  }
  goto LAB_71000568a8;
code_r0x007100056890:
  plVar37 = plVar37 + 1;
  thunk_FUN_710081c200(puVar24,local_18[0] + 1);
  goto joined_r0x007100056598;
}



// ===== FUN_7100057640 @ 7100057640 (size=760) =====

long * FUN_7100057640(long *param_1,long param_2,undefined8 *param_3,long *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  
  if (0 < (long)param_3 - param_2) {
    lVar16 = (long)param_3 - param_2 >> 6;
    puVar8 = (undefined8 *)*param_4;
    lVar4 = (long)puVar8 - param_4[1] >> 6;
    puVar13 = puVar8;
    lVar17 = lVar4;
    if (puVar8 == (undefined8 *)param_4[1]) goto LAB_7100057830;
LAB_7100057698:
    lVar2 = lVar16;
    if (lVar17 < lVar16) {
      lVar2 = lVar17;
    }
    puVar1 = param_3 + lVar2 * -8;
    if (puVar1 != param_3) {
      puVar15 = param_3 + -6;
      puVar8 = param_3 + -2;
      do {
        while( true ) {
          puVar14 = puVar13 + -8;
          puVar12 = param_3 + -8;
          puVar5 = (undefined8 *)*puVar14;
          puVar7 = (undefined8 *)*puVar12;
          if (puVar5 == puVar13 + -6) break;
          if (puVar15 == puVar7) {
LAB_7100057844:
            if (puVar12 != puVar14) {
              lVar17 = param_3[-7];
              if (lVar17 != 0) {
                if (lVar17 == 1) {
                  *(undefined1 *)puVar5 = *(undefined1 *)puVar7;
                }
                else {
                  FUN_710080f900();
                }
                puVar5 = (undefined8 *)*puVar14;
                lVar17 = param_3[-7];
              }
              puVar13[-7] = lVar17;
              *(undefined1 *)((long)puVar5 + lVar17) = 0;
              puVar7 = (undefined8 *)*puVar12;
            }
          }
          else {
            *puVar14 = puVar7;
            uVar6 = puVar13[-6];
            puVar13[-7] = param_3[-7];
            puVar13[-6] = param_3[-6];
            if (puVar5 == (undefined8 *)0x0) goto LAB_7100057784;
            *puVar12 = puVar5;
            param_3[-6] = uVar6;
            puVar7 = puVar5;
          }
          param_3[-7] = 0;
          *(undefined1 *)puVar7 = 0;
          puVar5 = (undefined8 *)puVar13[-4];
          puVar7 = (undefined8 *)param_3[-4];
          if (puVar5 != puVar13 + -2) goto LAB_7100057708;
LAB_71000577a8:
          puVar9 = puVar8;
          if (puVar7 != puVar8) {
            uVar6 = param_3[-3];
            puVar13[-4] = puVar7;
            puVar13[-3] = uVar6;
            puVar13[-2] = param_3[-2];
            goto LAB_71000577c0;
          }
LAB_7100057880:
          if (puVar12 != puVar14) {
            lVar17 = param_3[-3];
            if (lVar17 != 0) {
              if (lVar17 == 1) {
                *(undefined1 *)puVar5 = *(undefined1 *)puVar9;
              }
              else {
                FUN_710080f900();
              }
              puVar5 = (undefined8 *)puVar13[-4];
              lVar17 = param_3[-3];
            }
            puVar13[-3] = lVar17;
            *(undefined1 *)((long)puVar5 + lVar17) = 0;
            puVar7 = (undefined8 *)param_3[-4];
          }
LAB_7100057738:
          param_3[-3] = 0;
          puVar8 = puVar8 + -8;
          puVar15 = puVar15 + -8;
          *(undefined1 *)puVar7 = 0;
          param_3 = puVar12;
          puVar13 = puVar14;
          if (puVar1 == puVar12) goto LAB_71000577e0;
        }
        if (puVar15 == puVar7) goto LAB_7100057844;
        uVar6 = param_3[-7];
        *puVar14 = puVar7;
        puVar13[-7] = uVar6;
        puVar13[-6] = param_3[-6];
LAB_7100057784:
        *puVar12 = puVar15;
        param_3[-7] = 0;
        *(undefined1 *)puVar15 = 0;
        puVar5 = (undefined8 *)puVar13[-4];
        puVar7 = (undefined8 *)param_3[-4];
        if (puVar5 == puVar13 + -2) goto LAB_71000577a8;
LAB_7100057708:
        puVar9 = puVar7;
        if (puVar8 == puVar7) goto LAB_7100057880;
        uVar6 = param_3[-3];
        uVar11 = puVar13[-2];
        puVar13[-4] = puVar7;
        puVar13[-3] = uVar6;
        puVar13[-2] = param_3[-2];
        if (puVar5 != (undefined8 *)0x0) {
          param_3[-4] = puVar5;
          param_3[-2] = uVar11;
          puVar7 = puVar5;
          goto LAB_7100057738;
        }
LAB_71000577c0:
        param_3[-4] = puVar8;
        puVar15 = puVar15 + -8;
        param_3[-3] = 0;
        *(undefined1 *)puVar8 = 0;
        param_3 = puVar12;
        puVar13 = puVar14;
        puVar8 = puVar8 + -8;
      } while (puVar1 != puVar12);
LAB_71000577e0:
      puVar8 = (undefined8 *)*param_4;
      lVar4 = (long)puVar8 - param_4[1] >> 6;
    }
    uVar3 = lVar4 - lVar2;
    if ((long)uVar3 < 0) {
      uVar10 = ~(~uVar3 >> 3);
LAB_71000578b8:
      lVar17 = *(long *)(param_4[3] + uVar10 * 8);
      param_4[3] = param_4[3] + uVar10 * 8;
      param_4[1] = lVar17;
      param_4[2] = lVar17 + 0x200;
      *param_4 = lVar17 + (uVar3 + uVar10 * -8) * 0x40;
    }
    else {
      if (7 < (long)uVar3) {
        uVar10 = (long)uVar3 >> 3;
        goto LAB_71000578b8;
      }
      *param_4 = (long)(puVar8 + lVar2 * -8);
    }
    lVar16 = lVar16 - lVar2;
    if (0 < lVar16) {
      puVar8 = (undefined8 *)*param_4;
      lVar4 = (long)puVar8 - param_4[1] >> 6;
      param_3 = puVar1;
      puVar13 = puVar8;
      lVar17 = lVar4;
      if (puVar8 == (undefined8 *)param_4[1]) {
LAB_7100057830:
        lVar17 = 8;
        puVar13 = (undefined8 *)(*(long *)(param_4[3] + -8) + 0x200);
      }
      goto LAB_7100057698;
    }
  }
  lVar4 = param_4[1];
  lVar17 = param_4[3];
  lVar16 = param_4[2];
  *param_1 = *param_4;
  param_1[1] = lVar4;
  param_1[3] = lVar17;
  param_1[2] = lVar16;
  return param_1;
}



// ===== FUN_7100057940 @ 7100057940 (size=684) =====

undefined8 *
FUN_7100057940(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (0 < param_3 - (long)param_2) {
    lVar13 = param_3 - (long)param_2 >> 6;
    do {
      puVar9 = (undefined8 *)*param_4;
      lVar12 = param_4[2] - (long)puVar9 >> 6;
      if (lVar13 < lVar12) {
        lVar12 = lVar13;
      }
      puVar1 = param_2 + lVar12 * 8;
      if (puVar1 != param_2) {
        puVar11 = param_2 + 6;
        puVar10 = param_2 + 2;
        do {
          while( true ) {
            puVar3 = (undefined8 *)*param_2;
            lVar7 = param_2[1];
            puVar4 = (undefined8 *)*puVar9;
            if (puVar4 == puVar9 + 2) break;
            if (puVar10 == puVar3) goto LAB_7100057b44;
            *puVar9 = puVar3;
            puVar9[1] = lVar7;
            uVar8 = puVar9[2];
            puVar9[2] = param_2[2];
            if (puVar4 == (undefined8 *)0x0) {
              *param_2 = puVar10;
              goto LAB_7100057a64;
            }
            *param_2 = puVar4;
            param_2[2] = uVar8;
            puVar3 = puVar4;
LAB_71000579d4:
            param_2[1] = 0;
            *(undefined1 *)puVar3 = 0;
            puVar4 = (undefined8 *)puVar9[4];
            puVar3 = (undefined8 *)param_2[4];
            lVar7 = param_2[5];
            if (puVar4 == puVar9 + 6) goto LAB_7100057a80;
LAB_71000579f0:
            puVar5 = puVar4;
            if (puVar11 == puVar3) goto LAB_7100057b14;
            puVar9[4] = puVar3;
            puVar9[5] = lVar7;
            uVar8 = puVar9[6];
            puVar9[6] = param_2[6];
            if (puVar4 == (undefined8 *)0x0) {
              param_2[4] = puVar11;
              goto LAB_7100057a9c;
            }
            param_2[4] = puVar4;
            param_2[6] = uVar8;
LAB_7100057a14:
            param_2[5] = 0;
            param_2 = param_2 + 8;
            puVar9 = puVar9 + 8;
            *(undefined1 *)puVar4 = 0;
            puVar11 = puVar11 + 8;
            puVar10 = puVar10 + 8;
            if (puVar1 == param_2) goto LAB_7100057abc;
          }
          if (puVar10 == puVar3) {
LAB_7100057b44:
            if (param_2 != puVar9) {
              if (lVar7 != 0) {
                if (lVar7 == 1) {
                  *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
                }
                else {
                  FUN_710080f900();
                }
                puVar4 = (undefined8 *)*puVar9;
                lVar7 = param_2[1];
              }
              puVar9[1] = lVar7;
              *(undefined1 *)((long)puVar4 + lVar7) = 0;
              puVar3 = (undefined8 *)*param_2;
            }
            goto LAB_71000579d4;
          }
          *puVar9 = puVar3;
          puVar9[1] = lVar7;
          puVar9[2] = param_2[2];
          *param_2 = puVar10;
LAB_7100057a64:
          param_2[1] = 0;
          *(undefined1 *)puVar10 = 0;
          puVar4 = (undefined8 *)puVar9[4];
          puVar3 = (undefined8 *)param_2[4];
          lVar7 = param_2[5];
          if (puVar4 != puVar9 + 6) goto LAB_71000579f0;
LAB_7100057a80:
          puVar5 = puVar4;
          if (puVar11 == puVar3) {
LAB_7100057b14:
            puVar4 = puVar3;
            if (param_2 != puVar9) {
              if (lVar7 != 0) {
                if (lVar7 == 1) {
                  *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
                }
                else {
                  FUN_710080f900();
                }
                puVar5 = (undefined8 *)puVar9[4];
                lVar7 = param_2[5];
              }
              puVar9[5] = lVar7;
              *(undefined1 *)((long)puVar5 + lVar7) = 0;
              puVar4 = (undefined8 *)param_2[4];
            }
            goto LAB_7100057a14;
          }
          puVar9[4] = puVar3;
          puVar9[5] = lVar7;
          puVar9[6] = param_2[6];
          param_2[4] = puVar11;
LAB_7100057a9c:
          param_2[5] = 0;
          param_2 = param_2 + 8;
          puVar9 = puVar9 + 8;
          *(undefined1 *)puVar11 = 0;
          puVar11 = puVar11 + 8;
          puVar10 = puVar10 + 8;
        } while (puVar1 != param_2);
LAB_7100057abc:
        puVar9 = (undefined8 *)*param_4;
      }
      uVar2 = lVar12 + ((long)puVar9 - param_4[1] >> 6);
      if ((long)uVar2 < 0) {
        uVar6 = ~(~uVar2 >> 3);
LAB_7100057b90:
        lVar7 = *(long *)(param_4[3] + uVar6 * 8);
        param_4[3] = param_4[3] + uVar6 * 8;
        puVar9 = (undefined8 *)(lVar7 + (uVar2 + uVar6 * -8) * 0x40);
        param_4[1] = lVar7;
        param_4[2] = lVar7 + 0x200;
      }
      else {
        if (7 < (long)uVar2) {
          uVar6 = (long)uVar2 >> 3;
          goto LAB_7100057b90;
        }
        puVar9 = puVar9 + lVar12 * 8;
      }
      lVar13 = lVar13 - lVar12;
      *param_4 = puVar9;
      param_2 = puVar1;
    } while (0 < lVar13);
  }
  uVar15 = param_4[1];
  uVar14 = param_4[3];
  uVar8 = param_4[2];
  *param_1 = *param_4;
  param_1[1] = uVar15;
  param_1[3] = uVar14;
  param_1[2] = uVar8;
  return param_1;
}



// ===== FUN_7100057bf0 @ 7100057bf0 (size=1156) =====

long * FUN_7100057bf0(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  long *local_60;
  long *local_40;
  long *plStack_38;
  long *local_30;
  long *plStack_28;
  long *local_20;
  long *plStack_18;
  long *plStack_10;
  long *plStack_8;
  
  plVar11 = (long *)*param_3;
  plVar3 = (long *)param_3[1];
  plVar1 = (long *)param_3[2];
  plVar4 = (long *)param_3[3];
  plVar7 = plVar11 + 8;
  plVar9 = plVar1;
  plVar12 = plVar4;
  plVar16 = plVar3;
  if (plVar1 == plVar7) {
    plVar7 = (long *)plVar4[1];
    plVar9 = plVar7 + 0x40;
    plVar12 = plVar4 + 1;
    plVar16 = plVar7;
  }
  plVar13 = *(long **)(param_2 + 0x10);
  plVar19 = *(long **)(param_2 + 0x48);
  local_60 = *(long **)(param_2 + 0x38);
  lVar18 = *(long *)(param_2 + 0x20);
  plVar5 = *(long **)(param_2 + 0x28);
  plVar15 = *(long **)(param_2 + 0x30);
  lVar14 = lVar18 - (long)plVar13 >> 6;
  uVar8 = ((long)plVar11 - (long)plVar3 >> 6) +
          (((long)plVar4 - (long)plVar5 >> 3) - (ulong)(plVar4 != (long *)0x0)) * 8 + lVar14;
  if (uVar8 < ((long)plVar15 - (long)local_60 >> 6) +
              (((long)plVar19 - (long)plVar5 >> 3) - (ulong)(plVar19 != (long *)0x0)) * 8 + lVar14
              >> 1) {
    if (plVar13 != plVar11) {
      local_40 = plVar7;
      plStack_38 = plVar16;
      local_30 = plVar9;
      plStack_28 = plVar12;
      if (plVar5 == plVar4) {
        FUN_7100057640(&local_20,plVar13,plVar11,&local_40);
      }
      else {
        FUN_7100057640(&local_20,plVar3,plVar11,&local_40);
        local_40 = local_20;
        plStack_38 = plStack_18;
        local_30 = plStack_10;
        plStack_28 = plStack_8;
        while (plVar4 = plVar4 + -1, plVar5 != plVar4) {
          local_20 = local_40;
          plStack_18 = plStack_38;
          plStack_10 = local_30;
          plStack_8 = plStack_28;
          FUN_7100057640(&local_20,*plVar4,*plVar4 + 0x200,&local_40);
          local_40 = local_20;
          plStack_38 = plStack_18;
          local_30 = plStack_10;
          plStack_28 = plStack_8;
        }
        FUN_7100057640(&local_20,plVar13,lVar18,&local_40);
      }
      plVar11 = *(long **)(param_2 + 0x10);
      lVar18 = *(long *)(param_2 + 0x20);
    }
    plVar7 = (long *)plVar11[4];
    if (plVar11 != (long *)(lVar18 + -0x40)) {
      if (plVar7 != plVar11 + 6) {
        thunk_FUN_710081c200(plVar7,plVar11[6] + 1);
      }
      if ((long *)*plVar11 != plVar11 + 2) {
        thunk_FUN_710081c200((long *)*plVar11,plVar11[2] + 1);
      }
      lVar14 = *(long *)(param_2 + 0x28);
      lVar18 = *(long *)(param_2 + 0x10) + 0x40;
      *(long *)(param_2 + 0x10) = lVar18;
      lVar2 = *(long *)(param_2 + 0x18);
      lVar6 = *(long *)(param_2 + 0x20);
      lVar10 = lVar18 - lVar2;
      *param_1 = lVar18;
      param_1[1] = lVar2;
      param_1[2] = lVar6;
      goto joined_r0x007100057efc;
    }
    if (plVar7 != (long *)(lVar18 + -0x10)) {
      thunk_FUN_710081c200(plVar7,plVar11[6] + 1);
    }
    if ((long *)*plVar11 != plVar11 + 2) {
      thunk_FUN_710081c200((long *)*plVar11,plVar11[2] + 1);
    }
    thunk_FUN_710081c200(*(undefined8 *)(param_2 + 0x18),0x200);
    lVar14 = *(long *)(param_2 + 0x28) + 8;
    lVar18 = *(long *)(*(long *)(param_2 + 0x28) + 8);
    *(long *)(param_2 + 0x28) = lVar14;
    *(long *)(param_2 + 0x18) = lVar18;
    *(long *)(param_2 + 0x20) = lVar18 + 0x200;
    *(long *)(param_2 + 0x10) = lVar18;
    *param_1 = lVar18;
    param_1[1] = lVar18;
    param_1[2] = lVar18 + 0x200;
    uVar17 = uVar8;
  }
  else {
    if (plVar15 != plVar7) {
      local_40 = plVar11;
      plStack_38 = plVar3;
      local_30 = plVar1;
      plStack_28 = plVar4;
      if (plVar19 == plVar12) {
        FUN_7100057940(&local_20,plVar7,plVar15,&local_40);
      }
      else {
        FUN_7100057940(&local_20,plVar7,plVar9,&local_40);
        local_40 = local_20;
        plStack_38 = plStack_18;
        local_30 = plStack_10;
        plStack_28 = plStack_8;
        while (plVar12 = plVar12 + 1, plVar19 != plVar12) {
          local_20 = local_40;
          plStack_18 = plStack_38;
          plStack_10 = local_30;
          plStack_8 = plStack_28;
          FUN_7100057940(&local_20,*plVar12,*plVar12 + 0x200,&local_40);
          local_40 = local_20;
          plStack_38 = plStack_18;
          local_30 = plStack_10;
          plStack_28 = plStack_8;
        }
        FUN_7100057940(&local_20,local_60,plVar15,&local_40);
      }
      plVar7 = *(long **)(param_2 + 0x30);
      local_60 = *(long **)(param_2 + 0x38);
    }
    if (local_60 == plVar7) {
      thunk_FUN_710081c200(local_60,0x200);
      lVar14 = *(long *)(*(long *)(param_2 + 0x48) + -8);
      *(long *)(param_2 + 0x38) = lVar14;
      *(long *)(param_2 + 0x40) = lVar14 + 0x200;
      lVar18 = *(long *)(lVar14 + 0x1e0);
      *(long *)(param_2 + 0x48) = *(long *)(param_2 + 0x48) + -8;
      *(long *)(param_2 + 0x30) = lVar14 + 0x1c0;
      if (lVar18 != lVar14 + 0x1f0) {
        thunk_FUN_710081c200(lVar18,*(long *)(lVar14 + 0x1f0) + 1);
      }
      if (*(long *)(lVar14 + 0x1c0) != lVar14 + 0x1d0) {
        thunk_FUN_710081c200(*(long *)(lVar14 + 0x1c0),*(long *)(lVar14 + 0x1d0) + 1);
      }
    }
    else {
      plVar11 = (long *)plVar7[-4];
      *(long **)(param_2 + 0x30) = plVar7 + -8;
      if (plVar11 != plVar7 + -2) {
        thunk_FUN_710081c200(plVar11,plVar7[-2] + 1);
      }
      if ((long *)plVar7[-8] != plVar7 + -6) {
        thunk_FUN_710081c200((long *)plVar7[-8],plVar7[-6] + 1);
      }
    }
    lVar18 = *(long *)(param_2 + 0x10);
    lVar2 = *(long *)(param_2 + 0x18);
    lVar6 = *(long *)(param_2 + 0x20);
    lVar10 = lVar18 - lVar2;
    lVar14 = *(long *)(param_2 + 0x28);
    *param_1 = lVar18;
    param_1[1] = lVar2;
    param_1[2] = lVar6;
joined_r0x007100057efc:
    uVar17 = uVar8 + (lVar10 >> 6);
    if ((long)uVar17 < 0) {
      uVar8 = ~(~uVar17 >> 3);
      goto LAB_7100057f08;
    }
  }
  if ((long)uVar17 < 8) {
    param_1[3] = lVar14;
    *param_1 = lVar18 + uVar8 * 0x40;
    return param_1;
  }
  uVar8 = (long)uVar17 >> 3;
LAB_7100057f08:
  lVar18 = *(long *)(lVar14 + uVar8 * 8);
  param_1[3] = lVar14 + uVar8 * 8;
  param_1[1] = lVar18;
  param_1[2] = lVar18 + 0x200;
  *param_1 = lVar18 + (uVar17 + uVar8 * -8) * 0x40;
  return param_1;
}



// ===== FUN_7100058080 @ 7100058080 (size=644) =====

void FUN_7100058080(long *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long local_40;
  long lStack_38;
  long local_30;
  long *plStack_28;
  undefined1 auStack_20 [32];
  
  plStack_28 = (long *)param_1[10];
  uVar12 = (ulong)*param_2 + (param_1[7] - param_1[8] >> 6);
  if ((long)uVar12 < 0) {
    uVar8 = ~(~uVar12 >> 3);
  }
  else {
    if ((long)uVar12 < 8) {
      local_40 = param_1[7] + (ulong)*param_2 * 0x40;
      lStack_38 = *plStack_28;
      goto LAB_71000580d4;
    }
    uVar8 = (long)uVar12 >> 3;
  }
  plStack_28 = plStack_28 + uVar8;
  lStack_38 = *plStack_28;
  local_40 = lStack_38 + (uVar12 + uVar8 * -8) * 0x40;
LAB_71000580d4:
  local_30 = lStack_38 + 0x200;
  FUN_7100057bf0(auStack_20,param_1 + 5,&local_40);
  lVar3 = param_1[10];
  lVar7 = param_1[7];
  uVar12 = (ulong)*param_2;
  uVar8 = (param_1[0xb] - param_1[0xc] >> 6) +
          ((param_1[0xe] - lVar3 >> 3) - (ulong)(param_1[0xe] != 0)) * 8 + (param_1[9] - lVar7 >> 6)
  ;
  if ((uVar12 == uVar8) || (uVar11 = uVar12, uVar8 <= uVar12)) {
LAB_71000581fc:
    *param_2 = 0xffffffff;
    lVar3 = (long)param_2 - *param_1;
    piVar6 = (int *)param_1[3];
    uVar8 = lVar3 >> 3;
    uVar11 = param_1[1] - *param_1 >> 3;
    uVar12 = uVar8 + 1;
    lVar3 = lVar3 + 8;
    if (uVar11 <= uVar12) {
      lVar3 = 0;
      uVar12 = 0;
    }
    iVar10 = *(int *)((long)piVar6 + lVar3);
    piVar9 = (int *)((long)piVar6 + lVar3);
    if (iVar10 != -1) {
      lVar3 = param_1[4];
      do {
        uVar4 = uVar12;
        uVar1 = piVar9[1];
        uVar12 = (ulong)(uVar1 & (uint)lVar3);
        lVar7 = (uVar11 + uVar4) - uVar12;
        if (uVar12 <= uVar4) {
          lVar7 = uVar4 - uVar12;
        }
        if (lVar7 == 0) {
          return;
        }
        *(undefined8 *)piVar9 = *(undefined8 *)(piVar6 + uVar8 * 2);
        piVar6[uVar8 * 2] = iVar10;
        uVar12 = uVar4 + 1;
        piVar6[uVar8 * 2 + 1] = uVar1;
        if (uVar12 < uVar11) {
          iVar10 = piVar6[uVar12 * 2];
          piVar9 = piVar6 + uVar12 * 2;
        }
        else {
          uVar12 = 0;
          iVar10 = *piVar6;
          piVar9 = piVar6;
        }
        uVar8 = uVar4;
      } while (iVar10 != -1);
    }
    return;
  }
LAB_7100058140:
  uVar11 = uVar11 + 1;
  iVar10 = (int)uVar12;
  uVar8 = uVar12 + (lVar7 - param_1[8] >> 6);
  if ((long)uVar8 < 0) {
    uVar4 = ~(~uVar8 >> 3);
  }
  else {
    if ((long)uVar8 < 8) {
      puVar2 = (undefined8 *)(lVar7 + uVar12 * 0x40);
      goto LAB_7100058160;
    }
    uVar4 = (long)uVar8 >> 3;
  }
  puVar2 = (undefined8 *)(*(long *)(lVar3 + uVar4 * 8) + (uVar8 + uVar4 * -8) * 0x40);
LAB_7100058160:
  uVar8 = FUN_71007af4e0(*puVar2,puVar2[1],0xc70f6907);
  uVar8 = uVar8 & param_1[4];
  do {
    piVar6 = (int *)(param_1[3] + uVar8 * 8);
    uVar4 = uVar8;
    do {
      if (*piVar6 == (int)uVar11) {
        lVar5 = param_1[0xe];
        uVar12 = uVar12 + 1;
        *piVar6 = iVar10;
        lVar3 = param_1[10];
        lVar7 = param_1[7];
        if ((param_1[0xb] - param_1[0xc] >> 6) + ((lVar5 - lVar3 >> 3) - (ulong)(lVar5 != 0)) * 8 +
            (param_1[9] - lVar7 >> 6) <= uVar12) goto LAB_71000581fc;
        goto LAB_7100058140;
      }
      uVar4 = uVar4 + 1;
      piVar6 = piVar6 + 2;
      uVar8 = 0;
    } while (uVar4 < (ulong)(param_1[1] - *param_1 >> 3));
  } while( true );
}



// ===== FUN_7100058310 @ 7100058310 (size=752) =====

long * FUN_7100058310(long *param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                     undefined8 *param_5)

{
  long *plVar1;
  uint *puVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  long *local_98;
  long local_90;
  long local_88 [2];
  long local_78 [5];
  undefined8 *local_50 [5];
  long local_28 [5];
  
  param_2 = param_2 + 8;
  local_50[0] = param_3;
  FUN_71000541f0(local_28,param_2,param_3,local_50);
  local_50[0] = param_4;
  FUN_7100054bd0(local_28,local_28[0] + 0x20,param_4,local_50);
  local_98 = local_88;
  FUN_710004f860(&local_98,*(undefined8 *)(local_28[0] + 0x20),*(undefined8 *)(local_28[0] + 0x28));
  if (local_90 != 0) {
    *param_1 = (long)(param_1 + 2);
    if (local_98 == local_88) {
      FUN_710080f900(param_1 + 2,local_98,local_90 + 1);
      param_1[1] = local_90;
    }
    else {
      *param_1 = (long)local_98;
      param_1[1] = local_90;
      param_1[2] = local_88[0];
    }
    return param_1;
  }
  if (param_5[1] == 0) {
    local_a0 = param_3;
    FUN_71000541f0(local_28,param_2,param_3,&local_a0);
    uVar7 = FUN_71007af4e0(*param_4,param_4[1],0xc70f6907);
    plVar1 = (long *)(local_28[0] + 0x20);
    puVar2 = *(uint **)(local_28[0] + 0x38);
    uVar3 = *(ulong *)(local_28[0] + 0x40);
    uVar12 = 0;
    uVar13 = uVar7 & uVar3;
    lVar14 = uVar13 * 8;
    puVar10 = puVar2 + uVar13 * 2;
    uVar5 = puVar2[uVar13 * 2];
    while (uVar5 != 0xffffffff) {
      uVar4 = puVar10[1];
      if (uVar4 == (uint)uVar7) {
        uVar11 = (ulong)uVar5 + (*(long *)(local_28[0] + 0x58) - *(long *)(local_28[0] + 0x60) >> 6)
        ;
        if ((long)uVar11 < 0) {
          uVar9 = ~(~uVar11 >> 3);
LAB_7100058584:
          puVar8 = (undefined8 *)
                   (*(long *)(*(long *)(local_28[0] + 0x70) + uVar9 * 8) +
                   (uVar11 + uVar9 * -8) * 0x40);
        }
        else {
          if (7 < (long)uVar11) {
            uVar9 = (long)uVar11 >> 3;
            goto LAB_7100058584;
          }
          puVar8 = (undefined8 *)(*(long *)(local_28[0] + 0x58) + (ulong)uVar5 * 0x40);
        }
        if ((param_4[1] == puVar8[1]) &&
           ((param_4[1] == 0 || (iVar6 = FUN_710081ec40(*param_4,*puVar8), iVar6 == 0)))) {
          if (*(long *)(local_28[0] + 0x28) != *(long *)(local_28[0] + 0x20) + lVar14) {
            FUN_7100058080(plVar1);
          }
          break;
        }
      }
      uVar11 = (ulong)(uVar4 & (uint)uVar3);
      if (uVar13 < uVar11) {
        uVar9 = *(long *)(local_28[0] + 0x28) - *plVar1 >> 3;
        if ((uVar9 - uVar11) + uVar13 < uVar12) break;
      }
      else {
        if (uVar13 - uVar11 < uVar12) break;
        uVar9 = *(long *)(local_28[0] + 0x28) - *plVar1 >> 3;
      }
      uVar13 = uVar13 + 1;
      if (uVar13 < uVar9) {
        lVar14 = uVar13 * 8;
        puVar10 = puVar2 + uVar13 * 2;
      }
      else {
        lVar14 = 0;
        uVar13 = 0;
        puVar10 = puVar2;
      }
      uVar12 = uVar12 + 1;
      uVar5 = *puVar10;
    }
  }
  else {
    local_b0 = param_3;
    FUN_71000541f0(local_78,param_2,param_3,&local_b0);
    local_a8 = param_4;
    FUN_7100054bd0(local_50,local_78[0] + 0x20,param_4,&local_a8);
    FUN_71007e2260(local_50[0] + 4,param_5);
  }
  *param_1 = (long)(param_1 + 2);
  FUN_710004f860(param_1,*param_5,param_5[1]);
  if (local_98 != local_88) {
    thunk_FUN_710081c200(local_98,local_88[0] + 1);
  }
  return param_1;
}



// ===== FUN_7100058620 @ 7100058620 (size=328) =====

undefined8 FUN_7100058620(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *local_60 [2];
  long local_50 [2];
  undefined1 **local_40;
  undefined1 *local_38;
  undefined1 *local_30 [2];
  undefined1 *local_20;
  undefined8 uStack_18;
  undefined1 local_10;
  undefined7 uStack_f;
  
  local_20 = (undefined1 *)0x13;
  local_40 = local_30;
  local_40 = (undefined1 **)FUN_71007e2140(&local_40,&local_20,0);
  local_30[0] = local_20;
  *local_40 = (undefined1 *)0x616e20656c746954;
  local_40[1] = (undefined1 *)0x727265766f20656d;
  builtin_strncpy((char *)((long)local_40 + 0xf),"ride",4);
  local_38 = local_20;
  *(char *)((long)local_40 + (long)local_20) = '\0';
  local_60[0] = local_50;
  FUN_71007e21c0(local_60,0x10,0x30);
  lVar3 = 0;
  uVar2 = 0x3c;
  do {
    uVar1 = uVar2 & 0x3f;
    uVar2 = uVar2 - 4;
    *(char *)((long)local_60[0] + lVar3) = "0123456789ABCDEF"[param_3 >> uVar1 & 0xf];
    lVar3 = lVar3 + 1;
  } while (uVar2 != 0xfffffffffffffffc);
  local_10 = 0;
  uStack_18 = 0;
  local_20 = &local_10;
  FUN_7100058310(param_1,param_2,&local_40,local_60,&local_20);
  if (local_20 != &local_10) {
    thunk_FUN_710081c200(local_20,CONCAT71(uStack_f,local_10) + 1);
  }
  if (local_60[0] != local_50) {
    thunk_FUN_710081c200(local_60[0],local_50[0] + 1);
  }
  if (local_40 != local_30) {
    thunk_FUN_710081c200(local_40,local_30[0] + 1);
  }
  return param_1;
}



// ===== FUN_71000587a0 @ 71000587a0 (size=1068) =====

undefined8 * FUN_71000587a0(undefined8 *param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined4 *puVar5;
  long *plVar6;
  undefined4 uVar7;
  long *plVar8;
  long *local_80;
  undefined8 uStack_78;
  long local_70 [2];
  long *local_60;
  long *local_58;
  long local_50 [2];
  long *local_40;
  undefined8 local_38;
  long local_30;
  char local_28 [8];
  long **local_20;
  long *local_18;
  long *local_10 [2];
  
  *param_1 = 0;
  param_1[1] = 0;
  local_58 = (long *)0x7;
  param_1[2] = 0;
  local_50[0] = 0x6c6172656e6547;
  local_30._0_1_ = 'A';
  local_30._1_1_ = 'p';
  local_30._2_1_ = 'p';
  local_30._3_1_ = 'S';
  local_30._4_1_ = 'o';
  local_30._5_1_ = 'r';
  local_30._6_1_ = 't';
  local_30._7_1_ = 'i';
  local_28[0] = 'n';
  local_28[1] = 'g';
  local_28[2] = 0;
  local_38 = 10;
  local_80 = (long *)0x24;
  local_60 = local_50;
  local_40 = &local_30;
  local_20 = local_10;
  local_20 = (long **)FUN_71007e2140(&local_20,&local_80,0);
  local_10[0] = local_80;
  *(undefined4 *)(local_20 + 4) = 0x657a6953;
  *local_20 = (long *)0x73614c2c656d614e;
  local_20[1] = (long *)0x2c646579616c5074;
  local_20[3] = (long *)0x2c6e6f697461636f;
  local_20[2] = (long *)0x4c6c6c6174736e49;
  local_18 = local_80;
  *(char *)((long)local_20 + (long)local_80) = '\0';
  FUN_7100058310(&local_80,param_2,&local_60,&local_40,&local_20);
  if (local_20 != local_10) {
    thunk_FUN_710081c200(local_20,(long)local_10[0] + 1);
  }
  if (local_40 != &local_30) {
    thunk_FUN_710081c200(local_40,local_30 + 1);
  }
  if (local_60 != local_50) {
    thunk_FUN_710081c200(local_60,local_50[0] + 1);
  }
  local_60 = (long *)0x0;
  local_58 = (long *)0x0;
  local_50[0] = 0;
  local_40 = &local_30;
  FUN_710004f860(&local_40,local_80,uStack_78);
  local_18 = (long *)0x1;
  local_10[0] = (long *)CONCAT62(local_10[0]._2_6_,0x2c);
  local_20 = local_10;
  FUN_71000fb440(&local_40,&local_20,&local_60);
  if (local_20 != local_10) {
    thunk_FUN_710081c200(local_20,(long)local_10[0] + 1);
  }
  if (local_40 != &local_30) {
    thunk_FUN_710081c200(local_40,local_30 + 1);
  }
  plVar2 = local_58;
  plVar8 = local_60;
  if (local_60 == local_58) {
    puVar5 = (undefined4 *)param_1[1];
    if ((undefined4 *)*param_1 != puVar5) goto LAB_7100058a6c;
LAB_7100058ba0:
    local_20 = (long **)((ulong)local_20 & 0xffffffff00000000);
    if (puVar5 == (undefined4 *)param_1[2]) {
      FUN_7100050ca0(param_1,&local_20);
      plVar2 = local_60;
      plVar8 = local_58;
      plVar6 = local_58;
    }
    else {
      *puVar5 = 0;
      param_1[1] = puVar5 + 1;
      plVar2 = local_60;
      plVar8 = local_58;
      plVar6 = local_58;
    }
  }
  else {
    do {
      while (lVar4 = plVar8[1], lVar4 != 4) {
LAB_710005898c:
        if (lVar4 == 10) {
          if ((*(long *)*plVar8 == 0x79616c507473614c) && ((short)((long *)*plVar8)[1] == 0x6465)) {
            uVar7 = 1;
            local_20 = (long **)CONCAT44(local_20._4_4_,1);
            puVar5 = (undefined4 *)param_1[1];
            if (puVar5 == (undefined4 *)param_1[2]) {
              FUN_7100050ca0(param_1,&local_20);
              lVar4 = plVar8[1];
              goto LAB_7100058af0;
            }
            goto LAB_7100058a10;
          }
        }
        else {
LAB_7100058af0:
          if (lVar4 == 0xf) {
            plVar6 = (long *)*plVar8;
            if ((((*plVar6 != 0x4c6c6c6174736e49) || ((int)plVar6[1] != 0x7461636f)) ||
                (*(short *)((long)plVar6 + 0xc) != 0x6f69)) ||
               (*(char *)((long)plVar6 + 0xe) != 'n')) goto LAB_71000589a8;
            uVar7 = 2;
            local_20 = (long **)CONCAT44(local_20._4_4_,2);
            puVar5 = (undefined4 *)param_1[1];
            if (puVar5 != (undefined4 *)param_1[2]) goto LAB_7100058a10;
            FUN_7100050ca0(param_1,&local_20);
            lVar4 = plVar8[1];
          }
          if (lVar4 == 4) goto LAB_71000589ec;
        }
LAB_71000589a8:
        plVar8 = plVar8 + 4;
        if (plVar2 == plVar8) goto LAB_7100058a24;
      }
      if (*(int *)*plVar8 == 0x656d614e) {
        local_20 = (long **)((ulong)local_20 & 0xffffffff00000000);
        puVar5 = (undefined4 *)param_1[1];
        if (puVar5 == (undefined4 *)param_1[2]) {
          FUN_7100050ca0(param_1,&local_20);
          lVar4 = plVar8[1];
          goto LAB_710005898c;
        }
        *puVar5 = 0;
        param_1[1] = puVar5 + 1;
      }
LAB_71000589ec:
      if (*(int *)*plVar8 != 0x657a6953) goto LAB_71000589a8;
      uVar7 = 3;
      local_20 = (long **)CONCAT44(local_20._4_4_,3);
      puVar5 = (undefined4 *)param_1[1];
      if (puVar5 == (undefined4 *)param_1[2]) {
        FUN_7100050ca0(param_1,&local_20);
        goto LAB_71000589a8;
      }
LAB_7100058a10:
      plVar8 = plVar8 + 4;
      *puVar5 = uVar7;
      param_1[1] = puVar5 + 1;
    } while (plVar2 != plVar8);
LAB_7100058a24:
    puVar5 = (undefined4 *)*param_1;
    plVar2 = local_60;
    plVar8 = local_58;
    plVar6 = local_58;
    if ((undefined4 *)param_1[1] == puVar5) goto LAB_7100058ba0;
  }
  for (; plVar3 = local_58, bVar1 = plVar2 != local_58, local_58 = plVar6, bVar1;
      plVar2 = plVar2 + 4) {
    if ((long *)*plVar2 != plVar2 + 2) {
      thunk_FUN_710081c200((long *)*plVar2,plVar2[2] + 1);
    }
    plVar8 = local_60;
    plVar6 = local_58;
    local_58 = plVar3;
  }
LAB_7100058a6c:
  if (plVar8 != (long *)0x0) {
    thunk_FUN_710081c200(plVar8,local_50[0] - (long)plVar8);
  }
  if (local_80 != local_70) {
    thunk_FUN_710081c200(local_80,local_70[0] + 1);
  }
  return param_1;
}



// ===== FUN_7100058c50 @ 7100058c50 (size=56) =====

void FUN_7100058c50(undefined8 param_1,undefined4 *param_2)

{
  undefined4 *local_18 [2];
  long local_8;
  
  FUN_71000587a0(local_18);
  *param_2 = *local_18[0];
  thunk_FUN_710081c200(local_18[0],local_8 - (long)local_18[0]);
  return;
}



// ===== FUN_7100058c90 @ 7100058c90 (size=144) =====

undefined4 FUN_7100058c90(undefined8 param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 *local_18;
  long lStack_10;
  long local_8;
  
  FUN_71000587a0(&local_18);
  if (lStack_10 - (long)local_18 != 0) {
    uVar4 = lStack_10 - (long)local_18 >> 2;
    uVar3 = 0;
    do {
      piVar1 = local_18 + uVar3;
      uVar3 = uVar3 + 1;
      if (*piVar1 == *param_2) {
        if (uVar3 < uVar4) {
          uVar2 = local_18[uVar3];
          thunk_FUN_710081c200(local_18,local_8 - (long)local_18);
          return uVar2;
        }
        break;
      }
    } while (uVar3 < uVar4);
  }
  uVar2 = *local_18;
  thunk_FUN_710081c200(local_18,local_8 - (long)local_18);
  return uVar2;
}



// ===== FUN_7100058d20 @ 7100058d20 (size=1160) =====

undefined8 * FUN_7100058d20(undefined8 *param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  long *plVar9;
  long *local_80;
  undefined8 uStack_78;
  long local_70 [2];
  long *local_60;
  long *local_58;
  long local_50 [2];
  undefined7 *local_40;
  undefined8 local_38;
  undefined7 local_30;
  char acStack_29 [9];
  long **local_20;
  long *local_18;
  long *local_10 [2];
  
  *param_1 = 0;
  param_1[1] = 0;
  local_58 = (long *)0x7;
  param_1[2] = 0;
  local_50[0] = 0x6c6172656e6547;
  local_30 = 0x726f5365766153;
  builtin_strncpy(acStack_29,"ting",5);
  local_38 = 0xb;
  local_80 = (long *)0x27;
  local_60 = local_50;
  local_40 = &local_30;
  local_20 = local_10;
  local_20 = (long **)FUN_71007e2140(&local_20,&local_80,0);
  local_10[0] = local_80;
  *local_20 = (long *)0x2c656d614e707041;
  local_20[1] = (long *)0x507473614c707041;
  local_20[3] = (long *)0x69532c6469557265;
  local_20[2] = (long *)0x73552c646579616c;
  builtin_strncpy((char *)((long)local_20 + 0x1f),"ize,Time",8);
  local_18 = local_80;
  *(char *)((long)local_20 + (long)local_80) = '\0';
  FUN_7100058310(&local_80,param_2,&local_60,&local_40,&local_20);
  if (local_20 != local_10) {
    thunk_FUN_710081c200(local_20,(long)local_10[0] + 1);
  }
  if (local_40 != &local_30) {
    thunk_FUN_710081c200(local_40,CONCAT17(acStack_29[0],local_30) + 1);
  }
  if (local_60 != local_50) {
    thunk_FUN_710081c200(local_60,local_50[0] + 1);
  }
  local_60 = (long *)0x0;
  local_58 = (long *)0x0;
  local_50[0] = 0;
  local_40 = &local_30;
  FUN_710004f860(&local_40,local_80,uStack_78);
  local_18 = (long *)0x1;
  local_10[0] = (long *)CONCAT62(local_10[0]._2_6_,0x2c);
  local_20 = local_10;
  FUN_71000fb440(&local_40,&local_20,&local_60);
  if (local_20 != local_10) {
    thunk_FUN_710081c200(local_20,(long)local_10[0] + 1);
  }
  if (local_40 != &local_30) {
    thunk_FUN_710081c200(local_40,CONCAT17(acStack_29[0],local_30) + 1);
  }
  plVar2 = local_58;
  plVar9 = local_60;
  if (local_60 == local_58) {
    puVar7 = (undefined4 *)param_1[1];
    if ((undefined4 *)*param_1 != puVar7) goto LAB_71000590a4;
LAB_7100059168:
    local_20 = (long **)((ulong)local_20 & 0xffffffff00000000);
    if (puVar7 == (undefined4 *)param_1[2]) {
      FUN_7100050d60(param_1,&local_20);
      plVar2 = local_60;
      plVar9 = local_58;
      plVar4 = local_58;
    }
    else {
      *puVar7 = 0;
      param_1[1] = puVar7 + 1;
      plVar2 = local_60;
      plVar9 = local_58;
      plVar4 = local_58;
    }
  }
  else {
    do {
      while (lVar5 = plVar9[1], lVar5 != 7) {
LAB_7100058f04:
        if (lVar5 == 0xd) {
          plVar4 = (long *)*plVar9;
          if (((*plVar4 == 0x507473614c707041) && ((int)plVar4[1] == 0x6579616c)) &&
             (*(char *)((long)plVar4 + 0xc) == 'd')) {
            uVar8 = 1;
            local_20 = (long **)CONCAT44(local_20._4_4_,1);
            puVar7 = (undefined4 *)param_1[1];
            if (puVar7 == (undefined4 *)param_1[2]) {
              FUN_7100050d60(param_1,&local_20);
              lVar5 = plVar9[1];
              goto LAB_7100058fe8;
            }
            goto LAB_7100059048;
          }
        }
        else {
LAB_7100058fe8:
          if (lVar5 == 7) goto LAB_7100059128;
LAB_7100058ff0:
          if (lVar5 == 4) {
            piVar6 = (int *)*plVar9;
            if (*piVar6 == 0x657a6953) {
              local_20 = (long **)CONCAT44(local_20._4_4_,3);
              puVar7 = (undefined4 *)param_1[1];
              if (puVar7 == (undefined4 *)param_1[2]) {
                FUN_7100050d60(param_1,&local_20);
                if (plVar9[1] != 4) goto LAB_7100058f20;
              }
              else {
                *puVar7 = 3;
                param_1[1] = puVar7 + 1;
              }
              piVar6 = (int *)*plVar9;
            }
            if (*piVar6 == 0x656d6954) {
              uVar8 = 4;
              local_20 = (long **)CONCAT44(local_20._4_4_,4);
              puVar7 = (undefined4 *)param_1[1];
              if (puVar7 != (undefined4 *)param_1[2]) goto LAB_7100059048;
              FUN_7100050d60(param_1,&local_20);
            }
          }
        }
LAB_7100058f20:
        plVar9 = plVar9 + 4;
        if (plVar2 == plVar9) goto LAB_710005905c;
      }
      piVar6 = (int *)*plVar9;
      if (((*piVar6 == 0x4e707041) && ((short)piVar6[1] == 0x6d61)) &&
         (*(char *)((long)piVar6 + 6) == 'e')) {
        local_20 = (long **)((ulong)local_20 & 0xffffffff00000000);
        puVar7 = (undefined4 *)param_1[1];
        if (puVar7 == (undefined4 *)param_1[2]) {
          FUN_7100050d60(param_1,&local_20);
          lVar5 = plVar9[1];
          goto LAB_7100058f04;
        }
        *puVar7 = 0;
        param_1[1] = puVar7 + 1;
LAB_7100059128:
        piVar6 = (int *)*plVar9;
      }
      if (((*piVar6 != 0x72657355) || ((short)piVar6[1] != 0x6955)) ||
         (*(char *)((long)piVar6 + 6) != 'd')) goto LAB_7100058f20;
      uVar8 = 2;
      local_20 = (long **)CONCAT44(local_20._4_4_,2);
      puVar7 = (undefined4 *)param_1[1];
      if (puVar7 == (undefined4 *)param_1[2]) {
        FUN_7100050d60(param_1,&local_20);
        lVar5 = plVar9[1];
        goto LAB_7100058ff0;
      }
LAB_7100059048:
      plVar9 = plVar9 + 4;
      *puVar7 = uVar8;
      param_1[1] = puVar7 + 1;
    } while (plVar2 != plVar9);
LAB_710005905c:
    puVar7 = (undefined4 *)*param_1;
    plVar2 = local_60;
    plVar9 = local_58;
    plVar4 = local_58;
    if ((undefined4 *)param_1[1] == puVar7) goto LAB_7100059168;
  }
  for (; plVar3 = local_58, bVar1 = plVar2 != local_58, local_58 = plVar4, bVar1;
      plVar2 = plVar2 + 4) {
    if ((long *)*plVar2 != plVar2 + 2) {
      thunk_FUN_710081c200((long *)*plVar2,plVar2[2] + 1);
    }
    plVar9 = local_60;
    plVar4 = local_58;
    local_58 = plVar3;
  }
LAB_71000590a4:
  if (plVar9 != (long *)0x0) {
    thunk_FUN_710081c200(plVar9,local_50[0] - (long)plVar9);
  }
  if (local_80 != local_70) {
    thunk_FUN_710081c200(local_80,local_70[0] + 1);
  }
  return param_1;
}



// ===== FUN_7100059220 @ 7100059220 (size=56) =====

void FUN_7100059220(undefined8 param_1,undefined4 *param_2)

{
  undefined4 *local_18 [2];
  long local_8;
  
  FUN_7100058d20(local_18);
  *param_2 = *local_18[0];
  thunk_FUN_710081c200(local_18[0],local_8 - (long)local_18[0]);
  return;
}



// ===== FUN_7100059260 @ 7100059260 (size=144) =====

undefined4 FUN_7100059260(undefined8 param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 *local_18;
  long lStack_10;
  long local_8;
  
  FUN_7100058d20(&local_18);
  if (lStack_10 - (long)local_18 != 0) {
    uVar4 = lStack_10 - (long)local_18 >> 2;
    uVar3 = 0;
    do {
      piVar1 = local_18 + uVar3;
      uVar3 = uVar3 + 1;
      if (*piVar1 == *param_2) {
        if (uVar3 < uVar4) {
          uVar2 = local_18[uVar3];
          thunk_FUN_710081c200(local_18,local_8 - (long)local_18);
          return uVar2;
        }
        break;
      }
    } while (uVar3 < uVar4);
  }
  uVar2 = *local_18;
  thunk_FUN_710081c200(local_18,local_8 - (long)local_18);
  return uVar2;
}



// ===== FUN_71000592f0 @ 71000592f0 (size=248) =====

undefined8 * FUN_71000592f0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  long lVar5;
  undefined *puVar6;
  code *pcVar7;
  
  puVar2 = (undefined8 *)FUN_710081c1c0(0x110);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined4 *)FUN_7100834b00();
    iVar1 = FUN_7100835000(param_1);
    if ((iVar1 == -1) || (*(long *)((&PTR_PTR_s_stdnull_7100af8170)[iVar1] + 0x78) == 0)) {
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
          *puVar2 = piVar4;
          *(undefined1 *)((long)puVar2 + 0xb) = 0;
          *(undefined2 *)(puVar2 + 1) = 0xffff;
          *(undefined4 *)((long)puVar2 + 0x10c) = 0;
          return puVar2;
        }
        FUN_710081c200(piVar4);
      }
    }
    FUN_710081c200(puVar2);
  }
  return (undefined8 *)0x0;
}



// ===== FUN_71000593f0 @ 71000593f0 (size=172) =====

undefined4 FUN_71000593f0(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar3 = (undefined4 *)FUN_710080e8e0();
    uVar2 = 0xffffffff;
    *puVar3 = 9;
  }
  else {
    piVar4 = (int *)*param_1;
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



// ===== FUN_71000594a0 @ 71000594a0 (size=408) =====

undefined8 * FUN_71000594a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  ulong uVar5;
  int *piVar6;
  undefined2 local_468;
  undefined2 uStack_466;
  uint uStack_464;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined1 auStack_400 [1024];
  
  puVar4 = (undefined4 *)FUN_710080e8e0();
  if (param_1 == (undefined8 *)0x0) {
    puVar4 = (undefined4 *)FUN_710080e8e0();
    *puVar4 = 9;
  }
  else {
    uVar1 = *puVar4;
    piVar6 = (int *)*param_1;
    puVar4 = (undefined4 *)FUN_7100834b00();
    if (piVar6 != (int *)0x0) {
      iVar3 = *piVar6;
      if (*(long *)((&PTR_PTR_s_stdnull_7100af8170)[iVar3] + 0x88) == 0) {
        *puVar4 = 0x58;
      }
      else {
        *(undefined8 *)(puVar4 + 0x5e) =
             *(undefined8 *)((&PTR_PTR_s_stdnull_7100af8170)[iVar3] + 0xb0);
        iVar3 = (**(code **)((&PTR_PTR_s_stdnull_7100af8170)[iVar3] + 0x88))
                          (puVar4,piVar6,auStack_400,&local_468);
        if (-1 < iVar3) {
          *(int *)((long)param_1 + 0x10c) = *(int *)((long)param_1 + 0x10c) + 1;
          uVar5 = FUN_710081e5c0(auStack_400,0x400);
          if (0xff < uVar5) {
            puVar4 = (undefined4 *)FUN_710080e8e0();
            *puVar4 = 0x8b;
            return (undefined8 *)0x0;
          }
          FUN_710081f760((long)param_1 + 0xb,auStack_400,0xff);
          *(undefined1 *)((long)param_1 + 0x10a) = 0;
          *(undefined2 *)(param_1 + 1) = uStack_466;
          uVar2 = 8;
          if ((uStack_464 & 0xf000) == 0x4000) {
            uVar2 = 4;
          }
          *(undefined1 *)((long)param_1 + 10) = uVar2;
          if (param_2 != (undefined8 *)0x0) {
            param_2[1] = uStack_460;
            *param_2 = CONCAT44(uStack_464,CONCAT22(uStack_466,local_468));
            param_2[3] = uStack_450;
            param_2[2] = uStack_458;
            param_2[5] = uStack_440;
            param_2[4] = local_448;
            param_2[7] = uStack_430;
            param_2[6] = uStack_438;
            param_2[8] = local_428;
            param_2[9] = uStack_420;
            param_2[0xb] = uStack_410;
            param_2[10] = uStack_418;
            param_2[0xc] = local_408;
          }
          return param_1 + 1;
        }
      }
    }
    piVar6 = (int *)FUN_710080e8e0();
    if (*piVar6 == 2) {
      puVar4 = (undefined4 *)FUN_710080e8e0();
      *puVar4 = uVar1;
    }
  }
  return (undefined8 *)0x0;
}



// ===== FUN_7100059cc0 @ 7100059cc0 (size=180) =====

void FUN_7100059cc0(long *param_1,undefined1 *param_2,long param_3)

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



// ===== FUN_7100059de0 @ 7100059de0 (size=88) =====

void FUN_7100059de0(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_7100adb540;
  if ((undefined8 *)param_1[2] != param_1 + 4) {
    thunk_FUN_710081c200((undefined8 *)param_1[2],param_1[4] + 1);
  }
  FUN_71007ae160(param_1);
  thunk_FUN_710081c200(param_1,0x30);
  return;
}



// ===== FUN_7100059e40 @ 7100059e40 (size=1216) =====

undefined8 FUN_7100059e40(undefined8 param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  char cVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  undefined8 extraout_d30;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  undefined8 uVar12;
  byte bVar20;
  undefined8 uVar13;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined5 local_68;
  undefined1 local_63;
  long *local_60;
  long local_58;
  long local_50 [2];
  uint local_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  uint uStack_38;
  undefined2 uStack_34;
  undefined2 uStack_32;
  int local_30;
  undefined2 uStack_2c;
  undefined8 uStack_2a;
  uint local_20;
  undefined8 *local_10;
  undefined8 local_8;
  
  uVar12 = 0xd598108a26580412;
  uStack_38 = 0x223c74d2;
  uStack_34 = 0xcdfe;
  lVar2 = FUN_710076d158();
  local_40 = (uint)uVar12;
  uStack_3c = (undefined2)((ulong)uVar12 >> 0x20);
  uStack_3a = (undefined2)((ulong)uVar12 >> 0x30);
  if ((*(ulong *)(lVar2 + 0xfe0) & 1) == 0) {
    *(undefined1 *)(lVar2 + 0xffe) = 1;
    *(undefined8 *)(lVar2 + 0xff0) = uVar12;
    *(ulong *)(lVar2 + 0xff6) = CONCAT26(uStack_34,CONCAT42(uStack_38,uStack_3a));
    *(ulong *)(lVar2 + 0xfe0) = 1;
    FUN_71007ad7e0(&DAT_7100059c90,lVar2 + 0xff0,0);
  }
  lVar2 = FUN_710076d158();
  uVar3 = (ulong)*(byte *)(lVar2 + 0xffe);
  if ((*(byte *)(lVar2 + 0xffe) & 1) != 0) {
    uVar11 = 0x5521cd379ff5bd47;
    lVar2 = 0;
    do {
      auVar22 = FUN_710076d158(uVar3,lVar2);
      uVar5 = auVar22._8_8_;
      lVar4 = auVar22._0_8_;
      uVar3 = lVar4 + 0xfe0;
      *(byte *)(uVar5 + lVar4 + 0xff0) =
           (byte)(uVar11 >> ((uVar5 & 7) << 3)) ^ *(byte *)(uVar5 + lVar4 + 0xff0);
      lVar2 = uVar5 + 1;
    } while (lVar2 != 0xe);
    uVar12 = *(undefined8 *)(lVar4 + 0xff0);
    bVar14 = (byte)((ulong)uVar12 >> 8);
    bVar15 = (byte)((ulong)uVar12 >> 0x10);
    bVar16 = (byte)((ulong)uVar12 >> 0x18);
    bVar17 = (byte)((ulong)uVar12 >> 0x20);
    bVar18 = (byte)((ulong)uVar12 >> 0x28);
    bVar19 = (byte)((ulong)uVar12 >> 0x30);
    bVar20 = (byte)((ulong)uVar12 >> 0x38);
    *(ulong *)(lVar4 + 0xff0) =
         CONCAT17(bVar20 * '@' + (bVar20 >> 2),
                  CONCAT16(bVar19 * '@' + (bVar19 >> 2),
                           CONCAT15(bVar18 * '@' + (bVar18 >> 2),
                                    CONCAT14(bVar17 * '@' + (bVar17 >> 2),
                                             CONCAT13(bVar16 * '@' + (bVar16 >> 2),
                                                      CONCAT12(bVar15 * '@' + (bVar15 >> 2),
                                                               CONCAT11(bVar14 * '@' + (bVar14 >> 2)
                                                                        ,(byte)uVar12 * '@' +
                                                                         ((byte)uVar12 >> 2))))))));
    pbVar9 = (byte *)(lVar4 + 0xff8);
    do {
      pbVar10 = pbVar9 + 1;
      *pbVar9 = *pbVar9 * '@' + (*pbVar9 >> 2);
      pbVar9 = pbVar10;
    } while ((byte *)(lVar4 + 0xffe) != pbVar10);
    lVar2 = FUN_710076d158();
    *(undefined1 *)(lVar2 + 0xffe) = 0;
  }
  lVar2 = FUN_710076d158();
  uVar1 = param_2 >> 9 & 0x1fff;
  local_70._0_5_ = (undefined5)*(undefined8 *)(lVar2 + 0xff0);
  local_70._5_3_ = (undefined3)*(undefined8 *)(lVar2 + 0xff5);
  local_68 = (undefined5)((ulong)*(undefined8 *)(lVar2 + 0xff5) >> 0x18);
  local_63 = 0;
  local_78 = 0xd;
  lVar2 = DAT_7100af8480;
  do {
    local_80 = &local_70;
    if (DAT_7100af8488 == lVar2) {
LAB_7100059ff0:
      if ((param_2 & 0x3fffff) == 0) {
        uStack_38 = uStack_38 & 0xffffff00;
        uVar12 = 0xca65de5ae3a0e51a;
        lVar2 = FUN_710076d158();
        local_40 = (uint)uVar12;
        uStack_3c = (undefined2)((ulong)uVar12 >> 0x20);
        uStack_3a = (undefined2)((ulong)uVar12 >> 0x30);
        if ((*(ulong *)(lVar2 + 0x1000) & 1) == 0) {
          *(undefined1 *)(lVar2 + 0x1019) = 1;
          *(undefined8 *)(lVar2 + 0x1010) = uVar12;
          *(undefined1 *)(lVar2 + 0x1018) = 0;
          *(undefined8 *)(lVar2 + 0x1000) = 1;
          FUN_71007ad7e0(&DAT_7100059ca0,lVar2 + 0x1010,0);
        }
        lVar2 = FUN_710076d158();
        uVar3 = (ulong)*(byte *)(lVar2 + 0x1019);
        if ((*(byte *)(lVar2 + 0x1019) & 1) != 0) {
          uVar11 = 0xb5e90b4df9c539b3;
          lVar2 = 0;
          do {
            auVar22 = FUN_710076d158(uVar3,lVar2);
            uVar5 = auVar22._8_8_;
            uVar3 = auVar22._0_8_ + 0x1010;
            *(byte *)(uVar5 + uVar3) =
                 (byte)(uVar11 >> ((uVar5 & 7) << 3)) ^ *(byte *)(uVar5 + uVar3);
            lVar2 = uVar5 + 1;
          } while (lVar2 != 9);
          uVar11 = 0xb5e90b4df9c539b3;
          uVar3 = 0;
          uVar12 = 0xc5;
          do {
            lVar2 = FUN_710076d158();
            *(char *)(uVar3 + lVar2 + 0x1010) =
                 (*(char *)(uVar3 + lVar2 + 0x1010) - (char)(uVar11 >> ((uVar3 & 7) << 3))) *
                 (char)uVar12;
            uVar3 = uVar3 + 1;
          } while (uVar3 != 9);
          *(undefined1 *)(lVar2 + 0x1019) = 0;
        }
        lVar2 = FUN_710076d158();
        *local_80 = *(undefined8 *)(lVar2 + 0x1010);
        local_78 = 8;
        *(undefined1 *)(local_80 + 1) = 0;
      }
      uVar12 = 0x749c01b762f19e09;
      uVar13 = 0x495a2583663d749c;
      uVar21 = 0x43e437c32c17416f;
      lVar2 = FUN_710076d158();
      uStack_38 = (uint)uVar12;
      uStack_34 = (undefined2)((ulong)uVar12 >> 0x20);
      local_40 = (uint)extraout_d30;
      uStack_3c = (undefined2)((ulong)extraout_d30 >> 0x20);
      uStack_3a = (undefined2)((ulong)extraout_d30 >> 0x30);
      uStack_32 = (undefined2)uVar13;
      local_30 = (int)((ulong)uVar13 >> 0x10);
      uStack_2c = (undefined2)((ulong)uVar13 >> 0x30);
      uStack_2a = uVar21;
      if ((*(ulong *)(lVar2 + 0x1020) & 1) == 0) {
        *(undefined1 *)(lVar2 + 0x104e) = 1;
        *(undefined8 *)(lVar2 + 0x1020) = 1;
        *(ulong *)(lVar2 + 0x1038) = CONCAT26(uStack_32,(int6)uVar12);
        *(undefined8 *)(lVar2 + 0x1030) = extraout_d30;
        *(undefined8 *)(lVar2 + 0x103e) = uVar13;
        *(undefined8 *)(lVar2 + 0x1046) = uVar21;
        FUN_71007ad7e0(&DAT_7100059cb0,lVar2 + 0x1030,0);
      }
      lVar2 = FUN_710076d158();
      if ((*(byte *)(lVar2 + 0x104e) & 1) != 0) {
        uVar11 = 0x6f69bde369317d0b;
        uVar3 = 0;
        do {
          lVar2 = FUN_710076d158();
          pcVar6 = (char *)(lVar2 + 0x1030);
          pcVar6[uVar3] =
               (char)((uint)uVar3 >> 3) + (char)(uVar11 >> ((uVar3 & 7) << 3)) ^ pcVar6[uVar3];
          uVar3 = uVar3 + 1;
        } while (uVar3 != 0x1e);
        cVar8 = *(char *)(lVar2 + 0x1030);
        do {
          cVar8 = cVar8 + pcVar6[1];
          pcVar6 = pcVar6 + 1;
          *pcVar6 = cVar8;
        } while ((char *)(lVar2 + 0x104d) != pcVar6);
        lVar2 = FUN_710076d158();
        *(undefined1 *)(lVar2 + 0x104e) = 0;
      }
      local_40 = 0x1d;
      uStack_3c = 0;
      uStack_3a = 0;
      local_60 = local_50;
      local_60 = (long *)FUN_71007e2140(&local_60,&local_40,0);
      local_50[0] = CONCAT26(uStack_3a,CONCAT24(uStack_3c,local_40));
      auVar22 = FUN_710076d158(param_1,local_50[0],local_60,0xd222,&local_40);
      puVar7 = auVar22._8_8_;
      lVar2 = auVar22._0_8_;
      uVar12 = *(undefined8 *)(lVar2 + 0x1030);
      uVar13 = *(undefined8 *)(lVar2 + 0x103d);
      uVar21 = *(undefined8 *)(lVar2 + 0x1045);
      puVar7[1] = *(undefined8 *)(lVar2 + 0x1038);
      *puVar7 = uVar12;
      *(undefined8 *)((long)puVar7 + 0xd) = uVar13;
      *(undefined8 *)((long)puVar7 + 0x15) = uVar21;
      local_58 = CONCAT26(uStack_3a,CONCAT24(uStack_3c,local_40));
      *(undefined1 *)((long)local_60 + local_58) = 0;
      local_10 = local_80;
      local_8 = local_78;
      local_40 = param_2 & 0x3fffff;
      local_30 = (param_2 & 0x1ff) + 2000;
      local_20 = uVar1;
      FUN_71006710f0(local_60,local_58);
      if (local_60 != local_50) {
        thunk_FUN_710081c200(local_60,local_50[0] + 1);
      }
      if (local_80 != &local_70) {
        thunk_FUN_710081c200(local_80,CONCAT35(local_70._5_3_,(undefined5)local_70) + 1);
      }
      return param_1;
    }
    if (((*(uint *)(lVar2 + 0x28) == (param_2 & 0x1ff)) && (*(uint *)(lVar2 + 0x24) <= uVar1)) &&
       (uVar1 <= *(uint *)(lVar2 + 0x20))) {
      FUN_71007e2260(&local_80);
      goto LAB_7100059ff0;
    }
    lVar2 = lVar2 + 0x30;
  } while( true );
}



// ===== FUN_710005a330 @ 710005a330 (size=100) =====

void FUN_710005a330(int param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == 0) {
    return;
  }
  puVar1 = (undefined8 *)FUN_71007adf60(0x30);
  *puVar1 = &PTR_LAB_7100adb540;
  *(int *)(puVar1 + 1) = param_1;
  FUN_7100059e40(puVar1 + 2,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_71007af000(puVar1,&PTR_PTR_FUN_7100ae7598,&LAB_7100059d80);
}



// ===== FUN_710005a3b0 @ 710005a3b0 (size=248) =====

long * FUN_710005a3b0(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong local_8;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    plVar4 = param_3 + 2;
    *param_3 = (long)plVar4;
    puVar2 = (undefined1 *)*param_1;
    local_8 = param_1[1];
    if (local_8 < 0x10) {
      lVar6 = local_8 + 1;
      if (local_8 == 0) goto LAB_710005a468;
LAB_710005a3e8:
      FUN_710080f900(plVar4,puVar2,lVar6);
      uVar5 = local_8;
    }
    else {
      plVar4 = (long *)FUN_71007e2140(param_3,&local_8,0);
      *param_3 = (long)plVar4;
      param_3[2] = local_8;
      lVar6 = local_8 + 1;
      if (local_8 == 0) {
LAB_710005a468:
        *(undefined1 *)plVar4 = *puVar2;
        uVar5 = local_8;
      }
      else {
        uVar5 = 0xffffffffffffffff;
        if (lVar6 != 0) goto LAB_710005a3e8;
      }
    }
    puVar1 = param_1 + 6;
    plVar4 = param_3 + 6;
    uVar3 = *(undefined4 *)(param_1 + 4);
    param_3[1] = uVar5;
    *(undefined4 *)(param_3 + 4) = uVar3;
    *(undefined4 *)((long)param_3 + 0x24) = *(undefined4 *)((long)param_1 + 0x24);
    *(undefined4 *)(param_3 + 5) = *(undefined4 *)(param_1 + 5);
    param_3 = plVar4;
    param_1 = puVar1;
    if (param_2 == puVar1) {
      return plVar4;
    }
  } while( true );
}



// ===== FUN_710005a4d0 @ 710005a4d0 (size=124) =====

bool FUN_710005a4d0(uint param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  
  if ((int)(param_1 | param_2) < 0) {
    return false;
  }
  if (param_2 == 0) {
    bVar2 = false;
    iVar1 = 0;
    if (-1 < param_3) {
LAB_710005a520:
      return iVar1 <= 0x7fffffff - param_4;
    }
  }
  else {
    bVar2 = false;
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = 0x7fffffff / (int)param_2;
    }
    if ((((int)param_1 <= iVar1) && (-1 < param_3)) && (bVar2 = true, param_3 != 0)) {
      iVar1 = 0;
      if (param_3 != 0) {
        iVar1 = 0x7fffffff / param_3;
      }
      bVar2 = false;
      if ((int)(param_1 * param_2) <= iVar1) {
        iVar1 = param_1 * param_2 * param_3;
        goto LAB_710005a520;
      }
    }
  }
  return bVar2;
}



// ===== FUN_710005a550 @ 710005a550 (size=1004) =====

void FUN_710005a550(char *param_1,int param_2,short *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  short *psVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int *piVar28;
  int local_100 [64];
  
  psVar4 = param_3 + 8;
  piVar28 = local_100;
  do {
    while( true ) {
      sVar13 = param_3[8];
      sVar14 = param_3[0x10];
      sVar15 = param_3[0x18];
      sVar16 = param_3[0x20];
      sVar17 = param_3[0x28];
      sVar18 = param_3[0x30];
      sVar19 = param_3[0x38];
      sVar20 = *param_3;
      if ((sVar19 != 0 || (sVar17 != 0 || (sVar13 != 0 || sVar14 != 0))) ||
          (sVar18 != 0 || (sVar15 != 0 || sVar16 != 0))) break;
      iVar21 = (int)sVar20 << 2;
      param_3 = param_3 + 1;
      *piVar28 = iVar21;
      piVar28[8] = iVar21;
      piVar28[0x10] = iVar21;
      piVar28[0x18] = iVar21;
      piVar28[0x20] = iVar21;
      piVar28[0x28] = iVar21;
      piVar28[0x30] = iVar21;
      piVar28[0x38] = iVar21;
      piVar28 = piVar28 + 1;
      if (psVar4 == param_3) goto LAB_710005a618;
    }
    iVar9 = ((int)sVar14 + (int)sVar18) * 0x8a9;
    iVar22 = ((int)sVar16 + (int)sVar20) * 0x1000;
    param_3 = param_3 + 1;
    iVar10 = iVar9 + sVar18 * -0x1d8f;
    iVar9 = iVar9 + sVar14 * 0xc3f;
    iVar23 = ((int)sVar20 - (int)sVar16) * 0x1000;
    iVar24 = ((int)sVar17 + (int)sVar13) * -0x63d;
    iVar12 = ((int)sVar19 + (int)sVar15) * -0x1f62;
    iVar11 = ((int)sVar19 + (int)sVar15 + (int)sVar17 + (int)sVar13) * 0x12d0;
    iVar21 = iVar9 + iVar22 + 0x200;
    iVar5 = iVar10 + iVar23 + 0x200;
    iVar23 = (iVar23 - iVar10) + 0x200;
    iVar22 = (iVar22 - iVar9) + 0x200;
    iVar10 = iVar11 + ((int)sVar19 + (int)sVar13) * -0xe65;
    iVar11 = iVar11 + ((int)sVar17 + (int)sVar15) * -0x2901;
    iVar9 = iVar10 + iVar24 + sVar13 * 0x1805;
    iVar10 = iVar10 + iVar12 + sVar19 * 0x4c7;
    iVar12 = iVar11 + iVar12 + sVar15 * 0x312a;
    iVar11 = iVar11 + iVar24 + sVar17 * 0x20da;
    piVar28[0x38] = iVar21 - iVar9 >> 10;
    *piVar28 = iVar9 + iVar21 >> 10;
    piVar28[8] = iVar12 + iVar5 >> 10;
    piVar28[0x30] = iVar5 - iVar12 >> 10;
    piVar28[0x10] = iVar11 + iVar23 >> 10;
    piVar28[0x28] = iVar23 - iVar11 >> 10;
    piVar28[0x18] = iVar10 + iVar22 >> 10;
    piVar28[0x20] = iVar22 - iVar10 >> 10;
    piVar28 = piVar28 + 1;
  } while (psVar4 != param_3);
LAB_710005a618:
  piVar28 = local_100;
  do {
    piVar1 = piVar28 + 6;
    iVar9 = piVar28[7];
    piVar2 = piVar28 + 2;
    iVar10 = piVar28[3];
    piVar3 = piVar28 + 4;
    iVar11 = piVar28[5];
    iVar21 = *piVar28;
    iVar12 = piVar28[1];
    piVar28 = piVar28 + 8;
    iVar25 = (*piVar1 + *piVar2) * 0x8a9;
    iVar24 = iVar25 + *piVar1 * -0x1d8f;
    iVar25 = iVar25 + *piVar2 * 0xc3f;
    iVar22 = (*piVar3 + iVar21) * 0x1000;
    iVar23 = (iVar21 - *piVar3) * 0x1000;
    iVar21 = iVar22 + iVar25 + 0x1010000;
    iVar26 = (iVar12 + iVar11) * -0x63d;
    iVar5 = iVar23 + iVar24 + 0x1010000;
    iVar27 = (iVar10 + iVar9) * -0x1f62;
    iVar23 = (iVar23 - iVar24) + 0x1010000;
    iVar22 = (iVar22 - iVar25) + 0x1010000;
    iVar25 = (iVar12 + iVar11 + iVar10 + iVar9) * 0x12d0;
    iVar24 = iVar25 + (iVar12 + iVar9) * -0xe65;
    iVar25 = iVar25 + (iVar10 + iVar11) * -0x2901;
    iVar12 = iVar26 + iVar24 + iVar12 * 0x1805;
    iVar11 = iVar26 + iVar25 + iVar11 * 0x20da;
    iVar25 = iVar27 + iVar25 + iVar10 * 0x312a;
    iVar10 = iVar21 + iVar12;
    iVar21 = iVar21 - iVar12;
    iVar9 = iVar27 + iVar24 + iVar9 * 0x4c7;
    uVar6 = iVar21 >> 0x11;
    uVar7 = iVar10 >> 0x11;
    cVar8 = (char)uVar7;
    if (0xff < uVar7) {
      cVar8 = (char)~(byte)(iVar10 >> 0x1f) >> 7;
    }
    *param_1 = cVar8;
    cVar8 = (char)uVar6;
    if (0xff < uVar6) {
      cVar8 = (char)~(byte)(iVar21 >> 0x1f) >> 7;
    }
    iVar21 = iVar5 + iVar25;
    param_1[7] = cVar8;
    uVar6 = iVar21 >> 0x11;
    iVar5 = iVar5 - iVar25;
    uVar7 = iVar5 >> 0x11;
    cVar8 = (char)uVar6;
    if (0xff < uVar6) {
      cVar8 = (char)~(byte)(iVar21 >> 0x1f) >> 7;
    }
    param_1[1] = cVar8;
    cVar8 = (char)uVar7;
    if (0xff < uVar7) {
      cVar8 = (char)~(byte)(iVar5 >> 0x1f) >> 7;
    }
    param_1[6] = cVar8;
    iVar21 = iVar23 + iVar11;
    iVar23 = iVar23 - iVar11;
    uVar6 = iVar21 >> 0x11;
    uVar7 = iVar23 >> 0x11;
    cVar8 = (char)uVar6;
    if (0xff < uVar6) {
      cVar8 = (char)~(byte)(iVar21 >> 0x1f) >> 7;
    }
    param_1[2] = cVar8;
    cVar8 = (char)uVar7;
    if (0xff < uVar7) {
      cVar8 = (char)~(byte)(iVar23 >> 0x1f) >> 7;
    }
    param_1[5] = cVar8;
    iVar21 = iVar22 + iVar9;
    iVar22 = iVar22 - iVar9;
    uVar6 = iVar21 >> 0x11;
    uVar7 = iVar22 >> 0x11;
    cVar8 = (char)uVar6;
    if (0xff < uVar6) {
      cVar8 = (char)~(byte)(iVar21 >> 0x1f) >> 7;
    }
    param_1[3] = cVar8;
    cVar8 = (char)uVar7;
    if (0xff < uVar7) {
      cVar8 = (char)~(byte)(iVar22 >> 0x1f) >> 7;
    }
    param_1[4] = cVar8;
    param_1 = param_1 + param_2;
  } while (piVar28 != (int *)&stack0x00000000);
  return;
}



// ===== FUN_710005aa30 @ 710005aa30 (size=100) =====

void FUN_710005aa30(long param_1,undefined1 *param_2,undefined8 param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  
  if (0 < param_4) {
    iVar4 = 0;
    puVar1 = param_2 + param_4;
    do {
      if (0 < param_5) {
        do {
          puVar2 = (undefined1 *)(param_1 + iVar4);
          do {
            puVar3 = puVar2 + 1;
            *puVar2 = *param_2;
            puVar2 = puVar3;
          } while (puVar3 != (undefined1 *)(param_1 + param_5 + (long)iVar4));
          param_2 = param_2 + 1;
          iVar4 = iVar4 + param_5;
        } while (param_2 != puVar1);
        return;
      }
      param_2 = param_2 + 1;
      iVar4 = iVar4 + param_5;
    } while (param_2 != puVar1);
  }
  return;
}



// ===== FUN_710005aaa0 @ 710005aaa0 (size=228) =====

void FUN_710005aaa0(char *param_1,long param_2,long param_3,long param_4,int param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  
  lVar12 = 0;
  if (0 < param_5) {
    do {
      bVar5 = *(byte *)(param_2 + lVar12);
      bVar6 = *(byte *)(param_3 + lVar12);
      bVar7 = *(byte *)(param_4 + lVar12);
      lVar12 = lVar12 + 1;
      param_1[3] = -1;
      iVar1 = (uint)bVar5 * 0x100000 + 0x80000;
      iVar10 = bVar6 - 0x80;
      iVar11 = bVar7 - 0x80;
      uVar8 = iVar1 + iVar10 * 0x1c5a00;
      uVar9 = iVar1 + iVar11 * 0x166f00;
      uVar2 = (iVar10 * -0x58200 & 0xffff0000U) + iVar1 + iVar11 * -0xb6d00;
      cVar3 = (char)~(byte)((int)uVar9 >> 0x1f) >> 7;
      if ((uint)((int)uVar9 >> 0x14) < 0x100) {
        cVar3 = (char)(uVar9 >> 0x14);
      }
      cVar4 = (char)~(byte)((int)uVar2 >> 0x1f) >> 7;
      if ((uint)((int)uVar2 >> 0x14) < 0x100) {
        cVar4 = (char)(uVar2 >> 0x14);
      }
      *param_1 = cVar3;
      cVar3 = (char)~(byte)((int)uVar8 >> 0x1f) >> 7;
      if ((uint)((int)uVar8 >> 0x14) < 0x100) {
        cVar3 = (char)(uVar8 >> 0x14);
      }
      param_1[1] = cVar4;
      param_1[2] = cVar3;
      param_1 = param_1 + param_6;
    } while (param_5 != lVar12);
  }
  return;
}



// ===== FUN_710005ab90 @ 710005ab90 (size=76) =====

void FUN_710005ab90(long *param_1)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  
  uVar1 = *(uint *)(param_1 + 2);
  uVar2 = *(uint *)((long)param_1 + 0x14);
  do {
    if (uVar2 >> (ulong)(uVar1 & 0x1f) != 0) {
      *param_1 = param_1[1];
      return;
    }
    pbVar3 = (byte *)*param_1;
    if (pbVar3 < (byte *)param_1[1]) {
      *param_1 = (long)(pbVar3 + 1);
      uVar2 = uVar2 | (uint)*pbVar3 << (ulong)(uVar1 & 0x1f);
    }
    uVar1 = uVar1 + 8;
    *(uint *)(param_1 + 2) = uVar1;
    *(uint *)((long)param_1 + 0x14) = uVar2;
  } while ((int)uVar1 < 0x19);
  return;
}



// ===== FUN_710005add0 @ 710005add0 (size=152) =====

int FUN_710005add0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_1 == 2) {
    if (-1 < param_2) {
      if (param_2 < param_3) {
        return param_2;
      }
      iVar1 = (param_3 * 2 - param_2) + -1;
      if (param_2 + param_3 * -2 < 0 == SBORROW4(param_2,param_3 * 2)) {
        iVar1 = 0;
      }
      return iVar1;
    }
    iVar1 = -param_2;
  }
  else {
    if (param_1 == 3) {
      if (param_2 < 0) {
        iVar1 = 0;
        if (param_3 != 0) {
          iVar1 = -param_2 / param_3;
        }
        iVar1 = -param_2 - iVar1 * param_3;
        param_3 = param_3 - iVar1;
        if (iVar1 == 0) {
          param_3 = 0;
        }
        return param_3;
      }
      iVar1 = 0;
      if (param_3 != 0) {
        iVar1 = param_2 / param_3;
      }
      return param_2 - iVar1 * param_3;
    }
    if (param_1 != 1) {
      return 0;
    }
    iVar1 = param_2;
    if (param_2 < 0) {
      return 0;
    }
  }
  if (param_2 < param_3) {
    return iVar1;
  }
  return param_3 + -1;
}



// ===== FUN_710005ae70 @ 710005ae70 (size=752) =====

void FUN_710005ae70(long param_1,undefined4 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  ulong uVar13;
  long lVar14;
  undefined4 *puVar15;
  ulong uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  ulong uVar19;
  long lVar20;
  int *piVar21;
  ulong uVar22;
  undefined4 *puVar23;
  int iVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  
  iVar7 = *(int *)(param_1 + 0x20);
  if (iVar7 < 1) {
    return;
  }
  uVar22 = 0;
  lVar20 = 0;
  piVar21 = *(int **)(param_1 + 0x70);
  puVar6 = *(undefined4 **)(param_1 + 0x78);
  uVar8 = *(uint *)(param_1 + 0x4c);
  iVar9 = *(int *)(param_1 + 0xa8);
  uVar16 = -(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar8 << 2;
  lVar1 = *(long *)(param_1 + 0x98) + (long)(int)(uVar8 * *(int *)(param_1 + 0xb8)) * 4;
  puVar15 = param_2;
  puVar23 = puVar6;
LAB_710005aed0:
  iVar4 = *piVar21;
  iVar5 = piVar21[1];
  if (uVar8 == 3) {
    if (iVar4 <= iVar5) {
      uVar26 = puVar15[2];
      uVar25 = *puVar15;
      uVar27 = puVar15[1];
      puVar12 = (undefined4 *)(lVar1 + (long)iVar4 * 0xc);
      puVar17 = puVar23;
      do {
        puVar18 = puVar17 + 1;
        uVar29 = *puVar17;
        uVar25 = NEON_fmadd(*puVar12,uVar29,uVar25);
        *puVar15 = uVar25;
        uVar27 = NEON_fmadd(puVar12[1],uVar29,uVar27);
        puVar15[1] = uVar27;
        uVar26 = NEON_fmadd(puVar12[2],uVar29,uVar26);
        puVar15[2] = uVar26;
        puVar12 = puVar12 + 3;
        puVar17 = puVar18;
      } while (puVar6 + (uint)(iVar5 - iVar4) + uVar22 + 1 != puVar18);
    }
  }
  else if ((int)uVar8 < 4) {
    if (uVar8 == 1) {
      if (iVar4 <= iVar5) {
        uVar26 = param_2[lVar20];
        lVar14 = (long)iVar4;
        do {
          lVar10 = lVar14 * 4;
          lVar11 = uVar22 + lVar14;
          lVar14 = lVar14 + 1;
          uVar26 = NEON_fmadd(*(undefined4 *)(lVar1 + lVar10),puVar6[lVar11 - iVar4],uVar26);
          param_2[lVar20] = uVar26;
        } while ((int)lVar14 <= iVar5);
      }
    }
    else {
      if (uVar8 != 2) goto LAB_710005b06c;
      if (iVar4 <= iVar5) {
        uVar27 = *puVar15;
        uVar26 = puVar15[1];
        puVar12 = puVar23;
        puVar17 = (undefined4 *)(lVar1 + (long)iVar4 * 8);
        do {
          uVar25 = *puVar12;
          puVar18 = puVar17 + 2;
          uVar27 = NEON_fmadd(*puVar17,uVar25,uVar27);
          *puVar15 = uVar27;
          uVar26 = NEON_fmadd(puVar17[1],uVar25,uVar26);
          puVar15[1] = uVar26;
          puVar12 = puVar12 + 1;
          puVar17 = puVar18;
        } while (puVar18 !=
                 (undefined4 *)(lVar1 + 8 + ((ulong)(uint)(iVar5 - iVar4) + (long)iVar4) * 8));
      }
    }
  }
  else if (uVar8 == 4) {
    if (iVar4 <= iVar5) {
      uVar29 = *puVar15;
      uVar25 = puVar15[1];
      uVar27 = puVar15[2];
      uVar26 = puVar15[3];
      puVar12 = (undefined4 *)(lVar1 + (long)iVar4 * 0x10);
      puVar17 = puVar23;
      do {
        puVar18 = puVar12 + 4;
        uVar28 = *puVar17;
        uVar29 = NEON_fmadd(*puVar12,uVar28,uVar29);
        *puVar15 = uVar29;
        uVar25 = NEON_fmadd(puVar12[1],uVar28,uVar25);
        puVar15[1] = uVar25;
        uVar27 = NEON_fmadd(puVar12[2],uVar28,uVar27);
        puVar15[2] = uVar27;
        uVar26 = NEON_fmadd(puVar12[3],uVar28,uVar26);
        puVar15[3] = uVar26;
        puVar12 = puVar18;
        puVar17 = puVar17 + 1;
      } while ((undefined4 *)(lVar1 + 0x10 + ((ulong)(uint)(iVar5 - iVar4) + (long)iVar4) * 0x10) !=
               puVar18);
    }
  }
  else {
LAB_710005b06c:
    if (iVar4 <= iVar5) {
      iVar24 = iVar4 * uVar8;
      uVar19 = uVar22 & 0xffffffff;
      uVar3 = (int)uVar22 + 1 + (iVar5 - iVar4);
      do {
        if (0 < (int)uVar8) goto LAB_710005b0a8;
        uVar2 = (int)uVar19 + 1;
        uVar19 = (ulong)uVar2;
        iVar24 = iVar24 + uVar8;
      } while (uVar2 != uVar3);
    }
  }
  goto joined_r0x00710005b154;
LAB_710005b0a8:
  do {
    uVar26 = puVar6[(int)uVar19];
    uVar13 = 0;
    do {
      uVar27 = NEON_fmadd(*(undefined4 *)(lVar1 + (long)iVar24 * 4 + uVar13),uVar26,
                          *(undefined4 *)((long)puVar15 + uVar13));
      *(undefined4 *)((long)puVar15 + uVar13) = uVar27;
      uVar13 = uVar13 + 4;
    } while (uVar13 != uVar16);
    uVar2 = (int)uVar19 + 1;
    uVar19 = (ulong)uVar2;
    iVar24 = iVar24 + uVar8;
  } while (uVar2 != uVar3);
joined_r0x00710005b154:
  uVar22 = uVar22 + (long)iVar9;
  puVar23 = puVar23 + iVar9;
  puVar15 = (undefined4 *)((long)puVar15 + uVar16);
  piVar21 = piVar21 + 2;
  lVar20 = lVar20 + 1;
  if (lVar20 == iVar7) {
    return;
  }
  goto LAB_710005aed0;
}



// ===== FUN_710005b160 @ 710005b160 (size=884) =====

void FUN_710005b160(long param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  undefined4 *puVar9;
  long lVar10;
  int *piVar11;
  undefined4 *puVar12;
  long lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 *puVar13;
  
  piVar11 = *(int **)(param_1 + 0x70);
  lVar5 = *(long *)(param_1 + 0x78);
  iVar18 = *(int *)(param_1 + 0xb8);
  uVar6 = *(uint *)(param_1 + 0x4c);
  iVar7 = *(int *)(param_1 + 0xa8);
  lVar1 = *(long *)(param_1 + 0x98) + (long)(int)(uVar6 * iVar18) * 4;
  uVar3 = *(int *)(param_1 + 8) + iVar18 * 2;
  if (uVar6 == 3) {
    if ((int)uVar3 < 1) {
      return;
    }
    uVar6 = iVar18 * -3;
    iVar18 = 0;
    piVar11 = piVar11 + 1;
    piVar2 = piVar11 + (ulong)uVar3 * 2;
    do {
      iVar15 = piVar11[-1];
      iVar17 = *piVar11;
      if (iVar15 <= iVar17) {
        uVar8 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2;
        puVar9 = (undefined4 *)(param_2 + (long)iVar15 * 0xc);
        puVar12 = (undefined4 *)(lVar5 + (long)iVar18 * 4);
        do {
          puVar13 = puVar12 + 1;
          uVar20 = *puVar12;
          uVar19 = NEON_fmadd(*(undefined4 *)(lVar1 + uVar8),uVar20,*puVar9);
          *puVar9 = uVar19;
          uVar19 = NEON_fmadd(*(undefined4 *)(lVar1 + uVar8 + 4),uVar20,puVar9[1]);
          puVar9[1] = uVar19;
          uVar19 = NEON_fmadd(*(undefined4 *)(lVar1 + uVar8 + 8),uVar20,puVar9[2]);
          puVar9[2] = uVar19;
          puVar9 = puVar9 + 3;
          puVar12 = puVar13;
        } while ((undefined4 *)(lVar5 + 4 + ((ulong)(uint)(iVar17 - iVar15) + (long)iVar18) * 4) !=
                 puVar13);
      }
      piVar11 = piVar11 + 2;
      iVar18 = iVar18 + iVar7;
      uVar6 = uVar6 + 3;
    } while (piVar2 != piVar11);
    return;
  }
  if ((int)uVar6 < 4) {
    if (uVar6 == 1) {
      if ((int)uVar3 < 1) {
        return;
      }
      iVar15 = -iVar18;
      piVar11 = piVar11 + 1;
      iVar17 = 0;
      do {
        iVar4 = *piVar11;
        if (piVar11[-1] <= iVar4) {
          lVar10 = (long)piVar11[-1];
          lVar14 = lVar10 * -4;
          do {
            uVar19 = NEON_fmadd(*(undefined4 *)(lVar1 + (long)iVar15 * 4),
                                *(undefined4 *)(lVar5 + lVar14 + (long)iVar17 * 4 + lVar10 * 4),
                                *(undefined4 *)(param_2 + lVar10 * 4));
            *(undefined4 *)(param_2 + lVar10 * 4) = uVar19;
            lVar10 = lVar10 + 1;
          } while ((int)lVar10 <= iVar4);
        }
        iVar15 = iVar15 + 1;
        iVar17 = iVar17 + iVar7;
        piVar11 = piVar11 + 2;
      } while (uVar3 - iVar18 != iVar15);
      return;
    }
    if (uVar6 == 2) {
      if ((int)uVar3 < 1) {
        return;
      }
      uVar6 = iVar18 * -2;
      iVar18 = 0;
      piVar2 = piVar11 + (ulong)uVar3 * 2;
      do {
        iVar15 = *piVar11;
        iVar17 = piVar11[1];
        if (iVar15 <= iVar17) {
          uVar8 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2;
          puVar9 = (undefined4 *)(param_2 + (long)iVar15 * 8);
          puVar12 = (undefined4 *)(lVar5 + (long)iVar18 * 4);
          do {
            uVar20 = *puVar12;
            puVar13 = puVar9 + 2;
            uVar19 = NEON_fmadd(*(undefined4 *)(lVar1 + uVar8),uVar20,*puVar9);
            *puVar9 = uVar19;
            uVar19 = NEON_fmadd(*(undefined4 *)(lVar1 + uVar8 + 4),uVar20,puVar9[1]);
            puVar9[1] = uVar19;
            puVar9 = puVar13;
            puVar12 = puVar12 + 1;
          } while ((undefined4 *)(param_2 + 8 + ((ulong)(uint)(iVar17 - iVar15) + (long)iVar15) * 8)
                   != puVar13);
        }
        piVar11 = piVar11 + 2;
        iVar18 = iVar18 + iVar7;
        uVar6 = uVar6 + 2;
      } while (piVar2 != piVar11);
      return;
    }
  }
  else if (uVar6 == 4) {
    if ((int)uVar3 < 1) {
      return;
    }
    uVar6 = iVar18 * -4;
    iVar18 = 0;
    piVar2 = piVar11 + (ulong)uVar3 * 2;
    do {
      iVar15 = *piVar11;
      iVar17 = piVar11[1];
      if (iVar15 <= iVar17) {
        uVar8 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2;
        puVar9 = (undefined4 *)(param_2 + (long)iVar15 * 0x10);
        puVar12 = (undefined4 *)(lVar5 + (long)iVar18 * 4);
        do {
          uVar20 = *puVar12;
          puVar13 = puVar9 + 4;
          uVar19 = NEON_fmadd(*(undefined4 *)(lVar1 + uVar8),uVar20,*puVar9);
          *puVar9 = uVar19;
          uVar19 = NEON_fmadd(*(undefined4 *)(lVar1 + uVar8 + 4),uVar20,puVar9[1]);
          puVar9[1] = uVar19;
          uVar19 = NEON_fmadd(*(undefined4 *)(lVar1 + uVar8 + 8),uVar20,puVar9[2]);
          puVar9[2] = uVar19;
          uVar19 = NEON_fmadd(*(undefined4 *)(lVar1 + uVar8 + 0xc),uVar20,puVar9[3]);
          puVar9[3] = uVar19;
          puVar9 = puVar13;
          puVar12 = puVar12 + 1;
        } while (puVar13 !=
                 (undefined4 *)
                 (param_2 + 0x10 + ((ulong)(uint)(iVar17 - iVar15) + (long)iVar15) * 0x10));
      }
      piVar11 = piVar11 + 2;
      iVar18 = iVar18 + iVar7;
      uVar6 = uVar6 + 4;
    } while (piVar11 != piVar2);
    return;
  }
  if ((int)uVar3 < 1) {
    return;
  }
  iVar18 = -(uVar6 * iVar18);
  piVar2 = piVar11 + (ulong)uVar3 * 2;
  iVar15 = 0;
  while( true ) {
    iVar17 = *piVar11;
    if (iVar17 <= piVar11[1]) break;
joined_r0x00710005b4cc:
    iVar18 = iVar18 + uVar6;
    iVar15 = iVar15 + iVar7;
    piVar11 = piVar11 + 2;
    if (piVar11 == piVar2) {
      return;
    }
  }
  iVar16 = iVar17 * uVar6;
  iVar4 = (piVar11[1] - iVar17) + iVar15 + 1;
  iVar17 = iVar15;
LAB_710005b3a0:
  if ((int)uVar6 < 1) goto code_r0x00710005b3a8;
  do {
    uVar19 = *(undefined4 *)(lVar5 + (long)iVar17 * 4);
    uVar8 = 0;
    lVar10 = param_2 + (long)iVar16 * 4;
    do {
      uVar20 = NEON_fmadd(*(undefined4 *)(lVar1 + (long)iVar18 * 4 + uVar8),uVar19,
                          *(undefined4 *)(lVar10 + uVar8));
      *(undefined4 *)(lVar10 + uVar8) = uVar20;
      uVar8 = uVar8 + 4;
    } while (uVar8 != (-(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2));
    iVar17 = iVar17 + 1;
    iVar16 = iVar16 + uVar6;
  } while (iVar17 != iVar4);
  goto joined_r0x00710005b4cc;
code_r0x00710005b3a8:
  iVar17 = iVar17 + 1;
  iVar16 = iVar16 + uVar6;
  if (iVar17 == iVar4) goto joined_r0x00710005b4cc;
  goto LAB_710005b3a0;
}



// ===== FUN_710005b4e0 @ 710005b4e0 (size=228) =====

bool FUN_710005b4e0(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 == '1') {
    if (param_1[1] != '\0') {
      return false;
    }
  }
  else {
    if (cVar1 == 't') {
      if (param_1[1] == 'y') {
        if (param_1[2] != 'p') {
          return false;
        }
        return param_1[3] == '1';
      }
      if (param_1[1] != 'r') {
        return false;
      }
      if (param_1[2] != 'u') {
        return false;
      }
      return param_1[3] == 'e';
    }
    if (cVar1 == 'O') {
      if (param_1[1] != 'T') {
        return false;
      }
      if (param_1[2] != 'T') {
        return false;
      }
      return param_1[3] == 'O';
    }
    if ((cVar1 != '\0') || (param_1[1] != '\x01')) {
      return false;
    }
  }
  if (param_1[2] != '\0') {
    return false;
  }
  return param_1[3] == '\0';
}



// ===== FUN_710005b5d0 @ 710005b5d0 (size=152) =====

uint FUN_710005b5d0(long param_1,uint param_2,char *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)*(byte *)(param_1 + (ulong)param_2 + 4) * 0x100 +
          (uint)*(byte *)(param_1 + (ulong)param_2 + 4 + 1) & 0xffff;
  if (uVar2 != 0) {
    param_2 = param_2 + 0xc;
    uVar3 = 0;
    do {
      if ((((*(char *)(param_1 + (ulong)param_2) == *param_3) &&
           (lVar1 = param_1 + (ulong)param_2, *(char *)(lVar1 + 1) == param_3[1])) &&
          (*(char *)(lVar1 + 2) == param_3[2])) && (*(char *)(lVar1 + 3) == param_3[3])) {
        uVar2 = (*(uint *)(lVar1 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar1 + 8) & 0xff00ff) << 8;
        return uVar2 >> 0x10 | uVar2 << 0x10;
      }
      uVar3 = uVar3 + 1;
      param_2 = param_2 + 0x10;
    } while (uVar2 != uVar3);
  }
  return 0;
}



// ===== FUN_710005b670 @ 710005b670 (size=160) =====

uint FUN_710005b670(char *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_710005b4e0();
  if (iVar2 != 0) {
    return -(uint)(param_2 != 0);
  }
  if ((((*param_1 == 't') && (param_1[1] == 't')) && (param_1[2] == 'c')) &&
     (((param_1[3] == 'f' &&
       (uVar1 = (*(uint *)(param_1 + 4) & 0xff00ff00) >> 8 |
                (*(uint *)(param_1 + 4) & 0xff00ff) << 8,
       ((uVar1 >> 0x10 | uVar1 << 0x10) - 0x10000 & 0xfffeffff) == 0)) &&
      (uVar1 = (*(uint *)(param_1 + 8) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 8) & 0xff00ff) << 8
      , param_2 < (int)(uVar1 >> 0x10 | uVar1 << 0x10))))) {
    uVar1 = (*(uint *)(param_1 + (long)(param_2 << 2) + 0xc) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + (long)(param_2 << 2) + 0xc) & 0xff00ff) << 8;
    return uVar1 >> 0x10 | uVar1 << 0x10;
  }
  return 0xffffffff;
}



// ===== FUN_710005b710 @ 710005b710 (size=160) =====

int FUN_710005b710(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  
  if ((param_2 < *(int *)(param_1 + 0x14)) && (*(int *)(param_1 + 0x3c) < 2)) {
    lVar5 = *(long *)(param_1 + 8);
    if (*(int *)(param_1 + 0x3c) == 0) {
      lVar1 = (long)*(int *)(param_1 + 0x18) + (long)(param_2 << 1);
      uVar3 = ((uint)*(byte *)(lVar5 + lVar1) * 0x100 + (uint)*(byte *)(lVar5 + lVar1 + 1) & 0xffff)
              << 1;
      uVar2 = ((uint)*(byte *)(lVar5 + lVar1 + 2) * 0x100 + (uint)*(byte *)(lVar5 + lVar1 + 2 + 1) &
              0xffff) << 1;
    }
    else {
      lVar1 = (long)*(int *)(param_1 + 0x18) + (long)(param_2 << 2);
      uVar3 = *(uint *)(lVar5 + lVar1);
      uVar2 = *(uint *)(lVar5 + lVar1 + 4);
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    }
    iVar4 = *(int *)(param_1 + 0x20) + uVar3;
    if (iVar4 == *(int *)(param_1 + 0x20) + uVar2) {
      iVar4 = -1;
    }
    return iVar4;
  }
  return -1;
}



// ===== FUN_710005b7b0 @ 710005b7b0 (size=216) =====

int FUN_710005b7b0(long param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  undefined4 param_6,int param_7,int param_8,int param_9,int param_10)

{
  uint6 uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar4 = (long)param_2 * 0xe;
  iVar3 = param_2 + 1;
  puVar5 = (undefined8 *)(param_1 + lVar4);
  if (param_4 != 0) {
    uVar1 = CONCAT24((short)param_8,param_6) & 0xffff0000ffff;
    uVar2 = (ulong)CONCAT24((short)param_7,param_5) & 0xffffffff0000ffff;
    if (param_3 != 0) {
      iVar3 = param_2 + 2;
      *(undefined1 *)((long)puVar5 + 0xc) = 3;
      *(ulong *)(param_1 + lVar4) =
           CONCAT26((undefined2)param_10,
                    CONCAT24((undefined2)param_9,
                             CONCAT22((short)(param_10 + param_8 >> 1),
                                      (short)((uint)(param_9 + param_7) >> 1))));
      lVar4 = lVar4 + 0xe;
      puVar5 = (undefined8 *)(param_1 + lVar4);
    }
    *(undefined1 *)((long)puVar5 + 0xc) = 3;
    *(ulong *)(param_1 + lVar4) =
         CONCAT26((short)(uVar1 >> 0x20),
                  CONCAT24((short)(uVar2 >> 0x20),CONCAT22((short)uVar1,(short)uVar2)));
    return iVar3;
  }
  if (param_3 != 0) {
    *(undefined1 *)((long)puVar5 + 0xc) = 3;
    uVar1 = CONCAT24((undefined2)param_10,param_6) & 0xffff0000ffff;
    uVar2 = (ulong)CONCAT24((undefined2)param_9,param_5) & 0xffffffff0000ffff;
    *puVar5 = CONCAT26((short)(uVar1 >> 0x20),
                       CONCAT24((short)(uVar2 >> 0x20),CONCAT22((short)uVar1,(short)uVar2)));
    return iVar3;
  }
  *(short *)puVar5 = (short)param_5;
  *(short *)((long)puVar5 + 2) = (short)param_6;
  *(undefined4 *)((long)puVar5 + 4) = 0;
  *(undefined1 *)((long)puVar5 + 0xc) = 2;
  return iVar3;
}



// ===== FUN_710005b890 @ 710005b890 (size=164) =====

void FUN_710005b890(long param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x1c) < param_2) || (*(int *)(param_1 + 4) == 0)) {
    *(int *)(param_1 + 0x1c) = param_2;
  }
  if ((*(int *)(param_1 + 0x24) < param_3) || (*(int *)(param_1 + 4) == 0)) {
    *(int *)(param_1 + 0x24) = param_3;
    iVar1 = *(int *)(param_1 + 0x20);
    if (param_2 < *(int *)(param_1 + 0x18)) {
LAB_710005b8f8:
      *(int *)(param_1 + 0x18) = param_2;
      if ((iVar1 <= param_3) && (*(int *)(param_1 + 4) != 0)) {
        *(undefined4 *)(param_1 + 4) = 1;
        return;
      }
      goto LAB_710005b8d8;
    }
    if (*(int *)(param_1 + 4) == 0) {
      *(int *)(param_1 + 0x18) = param_2;
      goto LAB_710005b8d8;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20);
    if (param_2 < *(int *)(param_1 + 0x18)) goto LAB_710005b8f8;
  }
  if (iVar1 <= param_3) {
    *(undefined4 *)(param_1 + 4) = 1;
    return;
  }
LAB_710005b8d8:
  *(int *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 4) = 1;
  return;
}



// ===== FUN_710005b940 @ 710005b940 (size=200) =====

void FUN_710005b940(float param_1,float param_2,float param_3,float param_4,float param_5,
                   float param_6,int *param_7)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  undefined4 extraout_s0;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  undefined4 extraout_s31;
  
  fVar11 = (float)param_7[4];
  fVar6 = (float)param_7[5];
  param_3 = param_1 + fVar11 + param_3;
  param_4 = param_2 + fVar6 + param_4;
  param_5 = param_3 + param_5;
  param_6 = param_4 + param_6;
  iVar7 = (int)param_3;
  iVar8 = (int)param_4;
  param_7[4] = (int)param_5;
  param_7[5] = (int)param_6;
  iVar9 = (int)param_5;
  iVar10 = (int)param_6;
  if (*param_7 == 0) {
    iVar1 = param_7[0xc];
    lVar5 = *(long *)(param_7 + 10);
    lVar4 = (long)iVar1 * 0xe;
    lVar3 = lVar5 + lVar4;
    *(undefined1 *)(lVar3 + 0xc) = 4;
    *(short *)(lVar5 + lVar4) = (short)iVar9;
    *(short *)(lVar3 + 2) = (short)iVar10;
    *(short *)(lVar3 + 4) = (short)(int)(param_1 + fVar11);
    *(short *)(lVar3 + 6) = (short)(int)(param_2 + fVar6);
    *(short *)(lVar3 + 8) = (short)iVar7;
    *(short *)(lVar3 + 10) = (short)iVar8;
    param_7[0xc] = iVar1 + 1;
    return;
  }
  uVar2 = FUN_710005b890(param_7,iVar9,iVar10);
  uVar2 = FUN_710005b890(uVar2,extraout_s31,extraout_s0);
  lVar3 = FUN_710005b890(uVar2,iVar7,iVar8);
  *(int *)(lVar3 + 0x30) = *(int *)(lVar3 + 0x30) + 1;
  return;
}



// ===== FUN_710005ba10 @ 710005ba10 (size=436) =====

void FUN_710005ba10(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  
  if ((int)param_2 < 0xd) {
    return;
  }
LAB_710005ba3c:
  uVar10 = param_2 - 1;
  puVar7 = (undefined8 *)((long)param_1 + (ulong)(uint)((int)param_2 >> 1) * 0x14);
  puVar8 = (undefined8 *)((long)param_1 + ((long)(int)param_2 - 1U & 0xffffffff) * 0x14);
  fVar13 = *(float *)((long)puVar7 + 4);
  fVar12 = *(float *)((long)puVar8 + 4);
  if (*(float *)((long)param_1 + 4) < fVar13 != fVar13 < fVar12) {
    uVar4 = *(undefined4 *)(puVar7 + 2);
    uVar2 = puVar7[1];
    if (*(float *)((long)param_1 + 4) < fVar12 == fVar13 < fVar12) {
      puVar8 = param_1;
    }
    uVar1 = *puVar8;
    uVar3 = puVar8[1];
    *puVar8 = *puVar7;
    puVar8[1] = uVar2;
    uVar5 = *(undefined4 *)(puVar8 + 2);
    *(undefined4 *)(puVar8 + 2) = uVar4;
    *puVar7 = uVar1;
    puVar7[1] = uVar3;
    *(undefined4 *)(puVar7 + 2) = uVar5;
  }
  uVar1 = puVar7[1];
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar4 = *(undefined4 *)(puVar7 + 2);
  *param_1 = *puVar7;
  param_1[1] = uVar1;
  iVar9 = 1;
  uVar5 = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)(param_1 + 2) = uVar4;
  *puVar7 = uVar2;
  puVar7[1] = uVar3;
  fVar12 = *(float *)((long)param_1 + 4);
  *(undefined4 *)(puVar7 + 2) = uVar5;
  puVar8 = param_1;
  do {
    puVar11 = (undefined8 *)((long)puVar8 + 0x14);
    puVar7 = (undefined8 *)((long)param_1 + (ulong)uVar10 * 0x14);
    if (fVar12 <= *(float *)(puVar8 + 3)) {
      fVar13 = *(float *)((long)puVar7 + 4);
      puVar6 = (undefined8 *)((long)param_1 + (ulong)uVar10 * 0x14 + -0x14);
      if (fVar13 != fVar12 && fVar13 < fVar12 == (NAN(fVar13) || NAN(fVar12))) {
        do {
          puVar7 = puVar6;
          uVar10 = uVar10 - 1;
          fVar13 = *(float *)((long)puVar7 + 4);
          puVar6 = (undefined8 *)((long)puVar7 + -0x14);
        } while (fVar13 != fVar12 && fVar13 < fVar12 == (NAN(fVar13) || NAN(fVar12)));
      }
      if ((int)uVar10 <= iVar9) break;
      uVar1 = puVar7[1];
      uVar10 = uVar10 - 1;
      uVar2 = *puVar11;
      uVar3 = *(undefined8 *)((long)puVar8 + 0x1c);
      uVar4 = *(undefined4 *)(puVar7 + 2);
      *puVar11 = *puVar7;
      *(undefined8 *)((long)puVar8 + 0x1c) = uVar1;
      uVar5 = *(undefined4 *)((long)puVar8 + 0x24);
      *(undefined4 *)((long)puVar8 + 0x24) = uVar4;
      *puVar7 = uVar2;
      puVar7[1] = uVar3;
      fVar12 = *(float *)((long)param_1 + 4);
      *(undefined4 *)(puVar7 + 2) = uVar5;
    }
    iVar9 = iVar9 + 1;
    puVar8 = puVar11;
  } while( true );
  param_2 = param_2 - iVar9;
  if ((int)uVar10 < (int)param_2) {
    FUN_710005ba10(param_1,uVar10);
    param_1 = puVar11;
  }
  else {
    FUN_710005ba10(puVar11,param_2);
    param_2 = uVar10;
  }
  if ((int)param_2 < 0xd) {
    return;
  }
  goto LAB_710005ba3c;
}



// ===== FUN_710005bc80 @ 710005bc80 (size=68) =====

bool FUN_710005bc80(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_7100814bc0();
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_7100823020(param_1);
  return iVar1 != 0;
}



// ===== FUN_710005bcd0 @ 710005bcd0 (size=72) =====

void FUN_710005bcd0(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  FUN_7100814b40(param_1,(long)param_2,1);
  uVar1 = FUN_71008140c0(param_1);
  if ((int)uVar1 == -1) {
    return;
  }
  FUN_7100809960(uVar1,param_1);
  return;
}



// ===== FUN_710005bd20 @ 710005bd20 (size=36) =====

void FUN_710005bd20(undefined8 param_1,undefined8 param_2,int param_3)

{
  FUN_710081e580(param_2,1,(long)param_3,param_1);
  return;
}



// ===== FUN_710005bd50 @ 710005bd50 (size=476) =====

undefined8 FUN_710005bd50(long param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  
  lVar9 = 1;
  iVar10 = 0;
  do {
    lVar1 = 0;
    if (0 < *(int *)(param_2 + -4 + lVar9 * 4)) {
      do {
        lVar7 = lVar1;
        *(char *)(param_1 + (long)iVar10 + 0x500 + lVar7) = (char)lVar9;
        lVar1 = lVar7 + 1;
      } while ((int)(lVar7 + 1) < *(int *)(param_2 + -4 + lVar9 * 4));
      iVar10 = iVar10 + 1 + (int)lVar7;
    }
    lVar9 = lVar9 + 1;
  } while (lVar9 != 0x11);
  lVar9 = 1;
  uVar5 = 0;
  uVar11 = 0;
  *(undefined1 *)(param_1 + iVar10 + 0x500) = 0;
  do {
    iVar10 = (int)uVar11;
    uVar8 = (uint)lVar9;
    *(uint *)(param_1 + 0x64c + lVar9 * 4) = iVar10 - uVar5;
    if (*(byte *)(param_1 + iVar10 + 0x500) == uVar8) {
      uVar3 = uVar11 & 0xffffffff;
      uVar4 = (long)(iVar10 + 1);
      do {
        uVar6 = uVar5;
        uVar11 = uVar4;
        uVar5 = uVar6 + 1;
        *(short *)(param_1 + uVar3 * 2 + (long)(iVar10 + 1) * -2 + 0x200 + uVar11 * 2) =
             (short)uVar5 + -1;
        uVar4 = uVar11 + 1;
      } while (*(byte *)(param_1 + 0x500 + uVar11) == uVar8);
      if (uVar6 >> (ulong)(uVar8 & 0x1f) != 0) {
        lVar9 = FUN_710076d158();
        *(char **)(lVar9 + 0x1050) = "bad code lengths";
        return 0;
      }
    }
    iVar10 = uVar5 << (ulong)(0x10 - uVar8 & 0x1f);
    uVar5 = uVar5 << 1;
    *(int *)(param_1 + 0x604 + lVar9 * 4) = iVar10;
    lVar9 = lVar9 + 1;
    if (lVar9 == 0x11) {
      lVar9 = 0;
      iVar10 = (int)uVar11;
      *(undefined4 *)(param_1 + 0x648) = 0xffffffff;
      FUN_7100808340(param_1,0xff,0x200);
      if (iVar10 != 0) {
        do {
          while (bVar2 = *(byte *)(param_1 + 0x500 + lVar9), 9 < bVar2) {
            lVar9 = lVar9 + 1;
            if (iVar10 == lVar9) {
              return 1;
            }
          }
          uVar5 = 9 - bVar2;
          lVar1 = lVar9 * 2;
          uVar8 = (uint)lVar9;
          lVar9 = lVar9 + 1;
          FUN_7100808340(param_1 + (int)((uint)*(ushort *)(param_1 + 0x200 + lVar1) <<
                                        (ulong)(uVar5 & 0x1f)),uVar8 & 0xff,
                         1 << (ulong)(uVar5 & 0x1f));
        } while (iVar10 != lVar9);
      }
      return 1;
    }
  } while( true );
}



// ===== FUN_710005bf30 @ 710005bf30 (size=584) =====

undefined8 FUN_710005bf30(long param_1,byte *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  uint uVar10;
  byte *pbVar11;
  int *piVar13;
  undefined1 auVar14 [16];
  uint auStack_88 [16];
  int local_48 [18];
  byte *pbVar12;
  
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  local_48[7] = 0;
  local_48[8] = 0;
  local_48[9] = 0;
  local_48[10] = 0;
  local_48[0xb] = 0;
  local_48[0xc] = 0;
  local_48[0xd] = 0;
  local_48[0xe] = 0;
  local_48[0xf] = 0;
  local_48[0x10] = 0;
  FUN_7100808340(param_1,0,0x400);
  if (0 < param_3) {
    pbVar12 = param_2;
    do {
      pbVar11 = pbVar12 + 1;
      local_48[*pbVar12] = local_48[*pbVar12] + 1;
      pbVar12 = pbVar11;
    } while (pbVar11 != param_2 + param_3);
  }
  uVar10 = 1;
  piVar13 = local_48;
  do {
    piVar13 = piVar13 + 1;
    iVar6 = *piVar13;
    if (1 << (ulong)(uVar10 & 0x1f) < iVar6) {
      pcVar9 = "bad sizes";
      goto LAB_710005c134;
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 != 0x10);
  lVar7 = 0;
  uVar10 = 0;
  iVar6 = 0;
  while( true ) {
    *(short *)(param_1 + 0x402 + lVar7 * 2) = (short)uVar10;
    *(short *)(param_1 + 0x466 + lVar7 * 2) = (short)iVar6;
    iVar2 = local_48[lVar7 + 1];
    auStack_88[lVar7 + 1] = uVar10;
    iVar1 = iVar2 + uVar10;
    if ((iVar2 != 0) && (1 << (ulong)((int)lVar7 + 1U & 0x1f) < iVar1)) break;
    iVar6 = iVar6 + iVar2;
    uVar10 = iVar1 * 2;
    *(int *)(param_1 + 0x424 + lVar7 * 4) = iVar1 << (ulong)(0xfU - (int)lVar7 & 0x1f);
    lVar7 = lVar7 + 1;
    if (lVar7 == 0xf) {
      *(undefined4 *)(param_1 + 0x460) = 0x10000;
      if (0 < param_3) {
        lVar7 = 0;
        do {
          bVar4 = param_2[lVar7];
          uVar10 = (uint)bVar4;
          if (uVar10 != 0) {
            lVar8 = param_1 + (ulong)bVar4 * 2;
            uVar3 = auStack_88[(int)uVar10];
            iVar6 = (uVar3 - *(ushort *)(lVar8 + 0x400)) + (uint)*(ushort *)(lVar8 + 0x464);
            *(byte *)(param_1 + iVar6 + 0x484) = bVar4;
            *(ushort *)(param_1 + (long)iVar6 * 2 + 0x5a4) = (ushort)lVar7;
            if (bVar4 < 10) {
              uVar5 = (int)uVar3 >> 1 & 0x5555U | (uVar3 & 0x5555) << 1;
              uVar5 = uVar5 >> 2 & 0x3333 | (uVar5 & 0x3333) << 2;
              uVar5 = uVar5 >> 4 & 0xf0f | (uVar5 & 0xf0f) << 4;
              lVar8 = (long)((int)((uVar5 & 0xff) << 8 | uVar5 >> 8) >> (0x10 - bVar4 & 0x1f));
              do {
                *(ushort *)(param_1 + lVar8 * 2) = (ushort)lVar7 | (ushort)bVar4 << 9;
                lVar8 = lVar8 + (1 << (ulong)(bVar4 & 0x1f));
              } while ((int)lVar8 < 0x200);
            }
            auStack_88[(int)uVar10] = uVar3 + 1;
          }
          lVar7 = lVar7 + 1;
        } while (param_3 != lVar7);
      }
      return 1;
    }
  }
  pcVar9 = "bad codelengths";
LAB_710005c134:
  auVar14 = FUN_710076d158(iVar6,pcVar9);
  *(long *)(auVar14._0_8_ + 0x1050) = auVar14._8_8_;
  return 0;
}



// ===== FUN_710005c180 @ 710005c180 (size=76) =====

undefined8 FUN_710005c180(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (-1 < (int)(param_1 | param_2)) {
    if (param_2 == 0) {
      iVar1 = 0;
LAB_710005c1c0:
      uVar2 = FUN_710081c1c0((long)(iVar1 + param_3));
      return uVar2;
    }
    iVar1 = 0;
    iVar3 = 0x7fffffff;
    if (param_2 != 0) {
      iVar1 = 0x7fffffff / (int)param_2;
    }
    if ((int)param_1 <= iVar1) {
      iVar1 = param_1 * param_2;
      if (param_3 != 0) {
        iVar3 = 0x7ffffff0;
      }
      if (iVar1 <= iVar3) goto LAB_710005c1c0;
    }
  }
  return 0;
}



// ===== FUN_710005c1d0 @ 710005c1d0 (size=180) =====

undefined8 FUN_710005c1d0(long param_1,long param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  *(long *)(param_1 + 0x18) = param_2;
  uVar1 = (ulong)*(uint *)(param_1 + 0x30);
  if (*(uint *)(param_1 + 0x30) == 0) {
    pcVar3 = "output buffer limit";
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x20);
    uVar5 = param_2 - uVar1;
    uVar4 = (uint)uVar5;
    if (!CARRY4(uVar4,param_3)) {
      uVar7 = *(long *)(param_1 + 0x28) - uVar1;
      uVar2 = uVar7 & 0xffffffff;
      uVar6 = (uint)uVar7;
      while (uVar6 < param_3 + uVar4) {
        if ((int)uVar2 < 0) goto LAB_710005c278;
        uVar6 = (int)uVar2 << 1;
        uVar2 = (ulong)uVar6;
      }
      uVar1 = FUN_71008141e0();
      if (uVar1 != 0) {
        *(ulong *)(param_1 + 0x18) = uVar1 + (uVar5 & 0xffffffff);
        *(ulong *)(param_1 + 0x20) = uVar1;
        *(ulong *)(param_1 + 0x28) = uVar1 + uVar2;
        return 1;
      }
    }
LAB_710005c278:
    pcVar3 = "outofmem";
  }
  auVar8 = FUN_710076d158(uVar1,pcVar3);
  *(long *)(auVar8._0_8_ + 0x1050) = auVar8._8_8_;
  return 0;
}



// ===== FUN_710005c290 @ 710005c290 (size=240) =====

void FUN_710005c290(long param_1,int param_2,int param_3,int param_4)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auStack_800 [2048];
  
  if (0 < param_3 >> 1) {
    iVar5 = param_3 + -1;
    iVar2 = iVar5 - (param_3 >> 1);
    uVar6 = (long)param_2 * (long)param_4;
    lVar7 = param_1;
    if (uVar6 == 0) {
      do {
        iVar5 = iVar5 + -1;
      } while (iVar2 != iVar5);
    }
    else {
      do {
        lVar3 = param_1 + (long)iVar5 * uVar6;
        lVar4 = lVar7;
        uVar8 = uVar6;
        do {
          uVar1 = uVar8;
          if (0x800 < uVar8) {
            uVar1 = 0x800;
          }
          FUN_710080f900(auStack_800,lVar4,uVar1);
          FUN_710080f900(lVar4,lVar3,uVar1);
          FUN_710080f900(lVar3,auStack_800,uVar1);
          uVar8 = uVar8 - uVar1;
          lVar3 = lVar3 + uVar1;
          lVar4 = lVar4 + uVar1;
        } while (uVar8 != 0);
        iVar5 = iVar5 + -1;
        lVar7 = lVar7 + uVar6;
      } while (iVar2 != iVar5);
    }
  }
  return;
}



// ===== FUN_710005c380 @ 710005c380 (size=92) =====

int FUN_710005c380(float param_1,int param_2)

{
  float fVar1;
  
  if (param_1 == 1.0 || param_1 < 1.0 != NAN(param_1)) {
    fVar1 = (float)(*(code *)(&PTR_LAB_7100adb560)[(long)param_2 * 2])();
    return (int)((fVar1 + fVar1) / param_1);
  }
  fVar1 = (float)(*(code *)(&PTR_LAB_7100adb560)[(long)param_2 * 2])(1.0 / param_1);
  return (int)(fVar1 + fVar1);
}



// ===== FUN_710005c3e0 @ 710005c3e0 (size=80) =====

int FUN_710005c3e0(float param_1,int param_2)

{
  float fVar1;
  
  if (param_1 == 1.0 || param_1 < 1.0 != NAN(param_1)) {
    fVar1 = (float)(*(code *)(&PTR_LAB_7100adb560)[(long)param_2 * 2])();
    return (int)(fVar1 + fVar1);
  }
  fVar1 = (float)(*(code *)(&PTR_LAB_7100adb560)[(long)param_2 * 2])(1.0 / param_1);
  return (int)(fVar1 + fVar1);
}



// ===== FUN_710005c430 @ 710005c430 (size=368) =====

void FUN_710005c430(float param_1,float param_2,float param_3,float param_4,float param_5,
                   float param_6,float param_7,float param_8,long param_9,uint *param_10,
                   int param_11)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float in_stack_00000000;
  
  while( true ) {
    if (param_11 == 0x11) {
      return;
    }
    fVar3 = (float)NEON_fmadd(param_5 - param_3,param_5 - param_3,
                              (param_6 - param_4) * (param_6 - param_4));
    fVar5 = (float)NEON_fmadd(param_3 - param_1,param_3 - param_1,
                              (param_4 - param_2) * (param_4 - param_2));
    fVar4 = (float)NEON_fmadd(param_7 - param_5,param_7 - param_5,
                              (param_8 - param_6) * (param_8 - param_6));
    fVar4 = SQRT(fVar4) + SQRT(fVar3) + SQRT(fVar5);
    fVar3 = (float)NEON_fmadd(param_7 - param_1,param_7 - param_1,
                              (param_8 - param_2) * (param_8 - param_2));
    fVar3 = (float)NEON_fnmsub(fVar4,fVar4,SQRT(fVar3) * SQRT(fVar3));
    if (fVar3 == in_stack_00000000 ||
        fVar3 < in_stack_00000000 != (NAN(fVar3) || NAN(in_stack_00000000))) break;
    fVar4 = param_3 + param_5;
    param_11 = param_11 + 1;
    fVar5 = param_4 + param_6;
    param_5 = (param_5 + param_7) * 0.5;
    param_6 = (param_6 + param_8) * 0.5;
    fVar3 = (float)NEON_fmadd(fVar4,0x3f000000,(param_3 + param_1) * 0.5);
    param_3 = (float)NEON_fmadd(fVar4,0x3f000000,param_5);
    fVar4 = (float)NEON_fmadd(fVar5,0x3f000000,(param_4 + param_2) * 0.5);
    param_4 = (float)NEON_fmadd(fVar5,0x3f000000,param_6);
    param_3 = param_3 * 0.5;
    param_4 = param_4 * 0.5;
    param_1 = (fVar3 * 0.5 + param_3) * 0.5;
    param_2 = (fVar4 * 0.5 + param_4) * 0.5;
    FUN_710005c430();
  }
  uVar1 = *param_10;
  if (param_9 != 0) {
    uVar2 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
    *(float *)(param_9 + uVar2) = param_7;
    *(float *)(param_9 + uVar2 + 4) = param_8;
  }
  *param_10 = uVar1 + 1;
  return;
}



// ===== FUN_710005c680 @ 710005c680 (size=2556) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_710005c680(undefined1 (*param_1) [16],int param_2,int param_3,uint param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  undefined1 *puVar21;
  undefined1 *puVar22;
  unkbyte10 Var23;
  unkbyte10 Var24;
  unkbyte10 Var25;
  undefined1 (*pauVar26) [16];
  int iVar27;
  undefined8 *puVar28;
  undefined1 (*pauVar29) [16];
  undefined1 (*pauVar30) [16];
  undefined8 *puVar31;
  undefined8 *puVar32;
  long lVar34;
  undefined1 (*pauVar35) [16];
  undefined8 *puVar36;
  int iVar37;
  uint uVar38;
  uint uVar39;
  undefined1 auVar40 [16];
  undefined8 uVar41;
  undefined8 uVar42;
  undefined1 auVar43 [16];
  undefined2 uVar44;
  undefined2 uVar45;
  undefined2 uVar46;
  undefined2 uVar47;
  undefined2 uVar48;
  undefined2 uVar49;
  undefined2 uVar50;
  undefined2 uVar51;
  undefined2 uVar52;
  undefined2 uVar53;
  undefined2 uVar54;
  undefined2 uVar55;
  undefined2 uVar56;
  undefined2 uVar57;
  undefined2 uVar58;
  ushort uVar59;
  ushort uVar60;
  ushort uVar61;
  ushort uVar62;
  ushort uVar63;
  ushort uVar64;
  ushort uVar65;
  ushort uVar66;
  ushort uVar67;
  ushort uVar68;
  ushort uVar69;
  ushort uVar70;
  ushort uVar71;
  ushort uVar72;
  ushort uVar73;
  ushort uVar74;
  ushort uVar75;
  ushort uVar76;
  undefined2 uVar77;
  undefined2 uVar78;
  undefined2 uVar79;
  undefined2 uVar80;
  undefined2 uVar81;
  undefined2 uVar82;
  undefined2 uVar83;
  undefined2 uVar84;
  undefined1 auVar85 [16];
  char *pcVar33;
  
  iVar2 = param_3 * param_4;
  puVar28 = (undefined8 *)FUN_710081c1c0(param_5 * iVar2 * 2);
  Var25 = _DAT_710085b480;
  Var24 = _DAT_710085b470;
  Var23 = _DAT_710085b460;
  if (puVar28 == (undefined8 *)0x0) {
    FUN_710081c200(param_1);
    pcVar33 = "outofmem";
LAB_710005c6f4:
    auVar85 = FUN_710076d158(&DAT_7100837000,pcVar33);
    *(long *)(auVar85._0_8_ + 0x1050) = auVar85._8_8_;
    return (undefined8 *)0x0;
  }
  if (0 < param_5) {
    iVar3 = param_2 * param_4;
    switch(param_3 + param_2 * 8) {
    case 10:
      uVar1 = param_4 & 0xfffffff8;
      uVar4 = param_4 - 1;
      uVar39 = 0;
      uVar38 = 0;
      iVar37 = 0;
      puVar31 = puVar28;
      pauVar30 = param_1;
      do {
        if (-1 < (int)uVar4) {
          uVar6 = uVar4;
          if (6 < uVar4) {
            puVar32 = puVar31;
            pauVar29 = pauVar30;
            do {
              uVar42 = *(undefined8 *)(*pauVar29 + 8);
              uVar41 = *(undefined8 *)*pauVar29;
              *(short *)puVar32 = (short)uVar41;
              *(undefined2 *)((long)puVar32 + 2) = 0xffff;
              *(short *)((long)puVar32 + 4) = (short)((ulong)uVar41 >> 0x10);
              *(undefined2 *)((long)puVar32 + 6) = 0xffff;
              *(short *)(puVar32 + 1) = (short)((ulong)uVar41 >> 0x20);
              *(undefined2 *)((long)puVar32 + 10) = 0xffff;
              *(short *)((long)puVar32 + 0xc) = (short)((ulong)uVar41 >> 0x30);
              *(undefined2 *)((long)puVar32 + 0xe) = 0xffff;
              *(short *)(puVar32 + 2) = (short)uVar42;
              *(undefined2 *)((long)puVar32 + 0x12) = 0xffff;
              *(short *)((long)puVar32 + 0x14) = (short)((ulong)uVar42 >> 0x10);
              *(undefined2 *)((long)puVar32 + 0x16) = 0xffff;
              *(short *)(puVar32 + 3) = (short)((ulong)uVar42 >> 0x20);
              *(undefined2 *)((long)puVar32 + 0x1a) = 0xffff;
              *(short *)((long)puVar32 + 0x1c) = (short)((ulong)uVar42 >> 0x30);
              *(undefined2 *)((long)puVar32 + 0x1e) = 0xffff;
              puVar32 = puVar32 + 4;
              pauVar29 = pauVar29 + 1;
            } while (puVar31 + (ulong)(param_4 >> 3) * 4 != puVar32);
            if ((param_4 & 7) == 0) goto LAB_710005c800;
            puVar31 = (undefined8 *)((long)puVar31 + (ulong)uVar1 * 4);
            pauVar30 = (undefined1 (*) [16])(*pauVar30 + (ulong)uVar1 * 2);
            uVar6 = uVar4 - uVar1;
          }
          puVar32 = puVar31;
          do {
            uVar77 = *(undefined2 *)*pauVar30;
            puVar36 = (undefined8 *)((long)puVar32 + 4);
            *(undefined2 *)((long)puVar32 + 2) = 0xffff;
            *(undefined2 *)puVar32 = uVar77;
            puVar32 = puVar36;
            pauVar30 = (undefined1 (*) [16])(*pauVar30 + 2);
          } while ((undefined8 *)((long)puVar31 + ((ulong)uVar6 * 2 + 2) * 2) != puVar36);
        }
LAB_710005c800:
        iVar37 = iVar37 + 1;
        if (param_5 == iVar37) break;
        uVar39 = uVar39 + iVar3;
        uVar38 = uVar38 + iVar2;
        pauVar30 = (undefined1 (*) [16])(*param_1 + (ulong)uVar39 * 2);
        puVar31 = (undefined8 *)((long)puVar28 + (ulong)uVar38 * 2);
      } while( true );
    case 0xb:
      uVar1 = param_4 & 0xfffffff8;
      uVar4 = param_4 - 1;
      uVar39 = 0;
      uVar38 = 0;
      iVar37 = 0;
      puVar31 = puVar28;
      pauVar30 = param_1;
      do {
        if (-1 < (int)uVar4) {
          uVar6 = uVar4;
          if (6 < uVar4) {
            puVar32 = puVar31;
            pauVar29 = pauVar30;
            do {
              pauVar35 = pauVar29 + 1;
              auVar5 = *pauVar29;
              auVar40._10_2_ = 0x302;
              auVar40._0_10_ = Var23;
              auVar40._12_2_ = 0x504;
              auVar40._14_2_ = 0x504;
              auVar40 = a64_TBL(ZEXT816(0),auVar5,auVar40);
              auVar43._10_2_ = 0x908;
              auVar43._0_10_ = Var24;
              auVar43._12_2_ = 0x908;
              auVar43._14_2_ = 0xb0a;
              auVar43 = a64_TBL(ZEXT816(0),auVar5,auVar43);
              auVar85._10_2_ = 0xf0e;
              auVar85._0_10_ = Var25;
              auVar85._12_2_ = 0xf0e;
              auVar85._14_2_ = 0xf0e;
              auVar85 = a64_TBL(ZEXT816(0),auVar5,auVar85);
              puVar32[1] = auVar40._8_8_;
              *puVar32 = auVar40._0_8_;
              puVar32[3] = auVar43._8_8_;
              puVar32[2] = auVar43._0_8_;
              puVar32[5] = auVar85._8_8_;
              puVar32[4] = auVar85._0_8_;
              puVar32 = puVar32 + 6;
              pauVar29 = pauVar35;
            } while (pauVar30 + (param_4 >> 3) != pauVar35);
            if ((param_4 & 7) == 0) goto LAB_710005c8e8;
            puVar31 = (undefined8 *)((long)puVar31 + (ulong)uVar1 * 6);
            pauVar30 = (undefined1 (*) [16])(*pauVar30 + (ulong)uVar1 * 2);
            uVar6 = uVar4 - uVar1;
          }
          pauVar29 = pauVar30;
          do {
            puVar7 = *pauVar29;
            uVar77 = *(undefined2 *)*pauVar29;
            *(undefined2 *)((long)puVar31 + 2) = uVar77;
            *(undefined2 *)((long)puVar31 + 4) = uVar77;
            *(undefined2 *)puVar31 = uVar77;
            puVar31 = (undefined8 *)((long)puVar31 + 6);
            pauVar29 = (undefined1 (*) [16])(puVar7 + 2);
          } while ((undefined1 (*) [16])(*pauVar30 + (ulong)uVar6 * 2 + 2) !=
                   (undefined1 (*) [16])(puVar7 + 2));
        }
LAB_710005c8e8:
        iVar37 = iVar37 + 1;
        if (param_5 == iVar37) break;
        uVar39 = uVar39 + iVar3;
        uVar38 = uVar38 + iVar2;
        pauVar30 = (undefined1 (*) [16])(*param_1 + (ulong)uVar39 * 2);
        puVar31 = (undefined8 *)((long)puVar28 + (ulong)uVar38 * 2);
      } while( true );
    case 0xc:
      uVar1 = param_4 & 0xfffffff8;
      uVar4 = param_4 - 1;
      uVar39 = 0;
      uVar38 = 0;
      iVar37 = 0;
      puVar31 = puVar28;
      pauVar30 = param_1;
      do {
        if (-1 < (int)uVar4) {
          uVar6 = uVar4;
          if (6 < uVar4) {
            pauVar29 = pauVar30;
            puVar32 = puVar31;
            do {
              pauVar35 = pauVar29 + 1;
              uVar42 = *(undefined8 *)(*pauVar29 + 8);
              uVar41 = *(undefined8 *)*pauVar29;
              uVar77 = (undefined2)uVar41;
              *(undefined2 *)puVar32 = uVar77;
              *(undefined2 *)((long)puVar32 + 2) = uVar77;
              *(undefined2 *)((long)puVar32 + 4) = uVar77;
              *(undefined2 *)((long)puVar32 + 6) = 0xffff;
              uVar77 = (undefined2)((ulong)uVar41 >> 0x10);
              *(undefined2 *)(puVar32 + 1) = uVar77;
              *(undefined2 *)((long)puVar32 + 10) = uVar77;
              *(undefined2 *)((long)puVar32 + 0xc) = uVar77;
              *(undefined2 *)((long)puVar32 + 0xe) = 0xffff;
              uVar77 = (undefined2)((ulong)uVar41 >> 0x20);
              *(undefined2 *)(puVar32 + 2) = uVar77;
              *(undefined2 *)((long)puVar32 + 0x12) = uVar77;
              *(undefined2 *)((long)puVar32 + 0x14) = uVar77;
              *(undefined2 *)((long)puVar32 + 0x16) = 0xffff;
              uVar77 = (undefined2)((ulong)uVar41 >> 0x30);
              *(undefined2 *)(puVar32 + 3) = uVar77;
              *(undefined2 *)((long)puVar32 + 0x1a) = uVar77;
              *(undefined2 *)((long)puVar32 + 0x1c) = uVar77;
              *(undefined2 *)((long)puVar32 + 0x1e) = 0xffff;
              uVar77 = (undefined2)uVar42;
              *(undefined2 *)(puVar32 + 4) = uVar77;
              *(undefined2 *)((long)puVar32 + 0x22) = uVar77;
              *(undefined2 *)((long)puVar32 + 0x24) = uVar77;
              *(undefined2 *)((long)puVar32 + 0x26) = 0xffff;
              uVar77 = (undefined2)((ulong)uVar42 >> 0x10);
              *(undefined2 *)(puVar32 + 5) = uVar77;
              *(undefined2 *)((long)puVar32 + 0x2a) = uVar77;
              *(undefined2 *)((long)puVar32 + 0x2c) = uVar77;
              *(undefined2 *)((long)puVar32 + 0x2e) = 0xffff;
              uVar77 = (undefined2)((ulong)uVar42 >> 0x20);
              *(undefined2 *)(puVar32 + 6) = uVar77;
              *(undefined2 *)((long)puVar32 + 0x32) = uVar77;
              *(undefined2 *)((long)puVar32 + 0x34) = uVar77;
              *(undefined2 *)((long)puVar32 + 0x36) = 0xffff;
              uVar77 = (undefined2)((ulong)uVar42 >> 0x30);
              *(undefined2 *)(puVar32 + 7) = uVar77;
              *(undefined2 *)((long)puVar32 + 0x3a) = uVar77;
              *(undefined2 *)((long)puVar32 + 0x3c) = uVar77;
              *(undefined2 *)((long)puVar32 + 0x3e) = 0xffff;
              puVar32 = puVar32 + 8;
              pauVar29 = pauVar35;
            } while (pauVar30 + (param_4 >> 3) != pauVar35);
            if ((param_4 & 7) == 0) goto LAB_710005c9b8;
            puVar31 = puVar31 + uVar1;
            pauVar30 = (undefined1 (*) [16])(*pauVar30 + (ulong)uVar1 * 2);
            uVar6 = uVar4 - uVar1;
          }
          pauVar29 = pauVar30;
          do {
            puVar7 = *pauVar29;
            uVar77 = *(undefined2 *)*pauVar29;
            *(undefined2 *)((long)puVar31 + 6) = 0xffff;
            *(undefined2 *)puVar31 = uVar77;
            *(undefined2 *)((long)puVar31 + 2) = uVar77;
            *(undefined2 *)((long)puVar31 + 4) = uVar77;
            puVar31 = puVar31 + 1;
            pauVar29 = (undefined1 (*) [16])(puVar7 + 2);
          } while ((undefined1 (*) [16])(*pauVar30 + (ulong)uVar6 * 2 + 2) !=
                   (undefined1 (*) [16])(puVar7 + 2));
        }
LAB_710005c9b8:
        iVar37 = iVar37 + 1;
        if (param_5 == iVar37) break;
        uVar39 = uVar39 + iVar3;
        uVar38 = uVar38 + iVar2;
        pauVar30 = (undefined1 (*) [16])(*param_1 + (ulong)uVar39 * 2);
        puVar31 = (undefined8 *)((long)puVar28 + (ulong)uVar38 * 2);
      } while( true );
    default:
      FUN_710081c200(param_1);
      FUN_710081c200(puVar28);
      pcVar33 = "unsupported";
      goto LAB_710005c6f4;
    case 0x11:
      uVar39 = 0;
      uVar38 = 0;
      iVar37 = 0;
      pauVar30 = param_1;
      puVar31 = puVar28;
      while( true ) {
        if (-1 < (int)(param_4 - 1)) {
          lVar34 = 0;
          iVar27 = param_4 - 1;
          do {
            iVar27 = iVar27 + -1;
            *(undefined2 *)((long)puVar31 + lVar34) = *(undefined2 *)(*pauVar30 + lVar34 * 2);
            lVar34 = lVar34 + 2;
          } while (iVar27 != -1);
        }
        iVar37 = iVar37 + 1;
        if (param_5 == iVar37) break;
        uVar39 = uVar39 + iVar3;
        uVar38 = uVar38 + iVar2;
        pauVar30 = (undefined1 (*) [16])(*param_1 + (ulong)uVar39 * 2);
        puVar31 = (undefined8 *)((long)puVar28 + (ulong)uVar38 * 2);
      }
      break;
    case 0x13:
      uVar39 = 0;
      uVar38 = 0;
      iVar37 = 0;
      puVar31 = puVar28;
      pauVar30 = param_1;
      while( true ) {
        iVar27 = param_4 - 1;
        if (-1 < (int)(param_4 - 1)) {
          do {
            uVar77 = *(undefined2 *)*pauVar30;
            iVar27 = iVar27 + -1;
            *(undefined2 *)((long)puVar31 + 2) = uVar77;
            *(undefined2 *)((long)puVar31 + 4) = uVar77;
            *(undefined2 *)puVar31 = uVar77;
            puVar31 = (undefined8 *)((long)puVar31 + 6);
            pauVar30 = (undefined1 (*) [16])(*pauVar30 + 4);
          } while (iVar27 != -1);
        }
        iVar37 = iVar37 + 1;
        if (param_5 == iVar37) break;
        uVar39 = uVar39 + iVar3;
        uVar38 = uVar38 + iVar2;
        pauVar30 = (undefined1 (*) [16])(*param_1 + (ulong)uVar39 * 2);
        puVar31 = (undefined8 *)((long)puVar28 + (ulong)uVar38 * 2);
      }
      break;
    case 0x14:
      uVar1 = param_4 & 0xfffffff8;
      uVar4 = param_4 - 1;
      uVar39 = 0;
      uVar38 = 0;
      iVar37 = 0;
      pauVar30 = param_1;
      puVar31 = puVar28;
      do {
        if (-1 < (int)uVar4) {
          uVar6 = uVar4;
          if (6 < uVar4) {
            pauVar29 = pauVar30;
            puVar32 = puVar31;
            do {
              uVar77 = *(undefined2 *)*pauVar29;
              uVar44 = *(undefined2 *)(*pauVar29 + 2);
              uVar78 = *(undefined2 *)(*pauVar29 + 4);
              uVar45 = *(undefined2 *)(*pauVar29 + 6);
              uVar79 = *(undefined2 *)(*pauVar29 + 8);
              uVar46 = *(undefined2 *)(*pauVar29 + 10);
              uVar80 = *(undefined2 *)(*pauVar29 + 0xc);
              uVar47 = *(undefined2 *)(*pauVar29 + 0xe);
              uVar81 = *(undefined2 *)pauVar29[1];
              uVar48 = *(undefined2 *)(pauVar29[1] + 2);
              uVar82 = *(undefined2 *)(pauVar29[1] + 4);
              uVar49 = *(undefined2 *)(pauVar29[1] + 6);
              uVar83 = *(undefined2 *)(pauVar29[1] + 8);
              uVar50 = *(undefined2 *)(pauVar29[1] + 10);
              uVar84 = *(undefined2 *)(pauVar29[1] + 0xc);
              uVar51 = *(undefined2 *)(pauVar29[1] + 0xe);
              pauVar29 = pauVar29 + 2;
              *(undefined2 *)puVar32 = uVar77;
              *(undefined2 *)((long)puVar32 + 2) = uVar77;
              *(undefined2 *)((long)puVar32 + 4) = uVar77;
              *(undefined2 *)((long)puVar32 + 6) = uVar44;
              *(undefined2 *)(puVar32 + 1) = uVar78;
              *(undefined2 *)((long)puVar32 + 10) = uVar78;
              *(undefined2 *)((long)puVar32 + 0xc) = uVar78;
              *(undefined2 *)((long)puVar32 + 0xe) = uVar45;
              *(undefined2 *)(puVar32 + 2) = uVar79;
              *(undefined2 *)((long)puVar32 + 0x12) = uVar79;
              *(undefined2 *)((long)puVar32 + 0x14) = uVar79;
              *(undefined2 *)((long)puVar32 + 0x16) = uVar46;
              *(undefined2 *)(puVar32 + 3) = uVar80;
              *(undefined2 *)((long)puVar32 + 0x1a) = uVar80;
              *(undefined2 *)((long)puVar32 + 0x1c) = uVar80;
              *(undefined2 *)((long)puVar32 + 0x1e) = uVar47;
              *(undefined2 *)(puVar32 + 4) = uVar81;
              *(undefined2 *)((long)puVar32 + 0x22) = uVar81;
              *(undefined2 *)((long)puVar32 + 0x24) = uVar81;
              *(undefined2 *)((long)puVar32 + 0x26) = uVar48;
              *(undefined2 *)(puVar32 + 5) = uVar82;
              *(undefined2 *)((long)puVar32 + 0x2a) = uVar82;
              *(undefined2 *)((long)puVar32 + 0x2c) = uVar82;
              *(undefined2 *)((long)puVar32 + 0x2e) = uVar49;
              *(undefined2 *)(puVar32 + 6) = uVar83;
              *(undefined2 *)((long)puVar32 + 0x32) = uVar83;
              *(undefined2 *)((long)puVar32 + 0x34) = uVar83;
              *(undefined2 *)((long)puVar32 + 0x36) = uVar50;
              *(undefined2 *)(puVar32 + 7) = uVar84;
              *(undefined2 *)((long)puVar32 + 0x3a) = uVar84;
              *(undefined2 *)((long)puVar32 + 0x3c) = uVar84;
              *(undefined2 *)((long)puVar32 + 0x3e) = uVar51;
              puVar32 = puVar32 + 8;
            } while (pauVar30 + (ulong)(param_4 >> 3) * 2 != pauVar29);
            if ((param_4 & 7) == 0) goto joined_r0x00710005c73c;
            puVar31 = puVar31 + uVar1;
            pauVar30 = (undefined1 (*) [16])(*pauVar30 + (ulong)uVar1 * 4);
            uVar6 = uVar4 - uVar1;
          }
          pauVar29 = pauVar30;
          do {
            uVar77 = *(undefined2 *)*pauVar29;
            puVar7 = *pauVar29;
            *puVar31 = CONCAT26(*(undefined2 *)(*pauVar29 + 2),
                                CONCAT24(uVar77,CONCAT22(uVar77,uVar77)));
            pauVar29 = (undefined1 (*) [16])(puVar7 + 4);
            puVar31 = puVar31 + 1;
          } while ((undefined1 (*) [16])(*pauVar30 + (ulong)uVar6 * 4 + 4) !=
                   (undefined1 (*) [16])(puVar7 + 4));
        }
joined_r0x00710005c73c:
        if (iVar37 + 1 == param_5) break;
        iVar37 = iVar37 + 1;
                    /* WARNING: Read-only address (ram,0x00710085b460) is written */
                    /* WARNING: Read-only address (ram,0x00710085b470) is written */
                    /* WARNING: Read-only address (ram,0x00710085b480) is written */
        uVar39 = uVar39 + iVar3;
        uVar38 = uVar38 + iVar2;
        pauVar30 = (undefined1 (*) [16])(*param_1 + (ulong)uVar39 * 2);
        puVar31 = (undefined8 *)((long)puVar28 + (ulong)uVar38 * 2);
      } while( true );
    case 0x19:
      uVar1 = param_4 & 0xfffffff8;
      uVar4 = param_4 - 1;
      uVar39 = 0;
      uVar38 = 0;
      iVar37 = 0;
      pauVar30 = param_1;
      puVar31 = puVar28;
      do {
        if (-1 < (int)uVar4) {
          uVar6 = uVar4;
          if (6 < uVar4) {
            puVar32 = puVar31;
            pauVar29 = pauVar30;
            do {
              uVar59 = *(ushort *)*pauVar29;
              puVar7 = *pauVar29;
              uVar63 = *(ushort *)(*pauVar29 + 4);
              uVar60 = *(ushort *)(*pauVar29 + 6);
              puVar8 = *pauVar29;
              uVar64 = *(ushort *)(*pauVar29 + 10);
              uVar61 = *(ushort *)(*pauVar29 + 0xc);
              puVar9 = *pauVar29;
              uVar65 = *(ushort *)pauVar29[1];
              uVar62 = *(ushort *)(pauVar29[1] + 2);
              pauVar35 = pauVar29 + 1;
              uVar66 = *(ushort *)(pauVar29[1] + 6);
              pauVar10 = pauVar29 + 1;
              pauVar11 = pauVar29 + 1;
              pauVar12 = pauVar29 + 1;
              pauVar13 = pauVar29 + 1;
              pauVar26 = pauVar29 + 2;
              pauVar14 = pauVar29 + 2;
              pauVar15 = pauVar29 + 2;
              pauVar16 = pauVar29 + 2;
              pauVar17 = pauVar29 + 2;
              pauVar18 = pauVar29 + 2;
              pauVar19 = pauVar29 + 2;
              pauVar20 = pauVar29 + 2;
              pauVar29 = pauVar29 + 3;
              auVar85 = NEON_umull(CONCAT26(*(undefined2 *)(*pauVar35 + 4),
                                            CONCAT24(*(undefined2 *)(puVar9 + 0xe),
                                                     CONCAT22(*(undefined2 *)(puVar8 + 8),
                                                              *(undefined2 *)(puVar7 + 2)))),
                                   0x96009600960096,2);
              puVar36 = puVar32 + 2;
              puVar32[1] = CONCAT26((short)((uint)*(ushort *)(*pauVar19 + 0xc) * 0x96 +
                                            (uint)*(ushort *)(*pauVar18 + 10) * 0x4d +
                                            (uint)*(ushort *)(*pauVar20 + 0xe) * 0x1d >> 8),
                                    CONCAT24((short)((uint)*(ushort *)(*pauVar16 + 6) * 0x96 +
                                                     (uint)*(ushort *)(*pauVar15 + 4) * 0x4d +
                                                     (uint)*(ushort *)(*pauVar17 + 8) * 0x1d >> 8),
                                             CONCAT22((short)((uint)*(ushort *)*pauVar26 * 0x96 +
                                                              (uint)*(ushort *)(*pauVar13 + 0xe) *
                                                              0x4d + (uint)*(ushort *)
                                                                            (*pauVar14 + 2) * 0x1d
                                                             >> 8),
                                                      (short)((uint)*(ushort *)(*pauVar11 + 10) *
                                                              0x96 + (uint)*(ushort *)
                                                                            (*pauVar10 + 8) * 0x4d +
                                                              (uint)*(ushort *)(*pauVar12 + 0xc) *
                                                              0x1d >> 8))));
              *puVar32 = CONCAT26((short)(auVar85._12_4_ + (uint)uVar62 * 0x4d + (uint)uVar66 * 0x1d
                                         >> 8),
                                  CONCAT24((short)(auVar85._8_4_ + (uint)uVar61 * 0x4d +
                                                   (uint)uVar65 * 0x1d >> 8),
                                           CONCAT22((short)(auVar85._4_4_ + (uint)uVar60 * 0x4d +
                                                            (uint)uVar64 * 0x1d >> 8),
                                                    (short)(auVar85._0_4_ + (uint)uVar59 * 0x4d +
                                                            (uint)uVar63 * 0x1d >> 8))));
              puVar32 = puVar36;
            } while (puVar31 + (ulong)(param_4 >> 3) * 2 != puVar36);
            if ((param_4 & 7) == 0) goto joined_r0x00710005cf48;
            puVar31 = (undefined8 *)((long)puVar31 + (ulong)uVar1 * 2);
            pauVar30 = (undefined1 (*) [16])(*pauVar30 + (ulong)uVar1 * 6);
            uVar6 = uVar4 - uVar1;
          }
          puVar32 = puVar31;
          do {
            puVar36 = (undefined8 *)((long)puVar32 + 2);
            *(short *)puVar32 =
                 (short)((uint)*(ushort *)(*pauVar30 + 2) * 0x96 + (uint)*(ushort *)*pauVar30 * 0x4d
                         + (uint)*(ushort *)(*pauVar30 + 4) * 0x1d >> 8);
            pauVar30 = (undefined1 (*) [16])(*pauVar30 + 6);
            puVar32 = puVar36;
          } while ((undefined8 *)((long)puVar31 + ((ulong)uVar6 + 1) * 2) != puVar36);
        }
joined_r0x00710005cf48:
        if (param_5 == iVar37 + 1) break;
        iVar37 = iVar37 + 1;
        uVar39 = uVar39 + iVar3;
        uVar38 = uVar38 + iVar2;
        pauVar30 = (undefined1 (*) [16])(*param_1 + (ulong)uVar39 * 2);
        puVar31 = (undefined8 *)((long)puVar28 + (ulong)uVar38 * 2);
      } while( true );
    case 0x1a:
      uVar1 = param_4 & 0xfffffff8;
      uVar4 = param_4 - 1;
      uVar39 = 0;
      uVar38 = 0;
      iVar37 = 0;
      puVar31 = puVar28;
      pauVar30 = param_1;
      do {
        if (-1 < (int)uVar4) {
          uVar6 = uVar4;
          if (6 < uVar4) {
            puVar32 = puVar31;
            pauVar29 = pauVar30;
            do {
              puVar7 = *pauVar29;
              puVar8 = *pauVar29;
              puVar9 = *pauVar29;
              uVar59 = *(ushort *)(*pauVar29 + 6);
              puVar21 = *pauVar29;
              uVar70 = *(ushort *)(*pauVar29 + 10);
              uVar60 = *(ushort *)(*pauVar29 + 0xc);
              puVar22 = *pauVar29;
              uVar71 = *(ushort *)pauVar29[1];
              uVar61 = *(ushort *)(pauVar29[1] + 2);
              pauVar35 = pauVar29 + 1;
              uVar72 = *(ushort *)(pauVar29[1] + 6);
              uVar62 = *(ushort *)(pauVar29[1] + 8);
              uVar66 = *(ushort *)(pauVar29[1] + 10);
              uVar73 = *(ushort *)(pauVar29[1] + 0xc);
              uVar63 = *(ushort *)(pauVar29[1] + 0xe);
              uVar67 = *(ushort *)pauVar29[2];
              uVar74 = *(ushort *)(pauVar29[2] + 2);
              uVar64 = *(ushort *)(pauVar29[2] + 4);
              uVar68 = *(ushort *)(pauVar29[2] + 6);
              uVar75 = *(ushort *)(pauVar29[2] + 8);
              uVar65 = *(ushort *)(pauVar29[2] + 10);
              uVar69 = *(ushort *)(pauVar29[2] + 0xc);
              uVar76 = *(ushort *)(pauVar29[2] + 0xe);
              pauVar29 = pauVar29 + 3;
              auVar85 = NEON_umull(CONCAT26(*(undefined2 *)(*pauVar35 + 4),
                                            CONCAT24(*(undefined2 *)(puVar22 + 0xe),
                                                     CONCAT22(*(undefined2 *)(puVar21 + 8),
                                                              *(undefined2 *)(puVar8 + 2)))),
                                   0x96009600960096,2);
              *(short *)puVar32 =
                   (short)(auVar85._0_4_ + (uint)*(ushort *)puVar7 * 0x4d +
                           (uint)*(ushort *)(puVar9 + 4) * 0x1d >> 8);
              *(undefined2 *)((long)puVar32 + 2) = 0xffff;
              *(short *)((long)puVar32 + 4) =
                   (short)(auVar85._4_4_ + (uint)uVar59 * 0x4d + (uint)uVar70 * 0x1d >> 8);
              *(undefined2 *)((long)puVar32 + 6) = 0xffff;
              *(short *)(puVar32 + 1) =
                   (short)(auVar85._8_4_ + (uint)uVar60 * 0x4d + (uint)uVar71 * 0x1d >> 8);
              *(undefined2 *)((long)puVar32 + 10) = 0xffff;
              *(short *)((long)puVar32 + 0xc) =
                   (short)(auVar85._12_4_ + (uint)uVar61 * 0x4d + (uint)uVar72 * 0x1d >> 8);
              *(undefined2 *)((long)puVar32 + 0xe) = 0xffff;
              *(short *)(puVar32 + 2) =
                   (short)((uint)uVar66 * 0x96 + (uint)uVar62 * 0x4d + (uint)uVar73 * 0x1d >> 8);
              *(undefined2 *)((long)puVar32 + 0x12) = 0xffff;
              *(short *)((long)puVar32 + 0x14) =
                   (short)((uint)uVar67 * 0x96 + (uint)uVar63 * 0x4d + (uint)uVar74 * 0x1d >> 8);
              *(undefined2 *)((long)puVar32 + 0x16) = 0xffff;
              *(short *)(puVar32 + 3) =
                   (short)((uint)uVar68 * 0x96 + (uint)uVar64 * 0x4d + (uint)uVar75 * 0x1d >> 8);
              *(undefined2 *)((long)puVar32 + 0x1a) = 0xffff;
              *(short *)((long)puVar32 + 0x1c) =
                   (short)((uint)uVar69 * 0x96 + (uint)uVar65 * 0x4d + (uint)uVar76 * 0x1d >> 8);
              *(undefined2 *)((long)puVar32 + 0x1e) = 0xffff;
              puVar32 = puVar32 + 4;
            } while (puVar32 != puVar31 + (ulong)(param_4 >> 3) * 4);
            if ((param_4 & 7) == 0) goto LAB_710005d05c;
            puVar31 = (undefined8 *)((long)puVar31 + (ulong)uVar1 * 4);
            pauVar30 = (undefined1 (*) [16])(*pauVar30 + (ulong)uVar1 * 6);
            uVar6 = uVar4 - uVar1;
          }
          puVar32 = puVar31;
          do {
            uVar59 = *(ushort *)(*pauVar30 + 2);
            puVar36 = (undefined8 *)((long)puVar32 + 4);
            *(undefined2 *)((long)puVar32 + 2) = 0xffff;
            *(short *)puVar32 =
                 (short)((uint)uVar59 * 0x96 + (uint)*(ushort *)*pauVar30 * 0x4d +
                         (uint)*(ushort *)(*pauVar30 + 4) * 0x1d >> 8);
            puVar32 = puVar36;
            pauVar30 = (undefined1 (*) [16])(*pauVar30 + 6);
          } while ((undefined8 *)((long)puVar31 + ((ulong)uVar6 * 2 + 2) * 2) != puVar36);
        }
LAB_710005d05c:
        iVar37 = iVar37 + 1;
        if (iVar37 == param_5) break;
        uVar39 = uVar39 + iVar3;
        uVar38 = uVar38 + iVar2;
        pauVar30 = (undefined1 (*) [16])(*param_1 + (ulong)uVar39 * 2);
        puVar31 = (undefined8 *)((long)puVar28 + (ulong)uVar38 * 2);
      } while( true );
    case 0x1c:
      uVar1 = param_4 & 0xfffffff8;
      uVar4 = param_4 - 1;
      uVar39 = 0;
      uVar38 = 0;
      iVar37 = 0;
      pauVar30 = param_1;
      puVar31 = puVar28;
      do {
        if (-1 < (int)uVar4) {
          uVar6 = uVar4;
          if (6 < uVar4) {
            puVar32 = puVar31;
            pauVar29 = pauVar30;
            do {
              puVar7 = *pauVar29;
              uVar84 = *(undefined2 *)(*pauVar29 + 2);
              uVar51 = *(undefined2 *)(*pauVar29 + 4);
              uVar77 = *(undefined2 *)(*pauVar29 + 6);
              uVar44 = *(undefined2 *)(*pauVar29 + 8);
              uVar52 = *(undefined2 *)(*pauVar29 + 10);
              uVar78 = *(undefined2 *)(*pauVar29 + 0xc);
              uVar45 = *(undefined2 *)(*pauVar29 + 0xe);
              uVar53 = *(undefined2 *)pauVar29[1];
              uVar79 = *(undefined2 *)(pauVar29[1] + 2);
              uVar46 = *(undefined2 *)(pauVar29[1] + 4);
              uVar54 = *(undefined2 *)(pauVar29[1] + 6);
              uVar80 = *(undefined2 *)(pauVar29[1] + 8);
              uVar47 = *(undefined2 *)(pauVar29[1] + 10);
              uVar55 = *(undefined2 *)(pauVar29[1] + 0xc);
              uVar81 = *(undefined2 *)(pauVar29[1] + 0xe);
              uVar48 = *(undefined2 *)pauVar29[2];
              uVar56 = *(undefined2 *)(pauVar29[2] + 2);
              uVar82 = *(undefined2 *)(pauVar29[2] + 4);
              uVar49 = *(undefined2 *)(pauVar29[2] + 6);
              uVar57 = *(undefined2 *)(pauVar29[2] + 8);
              uVar83 = *(undefined2 *)(pauVar29[2] + 10);
              uVar50 = *(undefined2 *)(pauVar29[2] + 0xc);
              uVar58 = *(undefined2 *)(pauVar29[2] + 0xe);
              pauVar29 = pauVar29 + 3;
              *(undefined2 *)puVar32 = *(undefined2 *)puVar7;
              *(undefined2 *)((long)puVar32 + 2) = uVar84;
              *(undefined2 *)((long)puVar32 + 4) = uVar51;
              *(undefined2 *)((long)puVar32 + 6) = 0xffff;
              *(undefined2 *)(puVar32 + 1) = uVar77;
              *(undefined2 *)((long)puVar32 + 10) = uVar44;
              *(undefined2 *)((long)puVar32 + 0xc) = uVar52;
              *(undefined2 *)((long)puVar32 + 0xe) = 0xffff;
              *(undefined2 *)(puVar32 + 2) = uVar78;
              *(undefined2 *)((long)puVar32 + 0x12) = uVar45;
              *(undefined2 *)((long)puVar32 + 0x14) = uVar53;
              *(undefined2 *)((long)puVar32 + 0x16) = 0xffff;
              *(undefined2 *)(puVar32 + 3) = uVar79;
              *(undefined2 *)((long)puVar32 + 0x1a) = uVar46;
              *(undefined2 *)((long)puVar32 + 0x1c) = uVar54;
              *(undefined2 *)((long)puVar32 + 0x1e) = 0xffff;
              *(undefined2 *)(puVar32 + 4) = uVar80;
              *(undefined2 *)((long)puVar32 + 0x22) = uVar47;
              *(undefined2 *)((long)puVar32 + 0x24) = uVar55;
              *(undefined2 *)((long)puVar32 + 0x26) = 0xffff;
              *(undefined2 *)(puVar32 + 5) = uVar81;
              *(undefined2 *)((long)puVar32 + 0x2a) = uVar48;
              *(undefined2 *)((long)puVar32 + 0x2c) = uVar56;
              *(undefined2 *)((long)puVar32 + 0x2e) = 0xffff;
              *(undefined2 *)(puVar32 + 6) = uVar82;
              *(undefined2 *)((long)puVar32 + 0x32) = uVar49;
              *(undefined2 *)((long)puVar32 + 0x34) = uVar57;
              *(undefined2 *)((long)puVar32 + 0x36) = 0xffff;
              *(undefined2 *)(puVar32 + 7) = uVar83;
              *(undefined2 *)((long)puVar32 + 0x3a) = uVar50;
              *(undefined2 *)((long)puVar32 + 0x3c) = uVar58;
              *(undefined2 *)((long)puVar32 + 0x3e) = 0xffff;
              puVar32 = puVar32 + 8;
            } while (puVar31 + (ulong)(param_4 >> 3) * 8 != puVar32);
            if ((param_4 & 7) == 0) goto LAB_710005cd1c;
            puVar31 = puVar31 + uVar1;
            pauVar30 = (undefined1 (*) [16])(*pauVar30 + (ulong)uVar1 * 6);
            uVar6 = uVar4 - uVar1;
          }
          puVar32 = puVar31;
          do {
            uVar77 = *(undefined2 *)*pauVar30;
            puVar36 = puVar32 + 1;
            *(undefined2 *)((long)puVar32 + 6) = 0xffff;
            *(undefined2 *)puVar32 = uVar77;
            *(undefined2 *)((long)puVar32 + 2) = *(undefined2 *)(*pauVar30 + 2);
            *(undefined2 *)((long)puVar32 + 4) = *(undefined2 *)(*pauVar30 + 4);
            pauVar30 = (undefined1 (*) [16])(*pauVar30 + 6);
            puVar32 = puVar36;
          } while (puVar31 + (ulong)uVar6 + 1 != puVar36);
        }
LAB_710005cd1c:
        iVar37 = iVar37 + 1;
        if (param_5 == iVar37) break;
        uVar39 = uVar39 + iVar3;
        uVar38 = uVar38 + iVar2;
        pauVar30 = (undefined1 (*) [16])(*param_1 + (ulong)uVar39 * 2);
        puVar31 = (undefined8 *)((long)puVar28 + (ulong)uVar38 * 2);
      } while( true );
    case 0x21:
      uVar39 = 0;
      uVar38 = 0;
      iVar37 = 0;
      pauVar30 = param_1;
      puVar31 = puVar28;
      while( true ) {
        iVar27 = param_4 - 1;
        if (-1 < (int)(param_4 - 1)) {
          do {
            iVar27 = iVar27 + -1;
            *(short *)puVar31 =
                 (short)((uint)*(ushort *)(*pauVar30 + 2) * 0x96 + (uint)*(ushort *)*pauVar30 * 0x4d
                         + (uint)*(ushort *)(*pauVar30 + 4) * 0x1d >> 8);
            pauVar30 = (undefined1 (*) [16])(*pauVar30 + 8);
            puVar31 = (undefined8 *)((long)puVar31 + 2);
          } while (iVar27 != -1);
        }
        iVar37 = iVar37 + 1;
        if (param_5 == iVar37) break;
        uVar39 = uVar39 + iVar3;
        uVar38 = uVar38 + iVar2;
        pauVar30 = (undefined1 (*) [16])(*param_1 + (ulong)uVar39 * 2);
        puVar31 = (undefined8 *)((long)puVar28 + (ulong)uVar38 * 2);
      }
      break;
    case 0x22:
      uVar1 = param_4 & 0xfffffff8;
      uVar4 = param_4 - 1;
      uVar39 = 0;
      uVar38 = 0;
      iVar37 = 0;
      puVar31 = puVar28;
      pauVar30 = param_1;
      do {
        if (-1 < (int)uVar4) {
          uVar6 = uVar4;
          if (6 < uVar4) {
            pauVar29 = pauVar30;
            puVar32 = puVar31;
            do {
              puVar7 = *pauVar29;
              puVar8 = *pauVar29;
              puVar9 = *pauVar29;
              uVar77 = *(undefined2 *)(*pauVar29 + 6);
              uVar59 = *(ushort *)(*pauVar29 + 8);
              puVar21 = *pauVar29;
              uVar70 = *(ushort *)(*pauVar29 + 0xc);
              uVar78 = *(undefined2 *)(*pauVar29 + 0xe);
              uVar60 = *(ushort *)pauVar29[1];
              pauVar35 = pauVar29 + 1;
              uVar71 = *(ushort *)(pauVar29[1] + 4);
              uVar79 = *(undefined2 *)(pauVar29[1] + 6);
              uVar61 = *(ushort *)(pauVar29[1] + 8);
              pauVar10 = pauVar29 + 1;
              uVar72 = *(ushort *)(pauVar29[1] + 0xc);
              uVar80 = *(undefined2 *)(pauVar29[1] + 0xe);
              uVar62 = *(ushort *)pauVar29[2];
              uVar66 = *(ushort *)(pauVar29[2] + 2);
              uVar73 = *(ushort *)(pauVar29[2] + 4);
              uVar81 = *(undefined2 *)(pauVar29[2] + 6);
              uVar63 = *(ushort *)(pauVar29[2] + 8);
              uVar67 = *(ushort *)(pauVar29[2] + 10);
              uVar74 = *(ushort *)(pauVar29[2] + 0xc);
              uVar82 = *(undefined2 *)(pauVar29[2] + 0xe);
              uVar64 = *(ushort *)pauVar29[3];
              uVar68 = *(ushort *)(pauVar29[3] + 2);
              uVar75 = *(ushort *)(pauVar29[3] + 4);
              uVar83 = *(undefined2 *)(pauVar29[3] + 6);
              uVar65 = *(ushort *)(pauVar29[3] + 8);
              uVar69 = *(ushort *)(pauVar29[3] + 10);
              uVar76 = *(ushort *)(pauVar29[3] + 0xc);
              uVar84 = *(undefined2 *)(pauVar29[3] + 0xe);
              pauVar29 = pauVar29 + 4;
              auVar85 = NEON_umull(CONCAT26(*(undefined2 *)(*pauVar10 + 10),
                                            CONCAT24(*(undefined2 *)(*pauVar35 + 2),
                                                     CONCAT22(*(undefined2 *)(puVar21 + 10),
                                                              *(undefined2 *)(puVar8 + 2)))),
                                   0x96009600960096,2);
              *(short *)puVar32 =
                   (short)(auVar85._0_4_ + (uint)*(ushort *)puVar7 * 0x4d +
                           (uint)*(ushort *)(puVar9 + 4) * 0x1d >> 8);
              *(undefined2 *)((long)puVar32 + 2) = uVar77;
              *(short *)((long)puVar32 + 4) =
                   (short)(auVar85._4_4_ + (uint)uVar59 * 0x4d + (uint)uVar70 * 0x1d >> 8);
              *(undefined2 *)((long)puVar32 + 6) = uVar78;
              *(short *)(puVar32 + 1) =
                   (short)(auVar85._8_4_ + (uint)uVar60 * 0x4d + (uint)uVar71 * 0x1d >> 8);
              *(undefined2 *)((long)puVar32 + 10) = uVar79;
              *(short *)((long)puVar32 + 0xc) =
                   (short)(auVar85._12_4_ + (uint)uVar61 * 0x4d + (uint)uVar72 * 0x1d >> 8);
              *(undefined2 *)((long)puVar32 + 0xe) = uVar80;
              *(short *)(puVar32 + 2) =
                   (short)((uint)uVar66 * 0x96 + (uint)uVar62 * 0x4d + (uint)uVar73 * 0x1d >> 8);
              *(undefined2 *)((long)puVar32 + 0x12) = uVar81;
              *(short *)((long)puVar32 + 0x14) =
                   (short)((uint)uVar67 * 0x96 + (uint)uVar63 * 0x4d + (uint)uVar74 * 0x1d >> 8);
              *(undefined2 *)((long)puVar32 + 0x16) = uVar82;
              *(short *)(puVar32 + 3) =
                   (short)((uint)uVar68 * 0x96 + (uint)uVar64 * 0x4d + (uint)uVar75 * 0x1d >> 8);
              *(undefined2 *)((long)puVar32 + 0x1a) = uVar83;
              *(short *)((long)puVar32 + 0x1c) =
                   (short)((uint)uVar69 * 0x96 + (uint)uVar65 * 0x4d + (uint)uVar76 * 0x1d >> 8);
              *(undefined2 *)((long)puVar32 + 0x1e) = uVar84;
              puVar32 = puVar32 + 4;
            } while (pauVar29 != pauVar30 + (ulong)(param_4 >> 3) * 4);
            if ((param_4 & 7) == 0) goto LAB_710005cea0;
            puVar31 = (undefined8 *)((long)puVar31 + (ulong)uVar1 * 4);
            pauVar30 = (undefined1 (*) [16])(*pauVar30 + (ulong)uVar1 * 8);
            uVar6 = uVar4 - uVar1;
          }
          pauVar29 = pauVar30;
          do {
            puVar7 = *pauVar29;
            *(short *)puVar31 =
                 (short)((uint)*(ushort *)(*pauVar29 + 2) * 0x96 + (uint)*(ushort *)*pauVar29 * 0x4d
                         + (uint)*(ushort *)(*pauVar29 + 4) * 0x1d >> 8);
            *(undefined2 *)((long)puVar31 + 2) = *(undefined2 *)(*pauVar29 + 6);
            puVar31 = (undefined8 *)((long)puVar31 + 4);
            pauVar29 = (undefined1 (*) [16])(puVar7 + 8);
          } while ((undefined1 (*) [16])(*pauVar30 + (ulong)uVar6 * 8 + 8) !=
                   (undefined1 (*) [16])(puVar7 + 8));
        }
LAB_710005cea0:
        iVar37 = iVar37 + 1;
        if (param_5 == iVar37) break;
        uVar39 = uVar39 + iVar3;
        uVar38 = uVar38 + iVar2;
        pauVar30 = (undefined1 (*) [16])(*param_1 + (ulong)uVar39 * 2);
        puVar31 = (undefined8 *)((long)puVar28 + (ulong)uVar38 * 2);
      } while( true );
    case 0x23:
      uVar39 = 0;
      uVar38 = 0;
      iVar37 = 0;
      pauVar30 = param_1;
      puVar31 = puVar28;
      while( true ) {
        iVar27 = param_4 - 1;
        if (-1 < (int)(param_4 - 1)) {
          do {
            iVar27 = iVar27 + -1;
            *(undefined2 *)puVar31 = *(undefined2 *)*pauVar30;
            *(undefined2 *)((long)puVar31 + 2) = *(undefined2 *)(*pauVar30 + 2);
            *(undefined2 *)((long)puVar31 + 4) = *(undefined2 *)(*pauVar30 + 4);
            pauVar30 = (undefined1 (*) [16])(*pauVar30 + 8);
            puVar31 = (undefined8 *)((long)puVar31 + 6);
          } while (iVar27 != -1);
        }
        iVar37 = iVar37 + 1;
        if (param_5 == iVar37) break;
        uVar39 = uVar39 + iVar3;
        uVar38 = uVar38 + iVar2;
        pauVar30 = (undefined1 (*) [16])(*param_1 + (ulong)uVar39 * 2);
        puVar31 = (undefined8 *)((long)puVar28 + (ulong)uVar38 * 2);
      }
    }
  }
  FUN_710081c200(param_1);
  return puVar28;
}



// ===== FUN_710005d080 @ 710005d080 (size=124) =====

undefined8 FUN_710005d080(long param_1,uint param_2)

{
  long lVar1;
  
  if (0 < (int)param_2) {
    lVar1 = param_1 + (ulong)param_2 * 0x60;
    do {
      if (*(long *)(param_1 + 0x46d8) != 0) {
        FUN_710081c200();
        *(undefined8 *)(param_1 + 0x46d0) = 0;
        *(undefined8 *)(param_1 + 0x46d8) = 0;
      }
      if (*(long *)(param_1 + 0x46e0) != 0) {
        FUN_710081c200();
        *(undefined8 *)(param_1 + 0x46e0) = 0;
        *(undefined8 *)(param_1 + 0x46f0) = 0;
      }
      if (*(long *)(param_1 + 0x46e8) != 0) {
        FUN_710081c200();
        *(undefined8 *)(param_1 + 0x46e8) = 0;
      }
      param_1 = param_1 + 0x60;
    } while (param_1 != lVar1);
    return 0;
  }
  return 0;
}



// ===== FUN_710005d100 @ 710005d100 (size=228) =====

void FUN_710005d100(float param_1,float param_2,float param_3,float param_4,float param_5,
                   float param_6,float param_7,long param_8,int param_9)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  
  if ((param_5 == param_3 || param_5 < param_3 != (NAN(param_5) || NAN(param_3))) &&
     (param_2 <= param_7)) {
    if (param_5 < param_2) {
      param_4 = param_4 + ((param_6 - param_4) * (param_2 - param_5)) / (param_7 - param_5);
      param_5 = param_2;
    }
    if (param_7 != param_3 && param_7 < param_3 == (NAN(param_7) || NAN(param_3))) {
      param_6 = param_6 + ((param_6 - param_4) * (param_3 - param_7)) / (param_7 - param_5);
      param_7 = param_3;
    }
    fVar3 = (float)param_9;
    if ((param_4 <= fVar3) && (fVar3 < param_6 == (NAN(fVar3) || NAN(param_6)))) {
      uVar1 = NEON_fmadd(param_7 - param_5,param_1,*(undefined4 *)(param_8 + (long)param_9 * 4));
      *(undefined4 *)(param_8 + (long)param_9 * 4) = uVar1;
      return;
    }
    fVar2 = (float)(param_9 + 1);
    if ((param_4 < fVar2 != (NAN(param_4) || NAN(fVar2))) ||
       (param_6 < fVar2 != (NAN(param_6) || NAN(fVar2)))) {
      uVar1 = NEON_fmsub((param_4 - fVar3) + (param_6 - fVar3),0x3f000000,0x3f800000);
      uVar1 = NEON_fmadd((param_7 - param_5) * param_1,uVar1,
                         *(undefined4 *)(param_8 + (long)param_9 * 4));
      *(undefined4 *)(param_8 + (long)param_9 * 4) = uVar1;
    }
  }
  return;
}



// ===== FUN_710005d1f0 @ 710005d1f0 (size=120) =====

long * FUN_710005d1f0(long *param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_71007e25c0(param_1,param_3 + param_5);
  FUN_71007e2b20(param_1,param_2,param_3);
  FUN_71007e2b20(param_1,param_4,param_5);
  return param_1;
}



// ===== FUN_710005d370 @ 710005d370 (size=368) =====

void FUN_710005d370(float param_1,float param_2,float param_3,float param_4,float param_5,
                   float param_6,float param_7,long param_8,uint *param_9,int param_10)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  if (param_10 == 0x11) {
    return;
  }
  fVar5 = (float)NEON_fmadd(param_3,0x40000000,param_1);
  fVar7 = (float)NEON_fmadd(param_4,0x40000000,param_2);
  fVar7 = (fVar7 + param_6) * 0.25;
  fVar5 = (fVar5 + param_5) * 0.25;
  fVar8 = (float)NEON_fnmsub(param_6 + param_2,0x3f000000,fVar7);
  uVar6 = NEON_fnmsub(param_5 + param_1,0x3f000000,fVar5);
  fVar8 = (float)NEON_fmadd(uVar6,uVar6,fVar8 * fVar8);
  if (fVar8 != param_7 && fVar8 < param_7 == (NAN(fVar8) || NAN(param_7))) {
    do {
      param_10 = param_10 + 1;
      FUN_710005d370(param_1,param_2,(param_3 + param_1) * 0.5,(param_4 + param_2) * 0.5);
      param_3 = (param_5 + param_3) * 0.5;
      param_4 = (param_6 + param_4) * 0.5;
      fVar8 = (float)NEON_fmadd(param_3,0x40000000,fVar5);
      fVar4 = (float)NEON_fmadd(param_4,0x40000000,fVar7);
      fVar3 = (fVar8 + param_5) * 0.25;
      fVar4 = (fVar4 + param_6) * 0.25;
      fVar8 = (float)NEON_fnmsub(param_6 + fVar7,0x3f000000,fVar4);
      uVar6 = NEON_fnmsub(param_5 + fVar5,0x3f000000,fVar3);
      if (param_10 == 0x11) {
        return;
      }
      fVar8 = (float)NEON_fmadd(uVar6,uVar6,fVar8 * fVar8);
      param_1 = fVar5;
      param_2 = fVar7;
      fVar5 = fVar3;
      fVar7 = fVar4;
    } while (fVar8 != param_7 && fVar8 < param_7 == (NAN(fVar8) || NAN(param_7)));
    uVar1 = *param_9;
    if (param_8 != 0) {
      uVar2 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
      *(float *)(param_8 + uVar2) = param_5;
      *(float *)(param_8 + uVar2 + 4) = param_6;
    }
    *param_9 = uVar1 + 1;
    return;
  }
  uVar1 = *param_9;
  if (param_8 != 0) {
    uVar2 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
    *(float *)(param_8 + uVar2) = param_5;
    *(float *)(param_8 + uVar2 + 4) = param_6;
  }
  *param_9 = uVar1 + 1;
  return;
}



// ===== FUN_710005d4e0 @ 710005d4e0 (size=2268) =====

/* WARNING: Type propagation algorithm not settling */

void FUN_710005d4e0(int *param_1,float *param_2,ulong param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  long lVar2;
  int iVar3;
  long *******ppppppplVar4;
  long *plVar5;
  float *pfVar6;
  float *pfVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  long *******ppppppplVar15;
  ulong uVar16;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  undefined1 *extraout_x9_02;
  undefined1 *extraout_x9_03;
  undefined1 *puVar17;
  undefined1 *extraout_x9_04;
  undefined1 *extraout_x9_05;
  long *******ppppppplVar18;
  int iVar19;
  long *plVar20;
  int iVar21;
  long *******ppppppplVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float extraout_s24;
  float extraout_s24_00;
  float extraout_s24_01;
  float extraout_s24_02;
  float extraout_s24_03;
  float fVar29;
  float extraout_s25;
  float extraout_s25_00;
  float extraout_s25_01;
  float extraout_s25_02;
  float extraout_s25_03;
  float extraout_s26;
  float extraout_s26_00;
  float extraout_s26_01;
  float extraout_s26_02;
  float extraout_s26_03;
  float fVar30;
  float extraout_s27;
  float extraout_s27_00;
  float extraout_s27_01;
  float fVar31;
  float extraout_s28;
  float extraout_s28_00;
  float extraout_s28_01;
  undefined4 extraout_s28_02;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  float fVar35;
  undefined1 *local_218;
  long *******local_210;
  undefined1 local_208 [520];
  
  iVar3 = *param_1;
  local_210 = (long *******)0x0;
  if (iVar3 < 0x41) {
    iVar19 = param_1[1];
    puVar8 = local_208;
    param_2[(param_3 & 0xffffffff) * 5 + 1] = (float)(param_5 + iVar19) + 1.0;
    if (iVar19 < 1) {
      return;
    }
  }
  else {
    puVar8 = (undefined1 *)FUN_710081c1c0((ulong)(iVar3 * 2 + 1) << 2);
    iVar19 = param_1[1];
    param_2[(param_3 & 0xffffffff) * 5 + 1] = (float)(param_5 + iVar19) + 1.0;
    if (iVar19 < 1) goto LAB_710005dd10;
  }
  local_218 = local_208;
  ppppppplVar18 = (long *******)0x0;
  iVar19 = 0;
  plVar20 = (long *)0x0;
  puVar1 = puVar8 + (long)iVar3 * 4;
  iVar21 = 0;
  ppppppplVar22 = (long *******)0x0;
  do {
    fVar26 = (float)(param_5 + iVar19);
    fVar27 = fVar26 + 1.0;
    FUN_7100808340(puVar8,0);
    FUN_7100808340(puVar1,0,(long)iVar3 * 4 + 4);
    if (ppppppplVar22 == (long *******)0x0) {
      fVar25 = param_2[1];
      if (fVar27 < fVar25 == (NAN(fVar27) || NAN(fVar25))) goto LAB_710005d6ec;
LAB_710005d720:
      if (0 < iVar3) goto LAB_710005d7d8;
    }
    else {
      ppppppplVar15 = (long *******)&local_210;
      do {
        ppppppplVar4 = ppppppplVar22;
        if (fVar26 < *(float *)((long)ppppppplVar22 + 0x1c) ==
            (NAN(fVar26) || NAN(*(float *)((long)ppppppplVar22 + 0x1c)))) {
          *ppppppplVar15 = *ppppppplVar22;
          *ppppppplVar22 = (long ******)ppppppplVar18;
          *(undefined4 *)((long)ppppppplVar22 + 0x14) = 0;
          ppppppplVar4 = ppppppplVar15;
          ppppppplVar18 = ppppppplVar22;
        }
        ppppppplVar22 = (long *******)*ppppppplVar4;
        ppppppplVar15 = ppppppplVar4;
      } while (ppppppplVar22 != (long *******)0x0);
      fVar25 = param_2[1];
      ppppppplVar22 = local_210;
      if (fVar27 < fVar25 == (NAN(fVar27) || NAN(fVar25))) {
LAB_710005d6ec:
        do {
          fVar24 = param_2[3];
          if (fVar24 != fVar25) {
            if (ppppppplVar18 == (long *******)0x0) {
              pfVar6 = param_2;
              if (iVar21 == 0) {
                do {
                  plVar5 = (long *)FUN_710081c1c0(0x6408);
                  if (plVar5 != (long *)0x0) {
                    iVar21 = 799;
                    *plVar5 = (long)plVar20;
                    lVar12 = 0x63e8;
                    plVar20 = plVar5;
                    param_2 = pfVar6;
                    goto LAB_710005da8c;
                  }
                  fVar25 = pfVar6[6];
                  param_2 = pfVar6 + 5;
                  if (fVar27 < fVar25 != (NAN(fVar27) || NAN(fVar25))) {
                    ppppppplVar18 = (long *******)0x0;
                    goto joined_r0x00710005d71c;
                  }
                  fVar24 = pfVar6[8];
                  pfVar6 = param_2;
                } while (fVar25 != fVar24);
                ppppppplVar18 = (long *******)0x0;
                goto LAB_710005d70c;
              }
              iVar21 = iVar21 + -1;
              lVar12 = (long)iVar21 * 0x20 + 8;
LAB_710005da8c:
              fVar28 = *param_2;
              local_210 = (long *******)((long)plVar20 + lVar12);
              fVar29 = (param_2[2] - fVar28) / (fVar24 - fVar25);
              ppppppplVar15 = ppppppplVar18;
            }
            else {
              fVar28 = *param_2;
              fVar29 = (param_2[2] - fVar28) / (fVar24 - fVar25);
              ppppppplVar15 = (long *******)*ppppppplVar18;
              local_210 = ppppppplVar18;
            }
            ppppppplVar18 = ppppppplVar15;
            fVar35 = 0.0;
            *(float *)((long)local_210 + 0xc) = fVar29;
            if (fVar29 != 0.0) {
              fVar35 = 1.0 / fVar29;
            }
            fVar33 = param_2[4];
            *(float *)(local_210 + 2) = fVar35;
            *(float *)((long)local_210 + 0x1c) = fVar24;
            fVar28 = (float)NEON_fmadd(fVar26 - fVar25,fVar29,fVar28);
            uVar34 = 0xbf800000;
            if (fVar33 != 0.0) {
              uVar34 = 0x3f800000;
            }
            *(undefined4 *)((long)local_210 + 0x14) = uVar34;
            *(float *)(local_210 + 3) = fVar25;
            *(float *)(local_210 + 1) = fVar28 - (float)param_4;
            if ((iVar19 == 0 && param_5 != 0) &&
               (fVar26 != fVar24 && fVar26 < fVar24 == (NAN(fVar26) || NAN(fVar24)))) {
              *(float *)((long)local_210 + 0x1c) = fVar26;
            }
            *local_210 = (long ******)ppppppplVar22;
            ppppppplVar22 = local_210;
          }
LAB_710005d70c:
          fVar25 = param_2[6];
          param_2 = param_2 + 5;
        } while (fVar27 < fVar25 == (NAN(fVar27) || NAN(fVar25)));
      }
joined_r0x00710005d71c:
      if (ppppppplVar22 == (long *******)0x0) goto LAB_710005d720;
      puVar17 = puVar1 + 4;
      ppppppplVar15 = ppppppplVar22;
      do {
        while( true ) {
          fVar25 = *(float *)(ppppppplVar15 + 1);
          fVar24 = *(float *)((long)ppppppplVar15 + 0xc);
          if (fVar24 != 0.0) break;
          fVar24 = (float)iVar3;
          if (fVar24 != fVar25 && fVar24 < fVar25 == (NAN(fVar24) || NAN(fVar25))) {
            if (fVar25 < 0.0 == NAN(fVar25)) {
              if (fVar26 != fVar27) {
                iVar13 = (int)fVar25;
                uVar34 = FUN_710005d100(*(undefined4 *)((long)ppppppplVar15 + 0x14),
                                        *(undefined4 *)(ppppppplVar15 + 3),
                                        *(undefined4 *)((long)ppppppplVar15 + 0x1c),fVar25,fVar26,
                                        fVar25,fVar27,puVar8,iVar13);
                FUN_710005d100(uVar34,extraout_s28_02,puVar1,iVar13 + 1);
                puVar17 = extraout_x9_05;
              }
            }
            else if (fVar26 != fVar27) {
              FUN_710005d100(*(undefined4 *)((long)ppppppplVar15 + 0x14),
                             *(undefined4 *)(ppppppplVar15 + 3),
                             *(undefined4 *)((long)ppppppplVar15 + 0x1c),fVar25,fVar26,fVar25,fVar27
                             ,puVar1,0);
              puVar17 = extraout_x9_04;
            }
          }
LAB_710005d630:
          ppppppplVar15 = (long *******)*ppppppplVar15;
          if (ppppppplVar15 == (long *******)0x0) goto LAB_710005d7d0;
        }
        fVar28 = *(float *)(ppppppplVar15 + 3);
        fVar29 = fVar24 + fVar25;
        fVar35 = fVar25;
        fVar33 = fVar26;
        if (fVar26 < fVar28) {
          fVar35 = (float)NEON_fmadd(fVar24,fVar28 - fVar26,fVar25);
          fVar33 = fVar28;
        }
        fVar23 = *(float *)((long)ppppppplVar15 + 0x1c);
        fVar30 = fVar29;
        fVar31 = fVar27;
        if (fVar27 != fVar23 && fVar27 < fVar23 == (NAN(fVar27) || NAN(fVar23))) {
          fVar30 = (float)NEON_fmadd(fVar24,fVar23 - fVar26,fVar25);
          fVar31 = fVar23;
        }
        if ((((fVar35 < 0.0 != NAN(fVar35)) || (fVar30 < 0.0 != NAN(fVar30))) ||
            ((float)iVar3 <= fVar35)) || ((float)iVar3 <= fVar30)) {
          uVar14 = 0;
          fVar35 = 0.0;
          if (0 < iVar3) {
            do {
              uVar16 = uVar14 & 0xffffffff;
              uVar9 = (int)uVar14 + 1;
              uVar14 = (ulong)uVar9;
              fVar23 = (float)(int)uVar9;
              fVar31 = (fVar35 - fVar25) / fVar24 + fVar26;
              fVar30 = (fVar23 - fVar25) / fVar24 + fVar26;
              fVar33 = fVar26;
              if (fVar35 == fVar25 || fVar35 < fVar25 != (NAN(fVar35) || NAN(fVar25))) {
                if (fVar29 < fVar35) {
                  if (fVar23 < fVar25) {
LAB_710005d864:
                    if (fVar26 != fVar30) {
                      FUN_710005d100(*(undefined4 *)((long)ppppppplVar15 + 0x14),fVar28,puVar8,
                                     uVar16);
                      puVar17 = extraout_x9;
                      fVar28 = extraout_s24;
                      fVar29 = extraout_s25;
                      fVar25 = extraout_s26;
                      fVar30 = extraout_s27;
                      fVar31 = extraout_s28;
                    }
                    fVar33 = fVar31;
                    if (fVar31 != fVar30) {
LAB_710005d8a8:
                      FUN_710005d100(*(undefined4 *)((long)ppppppplVar15 + 0x14),fVar28,puVar8,
                                     uVar16 & 0xffffffff);
                      puVar17 = extraout_x9_00;
                      fVar28 = extraout_s24_00;
                      fVar29 = extraout_s25_00;
                      fVar25 = extraout_s26_00;
                      fVar33 = extraout_s28_00;
                    }
                  }
                  else if (fVar25 <= fVar35) {
                    if (fVar23 != fVar25 && fVar23 < fVar25 == (NAN(fVar23) || NAN(fVar25)))
                    goto LAB_710005d910;
                  }
                  else {
LAB_710005d8f4:
                    fVar33 = fVar31;
                    if (fVar26 != fVar31) goto LAB_710005d8a8;
                  }
                }
                else if (fVar23 == fVar25 || fVar23 < fVar25 != (NAN(fVar23) || NAN(fVar25))) {
LAB_710005d6c8:
                  if ((fVar29 < fVar23) && (fVar23 < fVar25)) {
LAB_710005d91c:
                    fVar33 = fVar30;
                    if (fVar26 != fVar30) goto LAB_710005d934;
                  }
                }
                else {
LAB_710005d910:
                  if (fVar29 != fVar23 && fVar29 < fVar23 == (NAN(fVar29) || NAN(fVar23)))
                  goto LAB_710005d91c;
                }
              }
              else if (fVar29 == fVar23 || fVar29 < fVar23 != (NAN(fVar29) || NAN(fVar23))) {
                if (fVar29 < fVar35) {
                  if (fVar23 < fVar25) goto LAB_710005d864;
                  if (fVar23 != fVar25 && fVar23 < fVar25 == (NAN(fVar23) || NAN(fVar25)))
                  goto LAB_710005d910;
                }
                else {
                  if (fVar29 != fVar35 && fVar29 < fVar35 == (NAN(fVar29) || NAN(fVar35)))
                  goto LAB_710005d8f4;
                  if (fVar23 == fVar25 || fVar23 < fVar25 != (NAN(fVar23) || NAN(fVar25)))
                  goto LAB_710005d6c8;
                }
              }
              else {
                if (fVar26 != fVar31) {
                  FUN_710005d100(*(undefined4 *)((long)ppppppplVar15 + 0x14),fVar28,puVar8,uVar16);
                  puVar17 = extraout_x9_03;
                  fVar28 = extraout_s24_03;
                  fVar29 = extraout_s25_03;
                  fVar25 = extraout_s26_03;
                  fVar30 = extraout_s27_01;
                  fVar31 = extraout_s28_01;
                }
                fVar33 = fVar30;
                if (fVar31 != fVar30) {
LAB_710005d934:
                  FUN_710005d100(*(undefined4 *)((long)ppppppplVar15 + 0x14),fVar28,puVar8,
                                 uVar16 & 0xffffffff);
                  puVar17 = extraout_x9_02;
                  fVar28 = extraout_s24_02;
                  fVar29 = extraout_s25_02;
                  fVar25 = extraout_s26_02;
                  fVar33 = extraout_s27_00;
                }
              }
              if (fVar27 != fVar33) {
                FUN_710005d100(*(undefined4 *)((long)ppppppplVar15 + 0x14),fVar28,puVar8,
                               uVar16 & 0xffffffff);
                puVar17 = extraout_x9_01;
                fVar28 = extraout_s24_01;
                fVar29 = extraout_s25_01;
                fVar25 = extraout_s26_01;
              }
              fVar35 = fVar23;
            } while ((int)uVar14 != iVar3);
          }
          goto LAB_710005d630;
        }
        uVar9 = (uint)fVar35;
        uVar10 = (uint)fVar30;
        if (uVar9 != uVar10) {
          fVar28 = *(float *)(ppppppplVar15 + 2);
          fVar24 = fVar30;
          uVar11 = uVar10;
          if (fVar35 != fVar30 && fVar35 < fVar30 == (NAN(fVar35) || NAN(fVar30))) {
            fVar25 = fVar31 - fVar26;
            fVar28 = -fVar28;
            fVar31 = fVar27 - (fVar33 - fVar26);
            fVar33 = fVar27 - fVar25;
            fVar24 = fVar35;
            fVar25 = fVar29;
            fVar35 = fVar30;
            uVar11 = uVar9;
            uVar9 = uVar10;
          }
          iVar13 = uVar9 + 1;
          fVar30 = *(float *)((long)ppppppplVar15 + 0x14);
          fVar23 = (float)(int)uVar11;
          lVar12 = (long)(int)uVar9;
          fVar32 = (float)NEON_fmadd((float)iVar13 - fVar25,fVar28,fVar26);
          fVar25 = (float)NEON_fmadd(fVar28,fVar23 - fVar25,fVar26);
          fVar29 = fVar27;
          if (fVar32 <= fVar27) {
            fVar29 = fVar32;
          }
          fVar32 = (fVar29 - fVar33) * fVar30;
          uVar34 = NEON_fmadd(((float)iVar13 - fVar35) * fVar32,0x3f000000,
                              *(undefined4 *)(puVar8 + lVar12 * 4));
          *(undefined4 *)(puVar8 + lVar12 * 4) = uVar34;
          if (fVar27 < fVar25) {
            fVar28 = (fVar27 - fVar29) / (float)(int)(uVar11 - iVar13);
            fVar25 = fVar27;
          }
          if (iVar13 < (int)uVar11) {
            pfVar6 = (float *)(puVar8 + (-(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 |
                                        (ulong)uVar9 << 2) + 4);
            do {
              fVar29 = fVar30 * fVar28 * 0.5 + fVar32;
              fVar32 = fVar32 + fVar30 * fVar28;
              pfVar7 = pfVar6 + 1;
              *pfVar6 = *pfVar6 + fVar29;
              pfVar6 = pfVar7;
            } while (pfVar7 != (float *)(puVar8 + ((ulong)((uVar11 - 2) - uVar9) + lVar12) * 4 + 8))
            ;
          }
          lVar12 = (long)(int)uVar11;
          fVar25 = (float)NEON_fmadd(fVar30,(((fVar23 + 1.0) - fVar23) + ((fVar23 + 1.0) - fVar24))
                                            * 0.5 * (fVar31 - fVar25),fVar32);
          *(float *)(puVar8 + lVar12 * 4) = *(float *)(puVar8 + lVar12 * 4) + fVar25;
          uVar34 = NEON_fmadd(fVar30,fVar31 - fVar33,*(undefined4 *)(puVar17 + lVar12 * 4));
          *(undefined4 *)(puVar17 + lVar12 * 4) = uVar34;
          goto LAB_710005d630;
        }
        pfVar6 = (float *)((long)ppppppplVar15 + 0x14);
        lVar12 = (long)(int)uVar9;
        ppppppplVar15 = (long *******)*ppppppplVar15;
        fVar25 = (fVar31 - fVar33) * *pfVar6;
        uVar34 = NEON_fmadd(fVar25,((((float)(int)uVar9 + 1.0) - fVar35) +
                                   (((float)(int)uVar9 + 1.0) - fVar30)) * 0.5,
                            *(undefined4 *)(puVar8 + lVar12 * 4));
        *(undefined4 *)(puVar8 + lVar12 * 4) = uVar34;
        *(float *)(puVar17 + lVar12 * 4) = *(float *)(puVar17 + lVar12 * 4) + fVar25;
      } while (ppppppplVar15 != (long *******)0x0);
LAB_710005d7d0:
      if (iVar3 < 1) goto LAB_710005d834;
LAB_710005d7d8:
      fVar26 = 0.0;
      lVar12 = 0;
      do {
        fVar26 = fVar26 + *(float *)(puVar1 + lVar12 * 4);
        lVar2 = lVar12 * 4;
        iVar13 = (int)lVar12;
        lVar12 = lVar12 + 1;
        fVar27 = (float)NEON_fmadd(ABS(fVar26 + *(float *)(puVar8 + lVar2)),0x437f0000,0x3f000000);
        iVar3 = (int)fVar27;
        if (0xff < iVar3) {
          iVar3 = 0xff;
        }
        *(char *)(*(long *)(param_1 + 4) + (long)(iVar13 + iVar19 * param_1[2])) = (char)iVar3;
      } while ((int)lVar12 < *param_1);
      for (; ppppppplVar22 != (long *******)0x0; ppppppplVar22 = (long *******)*ppppppplVar22) {
LAB_710005d834:
        *(float *)(ppppppplVar22 + 1) =
             *(float *)(ppppppplVar22 + 1) + *(float *)((long)ppppppplVar22 + 0xc);
      }
    }
    iVar19 = iVar19 + 1;
    if (param_1[1] <= iVar19) break;
    iVar3 = *param_1;
    ppppppplVar22 = local_210;
  } while( true );
  while (plVar20 != (long *)0x0) {
    lVar12 = *plVar20;
    FUN_710081c200(plVar20);
    plVar20 = (long *)lVar12;
  }
  if (puVar8 == local_218) {
    return;
  }
LAB_710005dd10:
  FUN_710081c200(puVar8);
  return;
}



// ===== FUN_710005de80 @ 710005de80 (size=2364) =====

void FUN_710005de80(long param_1,int param_2,long param_3,long param_4,ulong param_5,int param_6,
                   int param_7)

{
  ushort uVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  ushort *puVar10;
  float *pfVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  uint local_88;
  ushort local_80 [64];
  
  uVar14 = param_5 & 0xffffffff;
  local_88 = *(uint *)(param_1 + 0x54);
  iVar13 = (int)param_5;
  if ((local_88 & 1) == 0) {
    if (param_2 < 1) {
      if (iVar13 < 1) {
        if (param_7 == 4) {
          return;
        }
        if (4 < param_7) {
          if (param_7 == 6) {
            return;
          }
          if (param_7 == 7) {
            return;
          }
          uVar15 = 0;
          goto LAB_710005e0a8;
        }
        if (param_7 == 2) {
          return;
        }
        if (param_7 == 3) {
          return;
        }
        goto LAB_710005e090;
      }
    }
    else {
      uVar15 = local_88 & 1;
      pfVar11 = (float *)(param_4 + (long)param_6 * 4);
      iVar3 = 0;
      do {
        fVar17 = 0.0;
        if (*pfVar11 != 0.0) {
          fVar17 = 1.0 / *pfVar11;
        }
        iVar8 = 0;
        if (0 < iVar13) {
          do {
            if (param_6 != iVar8) {
              *(float *)(param_4 + (ulong)(iVar8 + uVar15) * 4) =
                   *(float *)(param_4 + (ulong)(iVar8 + uVar15) * 4) * fVar17;
            }
            iVar8 = iVar8 + 1;
          } while (iVar13 != iVar8);
        }
        iVar3 = iVar3 + 1;
        pfVar11 = (float *)((long)pfVar11 +
                           (-(param_5 >> 0x1f & 1) & 0xfffffffc00000000 |
                           (param_5 & 0xffffffff) << 2));
        uVar15 = uVar15 + iVar13;
      } while (param_2 != iVar3);
      if (iVar13 < 1) {
        if (param_7 == 4) goto LAB_710005e5b0;
        if (4 < param_7) {
          if (param_7 == 6) goto LAB_710005e558;
          if (param_7 != 7) {
            uVar15 = 0;
            goto LAB_710005e0a8;
          }
          uVar15 = 0;
          goto LAB_710005e32c;
        }
        if (param_7 == 2) goto LAB_710005e584;
        if (param_7 == 3) {
          uVar15 = 0;
          goto LAB_710005e214;
        }
LAB_710005e090:
        uVar15 = 0;
        goto joined_r0x00710005e090;
      }
    }
LAB_710005dec8:
    uVar15 = 0;
    iVar3 = 0;
    do {
      while ((param_6 == iVar3 && ((local_88 & 2) == 0))) {
        iVar3 = iVar3 + 1;
        if (iVar13 == iVar3) goto LAB_710005df08;
      }
      local_80[(int)uVar15] = (ushort)iVar3;
      iVar3 = iVar3 + 1;
      uVar15 = uVar15 + 1;
    } while (iVar13 != iVar3);
  }
  else {
    uVar15 = 0;
    if (0 < iVar13) goto LAB_710005dec8;
  }
LAB_710005df08:
  if (param_7 == 4) {
    if (param_2 < 1) {
      return;
    }
LAB_710005e5b0:
    uVar12 = 0;
    iVar3 = 0;
    do {
      if (0 < iVar13) {
        do {
          uVar9 = -(uVar12 >> 0x1f) & 0xfffffffc00000000 | uVar12 << 2;
          uVar5 = 0;
          do {
            fVar17 = *(float *)(param_4 + uVar9 + uVar5);
            iVar8 = 0;
            if (0.0 <= fVar17) {
              fVar18 = 1.0;
              if (fVar17 == 1.0 || fVar17 < 1.0 != NAN(fVar17)) {
                fVar18 = fVar17;
              }
              dVar19 = (double)NEON_fmadd((double)fVar18,0x41efffffffe00000,0x3fe0000000000000);
              iVar8 = (int)dVar19;
            }
            *(int *)(param_3 + uVar9 + uVar5) = iVar8;
            uVar5 = uVar5 + 4;
          } while (uVar5 != (-(uVar14 >> 0x1f) & 0xfffffffc00000000 | uVar14 << 2));
          iVar3 = iVar3 + 1;
          uVar12 = (ulong)(uint)((int)uVar12 + iVar13);
        } while (param_2 != iVar3);
        return;
      }
      iVar3 = iVar3 + 1;
      uVar12 = (ulong)(uint)((int)uVar12 + iVar13);
    } while (param_2 != iVar3);
    return;
  }
  if (4 < param_7) {
    if (param_7 == 6) {
      if (param_2 < 1) {
        return;
      }
LAB_710005e558:
      uVar12 = 0;
      iVar3 = 0;
      do {
        if (0 < iVar13) {
          do {
            uVar9 = -(uVar12 >> 0x1f) & 0xfffffffc00000000 | uVar12 << 2;
            uVar5 = 0;
            do {
              *(undefined4 *)(param_3 + uVar9 + uVar5) = *(undefined4 *)(param_4 + uVar9 + uVar5);
              uVar5 = uVar5 + 4;
            } while (uVar5 != (-(uVar14 >> 0x1f) & 0xfffffffc00000000 | uVar14 << 2));
            iVar3 = iVar3 + 1;
            uVar12 = (ulong)(uint)((int)uVar12 + iVar13);
          } while (param_2 != iVar3);
          return;
        }
        iVar3 = iVar3 + 1;
        uVar12 = (ulong)(uint)((int)uVar12 + iVar13);
      } while (param_2 != iVar3);
      return;
    }
    if (param_7 == 7) {
      if (param_2 < 1) {
        return;
      }
LAB_710005e32c:
      iVar3 = 0;
      iVar8 = 0;
      local_88 = local_88 & 2;
      if (uVar15 != 0) goto LAB_710005e340;
      do {
        if (local_88 == 0) {
          do {
            do {
              iVar3 = iVar3 + 1;
              *(undefined4 *)(param_3 + (long)(param_6 + iVar8) * 4) =
                   *(undefined4 *)(param_4 + (long)(param_6 + iVar8) * 4);
              if (param_2 == iVar3) {
                return;
              }
              iVar8 = iVar8 + iVar13;
            } while (uVar15 == 0);
LAB_710005e340:
            puVar10 = local_80;
            while( true ) {
              do {
                uVar1 = *puVar10;
                fVar17 = *(float *)(param_4 + (long)(int)((uint)uVar1 + iVar8) * 4);
                if (fVar17 <= 0.0031308) {
                  fVar17 = fVar17 * 12.92;
                }
                else {
                  uVar16 = FUN_7100800040(fVar17,0x3ed55555);
                  fVar17 = (float)NEON_fmadd(uVar16,0x3f870a3d,0xbd6147ae);
                }
                puVar10 = puVar10 + 1;
                *(float *)(param_3 + (long)(int)((uint)uVar1 + iVar8) * 4) = fVar17;
              } while (puVar10 != local_80 + uVar15);
              if (local_88 == 0) break;
              iVar3 = iVar3 + 1;
              if (param_2 == iVar3) {
                return;
              }
              iVar8 = iVar8 + iVar13;
              puVar10 = local_80;
            }
          } while( true );
        }
        iVar8 = iVar8 + iVar13;
        iVar3 = iVar3 + 1;
      } while (param_2 != iVar3);
      return;
    }
LAB_710005e0a8:
    if (param_7 != 5) {
      return;
    }
    if (param_2 < 1) {
      return;
    }
    iVar8 = 0;
    iVar3 = 0;
    do {
      puVar10 = local_80;
      if (uVar15 != 0) {
        do {
          uVar1 = *puVar10;
          iVar7 = 0;
          fVar17 = *(float *)(param_4 + (long)(int)((uint)uVar1 + iVar8) * 4);
          if (0.0 <= fVar17) {
            fVar18 = 1.0;
            if (fVar17 == 1.0 || fVar17 < 1.0 != NAN(fVar17)) {
              fVar18 = fVar17;
            }
            if (fVar18 <= 0.0031308) {
              fVar18 = fVar18 * 12.92;
            }
            else {
              uVar16 = FUN_7100800040(fVar18,0x3ed55555);
              fVar18 = (float)NEON_fmadd(uVar16,0x3f870a3d,0xbd6147ae);
            }
            dVar19 = (double)NEON_fmadd((double)fVar18,0x41efffffffe00000,0x3fe0000000000000);
            iVar7 = (int)dVar19;
          }
          puVar10 = puVar10 + 1;
          *(int *)(param_3 + (long)(int)((uint)uVar1 + iVar8) * 4) = iVar7;
        } while (puVar10 != local_80 + uVar15);
      }
      if ((*(uint *)(param_1 + 0x54) >> 1 & 1) == 0) {
        iVar7 = 0;
        fVar17 = *(float *)(param_4 + (long)(param_6 + iVar8) * 4);
        if (0.0 <= fVar17) {
          fVar18 = 1.0;
          if (fVar17 == 1.0 || fVar17 < 1.0 != NAN(fVar17)) {
            fVar18 = fVar17;
          }
          dVar19 = (double)NEON_fmadd((double)fVar18,0x41efffffffe00000,0x3fe0000000000000);
          iVar7 = (int)dVar19;
        }
        *(int *)(param_3 + (long)(param_6 + iVar8) * 4) = iVar7;
      }
      iVar8 = iVar8 + iVar13;
      iVar3 = iVar3 + 1;
    } while (param_2 != iVar3);
    return;
  }
  if (param_7 == 2) {
    if (param_2 < 1) {
      return;
    }
LAB_710005e584:
    iVar8 = 0;
    iVar3 = 0;
    do {
      if (0 < iVar13) {
        do {
          lVar4 = 0;
          do {
            fVar17 = *(float *)(param_4 + (long)iVar8 * 4 + lVar4 * 4);
            uVar6 = 0;
            if (0.0 <= fVar17) {
              fVar18 = 1.0;
              if (fVar17 == 1.0 || fVar17 < 1.0 != NAN(fVar17)) {
                fVar18 = fVar17;
              }
              uVar6 = (undefined2)(int)(fVar18 * 65535.0 + 0.5);
            }
            *(undefined2 *)(param_3 + (long)iVar8 * 2 + lVar4 * 2) = uVar6;
            lVar4 = lVar4 + 1;
          } while (lVar4 != iVar13);
          iVar3 = iVar3 + 1;
          iVar8 = iVar8 + iVar13;
        } while (iVar3 != param_2);
        return;
      }
      iVar3 = iVar3 + 1;
      iVar8 = iVar8 + iVar13;
    } while (param_2 != iVar3);
    return;
  }
  if (param_7 == 3) {
    if (param_2 < 1) {
      return;
    }
LAB_710005e214:
    iVar3 = 0;
    iVar8 = 0;
    local_88 = local_88 & 2;
    if (uVar15 != 0) goto LAB_710005e228;
    do {
      if (local_88 == 0) {
        while( true ) {
          uVar6 = 0;
          fVar17 = *(float *)(param_4 + (long)(param_6 + iVar8) * 4);
          if (0.0 <= fVar17) {
            fVar18 = 1.0;
            if (fVar17 == 1.0 || fVar17 < 1.0 != NAN(fVar17)) {
              fVar18 = fVar17;
            }
            uVar6 = (undefined2)(int)(fVar18 * 65535.0 + 0.5);
          }
          *(undefined2 *)(param_3 + (long)(param_6 + iVar8) * 2) = uVar6;
          iVar3 = iVar3 + 1;
          if (param_2 == iVar3) break;
          iVar8 = iVar8 + iVar13;
          if (uVar15 != 0) {
LAB_710005e228:
            puVar10 = local_80;
            while( true ) {
              do {
                uVar1 = *puVar10;
                uVar6 = 0;
                fVar17 = *(float *)(param_4 + (long)(int)((uint)uVar1 + iVar8) * 4);
                if (0.0 <= fVar17) {
                  fVar18 = 1.0;
                  if (fVar17 == 1.0 || fVar17 < 1.0 != NAN(fVar17)) {
                    fVar18 = fVar17;
                  }
                  if (fVar18 <= 0.0031308) {
                    fVar18 = fVar18 * 12.92;
                  }
                  else {
                    uVar16 = FUN_7100800040(fVar18,0x3ed55555);
                    fVar18 = (float)NEON_fmadd(uVar16,0x3f870a3d,0xbd6147ae);
                  }
                  uVar6 = (undefined2)(int)(fVar18 * 65535.0 + 0.5);
                }
                puVar10 = puVar10 + 1;
                *(undefined2 *)(param_3 + (long)(int)((uint)uVar1 + iVar8) * 2) = uVar6;
              } while (puVar10 != local_80 + uVar15);
              if (local_88 == 0) break;
              iVar3 = iVar3 + 1;
              if (iVar3 == param_2) {
                return;
              }
              iVar8 = iVar8 + iVar13;
              puVar10 = local_80;
            }
          }
        }
        return;
      }
      iVar8 = iVar8 + iVar13;
      iVar3 = iVar3 + 1;
    } while (param_2 != iVar3);
    return;
  }
joined_r0x00710005e090:
  if (param_7 == 0) {
    if (param_2 < 1) {
      return;
    }
    iVar8 = 0;
    iVar3 = 0;
    do {
      if (0 < iVar13) {
        do {
          lVar4 = 0;
          do {
            fVar17 = *(float *)(param_4 + (long)iVar8 * 4 + lVar4 * 4);
            uVar2 = 0;
            if (0.0 <= fVar17) {
              fVar18 = 1.0;
              if (fVar17 == 1.0 || fVar17 < 1.0 != NAN(fVar17)) {
                fVar18 = fVar17;
              }
              uVar2 = (undefined1)(int)(fVar18 * 255.0 + 0.5);
            }
            *(undefined1 *)(param_3 + iVar8 + lVar4) = uVar2;
            lVar4 = lVar4 + 1;
          } while (lVar4 != iVar13);
          iVar3 = iVar3 + 1;
          iVar8 = iVar8 + iVar13;
        } while (iVar3 != param_2);
        return;
      }
      iVar3 = iVar3 + 1;
      iVar8 = iVar8 + iVar13;
    } while (param_2 != iVar3);
    return;
  }
  if (param_7 != 1) {
    return;
  }
  if (param_2 < 1) {
    return;
  }
  iVar8 = 0;
  iVar3 = 0;
  do {
    puVar10 = local_80;
    if (uVar15 != 0) {
      do {
        uVar1 = *puVar10;
        fVar17 = *(float *)(param_4 + (long)(int)((uint)uVar1 + iVar8) * 4);
        if (fVar17 == 0.00012207031 || fVar17 < 0.00012207031 != NAN(fVar17)) {
          uVar2 = 0;
        }
        else {
          fVar18 = 0.99999994;
          if (fVar17 == 0.99999994 || fVar17 < 0.99999994 != NAN(fVar17)) {
            fVar18 = fVar17;
          }
          uVar2 = (undefined1)
                  ((*(uint *)(&DAT_710085c8e0 + (ulong)((int)fVar18 + 0xc7000000U >> 0x14) * 4) >>
                   0x10) * 0x200 +
                   ((uint)fVar18 >> 0xc & 0xff) *
                   (*(uint *)(&DAT_710085c8e0 + (ulong)((int)fVar18 + 0xc7000000U >> 0x14) * 4) &
                   0xffff) >> 0x10);
        }
        puVar10 = puVar10 + 1;
        *(undefined1 *)(param_3 + (int)((uint)uVar1 + iVar8)) = uVar2;
      } while (puVar10 != local_80 + uVar15);
    }
    if ((*(uint *)(param_1 + 0x54) >> 1 & 1) == 0) {
      uVar2 = 0;
      fVar17 = *(float *)(param_4 + (long)(param_6 + iVar8) * 4);
      if (0.0 <= fVar17) {
        fVar18 = 1.0;
        if (fVar17 == 1.0 || fVar17 < 1.0 != NAN(fVar17)) {
          fVar18 = fVar17;
        }
        uVar2 = (undefined1)(int)(fVar18 * 255.0 + 0.5);
      }
      *(undefined1 *)(param_3 + (param_6 + iVar8)) = uVar2;
    }
    iVar3 = iVar3 + 1;
    iVar8 = iVar8 + iVar13;
  } while (param_2 != iVar3);
  return;
}



// ===== FUN_710005e7c0 @ 710005e7c0 (size=440) =====

int FUN_710005e7c0(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  
  iVar1 = FUN_710005c380(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x5c));
  iVar2 = FUN_710005c380(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x60));
  fVar7 = *(float *)(param_1 + 0x44);
  if (fVar7 == 1.0 || fVar7 < 1.0 != NAN(fVar7)) {
    iVar4 = *(int *)(param_1 + 8);
    iVar3 = FUN_710005c380(*(undefined4 *)(param_1 + 0x5c));
    fVar7 = *(float *)(param_1 + 0x48);
    iVar4 = (iVar3 - (iVar3 >> 0x1f) & 0xfffffffeU) + iVar4;
    *(int *)(param_1 + 0xc0) = iVar4;
    if (fVar7 == 1.0 || fVar7 < 1.0 != NAN(fVar7)) {
      iVar3 = *(int *)(param_1 + 0xc);
      iVar4 = FUN_710005c380(*(undefined4 *)(param_1 + 0x60));
      iVar3 = (iVar4 - (iVar4 >> 0x1f) & 0xfffffffeU) + iVar3;
      iVar4 = *(int *)(param_1 + 0xc0);
      goto LAB_710005e898;
    }
  }
  else {
    fVar7 = *(float *)(param_1 + 0x48);
    iVar4 = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0xc0) = iVar4;
    if (fVar7 == 1.0 || fVar7 < 1.0 != NAN(fVar7)) {
      iVar3 = *(int *)(param_1 + 0xc);
      iVar4 = FUN_710005c380(*(undefined4 *)(param_1 + 0x60));
      iVar3 = (iVar4 - (iVar4 >> 0x1f) & 0xfffffffeU) + iVar3;
      iVar4 = *(int *)(param_1 + 0xc0);
      goto LAB_710005e898;
    }
  }
  iVar3 = *(int *)(param_1 + 0x24);
LAB_710005e898:
  *(int *)(param_1 + 0xc4) = iVar3;
  *(int *)(param_1 + 0xcc) = iVar2 + 1;
  *(int *)(param_1 + 0xf0) = iVar4 << 3;
  iVar3 = FUN_710005c3e0(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x5c));
  iVar2 = *(int *)(param_1 + 0xc4);
  *(int *)(param_1 + 0xf4) = iVar4 * iVar3 * 4;
  *(int *)(param_1 + 0xf8) = iVar2 << 3;
  iVar4 = FUN_710005c3e0(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x60));
  iVar2 = iVar2 * iVar4 * 4;
  fVar7 = *(float *)(param_1 + 0x48);
  iVar3 = *(int *)(param_1 + 0x4c) * *(int *)(param_1 + 0x20);
  iVar1 = (*(int *)(param_1 + 8) + (iVar1 / 2) * 2) * *(int *)(param_1 + 0x4c) * 4;
  *(int *)(param_1 + 0xfc) = iVar2;
  *(int *)(param_1 + 0x100) = iVar1;
  iVar4 = iVar3 * 4;
  *(int *)(param_1 + 0x104) = iVar4;
  *(int *)(param_1 + 0x10c) = iVar4;
  iVar3 = iVar3 * *(int *)(param_1 + 0xcc) * 4;
  *(int *)(param_1 + 0x108) = iVar3;
  if (fVar7 == 1.0 || fVar7 < 1.0 != NAN(fVar7)) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    iVar5 = 0;
    iVar6 = iVar4;
  }
  else {
    iVar6 = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    iVar5 = iVar4;
  }
  return *(int *)(param_1 + 0xf0) + *(int *)(param_1 + 0xf4) + *(int *)(param_1 + 0xf8) + iVar2 +
         iVar1 + iVar6 + iVar3 + iVar5;
}



// ===== FUN_710005e980 @ 710005e980 (size=1516) =====

void FUN_710005e980(float param_1,float param_2,int *param_3,long param_4,int param_5,int param_6,
                   int param_7)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  float *pfVar9;
  float *pfVar10;
  long lVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  code *pcVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  
  if (param_1 != 1.0 && param_1 < 1.0 == NAN(param_1)) {
    fVar18 = (float)(*(code *)(&PTR_LAB_7100adb560)[(long)param_5 * 2])(1.0 / param_1);
    if (0 < param_7) {
      iVar3 = 0;
      do {
        fVar19 = (float)iVar3 + 0.5;
        iVar6 = (int)(((fVar19 - param_1 * fVar18) + param_2) / param_1 + 0.5);
        iVar5 = (int)((param_1 * fVar18 + fVar19 + param_2) / param_1 - 0.5);
        iVar4 = FUN_710005c3e0(param_1,param_5);
        *param_3 = iVar6;
        param_3[1] = iVar5;
        if (iVar6 <= iVar5) {
          pfVar1 = (float *)(param_4 + (long)(iVar4 * iVar3) * 4);
          fVar21 = 0.0;
          uVar16 = 0;
          pcVar17 = *(code **)(&DAT_7100adb558 + (long)param_5 * 0x10);
          do {
            while( true ) {
              fVar22 = (float)(*pcVar17)((param_2 + fVar19) / param_1 -
                                         ((float)(int)(iVar6 + uVar16) + 0.5),1.0 / param_1);
              pfVar1[uVar16] = fVar22;
              if (fVar22 != 0.0 || uVar16 != 0) break;
              iVar6 = iVar6 + 1;
              uVar16 = 0;
              uVar15 = iVar5 - iVar6;
              *param_3 = iVar6;
              if ((int)uVar15 < 0) goto LAB_710005ede8;
            }
            uVar16 = uVar16 + 1;
            uVar15 = iVar5 - iVar6;
            fVar21 = fVar21 + fVar22;
          } while ((int)uVar16 <= (int)uVar15);
LAB_710005ede8:
          fVar21 = 1.0 / fVar21;
          if (-1 < (int)uVar15) {
            if (uVar15 < 3) {
              uVar16 = 0;
LAB_710005ee30:
              lVar8 = (long)(int)uVar16;
              do {
                pfVar1[lVar8] = pfVar1[lVar8] * fVar21;
                lVar8 = lVar8 + 1;
              } while ((int)lVar8 <= (int)uVar15);
            }
            else {
              uVar2 = uVar15 + 1;
              pfVar9 = pfVar1;
              do {
                pfVar10 = pfVar9 + 4;
                *pfVar9 = *pfVar9 * fVar21;
                pfVar9[1] = pfVar9[1] * fVar21;
                pfVar9[2] = pfVar9[2] * fVar21;
                pfVar9[3] = pfVar9[3] * fVar21;
                pfVar9 = pfVar10;
              } while (pfVar10 != pfVar1 + (ulong)(uVar2 >> 2) * 4);
              uVar16 = uVar2 & 0xfffffffc;
              if ((uVar2 & 3) != 0) goto LAB_710005ee30;
            }
            lVar8 = (long)(int)uVar15;
            do {
              if (pfVar1[lVar8] != 0.0) break;
              iVar6 = (int)lVar8;
              lVar8 = lVar8 + -1;
              param_3[1] = *param_3 + iVar6 + -1;
            } while (-1 < (int)lVar8);
          }
        }
        iVar3 = iVar3 + 1;
        param_3 = param_3 + 2;
      } while (param_7 != iVar3);
    }
    return;
  }
  iVar3 = FUN_710005c380(param_5);
  iVar3 = (iVar3 - (iVar3 >> 0x1f) & 0xfffffffeU) + param_6;
  fVar18 = (float)(*(code *)(&PTR_LAB_7100adb560)[(long)param_5 * 2])(param_1);
  if (0 < iVar3) {
    iVar6 = 0;
    piVar12 = param_3;
    do {
      iVar4 = FUN_710005c380(param_1,param_5);
      fVar19 = (float)(iVar6 - iVar4 / 2) + 0.5;
      fVar22 = (float)NEON_fnmsub(param_1,fVar18 / param_1 + fVar19,param_2);
      fVar21 = (float)NEON_fnmsub(param_1,fVar19 - fVar18 / param_1,param_2);
      iVar14 = (int)(fVar21 + 0.5);
      iVar5 = FUN_710005c3e0(param_1,param_5);
      *piVar12 = iVar14;
      piVar12[1] = (int)(fVar22 - 0.5);
      iVar4 = (int)(fVar22 - 0.5) - iVar14;
      if (-1 < iVar4) {
        fVar19 = (float)NEON_fnmsub(param_1,fVar19,param_2);
        pcVar17 = *(code **)(&DAT_7100adb558 + (long)param_5 * 0x10);
        lVar11 = 0;
        lVar8 = param_4 + (long)(iVar5 * iVar6) * 4;
        do {
          fVar21 = (float)(*pcVar17)(((float)(iVar14 + (int)lVar11) + 0.5) - fVar19,param_1);
          *(float *)(lVar8 + lVar11 * 4) = param_1 * fVar21;
          lVar11 = lVar11 + 1;
        } while ((int)lVar11 <= iVar4);
        lVar11 = (long)iVar4;
        do {
          if (*(float *)(lVar8 + lVar11 * 4) != 0.0) break;
          iVar4 = (int)lVar11;
          lVar11 = lVar11 + -1;
          piVar12[1] = *piVar12 + iVar4 + -1;
        } while (-1 < (int)lVar11);
      }
      iVar6 = iVar6 + 1;
      piVar12 = piVar12 + 2;
    } while (iVar6 != iVar3);
  }
  iVar3 = FUN_710005c380(param_1,param_5);
  uVar16 = (iVar3 - (iVar3 >> 0x1f) & 0xfffffffeU) + param_6;
  iVar6 = FUN_710005c3e0(param_1,param_5);
  iVar3 = 0;
  if (0 < param_7) {
    do {
      if (0 < (int)uVar16) goto LAB_710005eb64;
      iVar3 = iVar3 + 1;
    } while (param_7 != iVar3);
  }
LAB_710005eec0:
  if ((int)uVar16 < 1) {
    return;
  }
LAB_710005ebc8:
  uVar15 = 0;
  piVar12 = param_3;
  do {
    iVar3 = 0;
    while (iVar4 = FUN_710005c3e0(param_1,param_5),
          *(float *)(param_4 + (long)(int)(iVar3 + iVar4 * uVar15) * 4) == 0.0) {
      iVar3 = iVar3 + 1;
    }
    iVar4 = iVar3 + *piVar12;
    if (iVar4 < 0) {
      iVar3 = -*piVar12;
      iVar4 = 0;
      *piVar12 = 0;
    }
    else {
      *piVar12 = iVar4;
    }
    iVar5 = 0;
    iVar4 = (piVar12[1] - iVar4) + 1;
    if (iVar6 < iVar4) {
      iVar4 = iVar6;
    }
    iVar14 = FUN_710005c3e0(param_1,param_5);
    if (0 < iVar4) {
      do {
        if (iVar14 <= iVar3) break;
        iVar7 = FUN_710005c3e0(param_1,param_5);
        iVar7 = iVar3 + iVar7 * uVar15;
        iVar3 = iVar3 + 1;
        uVar20 = *(undefined4 *)(param_4 + (long)iVar7 * 4);
        iVar7 = FUN_710005c3e0(param_1,param_5);
        iVar7 = iVar5 + iVar7 * uVar15;
        iVar5 = iVar5 + 1;
        *(undefined4 *)(param_4 + (long)iVar7 * 4) = uVar20;
      } while (iVar4 != iVar5);
    }
    uVar15 = uVar15 + 1;
    piVar12 = piVar12 + 2;
    if (uVar15 == uVar16) {
      piVar12 = param_3 + 1;
      do {
        iVar3 = *piVar12;
        if (param_7 + -1 < *piVar12) {
          iVar3 = param_7 + -1;
        }
        piVar13 = piVar12 + 2;
        *piVar12 = iVar3;
        piVar12 = piVar13;
      } while (piVar13 != param_3 + 1 + (ulong)uVar15 * 2);
      return;
    }
  } while( true );
LAB_710005eb64:
  do {
    fVar18 = 0.0;
    uVar15 = 0;
    piVar12 = param_3;
    do {
      iVar4 = *piVar12;
      if (iVar3 < iVar4) break;
      if (iVar3 <= piVar12[1]) {
        iVar5 = FUN_710005c3e0(param_1,param_5);
        fVar18 = fVar18 + *(float *)(param_4 + (long)(int)((iVar3 - iVar4) + iVar5 * uVar15) * 4);
      }
      uVar15 = uVar15 + 1;
      piVar12 = piVar12 + 2;
    } while (uVar15 != uVar16);
    uVar15 = 0;
    piVar12 = param_3;
    do {
      iVar4 = *piVar12;
      if (iVar3 < iVar4) {
        iVar3 = iVar3 + 1;
        if (param_7 == iVar3) goto LAB_710005eec0;
        goto LAB_710005eb64;
      }
      if (iVar3 <= piVar12[1]) {
        iVar5 = FUN_710005c3e0(param_1,param_5);
        lVar8 = (long)(int)((iVar3 - iVar4) + iVar5 * uVar15);
        *(float *)(param_4 + lVar8 * 4) = *(float *)(param_4 + lVar8 * 4) * (1.0 / fVar18);
      }
      uVar15 = uVar15 + 1;
      piVar12 = piVar12 + 2;
    } while (uVar15 != uVar16);
    iVar3 = iVar3 + 1;
  } while (param_7 != iVar3);
  goto LAB_710005ebc8;
}



// ===== FUN_710005ef70 @ 710005ef70 (size=232) =====

ulong FUN_710005ef70(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar3 = *(uint *)(param_1 + 0x14);
  uVar5 = (int)uVar3 >> 1 & 0x5555U | (uVar3 & 0x5555) << 1;
  uVar5 = uVar5 >> 2 & 0x3333 | (uVar5 & 0x3333) << 2;
  uVar5 = uVar5 >> 4 & 0xf0f | (uVar5 & 0xf0f) << 4;
  uVar5 = (uVar5 & 0xff) << 8 | uVar5 >> 8;
  if ((int)uVar5 < *(int *)(param_2 + 0x448)) {
    uVar7 = 6;
    uVar6 = 10;
  }
  else {
    uVar6 = 0xb;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (*(int *)(param_2 + 0x41c + (uVar4 + 1) * 4) <= (int)uVar5);
    uVar6 = uVar4 & 0xffffffff;
    if ((int)uVar4 == 0x10) {
      return 0xffffffff;
    }
    uVar7 = 0x10 - (int)uVar4;
  }
  lVar1 = param_2 + uVar6 * 2;
  iVar2 = (((int)uVar5 >> (uVar7 & 0x1f)) - (uint)*(ushort *)(lVar1 + 0x400)) +
          (uint)*(ushort *)(lVar1 + 0x464);
  if ((iVar2 < 0x120) && (uVar5 = (uint)uVar6, *(byte *)(param_2 + iVar2 + 0x484) == uVar5)) {
    *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - uVar5;
    *(uint *)(param_1 + 0x14) = uVar3 >> (ulong)(uVar5 & 0x1f);
    return (ulong)*(ushort *)(param_2 + (long)iVar2 * 2 + 0x5a4);
  }
  return 0xffffffff;
}



// ===== FUN_710005f060 @ 710005f060 (size=132) =====

void FUN_710005f060(float param_1,float param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  
  fVar6 = (float)param_3[4];
  fVar4 = (float)param_3[5];
  param_3[4] = (int)(param_1 + fVar6);
  param_3[5] = (int)(param_2 + fVar4);
  iVar7 = (int)(param_1 + fVar6);
  iVar5 = (int)(param_2 + fVar4);
  if (*param_3 == 0) {
    iVar1 = param_3[0xc];
    lVar3 = (long)iVar1 * 0xe;
    lVar2 = *(long *)(param_3 + 10) + lVar3;
    *(short *)(*(long *)(param_3 + 10) + lVar3) = (short)iVar7;
    *(short *)(lVar2 + 2) = (short)iVar5;
    *(undefined8 *)(lVar2 + 4) = 0;
    *(undefined1 *)(lVar2 + 0xc) = 2;
    param_3[0xc] = iVar1 + 1;
    return;
  }
  lVar2 = FUN_710005b890(param_3,iVar7,iVar5);
  param_3[0xc] = *(int *)(lVar2 + 0x30) + 1;
  return;
}



// ===== FUN_710005f0f0 @ 710005f0f0 (size=140) =====

void FUN_710005f0f0(int *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  if (((float)param_1[2] == (float)param_1[4]) && ((float)param_1[5] == (float)param_1[3])) {
    return;
  }
  iVar5 = (int)(float)param_1[2];
  iVar4 = (int)(float)param_1[3];
  if (*param_1 == 0) {
    iVar1 = param_1[0xc];
    lVar3 = (long)iVar1 * 0xe;
    lVar2 = *(long *)(param_1 + 10) + lVar3;
    *(short *)(*(long *)(param_1 + 10) + lVar3) = (short)iVar5;
    *(short *)(lVar2 + 2) = (short)iVar4;
    *(undefined8 *)(lVar2 + 4) = 0;
    *(undefined1 *)(lVar2 + 0xc) = 2;
    param_1[0xc] = iVar1 + 1;
    return;
  }
  lVar2 = FUN_710005b890(param_1,iVar5,iVar4);
  *(int *)(lVar2 + 0x30) = *(int *)(lVar2 + 0x30) + 1;
  return;
}



// ===== FUN_710005f180 @ 710005f180 (size=144) =====

void FUN_710005f180(float param_1,float param_2,long param_3)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  
  piVar2 = (int *)FUN_710005f0f0();
  param_1 = param_1 + (float)piVar2[4];
  param_2 = param_2 + (float)piVar2[5];
  piVar2[2] = (int)param_1;
  piVar2[3] = (int)param_2;
  piVar2[4] = (int)param_1;
  piVar2[5] = (int)param_2;
  if (*piVar2 == 0) {
    iVar1 = piVar2[0xc];
    lVar4 = (long)iVar1 * 0xe;
    lVar3 = *(long *)(param_3 + 0x28) + lVar4;
    *(short *)(*(long *)(param_3 + 0x28) + lVar4) = (short)(int)param_1;
    *(short *)(lVar3 + 2) = (short)(int)param_2;
    *(undefined8 *)(lVar3 + 4) = 0;
    *(undefined1 *)(lVar3 + 0xc) = 1;
    *(int *)(param_3 + 0x30) = iVar1 + 1;
    return;
  }
  lVar3 = FUN_710005b890(piVar2,(int)param_1,(int)param_2);
  *(int *)(param_3 + 0x30) = *(int *)(lVar3 + 0x30) + 1;
  return;
}



// ===== FUN_710005f210 @ 710005f210 (size=2880) =====

void FUN_710005f210(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  ulong uVar9;
  undefined1 auVar10 [12];
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  double dVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  float *pfVar22;
  long lVar23;
  long lVar24;
  int extraout_w8;
  int extraout_w8_00;
  long lVar25;
  long extraout_x8;
  undefined *extraout_x8_00;
  undefined *puVar26;
  ulong extraout_x8_01;
  long extraout_x8_02;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  ulong uVar27;
  ulong extraout_x9;
  ulong extraout_x9_00;
  uint extraout_w10;
  int extraout_w10_00;
  ulong extraout_x10;
  ulong extraout_x10_00;
  int extraout_w11;
  int extraout_w11_00;
  ulong extraout_x11;
  ulong extraout_x11_00;
  int extraout_w12;
  ulong extraout_x12;
  ulong uVar28;
  ulong extraout_x12_00;
  ulong extraout_x12_01;
  int extraout_w13;
  int extraout_w13_00;
  ulong extraout_x13;
  int iVar29;
  int iVar30;
  long lVar31;
  ulong uVar32;
  double extraout_d27;
  undefined8 uVar33;
  undefined8 extraout_d28;
  double extraout_d28_00;
  double dVar34;
  double dVar35;
  undefined4 uVar36;
  undefined4 extraout_s29;
  undefined4 extraout_s29_00;
  undefined4 extraout_s29_01;
  undefined4 uVar37;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 uVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar43;
  float fVar44;
  undefined1 auVar41 [16];
  float fVar45;
  undefined8 uVar47;
  undefined1 in_q31 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar46;
  undefined1 auVar52 [16];
  undefined1 auVar56 [16];
  int local_18;
  int local_14;
  int local_4;
  undefined1 auVar42 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar48 [14];
  undefined1 auVar55 [16];
  
  iVar20 = (int)param_2;
  lVar23 = (long)iVar20;
  uVar36 = 0;
  uVar37 = 0;
  uVar38 = 0;
  uVar39 = 0;
  iVar3 = (int)param_1[0x17];
  uVar4 = *(uint *)((long)param_1 + 0x4c);
  uVar32 = (ulong)uVar4;
  lVar25 = param_1[0x13];
  iVar30 = -iVar3;
  iVar29 = (int)param_1[1];
  iVar11 = *(int *)((long)param_1 + 0xc);
  uVar13 = uVar4 * iVar3;
  lVar31 = *param_1;
  uVar21 = -(ulong)(uVar13 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar13 << 2;
  lVar24 = (long)(int)uVar13;
  lVar2 = lVar25 + uVar21;
  iVar1 = iVar29 + iVar3;
  if ((iVar20 >= 0 && iVar11 != iVar20) && (iVar20 < 0 || iVar20 <= iVar11)) {
    lVar31 = lVar31 + lVar23 * (int)param_1[2];
  }
  else {
    iVar11 = FUN_710005add0((int)param_1[0xd],param_2,iVar11);
    lVar31 = lVar31 + (long)iVar11 * (long)extraout_w11;
    lVar25 = extraout_x8;
    uVar36 = extraout_s29;
    uVar37 = extraout_var;
    uVar13 = extraout_w10;
    if ((extraout_w12 == 4) && ((int)lVar23 < 0 || extraout_w9 <= (int)lVar23)) {
      if (iVar1 == iVar30 || iVar1 + iVar3 < 0 != SBORROW4(iVar1,iVar30)) {
        return;
      }
      iVar29 = iVar30 * uVar4;
      do {
        if (0 < (int)uVar4) {
          do {
            lVar25 = (long)iVar29;
            iVar30 = iVar30 + 1;
            iVar29 = iVar29 + uVar4;
            FUN_7100808340(lVar2 + lVar25 * 4,0,((ulong)(uVar4 - 1) + 1) * 4);
          } while (iVar30 != iVar1);
          return;
        }
        iVar30 = iVar30 + 1;
        iVar29 = iVar29 + uVar4;
      } while (iVar30 != iVar1);
      return;
    }
  }
  lVar23 = param_1[0xb];
  iVar20 = *(int *)((long)param_1 + 100);
  uVar5 = *(uint *)(param_1 + 10);
  iVar11 = *(int *)((long)param_1 + 0x6c) + (int)lVar23 * 2;
  if (iVar11 == 4) {
    if (iVar1 == iVar30 || iVar1 + iVar3 < 0 != SBORROW4(iVar1,iVar30)) goto LAB_710005f424;
    iVar12 = -uVar13;
    lVar25 = lVar25 + (lVar24 + iVar12) * 4;
    dVar18 = 4294967295.0;
    uVar32 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar32 << 2;
    lVar24 = lVar2 - uVar21;
    uVar27 = (ulong)(uVar4 - 1);
    lVar17 = (ulong)(uVar4 >> 2) << 4;
    uVar21 = (ulong)(uVar4 & 0xfffffffc);
    dVar34 = dVar18;
    dVar35 = dVar18;
    iVar11 = iVar30;
    do {
      iVar14 = iVar12;
      if (iVar11 < 0 || iVar29 <= iVar11) {
        iVar14 = FUN_710005add0(iVar20,iVar11,iVar29);
        iVar14 = uVar4 * iVar14;
        lVar17 = extraout_x8_02;
        uVar32 = extraout_x10_00;
        uVar21 = extraout_x11_00;
        uVar27 = extraout_x12_01;
        dVar18 = extraout_d27;
        dVar34 = extraout_d28_00;
        uVar36 = extraout_s29_01;
        uVar37 = extraout_var_01;
        iVar11 = extraout_w13_00;
        iVar12 = extraout_w9_01;
      }
      if (0 < (int)uVar4) {
        if ((uint)uVar27 < 3) {
          lVar19 = 0;
        }
        else {
          lVar19 = 0;
          do {
            auVar50 = *(undefined1 (*) [16])(lVar31 + (long)iVar14 * 4 + lVar19);
            auVar52._4_12_ = in_q31._4_12_;
            auVar52._0_4_ = auVar50._0_4_;
            auVar54._12_4_ = in_q31._12_4_;
            auVar54._0_8_ = auVar52._0_8_;
            auVar54._8_4_ = auVar50._4_4_;
            auVar53._8_8_ = auVar54._8_8_;
            auVar53._4_4_ = uVar36;
            auVar53._0_4_ = auVar50._0_4_;
            auVar55._0_12_ = auVar53._0_12_;
            auVar55._12_4_ = uVar37;
            auVar56._4_12_ = auVar50._4_12_;
            auVar56._0_4_ = auVar50._8_4_;
            auVar42._0_8_ = auVar56._0_8_;
            auVar42._8_4_ = auVar50._12_4_;
            auVar42._12_4_ = auVar50._12_4_;
            auVar41._8_8_ = auVar42._8_8_;
            auVar41._4_4_ = uVar38;
            auVar41._0_4_ = auVar50._8_4_;
            auVar50._0_12_ = auVar41._0_12_;
            auVar50._12_4_ = uVar39;
            auVar56 = NEON_scvtf(auVar55,8);
            auVar50 = NEON_scvtf(auVar50,8);
            in_q31._0_4_ = (float)(auVar56._0_8_ / dVar34);
            in_q31._4_4_ = (float)(auVar56._8_8_ / dVar35);
            in_q31._12_4_ = (float)(auVar50._8_8_ / dVar35);
            in_q31._8_4_ = (float)(auVar50._0_8_ / dVar34);
            *(undefined1 (*) [16])(lVar25 + lVar19) = in_q31;
            lVar19 = lVar19 + 0x10;
          } while (lVar17 != lVar19);
          lVar19 = (long)(int)(uint)uVar21;
          if (uVar4 == (uint)uVar21) goto LAB_710005fc6c;
        }
        do {
          fVar40 = (float)((double)*(uint *)(lVar31 + (long)iVar14 * 4 + lVar19 * 4) / dVar18);
          in_q31 = ZEXT416((uint)fVar40);
          *(float *)(lVar24 + lVar19 * 4) = fVar40;
          lVar19 = lVar19 + 1;
        } while ((int)lVar19 < (int)uVar4);
      }
LAB_710005fc6c:
      iVar11 = iVar11 + 1;
      iVar12 = iVar12 + uVar4;
      lVar24 = lVar24 + uVar32;
      lVar25 = lVar25 + uVar32;
    } while (iVar11 != iVar1);
    uVar27 = (ulong)*(uint *)((long)param_1 + 0x54);
LAB_710005f398:
    if ((uVar27 & 1) != 0) goto LAB_710005f424;
  }
  else {
    if (iVar11 < 5) {
      if (iVar11 == 2) {
        if (iVar1 == iVar30 || iVar1 + iVar3 < 0 != SBORROW4(iVar1,iVar30)) goto LAB_710005f424;
        iVar12 = -uVar13;
        lVar25 = lVar25 + (lVar24 + iVar12) * 4;
        uVar32 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar32 << 2;
        uVar33 = 0x477fff00;
        lVar24 = lVar2 - uVar21;
        uVar27 = (ulong)(uVar4 - 1);
        uVar21 = (ulong)(uVar4 >> 2) << 3;
        uVar28 = (ulong)(uVar4 & 3);
        fVar44 = 65535.0;
        fVar40 = 65535.0;
        fVar45 = 65535.0;
        fVar43 = 65535.0;
        iVar11 = iVar30;
        do {
          iVar14 = iVar12;
          if (iVar11 < 0 || iVar29 <= iVar11) {
            iVar14 = FUN_710005add0(iVar20,iVar11,iVar29);
            iVar14 = uVar4 * iVar14;
            uVar21 = extraout_x8_01;
            uVar32 = extraout_x10;
            uVar27 = extraout_x11;
            uVar28 = extraout_x12_00;
            uVar33 = extraout_d28;
            uVar36 = extraout_s29_00;
            uVar37 = extraout_var_00;
            iVar11 = extraout_w13;
            iVar12 = extraout_w9_00;
          }
          if (0 < (int)uVar4) {
            if ((uint)uVar27 < 3) {
              uVar15 = 0;
            }
            else {
              uVar16 = 0;
              do {
                uVar47 = *(undefined8 *)(lVar31 + (long)iVar14 * 2 + uVar16);
                uVar9 = uVar16 & 0xffffffff;
                uVar16 = uVar16 + 8;
                uVar6 = (undefined2)((ulong)uVar47 >> 0x30);
                auVar10._2_2_ = uVar6;
                auVar10._0_2_ = (short)((ulong)uVar47 >> 0x10);
                auVar10._4_2_ = (short)((ulong)uVar47 >> 0x20);
                auVar10._6_6_ = 0;
                auVar48._0_12_ = auVar10 << 0x20;
                auVar48._12_2_ = uVar6;
                auVar7._2_2_ = (short)uVar36;
                auVar7._0_2_ = (short)uVar47;
                auVar7._4_10_ = auVar48._4_10_;
                auVar8._6_2_ = (short)((uint)uVar36 >> 0x10);
                auVar8._0_6_ = auVar7._0_6_;
                auVar8._8_6_ = auVar48._8_6_;
                auVar49._0_10_ = auVar8._0_10_;
                auVar49._10_2_ = (short)uVar37;
                auVar49._12_2_ = uVar6;
                auVar49._14_2_ = (short)((uint)uVar37 >> 0x10);
                auVar50 = NEON_scvtf(auVar49,4);
                auVar51._0_4_ = auVar50._0_4_ / fVar40;
                auVar51._4_4_ = auVar50._4_4_ / fVar45;
                auVar51._8_4_ = auVar50._8_4_ / fVar43;
                auVar51._12_4_ = auVar50._12_4_ / fVar44;
                *(undefined1 (*) [16])(lVar25 + uVar9 * 2) = auVar51;
              } while (uVar21 != uVar16);
              uVar15 = uVar4 & 0xfffffffc;
              if ((int)uVar28 == 0) goto LAB_710005fb58;
            }
            lVar17 = (long)(int)uVar15;
            do {
              fVar46 = (float)NEON_ucvtf((uint)*(ushort *)(lVar31 + (long)iVar14 * 2 + lVar17 * 2));
              *(float *)(lVar24 + lVar17 * 4) = fVar46 / (float)uVar33;
              lVar17 = lVar17 + 1;
            } while ((int)lVar17 < (int)uVar4);
          }
LAB_710005fb58:
          iVar11 = iVar11 + 1;
          iVar12 = iVar12 + uVar4;
          lVar24 = lVar24 + uVar32;
          lVar25 = lVar25 + uVar32;
        } while (iVar11 != iVar1);
        uVar27 = (ulong)*(uint *)((long)param_1 + 0x54);
      }
      else {
        if (iVar11 == 3) {
          if (iVar1 != iVar30 && iVar1 + iVar3 < 0 == SBORROW4(iVar1,iVar30)) {
            local_18 = -uVar13;
            lVar25 = lVar2 - uVar21;
            iVar11 = iVar30;
            if ((0 >= iVar3 && iVar29 != iVar30) && (0 < iVar3 || iVar30 <= iVar29))
            goto LAB_710005fa5c;
            do {
              local_14 = FUN_710005add0(iVar20,iVar11,iVar29);
              local_14 = uVar4 * local_14;
              while( true ) {
                if (0 < (int)uVar4) {
                  lVar24 = 0;
                  do {
                    fVar40 = (float)NEON_ucvtf((uint)*(ushort *)
                                                      (lVar31 + (long)local_14 * 2 + lVar24 * 2));
                    fVar40 = fVar40 / 65535.0;
                    if (fVar40 <= 0.04045) {
                      fVar40 = fVar40 / 12.92;
                    }
                    else {
                      fVar40 = (float)FUN_7100800040((fVar40 + 0.055) / 1.055,0x4019999a);
                    }
                    *(float *)(lVar25 + lVar24 * 4) = fVar40;
                    lVar24 = lVar24 + 1;
                  } while ((int)uVar4 != lVar24);
                }
                uVar27 = (ulong)*(uint *)((long)param_1 + 0x54);
                if ((*(uint *)((long)param_1 + 0x54) >> 1 & 1) == 0) {
                  fVar40 = (float)NEON_ucvtf((uint)*(ushort *)
                                                    (lVar31 + (long)(int)(uVar5 + local_14) * 2));
                  *(float *)(lVar2 + (long)(int)(uVar5 + local_18) * 4) = fVar40 / 65535.0;
                }
                local_18 = local_18 + uVar4;
                iVar11 = iVar11 + 1;
                lVar25 = lVar25 + (-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar32 << 2);
                if (iVar11 == iVar1) goto LAB_710005f398;
                if (iVar11 < 0 || iVar29 <= iVar11) break;
LAB_710005fa5c:
                local_14 = local_18;
              }
            } while( true );
          }
          goto LAB_710005f424;
        }
        if (iVar11 == 0) {
          if (iVar1 == iVar30 || iVar1 + iVar3 < 0 != SBORROW4(iVar1,iVar30)) goto LAB_710005f424;
          iVar12 = -uVar13;
          uVar32 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar32 << 2;
          lVar25 = lVar2 - uVar21;
          fVar40 = 255.0;
          iVar11 = iVar30;
          do {
            iVar14 = iVar12;
            if (iVar11 < 0 || iVar29 <= iVar11) {
              iVar12 = FUN_710005add0(iVar20,iVar11,iVar29);
              iVar12 = uVar4 * iVar12;
              uVar32 = extraout_x9_00;
              iVar14 = extraout_w8;
            }
            lVar24 = 0;
            if (0 < (int)uVar4) {
              do {
                fVar45 = (float)NEON_ucvtf((uint)*(byte *)(lVar31 + iVar12 + lVar24));
                *(float *)(lVar25 + lVar24 * 4) = fVar45 / fVar40;
                lVar24 = lVar24 + 1;
              } while ((int)uVar4 != lVar24);
            }
            iVar11 = iVar11 + 1;
            iVar12 = iVar14 + uVar4;
            lVar25 = lVar25 + uVar32;
          } while (iVar11 != iVar1);
          uVar27 = (ulong)*(uint *)((long)param_1 + 0x54);
        }
        else {
          if (iVar11 != 1) goto LAB_710005fc8c;
          if (iVar1 == iVar30 || iVar1 + iVar3 < 0 != SBORROW4(iVar1,iVar30)) goto LAB_710005f424;
          iVar12 = -uVar13;
          uVar27 = (ulong)*(uint *)((long)param_1 + 0x54);
          uVar32 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar32 << 2;
          lVar25 = lVar2 - uVar21;
          fVar40 = 255.0;
          puVar26 = &UNK_710085ca80;
          uVar21 = (ulong)(*(uint *)((long)param_1 + 0x54) & 2);
          iVar11 = iVar30;
          do {
            iVar14 = iVar12;
            if (iVar11 < 0 || iVar29 <= iVar11) {
              iVar12 = FUN_710005add0(iVar20,iVar11,iVar29);
              iVar12 = uVar4 * iVar12;
              puVar26 = extraout_x8_00;
              uVar27 = extraout_x9;
              uVar32 = extraout_x12;
              uVar21 = extraout_x13;
              iVar11 = extraout_w10_00;
              iVar14 = extraout_w11_00;
            }
            lVar24 = 0;
            if (0 < (int)uVar4) {
              do {
                *(undefined4 *)(lVar25 + lVar24 * 4) =
                     *(undefined4 *)(puVar26 + (ulong)*(byte *)(lVar31 + iVar12 + lVar24) * 4);
                lVar24 = lVar24 + 1;
              } while ((int)uVar4 != lVar24);
            }
            if ((int)uVar21 == 0) {
              fVar45 = (float)NEON_ucvtf((uint)*(byte *)(lVar31 + (int)(uVar5 + iVar12)));
              *(float *)(lVar2 + (long)(int)(uVar5 + iVar14) * 4) = fVar45 / fVar40;
            }
            iVar11 = iVar11 + 1;
            iVar12 = iVar14 + uVar4;
            lVar25 = lVar25 + uVar32;
          } while (iVar11 != iVar1);
        }
      }
      goto LAB_710005f398;
    }
    if (iVar11 == 6) {
      if (iVar1 == iVar30 || iVar1 + iVar3 < 0 != SBORROW4(iVar1,iVar30)) goto LAB_710005f424;
      iVar12 = -uVar13;
      uVar32 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar32 << 2;
      lVar25 = lVar2 - uVar21;
      iVar11 = iVar30;
      do {
        iVar14 = iVar12;
        if (iVar11 < 0 || iVar29 <= iVar11) {
          iVar12 = FUN_710005add0(iVar20,iVar11,iVar29);
          iVar12 = uVar4 * iVar12;
          iVar14 = extraout_w9_02;
          iVar11 = extraout_w8_00;
        }
        uVar21 = 0;
        if (0 < (int)uVar4) {
          do {
            *(undefined4 *)(lVar25 + uVar21) = *(undefined4 *)(lVar31 + (long)iVar12 * 4 + uVar21);
            uVar21 = uVar21 + 4;
          } while (uVar32 != uVar21);
        }
        iVar11 = iVar11 + 1;
        iVar12 = iVar14 + uVar4;
        lVar25 = lVar25 + uVar32;
      } while (iVar11 != iVar1);
      uVar27 = (ulong)*(uint *)((long)param_1 + 0x54);
      goto LAB_710005f398;
    }
    local_18 = iVar30;
    if (iVar11 == 7) {
      if (iVar1 != iVar30 && iVar1 + iVar3 < 0 == SBORROW4(iVar1,iVar30)) {
        local_14 = -uVar13;
        lVar25 = lVar2 - uVar21;
        uVar21 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar32 << 2;
        iVar11 = local_14;
        if ((0 >= iVar3 && iVar29 != iVar30) && (0 < iVar3 || iVar30 <= iVar29))
        goto LAB_710005f6c0;
        do {
          iVar11 = FUN_710005add0(iVar20,local_18,iVar29);
          iVar11 = uVar4 * iVar11;
LAB_710005f6c0:
          do {
            if (0 < (int)uVar4) {
              uVar32 = 0;
              do {
                fVar40 = *(float *)(lVar31 + (long)iVar11 * 4 + uVar32);
                if (fVar40 <= 0.04045) {
                  fVar40 = fVar40 / 12.92;
                }
                else {
                  fVar40 = (float)FUN_7100800040((fVar40 + 0.055) / 1.055,0x4019999a);
                }
                *(float *)(lVar25 + uVar32) = fVar40;
                uVar32 = uVar32 + 4;
              } while (uVar21 != uVar32);
            }
            uVar27 = (ulong)*(uint *)((long)param_1 + 0x54);
            if ((*(uint *)((long)param_1 + 0x54) >> 1 & 1) == 0) {
              *(undefined4 *)(lVar2 + (long)(int)(uVar5 + local_14) * 4) =
                   *(undefined4 *)(lVar31 + (long)(int)(uVar5 + iVar11) * 4);
            }
            local_14 = local_14 + uVar4;
            local_18 = local_18 + 1;
            lVar25 = lVar25 + uVar21;
            if (local_18 == iVar1) goto LAB_710005f398;
            iVar11 = local_14;
          } while (-1 < local_18 && local_18 < iVar29);
        } while( true );
      }
      goto LAB_710005f424;
    }
    if (iVar11 == 5) {
      if (iVar1 == iVar30 || iVar1 + iVar3 < 0 != SBORROW4(iVar1,iVar30)) goto LAB_710005f424;
      local_14 = -uVar13;
      lVar25 = lVar2 - uVar21;
      uVar21 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar32 << 2;
      do {
        iVar11 = local_14;
        if (local_18 < 0 || iVar29 <= local_18) {
          iVar11 = FUN_710005add0(iVar20,local_18,iVar29);
          iVar11 = uVar4 * iVar11;
        }
        if (0 < (int)uVar4) {
          uVar32 = 0;
          do {
            fVar40 = (float)((double)*(uint *)(lVar31 + (long)iVar11 * 4 + uVar32) / 4294967295.0);
            if (fVar40 <= 0.04045) {
              fVar40 = fVar40 / 12.92;
            }
            else {
              fVar40 = (float)FUN_7100800040((fVar40 + 0.055) / 1.055,0x4019999a);
            }
            *(float *)(lVar25 + uVar32) = fVar40;
            uVar32 = uVar32 + 4;
          } while (uVar21 != uVar32);
        }
        uVar27 = (ulong)*(uint *)((long)param_1 + 0x54);
        if ((*(uint *)((long)param_1 + 0x54) >> 1 & 1) == 0) {
          *(float *)(lVar2 + (long)(int)(uVar5 + local_14) * 4) =
               (float)((double)*(uint *)(lVar31 + (long)(int)(uVar5 + iVar11) * 4) / 4294967295.0);
        }
        local_14 = local_14 + uVar4;
        local_18 = local_18 + 1;
        lVar25 = lVar25 + uVar21;
      } while (local_18 != iVar1);
      goto LAB_710005f398;
    }
LAB_710005fc8c:
    if (((*(uint *)((long)param_1 + 0x54) & 1) != 0) ||
       (iVar1 == iVar30 || iVar1 + iVar3 < 0 != SBORROW4(iVar1,iVar30))) goto LAB_710005f424;
  }
  local_4 = -uVar13;
  pfVar22 = (float *)(lVar2 + ((long)local_4 + (long)(int)uVar5) * 4);
  iVar11 = iVar30;
  do {
    fVar40 = *pfVar22;
    if ((int)lVar23 != 3) {
      fVar40 = fVar40 + 8.271806e-25;
      *pfVar22 = fVar40;
    }
    uVar13 = 0;
    if (0 < (int)uVar4) {
      do {
        if (uVar5 != uVar13) {
          *(float *)(lVar2 + (long)(int)(uVar13 + local_4) * 4) =
               *(float *)(lVar2 + (long)(int)(uVar13 + local_4) * 4) * fVar40;
        }
        uVar13 = uVar13 + 1;
      } while (uVar4 != uVar13);
    }
    iVar11 = iVar11 + 1;
    pfVar22 = pfVar22 + (int)uVar4;
    local_4 = local_4 + uVar4;
  } while (iVar11 != iVar1);
LAB_710005f424:
  if (iVar20 == 4) {
    if (0 < iVar3) {
      iVar11 = iVar30 * uVar4;
LAB_710005f848:
      if ((int)uVar4 < 1) goto code_r0x00710005f850;
      do {
        FUN_7100808340(lVar2 + (long)iVar11 * 4,0,((ulong)(uVar4 - 1) + 1) * 4);
        iVar30 = iVar30 + 1;
        iVar11 = iVar11 + uVar4;
      } while (iVar30 != 0);
    }
LAB_710005f85c:
    if (iVar29 < iVar1) {
      iVar30 = iVar29 * uVar4;
      do {
        if (0 < (int)uVar4) {
          do {
            lVar25 = (long)iVar30;
            iVar29 = iVar29 + 1;
            iVar30 = iVar30 + uVar4;
            FUN_7100808340(lVar2 + lVar25 * 4,0,((ulong)(uVar4 - 1) + 1) * 4);
          } while (iVar29 != iVar1);
          return;
        }
        iVar29 = iVar29 + 1;
        iVar30 = iVar30 + uVar4;
      } while (iVar29 != iVar1);
    }
  }
  return;
code_r0x00710005f850:
  iVar30 = iVar30 + 1;
  iVar11 = iVar11 + uVar4;
  if (iVar30 == 0) goto LAB_710005f85c;
  goto LAB_710005f848;
}



// ===== FUN_710005fd50 @ 710005fd50 (size=84) =====

void FUN_710005fd50(long param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    if (param_2 < 0) {
      *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 200);
      return;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 200) - (int)*(long *)(param_1 + 0xc0);
      if (iVar1 < param_2) {
        *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 200);
                    /* WARNING: Could not recover jumptable at 0x00710005fda0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x28),param_2 - iVar1);
        return;
      }
    }
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + (long)param_2;
  }
  return;
}



// ===== FUN_710005fdb0 @ 710005fdb0 (size=796) =====

undefined8 FUN_710005fdb0(ulong *param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  undefined1 *puVar14;
  undefined1 *extraout_x8;
  undefined8 *puVar15;
  undefined8 *extraout_x9;
  int iVar16;
  undefined1 auVar17 [16];
  undefined8 local_9c8;
  undefined8 uStack_9c0;
  undefined2 local_9b8;
  undefined1 local_9b6;
  undefined1 local_9b0 [456];
  ushort auStack_7e8 [1012];
  
  iVar6 = (int)param_1[2];
  if (iVar6 < 5) {
    lVar12 = FUN_710005ab90();
    iVar6 = *(int *)(lVar12 + 0x10);
  }
  uVar3 = *(uint *)((long)param_1 + 0x14);
  uVar7 = uVar3 >> 5;
  *(int *)(param_1 + 2) = iVar6 + -5;
  *(uint *)((long)param_1 + 0x14) = uVar7;
  if (iVar6 + -5 < 5) {
    FUN_710005ab90(param_1);
    uVar7 = *(uint *)((long)param_1 + 0x14);
    uVar5 = uVar7 >> 5;
    iVar6 = (int)param_1[2] + -5;
    *(int *)(param_1 + 2) = iVar6;
    *(uint *)((long)param_1 + 0x14) = uVar5;
  }
  else {
    uVar5 = uVar3 >> 10;
    iVar6 = iVar6 + -10;
    *(int *)(param_1 + 2) = iVar6;
    *(uint *)((long)param_1 + 0x14) = uVar5;
  }
  if (iVar6 < 4) {
    FUN_710005ab90(param_1);
    iVar6 = (int)param_1[2];
    uVar5 = *(uint *)((long)param_1 + 0x14);
  }
  puVar15 = &local_9c8;
  *(int *)(param_1 + 2) = iVar6 + -4;
  *(uint *)((long)param_1 + 0x14) = uVar5 >> 4;
  local_9c8 = 0;
  uStack_9c0 = 0;
  uVar13 = (ulong)((uVar5 & 0xf) + 4);
  lVar12 = 0;
  puVar14 = &DAT_710085ce80;
  local_9b8 = 0;
  local_9b6 = 0;
  do {
    iVar6 = (int)param_1[2];
    if (iVar6 < 3) {
      FUN_710005ab90(param_1);
      iVar6 = (int)param_1[2];
      puVar14 = extraout_x8;
      puVar15 = extraout_x9;
    }
    uVar5 = *(uint *)((long)param_1 + 0x14);
    *(int *)(param_1 + 2) = iVar6 + -3;
    *(uint *)((long)param_1 + 0x14) = uVar5 >> 3;
    pbVar1 = puVar14 + lVar12;
    lVar12 = lVar12 + 1;
    *(byte *)((long)puVar15 + (long)(int)(uint)*pbVar1) = (byte)uVar5 & 7;
  } while ((int)lVar12 < (int)uVar13);
  iVar6 = FUN_710005bf30(auStack_7e8,puVar15,0x13);
  if (iVar6 != 0) {
    uVar3 = (uVar3 & 0x1f) + 0x101;
    iVar6 = (uVar7 & 0x1f) + 1;
    iVar2 = uVar3 + iVar6;
    iVar8 = 0;
    do {
      while( true ) {
        if ((int)param_1[2] < 0x10) {
          uVar13 = param_1[1];
          if (uVar13 <= *param_1) goto LAB_710005ffa4;
          FUN_710005ab90(param_1);
        }
        uVar4 = auStack_7e8[(ulong)*(uint *)((long)param_1 + 0x14) & 0x1ff];
        if (uVar4 == 0) {
          uVar13 = FUN_710005ef70(param_1,auStack_7e8);
        }
        else {
          uVar7 = (int)(uint)uVar4 >> 9;
          uVar13 = (ulong)(uVar4 & 0x1ff);
          *(uint *)(param_1 + 2) = (int)param_1[2] - uVar7;
          *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) >> (ulong)(uVar7 & 0x1f)
          ;
        }
        uVar7 = (uint)uVar13;
        if (0x12 < uVar7) goto LAB_710005ffa4;
        if ((int)uVar7 < 0x10) break;
        iVar11 = (int)param_1[2];
        if (uVar7 == 0x10) {
          if (iVar11 < 2) {
            FUN_710005ab90(param_1);
            iVar11 = (int)param_1[2];
          }
          uVar7 = *(uint *)((long)param_1 + 0x14);
          uVar5 = uVar7 >> 2;
          uVar13 = (ulong)uVar5;
          *(int *)(param_1 + 2) = iVar11 + -2;
          *(uint *)((long)param_1 + 0x14) = uVar5;
          if (iVar8 == 0) goto LAB_710005ffa4;
          uVar10 = local_9b0[iVar8 + -1];
          iVar16 = (uVar7 & 3) + 3;
        }
        else if (uVar7 == 0x11) {
          if (iVar11 < 3) {
            FUN_710005ab90(param_1);
            iVar11 = (int)param_1[2];
          }
          iVar16 = (*(uint *)((long)param_1 + 0x14) & 7) + 3;
          *(int *)(param_1 + 2) = iVar11 + -3;
          *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) >> 3;
          uVar10 = 0;
        }
        else {
          if (iVar11 < 7) {
            FUN_710005ab90(param_1);
            iVar11 = (int)param_1[2];
          }
          iVar16 = (*(uint *)((long)param_1 + 0x14) & 0x7f) + 0xb;
          *(int *)(param_1 + 2) = iVar11 + -7;
          *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) >> 7;
          uVar10 = 0;
        }
        uVar13 = (ulong)(uint)(iVar2 - iVar8);
        if (iVar2 - iVar8 < iVar16) goto LAB_710005ffa4;
        lVar12 = (long)iVar8;
        iVar8 = iVar8 + iVar16;
        uVar13 = FUN_7100808340(local_9b0 + lVar12,uVar10,iVar16);
        if (iVar2 <= iVar8) goto LAB_710005ffa0;
      }
      local_9b0[iVar8] = (char)uVar13;
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar2);
LAB_710005ffa0:
    if (iVar2 == iVar8) {
      iVar8 = FUN_710005bf30((long)param_1 + 0x34,local_9b0,(ulong)uVar3);
      if (iVar8 != 0) {
        uVar9 = FUN_710005bf30(param_1 + 0x103,local_9b0 + uVar3,iVar6);
        return uVar9;
      }
    }
    else {
LAB_710005ffa4:
      auVar17 = FUN_710076d158(uVar13,"bad codelengths");
      *(long *)(auVar17._0_8_ + 0x1050) = auVar17._8_8_;
    }
  }
  return 0;
}



// ===== FUN_71000600d0 @ 71000600d0 (size=1616) =====

undefined8 FUN_71000600d0(ulong *param_1,int param_2)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  byte *pbVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  byte bVar14;
  byte *pbVar15;
  uint uVar16;
  undefined1 *puVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  undefined1 auVar21 [16];
  byte local_8 [8];
  
  if (param_2 == 0) {
LAB_71000600e4:
    lVar1 = (long)param_1 + 0x34;
    param_1[2] = 0;
    iVar3 = 0;
    while (0 < iVar3) {
      uVar19 = *(uint *)((long)param_1 + 0x14);
      iVar3 = iVar3 + -1;
      uVar4 = uVar19 >> 1;
      *(int *)(param_1 + 2) = iVar3;
      *(uint *)((long)param_1 + 0x14) = uVar4;
      if (iVar3 < 2) goto LAB_7100060444;
LAB_7100060130:
      uVar11 = uVar4 >> 2;
      uVar16 = iVar3 - 2;
      uVar12 = uVar4 & 3;
      *(uint *)(param_1 + 2) = uVar16;
      *(uint *)((long)param_1 + 0x14) = uVar11;
      if ((uVar4 & 3) == 0) goto LAB_7100060464;
LAB_7100060144:
      if (uVar12 == 3) {
        return 0;
      }
      if (uVar12 == 1) {
        iVar3 = FUN_710005bf30(lVar1,&DAT_710085cea0,0x120);
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = FUN_710005bf30(param_1 + 0x103,&DAT_710085cfc0,0x20);
      }
      else {
        iVar3 = FUN_710005fdb0(param_1);
      }
      if (iVar3 == 0) {
        return 0;
      }
      puVar17 = (undefined1 *)param_1[3];
LAB_7100060168:
      if ((int)param_1[2] < 0x10) {
        uVar6 = param_1[1];
        if (*param_1 < uVar6) {
          FUN_710005ab90(param_1);
          goto LAB_7100060188;
        }
LAB_71000602e0:
        auVar21 = FUN_710076d158(uVar6,"bad huffman code");
        uVar10 = auVar21._8_8_;
        puVar7 = (undefined8 *)(auVar21._0_8_ + 0x1050);
        goto LAB_71000602f4;
      }
LAB_7100060188:
      uVar2 = *(ushort *)(lVar1 + ((ulong)*(uint *)((long)param_1 + 0x14) & 0x1ff) * 2);
      if (uVar2 == 0) {
        uVar6 = FUN_710005ef70(param_1,lVar1);
        uVar4 = (uint)uVar6;
        if (0xff < (int)uVar4) goto LAB_71000601e8;
        if (uVar4 != 0xffffffff) goto LAB_71000601b4;
        goto LAB_71000602e0;
      }
      uVar16 = (int)(uint)uVar2 >> 9;
      uVar4 = uVar2 & 0x1ff;
      *(uint *)(param_1 + 2) = (int)param_1[2] - uVar16;
      *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) >> (ulong)(uVar16 & 0x1f);
      if ((uVar2 >> 8 & 1) == 0) {
LAB_71000601b4:
        if (puVar17 < (undefined1 *)param_1[5]) {
          *puVar17 = (char)uVar4;
          puVar17 = puVar17 + 1;
        }
        else {
          iVar3 = FUN_710005c1d0(param_1,puVar17,1);
          if (iVar3 == 0) {
            return 0;
          }
          puVar17 = (undefined1 *)param_1[3] + 1;
          *(undefined1 *)param_1[3] = (char)uVar4;
        }
        goto LAB_7100060168;
      }
LAB_71000601e8:
      if (uVar4 != 0x100) {
        iVar3 = (int)param_1[2];
        uVar16 = *(uint *)(&DAT_710085d060 + (long)(int)(uVar4 - 0x101) * 4);
        uVar4 = *(uint *)(&DAT_710085cfe0 + (long)(int)(uVar4 - 0x101) * 4);
        if (uVar16 != 0) {
          if (iVar3 < (int)uVar16) {
            FUN_710005ab90(param_1);
            iVar3 = (int)param_1[2];
          }
          uVar12 = *(uint *)((long)param_1 + 0x14);
          iVar3 = iVar3 - uVar16;
          *(int *)(param_1 + 2) = iVar3;
          *(uint *)((long)param_1 + 0x14) = uVar12 >> (ulong)(uVar16 & 0x1f);
          uVar4 = ((1 << (ulong)(uVar16 & 0x1f)) - 1U & uVar12) + uVar4;
        }
        if (iVar3 < 0x10) {
          uVar6 = param_1[1];
          if (uVar6 <= *param_1) goto LAB_71000602e0;
          FUN_710005ab90(param_1);
        }
        uVar2 = *(ushort *)
                 ((long)param_1 + ((ulong)*(uint *)((long)param_1 + 0x14) & 0x1ff) * 2 + 0x818);
        if (uVar2 == 0) {
          uVar6 = FUN_710005ef70(param_1);
          iVar3 = (int)uVar6;
          if (iVar3 == -1) goto LAB_71000602e0;
          iVar20 = *(int *)(&DAT_710085d0e0 + (long)iVar3 * 4);
          uVar16 = *(uint *)(&DAT_710085d160 + (long)iVar3 * 4);
          if (uVar16 == 0) goto LAB_7100060260;
LAB_710006033c:
          iVar3 = (int)param_1[2];
          if (iVar3 < (int)uVar16) {
            FUN_710005ab90(param_1);
            iVar3 = (int)param_1[2];
          }
          uVar12 = *(uint *)((long)param_1 + 0x14);
          *(uint *)(param_1 + 2) = iVar3 - uVar16;
          *(uint *)((long)param_1 + 0x14) = uVar12 >> (ulong)(uVar16 & 0x1f);
          iVar20 = ((1 << (ulong)(uVar16 & 0x1f)) - 1U & uVar12) + iVar20;
          lVar18 = (long)iVar20;
          lVar5 = (long)puVar17 - param_1[4];
          if (lVar5 < lVar18) {
LAB_7100060380:
            auVar21 = FUN_710076d158(lVar5,"bad dist");
            uVar10 = auVar21._8_8_;
            puVar7 = (undefined8 *)(auVar21._0_8_ + 0x1050);
            goto LAB_71000602f4;
          }
        }
        else {
          uVar16 = (int)(uint)uVar2 >> 9;
          *(uint *)(param_1 + 2) = (int)param_1[2] - uVar16;
          *(uint *)((long)param_1 + 0x14) =
               *(uint *)((long)param_1 + 0x14) >> (ulong)(uVar16 & 0x1f);
          iVar20 = *(int *)(&DAT_710085d0e0 + (long)(int)(uVar2 & 0x1ff) * 4);
          uVar16 = *(uint *)(&DAT_710085d160 + (long)(int)(uVar2 & 0x1ff) * 4);
          if (uVar16 != 0) goto LAB_710006033c;
LAB_7100060260:
          lVar18 = (long)iVar20;
          lVar5 = (long)puVar17 - param_1[4];
          if (lVar5 < lVar18) goto LAB_7100060380;
        }
        if ((undefined1 *)param_1[5] < puVar17 + (int)uVar4) {
          iVar3 = FUN_710005c1d0(param_1,puVar17,uVar4);
          if (iVar3 == 0) {
            return 0;
          }
          puVar17 = (undefined1 *)param_1[3];
        }
        if (iVar20 == 1) {
          if (uVar4 != 0) {
            FUN_7100808340(puVar17,puVar17[-lVar18],uVar4);
            puVar17 = puVar17 + uVar4;
          }
        }
        else if (uVar4 != 0) {
          uVar6 = 0;
          do {
            puVar17[uVar6] = (puVar17 + -lVar18)[uVar6];
            uVar6 = uVar6 + 1;
          } while (uVar4 != uVar6);
          puVar17 = puVar17 + uVar4;
        }
        goto LAB_7100060168;
      }
      param_1[3] = (ulong)puVar17;
      if ((uVar19 & 1) != 0) {
        return 1;
      }
LAB_7100060574:
      iVar3 = (int)param_1[2];
    }
    FUN_710005ab90(param_1);
    uVar19 = *(uint *)((long)param_1 + 0x14);
    iVar3 = (int)param_1[2] + -1;
    uVar4 = uVar19 >> 1;
    *(int *)(param_1 + 2) = iVar3;
    *(uint *)((long)param_1 + 0x14) = uVar4;
    if (1 < iVar3) goto LAB_7100060130;
LAB_7100060444:
    FUN_710005ab90(param_1);
    uVar11 = *(uint *)((long)param_1 + 0x14) >> 2;
    uVar16 = (int)param_1[2] - 2;
    uVar12 = *(uint *)((long)param_1 + 0x14) & 3;
    *(uint *)(param_1 + 2) = uVar16;
    *(uint *)((long)param_1 + 0x14) = uVar11;
    if (uVar12 != 0) goto LAB_7100060144;
LAB_7100060464:
    uVar4 = uVar16 & 7;
    uVar6 = (ulong)uVar4;
    if ((uVar16 & 7) == 0) {
LAB_710006046c:
      if ((int)uVar16 < 1) {
        if (uVar16 == 0) {
          iVar3 = 0;
          goto LAB_71000604c0;
        }
      }
      else {
LAB_7100060474:
        uVar4 = *(uint *)((long)param_1 + 0x14);
        pbVar9 = local_8;
        uVar12 = uVar16;
        do {
          uVar12 = uVar12 - 8;
          *pbVar9 = (byte)uVar4;
          uVar4 = uVar4 >> 8;
          pbVar9 = pbVar9 + 1;
        } while (0 < (int)uVar12);
        uVar12 = uVar16 - 1 >> 3;
        uVar16 = (uVar16 - 8) + (uVar16 - 1 >> 3) * -8;
        *(uint *)(param_1 + 2) = uVar16;
        *(uint *)((long)param_1 + 0x14) = uVar4;
        if (uVar16 == 0) {
          iVar3 = uVar12 + 1;
          if (uVar12 != 3) goto LAB_71000604c0;
          goto LAB_71000604f4;
        }
      }
    }
    else {
      if ((int)uVar16 < (int)uVar4) {
        FUN_710005ab90(param_1);
        uVar16 = (int)param_1[2] - (uint)uVar6;
        *(uint *)(param_1 + 2) = uVar16;
        *(uint *)((long)param_1 + 0x14) =
             *(uint *)((long)param_1 + 0x14) >> (ulong)((uint)uVar6 & 0x1f);
        goto LAB_710006046c;
      }
      uVar16 = uVar16 - uVar4;
      *(uint *)(param_1 + 2) = uVar16;
      *(uint *)((long)param_1 + 0x14) = uVar11 >> uVar6;
      if (uVar16 != 0) goto LAB_7100060474;
      iVar3 = 0;
LAB_71000604c0:
      pbVar15 = (byte *)param_1[1];
      pbVar9 = local_8 + iVar3;
      do {
        bVar14 = 0;
        pbVar13 = (byte *)*param_1;
        if (pbVar13 < pbVar15) {
          *param_1 = (ulong)(pbVar13 + 1);
          bVar14 = *pbVar13;
        }
        iVar3 = iVar3 + 1;
        *pbVar9 = bVar14;
        pbVar9 = pbVar9 + 1;
      } while (iVar3 != 4);
LAB_71000604f4:
      uVar4 = (uint)local_8[0] + (uint)local_8[1] * 0x100;
      uVar16 = (uint)local_8[2] + (uint)local_8[3] * 0x100;
      if (uVar16 == (uVar4 ^ 0xffff)) {
        uVar6 = *param_1;
        lVar5 = (long)(int)uVar4;
        if (param_1[1] < uVar6 + lVar5) {
          auVar21 = FUN_710076d158(uVar6 + lVar5,"read past buffer");
          uVar10 = auVar21._8_8_;
          puVar7 = (undefined8 *)(auVar21._0_8_ + 0x1050);
          goto LAB_71000602f4;
        }
        uVar8 = param_1[3];
        if (param_1[5] < uVar8 + lVar5) {
          iVar3 = FUN_710005c1d0(param_1,uVar8);
          if (iVar3 == 0) {
            return 0;
          }
          uVar6 = *param_1;
          uVar8 = param_1[3];
        }
        FUN_710080f900(uVar8,uVar6,lVar5);
        *param_1 = *param_1 + lVar5;
        param_1[3] = param_1[3] + lVar5;
        if ((uVar19 & 1) != 0) {
          return 1;
        }
        goto LAB_7100060574;
      }
    }
    auVar21 = FUN_710076d158(uVar16,"zlib corrupt");
    uVar10 = auVar21._8_8_;
    puVar7 = (undefined8 *)(auVar21._0_8_ + 0x1050);
LAB_71000602f4:
    *puVar7 = uVar10;
    return 0;
  }
  pbVar9 = (byte *)*param_1;
  pbVar15 = (byte *)param_1[1];
  if (pbVar9 < pbVar15) {
    *param_1 = (ulong)(pbVar9 + 1);
    bVar14 = *pbVar9;
    if (pbVar9 + 1 < pbVar15) {
      *param_1 = (ulong)(pbVar9 + 2);
      pbVar13 = pbVar9 + 1;
      if (pbVar9 + 2 < pbVar15) {
        uVar19 = ((uint)*pbVar13 + (uint)bVar14 * 0x100) * -0x42108421;
        pbVar9 = (byte *)(ulong)uVar19;
        if (uVar19 < 0x8421085) {
          if ((*pbVar13 >> 5 & 1) != 0) {
            auVar21 = FUN_710076d158(pbVar9,"no preset dict");
            *(long *)(auVar21._0_8_ + 0x1050) = auVar21._8_8_;
            return 0;
          }
          if ((bVar14 & 0xf) != 8) {
            auVar21 = FUN_710076d158(pbVar9,"bad compression");
            *(long *)(auVar21._0_8_ + 0x1050) = auVar21._8_8_;
            return 0;
          }
          goto LAB_71000600e4;
        }
      }
    }
  }
  auVar21 = FUN_710076d158(pbVar9,"bad zlib header");
  *(long *)(auVar21._0_8_ + 0x1050) = auVar21._8_8_;
  return 0;
}



// ===== FUN_7100060720 @ 7100060720 (size=100) =====

undefined8 FUN_7100060720(uint param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (-1 < (int)(param_1 | param_2)) {
    if (param_2 == 0) {
      if (-1 < param_3) {
        iVar2 = 0;
        goto LAB_7100060764;
      }
    }
    else {
      iVar2 = 0;
      if (param_2 != 0) {
        iVar2 = 0x7fffffff / (int)param_2;
      }
      if (((int)param_1 <= iVar2) && (-1 < param_3)) {
        iVar2 = param_1 * param_2;
        if (param_3 != 0) {
          iVar1 = 0;
          if (param_3 != 0) {
            iVar1 = 0x7fffffff / param_3;
          }
          if (iVar1 < iVar2) {
            return 0;
          }
          if (0x7fffffff - param_4 < param_3 * iVar2) {
            return 0;
          }
        }
LAB_7100060764:
        uVar3 = FUN_710081c1c0((long)(param_4 + iVar2 * param_3));
        return uVar3;
      }
    }
  }
  return 0;
}



// ===== FUN_7100060790 @ 7100060790 (size=248) =====
// DECOMPILE FAILED: 
Recoverable Error: Unable to find unique hash for varnode

// ===== FUN_7100061280 @ 7100061280 (size=228) =====

void FUN_7100061280(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  
  FUN_710005f210();
  fVar5 = *(float *)(param_1 + 0x44);
  iVar4 = *(int *)(param_1 + 0xd8);
  if (fVar5 == 1.0 || fVar5 < 1.0 != NAN(fVar5)) {
    *(int *)(param_1 + 0xd4) = param_2;
    if (iVar4 < 0) {
      iVar4 = 0;
      *(int *)(param_1 + 0xd0) = param_2;
      *(undefined4 *)(param_1 + 0xd8) = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0xcc);
      iVar4 = (param_2 - *(int *)(param_1 + 0xd0)) + iVar4;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = iVar4 / iVar1;
      }
      iVar4 = iVar4 - iVar2 * iVar1;
    }
    uVar3 = FUN_7100808340(*(long *)(param_1 + 0xe0) +
                           (long)(iVar4 * (int)((ulong)(long)*(int *)(param_1 + 200) >> 2)) * 4,0);
    FUN_710005b160(param_1,uVar3);
    return;
  }
  *(int *)(param_1 + 0xd4) = param_2;
  if (iVar4 < 0) {
    iVar4 = 0;
    *(int *)(param_1 + 0xd0) = param_2;
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xcc);
    iVar4 = (param_2 - *(int *)(param_1 + 0xd0)) + iVar4;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = iVar4 / iVar1;
    }
    iVar4 = iVar4 - iVar2 * iVar1;
  }
  uVar3 = FUN_7100808340(*(long *)(param_1 + 0xe0) +
                         (long)(iVar4 * (int)((ulong)(long)*(int *)(param_1 + 200) >> 2)) * 4,0);
  FUN_710005ae70(param_1,uVar3);
  return;
}



// ===== FUN_7100061370 @ 7100061370 (size=252) =====

undefined1  [16] FUN_7100061370(undefined1 *param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined1 auVar10 [16];
  
  iVar9 = (int)((ulong)param_2 >> 0x20);
  if ((0 < iVar9) && (iVar9 != 1)) {
    if (iVar9 == 2) {
      uVar4 = 0;
      uVar8 = 2;
    }
    else {
      bVar3 = param_1[2];
      uVar4 = (uint)bVar3;
      iVar2 = (uint)bVar3 * param_3 + 3;
      iVar6 = iVar9;
      if ((iVar2 < 0 || iVar9 < iVar2) || (iVar6 = iVar2, bVar3 != 0)) {
        uVar8 = 0;
        uVar7 = 0;
        uVar5 = (uint)bVar3;
        do {
          uVar7 = uVar7 << 8;
          if (iVar6 < iVar9) {
            lVar1 = (long)iVar6;
            iVar6 = iVar6 + 1;
            uVar7 = uVar7 | (byte)param_1[lVar1];
          }
          uVar8 = uVar8 + 1;
        } while (uVar5 != uVar8);
        uVar8 = 0;
        uVar4 = 0;
        do {
          uVar4 = uVar4 << 8;
          if (iVar6 < iVar9) {
            lVar1 = (long)iVar6;
            iVar6 = iVar6 + 1;
            uVar4 = uVar4 | (byte)param_1[lVar1];
          }
          uVar8 = uVar8 + 1;
        } while (uVar5 != uVar8);
        uVar8 = uVar7 + uVar5 + CONCAT11(*param_1,param_1[1]) * uVar5 + 2;
        uVar4 = uVar4 - uVar7;
        if (((int)(uVar4 | uVar8) < 0 || iVar9 < (int)uVar8) || ((int)(iVar9 - uVar8) < (int)uVar4))
        goto LAB_7100061438;
      }
      else {
        uVar8 = 2;
      }
    }
    auVar10._0_8_ = param_1 + (int)uVar8;
    auVar10._8_8_ = (ulong)uVar4 << 0x20;
    return auVar10;
  }
LAB_7100061438:
  return ZEXT816(0) << 0x40;
}



// ===== FUN_7100061470 @ 7100061470 (size=3908) =====

ulong FUN_7100061470(long *param_1,byte *param_2,uint param_3,int param_4,uint param_5,uint param_6,
                    int param_7,int param_8)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  undefined1 *puVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte bVar21;
  byte *pbVar22;
  char *pcVar23;
  undefined1 *puVar24;
  undefined1 (*pauVar25) [16];
  undefined1 (*pauVar26) [16];
  uint uVar27;
  int iVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  undefined1 (*pauVar32) [16];
  byte *pbVar33;
  int iVar34;
  uint uVar35;
  long lVar36;
  long lVar37;
  ulong uVar38;
  long lVar39;
  uint uVar40;
  long extraout_x11;
  int iVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  uint uVar45;
  int iVar46;
  ulong uVar47;
  undefined1 auVar48 [16];
  int local_38;
  
  if (param_7 == 0x10) {
    iVar28 = param_4 << 1;
    iVar46 = 2;
    local_38 = 2;
  }
  else {
    iVar46 = 1;
    local_38 = 1;
    iVar28 = param_4;
  }
  iVar3 = *(int *)(*param_1 + 8);
  lVar15 = FUN_7100060720(param_5,param_6,iVar28,0);
  param_1[3] = lVar15;
  if (lVar15 == 0) {
    pcVar23 = "outofmem";
    puVar16 = (undefined *)0x0;
    goto LAB_7100061850;
  }
  iVar34 = 7;
  puVar16 = (undefined *)FUN_710005a4d0(iVar3,param_5,param_7);
  uVar38 = (ulong)puVar16 & 0xffffffff;
  if ((int)puVar16 == 0) {
    pcVar23 = "too large";
    goto LAB_7100061850;
  }
  iVar8 = iVar3 * param_5;
  uVar6 = (uint)(iVar34 + param_7 * iVar8) >> 3;
  uVar35 = param_6 + uVar6 * param_6;
  puVar16 = (undefined *)(ulong)uVar35;
  if (param_3 < uVar35) {
    pcVar23 = "not enough pixels";
    goto LAB_7100061850;
  }
  if (param_6 == 0) {
    return uVar38;
  }
  uVar35 = param_4 * param_5;
  uVar9 = uVar35 * iVar46;
  puVar16 = &DAT_710085c8e0;
  uVar43 = (ulong)(uint)(local_38 * iVar3);
  uVar47 = 0;
  lVar15 = extraout_x11;
  uVar45 = 0;
  uVar40 = param_5;
LAB_7100061580:
  bVar21 = *param_2;
  if (4 < bVar21) goto LAB_7100061f38;
  lVar15 = lVar15 + uVar47;
  if (7 < param_7) {
    lVar39 = lVar15 - (ulong)uVar9;
    if (uVar45 == 0) {
      bVar21 = (&DAT_710085d1e0)[(int)(uint)bVar21];
    }
    if (0 < (int)uVar43) goto LAB_71000615c0;
    goto joined_r0x00710006171c;
  }
  if (param_5 < uVar6) {
    pcVar23 = "invalid width";
    goto LAB_7100061850;
  }
  lVar15 = lVar15 + (ulong)(uVar35 - uVar6);
  lVar39 = lVar15 - (ulong)uVar9;
  uVar43 = uVar38;
  uVar40 = uVar6;
  if (uVar45 == 0) {
    bVar21 = (&DAT_710085d1e0)[(int)(uint)bVar21];
  }
LAB_71000615c0:
  pbVar22 = param_2 + 1;
  lVar36 = (long)(int)uVar43;
  lVar17 = 0;
  if (bVar21 == 3) {
    do {
      pbVar19 = pbVar22 + 1;
      *(byte *)(lVar15 + lVar17) = *pbVar22 + (*(byte *)(lVar39 + lVar17) >> 1);
      lVar30 = lVar17 + 1;
      if (lVar36 == lVar30) break;
      pbVar22 = pbVar22 + 2;
      *(byte *)(lVar15 + lVar30) = *pbVar19 + (*(byte *)(lVar39 + lVar30) >> 1);
      lVar17 = lVar17 + 2;
    } while (lVar36 != lVar17);
  }
  else {
    while (3 < bVar21) {
      if (bVar21 == 5) goto LAB_710006182c;
      if (bVar21 == 6) goto LAB_7100061700;
      if (bVar21 == 4) goto LAB_7100061600;
      lVar17 = lVar17 + 1;
      if (lVar36 == lVar17) goto joined_r0x00710006171c;
      pbVar22 = pbVar22 + 1;
    }
    if (bVar21 == 1) {
      while( true ) {
        *(byte *)(lVar15 + lVar17) = *pbVar22;
        lVar17 = lVar17 + 1;
        if (lVar36 == lVar17) break;
        pbVar22 = pbVar22 + 1;
      }
    }
    else if (bVar21 == 2) {
      while( true ) {
        *(byte *)(lVar15 + lVar17) = *pbVar22 + *(char *)(lVar39 + lVar17);
        lVar17 = lVar17 + 1;
        if (lVar17 == lVar36) break;
        pbVar22 = pbVar22 + 1;
      }
    }
    else {
      do {
        *(byte *)(lVar15 + lVar17) = *pbVar22;
        lVar17 = lVar17 + 1;
        pbVar22 = pbVar22 + 1;
      } while (lVar17 != lVar36);
      bVar21 = 0;
    }
  }
joined_r0x00710006171c:
  iVar46 = (int)uVar43;
  if (param_7 == 8) {
    lVar36 = (long)iVar3;
    param_2 = param_2 + lVar36 + 1;
    lVar17 = lVar15 + lVar36;
    if (param_4 == iVar3) {
      lVar39 = lVar39 + lVar36;
      goto joined_r0x007100061650;
    }
    lVar39 = lVar39 + param_4;
    *(undefined1 *)(lVar15 + iVar3) = 0xff;
    lVar17 = lVar15 + param_4;
    if (bVar21 != 3) goto LAB_7100061750;
LAB_7100061b2c:
    if (param_5 == 1) goto LAB_71000616a4;
LAB_7100061b3c:
    lVar30 = (long)iVar46;
    iVar41 = param_5 - 1;
    lVar36 = (long)iVar28;
    lVar15 = lVar17 + -iVar28;
    pbVar22 = param_2;
    do {
      lVar29 = 0;
      if (0 < iVar46) {
        do {
          *(byte *)(lVar17 + lVar29) =
               pbVar22[lVar29] +
               (char)((uint)*(byte *)(lVar39 + lVar29) + (uint)*(byte *)(lVar15 + lVar29) >> 1);
          lVar29 = lVar29 + 1;
        } while (lVar30 != lVar29);
      }
      lVar15 = lVar15 + lVar36;
      iVar41 = iVar41 + -1;
      pbVar22 = pbVar22 + lVar30;
      lVar17 = lVar17 + lVar36;
      *(undefined1 *)(lVar15 + lVar30) = 0xff;
      lVar39 = lVar39 + lVar36;
    } while (iVar41 != 0);
    goto LAB_7100061ba0;
  }
  if (param_7 != 0x10) {
    param_2 = param_2 + 2;
    lVar17 = lVar15 + 1;
    lVar39 = lVar39 + 1;
    if (param_7 <= iVar34 || param_4 == iVar3) goto joined_r0x007100061650;
    if (bVar21 == 3) goto LAB_7100061b2c;
LAB_7100061750:
    if (3 < bVar21) {
      if (bVar21 == 5) {
        iVar41 = param_5 - 1;
        if (iVar41 == 0) goto LAB_7100061c1c;
        lVar36 = (long)iVar46;
        lVar15 = lVar17 + -iVar28;
        lVar39 = (long)iVar28;
        pbVar22 = param_2;
        do {
          if (0 < iVar46) goto LAB_7100061d08;
          lVar15 = lVar15 + lVar39;
          iVar41 = iVar41 + -1;
          pbVar22 = pbVar22 + lVar36;
          lVar17 = lVar17 + lVar39;
          *(undefined1 *)(lVar15 + lVar36) = 0xff;
        } while (iVar41 != 0);
        goto LAB_7100061ba0;
      }
      if (bVar21 == 6) {
        iVar41 = param_5 - 1;
        if (iVar41 == 0) goto LAB_7100061c1c;
        lVar36 = (long)iVar46;
        lVar15 = lVar17 + -iVar28;
        lVar39 = (long)iVar28;
        pbVar22 = param_2;
        do {
          if (0 < iVar46) goto LAB_7100061c78;
          lVar15 = lVar15 + lVar39;
          iVar41 = iVar41 + -1;
          pbVar22 = pbVar22 + lVar36;
          lVar17 = lVar17 + lVar39;
          *(undefined1 *)(lVar15 + lVar36) = 0xff;
        } while (iVar41 != 0);
        goto LAB_7100061ba0;
      }
      if (bVar21 == 4) {
        iVar41 = param_5 - 1;
        if (iVar41 == 0) goto LAB_7100061c1c;
        lVar29 = (long)iVar46;
        lVar30 = (long)iVar28;
        lVar15 = lVar17 + -iVar28;
        lVar36 = lVar39 + -iVar28;
        pbVar22 = param_2;
        do {
          lVar37 = 0;
          if (0 < iVar46) {
            do {
              bVar4 = *(byte *)(lVar15 + lVar37);
              bVar21 = *(byte *)(lVar39 + lVar37);
              bVar5 = *(byte *)(lVar36 + lVar37);
              iVar12 = ((uint)bVar21 + (uint)bVar4) - (uint)bVar5;
              iVar13 = iVar12 - (uint)bVar21;
              iVar11 = -iVar13;
              if (-1 < iVar13) {
                iVar11 = iVar13;
              }
              iVar14 = iVar12 - (uint)bVar5;
              iVar13 = -iVar14;
              if (-1 < iVar14) {
                iVar13 = iVar14;
              }
              iVar14 = iVar13;
              if (iVar11 < iVar13) {
                iVar14 = iVar11;
              }
              iVar12 = iVar12 - (uint)bVar4;
              iVar2 = -iVar12;
              if (-1 < iVar12) {
                iVar2 = iVar12;
              }
              if ((iVar14 < iVar2) && (bVar4 = bVar21, iVar13 < iVar11)) {
                bVar4 = bVar5;
              }
              *(byte *)(lVar17 + lVar37) = bVar4 + pbVar22[lVar37];
              lVar37 = lVar37 + 1;
            } while (lVar29 != lVar37);
          }
          lVar15 = lVar15 + lVar30;
          iVar41 = iVar41 + -1;
          pbVar22 = pbVar22 + lVar29;
          lVar17 = lVar17 + lVar30;
          *(undefined1 *)(lVar15 + lVar29) = 0xff;
          lVar39 = lVar39 + lVar30;
          lVar36 = lVar36 + lVar30;
        } while (iVar41 != 0);
        param_2 = param_2 + (ulong)(param_5 - 2) * lVar29 + lVar29;
        goto joined_r0x007100061bb0;
      }
LAB_71000617e4:
      if (param_7 != 0x10) goto LAB_71000616a4;
      goto LAB_71000617ec;
    }
    if (bVar21 == 1) {
      iVar41 = param_5 - 1;
      if (iVar41 == 0) goto LAB_7100061c1c;
      lVar36 = (long)iVar46;
      lVar15 = lVar17 + -iVar28;
      lVar39 = (long)iVar28;
      pbVar22 = param_2;
      do {
        if (0 < iVar46) goto LAB_7100061e58;
        lVar15 = lVar15 + lVar39;
        iVar41 = iVar41 + -1;
        pbVar22 = pbVar22 + lVar36;
        lVar17 = lVar17 + lVar39;
        *(undefined1 *)(lVar15 + lVar36) = 0xff;
      } while (iVar41 != 0);
      goto LAB_7100061ba0;
    }
    if (bVar21 == 2) {
      iVar41 = param_5 - 1;
      if (iVar41 == 0) goto LAB_7100061c1c;
      lVar36 = (long)iVar46;
      lVar15 = (long)iVar28;
      pbVar22 = param_2;
      do {
        if (0 < iVar46) goto LAB_7100061dc8;
        iVar41 = iVar41 + -1;
        *(undefined1 *)(lVar17 + lVar36) = 0xff;
        pbVar22 = pbVar22 + lVar36;
        lVar17 = lVar17 + lVar15;
        lVar39 = lVar39 + lVar15;
      } while (iVar41 != 0);
      goto LAB_7100061ba0;
    }
    iVar41 = param_5 - 1;
    if (iVar41 != 0) {
      lVar15 = (long)iVar46;
      pbVar22 = param_2;
      do {
        if (0 < iVar46) goto LAB_71000617a8;
        iVar41 = iVar41 + -1;
        *(undefined1 *)(lVar17 + lVar15) = 0xff;
        pbVar22 = pbVar22 + lVar15;
        lVar17 = lVar17 + iVar28;
      } while (iVar41 != 0);
      goto LAB_7100061ba0;
    }
LAB_7100061c1c:
    if (param_7 != 0x10) goto LAB_71000616a4;
    goto LAB_71000617f0;
  }
  lVar39 = lVar39 + iVar28;
  lVar17 = lVar15 + iVar28;
  param_2 = param_2 + (long)iVar46 + 1;
  if (param_4 == iVar3) {
joined_r0x007100061650:
    iVar41 = (uVar40 - 1) * iVar46;
    lVar15 = (long)iVar41;
    if (bVar21 == 3) {
      lVar36 = 0;
      if (0 < iVar41) {
        do {
          *(byte *)(lVar17 + lVar36) =
               param_2[lVar36] +
               (char)((uint)*(byte *)(lVar17 + -iVar46 + lVar36) + (uint)*(byte *)(lVar39 + lVar36)
                     >> 1);
          lVar36 = lVar36 + 1;
        } while (lVar36 != lVar15);
      }
    }
    else if (bVar21 < 4) {
      if (bVar21 == 1) {
        lVar39 = 0;
        if (0 < iVar41) {
          do {
            *(byte *)(lVar17 + lVar39) = *(char *)(lVar17 + -iVar46 + lVar39) + param_2[lVar39];
            lVar39 = lVar39 + 1;
          } while (lVar15 != lVar39);
        }
      }
      else if (bVar21 == 2) {
        lVar36 = 0;
        if (0 < iVar41) {
          do {
            *(byte *)(lVar17 + lVar36) = param_2[lVar36] + *(char *)(lVar39 + lVar36);
            lVar36 = lVar36 + 1;
          } while (lVar36 != lVar15);
        }
      }
      else {
        FUN_710080f900(lVar17,param_2);
      }
    }
    else if (bVar21 == 5) {
      lVar39 = 0;
      if (0 < iVar41) {
        do {
          *(byte *)(lVar17 + lVar39) = param_2[lVar39] + (*(byte *)(lVar17 + -iVar46 + lVar39) >> 1)
          ;
          lVar39 = lVar39 + 1;
        } while (lVar39 != lVar15);
      }
    }
    else if (bVar21 == 6) {
      lVar39 = 0;
      if (0 < iVar41) {
        do {
          *(byte *)(lVar17 + lVar39) = *(char *)(lVar17 + -iVar46 + lVar39) + param_2[lVar39];
          lVar39 = lVar39 + 1;
        } while (lVar39 != lVar15);
      }
    }
    else if (bVar21 == 4) {
      lVar36 = 0;
      if (0 < iVar41) {
        do {
          bVar4 = *(byte *)(lVar17 + -iVar46 + lVar36);
          bVar21 = *(byte *)(lVar39 + lVar36);
          bVar5 = *(byte *)(lVar39 + -iVar46 + lVar36);
          iVar11 = ((uint)bVar21 + (uint)bVar4) - (uint)bVar5;
          iVar12 = iVar11 - (uint)bVar21;
          iVar41 = -iVar12;
          if (-1 < iVar12) {
            iVar41 = iVar12;
          }
          iVar13 = iVar11 - (uint)bVar5;
          iVar12 = -iVar13;
          if (-1 < iVar13) {
            iVar12 = iVar13;
          }
          iVar13 = iVar12;
          if (iVar41 < iVar12) {
            iVar13 = iVar41;
          }
          iVar11 = iVar11 - (uint)bVar4;
          iVar14 = -iVar11;
          if (-1 < iVar11) {
            iVar14 = iVar11;
          }
          if ((iVar13 < iVar14) && (bVar4 = bVar21, iVar12 < iVar41)) {
            bVar4 = bVar5;
          }
          *(byte *)(lVar17 + lVar36) = bVar4 + param_2[lVar36];
          lVar36 = lVar36 + 1;
        } while (lVar36 != lVar15);
      }
    }
    param_2 = param_2 + lVar15;
    goto LAB_71000616a4;
  }
  *(undefined1 *)(lVar15 + iVar46) = 0xff;
  *(undefined1 *)(lVar15 + iVar46 + 1) = 0xff;
  if (bVar21 != 3) goto LAB_7100061750;
  if (param_5 != 1) goto LAB_7100061b3c;
  lVar15 = param_1[3];
  goto LAB_7100061800;
LAB_710006182c:
  while( true ) {
    *(byte *)(lVar15 + lVar17) = *pbVar22;
    lVar17 = lVar17 + 1;
    if (lVar36 == lVar17) break;
    pbVar22 = pbVar22 + 1;
  }
  bVar21 = 5;
  goto joined_r0x00710006171c;
LAB_7100061700:
  while( true ) {
    *(byte *)(lVar15 + lVar17) = *pbVar22;
    lVar17 = lVar17 + 1;
    if (lVar36 == lVar17) break;
    pbVar22 = pbVar22 + 1;
  }
  bVar21 = 6;
  goto joined_r0x00710006171c;
LAB_7100061600:
  while( true ) {
    *(byte *)(lVar15 + lVar17) = *pbVar22 + *(char *)(lVar39 + lVar17);
    lVar17 = lVar17 + 1;
    if (lVar36 == lVar17) break;
    pbVar22 = pbVar22 + 1;
  }
  goto joined_r0x00710006171c;
LAB_7100061d08:
  do {
    lVar30 = 0;
    do {
      *(byte *)(lVar17 + lVar30) = pbVar22[lVar30] + (*(byte *)(lVar15 + lVar30) >> 1);
      lVar30 = lVar30 + 1;
    } while (lVar36 != lVar30);
    lVar15 = lVar15 + lVar39;
    iVar41 = iVar41 + -1;
    pbVar22 = pbVar22 + lVar36;
    lVar17 = lVar17 + lVar39;
    *(undefined1 *)(lVar15 + lVar36) = 0xff;
  } while (iVar41 != 0);
  goto LAB_7100061ba0;
LAB_7100061c78:
  do {
    lVar30 = 0;
    do {
      *(byte *)(lVar17 + lVar30) = pbVar22[lVar30] + *(char *)(lVar15 + lVar30);
      lVar30 = lVar30 + 1;
    } while (lVar36 != lVar30);
    lVar15 = lVar15 + lVar39;
    iVar41 = iVar41 + -1;
    pbVar22 = pbVar22 + lVar36;
    lVar17 = lVar17 + lVar39;
    *(undefined1 *)(lVar15 + lVar36) = 0xff;
  } while (iVar41 != 0);
  goto LAB_7100061ba0;
LAB_7100061e58:
  do {
    lVar30 = 0;
    do {
      *(byte *)(lVar17 + lVar30) = pbVar22[lVar30] + *(char *)(lVar15 + lVar30);
      lVar30 = lVar30 + 1;
    } while (lVar36 != lVar30);
    lVar15 = lVar15 + lVar39;
    iVar41 = iVar41 + -1;
    pbVar22 = pbVar22 + lVar36;
    lVar17 = lVar17 + lVar39;
    *(undefined1 *)(lVar15 + lVar36) = 0xff;
  } while (iVar41 != 0);
  goto LAB_7100061ba0;
LAB_7100061dc8:
  do {
    lVar30 = 0;
    do {
      *(byte *)(lVar17 + lVar30) = pbVar22[lVar30] + *(char *)(lVar39 + lVar30);
      lVar30 = lVar30 + 1;
    } while (lVar36 != lVar30);
    iVar41 = iVar41 + -1;
    *(undefined1 *)(lVar17 + lVar36) = 0xff;
    pbVar22 = pbVar22 + lVar36;
    lVar17 = lVar17 + lVar15;
    lVar39 = lVar39 + lVar15;
  } while (iVar41 != 0);
LAB_7100061ba0:
  param_2 = param_2 + (ulong)(param_5 - 2) * (long)iVar46 + (long)iVar46;
joined_r0x007100061bb0:
  if (param_7 == 0x10) {
LAB_71000617ec:
    if (param_5 != 0) {
LAB_71000617f0:
      lVar15 = param_1[3];
LAB_7100061800:
      lVar15 = lVar15 + uVar47 + (long)iVar46;
      uVar27 = 0;
      do {
        uVar27 = uVar27 + 1;
        *(undefined1 *)(lVar15 + 1) = 0xff;
        lVar15 = lVar15 + iVar28;
      } while (uVar27 < param_5);
    }
  }
LAB_71000616a4:
  uVar27 = uVar45 + 1;
  puVar16 = (undefined *)(ulong)uVar27;
  if (param_6 == uVar27) {
    if (param_7 < 8) {
      param_5 = param_5 - 1;
      uVar42 = (ulong)param_5;
      uVar27 = iVar8 - 4U >> 2;
      uVar44 = (ulong)(uVar27 + 1);
      uVar7 = iVar8 - 2U >> 1;
      uVar47 = (ulong)(uVar7 + 1);
      uVar43 = 0;
      uVar40 = 0;
      while( true ) {
        pbVar19 = (byte *)(param_1[3] + uVar43);
        pbVar22 = (byte *)(param_1[3] + uVar43 + ((ulong)uVar35 - (ulong)uVar6));
        bVar21 = 1;
        if (param_8 == 0) {
          bVar21 = (&DAT_710085d1e8)[param_7];
        }
        if (param_7 == 4) {
          iVar28 = iVar8;
          if (1 < iVar8) {
            pbVar1 = pbVar19 + uVar47 * 2;
            pbVar20 = pbVar19;
            pbVar33 = pbVar22;
            do {
              pbVar19 = pbVar20 + 2;
              *pbVar20 = bVar21 * (*pbVar33 >> 4);
              pbVar20[1] = bVar21 * (*pbVar33 & 0xf);
              pbVar20 = pbVar19;
              pbVar33 = pbVar33 + 1;
            } while (pbVar19 != pbVar1);
            pbVar22 = pbVar22 + uVar47;
            iVar28 = (iVar8 - 2U) + uVar7 * -2;
          }
          if (iVar28 == 1) {
            *pbVar19 = bVar21 * (*pbVar22 >> 4);
          }
        }
        else if (param_7 == 2) {
          iVar28 = iVar8;
          if (3 < iVar8) {
            pbVar1 = pbVar19 + uVar44 * 4;
            pbVar20 = pbVar19;
            pbVar33 = pbVar22;
            do {
              pbVar19 = pbVar20 + 4;
              *pbVar20 = bVar21 * (*pbVar33 >> 6);
              pbVar20[1] = bVar21 * (*pbVar33 >> 4 & 3);
              pbVar20[2] = bVar21 * (*pbVar33 >> 2 & 3);
              pbVar20[3] = bVar21 * (*pbVar33 & 3);
              pbVar20 = pbVar19;
              pbVar33 = pbVar33 + 1;
            } while (pbVar19 != pbVar1);
            pbVar22 = pbVar22 + uVar44;
            iVar28 = (iVar8 - 4U) + uVar27 * -4;
          }
          if (((0 < iVar28) && (*pbVar19 = bVar21 * (*pbVar22 >> 6), iVar28 != 1)) &&
             (pbVar19[1] = bVar21 * (*pbVar22 >> 4 & 3), iVar28 == 3)) {
            pbVar19[2] = bVar21 * (*pbVar22 >> 2 & 3);
          }
        }
        else if (param_7 == 1) {
          iVar28 = iVar8;
          if (7 < iVar8) {
            uVar10 = iVar8 - 8U >> 3;
            uVar31 = (ulong)(uVar10 + 1);
            pbVar1 = pbVar19 + uVar31 * 8;
            pbVar20 = pbVar19;
            pbVar33 = pbVar22;
            do {
              pbVar19 = pbVar20 + 8;
              *pbVar20 = (char)*pbVar33 >> 7 & bVar21;
              pbVar20[1] = bVar21 & -(*pbVar33 >> 6 & 1);
              pbVar20[2] = bVar21 & -(*pbVar33 >> 5 & 1);
              pbVar20[3] = bVar21 & -(*pbVar33 >> 4 & 1);
              pbVar20[4] = bVar21 & -(*pbVar33 >> 3 & 1);
              pbVar20[5] = bVar21 & -(*pbVar33 >> 2 & 1);
              pbVar20[6] = bVar21 & -(*pbVar33 >> 1 & 1);
              pbVar20[7] = bVar21 & -(*pbVar33 & 1);
              pbVar20 = pbVar19;
              pbVar33 = pbVar33 + 1;
            } while (pbVar19 != pbVar1);
            pbVar22 = pbVar22 + uVar31;
            iVar28 = (iVar8 - 8U) + uVar10 * -8;
          }
          if (((((0 < iVar28) && (*pbVar19 = (char)*pbVar22 >> 7 & bVar21, iVar28 != 1)) &&
               ((pbVar19[1] = bVar21 & -(*pbVar22 >> 6 & 1), iVar28 != 2 &&
                ((pbVar19[2] = bVar21 & -(*pbVar22 >> 5 & 1), iVar28 != 3 &&
                 (pbVar19[3] = bVar21 & -(*pbVar22 >> 4 & 1), iVar28 != 4)))))) &&
              (pbVar19[4] = bVar21 & -(*pbVar22 >> 3 & 1), iVar28 != 5)) &&
             (pbVar19[5] = bVar21 & -(*pbVar22 >> 2 & 1), iVar28 == 7)) {
            pbVar19[6] = bVar21 & -(*pbVar22 >> 1 & 1);
          }
        }
        if (param_4 != iVar3) {
          lVar15 = param_1[3] + uVar43;
          if (iVar3 == 1) {
            if (-1 < (int)param_5) {
              lVar39 = (long)(int)param_5;
              puVar18 = (undefined1 *)
                        (lVar15 + (-(ulong)(param_5 >> 0x1f) & 0xfffffffe00000000 | uVar42 << 1));
              do {
                puVar18[1] = 0xff;
                puVar24 = (undefined1 *)(lVar15 + lVar39);
                lVar39 = lVar39 + -1;
                *puVar18 = *puVar24;
                puVar18 = puVar18 + -2;
              } while (-1 < (int)lVar39);
            }
          }
          else if (-1 < (int)param_5) {
            puVar18 = (undefined1 *)(lVar15 + (int)(param_5 * 3));
            puVar24 = (undefined1 *)
                      (lVar15 + (-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | uVar42 << 2));
            uVar31 = uVar42;
            do {
              puVar24[3] = 0xff;
              uVar10 = (int)uVar31 - 1;
              uVar31 = (ulong)uVar10;
              puVar24[2] = puVar18[2];
              puVar24[1] = puVar18[1];
              *puVar24 = *puVar18;
              puVar18 = puVar18 + -3;
              puVar24 = puVar24 + -4;
            } while (uVar10 != 0xffffffff);
          }
        }
        uVar43 = (ulong)((int)uVar43 + uVar9);
        if (uVar45 == uVar40) break;
        uVar40 = uVar40 + 1;
      }
    }
    else {
      if (param_7 != 0x10) {
        return uVar38;
      }
      uVar6 = param_5 * param_6 * param_4;
      if (uVar6 == 0) {
        return uVar38;
      }
      pauVar32 = (undefined1 (*) [16])param_1[3];
      if (uVar6 - 1 < 7) {
        uVar35 = 0;
        goto LAB_71000620bc;
      }
      pauVar25 = pauVar32;
      do {
        auVar48 = NEON_rev16(*pauVar25,1);
        pauVar26 = pauVar25 + 1;
        *pauVar25 = auVar48;
        pauVar25 = pauVar26;
      } while (pauVar26 != pauVar32 + (uVar6 >> 3));
      if ((uVar6 & 7) != 0) {
        uVar35 = uVar6 & 0xfffffff8;
        pauVar32 = (undefined1 (*) [16])(*pauVar32 + ((ulong)uVar6 & 0xfffffff8) * 2);
LAB_71000620bc:
        do {
          uVar35 = uVar35 + 1;
          *(ushort *)*pauVar32 =
               *(ushort *)*pauVar32 >> 8 | (ushort)((*(ushort *)*pauVar32 & 0xff00ff) << 8);
          pauVar32 = (undefined1 (*) [16])(*pauVar32 + 2);
        } while (uVar35 < uVar6);
      }
    }
    return uVar38;
  }
  lVar15 = param_1[3];
  uVar47 = (ulong)((int)uVar47 + uVar9);
  uVar45 = uVar27;
  goto LAB_7100061580;
LAB_71000617a8:
  do {
    lVar39 = 0;
    do {
      *(byte *)(lVar17 + lVar39) = pbVar22[lVar39];
      lVar39 = lVar39 + 1;
    } while (lVar15 != lVar39);
    iVar41 = iVar41 + -1;
    *(undefined1 *)(lVar17 + lVar15) = 0xff;
    pbVar22 = pbVar22 + lVar15;
    lVar17 = lVar17 + iVar28;
  } while (iVar41 != 0);
  param_2 = param_2 + (ulong)(param_5 - 2) * lVar15 + lVar15;
  goto LAB_71000617e4;
LAB_7100061f38:
  pcVar23 = "invalid filter";
LAB_7100061850:
  auVar48 = FUN_710076d158(puVar16,pcVar23);
  *(long *)(auVar48._0_8_ + 0x1050) = auVar48._8_8_;
  return 0;
}



// ===== FUN_71000623c0 @ 71000623c0 (size=372) =====

undefined1  [16] FUN_71000623c0(long *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  iVar2 = (int)param_1[1];
  iVar3 = *(int *)((long)param_1 + 0xc);
  bVar1 = iVar3 < iVar2;
  if (iVar2 < iVar3) {
    lVar12 = *param_1;
    iVar11 = iVar2 + 1;
    *(int *)(param_1 + 1) = iVar11;
    cVar4 = *(char *)(lVar12 + iVar2);
    if (iVar11 < iVar3) {
      iVar7 = iVar2 + 2;
      *(int *)(param_1 + 1) = iVar7;
      uVar10 = (uint)CONCAT11(cVar4,*(undefined1 *)(lVar12 + iVar11));
      iVar11 = iVar7;
      if (uVar10 == 0) {
LAB_71000624c0:
        uVar9 = (ulong)(uint)(iVar11 - iVar2);
        if ((-1 < iVar2 && iVar2 <= iVar3) && (-1 < iVar11 - iVar2 && iVar11 <= iVar3))
        goto LAB_71000624f0;
        goto LAB_71000624a4;
      }
      if (iVar3 <= iVar7) goto LAB_7100062518;
      *(int *)(param_1 + 1) = iVar2 + 3;
      bVar5 = *(byte *)(lVar12 + iVar7);
      iVar6 = iVar2 + 3 + uVar10 * bVar5;
      if (iVar6 < 0 || iVar3 < iVar6) {
        iVar6 = iVar3;
      }
      *(int *)(param_1 + 1) = iVar6;
      if (bVar5 == 0) {
        iVar11 = -1;
      }
      else {
        uVar10 = 0;
        uVar8 = 0;
        do {
          uVar8 = uVar8 << 8;
          if (iVar6 < iVar3) {
            *(int *)(param_1 + 1) = iVar6 + 1;
            uVar8 = uVar8 | *(byte *)(lVar12 + iVar6);
          }
          uVar10 = uVar10 + 1;
          iVar6 = (int)param_1[1];
        } while (bVar5 != uVar10);
        iVar11 = uVar8 - 1;
      }
    }
    else {
      iVar7 = iVar11;
      if (cVar4 == '\0') goto LAB_71000624c0;
LAB_7100062518:
      iVar11 = -1;
      iVar6 = iVar3;
      if (-1 < iVar7 && iVar7 <= iVar3) {
        iVar6 = iVar7;
      }
    }
    iVar11 = iVar11 + iVar6;
    bVar1 = false;
    iVar7 = iVar3;
    if (-1 < iVar11 && iVar11 <= iVar3) {
      iVar7 = iVar11;
    }
    uVar9 = (ulong)(uint)(iVar7 - iVar2);
    uVar10 = (uint)(iVar7 - iVar2) >> 0x1f;
    *(int *)(param_1 + 1) = iVar7;
  }
  else {
    uVar10 = 0;
    uVar9 = 0;
  }
  if ((-1 < iVar2 && iVar2 <= iVar3) && (uVar10 == 0 && !bVar1)) {
LAB_71000624f0:
    auVar13._8_8_ = uVar9 << 0x20;
    auVar13._0_8_ = *param_1 + (long)iVar2;
    return auVar13;
  }
LAB_71000624a4:
  return ZEXT816(0) << 0x40;
}



// ===== FUN_7100062540 @ 7100062540 (size=304) =====

int FUN_7100062540(long param_1)

{
  long lVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  pbVar2 = *(byte **)(param_1 + 0xc0);
  pbVar6 = *(byte **)(param_1 + 200);
  if (pbVar2 < pbVar6) {
    pbVar7 = pbVar2 + 1;
    *(byte **)(param_1 + 0xc0) = pbVar7;
    bVar3 = *pbVar2;
  }
  else {
    if (*(int *)(param_1 + 0x30) == 0) {
      return 0;
    }
    iVar4 = (**(code **)(param_1 + 0x10))
                      (*(undefined8 *)(param_1 + 0x28),param_1 + 0x38,
                       *(undefined4 *)(param_1 + 0x34));
    pbVar7 = (byte *)(param_1 + 0x39);
    *(int *)(param_1 + 0xb8) =
         *(int *)(param_1 + 0xb8) +
         ((int)*(undefined8 *)(param_1 + 0xc0) - (int)*(undefined8 *)(param_1 + 0xd0));
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined1 *)(param_1 + 0x38) = 0;
      *(byte **)(param_1 + 0xc0) = pbVar7;
      *(byte **)(param_1 + 200) = pbVar7;
      iVar4 = 0;
      goto LAB_71000625e0;
    }
    pbVar6 = (byte *)(param_1 + 0x38 + (long)iVar4);
    bVar3 = *(byte *)(param_1 + 0x38);
    *(byte **)(param_1 + 0xc0) = pbVar7;
    *(byte **)(param_1 + 200) = pbVar6;
  }
  iVar4 = (uint)bVar3 * 0x100;
  if (pbVar7 < pbVar6) {
    *(byte **)(param_1 + 0xc0) = pbVar7 + 1;
    return iVar4 + (uint)*pbVar7;
  }
LAB_71000625e0:
  if (*(int *)(param_1 + 0x30) == 0) {
    return iVar4;
  }
  iVar5 = (**(code **)(param_1 + 0x10))
                    (*(undefined8 *)(param_1 + 0x28),param_1 + 0x38,*(undefined4 *)(param_1 + 0x34))
  ;
  *(int *)(param_1 + 0xb8) =
       *(int *)(param_1 + 0xb8) +
       ((int)*(undefined8 *)(param_1 + 0xc0) - (int)*(undefined8 *)(param_1 + 0xd0));
  lVar1 = param_1 + 0x39;
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined1 *)(param_1 + 0x38) = 0;
    *(long *)(param_1 + 0xc0) = lVar1;
    *(long *)(param_1 + 200) = lVar1;
  }
  else {
    *(long *)(param_1 + 0xc0) = lVar1;
    *(long *)(param_1 + 200) = param_1 + 0x38 + (long)iVar5;
    iVar4 = iVar4 + (uint)*(byte *)(param_1 + 0x38);
  }
  return iVar4;
}



// ===== FUN_7100062670 @ 7100062670 (size=292) =====

ulong FUN_7100062670(long *param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar4;
  
  iVar5 = (int)param_1[1];
  iVar1 = *(int *)((long)param_1 + 0xc);
  if (iVar1 <= iVar5) {
    return 0;
  }
  lVar8 = *param_1;
  iVar6 = iVar5 + 1;
  *(int *)(param_1 + 1) = iVar6;
  bVar2 = *(byte *)(lVar8 + iVar5);
  if (bVar2 - 0x20 < 0xd7) {
    return (ulong)(bVar2 - 0x8b);
  }
  uVar7 = (uint)bVar2;
  if (uVar7 - 0xf7 < 4) {
    iVar3 = (uVar7 - 0xf7) * 0x100;
    if (iVar6 < iVar1) {
      *(int *)(param_1 + 1) = iVar5 + 2;
      iVar3 = iVar3 + (uint)*(byte *)(lVar8 + iVar6);
    }
    uVar4 = (ulong)(iVar3 + 0x6c);
  }
  else {
    if (uVar7 - 0xfb < 4) {
      iVar3 = (0xfb - (uint)bVar2) * 0x100;
      if (iVar6 < iVar1) {
        *(int *)(param_1 + 1) = iVar5 + 2;
        iVar3 = iVar3 - (uint)*(byte *)(lVar8 + iVar6);
      }
      return (ulong)(iVar3 - 0x6c);
    }
    if (uVar7 != 0x1c) {
      if (uVar7 != 0x1d) {
        return 0;
      }
      iVar5 = 4;
      uVar4 = 0;
      while( true ) {
        uVar7 = (int)uVar4 << 8;
        if (iVar6 < iVar1) {
          *(int *)(param_1 + 1) = iVar6 + 1;
          uVar7 = uVar7 | *(byte *)(lVar8 + iVar6);
        }
        uVar4 = (ulong)uVar7;
        iVar5 = iVar5 + -1;
        if (iVar5 == 0) break;
        iVar6 = (int)param_1[1];
      }
      return uVar4;
    }
    uVar4 = 0;
    if (iVar6 < iVar1) {
      iVar3 = iVar5 + 2;
      *(int *)(param_1 + 1) = iVar3;
      bVar2 = *(byte *)(lVar8 + iVar6);
      uVar4 = (ulong)bVar2 << 8;
      if (iVar3 < iVar1) {
        *(int *)(param_1 + 1) = iVar5 + 3;
        return (ulong)CONCAT11(bVar2,*(undefined1 *)(lVar8 + iVar3));
      }
    }
  }
  return uVar4;
}



// ===== FUN_71000627a0 @ 71000627a0 (size=360) =====

void FUN_71000627a0(long *param_1,ulong param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ulong extraout_x8;
  long lVar8;
  long extraout_x8_00;
  long extraout_x9;
  uint uVar9;
  ulong uVar10;
  ulong extraout_x10;
  ulong uVar11;
  long extraout_x11;
  long extraout_x12;
  ulong extraout_x13;
  long local_10;
  int local_8;
  int iStack_4;
  
  param_2 = param_2 & 0xffffffff;
  uVar6 = *(uint *)((long)param_1 + 0xc);
  uVar7 = (ulong)uVar6;
  uVar9 = uVar6 & (int)uVar6 >> 0x1f;
  *(uint *)(param_1 + 1) = uVar9;
  if ((int)uVar9 < (int)uVar6) {
    do {
      uVar10 = (ulong)uVar9;
      local_10 = *param_1;
      uVar11 = uVar10;
      do {
        iVar4 = (int)uVar10;
        iVar5 = (int)uVar7;
        if (*(byte *)(local_10 + iVar4) < 0x1c) {
LAB_71000628a4:
          if (iVar5 <= iVar4) break;
          iVar2 = iVar4 + 1;
          *(int *)(param_1 + 1) = iVar2;
          uVar9 = (uint)*(byte *)(local_10 + iVar4);
          if (*(byte *)(local_10 + iVar4) == 0xc) {
            if (iVar5 <= iVar2) break;
            *(int *)(param_1 + 1) = iVar4 + 2;
            uVar9 = *(byte *)(local_10 + iVar2) | 0x100;
          }
          if ((uint)param_2 == uVar9) {
            uVar9 = (uint)uVar11;
            uVar7 = (ulong)(iVar4 - uVar9);
            local_10 = local_10 + (int)uVar9;
            if ((int)(uVar9 | iVar4 - uVar9) < 0) {
              uVar7 = 0;
              local_10 = 0;
            }
            goto LAB_7100062818;
          }
          break;
        }
        if (*(byte *)(local_10 + iVar4) == 0x1e) {
          iVar4 = iVar4 + 1;
          if (iVar4 < 0 || iVar5 < iVar4) {
            iVar4 = iVar5;
          }
          lVar8 = (long)iVar4;
          *(int *)(param_1 + 1) = iVar4;
          do {
            iVar4 = (int)lVar8;
            if (iVar5 <= iVar4) goto LAB_71000628a4;
            uVar10 = (ulong)(iVar4 + 1U);
            *(uint *)(param_1 + 1) = iVar4 + 1U;
            pbVar1 = (byte *)(local_10 + lVar8);
          } while (((*pbVar1 & 0xf) != 0xf) && (lVar8 = lVar8 + 1, (int)(uint)*pbVar1 >> 4 != 0xf));
        }
        else {
          FUN_7100062670(param_1);
          uVar10 = (ulong)*(uint *)(param_1 + 1);
          uVar7 = extraout_x8;
          local_10 = extraout_x9;
          uVar11 = extraout_x10;
          param_2 = extraout_x13;
        }
      } while ((int)uVar10 < (int)uVar7);
      uVar9 = *(uint *)(param_1 + 1);
      uVar6 = (uint)uVar7;
    } while ((int)uVar9 < (int)uVar6);
  }
  local_10 = 0;
  if (-1 < (int)uVar6) {
    local_10 = *param_1;
  }
  uVar7 = 0;
LAB_7100062818:
  lVar8 = 0;
  local_8 = 0;
  do {
    iStack_4 = (int)uVar7;
    if (iStack_4 <= local_8) {
      return;
    }
    uVar3 = FUN_7100062670(lVar8,&local_10);
    *(undefined4 *)(extraout_x11 + extraout_x8_00 * 4) = uVar3;
    lVar8 = extraout_x8_00 + 1;
  } while (lVar8 != extraout_x12);
  return;
}



// ===== FUN_7100062910 @ 7100062910 (size=192) =====

undefined8 FUN_7100062910(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int extraout_w14;
  int extraout_w15;
  int extraout_w15_00;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  undefined8 local_28;
  int local_1c;
  undefined8 local_18;
  long local_10;
  undefined4 local_8;
  uint uStack_4;
  
  local_1c = 0;
  local_18 = 0;
  local_40 = param_3;
  uStack_38 = param_4;
  local_30 = param_1;
  local_28 = param_2;
  FUN_71000627a0(&local_40,0x12,2,&local_18);
  if ((local_18._4_4_ != 0) && ((uint)local_18 != 0)) {
    if (((int)((uint)local_18 | local_18._4_4_) < 0) ||
       ((extraout_w15 < (int)local_18._4_4_ ||
        ((int)(extraout_w15 - local_18._4_4_) < (int)(uint)local_18)))) {
      local_10 = 0;
      uStack_4 = 0;
    }
    else {
      local_10 = local_30 + (ulong)local_18._4_4_;
      uStack_4 = (uint)local_18;
    }
    local_8 = 0;
    FUN_71000627a0(&local_10,0x13,1,&local_1c);
    if (local_1c != 0) {
      iVar1 = local_1c + extraout_w14;
      iVar2 = extraout_w15_00;
      if (-1 < iVar1 && iVar1 <= extraout_w15_00) {
        iVar2 = iVar1;
      }
      local_28 = CONCAT44(local_28._4_4_,iVar2);
      uVar3 = FUN_71000623c0(&local_30);
      return uVar3;
    }
  }
  return 0;
}



